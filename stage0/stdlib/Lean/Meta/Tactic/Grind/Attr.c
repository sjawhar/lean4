// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Attr
// Imports: public import Lean.Meta.Tactic.Grind.Injective public import Lean.Meta.Tactic.Grind.Cases public import Lean.Meta.Tactic.Grind.ExtAttr public import Lean.Meta.Tactic.Simp.Attr public import Lean.Meta.Tactic.Grind.Homo import Lean.Meta.Sym.Simp.Attr import Lean.ExtraModUses
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
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_instInhabitedExtensionState_default;
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Theorems_contains___redArg(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Theorems_eraseDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_ExtTheorems_eraseDecl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_ensureNotBuiltinCases(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_CasesTypes_eraseDecl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkExtension(lean_object*);
lean_object* l_Lean_Meta_mkSimpExt(lean_object*);
lean_object* l_Lean_Meta_addDeclToUnfold(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGlobalSymbolPriorities___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_Extension_addEMatchAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_validateCasesAttr(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isInductivePredicate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Extension_addEMatchAttrAndSuggest(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_validateExtAttr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addSymbolPriorityAttr(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Extension_addInjectiveAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addSimpTheorem(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addHomoAttr(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addHomoPredAttr(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_usageRecordingEnabled();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* lean_name_append_after(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_CasesTypes_isSplit(lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "normExt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(1, 117, 24, 11, 244, 218, 170, 88)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normExt;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ematch_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ematch_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_cases_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_cases_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_intro_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_intro_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_infer_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_infer_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ext_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ext_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_symbol_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_symbol_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_inj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_inj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_funCC_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_funCC_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_norm_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_norm_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_unfold_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_unfold_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homo_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homo_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homoPred_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homoPred_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindMod"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 252, 83, 80, 136, 168, 19, 119)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "unexpected `grind` theorem kind: `"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_getAttrKindCore___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__5;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_getAttrKindCore___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__7;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "grindEq"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__9_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__8_value),LEAN_SCALAR_PTR_LITERAL(179, 34, 219, 24, 240, 38, 65, 204)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__9_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindDef"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__11_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__10_value),LEAN_SCALAR_PTR_LITERAL(66, 218, 12, 28, 39, 29, 4, 77)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__11_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindFwd"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__13_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__12_value),LEAN_SCALAR_PTR_LITERAL(121, 161, 177, 116, 112, 162, 92, 47)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__13_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindBwd"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__14_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__15_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__14_value),LEAN_SCALAR_PTR_LITERAL(114, 163, 57, 243, 160, 41, 114, 23)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__15_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindEqRhs"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__16_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__17_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__16_value),LEAN_SCALAR_PTR_LITERAL(222, 187, 148, 221, 105, 213, 199, 68)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__17_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "grindEqBoth"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__18_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__19_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__18_value),LEAN_SCALAR_PTR_LITERAL(79, 230, 133, 190, 186, 228, 109, 128)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__19_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindEqBwd"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__20 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__20_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__21_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__20_value),LEAN_SCALAR_PTR_LITERAL(250, 57, 23, 180, 238, 116, 90, 53)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__21 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__21_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "grindLR"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__22 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__22_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__23_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__22_value),LEAN_SCALAR_PTR_LITERAL(152, 111, 188, 78, 132, 212, 97, 164)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__23 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__23_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "grindRL"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__24 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__24_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__25_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__24_value),LEAN_SCALAR_PTR_LITERAL(84, 112, 237, 169, 105, 148, 42, 205)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__25 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__25_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindUsr"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__26 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__26_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__27_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__26_value),LEAN_SCALAR_PTR_LITERAL(204, 58, 160, 148, 192, 167, 114, 18)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__27 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__27_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindGen"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__28 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__28_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__29_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__28_value),LEAN_SCALAR_PTR_LITERAL(186, 203, 120, 147, 97, 215, 208, 134)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__29 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__29_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindCases"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__30 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__30_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__31_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__30_value),LEAN_SCALAR_PTR_LITERAL(85, 142, 28, 230, 49, 50, 229, 162)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__31 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__31_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "grindCasesEager"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__32 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__32_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__33_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__32_value),LEAN_SCALAR_PTR_LITERAL(75, 210, 92, 40, 190, 183, 142, 70)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__33 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__33_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindIntro"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__34 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__34_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__35_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__34_value),LEAN_SCALAR_PTR_LITERAL(142, 126, 114, 89, 237, 253, 56, 138)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__35 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__35_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindExt"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__36 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__36_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__37_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__36_value),LEAN_SCALAR_PTR_LITERAL(147, 193, 153, 166, 243, 149, 163, 253)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__37 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__37_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindInj"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__38 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__38_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__39_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__38_value),LEAN_SCALAR_PTR_LITERAL(223, 225, 41, 9, 21, 5, 145, 193)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__39 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__39_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindFunCC"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__40 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__40_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__41_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__40_value),LEAN_SCALAR_PTR_LITERAL(217, 20, 186, 134, 249, 79, 78, 43)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__41 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__41_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "grindNorm"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__42 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__42_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__43_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__42_value),LEAN_SCALAR_PTR_LITERAL(166, 126, 146, 239, 104, 253, 29, 148)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__43 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__43_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "grindUnfold"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__44 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__44_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__45_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__44_value),LEAN_SCALAR_PTR_LITERAL(214, 181, 37, 92, 122, 232, 164, 219)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__45 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__45_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindHom"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__46 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__46_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__47_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__46_value),LEAN_SCALAR_PTR_LITERAL(14, 226, 234, 13, 148, 139, 225, 180)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__47 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__47_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "grindHomFallback"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__48 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__48_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__49_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__49_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__49_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__49_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__49_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__49_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__48_value),LEAN_SCALAR_PTR_LITERAL(140, 210, 151, 50, 71, 98, 251, 189)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__49 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__49_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "grindHomPred"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__50 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__50_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__51_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__51_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__51_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__51_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__50_value),LEAN_SCALAR_PTR_LITERAL(1, 153, 163, 64, 153, 27, 218, 140)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__51 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__51_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindSym"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__52 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__52_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__53_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__53_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__53_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__53_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__53_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__52_value),LEAN_SCALAR_PTR_LITERAL(104, 204, 11, 169, 55, 109, 254, 23)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__53 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__53_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "priority expected"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__54 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__54_value;
static lean_once_cell_t l_Lean_Meta_Grind_getAttrKindCore___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__55;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__56 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__56_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simpPost"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__57 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__57_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__56_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__58_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__57_value),LEAN_SCALAR_PTR_LITERAL(38, 218, 35, 149, 208, 200, 230, 161)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__58 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__58_value;
static const lean_string_object l_Lean_Meta_Grind_getAttrKindCore___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "simpPre"};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__59 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__59_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__60_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__60_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__60_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__56_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__60_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__59_value),LEAN_SCALAR_PTR_LITERAL(197, 59, 48, 6, 36, 81, 149, 152)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__60 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__60_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__61 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__61_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__62 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__62_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__63 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__63_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__64 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__64_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__65 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__65_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__66 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__66_value;
static const lean_ctor_object l_Lean_Meta_Grind_getAttrKindCore___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__66_value)}};
static const lean_object* l_Lean_Meta_Grind_getAttrKindCore___closed__67 = (const lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__67_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindFromOpt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindFromOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "the modifier `usr` is only relevant in parameters for `grind only`"};
static const lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__56_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1_value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__56_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__56_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 115, .m_capacity = 115, .m_length = 114, .m_data = "\?]` is a helper attribute for displaying inferred patterns, if you want to remove the attribute, consider using `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "]` instead"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 8}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "cannot mark declaration to be unfolded by `grind`"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "invalid `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " intro]`, `"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "` is not an inductive predicate"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__8_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "symbol priorities must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "normalizer must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "declaration to unfold must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "homomorphism rules must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__16_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__17;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "homomorphism predicates must be set using the default `[grind]` attribute"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__18_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__19;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10_spec__14_spec__17___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10_spec__14___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__3_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__8_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__16_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__18_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "When applied to an equational theorem, `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " =]`, `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " =_]`, or `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 72, .m_data = " _=_]`will mark the theorem for use in heuristic instantiations by the `"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 136, .m_capacity = 136, .m_length = 135, .m_data = "` tactic,\n      using respectively the left-hand side, the right-hand side, or both sides of the theorem.When applied to a function, `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 112, .m_capacity = 112, .m_length = 111, .m_data = " =]` automatically annotates the equational theorems associated with that function.When applied to a theorem `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 183, .m_capacity = 183, .m_length = 180, .m_data = " ←]` will instantiate the theorem whenever it encounters the conclusion of the theorem\n      (that is, it will use the theorem for backwards reasoning).When applied to a theorem `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 190, .m_capacity = 190, .m_length = 187, .m_data = " →]` will instantiate the theorem whenever it encounters sufficiently many of the propositional hypotheses\n      (that is, it will use the theorem for forwards reasoning).The attribute `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "]` by itself will effectively try `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 68, .m_data = " ←]` (if the conclusion is sufficient for instantiation) and then `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 165, .m_capacity = 165, .m_length = 162, .m_data = " →]`.The `grind` tactic utilizes annotated theorems to add instances of matching patterns into the local context during proof search.For example, if a theorem `@["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 179, .m_capacity = 179, .m_length = 178, .m_data = " =] theorem foo_idempotent : foo (foo x) = foo x` is annotated,`grind` will add an instance of this theorem to the local context whenever it encounters the pattern `foo (foo x)`."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "The `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "]` attribute is used to annotate declarations."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "\?]` attribute is identical to the `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "]` attribute, but displays inferred pattern information."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__15_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "!]` attribute is used to annotate declarations, but selecting minimal indexable subterms."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "!\?]` attribute is identical to the `["};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__17_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "!]` attribute, but displays inferred pattern information."};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__18_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__19_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "!"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__20_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "!\?"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__21_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10_spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10_spec__14_spec__17(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_extensionMapRef;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getExtension_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getExtension_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr___auto__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_Meta_Grind_getAttrKindCore___closed__36_value),LEAN_SCALAR_PTR_LITERAL(160, 1, 171, 211, 177, 132, 129, 49)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_grindExt;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lia"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(12, 161, 226, 116, 111, 153, 146, 212)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "liaExt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(160, 56, 216, 97, 9, 85, 52, 211)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__2_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(148, 224, 62, 90, 13, 174, 224, 246)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_liaExt;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__4_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_));
v___x_12_ = l_Lean_Meta_mkSimpExt(v___x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2____boxed(lean_object* v_a_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_();
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorIdx___impl(lean_object* v_x_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_obj_tag_nat(v_x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorIdx___impl___boxed(lean_object* v_x_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_Grind_AttrKind_ctorIdx___impl(v_x_17_);
lean_dec(v_x_17_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(lean_object* v_t_19_, lean_object* v_k_20_){
_start:
{
switch(lean_obj_tag(v_t_19_))
{
case 0:
{
lean_object* v_k_21_; lean_object* v___x_22_; 
v_k_21_ = lean_ctor_get(v_t_19_, 0);
lean_inc(v_k_21_);
lean_dec_ref_known(v_t_19_, 1);
v___x_22_ = lean_apply_1(v_k_20_, v_k_21_);
return v___x_22_;
}
case 1:
{
uint8_t v_eager_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v_eager_23_ = lean_ctor_get_uint8(v_t_19_, 0);
lean_dec_ref_known(v_t_19_, 0);
v___x_24_ = lean_box(v_eager_23_);
v___x_25_ = lean_apply_1(v_k_20_, v___x_24_);
return v___x_25_;
}
case 5:
{
lean_object* v_prio_26_; lean_object* v___x_27_; 
v_prio_26_ = lean_ctor_get(v_t_19_, 0);
lean_inc(v_prio_26_);
lean_dec_ref_known(v_t_19_, 1);
v___x_27_ = lean_apply_1(v_k_20_, v_prio_26_);
return v___x_27_;
}
case 8:
{
uint8_t v_post_28_; uint8_t v_inv_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v_post_28_ = lean_ctor_get_uint8(v_t_19_, 0);
v_inv_29_ = lean_ctor_get_uint8(v_t_19_, 1);
lean_dec_ref_known(v_t_19_, 0);
v___x_30_ = lean_box(v_post_28_);
v___x_31_ = lean_box(v_inv_29_);
v___x_32_ = lean_apply_2(v_k_20_, v___x_30_, v___x_31_);
return v___x_32_;
}
case 10:
{
uint8_t v_fallback_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v_fallback_33_ = lean_ctor_get_uint8(v_t_19_, 0);
lean_dec_ref_known(v_t_19_, 0);
v___x_34_ = lean_box(v_fallback_33_);
v___x_35_ = lean_apply_1(v_k_20_, v___x_34_);
return v___x_35_;
}
default: 
{
lean_dec(v_t_19_);
return v_k_20_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim(lean_object* v_motive_36_, lean_object* v_ctorIdx_37_, lean_object* v_t_38_, lean_object* v_h_39_, lean_object* v_k_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_38_, v_k_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ctorElim___boxed(lean_object* v_motive_42_, lean_object* v_ctorIdx_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_k_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_Meta_Grind_AttrKind_ctorElim(v_motive_42_, v_ctorIdx_43_, v_t_44_, v_h_45_, v_k_46_);
lean_dec(v_ctorIdx_43_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ematch_elim___redArg(lean_object* v_t_48_, lean_object* v_ematch_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_48_, v_ematch_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ematch_elim(lean_object* v_motive_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_ematch_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_52_, v_ematch_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_cases_elim___redArg(lean_object* v_t_56_, lean_object* v_cases_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_56_, v_cases_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_cases_elim(lean_object* v_motive_59_, lean_object* v_t_60_, lean_object* v_h_61_, lean_object* v_cases_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_60_, v_cases_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_intro_elim___redArg(lean_object* v_t_64_, lean_object* v_intro_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_64_, v_intro_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_intro_elim(lean_object* v_motive_67_, lean_object* v_t_68_, lean_object* v_h_69_, lean_object* v_intro_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_68_, v_intro_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_infer_elim___redArg(lean_object* v_t_72_, lean_object* v_infer_73_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_72_, v_infer_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_infer_elim(lean_object* v_motive_75_, lean_object* v_t_76_, lean_object* v_h_77_, lean_object* v_infer_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_76_, v_infer_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ext_elim___redArg(lean_object* v_t_80_, lean_object* v_ext_81_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_80_, v_ext_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_ext_elim(lean_object* v_motive_83_, lean_object* v_t_84_, lean_object* v_h_85_, lean_object* v_ext_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_84_, v_ext_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_symbol_elim___redArg(lean_object* v_t_88_, lean_object* v_symbol_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_88_, v_symbol_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_symbol_elim(lean_object* v_motive_91_, lean_object* v_t_92_, lean_object* v_h_93_, lean_object* v_symbol_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_92_, v_symbol_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_inj_elim___redArg(lean_object* v_t_96_, lean_object* v_inj_97_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_96_, v_inj_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_inj_elim(lean_object* v_motive_99_, lean_object* v_t_100_, lean_object* v_h_101_, lean_object* v_inj_102_){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_100_, v_inj_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_funCC_elim___redArg(lean_object* v_t_104_, lean_object* v_funCC_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_104_, v_funCC_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_funCC_elim(lean_object* v_motive_107_, lean_object* v_t_108_, lean_object* v_h_109_, lean_object* v_funCC_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_108_, v_funCC_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_norm_elim___redArg(lean_object* v_t_112_, lean_object* v_norm_113_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_112_, v_norm_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_norm_elim(lean_object* v_motive_115_, lean_object* v_t_116_, lean_object* v_h_117_, lean_object* v_norm_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_116_, v_norm_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_unfold_elim___redArg(lean_object* v_t_120_, lean_object* v_unfold_121_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_120_, v_unfold_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_unfold_elim(lean_object* v_motive_123_, lean_object* v_t_124_, lean_object* v_h_125_, lean_object* v_unfold_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_124_, v_unfold_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homo_elim___redArg(lean_object* v_t_128_, lean_object* v_homo_129_){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_128_, v_homo_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homo_elim(lean_object* v_motive_131_, lean_object* v_t_132_, lean_object* v_h_133_, lean_object* v_homo_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_132_, v_homo_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homoPred_elim___redArg(lean_object* v_t_136_, lean_object* v_homoPred_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_136_, v_homoPred_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AttrKind_homoPred_elim(lean_object* v_motive_139_, lean_object* v_t_140_, lean_object* v_h_141_, lean_object* v_homoPred_142_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = l_Lean_Meta_Grind_AttrKind_ctorElim___redArg(v_t_140_, v_homoPred_142_);
return v___x_143_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_144_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0);
v___x_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
return v___x_146_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_147_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_148_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1);
v___x_149_ = lean_unsigned_to_nat(0u);
v___x_150_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
lean_ctor_set(v___x_150_, 1, v___x_149_);
lean_ctor_set(v___x_150_, 2, v___x_149_);
lean_ctor_set(v___x_150_, 3, v___x_149_);
lean_ctor_set(v___x_150_, 4, v___x_148_);
lean_ctor_set(v___x_150_, 5, v___x_148_);
lean_ctor_set(v___x_150_, 6, v___x_148_);
lean_ctor_set(v___x_150_, 7, v___x_148_);
lean_ctor_set(v___x_150_, 8, v___x_148_);
lean_ctor_set(v___x_150_, 9, v___x_148_);
lean_ctor_set(v___x_150_, 10, v___x_148_);
lean_ctor_set(v___x_150_, 11, v___x_147_);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v___x_151_ = lean_unsigned_to_nat(32u);
v___x_152_ = lean_mk_empty_array_with_capacity(v___x_151_);
v___x_153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_154_ = ((size_t)5ULL);
v___x_155_ = lean_unsigned_to_nat(0u);
v___x_156_ = lean_unsigned_to_nat(32u);
v___x_157_ = lean_mk_empty_array_with_capacity(v___x_156_);
v___x_158_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__3);
v___x_159_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_159_, 0, v___x_158_);
lean_ctor_set(v___x_159_, 1, v___x_157_);
lean_ctor_set(v___x_159_, 2, v___x_155_);
lean_ctor_set(v___x_159_, 3, v___x_155_);
lean_ctor_set_usize(v___x_159_, 4, v___x_154_);
return v___x_159_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_160_ = lean_box(1);
v___x_161_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4);
v___x_162_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__1);
v___x_163_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
lean_ctor_set(v___x_163_, 1, v___x_161_);
lean_ctor_set(v___x_163_, 2, v___x_160_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(lean_object* v_msgData_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
lean_object* v___x_168_; lean_object* v_toCold_169_; lean_object* v_env_170_; lean_object* v_options_171_; uint8_t v___x_172_; lean_object* v_env_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_168_ = lean_st_ref_get(v___y_166_);
v_toCold_169_ = lean_ctor_get(v___y_165_, 0);
v_env_170_ = lean_ctor_get(v___x_168_, 0);
lean_inc_ref(v_env_170_);
lean_dec(v___x_168_);
v_options_171_ = lean_ctor_get(v_toCold_169_, 2);
v___x_172_ = 0;
v_env_173_ = l_Lean_Environment_setRecordingDeps(v_env_170_, v___x_172_);
v___x_174_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__2);
v___x_175_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_171_);
v___x_176_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_176_, 0, v_env_173_);
lean_ctor_set(v___x_176_, 1, v___x_174_);
lean_ctor_set(v___x_176_, 2, v___x_175_);
lean_ctor_set(v___x_176_, 3, v_options_171_);
v___x_177_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
lean_ctor_set(v___x_177_, 1, v_msgData_164_);
v___x_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___boxed(lean_object* v_msgData_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(v_msgData_179_, v___y_180_, v___y_181_);
lean_dec(v___y_181_);
lean_dec_ref(v___y_180_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(lean_object* v_msg_184_, lean_object* v___y_185_, lean_object* v___y_186_){
_start:
{
lean_object* v_ref_188_; lean_object* v___x_189_; lean_object* v_a_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_198_; 
v_ref_188_ = lean_ctor_get(v___y_185_, 2);
v___x_189_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(v_msg_184_, v___y_185_, v___y_186_);
v_a_190_ = lean_ctor_get(v___x_189_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_198_ == 0)
{
v___x_192_ = v___x_189_;
v_isShared_193_ = v_isSharedCheck_198_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_a_190_);
lean_dec(v___x_189_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_198_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_194_; lean_object* v___x_196_; 
lean_inc(v_ref_188_);
v___x_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_194_, 0, v_ref_188_);
lean_ctor_set(v___x_194_, 1, v_a_190_);
if (v_isShared_193_ == 0)
{
lean_ctor_set_tag(v___x_192_, 1);
lean_ctor_set(v___x_192_, 0, v___x_194_);
v___x_196_ = v___x_192_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_194_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg___boxed(lean_object* v_msg_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v_msg_199_, v___y_200_, v___y_201_);
lean_dec(v___y_201_);
lean_dec_ref(v___y_200_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(lean_object* v_ref_204_, lean_object* v_msg_205_, lean_object* v___y_206_, lean_object* v___y_207_){
_start:
{
lean_object* v_toCold_209_; lean_object* v_currRecDepth_210_; lean_object* v_ref_211_; uint16_t v_optionFlags_212_; uint8_t v_suppressElabErrors_213_; uint8_t v_isRecordingDeps_214_; lean_object* v_ref_215_; lean_object* v___x_216_; lean_object* v___x_217_; 
v_toCold_209_ = lean_ctor_get(v___y_206_, 0);
v_currRecDepth_210_ = lean_ctor_get(v___y_206_, 1);
v_ref_211_ = lean_ctor_get(v___y_206_, 2);
v_optionFlags_212_ = lean_ctor_get_uint16(v___y_206_, sizeof(void*)*3);
v_suppressElabErrors_213_ = lean_ctor_get_uint8(v___y_206_, sizeof(void*)*3 + 2);
v_isRecordingDeps_214_ = lean_ctor_get_uint8(v___y_206_, sizeof(void*)*3 + 3);
v_ref_215_ = l_Lean_replaceRef(v_ref_204_, v_ref_211_);
lean_inc(v_currRecDepth_210_);
lean_inc_ref(v_toCold_209_);
v___x_216_ = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(v___x_216_, 0, v_toCold_209_);
lean_ctor_set(v___x_216_, 1, v_currRecDepth_210_);
lean_ctor_set(v___x_216_, 2, v_ref_215_);
lean_ctor_set_uint16(v___x_216_, sizeof(void*)*3, v_optionFlags_212_);
lean_ctor_set_uint8(v___x_216_, sizeof(void*)*3 + 2, v_suppressElabErrors_213_);
lean_ctor_set_uint8(v___x_216_, sizeof(void*)*3 + 3, v_isRecordingDeps_214_);
v___x_217_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v_msg_205_, v___x_216_, v___y_207_);
lean_dec_ref_known(v___x_216_, 3);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg___boxed(lean_object* v_ref_218_, lean_object* v_msg_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(v_ref_218_, v_msg_219_, v___y_220_, v___y_221_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
lean_dec(v_ref_218_);
return v_res_223_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5(void){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__4));
v___x_234_ = l_Lean_stringToMessageData(v___x_233_);
return v___x_234_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_236_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__6));
v___x_237_ = l_Lean_stringToMessageData(v___x_236_);
return v___x_237_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_getAttrKindCore___closed__55(void){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_377_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__54));
v___x_378_ = l_Lean_stringToMessageData(v___x_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindCore(lean_object* v_stx_406_, lean_object* v_a_407_, lean_object* v_a_408_){
_start:
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__3));
lean_inc(v_stx_406_);
v___x_411_ = l_Lean_Syntax_isOfKind(v_stx_406_, v___x_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_412_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_413_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_414_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_414_, 0, v___x_412_);
lean_ctor_set(v___x_414_, 1, v___x_413_);
v___x_415_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_416_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_416_, 0, v___x_414_);
lean_ctor_set(v___x_416_, 1, v___x_415_);
v___x_417_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_416_, v_a_407_, v_a_408_);
return v___x_417_;
}
else
{
lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_418_ = lean_unsigned_to_nat(0u);
v___x_419_ = l_Lean_Syntax_getArg(v_stx_406_, v___x_418_);
v___x_420_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__9));
lean_inc(v___x_419_);
v___x_421_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_420_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_422_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__11));
lean_inc(v___x_419_);
v___x_423_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_422_);
if (v___x_423_ == 0)
{
lean_object* v___x_424_; uint8_t v___x_425_; 
v___x_424_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__13));
lean_inc(v___x_419_);
v___x_425_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_424_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_426_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__15));
lean_inc(v___x_419_);
v___x_427_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; uint8_t v___x_429_; 
v___x_428_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__17));
lean_inc(v___x_419_);
v___x_429_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_428_);
if (v___x_429_ == 0)
{
lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_430_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__19));
lean_inc(v___x_419_);
v___x_431_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_430_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; uint8_t v___x_433_; 
v___x_432_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__21));
lean_inc(v___x_419_);
v___x_433_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_432_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; uint8_t v___x_435_; 
v___x_434_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__23));
lean_inc(v___x_419_);
v___x_435_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_434_);
if (v___x_435_ == 0)
{
lean_object* v___x_436_; uint8_t v___x_437_; 
v___x_436_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__25));
lean_inc(v___x_419_);
v___x_437_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_436_);
if (v___x_437_ == 0)
{
lean_object* v___x_438_; uint8_t v___x_439_; 
v___x_438_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__27));
lean_inc(v___x_419_);
v___x_439_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_438_);
if (v___x_439_ == 0)
{
lean_object* v___x_440_; uint8_t v___x_441_; 
v___x_440_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
lean_inc(v___x_419_);
v___x_441_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_440_);
if (v___x_441_ == 0)
{
lean_object* v___x_442_; uint8_t v___x_443_; 
v___x_442_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__31));
lean_inc(v___x_419_);
v___x_443_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_442_);
if (v___x_443_ == 0)
{
lean_object* v___x_444_; uint8_t v___x_445_; 
v___x_444_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__33));
lean_inc(v___x_419_);
v___x_445_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_444_);
if (v___x_445_ == 0)
{
lean_object* v___x_446_; uint8_t v___x_447_; 
v___x_446_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__35));
lean_inc(v___x_419_);
v___x_447_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_446_);
if (v___x_447_ == 0)
{
lean_object* v___x_448_; uint8_t v___x_449_; 
v___x_448_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__37));
lean_inc(v___x_419_);
v___x_449_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_448_);
if (v___x_449_ == 0)
{
lean_object* v___x_450_; uint8_t v___x_451_; 
v___x_450_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__39));
lean_inc(v___x_419_);
v___x_451_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_450_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; uint8_t v___x_453_; 
v___x_452_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__41));
lean_inc(v___x_419_);
v___x_453_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_452_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; uint8_t v___x_455_; 
v___x_454_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__43));
lean_inc(v___x_419_);
v___x_455_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_454_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_456_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__45));
lean_inc(v___x_419_);
v___x_457_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_456_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; uint8_t v___x_459_; 
v___x_458_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__47));
lean_inc(v___x_419_);
v___x_459_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_458_);
if (v___x_459_ == 0)
{
lean_object* v___x_460_; uint8_t v___x_461_; 
v___x_460_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__49));
lean_inc(v___x_419_);
v___x_461_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; uint8_t v___x_463_; 
v___x_462_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__51));
lean_inc(v___x_419_);
v___x_463_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_462_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; uint8_t v___x_465_; 
v___x_464_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__53));
lean_inc(v___x_419_);
v___x_465_ = l_Lean_Syntax_isOfKind(v___x_419_, v___x_464_);
if (v___x_465_ == 0)
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
lean_dec(v___x_419_);
v___x_466_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_467_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_468_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_468_, 0, v___x_466_);
lean_ctor_set(v___x_468_, 1, v___x_467_);
v___x_469_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_470_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_470_, 0, v___x_468_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
v___x_471_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_470_, v_a_407_, v_a_408_);
return v___x_471_;
}
else
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
lean_dec(v_stx_406_);
v___x_472_ = lean_unsigned_to_nat(1u);
v___x_473_ = l_Lean_Syntax_getArg(v___x_419_, v___x_472_);
lean_dec(v___x_419_);
v___x_474_ = l_Lean_Syntax_isNatLit_x3f(v___x_473_);
if (lean_obj_tag(v___x_474_) == 1)
{
lean_object* v_val_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_483_; 
lean_dec(v___x_473_);
v_val_475_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_483_ == 0)
{
v___x_477_ = v___x_474_;
v_isShared_478_ = v_isSharedCheck_483_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_val_475_);
lean_dec(v___x_474_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_483_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_480_; 
if (v_isShared_478_ == 0)
{
lean_ctor_set_tag(v___x_477_, 5);
v___x_480_ = v___x_477_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_val_475_);
v___x_480_ = v_reuseFailAlloc_482_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
lean_object* v___x_481_; 
v___x_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_481_, 0, v___x_480_);
return v___x_481_;
}
}
}
else
{
lean_object* v___x_484_; lean_object* v___x_485_; 
lean_dec(v___x_474_);
v___x_484_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__55, &l_Lean_Meta_Grind_getAttrKindCore___closed__55_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__55);
v___x_485_ = l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(v___x_473_, v___x_484_, v_a_407_, v_a_408_);
lean_dec(v___x_473_);
return v___x_485_;
}
}
}
else
{
lean_object* v___x_486_; lean_object* v___x_487_; 
lean_dec(v___x_419_);
lean_dec(v_stx_406_);
v___x_486_ = lean_box(11);
v___x_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
return v___x_487_;
}
}
else
{
lean_object* v___x_488_; lean_object* v___x_489_; 
lean_dec(v___x_419_);
lean_dec(v_stx_406_);
v___x_488_ = lean_alloc_ctor(10, 0, 1);
lean_ctor_set_uint8(v___x_488_, 0, v___x_411_);
v___x_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
return v___x_489_;
}
}
else
{
lean_object* v___x_490_; lean_object* v___x_491_; 
lean_dec(v___x_419_);
lean_dec(v_stx_406_);
v___x_490_ = lean_alloc_ctor(10, 0, 1);
lean_ctor_set_uint8(v___x_490_, 0, v___x_457_);
v___x_491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_491_, 0, v___x_490_);
return v___x_491_;
}
}
else
{
lean_object* v___x_492_; lean_object* v___x_493_; 
lean_dec(v___x_419_);
lean_dec(v_stx_406_);
v___x_492_ = lean_box(9);
v___x_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_493_, 0, v___x_492_);
return v___x_493_;
}
}
else
{
lean_object* v___x_494_; lean_object* v___x_495_; uint8_t v___x_496_; 
v___x_494_ = lean_unsigned_to_nat(1u);
v___x_495_ = l_Lean_Syntax_getArg(v___x_419_, v___x_494_);
lean_inc(v___x_495_);
v___x_496_ = l_Lean_Syntax_matchesNull(v___x_495_, v___x_418_);
if (v___x_496_ == 0)
{
uint8_t v___x_497_; 
lean_inc(v___x_495_);
v___x_497_ = l_Lean_Syntax_matchesNull(v___x_495_, v___x_494_);
if (v___x_497_ == 0)
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
lean_dec(v___x_495_);
lean_dec(v___x_419_);
v___x_498_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_499_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_500_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_500_, 0, v___x_498_);
lean_ctor_set(v___x_500_, 1, v___x_499_);
v___x_501_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_502_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_502_, 0, v___x_500_);
lean_ctor_set(v___x_502_, 1, v___x_501_);
v___x_503_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_502_, v_a_407_, v_a_408_);
return v___x_503_;
}
else
{
lean_object* v___x_504_; lean_object* v___x_505_; uint8_t v___x_506_; 
v___x_504_ = l_Lean_Syntax_getArg(v___x_495_, v___x_418_);
lean_dec(v___x_495_);
v___x_505_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__58));
lean_inc(v___x_504_);
v___x_506_ = l_Lean_Syntax_isOfKind(v___x_504_, v___x_505_);
if (v___x_506_ == 0)
{
lean_object* v___x_507_; uint8_t v___x_508_; 
v___x_507_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__60));
v___x_508_ = l_Lean_Syntax_isOfKind(v___x_504_, v___x_507_);
if (v___x_508_ == 0)
{
lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
lean_dec(v___x_419_);
v___x_509_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_510_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_511_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_511_, 0, v___x_509_);
lean_ctor_set(v___x_511_, 1, v___x_510_);
v___x_512_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_513_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_513_, 0, v___x_511_);
lean_ctor_set(v___x_513_, 1, v___x_512_);
v___x_514_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_513_, v_a_407_, v_a_408_);
return v___x_514_;
}
else
{
lean_object* v___x_515_; lean_object* v___x_516_; uint8_t v___x_517_; 
v___x_515_ = lean_unsigned_to_nat(2u);
v___x_516_ = l_Lean_Syntax_getArg(v___x_419_, v___x_515_);
lean_dec(v___x_419_);
lean_inc(v___x_516_);
v___x_517_ = l_Lean_Syntax_matchesNull(v___x_516_, v___x_418_);
if (v___x_517_ == 0)
{
uint8_t v___x_518_; 
v___x_518_ = l_Lean_Syntax_matchesNull(v___x_516_, v___x_494_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_519_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_520_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_521_, 0, v___x_519_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
v___x_522_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_523_, 0, v___x_521_);
lean_ctor_set(v___x_523_, 1, v___x_522_);
v___x_524_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_523_, v_a_407_, v_a_408_);
return v___x_524_;
}
else
{
lean_object* v___x_525_; lean_object* v___x_526_; 
lean_dec(v_stx_406_);
v___x_525_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_525_, 0, v___x_517_);
lean_ctor_set_uint8(v___x_525_, 1, v___x_411_);
v___x_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
return v___x_526_;
}
}
else
{
lean_object* v___x_527_; lean_object* v___x_528_; 
lean_dec(v___x_516_);
lean_dec(v_stx_406_);
v___x_527_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_527_, 0, v___x_506_);
lean_ctor_set_uint8(v___x_527_, 1, v___x_506_);
v___x_528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
return v___x_528_;
}
}
}
else
{
lean_object* v___x_529_; lean_object* v___x_530_; uint8_t v___x_531_; 
lean_dec(v___x_504_);
v___x_529_ = lean_unsigned_to_nat(2u);
v___x_530_ = l_Lean_Syntax_getArg(v___x_419_, v___x_529_);
lean_dec(v___x_419_);
lean_inc(v___x_530_);
v___x_531_ = l_Lean_Syntax_matchesNull(v___x_530_, v___x_418_);
if (v___x_531_ == 0)
{
uint8_t v___x_532_; 
v___x_532_ = l_Lean_Syntax_matchesNull(v___x_530_, v___x_494_);
if (v___x_532_ == 0)
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_533_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_534_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_535_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_535_, 0, v___x_533_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
v___x_536_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_537_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_537_, 0, v___x_535_);
lean_ctor_set(v___x_537_, 1, v___x_536_);
v___x_538_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_537_, v_a_407_, v_a_408_);
return v___x_538_;
}
else
{
lean_object* v___x_539_; lean_object* v___x_540_; 
lean_dec(v_stx_406_);
v___x_539_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_539_, 0, v___x_411_);
lean_ctor_set_uint8(v___x_539_, 1, v___x_411_);
v___x_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_540_, 0, v___x_539_);
return v___x_540_;
}
}
else
{
lean_object* v___x_541_; lean_object* v___x_542_; 
lean_dec(v___x_530_);
lean_dec(v_stx_406_);
v___x_541_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_541_, 0, v___x_411_);
lean_ctor_set_uint8(v___x_541_, 1, v___x_496_);
v___x_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_542_, 0, v___x_541_);
return v___x_542_;
}
}
}
}
else
{
lean_object* v___x_543_; lean_object* v___x_544_; uint8_t v___x_545_; 
lean_dec(v___x_495_);
v___x_543_ = lean_unsigned_to_nat(2u);
v___x_544_ = l_Lean_Syntax_getArg(v___x_419_, v___x_543_);
lean_dec(v___x_419_);
lean_inc(v___x_544_);
v___x_545_ = l_Lean_Syntax_matchesNull(v___x_544_, v___x_418_);
if (v___x_545_ == 0)
{
uint8_t v___x_546_; 
v___x_546_ = l_Lean_Syntax_matchesNull(v___x_544_, v___x_494_);
if (v___x_546_ == 0)
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_547_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_548_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_549_, 0, v___x_547_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
v___x_550_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_551_, 0, v___x_549_);
lean_ctor_set(v___x_551_, 1, v___x_550_);
v___x_552_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_551_, v_a_407_, v_a_408_);
return v___x_552_;
}
else
{
lean_object* v___x_553_; lean_object* v___x_554_; 
lean_dec(v_stx_406_);
v___x_553_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_553_, 0, v___x_411_);
lean_ctor_set_uint8(v___x_553_, 1, v___x_411_);
v___x_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_554_, 0, v___x_553_);
return v___x_554_;
}
}
else
{
lean_object* v___x_555_; lean_object* v___x_556_; 
lean_dec(v___x_544_);
lean_dec(v_stx_406_);
v___x_555_ = lean_alloc_ctor(8, 0, 2);
lean_ctor_set_uint8(v___x_555_, 0, v___x_411_);
lean_ctor_set_uint8(v___x_555_, 1, v___x_453_);
v___x_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_556_, 0, v___x_555_);
return v___x_556_;
}
}
}
}
else
{
lean_object* v___x_557_; lean_object* v___x_558_; 
lean_dec(v___x_419_);
lean_dec(v_stx_406_);
v___x_557_ = lean_box(7);
v___x_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
return v___x_558_;
}
}
else
{
lean_object* v___x_559_; lean_object* v___x_560_; 
lean_dec(v___x_419_);
lean_dec(v_stx_406_);
v___x_559_ = lean_box(6);
v___x_560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_560_, 0, v___x_559_);
return v___x_560_;
}
}
else
{
lean_object* v___x_561_; lean_object* v___x_562_; 
lean_dec(v___x_419_);
lean_dec(v_stx_406_);
v___x_561_ = lean_box(4);
v___x_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
return v___x_562_;
}
}
else
{
lean_object* v___x_563_; lean_object* v___x_564_; 
lean_dec(v___x_419_);
lean_dec(v_stx_406_);
v___x_563_ = lean_box(2);
v___x_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
return v___x_564_;
}
}
else
{
lean_object* v___x_565_; lean_object* v___x_566_; 
lean_dec(v___x_419_);
lean_dec(v_stx_406_);
v___x_565_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_565_, 0, v___x_411_);
v___x_566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
return v___x_566_;
}
}
else
{
lean_object* v___x_567_; lean_object* v___x_568_; 
lean_dec(v___x_419_);
lean_dec(v_stx_406_);
v___x_567_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_567_, 0, v___x_441_);
v___x_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_568_, 0, v___x_567_);
return v___x_568_;
}
}
else
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
lean_dec(v___x_419_);
lean_dec(v_stx_406_);
v___x_569_ = lean_alloc_ctor(8, 0, 1);
lean_ctor_set_uint8(v___x_569_, 0, v___x_411_);
v___x_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_570_, 0, v___x_569_);
v___x_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_571_, 0, v___x_570_);
return v___x_571_;
}
}
else
{
lean_object* v___x_572_; lean_object* v___x_573_; 
lean_dec(v___x_419_);
lean_dec(v_stx_406_);
v___x_572_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__61));
v___x_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
return v___x_573_;
}
}
else
{
lean_object* v___x_574_; lean_object* v___x_575_; 
lean_dec(v___x_419_);
lean_dec(v_stx_406_);
v___x_574_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__62));
v___x_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
return v___x_575_;
}
}
else
{
lean_object* v___x_576_; lean_object* v___x_577_; 
lean_dec(v___x_419_);
lean_dec(v_stx_406_);
v___x_576_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__63));
v___x_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_577_, 0, v___x_576_);
return v___x_577_;
}
}
else
{
lean_object* v___x_578_; lean_object* v___x_579_; 
lean_dec(v___x_419_);
lean_dec(v_stx_406_);
v___x_578_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__64));
v___x_579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
return v___x_579_;
}
}
else
{
lean_object* v___x_580_; lean_object* v___x_581_; uint8_t v___x_582_; 
v___x_580_ = lean_unsigned_to_nat(3u);
v___x_581_ = l_Lean_Syntax_getArg(v___x_419_, v___x_580_);
lean_dec(v___x_419_);
lean_inc(v___x_581_);
v___x_582_ = l_Lean_Syntax_matchesNull(v___x_581_, v___x_418_);
if (v___x_582_ == 0)
{
lean_object* v___x_583_; uint8_t v___x_584_; 
v___x_583_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_581_);
v___x_584_ = l_Lean_Syntax_matchesNull(v___x_581_, v___x_583_);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
lean_dec(v___x_581_);
v___x_585_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_586_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_587_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_587_, 0, v___x_585_);
lean_ctor_set(v___x_587_, 1, v___x_586_);
v___x_588_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_589_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_587_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
v___x_590_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_589_, v_a_407_, v_a_408_);
return v___x_590_;
}
else
{
lean_object* v___x_591_; lean_object* v___x_592_; uint8_t v___x_593_; 
v___x_591_ = l_Lean_Syntax_getArg(v___x_581_, v___x_418_);
lean_dec(v___x_581_);
v___x_592_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
v___x_593_ = l_Lean_Syntax_isOfKind(v___x_591_, v___x_592_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_594_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_595_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_594_);
lean_ctor_set(v___x_596_, 1, v___x_595_);
v___x_597_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_598_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_596_);
lean_ctor_set(v___x_598_, 1, v___x_597_);
v___x_599_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_598_, v_a_407_, v_a_408_);
return v___x_599_;
}
else
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; 
lean_dec(v_stx_406_);
v___x_600_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_600_, 0, v___x_411_);
v___x_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_601_, 0, v___x_600_);
v___x_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
return v___x_602_;
}
}
}
else
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
lean_dec(v___x_581_);
lean_dec(v_stx_406_);
v___x_603_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_603_, 0, v___x_429_);
v___x_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
v___x_605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_605_, 0, v___x_604_);
return v___x_605_;
}
}
}
else
{
lean_object* v___x_606_; lean_object* v___x_607_; uint8_t v___x_608_; 
v___x_606_ = lean_unsigned_to_nat(2u);
v___x_607_ = l_Lean_Syntax_getArg(v___x_419_, v___x_606_);
lean_dec(v___x_419_);
lean_inc(v___x_607_);
v___x_608_ = l_Lean_Syntax_matchesNull(v___x_607_, v___x_418_);
if (v___x_608_ == 0)
{
lean_object* v___x_609_; uint8_t v___x_610_; 
v___x_609_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_607_);
v___x_610_ = l_Lean_Syntax_matchesNull(v___x_607_, v___x_609_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
lean_dec(v___x_607_);
v___x_611_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_612_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_613_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_611_);
lean_ctor_set(v___x_613_, 1, v___x_612_);
v___x_614_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_615_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_613_);
lean_ctor_set(v___x_615_, 1, v___x_614_);
v___x_616_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_615_, v_a_407_, v_a_408_);
return v___x_616_;
}
else
{
lean_object* v___x_617_; lean_object* v___x_618_; uint8_t v___x_619_; 
v___x_617_ = l_Lean_Syntax_getArg(v___x_607_, v___x_418_);
lean_dec(v___x_607_);
v___x_618_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
v___x_619_ = l_Lean_Syntax_isOfKind(v___x_617_, v___x_618_);
if (v___x_619_ == 0)
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_620_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_621_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_622_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_622_, 0, v___x_620_);
lean_ctor_set(v___x_622_, 1, v___x_621_);
v___x_623_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_624_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_622_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
v___x_625_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_624_, v_a_407_, v_a_408_);
return v___x_625_;
}
else
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
lean_dec(v_stx_406_);
v___x_626_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_626_, 0, v___x_411_);
v___x_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
v___x_628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
return v___x_628_;
}
}
}
else
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
lean_dec(v___x_607_);
lean_dec(v_stx_406_);
v___x_629_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_629_, 0, v___x_427_);
v___x_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
v___x_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
return v___x_631_;
}
}
}
else
{
lean_object* v___x_632_; lean_object* v___x_633_; uint8_t v___x_634_; 
v___x_632_ = lean_unsigned_to_nat(1u);
v___x_633_ = l_Lean_Syntax_getArg(v___x_419_, v___x_632_);
lean_dec(v___x_419_);
lean_inc(v___x_633_);
v___x_634_ = l_Lean_Syntax_matchesNull(v___x_633_, v___x_418_);
if (v___x_634_ == 0)
{
uint8_t v___x_635_; 
lean_inc(v___x_633_);
v___x_635_ = l_Lean_Syntax_matchesNull(v___x_633_, v___x_632_);
if (v___x_635_ == 0)
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
lean_dec(v___x_633_);
v___x_636_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_637_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_638_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_636_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
v___x_639_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_638_);
lean_ctor_set(v___x_640_, 1, v___x_639_);
v___x_641_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_640_, v_a_407_, v_a_408_);
return v___x_641_;
}
else
{
lean_object* v___x_642_; lean_object* v___x_643_; uint8_t v___x_644_; 
v___x_642_ = l_Lean_Syntax_getArg(v___x_633_, v___x_418_);
lean_dec(v___x_633_);
v___x_643_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
v___x_644_ = l_Lean_Syntax_isOfKind(v___x_642_, v___x_643_);
if (v___x_644_ == 0)
{
lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_645_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_646_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_647_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_647_, 0, v___x_645_);
lean_ctor_set(v___x_647_, 1, v___x_646_);
v___x_648_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_649_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_649_, 0, v___x_647_);
lean_ctor_set(v___x_649_, 1, v___x_648_);
v___x_650_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_649_, v_a_407_, v_a_408_);
return v___x_650_;
}
else
{
lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
lean_dec(v_stx_406_);
v___x_651_ = lean_alloc_ctor(5, 0, 1);
lean_ctor_set_uint8(v___x_651_, 0, v___x_411_);
v___x_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
v___x_653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_653_, 0, v___x_652_);
return v___x_653_;
}
}
}
else
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
lean_dec(v___x_633_);
lean_dec(v_stx_406_);
v___x_654_ = lean_alloc_ctor(5, 0, 1);
lean_ctor_set_uint8(v___x_654_, 0, v___x_425_);
v___x_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
v___x_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
return v___x_656_;
}
}
}
else
{
lean_object* v___x_657_; lean_object* v___x_658_; 
lean_dec(v___x_419_);
lean_dec(v_stx_406_);
v___x_657_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__65));
v___x_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
return v___x_658_;
}
}
else
{
lean_object* v___x_659_; lean_object* v___x_660_; uint8_t v___x_661_; 
v___x_659_ = lean_unsigned_to_nat(1u);
v___x_660_ = l_Lean_Syntax_getArg(v___x_419_, v___x_659_);
lean_dec(v___x_419_);
lean_inc(v___x_660_);
v___x_661_ = l_Lean_Syntax_matchesNull(v___x_660_, v___x_418_);
if (v___x_661_ == 0)
{
uint8_t v___x_662_; 
lean_inc(v___x_660_);
v___x_662_ = l_Lean_Syntax_matchesNull(v___x_660_, v___x_659_);
if (v___x_662_ == 0)
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
lean_dec(v___x_660_);
v___x_663_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_664_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_665_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_665_, 0, v___x_663_);
lean_ctor_set(v___x_665_, 1, v___x_664_);
v___x_666_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_667_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_665_);
lean_ctor_set(v___x_667_, 1, v___x_666_);
v___x_668_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_667_, v_a_407_, v_a_408_);
return v___x_668_;
}
else
{
lean_object* v___x_669_; lean_object* v___x_670_; uint8_t v___x_671_; 
v___x_669_ = l_Lean_Syntax_getArg(v___x_660_, v___x_418_);
lean_dec(v___x_660_);
v___x_670_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
v___x_671_ = l_Lean_Syntax_isOfKind(v___x_669_, v___x_670_);
if (v___x_671_ == 0)
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_672_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_673_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_674_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_674_, 0, v___x_672_);
lean_ctor_set(v___x_674_, 1, v___x_673_);
v___x_675_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_676_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_676_, 0, v___x_674_);
lean_ctor_set(v___x_676_, 1, v___x_675_);
v___x_677_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_676_, v_a_407_, v_a_408_);
return v___x_677_;
}
else
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
lean_dec(v_stx_406_);
v___x_678_ = lean_alloc_ctor(8, 0, 1);
lean_ctor_set_uint8(v___x_678_, 0, v___x_411_);
v___x_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
v___x_680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_680_, 0, v___x_679_);
return v___x_680_;
}
}
}
else
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
lean_dec(v___x_660_);
lean_dec(v_stx_406_);
v___x_681_ = lean_alloc_ctor(8, 0, 1);
lean_ctor_set_uint8(v___x_681_, 0, v___x_421_);
v___x_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_682_, 0, v___x_681_);
v___x_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_683_, 0, v___x_682_);
return v___x_683_;
}
}
}
else
{
lean_object* v___x_684_; lean_object* v___x_685_; uint8_t v___x_686_; 
v___x_684_ = lean_unsigned_to_nat(1u);
v___x_685_ = l_Lean_Syntax_getArg(v___x_419_, v___x_684_);
lean_dec(v___x_419_);
lean_inc(v___x_685_);
v___x_686_ = l_Lean_Syntax_matchesNull(v___x_685_, v___x_418_);
if (v___x_686_ == 0)
{
uint8_t v___x_687_; 
lean_inc(v___x_685_);
v___x_687_ = l_Lean_Syntax_matchesNull(v___x_685_, v___x_684_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
lean_dec(v___x_685_);
v___x_688_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_689_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_690_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_690_, 0, v___x_688_);
lean_ctor_set(v___x_690_, 1, v___x_689_);
v___x_691_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_692_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_692_, 0, v___x_690_);
lean_ctor_set(v___x_692_, 1, v___x_691_);
v___x_693_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_692_, v_a_407_, v_a_408_);
return v___x_693_;
}
else
{
lean_object* v___x_694_; lean_object* v___x_695_; uint8_t v___x_696_; 
v___x_694_ = l_Lean_Syntax_getArg(v___x_685_, v___x_418_);
lean_dec(v___x_685_);
v___x_695_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__29));
v___x_696_ = l_Lean_Syntax_isOfKind(v___x_694_, v___x_695_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_697_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__5, &l_Lean_Meta_Grind_getAttrKindCore___closed__5_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__5);
v___x_698_ = l_Lean_MessageData_ofSyntax(v_stx_406_);
v___x_699_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_699_, 0, v___x_697_);
lean_ctor_set(v___x_699_, 1, v___x_698_);
v___x_700_ = lean_obj_once(&l_Lean_Meta_Grind_getAttrKindCore___closed__7, &l_Lean_Meta_Grind_getAttrKindCore___closed__7_once, _init_l_Lean_Meta_Grind_getAttrKindCore___closed__7);
v___x_701_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_701_, 0, v___x_699_);
lean_ctor_set(v___x_701_, 1, v___x_700_);
v___x_702_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_701_, v_a_407_, v_a_408_);
return v___x_702_;
}
else
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
lean_dec(v_stx_406_);
v___x_703_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_703_, 0, v___x_411_);
v___x_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_704_, 0, v___x_703_);
v___x_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_705_, 0, v___x_704_);
return v___x_705_;
}
}
}
else
{
lean_object* v___x_706_; lean_object* v___x_707_; 
lean_dec(v___x_685_);
lean_dec(v_stx_406_);
v___x_706_ = ((lean_object*)(l_Lean_Meta_Grind_getAttrKindCore___closed__67));
v___x_707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_707_, 0, v___x_706_);
return v___x_707_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindCore___boxed(lean_object* v_stx_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_Lean_Meta_Grind_getAttrKindCore(v_stx_708_, v_a_709_, v_a_710_);
lean_dec(v_a_710_);
lean_dec_ref(v_a_709_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0(lean_object* v_00_u03b1_713_, lean_object* v_msg_714_, lean_object* v___y_715_, lean_object* v___y_716_){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v_msg_714_, v___y_715_, v___y_716_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___boxed(lean_object* v_00_u03b1_719_, lean_object* v_msg_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_){
_start:
{
lean_object* v_res_724_; 
v_res_724_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0(v_00_u03b1_719_, v_msg_720_, v___y_721_, v___y_722_);
lean_dec(v___y_722_);
lean_dec_ref(v___y_721_);
return v_res_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1(lean_object* v_00_u03b1_725_, lean_object* v_ref_726_, lean_object* v_msg_727_, lean_object* v___y_728_, lean_object* v___y_729_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___redArg(v_ref_726_, v_msg_727_, v___y_728_, v___y_729_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1___boxed(lean_object* v_00_u03b1_732_, lean_object* v_ref_733_, lean_object* v_msg_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lean_throwErrorAt___at___00Lean_Meta_Grind_getAttrKindCore_spec__1(v_00_u03b1_732_, v_ref_733_, v_msg_734_, v___y_735_, v___y_736_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
lean_dec(v_ref_733_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindFromOpt(lean_object* v_stx_739_, lean_object* v_a_740_, lean_object* v_a_741_){
_start:
{
lean_object* v___x_743_; lean_object* v___x_744_; uint8_t v___x_745_; 
v___x_743_ = lean_unsigned_to_nat(1u);
v___x_744_ = l_Lean_Syntax_getArg(v_stx_739_, v___x_743_);
v___x_745_ = l_Lean_Syntax_isNone(v___x_744_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_746_ = lean_unsigned_to_nat(0u);
v___x_747_ = l_Lean_Syntax_getArg(v___x_744_, v___x_746_);
lean_dec(v___x_744_);
v___x_748_ = l_Lean_Meta_Grind_getAttrKindCore(v___x_747_, v_a_740_, v_a_741_);
return v___x_748_;
}
else
{
lean_object* v___x_749_; lean_object* v___x_750_; 
lean_dec(v___x_744_);
v___x_749_ = lean_box(3);
v___x_750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
return v___x_750_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getAttrKindFromOpt___boxed(lean_object* v_stx_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_){
_start:
{
lean_object* v_res_755_; 
v_res_755_ = l_Lean_Meta_Grind_getAttrKindFromOpt(v_stx_751_, v_a_752_, v_a_753_);
lean_dec(v_a_753_);
lean_dec_ref(v_a_752_);
lean_dec(v_stx_751_);
return v_res_755_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1(void){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = ((lean_object*)(l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__0));
v___x_758_ = l_Lean_stringToMessageData(v___x_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(lean_object* v_a_759_, lean_object* v_a_760_){
_start:
{
lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_762_ = lean_obj_once(&l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1, &l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1_once, _init_l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___closed__1);
v___x_763_ = l_Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0___redArg(v___x_762_, v_a_759_, v_a_760_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg___boxed(lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(v_a_764_, v_a_765_);
lean_dec(v_a_765_);
lean_dec_ref(v_a_764_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier(lean_object* v_00_u03b1_768_, lean_object* v_a_769_, lean_object* v_a_770_){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(v_a_769_, v_a_770_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_throwInvalidUsrModifier___boxed(lean_object* v_00_u03b1_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l_Lean_Meta_Grind_throwInvalidUsrModifier(v_00_u03b1_773_, v_a_774_, v_a_775_);
lean_dec(v_a_775_);
lean_dec_ref(v_a_774_);
return v_res_777_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_778_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0);
v___x_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
return v___x_779_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0);
v___x_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_781_, 0, v___x_780_);
lean_ctor_set(v___x_781_, 1, v___x_780_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(lean_object* v_ext_782_, lean_object* v_b_783_, uint8_t v_kind_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
lean_object* v_toCold_788_; lean_object* v_currNamespace_789_; lean_object* v___x_790_; lean_object* v_env_791_; lean_object* v_nextMacroScope_792_; lean_object* v_ngen_793_; lean_object* v_auxDeclNGen_794_; lean_object* v_traceState_795_; lean_object* v_recordedDeps_796_; lean_object* v_messages_797_; lean_object* v_infoState_798_; lean_object* v_snapshotTasks_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_811_; 
v_toCold_788_ = lean_ctor_get(v___y_785_, 0);
v_currNamespace_789_ = lean_ctor_get(v_toCold_788_, 4);
v___x_790_ = lean_st_ref_take(v___y_786_);
v_env_791_ = lean_ctor_get(v___x_790_, 0);
v_nextMacroScope_792_ = lean_ctor_get(v___x_790_, 1);
v_ngen_793_ = lean_ctor_get(v___x_790_, 2);
v_auxDeclNGen_794_ = lean_ctor_get(v___x_790_, 3);
v_traceState_795_ = lean_ctor_get(v___x_790_, 4);
v_recordedDeps_796_ = lean_ctor_get(v___x_790_, 6);
v_messages_797_ = lean_ctor_get(v___x_790_, 7);
v_infoState_798_ = lean_ctor_get(v___x_790_, 8);
v_snapshotTasks_799_ = lean_ctor_get(v___x_790_, 9);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_811_ == 0)
{
lean_object* v_unused_812_; 
v_unused_812_ = lean_ctor_get(v___x_790_, 5);
lean_dec(v_unused_812_);
v___x_801_ = v___x_790_;
v_isShared_802_ = v_isSharedCheck_811_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_snapshotTasks_799_);
lean_inc(v_infoState_798_);
lean_inc(v_messages_797_);
lean_inc(v_recordedDeps_796_);
lean_inc(v_traceState_795_);
lean_inc(v_auxDeclNGen_794_);
lean_inc(v_ngen_793_);
lean_inc(v_nextMacroScope_792_);
lean_inc(v_env_791_);
lean_dec(v___x_790_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_811_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_807_; 
v___x_803_ = lean_box(0);
lean_inc(v_currNamespace_789_);
v___x_804_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_791_, v_ext_782_, v_b_783_, v_kind_784_, v_currNamespace_789_);
v___x_805_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 5, v___x_805_);
lean_ctor_set(v___x_801_, 0, v___x_804_);
v___x_807_ = v___x_801_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_804_);
lean_ctor_set(v_reuseFailAlloc_810_, 1, v_nextMacroScope_792_);
lean_ctor_set(v_reuseFailAlloc_810_, 2, v_ngen_793_);
lean_ctor_set(v_reuseFailAlloc_810_, 3, v_auxDeclNGen_794_);
lean_ctor_set(v_reuseFailAlloc_810_, 4, v_traceState_795_);
lean_ctor_set(v_reuseFailAlloc_810_, 5, v___x_805_);
lean_ctor_set(v_reuseFailAlloc_810_, 6, v_recordedDeps_796_);
lean_ctor_set(v_reuseFailAlloc_810_, 7, v_messages_797_);
lean_ctor_set(v_reuseFailAlloc_810_, 8, v_infoState_798_);
lean_ctor_set(v_reuseFailAlloc_810_, 9, v_snapshotTasks_799_);
v___x_807_ = v_reuseFailAlloc_810_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_808_ = lean_st_ref_put(v___y_786_, v___x_807_);
v___x_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_809_, 0, v___x_803_);
return v___x_809_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___boxed(lean_object* v_ext_813_, lean_object* v_b_814_, lean_object* v_kind_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_){
_start:
{
uint8_t v_kind_boxed_819_; lean_object* v_res_820_; 
v_kind_boxed_819_ = lean_unbox(v_kind_815_);
v_res_820_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_813_, v_b_814_, v_kind_boxed_819_, v___y_816_, v___y_817_);
lean_dec(v___y_817_);
lean_dec_ref(v___y_816_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0(lean_object* v_00_u03b1_821_, lean_object* v_00_u03b2_822_, lean_object* v_00_u03c3_823_, lean_object* v_ext_824_, lean_object* v_b_825_, uint8_t v_kind_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_824_, v_b_825_, v_kind_826_, v___y_827_, v___y_828_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___boxed(lean_object* v_00_u03b1_831_, lean_object* v_00_u03b2_832_, lean_object* v_00_u03c3_833_, lean_object* v_ext_834_, lean_object* v_b_835_, lean_object* v_kind_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
uint8_t v_kind_boxed_840_; lean_object* v_res_841_; 
v_kind_boxed_840_ = lean_unbox(v_kind_836_);
v_res_841_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0(v_00_u03b1_831_, v_00_u03b2_832_, v_00_u03c3_833_, v_ext_834_, v_b_835_, v_kind_boxed_840_, v___y_837_, v___y_838_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(lean_object* v_ext_842_, lean_object* v_declName_843_, uint8_t v_eager_844_, uint8_t v_attrKind_845_, lean_object* v_a_846_, lean_object* v_a_847_){
_start:
{
lean_object* v___x_849_; 
lean_inc(v_declName_843_);
v___x_849_ = l_Lean_Meta_Grind_validateCasesAttr(v_declName_843_, v_eager_844_, v_a_846_, v_a_847_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v___x_850_; lean_object* v___x_851_; 
lean_dec_ref_known(v___x_849_, 1);
v___x_850_ = lean_alloc_ctor(2, 1, 1);
lean_ctor_set(v___x_850_, 0, v_declName_843_);
lean_ctor_set_uint8(v___x_850_, sizeof(void*)*1, v_eager_844_);
v___x_851_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_842_, v___x_850_, v_attrKind_845_, v_a_846_, v_a_847_);
return v___x_851_;
}
else
{
lean_dec(v_declName_843_);
lean_dec_ref(v_ext_842_);
return v___x_849_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr___boxed(lean_object* v_ext_852_, lean_object* v_declName_853_, lean_object* v_eager_854_, lean_object* v_attrKind_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_){
_start:
{
uint8_t v_eager_boxed_859_; uint8_t v_attrKind_boxed_860_; lean_object* v_res_861_; 
v_eager_boxed_859_ = lean_unbox(v_eager_854_);
v_attrKind_boxed_860_ = lean_unbox(v_attrKind_855_);
v_res_861_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(v_ext_852_, v_declName_853_, v_eager_boxed_859_, v_attrKind_boxed_860_, v_a_856_, v_a_857_);
lean_dec(v_a_857_);
lean_dec_ref(v_a_856_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr(lean_object* v_ext_862_, lean_object* v_declName_863_, uint8_t v_attrKind_864_, lean_object* v_a_865_, lean_object* v_a_866_){
_start:
{
lean_object* v___x_868_; 
lean_inc(v_declName_863_);
v___x_868_ = l_Lean_Meta_Grind_validateExtAttr(v_declName_863_, v_a_865_, v_a_866_);
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_876_; 
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_876_ == 0)
{
lean_object* v_unused_877_; 
v_unused_877_ = lean_ctor_get(v___x_868_, 0);
lean_dec(v_unused_877_);
v___x_870_ = v___x_868_;
v_isShared_871_ = v_isSharedCheck_876_;
goto v_resetjp_869_;
}
else
{
lean_dec(v___x_868_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_876_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 0, v_declName_863_);
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_declName_863_);
v___x_873_ = v_reuseFailAlloc_875_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
lean_object* v___x_874_; 
v___x_874_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_862_, v___x_873_, v_attrKind_864_, v_a_865_, v_a_866_);
return v___x_874_;
}
}
}
else
{
lean_dec(v_declName_863_);
lean_dec_ref(v_ext_862_);
return v___x_868_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr___boxed(lean_object* v_ext_878_, lean_object* v_declName_879_, lean_object* v_attrKind_880_, lean_object* v_a_881_, lean_object* v_a_882_, lean_object* v_a_883_){
_start:
{
uint8_t v_attrKind_boxed_884_; lean_object* v_res_885_; 
v_attrKind_boxed_884_ = lean_unbox(v_attrKind_880_);
v_res_885_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr(v_ext_878_, v_declName_879_, v_attrKind_boxed_884_, v_a_881_, v_a_882_);
lean_dec(v_a_882_);
lean_dec_ref(v_a_881_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr(lean_object* v_ext_886_, lean_object* v_declName_887_, uint8_t v_attrKind_888_, lean_object* v_a_889_, lean_object* v_a_890_){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_892_, 0, v_declName_887_);
v___x_893_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg(v_ext_886_, v___x_892_, v_attrKind_888_, v_a_889_, v_a_890_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr___boxed(lean_object* v_ext_894_, lean_object* v_declName_895_, lean_object* v_attrKind_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_){
_start:
{
uint8_t v_attrKind_boxed_900_; lean_object* v_res_901_; 
v_attrKind_boxed_900_ = lean_unbox(v_attrKind_896_);
v_res_901_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr(v_ext_894_, v_declName_895_, v_attrKind_boxed_900_, v_a_897_, v_a_898_);
lean_dec(v_a_898_);
lean_dec_ref(v_a_897_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___lam__0(lean_object* v_a_902_, lean_object* v_s_903_){
_start:
{
lean_object* v_casesTypes_904_; lean_object* v_funCC_905_; lean_object* v_ematch_906_; lean_object* v_inj_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
v_casesTypes_904_ = lean_ctor_get(v_s_903_, 0);
v_funCC_905_ = lean_ctor_get(v_s_903_, 2);
v_ematch_906_ = lean_ctor_get(v_s_903_, 3);
v_inj_907_ = lean_ctor_get(v_s_903_, 4);
v_isSharedCheck_914_ = !lean_is_exclusive(v_s_903_);
if (v_isSharedCheck_914_ == 0)
{
lean_object* v_unused_915_; 
v_unused_915_ = lean_ctor_get(v_s_903_, 1);
lean_dec(v_unused_915_);
v___x_909_ = v_s_903_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_inj_907_);
lean_inc(v_ematch_906_);
lean_inc(v_funCC_905_);
lean_inc(v_casesTypes_904_);
lean_dec(v_s_903_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
lean_ctor_set(v___x_909_, 1, v_a_902_);
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_casesTypes_904_);
lean_ctor_set(v_reuseFailAlloc_913_, 1, v_a_902_);
lean_ctor_set(v_reuseFailAlloc_913_, 2, v_funCC_905_);
lean_ctor_set(v_reuseFailAlloc_913_, 3, v_ematch_906_);
lean_ctor_set(v_reuseFailAlloc_913_, 4, v_inj_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr(lean_object* v_ext_916_, lean_object* v_declName_917_, lean_object* v_a_918_, lean_object* v_a_919_){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v_ext_923_; lean_object* v_toEnvExtension_924_; lean_object* v_env_925_; lean_object* v_asyncMode_926_; uint8_t v___x_927_; lean_object* v___x_928_; lean_object* v_extThms_929_; lean_object* v___x_930_; 
v___x_921_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_922_ = lean_st_ref_get(v_a_919_);
v_ext_923_ = lean_ctor_get(v_ext_916_, 1);
v_toEnvExtension_924_ = lean_ctor_get(v_ext_923_, 0);
v_env_925_ = lean_ctor_get(v___x_922_, 0);
lean_inc_ref(v_env_925_);
lean_dec(v___x_922_);
v_asyncMode_926_ = lean_ctor_get(v_toEnvExtension_924_, 2);
v___x_927_ = 0;
v___x_928_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_921_, v_ext_916_, v_env_925_, v_asyncMode_926_, v___x_927_);
v_extThms_929_ = lean_ctor_get(v___x_928_, 1);
lean_inc_ref(v_extThms_929_);
lean_dec(v___x_928_);
v___x_930_ = l_Lean_Meta_Grind_ExtTheorems_eraseDecl(v_extThms_929_, v_declName_917_, v_a_918_, v_a_919_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_961_; 
v_a_931_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_961_ == 0)
{
v___x_933_ = v___x_930_;
v_isShared_934_ = v_isSharedCheck_961_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_930_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_961_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___f_935_; lean_object* v___x_936_; lean_object* v_env_937_; lean_object* v_nextMacroScope_938_; lean_object* v_ngen_939_; lean_object* v_auxDeclNGen_940_; lean_object* v_traceState_941_; lean_object* v_recordedDeps_942_; lean_object* v_messages_943_; lean_object* v_infoState_944_; lean_object* v_snapshotTasks_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_959_; 
v___f_935_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___lam__0), 2, 1);
lean_closure_set(v___f_935_, 0, v_a_931_);
v___x_936_ = lean_st_ref_take(v_a_919_);
v_env_937_ = lean_ctor_get(v___x_936_, 0);
v_nextMacroScope_938_ = lean_ctor_get(v___x_936_, 1);
v_ngen_939_ = lean_ctor_get(v___x_936_, 2);
v_auxDeclNGen_940_ = lean_ctor_get(v___x_936_, 3);
v_traceState_941_ = lean_ctor_get(v___x_936_, 4);
v_recordedDeps_942_ = lean_ctor_get(v___x_936_, 6);
v_messages_943_ = lean_ctor_get(v___x_936_, 7);
v_infoState_944_ = lean_ctor_get(v___x_936_, 8);
v_snapshotTasks_945_ = lean_ctor_get(v___x_936_, 9);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_959_ == 0)
{
lean_object* v_unused_960_; 
v_unused_960_ = lean_ctor_get(v___x_936_, 5);
lean_dec(v_unused_960_);
v___x_947_ = v___x_936_;
v_isShared_948_ = v_isSharedCheck_959_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_snapshotTasks_945_);
lean_inc(v_infoState_944_);
lean_inc(v_messages_943_);
lean_inc(v_recordedDeps_942_);
lean_inc(v_traceState_941_);
lean_inc(v_auxDeclNGen_940_);
lean_inc(v_ngen_939_);
lean_inc(v_nextMacroScope_938_);
lean_inc(v_env_937_);
lean_dec(v___x_936_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_959_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_953_; 
v___x_949_ = lean_box(0);
v___x_950_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_916_, v_env_937_, v___f_935_);
v___x_951_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
if (v_isShared_948_ == 0)
{
lean_ctor_set(v___x_947_, 5, v___x_951_);
lean_ctor_set(v___x_947_, 0, v___x_950_);
v___x_953_ = v___x_947_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v___x_950_);
lean_ctor_set(v_reuseFailAlloc_958_, 1, v_nextMacroScope_938_);
lean_ctor_set(v_reuseFailAlloc_958_, 2, v_ngen_939_);
lean_ctor_set(v_reuseFailAlloc_958_, 3, v_auxDeclNGen_940_);
lean_ctor_set(v_reuseFailAlloc_958_, 4, v_traceState_941_);
lean_ctor_set(v_reuseFailAlloc_958_, 5, v___x_951_);
lean_ctor_set(v_reuseFailAlloc_958_, 6, v_recordedDeps_942_);
lean_ctor_set(v_reuseFailAlloc_958_, 7, v_messages_943_);
lean_ctor_set(v_reuseFailAlloc_958_, 8, v_infoState_944_);
lean_ctor_set(v_reuseFailAlloc_958_, 9, v_snapshotTasks_945_);
v___x_953_ = v_reuseFailAlloc_958_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
lean_object* v___x_954_; lean_object* v___x_956_; 
v___x_954_ = lean_st_ref_put(v_a_919_, v___x_953_);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 0, v___x_949_);
v___x_956_ = v___x_933_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v___x_949_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
lean_dec_ref(v_ext_916_);
v_a_962_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_930_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_930_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_962_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr___boxed(lean_object* v_ext_970_, lean_object* v_declName_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr(v_ext_970_, v_declName_971_, v_a_972_, v_a_973_);
lean_dec(v_a_973_);
lean_dec_ref(v_a_972_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___lam__0(lean_object* v_a_976_, lean_object* v_s_977_){
_start:
{
lean_object* v_extThms_978_; lean_object* v_funCC_979_; lean_object* v_ematch_980_; lean_object* v_inj_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_988_; 
v_extThms_978_ = lean_ctor_get(v_s_977_, 1);
v_funCC_979_ = lean_ctor_get(v_s_977_, 2);
v_ematch_980_ = lean_ctor_get(v_s_977_, 3);
v_inj_981_ = lean_ctor_get(v_s_977_, 4);
v_isSharedCheck_988_ = !lean_is_exclusive(v_s_977_);
if (v_isSharedCheck_988_ == 0)
{
lean_object* v_unused_989_; 
v_unused_989_ = lean_ctor_get(v_s_977_, 0);
lean_dec(v_unused_989_);
v___x_983_ = v_s_977_;
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_inj_981_);
lean_inc(v_ematch_980_);
lean_inc(v_funCC_979_);
lean_inc(v_extThms_978_);
lean_dec(v_s_977_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_986_; 
if (v_isShared_984_ == 0)
{
lean_ctor_set(v___x_983_, 0, v_a_976_);
v___x_986_ = v___x_983_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_a_976_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v_extThms_978_);
lean_ctor_set(v_reuseFailAlloc_987_, 2, v_funCC_979_);
lean_ctor_set(v_reuseFailAlloc_987_, 3, v_ematch_980_);
lean_ctor_set(v_reuseFailAlloc_987_, 4, v_inj_981_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr(lean_object* v_ext_990_, lean_object* v_declName_991_, lean_object* v_a_992_, lean_object* v_a_993_){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
lean_inc(v_declName_991_);
v___x_996_ = l_Lean_Meta_Grind_ensureNotBuiltinCases(v_declName_991_, v_a_992_, v_a_993_);
if (lean_obj_tag(v___x_996_) == 0)
{
lean_object* v___x_997_; lean_object* v_ext_998_; lean_object* v_toEnvExtension_999_; lean_object* v_env_1000_; lean_object* v_asyncMode_1001_; uint8_t v___x_1002_; lean_object* v___x_1003_; lean_object* v_casesTypes_1004_; lean_object* v___x_1005_; 
lean_dec_ref_known(v___x_996_, 1);
v___x_997_ = lean_st_ref_get(v_a_993_);
v_ext_998_ = lean_ctor_get(v_ext_990_, 1);
v_toEnvExtension_999_ = lean_ctor_get(v_ext_998_, 0);
v_env_1000_ = lean_ctor_get(v___x_997_, 0);
lean_inc_ref(v_env_1000_);
lean_dec(v___x_997_);
v_asyncMode_1001_ = lean_ctor_get(v_toEnvExtension_999_, 2);
v___x_1002_ = 0;
v___x_1003_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_995_, v_ext_990_, v_env_1000_, v_asyncMode_1001_, v___x_1002_);
v_casesTypes_1004_ = lean_ctor_get(v___x_1003_, 0);
lean_inc_ref(v_casesTypes_1004_);
lean_dec(v___x_1003_);
v___x_1005_ = l_Lean_Meta_Grind_CasesTypes_eraseDecl(v_casesTypes_1004_, v_declName_991_, v_a_992_, v_a_993_);
if (lean_obj_tag(v___x_1005_) == 0)
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1036_; 
v_a_1006_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1036_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1008_ = v___x_1005_;
v_isShared_1009_ = v_isSharedCheck_1036_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_1005_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1036_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___f_1010_; lean_object* v___x_1011_; lean_object* v_env_1012_; lean_object* v_nextMacroScope_1013_; lean_object* v_ngen_1014_; lean_object* v_auxDeclNGen_1015_; lean_object* v_traceState_1016_; lean_object* v_recordedDeps_1017_; lean_object* v_messages_1018_; lean_object* v_infoState_1019_; lean_object* v_snapshotTasks_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1034_; 
v___f_1010_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___lam__0), 2, 1);
lean_closure_set(v___f_1010_, 0, v_a_1006_);
v___x_1011_ = lean_st_ref_take(v_a_993_);
v_env_1012_ = lean_ctor_get(v___x_1011_, 0);
v_nextMacroScope_1013_ = lean_ctor_get(v___x_1011_, 1);
v_ngen_1014_ = lean_ctor_get(v___x_1011_, 2);
v_auxDeclNGen_1015_ = lean_ctor_get(v___x_1011_, 3);
v_traceState_1016_ = lean_ctor_get(v___x_1011_, 4);
v_recordedDeps_1017_ = lean_ctor_get(v___x_1011_, 6);
v_messages_1018_ = lean_ctor_get(v___x_1011_, 7);
v_infoState_1019_ = lean_ctor_get(v___x_1011_, 8);
v_snapshotTasks_1020_ = lean_ctor_get(v___x_1011_, 9);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1011_);
if (v_isSharedCheck_1034_ == 0)
{
lean_object* v_unused_1035_; 
v_unused_1035_ = lean_ctor_get(v___x_1011_, 5);
lean_dec(v_unused_1035_);
v___x_1022_ = v___x_1011_;
v_isShared_1023_ = v_isSharedCheck_1034_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_snapshotTasks_1020_);
lean_inc(v_infoState_1019_);
lean_inc(v_messages_1018_);
lean_inc(v_recordedDeps_1017_);
lean_inc(v_traceState_1016_);
lean_inc(v_auxDeclNGen_1015_);
lean_inc(v_ngen_1014_);
lean_inc(v_nextMacroScope_1013_);
lean_inc(v_env_1012_);
lean_dec(v___x_1011_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1034_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1028_; 
v___x_1024_ = lean_box(0);
v___x_1025_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_990_, v_env_1012_, v___f_1010_);
v___x_1026_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
if (v_isShared_1023_ == 0)
{
lean_ctor_set(v___x_1022_, 5, v___x_1026_);
lean_ctor_set(v___x_1022_, 0, v___x_1025_);
v___x_1028_ = v___x_1022_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v___x_1025_);
lean_ctor_set(v_reuseFailAlloc_1033_, 1, v_nextMacroScope_1013_);
lean_ctor_set(v_reuseFailAlloc_1033_, 2, v_ngen_1014_);
lean_ctor_set(v_reuseFailAlloc_1033_, 3, v_auxDeclNGen_1015_);
lean_ctor_set(v_reuseFailAlloc_1033_, 4, v_traceState_1016_);
lean_ctor_set(v_reuseFailAlloc_1033_, 5, v___x_1026_);
lean_ctor_set(v_reuseFailAlloc_1033_, 6, v_recordedDeps_1017_);
lean_ctor_set(v_reuseFailAlloc_1033_, 7, v_messages_1018_);
lean_ctor_set(v_reuseFailAlloc_1033_, 8, v_infoState_1019_);
lean_ctor_set(v_reuseFailAlloc_1033_, 9, v_snapshotTasks_1020_);
v___x_1028_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
lean_object* v___x_1029_; lean_object* v___x_1031_; 
v___x_1029_ = lean_st_ref_put(v_a_993_, v___x_1028_);
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 0, v___x_1024_);
v___x_1031_ = v___x_1008_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v___x_1024_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
}
}
else
{
lean_object* v_a_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1044_; 
lean_dec_ref(v_ext_990_);
v_a_1037_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1039_ = v___x_1005_;
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_a_1037_);
lean_dec(v___x_1005_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1042_; 
if (v_isShared_1040_ == 0)
{
v___x_1042_ = v___x_1039_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_a_1037_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
else
{
lean_dec(v_declName_991_);
lean_dec_ref(v_ext_990_);
return v___x_996_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr___boxed(lean_object* v_ext_1045_, lean_object* v_declName_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr(v_ext_1045_, v_declName_1046_, v_a_1047_, v_a_1048_);
lean_dec(v_a_1048_);
lean_dec_ref(v_a_1047_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___lam__0(lean_object* v___x_1051_, lean_object* v_s_1052_){
_start:
{
lean_object* v_casesTypes_1053_; lean_object* v_extThms_1054_; lean_object* v_ematch_1055_; lean_object* v_inj_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
v_casesTypes_1053_ = lean_ctor_get(v_s_1052_, 0);
v_extThms_1054_ = lean_ctor_get(v_s_1052_, 1);
v_ematch_1055_ = lean_ctor_get(v_s_1052_, 3);
v_inj_1056_ = lean_ctor_get(v_s_1052_, 4);
v_isSharedCheck_1063_ = !lean_is_exclusive(v_s_1052_);
if (v_isSharedCheck_1063_ == 0)
{
lean_object* v_unused_1064_; 
v_unused_1064_ = lean_ctor_get(v_s_1052_, 2);
lean_dec(v_unused_1064_);
v___x_1058_ = v_s_1052_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_inj_1056_);
lean_inc(v_ematch_1055_);
lean_inc(v_extThms_1054_);
lean_inc(v_casesTypes_1053_);
lean_dec(v_s_1052_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
lean_ctor_set(v___x_1058_, 2, v___x_1051_);
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_casesTypes_1053_);
lean_ctor_set(v_reuseFailAlloc_1062_, 1, v_extThms_1054_);
lean_ctor_set(v_reuseFailAlloc_1062_, 2, v___x_1051_);
lean_ctor_set(v_reuseFailAlloc_1062_, 3, v_ematch_1055_);
lean_ctor_set(v_reuseFailAlloc_1062_, 4, v_inj_1056_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(lean_object* v_k_1065_, lean_object* v_t_1066_){
_start:
{
if (lean_obj_tag(v_t_1066_) == 0)
{
lean_object* v_k_1067_; lean_object* v_v_1068_; lean_object* v_l_1069_; lean_object* v_r_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1724_; 
v_k_1067_ = lean_ctor_get(v_t_1066_, 1);
v_v_1068_ = lean_ctor_get(v_t_1066_, 2);
v_l_1069_ = lean_ctor_get(v_t_1066_, 3);
v_r_1070_ = lean_ctor_get(v_t_1066_, 4);
v_isSharedCheck_1724_ = !lean_is_exclusive(v_t_1066_);
if (v_isSharedCheck_1724_ == 0)
{
lean_object* v_unused_1725_; 
v_unused_1725_ = lean_ctor_get(v_t_1066_, 0);
lean_dec(v_unused_1725_);
v___x_1072_ = v_t_1066_;
v_isShared_1073_ = v_isSharedCheck_1724_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_r_1070_);
lean_inc(v_l_1069_);
lean_inc(v_v_1068_);
lean_inc(v_k_1067_);
lean_dec(v_t_1066_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1724_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
uint8_t v___x_1074_; 
v___x_1074_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_1065_, v_k_1067_);
switch(v___x_1074_)
{
case 0:
{
lean_object* v_impl_1075_; lean_object* v___x_1076_; 
v_impl_1075_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_k_1065_, v_l_1069_);
v___x_1076_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1075_) == 0)
{
if (lean_obj_tag(v_r_1070_) == 0)
{
lean_object* v_size_1077_; lean_object* v_size_1078_; lean_object* v_k_1079_; lean_object* v_v_1080_; lean_object* v_l_1081_; lean_object* v_r_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; uint8_t v___x_1085_; 
v_size_1077_ = lean_ctor_get(v_impl_1075_, 0);
v_size_1078_ = lean_ctor_get(v_r_1070_, 0);
v_k_1079_ = lean_ctor_get(v_r_1070_, 1);
v_v_1080_ = lean_ctor_get(v_r_1070_, 2);
v_l_1081_ = lean_ctor_get(v_r_1070_, 3);
lean_inc(v_l_1081_);
v_r_1082_ = lean_ctor_get(v_r_1070_, 4);
v___x_1083_ = lean_unsigned_to_nat(3u);
v___x_1084_ = lean_nat_mul(v___x_1083_, v_size_1077_);
v___x_1085_ = lean_nat_dec_lt(v___x_1084_, v_size_1078_);
lean_dec(v___x_1084_);
if (v___x_1085_ == 0)
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1089_; 
lean_dec(v_l_1081_);
v___x_1086_ = lean_nat_add(v___x_1076_, v_size_1077_);
v___x_1087_ = lean_nat_add(v___x_1086_, v_size_1078_);
lean_dec(v___x_1086_);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 3, v_impl_1075_);
lean_ctor_set(v___x_1072_, 0, v___x_1087_);
v___x_1089_ = v___x_1072_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v___x_1087_);
lean_ctor_set(v_reuseFailAlloc_1090_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1090_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1090_, 3, v_impl_1075_);
lean_ctor_set(v_reuseFailAlloc_1090_, 4, v_r_1070_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
else
{
lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1154_; 
lean_inc(v_r_1082_);
lean_inc(v_v_1080_);
lean_inc(v_k_1079_);
lean_inc(v_size_1078_);
v_isSharedCheck_1154_ = !lean_is_exclusive(v_r_1070_);
if (v_isSharedCheck_1154_ == 0)
{
lean_object* v_unused_1155_; lean_object* v_unused_1156_; lean_object* v_unused_1157_; lean_object* v_unused_1158_; lean_object* v_unused_1159_; 
v_unused_1155_ = lean_ctor_get(v_r_1070_, 4);
lean_dec(v_unused_1155_);
v_unused_1156_ = lean_ctor_get(v_r_1070_, 3);
lean_dec(v_unused_1156_);
v_unused_1157_ = lean_ctor_get(v_r_1070_, 2);
lean_dec(v_unused_1157_);
v_unused_1158_ = lean_ctor_get(v_r_1070_, 1);
lean_dec(v_unused_1158_);
v_unused_1159_ = lean_ctor_get(v_r_1070_, 0);
lean_dec(v_unused_1159_);
v___x_1092_ = v_r_1070_;
v_isShared_1093_ = v_isSharedCheck_1154_;
goto v_resetjp_1091_;
}
else
{
lean_dec(v_r_1070_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1154_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v_size_1094_; lean_object* v_k_1095_; lean_object* v_v_1096_; lean_object* v_l_1097_; lean_object* v_r_1098_; lean_object* v_size_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; uint8_t v___x_1102_; 
v_size_1094_ = lean_ctor_get(v_l_1081_, 0);
v_k_1095_ = lean_ctor_get(v_l_1081_, 1);
v_v_1096_ = lean_ctor_get(v_l_1081_, 2);
v_l_1097_ = lean_ctor_get(v_l_1081_, 3);
v_r_1098_ = lean_ctor_get(v_l_1081_, 4);
v_size_1099_ = lean_ctor_get(v_r_1082_, 0);
v___x_1100_ = lean_unsigned_to_nat(2u);
v___x_1101_ = lean_nat_mul(v___x_1100_, v_size_1099_);
v___x_1102_ = lean_nat_dec_lt(v_size_1094_, v___x_1101_);
lean_dec(v___x_1101_);
if (v___x_1102_ == 0)
{
lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1130_; 
lean_inc(v_r_1098_);
lean_inc(v_l_1097_);
lean_inc(v_v_1096_);
lean_inc(v_k_1095_);
v_isSharedCheck_1130_ = !lean_is_exclusive(v_l_1081_);
if (v_isSharedCheck_1130_ == 0)
{
lean_object* v_unused_1131_; lean_object* v_unused_1132_; lean_object* v_unused_1133_; lean_object* v_unused_1134_; lean_object* v_unused_1135_; 
v_unused_1131_ = lean_ctor_get(v_l_1081_, 4);
lean_dec(v_unused_1131_);
v_unused_1132_ = lean_ctor_get(v_l_1081_, 3);
lean_dec(v_unused_1132_);
v_unused_1133_ = lean_ctor_get(v_l_1081_, 2);
lean_dec(v_unused_1133_);
v_unused_1134_ = lean_ctor_get(v_l_1081_, 1);
lean_dec(v_unused_1134_);
v_unused_1135_ = lean_ctor_get(v_l_1081_, 0);
lean_dec(v_unused_1135_);
v___x_1104_ = v_l_1081_;
v_isShared_1105_ = v_isSharedCheck_1130_;
goto v_resetjp_1103_;
}
else
{
lean_dec(v_l_1081_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1130_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___y_1109_; lean_object* v___y_1110_; lean_object* v___y_1111_; lean_object* v___y_1120_; 
v___x_1106_ = lean_nat_add(v___x_1076_, v_size_1077_);
v___x_1107_ = lean_nat_add(v___x_1106_, v_size_1078_);
lean_dec(v_size_1078_);
if (lean_obj_tag(v_l_1097_) == 0)
{
lean_object* v_size_1128_; 
v_size_1128_ = lean_ctor_get(v_l_1097_, 0);
lean_inc(v_size_1128_);
v___y_1120_ = v_size_1128_;
goto v___jp_1119_;
}
else
{
lean_object* v___x_1129_; 
v___x_1129_ = lean_unsigned_to_nat(0u);
v___y_1120_ = v___x_1129_;
goto v___jp_1119_;
}
v___jp_1108_:
{
lean_object* v___x_1112_; lean_object* v___x_1114_; 
v___x_1112_ = lean_nat_add(v___y_1110_, v___y_1111_);
lean_dec(v___y_1111_);
lean_dec(v___y_1110_);
if (v_isShared_1105_ == 0)
{
lean_ctor_set(v___x_1104_, 4, v_r_1082_);
lean_ctor_set(v___x_1104_, 3, v_r_1098_);
lean_ctor_set(v___x_1104_, 2, v_v_1080_);
lean_ctor_set(v___x_1104_, 1, v_k_1079_);
lean_ctor_set(v___x_1104_, 0, v___x_1112_);
v___x_1114_ = v___x_1104_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v___x_1112_);
lean_ctor_set(v_reuseFailAlloc_1118_, 1, v_k_1079_);
lean_ctor_set(v_reuseFailAlloc_1118_, 2, v_v_1080_);
lean_ctor_set(v_reuseFailAlloc_1118_, 3, v_r_1098_);
lean_ctor_set(v_reuseFailAlloc_1118_, 4, v_r_1082_);
v___x_1114_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
lean_object* v___x_1116_; 
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 4, v___x_1114_);
lean_ctor_set(v___x_1092_, 3, v___y_1109_);
lean_ctor_set(v___x_1092_, 2, v_v_1096_);
lean_ctor_set(v___x_1092_, 1, v_k_1095_);
lean_ctor_set(v___x_1092_, 0, v___x_1107_);
v___x_1116_ = v___x_1092_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v___x_1107_);
lean_ctor_set(v_reuseFailAlloc_1117_, 1, v_k_1095_);
lean_ctor_set(v_reuseFailAlloc_1117_, 2, v_v_1096_);
lean_ctor_set(v_reuseFailAlloc_1117_, 3, v___y_1109_);
lean_ctor_set(v_reuseFailAlloc_1117_, 4, v___x_1114_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
v___jp_1119_:
{
lean_object* v___x_1121_; lean_object* v___x_1123_; 
v___x_1121_ = lean_nat_add(v___x_1106_, v___y_1120_);
lean_dec(v___y_1120_);
lean_dec(v___x_1106_);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 4, v_l_1097_);
lean_ctor_set(v___x_1072_, 3, v_impl_1075_);
lean_ctor_set(v___x_1072_, 0, v___x_1121_);
v___x_1123_ = v___x_1072_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v___x_1121_);
lean_ctor_set(v_reuseFailAlloc_1127_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1127_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1127_, 3, v_impl_1075_);
lean_ctor_set(v_reuseFailAlloc_1127_, 4, v_l_1097_);
v___x_1123_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
lean_object* v___x_1124_; 
v___x_1124_ = lean_nat_add(v___x_1076_, v_size_1099_);
if (lean_obj_tag(v_r_1098_) == 0)
{
lean_object* v_size_1125_; 
v_size_1125_ = lean_ctor_get(v_r_1098_, 0);
lean_inc(v_size_1125_);
v___y_1109_ = v___x_1123_;
v___y_1110_ = v___x_1124_;
v___y_1111_ = v_size_1125_;
goto v___jp_1108_;
}
else
{
lean_object* v___x_1126_; 
v___x_1126_ = lean_unsigned_to_nat(0u);
v___y_1109_ = v___x_1123_;
v___y_1110_ = v___x_1124_;
v___y_1111_ = v___x_1126_;
goto v___jp_1108_;
}
}
}
}
}
else
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1140_; 
lean_del_object(v___x_1072_);
v___x_1136_ = lean_nat_add(v___x_1076_, v_size_1077_);
v___x_1137_ = lean_nat_add(v___x_1136_, v_size_1078_);
lean_dec(v_size_1078_);
v___x_1138_ = lean_nat_add(v___x_1136_, v_size_1094_);
lean_dec(v___x_1136_);
lean_inc_ref(v_impl_1075_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 4, v_l_1081_);
lean_ctor_set(v___x_1092_, 3, v_impl_1075_);
lean_ctor_set(v___x_1092_, 2, v_v_1068_);
lean_ctor_set(v___x_1092_, 1, v_k_1067_);
lean_ctor_set(v___x_1092_, 0, v___x_1138_);
v___x_1140_ = v___x_1092_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1138_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1153_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1153_, 3, v_impl_1075_);
lean_ctor_set(v_reuseFailAlloc_1153_, 4, v_l_1081_);
v___x_1140_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1147_; 
v_isSharedCheck_1147_ = !lean_is_exclusive(v_impl_1075_);
if (v_isSharedCheck_1147_ == 0)
{
lean_object* v_unused_1148_; lean_object* v_unused_1149_; lean_object* v_unused_1150_; lean_object* v_unused_1151_; lean_object* v_unused_1152_; 
v_unused_1148_ = lean_ctor_get(v_impl_1075_, 4);
lean_dec(v_unused_1148_);
v_unused_1149_ = lean_ctor_get(v_impl_1075_, 3);
lean_dec(v_unused_1149_);
v_unused_1150_ = lean_ctor_get(v_impl_1075_, 2);
lean_dec(v_unused_1150_);
v_unused_1151_ = lean_ctor_get(v_impl_1075_, 1);
lean_dec(v_unused_1151_);
v_unused_1152_ = lean_ctor_get(v_impl_1075_, 0);
lean_dec(v_unused_1152_);
v___x_1142_ = v_impl_1075_;
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
else
{
lean_dec(v_impl_1075_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1145_; 
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 4, v_r_1082_);
lean_ctor_set(v___x_1142_, 3, v___x_1140_);
lean_ctor_set(v___x_1142_, 2, v_v_1080_);
lean_ctor_set(v___x_1142_, 1, v_k_1079_);
lean_ctor_set(v___x_1142_, 0, v___x_1137_);
v___x_1145_ = v___x_1142_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v___x_1137_);
lean_ctor_set(v_reuseFailAlloc_1146_, 1, v_k_1079_);
lean_ctor_set(v_reuseFailAlloc_1146_, 2, v_v_1080_);
lean_ctor_set(v_reuseFailAlloc_1146_, 3, v___x_1140_);
lean_ctor_set(v_reuseFailAlloc_1146_, 4, v_r_1082_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
return v___x_1145_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1160_; lean_object* v___x_1161_; lean_object* v___x_1163_; 
v_size_1160_ = lean_ctor_get(v_impl_1075_, 0);
v___x_1161_ = lean_nat_add(v___x_1076_, v_size_1160_);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 3, v_impl_1075_);
lean_ctor_set(v___x_1072_, 0, v___x_1161_);
v___x_1163_ = v___x_1072_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v___x_1161_);
lean_ctor_set(v_reuseFailAlloc_1164_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1164_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1164_, 3, v_impl_1075_);
lean_ctor_set(v_reuseFailAlloc_1164_, 4, v_r_1070_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
else
{
if (lean_obj_tag(v_r_1070_) == 0)
{
lean_object* v_l_1165_; 
v_l_1165_ = lean_ctor_get(v_r_1070_, 3);
lean_inc(v_l_1165_);
if (lean_obj_tag(v_l_1165_) == 0)
{
lean_object* v_r_1166_; 
v_r_1166_ = lean_ctor_get(v_r_1070_, 4);
lean_inc(v_r_1166_);
if (lean_obj_tag(v_r_1166_) == 0)
{
lean_object* v_size_1167_; lean_object* v_k_1168_; lean_object* v_v_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1182_; 
v_size_1167_ = lean_ctor_get(v_r_1070_, 0);
v_k_1168_ = lean_ctor_get(v_r_1070_, 1);
v_v_1169_ = lean_ctor_get(v_r_1070_, 2);
v_isSharedCheck_1182_ = !lean_is_exclusive(v_r_1070_);
if (v_isSharedCheck_1182_ == 0)
{
lean_object* v_unused_1183_; lean_object* v_unused_1184_; 
v_unused_1183_ = lean_ctor_get(v_r_1070_, 4);
lean_dec(v_unused_1183_);
v_unused_1184_ = lean_ctor_get(v_r_1070_, 3);
lean_dec(v_unused_1184_);
v___x_1171_ = v_r_1070_;
v_isShared_1172_ = v_isSharedCheck_1182_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_v_1169_);
lean_inc(v_k_1168_);
lean_inc(v_size_1167_);
lean_dec(v_r_1070_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1182_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v_size_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1177_; 
v_size_1173_ = lean_ctor_get(v_l_1165_, 0);
v___x_1174_ = lean_nat_add(v___x_1076_, v_size_1167_);
lean_dec(v_size_1167_);
v___x_1175_ = lean_nat_add(v___x_1076_, v_size_1173_);
if (v_isShared_1172_ == 0)
{
lean_ctor_set(v___x_1171_, 4, v_l_1165_);
lean_ctor_set(v___x_1171_, 3, v_impl_1075_);
lean_ctor_set(v___x_1171_, 2, v_v_1068_);
lean_ctor_set(v___x_1171_, 1, v_k_1067_);
lean_ctor_set(v___x_1171_, 0, v___x_1175_);
v___x_1177_ = v___x_1171_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___x_1175_);
lean_ctor_set(v_reuseFailAlloc_1181_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1181_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1181_, 3, v_impl_1075_);
lean_ctor_set(v_reuseFailAlloc_1181_, 4, v_l_1165_);
v___x_1177_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
lean_object* v___x_1179_; 
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 4, v_r_1166_);
lean_ctor_set(v___x_1072_, 3, v___x_1177_);
lean_ctor_set(v___x_1072_, 2, v_v_1169_);
lean_ctor_set(v___x_1072_, 1, v_k_1168_);
lean_ctor_set(v___x_1072_, 0, v___x_1174_);
v___x_1179_ = v___x_1072_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v___x_1174_);
lean_ctor_set(v_reuseFailAlloc_1180_, 1, v_k_1168_);
lean_ctor_set(v_reuseFailAlloc_1180_, 2, v_v_1169_);
lean_ctor_set(v_reuseFailAlloc_1180_, 3, v___x_1177_);
lean_ctor_set(v_reuseFailAlloc_1180_, 4, v_r_1166_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
}
else
{
lean_object* v_k_1185_; lean_object* v_v_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1209_; 
v_k_1185_ = lean_ctor_get(v_r_1070_, 1);
v_v_1186_ = lean_ctor_get(v_r_1070_, 2);
v_isSharedCheck_1209_ = !lean_is_exclusive(v_r_1070_);
if (v_isSharedCheck_1209_ == 0)
{
lean_object* v_unused_1210_; lean_object* v_unused_1211_; lean_object* v_unused_1212_; 
v_unused_1210_ = lean_ctor_get(v_r_1070_, 4);
lean_dec(v_unused_1210_);
v_unused_1211_ = lean_ctor_get(v_r_1070_, 3);
lean_dec(v_unused_1211_);
v_unused_1212_ = lean_ctor_get(v_r_1070_, 0);
lean_dec(v_unused_1212_);
v___x_1188_ = v_r_1070_;
v_isShared_1189_ = v_isSharedCheck_1209_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_v_1186_);
lean_inc(v_k_1185_);
lean_dec(v_r_1070_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1209_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v_k_1190_; lean_object* v_v_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1205_; 
v_k_1190_ = lean_ctor_get(v_l_1165_, 1);
v_v_1191_ = lean_ctor_get(v_l_1165_, 2);
v_isSharedCheck_1205_ = !lean_is_exclusive(v_l_1165_);
if (v_isSharedCheck_1205_ == 0)
{
lean_object* v_unused_1206_; lean_object* v_unused_1207_; lean_object* v_unused_1208_; 
v_unused_1206_ = lean_ctor_get(v_l_1165_, 4);
lean_dec(v_unused_1206_);
v_unused_1207_ = lean_ctor_get(v_l_1165_, 3);
lean_dec(v_unused_1207_);
v_unused_1208_ = lean_ctor_get(v_l_1165_, 0);
lean_dec(v_unused_1208_);
v___x_1193_ = v_l_1165_;
v_isShared_1194_ = v_isSharedCheck_1205_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_v_1191_);
lean_inc(v_k_1190_);
lean_dec(v_l_1165_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1205_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1195_; lean_object* v___x_1197_; 
v___x_1195_ = lean_unsigned_to_nat(3u);
if (v_isShared_1194_ == 0)
{
lean_ctor_set(v___x_1193_, 4, v_r_1166_);
lean_ctor_set(v___x_1193_, 3, v_r_1166_);
lean_ctor_set(v___x_1193_, 2, v_v_1068_);
lean_ctor_set(v___x_1193_, 1, v_k_1067_);
lean_ctor_set(v___x_1193_, 0, v___x_1076_);
v___x_1197_ = v___x_1193_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v___x_1076_);
lean_ctor_set(v_reuseFailAlloc_1204_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1204_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1204_, 3, v_r_1166_);
lean_ctor_set(v_reuseFailAlloc_1204_, 4, v_r_1166_);
v___x_1197_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
lean_object* v___x_1199_; 
if (v_isShared_1189_ == 0)
{
lean_ctor_set(v___x_1188_, 3, v_r_1166_);
lean_ctor_set(v___x_1188_, 0, v___x_1076_);
v___x_1199_ = v___x_1188_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v___x_1076_);
lean_ctor_set(v_reuseFailAlloc_1203_, 1, v_k_1185_);
lean_ctor_set(v_reuseFailAlloc_1203_, 2, v_v_1186_);
lean_ctor_set(v_reuseFailAlloc_1203_, 3, v_r_1166_);
lean_ctor_set(v_reuseFailAlloc_1203_, 4, v_r_1166_);
v___x_1199_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
lean_object* v___x_1201_; 
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 4, v___x_1199_);
lean_ctor_set(v___x_1072_, 3, v___x_1197_);
lean_ctor_set(v___x_1072_, 2, v_v_1191_);
lean_ctor_set(v___x_1072_, 1, v_k_1190_);
lean_ctor_set(v___x_1072_, 0, v___x_1195_);
v___x_1201_ = v___x_1072_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v___x_1195_);
lean_ctor_set(v_reuseFailAlloc_1202_, 1, v_k_1190_);
lean_ctor_set(v_reuseFailAlloc_1202_, 2, v_v_1191_);
lean_ctor_set(v_reuseFailAlloc_1202_, 3, v___x_1197_);
lean_ctor_set(v_reuseFailAlloc_1202_, 4, v___x_1199_);
v___x_1201_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
return v___x_1201_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_1213_; 
v_r_1213_ = lean_ctor_get(v_r_1070_, 4);
lean_inc(v_r_1213_);
if (lean_obj_tag(v_r_1213_) == 0)
{
lean_object* v_k_1214_; lean_object* v_v_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1226_; 
v_k_1214_ = lean_ctor_get(v_r_1070_, 1);
v_v_1215_ = lean_ctor_get(v_r_1070_, 2);
v_isSharedCheck_1226_ = !lean_is_exclusive(v_r_1070_);
if (v_isSharedCheck_1226_ == 0)
{
lean_object* v_unused_1227_; lean_object* v_unused_1228_; lean_object* v_unused_1229_; 
v_unused_1227_ = lean_ctor_get(v_r_1070_, 4);
lean_dec(v_unused_1227_);
v_unused_1228_ = lean_ctor_get(v_r_1070_, 3);
lean_dec(v_unused_1228_);
v_unused_1229_ = lean_ctor_get(v_r_1070_, 0);
lean_dec(v_unused_1229_);
v___x_1217_ = v_r_1070_;
v_isShared_1218_ = v_isSharedCheck_1226_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_v_1215_);
lean_inc(v_k_1214_);
lean_dec(v_r_1070_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1226_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1219_; lean_object* v___x_1221_; 
v___x_1219_ = lean_unsigned_to_nat(3u);
if (v_isShared_1218_ == 0)
{
lean_ctor_set(v___x_1217_, 4, v_l_1165_);
lean_ctor_set(v___x_1217_, 2, v_v_1068_);
lean_ctor_set(v___x_1217_, 1, v_k_1067_);
lean_ctor_set(v___x_1217_, 0, v___x_1076_);
v___x_1221_ = v___x_1217_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v___x_1076_);
lean_ctor_set(v_reuseFailAlloc_1225_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1225_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1225_, 3, v_l_1165_);
lean_ctor_set(v_reuseFailAlloc_1225_, 4, v_l_1165_);
v___x_1221_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
lean_object* v___x_1223_; 
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 4, v_r_1213_);
lean_ctor_set(v___x_1072_, 3, v___x_1221_);
lean_ctor_set(v___x_1072_, 2, v_v_1215_);
lean_ctor_set(v___x_1072_, 1, v_k_1214_);
lean_ctor_set(v___x_1072_, 0, v___x_1219_);
v___x_1223_ = v___x_1072_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v___x_1219_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_k_1214_);
lean_ctor_set(v_reuseFailAlloc_1224_, 2, v_v_1215_);
lean_ctor_set(v_reuseFailAlloc_1224_, 3, v___x_1221_);
lean_ctor_set(v_reuseFailAlloc_1224_, 4, v_r_1213_);
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
lean_object* v_size_1230_; lean_object* v_k_1231_; lean_object* v_v_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1243_; 
v_size_1230_ = lean_ctor_get(v_r_1070_, 0);
v_k_1231_ = lean_ctor_get(v_r_1070_, 1);
v_v_1232_ = lean_ctor_get(v_r_1070_, 2);
v_isSharedCheck_1243_ = !lean_is_exclusive(v_r_1070_);
if (v_isSharedCheck_1243_ == 0)
{
lean_object* v_unused_1244_; lean_object* v_unused_1245_; 
v_unused_1244_ = lean_ctor_get(v_r_1070_, 4);
lean_dec(v_unused_1244_);
v_unused_1245_ = lean_ctor_get(v_r_1070_, 3);
lean_dec(v_unused_1245_);
v___x_1234_ = v_r_1070_;
v_isShared_1235_ = v_isSharedCheck_1243_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_v_1232_);
lean_inc(v_k_1231_);
lean_inc(v_size_1230_);
lean_dec(v_r_1070_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1243_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1237_; 
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 3, v_r_1213_);
v___x_1237_ = v___x_1234_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v_size_1230_);
lean_ctor_set(v_reuseFailAlloc_1242_, 1, v_k_1231_);
lean_ctor_set(v_reuseFailAlloc_1242_, 2, v_v_1232_);
lean_ctor_set(v_reuseFailAlloc_1242_, 3, v_r_1213_);
lean_ctor_set(v_reuseFailAlloc_1242_, 4, v_r_1213_);
v___x_1237_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
lean_object* v___x_1238_; lean_object* v___x_1240_; 
v___x_1238_ = lean_unsigned_to_nat(2u);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 4, v___x_1237_);
lean_ctor_set(v___x_1072_, 3, v_r_1213_);
lean_ctor_set(v___x_1072_, 0, v___x_1238_);
v___x_1240_ = v___x_1072_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v___x_1238_);
lean_ctor_set(v_reuseFailAlloc_1241_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1241_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1241_, 3, v_r_1213_);
lean_ctor_set(v_reuseFailAlloc_1241_, 4, v___x_1237_);
v___x_1240_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
return v___x_1240_;
}
}
}
}
}
}
else
{
lean_object* v___x_1247_; 
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 3, v_r_1070_);
lean_ctor_set(v___x_1072_, 0, v___x_1076_);
v___x_1247_ = v___x_1072_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v___x_1076_);
lean_ctor_set(v_reuseFailAlloc_1248_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1248_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1248_, 3, v_r_1070_);
lean_ctor_set(v_reuseFailAlloc_1248_, 4, v_r_1070_);
v___x_1247_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
return v___x_1247_;
}
}
}
}
case 1:
{
lean_del_object(v___x_1072_);
lean_dec(v_v_1068_);
lean_dec(v_k_1067_);
if (lean_obj_tag(v_l_1069_) == 0)
{
if (lean_obj_tag(v_r_1070_) == 0)
{
lean_object* v_size_1249_; lean_object* v_k_1250_; lean_object* v_v_1251_; lean_object* v_l_1252_; lean_object* v_r_1253_; lean_object* v_size_1254_; lean_object* v_k_1255_; lean_object* v_v_1256_; lean_object* v_l_1257_; lean_object* v_r_1258_; lean_object* v___x_1259_; uint8_t v___x_1260_; 
v_size_1249_ = lean_ctor_get(v_l_1069_, 0);
v_k_1250_ = lean_ctor_get(v_l_1069_, 1);
v_v_1251_ = lean_ctor_get(v_l_1069_, 2);
v_l_1252_ = lean_ctor_get(v_l_1069_, 3);
v_r_1253_ = lean_ctor_get(v_l_1069_, 4);
lean_inc(v_r_1253_);
v_size_1254_ = lean_ctor_get(v_r_1070_, 0);
v_k_1255_ = lean_ctor_get(v_r_1070_, 1);
v_v_1256_ = lean_ctor_get(v_r_1070_, 2);
v_l_1257_ = lean_ctor_get(v_r_1070_, 3);
lean_inc(v_l_1257_);
v_r_1258_ = lean_ctor_get(v_r_1070_, 4);
v___x_1259_ = lean_unsigned_to_nat(1u);
v___x_1260_ = lean_nat_dec_lt(v_size_1249_, v_size_1254_);
if (v___x_1260_ == 0)
{
lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1396_; 
lean_inc(v_l_1252_);
lean_inc(v_v_1251_);
lean_inc(v_k_1250_);
v_isSharedCheck_1396_ = !lean_is_exclusive(v_l_1069_);
if (v_isSharedCheck_1396_ == 0)
{
lean_object* v_unused_1397_; lean_object* v_unused_1398_; lean_object* v_unused_1399_; lean_object* v_unused_1400_; lean_object* v_unused_1401_; 
v_unused_1397_ = lean_ctor_get(v_l_1069_, 4);
lean_dec(v_unused_1397_);
v_unused_1398_ = lean_ctor_get(v_l_1069_, 3);
lean_dec(v_unused_1398_);
v_unused_1399_ = lean_ctor_get(v_l_1069_, 2);
lean_dec(v_unused_1399_);
v_unused_1400_ = lean_ctor_get(v_l_1069_, 1);
lean_dec(v_unused_1400_);
v_unused_1401_ = lean_ctor_get(v_l_1069_, 0);
lean_dec(v_unused_1401_);
v___x_1262_ = v_l_1069_;
v_isShared_1263_ = v_isSharedCheck_1396_;
goto v_resetjp_1261_;
}
else
{
lean_dec(v_l_1069_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1396_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___x_1264_; lean_object* v_tree_1265_; 
v___x_1264_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_1250_, v_v_1251_, v_l_1252_, v_r_1253_);
v_tree_1265_ = lean_ctor_get(v___x_1264_, 2);
if (lean_obj_tag(v_tree_1265_) == 0)
{
lean_object* v_k_1266_; lean_object* v_v_1267_; lean_object* v_size_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; uint8_t v___x_1271_; 
lean_inc_ref(v_tree_1265_);
v_k_1266_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_k_1266_);
v_v_1267_ = lean_ctor_get(v___x_1264_, 1);
lean_inc(v_v_1267_);
lean_dec_ref(v___x_1264_);
v_size_1268_ = lean_ctor_get(v_tree_1265_, 0);
v___x_1269_ = lean_unsigned_to_nat(3u);
v___x_1270_ = lean_nat_mul(v___x_1269_, v_size_1268_);
v___x_1271_ = lean_nat_dec_lt(v___x_1270_, v_size_1254_);
lean_dec(v___x_1270_);
if (v___x_1271_ == 0)
{
lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1275_; 
lean_dec(v_l_1257_);
v___x_1272_ = lean_nat_add(v___x_1259_, v_size_1268_);
v___x_1273_ = lean_nat_add(v___x_1272_, v_size_1254_);
lean_dec(v___x_1272_);
if (v_isShared_1263_ == 0)
{
lean_ctor_set(v___x_1262_, 4, v_r_1070_);
lean_ctor_set(v___x_1262_, 3, v_tree_1265_);
lean_ctor_set(v___x_1262_, 2, v_v_1267_);
lean_ctor_set(v___x_1262_, 1, v_k_1266_);
lean_ctor_set(v___x_1262_, 0, v___x_1273_);
v___x_1275_ = v___x_1262_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v___x_1273_);
lean_ctor_set(v_reuseFailAlloc_1276_, 1, v_k_1266_);
lean_ctor_set(v_reuseFailAlloc_1276_, 2, v_v_1267_);
lean_ctor_set(v_reuseFailAlloc_1276_, 3, v_tree_1265_);
lean_ctor_set(v_reuseFailAlloc_1276_, 4, v_r_1070_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
else
{
lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1331_; 
lean_inc(v_r_1258_);
lean_inc(v_v_1256_);
lean_inc(v_k_1255_);
lean_inc(v_size_1254_);
v_isSharedCheck_1331_ = !lean_is_exclusive(v_r_1070_);
if (v_isSharedCheck_1331_ == 0)
{
lean_object* v_unused_1332_; lean_object* v_unused_1333_; lean_object* v_unused_1334_; lean_object* v_unused_1335_; lean_object* v_unused_1336_; 
v_unused_1332_ = lean_ctor_get(v_r_1070_, 4);
lean_dec(v_unused_1332_);
v_unused_1333_ = lean_ctor_get(v_r_1070_, 3);
lean_dec(v_unused_1333_);
v_unused_1334_ = lean_ctor_get(v_r_1070_, 2);
lean_dec(v_unused_1334_);
v_unused_1335_ = lean_ctor_get(v_r_1070_, 1);
lean_dec(v_unused_1335_);
v_unused_1336_ = lean_ctor_get(v_r_1070_, 0);
lean_dec(v_unused_1336_);
v___x_1278_ = v_r_1070_;
v_isShared_1279_ = v_isSharedCheck_1331_;
goto v_resetjp_1277_;
}
else
{
lean_dec(v_r_1070_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1331_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v_size_1280_; lean_object* v_k_1281_; lean_object* v_v_1282_; lean_object* v_l_1283_; lean_object* v_r_1284_; lean_object* v_size_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; uint8_t v___x_1288_; 
v_size_1280_ = lean_ctor_get(v_l_1257_, 0);
v_k_1281_ = lean_ctor_get(v_l_1257_, 1);
v_v_1282_ = lean_ctor_get(v_l_1257_, 2);
v_l_1283_ = lean_ctor_get(v_l_1257_, 3);
v_r_1284_ = lean_ctor_get(v_l_1257_, 4);
v_size_1285_ = lean_ctor_get(v_r_1258_, 0);
v___x_1286_ = lean_unsigned_to_nat(2u);
v___x_1287_ = lean_nat_mul(v___x_1286_, v_size_1285_);
v___x_1288_ = lean_nat_dec_lt(v_size_1280_, v___x_1287_);
lean_dec(v___x_1287_);
if (v___x_1288_ == 0)
{
lean_object* v___x_1290_; uint8_t v_isShared_1291_; uint8_t v_isSharedCheck_1316_; 
lean_inc(v_r_1284_);
lean_inc(v_l_1283_);
lean_inc(v_v_1282_);
lean_inc(v_k_1281_);
v_isSharedCheck_1316_ = !lean_is_exclusive(v_l_1257_);
if (v_isSharedCheck_1316_ == 0)
{
lean_object* v_unused_1317_; lean_object* v_unused_1318_; lean_object* v_unused_1319_; lean_object* v_unused_1320_; lean_object* v_unused_1321_; 
v_unused_1317_ = lean_ctor_get(v_l_1257_, 4);
lean_dec(v_unused_1317_);
v_unused_1318_ = lean_ctor_get(v_l_1257_, 3);
lean_dec(v_unused_1318_);
v_unused_1319_ = lean_ctor_get(v_l_1257_, 2);
lean_dec(v_unused_1319_);
v_unused_1320_ = lean_ctor_get(v_l_1257_, 1);
lean_dec(v_unused_1320_);
v_unused_1321_ = lean_ctor_get(v_l_1257_, 0);
lean_dec(v_unused_1321_);
v___x_1290_ = v_l_1257_;
v_isShared_1291_ = v_isSharedCheck_1316_;
goto v_resetjp_1289_;
}
else
{
lean_dec(v_l_1257_);
v___x_1290_ = lean_box(0);
v_isShared_1291_ = v_isSharedCheck_1316_;
goto v_resetjp_1289_;
}
v_resetjp_1289_:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___y_1295_; lean_object* v___y_1296_; lean_object* v___y_1297_; lean_object* v___y_1306_; 
v___x_1292_ = lean_nat_add(v___x_1259_, v_size_1268_);
v___x_1293_ = lean_nat_add(v___x_1292_, v_size_1254_);
lean_dec(v_size_1254_);
if (lean_obj_tag(v_l_1283_) == 0)
{
lean_object* v_size_1314_; 
v_size_1314_ = lean_ctor_get(v_l_1283_, 0);
lean_inc(v_size_1314_);
v___y_1306_ = v_size_1314_;
goto v___jp_1305_;
}
else
{
lean_object* v___x_1315_; 
v___x_1315_ = lean_unsigned_to_nat(0u);
v___y_1306_ = v___x_1315_;
goto v___jp_1305_;
}
v___jp_1294_:
{
lean_object* v___x_1298_; lean_object* v___x_1300_; 
v___x_1298_ = lean_nat_add(v___y_1296_, v___y_1297_);
lean_dec(v___y_1297_);
lean_dec(v___y_1296_);
if (v_isShared_1291_ == 0)
{
lean_ctor_set(v___x_1290_, 4, v_r_1258_);
lean_ctor_set(v___x_1290_, 3, v_r_1284_);
lean_ctor_set(v___x_1290_, 2, v_v_1256_);
lean_ctor_set(v___x_1290_, 1, v_k_1255_);
lean_ctor_set(v___x_1290_, 0, v___x_1298_);
v___x_1300_ = v___x_1290_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v___x_1298_);
lean_ctor_set(v_reuseFailAlloc_1304_, 1, v_k_1255_);
lean_ctor_set(v_reuseFailAlloc_1304_, 2, v_v_1256_);
lean_ctor_set(v_reuseFailAlloc_1304_, 3, v_r_1284_);
lean_ctor_set(v_reuseFailAlloc_1304_, 4, v_r_1258_);
v___x_1300_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
lean_object* v___x_1302_; 
if (v_isShared_1279_ == 0)
{
lean_ctor_set(v___x_1278_, 4, v___x_1300_);
lean_ctor_set(v___x_1278_, 3, v___y_1295_);
lean_ctor_set(v___x_1278_, 2, v_v_1282_);
lean_ctor_set(v___x_1278_, 1, v_k_1281_);
lean_ctor_set(v___x_1278_, 0, v___x_1293_);
v___x_1302_ = v___x_1278_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v___x_1293_);
lean_ctor_set(v_reuseFailAlloc_1303_, 1, v_k_1281_);
lean_ctor_set(v_reuseFailAlloc_1303_, 2, v_v_1282_);
lean_ctor_set(v_reuseFailAlloc_1303_, 3, v___y_1295_);
lean_ctor_set(v_reuseFailAlloc_1303_, 4, v___x_1300_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
return v___x_1302_;
}
}
}
v___jp_1305_:
{
lean_object* v___x_1307_; lean_object* v___x_1309_; 
v___x_1307_ = lean_nat_add(v___x_1292_, v___y_1306_);
lean_dec(v___y_1306_);
lean_dec(v___x_1292_);
if (v_isShared_1263_ == 0)
{
lean_ctor_set(v___x_1262_, 4, v_l_1283_);
lean_ctor_set(v___x_1262_, 3, v_tree_1265_);
lean_ctor_set(v___x_1262_, 2, v_v_1267_);
lean_ctor_set(v___x_1262_, 1, v_k_1266_);
lean_ctor_set(v___x_1262_, 0, v___x_1307_);
v___x_1309_ = v___x_1262_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v___x_1307_);
lean_ctor_set(v_reuseFailAlloc_1313_, 1, v_k_1266_);
lean_ctor_set(v_reuseFailAlloc_1313_, 2, v_v_1267_);
lean_ctor_set(v_reuseFailAlloc_1313_, 3, v_tree_1265_);
lean_ctor_set(v_reuseFailAlloc_1313_, 4, v_l_1283_);
v___x_1309_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
lean_object* v___x_1310_; 
v___x_1310_ = lean_nat_add(v___x_1259_, v_size_1285_);
if (lean_obj_tag(v_r_1284_) == 0)
{
lean_object* v_size_1311_; 
v_size_1311_ = lean_ctor_get(v_r_1284_, 0);
lean_inc(v_size_1311_);
v___y_1295_ = v___x_1309_;
v___y_1296_ = v___x_1310_;
v___y_1297_ = v_size_1311_;
goto v___jp_1294_;
}
else
{
lean_object* v___x_1312_; 
v___x_1312_ = lean_unsigned_to_nat(0u);
v___y_1295_ = v___x_1309_;
v___y_1296_ = v___x_1310_;
v___y_1297_ = v___x_1312_;
goto v___jp_1294_;
}
}
}
}
}
else
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1326_; 
v___x_1322_ = lean_nat_add(v___x_1259_, v_size_1268_);
v___x_1323_ = lean_nat_add(v___x_1322_, v_size_1254_);
lean_dec(v_size_1254_);
v___x_1324_ = lean_nat_add(v___x_1322_, v_size_1280_);
lean_dec(v___x_1322_);
if (v_isShared_1279_ == 0)
{
lean_ctor_set(v___x_1278_, 4, v_l_1257_);
lean_ctor_set(v___x_1278_, 3, v_tree_1265_);
lean_ctor_set(v___x_1278_, 2, v_v_1267_);
lean_ctor_set(v___x_1278_, 1, v_k_1266_);
lean_ctor_set(v___x_1278_, 0, v___x_1324_);
v___x_1326_ = v___x_1278_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v___x_1324_);
lean_ctor_set(v_reuseFailAlloc_1330_, 1, v_k_1266_);
lean_ctor_set(v_reuseFailAlloc_1330_, 2, v_v_1267_);
lean_ctor_set(v_reuseFailAlloc_1330_, 3, v_tree_1265_);
lean_ctor_set(v_reuseFailAlloc_1330_, 4, v_l_1257_);
v___x_1326_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
lean_object* v___x_1328_; 
if (v_isShared_1263_ == 0)
{
lean_ctor_set(v___x_1262_, 4, v_r_1258_);
lean_ctor_set(v___x_1262_, 3, v___x_1326_);
lean_ctor_set(v___x_1262_, 2, v_v_1256_);
lean_ctor_set(v___x_1262_, 1, v_k_1255_);
lean_ctor_set(v___x_1262_, 0, v___x_1323_);
v___x_1328_ = v___x_1262_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v___x_1323_);
lean_ctor_set(v_reuseFailAlloc_1329_, 1, v_k_1255_);
lean_ctor_set(v_reuseFailAlloc_1329_, 2, v_v_1256_);
lean_ctor_set(v_reuseFailAlloc_1329_, 3, v___x_1326_);
lean_ctor_set(v_reuseFailAlloc_1329_, 4, v_r_1258_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
}
}
}
else
{
lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1390_; 
lean_inc(v_r_1258_);
lean_inc(v_v_1256_);
lean_inc(v_k_1255_);
lean_inc(v_size_1254_);
v_isSharedCheck_1390_ = !lean_is_exclusive(v_r_1070_);
if (v_isSharedCheck_1390_ == 0)
{
lean_object* v_unused_1391_; lean_object* v_unused_1392_; lean_object* v_unused_1393_; lean_object* v_unused_1394_; lean_object* v_unused_1395_; 
v_unused_1391_ = lean_ctor_get(v_r_1070_, 4);
lean_dec(v_unused_1391_);
v_unused_1392_ = lean_ctor_get(v_r_1070_, 3);
lean_dec(v_unused_1392_);
v_unused_1393_ = lean_ctor_get(v_r_1070_, 2);
lean_dec(v_unused_1393_);
v_unused_1394_ = lean_ctor_get(v_r_1070_, 1);
lean_dec(v_unused_1394_);
v_unused_1395_ = lean_ctor_get(v_r_1070_, 0);
lean_dec(v_unused_1395_);
v___x_1338_ = v_r_1070_;
v_isShared_1339_ = v_isSharedCheck_1390_;
goto v_resetjp_1337_;
}
else
{
lean_dec(v_r_1070_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1390_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
if (lean_obj_tag(v_l_1257_) == 0)
{
if (lean_obj_tag(v_r_1258_) == 0)
{
lean_object* v_k_1340_; lean_object* v_v_1341_; lean_object* v_size_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1346_; 
lean_inc(v_tree_1265_);
v_k_1340_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_k_1340_);
v_v_1341_ = lean_ctor_get(v___x_1264_, 1);
lean_inc(v_v_1341_);
lean_dec_ref(v___x_1264_);
v_size_1342_ = lean_ctor_get(v_l_1257_, 0);
v___x_1343_ = lean_nat_add(v___x_1259_, v_size_1254_);
lean_dec(v_size_1254_);
v___x_1344_ = lean_nat_add(v___x_1259_, v_size_1342_);
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 4, v_l_1257_);
lean_ctor_set(v___x_1338_, 3, v_tree_1265_);
lean_ctor_set(v___x_1338_, 2, v_v_1341_);
lean_ctor_set(v___x_1338_, 1, v_k_1340_);
lean_ctor_set(v___x_1338_, 0, v___x_1344_);
v___x_1346_ = v___x_1338_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v___x_1344_);
lean_ctor_set(v_reuseFailAlloc_1350_, 1, v_k_1340_);
lean_ctor_set(v_reuseFailAlloc_1350_, 2, v_v_1341_);
lean_ctor_set(v_reuseFailAlloc_1350_, 3, v_tree_1265_);
lean_ctor_set(v_reuseFailAlloc_1350_, 4, v_l_1257_);
v___x_1346_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
lean_object* v___x_1348_; 
if (v_isShared_1263_ == 0)
{
lean_ctor_set(v___x_1262_, 4, v_r_1258_);
lean_ctor_set(v___x_1262_, 3, v___x_1346_);
lean_ctor_set(v___x_1262_, 2, v_v_1256_);
lean_ctor_set(v___x_1262_, 1, v_k_1255_);
lean_ctor_set(v___x_1262_, 0, v___x_1343_);
v___x_1348_ = v___x_1262_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v___x_1343_);
lean_ctor_set(v_reuseFailAlloc_1349_, 1, v_k_1255_);
lean_ctor_set(v_reuseFailAlloc_1349_, 2, v_v_1256_);
lean_ctor_set(v_reuseFailAlloc_1349_, 3, v___x_1346_);
lean_ctor_set(v_reuseFailAlloc_1349_, 4, v_r_1258_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
}
else
{
lean_object* v_k_1351_; lean_object* v_v_1352_; lean_object* v_k_1353_; lean_object* v_v_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1368_; 
lean_dec(v_size_1254_);
v_k_1351_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_k_1351_);
v_v_1352_ = lean_ctor_get(v___x_1264_, 1);
lean_inc(v_v_1352_);
lean_dec_ref(v___x_1264_);
v_k_1353_ = lean_ctor_get(v_l_1257_, 1);
v_v_1354_ = lean_ctor_get(v_l_1257_, 2);
v_isSharedCheck_1368_ = !lean_is_exclusive(v_l_1257_);
if (v_isSharedCheck_1368_ == 0)
{
lean_object* v_unused_1369_; lean_object* v_unused_1370_; lean_object* v_unused_1371_; 
v_unused_1369_ = lean_ctor_get(v_l_1257_, 4);
lean_dec(v_unused_1369_);
v_unused_1370_ = lean_ctor_get(v_l_1257_, 3);
lean_dec(v_unused_1370_);
v_unused_1371_ = lean_ctor_get(v_l_1257_, 0);
lean_dec(v_unused_1371_);
v___x_1356_ = v_l_1257_;
v_isShared_1357_ = v_isSharedCheck_1368_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_v_1354_);
lean_inc(v_k_1353_);
lean_dec(v_l_1257_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1368_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
lean_object* v___x_1358_; lean_object* v___x_1360_; 
v___x_1358_ = lean_unsigned_to_nat(3u);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 4, v_r_1258_);
lean_ctor_set(v___x_1356_, 3, v_r_1258_);
lean_ctor_set(v___x_1356_, 2, v_v_1352_);
lean_ctor_set(v___x_1356_, 1, v_k_1351_);
lean_ctor_set(v___x_1356_, 0, v___x_1259_);
v___x_1360_ = v___x_1356_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v___x_1259_);
lean_ctor_set(v_reuseFailAlloc_1367_, 1, v_k_1351_);
lean_ctor_set(v_reuseFailAlloc_1367_, 2, v_v_1352_);
lean_ctor_set(v_reuseFailAlloc_1367_, 3, v_r_1258_);
lean_ctor_set(v_reuseFailAlloc_1367_, 4, v_r_1258_);
v___x_1360_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
lean_object* v___x_1362_; 
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 3, v_r_1258_);
lean_ctor_set(v___x_1338_, 0, v___x_1259_);
v___x_1362_ = v___x_1338_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v___x_1259_);
lean_ctor_set(v_reuseFailAlloc_1366_, 1, v_k_1255_);
lean_ctor_set(v_reuseFailAlloc_1366_, 2, v_v_1256_);
lean_ctor_set(v_reuseFailAlloc_1366_, 3, v_r_1258_);
lean_ctor_set(v_reuseFailAlloc_1366_, 4, v_r_1258_);
v___x_1362_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
lean_object* v___x_1364_; 
if (v_isShared_1263_ == 0)
{
lean_ctor_set(v___x_1262_, 4, v___x_1362_);
lean_ctor_set(v___x_1262_, 3, v___x_1360_);
lean_ctor_set(v___x_1262_, 2, v_v_1354_);
lean_ctor_set(v___x_1262_, 1, v_k_1353_);
lean_ctor_set(v___x_1262_, 0, v___x_1358_);
v___x_1364_ = v___x_1262_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v___x_1358_);
lean_ctor_set(v_reuseFailAlloc_1365_, 1, v_k_1353_);
lean_ctor_set(v_reuseFailAlloc_1365_, 2, v_v_1354_);
lean_ctor_set(v_reuseFailAlloc_1365_, 3, v___x_1360_);
lean_ctor_set(v_reuseFailAlloc_1365_, 4, v___x_1362_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
return v___x_1364_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_1258_) == 0)
{
lean_object* v_k_1372_; lean_object* v_v_1373_; lean_object* v___x_1374_; lean_object* v___x_1376_; 
lean_dec(v_size_1254_);
v_k_1372_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_k_1372_);
v_v_1373_ = lean_ctor_get(v___x_1264_, 1);
lean_inc(v_v_1373_);
lean_dec_ref(v___x_1264_);
v___x_1374_ = lean_unsigned_to_nat(3u);
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 4, v_l_1257_);
lean_ctor_set(v___x_1338_, 2, v_v_1373_);
lean_ctor_set(v___x_1338_, 1, v_k_1372_);
lean_ctor_set(v___x_1338_, 0, v___x_1259_);
v___x_1376_ = v___x_1338_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v___x_1259_);
lean_ctor_set(v_reuseFailAlloc_1380_, 1, v_k_1372_);
lean_ctor_set(v_reuseFailAlloc_1380_, 2, v_v_1373_);
lean_ctor_set(v_reuseFailAlloc_1380_, 3, v_l_1257_);
lean_ctor_set(v_reuseFailAlloc_1380_, 4, v_l_1257_);
v___x_1376_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
lean_object* v___x_1378_; 
if (v_isShared_1263_ == 0)
{
lean_ctor_set(v___x_1262_, 4, v_r_1258_);
lean_ctor_set(v___x_1262_, 3, v___x_1376_);
lean_ctor_set(v___x_1262_, 2, v_v_1256_);
lean_ctor_set(v___x_1262_, 1, v_k_1255_);
lean_ctor_set(v___x_1262_, 0, v___x_1374_);
v___x_1378_ = v___x_1262_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v___x_1374_);
lean_ctor_set(v_reuseFailAlloc_1379_, 1, v_k_1255_);
lean_ctor_set(v_reuseFailAlloc_1379_, 2, v_v_1256_);
lean_ctor_set(v_reuseFailAlloc_1379_, 3, v___x_1376_);
lean_ctor_set(v_reuseFailAlloc_1379_, 4, v_r_1258_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
return v___x_1378_;
}
}
}
else
{
lean_object* v_k_1381_; lean_object* v_v_1382_; lean_object* v___x_1384_; 
v_k_1381_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_k_1381_);
v_v_1382_ = lean_ctor_get(v___x_1264_, 1);
lean_inc(v_v_1382_);
lean_dec_ref(v___x_1264_);
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 3, v_r_1258_);
v___x_1384_ = v___x_1338_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_size_1254_);
lean_ctor_set(v_reuseFailAlloc_1389_, 1, v_k_1255_);
lean_ctor_set(v_reuseFailAlloc_1389_, 2, v_v_1256_);
lean_ctor_set(v_reuseFailAlloc_1389_, 3, v_r_1258_);
lean_ctor_set(v_reuseFailAlloc_1389_, 4, v_r_1258_);
v___x_1384_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
lean_object* v___x_1385_; lean_object* v___x_1387_; 
v___x_1385_ = lean_unsigned_to_nat(2u);
if (v_isShared_1263_ == 0)
{
lean_ctor_set(v___x_1262_, 4, v___x_1384_);
lean_ctor_set(v___x_1262_, 3, v_r_1258_);
lean_ctor_set(v___x_1262_, 2, v_v_1382_);
lean_ctor_set(v___x_1262_, 1, v_k_1381_);
lean_ctor_set(v___x_1262_, 0, v___x_1385_);
v___x_1387_ = v___x_1262_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v___x_1385_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v_k_1381_);
lean_ctor_set(v_reuseFailAlloc_1388_, 2, v_v_1382_);
lean_ctor_set(v_reuseFailAlloc_1388_, 3, v_r_1258_);
lean_ctor_set(v_reuseFailAlloc_1388_, 4, v___x_1384_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
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
lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1554_; 
lean_inc(v_r_1258_);
lean_inc(v_v_1256_);
lean_inc(v_k_1255_);
v_isSharedCheck_1554_ = !lean_is_exclusive(v_r_1070_);
if (v_isSharedCheck_1554_ == 0)
{
lean_object* v_unused_1555_; lean_object* v_unused_1556_; lean_object* v_unused_1557_; lean_object* v_unused_1558_; lean_object* v_unused_1559_; 
v_unused_1555_ = lean_ctor_get(v_r_1070_, 4);
lean_dec(v_unused_1555_);
v_unused_1556_ = lean_ctor_get(v_r_1070_, 3);
lean_dec(v_unused_1556_);
v_unused_1557_ = lean_ctor_get(v_r_1070_, 2);
lean_dec(v_unused_1557_);
v_unused_1558_ = lean_ctor_get(v_r_1070_, 1);
lean_dec(v_unused_1558_);
v_unused_1559_ = lean_ctor_get(v_r_1070_, 0);
lean_dec(v_unused_1559_);
v___x_1403_ = v_r_1070_;
v_isShared_1404_ = v_isSharedCheck_1554_;
goto v_resetjp_1402_;
}
else
{
lean_dec(v_r_1070_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1554_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1405_; lean_object* v_tree_1406_; 
v___x_1405_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_1255_, v_v_1256_, v_l_1257_, v_r_1258_);
v_tree_1406_ = lean_ctor_get(v___x_1405_, 2);
lean_inc(v_tree_1406_);
if (lean_obj_tag(v_tree_1406_) == 0)
{
lean_object* v_k_1407_; lean_object* v_v_1408_; lean_object* v_size_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; uint8_t v___x_1412_; 
v_k_1407_ = lean_ctor_get(v___x_1405_, 0);
lean_inc(v_k_1407_);
v_v_1408_ = lean_ctor_get(v___x_1405_, 1);
lean_inc(v_v_1408_);
lean_dec_ref(v___x_1405_);
v_size_1409_ = lean_ctor_get(v_tree_1406_, 0);
v___x_1410_ = lean_unsigned_to_nat(3u);
v___x_1411_ = lean_nat_mul(v___x_1410_, v_size_1409_);
v___x_1412_ = lean_nat_dec_lt(v___x_1411_, v_size_1249_);
lean_dec(v___x_1411_);
if (v___x_1412_ == 0)
{
lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1416_; 
lean_dec(v_r_1253_);
v___x_1413_ = lean_nat_add(v___x_1259_, v_size_1249_);
v___x_1414_ = lean_nat_add(v___x_1413_, v_size_1409_);
lean_dec(v___x_1413_);
if (v_isShared_1404_ == 0)
{
lean_ctor_set(v___x_1403_, 4, v_tree_1406_);
lean_ctor_set(v___x_1403_, 3, v_l_1069_);
lean_ctor_set(v___x_1403_, 2, v_v_1408_);
lean_ctor_set(v___x_1403_, 1, v_k_1407_);
lean_ctor_set(v___x_1403_, 0, v___x_1414_);
v___x_1416_ = v___x_1403_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v___x_1414_);
lean_ctor_set(v_reuseFailAlloc_1417_, 1, v_k_1407_);
lean_ctor_set(v_reuseFailAlloc_1417_, 2, v_v_1408_);
lean_ctor_set(v_reuseFailAlloc_1417_, 3, v_l_1069_);
lean_ctor_set(v_reuseFailAlloc_1417_, 4, v_tree_1406_);
v___x_1416_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
return v___x_1416_;
}
}
else
{
lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1483_; 
lean_inc(v_l_1252_);
lean_inc(v_v_1251_);
lean_inc(v_k_1250_);
lean_inc(v_size_1249_);
v_isSharedCheck_1483_ = !lean_is_exclusive(v_l_1069_);
if (v_isSharedCheck_1483_ == 0)
{
lean_object* v_unused_1484_; lean_object* v_unused_1485_; lean_object* v_unused_1486_; lean_object* v_unused_1487_; lean_object* v_unused_1488_; 
v_unused_1484_ = lean_ctor_get(v_l_1069_, 4);
lean_dec(v_unused_1484_);
v_unused_1485_ = lean_ctor_get(v_l_1069_, 3);
lean_dec(v_unused_1485_);
v_unused_1486_ = lean_ctor_get(v_l_1069_, 2);
lean_dec(v_unused_1486_);
v_unused_1487_ = lean_ctor_get(v_l_1069_, 1);
lean_dec(v_unused_1487_);
v_unused_1488_ = lean_ctor_get(v_l_1069_, 0);
lean_dec(v_unused_1488_);
v___x_1419_ = v_l_1069_;
v_isShared_1420_ = v_isSharedCheck_1483_;
goto v_resetjp_1418_;
}
else
{
lean_dec(v_l_1069_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1483_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v_size_1421_; lean_object* v_size_1422_; lean_object* v_k_1423_; lean_object* v_v_1424_; lean_object* v_l_1425_; lean_object* v_r_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; uint8_t v___x_1429_; 
v_size_1421_ = lean_ctor_get(v_l_1252_, 0);
v_size_1422_ = lean_ctor_get(v_r_1253_, 0);
v_k_1423_ = lean_ctor_get(v_r_1253_, 1);
v_v_1424_ = lean_ctor_get(v_r_1253_, 2);
v_l_1425_ = lean_ctor_get(v_r_1253_, 3);
v_r_1426_ = lean_ctor_get(v_r_1253_, 4);
v___x_1427_ = lean_unsigned_to_nat(2u);
v___x_1428_ = lean_nat_mul(v___x_1427_, v_size_1421_);
v___x_1429_ = lean_nat_dec_lt(v_size_1422_, v___x_1428_);
lean_dec(v___x_1428_);
if (v___x_1429_ == 0)
{
lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1467_; 
lean_inc(v_r_1426_);
lean_inc(v_l_1425_);
lean_inc(v_v_1424_);
lean_inc(v_k_1423_);
lean_del_object(v___x_1419_);
v_isSharedCheck_1467_ = !lean_is_exclusive(v_r_1253_);
if (v_isSharedCheck_1467_ == 0)
{
lean_object* v_unused_1468_; lean_object* v_unused_1469_; lean_object* v_unused_1470_; lean_object* v_unused_1471_; lean_object* v_unused_1472_; 
v_unused_1468_ = lean_ctor_get(v_r_1253_, 4);
lean_dec(v_unused_1468_);
v_unused_1469_ = lean_ctor_get(v_r_1253_, 3);
lean_dec(v_unused_1469_);
v_unused_1470_ = lean_ctor_get(v_r_1253_, 2);
lean_dec(v_unused_1470_);
v_unused_1471_ = lean_ctor_get(v_r_1253_, 1);
lean_dec(v_unused_1471_);
v_unused_1472_ = lean_ctor_get(v_r_1253_, 0);
lean_dec(v_unused_1472_);
v___x_1431_ = v_r_1253_;
v_isShared_1432_ = v_isSharedCheck_1467_;
goto v_resetjp_1430_;
}
else
{
lean_dec(v_r_1253_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1467_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___y_1436_; lean_object* v___y_1437_; lean_object* v___y_1438_; lean_object* v___x_1455_; lean_object* v___y_1457_; 
v___x_1433_ = lean_nat_add(v___x_1259_, v_size_1249_);
lean_dec(v_size_1249_);
v___x_1434_ = lean_nat_add(v___x_1433_, v_size_1409_);
lean_dec(v___x_1433_);
v___x_1455_ = lean_nat_add(v___x_1259_, v_size_1421_);
if (lean_obj_tag(v_l_1425_) == 0)
{
lean_object* v_size_1465_; 
v_size_1465_ = lean_ctor_get(v_l_1425_, 0);
lean_inc(v_size_1465_);
v___y_1457_ = v_size_1465_;
goto v___jp_1456_;
}
else
{
lean_object* v___x_1466_; 
v___x_1466_ = lean_unsigned_to_nat(0u);
v___y_1457_ = v___x_1466_;
goto v___jp_1456_;
}
v___jp_1435_:
{
lean_object* v___x_1439_; lean_object* v___x_1441_; 
v___x_1439_ = lean_nat_add(v___y_1436_, v___y_1438_);
lean_dec(v___y_1438_);
lean_dec(v___y_1436_);
lean_inc_ref(v_tree_1406_);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 4, v_tree_1406_);
lean_ctor_set(v___x_1431_, 3, v_r_1426_);
lean_ctor_set(v___x_1431_, 2, v_v_1408_);
lean_ctor_set(v___x_1431_, 1, v_k_1407_);
lean_ctor_set(v___x_1431_, 0, v___x_1439_);
v___x_1441_ = v___x_1431_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v___x_1439_);
lean_ctor_set(v_reuseFailAlloc_1454_, 1, v_k_1407_);
lean_ctor_set(v_reuseFailAlloc_1454_, 2, v_v_1408_);
lean_ctor_set(v_reuseFailAlloc_1454_, 3, v_r_1426_);
lean_ctor_set(v_reuseFailAlloc_1454_, 4, v_tree_1406_);
v___x_1441_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1448_; 
v_isSharedCheck_1448_ = !lean_is_exclusive(v_tree_1406_);
if (v_isSharedCheck_1448_ == 0)
{
lean_object* v_unused_1449_; lean_object* v_unused_1450_; lean_object* v_unused_1451_; lean_object* v_unused_1452_; lean_object* v_unused_1453_; 
v_unused_1449_ = lean_ctor_get(v_tree_1406_, 4);
lean_dec(v_unused_1449_);
v_unused_1450_ = lean_ctor_get(v_tree_1406_, 3);
lean_dec(v_unused_1450_);
v_unused_1451_ = lean_ctor_get(v_tree_1406_, 2);
lean_dec(v_unused_1451_);
v_unused_1452_ = lean_ctor_get(v_tree_1406_, 1);
lean_dec(v_unused_1452_);
v_unused_1453_ = lean_ctor_get(v_tree_1406_, 0);
lean_dec(v_unused_1453_);
v___x_1443_ = v_tree_1406_;
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
else
{
lean_dec(v_tree_1406_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1446_; 
if (v_isShared_1444_ == 0)
{
lean_ctor_set(v___x_1443_, 4, v___x_1441_);
lean_ctor_set(v___x_1443_, 3, v___y_1437_);
lean_ctor_set(v___x_1443_, 2, v_v_1424_);
lean_ctor_set(v___x_1443_, 1, v_k_1423_);
lean_ctor_set(v___x_1443_, 0, v___x_1434_);
v___x_1446_ = v___x_1443_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v___x_1434_);
lean_ctor_set(v_reuseFailAlloc_1447_, 1, v_k_1423_);
lean_ctor_set(v_reuseFailAlloc_1447_, 2, v_v_1424_);
lean_ctor_set(v_reuseFailAlloc_1447_, 3, v___y_1437_);
lean_ctor_set(v_reuseFailAlloc_1447_, 4, v___x_1441_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
}
}
v___jp_1456_:
{
lean_object* v___x_1458_; lean_object* v___x_1460_; 
v___x_1458_ = lean_nat_add(v___x_1455_, v___y_1457_);
lean_dec(v___y_1457_);
lean_dec(v___x_1455_);
if (v_isShared_1404_ == 0)
{
lean_ctor_set(v___x_1403_, 4, v_l_1425_);
lean_ctor_set(v___x_1403_, 3, v_l_1252_);
lean_ctor_set(v___x_1403_, 2, v_v_1251_);
lean_ctor_set(v___x_1403_, 1, v_k_1250_);
lean_ctor_set(v___x_1403_, 0, v___x_1458_);
v___x_1460_ = v___x_1403_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v___x_1458_);
lean_ctor_set(v_reuseFailAlloc_1464_, 1, v_k_1250_);
lean_ctor_set(v_reuseFailAlloc_1464_, 2, v_v_1251_);
lean_ctor_set(v_reuseFailAlloc_1464_, 3, v_l_1252_);
lean_ctor_set(v_reuseFailAlloc_1464_, 4, v_l_1425_);
v___x_1460_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
lean_object* v___x_1461_; 
v___x_1461_ = lean_nat_add(v___x_1259_, v_size_1409_);
if (lean_obj_tag(v_r_1426_) == 0)
{
lean_object* v_size_1462_; 
v_size_1462_ = lean_ctor_get(v_r_1426_, 0);
lean_inc(v_size_1462_);
v___y_1436_ = v___x_1461_;
v___y_1437_ = v___x_1460_;
v___y_1438_ = v_size_1462_;
goto v___jp_1435_;
}
else
{
lean_object* v___x_1463_; 
v___x_1463_ = lean_unsigned_to_nat(0u);
v___y_1436_ = v___x_1461_;
v___y_1437_ = v___x_1460_;
v___y_1438_ = v___x_1463_;
goto v___jp_1435_;
}
}
}
}
}
else
{
lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1478_; 
v___x_1473_ = lean_nat_add(v___x_1259_, v_size_1249_);
lean_dec(v_size_1249_);
v___x_1474_ = lean_nat_add(v___x_1473_, v_size_1409_);
lean_dec(v___x_1473_);
v___x_1475_ = lean_nat_add(v___x_1259_, v_size_1409_);
v___x_1476_ = lean_nat_add(v___x_1475_, v_size_1422_);
lean_dec(v___x_1475_);
if (v_isShared_1404_ == 0)
{
lean_ctor_set(v___x_1403_, 4, v_tree_1406_);
lean_ctor_set(v___x_1403_, 3, v_r_1253_);
lean_ctor_set(v___x_1403_, 2, v_v_1408_);
lean_ctor_set(v___x_1403_, 1, v_k_1407_);
lean_ctor_set(v___x_1403_, 0, v___x_1476_);
v___x_1478_ = v___x_1403_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v___x_1476_);
lean_ctor_set(v_reuseFailAlloc_1482_, 1, v_k_1407_);
lean_ctor_set(v_reuseFailAlloc_1482_, 2, v_v_1408_);
lean_ctor_set(v_reuseFailAlloc_1482_, 3, v_r_1253_);
lean_ctor_set(v_reuseFailAlloc_1482_, 4, v_tree_1406_);
v___x_1478_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
lean_object* v___x_1480_; 
if (v_isShared_1420_ == 0)
{
lean_ctor_set(v___x_1419_, 4, v___x_1478_);
lean_ctor_set(v___x_1419_, 0, v___x_1474_);
v___x_1480_ = v___x_1419_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v___x_1474_);
lean_ctor_set(v_reuseFailAlloc_1481_, 1, v_k_1250_);
lean_ctor_set(v_reuseFailAlloc_1481_, 2, v_v_1251_);
lean_ctor_set(v_reuseFailAlloc_1481_, 3, v_l_1252_);
lean_ctor_set(v_reuseFailAlloc_1481_, 4, v___x_1478_);
v___x_1480_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
return v___x_1480_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_1252_) == 0)
{
lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1512_; 
lean_inc_ref(v_l_1252_);
lean_inc(v_v_1251_);
lean_inc(v_k_1250_);
lean_inc(v_size_1249_);
v_isSharedCheck_1512_ = !lean_is_exclusive(v_l_1069_);
if (v_isSharedCheck_1512_ == 0)
{
lean_object* v_unused_1513_; lean_object* v_unused_1514_; lean_object* v_unused_1515_; lean_object* v_unused_1516_; lean_object* v_unused_1517_; 
v_unused_1513_ = lean_ctor_get(v_l_1069_, 4);
lean_dec(v_unused_1513_);
v_unused_1514_ = lean_ctor_get(v_l_1069_, 3);
lean_dec(v_unused_1514_);
v_unused_1515_ = lean_ctor_get(v_l_1069_, 2);
lean_dec(v_unused_1515_);
v_unused_1516_ = lean_ctor_get(v_l_1069_, 1);
lean_dec(v_unused_1516_);
v_unused_1517_ = lean_ctor_get(v_l_1069_, 0);
lean_dec(v_unused_1517_);
v___x_1490_ = v_l_1069_;
v_isShared_1491_ = v_isSharedCheck_1512_;
goto v_resetjp_1489_;
}
else
{
lean_dec(v_l_1069_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1512_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
if (lean_obj_tag(v_r_1253_) == 0)
{
lean_object* v_k_1492_; lean_object* v_v_1493_; lean_object* v_size_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1498_; 
v_k_1492_ = lean_ctor_get(v___x_1405_, 0);
lean_inc(v_k_1492_);
v_v_1493_ = lean_ctor_get(v___x_1405_, 1);
lean_inc(v_v_1493_);
lean_dec_ref(v___x_1405_);
v_size_1494_ = lean_ctor_get(v_r_1253_, 0);
v___x_1495_ = lean_nat_add(v___x_1259_, v_size_1249_);
lean_dec(v_size_1249_);
v___x_1496_ = lean_nat_add(v___x_1259_, v_size_1494_);
if (v_isShared_1404_ == 0)
{
lean_ctor_set(v___x_1403_, 4, v_tree_1406_);
lean_ctor_set(v___x_1403_, 3, v_r_1253_);
lean_ctor_set(v___x_1403_, 2, v_v_1493_);
lean_ctor_set(v___x_1403_, 1, v_k_1492_);
lean_ctor_set(v___x_1403_, 0, v___x_1496_);
v___x_1498_ = v___x_1403_;
goto v_reusejp_1497_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v___x_1496_);
lean_ctor_set(v_reuseFailAlloc_1502_, 1, v_k_1492_);
lean_ctor_set(v_reuseFailAlloc_1502_, 2, v_v_1493_);
lean_ctor_set(v_reuseFailAlloc_1502_, 3, v_r_1253_);
lean_ctor_set(v_reuseFailAlloc_1502_, 4, v_tree_1406_);
v___x_1498_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1497_;
}
v_reusejp_1497_:
{
lean_object* v___x_1500_; 
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 4, v___x_1498_);
lean_ctor_set(v___x_1490_, 0, v___x_1495_);
v___x_1500_ = v___x_1490_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v___x_1495_);
lean_ctor_set(v_reuseFailAlloc_1501_, 1, v_k_1250_);
lean_ctor_set(v_reuseFailAlloc_1501_, 2, v_v_1251_);
lean_ctor_set(v_reuseFailAlloc_1501_, 3, v_l_1252_);
lean_ctor_set(v_reuseFailAlloc_1501_, 4, v___x_1498_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
}
else
{
lean_object* v_k_1503_; lean_object* v_v_1504_; lean_object* v___x_1505_; lean_object* v___x_1507_; 
lean_dec(v_size_1249_);
v_k_1503_ = lean_ctor_get(v___x_1405_, 0);
lean_inc(v_k_1503_);
v_v_1504_ = lean_ctor_get(v___x_1405_, 1);
lean_inc(v_v_1504_);
lean_dec_ref(v___x_1405_);
v___x_1505_ = lean_unsigned_to_nat(3u);
if (v_isShared_1404_ == 0)
{
lean_ctor_set(v___x_1403_, 4, v_r_1253_);
lean_ctor_set(v___x_1403_, 3, v_r_1253_);
lean_ctor_set(v___x_1403_, 2, v_v_1504_);
lean_ctor_set(v___x_1403_, 1, v_k_1503_);
lean_ctor_set(v___x_1403_, 0, v___x_1259_);
v___x_1507_ = v___x_1403_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v___x_1259_);
lean_ctor_set(v_reuseFailAlloc_1511_, 1, v_k_1503_);
lean_ctor_set(v_reuseFailAlloc_1511_, 2, v_v_1504_);
lean_ctor_set(v_reuseFailAlloc_1511_, 3, v_r_1253_);
lean_ctor_set(v_reuseFailAlloc_1511_, 4, v_r_1253_);
v___x_1507_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
lean_object* v___x_1509_; 
if (v_isShared_1491_ == 0)
{
lean_ctor_set(v___x_1490_, 4, v___x_1507_);
lean_ctor_set(v___x_1490_, 0, v___x_1505_);
v___x_1509_ = v___x_1490_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v___x_1505_);
lean_ctor_set(v_reuseFailAlloc_1510_, 1, v_k_1250_);
lean_ctor_set(v_reuseFailAlloc_1510_, 2, v_v_1251_);
lean_ctor_set(v_reuseFailAlloc_1510_, 3, v_l_1252_);
lean_ctor_set(v_reuseFailAlloc_1510_, 4, v___x_1507_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_1253_) == 0)
{
lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1542_; 
lean_inc(v_l_1252_);
lean_inc(v_v_1251_);
lean_inc(v_k_1250_);
v_isSharedCheck_1542_ = !lean_is_exclusive(v_l_1069_);
if (v_isSharedCheck_1542_ == 0)
{
lean_object* v_unused_1543_; lean_object* v_unused_1544_; lean_object* v_unused_1545_; lean_object* v_unused_1546_; lean_object* v_unused_1547_; 
v_unused_1543_ = lean_ctor_get(v_l_1069_, 4);
lean_dec(v_unused_1543_);
v_unused_1544_ = lean_ctor_get(v_l_1069_, 3);
lean_dec(v_unused_1544_);
v_unused_1545_ = lean_ctor_get(v_l_1069_, 2);
lean_dec(v_unused_1545_);
v_unused_1546_ = lean_ctor_get(v_l_1069_, 1);
lean_dec(v_unused_1546_);
v_unused_1547_ = lean_ctor_get(v_l_1069_, 0);
lean_dec(v_unused_1547_);
v___x_1519_ = v_l_1069_;
v_isShared_1520_ = v_isSharedCheck_1542_;
goto v_resetjp_1518_;
}
else
{
lean_dec(v_l_1069_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1542_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v_k_1521_; lean_object* v_v_1522_; lean_object* v_k_1523_; lean_object* v_v_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1538_; 
v_k_1521_ = lean_ctor_get(v___x_1405_, 0);
lean_inc(v_k_1521_);
v_v_1522_ = lean_ctor_get(v___x_1405_, 1);
lean_inc(v_v_1522_);
lean_dec_ref(v___x_1405_);
v_k_1523_ = lean_ctor_get(v_r_1253_, 1);
v_v_1524_ = lean_ctor_get(v_r_1253_, 2);
v_isSharedCheck_1538_ = !lean_is_exclusive(v_r_1253_);
if (v_isSharedCheck_1538_ == 0)
{
lean_object* v_unused_1539_; lean_object* v_unused_1540_; lean_object* v_unused_1541_; 
v_unused_1539_ = lean_ctor_get(v_r_1253_, 4);
lean_dec(v_unused_1539_);
v_unused_1540_ = lean_ctor_get(v_r_1253_, 3);
lean_dec(v_unused_1540_);
v_unused_1541_ = lean_ctor_get(v_r_1253_, 0);
lean_dec(v_unused_1541_);
v___x_1526_ = v_r_1253_;
v_isShared_1527_ = v_isSharedCheck_1538_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_v_1524_);
lean_inc(v_k_1523_);
lean_dec(v_r_1253_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1538_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1528_; lean_object* v___x_1530_; 
v___x_1528_ = lean_unsigned_to_nat(3u);
if (v_isShared_1527_ == 0)
{
lean_ctor_set(v___x_1526_, 4, v_l_1252_);
lean_ctor_set(v___x_1526_, 3, v_l_1252_);
lean_ctor_set(v___x_1526_, 2, v_v_1251_);
lean_ctor_set(v___x_1526_, 1, v_k_1250_);
lean_ctor_set(v___x_1526_, 0, v___x_1259_);
v___x_1530_ = v___x_1526_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v___x_1259_);
lean_ctor_set(v_reuseFailAlloc_1537_, 1, v_k_1250_);
lean_ctor_set(v_reuseFailAlloc_1537_, 2, v_v_1251_);
lean_ctor_set(v_reuseFailAlloc_1537_, 3, v_l_1252_);
lean_ctor_set(v_reuseFailAlloc_1537_, 4, v_l_1252_);
v___x_1530_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
lean_object* v___x_1532_; 
if (v_isShared_1404_ == 0)
{
lean_ctor_set(v___x_1403_, 4, v_l_1252_);
lean_ctor_set(v___x_1403_, 3, v_l_1252_);
lean_ctor_set(v___x_1403_, 2, v_v_1522_);
lean_ctor_set(v___x_1403_, 1, v_k_1521_);
lean_ctor_set(v___x_1403_, 0, v___x_1259_);
v___x_1532_ = v___x_1403_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v___x_1259_);
lean_ctor_set(v_reuseFailAlloc_1536_, 1, v_k_1521_);
lean_ctor_set(v_reuseFailAlloc_1536_, 2, v_v_1522_);
lean_ctor_set(v_reuseFailAlloc_1536_, 3, v_l_1252_);
lean_ctor_set(v_reuseFailAlloc_1536_, 4, v_l_1252_);
v___x_1532_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
lean_object* v___x_1534_; 
if (v_isShared_1520_ == 0)
{
lean_ctor_set(v___x_1519_, 4, v___x_1532_);
lean_ctor_set(v___x_1519_, 3, v___x_1530_);
lean_ctor_set(v___x_1519_, 2, v_v_1524_);
lean_ctor_set(v___x_1519_, 1, v_k_1523_);
lean_ctor_set(v___x_1519_, 0, v___x_1528_);
v___x_1534_ = v___x_1519_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___x_1528_);
lean_ctor_set(v_reuseFailAlloc_1535_, 1, v_k_1523_);
lean_ctor_set(v_reuseFailAlloc_1535_, 2, v_v_1524_);
lean_ctor_set(v_reuseFailAlloc_1535_, 3, v___x_1530_);
lean_ctor_set(v_reuseFailAlloc_1535_, 4, v___x_1532_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
}
}
}
else
{
lean_object* v_k_1548_; lean_object* v_v_1549_; lean_object* v___x_1550_; lean_object* v___x_1552_; 
v_k_1548_ = lean_ctor_get(v___x_1405_, 0);
lean_inc(v_k_1548_);
v_v_1549_ = lean_ctor_get(v___x_1405_, 1);
lean_inc(v_v_1549_);
lean_dec_ref(v___x_1405_);
v___x_1550_ = lean_unsigned_to_nat(2u);
if (v_isShared_1404_ == 0)
{
lean_ctor_set(v___x_1403_, 4, v_r_1253_);
lean_ctor_set(v___x_1403_, 3, v_l_1069_);
lean_ctor_set(v___x_1403_, 2, v_v_1549_);
lean_ctor_set(v___x_1403_, 1, v_k_1548_);
lean_ctor_set(v___x_1403_, 0, v___x_1550_);
v___x_1552_ = v___x_1403_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1553_, 1, v_k_1548_);
lean_ctor_set(v_reuseFailAlloc_1553_, 2, v_v_1549_);
lean_ctor_set(v_reuseFailAlloc_1553_, 3, v_l_1069_);
lean_ctor_set(v_reuseFailAlloc_1553_, 4, v_r_1253_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
return v___x_1552_;
}
}
}
}
}
}
}
else
{
return v_l_1069_;
}
}
else
{
return v_r_1070_;
}
}
default: 
{
lean_object* v_impl_1560_; lean_object* v___x_1561_; 
v_impl_1560_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_k_1065_, v_r_1070_);
v___x_1561_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1560_) == 0)
{
if (lean_obj_tag(v_l_1069_) == 0)
{
lean_object* v_size_1562_; lean_object* v_size_1563_; lean_object* v_k_1564_; lean_object* v_v_1565_; lean_object* v_l_1566_; lean_object* v_r_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; uint8_t v___x_1570_; 
v_size_1562_ = lean_ctor_get(v_impl_1560_, 0);
v_size_1563_ = lean_ctor_get(v_l_1069_, 0);
v_k_1564_ = lean_ctor_get(v_l_1069_, 1);
v_v_1565_ = lean_ctor_get(v_l_1069_, 2);
v_l_1566_ = lean_ctor_get(v_l_1069_, 3);
v_r_1567_ = lean_ctor_get(v_l_1069_, 4);
lean_inc(v_r_1567_);
v___x_1568_ = lean_unsigned_to_nat(3u);
v___x_1569_ = lean_nat_mul(v___x_1568_, v_size_1562_);
v___x_1570_ = lean_nat_dec_lt(v___x_1569_, v_size_1563_);
lean_dec(v___x_1569_);
if (v___x_1570_ == 0)
{
lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1574_; 
lean_dec(v_r_1567_);
v___x_1571_ = lean_nat_add(v___x_1561_, v_size_1563_);
v___x_1572_ = lean_nat_add(v___x_1571_, v_size_1562_);
lean_dec(v___x_1571_);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 4, v_impl_1560_);
lean_ctor_set(v___x_1072_, 0, v___x_1572_);
v___x_1574_ = v___x_1072_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v___x_1572_);
lean_ctor_set(v_reuseFailAlloc_1575_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1575_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1575_, 3, v_l_1069_);
lean_ctor_set(v_reuseFailAlloc_1575_, 4, v_impl_1560_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
else
{
lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1641_; 
lean_inc(v_l_1566_);
lean_inc(v_v_1565_);
lean_inc(v_k_1564_);
lean_inc(v_size_1563_);
v_isSharedCheck_1641_ = !lean_is_exclusive(v_l_1069_);
if (v_isSharedCheck_1641_ == 0)
{
lean_object* v_unused_1642_; lean_object* v_unused_1643_; lean_object* v_unused_1644_; lean_object* v_unused_1645_; lean_object* v_unused_1646_; 
v_unused_1642_ = lean_ctor_get(v_l_1069_, 4);
lean_dec(v_unused_1642_);
v_unused_1643_ = lean_ctor_get(v_l_1069_, 3);
lean_dec(v_unused_1643_);
v_unused_1644_ = lean_ctor_get(v_l_1069_, 2);
lean_dec(v_unused_1644_);
v_unused_1645_ = lean_ctor_get(v_l_1069_, 1);
lean_dec(v_unused_1645_);
v_unused_1646_ = lean_ctor_get(v_l_1069_, 0);
lean_dec(v_unused_1646_);
v___x_1577_ = v_l_1069_;
v_isShared_1578_ = v_isSharedCheck_1641_;
goto v_resetjp_1576_;
}
else
{
lean_dec(v_l_1069_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1641_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v_size_1579_; lean_object* v_size_1580_; lean_object* v_k_1581_; lean_object* v_v_1582_; lean_object* v_l_1583_; lean_object* v_r_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; uint8_t v___x_1587_; 
v_size_1579_ = lean_ctor_get(v_l_1566_, 0);
v_size_1580_ = lean_ctor_get(v_r_1567_, 0);
v_k_1581_ = lean_ctor_get(v_r_1567_, 1);
v_v_1582_ = lean_ctor_get(v_r_1567_, 2);
v_l_1583_ = lean_ctor_get(v_r_1567_, 3);
v_r_1584_ = lean_ctor_get(v_r_1567_, 4);
v___x_1585_ = lean_unsigned_to_nat(2u);
v___x_1586_ = lean_nat_mul(v___x_1585_, v_size_1579_);
v___x_1587_ = lean_nat_dec_lt(v_size_1580_, v___x_1586_);
lean_dec(v___x_1586_);
if (v___x_1587_ == 0)
{
lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1616_; 
lean_inc(v_r_1584_);
lean_inc(v_l_1583_);
lean_inc(v_v_1582_);
lean_inc(v_k_1581_);
v_isSharedCheck_1616_ = !lean_is_exclusive(v_r_1567_);
if (v_isSharedCheck_1616_ == 0)
{
lean_object* v_unused_1617_; lean_object* v_unused_1618_; lean_object* v_unused_1619_; lean_object* v_unused_1620_; lean_object* v_unused_1621_; 
v_unused_1617_ = lean_ctor_get(v_r_1567_, 4);
lean_dec(v_unused_1617_);
v_unused_1618_ = lean_ctor_get(v_r_1567_, 3);
lean_dec(v_unused_1618_);
v_unused_1619_ = lean_ctor_get(v_r_1567_, 2);
lean_dec(v_unused_1619_);
v_unused_1620_ = lean_ctor_get(v_r_1567_, 1);
lean_dec(v_unused_1620_);
v_unused_1621_ = lean_ctor_get(v_r_1567_, 0);
lean_dec(v_unused_1621_);
v___x_1589_ = v_r_1567_;
v_isShared_1590_ = v_isSharedCheck_1616_;
goto v_resetjp_1588_;
}
else
{
lean_dec(v_r_1567_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1616_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___y_1594_; lean_object* v___y_1595_; lean_object* v___y_1596_; lean_object* v___x_1604_; lean_object* v___y_1606_; 
v___x_1591_ = lean_nat_add(v___x_1561_, v_size_1563_);
lean_dec(v_size_1563_);
v___x_1592_ = lean_nat_add(v___x_1591_, v_size_1562_);
lean_dec(v___x_1591_);
v___x_1604_ = lean_nat_add(v___x_1561_, v_size_1579_);
if (lean_obj_tag(v_l_1583_) == 0)
{
lean_object* v_size_1614_; 
v_size_1614_ = lean_ctor_get(v_l_1583_, 0);
lean_inc(v_size_1614_);
v___y_1606_ = v_size_1614_;
goto v___jp_1605_;
}
else
{
lean_object* v___x_1615_; 
v___x_1615_ = lean_unsigned_to_nat(0u);
v___y_1606_ = v___x_1615_;
goto v___jp_1605_;
}
v___jp_1593_:
{
lean_object* v___x_1597_; lean_object* v___x_1599_; 
v___x_1597_ = lean_nat_add(v___y_1594_, v___y_1596_);
lean_dec(v___y_1596_);
lean_dec(v___y_1594_);
if (v_isShared_1590_ == 0)
{
lean_ctor_set(v___x_1589_, 4, v_impl_1560_);
lean_ctor_set(v___x_1589_, 3, v_r_1584_);
lean_ctor_set(v___x_1589_, 2, v_v_1068_);
lean_ctor_set(v___x_1589_, 1, v_k_1067_);
lean_ctor_set(v___x_1589_, 0, v___x_1597_);
v___x_1599_ = v___x_1589_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v___x_1597_);
lean_ctor_set(v_reuseFailAlloc_1603_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1603_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1603_, 3, v_r_1584_);
lean_ctor_set(v_reuseFailAlloc_1603_, 4, v_impl_1560_);
v___x_1599_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
lean_object* v___x_1601_; 
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 4, v___x_1599_);
lean_ctor_set(v___x_1577_, 3, v___y_1595_);
lean_ctor_set(v___x_1577_, 2, v_v_1582_);
lean_ctor_set(v___x_1577_, 1, v_k_1581_);
lean_ctor_set(v___x_1577_, 0, v___x_1592_);
v___x_1601_ = v___x_1577_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v___x_1592_);
lean_ctor_set(v_reuseFailAlloc_1602_, 1, v_k_1581_);
lean_ctor_set(v_reuseFailAlloc_1602_, 2, v_v_1582_);
lean_ctor_set(v_reuseFailAlloc_1602_, 3, v___y_1595_);
lean_ctor_set(v_reuseFailAlloc_1602_, 4, v___x_1599_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
}
v___jp_1605_:
{
lean_object* v___x_1607_; lean_object* v___x_1609_; 
v___x_1607_ = lean_nat_add(v___x_1604_, v___y_1606_);
lean_dec(v___y_1606_);
lean_dec(v___x_1604_);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 4, v_l_1583_);
lean_ctor_set(v___x_1072_, 3, v_l_1566_);
lean_ctor_set(v___x_1072_, 2, v_v_1565_);
lean_ctor_set(v___x_1072_, 1, v_k_1564_);
lean_ctor_set(v___x_1072_, 0, v___x_1607_);
v___x_1609_ = v___x_1072_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1607_);
lean_ctor_set(v_reuseFailAlloc_1613_, 1, v_k_1564_);
lean_ctor_set(v_reuseFailAlloc_1613_, 2, v_v_1565_);
lean_ctor_set(v_reuseFailAlloc_1613_, 3, v_l_1566_);
lean_ctor_set(v_reuseFailAlloc_1613_, 4, v_l_1583_);
v___x_1609_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
lean_object* v___x_1610_; 
v___x_1610_ = lean_nat_add(v___x_1561_, v_size_1562_);
if (lean_obj_tag(v_r_1584_) == 0)
{
lean_object* v_size_1611_; 
v_size_1611_ = lean_ctor_get(v_r_1584_, 0);
lean_inc(v_size_1611_);
v___y_1594_ = v___x_1610_;
v___y_1595_ = v___x_1609_;
v___y_1596_ = v_size_1611_;
goto v___jp_1593_;
}
else
{
lean_object* v___x_1612_; 
v___x_1612_ = lean_unsigned_to_nat(0u);
v___y_1594_ = v___x_1610_;
v___y_1595_ = v___x_1609_;
v___y_1596_ = v___x_1612_;
goto v___jp_1593_;
}
}
}
}
}
else
{
lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1627_; 
lean_del_object(v___x_1072_);
v___x_1622_ = lean_nat_add(v___x_1561_, v_size_1563_);
lean_dec(v_size_1563_);
v___x_1623_ = lean_nat_add(v___x_1622_, v_size_1562_);
lean_dec(v___x_1622_);
v___x_1624_ = lean_nat_add(v___x_1561_, v_size_1562_);
v___x_1625_ = lean_nat_add(v___x_1624_, v_size_1580_);
lean_dec(v___x_1624_);
lean_inc_ref(v_impl_1560_);
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 4, v_impl_1560_);
lean_ctor_set(v___x_1577_, 3, v_r_1567_);
lean_ctor_set(v___x_1577_, 2, v_v_1068_);
lean_ctor_set(v___x_1577_, 1, v_k_1067_);
lean_ctor_set(v___x_1577_, 0, v___x_1625_);
v___x_1627_ = v___x_1577_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v___x_1625_);
lean_ctor_set(v_reuseFailAlloc_1640_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1640_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1640_, 3, v_r_1567_);
lean_ctor_set(v_reuseFailAlloc_1640_, 4, v_impl_1560_);
v___x_1627_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
v_isSharedCheck_1634_ = !lean_is_exclusive(v_impl_1560_);
if (v_isSharedCheck_1634_ == 0)
{
lean_object* v_unused_1635_; lean_object* v_unused_1636_; lean_object* v_unused_1637_; lean_object* v_unused_1638_; lean_object* v_unused_1639_; 
v_unused_1635_ = lean_ctor_get(v_impl_1560_, 4);
lean_dec(v_unused_1635_);
v_unused_1636_ = lean_ctor_get(v_impl_1560_, 3);
lean_dec(v_unused_1636_);
v_unused_1637_ = lean_ctor_get(v_impl_1560_, 2);
lean_dec(v_unused_1637_);
v_unused_1638_ = lean_ctor_get(v_impl_1560_, 1);
lean_dec(v_unused_1638_);
v_unused_1639_ = lean_ctor_get(v_impl_1560_, 0);
lean_dec(v_unused_1639_);
v___x_1629_ = v_impl_1560_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_dec(v_impl_1560_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1632_; 
if (v_isShared_1630_ == 0)
{
lean_ctor_set(v___x_1629_, 4, v___x_1627_);
lean_ctor_set(v___x_1629_, 3, v_l_1566_);
lean_ctor_set(v___x_1629_, 2, v_v_1565_);
lean_ctor_set(v___x_1629_, 1, v_k_1564_);
lean_ctor_set(v___x_1629_, 0, v___x_1623_);
v___x_1632_ = v___x_1629_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v___x_1623_);
lean_ctor_set(v_reuseFailAlloc_1633_, 1, v_k_1564_);
lean_ctor_set(v_reuseFailAlloc_1633_, 2, v_v_1565_);
lean_ctor_set(v_reuseFailAlloc_1633_, 3, v_l_1566_);
lean_ctor_set(v_reuseFailAlloc_1633_, 4, v___x_1627_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1647_; lean_object* v___x_1648_; lean_object* v___x_1650_; 
v_size_1647_ = lean_ctor_get(v_impl_1560_, 0);
v___x_1648_ = lean_nat_add(v___x_1561_, v_size_1647_);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 4, v_impl_1560_);
lean_ctor_set(v___x_1072_, 0, v___x_1648_);
v___x_1650_ = v___x_1072_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v___x_1648_);
lean_ctor_set(v_reuseFailAlloc_1651_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1651_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1651_, 3, v_l_1069_);
lean_ctor_set(v_reuseFailAlloc_1651_, 4, v_impl_1560_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
else
{
if (lean_obj_tag(v_l_1069_) == 0)
{
lean_object* v_l_1652_; 
v_l_1652_ = lean_ctor_get(v_l_1069_, 3);
if (lean_obj_tag(v_l_1652_) == 0)
{
lean_object* v_r_1653_; 
lean_inc_ref(v_l_1652_);
v_r_1653_ = lean_ctor_get(v_l_1069_, 4);
lean_inc(v_r_1653_);
if (lean_obj_tag(v_r_1653_) == 0)
{
lean_object* v_size_1654_; lean_object* v_k_1655_; lean_object* v_v_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1669_; 
v_size_1654_ = lean_ctor_get(v_l_1069_, 0);
v_k_1655_ = lean_ctor_get(v_l_1069_, 1);
v_v_1656_ = lean_ctor_get(v_l_1069_, 2);
v_isSharedCheck_1669_ = !lean_is_exclusive(v_l_1069_);
if (v_isSharedCheck_1669_ == 0)
{
lean_object* v_unused_1670_; lean_object* v_unused_1671_; 
v_unused_1670_ = lean_ctor_get(v_l_1069_, 4);
lean_dec(v_unused_1670_);
v_unused_1671_ = lean_ctor_get(v_l_1069_, 3);
lean_dec(v_unused_1671_);
v___x_1658_ = v_l_1069_;
v_isShared_1659_ = v_isSharedCheck_1669_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_v_1656_);
lean_inc(v_k_1655_);
lean_inc(v_size_1654_);
lean_dec(v_l_1069_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1669_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v_size_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1664_; 
v_size_1660_ = lean_ctor_get(v_r_1653_, 0);
v___x_1661_ = lean_nat_add(v___x_1561_, v_size_1654_);
lean_dec(v_size_1654_);
v___x_1662_ = lean_nat_add(v___x_1561_, v_size_1660_);
if (v_isShared_1659_ == 0)
{
lean_ctor_set(v___x_1658_, 4, v_impl_1560_);
lean_ctor_set(v___x_1658_, 3, v_r_1653_);
lean_ctor_set(v___x_1658_, 2, v_v_1068_);
lean_ctor_set(v___x_1658_, 1, v_k_1067_);
lean_ctor_set(v___x_1658_, 0, v___x_1662_);
v___x_1664_ = v___x_1658_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v___x_1662_);
lean_ctor_set(v_reuseFailAlloc_1668_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1668_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1668_, 3, v_r_1653_);
lean_ctor_set(v_reuseFailAlloc_1668_, 4, v_impl_1560_);
v___x_1664_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
lean_object* v___x_1666_; 
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 4, v___x_1664_);
lean_ctor_set(v___x_1072_, 3, v_l_1652_);
lean_ctor_set(v___x_1072_, 2, v_v_1656_);
lean_ctor_set(v___x_1072_, 1, v_k_1655_);
lean_ctor_set(v___x_1072_, 0, v___x_1661_);
v___x_1666_ = v___x_1072_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v___x_1661_);
lean_ctor_set(v_reuseFailAlloc_1667_, 1, v_k_1655_);
lean_ctor_set(v_reuseFailAlloc_1667_, 2, v_v_1656_);
lean_ctor_set(v_reuseFailAlloc_1667_, 3, v_l_1652_);
lean_ctor_set(v_reuseFailAlloc_1667_, 4, v___x_1664_);
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
lean_object* v_k_1672_; lean_object* v_v_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1684_; 
v_k_1672_ = lean_ctor_get(v_l_1069_, 1);
v_v_1673_ = lean_ctor_get(v_l_1069_, 2);
v_isSharedCheck_1684_ = !lean_is_exclusive(v_l_1069_);
if (v_isSharedCheck_1684_ == 0)
{
lean_object* v_unused_1685_; lean_object* v_unused_1686_; lean_object* v_unused_1687_; 
v_unused_1685_ = lean_ctor_get(v_l_1069_, 4);
lean_dec(v_unused_1685_);
v_unused_1686_ = lean_ctor_get(v_l_1069_, 3);
lean_dec(v_unused_1686_);
v_unused_1687_ = lean_ctor_get(v_l_1069_, 0);
lean_dec(v_unused_1687_);
v___x_1675_ = v_l_1069_;
v_isShared_1676_ = v_isSharedCheck_1684_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_v_1673_);
lean_inc(v_k_1672_);
lean_dec(v_l_1069_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1684_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1677_; lean_object* v___x_1679_; 
v___x_1677_ = lean_unsigned_to_nat(3u);
if (v_isShared_1676_ == 0)
{
lean_ctor_set(v___x_1675_, 3, v_r_1653_);
lean_ctor_set(v___x_1675_, 2, v_v_1068_);
lean_ctor_set(v___x_1675_, 1, v_k_1067_);
lean_ctor_set(v___x_1675_, 0, v___x_1561_);
v___x_1679_ = v___x_1675_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v___x_1561_);
lean_ctor_set(v_reuseFailAlloc_1683_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1683_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1683_, 3, v_r_1653_);
lean_ctor_set(v_reuseFailAlloc_1683_, 4, v_r_1653_);
v___x_1679_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
lean_object* v___x_1681_; 
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 4, v___x_1679_);
lean_ctor_set(v___x_1072_, 3, v_l_1652_);
lean_ctor_set(v___x_1072_, 2, v_v_1673_);
lean_ctor_set(v___x_1072_, 1, v_k_1672_);
lean_ctor_set(v___x_1072_, 0, v___x_1677_);
v___x_1681_ = v___x_1072_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v___x_1677_);
lean_ctor_set(v_reuseFailAlloc_1682_, 1, v_k_1672_);
lean_ctor_set(v_reuseFailAlloc_1682_, 2, v_v_1673_);
lean_ctor_set(v_reuseFailAlloc_1682_, 3, v_l_1652_);
lean_ctor_set(v_reuseFailAlloc_1682_, 4, v___x_1679_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
}
}
else
{
lean_object* v_r_1688_; 
v_r_1688_ = lean_ctor_get(v_l_1069_, 4);
lean_inc(v_r_1688_);
if (lean_obj_tag(v_r_1688_) == 0)
{
lean_object* v_k_1689_; lean_object* v_v_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1713_; 
lean_inc(v_l_1652_);
v_k_1689_ = lean_ctor_get(v_l_1069_, 1);
v_v_1690_ = lean_ctor_get(v_l_1069_, 2);
v_isSharedCheck_1713_ = !lean_is_exclusive(v_l_1069_);
if (v_isSharedCheck_1713_ == 0)
{
lean_object* v_unused_1714_; lean_object* v_unused_1715_; lean_object* v_unused_1716_; 
v_unused_1714_ = lean_ctor_get(v_l_1069_, 4);
lean_dec(v_unused_1714_);
v_unused_1715_ = lean_ctor_get(v_l_1069_, 3);
lean_dec(v_unused_1715_);
v_unused_1716_ = lean_ctor_get(v_l_1069_, 0);
lean_dec(v_unused_1716_);
v___x_1692_ = v_l_1069_;
v_isShared_1693_ = v_isSharedCheck_1713_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_v_1690_);
lean_inc(v_k_1689_);
lean_dec(v_l_1069_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1713_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v_k_1694_; lean_object* v_v_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1709_; 
v_k_1694_ = lean_ctor_get(v_r_1688_, 1);
v_v_1695_ = lean_ctor_get(v_r_1688_, 2);
v_isSharedCheck_1709_ = !lean_is_exclusive(v_r_1688_);
if (v_isSharedCheck_1709_ == 0)
{
lean_object* v_unused_1710_; lean_object* v_unused_1711_; lean_object* v_unused_1712_; 
v_unused_1710_ = lean_ctor_get(v_r_1688_, 4);
lean_dec(v_unused_1710_);
v_unused_1711_ = lean_ctor_get(v_r_1688_, 3);
lean_dec(v_unused_1711_);
v_unused_1712_ = lean_ctor_get(v_r_1688_, 0);
lean_dec(v_unused_1712_);
v___x_1697_ = v_r_1688_;
v_isShared_1698_ = v_isSharedCheck_1709_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_v_1695_);
lean_inc(v_k_1694_);
lean_dec(v_r_1688_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1709_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1699_; lean_object* v___x_1701_; 
v___x_1699_ = lean_unsigned_to_nat(3u);
if (v_isShared_1698_ == 0)
{
lean_ctor_set(v___x_1697_, 4, v_l_1652_);
lean_ctor_set(v___x_1697_, 3, v_l_1652_);
lean_ctor_set(v___x_1697_, 2, v_v_1690_);
lean_ctor_set(v___x_1697_, 1, v_k_1689_);
lean_ctor_set(v___x_1697_, 0, v___x_1561_);
v___x_1701_ = v___x_1697_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v___x_1561_);
lean_ctor_set(v_reuseFailAlloc_1708_, 1, v_k_1689_);
lean_ctor_set(v_reuseFailAlloc_1708_, 2, v_v_1690_);
lean_ctor_set(v_reuseFailAlloc_1708_, 3, v_l_1652_);
lean_ctor_set(v_reuseFailAlloc_1708_, 4, v_l_1652_);
v___x_1701_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
lean_object* v___x_1703_; 
if (v_isShared_1693_ == 0)
{
lean_ctor_set(v___x_1692_, 4, v_l_1652_);
lean_ctor_set(v___x_1692_, 2, v_v_1068_);
lean_ctor_set(v___x_1692_, 1, v_k_1067_);
lean_ctor_set(v___x_1692_, 0, v___x_1561_);
v___x_1703_ = v___x_1692_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v___x_1561_);
lean_ctor_set(v_reuseFailAlloc_1707_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1707_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1707_, 3, v_l_1652_);
lean_ctor_set(v_reuseFailAlloc_1707_, 4, v_l_1652_);
v___x_1703_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
lean_object* v___x_1705_; 
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 4, v___x_1703_);
lean_ctor_set(v___x_1072_, 3, v___x_1701_);
lean_ctor_set(v___x_1072_, 2, v_v_1695_);
lean_ctor_set(v___x_1072_, 1, v_k_1694_);
lean_ctor_set(v___x_1072_, 0, v___x_1699_);
v___x_1705_ = v___x_1072_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v___x_1699_);
lean_ctor_set(v_reuseFailAlloc_1706_, 1, v_k_1694_);
lean_ctor_set(v_reuseFailAlloc_1706_, 2, v_v_1695_);
lean_ctor_set(v_reuseFailAlloc_1706_, 3, v___x_1701_);
lean_ctor_set(v_reuseFailAlloc_1706_, 4, v___x_1703_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
return v___x_1705_;
}
}
}
}
}
}
else
{
lean_object* v___x_1717_; lean_object* v___x_1719_; 
v___x_1717_ = lean_unsigned_to_nat(2u);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 4, v_r_1688_);
lean_ctor_set(v___x_1072_, 0, v___x_1717_);
v___x_1719_ = v___x_1072_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v___x_1717_);
lean_ctor_set(v_reuseFailAlloc_1720_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1720_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1720_, 3, v_l_1069_);
lean_ctor_set(v_reuseFailAlloc_1720_, 4, v_r_1688_);
v___x_1719_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
return v___x_1719_;
}
}
}
}
else
{
lean_object* v___x_1722_; 
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 4, v_l_1069_);
lean_ctor_set(v___x_1072_, 0, v___x_1561_);
v___x_1722_ = v___x_1072_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v___x_1561_);
lean_ctor_set(v_reuseFailAlloc_1723_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1723_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1723_, 3, v_l_1069_);
lean_ctor_set(v_reuseFailAlloc_1723_, 4, v_l_1069_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
}
}
}
else
{
return v_t_1066_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg___boxed(lean_object* v_k_1726_, lean_object* v_t_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_k_1726_, v_t_1727_);
lean_dec(v_k_1726_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr(lean_object* v_ext_1729_, lean_object* v_declName_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_){
_start:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v_ext_1736_; lean_object* v_toEnvExtension_1737_; lean_object* v_env_1738_; lean_object* v_asyncMode_1739_; uint8_t v___x_1740_; lean_object* v___x_1741_; lean_object* v_funCC_1742_; lean_object* v___y_1744_; uint8_t v___x_1770_; 
v___x_1734_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_1735_ = lean_st_ref_get(v_a_1732_);
v_ext_1736_ = lean_ctor_get(v_ext_1729_, 1);
v_toEnvExtension_1737_ = lean_ctor_get(v_ext_1736_, 0);
v_env_1738_ = lean_ctor_get(v___x_1735_, 0);
lean_inc_ref(v_env_1738_);
lean_dec(v___x_1735_);
v_asyncMode_1739_ = lean_ctor_get(v_toEnvExtension_1737_, 2);
v___x_1740_ = 0;
v___x_1741_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1734_, v_ext_1729_, v_env_1738_, v_asyncMode_1739_, v___x_1740_);
v_funCC_1742_ = lean_ctor_get(v___x_1741_, 2);
lean_inc(v_funCC_1742_);
lean_dec(v___x_1741_);
v___x_1770_ = l_Lean_NameSet_contains(v_funCC_1742_, v_declName_1730_);
if (v___x_1770_ == 0)
{
lean_object* v___x_1771_; 
lean_inc(v_declName_1730_);
v___x_1771_ = l_Lean_Meta_Grind_throwNotMarkedWithGrindAttribute___redArg(v_declName_1730_, v_a_1731_, v_a_1732_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_dec_ref_known(v___x_1771_, 1);
v___y_1744_ = v_a_1732_;
goto v___jp_1743_;
}
else
{
lean_dec(v_funCC_1742_);
lean_dec(v_declName_1730_);
lean_dec_ref(v_ext_1729_);
return v___x_1771_;
}
}
else
{
v___y_1744_ = v_a_1732_;
goto v___jp_1743_;
}
v___jp_1743_:
{
lean_object* v___x_1745_; lean_object* v___f_1746_; lean_object* v___x_1747_; lean_object* v_env_1748_; lean_object* v_nextMacroScope_1749_; lean_object* v_ngen_1750_; lean_object* v_auxDeclNGen_1751_; lean_object* v_traceState_1752_; lean_object* v_recordedDeps_1753_; lean_object* v_messages_1754_; lean_object* v_infoState_1755_; lean_object* v_snapshotTasks_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1768_; 
v___x_1745_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_declName_1730_, v_funCC_1742_);
lean_dec(v_declName_1730_);
v___f_1746_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___lam__0), 2, 1);
lean_closure_set(v___f_1746_, 0, v___x_1745_);
v___x_1747_ = lean_st_ref_take(v___y_1744_);
v_env_1748_ = lean_ctor_get(v___x_1747_, 0);
v_nextMacroScope_1749_ = lean_ctor_get(v___x_1747_, 1);
v_ngen_1750_ = lean_ctor_get(v___x_1747_, 2);
v_auxDeclNGen_1751_ = lean_ctor_get(v___x_1747_, 3);
v_traceState_1752_ = lean_ctor_get(v___x_1747_, 4);
v_recordedDeps_1753_ = lean_ctor_get(v___x_1747_, 6);
v_messages_1754_ = lean_ctor_get(v___x_1747_, 7);
v_infoState_1755_ = lean_ctor_get(v___x_1747_, 8);
v_snapshotTasks_1756_ = lean_ctor_get(v___x_1747_, 9);
v_isSharedCheck_1768_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1768_ == 0)
{
lean_object* v_unused_1769_; 
v_unused_1769_ = lean_ctor_get(v___x_1747_, 5);
lean_dec(v_unused_1769_);
v___x_1758_ = v___x_1747_;
v_isShared_1759_ = v_isSharedCheck_1768_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_snapshotTasks_1756_);
lean_inc(v_infoState_1755_);
lean_inc(v_messages_1754_);
lean_inc(v_recordedDeps_1753_);
lean_inc(v_traceState_1752_);
lean_inc(v_auxDeclNGen_1751_);
lean_inc(v_ngen_1750_);
lean_inc(v_nextMacroScope_1749_);
lean_inc(v_env_1748_);
lean_dec(v___x_1747_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1768_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1764_; 
v___x_1760_ = lean_box(0);
v___x_1761_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_1729_, v_env_1748_, v___f_1746_);
v___x_1762_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
if (v_isShared_1759_ == 0)
{
lean_ctor_set(v___x_1758_, 5, v___x_1762_);
lean_ctor_set(v___x_1758_, 0, v___x_1761_);
v___x_1764_ = v___x_1758_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1761_);
lean_ctor_set(v_reuseFailAlloc_1767_, 1, v_nextMacroScope_1749_);
lean_ctor_set(v_reuseFailAlloc_1767_, 2, v_ngen_1750_);
lean_ctor_set(v_reuseFailAlloc_1767_, 3, v_auxDeclNGen_1751_);
lean_ctor_set(v_reuseFailAlloc_1767_, 4, v_traceState_1752_);
lean_ctor_set(v_reuseFailAlloc_1767_, 5, v___x_1762_);
lean_ctor_set(v_reuseFailAlloc_1767_, 6, v_recordedDeps_1753_);
lean_ctor_set(v_reuseFailAlloc_1767_, 7, v_messages_1754_);
lean_ctor_set(v_reuseFailAlloc_1767_, 8, v_infoState_1755_);
lean_ctor_set(v_reuseFailAlloc_1767_, 9, v_snapshotTasks_1756_);
v___x_1764_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1765_ = lean_st_ref_put(v___y_1744_, v___x_1764_);
v___x_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1760_);
return v___x_1766_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr___boxed(lean_object* v_ext_1772_, lean_object* v_declName_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr(v_ext_1772_, v_declName_1773_, v_a_1774_, v_a_1775_);
lean_dec(v_a_1775_);
lean_dec_ref(v_a_1774_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0(lean_object* v_00_u03b2_1778_, lean_object* v_k_1779_, lean_object* v_t_1780_, lean_object* v_h_1781_){
_start:
{
lean_object* v___x_1782_; 
v___x_1782_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___redArg(v_k_1779_, v_t_1780_);
return v___x_1782_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0___boxed(lean_object* v_00_u03b2_1783_, lean_object* v_k_1784_, lean_object* v_t_1785_, lean_object* v_h_1786_){
_start:
{
lean_object* v_res_1787_; 
v_res_1787_ = l_Std_DTreeMap_Internal_Impl_erase___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr_spec__0(v_00_u03b2_1783_, v_k_1784_, v_t_1785_, v_h_1786_);
lean_dec(v_k_1784_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___lam__0(lean_object* v_a_1788_, lean_object* v_s_1789_){
_start:
{
lean_object* v_casesTypes_1790_; lean_object* v_extThms_1791_; lean_object* v_funCC_1792_; lean_object* v_inj_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1800_; 
v_casesTypes_1790_ = lean_ctor_get(v_s_1789_, 0);
v_extThms_1791_ = lean_ctor_get(v_s_1789_, 1);
v_funCC_1792_ = lean_ctor_get(v_s_1789_, 2);
v_inj_1793_ = lean_ctor_get(v_s_1789_, 4);
v_isSharedCheck_1800_ = !lean_is_exclusive(v_s_1789_);
if (v_isSharedCheck_1800_ == 0)
{
lean_object* v_unused_1801_; 
v_unused_1801_ = lean_ctor_get(v_s_1789_, 3);
lean_dec(v_unused_1801_);
v___x_1795_ = v_s_1789_;
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_inj_1793_);
lean_inc(v_funCC_1792_);
lean_inc(v_extThms_1791_);
lean_inc(v_casesTypes_1790_);
lean_dec(v_s_1789_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
lean_ctor_set(v___x_1795_, 3, v_a_1788_);
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_casesTypes_1790_);
lean_ctor_set(v_reuseFailAlloc_1799_, 1, v_extThms_1791_);
lean_ctor_set(v_reuseFailAlloc_1799_, 2, v_funCC_1792_);
lean_ctor_set(v_reuseFailAlloc_1799_, 3, v_a_1788_);
lean_ctor_set(v_reuseFailAlloc_1799_, 4, v_inj_1793_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0(void){
_start:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1802_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__0);
v___x_1803_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1803_, 0, v___x_1802_);
lean_ctor_set(v___x_1803_, 1, v___x_1802_);
lean_ctor_set(v___x_1803_, 2, v___x_1802_);
lean_ctor_set(v___x_1803_, 3, v___x_1802_);
lean_ctor_set(v___x_1803_, 4, v___x_1802_);
lean_ctor_set(v___x_1803_, 5, v___x_1802_);
return v___x_1803_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr(lean_object* v_ext_1804_, lean_object* v_declName_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_){
_start:
{
lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v_ext_1813_; lean_object* v_toEnvExtension_1814_; lean_object* v_env_1815_; lean_object* v_asyncMode_1816_; uint8_t v___x_1817_; lean_object* v___x_1818_; lean_object* v_ematch_1819_; lean_object* v___x_1820_; 
v___x_1811_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_1812_ = lean_st_ref_get(v_a_1809_);
v_ext_1813_ = lean_ctor_get(v_ext_1804_, 1);
v_toEnvExtension_1814_ = lean_ctor_get(v_ext_1813_, 0);
v_env_1815_ = lean_ctor_get(v___x_1812_, 0);
lean_inc_ref(v_env_1815_);
lean_dec(v___x_1812_);
v_asyncMode_1816_ = lean_ctor_get(v_toEnvExtension_1814_, 2);
v___x_1817_ = 0;
v___x_1818_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1811_, v_ext_1804_, v_env_1815_, v_asyncMode_1816_, v___x_1817_);
v_ematch_1819_ = lean_ctor_get(v___x_1818_, 3);
lean_inc_ref(v_ematch_1819_);
lean_dec(v___x_1818_);
v___x_1820_ = l_Lean_Meta_Grind_Theorems_eraseDecl___redArg(v_ematch_1819_, v_declName_1805_, v_a_1806_, v_a_1807_, v_a_1808_, v_a_1809_);
if (lean_obj_tag(v___x_1820_) == 0)
{
lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1866_; 
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1823_ = v___x_1820_;
v_isShared_1824_ = v_isSharedCheck_1866_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v___x_1820_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1866_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___f_1825_; lean_object* v___x_1826_; lean_object* v_env_1827_; lean_object* v_nextMacroScope_1828_; lean_object* v_ngen_1829_; lean_object* v_auxDeclNGen_1830_; lean_object* v_traceState_1831_; lean_object* v_recordedDeps_1832_; lean_object* v_messages_1833_; lean_object* v_infoState_1834_; lean_object* v_snapshotTasks_1835_; lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1864_; 
v___f_1825_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___lam__0), 2, 1);
lean_closure_set(v___f_1825_, 0, v_a_1821_);
v___x_1826_ = lean_st_ref_take(v_a_1809_);
v_env_1827_ = lean_ctor_get(v___x_1826_, 0);
v_nextMacroScope_1828_ = lean_ctor_get(v___x_1826_, 1);
v_ngen_1829_ = lean_ctor_get(v___x_1826_, 2);
v_auxDeclNGen_1830_ = lean_ctor_get(v___x_1826_, 3);
v_traceState_1831_ = lean_ctor_get(v___x_1826_, 4);
v_recordedDeps_1832_ = lean_ctor_get(v___x_1826_, 6);
v_messages_1833_ = lean_ctor_get(v___x_1826_, 7);
v_infoState_1834_ = lean_ctor_get(v___x_1826_, 8);
v_snapshotTasks_1835_ = lean_ctor_get(v___x_1826_, 9);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1864_ == 0)
{
lean_object* v_unused_1865_; 
v_unused_1865_ = lean_ctor_get(v___x_1826_, 5);
lean_dec(v_unused_1865_);
v___x_1837_ = v___x_1826_;
v_isShared_1838_ = v_isSharedCheck_1864_;
goto v_resetjp_1836_;
}
else
{
lean_inc(v_snapshotTasks_1835_);
lean_inc(v_infoState_1834_);
lean_inc(v_messages_1833_);
lean_inc(v_recordedDeps_1832_);
lean_inc(v_traceState_1831_);
lean_inc(v_auxDeclNGen_1830_);
lean_inc(v_ngen_1829_);
lean_inc(v_nextMacroScope_1828_);
lean_inc(v_env_1827_);
lean_dec(v___x_1826_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1864_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1842_; 
v___x_1839_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_1804_, v_env_1827_, v___f_1825_);
v___x_1840_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
if (v_isShared_1838_ == 0)
{
lean_ctor_set(v___x_1837_, 5, v___x_1840_);
lean_ctor_set(v___x_1837_, 0, v___x_1839_);
v___x_1842_ = v___x_1837_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v___x_1839_);
lean_ctor_set(v_reuseFailAlloc_1863_, 1, v_nextMacroScope_1828_);
lean_ctor_set(v_reuseFailAlloc_1863_, 2, v_ngen_1829_);
lean_ctor_set(v_reuseFailAlloc_1863_, 3, v_auxDeclNGen_1830_);
lean_ctor_set(v_reuseFailAlloc_1863_, 4, v_traceState_1831_);
lean_ctor_set(v_reuseFailAlloc_1863_, 5, v___x_1840_);
lean_ctor_set(v_reuseFailAlloc_1863_, 6, v_recordedDeps_1832_);
lean_ctor_set(v_reuseFailAlloc_1863_, 7, v_messages_1833_);
lean_ctor_set(v_reuseFailAlloc_1863_, 8, v_infoState_1834_);
lean_ctor_set(v_reuseFailAlloc_1863_, 9, v_snapshotTasks_1835_);
v___x_1842_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v_mctx_1845_; lean_object* v_zetaDeltaFVarIds_1846_; lean_object* v_postponed_1847_; lean_object* v_diag_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1861_; 
v___x_1843_ = lean_st_ref_put(v_a_1809_, v___x_1842_);
v___x_1844_ = lean_st_ref_take(v_a_1807_);
v_mctx_1845_ = lean_ctor_get(v___x_1844_, 0);
v_zetaDeltaFVarIds_1846_ = lean_ctor_get(v___x_1844_, 2);
v_postponed_1847_ = lean_ctor_get(v___x_1844_, 3);
v_diag_1848_ = lean_ctor_get(v___x_1844_, 4);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1844_);
if (v_isSharedCheck_1861_ == 0)
{
lean_object* v_unused_1862_; 
v_unused_1862_ = lean_ctor_get(v___x_1844_, 1);
lean_dec(v_unused_1862_);
v___x_1850_ = v___x_1844_;
v_isShared_1851_ = v_isSharedCheck_1861_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_diag_1848_);
lean_inc(v_postponed_1847_);
lean_inc(v_zetaDeltaFVarIds_1846_);
lean_inc(v_mctx_1845_);
lean_dec(v___x_1844_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1861_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1855_; 
v___x_1852_ = lean_box(0);
v___x_1853_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0);
if (v_isShared_1851_ == 0)
{
lean_ctor_set(v___x_1850_, 1, v___x_1853_);
v___x_1855_ = v___x_1850_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_mctx_1845_);
lean_ctor_set(v_reuseFailAlloc_1860_, 1, v___x_1853_);
lean_ctor_set(v_reuseFailAlloc_1860_, 2, v_zetaDeltaFVarIds_1846_);
lean_ctor_set(v_reuseFailAlloc_1860_, 3, v_postponed_1847_);
lean_ctor_set(v_reuseFailAlloc_1860_, 4, v_diag_1848_);
v___x_1855_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
lean_object* v___x_1856_; lean_object* v___x_1858_; 
v___x_1856_ = lean_st_ref_put(v_a_1807_, v___x_1855_);
if (v_isShared_1824_ == 0)
{
lean_ctor_set(v___x_1823_, 0, v___x_1852_);
v___x_1858_ = v___x_1823_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v___x_1852_);
v___x_1858_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
return v___x_1858_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1874_; 
lean_dec_ref(v_ext_1804_);
v_a_1867_ = lean_ctor_get(v___x_1820_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1869_ = v___x_1820_;
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_a_1867_);
lean_dec(v___x_1820_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1874_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1872_; 
if (v_isShared_1870_ == 0)
{
v___x_1872_ = v___x_1869_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v_a_1867_);
v___x_1872_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
return v___x_1872_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___boxed(lean_object* v_ext_1875_, lean_object* v_declName_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_){
_start:
{
lean_object* v_res_1882_; 
v_res_1882_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr(v_ext_1875_, v_declName_1876_, v_a_1877_, v_a_1878_, v_a_1879_, v_a_1880_);
lean_dec(v_a_1880_);
lean_dec_ref(v_a_1879_);
lean_dec(v_a_1878_);
lean_dec_ref(v_a_1877_);
return v_res_1882_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___lam__0(lean_object* v_a_1883_, lean_object* v_s_1884_){
_start:
{
lean_object* v_casesTypes_1885_; lean_object* v_extThms_1886_; lean_object* v_funCC_1887_; lean_object* v_ematch_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1895_; 
v_casesTypes_1885_ = lean_ctor_get(v_s_1884_, 0);
v_extThms_1886_ = lean_ctor_get(v_s_1884_, 1);
v_funCC_1887_ = lean_ctor_get(v_s_1884_, 2);
v_ematch_1888_ = lean_ctor_get(v_s_1884_, 3);
v_isSharedCheck_1895_ = !lean_is_exclusive(v_s_1884_);
if (v_isSharedCheck_1895_ == 0)
{
lean_object* v_unused_1896_; 
v_unused_1896_ = lean_ctor_get(v_s_1884_, 4);
lean_dec(v_unused_1896_);
v___x_1890_ = v_s_1884_;
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_ematch_1888_);
lean_inc(v_funCC_1887_);
lean_inc(v_extThms_1886_);
lean_inc(v_casesTypes_1885_);
lean_dec(v_s_1884_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
lean_object* v___x_1893_; 
if (v_isShared_1891_ == 0)
{
lean_ctor_set(v___x_1890_, 4, v_a_1883_);
v___x_1893_ = v___x_1890_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v_casesTypes_1885_);
lean_ctor_set(v_reuseFailAlloc_1894_, 1, v_extThms_1886_);
lean_ctor_set(v_reuseFailAlloc_1894_, 2, v_funCC_1887_);
lean_ctor_set(v_reuseFailAlloc_1894_, 3, v_ematch_1888_);
lean_ctor_set(v_reuseFailAlloc_1894_, 4, v_a_1883_);
v___x_1893_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
return v___x_1893_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr(lean_object* v_ext_1897_, lean_object* v_declName_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v_ext_1906_; lean_object* v_toEnvExtension_1907_; lean_object* v_env_1908_; lean_object* v_asyncMode_1909_; uint8_t v___x_1910_; lean_object* v___x_1911_; lean_object* v_inj_1912_; lean_object* v___x_1913_; 
v___x_1904_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_1905_ = lean_st_ref_get(v_a_1902_);
v_ext_1906_ = lean_ctor_get(v_ext_1897_, 1);
v_toEnvExtension_1907_ = lean_ctor_get(v_ext_1906_, 0);
v_env_1908_ = lean_ctor_get(v___x_1905_, 0);
lean_inc_ref(v_env_1908_);
lean_dec(v___x_1905_);
v_asyncMode_1909_ = lean_ctor_get(v_toEnvExtension_1907_, 2);
v___x_1910_ = 0;
v___x_1911_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1904_, v_ext_1897_, v_env_1908_, v_asyncMode_1909_, v___x_1910_);
v_inj_1912_ = lean_ctor_get(v___x_1911_, 4);
lean_inc_ref(v_inj_1912_);
lean_dec(v___x_1911_);
v___x_1913_ = l_Lean_Meta_Grind_Theorems_eraseDecl___redArg(v_inj_1912_, v_declName_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_);
if (lean_obj_tag(v___x_1913_) == 0)
{
lean_object* v_a_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1959_; 
v_a_1914_ = lean_ctor_get(v___x_1913_, 0);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1913_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1916_ = v___x_1913_;
v_isShared_1917_ = v_isSharedCheck_1959_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_a_1914_);
lean_dec(v___x_1913_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1959_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v___f_1918_; lean_object* v___x_1919_; lean_object* v_env_1920_; lean_object* v_nextMacroScope_1921_; lean_object* v_ngen_1922_; lean_object* v_auxDeclNGen_1923_; lean_object* v_traceState_1924_; lean_object* v_recordedDeps_1925_; lean_object* v_messages_1926_; lean_object* v_infoState_1927_; lean_object* v_snapshotTasks_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1957_; 
v___f_1918_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___lam__0), 2, 1);
lean_closure_set(v___f_1918_, 0, v_a_1914_);
v___x_1919_ = lean_st_ref_take(v_a_1902_);
v_env_1920_ = lean_ctor_get(v___x_1919_, 0);
v_nextMacroScope_1921_ = lean_ctor_get(v___x_1919_, 1);
v_ngen_1922_ = lean_ctor_get(v___x_1919_, 2);
v_auxDeclNGen_1923_ = lean_ctor_get(v___x_1919_, 3);
v_traceState_1924_ = lean_ctor_get(v___x_1919_, 4);
v_recordedDeps_1925_ = lean_ctor_get(v___x_1919_, 6);
v_messages_1926_ = lean_ctor_get(v___x_1919_, 7);
v_infoState_1927_ = lean_ctor_get(v___x_1919_, 8);
v_snapshotTasks_1928_ = lean_ctor_get(v___x_1919_, 9);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1957_ == 0)
{
lean_object* v_unused_1958_; 
v_unused_1958_ = lean_ctor_get(v___x_1919_, 5);
lean_dec(v_unused_1958_);
v___x_1930_ = v___x_1919_;
v_isShared_1931_ = v_isSharedCheck_1957_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_snapshotTasks_1928_);
lean_inc(v_infoState_1927_);
lean_inc(v_messages_1926_);
lean_inc(v_recordedDeps_1925_);
lean_inc(v_traceState_1924_);
lean_inc(v_auxDeclNGen_1923_);
lean_inc(v_ngen_1922_);
lean_inc(v_nextMacroScope_1921_);
lean_inc(v_env_1920_);
lean_dec(v___x_1919_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1957_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1935_; 
v___x_1932_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_1897_, v_env_1920_, v___f_1918_);
v___x_1933_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
if (v_isShared_1931_ == 0)
{
lean_ctor_set(v___x_1930_, 5, v___x_1933_);
lean_ctor_set(v___x_1930_, 0, v___x_1932_);
v___x_1935_ = v___x_1930_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v___x_1932_);
lean_ctor_set(v_reuseFailAlloc_1956_, 1, v_nextMacroScope_1921_);
lean_ctor_set(v_reuseFailAlloc_1956_, 2, v_ngen_1922_);
lean_ctor_set(v_reuseFailAlloc_1956_, 3, v_auxDeclNGen_1923_);
lean_ctor_set(v_reuseFailAlloc_1956_, 4, v_traceState_1924_);
lean_ctor_set(v_reuseFailAlloc_1956_, 5, v___x_1933_);
lean_ctor_set(v_reuseFailAlloc_1956_, 6, v_recordedDeps_1925_);
lean_ctor_set(v_reuseFailAlloc_1956_, 7, v_messages_1926_);
lean_ctor_set(v_reuseFailAlloc_1956_, 8, v_infoState_1927_);
lean_ctor_set(v_reuseFailAlloc_1956_, 9, v_snapshotTasks_1928_);
v___x_1935_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v_mctx_1938_; lean_object* v_zetaDeltaFVarIds_1939_; lean_object* v_postponed_1940_; lean_object* v_diag_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1954_; 
v___x_1936_ = lean_st_ref_put(v_a_1902_, v___x_1935_);
v___x_1937_ = lean_st_ref_take(v_a_1900_);
v_mctx_1938_ = lean_ctor_get(v___x_1937_, 0);
v_zetaDeltaFVarIds_1939_ = lean_ctor_get(v___x_1937_, 2);
v_postponed_1940_ = lean_ctor_get(v___x_1937_, 3);
v_diag_1941_ = lean_ctor_get(v___x_1937_, 4);
v_isSharedCheck_1954_ = !lean_is_exclusive(v___x_1937_);
if (v_isSharedCheck_1954_ == 0)
{
lean_object* v_unused_1955_; 
v_unused_1955_ = lean_ctor_get(v___x_1937_, 1);
lean_dec(v_unused_1955_);
v___x_1943_ = v___x_1937_;
v_isShared_1944_ = v_isSharedCheck_1954_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_diag_1941_);
lean_inc(v_postponed_1940_);
lean_inc(v_zetaDeltaFVarIds_1939_);
lean_inc(v_mctx_1938_);
lean_dec(v___x_1937_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1954_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1948_; 
v___x_1945_ = lean_box(0);
v___x_1946_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0);
if (v_isShared_1944_ == 0)
{
lean_ctor_set(v___x_1943_, 1, v___x_1946_);
v___x_1948_ = v___x_1943_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v_mctx_1938_);
lean_ctor_set(v_reuseFailAlloc_1953_, 1, v___x_1946_);
lean_ctor_set(v_reuseFailAlloc_1953_, 2, v_zetaDeltaFVarIds_1939_);
lean_ctor_set(v_reuseFailAlloc_1953_, 3, v_postponed_1940_);
lean_ctor_set(v_reuseFailAlloc_1953_, 4, v_diag_1941_);
v___x_1948_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
lean_object* v___x_1949_; lean_object* v___x_1951_; 
v___x_1949_ = lean_st_ref_put(v_a_1900_, v___x_1948_);
if (v_isShared_1917_ == 0)
{
lean_ctor_set(v___x_1916_, 0, v___x_1945_);
v___x_1951_ = v___x_1916_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v___x_1945_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1967_; 
lean_dec_ref(v_ext_1897_);
v_a_1960_ = lean_ctor_get(v___x_1913_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v___x_1913_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1962_ = v___x_1913_;
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_a_1960_);
lean_dec(v___x_1913_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1967_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1965_; 
if (v_isShared_1963_ == 0)
{
v___x_1965_ = v___x_1962_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v_a_1960_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr___boxed(lean_object* v_ext_1968_, lean_object* v_declName_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr(v_ext_1968_, v_declName_1969_, v_a_1970_, v_a_1971_, v_a_1972_, v_a_1973_);
lean_dec(v_a_1973_);
lean_dec_ref(v_a_1972_);
lean_dec(v_a_1971_);
lean_dec_ref(v_a_1970_);
return v_res_1975_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1976_, lean_object* v_i_1977_, lean_object* v_k_1978_){
_start:
{
lean_object* v___x_1979_; uint8_t v___x_1980_; 
v___x_1979_ = lean_array_get_size(v_keys_1976_);
v___x_1980_ = lean_nat_dec_lt(v_i_1977_, v___x_1979_);
if (v___x_1980_ == 0)
{
lean_dec(v_i_1977_);
return v___x_1980_;
}
else
{
lean_object* v_k_x27_1981_; uint8_t v___x_1982_; 
v_k_x27_1981_ = lean_array_fget_borrowed(v_keys_1976_, v_i_1977_);
v___x_1982_ = lean_name_eq(v_k_1978_, v_k_x27_1981_);
if (v___x_1982_ == 0)
{
lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1983_ = lean_unsigned_to_nat(1u);
v___x_1984_ = lean_nat_add(v_i_1977_, v___x_1983_);
lean_dec(v_i_1977_);
v_i_1977_ = v___x_1984_;
goto _start;
}
else
{
lean_dec(v_i_1977_);
return v___x_1980_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1986_, lean_object* v_i_1987_, lean_object* v_k_1988_){
_start:
{
uint8_t v_res_1989_; lean_object* v_r_1990_; 
v_res_1989_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(v_keys_1986_, v_i_1987_, v_k_1988_);
lean_dec(v_k_1988_);
lean_dec_ref(v_keys_1986_);
v_r_1990_ = lean_box(v_res_1989_);
return v_r_1990_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(lean_object* v_x_1991_, size_t v_x_1992_, lean_object* v_x_1993_){
_start:
{
if (lean_obj_tag(v_x_1991_) == 0)
{
lean_object* v_es_1994_; lean_object* v___x_1995_; size_t v___x_1996_; size_t v___x_1997_; lean_object* v_j_1998_; lean_object* v___x_1999_; 
v_es_1994_ = lean_ctor_get(v_x_1991_, 0);
v___x_1995_ = lean_box(2);
v___x_1996_ = ((size_t)31ULL);
v___x_1997_ = lean_usize_land(v_x_1992_, v___x_1996_);
v_j_1998_ = lean_usize_to_nat(v___x_1997_);
v___x_1999_ = lean_array_get_borrowed(v___x_1995_, v_es_1994_, v_j_1998_);
lean_dec(v_j_1998_);
switch(lean_obj_tag(v___x_1999_))
{
case 0:
{
lean_object* v_key_2000_; uint8_t v___x_2001_; 
v_key_2000_ = lean_ctor_get(v___x_1999_, 0);
v___x_2001_ = lean_name_eq(v_x_1993_, v_key_2000_);
return v___x_2001_;
}
case 1:
{
lean_object* v_node_2002_; size_t v___x_2003_; size_t v___x_2004_; 
v_node_2002_ = lean_ctor_get(v___x_1999_, 0);
v___x_2003_ = ((size_t)5ULL);
v___x_2004_ = lean_usize_shift_right(v_x_1992_, v___x_2003_);
v_x_1991_ = v_node_2002_;
v_x_1992_ = v___x_2004_;
goto _start;
}
default: 
{
uint8_t v___x_2006_; 
v___x_2006_ = 0;
return v___x_2006_;
}
}
}
else
{
lean_object* v_ks_2007_; lean_object* v___x_2008_; uint8_t v___x_2009_; 
v_ks_2007_ = lean_ctor_get(v_x_1991_, 0);
v___x_2008_ = lean_unsigned_to_nat(0u);
v___x_2009_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(v_ks_2007_, v___x_2008_, v_x_1993_);
return v___x_2009_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg___boxed(lean_object* v_x_2010_, lean_object* v_x_2011_, lean_object* v_x_2012_){
_start:
{
size_t v_x_330__boxed_2013_; uint8_t v_res_2014_; lean_object* v_r_2015_; 
v_x_330__boxed_2013_ = lean_unbox_usize(v_x_2011_);
lean_dec(v_x_2011_);
v_res_2014_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(v_x_2010_, v_x_330__boxed_2013_, v_x_2012_);
lean_dec(v_x_2012_);
lean_dec_ref(v_x_2010_);
v_r_2015_ = lean_box(v_res_2014_);
return v_r_2015_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(lean_object* v_x_2016_, lean_object* v_x_2017_){
_start:
{
uint64_t v___y_2019_; 
if (lean_obj_tag(v_x_2017_) == 0)
{
uint64_t v___x_2022_; 
v___x_2022_ = 1723ULL;
v___y_2019_ = v___x_2022_;
goto v___jp_2018_;
}
else
{
uint64_t v_hash_2023_; 
v_hash_2023_ = lean_ctor_get_uint64(v_x_2017_, sizeof(void*)*2);
v___y_2019_ = v_hash_2023_;
goto v___jp_2018_;
}
v___jp_2018_:
{
size_t v___x_2020_; uint8_t v___x_2021_; 
v___x_2020_ = lean_uint64_to_usize(v___y_2019_);
v___x_2021_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(v_x_2016_, v___x_2020_, v_x_2017_);
return v___x_2021_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg___boxed(lean_object* v_x_2024_, lean_object* v_x_2025_){
_start:
{
uint8_t v_res_2026_; lean_object* v_r_2027_; 
v_res_2026_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(v_x_2024_, v_x_2025_);
lean_dec(v_x_2025_);
lean_dec_ref(v_x_2024_);
v_r_2027_ = lean_box(v_res_2026_);
return v_r_2027_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(lean_object* v_ext_2028_, lean_object* v_declName_2029_, lean_object* v_a_2030_){
_start:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v_ext_2034_; lean_object* v_toEnvExtension_2035_; lean_object* v_env_2036_; lean_object* v_asyncMode_2037_; uint8_t v___x_2038_; lean_object* v___x_2039_; lean_object* v_extThms_2040_; uint8_t v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; 
v___x_2032_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_2033_ = lean_st_ref_get(v_a_2030_);
v_ext_2034_ = lean_ctor_get(v_ext_2028_, 1);
v_toEnvExtension_2035_ = lean_ctor_get(v_ext_2034_, 0);
v_env_2036_ = lean_ctor_get(v___x_2033_, 0);
lean_inc_ref(v_env_2036_);
lean_dec(v___x_2033_);
v_asyncMode_2037_ = lean_ctor_get(v_toEnvExtension_2035_, 2);
v___x_2038_ = 0;
v___x_2039_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2032_, v_ext_2028_, v_env_2036_, v_asyncMode_2037_, v___x_2038_);
v_extThms_2040_ = lean_ctor_get(v___x_2039_, 1);
lean_inc_ref(v_extThms_2040_);
lean_dec(v___x_2039_);
v___x_2041_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(v_extThms_2040_, v_declName_2029_);
lean_dec_ref(v_extThms_2040_);
v___x_2042_ = lean_box(v___x_2041_);
v___x_2043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2042_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg___boxed(lean_object* v_ext_2044_, lean_object* v_declName_2045_, lean_object* v_a_2046_, lean_object* v_a_2047_){
_start:
{
lean_object* v_res_2048_; 
v_res_2048_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(v_ext_2044_, v_declName_2045_, v_a_2046_);
lean_dec(v_a_2046_);
lean_dec(v_declName_2045_);
lean_dec_ref(v_ext_2044_);
return v_res_2048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem(lean_object* v_ext_2049_, lean_object* v_declName_2050_, lean_object* v_a_2051_, lean_object* v_a_2052_){
_start:
{
lean_object* v___x_2054_; 
v___x_2054_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(v_ext_2049_, v_declName_2050_, v_a_2052_);
return v___x_2054_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___boxed(lean_object* v_ext_2055_, lean_object* v_declName_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_){
_start:
{
lean_object* v_res_2060_; 
v_res_2060_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem(v_ext_2055_, v_declName_2056_, v_a_2057_, v_a_2058_);
lean_dec(v_a_2058_);
lean_dec_ref(v_a_2057_);
lean_dec(v_declName_2056_);
lean_dec_ref(v_ext_2055_);
return v_res_2060_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0(lean_object* v_00_u03b2_2061_, lean_object* v_x_2062_, lean_object* v_x_2063_){
_start:
{
uint8_t v___x_2064_; 
v___x_2064_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___redArg(v_x_2062_, v_x_2063_);
return v___x_2064_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0___boxed(lean_object* v_00_u03b2_2065_, lean_object* v_x_2066_, lean_object* v_x_2067_){
_start:
{
uint8_t v_res_2068_; lean_object* v_r_2069_; 
v_res_2068_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0(v_00_u03b2_2065_, v_x_2066_, v_x_2067_);
lean_dec(v_x_2067_);
lean_dec_ref(v_x_2066_);
v_r_2069_ = lean_box(v_res_2068_);
return v_r_2069_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0(lean_object* v_00_u03b2_2070_, lean_object* v_x_2071_, size_t v_x_2072_, lean_object* v_x_2073_){
_start:
{
uint8_t v___x_2074_; 
v___x_2074_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___redArg(v_x_2071_, v_x_2072_, v_x_2073_);
return v___x_2074_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2075_, lean_object* v_x_2076_, lean_object* v_x_2077_, lean_object* v_x_2078_){
_start:
{
size_t v_x_417__boxed_2079_; uint8_t v_res_2080_; lean_object* v_r_2081_; 
v_x_417__boxed_2079_ = lean_unbox_usize(v_x_2077_);
lean_dec(v_x_2077_);
v_res_2080_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0(v_00_u03b2_2075_, v_x_2076_, v_x_417__boxed_2079_, v_x_2078_);
lean_dec(v_x_2078_);
lean_dec_ref(v_x_2076_);
v_r_2081_ = lean_box(v_res_2080_);
return v_r_2081_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2082_, lean_object* v_keys_2083_, lean_object* v_vals_2084_, lean_object* v_heq_2085_, lean_object* v_i_2086_, lean_object* v_k_2087_){
_start:
{
uint8_t v___x_2088_; 
v___x_2088_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___redArg(v_keys_2083_, v_i_2086_, v_k_2087_);
return v___x_2088_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2089_, lean_object* v_keys_2090_, lean_object* v_vals_2091_, lean_object* v_heq_2092_, lean_object* v_i_2093_, lean_object* v_k_2094_){
_start:
{
uint8_t v_res_2095_; lean_object* v_r_2096_; 
v_res_2095_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem_spec__0_spec__0_spec__1(v_00_u03b2_2089_, v_keys_2090_, v_vals_2091_, v_heq_2092_, v_i_2093_, v_k_2094_);
lean_dec(v_k_2094_);
lean_dec_ref(v_vals_2091_);
lean_dec_ref(v_keys_2090_);
v_r_2096_ = lean_box(v_res_2095_);
return v_r_2096_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(lean_object* v_ext_2097_, lean_object* v_declName_2098_, lean_object* v_a_2099_){
_start:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v_ext_2103_; lean_object* v_toEnvExtension_2104_; lean_object* v_env_2105_; lean_object* v_asyncMode_2106_; uint8_t v___x_2107_; lean_object* v___x_2108_; lean_object* v_inj_2109_; lean_object* v___x_2110_; uint8_t v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2101_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_2102_ = lean_st_ref_get(v_a_2099_);
v_ext_2103_ = lean_ctor_get(v_ext_2097_, 1);
v_toEnvExtension_2104_ = lean_ctor_get(v_ext_2103_, 0);
v_env_2105_ = lean_ctor_get(v___x_2102_, 0);
lean_inc_ref(v_env_2105_);
lean_dec(v___x_2102_);
v_asyncMode_2106_ = lean_ctor_get(v_toEnvExtension_2104_, 2);
v___x_2107_ = 0;
v___x_2108_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2101_, v_ext_2097_, v_env_2105_, v_asyncMode_2106_, v___x_2107_);
v_inj_2109_ = lean_ctor_get(v___x_2108_, 4);
lean_inc_ref(v_inj_2109_);
lean_dec(v___x_2108_);
v___x_2110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2110_, 0, v_declName_2098_);
v___x_2111_ = l_Lean_Meta_Grind_Theorems_contains___redArg(v_inj_2109_, v___x_2110_);
lean_dec_ref_known(v___x_2110_, 1);
lean_dec_ref(v_inj_2109_);
v___x_2112_ = lean_box(v___x_2111_);
v___x_2113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
return v___x_2113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg___boxed(lean_object* v_ext_2114_, lean_object* v_declName_2115_, lean_object* v_a_2116_, lean_object* v_a_2117_){
_start:
{
lean_object* v_res_2118_; 
v_res_2118_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(v_ext_2114_, v_declName_2115_, v_a_2116_);
lean_dec(v_a_2116_);
lean_dec_ref(v_ext_2114_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem(lean_object* v_ext_2119_, lean_object* v_declName_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_){
_start:
{
lean_object* v___x_2124_; 
v___x_2124_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(v_ext_2119_, v_declName_2120_, v_a_2122_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___boxed(lean_object* v_ext_2125_, lean_object* v_declName_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_){
_start:
{
lean_object* v_res_2130_; 
v_res_2130_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem(v_ext_2125_, v_declName_2126_, v_a_2127_, v_a_2128_);
lean_dec(v_a_2128_);
lean_dec_ref(v_a_2127_);
lean_dec_ref(v_ext_2125_);
return v_res_2130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(lean_object* v_ext_2131_, lean_object* v_declName_2132_, lean_object* v_a_2133_){
_start:
{
lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v_ext_2137_; lean_object* v_toEnvExtension_2138_; lean_object* v_env_2139_; lean_object* v_asyncMode_2140_; uint8_t v___x_2141_; lean_object* v___x_2142_; lean_object* v_funCC_2143_; uint8_t v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; 
v___x_2135_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_2136_ = lean_st_ref_get(v_a_2133_);
v_ext_2137_ = lean_ctor_get(v_ext_2131_, 1);
v_toEnvExtension_2138_ = lean_ctor_get(v_ext_2137_, 0);
v_env_2139_ = lean_ctor_get(v___x_2136_, 0);
lean_inc_ref(v_env_2139_);
lean_dec(v___x_2136_);
v_asyncMode_2140_ = lean_ctor_get(v_toEnvExtension_2138_, 2);
v___x_2141_ = 0;
v___x_2142_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_2135_, v_ext_2131_, v_env_2139_, v_asyncMode_2140_, v___x_2141_);
v_funCC_2143_ = lean_ctor_get(v___x_2142_, 2);
lean_inc(v_funCC_2143_);
lean_dec(v___x_2142_);
v___x_2144_ = l_Lean_NameSet_contains(v_funCC_2143_, v_declName_2132_);
lean_dec(v_funCC_2143_);
v___x_2145_ = lean_box(v___x_2144_);
v___x_2146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2146_, 0, v___x_2145_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg___boxed(lean_object* v_ext_2147_, lean_object* v_declName_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_){
_start:
{
lean_object* v_res_2151_; 
v_res_2151_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(v_ext_2147_, v_declName_2148_, v_a_2149_);
lean_dec(v_a_2149_);
lean_dec(v_declName_2148_);
lean_dec_ref(v_ext_2147_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr(lean_object* v_ext_2152_, lean_object* v_declName_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_){
_start:
{
lean_object* v___x_2157_; 
v___x_2157_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(v_ext_2152_, v_declName_2153_, v_a_2155_);
return v___x_2157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___boxed(lean_object* v_ext_2158_, lean_object* v_declName_2159_, lean_object* v_a_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_){
_start:
{
lean_object* v_res_2163_; 
v_res_2163_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr(v_ext_2158_, v_declName_2159_, v_a_2160_, v_a_2161_);
lean_dec(v_a_2161_);
lean_dec_ref(v_a_2160_);
lean_dec(v_declName_2159_);
lean_dec_ref(v_ext_2158_);
return v_res_2163_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9(void){
_start:
{
lean_object* v___x_2187_; lean_object* v___x_2188_; 
v___x_2187_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__7));
v___x_2188_ = l_Lean_mkAtom(v___x_2187_);
return v___x_2188_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10(void){
_start:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; 
v___x_2189_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__9);
v___x_2190_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_2191_ = lean_array_push(v___x_2190_, v___x_2189_);
return v___x_2191_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15(void){
_start:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2200_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__14));
v___x_2201_ = l_Lean_mkAtom(v___x_2200_);
return v___x_2201_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16(void){
_start:
{
lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2202_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__15);
v___x_2203_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_2204_ = lean_array_push(v___x_2203_, v___x_2202_);
return v___x_2204_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17(void){
_start:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2205_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__16);
v___x_2206_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__13));
v___x_2207_ = lean_box(2);
v___x_2208_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2208_, 0, v___x_2207_);
lean_ctor_set(v___x_2208_, 1, v___x_2206_);
lean_ctor_set(v___x_2208_, 2, v___x_2205_);
return v___x_2208_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18(void){
_start:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; 
v___x_2209_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__17);
v___x_2210_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__10);
v___x_2211_ = lean_array_push(v___x_2210_, v___x_2209_);
return v___x_2211_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19(void){
_start:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; 
v___x_2212_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__18);
v___x_2213_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__8));
v___x_2214_ = lean_box(2);
v___x_2215_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2215_, 0, v___x_2214_);
lean_ctor_set(v___x_2215_, 1, v___x_2213_);
lean_ctor_set(v___x_2215_, 2, v___x_2212_);
return v___x_2215_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20(void){
_start:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; 
v___x_2216_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__19);
v___x_2217_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_2218_ = lean_array_push(v___x_2217_, v___x_2216_);
return v___x_2218_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21(void){
_start:
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___x_2219_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__20);
v___x_2220_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__6));
v___x_2221_ = lean_box(2);
v___x_2222_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2222_, 0, v___x_2221_);
lean_ctor_set(v___x_2222_, 1, v___x_2220_);
lean_ctor_set(v___x_2222_, 2, v___x_2219_);
return v___x_2222_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22(void){
_start:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___x_2223_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__21);
v___x_2224_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_2225_ = lean_array_push(v___x_2224_, v___x_2223_);
return v___x_2225_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23(void){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2226_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__22);
v___x_2227_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__4));
v___x_2228_ = lean_box(2);
v___x_2229_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2229_, 0, v___x_2228_);
lean_ctor_set(v___x_2229_, 1, v___x_2227_);
lean_ctor_set(v___x_2229_, 2, v___x_2226_);
return v___x_2229_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24(void){
_start:
{
lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; 
v___x_2230_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__23);
v___x_2231_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__2));
v___x_2232_ = lean_array_push(v___x_2231_, v___x_2230_);
return v___x_2232_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25(void){
_start:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2233_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__24);
v___x_2234_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__1));
v___x_2235_ = lean_box(2);
v___x_2236_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2236_, 0, v___x_2235_);
lean_ctor_set(v___x_2236_, 1, v___x_2234_);
lean_ctor_set(v___x_2236_, 2, v___x_2233_);
return v___x_2236_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1(void){
_start:
{
lean_object* v___x_2237_; 
v___x_2237_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0(lean_object* v_declName_2238_, lean_object* v_ext_2239_, lean_object* v_____r_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
uint8_t v___x_2246_; lean_object* v___x_2247_; 
v___x_2246_ = 0;
lean_inc(v_declName_2238_);
v___x_2247_ = l_Lean_Meta_Grind_isCasesAttrCandidate(v_declName_2238_, v___x_2246_, v___y_2243_, v___y_2244_);
if (lean_obj_tag(v___x_2247_) == 0)
{
lean_object* v_a_2248_; uint8_t v___x_2249_; 
v_a_2248_ = lean_ctor_get(v___x_2247_, 0);
lean_inc(v_a_2248_);
lean_dec_ref_known(v___x_2247_, 1);
v___x_2249_ = lean_unbox(v_a_2248_);
lean_dec(v_a_2248_);
if (v___x_2249_ == 0)
{
lean_object* v___x_2250_; lean_object* v_a_2251_; uint8_t v___x_2252_; 
v___x_2250_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isExtTheorem___redArg(v_ext_2239_, v_declName_2238_, v___y_2244_);
v_a_2251_ = lean_ctor_get(v___x_2250_, 0);
lean_inc(v_a_2251_);
lean_dec_ref(v___x_2250_);
v___x_2252_ = lean_unbox(v_a_2251_);
lean_dec(v_a_2251_);
if (v___x_2252_ == 0)
{
lean_object* v___x_2253_; lean_object* v_a_2254_; uint8_t v___x_2255_; 
lean_inc(v_declName_2238_);
v___x_2253_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_isInjectiveTheorem___redArg(v_ext_2239_, v_declName_2238_, v___y_2244_);
v_a_2254_ = lean_ctor_get(v___x_2253_, 0);
lean_inc(v_a_2254_);
lean_dec_ref(v___x_2253_);
v___x_2255_ = lean_unbox(v_a_2254_);
lean_dec(v_a_2254_);
if (v___x_2255_ == 0)
{
lean_object* v___x_2256_; lean_object* v_a_2257_; uint8_t v___x_2258_; 
v___x_2256_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_hasFunCCAttr___redArg(v_ext_2239_, v_declName_2238_, v___y_2244_);
v_a_2257_ = lean_ctor_get(v___x_2256_, 0);
lean_inc(v_a_2257_);
lean_dec_ref(v___x_2256_);
v___x_2258_ = lean_unbox(v_a_2257_);
lean_dec(v_a_2257_);
if (v___x_2258_ == 0)
{
lean_object* v___x_2259_; 
v___x_2259_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr(v_ext_2239_, v_declName_2238_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
return v___x_2259_;
}
else
{
lean_object* v___x_2260_; 
v___x_2260_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseFunCCAttr(v_ext_2239_, v_declName_2238_, v___y_2243_, v___y_2244_);
return v___x_2260_;
}
}
else
{
lean_object* v___x_2261_; 
v___x_2261_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseInjectiveAttr(v_ext_2239_, v_declName_2238_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
return v___x_2261_;
}
}
else
{
lean_object* v___x_2262_; 
v___x_2262_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseExtAttr(v_ext_2239_, v_declName_2238_, v___y_2243_, v___y_2244_);
return v___x_2262_;
}
}
else
{
lean_object* v___x_2263_; 
v___x_2263_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseCasesAttr(v_ext_2239_, v_declName_2238_, v___y_2243_, v___y_2244_);
return v___x_2263_;
}
}
else
{
lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2271_; 
lean_dec_ref(v_ext_2239_);
lean_dec(v_declName_2238_);
v_a_2264_ = lean_ctor_get(v___x_2247_, 0);
v_isSharedCheck_2271_ = !lean_is_exclusive(v___x_2247_);
if (v_isSharedCheck_2271_ == 0)
{
v___x_2266_ = v___x_2247_;
v_isShared_2267_ = v_isSharedCheck_2271_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v___x_2247_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2271_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2269_; 
if (v_isShared_2267_ == 0)
{
v___x_2269_ = v___x_2266_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v_a_2264_);
v___x_2269_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
return v___x_2269_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0___boxed(lean_object* v_declName_2272_, lean_object* v_ext_2273_, lean_object* v_____r_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_){
_start:
{
lean_object* v_res_2280_; 
v_res_2280_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0(v_declName_2272_, v_ext_2273_, v_____r_2274_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
lean_dec(v___y_2276_);
lean_dec_ref(v___y_2275_);
return v_res_2280_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0(lean_object* v_msgData_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_){
_start:
{
lean_object* v___x_2287_; lean_object* v_env_2288_; uint8_t v___x_2289_; lean_object* v_env_2290_; lean_object* v___x_2291_; lean_object* v_toCold_2292_; lean_object* v_mctx_2293_; lean_object* v_lctx_2294_; lean_object* v_options_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
v___x_2287_ = lean_st_ref_get(v___y_2285_);
v_env_2288_ = lean_ctor_get(v___x_2287_, 0);
lean_inc_ref(v_env_2288_);
lean_dec(v___x_2287_);
v___x_2289_ = 0;
v_env_2290_ = l_Lean_Environment_setRecordingDeps(v_env_2288_, v___x_2289_);
v___x_2291_ = lean_st_ref_get(v___y_2283_);
v_toCold_2292_ = lean_ctor_get(v___y_2284_, 0);
v_mctx_2293_ = lean_ctor_get(v___x_2291_, 0);
lean_inc_ref(v_mctx_2293_);
lean_dec(v___x_2291_);
v_lctx_2294_ = lean_ctor_get(v___y_2282_, 2);
v_options_2295_ = lean_ctor_get(v_toCold_2292_, 2);
lean_inc_ref(v_options_2295_);
lean_inc_ref(v_lctx_2294_);
v___x_2296_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2296_, 0, v_env_2290_);
lean_ctor_set(v___x_2296_, 1, v_mctx_2293_);
lean_ctor_set(v___x_2296_, 2, v_lctx_2294_);
lean_ctor_set(v___x_2296_, 3, v_options_2295_);
v___x_2297_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2297_, 0, v___x_2296_);
lean_ctor_set(v___x_2297_, 1, v_msgData_2281_);
v___x_2298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2297_);
return v___x_2298_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0___boxed(lean_object* v_msgData_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_){
_start:
{
lean_object* v_res_2305_; 
v_res_2305_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0(v_msgData_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
lean_dec(v___y_2303_);
lean_dec_ref(v___y_2302_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
return v_res_2305_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(lean_object* v_msg_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_){
_start:
{
lean_object* v_ref_2312_; lean_object* v___x_2313_; lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2322_; 
v_ref_2312_ = lean_ctor_get(v___y_2309_, 2);
v___x_2313_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0(v_msg_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_);
v_a_2314_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2316_ = v___x_2313_;
v_isShared_2317_ = v_isSharedCheck_2322_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_dec(v___x_2313_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2322_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2318_; lean_object* v___x_2320_; 
lean_inc(v_ref_2312_);
v___x_2318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2318_, 0, v_ref_2312_);
lean_ctor_set(v___x_2318_, 1, v_a_2314_);
if (v_isShared_2317_ == 0)
{
lean_ctor_set_tag(v___x_2316_, 1);
lean_ctor_set(v___x_2316_, 0, v___x_2318_);
v___x_2320_ = v___x_2316_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(1, 1, 0);
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
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg___boxed(lean_object* v_msg_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_){
_start:
{
lean_object* v_res_2329_; 
v_res_2329_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v_msg_2323_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_);
lean_dec(v___y_2327_);
lean_dec_ref(v___y_2326_);
lean_dec(v___y_2325_);
lean_dec_ref(v___y_2324_);
return v_res_2329_;
}
}
static uint64_t _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2336_; uint64_t v___x_2337_; 
v___x_2336_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0));
v___x_2337_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_2336_);
return v___x_2337_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2(void){
_start:
{
uint64_t v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2338_ = lean_uint64_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__1);
v___x_2339_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__0));
v___x_2340_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2340_, 0, v___x_2339_);
lean_ctor_set_uint64(v___x_2340_, sizeof(void*)*1, v___x_2338_);
return v___x_2340_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2341_; lean_object* v___x_2342_; 
v___x_2341_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__0);
v___x_2342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2341_);
return v___x_2342_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4(void){
_start:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; 
v___x_2343_ = lean_box(1);
v___x_2344_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4);
v___x_2345_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3);
v___x_2346_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2346_, 0, v___x_2345_);
lean_ctor_set(v___x_2346_, 1, v___x_2344_);
lean_ctor_set(v___x_2346_, 2, v___x_2343_);
return v___x_2346_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6(void){
_start:
{
lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2349_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_2350_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3);
v___x_2351_ = lean_unsigned_to_nat(0u);
v___x_2352_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2352_, 0, v___x_2351_);
lean_ctor_set(v___x_2352_, 1, v___x_2351_);
lean_ctor_set(v___x_2352_, 2, v___x_2351_);
lean_ctor_set(v___x_2352_, 3, v___x_2351_);
lean_ctor_set(v___x_2352_, 4, v___x_2350_);
lean_ctor_set(v___x_2352_, 5, v___x_2350_);
lean_ctor_set(v___x_2352_, 6, v___x_2350_);
lean_ctor_set(v___x_2352_, 7, v___x_2350_);
lean_ctor_set(v___x_2352_, 8, v___x_2350_);
lean_ctor_set(v___x_2352_, 9, v___x_2350_);
lean_ctor_set(v___x_2352_, 10, v___x_2350_);
lean_ctor_set(v___x_2352_, 11, v___x_2349_);
return v___x_2352_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7(void){
_start:
{
lean_object* v___x_2353_; lean_object* v___x_2354_; 
v___x_2353_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3);
v___x_2354_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2354_, 0, v___x_2353_);
lean_ctor_set(v___x_2354_, 1, v___x_2353_);
lean_ctor_set(v___x_2354_, 2, v___x_2353_);
lean_ctor_set(v___x_2354_, 3, v___x_2353_);
lean_ctor_set(v___x_2354_, 4, v___x_2353_);
lean_ctor_set(v___x_2354_, 5, v___x_2353_);
return v___x_2354_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8(void){
_start:
{
lean_object* v___x_2355_; lean_object* v___x_2356_; 
v___x_2355_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__3);
v___x_2356_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2355_);
lean_ctor_set(v___x_2356_, 1, v___x_2355_);
lean_ctor_set(v___x_2356_, 2, v___x_2355_);
lean_ctor_set(v___x_2356_, 3, v___x_2355_);
lean_ctor_set(v___x_2356_, 4, v___x_2355_);
return v___x_2356_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10(void){
_start:
{
lean_object* v___x_2358_; lean_object* v___x_2359_; 
v___x_2358_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__9));
v___x_2359_ = l_Lean_stringToMessageData(v___x_2358_);
return v___x_2359_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12(void){
_start:
{
lean_object* v___x_2361_; lean_object* v___x_2362_; 
v___x_2361_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__11));
v___x_2362_ = l_Lean_stringToMessageData(v___x_2361_);
return v___x_2362_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14(void){
_start:
{
lean_object* v___x_2364_; lean_object* v___x_2365_; 
v___x_2364_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__13));
v___x_2365_ = l_Lean_stringToMessageData(v___x_2364_);
return v___x_2365_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1(lean_object* v_ext_2366_, lean_object* v___x_2367_, uint8_t v_showInfo_2368_, lean_object* v_attrName_2369_, lean_object* v_declName_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_){
_start:
{
uint8_t v___x_2374_; uint8_t v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___y_2389_; 
v___x_2374_ = 1;
v___x_2375_ = 0;
v___x_2376_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2);
v___x_2377_ = lean_unsigned_to_nat(0u);
v___x_2378_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4);
v___x_2379_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4);
v___x_2380_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5));
v___x_2381_ = lean_box(0);
lean_inc(v___x_2367_);
v___x_2382_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2382_, 0, v___x_2376_);
lean_ctor_set(v___x_2382_, 1, v___x_2367_);
lean_ctor_set(v___x_2382_, 2, v___x_2379_);
lean_ctor_set(v___x_2382_, 3, v___x_2380_);
lean_ctor_set(v___x_2382_, 4, v___x_2381_);
lean_ctor_set(v___x_2382_, 5, v___x_2377_);
lean_ctor_set(v___x_2382_, 6, v___x_2381_);
lean_ctor_set_uint8(v___x_2382_, sizeof(void*)*7, v___x_2375_);
lean_ctor_set_uint8(v___x_2382_, sizeof(void*)*7 + 1, v___x_2375_);
lean_ctor_set_uint8(v___x_2382_, sizeof(void*)*7 + 2, v___x_2375_);
lean_ctor_set_uint8(v___x_2382_, sizeof(void*)*7 + 3, v___x_2374_);
v___x_2383_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6);
v___x_2384_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7);
v___x_2385_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8);
v___x_2386_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2383_);
lean_ctor_set(v___x_2386_, 1, v___x_2384_);
lean_ctor_set(v___x_2386_, 2, v___x_2367_);
lean_ctor_set(v___x_2386_, 3, v___x_2378_);
lean_ctor_set(v___x_2386_, 4, v___x_2385_);
v___x_2387_ = lean_st_mk_ref(v___x_2386_);
if (v_showInfo_2368_ == 0)
{
lean_object* v___x_2399_; lean_object* v___x_2400_; 
lean_dec(v_attrName_2369_);
v___x_2399_ = lean_box(0);
v___x_2400_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__0(v_declName_2370_, v_ext_2366_, v___x_2399_, v___x_2382_, v___x_2387_, v___y_2371_, v___y_2372_);
lean_dec_ref_known(v___x_2382_, 7);
v___y_2389_ = v___x_2400_;
goto v___jp_2388_;
}
else
{
lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; 
lean_dec(v_declName_2370_);
lean_dec_ref(v_ext_2366_);
v___x_2401_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__10);
v___x_2402_ = l_Lean_MessageData_ofName(v_attrName_2369_);
lean_inc_ref(v___x_2402_);
v___x_2403_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2403_, 0, v___x_2401_);
lean_ctor_set(v___x_2403_, 1, v___x_2402_);
v___x_2404_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__12);
v___x_2405_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2405_, 0, v___x_2403_);
lean_ctor_set(v___x_2405_, 1, v___x_2404_);
v___x_2406_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2406_, 0, v___x_2405_);
lean_ctor_set(v___x_2406_, 1, v___x_2402_);
v___x_2407_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__14);
v___x_2408_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2406_);
lean_ctor_set(v___x_2408_, 1, v___x_2407_);
v___x_2409_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2408_, v___x_2382_, v___x_2387_, v___y_2371_, v___y_2372_);
lean_dec(v___x_2387_);
lean_dec_ref_known(v___x_2382_, 7);
return v___x_2409_;
}
v___jp_2388_:
{
if (lean_obj_tag(v___y_2389_) == 0)
{
lean_object* v_a_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2398_; 
v_a_2390_ = lean_ctor_get(v___y_2389_, 0);
v_isSharedCheck_2398_ = !lean_is_exclusive(v___y_2389_);
if (v_isSharedCheck_2398_ == 0)
{
v___x_2392_ = v___y_2389_;
v_isShared_2393_ = v_isSharedCheck_2398_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_a_2390_);
lean_dec(v___y_2389_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2398_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v___x_2394_; lean_object* v___x_2396_; 
v___x_2394_ = lean_st_ref_get(v___x_2387_);
lean_dec(v___x_2387_);
lean_dec(v___x_2394_);
if (v_isShared_2393_ == 0)
{
v___x_2396_ = v___x_2392_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v_a_2390_);
v___x_2396_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
return v___x_2396_;
}
}
}
else
{
lean_dec(v___x_2387_);
return v___y_2389_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___boxed(lean_object* v_ext_2410_, lean_object* v___x_2411_, lean_object* v_showInfo_2412_, lean_object* v_attrName_2413_, lean_object* v_declName_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_){
_start:
{
uint8_t v_showInfo_boxed_2418_; lean_object* v_res_2419_; 
v_showInfo_boxed_2418_ = lean_unbox(v_showInfo_2412_);
v_res_2419_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1(v_ext_2410_, v___x_2411_, v_showInfo_boxed_2418_, v_attrName_2413_, v_declName_2414_, v___y_2415_, v___y_2416_);
lean_dec(v___y_2416_);
lean_dec_ref(v___y_2415_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(lean_object* v_ext_2422_, uint8_t v_attrKind_2423_, uint8_t v_showInfo_2424_, uint8_t v_minIndexable_2425_, lean_object* v_as_x27_2426_, lean_object* v_b_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_){
_start:
{
if (lean_obj_tag(v_as_x27_2426_) == 0)
{
lean_object* v___x_2433_; 
lean_dec_ref(v_ext_2422_);
v___x_2433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2433_, 0, v_b_2427_);
return v___x_2433_;
}
else
{
lean_object* v_head_2434_; lean_object* v_tail_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; 
v_head_2434_ = lean_ctor_get(v_as_x27_2426_, 0);
v_tail_2435_ = lean_ctor_get(v_as_x27_2426_, 1);
v___x_2436_ = lean_box(0);
v___x_2437_ = l_Lean_Meta_Grind_getGlobalSymbolPriorities___redArg(v___y_2431_);
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_object* v_a_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
lean_inc(v_a_2438_);
lean_dec_ref_known(v___x_2437_, 1);
v___x_2439_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___closed__0));
lean_inc(v_head_2434_);
lean_inc_ref(v_ext_2422_);
v___x_2440_ = l_Lean_Meta_Grind_Extension_addEMatchAttr(v_ext_2422_, v_head_2434_, v_attrKind_2423_, v___x_2439_, v_a_2438_, v_showInfo_2424_, v_minIndexable_2425_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_);
if (lean_obj_tag(v___x_2440_) == 0)
{
lean_dec_ref_known(v___x_2440_, 1);
v_as_x27_2426_ = v_tail_2435_;
v_b_2427_ = v___x_2436_;
goto _start;
}
else
{
lean_dec_ref(v_ext_2422_);
return v___x_2440_;
}
}
else
{
lean_object* v_a_2442_; lean_object* v___x_2444_; uint8_t v_isShared_2445_; uint8_t v_isSharedCheck_2449_; 
lean_dec_ref(v_ext_2422_);
v_a_2442_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2449_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2449_ == 0)
{
v___x_2444_ = v___x_2437_;
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
else
{
lean_inc(v_a_2442_);
lean_dec(v___x_2437_);
v___x_2444_ = lean_box(0);
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
v_resetjp_2443_:
{
lean_object* v___x_2447_; 
if (v_isShared_2445_ == 0)
{
v___x_2447_ = v___x_2444_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v_a_2442_);
v___x_2447_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
return v___x_2447_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg___boxed(lean_object* v_ext_2450_, lean_object* v_attrKind_2451_, lean_object* v_showInfo_2452_, lean_object* v_minIndexable_2453_, lean_object* v_as_x27_2454_, lean_object* v_b_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_){
_start:
{
uint8_t v_attrKind_boxed_2461_; uint8_t v_showInfo_boxed_2462_; uint8_t v_minIndexable_boxed_2463_; lean_object* v_res_2464_; 
v_attrKind_boxed_2461_ = lean_unbox(v_attrKind_2451_);
v_showInfo_boxed_2462_ = lean_unbox(v_showInfo_2452_);
v_minIndexable_boxed_2463_ = lean_unbox(v_minIndexable_2453_);
v_res_2464_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(v_ext_2450_, v_attrKind_boxed_2461_, v_showInfo_boxed_2462_, v_minIndexable_boxed_2463_, v_as_x27_2454_, v_b_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec(v_as_x27_2454_);
return v_res_2464_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1(void){
_start:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; 
v___x_2466_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__0));
v___x_2467_ = l_Lean_stringToMessageData(v___x_2466_);
return v___x_2467_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2469_; lean_object* v___x_2470_; 
v___x_2469_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__2));
v___x_2470_ = l_Lean_stringToMessageData(v___x_2469_);
return v___x_2470_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5(void){
_start:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2472_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__4));
v___x_2473_ = l_Lean_stringToMessageData(v___x_2472_);
return v___x_2473_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7(void){
_start:
{
lean_object* v___x_2475_; lean_object* v___x_2476_; 
v___x_2475_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__6));
v___x_2476_ = l_Lean_stringToMessageData(v___x_2475_);
return v___x_2476_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11(void){
_start:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2481_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__10));
v___x_2482_ = l_Lean_stringToMessageData(v___x_2481_);
return v___x_2482_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13(void){
_start:
{
lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2484_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__12));
v___x_2485_ = l_Lean_stringToMessageData(v___x_2484_);
return v___x_2485_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15(void){
_start:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2487_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__14));
v___x_2488_ = l_Lean_stringToMessageData(v___x_2487_);
return v___x_2488_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__17(void){
_start:
{
lean_object* v___x_2490_; lean_object* v___x_2491_; 
v___x_2490_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__16));
v___x_2491_ = l_Lean_stringToMessageData(v___x_2490_);
return v___x_2491_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__19(void){
_start:
{
lean_object* v___x_2493_; lean_object* v___x_2494_; 
v___x_2493_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__18));
v___x_2494_ = l_Lean_stringToMessageData(v___x_2493_);
return v___x_2494_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2(lean_object* v_declName_2495_, uint8_t v___x_2496_, uint8_t v_attrKind_2497_, lean_object* v_stx_2498_, lean_object* v_ext_2499_, uint8_t v_showInfo_2500_, uint8_t v_minIndexable_2501_, lean_object* v_attrName_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_){
_start:
{
lean_object* v___x_2532_; 
v___x_2532_ = l_Lean_Meta_Grind_getAttrKindFromOpt(v_stx_2498_, v___y_2505_, v___y_2506_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; 
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_a_2533_);
lean_dec_ref_known(v___x_2532_, 1);
switch(lean_obj_tag(v_a_2533_))
{
case 0:
{
lean_object* v_k_2534_; 
lean_dec(v_attrName_2502_);
lean_dec(v_stx_2498_);
v_k_2534_ = lean_ctor_get(v_a_2533_, 0);
lean_inc(v_k_2534_);
lean_dec_ref_known(v_a_2533_, 1);
if (lean_obj_tag(v_k_2534_) == 9)
{
lean_object* v___x_2535_; 
lean_dec_ref(v_ext_2499_);
lean_dec(v_declName_2495_);
v___x_2535_ = l_Lean_Meta_Grind_throwInvalidUsrModifier___redArg(v___y_2505_, v___y_2506_);
return v___x_2535_;
}
else
{
lean_object* v___x_2536_; 
v___x_2536_ = l_Lean_Meta_Grind_getGlobalSymbolPriorities___redArg(v___y_2506_);
if (lean_obj_tag(v___x_2536_) == 0)
{
lean_object* v_a_2537_; lean_object* v___x_2538_; 
v_a_2537_ = lean_ctor_get(v___x_2536_, 0);
lean_inc(v_a_2537_);
lean_dec_ref_known(v___x_2536_, 1);
v___x_2538_ = l_Lean_Meta_Grind_Extension_addEMatchAttr(v_ext_2499_, v_declName_2495_, v_attrKind_2497_, v_k_2534_, v_a_2537_, v_showInfo_2500_, v_minIndexable_2501_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
return v___x_2538_;
}
else
{
lean_object* v_a_2539_; lean_object* v___x_2541_; uint8_t v_isShared_2542_; uint8_t v_isSharedCheck_2546_; 
lean_dec(v_k_2534_);
lean_dec_ref(v_ext_2499_);
lean_dec(v_declName_2495_);
v_a_2539_ = lean_ctor_get(v___x_2536_, 0);
v_isSharedCheck_2546_ = !lean_is_exclusive(v___x_2536_);
if (v_isSharedCheck_2546_ == 0)
{
v___x_2541_ = v___x_2536_;
v_isShared_2542_ = v_isSharedCheck_2546_;
goto v_resetjp_2540_;
}
else
{
lean_inc(v_a_2539_);
lean_dec(v___x_2536_);
v___x_2541_ = lean_box(0);
v_isShared_2542_ = v_isSharedCheck_2546_;
goto v_resetjp_2540_;
}
v_resetjp_2540_:
{
lean_object* v___x_2544_; 
if (v_isShared_2542_ == 0)
{
v___x_2544_ = v___x_2541_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2545_, 0, v_a_2539_);
v___x_2544_ = v_reuseFailAlloc_2545_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
return v___x_2544_;
}
}
}
}
}
case 1:
{
uint8_t v_eager_2547_; lean_object* v___x_2548_; 
lean_dec(v_attrName_2502_);
lean_dec(v_stx_2498_);
v_eager_2547_ = lean_ctor_get_uint8(v_a_2533_, 0);
lean_dec_ref_known(v_a_2533_, 0);
v___x_2548_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(v_ext_2499_, v_declName_2495_, v_eager_2547_, v_attrKind_2497_, v___y_2505_, v___y_2506_);
return v___x_2548_;
}
case 2:
{
lean_object* v___x_2549_; 
lean_dec(v_stx_2498_);
lean_inc(v_declName_2495_);
v___x_2549_ = l_Lean_Meta_Grind_isCasesAttrPredicateCandidate_x3f(v_declName_2495_, v___x_2496_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
if (lean_obj_tag(v___x_2549_) == 0)
{
lean_object* v_a_2550_; 
v_a_2550_ = lean_ctor_get(v___x_2549_, 0);
lean_inc(v_a_2550_);
lean_dec_ref_known(v___x_2549_, 1);
if (lean_obj_tag(v_a_2550_) == 1)
{
lean_object* v_val_2551_; lean_object* v_ctors_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; 
lean_dec(v_attrName_2502_);
lean_dec(v_declName_2495_);
v_val_2551_ = lean_ctor_get(v_a_2550_, 0);
lean_inc(v_val_2551_);
lean_dec_ref_known(v_a_2550_, 1);
v_ctors_2552_ = lean_ctor_get(v_val_2551_, 4);
lean_inc(v_ctors_2552_);
lean_dec(v_val_2551_);
v___x_2553_ = lean_box(0);
v___x_2554_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(v_ext_2499_, v_attrKind_2497_, v_showInfo_2500_, v_minIndexable_2501_, v_ctors_2552_, v___x_2553_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
lean_dec(v_ctors_2552_);
if (lean_obj_tag(v___x_2554_) == 0)
{
lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2561_; 
v_isSharedCheck_2561_ = !lean_is_exclusive(v___x_2554_);
if (v_isSharedCheck_2561_ == 0)
{
lean_object* v_unused_2562_; 
v_unused_2562_ = lean_ctor_get(v___x_2554_, 0);
lean_dec(v_unused_2562_);
v___x_2556_ = v___x_2554_;
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
else
{
lean_dec(v___x_2554_);
v___x_2556_ = lean_box(0);
v_isShared_2557_ = v_isSharedCheck_2561_;
goto v_resetjp_2555_;
}
v_resetjp_2555_:
{
lean_object* v___x_2559_; 
if (v_isShared_2557_ == 0)
{
lean_ctor_set(v___x_2556_, 0, v___x_2553_);
v___x_2559_ = v___x_2556_;
goto v_reusejp_2558_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v___x_2553_);
v___x_2559_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2558_;
}
v_reusejp_2558_:
{
return v___x_2559_;
}
}
}
else
{
return v___x_2554_;
}
}
else
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
lean_dec(v_a_2550_);
lean_dec_ref(v_ext_2499_);
v___x_2563_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__3);
v___x_2564_ = l_Lean_MessageData_ofName(v_attrName_2502_);
v___x_2565_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2565_, 0, v___x_2563_);
lean_ctor_set(v___x_2565_, 1, v___x_2564_);
v___x_2566_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__5);
v___x_2567_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2565_);
lean_ctor_set(v___x_2567_, 1, v___x_2566_);
v___x_2568_ = l_Lean_MessageData_ofConstName(v_declName_2495_, v___x_2496_);
v___x_2569_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2567_);
lean_ctor_set(v___x_2569_, 1, v___x_2568_);
v___x_2570_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__7);
v___x_2571_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2571_, 0, v___x_2569_);
lean_ctor_set(v___x_2571_, 1, v___x_2570_);
v___x_2572_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2571_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
return v___x_2572_;
}
}
else
{
lean_object* v_a_2573_; lean_object* v___x_2575_; uint8_t v_isShared_2576_; uint8_t v_isSharedCheck_2580_; 
lean_dec(v_attrName_2502_);
lean_dec_ref(v_ext_2499_);
lean_dec(v_declName_2495_);
v_a_2573_ = lean_ctor_get(v___x_2549_, 0);
v_isSharedCheck_2580_ = !lean_is_exclusive(v___x_2549_);
if (v_isSharedCheck_2580_ == 0)
{
v___x_2575_ = v___x_2549_;
v_isShared_2576_ = v_isSharedCheck_2580_;
goto v_resetjp_2574_;
}
else
{
lean_inc(v_a_2573_);
lean_dec(v___x_2549_);
v___x_2575_ = lean_box(0);
v_isShared_2576_ = v_isSharedCheck_2580_;
goto v_resetjp_2574_;
}
v_resetjp_2574_:
{
lean_object* v___x_2578_; 
if (v_isShared_2576_ == 0)
{
v___x_2578_ = v___x_2575_;
goto v_reusejp_2577_;
}
else
{
lean_object* v_reuseFailAlloc_2579_; 
v_reuseFailAlloc_2579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2579_, 0, v_a_2573_);
v___x_2578_ = v_reuseFailAlloc_2579_;
goto v_reusejp_2577_;
}
v_reusejp_2577_:
{
return v___x_2578_;
}
}
}
}
case 3:
{
lean_object* v___x_2581_; 
lean_dec(v_attrName_2502_);
lean_inc(v_declName_2495_);
v___x_2581_ = l_Lean_Meta_Grind_isCasesAttrCandidate_x3f(v_declName_2495_, v___x_2496_, v___y_2505_, v___y_2506_);
if (lean_obj_tag(v___x_2581_) == 0)
{
lean_object* v_a_2582_; 
v_a_2582_ = lean_ctor_get(v___x_2581_, 0);
lean_inc(v_a_2582_);
lean_dec_ref_known(v___x_2581_, 1);
if (lean_obj_tag(v_a_2582_) == 1)
{
lean_object* v_val_2583_; lean_object* v___x_2584_; 
lean_dec(v_stx_2498_);
lean_dec(v_declName_2495_);
v_val_2583_ = lean_ctor_get(v_a_2582_, 0);
lean_inc_n(v_val_2583_, 2);
lean_dec_ref_known(v_a_2582_, 1);
lean_inc_ref(v_ext_2499_);
v___x_2584_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr(v_ext_2499_, v_val_2583_, v___x_2496_, v_attrKind_2497_, v___y_2505_, v___y_2506_);
if (lean_obj_tag(v___x_2584_) == 0)
{
lean_object* v___x_2585_; 
lean_dec_ref_known(v___x_2584_, 1);
v___x_2585_ = l_Lean_Meta_isInductivePredicate_x3f(v_val_2583_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
if (lean_obj_tag(v___x_2585_) == 0)
{
lean_object* v_a_2586_; lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2606_; 
v_a_2586_ = lean_ctor_get(v___x_2585_, 0);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___x_2585_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2588_ = v___x_2585_;
v_isShared_2589_ = v_isSharedCheck_2606_;
goto v_resetjp_2587_;
}
else
{
lean_inc(v_a_2586_);
lean_dec(v___x_2585_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2606_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
if (lean_obj_tag(v_a_2586_) == 1)
{
lean_object* v_val_2590_; lean_object* v_ctors_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
lean_del_object(v___x_2588_);
v_val_2590_ = lean_ctor_get(v_a_2586_, 0);
lean_inc(v_val_2590_);
lean_dec_ref_known(v_a_2586_, 1);
v_ctors_2591_ = lean_ctor_get(v_val_2590_, 4);
lean_inc(v_ctors_2591_);
lean_dec(v_val_2590_);
v___x_2592_ = lean_box(0);
v___x_2593_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(v_ext_2499_, v_attrKind_2497_, v_showInfo_2500_, v_minIndexable_2501_, v_ctors_2591_, v___x_2592_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
lean_dec(v_ctors_2591_);
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2600_; 
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2593_);
if (v_isSharedCheck_2600_ == 0)
{
lean_object* v_unused_2601_; 
v_unused_2601_ = lean_ctor_get(v___x_2593_, 0);
lean_dec(v_unused_2601_);
v___x_2595_ = v___x_2593_;
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
else
{
lean_dec(v___x_2593_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
lean_object* v___x_2598_; 
if (v_isShared_2596_ == 0)
{
lean_ctor_set(v___x_2595_, 0, v___x_2592_);
v___x_2598_ = v___x_2595_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v___x_2592_);
v___x_2598_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
return v___x_2598_;
}
}
}
else
{
return v___x_2593_;
}
}
else
{
lean_object* v___x_2602_; lean_object* v___x_2604_; 
lean_dec(v_a_2586_);
lean_dec_ref(v_ext_2499_);
v___x_2602_ = lean_box(0);
if (v_isShared_2589_ == 0)
{
lean_ctor_set(v___x_2588_, 0, v___x_2602_);
v___x_2604_ = v___x_2588_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v___x_2602_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
}
}
else
{
lean_object* v_a_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2614_; 
lean_dec_ref(v_ext_2499_);
v_a_2607_ = lean_ctor_get(v___x_2585_, 0);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2585_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2609_ = v___x_2585_;
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_a_2607_);
lean_dec(v___x_2585_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2612_; 
if (v_isShared_2610_ == 0)
{
v___x_2612_ = v___x_2609_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v_a_2607_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
}
else
{
lean_dec(v_val_2583_);
lean_dec_ref(v_ext_2499_);
return v___x_2584_;
}
}
else
{
lean_object* v___x_2615_; 
lean_dec(v_a_2582_);
v___x_2615_ = l_Lean_Meta_Grind_getGlobalSymbolPriorities___redArg(v___y_2506_);
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v_a_2616_; lean_object* v___x_2617_; 
v_a_2616_ = lean_ctor_get(v___x_2615_, 0);
lean_inc(v_a_2616_);
lean_dec_ref_known(v___x_2615_, 1);
v___x_2617_ = l_Lean_Meta_Grind_Extension_addEMatchAttrAndSuggest(v_ext_2499_, v_stx_2498_, v_declName_2495_, v_attrKind_2497_, v_a_2616_, v_minIndexable_2501_, v_showInfo_2500_, v___x_2496_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
return v___x_2617_;
}
else
{
lean_object* v_a_2618_; lean_object* v___x_2620_; uint8_t v_isShared_2621_; uint8_t v_isSharedCheck_2625_; 
lean_dec_ref(v_ext_2499_);
lean_dec(v_stx_2498_);
lean_dec(v_declName_2495_);
v_a_2618_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2625_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2625_ == 0)
{
v___x_2620_ = v___x_2615_;
v_isShared_2621_ = v_isSharedCheck_2625_;
goto v_resetjp_2619_;
}
else
{
lean_inc(v_a_2618_);
lean_dec(v___x_2615_);
v___x_2620_ = lean_box(0);
v_isShared_2621_ = v_isSharedCheck_2625_;
goto v_resetjp_2619_;
}
v_resetjp_2619_:
{
lean_object* v___x_2623_; 
if (v_isShared_2621_ == 0)
{
v___x_2623_ = v___x_2620_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v_a_2618_);
v___x_2623_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
return v___x_2623_;
}
}
}
}
}
else
{
lean_object* v_a_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2633_; 
lean_dec_ref(v_ext_2499_);
lean_dec(v_stx_2498_);
lean_dec(v_declName_2495_);
v_a_2626_ = lean_ctor_get(v___x_2581_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v___x_2581_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2628_ = v___x_2581_;
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_a_2626_);
lean_dec(v___x_2581_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2631_; 
if (v_isShared_2629_ == 0)
{
v___x_2631_ = v___x_2628_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v_a_2626_);
v___x_2631_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
return v___x_2631_;
}
}
}
}
case 4:
{
lean_object* v___x_2634_; 
lean_dec(v_attrName_2502_);
lean_dec(v_stx_2498_);
v___x_2634_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addExtAttr(v_ext_2499_, v_declName_2495_, v_attrKind_2497_, v___y_2505_, v___y_2506_);
return v___x_2634_;
}
case 5:
{
lean_object* v_prio_2635_; lean_object* v___x_2636_; uint8_t v___x_2637_; 
lean_dec_ref(v_ext_2499_);
lean_dec(v_stx_2498_);
v_prio_2635_ = lean_ctor_get(v_a_2533_, 0);
lean_inc(v_prio_2635_);
lean_dec_ref_known(v_a_2533_, 1);
v___x_2636_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_2637_ = lean_name_eq(v_attrName_2502_, v___x_2636_);
lean_dec(v_attrName_2502_);
if (v___x_2637_ == 0)
{
lean_object* v___x_2638_; lean_object* v___x_2639_; 
lean_dec(v_prio_2635_);
lean_dec(v_declName_2495_);
v___x_2638_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__11);
v___x_2639_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2638_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
return v___x_2639_;
}
else
{
lean_object* v___x_2640_; 
v___x_2640_ = l_Lean_Meta_Grind_addSymbolPriorityAttr(v_declName_2495_, v_attrKind_2497_, v_prio_2635_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
return v___x_2640_;
}
}
case 6:
{
lean_object* v___x_2641_; 
lean_dec(v_attrName_2502_);
lean_dec(v_stx_2498_);
v___x_2641_ = l_Lean_Meta_Grind_Extension_addInjectiveAttr(v_ext_2499_, v_declName_2495_, v_attrKind_2497_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
return v___x_2641_;
}
case 7:
{
lean_object* v___x_2642_; 
lean_dec(v_attrName_2502_);
lean_dec(v_stx_2498_);
v___x_2642_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addFunCCAttr(v_ext_2499_, v_declName_2495_, v_attrKind_2497_, v___y_2505_, v___y_2506_);
return v___x_2642_;
}
case 8:
{
uint8_t v_post_2643_; uint8_t v_inv_2644_; lean_object* v___y_2646_; lean_object* v___y_2647_; lean_object* v___y_2648_; lean_object* v___y_2649_; lean_object* v___x_2653_; uint8_t v___x_2654_; 
lean_dec_ref(v_ext_2499_);
lean_dec(v_stx_2498_);
v_post_2643_ = lean_ctor_get_uint8(v_a_2533_, 0);
v_inv_2644_ = lean_ctor_get_uint8(v_a_2533_, 1);
lean_dec_ref_known(v_a_2533_, 0);
v___x_2653_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_2654_ = lean_name_eq(v_attrName_2502_, v___x_2653_);
lean_dec(v_attrName_2502_);
if (v___x_2654_ == 0)
{
lean_object* v___x_2655_; lean_object* v___x_2656_; 
lean_dec(v_declName_2495_);
v___x_2655_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__13);
v___x_2656_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2655_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
return v___x_2656_;
}
else
{
v___y_2646_ = v___y_2503_;
v___y_2647_ = v___y_2504_;
v___y_2648_ = v___y_2505_;
v___y_2649_ = v___y_2506_;
goto v___jp_2645_;
}
v___jp_2645_:
{
lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; 
v___x_2650_ = l_Lean_Meta_Grind_normExt;
v___x_2651_ = lean_unsigned_to_nat(1000u);
v___x_2652_ = l_Lean_Meta_addSimpTheorem(v___x_2650_, v_declName_2495_, v_post_2643_, v_inv_2644_, v_attrKind_2497_, v___x_2651_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_);
return v___x_2652_;
}
}
case 9:
{
lean_object* v___x_2657_; uint8_t v___x_2658_; 
lean_dec_ref(v_ext_2499_);
lean_dec(v_stx_2498_);
v___x_2657_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_2658_ = lean_name_eq(v_attrName_2502_, v___x_2657_);
lean_dec(v_attrName_2502_);
if (v___x_2658_ == 0)
{
lean_object* v___x_2659_; lean_object* v___x_2660_; 
lean_dec(v_declName_2495_);
v___x_2659_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__15);
v___x_2660_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2659_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
return v___x_2660_;
}
else
{
goto v___jp_2508_;
}
}
case 10:
{
uint8_t v_fallback_2661_; lean_object* v___x_2662_; uint8_t v___x_2663_; 
lean_dec_ref(v_ext_2499_);
lean_dec(v_stx_2498_);
v_fallback_2661_ = lean_ctor_get_uint8(v_a_2533_, 0);
lean_dec_ref_known(v_a_2533_, 0);
v___x_2662_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_2663_ = lean_name_eq(v_attrName_2502_, v___x_2662_);
lean_dec(v_attrName_2502_);
if (v___x_2663_ == 0)
{
lean_object* v___x_2664_; lean_object* v___x_2665_; 
lean_dec(v_declName_2495_);
v___x_2664_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__17, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__17_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__17);
v___x_2665_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2664_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
return v___x_2665_;
}
else
{
lean_object* v___x_2666_; 
v___x_2666_ = l_Lean_Meta_Grind_addHomoAttr(v_declName_2495_, v_attrKind_2497_, v_fallback_2661_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
return v___x_2666_;
}
}
default: 
{
lean_object* v___x_2667_; uint8_t v___x_2668_; 
lean_dec_ref(v_ext_2499_);
lean_dec(v_stx_2498_);
v___x_2667_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_2668_ = lean_name_eq(v_attrName_2502_, v___x_2667_);
lean_dec(v_attrName_2502_);
if (v___x_2668_ == 0)
{
lean_object* v___x_2669_; lean_object* v___x_2670_; 
lean_dec(v_declName_2495_);
v___x_2669_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__19, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__19_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__19);
v___x_2670_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2669_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
return v___x_2670_;
}
else
{
lean_object* v___x_2671_; 
v___x_2671_ = l_Lean_Meta_Grind_addHomoPredAttr(v_declName_2495_, v_attrKind_2497_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
return v___x_2671_;
}
}
}
}
else
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2679_; 
lean_dec(v_attrName_2502_);
lean_dec_ref(v_ext_2499_);
lean_dec(v_stx_2498_);
lean_dec(v_declName_2495_);
v_a_2672_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2674_ = v___x_2532_;
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v___x_2532_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2677_; 
if (v_isShared_2675_ == 0)
{
v___x_2677_ = v___x_2674_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_a_2672_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
v___jp_2508_:
{
lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2509_ = l_Lean_Meta_Grind_normExt;
v___x_2510_ = lean_unsigned_to_nat(1000u);
v___x_2511_ = l_Lean_Meta_addDeclToUnfold(v___x_2509_, v_declName_2495_, v___x_2496_, v___x_2496_, v___x_2510_, v_attrKind_2497_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_a_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2523_; 
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2523_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2514_ = v___x_2511_;
v_isShared_2515_ = v_isSharedCheck_2523_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_a_2512_);
lean_dec(v___x_2511_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2523_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
uint8_t v___x_2516_; 
v___x_2516_ = lean_unbox(v_a_2512_);
lean_dec(v_a_2512_);
if (v___x_2516_ == 0)
{
lean_object* v___x_2517_; lean_object* v___x_2518_; 
lean_del_object(v___x_2514_);
v___x_2517_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__1);
v___x_2518_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v___x_2517_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
return v___x_2518_;
}
else
{
lean_object* v___x_2519_; lean_object* v___x_2521_; 
v___x_2519_ = lean_box(0);
if (v_isShared_2515_ == 0)
{
lean_ctor_set(v___x_2514_, 0, v___x_2519_);
v___x_2521_ = v___x_2514_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v___x_2519_);
v___x_2521_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
return v___x_2521_;
}
}
}
}
else
{
lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2531_; 
v_a_2524_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2531_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2526_ = v___x_2511_;
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_dec(v___x_2511_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2529_; 
if (v_isShared_2527_ == 0)
{
v___x_2529_ = v___x_2526_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v_a_2524_);
v___x_2529_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
return v___x_2529_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___boxed(lean_object* v_declName_2680_, lean_object* v___x_2681_, lean_object* v_attrKind_2682_, lean_object* v_stx_2683_, lean_object* v_ext_2684_, lean_object* v_showInfo_2685_, lean_object* v_minIndexable_2686_, lean_object* v_attrName_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_){
_start:
{
uint8_t v___x_16221__boxed_2693_; uint8_t v_attrKind_boxed_2694_; uint8_t v_showInfo_boxed_2695_; uint8_t v_minIndexable_boxed_2696_; lean_object* v_res_2697_; 
v___x_16221__boxed_2693_ = lean_unbox(v___x_2681_);
v_attrKind_boxed_2694_ = lean_unbox(v_attrKind_2682_);
v_showInfo_boxed_2695_ = lean_unbox(v_showInfo_2685_);
v_minIndexable_boxed_2696_ = lean_unbox(v_minIndexable_2686_);
v_res_2697_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2(v_declName_2680_, v___x_16221__boxed_2693_, v_attrKind_boxed_2694_, v_stx_2683_, v_ext_2684_, v_showInfo_boxed_2695_, v_minIndexable_boxed_2696_, v_attrName_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_);
lean_dec(v___y_2691_);
lean_dec_ref(v___y_2690_);
lean_dec(v___y_2689_);
lean_dec_ref(v___y_2688_);
return v_res_2697_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___redArg(lean_object* v_keys_2698_, lean_object* v_i_2699_, lean_object* v_k_2700_){
_start:
{
lean_object* v___x_2701_; uint8_t v___x_2702_; 
v___x_2701_ = lean_array_get_size(v_keys_2698_);
v___x_2702_ = lean_nat_dec_lt(v_i_2699_, v___x_2701_);
if (v___x_2702_ == 0)
{
lean_dec(v_i_2699_);
return v___x_2702_;
}
else
{
lean_object* v_k_x27_2703_; uint8_t v___x_2704_; 
v_k_x27_2703_ = lean_array_fget_borrowed(v_keys_2698_, v_i_2699_);
v___x_2704_ = l_Lean_instBEqExtraModUse_beq(v_k_2700_, v_k_x27_2703_);
if (v___x_2704_ == 0)
{
lean_object* v___x_2705_; lean_object* v___x_2706_; 
v___x_2705_ = lean_unsigned_to_nat(1u);
v___x_2706_ = lean_nat_add(v_i_2699_, v___x_2705_);
lean_dec(v_i_2699_);
v_i_2699_ = v___x_2706_;
goto _start;
}
else
{
lean_dec(v_i_2699_);
return v___x_2702_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___redArg___boxed(lean_object* v_keys_2708_, lean_object* v_i_2709_, lean_object* v_k_2710_){
_start:
{
uint8_t v_res_2711_; lean_object* v_r_2712_; 
v_res_2711_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___redArg(v_keys_2708_, v_i_2709_, v_k_2710_);
lean_dec_ref(v_k_2710_);
lean_dec_ref(v_keys_2708_);
v_r_2712_ = lean_box(v_res_2711_);
return v_r_2712_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg(lean_object* v_x_2713_, size_t v_x_2714_, lean_object* v_x_2715_){
_start:
{
if (lean_obj_tag(v_x_2713_) == 0)
{
lean_object* v_es_2716_; lean_object* v___x_2717_; size_t v___x_2718_; size_t v___x_2719_; lean_object* v_j_2720_; lean_object* v___x_2721_; 
v_es_2716_ = lean_ctor_get(v_x_2713_, 0);
v___x_2717_ = lean_box(2);
v___x_2718_ = ((size_t)31ULL);
v___x_2719_ = lean_usize_land(v_x_2714_, v___x_2718_);
v_j_2720_ = lean_usize_to_nat(v___x_2719_);
v___x_2721_ = lean_array_get_borrowed(v___x_2717_, v_es_2716_, v_j_2720_);
lean_dec(v_j_2720_);
switch(lean_obj_tag(v___x_2721_))
{
case 0:
{
lean_object* v_key_2722_; uint8_t v___x_2723_; 
v_key_2722_ = lean_ctor_get(v___x_2721_, 0);
v___x_2723_ = l_Lean_instBEqExtraModUse_beq(v_x_2715_, v_key_2722_);
return v___x_2723_;
}
case 1:
{
lean_object* v_node_2724_; size_t v___x_2725_; size_t v___x_2726_; 
v_node_2724_ = lean_ctor_get(v___x_2721_, 0);
v___x_2725_ = ((size_t)5ULL);
v___x_2726_ = lean_usize_shift_right(v_x_2714_, v___x_2725_);
v_x_2713_ = v_node_2724_;
v_x_2714_ = v___x_2726_;
goto _start;
}
default: 
{
uint8_t v___x_2728_; 
v___x_2728_ = 0;
return v___x_2728_;
}
}
}
else
{
lean_object* v_ks_2729_; lean_object* v___x_2730_; uint8_t v___x_2731_; 
v_ks_2729_ = lean_ctor_get(v_x_2713_, 0);
v___x_2730_ = lean_unsigned_to_nat(0u);
v___x_2731_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___redArg(v_ks_2729_, v___x_2730_, v_x_2715_);
return v___x_2731_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg___boxed(lean_object* v_x_2732_, lean_object* v_x_2733_, lean_object* v_x_2734_){
_start:
{
size_t v_x_16638__boxed_2735_; uint8_t v_res_2736_; lean_object* v_r_2737_; 
v_x_16638__boxed_2735_ = lean_unbox_usize(v_x_2733_);
lean_dec(v_x_2733_);
v_res_2736_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg(v_x_2732_, v_x_16638__boxed_2735_, v_x_2734_);
lean_dec_ref(v_x_2734_);
lean_dec_ref(v_x_2732_);
v_r_2737_ = lean_box(v_res_2736_);
return v_r_2737_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(lean_object* v_x_2738_, lean_object* v_x_2739_){
_start:
{
uint64_t v___x_2740_; size_t v___x_2741_; uint8_t v___x_2742_; 
v___x_2740_ = l_Lean_instHashableExtraModUse_hash(v_x_2739_);
v___x_2741_ = lean_uint64_to_usize(v___x_2740_);
v___x_2742_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg(v_x_2738_, v___x_2741_, v_x_2739_);
return v___x_2742_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_x_2743_, lean_object* v_x_2744_){
_start:
{
uint8_t v_res_2745_; lean_object* v_r_2746_; 
v_res_2745_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(v_x_2743_, v_x_2744_);
lean_dec_ref(v_x_2744_);
lean_dec_ref(v_x_2743_);
v_r_2746_ = lean_box(v_res_2745_);
return v_r_2746_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___lam__0(lean_object* v___x_2747_, lean_object* v_entry_2748_, lean_object* v_s_2749_){
_start:
{
lean_object* v_addEntryFn_2750_; lean_object* v_importedEntries_2751_; lean_object* v_state_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2760_; 
v_addEntryFn_2750_ = lean_ctor_get(v___x_2747_, 3);
lean_inc(v_addEntryFn_2750_);
lean_dec_ref(v___x_2747_);
v_importedEntries_2751_ = lean_ctor_get(v_s_2749_, 0);
v_state_2752_ = lean_ctor_get(v_s_2749_, 1);
v_isSharedCheck_2760_ = !lean_is_exclusive(v_s_2749_);
if (v_isSharedCheck_2760_ == 0)
{
v___x_2754_ = v_s_2749_;
v_isShared_2755_ = v_isSharedCheck_2760_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_state_2752_);
lean_inc(v_importedEntries_2751_);
lean_dec(v_s_2749_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2760_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v_state_2756_; lean_object* v___x_2758_; 
v_state_2756_ = lean_apply_2(v_addEntryFn_2750_, v_state_2752_, v_entry_2748_);
if (v_isShared_2755_ == 0)
{
lean_ctor_set(v___x_2754_, 1, v_state_2756_);
v___x_2758_ = v___x_2754_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_importedEntries_2751_);
lean_ctor_set(v_reuseFailAlloc_2759_, 1, v_state_2756_);
v___x_2758_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
return v___x_2758_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10_spec__14_spec__17___redArg(lean_object* v_x_2761_, lean_object* v_x_2762_){
_start:
{
if (lean_obj_tag(v_x_2762_) == 0)
{
return v_x_2761_;
}
else
{
lean_object* v_key_2763_; lean_object* v_value_2764_; lean_object* v_tail_2765_; lean_object* v___x_2767_; uint8_t v_isShared_2768_; uint8_t v_isSharedCheck_2788_; 
v_key_2763_ = lean_ctor_get(v_x_2762_, 0);
v_value_2764_ = lean_ctor_get(v_x_2762_, 1);
v_tail_2765_ = lean_ctor_get(v_x_2762_, 2);
v_isSharedCheck_2788_ = !lean_is_exclusive(v_x_2762_);
if (v_isSharedCheck_2788_ == 0)
{
v___x_2767_ = v_x_2762_;
v_isShared_2768_ = v_isSharedCheck_2788_;
goto v_resetjp_2766_;
}
else
{
lean_inc(v_tail_2765_);
lean_inc(v_value_2764_);
lean_inc(v_key_2763_);
lean_dec(v_x_2762_);
v___x_2767_ = lean_box(0);
v_isShared_2768_ = v_isSharedCheck_2788_;
goto v_resetjp_2766_;
}
v_resetjp_2766_:
{
lean_object* v___x_2769_; uint64_t v___x_2770_; uint64_t v___x_2771_; uint64_t v___x_2772_; uint64_t v_fold_2773_; uint64_t v___x_2774_; uint64_t v___x_2775_; uint64_t v___x_2776_; size_t v___x_2777_; size_t v___x_2778_; size_t v___x_2779_; size_t v___x_2780_; size_t v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2784_; 
v___x_2769_ = lean_array_get_size(v_x_2761_);
v___x_2770_ = l_Lean_instHashableExtraModUse_hash(v_key_2763_);
v___x_2771_ = 32ULL;
v___x_2772_ = lean_uint64_shift_right(v___x_2770_, v___x_2771_);
v_fold_2773_ = lean_uint64_xor(v___x_2770_, v___x_2772_);
v___x_2774_ = 16ULL;
v___x_2775_ = lean_uint64_shift_right(v_fold_2773_, v___x_2774_);
v___x_2776_ = lean_uint64_xor(v_fold_2773_, v___x_2775_);
v___x_2777_ = lean_uint64_to_usize(v___x_2776_);
v___x_2778_ = lean_usize_of_nat(v___x_2769_);
v___x_2779_ = ((size_t)1ULL);
v___x_2780_ = lean_usize_sub(v___x_2778_, v___x_2779_);
v___x_2781_ = lean_usize_land(v___x_2777_, v___x_2780_);
v___x_2782_ = lean_array_uget_borrowed(v_x_2761_, v___x_2781_);
lean_inc(v___x_2782_);
if (v_isShared_2768_ == 0)
{
lean_ctor_set(v___x_2767_, 2, v___x_2782_);
v___x_2784_ = v___x_2767_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v_key_2763_);
lean_ctor_set(v_reuseFailAlloc_2787_, 1, v_value_2764_);
lean_ctor_set(v_reuseFailAlloc_2787_, 2, v___x_2782_);
v___x_2784_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
lean_object* v___x_2785_; 
v___x_2785_ = lean_array_uset(v_x_2761_, v___x_2781_, v___x_2784_);
v_x_2761_ = v___x_2785_;
v_x_2762_ = v_tail_2765_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10_spec__14___redArg(lean_object* v_i_2789_, lean_object* v_source_2790_, lean_object* v_target_2791_){
_start:
{
lean_object* v___x_2792_; uint8_t v___x_2793_; 
v___x_2792_ = lean_array_get_size(v_source_2790_);
v___x_2793_ = lean_nat_dec_lt(v_i_2789_, v___x_2792_);
if (v___x_2793_ == 0)
{
lean_dec_ref(v_source_2790_);
lean_dec(v_i_2789_);
return v_target_2791_;
}
else
{
lean_object* v_es_2794_; lean_object* v___x_2795_; lean_object* v_source_2796_; lean_object* v_target_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; 
v_es_2794_ = lean_array_fget(v_source_2790_, v_i_2789_);
v___x_2795_ = lean_box(0);
v_source_2796_ = lean_array_fset(v_source_2790_, v_i_2789_, v___x_2795_);
v_target_2797_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10_spec__14_spec__17___redArg(v_target_2791_, v_es_2794_);
v___x_2798_ = lean_unsigned_to_nat(1u);
v___x_2799_ = lean_nat_add(v_i_2789_, v___x_2798_);
lean_dec(v_i_2789_);
v_i_2789_ = v___x_2799_;
v_source_2790_ = v_source_2796_;
v_target_2791_ = v_target_2797_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10___redArg(lean_object* v_data_2801_){
_start:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v_nbuckets_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; 
v___x_2802_ = lean_array_get_size(v_data_2801_);
v___x_2803_ = lean_unsigned_to_nat(2u);
v_nbuckets_2804_ = lean_nat_mul(v___x_2802_, v___x_2803_);
v___x_2805_ = lean_unsigned_to_nat(0u);
v___x_2806_ = lean_box(0);
v___x_2807_ = lean_mk_array(v_nbuckets_2804_, v___x_2806_);
v___x_2808_ = lean_array_propagate_mark(v_data_2801_, v___x_2807_);
v___x_2809_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10_spec__14___redArg(v___x_2805_, v_data_2801_, v___x_2808_);
return v___x_2809_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__9___redArg(lean_object* v_a_2810_, lean_object* v_x_2811_){
_start:
{
if (lean_obj_tag(v_x_2811_) == 0)
{
uint8_t v___x_2812_; 
v___x_2812_ = 0;
return v___x_2812_;
}
else
{
lean_object* v_key_2813_; lean_object* v_tail_2814_; uint8_t v___x_2815_; 
v_key_2813_ = lean_ctor_get(v_x_2811_, 0);
v_tail_2814_ = lean_ctor_get(v_x_2811_, 2);
v___x_2815_ = l_Lean_instBEqExtraModUse_beq(v_key_2813_, v_a_2810_);
if (v___x_2815_ == 0)
{
v_x_2811_ = v_tail_2814_;
goto _start;
}
else
{
return v___x_2815_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__9___redArg___boxed(lean_object* v_a_2817_, lean_object* v_x_2818_){
_start:
{
uint8_t v_res_2819_; lean_object* v_r_2820_; 
v_res_2819_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__9___redArg(v_a_2817_, v_x_2818_);
lean_dec(v_x_2818_);
lean_dec_ref(v_a_2817_);
v_r_2820_ = lean_box(v_res_2819_);
return v_r_2820_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg(lean_object* v_m_2821_, lean_object* v_a_2822_, lean_object* v_b_2823_){
_start:
{
lean_object* v_size_2824_; lean_object* v_buckets_2825_; lean_object* v___x_2826_; uint64_t v___x_2827_; uint64_t v___x_2828_; uint64_t v___x_2829_; uint64_t v_fold_2830_; uint64_t v___x_2831_; uint64_t v___x_2832_; uint64_t v___x_2833_; size_t v___x_2834_; size_t v___x_2835_; size_t v___x_2836_; size_t v___x_2837_; size_t v___x_2838_; lean_object* v_bkt_2839_; uint8_t v___x_2840_; 
v_size_2824_ = lean_ctor_get(v_m_2821_, 0);
v_buckets_2825_ = lean_ctor_get(v_m_2821_, 1);
v___x_2826_ = lean_array_get_size(v_buckets_2825_);
v___x_2827_ = l_Lean_instHashableExtraModUse_hash(v_a_2822_);
v___x_2828_ = 32ULL;
v___x_2829_ = lean_uint64_shift_right(v___x_2827_, v___x_2828_);
v_fold_2830_ = lean_uint64_xor(v___x_2827_, v___x_2829_);
v___x_2831_ = 16ULL;
v___x_2832_ = lean_uint64_shift_right(v_fold_2830_, v___x_2831_);
v___x_2833_ = lean_uint64_xor(v_fold_2830_, v___x_2832_);
v___x_2834_ = lean_uint64_to_usize(v___x_2833_);
v___x_2835_ = lean_usize_of_nat(v___x_2826_);
v___x_2836_ = ((size_t)1ULL);
v___x_2837_ = lean_usize_sub(v___x_2835_, v___x_2836_);
v___x_2838_ = lean_usize_land(v___x_2834_, v___x_2837_);
v_bkt_2839_ = lean_array_uget_borrowed(v_buckets_2825_, v___x_2838_);
v___x_2840_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__9___redArg(v_a_2822_, v_bkt_2839_);
if (v___x_2840_ == 0)
{
lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2861_; 
lean_inc_ref(v_buckets_2825_);
lean_inc(v_size_2824_);
v_isSharedCheck_2861_ = !lean_is_exclusive(v_m_2821_);
if (v_isSharedCheck_2861_ == 0)
{
lean_object* v_unused_2862_; lean_object* v_unused_2863_; 
v_unused_2862_ = lean_ctor_get(v_m_2821_, 1);
lean_dec(v_unused_2862_);
v_unused_2863_ = lean_ctor_get(v_m_2821_, 0);
lean_dec(v_unused_2863_);
v___x_2842_ = v_m_2821_;
v_isShared_2843_ = v_isSharedCheck_2861_;
goto v_resetjp_2841_;
}
else
{
lean_dec(v_m_2821_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2861_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v___x_2844_; lean_object* v_size_x27_2845_; lean_object* v___x_2846_; lean_object* v_buckets_x27_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; uint8_t v___x_2853_; 
v___x_2844_ = lean_unsigned_to_nat(1u);
v_size_x27_2845_ = lean_nat_add(v_size_2824_, v___x_2844_);
lean_dec(v_size_2824_);
lean_inc(v_bkt_2839_);
v___x_2846_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2846_, 0, v_a_2822_);
lean_ctor_set(v___x_2846_, 1, v_b_2823_);
lean_ctor_set(v___x_2846_, 2, v_bkt_2839_);
v_buckets_x27_2847_ = lean_array_uset(v_buckets_2825_, v___x_2838_, v___x_2846_);
v___x_2848_ = lean_unsigned_to_nat(4u);
v___x_2849_ = lean_nat_mul(v_size_x27_2845_, v___x_2848_);
v___x_2850_ = lean_unsigned_to_nat(3u);
v___x_2851_ = lean_nat_div(v___x_2849_, v___x_2850_);
lean_dec(v___x_2849_);
v___x_2852_ = lean_array_get_size(v_buckets_x27_2847_);
v___x_2853_ = lean_nat_dec_le(v___x_2851_, v___x_2852_);
lean_dec(v___x_2851_);
if (v___x_2853_ == 0)
{
lean_object* v_val_2854_; lean_object* v___x_2856_; 
v_val_2854_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10___redArg(v_buckets_x27_2847_);
if (v_isShared_2843_ == 0)
{
lean_ctor_set(v___x_2842_, 1, v_val_2854_);
lean_ctor_set(v___x_2842_, 0, v_size_x27_2845_);
v___x_2856_ = v___x_2842_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_size_x27_2845_);
lean_ctor_set(v_reuseFailAlloc_2857_, 1, v_val_2854_);
v___x_2856_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
return v___x_2856_;
}
}
else
{
lean_object* v___x_2859_; 
if (v_isShared_2843_ == 0)
{
lean_ctor_set(v___x_2842_, 1, v_buckets_x27_2847_);
lean_ctor_set(v___x_2842_, 0, v_size_x27_2845_);
v___x_2859_ = v___x_2842_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v_size_x27_2845_);
lean_ctor_set(v_reuseFailAlloc_2860_, 1, v_buckets_x27_2847_);
v___x_2859_ = v_reuseFailAlloc_2860_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
return v___x_2859_;
}
}
}
}
else
{
lean_dec(v_b_2823_);
lean_dec_ref(v_a_2822_);
return v_m_2821_;
}
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0(void){
_start:
{
lean_object* v___x_2864_; double v___x_2865_; 
v___x_2864_ = lean_unsigned_to_nat(0u);
v___x_2865_ = lean_float_of_nat(v___x_2864_);
return v___x_2865_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6(lean_object* v_cls_2869_, lean_object* v_msg_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_){
_start:
{
lean_object* v_ref_2876_; lean_object* v___x_2877_; lean_object* v_a_2878_; lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2923_; 
v_ref_2876_ = lean_ctor_get(v___y_2873_, 2);
v___x_2877_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0_spec__0(v_msg_2870_, v___y_2871_, v___y_2872_, v___y_2873_, v___y_2874_);
v_a_2878_ = lean_ctor_get(v___x_2877_, 0);
v_isSharedCheck_2923_ = !lean_is_exclusive(v___x_2877_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2880_ = v___x_2877_;
v_isShared_2881_ = v_isSharedCheck_2923_;
goto v_resetjp_2879_;
}
else
{
lean_inc(v_a_2878_);
lean_dec(v___x_2877_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2923_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v___x_2882_; lean_object* v_traceState_2883_; lean_object* v_env_2884_; lean_object* v_nextMacroScope_2885_; lean_object* v_ngen_2886_; lean_object* v_auxDeclNGen_2887_; lean_object* v_cache_2888_; lean_object* v_recordedDeps_2889_; lean_object* v_messages_2890_; lean_object* v_infoState_2891_; lean_object* v_snapshotTasks_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2922_; 
v___x_2882_ = lean_st_ref_take(v___y_2874_);
v_traceState_2883_ = lean_ctor_get(v___x_2882_, 4);
v_env_2884_ = lean_ctor_get(v___x_2882_, 0);
v_nextMacroScope_2885_ = lean_ctor_get(v___x_2882_, 1);
v_ngen_2886_ = lean_ctor_get(v___x_2882_, 2);
v_auxDeclNGen_2887_ = lean_ctor_get(v___x_2882_, 3);
v_cache_2888_ = lean_ctor_get(v___x_2882_, 5);
v_recordedDeps_2889_ = lean_ctor_get(v___x_2882_, 6);
v_messages_2890_ = lean_ctor_get(v___x_2882_, 7);
v_infoState_2891_ = lean_ctor_get(v___x_2882_, 8);
v_snapshotTasks_2892_ = lean_ctor_get(v___x_2882_, 9);
v_isSharedCheck_2922_ = !lean_is_exclusive(v___x_2882_);
if (v_isSharedCheck_2922_ == 0)
{
v___x_2894_ = v___x_2882_;
v_isShared_2895_ = v_isSharedCheck_2922_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_snapshotTasks_2892_);
lean_inc(v_infoState_2891_);
lean_inc(v_messages_2890_);
lean_inc(v_recordedDeps_2889_);
lean_inc(v_cache_2888_);
lean_inc(v_traceState_2883_);
lean_inc(v_auxDeclNGen_2887_);
lean_inc(v_ngen_2886_);
lean_inc(v_nextMacroScope_2885_);
lean_inc(v_env_2884_);
lean_dec(v___x_2882_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2922_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
uint64_t v_tid_2896_; lean_object* v_traces_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2921_; 
v_tid_2896_ = lean_ctor_get_uint64(v_traceState_2883_, sizeof(void*)*1);
v_traces_2897_ = lean_ctor_get(v_traceState_2883_, 0);
v_isSharedCheck_2921_ = !lean_is_exclusive(v_traceState_2883_);
if (v_isSharedCheck_2921_ == 0)
{
v___x_2899_ = v_traceState_2883_;
v_isShared_2900_ = v_isSharedCheck_2921_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_traces_2897_);
lean_dec(v_traceState_2883_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2921_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
lean_object* v___x_2901_; lean_object* v___x_2902_; double v___x_2903_; uint8_t v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2912_; 
v___x_2901_ = lean_box(0);
v___x_2902_ = lean_box(0);
v___x_2903_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0);
v___x_2904_ = 0;
v___x_2905_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__1));
v___x_2906_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2906_, 0, v_cls_2869_);
lean_ctor_set(v___x_2906_, 1, v___x_2902_);
lean_ctor_set(v___x_2906_, 2, v___x_2905_);
lean_ctor_set_float(v___x_2906_, sizeof(void*)*3, v___x_2903_);
lean_ctor_set_float(v___x_2906_, sizeof(void*)*3 + 8, v___x_2903_);
lean_ctor_set_uint8(v___x_2906_, sizeof(void*)*3 + 16, v___x_2904_);
v___x_2907_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__2));
v___x_2908_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2908_, 0, v___x_2906_);
lean_ctor_set(v___x_2908_, 1, v_a_2878_);
lean_ctor_set(v___x_2908_, 2, v___x_2907_);
lean_inc(v_ref_2876_);
v___x_2909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2909_, 0, v_ref_2876_);
lean_ctor_set(v___x_2909_, 1, v___x_2908_);
v___x_2910_ = l_Lean_PersistentArray_push___redArg(v_traces_2897_, v___x_2909_);
if (v_isShared_2900_ == 0)
{
lean_ctor_set(v___x_2899_, 0, v___x_2910_);
v___x_2912_ = v___x_2899_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v___x_2910_);
lean_ctor_set_uint64(v_reuseFailAlloc_2920_, sizeof(void*)*1, v_tid_2896_);
v___x_2912_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
lean_object* v___x_2914_; 
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 4, v___x_2912_);
v___x_2914_ = v___x_2894_;
goto v_reusejp_2913_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v_env_2884_);
lean_ctor_set(v_reuseFailAlloc_2919_, 1, v_nextMacroScope_2885_);
lean_ctor_set(v_reuseFailAlloc_2919_, 2, v_ngen_2886_);
lean_ctor_set(v_reuseFailAlloc_2919_, 3, v_auxDeclNGen_2887_);
lean_ctor_set(v_reuseFailAlloc_2919_, 4, v___x_2912_);
lean_ctor_set(v_reuseFailAlloc_2919_, 5, v_cache_2888_);
lean_ctor_set(v_reuseFailAlloc_2919_, 6, v_recordedDeps_2889_);
lean_ctor_set(v_reuseFailAlloc_2919_, 7, v_messages_2890_);
lean_ctor_set(v_reuseFailAlloc_2919_, 8, v_infoState_2891_);
lean_ctor_set(v_reuseFailAlloc_2919_, 9, v_snapshotTasks_2892_);
v___x_2914_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2913_;
}
v_reusejp_2913_:
{
lean_object* v___x_2915_; lean_object* v___x_2917_; 
v___x_2915_ = lean_st_ref_put(v___y_2874_, v___x_2914_);
if (v_isShared_2881_ == 0)
{
lean_ctor_set(v___x_2880_, 0, v___x_2901_);
v___x_2917_ = v___x_2880_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v___x_2901_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___boxed(lean_object* v_cls_2924_, lean_object* v_msg_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_){
_start:
{
lean_object* v_res_2931_; 
v_res_2931_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6(v_cls_2924_, v_msg_2925_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_);
lean_dec(v___y_2929_);
lean_dec_ref(v___y_2928_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
return v_res_2931_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2932_; 
v___x_2932_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_2932_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4(void){
_start:
{
lean_object* v___x_2937_; lean_object* v___x_2938_; 
v___x_2937_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__3));
v___x_2938_ = l_Lean_stringToMessageData(v___x_2937_);
return v___x_2938_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6(void){
_start:
{
lean_object* v___x_2940_; lean_object* v___x_2941_; 
v___x_2940_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__5));
v___x_2941_ = l_Lean_stringToMessageData(v___x_2940_);
return v___x_2941_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7(void){
_start:
{
lean_object* v___x_2942_; lean_object* v___x_2943_; 
v___x_2942_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__1));
v___x_2943_ = l_Lean_stringToMessageData(v___x_2942_);
return v___x_2943_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10(void){
_start:
{
lean_object* v_cls_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; 
v_cls_2947_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2));
v___x_2948_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__9));
v___x_2949_ = l_Lean_Name_append(v___x_2948_, v_cls_2947_);
return v___x_2949_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12(void){
_start:
{
lean_object* v___x_2951_; lean_object* v___x_2952_; 
v___x_2951_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__11));
v___x_2952_ = l_Lean_stringToMessageData(v___x_2951_);
return v___x_2952_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14(void){
_start:
{
lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___x_2954_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__13));
v___x_2955_ = l_Lean_stringToMessageData(v___x_2954_);
return v___x_2955_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(lean_object* v_mod_2960_, uint8_t v_isMeta_2961_, lean_object* v_hint_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_){
_start:
{
lean_object* v___y_2969_; lean_object* v___y_2970_; lean_object* v___y_2971_; lean_object* v___y_2972_; lean_object* v___y_2973_; lean_object* v___y_2974_; lean_object* v___y_2975_; lean_object* v___y_2976_; lean_object* v___y_2977_; lean_object* v___y_2978_; lean_object* v___y_2979_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v_env_3002_; uint8_t v_isExporting_3003_; lean_object* v_entry_3004_; lean_object* v___x_3005_; lean_object* v_env_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; uint8_t v___x_3011_; 
v___x_3000_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0);
v___x_3001_ = lean_st_ref_get(v___y_2966_);
v_env_3002_ = lean_ctor_get(v___x_3001_, 0);
lean_inc_ref(v_env_3002_);
lean_dec(v___x_3001_);
v_isExporting_3003_ = lean_ctor_get_uint8(v_env_3002_, sizeof(void*)*13);
lean_dec_ref(v_env_3002_);
lean_inc(v_mod_2960_);
v_entry_3004_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_3004_, 0, v_mod_2960_);
lean_ctor_set_uint8(v_entry_3004_, sizeof(void*)*1, v_isExporting_3003_);
lean_ctor_set_uint8(v_entry_3004_, sizeof(void*)*1 + 1, v_isMeta_2961_);
v___x_3005_ = lean_st_ref_get(v___y_2966_);
v_env_3006_ = lean_ctor_get(v___x_3005_, 0);
lean_inc_ref(v_env_3006_);
lean_dec(v___x_3005_);
v___x_3007_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_3008_ = lean_box(1);
v___x_3009_ = lean_box(0);
v___x_3010_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3000_, v___x_3007_, v_env_3006_, v___x_3008_, v___x_3009_);
v___x_3011_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(v___x_3010_, v_entry_3004_);
lean_dec(v___x_3010_);
if (v___x_3011_ == 0)
{
lean_object* v_toCold_3012_; lean_object* v_options_3013_; lean_object* v_inheritedTraceOptions_3014_; uint8_t v_hasTrace_3015_; lean_object* v___f_3016_; uint8_t v___x_3017_; lean_object* v___y_3019_; lean_object* v___y_3020_; lean_object* v___y_3048_; lean_object* v___y_3049_; 
v_toCold_3012_ = lean_ctor_get(v___y_2965_, 0);
v_options_3013_ = lean_ctor_get(v_toCold_3012_, 2);
v_inheritedTraceOptions_3014_ = lean_ctor_get(v_toCold_3012_, 11);
v_hasTrace_3015_ = lean_ctor_get_uint8(v_options_3013_, sizeof(void*)*1);
lean_inc_ref(v_entry_3004_);
v___f_3016_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___lam__0), 3, 2);
lean_closure_set(v___f_3016_, 0, v___x_3007_);
lean_closure_set(v___f_3016_, 1, v_entry_3004_);
v___x_3017_ = 1;
if (v_hasTrace_3015_ == 0)
{
lean_dec(v_hint_2962_);
lean_dec(v_mod_2960_);
v___y_3048_ = v___y_2964_;
v___y_3049_ = v___y_2966_;
goto v___jp_3047_;
}
else
{
lean_object* v_cls_3056_; lean_object* v___y_3058_; lean_object* v___y_3059_; lean_object* v___y_3063_; lean_object* v___y_3064_; lean_object* v___x_3076_; uint8_t v___x_3077_; 
v_cls_3056_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2));
v___x_3076_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10);
v___x_3077_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3014_, v_options_3013_, v___x_3076_);
if (v___x_3077_ == 0)
{
lean_dec(v_hint_2962_);
lean_dec(v_mod_2960_);
v___y_3048_ = v___y_2964_;
v___y_3049_ = v___y_2966_;
goto v___jp_3047_;
}
else
{
lean_object* v___x_3078_; lean_object* v___y_3080_; 
v___x_3078_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12);
if (v_isExporting_3003_ == 0)
{
lean_object* v___x_3087_; 
v___x_3087_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__17));
v___y_3080_ = v___x_3087_;
goto v___jp_3079_;
}
else
{
lean_object* v___x_3088_; 
v___x_3088_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__18));
v___y_3080_ = v___x_3088_;
goto v___jp_3079_;
}
v___jp_3079_:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; 
lean_inc_ref(v___y_3080_);
v___x_3081_ = l_Lean_stringToMessageData(v___y_3080_);
v___x_3082_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3082_, 0, v___x_3078_);
lean_ctor_set(v___x_3082_, 1, v___x_3081_);
v___x_3083_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14);
v___x_3084_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3084_, 0, v___x_3082_);
lean_ctor_set(v___x_3084_, 1, v___x_3083_);
if (v_isMeta_2961_ == 0)
{
lean_object* v___x_3085_; 
v___x_3085_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15));
v___y_3063_ = v___x_3084_;
v___y_3064_ = v___x_3085_;
goto v___jp_3062_;
}
else
{
lean_object* v___x_3086_; 
v___x_3086_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__16));
v___y_3063_ = v___x_3084_;
v___y_3064_ = v___x_3086_;
goto v___jp_3062_;
}
}
}
v___jp_3057_:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; 
v___x_3060_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3060_, 0, v___y_3058_);
lean_ctor_set(v___x_3060_, 1, v___y_3059_);
v___x_3061_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6(v_cls_3056_, v___x_3060_, v___y_2963_, v___y_2964_, v___y_2965_, v___y_2966_);
if (lean_obj_tag(v___x_3061_) == 0)
{
lean_dec_ref_known(v___x_3061_, 1);
v___y_3048_ = v___y_2964_;
v___y_3049_ = v___y_2966_;
goto v___jp_3047_;
}
else
{
lean_dec_ref(v___f_3016_);
lean_dec_ref_known(v_entry_3004_, 1);
return v___x_3061_;
}
}
v___jp_3062_:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; uint8_t v___x_3071_; 
lean_inc_ref(v___y_3064_);
v___x_3065_ = l_Lean_stringToMessageData(v___y_3064_);
v___x_3066_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3066_, 0, v___y_3063_);
lean_ctor_set(v___x_3066_, 1, v___x_3065_);
v___x_3067_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4);
v___x_3068_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3068_, 0, v___x_3066_);
lean_ctor_set(v___x_3068_, 1, v___x_3067_);
v___x_3069_ = l_Lean_MessageData_ofName(v_mod_2960_);
v___x_3070_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3068_);
lean_ctor_set(v___x_3070_, 1, v___x_3069_);
v___x_3071_ = l_Lean_Name_isAnonymous(v_hint_2962_);
if (v___x_3071_ == 0)
{
lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; 
v___x_3072_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6);
v___x_3073_ = l_Lean_MessageData_ofName(v_hint_2962_);
v___x_3074_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3074_, 0, v___x_3072_);
lean_ctor_set(v___x_3074_, 1, v___x_3073_);
v___y_3058_ = v___x_3070_;
v___y_3059_ = v___x_3074_;
goto v___jp_3057_;
}
else
{
lean_object* v___x_3075_; 
lean_dec(v_hint_2962_);
v___x_3075_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7);
v___y_3058_ = v___x_3070_;
v___y_3059_ = v___x_3075_;
goto v___jp_3057_;
}
}
}
v___jp_3018_:
{
lean_object* v___x_3021_; lean_object* v_toEnvExtension_3022_; uint8_t v_logWrites_3023_; 
v___x_3021_ = lean_st_ref_take(v___y_3020_);
v_toEnvExtension_3022_ = lean_ctor_get(v___x_3007_, 0);
v_logWrites_3023_ = lean_ctor_get_uint8(v_toEnvExtension_3022_, sizeof(void*)*6);
if (v_logWrites_3023_ == 0)
{
lean_object* v_env_3024_; lean_object* v_nextMacroScope_3025_; lean_object* v_ngen_3026_; lean_object* v_auxDeclNGen_3027_; lean_object* v_traceState_3028_; lean_object* v_recordedDeps_3029_; lean_object* v_messages_3030_; lean_object* v_infoState_3031_; lean_object* v_snapshotTasks_3032_; lean_object* v_asyncMode_3033_; lean_object* v___x_3034_; 
v_env_3024_ = lean_ctor_get(v___x_3021_, 0);
lean_inc_ref(v_env_3024_);
v_nextMacroScope_3025_ = lean_ctor_get(v___x_3021_, 1);
lean_inc(v_nextMacroScope_3025_);
v_ngen_3026_ = lean_ctor_get(v___x_3021_, 2);
lean_inc_ref(v_ngen_3026_);
v_auxDeclNGen_3027_ = lean_ctor_get(v___x_3021_, 3);
lean_inc_ref(v_auxDeclNGen_3027_);
v_traceState_3028_ = lean_ctor_get(v___x_3021_, 4);
lean_inc_ref(v_traceState_3028_);
v_recordedDeps_3029_ = lean_ctor_get(v___x_3021_, 6);
lean_inc_ref(v_recordedDeps_3029_);
v_messages_3030_ = lean_ctor_get(v___x_3021_, 7);
lean_inc_ref(v_messages_3030_);
v_infoState_3031_ = lean_ctor_get(v___x_3021_, 8);
lean_inc_ref(v_infoState_3031_);
v_snapshotTasks_3032_ = lean_ctor_get(v___x_3021_, 9);
lean_inc_ref(v_snapshotTasks_3032_);
lean_dec(v___x_3021_);
v_asyncMode_3033_ = lean_ctor_get(v_toEnvExtension_3022_, 2);
lean_inc_ref(v_toEnvExtension_3022_);
v___x_3034_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3022_, v_env_3024_, v___f_3016_, v_asyncMode_3033_, v___x_3009_, v___x_3017_);
v___y_2969_ = v_snapshotTasks_3032_;
v___y_2970_ = v_traceState_3028_;
v___y_2971_ = v___y_3019_;
v___y_2972_ = v_infoState_3031_;
v___y_2973_ = v_recordedDeps_3029_;
v___y_2974_ = v___y_3020_;
v___y_2975_ = v_ngen_3026_;
v___y_2976_ = v_messages_3030_;
v___y_2977_ = v_auxDeclNGen_3027_;
v___y_2978_ = v_nextMacroScope_3025_;
v___y_2979_ = v___x_3034_;
goto v___jp_2968_;
}
else
{
lean_object* v_env_3035_; lean_object* v_nextMacroScope_3036_; lean_object* v_ngen_3037_; lean_object* v_auxDeclNGen_3038_; lean_object* v_traceState_3039_; lean_object* v_recordedDeps_3040_; lean_object* v_messages_3041_; lean_object* v_infoState_3042_; lean_object* v_snapshotTasks_3043_; lean_object* v_asyncMode_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; 
v_env_3035_ = lean_ctor_get(v___x_3021_, 0);
lean_inc_ref(v_env_3035_);
v_nextMacroScope_3036_ = lean_ctor_get(v___x_3021_, 1);
lean_inc(v_nextMacroScope_3036_);
v_ngen_3037_ = lean_ctor_get(v___x_3021_, 2);
lean_inc_ref(v_ngen_3037_);
v_auxDeclNGen_3038_ = lean_ctor_get(v___x_3021_, 3);
lean_inc_ref(v_auxDeclNGen_3038_);
v_traceState_3039_ = lean_ctor_get(v___x_3021_, 4);
lean_inc_ref(v_traceState_3039_);
v_recordedDeps_3040_ = lean_ctor_get(v___x_3021_, 6);
lean_inc_ref(v_recordedDeps_3040_);
v_messages_3041_ = lean_ctor_get(v___x_3021_, 7);
lean_inc_ref(v_messages_3041_);
v_infoState_3042_ = lean_ctor_get(v___x_3021_, 8);
lean_inc_ref(v_infoState_3042_);
v_snapshotTasks_3043_ = lean_ctor_get(v___x_3021_, 9);
lean_inc_ref(v_snapshotTasks_3043_);
lean_dec(v___x_3021_);
v_asyncMode_3044_ = lean_ctor_get(v_toEnvExtension_3022_, 2);
lean_inc_ref_n(v_toEnvExtension_3022_, 2);
v___x_3045_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_3022_, v_env_3035_);
lean_dec_ref(v_env_3035_);
v___x_3046_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3022_, v___x_3045_, v___f_3016_, v_asyncMode_3044_, v___x_3009_, v___x_3017_);
v___y_2969_ = v_snapshotTasks_3043_;
v___y_2970_ = v_traceState_3039_;
v___y_2971_ = v___y_3019_;
v___y_2972_ = v_infoState_3042_;
v___y_2973_ = v_recordedDeps_3040_;
v___y_2974_ = v___y_3020_;
v___y_2975_ = v_ngen_3037_;
v___y_2976_ = v_messages_3041_;
v___y_2977_ = v_auxDeclNGen_3038_;
v___y_2978_ = v_nextMacroScope_3036_;
v___y_2979_ = v___x_3046_;
goto v___jp_2968_;
}
}
v___jp_3047_:
{
uint8_t v___x_3050_; 
v___x_3050_ = l_Lean_usageRecordingEnabled();
if (v___x_3050_ == 0)
{
lean_dec_ref_known(v_entry_3004_, 1);
v___y_3019_ = v___y_3048_;
v___y_3020_ = v___y_3049_;
goto v___jp_3018_;
}
else
{
lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3051_ = l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
v___x_3052_ = lean_st_ref_take(v___x_3051_);
v___x_3053_ = lean_box(0);
v___x_3054_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg(v___x_3052_, v_entry_3004_, v___x_3053_);
v___x_3055_ = lean_st_ref_put(v___x_3051_, v___x_3054_);
v___y_3019_ = v___y_3048_;
v___y_3020_ = v___y_3049_;
goto v___jp_3018_;
}
}
}
else
{
lean_object* v___x_3089_; lean_object* v___x_3090_; 
lean_dec_ref_known(v_entry_3004_, 1);
lean_dec(v_hint_2962_);
lean_dec(v_mod_2960_);
v___x_3089_ = lean_box(0);
v___x_3090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3089_);
return v___x_3090_;
}
v___jp_2968_:
{
lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v_mctx_2984_; lean_object* v_zetaDeltaFVarIds_2985_; lean_object* v_postponed_2986_; lean_object* v_diag_2987_; lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_2998_; 
v___x_2980_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
v___x_2981_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2981_, 0, v___y_2979_);
lean_ctor_set(v___x_2981_, 1, v___y_2978_);
lean_ctor_set(v___x_2981_, 2, v___y_2975_);
lean_ctor_set(v___x_2981_, 3, v___y_2977_);
lean_ctor_set(v___x_2981_, 4, v___y_2970_);
lean_ctor_set(v___x_2981_, 5, v___x_2980_);
lean_ctor_set(v___x_2981_, 6, v___y_2973_);
lean_ctor_set(v___x_2981_, 7, v___y_2976_);
lean_ctor_set(v___x_2981_, 8, v___y_2972_);
lean_ctor_set(v___x_2981_, 9, v___y_2969_);
v___x_2982_ = lean_st_ref_put(v___y_2974_, v___x_2981_);
v___x_2983_ = lean_st_ref_take(v___y_2971_);
v_mctx_2984_ = lean_ctor_get(v___x_2983_, 0);
v_zetaDeltaFVarIds_2985_ = lean_ctor_get(v___x_2983_, 2);
v_postponed_2986_ = lean_ctor_get(v___x_2983_, 3);
v_diag_2987_ = lean_ctor_get(v___x_2983_, 4);
v_isSharedCheck_2998_ = !lean_is_exclusive(v___x_2983_);
if (v_isSharedCheck_2998_ == 0)
{
lean_object* v_unused_2999_; 
v_unused_2999_ = lean_ctor_get(v___x_2983_, 1);
lean_dec(v_unused_2999_);
v___x_2989_ = v___x_2983_;
v_isShared_2990_ = v_isSharedCheck_2998_;
goto v_resetjp_2988_;
}
else
{
lean_inc(v_diag_2987_);
lean_inc(v_postponed_2986_);
lean_inc(v_zetaDeltaFVarIds_2985_);
lean_inc(v_mctx_2984_);
lean_dec(v___x_2983_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_2998_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2994_; 
v___x_2991_ = lean_box(0);
v___x_2992_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0);
if (v_isShared_2990_ == 0)
{
lean_ctor_set(v___x_2989_, 1, v___x_2992_);
v___x_2994_ = v___x_2989_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2997_; 
v_reuseFailAlloc_2997_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2997_, 0, v_mctx_2984_);
lean_ctor_set(v_reuseFailAlloc_2997_, 1, v___x_2992_);
lean_ctor_set(v_reuseFailAlloc_2997_, 2, v_zetaDeltaFVarIds_2985_);
lean_ctor_set(v_reuseFailAlloc_2997_, 3, v_postponed_2986_);
lean_ctor_set(v_reuseFailAlloc_2997_, 4, v_diag_2987_);
v___x_2994_ = v_reuseFailAlloc_2997_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
lean_object* v___x_2995_; lean_object* v___x_2996_; 
v___x_2995_ = lean_st_ref_put(v___y_2971_, v___x_2994_);
v___x_2996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2996_, 0, v___x_2991_);
return v___x_2996_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___boxed(lean_object* v_mod_3091_, lean_object* v_isMeta_3092_, lean_object* v_hint_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_){
_start:
{
uint8_t v_isMeta_boxed_3099_; lean_object* v_res_3100_; 
v_isMeta_boxed_3099_ = lean_unbox(v_isMeta_3092_);
v_res_3100_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(v_mod_3091_, v_isMeta_boxed_3099_, v_hint_3093_, v___y_3094_, v___y_3095_, v___y_3096_, v___y_3097_);
lean_dec(v___y_3097_);
lean_dec_ref(v___y_3096_);
lean_dec(v___y_3095_);
lean_dec_ref(v___y_3094_);
return v_res_3100_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___redArg(lean_object* v_a_3101_, lean_object* v_x_3102_){
_start:
{
if (lean_obj_tag(v_x_3102_) == 0)
{
lean_object* v___x_3103_; 
v___x_3103_ = lean_box(0);
return v___x_3103_;
}
else
{
lean_object* v_key_3104_; lean_object* v_value_3105_; lean_object* v_tail_3106_; uint8_t v___x_3107_; 
v_key_3104_ = lean_ctor_get(v_x_3102_, 0);
v_value_3105_ = lean_ctor_get(v_x_3102_, 1);
v_tail_3106_ = lean_ctor_get(v_x_3102_, 2);
v___x_3107_ = lean_name_eq(v_key_3104_, v_a_3101_);
if (v___x_3107_ == 0)
{
v_x_3102_ = v_tail_3106_;
goto _start;
}
else
{
lean_object* v___x_3109_; 
lean_inc(v_value_3105_);
v___x_3109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3109_, 0, v_value_3105_);
return v___x_3109_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___redArg___boxed(lean_object* v_a_3110_, lean_object* v_x_3111_){
_start:
{
lean_object* v_res_3112_; 
v_res_3112_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___redArg(v_a_3110_, v_x_3111_);
lean_dec(v_x_3111_);
lean_dec(v_a_3110_);
return v_res_3112_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(lean_object* v_m_3113_, lean_object* v_a_3114_){
_start:
{
lean_object* v_buckets_3115_; lean_object* v___x_3116_; uint64_t v___y_3118_; 
v_buckets_3115_ = lean_ctor_get(v_m_3113_, 1);
v___x_3116_ = lean_array_get_size(v_buckets_3115_);
if (lean_obj_tag(v_a_3114_) == 0)
{
uint64_t v___x_3132_; 
v___x_3132_ = 1723ULL;
v___y_3118_ = v___x_3132_;
goto v___jp_3117_;
}
else
{
uint64_t v_hash_3133_; 
v_hash_3133_ = lean_ctor_get_uint64(v_a_3114_, sizeof(void*)*2);
v___y_3118_ = v_hash_3133_;
goto v___jp_3117_;
}
v___jp_3117_:
{
uint64_t v___x_3119_; uint64_t v___x_3120_; uint64_t v_fold_3121_; uint64_t v___x_3122_; uint64_t v___x_3123_; uint64_t v___x_3124_; size_t v___x_3125_; size_t v___x_3126_; size_t v___x_3127_; size_t v___x_3128_; size_t v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; 
v___x_3119_ = 32ULL;
v___x_3120_ = lean_uint64_shift_right(v___y_3118_, v___x_3119_);
v_fold_3121_ = lean_uint64_xor(v___y_3118_, v___x_3120_);
v___x_3122_ = 16ULL;
v___x_3123_ = lean_uint64_shift_right(v_fold_3121_, v___x_3122_);
v___x_3124_ = lean_uint64_xor(v_fold_3121_, v___x_3123_);
v___x_3125_ = lean_uint64_to_usize(v___x_3124_);
v___x_3126_ = lean_usize_of_nat(v___x_3116_);
v___x_3127_ = ((size_t)1ULL);
v___x_3128_ = lean_usize_sub(v___x_3126_, v___x_3127_);
v___x_3129_ = lean_usize_land(v___x_3125_, v___x_3128_);
v___x_3130_ = lean_array_uget_borrowed(v_buckets_3115_, v___x_3129_);
v___x_3131_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___redArg(v_a_3114_, v___x_3130_);
return v___x_3131_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg___boxed(lean_object* v_m_3134_, lean_object* v_a_3135_){
_start:
{
lean_object* v_res_3136_; 
v_res_3136_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(v_m_3134_, v_a_3135_);
lean_dec(v_a_3135_);
lean_dec_ref(v_m_3134_);
return v_res_3136_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4(lean_object* v___x_3137_, lean_object* v_declName_3138_, lean_object* v_as_3139_, size_t v_sz_3140_, size_t v_i_3141_, lean_object* v_b_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_){
_start:
{
uint8_t v___x_3148_; 
v___x_3148_ = lean_usize_dec_lt(v_i_3141_, v_sz_3140_);
if (v___x_3148_ == 0)
{
lean_object* v___x_3149_; 
lean_dec(v_declName_3138_);
v___x_3149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3149_, 0, v_b_3142_);
return v___x_3149_;
}
else
{
lean_object* v___x_3150_; lean_object* v_modules_3151_; lean_object* v___x_3152_; lean_object* v_a_3153_; lean_object* v___x_3154_; lean_object* v_toImport_3155_; lean_object* v_module_3156_; lean_object* v___x_3157_; uint8_t v___x_3158_; lean_object* v___x_3159_; 
v___x_3150_ = l_Lean_Environment_header(v___x_3137_);
v_modules_3151_ = lean_ctor_get(v___x_3150_, 3);
lean_inc_ref(v_modules_3151_);
lean_dec_ref(v___x_3150_);
v___x_3152_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_3153_ = lean_array_uget_borrowed(v_as_3139_, v_i_3141_);
v___x_3154_ = lean_array_get(v___x_3152_, v_modules_3151_, v_a_3153_);
lean_dec_ref(v_modules_3151_);
v_toImport_3155_ = lean_ctor_get(v___x_3154_, 0);
lean_inc_ref(v_toImport_3155_);
lean_dec(v___x_3154_);
v_module_3156_ = lean_ctor_get(v_toImport_3155_, 0);
lean_inc(v_module_3156_);
lean_dec_ref(v_toImport_3155_);
v___x_3157_ = lean_box(0);
v___x_3158_ = 0;
lean_inc(v_declName_3138_);
v___x_3159_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(v_module_3156_, v___x_3158_, v_declName_3138_, v___y_3143_, v___y_3144_, v___y_3145_, v___y_3146_);
if (lean_obj_tag(v___x_3159_) == 0)
{
size_t v___x_3160_; size_t v___x_3161_; 
lean_dec_ref_known(v___x_3159_, 1);
v___x_3160_ = ((size_t)1ULL);
v___x_3161_ = lean_usize_add(v_i_3141_, v___x_3160_);
v_i_3141_ = v___x_3161_;
v_b_3142_ = v___x_3157_;
goto _start;
}
else
{
lean_dec(v_declName_3138_);
return v___x_3159_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4___boxed(lean_object* v___x_3163_, lean_object* v_declName_3164_, lean_object* v_as_3165_, lean_object* v_sz_3166_, lean_object* v_i_3167_, lean_object* v_b_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_){
_start:
{
size_t v_sz_boxed_3174_; size_t v_i_boxed_3175_; lean_object* v_res_3176_; 
v_sz_boxed_3174_ = lean_unbox_usize(v_sz_3166_);
lean_dec(v_sz_3166_);
v_i_boxed_3175_ = lean_unbox_usize(v_i_3167_);
lean_dec(v_i_3167_);
v_res_3176_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4(v___x_3163_, v_declName_3164_, v_as_3165_, v_sz_boxed_3174_, v_i_boxed_3175_, v_b_3168_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_);
lean_dec(v___y_3172_);
lean_dec_ref(v___y_3171_);
lean_dec(v___y_3170_);
lean_dec_ref(v___y_3169_);
lean_dec_ref(v_as_3165_);
lean_dec_ref(v___x_3163_);
return v_res_3176_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0(void){
_start:
{
lean_object* v___x_3177_; 
v___x_3177_ = l_Std_HashMap_instInhabited___redArg();
return v___x_3177_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2(lean_object* v_declName_3180_, uint8_t v_isMeta_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_){
_start:
{
lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v_env_3192_; lean_object* v___y_3194_; lean_object* v___x_3207_; 
v___x_3187_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0);
v___x_3188_ = lean_st_ref_get(v___y_3185_);
v_env_3192_ = lean_ctor_get(v___x_3188_, 0);
lean_inc_ref(v_env_3192_);
lean_dec(v___x_3188_);
v___x_3207_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3192_, v_declName_3180_);
if (lean_obj_tag(v___x_3207_) == 0)
{
lean_dec_ref(v_env_3192_);
lean_dec(v_declName_3180_);
goto v___jp_3189_;
}
else
{
lean_object* v_val_3208_; lean_object* v___x_3209_; lean_object* v_modules_3210_; lean_object* v___x_3211_; uint8_t v___x_3212_; 
v_val_3208_ = lean_ctor_get(v___x_3207_, 0);
lean_inc(v_val_3208_);
lean_dec_ref_known(v___x_3207_, 1);
v___x_3209_ = l_Lean_Environment_header(v_env_3192_);
v_modules_3210_ = lean_ctor_get(v___x_3209_, 3);
lean_inc_ref(v_modules_3210_);
lean_dec_ref(v___x_3209_);
v___x_3211_ = lean_array_get_size(v_modules_3210_);
v___x_3212_ = lean_nat_dec_lt(v_val_3208_, v___x_3211_);
if (v___x_3212_ == 0)
{
lean_dec_ref(v_modules_3210_);
lean_dec(v_val_3208_);
lean_dec_ref(v_env_3192_);
lean_dec(v_declName_3180_);
goto v___jp_3189_;
}
else
{
lean_object* v___x_3213_; lean_object* v___x_3214_; uint8_t v___y_3216_; 
v___x_3213_ = lean_array_fget(v_modules_3210_, v_val_3208_);
lean_dec(v_val_3208_);
lean_dec_ref(v_modules_3210_);
v___x_3214_ = lean_st_ref_get(v___y_3185_);
if (v_isMeta_3181_ == 0)
{
lean_dec(v___x_3214_);
v___y_3216_ = v_isMeta_3181_;
goto v___jp_3215_;
}
else
{
lean_object* v_env_3227_; uint8_t v___x_3228_; 
v_env_3227_ = lean_ctor_get(v___x_3214_, 0);
lean_inc_ref(v_env_3227_);
lean_dec(v___x_3214_);
lean_inc(v_declName_3180_);
v___x_3228_ = l_Lean_isMarkedMeta(v_env_3227_, v_declName_3180_);
if (v___x_3228_ == 0)
{
v___y_3216_ = v_isMeta_3181_;
goto v___jp_3215_;
}
else
{
uint8_t v___x_3229_; 
v___x_3229_ = 0;
v___y_3216_ = v___x_3229_;
goto v___jp_3215_;
}
}
v___jp_3215_:
{
lean_object* v_toImport_3217_; lean_object* v_module_3218_; lean_object* v___x_3219_; 
v_toImport_3217_ = lean_ctor_get(v___x_3213_, 0);
lean_inc_ref(v_toImport_3217_);
lean_dec(v___x_3213_);
v_module_3218_ = lean_ctor_get(v_toImport_3217_, 0);
lean_inc(v_module_3218_);
lean_dec_ref(v_toImport_3217_);
lean_inc(v_declName_3180_);
v___x_3219_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3(v_module_3218_, v___y_3216_, v_declName_3180_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_);
if (lean_obj_tag(v___x_3219_) == 0)
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; 
lean_dec_ref_known(v___x_3219_, 1);
v___x_3220_ = l_Lean_indirectModUseExt;
v___x_3221_ = lean_box(1);
v___x_3222_ = lean_box(0);
lean_inc_ref(v_env_3192_);
v___x_3223_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3187_, v___x_3220_, v_env_3192_, v___x_3221_, v___x_3222_);
v___x_3224_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(v___x_3223_, v_declName_3180_);
lean_dec(v___x_3223_);
if (lean_obj_tag(v___x_3224_) == 0)
{
lean_object* v___x_3225_; 
v___x_3225_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1));
v___y_3194_ = v___x_3225_;
goto v___jp_3193_;
}
else
{
lean_object* v_val_3226_; 
v_val_3226_ = lean_ctor_get(v___x_3224_, 0);
lean_inc(v_val_3226_);
lean_dec_ref_known(v___x_3224_, 1);
v___y_3194_ = v_val_3226_;
goto v___jp_3193_;
}
}
else
{
lean_dec_ref(v_env_3192_);
lean_dec(v_declName_3180_);
return v___x_3219_;
}
}
}
}
v___jp_3189_:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; 
v___x_3190_ = lean_box(0);
v___x_3191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3191_, 0, v___x_3190_);
return v___x_3191_;
}
v___jp_3193_:
{
lean_object* v___x_3195_; size_t v_sz_3196_; size_t v___x_3197_; lean_object* v___x_3198_; 
v___x_3195_ = lean_box(0);
v_sz_3196_ = lean_array_size(v___y_3194_);
v___x_3197_ = ((size_t)0ULL);
v___x_3198_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__4(v_env_3192_, v_declName_3180_, v___y_3194_, v_sz_3196_, v___x_3197_, v___x_3195_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_);
lean_dec_ref(v___y_3194_);
lean_dec_ref(v_env_3192_);
if (lean_obj_tag(v___x_3198_) == 0)
{
lean_object* v___x_3200_; uint8_t v_isShared_3201_; uint8_t v_isSharedCheck_3205_; 
v_isSharedCheck_3205_ = !lean_is_exclusive(v___x_3198_);
if (v_isSharedCheck_3205_ == 0)
{
lean_object* v_unused_3206_; 
v_unused_3206_ = lean_ctor_get(v___x_3198_, 0);
lean_dec(v_unused_3206_);
v___x_3200_ = v___x_3198_;
v_isShared_3201_ = v_isSharedCheck_3205_;
goto v_resetjp_3199_;
}
else
{
lean_dec(v___x_3198_);
v___x_3200_ = lean_box(0);
v_isShared_3201_ = v_isSharedCheck_3205_;
goto v_resetjp_3199_;
}
v_resetjp_3199_:
{
lean_object* v___x_3203_; 
if (v_isShared_3201_ == 0)
{
lean_ctor_set(v___x_3200_, 0, v___x_3195_);
v___x_3203_ = v___x_3200_;
goto v_reusejp_3202_;
}
else
{
lean_object* v_reuseFailAlloc_3204_; 
v_reuseFailAlloc_3204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3204_, 0, v___x_3195_);
v___x_3203_ = v_reuseFailAlloc_3204_;
goto v_reusejp_3202_;
}
v_reusejp_3202_:
{
return v___x_3203_;
}
}
}
else
{
return v___x_3198_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___boxed(lean_object* v_declName_3230_, lean_object* v_isMeta_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_){
_start:
{
uint8_t v_isMeta_boxed_3237_; lean_object* v_res_3238_; 
v_isMeta_boxed_3237_ = lean_unbox(v_isMeta_3231_);
v_res_3238_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2(v_declName_3230_, v_isMeta_boxed_3237_, v___y_3232_, v___y_3233_, v___y_3234_, v___y_3235_);
lean_dec(v___y_3235_);
lean_dec_ref(v___y_3234_);
lean_dec(v___y_3233_);
lean_dec_ref(v___y_3232_);
return v_res_3238_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0(lean_object* v___y_3239_, uint8_t v_isExporting_3240_, lean_object* v___x_3241_, lean_object* v___y_3242_, lean_object* v___x_3243_, lean_object* v_a_x3f_3244_){
_start:
{
lean_object* v___x_3246_; lean_object* v_env_3247_; lean_object* v_nextMacroScope_3248_; lean_object* v_ngen_3249_; lean_object* v_auxDeclNGen_3250_; lean_object* v_traceState_3251_; lean_object* v_recordedDeps_3252_; lean_object* v_messages_3253_; lean_object* v_infoState_3254_; lean_object* v_snapshotTasks_3255_; lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3280_; 
v___x_3246_ = lean_st_ref_take(v___y_3239_);
v_env_3247_ = lean_ctor_get(v___x_3246_, 0);
v_nextMacroScope_3248_ = lean_ctor_get(v___x_3246_, 1);
v_ngen_3249_ = lean_ctor_get(v___x_3246_, 2);
v_auxDeclNGen_3250_ = lean_ctor_get(v___x_3246_, 3);
v_traceState_3251_ = lean_ctor_get(v___x_3246_, 4);
v_recordedDeps_3252_ = lean_ctor_get(v___x_3246_, 6);
v_messages_3253_ = lean_ctor_get(v___x_3246_, 7);
v_infoState_3254_ = lean_ctor_get(v___x_3246_, 8);
v_snapshotTasks_3255_ = lean_ctor_get(v___x_3246_, 9);
v_isSharedCheck_3280_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3280_ == 0)
{
lean_object* v_unused_3281_; 
v_unused_3281_ = lean_ctor_get(v___x_3246_, 5);
lean_dec(v_unused_3281_);
v___x_3257_ = v___x_3246_;
v_isShared_3258_ = v_isSharedCheck_3280_;
goto v_resetjp_3256_;
}
else
{
lean_inc(v_snapshotTasks_3255_);
lean_inc(v_infoState_3254_);
lean_inc(v_messages_3253_);
lean_inc(v_recordedDeps_3252_);
lean_inc(v_traceState_3251_);
lean_inc(v_auxDeclNGen_3250_);
lean_inc(v_ngen_3249_);
lean_inc(v_nextMacroScope_3248_);
lean_inc(v_env_3247_);
lean_dec(v___x_3246_);
v___x_3257_ = lean_box(0);
v_isShared_3258_ = v_isSharedCheck_3280_;
goto v_resetjp_3256_;
}
v_resetjp_3256_:
{
lean_object* v___x_3259_; lean_object* v___x_3261_; 
v___x_3259_ = l_Lean_Environment_setExporting(v_env_3247_, v_isExporting_3240_);
if (v_isShared_3258_ == 0)
{
lean_ctor_set(v___x_3257_, 5, v___x_3241_);
lean_ctor_set(v___x_3257_, 0, v___x_3259_);
v___x_3261_ = v___x_3257_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v___x_3259_);
lean_ctor_set(v_reuseFailAlloc_3279_, 1, v_nextMacroScope_3248_);
lean_ctor_set(v_reuseFailAlloc_3279_, 2, v_ngen_3249_);
lean_ctor_set(v_reuseFailAlloc_3279_, 3, v_auxDeclNGen_3250_);
lean_ctor_set(v_reuseFailAlloc_3279_, 4, v_traceState_3251_);
lean_ctor_set(v_reuseFailAlloc_3279_, 5, v___x_3241_);
lean_ctor_set(v_reuseFailAlloc_3279_, 6, v_recordedDeps_3252_);
lean_ctor_set(v_reuseFailAlloc_3279_, 7, v_messages_3253_);
lean_ctor_set(v_reuseFailAlloc_3279_, 8, v_infoState_3254_);
lean_ctor_set(v_reuseFailAlloc_3279_, 9, v_snapshotTasks_3255_);
v___x_3261_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v_mctx_3264_; lean_object* v_zetaDeltaFVarIds_3265_; lean_object* v_postponed_3266_; lean_object* v_diag_3267_; lean_object* v___x_3269_; uint8_t v_isShared_3270_; uint8_t v_isSharedCheck_3277_; 
v___x_3262_ = lean_st_ref_put(v___y_3239_, v___x_3261_);
v___x_3263_ = lean_st_ref_take(v___y_3242_);
v_mctx_3264_ = lean_ctor_get(v___x_3263_, 0);
v_zetaDeltaFVarIds_3265_ = lean_ctor_get(v___x_3263_, 2);
v_postponed_3266_ = lean_ctor_get(v___x_3263_, 3);
v_diag_3267_ = lean_ctor_get(v___x_3263_, 4);
v_isSharedCheck_3277_ = !lean_is_exclusive(v___x_3263_);
if (v_isSharedCheck_3277_ == 0)
{
lean_object* v_unused_3278_; 
v_unused_3278_ = lean_ctor_get(v___x_3263_, 1);
lean_dec(v_unused_3278_);
v___x_3269_ = v___x_3263_;
v_isShared_3270_ = v_isSharedCheck_3277_;
goto v_resetjp_3268_;
}
else
{
lean_inc(v_diag_3267_);
lean_inc(v_postponed_3266_);
lean_inc(v_zetaDeltaFVarIds_3265_);
lean_inc(v_mctx_3264_);
lean_dec(v___x_3263_);
v___x_3269_ = lean_box(0);
v_isShared_3270_ = v_isSharedCheck_3277_;
goto v_resetjp_3268_;
}
v_resetjp_3268_:
{
lean_object* v___x_3271_; lean_object* v___x_3273_; 
v___x_3271_ = lean_box(0);
if (v_isShared_3270_ == 0)
{
lean_ctor_set(v___x_3269_, 1, v___x_3243_);
v___x_3273_ = v___x_3269_;
goto v_reusejp_3272_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v_mctx_3264_);
lean_ctor_set(v_reuseFailAlloc_3276_, 1, v___x_3243_);
lean_ctor_set(v_reuseFailAlloc_3276_, 2, v_zetaDeltaFVarIds_3265_);
lean_ctor_set(v_reuseFailAlloc_3276_, 3, v_postponed_3266_);
lean_ctor_set(v_reuseFailAlloc_3276_, 4, v_diag_3267_);
v___x_3273_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3272_;
}
v_reusejp_3272_:
{
lean_object* v___x_3274_; lean_object* v___x_3275_; 
v___x_3274_ = lean_st_ref_put(v___y_3242_, v___x_3273_);
v___x_3275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3271_);
return v___x_3275_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0___boxed(lean_object* v___y_3282_, lean_object* v_isExporting_3283_, lean_object* v___x_3284_, lean_object* v___y_3285_, lean_object* v___x_3286_, lean_object* v_a_x3f_3287_, lean_object* v___y_3288_){
_start:
{
uint8_t v_isExporting_boxed_3289_; lean_object* v_res_3290_; 
v_isExporting_boxed_3289_ = lean_unbox(v_isExporting_3283_);
v_res_3290_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0(v___y_3282_, v_isExporting_boxed_3289_, v___x_3284_, v___y_3285_, v___x_3286_, v_a_x3f_3287_);
lean_dec(v_a_x3f_3287_);
lean_dec(v___y_3285_);
lean_dec(v___y_3282_);
return v_res_3290_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg(lean_object* v_x_3291_, uint8_t v_isExporting_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_){
_start:
{
lean_object* v___x_3298_; lean_object* v_env_3299_; lean_object* v___x_3300_; uint8_t v_isModule_3301_; 
v___x_3298_ = lean_st_ref_get(v___y_3296_);
v_env_3299_ = lean_ctor_get(v___x_3298_, 0);
lean_inc_ref(v_env_3299_);
lean_dec(v___x_3298_);
v___x_3300_ = l_Lean_Environment_header(v_env_3299_);
v_isModule_3301_ = lean_ctor_get_uint8(v___x_3300_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_3300_);
if (v_isModule_3301_ == 0)
{
lean_object* v___x_3302_; 
lean_dec_ref(v_env_3299_);
lean_inc(v___y_3296_);
lean_inc_ref(v___y_3295_);
lean_inc(v___y_3294_);
lean_inc_ref(v___y_3293_);
v___x_3302_ = lean_apply_5(v_x_3291_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_, lean_box(0));
return v___x_3302_;
}
else
{
uint8_t v_isExporting_3303_; 
v_isExporting_3303_ = lean_ctor_get_uint8(v_env_3299_, sizeof(void*)*13);
lean_dec_ref(v_env_3299_);
if (v_isExporting_3292_ == 0)
{
if (v_isExporting_3303_ == 0)
{
lean_object* v___x_3370_; 
lean_inc(v___y_3296_);
lean_inc_ref(v___y_3295_);
lean_inc(v___y_3294_);
lean_inc_ref(v___y_3293_);
v___x_3370_ = lean_apply_5(v_x_3291_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_, lean_box(0));
return v___x_3370_;
}
else
{
goto v___jp_3304_;
}
}
else
{
if (v_isExporting_3303_ == 0)
{
goto v___jp_3304_;
}
else
{
lean_object* v___x_3371_; 
lean_inc(v___y_3296_);
lean_inc_ref(v___y_3295_);
lean_inc(v___y_3294_);
lean_inc_ref(v___y_3293_);
v___x_3371_ = lean_apply_5(v_x_3291_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_, lean_box(0));
return v___x_3371_;
}
}
v___jp_3304_:
{
lean_object* v___x_3305_; lean_object* v_env_3306_; lean_object* v_nextMacroScope_3307_; lean_object* v_ngen_3308_; lean_object* v_auxDeclNGen_3309_; lean_object* v_traceState_3310_; lean_object* v_recordedDeps_3311_; lean_object* v_messages_3312_; lean_object* v_infoState_3313_; lean_object* v_snapshotTasks_3314_; lean_object* v___x_3316_; uint8_t v_isShared_3317_; uint8_t v_isSharedCheck_3368_; 
v___x_3305_ = lean_st_ref_take(v___y_3296_);
v_env_3306_ = lean_ctor_get(v___x_3305_, 0);
v_nextMacroScope_3307_ = lean_ctor_get(v___x_3305_, 1);
v_ngen_3308_ = lean_ctor_get(v___x_3305_, 2);
v_auxDeclNGen_3309_ = lean_ctor_get(v___x_3305_, 3);
v_traceState_3310_ = lean_ctor_get(v___x_3305_, 4);
v_recordedDeps_3311_ = lean_ctor_get(v___x_3305_, 6);
v_messages_3312_ = lean_ctor_get(v___x_3305_, 7);
v_infoState_3313_ = lean_ctor_get(v___x_3305_, 8);
v_snapshotTasks_3314_ = lean_ctor_get(v___x_3305_, 9);
v_isSharedCheck_3368_ = !lean_is_exclusive(v___x_3305_);
if (v_isSharedCheck_3368_ == 0)
{
lean_object* v_unused_3369_; 
v_unused_3369_ = lean_ctor_get(v___x_3305_, 5);
lean_dec(v_unused_3369_);
v___x_3316_ = v___x_3305_;
v_isShared_3317_ = v_isSharedCheck_3368_;
goto v_resetjp_3315_;
}
else
{
lean_inc(v_snapshotTasks_3314_);
lean_inc(v_infoState_3313_);
lean_inc(v_messages_3312_);
lean_inc(v_recordedDeps_3311_);
lean_inc(v_traceState_3310_);
lean_inc(v_auxDeclNGen_3309_);
lean_inc(v_ngen_3308_);
lean_inc(v_nextMacroScope_3307_);
lean_inc(v_env_3306_);
lean_dec(v___x_3305_);
v___x_3316_ = lean_box(0);
v_isShared_3317_ = v_isSharedCheck_3368_;
goto v_resetjp_3315_;
}
v_resetjp_3315_:
{
lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3321_; 
v___x_3318_ = l_Lean_Environment_setExporting(v_env_3306_, v_isExporting_3292_);
v___x_3319_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
if (v_isShared_3317_ == 0)
{
lean_ctor_set(v___x_3316_, 5, v___x_3319_);
lean_ctor_set(v___x_3316_, 0, v___x_3318_);
v___x_3321_ = v___x_3316_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3367_; 
v_reuseFailAlloc_3367_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3367_, 0, v___x_3318_);
lean_ctor_set(v_reuseFailAlloc_3367_, 1, v_nextMacroScope_3307_);
lean_ctor_set(v_reuseFailAlloc_3367_, 2, v_ngen_3308_);
lean_ctor_set(v_reuseFailAlloc_3367_, 3, v_auxDeclNGen_3309_);
lean_ctor_set(v_reuseFailAlloc_3367_, 4, v_traceState_3310_);
lean_ctor_set(v_reuseFailAlloc_3367_, 5, v___x_3319_);
lean_ctor_set(v_reuseFailAlloc_3367_, 6, v_recordedDeps_3311_);
lean_ctor_set(v_reuseFailAlloc_3367_, 7, v_messages_3312_);
lean_ctor_set(v_reuseFailAlloc_3367_, 8, v_infoState_3313_);
lean_ctor_set(v_reuseFailAlloc_3367_, 9, v_snapshotTasks_3314_);
v___x_3321_ = v_reuseFailAlloc_3367_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v_mctx_3324_; lean_object* v_zetaDeltaFVarIds_3325_; lean_object* v_postponed_3326_; lean_object* v_diag_3327_; lean_object* v___x_3329_; uint8_t v_isShared_3330_; uint8_t v_isSharedCheck_3365_; 
v___x_3322_ = lean_st_ref_put(v___y_3296_, v___x_3321_);
v___x_3323_ = lean_st_ref_take(v___y_3294_);
v_mctx_3324_ = lean_ctor_get(v___x_3323_, 0);
v_zetaDeltaFVarIds_3325_ = lean_ctor_get(v___x_3323_, 2);
v_postponed_3326_ = lean_ctor_get(v___x_3323_, 3);
v_diag_3327_ = lean_ctor_get(v___x_3323_, 4);
v_isSharedCheck_3365_ = !lean_is_exclusive(v___x_3323_);
if (v_isSharedCheck_3365_ == 0)
{
lean_object* v_unused_3366_; 
v_unused_3366_ = lean_ctor_get(v___x_3323_, 1);
lean_dec(v_unused_3366_);
v___x_3329_ = v___x_3323_;
v_isShared_3330_ = v_isSharedCheck_3365_;
goto v_resetjp_3328_;
}
else
{
lean_inc(v_diag_3327_);
lean_inc(v_postponed_3326_);
lean_inc(v_zetaDeltaFVarIds_3325_);
lean_inc(v_mctx_3324_);
lean_dec(v___x_3323_);
v___x_3329_ = lean_box(0);
v_isShared_3330_ = v_isSharedCheck_3365_;
goto v_resetjp_3328_;
}
v_resetjp_3328_:
{
lean_object* v___x_3331_; lean_object* v___x_3333_; 
v___x_3331_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_eraseEMatchAttr___closed__0);
if (v_isShared_3330_ == 0)
{
lean_ctor_set(v___x_3329_, 1, v___x_3331_);
v___x_3333_ = v___x_3329_;
goto v_reusejp_3332_;
}
else
{
lean_object* v_reuseFailAlloc_3364_; 
v_reuseFailAlloc_3364_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3364_, 0, v_mctx_3324_);
lean_ctor_set(v_reuseFailAlloc_3364_, 1, v___x_3331_);
lean_ctor_set(v_reuseFailAlloc_3364_, 2, v_zetaDeltaFVarIds_3325_);
lean_ctor_set(v_reuseFailAlloc_3364_, 3, v_postponed_3326_);
lean_ctor_set(v_reuseFailAlloc_3364_, 4, v_diag_3327_);
v___x_3333_ = v_reuseFailAlloc_3364_;
goto v_reusejp_3332_;
}
v_reusejp_3332_:
{
lean_object* v___x_3334_; lean_object* v_r_3335_; 
v___x_3334_ = lean_st_ref_put(v___y_3294_, v___x_3333_);
lean_inc(v___y_3296_);
lean_inc_ref(v___y_3295_);
lean_inc(v___y_3294_);
lean_inc_ref(v___y_3293_);
v_r_3335_ = lean_apply_5(v_x_3291_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_, lean_box(0));
if (lean_obj_tag(v_r_3335_) == 0)
{
lean_object* v_a_3336_; lean_object* v___x_3338_; uint8_t v_isShared_3339_; uint8_t v_isSharedCheck_3352_; 
v_a_3336_ = lean_ctor_get(v_r_3335_, 0);
v_isSharedCheck_3352_ = !lean_is_exclusive(v_r_3335_);
if (v_isSharedCheck_3352_ == 0)
{
v___x_3338_ = v_r_3335_;
v_isShared_3339_ = v_isSharedCheck_3352_;
goto v_resetjp_3337_;
}
else
{
lean_inc(v_a_3336_);
lean_dec(v_r_3335_);
v___x_3338_ = lean_box(0);
v_isShared_3339_ = v_isSharedCheck_3352_;
goto v_resetjp_3337_;
}
v_resetjp_3337_:
{
lean_object* v___x_3341_; 
lean_inc(v_a_3336_);
if (v_isShared_3339_ == 0)
{
lean_ctor_set_tag(v___x_3338_, 1);
v___x_3341_ = v___x_3338_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v_a_3336_);
v___x_3341_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
lean_object* v___x_3342_; lean_object* v___x_3344_; uint8_t v_isShared_3345_; uint8_t v_isSharedCheck_3349_; 
v___x_3342_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0(v___y_3296_, v_isExporting_3303_, v___x_3319_, v___y_3294_, v___x_3331_, v___x_3341_);
lean_dec_ref(v___x_3341_);
v_isSharedCheck_3349_ = !lean_is_exclusive(v___x_3342_);
if (v_isSharedCheck_3349_ == 0)
{
lean_object* v_unused_3350_; 
v_unused_3350_ = lean_ctor_get(v___x_3342_, 0);
lean_dec(v_unused_3350_);
v___x_3344_ = v___x_3342_;
v_isShared_3345_ = v_isSharedCheck_3349_;
goto v_resetjp_3343_;
}
else
{
lean_dec(v___x_3342_);
v___x_3344_ = lean_box(0);
v_isShared_3345_ = v_isSharedCheck_3349_;
goto v_resetjp_3343_;
}
v_resetjp_3343_:
{
lean_object* v___x_3347_; 
if (v_isShared_3345_ == 0)
{
lean_ctor_set(v___x_3344_, 0, v_a_3336_);
v___x_3347_ = v___x_3344_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v_a_3336_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
return v___x_3347_;
}
}
}
}
}
else
{
lean_object* v_a_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3357_; uint8_t v_isShared_3358_; uint8_t v_isSharedCheck_3362_; 
v_a_3353_ = lean_ctor_get(v_r_3335_, 0);
lean_inc(v_a_3353_);
lean_dec_ref_known(v_r_3335_, 1);
v___x_3354_ = lean_box(0);
v___x_3355_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___lam__0(v___y_3296_, v_isExporting_3303_, v___x_3319_, v___y_3294_, v___x_3331_, v___x_3354_);
v_isSharedCheck_3362_ = !lean_is_exclusive(v___x_3355_);
if (v_isSharedCheck_3362_ == 0)
{
lean_object* v_unused_3363_; 
v_unused_3363_ = lean_ctor_get(v___x_3355_, 0);
lean_dec(v_unused_3363_);
v___x_3357_ = v___x_3355_;
v_isShared_3358_ = v_isSharedCheck_3362_;
goto v_resetjp_3356_;
}
else
{
lean_dec(v___x_3355_);
v___x_3357_ = lean_box(0);
v_isShared_3358_ = v_isSharedCheck_3362_;
goto v_resetjp_3356_;
}
v_resetjp_3356_:
{
lean_object* v___x_3360_; 
if (v_isShared_3358_ == 0)
{
lean_ctor_set_tag(v___x_3357_, 1);
lean_ctor_set(v___x_3357_, 0, v_a_3353_);
v___x_3360_ = v___x_3357_;
goto v_reusejp_3359_;
}
else
{
lean_object* v_reuseFailAlloc_3361_; 
v_reuseFailAlloc_3361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3361_, 0, v_a_3353_);
v___x_3360_ = v_reuseFailAlloc_3361_;
goto v_reusejp_3359_;
}
v_reusejp_3359_:
{
return v___x_3360_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg___boxed(lean_object* v_x_3372_, lean_object* v_isExporting_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_){
_start:
{
uint8_t v_isExporting_boxed_3379_; lean_object* v_res_3380_; 
v_isExporting_boxed_3379_ = lean_unbox(v_isExporting_3373_);
v_res_3380_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg(v_x_3372_, v_isExporting_boxed_3379_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_);
lean_dec(v___y_3377_);
lean_dec_ref(v___y_3376_);
lean_dec(v___y_3375_);
lean_dec_ref(v___y_3374_);
return v_res_3380_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(lean_object* v_x_3381_, uint8_t v_when_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_){
_start:
{
if (v_when_3382_ == 0)
{
lean_object* v___x_3388_; 
lean_inc(v___y_3386_);
lean_inc_ref(v___y_3385_);
lean_inc(v___y_3384_);
lean_inc_ref(v___y_3383_);
v___x_3388_ = lean_apply_5(v_x_3381_, v___y_3383_, v___y_3384_, v___y_3385_, v___y_3386_, lean_box(0));
return v___x_3388_;
}
else
{
uint8_t v___x_3389_; lean_object* v___x_3390_; 
v___x_3389_ = 0;
v___x_3390_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg(v_x_3381_, v___x_3389_, v___y_3383_, v___y_3384_, v___y_3385_, v___y_3386_);
return v___x_3390_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg___boxed(lean_object* v_x_3391_, lean_object* v_when_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_){
_start:
{
uint8_t v_when_boxed_3398_; lean_object* v_res_3399_; 
v_when_boxed_3398_ = lean_unbox(v_when_3392_);
v_res_3399_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(v_x_3391_, v_when_boxed_3398_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_);
lean_dec(v___y_3396_);
lean_dec_ref(v___y_3395_);
lean_dec(v___y_3394_);
lean_dec_ref(v___y_3393_);
return v_res_3399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3(lean_object* v_ext_3400_, uint8_t v_showInfo_3401_, uint8_t v_minIndexable_3402_, lean_object* v_attrName_3403_, lean_object* v___x_3404_, lean_object* v_declName_3405_, lean_object* v_stx_3406_, uint8_t v_attrKind_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_){
_start:
{
uint8_t v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___f_3416_; uint8_t v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; 
v___x_3411_ = 0;
v___x_3412_ = lean_box(v___x_3411_);
v___x_3413_ = lean_box(v_attrKind_3407_);
v___x_3414_ = lean_box(v_showInfo_3401_);
v___x_3415_ = lean_box(v_minIndexable_3402_);
lean_inc(v_declName_3405_);
v___f_3416_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___boxed), 13, 8);
lean_closure_set(v___f_3416_, 0, v_declName_3405_);
lean_closure_set(v___f_3416_, 1, v___x_3412_);
lean_closure_set(v___f_3416_, 2, v___x_3413_);
lean_closure_set(v___f_3416_, 3, v_stx_3406_);
lean_closure_set(v___f_3416_, 4, v_ext_3400_);
lean_closure_set(v___f_3416_, 5, v___x_3414_);
lean_closure_set(v___f_3416_, 6, v___x_3415_);
lean_closure_set(v___f_3416_, 7, v_attrName_3403_);
v___x_3417_ = 1;
v___x_3418_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__2);
v___x_3419_ = lean_unsigned_to_nat(32u);
v___x_3420_ = lean_mk_empty_array_with_capacity(v___x_3419_);
lean_dec_ref(v___x_3420_);
v___x_3421_ = lean_unsigned_to_nat(0u);
v___x_3422_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0___closed__4);
v___x_3423_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__4);
v___x_3424_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__5));
v___x_3425_ = lean_box(0);
lean_inc(v___x_3404_);
v___x_3426_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3426_, 0, v___x_3418_);
lean_ctor_set(v___x_3426_, 1, v___x_3404_);
lean_ctor_set(v___x_3426_, 2, v___x_3423_);
lean_ctor_set(v___x_3426_, 3, v___x_3424_);
lean_ctor_set(v___x_3426_, 4, v___x_3425_);
lean_ctor_set(v___x_3426_, 5, v___x_3421_);
lean_ctor_set(v___x_3426_, 6, v___x_3425_);
lean_ctor_set_uint8(v___x_3426_, sizeof(void*)*7, v___x_3411_);
lean_ctor_set_uint8(v___x_3426_, sizeof(void*)*7 + 1, v___x_3411_);
lean_ctor_set_uint8(v___x_3426_, sizeof(void*)*7 + 2, v___x_3411_);
lean_ctor_set_uint8(v___x_3426_, sizeof(void*)*7 + 3, v___x_3417_);
v___x_3427_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__6);
v___x_3428_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__7);
v___x_3429_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___closed__8);
v___x_3430_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3430_, 0, v___x_3427_);
lean_ctor_set(v___x_3430_, 1, v___x_3428_);
lean_ctor_set(v___x_3430_, 2, v___x_3404_);
lean_ctor_set(v___x_3430_, 3, v___x_3422_);
lean_ctor_set(v___x_3430_, 4, v___x_3429_);
v___x_3431_ = lean_st_mk_ref(v___x_3430_);
v___x_3432_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2(v_declName_3405_, v___x_3411_, v___x_3426_, v___x_3431_, v___y_3408_, v___y_3409_);
if (lean_obj_tag(v___x_3432_) == 0)
{
lean_object* v___x_3433_; 
lean_dec_ref_known(v___x_3432_, 1);
v___x_3433_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(v___f_3416_, v___x_3417_, v___x_3426_, v___x_3431_, v___y_3408_, v___y_3409_);
lean_dec_ref_known(v___x_3426_, 7);
if (lean_obj_tag(v___x_3433_) == 0)
{
lean_object* v_a_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3442_; 
v_a_3434_ = lean_ctor_get(v___x_3433_, 0);
v_isSharedCheck_3442_ = !lean_is_exclusive(v___x_3433_);
if (v_isSharedCheck_3442_ == 0)
{
v___x_3436_ = v___x_3433_;
v_isShared_3437_ = v_isSharedCheck_3442_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_a_3434_);
lean_dec(v___x_3433_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3442_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v___x_3438_; lean_object* v___x_3440_; 
v___x_3438_ = lean_st_ref_get(v___x_3431_);
lean_dec(v___x_3431_);
lean_dec(v___x_3438_);
if (v_isShared_3437_ == 0)
{
v___x_3440_ = v___x_3436_;
goto v_reusejp_3439_;
}
else
{
lean_object* v_reuseFailAlloc_3441_; 
v_reuseFailAlloc_3441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3441_, 0, v_a_3434_);
v___x_3440_ = v_reuseFailAlloc_3441_;
goto v_reusejp_3439_;
}
v_reusejp_3439_:
{
return v___x_3440_;
}
}
}
else
{
lean_dec(v___x_3431_);
return v___x_3433_;
}
}
else
{
lean_dec(v___x_3431_);
lean_dec_ref_known(v___x_3426_, 7);
lean_dec_ref(v___f_3416_);
return v___x_3432_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3___boxed(lean_object* v_ext_3443_, lean_object* v_showInfo_3444_, lean_object* v_minIndexable_3445_, lean_object* v_attrName_3446_, lean_object* v___x_3447_, lean_object* v_declName_3448_, lean_object* v_stx_3449_, lean_object* v_attrKind_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_){
_start:
{
uint8_t v_showInfo_boxed_3454_; uint8_t v_minIndexable_boxed_3455_; uint8_t v_attrKind_boxed_3456_; lean_object* v_res_3457_; 
v_showInfo_boxed_3454_ = lean_unbox(v_showInfo_3444_);
v_minIndexable_boxed_3455_ = lean_unbox(v_minIndexable_3445_);
v_attrKind_boxed_3456_ = lean_unbox(v_attrKind_3450_);
v_res_3457_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3(v_ext_3443_, v_showInfo_boxed_3454_, v_minIndexable_boxed_3455_, v_attrName_3446_, v___x_3447_, v_declName_3448_, v_stx_3449_, v_attrKind_boxed_3456_, v___y_3451_, v___y_3452_);
lean_dec(v___y_3452_);
lean_dec_ref(v___y_3451_);
return v_res_3457_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(lean_object* v_attrName_3480_, uint8_t v_minIndexable_3481_, uint8_t v_showInfo_3482_, lean_object* v_ext_3483_, lean_object* v_ref_3484_){
_start:
{
lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___f_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___f_3491_; lean_object* v___y_3493_; lean_object* v___y_3494_; lean_object* v___y_3537_; 
v___x_3486_ = lean_box(1);
v___x_3487_ = lean_box(v_showInfo_3482_);
lean_inc_n(v_attrName_3480_, 2);
lean_inc_ref(v_ext_3483_);
v___f_3488_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__1___boxed), 8, 4);
lean_closure_set(v___f_3488_, 0, v_ext_3483_);
lean_closure_set(v___f_3488_, 1, v___x_3486_);
lean_closure_set(v___f_3488_, 2, v___x_3487_);
lean_closure_set(v___f_3488_, 3, v_attrName_3480_);
v___x_3489_ = lean_box(v_showInfo_3482_);
v___x_3490_ = lean_box(v_minIndexable_3481_);
v___f_3491_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__3___boxed), 11, 5);
lean_closure_set(v___f_3491_, 0, v_ext_3483_);
lean_closure_set(v___f_3491_, 1, v___x_3489_);
lean_closure_set(v___f_3491_, 2, v___x_3490_);
lean_closure_set(v___f_3491_, 3, v_attrName_3480_);
lean_closure_set(v___f_3491_, 4, v___x_3486_);
if (v_minIndexable_3481_ == 0)
{
if (v_showInfo_3482_ == 0)
{
lean_inc(v_attrName_3480_);
v___y_3537_ = v_attrName_3480_;
goto v___jp_3536_;
}
else
{
lean_object* v___x_3565_; lean_object* v___x_3566_; 
v___x_3565_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__19));
lean_inc(v_attrName_3480_);
v___x_3566_ = lean_name_append_after(v_attrName_3480_, v___x_3565_);
v___y_3537_ = v___x_3566_;
goto v___jp_3536_;
}
}
else
{
if (v_showInfo_3482_ == 0)
{
lean_object* v___x_3567_; lean_object* v___x_3568_; 
v___x_3567_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__20));
lean_inc(v_attrName_3480_);
v___x_3568_ = lean_name_append_after(v_attrName_3480_, v___x_3567_);
v___y_3537_ = v___x_3568_;
goto v___jp_3536_;
}
else
{
lean_object* v___x_3569_; lean_object* v___x_3570_; 
v___x_3569_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__21));
lean_inc(v_attrName_3480_);
v___x_3570_ = lean_name_append_after(v_attrName_3480_, v___x_3569_);
v___y_3537_ = v___x_3570_;
goto v___jp_3536_;
}
}
v___jp_3492_:
{
lean_object* v___x_3495_; uint8_t v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; uint8_t v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; 
v___x_3495_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__0));
v___x_3496_ = 1;
v___x_3497_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_3480_, v___x_3496_);
v___x_3498_ = lean_string_append(v___x_3495_, v___x_3497_);
v___x_3499_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__1));
v___x_3500_ = lean_string_append(v___x_3498_, v___x_3499_);
v___x_3501_ = lean_string_append(v___x_3500_, v___x_3497_);
v___x_3502_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__2));
v___x_3503_ = lean_string_append(v___x_3501_, v___x_3502_);
v___x_3504_ = lean_string_append(v___x_3503_, v___x_3497_);
v___x_3505_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__3));
v___x_3506_ = lean_string_append(v___x_3504_, v___x_3505_);
v___x_3507_ = lean_string_append(v___x_3506_, v___x_3497_);
v___x_3508_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__4));
v___x_3509_ = lean_string_append(v___x_3507_, v___x_3508_);
v___x_3510_ = lean_string_append(v___x_3509_, v___x_3497_);
v___x_3511_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__5));
v___x_3512_ = lean_string_append(v___x_3510_, v___x_3511_);
v___x_3513_ = lean_string_append(v___x_3512_, v___x_3497_);
v___x_3514_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__6));
v___x_3515_ = lean_string_append(v___x_3513_, v___x_3514_);
v___x_3516_ = lean_string_append(v___x_3515_, v___x_3497_);
v___x_3517_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__7));
v___x_3518_ = lean_string_append(v___x_3516_, v___x_3517_);
v___x_3519_ = lean_string_append(v___x_3518_, v___x_3497_);
v___x_3520_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__8));
v___x_3521_ = lean_string_append(v___x_3519_, v___x_3520_);
v___x_3522_ = lean_string_append(v___x_3521_, v___x_3497_);
v___x_3523_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__9));
v___x_3524_ = lean_string_append(v___x_3522_, v___x_3523_);
v___x_3525_ = lean_string_append(v___x_3524_, v___x_3497_);
v___x_3526_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__10));
v___x_3527_ = lean_string_append(v___x_3525_, v___x_3526_);
v___x_3528_ = lean_string_append(v___x_3527_, v___x_3497_);
lean_dec_ref(v___x_3497_);
v___x_3529_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__11));
v___x_3530_ = lean_string_append(v___x_3528_, v___x_3529_);
v___x_3531_ = lean_string_append(v___y_3494_, v___x_3530_);
lean_dec_ref(v___x_3530_);
v___x_3532_ = 1;
v___x_3533_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3533_, 0, v_ref_3484_);
lean_ctor_set(v___x_3533_, 1, v___y_3493_);
lean_ctor_set(v___x_3533_, 2, v___x_3531_);
lean_ctor_set_uint8(v___x_3533_, sizeof(void*)*3, v___x_3532_);
v___x_3534_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3533_);
lean_ctor_set(v___x_3534_, 1, v___f_3491_);
lean_ctor_set(v___x_3534_, 2, v___f_3488_);
v___x_3535_ = l_Lean_registerBuiltinAttribute(v___x_3534_);
return v___x_3535_;
}
v___jp_3536_:
{
if (v_minIndexable_3481_ == 0)
{
if (v_showInfo_3482_ == 0)
{
lean_object* v___x_3538_; uint8_t v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; 
v___x_3538_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12));
v___x_3539_ = 1;
lean_inc(v_attrName_3480_);
v___x_3540_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_3480_, v___x_3539_);
v___x_3541_ = lean_string_append(v___x_3538_, v___x_3540_);
lean_dec_ref(v___x_3540_);
v___x_3542_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__13));
v___x_3543_ = lean_string_append(v___x_3541_, v___x_3542_);
v___y_3493_ = v___y_3537_;
v___y_3494_ = v___x_3543_;
goto v___jp_3492_;
}
else
{
lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; 
v___x_3544_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12));
lean_inc(v_attrName_3480_);
v___x_3545_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_3480_, v_showInfo_3482_);
v___x_3546_ = lean_string_append(v___x_3544_, v___x_3545_);
v___x_3547_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__14));
v___x_3548_ = lean_string_append(v___x_3546_, v___x_3547_);
v___x_3549_ = lean_string_append(v___x_3548_, v___x_3545_);
lean_dec_ref(v___x_3545_);
v___x_3550_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__15));
v___x_3551_ = lean_string_append(v___x_3549_, v___x_3550_);
v___y_3493_ = v___y_3537_;
v___y_3494_ = v___x_3551_;
goto v___jp_3492_;
}
}
else
{
if (v_showInfo_3482_ == 0)
{
lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; 
v___x_3552_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12));
lean_inc(v_attrName_3480_);
v___x_3553_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_3480_, v_minIndexable_3481_);
v___x_3554_ = lean_string_append(v___x_3552_, v___x_3553_);
lean_dec_ref(v___x_3553_);
v___x_3555_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__16));
v___x_3556_ = lean_string_append(v___x_3554_, v___x_3555_);
v___y_3493_ = v___y_3537_;
v___y_3494_ = v___x_3556_;
goto v___jp_3492_;
}
else
{
lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; 
v___x_3557_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__12));
lean_inc(v_attrName_3480_);
v___x_3558_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_attrName_3480_, v_showInfo_3482_);
v___x_3559_ = lean_string_append(v___x_3557_, v___x_3558_);
v___x_3560_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__17));
v___x_3561_ = lean_string_append(v___x_3559_, v___x_3560_);
v___x_3562_ = lean_string_append(v___x_3561_, v___x_3558_);
lean_dec_ref(v___x_3558_);
v___x_3563_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___closed__18));
v___x_3564_ = lean_string_append(v___x_3562_, v___x_3563_);
v___y_3493_ = v___y_3537_;
v___y_3494_ = v___x_3564_;
goto v___jp_3492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___boxed(lean_object* v_attrName_3571_, lean_object* v_minIndexable_3572_, lean_object* v_showInfo_3573_, lean_object* v_ext_3574_, lean_object* v_ref_3575_, lean_object* v_a_3576_){
_start:
{
uint8_t v_minIndexable_boxed_3577_; uint8_t v_showInfo_boxed_3578_; lean_object* v_res_3579_; 
v_minIndexable_boxed_3577_ = lean_unbox(v_minIndexable_3572_);
v_showInfo_boxed_3578_ = lean_unbox(v_showInfo_3573_);
v_res_3579_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_3571_, v_minIndexable_boxed_3577_, v_showInfo_boxed_3578_, v_ext_3574_, v_ref_3575_);
return v_res_3579_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0(lean_object* v_00_u03b1_3580_, lean_object* v_msg_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_){
_start:
{
lean_object* v___x_3587_; 
v___x_3587_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___redArg(v_msg_3581_, v___y_3582_, v___y_3583_, v___y_3584_, v___y_3585_);
return v___x_3587_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0___boxed(lean_object* v_00_u03b1_3588_, lean_object* v_msg_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_){
_start:
{
lean_object* v_res_3595_; 
v_res_3595_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__0(v_00_u03b1_3588_, v_msg_3589_, v___y_3590_, v___y_3591_, v___y_3592_, v___y_3593_);
lean_dec(v___y_3593_);
lean_dec_ref(v___y_3592_);
lean_dec(v___y_3591_);
lean_dec_ref(v___y_3590_);
return v_res_3595_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1(lean_object* v_ext_3596_, uint8_t v_attrKind_3597_, uint8_t v_showInfo_3598_, uint8_t v_minIndexable_3599_, lean_object* v_as_3600_, lean_object* v_as_x27_3601_, lean_object* v_b_3602_, lean_object* v_a_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_){
_start:
{
lean_object* v___x_3609_; 
v___x_3609_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___redArg(v_ext_3596_, v_attrKind_3597_, v_showInfo_3598_, v_minIndexable_3599_, v_as_x27_3601_, v_b_3602_, v___y_3604_, v___y_3605_, v___y_3606_, v___y_3607_);
return v___x_3609_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1___boxed(lean_object* v_ext_3610_, lean_object* v_attrKind_3611_, lean_object* v_showInfo_3612_, lean_object* v_minIndexable_3613_, lean_object* v_as_3614_, lean_object* v_as_x27_3615_, lean_object* v_b_3616_, lean_object* v_a_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_){
_start:
{
uint8_t v_attrKind_boxed_3623_; uint8_t v_showInfo_boxed_3624_; uint8_t v_minIndexable_boxed_3625_; lean_object* v_res_3626_; 
v_attrKind_boxed_3623_ = lean_unbox(v_attrKind_3611_);
v_showInfo_boxed_3624_ = lean_unbox(v_showInfo_3612_);
v_minIndexable_boxed_3625_ = lean_unbox(v_minIndexable_3613_);
v_res_3626_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__1(v_ext_3610_, v_attrKind_boxed_3623_, v_showInfo_boxed_3624_, v_minIndexable_boxed_3625_, v_as_3614_, v_as_x27_3615_, v_b_3616_, v_a_3617_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
lean_dec(v___y_3621_);
lean_dec_ref(v___y_3620_);
lean_dec(v___y_3619_);
lean_dec_ref(v___y_3618_);
lean_dec(v_as_x27_3615_);
lean_dec(v_as_3614_);
return v_res_3626_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7(lean_object* v_00_u03b1_3627_, lean_object* v_x_3628_, uint8_t v_isExporting_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_){
_start:
{
lean_object* v___x_3635_; 
v___x_3635_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___redArg(v_x_3628_, v_isExporting_3629_, v___y_3630_, v___y_3631_, v___y_3632_, v___y_3633_);
return v___x_3635_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7___boxed(lean_object* v_00_u03b1_3636_, lean_object* v_x_3637_, lean_object* v_isExporting_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_){
_start:
{
uint8_t v_isExporting_boxed_3644_; lean_object* v_res_3645_; 
v_isExporting_boxed_3644_ = lean_unbox(v_isExporting_3638_);
v_res_3645_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3_spec__7(v_00_u03b1_3636_, v_x_3637_, v_isExporting_boxed_3644_, v___y_3639_, v___y_3640_, v___y_3641_, v___y_3642_);
lean_dec(v___y_3642_);
lean_dec_ref(v___y_3641_);
lean_dec(v___y_3640_);
lean_dec_ref(v___y_3639_);
return v_res_3645_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3(lean_object* v_00_u03b1_3646_, lean_object* v_x_3647_, uint8_t v_when_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_){
_start:
{
lean_object* v___x_3654_; 
v___x_3654_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___redArg(v_x_3647_, v_when_3648_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_);
return v___x_3654_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3___boxed(lean_object* v_00_u03b1_3655_, lean_object* v_x_3656_, lean_object* v_when_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_){
_start:
{
uint8_t v_when_boxed_3663_; lean_object* v_res_3664_; 
v_when_boxed_3663_ = lean_unbox(v_when_3657_);
v_res_3664_ = l_Lean_withoutExporting___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__3(v_00_u03b1_3655_, v_x_3656_, v_when_boxed_3663_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_);
lean_dec(v___y_3661_);
lean_dec_ref(v___y_3660_);
lean_dec(v___y_3659_);
lean_dec_ref(v___y_3658_);
return v_res_3664_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5(lean_object* v_00_u03b2_3665_, lean_object* v_m_3666_, lean_object* v_a_3667_){
_start:
{
lean_object* v___x_3668_; 
v___x_3668_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(v_m_3666_, v_a_3667_);
return v___x_3668_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___boxed(lean_object* v_00_u03b2_3669_, lean_object* v_m_3670_, lean_object* v_a_3671_){
_start:
{
lean_object* v_res_3672_; 
v_res_3672_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5(v_00_u03b2_3669_, v_m_3670_, v_a_3671_);
lean_dec(v_a_3671_);
lean_dec_ref(v_m_3670_);
return v_res_3672_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_3673_, lean_object* v_x_3674_, lean_object* v_x_3675_){
_start:
{
uint8_t v___x_3676_; 
v___x_3676_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(v_x_3674_, v_x_3675_);
return v___x_3676_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_3677_, lean_object* v_x_3678_, lean_object* v_x_3679_){
_start:
{
uint8_t v_res_3680_; lean_object* v_r_3681_; 
v_res_3680_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4(v_00_u03b2_3677_, v_x_3678_, v_x_3679_);
lean_dec_ref(v_x_3679_);
lean_dec_ref(v_x_3678_);
v_r_3681_ = lean_box(v_res_3680_);
return v_r_3681_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_3682_, lean_object* v_m_3683_, lean_object* v_a_3684_, lean_object* v_b_3685_){
_start:
{
lean_object* v___x_3686_; 
v___x_3686_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg(v_m_3683_, v_a_3684_, v_b_3685_);
return v___x_3686_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9(lean_object* v_00_u03b2_3687_, lean_object* v_a_3688_, lean_object* v_x_3689_){
_start:
{
lean_object* v___x_3690_; 
v___x_3690_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___redArg(v_a_3688_, v_x_3689_);
return v___x_3690_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9___boxed(lean_object* v_00_u03b2_3691_, lean_object* v_a_3692_, lean_object* v_x_3693_){
_start:
{
lean_object* v_res_3694_; 
v_res_3694_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5_spec__9(v_00_u03b2_3691_, v_a_3692_, v_x_3693_);
lean_dec(v_x_3693_);
lean_dec(v_a_3692_);
return v_res_3694_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7(lean_object* v_00_u03b2_3695_, lean_object* v_x_3696_, size_t v_x_3697_, lean_object* v_x_3698_){
_start:
{
uint8_t v___x_3699_; 
v___x_3699_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___redArg(v_x_3696_, v_x_3697_, v_x_3698_);
return v___x_3699_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7___boxed(lean_object* v_00_u03b2_3700_, lean_object* v_x_3701_, lean_object* v_x_3702_, lean_object* v_x_3703_){
_start:
{
size_t v_x_18184__boxed_3704_; uint8_t v_res_3705_; lean_object* v_r_3706_; 
v_x_18184__boxed_3704_ = lean_unbox_usize(v_x_3702_);
lean_dec(v_x_3702_);
v_res_3705_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7(v_00_u03b2_3700_, v_x_3701_, v_x_18184__boxed_3704_, v_x_3703_);
lean_dec_ref(v_x_3703_);
lean_dec_ref(v_x_3701_);
v_r_3706_ = lean_box(v_res_3705_);
return v_r_3706_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__9(lean_object* v_00_u03b2_3707_, lean_object* v_a_3708_, lean_object* v_x_3709_){
_start:
{
uint8_t v___x_3710_; 
v___x_3710_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__9___redArg(v_a_3708_, v_x_3709_);
return v___x_3710_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__9___boxed(lean_object* v_00_u03b2_3711_, lean_object* v_a_3712_, lean_object* v_x_3713_){
_start:
{
uint8_t v_res_3714_; lean_object* v_r_3715_; 
v_res_3714_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__9(v_00_u03b2_3711_, v_a_3712_, v_x_3713_);
lean_dec(v_x_3713_);
lean_dec_ref(v_a_3712_);
v_r_3715_ = lean_box(v_res_3714_);
return v_r_3715_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10(lean_object* v_00_u03b2_3716_, lean_object* v_data_3717_){
_start:
{
lean_object* v___x_3718_; 
v___x_3718_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10___redArg(v_data_3717_);
return v___x_3718_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10(lean_object* v_00_u03b2_3719_, lean_object* v_keys_3720_, lean_object* v_vals_3721_, lean_object* v_heq_3722_, lean_object* v_i_3723_, lean_object* v_k_3724_){
_start:
{
uint8_t v___x_3725_; 
v___x_3725_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___redArg(v_keys_3720_, v_i_3723_, v_k_3724_);
return v___x_3725_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10___boxed(lean_object* v_00_u03b2_3726_, lean_object* v_keys_3727_, lean_object* v_vals_3728_, lean_object* v_heq_3729_, lean_object* v_i_3730_, lean_object* v_k_3731_){
_start:
{
uint8_t v_res_3732_; lean_object* v_r_3733_; 
v_res_3732_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4_spec__7_spec__10(v_00_u03b2_3726_, v_keys_3727_, v_vals_3728_, v_heq_3729_, v_i_3730_, v_k_3731_);
lean_dec_ref(v_k_3731_);
lean_dec_ref(v_vals_3728_);
lean_dec_ref(v_keys_3727_);
v_r_3733_ = lean_box(v_res_3732_);
return v_r_3733_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10_spec__14(lean_object* v_00_u03b2_3734_, lean_object* v_i_3735_, lean_object* v_source_3736_, lean_object* v_target_3737_){
_start:
{
lean_object* v___x_3738_; 
v___x_3738_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10_spec__14___redArg(v_i_3735_, v_source_3736_, v_target_3737_);
return v___x_3738_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10_spec__14_spec__17(lean_object* v_00_u03b2_3739_, lean_object* v_x_3740_, lean_object* v_x_3741_){
_start:
{
lean_object* v___x_3742_; 
v___x_3742_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5_spec__10_spec__14_spec__17___redArg(v_x_3740_, v_x_3741_);
return v___x_3742_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; 
v___x_3743_ = lean_box(0);
v___x_3744_ = lean_unsigned_to_nat(16u);
v___x_3745_ = lean_mk_array(v___x_3744_, v___x_3743_);
return v___x_3745_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; 
v___x_3746_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_);
v___x_3747_ = lean_unsigned_to_nat(0u);
v___x_3748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3747_);
lean_ctor_set(v___x_3748_, 1, v___x_3746_);
return v___x_3748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; 
v___x_3750_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_);
v___x_3751_ = lean_st_mk_ref(v___x_3750_);
v___x_3752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3752_, 0, v___x_3751_);
return v___x_3752_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2____boxed(lean_object* v_a_3753_){
_start:
{
lean_object* v_res_3754_; 
v_res_3754_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_();
return v_res_3754_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1(lean_object* v_cls_3755_, lean_object* v_msg_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_){
_start:
{
lean_object* v_ref_3760_; lean_object* v___x_3761_; lean_object* v_a_3762_; lean_object* v___x_3764_; uint8_t v_isShared_3765_; uint8_t v_isSharedCheck_3807_; 
v_ref_3760_ = lean_ctor_get(v___y_3757_, 2);
v___x_3761_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Grind_getAttrKindCore_spec__0_spec__0(v_msg_3756_, v___y_3757_, v___y_3758_);
v_a_3762_ = lean_ctor_get(v___x_3761_, 0);
v_isSharedCheck_3807_ = !lean_is_exclusive(v___x_3761_);
if (v_isSharedCheck_3807_ == 0)
{
v___x_3764_ = v___x_3761_;
v_isShared_3765_ = v_isSharedCheck_3807_;
goto v_resetjp_3763_;
}
else
{
lean_inc(v_a_3762_);
lean_dec(v___x_3761_);
v___x_3764_ = lean_box(0);
v_isShared_3765_ = v_isSharedCheck_3807_;
goto v_resetjp_3763_;
}
v_resetjp_3763_:
{
lean_object* v___x_3766_; lean_object* v_traceState_3767_; lean_object* v_env_3768_; lean_object* v_nextMacroScope_3769_; lean_object* v_ngen_3770_; lean_object* v_auxDeclNGen_3771_; lean_object* v_cache_3772_; lean_object* v_recordedDeps_3773_; lean_object* v_messages_3774_; lean_object* v_infoState_3775_; lean_object* v_snapshotTasks_3776_; lean_object* v___x_3778_; uint8_t v_isShared_3779_; uint8_t v_isSharedCheck_3806_; 
v___x_3766_ = lean_st_ref_take(v___y_3758_);
v_traceState_3767_ = lean_ctor_get(v___x_3766_, 4);
v_env_3768_ = lean_ctor_get(v___x_3766_, 0);
v_nextMacroScope_3769_ = lean_ctor_get(v___x_3766_, 1);
v_ngen_3770_ = lean_ctor_get(v___x_3766_, 2);
v_auxDeclNGen_3771_ = lean_ctor_get(v___x_3766_, 3);
v_cache_3772_ = lean_ctor_get(v___x_3766_, 5);
v_recordedDeps_3773_ = lean_ctor_get(v___x_3766_, 6);
v_messages_3774_ = lean_ctor_get(v___x_3766_, 7);
v_infoState_3775_ = lean_ctor_get(v___x_3766_, 8);
v_snapshotTasks_3776_ = lean_ctor_get(v___x_3766_, 9);
v_isSharedCheck_3806_ = !lean_is_exclusive(v___x_3766_);
if (v_isSharedCheck_3806_ == 0)
{
v___x_3778_ = v___x_3766_;
v_isShared_3779_ = v_isSharedCheck_3806_;
goto v_resetjp_3777_;
}
else
{
lean_inc(v_snapshotTasks_3776_);
lean_inc(v_infoState_3775_);
lean_inc(v_messages_3774_);
lean_inc(v_recordedDeps_3773_);
lean_inc(v_cache_3772_);
lean_inc(v_traceState_3767_);
lean_inc(v_auxDeclNGen_3771_);
lean_inc(v_ngen_3770_);
lean_inc(v_nextMacroScope_3769_);
lean_inc(v_env_3768_);
lean_dec(v___x_3766_);
v___x_3778_ = lean_box(0);
v_isShared_3779_ = v_isSharedCheck_3806_;
goto v_resetjp_3777_;
}
v_resetjp_3777_:
{
uint64_t v_tid_3780_; lean_object* v_traces_3781_; lean_object* v___x_3783_; uint8_t v_isShared_3784_; uint8_t v_isSharedCheck_3805_; 
v_tid_3780_ = lean_ctor_get_uint64(v_traceState_3767_, sizeof(void*)*1);
v_traces_3781_ = lean_ctor_get(v_traceState_3767_, 0);
v_isSharedCheck_3805_ = !lean_is_exclusive(v_traceState_3767_);
if (v_isSharedCheck_3805_ == 0)
{
v___x_3783_ = v_traceState_3767_;
v_isShared_3784_ = v_isSharedCheck_3805_;
goto v_resetjp_3782_;
}
else
{
lean_inc(v_traces_3781_);
lean_dec(v_traceState_3767_);
v___x_3783_ = lean_box(0);
v_isShared_3784_ = v_isSharedCheck_3805_;
goto v_resetjp_3782_;
}
v_resetjp_3782_:
{
lean_object* v___x_3785_; lean_object* v___x_3786_; double v___x_3787_; uint8_t v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3796_; 
v___x_3785_ = lean_box(0);
v___x_3786_ = lean_box(0);
v___x_3787_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__0);
v___x_3788_ = 0;
v___x_3789_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__1));
v___x_3790_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3790_, 0, v_cls_3755_);
lean_ctor_set(v___x_3790_, 1, v___x_3786_);
lean_ctor_set(v___x_3790_, 2, v___x_3789_);
lean_ctor_set_float(v___x_3790_, sizeof(void*)*3, v___x_3787_);
lean_ctor_set_float(v___x_3790_, sizeof(void*)*3 + 8, v___x_3787_);
lean_ctor_set_uint8(v___x_3790_, sizeof(void*)*3 + 16, v___x_3788_);
v___x_3791_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__6___closed__2));
v___x_3792_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3792_, 0, v___x_3790_);
lean_ctor_set(v___x_3792_, 1, v_a_3762_);
lean_ctor_set(v___x_3792_, 2, v___x_3791_);
lean_inc(v_ref_3760_);
v___x_3793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3793_, 0, v_ref_3760_);
lean_ctor_set(v___x_3793_, 1, v___x_3792_);
v___x_3794_ = l_Lean_PersistentArray_push___redArg(v_traces_3781_, v___x_3793_);
if (v_isShared_3784_ == 0)
{
lean_ctor_set(v___x_3783_, 0, v___x_3794_);
v___x_3796_ = v___x_3783_;
goto v_reusejp_3795_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v___x_3794_);
lean_ctor_set_uint64(v_reuseFailAlloc_3804_, sizeof(void*)*1, v_tid_3780_);
v___x_3796_ = v_reuseFailAlloc_3804_;
goto v_reusejp_3795_;
}
v_reusejp_3795_:
{
lean_object* v___x_3798_; 
if (v_isShared_3779_ == 0)
{
lean_ctor_set(v___x_3778_, 4, v___x_3796_);
v___x_3798_ = v___x_3778_;
goto v_reusejp_3797_;
}
else
{
lean_object* v_reuseFailAlloc_3803_; 
v_reuseFailAlloc_3803_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3803_, 0, v_env_3768_);
lean_ctor_set(v_reuseFailAlloc_3803_, 1, v_nextMacroScope_3769_);
lean_ctor_set(v_reuseFailAlloc_3803_, 2, v_ngen_3770_);
lean_ctor_set(v_reuseFailAlloc_3803_, 3, v_auxDeclNGen_3771_);
lean_ctor_set(v_reuseFailAlloc_3803_, 4, v___x_3796_);
lean_ctor_set(v_reuseFailAlloc_3803_, 5, v_cache_3772_);
lean_ctor_set(v_reuseFailAlloc_3803_, 6, v_recordedDeps_3773_);
lean_ctor_set(v_reuseFailAlloc_3803_, 7, v_messages_3774_);
lean_ctor_set(v_reuseFailAlloc_3803_, 8, v_infoState_3775_);
lean_ctor_set(v_reuseFailAlloc_3803_, 9, v_snapshotTasks_3776_);
v___x_3798_ = v_reuseFailAlloc_3803_;
goto v_reusejp_3797_;
}
v_reusejp_3797_:
{
lean_object* v___x_3799_; lean_object* v___x_3801_; 
v___x_3799_ = lean_st_ref_put(v___y_3758_, v___x_3798_);
if (v_isShared_3765_ == 0)
{
lean_ctor_set(v___x_3764_, 0, v___x_3785_);
v___x_3801_ = v___x_3764_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v___x_3785_);
v___x_3801_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
return v___x_3801_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_cls_3808_, lean_object* v_msg_3809_, lean_object* v___y_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_){
_start:
{
lean_object* v_res_3813_; 
v_res_3813_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1(v_cls_3808_, v_msg_3809_, v___y_3810_, v___y_3811_);
lean_dec(v___y_3811_);
lean_dec_ref(v___y_3810_);
return v_res_3813_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(lean_object* v_mod_3814_, uint8_t v_isMeta_3815_, lean_object* v_hint_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_){
_start:
{
lean_object* v___y_3821_; lean_object* v___y_3822_; lean_object* v___y_3823_; lean_object* v___y_3824_; lean_object* v___y_3825_; lean_object* v___y_3826_; lean_object* v___y_3827_; lean_object* v___y_3828_; lean_object* v___y_3829_; lean_object* v___y_3830_; lean_object* v___y_3831_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v_env_3838_; uint8_t v_isExporting_3839_; lean_object* v_entry_3840_; lean_object* v___x_3841_; lean_object* v_env_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; uint8_t v___x_3847_; 
v___x_3836_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__0);
v___x_3837_ = lean_st_ref_get(v___y_3818_);
v_env_3838_ = lean_ctor_get(v___x_3837_, 0);
lean_inc_ref(v_env_3838_);
lean_dec(v___x_3837_);
v_isExporting_3839_ = lean_ctor_get_uint8(v_env_3838_, sizeof(void*)*13);
lean_dec_ref(v_env_3838_);
lean_inc(v_mod_3814_);
v_entry_3840_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_3840_, 0, v_mod_3814_);
lean_ctor_set_uint8(v_entry_3840_, sizeof(void*)*1, v_isExporting_3839_);
lean_ctor_set_uint8(v_entry_3840_, sizeof(void*)*1 + 1, v_isMeta_3815_);
v___x_3841_ = lean_st_ref_get(v___y_3818_);
v_env_3842_ = lean_ctor_get(v___x_3841_, 0);
lean_inc_ref(v_env_3842_);
lean_dec(v___x_3841_);
v___x_3843_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_3844_ = lean_box(1);
v___x_3845_ = lean_box(0);
v___x_3846_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3836_, v___x_3843_, v_env_3842_, v___x_3844_, v___x_3845_);
v___x_3847_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__4___redArg(v___x_3846_, v_entry_3840_);
lean_dec(v___x_3846_);
if (v___x_3847_ == 0)
{
lean_object* v_toCold_3848_; lean_object* v_options_3849_; lean_object* v_inheritedTraceOptions_3850_; uint8_t v_hasTrace_3851_; lean_object* v___f_3852_; uint8_t v___x_3853_; lean_object* v___y_3855_; lean_object* v___y_3874_; 
v_toCold_3848_ = lean_ctor_get(v___y_3817_, 0);
v_options_3849_ = lean_ctor_get(v_toCold_3848_, 2);
v_inheritedTraceOptions_3850_ = lean_ctor_get(v_toCold_3848_, 11);
v_hasTrace_3851_ = lean_ctor_get_uint8(v_options_3849_, sizeof(void*)*1);
lean_inc_ref(v_entry_3840_);
v___f_3852_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___lam__0), 3, 2);
lean_closure_set(v___f_3852_, 0, v___x_3843_);
lean_closure_set(v___f_3852_, 1, v_entry_3840_);
v___x_3853_ = 1;
if (v_hasTrace_3851_ == 0)
{
lean_dec(v_hint_3816_);
lean_dec(v_mod_3814_);
v___y_3874_ = v___y_3818_;
goto v___jp_3873_;
}
else
{
lean_object* v_cls_3881_; lean_object* v___y_3883_; lean_object* v___y_3884_; lean_object* v___y_3888_; lean_object* v___y_3889_; lean_object* v___x_3901_; uint8_t v___x_3902_; 
v_cls_3881_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__2));
v___x_3901_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__10);
v___x_3902_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3850_, v_options_3849_, v___x_3901_);
if (v___x_3902_ == 0)
{
lean_dec(v_hint_3816_);
lean_dec(v_mod_3814_);
v___y_3874_ = v___y_3818_;
goto v___jp_3873_;
}
else
{
lean_object* v___x_3903_; lean_object* v___y_3905_; 
v___x_3903_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__12);
if (v_isExporting_3839_ == 0)
{
lean_object* v___x_3912_; 
v___x_3912_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__17));
v___y_3905_ = v___x_3912_;
goto v___jp_3904_;
}
else
{
lean_object* v___x_3913_; 
v___x_3913_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__18));
v___y_3905_ = v___x_3913_;
goto v___jp_3904_;
}
v___jp_3904_:
{
lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; 
lean_inc_ref(v___y_3905_);
v___x_3906_ = l_Lean_stringToMessageData(v___y_3905_);
v___x_3907_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3907_, 0, v___x_3903_);
lean_ctor_set(v___x_3907_, 1, v___x_3906_);
v___x_3908_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__14);
v___x_3909_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3909_, 0, v___x_3907_);
lean_ctor_set(v___x_3909_, 1, v___x_3908_);
if (v_isMeta_3815_ == 0)
{
lean_object* v___x_3910_; 
v___x_3910_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__15));
v___y_3888_ = v___x_3909_;
v___y_3889_ = v___x_3910_;
goto v___jp_3887_;
}
else
{
lean_object* v___x_3911_; 
v___x_3911_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__16));
v___y_3888_ = v___x_3909_;
v___y_3889_ = v___x_3911_;
goto v___jp_3887_;
}
}
}
v___jp_3882_:
{
lean_object* v___x_3885_; lean_object* v___x_3886_; 
v___x_3885_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3885_, 0, v___y_3883_);
lean_ctor_set(v___x_3885_, 1, v___y_3884_);
v___x_3886_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0_spec__1(v_cls_3881_, v___x_3885_, v___y_3817_, v___y_3818_);
if (lean_obj_tag(v___x_3886_) == 0)
{
lean_dec_ref_known(v___x_3886_, 1);
v___y_3874_ = v___y_3818_;
goto v___jp_3873_;
}
else
{
lean_dec_ref(v___f_3852_);
lean_dec_ref_known(v_entry_3840_, 1);
return v___x_3886_;
}
}
v___jp_3887_:
{
lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; uint8_t v___x_3896_; 
lean_inc_ref(v___y_3889_);
v___x_3890_ = l_Lean_stringToMessageData(v___y_3889_);
v___x_3891_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3891_, 0, v___y_3888_);
lean_ctor_set(v___x_3891_, 1, v___x_3890_);
v___x_3892_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__4);
v___x_3893_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3893_, 0, v___x_3891_);
lean_ctor_set(v___x_3893_, 1, v___x_3892_);
v___x_3894_ = l_Lean_MessageData_ofName(v_mod_3814_);
v___x_3895_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3895_, 0, v___x_3893_);
lean_ctor_set(v___x_3895_, 1, v___x_3894_);
v___x_3896_ = l_Lean_Name_isAnonymous(v_hint_3816_);
if (v___x_3896_ == 0)
{
lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; 
v___x_3897_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__6);
v___x_3898_ = l_Lean_MessageData_ofName(v_hint_3816_);
v___x_3899_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3899_, 0, v___x_3897_);
lean_ctor_set(v___x_3899_, 1, v___x_3898_);
v___y_3883_ = v___x_3895_;
v___y_3884_ = v___x_3899_;
goto v___jp_3882_;
}
else
{
lean_object* v___x_3900_; 
lean_dec(v_hint_3816_);
v___x_3900_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3___closed__7);
v___y_3883_ = v___x_3895_;
v___y_3884_ = v___x_3900_;
goto v___jp_3882_;
}
}
}
v___jp_3854_:
{
lean_object* v___x_3856_; lean_object* v_toEnvExtension_3857_; lean_object* v_env_3858_; lean_object* v_nextMacroScope_3859_; lean_object* v_ngen_3860_; lean_object* v_auxDeclNGen_3861_; lean_object* v_traceState_3862_; lean_object* v_recordedDeps_3863_; lean_object* v_messages_3864_; lean_object* v_infoState_3865_; lean_object* v_snapshotTasks_3866_; lean_object* v_asyncMode_3867_; uint8_t v_logWrites_3868_; lean_object* v___x_3869_; 
v___x_3856_ = lean_st_ref_take(v___y_3855_);
v_toEnvExtension_3857_ = lean_ctor_get(v___x_3843_, 0);
v_env_3858_ = lean_ctor_get(v___x_3856_, 0);
lean_inc_ref(v_env_3858_);
v_nextMacroScope_3859_ = lean_ctor_get(v___x_3856_, 1);
lean_inc(v_nextMacroScope_3859_);
v_ngen_3860_ = lean_ctor_get(v___x_3856_, 2);
lean_inc_ref(v_ngen_3860_);
v_auxDeclNGen_3861_ = lean_ctor_get(v___x_3856_, 3);
lean_inc_ref(v_auxDeclNGen_3861_);
v_traceState_3862_ = lean_ctor_get(v___x_3856_, 4);
lean_inc_ref(v_traceState_3862_);
v_recordedDeps_3863_ = lean_ctor_get(v___x_3856_, 6);
lean_inc_ref(v_recordedDeps_3863_);
v_messages_3864_ = lean_ctor_get(v___x_3856_, 7);
lean_inc_ref(v_messages_3864_);
v_infoState_3865_ = lean_ctor_get(v___x_3856_, 8);
lean_inc_ref(v_infoState_3865_);
v_snapshotTasks_3866_ = lean_ctor_get(v___x_3856_, 9);
lean_inc_ref(v_snapshotTasks_3866_);
lean_dec(v___x_3856_);
v_asyncMode_3867_ = lean_ctor_get(v_toEnvExtension_3857_, 2);
v_logWrites_3868_ = lean_ctor_get_uint8(v_toEnvExtension_3857_, sizeof(void*)*6);
v___x_3869_ = lean_box(0);
if (v_logWrites_3868_ == 0)
{
lean_object* v___x_3870_; 
lean_inc_ref(v_toEnvExtension_3857_);
v___x_3870_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3857_, v_env_3858_, v___f_3852_, v_asyncMode_3867_, v___x_3845_, v___x_3853_);
v___y_3821_ = v___x_3869_;
v___y_3822_ = v_infoState_3865_;
v___y_3823_ = v_ngen_3860_;
v___y_3824_ = v_messages_3864_;
v___y_3825_ = v_traceState_3862_;
v___y_3826_ = v_recordedDeps_3863_;
v___y_3827_ = v_snapshotTasks_3866_;
v___y_3828_ = v_auxDeclNGen_3861_;
v___y_3829_ = v___y_3855_;
v___y_3830_ = v_nextMacroScope_3859_;
v___y_3831_ = v___x_3870_;
goto v___jp_3820_;
}
else
{
lean_object* v___x_3871_; lean_object* v___x_3872_; 
lean_inc_ref_n(v_toEnvExtension_3857_, 2);
v___x_3871_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_3857_, v_env_3858_);
lean_dec_ref(v_env_3858_);
v___x_3872_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_3857_, v___x_3871_, v___f_3852_, v_asyncMode_3867_, v___x_3845_, v___x_3853_);
v___y_3821_ = v___x_3869_;
v___y_3822_ = v_infoState_3865_;
v___y_3823_ = v_ngen_3860_;
v___y_3824_ = v_messages_3864_;
v___y_3825_ = v_traceState_3862_;
v___y_3826_ = v_recordedDeps_3863_;
v___y_3827_ = v_snapshotTasks_3866_;
v___y_3828_ = v_auxDeclNGen_3861_;
v___y_3829_ = v___y_3855_;
v___y_3830_ = v_nextMacroScope_3859_;
v___y_3831_ = v___x_3872_;
goto v___jp_3820_;
}
}
v___jp_3873_:
{
uint8_t v___x_3875_; 
v___x_3875_ = l_Lean_usageRecordingEnabled();
if (v___x_3875_ == 0)
{
lean_dec_ref_known(v_entry_3840_, 1);
v___y_3855_ = v___y_3874_;
goto v___jp_3854_;
}
else
{
lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; 
v___x_3876_ = l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
v___x_3877_ = lean_st_ref_take(v___x_3876_);
v___x_3878_ = lean_box(0);
v___x_3879_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__3_spec__5___redArg(v___x_3877_, v_entry_3840_, v___x_3878_);
v___x_3880_ = lean_st_ref_put(v___x_3876_, v___x_3879_);
v___y_3855_ = v___y_3874_;
goto v___jp_3854_;
}
}
}
else
{
lean_object* v___x_3914_; lean_object* v___x_3915_; 
lean_dec_ref_known(v_entry_3840_, 1);
lean_dec(v_hint_3816_);
lean_dec(v_mod_3814_);
v___x_3914_ = lean_box(0);
v___x_3915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3915_, 0, v___x_3914_);
return v___x_3915_;
}
v___jp_3820_:
{
lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; 
v___x_3832_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_Extension_addCasesAttr_spec__0___redArg___closed__1);
v___x_3833_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3833_, 0, v___y_3831_);
lean_ctor_set(v___x_3833_, 1, v___y_3830_);
lean_ctor_set(v___x_3833_, 2, v___y_3823_);
lean_ctor_set(v___x_3833_, 3, v___y_3828_);
lean_ctor_set(v___x_3833_, 4, v___y_3825_);
lean_ctor_set(v___x_3833_, 5, v___x_3832_);
lean_ctor_set(v___x_3833_, 6, v___y_3826_);
lean_ctor_set(v___x_3833_, 7, v___y_3824_);
lean_ctor_set(v___x_3833_, 8, v___y_3822_);
lean_ctor_set(v___x_3833_, 9, v___y_3827_);
v___x_3834_ = lean_st_ref_put(v___y_3829_, v___x_3833_);
v___x_3835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3835_, 0, v___y_3821_);
return v___x_3835_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0___boxed(lean_object* v_mod_3916_, lean_object* v_isMeta_3917_, lean_object* v_hint_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_){
_start:
{
uint8_t v_isMeta_boxed_3922_; lean_object* v_res_3923_; 
v_isMeta_boxed_3922_ = lean_unbox(v_isMeta_3917_);
v_res_3923_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(v_mod_3916_, v_isMeta_boxed_3922_, v_hint_3918_, v___y_3919_, v___y_3920_);
lean_dec(v___y_3920_);
lean_dec_ref(v___y_3919_);
return v_res_3923_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1(lean_object* v___x_3924_, lean_object* v_declName_3925_, lean_object* v_as_3926_, size_t v_sz_3927_, size_t v_i_3928_, lean_object* v_b_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_){
_start:
{
uint8_t v___x_3933_; 
v___x_3933_ = lean_usize_dec_lt(v_i_3928_, v_sz_3927_);
if (v___x_3933_ == 0)
{
lean_object* v___x_3934_; 
lean_dec(v_declName_3925_);
v___x_3934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3934_, 0, v_b_3929_);
return v___x_3934_;
}
else
{
lean_object* v___x_3935_; lean_object* v_modules_3936_; lean_object* v___x_3937_; lean_object* v_a_3938_; lean_object* v___x_3939_; lean_object* v_toImport_3940_; lean_object* v_module_3941_; lean_object* v___x_3942_; uint8_t v___x_3943_; lean_object* v___x_3944_; 
v___x_3935_ = l_Lean_Environment_header(v___x_3924_);
v_modules_3936_ = lean_ctor_get(v___x_3935_, 3);
lean_inc_ref(v_modules_3936_);
lean_dec_ref(v___x_3935_);
v___x_3937_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_3938_ = lean_array_uget_borrowed(v_as_3926_, v_i_3928_);
v___x_3939_ = lean_array_get(v___x_3937_, v_modules_3936_, v_a_3938_);
lean_dec_ref(v_modules_3936_);
v_toImport_3940_ = lean_ctor_get(v___x_3939_, 0);
lean_inc_ref(v_toImport_3940_);
lean_dec(v___x_3939_);
v_module_3941_ = lean_ctor_get(v_toImport_3940_, 0);
lean_inc(v_module_3941_);
lean_dec_ref(v_toImport_3940_);
v___x_3942_ = lean_box(0);
v___x_3943_ = 0;
lean_inc(v_declName_3925_);
v___x_3944_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(v_module_3941_, v___x_3943_, v_declName_3925_, v___y_3930_, v___y_3931_);
if (lean_obj_tag(v___x_3944_) == 0)
{
size_t v___x_3945_; size_t v___x_3946_; 
lean_dec_ref_known(v___x_3944_, 1);
v___x_3945_ = ((size_t)1ULL);
v___x_3946_ = lean_usize_add(v_i_3928_, v___x_3945_);
v_i_3928_ = v___x_3946_;
v_b_3929_ = v___x_3942_;
goto _start;
}
else
{
lean_dec(v_declName_3925_);
return v___x_3944_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1___boxed(lean_object* v___x_3948_, lean_object* v_declName_3949_, lean_object* v_as_3950_, lean_object* v_sz_3951_, lean_object* v_i_3952_, lean_object* v_b_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_){
_start:
{
size_t v_sz_boxed_3957_; size_t v_i_boxed_3958_; lean_object* v_res_3959_; 
v_sz_boxed_3957_ = lean_unbox_usize(v_sz_3951_);
lean_dec(v_sz_3951_);
v_i_boxed_3958_ = lean_unbox_usize(v_i_3952_);
lean_dec(v_i_3952_);
v_res_3959_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1(v___x_3948_, v_declName_3949_, v_as_3950_, v_sz_boxed_3957_, v_i_boxed_3958_, v_b_3953_, v___y_3954_, v___y_3955_);
lean_dec(v___y_3955_);
lean_dec_ref(v___y_3954_);
lean_dec_ref(v_as_3950_);
lean_dec_ref(v___x_3948_);
return v_res_3959_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0(lean_object* v_declName_3960_, uint8_t v_isMeta_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_){
_start:
{
lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v_env_3970_; lean_object* v___y_3972_; lean_object* v___x_3985_; 
v___x_3965_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__0);
v___x_3966_ = lean_st_ref_get(v___y_3963_);
v_env_3970_ = lean_ctor_get(v___x_3966_, 0);
lean_inc_ref(v_env_3970_);
lean_dec(v___x_3966_);
v___x_3985_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3970_, v_declName_3960_);
if (lean_obj_tag(v___x_3985_) == 0)
{
lean_dec_ref(v_env_3970_);
lean_dec(v_declName_3960_);
goto v___jp_3967_;
}
else
{
lean_object* v_val_3986_; lean_object* v___x_3987_; lean_object* v_modules_3988_; lean_object* v___x_3989_; uint8_t v___x_3990_; 
v_val_3986_ = lean_ctor_get(v___x_3985_, 0);
lean_inc(v_val_3986_);
lean_dec_ref_known(v___x_3985_, 1);
v___x_3987_ = l_Lean_Environment_header(v_env_3970_);
v_modules_3988_ = lean_ctor_get(v___x_3987_, 3);
lean_inc_ref(v_modules_3988_);
lean_dec_ref(v___x_3987_);
v___x_3989_ = lean_array_get_size(v_modules_3988_);
v___x_3990_ = lean_nat_dec_lt(v_val_3986_, v___x_3989_);
if (v___x_3990_ == 0)
{
lean_dec_ref(v_modules_3988_);
lean_dec(v_val_3986_);
lean_dec_ref(v_env_3970_);
lean_dec(v_declName_3960_);
goto v___jp_3967_;
}
else
{
lean_object* v___x_3991_; lean_object* v___x_3992_; uint8_t v___y_3994_; 
v___x_3991_ = lean_array_fget(v_modules_3988_, v_val_3986_);
lean_dec(v_val_3986_);
lean_dec_ref(v_modules_3988_);
v___x_3992_ = lean_st_ref_get(v___y_3963_);
if (v_isMeta_3961_ == 0)
{
lean_dec(v___x_3992_);
v___y_3994_ = v_isMeta_3961_;
goto v___jp_3993_;
}
else
{
lean_object* v_env_4005_; uint8_t v___x_4006_; 
v_env_4005_ = lean_ctor_get(v___x_3992_, 0);
lean_inc_ref(v_env_4005_);
lean_dec(v___x_3992_);
lean_inc(v_declName_3960_);
v___x_4006_ = l_Lean_isMarkedMeta(v_env_4005_, v_declName_3960_);
if (v___x_4006_ == 0)
{
v___y_3994_ = v_isMeta_3961_;
goto v___jp_3993_;
}
else
{
uint8_t v___x_4007_; 
v___x_4007_ = 0;
v___y_3994_ = v___x_4007_;
goto v___jp_3993_;
}
}
v___jp_3993_:
{
lean_object* v_toImport_3995_; lean_object* v_module_3996_; lean_object* v___x_3997_; 
v_toImport_3995_ = lean_ctor_get(v___x_3991_, 0);
lean_inc_ref(v_toImport_3995_);
lean_dec(v___x_3991_);
v_module_3996_ = lean_ctor_get(v_toImport_3995_, 0);
lean_inc(v_module_3996_);
lean_dec_ref(v_toImport_3995_);
lean_inc(v_declName_3960_);
v___x_3997_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__0(v_module_3996_, v___y_3994_, v_declName_3960_, v___y_3962_, v___y_3963_);
if (lean_obj_tag(v___x_3997_) == 0)
{
lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; 
lean_dec_ref_known(v___x_3997_, 1);
v___x_3998_ = l_Lean_indirectModUseExt;
v___x_3999_ = lean_box(1);
v___x_4000_ = lean_box(0);
lean_inc_ref(v_env_3970_);
v___x_4001_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3965_, v___x_3998_, v_env_3970_, v___x_3999_, v___x_4000_);
v___x_4002_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(v___x_4001_, v_declName_3960_);
lean_dec(v___x_4001_);
if (lean_obj_tag(v___x_4002_) == 0)
{
lean_object* v___x_4003_; 
v___x_4003_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2___closed__1));
v___y_3972_ = v___x_4003_;
goto v___jp_3971_;
}
else
{
lean_object* v_val_4004_; 
v_val_4004_ = lean_ctor_get(v___x_4002_, 0);
lean_inc(v_val_4004_);
lean_dec_ref_known(v___x_4002_, 1);
v___y_3972_ = v_val_4004_;
goto v___jp_3971_;
}
}
else
{
lean_dec_ref(v_env_3970_);
lean_dec(v_declName_3960_);
return v___x_3997_;
}
}
}
}
v___jp_3967_:
{
lean_object* v___x_3968_; lean_object* v___x_3969_; 
v___x_3968_ = lean_box(0);
v___x_3969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3969_, 0, v___x_3968_);
return v___x_3969_;
}
v___jp_3971_:
{
lean_object* v___x_3973_; size_t v_sz_3974_; size_t v___x_3975_; lean_object* v___x_3976_; 
v___x_3973_ = lean_box(0);
v_sz_3974_ = lean_array_size(v___y_3972_);
v___x_3975_ = ((size_t)0ULL);
v___x_3976_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0_spec__1(v_env_3970_, v_declName_3960_, v___y_3972_, v_sz_3974_, v___x_3975_, v___x_3973_, v___y_3962_, v___y_3963_);
lean_dec_ref(v___y_3972_);
lean_dec_ref(v_env_3970_);
if (lean_obj_tag(v___x_3976_) == 0)
{
lean_object* v___x_3978_; uint8_t v_isShared_3979_; uint8_t v_isSharedCheck_3983_; 
v_isSharedCheck_3983_ = !lean_is_exclusive(v___x_3976_);
if (v_isSharedCheck_3983_ == 0)
{
lean_object* v_unused_3984_; 
v_unused_3984_ = lean_ctor_get(v___x_3976_, 0);
lean_dec(v_unused_3984_);
v___x_3978_ = v___x_3976_;
v_isShared_3979_ = v_isSharedCheck_3983_;
goto v_resetjp_3977_;
}
else
{
lean_dec(v___x_3976_);
v___x_3978_ = lean_box(0);
v_isShared_3979_ = v_isSharedCheck_3983_;
goto v_resetjp_3977_;
}
v_resetjp_3977_:
{
lean_object* v___x_3981_; 
if (v_isShared_3979_ == 0)
{
lean_ctor_set(v___x_3978_, 0, v___x_3973_);
v___x_3981_ = v___x_3978_;
goto v_reusejp_3980_;
}
else
{
lean_object* v_reuseFailAlloc_3982_; 
v_reuseFailAlloc_3982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3982_, 0, v___x_3973_);
v___x_3981_ = v_reuseFailAlloc_3982_;
goto v_reusejp_3980_;
}
v_reusejp_3980_:
{
return v___x_3981_;
}
}
}
else
{
return v___x_3976_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0___boxed(lean_object* v_declName_4008_, lean_object* v_isMeta_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_){
_start:
{
uint8_t v_isMeta_boxed_4013_; lean_object* v_res_4014_; 
v_isMeta_boxed_4013_ = lean_unbox(v_isMeta_4009_);
v_res_4014_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0(v_declName_4008_, v_isMeta_boxed_4013_, v___y_4010_, v___y_4011_);
lean_dec(v___y_4011_);
lean_dec_ref(v___y_4010_);
return v_res_4014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getExtension_x3f(lean_object* v_attrName_4015_, lean_object* v_a_4016_, lean_object* v_a_4017_){
_start:
{
lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; 
v___x_4019_ = l_Lean_Meta_Grind_extensionMapRef;
v___x_4020_ = lean_st_ref_get(v___x_4019_);
v___x_4021_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr_spec__2_spec__5___redArg(v___x_4020_, v_attrName_4015_);
lean_dec(v___x_4020_);
if (lean_obj_tag(v___x_4021_) == 1)
{
lean_object* v_val_4022_; lean_object* v_ext_4023_; lean_object* v_name_4024_; uint8_t v___x_4025_; lean_object* v___x_4026_; 
v_val_4022_ = lean_ctor_get(v___x_4021_, 0);
v_ext_4023_ = lean_ctor_get(v_val_4022_, 1);
v_name_4024_ = lean_ctor_get(v_ext_4023_, 1);
v___x_4025_ = 1;
lean_inc(v_name_4024_);
v___x_4026_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Grind_getExtension_x3f_spec__0(v_name_4024_, v___x_4025_, v_a_4016_, v_a_4017_);
if (lean_obj_tag(v___x_4026_) == 0)
{
lean_object* v___x_4028_; uint8_t v_isShared_4029_; uint8_t v_isSharedCheck_4033_; 
v_isSharedCheck_4033_ = !lean_is_exclusive(v___x_4026_);
if (v_isSharedCheck_4033_ == 0)
{
lean_object* v_unused_4034_; 
v_unused_4034_ = lean_ctor_get(v___x_4026_, 0);
lean_dec(v_unused_4034_);
v___x_4028_ = v___x_4026_;
v_isShared_4029_ = v_isSharedCheck_4033_;
goto v_resetjp_4027_;
}
else
{
lean_dec(v___x_4026_);
v___x_4028_ = lean_box(0);
v_isShared_4029_ = v_isSharedCheck_4033_;
goto v_resetjp_4027_;
}
v_resetjp_4027_:
{
lean_object* v___x_4031_; 
if (v_isShared_4029_ == 0)
{
lean_ctor_set(v___x_4028_, 0, v___x_4021_);
v___x_4031_ = v___x_4028_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v___x_4021_);
v___x_4031_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
return v___x_4031_;
}
}
}
else
{
lean_object* v_a_4035_; lean_object* v___x_4037_; uint8_t v_isShared_4038_; uint8_t v_isSharedCheck_4042_; 
lean_dec_ref_known(v___x_4021_, 1);
v_a_4035_ = lean_ctor_get(v___x_4026_, 0);
v_isSharedCheck_4042_ = !lean_is_exclusive(v___x_4026_);
if (v_isSharedCheck_4042_ == 0)
{
v___x_4037_ = v___x_4026_;
v_isShared_4038_ = v_isSharedCheck_4042_;
goto v_resetjp_4036_;
}
else
{
lean_inc(v_a_4035_);
lean_dec(v___x_4026_);
v___x_4037_ = lean_box(0);
v_isShared_4038_ = v_isSharedCheck_4042_;
goto v_resetjp_4036_;
}
v_resetjp_4036_:
{
lean_object* v___x_4040_; 
if (v_isShared_4038_ == 0)
{
v___x_4040_ = v___x_4037_;
goto v_reusejp_4039_;
}
else
{
lean_object* v_reuseFailAlloc_4041_; 
v_reuseFailAlloc_4041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4041_, 0, v_a_4035_);
v___x_4040_ = v_reuseFailAlloc_4041_;
goto v_reusejp_4039_;
}
v_reusejp_4039_:
{
return v___x_4040_;
}
}
}
}
else
{
lean_object* v___x_4043_; 
v___x_4043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4043_, 0, v___x_4021_);
return v___x_4043_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getExtension_x3f___boxed(lean_object* v_attrName_4044_, lean_object* v_a_4045_, lean_object* v_a_4046_, lean_object* v_a_4047_){
_start:
{
lean_object* v_res_4048_; 
v_res_4048_ = l_Lean_Meta_Grind_getExtension_x3f(v_attrName_4044_, v_a_4045_, v_a_4046_);
lean_dec(v_a_4046_);
lean_dec_ref(v_a_4045_);
lean_dec(v_attrName_4044_);
return v_res_4048_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_registerAttr___auto__1(void){
_start:
{
lean_object* v___x_4049_; 
v___x_4049_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25, &l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25_once, _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1___closed__25);
return v___x_4049_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_4050_, lean_object* v_x_4051_){
_start:
{
if (lean_obj_tag(v_x_4051_) == 0)
{
return v_x_4050_;
}
else
{
lean_object* v_key_4052_; lean_object* v_value_4053_; lean_object* v_tail_4054_; lean_object* v___x_4056_; uint8_t v_isShared_4057_; uint8_t v_isSharedCheck_4080_; 
v_key_4052_ = lean_ctor_get(v_x_4051_, 0);
v_value_4053_ = lean_ctor_get(v_x_4051_, 1);
v_tail_4054_ = lean_ctor_get(v_x_4051_, 2);
v_isSharedCheck_4080_ = !lean_is_exclusive(v_x_4051_);
if (v_isSharedCheck_4080_ == 0)
{
v___x_4056_ = v_x_4051_;
v_isShared_4057_ = v_isSharedCheck_4080_;
goto v_resetjp_4055_;
}
else
{
lean_inc(v_tail_4054_);
lean_inc(v_value_4053_);
lean_inc(v_key_4052_);
lean_dec(v_x_4051_);
v___x_4056_ = lean_box(0);
v_isShared_4057_ = v_isSharedCheck_4080_;
goto v_resetjp_4055_;
}
v_resetjp_4055_:
{
lean_object* v___x_4058_; uint64_t v___y_4060_; 
v___x_4058_ = lean_array_get_size(v_x_4050_);
if (lean_obj_tag(v_key_4052_) == 0)
{
uint64_t v___x_4078_; 
v___x_4078_ = 1723ULL;
v___y_4060_ = v___x_4078_;
goto v___jp_4059_;
}
else
{
uint64_t v_hash_4079_; 
v_hash_4079_ = lean_ctor_get_uint64(v_key_4052_, sizeof(void*)*2);
v___y_4060_ = v_hash_4079_;
goto v___jp_4059_;
}
v___jp_4059_:
{
uint64_t v___x_4061_; uint64_t v___x_4062_; uint64_t v_fold_4063_; uint64_t v___x_4064_; uint64_t v___x_4065_; uint64_t v___x_4066_; size_t v___x_4067_; size_t v___x_4068_; size_t v___x_4069_; size_t v___x_4070_; size_t v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4074_; 
v___x_4061_ = 32ULL;
v___x_4062_ = lean_uint64_shift_right(v___y_4060_, v___x_4061_);
v_fold_4063_ = lean_uint64_xor(v___y_4060_, v___x_4062_);
v___x_4064_ = 16ULL;
v___x_4065_ = lean_uint64_shift_right(v_fold_4063_, v___x_4064_);
v___x_4066_ = lean_uint64_xor(v_fold_4063_, v___x_4065_);
v___x_4067_ = lean_uint64_to_usize(v___x_4066_);
v___x_4068_ = lean_usize_of_nat(v___x_4058_);
v___x_4069_ = ((size_t)1ULL);
v___x_4070_ = lean_usize_sub(v___x_4068_, v___x_4069_);
v___x_4071_ = lean_usize_land(v___x_4067_, v___x_4070_);
v___x_4072_ = lean_array_uget_borrowed(v_x_4050_, v___x_4071_);
lean_inc(v___x_4072_);
if (v_isShared_4057_ == 0)
{
lean_ctor_set(v___x_4056_, 2, v___x_4072_);
v___x_4074_ = v___x_4056_;
goto v_reusejp_4073_;
}
else
{
lean_object* v_reuseFailAlloc_4077_; 
v_reuseFailAlloc_4077_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4077_, 0, v_key_4052_);
lean_ctor_set(v_reuseFailAlloc_4077_, 1, v_value_4053_);
lean_ctor_set(v_reuseFailAlloc_4077_, 2, v___x_4072_);
v___x_4074_ = v_reuseFailAlloc_4077_;
goto v_reusejp_4073_;
}
v_reusejp_4073_:
{
lean_object* v___x_4075_; 
v___x_4075_ = lean_array_uset(v_x_4050_, v___x_4071_, v___x_4074_);
v_x_4050_ = v___x_4075_;
v_x_4051_ = v_tail_4054_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2___redArg(lean_object* v_i_4081_, lean_object* v_source_4082_, lean_object* v_target_4083_){
_start:
{
lean_object* v___x_4084_; uint8_t v___x_4085_; 
v___x_4084_ = lean_array_get_size(v_source_4082_);
v___x_4085_ = lean_nat_dec_lt(v_i_4081_, v___x_4084_);
if (v___x_4085_ == 0)
{
lean_dec_ref(v_source_4082_);
lean_dec(v_i_4081_);
return v_target_4083_;
}
else
{
lean_object* v_es_4086_; lean_object* v___x_4087_; lean_object* v_source_4088_; lean_object* v_target_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; 
v_es_4086_ = lean_array_fget(v_source_4082_, v_i_4081_);
v___x_4087_ = lean_box(0);
v_source_4088_ = lean_array_fset(v_source_4082_, v_i_4081_, v___x_4087_);
v_target_4089_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3___redArg(v_target_4083_, v_es_4086_);
v___x_4090_ = lean_unsigned_to_nat(1u);
v___x_4091_ = lean_nat_add(v_i_4081_, v___x_4090_);
lean_dec(v_i_4081_);
v_i_4081_ = v___x_4091_;
v_source_4082_ = v_source_4088_;
v_target_4083_ = v_target_4089_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1___redArg(lean_object* v_data_4093_){
_start:
{
lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v_nbuckets_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; 
v___x_4094_ = lean_array_get_size(v_data_4093_);
v___x_4095_ = lean_unsigned_to_nat(2u);
v_nbuckets_4096_ = lean_nat_mul(v___x_4094_, v___x_4095_);
v___x_4097_ = lean_unsigned_to_nat(0u);
v___x_4098_ = lean_box(0);
v___x_4099_ = lean_mk_array(v_nbuckets_4096_, v___x_4098_);
v___x_4100_ = lean_array_propagate_mark(v_data_4093_, v___x_4099_);
v___x_4101_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2___redArg(v___x_4097_, v_data_4093_, v___x_4100_);
return v___x_4101_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(lean_object* v_a_4102_, lean_object* v_x_4103_){
_start:
{
if (lean_obj_tag(v_x_4103_) == 0)
{
uint8_t v___x_4104_; 
v___x_4104_ = 0;
return v___x_4104_;
}
else
{
lean_object* v_key_4105_; lean_object* v_tail_4106_; uint8_t v___x_4107_; 
v_key_4105_ = lean_ctor_get(v_x_4103_, 0);
v_tail_4106_ = lean_ctor_get(v_x_4103_, 2);
v___x_4107_ = lean_name_eq(v_key_4105_, v_a_4102_);
if (v___x_4107_ == 0)
{
v_x_4103_ = v_tail_4106_;
goto _start;
}
else
{
return v___x_4107_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg___boxed(lean_object* v_a_4109_, lean_object* v_x_4110_){
_start:
{
uint8_t v_res_4111_; lean_object* v_r_4112_; 
v_res_4111_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(v_a_4109_, v_x_4110_);
lean_dec(v_x_4110_);
lean_dec(v_a_4109_);
v_r_4112_ = lean_box(v_res_4111_);
return v_r_4112_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(lean_object* v_a_4113_, lean_object* v_b_4114_, lean_object* v_x_4115_){
_start:
{
if (lean_obj_tag(v_x_4115_) == 0)
{
lean_dec(v_b_4114_);
lean_dec(v_a_4113_);
return v_x_4115_;
}
else
{
lean_object* v_key_4116_; lean_object* v_value_4117_; lean_object* v_tail_4118_; lean_object* v___x_4120_; uint8_t v_isShared_4121_; uint8_t v_isSharedCheck_4130_; 
v_key_4116_ = lean_ctor_get(v_x_4115_, 0);
v_value_4117_ = lean_ctor_get(v_x_4115_, 1);
v_tail_4118_ = lean_ctor_get(v_x_4115_, 2);
v_isSharedCheck_4130_ = !lean_is_exclusive(v_x_4115_);
if (v_isSharedCheck_4130_ == 0)
{
v___x_4120_ = v_x_4115_;
v_isShared_4121_ = v_isSharedCheck_4130_;
goto v_resetjp_4119_;
}
else
{
lean_inc(v_tail_4118_);
lean_inc(v_value_4117_);
lean_inc(v_key_4116_);
lean_dec(v_x_4115_);
v___x_4120_ = lean_box(0);
v_isShared_4121_ = v_isSharedCheck_4130_;
goto v_resetjp_4119_;
}
v_resetjp_4119_:
{
uint8_t v___x_4122_; 
v___x_4122_ = lean_name_eq(v_key_4116_, v_a_4113_);
if (v___x_4122_ == 0)
{
lean_object* v___x_4123_; lean_object* v___x_4125_; 
v___x_4123_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(v_a_4113_, v_b_4114_, v_tail_4118_);
if (v_isShared_4121_ == 0)
{
lean_ctor_set(v___x_4120_, 2, v___x_4123_);
v___x_4125_ = v___x_4120_;
goto v_reusejp_4124_;
}
else
{
lean_object* v_reuseFailAlloc_4126_; 
v_reuseFailAlloc_4126_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4126_, 0, v_key_4116_);
lean_ctor_set(v_reuseFailAlloc_4126_, 1, v_value_4117_);
lean_ctor_set(v_reuseFailAlloc_4126_, 2, v___x_4123_);
v___x_4125_ = v_reuseFailAlloc_4126_;
goto v_reusejp_4124_;
}
v_reusejp_4124_:
{
return v___x_4125_;
}
}
else
{
lean_object* v___x_4128_; 
lean_dec(v_value_4117_);
lean_dec(v_key_4116_);
if (v_isShared_4121_ == 0)
{
lean_ctor_set(v___x_4120_, 1, v_b_4114_);
lean_ctor_set(v___x_4120_, 0, v_a_4113_);
v___x_4128_ = v___x_4120_;
goto v_reusejp_4127_;
}
else
{
lean_object* v_reuseFailAlloc_4129_; 
v_reuseFailAlloc_4129_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4129_, 0, v_a_4113_);
lean_ctor_set(v_reuseFailAlloc_4129_, 1, v_b_4114_);
lean_ctor_set(v_reuseFailAlloc_4129_, 2, v_tail_4118_);
v___x_4128_ = v_reuseFailAlloc_4129_;
goto v_reusejp_4127_;
}
v_reusejp_4127_:
{
return v___x_4128_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0___redArg(lean_object* v_m_4131_, lean_object* v_a_4132_, lean_object* v_b_4133_){
_start:
{
lean_object* v_size_4134_; lean_object* v_buckets_4135_; lean_object* v___x_4137_; uint8_t v_isShared_4138_; uint8_t v_isSharedCheck_4181_; 
v_size_4134_ = lean_ctor_get(v_m_4131_, 0);
v_buckets_4135_ = lean_ctor_get(v_m_4131_, 1);
v_isSharedCheck_4181_ = !lean_is_exclusive(v_m_4131_);
if (v_isSharedCheck_4181_ == 0)
{
v___x_4137_ = v_m_4131_;
v_isShared_4138_ = v_isSharedCheck_4181_;
goto v_resetjp_4136_;
}
else
{
lean_inc(v_buckets_4135_);
lean_inc(v_size_4134_);
lean_dec(v_m_4131_);
v___x_4137_ = lean_box(0);
v_isShared_4138_ = v_isSharedCheck_4181_;
goto v_resetjp_4136_;
}
v_resetjp_4136_:
{
lean_object* v___x_4139_; uint64_t v___y_4141_; 
v___x_4139_ = lean_array_get_size(v_buckets_4135_);
if (lean_obj_tag(v_a_4132_) == 0)
{
uint64_t v___x_4179_; 
v___x_4179_ = 1723ULL;
v___y_4141_ = v___x_4179_;
goto v___jp_4140_;
}
else
{
uint64_t v_hash_4180_; 
v_hash_4180_ = lean_ctor_get_uint64(v_a_4132_, sizeof(void*)*2);
v___y_4141_ = v_hash_4180_;
goto v___jp_4140_;
}
v___jp_4140_:
{
uint64_t v___x_4142_; uint64_t v___x_4143_; uint64_t v_fold_4144_; uint64_t v___x_4145_; uint64_t v___x_4146_; uint64_t v___x_4147_; size_t v___x_4148_; size_t v___x_4149_; size_t v___x_4150_; size_t v___x_4151_; size_t v___x_4152_; lean_object* v_bkt_4153_; uint8_t v___x_4154_; 
v___x_4142_ = 32ULL;
v___x_4143_ = lean_uint64_shift_right(v___y_4141_, v___x_4142_);
v_fold_4144_ = lean_uint64_xor(v___y_4141_, v___x_4143_);
v___x_4145_ = 16ULL;
v___x_4146_ = lean_uint64_shift_right(v_fold_4144_, v___x_4145_);
v___x_4147_ = lean_uint64_xor(v_fold_4144_, v___x_4146_);
v___x_4148_ = lean_uint64_to_usize(v___x_4147_);
v___x_4149_ = lean_usize_of_nat(v___x_4139_);
v___x_4150_ = ((size_t)1ULL);
v___x_4151_ = lean_usize_sub(v___x_4149_, v___x_4150_);
v___x_4152_ = lean_usize_land(v___x_4148_, v___x_4151_);
v_bkt_4153_ = lean_array_uget_borrowed(v_buckets_4135_, v___x_4152_);
v___x_4154_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(v_a_4132_, v_bkt_4153_);
if (v___x_4154_ == 0)
{
lean_object* v___x_4155_; lean_object* v_size_x27_4156_; lean_object* v___x_4157_; lean_object* v_buckets_x27_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; uint8_t v___x_4164_; 
v___x_4155_ = lean_unsigned_to_nat(1u);
v_size_x27_4156_ = lean_nat_add(v_size_4134_, v___x_4155_);
lean_dec(v_size_4134_);
lean_inc(v_bkt_4153_);
v___x_4157_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4157_, 0, v_a_4132_);
lean_ctor_set(v___x_4157_, 1, v_b_4133_);
lean_ctor_set(v___x_4157_, 2, v_bkt_4153_);
v_buckets_x27_4158_ = lean_array_uset(v_buckets_4135_, v___x_4152_, v___x_4157_);
v___x_4159_ = lean_unsigned_to_nat(4u);
v___x_4160_ = lean_nat_mul(v_size_x27_4156_, v___x_4159_);
v___x_4161_ = lean_unsigned_to_nat(3u);
v___x_4162_ = lean_nat_div(v___x_4160_, v___x_4161_);
lean_dec(v___x_4160_);
v___x_4163_ = lean_array_get_size(v_buckets_x27_4158_);
v___x_4164_ = lean_nat_dec_le(v___x_4162_, v___x_4163_);
lean_dec(v___x_4162_);
if (v___x_4164_ == 0)
{
lean_object* v_val_4165_; lean_object* v___x_4167_; 
v_val_4165_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1___redArg(v_buckets_x27_4158_);
if (v_isShared_4138_ == 0)
{
lean_ctor_set(v___x_4137_, 1, v_val_4165_);
lean_ctor_set(v___x_4137_, 0, v_size_x27_4156_);
v___x_4167_ = v___x_4137_;
goto v_reusejp_4166_;
}
else
{
lean_object* v_reuseFailAlloc_4168_; 
v_reuseFailAlloc_4168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4168_, 0, v_size_x27_4156_);
lean_ctor_set(v_reuseFailAlloc_4168_, 1, v_val_4165_);
v___x_4167_ = v_reuseFailAlloc_4168_;
goto v_reusejp_4166_;
}
v_reusejp_4166_:
{
return v___x_4167_;
}
}
else
{
lean_object* v___x_4170_; 
if (v_isShared_4138_ == 0)
{
lean_ctor_set(v___x_4137_, 1, v_buckets_x27_4158_);
lean_ctor_set(v___x_4137_, 0, v_size_x27_4156_);
v___x_4170_ = v___x_4137_;
goto v_reusejp_4169_;
}
else
{
lean_object* v_reuseFailAlloc_4171_; 
v_reuseFailAlloc_4171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4171_, 0, v_size_x27_4156_);
lean_ctor_set(v_reuseFailAlloc_4171_, 1, v_buckets_x27_4158_);
v___x_4170_ = v_reuseFailAlloc_4171_;
goto v_reusejp_4169_;
}
v_reusejp_4169_:
{
return v___x_4170_;
}
}
}
else
{
lean_object* v___x_4172_; lean_object* v_buckets_x27_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4177_; 
lean_inc(v_bkt_4153_);
v___x_4172_ = lean_box(0);
v_buckets_x27_4173_ = lean_array_uset(v_buckets_4135_, v___x_4152_, v___x_4172_);
v___x_4174_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(v_a_4132_, v_b_4133_, v_bkt_4153_);
v___x_4175_ = lean_array_uset(v_buckets_x27_4173_, v___x_4152_, v___x_4174_);
if (v_isShared_4138_ == 0)
{
lean_ctor_set(v___x_4137_, 1, v___x_4175_);
v___x_4177_ = v___x_4137_;
goto v_reusejp_4176_;
}
else
{
lean_object* v_reuseFailAlloc_4178_; 
v_reuseFailAlloc_4178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4178_, 0, v_size_4134_);
lean_ctor_set(v_reuseFailAlloc_4178_, 1, v___x_4175_);
v___x_4177_ = v_reuseFailAlloc_4178_;
goto v_reusejp_4176_;
}
v_reusejp_4176_:
{
return v___x_4177_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr(lean_object* v_attrName_4182_, lean_object* v_ref_4183_){
_start:
{
lean_object* v___x_4185_; 
lean_inc(v_ref_4183_);
v___x_4185_ = l_Lean_Meta_Grind_mkExtension(v_ref_4183_);
if (lean_obj_tag(v___x_4185_) == 0)
{
lean_object* v_a_4186_; uint8_t v___x_4187_; uint8_t v___x_4188_; lean_object* v___x_4189_; 
v_a_4186_ = lean_ctor_get(v___x_4185_, 0);
lean_inc_n(v_a_4186_, 2);
lean_dec_ref_known(v___x_4185_, 1);
v___x_4187_ = 0;
v___x_4188_ = 1;
lean_inc(v_ref_4183_);
lean_inc(v_attrName_4182_);
v___x_4189_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_4182_, v___x_4187_, v___x_4188_, v_a_4186_, v_ref_4183_);
if (lean_obj_tag(v___x_4189_) == 0)
{
lean_object* v___x_4190_; 
lean_dec_ref_known(v___x_4189_, 1);
lean_inc(v_ref_4183_);
lean_inc(v_a_4186_);
lean_inc(v_attrName_4182_);
v___x_4190_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_4182_, v___x_4187_, v___x_4187_, v_a_4186_, v_ref_4183_);
if (lean_obj_tag(v___x_4190_) == 0)
{
lean_object* v___x_4191_; 
lean_dec_ref_known(v___x_4190_, 1);
lean_inc(v_ref_4183_);
lean_inc(v_a_4186_);
lean_inc(v_attrName_4182_);
v___x_4191_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_4182_, v___x_4188_, v___x_4188_, v_a_4186_, v_ref_4183_);
if (lean_obj_tag(v___x_4191_) == 0)
{
lean_object* v___x_4192_; 
lean_dec_ref_known(v___x_4191_, 1);
lean_inc(v_a_4186_);
lean_inc(v_attrName_4182_);
v___x_4192_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr(v_attrName_4182_, v___x_4188_, v___x_4187_, v_a_4186_, v_ref_4183_);
if (lean_obj_tag(v___x_4192_) == 0)
{
lean_object* v___x_4194_; uint8_t v_isShared_4195_; uint8_t v_isSharedCheck_4203_; 
v_isSharedCheck_4203_ = !lean_is_exclusive(v___x_4192_);
if (v_isSharedCheck_4203_ == 0)
{
lean_object* v_unused_4204_; 
v_unused_4204_ = lean_ctor_get(v___x_4192_, 0);
lean_dec(v_unused_4204_);
v___x_4194_ = v___x_4192_;
v_isShared_4195_ = v_isSharedCheck_4203_;
goto v_resetjp_4193_;
}
else
{
lean_dec(v___x_4192_);
v___x_4194_ = lean_box(0);
v_isShared_4195_ = v_isSharedCheck_4203_;
goto v_resetjp_4193_;
}
v_resetjp_4193_:
{
lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4201_; 
v___x_4196_ = l_Lean_Meta_Grind_extensionMapRef;
v___x_4197_ = lean_st_ref_take(v___x_4196_);
lean_inc(v_a_4186_);
v___x_4198_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0___redArg(v___x_4197_, v_attrName_4182_, v_a_4186_);
v___x_4199_ = lean_st_ref_put(v___x_4196_, v___x_4198_);
if (v_isShared_4195_ == 0)
{
lean_ctor_set(v___x_4194_, 0, v_a_4186_);
v___x_4201_ = v___x_4194_;
goto v_reusejp_4200_;
}
else
{
lean_object* v_reuseFailAlloc_4202_; 
v_reuseFailAlloc_4202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4202_, 0, v_a_4186_);
v___x_4201_ = v_reuseFailAlloc_4202_;
goto v_reusejp_4200_;
}
v_reusejp_4200_:
{
return v___x_4201_;
}
}
}
else
{
lean_object* v_a_4205_; lean_object* v___x_4207_; uint8_t v_isShared_4208_; uint8_t v_isSharedCheck_4212_; 
lean_dec(v_a_4186_);
lean_dec(v_attrName_4182_);
v_a_4205_ = lean_ctor_get(v___x_4192_, 0);
v_isSharedCheck_4212_ = !lean_is_exclusive(v___x_4192_);
if (v_isSharedCheck_4212_ == 0)
{
v___x_4207_ = v___x_4192_;
v_isShared_4208_ = v_isSharedCheck_4212_;
goto v_resetjp_4206_;
}
else
{
lean_inc(v_a_4205_);
lean_dec(v___x_4192_);
v___x_4207_ = lean_box(0);
v_isShared_4208_ = v_isSharedCheck_4212_;
goto v_resetjp_4206_;
}
v_resetjp_4206_:
{
lean_object* v___x_4210_; 
if (v_isShared_4208_ == 0)
{
v___x_4210_ = v___x_4207_;
goto v_reusejp_4209_;
}
else
{
lean_object* v_reuseFailAlloc_4211_; 
v_reuseFailAlloc_4211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4211_, 0, v_a_4205_);
v___x_4210_ = v_reuseFailAlloc_4211_;
goto v_reusejp_4209_;
}
v_reusejp_4209_:
{
return v___x_4210_;
}
}
}
}
else
{
lean_object* v_a_4213_; lean_object* v___x_4215_; uint8_t v_isShared_4216_; uint8_t v_isSharedCheck_4220_; 
lean_dec(v_a_4186_);
lean_dec(v_ref_4183_);
lean_dec(v_attrName_4182_);
v_a_4213_ = lean_ctor_get(v___x_4191_, 0);
v_isSharedCheck_4220_ = !lean_is_exclusive(v___x_4191_);
if (v_isSharedCheck_4220_ == 0)
{
v___x_4215_ = v___x_4191_;
v_isShared_4216_ = v_isSharedCheck_4220_;
goto v_resetjp_4214_;
}
else
{
lean_inc(v_a_4213_);
lean_dec(v___x_4191_);
v___x_4215_ = lean_box(0);
v_isShared_4216_ = v_isSharedCheck_4220_;
goto v_resetjp_4214_;
}
v_resetjp_4214_:
{
lean_object* v___x_4218_; 
if (v_isShared_4216_ == 0)
{
v___x_4218_ = v___x_4215_;
goto v_reusejp_4217_;
}
else
{
lean_object* v_reuseFailAlloc_4219_; 
v_reuseFailAlloc_4219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4219_, 0, v_a_4213_);
v___x_4218_ = v_reuseFailAlloc_4219_;
goto v_reusejp_4217_;
}
v_reusejp_4217_:
{
return v___x_4218_;
}
}
}
}
else
{
lean_object* v_a_4221_; lean_object* v___x_4223_; uint8_t v_isShared_4224_; uint8_t v_isSharedCheck_4228_; 
lean_dec(v_a_4186_);
lean_dec(v_ref_4183_);
lean_dec(v_attrName_4182_);
v_a_4221_ = lean_ctor_get(v___x_4190_, 0);
v_isSharedCheck_4228_ = !lean_is_exclusive(v___x_4190_);
if (v_isSharedCheck_4228_ == 0)
{
v___x_4223_ = v___x_4190_;
v_isShared_4224_ = v_isSharedCheck_4228_;
goto v_resetjp_4222_;
}
else
{
lean_inc(v_a_4221_);
lean_dec(v___x_4190_);
v___x_4223_ = lean_box(0);
v_isShared_4224_ = v_isSharedCheck_4228_;
goto v_resetjp_4222_;
}
v_resetjp_4222_:
{
lean_object* v___x_4226_; 
if (v_isShared_4224_ == 0)
{
v___x_4226_ = v___x_4223_;
goto v_reusejp_4225_;
}
else
{
lean_object* v_reuseFailAlloc_4227_; 
v_reuseFailAlloc_4227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4227_, 0, v_a_4221_);
v___x_4226_ = v_reuseFailAlloc_4227_;
goto v_reusejp_4225_;
}
v_reusejp_4225_:
{
return v___x_4226_;
}
}
}
}
else
{
lean_object* v_a_4229_; lean_object* v___x_4231_; uint8_t v_isShared_4232_; uint8_t v_isSharedCheck_4236_; 
lean_dec(v_a_4186_);
lean_dec(v_ref_4183_);
lean_dec(v_attrName_4182_);
v_a_4229_ = lean_ctor_get(v___x_4189_, 0);
v_isSharedCheck_4236_ = !lean_is_exclusive(v___x_4189_);
if (v_isSharedCheck_4236_ == 0)
{
v___x_4231_ = v___x_4189_;
v_isShared_4232_ = v_isSharedCheck_4236_;
goto v_resetjp_4230_;
}
else
{
lean_inc(v_a_4229_);
lean_dec(v___x_4189_);
v___x_4231_ = lean_box(0);
v_isShared_4232_ = v_isSharedCheck_4236_;
goto v_resetjp_4230_;
}
v_resetjp_4230_:
{
lean_object* v___x_4234_; 
if (v_isShared_4232_ == 0)
{
v___x_4234_ = v___x_4231_;
goto v_reusejp_4233_;
}
else
{
lean_object* v_reuseFailAlloc_4235_; 
v_reuseFailAlloc_4235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4235_, 0, v_a_4229_);
v___x_4234_ = v_reuseFailAlloc_4235_;
goto v_reusejp_4233_;
}
v_reusejp_4233_:
{
return v___x_4234_;
}
}
}
}
else
{
lean_dec(v_ref_4183_);
lean_dec(v_attrName_4182_);
return v___x_4185_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_registerAttr___boxed(lean_object* v_attrName_4237_, lean_object* v_ref_4238_, lean_object* v_a_4239_){
_start:
{
lean_object* v_res_4240_; 
v_res_4240_ = l_Lean_Meta_Grind_registerAttr(v_attrName_4237_, v_ref_4238_);
return v_res_4240_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0(lean_object* v_00_u03b2_4241_, lean_object* v_m_4242_, lean_object* v_a_4243_, lean_object* v_b_4244_){
_start:
{
lean_object* v___x_4245_; 
v___x_4245_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0___redArg(v_m_4242_, v_a_4243_, v_b_4244_);
return v___x_4245_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0(lean_object* v_00_u03b2_4246_, lean_object* v_a_4247_, lean_object* v_x_4248_){
_start:
{
uint8_t v___x_4249_; 
v___x_4249_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___redArg(v_a_4247_, v_x_4248_);
return v___x_4249_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4250_, lean_object* v_a_4251_, lean_object* v_x_4252_){
_start:
{
uint8_t v_res_4253_; lean_object* v_r_4254_; 
v_res_4253_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__0(v_00_u03b2_4250_, v_a_4251_, v_x_4252_);
lean_dec(v_x_4252_);
lean_dec(v_a_4251_);
v_r_4254_ = lean_box(v_res_4253_);
return v_r_4254_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1(lean_object* v_00_u03b2_4255_, lean_object* v_data_4256_){
_start:
{
lean_object* v___x_4257_; 
v___x_4257_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1___redArg(v_data_4256_);
return v___x_4257_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2(lean_object* v_00_u03b2_4258_, lean_object* v_a_4259_, lean_object* v_b_4260_, lean_object* v_x_4261_){
_start:
{
lean_object* v___x_4262_; 
v___x_4262_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__2___redArg(v_a_4259_, v_b_4260_, v_x_4261_);
return v___x_4262_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_4263_, lean_object* v_i_4264_, lean_object* v_source_4265_, lean_object* v_target_4266_){
_start:
{
lean_object* v___x_4267_; 
v___x_4267_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2___redArg(v_i_4264_, v_source_4265_, v_target_4266_);
return v___x_4267_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_4268_, lean_object* v_x_4269_, lean_object* v_x_4270_){
_start:
{
lean_object* v___x_4271_; 
v___x_4271_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_registerAttr_spec__0_spec__1_spec__2_spec__3___redArg(v_x_4269_, v_x_4270_);
return v___x_4271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; 
v___x_4278_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___lam__2___closed__9));
v___x_4279_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__0_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_));
v___x_4280_ = l_Lean_Meta_Grind_registerAttr(v___x_4278_, v___x_4279_);
return v___x_4280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2____boxed(lean_object* v_a_4281_){
_start:
{
lean_object* v_res_4282_; 
v_res_4282_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_();
return v_res_4282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; 
v___x_4293_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__1_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_));
v___x_4294_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn___closed__3_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_));
v___x_4295_ = l_Lean_Meta_Grind_registerAttr(v___x_4293_, v___x_4294_);
return v___x_4295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2____boxed(lean_object* v_a_4296_){
_start:
{
lean_object* v_res_4297_; 
v_res_4297_ = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_();
return v_res_4297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___redArg(lean_object* v_declName_4298_, lean_object* v_a_4299_){
_start:
{
lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v_env_4303_; lean_object* v___x_4304_; lean_object* v_ext_4305_; lean_object* v_toEnvExtension_4306_; lean_object* v_asyncMode_4307_; uint8_t v___x_4308_; lean_object* v___x_4309_; lean_object* v_casesTypes_4310_; uint8_t v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; 
v___x_4301_ = l_Lean_Meta_Grind_instInhabitedExtensionState_default;
v___x_4302_ = lean_st_ref_get(v_a_4299_);
v_env_4303_ = lean_ctor_get(v___x_4302_, 0);
lean_inc_ref(v_env_4303_);
lean_dec(v___x_4302_);
v___x_4304_ = l_Lean_Meta_Grind_grindExt;
v_ext_4305_ = lean_ctor_get(v___x_4304_, 1);
v_toEnvExtension_4306_ = lean_ctor_get(v_ext_4305_, 0);
v_asyncMode_4307_ = lean_ctor_get(v_toEnvExtension_4306_, 2);
v___x_4308_ = 0;
v___x_4309_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_4301_, v___x_4304_, v_env_4303_, v_asyncMode_4307_, v___x_4308_);
v_casesTypes_4310_ = lean_ctor_get(v___x_4309_, 0);
lean_inc_ref(v_casesTypes_4310_);
lean_dec(v___x_4309_);
v___x_4311_ = l_Lean_Meta_Grind_CasesTypes_isSplit(v_casesTypes_4310_, v_declName_4298_);
lean_dec_ref(v_casesTypes_4310_);
v___x_4312_ = lean_box(v___x_4311_);
v___x_4313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4313_, 0, v___x_4312_);
return v___x_4313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___redArg___boxed(lean_object* v_declName_4314_, lean_object* v_a_4315_, lean_object* v_a_4316_){
_start:
{
lean_object* v_res_4317_; 
v_res_4317_ = l_Lean_Meta_Grind_isGlobalSplit___redArg(v_declName_4314_, v_a_4315_);
lean_dec(v_a_4315_);
lean_dec(v_declName_4314_);
return v_res_4317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit(lean_object* v_declName_4318_, lean_object* v_a_4319_, lean_object* v_a_4320_){
_start:
{
lean_object* v___x_4322_; 
v___x_4322_ = l_Lean_Meta_Grind_isGlobalSplit___redArg(v_declName_4318_, v_a_4320_);
return v___x_4322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isGlobalSplit___boxed(lean_object* v_declName_4323_, lean_object* v_a_4324_, lean_object* v_a_4325_, lean_object* v_a_4326_){
_start:
{
lean_object* v_res_4327_; 
v_res_4327_ = l_Lean_Meta_Grind_isGlobalSplit(v_declName_4323_, v_a_4324_, v_a_4325_);
lean_dec(v_a_4325_);
lean_dec_ref(v_a_4324_);
lean_dec(v_declName_4323_);
return v_res_4327_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Injective(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_ExtAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Homo(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Attr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_ExtAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Homo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_2724751884____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_normExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_normExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_420965636____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_extensionMapRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_extensionMapRef);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_793357512____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_grindExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_grindExt);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_initFn_00___x40_Lean_Meta_Tactic_Grind_Attr_4077740362____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Grind_liaExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Grind_liaExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Attr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1 = _init_l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Grind_Attr_0__Lean_Meta_Grind_mkGrindAttr___auto__1);
l_Lean_Meta_Grind_registerAttr___auto__1 = _init_l_Lean_Meta_Grind_registerAttr___auto__1();
lean_mark_persistent(l_Lean_Meta_Grind_registerAttr___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Injective(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Cases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_ExtAttr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Attr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Homo(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Attr(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Attr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_ExtAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Homo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Attr(builtin);
}
#ifdef __cplusplus
}
#endif
