// Lean compiler output
// Module: Lean.Compiler.LCNF.ElimDeadBranches
// Imports: public import Lean.Compiler.LCNF.InferType
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
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_Format_join(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedInductiveVal_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_getArity___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_instInhabited___redArg();
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_usage_note_resolved(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getFunDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_attachCodeDecls___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_size(uint8_t, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
lean_object* l_Nat_decLt___boxed(lean_object*, lean_object*);
lean_object* l_String_decidableLT___boxed(lean_object*, lean_object*);
uint8_t l_Prod_lexLtDec___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedDecl_default___redArg();
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_replaceFVars(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_bot_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_bot_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_top_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_top_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctor_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctor_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_choice_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_choice_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_maxValueDepth;
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instBEq___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instBEq = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_instBEq___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⊥"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__0_value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⊤"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__2_value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__3_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__4_value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__5_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__5_value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " | "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__10_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__10_value)}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Compiler.LCNF.ElimDeadBranches"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "Lean.Compiler.LCNF.UnreachableBranches.Value.inductValOfCtor"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__2(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 106, .m_capacity = 106, .m_length = 105, .m_data = "_private.Lean.Compiler.LCNF.ElimDeadBranches.0.Lean.Compiler.LCNF.UnreachableBranches.Value.merge.cleanup"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__0_value)}};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__1 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__1_value;
static const lean_string_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__2 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__2_value;
static const lean_string_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__3 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__3_value;
static const lean_ctor_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__3_value)}};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__4 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__4_value;
static const lean_ctor_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5_value;
static const lean_string_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__6 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7;
static lean_once_cell_t l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8;
static const lean_ctor_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__2_value)}};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__9 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__9_value;
static const lean_ctor_object l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__6_value)}};
static const lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__10 = (const lean_object*)&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Lean.Compiler.LCNF.UnreachableBranches.Value.addChoice"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "invalid addChoice "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " into "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__2_value;
static const lean_array_object l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_merge(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_merge_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_truncate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 81, 163, 94, 71, 156, 90, 186)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 118, .m_capacity = 118, .m_length = 117, .m_data = "_private.Lean.Compiler.LCNF.ElimDeadBranches.0.Lean.Compiler.LCNF.UnreachableBranches.Value.getLiteral.getNatConstant"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Not a well formed Nat constant Value"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___boxed(lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__2_value;
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 106, .m_capacity = 106, .m_length = 105, .m_data = "_private.Lean.Compiler.LCNF.ElimDeadBranches.0.Lean.Compiler.LCNF.UnreachableBranches.Value.getLiteral.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3;
static const lean_array_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__4_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__5_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__5_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__6_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__0_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__0_value;
static const lean_array_object l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "UnreachableBranches"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "functionSummariesExt"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(198, 130, 135, 69, 155, 14, 96, 131)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value_aux_3),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(210, 217, 249, 17, 195, 152, 212, 89)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed, .m_arity = 7, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg(lean_object*, size_t, size_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0(lean_object*, size_t, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_interpCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Analyzing "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__1_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "elimDeadBranches"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(94, 80, 110, 205, 32, 43, 118, 213)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__4_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__5_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__6_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Termination after "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " steps"};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateFunImp"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2;
static const lean_string_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Threw away cases "};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " branch "};
static const lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__0_value;
static lean_once_cell_t l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1;
static lean_once_cell_t l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2;
static const lean_ctor_object l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__3 = (const lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__3_value;
static const lean_string_object l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__4 = (const lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__4_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__5 = (const lean_object*)&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__5_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Eliminating "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " with "};
static const lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Analyzing block: "};
static const lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_decLt___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__0_value;
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_decidableLT___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1;
static const lean_array_object l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_elimDeadBranches___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(160, 204, 232, 255, 130, 130, 66, 205)}};
static const lean_object* l_Lean_Compiler_LCNF_elimDeadBranches___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_elimDeadBranches___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Decl_elimDeadBranches___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_elimDeadBranches___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_elimDeadBranches___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__1_value),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_elimDeadBranches___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_elimDeadBranches = (const lean_object*)&l_Lean_Compiler_LCNF_elimDeadBranches___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ElimDeadBranches"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(61, 48, 204, 64, 9, 167, 133, 249)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(200, 150, 161, 93, 149, 239, 245, 119)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 115, 55, 70, 37, 185, 29, 189)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(207, 112, 73, 71, 157, 233, 191, 127)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(162, 232, 253, 11, 187, 111, 207, 156)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(23, 23, 231, 170, 231, 155, 87, 99)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(210, 213, 22, 254, 230, 125, 90, 112)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(211, 11, 80, 195, 104, 227, 74, 88)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(181, 249, 148, 177, 5, 97, 125, 57)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(96, 90, 29, 229, 248, 57, 61, 64)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(40, 188, 228, 238, 115, 92, 75, 9)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
switch(lean_obj_tag(v_t_5_))
{
case 2:
{
lean_object* v_i_7_; lean_object* v_vs_8_; lean_object* v___x_9_; 
v_i_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_i_7_);
v_vs_8_ = lean_ctor_get(v_t_5_, 1);
lean_inc_ref(v_vs_8_);
lean_dec_ref_known(v_t_5_, 2);
v___x_9_ = lean_apply_2(v_k_6_, v_i_7_, v_vs_8_);
return v___x_9_;
}
case 3:
{
lean_object* v_vs_10_; lean_object* v___x_11_; 
v_vs_10_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_vs_10_);
lean_dec_ref_known(v_t_5_, 1);
v___x_11_ = lean_apply_1(v_k_6_, v_vs_10_);
return v___x_11_;
}
default: 
{
lean_dec(v_t_5_);
return v_k_6_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim(lean_object* v_motive__1_12_, lean_object* v_ctorIdx_13_, lean_object* v_t_14_, lean_object* v_h_15_, lean_object* v_k_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_14_, v_k_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___boxed(lean_object* v_motive__1_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim(v_motive__1_18_, v_ctorIdx_19_, v_t_20_, v_h_21_, v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_bot_elim___redArg(lean_object* v_t_24_, lean_object* v_bot_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_24_, v_bot_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_bot_elim(lean_object* v_motive__1_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_bot_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_28_, v_bot_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_top_elim___redArg(lean_object* v_t_32_, lean_object* v_top_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_32_, v_top_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_top_elim(lean_object* v_motive__1_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_top_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_36_, v_top_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctor_elim___redArg(lean_object* v_t_40_, lean_object* v_ctor_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_40_, v_ctor_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctor_elim(lean_object* v_motive__1_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_ctor_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_44_, v_ctor_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_choice_elim___redArg(lean_object* v_t_48_, lean_object* v_choice_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_48_, v_choice_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_choice_elim(lean_object* v_motive__1_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_choice_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ctorElim___redArg(v_t_52_, v_choice_54_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue_default(void){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = lean_box(0);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_box(0);
return v___x_57_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_maxValueDepth(void){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = lean_unsigned_to_nat(8u);
return v___x_58_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___redArg(lean_object* v_xs_59_, lean_object* v_ys_60_, lean_object* v_x_61_){
_start:
{
lean_object* v_zero_62_; uint8_t v_isZero_63_; 
v_zero_62_ = lean_unsigned_to_nat(0u);
v_isZero_63_ = lean_nat_dec_eq(v_x_61_, v_zero_62_);
if (v_isZero_63_ == 1)
{
lean_dec(v_x_61_);
return v_isZero_63_;
}
else
{
lean_object* v_one_64_; lean_object* v_n_65_; lean_object* v___x_66_; lean_object* v___x_67_; uint8_t v___x_68_; 
v_one_64_ = lean_unsigned_to_nat(1u);
v_n_65_ = lean_nat_sub(v_x_61_, v_one_64_);
lean_dec(v_x_61_);
v___x_66_ = lean_array_fget_borrowed(v_xs_59_, v_n_65_);
v___x_67_ = lean_array_fget_borrowed(v_ys_60_, v_n_65_);
v___x_68_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v___x_66_, v___x_67_);
if (v___x_68_ == 0)
{
lean_dec(v_n_65_);
return v___x_68_;
}
else
{
v_x_61_ = v_n_65_;
goto _start;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(lean_object* v_x_70_, lean_object* v_x_71_){
_start:
{
switch(lean_obj_tag(v_x_70_))
{
case 0:
{
if (lean_obj_tag(v_x_71_) == 0)
{
uint8_t v___x_72_; 
v___x_72_ = 1;
return v___x_72_;
}
else
{
uint8_t v___x_73_; 
v___x_73_ = 0;
return v___x_73_;
}
}
case 1:
{
if (lean_obj_tag(v_x_71_) == 1)
{
uint8_t v___x_74_; 
v___x_74_ = 1;
return v___x_74_;
}
else
{
uint8_t v___x_75_; 
v___x_75_ = 0;
return v___x_75_;
}
}
case 2:
{
if (lean_obj_tag(v_x_71_) == 2)
{
lean_object* v_i_76_; lean_object* v_vs_77_; lean_object* v_i_78_; lean_object* v_vs_79_; uint8_t v___x_80_; 
v_i_76_ = lean_ctor_get(v_x_70_, 0);
v_vs_77_ = lean_ctor_get(v_x_70_, 1);
v_i_78_ = lean_ctor_get(v_x_71_, 0);
v_vs_79_ = lean_ctor_get(v_x_71_, 1);
v___x_80_ = lean_name_eq(v_i_76_, v_i_78_);
if (v___x_80_ == 0)
{
return v___x_80_;
}
else
{
lean_object* v___x_81_; lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_81_ = lean_array_get_size(v_vs_77_);
v___x_82_ = lean_array_get_size(v_vs_79_);
v___x_83_ = lean_nat_dec_eq(v___x_81_, v___x_82_);
if (v___x_83_ == 0)
{
return v___x_83_;
}
else
{
uint8_t v___x_84_; 
v___x_84_ = l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___redArg(v_vs_77_, v_vs_79_, v___x_81_);
return v___x_84_;
}
}
}
else
{
uint8_t v___x_85_; 
v___x_85_ = 0;
return v___x_85_;
}
}
default: 
{
if (lean_obj_tag(v_x_71_) == 3)
{
lean_object* v_vs_86_; lean_object* v_vs_87_; uint8_t v___x_88_; 
v_vs_86_ = lean_ctor_get(v_x_70_, 0);
v_vs_87_ = lean_ctor_get(v_x_71_, 0);
v___x_88_ = l_List_all___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__1(v_vs_87_, v_vs_86_);
if (v___x_88_ == 0)
{
return v___x_88_;
}
else
{
uint8_t v___x_89_; 
v___x_89_ = l_List_all___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__1(v_vs_86_, v_vs_87_);
return v___x_89_;
}
}
else
{
uint8_t v___x_90_; 
v___x_90_ = 0;
return v___x_90_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0(lean_object* v_a_91_, lean_object* v_x_92_){
_start:
{
if (lean_obj_tag(v_x_92_) == 0)
{
uint8_t v___x_93_; 
v___x_93_ = 0;
return v___x_93_;
}
else
{
lean_object* v_head_94_; lean_object* v_tail_95_; uint8_t v___x_96_; 
v_head_94_ = lean_ctor_get(v_x_92_, 0);
v_tail_95_ = lean_ctor_get(v_x_92_, 1);
v___x_96_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_a_91_, v_head_94_);
if (v___x_96_ == 0)
{
v_x_92_ = v_tail_95_;
goto _start;
}
else
{
return v___x_96_;
}
}
}
}
LEAN_EXPORT uint8_t l_List_all___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__1(lean_object* v_bs_98_, lean_object* v_x_99_){
_start:
{
if (lean_obj_tag(v_x_99_) == 0)
{
uint8_t v___x_100_; 
v___x_100_ = 1;
return v___x_100_;
}
else
{
lean_object* v_head_101_; lean_object* v_tail_102_; uint8_t v___x_103_; 
v_head_101_ = lean_ctor_get(v_x_99_, 0);
v_tail_102_ = lean_ctor_get(v_x_99_, 1);
v___x_103_ = l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0(v_head_101_, v_bs_98_);
if (v___x_103_ == 0)
{
return v___x_103_;
}
else
{
v_x_99_ = v_tail_102_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__1___boxed(lean_object* v_bs_105_, lean_object* v_x_106_){
_start:
{
uint8_t v_res_107_; lean_object* v_r_108_; 
v_res_107_ = l_List_all___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__1(v_bs_105_, v_x_106_);
lean_dec(v_x_106_);
lean_dec(v_bs_105_);
v_r_108_ = lean_box(v_res_107_);
return v_r_108_;
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0___boxed(lean_object* v_a_109_, lean_object* v_x_110_){
_start:
{
uint8_t v_res_111_; lean_object* v_r_112_; 
v_res_111_ = l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__0(v_a_109_, v_x_110_);
lean_dec(v_x_110_);
lean_dec(v_a_109_);
v_r_112_ = lean_box(v_res_111_);
return v_r_112_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___redArg___boxed(lean_object* v_xs_113_, lean_object* v_ys_114_, lean_object* v_x_115_){
_start:
{
uint8_t v_res_116_; lean_object* v_r_117_; 
v_res_116_ = l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___redArg(v_xs_113_, v_ys_114_, v_x_115_);
lean_dec_ref(v_ys_114_);
lean_dec_ref(v_xs_113_);
v_r_117_ = lean_box(v_res_116_);
return v_r_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq___boxed(lean_object* v_x_118_, lean_object* v_x_119_){
_start:
{
uint8_t v_res_120_; lean_object* v_r_121_; 
v_res_120_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_x_118_, v_x_119_);
lean_dec(v_x_119_);
lean_dec(v_x_118_);
v_r_121_ = lean_box(v_res_120_);
return v_r_121_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2(lean_object* v_xs_122_, lean_object* v_ys_123_, lean_object* v_hsz_124_, lean_object* v_x_125_, lean_object* v_x_126_){
_start:
{
uint8_t v___x_127_; 
v___x_127_ = l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___redArg(v_xs_122_, v_ys_123_, v_x_125_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2___boxed(lean_object* v_xs_128_, lean_object* v_ys_129_, lean_object* v_hsz_130_, lean_object* v_x_131_, lean_object* v_x_132_){
_start:
{
uint8_t v_res_133_; lean_object* v_r_134_; 
v_res_133_ = l_Array_isEqvAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_beq_spec__2(v_xs_128_, v_ys_129_, v_hsz_130_, v_x_131_, v_x_132_);
lean_dec_ref(v_ys_129_);
lean_dec_ref(v_xs_128_);
v_r_134_ = lean_box(v_res_133_);
return v_r_134_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__1(lean_object* v_a_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = lean_nat_to_int(v_a_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3_spec__3(lean_object* v_x_139_, lean_object* v_x_140_, lean_object* v_x_141_){
_start:
{
if (lean_obj_tag(v_x_141_) == 0)
{
lean_dec(v_x_139_);
return v_x_140_;
}
else
{
lean_object* v_head_142_; lean_object* v_tail_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_152_; 
v_head_142_ = lean_ctor_get(v_x_141_, 0);
v_tail_143_ = lean_ctor_get(v_x_141_, 1);
v_isSharedCheck_152_ = !lean_is_exclusive(v_x_141_);
if (v_isSharedCheck_152_ == 0)
{
v___x_145_ = v_x_141_;
v_isShared_146_ = v_isSharedCheck_152_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_tail_143_);
lean_inc(v_head_142_);
lean_dec(v_x_141_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_152_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
lean_inc(v_x_139_);
if (v_isShared_146_ == 0)
{
lean_ctor_set_tag(v___x_145_, 5);
lean_ctor_set(v___x_145_, 1, v_x_139_);
lean_ctor_set(v___x_145_, 0, v_x_140_);
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_x_140_);
lean_ctor_set(v_reuseFailAlloc_151_, 1, v_x_139_);
v___x_148_ = v_reuseFailAlloc_151_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
lean_object* v___x_149_; 
v___x_149_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
lean_ctor_set(v___x_149_, 1, v_head_142_);
v_x_140_ = v___x_149_;
v_x_141_ = v_tail_143_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3(lean_object* v_x_153_, lean_object* v_x_154_){
_start:
{
if (lean_obj_tag(v_x_153_) == 0)
{
lean_object* v___x_155_; 
lean_dec(v_x_154_);
v___x_155_ = lean_box(0);
return v___x_155_;
}
else
{
lean_object* v_tail_156_; 
v_tail_156_ = lean_ctor_get(v_x_153_, 1);
if (lean_obj_tag(v_tail_156_) == 0)
{
lean_object* v_head_157_; 
lean_dec(v_x_154_);
v_head_157_ = lean_ctor_get(v_x_153_, 0);
lean_inc(v_head_157_);
lean_dec_ref_known(v_x_153_, 2);
return v_head_157_;
}
else
{
lean_object* v_head_158_; lean_object* v___x_159_; 
lean_inc(v_tail_156_);
v_head_158_ = lean_ctor_get(v_x_153_, 0);
lean_inc(v_head_158_);
lean_dec_ref_known(v_x_153_, 2);
v___x_159_ = l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3_spec__3(v_x_154_, v_head_158_, v_tail_156_);
return v___x_159_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0(lean_object* v_a_169_, lean_object* v_a_170_){
_start:
{
if (lean_obj_tag(v_a_169_) == 0)
{
lean_object* v___x_171_; 
v___x_171_ = l_List_reverse___redArg(v_a_170_);
return v___x_171_;
}
else
{
lean_object* v_head_172_; lean_object* v_tail_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_184_; 
v_head_172_ = lean_ctor_get(v_a_169_, 0);
v_tail_173_ = lean_ctor_get(v_a_169_, 1);
v_isSharedCheck_184_ = !lean_is_exclusive(v_a_169_);
if (v_isSharedCheck_184_ == 0)
{
v___x_175_ = v_a_169_;
v_isShared_176_ = v_isSharedCheck_184_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_tail_173_);
lean_inc(v_head_172_);
lean_dec(v_a_169_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_184_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_181_; 
v___x_177_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0___closed__1));
v___x_178_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_head_172_);
v___x_179_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_177_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 1, v_a_170_);
lean_ctor_set(v___x_175_, 0, v___x_179_);
v___x_181_ = v___x_175_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_179_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v_a_170_);
v___x_181_ = v_reuseFailAlloc_183_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
v_a_169_ = v_tail_173_;
v_a_170_ = v___x_181_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6(void){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__4));
v___x_187_ = lean_string_length(v___x_186_);
return v___x_187_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__6);
v___x_189_ = lean_nat_to_int(v___x_188_);
return v___x_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(lean_object* v_x_198_){
_start:
{
switch(lean_obj_tag(v_x_198_))
{
case 0:
{
lean_object* v___x_199_; 
v___x_199_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__1));
return v___x_199_;
}
case 1:
{
lean_object* v___x_200_; 
v___x_200_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__3));
return v___x_200_;
}
case 2:
{
lean_object* v_i_201_; lean_object* v_vs_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_229_; 
v_i_201_ = lean_ctor_get(v_x_198_, 0);
v_vs_202_ = lean_ctor_get(v_x_198_, 1);
v_isSharedCheck_229_ = !lean_is_exclusive(v_x_198_);
if (v_isSharedCheck_229_ == 0)
{
v___x_204_ = v_x_198_;
v_isShared_205_ = v_isSharedCheck_229_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_vs_202_);
lean_inc(v_i_201_);
lean_dec(v_x_198_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_229_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_206_ = lean_array_get_size(v_vs_202_);
v___x_207_ = lean_unsigned_to_nat(0u);
v___x_208_ = lean_nat_dec_eq(v___x_206_, v___x_207_);
if (v___x_208_ == 0)
{
uint8_t v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_217_; 
v___x_209_ = 1;
v___x_210_ = l_Lean_Name_toString(v_i_201_, v___x_209_);
v___x_211_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
v___x_212_ = lean_array_to_list(v_vs_202_);
v___x_213_ = lean_box(0);
v___x_214_ = l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__0(v___x_212_, v___x_213_);
v___x_215_ = l_Std_Format_join(v___x_214_);
if (v_isShared_205_ == 0)
{
lean_ctor_set_tag(v___x_204_, 5);
lean_ctor_set(v___x_204_, 1, v___x_215_);
lean_ctor_set(v___x_204_, 0, v___x_211_);
v___x_217_ = v___x_204_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v___x_211_);
lean_ctor_set(v_reuseFailAlloc_226_, 1, v___x_215_);
v___x_217_ = v_reuseFailAlloc_226_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; uint8_t v___x_224_; lean_object* v___x_225_; 
v___x_218_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7);
v___x_219_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8));
v___x_220_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_219_);
lean_ctor_set(v___x_220_, 1, v___x_217_);
v___x_221_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9));
v___x_222_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_220_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
v___x_223_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_218_);
lean_ctor_set(v___x_223_, 1, v___x_222_);
v___x_224_ = 0;
v___x_225_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_225_, 0, v___x_223_);
lean_ctor_set_uint8(v___x_225_, sizeof(void*)*1, v___x_224_);
return v___x_225_;
}
}
else
{
lean_object* v___x_227_; lean_object* v___x_228_; 
lean_del_object(v___x_204_);
lean_dec_ref(v_vs_202_);
v___x_227_ = l_Lean_Name_toString(v_i_201_, v___x_208_);
v___x_228_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_228_, 0, v___x_227_);
return v___x_228_;
}
}
}
default: 
{
lean_object* v_vs_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; uint8_t v___x_241_; lean_object* v___x_242_; 
v_vs_230_ = lean_ctor_get(v_x_198_, 0);
lean_inc(v_vs_230_);
lean_dec_ref_known(v_x_198_, 1);
v___x_231_ = lean_box(0);
v___x_232_ = l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__2(v_vs_230_, v___x_231_);
v___x_233_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__11));
v___x_234_ = l_Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3(v___x_232_, v___x_233_);
v___x_235_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7);
v___x_236_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8));
v___x_237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
lean_ctor_set(v___x_237_, 1, v___x_234_);
v___x_238_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9));
v___x_239_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_235_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = 0;
v___x_242_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_242_, 0, v___x_240_);
lean_ctor_set_uint8(v___x_242_, sizeof(void*)*1, v___x_241_);
return v___x_242_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__2(lean_object* v_a_243_, lean_object* v_a_244_){
_start:
{
if (lean_obj_tag(v_a_243_) == 0)
{
lean_object* v___x_245_; 
v___x_245_ = l_List_reverse___redArg(v_a_244_);
return v___x_245_;
}
else
{
lean_object* v_head_246_; lean_object* v_tail_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_256_; 
v_head_246_ = lean_ctor_get(v_a_243_, 0);
v_tail_247_ = lean_ctor_get(v_a_243_, 1);
v_isSharedCheck_256_ = !lean_is_exclusive(v_a_243_);
if (v_isSharedCheck_256_ == 0)
{
v___x_249_ = v_a_243_;
v_isShared_250_ = v_isSharedCheck_256_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_tail_247_);
lean_inc(v_head_246_);
lean_dec(v_a_243_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_256_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_251_; lean_object* v___x_253_; 
v___x_251_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_head_246_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 1, v_a_244_);
lean_ctor_set(v___x_249_, 0, v___x_251_);
v___x_253_ = v___x_249_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v___x_251_);
lean_ctor_set(v_reuseFailAlloc_255_, 1, v_a_244_);
v___x_253_ = v_reuseFailAlloc_255_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
v_a_243_ = v_tail_247_;
v_a_244_ = v___x_253_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0(lean_object* v_v_257_, lean_object* v_x_258_){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_v_257_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0___boxed(lean_object* v_v_260_, lean_object* v_x_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_instRepr___lam__0(v_v_260_, v_x_261_);
lean_dec(v_x_261_);
return v_res_262_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0(lean_object* v_msg_272_){
_start:
{
lean_object* v___f_273_; lean_object* v___f_274_; lean_object* v___f_275_; lean_object* v___f_276_; lean_object* v___f_277_; lean_object* v___f_278_; lean_object* v___f_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; 
v___f_273_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0));
v___f_274_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1));
v___f_275_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2));
v___f_276_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3));
v___f_277_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4));
v___f_278_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5));
v___f_279_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6));
v___x_280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_280_, 0, v___f_273_);
lean_ctor_set(v___x_280_, 1, v___f_274_);
v___x_281_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
lean_ctor_set(v___x_281_, 1, v___f_275_);
lean_ctor_set(v___x_281_, 2, v___f_276_);
lean_ctor_set(v___x_281_, 3, v___f_277_);
lean_ctor_set(v___x_281_, 4, v___f_278_);
v___x_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_281_);
lean_ctor_set(v___x_282_, 1, v___f_279_);
v___x_283_ = l_Lean_instInhabitedInductiveVal_default;
v___x_284_ = l_instInhabitedOfMonad___redArg(v___x_282_, v___x_283_);
v___x_285_ = lean_panic_fn_borrowed(v___x_284_, v_msg_272_);
lean_dec(v___x_284_);
return v___x_285_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3(void){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_289_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_290_ = lean_unsigned_to_nat(51u);
v___x_291_ = lean_unsigned_to_nat(72u);
v___x_292_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__1));
v___x_293_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_294_ = l_mkPanicMessageWithDecl(v___x_293_, v___x_292_, v___x_291_, v___x_290_, v___x_289_);
return v___x_294_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_295_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_296_ = lean_unsigned_to_nat(56u);
v___x_297_ = lean_unsigned_to_nat(73u);
v___x_298_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__1));
v___x_299_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_300_ = l_mkPanicMessageWithDecl(v___x_299_, v___x_298_, v___x_297_, v___x_296_, v___x_295_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor(lean_object* v_ctorName_301_, lean_object* v_env_302_){
_start:
{
uint8_t v___x_309_; lean_object* v___x_310_; 
v___x_309_ = 0;
lean_inc_ref(v_env_302_);
v___x_310_ = l_Lean_Environment_find_x3f(v_env_302_, v_ctorName_301_, v___x_309_);
if (lean_obj_tag(v___x_310_) == 1)
{
lean_object* v_val_311_; 
v_val_311_ = lean_ctor_get(v___x_310_, 0);
lean_inc(v_val_311_);
lean_dec_ref_known(v___x_310_, 1);
if (lean_obj_tag(v_val_311_) == 6)
{
lean_object* v_val_312_; lean_object* v_induct_313_; lean_object* v___x_314_; 
v_val_312_ = lean_ctor_get(v_val_311_, 0);
lean_inc_ref(v_val_312_);
lean_dec_ref_known(v_val_311_, 1);
v_induct_313_ = lean_ctor_get(v_val_312_, 1);
lean_inc(v_induct_313_);
lean_dec_ref(v_val_312_);
v___x_314_ = l_Lean_Environment_find_x3f(v_env_302_, v_induct_313_, v___x_309_);
if (lean_obj_tag(v___x_314_) == 1)
{
lean_object* v_val_315_; 
v_val_315_ = lean_ctor_get(v___x_314_, 0);
lean_inc(v_val_315_);
lean_dec_ref_known(v___x_314_, 1);
if (lean_obj_tag(v_val_315_) == 5)
{
lean_object* v_val_316_; 
v_val_316_ = lean_ctor_get(v_val_315_, 0);
lean_inc_ref(v_val_316_);
lean_dec_ref_known(v_val_315_, 1);
return v_val_316_;
}
else
{
lean_dec(v_val_315_);
goto v___jp_306_;
}
}
else
{
lean_dec(v___x_314_);
goto v___jp_306_;
}
}
else
{
lean_dec(v_val_311_);
lean_dec_ref(v_env_302_);
goto v___jp_303_;
}
}
else
{
lean_dec(v___x_310_);
lean_dec_ref(v_env_302_);
goto v___jp_303_;
}
v___jp_303_:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__3);
v___x_305_ = l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0(v___x_304_);
return v___x_305_;
}
v___jp_306_:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__4);
v___x_308_ = l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0(v___x_307_);
return v___x_308_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors(lean_object* v_ctorName_317_, lean_object* v_env_318_, lean_object* v_n_319_){
_start:
{
lean_object* v_induct_320_; lean_object* v___x_321_; uint8_t v___x_322_; 
v_induct_320_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor(v_ctorName_317_, v_env_318_);
v___x_321_ = l_Lean_InductiveVal_numCtors(v_induct_320_);
lean_dec_ref(v_induct_320_);
v___x_322_ = lean_nat_dec_eq(v_n_319_, v___x_321_);
lean_dec(v___x_321_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors___boxed(lean_object* v_ctorName_323_, lean_object* v_env_324_, lean_object* v_n_325_){
_start:
{
uint8_t v_res_326_; lean_object* v_r_327_; 
v_res_326_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors(v_ctorName_323_, v_env_324_, v_n_325_);
lean_dec(v_n_325_);
v_r_327_ = lean_box(v_res_326_);
return v_r_327_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0(uint8_t v___x_328_, lean_object* v_v_329_){
_start:
{
lean_object* v___x_330_; uint8_t v___x_331_; 
v___x_330_ = lean_box(1);
v___x_331_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_v_329_, v___x_330_);
if (v___x_331_ == 0)
{
return v___x_328_;
}
else
{
uint8_t v___x_332_; 
v___x_332_ = 0;
return v___x_332_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0___boxed(lean_object* v___x_333_, lean_object* v_v_334_){
_start:
{
uint8_t v___x_150__boxed_335_; uint8_t v_res_336_; lean_object* v_r_337_; 
v___x_150__boxed_335_ = lean_unbox(v___x_333_);
v_res_336_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0(v___x_150__boxed_335_, v_v_334_);
lean_dec(v_v_334_);
v_r_337_ = lean_box(v_res_336_);
return v_r_337_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible(lean_object* v_value_338_){
_start:
{
if (lean_obj_tag(v_value_338_) == 2)
{
lean_object* v_vs_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_366_; 
v_vs_339_ = lean_ctor_get(v_value_338_, 1);
v_isSharedCheck_366_ = !lean_is_exclusive(v_value_338_);
if (v_isSharedCheck_366_ == 0)
{
lean_object* v_unused_367_; 
v_unused_367_ = lean_ctor_get(v_value_338_, 0);
lean_dec(v_unused_367_);
v___x_341_ = v_value_338_;
v_isShared_342_ = v_isSharedCheck_366_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_vs_339_);
lean_dec(v_value_338_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_366_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___f_345_; lean_object* v___f_346_; lean_object* v___f_347_; lean_object* v___f_348_; lean_object* v___f_349_; lean_object* v___f_350_; lean_object* v___f_351_; lean_object* v___x_353_; 
v___x_343_ = lean_unsigned_to_nat(0u);
v___x_344_ = lean_array_get_size(v_vs_339_);
v___f_345_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0));
v___f_346_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1));
v___f_347_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2));
v___f_348_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3));
v___f_349_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4));
v___f_350_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5));
v___f_351_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6));
if (v_isShared_342_ == 0)
{
lean_ctor_set_tag(v___x_341_, 0);
lean_ctor_set(v___x_341_, 1, v___f_346_);
lean_ctor_set(v___x_341_, 0, v___f_345_);
v___x_353_ = v___x_341_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v___f_345_);
lean_ctor_set(v_reuseFailAlloc_365_, 1, v___f_346_);
v___x_353_ = v_reuseFailAlloc_365_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
lean_object* v___x_354_; lean_object* v___x_355_; uint8_t v___x_356_; 
v___x_354_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
lean_ctor_set(v___x_354_, 1, v___f_347_);
lean_ctor_set(v___x_354_, 2, v___f_348_);
lean_ctor_set(v___x_354_, 3, v___f_349_);
lean_ctor_set(v___x_354_, 4, v___f_350_);
v___x_355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_355_, 0, v___x_354_);
lean_ctor_set(v___x_355_, 1, v___f_351_);
v___x_356_ = lean_nat_dec_lt(v___x_343_, v___x_344_);
if (v___x_356_ == 0)
{
uint8_t v___x_357_; 
lean_dec_ref_known(v___x_355_, 2);
lean_dec_ref(v_vs_339_);
v___x_357_ = 1;
return v___x_357_;
}
else
{
if (v___x_356_ == 0)
{
lean_dec_ref_known(v___x_355_, 2);
lean_dec_ref(v_vs_339_);
return v___x_356_;
}
else
{
lean_object* v___x_358_; lean_object* v___f_359_; size_t v___x_360_; size_t v___x_361_; lean_object* v___x_362_; uint8_t v___x_363_; 
v___x_358_ = lean_box(v___x_356_);
v___f_359_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___lam__0___boxed), 2, 1);
lean_closure_set(v___f_359_, 0, v___x_358_);
v___x_360_ = ((size_t)0ULL);
v___x_361_ = lean_usize_of_nat(v___x_344_);
v___x_362_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_355_, v___f_359_, v_vs_339_, v___x_360_, v___x_361_);
v___x_363_ = lean_unbox(v___x_362_);
lean_dec(v___x_362_);
if (v___x_363_ == 0)
{
return v___x_356_;
}
else
{
uint8_t v___x_364_; 
v___x_364_ = 0;
return v___x_364_;
}
}
}
}
}
}
else
{
uint8_t v___x_368_; 
lean_dec(v_value_338_);
v___x_368_ = 0;
return v___x_368_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible___boxed(lean_object* v_value_369_){
_start:
{
uint8_t v_res_370_; lean_object* v_r_371_; 
v_res_370_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_eligible(v_value_369_);
v_r_371_ = lean_box(v_res_370_);
return v_r_371_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__2(lean_object* v_msg_372_){
_start:
{
lean_object* v___f_373_; lean_object* v___f_374_; lean_object* v___f_375_; lean_object* v___f_376_; lean_object* v___f_377_; lean_object* v___f_378_; lean_object* v___f_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___f_373_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__0));
v___f_374_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__1));
v___f_375_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__2));
v___f_376_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__3));
v___f_377_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__4));
v___f_378_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__5));
v___f_379_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor_spec__0___closed__6));
v___x_380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_380_, 0, v___f_373_);
lean_ctor_set(v___x_380_, 1, v___f_374_);
v___x_381_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
lean_ctor_set(v___x_381_, 1, v___f_375_);
lean_ctor_set(v___x_381_, 2, v___f_376_);
lean_ctor_set(v___x_381_, 3, v___f_377_);
lean_ctor_set(v___x_381_, 4, v___f_378_);
v___x_382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
lean_ctor_set(v___x_382_, 1, v___f_379_);
v___x_383_ = lean_box(0);
v___x_384_ = l_instInhabitedOfMonad___redArg(v___x_382_, v___x_383_);
v___x_385_ = lean_panic_fn_borrowed(v___x_384_, v_msg_372_);
lean_dec(v___x_384_);
return v___x_385_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0(lean_object* v_as_386_, size_t v_i_387_, size_t v_stop_388_){
_start:
{
uint8_t v___x_389_; 
v___x_389_ = lean_usize_dec_eq(v_i_387_, v_stop_388_);
if (v___x_389_ == 0)
{
lean_object* v___x_390_; lean_object* v___x_391_; uint8_t v___x_392_; 
v___x_390_ = lean_array_uget_borrowed(v_as_386_, v_i_387_);
v___x_391_ = lean_box(1);
v___x_392_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v___x_390_, v___x_391_);
if (v___x_392_ == 0)
{
uint8_t v___x_393_; 
v___x_393_ = 1;
return v___x_393_;
}
else
{
size_t v___x_394_; size_t v___x_395_; 
v___x_394_ = ((size_t)1ULL);
v___x_395_ = lean_usize_add(v_i_387_, v___x_394_);
v_i_387_ = v___x_395_;
goto _start;
}
}
else
{
uint8_t v___x_397_; 
v___x_397_ = 0;
return v___x_397_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0___boxed(lean_object* v_as_398_, lean_object* v_i_399_, lean_object* v_stop_400_){
_start:
{
size_t v_i_boxed_401_; size_t v_stop_boxed_402_; uint8_t v_res_403_; lean_object* v_r_404_; 
v_i_boxed_401_ = lean_unbox_usize(v_i_399_);
lean_dec(v_i_399_);
v_stop_boxed_402_ = lean_unbox_usize(v_stop_400_);
lean_dec(v_stop_400_);
v_res_403_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0(v_as_398_, v_i_boxed_401_, v_stop_boxed_402_);
lean_dec_ref(v_as_398_);
v_r_404_ = lean_box(v_res_403_);
return v_r_404_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__1(lean_object* v_x_405_){
_start:
{
if (lean_obj_tag(v_x_405_) == 0)
{
uint8_t v___x_406_; 
v___x_406_ = 1;
return v___x_406_;
}
else
{
lean_object* v_head_407_; 
v_head_407_ = lean_ctor_get(v_x_405_, 0);
if (lean_obj_tag(v_head_407_) == 2)
{
lean_object* v_tail_408_; lean_object* v_vs_409_; lean_object* v___x_410_; lean_object* v___x_411_; uint8_t v___x_412_; 
v_tail_408_ = lean_ctor_get(v_x_405_, 1);
v_vs_409_ = lean_ctor_get(v_head_407_, 1);
v___x_410_ = lean_unsigned_to_nat(0u);
v___x_411_ = lean_array_get_size(v_vs_409_);
v___x_412_ = lean_nat_dec_lt(v___x_410_, v___x_411_);
if (v___x_412_ == 0)
{
v_x_405_ = v_tail_408_;
goto _start;
}
else
{
size_t v___x_414_; size_t v___x_415_; uint8_t v___x_416_; 
v___x_414_ = ((size_t)0ULL);
v___x_415_ = lean_usize_of_nat(v___x_411_);
v___x_416_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0(v_vs_409_, v___x_414_, v___x_415_);
if (v___x_416_ == 0)
{
v_x_405_ = v_tail_408_;
goto _start;
}
else
{
uint8_t v___x_418_; 
v___x_418_ = 0;
return v___x_418_;
}
}
}
else
{
uint8_t v___x_419_; 
v___x_419_ = 0;
return v___x_419_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__1___boxed(lean_object* v_x_420_){
_start:
{
uint8_t v_res_421_; lean_object* v_r_422_; 
v_res_421_ = l_List_all___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__1(v_x_420_);
lean_dec(v_x_420_);
v_r_422_ = lean_box(v_res_421_);
return v_r_422_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__1(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_424_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_425_ = lean_unsigned_to_nat(42u);
v___x_426_ = lean_unsigned_to_nat(122u);
v___x_427_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__0));
v___x_428_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_429_ = l_mkPanicMessageWithDecl(v___x_428_, v___x_427_, v___x_426_, v___x_425_, v___x_424_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(lean_object* v_env_430_, lean_object* v_vs_431_){
_start:
{
uint8_t v___x_432_; 
v___x_432_ = l_List_all___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__1(v_vs_431_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; 
lean_dec_ref(v_env_430_);
v___x_433_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_433_, 0, v_vs_431_);
return v___x_433_;
}
else
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = lean_box(0);
v___x_435_ = l_List_head_x21___redArg(v___x_434_, v_vs_431_);
if (lean_obj_tag(v___x_435_) == 2)
{
lean_object* v_i_436_; lean_object* v___x_437_; uint8_t v___x_438_; 
v_i_436_ = lean_ctor_get(v___x_435_, 0);
lean_inc(v_i_436_);
lean_dec_ref_known(v___x_435_, 2);
v___x_437_ = l_List_lengthTR___redArg(v_vs_431_);
v___x_438_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors(v_i_436_, v_env_430_, v___x_437_);
lean_dec(v___x_437_);
if (v___x_438_ == 0)
{
lean_object* v___x_439_; 
v___x_439_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_439_, 0, v_vs_431_);
return v___x_439_;
}
else
{
lean_object* v___x_440_; 
lean_dec(v_vs_431_);
v___x_440_ = lean_box(1);
return v___x_440_;
}
}
else
{
lean_object* v___x_441_; lean_object* v___x_442_; 
lean_dec(v___x_435_);
lean_dec(v_vs_431_);
lean_dec_ref(v_env_430_);
v___x_441_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__1, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup___closed__1);
v___x_442_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__2(v___x_441_);
return v___x_442_;
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__1(lean_object* v_msg_443_){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = lean_box(0);
v___x_445_ = lean_panic_fn_borrowed(v___x_444_, v_msg_443_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0_spec__3(lean_object* v_x_446_, lean_object* v_x_447_, lean_object* v_x_448_){
_start:
{
if (lean_obj_tag(v_x_448_) == 0)
{
lean_dec(v_x_446_);
return v_x_447_;
}
else
{
lean_object* v_head_449_; lean_object* v_tail_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_460_; 
v_head_449_ = lean_ctor_get(v_x_448_, 0);
v_tail_450_ = lean_ctor_get(v_x_448_, 1);
v_isSharedCheck_460_ = !lean_is_exclusive(v_x_448_);
if (v_isSharedCheck_460_ == 0)
{
v___x_452_ = v_x_448_;
v_isShared_453_ = v_isSharedCheck_460_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_tail_450_);
lean_inc(v_head_449_);
lean_dec(v_x_448_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_460_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
lean_inc(v_x_446_);
if (v_isShared_453_ == 0)
{
lean_ctor_set_tag(v___x_452_, 5);
lean_ctor_set(v___x_452_, 1, v_x_446_);
lean_ctor_set(v___x_452_, 0, v_x_447_);
v___x_455_ = v___x_452_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_x_447_);
lean_ctor_set(v_reuseFailAlloc_459_, 1, v_x_446_);
v___x_455_ = v_reuseFailAlloc_459_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_456_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_head_449_);
v___x_457_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_457_, 0, v___x_455_);
lean_ctor_set(v___x_457_, 1, v___x_456_);
v_x_447_ = v___x_457_;
v_x_448_ = v_tail_450_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0(lean_object* v_x_461_, lean_object* v_x_462_){
_start:
{
if (lean_obj_tag(v_x_461_) == 0)
{
lean_object* v___x_463_; 
lean_dec(v_x_462_);
v___x_463_ = lean_box(0);
return v___x_463_;
}
else
{
lean_object* v_tail_464_; 
v_tail_464_ = lean_ctor_get(v_x_461_, 1);
if (lean_obj_tag(v_tail_464_) == 0)
{
lean_object* v_head_465_; lean_object* v___x_466_; 
lean_dec(v_x_462_);
v_head_465_ = lean_ctor_get(v_x_461_, 0);
lean_inc(v_head_465_);
lean_dec_ref_known(v_x_461_, 2);
v___x_466_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_head_465_);
return v___x_466_;
}
else
{
lean_object* v_head_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
lean_inc(v_tail_464_);
v_head_467_ = lean_ctor_get(v_x_461_, 0);
lean_inc(v_head_467_);
lean_dec_ref_known(v_x_461_, 2);
v___x_468_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_head_467_);
v___x_469_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0_spec__3(v_x_462_, v___x_468_, v_tail_464_);
return v___x_469_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_481_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__2));
v___x_482_ = lean_string_length(v___x_481_);
return v___x_482_;
}
}
static lean_object* _init_l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_483_ = lean_obj_once(&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7, &l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7_once, _init_l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__7);
v___x_484_ = lean_nat_to_int(v___x_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg(lean_object* v_a_489_){
_start:
{
if (lean_obj_tag(v_a_489_) == 0)
{
lean_object* v___x_490_; 
v___x_490_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__1));
return v___x_490_;
}
else
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; uint8_t v___x_499_; lean_object* v___x_500_; 
v___x_491_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5));
v___x_492_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0_spec__0(v_a_489_, v___x_491_);
v___x_493_ = lean_obj_once(&l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8, &l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8_once, _init_l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__8);
v___x_494_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__9));
v___x_495_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
lean_ctor_set(v___x_495_, 1, v___x_492_);
v___x_496_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__10));
v___x_497_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_495_);
lean_ctor_set(v___x_497_, 1, v___x_496_);
v___x_498_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_498_, 0, v___x_493_);
lean_ctor_set(v___x_498_, 1, v___x_497_);
v___x_499_ = 0;
v___x_500_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_500_, 0, v___x_498_);
lean_ctor_set_uint8(v___x_500_, sizeof(void*)*1, v___x_499_);
return v___x_500_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_merge(lean_object* v_env_506_, lean_object* v_v1_507_, lean_object* v_v2_508_){
_start:
{
lean_object* v___y_510_; lean_object* v___y_511_; lean_object* v___y_516_; lean_object* v_i_517_; lean_object* v_vs_518_; 
switch(lean_obj_tag(v_v1_507_))
{
case 0:
{
switch(lean_obj_tag(v_v2_508_))
{
case 2:
{
lean_object* v_i_525_; lean_object* v_vs_526_; 
v_i_525_ = lean_ctor_get(v_v2_508_, 0);
lean_inc(v_i_525_);
v_vs_526_ = lean_ctor_get(v_v2_508_, 1);
lean_inc_ref(v_vs_526_);
v___y_516_ = v_v2_508_;
v_i_517_ = v_i_525_;
v_vs_518_ = v_vs_526_;
goto v___jp_515_;
}
case 3:
{
lean_object* v_vs_527_; lean_object* v___x_528_; 
v_vs_527_ = lean_ctor_get(v_v2_508_, 0);
lean_inc(v_vs_527_);
lean_dec_ref_known(v_v2_508_, 1);
v___x_528_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_506_, v_vs_527_);
return v___x_528_;
}
default: 
{
lean_dec_ref(v_env_506_);
return v_v2_508_;
}
}
}
case 1:
{
lean_dec(v_v2_508_);
lean_dec_ref(v_env_506_);
return v_v1_507_;
}
case 2:
{
switch(lean_obj_tag(v_v2_508_))
{
case 0:
{
lean_object* v_i_529_; lean_object* v_vs_530_; 
v_i_529_ = lean_ctor_get(v_v1_507_, 0);
lean_inc(v_i_529_);
v_vs_530_ = lean_ctor_get(v_v1_507_, 1);
lean_inc_ref(v_vs_530_);
v___y_516_ = v_v1_507_;
v_i_517_ = v_i_529_;
v_vs_518_ = v_vs_530_;
goto v___jp_515_;
}
case 1:
{
lean_dec_ref_known(v_v1_507_, 2);
lean_dec_ref(v_env_506_);
return v_v2_508_;
}
case 2:
{
lean_object* v_i_531_; lean_object* v_vs_532_; lean_object* v_i_533_; lean_object* v_vs_534_; uint8_t v___x_535_; 
v_i_531_ = lean_ctor_get(v_v1_507_, 0);
v_vs_532_ = lean_ctor_get(v_v1_507_, 1);
v_i_533_ = lean_ctor_get(v_v2_508_, 0);
v_vs_534_ = lean_ctor_get(v_v2_508_, 1);
v___x_535_ = lean_name_eq(v_i_531_, v_i_533_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_536_ = lean_box(0);
v___x_537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_537_, 0, v_v2_508_);
lean_ctor_set(v___x_537_, 1, v___x_536_);
v___x_538_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_538_, 0, v_v1_507_);
lean_ctor_set(v___x_538_, 1, v___x_537_);
v___x_539_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_506_, v___x_538_);
return v___x_539_;
}
else
{
lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_549_; 
lean_inc_ref(v_vs_534_);
lean_inc_ref(v_vs_532_);
lean_inc(v_i_531_);
lean_dec_ref_known(v_v1_507_, 2);
v_isSharedCheck_549_ = !lean_is_exclusive(v_v2_508_);
if (v_isSharedCheck_549_ == 0)
{
lean_object* v_unused_550_; lean_object* v_unused_551_; 
v_unused_550_ = lean_ctor_get(v_v2_508_, 1);
lean_dec(v_unused_550_);
v_unused_551_ = lean_ctor_get(v_v2_508_, 0);
lean_dec(v_unused_551_);
v___x_541_ = v_v2_508_;
v_isShared_542_ = v_isSharedCheck_549_;
goto v_resetjp_540_;
}
else
{
lean_dec(v_v2_508_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_549_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_547_; 
v___x_543_ = lean_unsigned_to_nat(0u);
v___x_544_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3));
lean_inc_ref(v_env_506_);
v___x_545_ = l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2(v_env_506_, v_vs_532_, v_vs_534_, v___x_543_, v___x_544_);
lean_dec_ref(v_vs_534_);
lean_dec_ref(v_vs_532_);
lean_inc_ref(v___x_545_);
lean_inc(v_i_531_);
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 1, v___x_545_);
lean_ctor_set(v___x_541_, 0, v_i_531_);
v___x_547_ = v___x_541_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_i_531_);
lean_ctor_set(v_reuseFailAlloc_548_, 1, v___x_545_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
v___y_516_ = v___x_547_;
v_i_517_ = v_i_531_;
v_vs_518_ = v___x_545_;
goto v___jp_515_;
}
}
}
}
default: 
{
lean_object* v_vs_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v_vs_552_ = lean_ctor_get(v_v2_508_, 0);
lean_inc(v_vs_552_);
lean_dec_ref_known(v_v2_508_, 1);
lean_inc_ref(v_env_506_);
v___x_553_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(v_env_506_, v_vs_552_, v_v1_507_);
v___x_554_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_506_, v___x_553_);
return v___x_554_;
}
}
}
default: 
{
switch(lean_obj_tag(v_v2_508_))
{
case 0:
{
lean_object* v_vs_555_; lean_object* v___x_556_; 
v_vs_555_ = lean_ctor_get(v_v1_507_, 0);
lean_inc(v_vs_555_);
lean_dec_ref_known(v_v1_507_, 1);
v___x_556_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_506_, v_vs_555_);
return v___x_556_;
}
case 1:
{
lean_dec_ref_known(v_v1_507_, 1);
lean_dec_ref(v_env_506_);
return v_v2_508_;
}
case 3:
{
lean_object* v_vs_557_; lean_object* v_vs_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v_vs_557_ = lean_ctor_get(v_v1_507_, 0);
lean_inc(v_vs_557_);
lean_dec_ref_known(v_v1_507_, 1);
v_vs_558_ = lean_ctor_get(v_v2_508_, 0);
lean_inc(v_vs_558_);
lean_dec_ref_known(v_v2_508_, 1);
lean_inc_ref(v_env_506_);
v___x_559_ = l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_merge_spec__4(v_env_506_, v_vs_558_, v_vs_557_);
v___x_560_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_506_, v___x_559_);
return v___x_560_;
}
default: 
{
lean_object* v_vs_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v_vs_561_ = lean_ctor_get(v_v1_507_, 0);
lean_inc(v_vs_561_);
lean_dec_ref_known(v_v1_507_, 1);
lean_inc_ref(v_env_506_);
v___x_562_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(v_env_506_, v_vs_561_, v_v2_508_);
v___x_563_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup(v_env_506_, v___x_562_);
return v___x_563_;
}
}
}
}
v___jp_509_:
{
lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_512_ = lean_unsigned_to_nat(1u);
v___x_513_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_inductHasNumCtors(v___y_511_, v_env_506_, v___x_512_);
if (v___x_513_ == 0)
{
return v___y_510_;
}
else
{
lean_object* v___x_514_; 
lean_dec(v___y_510_);
v___x_514_ = lean_box(1);
return v___x_514_;
}
}
v___jp_515_:
{
lean_object* v___x_519_; lean_object* v___x_520_; uint8_t v___x_521_; 
v___x_519_ = lean_unsigned_to_nat(0u);
v___x_520_ = lean_array_get_size(v_vs_518_);
v___x_521_ = lean_nat_dec_lt(v___x_519_, v___x_520_);
if (v___x_521_ == 0)
{
lean_dec_ref(v_vs_518_);
v___y_510_ = v___y_516_;
v___y_511_ = v_i_517_;
goto v___jp_509_;
}
else
{
size_t v___x_522_; size_t v___x_523_; uint8_t v___x_524_; 
v___x_522_ = ((size_t)0ULL);
v___x_523_ = lean_usize_of_nat(v___x_520_);
v___x_524_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_merge_cleanup_spec__0(v_vs_518_, v___x_522_, v___x_523_);
lean_dec_ref(v_vs_518_);
if (v___x_524_ == 0)
{
v___y_510_ = v___y_516_;
v___y_511_ = v_i_517_;
goto v___jp_509_;
}
else
{
lean_dec(v_i_517_);
lean_dec_ref(v_env_506_);
return v___y_516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2(lean_object* v_env_564_, lean_object* v_as_565_, lean_object* v_bs_566_, lean_object* v_i_567_, lean_object* v_cs_568_){
_start:
{
lean_object* v___x_569_; uint8_t v___x_570_; 
v___x_569_ = lean_array_get_size(v_as_565_);
v___x_570_ = lean_nat_dec_lt(v_i_567_, v___x_569_);
if (v___x_570_ == 0)
{
lean_dec(v_i_567_);
lean_dec_ref(v_env_564_);
return v_cs_568_;
}
else
{
lean_object* v___x_571_; uint8_t v___x_572_; 
v___x_571_ = lean_array_get_size(v_bs_566_);
v___x_572_ = lean_nat_dec_lt(v_i_567_, v___x_571_);
if (v___x_572_ == 0)
{
lean_dec(v_i_567_);
lean_dec_ref(v_env_564_);
return v_cs_568_;
}
else
{
lean_object* v_a_573_; lean_object* v_b_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v_a_573_ = lean_array_fget_borrowed(v_as_565_, v_i_567_);
v_b_574_ = lean_array_fget_borrowed(v_bs_566_, v_i_567_);
lean_inc(v_b_574_);
lean_inc(v_a_573_);
lean_inc_ref(v_env_564_);
v___x_575_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_merge(v_env_564_, v_a_573_, v_b_574_);
v___x_576_ = lean_unsigned_to_nat(1u);
v___x_577_ = lean_nat_add(v_i_567_, v___x_576_);
lean_dec(v_i_567_);
v___x_578_ = lean_array_push(v_cs_568_, v___x_575_);
v_i_567_ = v___x_577_;
v_cs_568_ = v___x_578_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(lean_object* v_env_580_, lean_object* v_vs_581_, lean_object* v_v_582_){
_start:
{
if (lean_obj_tag(v_vs_581_) == 0)
{
lean_object* v___x_601_; 
lean_dec_ref(v_env_580_);
v___x_601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_601_, 0, v_v_582_);
lean_ctor_set(v___x_601_, 1, v_vs_581_);
return v___x_601_;
}
else
{
lean_object* v_head_602_; 
v_head_602_ = lean_ctor_get(v_vs_581_, 0);
if (lean_obj_tag(v_head_602_) == 2)
{
if (lean_obj_tag(v_v_582_) == 2)
{
lean_object* v_tail_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_631_; 
lean_inc_ref(v_head_602_);
v_tail_603_ = lean_ctor_get(v_vs_581_, 1);
v_isSharedCheck_631_ = !lean_is_exclusive(v_vs_581_);
if (v_isSharedCheck_631_ == 0)
{
lean_object* v_unused_632_; 
v_unused_632_ = lean_ctor_get(v_vs_581_, 0);
lean_dec(v_unused_632_);
v___x_605_ = v_vs_581_;
v_isShared_606_ = v_isSharedCheck_631_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_tail_603_);
lean_dec(v_vs_581_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_631_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v_i_607_; lean_object* v_vs_608_; lean_object* v_i_609_; lean_object* v_vs_610_; uint8_t v___x_611_; 
v_i_607_ = lean_ctor_get(v_head_602_, 0);
v_vs_608_ = lean_ctor_get(v_head_602_, 1);
v_i_609_ = lean_ctor_get(v_v_582_, 0);
v_vs_610_ = lean_ctor_get(v_v_582_, 1);
v___x_611_ = lean_name_eq(v_i_607_, v_i_609_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; lean_object* v___x_614_; 
v___x_612_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(v_env_580_, v_tail_603_, v_v_582_);
if (v_isShared_606_ == 0)
{
lean_ctor_set(v___x_605_, 1, v___x_612_);
v___x_614_ = v___x_605_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_head_602_);
lean_ctor_set(v_reuseFailAlloc_615_, 1, v___x_612_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
else
{
lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_628_; 
lean_inc_ref(v_vs_610_);
lean_inc_ref(v_vs_608_);
lean_inc(v_i_607_);
lean_dec_ref_known(v_head_602_, 2);
v_isSharedCheck_628_ = !lean_is_exclusive(v_v_582_);
if (v_isSharedCheck_628_ == 0)
{
lean_object* v_unused_629_; lean_object* v_unused_630_; 
v_unused_629_ = lean_ctor_get(v_v_582_, 1);
lean_dec(v_unused_629_);
v_unused_630_ = lean_ctor_get(v_v_582_, 0);
lean_dec(v_unused_630_);
v___x_617_ = v_v_582_;
v_isShared_618_ = v_isSharedCheck_628_;
goto v_resetjp_616_;
}
else
{
lean_dec(v_v_582_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_628_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_623_; 
v___x_619_ = lean_unsigned_to_nat(0u);
v___x_620_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__3));
v___x_621_ = l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2(v_env_580_, v_vs_608_, v_vs_610_, v___x_619_, v___x_620_);
lean_dec_ref(v_vs_610_);
lean_dec_ref(v_vs_608_);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 1, v___x_621_);
lean_ctor_set(v___x_617_, 0, v_i_607_);
v___x_623_ = v___x_617_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_i_607_);
lean_ctor_set(v_reuseFailAlloc_627_, 1, v___x_621_);
v___x_623_ = v_reuseFailAlloc_627_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
lean_object* v___x_625_; 
if (v_isShared_606_ == 0)
{
lean_ctor_set(v___x_605_, 0, v___x_623_);
v___x_625_ = v___x_605_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v___x_623_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v_tail_603_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_env_580_);
goto v___jp_583_;
}
}
else
{
lean_dec_ref(v_env_580_);
goto v___jp_583_;
}
}
v___jp_583_:
{
lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_584_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_585_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__0));
v___x_586_ = lean_unsigned_to_nat(92u);
v___x_587_ = lean_unsigned_to_nat(12u);
v___x_588_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__1));
v___x_589_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_v_582_);
v___x_590_ = l_Std_Format_defWidth;
v___x_591_ = lean_unsigned_to_nat(0u);
v___x_592_ = l_Std_Format_pretty(v___x_589_, v___x_590_, v___x_591_, v___x_591_);
v___x_593_ = lean_string_append(v___x_588_, v___x_592_);
lean_dec_ref(v___x_592_);
v___x_594_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice___closed__2));
v___x_595_ = lean_string_append(v___x_593_, v___x_594_);
v___x_596_ = l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg(v_vs_581_);
v___x_597_ = l_Std_Format_pretty(v___x_596_, v___x_590_, v___x_591_, v___x_591_);
v___x_598_ = lean_string_append(v___x_595_, v___x_597_);
lean_dec_ref(v___x_597_);
v___x_599_ = l_mkPanicMessageWithDecl(v___x_584_, v___x_585_, v___x_586_, v___x_587_, v___x_598_);
lean_dec_ref(v___x_598_);
v___x_600_ = l_panic___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__1(v___x_599_);
return v___x_600_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_merge_spec__4(lean_object* v_env_633_, lean_object* v_x_634_, lean_object* v_x_635_){
_start:
{
if (lean_obj_tag(v_x_635_) == 0)
{
lean_dec_ref(v_env_633_);
return v_x_634_;
}
else
{
lean_object* v_head_636_; lean_object* v_tail_637_; lean_object* v___x_638_; 
v_head_636_ = lean_ctor_get(v_x_635_, 0);
lean_inc(v_head_636_);
v_tail_637_ = lean_ctor_get(v_x_635_, 1);
lean_inc(v_tail_637_);
lean_dec_ref_known(v_x_635_, 2);
lean_inc_ref(v_env_633_);
v___x_638_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice(v_env_633_, v_x_634_, v_head_636_);
v_x_634_ = v___x_638_;
v_x_635_ = v_tail_637_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2___boxed(lean_object* v_env_640_, lean_object* v_as_641_, lean_object* v_bs_642_, lean_object* v_i_643_, lean_object* v_cs_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l_Array_zipWithMAux___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__2(v_env_640_, v_as_641_, v_bs_642_, v_i_643_, v_cs_644_);
lean_dec_ref(v_bs_642_);
lean_dec_ref(v_as_641_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0(lean_object* v_a_646_, lean_object* v_n_647_){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg(v_a_646_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___boxed(lean_object* v_a_649_, lean_object* v_n_650_){
_start:
{
lean_object* v_res_651_; 
v_res_651_ = l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0(v_a_649_, v_n_650_);
lean_dec(v_n_650_);
return v_res_651_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2(lean_object* v_a_652_, lean_object* v_x_653_){
_start:
{
if (lean_obj_tag(v_x_653_) == 0)
{
uint8_t v___x_654_; 
v___x_654_ = 0;
return v___x_654_;
}
else
{
lean_object* v_head_655_; lean_object* v_tail_656_; uint8_t v___x_657_; 
v_head_655_ = lean_ctor_get(v_x_653_, 0);
v_tail_656_ = lean_ctor_get(v_x_653_, 1);
v___x_657_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_a_652_, v_head_655_);
if (v___x_657_ == 0)
{
v_x_653_ = v_tail_656_;
goto _start;
}
else
{
return v___x_657_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2___boxed(lean_object* v_a_659_, lean_object* v_x_660_){
_start:
{
uint8_t v_res_661_; lean_object* v_r_662_; 
v_res_661_ = l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2(v_a_659_, v_x_660_);
lean_dec(v_x_660_);
lean_dec(v_a_659_);
v_r_662_ = lean_box(v_res_661_);
return v_r_662_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0(lean_object* v_env_663_, lean_object* v_forbiddenTypes_x27_664_, lean_object* v_n_665_, size_t v_sz_666_, size_t v_i_667_, lean_object* v_bs_668_){
_start:
{
uint8_t v___x_669_; 
v___x_669_ = lean_usize_dec_lt(v_i_667_, v_sz_666_);
if (v___x_669_ == 0)
{
lean_dec(v_forbiddenTypes_x27_664_);
lean_dec_ref(v_env_663_);
return v_bs_668_;
}
else
{
lean_object* v_v_670_; lean_object* v___x_671_; lean_object* v_bs_x27_672_; lean_object* v___x_673_; size_t v___x_674_; size_t v___x_675_; lean_object* v___x_676_; 
v_v_670_ = lean_array_uget(v_bs_668_, v_i_667_);
v___x_671_ = lean_unsigned_to_nat(0u);
v_bs_x27_672_ = lean_array_uset(v_bs_668_, v_i_667_, v___x_671_);
lean_inc(v_forbiddenTypes_x27_664_);
lean_inc_ref(v_env_663_);
v___x_673_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(v_env_663_, v_v_670_, v_forbiddenTypes_x27_664_, v_n_665_);
v___x_674_ = ((size_t)1ULL);
v___x_675_ = lean_usize_add(v_i_667_, v___x_674_);
v___x_676_ = lean_array_uset(v_bs_x27_672_, v_i_667_, v___x_673_);
v_i_667_ = v___x_675_;
v_bs_668_ = v___x_676_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(lean_object* v_env_678_, lean_object* v_v_679_, lean_object* v_forbiddenTypes_680_, lean_object* v_remainingDepth_681_){
_start:
{
lean_object* v_zero_682_; uint8_t v_isZero_683_; 
v_zero_682_ = lean_unsigned_to_nat(0u);
v_isZero_683_ = lean_nat_dec_eq(v_remainingDepth_681_, v_zero_682_);
if (v_isZero_683_ == 1)
{
lean_object* v___x_684_; 
lean_dec(v_forbiddenTypes_680_);
lean_dec(v_v_679_);
lean_dec_ref(v_env_678_);
v___x_684_ = lean_box(1);
return v___x_684_;
}
else
{
lean_object* v_one_685_; lean_object* v_n_686_; 
v_one_685_ = lean_unsigned_to_nat(1u);
v_n_686_ = lean_nat_sub(v_remainingDepth_681_, v_one_685_);
switch(lean_obj_tag(v_v_679_))
{
case 2:
{
lean_object* v_i_687_; lean_object* v_vs_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_707_; 
v_i_687_ = lean_ctor_get(v_v_679_, 0);
v_vs_688_ = lean_ctor_get(v_v_679_, 1);
v_isSharedCheck_707_ = !lean_is_exclusive(v_v_679_);
if (v_isSharedCheck_707_ == 0)
{
v___x_690_ = v_v_679_;
v_isShared_691_ = v_isSharedCheck_707_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_vs_688_);
lean_inc(v_i_687_);
lean_dec(v_v_679_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_707_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v_forbiddenTypes_x27_693_; lean_object* v_induct_700_; lean_object* v_toConstantVal_701_; uint8_t v_isRec_702_; lean_object* v_name_703_; uint8_t v___x_704_; 
lean_inc_ref(v_env_678_);
lean_inc(v_i_687_);
v_induct_700_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor(v_i_687_, v_env_678_);
v_toConstantVal_701_ = lean_ctor_get(v_induct_700_, 0);
lean_inc_ref(v_toConstantVal_701_);
v_isRec_702_ = lean_ctor_get_uint8(v_induct_700_, sizeof(void*)*6);
lean_dec_ref(v_induct_700_);
v_name_703_ = lean_ctor_get(v_toConstantVal_701_, 0);
lean_inc(v_name_703_);
lean_dec_ref(v_toConstantVal_701_);
v___x_704_ = l_Lean_NameSet_contains(v_forbiddenTypes_680_, v_name_703_);
if (v___x_704_ == 0)
{
if (v_isRec_702_ == 0)
{
lean_dec(v_name_703_);
v_forbiddenTypes_x27_693_ = v_forbiddenTypes_680_;
goto v___jp_692_;
}
else
{
lean_object* v___x_705_; 
v___x_705_ = l_Lean_NameSet_insert(v_forbiddenTypes_680_, v_name_703_);
v_forbiddenTypes_x27_693_ = v___x_705_;
goto v___jp_692_;
}
}
else
{
lean_object* v___x_706_; 
lean_dec(v_name_703_);
lean_del_object(v___x_690_);
lean_dec_ref(v_vs_688_);
lean_dec(v_i_687_);
lean_dec(v_n_686_);
lean_dec(v_forbiddenTypes_680_);
lean_dec_ref(v_env_678_);
v___x_706_ = lean_box(1);
return v___x_706_;
}
v___jp_692_:
{
size_t v_sz_694_; size_t v___x_695_; lean_object* v___x_696_; lean_object* v___x_698_; 
v_sz_694_ = lean_array_size(v_vs_688_);
v___x_695_ = ((size_t)0ULL);
v___x_696_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0(v_env_678_, v_forbiddenTypes_x27_693_, v_n_686_, v_sz_694_, v___x_695_, v_vs_688_);
lean_dec(v_n_686_);
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 1, v___x_696_);
v___x_698_ = v___x_690_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_i_687_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v___x_696_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
}
case 3:
{
lean_object* v_vs_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_719_; 
v_vs_708_ = lean_ctor_get(v_v_679_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v_v_679_);
if (v_isSharedCheck_719_ == 0)
{
v___x_710_ = v_v_679_;
v_isShared_711_ = v_isSharedCheck_719_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_vs_708_);
lean_dec(v_v_679_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_719_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_712_; lean_object* v_vs_713_; lean_object* v___x_714_; uint8_t v___x_715_; 
v___x_712_ = lean_box(0);
v_vs_713_ = l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1(v_env_678_, v_forbiddenTypes_680_, v_n_686_, v_vs_708_, v___x_712_);
lean_dec(v_n_686_);
v___x_714_ = lean_box(1);
v___x_715_ = l_List_elem___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__2(v___x_714_, v_vs_713_);
if (v___x_715_ == 0)
{
lean_object* v___x_717_; 
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 0, v_vs_713_);
v___x_717_ = v___x_710_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_vs_713_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
else
{
lean_dec(v_vs_713_);
lean_del_object(v___x_710_);
return v___x_714_;
}
}
}
default: 
{
lean_dec(v_n_686_);
lean_dec(v_forbiddenTypes_680_);
lean_dec_ref(v_env_678_);
return v_v_679_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1(lean_object* v_env_720_, lean_object* v_forbiddenTypes_721_, lean_object* v_n_722_, lean_object* v_a_723_, lean_object* v_a_724_){
_start:
{
if (lean_obj_tag(v_a_723_) == 0)
{
lean_object* v___x_725_; 
lean_dec(v_forbiddenTypes_721_);
lean_dec_ref(v_env_720_);
v___x_725_ = l_List_reverse___redArg(v_a_724_);
return v___x_725_;
}
else
{
lean_object* v_head_726_; lean_object* v_tail_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_736_; 
v_head_726_ = lean_ctor_get(v_a_723_, 0);
v_tail_727_ = lean_ctor_get(v_a_723_, 1);
v_isSharedCheck_736_ = !lean_is_exclusive(v_a_723_);
if (v_isSharedCheck_736_ == 0)
{
v___x_729_ = v_a_723_;
v_isShared_730_ = v_isSharedCheck_736_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_tail_727_);
lean_inc(v_head_726_);
lean_dec(v_a_723_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_736_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_731_; lean_object* v___x_733_; 
lean_inc(v_forbiddenTypes_721_);
lean_inc_ref(v_env_720_);
v___x_731_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(v_env_720_, v_head_726_, v_forbiddenTypes_721_, v_n_722_);
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 1, v_a_724_);
lean_ctor_set(v___x_729_, 0, v___x_731_);
v___x_733_ = v___x_729_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v___x_731_);
lean_ctor_set(v_reuseFailAlloc_735_, 1, v_a_724_);
v___x_733_ = v_reuseFailAlloc_735_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
v_a_723_ = v_tail_727_;
v_a_724_ = v___x_733_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1___boxed(lean_object* v_env_737_, lean_object* v_forbiddenTypes_738_, lean_object* v_n_739_, lean_object* v_a_740_, lean_object* v_a_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l_List_mapTR_loop___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__1(v_env_737_, v_forbiddenTypes_738_, v_n_739_, v_a_740_, v_a_741_);
lean_dec(v_n_739_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0___boxed(lean_object* v_env_743_, lean_object* v_forbiddenTypes_x27_744_, lean_object* v_n_745_, lean_object* v_sz_746_, lean_object* v_i_747_, lean_object* v_bs_748_){
_start:
{
size_t v_sz_boxed_749_; size_t v_i_boxed_750_; lean_object* v_res_751_; 
v_sz_boxed_749_ = lean_unbox_usize(v_sz_746_);
lean_dec(v_sz_746_);
v_i_boxed_750_ = lean_unbox_usize(v_i_747_);
lean_dec(v_i_747_);
v_res_751_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go_spec__0(v_env_743_, v_forbiddenTypes_x27_744_, v_n_745_, v_sz_boxed_749_, v_i_boxed_750_, v_bs_748_);
lean_dec(v_n_745_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go___boxed(lean_object* v_env_752_, lean_object* v_v_753_, lean_object* v_forbiddenTypes_754_, lean_object* v_remainingDepth_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(v_env_752_, v_v_753_, v_forbiddenTypes_754_, v_remainingDepth_755_);
lean_dec(v_remainingDepth_755_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_truncate(lean_object* v_env_757_, lean_object* v_v_758_){
_start:
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_759_ = l_Lean_NameSet_empty;
v___x_760_ = lean_unsigned_to_nat(8u);
v___x_761_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_truncate_go(v_env_757_, v_v_758_, v___x_759_, v___x_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(lean_object* v_env_762_, lean_object* v_v1_763_, lean_object* v_v2_764_){
_start:
{
lean_object* v___x_765_; lean_object* v___x_766_; 
lean_inc_ref(v_env_762_);
v___x_765_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_merge(v_env_762_, v_v1_763_, v_v2_764_);
v___x_766_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_truncate(v_env_762_, v___x_765_);
return v___x_766_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor_spec__0(lean_object* v_x_767_, lean_object* v_x_768_){
_start:
{
if (lean_obj_tag(v_x_768_) == 0)
{
uint8_t v___x_769_; 
v___x_769_ = 0;
return v___x_769_;
}
else
{
lean_object* v_head_770_; lean_object* v_tail_771_; uint8_t v___x_772_; 
v_head_770_ = lean_ctor_get(v_x_768_, 0);
v_tail_771_ = lean_ctor_get(v_x_768_, 1);
v___x_772_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor(v_head_770_, v_x_767_);
if (v___x_772_ == 0)
{
v_x_768_ = v_tail_771_;
goto _start;
}
else
{
return v___x_772_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor(lean_object* v_x_774_, lean_object* v_x_775_){
_start:
{
switch(lean_obj_tag(v_x_774_))
{
case 2:
{
lean_object* v_i_776_; uint8_t v___x_777_; 
v_i_776_ = lean_ctor_get(v_x_774_, 0);
v___x_777_ = lean_name_eq(v_i_776_, v_x_775_);
return v___x_777_;
}
case 3:
{
lean_object* v_vs_778_; uint8_t v___x_779_; 
v_vs_778_ = lean_ctor_get(v_x_774_, 0);
v___x_779_ = l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor_spec__0(v_x_775_, v_vs_778_);
return v___x_779_;
}
default: 
{
uint8_t v___x_780_; 
v___x_780_ = 1;
return v___x_780_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor___boxed(lean_object* v_x_781_, lean_object* v_x_782_){
_start:
{
uint8_t v_res_783_; lean_object* v_r_784_; 
v_res_783_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor(v_x_781_, v_x_782_);
lean_dec(v_x_782_);
lean_dec(v_x_781_);
v_r_784_ = lean_box(v_res_783_);
return v_r_784_;
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor_spec__0___boxed(lean_object* v_x_785_, lean_object* v_x_786_){
_start:
{
uint8_t v_res_787_; lean_object* v_r_788_; 
v_res_787_ = l_List_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor_spec__0(v_x_785_, v_x_786_);
lean_dec(v_x_786_);
lean_dec(v_x_785_);
v_r_788_ = lean_box(v_res_787_);
return v_r_788_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg(lean_object* v_x_792_, lean_object* v_as_x27_793_, lean_object* v_b_794_){
_start:
{
if (lean_obj_tag(v_as_x27_793_) == 0)
{
lean_object* v___x_795_; 
v___x_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_795_, 0, v_b_794_);
return v___x_795_;
}
else
{
lean_object* v_head_796_; lean_object* v_tail_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
lean_dec_ref(v_b_794_);
v_head_796_ = lean_ctor_get(v_as_x27_793_, 0);
v_tail_797_ = lean_ctor_get(v_as_x27_793_, 1);
v___x_798_ = lean_box(0);
v___x_799_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___closed__0));
if (lean_obj_tag(v_head_796_) == 2)
{
lean_object* v_i_800_; lean_object* v_vs_801_; uint8_t v___x_802_; 
v_i_800_ = lean_ctor_get(v_head_796_, 0);
v_vs_801_ = lean_ctor_get(v_head_796_, 1);
v___x_802_ = lean_name_eq(v_i_800_, v_x_792_);
if (v___x_802_ == 0)
{
v_as_x27_793_ = v_tail_797_;
v_b_794_ = v___x_799_;
goto _start;
}
else
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
lean_inc_ref(v_vs_801_);
v___x_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_804_, 0, v_vs_801_);
v___x_805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
lean_ctor_set(v___x_805_, 1, v___x_798_);
v___x_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_806_, 0, v___x_805_);
return v___x_806_;
}
}
else
{
v_as_x27_793_ = v_tail_797_;
v_b_794_ = v___x_799_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___boxed(lean_object* v_x_808_, lean_object* v_as_x27_809_, lean_object* v_b_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg(v_x_808_, v_as_x27_809_, v_b_810_);
lean_dec(v_as_x27_809_);
lean_dec(v_x_808_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs(lean_object* v_x_812_, lean_object* v_x_813_){
_start:
{
switch(lean_obj_tag(v_x_812_))
{
case 2:
{
lean_object* v_i_814_; lean_object* v_vs_815_; uint8_t v___x_816_; 
v_i_814_ = lean_ctor_get(v_x_812_, 0);
v_vs_815_ = lean_ctor_get(v_x_812_, 1);
v___x_816_ = lean_name_eq(v_i_814_, v_x_813_);
if (v___x_816_ == 0)
{
lean_object* v___x_817_; 
v___x_817_ = lean_box(0);
return v___x_817_;
}
else
{
lean_object* v___x_818_; 
lean_inc_ref(v_vs_815_);
v___x_818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_818_, 0, v_vs_815_);
return v___x_818_;
}
}
case 3:
{
lean_object* v_vs_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v_val_823_; lean_object* v_fst_824_; 
v_vs_819_ = lean_ctor_get(v_x_812_, 0);
v___x_820_ = lean_box(0);
v___x_821_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg___closed__0));
v___x_822_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg(v_x_813_, v_vs_819_, v___x_821_);
v_val_823_ = lean_ctor_get(v___x_822_, 0);
lean_inc(v_val_823_);
lean_dec(v___x_822_);
v_fst_824_ = lean_ctor_get(v_val_823_, 0);
lean_inc(v_fst_824_);
lean_dec(v_val_823_);
if (lean_obj_tag(v_fst_824_) == 0)
{
return v___x_820_;
}
else
{
return v_fst_824_;
}
}
default: 
{
lean_object* v___x_825_; 
v___x_825_ = lean_box(0);
return v___x_825_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs___boxed(lean_object* v_x_826_, lean_object* v_x_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs(v_x_826_, v_x_827_);
lean_dec(v_x_827_);
lean_dec(v_x_826_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0(lean_object* v_x_829_, lean_object* v_as_830_, lean_object* v_as_x27_831_, lean_object* v_b_832_, lean_object* v_a_833_){
_start:
{
lean_object* v___x_834_; 
v___x_834_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___redArg(v_x_829_, v_as_x27_831_, v_b_832_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0___boxed(lean_object* v_x_835_, lean_object* v_as_836_, lean_object* v_as_x27_837_, lean_object* v_b_838_, lean_object* v_a_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs_spec__0(v_x_835_, v_as_836_, v_as_x27_837_, v_b_838_, v_a_839_);
lean_dec(v_as_x27_837_);
lean_dec(v_as_836_);
lean_dec(v_x_835_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall(lean_object* v_a_853_){
_start:
{
lean_object* v_zero_854_; uint8_t v_isZero_855_; 
v_zero_854_ = lean_unsigned_to_nat(0u);
v_isZero_855_ = lean_nat_dec_eq(v_a_853_, v_zero_854_);
if (v_isZero_855_ == 1)
{
lean_object* v___x_856_; 
v___x_856_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__3));
return v___x_856_;
}
else
{
lean_object* v_one_857_; lean_object* v_n_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v_one_857_ = lean_unsigned_to_nat(1u);
v_n_858_ = lean_nat_sub(v_a_853_, v_one_857_);
v___x_859_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__5));
v___x_860_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall(v_n_858_);
lean_dec(v_n_858_);
v___x_861_ = lean_mk_empty_array_with_capacity(v_one_857_);
v___x_862_ = lean_array_push(v___x_861_, v___x_860_);
v___x_863_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_863_, 0, v___x_859_);
lean_ctor_set(v___x_863_, 1, v___x_862_);
return v___x_863_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___boxed(lean_object* v_a_864_){
_start:
{
lean_object* v_res_865_; 
v_res_865_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall(v_a_864_);
lean_dec(v_a_864_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat(lean_object* v_n_866_){
_start:
{
lean_object* v___x_867_; uint8_t v___x_868_; 
v___x_867_ = lean_unsigned_to_nat(8u);
v___x_868_ = lean_nat_dec_lt(v___x_867_, v_n_866_);
if (v___x_868_ == 0)
{
lean_object* v___x_869_; 
v___x_869_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall(v_n_866_);
return v___x_869_;
}
else
{
lean_object* v___x_870_; 
v___x_870_ = lean_box(1);
return v___x_870_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat___boxed(lean_object* v_n_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat(v_n_871_);
lean_dec(v_n_871_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit(lean_object* v_x_873_){
_start:
{
if (lean_obj_tag(v_x_873_) == 0)
{
lean_object* v_val_874_; lean_object* v___x_875_; 
v_val_874_ = lean_ctor_get(v_x_873_, 0);
v___x_875_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat(v_val_874_);
return v___x_875_;
}
else
{
lean_object* v___x_876_; 
v___x_876_ = lean_box(1);
return v___x_876_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit___boxed(lean_object* v_x_877_){
_start:
{
lean_object* v_res_878_; 
v_res_878_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit(v_x_877_);
lean_dec_ref(v_x_877_);
return v_res_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj(lean_object* v_env_879_, lean_object* v_x_880_, lean_object* v_x_881_){
_start:
{
switch(lean_obj_tag(v_x_880_))
{
case 2:
{
lean_object* v_vs_882_; lean_object* v___x_883_; uint8_t v___x_884_; 
lean_dec_ref(v_env_879_);
v_vs_882_ = lean_ctor_get(v_x_880_, 1);
v___x_883_ = lean_array_get_size(v_vs_882_);
v___x_884_ = lean_nat_dec_lt(v_x_881_, v___x_883_);
if (v___x_884_ == 0)
{
lean_object* v___x_885_; 
v___x_885_ = lean_box(0);
return v___x_885_;
}
else
{
lean_object* v___x_886_; 
v___x_886_ = lean_array_fget_borrowed(v_vs_882_, v_x_881_);
lean_inc(v___x_886_);
return v___x_886_;
}
}
case 3:
{
lean_object* v_vs_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v_vs_887_ = lean_ctor_get(v_x_880_, 0);
v___x_888_ = lean_box(0);
v___x_889_ = l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0(v_env_879_, v_x_881_, v___x_888_, v_vs_887_);
return v___x_889_;
}
default: 
{
lean_dec_ref(v_env_879_);
lean_inc(v_x_880_);
return v_x_880_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0(lean_object* v_env_890_, lean_object* v_x_891_, lean_object* v_x_892_, lean_object* v_x_893_){
_start:
{
if (lean_obj_tag(v_x_893_) == 0)
{
lean_dec_ref(v_env_890_);
return v_x_892_;
}
else
{
lean_object* v_head_894_; lean_object* v_tail_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v_head_894_ = lean_ctor_get(v_x_893_, 0);
v_tail_895_ = lean_ctor_get(v_x_893_, 1);
lean_inc_ref_n(v_env_890_, 2);
v___x_896_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj(v_env_890_, v_head_894_, v_x_891_);
v___x_897_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(v_env_890_, v_x_892_, v___x_896_);
v_x_892_ = v___x_897_;
v_x_893_ = v_tail_895_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0___boxed(lean_object* v_env_899_, lean_object* v_x_900_, lean_object* v_x_901_, lean_object* v_x_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l_List_foldl___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_proj_spec__0(v_env_899_, v_x_900_, v_x_901_, v_x_902_);
lean_dec(v_x_902_);
lean_dec(v_x_900_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj___boxed(lean_object* v_env_904_, lean_object* v_x_905_, lean_object* v_x_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj(v_env_904_, v_x_905_, v_x_906_);
lean_dec(v_x_906_);
lean_dec(v_x_905_);
return v_res_907_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral(lean_object* v_x_908_){
_start:
{
if (lean_obj_tag(v_x_908_) == 2)
{
lean_object* v_vs_909_; lean_object* v___x_910_; lean_object* v___x_911_; uint8_t v___x_912_; 
v_vs_909_ = lean_ctor_get(v_x_908_, 1);
v___x_910_ = lean_unsigned_to_nat(0u);
v___x_911_ = lean_array_get_size(v_vs_909_);
v___x_912_ = lean_nat_dec_lt(v___x_910_, v___x_911_);
if (v___x_912_ == 0)
{
uint8_t v___x_913_; 
v___x_913_ = 1;
return v___x_913_;
}
else
{
if (v___x_912_ == 0)
{
return v___x_912_;
}
else
{
size_t v___x_914_; size_t v___x_915_; uint8_t v___x_916_; 
v___x_914_ = ((size_t)0ULL);
v___x_915_ = lean_usize_of_nat(v___x_911_);
v___x_916_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0(v_vs_909_, v___x_914_, v___x_915_);
if (v___x_916_ == 0)
{
return v___x_912_;
}
else
{
uint8_t v___x_917_; 
v___x_917_ = 0;
return v___x_917_;
}
}
}
}
else
{
uint8_t v___x_918_; 
v___x_918_ = 0;
return v___x_918_;
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0(lean_object* v_as_919_, size_t v_i_920_, size_t v_stop_921_){
_start:
{
uint8_t v___x_922_; 
v___x_922_ = lean_usize_dec_eq(v_i_920_, v_stop_921_);
if (v___x_922_ == 0)
{
lean_object* v___x_923_; uint8_t v___x_924_; 
v___x_923_ = lean_array_uget_borrowed(v_as_919_, v_i_920_);
v___x_924_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral(v___x_923_);
if (v___x_924_ == 0)
{
uint8_t v___x_925_; 
v___x_925_ = 1;
return v___x_925_;
}
else
{
size_t v___x_926_; size_t v___x_927_; 
v___x_926_ = ((size_t)1ULL);
v___x_927_ = lean_usize_add(v_i_920_, v___x_926_);
v_i_920_ = v___x_927_;
goto _start;
}
}
else
{
uint8_t v___x_929_; 
v___x_929_ = 0;
return v___x_929_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0___boxed(lean_object* v_as_930_, lean_object* v_i_931_, lean_object* v_stop_932_){
_start:
{
size_t v_i_boxed_933_; size_t v_stop_boxed_934_; uint8_t v_res_935_; lean_object* v_r_936_; 
v_i_boxed_933_ = lean_unbox_usize(v_i_931_);
lean_dec(v_i_931_);
v_stop_boxed_934_ = lean_unbox_usize(v_stop_932_);
lean_dec(v_stop_932_);
v_res_935_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral_spec__0(v_as_930_, v_i_boxed_933_, v_stop_boxed_934_);
lean_dec_ref(v_as_930_);
v_r_936_ = lean_box(v_res_935_);
return v_r_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral___boxed(lean_object* v_x_937_){
_start:
{
uint8_t v_res_938_; lean_object* v_r_939_; 
v_res_938_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral(v_x_937_);
lean_dec(v_x_937_);
v_r_939_ = lean_box(v_res_938_);
return v_r_939_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant_spec__0(lean_object* v_msg_940_){
_start:
{
lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_941_ = lean_unsigned_to_nat(0u);
v___x_942_ = lean_panic_fn_borrowed(v___x_941_, v_msg_940_);
return v___x_942_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2(void){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_945_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__1));
v___x_946_ = lean_unsigned_to_nat(9u);
v___x_947_ = lean_unsigned_to_nat(271u);
v___x_948_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__0));
v___x_949_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_950_ = l_mkPanicMessageWithDecl(v___x_949_, v___x_948_, v___x_947_, v___x_946_, v___x_945_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant(lean_object* v_a_951_){
_start:
{
if (lean_obj_tag(v_a_951_) == 2)
{
lean_object* v_i_955_; 
v_i_955_ = lean_ctor_get(v_a_951_, 0);
if (lean_obj_tag(v_i_955_) == 1)
{
lean_object* v_pre_956_; 
v_pre_956_ = lean_ctor_get(v_i_955_, 0);
if (lean_obj_tag(v_pre_956_) == 1)
{
lean_object* v_pre_957_; 
v_pre_957_ = lean_ctor_get(v_pre_956_, 0);
if (lean_obj_tag(v_pre_957_) == 0)
{
lean_object* v_vs_958_; lean_object* v_str_959_; lean_object* v_str_960_; lean_object* v___x_961_; uint8_t v___x_962_; 
v_vs_958_ = lean_ctor_get(v_a_951_, 1);
v_str_959_ = lean_ctor_get(v_i_955_, 1);
v_str_960_ = lean_ctor_get(v_pre_956_, 1);
v___x_961_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0));
v___x_962_ = lean_string_dec_eq(v_str_960_, v___x_961_);
if (v___x_962_ == 0)
{
goto v___jp_952_;
}
else
{
lean_object* v___x_963_; uint8_t v___x_964_; 
v___x_963_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1));
v___x_964_ = lean_string_dec_eq(v_str_959_, v___x_963_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; uint8_t v___x_966_; 
v___x_965_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4));
v___x_966_ = lean_string_dec_eq(v_str_959_, v___x_965_);
if (v___x_966_ == 0)
{
goto v___jp_952_;
}
else
{
lean_object* v___x_967_; lean_object* v___x_968_; uint8_t v___x_969_; 
v___x_967_ = lean_array_get_size(v_vs_958_);
v___x_968_ = lean_unsigned_to_nat(1u);
v___x_969_ = lean_nat_dec_eq(v___x_967_, v___x_968_);
if (v___x_969_ == 0)
{
goto v___jp_952_;
}
else
{
lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_970_ = lean_unsigned_to_nat(0u);
v___x_971_ = lean_array_fget_borrowed(v_vs_958_, v___x_970_);
v___x_972_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant(v___x_971_);
v___x_973_ = lean_nat_add(v___x_972_, v___x_968_);
lean_dec(v___x_972_);
return v___x_973_;
}
}
}
else
{
lean_object* v___x_974_; lean_object* v___x_975_; uint8_t v___x_976_; 
v___x_974_ = lean_array_get_size(v_vs_958_);
v___x_975_ = lean_unsigned_to_nat(0u);
v___x_976_ = lean_nat_dec_eq(v___x_974_, v___x_975_);
if (v___x_976_ == 0)
{
goto v___jp_952_;
}
else
{
return v___x_975_;
}
}
}
}
else
{
goto v___jp_952_;
}
}
else
{
goto v___jp_952_;
}
}
else
{
goto v___jp_952_;
}
}
else
{
goto v___jp_952_;
}
v___jp_952_:
{
lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_953_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___closed__2);
v___x_954_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant_spec__0(v___x_953_);
return v___x_954_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant___boxed(lean_object* v_a_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant(v_a_977_);
lean_dec(v_a_977_);
return v_res_978_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0(void){
_start:
{
lean_object* v___x_979_; 
v___x_979_ = l_instMonadEIO___redArg();
return v___x_979_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3(void){
_start:
{
lean_object* v___x_982_; 
v___x_982_ = l_Array_instInhabited___redArg();
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0(lean_object* v_msg_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v_toApplicative_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_1026_; 
v___x_989_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__0);
v___x_990_ = l_StateRefT_x27_instMonad___redArg(v___x_989_);
v_toApplicative_991_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1026_ == 0)
{
lean_object* v_unused_1027_; 
v_unused_1027_ = lean_ctor_get(v___x_990_, 1);
lean_dec(v_unused_1027_);
v___x_993_ = v___x_990_;
v_isShared_994_ = v_isSharedCheck_1026_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_toApplicative_991_);
lean_dec(v___x_990_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_1026_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v_toFunctor_995_; lean_object* v_toSeq_996_; lean_object* v_toSeqLeft_997_; lean_object* v_toSeqRight_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1024_; 
v_toFunctor_995_ = lean_ctor_get(v_toApplicative_991_, 0);
v_toSeq_996_ = lean_ctor_get(v_toApplicative_991_, 2);
v_toSeqLeft_997_ = lean_ctor_get(v_toApplicative_991_, 3);
v_toSeqRight_998_ = lean_ctor_get(v_toApplicative_991_, 4);
v_isSharedCheck_1024_ = !lean_is_exclusive(v_toApplicative_991_);
if (v_isSharedCheck_1024_ == 0)
{
lean_object* v_unused_1025_; 
v_unused_1025_ = lean_ctor_get(v_toApplicative_991_, 1);
lean_dec(v_unused_1025_);
v___x_1000_ = v_toApplicative_991_;
v_isShared_1001_ = v_isSharedCheck_1024_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_toSeqRight_998_);
lean_inc(v_toSeqLeft_997_);
lean_inc(v_toSeq_996_);
lean_inc(v_toFunctor_995_);
lean_dec(v_toApplicative_991_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1024_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___f_1002_; lean_object* v___f_1003_; lean_object* v___f_1004_; lean_object* v___f_1005_; lean_object* v___x_1006_; lean_object* v___f_1007_; lean_object* v___f_1008_; lean_object* v___f_1009_; lean_object* v___x_1011_; 
v___f_1002_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__1));
v___f_1003_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__2));
lean_inc_ref(v_toFunctor_995_);
v___f_1004_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1004_, 0, v_toFunctor_995_);
v___f_1005_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1005_, 0, v_toFunctor_995_);
v___x_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___f_1004_);
lean_ctor_set(v___x_1006_, 1, v___f_1005_);
v___f_1007_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1007_, 0, v_toSeqRight_998_);
v___f_1008_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1008_, 0, v_toSeqLeft_997_);
v___f_1009_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1009_, 0, v_toSeq_996_);
if (v_isShared_1001_ == 0)
{
lean_ctor_set(v___x_1000_, 4, v___f_1007_);
lean_ctor_set(v___x_1000_, 3, v___f_1008_);
lean_ctor_set(v___x_1000_, 2, v___f_1009_);
lean_ctor_set(v___x_1000_, 1, v___f_1002_);
lean_ctor_set(v___x_1000_, 0, v___x_1006_);
v___x_1011_ = v___x_1000_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1006_);
lean_ctor_set(v_reuseFailAlloc_1023_, 1, v___f_1002_);
lean_ctor_set(v_reuseFailAlloc_1023_, 2, v___f_1009_);
lean_ctor_set(v_reuseFailAlloc_1023_, 3, v___f_1008_);
lean_ctor_set(v_reuseFailAlloc_1023_, 4, v___f_1007_);
v___x_1011_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
lean_object* v___x_1013_; 
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 1, v___f_1003_);
lean_ctor_set(v___x_993_, 0, v___x_1011_);
v___x_1013_ = v___x_993_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v___x_1011_);
lean_ctor_set(v_reuseFailAlloc_1022_, 1, v___f_1003_);
v___x_1013_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___f_1019_; lean_object* v___x_1803__overap_1020_; lean_object* v___x_1021_; 
v___x_1014_ = l_StateRefT_x27_instMonad___redArg(v___x_1013_);
v___x_1015_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3, &l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___closed__3);
v___x_1016_ = lean_box(0);
v___x_1017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1015_);
lean_ctor_set(v___x_1017_, 1, v___x_1016_);
v___x_1018_ = l_instInhabitedOfMonad___redArg(v___x_1014_, v___x_1017_);
v___f_1019_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1019_, 0, v___x_1018_);
v___x_1803__overap_1020_ = lean_panic_fn_borrowed(v___f_1019_, v_msg_983_);
lean_dec_ref(v___f_1019_);
lean_inc(v___y_987_);
lean_inc_ref(v___y_986_);
lean_inc(v___y_985_);
lean_inc_ref(v___y_984_);
v___x_1021_ = lean_apply_5(v___x_1803__overap_1020_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, lean_box(0));
return v___x_1021_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0___boxed(lean_object* v_msg_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
lean_object* v_res_1034_; 
v_res_1034_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0(v_msg_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2(lean_object* v_as_1035_, size_t v_i_1036_, size_t v_stop_1037_, lean_object* v_b_1038_){
_start:
{
uint8_t v___x_1039_; 
v___x_1039_ = lean_usize_dec_eq(v_i_1036_, v_stop_1037_);
if (v___x_1039_ == 0)
{
lean_object* v___x_1040_; lean_object* v_fst_1041_; lean_object* v_snd_1042_; lean_object* v_fst_1043_; lean_object* v_snd_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1057_; 
v___x_1040_ = lean_array_uget_borrowed(v_as_1035_, v_i_1036_);
v_fst_1041_ = lean_ctor_get(v___x_1040_, 0);
v_snd_1042_ = lean_ctor_get(v___x_1040_, 1);
v_fst_1043_ = lean_ctor_get(v_b_1038_, 0);
v_snd_1044_ = lean_ctor_get(v_b_1038_, 1);
v_isSharedCheck_1057_ = !lean_is_exclusive(v_b_1038_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1046_ = v_b_1038_;
v_isShared_1047_ = v_isSharedCheck_1057_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_snd_1044_);
lean_inc(v_fst_1043_);
lean_dec(v_b_1038_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1057_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1052_; 
v___x_1048_ = l_Array_append___redArg(v_fst_1043_, v_fst_1041_);
lean_inc(v_snd_1042_);
v___x_1049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1049_, 0, v_snd_1042_);
v___x_1050_ = lean_array_push(v_snd_1044_, v___x_1049_);
if (v_isShared_1047_ == 0)
{
lean_ctor_set(v___x_1046_, 1, v___x_1050_);
lean_ctor_set(v___x_1046_, 0, v___x_1048_);
v___x_1052_ = v___x_1046_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v___x_1048_);
lean_ctor_set(v_reuseFailAlloc_1056_, 1, v___x_1050_);
v___x_1052_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
size_t v___x_1053_; size_t v___x_1054_; 
v___x_1053_ = ((size_t)1ULL);
v___x_1054_ = lean_usize_add(v_i_1036_, v___x_1053_);
v_i_1036_ = v___x_1054_;
v_b_1038_ = v___x_1052_;
goto _start;
}
}
}
else
{
return v_b_1038_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2___boxed(lean_object* v_as_1058_, lean_object* v_i_1059_, lean_object* v_stop_1060_, lean_object* v_b_1061_){
_start:
{
size_t v_i_boxed_1062_; size_t v_stop_boxed_1063_; lean_object* v_res_1064_; 
v_i_boxed_1062_ = lean_unbox_usize(v_i_1059_);
lean_dec(v_i_1059_);
v_stop_boxed_1063_ = lean_unbox_usize(v_stop_1060_);
lean_dec(v_stop_1060_);
v_res_1064_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2(v_as_1058_, v_i_boxed_1062_, v_stop_boxed_1063_, v_b_1061_);
lean_dec_ref(v_as_1058_);
return v_res_1064_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3(void){
_start:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1069_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_1070_ = lean_unsigned_to_nat(65u);
v___x_1071_ = lean_unsigned_to_nat(258u);
v___x_1072_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__2));
v___x_1073_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_1074_ = l_mkPanicMessageWithDecl(v___x_1073_, v___x_1072_, v___x_1071_, v___x_1070_, v___x_1069_);
return v___x_1074_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7(void){
_start:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1081_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_1082_ = lean_unsigned_to_nat(9u);
v___x_1083_ = lean_unsigned_to_nat(266u);
v___x_1084_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__2));
v___x_1085_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__0));
v___x_1086_ = l_mkPanicMessageWithDecl(v___x_1085_, v___x_1084_, v___x_1083_, v___x_1082_, v___x_1081_);
return v___x_1086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go(lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_){
_start:
{
lean_object* v___y_1094_; lean_object* v___y_1095_; lean_object* v___y_1096_; lean_object* v___y_1097_; lean_object* v___y_1098_; lean_object* v_fst_1099_; lean_object* v_snd_1100_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; lean_object* v___y_1130_; 
if (lean_obj_tag(v_a_1087_) == 2)
{
lean_object* v_i_1133_; lean_object* v_vs_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1254_; 
v_i_1133_ = lean_ctor_get(v_a_1087_, 0);
v_vs_1134_ = lean_ctor_get(v_a_1087_, 1);
v_isSharedCheck_1254_ = !lean_is_exclusive(v_a_1087_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1136_ = v_a_1087_;
v_isShared_1137_ = v_isSharedCheck_1254_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_vs_1134_);
lean_inc(v_i_1133_);
lean_dec(v_a_1087_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1254_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v_ctorName_1139_; lean_object* v___y_1140_; lean_object* v___y_1141_; lean_object* v___y_1142_; lean_object* v___y_1143_; 
if (lean_obj_tag(v_i_1133_) == 1)
{
lean_object* v_pre_1176_; 
v_pre_1176_ = lean_ctor_get(v_i_1133_, 0);
if (lean_obj_tag(v_pre_1176_) == 1)
{
lean_object* v_pre_1177_; 
v_pre_1177_ = lean_ctor_get(v_pre_1176_, 0);
if (lean_obj_tag(v_pre_1177_) == 0)
{
lean_object* v_str_1178_; lean_object* v_str_1179_; lean_object* v___x_1180_; uint8_t v___x_1181_; 
v_str_1178_ = lean_ctor_get(v_i_1133_, 1);
v_str_1179_ = lean_ctor_get(v_pre_1176_, 1);
v___x_1180_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__0));
v___x_1181_ = lean_string_dec_eq(v_str_1179_, v___x_1180_);
if (v___x_1181_ == 0)
{
v_ctorName_1139_ = v_i_1133_;
v___y_1140_ = v_a_1088_;
v___y_1141_ = v_a_1089_;
v___y_1142_ = v_a_1090_;
v___y_1143_ = v_a_1091_;
goto v___jp_1138_;
}
else
{
lean_object* v___x_1182_; uint8_t v___x_1183_; 
lean_inc_ref(v_str_1178_);
lean_inc(v_pre_1177_);
lean_dec_ref_known(v_i_1133_, 2);
v___x_1182_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__1));
v___x_1183_ = lean_string_dec_eq(v_str_1178_, v___x_1182_);
if (v___x_1183_ == 0)
{
lean_object* v___x_1184_; uint8_t v___x_1185_; 
v___x_1184_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_ofNat_goSmall___closed__4));
v___x_1185_ = lean_string_dec_eq(v_str_1178_, v___x_1184_);
if (v___x_1185_ == 0)
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1186_ = l_Lean_Name_str___override(v_pre_1177_, v___x_1180_);
v___x_1187_ = l_Lean_Name_str___override(v___x_1186_, v_str_1178_);
v_ctorName_1139_ = v___x_1187_;
v___y_1140_ = v_a_1088_;
v___y_1141_ = v_a_1089_;
v___y_1142_ = v_a_1090_;
v___y_1143_ = v_a_1091_;
goto v___jp_1138_;
}
else
{
lean_object* v___x_1188_; lean_object* v___x_1189_; uint8_t v___x_1190_; 
lean_dec_ref(v_str_1178_);
v___x_1188_ = lean_array_get_size(v_vs_1134_);
v___x_1189_ = lean_unsigned_to_nat(1u);
v___x_1190_ = lean_nat_dec_eq(v___x_1188_, v___x_1189_);
if (v___x_1190_ == 0)
{
lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1191_ = l_Lean_Name_str___override(v_pre_1177_, v___x_1180_);
v___x_1192_ = l_Lean_Name_str___override(v___x_1191_, v___x_1184_);
v_ctorName_1139_ = v___x_1192_;
v___y_1140_ = v_a_1088_;
v___y_1141_ = v_a_1089_;
v___y_1142_ = v_a_1090_;
v___y_1143_ = v_a_1091_;
goto v___jp_1138_;
}
else
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v_val_1196_; uint8_t v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
lean_del_object(v___x_1136_);
v___x_1193_ = lean_unsigned_to_nat(0u);
v___x_1194_ = lean_array_fget(v_vs_1134_, v___x_1193_);
lean_dec_ref(v_vs_1134_);
v___x_1195_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_getNatConstant(v___x_1194_);
lean_dec(v___x_1194_);
v_val_1196_ = lean_nat_add(v___x_1195_, v___x_1189_);
lean_dec(v___x_1195_);
v___x_1197_ = 0;
v___x_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1198_, 0, v_val_1196_);
v___x_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
v___x_1200_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1));
v___x_1201_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1197_, v___x_1199_, v___x_1200_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_);
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1214_; 
v_a_1202_ = lean_ctor_get(v___x_1201_, 0);
v_isSharedCheck_1214_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1204_ = v___x_1201_;
v_isShared_1205_ = v_isSharedCheck_1214_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v___x_1201_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1214_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v_fvarId_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1212_; 
v_fvarId_1206_ = lean_ctor_get(v_a_1202_, 0);
lean_inc(v_fvarId_1206_);
v___x_1207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1207_, 0, v_a_1202_);
v___x_1208_ = lean_mk_empty_array_with_capacity(v___x_1189_);
v___x_1209_ = lean_array_push(v___x_1208_, v___x_1207_);
v___x_1210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1209_);
lean_ctor_set(v___x_1210_, 1, v_fvarId_1206_);
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 0, v___x_1210_);
v___x_1212_ = v___x_1204_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v___x_1210_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
return v___x_1212_;
}
}
}
else
{
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1222_; 
v_a_1215_ = lean_ctor_get(v___x_1201_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1217_ = v___x_1201_;
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v___x_1201_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1222_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1220_; 
if (v_isShared_1218_ == 0)
{
v___x_1220_ = v___x_1217_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_a_1215_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
}
}
}
else
{
lean_object* v___x_1223_; lean_object* v___x_1224_; uint8_t v___x_1225_; 
lean_dec_ref(v_str_1178_);
v___x_1223_ = lean_array_get_size(v_vs_1134_);
v___x_1224_ = lean_unsigned_to_nat(0u);
v___x_1225_ = lean_nat_dec_eq(v___x_1223_, v___x_1224_);
if (v___x_1225_ == 0)
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = l_Lean_Name_str___override(v_pre_1177_, v___x_1180_);
v___x_1227_ = l_Lean_Name_str___override(v___x_1226_, v___x_1182_);
v_ctorName_1139_ = v___x_1227_;
v___y_1140_ = v_a_1088_;
v___y_1141_ = v_a_1089_;
v___y_1142_ = v_a_1090_;
v___y_1143_ = v_a_1091_;
goto v___jp_1138_;
}
else
{
uint8_t v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
lean_del_object(v___x_1136_);
lean_dec_ref(v_vs_1134_);
v___x_1228_ = 0;
v___x_1229_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__6));
v___x_1230_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1));
v___x_1231_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1228_, v___x_1229_, v___x_1230_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1245_; 
v_a_1232_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1245_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1245_ == 0)
{
v___x_1234_ = v___x_1231_;
v_isShared_1235_ = v_isSharedCheck_1245_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v___x_1231_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1245_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v_fvarId_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1243_; 
v_fvarId_1236_ = lean_ctor_get(v_a_1232_, 0);
lean_inc(v_fvarId_1236_);
v___x_1237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1237_, 0, v_a_1232_);
v___x_1238_ = lean_unsigned_to_nat(1u);
v___x_1239_ = lean_mk_empty_array_with_capacity(v___x_1238_);
v___x_1240_ = lean_array_push(v___x_1239_, v___x_1237_);
v___x_1241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1240_);
lean_ctor_set(v___x_1241_, 1, v_fvarId_1236_);
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 0, v___x_1241_);
v___x_1243_ = v___x_1234_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v___x_1241_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
}
else
{
lean_object* v_a_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1253_; 
v_a_1246_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1253_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1248_ = v___x_1231_;
v_isShared_1249_ = v_isSharedCheck_1253_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_a_1246_);
lean_dec(v___x_1231_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1253_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
lean_object* v___x_1251_; 
if (v_isShared_1249_ == 0)
{
v___x_1251_ = v___x_1248_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_a_1246_);
v___x_1251_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
return v___x_1251_;
}
}
}
}
}
}
}
else
{
v_ctorName_1139_ = v_i_1133_;
v___y_1140_ = v_a_1088_;
v___y_1141_ = v_a_1089_;
v___y_1142_ = v_a_1090_;
v___y_1143_ = v_a_1091_;
goto v___jp_1138_;
}
}
else
{
v_ctorName_1139_ = v_i_1133_;
v___y_1140_ = v_a_1088_;
v___y_1141_ = v_a_1089_;
v___y_1142_ = v_a_1090_;
v___y_1143_ = v_a_1091_;
goto v___jp_1138_;
}
}
else
{
v_ctorName_1139_ = v_i_1133_;
v___y_1140_ = v_a_1088_;
v___y_1141_ = v_a_1089_;
v___y_1142_ = v_a_1090_;
v___y_1143_ = v_a_1091_;
goto v___jp_1138_;
}
v___jp_1138_:
{
lean_object* v___x_1144_; lean_object* v_env_1145_; uint8_t v___x_1146_; lean_object* v___x_1147_; 
v___x_1144_ = lean_st_ref_get(v___y_1143_);
v_env_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc_ref(v_env_1145_);
lean_dec(v___x_1144_);
v___x_1146_ = 0;
lean_inc(v_ctorName_1139_);
v___x_1147_ = l_Lean_Environment_find_x3f(v_env_1145_, v_ctorName_1139_, v___x_1146_);
if (lean_obj_tag(v___x_1147_) == 1)
{
lean_object* v_val_1148_; 
v_val_1148_ = lean_ctor_get(v___x_1147_, 0);
lean_inc(v_val_1148_);
lean_dec_ref_known(v___x_1147_, 1);
if (lean_obj_tag(v_val_1148_) == 6)
{
lean_object* v_val_1149_; size_t v_sz_1150_; size_t v___x_1151_; lean_object* v___x_1152_; 
v_val_1149_ = lean_ctor_get(v_val_1148_, 0);
lean_inc_ref(v_val_1149_);
lean_dec_ref_known(v_val_1148_, 1);
v_sz_1150_ = lean_array_size(v_vs_1134_);
v___x_1151_ = ((size_t)0ULL);
v___x_1152_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1(v_sz_1150_, v___x_1151_, v_vs_1134_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
if (lean_obj_tag(v___x_1152_) == 0)
{
lean_object* v_a_1153_; lean_object* v_numParams_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; uint8_t v___x_1160_; 
v_a_1153_ = lean_ctor_get(v___x_1152_, 0);
lean_inc(v_a_1153_);
lean_dec_ref_known(v___x_1152_, 1);
v_numParams_1154_ = lean_ctor_get(v_val_1149_, 3);
lean_inc(v_numParams_1154_);
lean_dec_ref(v_val_1149_);
v___x_1155_ = lean_unsigned_to_nat(0u);
v___x_1156_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__4));
v___x_1157_ = lean_box(0);
v___x_1158_ = lean_mk_array(v_numParams_1154_, v___x_1157_);
v___x_1159_ = lean_array_get_size(v_a_1153_);
v___x_1160_ = lean_nat_dec_lt(v___x_1155_, v___x_1159_);
if (v___x_1160_ == 0)
{
lean_dec(v_a_1153_);
lean_del_object(v___x_1136_);
v___y_1094_ = v___y_1142_;
v___y_1095_ = v___y_1140_;
v___y_1096_ = v___y_1143_;
v___y_1097_ = v___y_1141_;
v___y_1098_ = v_ctorName_1139_;
v_fst_1099_ = v___x_1156_;
v_snd_1100_ = v___x_1158_;
goto v___jp_1093_;
}
else
{
lean_object* v___x_1162_; 
if (v_isShared_1137_ == 0)
{
lean_ctor_set_tag(v___x_1136_, 0);
lean_ctor_set(v___x_1136_, 1, v___x_1158_);
lean_ctor_set(v___x_1136_, 0, v___x_1156_);
v___x_1162_ = v___x_1136_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v___x_1156_);
lean_ctor_set(v_reuseFailAlloc_1167_, 1, v___x_1158_);
v___x_1162_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
size_t v___x_1163_; lean_object* v___x_1164_; lean_object* v_fst_1165_; lean_object* v_snd_1166_; 
v___x_1163_ = lean_usize_of_nat(v___x_1159_);
v___x_1164_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__2(v_a_1153_, v___x_1151_, v___x_1163_, v___x_1162_);
lean_dec(v_a_1153_);
v_fst_1165_ = lean_ctor_get(v___x_1164_, 0);
lean_inc(v_fst_1165_);
v_snd_1166_ = lean_ctor_get(v___x_1164_, 1);
lean_inc(v_snd_1166_);
lean_dec_ref(v___x_1164_);
v___y_1094_ = v___y_1142_;
v___y_1095_ = v___y_1140_;
v___y_1096_ = v___y_1143_;
v___y_1097_ = v___y_1141_;
v___y_1098_ = v_ctorName_1139_;
v_fst_1099_ = v_fst_1165_;
v_snd_1100_ = v_snd_1166_;
goto v___jp_1093_;
}
}
}
else
{
lean_object* v_a_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1175_; 
lean_dec_ref(v_val_1149_);
lean_dec(v_ctorName_1139_);
lean_del_object(v___x_1136_);
v_a_1168_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1170_ = v___x_1152_;
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_a_1168_);
lean_dec(v___x_1152_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1173_; 
if (v_isShared_1171_ == 0)
{
v___x_1173_ = v___x_1170_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v_a_1168_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
}
}
else
{
lean_dec(v_val_1148_);
lean_dec(v_ctorName_1139_);
lean_del_object(v___x_1136_);
lean_dec_ref(v_vs_1134_);
v___y_1127_ = v___y_1140_;
v___y_1128_ = v___y_1141_;
v___y_1129_ = v___y_1142_;
v___y_1130_ = v___y_1143_;
goto v___jp_1126_;
}
}
else
{
lean_dec(v___x_1147_);
lean_dec(v_ctorName_1139_);
lean_del_object(v___x_1136_);
lean_dec_ref(v_vs_1134_);
v___y_1127_ = v___y_1140_;
v___y_1128_ = v___y_1141_;
v___y_1129_ = v___y_1142_;
v___y_1130_ = v___y_1143_;
goto v___jp_1126_;
}
}
}
}
else
{
lean_object* v___x_1255_; lean_object* v___x_1256_; 
lean_dec(v_a_1087_);
v___x_1255_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7_once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__7);
v___x_1256_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0(v___x_1255_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_);
return v___x_1256_;
}
v___jp_1093_:
{
uint8_t v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1101_ = 0;
v___x_1102_ = lean_box(0);
v___x_1103_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1103_, 0, v___y_1098_);
lean_ctor_set(v___x_1103_, 1, v___x_1102_);
lean_ctor_set(v___x_1103_, 2, v_snd_1100_);
v___x_1104_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__1));
v___x_1105_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1101_, v___x_1103_, v___x_1104_, v___y_1095_, v___y_1097_, v___y_1094_, v___y_1096_);
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1117_; 
v_a_1106_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1108_ = v___x_1105_;
v_isShared_1109_ = v_isSharedCheck_1117_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_dec(v___x_1105_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1117_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v_fvarId_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1115_; 
v_fvarId_1110_ = lean_ctor_get(v_a_1106_, 0);
lean_inc(v_fvarId_1110_);
v___x_1111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1111_, 0, v_a_1106_);
v___x_1112_ = lean_array_push(v_fst_1099_, v___x_1111_);
v___x_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
lean_ctor_set(v___x_1113_, 1, v_fvarId_1110_);
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 0, v___x_1113_);
v___x_1115_ = v___x_1108_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1113_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
else
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1125_; 
lean_dec_ref(v_fst_1099_);
v_a_1118_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1120_ = v___x_1105_;
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_1105_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1123_; 
if (v_isShared_1121_ == 0)
{
v___x_1123_ = v___x_1120_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_a_1118_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
}
v___jp_1126_:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___closed__3);
v___x_1132_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__0(v___x_1131_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_);
return v___x_1132_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1(size_t v_sz_1257_, size_t v_i_1258_, lean_object* v_bs_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_){
_start:
{
uint8_t v___x_1265_; 
v___x_1265_ = lean_usize_dec_lt(v_i_1258_, v_sz_1257_);
if (v___x_1265_ == 0)
{
lean_object* v___x_1266_; 
v___x_1266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1266_, 0, v_bs_1259_);
return v___x_1266_;
}
else
{
lean_object* v_v_1267_; lean_object* v___x_1268_; lean_object* v_bs_x27_1269_; lean_object* v___x_1270_; 
v_v_1267_ = lean_array_uget(v_bs_1259_, v_i_1258_);
v___x_1268_ = lean_unsigned_to_nat(0u);
v_bs_x27_1269_ = lean_array_uset(v_bs_1259_, v_i_1258_, v___x_1268_);
v___x_1270_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go(v_v_1267_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
if (lean_obj_tag(v___x_1270_) == 0)
{
lean_object* v_a_1271_; size_t v___x_1272_; size_t v___x_1273_; lean_object* v___x_1274_; 
v_a_1271_ = lean_ctor_get(v___x_1270_, 0);
lean_inc(v_a_1271_);
lean_dec_ref_known(v___x_1270_, 1);
v___x_1272_ = ((size_t)1ULL);
v___x_1273_ = lean_usize_add(v_i_1258_, v___x_1272_);
v___x_1274_ = lean_array_uset(v_bs_x27_1269_, v_i_1258_, v_a_1271_);
v_i_1258_ = v___x_1273_;
v_bs_1259_ = v___x_1274_;
goto _start;
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
lean_dec_ref(v_bs_x27_1269_);
v_a_1276_ = lean_ctor_get(v___x_1270_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1270_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1270_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1270_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_a_1276_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1___boxed(lean_object* v_sz_1284_, lean_object* v_i_1285_, lean_object* v_bs_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_){
_start:
{
size_t v_sz_boxed_1292_; size_t v_i_boxed_1293_; lean_object* v_res_1294_; 
v_sz_boxed_1292_ = lean_unbox_usize(v_sz_1284_);
lean_dec(v_sz_1284_);
v_i_boxed_1293_ = lean_unbox_usize(v_i_1285_);
lean_dec(v_i_1285_);
v_res_1294_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go_spec__1(v_sz_boxed_1292_, v_i_boxed_1293_, v_bs_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_);
lean_dec(v___y_1290_);
lean_dec_ref(v___y_1289_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go___boxed(lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go(v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_, v_a_1299_);
lean_dec(v_a_1299_);
lean_dec_ref(v_a_1298_);
lean_dec(v_a_1297_);
lean_dec_ref(v_a_1296_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral(lean_object* v_v_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_){
_start:
{
uint8_t v___x_1308_; 
v___x_1308_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_isLiteral(v_v_1302_);
if (v___x_1308_ == 0)
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
lean_dec(v_v_1302_);
v___x_1309_ = lean_box(0);
v___x_1310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1309_);
return v___x_1310_;
}
else
{
lean_object* v___x_1311_; 
v___x_1311_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral_go(v_v_1302_, v_a_1303_, v_a_1304_, v_a_1305_, v_a_1306_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1320_; 
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1320_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1320_ == 0)
{
v___x_1314_ = v___x_1311_;
v_isShared_1315_ = v_isSharedCheck_1320_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v___x_1311_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1320_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1316_; lean_object* v___x_1318_; 
v___x_1316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1316_, 0, v_a_1312_);
if (v_isShared_1315_ == 0)
{
lean_ctor_set(v___x_1314_, 0, v___x_1316_);
v___x_1318_ = v___x_1314_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v___x_1316_);
v___x_1318_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
return v___x_1318_;
}
}
}
else
{
lean_object* v_a_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1328_; 
v_a_1321_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1328_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1323_ = v___x_1311_;
v_isShared_1324_ = v_isSharedCheck_1328_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_a_1321_);
lean_dec(v___x_1311_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1328_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1326_; 
if (v_isShared_1324_ == 0)
{
v___x_1326_ = v___x_1323_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_a_1321_);
v___x_1326_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
return v___x_1326_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral___boxed(lean_object* v_v_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral(v_v_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_);
lean_dec(v_a_1333_);
lean_dec_ref(v_a_1332_);
lean_dec(v_a_1331_);
lean_dec_ref(v_a_1330_);
return v_res_1335_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt(lean_object* v_a_1336_, lean_object* v_b_1337_){
_start:
{
lean_object* v_fst_1338_; lean_object* v_fst_1339_; uint8_t v___x_1340_; 
v_fst_1338_ = lean_ctor_get(v_a_1336_, 0);
v_fst_1339_ = lean_ctor_get(v_b_1337_, 0);
v___x_1340_ = l_Lean_Name_quickLt(v_fst_1338_, v_fst_1339_);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt___boxed(lean_object* v_a_1341_, lean_object* v_b_1342_){
_start:
{
uint8_t v_res_1343_; lean_object* v_r_1344_; 
v_res_1343_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_decLt(v_a_1341_, v_b_1342_);
lean_dec_ref(v_b_1342_);
lean_dec_ref(v_a_1341_);
v_r_1344_ = lean_box(v_res_1343_);
return v_r_1344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f(lean_object* v_entries_1347_, lean_object* v_fid_1348_){
_start:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; uint8_t v___x_1351_; 
v___x_1349_ = lean_unsigned_to_nat(0u);
v___x_1350_ = lean_array_get_size(v_entries_1347_);
v___x_1351_ = lean_nat_dec_lt(v___x_1349_, v___x_1350_);
if (v___x_1351_ == 0)
{
lean_object* v___x_1352_; 
lean_dec(v_fid_1348_);
v___x_1352_ = lean_box(0);
return v___x_1352_;
}
else
{
lean_object* v___x_1353_; lean_object* v___x_1354_; uint8_t v___x_1355_; 
v___x_1353_ = lean_unsigned_to_nat(1u);
v___x_1354_ = lean_nat_sub(v___x_1350_, v___x_1353_);
v___x_1355_ = lean_nat_dec_le(v___x_1349_, v___x_1354_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; 
lean_dec(v___x_1354_);
lean_dec(v_fid_1348_);
v___x_1356_ = lean_box(0);
return v___x_1356_;
}
else
{
lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1357_ = lean_box(0);
v___x_1358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1358_, 0, v_fid_1348_);
lean_ctor_set(v___x_1358_, 1, v___x_1357_);
v___x_1359_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__0));
v___x_1360_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___closed__1));
v___x_1361_ = l_Array_binSearchAux___redArg(v___x_1359_, v___x_1360_, v_entries_1347_, v___x_1358_, v___x_1349_, v___x_1354_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v___x_1362_; 
v___x_1362_ = lean_box(0);
return v___x_1362_;
}
else
{
lean_object* v_val_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1371_; 
v_val_1363_ = lean_ctor_get(v___x_1361_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1361_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1365_ = v___x_1361_;
v_isShared_1366_ = v_isSharedCheck_1371_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_val_1363_);
lean_dec(v___x_1361_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1371_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v_snd_1367_; lean_object* v___x_1369_; 
v_snd_1367_ = lean_ctor_get(v_val_1363_, 1);
lean_inc(v_snd_1367_);
lean_dec(v_val_1363_);
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 0, v_snd_1367_);
v___x_1369_ = v___x_1365_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_snd_1367_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f___boxed(lean_object* v_entries_1372_, lean_object* v_fid_1373_){
_start:
{
lean_object* v_res_1374_; 
v_res_1374_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_findAtSorted_x3f(v_entries_1372_, v_fid_1373_);
lean_dec_ref(v_entries_1372_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object* v_es_1375_){
_start:
{
lean_object* v___x_1376_; 
v___x_1376_ = lean_array_mk(v_es_1375_);
return v___x_1376_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1377_, lean_object* v_i_1378_, lean_object* v_k_1379_){
_start:
{
lean_object* v___x_1380_; uint8_t v___x_1381_; 
v___x_1380_ = lean_array_get_size(v_keys_1377_);
v___x_1381_ = lean_nat_dec_lt(v_i_1378_, v___x_1380_);
if (v___x_1381_ == 0)
{
lean_dec(v_i_1378_);
return v___x_1381_;
}
else
{
lean_object* v_k_x27_1382_; uint8_t v___x_1383_; 
v_k_x27_1382_ = lean_array_fget_borrowed(v_keys_1377_, v_i_1378_);
v___x_1383_ = lean_name_eq(v_k_1379_, v_k_x27_1382_);
if (v___x_1383_ == 0)
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1384_ = lean_unsigned_to_nat(1u);
v___x_1385_ = lean_nat_add(v_i_1378_, v___x_1384_);
lean_dec(v_i_1378_);
v_i_1378_ = v___x_1385_;
goto _start;
}
else
{
lean_dec(v_i_1378_);
return v___x_1381_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1387_, lean_object* v_i_1388_, lean_object* v_k_1389_){
_start:
{
uint8_t v_res_1390_; lean_object* v_r_1391_; 
v_res_1390_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_keys_1387_, v_i_1388_, v_k_1389_);
lean_dec(v_k_1389_);
lean_dec_ref(v_keys_1387_);
v_r_1391_ = lean_box(v_res_1390_);
return v_r_1391_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_x_1392_, size_t v_x_1393_, lean_object* v_x_1394_){
_start:
{
if (lean_obj_tag(v_x_1392_) == 0)
{
lean_object* v_es_1395_; lean_object* v___x_1396_; size_t v___x_1397_; size_t v___x_1398_; lean_object* v_j_1399_; lean_object* v___x_1400_; 
v_es_1395_ = lean_ctor_get(v_x_1392_, 0);
v___x_1396_ = lean_box(2);
v___x_1397_ = ((size_t)31ULL);
v___x_1398_ = lean_usize_land(v_x_1393_, v___x_1397_);
v_j_1399_ = lean_usize_to_nat(v___x_1398_);
v___x_1400_ = lean_array_get_borrowed(v___x_1396_, v_es_1395_, v_j_1399_);
lean_dec(v_j_1399_);
switch(lean_obj_tag(v___x_1400_))
{
case 0:
{
lean_object* v_key_1401_; uint8_t v___x_1402_; 
v_key_1401_ = lean_ctor_get(v___x_1400_, 0);
v___x_1402_ = lean_name_eq(v_x_1394_, v_key_1401_);
return v___x_1402_;
}
case 1:
{
lean_object* v_node_1403_; size_t v___x_1404_; size_t v___x_1405_; 
v_node_1403_ = lean_ctor_get(v___x_1400_, 0);
v___x_1404_ = ((size_t)5ULL);
v___x_1405_ = lean_usize_shift_right(v_x_1393_, v___x_1404_);
v_x_1392_ = v_node_1403_;
v_x_1393_ = v___x_1405_;
goto _start;
}
default: 
{
uint8_t v___x_1407_; 
v___x_1407_ = 0;
return v___x_1407_;
}
}
}
else
{
lean_object* v_ks_1408_; lean_object* v___x_1409_; uint8_t v___x_1410_; 
v_ks_1408_ = lean_ctor_get(v_x_1392_, 0);
v___x_1409_ = lean_unsigned_to_nat(0u);
v___x_1410_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_ks_1408_, v___x_1409_, v_x_1394_);
return v___x_1410_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_x_1411_, lean_object* v_x_1412_, lean_object* v_x_1413_){
_start:
{
size_t v_x_1145__boxed_1414_; uint8_t v_res_1415_; lean_object* v_r_1416_; 
v_x_1145__boxed_1414_ = lean_unbox_usize(v_x_1412_);
lean_dec(v_x_1412_);
v_res_1415_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_1411_, v_x_1145__boxed_1414_, v_x_1413_);
lean_dec(v_x_1413_);
lean_dec_ref(v_x_1411_);
v_r_1416_ = lean_box(v_res_1415_);
return v_r_1416_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg(lean_object* v_x_1417_, lean_object* v_x_1418_){
_start:
{
uint64_t v___y_1420_; 
if (lean_obj_tag(v_x_1418_) == 0)
{
uint64_t v___x_1423_; 
v___x_1423_ = 1723ULL;
v___y_1420_ = v___x_1423_;
goto v___jp_1419_;
}
else
{
uint64_t v_hash_1424_; 
v_hash_1424_ = lean_ctor_get_uint64(v_x_1418_, sizeof(void*)*2);
v___y_1420_ = v_hash_1424_;
goto v___jp_1419_;
}
v___jp_1419_:
{
size_t v___x_1421_; uint8_t v___x_1422_; 
v___x_1421_ = lean_uint64_to_usize(v___y_1420_);
v___x_1422_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_1417_, v___x_1421_, v_x_1418_);
return v___x_1422_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_x_1425_, lean_object* v_x_1426_){
_start:
{
uint8_t v_res_1427_; lean_object* v_r_1428_; 
v_res_1427_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg(v_x_1425_, v_x_1426_);
lean_dec(v_x_1426_);
lean_dec_ref(v_x_1425_);
v_r_1428_ = lean_box(v_res_1427_);
return v_r_1428_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object* v_x1_1429_, lean_object* v_x2_1430_){
_start:
{
lean_object* v_fst_1431_; uint8_t v___x_1432_; 
v_fst_1431_ = lean_ctor_get(v_x2_1430_, 0);
v___x_1432_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg(v_x1_1429_, v_fst_1431_);
if (v___x_1432_ == 0)
{
uint8_t v___x_1433_; 
v___x_1433_ = 1;
return v___x_1433_;
}
else
{
uint8_t v___x_1434_; 
v___x_1434_ = 0;
return v___x_1434_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object* v_x1_1435_, lean_object* v_x2_1436_){
_start:
{
uint8_t v_res_1437_; lean_object* v_r_1438_; 
v_res_1437_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(v_x1_1435_, v_x2_1436_);
lean_dec_ref(v_x2_1436_);
lean_dec_ref(v_x1_1435_);
v_r_1438_ = lean_box(v_res_1437_);
return v_r_1438_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___redArg(lean_object* v_f_1439_, lean_object* v_keys_1440_, lean_object* v_vals_1441_, lean_object* v_i_1442_, lean_object* v_acc_1443_){
_start:
{
lean_object* v___x_1444_; uint8_t v___x_1445_; 
v___x_1444_ = lean_array_get_size(v_keys_1440_);
v___x_1445_ = lean_nat_dec_lt(v_i_1442_, v___x_1444_);
if (v___x_1445_ == 0)
{
lean_dec(v_i_1442_);
lean_dec(v_f_1439_);
return v_acc_1443_;
}
else
{
lean_object* v_k_1446_; lean_object* v_v_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; 
v_k_1446_ = lean_array_fget_borrowed(v_keys_1440_, v_i_1442_);
v_v_1447_ = lean_array_fget_borrowed(v_vals_1441_, v_i_1442_);
lean_inc(v_f_1439_);
lean_inc(v_v_1447_);
lean_inc(v_k_1446_);
v___x_1448_ = lean_apply_3(v_f_1439_, v_acc_1443_, v_k_1446_, v_v_1447_);
v___x_1449_ = lean_unsigned_to_nat(1u);
v___x_1450_ = lean_nat_add(v_i_1442_, v___x_1449_);
lean_dec(v_i_1442_);
v_i_1442_ = v___x_1450_;
v_acc_1443_ = v___x_1448_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___redArg___boxed(lean_object* v_f_1452_, lean_object* v_keys_1453_, lean_object* v_vals_1454_, lean_object* v_i_1455_, lean_object* v_acc_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___redArg(v_f_1452_, v_keys_1453_, v_vals_1454_, v_i_1455_, v_acc_1456_);
lean_dec_ref(v_vals_1454_);
lean_dec_ref(v_keys_1453_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg(lean_object* v_f_1458_, lean_object* v_as_1459_, size_t v_i_1460_, size_t v_stop_1461_, lean_object* v_b_1462_){
_start:
{
lean_object* v___y_1464_; uint8_t v___x_1468_; 
v___x_1468_ = lean_usize_dec_eq(v_i_1460_, v_stop_1461_);
if (v___x_1468_ == 0)
{
lean_object* v___x_1469_; 
v___x_1469_ = lean_array_uget_borrowed(v_as_1459_, v_i_1460_);
switch(lean_obj_tag(v___x_1469_))
{
case 0:
{
lean_object* v_key_1470_; lean_object* v_val_1471_; lean_object* v___x_1472_; 
v_key_1470_ = lean_ctor_get(v___x_1469_, 0);
v_val_1471_ = lean_ctor_get(v___x_1469_, 1);
lean_inc(v_f_1458_);
lean_inc(v_val_1471_);
lean_inc(v_key_1470_);
v___x_1472_ = lean_apply_3(v_f_1458_, v_b_1462_, v_key_1470_, v_val_1471_);
v___y_1464_ = v___x_1472_;
goto v___jp_1463_;
}
case 1:
{
lean_object* v_node_1473_; lean_object* v___x_1474_; 
v_node_1473_ = lean_ctor_get(v___x_1469_, 0);
lean_inc(v_f_1458_);
v___x_1474_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v_f_1458_, v_node_1473_, v_b_1462_);
v___y_1464_ = v___x_1474_;
goto v___jp_1463_;
}
default: 
{
v___y_1464_ = v_b_1462_;
goto v___jp_1463_;
}
}
}
else
{
lean_dec(v_f_1458_);
return v_b_1462_;
}
v___jp_1463_:
{
size_t v___x_1465_; size_t v___x_1466_; 
v___x_1465_ = ((size_t)1ULL);
v___x_1466_ = lean_usize_add(v_i_1460_, v___x_1465_);
v_i_1460_ = v___x_1466_;
v_b_1462_ = v___y_1464_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(lean_object* v_f_1475_, lean_object* v_x_1476_, lean_object* v_x_1477_){
_start:
{
if (lean_obj_tag(v_x_1476_) == 0)
{
lean_object* v_es_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; uint8_t v___x_1481_; 
v_es_1478_ = lean_ctor_get(v_x_1476_, 0);
v___x_1479_ = lean_unsigned_to_nat(0u);
v___x_1480_ = lean_array_get_size(v_es_1478_);
v___x_1481_ = lean_nat_dec_lt(v___x_1479_, v___x_1480_);
if (v___x_1481_ == 0)
{
lean_dec(v_f_1475_);
return v_x_1477_;
}
else
{
size_t v___x_1482_; size_t v___x_1483_; lean_object* v___x_1484_; 
v___x_1482_ = ((size_t)0ULL);
v___x_1483_ = lean_usize_of_nat(v___x_1480_);
v___x_1484_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg(v_f_1475_, v_es_1478_, v___x_1482_, v___x_1483_, v_x_1477_);
return v___x_1484_;
}
}
else
{
lean_object* v_ks_1485_; lean_object* v_vs_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v_ks_1485_ = lean_ctor_get(v_x_1476_, 0);
v_vs_1486_ = lean_ctor_get(v_x_1476_, 1);
v___x_1487_ = lean_unsigned_to_nat(0u);
v___x_1488_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___redArg(v_f_1475_, v_ks_1485_, v_vs_1486_, v___x_1487_, v_x_1477_);
return v___x_1488_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg___boxed(lean_object* v_f_1489_, lean_object* v_x_1490_, lean_object* v_x_1491_){
_start:
{
lean_object* v_res_1492_; 
v_res_1492_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v_f_1489_, v_x_1490_, v_x_1491_);
lean_dec_ref(v_x_1490_);
return v_res_1492_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg___boxed(lean_object* v_f_1493_, lean_object* v_as_1494_, lean_object* v_i_1495_, lean_object* v_stop_1496_, lean_object* v_b_1497_){
_start:
{
size_t v_i_boxed_1498_; size_t v_stop_boxed_1499_; lean_object* v_res_1500_; 
v_i_boxed_1498_ = lean_unbox_usize(v_i_1495_);
lean_dec(v_i_1495_);
v_stop_boxed_1499_ = lean_unbox_usize(v_stop_1496_);
lean_dec(v_stop_1496_);
v_res_1500_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg(v_f_1493_, v_as_1494_, v_i_boxed_1498_, v_stop_boxed_1499_, v_b_1497_);
lean_dec_ref(v_as_1494_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg___lam__0(lean_object* v_f_1501_, lean_object* v_x1_1502_, lean_object* v_x2_1503_, lean_object* v_x3_1504_){
_start:
{
lean_object* v___x_1505_; 
v___x_1505_ = lean_apply_3(v_f_1501_, v_x1_1502_, v_x2_1503_, v_x3_1504_);
return v___x_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_map_1506_, lean_object* v_f_1507_, lean_object* v_init_1508_){
_start:
{
lean_object* v___f_1509_; lean_object* v___x_1510_; 
v___f_1509_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1509_, 0, v_f_1507_);
v___x_1510_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v___f_1509_, v_map_1506_, v_init_1508_);
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_map_1511_, lean_object* v_f_1512_, lean_object* v_init_1513_){
_start:
{
lean_object* v_res_1514_; 
v_res_1514_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg(v_map_1511_, v_f_1512_, v_init_1513_);
lean_dec_ref(v_map_1511_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object* v_ps_1515_, lean_object* v_k_1516_, lean_object* v_v_1517_){
_start:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1518_, 0, v_k_1516_);
lean_ctor_set(v___x_1518_, 1, v_v_1517_);
v___x_1519_ = lean_array_push(v_ps_1515_, v___x_1518_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg(lean_object* v_m_1523_){
_start:
{
lean_object* v___f_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v___f_1524_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__0));
v___x_1525_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___closed__1));
v___x_1526_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg(v_m_1523_, v___f_1524_, v___x_1525_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_m_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg(v_m_1527_);
lean_dec_ref(v_m_1527_);
return v_res_1528_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
lean_object* v_fst_1531_; lean_object* v_fst_1532_; uint8_t v___x_1533_; 
v_fst_1531_ = lean_ctor_get(v___y_1529_, 0);
v_fst_1532_ = lean_ctor_get(v___y_1530_, 0);
v___x_1533_ = l_Lean_Name_quickLt(v_fst_1531_, v_fst_1532_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0___boxed(lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
uint8_t v_res_1536_; lean_object* v_r_1537_; 
v_res_1536_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(v___y_1534_, v___y_1535_);
lean_dec_ref(v___y_1535_);
lean_dec_ref(v___y_1534_);
v_r_1537_ = lean_box(v_res_1536_);
return v_r_1537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___redArg(lean_object* v_hi_1538_, lean_object* v_pivot_1539_, lean_object* v_as_1540_, lean_object* v_i_1541_, lean_object* v_k_1542_){
_start:
{
uint8_t v___x_1543_; 
v___x_1543_ = lean_nat_dec_lt(v_k_1542_, v_hi_1538_);
if (v___x_1543_ == 0)
{
lean_object* v___x_1544_; lean_object* v___x_1545_; 
lean_dec(v_k_1542_);
v___x_1544_ = lean_array_fswap(v_as_1540_, v_i_1541_, v_hi_1538_);
v___x_1545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1545_, 0, v_i_1541_);
lean_ctor_set(v___x_1545_, 1, v___x_1544_);
return v___x_1545_;
}
else
{
lean_object* v___x_1546_; lean_object* v_fst_1547_; lean_object* v_fst_1548_; uint8_t v___x_1549_; 
v___x_1546_ = lean_array_fget_borrowed(v_as_1540_, v_k_1542_);
v_fst_1547_ = lean_ctor_get(v___x_1546_, 0);
v_fst_1548_ = lean_ctor_get(v_pivot_1539_, 0);
v___x_1549_ = l_Lean_Name_quickLt(v_fst_1547_, v_fst_1548_);
if (v___x_1549_ == 0)
{
lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1550_ = lean_unsigned_to_nat(1u);
v___x_1551_ = lean_nat_add(v_k_1542_, v___x_1550_);
lean_dec(v_k_1542_);
v_k_1542_ = v___x_1551_;
goto _start;
}
else
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1553_ = lean_array_fswap(v_as_1540_, v_i_1541_, v_k_1542_);
v___x_1554_ = lean_unsigned_to_nat(1u);
v___x_1555_ = lean_nat_add(v_i_1541_, v___x_1554_);
lean_dec(v_i_1541_);
v___x_1556_ = lean_nat_add(v_k_1542_, v___x_1554_);
lean_dec(v_k_1542_);
v_as_1540_ = v___x_1553_;
v_i_1541_ = v___x_1555_;
v_k_1542_ = v___x_1556_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___redArg___boxed(lean_object* v_hi_1558_, lean_object* v_pivot_1559_, lean_object* v_as_1560_, lean_object* v_i_1561_, lean_object* v_k_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___redArg(v_hi_1558_, v_pivot_1559_, v_as_1560_, v_i_1561_, v_k_1562_);
lean_dec_ref(v_pivot_1559_);
lean_dec(v_hi_1558_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(lean_object* v_n_1564_, lean_object* v_as_1565_, lean_object* v_lo_1566_, lean_object* v_hi_1567_){
_start:
{
lean_object* v___y_1569_; uint8_t v___x_1579_; 
v___x_1579_ = lean_nat_dec_lt(v_lo_1566_, v_hi_1567_);
if (v___x_1579_ == 0)
{
lean_dec(v_lo_1566_);
return v_as_1565_;
}
else
{
lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v_mid_1582_; lean_object* v___y_1584_; lean_object* v___y_1590_; lean_object* v___x_1595_; lean_object* v___x_1596_; uint8_t v___x_1597_; 
v___x_1580_ = lean_nat_add(v_lo_1566_, v_hi_1567_);
v___x_1581_ = lean_unsigned_to_nat(1u);
v_mid_1582_ = lean_nat_shiftr(v___x_1580_, v___x_1581_);
lean_dec(v___x_1580_);
v___x_1595_ = lean_array_fget_borrowed(v_as_1565_, v_mid_1582_);
v___x_1596_ = lean_array_fget_borrowed(v_as_1565_, v_lo_1566_);
v___x_1597_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(v___x_1595_, v___x_1596_);
if (v___x_1597_ == 0)
{
v___y_1590_ = v_as_1565_;
goto v___jp_1589_;
}
else
{
lean_object* v___x_1598_; 
v___x_1598_ = lean_array_fswap(v_as_1565_, v_lo_1566_, v_mid_1582_);
v___y_1590_ = v___x_1598_;
goto v___jp_1589_;
}
v___jp_1583_:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; uint8_t v___x_1587_; 
v___x_1585_ = lean_array_fget_borrowed(v___y_1584_, v_mid_1582_);
v___x_1586_ = lean_array_fget_borrowed(v___y_1584_, v_hi_1567_);
v___x_1587_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(v___x_1585_, v___x_1586_);
if (v___x_1587_ == 0)
{
lean_dec(v_mid_1582_);
v___y_1569_ = v___y_1584_;
goto v___jp_1568_;
}
else
{
lean_object* v___x_1588_; 
v___x_1588_ = lean_array_fswap(v___y_1584_, v_mid_1582_, v_hi_1567_);
lean_dec(v_mid_1582_);
v___y_1569_ = v___x_1588_;
goto v___jp_1568_;
}
}
v___jp_1589_:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; uint8_t v___x_1593_; 
v___x_1591_ = lean_array_fget_borrowed(v___y_1590_, v_hi_1567_);
v___x_1592_ = lean_array_fget_borrowed(v___y_1590_, v_lo_1566_);
v___x_1593_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(v___x_1591_, v___x_1592_);
if (v___x_1593_ == 0)
{
v___y_1584_ = v___y_1590_;
goto v___jp_1583_;
}
else
{
lean_object* v___x_1594_; 
v___x_1594_ = lean_array_fswap(v___y_1590_, v_lo_1566_, v_hi_1567_);
v___y_1584_ = v___x_1594_;
goto v___jp_1583_;
}
}
}
v___jp_1568_:
{
lean_object* v_pivot_1570_; lean_object* v___x_1571_; lean_object* v_fst_1572_; lean_object* v_snd_1573_; uint8_t v___x_1574_; 
v_pivot_1570_ = lean_array_fget(v___y_1569_, v_hi_1567_);
lean_inc_n(v_lo_1566_, 2);
v___x_1571_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___redArg(v_hi_1567_, v_pivot_1570_, v___y_1569_, v_lo_1566_, v_lo_1566_);
lean_dec(v_pivot_1570_);
v_fst_1572_ = lean_ctor_get(v___x_1571_, 0);
lean_inc(v_fst_1572_);
v_snd_1573_ = lean_ctor_get(v___x_1571_, 1);
lean_inc(v_snd_1573_);
lean_dec_ref(v___x_1571_);
v___x_1574_ = lean_nat_dec_le(v_hi_1567_, v_fst_1572_);
if (v___x_1574_ == 0)
{
lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1575_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(v_n_1564_, v_snd_1573_, v_lo_1566_, v_fst_1572_);
v___x_1576_ = lean_unsigned_to_nat(1u);
v___x_1577_ = lean_nat_add(v_fst_1572_, v___x_1576_);
lean_dec(v_fst_1572_);
v_as_1565_ = v___x_1575_;
v_lo_1566_ = v___x_1577_;
goto _start;
}
else
{
lean_dec(v_fst_1572_);
lean_dec(v_lo_1566_);
return v_snd_1573_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object* v_n_1599_, lean_object* v_as_1600_, lean_object* v_lo_1601_, lean_object* v_hi_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(v_n_1599_, v_as_1600_, v_lo_1601_, v_hi_1602_);
lean_dec(v_hi_1602_);
lean_dec(v_n_1599_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object* v_x_1606_, lean_object* v_s_1607_, lean_object* v_x_1608_){
_start:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___y_1614_; lean_object* v___y_1615_; uint8_t v___x_1618_; 
v___x_1609_ = lean_unsigned_to_nat(0u);
v___x_1610_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_));
v___x_1611_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg(v_s_1607_);
v___x_1612_ = lean_array_get_size(v___x_1611_);
v___x_1618_ = lean_nat_dec_eq(v___x_1612_, v___x_1609_);
if (v___x_1618_ == 0)
{
lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___y_1622_; uint8_t v___x_1624_; 
v___x_1619_ = lean_unsigned_to_nat(1u);
v___x_1620_ = lean_nat_sub(v___x_1612_, v___x_1619_);
v___x_1624_ = lean_nat_dec_le(v___x_1609_, v___x_1620_);
if (v___x_1624_ == 0)
{
lean_inc(v___x_1620_);
v___y_1622_ = v___x_1620_;
goto v___jp_1621_;
}
else
{
v___y_1622_ = v___x_1609_;
goto v___jp_1621_;
}
v___jp_1621_:
{
uint8_t v___x_1623_; 
v___x_1623_ = lean_nat_dec_le(v___y_1622_, v___x_1620_);
if (v___x_1623_ == 0)
{
lean_dec(v___x_1620_);
lean_inc(v___y_1622_);
v___y_1614_ = v___y_1622_;
v___y_1615_ = v___y_1622_;
goto v___jp_1613_;
}
else
{
v___y_1614_ = v___y_1622_;
v___y_1615_ = v___x_1620_;
goto v___jp_1613_;
}
}
}
else
{
lean_object* v___x_1625_; 
v___x_1625_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1610_);
lean_ctor_set(v___x_1625_, 1, v___x_1610_);
lean_ctor_set(v___x_1625_, 2, v___x_1611_);
return v___x_1625_;
}
v___jp_1613_:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1616_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(v___x_1612_, v___x_1611_, v___y_1614_, v___y_1615_);
lean_dec(v___y_1615_);
v___x_1617_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1617_, 0, v___x_1610_);
lean_ctor_set(v___x_1617_, 1, v___x_1610_);
lean_ctor_set(v___x_1617_, 2, v___x_1616_);
return v___x_1617_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object* v_x_1626_, lean_object* v_s_1627_, lean_object* v_x_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__2_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(v_x_1626_, v_s_1627_, v_x_1628_);
lean_dec(v_x_1628_);
lean_dec_ref(v_s_1627_);
lean_dec_ref(v_x_1626_);
return v_res_1629_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1630_; 
v___x_1630_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1630_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1631_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_);
v___x_1632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1631_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object* v_x_1633_){
_start:
{
lean_object* v___x_1634_; 
v___x_1634_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__1_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_);
return v___x_1634_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object* v_x_1635_){
_start:
{
lean_object* v_res_1636_; 
v_res_1636_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(v_x_1635_);
lean_dec_ref(v_x_1635_);
return v_res_1636_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9_spec__11___redArg(lean_object* v_x_1637_, lean_object* v_x_1638_, lean_object* v_x_1639_, lean_object* v_x_1640_){
_start:
{
lean_object* v_ks_1641_; lean_object* v_vs_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1666_; 
v_ks_1641_ = lean_ctor_get(v_x_1637_, 0);
v_vs_1642_ = lean_ctor_get(v_x_1637_, 1);
v_isSharedCheck_1666_ = !lean_is_exclusive(v_x_1637_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1644_ = v_x_1637_;
v_isShared_1645_ = v_isSharedCheck_1666_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_vs_1642_);
lean_inc(v_ks_1641_);
lean_dec(v_x_1637_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1666_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1646_; uint8_t v___x_1647_; 
v___x_1646_ = lean_array_get_size(v_ks_1641_);
v___x_1647_ = lean_nat_dec_lt(v_x_1638_, v___x_1646_);
if (v___x_1647_ == 0)
{
lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1651_; 
lean_dec(v_x_1638_);
v___x_1648_ = lean_array_push(v_ks_1641_, v_x_1639_);
v___x_1649_ = lean_array_push(v_vs_1642_, v_x_1640_);
if (v_isShared_1645_ == 0)
{
lean_ctor_set(v___x_1644_, 1, v___x_1649_);
lean_ctor_set(v___x_1644_, 0, v___x_1648_);
v___x_1651_ = v___x_1644_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v___x_1648_);
lean_ctor_set(v_reuseFailAlloc_1652_, 1, v___x_1649_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
return v___x_1651_;
}
}
else
{
lean_object* v_k_x27_1653_; uint8_t v___x_1654_; 
v_k_x27_1653_ = lean_array_fget_borrowed(v_ks_1641_, v_x_1638_);
v___x_1654_ = lean_name_eq(v_x_1639_, v_k_x27_1653_);
if (v___x_1654_ == 0)
{
lean_object* v___x_1656_; 
if (v_isShared_1645_ == 0)
{
v___x_1656_ = v___x_1644_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_ks_1641_);
lean_ctor_set(v_reuseFailAlloc_1660_, 1, v_vs_1642_);
v___x_1656_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1657_ = lean_unsigned_to_nat(1u);
v___x_1658_ = lean_nat_add(v_x_1638_, v___x_1657_);
lean_dec(v_x_1638_);
v_x_1637_ = v___x_1656_;
v_x_1638_ = v___x_1658_;
goto _start;
}
}
else
{
lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1664_; 
v___x_1661_ = lean_array_fset(v_ks_1641_, v_x_1638_, v_x_1639_);
v___x_1662_ = lean_array_fset(v_vs_1642_, v_x_1638_, v_x_1640_);
lean_dec(v_x_1638_);
if (v_isShared_1645_ == 0)
{
lean_ctor_set(v___x_1644_, 1, v___x_1662_);
lean_ctor_set(v___x_1644_, 0, v___x_1661_);
v___x_1664_ = v___x_1644_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v___x_1661_);
lean_ctor_set(v_reuseFailAlloc_1665_, 1, v___x_1662_);
v___x_1664_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
return v___x_1664_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9___redArg(lean_object* v_n_1667_, lean_object* v_k_1668_, lean_object* v_v_1669_){
_start:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; 
v___x_1670_ = lean_unsigned_to_nat(0u);
v___x_1671_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9_spec__11___redArg(v_n_1667_, v___x_1670_, v_k_1668_, v_v_1669_);
return v___x_1671_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_1672_; 
v___x_1672_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg(lean_object* v_x_1673_, size_t v_x_1674_, size_t v_x_1675_, lean_object* v_x_1676_, lean_object* v_x_1677_){
_start:
{
if (lean_obj_tag(v_x_1673_) == 0)
{
lean_object* v_es_1678_; size_t v___x_1679_; size_t v___x_1680_; lean_object* v_j_1681_; lean_object* v___x_1682_; uint8_t v___x_1683_; 
v_es_1678_ = lean_ctor_get(v_x_1673_, 0);
v___x_1679_ = ((size_t)31ULL);
v___x_1680_ = lean_usize_land(v_x_1674_, v___x_1679_);
v_j_1681_ = lean_usize_to_nat(v___x_1680_);
v___x_1682_ = lean_array_get_size(v_es_1678_);
v___x_1683_ = lean_nat_dec_lt(v_j_1681_, v___x_1682_);
if (v___x_1683_ == 0)
{
lean_dec(v_j_1681_);
lean_dec(v_x_1677_);
lean_dec(v_x_1676_);
return v_x_1673_;
}
else
{
lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1722_; 
lean_inc_ref(v_es_1678_);
v_isSharedCheck_1722_ = !lean_is_exclusive(v_x_1673_);
if (v_isSharedCheck_1722_ == 0)
{
lean_object* v_unused_1723_; 
v_unused_1723_ = lean_ctor_get(v_x_1673_, 0);
lean_dec(v_unused_1723_);
v___x_1685_ = v_x_1673_;
v_isShared_1686_ = v_isSharedCheck_1722_;
goto v_resetjp_1684_;
}
else
{
lean_dec(v_x_1673_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1722_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v_v_1687_; lean_object* v___x_1688_; lean_object* v_xs_x27_1689_; lean_object* v___y_1691_; 
v_v_1687_ = lean_array_fget(v_es_1678_, v_j_1681_);
v___x_1688_ = lean_box(0);
v_xs_x27_1689_ = lean_array_fset(v_es_1678_, v_j_1681_, v___x_1688_);
switch(lean_obj_tag(v_v_1687_))
{
case 0:
{
lean_object* v_key_1696_; lean_object* v_val_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1707_; 
v_key_1696_ = lean_ctor_get(v_v_1687_, 0);
v_val_1697_ = lean_ctor_get(v_v_1687_, 1);
v_isSharedCheck_1707_ = !lean_is_exclusive(v_v_1687_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1699_ = v_v_1687_;
v_isShared_1700_ = v_isSharedCheck_1707_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_val_1697_);
lean_inc(v_key_1696_);
lean_dec(v_v_1687_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1707_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
uint8_t v___x_1701_; 
v___x_1701_ = lean_name_eq(v_x_1676_, v_key_1696_);
if (v___x_1701_ == 0)
{
lean_object* v___x_1702_; lean_object* v___x_1703_; 
lean_del_object(v___x_1699_);
v___x_1702_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1696_, v_val_1697_, v_x_1676_, v_x_1677_);
v___x_1703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1703_, 0, v___x_1702_);
v___y_1691_ = v___x_1703_;
goto v___jp_1690_;
}
else
{
lean_object* v___x_1705_; 
lean_dec(v_val_1697_);
lean_dec(v_key_1696_);
if (v_isShared_1700_ == 0)
{
lean_ctor_set(v___x_1699_, 1, v_x_1677_);
lean_ctor_set(v___x_1699_, 0, v_x_1676_);
v___x_1705_ = v___x_1699_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_x_1676_);
lean_ctor_set(v_reuseFailAlloc_1706_, 1, v_x_1677_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
v___y_1691_ = v___x_1705_;
goto v___jp_1690_;
}
}
}
}
case 1:
{
lean_object* v_node_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1720_; 
v_node_1708_ = lean_ctor_get(v_v_1687_, 0);
v_isSharedCheck_1720_ = !lean_is_exclusive(v_v_1687_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1710_ = v_v_1687_;
v_isShared_1711_ = v_isSharedCheck_1720_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_node_1708_);
lean_dec(v_v_1687_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1720_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
size_t v___x_1712_; size_t v___x_1713_; size_t v___x_1714_; size_t v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1718_; 
v___x_1712_ = ((size_t)5ULL);
v___x_1713_ = lean_usize_shift_right(v_x_1674_, v___x_1712_);
v___x_1714_ = ((size_t)1ULL);
v___x_1715_ = lean_usize_add(v_x_1675_, v___x_1714_);
v___x_1716_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg(v_node_1708_, v___x_1713_, v___x_1715_, v_x_1676_, v_x_1677_);
if (v_isShared_1711_ == 0)
{
lean_ctor_set(v___x_1710_, 0, v___x_1716_);
v___x_1718_ = v___x_1710_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v___x_1716_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
v___y_1691_ = v___x_1718_;
goto v___jp_1690_;
}
}
}
default: 
{
lean_object* v___x_1721_; 
v___x_1721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1721_, 0, v_x_1676_);
lean_ctor_set(v___x_1721_, 1, v_x_1677_);
v___y_1691_ = v___x_1721_;
goto v___jp_1690_;
}
}
v___jp_1690_:
{
lean_object* v___x_1692_; lean_object* v___x_1694_; 
v___x_1692_ = lean_array_fset(v_xs_x27_1689_, v_j_1681_, v___y_1691_);
lean_dec(v_j_1681_);
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 0, v___x_1692_);
v___x_1694_ = v___x_1685_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v___x_1692_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
}
}
else
{
lean_object* v_ks_1724_; lean_object* v_vs_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1743_; 
v_ks_1724_ = lean_ctor_get(v_x_1673_, 0);
v_vs_1725_ = lean_ctor_get(v_x_1673_, 1);
v_isSharedCheck_1743_ = !lean_is_exclusive(v_x_1673_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1727_ = v_x_1673_;
v_isShared_1728_ = v_isSharedCheck_1743_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_vs_1725_);
lean_inc(v_ks_1724_);
lean_dec(v_x_1673_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1743_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1730_; 
if (v_isShared_1728_ == 0)
{
v___x_1730_ = v___x_1727_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_ks_1724_);
lean_ctor_set(v_reuseFailAlloc_1742_, 1, v_vs_1725_);
v___x_1730_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
lean_object* v_newNode_1731_; size_t v___x_1732_; uint8_t v___x_1733_; 
v_newNode_1731_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9___redArg(v___x_1730_, v_x_1676_, v_x_1677_);
v___x_1732_ = ((size_t)7ULL);
v___x_1733_ = lean_usize_dec_le(v___x_1732_, v_x_1675_);
if (v___x_1733_ == 0)
{
lean_object* v___x_1734_; lean_object* v___x_1735_; uint8_t v___x_1736_; 
v___x_1734_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1731_);
v___x_1735_ = lean_unsigned_to_nat(4u);
v___x_1736_ = lean_nat_dec_lt(v___x_1734_, v___x_1735_);
lean_dec(v___x_1734_);
if (v___x_1736_ == 0)
{
lean_object* v_ks_1737_; lean_object* v_vs_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; 
v_ks_1737_ = lean_ctor_get(v_newNode_1731_, 0);
lean_inc_ref(v_ks_1737_);
v_vs_1738_ = lean_ctor_get(v_newNode_1731_, 1);
lean_inc_ref(v_vs_1738_);
lean_dec_ref(v_newNode_1731_);
v___x_1739_ = lean_unsigned_to_nat(0u);
v___x_1740_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___closed__0);
v___x_1741_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___redArg(v_x_1675_, v_ks_1737_, v_vs_1738_, v___x_1739_, v___x_1740_);
lean_dec_ref(v_vs_1738_);
lean_dec_ref(v_ks_1737_);
return v___x_1741_;
}
else
{
return v_newNode_1731_;
}
}
else
{
return v_newNode_1731_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___redArg(size_t v_depth_1744_, lean_object* v_keys_1745_, lean_object* v_vals_1746_, lean_object* v_i_1747_, lean_object* v_entries_1748_){
_start:
{
lean_object* v___x_1749_; uint8_t v___x_1750_; 
v___x_1749_ = lean_array_get_size(v_keys_1745_);
v___x_1750_ = lean_nat_dec_lt(v_i_1747_, v___x_1749_);
if (v___x_1750_ == 0)
{
lean_dec(v_i_1747_);
return v_entries_1748_;
}
else
{
lean_object* v_k_1751_; lean_object* v_v_1752_; uint64_t v___y_1754_; 
v_k_1751_ = lean_array_fget_borrowed(v_keys_1745_, v_i_1747_);
v_v_1752_ = lean_array_fget_borrowed(v_vals_1746_, v_i_1747_);
if (lean_obj_tag(v_k_1751_) == 0)
{
uint64_t v___x_1765_; 
v___x_1765_ = 1723ULL;
v___y_1754_ = v___x_1765_;
goto v___jp_1753_;
}
else
{
uint64_t v_hash_1766_; 
v_hash_1766_ = lean_ctor_get_uint64(v_k_1751_, sizeof(void*)*2);
v___y_1754_ = v_hash_1766_;
goto v___jp_1753_;
}
v___jp_1753_:
{
size_t v_h_1755_; size_t v___x_1756_; lean_object* v___x_1757_; size_t v___x_1758_; size_t v___x_1759_; size_t v___x_1760_; size_t v_h_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; 
v_h_1755_ = lean_uint64_to_usize(v___y_1754_);
v___x_1756_ = ((size_t)5ULL);
v___x_1757_ = lean_unsigned_to_nat(1u);
v___x_1758_ = ((size_t)1ULL);
v___x_1759_ = lean_usize_sub(v_depth_1744_, v___x_1758_);
v___x_1760_ = lean_usize_mul(v___x_1756_, v___x_1759_);
v_h_1761_ = lean_usize_shift_right(v_h_1755_, v___x_1760_);
v___x_1762_ = lean_nat_add(v_i_1747_, v___x_1757_);
lean_dec(v_i_1747_);
lean_inc(v_v_1752_);
lean_inc(v_k_1751_);
v___x_1763_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg(v_entries_1748_, v_h_1761_, v_depth_1744_, v_k_1751_, v_v_1752_);
v_i_1747_ = v___x_1762_;
v_entries_1748_ = v___x_1763_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___redArg___boxed(lean_object* v_depth_1767_, lean_object* v_keys_1768_, lean_object* v_vals_1769_, lean_object* v_i_1770_, lean_object* v_entries_1771_){
_start:
{
size_t v_depth_boxed_1772_; lean_object* v_res_1773_; 
v_depth_boxed_1772_ = lean_unbox_usize(v_depth_1767_);
lean_dec(v_depth_1767_);
v_res_1773_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___redArg(v_depth_boxed_1772_, v_keys_1768_, v_vals_1769_, v_i_1770_, v_entries_1771_);
lean_dec_ref(v_vals_1769_);
lean_dec_ref(v_keys_1768_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg___boxed(lean_object* v_x_1774_, lean_object* v_x_1775_, lean_object* v_x_1776_, lean_object* v_x_1777_, lean_object* v_x_1778_){
_start:
{
size_t v_x_1539__boxed_1779_; size_t v_x_1540__boxed_1780_; lean_object* v_res_1781_; 
v_x_1539__boxed_1779_ = lean_unbox_usize(v_x_1775_);
lean_dec(v_x_1775_);
v_x_1540__boxed_1780_ = lean_unbox_usize(v_x_1776_);
lean_dec(v_x_1776_);
v_res_1781_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg(v_x_1774_, v_x_1539__boxed_1779_, v_x_1540__boxed_1780_, v_x_1777_, v_x_1778_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3___redArg(lean_object* v_x_1782_, lean_object* v_x_1783_, lean_object* v_x_1784_){
_start:
{
uint64_t v___y_1786_; 
if (lean_obj_tag(v_x_1783_) == 0)
{
uint64_t v___x_1790_; 
v___x_1790_ = 1723ULL;
v___y_1786_ = v___x_1790_;
goto v___jp_1785_;
}
else
{
uint64_t v_hash_1791_; 
v_hash_1791_ = lean_ctor_get_uint64(v_x_1783_, sizeof(void*)*2);
v___y_1786_ = v_hash_1791_;
goto v___jp_1785_;
}
v___jp_1785_:
{
size_t v___x_1787_; size_t v___x_1788_; lean_object* v___x_1789_; 
v___x_1787_ = lean_uint64_to_usize(v___y_1786_);
v___x_1788_ = ((size_t)1ULL);
v___x_1789_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg(v_x_1782_, v___x_1787_, v___x_1788_, v_x_1783_, v_x_1784_);
return v___x_1789_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__4_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(lean_object* v_s_1792_, lean_object* v_x_1793_){
_start:
{
lean_object* v_fst_1794_; lean_object* v_snd_1795_; lean_object* v___x_1796_; 
v_fst_1794_ = lean_ctor_get(v_x_1793_, 0);
lean_inc(v_fst_1794_);
v_snd_1795_ = lean_ctor_get(v_x_1793_, 1);
lean_inc(v_snd_1795_);
lean_dec_ref(v_x_1793_);
v___x_1796_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3___redArg(v_s_1792_, v_fst_1794_, v_snd_1795_);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1830_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_));
v___x_1831_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_1830_);
return v___x_1831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2____boxed(lean_object* v_a_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_();
return v_res_1833_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_1834_, lean_object* v_x_1835_, lean_object* v_x_1836_){
_start:
{
uint8_t v___x_1837_; 
v___x_1837_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___redArg(v_x_1835_, v_x_1836_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b2_1838_, lean_object* v_x_1839_, lean_object* v_x_1840_){
_start:
{
uint8_t v_res_1841_; lean_object* v_r_1842_; 
v_res_1841_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0(v_00_u03b2_1838_, v_x_1839_, v_x_1840_);
lean_dec(v_x_1840_);
lean_dec_ref(v_x_1839_);
v_r_1842_ = lean_box(v_res_1841_);
return v_r_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b2_1843_, lean_object* v_m_1844_){
_start:
{
lean_object* v___x_1845_; 
v___x_1845_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___redArg(v_m_1844_);
return v___x_1845_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1___boxed(lean_object* v_00_u03b2_1846_, lean_object* v_m_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l_Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1(v_00_u03b2_1846_, v_m_1847_);
lean_dec_ref(v_m_1847_);
return v_res_1848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2(lean_object* v_n_1849_, lean_object* v_as_1850_, lean_object* v_lo_1851_, lean_object* v_hi_1852_, lean_object* v_w_1853_, lean_object* v_hlo_1854_, lean_object* v_hhi_1855_){
_start:
{
lean_object* v___x_1856_; 
v___x_1856_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg(v_n_1849_, v_as_1850_, v_lo_1851_, v_hi_1852_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___boxed(lean_object* v_n_1857_, lean_object* v_as_1858_, lean_object* v_lo_1859_, lean_object* v_hi_1860_, lean_object* v_w_1861_, lean_object* v_hlo_1862_, lean_object* v_hhi_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2(v_n_1857_, v_as_1858_, v_lo_1859_, v_hi_1860_, v_w_1861_, v_hlo_1862_, v_hhi_1863_);
lean_dec(v_hi_1860_);
lean_dec(v_n_1857_);
return v_res_1864_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3(lean_object* v_00_u03b2_1865_, lean_object* v_x_1866_, lean_object* v_x_1867_, lean_object* v_x_1868_){
_start:
{
lean_object* v___x_1869_; 
v___x_1869_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3___redArg(v_x_1866_, v_x_1867_, v_x_1868_);
return v___x_1869_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_1870_, lean_object* v_x_1871_, size_t v_x_1872_, lean_object* v_x_1873_){
_start:
{
uint8_t v___x_1874_; 
v___x_1874_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_1871_, v_x_1872_, v_x_1873_);
return v___x_1874_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_1875_, lean_object* v_x_1876_, lean_object* v_x_1877_, lean_object* v_x_1878_){
_start:
{
size_t v_x_1842__boxed_1879_; uint8_t v_res_1880_; lean_object* v_r_1881_; 
v_x_1842__boxed_1879_ = lean_unbox_usize(v_x_1877_);
lean_dec(v_x_1877_);
v_res_1880_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_1875_, v_x_1876_, v_x_1842__boxed_1879_, v_x_1878_);
lean_dec(v_x_1878_);
lean_dec_ref(v_x_1876_);
v_r_1881_ = lean_box(v_res_1880_);
return v_r_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_00_u03c3_1882_, lean_object* v_00_u03b2_1883_, lean_object* v_map_1884_, lean_object* v_f_1885_, lean_object* v_init_1886_){
_start:
{
lean_object* v___x_1887_; 
v___x_1887_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___redArg(v_map_1884_, v_f_1885_, v_init_1886_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_00_u03c3_1888_, lean_object* v_00_u03b2_1889_, lean_object* v_map_1890_, lean_object* v_f_1891_, lean_object* v_init_1892_){
_start:
{
lean_object* v_res_1893_; 
v_res_1893_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2(v_00_u03c3_1888_, v_00_u03b2_1889_, v_map_1890_, v_f_1891_, v_init_1892_);
lean_dec_ref(v_map_1890_);
return v_res_1893_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4(lean_object* v_n_1894_, lean_object* v_lo_1895_, lean_object* v_hi_1896_, lean_object* v_hhi_1897_, lean_object* v_pivot_1898_, lean_object* v_as_1899_, lean_object* v_i_1900_, lean_object* v_k_1901_, lean_object* v_ilo_1902_, lean_object* v_ik_1903_, lean_object* v_w_1904_){
_start:
{
lean_object* v___x_1905_; 
v___x_1905_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___redArg(v_hi_1896_, v_pivot_1898_, v_as_1899_, v_i_1900_, v_k_1901_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4___boxed(lean_object* v_n_1906_, lean_object* v_lo_1907_, lean_object* v_hi_1908_, lean_object* v_hhi_1909_, lean_object* v_pivot_1910_, lean_object* v_as_1911_, lean_object* v_i_1912_, lean_object* v_k_1913_, lean_object* v_ilo_1914_, lean_object* v_ik_1915_, lean_object* v_w_1916_){
_start:
{
lean_object* v_res_1917_; 
v_res_1917_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2_spec__4(v_n_1906_, v_lo_1907_, v_hi_1908_, v_hhi_1909_, v_pivot_1910_, v_as_1911_, v_i_1912_, v_k_1913_, v_ilo_1914_, v_ik_1915_, v_w_1916_);
lean_dec_ref(v_pivot_1910_);
lean_dec(v_hi_1908_);
lean_dec(v_lo_1907_);
lean_dec(v_n_1906_);
return v_res_1917_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6(lean_object* v_00_u03b2_1918_, lean_object* v_x_1919_, size_t v_x_1920_, size_t v_x_1921_, lean_object* v_x_1922_, lean_object* v_x_1923_){
_start:
{
lean_object* v___x_1924_; 
v___x_1924_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___redArg(v_x_1919_, v_x_1920_, v_x_1921_, v_x_1922_, v_x_1923_);
return v___x_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6___boxed(lean_object* v_00_u03b2_1925_, lean_object* v_x_1926_, lean_object* v_x_1927_, lean_object* v_x_1928_, lean_object* v_x_1929_, lean_object* v_x_1930_){
_start:
{
size_t v_x_1857__boxed_1931_; size_t v_x_1858__boxed_1932_; lean_object* v_res_1933_; 
v_x_1857__boxed_1931_ = lean_unbox_usize(v_x_1927_);
lean_dec(v_x_1927_);
v_x_1858__boxed_1932_ = lean_unbox_usize(v_x_1928_);
lean_dec(v_x_1928_);
v_res_1933_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6(v_00_u03b2_1925_, v_x_1926_, v_x_1857__boxed_1931_, v_x_1858__boxed_1932_, v_x_1929_, v_x_1930_);
return v_res_1933_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1934_, lean_object* v_keys_1935_, lean_object* v_vals_1936_, lean_object* v_heq_1937_, lean_object* v_i_1938_, lean_object* v_k_1939_){
_start:
{
uint8_t v___x_1940_; 
v___x_1940_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_keys_1935_, v_i_1938_, v_k_1939_);
return v___x_1940_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1941_, lean_object* v_keys_1942_, lean_object* v_vals_1943_, lean_object* v_heq_1944_, lean_object* v_i_1945_, lean_object* v_k_1946_){
_start:
{
uint8_t v_res_1947_; lean_object* v_r_1948_; 
v_res_1947_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03b2_1941_, v_keys_1942_, v_vals_1943_, v_heq_1944_, v_i_1945_, v_k_1946_);
lean_dec(v_k_1946_);
lean_dec_ref(v_vals_1943_);
lean_dec_ref(v_keys_1942_);
v_r_1948_ = lean_box(v_res_1947_);
return v_r_1948_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(lean_object* v_map_1949_, lean_object* v_f_1950_, lean_object* v_init_1951_){
_start:
{
lean_object* v___x_1952_; 
v___x_1952_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v_f_1950_, v_map_1949_, v_init_1951_);
return v___x_1952_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_map_1953_, lean_object* v_f_1954_, lean_object* v_init_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___redArg(v_map_1953_, v_f_1954_, v_init_1955_);
lean_dec_ref(v_map_1953_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4(lean_object* v_00_u03c3_1957_, lean_object* v_00_u03b2_1958_, lean_object* v_map_1959_, lean_object* v_f_1960_, lean_object* v_init_1961_){
_start:
{
lean_object* v___x_1962_; 
v___x_1962_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v_f_1960_, v_map_1959_, v_init_1961_);
return v___x_1962_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03c3_1963_, lean_object* v_00_u03b2_1964_, lean_object* v_map_1965_, lean_object* v_f_1966_, lean_object* v_init_1967_){
_start:
{
lean_object* v_res_1968_; 
v_res_1968_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4(v_00_u03c3_1963_, v_00_u03b2_1964_, v_map_1965_, v_f_1966_, v_init_1967_);
lean_dec_ref(v_map_1965_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9(lean_object* v_00_u03b2_1969_, lean_object* v_n_1970_, lean_object* v_k_1971_, lean_object* v_v_1972_){
_start:
{
lean_object* v___x_1973_; 
v___x_1973_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9___redArg(v_n_1970_, v_k_1971_, v_v_1972_);
return v___x_1973_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10(lean_object* v_00_u03b2_1974_, size_t v_depth_1975_, lean_object* v_keys_1976_, lean_object* v_vals_1977_, lean_object* v_heq_1978_, lean_object* v_i_1979_, lean_object* v_entries_1980_){
_start:
{
lean_object* v___x_1981_; 
v___x_1981_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___redArg(v_depth_1975_, v_keys_1976_, v_vals_1977_, v_i_1979_, v_entries_1980_);
return v___x_1981_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10___boxed(lean_object* v_00_u03b2_1982_, lean_object* v_depth_1983_, lean_object* v_keys_1984_, lean_object* v_vals_1985_, lean_object* v_heq_1986_, lean_object* v_i_1987_, lean_object* v_entries_1988_){
_start:
{
size_t v_depth_boxed_1989_; lean_object* v_res_1990_; 
v_depth_boxed_1989_ = lean_unbox_usize(v_depth_1983_);
lean_dec(v_depth_1983_);
v_res_1990_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__10(v_00_u03b2_1982_, v_depth_boxed_1989_, v_keys_1984_, v_vals_1985_, v_heq_1986_, v_i_1987_, v_entries_1988_);
lean_dec_ref(v_vals_1985_);
lean_dec_ref(v_keys_1984_);
return v_res_1990_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7(lean_object* v_00_u03c3_1991_, lean_object* v_00_u03b1_1992_, lean_object* v_00_u03b2_1993_, lean_object* v_f_1994_, lean_object* v_x_1995_, lean_object* v_x_1996_){
_start:
{
lean_object* v___x_1997_; 
v___x_1997_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___redArg(v_f_1994_, v_x_1995_, v_x_1996_);
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7___boxed(lean_object* v_00_u03c3_1998_, lean_object* v_00_u03b1_1999_, lean_object* v_00_u03b2_2000_, lean_object* v_f_2001_, lean_object* v_x_2002_, lean_object* v_x_2003_){
_start:
{
lean_object* v_res_2004_; 
v_res_2004_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7(v_00_u03c3_1998_, v_00_u03b1_1999_, v_00_u03b2_2000_, v_f_2001_, v_x_2002_, v_x_2003_);
lean_dec_ref(v_x_2002_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9_spec__11(lean_object* v_00_u03b2_2005_, lean_object* v_x_2006_, lean_object* v_x_2007_, lean_object* v_x_2008_, lean_object* v_x_2009_){
_start:
{
lean_object* v___x_2010_; 
v___x_2010_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__3_spec__6_spec__9_spec__11___redArg(v_x_2006_, v_x_2007_, v_x_2008_, v_x_2009_);
return v___x_2010_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10(lean_object* v_00_u03b1_2011_, lean_object* v_00_u03b2_2012_, lean_object* v_00_u03c3_2013_, lean_object* v_f_2014_, lean_object* v_as_2015_, size_t v_i_2016_, size_t v_stop_2017_, lean_object* v_b_2018_){
_start:
{
lean_object* v___x_2019_; 
v___x_2019_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___redArg(v_f_2014_, v_as_2015_, v_i_2016_, v_stop_2017_, v_b_2018_);
return v___x_2019_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10___boxed(lean_object* v_00_u03b1_2020_, lean_object* v_00_u03b2_2021_, lean_object* v_00_u03c3_2022_, lean_object* v_f_2023_, lean_object* v_as_2024_, lean_object* v_i_2025_, lean_object* v_stop_2026_, lean_object* v_b_2027_){
_start:
{
size_t v_i_boxed_2028_; size_t v_stop_boxed_2029_; lean_object* v_res_2030_; 
v_i_boxed_2028_ = lean_unbox_usize(v_i_2025_);
lean_dec(v_i_2025_);
v_stop_boxed_2029_ = lean_unbox_usize(v_stop_2026_);
lean_dec(v_stop_2026_);
v_res_2030_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__10(v_00_u03b1_2020_, v_00_u03b2_2021_, v_00_u03c3_2022_, v_f_2023_, v_as_2024_, v_i_boxed_2028_, v_stop_boxed_2029_, v_b_2027_);
lean_dec_ref(v_as_2024_);
return v_res_2030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11(lean_object* v_00_u03c3_2031_, lean_object* v_00_u03b1_2032_, lean_object* v_00_u03b2_2033_, lean_object* v_f_2034_, lean_object* v_keys_2035_, lean_object* v_vals_2036_, lean_object* v_heq_2037_, lean_object* v_i_2038_, lean_object* v_acc_2039_){
_start:
{
lean_object* v___x_2040_; 
v___x_2040_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___redArg(v_f_2034_, v_keys_2035_, v_vals_2036_, v_i_2038_, v_acc_2039_);
return v___x_2040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11___boxed(lean_object* v_00_u03c3_2041_, lean_object* v_00_u03b1_2042_, lean_object* v_00_u03b2_2043_, lean_object* v_f_2044_, lean_object* v_keys_2045_, lean_object* v_vals_2046_, lean_object* v_heq_2047_, lean_object* v_i_2048_, lean_object* v_acc_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toArray___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__1_spec__2_spec__4_spec__7_spec__11(v_00_u03c3_2041_, v_00_u03b1_2042_, v_00_u03b2_2043_, v_f_2044_, v_keys_2045_, v_vals_2046_, v_heq_2047_, v_i_2048_, v_acc_2049_);
lean_dec_ref(v_vals_2046_);
lean_dec_ref(v_keys_2045_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary___lam__0(lean_object* v_addEntryFn_2051_, lean_object* v___x_2052_, lean_object* v_s_2053_){
_start:
{
lean_object* v_importedEntries_2054_; lean_object* v_state_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2063_; 
v_importedEntries_2054_ = lean_ctor_get(v_s_2053_, 0);
v_state_2055_ = lean_ctor_get(v_s_2053_, 1);
v_isSharedCheck_2063_ = !lean_is_exclusive(v_s_2053_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2057_ = v_s_2053_;
v_isShared_2058_ = v_isSharedCheck_2063_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_state_2055_);
lean_inc(v_importedEntries_2054_);
lean_dec(v_s_2053_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2063_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v_state_2059_; lean_object* v___x_2061_; 
v_state_2059_ = lean_apply_2(v_addEntryFn_2051_, v_state_2055_, v___x_2052_);
if (v_isShared_2058_ == 0)
{
lean_ctor_set(v___x_2057_, 1, v_state_2059_);
v___x_2061_ = v___x_2057_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_importedEntries_2054_);
lean_ctor_set(v_reuseFailAlloc_2062_, 1, v_state_2059_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary(lean_object* v_env_2064_, lean_object* v_fid_2065_, lean_object* v_v_2066_){
_start:
{
lean_object* v___x_2067_; lean_object* v_toEnvExtension_2068_; lean_object* v_addEntryFn_2069_; lean_object* v_asyncMode_2070_; uint8_t v_logWrites_2071_; lean_object* v___x_2072_; lean_object* v___f_2073_; lean_object* v___x_2074_; uint8_t v___x_2075_; 
v___x_2067_ = l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt;
v_toEnvExtension_2068_ = lean_ctor_get(v___x_2067_, 0);
v_addEntryFn_2069_ = lean_ctor_get(v___x_2067_, 3);
v_asyncMode_2070_ = lean_ctor_get(v_toEnvExtension_2068_, 2);
v_logWrites_2071_ = lean_ctor_get_uint8(v_toEnvExtension_2068_, sizeof(void*)*6);
v___x_2072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2072_, 0, v_fid_2065_);
lean_ctor_set(v___x_2072_, 1, v_v_2066_);
lean_inc(v_addEntryFn_2069_);
v___f_2073_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary___lam__0), 3, 2);
lean_closure_set(v___f_2073_, 0, v_addEntryFn_2069_);
lean_closure_set(v___f_2073_, 1, v___x_2072_);
v___x_2074_ = lean_box(0);
v___x_2075_ = 1;
if (v_logWrites_2071_ == 0)
{
lean_object* v___x_2076_; 
lean_inc_ref(v_toEnvExtension_2068_);
v___x_2076_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2068_, v_env_2064_, v___f_2073_, v_asyncMode_2070_, v___x_2074_, v___x_2075_);
return v___x_2076_;
}
else
{
lean_object* v___x_2077_; lean_object* v___x_2078_; 
lean_inc_ref_n(v_toEnvExtension_2068_, 2);
v___x_2077_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_2068_, v_env_2064_);
lean_dec_ref(v_env_2064_);
v___x_2078_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_2068_, v___x_2077_, v___f_2073_, v_asyncMode_2070_, v___x_2074_, v___x_2075_);
return v___x_2078_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_2079_, lean_object* v_vals_2080_, lean_object* v_i_2081_, lean_object* v_k_2082_){
_start:
{
lean_object* v___x_2083_; uint8_t v___x_2084_; 
v___x_2083_ = lean_array_get_size(v_keys_2079_);
v___x_2084_ = lean_nat_dec_lt(v_i_2081_, v___x_2083_);
if (v___x_2084_ == 0)
{
lean_object* v___x_2085_; 
lean_dec(v_i_2081_);
v___x_2085_ = lean_box(0);
return v___x_2085_;
}
else
{
lean_object* v_k_x27_2086_; uint8_t v___x_2087_; 
v_k_x27_2086_ = lean_array_fget_borrowed(v_keys_2079_, v_i_2081_);
v___x_2087_ = lean_name_eq(v_k_2082_, v_k_x27_2086_);
if (v___x_2087_ == 0)
{
lean_object* v___x_2088_; lean_object* v___x_2089_; 
v___x_2088_ = lean_unsigned_to_nat(1u);
v___x_2089_ = lean_nat_add(v_i_2081_, v___x_2088_);
lean_dec(v_i_2081_);
v_i_2081_ = v___x_2089_;
goto _start;
}
else
{
lean_object* v___x_2091_; lean_object* v___x_2092_; 
v___x_2091_ = lean_array_fget_borrowed(v_vals_2080_, v_i_2081_);
lean_dec(v_i_2081_);
lean_inc(v___x_2091_);
v___x_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2091_);
return v___x_2092_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_2093_, lean_object* v_vals_2094_, lean_object* v_i_2095_, lean_object* v_k_2096_){
_start:
{
lean_object* v_res_2097_; 
v_res_2097_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg(v_keys_2093_, v_vals_2094_, v_i_2095_, v_k_2096_);
lean_dec(v_k_2096_);
lean_dec_ref(v_vals_2094_);
lean_dec_ref(v_keys_2093_);
return v_res_2097_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg(lean_object* v_x_2098_, size_t v_x_2099_, lean_object* v_x_2100_){
_start:
{
if (lean_obj_tag(v_x_2098_) == 0)
{
lean_object* v_es_2101_; lean_object* v___x_2102_; size_t v___x_2103_; size_t v___x_2104_; lean_object* v_j_2105_; lean_object* v___x_2106_; 
v_es_2101_ = lean_ctor_get(v_x_2098_, 0);
v___x_2102_ = lean_box(2);
v___x_2103_ = ((size_t)31ULL);
v___x_2104_ = lean_usize_land(v_x_2099_, v___x_2103_);
v_j_2105_ = lean_usize_to_nat(v___x_2104_);
v___x_2106_ = lean_array_get_borrowed(v___x_2102_, v_es_2101_, v_j_2105_);
lean_dec(v_j_2105_);
switch(lean_obj_tag(v___x_2106_))
{
case 0:
{
lean_object* v_key_2107_; lean_object* v_val_2108_; uint8_t v___x_2109_; 
v_key_2107_ = lean_ctor_get(v___x_2106_, 0);
v_val_2108_ = lean_ctor_get(v___x_2106_, 1);
v___x_2109_ = lean_name_eq(v_x_2100_, v_key_2107_);
if (v___x_2109_ == 0)
{
lean_object* v___x_2110_; 
v___x_2110_ = lean_box(0);
return v___x_2110_;
}
else
{
lean_object* v___x_2111_; 
lean_inc(v_val_2108_);
v___x_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2111_, 0, v_val_2108_);
return v___x_2111_;
}
}
case 1:
{
lean_object* v_node_2112_; size_t v___x_2113_; size_t v___x_2114_; 
v_node_2112_ = lean_ctor_get(v___x_2106_, 0);
v___x_2113_ = ((size_t)5ULL);
v___x_2114_ = lean_usize_shift_right(v_x_2099_, v___x_2113_);
v_x_2098_ = v_node_2112_;
v_x_2099_ = v___x_2114_;
goto _start;
}
default: 
{
lean_object* v___x_2116_; 
v___x_2116_ = lean_box(0);
return v___x_2116_;
}
}
}
else
{
lean_object* v_ks_2117_; lean_object* v_vs_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; 
v_ks_2117_ = lean_ctor_get(v_x_2098_, 0);
v_vs_2118_ = lean_ctor_get(v_x_2098_, 1);
v___x_2119_ = lean_unsigned_to_nat(0u);
v___x_2120_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg(v_ks_2117_, v_vs_2118_, v___x_2119_, v_x_2100_);
return v___x_2120_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_2121_, lean_object* v_x_2122_, lean_object* v_x_2123_){
_start:
{
size_t v_x_412__boxed_2124_; lean_object* v_res_2125_; 
v_x_412__boxed_2124_ = lean_unbox_usize(v_x_2122_);
lean_dec(v_x_2122_);
v_res_2125_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg(v_x_2121_, v_x_412__boxed_2124_, v_x_2123_);
lean_dec(v_x_2123_);
lean_dec_ref(v_x_2121_);
return v_res_2125_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg(lean_object* v_x_2126_, lean_object* v_x_2127_){
_start:
{
uint64_t v___y_2129_; 
if (lean_obj_tag(v_x_2127_) == 0)
{
uint64_t v___x_2132_; 
v___x_2132_ = 1723ULL;
v___y_2129_ = v___x_2132_;
goto v___jp_2128_;
}
else
{
uint64_t v_hash_2133_; 
v_hash_2133_ = lean_ctor_get_uint64(v_x_2127_, sizeof(void*)*2);
v___y_2129_ = v_hash_2133_;
goto v___jp_2128_;
}
v___jp_2128_:
{
size_t v___x_2130_; lean_object* v___x_2131_; 
v___x_2130_ = lean_uint64_to_usize(v___y_2129_);
v___x_2131_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg(v_x_2126_, v___x_2130_, v_x_2127_);
return v___x_2131_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg___boxed(lean_object* v_x_2134_, lean_object* v_x_2135_){
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg(v_x_2134_, v_x_2135_);
lean_dec(v_x_2135_);
lean_dec_ref(v_x_2134_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(lean_object* v_as_2137_, lean_object* v_k_2138_, lean_object* v_x_2139_, lean_object* v_x_2140_){
_start:
{
lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v_m_2143_; lean_object* v_a_2144_; uint8_t v___x_2145_; 
v___x_2141_ = lean_nat_add(v_x_2139_, v_x_2140_);
v___x_2142_ = lean_unsigned_to_nat(1u);
v_m_2143_ = lean_nat_shiftr(v___x_2141_, v___x_2142_);
lean_dec(v___x_2141_);
v_a_2144_ = lean_array_fget_borrowed(v_as_2137_, v_m_2143_);
v___x_2145_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(v_a_2144_, v_k_2138_);
if (v___x_2145_ == 0)
{
uint8_t v___x_2146_; 
lean_dec(v_x_2140_);
v___x_2146_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__spec__2___redArg___lam__0(v_k_2138_, v_a_2144_);
if (v___x_2146_ == 0)
{
lean_object* v___x_2147_; 
lean_dec(v_m_2143_);
lean_dec(v_x_2139_);
lean_inc(v_a_2144_);
v___x_2147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2147_, 0, v_a_2144_);
return v___x_2147_;
}
else
{
lean_object* v___x_2148_; uint8_t v___x_2149_; 
v___x_2148_ = lean_unsigned_to_nat(0u);
v___x_2149_ = lean_nat_dec_eq(v_m_2143_, v___x_2148_);
if (v___x_2149_ == 0)
{
lean_object* v___x_2150_; uint8_t v___x_2151_; 
v___x_2150_ = lean_nat_sub(v_m_2143_, v___x_2142_);
lean_dec(v_m_2143_);
v___x_2151_ = lean_nat_dec_lt(v___x_2150_, v_x_2139_);
if (v___x_2151_ == 0)
{
v_x_2140_ = v___x_2150_;
goto _start;
}
else
{
lean_object* v___x_2153_; 
lean_dec(v___x_2150_);
lean_dec(v_x_2139_);
v___x_2153_ = lean_box(0);
return v___x_2153_;
}
}
else
{
lean_object* v___x_2154_; 
lean_dec(v_m_2143_);
lean_dec(v_x_2139_);
v___x_2154_ = lean_box(0);
return v___x_2154_;
}
}
}
else
{
lean_object* v___x_2155_; uint8_t v___x_2156_; 
lean_dec(v_x_2139_);
v___x_2155_ = lean_nat_add(v_m_2143_, v___x_2142_);
lean_dec(v_m_2143_);
v___x_2156_ = lean_nat_dec_le(v___x_2155_, v_x_2140_);
if (v___x_2156_ == 0)
{
lean_object* v___x_2157_; 
lean_dec(v___x_2155_);
lean_dec(v_x_2140_);
v___x_2157_ = lean_box(0);
return v___x_2157_;
}
else
{
v_x_2139_ = v___x_2155_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg___boxed(lean_object* v_as_2159_, lean_object* v_k_2160_, lean_object* v_x_2161_, lean_object* v_x_2162_){
_start:
{
lean_object* v_res_2163_; 
v_res_2163_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(v_as_2159_, v_k_2160_, v_x_2161_, v_x_2162_);
lean_dec_ref(v_k_2160_);
lean_dec_ref(v_as_2159_);
return v_res_2163_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__0(void){
_start:
{
lean_object* v___x_2164_; 
v___x_2164_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v___x_2164_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__1(void){
_start:
{
lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
v___x_2165_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__0, &l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__0);
v___x_2166_ = lean_box(0);
v___x_2167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2166_);
lean_ctor_set(v___x_2167_, 1, v___x_2165_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f(lean_object* v_env_2168_, lean_object* v_fid_2169_){
_start:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2181_; 
v___x_2170_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__1, &l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f___closed__1);
v___x_2171_ = l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt;
v___x_2181_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2168_, v_fid_2169_);
if (lean_obj_tag(v___x_2181_) == 0)
{
goto v___jp_2172_;
}
else
{
lean_object* v_val_2182_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; uint8_t v___x_2208_; 
v_val_2182_ = lean_ctor_get(v___x_2181_, 0);
lean_inc(v_val_2182_);
lean_dec_ref_known(v___x_2181_, 1);
v___x_2205_ = l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(v___x_2170_, v___x_2171_, v_env_2168_, v_val_2182_);
v___x_2206_ = lean_unsigned_to_nat(0u);
v___x_2207_ = lean_array_get_size(v___x_2205_);
v___x_2208_ = lean_nat_dec_lt(v___x_2206_, v___x_2207_);
if (v___x_2208_ == 0)
{
lean_dec_ref(v___x_2205_);
goto v___jp_2183_;
}
else
{
lean_object* v___x_2209_; lean_object* v___x_2210_; uint8_t v___x_2211_; 
v___x_2209_ = lean_unsigned_to_nat(1u);
v___x_2210_ = lean_nat_sub(v___x_2207_, v___x_2209_);
v___x_2211_ = lean_nat_dec_le(v___x_2206_, v___x_2210_);
if (v___x_2211_ == 0)
{
lean_dec(v___x_2210_);
lean_dec_ref(v___x_2205_);
goto v___jp_2183_;
}
else
{
lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; 
v___x_2212_ = lean_box(0);
lean_inc(v_fid_2169_);
v___x_2213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2213_, 0, v_fid_2169_);
lean_ctor_set(v___x_2213_, 1, v___x_2212_);
v___x_2214_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(v___x_2205_, v___x_2213_, v___x_2206_, v___x_2210_);
lean_dec_ref_known(v___x_2213_, 2);
lean_dec_ref(v___x_2205_);
if (lean_obj_tag(v___x_2214_) == 0)
{
goto v___jp_2183_;
}
else
{
lean_object* v_val_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2224_; 
lean_dec(v_val_2182_);
lean_dec_ref(v_env_2168_);
v_val_2215_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2224_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2224_ == 0)
{
v___x_2217_ = v___x_2214_;
v_isShared_2218_ = v_isSharedCheck_2224_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_val_2215_);
lean_dec(v___x_2214_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2224_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v_snd_2219_; lean_object* v___x_2221_; 
v_snd_2219_ = lean_ctor_get(v_val_2215_, 1);
lean_inc(v_snd_2219_);
lean_dec(v_val_2215_);
if (v_isShared_2218_ == 0)
{
lean_ctor_set(v___x_2217_, 0, v_snd_2219_);
v___x_2221_ = v___x_2217_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v_snd_2219_);
v___x_2221_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
lean_object* v___x_2222_; 
v___x_2222_ = lean_usage_note_resolved(v_fid_2169_, v___x_2221_);
lean_dec(v_fid_2169_);
return v___x_2222_;
}
}
}
}
}
v___jp_2183_:
{
uint8_t v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; uint8_t v___x_2188_; 
v___x_2184_ = 0;
v___x_2185_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_2170_, v___x_2171_, v_env_2168_, v_val_2182_, v___x_2184_);
lean_dec(v_val_2182_);
v___x_2186_ = lean_unsigned_to_nat(0u);
v___x_2187_ = lean_array_get_size(v___x_2185_);
v___x_2188_ = lean_nat_dec_lt(v___x_2186_, v___x_2187_);
if (v___x_2188_ == 0)
{
lean_dec_ref(v___x_2185_);
goto v___jp_2172_;
}
else
{
lean_object* v___x_2189_; lean_object* v___x_2190_; uint8_t v___x_2191_; 
v___x_2189_ = lean_unsigned_to_nat(1u);
v___x_2190_ = lean_nat_sub(v___x_2187_, v___x_2189_);
v___x_2191_ = lean_nat_dec_le(v___x_2186_, v___x_2190_);
if (v___x_2191_ == 0)
{
lean_dec(v___x_2190_);
lean_dec_ref(v___x_2185_);
goto v___jp_2172_;
}
else
{
lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; 
v___x_2192_ = lean_box(0);
lean_inc(v_fid_2169_);
v___x_2193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2193_, 0, v_fid_2169_);
lean_ctor_set(v___x_2193_, 1, v___x_2192_);
v___x_2194_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(v___x_2185_, v___x_2193_, v___x_2186_, v___x_2190_);
lean_dec_ref_known(v___x_2193_, 2);
lean_dec_ref(v___x_2185_);
if (lean_obj_tag(v___x_2194_) == 0)
{
goto v___jp_2172_;
}
else
{
lean_object* v_val_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2204_; 
lean_dec_ref(v_env_2168_);
v_val_2195_ = lean_ctor_get(v___x_2194_, 0);
v_isSharedCheck_2204_ = !lean_is_exclusive(v___x_2194_);
if (v_isSharedCheck_2204_ == 0)
{
v___x_2197_ = v___x_2194_;
v_isShared_2198_ = v_isSharedCheck_2204_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_val_2195_);
lean_dec(v___x_2194_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2204_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v_snd_2199_; lean_object* v___x_2201_; 
v_snd_2199_ = lean_ctor_get(v_val_2195_, 1);
lean_inc(v_snd_2199_);
lean_dec(v_val_2195_);
if (v_isShared_2198_ == 0)
{
lean_ctor_set(v___x_2197_, 0, v_snd_2199_);
v___x_2201_ = v___x_2197_;
goto v_reusejp_2200_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v_snd_2199_);
v___x_2201_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2200_;
}
v_reusejp_2200_:
{
lean_object* v___x_2202_; 
v___x_2202_ = lean_usage_note_resolved(v_fid_2169_, v___x_2201_);
lean_dec(v_fid_2169_);
return v___x_2202_;
}
}
}
}
}
}
}
v___jp_2172_:
{
lean_object* v_toEnvExtension_2173_; lean_object* v_asyncMode_2174_; lean_object* v___x_2175_; uint8_t v___x_2176_; lean_object* v___x_2177_; lean_object* v_snd_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v_toEnvExtension_2173_ = lean_ctor_get(v___x_2171_, 0);
v_asyncMode_2174_ = lean_ctor_get(v_toEnvExtension_2173_, 2);
v___x_2175_ = lean_box(0);
v___x_2176_ = 0;
v___x_2177_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2170_, v___x_2171_, v_env_2168_, v_asyncMode_2174_, v___x_2175_, v___x_2176_);
v_snd_2178_ = lean_ctor_get(v___x_2177_, 1);
lean_inc(v_snd_2178_);
lean_dec(v___x_2177_);
v___x_2179_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg(v_snd_2178_, v_fid_2169_);
lean_dec(v_snd_2178_);
v___x_2180_ = lean_usage_note_resolved(v_fid_2169_, v___x_2179_);
lean_dec(v_fid_2169_);
return v___x_2180_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0(lean_object* v_00_u03b2_2225_, lean_object* v_x_2226_, lean_object* v_x_2227_){
_start:
{
lean_object* v___x_2228_; 
v___x_2228_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___redArg(v_x_2226_, v_x_2227_);
return v___x_2228_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0___boxed(lean_object* v_00_u03b2_2229_, lean_object* v_x_2230_, lean_object* v_x_2231_){
_start:
{
lean_object* v_res_2232_; 
v_res_2232_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0(v_00_u03b2_2229_, v_x_2230_, v_x_2231_);
lean_dec(v_x_2231_);
lean_dec_ref(v_x_2230_);
return v_res_2232_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1(lean_object* v_as_2233_, lean_object* v_k_2234_, lean_object* v_x_2235_, lean_object* v_x_2236_, lean_object* v_x_2237_){
_start:
{
lean_object* v___x_2238_; 
v___x_2238_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___redArg(v_as_2233_, v_k_2234_, v_x_2235_, v_x_2236_);
return v___x_2238_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1___boxed(lean_object* v_as_2239_, lean_object* v_k_2240_, lean_object* v_x_2241_, lean_object* v_x_2242_, lean_object* v_x_2243_){
_start:
{
lean_object* v_res_2244_; 
v_res_2244_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__1(v_as_2239_, v_k_2240_, v_x_2241_, v_x_2242_, v_x_2243_);
lean_dec_ref(v_k_2240_);
lean_dec_ref(v_as_2239_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0(lean_object* v_00_u03b2_2245_, lean_object* v_x_2246_, size_t v_x_2247_, lean_object* v_x_2248_){
_start:
{
lean_object* v___x_2249_; 
v___x_2249_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___redArg(v_x_2246_, v_x_2247_, v_x_2248_);
return v___x_2249_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2250_, lean_object* v_x_2251_, lean_object* v_x_2252_, lean_object* v_x_2253_){
_start:
{
size_t v_x_644__boxed_2254_; lean_object* v_res_2255_; 
v_x_644__boxed_2254_ = lean_unbox_usize(v_x_2252_);
lean_dec(v_x_2252_);
v_res_2255_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0(v_00_u03b2_2250_, v_x_2251_, v_x_644__boxed_2254_, v_x_2253_);
lean_dec(v_x_2253_);
lean_dec_ref(v_x_2251_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2256_, lean_object* v_keys_2257_, lean_object* v_vals_2258_, lean_object* v_heq_2259_, lean_object* v_i_2260_, lean_object* v_k_2261_){
_start:
{
lean_object* v___x_2262_; 
v___x_2262_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___redArg(v_keys_2257_, v_vals_2258_, v_i_2260_, v_k_2261_);
return v___x_2262_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2263_, lean_object* v_keys_2264_, lean_object* v_vals_2265_, lean_object* v_heq_2266_, lean_object* v_i_2267_, lean_object* v_k_2268_){
_start:
{
lean_object* v_res_2269_; 
v_res_2269_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f_spec__0_spec__0_spec__1(v_00_u03b2_2263_, v_keys_2264_, v_vals_2265_, v_heq_2266_, v_i_2267_, v_k_2268_);
lean_dec(v_k_2268_);
lean_dec_ref(v_vals_2265_);
lean_dec_ref(v_keys_2264_);
return v_res_2269_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0(void){
_start:
{
lean_object* v___x_2270_; 
v___x_2270_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg(lean_object* v_a_2271_, lean_object* v_a_2272_){
_start:
{
lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v_assignments_2276_; lean_object* v_currFnIdx_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
v___x_2274_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0, &l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0);
v___x_2275_ = lean_st_ref_get(v_a_2272_);
v_assignments_2276_ = lean_ctor_get(v___x_2275_, 0);
lean_inc_ref(v_assignments_2276_);
lean_dec(v___x_2275_);
v_currFnIdx_2277_ = lean_ctor_get(v_a_2271_, 1);
v___x_2278_ = lean_array_get(v___x_2274_, v_assignments_2276_, v_currFnIdx_2277_);
lean_dec_ref(v_assignments_2276_);
v___x_2279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2279_, 0, v___x_2278_);
return v___x_2279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___boxed(lean_object* v_a_2280_, lean_object* v_a_2281_, lean_object* v_a_2282_){
_start:
{
lean_object* v_res_2283_; 
v_res_2283_ = l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg(v_a_2280_, v_a_2281_);
lean_dec(v_a_2281_);
lean_dec_ref(v_a_2280_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment(lean_object* v_a_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_){
_start:
{
lean_object* v___x_2291_; 
v___x_2291_ = l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg(v_a_2284_, v_a_2285_);
return v___x_2291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___boxed(lean_object* v_a_2292_, lean_object* v_a_2293_, lean_object* v_a_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_, lean_object* v_a_2297_, lean_object* v_a_2298_){
_start:
{
lean_object* v_res_2299_; 
v_res_2299_ = l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment(v_a_2292_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_, v_a_2297_);
lean_dec(v_a_2297_);
lean_dec_ref(v_a_2296_);
lean_dec(v_a_2295_);
lean_dec_ref(v_a_2294_);
lean_dec(v_a_2293_);
lean_dec_ref(v_a_2292_);
return v_res_2299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(lean_object* v_funIdx_2300_, lean_object* v_a_2301_){
_start:
{
lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v_funVals_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; 
v___x_2303_ = lean_box(0);
v___x_2304_ = lean_st_ref_get(v_a_2301_);
v_funVals_2305_ = lean_ctor_get(v___x_2304_, 1);
lean_inc_ref(v_funVals_2305_);
lean_dec(v___x_2304_);
v___x_2306_ = lean_array_get(v___x_2303_, v_funVals_2305_, v_funIdx_2300_);
lean_dec_ref(v_funVals_2305_);
v___x_2307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2306_);
return v___x_2307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg___boxed(lean_object* v_funIdx_2308_, lean_object* v_a_2309_, lean_object* v_a_2310_){
_start:
{
lean_object* v_res_2311_; 
v_res_2311_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(v_funIdx_2308_, v_a_2309_);
lean_dec(v_a_2309_);
lean_dec(v_funIdx_2308_);
return v_res_2311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal(lean_object* v_funIdx_2312_, lean_object* v_a_2313_, lean_object* v_a_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_){
_start:
{
lean_object* v___x_2320_; 
v___x_2320_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(v_funIdx_2312_, v_a_2314_);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___boxed(lean_object* v_funIdx_2321_, lean_object* v_a_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_){
_start:
{
lean_object* v_res_2329_; 
v_res_2329_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal(v_funIdx_2321_, v_a_2322_, v_a_2323_, v_a_2324_, v_a_2325_, v_a_2326_, v_a_2327_);
lean_dec(v_a_2327_);
lean_dec_ref(v_a_2326_);
lean_dec(v_a_2325_);
lean_dec_ref(v_a_2324_);
lean_dec(v_a_2323_);
lean_dec_ref(v_a_2322_);
lean_dec(v_funIdx_2321_);
return v_res_2329_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f_spec__0(lean_object* v_declName_2330_, lean_object* v_as_2331_, lean_object* v_j_2332_){
_start:
{
lean_object* v___x_2333_; uint8_t v___x_2334_; 
v___x_2333_ = lean_array_get_size(v_as_2331_);
v___x_2334_ = lean_nat_dec_lt(v_j_2332_, v___x_2333_);
if (v___x_2334_ == 0)
{
lean_object* v___x_2335_; 
lean_dec(v_j_2332_);
v___x_2335_ = lean_box(0);
return v___x_2335_;
}
else
{
lean_object* v___x_2336_; lean_object* v_toSignature_2337_; lean_object* v_name_2338_; uint8_t v___x_2339_; 
v___x_2336_ = lean_array_fget_borrowed(v_as_2331_, v_j_2332_);
v_toSignature_2337_ = lean_ctor_get(v___x_2336_, 0);
v_name_2338_ = lean_ctor_get(v_toSignature_2337_, 0);
v___x_2339_ = lean_name_eq(v_name_2338_, v_declName_2330_);
if (v___x_2339_ == 0)
{
lean_object* v___x_2340_; lean_object* v___x_2341_; 
v___x_2340_ = lean_unsigned_to_nat(1u);
v___x_2341_ = lean_nat_add(v_j_2332_, v___x_2340_);
lean_dec(v_j_2332_);
v_j_2332_ = v___x_2341_;
goto _start;
}
else
{
lean_object* v___x_2343_; 
v___x_2343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2343_, 0, v_j_2332_);
return v___x_2343_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f_spec__0___boxed(lean_object* v_declName_2344_, lean_object* v_as_2345_, lean_object* v_j_2346_){
_start:
{
lean_object* v_res_2347_; 
v_res_2347_ = l_Array_findIdx_x3f_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f_spec__0(v_declName_2344_, v_as_2345_, v_j_2346_);
lean_dec_ref(v_as_2345_);
lean_dec(v_declName_2344_);
return v_res_2347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg(lean_object* v_declName_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_){
_start:
{
lean_object* v_decls_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; 
v_decls_2352_ = lean_ctor_get(v_a_2349_, 0);
v___x_2353_ = lean_unsigned_to_nat(0u);
v___x_2354_ = l_Array_findIdx_x3f_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f_spec__0(v_declName_2348_, v_decls_2352_, v___x_2353_);
if (lean_obj_tag(v___x_2354_) == 0)
{
lean_object* v___x_2355_; lean_object* v___x_2356_; 
v___x_2355_ = lean_box(0);
v___x_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2355_);
return v___x_2356_;
}
else
{
lean_object* v_val_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2373_; 
v_val_2357_ = lean_ctor_get(v___x_2354_, 0);
v_isSharedCheck_2373_ = !lean_is_exclusive(v___x_2354_);
if (v_isSharedCheck_2373_ == 0)
{
v___x_2359_ = v___x_2354_;
v_isShared_2360_ = v_isSharedCheck_2373_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_val_2357_);
lean_dec(v___x_2354_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2373_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2361_; lean_object* v_a_2362_; lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2372_; 
v___x_2361_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(v_val_2357_, v_a_2350_);
lean_dec(v_val_2357_);
v_a_2362_ = lean_ctor_get(v___x_2361_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2364_ = v___x_2361_;
v_isShared_2365_ = v_isSharedCheck_2372_;
goto v_resetjp_2363_;
}
else
{
lean_inc(v_a_2362_);
lean_dec(v___x_2361_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2372_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
lean_object* v___x_2367_; 
if (v_isShared_2360_ == 0)
{
lean_ctor_set(v___x_2359_, 0, v_a_2362_);
v___x_2367_ = v___x_2359_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_a_2362_);
v___x_2367_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
lean_object* v___x_2369_; 
if (v_isShared_2365_ == 0)
{
lean_ctor_set(v___x_2364_, 0, v___x_2367_);
v___x_2369_ = v___x_2364_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v___x_2367_);
v___x_2369_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
return v___x_2369_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg___boxed(lean_object* v_declName_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_){
_start:
{
lean_object* v_res_2378_; 
v_res_2378_ = l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg(v_declName_2374_, v_a_2375_, v_a_2376_);
lean_dec(v_a_2376_);
lean_dec_ref(v_a_2375_);
lean_dec(v_declName_2374_);
return v_res_2378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f(lean_object* v_declName_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_, lean_object* v_a_2382_, lean_object* v_a_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_){
_start:
{
lean_object* v___x_2387_; 
v___x_2387_ = l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg(v_declName_2379_, v_a_2380_, v_a_2381_);
return v___x_2387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___boxed(lean_object* v_declName_2388_, lean_object* v_a_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_){
_start:
{
lean_object* v_res_2396_; 
v_res_2396_ = l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f(v_declName_2388_, v_a_2389_, v_a_2390_, v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_);
lean_dec(v_a_2394_);
lean_dec_ref(v_a_2393_);
lean_dec(v_a_2392_);
lean_dec_ref(v_a_2391_);
lean_dec(v_a_2390_);
lean_dec_ref(v_a_2389_);
lean_dec(v_declName_2388_);
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(lean_object* v_f_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_){
_start:
{
lean_object* v_currFnIdx_2401_; lean_object* v___x_2402_; lean_object* v_assignments_2403_; lean_object* v_funVals_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2422_; 
v_currFnIdx_2401_ = lean_ctor_get(v_a_2398_, 1);
v___x_2402_ = lean_st_ref_take(v_a_2399_);
v_assignments_2403_ = lean_ctor_get(v___x_2402_, 0);
v_funVals_2404_ = lean_ctor_get(v___x_2402_, 1);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2406_ = v___x_2402_;
v_isShared_2407_ = v_isSharedCheck_2422_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_funVals_2404_);
lean_inc(v_assignments_2403_);
lean_dec(v___x_2402_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2422_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2408_; lean_object* v___y_2410_; lean_object* v___x_2416_; uint8_t v___x_2417_; 
v___x_2408_ = lean_box(0);
v___x_2416_ = lean_array_get_size(v_assignments_2403_);
v___x_2417_ = lean_nat_dec_lt(v_currFnIdx_2401_, v___x_2416_);
if (v___x_2417_ == 0)
{
lean_dec_ref(v_f_2397_);
v___y_2410_ = v_assignments_2403_;
goto v___jp_2409_;
}
else
{
lean_object* v_v_2418_; lean_object* v_xs_x27_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
v_v_2418_ = lean_array_fget(v_assignments_2403_, v_currFnIdx_2401_);
v_xs_x27_2419_ = lean_array_fset(v_assignments_2403_, v_currFnIdx_2401_, v___x_2408_);
v___x_2420_ = lean_apply_1(v_f_2397_, v_v_2418_);
v___x_2421_ = lean_array_fset(v_xs_x27_2419_, v_currFnIdx_2401_, v___x_2420_);
v___y_2410_ = v___x_2421_;
goto v___jp_2409_;
}
v___jp_2409_:
{
lean_object* v___x_2412_; 
if (v_isShared_2407_ == 0)
{
lean_ctor_set(v___x_2406_, 0, v___y_2410_);
v___x_2412_ = v___x_2406_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v___y_2410_);
lean_ctor_set(v_reuseFailAlloc_2415_, 1, v_funVals_2404_);
v___x_2412_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
lean_object* v___x_2413_; lean_object* v___x_2414_; 
v___x_2413_ = lean_st_ref_put(v_a_2399_, v___x_2412_);
v___x_2414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2408_);
return v___x_2414_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg___boxed(lean_object* v_f_2423_, lean_object* v_a_2424_, lean_object* v_a_2425_, lean_object* v_a_2426_){
_start:
{
lean_object* v_res_2427_; 
v_res_2427_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v_f_2423_, v_a_2424_, v_a_2425_);
lean_dec(v_a_2425_);
lean_dec_ref(v_a_2424_);
return v_res_2427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment(lean_object* v_f_2428_, lean_object* v_a_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_, lean_object* v_a_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_){
_start:
{
lean_object* v___x_2436_; 
v___x_2436_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v_f_2428_, v_a_2429_, v_a_2430_);
return v___x_2436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___boxed(lean_object* v_f_2437_, lean_object* v_a_2438_, lean_object* v_a_2439_, lean_object* v_a_2440_, lean_object* v_a_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_, lean_object* v_a_2444_){
_start:
{
lean_object* v_res_2445_; 
v_res_2445_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment(v_f_2437_, v_a_2438_, v_a_2439_, v_a_2440_, v_a_2441_, v_a_2442_, v_a_2443_);
lean_dec(v_a_2443_);
lean_dec_ref(v_a_2442_);
lean_dec(v_a_2441_);
lean_dec_ref(v_a_2440_);
lean_dec(v_a_2439_);
lean_dec_ref(v_a_2438_);
return v_res_2445_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg(lean_object* v_a_2446_, lean_object* v_fallback_2447_, lean_object* v_x_2448_){
_start:
{
if (lean_obj_tag(v_x_2448_) == 0)
{
lean_inc(v_fallback_2447_);
return v_fallback_2447_;
}
else
{
lean_object* v_key_2449_; lean_object* v_value_2450_; lean_object* v_tail_2451_; uint8_t v___x_2452_; 
v_key_2449_ = lean_ctor_get(v_x_2448_, 0);
v_value_2450_ = lean_ctor_get(v_x_2448_, 1);
v_tail_2451_ = lean_ctor_get(v_x_2448_, 2);
v___x_2452_ = l_Lean_instBEqFVarId_beq(v_key_2449_, v_a_2446_);
if (v___x_2452_ == 0)
{
v_x_2448_ = v_tail_2451_;
goto _start;
}
else
{
lean_inc(v_value_2450_);
return v_value_2450_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg___boxed(lean_object* v_a_2454_, lean_object* v_fallback_2455_, lean_object* v_x_2456_){
_start:
{
lean_object* v_res_2457_; 
v_res_2457_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg(v_a_2454_, v_fallback_2455_, v_x_2456_);
lean_dec(v_x_2456_);
lean_dec(v_fallback_2455_);
lean_dec(v_a_2454_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(lean_object* v_m_2458_, lean_object* v_a_2459_, lean_object* v_fallback_2460_){
_start:
{
lean_object* v_buckets_2461_; lean_object* v___x_2462_; uint64_t v___x_2463_; uint64_t v___x_2464_; uint64_t v___x_2465_; uint64_t v_fold_2466_; uint64_t v___x_2467_; uint64_t v___x_2468_; uint64_t v___x_2469_; size_t v___x_2470_; size_t v___x_2471_; size_t v___x_2472_; size_t v___x_2473_; size_t v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; 
v_buckets_2461_ = lean_ctor_get(v_m_2458_, 1);
v___x_2462_ = lean_array_get_size(v_buckets_2461_);
v___x_2463_ = l_Lean_instHashableFVarId_hash(v_a_2459_);
v___x_2464_ = 32ULL;
v___x_2465_ = lean_uint64_shift_right(v___x_2463_, v___x_2464_);
v_fold_2466_ = lean_uint64_xor(v___x_2463_, v___x_2465_);
v___x_2467_ = 16ULL;
v___x_2468_ = lean_uint64_shift_right(v_fold_2466_, v___x_2467_);
v___x_2469_ = lean_uint64_xor(v_fold_2466_, v___x_2468_);
v___x_2470_ = lean_uint64_to_usize(v___x_2469_);
v___x_2471_ = lean_usize_of_nat(v___x_2462_);
v___x_2472_ = ((size_t)1ULL);
v___x_2473_ = lean_usize_sub(v___x_2471_, v___x_2472_);
v___x_2474_ = lean_usize_land(v___x_2470_, v___x_2473_);
v___x_2475_ = lean_array_uget_borrowed(v_buckets_2461_, v___x_2474_);
v___x_2476_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg(v_a_2459_, v_fallback_2460_, v___x_2475_);
return v___x_2476_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg___boxed(lean_object* v_m_2477_, lean_object* v_a_2478_, lean_object* v_fallback_2479_){
_start:
{
lean_object* v_res_2480_; 
v_res_2480_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(v_m_2477_, v_a_2478_, v_fallback_2479_);
lean_dec(v_fallback_2479_);
lean_dec(v_a_2478_);
lean_dec_ref(v_m_2477_);
return v_res_2480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(lean_object* v_var_2481_, lean_object* v_a_2482_, lean_object* v_a_2483_){
_start:
{
lean_object* v___x_2485_; lean_object* v_a_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2495_; 
v___x_2485_ = l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg(v_a_2482_, v_a_2483_);
v_a_2486_ = lean_ctor_get(v___x_2485_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2485_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2488_ = v___x_2485_;
v_isShared_2489_ = v_isSharedCheck_2495_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_a_2486_);
lean_dec(v___x_2485_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2495_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2493_; 
v___x_2490_ = lean_box(0);
v___x_2491_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(v_a_2486_, v_var_2481_, v___x_2490_);
lean_dec(v_a_2486_);
if (v_isShared_2489_ == 0)
{
lean_ctor_set(v___x_2488_, 0, v___x_2491_);
v___x_2493_ = v___x_2488_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v___x_2491_);
v___x_2493_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
return v___x_2493_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg___boxed(lean_object* v_var_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_){
_start:
{
lean_object* v_res_2500_; 
v_res_2500_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_var_2496_, v_a_2497_, v_a_2498_);
lean_dec(v_a_2498_);
lean_dec_ref(v_a_2497_);
lean_dec(v_var_2496_);
return v_res_2500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue(lean_object* v_var_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_, lean_object* v_a_2504_, lean_object* v_a_2505_, lean_object* v_a_2506_, lean_object* v_a_2507_){
_start:
{
lean_object* v___x_2509_; 
v___x_2509_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_var_2501_, v_a_2502_, v_a_2503_);
return v___x_2509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___boxed(lean_object* v_var_2510_, lean_object* v_a_2511_, lean_object* v_a_2512_, lean_object* v_a_2513_, lean_object* v_a_2514_, lean_object* v_a_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue(v_var_2510_, v_a_2511_, v_a_2512_, v_a_2513_, v_a_2514_, v_a_2515_, v_a_2516_);
lean_dec(v_a_2516_);
lean_dec_ref(v_a_2515_);
lean_dec(v_a_2514_);
lean_dec_ref(v_a_2513_);
lean_dec(v_a_2512_);
lean_dec_ref(v_a_2511_);
lean_dec(v_var_2510_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0(lean_object* v_00_u03b2_2519_, lean_object* v_m_2520_, lean_object* v_a_2521_, lean_object* v_fallback_2522_){
_start:
{
lean_object* v___x_2523_; 
v___x_2523_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(v_m_2520_, v_a_2521_, v_fallback_2522_);
return v___x_2523_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___boxed(lean_object* v_00_u03b2_2524_, lean_object* v_m_2525_, lean_object* v_a_2526_, lean_object* v_fallback_2527_){
_start:
{
lean_object* v_res_2528_; 
v_res_2528_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0(v_00_u03b2_2524_, v_m_2525_, v_a_2526_, v_fallback_2527_);
lean_dec(v_fallback_2527_);
lean_dec(v_a_2526_);
lean_dec_ref(v_m_2525_);
return v_res_2528_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0(lean_object* v_00_u03b2_2529_, lean_object* v_a_2530_, lean_object* v_fallback_2531_, lean_object* v_x_2532_){
_start:
{
lean_object* v___x_2533_; 
v___x_2533_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___redArg(v_a_2530_, v_fallback_2531_, v_x_2532_);
return v___x_2533_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2534_, lean_object* v_a_2535_, lean_object* v_fallback_2536_, lean_object* v_x_2537_){
_start:
{
lean_object* v_res_2538_; 
v_res_2538_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0_spec__0(v_00_u03b2_2534_, v_a_2535_, v_fallback_2536_, v_x_2537_);
lean_dec(v_x_2537_);
lean_dec(v_fallback_2536_);
lean_dec(v_a_2535_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(lean_object* v_arg_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_){
_start:
{
if (lean_obj_tag(v_arg_2539_) == 1)
{
lean_object* v_fvarId_2543_; lean_object* v___x_2544_; 
v_fvarId_2543_ = lean_ctor_get(v_arg_2539_, 0);
v___x_2544_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_fvarId_2543_, v_a_2540_, v_a_2541_);
return v___x_2544_;
}
else
{
lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___x_2545_ = lean_box(1);
v___x_2546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2545_);
return v___x_2546_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg___boxed(lean_object* v_arg_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_){
_start:
{
lean_object* v_res_2551_; 
v_res_2551_ = l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(v_arg_2547_, v_a_2548_, v_a_2549_);
lean_dec(v_a_2549_);
lean_dec_ref(v_a_2548_);
lean_dec(v_arg_2547_);
return v_res_2551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue(lean_object* v_arg_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_){
_start:
{
lean_object* v___x_2560_; 
v___x_2560_ = l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(v_arg_2552_, v_a_2553_, v_a_2554_);
return v___x_2560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___boxed(lean_object* v_arg_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_, lean_object* v_a_2565_, lean_object* v_a_2566_, lean_object* v_a_2567_, lean_object* v_a_2568_){
_start:
{
lean_object* v_res_2569_; 
v_res_2569_ = l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue(v_arg_2561_, v_a_2562_, v_a_2563_, v_a_2564_, v_a_2565_, v_a_2566_, v_a_2567_);
lean_dec(v_a_2567_);
lean_dec_ref(v_a_2566_);
lean_dec(v_a_2565_);
lean_dec_ref(v_a_2564_);
lean_dec(v_a_2563_);
lean_dec_ref(v_a_2562_);
lean_dec(v_arg_2561_);
return v_res_2569_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2___redArg(lean_object* v_a_2570_, lean_object* v_b_2571_, lean_object* v_x_2572_){
_start:
{
if (lean_obj_tag(v_x_2572_) == 0)
{
lean_dec(v_b_2571_);
lean_dec(v_a_2570_);
return v_x_2572_;
}
else
{
lean_object* v_key_2573_; lean_object* v_value_2574_; lean_object* v_tail_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2587_; 
v_key_2573_ = lean_ctor_get(v_x_2572_, 0);
v_value_2574_ = lean_ctor_get(v_x_2572_, 1);
v_tail_2575_ = lean_ctor_get(v_x_2572_, 2);
v_isSharedCheck_2587_ = !lean_is_exclusive(v_x_2572_);
if (v_isSharedCheck_2587_ == 0)
{
v___x_2577_ = v_x_2572_;
v_isShared_2578_ = v_isSharedCheck_2587_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_tail_2575_);
lean_inc(v_value_2574_);
lean_inc(v_key_2573_);
lean_dec(v_x_2572_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2587_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
uint8_t v___x_2579_; 
v___x_2579_ = l_Lean_instBEqFVarId_beq(v_key_2573_, v_a_2570_);
if (v___x_2579_ == 0)
{
lean_object* v___x_2580_; lean_object* v___x_2582_; 
v___x_2580_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2___redArg(v_a_2570_, v_b_2571_, v_tail_2575_);
if (v_isShared_2578_ == 0)
{
lean_ctor_set(v___x_2577_, 2, v___x_2580_);
v___x_2582_ = v___x_2577_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v_key_2573_);
lean_ctor_set(v_reuseFailAlloc_2583_, 1, v_value_2574_);
lean_ctor_set(v_reuseFailAlloc_2583_, 2, v___x_2580_);
v___x_2582_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
return v___x_2582_;
}
}
else
{
lean_object* v___x_2585_; 
lean_dec(v_value_2574_);
lean_dec(v_key_2573_);
if (v_isShared_2578_ == 0)
{
lean_ctor_set(v___x_2577_, 1, v_b_2571_);
lean_ctor_set(v___x_2577_, 0, v_a_2570_);
v___x_2585_ = v___x_2577_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v_a_2570_);
lean_ctor_set(v_reuseFailAlloc_2586_, 1, v_b_2571_);
lean_ctor_set(v_reuseFailAlloc_2586_, 2, v_tail_2575_);
v___x_2585_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
return v___x_2585_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_2588_, lean_object* v_x_2589_){
_start:
{
if (lean_obj_tag(v_x_2589_) == 0)
{
return v_x_2588_;
}
else
{
lean_object* v_key_2590_; lean_object* v_value_2591_; lean_object* v_tail_2592_; lean_object* v___x_2594_; uint8_t v_isShared_2595_; uint8_t v_isSharedCheck_2615_; 
v_key_2590_ = lean_ctor_get(v_x_2589_, 0);
v_value_2591_ = lean_ctor_get(v_x_2589_, 1);
v_tail_2592_ = lean_ctor_get(v_x_2589_, 2);
v_isSharedCheck_2615_ = !lean_is_exclusive(v_x_2589_);
if (v_isSharedCheck_2615_ == 0)
{
v___x_2594_ = v_x_2589_;
v_isShared_2595_ = v_isSharedCheck_2615_;
goto v_resetjp_2593_;
}
else
{
lean_inc(v_tail_2592_);
lean_inc(v_value_2591_);
lean_inc(v_key_2590_);
lean_dec(v_x_2589_);
v___x_2594_ = lean_box(0);
v_isShared_2595_ = v_isSharedCheck_2615_;
goto v_resetjp_2593_;
}
v_resetjp_2593_:
{
lean_object* v___x_2596_; uint64_t v___x_2597_; uint64_t v___x_2598_; uint64_t v___x_2599_; uint64_t v_fold_2600_; uint64_t v___x_2601_; uint64_t v___x_2602_; uint64_t v___x_2603_; size_t v___x_2604_; size_t v___x_2605_; size_t v___x_2606_; size_t v___x_2607_; size_t v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2611_; 
v___x_2596_ = lean_array_get_size(v_x_2588_);
v___x_2597_ = l_Lean_instHashableFVarId_hash(v_key_2590_);
v___x_2598_ = 32ULL;
v___x_2599_ = lean_uint64_shift_right(v___x_2597_, v___x_2598_);
v_fold_2600_ = lean_uint64_xor(v___x_2597_, v___x_2599_);
v___x_2601_ = 16ULL;
v___x_2602_ = lean_uint64_shift_right(v_fold_2600_, v___x_2601_);
v___x_2603_ = lean_uint64_xor(v_fold_2600_, v___x_2602_);
v___x_2604_ = lean_uint64_to_usize(v___x_2603_);
v___x_2605_ = lean_usize_of_nat(v___x_2596_);
v___x_2606_ = ((size_t)1ULL);
v___x_2607_ = lean_usize_sub(v___x_2605_, v___x_2606_);
v___x_2608_ = lean_usize_land(v___x_2604_, v___x_2607_);
v___x_2609_ = lean_array_uget_borrowed(v_x_2588_, v___x_2608_);
lean_inc(v___x_2609_);
if (v_isShared_2595_ == 0)
{
lean_ctor_set(v___x_2594_, 2, v___x_2609_);
v___x_2611_ = v___x_2594_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v_key_2590_);
lean_ctor_set(v_reuseFailAlloc_2614_, 1, v_value_2591_);
lean_ctor_set(v_reuseFailAlloc_2614_, 2, v___x_2609_);
v___x_2611_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
lean_object* v___x_2612_; 
v___x_2612_ = lean_array_uset(v_x_2588_, v___x_2608_, v___x_2611_);
v_x_2588_ = v___x_2612_;
v_x_2589_ = v_tail_2592_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2___redArg(lean_object* v_i_2616_, lean_object* v_source_2617_, lean_object* v_target_2618_){
_start:
{
lean_object* v___x_2619_; uint8_t v___x_2620_; 
v___x_2619_ = lean_array_get_size(v_source_2617_);
v___x_2620_ = lean_nat_dec_lt(v_i_2616_, v___x_2619_);
if (v___x_2620_ == 0)
{
lean_dec_ref(v_source_2617_);
lean_dec(v_i_2616_);
return v_target_2618_;
}
else
{
lean_object* v_es_2621_; lean_object* v___x_2622_; lean_object* v_source_2623_; lean_object* v_target_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; 
v_es_2621_ = lean_array_fget(v_source_2617_, v_i_2616_);
v___x_2622_ = lean_box(0);
v_source_2623_ = lean_array_fset(v_source_2617_, v_i_2616_, v___x_2622_);
v_target_2624_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3___redArg(v_target_2618_, v_es_2621_);
v___x_2625_ = lean_unsigned_to_nat(1u);
v___x_2626_ = lean_nat_add(v_i_2616_, v___x_2625_);
lean_dec(v_i_2616_);
v_i_2616_ = v___x_2626_;
v_source_2617_ = v_source_2623_;
v_target_2618_ = v_target_2624_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1___redArg(lean_object* v_data_2628_){
_start:
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v_nbuckets_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; 
v___x_2629_ = lean_array_get_size(v_data_2628_);
v___x_2630_ = lean_unsigned_to_nat(2u);
v_nbuckets_2631_ = lean_nat_mul(v___x_2629_, v___x_2630_);
v___x_2632_ = lean_unsigned_to_nat(0u);
v___x_2633_ = lean_box(0);
v___x_2634_ = lean_mk_array(v_nbuckets_2631_, v___x_2633_);
v___x_2635_ = lean_array_propagate_mark(v_data_2628_, v___x_2634_);
v___x_2636_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2___redArg(v___x_2632_, v_data_2628_, v___x_2635_);
return v___x_2636_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg(lean_object* v_a_2637_, lean_object* v_x_2638_){
_start:
{
if (lean_obj_tag(v_x_2638_) == 0)
{
uint8_t v___x_2639_; 
v___x_2639_ = 0;
return v___x_2639_;
}
else
{
lean_object* v_key_2640_; lean_object* v_tail_2641_; uint8_t v___x_2642_; 
v_key_2640_ = lean_ctor_get(v_x_2638_, 0);
v_tail_2641_ = lean_ctor_get(v_x_2638_, 2);
v___x_2642_ = l_Lean_instBEqFVarId_beq(v_key_2640_, v_a_2637_);
if (v___x_2642_ == 0)
{
v_x_2638_ = v_tail_2641_;
goto _start;
}
else
{
return v___x_2642_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg___boxed(lean_object* v_a_2644_, lean_object* v_x_2645_){
_start:
{
uint8_t v_res_2646_; lean_object* v_r_2647_; 
v_res_2646_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg(v_a_2644_, v_x_2645_);
lean_dec(v_x_2645_);
lean_dec(v_a_2644_);
v_r_2647_ = lean_box(v_res_2646_);
return v_r_2647_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(lean_object* v_m_2648_, lean_object* v_a_2649_, lean_object* v_b_2650_){
_start:
{
lean_object* v_size_2651_; lean_object* v_buckets_2652_; lean_object* v___x_2654_; uint8_t v_isShared_2655_; uint8_t v_isSharedCheck_2695_; 
v_size_2651_ = lean_ctor_get(v_m_2648_, 0);
v_buckets_2652_ = lean_ctor_get(v_m_2648_, 1);
v_isSharedCheck_2695_ = !lean_is_exclusive(v_m_2648_);
if (v_isSharedCheck_2695_ == 0)
{
v___x_2654_ = v_m_2648_;
v_isShared_2655_ = v_isSharedCheck_2695_;
goto v_resetjp_2653_;
}
else
{
lean_inc(v_buckets_2652_);
lean_inc(v_size_2651_);
lean_dec(v_m_2648_);
v___x_2654_ = lean_box(0);
v_isShared_2655_ = v_isSharedCheck_2695_;
goto v_resetjp_2653_;
}
v_resetjp_2653_:
{
lean_object* v___x_2656_; uint64_t v___x_2657_; uint64_t v___x_2658_; uint64_t v___x_2659_; uint64_t v_fold_2660_; uint64_t v___x_2661_; uint64_t v___x_2662_; uint64_t v___x_2663_; size_t v___x_2664_; size_t v___x_2665_; size_t v___x_2666_; size_t v___x_2667_; size_t v___x_2668_; lean_object* v_bkt_2669_; uint8_t v___x_2670_; 
v___x_2656_ = lean_array_get_size(v_buckets_2652_);
v___x_2657_ = l_Lean_instHashableFVarId_hash(v_a_2649_);
v___x_2658_ = 32ULL;
v___x_2659_ = lean_uint64_shift_right(v___x_2657_, v___x_2658_);
v_fold_2660_ = lean_uint64_xor(v___x_2657_, v___x_2659_);
v___x_2661_ = 16ULL;
v___x_2662_ = lean_uint64_shift_right(v_fold_2660_, v___x_2661_);
v___x_2663_ = lean_uint64_xor(v_fold_2660_, v___x_2662_);
v___x_2664_ = lean_uint64_to_usize(v___x_2663_);
v___x_2665_ = lean_usize_of_nat(v___x_2656_);
v___x_2666_ = ((size_t)1ULL);
v___x_2667_ = lean_usize_sub(v___x_2665_, v___x_2666_);
v___x_2668_ = lean_usize_land(v___x_2664_, v___x_2667_);
v_bkt_2669_ = lean_array_uget_borrowed(v_buckets_2652_, v___x_2668_);
v___x_2670_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg(v_a_2649_, v_bkt_2669_);
if (v___x_2670_ == 0)
{
lean_object* v___x_2671_; lean_object* v_size_x27_2672_; lean_object* v___x_2673_; lean_object* v_buckets_x27_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; uint8_t v___x_2680_; 
v___x_2671_ = lean_unsigned_to_nat(1u);
v_size_x27_2672_ = lean_nat_add(v_size_2651_, v___x_2671_);
lean_dec(v_size_2651_);
lean_inc(v_bkt_2669_);
v___x_2673_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2673_, 0, v_a_2649_);
lean_ctor_set(v___x_2673_, 1, v_b_2650_);
lean_ctor_set(v___x_2673_, 2, v_bkt_2669_);
v_buckets_x27_2674_ = lean_array_uset(v_buckets_2652_, v___x_2668_, v___x_2673_);
v___x_2675_ = lean_unsigned_to_nat(4u);
v___x_2676_ = lean_nat_mul(v_size_x27_2672_, v___x_2675_);
v___x_2677_ = lean_unsigned_to_nat(3u);
v___x_2678_ = lean_nat_div(v___x_2676_, v___x_2677_);
lean_dec(v___x_2676_);
v___x_2679_ = lean_array_get_size(v_buckets_x27_2674_);
v___x_2680_ = lean_nat_dec_le(v___x_2678_, v___x_2679_);
lean_dec(v___x_2678_);
if (v___x_2680_ == 0)
{
lean_object* v_val_2681_; lean_object* v___x_2683_; 
v_val_2681_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1___redArg(v_buckets_x27_2674_);
if (v_isShared_2655_ == 0)
{
lean_ctor_set(v___x_2654_, 1, v_val_2681_);
lean_ctor_set(v___x_2654_, 0, v_size_x27_2672_);
v___x_2683_ = v___x_2654_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v_size_x27_2672_);
lean_ctor_set(v_reuseFailAlloc_2684_, 1, v_val_2681_);
v___x_2683_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
return v___x_2683_;
}
}
else
{
lean_object* v___x_2686_; 
if (v_isShared_2655_ == 0)
{
lean_ctor_set(v___x_2654_, 1, v_buckets_x27_2674_);
lean_ctor_set(v___x_2654_, 0, v_size_x27_2672_);
v___x_2686_ = v___x_2654_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_size_x27_2672_);
lean_ctor_set(v_reuseFailAlloc_2687_, 1, v_buckets_x27_2674_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
else
{
lean_object* v___x_2688_; lean_object* v_buckets_x27_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2693_; 
lean_inc(v_bkt_2669_);
v___x_2688_ = lean_box(0);
v_buckets_x27_2689_ = lean_array_uset(v_buckets_2652_, v___x_2668_, v___x_2688_);
v___x_2690_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2___redArg(v_a_2649_, v_b_2650_, v_bkt_2669_);
v___x_2691_ = lean_array_uset(v_buckets_x27_2689_, v___x_2668_, v___x_2690_);
if (v_isShared_2655_ == 0)
{
lean_ctor_set(v___x_2654_, 1, v___x_2691_);
v___x_2693_ = v___x_2654_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v_size_2651_);
lean_ctor_set(v_reuseFailAlloc_2694_, 1, v___x_2691_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
return v___x_2693_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg___lam__0(lean_object* v_var_2696_, lean_object* v___x_2697_, lean_object* v_x_2698_){
_start:
{
lean_object* v___x_2699_; 
v___x_2699_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(v_x_2698_, v_var_2696_, v___x_2697_);
return v___x_2699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(lean_object* v_var_2700_, lean_object* v_newVal_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_){
_start:
{
lean_object* v___x_2706_; lean_object* v_env_2707_; lean_object* v___x_2708_; 
v___x_2706_ = lean_st_ref_get(v_a_2704_);
v_env_2707_ = lean_ctor_get(v___x_2706_, 0);
lean_inc_ref(v_env_2707_);
lean_dec(v___x_2706_);
v___x_2708_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_var_2700_, v_a_2702_, v_a_2703_);
if (lean_obj_tag(v___x_2708_) == 0)
{
lean_object* v_a_2709_; lean_object* v___x_2710_; lean_object* v___f_2711_; lean_object* v___x_2712_; 
v_a_2709_ = lean_ctor_get(v___x_2708_, 0);
lean_inc(v_a_2709_);
lean_dec_ref_known(v___x_2708_, 1);
v___x_2710_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(v_env_2707_, v_a_2709_, v_newVal_2701_);
v___f_2711_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2711_, 0, v_var_2700_);
lean_closure_set(v___f_2711_, 1, v___x_2710_);
v___x_2712_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v___f_2711_, v_a_2702_, v_a_2703_);
return v___x_2712_;
}
else
{
lean_object* v_a_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2720_; 
lean_dec_ref(v_env_2707_);
lean_dec(v_newVal_2701_);
lean_dec(v_var_2700_);
v_a_2713_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2720_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2720_ == 0)
{
v___x_2715_ = v___x_2708_;
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_a_2713_);
lean_dec(v___x_2708_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v___x_2718_; 
if (v_isShared_2716_ == 0)
{
v___x_2718_ = v___x_2715_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v_a_2713_);
v___x_2718_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
return v___x_2718_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg___boxed(lean_object* v_var_2721_, lean_object* v_newVal_2722_, lean_object* v_a_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_var_2721_, v_newVal_2722_, v_a_2723_, v_a_2724_, v_a_2725_);
lean_dec(v_a_2725_);
lean_dec(v_a_2724_);
lean_dec_ref(v_a_2723_);
return v_res_2727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment(lean_object* v_var_2728_, lean_object* v_newVal_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_, lean_object* v_a_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_){
_start:
{
lean_object* v___x_2737_; 
v___x_2737_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_var_2728_, v_newVal_2729_, v_a_2730_, v_a_2731_, v_a_2735_);
return v___x_2737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___boxed(lean_object* v_var_2738_, lean_object* v_newVal_2739_, lean_object* v_a_2740_, lean_object* v_a_2741_, lean_object* v_a_2742_, lean_object* v_a_2743_, lean_object* v_a_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_){
_start:
{
lean_object* v_res_2747_; 
v_res_2747_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment(v_var_2738_, v_newVal_2739_, v_a_2740_, v_a_2741_, v_a_2742_, v_a_2743_, v_a_2744_, v_a_2745_);
lean_dec(v_a_2745_);
lean_dec_ref(v_a_2744_);
lean_dec(v_a_2743_);
lean_dec_ref(v_a_2742_);
lean_dec(v_a_2741_);
lean_dec_ref(v_a_2740_);
return v_res_2747_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0(lean_object* v_00_u03b2_2748_, lean_object* v_m_2749_, lean_object* v_a_2750_, lean_object* v_b_2751_){
_start:
{
lean_object* v___x_2752_; 
v___x_2752_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(v_m_2749_, v_a_2750_, v_b_2751_);
return v___x_2752_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0(lean_object* v_00_u03b2_2753_, lean_object* v_a_2754_, lean_object* v_x_2755_){
_start:
{
uint8_t v___x_2756_; 
v___x_2756_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___redArg(v_a_2754_, v_x_2755_);
return v___x_2756_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2757_, lean_object* v_a_2758_, lean_object* v_x_2759_){
_start:
{
uint8_t v_res_2760_; lean_object* v_r_2761_; 
v_res_2760_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__0(v_00_u03b2_2757_, v_a_2758_, v_x_2759_);
lean_dec(v_x_2759_);
lean_dec(v_a_2758_);
v_r_2761_ = lean_box(v_res_2760_);
return v_r_2761_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1(lean_object* v_00_u03b2_2762_, lean_object* v_data_2763_){
_start:
{
lean_object* v___x_2764_; 
v___x_2764_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1___redArg(v_data_2763_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2(lean_object* v_00_u03b2_2765_, lean_object* v_a_2766_, lean_object* v_b_2767_, lean_object* v_x_2768_){
_start:
{
lean_object* v___x_2769_; 
v___x_2769_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__2___redArg(v_a_2766_, v_b_2767_, v_x_2768_);
return v___x_2769_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2770_, lean_object* v_i_2771_, lean_object* v_source_2772_, lean_object* v_target_2773_){
_start:
{
lean_object* v___x_2774_; 
v___x_2774_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2___redArg(v_i_2771_, v_source_2772_, v_target_2773_);
return v___x_2774_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_2775_, lean_object* v_x_2776_, lean_object* v_x_2777_){
_start:
{
lean_object* v___x_2778_; 
v___x_2778_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0_spec__1_spec__2_spec__3___redArg(v_x_2776_, v_x_2777_);
return v___x_2778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg___lam__0(lean_object* v_var_2779_, lean_object* v_x_2780_){
_start:
{
lean_object* v___x_2781_; lean_object* v___x_2782_; 
v___x_2781_ = lean_box(0);
v___x_2782_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(v_x_2780_, v_var_2779_, v___x_2781_);
return v___x_2782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg(lean_object* v_var_2783_, lean_object* v_a_2784_, lean_object* v_a_2785_){
_start:
{
lean_object* v___f_2787_; lean_object* v___x_2788_; 
v___f_2787_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2787_, 0, v_var_2783_);
v___x_2788_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v___f_2787_, v_a_2784_, v_a_2785_);
return v___x_2788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg___boxed(lean_object* v_var_2789_, lean_object* v_a_2790_, lean_object* v_a_2791_, lean_object* v_a_2792_){
_start:
{
lean_object* v_res_2793_; 
v_res_2793_ = l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg(v_var_2789_, v_a_2790_, v_a_2791_);
lean_dec(v_a_2791_);
lean_dec_ref(v_a_2790_);
return v_res_2793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment(lean_object* v_var_2794_, lean_object* v_a_2795_, lean_object* v_a_2796_, lean_object* v_a_2797_, lean_object* v_a_2798_, lean_object* v_a_2799_, lean_object* v_a_2800_){
_start:
{
lean_object* v___x_2802_; 
v___x_2802_ = l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg(v_var_2794_, v_a_2795_, v_a_2796_);
return v___x_2802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___boxed(lean_object* v_var_2803_, lean_object* v_a_2804_, lean_object* v_a_2805_, lean_object* v_a_2806_, lean_object* v_a_2807_, lean_object* v_a_2808_, lean_object* v_a_2809_, lean_object* v_a_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment(v_var_2803_, v_a_2804_, v_a_2805_, v_a_2806_, v_a_2807_, v_a_2808_, v_a_2809_);
lean_dec(v_a_2809_);
lean_dec_ref(v_a_2808_);
lean_dec(v_a_2807_);
lean_dec_ref(v_a_2806_);
lean_dec(v_a_2805_);
lean_dec_ref(v_a_2804_);
return v_res_2811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(lean_object* v_v_2812_, lean_object* v_a_2813_, lean_object* v_a_2814_, lean_object* v_a_2815_){
_start:
{
lean_object* v___x_2817_; lean_object* v_env_2818_; lean_object* v_currFnIdx_2819_; lean_object* v___x_2820_; lean_object* v_fst_2822_; lean_object* v_snd_2823_; lean_object* v_assignments_2826_; lean_object* v_funVals_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; uint8_t v___x_2830_; 
v___x_2817_ = lean_st_ref_get(v_a_2815_);
v_env_2818_ = lean_ctor_get(v___x_2817_, 0);
lean_inc_ref(v_env_2818_);
lean_dec(v___x_2817_);
v_currFnIdx_2819_ = lean_ctor_get(v_a_2813_, 1);
v___x_2820_ = lean_st_ref_take(v_a_2814_);
v_assignments_2826_ = lean_ctor_get(v___x_2820_, 0);
v_funVals_2827_ = lean_ctor_get(v___x_2820_, 1);
v___x_2828_ = lean_box(0);
v___x_2829_ = lean_array_get_size(v_funVals_2827_);
v___x_2830_ = lean_nat_dec_lt(v_currFnIdx_2819_, v___x_2829_);
if (v___x_2830_ == 0)
{
lean_dec_ref(v_env_2818_);
lean_dec(v_v_2812_);
v_fst_2822_ = v___x_2828_;
v_snd_2823_ = v___x_2820_;
goto v___jp_2821_;
}
else
{
lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2841_; 
lean_inc_ref(v_funVals_2827_);
lean_inc_ref(v_assignments_2826_);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2820_);
if (v_isSharedCheck_2841_ == 0)
{
lean_object* v_unused_2842_; lean_object* v_unused_2843_; 
v_unused_2842_ = lean_ctor_get(v___x_2820_, 1);
lean_dec(v_unused_2842_);
v_unused_2843_ = lean_ctor_get(v___x_2820_, 0);
lean_dec(v_unused_2843_);
v___x_2832_ = v___x_2820_;
v_isShared_2833_ = v_isSharedCheck_2841_;
goto v_resetjp_2831_;
}
else
{
lean_dec(v___x_2820_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2841_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v_v_2834_; lean_object* v_xs_x27_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2839_; 
v_v_2834_ = lean_array_fget(v_funVals_2827_, v_currFnIdx_2819_);
v_xs_x27_2835_ = lean_array_fset(v_funVals_2827_, v_currFnIdx_2819_, v___x_2828_);
v___x_2836_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(v_env_2818_, v_v_2812_, v_v_2834_);
v___x_2837_ = lean_array_fset(v_xs_x27_2835_, v_currFnIdx_2819_, v___x_2836_);
if (v_isShared_2833_ == 0)
{
lean_ctor_set(v___x_2832_, 1, v___x_2837_);
v___x_2839_ = v___x_2832_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_assignments_2826_);
lean_ctor_set(v_reuseFailAlloc_2840_, 1, v___x_2837_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
v_fst_2822_ = v___x_2828_;
v_snd_2823_ = v___x_2839_;
goto v___jp_2821_;
}
}
}
v___jp_2821_:
{
lean_object* v___x_2824_; lean_object* v___x_2825_; 
v___x_2824_ = lean_st_ref_put(v_a_2814_, v_snd_2823_);
v___x_2825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2825_, 0, v_fst_2822_);
return v___x_2825_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg___boxed(lean_object* v_v_2844_, lean_object* v_a_2845_, lean_object* v_a_2846_, lean_object* v_a_2847_, lean_object* v_a_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(v_v_2844_, v_a_2845_, v_a_2846_, v_a_2847_);
lean_dec(v_a_2847_);
lean_dec(v_a_2846_);
lean_dec_ref(v_a_2845_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary(lean_object* v_v_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_, lean_object* v_a_2853_, lean_object* v_a_2854_, lean_object* v_a_2855_, lean_object* v_a_2856_){
_start:
{
lean_object* v___x_2858_; 
v___x_2858_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(v_v_2850_, v_a_2851_, v_a_2852_, v_a_2856_);
return v___x_2858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___boxed(lean_object* v_v_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_, lean_object* v_a_2864_, lean_object* v_a_2865_, lean_object* v_a_2866_){
_start:
{
lean_object* v_res_2867_; 
v_res_2867_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary(v_v_2859_, v_a_2860_, v_a_2861_, v_a_2862_, v_a_2863_, v_a_2864_, v_a_2865_);
lean_dec(v_a_2865_);
lean_dec_ref(v_a_2864_);
lean_dec(v_a_2863_);
lean_dec_ref(v_a_2862_);
lean_dec(v_a_2861_);
lean_dec_ref(v_a_2860_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg(lean_object* v_a_2868_, uint8_t v_b_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_){
_start:
{
lean_object* v_array_2874_; lean_object* v_start_2875_; lean_object* v_stop_2876_; lean_object* v___x_2878_; uint8_t v_isShared_2879_; uint8_t v_isSharedCheck_2913_; 
v_array_2874_ = lean_ctor_get(v_a_2868_, 0);
v_start_2875_ = lean_ctor_get(v_a_2868_, 1);
v_stop_2876_ = lean_ctor_get(v_a_2868_, 2);
v_isSharedCheck_2913_ = !lean_is_exclusive(v_a_2868_);
if (v_isSharedCheck_2913_ == 0)
{
v___x_2878_ = v_a_2868_;
v_isShared_2879_ = v_isSharedCheck_2913_;
goto v_resetjp_2877_;
}
else
{
lean_inc(v_stop_2876_);
lean_inc(v_start_2875_);
lean_inc(v_array_2874_);
lean_dec(v_a_2868_);
v___x_2878_ = lean_box(0);
v_isShared_2879_ = v_isSharedCheck_2913_;
goto v_resetjp_2877_;
}
v_resetjp_2877_:
{
uint8_t v___x_2880_; 
v___x_2880_ = lean_nat_dec_lt(v_start_2875_, v_stop_2876_);
if (v___x_2880_ == 0)
{
lean_object* v___x_2881_; lean_object* v___x_2882_; 
lean_del_object(v___x_2878_);
lean_dec(v_stop_2876_);
lean_dec(v_start_2875_);
lean_dec_ref(v_array_2874_);
v___x_2881_ = lean_box(v_b_2869_);
v___x_2882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2882_, 0, v___x_2881_);
return v___x_2882_;
}
else
{
lean_object* v___x_2883_; lean_object* v_fvarId_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2888_; 
v___x_2883_ = lean_array_fget_borrowed(v_array_2874_, v_start_2875_);
v_fvarId_2884_ = lean_ctor_get(v___x_2883_, 0);
lean_inc(v_fvarId_2884_);
v___x_2885_ = lean_unsigned_to_nat(1u);
v___x_2886_ = lean_nat_add(v_start_2875_, v___x_2885_);
lean_dec(v_start_2875_);
if (v_isShared_2879_ == 0)
{
lean_ctor_set(v___x_2878_, 1, v___x_2886_);
v___x_2888_ = v___x_2878_;
goto v_reusejp_2887_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v_array_2874_);
lean_ctor_set(v_reuseFailAlloc_2912_, 1, v___x_2886_);
lean_ctor_set(v_reuseFailAlloc_2912_, 2, v_stop_2876_);
v___x_2888_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2887_;
}
v_reusejp_2887_:
{
lean_object* v___x_2889_; 
v___x_2889_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_fvarId_2884_, v___y_2870_, v___y_2871_);
if (lean_obj_tag(v___x_2889_) == 0)
{
lean_object* v_a_2890_; lean_object* v___x_2891_; uint8_t v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; 
v_a_2890_ = lean_ctor_get(v___x_2889_, 0);
lean_inc(v_a_2890_);
lean_dec_ref_known(v___x_2889_, 1);
v___x_2891_ = lean_box(0);
v___x_2892_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_a_2890_, v___x_2891_);
lean_dec(v_a_2890_);
v___x_2893_ = lean_box(1);
v___x_2894_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_fvarId_2884_, v___x_2893_, v___y_2870_, v___y_2871_, v___y_2872_);
if (lean_obj_tag(v___x_2894_) == 0)
{
lean_dec_ref_known(v___x_2894_, 1);
v_a_2868_ = v___x_2888_;
v_b_2869_ = v___x_2892_;
goto _start;
}
else
{
lean_object* v_a_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2903_; 
lean_dec_ref(v___x_2888_);
v_a_2896_ = lean_ctor_get(v___x_2894_, 0);
v_isSharedCheck_2903_ = !lean_is_exclusive(v___x_2894_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2898_ = v___x_2894_;
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_a_2896_);
lean_dec(v___x_2894_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2903_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v___x_2901_; 
if (v_isShared_2899_ == 0)
{
v___x_2901_ = v___x_2898_;
goto v_reusejp_2900_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v_a_2896_);
v___x_2901_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2900_;
}
v_reusejp_2900_:
{
return v___x_2901_;
}
}
}
}
else
{
lean_object* v_a_2904_; lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2911_; 
lean_dec_ref(v___x_2888_);
lean_dec(v_fvarId_2884_);
v_a_2904_ = lean_ctor_get(v___x_2889_, 0);
v_isSharedCheck_2911_ = !lean_is_exclusive(v___x_2889_);
if (v_isSharedCheck_2911_ == 0)
{
v___x_2906_ = v___x_2889_;
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
else
{
lean_inc(v_a_2904_);
lean_dec(v___x_2889_);
v___x_2906_ = lean_box(0);
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
v_resetjp_2905_:
{
lean_object* v___x_2909_; 
if (v_isShared_2907_ == 0)
{
v___x_2909_ = v___x_2906_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v_a_2904_);
v___x_2909_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
return v___x_2909_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg___boxed(lean_object* v_a_2914_, lean_object* v_b_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_){
_start:
{
uint8_t v_b_boxed_2920_; lean_object* v_res_2921_; 
v_b_boxed_2920_ = lean_unbox(v_b_2915_);
v_res_2921_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg(v_a_2914_, v_b_boxed_2920_, v___y_2916_, v___y_2917_, v___y_2918_);
lean_dec(v___y_2918_);
lean_dec(v___y_2917_);
lean_dec_ref(v___y_2916_);
return v_res_2921_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___lam__0(lean_object* v_fvarId_2922_, lean_object* v___x_2923_, lean_object* v_x_2924_){
_start:
{
lean_object* v___x_2925_; 
v___x_2925_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(v_x_2924_, v_fvarId_2922_, v___x_2923_);
return v___x_2925_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg(lean_object* v___x_2926_, lean_object* v_as_2927_, size_t v_sz_2928_, size_t v_i_2929_, lean_object* v_b_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_){
_start:
{
lean_object* v_a_2935_; uint8_t v___x_2939_; 
v___x_2939_ = lean_usize_dec_lt(v_i_2929_, v_sz_2928_);
if (v___x_2939_ == 0)
{
lean_object* v___x_2940_; 
lean_dec_ref(v___x_2926_);
v___x_2940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2940_, 0, v_b_2930_);
return v___x_2940_;
}
else
{
lean_object* v_snd_2941_; lean_object* v_fst_2942_; lean_object* v___x_2944_; uint8_t v_isShared_2945_; uint8_t v_isSharedCheck_3008_; 
v_snd_2941_ = lean_ctor_get(v_b_2930_, 1);
v_fst_2942_ = lean_ctor_get(v_b_2930_, 0);
v_isSharedCheck_3008_ = !lean_is_exclusive(v_b_2930_);
if (v_isSharedCheck_3008_ == 0)
{
v___x_2944_ = v_b_2930_;
v_isShared_2945_ = v_isSharedCheck_3008_;
goto v_resetjp_2943_;
}
else
{
lean_inc(v_snd_2941_);
lean_inc(v_fst_2942_);
lean_dec(v_b_2930_);
v___x_2944_ = lean_box(0);
v_isShared_2945_ = v_isSharedCheck_3008_;
goto v_resetjp_2943_;
}
v_resetjp_2943_:
{
lean_object* v_array_2946_; lean_object* v_start_2947_; lean_object* v_stop_2948_; uint8_t v___x_2949_; 
v_array_2946_ = lean_ctor_get(v_snd_2941_, 0);
v_start_2947_ = lean_ctor_get(v_snd_2941_, 1);
v_stop_2948_ = lean_ctor_get(v_snd_2941_, 2);
v___x_2949_ = lean_nat_dec_lt(v_start_2947_, v_stop_2948_);
if (v___x_2949_ == 0)
{
lean_object* v___x_2951_; 
lean_dec_ref(v___x_2926_);
if (v_isShared_2945_ == 0)
{
v___x_2951_ = v___x_2944_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2953_; 
v_reuseFailAlloc_2953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2953_, 0, v_fst_2942_);
lean_ctor_set(v_reuseFailAlloc_2953_, 1, v_snd_2941_);
v___x_2951_ = v_reuseFailAlloc_2953_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
lean_object* v___x_2952_; 
v___x_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2951_);
return v___x_2952_;
}
}
else
{
lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_3004_; 
lean_inc(v_stop_2948_);
lean_inc(v_start_2947_);
lean_inc_ref(v_array_2946_);
v_isSharedCheck_3004_ = !lean_is_exclusive(v_snd_2941_);
if (v_isSharedCheck_3004_ == 0)
{
lean_object* v_unused_3005_; lean_object* v_unused_3006_; lean_object* v_unused_3007_; 
v_unused_3005_ = lean_ctor_get(v_snd_2941_, 2);
lean_dec(v_unused_3005_);
v_unused_3006_ = lean_ctor_get(v_snd_2941_, 1);
lean_dec(v_unused_3006_);
v_unused_3007_ = lean_ctor_get(v_snd_2941_, 0);
lean_dec(v_unused_3007_);
v___x_2955_ = v_snd_2941_;
v_isShared_2956_ = v_isSharedCheck_3004_;
goto v_resetjp_2954_;
}
else
{
lean_dec(v_snd_2941_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_3004_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v_a_2957_; lean_object* v_fvarId_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2963_; 
v_a_2957_ = lean_array_uget_borrowed(v_as_2927_, v_i_2929_);
v_fvarId_2958_ = lean_ctor_get(v_a_2957_, 0);
v___x_2959_ = lean_array_fget(v_array_2946_, v_start_2947_);
v___x_2960_ = lean_unsigned_to_nat(1u);
v___x_2961_ = lean_nat_add(v_start_2947_, v___x_2960_);
lean_dec(v_start_2947_);
if (v_isShared_2956_ == 0)
{
lean_ctor_set(v___x_2955_, 1, v___x_2961_);
v___x_2963_ = v___x_2955_;
goto v_reusejp_2962_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v_array_2946_);
lean_ctor_set(v_reuseFailAlloc_3003_, 1, v___x_2961_);
lean_ctor_set(v_reuseFailAlloc_3003_, 2, v_stop_2948_);
v___x_2963_ = v_reuseFailAlloc_3003_;
goto v_reusejp_2962_;
}
v_reusejp_2962_:
{
lean_object* v___x_2964_; 
v___x_2964_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_fvarId_2958_, v___y_2931_, v___y_2932_);
if (lean_obj_tag(v___x_2964_) == 0)
{
lean_object* v_a_2965_; lean_object* v___x_2966_; 
v_a_2965_ = lean_ctor_get(v___x_2964_, 0);
lean_inc(v_a_2965_);
lean_dec_ref_known(v___x_2964_, 1);
v___x_2966_ = l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(v___x_2959_, v___y_2931_, v___y_2932_);
lean_dec(v___x_2959_);
if (lean_obj_tag(v___x_2966_) == 0)
{
lean_object* v_a_2967_; lean_object* v___x_2968_; uint8_t v___x_2969_; 
v_a_2967_ = lean_ctor_get(v___x_2966_, 0);
lean_inc(v_a_2967_);
lean_dec_ref_known(v___x_2966_, 1);
lean_inc(v_a_2965_);
lean_inc_ref(v___x_2926_);
v___x_2968_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_widening(v___x_2926_, v_a_2965_, v_a_2967_);
v___x_2969_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v___x_2968_, v_a_2965_);
lean_dec(v_a_2965_);
if (v___x_2969_ == 0)
{
lean_object* v___f_2970_; lean_object* v___x_2971_; 
lean_dec(v_fst_2942_);
lean_inc(v_fvarId_2958_);
v___f_2970_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2970_, 0, v_fvarId_2958_);
lean_closure_set(v___f_2970_, 1, v___x_2968_);
v___x_2971_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v___f_2970_, v___y_2931_, v___y_2932_);
if (lean_obj_tag(v___x_2971_) == 0)
{
lean_object* v___x_2972_; lean_object* v___x_2974_; 
lean_dec_ref_known(v___x_2971_, 1);
v___x_2972_ = lean_box(v___x_2949_);
if (v_isShared_2945_ == 0)
{
lean_ctor_set(v___x_2944_, 1, v___x_2963_);
lean_ctor_set(v___x_2944_, 0, v___x_2972_);
v___x_2974_ = v___x_2944_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v___x_2972_);
lean_ctor_set(v_reuseFailAlloc_2975_, 1, v___x_2963_);
v___x_2974_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
v_a_2935_ = v___x_2974_;
goto v___jp_2934_;
}
}
else
{
lean_object* v_a_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_2983_; 
lean_dec_ref(v___x_2963_);
lean_del_object(v___x_2944_);
lean_dec_ref(v___x_2926_);
v_a_2976_ = lean_ctor_get(v___x_2971_, 0);
v_isSharedCheck_2983_ = !lean_is_exclusive(v___x_2971_);
if (v_isSharedCheck_2983_ == 0)
{
v___x_2978_ = v___x_2971_;
v_isShared_2979_ = v_isSharedCheck_2983_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_a_2976_);
lean_dec(v___x_2971_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_2983_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v___x_2981_; 
if (v_isShared_2979_ == 0)
{
v___x_2981_ = v___x_2978_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v_a_2976_);
v___x_2981_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
return v___x_2981_;
}
}
}
}
else
{
lean_object* v___x_2985_; 
lean_dec(v___x_2968_);
if (v_isShared_2945_ == 0)
{
lean_ctor_set(v___x_2944_, 1, v___x_2963_);
v___x_2985_ = v___x_2944_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2986_; 
v_reuseFailAlloc_2986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2986_, 0, v_fst_2942_);
lean_ctor_set(v_reuseFailAlloc_2986_, 1, v___x_2963_);
v___x_2985_ = v_reuseFailAlloc_2986_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
v_a_2935_ = v___x_2985_;
goto v___jp_2934_;
}
}
}
else
{
lean_object* v_a_2987_; lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_2994_; 
lean_dec(v_a_2965_);
lean_dec_ref(v___x_2963_);
lean_del_object(v___x_2944_);
lean_dec(v_fst_2942_);
lean_dec_ref(v___x_2926_);
v_a_2987_ = lean_ctor_get(v___x_2966_, 0);
v_isSharedCheck_2994_ = !lean_is_exclusive(v___x_2966_);
if (v_isSharedCheck_2994_ == 0)
{
v___x_2989_ = v___x_2966_;
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
else
{
lean_inc(v_a_2987_);
lean_dec(v___x_2966_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
lean_object* v___x_2992_; 
if (v_isShared_2990_ == 0)
{
v___x_2992_ = v___x_2989_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v_a_2987_);
v___x_2992_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
return v___x_2992_;
}
}
}
}
else
{
lean_object* v_a_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3002_; 
lean_dec_ref(v___x_2963_);
lean_dec(v___x_2959_);
lean_del_object(v___x_2944_);
lean_dec(v_fst_2942_);
lean_dec_ref(v___x_2926_);
v_a_2995_ = lean_ctor_get(v___x_2964_, 0);
v_isSharedCheck_3002_ = !lean_is_exclusive(v___x_2964_);
if (v_isSharedCheck_3002_ == 0)
{
v___x_2997_ = v___x_2964_;
v_isShared_2998_ = v_isSharedCheck_3002_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_a_2995_);
lean_dec(v___x_2964_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3002_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
lean_object* v___x_3000_; 
if (v_isShared_2998_ == 0)
{
v___x_3000_ = v___x_2997_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3001_; 
v_reuseFailAlloc_3001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3001_, 0, v_a_2995_);
v___x_3000_ = v_reuseFailAlloc_3001_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
return v___x_3000_;
}
}
}
}
}
}
}
}
v___jp_2934_:
{
size_t v___x_2936_; size_t v___x_2937_; 
v___x_2936_ = ((size_t)1ULL);
v___x_2937_ = lean_usize_add(v_i_2929_, v___x_2936_);
v_i_2929_ = v___x_2937_;
v_b_2930_ = v_a_2935_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___boxed(lean_object* v___x_3009_, lean_object* v_as_3010_, lean_object* v_sz_3011_, lean_object* v_i_3012_, lean_object* v_b_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_){
_start:
{
size_t v_sz_boxed_3017_; size_t v_i_boxed_3018_; lean_object* v_res_3019_; 
v_sz_boxed_3017_ = lean_unbox_usize(v_sz_3011_);
lean_dec(v_sz_3011_);
v_i_boxed_3018_ = lean_unbox_usize(v_i_3012_);
lean_dec(v_i_3012_);
v_res_3019_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg(v___x_3009_, v_as_3010_, v_sz_boxed_3017_, v_i_boxed_3018_, v_b_3013_, v___y_3014_, v___y_3015_);
lean_dec(v___y_3015_);
lean_dec_ref(v___y_3014_);
lean_dec_ref(v_as_3010_);
return v_res_3019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment(lean_object* v_params_3020_, lean_object* v_args_3021_, lean_object* v_a_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_){
_start:
{
uint8_t v_ret_3029_; lean_object* v___x_3030_; lean_object* v_env_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; size_t v_sz_3037_; size_t v___x_3038_; lean_object* v___x_3039_; 
v_ret_3029_ = 0;
v___x_3030_ = lean_st_ref_get(v_a_3027_);
v_env_3031_ = lean_ctor_get(v___x_3030_, 0);
lean_inc_ref(v_env_3031_);
lean_dec(v___x_3030_);
v___x_3032_ = lean_unsigned_to_nat(0u);
v___x_3033_ = lean_array_get_size(v_args_3021_);
v___x_3034_ = l_Array_toSubarray___redArg(v_args_3021_, v___x_3032_, v___x_3033_);
v___x_3035_ = lean_box(v_ret_3029_);
v___x_3036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3036_, 0, v___x_3035_);
lean_ctor_set(v___x_3036_, 1, v___x_3034_);
v_sz_3037_ = lean_array_size(v_params_3020_);
v___x_3038_ = ((size_t)0ULL);
v___x_3039_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg(v_env_3031_, v_params_3020_, v_sz_3037_, v___x_3038_, v___x_3036_, v_a_3022_, v_a_3023_);
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_object* v_a_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3057_; 
v_a_3040_ = lean_ctor_get(v___x_3039_, 0);
v_isSharedCheck_3057_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3057_ == 0)
{
v___x_3042_ = v___x_3039_;
v_isShared_3043_ = v_isSharedCheck_3057_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_a_3040_);
lean_dec(v___x_3039_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3057_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v_fst_3044_; lean_object* v_lower_3046_; lean_object* v_upper_3047_; lean_object* v___x_3051_; uint8_t v___x_3052_; 
v_fst_3044_ = lean_ctor_get(v_a_3040_, 0);
lean_inc(v_fst_3044_);
lean_dec(v_a_3040_);
v___x_3051_ = lean_array_get_size(v_params_3020_);
v___x_3052_ = lean_nat_dec_eq(v___x_3051_, v___x_3033_);
if (v___x_3052_ == 0)
{
uint8_t v___x_3053_; 
lean_del_object(v___x_3042_);
v___x_3053_ = lean_nat_dec_le(v___x_3033_, v___x_3032_);
if (v___x_3053_ == 0)
{
v_lower_3046_ = v___x_3033_;
v_upper_3047_ = v___x_3051_;
goto v___jp_3045_;
}
else
{
v_lower_3046_ = v___x_3032_;
v_upper_3047_ = v___x_3051_;
goto v___jp_3045_;
}
}
else
{
lean_object* v___x_3055_; 
lean_dec_ref(v_params_3020_);
if (v_isShared_3043_ == 0)
{
lean_ctor_set(v___x_3042_, 0, v_fst_3044_);
v___x_3055_ = v___x_3042_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v_fst_3044_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
return v___x_3055_;
}
}
v___jp_3045_:
{
lean_object* v___x_3048_; uint8_t v___x_3049_; lean_object* v___x_3050_; 
v___x_3048_ = l_Array_toSubarray___redArg(v_params_3020_, v_lower_3046_, v_upper_3047_);
v___x_3049_ = lean_unbox(v_fst_3044_);
lean_dec(v_fst_3044_);
v___x_3050_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg(v___x_3048_, v___x_3049_, v_a_3022_, v_a_3023_, v_a_3027_);
return v___x_3050_;
}
}
}
else
{
lean_object* v_a_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3065_; 
lean_dec_ref(v_params_3020_);
v_a_3058_ = lean_ctor_get(v___x_3039_, 0);
v_isSharedCheck_3065_ = !lean_is_exclusive(v___x_3039_);
if (v_isSharedCheck_3065_ == 0)
{
v___x_3060_ = v___x_3039_;
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_a_3058_);
lean_dec(v___x_3039_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
lean_object* v___x_3063_; 
if (v_isShared_3061_ == 0)
{
v___x_3063_ = v___x_3060_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v_a_3058_);
v___x_3063_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
return v___x_3063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment___boxed(lean_object* v_params_3066_, lean_object* v_args_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_, lean_object* v_a_3072_, lean_object* v_a_3073_, lean_object* v_a_3074_){
_start:
{
lean_object* v_res_3075_; 
v_res_3075_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment(v_params_3066_, v_args_3067_, v_a_3068_, v_a_3069_, v_a_3070_, v_a_3071_, v_a_3072_, v_a_3073_);
lean_dec(v_a_3073_);
lean_dec_ref(v_a_3072_);
lean_dec(v_a_3071_);
lean_dec_ref(v_a_3070_);
lean_dec(v_a_3069_);
lean_dec_ref(v_a_3068_);
return v_res_3075_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0(lean_object* v___x_3076_, lean_object* v_as_3077_, size_t v_sz_3078_, size_t v_i_3079_, lean_object* v_b_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_){
_start:
{
lean_object* v___x_3088_; 
v___x_3088_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg(v___x_3076_, v_as_3077_, v_sz_3078_, v_i_3079_, v_b_3080_, v___y_3081_, v___y_3082_);
return v___x_3088_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___boxed(lean_object* v___x_3089_, lean_object* v_as_3090_, lean_object* v_sz_3091_, lean_object* v_i_3092_, lean_object* v_b_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_){
_start:
{
size_t v_sz_boxed_3101_; size_t v_i_boxed_3102_; lean_object* v_res_3103_; 
v_sz_boxed_3101_ = lean_unbox_usize(v_sz_3091_);
lean_dec(v_sz_3091_);
v_i_boxed_3102_ = lean_unbox_usize(v_i_3092_);
lean_dec(v_i_3092_);
v_res_3103_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0(v___x_3089_, v_as_3090_, v_sz_boxed_3101_, v_i_boxed_3102_, v_b_3093_, v___y_3094_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_, v___y_3099_);
lean_dec(v___y_3099_);
lean_dec_ref(v___y_3098_);
lean_dec(v___y_3097_);
lean_dec_ref(v___y_3096_);
lean_dec(v___y_3095_);
lean_dec_ref(v___y_3094_);
lean_dec_ref(v_as_3090_);
return v_res_3103_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1(lean_object* v_inst_3104_, lean_object* v_R_3105_, lean_object* v_a_3106_, uint8_t v_b_3107_, lean_object* v_c_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_){
_start:
{
lean_object* v___x_3116_; 
v___x_3116_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___redArg(v_a_3106_, v_b_3107_, v___y_3109_, v___y_3110_, v___y_3114_);
return v___x_3116_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1___boxed(lean_object* v_inst_3117_, lean_object* v_R_3118_, lean_object* v_a_3119_, lean_object* v_b_3120_, lean_object* v_c_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_){
_start:
{
uint8_t v_b_boxed_3129_; lean_object* v_res_3130_; 
v_b_boxed_3129_ = lean_unbox(v_b_3120_);
v_res_3130_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__1(v_inst_3117_, v_R_3118_, v_a_3119_, v_b_boxed_3129_, v_c_3121_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_, v___y_3127_);
lean_dec(v___y_3127_);
lean_dec_ref(v___y_3126_);
lean_dec(v___y_3125_);
lean_dec_ref(v___y_3124_);
lean_dec(v___y_3123_);
lean_dec_ref(v___y_3122_);
return v_res_3130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg(lean_object* v_as_3131_, size_t v_sz_3132_, size_t v_i_3133_, uint8_t v_b_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_){
_start:
{
uint8_t v_a_3139_; uint8_t v___x_3143_; 
v___x_3143_ = lean_usize_dec_lt(v_i_3133_, v_sz_3132_);
if (v___x_3143_ == 0)
{
lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3144_ = lean_box(v_b_3134_);
v___x_3145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3144_);
return v___x_3145_;
}
else
{
lean_object* v_a_3146_; lean_object* v_fvarId_3147_; lean_object* v___x_3148_; 
v_a_3146_ = lean_array_uget_borrowed(v_as_3131_, v_i_3133_);
v_fvarId_3147_ = lean_ctor_get(v_a_3146_, 0);
v___x_3148_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_fvarId_3147_, v___y_3135_, v___y_3136_);
if (lean_obj_tag(v___x_3148_) == 0)
{
lean_object* v_a_3149_; lean_object* v___x_3150_; uint8_t v___x_3151_; 
v_a_3149_ = lean_ctor_get(v___x_3148_, 0);
lean_inc(v_a_3149_);
lean_dec_ref_known(v___x_3148_, 1);
v___x_3150_ = lean_box(1);
v___x_3151_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v___x_3150_, v_a_3149_);
lean_dec(v_a_3149_);
if (v___x_3151_ == 0)
{
lean_object* v___f_3152_; lean_object* v___x_3153_; 
lean_inc(v_fvarId_3147_);
v___f_3152_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment_spec__0___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3152_, 0, v_fvarId_3147_);
lean_closure_set(v___f_3152_, 1, v___x_3150_);
v___x_3153_ = l_Lean_Compiler_LCNF_UnreachableBranches_modifyAssignment___redArg(v___f_3152_, v___y_3135_, v___y_3136_);
if (lean_obj_tag(v___x_3153_) == 0)
{
lean_dec_ref_known(v___x_3153_, 1);
v_a_3139_ = v___x_3143_;
goto v___jp_3138_;
}
else
{
lean_object* v_a_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3161_; 
v_a_3154_ = lean_ctor_get(v___x_3153_, 0);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_3153_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3156_ = v___x_3153_;
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_a_3154_);
lean_dec(v___x_3153_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v___x_3159_; 
if (v_isShared_3157_ == 0)
{
v___x_3159_ = v___x_3156_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v_a_3154_);
v___x_3159_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
return v___x_3159_;
}
}
}
}
else
{
v_a_3139_ = v_b_3134_;
goto v___jp_3138_;
}
}
else
{
lean_object* v_a_3162_; lean_object* v___x_3164_; uint8_t v_isShared_3165_; uint8_t v_isSharedCheck_3169_; 
v_a_3162_ = lean_ctor_get(v___x_3148_, 0);
v_isSharedCheck_3169_ = !lean_is_exclusive(v___x_3148_);
if (v_isSharedCheck_3169_ == 0)
{
v___x_3164_ = v___x_3148_;
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
else
{
lean_inc(v_a_3162_);
lean_dec(v___x_3148_);
v___x_3164_ = lean_box(0);
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
v_resetjp_3163_:
{
lean_object* v___x_3167_; 
if (v_isShared_3165_ == 0)
{
v___x_3167_ = v___x_3164_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v_a_3162_);
v___x_3167_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
return v___x_3167_;
}
}
}
}
v___jp_3138_:
{
size_t v___x_3140_; size_t v___x_3141_; 
v___x_3140_ = ((size_t)1ULL);
v___x_3141_ = lean_usize_add(v_i_3133_, v___x_3140_);
v_i_3133_ = v___x_3141_;
v_b_3134_ = v_a_3139_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg___boxed(lean_object* v_as_3170_, lean_object* v_sz_3171_, lean_object* v_i_3172_, lean_object* v_b_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_){
_start:
{
size_t v_sz_boxed_3177_; size_t v_i_boxed_3178_; uint8_t v_b_boxed_3179_; lean_object* v_res_3180_; 
v_sz_boxed_3177_ = lean_unbox_usize(v_sz_3171_);
lean_dec(v_sz_3171_);
v_i_boxed_3178_ = lean_unbox_usize(v_i_3172_);
lean_dec(v_i_3172_);
v_b_boxed_3179_ = lean_unbox(v_b_3173_);
v_res_3180_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg(v_as_3170_, v_sz_boxed_3177_, v_i_boxed_3178_, v_b_boxed_3179_, v___y_3174_, v___y_3175_);
lean_dec(v___y_3175_);
lean_dec_ref(v___y_3174_);
lean_dec_ref(v_as_3170_);
return v_res_3180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop(lean_object* v_params_3181_, lean_object* v_a_3182_, lean_object* v_a_3183_, lean_object* v_a_3184_, lean_object* v_a_3185_, lean_object* v_a_3186_, lean_object* v_a_3187_){
_start:
{
uint8_t v_ret_3189_; size_t v_sz_3190_; size_t v___x_3191_; lean_object* v___x_3192_; 
v_ret_3189_ = 0;
v_sz_3190_ = lean_array_size(v_params_3181_);
v___x_3191_ = ((size_t)0ULL);
v___x_3192_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg(v_params_3181_, v_sz_3190_, v___x_3191_, v_ret_3189_, v_a_3182_, v_a_3183_);
return v___x_3192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop___boxed(lean_object* v_params_3193_, lean_object* v_a_3194_, lean_object* v_a_3195_, lean_object* v_a_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_){
_start:
{
lean_object* v_res_3201_; 
v_res_3201_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop(v_params_3193_, v_a_3194_, v_a_3195_, v_a_3196_, v_a_3197_, v_a_3198_, v_a_3199_);
lean_dec(v_a_3199_);
lean_dec_ref(v_a_3198_);
lean_dec(v_a_3197_);
lean_dec_ref(v_a_3196_);
lean_dec(v_a_3195_);
lean_dec_ref(v_a_3194_);
lean_dec_ref(v_params_3193_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0(lean_object* v_as_3202_, size_t v_sz_3203_, size_t v_i_3204_, uint8_t v_b_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_){
_start:
{
lean_object* v___x_3213_; 
v___x_3213_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___redArg(v_as_3202_, v_sz_3203_, v_i_3204_, v_b_3205_, v___y_3206_, v___y_3207_);
return v___x_3213_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0___boxed(lean_object* v_as_3214_, lean_object* v_sz_3215_, lean_object* v_i_3216_, lean_object* v_b_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_){
_start:
{
size_t v_sz_boxed_3225_; size_t v_i_boxed_3226_; uint8_t v_b_boxed_3227_; lean_object* v_res_3228_; 
v_sz_boxed_3225_ = lean_unbox_usize(v_sz_3215_);
lean_dec(v_sz_3215_);
v_i_boxed_3226_ = lean_unbox_usize(v_i_3216_);
lean_dec(v_i_3216_);
v_b_boxed_3227_ = lean_unbox(v_b_3217_);
v_res_3228_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop_spec__0(v_as_3214_, v_sz_boxed_3225_, v_i_boxed_3226_, v_b_boxed_3227_, v___y_3218_, v___y_3219_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_);
lean_dec(v___y_3223_);
lean_dec_ref(v___y_3222_);
lean_dec(v___y_3221_);
lean_dec_ref(v___y_3220_);
lean_dec(v___y_3219_);
lean_dec_ref(v___y_3218_);
lean_dec_ref(v_as_3214_);
return v_res_3228_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(lean_object* v_as_3229_, size_t v_i_3230_, size_t v_stop_3231_, lean_object* v_b_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_){
_start:
{
uint8_t v___x_3236_; 
v___x_3236_ = lean_usize_dec_eq(v_i_3230_, v_stop_3231_);
if (v___x_3236_ == 0)
{
lean_object* v___x_3237_; lean_object* v_fvarId_3238_; lean_object* v___x_3239_; 
v___x_3237_ = lean_array_uget_borrowed(v_as_3229_, v_i_3230_);
v_fvarId_3238_ = lean_ctor_get(v___x_3237_, 0);
lean_inc(v_fvarId_3238_);
v___x_3239_ = l_Lean_Compiler_LCNF_UnreachableBranches_resetVarAssignment___redArg(v_fvarId_3238_, v___y_3233_, v___y_3234_);
if (lean_obj_tag(v___x_3239_) == 0)
{
lean_object* v_a_3240_; size_t v___x_3241_; size_t v___x_3242_; 
v_a_3240_ = lean_ctor_get(v___x_3239_, 0);
lean_inc(v_a_3240_);
lean_dec_ref_known(v___x_3239_, 1);
v___x_3241_ = ((size_t)1ULL);
v___x_3242_ = lean_usize_add(v_i_3230_, v___x_3241_);
v_i_3230_ = v___x_3242_;
v_b_3232_ = v_a_3240_;
goto _start;
}
else
{
return v___x_3239_;
}
}
else
{
lean_object* v___x_3244_; 
v___x_3244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3244_, 0, v_b_3232_);
return v___x_3244_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg___boxed(lean_object* v_as_3245_, lean_object* v_i_3246_, lean_object* v_stop_3247_, lean_object* v_b_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_){
_start:
{
size_t v_i_boxed_3252_; size_t v_stop_boxed_3253_; lean_object* v_res_3254_; 
v_i_boxed_3252_ = lean_unbox_usize(v_i_3246_);
lean_dec(v_i_3246_);
v_stop_boxed_3253_ = lean_unbox_usize(v_stop_3247_);
lean_dec(v_stop_3247_);
v_res_3254_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(v_as_3245_, v_i_boxed_3252_, v_stop_boxed_3253_, v_b_3248_, v___y_3249_, v___y_3250_);
lean_dec(v___y_3250_);
lean_dec_ref(v___y_3249_);
lean_dec_ref(v_as_3245_);
return v_res_3254_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(lean_object* v_x_3255_, lean_object* v_a_3256_, lean_object* v_a_3257_, lean_object* v_a_3258_, lean_object* v_a_3259_, lean_object* v_a_3260_, lean_object* v_a_3261_){
_start:
{
lean_object* v_decl_3264_; lean_object* v_k_3265_; lean_object* v___y_3266_; lean_object* v___y_3267_; lean_object* v___y_3268_; lean_object* v___y_3269_; lean_object* v___y_3270_; lean_object* v___y_3271_; 
switch(lean_obj_tag(v_x_3255_))
{
case 0:
{
lean_object* v_k_3282_; 
v_k_3282_ = lean_ctor_get(v_x_3255_, 1);
lean_inc_ref(v_k_3282_);
lean_dec_ref_known(v_x_3255_, 2);
v_x_3255_ = v_k_3282_;
goto _start;
}
case 3:
{
lean_object* v___x_3284_; lean_object* v___x_3285_; 
lean_dec_ref_known(v_x_3255_, 2);
v___x_3284_ = lean_box(0);
v___x_3285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3285_, 0, v___x_3284_);
return v___x_3285_;
}
case 4:
{
lean_object* v_cases_3286_; lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3301_; 
v_cases_3286_ = lean_ctor_get(v_x_3255_, 0);
v_isSharedCheck_3301_ = !lean_is_exclusive(v_x_3255_);
if (v_isSharedCheck_3301_ == 0)
{
v___x_3288_ = v_x_3255_;
v_isShared_3289_ = v_isSharedCheck_3301_;
goto v_resetjp_3287_;
}
else
{
lean_inc(v_cases_3286_);
lean_dec(v_x_3255_);
v___x_3288_ = lean_box(0);
v_isShared_3289_ = v_isSharedCheck_3301_;
goto v_resetjp_3287_;
}
v_resetjp_3287_:
{
lean_object* v_alts_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; uint8_t v___x_3294_; 
v_alts_3290_ = lean_ctor_get(v_cases_3286_, 3);
lean_inc_ref(v_alts_3290_);
lean_dec_ref(v_cases_3286_);
v___x_3291_ = lean_unsigned_to_nat(0u);
v___x_3292_ = lean_array_get_size(v_alts_3290_);
v___x_3293_ = lean_box(0);
v___x_3294_ = lean_nat_dec_lt(v___x_3291_, v___x_3292_);
if (v___x_3294_ == 0)
{
lean_object* v___x_3296_; 
lean_dec_ref(v_alts_3290_);
if (v_isShared_3289_ == 0)
{
lean_ctor_set_tag(v___x_3288_, 0);
lean_ctor_set(v___x_3288_, 0, v___x_3293_);
v___x_3296_ = v___x_3288_;
goto v_reusejp_3295_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v___x_3293_);
v___x_3296_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3295_;
}
v_reusejp_3295_:
{
return v___x_3296_;
}
}
else
{
size_t v___x_3298_; size_t v___x_3299_; lean_object* v___x_3300_; 
lean_del_object(v___x_3288_);
v___x_3298_ = ((size_t)0ULL);
v___x_3299_ = lean_usize_of_nat(v___x_3292_);
v___x_3300_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1(v_alts_3290_, v___x_3298_, v___x_3299_, v___x_3293_, v_a_3256_, v_a_3257_, v_a_3258_, v_a_3259_, v_a_3260_, v_a_3261_);
lean_dec_ref(v_alts_3290_);
return v___x_3300_;
}
}
}
case 5:
{
lean_object* v___x_3303_; uint8_t v_isShared_3304_; uint8_t v_isSharedCheck_3309_; 
v_isSharedCheck_3309_ = !lean_is_exclusive(v_x_3255_);
if (v_isSharedCheck_3309_ == 0)
{
lean_object* v_unused_3310_; 
v_unused_3310_ = lean_ctor_get(v_x_3255_, 0);
lean_dec(v_unused_3310_);
v___x_3303_ = v_x_3255_;
v_isShared_3304_ = v_isSharedCheck_3309_;
goto v_resetjp_3302_;
}
else
{
lean_dec(v_x_3255_);
v___x_3303_ = lean_box(0);
v_isShared_3304_ = v_isSharedCheck_3309_;
goto v_resetjp_3302_;
}
v_resetjp_3302_:
{
lean_object* v___x_3305_; lean_object* v___x_3307_; 
v___x_3305_ = lean_box(0);
if (v_isShared_3304_ == 0)
{
lean_ctor_set_tag(v___x_3303_, 0);
lean_ctor_set(v___x_3303_, 0, v___x_3305_);
v___x_3307_ = v___x_3303_;
goto v_reusejp_3306_;
}
else
{
lean_object* v_reuseFailAlloc_3308_; 
v_reuseFailAlloc_3308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3308_, 0, v___x_3305_);
v___x_3307_ = v_reuseFailAlloc_3308_;
goto v_reusejp_3306_;
}
v_reusejp_3306_:
{
return v___x_3307_;
}
}
}
case 6:
{
lean_object* v___x_3312_; uint8_t v_isShared_3313_; uint8_t v_isSharedCheck_3318_; 
v_isSharedCheck_3318_ = !lean_is_exclusive(v_x_3255_);
if (v_isSharedCheck_3318_ == 0)
{
lean_object* v_unused_3319_; 
v_unused_3319_ = lean_ctor_get(v_x_3255_, 0);
lean_dec(v_unused_3319_);
v___x_3312_ = v_x_3255_;
v_isShared_3313_ = v_isSharedCheck_3318_;
goto v_resetjp_3311_;
}
else
{
lean_dec(v_x_3255_);
v___x_3312_ = lean_box(0);
v_isShared_3313_ = v_isSharedCheck_3318_;
goto v_resetjp_3311_;
}
v_resetjp_3311_:
{
lean_object* v___x_3314_; lean_object* v___x_3316_; 
v___x_3314_ = lean_box(0);
if (v_isShared_3313_ == 0)
{
lean_ctor_set_tag(v___x_3312_, 0);
lean_ctor_set(v___x_3312_, 0, v___x_3314_);
v___x_3316_ = v___x_3312_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v___x_3314_);
v___x_3316_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
return v___x_3316_;
}
}
}
default: 
{
lean_object* v_decl_3320_; lean_object* v_k_3321_; 
v_decl_3320_ = lean_ctor_get(v_x_3255_, 0);
lean_inc_ref(v_decl_3320_);
v_k_3321_ = lean_ctor_get(v_x_3255_, 1);
lean_inc_ref(v_k_3321_);
lean_dec_ref(v_x_3255_);
v_decl_3264_ = v_decl_3320_;
v_k_3265_ = v_k_3321_;
v___y_3266_ = v_a_3256_;
v___y_3267_ = v_a_3257_;
v___y_3268_ = v_a_3258_;
v___y_3269_ = v_a_3259_;
v___y_3270_ = v_a_3260_;
v___y_3271_ = v_a_3261_;
goto v___jp_3263_;
}
}
v___jp_3263_:
{
lean_object* v_params_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; uint8_t v___x_3275_; 
v_params_3272_ = lean_ctor_get(v_decl_3264_, 2);
lean_inc_ref(v_params_3272_);
lean_dec_ref(v_decl_3264_);
v___x_3273_ = lean_unsigned_to_nat(0u);
v___x_3274_ = lean_array_get_size(v_params_3272_);
v___x_3275_ = lean_nat_dec_lt(v___x_3273_, v___x_3274_);
if (v___x_3275_ == 0)
{
lean_dec_ref(v_params_3272_);
v_x_3255_ = v_k_3265_;
v_a_3256_ = v___y_3266_;
v_a_3257_ = v___y_3267_;
v_a_3258_ = v___y_3268_;
v_a_3259_ = v___y_3269_;
v_a_3260_ = v___y_3270_;
v_a_3261_ = v___y_3271_;
goto _start;
}
else
{
lean_object* v___x_3277_; size_t v___x_3278_; size_t v___x_3279_; lean_object* v___x_3280_; 
v___x_3277_ = lean_box(0);
v___x_3278_ = ((size_t)0ULL);
v___x_3279_ = lean_usize_of_nat(v___x_3274_);
v___x_3280_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(v_params_3272_, v___x_3278_, v___x_3279_, v___x_3277_, v___y_3266_, v___y_3267_);
lean_dec_ref(v_params_3272_);
if (lean_obj_tag(v___x_3280_) == 0)
{
lean_dec_ref_known(v___x_3280_, 1);
v_x_3255_ = v_k_3265_;
v_a_3256_ = v___y_3266_;
v_a_3257_ = v___y_3267_;
v_a_3258_ = v___y_3268_;
v_a_3259_ = v___y_3269_;
v_a_3260_ = v___y_3270_;
v_a_3261_ = v___y_3271_;
goto _start;
}
else
{
lean_dec_ref(v_k_3265_);
return v___x_3280_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1(lean_object* v_as_3322_, size_t v_i_3323_, size_t v_stop_3324_, lean_object* v_b_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_){
_start:
{
lean_object* v___y_3334_; uint8_t v___x_3340_; 
v___x_3340_ = lean_usize_dec_eq(v_i_3323_, v_stop_3324_);
if (v___x_3340_ == 0)
{
lean_object* v___x_3341_; 
v___x_3341_ = lean_array_uget_borrowed(v_as_3322_, v_i_3323_);
switch(lean_obj_tag(v___x_3341_))
{
case 0:
{
lean_object* v_code_3342_; 
v_code_3342_ = lean_ctor_get(v___x_3341_, 2);
lean_inc_ref(v_code_3342_);
v___y_3334_ = v_code_3342_;
goto v___jp_3333_;
}
case 1:
{
lean_object* v_code_3343_; 
v_code_3343_ = lean_ctor_get(v___x_3341_, 1);
lean_inc_ref(v_code_3343_);
v___y_3334_ = v_code_3343_;
goto v___jp_3333_;
}
default: 
{
lean_object* v_code_3344_; 
v_code_3344_ = lean_ctor_get(v___x_3341_, 0);
lean_inc_ref(v_code_3344_);
v___y_3334_ = v_code_3344_;
goto v___jp_3333_;
}
}
}
else
{
lean_object* v___x_3345_; 
v___x_3345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3345_, 0, v_b_3325_);
return v___x_3345_;
}
v___jp_3333_:
{
lean_object* v___x_3335_; 
v___x_3335_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(v___y_3334_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_);
if (lean_obj_tag(v___x_3335_) == 0)
{
lean_object* v_a_3336_; size_t v___x_3337_; size_t v___x_3338_; 
v_a_3336_ = lean_ctor_get(v___x_3335_, 0);
lean_inc(v_a_3336_);
lean_dec_ref_known(v___x_3335_, 1);
v___x_3337_ = ((size_t)1ULL);
v___x_3338_ = lean_usize_add(v_i_3323_, v___x_3337_);
v_i_3323_ = v___x_3338_;
v_b_3325_ = v_a_3336_;
goto _start;
}
else
{
return v___x_3335_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1___boxed(lean_object* v_as_3346_, lean_object* v_i_3347_, lean_object* v_stop_3348_, lean_object* v_b_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_){
_start:
{
size_t v_i_boxed_3357_; size_t v_stop_boxed_3358_; lean_object* v_res_3359_; 
v_i_boxed_3357_ = lean_unbox_usize(v_i_3347_);
lean_dec(v_i_3347_);
v_stop_boxed_3358_ = lean_unbox_usize(v_stop_3348_);
lean_dec(v_stop_3348_);
v_res_3359_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__1(v_as_3346_, v_i_boxed_3357_, v_stop_boxed_3358_, v_b_3349_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_);
lean_dec(v___y_3355_);
lean_dec_ref(v___y_3354_);
lean_dec(v___y_3353_);
lean_dec_ref(v___y_3352_);
lean_dec(v___y_3351_);
lean_dec_ref(v___y_3350_);
lean_dec_ref(v_as_3346_);
return v_res_3359_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams___boxed(lean_object* v_x_3360_, lean_object* v_a_3361_, lean_object* v_a_3362_, lean_object* v_a_3363_, lean_object* v_a_3364_, lean_object* v_a_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_){
_start:
{
lean_object* v_res_3368_; 
v_res_3368_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(v_x_3360_, v_a_3361_, v_a_3362_, v_a_3363_, v_a_3364_, v_a_3365_, v_a_3366_);
lean_dec(v_a_3366_);
lean_dec_ref(v_a_3365_);
lean_dec(v_a_3364_);
lean_dec_ref(v_a_3363_);
lean_dec(v_a_3362_);
lean_dec_ref(v_a_3361_);
return v_res_3368_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0(lean_object* v_as_3369_, size_t v_i_3370_, size_t v_stop_3371_, lean_object* v_b_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_){
_start:
{
lean_object* v___x_3380_; 
v___x_3380_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___redArg(v_as_3369_, v_i_3370_, v_stop_3371_, v_b_3372_, v___y_3373_, v___y_3374_);
return v___x_3380_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0___boxed(lean_object* v_as_3381_, lean_object* v_i_3382_, lean_object* v_stop_3383_, lean_object* v_b_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_){
_start:
{
size_t v_i_boxed_3392_; size_t v_stop_boxed_3393_; lean_object* v_res_3394_; 
v_i_boxed_3392_ = lean_unbox_usize(v_i_3382_);
lean_dec(v_i_3382_);
v_stop_boxed_3393_ = lean_unbox_usize(v_stop_3383_);
lean_dec(v_stop_3383_);
v_res_3394_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams_spec__0(v_as_3381_, v_i_boxed_3392_, v_stop_boxed_3393_, v_b_3384_, v___y_3385_, v___y_3386_, v___y_3387_, v___y_3388_, v___y_3389_, v___y_3390_);
lean_dec(v___y_3390_);
lean_dec_ref(v___y_3389_);
lean_dec(v___y_3388_);
lean_dec_ref(v___y_3387_);
lean_dec(v___y_3386_);
lean_dec_ref(v___y_3385_);
lean_dec_ref(v_as_3381_);
return v_res_3394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0___redArg(lean_object* v_a_3395_, lean_object* v_b_3396_){
_start:
{
lean_object* v_array_3397_; lean_object* v_start_3398_; lean_object* v_stop_3399_; lean_object* v___x_3401_; uint8_t v_isShared_3402_; uint8_t v_isSharedCheck_3412_; 
v_array_3397_ = lean_ctor_get(v_a_3395_, 0);
v_start_3398_ = lean_ctor_get(v_a_3395_, 1);
v_stop_3399_ = lean_ctor_get(v_a_3395_, 2);
v_isSharedCheck_3412_ = !lean_is_exclusive(v_a_3395_);
if (v_isSharedCheck_3412_ == 0)
{
v___x_3401_ = v_a_3395_;
v_isShared_3402_ = v_isSharedCheck_3412_;
goto v_resetjp_3400_;
}
else
{
lean_inc(v_stop_3399_);
lean_inc(v_start_3398_);
lean_inc(v_array_3397_);
lean_dec(v_a_3395_);
v___x_3401_ = lean_box(0);
v_isShared_3402_ = v_isSharedCheck_3412_;
goto v_resetjp_3400_;
}
v_resetjp_3400_:
{
uint8_t v___x_3403_; 
v___x_3403_ = lean_nat_dec_lt(v_start_3398_, v_stop_3399_);
if (v___x_3403_ == 0)
{
lean_del_object(v___x_3401_);
lean_dec(v_stop_3399_);
lean_dec(v_start_3398_);
lean_dec_ref(v_array_3397_);
return v_b_3396_;
}
else
{
lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3407_; 
v___x_3404_ = lean_unsigned_to_nat(1u);
v___x_3405_ = lean_nat_add(v_start_3398_, v___x_3404_);
lean_inc_ref(v_array_3397_);
if (v_isShared_3402_ == 0)
{
lean_ctor_set(v___x_3401_, 1, v___x_3405_);
v___x_3407_ = v___x_3401_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v_array_3397_);
lean_ctor_set(v_reuseFailAlloc_3411_, 1, v___x_3405_);
lean_ctor_set(v_reuseFailAlloc_3411_, 2, v_stop_3399_);
v___x_3407_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
lean_object* v___x_3408_; lean_object* v___x_3409_; 
v___x_3408_ = lean_array_fget(v_array_3397_, v_start_3398_);
lean_dec(v_start_3398_);
lean_dec_ref(v_array_3397_);
v___x_3409_ = lean_array_push(v_b_3396_, v___x_3408_);
v_a_3395_ = v___x_3407_;
v_b_3396_ = v___x_3409_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg(size_t v_sz_3413_, size_t v_i_3414_, lean_object* v_bs_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_){
_start:
{
uint8_t v___x_3419_; 
v___x_3419_ = lean_usize_dec_lt(v_i_3414_, v_sz_3413_);
if (v___x_3419_ == 0)
{
lean_object* v___x_3420_; 
v___x_3420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3420_, 0, v_bs_3415_);
return v___x_3420_;
}
else
{
lean_object* v_v_3421_; lean_object* v___x_3422_; lean_object* v_bs_x27_3423_; lean_object* v___x_3424_; 
v_v_3421_ = lean_array_uget(v_bs_3415_, v_i_3414_);
v___x_3422_ = lean_unsigned_to_nat(0u);
v_bs_x27_3423_ = lean_array_uset(v_bs_3415_, v_i_3414_, v___x_3422_);
v___x_3424_ = l_Lean_Compiler_LCNF_UnreachableBranches_findArgValue___redArg(v_v_3421_, v___y_3416_, v___y_3417_);
lean_dec(v_v_3421_);
if (lean_obj_tag(v___x_3424_) == 0)
{
lean_object* v_a_3425_; size_t v___x_3426_; size_t v___x_3427_; lean_object* v___x_3428_; 
v_a_3425_ = lean_ctor_get(v___x_3424_, 0);
lean_inc(v_a_3425_);
lean_dec_ref_known(v___x_3424_, 1);
v___x_3426_ = ((size_t)1ULL);
v___x_3427_ = lean_usize_add(v_i_3414_, v___x_3426_);
v___x_3428_ = lean_array_uset(v_bs_x27_3423_, v_i_3414_, v_a_3425_);
v_i_3414_ = v___x_3427_;
v_bs_3415_ = v___x_3428_;
goto _start;
}
else
{
lean_object* v_a_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3437_; 
lean_dec_ref(v_bs_x27_3423_);
v_a_3430_ = lean_ctor_get(v___x_3424_, 0);
v_isSharedCheck_3437_ = !lean_is_exclusive(v___x_3424_);
if (v_isSharedCheck_3437_ == 0)
{
v___x_3432_ = v___x_3424_;
v_isShared_3433_ = v_isSharedCheck_3437_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_a_3430_);
lean_dec(v___x_3424_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3437_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
lean_object* v___x_3435_; 
if (v_isShared_3433_ == 0)
{
v___x_3435_ = v___x_3432_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v_a_3430_);
v___x_3435_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
return v___x_3435_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg___boxed(lean_object* v_sz_3438_, lean_object* v_i_3439_, lean_object* v_bs_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_){
_start:
{
size_t v_sz_boxed_3444_; size_t v_i_boxed_3445_; lean_object* v_res_3446_; 
v_sz_boxed_3444_ = lean_unbox_usize(v_sz_3438_);
lean_dec(v_sz_3438_);
v_i_boxed_3445_ = lean_unbox_usize(v_i_3439_);
lean_dec(v_i_3439_);
v_res_3446_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg(v_sz_boxed_3444_, v_i_boxed_3445_, v_bs_3440_, v___y_3441_, v___y_3442_);
lean_dec(v___y_3442_);
lean_dec_ref(v___y_3441_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(lean_object* v_as_3447_, size_t v_i_3448_, size_t v_stop_3449_, lean_object* v_b_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_){
_start:
{
uint8_t v___x_3455_; 
v___x_3455_ = lean_usize_dec_eq(v_i_3448_, v_stop_3449_);
if (v___x_3455_ == 0)
{
lean_object* v___x_3456_; lean_object* v_fvarId_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; 
v___x_3456_ = lean_array_uget_borrowed(v_as_3447_, v_i_3448_);
v_fvarId_3457_ = lean_ctor_get(v___x_3456_, 0);
v___x_3458_ = lean_box(1);
lean_inc(v_fvarId_3457_);
v___x_3459_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_fvarId_3457_, v___x_3458_, v___y_3451_, v___y_3452_, v___y_3453_);
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_object* v_a_3460_; size_t v___x_3461_; size_t v___x_3462_; 
v_a_3460_ = lean_ctor_get(v___x_3459_, 0);
lean_inc(v_a_3460_);
lean_dec_ref_known(v___x_3459_, 1);
v___x_3461_ = ((size_t)1ULL);
v___x_3462_ = lean_usize_add(v_i_3448_, v___x_3461_);
v_i_3448_ = v___x_3462_;
v_b_3450_ = v_a_3460_;
goto _start;
}
else
{
return v___x_3459_;
}
}
else
{
lean_object* v___x_3464_; 
v___x_3464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3464_, 0, v_b_3450_);
return v___x_3464_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg___boxed(lean_object* v_as_3465_, lean_object* v_i_3466_, lean_object* v_stop_3467_, lean_object* v_b_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_){
_start:
{
size_t v_i_boxed_3473_; size_t v_stop_boxed_3474_; lean_object* v_res_3475_; 
v_i_boxed_3473_ = lean_unbox_usize(v_i_3466_);
lean_dec(v_i_3466_);
v_stop_boxed_3474_ = lean_unbox_usize(v_stop_3467_);
lean_dec(v_stop_3467_);
v_res_3475_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(v_as_3465_, v_i_boxed_3473_, v_stop_boxed_3474_, v_b_3468_, v___y_3469_, v___y_3470_, v___y_3471_);
lean_dec(v___y_3471_);
lean_dec(v___y_3470_);
lean_dec_ref(v___y_3469_);
lean_dec_ref(v_as_3465_);
return v_res_3475_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(lean_object* v_as_3476_, size_t v_i_3477_, size_t v_stop_3478_, lean_object* v_b_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_){
_start:
{
uint8_t v___x_3484_; 
v___x_3484_ = lean_usize_dec_eq(v_i_3477_, v_stop_3478_);
if (v___x_3484_ == 0)
{
lean_object* v___x_3485_; lean_object* v_fst_3486_; lean_object* v_snd_3487_; lean_object* v_fvarId_3488_; lean_object* v___x_3489_; 
v___x_3485_ = lean_array_uget_borrowed(v_as_3476_, v_i_3477_);
v_fst_3486_ = lean_ctor_get(v___x_3485_, 0);
v_snd_3487_ = lean_ctor_get(v___x_3485_, 1);
v_fvarId_3488_ = lean_ctor_get(v_fst_3486_, 0);
lean_inc(v_snd_3487_);
lean_inc(v_fvarId_3488_);
v___x_3489_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_fvarId_3488_, v_snd_3487_, v___y_3480_, v___y_3481_, v___y_3482_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_object* v_a_3490_; size_t v___x_3491_; size_t v___x_3492_; 
v_a_3490_ = lean_ctor_get(v___x_3489_, 0);
lean_inc(v_a_3490_);
lean_dec_ref_known(v___x_3489_, 1);
v___x_3491_ = ((size_t)1ULL);
v___x_3492_ = lean_usize_add(v_i_3477_, v___x_3491_);
v_i_3477_ = v___x_3492_;
v_b_3479_ = v_a_3490_;
goto _start;
}
else
{
return v___x_3489_;
}
}
else
{
lean_object* v___x_3494_; 
v___x_3494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3494_, 0, v_b_3479_);
return v___x_3494_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg___boxed(lean_object* v_as_3495_, lean_object* v_i_3496_, lean_object* v_stop_3497_, lean_object* v_b_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_){
_start:
{
size_t v_i_boxed_3503_; size_t v_stop_boxed_3504_; lean_object* v_res_3505_; 
v_i_boxed_3503_ = lean_unbox_usize(v_i_3496_);
lean_dec(v_i_3496_);
v_stop_boxed_3504_ = lean_unbox_usize(v_stop_3497_);
lean_dec(v_stop_3497_);
v_res_3505_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(v_as_3495_, v_i_boxed_3503_, v_stop_boxed_3504_, v_b_3498_, v___y_3499_, v___y_3500_, v___y_3501_);
lean_dec(v___y_3501_);
lean_dec(v___y_3500_);
lean_dec_ref(v___y_3499_);
lean_dec_ref(v_as_3495_);
return v_res_3505_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(lean_object* v_as_3508_, size_t v_i_3509_, size_t v_stop_3510_, lean_object* v_b_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_){
_start:
{
uint8_t v___x_3519_; 
v___x_3519_ = lean_usize_dec_eq(v_i_3509_, v_stop_3510_);
if (v___x_3519_ == 0)
{
lean_object* v___x_3520_; lean_object* v___x_3521_; 
v___x_3520_ = lean_array_uget_borrowed(v_as_3508_, v_i_3509_);
v___x_3521_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg(v___x_3520_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
if (lean_obj_tag(v___x_3521_) == 0)
{
lean_object* v_a_3522_; size_t v___x_3523_; size_t v___x_3524_; 
v_a_3522_ = lean_ctor_get(v___x_3521_, 0);
lean_inc(v_a_3522_);
lean_dec_ref_known(v___x_3521_, 1);
v___x_3523_ = ((size_t)1ULL);
v___x_3524_ = lean_usize_add(v_i_3509_, v___x_3523_);
v_i_3509_ = v___x_3524_;
v_b_3511_ = v_a_3522_;
goto _start;
}
else
{
return v___x_3521_;
}
}
else
{
lean_object* v___x_3526_; 
v___x_3526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3526_, 0, v_b_3511_);
return v___x_3526_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue(lean_object* v_letVal_3527_, lean_object* v_a_3528_, lean_object* v_a_3529_, lean_object* v_a_3530_, lean_object* v_a_3531_, lean_object* v_a_3532_, lean_object* v_a_3533_){
_start:
{
switch(lean_obj_tag(v_letVal_3527_))
{
case 0:
{
lean_object* v_value_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3549_; 
v_value_3541_ = lean_ctor_get(v_letVal_3527_, 0);
v_isSharedCheck_3549_ = !lean_is_exclusive(v_letVal_3527_);
if (v_isSharedCheck_3549_ == 0)
{
v___x_3543_ = v_letVal_3527_;
v_isShared_3544_ = v_isSharedCheck_3549_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_value_3541_);
lean_dec(v_letVal_3527_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3549_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
lean_object* v___x_3545_; lean_object* v___x_3547_; 
v___x_3545_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_ofLCNFLit(v_value_3541_);
lean_dec_ref(v_value_3541_);
if (v_isShared_3544_ == 0)
{
lean_ctor_set(v___x_3543_, 0, v___x_3545_);
v___x_3547_ = v___x_3543_;
goto v_reusejp_3546_;
}
else
{
lean_object* v_reuseFailAlloc_3548_; 
v_reuseFailAlloc_3548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3548_, 0, v___x_3545_);
v___x_3547_ = v_reuseFailAlloc_3548_;
goto v_reusejp_3546_;
}
v_reusejp_3546_:
{
return v___x_3547_;
}
}
}
case 1:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; 
v___x_3550_ = lean_box(1);
v___x_3551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3551_, 0, v___x_3550_);
return v___x_3551_;
}
case 2:
{
lean_object* v_idx_3552_; lean_object* v_struct_3553_; lean_object* v___x_3554_; lean_object* v_env_3555_; lean_object* v___x_3556_; 
v_idx_3552_ = lean_ctor_get(v_letVal_3527_, 1);
lean_inc(v_idx_3552_);
v_struct_3553_ = lean_ctor_get(v_letVal_3527_, 2);
lean_inc(v_struct_3553_);
lean_dec_ref_known(v_letVal_3527_, 3);
v___x_3554_ = lean_st_ref_get(v_a_3533_);
v_env_3555_ = lean_ctor_get(v___x_3554_, 0);
lean_inc_ref(v_env_3555_);
lean_dec(v___x_3554_);
v___x_3556_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_struct_3553_, v_a_3528_, v_a_3529_);
lean_dec(v_struct_3553_);
if (lean_obj_tag(v___x_3556_) == 0)
{
lean_object* v_a_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3565_; 
v_a_3557_ = lean_ctor_get(v___x_3556_, 0);
v_isSharedCheck_3565_ = !lean_is_exclusive(v___x_3556_);
if (v_isSharedCheck_3565_ == 0)
{
v___x_3559_ = v___x_3556_;
v_isShared_3560_ = v_isSharedCheck_3565_;
goto v_resetjp_3558_;
}
else
{
lean_inc(v_a_3557_);
lean_dec(v___x_3556_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3565_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
lean_object* v___x_3561_; lean_object* v___x_3563_; 
v___x_3561_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_proj(v_env_3555_, v_a_3557_, v_idx_3552_);
lean_dec(v_idx_3552_);
lean_dec(v_a_3557_);
if (v_isShared_3560_ == 0)
{
lean_ctor_set(v___x_3559_, 0, v___x_3561_);
v___x_3563_ = v___x_3559_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v___x_3561_);
v___x_3563_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
return v___x_3563_;
}
}
}
else
{
lean_dec_ref(v_env_3555_);
lean_dec(v_idx_3552_);
return v___x_3556_;
}
}
case 3:
{
lean_object* v_declName_3566_; lean_object* v_args_3567_; lean_object* v___x_3568_; lean_object* v_env_3569_; lean_object* v___x_3570_; lean_object* v_numFields_3572_; lean_object* v_lower_3573_; lean_object* v_upper_3574_; lean_object* v___x_3602_; uint8_t v___x_3670_; 
v_declName_3566_ = lean_ctor_get(v_letVal_3527_, 0);
lean_inc(v_declName_3566_);
v_args_3567_ = lean_ctor_get(v_letVal_3527_, 2);
lean_inc_ref(v_args_3567_);
lean_dec_ref_known(v_letVal_3527_, 3);
v___x_3568_ = lean_st_ref_get(v_a_3533_);
v_env_3569_ = lean_ctor_get(v___x_3568_, 0);
lean_inc_ref(v_env_3569_);
lean_dec(v___x_3568_);
v___x_3570_ = lean_unsigned_to_nat(0u);
v___x_3602_ = lean_array_get_size(v_args_3567_);
v___x_3670_ = lean_nat_dec_lt(v___x_3570_, v___x_3602_);
if (v___x_3670_ == 0)
{
goto v___jp_3603_;
}
else
{
lean_object* v___x_3671_; size_t v___x_3672_; size_t v___x_3673_; lean_object* v___x_3674_; 
v___x_3671_ = lean_box(0);
v___x_3672_ = ((size_t)0ULL);
v___x_3673_ = lean_usize_of_nat(v___x_3602_);
v___x_3674_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_args_3567_, v___x_3672_, v___x_3673_, v___x_3671_, v_a_3528_, v_a_3529_, v_a_3530_, v_a_3531_, v_a_3532_, v_a_3533_);
if (lean_obj_tag(v___x_3674_) == 0)
{
lean_dec_ref_known(v___x_3674_, 1);
goto v___jp_3603_;
}
else
{
lean_object* v_a_3675_; lean_object* v___x_3677_; uint8_t v_isShared_3678_; uint8_t v_isSharedCheck_3682_; 
lean_dec_ref(v_env_3569_);
lean_dec_ref(v_args_3567_);
lean_dec(v_declName_3566_);
v_a_3675_ = lean_ctor_get(v___x_3674_, 0);
v_isSharedCheck_3682_ = !lean_is_exclusive(v___x_3674_);
if (v_isSharedCheck_3682_ == 0)
{
v___x_3677_ = v___x_3674_;
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
else
{
lean_inc(v_a_3675_);
lean_dec(v___x_3674_);
v___x_3677_ = lean_box(0);
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
v_resetjp_3676_:
{
lean_object* v___x_3680_; 
if (v_isShared_3678_ == 0)
{
v___x_3680_ = v___x_3677_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v_a_3675_);
v___x_3680_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
return v___x_3680_;
}
}
}
}
v___jp_3571_:
{
lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; uint8_t v___x_3579_; 
v___x_3575_ = l_Array_toSubarray___redArg(v_args_3567_, v_lower_3573_, v_upper_3574_);
v___x_3576_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___closed__0));
v___x_3577_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0___redArg(v___x_3575_, v___x_3576_);
v___x_3578_ = lean_array_get_size(v___x_3577_);
v___x_3579_ = lean_nat_dec_eq(v_numFields_3572_, v___x_3578_);
lean_dec(v_numFields_3572_);
if (v___x_3579_ == 0)
{
lean_object* v___x_3580_; lean_object* v___x_3581_; 
lean_dec_ref(v___x_3577_);
lean_dec(v_declName_3566_);
v___x_3580_ = lean_box(1);
v___x_3581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3581_, 0, v___x_3580_);
return v___x_3581_;
}
else
{
size_t v_sz_3582_; size_t v___x_3583_; lean_object* v___x_3584_; 
v_sz_3582_ = lean_array_size(v___x_3577_);
v___x_3583_ = ((size_t)0ULL);
v___x_3584_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg(v_sz_3582_, v___x_3583_, v___x_3577_, v_a_3528_, v_a_3529_);
if (lean_obj_tag(v___x_3584_) == 0)
{
lean_object* v_a_3585_; lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3593_; 
v_a_3585_ = lean_ctor_get(v___x_3584_, 0);
v_isSharedCheck_3593_ = !lean_is_exclusive(v___x_3584_);
if (v_isSharedCheck_3593_ == 0)
{
v___x_3587_ = v___x_3584_;
v_isShared_3588_ = v_isSharedCheck_3593_;
goto v_resetjp_3586_;
}
else
{
lean_inc(v_a_3585_);
lean_dec(v___x_3584_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3593_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
lean_object* v___x_3589_; lean_object* v___x_3591_; 
v___x_3589_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3589_, 0, v_declName_3566_);
lean_ctor_set(v___x_3589_, 1, v_a_3585_);
if (v_isShared_3588_ == 0)
{
lean_ctor_set(v___x_3587_, 0, v___x_3589_);
v___x_3591_ = v___x_3587_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v___x_3589_);
v___x_3591_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
return v___x_3591_;
}
}
}
else
{
lean_object* v_a_3594_; lean_object* v___x_3596_; uint8_t v_isShared_3597_; uint8_t v_isSharedCheck_3601_; 
lean_dec(v_declName_3566_);
v_a_3594_ = lean_ctor_get(v___x_3584_, 0);
v_isSharedCheck_3601_ = !lean_is_exclusive(v___x_3584_);
if (v_isSharedCheck_3601_ == 0)
{
v___x_3596_ = v___x_3584_;
v_isShared_3597_ = v_isSharedCheck_3601_;
goto v_resetjp_3595_;
}
else
{
lean_inc(v_a_3594_);
lean_dec(v___x_3584_);
v___x_3596_ = lean_box(0);
v_isShared_3597_ = v_isSharedCheck_3601_;
goto v_resetjp_3595_;
}
v_resetjp_3595_:
{
lean_object* v___x_3599_; 
if (v_isShared_3597_ == 0)
{
v___x_3599_ = v___x_3596_;
goto v_reusejp_3598_;
}
else
{
lean_object* v_reuseFailAlloc_3600_; 
v_reuseFailAlloc_3600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3600_, 0, v_a_3594_);
v___x_3599_ = v_reuseFailAlloc_3600_;
goto v_reusejp_3598_;
}
v_reusejp_3598_:
{
return v___x_3599_;
}
}
}
}
}
v___jp_3603_:
{
lean_object* v___x_3604_; 
v___x_3604_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_3530_);
if (lean_obj_tag(v___x_3604_) == 0)
{
lean_object* v_a_3605_; uint8_t v___x_3606_; lean_object* v___x_3607_; 
v_a_3605_ = lean_ctor_get(v___x_3604_, 0);
lean_inc(v_a_3605_);
lean_dec_ref_known(v___x_3604_, 1);
v___x_3606_ = lean_unbox(v_a_3605_);
lean_dec(v_a_3605_);
lean_inc(v_declName_3566_);
v___x_3607_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_3566_, v___x_3606_, v_a_3532_, v_a_3533_);
if (lean_obj_tag(v___x_3607_) == 0)
{
lean_object* v_a_3608_; lean_object* v___x_3610_; uint8_t v_isShared_3611_; uint8_t v_isSharedCheck_3653_; 
v_a_3608_ = lean_ctor_get(v___x_3607_, 0);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___x_3607_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3610_ = v___x_3607_;
v_isShared_3611_ = v_isSharedCheck_3653_;
goto v_resetjp_3609_;
}
else
{
lean_inc(v_a_3608_);
lean_dec(v___x_3607_);
v___x_3610_ = lean_box(0);
v_isShared_3611_ = v_isSharedCheck_3653_;
goto v_resetjp_3609_;
}
v_resetjp_3609_:
{
if (lean_obj_tag(v_a_3608_) == 1)
{
lean_object* v_val_3612_; lean_object* v___x_3613_; uint8_t v___x_3614_; 
lean_dec_ref(v_args_3567_);
v_val_3612_ = lean_ctor_get(v_a_3608_, 0);
lean_inc(v_val_3612_);
lean_dec_ref_known(v_a_3608_, 1);
v___x_3613_ = l_Lean_Compiler_LCNF_Decl_getArity___redArg(v_val_3612_);
lean_dec(v_val_3612_);
v___x_3614_ = lean_nat_dec_eq(v___x_3613_, v___x_3602_);
lean_dec(v___x_3613_);
if (v___x_3614_ == 0)
{
lean_object* v___x_3615_; lean_object* v___x_3617_; 
lean_dec_ref(v_env_3569_);
lean_dec(v_declName_3566_);
v___x_3615_ = lean_box(1);
if (v_isShared_3611_ == 0)
{
lean_ctor_set(v___x_3610_, 0, v___x_3615_);
v___x_3617_ = v___x_3610_;
goto v_reusejp_3616_;
}
else
{
lean_object* v_reuseFailAlloc_3618_; 
v_reuseFailAlloc_3618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3618_, 0, v___x_3615_);
v___x_3617_ = v_reuseFailAlloc_3618_;
goto v_reusejp_3616_;
}
v_reusejp_3616_:
{
return v___x_3617_;
}
}
else
{
lean_object* v___x_3619_; 
lean_inc(v_declName_3566_);
v___x_3619_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunctionSummary_x3f(v_env_3569_, v_declName_3566_);
if (lean_obj_tag(v___x_3619_) == 0)
{
lean_object* v___x_3620_; 
lean_del_object(v___x_3610_);
v___x_3620_ = l_Lean_Compiler_LCNF_UnreachableBranches_findFunVal_x3f___redArg(v_declName_3566_, v_a_3528_, v_a_3529_);
lean_dec(v_declName_3566_);
if (lean_obj_tag(v___x_3620_) == 0)
{
lean_object* v_a_3621_; lean_object* v___x_3623_; uint8_t v_isShared_3624_; uint8_t v_isSharedCheck_3633_; 
v_a_3621_ = lean_ctor_get(v___x_3620_, 0);
v_isSharedCheck_3633_ = !lean_is_exclusive(v___x_3620_);
if (v_isSharedCheck_3633_ == 0)
{
v___x_3623_ = v___x_3620_;
v_isShared_3624_ = v_isSharedCheck_3633_;
goto v_resetjp_3622_;
}
else
{
lean_inc(v_a_3621_);
lean_dec(v___x_3620_);
v___x_3623_ = lean_box(0);
v_isShared_3624_ = v_isSharedCheck_3633_;
goto v_resetjp_3622_;
}
v_resetjp_3622_:
{
if (lean_obj_tag(v_a_3621_) == 0)
{
lean_object* v___x_3625_; lean_object* v___x_3627_; 
v___x_3625_ = lean_box(1);
if (v_isShared_3624_ == 0)
{
lean_ctor_set(v___x_3623_, 0, v___x_3625_);
v___x_3627_ = v___x_3623_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3628_; 
v_reuseFailAlloc_3628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3628_, 0, v___x_3625_);
v___x_3627_ = v_reuseFailAlloc_3628_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
return v___x_3627_;
}
}
else
{
lean_object* v_val_3629_; lean_object* v___x_3631_; 
v_val_3629_ = lean_ctor_get(v_a_3621_, 0);
lean_inc(v_val_3629_);
lean_dec_ref_known(v_a_3621_, 1);
if (v_isShared_3624_ == 0)
{
lean_ctor_set(v___x_3623_, 0, v_val_3629_);
v___x_3631_ = v___x_3623_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v_val_3629_);
v___x_3631_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
return v___x_3631_;
}
}
}
}
else
{
lean_object* v_a_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3641_; 
v_a_3634_ = lean_ctor_get(v___x_3620_, 0);
v_isSharedCheck_3641_ = !lean_is_exclusive(v___x_3620_);
if (v_isSharedCheck_3641_ == 0)
{
v___x_3636_ = v___x_3620_;
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_a_3634_);
lean_dec(v___x_3620_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v___x_3639_; 
if (v_isShared_3637_ == 0)
{
v___x_3639_ = v___x_3636_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v_a_3634_);
v___x_3639_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
return v___x_3639_;
}
}
}
}
else
{
lean_object* v_val_3642_; lean_object* v___x_3644_; 
lean_dec(v_declName_3566_);
v_val_3642_ = lean_ctor_get(v___x_3619_, 0);
lean_inc(v_val_3642_);
lean_dec_ref_known(v___x_3619_, 1);
if (v_isShared_3611_ == 0)
{
lean_ctor_set(v___x_3610_, 0, v_val_3642_);
v___x_3644_ = v___x_3610_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3645_; 
v_reuseFailAlloc_3645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3645_, 0, v_val_3642_);
v___x_3644_ = v_reuseFailAlloc_3645_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
return v___x_3644_;
}
}
}
}
else
{
uint8_t v___x_3646_; lean_object* v___x_3647_; 
lean_del_object(v___x_3610_);
lean_dec(v_a_3608_);
v___x_3646_ = 0;
lean_inc(v_declName_3566_);
v___x_3647_ = l_Lean_Environment_find_x3f(v_env_3569_, v_declName_3566_, v___x_3646_);
if (lean_obj_tag(v___x_3647_) == 1)
{
lean_object* v_val_3648_; 
v_val_3648_ = lean_ctor_get(v___x_3647_, 0);
lean_inc(v_val_3648_);
lean_dec_ref_known(v___x_3647_, 1);
if (lean_obj_tag(v_val_3648_) == 6)
{
lean_object* v_val_3649_; lean_object* v_numParams_3650_; lean_object* v_numFields_3651_; uint8_t v___x_3652_; 
v_val_3649_ = lean_ctor_get(v_val_3648_, 0);
lean_inc_ref(v_val_3649_);
lean_dec_ref_known(v_val_3648_, 1);
v_numParams_3650_ = lean_ctor_get(v_val_3649_, 3);
lean_inc(v_numParams_3650_);
v_numFields_3651_ = lean_ctor_get(v_val_3649_, 4);
lean_inc(v_numFields_3651_);
lean_dec_ref(v_val_3649_);
v___x_3652_ = lean_nat_dec_le(v_numParams_3650_, v___x_3570_);
if (v___x_3652_ == 0)
{
v_numFields_3572_ = v_numFields_3651_;
v_lower_3573_ = v_numParams_3650_;
v_upper_3574_ = v___x_3602_;
goto v___jp_3571_;
}
else
{
lean_dec(v_numParams_3650_);
v_numFields_3572_ = v_numFields_3651_;
v_lower_3573_ = v___x_3570_;
v_upper_3574_ = v___x_3602_;
goto v___jp_3571_;
}
}
else
{
lean_dec(v_val_3648_);
lean_dec_ref(v_args_3567_);
lean_dec(v_declName_3566_);
goto v___jp_3535_;
}
}
else
{
lean_dec(v___x_3647_);
lean_dec_ref(v_args_3567_);
lean_dec(v_declName_3566_);
goto v___jp_3535_;
}
}
}
}
else
{
lean_object* v_a_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3661_; 
lean_dec_ref(v_env_3569_);
lean_dec_ref(v_args_3567_);
lean_dec(v_declName_3566_);
v_a_3654_ = lean_ctor_get(v___x_3607_, 0);
v_isSharedCheck_3661_ = !lean_is_exclusive(v___x_3607_);
if (v_isSharedCheck_3661_ == 0)
{
v___x_3656_ = v___x_3607_;
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_a_3654_);
lean_dec(v___x_3607_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v___x_3659_; 
if (v_isShared_3657_ == 0)
{
v___x_3659_ = v___x_3656_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3660_; 
v_reuseFailAlloc_3660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3660_, 0, v_a_3654_);
v___x_3659_ = v_reuseFailAlloc_3660_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
return v___x_3659_;
}
}
}
}
else
{
lean_object* v_a_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3669_; 
lean_dec_ref(v_env_3569_);
lean_dec_ref(v_args_3567_);
lean_dec(v_declName_3566_);
v_a_3662_ = lean_ctor_get(v___x_3604_, 0);
v_isSharedCheck_3669_ = !lean_is_exclusive(v___x_3604_);
if (v_isSharedCheck_3669_ == 0)
{
v___x_3664_ = v___x_3604_;
v_isShared_3665_ = v_isSharedCheck_3669_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_a_3662_);
lean_dec(v___x_3604_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3669_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
lean_object* v___x_3667_; 
if (v_isShared_3665_ == 0)
{
v___x_3667_ = v___x_3664_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v_a_3662_);
v___x_3667_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
return v___x_3667_;
}
}
}
}
}
default: 
{
lean_object* v_args_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; uint8_t v___x_3686_; 
v_args_3683_ = lean_ctor_get(v_letVal_3527_, 1);
lean_inc_ref(v_args_3683_);
lean_dec_ref_known(v_letVal_3527_, 2);
v___x_3684_ = lean_unsigned_to_nat(0u);
v___x_3685_ = lean_array_get_size(v_args_3683_);
v___x_3686_ = lean_nat_dec_lt(v___x_3684_, v___x_3685_);
if (v___x_3686_ == 0)
{
lean_dec_ref(v_args_3683_);
goto v___jp_3538_;
}
else
{
lean_object* v___x_3687_; size_t v___x_3688_; size_t v___x_3689_; lean_object* v___x_3690_; 
v___x_3687_ = lean_box(0);
v___x_3688_ = ((size_t)0ULL);
v___x_3689_ = lean_usize_of_nat(v___x_3685_);
v___x_3690_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_args_3683_, v___x_3688_, v___x_3689_, v___x_3687_, v_a_3528_, v_a_3529_, v_a_3530_, v_a_3531_, v_a_3532_, v_a_3533_);
lean_dec_ref(v_args_3683_);
if (lean_obj_tag(v___x_3690_) == 0)
{
lean_dec_ref_known(v___x_3690_, 1);
goto v___jp_3538_;
}
else
{
lean_object* v_a_3691_; lean_object* v___x_3693_; uint8_t v_isShared_3694_; uint8_t v_isSharedCheck_3698_; 
v_a_3691_ = lean_ctor_get(v___x_3690_, 0);
v_isSharedCheck_3698_ = !lean_is_exclusive(v___x_3690_);
if (v_isSharedCheck_3698_ == 0)
{
v___x_3693_ = v___x_3690_;
v_isShared_3694_ = v_isSharedCheck_3698_;
goto v_resetjp_3692_;
}
else
{
lean_inc(v_a_3691_);
lean_dec(v___x_3690_);
v___x_3693_ = lean_box(0);
v_isShared_3694_ = v_isSharedCheck_3698_;
goto v_resetjp_3692_;
}
v_resetjp_3692_:
{
lean_object* v___x_3696_; 
if (v_isShared_3694_ == 0)
{
v___x_3696_ = v___x_3693_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v_a_3691_);
v___x_3696_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
return v___x_3696_;
}
}
}
}
}
}
v___jp_3535_:
{
lean_object* v___x_3536_; lean_object* v___x_3537_; 
v___x_3536_ = lean_box(1);
v___x_3537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3536_);
return v___x_3537_;
}
v___jp_3538_:
{
lean_object* v___x_3539_; lean_object* v___x_3540_; 
v___x_3539_ = lean_box(1);
v___x_3540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3540_, 0, v___x_3539_);
return v___x_3540_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(lean_object* v_funDecl_3699_, lean_object* v_args_3700_, lean_object* v_a_3701_, lean_object* v_a_3702_, lean_object* v_a_3703_, lean_object* v_a_3704_, lean_object* v_a_3705_, lean_object* v_a_3706_){
_start:
{
lean_object* v_params_3708_; lean_object* v_value_3709_; lean_object* v___x_3710_; 
v_params_3708_ = lean_ctor_get(v_funDecl_3699_, 2);
lean_inc_ref(v_params_3708_);
v_value_3709_ = lean_ctor_get(v_funDecl_3699_, 4);
lean_inc_ref(v_value_3709_);
lean_dec_ref(v_funDecl_3699_);
v___x_3710_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsAssignment(v_params_3708_, v_args_3700_, v_a_3701_, v_a_3702_, v_a_3703_, v_a_3704_, v_a_3705_, v_a_3706_);
if (lean_obj_tag(v___x_3710_) == 0)
{
lean_object* v_a_3711_; lean_object* v___x_3713_; uint8_t v_isShared_3714_; uint8_t v_isSharedCheck_3722_; 
v_a_3711_ = lean_ctor_get(v___x_3710_, 0);
v_isSharedCheck_3722_ = !lean_is_exclusive(v___x_3710_);
if (v_isSharedCheck_3722_ == 0)
{
v___x_3713_ = v___x_3710_;
v_isShared_3714_ = v_isSharedCheck_3722_;
goto v_resetjp_3712_;
}
else
{
lean_inc(v_a_3711_);
lean_dec(v___x_3710_);
v___x_3713_ = lean_box(0);
v_isShared_3714_ = v_isSharedCheck_3722_;
goto v_resetjp_3712_;
}
v_resetjp_3712_:
{
uint8_t v___x_3715_; 
v___x_3715_ = lean_unbox(v_a_3711_);
lean_dec(v_a_3711_);
if (v___x_3715_ == 0)
{
lean_object* v___x_3716_; lean_object* v___x_3718_; 
lean_dec_ref(v_value_3709_);
v___x_3716_ = lean_box(0);
if (v_isShared_3714_ == 0)
{
lean_ctor_set(v___x_3713_, 0, v___x_3716_);
v___x_3718_ = v___x_3713_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3719_; 
v_reuseFailAlloc_3719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3719_, 0, v___x_3716_);
v___x_3718_ = v_reuseFailAlloc_3719_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
return v___x_3718_;
}
}
else
{
lean_object* v___x_3720_; 
lean_del_object(v___x_3713_);
lean_inc_ref(v_value_3709_);
v___x_3720_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(v_value_3709_, v_a_3701_, v_a_3702_, v_a_3703_, v_a_3704_, v_a_3705_, v_a_3706_);
if (lean_obj_tag(v___x_3720_) == 0)
{
lean_object* v___x_3721_; 
lean_dec_ref_known(v___x_3720_, 1);
v___x_3721_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_value_3709_, v_a_3701_, v_a_3702_, v_a_3703_, v_a_3704_, v_a_3705_, v_a_3706_);
return v___x_3721_;
}
else
{
lean_dec_ref(v_value_3709_);
return v___x_3720_;
}
}
}
}
else
{
lean_object* v_a_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3730_; 
lean_dec_ref(v_value_3709_);
v_a_3723_ = lean_ctor_get(v___x_3710_, 0);
v_isSharedCheck_3730_ = !lean_is_exclusive(v___x_3710_);
if (v_isSharedCheck_3730_ == 0)
{
v___x_3725_ = v___x_3710_;
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_a_3723_);
lean_dec(v___x_3710_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
lean_object* v___x_3728_; 
if (v_isShared_3726_ == 0)
{
v___x_3728_ = v___x_3725_;
goto v_reusejp_3727_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v_a_3723_);
v___x_3728_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3727_;
}
v_reusejp_3727_:
{
return v___x_3728_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8(lean_object* v_a_3731_, lean_object* v_as_3732_, size_t v_sz_3733_, size_t v_i_3734_, lean_object* v_b_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_){
_start:
{
lean_object* v_a_3744_; uint8_t v___x_3748_; 
v___x_3748_ = lean_usize_dec_lt(v_i_3734_, v_sz_3733_);
if (v___x_3748_ == 0)
{
lean_object* v___x_3749_; 
v___x_3749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3749_, 0, v_b_3735_);
return v___x_3749_;
}
else
{
lean_object* v___x_3750_; lean_object* v_a_3751_; 
v___x_3750_ = lean_box(0);
v_a_3751_ = lean_array_uget_borrowed(v_as_3732_, v_i_3734_);
if (lean_obj_tag(v_a_3751_) == 0)
{
lean_object* v_ctorName_3752_; lean_object* v_params_3753_; lean_object* v_code_3754_; lean_object* v___y_3756_; lean_object* v___y_3757_; lean_object* v___y_3758_; lean_object* v___y_3759_; lean_object* v___y_3760_; lean_object* v___y_3761_; lean_object* v___x_3763_; 
v_ctorName_3752_ = lean_ctor_get(v_a_3751_, 0);
v_params_3753_ = lean_ctor_get(v_a_3751_, 1);
v_code_3754_ = lean_ctor_get(v_a_3751_, 2);
v___x_3763_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_getCtorArgs(v_a_3731_, v_ctorName_3752_);
if (lean_obj_tag(v___x_3763_) == 1)
{
lean_object* v_val_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; uint8_t v___x_3768_; 
v_val_3764_ = lean_ctor_get(v___x_3763_, 0);
lean_inc(v_val_3764_);
lean_dec_ref_known(v___x_3763_, 1);
v___x_3765_ = l_Array_zip___redArg(v_params_3753_, v_val_3764_);
lean_dec(v_val_3764_);
v___x_3766_ = lean_unsigned_to_nat(0u);
v___x_3767_ = lean_array_get_size(v___x_3765_);
v___x_3768_ = lean_nat_dec_lt(v___x_3766_, v___x_3767_);
if (v___x_3768_ == 0)
{
lean_dec_ref(v___x_3765_);
v___y_3756_ = v___y_3736_;
v___y_3757_ = v___y_3737_;
v___y_3758_ = v___y_3738_;
v___y_3759_ = v___y_3739_;
v___y_3760_ = v___y_3740_;
v___y_3761_ = v___y_3741_;
goto v___jp_3755_;
}
else
{
size_t v___x_3769_; size_t v___x_3770_; lean_object* v___x_3771_; 
v___x_3769_ = ((size_t)0ULL);
v___x_3770_ = lean_usize_of_nat(v___x_3767_);
v___x_3771_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(v___x_3765_, v___x_3769_, v___x_3770_, v___x_3750_, v___y_3736_, v___y_3737_, v___y_3741_);
lean_dec_ref(v___x_3765_);
if (lean_obj_tag(v___x_3771_) == 0)
{
lean_dec_ref_known(v___x_3771_, 1);
v___y_3756_ = v___y_3736_;
v___y_3757_ = v___y_3737_;
v___y_3758_ = v___y_3738_;
v___y_3759_ = v___y_3739_;
v___y_3760_ = v___y_3740_;
v___y_3761_ = v___y_3741_;
goto v___jp_3755_;
}
else
{
return v___x_3771_;
}
}
}
else
{
lean_object* v___x_3772_; lean_object* v___x_3773_; uint8_t v___x_3774_; 
lean_dec(v___x_3763_);
v___x_3772_ = lean_unsigned_to_nat(0u);
v___x_3773_ = lean_array_get_size(v_params_3753_);
v___x_3774_ = lean_nat_dec_lt(v___x_3772_, v___x_3773_);
if (v___x_3774_ == 0)
{
v___y_3756_ = v___y_3736_;
v___y_3757_ = v___y_3737_;
v___y_3758_ = v___y_3738_;
v___y_3759_ = v___y_3739_;
v___y_3760_ = v___y_3740_;
v___y_3761_ = v___y_3741_;
goto v___jp_3755_;
}
else
{
size_t v___x_3775_; size_t v___x_3776_; lean_object* v___x_3777_; 
v___x_3775_ = ((size_t)0ULL);
v___x_3776_ = lean_usize_of_nat(v___x_3773_);
v___x_3777_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(v_params_3753_, v___x_3775_, v___x_3776_, v___x_3750_, v___y_3736_, v___y_3737_, v___y_3741_);
if (lean_obj_tag(v___x_3777_) == 0)
{
lean_dec_ref_known(v___x_3777_, 1);
v___y_3756_ = v___y_3736_;
v___y_3757_ = v___y_3737_;
v___y_3758_ = v___y_3738_;
v___y_3759_ = v___y_3739_;
v___y_3760_ = v___y_3740_;
v___y_3761_ = v___y_3741_;
goto v___jp_3755_;
}
else
{
return v___x_3777_;
}
}
}
v___jp_3755_:
{
lean_object* v___x_3762_; 
lean_inc_ref(v_code_3754_);
v___x_3762_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_code_3754_, v___y_3756_, v___y_3757_, v___y_3758_, v___y_3759_, v___y_3760_, v___y_3761_);
if (lean_obj_tag(v___x_3762_) == 0)
{
lean_dec_ref_known(v___x_3762_, 1);
v_a_3744_ = v___x_3750_;
goto v___jp_3743_;
}
else
{
return v___x_3762_;
}
}
}
else
{
lean_object* v_code_3778_; lean_object* v___x_3779_; 
v_code_3778_ = lean_ctor_get(v_a_3751_, 0);
lean_inc_ref(v_code_3778_);
v___x_3779_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_code_3778_, v___y_3736_, v___y_3737_, v___y_3738_, v___y_3739_, v___y_3740_, v___y_3741_);
if (lean_obj_tag(v___x_3779_) == 0)
{
lean_dec_ref_known(v___x_3779_, 1);
v_a_3744_ = v___x_3750_;
goto v___jp_3743_;
}
else
{
return v___x_3779_;
}
}
}
v___jp_3743_:
{
size_t v___x_3745_; size_t v___x_3746_; 
v___x_3745_ = ((size_t)1ULL);
v___x_3746_ = lean_usize_add(v_i_3734_, v___x_3745_);
v_i_3734_ = v___x_3746_;
v_b_3735_ = v_a_3744_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(lean_object* v_x_3780_, lean_object* v_a_3781_, lean_object* v_a_3782_, lean_object* v_a_3783_, lean_object* v_a_3784_, lean_object* v_a_3785_, lean_object* v_a_3786_){
_start:
{
lean_object* v_decl_3789_; lean_object* v_k_3790_; lean_object* v___y_3791_; lean_object* v___y_3792_; lean_object* v___y_3793_; lean_object* v___y_3794_; lean_object* v___y_3795_; lean_object* v___y_3796_; 
switch(lean_obj_tag(v_x_3780_))
{
case 0:
{
lean_object* v_decl_3800_; lean_object* v_k_3801_; lean_object* v_fvarId_3802_; lean_object* v_value_3803_; lean_object* v___x_3804_; 
v_decl_3800_ = lean_ctor_get(v_x_3780_, 0);
lean_inc_ref(v_decl_3800_);
v_k_3801_ = lean_ctor_get(v_x_3780_, 1);
lean_inc_ref(v_k_3801_);
lean_dec_ref_known(v_x_3780_, 2);
v_fvarId_3802_ = lean_ctor_get(v_decl_3800_, 0);
lean_inc(v_fvarId_3802_);
v_value_3803_ = lean_ctor_get(v_decl_3800_, 3);
lean_inc_n(v_value_3803_, 2);
lean_dec_ref(v_decl_3800_);
v___x_3804_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue(v_value_3803_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_);
if (lean_obj_tag(v___x_3804_) == 0)
{
lean_object* v_a_3805_; lean_object* v___x_3806_; 
v_a_3805_ = lean_ctor_get(v___x_3804_, 0);
lean_inc(v_a_3805_);
lean_dec_ref_known(v___x_3804_, 1);
v___x_3806_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment___redArg(v_fvarId_3802_, v_a_3805_, v_a_3781_, v_a_3782_, v_a_3786_);
if (lean_obj_tag(v___x_3806_) == 0)
{
lean_dec_ref_known(v___x_3806_, 1);
if (lean_obj_tag(v_value_3803_) == 4)
{
lean_object* v_fvarId_3807_; lean_object* v_args_3808_; uint8_t v___x_3809_; lean_object* v___x_3810_; 
v_fvarId_3807_ = lean_ctor_get(v_value_3803_, 0);
lean_inc(v_fvarId_3807_);
v_args_3808_ = lean_ctor_get(v_value_3803_, 1);
lean_inc_ref(v_args_3808_);
lean_dec_ref_known(v_value_3803_, 2);
v___x_3809_ = 0;
v___x_3810_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_3809_, v_fvarId_3807_, v_a_3784_);
lean_dec(v_fvarId_3807_);
if (lean_obj_tag(v___x_3810_) == 0)
{
lean_object* v_a_3811_; 
v_a_3811_ = lean_ctor_get(v___x_3810_, 0);
lean_inc(v_a_3811_);
lean_dec_ref_known(v___x_3810_, 1);
if (lean_obj_tag(v_a_3811_) == 1)
{
lean_object* v_val_3812_; lean_object* v___x_3813_; 
v_val_3812_ = lean_ctor_get(v_a_3811_, 0);
lean_inc(v_val_3812_);
lean_dec_ref_known(v_a_3811_, 1);
v___x_3813_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(v_val_3812_, v_args_3808_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_);
if (lean_obj_tag(v___x_3813_) == 0)
{
lean_dec_ref_known(v___x_3813_, 1);
v_x_3780_ = v_k_3801_;
goto _start;
}
else
{
lean_dec_ref(v_k_3801_);
return v___x_3813_;
}
}
else
{
lean_dec(v_a_3811_);
lean_dec_ref(v_args_3808_);
v_x_3780_ = v_k_3801_;
goto _start;
}
}
else
{
lean_object* v_a_3816_; lean_object* v___x_3818_; uint8_t v_isShared_3819_; uint8_t v_isSharedCheck_3823_; 
lean_dec_ref(v_args_3808_);
lean_dec_ref(v_k_3801_);
v_a_3816_ = lean_ctor_get(v___x_3810_, 0);
v_isSharedCheck_3823_ = !lean_is_exclusive(v___x_3810_);
if (v_isSharedCheck_3823_ == 0)
{
v___x_3818_ = v___x_3810_;
v_isShared_3819_ = v_isSharedCheck_3823_;
goto v_resetjp_3817_;
}
else
{
lean_inc(v_a_3816_);
lean_dec(v___x_3810_);
v___x_3818_ = lean_box(0);
v_isShared_3819_ = v_isSharedCheck_3823_;
goto v_resetjp_3817_;
}
v_resetjp_3817_:
{
lean_object* v___x_3821_; 
if (v_isShared_3819_ == 0)
{
v___x_3821_ = v___x_3818_;
goto v_reusejp_3820_;
}
else
{
lean_object* v_reuseFailAlloc_3822_; 
v_reuseFailAlloc_3822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3822_, 0, v_a_3816_);
v___x_3821_ = v_reuseFailAlloc_3822_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
return v___x_3821_;
}
}
}
}
else
{
lean_dec(v_value_3803_);
v_x_3780_ = v_k_3801_;
goto _start;
}
}
else
{
lean_dec(v_value_3803_);
lean_dec_ref(v_k_3801_);
return v___x_3806_;
}
}
else
{
lean_object* v_a_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3832_; 
lean_dec(v_value_3803_);
lean_dec(v_fvarId_3802_);
lean_dec_ref(v_k_3801_);
v_a_3825_ = lean_ctor_get(v___x_3804_, 0);
v_isSharedCheck_3832_ = !lean_is_exclusive(v___x_3804_);
if (v_isSharedCheck_3832_ == 0)
{
v___x_3827_ = v___x_3804_;
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_a_3825_);
lean_dec(v___x_3804_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
lean_object* v___x_3830_; 
if (v_isShared_3828_ == 0)
{
v___x_3830_ = v___x_3827_;
goto v_reusejp_3829_;
}
else
{
lean_object* v_reuseFailAlloc_3831_; 
v_reuseFailAlloc_3831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3831_, 0, v_a_3825_);
v___x_3830_ = v_reuseFailAlloc_3831_;
goto v_reusejp_3829_;
}
v_reusejp_3829_:
{
return v___x_3830_;
}
}
}
}
case 3:
{
lean_object* v_fvarId_3833_; lean_object* v_args_3834_; uint8_t v___x_3835_; lean_object* v___x_3836_; 
v_fvarId_3833_ = lean_ctor_get(v_x_3780_, 0);
lean_inc(v_fvarId_3833_);
v_args_3834_ = lean_ctor_get(v_x_3780_, 1);
lean_inc_ref(v_args_3834_);
lean_dec_ref_known(v_x_3780_, 2);
v___x_3835_ = 0;
v___x_3836_ = l_Lean_Compiler_LCNF_getFunDecl(v___x_3835_, v_fvarId_3833_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_);
if (lean_obj_tag(v___x_3836_) == 0)
{
lean_object* v_a_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; uint8_t v___x_3840_; 
v_a_3837_ = lean_ctor_get(v___x_3836_, 0);
lean_inc(v_a_3837_);
lean_dec_ref_known(v___x_3836_, 1);
v___x_3838_ = lean_unsigned_to_nat(0u);
v___x_3839_ = lean_array_get_size(v_args_3834_);
v___x_3840_ = lean_nat_dec_lt(v___x_3838_, v___x_3839_);
if (v___x_3840_ == 0)
{
lean_object* v___x_3841_; 
v___x_3841_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(v_a_3837_, v_args_3834_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_);
return v___x_3841_;
}
else
{
lean_object* v___x_3842_; size_t v___x_3843_; size_t v___x_3844_; lean_object* v___x_3845_; 
v___x_3842_ = lean_box(0);
v___x_3843_ = ((size_t)0ULL);
v___x_3844_ = lean_usize_of_nat(v___x_3839_);
v___x_3845_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_args_3834_, v___x_3843_, v___x_3844_, v___x_3842_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_);
if (lean_obj_tag(v___x_3845_) == 0)
{
lean_object* v___x_3846_; 
lean_dec_ref_known(v___x_3845_, 1);
v___x_3846_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(v_a_3837_, v_args_3834_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_);
return v___x_3846_;
}
else
{
lean_dec(v_a_3837_);
lean_dec_ref(v_args_3834_);
return v___x_3845_;
}
}
}
else
{
lean_object* v_a_3847_; lean_object* v___x_3849_; uint8_t v_isShared_3850_; uint8_t v_isSharedCheck_3854_; 
lean_dec_ref(v_args_3834_);
v_a_3847_ = lean_ctor_get(v___x_3836_, 0);
v_isSharedCheck_3854_ = !lean_is_exclusive(v___x_3836_);
if (v_isSharedCheck_3854_ == 0)
{
v___x_3849_ = v___x_3836_;
v_isShared_3850_ = v_isSharedCheck_3854_;
goto v_resetjp_3848_;
}
else
{
lean_inc(v_a_3847_);
lean_dec(v___x_3836_);
v___x_3849_ = lean_box(0);
v_isShared_3850_ = v_isSharedCheck_3854_;
goto v_resetjp_3848_;
}
v_resetjp_3848_:
{
lean_object* v___x_3852_; 
if (v_isShared_3850_ == 0)
{
v___x_3852_ = v___x_3849_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v_a_3847_);
v___x_3852_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
return v___x_3852_;
}
}
}
}
case 4:
{
lean_object* v_cases_3855_; lean_object* v_discr_3856_; lean_object* v_alts_3857_; lean_object* v___x_3858_; 
v_cases_3855_ = lean_ctor_get(v_x_3780_, 0);
lean_inc_ref(v_cases_3855_);
lean_dec_ref_known(v_x_3780_, 1);
v_discr_3856_ = lean_ctor_get(v_cases_3855_, 2);
lean_inc(v_discr_3856_);
v_alts_3857_ = lean_ctor_get(v_cases_3855_, 3);
lean_inc_ref(v_alts_3857_);
lean_dec_ref(v_cases_3855_);
v___x_3858_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_discr_3856_, v_a_3781_, v_a_3782_);
lean_dec(v_discr_3856_);
if (lean_obj_tag(v___x_3858_) == 0)
{
lean_object* v_a_3859_; lean_object* v___x_3860_; size_t v_sz_3861_; size_t v___x_3862_; lean_object* v___x_3863_; 
v_a_3859_ = lean_ctor_get(v___x_3858_, 0);
lean_inc(v_a_3859_);
lean_dec_ref_known(v___x_3858_, 1);
v___x_3860_ = lean_box(0);
v_sz_3861_ = lean_array_size(v_alts_3857_);
v___x_3862_ = ((size_t)0ULL);
v___x_3863_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8(v_a_3859_, v_alts_3857_, v_sz_3861_, v___x_3862_, v___x_3860_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_);
lean_dec_ref(v_alts_3857_);
lean_dec(v_a_3859_);
if (lean_obj_tag(v___x_3863_) == 0)
{
lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3870_; 
v_isSharedCheck_3870_ = !lean_is_exclusive(v___x_3863_);
if (v_isSharedCheck_3870_ == 0)
{
lean_object* v_unused_3871_; 
v_unused_3871_ = lean_ctor_get(v___x_3863_, 0);
lean_dec(v_unused_3871_);
v___x_3865_ = v___x_3863_;
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
else
{
lean_dec(v___x_3863_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v___x_3868_; 
if (v_isShared_3866_ == 0)
{
lean_ctor_set(v___x_3865_, 0, v___x_3860_);
v___x_3868_ = v___x_3865_;
goto v_reusejp_3867_;
}
else
{
lean_object* v_reuseFailAlloc_3869_; 
v_reuseFailAlloc_3869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3869_, 0, v___x_3860_);
v___x_3868_ = v_reuseFailAlloc_3869_;
goto v_reusejp_3867_;
}
v_reusejp_3867_:
{
return v___x_3868_;
}
}
}
else
{
return v___x_3863_;
}
}
else
{
lean_object* v_a_3872_; lean_object* v___x_3874_; uint8_t v_isShared_3875_; uint8_t v_isSharedCheck_3879_; 
lean_dec_ref(v_alts_3857_);
v_a_3872_ = lean_ctor_get(v___x_3858_, 0);
v_isSharedCheck_3879_ = !lean_is_exclusive(v___x_3858_);
if (v_isSharedCheck_3879_ == 0)
{
v___x_3874_ = v___x_3858_;
v_isShared_3875_ = v_isSharedCheck_3879_;
goto v_resetjp_3873_;
}
else
{
lean_inc(v_a_3872_);
lean_dec(v___x_3858_);
v___x_3874_ = lean_box(0);
v_isShared_3875_ = v_isSharedCheck_3879_;
goto v_resetjp_3873_;
}
v_resetjp_3873_:
{
lean_object* v___x_3877_; 
if (v_isShared_3875_ == 0)
{
v___x_3877_ = v___x_3874_;
goto v_reusejp_3876_;
}
else
{
lean_object* v_reuseFailAlloc_3878_; 
v_reuseFailAlloc_3878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3878_, 0, v_a_3872_);
v___x_3877_ = v_reuseFailAlloc_3878_;
goto v_reusejp_3876_;
}
v_reusejp_3876_:
{
return v___x_3877_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_3880_; lean_object* v___x_3881_; 
v_fvarId_3880_ = lean_ctor_get(v_x_3780_, 0);
lean_inc(v_fvarId_3880_);
lean_dec_ref_known(v_x_3780_, 1);
v___x_3881_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar(v_fvarId_3880_, v_a_3781_, v_a_3782_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_);
if (lean_obj_tag(v___x_3881_) == 0)
{
lean_object* v___x_3882_; 
lean_dec_ref_known(v___x_3881_, 1);
v___x_3882_ = l_Lean_Compiler_LCNF_UnreachableBranches_findVarValue___redArg(v_fvarId_3880_, v_a_3781_, v_a_3782_);
lean_dec(v_fvarId_3880_);
if (lean_obj_tag(v___x_3882_) == 0)
{
lean_object* v_a_3883_; lean_object* v___x_3884_; 
v_a_3883_ = lean_ctor_get(v___x_3882_, 0);
lean_inc(v_a_3883_);
lean_dec_ref_known(v___x_3882_, 1);
v___x_3884_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(v_a_3883_, v_a_3781_, v_a_3782_, v_a_3786_);
return v___x_3884_;
}
else
{
lean_object* v_a_3885_; lean_object* v___x_3887_; uint8_t v_isShared_3888_; uint8_t v_isSharedCheck_3892_; 
v_a_3885_ = lean_ctor_get(v___x_3882_, 0);
v_isSharedCheck_3892_ = !lean_is_exclusive(v___x_3882_);
if (v_isSharedCheck_3892_ == 0)
{
v___x_3887_ = v___x_3882_;
v_isShared_3888_ = v_isSharedCheck_3892_;
goto v_resetjp_3886_;
}
else
{
lean_inc(v_a_3885_);
lean_dec(v___x_3882_);
v___x_3887_ = lean_box(0);
v_isShared_3888_ = v_isSharedCheck_3892_;
goto v_resetjp_3886_;
}
v_resetjp_3886_:
{
lean_object* v___x_3890_; 
if (v_isShared_3888_ == 0)
{
v___x_3890_ = v___x_3887_;
goto v_reusejp_3889_;
}
else
{
lean_object* v_reuseFailAlloc_3891_; 
v_reuseFailAlloc_3891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3891_, 0, v_a_3885_);
v___x_3890_ = v_reuseFailAlloc_3891_;
goto v_reusejp_3889_;
}
v_reusejp_3889_:
{
return v___x_3890_;
}
}
}
}
else
{
lean_dec(v_fvarId_3880_);
return v___x_3881_;
}
}
case 6:
{
lean_object* v___x_3894_; uint8_t v_isShared_3895_; uint8_t v_isSharedCheck_3900_; 
v_isSharedCheck_3900_ = !lean_is_exclusive(v_x_3780_);
if (v_isSharedCheck_3900_ == 0)
{
lean_object* v_unused_3901_; 
v_unused_3901_ = lean_ctor_get(v_x_3780_, 0);
lean_dec(v_unused_3901_);
v___x_3894_ = v_x_3780_;
v_isShared_3895_ = v_isSharedCheck_3900_;
goto v_resetjp_3893_;
}
else
{
lean_dec(v_x_3780_);
v___x_3894_ = lean_box(0);
v_isShared_3895_ = v_isSharedCheck_3900_;
goto v_resetjp_3893_;
}
v_resetjp_3893_:
{
lean_object* v___x_3896_; lean_object* v___x_3898_; 
v___x_3896_ = lean_box(0);
if (v_isShared_3895_ == 0)
{
lean_ctor_set_tag(v___x_3894_, 0);
lean_ctor_set(v___x_3894_, 0, v___x_3896_);
v___x_3898_ = v___x_3894_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3899_; 
v_reuseFailAlloc_3899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3899_, 0, v___x_3896_);
v___x_3898_ = v_reuseFailAlloc_3899_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
return v___x_3898_;
}
}
}
default: 
{
lean_object* v_decl_3902_; lean_object* v_k_3903_; 
v_decl_3902_ = lean_ctor_get(v_x_3780_, 0);
lean_inc_ref(v_decl_3902_);
v_k_3903_ = lean_ctor_get(v_x_3780_, 1);
lean_inc_ref(v_k_3903_);
lean_dec_ref(v_x_3780_);
v_decl_3789_ = v_decl_3902_;
v_k_3790_ = v_k_3903_;
v___y_3791_ = v_a_3781_;
v___y_3792_ = v_a_3782_;
v___y_3793_ = v_a_3783_;
v___y_3794_ = v_a_3784_;
v___y_3795_ = v_a_3785_;
v___y_3796_ = v_a_3786_;
goto v___jp_3788_;
}
}
v___jp_3788_:
{
lean_object* v_value_3797_; lean_object* v___x_3798_; 
v_value_3797_ = lean_ctor_get(v_decl_3789_, 4);
lean_inc_ref(v_value_3797_);
lean_dec_ref(v_decl_3789_);
v___x_3798_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_value_3797_, v___y_3791_, v___y_3792_, v___y_3793_, v___y_3794_, v___y_3795_, v___y_3796_);
if (lean_obj_tag(v___x_3798_) == 0)
{
lean_dec_ref_known(v___x_3798_, 1);
v_x_3780_ = v_k_3790_;
v_a_3781_ = v___y_3791_;
v_a_3782_ = v___y_3792_;
v_a_3783_ = v___y_3793_;
v_a_3784_ = v___y_3794_;
v_a_3785_ = v___y_3795_;
v_a_3786_ = v___y_3796_;
goto _start;
}
else
{
lean_dec_ref(v_k_3790_);
return v___x_3798_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar(lean_object* v_var_3904_, lean_object* v_a_3905_, lean_object* v_a_3906_, lean_object* v_a_3907_, lean_object* v_a_3908_, lean_object* v_a_3909_, lean_object* v_a_3910_){
_start:
{
uint8_t v___x_3912_; lean_object* v___x_3913_; 
v___x_3912_ = 0;
v___x_3913_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_3912_, v_var_3904_, v_a_3908_);
if (lean_obj_tag(v___x_3913_) == 0)
{
lean_object* v_a_3914_; lean_object* v___x_3916_; uint8_t v_isShared_3917_; uint8_t v_isSharedCheck_3946_; 
v_a_3914_ = lean_ctor_get(v___x_3913_, 0);
v_isSharedCheck_3946_ = !lean_is_exclusive(v___x_3913_);
if (v_isSharedCheck_3946_ == 0)
{
v___x_3916_ = v___x_3913_;
v_isShared_3917_ = v_isSharedCheck_3946_;
goto v_resetjp_3915_;
}
else
{
lean_inc(v_a_3914_);
lean_dec(v___x_3913_);
v___x_3916_ = lean_box(0);
v_isShared_3917_ = v_isSharedCheck_3946_;
goto v_resetjp_3915_;
}
v_resetjp_3915_:
{
if (lean_obj_tag(v_a_3914_) == 1)
{
lean_object* v_val_3918_; lean_object* v_params_3919_; lean_object* v_value_3920_; lean_object* v___x_3921_; 
lean_del_object(v___x_3916_);
v_val_3918_ = lean_ctor_get(v_a_3914_, 0);
lean_inc(v_val_3918_);
lean_dec_ref_known(v_a_3914_, 1);
v_params_3919_ = lean_ctor_get(v_val_3918_, 2);
lean_inc_ref(v_params_3919_);
v_value_3920_ = lean_ctor_get(v_val_3918_, 4);
lean_inc_ref(v_value_3920_);
lean_dec(v_val_3918_);
v___x_3921_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateFunDeclParamsTop(v_params_3919_, v_a_3905_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_, v_a_3910_);
lean_dec_ref(v_params_3919_);
if (lean_obj_tag(v___x_3921_) == 0)
{
lean_object* v_a_3922_; lean_object* v___x_3924_; uint8_t v_isShared_3925_; uint8_t v_isSharedCheck_3933_; 
v_a_3922_ = lean_ctor_get(v___x_3921_, 0);
v_isSharedCheck_3933_ = !lean_is_exclusive(v___x_3921_);
if (v_isSharedCheck_3933_ == 0)
{
v___x_3924_ = v___x_3921_;
v_isShared_3925_ = v_isSharedCheck_3933_;
goto v_resetjp_3923_;
}
else
{
lean_inc(v_a_3922_);
lean_dec(v___x_3921_);
v___x_3924_ = lean_box(0);
v_isShared_3925_ = v_isSharedCheck_3933_;
goto v_resetjp_3923_;
}
v_resetjp_3923_:
{
uint8_t v___x_3926_; 
v___x_3926_ = lean_unbox(v_a_3922_);
lean_dec(v_a_3922_);
if (v___x_3926_ == 0)
{
lean_object* v___x_3927_; lean_object* v___x_3929_; 
lean_dec_ref(v_value_3920_);
v___x_3927_ = lean_box(0);
if (v_isShared_3925_ == 0)
{
lean_ctor_set(v___x_3924_, 0, v___x_3927_);
v___x_3929_ = v___x_3924_;
goto v_reusejp_3928_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v___x_3927_);
v___x_3929_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3928_;
}
v_reusejp_3928_:
{
return v___x_3929_;
}
}
else
{
lean_object* v___x_3931_; 
lean_del_object(v___x_3924_);
lean_inc_ref(v_value_3920_);
v___x_3931_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_resetNestedFunDeclParams(v_value_3920_, v_a_3905_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_, v_a_3910_);
if (lean_obj_tag(v___x_3931_) == 0)
{
lean_object* v___x_3932_; 
lean_dec_ref_known(v___x_3931_, 1);
v___x_3932_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_value_3920_, v_a_3905_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_, v_a_3910_);
return v___x_3932_;
}
else
{
lean_dec_ref(v_value_3920_);
return v___x_3931_;
}
}
}
}
else
{
lean_object* v_a_3934_; lean_object* v___x_3936_; uint8_t v_isShared_3937_; uint8_t v_isSharedCheck_3941_; 
lean_dec_ref(v_value_3920_);
v_a_3934_ = lean_ctor_get(v___x_3921_, 0);
v_isSharedCheck_3941_ = !lean_is_exclusive(v___x_3921_);
if (v_isSharedCheck_3941_ == 0)
{
v___x_3936_ = v___x_3921_;
v_isShared_3937_ = v_isSharedCheck_3941_;
goto v_resetjp_3935_;
}
else
{
lean_inc(v_a_3934_);
lean_dec(v___x_3921_);
v___x_3936_ = lean_box(0);
v_isShared_3937_ = v_isSharedCheck_3941_;
goto v_resetjp_3935_;
}
v_resetjp_3935_:
{
lean_object* v___x_3939_; 
if (v_isShared_3937_ == 0)
{
v___x_3939_ = v___x_3936_;
goto v_reusejp_3938_;
}
else
{
lean_object* v_reuseFailAlloc_3940_; 
v_reuseFailAlloc_3940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3940_, 0, v_a_3934_);
v___x_3939_ = v_reuseFailAlloc_3940_;
goto v_reusejp_3938_;
}
v_reusejp_3938_:
{
return v___x_3939_;
}
}
}
}
else
{
lean_object* v___x_3942_; lean_object* v___x_3944_; 
lean_dec(v_a_3914_);
v___x_3942_ = lean_box(0);
if (v_isShared_3917_ == 0)
{
lean_ctor_set(v___x_3916_, 0, v___x_3942_);
v___x_3944_ = v___x_3916_;
goto v_reusejp_3943_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v___x_3942_);
v___x_3944_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3943_;
}
v_reusejp_3943_:
{
return v___x_3944_;
}
}
}
}
else
{
lean_object* v_a_3947_; lean_object* v___x_3949_; uint8_t v_isShared_3950_; uint8_t v_isSharedCheck_3954_; 
v_a_3947_ = lean_ctor_get(v___x_3913_, 0);
v_isSharedCheck_3954_ = !lean_is_exclusive(v___x_3913_);
if (v_isSharedCheck_3954_ == 0)
{
v___x_3949_ = v___x_3913_;
v_isShared_3950_ = v_isSharedCheck_3954_;
goto v_resetjp_3948_;
}
else
{
lean_inc(v_a_3947_);
lean_dec(v___x_3913_);
v___x_3949_ = lean_box(0);
v_isShared_3950_ = v_isSharedCheck_3954_;
goto v_resetjp_3948_;
}
v_resetjp_3948_:
{
lean_object* v___x_3952_; 
if (v_isShared_3950_ == 0)
{
v___x_3952_ = v___x_3949_;
goto v_reusejp_3951_;
}
else
{
lean_object* v_reuseFailAlloc_3953_; 
v_reuseFailAlloc_3953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3953_, 0, v_a_3947_);
v___x_3952_ = v_reuseFailAlloc_3953_;
goto v_reusejp_3951_;
}
v_reusejp_3951_:
{
return v___x_3952_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg(lean_object* v_arg_3955_, lean_object* v_a_3956_, lean_object* v_a_3957_, lean_object* v_a_3958_, lean_object* v_a_3959_, lean_object* v_a_3960_, lean_object* v_a_3961_){
_start:
{
if (lean_obj_tag(v_arg_3955_) == 1)
{
lean_object* v_fvarId_3963_; lean_object* v___x_3964_; 
v_fvarId_3963_ = lean_ctor_get(v_arg_3955_, 0);
v___x_3964_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar(v_fvarId_3963_, v_a_3956_, v_a_3957_, v_a_3958_, v_a_3959_, v_a_3960_, v_a_3961_);
return v___x_3964_;
}
else
{
lean_object* v___x_3965_; lean_object* v___x_3966_; 
v___x_3965_ = lean_box(0);
v___x_3966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3965_);
return v___x_3966_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg___boxed(lean_object* v_arg_3967_, lean_object* v_a_3968_, lean_object* v_a_3969_, lean_object* v_a_3970_, lean_object* v_a_3971_, lean_object* v_a_3972_, lean_object* v_a_3973_, lean_object* v_a_3974_){
_start:
{
lean_object* v_res_3975_; 
v_res_3975_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunArg(v_arg_3967_, v_a_3968_, v_a_3969_, v_a_3970_, v_a_3971_, v_a_3972_, v_a_3973_);
lean_dec(v_a_3973_);
lean_dec_ref(v_a_3972_);
lean_dec(v_a_3971_);
lean_dec_ref(v_a_3970_);
lean_dec(v_a_3969_);
lean_dec_ref(v_a_3968_);
lean_dec(v_arg_3967_);
return v_res_3975_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2___boxed(lean_object* v_as_3976_, lean_object* v_i_3977_, lean_object* v_stop_3978_, lean_object* v_b_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_){
_start:
{
size_t v_i_boxed_3987_; size_t v_stop_boxed_3988_; lean_object* v_res_3989_; 
v_i_boxed_3987_ = lean_unbox_usize(v_i_3977_);
lean_dec(v_i_3977_);
v_stop_boxed_3988_ = lean_unbox_usize(v_stop_3978_);
lean_dec(v_stop_3978_);
v_res_3989_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__2(v_as_3976_, v_i_boxed_3987_, v_stop_boxed_3988_, v_b_3979_, v___y_3980_, v___y_3981_, v___y_3982_, v___y_3983_, v___y_3984_, v___y_3985_);
lean_dec(v___y_3985_);
lean_dec_ref(v___y_3984_);
lean_dec(v___y_3983_);
lean_dec_ref(v___y_3982_);
lean_dec(v___y_3981_);
lean_dec_ref(v___y_3980_);
lean_dec_ref(v_as_3976_);
return v_res_3989_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall___boxed(lean_object* v_funDecl_3990_, lean_object* v_args_3991_, lean_object* v_a_3992_, lean_object* v_a_3993_, lean_object* v_a_3994_, lean_object* v_a_3995_, lean_object* v_a_3996_, lean_object* v_a_3997_, lean_object* v_a_3998_){
_start:
{
lean_object* v_res_3999_; 
v_res_3999_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpFunCall(v_funDecl_3990_, v_args_3991_, v_a_3992_, v_a_3993_, v_a_3994_, v_a_3995_, v_a_3996_, v_a_3997_);
lean_dec(v_a_3997_);
lean_dec_ref(v_a_3996_);
lean_dec(v_a_3995_);
lean_dec_ref(v_a_3994_);
lean_dec(v_a_3993_);
lean_dec_ref(v_a_3992_);
return v_res_3999_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar___boxed(lean_object* v_var_4000_, lean_object* v_a_4001_, lean_object* v_a_4002_, lean_object* v_a_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_){
_start:
{
lean_object* v_res_4008_; 
v_res_4008_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_handleFunVar(v_var_4000_, v_a_4001_, v_a_4002_, v_a_4003_, v_a_4004_, v_a_4005_, v_a_4006_);
lean_dec(v_a_4006_);
lean_dec_ref(v_a_4005_);
lean_dec(v_a_4004_);
lean_dec_ref(v_a_4003_);
lean_dec(v_a_4002_);
lean_dec_ref(v_a_4001_);
lean_dec(v_var_4000_);
return v_res_4008_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8___boxed(lean_object* v_a_4009_, lean_object* v_as_4010_, lean_object* v_sz_4011_, lean_object* v_i_4012_, lean_object* v_b_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_){
_start:
{
size_t v_sz_boxed_4021_; size_t v_i_boxed_4022_; lean_object* v_res_4023_; 
v_sz_boxed_4021_ = lean_unbox_usize(v_sz_4011_);
lean_dec(v_sz_4011_);
v_i_boxed_4022_ = lean_unbox_usize(v_i_4012_);
lean_dec(v_i_4012_);
v_res_4023_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__8(v_a_4009_, v_as_4010_, v_sz_boxed_4021_, v_i_boxed_4022_, v_b_4013_, v___y_4014_, v___y_4015_, v___y_4016_, v___y_4017_, v___y_4018_, v___y_4019_);
lean_dec(v___y_4019_);
lean_dec_ref(v___y_4018_);
lean_dec(v___y_4017_);
lean_dec_ref(v___y_4016_);
lean_dec(v___y_4015_);
lean_dec_ref(v___y_4014_);
lean_dec_ref(v_as_4010_);
lean_dec(v_a_4009_);
return v_res_4023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_interpCode___boxed(lean_object* v_x_4024_, lean_object* v_a_4025_, lean_object* v_a_4026_, lean_object* v_a_4027_, lean_object* v_a_4028_, lean_object* v_a_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_){
_start:
{
lean_object* v_res_4032_; 
v_res_4032_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_x_4024_, v_a_4025_, v_a_4026_, v_a_4027_, v_a_4028_, v_a_4029_, v_a_4030_);
lean_dec(v_a_4030_);
lean_dec_ref(v_a_4029_);
lean_dec(v_a_4028_);
lean_dec_ref(v_a_4027_);
lean_dec(v_a_4026_);
lean_dec_ref(v_a_4025_);
return v_res_4032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue___boxed(lean_object* v_letVal_4033_, lean_object* v_a_4034_, lean_object* v_a_4035_, lean_object* v_a_4036_, lean_object* v_a_4037_, lean_object* v_a_4038_, lean_object* v_a_4039_, lean_object* v_a_4040_){
_start:
{
lean_object* v_res_4041_; 
v_res_4041_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue(v_letVal_4033_, v_a_4034_, v_a_4035_, v_a_4036_, v_a_4037_, v_a_4038_, v_a_4039_);
lean_dec(v_a_4039_);
lean_dec_ref(v_a_4038_);
lean_dec(v_a_4037_);
lean_dec_ref(v_a_4036_);
lean_dec(v_a_4035_);
lean_dec_ref(v_a_4034_);
return v_res_4041_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0(lean_object* v_inst_4042_, lean_object* v_R_4043_, lean_object* v_a_4044_, lean_object* v_b_4045_){
_start:
{
lean_object* v___x_4046_; 
v___x_4046_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__0___redArg(v_a_4044_, v_b_4045_);
return v___x_4046_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1(size_t v_sz_4047_, size_t v_i_4048_, lean_object* v_bs_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_){
_start:
{
lean_object* v___x_4057_; 
v___x_4057_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___redArg(v_sz_4047_, v_i_4048_, v_bs_4049_, v___y_4050_, v___y_4051_);
return v___x_4057_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1___boxed(lean_object* v_sz_4058_, lean_object* v_i_4059_, lean_object* v_bs_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_){
_start:
{
size_t v_sz_boxed_4068_; size_t v_i_boxed_4069_; lean_object* v_res_4070_; 
v_sz_boxed_4068_ = lean_unbox_usize(v_sz_4058_);
lean_dec(v_sz_4058_);
v_i_boxed_4069_ = lean_unbox_usize(v_i_4059_);
lean_dec(v_i_4059_);
v_res_4070_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_interpCode_interpLetValue_spec__1(v_sz_boxed_4068_, v_i_boxed_4069_, v_bs_4060_, v___y_4061_, v___y_4062_, v___y_4063_, v___y_4064_, v___y_4065_, v___y_4066_);
lean_dec(v___y_4066_);
lean_dec_ref(v___y_4065_);
lean_dec(v___y_4064_);
lean_dec_ref(v___y_4063_);
lean_dec(v___y_4062_);
lean_dec_ref(v___y_4061_);
return v_res_4070_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6(lean_object* v_as_4071_, size_t v_i_4072_, size_t v_stop_4073_, lean_object* v_b_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_){
_start:
{
lean_object* v___x_4082_; 
v___x_4082_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___redArg(v_as_4071_, v_i_4072_, v_stop_4073_, v_b_4074_, v___y_4075_, v___y_4076_, v___y_4080_);
return v___x_4082_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6___boxed(lean_object* v_as_4083_, lean_object* v_i_4084_, lean_object* v_stop_4085_, lean_object* v_b_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_){
_start:
{
size_t v_i_boxed_4094_; size_t v_stop_boxed_4095_; lean_object* v_res_4096_; 
v_i_boxed_4094_ = lean_unbox_usize(v_i_4084_);
lean_dec(v_i_4084_);
v_stop_boxed_4095_ = lean_unbox_usize(v_stop_4085_);
lean_dec(v_stop_4085_);
v_res_4096_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__6(v_as_4083_, v_i_boxed_4094_, v_stop_boxed_4095_, v_b_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_, v___y_4092_);
lean_dec(v___y_4092_);
lean_dec_ref(v___y_4091_);
lean_dec(v___y_4090_);
lean_dec_ref(v___y_4089_);
lean_dec(v___y_4088_);
lean_dec_ref(v___y_4087_);
lean_dec_ref(v_as_4083_);
return v_res_4096_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7(lean_object* v_as_4097_, size_t v_i_4098_, size_t v_stop_4099_, lean_object* v_b_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_){
_start:
{
lean_object* v___x_4108_; 
v___x_4108_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(v_as_4097_, v_i_4098_, v_stop_4099_, v_b_4100_, v___y_4101_, v___y_4102_, v___y_4106_);
return v___x_4108_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___boxed(lean_object* v_as_4109_, lean_object* v_i_4110_, lean_object* v_stop_4111_, lean_object* v_b_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_){
_start:
{
size_t v_i_boxed_4120_; size_t v_stop_boxed_4121_; lean_object* v_res_4122_; 
v_i_boxed_4120_ = lean_unbox_usize(v_i_4110_);
lean_dec(v_i_4110_);
v_stop_boxed_4121_ = lean_unbox_usize(v_stop_4111_);
lean_dec(v_stop_4111_);
v_res_4122_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7(v_as_4109_, v_i_boxed_4120_, v_stop_boxed_4121_, v_b_4112_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_);
lean_dec(v___y_4118_);
lean_dec_ref(v___y_4117_);
lean_dec(v___y_4116_);
lean_dec_ref(v___y_4115_);
lean_dec(v___y_4114_);
lean_dec_ref(v___y_4113_);
lean_dec_ref(v_as_4109_);
return v_res_4122_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; 
v___x_4123_ = lean_unsigned_to_nat(32u);
v___x_4124_ = lean_mk_empty_array_with_capacity(v___x_4123_);
v___x_4125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4125_, 0, v___x_4124_);
return v___x_4125_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; 
v___x_4126_ = ((size_t)5ULL);
v___x_4127_ = lean_unsigned_to_nat(0u);
v___x_4128_ = lean_unsigned_to_nat(32u);
v___x_4129_ = lean_mk_empty_array_with_capacity(v___x_4128_);
v___x_4130_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__0);
v___x_4131_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4131_, 0, v___x_4130_);
lean_ctor_set(v___x_4131_, 1, v___x_4129_);
lean_ctor_set(v___x_4131_, 2, v___x_4127_);
lean_ctor_set(v___x_4131_, 3, v___x_4127_);
lean_ctor_set_usize(v___x_4131_, 4, v___x_4126_);
return v___x_4131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(lean_object* v___y_4132_){
_start:
{
lean_object* v___x_4134_; lean_object* v_traceState_4135_; lean_object* v_traces_4136_; lean_object* v___x_4137_; lean_object* v_traceState_4138_; lean_object* v_env_4139_; lean_object* v_nextMacroScope_4140_; lean_object* v_ngen_4141_; lean_object* v_auxDeclNGen_4142_; lean_object* v_cache_4143_; lean_object* v_recordedDeps_4144_; lean_object* v_messages_4145_; lean_object* v_infoState_4146_; lean_object* v_snapshotTasks_4147_; lean_object* v___x_4149_; uint8_t v_isShared_4150_; uint8_t v_isSharedCheck_4166_; 
v___x_4134_ = lean_st_ref_get(v___y_4132_);
v_traceState_4135_ = lean_ctor_get(v___x_4134_, 4);
lean_inc_ref(v_traceState_4135_);
lean_dec(v___x_4134_);
v_traces_4136_ = lean_ctor_get(v_traceState_4135_, 0);
lean_inc_ref(v_traces_4136_);
lean_dec_ref(v_traceState_4135_);
v___x_4137_ = lean_st_ref_take(v___y_4132_);
v_traceState_4138_ = lean_ctor_get(v___x_4137_, 4);
v_env_4139_ = lean_ctor_get(v___x_4137_, 0);
v_nextMacroScope_4140_ = lean_ctor_get(v___x_4137_, 1);
v_ngen_4141_ = lean_ctor_get(v___x_4137_, 2);
v_auxDeclNGen_4142_ = lean_ctor_get(v___x_4137_, 3);
v_cache_4143_ = lean_ctor_get(v___x_4137_, 5);
v_recordedDeps_4144_ = lean_ctor_get(v___x_4137_, 6);
v_messages_4145_ = lean_ctor_get(v___x_4137_, 7);
v_infoState_4146_ = lean_ctor_get(v___x_4137_, 8);
v_snapshotTasks_4147_ = lean_ctor_get(v___x_4137_, 9);
v_isSharedCheck_4166_ = !lean_is_exclusive(v___x_4137_);
if (v_isSharedCheck_4166_ == 0)
{
v___x_4149_ = v___x_4137_;
v_isShared_4150_ = v_isSharedCheck_4166_;
goto v_resetjp_4148_;
}
else
{
lean_inc(v_snapshotTasks_4147_);
lean_inc(v_infoState_4146_);
lean_inc(v_messages_4145_);
lean_inc(v_recordedDeps_4144_);
lean_inc(v_cache_4143_);
lean_inc(v_traceState_4138_);
lean_inc(v_auxDeclNGen_4142_);
lean_inc(v_ngen_4141_);
lean_inc(v_nextMacroScope_4140_);
lean_inc(v_env_4139_);
lean_dec(v___x_4137_);
v___x_4149_ = lean_box(0);
v_isShared_4150_ = v_isSharedCheck_4166_;
goto v_resetjp_4148_;
}
v_resetjp_4148_:
{
uint64_t v_tid_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4164_; 
v_tid_4151_ = lean_ctor_get_uint64(v_traceState_4138_, sizeof(void*)*1);
v_isSharedCheck_4164_ = !lean_is_exclusive(v_traceState_4138_);
if (v_isSharedCheck_4164_ == 0)
{
lean_object* v_unused_4165_; 
v_unused_4165_ = lean_ctor_get(v_traceState_4138_, 0);
lean_dec(v_unused_4165_);
v___x_4153_ = v_traceState_4138_;
v_isShared_4154_ = v_isSharedCheck_4164_;
goto v_resetjp_4152_;
}
else
{
lean_dec(v_traceState_4138_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4164_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
lean_object* v___x_4155_; lean_object* v___x_4157_; 
v___x_4155_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___closed__1);
if (v_isShared_4154_ == 0)
{
lean_ctor_set(v___x_4153_, 0, v___x_4155_);
v___x_4157_ = v___x_4153_;
goto v_reusejp_4156_;
}
else
{
lean_object* v_reuseFailAlloc_4163_; 
v_reuseFailAlloc_4163_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4163_, 0, v___x_4155_);
lean_ctor_set_uint64(v_reuseFailAlloc_4163_, sizeof(void*)*1, v_tid_4151_);
v___x_4157_ = v_reuseFailAlloc_4163_;
goto v_reusejp_4156_;
}
v_reusejp_4156_:
{
lean_object* v___x_4159_; 
if (v_isShared_4150_ == 0)
{
lean_ctor_set(v___x_4149_, 4, v___x_4157_);
v___x_4159_ = v___x_4149_;
goto v_reusejp_4158_;
}
else
{
lean_object* v_reuseFailAlloc_4162_; 
v_reuseFailAlloc_4162_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4162_, 0, v_env_4139_);
lean_ctor_set(v_reuseFailAlloc_4162_, 1, v_nextMacroScope_4140_);
lean_ctor_set(v_reuseFailAlloc_4162_, 2, v_ngen_4141_);
lean_ctor_set(v_reuseFailAlloc_4162_, 3, v_auxDeclNGen_4142_);
lean_ctor_set(v_reuseFailAlloc_4162_, 4, v___x_4157_);
lean_ctor_set(v_reuseFailAlloc_4162_, 5, v_cache_4143_);
lean_ctor_set(v_reuseFailAlloc_4162_, 6, v_recordedDeps_4144_);
lean_ctor_set(v_reuseFailAlloc_4162_, 7, v_messages_4145_);
lean_ctor_set(v_reuseFailAlloc_4162_, 8, v_infoState_4146_);
lean_ctor_set(v_reuseFailAlloc_4162_, 9, v_snapshotTasks_4147_);
v___x_4159_ = v_reuseFailAlloc_4162_;
goto v_reusejp_4158_;
}
v_reusejp_4158_:
{
lean_object* v___x_4160_; lean_object* v___x_4161_; 
v___x_4160_ = lean_st_ref_put(v___y_4132_, v___x_4159_);
v___x_4161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4161_, 0, v_traces_4136_);
return v___x_4161_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg___boxed(lean_object* v___y_4167_, lean_object* v___y_4168_){
_start:
{
lean_object* v_res_4169_; 
v_res_4169_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(v___y_4167_);
lean_dec(v___y_4167_);
return v_res_4169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0(lean_object* v___y_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_){
_start:
{
lean_object* v___x_4177_; 
v___x_4177_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(v___y_4175_);
return v___x_4177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___boxed(lean_object* v___y_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_){
_start:
{
lean_object* v_res_4185_; 
v_res_4185_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0(v___y_4178_, v___y_4179_, v___y_4180_, v___y_4181_, v___y_4182_, v___y_4183_);
lean_dec(v___y_4183_);
lean_dec_ref(v___y_4182_);
lean_dec(v___y_4181_);
lean_dec_ref(v___y_4180_);
lean_dec(v___y_4179_);
lean_dec_ref(v___y_4178_);
return v_res_4185_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(lean_object* v_opts_4186_, lean_object* v_opt_4187_){
_start:
{
lean_object* v_name_4188_; lean_object* v_defValue_4189_; lean_object* v_map_4190_; lean_object* v___x_4191_; 
v_name_4188_ = lean_ctor_get(v_opt_4187_, 0);
v_defValue_4189_ = lean_ctor_get(v_opt_4187_, 1);
v_map_4190_ = lean_ctor_get(v_opts_4186_, 0);
v___x_4191_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4190_, v_name_4188_);
if (lean_obj_tag(v___x_4191_) == 0)
{
uint8_t v___x_4192_; 
v___x_4192_ = lean_unbox(v_defValue_4189_);
return v___x_4192_;
}
else
{
lean_object* v_val_4193_; 
v_val_4193_ = lean_ctor_get(v___x_4191_, 0);
lean_inc(v_val_4193_);
lean_dec_ref_known(v___x_4191_, 1);
if (lean_obj_tag(v_val_4193_) == 1)
{
uint8_t v_v_4194_; 
v_v_4194_ = lean_ctor_get_uint8(v_val_4193_, 0);
lean_dec_ref_known(v_val_4193_, 0);
return v_v_4194_;
}
else
{
uint8_t v___x_4195_; 
lean_dec(v_val_4193_);
v___x_4195_ = lean_unbox(v_defValue_4189_);
return v___x_4195_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1___boxed(lean_object* v_opts_4196_, lean_object* v_opt_4197_){
_start:
{
uint8_t v_res_4198_; lean_object* v_r_4199_; 
v_res_4198_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(v_opts_4196_, v_opt_4197_);
lean_dec_ref(v_opt_4197_);
lean_dec_ref(v_opts_4196_);
v_r_4199_ = lean_box(v_res_4198_);
return v_r_4199_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4201_; lean_object* v___x_4202_; 
v___x_4201_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__0));
v___x_4202_ = l_Lean_stringToMessageData(v___x_4201_);
return v___x_4202_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0(lean_object* v_name_4203_, lean_object* v_x_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_){
_start:
{
lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; 
v___x_4212_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___closed__1);
v___x_4213_ = l_Lean_MessageData_ofName(v_name_4203_);
v___x_4214_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4214_, 0, v___x_4212_);
lean_ctor_set(v___x_4214_, 1, v___x_4213_);
v___x_4215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4215_, 0, v___x_4214_);
return v___x_4215_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___boxed(lean_object* v_name_4216_, lean_object* v_x_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_){
_start:
{
lean_object* v_res_4225_; 
v_res_4225_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0(v_name_4216_, v_x_4217_, v___y_4218_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_, v___y_4223_);
lean_dec(v___y_4223_);
lean_dec_ref(v___y_4222_);
lean_dec(v___y_4221_);
lean_dec_ref(v___y_4220_);
lean_dec(v___y_4219_);
lean_dec_ref(v___y_4218_);
lean_dec_ref(v_x_4217_);
return v_res_4225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__5(lean_object* v_opts_4226_, lean_object* v_opt_4227_){
_start:
{
lean_object* v_name_4228_; lean_object* v_defValue_4229_; lean_object* v_map_4230_; lean_object* v___x_4231_; 
v_name_4228_ = lean_ctor_get(v_opt_4227_, 0);
v_defValue_4229_ = lean_ctor_get(v_opt_4227_, 1);
v_map_4230_ = lean_ctor_get(v_opts_4226_, 0);
v___x_4231_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4230_, v_name_4228_);
if (lean_obj_tag(v___x_4231_) == 0)
{
lean_inc(v_defValue_4229_);
return v_defValue_4229_;
}
else
{
lean_object* v_val_4232_; 
v_val_4232_ = lean_ctor_get(v___x_4231_, 0);
lean_inc(v_val_4232_);
lean_dec_ref_known(v___x_4231_, 1);
if (lean_obj_tag(v_val_4232_) == 3)
{
lean_object* v_v_4233_; 
v_v_4233_ = lean_ctor_get(v_val_4232_, 0);
lean_inc(v_v_4233_);
lean_dec_ref_known(v_val_4232_, 1);
return v_v_4233_;
}
else
{
lean_dec(v_val_4232_);
lean_inc(v_defValue_4229_);
return v_defValue_4229_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__5___boxed(lean_object* v_opts_4234_, lean_object* v_opt_4235_){
_start:
{
lean_object* v_res_4236_; 
v_res_4236_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__5(v_opts_4234_, v_opt_4235_);
lean_dec_ref(v_opt_4235_);
lean_dec_ref(v_opts_4234_);
return v_res_4236_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__4(lean_object* v_e_4237_){
_start:
{
if (lean_obj_tag(v_e_4237_) == 0)
{
uint8_t v___x_4238_; 
v___x_4238_ = 2;
return v___x_4238_;
}
else
{
uint8_t v___x_4239_; 
v___x_4239_ = 0;
return v___x_4239_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__4___boxed(lean_object* v_e_4240_){
_start:
{
uint8_t v_res_4241_; lean_object* v_r_4242_; 
v_res_4241_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__4(v_e_4240_);
lean_dec_ref(v_e_4240_);
v_r_4242_ = lean_box(v_res_4241_);
return v_r_4242_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___redArg(lean_object* v_x_4243_){
_start:
{
if (lean_obj_tag(v_x_4243_) == 0)
{
lean_object* v_a_4245_; lean_object* v___x_4247_; uint8_t v_isShared_4248_; uint8_t v_isSharedCheck_4252_; 
v_a_4245_ = lean_ctor_get(v_x_4243_, 0);
v_isSharedCheck_4252_ = !lean_is_exclusive(v_x_4243_);
if (v_isSharedCheck_4252_ == 0)
{
v___x_4247_ = v_x_4243_;
v_isShared_4248_ = v_isSharedCheck_4252_;
goto v_resetjp_4246_;
}
else
{
lean_inc(v_a_4245_);
lean_dec(v_x_4243_);
v___x_4247_ = lean_box(0);
v_isShared_4248_ = v_isSharedCheck_4252_;
goto v_resetjp_4246_;
}
v_resetjp_4246_:
{
lean_object* v___x_4250_; 
if (v_isShared_4248_ == 0)
{
lean_ctor_set_tag(v___x_4247_, 1);
v___x_4250_ = v___x_4247_;
goto v_reusejp_4249_;
}
else
{
lean_object* v_reuseFailAlloc_4251_; 
v_reuseFailAlloc_4251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4251_, 0, v_a_4245_);
v___x_4250_ = v_reuseFailAlloc_4251_;
goto v_reusejp_4249_;
}
v_reusejp_4249_:
{
return v___x_4250_;
}
}
}
else
{
lean_object* v_a_4253_; lean_object* v___x_4255_; uint8_t v_isShared_4256_; uint8_t v_isSharedCheck_4260_; 
v_a_4253_ = lean_ctor_get(v_x_4243_, 0);
v_isSharedCheck_4260_ = !lean_is_exclusive(v_x_4243_);
if (v_isSharedCheck_4260_ == 0)
{
v___x_4255_ = v_x_4243_;
v_isShared_4256_ = v_isSharedCheck_4260_;
goto v_resetjp_4254_;
}
else
{
lean_inc(v_a_4253_);
lean_dec(v_x_4243_);
v___x_4255_ = lean_box(0);
v_isShared_4256_ = v_isSharedCheck_4260_;
goto v_resetjp_4254_;
}
v_resetjp_4254_:
{
lean_object* v___x_4258_; 
if (v_isShared_4256_ == 0)
{
lean_ctor_set_tag(v___x_4255_, 0);
v___x_4258_ = v___x_4255_;
goto v_reusejp_4257_;
}
else
{
lean_object* v_reuseFailAlloc_4259_; 
v_reuseFailAlloc_4259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4259_, 0, v_a_4253_);
v___x_4258_ = v_reuseFailAlloc_4259_;
goto v_reusejp_4257_;
}
v_reusejp_4257_:
{
return v___x_4258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___redArg___boxed(lean_object* v_x_4261_, lean_object* v___y_4262_){
_start:
{
lean_object* v_res_4263_; 
v_res_4263_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___redArg(v_x_4261_);
return v_res_4263_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2_spec__3(size_t v_sz_4264_, size_t v_i_4265_, lean_object* v_bs_4266_){
_start:
{
uint8_t v___x_4267_; 
v___x_4267_ = lean_usize_dec_lt(v_i_4265_, v_sz_4264_);
if (v___x_4267_ == 0)
{
return v_bs_4266_;
}
else
{
lean_object* v_v_4268_; lean_object* v_msg_4269_; lean_object* v___x_4270_; lean_object* v_bs_x27_4271_; size_t v___x_4272_; size_t v___x_4273_; lean_object* v___x_4274_; 
v_v_4268_ = lean_array_uget_borrowed(v_bs_4266_, v_i_4265_);
v_msg_4269_ = lean_ctor_get(v_v_4268_, 1);
lean_inc_ref(v_msg_4269_);
v___x_4270_ = lean_unsigned_to_nat(0u);
v_bs_x27_4271_ = lean_array_uset(v_bs_4266_, v_i_4265_, v___x_4270_);
v___x_4272_ = ((size_t)1ULL);
v___x_4273_ = lean_usize_add(v_i_4265_, v___x_4272_);
v___x_4274_ = lean_array_uset(v_bs_x27_4271_, v_i_4265_, v_msg_4269_);
v_i_4265_ = v___x_4273_;
v_bs_4266_ = v___x_4274_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2_spec__3___boxed(lean_object* v_sz_4276_, lean_object* v_i_4277_, lean_object* v_bs_4278_){
_start:
{
size_t v_sz_boxed_4279_; size_t v_i_boxed_4280_; lean_object* v_res_4281_; 
v_sz_boxed_4279_ = lean_unbox_usize(v_sz_4276_);
lean_dec(v_sz_4276_);
v_i_boxed_4280_ = lean_unbox_usize(v_i_4277_);
lean_dec(v_i_4277_);
v_res_4281_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2_spec__3(v_sz_boxed_4279_, v_i_boxed_4280_, v_bs_4278_);
return v_res_4281_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_4282_; lean_object* v___x_4283_; 
v___x_4282_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_);
v___x_4283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4283_, 0, v___x_4282_);
return v___x_4283_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; 
v___x_4284_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_4285_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__0);
v___x_4286_ = lean_unsigned_to_nat(0u);
v___x_4287_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_4287_, 0, v___x_4286_);
lean_ctor_set(v___x_4287_, 1, v___x_4286_);
lean_ctor_set(v___x_4287_, 2, v___x_4286_);
lean_ctor_set(v___x_4287_, 3, v___x_4286_);
lean_ctor_set(v___x_4287_, 4, v___x_4285_);
lean_ctor_set(v___x_4287_, 5, v___x_4285_);
lean_ctor_set(v___x_4287_, 6, v___x_4285_);
lean_ctor_set(v___x_4287_, 7, v___x_4285_);
lean_ctor_set(v___x_4287_, 8, v___x_4285_);
lean_ctor_set(v___x_4287_, 9, v___x_4285_);
lean_ctor_set(v___x_4287_, 10, v___x_4285_);
lean_ctor_set(v___x_4287_, 11, v___x_4284_);
return v___x_4287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg(lean_object* v_oldTraces_4288_, lean_object* v_data_4289_, lean_object* v_ref_4290_, lean_object* v_msg_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_){
_start:
{
lean_object* v_toCold_4297_; lean_object* v_currRecDepth_4298_; lean_object* v_ref_4299_; uint16_t v_optionFlags_4300_; uint8_t v_suppressElabErrors_4301_; uint8_t v_isRecordingDeps_4302_; lean_object* v_ref_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v_traceState_4306_; lean_object* v_traces_4307_; lean_object* v___x_4308_; size_t v_sz_4309_; size_t v___x_4310_; lean_object* v___x_4311_; lean_object* v_msg_4312_; lean_object* v___x_4313_; lean_object* v_env_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; 
v_toCold_4297_ = lean_ctor_get(v___y_4294_, 0);
v_currRecDepth_4298_ = lean_ctor_get(v___y_4294_, 1);
v_ref_4299_ = lean_ctor_get(v___y_4294_, 2);
v_optionFlags_4300_ = lean_ctor_get_uint16(v___y_4294_, sizeof(void*)*3);
v_suppressElabErrors_4301_ = lean_ctor_get_uint8(v___y_4294_, sizeof(void*)*3 + 2);
v_isRecordingDeps_4302_ = lean_ctor_get_uint8(v___y_4294_, sizeof(void*)*3 + 3);
v_ref_4303_ = l_Lean_replaceRef(v_ref_4290_, v_ref_4299_);
lean_inc(v_currRecDepth_4298_);
lean_inc_ref(v_toCold_4297_);
v___x_4304_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_4304_, 0, v_toCold_4297_);
lean_ctor_set(v___x_4304_, 1, v_currRecDepth_4298_);
lean_ctor_set(v___x_4304_, 2, v_ref_4303_);
lean_ctor_set_uint16(v___x_4304_, sizeof(void*)*3, v_optionFlags_4300_);
lean_ctor_set_uint8(v___x_4304_, sizeof(void*)*3 + 2, v_suppressElabErrors_4301_);
lean_ctor_set_uint8(v___x_4304_, sizeof(void*)*3 + 3, v_isRecordingDeps_4302_);
v___x_4305_ = lean_st_ref_get(v___y_4295_);
v_traceState_4306_ = lean_ctor_get(v___x_4305_, 4);
lean_inc_ref(v_traceState_4306_);
lean_dec(v___x_4305_);
v_traces_4307_ = lean_ctor_get(v_traceState_4306_, 0);
lean_inc_ref(v_traces_4307_);
lean_dec_ref(v_traceState_4306_);
v___x_4308_ = l_Lean_PersistentArray_toArray___redArg(v_traces_4307_);
lean_dec_ref(v_traces_4307_);
v_sz_4309_ = lean_array_size(v___x_4308_);
v___x_4310_ = ((size_t)0ULL);
v___x_4311_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2_spec__3(v_sz_4309_, v___x_4310_, v___x_4308_);
v_msg_4312_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_4312_, 0, v_data_4289_);
lean_ctor_set(v_msg_4312_, 1, v_msg_4291_);
lean_ctor_set(v_msg_4312_, 2, v___x_4311_);
v___x_4313_ = lean_st_ref_get(v___y_4295_);
v_env_4314_ = lean_ctor_get(v___x_4313_, 0);
lean_inc_ref(v_env_4314_);
lean_dec(v___x_4313_);
v___x_4315_ = lean_st_ref_get(v___y_4293_);
v___x_4316_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_4292_);
if (lean_obj_tag(v___x_4316_) == 0)
{
lean_object* v_a_4317_; lean_object* v___x_4319_; uint8_t v_isShared_4320_; uint8_t v_isSharedCheck_4369_; 
v_a_4317_ = lean_ctor_get(v___x_4316_, 0);
v_isSharedCheck_4369_ = !lean_is_exclusive(v___x_4316_);
if (v_isSharedCheck_4369_ == 0)
{
v___x_4319_ = v___x_4316_;
v_isShared_4320_ = v_isSharedCheck_4369_;
goto v_resetjp_4318_;
}
else
{
lean_inc(v_a_4317_);
lean_dec(v___x_4316_);
v___x_4319_ = lean_box(0);
v_isShared_4320_ = v_isSharedCheck_4369_;
goto v_resetjp_4318_;
}
v_resetjp_4318_:
{
lean_object* v_lctx_4321_; lean_object* v___x_4323_; uint8_t v_isShared_4324_; uint8_t v_isSharedCheck_4367_; 
v_lctx_4321_ = lean_ctor_get(v___x_4315_, 0);
v_isSharedCheck_4367_ = !lean_is_exclusive(v___x_4315_);
if (v_isSharedCheck_4367_ == 0)
{
lean_object* v_unused_4368_; 
v_unused_4368_ = lean_ctor_get(v___x_4315_, 1);
lean_dec(v_unused_4368_);
v___x_4323_ = v___x_4315_;
v_isShared_4324_ = v_isSharedCheck_4367_;
goto v_resetjp_4322_;
}
else
{
lean_inc(v_lctx_4321_);
lean_dec(v___x_4315_);
v___x_4323_ = lean_box(0);
v_isShared_4324_ = v_isSharedCheck_4367_;
goto v_resetjp_4322_;
}
v_resetjp_4322_:
{
uint8_t v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4331_; 
v___x_4325_ = lean_unbox(v_a_4317_);
lean_dec(v_a_4317_);
v___x_4326_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_4321_, v___x_4325_);
lean_dec_ref(v_lctx_4321_);
v___x_4327_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___x_4304_);
lean_dec_ref_known(v___x_4304_, 3);
v___x_4328_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1);
v___x_4329_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4329_, 0, v_env_4314_);
lean_ctor_set(v___x_4329_, 1, v___x_4328_);
lean_ctor_set(v___x_4329_, 2, v___x_4326_);
lean_ctor_set(v___x_4329_, 3, v___x_4327_);
if (v_isShared_4324_ == 0)
{
lean_ctor_set_tag(v___x_4323_, 3);
lean_ctor_set(v___x_4323_, 1, v_msg_4312_);
lean_ctor_set(v___x_4323_, 0, v___x_4329_);
v___x_4331_ = v___x_4323_;
goto v_reusejp_4330_;
}
else
{
lean_object* v_reuseFailAlloc_4366_; 
v_reuseFailAlloc_4366_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4366_, 0, v___x_4329_);
lean_ctor_set(v_reuseFailAlloc_4366_, 1, v_msg_4312_);
v___x_4331_ = v_reuseFailAlloc_4366_;
goto v_reusejp_4330_;
}
v_reusejp_4330_:
{
lean_object* v___x_4332_; lean_object* v_traceState_4333_; lean_object* v_env_4334_; lean_object* v_nextMacroScope_4335_; lean_object* v_ngen_4336_; lean_object* v_auxDeclNGen_4337_; lean_object* v_cache_4338_; lean_object* v_recordedDeps_4339_; lean_object* v_messages_4340_; lean_object* v_infoState_4341_; lean_object* v_snapshotTasks_4342_; lean_object* v___x_4344_; uint8_t v_isShared_4345_; uint8_t v_isSharedCheck_4365_; 
v___x_4332_ = lean_st_ref_take(v___y_4295_);
v_traceState_4333_ = lean_ctor_get(v___x_4332_, 4);
v_env_4334_ = lean_ctor_get(v___x_4332_, 0);
v_nextMacroScope_4335_ = lean_ctor_get(v___x_4332_, 1);
v_ngen_4336_ = lean_ctor_get(v___x_4332_, 2);
v_auxDeclNGen_4337_ = lean_ctor_get(v___x_4332_, 3);
v_cache_4338_ = lean_ctor_get(v___x_4332_, 5);
v_recordedDeps_4339_ = lean_ctor_get(v___x_4332_, 6);
v_messages_4340_ = lean_ctor_get(v___x_4332_, 7);
v_infoState_4341_ = lean_ctor_get(v___x_4332_, 8);
v_snapshotTasks_4342_ = lean_ctor_get(v___x_4332_, 9);
v_isSharedCheck_4365_ = !lean_is_exclusive(v___x_4332_);
if (v_isSharedCheck_4365_ == 0)
{
v___x_4344_ = v___x_4332_;
v_isShared_4345_ = v_isSharedCheck_4365_;
goto v_resetjp_4343_;
}
else
{
lean_inc(v_snapshotTasks_4342_);
lean_inc(v_infoState_4341_);
lean_inc(v_messages_4340_);
lean_inc(v_recordedDeps_4339_);
lean_inc(v_cache_4338_);
lean_inc(v_traceState_4333_);
lean_inc(v_auxDeclNGen_4337_);
lean_inc(v_ngen_4336_);
lean_inc(v_nextMacroScope_4335_);
lean_inc(v_env_4334_);
lean_dec(v___x_4332_);
v___x_4344_ = lean_box(0);
v_isShared_4345_ = v_isSharedCheck_4365_;
goto v_resetjp_4343_;
}
v_resetjp_4343_:
{
uint64_t v_tid_4346_; lean_object* v___x_4348_; uint8_t v_isShared_4349_; uint8_t v_isSharedCheck_4363_; 
v_tid_4346_ = lean_ctor_get_uint64(v_traceState_4333_, sizeof(void*)*1);
v_isSharedCheck_4363_ = !lean_is_exclusive(v_traceState_4333_);
if (v_isSharedCheck_4363_ == 0)
{
lean_object* v_unused_4364_; 
v_unused_4364_ = lean_ctor_get(v_traceState_4333_, 0);
lean_dec(v_unused_4364_);
v___x_4348_ = v_traceState_4333_;
v_isShared_4349_ = v_isSharedCheck_4363_;
goto v_resetjp_4347_;
}
else
{
lean_dec(v_traceState_4333_);
v___x_4348_ = lean_box(0);
v_isShared_4349_ = v_isSharedCheck_4363_;
goto v_resetjp_4347_;
}
v_resetjp_4347_:
{
lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4354_; 
v___x_4350_ = lean_box(0);
v___x_4351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4351_, 0, v_ref_4290_);
lean_ctor_set(v___x_4351_, 1, v___x_4331_);
v___x_4352_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_4288_, v___x_4351_);
if (v_isShared_4349_ == 0)
{
lean_ctor_set(v___x_4348_, 0, v___x_4352_);
v___x_4354_ = v___x_4348_;
goto v_reusejp_4353_;
}
else
{
lean_object* v_reuseFailAlloc_4362_; 
v_reuseFailAlloc_4362_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4362_, 0, v___x_4352_);
lean_ctor_set_uint64(v_reuseFailAlloc_4362_, sizeof(void*)*1, v_tid_4346_);
v___x_4354_ = v_reuseFailAlloc_4362_;
goto v_reusejp_4353_;
}
v_reusejp_4353_:
{
lean_object* v___x_4356_; 
if (v_isShared_4345_ == 0)
{
lean_ctor_set(v___x_4344_, 4, v___x_4354_);
v___x_4356_ = v___x_4344_;
goto v_reusejp_4355_;
}
else
{
lean_object* v_reuseFailAlloc_4361_; 
v_reuseFailAlloc_4361_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4361_, 0, v_env_4334_);
lean_ctor_set(v_reuseFailAlloc_4361_, 1, v_nextMacroScope_4335_);
lean_ctor_set(v_reuseFailAlloc_4361_, 2, v_ngen_4336_);
lean_ctor_set(v_reuseFailAlloc_4361_, 3, v_auxDeclNGen_4337_);
lean_ctor_set(v_reuseFailAlloc_4361_, 4, v___x_4354_);
lean_ctor_set(v_reuseFailAlloc_4361_, 5, v_cache_4338_);
lean_ctor_set(v_reuseFailAlloc_4361_, 6, v_recordedDeps_4339_);
lean_ctor_set(v_reuseFailAlloc_4361_, 7, v_messages_4340_);
lean_ctor_set(v_reuseFailAlloc_4361_, 8, v_infoState_4341_);
lean_ctor_set(v_reuseFailAlloc_4361_, 9, v_snapshotTasks_4342_);
v___x_4356_ = v_reuseFailAlloc_4361_;
goto v_reusejp_4355_;
}
v_reusejp_4355_:
{
lean_object* v___x_4357_; lean_object* v___x_4359_; 
v___x_4357_ = lean_st_ref_put(v___y_4295_, v___x_4356_);
if (v_isShared_4320_ == 0)
{
lean_ctor_set(v___x_4319_, 0, v___x_4350_);
v___x_4359_ = v___x_4319_;
goto v_reusejp_4358_;
}
else
{
lean_object* v_reuseFailAlloc_4360_; 
v_reuseFailAlloc_4360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4360_, 0, v___x_4350_);
v___x_4359_ = v_reuseFailAlloc_4360_;
goto v_reusejp_4358_;
}
v_reusejp_4358_:
{
return v___x_4359_;
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
lean_object* v_a_4370_; lean_object* v___x_4372_; uint8_t v_isShared_4373_; uint8_t v_isSharedCheck_4377_; 
lean_dec(v___x_4315_);
lean_dec_ref(v_env_4314_);
lean_dec_ref_known(v_msg_4312_, 3);
lean_dec_ref_known(v___x_4304_, 3);
lean_dec(v_ref_4290_);
lean_dec_ref(v_oldTraces_4288_);
v_a_4370_ = lean_ctor_get(v___x_4316_, 0);
v_isSharedCheck_4377_ = !lean_is_exclusive(v___x_4316_);
if (v_isSharedCheck_4377_ == 0)
{
v___x_4372_ = v___x_4316_;
v_isShared_4373_ = v_isSharedCheck_4377_;
goto v_resetjp_4371_;
}
else
{
lean_inc(v_a_4370_);
lean_dec(v___x_4316_);
v___x_4372_ = lean_box(0);
v_isShared_4373_ = v_isSharedCheck_4377_;
goto v_resetjp_4371_;
}
v_resetjp_4371_:
{
lean_object* v___x_4375_; 
if (v_isShared_4373_ == 0)
{
v___x_4375_ = v___x_4372_;
goto v_reusejp_4374_;
}
else
{
lean_object* v_reuseFailAlloc_4376_; 
v_reuseFailAlloc_4376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4376_, 0, v_a_4370_);
v___x_4375_ = v_reuseFailAlloc_4376_;
goto v_reusejp_4374_;
}
v_reusejp_4374_:
{
return v___x_4375_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___boxed(lean_object* v_oldTraces_4378_, lean_object* v_data_4379_, lean_object* v_ref_4380_, lean_object* v_msg_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_){
_start:
{
lean_object* v_res_4387_; 
v_res_4387_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg(v_oldTraces_4378_, v_data_4379_, v_ref_4380_, v_msg_4381_, v___y_4382_, v___y_4383_, v___y_4384_, v___y_4385_);
lean_dec(v___y_4385_);
lean_dec_ref(v___y_4384_);
lean_dec(v___y_4383_);
lean_dec_ref(v___y_4382_);
return v_res_4387_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0(void){
_start:
{
lean_object* v___x_4388_; double v___x_4389_; 
v___x_4388_ = lean_unsigned_to_nat(0u);
v___x_4389_ = lean_float_of_nat(v___x_4388_);
return v___x_4389_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__2(void){
_start:
{
lean_object* v___x_4391_; lean_object* v___x_4392_; 
v___x_4391_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__1));
v___x_4392_ = l_Lean_stringToMessageData(v___x_4391_);
return v___x_4392_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__3(void){
_start:
{
lean_object* v___x_4393_; double v___x_4394_; 
v___x_4393_ = lean_unsigned_to_nat(1000u);
v___x_4394_ = lean_float_of_nat(v___x_4393_);
return v___x_4394_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(lean_object* v_cls_4395_, uint8_t v_collapsed_4396_, lean_object* v_tag_4397_, lean_object* v_opts_4398_, uint8_t v_clsEnabled_4399_, lean_object* v_oldTraces_4400_, lean_object* v_msg_4401_, lean_object* v_resStartStop_4402_, lean_object* v___y_4403_, lean_object* v___y_4404_, lean_object* v___y_4405_, lean_object* v___y_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_){
_start:
{
lean_object* v_fst_4410_; lean_object* v_snd_4411_; lean_object* v___y_4413_; lean_object* v___y_4414_; lean_object* v_data_4415_; lean_object* v_fst_4418_; lean_object* v_snd_4419_; lean_object* v___x_4420_; uint8_t v___x_4421_; lean_object* v___y_4423_; lean_object* v_a_4424_; uint8_t v___y_4439_; double v___y_4471_; 
v_fst_4410_ = lean_ctor_get(v_resStartStop_4402_, 0);
lean_inc(v_fst_4410_);
v_snd_4411_ = lean_ctor_get(v_resStartStop_4402_, 1);
lean_inc(v_snd_4411_);
lean_dec_ref(v_resStartStop_4402_);
v_fst_4418_ = lean_ctor_get(v_snd_4411_, 0);
lean_inc(v_fst_4418_);
v_snd_4419_ = lean_ctor_get(v_snd_4411_, 1);
lean_inc(v_snd_4419_);
lean_dec(v_snd_4411_);
v___x_4420_ = l_Lean_trace_profiler;
v___x_4421_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(v_opts_4398_, v___x_4420_);
if (v___x_4421_ == 0)
{
v___y_4439_ = v___x_4421_;
goto v___jp_4438_;
}
else
{
lean_object* v___x_4476_; uint8_t v___x_4477_; 
v___x_4476_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4477_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(v_opts_4398_, v___x_4476_);
if (v___x_4477_ == 0)
{
lean_object* v___x_4478_; lean_object* v___x_4479_; double v___x_4480_; double v___x_4481_; double v___x_4482_; 
v___x_4478_ = l_Lean_trace_profiler_threshold;
v___x_4479_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__5(v_opts_4398_, v___x_4478_);
v___x_4480_ = lean_float_of_nat(v___x_4479_);
v___x_4481_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__3);
v___x_4482_ = lean_float_div(v___x_4480_, v___x_4481_);
v___y_4471_ = v___x_4482_;
goto v___jp_4470_;
}
else
{
lean_object* v___x_4483_; lean_object* v___x_4484_; double v___x_4485_; 
v___x_4483_ = l_Lean_trace_profiler_threshold;
v___x_4484_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__5(v_opts_4398_, v___x_4483_);
v___x_4485_ = lean_float_of_nat(v___x_4484_);
v___y_4471_ = v___x_4485_;
goto v___jp_4470_;
}
}
v___jp_4412_:
{
lean_object* v___x_4416_; 
lean_inc(v___y_4414_);
v___x_4416_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg(v_oldTraces_4400_, v_data_4415_, v___y_4414_, v___y_4413_, v___y_4405_, v___y_4406_, v___y_4407_, v___y_4408_);
if (lean_obj_tag(v___x_4416_) == 0)
{
lean_object* v___x_4417_; 
lean_dec_ref_known(v___x_4416_, 1);
v___x_4417_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___redArg(v_fst_4410_);
return v___x_4417_;
}
else
{
lean_dec(v_fst_4410_);
return v___x_4416_;
}
}
v___jp_4422_:
{
uint8_t v_result_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; double v___x_4428_; lean_object* v_data_4429_; 
v_result_4425_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__4(v_fst_4410_);
v___x_4426_ = lean_box(v_result_4425_);
v___x_4427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4427_, 0, v___x_4426_);
v___x_4428_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0);
lean_inc_ref(v_tag_4397_);
lean_inc_ref(v___x_4427_);
lean_inc(v_cls_4395_);
v_data_4429_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_4429_, 0, v_cls_4395_);
lean_ctor_set(v_data_4429_, 1, v___x_4427_);
lean_ctor_set(v_data_4429_, 2, v_tag_4397_);
lean_ctor_set_float(v_data_4429_, sizeof(void*)*3, v___x_4428_);
lean_ctor_set_float(v_data_4429_, sizeof(void*)*3 + 8, v___x_4428_);
lean_ctor_set_uint8(v_data_4429_, sizeof(void*)*3 + 16, v_collapsed_4396_);
if (v___x_4421_ == 0)
{
lean_dec_ref_known(v___x_4427_, 1);
lean_dec(v_snd_4419_);
lean_dec(v_fst_4418_);
lean_dec_ref(v_tag_4397_);
lean_dec(v_cls_4395_);
v___y_4413_ = v_a_4424_;
v___y_4414_ = v___y_4423_;
v_data_4415_ = v_data_4429_;
goto v___jp_4412_;
}
else
{
lean_object* v_data_4430_; double v___x_4431_; double v___x_4432_; 
lean_dec_ref_known(v_data_4429_, 3);
v_data_4430_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_4430_, 0, v_cls_4395_);
lean_ctor_set(v_data_4430_, 1, v___x_4427_);
lean_ctor_set(v_data_4430_, 2, v_tag_4397_);
v___x_4431_ = lean_unbox_float(v_fst_4418_);
lean_dec(v_fst_4418_);
lean_ctor_set_float(v_data_4430_, sizeof(void*)*3, v___x_4431_);
v___x_4432_ = lean_unbox_float(v_snd_4419_);
lean_dec(v_snd_4419_);
lean_ctor_set_float(v_data_4430_, sizeof(void*)*3 + 8, v___x_4432_);
lean_ctor_set_uint8(v_data_4430_, sizeof(void*)*3 + 16, v_collapsed_4396_);
v___y_4413_ = v_a_4424_;
v___y_4414_ = v___y_4423_;
v_data_4415_ = v_data_4430_;
goto v___jp_4412_;
}
}
v___jp_4433_:
{
lean_object* v_ref_4434_; lean_object* v___x_4435_; 
v_ref_4434_ = lean_ctor_get(v___y_4407_, 2);
lean_inc(v___y_4408_);
lean_inc_ref(v___y_4407_);
lean_inc(v___y_4406_);
lean_inc_ref(v___y_4405_);
lean_inc(v___y_4404_);
lean_inc_ref(v___y_4403_);
lean_inc(v_fst_4410_);
v___x_4435_ = lean_apply_8(v_msg_4401_, v_fst_4410_, v___y_4403_, v___y_4404_, v___y_4405_, v___y_4406_, v___y_4407_, v___y_4408_, lean_box(0));
if (lean_obj_tag(v___x_4435_) == 0)
{
lean_object* v_a_4436_; 
v_a_4436_ = lean_ctor_get(v___x_4435_, 0);
lean_inc(v_a_4436_);
lean_dec_ref_known(v___x_4435_, 1);
v___y_4423_ = v_ref_4434_;
v_a_4424_ = v_a_4436_;
goto v___jp_4422_;
}
else
{
lean_object* v___x_4437_; 
lean_dec_ref_known(v___x_4435_, 1);
v___x_4437_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__2);
v___y_4423_ = v_ref_4434_;
v_a_4424_ = v___x_4437_;
goto v___jp_4422_;
}
}
v___jp_4438_:
{
if (v_clsEnabled_4399_ == 0)
{
if (v___y_4439_ == 0)
{
lean_object* v___x_4440_; lean_object* v_traceState_4441_; lean_object* v_env_4442_; lean_object* v_nextMacroScope_4443_; lean_object* v_ngen_4444_; lean_object* v_auxDeclNGen_4445_; lean_object* v_cache_4446_; lean_object* v_recordedDeps_4447_; lean_object* v_messages_4448_; lean_object* v_infoState_4449_; lean_object* v_snapshotTasks_4450_; lean_object* v___x_4452_; uint8_t v_isShared_4453_; uint8_t v_isSharedCheck_4469_; 
lean_dec(v_snd_4419_);
lean_dec(v_fst_4418_);
lean_dec_ref(v_msg_4401_);
lean_dec_ref(v_tag_4397_);
lean_dec(v_cls_4395_);
v___x_4440_ = lean_st_ref_take(v___y_4408_);
v_traceState_4441_ = lean_ctor_get(v___x_4440_, 4);
v_env_4442_ = lean_ctor_get(v___x_4440_, 0);
v_nextMacroScope_4443_ = lean_ctor_get(v___x_4440_, 1);
v_ngen_4444_ = lean_ctor_get(v___x_4440_, 2);
v_auxDeclNGen_4445_ = lean_ctor_get(v___x_4440_, 3);
v_cache_4446_ = lean_ctor_get(v___x_4440_, 5);
v_recordedDeps_4447_ = lean_ctor_get(v___x_4440_, 6);
v_messages_4448_ = lean_ctor_get(v___x_4440_, 7);
v_infoState_4449_ = lean_ctor_get(v___x_4440_, 8);
v_snapshotTasks_4450_ = lean_ctor_get(v___x_4440_, 9);
v_isSharedCheck_4469_ = !lean_is_exclusive(v___x_4440_);
if (v_isSharedCheck_4469_ == 0)
{
v___x_4452_ = v___x_4440_;
v_isShared_4453_ = v_isSharedCheck_4469_;
goto v_resetjp_4451_;
}
else
{
lean_inc(v_snapshotTasks_4450_);
lean_inc(v_infoState_4449_);
lean_inc(v_messages_4448_);
lean_inc(v_recordedDeps_4447_);
lean_inc(v_cache_4446_);
lean_inc(v_traceState_4441_);
lean_inc(v_auxDeclNGen_4445_);
lean_inc(v_ngen_4444_);
lean_inc(v_nextMacroScope_4443_);
lean_inc(v_env_4442_);
lean_dec(v___x_4440_);
v___x_4452_ = lean_box(0);
v_isShared_4453_ = v_isSharedCheck_4469_;
goto v_resetjp_4451_;
}
v_resetjp_4451_:
{
uint64_t v_tid_4454_; lean_object* v_traces_4455_; lean_object* v___x_4457_; uint8_t v_isShared_4458_; uint8_t v_isSharedCheck_4468_; 
v_tid_4454_ = lean_ctor_get_uint64(v_traceState_4441_, sizeof(void*)*1);
v_traces_4455_ = lean_ctor_get(v_traceState_4441_, 0);
v_isSharedCheck_4468_ = !lean_is_exclusive(v_traceState_4441_);
if (v_isSharedCheck_4468_ == 0)
{
v___x_4457_ = v_traceState_4441_;
v_isShared_4458_ = v_isSharedCheck_4468_;
goto v_resetjp_4456_;
}
else
{
lean_inc(v_traces_4455_);
lean_dec(v_traceState_4441_);
v___x_4457_ = lean_box(0);
v_isShared_4458_ = v_isSharedCheck_4468_;
goto v_resetjp_4456_;
}
v_resetjp_4456_:
{
lean_object* v___x_4459_; lean_object* v___x_4461_; 
v___x_4459_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_4400_, v_traces_4455_);
lean_dec_ref(v_traces_4455_);
if (v_isShared_4458_ == 0)
{
lean_ctor_set(v___x_4457_, 0, v___x_4459_);
v___x_4461_ = v___x_4457_;
goto v_reusejp_4460_;
}
else
{
lean_object* v_reuseFailAlloc_4467_; 
v_reuseFailAlloc_4467_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4467_, 0, v___x_4459_);
lean_ctor_set_uint64(v_reuseFailAlloc_4467_, sizeof(void*)*1, v_tid_4454_);
v___x_4461_ = v_reuseFailAlloc_4467_;
goto v_reusejp_4460_;
}
v_reusejp_4460_:
{
lean_object* v___x_4463_; 
if (v_isShared_4453_ == 0)
{
lean_ctor_set(v___x_4452_, 4, v___x_4461_);
v___x_4463_ = v___x_4452_;
goto v_reusejp_4462_;
}
else
{
lean_object* v_reuseFailAlloc_4466_; 
v_reuseFailAlloc_4466_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4466_, 0, v_env_4442_);
lean_ctor_set(v_reuseFailAlloc_4466_, 1, v_nextMacroScope_4443_);
lean_ctor_set(v_reuseFailAlloc_4466_, 2, v_ngen_4444_);
lean_ctor_set(v_reuseFailAlloc_4466_, 3, v_auxDeclNGen_4445_);
lean_ctor_set(v_reuseFailAlloc_4466_, 4, v___x_4461_);
lean_ctor_set(v_reuseFailAlloc_4466_, 5, v_cache_4446_);
lean_ctor_set(v_reuseFailAlloc_4466_, 6, v_recordedDeps_4447_);
lean_ctor_set(v_reuseFailAlloc_4466_, 7, v_messages_4448_);
lean_ctor_set(v_reuseFailAlloc_4466_, 8, v_infoState_4449_);
lean_ctor_set(v_reuseFailAlloc_4466_, 9, v_snapshotTasks_4450_);
v___x_4463_ = v_reuseFailAlloc_4466_;
goto v_reusejp_4462_;
}
v_reusejp_4462_:
{
lean_object* v___x_4464_; lean_object* v___x_4465_; 
v___x_4464_ = lean_st_ref_put(v___y_4408_, v___x_4463_);
v___x_4465_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___redArg(v_fst_4410_);
return v___x_4465_;
}
}
}
}
}
else
{
goto v___jp_4433_;
}
}
else
{
goto v___jp_4433_;
}
}
v___jp_4470_:
{
double v___x_4472_; double v___x_4473_; double v___x_4474_; uint8_t v___x_4475_; 
v___x_4472_ = lean_unbox_float(v_snd_4419_);
v___x_4473_ = lean_unbox_float(v_fst_4418_);
v___x_4474_ = lean_float_sub(v___x_4472_, v___x_4473_);
v___x_4475_ = lean_float_decLt(v___y_4471_, v___x_4474_);
v___y_4439_ = v___x_4475_;
goto v___jp_4438_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___boxed(lean_object* v_cls_4486_, lean_object* v_collapsed_4487_, lean_object* v_tag_4488_, lean_object* v_opts_4489_, lean_object* v_clsEnabled_4490_, lean_object* v_oldTraces_4491_, lean_object* v_msg_4492_, lean_object* v_resStartStop_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_){
_start:
{
uint8_t v_collapsed_boxed_4501_; uint8_t v_clsEnabled_boxed_4502_; lean_object* v_res_4503_; 
v_collapsed_boxed_4501_ = lean_unbox(v_collapsed_4487_);
v_clsEnabled_boxed_4502_ = lean_unbox(v_clsEnabled_4490_);
v_res_4503_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v_cls_4486_, v_collapsed_boxed_4501_, v_tag_4488_, v_opts_4489_, v_clsEnabled_boxed_4502_, v_oldTraces_4491_, v_msg_4492_, v_resStartStop_4493_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_, v___y_4498_, v___y_4499_);
lean_dec(v___y_4499_);
lean_dec_ref(v___y_4498_);
lean_dec(v___y_4497_);
lean_dec_ref(v___y_4496_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
lean_dec_ref(v_opts_4489_);
return v_res_4503_;
}
}
static double _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_4507_; double v___x_4508_; 
v___x_4507_ = lean_unsigned_to_nat(1000000000u);
v___x_4508_ = lean_float_of_nat(v___x_4507_);
return v___x_4508_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7(void){
_start:
{
lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; 
v___x_4517_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3));
v___x_4518_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__6));
v___x_4519_ = l_Lean_Name_append(v___x_4518_, v___x_4517_);
return v___x_4519_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg(lean_object* v_upperBound_4520_, lean_object* v___x_4521_, lean_object* v_a_4522_, lean_object* v_b_4523_, lean_object* v___y_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_){
_start:
{
lean_object* v_a_4532_; uint8_t v___x_4536_; 
v___x_4536_ = lean_nat_dec_lt(v_a_4522_, v_upperBound_4520_);
if (v___x_4536_ == 0)
{
lean_object* v___x_4537_; 
lean_dec(v_a_4522_);
v___x_4537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4537_, 0, v_b_4523_);
return v___x_4537_;
}
else
{
lean_object* v___x_4538_; lean_object* v_toSignature_4539_; lean_object* v_value_4540_; lean_object* v_name_4541_; lean_object* v_params_4542_; uint8_t v_safe_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; 
lean_dec_ref(v_b_4523_);
v___x_4538_ = lean_array_fget_borrowed(v___x_4521_, v_a_4522_);
v_toSignature_4539_ = lean_ctor_get(v___x_4538_, 0);
v_value_4540_ = lean_ctor_get(v___x_4538_, 1);
v_name_4541_ = lean_ctor_get(v_toSignature_4539_, 0);
v_params_4542_ = lean_ctor_get(v_toSignature_4539_, 3);
v_safe_4543_ = lean_ctor_get_uint8(v_toSignature_4539_, sizeof(void*)*4);
v___x_4544_ = lean_box(0);
v___x_4545_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__0));
if (v_safe_4543_ == 0)
{
v_a_4532_ = v___x_4545_;
goto v___jp_4531_;
}
else
{
lean_object* v___f_4546_; lean_object* v___x_4547_; 
lean_inc(v_name_4541_);
v___f_4546_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_4546_, 0, v_name_4541_);
v___x_4547_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(v_a_4522_, v___y_4525_);
if (lean_obj_tag(v___x_4547_) == 0)
{
lean_object* v_a_4548_; lean_object* v___y_4550_; lean_object* v_decls_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___y_4585_; lean_object* v___y_4586_; lean_object* v___y_4587_; lean_object* v___y_4588_; lean_object* v___y_4589_; uint8_t v___y_4590_; lean_object* v_a_4591_; lean_object* v___y_4604_; lean_object* v___y_4605_; lean_object* v___y_4606_; lean_object* v___y_4607_; uint8_t v___y_4608_; lean_object* v___y_4609_; lean_object* v_a_4610_; lean_object* v___y_4620_; lean_object* v___y_4621_; lean_object* v___y_4622_; lean_object* v___y_4623_; uint8_t v___y_4624_; uint8_t v___x_4690_; 
v_a_4548_ = lean_ctor_get(v___x_4547_, 0);
lean_inc(v_a_4548_);
lean_dec_ref_known(v___x_4547_, 1);
v_decls_4580_ = lean_ctor_get(v___y_4524_, 0);
v___x_4581_ = lean_unsigned_to_nat(0u);
v___x_4582_ = lean_array_get_size(v_params_4542_);
lean_inc(v_a_4522_);
lean_inc_ref(v_decls_4580_);
v___x_4583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4583_, 0, v_decls_4580_);
lean_ctor_set(v___x_4583_, 1, v_a_4522_);
v___x_4690_ = lean_nat_dec_lt(v___x_4581_, v___x_4582_);
if (v___x_4690_ == 0)
{
goto v___jp_4673_;
}
else
{
size_t v___x_4691_; size_t v___x_4692_; lean_object* v___x_4693_; 
v___x_4691_ = ((size_t)0ULL);
v___x_4692_ = lean_usize_of_nat(v___x_4582_);
v___x_4693_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_interpCode_spec__7___redArg(v_params_4542_, v___x_4691_, v___x_4692_, v___x_4544_, v___x_4583_, v___y_4525_, v___y_4529_);
if (lean_obj_tag(v___x_4693_) == 0)
{
lean_dec_ref_known(v___x_4693_, 1);
goto v___jp_4673_;
}
else
{
lean_object* v_a_4694_; lean_object* v___x_4696_; uint8_t v_isShared_4697_; uint8_t v_isSharedCheck_4701_; 
lean_dec_ref_known(v___x_4583_, 2);
lean_dec(v_a_4548_);
lean_dec_ref(v___f_4546_);
lean_dec(v_a_4522_);
v_a_4694_ = lean_ctor_get(v___x_4693_, 0);
v_isSharedCheck_4701_ = !lean_is_exclusive(v___x_4693_);
if (v_isSharedCheck_4701_ == 0)
{
v___x_4696_ = v___x_4693_;
v_isShared_4697_ = v_isSharedCheck_4701_;
goto v_resetjp_4695_;
}
else
{
lean_inc(v_a_4694_);
lean_dec(v___x_4693_);
v___x_4696_ = lean_box(0);
v_isShared_4697_ = v_isSharedCheck_4701_;
goto v_resetjp_4695_;
}
v_resetjp_4695_:
{
lean_object* v___x_4699_; 
if (v_isShared_4697_ == 0)
{
v___x_4699_ = v___x_4696_;
goto v_reusejp_4698_;
}
else
{
lean_object* v_reuseFailAlloc_4700_; 
v_reuseFailAlloc_4700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4700_, 0, v_a_4694_);
v___x_4699_ = v_reuseFailAlloc_4700_;
goto v_reusejp_4698_;
}
v_reusejp_4698_:
{
return v___x_4699_;
}
}
}
}
v___jp_4549_:
{
if (lean_obj_tag(v___y_4550_) == 0)
{
lean_object* v___x_4551_; 
lean_dec_ref_known(v___y_4550_, 1);
v___x_4551_ = l_Lean_Compiler_LCNF_UnreachableBranches_getFunVal___redArg(v_a_4522_, v___y_4525_);
if (lean_obj_tag(v___x_4551_) == 0)
{
lean_object* v_a_4552_; lean_object* v___x_4554_; uint8_t v_isShared_4555_; uint8_t v_isSharedCheck_4563_; 
v_a_4552_ = lean_ctor_get(v___x_4551_, 0);
v_isSharedCheck_4563_ = !lean_is_exclusive(v___x_4551_);
if (v_isSharedCheck_4563_ == 0)
{
v___x_4554_ = v___x_4551_;
v_isShared_4555_ = v_isSharedCheck_4563_;
goto v_resetjp_4553_;
}
else
{
lean_inc(v_a_4552_);
lean_dec(v___x_4551_);
v___x_4554_ = lean_box(0);
v_isShared_4555_ = v_isSharedCheck_4563_;
goto v_resetjp_4553_;
}
v_resetjp_4553_:
{
uint8_t v___x_4556_; 
v___x_4556_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_beq(v_a_4548_, v_a_4552_);
lean_dec(v_a_4552_);
lean_dec(v_a_4548_);
if (v___x_4556_ == 0)
{
lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4561_; 
lean_dec(v_a_4522_);
v___x_4557_ = lean_box(v___x_4536_);
v___x_4558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4558_, 0, v___x_4557_);
v___x_4559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4559_, 0, v___x_4558_);
lean_ctor_set(v___x_4559_, 1, v___x_4544_);
if (v_isShared_4555_ == 0)
{
lean_ctor_set(v___x_4554_, 0, v___x_4559_);
v___x_4561_ = v___x_4554_;
goto v_reusejp_4560_;
}
else
{
lean_object* v_reuseFailAlloc_4562_; 
v_reuseFailAlloc_4562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4562_, 0, v___x_4559_);
v___x_4561_ = v_reuseFailAlloc_4562_;
goto v_reusejp_4560_;
}
v_reusejp_4560_:
{
return v___x_4561_;
}
}
else
{
lean_del_object(v___x_4554_);
v_a_4532_ = v___x_4545_;
goto v___jp_4531_;
}
}
}
else
{
lean_object* v_a_4564_; lean_object* v___x_4566_; uint8_t v_isShared_4567_; uint8_t v_isSharedCheck_4571_; 
lean_dec(v_a_4548_);
lean_dec(v_a_4522_);
v_a_4564_ = lean_ctor_get(v___x_4551_, 0);
v_isSharedCheck_4571_ = !lean_is_exclusive(v___x_4551_);
if (v_isSharedCheck_4571_ == 0)
{
v___x_4566_ = v___x_4551_;
v_isShared_4567_ = v_isSharedCheck_4571_;
goto v_resetjp_4565_;
}
else
{
lean_inc(v_a_4564_);
lean_dec(v___x_4551_);
v___x_4566_ = lean_box(0);
v_isShared_4567_ = v_isSharedCheck_4571_;
goto v_resetjp_4565_;
}
v_resetjp_4565_:
{
lean_object* v___x_4569_; 
if (v_isShared_4567_ == 0)
{
v___x_4569_ = v___x_4566_;
goto v_reusejp_4568_;
}
else
{
lean_object* v_reuseFailAlloc_4570_; 
v_reuseFailAlloc_4570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4570_, 0, v_a_4564_);
v___x_4569_ = v_reuseFailAlloc_4570_;
goto v_reusejp_4568_;
}
v_reusejp_4568_:
{
return v___x_4569_;
}
}
}
}
else
{
lean_object* v_a_4572_; lean_object* v___x_4574_; uint8_t v_isShared_4575_; uint8_t v_isSharedCheck_4579_; 
lean_dec(v_a_4548_);
lean_dec(v_a_4522_);
v_a_4572_ = lean_ctor_get(v___y_4550_, 0);
v_isSharedCheck_4579_ = !lean_is_exclusive(v___y_4550_);
if (v_isSharedCheck_4579_ == 0)
{
v___x_4574_ = v___y_4550_;
v_isShared_4575_ = v_isSharedCheck_4579_;
goto v_resetjp_4573_;
}
else
{
lean_inc(v_a_4572_);
lean_dec(v___y_4550_);
v___x_4574_ = lean_box(0);
v_isShared_4575_ = v_isSharedCheck_4579_;
goto v_resetjp_4573_;
}
v_resetjp_4573_:
{
lean_object* v___x_4577_; 
if (v_isShared_4575_ == 0)
{
v___x_4577_ = v___x_4574_;
goto v_reusejp_4576_;
}
else
{
lean_object* v_reuseFailAlloc_4578_; 
v_reuseFailAlloc_4578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4578_, 0, v_a_4572_);
v___x_4577_ = v_reuseFailAlloc_4578_;
goto v_reusejp_4576_;
}
v_reusejp_4576_:
{
return v___x_4577_;
}
}
}
}
v___jp_4584_:
{
lean_object* v___x_4592_; double v___x_4593_; double v___x_4594_; double v___x_4595_; double v___x_4596_; double v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; 
v___x_4592_ = lean_io_mono_nanos_now();
v___x_4593_ = lean_float_of_nat(v___y_4585_);
v___x_4594_ = lean_float_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1);
v___x_4595_ = lean_float_div(v___x_4593_, v___x_4594_);
v___x_4596_ = lean_float_of_nat(v___x_4592_);
v___x_4597_ = lean_float_div(v___x_4596_, v___x_4594_);
v___x_4598_ = lean_box_float(v___x_4595_);
v___x_4599_ = lean_box_float(v___x_4597_);
v___x_4600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4600_, 0, v___x_4598_);
lean_ctor_set(v___x_4600_, 1, v___x_4599_);
v___x_4601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4601_, 0, v_a_4591_);
lean_ctor_set(v___x_4601_, 1, v___x_4600_);
lean_inc_ref(v___y_4587_);
lean_inc(v___y_4589_);
v___x_4602_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v___y_4589_, v___x_4536_, v___y_4587_, v___y_4586_, v___y_4590_, v___y_4588_, v___f_4546_, v___x_4601_, v___x_4583_, v___y_4525_, v___y_4526_, v___y_4527_, v___y_4528_, v___y_4529_);
lean_dec_ref_known(v___x_4583_, 2);
v___y_4550_ = v___x_4602_;
goto v___jp_4549_;
}
v___jp_4603_:
{
lean_object* v___x_4611_; double v___x_4612_; double v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; 
v___x_4611_ = lean_io_get_num_heartbeats();
v___x_4612_ = lean_float_of_nat(v___y_4609_);
v___x_4613_ = lean_float_of_nat(v___x_4611_);
v___x_4614_ = lean_box_float(v___x_4612_);
v___x_4615_ = lean_box_float(v___x_4613_);
v___x_4616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4616_, 0, v___x_4614_);
lean_ctor_set(v___x_4616_, 1, v___x_4615_);
v___x_4617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4617_, 0, v_a_4610_);
lean_ctor_set(v___x_4617_, 1, v___x_4616_);
lean_inc_ref(v___y_4605_);
lean_inc(v___y_4607_);
v___x_4618_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v___y_4607_, v___x_4536_, v___y_4605_, v___y_4604_, v___y_4608_, v___y_4606_, v___f_4546_, v___x_4617_, v___x_4583_, v___y_4525_, v___y_4526_, v___y_4527_, v___y_4528_, v___y_4529_);
lean_dec_ref_known(v___x_4583_, 2);
v___y_4550_ = v___x_4618_;
goto v___jp_4549_;
}
v___jp_4619_:
{
lean_object* v___x_4625_; 
v___x_4625_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(v___y_4529_);
if (lean_obj_tag(v___x_4625_) == 0)
{
lean_object* v_a_4626_; lean_object* v___x_4627_; uint8_t v___x_4628_; 
v_a_4626_ = lean_ctor_get(v___x_4625_, 0);
lean_inc(v_a_4626_);
lean_dec_ref_known(v___x_4625_, 1);
v___x_4627_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4628_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(v___y_4622_, v___x_4627_);
if (v___x_4628_ == 0)
{
lean_object* v___x_4629_; lean_object* v___x_4630_; 
v___x_4629_ = lean_io_mono_nanos_now();
v___x_4630_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v___y_4620_, v___x_4583_, v___y_4525_, v___y_4526_, v___y_4527_, v___y_4528_, v___y_4529_);
if (lean_obj_tag(v___x_4630_) == 0)
{
lean_object* v_a_4631_; lean_object* v___x_4633_; uint8_t v_isShared_4634_; uint8_t v_isSharedCheck_4638_; 
v_a_4631_ = lean_ctor_get(v___x_4630_, 0);
v_isSharedCheck_4638_ = !lean_is_exclusive(v___x_4630_);
if (v_isSharedCheck_4638_ == 0)
{
v___x_4633_ = v___x_4630_;
v_isShared_4634_ = v_isSharedCheck_4638_;
goto v_resetjp_4632_;
}
else
{
lean_inc(v_a_4631_);
lean_dec(v___x_4630_);
v___x_4633_ = lean_box(0);
v_isShared_4634_ = v_isSharedCheck_4638_;
goto v_resetjp_4632_;
}
v_resetjp_4632_:
{
lean_object* v___x_4636_; 
if (v_isShared_4634_ == 0)
{
lean_ctor_set_tag(v___x_4633_, 1);
v___x_4636_ = v___x_4633_;
goto v_reusejp_4635_;
}
else
{
lean_object* v_reuseFailAlloc_4637_; 
v_reuseFailAlloc_4637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4637_, 0, v_a_4631_);
v___x_4636_ = v_reuseFailAlloc_4637_;
goto v_reusejp_4635_;
}
v_reusejp_4635_:
{
v___y_4585_ = v___x_4629_;
v___y_4586_ = v___y_4622_;
v___y_4587_ = v___y_4621_;
v___y_4588_ = v_a_4626_;
v___y_4589_ = v___y_4623_;
v___y_4590_ = v___y_4624_;
v_a_4591_ = v___x_4636_;
goto v___jp_4584_;
}
}
}
else
{
lean_object* v_a_4639_; lean_object* v___x_4641_; uint8_t v_isShared_4642_; uint8_t v_isSharedCheck_4646_; 
v_a_4639_ = lean_ctor_get(v___x_4630_, 0);
v_isSharedCheck_4646_ = !lean_is_exclusive(v___x_4630_);
if (v_isSharedCheck_4646_ == 0)
{
v___x_4641_ = v___x_4630_;
v_isShared_4642_ = v_isSharedCheck_4646_;
goto v_resetjp_4640_;
}
else
{
lean_inc(v_a_4639_);
lean_dec(v___x_4630_);
v___x_4641_ = lean_box(0);
v_isShared_4642_ = v_isSharedCheck_4646_;
goto v_resetjp_4640_;
}
v_resetjp_4640_:
{
lean_object* v___x_4644_; 
if (v_isShared_4642_ == 0)
{
lean_ctor_set_tag(v___x_4641_, 0);
v___x_4644_ = v___x_4641_;
goto v_reusejp_4643_;
}
else
{
lean_object* v_reuseFailAlloc_4645_; 
v_reuseFailAlloc_4645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4645_, 0, v_a_4639_);
v___x_4644_ = v_reuseFailAlloc_4645_;
goto v_reusejp_4643_;
}
v_reusejp_4643_:
{
v___y_4585_ = v___x_4629_;
v___y_4586_ = v___y_4622_;
v___y_4587_ = v___y_4621_;
v___y_4588_ = v_a_4626_;
v___y_4589_ = v___y_4623_;
v___y_4590_ = v___y_4624_;
v_a_4591_ = v___x_4644_;
goto v___jp_4584_;
}
}
}
}
else
{
lean_object* v___x_4647_; lean_object* v___x_4648_; 
v___x_4647_ = lean_io_get_num_heartbeats();
v___x_4648_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v___y_4620_, v___x_4583_, v___y_4525_, v___y_4526_, v___y_4527_, v___y_4528_, v___y_4529_);
if (lean_obj_tag(v___x_4648_) == 0)
{
lean_object* v_a_4649_; lean_object* v___x_4651_; uint8_t v_isShared_4652_; uint8_t v_isSharedCheck_4656_; 
v_a_4649_ = lean_ctor_get(v___x_4648_, 0);
v_isSharedCheck_4656_ = !lean_is_exclusive(v___x_4648_);
if (v_isSharedCheck_4656_ == 0)
{
v___x_4651_ = v___x_4648_;
v_isShared_4652_ = v_isSharedCheck_4656_;
goto v_resetjp_4650_;
}
else
{
lean_inc(v_a_4649_);
lean_dec(v___x_4648_);
v___x_4651_ = lean_box(0);
v_isShared_4652_ = v_isSharedCheck_4656_;
goto v_resetjp_4650_;
}
v_resetjp_4650_:
{
lean_object* v___x_4654_; 
if (v_isShared_4652_ == 0)
{
lean_ctor_set_tag(v___x_4651_, 1);
v___x_4654_ = v___x_4651_;
goto v_reusejp_4653_;
}
else
{
lean_object* v_reuseFailAlloc_4655_; 
v_reuseFailAlloc_4655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4655_, 0, v_a_4649_);
v___x_4654_ = v_reuseFailAlloc_4655_;
goto v_reusejp_4653_;
}
v_reusejp_4653_:
{
v___y_4604_ = v___y_4622_;
v___y_4605_ = v___y_4621_;
v___y_4606_ = v_a_4626_;
v___y_4607_ = v___y_4623_;
v___y_4608_ = v___y_4624_;
v___y_4609_ = v___x_4647_;
v_a_4610_ = v___x_4654_;
goto v___jp_4603_;
}
}
}
else
{
lean_object* v_a_4657_; lean_object* v___x_4659_; uint8_t v_isShared_4660_; uint8_t v_isSharedCheck_4664_; 
v_a_4657_ = lean_ctor_get(v___x_4648_, 0);
v_isSharedCheck_4664_ = !lean_is_exclusive(v___x_4648_);
if (v_isSharedCheck_4664_ == 0)
{
v___x_4659_ = v___x_4648_;
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
else
{
lean_inc(v_a_4657_);
lean_dec(v___x_4648_);
v___x_4659_ = lean_box(0);
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
v_resetjp_4658_:
{
lean_object* v___x_4662_; 
if (v_isShared_4660_ == 0)
{
lean_ctor_set_tag(v___x_4659_, 0);
v___x_4662_ = v___x_4659_;
goto v_reusejp_4661_;
}
else
{
lean_object* v_reuseFailAlloc_4663_; 
v_reuseFailAlloc_4663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4663_, 0, v_a_4657_);
v___x_4662_ = v_reuseFailAlloc_4663_;
goto v_reusejp_4661_;
}
v_reusejp_4661_:
{
v___y_4604_ = v___y_4622_;
v___y_4605_ = v___y_4621_;
v___y_4606_ = v_a_4626_;
v___y_4607_ = v___y_4623_;
v___y_4608_ = v___y_4624_;
v___y_4609_ = v___x_4647_;
v_a_4610_ = v___x_4662_;
goto v___jp_4603_;
}
}
}
}
}
else
{
lean_object* v_a_4665_; lean_object* v___x_4667_; uint8_t v_isShared_4668_; uint8_t v_isSharedCheck_4672_; 
lean_dec_ref(v___y_4620_);
lean_dec_ref_known(v___x_4583_, 2);
lean_dec(v_a_4548_);
lean_dec_ref(v___f_4546_);
lean_dec(v_a_4522_);
v_a_4665_ = lean_ctor_get(v___x_4625_, 0);
v_isSharedCheck_4672_ = !lean_is_exclusive(v___x_4625_);
if (v_isSharedCheck_4672_ == 0)
{
v___x_4667_ = v___x_4625_;
v_isShared_4668_ = v_isSharedCheck_4672_;
goto v_resetjp_4666_;
}
else
{
lean_inc(v_a_4665_);
lean_dec(v___x_4625_);
v___x_4667_ = lean_box(0);
v_isShared_4668_ = v_isSharedCheck_4672_;
goto v_resetjp_4666_;
}
v_resetjp_4666_:
{
lean_object* v___x_4670_; 
if (v_isShared_4668_ == 0)
{
v___x_4670_ = v___x_4667_;
goto v_reusejp_4669_;
}
else
{
lean_object* v_reuseFailAlloc_4671_; 
v_reuseFailAlloc_4671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4671_, 0, v_a_4665_);
v___x_4670_ = v_reuseFailAlloc_4671_;
goto v_reusejp_4669_;
}
v_reusejp_4669_:
{
return v___x_4670_;
}
}
}
}
v___jp_4673_:
{
if (lean_obj_tag(v_value_4540_) == 0)
{
lean_object* v_toCold_4674_; lean_object* v_options_4675_; uint8_t v_hasTrace_4676_; 
v_toCold_4674_ = lean_ctor_get(v___y_4528_, 0);
v_options_4675_ = lean_ctor_get(v_toCold_4674_, 2);
v_hasTrace_4676_ = lean_ctor_get_uint8(v_options_4675_, sizeof(void*)*1);
if (v_hasTrace_4676_ == 0)
{
lean_object* v_code_4677_; lean_object* v___x_4678_; 
lean_dec_ref(v___f_4546_);
v_code_4677_ = lean_ctor_get(v_value_4540_, 0);
lean_inc_ref(v_code_4677_);
v___x_4678_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_code_4677_, v___x_4583_, v___y_4525_, v___y_4526_, v___y_4527_, v___y_4528_, v___y_4529_);
lean_dec_ref_known(v___x_4583_, 2);
v___y_4550_ = v___x_4678_;
goto v___jp_4549_;
}
else
{
lean_object* v_code_4679_; lean_object* v_inheritedTraceOptions_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; uint8_t v___x_4684_; 
v_code_4679_ = lean_ctor_get(v_value_4540_, 0);
v_inheritedTraceOptions_4680_ = lean_ctor_get(v_toCold_4674_, 11);
v___x_4681_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3));
v___x_4682_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__4));
v___x_4683_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7);
v___x_4684_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4680_, v_options_4675_, v___x_4683_);
if (v___x_4684_ == 0)
{
lean_object* v___x_4685_; uint8_t v___x_4686_; 
v___x_4685_ = l_Lean_trace_profiler;
v___x_4686_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(v_options_4675_, v___x_4685_);
if (v___x_4686_ == 0)
{
lean_object* v___x_4687_; 
lean_dec_ref(v___f_4546_);
lean_inc_ref(v_code_4679_);
v___x_4687_ = l_Lean_Compiler_LCNF_UnreachableBranches_interpCode(v_code_4679_, v___x_4583_, v___y_4525_, v___y_4526_, v___y_4527_, v___y_4528_, v___y_4529_);
lean_dec_ref_known(v___x_4583_, 2);
v___y_4550_ = v___x_4687_;
goto v___jp_4549_;
}
else
{
lean_inc_ref(v_code_4679_);
v___y_4620_ = v_code_4679_;
v___y_4621_ = v___x_4682_;
v___y_4622_ = v_options_4675_;
v___y_4623_ = v___x_4681_;
v___y_4624_ = v___x_4684_;
goto v___jp_4619_;
}
}
else
{
lean_inc_ref(v_code_4679_);
v___y_4620_ = v_code_4679_;
v___y_4621_ = v___x_4682_;
v___y_4622_ = v_options_4675_;
v___y_4623_ = v___x_4681_;
v___y_4624_ = v___x_4684_;
goto v___jp_4619_;
}
}
}
else
{
lean_object* v___x_4688_; lean_object* v___x_4689_; 
lean_dec_ref(v___f_4546_);
v___x_4688_ = lean_box(1);
v___x_4689_ = l_Lean_Compiler_LCNF_UnreachableBranches_updateCurrFnSummary___redArg(v___x_4688_, v___x_4583_, v___y_4525_, v___y_4529_);
lean_dec_ref_known(v___x_4583_, 2);
v___y_4550_ = v___x_4689_;
goto v___jp_4549_;
}
}
}
else
{
lean_object* v_a_4702_; lean_object* v___x_4704_; uint8_t v_isShared_4705_; uint8_t v_isSharedCheck_4709_; 
lean_dec_ref(v___f_4546_);
lean_dec(v_a_4522_);
v_a_4702_ = lean_ctor_get(v___x_4547_, 0);
v_isSharedCheck_4709_ = !lean_is_exclusive(v___x_4547_);
if (v_isSharedCheck_4709_ == 0)
{
v___x_4704_ = v___x_4547_;
v_isShared_4705_ = v_isSharedCheck_4709_;
goto v_resetjp_4703_;
}
else
{
lean_inc(v_a_4702_);
lean_dec(v___x_4547_);
v___x_4704_ = lean_box(0);
v_isShared_4705_ = v_isSharedCheck_4709_;
goto v_resetjp_4703_;
}
v_resetjp_4703_:
{
lean_object* v___x_4707_; 
if (v_isShared_4705_ == 0)
{
v___x_4707_ = v___x_4704_;
goto v_reusejp_4706_;
}
else
{
lean_object* v_reuseFailAlloc_4708_; 
v_reuseFailAlloc_4708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4708_, 0, v_a_4702_);
v___x_4707_ = v_reuseFailAlloc_4708_;
goto v_reusejp_4706_;
}
v_reusejp_4706_:
{
return v___x_4707_;
}
}
}
}
}
v___jp_4531_:
{
lean_object* v___x_4533_; lean_object* v___x_4534_; 
v___x_4533_ = lean_unsigned_to_nat(1u);
v___x_4534_ = lean_nat_add(v_a_4522_, v___x_4533_);
lean_dec(v_a_4522_);
lean_inc_ref(v_a_4532_);
v_a_4522_ = v___x_4534_;
v_b_4523_ = v_a_4532_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___boxed(lean_object* v_upperBound_4710_, lean_object* v___x_4711_, lean_object* v_a_4712_, lean_object* v_b_4713_, lean_object* v___y_4714_, lean_object* v___y_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_){
_start:
{
lean_object* v_res_4721_; 
v_res_4721_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg(v_upperBound_4710_, v___x_4711_, v_a_4712_, v_b_4713_, v___y_4714_, v___y_4715_, v___y_4716_, v___y_4717_, v___y_4718_, v___y_4719_);
lean_dec(v___y_4719_);
lean_dec_ref(v___y_4718_);
lean_dec(v___y_4717_);
lean_dec_ref(v___y_4716_);
lean_dec(v___y_4715_);
lean_dec_ref(v___y_4714_);
lean_dec_ref(v___x_4711_);
lean_dec(v_upperBound_4710_);
return v_res_4721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferStep(lean_object* v_a_4722_, lean_object* v_a_4723_, lean_object* v_a_4724_, lean_object* v_a_4725_, lean_object* v_a_4726_, lean_object* v_a_4727_){
_start:
{
lean_object* v_decls_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; 
v_decls_4729_ = lean_ctor_get(v_a_4722_, 0);
v___x_4730_ = lean_array_get_size(v_decls_4729_);
v___x_4731_ = lean_unsigned_to_nat(0u);
v___x_4732_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__0));
v___x_4733_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg(v___x_4730_, v_decls_4729_, v___x_4731_, v___x_4732_, v_a_4722_, v_a_4723_, v_a_4724_, v_a_4725_, v_a_4726_, v_a_4727_);
if (lean_obj_tag(v___x_4733_) == 0)
{
lean_object* v_a_4734_; lean_object* v___x_4736_; uint8_t v_isShared_4737_; uint8_t v_isSharedCheck_4748_; 
v_a_4734_ = lean_ctor_get(v___x_4733_, 0);
v_isSharedCheck_4748_ = !lean_is_exclusive(v___x_4733_);
if (v_isSharedCheck_4748_ == 0)
{
v___x_4736_ = v___x_4733_;
v_isShared_4737_ = v_isSharedCheck_4748_;
goto v_resetjp_4735_;
}
else
{
lean_inc(v_a_4734_);
lean_dec(v___x_4733_);
v___x_4736_ = lean_box(0);
v_isShared_4737_ = v_isSharedCheck_4748_;
goto v_resetjp_4735_;
}
v_resetjp_4735_:
{
lean_object* v_fst_4738_; 
v_fst_4738_ = lean_ctor_get(v_a_4734_, 0);
lean_inc(v_fst_4738_);
lean_dec(v_a_4734_);
if (lean_obj_tag(v_fst_4738_) == 0)
{
uint8_t v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4742_; 
v___x_4739_ = 0;
v___x_4740_ = lean_box(v___x_4739_);
if (v_isShared_4737_ == 0)
{
lean_ctor_set(v___x_4736_, 0, v___x_4740_);
v___x_4742_ = v___x_4736_;
goto v_reusejp_4741_;
}
else
{
lean_object* v_reuseFailAlloc_4743_; 
v_reuseFailAlloc_4743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4743_, 0, v___x_4740_);
v___x_4742_ = v_reuseFailAlloc_4743_;
goto v_reusejp_4741_;
}
v_reusejp_4741_:
{
return v___x_4742_;
}
}
else
{
lean_object* v_val_4744_; lean_object* v___x_4746_; 
v_val_4744_ = lean_ctor_get(v_fst_4738_, 0);
lean_inc(v_val_4744_);
lean_dec_ref_known(v_fst_4738_, 1);
if (v_isShared_4737_ == 0)
{
lean_ctor_set(v___x_4736_, 0, v_val_4744_);
v___x_4746_ = v___x_4736_;
goto v_reusejp_4745_;
}
else
{
lean_object* v_reuseFailAlloc_4747_; 
v_reuseFailAlloc_4747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4747_, 0, v_val_4744_);
v___x_4746_ = v_reuseFailAlloc_4747_;
goto v_reusejp_4745_;
}
v_reusejp_4745_:
{
return v___x_4746_;
}
}
}
}
else
{
lean_object* v_a_4749_; lean_object* v___x_4751_; uint8_t v_isShared_4752_; uint8_t v_isSharedCheck_4756_; 
v_a_4749_ = lean_ctor_get(v___x_4733_, 0);
v_isSharedCheck_4756_ = !lean_is_exclusive(v___x_4733_);
if (v_isSharedCheck_4756_ == 0)
{
v___x_4751_ = v___x_4733_;
v_isShared_4752_ = v_isSharedCheck_4756_;
goto v_resetjp_4750_;
}
else
{
lean_inc(v_a_4749_);
lean_dec(v___x_4733_);
v___x_4751_ = lean_box(0);
v_isShared_4752_ = v_isSharedCheck_4756_;
goto v_resetjp_4750_;
}
v_resetjp_4750_:
{
lean_object* v___x_4754_; 
if (v_isShared_4752_ == 0)
{
v___x_4754_ = v___x_4751_;
goto v_reusejp_4753_;
}
else
{
lean_object* v_reuseFailAlloc_4755_; 
v_reuseFailAlloc_4755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4755_, 0, v_a_4749_);
v___x_4754_ = v_reuseFailAlloc_4755_;
goto v_reusejp_4753_;
}
v_reusejp_4753_:
{
return v___x_4754_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferStep___boxed(lean_object* v_a_4757_, lean_object* v_a_4758_, lean_object* v_a_4759_, lean_object* v_a_4760_, lean_object* v_a_4761_, lean_object* v_a_4762_, lean_object* v_a_4763_){
_start:
{
lean_object* v_res_4764_; 
v_res_4764_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferStep(v_a_4757_, v_a_4758_, v_a_4759_, v_a_4760_, v_a_4761_, v_a_4762_);
lean_dec(v_a_4762_);
lean_dec_ref(v_a_4761_);
lean_dec(v_a_4760_);
lean_dec_ref(v_a_4759_);
lean_dec(v_a_4758_);
lean_dec_ref(v_a_4757_);
return v_res_4764_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3(lean_object* v_00_u03b1_4765_, lean_object* v_x_4766_, lean_object* v___y_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_){
_start:
{
lean_object* v___x_4774_; 
v___x_4774_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___redArg(v_x_4766_);
return v___x_4774_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3___boxed(lean_object* v_00_u03b1_4775_, lean_object* v_x_4776_, lean_object* v___y_4777_, lean_object* v___y_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_, lean_object* v___y_4783_){
_start:
{
lean_object* v_res_4784_; 
v_res_4784_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__3(v_00_u03b1_4775_, v_x_4776_, v___y_4777_, v___y_4778_, v___y_4779_, v___y_4780_, v___y_4781_, v___y_4782_);
lean_dec(v___y_4782_);
lean_dec_ref(v___y_4781_);
lean_dec(v___y_4780_);
lean_dec_ref(v___y_4779_);
lean_dec(v___y_4778_);
lean_dec_ref(v___y_4777_);
return v_res_4784_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3(lean_object* v_upperBound_4785_, lean_object* v___x_4786_, lean_object* v_inst_4787_, lean_object* v_R_4788_, lean_object* v_a_4789_, lean_object* v_b_4790_, lean_object* v_c_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_, lean_object* v___y_4795_, lean_object* v___y_4796_, lean_object* v___y_4797_){
_start:
{
lean_object* v___x_4799_; 
v___x_4799_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg(v_upperBound_4785_, v___x_4786_, v_a_4789_, v_b_4790_, v___y_4792_, v___y_4793_, v___y_4794_, v___y_4795_, v___y_4796_, v___y_4797_);
return v___x_4799_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___boxed(lean_object* v_upperBound_4800_, lean_object* v___x_4801_, lean_object* v_inst_4802_, lean_object* v_R_4803_, lean_object* v_a_4804_, lean_object* v_b_4805_, lean_object* v_c_4806_, lean_object* v___y_4807_, lean_object* v___y_4808_, lean_object* v___y_4809_, lean_object* v___y_4810_, lean_object* v___y_4811_, lean_object* v___y_4812_, lean_object* v___y_4813_){
_start:
{
lean_object* v_res_4814_; 
v_res_4814_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3(v_upperBound_4800_, v___x_4801_, v_inst_4802_, v_R_4803_, v_a_4804_, v_b_4805_, v_c_4806_, v___y_4807_, v___y_4808_, v___y_4809_, v___y_4810_, v___y_4811_, v___y_4812_);
lean_dec(v___y_4812_);
lean_dec_ref(v___y_4811_);
lean_dec(v___y_4810_);
lean_dec_ref(v___y_4809_);
lean_dec(v___y_4808_);
lean_dec_ref(v___y_4807_);
lean_dec_ref(v___x_4801_);
lean_dec(v_upperBound_4800_);
return v_res_4814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2(lean_object* v_oldTraces_4815_, lean_object* v_data_4816_, lean_object* v_ref_4817_, lean_object* v_msg_4818_, lean_object* v___y_4819_, lean_object* v___y_4820_, lean_object* v___y_4821_, lean_object* v___y_4822_, lean_object* v___y_4823_, lean_object* v___y_4824_){
_start:
{
lean_object* v___x_4826_; 
v___x_4826_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg(v_oldTraces_4815_, v_data_4816_, v_ref_4817_, v_msg_4818_, v___y_4821_, v___y_4822_, v___y_4823_, v___y_4824_);
return v___x_4826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___boxed(lean_object* v_oldTraces_4827_, lean_object* v_data_4828_, lean_object* v_ref_4829_, lean_object* v_msg_4830_, lean_object* v___y_4831_, lean_object* v___y_4832_, lean_object* v___y_4833_, lean_object* v___y_4834_, lean_object* v___y_4835_, lean_object* v___y_4836_, lean_object* v___y_4837_){
_start:
{
lean_object* v_res_4838_; 
v_res_4838_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2(v_oldTraces_4827_, v_data_4828_, v_ref_4829_, v_msg_4830_, v___y_4831_, v___y_4832_, v___y_4833_, v___y_4834_, v___y_4835_, v___y_4836_);
lean_dec(v___y_4836_);
lean_dec_ref(v___y_4835_);
lean_dec(v___y_4834_);
lean_dec_ref(v___y_4833_);
lean_dec(v___y_4832_);
lean_dec_ref(v___y_4831_);
return v_res_4838_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg(lean_object* v_cls_4841_, lean_object* v_msg_4842_, lean_object* v___y_4843_, lean_object* v___y_4844_, lean_object* v___y_4845_, lean_object* v___y_4846_){
_start:
{
lean_object* v_ref_4848_; lean_object* v___x_4849_; lean_object* v_env_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; 
v_ref_4848_ = lean_ctor_get(v___y_4845_, 2);
v___x_4849_ = lean_st_ref_get(v___y_4846_);
v_env_4850_ = lean_ctor_get(v___x_4849_, 0);
lean_inc_ref(v_env_4850_);
lean_dec(v___x_4849_);
v___x_4851_ = lean_st_ref_get(v___y_4844_);
v___x_4852_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_4843_);
if (lean_obj_tag(v___x_4852_) == 0)
{
lean_object* v_a_4853_; lean_object* v___x_4855_; uint8_t v_isShared_4856_; uint8_t v_isSharedCheck_4912_; 
v_a_4853_ = lean_ctor_get(v___x_4852_, 0);
v_isSharedCheck_4912_ = !lean_is_exclusive(v___x_4852_);
if (v_isSharedCheck_4912_ == 0)
{
v___x_4855_ = v___x_4852_;
v_isShared_4856_ = v_isSharedCheck_4912_;
goto v_resetjp_4854_;
}
else
{
lean_inc(v_a_4853_);
lean_dec(v___x_4852_);
v___x_4855_ = lean_box(0);
v_isShared_4856_ = v_isSharedCheck_4912_;
goto v_resetjp_4854_;
}
v_resetjp_4854_:
{
lean_object* v_lctx_4857_; lean_object* v___x_4859_; uint8_t v_isShared_4860_; uint8_t v_isSharedCheck_4910_; 
v_lctx_4857_ = lean_ctor_get(v___x_4851_, 0);
v_isSharedCheck_4910_ = !lean_is_exclusive(v___x_4851_);
if (v_isSharedCheck_4910_ == 0)
{
lean_object* v_unused_4911_; 
v_unused_4911_ = lean_ctor_get(v___x_4851_, 1);
lean_dec(v_unused_4911_);
v___x_4859_ = v___x_4851_;
v_isShared_4860_ = v_isSharedCheck_4910_;
goto v_resetjp_4858_;
}
else
{
lean_inc(v_lctx_4857_);
lean_dec(v___x_4851_);
v___x_4859_ = lean_box(0);
v_isShared_4860_ = v_isSharedCheck_4910_;
goto v_resetjp_4858_;
}
v_resetjp_4858_:
{
uint8_t v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4867_; 
v___x_4861_ = lean_unbox(v_a_4853_);
lean_dec(v_a_4853_);
v___x_4862_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_4857_, v___x_4861_);
lean_dec_ref(v_lctx_4857_);
v___x_4863_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4845_);
v___x_4864_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1);
v___x_4865_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4865_, 0, v_env_4850_);
lean_ctor_set(v___x_4865_, 1, v___x_4864_);
lean_ctor_set(v___x_4865_, 2, v___x_4862_);
lean_ctor_set(v___x_4865_, 3, v___x_4863_);
if (v_isShared_4860_ == 0)
{
lean_ctor_set_tag(v___x_4859_, 3);
lean_ctor_set(v___x_4859_, 1, v_msg_4842_);
lean_ctor_set(v___x_4859_, 0, v___x_4865_);
v___x_4867_ = v___x_4859_;
goto v_reusejp_4866_;
}
else
{
lean_object* v_reuseFailAlloc_4909_; 
v_reuseFailAlloc_4909_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4909_, 0, v___x_4865_);
lean_ctor_set(v_reuseFailAlloc_4909_, 1, v_msg_4842_);
v___x_4867_ = v_reuseFailAlloc_4909_;
goto v_reusejp_4866_;
}
v_reusejp_4866_:
{
lean_object* v___x_4868_; lean_object* v_traceState_4869_; lean_object* v_env_4870_; lean_object* v_nextMacroScope_4871_; lean_object* v_ngen_4872_; lean_object* v_auxDeclNGen_4873_; lean_object* v_cache_4874_; lean_object* v_recordedDeps_4875_; lean_object* v_messages_4876_; lean_object* v_infoState_4877_; lean_object* v_snapshotTasks_4878_; lean_object* v___x_4880_; uint8_t v_isShared_4881_; uint8_t v_isSharedCheck_4908_; 
v___x_4868_ = lean_st_ref_take(v___y_4846_);
v_traceState_4869_ = lean_ctor_get(v___x_4868_, 4);
v_env_4870_ = lean_ctor_get(v___x_4868_, 0);
v_nextMacroScope_4871_ = lean_ctor_get(v___x_4868_, 1);
v_ngen_4872_ = lean_ctor_get(v___x_4868_, 2);
v_auxDeclNGen_4873_ = lean_ctor_get(v___x_4868_, 3);
v_cache_4874_ = lean_ctor_get(v___x_4868_, 5);
v_recordedDeps_4875_ = lean_ctor_get(v___x_4868_, 6);
v_messages_4876_ = lean_ctor_get(v___x_4868_, 7);
v_infoState_4877_ = lean_ctor_get(v___x_4868_, 8);
v_snapshotTasks_4878_ = lean_ctor_get(v___x_4868_, 9);
v_isSharedCheck_4908_ = !lean_is_exclusive(v___x_4868_);
if (v_isSharedCheck_4908_ == 0)
{
v___x_4880_ = v___x_4868_;
v_isShared_4881_ = v_isSharedCheck_4908_;
goto v_resetjp_4879_;
}
else
{
lean_inc(v_snapshotTasks_4878_);
lean_inc(v_infoState_4877_);
lean_inc(v_messages_4876_);
lean_inc(v_recordedDeps_4875_);
lean_inc(v_cache_4874_);
lean_inc(v_traceState_4869_);
lean_inc(v_auxDeclNGen_4873_);
lean_inc(v_ngen_4872_);
lean_inc(v_nextMacroScope_4871_);
lean_inc(v_env_4870_);
lean_dec(v___x_4868_);
v___x_4880_ = lean_box(0);
v_isShared_4881_ = v_isSharedCheck_4908_;
goto v_resetjp_4879_;
}
v_resetjp_4879_:
{
uint64_t v_tid_4882_; lean_object* v_traces_4883_; lean_object* v___x_4885_; uint8_t v_isShared_4886_; uint8_t v_isSharedCheck_4907_; 
v_tid_4882_ = lean_ctor_get_uint64(v_traceState_4869_, sizeof(void*)*1);
v_traces_4883_ = lean_ctor_get(v_traceState_4869_, 0);
v_isSharedCheck_4907_ = !lean_is_exclusive(v_traceState_4869_);
if (v_isSharedCheck_4907_ == 0)
{
v___x_4885_ = v_traceState_4869_;
v_isShared_4886_ = v_isSharedCheck_4907_;
goto v_resetjp_4884_;
}
else
{
lean_inc(v_traces_4883_);
lean_dec(v_traceState_4869_);
v___x_4885_ = lean_box(0);
v_isShared_4886_ = v_isSharedCheck_4907_;
goto v_resetjp_4884_;
}
v_resetjp_4884_:
{
lean_object* v___x_4887_; lean_object* v___x_4888_; double v___x_4889_; uint8_t v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4898_; 
v___x_4887_ = lean_box(0);
v___x_4888_ = lean_box(0);
v___x_4889_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0);
v___x_4890_ = 0;
v___x_4891_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__4));
v___x_4892_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4892_, 0, v_cls_4841_);
lean_ctor_set(v___x_4892_, 1, v___x_4888_);
lean_ctor_set(v___x_4892_, 2, v___x_4891_);
lean_ctor_set_float(v___x_4892_, sizeof(void*)*3, v___x_4889_);
lean_ctor_set_float(v___x_4892_, sizeof(void*)*3 + 8, v___x_4889_);
lean_ctor_set_uint8(v___x_4892_, sizeof(void*)*3 + 16, v___x_4890_);
v___x_4893_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___closed__0));
v___x_4894_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4894_, 0, v___x_4892_);
lean_ctor_set(v___x_4894_, 1, v___x_4867_);
lean_ctor_set(v___x_4894_, 2, v___x_4893_);
lean_inc(v_ref_4848_);
v___x_4895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4895_, 0, v_ref_4848_);
lean_ctor_set(v___x_4895_, 1, v___x_4894_);
v___x_4896_ = l_Lean_PersistentArray_push___redArg(v_traces_4883_, v___x_4895_);
if (v_isShared_4886_ == 0)
{
lean_ctor_set(v___x_4885_, 0, v___x_4896_);
v___x_4898_ = v___x_4885_;
goto v_reusejp_4897_;
}
else
{
lean_object* v_reuseFailAlloc_4906_; 
v_reuseFailAlloc_4906_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4906_, 0, v___x_4896_);
lean_ctor_set_uint64(v_reuseFailAlloc_4906_, sizeof(void*)*1, v_tid_4882_);
v___x_4898_ = v_reuseFailAlloc_4906_;
goto v_reusejp_4897_;
}
v_reusejp_4897_:
{
lean_object* v___x_4900_; 
if (v_isShared_4881_ == 0)
{
lean_ctor_set(v___x_4880_, 4, v___x_4898_);
v___x_4900_ = v___x_4880_;
goto v_reusejp_4899_;
}
else
{
lean_object* v_reuseFailAlloc_4905_; 
v_reuseFailAlloc_4905_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4905_, 0, v_env_4870_);
lean_ctor_set(v_reuseFailAlloc_4905_, 1, v_nextMacroScope_4871_);
lean_ctor_set(v_reuseFailAlloc_4905_, 2, v_ngen_4872_);
lean_ctor_set(v_reuseFailAlloc_4905_, 3, v_auxDeclNGen_4873_);
lean_ctor_set(v_reuseFailAlloc_4905_, 4, v___x_4898_);
lean_ctor_set(v_reuseFailAlloc_4905_, 5, v_cache_4874_);
lean_ctor_set(v_reuseFailAlloc_4905_, 6, v_recordedDeps_4875_);
lean_ctor_set(v_reuseFailAlloc_4905_, 7, v_messages_4876_);
lean_ctor_set(v_reuseFailAlloc_4905_, 8, v_infoState_4877_);
lean_ctor_set(v_reuseFailAlloc_4905_, 9, v_snapshotTasks_4878_);
v___x_4900_ = v_reuseFailAlloc_4905_;
goto v_reusejp_4899_;
}
v_reusejp_4899_:
{
lean_object* v___x_4901_; lean_object* v___x_4903_; 
v___x_4901_ = lean_st_ref_put(v___y_4846_, v___x_4900_);
if (v_isShared_4856_ == 0)
{
lean_ctor_set(v___x_4855_, 0, v___x_4887_);
v___x_4903_ = v___x_4855_;
goto v_reusejp_4902_;
}
else
{
lean_object* v_reuseFailAlloc_4904_; 
v_reuseFailAlloc_4904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4904_, 0, v___x_4887_);
v___x_4903_ = v_reuseFailAlloc_4904_;
goto v_reusejp_4902_;
}
v_reusejp_4902_:
{
return v___x_4903_;
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
lean_object* v_a_4913_; lean_object* v___x_4915_; uint8_t v_isShared_4916_; uint8_t v_isSharedCheck_4920_; 
lean_dec(v___x_4851_);
lean_dec_ref(v_env_4850_);
lean_dec_ref(v_msg_4842_);
lean_dec(v_cls_4841_);
v_a_4913_ = lean_ctor_get(v___x_4852_, 0);
v_isSharedCheck_4920_ = !lean_is_exclusive(v___x_4852_);
if (v_isSharedCheck_4920_ == 0)
{
v___x_4915_ = v___x_4852_;
v_isShared_4916_ = v_isSharedCheck_4920_;
goto v_resetjp_4914_;
}
else
{
lean_inc(v_a_4913_);
lean_dec(v___x_4852_);
v___x_4915_ = lean_box(0);
v_isShared_4916_ = v_isSharedCheck_4920_;
goto v_resetjp_4914_;
}
v_resetjp_4914_:
{
lean_object* v___x_4918_; 
if (v_isShared_4916_ == 0)
{
v___x_4918_ = v___x_4915_;
goto v_reusejp_4917_;
}
else
{
lean_object* v_reuseFailAlloc_4919_; 
v_reuseFailAlloc_4919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4919_, 0, v_a_4913_);
v___x_4918_ = v_reuseFailAlloc_4919_;
goto v_reusejp_4917_;
}
v_reusejp_4917_:
{
return v___x_4918_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___boxed(lean_object* v_cls_4921_, lean_object* v_msg_4922_, lean_object* v___y_4923_, lean_object* v___y_4924_, lean_object* v___y_4925_, lean_object* v___y_4926_, lean_object* v___y_4927_){
_start:
{
lean_object* v_res_4928_; 
v_res_4928_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg(v_cls_4921_, v_msg_4922_, v___y_4923_, v___y_4924_, v___y_4925_, v___y_4926_);
lean_dec(v___y_4926_);
lean_dec_ref(v___y_4925_);
lean_dec(v___y_4924_);
lean_dec_ref(v___y_4923_);
return v_res_4928_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1(lean_object* v_cls_4929_, lean_object* v_msg_4930_, lean_object* v___y_4931_, lean_object* v___y_4932_, lean_object* v___y_4933_, lean_object* v___y_4934_, lean_object* v___y_4935_, lean_object* v___y_4936_){
_start:
{
lean_object* v___x_4938_; 
v___x_4938_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg(v_cls_4929_, v_msg_4930_, v___y_4933_, v___y_4934_, v___y_4935_, v___y_4936_);
return v___x_4938_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___boxed(lean_object* v_cls_4939_, lean_object* v_msg_4940_, lean_object* v___y_4941_, lean_object* v___y_4942_, lean_object* v___y_4943_, lean_object* v___y_4944_, lean_object* v___y_4945_, lean_object* v___y_4946_, lean_object* v___y_4947_){
_start:
{
lean_object* v_res_4948_; 
v_res_4948_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1(v_cls_4939_, v_msg_4940_, v___y_4941_, v___y_4942_, v___y_4943_, v___y_4944_, v___y_4945_, v___y_4946_);
lean_dec(v___y_4946_);
lean_dec_ref(v___y_4945_);
lean_dec(v___y_4944_);
lean_dec_ref(v___y_4943_);
lean_dec(v___y_4942_);
lean_dec_ref(v___y_4941_);
return v_res_4948_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0(void){
_start:
{
lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; 
v___x_4949_ = lean_box(0);
v___x_4950_ = lean_unsigned_to_nat(16u);
v___x_4951_ = lean_mk_array(v___x_4950_, v___x_4949_);
return v___x_4951_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; 
v___x_4952_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__0);
v___x_4953_ = lean_unsigned_to_nat(0u);
v___x_4954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4954_, 0, v___x_4953_);
lean_ctor_set(v___x_4954_, 1, v___x_4952_);
return v___x_4954_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0(size_t v_sz_4955_, size_t v_i_4956_, lean_object* v_bs_4957_){
_start:
{
uint8_t v___x_4958_; 
v___x_4958_ = lean_usize_dec_lt(v_i_4956_, v_sz_4955_);
if (v___x_4958_ == 0)
{
return v_bs_4957_;
}
else
{
lean_object* v___x_4959_; lean_object* v_bs_x27_4960_; lean_object* v___x_4961_; size_t v___x_4962_; size_t v___x_4963_; lean_object* v___x_4964_; 
v___x_4959_ = lean_unsigned_to_nat(0u);
v_bs_x27_4960_ = lean_array_uset(v_bs_4957_, v_i_4956_, v___x_4959_);
v___x_4961_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1);
v___x_4962_ = ((size_t)1ULL);
v___x_4963_ = lean_usize_add(v_i_4956_, v___x_4962_);
v___x_4964_ = lean_array_uset(v_bs_x27_4960_, v_i_4956_, v___x_4961_);
v_i_4956_ = v___x_4963_;
v_bs_4957_ = v___x_4964_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___boxed(lean_object* v_sz_4966_, lean_object* v_i_4967_, lean_object* v_bs_4968_){
_start:
{
size_t v_sz_boxed_4969_; size_t v_i_boxed_4970_; lean_object* v_res_4971_; 
v_sz_boxed_4969_ = lean_unbox_usize(v_sz_4966_);
lean_dec(v_sz_4966_);
v_i_boxed_4970_ = lean_unbox_usize(v_i_4967_);
lean_dec(v_i_4967_);
v_res_4971_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0(v_sz_boxed_4969_, v_i_boxed_4970_, v_bs_4968_);
return v_res_4971_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1(void){
_start:
{
lean_object* v___x_4973_; lean_object* v___x_4974_; 
v___x_4973_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__0));
v___x_4974_ = l_Lean_stringToMessageData(v___x_4973_);
return v___x_4974_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3(void){
_start:
{
lean_object* v___x_4976_; lean_object* v___x_4977_; 
v___x_4976_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__2));
v___x_4977_ = l_Lean_stringToMessageData(v___x_4976_);
return v___x_4977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(lean_object* v_n_4978_, lean_object* v_a_4979_, lean_object* v_a_4980_, lean_object* v_a_4981_, lean_object* v_a_4982_, lean_object* v_a_4983_, lean_object* v_a_4984_){
_start:
{
lean_object* v___x_4989_; lean_object* v_decls_4990_; lean_object* v_funVals_4991_; lean_object* v___x_4993_; uint8_t v_isShared_4994_; uint8_t v_isSharedCheck_5031_; 
v___x_4989_ = lean_st_ref_take(v_a_4980_);
v_decls_4990_ = lean_ctor_get(v_a_4979_, 0);
v_funVals_4991_ = lean_ctor_get(v___x_4989_, 1);
v_isSharedCheck_5031_ = !lean_is_exclusive(v___x_4989_);
if (v_isSharedCheck_5031_ == 0)
{
lean_object* v_unused_5032_; 
v_unused_5032_ = lean_ctor_get(v___x_4989_, 0);
lean_dec(v_unused_5032_);
v___x_4993_ = v___x_4989_;
v_isShared_4994_ = v_isSharedCheck_5031_;
goto v_resetjp_4992_;
}
else
{
lean_inc(v_funVals_4991_);
lean_dec(v___x_4989_);
v___x_4993_ = lean_box(0);
v_isShared_4994_ = v_isSharedCheck_5031_;
goto v_resetjp_4992_;
}
v___jp_4986_:
{
lean_object* v___x_4987_; lean_object* v___x_4988_; 
v___x_4987_ = lean_box(0);
v___x_4988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4988_, 0, v___x_4987_);
return v___x_4988_;
}
v_resetjp_4992_:
{
size_t v_sz_4995_; size_t v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4999_; 
v_sz_4995_ = lean_array_size(v_decls_4990_);
v___x_4996_ = ((size_t)0ULL);
lean_inc_ref(v_decls_4990_);
v___x_4997_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0(v_sz_4995_, v___x_4996_, v_decls_4990_);
if (v_isShared_4994_ == 0)
{
lean_ctor_set(v___x_4993_, 0, v___x_4997_);
v___x_4999_ = v___x_4993_;
goto v_reusejp_4998_;
}
else
{
lean_object* v_reuseFailAlloc_5030_; 
v_reuseFailAlloc_5030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5030_, 0, v___x_4997_);
lean_ctor_set(v_reuseFailAlloc_5030_, 1, v_funVals_4991_);
v___x_4999_ = v_reuseFailAlloc_5030_;
goto v_reusejp_4998_;
}
v_reusejp_4998_:
{
lean_object* v___x_5000_; lean_object* v___x_5001_; 
v___x_5000_ = lean_st_ref_put(v_a_4980_, v___x_4999_);
v___x_5001_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferStep(v_a_4979_, v_a_4980_, v_a_4981_, v_a_4982_, v_a_4983_, v_a_4984_);
if (lean_obj_tag(v___x_5001_) == 0)
{
lean_object* v_a_5002_; uint8_t v___x_5003_; 
v_a_5002_ = lean_ctor_get(v___x_5001_, 0);
lean_inc(v_a_5002_);
lean_dec_ref_known(v___x_5001_, 1);
v___x_5003_ = lean_unbox(v_a_5002_);
lean_dec(v_a_5002_);
if (v___x_5003_ == 0)
{
lean_object* v_toCold_5004_; lean_object* v_options_5005_; uint8_t v_hasTrace_5006_; 
v_toCold_5004_ = lean_ctor_get(v_a_4983_, 0);
v_options_5005_ = lean_ctor_get(v_toCold_5004_, 2);
v_hasTrace_5006_ = lean_ctor_get_uint8(v_options_5005_, sizeof(void*)*1);
if (v_hasTrace_5006_ == 0)
{
lean_dec(v_n_4978_);
goto v___jp_4986_;
}
else
{
lean_object* v_inheritedTraceOptions_5007_; lean_object* v___x_5008_; lean_object* v___x_5009_; uint8_t v___x_5010_; 
v_inheritedTraceOptions_5007_ = lean_ctor_get(v_toCold_5004_, 11);
v___x_5008_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3));
v___x_5009_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7);
v___x_5010_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5007_, v_options_5005_, v___x_5009_);
if (v___x_5010_ == 0)
{
lean_dec(v_n_4978_);
goto v___jp_4986_;
}
else
{
lean_object* v___x_5011_; lean_object* v___x_5012_; lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; 
v___x_5011_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1, &l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__1);
v___x_5012_ = l_Nat_reprFast(v_n_4978_);
v___x_5013_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5013_, 0, v___x_5012_);
v___x_5014_ = l_Lean_MessageData_ofFormat(v___x_5013_);
v___x_5015_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5015_, 0, v___x_5011_);
lean_ctor_set(v___x_5015_, 1, v___x_5014_);
v___x_5016_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3, &l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___closed__3);
v___x_5017_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5017_, 0, v___x_5015_);
lean_ctor_set(v___x_5017_, 1, v___x_5016_);
v___x_5018_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg(v___x_5008_, v___x_5017_, v_a_4981_, v_a_4982_, v_a_4983_, v_a_4984_);
if (lean_obj_tag(v___x_5018_) == 0)
{
lean_dec_ref_known(v___x_5018_, 1);
goto v___jp_4986_;
}
else
{
return v___x_5018_;
}
}
}
}
else
{
lean_object* v___x_5019_; lean_object* v___x_5020_; 
v___x_5019_ = lean_unsigned_to_nat(1u);
v___x_5020_ = lean_nat_add(v_n_4978_, v___x_5019_);
lean_dec(v_n_4978_);
v_n_4978_ = v___x_5020_;
goto _start;
}
}
else
{
lean_object* v_a_5022_; lean_object* v___x_5024_; uint8_t v_isShared_5025_; uint8_t v_isSharedCheck_5029_; 
lean_dec(v_n_4978_);
v_a_5022_ = lean_ctor_get(v___x_5001_, 0);
v_isSharedCheck_5029_ = !lean_is_exclusive(v___x_5001_);
if (v_isSharedCheck_5029_ == 0)
{
v___x_5024_ = v___x_5001_;
v_isShared_5025_ = v_isSharedCheck_5029_;
goto v_resetjp_5023_;
}
else
{
lean_inc(v_a_5022_);
lean_dec(v___x_5001_);
v___x_5024_ = lean_box(0);
v_isShared_5025_ = v_isSharedCheck_5029_;
goto v_resetjp_5023_;
}
v_resetjp_5023_:
{
lean_object* v___x_5027_; 
if (v_isShared_5025_ == 0)
{
v___x_5027_ = v___x_5024_;
goto v_reusejp_5026_;
}
else
{
lean_object* v_reuseFailAlloc_5028_; 
v_reuseFailAlloc_5028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5028_, 0, v_a_5022_);
v___x_5027_ = v_reuseFailAlloc_5028_;
goto v_reusejp_5026_;
}
v_reusejp_5026_:
{
return v___x_5027_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_inferMain___boxed(lean_object* v_n_5033_, lean_object* v_a_5034_, lean_object* v_a_5035_, lean_object* v_a_5036_, lean_object* v_a_5037_, lean_object* v_a_5038_, lean_object* v_a_5039_, lean_object* v_a_5040_){
_start:
{
lean_object* v_res_5041_; 
v_res_5041_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(v_n_5033_, v_a_5034_, v_a_5035_, v_a_5036_, v_a_5037_, v_a_5038_, v_a_5039_);
lean_dec(v_a_5039_);
lean_dec_ref(v_a_5038_);
lean_dec(v_a_5037_);
lean_dec_ref(v_a_5036_);
lean_dec(v_a_5035_);
lean_dec_ref(v_a_5034_);
return v_res_5041_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0(void){
_start:
{
lean_object* v___x_5042_; 
v___x_5042_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_5042_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0(lean_object* v_msg_5043_){
_start:
{
lean_object* v___x_5044_; lean_object* v___x_5045_; 
v___x_5044_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0___closed__0);
v___x_5045_ = lean_panic_fn_borrowed(v___x_5044_, v_msg_5043_);
return v___x_5045_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2(lean_object* v_cls_5046_, lean_object* v_msg_5047_, lean_object* v___y_5048_, lean_object* v___y_5049_, lean_object* v___y_5050_, lean_object* v___y_5051_){
_start:
{
lean_object* v_ref_5053_; lean_object* v___x_5054_; lean_object* v_env_5055_; lean_object* v___x_5056_; lean_object* v___x_5057_; 
v_ref_5053_ = lean_ctor_get(v___y_5050_, 2);
v___x_5054_ = lean_st_ref_get(v___y_5051_);
v_env_5055_ = lean_ctor_get(v___x_5054_, 0);
lean_inc_ref(v_env_5055_);
lean_dec(v___x_5054_);
v___x_5056_ = lean_st_ref_get(v___y_5049_);
v___x_5057_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_5048_);
if (lean_obj_tag(v___x_5057_) == 0)
{
lean_object* v_a_5058_; lean_object* v___x_5060_; uint8_t v_isShared_5061_; uint8_t v_isSharedCheck_5117_; 
v_a_5058_ = lean_ctor_get(v___x_5057_, 0);
v_isSharedCheck_5117_ = !lean_is_exclusive(v___x_5057_);
if (v_isSharedCheck_5117_ == 0)
{
v___x_5060_ = v___x_5057_;
v_isShared_5061_ = v_isSharedCheck_5117_;
goto v_resetjp_5059_;
}
else
{
lean_inc(v_a_5058_);
lean_dec(v___x_5057_);
v___x_5060_ = lean_box(0);
v_isShared_5061_ = v_isSharedCheck_5117_;
goto v_resetjp_5059_;
}
v_resetjp_5059_:
{
lean_object* v_lctx_5062_; lean_object* v___x_5064_; uint8_t v_isShared_5065_; uint8_t v_isSharedCheck_5115_; 
v_lctx_5062_ = lean_ctor_get(v___x_5056_, 0);
v_isSharedCheck_5115_ = !lean_is_exclusive(v___x_5056_);
if (v_isSharedCheck_5115_ == 0)
{
lean_object* v_unused_5116_; 
v_unused_5116_ = lean_ctor_get(v___x_5056_, 1);
lean_dec(v_unused_5116_);
v___x_5064_ = v___x_5056_;
v_isShared_5065_ = v_isSharedCheck_5115_;
goto v_resetjp_5063_;
}
else
{
lean_inc(v_lctx_5062_);
lean_dec(v___x_5056_);
v___x_5064_ = lean_box(0);
v_isShared_5065_ = v_isSharedCheck_5115_;
goto v_resetjp_5063_;
}
v_resetjp_5063_:
{
uint8_t v___x_5066_; lean_object* v___x_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; lean_object* v___x_5070_; lean_object* v___x_5072_; 
v___x_5066_ = lean_unbox(v_a_5058_);
lean_dec(v_a_5058_);
v___x_5067_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_5062_, v___x_5066_);
lean_dec_ref(v_lctx_5062_);
v___x_5068_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_5050_);
v___x_5069_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2_spec__2___redArg___closed__1);
v___x_5070_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5070_, 0, v_env_5055_);
lean_ctor_set(v___x_5070_, 1, v___x_5069_);
lean_ctor_set(v___x_5070_, 2, v___x_5067_);
lean_ctor_set(v___x_5070_, 3, v___x_5068_);
if (v_isShared_5065_ == 0)
{
lean_ctor_set_tag(v___x_5064_, 3);
lean_ctor_set(v___x_5064_, 1, v_msg_5047_);
lean_ctor_set(v___x_5064_, 0, v___x_5070_);
v___x_5072_ = v___x_5064_;
goto v_reusejp_5071_;
}
else
{
lean_object* v_reuseFailAlloc_5114_; 
v_reuseFailAlloc_5114_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5114_, 0, v___x_5070_);
lean_ctor_set(v_reuseFailAlloc_5114_, 1, v_msg_5047_);
v___x_5072_ = v_reuseFailAlloc_5114_;
goto v_reusejp_5071_;
}
v_reusejp_5071_:
{
lean_object* v___x_5073_; lean_object* v_traceState_5074_; lean_object* v_env_5075_; lean_object* v_nextMacroScope_5076_; lean_object* v_ngen_5077_; lean_object* v_auxDeclNGen_5078_; lean_object* v_cache_5079_; lean_object* v_recordedDeps_5080_; lean_object* v_messages_5081_; lean_object* v_infoState_5082_; lean_object* v_snapshotTasks_5083_; lean_object* v___x_5085_; uint8_t v_isShared_5086_; uint8_t v_isSharedCheck_5113_; 
v___x_5073_ = lean_st_ref_take(v___y_5051_);
v_traceState_5074_ = lean_ctor_get(v___x_5073_, 4);
v_env_5075_ = lean_ctor_get(v___x_5073_, 0);
v_nextMacroScope_5076_ = lean_ctor_get(v___x_5073_, 1);
v_ngen_5077_ = lean_ctor_get(v___x_5073_, 2);
v_auxDeclNGen_5078_ = lean_ctor_get(v___x_5073_, 3);
v_cache_5079_ = lean_ctor_get(v___x_5073_, 5);
v_recordedDeps_5080_ = lean_ctor_get(v___x_5073_, 6);
v_messages_5081_ = lean_ctor_get(v___x_5073_, 7);
v_infoState_5082_ = lean_ctor_get(v___x_5073_, 8);
v_snapshotTasks_5083_ = lean_ctor_get(v___x_5073_, 9);
v_isSharedCheck_5113_ = !lean_is_exclusive(v___x_5073_);
if (v_isSharedCheck_5113_ == 0)
{
v___x_5085_ = v___x_5073_;
v_isShared_5086_ = v_isSharedCheck_5113_;
goto v_resetjp_5084_;
}
else
{
lean_inc(v_snapshotTasks_5083_);
lean_inc(v_infoState_5082_);
lean_inc(v_messages_5081_);
lean_inc(v_recordedDeps_5080_);
lean_inc(v_cache_5079_);
lean_inc(v_traceState_5074_);
lean_inc(v_auxDeclNGen_5078_);
lean_inc(v_ngen_5077_);
lean_inc(v_nextMacroScope_5076_);
lean_inc(v_env_5075_);
lean_dec(v___x_5073_);
v___x_5085_ = lean_box(0);
v_isShared_5086_ = v_isSharedCheck_5113_;
goto v_resetjp_5084_;
}
v_resetjp_5084_:
{
uint64_t v_tid_5087_; lean_object* v_traces_5088_; lean_object* v___x_5090_; uint8_t v_isShared_5091_; uint8_t v_isSharedCheck_5112_; 
v_tid_5087_ = lean_ctor_get_uint64(v_traceState_5074_, sizeof(void*)*1);
v_traces_5088_ = lean_ctor_get(v_traceState_5074_, 0);
v_isSharedCheck_5112_ = !lean_is_exclusive(v_traceState_5074_);
if (v_isSharedCheck_5112_ == 0)
{
v___x_5090_ = v_traceState_5074_;
v_isShared_5091_ = v_isSharedCheck_5112_;
goto v_resetjp_5089_;
}
else
{
lean_inc(v_traces_5088_);
lean_dec(v_traceState_5074_);
v___x_5090_ = lean_box(0);
v_isShared_5091_ = v_isSharedCheck_5112_;
goto v_resetjp_5089_;
}
v_resetjp_5089_:
{
lean_object* v___x_5092_; lean_object* v___x_5093_; double v___x_5094_; uint8_t v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5103_; 
v___x_5092_ = lean_box(0);
v___x_5093_ = lean_box(0);
v___x_5094_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2___closed__0);
v___x_5095_ = 0;
v___x_5096_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__4));
v___x_5097_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_5097_, 0, v_cls_5046_);
lean_ctor_set(v___x_5097_, 1, v___x_5093_);
lean_ctor_set(v___x_5097_, 2, v___x_5096_);
lean_ctor_set_float(v___x_5097_, sizeof(void*)*3, v___x_5094_);
lean_ctor_set_float(v___x_5097_, sizeof(void*)*3 + 8, v___x_5094_);
lean_ctor_set_uint8(v___x_5097_, sizeof(void*)*3 + 16, v___x_5095_);
v___x_5098_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__1___redArg___closed__0));
v___x_5099_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_5099_, 0, v___x_5097_);
lean_ctor_set(v___x_5099_, 1, v___x_5072_);
lean_ctor_set(v___x_5099_, 2, v___x_5098_);
lean_inc(v_ref_5053_);
v___x_5100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5100_, 0, v_ref_5053_);
lean_ctor_set(v___x_5100_, 1, v___x_5099_);
v___x_5101_ = l_Lean_PersistentArray_push___redArg(v_traces_5088_, v___x_5100_);
if (v_isShared_5091_ == 0)
{
lean_ctor_set(v___x_5090_, 0, v___x_5101_);
v___x_5103_ = v___x_5090_;
goto v_reusejp_5102_;
}
else
{
lean_object* v_reuseFailAlloc_5111_; 
v_reuseFailAlloc_5111_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5111_, 0, v___x_5101_);
lean_ctor_set_uint64(v_reuseFailAlloc_5111_, sizeof(void*)*1, v_tid_5087_);
v___x_5103_ = v_reuseFailAlloc_5111_;
goto v_reusejp_5102_;
}
v_reusejp_5102_:
{
lean_object* v___x_5105_; 
if (v_isShared_5086_ == 0)
{
lean_ctor_set(v___x_5085_, 4, v___x_5103_);
v___x_5105_ = v___x_5085_;
goto v_reusejp_5104_;
}
else
{
lean_object* v_reuseFailAlloc_5110_; 
v_reuseFailAlloc_5110_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_5110_, 0, v_env_5075_);
lean_ctor_set(v_reuseFailAlloc_5110_, 1, v_nextMacroScope_5076_);
lean_ctor_set(v_reuseFailAlloc_5110_, 2, v_ngen_5077_);
lean_ctor_set(v_reuseFailAlloc_5110_, 3, v_auxDeclNGen_5078_);
lean_ctor_set(v_reuseFailAlloc_5110_, 4, v___x_5103_);
lean_ctor_set(v_reuseFailAlloc_5110_, 5, v_cache_5079_);
lean_ctor_set(v_reuseFailAlloc_5110_, 6, v_recordedDeps_5080_);
lean_ctor_set(v_reuseFailAlloc_5110_, 7, v_messages_5081_);
lean_ctor_set(v_reuseFailAlloc_5110_, 8, v_infoState_5082_);
lean_ctor_set(v_reuseFailAlloc_5110_, 9, v_snapshotTasks_5083_);
v___x_5105_ = v_reuseFailAlloc_5110_;
goto v_reusejp_5104_;
}
v_reusejp_5104_:
{
lean_object* v___x_5106_; lean_object* v___x_5108_; 
v___x_5106_ = lean_st_ref_put(v___y_5051_, v___x_5105_);
if (v_isShared_5061_ == 0)
{
lean_ctor_set(v___x_5060_, 0, v___x_5092_);
v___x_5108_ = v___x_5060_;
goto v_reusejp_5107_;
}
else
{
lean_object* v_reuseFailAlloc_5109_; 
v_reuseFailAlloc_5109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5109_, 0, v___x_5092_);
v___x_5108_ = v_reuseFailAlloc_5109_;
goto v_reusejp_5107_;
}
v_reusejp_5107_:
{
return v___x_5108_;
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
lean_object* v_a_5118_; lean_object* v___x_5120_; uint8_t v_isShared_5121_; uint8_t v_isSharedCheck_5125_; 
lean_dec(v___x_5056_);
lean_dec_ref(v_env_5055_);
lean_dec_ref(v_msg_5047_);
lean_dec(v_cls_5046_);
v_a_5118_ = lean_ctor_get(v___x_5057_, 0);
v_isSharedCheck_5125_ = !lean_is_exclusive(v___x_5057_);
if (v_isSharedCheck_5125_ == 0)
{
v___x_5120_ = v___x_5057_;
v_isShared_5121_ = v_isSharedCheck_5125_;
goto v_resetjp_5119_;
}
else
{
lean_inc(v_a_5118_);
lean_dec(v___x_5057_);
v___x_5120_ = lean_box(0);
v_isShared_5121_ = v_isSharedCheck_5125_;
goto v_resetjp_5119_;
}
v_resetjp_5119_:
{
lean_object* v___x_5123_; 
if (v_isShared_5121_ == 0)
{
v___x_5123_ = v___x_5120_;
goto v_reusejp_5122_;
}
else
{
lean_object* v_reuseFailAlloc_5124_; 
v_reuseFailAlloc_5124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5124_, 0, v_a_5118_);
v___x_5123_ = v_reuseFailAlloc_5124_;
goto v_reusejp_5122_;
}
v_reusejp_5122_:
{
return v___x_5123_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2___boxed(lean_object* v_cls_5126_, lean_object* v_msg_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_, lean_object* v___y_5130_, lean_object* v___y_5131_, lean_object* v___y_5132_){
_start:
{
lean_object* v_res_5133_; 
v_res_5133_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2(v_cls_5126_, v_msg_5127_, v___y_5128_, v___y_5129_, v___y_5130_, v___y_5131_);
lean_dec(v___y_5131_);
lean_dec_ref(v___y_5130_);
lean_dec(v___y_5129_);
lean_dec_ref(v___y_5128_);
return v_res_5133_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___redArg(lean_object* v_as_5134_, size_t v_i_5135_, size_t v_stop_5136_, lean_object* v_b_5137_){
_start:
{
uint8_t v___x_5139_; 
v___x_5139_ = lean_usize_dec_eq(v_i_5135_, v_stop_5136_);
if (v___x_5139_ == 0)
{
lean_object* v_fst_5140_; lean_object* v_snd_5141_; lean_object* v___x_5142_; lean_object* v_snd_5143_; lean_object* v_fst_5144_; lean_object* v_fst_5145_; lean_object* v_snd_5146_; lean_object* v___x_5148_; uint8_t v_isShared_5149_; uint8_t v_isSharedCheck_5160_; 
v_fst_5140_ = lean_ctor_get(v_b_5137_, 0);
lean_inc(v_fst_5140_);
v_snd_5141_ = lean_ctor_get(v_b_5137_, 1);
lean_inc(v_snd_5141_);
lean_dec_ref(v_b_5137_);
v___x_5142_ = lean_array_uget_borrowed(v_as_5134_, v_i_5135_);
v_snd_5143_ = lean_ctor_get(v___x_5142_, 1);
lean_inc(v_snd_5143_);
v_fst_5144_ = lean_ctor_get(v___x_5142_, 0);
v_fst_5145_ = lean_ctor_get(v_snd_5143_, 0);
v_snd_5146_ = lean_ctor_get(v_snd_5143_, 1);
v_isSharedCheck_5160_ = !lean_is_exclusive(v_snd_5143_);
if (v_isSharedCheck_5160_ == 0)
{
v___x_5148_ = v_snd_5143_;
v_isShared_5149_ = v_isSharedCheck_5160_;
goto v_resetjp_5147_;
}
else
{
lean_inc(v_snd_5146_);
lean_inc(v_fst_5145_);
lean_dec(v_snd_5143_);
v___x_5148_ = lean_box(0);
v_isShared_5149_ = v_isSharedCheck_5160_;
goto v_resetjp_5147_;
}
v_resetjp_5147_:
{
lean_object* v_fvarId_5150_; lean_object* v___x_5151_; lean_object* v___x_5152_; lean_object* v___x_5153_; lean_object* v___x_5155_; 
v_fvarId_5150_ = lean_ctor_get(v_fst_5144_, 0);
v___x_5151_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_fst_5145_, v_fst_5140_);
lean_dec(v_fst_5145_);
v___x_5152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5152_, 0, v_snd_5146_);
lean_inc(v_fvarId_5150_);
v___x_5153_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_UnreachableBranches_updateVarAssignment_spec__0___redArg(v_snd_5141_, v_fvarId_5150_, v___x_5152_);
if (v_isShared_5149_ == 0)
{
lean_ctor_set(v___x_5148_, 1, v___x_5153_);
lean_ctor_set(v___x_5148_, 0, v___x_5151_);
v___x_5155_ = v___x_5148_;
goto v_reusejp_5154_;
}
else
{
lean_object* v_reuseFailAlloc_5159_; 
v_reuseFailAlloc_5159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5159_, 0, v___x_5151_);
lean_ctor_set(v_reuseFailAlloc_5159_, 1, v___x_5153_);
v___x_5155_ = v_reuseFailAlloc_5159_;
goto v_reusejp_5154_;
}
v_reusejp_5154_:
{
size_t v___x_5156_; size_t v___x_5157_; 
v___x_5156_ = ((size_t)1ULL);
v___x_5157_ = lean_usize_add(v_i_5135_, v___x_5156_);
v_i_5135_ = v___x_5157_;
v_b_5137_ = v___x_5155_;
goto _start;
}
}
}
else
{
lean_object* v___x_5161_; 
v___x_5161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5161_, 0, v_b_5137_);
return v___x_5161_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___redArg___boxed(lean_object* v_as_5162_, lean_object* v_i_5163_, lean_object* v_stop_5164_, lean_object* v_b_5165_, lean_object* v___y_5166_){
_start:
{
size_t v_i_boxed_5167_; size_t v_stop_boxed_5168_; lean_object* v_res_5169_; 
v_i_boxed_5167_ = lean_unbox_usize(v_i_5163_);
lean_dec(v_i_5163_);
v_stop_boxed_5168_ = lean_unbox_usize(v_stop_5164_);
lean_dec(v_stop_5164_);
v_res_5169_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___redArg(v_as_5162_, v_i_boxed_5167_, v_stop_boxed_5168_, v_b_5165_);
lean_dec_ref(v_as_5162_);
return v_res_5169_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg(lean_object* v_a_5170_, lean_object* v_x_5171_){
_start:
{
if (lean_obj_tag(v_x_5171_) == 0)
{
lean_object* v___x_5172_; 
v___x_5172_ = lean_box(0);
return v___x_5172_;
}
else
{
lean_object* v_key_5173_; lean_object* v_value_5174_; lean_object* v_tail_5175_; uint8_t v___x_5176_; 
v_key_5173_ = lean_ctor_get(v_x_5171_, 0);
v_value_5174_ = lean_ctor_get(v_x_5171_, 1);
v_tail_5175_ = lean_ctor_get(v_x_5171_, 2);
v___x_5176_ = l_Lean_instBEqFVarId_beq(v_key_5173_, v_a_5170_);
if (v___x_5176_ == 0)
{
v_x_5171_ = v_tail_5175_;
goto _start;
}
else
{
lean_object* v___x_5178_; 
lean_inc(v_value_5174_);
v___x_5178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5178_, 0, v_value_5174_);
return v___x_5178_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg___boxed(lean_object* v_a_5179_, lean_object* v_x_5180_){
_start:
{
lean_object* v_res_5181_; 
v_res_5181_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg(v_a_5179_, v_x_5180_);
lean_dec(v_x_5180_);
lean_dec(v_a_5179_);
return v_res_5181_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg(lean_object* v_m_5182_, lean_object* v_a_5183_){
_start:
{
lean_object* v_buckets_5184_; lean_object* v___x_5185_; uint64_t v___x_5186_; uint64_t v___x_5187_; uint64_t v___x_5188_; uint64_t v_fold_5189_; uint64_t v___x_5190_; uint64_t v___x_5191_; uint64_t v___x_5192_; size_t v___x_5193_; size_t v___x_5194_; size_t v___x_5195_; size_t v___x_5196_; size_t v___x_5197_; lean_object* v___x_5198_; lean_object* v___x_5199_; 
v_buckets_5184_ = lean_ctor_get(v_m_5182_, 1);
v___x_5185_ = lean_array_get_size(v_buckets_5184_);
v___x_5186_ = l_Lean_instHashableFVarId_hash(v_a_5183_);
v___x_5187_ = 32ULL;
v___x_5188_ = lean_uint64_shift_right(v___x_5186_, v___x_5187_);
v_fold_5189_ = lean_uint64_xor(v___x_5186_, v___x_5188_);
v___x_5190_ = 16ULL;
v___x_5191_ = lean_uint64_shift_right(v_fold_5189_, v___x_5190_);
v___x_5192_ = lean_uint64_xor(v_fold_5189_, v___x_5191_);
v___x_5193_ = lean_uint64_to_usize(v___x_5192_);
v___x_5194_ = lean_usize_of_nat(v___x_5185_);
v___x_5195_ = ((size_t)1ULL);
v___x_5196_ = lean_usize_sub(v___x_5194_, v___x_5195_);
v___x_5197_ = lean_usize_land(v___x_5193_, v___x_5196_);
v___x_5198_ = lean_array_uget_borrowed(v_buckets_5184_, v___x_5197_);
v___x_5199_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg(v_a_5183_, v___x_5198_);
return v___x_5199_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg___boxed(lean_object* v_m_5200_, lean_object* v_a_5201_){
_start:
{
lean_object* v_res_5202_; 
v_res_5202_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg(v_m_5200_, v_a_5201_);
lean_dec(v_a_5201_);
lean_dec_ref(v_m_5200_);
return v_res_5202_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3_spec__4(lean_object* v_assignment_5203_, lean_object* v_as_5204_, size_t v_i_5205_, size_t v_stop_5206_, lean_object* v_b_5207_, lean_object* v___y_5208_, lean_object* v___y_5209_, lean_object* v___y_5210_, lean_object* v___y_5211_){
_start:
{
lean_object* v_a_5214_; uint8_t v___x_5218_; 
v___x_5218_ = lean_usize_dec_eq(v_i_5205_, v_stop_5206_);
if (v___x_5218_ == 0)
{
lean_object* v___x_5219_; lean_object* v_fvarId_5220_; lean_object* v___x_5221_; 
v___x_5219_ = lean_array_uget_borrowed(v_as_5204_, v_i_5205_);
v_fvarId_5220_ = lean_ctor_get(v___x_5219_, 0);
v___x_5221_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg(v_assignment_5203_, v_fvarId_5220_);
if (lean_obj_tag(v___x_5221_) == 1)
{
lean_object* v_val_5222_; lean_object* v___x_5223_; 
v_val_5222_ = lean_ctor_get(v___x_5221_, 0);
lean_inc(v_val_5222_);
lean_dec_ref_known(v___x_5221_, 1);
v___x_5223_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_getLiteral(v_val_5222_, v___y_5208_, v___y_5209_, v___y_5210_, v___y_5211_);
if (lean_obj_tag(v___x_5223_) == 0)
{
lean_object* v_a_5224_; 
v_a_5224_ = lean_ctor_get(v___x_5223_, 0);
lean_inc(v_a_5224_);
lean_dec_ref_known(v___x_5223_, 1);
if (lean_obj_tag(v_a_5224_) == 1)
{
lean_object* v_val_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; 
v_val_5225_ = lean_ctor_get(v_a_5224_, 0);
lean_inc(v_val_5225_);
lean_dec_ref_known(v_a_5224_, 1);
lean_inc(v___x_5219_);
v___x_5226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5226_, 0, v___x_5219_);
lean_ctor_set(v___x_5226_, 1, v_val_5225_);
v___x_5227_ = lean_array_push(v_b_5207_, v___x_5226_);
v_a_5214_ = v___x_5227_;
goto v___jp_5213_;
}
else
{
lean_dec(v_a_5224_);
v_a_5214_ = v_b_5207_;
goto v___jp_5213_;
}
}
else
{
lean_object* v_a_5228_; lean_object* v___x_5230_; uint8_t v_isShared_5231_; uint8_t v_isSharedCheck_5235_; 
lean_dec_ref(v_b_5207_);
v_a_5228_ = lean_ctor_get(v___x_5223_, 0);
v_isSharedCheck_5235_ = !lean_is_exclusive(v___x_5223_);
if (v_isSharedCheck_5235_ == 0)
{
v___x_5230_ = v___x_5223_;
v_isShared_5231_ = v_isSharedCheck_5235_;
goto v_resetjp_5229_;
}
else
{
lean_inc(v_a_5228_);
lean_dec(v___x_5223_);
v___x_5230_ = lean_box(0);
v_isShared_5231_ = v_isSharedCheck_5235_;
goto v_resetjp_5229_;
}
v_resetjp_5229_:
{
lean_object* v___x_5233_; 
if (v_isShared_5231_ == 0)
{
v___x_5233_ = v___x_5230_;
goto v_reusejp_5232_;
}
else
{
lean_object* v_reuseFailAlloc_5234_; 
v_reuseFailAlloc_5234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5234_, 0, v_a_5228_);
v___x_5233_ = v_reuseFailAlloc_5234_;
goto v_reusejp_5232_;
}
v_reusejp_5232_:
{
return v___x_5233_;
}
}
}
}
else
{
lean_dec(v___x_5221_);
v_a_5214_ = v_b_5207_;
goto v___jp_5213_;
}
}
else
{
lean_object* v___x_5236_; 
v___x_5236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5236_, 0, v_b_5207_);
return v___x_5236_;
}
v___jp_5213_:
{
size_t v___x_5215_; size_t v___x_5216_; 
v___x_5215_ = ((size_t)1ULL);
v___x_5216_ = lean_usize_add(v_i_5205_, v___x_5215_);
v_i_5205_ = v___x_5216_;
v_b_5207_ = v_a_5214_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3_spec__4___boxed(lean_object* v_assignment_5237_, lean_object* v_as_5238_, lean_object* v_i_5239_, lean_object* v_stop_5240_, lean_object* v_b_5241_, lean_object* v___y_5242_, lean_object* v___y_5243_, lean_object* v___y_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_){
_start:
{
size_t v_i_boxed_5247_; size_t v_stop_boxed_5248_; lean_object* v_res_5249_; 
v_i_boxed_5247_ = lean_unbox_usize(v_i_5239_);
lean_dec(v_i_5239_);
v_stop_boxed_5248_ = lean_unbox_usize(v_stop_5240_);
lean_dec(v_stop_5240_);
v_res_5249_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3_spec__4(v_assignment_5237_, v_as_5238_, v_i_boxed_5247_, v_stop_boxed_5248_, v_b_5241_, v___y_5242_, v___y_5243_, v___y_5244_, v___y_5245_);
lean_dec(v___y_5245_);
lean_dec_ref(v___y_5244_);
lean_dec(v___y_5243_);
lean_dec_ref(v___y_5242_);
lean_dec_ref(v_as_5238_);
lean_dec_ref(v_assignment_5237_);
return v_res_5249_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3(lean_object* v_assignment_5252_, lean_object* v_as_5253_, lean_object* v_start_5254_, lean_object* v_stop_5255_, lean_object* v___y_5256_, lean_object* v___y_5257_, lean_object* v___y_5258_, lean_object* v___y_5259_){
_start:
{
lean_object* v___x_5261_; uint8_t v___x_5262_; 
v___x_5261_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3___closed__0));
v___x_5262_ = lean_nat_dec_lt(v_start_5254_, v_stop_5255_);
if (v___x_5262_ == 0)
{
lean_object* v___x_5263_; 
v___x_5263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5263_, 0, v___x_5261_);
return v___x_5263_;
}
else
{
lean_object* v___x_5264_; uint8_t v___x_5265_; 
v___x_5264_ = lean_array_get_size(v_as_5253_);
v___x_5265_ = lean_nat_dec_le(v_stop_5255_, v___x_5264_);
if (v___x_5265_ == 0)
{
uint8_t v___x_5266_; 
v___x_5266_ = lean_nat_dec_lt(v_start_5254_, v___x_5264_);
if (v___x_5266_ == 0)
{
lean_object* v___x_5267_; 
v___x_5267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5267_, 0, v___x_5261_);
return v___x_5267_;
}
else
{
size_t v___x_5268_; size_t v___x_5269_; lean_object* v___x_5270_; 
v___x_5268_ = lean_usize_of_nat(v_start_5254_);
v___x_5269_ = lean_usize_of_nat(v___x_5264_);
v___x_5270_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3_spec__4(v_assignment_5252_, v_as_5253_, v___x_5268_, v___x_5269_, v___x_5261_, v___y_5256_, v___y_5257_, v___y_5258_, v___y_5259_);
return v___x_5270_;
}
}
else
{
size_t v___x_5271_; size_t v___x_5272_; lean_object* v___x_5273_; 
v___x_5271_ = lean_usize_of_nat(v_start_5254_);
v___x_5272_ = lean_usize_of_nat(v_stop_5255_);
v___x_5273_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3_spec__4(v_assignment_5252_, v_as_5253_, v___x_5271_, v___x_5272_, v___x_5261_, v___y_5256_, v___y_5257_, v___y_5258_, v___y_5259_);
return v___x_5273_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3___boxed(lean_object* v_assignment_5274_, lean_object* v_as_5275_, lean_object* v_start_5276_, lean_object* v_stop_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_){
_start:
{
lean_object* v_res_5283_; 
v_res_5283_ = l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3(v_assignment_5274_, v_as_5275_, v_start_5276_, v_stop_5277_, v___y_5278_, v___y_5279_, v___y_5280_, v___y_5281_);
lean_dec(v___y_5281_);
lean_dec_ref(v___y_5280_);
lean_dec(v___y_5279_);
lean_dec_ref(v___y_5278_);
lean_dec(v_stop_5277_);
lean_dec(v_start_5276_);
lean_dec_ref(v_as_5275_);
lean_dec_ref(v_assignment_5274_);
return v_res_5283_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2(void){
_start:
{
lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; 
v___x_5286_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_inductValOfCtor___closed__2));
v___x_5287_ = lean_unsigned_to_nat(9u);
v___x_5288_ = lean_unsigned_to_nat(651u);
v___x_5289_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__1));
v___x_5290_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__0));
v___x_5291_ = l_mkPanicMessageWithDecl(v___x_5290_, v___x_5289_, v___x_5288_, v___x_5287_, v___x_5286_);
return v___x_5291_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5(lean_object* v_resultType_5294_, lean_object* v_discrVal_5295_, lean_object* v_discr_5296_, lean_object* v_assignment_5297_, lean_object* v_i_5298_, lean_object* v_as_5299_, lean_object* v___y_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_, lean_object* v___y_5303_){
_start:
{
lean_object* v___x_5305_; uint8_t v___x_5306_; 
v___x_5305_ = lean_array_get_size(v_as_5299_);
v___x_5306_ = lean_nat_dec_lt(v_i_5298_, v___x_5305_);
if (v___x_5306_ == 0)
{
lean_object* v___x_5307_; 
lean_dec(v_i_5298_);
lean_dec(v_discr_5296_);
lean_dec_ref(v_resultType_5294_);
v___x_5307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5307_, 0, v_as_5299_);
return v___x_5307_;
}
else
{
lean_object* v_a_5308_; lean_object* v_a_5310_; 
v_a_5308_ = lean_array_fget_borrowed(v_as_5299_, v_i_5298_);
if (lean_obj_tag(v_a_5308_) == 0)
{
lean_object* v_ctorName_5321_; lean_object* v_params_5322_; lean_object* v_code_5323_; uint8_t v___x_5324_; lean_object* v___y_5326_; lean_object* v___y_5327_; uint8_t v___x_5339_; 
v_ctorName_5321_ = lean_ctor_get(v_a_5308_, 0);
v_params_5322_ = lean_ctor_get(v_a_5308_, 1);
v_code_5323_ = lean_ctor_get(v_a_5308_, 2);
v___x_5324_ = 0;
v___x_5339_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_containsCtor(v_discrVal_5295_, v_ctorName_5321_);
if (v___x_5339_ == 0)
{
lean_object* v_toCold_5340_; lean_object* v_options_5341_; uint8_t v_hasTrace_5342_; 
v_toCold_5340_ = lean_ctor_get(v___y_5302_, 0);
v_options_5341_ = lean_ctor_get(v_toCold_5340_, 2);
v_hasTrace_5342_ = lean_ctor_get_uint8(v_options_5341_, sizeof(void*)*1);
if (v_hasTrace_5342_ == 0)
{
lean_inc_ref(v_code_5323_);
v___y_5326_ = v___y_5301_;
v___y_5327_ = v_code_5323_;
goto v___jp_5325_;
}
else
{
lean_object* v_inheritedTraceOptions_5343_; lean_object* v_cls_5344_; lean_object* v___x_5345_; uint8_t v___x_5346_; 
v_inheritedTraceOptions_5343_ = lean_ctor_get(v_toCold_5340_, 11);
v_cls_5344_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3));
v___x_5345_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7);
v___x_5346_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5343_, v_options_5341_, v___x_5345_);
if (v___x_5346_ == 0)
{
lean_inc_ref(v_code_5323_);
v___y_5326_ = v___y_5301_;
v___y_5327_ = v_code_5323_;
goto v___jp_5325_;
}
else
{
lean_object* v___x_5347_; 
lean_inc(v_discr_5296_);
v___x_5347_ = l_Lean_Compiler_LCNF_getBinderName(v_discr_5296_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
if (lean_obj_tag(v___x_5347_) == 0)
{
lean_object* v_a_5348_; lean_object* v___x_5349_; lean_object* v___x_5350_; lean_object* v___x_5351_; lean_object* v___x_5352_; lean_object* v___x_5353_; lean_object* v___x_5354_; lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; lean_object* v___x_5358_; 
v_a_5348_ = lean_ctor_get(v___x_5347_, 0);
lean_inc(v_a_5348_);
lean_dec_ref_known(v___x_5347_, 1);
v___x_5349_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___closed__0));
v___x_5350_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_5348_, v___x_5346_);
v___x_5351_ = lean_string_append(v___x_5349_, v___x_5350_);
lean_dec_ref(v___x_5350_);
v___x_5352_ = ((lean_object*)(l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___closed__1));
v___x_5353_ = lean_string_append(v___x_5351_, v___x_5352_);
lean_inc(v_ctorName_5321_);
v___x_5354_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_ctorName_5321_, v___x_5346_);
v___x_5355_ = lean_string_append(v___x_5353_, v___x_5354_);
lean_dec_ref(v___x_5354_);
v___x_5356_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5356_, 0, v___x_5355_);
v___x_5357_ = l_Lean_MessageData_ofFormat(v___x_5356_);
v___x_5358_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2(v_cls_5344_, v___x_5357_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
if (lean_obj_tag(v___x_5358_) == 0)
{
lean_dec_ref_known(v___x_5358_, 1);
lean_inc_ref(v_code_5323_);
v___y_5326_ = v___y_5301_;
v___y_5327_ = v_code_5323_;
goto v___jp_5325_;
}
else
{
lean_object* v_a_5359_; lean_object* v___x_5361_; uint8_t v_isShared_5362_; uint8_t v_isSharedCheck_5366_; 
lean_dec_ref(v_as_5299_);
lean_dec(v_i_5298_);
lean_dec(v_discr_5296_);
lean_dec_ref(v_resultType_5294_);
v_a_5359_ = lean_ctor_get(v___x_5358_, 0);
v_isSharedCheck_5366_ = !lean_is_exclusive(v___x_5358_);
if (v_isSharedCheck_5366_ == 0)
{
v___x_5361_ = v___x_5358_;
v_isShared_5362_ = v_isSharedCheck_5366_;
goto v_resetjp_5360_;
}
else
{
lean_inc(v_a_5359_);
lean_dec(v___x_5358_);
v___x_5361_ = lean_box(0);
v_isShared_5362_ = v_isSharedCheck_5366_;
goto v_resetjp_5360_;
}
v_resetjp_5360_:
{
lean_object* v___x_5364_; 
if (v_isShared_5362_ == 0)
{
v___x_5364_ = v___x_5361_;
goto v_reusejp_5363_;
}
else
{
lean_object* v_reuseFailAlloc_5365_; 
v_reuseFailAlloc_5365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5365_, 0, v_a_5359_);
v___x_5364_ = v_reuseFailAlloc_5365_;
goto v_reusejp_5363_;
}
v_reusejp_5363_:
{
return v___x_5364_;
}
}
}
}
else
{
lean_object* v_a_5367_; lean_object* v___x_5369_; uint8_t v_isShared_5370_; uint8_t v_isSharedCheck_5374_; 
lean_dec_ref(v_as_5299_);
lean_dec(v_i_5298_);
lean_dec(v_discr_5296_);
lean_dec_ref(v_resultType_5294_);
v_a_5367_ = lean_ctor_get(v___x_5347_, 0);
v_isSharedCheck_5374_ = !lean_is_exclusive(v___x_5347_);
if (v_isSharedCheck_5374_ == 0)
{
v___x_5369_ = v___x_5347_;
v_isShared_5370_ = v_isSharedCheck_5374_;
goto v_resetjp_5368_;
}
else
{
lean_inc(v_a_5367_);
lean_dec(v___x_5347_);
v___x_5369_ = lean_box(0);
v_isShared_5370_ = v_isSharedCheck_5374_;
goto v_resetjp_5368_;
}
v_resetjp_5368_:
{
lean_object* v___x_5372_; 
if (v_isShared_5370_ == 0)
{
v___x_5372_ = v___x_5369_;
goto v_reusejp_5371_;
}
else
{
lean_object* v_reuseFailAlloc_5373_; 
v_reuseFailAlloc_5373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5373_, 0, v_a_5367_);
v___x_5372_ = v_reuseFailAlloc_5373_;
goto v_reusejp_5371_;
}
v_reusejp_5371_:
{
return v___x_5372_;
}
}
}
}
}
}
else
{
lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; 
v___x_5375_ = lean_unsigned_to_nat(0u);
v___x_5376_ = lean_array_get_size(v_params_5322_);
v___x_5377_ = l_Array_filterMapM___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__3(v_assignment_5297_, v_params_5322_, v___x_5375_, v___x_5376_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
if (lean_obj_tag(v___x_5377_) == 0)
{
lean_object* v_a_5378_; lean_object* v___x_5379_; uint8_t v___x_5380_; lean_object* v_fst_5382_; lean_object* v_snd_5383_; 
v_a_5378_ = lean_ctor_get(v___x_5377_, 0);
lean_inc(v_a_5378_);
lean_dec_ref_known(v___x_5377_, 1);
v___x_5379_ = lean_array_get_size(v_a_5378_);
v___x_5380_ = lean_nat_dec_eq(v___x_5379_, v___x_5375_);
if (v___x_5380_ == 0)
{
lean_object* v___x_5395_; 
lean_inc_ref(v_code_5323_);
v___x_5395_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5297_, v_code_5323_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
if (lean_obj_tag(v___x_5395_) == 0)
{
lean_object* v_a_5396_; lean_object* v___x_5397_; uint8_t v___x_5398_; 
v_a_5396_ = lean_ctor_get(v___x_5395_, 0);
lean_inc(v_a_5396_);
lean_dec_ref_known(v___x_5395_, 1);
v___x_5397_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0___closed__1);
v___x_5398_ = lean_nat_dec_lt(v___x_5375_, v___x_5379_);
if (v___x_5398_ == 0)
{
lean_dec(v_a_5378_);
v_fst_5382_ = v_a_5396_;
v_snd_5383_ = v___x_5397_;
goto v___jp_5381_;
}
else
{
lean_object* v___x_5399_; size_t v___x_5400_; size_t v___x_5401_; lean_object* v___x_5402_; 
v___x_5399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5399_, 0, v_a_5396_);
lean_ctor_set(v___x_5399_, 1, v___x_5397_);
v___x_5400_ = ((size_t)0ULL);
v___x_5401_ = lean_usize_of_nat(v___x_5379_);
v___x_5402_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___redArg(v_a_5378_, v___x_5400_, v___x_5401_, v___x_5399_);
lean_dec(v_a_5378_);
if (lean_obj_tag(v___x_5402_) == 0)
{
lean_object* v_a_5403_; lean_object* v_fst_5404_; lean_object* v_snd_5405_; 
v_a_5403_ = lean_ctor_get(v___x_5402_, 0);
lean_inc(v_a_5403_);
lean_dec_ref_known(v___x_5402_, 1);
v_fst_5404_ = lean_ctor_get(v_a_5403_, 0);
lean_inc(v_fst_5404_);
v_snd_5405_ = lean_ctor_get(v_a_5403_, 1);
lean_inc(v_snd_5405_);
lean_dec(v_a_5403_);
v_fst_5382_ = v_fst_5404_;
v_snd_5383_ = v_snd_5405_;
goto v___jp_5381_;
}
else
{
lean_object* v_a_5406_; lean_object* v___x_5408_; uint8_t v_isShared_5409_; uint8_t v_isSharedCheck_5413_; 
lean_dec_ref(v_as_5299_);
lean_dec(v_i_5298_);
lean_dec(v_discr_5296_);
lean_dec_ref(v_resultType_5294_);
v_a_5406_ = lean_ctor_get(v___x_5402_, 0);
v_isSharedCheck_5413_ = !lean_is_exclusive(v___x_5402_);
if (v_isSharedCheck_5413_ == 0)
{
v___x_5408_ = v___x_5402_;
v_isShared_5409_ = v_isSharedCheck_5413_;
goto v_resetjp_5407_;
}
else
{
lean_inc(v_a_5406_);
lean_dec(v___x_5402_);
v___x_5408_ = lean_box(0);
v_isShared_5409_ = v_isSharedCheck_5413_;
goto v_resetjp_5407_;
}
v_resetjp_5407_:
{
lean_object* v___x_5411_; 
if (v_isShared_5409_ == 0)
{
v___x_5411_ = v___x_5408_;
goto v_reusejp_5410_;
}
else
{
lean_object* v_reuseFailAlloc_5412_; 
v_reuseFailAlloc_5412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5412_, 0, v_a_5406_);
v___x_5411_ = v_reuseFailAlloc_5412_;
goto v_reusejp_5410_;
}
v_reusejp_5410_:
{
return v___x_5411_;
}
}
}
}
}
else
{
lean_object* v_a_5414_; lean_object* v___x_5416_; uint8_t v_isShared_5417_; uint8_t v_isSharedCheck_5421_; 
lean_dec(v_a_5378_);
lean_dec_ref(v_as_5299_);
lean_dec(v_i_5298_);
lean_dec(v_discr_5296_);
lean_dec_ref(v_resultType_5294_);
v_a_5414_ = lean_ctor_get(v___x_5395_, 0);
v_isSharedCheck_5421_ = !lean_is_exclusive(v___x_5395_);
if (v_isSharedCheck_5421_ == 0)
{
v___x_5416_ = v___x_5395_;
v_isShared_5417_ = v_isSharedCheck_5421_;
goto v_resetjp_5415_;
}
else
{
lean_inc(v_a_5414_);
lean_dec(v___x_5395_);
v___x_5416_ = lean_box(0);
v_isShared_5417_ = v_isSharedCheck_5421_;
goto v_resetjp_5415_;
}
v_resetjp_5415_:
{
lean_object* v___x_5419_; 
if (v_isShared_5417_ == 0)
{
v___x_5419_ = v___x_5416_;
goto v_reusejp_5418_;
}
else
{
lean_object* v_reuseFailAlloc_5420_; 
v_reuseFailAlloc_5420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5420_, 0, v_a_5414_);
v___x_5419_ = v_reuseFailAlloc_5420_;
goto v_reusejp_5418_;
}
v_reusejp_5418_:
{
return v___x_5419_;
}
}
}
}
else
{
lean_object* v___x_5422_; 
lean_dec(v_a_5378_);
lean_inc_ref(v_code_5323_);
v___x_5422_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5297_, v_code_5323_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
if (lean_obj_tag(v___x_5422_) == 0)
{
lean_object* v_a_5423_; lean_object* v___x_5424_; 
v_a_5423_ = lean_ctor_get(v___x_5422_, 0);
lean_inc(v_a_5423_);
lean_dec_ref_known(v___x_5422_, 1);
lean_inc_ref(v_a_5308_);
v___x_5424_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_5308_, v_a_5423_);
v_a_5310_ = v___x_5424_;
goto v___jp_5309_;
}
else
{
lean_object* v_a_5425_; lean_object* v___x_5427_; uint8_t v_isShared_5428_; uint8_t v_isSharedCheck_5432_; 
lean_dec_ref(v_as_5299_);
lean_dec(v_i_5298_);
lean_dec(v_discr_5296_);
lean_dec_ref(v_resultType_5294_);
v_a_5425_ = lean_ctor_get(v___x_5422_, 0);
v_isSharedCheck_5432_ = !lean_is_exclusive(v___x_5422_);
if (v_isSharedCheck_5432_ == 0)
{
v___x_5427_ = v___x_5422_;
v_isShared_5428_ = v_isSharedCheck_5432_;
goto v_resetjp_5426_;
}
else
{
lean_inc(v_a_5425_);
lean_dec(v___x_5422_);
v___x_5427_ = lean_box(0);
v_isShared_5428_ = v_isSharedCheck_5432_;
goto v_resetjp_5426_;
}
v_resetjp_5426_:
{
lean_object* v___x_5430_; 
if (v_isShared_5428_ == 0)
{
v___x_5430_ = v___x_5427_;
goto v_reusejp_5429_;
}
else
{
lean_object* v_reuseFailAlloc_5431_; 
v_reuseFailAlloc_5431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5431_, 0, v_a_5425_);
v___x_5430_ = v_reuseFailAlloc_5431_;
goto v_reusejp_5429_;
}
v_reusejp_5429_:
{
return v___x_5430_;
}
}
}
}
v___jp_5381_:
{
lean_object* v___x_5384_; 
v___x_5384_ = l_Lean_Compiler_LCNF_replaceFVars(v___x_5324_, v_fst_5382_, v_snd_5383_, v___x_5380_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
lean_dec_ref(v_snd_5383_);
if (lean_obj_tag(v___x_5384_) == 0)
{
lean_object* v_a_5385_; lean_object* v___x_5386_; 
v_a_5385_ = lean_ctor_get(v___x_5384_, 0);
lean_inc(v_a_5385_);
lean_dec_ref_known(v___x_5384_, 1);
lean_inc_ref(v_a_5308_);
v___x_5386_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_5308_, v_a_5385_);
v_a_5310_ = v___x_5386_;
goto v___jp_5309_;
}
else
{
lean_object* v_a_5387_; lean_object* v___x_5389_; uint8_t v_isShared_5390_; uint8_t v_isSharedCheck_5394_; 
lean_dec_ref(v_as_5299_);
lean_dec(v_i_5298_);
lean_dec(v_discr_5296_);
lean_dec_ref(v_resultType_5294_);
v_a_5387_ = lean_ctor_get(v___x_5384_, 0);
v_isSharedCheck_5394_ = !lean_is_exclusive(v___x_5384_);
if (v_isSharedCheck_5394_ == 0)
{
v___x_5389_ = v___x_5384_;
v_isShared_5390_ = v_isSharedCheck_5394_;
goto v_resetjp_5388_;
}
else
{
lean_inc(v_a_5387_);
lean_dec(v___x_5384_);
v___x_5389_ = lean_box(0);
v_isShared_5390_ = v_isSharedCheck_5394_;
goto v_resetjp_5388_;
}
v_resetjp_5388_:
{
lean_object* v___x_5392_; 
if (v_isShared_5390_ == 0)
{
v___x_5392_ = v___x_5389_;
goto v_reusejp_5391_;
}
else
{
lean_object* v_reuseFailAlloc_5393_; 
v_reuseFailAlloc_5393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5393_, 0, v_a_5387_);
v___x_5392_ = v_reuseFailAlloc_5393_;
goto v_reusejp_5391_;
}
v_reusejp_5391_:
{
return v___x_5392_;
}
}
}
}
}
else
{
lean_object* v_a_5433_; lean_object* v___x_5435_; uint8_t v_isShared_5436_; uint8_t v_isSharedCheck_5440_; 
lean_dec_ref(v_as_5299_);
lean_dec(v_i_5298_);
lean_dec(v_discr_5296_);
lean_dec_ref(v_resultType_5294_);
v_a_5433_ = lean_ctor_get(v___x_5377_, 0);
v_isSharedCheck_5440_ = !lean_is_exclusive(v___x_5377_);
if (v_isSharedCheck_5440_ == 0)
{
v___x_5435_ = v___x_5377_;
v_isShared_5436_ = v_isSharedCheck_5440_;
goto v_resetjp_5434_;
}
else
{
lean_inc(v_a_5433_);
lean_dec(v___x_5377_);
v___x_5435_ = lean_box(0);
v_isShared_5436_ = v_isSharedCheck_5440_;
goto v_resetjp_5434_;
}
v_resetjp_5434_:
{
lean_object* v___x_5438_; 
if (v_isShared_5436_ == 0)
{
v___x_5438_ = v___x_5435_;
goto v_reusejp_5437_;
}
else
{
lean_object* v_reuseFailAlloc_5439_; 
v_reuseFailAlloc_5439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5439_, 0, v_a_5433_);
v___x_5438_ = v_reuseFailAlloc_5439_;
goto v_reusejp_5437_;
}
v_reusejp_5437_:
{
return v___x_5438_;
}
}
}
}
v___jp_5325_:
{
lean_object* v___x_5328_; 
v___x_5328_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_5324_, v___y_5327_, v___y_5326_);
lean_dec_ref(v___y_5327_);
if (lean_obj_tag(v___x_5328_) == 0)
{
lean_object* v___x_5329_; lean_object* v___x_5330_; 
lean_dec_ref_known(v___x_5328_, 1);
lean_inc_ref(v_resultType_5294_);
v___x_5329_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_5329_, 0, v_resultType_5294_);
lean_inc_ref(v_a_5308_);
v___x_5330_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_5308_, v___x_5329_);
v_a_5310_ = v___x_5330_;
goto v___jp_5309_;
}
else
{
lean_object* v_a_5331_; lean_object* v___x_5333_; uint8_t v_isShared_5334_; uint8_t v_isSharedCheck_5338_; 
lean_dec_ref(v_as_5299_);
lean_dec(v_i_5298_);
lean_dec(v_discr_5296_);
lean_dec_ref(v_resultType_5294_);
v_a_5331_ = lean_ctor_get(v___x_5328_, 0);
v_isSharedCheck_5338_ = !lean_is_exclusive(v___x_5328_);
if (v_isSharedCheck_5338_ == 0)
{
v___x_5333_ = v___x_5328_;
v_isShared_5334_ = v_isSharedCheck_5338_;
goto v_resetjp_5332_;
}
else
{
lean_inc(v_a_5331_);
lean_dec(v___x_5328_);
v___x_5333_ = lean_box(0);
v_isShared_5334_ = v_isSharedCheck_5338_;
goto v_resetjp_5332_;
}
v_resetjp_5332_:
{
lean_object* v___x_5336_; 
if (v_isShared_5334_ == 0)
{
v___x_5336_ = v___x_5333_;
goto v_reusejp_5335_;
}
else
{
lean_object* v_reuseFailAlloc_5337_; 
v_reuseFailAlloc_5337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5337_, 0, v_a_5331_);
v___x_5336_ = v_reuseFailAlloc_5337_;
goto v_reusejp_5335_;
}
v_reusejp_5335_:
{
return v___x_5336_;
}
}
}
}
}
else
{
lean_object* v_code_5441_; lean_object* v___x_5442_; 
v_code_5441_ = lean_ctor_get(v_a_5308_, 0);
lean_inc_ref(v_code_5441_);
v___x_5442_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5297_, v_code_5441_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
if (lean_obj_tag(v___x_5442_) == 0)
{
lean_object* v_a_5443_; lean_object* v___x_5444_; 
v_a_5443_ = lean_ctor_get(v___x_5442_, 0);
lean_inc(v_a_5443_);
lean_dec_ref_known(v___x_5442_, 1);
lean_inc_ref(v_a_5308_);
v___x_5444_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_5308_, v_a_5443_);
v_a_5310_ = v___x_5444_;
goto v___jp_5309_;
}
else
{
lean_object* v_a_5445_; lean_object* v___x_5447_; uint8_t v_isShared_5448_; uint8_t v_isSharedCheck_5452_; 
lean_dec_ref(v_as_5299_);
lean_dec(v_i_5298_);
lean_dec(v_discr_5296_);
lean_dec_ref(v_resultType_5294_);
v_a_5445_ = lean_ctor_get(v___x_5442_, 0);
v_isSharedCheck_5452_ = !lean_is_exclusive(v___x_5442_);
if (v_isSharedCheck_5452_ == 0)
{
v___x_5447_ = v___x_5442_;
v_isShared_5448_ = v_isSharedCheck_5452_;
goto v_resetjp_5446_;
}
else
{
lean_inc(v_a_5445_);
lean_dec(v___x_5442_);
v___x_5447_ = lean_box(0);
v_isShared_5448_ = v_isSharedCheck_5452_;
goto v_resetjp_5446_;
}
v_resetjp_5446_:
{
lean_object* v___x_5450_; 
if (v_isShared_5448_ == 0)
{
v___x_5450_ = v___x_5447_;
goto v_reusejp_5449_;
}
else
{
lean_object* v_reuseFailAlloc_5451_; 
v_reuseFailAlloc_5451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5451_, 0, v_a_5445_);
v___x_5450_ = v_reuseFailAlloc_5451_;
goto v_reusejp_5449_;
}
v_reusejp_5449_:
{
return v___x_5450_;
}
}
}
}
v___jp_5309_:
{
size_t v___x_5311_; size_t v___x_5312_; uint8_t v___x_5313_; 
v___x_5311_ = lean_ptr_addr(v_a_5308_);
v___x_5312_ = lean_ptr_addr(v_a_5310_);
v___x_5313_ = lean_usize_dec_eq(v___x_5311_, v___x_5312_);
if (v___x_5313_ == 0)
{
lean_object* v___x_5314_; lean_object* v___x_5315_; lean_object* v___x_5316_; 
v___x_5314_ = lean_unsigned_to_nat(1u);
v___x_5315_ = lean_nat_add(v_i_5298_, v___x_5314_);
v___x_5316_ = lean_array_fset(v_as_5299_, v_i_5298_, v_a_5310_);
lean_dec(v_i_5298_);
v_i_5298_ = v___x_5315_;
v_as_5299_ = v___x_5316_;
goto _start;
}
else
{
lean_object* v___x_5318_; lean_object* v___x_5319_; 
lean_dec_ref(v_a_5310_);
v___x_5318_ = lean_unsigned_to_nat(1u);
v___x_5319_ = lean_nat_add(v_i_5298_, v___x_5318_);
lean_dec(v_i_5298_);
v_i_5298_ = v___x_5319_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(lean_object* v_assignment_5453_, lean_object* v_code_5454_, lean_object* v_a_5455_, lean_object* v_a_5456_, lean_object* v_a_5457_, lean_object* v_a_5458_){
_start:
{
lean_object* v_decl_5461_; lean_object* v_k_5462_; lean_object* v___y_5463_; lean_object* v___y_5464_; lean_object* v___y_5465_; lean_object* v___y_5466_; 
switch(lean_obj_tag(v_code_5454_))
{
case 0:
{
lean_object* v_decl_5574_; lean_object* v_k_5575_; lean_object* v___x_5576_; 
v_decl_5574_ = lean_ctor_get(v_code_5454_, 0);
v_k_5575_ = lean_ctor_get(v_code_5454_, 1);
lean_inc_ref(v_k_5575_);
v___x_5576_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5453_, v_k_5575_, v_a_5455_, v_a_5456_, v_a_5457_, v_a_5458_);
if (lean_obj_tag(v___x_5576_) == 0)
{
lean_object* v_a_5577_; lean_object* v___x_5579_; uint8_t v_isShared_5580_; uint8_t v_isSharedCheck_5613_; 
v_a_5577_ = lean_ctor_get(v___x_5576_, 0);
v_isSharedCheck_5613_ = !lean_is_exclusive(v___x_5576_);
if (v_isSharedCheck_5613_ == 0)
{
v___x_5579_ = v___x_5576_;
v_isShared_5580_ = v_isSharedCheck_5613_;
goto v_resetjp_5578_;
}
else
{
lean_inc(v_a_5577_);
lean_dec(v___x_5576_);
v___x_5579_ = lean_box(0);
v_isShared_5580_ = v_isSharedCheck_5613_;
goto v_resetjp_5578_;
}
v_resetjp_5578_:
{
size_t v___x_5581_; size_t v___x_5582_; uint8_t v___x_5583_; 
v___x_5581_ = lean_ptr_addr(v_k_5575_);
v___x_5582_ = lean_ptr_addr(v_a_5577_);
v___x_5583_ = lean_usize_dec_eq(v___x_5581_, v___x_5582_);
if (v___x_5583_ == 0)
{
lean_object* v___x_5585_; uint8_t v_isShared_5586_; uint8_t v_isSharedCheck_5593_; 
lean_inc_ref(v_decl_5574_);
v_isSharedCheck_5593_ = !lean_is_exclusive(v_code_5454_);
if (v_isSharedCheck_5593_ == 0)
{
lean_object* v_unused_5594_; lean_object* v_unused_5595_; 
v_unused_5594_ = lean_ctor_get(v_code_5454_, 1);
lean_dec(v_unused_5594_);
v_unused_5595_ = lean_ctor_get(v_code_5454_, 0);
lean_dec(v_unused_5595_);
v___x_5585_ = v_code_5454_;
v_isShared_5586_ = v_isSharedCheck_5593_;
goto v_resetjp_5584_;
}
else
{
lean_dec(v_code_5454_);
v___x_5585_ = lean_box(0);
v_isShared_5586_ = v_isSharedCheck_5593_;
goto v_resetjp_5584_;
}
v_resetjp_5584_:
{
lean_object* v___x_5588_; 
if (v_isShared_5586_ == 0)
{
lean_ctor_set(v___x_5585_, 1, v_a_5577_);
v___x_5588_ = v___x_5585_;
goto v_reusejp_5587_;
}
else
{
lean_object* v_reuseFailAlloc_5592_; 
v_reuseFailAlloc_5592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5592_, 0, v_decl_5574_);
lean_ctor_set(v_reuseFailAlloc_5592_, 1, v_a_5577_);
v___x_5588_ = v_reuseFailAlloc_5592_;
goto v_reusejp_5587_;
}
v_reusejp_5587_:
{
lean_object* v___x_5590_; 
if (v_isShared_5580_ == 0)
{
lean_ctor_set(v___x_5579_, 0, v___x_5588_);
v___x_5590_ = v___x_5579_;
goto v_reusejp_5589_;
}
else
{
lean_object* v_reuseFailAlloc_5591_; 
v_reuseFailAlloc_5591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5591_, 0, v___x_5588_);
v___x_5590_ = v_reuseFailAlloc_5591_;
goto v_reusejp_5589_;
}
v_reusejp_5589_:
{
return v___x_5590_;
}
}
}
}
else
{
size_t v___x_5596_; uint8_t v___x_5597_; 
v___x_5596_ = lean_ptr_addr(v_decl_5574_);
v___x_5597_ = lean_usize_dec_eq(v___x_5596_, v___x_5596_);
if (v___x_5597_ == 0)
{
lean_object* v___x_5599_; uint8_t v_isShared_5600_; uint8_t v_isSharedCheck_5607_; 
lean_inc_ref(v_decl_5574_);
v_isSharedCheck_5607_ = !lean_is_exclusive(v_code_5454_);
if (v_isSharedCheck_5607_ == 0)
{
lean_object* v_unused_5608_; lean_object* v_unused_5609_; 
v_unused_5608_ = lean_ctor_get(v_code_5454_, 1);
lean_dec(v_unused_5608_);
v_unused_5609_ = lean_ctor_get(v_code_5454_, 0);
lean_dec(v_unused_5609_);
v___x_5599_ = v_code_5454_;
v_isShared_5600_ = v_isSharedCheck_5607_;
goto v_resetjp_5598_;
}
else
{
lean_dec(v_code_5454_);
v___x_5599_ = lean_box(0);
v_isShared_5600_ = v_isSharedCheck_5607_;
goto v_resetjp_5598_;
}
v_resetjp_5598_:
{
lean_object* v___x_5602_; 
if (v_isShared_5600_ == 0)
{
lean_ctor_set(v___x_5599_, 1, v_a_5577_);
v___x_5602_ = v___x_5599_;
goto v_reusejp_5601_;
}
else
{
lean_object* v_reuseFailAlloc_5606_; 
v_reuseFailAlloc_5606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5606_, 0, v_decl_5574_);
lean_ctor_set(v_reuseFailAlloc_5606_, 1, v_a_5577_);
v___x_5602_ = v_reuseFailAlloc_5606_;
goto v_reusejp_5601_;
}
v_reusejp_5601_:
{
lean_object* v___x_5604_; 
if (v_isShared_5580_ == 0)
{
lean_ctor_set(v___x_5579_, 0, v___x_5602_);
v___x_5604_ = v___x_5579_;
goto v_reusejp_5603_;
}
else
{
lean_object* v_reuseFailAlloc_5605_; 
v_reuseFailAlloc_5605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5605_, 0, v___x_5602_);
v___x_5604_ = v_reuseFailAlloc_5605_;
goto v_reusejp_5603_;
}
v_reusejp_5603_:
{
return v___x_5604_;
}
}
}
}
else
{
lean_object* v___x_5611_; 
lean_dec(v_a_5577_);
if (v_isShared_5580_ == 0)
{
lean_ctor_set(v___x_5579_, 0, v_code_5454_);
v___x_5611_ = v___x_5579_;
goto v_reusejp_5610_;
}
else
{
lean_object* v_reuseFailAlloc_5612_; 
v_reuseFailAlloc_5612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5612_, 0, v_code_5454_);
v___x_5611_ = v_reuseFailAlloc_5612_;
goto v_reusejp_5610_;
}
v_reusejp_5610_:
{
return v___x_5611_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_code_5454_, 2);
return v___x_5576_;
}
}
case 1:
{
lean_object* v_decl_5614_; lean_object* v_k_5615_; 
v_decl_5614_ = lean_ctor_get(v_code_5454_, 0);
v_k_5615_ = lean_ctor_get(v_code_5454_, 1);
lean_inc_ref(v_k_5615_);
lean_inc_ref(v_decl_5614_);
v_decl_5461_ = v_decl_5614_;
v_k_5462_ = v_k_5615_;
v___y_5463_ = v_a_5455_;
v___y_5464_ = v_a_5456_;
v___y_5465_ = v_a_5457_;
v___y_5466_ = v_a_5458_;
goto v___jp_5460_;
}
case 2:
{
lean_object* v_decl_5616_; lean_object* v_k_5617_; 
v_decl_5616_ = lean_ctor_get(v_code_5454_, 0);
v_k_5617_ = lean_ctor_get(v_code_5454_, 1);
lean_inc_ref(v_k_5617_);
lean_inc_ref(v_decl_5616_);
v_decl_5461_ = v_decl_5616_;
v_k_5462_ = v_k_5617_;
v___y_5463_ = v_a_5455_;
v___y_5464_ = v_a_5456_;
v___y_5465_ = v_a_5457_;
v___y_5466_ = v_a_5458_;
goto v___jp_5460_;
}
case 4:
{
lean_object* v_cases_5618_; lean_object* v_typeName_5619_; lean_object* v_resultType_5620_; lean_object* v_discr_5621_; lean_object* v_alts_5622_; lean_object* v___x_5624_; uint8_t v_isShared_5625_; uint8_t v_isSharedCheck_5663_; 
v_cases_5618_ = lean_ctor_get(v_code_5454_, 0);
lean_inc_ref(v_cases_5618_);
v_typeName_5619_ = lean_ctor_get(v_cases_5618_, 0);
v_resultType_5620_ = lean_ctor_get(v_cases_5618_, 1);
v_discr_5621_ = lean_ctor_get(v_cases_5618_, 2);
v_alts_5622_ = lean_ctor_get(v_cases_5618_, 3);
v_isSharedCheck_5663_ = !lean_is_exclusive(v_cases_5618_);
if (v_isSharedCheck_5663_ == 0)
{
v___x_5624_ = v_cases_5618_;
v_isShared_5625_ = v_isSharedCheck_5663_;
goto v_resetjp_5623_;
}
else
{
lean_inc(v_alts_5622_);
lean_inc(v_discr_5621_);
lean_inc(v_resultType_5620_);
lean_inc(v_typeName_5619_);
lean_dec(v_cases_5618_);
v___x_5624_ = lean_box(0);
v_isShared_5625_ = v_isSharedCheck_5663_;
goto v_resetjp_5623_;
}
v_resetjp_5623_:
{
lean_object* v___x_5626_; lean_object* v_discrVal_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; 
v___x_5626_ = lean_box(0);
v_discrVal_5627_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Compiler_LCNF_UnreachableBranches_findVarValue_spec__0___redArg(v_assignment_5453_, v_discr_5621_, v___x_5626_);
v___x_5628_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_5622_);
lean_inc(v_discr_5621_);
lean_inc_ref(v_resultType_5620_);
v___x_5629_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5(v_resultType_5620_, v_discrVal_5627_, v_discr_5621_, v_assignment_5453_, v___x_5628_, v_alts_5622_, v_a_5455_, v_a_5456_, v_a_5457_, v_a_5458_);
lean_dec(v_discrVal_5627_);
if (lean_obj_tag(v___x_5629_) == 0)
{
lean_object* v_a_5630_; lean_object* v___x_5632_; uint8_t v_isShared_5633_; uint8_t v_isSharedCheck_5654_; 
v_a_5630_ = lean_ctor_get(v___x_5629_, 0);
v_isSharedCheck_5654_ = !lean_is_exclusive(v___x_5629_);
if (v_isSharedCheck_5654_ == 0)
{
v___x_5632_ = v___x_5629_;
v_isShared_5633_ = v_isSharedCheck_5654_;
goto v_resetjp_5631_;
}
else
{
lean_inc(v_a_5630_);
lean_dec(v___x_5629_);
v___x_5632_ = lean_box(0);
v_isShared_5633_ = v_isSharedCheck_5654_;
goto v_resetjp_5631_;
}
v_resetjp_5631_:
{
size_t v___x_5634_; size_t v___x_5635_; uint8_t v___x_5636_; 
v___x_5634_ = lean_ptr_addr(v_alts_5622_);
lean_dec_ref(v_alts_5622_);
v___x_5635_ = lean_ptr_addr(v_a_5630_);
v___x_5636_ = lean_usize_dec_eq(v___x_5634_, v___x_5635_);
if (v___x_5636_ == 0)
{
lean_object* v___x_5638_; uint8_t v_isShared_5639_; uint8_t v_isSharedCheck_5649_; 
v_isSharedCheck_5649_ = !lean_is_exclusive(v_code_5454_);
if (v_isSharedCheck_5649_ == 0)
{
lean_object* v_unused_5650_; 
v_unused_5650_ = lean_ctor_get(v_code_5454_, 0);
lean_dec(v_unused_5650_);
v___x_5638_ = v_code_5454_;
v_isShared_5639_ = v_isSharedCheck_5649_;
goto v_resetjp_5637_;
}
else
{
lean_dec(v_code_5454_);
v___x_5638_ = lean_box(0);
v_isShared_5639_ = v_isSharedCheck_5649_;
goto v_resetjp_5637_;
}
v_resetjp_5637_:
{
lean_object* v___x_5641_; 
if (v_isShared_5625_ == 0)
{
lean_ctor_set(v___x_5624_, 3, v_a_5630_);
v___x_5641_ = v___x_5624_;
goto v_reusejp_5640_;
}
else
{
lean_object* v_reuseFailAlloc_5648_; 
v_reuseFailAlloc_5648_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_5648_, 0, v_typeName_5619_);
lean_ctor_set(v_reuseFailAlloc_5648_, 1, v_resultType_5620_);
lean_ctor_set(v_reuseFailAlloc_5648_, 2, v_discr_5621_);
lean_ctor_set(v_reuseFailAlloc_5648_, 3, v_a_5630_);
v___x_5641_ = v_reuseFailAlloc_5648_;
goto v_reusejp_5640_;
}
v_reusejp_5640_:
{
lean_object* v___x_5643_; 
if (v_isShared_5639_ == 0)
{
lean_ctor_set(v___x_5638_, 0, v___x_5641_);
v___x_5643_ = v___x_5638_;
goto v_reusejp_5642_;
}
else
{
lean_object* v_reuseFailAlloc_5647_; 
v_reuseFailAlloc_5647_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5647_, 0, v___x_5641_);
v___x_5643_ = v_reuseFailAlloc_5647_;
goto v_reusejp_5642_;
}
v_reusejp_5642_:
{
lean_object* v___x_5645_; 
if (v_isShared_5633_ == 0)
{
lean_ctor_set(v___x_5632_, 0, v___x_5643_);
v___x_5645_ = v___x_5632_;
goto v_reusejp_5644_;
}
else
{
lean_object* v_reuseFailAlloc_5646_; 
v_reuseFailAlloc_5646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5646_, 0, v___x_5643_);
v___x_5645_ = v_reuseFailAlloc_5646_;
goto v_reusejp_5644_;
}
v_reusejp_5644_:
{
return v___x_5645_;
}
}
}
}
}
else
{
lean_object* v___x_5652_; 
lean_dec(v_a_5630_);
lean_del_object(v___x_5624_);
lean_dec(v_discr_5621_);
lean_dec_ref(v_resultType_5620_);
lean_dec(v_typeName_5619_);
if (v_isShared_5633_ == 0)
{
lean_ctor_set(v___x_5632_, 0, v_code_5454_);
v___x_5652_ = v___x_5632_;
goto v_reusejp_5651_;
}
else
{
lean_object* v_reuseFailAlloc_5653_; 
v_reuseFailAlloc_5653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5653_, 0, v_code_5454_);
v___x_5652_ = v_reuseFailAlloc_5653_;
goto v_reusejp_5651_;
}
v_reusejp_5651_:
{
return v___x_5652_;
}
}
}
}
else
{
lean_object* v_a_5655_; lean_object* v___x_5657_; uint8_t v_isShared_5658_; uint8_t v_isSharedCheck_5662_; 
lean_del_object(v___x_5624_);
lean_dec_ref(v_alts_5622_);
lean_dec(v_discr_5621_);
lean_dec_ref(v_resultType_5620_);
lean_dec(v_typeName_5619_);
lean_dec_ref_known(v_code_5454_, 1);
v_a_5655_ = lean_ctor_get(v___x_5629_, 0);
v_isSharedCheck_5662_ = !lean_is_exclusive(v___x_5629_);
if (v_isSharedCheck_5662_ == 0)
{
v___x_5657_ = v___x_5629_;
v_isShared_5658_ = v_isSharedCheck_5662_;
goto v_resetjp_5656_;
}
else
{
lean_inc(v_a_5655_);
lean_dec(v___x_5629_);
v___x_5657_ = lean_box(0);
v_isShared_5658_ = v_isSharedCheck_5662_;
goto v_resetjp_5656_;
}
v_resetjp_5656_:
{
lean_object* v___x_5660_; 
if (v_isShared_5658_ == 0)
{
v___x_5660_ = v___x_5657_;
goto v_reusejp_5659_;
}
else
{
lean_object* v_reuseFailAlloc_5661_; 
v_reuseFailAlloc_5661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5661_, 0, v_a_5655_);
v___x_5660_ = v_reuseFailAlloc_5661_;
goto v_reusejp_5659_;
}
v_reusejp_5659_:
{
return v___x_5660_;
}
}
}
}
}
default: 
{
lean_object* v___x_5664_; 
v___x_5664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5664_, 0, v_code_5454_);
return v___x_5664_;
}
}
v___jp_5460_:
{
lean_object* v_params_5467_; lean_object* v_type_5468_; lean_object* v_value_5469_; uint8_t v___x_5470_; lean_object* v___x_5471_; 
v_params_5467_ = lean_ctor_get(v_decl_5461_, 2);
lean_inc_ref(v_params_5467_);
v_type_5468_ = lean_ctor_get(v_decl_5461_, 3);
lean_inc_ref(v_type_5468_);
v_value_5469_ = lean_ctor_get(v_decl_5461_, 4);
v___x_5470_ = 0;
lean_inc_ref(v_value_5469_);
v___x_5471_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5453_, v_value_5469_, v___y_5463_, v___y_5464_, v___y_5465_, v___y_5466_);
if (lean_obj_tag(v___x_5471_) == 0)
{
lean_object* v_a_5472_; lean_object* v___x_5473_; 
v_a_5472_ = lean_ctor_get(v___x_5471_, 0);
lean_inc(v_a_5472_);
lean_dec_ref_known(v___x_5471_, 1);
v___x_5473_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_5470_, v_decl_5461_, v_type_5468_, v_params_5467_, v_a_5472_, v___y_5464_);
if (lean_obj_tag(v___x_5473_) == 0)
{
lean_object* v_a_5474_; lean_object* v___x_5475_; 
v_a_5474_ = lean_ctor_get(v___x_5473_, 0);
lean_inc(v_a_5474_);
lean_dec_ref_known(v___x_5473_, 1);
v___x_5475_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5453_, v_k_5462_, v___y_5463_, v___y_5464_, v___y_5465_, v___y_5466_);
if (lean_obj_tag(v___x_5475_) == 0)
{
switch(lean_obj_tag(v_code_5454_))
{
case 1:
{
lean_object* v_a_5476_; lean_object* v___x_5478_; uint8_t v_isShared_5479_; uint8_t v_isSharedCheck_5515_; 
v_a_5476_ = lean_ctor_get(v___x_5475_, 0);
v_isSharedCheck_5515_ = !lean_is_exclusive(v___x_5475_);
if (v_isSharedCheck_5515_ == 0)
{
v___x_5478_ = v___x_5475_;
v_isShared_5479_ = v_isSharedCheck_5515_;
goto v_resetjp_5477_;
}
else
{
lean_inc(v_a_5476_);
lean_dec(v___x_5475_);
v___x_5478_ = lean_box(0);
v_isShared_5479_ = v_isSharedCheck_5515_;
goto v_resetjp_5477_;
}
v_resetjp_5477_:
{
lean_object* v_decl_5480_; lean_object* v_k_5481_; size_t v___x_5482_; size_t v___x_5483_; uint8_t v___x_5484_; 
v_decl_5480_ = lean_ctor_get(v_code_5454_, 0);
v_k_5481_ = lean_ctor_get(v_code_5454_, 1);
v___x_5482_ = lean_ptr_addr(v_k_5481_);
v___x_5483_ = lean_ptr_addr(v_a_5476_);
v___x_5484_ = lean_usize_dec_eq(v___x_5482_, v___x_5483_);
if (v___x_5484_ == 0)
{
lean_object* v___x_5486_; uint8_t v_isShared_5487_; uint8_t v_isSharedCheck_5494_; 
v_isSharedCheck_5494_ = !lean_is_exclusive(v_code_5454_);
if (v_isSharedCheck_5494_ == 0)
{
lean_object* v_unused_5495_; lean_object* v_unused_5496_; 
v_unused_5495_ = lean_ctor_get(v_code_5454_, 1);
lean_dec(v_unused_5495_);
v_unused_5496_ = lean_ctor_get(v_code_5454_, 0);
lean_dec(v_unused_5496_);
v___x_5486_ = v_code_5454_;
v_isShared_5487_ = v_isSharedCheck_5494_;
goto v_resetjp_5485_;
}
else
{
lean_dec(v_code_5454_);
v___x_5486_ = lean_box(0);
v_isShared_5487_ = v_isSharedCheck_5494_;
goto v_resetjp_5485_;
}
v_resetjp_5485_:
{
lean_object* v___x_5489_; 
if (v_isShared_5487_ == 0)
{
lean_ctor_set(v___x_5486_, 1, v_a_5476_);
lean_ctor_set(v___x_5486_, 0, v_a_5474_);
v___x_5489_ = v___x_5486_;
goto v_reusejp_5488_;
}
else
{
lean_object* v_reuseFailAlloc_5493_; 
v_reuseFailAlloc_5493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5493_, 0, v_a_5474_);
lean_ctor_set(v_reuseFailAlloc_5493_, 1, v_a_5476_);
v___x_5489_ = v_reuseFailAlloc_5493_;
goto v_reusejp_5488_;
}
v_reusejp_5488_:
{
lean_object* v___x_5491_; 
if (v_isShared_5479_ == 0)
{
lean_ctor_set(v___x_5478_, 0, v___x_5489_);
v___x_5491_ = v___x_5478_;
goto v_reusejp_5490_;
}
else
{
lean_object* v_reuseFailAlloc_5492_; 
v_reuseFailAlloc_5492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5492_, 0, v___x_5489_);
v___x_5491_ = v_reuseFailAlloc_5492_;
goto v_reusejp_5490_;
}
v_reusejp_5490_:
{
return v___x_5491_;
}
}
}
}
else
{
size_t v___x_5497_; size_t v___x_5498_; uint8_t v___x_5499_; 
v___x_5497_ = lean_ptr_addr(v_decl_5480_);
v___x_5498_ = lean_ptr_addr(v_a_5474_);
v___x_5499_ = lean_usize_dec_eq(v___x_5497_, v___x_5498_);
if (v___x_5499_ == 0)
{
lean_object* v___x_5501_; uint8_t v_isShared_5502_; uint8_t v_isSharedCheck_5509_; 
v_isSharedCheck_5509_ = !lean_is_exclusive(v_code_5454_);
if (v_isSharedCheck_5509_ == 0)
{
lean_object* v_unused_5510_; lean_object* v_unused_5511_; 
v_unused_5510_ = lean_ctor_get(v_code_5454_, 1);
lean_dec(v_unused_5510_);
v_unused_5511_ = lean_ctor_get(v_code_5454_, 0);
lean_dec(v_unused_5511_);
v___x_5501_ = v_code_5454_;
v_isShared_5502_ = v_isSharedCheck_5509_;
goto v_resetjp_5500_;
}
else
{
lean_dec(v_code_5454_);
v___x_5501_ = lean_box(0);
v_isShared_5502_ = v_isSharedCheck_5509_;
goto v_resetjp_5500_;
}
v_resetjp_5500_:
{
lean_object* v___x_5504_; 
if (v_isShared_5502_ == 0)
{
lean_ctor_set(v___x_5501_, 1, v_a_5476_);
lean_ctor_set(v___x_5501_, 0, v_a_5474_);
v___x_5504_ = v___x_5501_;
goto v_reusejp_5503_;
}
else
{
lean_object* v_reuseFailAlloc_5508_; 
v_reuseFailAlloc_5508_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5508_, 0, v_a_5474_);
lean_ctor_set(v_reuseFailAlloc_5508_, 1, v_a_5476_);
v___x_5504_ = v_reuseFailAlloc_5508_;
goto v_reusejp_5503_;
}
v_reusejp_5503_:
{
lean_object* v___x_5506_; 
if (v_isShared_5479_ == 0)
{
lean_ctor_set(v___x_5478_, 0, v___x_5504_);
v___x_5506_ = v___x_5478_;
goto v_reusejp_5505_;
}
else
{
lean_object* v_reuseFailAlloc_5507_; 
v_reuseFailAlloc_5507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5507_, 0, v___x_5504_);
v___x_5506_ = v_reuseFailAlloc_5507_;
goto v_reusejp_5505_;
}
v_reusejp_5505_:
{
return v___x_5506_;
}
}
}
}
else
{
lean_object* v___x_5513_; 
lean_dec(v_a_5476_);
lean_dec(v_a_5474_);
if (v_isShared_5479_ == 0)
{
lean_ctor_set(v___x_5478_, 0, v_code_5454_);
v___x_5513_ = v___x_5478_;
goto v_reusejp_5512_;
}
else
{
lean_object* v_reuseFailAlloc_5514_; 
v_reuseFailAlloc_5514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5514_, 0, v_code_5454_);
v___x_5513_ = v_reuseFailAlloc_5514_;
goto v_reusejp_5512_;
}
v_reusejp_5512_:
{
return v___x_5513_;
}
}
}
}
}
case 2:
{
lean_object* v_a_5516_; lean_object* v___x_5518_; uint8_t v_isShared_5519_; uint8_t v_isSharedCheck_5555_; 
v_a_5516_ = lean_ctor_get(v___x_5475_, 0);
v_isSharedCheck_5555_ = !lean_is_exclusive(v___x_5475_);
if (v_isSharedCheck_5555_ == 0)
{
v___x_5518_ = v___x_5475_;
v_isShared_5519_ = v_isSharedCheck_5555_;
goto v_resetjp_5517_;
}
else
{
lean_inc(v_a_5516_);
lean_dec(v___x_5475_);
v___x_5518_ = lean_box(0);
v_isShared_5519_ = v_isSharedCheck_5555_;
goto v_resetjp_5517_;
}
v_resetjp_5517_:
{
lean_object* v_decl_5520_; lean_object* v_k_5521_; size_t v___x_5522_; size_t v___x_5523_; uint8_t v___x_5524_; 
v_decl_5520_ = lean_ctor_get(v_code_5454_, 0);
v_k_5521_ = lean_ctor_get(v_code_5454_, 1);
v___x_5522_ = lean_ptr_addr(v_k_5521_);
v___x_5523_ = lean_ptr_addr(v_a_5516_);
v___x_5524_ = lean_usize_dec_eq(v___x_5522_, v___x_5523_);
if (v___x_5524_ == 0)
{
lean_object* v___x_5526_; uint8_t v_isShared_5527_; uint8_t v_isSharedCheck_5534_; 
v_isSharedCheck_5534_ = !lean_is_exclusive(v_code_5454_);
if (v_isSharedCheck_5534_ == 0)
{
lean_object* v_unused_5535_; lean_object* v_unused_5536_; 
v_unused_5535_ = lean_ctor_get(v_code_5454_, 1);
lean_dec(v_unused_5535_);
v_unused_5536_ = lean_ctor_get(v_code_5454_, 0);
lean_dec(v_unused_5536_);
v___x_5526_ = v_code_5454_;
v_isShared_5527_ = v_isSharedCheck_5534_;
goto v_resetjp_5525_;
}
else
{
lean_dec(v_code_5454_);
v___x_5526_ = lean_box(0);
v_isShared_5527_ = v_isSharedCheck_5534_;
goto v_resetjp_5525_;
}
v_resetjp_5525_:
{
lean_object* v___x_5529_; 
if (v_isShared_5527_ == 0)
{
lean_ctor_set(v___x_5526_, 1, v_a_5516_);
lean_ctor_set(v___x_5526_, 0, v_a_5474_);
v___x_5529_ = v___x_5526_;
goto v_reusejp_5528_;
}
else
{
lean_object* v_reuseFailAlloc_5533_; 
v_reuseFailAlloc_5533_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5533_, 0, v_a_5474_);
lean_ctor_set(v_reuseFailAlloc_5533_, 1, v_a_5516_);
v___x_5529_ = v_reuseFailAlloc_5533_;
goto v_reusejp_5528_;
}
v_reusejp_5528_:
{
lean_object* v___x_5531_; 
if (v_isShared_5519_ == 0)
{
lean_ctor_set(v___x_5518_, 0, v___x_5529_);
v___x_5531_ = v___x_5518_;
goto v_reusejp_5530_;
}
else
{
lean_object* v_reuseFailAlloc_5532_; 
v_reuseFailAlloc_5532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5532_, 0, v___x_5529_);
v___x_5531_ = v_reuseFailAlloc_5532_;
goto v_reusejp_5530_;
}
v_reusejp_5530_:
{
return v___x_5531_;
}
}
}
}
else
{
size_t v___x_5537_; size_t v___x_5538_; uint8_t v___x_5539_; 
v___x_5537_ = lean_ptr_addr(v_decl_5520_);
v___x_5538_ = lean_ptr_addr(v_a_5474_);
v___x_5539_ = lean_usize_dec_eq(v___x_5537_, v___x_5538_);
if (v___x_5539_ == 0)
{
lean_object* v___x_5541_; uint8_t v_isShared_5542_; uint8_t v_isSharedCheck_5549_; 
v_isSharedCheck_5549_ = !lean_is_exclusive(v_code_5454_);
if (v_isSharedCheck_5549_ == 0)
{
lean_object* v_unused_5550_; lean_object* v_unused_5551_; 
v_unused_5550_ = lean_ctor_get(v_code_5454_, 1);
lean_dec(v_unused_5550_);
v_unused_5551_ = lean_ctor_get(v_code_5454_, 0);
lean_dec(v_unused_5551_);
v___x_5541_ = v_code_5454_;
v_isShared_5542_ = v_isSharedCheck_5549_;
goto v_resetjp_5540_;
}
else
{
lean_dec(v_code_5454_);
v___x_5541_ = lean_box(0);
v_isShared_5542_ = v_isSharedCheck_5549_;
goto v_resetjp_5540_;
}
v_resetjp_5540_:
{
lean_object* v___x_5544_; 
if (v_isShared_5542_ == 0)
{
lean_ctor_set(v___x_5541_, 1, v_a_5516_);
lean_ctor_set(v___x_5541_, 0, v_a_5474_);
v___x_5544_ = v___x_5541_;
goto v_reusejp_5543_;
}
else
{
lean_object* v_reuseFailAlloc_5548_; 
v_reuseFailAlloc_5548_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5548_, 0, v_a_5474_);
lean_ctor_set(v_reuseFailAlloc_5548_, 1, v_a_5516_);
v___x_5544_ = v_reuseFailAlloc_5548_;
goto v_reusejp_5543_;
}
v_reusejp_5543_:
{
lean_object* v___x_5546_; 
if (v_isShared_5519_ == 0)
{
lean_ctor_set(v___x_5518_, 0, v___x_5544_);
v___x_5546_ = v___x_5518_;
goto v_reusejp_5545_;
}
else
{
lean_object* v_reuseFailAlloc_5547_; 
v_reuseFailAlloc_5547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5547_, 0, v___x_5544_);
v___x_5546_ = v_reuseFailAlloc_5547_;
goto v_reusejp_5545_;
}
v_reusejp_5545_:
{
return v___x_5546_;
}
}
}
}
else
{
lean_object* v___x_5553_; 
lean_dec(v_a_5516_);
lean_dec(v_a_5474_);
if (v_isShared_5519_ == 0)
{
lean_ctor_set(v___x_5518_, 0, v_code_5454_);
v___x_5553_ = v___x_5518_;
goto v_reusejp_5552_;
}
else
{
lean_object* v_reuseFailAlloc_5554_; 
v_reuseFailAlloc_5554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5554_, 0, v_code_5454_);
v___x_5553_ = v_reuseFailAlloc_5554_;
goto v_reusejp_5552_;
}
v_reusejp_5552_:
{
return v___x_5553_;
}
}
}
}
}
default: 
{
lean_object* v___x_5557_; uint8_t v_isShared_5558_; uint8_t v_isSharedCheck_5564_; 
lean_dec(v_a_5474_);
lean_dec_ref(v_code_5454_);
v_isSharedCheck_5564_ = !lean_is_exclusive(v___x_5475_);
if (v_isSharedCheck_5564_ == 0)
{
lean_object* v_unused_5565_; 
v_unused_5565_ = lean_ctor_get(v___x_5475_, 0);
lean_dec(v_unused_5565_);
v___x_5557_ = v___x_5475_;
v_isShared_5558_ = v_isSharedCheck_5564_;
goto v_resetjp_5556_;
}
else
{
lean_dec(v___x_5475_);
v___x_5557_ = lean_box(0);
v_isShared_5558_ = v_isSharedCheck_5564_;
goto v_resetjp_5556_;
}
v_resetjp_5556_:
{
lean_object* v___x_5559_; lean_object* v___x_5560_; lean_object* v___x_5562_; 
v___x_5559_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___closed__2);
v___x_5560_ = l_panic___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__0(v___x_5559_);
if (v_isShared_5558_ == 0)
{
lean_ctor_set(v___x_5557_, 0, v___x_5560_);
v___x_5562_ = v___x_5557_;
goto v_reusejp_5561_;
}
else
{
lean_object* v_reuseFailAlloc_5563_; 
v_reuseFailAlloc_5563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5563_, 0, v___x_5560_);
v___x_5562_ = v_reuseFailAlloc_5563_;
goto v_reusejp_5561_;
}
v_reusejp_5561_:
{
return v___x_5562_;
}
}
}
}
}
else
{
lean_dec(v_a_5474_);
lean_dec_ref(v_code_5454_);
return v___x_5475_;
}
}
else
{
lean_object* v_a_5566_; lean_object* v___x_5568_; uint8_t v_isShared_5569_; uint8_t v_isSharedCheck_5573_; 
lean_dec_ref(v_k_5462_);
lean_dec_ref(v_code_5454_);
v_a_5566_ = lean_ctor_get(v___x_5473_, 0);
v_isSharedCheck_5573_ = !lean_is_exclusive(v___x_5473_);
if (v_isSharedCheck_5573_ == 0)
{
v___x_5568_ = v___x_5473_;
v_isShared_5569_ = v_isSharedCheck_5573_;
goto v_resetjp_5567_;
}
else
{
lean_inc(v_a_5566_);
lean_dec(v___x_5473_);
v___x_5568_ = lean_box(0);
v_isShared_5569_ = v_isSharedCheck_5573_;
goto v_resetjp_5567_;
}
v_resetjp_5567_:
{
lean_object* v___x_5571_; 
if (v_isShared_5569_ == 0)
{
v___x_5571_ = v___x_5568_;
goto v_reusejp_5570_;
}
else
{
lean_object* v_reuseFailAlloc_5572_; 
v_reuseFailAlloc_5572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5572_, 0, v_a_5566_);
v___x_5571_ = v_reuseFailAlloc_5572_;
goto v_reusejp_5570_;
}
v_reusejp_5570_:
{
return v___x_5571_;
}
}
}
}
else
{
lean_dec_ref(v_type_5468_);
lean_dec_ref(v_params_5467_);
lean_dec_ref(v_k_5462_);
lean_dec_ref(v_decl_5461_);
lean_dec_ref(v_code_5454_);
return v___x_5471_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___boxed(lean_object* v_assignment_5665_, lean_object* v_code_5666_, lean_object* v_a_5667_, lean_object* v_a_5668_, lean_object* v_a_5669_, lean_object* v_a_5670_, lean_object* v_a_5671_){
_start:
{
lean_object* v_res_5672_; 
v_res_5672_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go(v_assignment_5665_, v_code_5666_, v_a_5667_, v_a_5668_, v_a_5669_, v_a_5670_);
lean_dec(v_a_5670_);
lean_dec_ref(v_a_5669_);
lean_dec(v_a_5668_);
lean_dec_ref(v_a_5667_);
lean_dec_ref(v_assignment_5665_);
return v_res_5672_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5___boxed(lean_object* v_resultType_5673_, lean_object* v_discrVal_5674_, lean_object* v_discr_5675_, lean_object* v_assignment_5676_, lean_object* v_i_5677_, lean_object* v_as_5678_, lean_object* v___y_5679_, lean_object* v___y_5680_, lean_object* v___y_5681_, lean_object* v___y_5682_, lean_object* v___y_5683_){
_start:
{
lean_object* v_res_5684_; 
v_res_5684_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__5(v_resultType_5673_, v_discrVal_5674_, v_discr_5675_, v_assignment_5676_, v_i_5677_, v_as_5678_, v___y_5679_, v___y_5680_, v___y_5681_, v___y_5682_);
lean_dec(v___y_5682_);
lean_dec_ref(v___y_5681_);
lean_dec(v___y_5680_);
lean_dec_ref(v___y_5679_);
lean_dec_ref(v_assignment_5676_);
lean_dec(v_discrVal_5674_);
return v_res_5684_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1(lean_object* v_00_u03b2_5685_, lean_object* v_m_5686_, lean_object* v_a_5687_){
_start:
{
lean_object* v___x_5688_; 
v___x_5688_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___redArg(v_m_5686_, v_a_5687_);
return v___x_5688_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1___boxed(lean_object* v_00_u03b2_5689_, lean_object* v_m_5690_, lean_object* v_a_5691_){
_start:
{
lean_object* v_res_5692_; 
v_res_5692_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1(v_00_u03b2_5689_, v_m_5690_, v_a_5691_);
lean_dec(v_a_5691_);
lean_dec_ref(v_m_5690_);
return v_res_5692_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4(lean_object* v_as_5693_, size_t v_i_5694_, size_t v_stop_5695_, lean_object* v_b_5696_, lean_object* v___y_5697_, lean_object* v___y_5698_, lean_object* v___y_5699_, lean_object* v___y_5700_){
_start:
{
lean_object* v___x_5702_; 
v___x_5702_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___redArg(v_as_5693_, v_i_5694_, v_stop_5695_, v_b_5696_);
return v___x_5702_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4___boxed(lean_object* v_as_5703_, lean_object* v_i_5704_, lean_object* v_stop_5705_, lean_object* v_b_5706_, lean_object* v___y_5707_, lean_object* v___y_5708_, lean_object* v___y_5709_, lean_object* v___y_5710_, lean_object* v___y_5711_){
_start:
{
size_t v_i_boxed_5712_; size_t v_stop_boxed_5713_; lean_object* v_res_5714_; 
v_i_boxed_5712_ = lean_unbox_usize(v_i_5704_);
lean_dec(v_i_5704_);
v_stop_boxed_5713_ = lean_unbox_usize(v_stop_5705_);
lean_dec(v_stop_5705_);
v_res_5714_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__4(v_as_5703_, v_i_boxed_5712_, v_stop_boxed_5713_, v_b_5706_, v___y_5707_, v___y_5708_, v___y_5709_, v___y_5710_);
lean_dec(v___y_5710_);
lean_dec_ref(v___y_5709_);
lean_dec(v___y_5708_);
lean_dec_ref(v___y_5707_);
lean_dec_ref(v_as_5703_);
return v_res_5714_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1(lean_object* v_00_u03b2_5715_, lean_object* v_a_5716_, lean_object* v_x_5717_){
_start:
{
lean_object* v___x_5718_; 
v___x_5718_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___redArg(v_a_5716_, v_x_5717_);
return v___x_5718_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1___boxed(lean_object* v_00_u03b2_5719_, lean_object* v_a_5720_, lean_object* v_x_5721_){
_start:
{
lean_object* v_res_5722_; 
v_res_5722_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__1_spec__1(v_00_u03b2_5719_, v_a_5720_, v_x_5721_);
lean_dec(v_x_5721_);
lean_dec(v_a_5720_);
return v_res_5722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg(lean_object* v_f_5723_, lean_object* v_v_5724_, lean_object* v___y_5725_, lean_object* v___y_5726_, lean_object* v___y_5727_, lean_object* v___y_5728_){
_start:
{
if (lean_obj_tag(v_v_5724_) == 0)
{
lean_object* v_code_5730_; lean_object* v___x_5732_; uint8_t v_isShared_5733_; uint8_t v_isSharedCheck_5754_; 
v_code_5730_ = lean_ctor_get(v_v_5724_, 0);
v_isSharedCheck_5754_ = !lean_is_exclusive(v_v_5724_);
if (v_isSharedCheck_5754_ == 0)
{
v___x_5732_ = v_v_5724_;
v_isShared_5733_ = v_isSharedCheck_5754_;
goto v_resetjp_5731_;
}
else
{
lean_inc(v_code_5730_);
lean_dec(v_v_5724_);
v___x_5732_ = lean_box(0);
v_isShared_5733_ = v_isSharedCheck_5754_;
goto v_resetjp_5731_;
}
v_resetjp_5731_:
{
lean_object* v___x_5734_; 
lean_inc(v___y_5728_);
lean_inc_ref(v___y_5727_);
lean_inc(v___y_5726_);
lean_inc_ref(v___y_5725_);
v___x_5734_ = lean_apply_6(v_f_5723_, v_code_5730_, v___y_5725_, v___y_5726_, v___y_5727_, v___y_5728_, lean_box(0));
if (lean_obj_tag(v___x_5734_) == 0)
{
lean_object* v_a_5735_; lean_object* v___x_5737_; uint8_t v_isShared_5738_; uint8_t v_isSharedCheck_5745_; 
v_a_5735_ = lean_ctor_get(v___x_5734_, 0);
v_isSharedCheck_5745_ = !lean_is_exclusive(v___x_5734_);
if (v_isSharedCheck_5745_ == 0)
{
v___x_5737_ = v___x_5734_;
v_isShared_5738_ = v_isSharedCheck_5745_;
goto v_resetjp_5736_;
}
else
{
lean_inc(v_a_5735_);
lean_dec(v___x_5734_);
v___x_5737_ = lean_box(0);
v_isShared_5738_ = v_isSharedCheck_5745_;
goto v_resetjp_5736_;
}
v_resetjp_5736_:
{
lean_object* v___x_5740_; 
if (v_isShared_5733_ == 0)
{
lean_ctor_set(v___x_5732_, 0, v_a_5735_);
v___x_5740_ = v___x_5732_;
goto v_reusejp_5739_;
}
else
{
lean_object* v_reuseFailAlloc_5744_; 
v_reuseFailAlloc_5744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5744_, 0, v_a_5735_);
v___x_5740_ = v_reuseFailAlloc_5744_;
goto v_reusejp_5739_;
}
v_reusejp_5739_:
{
lean_object* v___x_5742_; 
if (v_isShared_5738_ == 0)
{
lean_ctor_set(v___x_5737_, 0, v___x_5740_);
v___x_5742_ = v___x_5737_;
goto v_reusejp_5741_;
}
else
{
lean_object* v_reuseFailAlloc_5743_; 
v_reuseFailAlloc_5743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5743_, 0, v___x_5740_);
v___x_5742_ = v_reuseFailAlloc_5743_;
goto v_reusejp_5741_;
}
v_reusejp_5741_:
{
return v___x_5742_;
}
}
}
}
else
{
lean_object* v_a_5746_; lean_object* v___x_5748_; uint8_t v_isShared_5749_; uint8_t v_isSharedCheck_5753_; 
lean_del_object(v___x_5732_);
v_a_5746_ = lean_ctor_get(v___x_5734_, 0);
v_isSharedCheck_5753_ = !lean_is_exclusive(v___x_5734_);
if (v_isSharedCheck_5753_ == 0)
{
v___x_5748_ = v___x_5734_;
v_isShared_5749_ = v_isSharedCheck_5753_;
goto v_resetjp_5747_;
}
else
{
lean_inc(v_a_5746_);
lean_dec(v___x_5734_);
v___x_5748_ = lean_box(0);
v_isShared_5749_ = v_isSharedCheck_5753_;
goto v_resetjp_5747_;
}
v_resetjp_5747_:
{
lean_object* v___x_5751_; 
if (v_isShared_5749_ == 0)
{
v___x_5751_ = v___x_5748_;
goto v_reusejp_5750_;
}
else
{
lean_object* v_reuseFailAlloc_5752_; 
v_reuseFailAlloc_5752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5752_, 0, v_a_5746_);
v___x_5751_ = v_reuseFailAlloc_5752_;
goto v_reusejp_5750_;
}
v_reusejp_5750_:
{
return v___x_5751_;
}
}
}
}
}
else
{
lean_object* v___x_5755_; 
lean_dec_ref(v_f_5723_);
v___x_5755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5755_, 0, v_v_5724_);
return v___x_5755_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg___boxed(lean_object* v_f_5756_, lean_object* v_v_5757_, lean_object* v___y_5758_, lean_object* v___y_5759_, lean_object* v___y_5760_, lean_object* v___y_5761_, lean_object* v___y_5762_){
_start:
{
lean_object* v_res_5763_; 
v_res_5763_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg(v_f_5756_, v_v_5757_, v___y_5758_, v___y_5759_, v___y_5760_, v___y_5761_);
lean_dec(v___y_5761_);
lean_dec_ref(v___y_5760_);
lean_dec(v___y_5759_);
lean_dec_ref(v___y_5758_);
return v_res_5763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0(uint8_t v_pu_5764_, lean_object* v_f_5765_, lean_object* v_v_5766_, lean_object* v___y_5767_, lean_object* v___y_5768_, lean_object* v___y_5769_, lean_object* v___y_5770_){
_start:
{
lean_object* v___x_5772_; 
v___x_5772_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg(v_f_5765_, v_v_5766_, v___y_5767_, v___y_5768_, v___y_5769_, v___y_5770_);
return v___x_5772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___boxed(lean_object* v_pu_5773_, lean_object* v_f_5774_, lean_object* v_v_5775_, lean_object* v___y_5776_, lean_object* v___y_5777_, lean_object* v___y_5778_, lean_object* v___y_5779_, lean_object* v___y_5780_){
_start:
{
uint8_t v_pu_boxed_5781_; lean_object* v_res_5782_; 
v_pu_boxed_5781_ = lean_unbox(v_pu_5773_);
v_res_5782_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0(v_pu_boxed_5781_, v_f_5774_, v_v_5775_, v___y_5776_, v___y_5777_, v___y_5778_, v___y_5779_);
lean_dec(v___y_5779_);
lean_dec_ref(v___y_5778_);
lean_dec(v___y_5777_);
lean_dec_ref(v___y_5776_);
return v_res_5782_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3(lean_object* v_x_5783_, lean_object* v_x_5784_){
_start:
{
if (lean_obj_tag(v_x_5784_) == 0)
{
return v_x_5783_;
}
else
{
lean_object* v_key_5785_; lean_object* v_value_5786_; lean_object* v_tail_5787_; lean_object* v___x_5788_; lean_object* v___x_5789_; 
v_key_5785_ = lean_ctor_get(v_x_5784_, 0);
v_value_5786_ = lean_ctor_get(v_x_5784_, 1);
v_tail_5787_ = lean_ctor_get(v_x_5784_, 2);
lean_inc(v_value_5786_);
lean_inc(v_key_5785_);
v___x_5788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5788_, 0, v_key_5785_);
lean_ctor_set(v___x_5788_, 1, v_value_5786_);
v___x_5789_ = lean_array_push(v_x_5783_, v___x_5788_);
v_x_5783_ = v___x_5789_;
v_x_5784_ = v_tail_5787_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3___boxed(lean_object* v_x_5791_, lean_object* v_x_5792_){
_start:
{
lean_object* v_res_5793_; 
v_res_5793_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3(v_x_5791_, v_x_5792_);
lean_dec(v_x_5792_);
return v_res_5793_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4(lean_object* v_as_5794_, size_t v_i_5795_, size_t v_stop_5796_, lean_object* v_b_5797_){
_start:
{
uint8_t v___x_5798_; 
v___x_5798_ = lean_usize_dec_eq(v_i_5795_, v_stop_5796_);
if (v___x_5798_ == 0)
{
lean_object* v___x_5799_; lean_object* v___x_5800_; size_t v___x_5801_; size_t v___x_5802_; 
v___x_5799_ = lean_array_uget_borrowed(v_as_5794_, v_i_5795_);
v___x_5800_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__3(v_b_5797_, v___x_5799_);
v___x_5801_ = ((size_t)1ULL);
v___x_5802_ = lean_usize_add(v_i_5795_, v___x_5801_);
v_i_5795_ = v___x_5802_;
v_b_5797_ = v___x_5800_;
goto _start;
}
else
{
return v_b_5797_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4___boxed(lean_object* v_as_5804_, lean_object* v_i_5805_, lean_object* v_stop_5806_, lean_object* v_b_5807_){
_start:
{
size_t v_i_boxed_5808_; size_t v_stop_boxed_5809_; lean_object* v_res_5810_; 
v_i_boxed_5808_ = lean_unbox_usize(v_i_5805_);
lean_dec(v_i_5805_);
v_stop_boxed_5809_ = lean_unbox_usize(v_stop_5806_);
lean_dec(v_stop_5806_);
v_res_5810_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4(v_as_5804_, v_i_boxed_5808_, v_stop_boxed_5809_, v_b_5807_);
lean_dec_ref(v_as_5804_);
return v_res_5810_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1(uint8_t v_a_5811_, size_t v_sz_5812_, size_t v_i_5813_, lean_object* v_bs_5814_, lean_object* v___y_5815_, lean_object* v___y_5816_, lean_object* v___y_5817_, lean_object* v___y_5818_){
_start:
{
uint8_t v___x_5820_; 
v___x_5820_ = lean_usize_dec_lt(v_i_5813_, v_sz_5812_);
if (v___x_5820_ == 0)
{
lean_object* v___x_5821_; 
v___x_5821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5821_, 0, v_bs_5814_);
return v___x_5821_;
}
else
{
lean_object* v_v_5822_; lean_object* v_fst_5823_; lean_object* v_snd_5824_; lean_object* v___x_5826_; uint8_t v_isShared_5827_; uint8_t v_isSharedCheck_5848_; 
v_v_5822_ = lean_array_uget(v_bs_5814_, v_i_5813_);
v_fst_5823_ = lean_ctor_get(v_v_5822_, 0);
v_snd_5824_ = lean_ctor_get(v_v_5822_, 1);
v_isSharedCheck_5848_ = !lean_is_exclusive(v_v_5822_);
if (v_isSharedCheck_5848_ == 0)
{
v___x_5826_ = v_v_5822_;
v_isShared_5827_ = v_isSharedCheck_5848_;
goto v_resetjp_5825_;
}
else
{
lean_inc(v_snd_5824_);
lean_inc(v_fst_5823_);
lean_dec(v_v_5822_);
v___x_5826_ = lean_box(0);
v_isShared_5827_ = v_isSharedCheck_5848_;
goto v_resetjp_5825_;
}
v_resetjp_5825_:
{
lean_object* v___x_5828_; lean_object* v_bs_x27_5829_; lean_object* v___x_5830_; 
v___x_5828_ = lean_unsigned_to_nat(0u);
v_bs_x27_5829_ = lean_array_uset(v_bs_5814_, v_i_5813_, v___x_5828_);
v___x_5830_ = l_Lean_Compiler_LCNF_getBinderName(v_fst_5823_, v___y_5815_, v___y_5816_, v___y_5817_, v___y_5818_);
if (lean_obj_tag(v___x_5830_) == 0)
{
lean_object* v_a_5831_; lean_object* v___x_5832_; lean_object* v___x_5834_; 
v_a_5831_ = lean_ctor_get(v___x_5830_, 0);
lean_inc(v_a_5831_);
lean_dec_ref_known(v___x_5830_, 1);
v___x_5832_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_a_5831_, v_a_5811_);
if (v_isShared_5827_ == 0)
{
lean_ctor_set(v___x_5826_, 0, v___x_5832_);
v___x_5834_ = v___x_5826_;
goto v_reusejp_5833_;
}
else
{
lean_object* v_reuseFailAlloc_5839_; 
v_reuseFailAlloc_5839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5839_, 0, v___x_5832_);
lean_ctor_set(v_reuseFailAlloc_5839_, 1, v_snd_5824_);
v___x_5834_ = v_reuseFailAlloc_5839_;
goto v_reusejp_5833_;
}
v_reusejp_5833_:
{
size_t v___x_5835_; size_t v___x_5836_; lean_object* v___x_5837_; 
v___x_5835_ = ((size_t)1ULL);
v___x_5836_ = lean_usize_add(v_i_5813_, v___x_5835_);
v___x_5837_ = lean_array_uset(v_bs_x27_5829_, v_i_5813_, v___x_5834_);
v_i_5813_ = v___x_5836_;
v_bs_5814_ = v___x_5837_;
goto _start;
}
}
else
{
lean_object* v_a_5840_; lean_object* v___x_5842_; uint8_t v_isShared_5843_; uint8_t v_isSharedCheck_5847_; 
lean_dec_ref(v_bs_x27_5829_);
lean_del_object(v___x_5826_);
lean_dec(v_snd_5824_);
v_a_5840_ = lean_ctor_get(v___x_5830_, 0);
v_isSharedCheck_5847_ = !lean_is_exclusive(v___x_5830_);
if (v_isSharedCheck_5847_ == 0)
{
v___x_5842_ = v___x_5830_;
v_isShared_5843_ = v_isSharedCheck_5847_;
goto v_resetjp_5841_;
}
else
{
lean_inc(v_a_5840_);
lean_dec(v___x_5830_);
v___x_5842_ = lean_box(0);
v_isShared_5843_ = v_isSharedCheck_5847_;
goto v_resetjp_5841_;
}
v_resetjp_5841_:
{
lean_object* v___x_5845_; 
if (v_isShared_5843_ == 0)
{
v___x_5845_ = v___x_5842_;
goto v_reusejp_5844_;
}
else
{
lean_object* v_reuseFailAlloc_5846_; 
v_reuseFailAlloc_5846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5846_, 0, v_a_5840_);
v___x_5845_ = v_reuseFailAlloc_5846_;
goto v_reusejp_5844_;
}
v_reusejp_5844_:
{
return v___x_5845_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1___boxed(lean_object* v_a_5849_, lean_object* v_sz_5850_, lean_object* v_i_5851_, lean_object* v_bs_5852_, lean_object* v___y_5853_, lean_object* v___y_5854_, lean_object* v___y_5855_, lean_object* v___y_5856_, lean_object* v___y_5857_){
_start:
{
uint8_t v_a_2418__boxed_5858_; size_t v_sz_boxed_5859_; size_t v_i_boxed_5860_; lean_object* v_res_5861_; 
v_a_2418__boxed_5858_ = lean_unbox(v_a_5849_);
v_sz_boxed_5859_ = lean_unbox_usize(v_sz_5850_);
lean_dec(v_sz_5850_);
v_i_boxed_5860_ = lean_unbox_usize(v_i_5851_);
lean_dec(v_i_5851_);
v_res_5861_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1(v_a_2418__boxed_5858_, v_sz_boxed_5859_, v_i_boxed_5860_, v_bs_5852_, v___y_5853_, v___y_5854_, v___y_5855_, v___y_5856_);
lean_dec(v___y_5856_);
lean_dec_ref(v___y_5855_);
lean_dec(v___y_5854_);
lean_dec_ref(v___y_5853_);
return v_res_5861_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(lean_object* v_x_5862_){
_start:
{
lean_object* v_fst_5863_; lean_object* v_snd_5864_; lean_object* v___x_5866_; uint8_t v_isShared_5867_; uint8_t v_isSharedCheck_5887_; 
v_fst_5863_ = lean_ctor_get(v_x_5862_, 0);
v_snd_5864_ = lean_ctor_get(v_x_5862_, 1);
v_isSharedCheck_5887_ = !lean_is_exclusive(v_x_5862_);
if (v_isSharedCheck_5887_ == 0)
{
v___x_5866_ = v_x_5862_;
v_isShared_5867_ = v_isSharedCheck_5887_;
goto v_resetjp_5865_;
}
else
{
lean_inc(v_snd_5864_);
lean_inc(v_fst_5863_);
lean_dec(v_x_5862_);
v___x_5866_ = lean_box(0);
v_isShared_5867_ = v_isSharedCheck_5887_;
goto v_resetjp_5865_;
}
v_resetjp_5865_:
{
lean_object* v___x_5868_; lean_object* v___x_5869_; lean_object* v___x_5870_; lean_object* v___x_5872_; 
v___x_5868_ = l_String_quote(v_fst_5863_);
v___x_5869_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5869_, 0, v___x_5868_);
v___x_5870_ = lean_box(0);
if (v_isShared_5867_ == 0)
{
lean_ctor_set_tag(v___x_5866_, 1);
lean_ctor_set(v___x_5866_, 1, v___x_5870_);
lean_ctor_set(v___x_5866_, 0, v___x_5869_);
v___x_5872_ = v___x_5866_;
goto v_reusejp_5871_;
}
else
{
lean_object* v_reuseFailAlloc_5886_; 
v_reuseFailAlloc_5886_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5886_, 0, v___x_5869_);
lean_ctor_set(v_reuseFailAlloc_5886_, 1, v___x_5870_);
v___x_5872_ = v_reuseFailAlloc_5886_;
goto v_reusejp_5871_;
}
v_reusejp_5871_:
{
lean_object* v___x_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; lean_object* v___x_5883_; uint8_t v___x_5884_; lean_object* v___x_5885_; 
v___x_5873_ = l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat(v_snd_5864_);
v___x_5874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5874_, 0, v___x_5873_);
lean_ctor_set(v___x_5874_, 1, v___x_5872_);
v___x_5875_ = l_List_reverse___redArg(v___x_5874_);
v___x_5876_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5));
v___x_5877_ = l_Std_Format_joinSep___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat_spec__3(v___x_5875_, v___x_5876_);
v___x_5878_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7, &l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__7);
v___x_5879_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__8));
v___x_5880_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5880_, 0, v___x_5879_);
lean_ctor_set(v___x_5880_, 1, v___x_5877_);
v___x_5881_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_Value_toFormat___closed__9));
v___x_5882_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5882_, 0, v___x_5880_);
lean_ctor_set(v___x_5882_, 1, v___x_5881_);
v___x_5883_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5883_, 0, v___x_5878_);
lean_ctor_set(v___x_5883_, 1, v___x_5882_);
v___x_5884_ = 0;
v___x_5885_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5885_, 0, v___x_5883_);
lean_ctor_set_uint8(v___x_5885_, sizeof(void*)*1, v___x_5884_);
return v___x_5885_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4_spec__7(lean_object* v_x_5888_, lean_object* v_x_5889_, lean_object* v_x_5890_){
_start:
{
if (lean_obj_tag(v_x_5890_) == 0)
{
lean_dec(v_x_5888_);
return v_x_5889_;
}
else
{
lean_object* v_head_5891_; lean_object* v_tail_5892_; lean_object* v___x_5894_; uint8_t v_isShared_5895_; uint8_t v_isSharedCheck_5902_; 
v_head_5891_ = lean_ctor_get(v_x_5890_, 0);
v_tail_5892_ = lean_ctor_get(v_x_5890_, 1);
v_isSharedCheck_5902_ = !lean_is_exclusive(v_x_5890_);
if (v_isSharedCheck_5902_ == 0)
{
v___x_5894_ = v_x_5890_;
v_isShared_5895_ = v_isSharedCheck_5902_;
goto v_resetjp_5893_;
}
else
{
lean_inc(v_tail_5892_);
lean_inc(v_head_5891_);
lean_dec(v_x_5890_);
v___x_5894_ = lean_box(0);
v_isShared_5895_ = v_isSharedCheck_5902_;
goto v_resetjp_5893_;
}
v_resetjp_5893_:
{
lean_object* v___x_5897_; 
lean_inc(v_x_5888_);
if (v_isShared_5895_ == 0)
{
lean_ctor_set_tag(v___x_5894_, 5);
lean_ctor_set(v___x_5894_, 1, v_x_5888_);
lean_ctor_set(v___x_5894_, 0, v_x_5889_);
v___x_5897_ = v___x_5894_;
goto v_reusejp_5896_;
}
else
{
lean_object* v_reuseFailAlloc_5901_; 
v_reuseFailAlloc_5901_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5901_, 0, v_x_5889_);
lean_ctor_set(v_reuseFailAlloc_5901_, 1, v_x_5888_);
v___x_5897_ = v_reuseFailAlloc_5901_;
goto v_reusejp_5896_;
}
v_reusejp_5896_:
{
lean_object* v___x_5898_; lean_object* v___x_5899_; 
v___x_5898_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(v_head_5891_);
v___x_5899_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5899_, 0, v___x_5897_);
lean_ctor_set(v___x_5899_, 1, v___x_5898_);
v_x_5889_ = v___x_5899_;
v_x_5890_ = v_tail_5892_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4(lean_object* v_x_5903_, lean_object* v_x_5904_, lean_object* v_x_5905_){
_start:
{
if (lean_obj_tag(v_x_5905_) == 0)
{
lean_dec(v_x_5903_);
return v_x_5904_;
}
else
{
lean_object* v_head_5906_; lean_object* v_tail_5907_; lean_object* v___x_5909_; uint8_t v_isShared_5910_; uint8_t v_isSharedCheck_5917_; 
v_head_5906_ = lean_ctor_get(v_x_5905_, 0);
v_tail_5907_ = lean_ctor_get(v_x_5905_, 1);
v_isSharedCheck_5917_ = !lean_is_exclusive(v_x_5905_);
if (v_isSharedCheck_5917_ == 0)
{
v___x_5909_ = v_x_5905_;
v_isShared_5910_ = v_isSharedCheck_5917_;
goto v_resetjp_5908_;
}
else
{
lean_inc(v_tail_5907_);
lean_inc(v_head_5906_);
lean_dec(v_x_5905_);
v___x_5909_ = lean_box(0);
v_isShared_5910_ = v_isSharedCheck_5917_;
goto v_resetjp_5908_;
}
v_resetjp_5908_:
{
lean_object* v___x_5912_; 
lean_inc(v_x_5903_);
if (v_isShared_5910_ == 0)
{
lean_ctor_set_tag(v___x_5909_, 5);
lean_ctor_set(v___x_5909_, 1, v_x_5903_);
lean_ctor_set(v___x_5909_, 0, v_x_5904_);
v___x_5912_ = v___x_5909_;
goto v_reusejp_5911_;
}
else
{
lean_object* v_reuseFailAlloc_5916_; 
v_reuseFailAlloc_5916_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5916_, 0, v_x_5904_);
lean_ctor_set(v_reuseFailAlloc_5916_, 1, v_x_5903_);
v___x_5912_ = v_reuseFailAlloc_5916_;
goto v_reusejp_5911_;
}
v_reusejp_5911_:
{
lean_object* v___x_5913_; lean_object* v___x_5914_; lean_object* v___x_5915_; 
v___x_5913_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(v_head_5906_);
v___x_5914_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5914_, 0, v___x_5912_);
lean_ctor_set(v___x_5914_, 1, v___x_5913_);
v___x_5915_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4_spec__7(v_x_5903_, v___x_5914_, v_tail_5907_);
return v___x_5915_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3(lean_object* v_x_5918_, lean_object* v_x_5919_){
_start:
{
if (lean_obj_tag(v_x_5918_) == 0)
{
lean_object* v___x_5920_; 
lean_dec(v_x_5919_);
v___x_5920_ = lean_box(0);
return v___x_5920_;
}
else
{
lean_object* v_tail_5921_; 
v_tail_5921_ = lean_ctor_get(v_x_5918_, 1);
if (lean_obj_tag(v_tail_5921_) == 0)
{
lean_object* v_head_5922_; lean_object* v___x_5923_; 
lean_dec(v_x_5919_);
v_head_5922_ = lean_ctor_get(v_x_5918_, 0);
lean_inc(v_head_5922_);
lean_dec_ref_known(v_x_5918_, 2);
v___x_5923_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(v_head_5922_);
return v___x_5923_;
}
else
{
lean_object* v_head_5924_; lean_object* v___x_5925_; lean_object* v___x_5926_; 
lean_inc(v_tail_5921_);
v_head_5924_ = lean_ctor_get(v_x_5918_, 0);
lean_inc(v_head_5924_);
lean_dec_ref_known(v_x_5918_, 2);
v___x_5925_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(v_head_5924_);
v___x_5926_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3_spec__4(v_x_5919_, v___x_5925_, v_tail_5921_);
return v___x_5926_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1(void){
_start:
{
lean_object* v___x_5928_; lean_object* v___x_5929_; 
v___x_5928_ = ((lean_object*)(l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__0));
v___x_5929_ = lean_string_length(v___x_5928_);
return v___x_5929_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2(void){
_start:
{
lean_object* v___x_5930_; lean_object* v___x_5931_; 
v___x_5930_ = lean_obj_once(&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1, &l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1_once, _init_l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__1);
v___x_5931_ = lean_nat_to_int(v___x_5930_);
return v___x_5931_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2(lean_object* v_xs_5937_){
_start:
{
lean_object* v___x_5938_; lean_object* v___x_5939_; uint8_t v___x_5940_; 
v___x_5938_ = lean_array_get_size(v_xs_5937_);
v___x_5939_ = lean_unsigned_to_nat(0u);
v___x_5940_ = lean_nat_dec_eq(v___x_5938_, v___x_5939_);
if (v___x_5940_ == 0)
{
lean_object* v___x_5941_; lean_object* v___x_5942_; lean_object* v___x_5943_; lean_object* v___x_5944_; lean_object* v___x_5945_; lean_object* v___x_5946_; lean_object* v___x_5947_; lean_object* v___x_5948_; lean_object* v___x_5949_; lean_object* v___x_5950_; 
v___x_5941_ = lean_array_to_list(v_xs_5937_);
v___x_5942_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__5));
v___x_5943_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__3(v___x_5941_, v___x_5942_);
v___x_5944_ = lean_obj_once(&l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2, &l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2_once, _init_l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__2);
v___x_5945_ = ((lean_object*)(l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__3));
v___x_5946_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5946_, 0, v___x_5945_);
lean_ctor_set(v___x_5946_, 1, v___x_5943_);
v___x_5947_ = ((lean_object*)(l_List_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_Value_addChoice_spec__0___redArg___closed__10));
v___x_5948_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5948_, 0, v___x_5946_);
lean_ctor_set(v___x_5948_, 1, v___x_5947_);
v___x_5949_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5949_, 0, v___x_5944_);
lean_ctor_set(v___x_5949_, 1, v___x_5948_);
v___x_5950_ = l_Std_Format_fill(v___x_5949_);
return v___x_5950_;
}
else
{
lean_object* v___x_5951_; 
lean_dec_ref(v_xs_5937_);
v___x_5951_ = ((lean_object*)(l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2___closed__5));
return v___x_5951_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead(lean_object* v_assignment_5954_, lean_object* v_decl_5955_, lean_object* v_a_5956_, lean_object* v_a_5957_, lean_object* v_a_5958_, lean_object* v_a_5959_){
_start:
{
lean_object* v___y_5962_; lean_object* v___y_5963_; lean_object* v___y_5964_; lean_object* v___y_5965_; lean_object* v_toCold_5995_; lean_object* v_options_5996_; uint8_t v_hasTrace_5997_; 
v_toCold_5995_ = lean_ctor_get(v_a_5958_, 0);
v_options_5996_ = lean_ctor_get(v_toCold_5995_, 2);
v_hasTrace_5997_ = lean_ctor_get_uint8(v_options_5996_, sizeof(void*)*1);
if (v_hasTrace_5997_ == 0)
{
v___y_5962_ = v_a_5956_;
v___y_5963_ = v_a_5957_;
v___y_5964_ = v_a_5958_;
v___y_5965_ = v_a_5959_;
goto v___jp_5961_;
}
else
{
lean_object* v_inheritedTraceOptions_5998_; lean_object* v_cls_5999_; uint8_t v___y_6001_; lean_object* v___y_6002_; lean_object* v___x_6038_; uint8_t v___x_6039_; 
v_inheritedTraceOptions_5998_ = lean_ctor_get(v_toCold_5995_, 11);
v_cls_5999_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3));
v___x_6038_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7);
v___x_6039_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5998_, v_options_5996_, v___x_6038_);
if (v___x_6039_ == 0)
{
v___y_5962_ = v_a_5956_;
v___y_5963_ = v_a_5957_;
v___y_5964_ = v_a_5958_;
v___y_5965_ = v_a_5959_;
goto v___jp_5961_;
}
else
{
lean_object* v_size_6040_; lean_object* v_buckets_6041_; lean_object* v___x_6042_; lean_object* v___x_6043_; lean_object* v___x_6044_; uint8_t v___x_6045_; 
v_size_6040_ = lean_ctor_get(v_assignment_5954_, 0);
v_buckets_6041_ = lean_ctor_get(v_assignment_5954_, 1);
v___x_6042_ = lean_mk_empty_array_with_capacity(v_size_6040_);
v___x_6043_ = lean_unsigned_to_nat(0u);
v___x_6044_ = lean_array_get_size(v_buckets_6041_);
v___x_6045_ = lean_nat_dec_lt(v___x_6043_, v___x_6044_);
if (v___x_6045_ == 0)
{
v___y_6001_ = v___x_6039_;
v___y_6002_ = v___x_6042_;
goto v___jp_6000_;
}
else
{
size_t v___x_6046_; size_t v___x_6047_; lean_object* v___x_6048_; 
v___x_6046_ = ((size_t)0ULL);
v___x_6047_ = lean_usize_of_nat(v___x_6044_);
v___x_6048_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__4(v_buckets_6041_, v___x_6046_, v___x_6047_, v___x_6042_);
v___y_6001_ = v___x_6039_;
v___y_6002_ = v___x_6048_;
goto v___jp_6000_;
}
}
v___jp_6000_:
{
size_t v_sz_6003_; size_t v___x_6004_; lean_object* v___x_6005_; 
v_sz_6003_ = lean_array_size(v___y_6002_);
v___x_6004_ = ((size_t)0ULL);
v___x_6005_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__1(v___y_6001_, v_sz_6003_, v___x_6004_, v___y_6002_, v_a_5956_, v_a_5957_, v_a_5958_, v_a_5959_);
if (lean_obj_tag(v___x_6005_) == 0)
{
lean_object* v_toSignature_6006_; lean_object* v_a_6007_; lean_object* v_name_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; lean_object* v___x_6011_; lean_object* v___x_6012_; lean_object* v___x_6013_; lean_object* v___x_6014_; lean_object* v___x_6015_; lean_object* v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; 
v_toSignature_6006_ = lean_ctor_get(v_decl_5955_, 0);
v_a_6007_ = lean_ctor_get(v___x_6005_, 0);
lean_inc(v_a_6007_);
lean_dec_ref_known(v___x_6005_, 1);
v_name_6008_ = lean_ctor_get(v_toSignature_6006_, 0);
v___x_6009_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__0));
lean_inc(v_name_6008_);
v___x_6010_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_6008_, v___y_6001_);
v___x_6011_ = lean_string_append(v___x_6009_, v___x_6010_);
lean_dec_ref(v___x_6010_);
v___x_6012_ = ((lean_object*)(l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___closed__1));
v___x_6013_ = lean_string_append(v___x_6011_, v___x_6012_);
v___x_6014_ = l_Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2(v_a_6007_);
v___x_6015_ = l_Std_Format_defWidth;
v___x_6016_ = lean_unsigned_to_nat(0u);
v___x_6017_ = l_Std_Format_pretty(v___x_6014_, v___x_6015_, v___x_6016_, v___x_6016_);
v___x_6018_ = lean_string_append(v___x_6013_, v___x_6017_);
lean_dec_ref(v___x_6017_);
v___x_6019_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6019_, 0, v___x_6018_);
v___x_6020_ = l_Lean_MessageData_ofFormat(v___x_6019_);
v___x_6021_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go_spec__2(v_cls_5999_, v___x_6020_, v_a_5956_, v_a_5957_, v_a_5958_, v_a_5959_);
if (lean_obj_tag(v___x_6021_) == 0)
{
lean_dec_ref_known(v___x_6021_, 1);
v___y_5962_ = v_a_5956_;
v___y_5963_ = v_a_5957_;
v___y_5964_ = v_a_5958_;
v___y_5965_ = v_a_5959_;
goto v___jp_5961_;
}
else
{
lean_object* v_a_6022_; lean_object* v___x_6024_; uint8_t v_isShared_6025_; uint8_t v_isSharedCheck_6029_; 
lean_dec_ref(v_decl_5955_);
lean_dec_ref(v_assignment_5954_);
v_a_6022_ = lean_ctor_get(v___x_6021_, 0);
v_isSharedCheck_6029_ = !lean_is_exclusive(v___x_6021_);
if (v_isSharedCheck_6029_ == 0)
{
v___x_6024_ = v___x_6021_;
v_isShared_6025_ = v_isSharedCheck_6029_;
goto v_resetjp_6023_;
}
else
{
lean_inc(v_a_6022_);
lean_dec(v___x_6021_);
v___x_6024_ = lean_box(0);
v_isShared_6025_ = v_isSharedCheck_6029_;
goto v_resetjp_6023_;
}
v_resetjp_6023_:
{
lean_object* v___x_6027_; 
if (v_isShared_6025_ == 0)
{
v___x_6027_ = v___x_6024_;
goto v_reusejp_6026_;
}
else
{
lean_object* v_reuseFailAlloc_6028_; 
v_reuseFailAlloc_6028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6028_, 0, v_a_6022_);
v___x_6027_ = v_reuseFailAlloc_6028_;
goto v_reusejp_6026_;
}
v_reusejp_6026_:
{
return v___x_6027_;
}
}
}
}
else
{
lean_object* v_a_6030_; lean_object* v___x_6032_; uint8_t v_isShared_6033_; uint8_t v_isSharedCheck_6037_; 
lean_dec_ref(v_decl_5955_);
lean_dec_ref(v_assignment_5954_);
v_a_6030_ = lean_ctor_get(v___x_6005_, 0);
v_isSharedCheck_6037_ = !lean_is_exclusive(v___x_6005_);
if (v_isSharedCheck_6037_ == 0)
{
v___x_6032_ = v___x_6005_;
v_isShared_6033_ = v_isSharedCheck_6037_;
goto v_resetjp_6031_;
}
else
{
lean_inc(v_a_6030_);
lean_dec(v___x_6005_);
v___x_6032_ = lean_box(0);
v_isShared_6033_ = v_isSharedCheck_6037_;
goto v_resetjp_6031_;
}
v_resetjp_6031_:
{
lean_object* v___x_6035_; 
if (v_isShared_6033_ == 0)
{
v___x_6035_ = v___x_6032_;
goto v_reusejp_6034_;
}
else
{
lean_object* v_reuseFailAlloc_6036_; 
v_reuseFailAlloc_6036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6036_, 0, v_a_6030_);
v___x_6035_ = v_reuseFailAlloc_6036_;
goto v_reusejp_6034_;
}
v_reusejp_6034_:
{
return v___x_6035_;
}
}
}
}
}
v___jp_5961_:
{
lean_object* v_toSignature_5966_; lean_object* v_value_5967_; uint8_t v_recursive_5968_; lean_object* v_inlineAttr_x3f_5969_; lean_object* v___x_5971_; uint8_t v_isShared_5972_; uint8_t v_isSharedCheck_5994_; 
v_toSignature_5966_ = lean_ctor_get(v_decl_5955_, 0);
v_value_5967_ = lean_ctor_get(v_decl_5955_, 1);
v_recursive_5968_ = lean_ctor_get_uint8(v_decl_5955_, sizeof(void*)*3);
v_inlineAttr_x3f_5969_ = lean_ctor_get(v_decl_5955_, 2);
v_isSharedCheck_5994_ = !lean_is_exclusive(v_decl_5955_);
if (v_isSharedCheck_5994_ == 0)
{
v___x_5971_ = v_decl_5955_;
v_isShared_5972_ = v_isSharedCheck_5994_;
goto v_resetjp_5970_;
}
else
{
lean_inc(v_inlineAttr_x3f_5969_);
lean_inc(v_value_5967_);
lean_inc(v_toSignature_5966_);
lean_dec(v_decl_5955_);
v___x_5971_ = lean_box(0);
v_isShared_5972_ = v_isSharedCheck_5994_;
goto v_resetjp_5970_;
}
v_resetjp_5970_:
{
lean_object* v___x_5973_; lean_object* v___x_5974_; 
v___x_5973_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_elimDead_go___boxed), 7, 1);
lean_closure_set(v___x_5973_, 0, v_assignment_5954_);
v___x_5974_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__0___redArg(v___x_5973_, v_value_5967_, v___y_5962_, v___y_5963_, v___y_5964_, v___y_5965_);
if (lean_obj_tag(v___x_5974_) == 0)
{
lean_object* v_a_5975_; lean_object* v___x_5977_; uint8_t v_isShared_5978_; uint8_t v_isSharedCheck_5985_; 
v_a_5975_ = lean_ctor_get(v___x_5974_, 0);
v_isSharedCheck_5985_ = !lean_is_exclusive(v___x_5974_);
if (v_isSharedCheck_5985_ == 0)
{
v___x_5977_ = v___x_5974_;
v_isShared_5978_ = v_isSharedCheck_5985_;
goto v_resetjp_5976_;
}
else
{
lean_inc(v_a_5975_);
lean_dec(v___x_5974_);
v___x_5977_ = lean_box(0);
v_isShared_5978_ = v_isSharedCheck_5985_;
goto v_resetjp_5976_;
}
v_resetjp_5976_:
{
lean_object* v___x_5980_; 
if (v_isShared_5972_ == 0)
{
lean_ctor_set(v___x_5971_, 1, v_a_5975_);
v___x_5980_ = v___x_5971_;
goto v_reusejp_5979_;
}
else
{
lean_object* v_reuseFailAlloc_5984_; 
v_reuseFailAlloc_5984_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_5984_, 0, v_toSignature_5966_);
lean_ctor_set(v_reuseFailAlloc_5984_, 1, v_a_5975_);
lean_ctor_set(v_reuseFailAlloc_5984_, 2, v_inlineAttr_x3f_5969_);
lean_ctor_set_uint8(v_reuseFailAlloc_5984_, sizeof(void*)*3, v_recursive_5968_);
v___x_5980_ = v_reuseFailAlloc_5984_;
goto v_reusejp_5979_;
}
v_reusejp_5979_:
{
lean_object* v___x_5982_; 
if (v_isShared_5978_ == 0)
{
lean_ctor_set(v___x_5977_, 0, v___x_5980_);
v___x_5982_ = v___x_5977_;
goto v_reusejp_5981_;
}
else
{
lean_object* v_reuseFailAlloc_5983_; 
v_reuseFailAlloc_5983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5983_, 0, v___x_5980_);
v___x_5982_ = v_reuseFailAlloc_5983_;
goto v_reusejp_5981_;
}
v_reusejp_5981_:
{
return v___x_5982_;
}
}
}
}
else
{
lean_object* v_a_5986_; lean_object* v___x_5988_; uint8_t v_isShared_5989_; uint8_t v_isSharedCheck_5993_; 
lean_del_object(v___x_5971_);
lean_dec(v_inlineAttr_x3f_5969_);
lean_dec_ref(v_toSignature_5966_);
v_a_5986_ = lean_ctor_get(v___x_5974_, 0);
v_isSharedCheck_5993_ = !lean_is_exclusive(v___x_5974_);
if (v_isSharedCheck_5993_ == 0)
{
v___x_5988_ = v___x_5974_;
v_isShared_5989_ = v_isSharedCheck_5993_;
goto v_resetjp_5987_;
}
else
{
lean_inc(v_a_5986_);
lean_dec(v___x_5974_);
v___x_5988_ = lean_box(0);
v_isShared_5989_ = v_isSharedCheck_5993_;
goto v_resetjp_5987_;
}
v_resetjp_5987_:
{
lean_object* v___x_5991_; 
if (v_isShared_5989_ == 0)
{
v___x_5991_ = v___x_5988_;
goto v_reusejp_5990_;
}
else
{
lean_object* v_reuseFailAlloc_5992_; 
v_reuseFailAlloc_5992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5992_, 0, v_a_5986_);
v___x_5991_ = v_reuseFailAlloc_5992_;
goto v_reusejp_5990_;
}
v_reusejp_5990_:
{
return v___x_5991_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_elimDead___boxed(lean_object* v_assignment_6049_, lean_object* v_decl_6050_, lean_object* v_a_6051_, lean_object* v_a_6052_, lean_object* v_a_6053_, lean_object* v_a_6054_, lean_object* v_a_6055_){
_start:
{
lean_object* v_res_6056_; 
v_res_6056_ = l_Lean_Compiler_LCNF_UnreachableBranches_elimDead(v_assignment_6049_, v_decl_6050_, v_a_6051_, v_a_6052_, v_a_6053_, v_a_6054_);
lean_dec(v_a_6054_);
lean_dec_ref(v_a_6053_);
lean_dec(v_a_6052_);
lean_dec_ref(v_a_6051_);
return v_res_6056_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2(lean_object* v_x_6057_, lean_object* v_x_6058_){
_start:
{
lean_object* v___x_6059_; 
v___x_6059_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___redArg(v_x_6057_);
return v___x_6059_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2___boxed(lean_object* v_x_6060_, lean_object* v_x_6061_){
_start:
{
lean_object* v_res_6062_; 
v_res_6062_ = l_Prod_repr___at___00Array_repr___at___00Lean_Compiler_LCNF_UnreachableBranches_elimDead_spec__2_spec__2(v_x_6060_, v_x_6061_);
lean_dec(v_x_6061_);
return v_res_6062_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0(size_t v_sz_6063_, size_t v_i_6064_, lean_object* v_bs_6065_){
_start:
{
uint8_t v___x_6066_; 
v___x_6066_ = lean_usize_dec_lt(v_i_6064_, v_sz_6063_);
if (v___x_6066_ == 0)
{
return v_bs_6065_;
}
else
{
lean_object* v_v_6067_; lean_object* v_toSignature_6068_; lean_object* v_name_6069_; lean_object* v___x_6070_; lean_object* v_bs_x27_6071_; size_t v___x_6072_; size_t v___x_6073_; lean_object* v___x_6074_; 
v_v_6067_ = lean_array_uget_borrowed(v_bs_6065_, v_i_6064_);
v_toSignature_6068_ = lean_ctor_get(v_v_6067_, 0);
v_name_6069_ = lean_ctor_get(v_toSignature_6068_, 0);
lean_inc(v_name_6069_);
v___x_6070_ = lean_unsigned_to_nat(0u);
v_bs_x27_6071_ = lean_array_uset(v_bs_6065_, v_i_6064_, v___x_6070_);
v___x_6072_ = ((size_t)1ULL);
v___x_6073_ = lean_usize_add(v_i_6064_, v___x_6072_);
v___x_6074_ = lean_array_uset(v_bs_x27_6071_, v_i_6064_, v_name_6069_);
v_i_6064_ = v___x_6073_;
v_bs_6065_ = v___x_6074_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0___boxed(lean_object* v_sz_6076_, lean_object* v_i_6077_, lean_object* v_bs_6078_){
_start:
{
size_t v_sz_boxed_6079_; size_t v_i_boxed_6080_; lean_object* v_res_6081_; 
v_sz_boxed_6079_ = lean_unbox_usize(v_sz_6076_);
lean_dec(v_sz_6076_);
v_i_boxed_6080_ = lean_unbox_usize(v_i_6077_);
lean_dec(v_i_6077_);
v_res_6081_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0(v_sz_boxed_6079_, v_i_boxed_6080_, v_bs_6078_);
return v_res_6081_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__1(lean_object* v_a_6082_, lean_object* v_a_6083_){
_start:
{
if (lean_obj_tag(v_a_6082_) == 0)
{
lean_object* v___x_6084_; 
v___x_6084_ = l_List_reverse___redArg(v_a_6083_);
return v___x_6084_;
}
else
{
lean_object* v_head_6085_; lean_object* v_tail_6086_; lean_object* v___x_6088_; uint8_t v_isShared_6089_; uint8_t v_isSharedCheck_6095_; 
v_head_6085_ = lean_ctor_get(v_a_6082_, 0);
v_tail_6086_ = lean_ctor_get(v_a_6082_, 1);
v_isSharedCheck_6095_ = !lean_is_exclusive(v_a_6082_);
if (v_isSharedCheck_6095_ == 0)
{
v___x_6088_ = v_a_6082_;
v_isShared_6089_ = v_isSharedCheck_6095_;
goto v_resetjp_6087_;
}
else
{
lean_inc(v_tail_6086_);
lean_inc(v_head_6085_);
lean_dec(v_a_6082_);
v___x_6088_ = lean_box(0);
v_isShared_6089_ = v_isSharedCheck_6095_;
goto v_resetjp_6087_;
}
v_resetjp_6087_:
{
lean_object* v___x_6090_; lean_object* v___x_6092_; 
v___x_6090_ = l_Lean_MessageData_ofName(v_head_6085_);
if (v_isShared_6089_ == 0)
{
lean_ctor_set(v___x_6088_, 1, v_a_6083_);
lean_ctor_set(v___x_6088_, 0, v___x_6090_);
v___x_6092_ = v___x_6088_;
goto v_reusejp_6091_;
}
else
{
lean_object* v_reuseFailAlloc_6094_; 
v_reuseFailAlloc_6094_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6094_, 0, v___x_6090_);
lean_ctor_set(v_reuseFailAlloc_6094_, 1, v_a_6083_);
v___x_6092_ = v_reuseFailAlloc_6094_;
goto v_reusejp_6091_;
}
v_reusejp_6091_:
{
v_a_6082_ = v_tail_6086_;
v_a_6083_ = v___x_6092_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1(void){
_start:
{
lean_object* v___x_6097_; lean_object* v___x_6098_; 
v___x_6097_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__0));
v___x_6098_ = l_Lean_stringToMessageData(v___x_6097_);
return v___x_6098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0(lean_object* v___y_6099_, lean_object* v_x_6100_, lean_object* v___y_6101_, lean_object* v___y_6102_, lean_object* v___y_6103_, lean_object* v___y_6104_, lean_object* v___y_6105_, lean_object* v___y_6106_){
_start:
{
lean_object* v___x_6108_; size_t v_sz_6109_; size_t v___x_6110_; lean_object* v___x_6111_; lean_object* v___x_6112_; lean_object* v___x_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; lean_object* v___x_6116_; lean_object* v___x_6117_; 
v___x_6108_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1, &l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___closed__1);
v_sz_6109_ = lean_array_size(v___y_6099_);
v___x_6110_ = ((size_t)0ULL);
v___x_6111_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__0(v_sz_6109_, v___x_6110_, v___y_6099_);
v___x_6112_ = lean_array_to_list(v___x_6111_);
v___x_6113_ = lean_box(0);
v___x_6114_ = l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__1(v___x_6112_, v___x_6113_);
v___x_6115_ = l_Lean_MessageData_ofList(v___x_6114_);
v___x_6116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6116_, 0, v___x_6108_);
lean_ctor_set(v___x_6116_, 1, v___x_6115_);
v___x_6117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6117_, 0, v___x_6116_);
return v___x_6117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___boxed(lean_object* v___y_6118_, lean_object* v_x_6119_, lean_object* v___y_6120_, lean_object* v___y_6121_, lean_object* v___y_6122_, lean_object* v___y_6123_, lean_object* v___y_6124_, lean_object* v___y_6125_, lean_object* v___y_6126_){
_start:
{
lean_object* v_res_6127_; 
v_res_6127_ = l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0(v___y_6118_, v_x_6119_, v___y_6120_, v___y_6121_, v___y_6122_, v___y_6123_, v___y_6124_, v___y_6125_);
lean_dec(v___y_6125_);
lean_dec_ref(v___y_6124_);
lean_dec(v___y_6123_);
lean_dec_ref(v___y_6122_);
lean_dec(v___y_6121_);
lean_dec_ref(v___y_6120_);
lean_dec_ref(v_x_6119_);
return v_res_6127_;
}
}
static lean_object* _init_l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_6128_; 
v___x_6128_ = l_Lean_Compiler_LCNF_instInhabitedDecl_default___redArg();
return v___x_6128_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg(lean_object* v___y_6129_, lean_object* v_n_6130_, lean_object* v_j_6131_, lean_object* v_a_6132_){
_start:
{
lean_object* v_zero_6133_; uint8_t v_isZero_6134_; 
v_zero_6133_ = lean_unsigned_to_nat(0u);
v_isZero_6134_ = lean_nat_dec_eq(v_j_6131_, v_zero_6133_);
if (v_isZero_6134_ == 1)
{
lean_dec(v_j_6131_);
return v_a_6132_;
}
else
{
lean_object* v___x_6135_; lean_object* v___x_6136_; lean_object* v___x_6137_; lean_object* v_toSignature_6138_; uint8_t v_safe_6139_; lean_object* v_one_6140_; lean_object* v_n_6141_; 
v___x_6135_ = lean_nat_sub(v_n_6130_, v_j_6131_);
v___x_6136_ = lean_obj_once(&l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0, &l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0_once, _init_l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___closed__0);
v___x_6137_ = lean_array_get_borrowed(v___x_6136_, v___y_6129_, v___x_6135_);
lean_dec(v___x_6135_);
v_toSignature_6138_ = lean_ctor_get(v___x_6137_, 0);
v_safe_6139_ = lean_ctor_get_uint8(v_toSignature_6138_, sizeof(void*)*4);
v_one_6140_ = lean_unsigned_to_nat(1u);
v_n_6141_ = lean_nat_sub(v_j_6131_, v_one_6140_);
lean_dec(v_j_6131_);
if (v_safe_6139_ == 0)
{
lean_object* v___x_6142_; lean_object* v___x_6143_; 
v___x_6142_ = lean_box(1);
v___x_6143_ = lean_array_push(v_a_6132_, v___x_6142_);
v_j_6131_ = v_n_6141_;
v_a_6132_ = v___x_6143_;
goto _start;
}
else
{
lean_object* v___x_6145_; lean_object* v___x_6146_; 
v___x_6145_ = lean_box(0);
v___x_6146_ = lean_array_push(v_a_6132_, v___x_6145_);
v_j_6131_ = v_n_6141_;
v_a_6132_ = v___x_6146_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg___boxed(lean_object* v___y_6148_, lean_object* v_n_6149_, lean_object* v_j_6150_, lean_object* v_a_6151_){
_start:
{
lean_object* v_res_6152_; 
v_res_6152_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg(v___y_6148_, v_n_6149_, v_j_6150_, v_a_6151_);
lean_dec(v_n_6149_);
lean_dec_ref(v___y_6148_);
return v_res_6152_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg(lean_object* v___x_6153_, size_t v_sz_6154_, size_t v_i_6155_, lean_object* v_bs_6156_, lean_object* v___y_6157_, lean_object* v___y_6158_, lean_object* v___y_6159_, lean_object* v___y_6160_){
_start:
{
uint8_t v___x_6162_; 
v___x_6162_ = lean_usize_dec_lt(v_i_6155_, v_sz_6154_);
if (v___x_6162_ == 0)
{
lean_object* v___x_6163_; 
v___x_6163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6163_, 0, v_bs_6156_);
return v___x_6163_;
}
else
{
lean_object* v_v_6164_; lean_object* v_toSignature_6165_; uint8_t v_safe_6166_; lean_object* v___x_6167_; lean_object* v_bs_x27_6168_; lean_object* v_a_6170_; 
v_v_6164_ = lean_array_uget(v_bs_6156_, v_i_6155_);
v_toSignature_6165_ = lean_ctor_get(v_v_6164_, 0);
v_safe_6166_ = lean_ctor_get_uint8(v_toSignature_6165_, sizeof(void*)*4);
v___x_6167_ = lean_unsigned_to_nat(0u);
v_bs_x27_6168_ = lean_array_uset(v_bs_6156_, v_i_6155_, v___x_6167_);
if (v_safe_6166_ == 0)
{
v_a_6170_ = v_v_6164_;
goto v___jp_6169_;
}
else
{
lean_object* v___x_6175_; lean_object* v___x_6176_; lean_object* v___x_6177_; lean_object* v___x_6178_; 
v___x_6175_ = lean_obj_once(&l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0, &l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_UnreachableBranches_getAssignment___redArg___closed__0);
v___x_6176_ = lean_usize_to_nat(v_i_6155_);
v___x_6177_ = lean_array_get_borrowed(v___x_6175_, v___x_6153_, v___x_6176_);
lean_dec(v___x_6176_);
lean_inc(v___x_6177_);
v___x_6178_ = l_Lean_Compiler_LCNF_UnreachableBranches_elimDead(v___x_6177_, v_v_6164_, v___y_6157_, v___y_6158_, v___y_6159_, v___y_6160_);
if (lean_obj_tag(v___x_6178_) == 0)
{
lean_object* v_a_6179_; 
v_a_6179_ = lean_ctor_get(v___x_6178_, 0);
lean_inc(v_a_6179_);
lean_dec_ref_known(v___x_6178_, 1);
v_a_6170_ = v_a_6179_;
goto v___jp_6169_;
}
else
{
lean_object* v_a_6180_; lean_object* v___x_6182_; uint8_t v_isShared_6183_; uint8_t v_isSharedCheck_6187_; 
lean_dec_ref(v_bs_x27_6168_);
v_a_6180_ = lean_ctor_get(v___x_6178_, 0);
v_isSharedCheck_6187_ = !lean_is_exclusive(v___x_6178_);
if (v_isSharedCheck_6187_ == 0)
{
v___x_6182_ = v___x_6178_;
v_isShared_6183_ = v_isSharedCheck_6187_;
goto v_resetjp_6181_;
}
else
{
lean_inc(v_a_6180_);
lean_dec(v___x_6178_);
v___x_6182_ = lean_box(0);
v_isShared_6183_ = v_isSharedCheck_6187_;
goto v_resetjp_6181_;
}
v_resetjp_6181_:
{
lean_object* v___x_6185_; 
if (v_isShared_6183_ == 0)
{
v___x_6185_ = v___x_6182_;
goto v_reusejp_6184_;
}
else
{
lean_object* v_reuseFailAlloc_6186_; 
v_reuseFailAlloc_6186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6186_, 0, v_a_6180_);
v___x_6185_ = v_reuseFailAlloc_6186_;
goto v_reusejp_6184_;
}
v_reusejp_6184_:
{
return v___x_6185_;
}
}
}
}
v___jp_6169_:
{
size_t v___x_6171_; size_t v___x_6172_; lean_object* v___x_6173_; 
v___x_6171_ = ((size_t)1ULL);
v___x_6172_ = lean_usize_add(v_i_6155_, v___x_6171_);
v___x_6173_ = lean_array_uset(v_bs_x27_6168_, v_i_6155_, v_a_6170_);
v_i_6155_ = v___x_6172_;
v_bs_6156_ = v___x_6173_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg___boxed(lean_object* v___x_6188_, lean_object* v_sz_6189_, lean_object* v_i_6190_, lean_object* v_bs_6191_, lean_object* v___y_6192_, lean_object* v___y_6193_, lean_object* v___y_6194_, lean_object* v___y_6195_, lean_object* v___y_6196_){
_start:
{
size_t v_sz_boxed_6197_; size_t v_i_boxed_6198_; lean_object* v_res_6199_; 
v_sz_boxed_6197_ = lean_unbox_usize(v_sz_6189_);
lean_dec(v_sz_6189_);
v_i_boxed_6198_ = lean_unbox_usize(v_i_6190_);
lean_dec(v_i_6190_);
v_res_6199_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg(v___x_6188_, v_sz_boxed_6197_, v_i_boxed_6198_, v_bs_6191_, v___y_6192_, v___y_6193_, v___y_6194_, v___y_6195_);
lean_dec(v___y_6195_);
lean_dec_ref(v___y_6194_);
lean_dec(v___y_6193_);
lean_dec_ref(v___y_6192_);
lean_dec_ref(v___x_6188_);
return v_res_6199_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg(lean_object* v_hi_6202_, lean_object* v_pivot_6203_, lean_object* v_as_6204_, lean_object* v_i_6205_, lean_object* v_k_6206_){
_start:
{
uint8_t v___x_6207_; 
v___x_6207_ = lean_nat_dec_lt(v_k_6206_, v_hi_6202_);
if (v___x_6207_ == 0)
{
lean_object* v___x_6208_; lean_object* v___x_6209_; 
lean_dec(v_k_6206_);
lean_dec_ref(v_pivot_6203_);
v___x_6208_ = lean_array_fswap(v_as_6204_, v_i_6205_, v_hi_6202_);
v___x_6209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6209_, 0, v_i_6205_);
lean_ctor_set(v___x_6209_, 1, v___x_6208_);
return v___x_6209_;
}
else
{
lean_object* v___x_6210_; lean_object* v_toSignature_6211_; lean_object* v_toSignature_6212_; lean_object* v_name_6213_; lean_object* v_name_6214_; uint8_t v___x_6215_; lean_object* v___x_6216_; lean_object* v___x_6217_; lean_object* v___x_6218_; lean_object* v___x_6219_; lean_object* v___x_6220_; lean_object* v___x_6221_; lean_object* v___x_6222_; lean_object* v___x_6223_; lean_object* v___x_6224_; uint8_t v___x_6225_; 
v___x_6210_ = lean_array_fget_borrowed(v_as_6204_, v_k_6206_);
v_toSignature_6211_ = lean_ctor_get(v___x_6210_, 0);
v_toSignature_6212_ = lean_ctor_get(v_pivot_6203_, 0);
v_name_6213_ = lean_ctor_get(v_toSignature_6211_, 0);
v_name_6214_ = lean_ctor_get(v_toSignature_6212_, 0);
v___x_6215_ = 0;
v___x_6216_ = l_Lean_Compiler_LCNF_Decl_size(v___x_6215_, v___x_6210_);
v___x_6217_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_6218_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__0));
v___x_6219_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__1));
lean_inc(v_name_6213_);
v___x_6220_ = l_Lean_Name_toString(v_name_6213_, v___x_6207_);
v___x_6221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6221_, 0, v___x_6216_);
lean_ctor_set(v___x_6221_, 1, v___x_6220_);
v___x_6222_ = l_Lean_Compiler_LCNF_Decl_size(v___x_6215_, v_pivot_6203_);
lean_inc(v_name_6214_);
v___x_6223_ = l_Lean_Name_toString(v_name_6214_, v___x_6207_);
v___x_6224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6224_, 0, v___x_6222_);
lean_ctor_set(v___x_6224_, 1, v___x_6223_);
v___x_6225_ = l_Prod_lexLtDec___redArg(v___x_6217_, v___x_6218_, v___x_6219_, v___x_6221_, v___x_6224_);
if (v___x_6225_ == 0)
{
lean_object* v___x_6226_; lean_object* v___x_6227_; 
v___x_6226_ = lean_unsigned_to_nat(1u);
v___x_6227_ = lean_nat_add(v_k_6206_, v___x_6226_);
lean_dec(v_k_6206_);
v_k_6206_ = v___x_6227_;
goto _start;
}
else
{
lean_object* v___x_6229_; lean_object* v___x_6230_; lean_object* v___x_6231_; lean_object* v___x_6232_; 
v___x_6229_ = lean_array_fswap(v_as_6204_, v_i_6205_, v_k_6206_);
v___x_6230_ = lean_unsigned_to_nat(1u);
v___x_6231_ = lean_nat_add(v_i_6205_, v___x_6230_);
lean_dec(v_i_6205_);
v___x_6232_ = lean_nat_add(v_k_6206_, v___x_6230_);
lean_dec(v_k_6206_);
v_as_6204_ = v___x_6229_;
v_i_6205_ = v___x_6231_;
v_k_6206_ = v___x_6232_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___boxed(lean_object* v_hi_6234_, lean_object* v_pivot_6235_, lean_object* v_as_6236_, lean_object* v_i_6237_, lean_object* v_k_6238_){
_start:
{
lean_object* v_res_6239_; 
v_res_6239_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg(v_hi_6234_, v_pivot_6235_, v_as_6236_, v_i_6237_, v_k_6238_);
lean_dec(v_hi_6234_);
return v_res_6239_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0(uint8_t v___x_6240_, lean_object* v_l_6241_, lean_object* v_r_6242_){
_start:
{
lean_object* v_toSignature_6243_; lean_object* v_toSignature_6244_; lean_object* v_name_6245_; lean_object* v_name_6246_; uint8_t v___x_6247_; lean_object* v___x_6248_; lean_object* v___x_6249_; lean_object* v___x_6250_; lean_object* v___x_6251_; lean_object* v___x_6252_; lean_object* v___x_6253_; lean_object* v___x_6254_; lean_object* v___x_6255_; lean_object* v___x_6256_; uint8_t v___x_6257_; 
v_toSignature_6243_ = lean_ctor_get(v_l_6241_, 0);
v_toSignature_6244_ = lean_ctor_get(v_r_6242_, 0);
v_name_6245_ = lean_ctor_get(v_toSignature_6243_, 0);
lean_inc(v_name_6245_);
v_name_6246_ = lean_ctor_get(v_toSignature_6244_, 0);
lean_inc(v_name_6246_);
v___x_6247_ = 0;
v___x_6248_ = l_Lean_Compiler_LCNF_Decl_size(v___x_6247_, v_l_6241_);
lean_dec_ref(v_l_6241_);
v___x_6249_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_6250_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__0));
v___x_6251_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg___closed__1));
v___x_6252_ = l_Lean_Name_toString(v_name_6245_, v___x_6240_);
v___x_6253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6253_, 0, v___x_6248_);
lean_ctor_set(v___x_6253_, 1, v___x_6252_);
v___x_6254_ = l_Lean_Compiler_LCNF_Decl_size(v___x_6247_, v_r_6242_);
lean_dec_ref(v_r_6242_);
v___x_6255_ = l_Lean_Name_toString(v_name_6246_, v___x_6240_);
v___x_6256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6256_, 0, v___x_6254_);
lean_ctor_set(v___x_6256_, 1, v___x_6255_);
v___x_6257_ = l_Prod_lexLtDec___redArg(v___x_6249_, v___x_6250_, v___x_6251_, v___x_6253_, v___x_6256_);
return v___x_6257_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0___boxed(lean_object* v___x_6258_, lean_object* v_l_6259_, lean_object* v_r_6260_){
_start:
{
uint8_t v___x_13221__boxed_6261_; uint8_t v_res_6262_; lean_object* v_r_6263_; 
v___x_13221__boxed_6261_ = lean_unbox(v___x_6258_);
v_res_6262_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0(v___x_13221__boxed_6261_, v_l_6259_, v_r_6260_);
v_r_6263_ = lean_box(v_res_6262_);
return v_r_6263_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(lean_object* v_n_6264_, lean_object* v_as_6265_, lean_object* v_lo_6266_, lean_object* v_hi_6267_){
_start:
{
lean_object* v___y_6269_; uint8_t v___x_6279_; 
v___x_6279_ = lean_nat_dec_lt(v_lo_6266_, v_hi_6267_);
if (v___x_6279_ == 0)
{
lean_dec(v_lo_6266_);
return v_as_6265_;
}
else
{
lean_object* v___x_6280_; lean_object* v___x_6281_; lean_object* v_mid_6282_; lean_object* v___y_6284_; lean_object* v___y_6290_; lean_object* v___x_6295_; lean_object* v___x_6296_; uint8_t v___x_6297_; 
v___x_6280_ = lean_nat_add(v_lo_6266_, v_hi_6267_);
v___x_6281_ = lean_unsigned_to_nat(1u);
v_mid_6282_ = lean_nat_shiftr(v___x_6280_, v___x_6281_);
lean_dec(v___x_6280_);
v___x_6295_ = lean_array_fget_borrowed(v_as_6265_, v_mid_6282_);
v___x_6296_ = lean_array_fget_borrowed(v_as_6265_, v_lo_6266_);
lean_inc(v___x_6296_);
lean_inc(v___x_6295_);
v___x_6297_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0(v___x_6279_, v___x_6295_, v___x_6296_);
if (v___x_6297_ == 0)
{
v___y_6290_ = v_as_6265_;
goto v___jp_6289_;
}
else
{
lean_object* v___x_6298_; 
v___x_6298_ = lean_array_fswap(v_as_6265_, v_lo_6266_, v_mid_6282_);
v___y_6290_ = v___x_6298_;
goto v___jp_6289_;
}
v___jp_6283_:
{
lean_object* v___x_6285_; lean_object* v___x_6286_; uint8_t v___x_6287_; 
v___x_6285_ = lean_array_fget_borrowed(v___y_6284_, v_mid_6282_);
v___x_6286_ = lean_array_fget_borrowed(v___y_6284_, v_hi_6267_);
lean_inc(v___x_6286_);
lean_inc(v___x_6285_);
v___x_6287_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0(v___x_6279_, v___x_6285_, v___x_6286_);
if (v___x_6287_ == 0)
{
lean_dec(v_mid_6282_);
v___y_6269_ = v___y_6284_;
goto v___jp_6268_;
}
else
{
lean_object* v___x_6288_; 
v___x_6288_ = lean_array_fswap(v___y_6284_, v_mid_6282_, v_hi_6267_);
lean_dec(v_mid_6282_);
v___y_6269_ = v___x_6288_;
goto v___jp_6268_;
}
}
v___jp_6289_:
{
lean_object* v___x_6291_; lean_object* v___x_6292_; uint8_t v___x_6293_; 
v___x_6291_ = lean_array_fget_borrowed(v___y_6290_, v_hi_6267_);
v___x_6292_ = lean_array_fget_borrowed(v___y_6290_, v_lo_6266_);
lean_inc(v___x_6292_);
lean_inc(v___x_6291_);
v___x_6293_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___lam__0(v___x_6279_, v___x_6291_, v___x_6292_);
if (v___x_6293_ == 0)
{
v___y_6284_ = v___y_6290_;
goto v___jp_6283_;
}
else
{
lean_object* v___x_6294_; 
v___x_6294_ = lean_array_fswap(v___y_6290_, v_lo_6266_, v_hi_6267_);
v___y_6284_ = v___x_6294_;
goto v___jp_6283_;
}
}
}
v___jp_6268_:
{
lean_object* v_pivot_6270_; lean_object* v___x_6271_; lean_object* v_fst_6272_; lean_object* v_snd_6273_; uint8_t v___x_6274_; 
v_pivot_6270_ = lean_array_fget(v___y_6269_, v_hi_6267_);
lean_inc_n(v_lo_6266_, 2);
v___x_6271_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg(v_hi_6267_, v_pivot_6270_, v___y_6269_, v_lo_6266_, v_lo_6266_);
v_fst_6272_ = lean_ctor_get(v___x_6271_, 0);
lean_inc(v_fst_6272_);
v_snd_6273_ = lean_ctor_get(v___x_6271_, 1);
lean_inc(v_snd_6273_);
lean_dec_ref(v___x_6271_);
v___x_6274_ = lean_nat_dec_le(v_hi_6267_, v_fst_6272_);
if (v___x_6274_ == 0)
{
lean_object* v___x_6275_; lean_object* v___x_6276_; lean_object* v___x_6277_; 
v___x_6275_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(v_n_6264_, v_snd_6273_, v_lo_6266_, v_fst_6272_);
v___x_6276_ = lean_unsigned_to_nat(1u);
v___x_6277_ = lean_nat_add(v_fst_6272_, v___x_6276_);
lean_dec(v_fst_6272_);
v_as_6265_ = v___x_6275_;
v_lo_6266_ = v___x_6277_;
goto _start;
}
else
{
lean_dec(v_fst_6272_);
lean_dec(v_lo_6266_);
return v_snd_6273_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg___boxed(lean_object* v_n_6299_, lean_object* v_as_6300_, lean_object* v_lo_6301_, lean_object* v_hi_6302_){
_start:
{
lean_object* v_res_6303_; 
v_res_6303_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(v_n_6299_, v_as_6300_, v_lo_6301_, v_hi_6302_);
lean_dec(v_hi_6302_);
lean_dec(v_n_6299_);
return v_res_6303_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg(lean_object* v___y_6304_, lean_object* v___x_6305_, lean_object* v_n_6306_, lean_object* v_j_6307_, lean_object* v_a_6308_){
_start:
{
lean_object* v_zero_6309_; uint8_t v_isZero_6310_; 
v_zero_6309_ = lean_unsigned_to_nat(0u);
v_isZero_6310_ = lean_nat_dec_eq(v_j_6307_, v_zero_6309_);
if (v_isZero_6310_ == 1)
{
lean_dec(v_j_6307_);
return v_a_6308_;
}
else
{
lean_object* v___x_6311_; lean_object* v___x_6312_; lean_object* v_toSignature_6313_; lean_object* v_name_6314_; lean_object* v___x_6315_; lean_object* v_one_6316_; lean_object* v_n_6317_; lean_object* v___x_6318_; lean_object* v___x_6319_; 
v___x_6311_ = lean_nat_sub(v_n_6306_, v_j_6307_);
v___x_6312_ = lean_array_fget_borrowed(v___y_6304_, v___x_6311_);
v_toSignature_6313_ = lean_ctor_get(v___x_6312_, 0);
v_name_6314_ = lean_ctor_get(v_toSignature_6313_, 0);
v___x_6315_ = lean_box(0);
v_one_6316_ = lean_unsigned_to_nat(1u);
v_n_6317_ = lean_nat_sub(v_j_6307_, v_one_6316_);
lean_dec(v_j_6307_);
v___x_6318_ = lean_array_get_borrowed(v___x_6315_, v___x_6305_, v___x_6311_);
lean_dec(v___x_6311_);
lean_inc(v___x_6318_);
lean_inc(v_name_6314_);
v___x_6319_ = l_Lean_Compiler_LCNF_UnreachableBranches_addFunctionSummary(v_a_6308_, v_name_6314_, v___x_6318_);
v_j_6307_ = v_n_6317_;
v_a_6308_ = v___x_6319_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg___boxed(lean_object* v___y_6321_, lean_object* v___x_6322_, lean_object* v_n_6323_, lean_object* v_j_6324_, lean_object* v_a_6325_){
_start:
{
lean_object* v_res_6326_; 
v_res_6326_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg(v___y_6321_, v___x_6322_, v_n_6323_, v_j_6324_, v_a_6325_);
lean_dec(v_n_6323_);
lean_dec_ref(v___x_6322_);
lean_dec_ref(v___y_6321_);
return v_res_6326_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0(void){
_start:
{
lean_object* v___x_6327_; lean_object* v___x_6328_; 
v___x_6327_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn___lam__3___closed__0_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_);
v___x_6328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6328_, 0, v___x_6327_);
return v___x_6328_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1(void){
_start:
{
lean_object* v___x_6329_; lean_object* v___x_6330_; 
v___x_6329_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0, &l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__0);
v___x_6330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6330_, 0, v___x_6329_);
lean_ctor_set(v___x_6330_, 1, v___x_6329_);
return v___x_6330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches(lean_object* v_decls_6333_, lean_object* v_a_6334_, lean_object* v_a_6335_, lean_object* v_a_6336_, lean_object* v_a_6337_){
_start:
{
size_t v___y_6340_; lean_object* v___y_6341_; size_t v___y_6342_; lean_object* v___y_6343_; lean_object* v___y_6344_; lean_object* v___y_6345_; lean_object* v___y_6380_; lean_object* v___y_6381_; lean_object* v___y_6382_; lean_object* v___y_6383_; lean_object* v___y_6384_; lean_object* v___y_6385_; lean_object* v___y_6386_; size_t v___y_6387_; uint8_t v___y_6388_; size_t v___y_6389_; uint8_t v___y_6390_; lean_object* v___y_6391_; lean_object* v___y_6392_; lean_object* v___y_6393_; lean_object* v_a_6394_; lean_object* v___y_6404_; lean_object* v___y_6405_; lean_object* v___y_6406_; lean_object* v___y_6407_; lean_object* v___y_6408_; lean_object* v___y_6409_; lean_object* v___y_6410_; size_t v___y_6411_; uint8_t v___y_6412_; size_t v___y_6413_; uint8_t v___y_6414_; lean_object* v___y_6415_; lean_object* v___y_6416_; lean_object* v___y_6417_; lean_object* v_a_6418_; lean_object* v___x_6430_; lean_object* v___y_6432_; lean_object* v___y_6433_; lean_object* v___y_6434_; lean_object* v___y_6435_; lean_object* v___y_6436_; size_t v___y_6437_; uint8_t v___y_6438_; size_t v___y_6439_; uint8_t v___y_6440_; lean_object* v___y_6441_; lean_object* v___y_6442_; lean_object* v___y_6443_; lean_object* v___y_6485_; lean_object* v___x_6509_; lean_object* v___y_6511_; lean_object* v___y_6512_; uint8_t v___x_6514_; 
v___x_6430_ = lean_unsigned_to_nat(0u);
v___x_6509_ = lean_array_get_size(v_decls_6333_);
v___x_6514_ = lean_nat_dec_eq(v___x_6509_, v___x_6430_);
if (v___x_6514_ == 0)
{
lean_object* v___x_6515_; lean_object* v___x_6516_; lean_object* v___y_6518_; uint8_t v___x_6520_; 
v___x_6515_ = lean_unsigned_to_nat(1u);
v___x_6516_ = lean_nat_sub(v___x_6509_, v___x_6515_);
v___x_6520_ = lean_nat_dec_le(v___x_6430_, v___x_6516_);
if (v___x_6520_ == 0)
{
lean_inc(v___x_6516_);
v___y_6518_ = v___x_6516_;
goto v___jp_6517_;
}
else
{
v___y_6518_ = v___x_6430_;
goto v___jp_6517_;
}
v___jp_6517_:
{
uint8_t v___x_6519_; 
v___x_6519_ = lean_nat_dec_le(v___y_6518_, v___x_6516_);
if (v___x_6519_ == 0)
{
lean_dec(v___x_6516_);
lean_inc(v___y_6518_);
v___y_6511_ = v___y_6518_;
v___y_6512_ = v___y_6518_;
goto v___jp_6510_;
}
else
{
v___y_6511_ = v___y_6518_;
v___y_6512_ = v___x_6516_;
goto v___jp_6510_;
}
}
}
else
{
v___y_6485_ = v_decls_6333_;
goto v___jp_6484_;
}
v___jp_6339_:
{
if (lean_obj_tag(v___y_6345_) == 0)
{
lean_object* v___x_6346_; lean_object* v_assignments_6347_; lean_object* v_funVals_6348_; lean_object* v___x_6349_; lean_object* v_env_6350_; lean_object* v_nextMacroScope_6351_; lean_object* v_ngen_6352_; lean_object* v_auxDeclNGen_6353_; lean_object* v_traceState_6354_; lean_object* v_recordedDeps_6355_; lean_object* v_messages_6356_; lean_object* v_infoState_6357_; lean_object* v_snapshotTasks_6358_; lean_object* v___x_6360_; uint8_t v_isShared_6361_; uint8_t v_isSharedCheck_6369_; 
lean_dec_ref_known(v___y_6345_, 1);
v___x_6346_ = lean_st_ref_get(v___y_6344_);
lean_dec(v___y_6344_);
v_assignments_6347_ = lean_ctor_get(v___x_6346_, 0);
lean_inc_ref(v_assignments_6347_);
v_funVals_6348_ = lean_ctor_get(v___x_6346_, 1);
lean_inc_ref(v_funVals_6348_);
lean_dec(v___x_6346_);
v___x_6349_ = lean_st_ref_take(v_a_6337_);
v_env_6350_ = lean_ctor_get(v___x_6349_, 0);
v_nextMacroScope_6351_ = lean_ctor_get(v___x_6349_, 1);
v_ngen_6352_ = lean_ctor_get(v___x_6349_, 2);
v_auxDeclNGen_6353_ = lean_ctor_get(v___x_6349_, 3);
v_traceState_6354_ = lean_ctor_get(v___x_6349_, 4);
v_recordedDeps_6355_ = lean_ctor_get(v___x_6349_, 6);
v_messages_6356_ = lean_ctor_get(v___x_6349_, 7);
v_infoState_6357_ = lean_ctor_get(v___x_6349_, 8);
v_snapshotTasks_6358_ = lean_ctor_get(v___x_6349_, 9);
v_isSharedCheck_6369_ = !lean_is_exclusive(v___x_6349_);
if (v_isSharedCheck_6369_ == 0)
{
lean_object* v_unused_6370_; 
v_unused_6370_ = lean_ctor_get(v___x_6349_, 5);
lean_dec(v_unused_6370_);
v___x_6360_ = v___x_6349_;
v_isShared_6361_ = v_isSharedCheck_6369_;
goto v_resetjp_6359_;
}
else
{
lean_inc(v_snapshotTasks_6358_);
lean_inc(v_infoState_6357_);
lean_inc(v_messages_6356_);
lean_inc(v_recordedDeps_6355_);
lean_inc(v_traceState_6354_);
lean_inc(v_auxDeclNGen_6353_);
lean_inc(v_ngen_6352_);
lean_inc(v_nextMacroScope_6351_);
lean_inc(v_env_6350_);
lean_dec(v___x_6349_);
v___x_6360_ = lean_box(0);
v_isShared_6361_ = v_isSharedCheck_6369_;
goto v_resetjp_6359_;
}
v_resetjp_6359_:
{
lean_object* v___x_6362_; lean_object* v___x_6363_; lean_object* v___x_6365_; 
lean_inc(v___y_6341_);
v___x_6362_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg(v___y_6343_, v_funVals_6348_, v___y_6341_, v___y_6341_, v_env_6350_);
lean_dec(v___y_6341_);
lean_dec_ref(v_funVals_6348_);
v___x_6363_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1, &l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__1);
if (v_isShared_6361_ == 0)
{
lean_ctor_set(v___x_6360_, 5, v___x_6363_);
lean_ctor_set(v___x_6360_, 0, v___x_6362_);
v___x_6365_ = v___x_6360_;
goto v_reusejp_6364_;
}
else
{
lean_object* v_reuseFailAlloc_6368_; 
v_reuseFailAlloc_6368_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_6368_, 0, v___x_6362_);
lean_ctor_set(v_reuseFailAlloc_6368_, 1, v_nextMacroScope_6351_);
lean_ctor_set(v_reuseFailAlloc_6368_, 2, v_ngen_6352_);
lean_ctor_set(v_reuseFailAlloc_6368_, 3, v_auxDeclNGen_6353_);
lean_ctor_set(v_reuseFailAlloc_6368_, 4, v_traceState_6354_);
lean_ctor_set(v_reuseFailAlloc_6368_, 5, v___x_6363_);
lean_ctor_set(v_reuseFailAlloc_6368_, 6, v_recordedDeps_6355_);
lean_ctor_set(v_reuseFailAlloc_6368_, 7, v_messages_6356_);
lean_ctor_set(v_reuseFailAlloc_6368_, 8, v_infoState_6357_);
lean_ctor_set(v_reuseFailAlloc_6368_, 9, v_snapshotTasks_6358_);
v___x_6365_ = v_reuseFailAlloc_6368_;
goto v_reusejp_6364_;
}
v_reusejp_6364_:
{
lean_object* v___x_6366_; lean_object* v___x_6367_; 
v___x_6366_ = lean_st_ref_put(v_a_6337_, v___x_6365_);
v___x_6367_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg(v_assignments_6347_, v___y_6340_, v___y_6342_, v___y_6343_, v_a_6334_, v_a_6335_, v_a_6336_, v_a_6337_);
lean_dec_ref(v_assignments_6347_);
return v___x_6367_;
}
}
}
else
{
lean_object* v_a_6371_; lean_object* v___x_6373_; uint8_t v_isShared_6374_; uint8_t v_isSharedCheck_6378_; 
lean_dec(v___y_6344_);
lean_dec_ref(v___y_6343_);
lean_dec(v___y_6341_);
v_a_6371_ = lean_ctor_get(v___y_6345_, 0);
v_isSharedCheck_6378_ = !lean_is_exclusive(v___y_6345_);
if (v_isSharedCheck_6378_ == 0)
{
v___x_6373_ = v___y_6345_;
v_isShared_6374_ = v_isSharedCheck_6378_;
goto v_resetjp_6372_;
}
else
{
lean_inc(v_a_6371_);
lean_dec(v___y_6345_);
v___x_6373_ = lean_box(0);
v_isShared_6374_ = v_isSharedCheck_6378_;
goto v_resetjp_6372_;
}
v_resetjp_6372_:
{
lean_object* v___x_6376_; 
if (v_isShared_6374_ == 0)
{
v___x_6376_ = v___x_6373_;
goto v_reusejp_6375_;
}
else
{
lean_object* v_reuseFailAlloc_6377_; 
v_reuseFailAlloc_6377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6377_, 0, v_a_6371_);
v___x_6376_ = v_reuseFailAlloc_6377_;
goto v_reusejp_6375_;
}
v_reusejp_6375_:
{
return v___x_6376_;
}
}
}
}
v___jp_6379_:
{
lean_object* v___x_6395_; double v___x_6396_; double v___x_6397_; lean_object* v___x_6398_; lean_object* v___x_6399_; lean_object* v___x_6400_; lean_object* v___x_6401_; lean_object* v___x_6402_; 
v___x_6395_ = lean_io_get_num_heartbeats();
v___x_6396_ = lean_float_of_nat(v___y_6380_);
v___x_6397_ = lean_float_of_nat(v___x_6395_);
v___x_6398_ = lean_box_float(v___x_6396_);
v___x_6399_ = lean_box_float(v___x_6397_);
v___x_6400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6400_, 0, v___x_6398_);
lean_ctor_set(v___x_6400_, 1, v___x_6399_);
v___x_6401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6401_, 0, v_a_6394_);
lean_ctor_set(v___x_6401_, 1, v___x_6400_);
lean_inc_ref(v___y_6391_);
lean_inc(v___y_6381_);
v___x_6402_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v___y_6381_, v___y_6388_, v___y_6391_, v___y_6385_, v___y_6390_, v___y_6386_, v___y_6384_, v___x_6401_, v___y_6382_, v___y_6393_, v_a_6334_, v_a_6335_, v_a_6336_, v_a_6337_);
lean_dec_ref(v___y_6382_);
v___y_6340_ = v___y_6387_;
v___y_6341_ = v___y_6383_;
v___y_6342_ = v___y_6389_;
v___y_6343_ = v___y_6392_;
v___y_6344_ = v___y_6393_;
v___y_6345_ = v___x_6402_;
goto v___jp_6339_;
}
v___jp_6403_:
{
lean_object* v___x_6419_; double v___x_6420_; double v___x_6421_; double v___x_6422_; double v___x_6423_; double v___x_6424_; lean_object* v___x_6425_; lean_object* v___x_6426_; lean_object* v___x_6427_; lean_object* v___x_6428_; lean_object* v___x_6429_; 
v___x_6419_ = lean_io_mono_nanos_now();
v___x_6420_ = lean_float_of_nat(v___y_6408_);
v___x_6421_ = lean_float_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__1);
v___x_6422_ = lean_float_div(v___x_6420_, v___x_6421_);
v___x_6423_ = lean_float_of_nat(v___x_6419_);
v___x_6424_ = lean_float_div(v___x_6423_, v___x_6421_);
v___x_6425_ = lean_box_float(v___x_6422_);
v___x_6426_ = lean_box_float(v___x_6424_);
v___x_6427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6427_, 0, v___x_6425_);
lean_ctor_set(v___x_6427_, 1, v___x_6426_);
v___x_6428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6428_, 0, v_a_6418_);
lean_ctor_set(v___x_6428_, 1, v___x_6427_);
lean_inc_ref(v___y_6415_);
lean_inc(v___y_6404_);
v___x_6429_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__2(v___y_6404_, v___y_6412_, v___y_6415_, v___y_6409_, v___y_6414_, v___y_6410_, v___y_6407_, v___x_6428_, v___y_6405_, v___y_6417_, v_a_6334_, v_a_6335_, v_a_6336_, v_a_6337_);
lean_dec_ref(v___y_6405_);
v___y_6340_ = v___y_6411_;
v___y_6341_ = v___y_6406_;
v___y_6342_ = v___y_6413_;
v___y_6343_ = v___y_6416_;
v___y_6344_ = v___y_6417_;
v___y_6345_ = v___x_6429_;
goto v___jp_6339_;
}
v___jp_6431_:
{
lean_object* v___x_6444_; lean_object* v_a_6445_; lean_object* v___x_6446_; uint8_t v___x_6447_; 
v___x_6444_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__0___redArg(v_a_6337_);
v_a_6445_ = lean_ctor_get(v___x_6444_, 0);
lean_inc(v_a_6445_);
lean_dec_ref(v___x_6444_);
v___x_6446_ = l_Lean_trace_profiler_useHeartbeats;
v___x_6447_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(v___y_6436_, v___x_6446_);
if (v___x_6447_ == 0)
{
lean_object* v___x_6448_; lean_object* v___x_6449_; 
v___x_6448_ = lean_io_mono_nanos_now();
v___x_6449_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(v___x_6430_, v___y_6433_, v___y_6443_, v_a_6334_, v_a_6335_, v_a_6336_, v_a_6337_);
if (lean_obj_tag(v___x_6449_) == 0)
{
lean_object* v_a_6450_; lean_object* v___x_6452_; uint8_t v_isShared_6453_; uint8_t v_isSharedCheck_6457_; 
v_a_6450_ = lean_ctor_get(v___x_6449_, 0);
v_isSharedCheck_6457_ = !lean_is_exclusive(v___x_6449_);
if (v_isSharedCheck_6457_ == 0)
{
v___x_6452_ = v___x_6449_;
v_isShared_6453_ = v_isSharedCheck_6457_;
goto v_resetjp_6451_;
}
else
{
lean_inc(v_a_6450_);
lean_dec(v___x_6449_);
v___x_6452_ = lean_box(0);
v_isShared_6453_ = v_isSharedCheck_6457_;
goto v_resetjp_6451_;
}
v_resetjp_6451_:
{
lean_object* v___x_6455_; 
if (v_isShared_6453_ == 0)
{
lean_ctor_set_tag(v___x_6452_, 1);
v___x_6455_ = v___x_6452_;
goto v_reusejp_6454_;
}
else
{
lean_object* v_reuseFailAlloc_6456_; 
v_reuseFailAlloc_6456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6456_, 0, v_a_6450_);
v___x_6455_ = v_reuseFailAlloc_6456_;
goto v_reusejp_6454_;
}
v_reusejp_6454_:
{
v___y_6404_ = v___y_6432_;
v___y_6405_ = v___y_6433_;
v___y_6406_ = v___y_6434_;
v___y_6407_ = v___y_6435_;
v___y_6408_ = v___x_6448_;
v___y_6409_ = v___y_6436_;
v___y_6410_ = v_a_6445_;
v___y_6411_ = v___y_6437_;
v___y_6412_ = v___y_6438_;
v___y_6413_ = v___y_6439_;
v___y_6414_ = v___y_6440_;
v___y_6415_ = v___y_6441_;
v___y_6416_ = v___y_6442_;
v___y_6417_ = v___y_6443_;
v_a_6418_ = v___x_6455_;
goto v___jp_6403_;
}
}
}
else
{
lean_object* v_a_6458_; lean_object* v___x_6460_; uint8_t v_isShared_6461_; uint8_t v_isSharedCheck_6465_; 
v_a_6458_ = lean_ctor_get(v___x_6449_, 0);
v_isSharedCheck_6465_ = !lean_is_exclusive(v___x_6449_);
if (v_isSharedCheck_6465_ == 0)
{
v___x_6460_ = v___x_6449_;
v_isShared_6461_ = v_isSharedCheck_6465_;
goto v_resetjp_6459_;
}
else
{
lean_inc(v_a_6458_);
lean_dec(v___x_6449_);
v___x_6460_ = lean_box(0);
v_isShared_6461_ = v_isSharedCheck_6465_;
goto v_resetjp_6459_;
}
v_resetjp_6459_:
{
lean_object* v___x_6463_; 
if (v_isShared_6461_ == 0)
{
lean_ctor_set_tag(v___x_6460_, 0);
v___x_6463_ = v___x_6460_;
goto v_reusejp_6462_;
}
else
{
lean_object* v_reuseFailAlloc_6464_; 
v_reuseFailAlloc_6464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6464_, 0, v_a_6458_);
v___x_6463_ = v_reuseFailAlloc_6464_;
goto v_reusejp_6462_;
}
v_reusejp_6462_:
{
v___y_6404_ = v___y_6432_;
v___y_6405_ = v___y_6433_;
v___y_6406_ = v___y_6434_;
v___y_6407_ = v___y_6435_;
v___y_6408_ = v___x_6448_;
v___y_6409_ = v___y_6436_;
v___y_6410_ = v_a_6445_;
v___y_6411_ = v___y_6437_;
v___y_6412_ = v___y_6438_;
v___y_6413_ = v___y_6439_;
v___y_6414_ = v___y_6440_;
v___y_6415_ = v___y_6441_;
v___y_6416_ = v___y_6442_;
v___y_6417_ = v___y_6443_;
v_a_6418_ = v___x_6463_;
goto v___jp_6403_;
}
}
}
}
else
{
lean_object* v___x_6466_; lean_object* v___x_6467_; 
v___x_6466_ = lean_io_get_num_heartbeats();
v___x_6467_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(v___x_6430_, v___y_6433_, v___y_6443_, v_a_6334_, v_a_6335_, v_a_6336_, v_a_6337_);
if (lean_obj_tag(v___x_6467_) == 0)
{
lean_object* v_a_6468_; lean_object* v___x_6470_; uint8_t v_isShared_6471_; uint8_t v_isSharedCheck_6475_; 
v_a_6468_ = lean_ctor_get(v___x_6467_, 0);
v_isSharedCheck_6475_ = !lean_is_exclusive(v___x_6467_);
if (v_isSharedCheck_6475_ == 0)
{
v___x_6470_ = v___x_6467_;
v_isShared_6471_ = v_isSharedCheck_6475_;
goto v_resetjp_6469_;
}
else
{
lean_inc(v_a_6468_);
lean_dec(v___x_6467_);
v___x_6470_ = lean_box(0);
v_isShared_6471_ = v_isSharedCheck_6475_;
goto v_resetjp_6469_;
}
v_resetjp_6469_:
{
lean_object* v___x_6473_; 
if (v_isShared_6471_ == 0)
{
lean_ctor_set_tag(v___x_6470_, 1);
v___x_6473_ = v___x_6470_;
goto v_reusejp_6472_;
}
else
{
lean_object* v_reuseFailAlloc_6474_; 
v_reuseFailAlloc_6474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6474_, 0, v_a_6468_);
v___x_6473_ = v_reuseFailAlloc_6474_;
goto v_reusejp_6472_;
}
v_reusejp_6472_:
{
v___y_6380_ = v___x_6466_;
v___y_6381_ = v___y_6432_;
v___y_6382_ = v___y_6433_;
v___y_6383_ = v___y_6434_;
v___y_6384_ = v___y_6435_;
v___y_6385_ = v___y_6436_;
v___y_6386_ = v_a_6445_;
v___y_6387_ = v___y_6437_;
v___y_6388_ = v___y_6438_;
v___y_6389_ = v___y_6439_;
v___y_6390_ = v___y_6440_;
v___y_6391_ = v___y_6441_;
v___y_6392_ = v___y_6442_;
v___y_6393_ = v___y_6443_;
v_a_6394_ = v___x_6473_;
goto v___jp_6379_;
}
}
}
else
{
lean_object* v_a_6476_; lean_object* v___x_6478_; uint8_t v_isShared_6479_; uint8_t v_isSharedCheck_6483_; 
v_a_6476_ = lean_ctor_get(v___x_6467_, 0);
v_isSharedCheck_6483_ = !lean_is_exclusive(v___x_6467_);
if (v_isSharedCheck_6483_ == 0)
{
v___x_6478_ = v___x_6467_;
v_isShared_6479_ = v_isSharedCheck_6483_;
goto v_resetjp_6477_;
}
else
{
lean_inc(v_a_6476_);
lean_dec(v___x_6467_);
v___x_6478_ = lean_box(0);
v_isShared_6479_ = v_isSharedCheck_6483_;
goto v_resetjp_6477_;
}
v_resetjp_6477_:
{
lean_object* v___x_6481_; 
if (v_isShared_6479_ == 0)
{
lean_ctor_set_tag(v___x_6478_, 0);
v___x_6481_ = v___x_6478_;
goto v_reusejp_6480_;
}
else
{
lean_object* v_reuseFailAlloc_6482_; 
v_reuseFailAlloc_6482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6482_, 0, v_a_6476_);
v___x_6481_ = v_reuseFailAlloc_6482_;
goto v_reusejp_6480_;
}
v_reusejp_6480_:
{
v___y_6380_ = v___x_6466_;
v___y_6381_ = v___y_6432_;
v___y_6382_ = v___y_6433_;
v___y_6383_ = v___y_6434_;
v___y_6384_ = v___y_6435_;
v___y_6385_ = v___y_6436_;
v___y_6386_ = v_a_6445_;
v___y_6387_ = v___y_6437_;
v___y_6388_ = v___y_6438_;
v___y_6389_ = v___y_6439_;
v___y_6390_ = v___y_6440_;
v___y_6391_ = v___y_6441_;
v___y_6392_ = v___y_6442_;
v___y_6393_ = v___y_6443_;
v_a_6394_ = v___x_6481_;
goto v___jp_6379_;
}
}
}
}
}
v___jp_6484_:
{
lean_object* v___f_6486_; size_t v_sz_6487_; size_t v___x_6488_; lean_object* v_assignments_6489_; lean_object* v___x_6490_; lean_object* v___x_6491_; lean_object* v_funVals_6492_; lean_object* v_ctx_6493_; lean_object* v_state_6494_; lean_object* v___x_6495_; uint8_t v___x_6496_; lean_object* v___x_6497_; lean_object* v___x_6498_; lean_object* v_toCold_6499_; lean_object* v_options_6500_; uint8_t v_hasTrace_6501_; 
lean_inc_ref_n(v___y_6485_, 3);
v___f_6486_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_elimDeadBranches___lam__0___boxed), 9, 1);
lean_closure_set(v___f_6486_, 0, v___y_6485_);
v_sz_6487_ = lean_array_size(v___y_6485_);
v___x_6488_ = ((size_t)0ULL);
v_assignments_6489_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_UnreachableBranches_inferMain_spec__0(v_sz_6487_, v___x_6488_, v___y_6485_);
v___x_6490_ = lean_array_get_size(v___y_6485_);
v___x_6491_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_elimDeadBranches___closed__2));
v_funVals_6492_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg(v___y_6485_, v___x_6490_, v___x_6490_, v___x_6491_);
v_ctx_6493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_ctx_6493_, 0, v___y_6485_);
lean_ctor_set(v_ctx_6493_, 1, v___x_6430_);
v_state_6494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_state_6494_, 0, v_assignments_6489_);
lean_ctor_set(v_state_6494_, 1, v_funVals_6492_);
v___x_6495_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3));
v___x_6496_ = 1;
v___x_6497_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__4));
v___x_6498_ = lean_st_mk_ref(v_state_6494_);
v_toCold_6499_ = lean_ctor_get(v_a_6336_, 0);
v_options_6500_ = lean_ctor_get(v_toCold_6499_, 2);
v_hasTrace_6501_ = lean_ctor_get_uint8(v_options_6500_, sizeof(void*)*1);
if (v_hasTrace_6501_ == 0)
{
lean_object* v___x_6502_; 
lean_dec_ref(v___f_6486_);
v___x_6502_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(v___x_6430_, v_ctx_6493_, v___x_6498_, v_a_6334_, v_a_6335_, v_a_6336_, v_a_6337_);
lean_dec_ref_known(v_ctx_6493_, 2);
v___y_6340_ = v_sz_6487_;
v___y_6341_ = v___x_6490_;
v___y_6342_ = v___x_6488_;
v___y_6343_ = v___y_6485_;
v___y_6344_ = v___x_6498_;
v___y_6345_ = v___x_6502_;
goto v___jp_6339_;
}
else
{
lean_object* v_inheritedTraceOptions_6503_; lean_object* v___x_6504_; uint8_t v___x_6505_; 
v_inheritedTraceOptions_6503_ = lean_ctor_get(v_toCold_6499_, 11);
v___x_6504_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__7);
v___x_6505_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_6503_, v_options_6500_, v___x_6504_);
if (v___x_6505_ == 0)
{
lean_object* v___x_6506_; uint8_t v___x_6507_; 
v___x_6506_ = l_Lean_trace_profiler;
v___x_6507_ = l_Lean_Option_get___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__1(v_options_6500_, v___x_6506_);
if (v___x_6507_ == 0)
{
lean_object* v___x_6508_; 
lean_dec_ref(v___f_6486_);
v___x_6508_ = l_Lean_Compiler_LCNF_UnreachableBranches_inferMain(v___x_6430_, v_ctx_6493_, v___x_6498_, v_a_6334_, v_a_6335_, v_a_6336_, v_a_6337_);
lean_dec_ref_known(v_ctx_6493_, 2);
v___y_6340_ = v_sz_6487_;
v___y_6341_ = v___x_6490_;
v___y_6342_ = v___x_6488_;
v___y_6343_ = v___y_6485_;
v___y_6344_ = v___x_6498_;
v___y_6345_ = v___x_6508_;
goto v___jp_6339_;
}
else
{
v___y_6432_ = v___x_6495_;
v___y_6433_ = v_ctx_6493_;
v___y_6434_ = v___x_6490_;
v___y_6435_ = v___f_6486_;
v___y_6436_ = v_options_6500_;
v___y_6437_ = v_sz_6487_;
v___y_6438_ = v___x_6496_;
v___y_6439_ = v___x_6488_;
v___y_6440_ = v___x_6505_;
v___y_6441_ = v___x_6497_;
v___y_6442_ = v___y_6485_;
v___y_6443_ = v___x_6498_;
goto v___jp_6431_;
}
}
else
{
v___y_6432_ = v___x_6495_;
v___y_6433_ = v_ctx_6493_;
v___y_6434_ = v___x_6490_;
v___y_6435_ = v___f_6486_;
v___y_6436_ = v_options_6500_;
v___y_6437_ = v_sz_6487_;
v___y_6438_ = v___x_6496_;
v___y_6439_ = v___x_6488_;
v___y_6440_ = v___x_6505_;
v___y_6441_ = v___x_6497_;
v___y_6442_ = v___y_6485_;
v___y_6443_ = v___x_6498_;
goto v___jp_6431_;
}
}
}
v___jp_6510_:
{
lean_object* v___x_6513_; 
v___x_6513_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(v___x_6509_, v_decls_6333_, v___y_6511_, v___y_6512_);
lean_dec(v___y_6512_);
v___y_6485_ = v___x_6513_;
goto v___jp_6484_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_elimDeadBranches___boxed(lean_object* v_decls_6521_, lean_object* v_a_6522_, lean_object* v_a_6523_, lean_object* v_a_6524_, lean_object* v_a_6525_, lean_object* v_a_6526_){
_start:
{
lean_object* v_res_6527_; 
v_res_6527_ = l_Lean_Compiler_LCNF_Decl_elimDeadBranches(v_decls_6521_, v_a_6522_, v_a_6523_, v_a_6524_, v_a_6525_);
lean_dec(v_a_6525_);
lean_dec_ref(v_a_6524_);
lean_dec(v_a_6523_);
lean_dec_ref(v_a_6522_);
return v_res_6527_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2(lean_object* v___y_6528_, lean_object* v_n_6529_, lean_object* v_j_6530_, lean_object* v_a_6531_, lean_object* v_a_6532_){
_start:
{
lean_object* v___x_6533_; 
v___x_6533_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___redArg(v___y_6528_, v_n_6529_, v_j_6530_, v_a_6532_);
return v___x_6533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2___boxed(lean_object* v___y_6534_, lean_object* v_n_6535_, lean_object* v_j_6536_, lean_object* v_a_6537_, lean_object* v_a_6538_){
_start:
{
lean_object* v_res_6539_; 
v_res_6539_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__2(v___y_6534_, v_n_6535_, v_j_6536_, v_a_6537_, v_a_6538_);
lean_dec(v_n_6535_);
lean_dec_ref(v___y_6534_);
return v_res_6539_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3(lean_object* v___y_6540_, lean_object* v___x_6541_, lean_object* v_n_6542_, lean_object* v_j_6543_, lean_object* v_a_6544_, lean_object* v_a_6545_){
_start:
{
lean_object* v___x_6546_; 
v___x_6546_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___redArg(v___y_6540_, v___x_6541_, v_n_6542_, v_j_6543_, v_a_6545_);
return v___x_6546_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3___boxed(lean_object* v___y_6547_, lean_object* v___x_6548_, lean_object* v_n_6549_, lean_object* v_j_6550_, lean_object* v_a_6551_, lean_object* v_a_6552_){
_start:
{
lean_object* v_res_6553_; 
v_res_6553_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__3(v___y_6547_, v___x_6548_, v_n_6549_, v_j_6550_, v_a_6551_, v_a_6552_);
lean_dec(v_n_6549_);
lean_dec_ref(v___x_6548_);
lean_dec_ref(v___y_6547_);
return v_res_6553_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4(lean_object* v___x_6554_, lean_object* v_as_6555_, size_t v_sz_6556_, size_t v_i_6557_, lean_object* v_bs_6558_, lean_object* v___y_6559_, lean_object* v___y_6560_, lean_object* v___y_6561_, lean_object* v___y_6562_){
_start:
{
lean_object* v___x_6564_; 
v___x_6564_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___redArg(v___x_6554_, v_sz_6556_, v_i_6557_, v_bs_6558_, v___y_6559_, v___y_6560_, v___y_6561_, v___y_6562_);
return v___x_6564_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4___boxed(lean_object* v___x_6565_, lean_object* v_as_6566_, lean_object* v_sz_6567_, lean_object* v_i_6568_, lean_object* v_bs_6569_, lean_object* v___y_6570_, lean_object* v___y_6571_, lean_object* v___y_6572_, lean_object* v___y_6573_, lean_object* v___y_6574_){
_start:
{
size_t v_sz_boxed_6575_; size_t v_i_boxed_6576_; lean_object* v_res_6577_; 
v_sz_boxed_6575_ = lean_unbox_usize(v_sz_6567_);
lean_dec(v_sz_6567_);
v_i_boxed_6576_ = lean_unbox_usize(v_i_6568_);
lean_dec(v_i_6568_);
v_res_6577_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__4(v___x_6565_, v_as_6566_, v_sz_boxed_6575_, v_i_boxed_6576_, v_bs_6569_, v___y_6570_, v___y_6571_, v___y_6572_, v___y_6573_);
lean_dec(v___y_6573_);
lean_dec_ref(v___y_6572_);
lean_dec(v___y_6571_);
lean_dec_ref(v___y_6570_);
lean_dec_ref(v_as_6566_);
lean_dec_ref(v___x_6565_);
return v_res_6577_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5(lean_object* v_n_6578_, lean_object* v_as_6579_, lean_object* v_lo_6580_, lean_object* v_hi_6581_, lean_object* v_w_6582_, lean_object* v_hlo_6583_, lean_object* v_hhi_6584_){
_start:
{
lean_object* v___x_6585_; 
v___x_6585_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___redArg(v_n_6578_, v_as_6579_, v_lo_6580_, v_hi_6581_);
return v___x_6585_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5___boxed(lean_object* v_n_6586_, lean_object* v_as_6587_, lean_object* v_lo_6588_, lean_object* v_hi_6589_, lean_object* v_w_6590_, lean_object* v_hlo_6591_, lean_object* v_hhi_6592_){
_start:
{
lean_object* v_res_6593_; 
v_res_6593_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5(v_n_6586_, v_as_6587_, v_lo_6588_, v_hi_6589_, v_w_6590_, v_hlo_6591_, v_hhi_6592_);
lean_dec(v_hi_6589_);
lean_dec(v_n_6586_);
return v_res_6593_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5(lean_object* v_n_6594_, lean_object* v_lo_6595_, lean_object* v_hi_6596_, lean_object* v_hhi_6597_, lean_object* v_pivot_6598_, lean_object* v_as_6599_, lean_object* v_i_6600_, lean_object* v_k_6601_, lean_object* v_ilo_6602_, lean_object* v_ik_6603_, lean_object* v_w_6604_){
_start:
{
lean_object* v___x_6605_; 
v___x_6605_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___redArg(v_hi_6596_, v_pivot_6598_, v_as_6599_, v_i_6600_, v_k_6601_);
return v___x_6605_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5___boxed(lean_object* v_n_6606_, lean_object* v_lo_6607_, lean_object* v_hi_6608_, lean_object* v_hhi_6609_, lean_object* v_pivot_6610_, lean_object* v_as_6611_, lean_object* v_i_6612_, lean_object* v_k_6613_, lean_object* v_ilo_6614_, lean_object* v_ik_6615_, lean_object* v_w_6616_){
_start:
{
lean_object* v_res_6617_; 
v_res_6617_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Compiler_LCNF_Decl_elimDeadBranches_spec__5_spec__5(v_n_6606_, v_lo_6607_, v_hi_6608_, v_hhi_6609_, v_pivot_6610_, v_as_6611_, v_i_6612_, v_k_6613_, v_ilo_6614_, v_ik_6615_, v_w_6616_);
lean_dec(v_hi_6608_);
lean_dec(v_lo_6607_);
lean_dec(v_n_6606_);
return v_res_6617_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6677_; lean_object* v___x_6678_; lean_object* v___x_6679_; 
v___x_6677_ = lean_unsigned_to_nat(3955956072u);
v___x_6678_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_));
v___x_6679_ = l_Lean_Name_num___override(v___x_6678_, v___x_6677_);
return v___x_6679_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6681_; lean_object* v___x_6682_; lean_object* v___x_6683_; 
v___x_6681_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_));
v___x_6682_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6683_ = l_Lean_Name_str___override(v___x_6682_, v___x_6681_);
return v___x_6683_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6685_; lean_object* v___x_6686_; lean_object* v___x_6687_; 
v___x_6685_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_));
v___x_6686_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6687_ = l_Lean_Name_str___override(v___x_6686_, v___x_6685_);
return v___x_6687_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6688_; lean_object* v___x_6689_; lean_object* v___x_6690_; 
v___x_6688_ = lean_unsigned_to_nat(2u);
v___x_6689_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6690_ = l_Lean_Name_num___override(v___x_6689_, v___x_6688_);
return v___x_6690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6692_; uint8_t v___x_6693_; lean_object* v___x_6694_; lean_object* v___x_6695_; 
v___x_6692_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_UnreachableBranches_inferStep_spec__3___redArg___closed__3));
v___x_6693_ = 1;
v___x_6694_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_);
v___x_6695_ = l_Lean_registerTraceClass(v___x_6692_, v___x_6693_, v___x_6694_);
return v___x_6695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2____boxed(lean_object* v_a_6696_){
_start:
{
lean_object* v_res_6697_; 
v_res_6697_ = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_();
return v_res_6697_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ElimDeadBranches(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue_default = _init_l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue_default);
l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue = _init_l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue();
lean_mark_persistent(l_Lean_Compiler_LCNF_UnreachableBranches_instInhabitedValue);
l_Lean_Compiler_LCNF_UnreachableBranches_Value_maxValueDepth = _init_l_Lean_Compiler_LCNF_UnreachableBranches_Value_maxValueDepth();
lean_mark_persistent(l_Lean_Compiler_LCNF_UnreachableBranches_Value_maxValueDepth);
res = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_UnreachableBranches_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_368603888____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ElimDeadBranches_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ElimDeadBranches_3955956072____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ElimDeadBranches(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ElimDeadBranches(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ElimDeadBranches(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ElimDeadBranches(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ElimDeadBranches(builtin);
}
#ifdef __cplusplus
}
#endif
