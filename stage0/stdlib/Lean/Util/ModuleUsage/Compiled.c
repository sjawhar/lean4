// Lean compiler output
// Module: Lean.Util.ModuleUsage.Compiled
// Imports: public import Lean.Util.ModuleUsage.Basic public import Lean.Compiler.LCNF.PhaseExt public import Lean.Compiler.IR.CompilerM import Lean.Util.FoldConsts public import Lean.Compiler.LCNF.SpecInfo public import Lean.Compiler.LCNF.ElimDeadBranches import Lean.Compiler.ImplementedByAttr import Lean.Compiler.ExportAttr import Lean.Compiler.NoncomputableAttr public import Lean.Compiler.InlineAttrs import Lean.Compiler.NeverExtractAttr import Lean.Compiler.InitAttr import Lean.Compiler.Specialize import Lean.Compiler.MetaAttr public import Lean.ReducibilityAttrs public import Lean.Meta.Instances import Lean.Class import Lean.Meta.Match.MatchPatternAttr public import Lean.Compiler.LCNF.MonoTypes public import Lean.Compiler.LCNF.ToImpureType public import Lean.Structure public import Lean.AuxRecursor public import Lean.Meta.Match.MatcherInfo import Lean.ProjFns import Lean.OriginalConstKind
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateNameCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_ModuleUsage_Enc_name(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_ModuleUsage_Enc_nat(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_ModuleUsage_Enc_nats(lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_name(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_ModuleUsage_Enc_bool(lean_object*, uint8_t);
lean_object* l_Lean_ModuleUsage_Enc_str(lean_object*, lean_object*);
uint64_t lean_uint8_to_uint64(uint8_t);
lean_object* l_Lean_ModuleUsage_Enc_u64(lean_object*, uint64_t);
uint64_t lean_uint16_to_uint64(uint16_t);
uint64_t lean_uint32_to_uint64(uint32_t);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_ModuleUsage_Enc_opt___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_reducibilityCoreExt;
lean_object* l_Lean_ModuleUsage_externEnc(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedNoConfusionInfo_default;
lean_object* l_Lean_Compiler_getSpecializationArgs_x3f(lean_object*, lean_object*);
lean_object* l_Lean_getOutParamPositions_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_noConfusionExt;
uint8_t l_Lean_Compiler_hasNospecializeAttribute(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_hasWeakSpecializeAttribute(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_getStructureInfo_x3f(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_ModuleUsage_Enc_names(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_auxRecExt;
uint8_t l_Lean_Meta_isMatcherLikeCore(lean_object*, lean_object*);
uint8_t l_Lean_TagDeclarationExtension_isTagged(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isSparseCasesOn(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getAuxParentProjectionInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_getOriginalConstKind_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_noncomputableExt;
lean_object* l_Lean_Compiler_getImplementedBy_x3f(lean_object*, lean_object*);
lean_object* l_Lean_getExternAttrData_x3f(lean_object*, lean_object*);
uint8_t l_Lean_isNoncomputable(lean_object*, lean_object*, lean_object*);
lean_object* lean_get_export_name_for(lean_object*, lean_object*);
lean_object* lean_get_init_fn_name_for(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_getInlineAttribute_x3f(lean_object*, lean_object*);
uint8_t l_Lean_hasNeverExtractAttribute(lean_object*, lean_object*);
uint8_t l_Lean_hasMatchPatternAttribute(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_usage_exprs_digest(uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_ModuleUsage_Enc_digest(lean_object*, lean_object*);
lean_object* l_Lean_mkPtrSet___redArg(lean_object*);
lean_object* l_Lean_Expr_FoldConstsImpl_fold___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_baseExt;
extern lean_object* l_Lean_Compiler_LCNF_monoExt;
extern lean_object* l_Lean_Compiler_LCNF_impureSigExt;
lean_object* l_Lean_PersistentHashMap_instInhabited___redArg();
extern lean_object* l_Lean_Compiler_LCNF_instInhabitedSpecState_default;
extern lean_object* l_Lean_instInhabitedExpr;
extern lean_object* l_Lean_Compiler_LCNF_specExtension;
extern lean_object* l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt;
extern lean_object* l_Lean_Compiler_LCNF_monoTypeExt;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findTrivialStructureInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findTrivialImpureStructureInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findImpureType_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findCtorLayout_x3f(lean_object*, lean_object*);
uint8_t l_Lean_isDeclMeta(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_balance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg();
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Lean_Meta_instanceExtension;
lean_object* l_Lean_IR_getDecls(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_u8(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_u8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_u64(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_u64___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_bool(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_bool___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_nat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_str(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_name(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_names(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_nats(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_nats___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_decl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_fvar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_ty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_opt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_opt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___lam__0(lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_ModuleUsage_CEnc_flushTys___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ModuleUsage_CEnc_flushTys___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_CEnc_flushTys___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_flushTys(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_levelEnc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_inlineEnc(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_inlineEnc___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_lit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_arg___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_arg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_arg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_args_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_args_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_args(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_args___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_args_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_args_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_ctorInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_ModuleUsage_LCNFEnc_levels_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_levels(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_letValue(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_letValue___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_param___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_param(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_param___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_params_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_params_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_params(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_params___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_params_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_params_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_code___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_funDecl(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_casesE(uint8_t, lean_object*, lean_object*);
static const lean_closure_object l_Lean_ModuleUsage_LCNFEnc_code___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_LCNFEnc_code___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_LCNFEnc_code___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_LCNFEnc_code___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_code(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_alt(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_casesE_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_casesE_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_funDecl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_casesE___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_alt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_code___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_signature(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_signature___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_decl___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_decl___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_ModuleUsage_LCNFEnc_decl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_LCNFEnc_decl___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_LCNFEnc_decl___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_LCNFEnc_decl___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_decl(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_decl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_irType___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_ModuleUsage_IREnc_irType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_IREnc_irType___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_IREnc_irType___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_IREnc_irType___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_irType(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_irType_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_irType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_var(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_jp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_arg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_args_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_args_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_args(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_args___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_ctorInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_expr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_param(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_params_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_params_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_params(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_params___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_body(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_alt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_body_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_body_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_decl___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_ModuleUsage_IREnc_decl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_IREnc_decl___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_IREnc_decl___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_IREnc_decl___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_decl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_specParamInfoEnc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_specParamInfoEnc___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_specEntryEnc_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_specEntryEnc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_specEntryEnc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_summaryEnc_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_summaryEnc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_ModuleUsage_summaryEnc_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_summaryEnc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_reducibilityEnc(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_reducibilityEnc___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrKindEnc(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrKindEnc___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_scopedEnc___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_scopedEnc(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_ModuleUsage_instanceEntryEnc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_Enc_name, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_instanceEntryEnc___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_instanceEntryEnc___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_instanceEntryEnc(lean_object*, lean_object*);
static const lean_array_object l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__3_spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__3(lean_object*, lean_object*);
static const lean_array_object l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__3___lam__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__3___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__2(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ModuleUsage_LocalCompiled_ofEnv___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_LocalCompiled_ofEnv___closed__0;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LocalCompiled_ofEnv(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_binderInfoEnc(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_binderInfoEnc___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__1___lam__1(lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__1___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_structureInfoEnc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_matcherInfoEnc___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_ModuleUsage_matcherInfoEnc_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_ModuleUsage_matcherInfoEnc_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__6(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__5___lam__0(lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__5___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_ModuleUsage_matcherInfoEnc_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_ModuleUsage_matcherInfoEnc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_matcherInfoEnc___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_matcherInfoEnc___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_matcherInfoEnc___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_matcherInfoEnc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_ModuleUsage_matcherInfoEnc_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_noConfusionEnc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_constantKindEnc(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_constantKindEnc___boxed(lean_object*, lean_object*);
lean_object* lean_get_structural_rec_arg_pos_of_env(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_getStructuralRecArgPosOfEnv_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_ModuleUsage_attrsEnc_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_ModuleUsage_attrsEnc_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_attrsEnc_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_instanceEntryEnc, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_attrsEnc_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_attrsEnc_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_attrsEnc_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_attrsEnc_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_ModuleUsage_attrsEnc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_attrsEnc___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_attrsEnc___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_attrsEnc___closed__0_value;
static const lean_closure_object l_Lean_ModuleUsage_attrsEnc___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_attrsEnc___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_attrsEnc___closed__1 = (const lean_object*)&l_Lean_ModuleUsage_attrsEnc___closed__1_value;
static const lean_closure_object l_Lean_ModuleUsage_attrsEnc___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_attrsEnc___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_attrsEnc___closed__2 = (const lean_object*)&l_Lean_ModuleUsage_attrsEnc___closed__2_value;
static const lean_closure_object l_Lean_ModuleUsage_attrsEnc___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_attrsEnc___lam__3, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_attrsEnc___closed__3 = (const lean_object*)&l_Lean_ModuleUsage_attrsEnc___closed__3_value;
static const lean_closure_object l_Lean_ModuleUsage_attrsEnc___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_attrsEnc___lam__5, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_attrsEnc___closed__4 = (const lean_object*)&l_Lean_ModuleUsage_attrsEnc___closed__4_value;
static const lean_closure_object l_Lean_ModuleUsage_attrsEnc___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_attrsEnc___lam__6, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_attrsEnc___closed__5 = (const lean_object*)&l_Lean_ModuleUsage_attrsEnc___closed__5_value;
static const lean_closure_object l_Lean_ModuleUsage_attrsEnc___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_attrsEnc___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_attrsEnc___closed__6 = (const lean_object*)&l_Lean_ModuleUsage_attrsEnc___closed__6_value;
static const lean_closure_object l_Lean_ModuleUsage_attrsEnc___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_structureInfoEnc, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_attrsEnc___closed__7 = (const lean_object*)&l_Lean_ModuleUsage_attrsEnc___closed__7_value;
static const lean_closure_object l_Lean_ModuleUsage_attrsEnc___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_matcherInfoEnc, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_attrsEnc___closed__8 = (const lean_object*)&l_Lean_ModuleUsage_attrsEnc___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_ModuleUsage_attrsEnc_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_ModuleUsage_attrsEnc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_trivialEnc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_ctorInfoEnc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_ctorFieldEnc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_ctorLayoutEnc_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_ctorLayoutEnc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_ctorLayoutEnc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_ModuleUsage_compiledNames_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_compiledNames_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_compiledNames_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_ModuleUsage_compiledNames___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_compiledNames___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_compiledNames___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_compiledNames___closed__0_value;
static const lean_closure_object l_Lean_ModuleUsage_compiledNames___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_compiledNames___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_compiledNames___closed__1 = (const lean_object*)&l_Lean_ModuleUsage_compiledNames___closed__1_value;
static const lean_closure_object l_Lean_ModuleUsage_compiledNames___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_compiledNames___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_compiledNames___closed__2 = (const lean_object*)&l_Lean_ModuleUsage_compiledNames___closed__2_value;
static const lean_closure_object l_Lean_ModuleUsage_compiledNames___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_compiledNames___lam__3___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_compiledNames___closed__3 = (const lean_object*)&l_Lean_ModuleUsage_compiledNames___closed__3_value;
static lean_once_cell_t l_Lean_ModuleUsage_compiledNames___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_compiledNames___closed__4;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_entriesEnc___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_ModuleUsage_entriesEnc___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_trivialEnc, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_entriesEnc___lam__1___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_entriesEnc___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_entriesEnc___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_entriesEnc_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_entriesEnc_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_ModuleUsage_entriesEnc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_LCNFEnc_decl___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_ModuleUsage_entriesEnc___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_entriesEnc___closed__0_value;
static const lean_closure_object l_Lean_ModuleUsage_entriesEnc___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_LCNFEnc_signature___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_ModuleUsage_entriesEnc___closed__1 = (const lean_object*)&l_Lean_ModuleUsage_entriesEnc___closed__1_value;
static const lean_closure_object l_Lean_ModuleUsage_entriesEnc___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_entriesEnc___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_entriesEnc___closed__2 = (const lean_object*)&l_Lean_ModuleUsage_entriesEnc___closed__2_value;
static const lean_closure_object l_Lean_ModuleUsage_entriesEnc___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_entriesEnc___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_entriesEnc___closed__3 = (const lean_object*)&l_Lean_ModuleUsage_entriesEnc___closed__3_value;
static const lean_closure_object l_Lean_ModuleUsage_entriesEnc___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_specEntryEnc, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_entriesEnc___closed__4 = (const lean_object*)&l_Lean_ModuleUsage_entriesEnc___closed__4_value;
static const lean_closure_object l_Lean_ModuleUsage_entriesEnc___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_summaryEnc, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_entriesEnc___closed__5 = (const lean_object*)&l_Lean_ModuleUsage_entriesEnc___closed__5_value;
static const lean_closure_object l_Lean_ModuleUsage_entriesEnc___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_ctorLayoutEnc, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_entriesEnc___closed__6 = (const lean_object*)&l_Lean_ModuleUsage_entriesEnc___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_entriesEnc(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_entriesEnc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledEnc(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledEnc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__1 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__2 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__2_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ToImpureType"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__3 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__3_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__4_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__4_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__2_value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__4_value_aux_2),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__3_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 65, 3, 39, 60, 110, 229)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__4 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__4_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "impureTrivialStructureInfoExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__5 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__5_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__6_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__6_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__2_value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__6_value_aux_2),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__5_value),LEAN_SCALAR_PTR_LITERAL(76, 7, 193, 40, 165, 245, 236, 32)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__6 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__6_value;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__7;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "impureTypeExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__8 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__8_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__9_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__9_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__2_value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__9_value_aux_2),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__8_value),LEAN_SCALAR_PTR_LITERAL(254, 106, 135, 136, 202, 63, 131, 67)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__9 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__9_value;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__10;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "monoTypeExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__11 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__11_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__12_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__12_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__2_value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__12_value_aux_2),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__11_value),LEAN_SCALAR_PTR_LITERAL(38, 30, 14, 157, 163, 232, 91, 18)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__12 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__12_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "ctorLayoutExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__13 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__13_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__14_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__14_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__2_value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__14_value_aux_2),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__13_value),LEAN_SCALAR_PTR_LITERAL(32, 145, 208, 75, 82, 186, 230, 35)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__14 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__14_value;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__15;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ModPkgExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__16 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__16_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__17_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__17_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__16_value),LEAN_SCALAR_PTR_LITERAL(79, 11, 37, 197, 239, 191, 218, 70)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__17 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__17_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "modPkgExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__18 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__18_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__19_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__18_value),LEAN_SCALAR_PTR_LITERAL(22, 142, 138, 225, 208, 77, 177, 146)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__19 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__19_value;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__20;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__21;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__22;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__23;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__24;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__25;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "impureSigExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__26 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__26_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__27_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__27_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__2_value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__27_value_aux_2),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__26_value),LEAN_SCALAR_PTR_LITERAL(245, 150, 154, 56, 193, 204, 147, 237)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__27 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__27_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "IR"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__28 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__28_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "declMapExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__29 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__29_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__30_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__28_value),LEAN_SCALAR_PTR_LITERAL(225, 220, 115, 150, 240, 139, 111, 12)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__30_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__29_value),LEAN_SCALAR_PTR_LITERAL(176, 236, 150, 45, 29, 146, 124, 106)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__30 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__30_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "specExtension"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__31 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__31_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__32_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__32_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__32_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__32_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__32_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__2_value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__32_value_aux_2),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__31_value),LEAN_SCALAR_PTR_LITERAL(4, 125, 66, 207, 170, 81, 149, 39)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__32 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__32_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "UnreachableBranches"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__33 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__33_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "functionSummariesExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__34 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__34_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__35_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__35_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__2_value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__35_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__35_value_aux_2),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__33_value),LEAN_SCALAR_PTR_LITERAL(198, 130, 135, 69, 155, 14, 96, 131)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__35_value_aux_3),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__34_value),LEAN_SCALAR_PTR_LITERAL(210, 217, 249, 17, 195, 152, 212, 89)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__35 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__35_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "MonoTypes"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__36 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__36_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__37_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__37_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__2_value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__37_value_aux_2),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__36_value),LEAN_SCALAR_PTR_LITERAL(50, 36, 215, 38, 223, 208, 157, 110)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__37 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__37_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "trivialStructureInfoExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__38 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__38_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__39_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__39_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__2_value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__39_value_aux_2),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__38_value),LEAN_SCALAR_PTR_LITERAL(157, 40, 226, 0, 189, 108, 142, 128)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__39 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__39_value;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__40;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__41;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__42;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__43;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__44;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__45;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "auxParentProjInfoExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__46 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__46_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__47_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__46_value),LEAN_SCALAR_PTR_LITERAL(4, 64, 229, 66, 82, 134, 114, 43)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__47 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__47_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__48 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__48_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Structural"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__49 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__49_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "eqnInfoExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__50 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__50_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__51_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__48_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__51_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__51_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__49_value),LEAN_SCALAR_PTR_LITERAL(14, 221, 148, 2, 30, 47, 242, 74)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__51_value_aux_2),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__50_value),LEAN_SCALAR_PTR_LITERAL(119, 216, 81, 142, 241, 75, 113, 77)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__51 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__51_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "OriginalConstKind"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__52 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__52_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__53_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__52_value),LEAN_SCALAR_PTR_LITERAL(122, 110, 116, 253, 83, 71, 84, 130)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__53 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__53_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "privateConstKindsExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__54 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__54_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__55_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__55_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__54_value),LEAN_SCALAR_PTR_LITERAL(70, 46, 157, 199, 225, 229, 2, 63)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__55 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__55_value;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__56_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__56;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "baseExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__57 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__57_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__58_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__58_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__2_value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__58_value_aux_2),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__57_value),LEAN_SCALAR_PTR_LITERAL(145, 223, 165, 126, 7, 177, 183, 38)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__58 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__58_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "monoExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__59 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__59_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__60_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__60_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__60_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__2_value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__60_value_aux_2),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__59_value),LEAN_SCALAR_PTR_LITERAL(161, 71, 195, 20, 53, 75, 103, 187)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__60 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__60_value;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__61;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__62;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__63;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__64_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__64;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__65_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__65;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "noConfusionExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__66 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__66_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__67_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__67_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__66_value),LEAN_SCALAR_PTR_LITERAL(42, 4, 193, 241, 26, 143, 160, 211)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__67 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__67_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__68 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__68_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "matcherLikeExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__69 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__69_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__70_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__70_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__68_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__70_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__69_value),LEAN_SCALAR_PTR_LITERAL(26, 239, 16, 207, 7, 86, 101, 26)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__70 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__70_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "auxRecExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__71 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__71_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__72_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__72_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__71_value),LEAN_SCALAR_PTR_LITERAL(105, 237, 166, 221, 148, 106, 49, 53)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__72 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__72_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "AuxRecursor"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__73 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__73_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__74_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__74_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__73_value),LEAN_SCALAR_PTR_LITERAL(151, 12, 196, 58, 208, 244, 216, 111)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__74 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__74_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "sparseCasesOnExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__75 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__75_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__76_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__76_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__75_value),LEAN_SCALAR_PTR_LITERAL(53, 89, 99, 195, 132, 85, 4, 247)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__76 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__76_value;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__77_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__77;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "projectionFnInfoExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__78 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__78_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__79_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__79_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__78_value),LEAN_SCALAR_PTR_LITERAL(16, 172, 107, 39, 139, 106, 85, 71)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__79 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__79_value;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__80_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__80;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__81_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__81;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__82_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__82;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__83_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__83;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__84_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__84;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "weakSpecializeAttr"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__85 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__85_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__86_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__86_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__86_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__86_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__85_value),LEAN_SCALAR_PTR_LITERAL(171, 136, 29, 200, 53, 12, 251, 84)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__86 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__86_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "MetaAttr"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__87 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__87_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__88_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__88_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__88_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__88_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__87_value),LEAN_SCALAR_PTR_LITERAL(83, 210, 19, 6, 251, 194, 211, 17)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__88 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__88_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "metaExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__89 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__89_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__90_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__90_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__89_value),LEAN_SCALAR_PTR_LITERAL(117, 225, 172, 50, 67, 4, 245, 255)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__90 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__90_value;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__91_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__91;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declMetaExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__92 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__92_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__93_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__93_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__92_value),LEAN_SCALAR_PTR_LITERAL(50, 54, 245, 242, 73, 115, 166, 103)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__93 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__93_value;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__94_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__94;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Structure"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__95 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__95_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__96_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__96_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__95_value),LEAN_SCALAR_PTR_LITERAL(106, 168, 68, 81, 167, 247, 228, 110)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__96 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__96_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "structureExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__97 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__97_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__98_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__98_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__97_value),LEAN_SCALAR_PTR_LITERAL(3, 21, 198, 17, 125, 140, 66, 229)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__98 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__98_value;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__99_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__99;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Match"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__100 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__100_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Extension"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__101 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__101_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "extension"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__102 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__102_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__103_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__103_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__103_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__68_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__103_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__103_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__100_value),LEAN_SCALAR_PTR_LITERAL(63, 134, 186, 123, 61, 240, 95, 75)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__103_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__103_value_aux_2),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__101_value),LEAN_SCALAR_PTR_LITERAL(109, 199, 90, 164, 66, 112, 193, 41)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__103_value_aux_3),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__102_value),LEAN_SCALAR_PTR_LITERAL(74, 71, 76, 183, 128, 212, 252, 252)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__103 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__103_value;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__104_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__104;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__105_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__105;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__106_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__106;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__107_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__107;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__108_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__108;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__109_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "reducibilityCore"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__109 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__109_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__110_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__109_value),LEAN_SCALAR_PTR_LITERAL(95, 201, 42, 208, 53, 44, 245, 169)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__110 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__110_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "instanceExtension"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__111 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__111_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__112_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__112_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__112_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__68_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__112_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__111_value),LEAN_SCALAR_PTR_LITERAL(75, 253, 187, 89, 234, 162, 232, 19)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__112 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__112_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__113_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "specializeAttr"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__113 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__113_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__114_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__114_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__114_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__114_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__114_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__113_value),LEAN_SCALAR_PTR_LITERAL(68, 4, 174, 8, 190, 202, 8, 76)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__114 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__114_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__115_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "classExtension"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__115 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__115_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__116_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__116_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__116_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__115_value),LEAN_SCALAR_PTR_LITERAL(152, 232, 231, 173, 36, 214, 193, 144)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__116 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__116_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "nospecializeAttr"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__117 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__117_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__118_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__118_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__118_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__118_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__118_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__117_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 232, 107, 183, 159, 132, 232)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__118 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__118_value;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__119_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__119;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__120_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__120;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__121_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__121;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__122_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__122;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__123_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__123;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__124_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "regularInitAttr"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__124 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__124_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__125_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__125_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__125_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__124_value),LEAN_SCALAR_PTR_LITERAL(60, 89, 197, 219, 99, 236, 71, 167)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__125 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__125_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__126_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "builtinInitAttr"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__126 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__126_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__127_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__127_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__127_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__126_value),LEAN_SCALAR_PTR_LITERAL(200, 96, 154, 23, 9, 6, 70, 39)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__127 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__127_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__128_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "inlineAttrs"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__128 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__128_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__129_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__129_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__129_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__129_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__129_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__128_value),LEAN_SCALAR_PTR_LITERAL(189, 28, 81, 152, 154, 211, 201, 50)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__129 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__129_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__130_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "neverExtractAttr"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__130 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__130_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__131_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__131_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__131_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__130_value),LEAN_SCALAR_PTR_LITERAL(35, 132, 46, 132, 107, 130, 7, 53)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__131 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__131_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__132_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "matchPatternAttr"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__132 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__132_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__133_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__133_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__133_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__132_value),LEAN_SCALAR_PTR_LITERAL(166, 107, 86, 222, 148, 250, 74, 48)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__133 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__133_value;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__134_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__134;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__135_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__135;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__136_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__136;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__137_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__137;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__138_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__138;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__139_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "implementedByAttr"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__139 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__139_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__140_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__140_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__140_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__1_value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__140_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__140_value_aux_1),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__139_value),LEAN_SCALAR_PTR_LITERAL(205, 128, 181, 108, 183, 236, 118, 225)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__140 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__140_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__141_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "externAttr"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__141 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__141_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__142_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__142_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__142_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__141_value),LEAN_SCALAR_PTR_LITERAL(90, 152, 26, 79, 119, 188, 216, 230)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__142 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__142_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__143_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "noncomputableExt"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__143 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__143_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__144_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__144_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__144_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__143_value),LEAN_SCALAR_PTR_LITERAL(159, 71, 152, 254, 79, 213, 51, 33)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__144 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__144_value;
static const lean_string_object l_Lean_ModuleUsage_digestedOwnTables___closed__145_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "exportAttr"};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__145 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__145_value;
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__146_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ModuleUsage_digestedOwnTables___closed__146_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__146_value_aux_0),((lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__145_value),LEAN_SCALAR_PTR_LITERAL(105, 101, 238, 215, 35, 66, 156, 98)}};
static const lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__146 = (const lean_object*)&l_Lean_ModuleUsage_digestedOwnTables___closed__146_value;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__147_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__147;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__148_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__148;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__149_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__149;
static lean_once_cell_t l_Lean_ModuleUsage_digestedOwnTables___closed__150_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ModuleUsage_digestedOwnTables___closed__150;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_digestedOwnTables;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_u8(lean_object* v_s_1_, uint8_t v_v_2_){
_start:
{
lean_object* v_e_3_; lean_object* v_tys_4_; lean_object* v_ms_5_; lean_object* v___x_7_; uint8_t v_isShared_8_; uint8_t v_isSharedCheck_13_; 
v_e_3_ = lean_ctor_get(v_s_1_, 0);
v_tys_4_ = lean_ctor_get(v_s_1_, 1);
v_ms_5_ = lean_ctor_get(v_s_1_, 2);
v_isSharedCheck_13_ = !lean_is_exclusive(v_s_1_);
if (v_isSharedCheck_13_ == 0)
{
v___x_7_ = v_s_1_;
v_isShared_8_ = v_isSharedCheck_13_;
goto v_resetjp_6_;
}
else
{
lean_inc(v_ms_5_);
lean_inc(v_tys_4_);
lean_inc(v_e_3_);
lean_dec(v_s_1_);
v___x_7_ = lean_box(0);
v_isShared_8_ = v_isSharedCheck_13_;
goto v_resetjp_6_;
}
v_resetjp_6_:
{
lean_object* v___x_9_; lean_object* v___x_11_; 
v___x_9_ = lean_byte_array_push(v_e_3_, v_v_2_);
if (v_isShared_8_ == 0)
{
lean_ctor_set(v___x_7_, 0, v___x_9_);
v___x_11_ = v___x_7_;
goto v_reusejp_10_;
}
else
{
lean_object* v_reuseFailAlloc_12_; 
v_reuseFailAlloc_12_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_12_, 0, v___x_9_);
lean_ctor_set(v_reuseFailAlloc_12_, 1, v_tys_4_);
lean_ctor_set(v_reuseFailAlloc_12_, 2, v_ms_5_);
v___x_11_ = v_reuseFailAlloc_12_;
goto v_reusejp_10_;
}
v_reusejp_10_:
{
return v___x_11_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_u8___boxed(lean_object* v_s_14_, lean_object* v_v_15_){
_start:
{
uint8_t v_v_boxed_16_; lean_object* v_res_17_; 
v_v_boxed_16_ = lean_unbox(v_v_15_);
v_res_17_ = l_Lean_ModuleUsage_CEnc_u8(v_s_14_, v_v_boxed_16_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_u64(lean_object* v_s_18_, uint64_t v_v_19_){
_start:
{
lean_object* v_e_20_; lean_object* v_tys_21_; lean_object* v_ms_22_; lean_object* v___x_24_; uint8_t v_isShared_25_; uint8_t v_isSharedCheck_30_; 
v_e_20_ = lean_ctor_get(v_s_18_, 0);
v_tys_21_ = lean_ctor_get(v_s_18_, 1);
v_ms_22_ = lean_ctor_get(v_s_18_, 2);
v_isSharedCheck_30_ = !lean_is_exclusive(v_s_18_);
if (v_isSharedCheck_30_ == 0)
{
v___x_24_ = v_s_18_;
v_isShared_25_ = v_isSharedCheck_30_;
goto v_resetjp_23_;
}
else
{
lean_inc(v_ms_22_);
lean_inc(v_tys_21_);
lean_inc(v_e_20_);
lean_dec(v_s_18_);
v___x_24_ = lean_box(0);
v_isShared_25_ = v_isSharedCheck_30_;
goto v_resetjp_23_;
}
v_resetjp_23_:
{
lean_object* v___x_26_; lean_object* v___x_28_; 
v___x_26_ = l_Lean_ModuleUsage_Enc_u64(v_e_20_, v_v_19_);
if (v_isShared_25_ == 0)
{
lean_ctor_set(v___x_24_, 0, v___x_26_);
v___x_28_ = v___x_24_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v___x_26_);
lean_ctor_set(v_reuseFailAlloc_29_, 1, v_tys_21_);
lean_ctor_set(v_reuseFailAlloc_29_, 2, v_ms_22_);
v___x_28_ = v_reuseFailAlloc_29_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
return v___x_28_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_u64___boxed(lean_object* v_s_31_, lean_object* v_v_32_){
_start:
{
uint64_t v_v_boxed_33_; lean_object* v_res_34_; 
v_v_boxed_33_ = lean_unbox_uint64(v_v_32_);
lean_dec_ref(v_v_32_);
v_res_34_ = l_Lean_ModuleUsage_CEnc_u64(v_s_31_, v_v_boxed_33_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_bool(lean_object* v_s_35_, uint8_t v_v_36_){
_start:
{
lean_object* v_e_37_; lean_object* v_tys_38_; lean_object* v_ms_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_47_; 
v_e_37_ = lean_ctor_get(v_s_35_, 0);
v_tys_38_ = lean_ctor_get(v_s_35_, 1);
v_ms_39_ = lean_ctor_get(v_s_35_, 2);
v_isSharedCheck_47_ = !lean_is_exclusive(v_s_35_);
if (v_isSharedCheck_47_ == 0)
{
v___x_41_ = v_s_35_;
v_isShared_42_ = v_isSharedCheck_47_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_ms_39_);
lean_inc(v_tys_38_);
lean_inc(v_e_37_);
lean_dec(v_s_35_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_47_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_43_; lean_object* v___x_45_; 
v___x_43_ = l_Lean_ModuleUsage_Enc_bool(v_e_37_, v_v_36_);
if (v_isShared_42_ == 0)
{
lean_ctor_set(v___x_41_, 0, v___x_43_);
v___x_45_ = v___x_41_;
goto v_reusejp_44_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v___x_43_);
lean_ctor_set(v_reuseFailAlloc_46_, 1, v_tys_38_);
lean_ctor_set(v_reuseFailAlloc_46_, 2, v_ms_39_);
v___x_45_ = v_reuseFailAlloc_46_;
goto v_reusejp_44_;
}
v_reusejp_44_:
{
return v___x_45_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_bool___boxed(lean_object* v_s_48_, lean_object* v_v_49_){
_start:
{
uint8_t v_v_boxed_50_; lean_object* v_res_51_; 
v_v_boxed_50_ = lean_unbox(v_v_49_);
v_res_51_ = l_Lean_ModuleUsage_CEnc_bool(v_s_48_, v_v_boxed_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_nat(lean_object* v_s_52_, lean_object* v_v_53_){
_start:
{
lean_object* v_e_54_; lean_object* v_tys_55_; lean_object* v_ms_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_64_; 
v_e_54_ = lean_ctor_get(v_s_52_, 0);
v_tys_55_ = lean_ctor_get(v_s_52_, 1);
v_ms_56_ = lean_ctor_get(v_s_52_, 2);
v_isSharedCheck_64_ = !lean_is_exclusive(v_s_52_);
if (v_isSharedCheck_64_ == 0)
{
v___x_58_ = v_s_52_;
v_isShared_59_ = v_isSharedCheck_64_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_ms_56_);
lean_inc(v_tys_55_);
lean_inc(v_e_54_);
lean_dec(v_s_52_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_64_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_60_; lean_object* v___x_62_; 
v___x_60_ = l_Lean_ModuleUsage_Enc_nat(v_e_54_, v_v_53_);
if (v_isShared_59_ == 0)
{
lean_ctor_set(v___x_58_, 0, v___x_60_);
v___x_62_ = v___x_58_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v___x_60_);
lean_ctor_set(v_reuseFailAlloc_63_, 1, v_tys_55_);
lean_ctor_set(v_reuseFailAlloc_63_, 2, v_ms_56_);
v___x_62_ = v_reuseFailAlloc_63_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
return v___x_62_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_str(lean_object* v_s_65_, lean_object* v_v_66_){
_start:
{
lean_object* v_e_67_; lean_object* v_tys_68_; lean_object* v_ms_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_77_; 
v_e_67_ = lean_ctor_get(v_s_65_, 0);
v_tys_68_ = lean_ctor_get(v_s_65_, 1);
v_ms_69_ = lean_ctor_get(v_s_65_, 2);
v_isSharedCheck_77_ = !lean_is_exclusive(v_s_65_);
if (v_isSharedCheck_77_ == 0)
{
v___x_71_ = v_s_65_;
v_isShared_72_ = v_isSharedCheck_77_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_ms_69_);
lean_inc(v_tys_68_);
lean_inc(v_e_67_);
lean_dec(v_s_65_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_77_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v___x_73_; lean_object* v___x_75_; 
v___x_73_ = l_Lean_ModuleUsage_Enc_str(v_e_67_, v_v_66_);
if (v_isShared_72_ == 0)
{
lean_ctor_set(v___x_71_, 0, v___x_73_);
v___x_75_ = v___x_71_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v___x_73_);
lean_ctor_set(v_reuseFailAlloc_76_, 1, v_tys_68_);
lean_ctor_set(v_reuseFailAlloc_76_, 2, v_ms_69_);
v___x_75_ = v_reuseFailAlloc_76_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
return v___x_75_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_name(lean_object* v_s_78_, lean_object* v_n_79_){
_start:
{
lean_object* v_e_80_; lean_object* v_tys_81_; lean_object* v_ms_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_90_; 
v_e_80_ = lean_ctor_get(v_s_78_, 0);
v_tys_81_ = lean_ctor_get(v_s_78_, 1);
v_ms_82_ = lean_ctor_get(v_s_78_, 2);
v_isSharedCheck_90_ = !lean_is_exclusive(v_s_78_);
if (v_isSharedCheck_90_ == 0)
{
v___x_84_ = v_s_78_;
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_ms_82_);
lean_inc(v_tys_81_);
lean_inc(v_e_80_);
lean_dec(v_s_78_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_86_; lean_object* v___x_88_; 
v___x_86_ = l_Lean_ModuleUsage_Enc_name(v_e_80_, v_n_79_);
if (v_isShared_85_ == 0)
{
lean_ctor_set(v___x_84_, 0, v___x_86_);
v___x_88_ = v___x_84_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v___x_86_);
lean_ctor_set(v_reuseFailAlloc_89_, 1, v_tys_81_);
lean_ctor_set(v_reuseFailAlloc_89_, 2, v_ms_82_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_names(lean_object* v_s_91_, lean_object* v_ns_92_){
_start:
{
lean_object* v_e_93_; lean_object* v_tys_94_; lean_object* v_ms_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_103_; 
v_e_93_ = lean_ctor_get(v_s_91_, 0);
v_tys_94_ = lean_ctor_get(v_s_91_, 1);
v_ms_95_ = lean_ctor_get(v_s_91_, 2);
v_isSharedCheck_103_ = !lean_is_exclusive(v_s_91_);
if (v_isSharedCheck_103_ == 0)
{
v___x_97_ = v_s_91_;
v_isShared_98_ = v_isSharedCheck_103_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_ms_95_);
lean_inc(v_tys_94_);
lean_inc(v_e_93_);
lean_dec(v_s_91_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_103_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_99_; lean_object* v___x_101_; 
v___x_99_ = l_Lean_ModuleUsage_Enc_names(v_e_93_, v_ns_92_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 0, v___x_99_);
v___x_101_ = v___x_97_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v___x_99_);
lean_ctor_set(v_reuseFailAlloc_102_, 1, v_tys_94_);
lean_ctor_set(v_reuseFailAlloc_102_, 2, v_ms_95_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_nats(lean_object* v_s_104_, lean_object* v_ns_105_){
_start:
{
lean_object* v_e_106_; lean_object* v_tys_107_; lean_object* v_ms_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_116_; 
v_e_106_ = lean_ctor_get(v_s_104_, 0);
v_tys_107_ = lean_ctor_get(v_s_104_, 1);
v_ms_108_ = lean_ctor_get(v_s_104_, 2);
v_isSharedCheck_116_ = !lean_is_exclusive(v_s_104_);
if (v_isSharedCheck_116_ == 0)
{
v___x_110_ = v_s_104_;
v_isShared_111_ = v_isSharedCheck_116_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_ms_108_);
lean_inc(v_tys_107_);
lean_inc(v_e_106_);
lean_dec(v_s_104_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_116_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_112_; lean_object* v___x_114_; 
v___x_112_ = l_Lean_ModuleUsage_Enc_nats(v_e_106_, v_ns_105_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 0, v___x_112_);
v___x_114_ = v___x_110_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v___x_112_);
lean_ctor_set(v_reuseFailAlloc_115_, 1, v_tys_107_);
lean_ctor_set(v_reuseFailAlloc_115_, 2, v_ms_108_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_nats___boxed(lean_object* v_s_117_, lean_object* v_ns_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Lean_ModuleUsage_CEnc_nats(v_s_117_, v_ns_118_);
lean_dec_ref(v_ns_118_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_decl(lean_object* v_s_120_, lean_object* v_n_121_){
_start:
{
lean_object* v_e_122_; lean_object* v_tys_123_; lean_object* v_ms_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_133_; 
v_e_122_ = lean_ctor_get(v_s_120_, 0);
v_tys_123_ = lean_ctor_get(v_s_120_, 1);
v_ms_124_ = lean_ctor_get(v_s_120_, 2);
v_isSharedCheck_133_ = !lean_is_exclusive(v_s_120_);
if (v_isSharedCheck_133_ == 0)
{
v___x_126_ = v_s_120_;
v_isShared_127_ = v_isSharedCheck_133_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_ms_124_);
lean_inc(v_tys_123_);
lean_inc(v_e_122_);
lean_dec(v_s_120_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_133_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_131_; 
lean_inc(v_n_121_);
v___x_128_ = l_Lean_ModuleUsage_Enc_name(v_e_122_, v_n_121_);
v___x_129_ = l_Lean_NameSet_insert(v_ms_124_, v_n_121_);
if (v_isShared_127_ == 0)
{
lean_ctor_set(v___x_126_, 2, v___x_129_);
lean_ctor_set(v___x_126_, 0, v___x_128_);
v___x_131_ = v___x_126_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_128_);
lean_ctor_set(v_reuseFailAlloc_132_, 1, v_tys_123_);
lean_ctor_set(v_reuseFailAlloc_132_, 2, v___x_129_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_fvar(lean_object* v_s_134_, lean_object* v_f_135_){
_start:
{
lean_object* v_e_136_; lean_object* v_tys_137_; lean_object* v_ms_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_146_; 
v_e_136_ = lean_ctor_get(v_s_134_, 0);
v_tys_137_ = lean_ctor_get(v_s_134_, 1);
v_ms_138_ = lean_ctor_get(v_s_134_, 2);
v_isSharedCheck_146_ = !lean_is_exclusive(v_s_134_);
if (v_isSharedCheck_146_ == 0)
{
v___x_140_ = v_s_134_;
v_isShared_141_ = v_isSharedCheck_146_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_ms_138_);
lean_inc(v_tys_137_);
lean_inc(v_e_136_);
lean_dec(v_s_134_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_146_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_142_; lean_object* v___x_144_; 
v___x_142_ = l_Lean_ModuleUsage_Enc_name(v_e_136_, v_f_135_);
if (v_isShared_141_ == 0)
{
lean_ctor_set(v___x_140_, 0, v___x_142_);
v___x_144_ = v___x_140_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v___x_142_);
lean_ctor_set(v_reuseFailAlloc_145_, 1, v_tys_137_);
lean_ctor_set(v_reuseFailAlloc_145_, 2, v_ms_138_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_ty(lean_object* v_s_147_, lean_object* v_t_148_){
_start:
{
lean_object* v_e_149_; lean_object* v_tys_150_; lean_object* v_ms_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_159_; 
v_e_149_ = lean_ctor_get(v_s_147_, 0);
v_tys_150_ = lean_ctor_get(v_s_147_, 1);
v_ms_151_ = lean_ctor_get(v_s_147_, 2);
v_isSharedCheck_159_ = !lean_is_exclusive(v_s_147_);
if (v_isSharedCheck_159_ == 0)
{
v___x_153_ = v_s_147_;
v_isShared_154_ = v_isSharedCheck_159_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_ms_151_);
lean_inc(v_tys_150_);
lean_inc(v_e_149_);
lean_dec(v_s_147_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_159_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_155_; lean_object* v___x_157_; 
v___x_155_ = lean_array_push(v_tys_150_, v_t_148_);
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 1, v___x_155_);
v___x_157_ = v___x_153_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_e_149_);
lean_ctor_set(v_reuseFailAlloc_158_, 1, v___x_155_);
lean_ctor_set(v_reuseFailAlloc_158_, 2, v_ms_151_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_opt___redArg(lean_object* v_s_160_, lean_object* v_o_161_, lean_object* v_f_162_){
_start:
{
if (lean_obj_tag(v_o_161_) == 0)
{
lean_object* v_e_163_; lean_object* v_tys_164_; lean_object* v_ms_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_174_; 
lean_dec_ref(v_f_162_);
v_e_163_ = lean_ctor_get(v_s_160_, 0);
v_tys_164_ = lean_ctor_get(v_s_160_, 1);
v_ms_165_ = lean_ctor_get(v_s_160_, 2);
v_isSharedCheck_174_ = !lean_is_exclusive(v_s_160_);
if (v_isSharedCheck_174_ == 0)
{
v___x_167_ = v_s_160_;
v_isShared_168_ = v_isSharedCheck_174_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_ms_165_);
lean_inc(v_tys_164_);
lean_inc(v_e_163_);
lean_dec(v_s_160_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_174_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
uint8_t v___x_169_; lean_object* v___x_170_; lean_object* v___x_172_; 
v___x_169_ = 0;
v___x_170_ = lean_byte_array_push(v_e_163_, v___x_169_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v___x_170_);
v___x_172_ = v___x_167_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v___x_170_);
lean_ctor_set(v_reuseFailAlloc_173_, 1, v_tys_164_);
lean_ctor_set(v_reuseFailAlloc_173_, 2, v_ms_165_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
}
else
{
lean_object* v_val_175_; lean_object* v_e_176_; lean_object* v_tys_177_; lean_object* v_ms_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_188_; 
v_val_175_ = lean_ctor_get(v_o_161_, 0);
lean_inc(v_val_175_);
lean_dec_ref_known(v_o_161_, 1);
v_e_176_ = lean_ctor_get(v_s_160_, 0);
v_tys_177_ = lean_ctor_get(v_s_160_, 1);
v_ms_178_ = lean_ctor_get(v_s_160_, 2);
v_isSharedCheck_188_ = !lean_is_exclusive(v_s_160_);
if (v_isSharedCheck_188_ == 0)
{
v___x_180_ = v_s_160_;
v_isShared_181_ = v_isSharedCheck_188_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_ms_178_);
lean_inc(v_tys_177_);
lean_inc(v_e_176_);
lean_dec(v_s_160_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_188_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
uint8_t v___x_182_; lean_object* v___x_183_; lean_object* v___x_185_; 
v___x_182_ = 1;
v___x_183_ = lean_byte_array_push(v_e_176_, v___x_182_);
if (v_isShared_181_ == 0)
{
lean_ctor_set(v___x_180_, 0, v___x_183_);
v___x_185_ = v___x_180_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v___x_183_);
lean_ctor_set(v_reuseFailAlloc_187_, 1, v_tys_177_);
lean_ctor_set(v_reuseFailAlloc_187_, 2, v_ms_178_);
v___x_185_ = v_reuseFailAlloc_187_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
lean_object* v___x_186_; 
v___x_186_ = lean_apply_2(v_f_162_, v___x_185_, v_val_175_);
return v___x_186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_opt(lean_object* v_00_u03b1_189_, lean_object* v_s_190_, lean_object* v_o_191_, lean_object* v_f_192_){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v_s_190_, v_o_191_, v_f_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___lam__0(lean_object* v_c_194_, lean_object* v_ms_195_){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = l_Lean_NameSet_insert(v_ms_195_, v_c_194_);
return v___x_196_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__1(void){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_unsigned_to_nat(64u);
v___x_199_ = l_Lean_mkPtrSet___redArg(v___x_198_);
return v___x_199_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__2(void){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_200_ = lean_box(0);
v___x_201_ = lean_unsigned_to_nat(16u);
v___x_202_ = lean_mk_array(v___x_201_, v___x_200_);
return v___x_202_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__3(void){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_203_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__2);
v___x_204_ = lean_unsigned_to_nat(0u);
v___x_205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
lean_ctor_set(v___x_205_, 1, v___x_203_);
return v___x_205_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__4(void){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_206_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__3);
v___x_207_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__1);
v___x_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
lean_ctor_set(v___x_208_, 1, v___x_206_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0(lean_object* v_as_209_, size_t v_i_210_, size_t v_stop_211_, lean_object* v_b_212_){
_start:
{
uint8_t v___x_213_; 
v___x_213_ = lean_usize_dec_eq(v_i_210_, v_stop_211_);
if (v___x_213_ == 0)
{
lean_object* v___f_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v_fst_218_; size_t v___x_219_; size_t v___x_220_; 
v___f_214_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__0));
v___x_215_ = lean_array_uget_borrowed(v_as_209_, v_i_210_);
v___x_216_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__4, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__4);
lean_inc(v___x_215_);
v___x_217_ = l_Lean_Expr_FoldConstsImpl_fold___redArg(v___f_214_, v___x_215_, v_b_212_, v___x_216_);
v_fst_218_ = lean_ctor_get(v___x_217_, 0);
lean_inc(v_fst_218_);
lean_dec_ref(v___x_217_);
v___x_219_ = ((size_t)1ULL);
v___x_220_ = lean_usize_add(v_i_210_, v___x_219_);
v_i_210_ = v___x_220_;
v_b_212_ = v_fst_218_;
goto _start;
}
else
{
return v_b_212_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___boxed(lean_object* v_as_222_, lean_object* v_i_223_, lean_object* v_stop_224_, lean_object* v_b_225_){
_start:
{
size_t v_i_boxed_226_; size_t v_stop_boxed_227_; lean_object* v_res_228_; 
v_i_boxed_226_ = lean_unbox_usize(v_i_223_);
lean_dec(v_i_223_);
v_stop_boxed_227_ = lean_unbox_usize(v_stop_224_);
lean_dec(v_stop_224_);
v_res_228_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0(v_as_222_, v_i_boxed_226_, v_stop_boxed_227_, v_b_225_);
lean_dec_ref(v_as_222_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_CEnc_flushTys(lean_object* v_s_231_){
_start:
{
lean_object* v_e_232_; lean_object* v_tys_233_; lean_object* v_ms_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_260_; 
v_e_232_ = lean_ctor_get(v_s_231_, 0);
v_tys_233_ = lean_ctor_get(v_s_231_, 1);
v_ms_234_ = lean_ctor_get(v_s_231_, 2);
v_isSharedCheck_260_ = !lean_is_exclusive(v_s_231_);
if (v_isSharedCheck_260_ == 0)
{
v___x_236_ = v_s_231_;
v_isShared_237_ = v_isSharedCheck_260_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_ms_234_);
lean_inc(v_tys_233_);
lean_inc(v_e_232_);
lean_dec(v_s_231_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_260_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___y_239_; lean_object* v___x_250_; lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_250_ = lean_array_get_size(v_tys_233_);
v___x_251_ = lean_unsigned_to_nat(0u);
v___x_252_ = lean_nat_dec_eq(v___x_250_, v___x_251_);
if (v___x_252_ == 0)
{
uint8_t v___x_253_; 
v___x_253_ = lean_nat_dec_lt(v___x_251_, v___x_250_);
if (v___x_253_ == 0)
{
v___y_239_ = v_ms_234_;
goto v___jp_238_;
}
else
{
size_t v___x_254_; size_t v___x_255_; lean_object* v___x_256_; 
v___x_254_ = ((size_t)0ULL);
v___x_255_ = lean_usize_of_nat(v___x_250_);
v___x_256_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0(v_tys_233_, v___x_254_, v___x_255_, v_ms_234_);
v___y_239_ = v___x_256_;
goto v___jp_238_;
}
}
else
{
uint8_t v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
lean_del_object(v___x_236_);
v___x_257_ = 0;
v___x_258_ = lean_byte_array_push(v_e_232_, v___x_257_);
v___x_259_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
lean_ctor_set(v___x_259_, 1, v_tys_233_);
lean_ctor_set(v___x_259_, 2, v_ms_234_);
return v___x_259_;
}
v___jp_238_:
{
uint8_t v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; uint8_t v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_248_; 
v___x_240_ = 1;
v___x_241_ = lean_byte_array_push(v_e_232_, v___x_240_);
v___x_242_ = 1;
v___x_243_ = 1;
v___x_244_ = lean_usage_exprs_digest(v___x_242_, v___x_243_, v_tys_233_);
lean_dec_ref(v_tys_233_);
v___x_245_ = l_Lean_ModuleUsage_Enc_digest(v___x_241_, v___x_244_);
lean_dec_ref(v___x_244_);
v___x_246_ = ((lean_object*)(l_Lean_ModuleUsage_CEnc_flushTys___closed__0));
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 2, v___y_239_);
lean_ctor_set(v___x_236_, 1, v___x_246_);
lean_ctor_set(v___x_236_, 0, v___x_245_);
v___x_248_ = v___x_236_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v___x_245_);
lean_ctor_set(v_reuseFailAlloc_249_, 1, v___x_246_);
lean_ctor_set(v_reuseFailAlloc_249_, 2, v___y_239_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_levelEnc(lean_object* v_e_261_, lean_object* v_x_262_){
_start:
{
switch(lean_obj_tag(v_x_262_))
{
case 0:
{
uint8_t v___x_263_; lean_object* v___x_264_; 
v___x_263_ = 0;
v___x_264_ = lean_byte_array_push(v_e_261_, v___x_263_);
return v___x_264_;
}
case 1:
{
lean_object* v_a_265_; uint8_t v___x_266_; lean_object* v___x_267_; 
v_a_265_ = lean_ctor_get(v_x_262_, 0);
lean_inc(v_a_265_);
lean_dec_ref_known(v_x_262_, 1);
v___x_266_ = 1;
v___x_267_ = lean_byte_array_push(v_e_261_, v___x_266_);
v_e_261_ = v___x_267_;
v_x_262_ = v_a_265_;
goto _start;
}
case 2:
{
lean_object* v_a_269_; lean_object* v_a_270_; uint8_t v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v_a_269_ = lean_ctor_get(v_x_262_, 0);
lean_inc(v_a_269_);
v_a_270_ = lean_ctor_get(v_x_262_, 1);
lean_inc(v_a_270_);
lean_dec_ref_known(v_x_262_, 2);
v___x_271_ = 2;
v___x_272_ = lean_byte_array_push(v_e_261_, v___x_271_);
v___x_273_ = l_Lean_ModuleUsage_levelEnc(v___x_272_, v_a_269_);
v_e_261_ = v___x_273_;
v_x_262_ = v_a_270_;
goto _start;
}
case 3:
{
lean_object* v_a_275_; lean_object* v_a_276_; uint8_t v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v_a_275_ = lean_ctor_get(v_x_262_, 0);
lean_inc(v_a_275_);
v_a_276_ = lean_ctor_get(v_x_262_, 1);
lean_inc(v_a_276_);
lean_dec_ref_known(v_x_262_, 2);
v___x_277_ = 3;
v___x_278_ = lean_byte_array_push(v_e_261_, v___x_277_);
v___x_279_ = l_Lean_ModuleUsage_levelEnc(v___x_278_, v_a_275_);
v_e_261_ = v___x_279_;
v_x_262_ = v_a_276_;
goto _start;
}
case 4:
{
lean_object* v_a_281_; uint8_t v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v_a_281_ = lean_ctor_get(v_x_262_, 0);
lean_inc(v_a_281_);
lean_dec_ref_known(v_x_262_, 1);
v___x_282_ = 4;
v___x_283_ = lean_byte_array_push(v_e_261_, v___x_282_);
v___x_284_ = l_Lean_ModuleUsage_Enc_name(v___x_283_, v_a_281_);
return v___x_284_;
}
default: 
{
lean_object* v_a_285_; uint8_t v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
v_a_285_ = lean_ctor_get(v_x_262_, 0);
lean_inc(v_a_285_);
lean_dec_ref_known(v_x_262_, 1);
v___x_286_ = 5;
v___x_287_ = lean_byte_array_push(v_e_261_, v___x_286_);
v___x_288_ = l_Lean_ModuleUsage_Enc_name(v___x_287_, v_a_285_);
return v___x_288_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_inlineEnc(lean_object* v_e_289_, uint8_t v_x_290_){
_start:
{
switch(v_x_290_)
{
case 0:
{
uint8_t v___x_291_; lean_object* v___x_292_; 
v___x_291_ = 0;
v___x_292_ = lean_byte_array_push(v_e_289_, v___x_291_);
return v___x_292_;
}
case 1:
{
uint8_t v___x_293_; lean_object* v___x_294_; 
v___x_293_ = 1;
v___x_294_ = lean_byte_array_push(v_e_289_, v___x_293_);
return v___x_294_;
}
case 2:
{
uint8_t v___x_295_; lean_object* v___x_296_; 
v___x_295_ = 2;
v___x_296_ = lean_byte_array_push(v_e_289_, v___x_295_);
return v___x_296_;
}
case 3:
{
uint8_t v___x_297_; lean_object* v___x_298_; 
v___x_297_ = 3;
v___x_298_ = lean_byte_array_push(v_e_289_, v___x_297_);
return v___x_298_;
}
default: 
{
uint8_t v___x_299_; lean_object* v___x_300_; 
v___x_299_ = 4;
v___x_300_ = lean_byte_array_push(v_e_289_, v___x_299_);
return v___x_300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_inlineEnc___boxed(lean_object* v_e_301_, lean_object* v_x_302_){
_start:
{
uint8_t v_x_99__boxed_303_; lean_object* v_res_304_; 
v_x_99__boxed_303_ = lean_unbox(v_x_302_);
v_res_304_ = l_Lean_ModuleUsage_inlineEnc(v_e_301_, v_x_99__boxed_303_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_lit(lean_object* v_s_305_, lean_object* v_x_306_){
_start:
{
switch(lean_obj_tag(v_x_306_))
{
case 0:
{
lean_object* v_val_307_; lean_object* v_e_308_; lean_object* v_tys_309_; lean_object* v_ms_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_320_; 
v_val_307_ = lean_ctor_get(v_x_306_, 0);
lean_inc(v_val_307_);
lean_dec_ref_known(v_x_306_, 1);
v_e_308_ = lean_ctor_get(v_s_305_, 0);
v_tys_309_ = lean_ctor_get(v_s_305_, 1);
v_ms_310_ = lean_ctor_get(v_s_305_, 2);
v_isSharedCheck_320_ = !lean_is_exclusive(v_s_305_);
if (v_isSharedCheck_320_ == 0)
{
v___x_312_ = v_s_305_;
v_isShared_313_ = v_isSharedCheck_320_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_ms_310_);
lean_inc(v_tys_309_);
lean_inc(v_e_308_);
lean_dec(v_s_305_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_320_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
uint8_t v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_318_; 
v___x_314_ = 0;
v___x_315_ = lean_byte_array_push(v_e_308_, v___x_314_);
v___x_316_ = l_Lean_ModuleUsage_Enc_nat(v___x_315_, v_val_307_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 0, v___x_316_);
v___x_318_ = v___x_312_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_316_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v_tys_309_);
lean_ctor_set(v_reuseFailAlloc_319_, 2, v_ms_310_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
case 1:
{
lean_object* v_val_321_; lean_object* v_e_322_; lean_object* v_tys_323_; lean_object* v_ms_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_334_; 
v_val_321_ = lean_ctor_get(v_x_306_, 0);
lean_inc_ref(v_val_321_);
lean_dec_ref_known(v_x_306_, 1);
v_e_322_ = lean_ctor_get(v_s_305_, 0);
v_tys_323_ = lean_ctor_get(v_s_305_, 1);
v_ms_324_ = lean_ctor_get(v_s_305_, 2);
v_isSharedCheck_334_ = !lean_is_exclusive(v_s_305_);
if (v_isSharedCheck_334_ == 0)
{
v___x_326_ = v_s_305_;
v_isShared_327_ = v_isSharedCheck_334_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_ms_324_);
lean_inc(v_tys_323_);
lean_inc(v_e_322_);
lean_dec(v_s_305_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_334_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
uint8_t v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_332_; 
v___x_328_ = 1;
v___x_329_ = lean_byte_array_push(v_e_322_, v___x_328_);
v___x_330_ = l_Lean_ModuleUsage_Enc_str(v___x_329_, v_val_321_);
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 0, v___x_330_);
v___x_332_ = v___x_326_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_330_);
lean_ctor_set(v_reuseFailAlloc_333_, 1, v_tys_323_);
lean_ctor_set(v_reuseFailAlloc_333_, 2, v_ms_324_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
case 2:
{
uint8_t v_val_335_; lean_object* v_e_336_; lean_object* v_tys_337_; lean_object* v_ms_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_349_; 
v_val_335_ = lean_ctor_get_uint8(v_x_306_, 0);
lean_dec_ref_known(v_x_306_, 0);
v_e_336_ = lean_ctor_get(v_s_305_, 0);
v_tys_337_ = lean_ctor_get(v_s_305_, 1);
v_ms_338_ = lean_ctor_get(v_s_305_, 2);
v_isSharedCheck_349_ = !lean_is_exclusive(v_s_305_);
if (v_isSharedCheck_349_ == 0)
{
v___x_340_ = v_s_305_;
v_isShared_341_ = v_isSharedCheck_349_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_ms_338_);
lean_inc(v_tys_337_);
lean_inc(v_e_336_);
lean_dec(v_s_305_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_349_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
uint8_t v___x_342_; lean_object* v___x_343_; uint64_t v___x_344_; lean_object* v___x_345_; lean_object* v___x_347_; 
v___x_342_ = 2;
v___x_343_ = lean_byte_array_push(v_e_336_, v___x_342_);
v___x_344_ = lean_uint8_to_uint64(v_val_335_);
v___x_345_ = l_Lean_ModuleUsage_Enc_u64(v___x_343_, v___x_344_);
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 0, v___x_345_);
v___x_347_ = v___x_340_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v___x_345_);
lean_ctor_set(v_reuseFailAlloc_348_, 1, v_tys_337_);
lean_ctor_set(v_reuseFailAlloc_348_, 2, v_ms_338_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
case 3:
{
uint16_t v_val_350_; lean_object* v_e_351_; lean_object* v_tys_352_; lean_object* v_ms_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_364_; 
v_val_350_ = lean_ctor_get_uint16(v_x_306_, 0);
lean_dec_ref_known(v_x_306_, 0);
v_e_351_ = lean_ctor_get(v_s_305_, 0);
v_tys_352_ = lean_ctor_get(v_s_305_, 1);
v_ms_353_ = lean_ctor_get(v_s_305_, 2);
v_isSharedCheck_364_ = !lean_is_exclusive(v_s_305_);
if (v_isSharedCheck_364_ == 0)
{
v___x_355_ = v_s_305_;
v_isShared_356_ = v_isSharedCheck_364_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_ms_353_);
lean_inc(v_tys_352_);
lean_inc(v_e_351_);
lean_dec(v_s_305_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_364_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
uint8_t v___x_357_; lean_object* v___x_358_; uint64_t v___x_359_; lean_object* v___x_360_; lean_object* v___x_362_; 
v___x_357_ = 3;
v___x_358_ = lean_byte_array_push(v_e_351_, v___x_357_);
v___x_359_ = lean_uint16_to_uint64(v_val_350_);
v___x_360_ = l_Lean_ModuleUsage_Enc_u64(v___x_358_, v___x_359_);
if (v_isShared_356_ == 0)
{
lean_ctor_set(v___x_355_, 0, v___x_360_);
v___x_362_ = v___x_355_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v___x_360_);
lean_ctor_set(v_reuseFailAlloc_363_, 1, v_tys_352_);
lean_ctor_set(v_reuseFailAlloc_363_, 2, v_ms_353_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
case 4:
{
uint32_t v_val_365_; lean_object* v_e_366_; lean_object* v_tys_367_; lean_object* v_ms_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_379_; 
v_val_365_ = lean_ctor_get_uint32(v_x_306_, 0);
lean_dec_ref_known(v_x_306_, 0);
v_e_366_ = lean_ctor_get(v_s_305_, 0);
v_tys_367_ = lean_ctor_get(v_s_305_, 1);
v_ms_368_ = lean_ctor_get(v_s_305_, 2);
v_isSharedCheck_379_ = !lean_is_exclusive(v_s_305_);
if (v_isSharedCheck_379_ == 0)
{
v___x_370_ = v_s_305_;
v_isShared_371_ = v_isSharedCheck_379_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_ms_368_);
lean_inc(v_tys_367_);
lean_inc(v_e_366_);
lean_dec(v_s_305_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_379_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
uint8_t v___x_372_; lean_object* v___x_373_; uint64_t v___x_374_; lean_object* v___x_375_; lean_object* v___x_377_; 
v___x_372_ = 4;
v___x_373_ = lean_byte_array_push(v_e_366_, v___x_372_);
v___x_374_ = lean_uint32_to_uint64(v_val_365_);
v___x_375_ = l_Lean_ModuleUsage_Enc_u64(v___x_373_, v___x_374_);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 0, v___x_375_);
v___x_377_ = v___x_370_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v___x_375_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v_tys_367_);
lean_ctor_set(v_reuseFailAlloc_378_, 2, v_ms_368_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
case 5:
{
uint64_t v_val_380_; lean_object* v_e_381_; lean_object* v_tys_382_; lean_object* v_ms_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_393_; 
v_val_380_ = lean_ctor_get_uint64(v_x_306_, 0);
lean_dec_ref_known(v_x_306_, 0);
v_e_381_ = lean_ctor_get(v_s_305_, 0);
v_tys_382_ = lean_ctor_get(v_s_305_, 1);
v_ms_383_ = lean_ctor_get(v_s_305_, 2);
v_isSharedCheck_393_ = !lean_is_exclusive(v_s_305_);
if (v_isSharedCheck_393_ == 0)
{
v___x_385_ = v_s_305_;
v_isShared_386_ = v_isSharedCheck_393_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_ms_383_);
lean_inc(v_tys_382_);
lean_inc(v_e_381_);
lean_dec(v_s_305_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_393_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
uint8_t v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_391_; 
v___x_387_ = 5;
v___x_388_ = lean_byte_array_push(v_e_381_, v___x_387_);
v___x_389_ = l_Lean_ModuleUsage_Enc_u64(v___x_388_, v_val_380_);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 0, v___x_389_);
v___x_391_ = v___x_385_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_389_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v_tys_382_);
lean_ctor_set(v_reuseFailAlloc_392_, 2, v_ms_383_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
default: 
{
uint64_t v_val_394_; lean_object* v_e_395_; lean_object* v_tys_396_; lean_object* v_ms_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_407_; 
v_val_394_ = lean_ctor_get_uint64(v_x_306_, 0);
lean_dec_ref_known(v_x_306_, 0);
v_e_395_ = lean_ctor_get(v_s_305_, 0);
v_tys_396_ = lean_ctor_get(v_s_305_, 1);
v_ms_397_ = lean_ctor_get(v_s_305_, 2);
v_isSharedCheck_407_ = !lean_is_exclusive(v_s_305_);
if (v_isSharedCheck_407_ == 0)
{
v___x_399_ = v_s_305_;
v_isShared_400_ = v_isSharedCheck_407_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_ms_397_);
lean_inc(v_tys_396_);
lean_inc(v_e_395_);
lean_dec(v_s_305_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_407_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
uint8_t v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_405_; 
v___x_401_ = 6;
v___x_402_ = lean_byte_array_push(v_e_395_, v___x_401_);
v___x_403_ = l_Lean_ModuleUsage_Enc_u64(v___x_402_, v_val_394_);
if (v_isShared_400_ == 0)
{
lean_ctor_set(v___x_399_, 0, v___x_403_);
v___x_405_ = v___x_399_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___x_403_);
lean_ctor_set(v_reuseFailAlloc_406_, 1, v_tys_396_);
lean_ctor_set(v_reuseFailAlloc_406_, 2, v_ms_397_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_arg___redArg(lean_object* v_s_408_, lean_object* v_x_409_){
_start:
{
switch(lean_obj_tag(v_x_409_))
{
case 0:
{
lean_object* v_e_410_; lean_object* v_tys_411_; lean_object* v_ms_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_421_; 
v_e_410_ = lean_ctor_get(v_s_408_, 0);
v_tys_411_ = lean_ctor_get(v_s_408_, 1);
v_ms_412_ = lean_ctor_get(v_s_408_, 2);
v_isSharedCheck_421_ = !lean_is_exclusive(v_s_408_);
if (v_isSharedCheck_421_ == 0)
{
v___x_414_ = v_s_408_;
v_isShared_415_ = v_isSharedCheck_421_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_ms_412_);
lean_inc(v_tys_411_);
lean_inc(v_e_410_);
lean_dec(v_s_408_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_421_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
uint8_t v___x_416_; lean_object* v___x_417_; lean_object* v___x_419_; 
v___x_416_ = 0;
v___x_417_ = lean_byte_array_push(v_e_410_, v___x_416_);
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 0, v___x_417_);
v___x_419_ = v___x_414_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_417_);
lean_ctor_set(v_reuseFailAlloc_420_, 1, v_tys_411_);
lean_ctor_set(v_reuseFailAlloc_420_, 2, v_ms_412_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
case 1:
{
lean_object* v_fvarId_422_; lean_object* v_e_423_; lean_object* v_tys_424_; lean_object* v_ms_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_435_; 
v_fvarId_422_ = lean_ctor_get(v_x_409_, 0);
lean_inc(v_fvarId_422_);
lean_dec_ref_known(v_x_409_, 1);
v_e_423_ = lean_ctor_get(v_s_408_, 0);
v_tys_424_ = lean_ctor_get(v_s_408_, 1);
v_ms_425_ = lean_ctor_get(v_s_408_, 2);
v_isSharedCheck_435_ = !lean_is_exclusive(v_s_408_);
if (v_isSharedCheck_435_ == 0)
{
v___x_427_ = v_s_408_;
v_isShared_428_ = v_isSharedCheck_435_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_ms_425_);
lean_inc(v_tys_424_);
lean_inc(v_e_423_);
lean_dec(v_s_408_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_435_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
uint8_t v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_433_; 
v___x_429_ = 1;
v___x_430_ = lean_byte_array_push(v_e_423_, v___x_429_);
v___x_431_ = l_Lean_ModuleUsage_Enc_name(v___x_430_, v_fvarId_422_);
if (v_isShared_428_ == 0)
{
lean_ctor_set(v___x_427_, 0, v___x_431_);
v___x_433_ = v___x_427_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___x_431_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v_tys_424_);
lean_ctor_set(v_reuseFailAlloc_434_, 2, v_ms_425_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
default: 
{
lean_object* v_expr_436_; lean_object* v_e_437_; lean_object* v_tys_438_; lean_object* v_ms_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_449_; 
v_expr_436_ = lean_ctor_get(v_x_409_, 0);
lean_inc_ref(v_expr_436_);
lean_dec_ref_known(v_x_409_, 1);
v_e_437_ = lean_ctor_get(v_s_408_, 0);
v_tys_438_ = lean_ctor_get(v_s_408_, 1);
v_ms_439_ = lean_ctor_get(v_s_408_, 2);
v_isSharedCheck_449_ = !lean_is_exclusive(v_s_408_);
if (v_isSharedCheck_449_ == 0)
{
v___x_441_ = v_s_408_;
v_isShared_442_ = v_isSharedCheck_449_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_ms_439_);
lean_inc(v_tys_438_);
lean_inc(v_e_437_);
lean_dec(v_s_408_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_449_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
uint8_t v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_447_; 
v___x_443_ = 2;
v___x_444_ = lean_byte_array_push(v_e_437_, v___x_443_);
v___x_445_ = lean_array_push(v_tys_438_, v_expr_436_);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 1, v___x_445_);
lean_ctor_set(v___x_441_, 0, v___x_444_);
v___x_447_ = v___x_441_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v___x_444_);
lean_ctor_set(v_reuseFailAlloc_448_, 1, v___x_445_);
lean_ctor_set(v_reuseFailAlloc_448_, 2, v_ms_439_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_arg(uint8_t v_pu_450_, lean_object* v_s_451_, lean_object* v_x_452_){
_start:
{
lean_object* v___x_453_; 
v___x_453_ = l_Lean_ModuleUsage_LCNFEnc_arg___redArg(v_s_451_, v_x_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_arg___boxed(lean_object* v_pu_454_, lean_object* v_s_455_, lean_object* v_x_456_){
_start:
{
uint8_t v_pu_boxed_457_; lean_object* v_res_458_; 
v_pu_boxed_457_ = lean_unbox(v_pu_454_);
v_res_458_ = l_Lean_ModuleUsage_LCNFEnc_arg(v_pu_boxed_457_, v_s_455_, v_x_456_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_args_spec__0___redArg(lean_object* v_as_459_, size_t v_i_460_, size_t v_stop_461_, lean_object* v_b_462_){
_start:
{
uint8_t v___x_463_; 
v___x_463_ = lean_usize_dec_eq(v_i_460_, v_stop_461_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; lean_object* v___x_465_; size_t v___x_466_; size_t v___x_467_; 
v___x_464_ = lean_array_uget_borrowed(v_as_459_, v_i_460_);
lean_inc(v___x_464_);
v___x_465_ = l_Lean_ModuleUsage_LCNFEnc_arg___redArg(v_b_462_, v___x_464_);
v___x_466_ = ((size_t)1ULL);
v___x_467_ = lean_usize_add(v_i_460_, v___x_466_);
v_i_460_ = v___x_467_;
v_b_462_ = v___x_465_;
goto _start;
}
else
{
return v_b_462_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_args_spec__0___redArg___boxed(lean_object* v_as_469_, lean_object* v_i_470_, lean_object* v_stop_471_, lean_object* v_b_472_){
_start:
{
size_t v_i_boxed_473_; size_t v_stop_boxed_474_; lean_object* v_res_475_; 
v_i_boxed_473_ = lean_unbox_usize(v_i_470_);
lean_dec(v_i_470_);
v_stop_boxed_474_ = lean_unbox_usize(v_stop_471_);
lean_dec(v_stop_471_);
v_res_475_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_args_spec__0___redArg(v_as_469_, v_i_boxed_473_, v_stop_boxed_474_, v_b_472_);
lean_dec_ref(v_as_469_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_args(uint8_t v_pu_476_, lean_object* v_s_477_, lean_object* v_as_478_){
_start:
{
lean_object* v_e_479_; lean_object* v_tys_480_; lean_object* v_ms_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_495_; 
v_e_479_ = lean_ctor_get(v_s_477_, 0);
v_tys_480_ = lean_ctor_get(v_s_477_, 1);
v_ms_481_ = lean_ctor_get(v_s_477_, 2);
v_isSharedCheck_495_ = !lean_is_exclusive(v_s_477_);
if (v_isSharedCheck_495_ == 0)
{
v___x_483_ = v_s_477_;
v_isShared_484_ = v_isSharedCheck_495_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_ms_481_);
lean_inc(v_tys_480_);
lean_inc(v_e_479_);
lean_dec(v_s_477_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_495_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_488_; 
v___x_485_ = lean_array_get_size(v_as_478_);
v___x_486_ = l_Lean_ModuleUsage_Enc_nat(v_e_479_, v___x_485_);
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 0, v___x_486_);
v___x_488_ = v___x_483_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v___x_486_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v_tys_480_);
lean_ctor_set(v_reuseFailAlloc_494_, 2, v_ms_481_);
v___x_488_ = v_reuseFailAlloc_494_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
lean_object* v___x_489_; uint8_t v___x_490_; 
v___x_489_ = lean_unsigned_to_nat(0u);
v___x_490_ = lean_nat_dec_lt(v___x_489_, v___x_485_);
if (v___x_490_ == 0)
{
return v___x_488_;
}
else
{
size_t v___x_491_; size_t v___x_492_; lean_object* v___x_493_; 
v___x_491_ = ((size_t)0ULL);
v___x_492_ = lean_usize_of_nat(v___x_485_);
v___x_493_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_args_spec__0___redArg(v_as_478_, v___x_491_, v___x_492_, v___x_488_);
return v___x_493_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_args___boxed(lean_object* v_pu_496_, lean_object* v_s_497_, lean_object* v_as_498_){
_start:
{
uint8_t v_pu_boxed_499_; lean_object* v_res_500_; 
v_pu_boxed_499_ = lean_unbox(v_pu_496_);
v_res_500_ = l_Lean_ModuleUsage_LCNFEnc_args(v_pu_boxed_499_, v_s_497_, v_as_498_);
lean_dec_ref(v_as_498_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_args_spec__0(uint8_t v_pu_501_, lean_object* v_as_502_, size_t v_i_503_, size_t v_stop_504_, lean_object* v_b_505_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_args_spec__0___redArg(v_as_502_, v_i_503_, v_stop_504_, v_b_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_args_spec__0___boxed(lean_object* v_pu_507_, lean_object* v_as_508_, lean_object* v_i_509_, lean_object* v_stop_510_, lean_object* v_b_511_){
_start:
{
uint8_t v_pu_boxed_512_; size_t v_i_boxed_513_; size_t v_stop_boxed_514_; lean_object* v_res_515_; 
v_pu_boxed_512_ = lean_unbox(v_pu_507_);
v_i_boxed_513_ = lean_unbox_usize(v_i_509_);
lean_dec(v_i_509_);
v_stop_boxed_514_ = lean_unbox_usize(v_stop_510_);
lean_dec(v_stop_510_);
v_res_515_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_args_spec__0(v_pu_boxed_512_, v_as_508_, v_i_boxed_513_, v_stop_boxed_514_, v_b_511_);
lean_dec_ref(v_as_508_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_ctorInfo(lean_object* v_s_516_, lean_object* v_i_517_){
_start:
{
lean_object* v_name_518_; lean_object* v_cidx_519_; lean_object* v_size_520_; lean_object* v_usize_521_; lean_object* v_ssize_522_; lean_object* v_e_523_; lean_object* v_tys_524_; lean_object* v_ms_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_538_; 
v_name_518_ = lean_ctor_get(v_i_517_, 0);
lean_inc(v_name_518_);
v_cidx_519_ = lean_ctor_get(v_i_517_, 1);
lean_inc(v_cidx_519_);
v_size_520_ = lean_ctor_get(v_i_517_, 2);
lean_inc(v_size_520_);
v_usize_521_ = lean_ctor_get(v_i_517_, 3);
lean_inc(v_usize_521_);
v_ssize_522_ = lean_ctor_get(v_i_517_, 4);
lean_inc(v_ssize_522_);
lean_dec_ref(v_i_517_);
v_e_523_ = lean_ctor_get(v_s_516_, 0);
v_tys_524_ = lean_ctor_get(v_s_516_, 1);
v_ms_525_ = lean_ctor_get(v_s_516_, 2);
v_isSharedCheck_538_ = !lean_is_exclusive(v_s_516_);
if (v_isSharedCheck_538_ == 0)
{
v___x_527_ = v_s_516_;
v_isShared_528_ = v_isSharedCheck_538_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_ms_525_);
lean_inc(v_tys_524_);
lean_inc(v_e_523_);
lean_dec(v_s_516_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_538_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_536_; 
lean_inc(v_name_518_);
v___x_529_ = l_Lean_ModuleUsage_Enc_name(v_e_523_, v_name_518_);
v___x_530_ = l_Lean_NameSet_insert(v_ms_525_, v_name_518_);
v___x_531_ = l_Lean_ModuleUsage_Enc_nat(v___x_529_, v_cidx_519_);
v___x_532_ = l_Lean_ModuleUsage_Enc_nat(v___x_531_, v_size_520_);
v___x_533_ = l_Lean_ModuleUsage_Enc_nat(v___x_532_, v_usize_521_);
v___x_534_ = l_Lean_ModuleUsage_Enc_nat(v___x_533_, v_ssize_522_);
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 2, v___x_530_);
lean_ctor_set(v___x_527_, 0, v___x_534_);
v___x_536_ = v___x_527_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v___x_534_);
lean_ctor_set(v_reuseFailAlloc_537_, 1, v_tys_524_);
lean_ctor_set(v_reuseFailAlloc_537_, 2, v___x_530_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_ModuleUsage_LCNFEnc_levels_spec__0(lean_object* v_x_539_, lean_object* v_x_540_){
_start:
{
if (lean_obj_tag(v_x_540_) == 0)
{
return v_x_539_;
}
else
{
lean_object* v_head_541_; lean_object* v_tail_542_; lean_object* v___x_543_; 
v_head_541_ = lean_ctor_get(v_x_540_, 0);
lean_inc(v_head_541_);
v_tail_542_ = lean_ctor_get(v_x_540_, 1);
lean_inc(v_tail_542_);
lean_dec_ref_known(v_x_540_, 2);
v___x_543_ = l_Lean_ModuleUsage_levelEnc(v_x_539_, v_head_541_);
v_x_539_ = v___x_543_;
v_x_540_ = v_tail_542_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_levels(lean_object* v_s_545_, lean_object* v_us_546_){
_start:
{
lean_object* v_e_547_; lean_object* v_tys_548_; lean_object* v_ms_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_559_; 
v_e_547_ = lean_ctor_get(v_s_545_, 0);
v_tys_548_ = lean_ctor_get(v_s_545_, 1);
v_ms_549_ = lean_ctor_get(v_s_545_, 2);
v_isSharedCheck_559_ = !lean_is_exclusive(v_s_545_);
if (v_isSharedCheck_559_ == 0)
{
v___x_551_ = v_s_545_;
v_isShared_552_ = v_isSharedCheck_559_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_ms_549_);
lean_inc(v_tys_548_);
lean_inc(v_e_547_);
lean_dec(v_s_545_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_559_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_557_; 
v___x_553_ = l_List_lengthTR___redArg(v_us_546_);
v___x_554_ = l_Lean_ModuleUsage_Enc_nat(v_e_547_, v___x_553_);
v___x_555_ = l_List_foldl___at___00Lean_ModuleUsage_LCNFEnc_levels_spec__0(v___x_554_, v_us_546_);
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 0, v___x_555_);
v___x_557_ = v___x_551_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v___x_555_);
lean_ctor_set(v_reuseFailAlloc_558_, 1, v_tys_548_);
lean_ctor_set(v_reuseFailAlloc_558_, 2, v_ms_549_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_letValue(uint8_t v_pu_560_, lean_object* v_s_561_, lean_object* v_x_562_){
_start:
{
switch(lean_obj_tag(v_x_562_))
{
case 0:
{
lean_object* v_value_563_; lean_object* v_e_564_; lean_object* v_tys_565_; lean_object* v_ms_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_576_; 
v_value_563_ = lean_ctor_get(v_x_562_, 0);
lean_inc_ref(v_value_563_);
lean_dec_ref_known(v_x_562_, 1);
v_e_564_ = lean_ctor_get(v_s_561_, 0);
v_tys_565_ = lean_ctor_get(v_s_561_, 1);
v_ms_566_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_576_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_576_ == 0)
{
v___x_568_ = v_s_561_;
v_isShared_569_ = v_isSharedCheck_576_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_ms_566_);
lean_inc(v_tys_565_);
lean_inc(v_e_564_);
lean_dec(v_s_561_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_576_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
uint8_t v___x_570_; lean_object* v___x_571_; lean_object* v___x_573_; 
v___x_570_ = 0;
v___x_571_ = lean_byte_array_push(v_e_564_, v___x_570_);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 0, v___x_571_);
v___x_573_ = v___x_568_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v___x_571_);
lean_ctor_set(v_reuseFailAlloc_575_, 1, v_tys_565_);
lean_ctor_set(v_reuseFailAlloc_575_, 2, v_ms_566_);
v___x_573_ = v_reuseFailAlloc_575_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
lean_object* v___x_574_; 
v___x_574_ = l_Lean_ModuleUsage_LCNFEnc_lit(v___x_573_, v_value_563_);
return v___x_574_;
}
}
}
case 1:
{
lean_object* v_e_577_; lean_object* v_tys_578_; lean_object* v_ms_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_588_; 
v_e_577_ = lean_ctor_get(v_s_561_, 0);
v_tys_578_ = lean_ctor_get(v_s_561_, 1);
v_ms_579_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_588_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_588_ == 0)
{
v___x_581_ = v_s_561_;
v_isShared_582_ = v_isSharedCheck_588_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_ms_579_);
lean_inc(v_tys_578_);
lean_inc(v_e_577_);
lean_dec(v_s_561_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_588_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
uint8_t v___x_583_; lean_object* v___x_584_; lean_object* v___x_586_; 
v___x_583_ = 1;
v___x_584_ = lean_byte_array_push(v_e_577_, v___x_583_);
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 0, v___x_584_);
v___x_586_ = v___x_581_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v___x_584_);
lean_ctor_set(v_reuseFailAlloc_587_, 1, v_tys_578_);
lean_ctor_set(v_reuseFailAlloc_587_, 2, v_ms_579_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
case 2:
{
lean_object* v_typeName_589_; lean_object* v_idx_590_; lean_object* v_struct_591_; lean_object* v_e_592_; lean_object* v_tys_593_; lean_object* v_ms_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_607_; 
v_typeName_589_ = lean_ctor_get(v_x_562_, 0);
lean_inc(v_typeName_589_);
v_idx_590_ = lean_ctor_get(v_x_562_, 1);
lean_inc(v_idx_590_);
v_struct_591_ = lean_ctor_get(v_x_562_, 2);
lean_inc(v_struct_591_);
lean_dec_ref_known(v_x_562_, 3);
v_e_592_ = lean_ctor_get(v_s_561_, 0);
v_tys_593_ = lean_ctor_get(v_s_561_, 1);
v_ms_594_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_607_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_607_ == 0)
{
v___x_596_ = v_s_561_;
v_isShared_597_ = v_isSharedCheck_607_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_ms_594_);
lean_inc(v_tys_593_);
lean_inc(v_e_592_);
lean_dec(v_s_561_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_607_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
uint8_t v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_605_; 
v___x_598_ = 2;
v___x_599_ = lean_byte_array_push(v_e_592_, v___x_598_);
lean_inc(v_typeName_589_);
v___x_600_ = l_Lean_ModuleUsage_Enc_name(v___x_599_, v_typeName_589_);
v___x_601_ = l_Lean_NameSet_insert(v_ms_594_, v_typeName_589_);
v___x_602_ = l_Lean_ModuleUsage_Enc_nat(v___x_600_, v_idx_590_);
v___x_603_ = l_Lean_ModuleUsage_Enc_name(v___x_602_, v_struct_591_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 2, v___x_601_);
lean_ctor_set(v___x_596_, 0, v___x_603_);
v___x_605_ = v___x_596_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v___x_603_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_tys_593_);
lean_ctor_set(v_reuseFailAlloc_606_, 2, v___x_601_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
case 3:
{
lean_object* v_declName_608_; lean_object* v_us_609_; lean_object* v_args_610_; lean_object* v_e_611_; lean_object* v_tys_612_; lean_object* v_ms_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_626_; 
v_declName_608_ = lean_ctor_get(v_x_562_, 0);
lean_inc(v_declName_608_);
v_us_609_ = lean_ctor_get(v_x_562_, 1);
lean_inc(v_us_609_);
v_args_610_ = lean_ctor_get(v_x_562_, 2);
lean_inc_ref(v_args_610_);
lean_dec_ref_known(v_x_562_, 3);
v_e_611_ = lean_ctor_get(v_s_561_, 0);
v_tys_612_ = lean_ctor_get(v_s_561_, 1);
v_ms_613_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_626_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_626_ == 0)
{
v___x_615_ = v_s_561_;
v_isShared_616_ = v_isSharedCheck_626_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_ms_613_);
lean_inc(v_tys_612_);
lean_inc(v_e_611_);
lean_dec(v_s_561_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_626_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
uint8_t v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_622_; 
v___x_617_ = 3;
v___x_618_ = lean_byte_array_push(v_e_611_, v___x_617_);
lean_inc(v_declName_608_);
v___x_619_ = l_Lean_ModuleUsage_Enc_name(v___x_618_, v_declName_608_);
v___x_620_ = l_Lean_NameSet_insert(v_ms_613_, v_declName_608_);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 2, v___x_620_);
lean_ctor_set(v___x_615_, 0, v___x_619_);
v___x_622_ = v___x_615_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v___x_619_);
lean_ctor_set(v_reuseFailAlloc_625_, 1, v_tys_612_);
lean_ctor_set(v_reuseFailAlloc_625_, 2, v___x_620_);
v___x_622_ = v_reuseFailAlloc_625_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = l_Lean_ModuleUsage_LCNFEnc_levels(v___x_622_, v_us_609_);
v___x_624_ = l_Lean_ModuleUsage_LCNFEnc_args(v_pu_560_, v___x_623_, v_args_610_);
lean_dec_ref(v_args_610_);
return v___x_624_;
}
}
}
case 4:
{
lean_object* v_fvarId_627_; lean_object* v_args_628_; lean_object* v_e_629_; lean_object* v_tys_630_; lean_object* v_ms_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_642_; 
v_fvarId_627_ = lean_ctor_get(v_x_562_, 0);
lean_inc(v_fvarId_627_);
v_args_628_ = lean_ctor_get(v_x_562_, 1);
lean_inc_ref(v_args_628_);
lean_dec_ref_known(v_x_562_, 2);
v_e_629_ = lean_ctor_get(v_s_561_, 0);
v_tys_630_ = lean_ctor_get(v_s_561_, 1);
v_ms_631_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_642_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_642_ == 0)
{
v___x_633_ = v_s_561_;
v_isShared_634_ = v_isSharedCheck_642_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_ms_631_);
lean_inc(v_tys_630_);
lean_inc(v_e_629_);
lean_dec(v_s_561_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_642_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
uint8_t v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_639_; 
v___x_635_ = 4;
v___x_636_ = lean_byte_array_push(v_e_629_, v___x_635_);
v___x_637_ = l_Lean_ModuleUsage_Enc_name(v___x_636_, v_fvarId_627_);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 0, v___x_637_);
v___x_639_ = v___x_633_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v___x_637_);
lean_ctor_set(v_reuseFailAlloc_641_, 1, v_tys_630_);
lean_ctor_set(v_reuseFailAlloc_641_, 2, v_ms_631_);
v___x_639_ = v_reuseFailAlloc_641_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
lean_object* v___x_640_; 
v___x_640_ = l_Lean_ModuleUsage_LCNFEnc_args(v_pu_560_, v___x_639_, v_args_628_);
lean_dec_ref(v_args_628_);
return v___x_640_;
}
}
}
case 5:
{
lean_object* v_i_643_; lean_object* v_args_644_; lean_object* v_e_645_; lean_object* v_tys_646_; lean_object* v_ms_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_658_; 
v_i_643_ = lean_ctor_get(v_x_562_, 0);
lean_inc_ref(v_i_643_);
v_args_644_ = lean_ctor_get(v_x_562_, 1);
lean_inc_ref(v_args_644_);
lean_dec_ref_known(v_x_562_, 2);
v_e_645_ = lean_ctor_get(v_s_561_, 0);
v_tys_646_ = lean_ctor_get(v_s_561_, 1);
v_ms_647_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_658_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_658_ == 0)
{
v___x_649_ = v_s_561_;
v_isShared_650_ = v_isSharedCheck_658_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_ms_647_);
lean_inc(v_tys_646_);
lean_inc(v_e_645_);
lean_dec(v_s_561_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_658_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
uint8_t v___x_651_; lean_object* v___x_652_; lean_object* v___x_654_; 
v___x_651_ = 5;
v___x_652_ = lean_byte_array_push(v_e_645_, v___x_651_);
if (v_isShared_650_ == 0)
{
lean_ctor_set(v___x_649_, 0, v___x_652_);
v___x_654_ = v___x_649_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v___x_652_);
lean_ctor_set(v_reuseFailAlloc_657_, 1, v_tys_646_);
lean_ctor_set(v_reuseFailAlloc_657_, 2, v_ms_647_);
v___x_654_ = v_reuseFailAlloc_657_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_655_ = l_Lean_ModuleUsage_LCNFEnc_ctorInfo(v___x_654_, v_i_643_);
v___x_656_ = l_Lean_ModuleUsage_LCNFEnc_args(v_pu_560_, v___x_655_, v_args_644_);
lean_dec_ref(v_args_644_);
return v___x_656_;
}
}
}
case 6:
{
lean_object* v_i_659_; lean_object* v_var_660_; lean_object* v_e_661_; lean_object* v_tys_662_; lean_object* v_ms_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_674_; 
v_i_659_ = lean_ctor_get(v_x_562_, 0);
lean_inc(v_i_659_);
v_var_660_ = lean_ctor_get(v_x_562_, 1);
lean_inc(v_var_660_);
lean_dec_ref_known(v_x_562_, 2);
v_e_661_ = lean_ctor_get(v_s_561_, 0);
v_tys_662_ = lean_ctor_get(v_s_561_, 1);
v_ms_663_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_674_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_674_ == 0)
{
v___x_665_ = v_s_561_;
v_isShared_666_ = v_isSharedCheck_674_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_ms_663_);
lean_inc(v_tys_662_);
lean_inc(v_e_661_);
lean_dec(v_s_561_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_674_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
uint8_t v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_672_; 
v___x_667_ = 6;
v___x_668_ = lean_byte_array_push(v_e_661_, v___x_667_);
v___x_669_ = l_Lean_ModuleUsage_Enc_nat(v___x_668_, v_i_659_);
v___x_670_ = l_Lean_ModuleUsage_Enc_name(v___x_669_, v_var_660_);
if (v_isShared_666_ == 0)
{
lean_ctor_set(v___x_665_, 0, v___x_670_);
v___x_672_ = v___x_665_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v___x_670_);
lean_ctor_set(v_reuseFailAlloc_673_, 1, v_tys_662_);
lean_ctor_set(v_reuseFailAlloc_673_, 2, v_ms_663_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
}
case 7:
{
lean_object* v_i_675_; lean_object* v_var_676_; lean_object* v_e_677_; lean_object* v_tys_678_; lean_object* v_ms_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_690_; 
v_i_675_ = lean_ctor_get(v_x_562_, 0);
lean_inc(v_i_675_);
v_var_676_ = lean_ctor_get(v_x_562_, 1);
lean_inc(v_var_676_);
lean_dec_ref_known(v_x_562_, 2);
v_e_677_ = lean_ctor_get(v_s_561_, 0);
v_tys_678_ = lean_ctor_get(v_s_561_, 1);
v_ms_679_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_690_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_690_ == 0)
{
v___x_681_ = v_s_561_;
v_isShared_682_ = v_isSharedCheck_690_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_ms_679_);
lean_inc(v_tys_678_);
lean_inc(v_e_677_);
lean_dec(v_s_561_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_690_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
uint8_t v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_688_; 
v___x_683_ = 7;
v___x_684_ = lean_byte_array_push(v_e_677_, v___x_683_);
v___x_685_ = l_Lean_ModuleUsage_Enc_nat(v___x_684_, v_i_675_);
v___x_686_ = l_Lean_ModuleUsage_Enc_name(v___x_685_, v_var_676_);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 0, v___x_686_);
v___x_688_ = v___x_681_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v___x_686_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v_tys_678_);
lean_ctor_set(v_reuseFailAlloc_689_, 2, v_ms_679_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
}
case 8:
{
lean_object* v_n_691_; lean_object* v_offset_692_; lean_object* v_var_693_; lean_object* v_e_694_; lean_object* v_tys_695_; lean_object* v_ms_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_708_; 
v_n_691_ = lean_ctor_get(v_x_562_, 0);
lean_inc(v_n_691_);
v_offset_692_ = lean_ctor_get(v_x_562_, 1);
lean_inc(v_offset_692_);
v_var_693_ = lean_ctor_get(v_x_562_, 2);
lean_inc(v_var_693_);
lean_dec_ref_known(v_x_562_, 3);
v_e_694_ = lean_ctor_get(v_s_561_, 0);
v_tys_695_ = lean_ctor_get(v_s_561_, 1);
v_ms_696_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_708_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_708_ == 0)
{
v___x_698_ = v_s_561_;
v_isShared_699_ = v_isSharedCheck_708_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_ms_696_);
lean_inc(v_tys_695_);
lean_inc(v_e_694_);
lean_dec(v_s_561_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_708_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
uint8_t v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_706_; 
v___x_700_ = 8;
v___x_701_ = lean_byte_array_push(v_e_694_, v___x_700_);
v___x_702_ = l_Lean_ModuleUsage_Enc_nat(v___x_701_, v_n_691_);
v___x_703_ = l_Lean_ModuleUsage_Enc_nat(v___x_702_, v_offset_692_);
v___x_704_ = l_Lean_ModuleUsage_Enc_name(v___x_703_, v_var_693_);
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 0, v___x_704_);
v___x_706_ = v___x_698_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_707_; 
v_reuseFailAlloc_707_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_707_, 0, v___x_704_);
lean_ctor_set(v_reuseFailAlloc_707_, 1, v_tys_695_);
lean_ctor_set(v_reuseFailAlloc_707_, 2, v_ms_696_);
v___x_706_ = v_reuseFailAlloc_707_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
return v___x_706_;
}
}
}
case 9:
{
lean_object* v_fn_709_; lean_object* v_args_710_; lean_object* v_e_711_; lean_object* v_tys_712_; lean_object* v_ms_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_725_; 
v_fn_709_ = lean_ctor_get(v_x_562_, 0);
lean_inc(v_fn_709_);
v_args_710_ = lean_ctor_get(v_x_562_, 1);
lean_inc_ref(v_args_710_);
lean_dec_ref_known(v_x_562_, 2);
v_e_711_ = lean_ctor_get(v_s_561_, 0);
v_tys_712_ = lean_ctor_get(v_s_561_, 1);
v_ms_713_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_725_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_725_ == 0)
{
v___x_715_ = v_s_561_;
v_isShared_716_ = v_isSharedCheck_725_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_ms_713_);
lean_inc(v_tys_712_);
lean_inc(v_e_711_);
lean_dec(v_s_561_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_725_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
uint8_t v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_722_; 
v___x_717_ = 9;
v___x_718_ = lean_byte_array_push(v_e_711_, v___x_717_);
lean_inc(v_fn_709_);
v___x_719_ = l_Lean_ModuleUsage_Enc_name(v___x_718_, v_fn_709_);
v___x_720_ = l_Lean_NameSet_insert(v_ms_713_, v_fn_709_);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 2, v___x_720_);
lean_ctor_set(v___x_715_, 0, v___x_719_);
v___x_722_ = v___x_715_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_719_);
lean_ctor_set(v_reuseFailAlloc_724_, 1, v_tys_712_);
lean_ctor_set(v_reuseFailAlloc_724_, 2, v___x_720_);
v___x_722_ = v_reuseFailAlloc_724_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
lean_object* v___x_723_; 
v___x_723_ = l_Lean_ModuleUsage_LCNFEnc_args(v_pu_560_, v___x_722_, v_args_710_);
lean_dec_ref(v_args_710_);
return v___x_723_;
}
}
}
case 10:
{
lean_object* v_fn_726_; lean_object* v_args_727_; lean_object* v_e_728_; lean_object* v_tys_729_; lean_object* v_ms_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_742_; 
v_fn_726_ = lean_ctor_get(v_x_562_, 0);
lean_inc(v_fn_726_);
v_args_727_ = lean_ctor_get(v_x_562_, 1);
lean_inc_ref(v_args_727_);
lean_dec_ref_known(v_x_562_, 2);
v_e_728_ = lean_ctor_get(v_s_561_, 0);
v_tys_729_ = lean_ctor_get(v_s_561_, 1);
v_ms_730_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_742_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_742_ == 0)
{
v___x_732_ = v_s_561_;
v_isShared_733_ = v_isSharedCheck_742_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_ms_730_);
lean_inc(v_tys_729_);
lean_inc(v_e_728_);
lean_dec(v_s_561_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_742_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
uint8_t v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_739_; 
v___x_734_ = 10;
v___x_735_ = lean_byte_array_push(v_e_728_, v___x_734_);
lean_inc(v_fn_726_);
v___x_736_ = l_Lean_ModuleUsage_Enc_name(v___x_735_, v_fn_726_);
v___x_737_ = l_Lean_NameSet_insert(v_ms_730_, v_fn_726_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 2, v___x_737_);
lean_ctor_set(v___x_732_, 0, v___x_736_);
v___x_739_ = v___x_732_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_736_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v_tys_729_);
lean_ctor_set(v_reuseFailAlloc_741_, 2, v___x_737_);
v___x_739_ = v_reuseFailAlloc_741_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
lean_object* v___x_740_; 
v___x_740_ = l_Lean_ModuleUsage_LCNFEnc_args(v_pu_560_, v___x_739_, v_args_727_);
lean_dec_ref(v_args_727_);
return v___x_740_;
}
}
}
case 11:
{
lean_object* v_n_743_; lean_object* v_var_744_; lean_object* v_e_745_; lean_object* v_tys_746_; lean_object* v_ms_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_758_; 
v_n_743_ = lean_ctor_get(v_x_562_, 0);
lean_inc(v_n_743_);
v_var_744_ = lean_ctor_get(v_x_562_, 1);
lean_inc(v_var_744_);
lean_dec_ref_known(v_x_562_, 2);
v_e_745_ = lean_ctor_get(v_s_561_, 0);
v_tys_746_ = lean_ctor_get(v_s_561_, 1);
v_ms_747_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_758_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_758_ == 0)
{
v___x_749_ = v_s_561_;
v_isShared_750_ = v_isSharedCheck_758_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_ms_747_);
lean_inc(v_tys_746_);
lean_inc(v_e_745_);
lean_dec(v_s_561_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_758_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
uint8_t v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_756_; 
v___x_751_ = 11;
v___x_752_ = lean_byte_array_push(v_e_745_, v___x_751_);
v___x_753_ = l_Lean_ModuleUsage_Enc_nat(v___x_752_, v_n_743_);
v___x_754_ = l_Lean_ModuleUsage_Enc_name(v___x_753_, v_var_744_);
if (v_isShared_750_ == 0)
{
lean_ctor_set(v___x_749_, 0, v___x_754_);
v___x_756_ = v___x_749_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v___x_754_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_tys_746_);
lean_ctor_set(v_reuseFailAlloc_757_, 2, v_ms_747_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
case 12:
{
lean_object* v_var_759_; lean_object* v_i_760_; uint8_t v_updateHeader_761_; lean_object* v_args_762_; lean_object* v_e_763_; lean_object* v_tys_764_; lean_object* v_ms_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_788_; 
v_var_759_ = lean_ctor_get(v_x_562_, 0);
lean_inc(v_var_759_);
v_i_760_ = lean_ctor_get(v_x_562_, 1);
lean_inc_ref(v_i_760_);
v_updateHeader_761_ = lean_ctor_get_uint8(v_x_562_, sizeof(void*)*3);
v_args_762_ = lean_ctor_get(v_x_562_, 2);
lean_inc_ref(v_args_762_);
lean_dec_ref_known(v_x_562_, 3);
v_e_763_ = lean_ctor_get(v_s_561_, 0);
v_tys_764_ = lean_ctor_get(v_s_561_, 1);
v_ms_765_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_788_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_788_ == 0)
{
v___x_767_ = v_s_561_;
v_isShared_768_ = v_isSharedCheck_788_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_ms_765_);
lean_inc(v_tys_764_);
lean_inc(v_e_763_);
lean_dec(v_s_561_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_788_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
uint8_t v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_773_; 
v___x_769_ = 12;
v___x_770_ = lean_byte_array_push(v_e_763_, v___x_769_);
v___x_771_ = l_Lean_ModuleUsage_Enc_name(v___x_770_, v_var_759_);
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 0, v___x_771_);
v___x_773_ = v___x_767_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v___x_771_);
lean_ctor_set(v_reuseFailAlloc_787_, 1, v_tys_764_);
lean_ctor_set(v_reuseFailAlloc_787_, 2, v_ms_765_);
v___x_773_ = v_reuseFailAlloc_787_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
lean_object* v___x_774_; lean_object* v_e_775_; lean_object* v_tys_776_; lean_object* v_ms_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_786_; 
v___x_774_ = l_Lean_ModuleUsage_LCNFEnc_ctorInfo(v___x_773_, v_i_760_);
v_e_775_ = lean_ctor_get(v___x_774_, 0);
v_tys_776_ = lean_ctor_get(v___x_774_, 1);
v_ms_777_ = lean_ctor_get(v___x_774_, 2);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_786_ == 0)
{
v___x_779_ = v___x_774_;
v_isShared_780_ = v_isSharedCheck_786_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_ms_777_);
lean_inc(v_tys_776_);
lean_inc(v_e_775_);
lean_dec(v___x_774_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_786_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_781_; lean_object* v___x_783_; 
v___x_781_ = l_Lean_ModuleUsage_Enc_bool(v_e_775_, v_updateHeader_761_);
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 0, v___x_781_);
v___x_783_ = v___x_779_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v___x_781_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v_tys_776_);
lean_ctor_set(v_reuseFailAlloc_785_, 2, v_ms_777_);
v___x_783_ = v_reuseFailAlloc_785_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
lean_object* v___x_784_; 
v___x_784_ = l_Lean_ModuleUsage_LCNFEnc_args(v_pu_560_, v___x_783_, v_args_762_);
lean_dec_ref(v_args_762_);
return v___x_784_;
}
}
}
}
}
case 13:
{
lean_object* v_ty_789_; lean_object* v_fvarId_790_; lean_object* v_e_791_; lean_object* v_tys_792_; lean_object* v_ms_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_804_; 
v_ty_789_ = lean_ctor_get(v_x_562_, 0);
lean_inc_ref(v_ty_789_);
v_fvarId_790_ = lean_ctor_get(v_x_562_, 1);
lean_inc(v_fvarId_790_);
lean_dec_ref_known(v_x_562_, 2);
v_e_791_ = lean_ctor_get(v_s_561_, 0);
v_tys_792_ = lean_ctor_get(v_s_561_, 1);
v_ms_793_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_804_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_804_ == 0)
{
v___x_795_ = v_s_561_;
v_isShared_796_ = v_isSharedCheck_804_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_ms_793_);
lean_inc(v_tys_792_);
lean_inc(v_e_791_);
lean_dec(v_s_561_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_804_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
uint8_t v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_802_; 
v___x_797_ = 13;
v___x_798_ = lean_byte_array_push(v_e_791_, v___x_797_);
v___x_799_ = lean_array_push(v_tys_792_, v_ty_789_);
v___x_800_ = l_Lean_ModuleUsage_Enc_name(v___x_798_, v_fvarId_790_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 1, v___x_799_);
lean_ctor_set(v___x_795_, 0, v___x_800_);
v___x_802_ = v___x_795_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v___x_800_);
lean_ctor_set(v_reuseFailAlloc_803_, 1, v___x_799_);
lean_ctor_set(v_reuseFailAlloc_803_, 2, v_ms_793_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
case 14:
{
lean_object* v_fvarId_805_; lean_object* v_e_806_; lean_object* v_tys_807_; lean_object* v_ms_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_818_; 
v_fvarId_805_ = lean_ctor_get(v_x_562_, 0);
lean_inc(v_fvarId_805_);
lean_dec_ref_known(v_x_562_, 1);
v_e_806_ = lean_ctor_get(v_s_561_, 0);
v_tys_807_ = lean_ctor_get(v_s_561_, 1);
v_ms_808_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_818_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_818_ == 0)
{
v___x_810_ = v_s_561_;
v_isShared_811_ = v_isSharedCheck_818_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_ms_808_);
lean_inc(v_tys_807_);
lean_inc(v_e_806_);
lean_dec(v_s_561_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_818_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
uint8_t v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_816_; 
v___x_812_ = 14;
v___x_813_ = lean_byte_array_push(v_e_806_, v___x_812_);
v___x_814_ = l_Lean_ModuleUsage_Enc_name(v___x_813_, v_fvarId_805_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 0, v___x_814_);
v___x_816_ = v___x_810_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v___x_814_);
lean_ctor_set(v_reuseFailAlloc_817_, 1, v_tys_807_);
lean_ctor_set(v_reuseFailAlloc_817_, 2, v_ms_808_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
default: 
{
lean_object* v_fvarId_819_; lean_object* v_e_820_; lean_object* v_tys_821_; lean_object* v_ms_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_832_; 
v_fvarId_819_ = lean_ctor_get(v_x_562_, 0);
lean_inc(v_fvarId_819_);
lean_dec_ref_known(v_x_562_, 1);
v_e_820_ = lean_ctor_get(v_s_561_, 0);
v_tys_821_ = lean_ctor_get(v_s_561_, 1);
v_ms_822_ = lean_ctor_get(v_s_561_, 2);
v_isSharedCheck_832_ = !lean_is_exclusive(v_s_561_);
if (v_isSharedCheck_832_ == 0)
{
v___x_824_ = v_s_561_;
v_isShared_825_ = v_isSharedCheck_832_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_ms_822_);
lean_inc(v_tys_821_);
lean_inc(v_e_820_);
lean_dec(v_s_561_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_832_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
uint8_t v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_830_; 
v___x_826_ = 15;
v___x_827_ = lean_byte_array_push(v_e_820_, v___x_826_);
v___x_828_ = l_Lean_ModuleUsage_Enc_name(v___x_827_, v_fvarId_819_);
if (v_isShared_825_ == 0)
{
lean_ctor_set(v___x_824_, 0, v___x_828_);
v___x_830_ = v___x_824_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v___x_828_);
lean_ctor_set(v_reuseFailAlloc_831_, 1, v_tys_821_);
lean_ctor_set(v_reuseFailAlloc_831_, 2, v_ms_822_);
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
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_letValue___boxed(lean_object* v_pu_833_, lean_object* v_s_834_, lean_object* v_x_835_){
_start:
{
uint8_t v_pu_boxed_836_; lean_object* v_res_837_; 
v_pu_boxed_836_ = lean_unbox(v_pu_833_);
v_res_837_ = l_Lean_ModuleUsage_LCNFEnc_letValue(v_pu_boxed_836_, v_s_834_, v_x_835_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_param___redArg(lean_object* v_s_838_, lean_object* v_p_839_){
_start:
{
lean_object* v_fvarId_840_; lean_object* v_binderName_841_; lean_object* v_type_842_; uint8_t v_borrow_843_; lean_object* v_e_844_; lean_object* v_tys_845_; lean_object* v_ms_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_857_; 
v_fvarId_840_ = lean_ctor_get(v_p_839_, 0);
lean_inc(v_fvarId_840_);
v_binderName_841_ = lean_ctor_get(v_p_839_, 1);
lean_inc(v_binderName_841_);
v_type_842_ = lean_ctor_get(v_p_839_, 2);
lean_inc_ref(v_type_842_);
v_borrow_843_ = lean_ctor_get_uint8(v_p_839_, sizeof(void*)*3);
lean_dec_ref(v_p_839_);
v_e_844_ = lean_ctor_get(v_s_838_, 0);
v_tys_845_ = lean_ctor_get(v_s_838_, 1);
v_ms_846_ = lean_ctor_get(v_s_838_, 2);
v_isSharedCheck_857_ = !lean_is_exclusive(v_s_838_);
if (v_isSharedCheck_857_ == 0)
{
v___x_848_ = v_s_838_;
v_isShared_849_ = v_isSharedCheck_857_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_ms_846_);
lean_inc(v_tys_845_);
lean_inc(v_e_844_);
lean_dec(v_s_838_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_857_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_855_; 
v___x_850_ = l_Lean_ModuleUsage_Enc_name(v_e_844_, v_fvarId_840_);
v___x_851_ = l_Lean_ModuleUsage_Enc_name(v___x_850_, v_binderName_841_);
v___x_852_ = lean_array_push(v_tys_845_, v_type_842_);
v___x_853_ = l_Lean_ModuleUsage_Enc_bool(v___x_851_, v_borrow_843_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 1, v___x_852_);
lean_ctor_set(v___x_848_, 0, v___x_853_);
v___x_855_ = v___x_848_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_856_, 1, v___x_852_);
lean_ctor_set(v_reuseFailAlloc_856_, 2, v_ms_846_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_param(uint8_t v_pu_858_, lean_object* v_s_859_, lean_object* v_p_860_){
_start:
{
lean_object* v___x_861_; 
v___x_861_ = l_Lean_ModuleUsage_LCNFEnc_param___redArg(v_s_859_, v_p_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_param___boxed(lean_object* v_pu_862_, lean_object* v_s_863_, lean_object* v_p_864_){
_start:
{
uint8_t v_pu_boxed_865_; lean_object* v_res_866_; 
v_pu_boxed_865_ = lean_unbox(v_pu_862_);
v_res_866_ = l_Lean_ModuleUsage_LCNFEnc_param(v_pu_boxed_865_, v_s_863_, v_p_864_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_params_spec__0___redArg(lean_object* v_as_867_, size_t v_i_868_, size_t v_stop_869_, lean_object* v_b_870_){
_start:
{
uint8_t v___x_871_; 
v___x_871_ = lean_usize_dec_eq(v_i_868_, v_stop_869_);
if (v___x_871_ == 0)
{
lean_object* v___x_872_; lean_object* v___x_873_; size_t v___x_874_; size_t v___x_875_; 
v___x_872_ = lean_array_uget_borrowed(v_as_867_, v_i_868_);
lean_inc(v___x_872_);
v___x_873_ = l_Lean_ModuleUsage_LCNFEnc_param___redArg(v_b_870_, v___x_872_);
v___x_874_ = ((size_t)1ULL);
v___x_875_ = lean_usize_add(v_i_868_, v___x_874_);
v_i_868_ = v___x_875_;
v_b_870_ = v___x_873_;
goto _start;
}
else
{
return v_b_870_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_params_spec__0___redArg___boxed(lean_object* v_as_877_, lean_object* v_i_878_, lean_object* v_stop_879_, lean_object* v_b_880_){
_start:
{
size_t v_i_boxed_881_; size_t v_stop_boxed_882_; lean_object* v_res_883_; 
v_i_boxed_881_ = lean_unbox_usize(v_i_878_);
lean_dec(v_i_878_);
v_stop_boxed_882_ = lean_unbox_usize(v_stop_879_);
lean_dec(v_stop_879_);
v_res_883_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_params_spec__0___redArg(v_as_877_, v_i_boxed_881_, v_stop_boxed_882_, v_b_880_);
lean_dec_ref(v_as_877_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_params(uint8_t v_pu_884_, lean_object* v_s_885_, lean_object* v_ps_886_){
_start:
{
lean_object* v_e_887_; lean_object* v_tys_888_; lean_object* v_ms_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_903_; 
v_e_887_ = lean_ctor_get(v_s_885_, 0);
v_tys_888_ = lean_ctor_get(v_s_885_, 1);
v_ms_889_ = lean_ctor_get(v_s_885_, 2);
v_isSharedCheck_903_ = !lean_is_exclusive(v_s_885_);
if (v_isSharedCheck_903_ == 0)
{
v___x_891_ = v_s_885_;
v_isShared_892_ = v_isSharedCheck_903_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_ms_889_);
lean_inc(v_tys_888_);
lean_inc(v_e_887_);
lean_dec(v_s_885_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_903_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_896_; 
v___x_893_ = lean_array_get_size(v_ps_886_);
v___x_894_ = l_Lean_ModuleUsage_Enc_nat(v_e_887_, v___x_893_);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v___x_894_);
v___x_896_ = v___x_891_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_894_);
lean_ctor_set(v_reuseFailAlloc_902_, 1, v_tys_888_);
lean_ctor_set(v_reuseFailAlloc_902_, 2, v_ms_889_);
v___x_896_ = v_reuseFailAlloc_902_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
lean_object* v___x_897_; uint8_t v___x_898_; 
v___x_897_ = lean_unsigned_to_nat(0u);
v___x_898_ = lean_nat_dec_lt(v___x_897_, v___x_893_);
if (v___x_898_ == 0)
{
return v___x_896_;
}
else
{
size_t v___x_899_; size_t v___x_900_; lean_object* v___x_901_; 
v___x_899_ = ((size_t)0ULL);
v___x_900_ = lean_usize_of_nat(v___x_893_);
v___x_901_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_params_spec__0___redArg(v_ps_886_, v___x_899_, v___x_900_, v___x_896_);
return v___x_901_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_params___boxed(lean_object* v_pu_904_, lean_object* v_s_905_, lean_object* v_ps_906_){
_start:
{
uint8_t v_pu_boxed_907_; lean_object* v_res_908_; 
v_pu_boxed_907_ = lean_unbox(v_pu_904_);
v_res_908_ = l_Lean_ModuleUsage_LCNFEnc_params(v_pu_boxed_907_, v_s_905_, v_ps_906_);
lean_dec_ref(v_ps_906_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_params_spec__0(uint8_t v_pu_909_, lean_object* v_as_910_, size_t v_i_911_, size_t v_stop_912_, lean_object* v_b_913_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_params_spec__0___redArg(v_as_910_, v_i_911_, v_stop_912_, v_b_913_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_params_spec__0___boxed(lean_object* v_pu_915_, lean_object* v_as_916_, lean_object* v_i_917_, lean_object* v_stop_918_, lean_object* v_b_919_){
_start:
{
uint8_t v_pu_boxed_920_; size_t v_i_boxed_921_; size_t v_stop_boxed_922_; lean_object* v_res_923_; 
v_pu_boxed_920_ = lean_unbox(v_pu_915_);
v_i_boxed_921_ = lean_unbox_usize(v_i_917_);
lean_dec(v_i_917_);
v_stop_boxed_922_ = lean_unbox_usize(v_stop_918_);
lean_dec(v_stop_918_);
v_res_923_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_params_spec__0(v_pu_boxed_920_, v_as_916_, v_i_boxed_921_, v_stop_boxed_922_, v_b_919_);
lean_dec_ref(v_as_916_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_code___lam__0(lean_object* v___y_924_, lean_object* v___y_925_){
_start:
{
lean_object* v_e_926_; lean_object* v_tys_927_; lean_object* v_ms_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_936_; 
v_e_926_ = lean_ctor_get(v___y_924_, 0);
v_tys_927_ = lean_ctor_get(v___y_924_, 1);
v_ms_928_ = lean_ctor_get(v___y_924_, 2);
v_isSharedCheck_936_ = !lean_is_exclusive(v___y_924_);
if (v_isSharedCheck_936_ == 0)
{
v___x_930_ = v___y_924_;
v_isShared_931_ = v_isSharedCheck_936_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_ms_928_);
lean_inc(v_tys_927_);
lean_inc(v_e_926_);
lean_dec(v___y_924_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_936_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_932_; lean_object* v___x_934_; 
v___x_932_ = l_Lean_ModuleUsage_Enc_nat(v_e_926_, v___y_925_);
if (v_isShared_931_ == 0)
{
lean_ctor_set(v___x_930_, 0, v___x_932_);
v___x_934_ = v___x_930_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v___x_932_);
lean_ctor_set(v_reuseFailAlloc_935_, 1, v_tys_927_);
lean_ctor_set(v_reuseFailAlloc_935_, 2, v_ms_928_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_funDecl(uint8_t v_pu_937_, lean_object* v_s_938_, lean_object* v_x_939_){
_start:
{
lean_object* v_fvarId_940_; lean_object* v_binderName_941_; lean_object* v_params_942_; lean_object* v_type_943_; lean_object* v_value_944_; lean_object* v_e_945_; lean_object* v_tys_946_; lean_object* v_ms_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_969_; 
v_fvarId_940_ = lean_ctor_get(v_x_939_, 0);
lean_inc(v_fvarId_940_);
v_binderName_941_ = lean_ctor_get(v_x_939_, 1);
lean_inc(v_binderName_941_);
v_params_942_ = lean_ctor_get(v_x_939_, 2);
lean_inc_ref(v_params_942_);
v_type_943_ = lean_ctor_get(v_x_939_, 3);
lean_inc_ref(v_type_943_);
v_value_944_ = lean_ctor_get(v_x_939_, 4);
lean_inc_ref(v_value_944_);
lean_dec_ref(v_x_939_);
v_e_945_ = lean_ctor_get(v_s_938_, 0);
v_tys_946_ = lean_ctor_get(v_s_938_, 1);
v_ms_947_ = lean_ctor_get(v_s_938_, 2);
v_isSharedCheck_969_ = !lean_is_exclusive(v_s_938_);
if (v_isSharedCheck_969_ == 0)
{
v___x_949_ = v_s_938_;
v_isShared_950_ = v_isSharedCheck_969_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_ms_947_);
lean_inc(v_tys_946_);
lean_inc(v_e_945_);
lean_dec(v_s_938_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_969_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_954_; 
v___x_951_ = l_Lean_ModuleUsage_Enc_name(v_e_945_, v_fvarId_940_);
v___x_952_ = l_Lean_ModuleUsage_Enc_name(v___x_951_, v_binderName_941_);
if (v_isShared_950_ == 0)
{
lean_ctor_set(v___x_949_, 0, v___x_952_);
v___x_954_ = v___x_949_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v___x_952_);
lean_ctor_set(v_reuseFailAlloc_968_, 1, v_tys_946_);
lean_ctor_set(v_reuseFailAlloc_968_, 2, v_ms_947_);
v___x_954_ = v_reuseFailAlloc_968_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
lean_object* v___x_955_; lean_object* v_e_956_; lean_object* v_tys_957_; lean_object* v_ms_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_967_; 
v___x_955_ = l_Lean_ModuleUsage_LCNFEnc_params(v_pu_937_, v___x_954_, v_params_942_);
lean_dec_ref(v_params_942_);
v_e_956_ = lean_ctor_get(v___x_955_, 0);
v_tys_957_ = lean_ctor_get(v___x_955_, 1);
v_ms_958_ = lean_ctor_get(v___x_955_, 2);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_967_ == 0)
{
v___x_960_ = v___x_955_;
v_isShared_961_ = v_isSharedCheck_967_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_ms_958_);
lean_inc(v_tys_957_);
lean_inc(v_e_956_);
lean_dec(v___x_955_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_967_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_962_; lean_object* v___x_964_; 
v___x_962_ = lean_array_push(v_tys_957_, v_type_943_);
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 1, v___x_962_);
v___x_964_ = v___x_960_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_e_956_);
lean_ctor_set(v_reuseFailAlloc_966_, 1, v___x_962_);
lean_ctor_set(v_reuseFailAlloc_966_, 2, v_ms_958_);
v___x_964_ = v_reuseFailAlloc_966_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
lean_object* v___x_965_; 
v___x_965_ = l_Lean_ModuleUsage_LCNFEnc_code(v_pu_937_, v___x_964_, v_value_944_);
return v___x_965_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_casesE(uint8_t v_pu_970_, lean_object* v_s_971_, lean_object* v_x_972_){
_start:
{
lean_object* v_typeName_973_; lean_object* v_resultType_974_; lean_object* v_discr_975_; lean_object* v_alts_976_; lean_object* v_e_977_; lean_object* v_tys_978_; lean_object* v_ms_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_997_; 
v_typeName_973_ = lean_ctor_get(v_x_972_, 0);
lean_inc(v_typeName_973_);
v_resultType_974_ = lean_ctor_get(v_x_972_, 1);
lean_inc_ref(v_resultType_974_);
v_discr_975_ = lean_ctor_get(v_x_972_, 2);
lean_inc(v_discr_975_);
v_alts_976_ = lean_ctor_get(v_x_972_, 3);
lean_inc_ref(v_alts_976_);
lean_dec_ref(v_x_972_);
v_e_977_ = lean_ctor_get(v_s_971_, 0);
v_tys_978_ = lean_ctor_get(v_s_971_, 1);
v_ms_979_ = lean_ctor_get(v_s_971_, 2);
v_isSharedCheck_997_ = !lean_is_exclusive(v_s_971_);
if (v_isSharedCheck_997_ == 0)
{
v___x_981_ = v_s_971_;
v_isShared_982_ = v_isSharedCheck_997_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_ms_979_);
lean_inc(v_tys_978_);
lean_inc(v_e_977_);
lean_dec(v_s_971_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_997_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_990_; 
lean_inc(v_typeName_973_);
v___x_983_ = l_Lean_ModuleUsage_Enc_name(v_e_977_, v_typeName_973_);
v___x_984_ = l_Lean_NameSet_insert(v_ms_979_, v_typeName_973_);
v___x_985_ = lean_array_push(v_tys_978_, v_resultType_974_);
v___x_986_ = l_Lean_ModuleUsage_Enc_name(v___x_983_, v_discr_975_);
v___x_987_ = lean_array_get_size(v_alts_976_);
v___x_988_ = l_Lean_ModuleUsage_Enc_nat(v___x_986_, v___x_987_);
if (v_isShared_982_ == 0)
{
lean_ctor_set(v___x_981_, 2, v___x_984_);
lean_ctor_set(v___x_981_, 1, v___x_985_);
lean_ctor_set(v___x_981_, 0, v___x_988_);
v___x_990_ = v___x_981_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v___x_988_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v___x_985_);
lean_ctor_set(v_reuseFailAlloc_996_, 2, v___x_984_);
v___x_990_ = v_reuseFailAlloc_996_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
lean_object* v___x_991_; uint8_t v___x_992_; 
v___x_991_ = lean_unsigned_to_nat(0u);
v___x_992_ = lean_nat_dec_lt(v___x_991_, v___x_987_);
if (v___x_992_ == 0)
{
lean_dec_ref(v_alts_976_);
return v___x_990_;
}
else
{
size_t v___x_993_; size_t v___x_994_; lean_object* v___x_995_; 
v___x_993_ = ((size_t)0ULL);
v___x_994_ = lean_usize_of_nat(v___x_987_);
v___x_995_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_casesE_spec__1(v_pu_970_, v_alts_976_, v___x_993_, v___x_994_, v___x_990_);
lean_dec_ref(v_alts_976_);
return v___x_995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_code(uint8_t v_pu_999_, lean_object* v_s_1000_, lean_object* v_x_1001_){
_start:
{
switch(lean_obj_tag(v_x_1001_))
{
case 0:
{
lean_object* v_decl_1002_; lean_object* v_k_1003_; lean_object* v_fvarId_1004_; lean_object* v_binderName_1005_; lean_object* v_type_1006_; lean_object* v_value_1007_; lean_object* v_e_1008_; lean_object* v_tys_1009_; lean_object* v_ms_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1024_; 
v_decl_1002_ = lean_ctor_get(v_x_1001_, 0);
lean_inc_ref(v_decl_1002_);
v_k_1003_ = lean_ctor_get(v_x_1001_, 1);
lean_inc_ref(v_k_1003_);
lean_dec_ref_known(v_x_1001_, 2);
v_fvarId_1004_ = lean_ctor_get(v_decl_1002_, 0);
lean_inc(v_fvarId_1004_);
v_binderName_1005_ = lean_ctor_get(v_decl_1002_, 1);
lean_inc(v_binderName_1005_);
v_type_1006_ = lean_ctor_get(v_decl_1002_, 2);
lean_inc_ref(v_type_1006_);
v_value_1007_ = lean_ctor_get(v_decl_1002_, 3);
lean_inc(v_value_1007_);
lean_dec_ref(v_decl_1002_);
v_e_1008_ = lean_ctor_get(v_s_1000_, 0);
v_tys_1009_ = lean_ctor_get(v_s_1000_, 1);
v_ms_1010_ = lean_ctor_get(v_s_1000_, 2);
v_isSharedCheck_1024_ = !lean_is_exclusive(v_s_1000_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1012_ = v_s_1000_;
v_isShared_1013_ = v_isSharedCheck_1024_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_ms_1010_);
lean_inc(v_tys_1009_);
lean_inc(v_e_1008_);
lean_dec(v_s_1000_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1024_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
uint8_t v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1020_; 
v___x_1014_ = 0;
v___x_1015_ = lean_byte_array_push(v_e_1008_, v___x_1014_);
v___x_1016_ = l_Lean_ModuleUsage_Enc_name(v___x_1015_, v_fvarId_1004_);
v___x_1017_ = l_Lean_ModuleUsage_Enc_name(v___x_1016_, v_binderName_1005_);
v___x_1018_ = lean_array_push(v_tys_1009_, v_type_1006_);
if (v_isShared_1013_ == 0)
{
lean_ctor_set(v___x_1012_, 1, v___x_1018_);
lean_ctor_set(v___x_1012_, 0, v___x_1017_);
v___x_1020_ = v___x_1012_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1017_);
lean_ctor_set(v_reuseFailAlloc_1023_, 1, v___x_1018_);
lean_ctor_set(v_reuseFailAlloc_1023_, 2, v_ms_1010_);
v___x_1020_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
lean_object* v___x_1021_; 
v___x_1021_ = l_Lean_ModuleUsage_LCNFEnc_letValue(v_pu_999_, v___x_1020_, v_value_1007_);
v_s_1000_ = v___x_1021_;
v_x_1001_ = v_k_1003_;
goto _start;
}
}
}
case 1:
{
lean_object* v_decl_1025_; lean_object* v_k_1026_; lean_object* v_e_1027_; lean_object* v_tys_1028_; lean_object* v_ms_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1040_; 
v_decl_1025_ = lean_ctor_get(v_x_1001_, 0);
lean_inc_ref(v_decl_1025_);
v_k_1026_ = lean_ctor_get(v_x_1001_, 1);
lean_inc_ref(v_k_1026_);
lean_dec_ref_known(v_x_1001_, 2);
v_e_1027_ = lean_ctor_get(v_s_1000_, 0);
v_tys_1028_ = lean_ctor_get(v_s_1000_, 1);
v_ms_1029_ = lean_ctor_get(v_s_1000_, 2);
v_isSharedCheck_1040_ = !lean_is_exclusive(v_s_1000_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1031_ = v_s_1000_;
v_isShared_1032_ = v_isSharedCheck_1040_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_ms_1029_);
lean_inc(v_tys_1028_);
lean_inc(v_e_1027_);
lean_dec(v_s_1000_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1040_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
uint8_t v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1036_; 
v___x_1033_ = 1;
v___x_1034_ = lean_byte_array_push(v_e_1027_, v___x_1033_);
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v___x_1034_);
v___x_1036_ = v___x_1031_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v___x_1034_);
lean_ctor_set(v_reuseFailAlloc_1039_, 1, v_tys_1028_);
lean_ctor_set(v_reuseFailAlloc_1039_, 2, v_ms_1029_);
v___x_1036_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
lean_object* v___x_1037_; 
v___x_1037_ = l_Lean_ModuleUsage_LCNFEnc_funDecl(v_pu_999_, v___x_1036_, v_decl_1025_);
v_s_1000_ = v___x_1037_;
v_x_1001_ = v_k_1026_;
goto _start;
}
}
}
case 2:
{
lean_object* v_decl_1041_; lean_object* v_k_1042_; lean_object* v_e_1043_; lean_object* v_tys_1044_; lean_object* v_ms_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1056_; 
v_decl_1041_ = lean_ctor_get(v_x_1001_, 0);
lean_inc_ref(v_decl_1041_);
v_k_1042_ = lean_ctor_get(v_x_1001_, 1);
lean_inc_ref(v_k_1042_);
lean_dec_ref_known(v_x_1001_, 2);
v_e_1043_ = lean_ctor_get(v_s_1000_, 0);
v_tys_1044_ = lean_ctor_get(v_s_1000_, 1);
v_ms_1045_ = lean_ctor_get(v_s_1000_, 2);
v_isSharedCheck_1056_ = !lean_is_exclusive(v_s_1000_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1047_ = v_s_1000_;
v_isShared_1048_ = v_isSharedCheck_1056_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_ms_1045_);
lean_inc(v_tys_1044_);
lean_inc(v_e_1043_);
lean_dec(v_s_1000_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1056_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
uint8_t v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1052_; 
v___x_1049_ = 2;
v___x_1050_ = lean_byte_array_push(v_e_1043_, v___x_1049_);
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 0, v___x_1050_);
v___x_1052_ = v___x_1047_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v___x_1050_);
lean_ctor_set(v_reuseFailAlloc_1055_, 1, v_tys_1044_);
lean_ctor_set(v_reuseFailAlloc_1055_, 2, v_ms_1045_);
v___x_1052_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
lean_object* v___x_1053_; 
v___x_1053_ = l_Lean_ModuleUsage_LCNFEnc_funDecl(v_pu_999_, v___x_1052_, v_decl_1041_);
v_s_1000_ = v___x_1053_;
v_x_1001_ = v_k_1042_;
goto _start;
}
}
}
case 3:
{
lean_object* v_fvarId_1057_; lean_object* v_args_1058_; lean_object* v_e_1059_; lean_object* v_tys_1060_; lean_object* v_ms_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1072_; 
v_fvarId_1057_ = lean_ctor_get(v_x_1001_, 0);
lean_inc(v_fvarId_1057_);
v_args_1058_ = lean_ctor_get(v_x_1001_, 1);
lean_inc_ref(v_args_1058_);
lean_dec_ref_known(v_x_1001_, 2);
v_e_1059_ = lean_ctor_get(v_s_1000_, 0);
v_tys_1060_ = lean_ctor_get(v_s_1000_, 1);
v_ms_1061_ = lean_ctor_get(v_s_1000_, 2);
v_isSharedCheck_1072_ = !lean_is_exclusive(v_s_1000_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1063_ = v_s_1000_;
v_isShared_1064_ = v_isSharedCheck_1072_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_ms_1061_);
lean_inc(v_tys_1060_);
lean_inc(v_e_1059_);
lean_dec(v_s_1000_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1072_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
uint8_t v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1069_; 
v___x_1065_ = 3;
v___x_1066_ = lean_byte_array_push(v_e_1059_, v___x_1065_);
v___x_1067_ = l_Lean_ModuleUsage_Enc_name(v___x_1066_, v_fvarId_1057_);
if (v_isShared_1064_ == 0)
{
lean_ctor_set(v___x_1063_, 0, v___x_1067_);
v___x_1069_ = v___x_1063_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v___x_1067_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v_tys_1060_);
lean_ctor_set(v_reuseFailAlloc_1071_, 2, v_ms_1061_);
v___x_1069_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_Lean_ModuleUsage_LCNFEnc_args(v_pu_999_, v___x_1069_, v_args_1058_);
lean_dec_ref(v_args_1058_);
return v___x_1070_;
}
}
}
case 4:
{
lean_object* v_cases_1073_; lean_object* v_e_1074_; lean_object* v_tys_1075_; lean_object* v_ms_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1086_; 
v_cases_1073_ = lean_ctor_get(v_x_1001_, 0);
lean_inc_ref(v_cases_1073_);
lean_dec_ref_known(v_x_1001_, 1);
v_e_1074_ = lean_ctor_get(v_s_1000_, 0);
v_tys_1075_ = lean_ctor_get(v_s_1000_, 1);
v_ms_1076_ = lean_ctor_get(v_s_1000_, 2);
v_isSharedCheck_1086_ = !lean_is_exclusive(v_s_1000_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1078_ = v_s_1000_;
v_isShared_1079_ = v_isSharedCheck_1086_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_ms_1076_);
lean_inc(v_tys_1075_);
lean_inc(v_e_1074_);
lean_dec(v_s_1000_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1086_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
uint8_t v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1083_; 
v___x_1080_ = 4;
v___x_1081_ = lean_byte_array_push(v_e_1074_, v___x_1080_);
if (v_isShared_1079_ == 0)
{
lean_ctor_set(v___x_1078_, 0, v___x_1081_);
v___x_1083_ = v___x_1078_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v___x_1081_);
lean_ctor_set(v_reuseFailAlloc_1085_, 1, v_tys_1075_);
lean_ctor_set(v_reuseFailAlloc_1085_, 2, v_ms_1076_);
v___x_1083_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
lean_object* v___x_1084_; 
v___x_1084_ = l_Lean_ModuleUsage_LCNFEnc_casesE(v_pu_999_, v___x_1083_, v_cases_1073_);
return v___x_1084_;
}
}
}
case 5:
{
lean_object* v_fvarId_1087_; lean_object* v_e_1088_; lean_object* v_tys_1089_; lean_object* v_ms_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1100_; 
v_fvarId_1087_ = lean_ctor_get(v_x_1001_, 0);
lean_inc(v_fvarId_1087_);
lean_dec_ref_known(v_x_1001_, 1);
v_e_1088_ = lean_ctor_get(v_s_1000_, 0);
v_tys_1089_ = lean_ctor_get(v_s_1000_, 1);
v_ms_1090_ = lean_ctor_get(v_s_1000_, 2);
v_isSharedCheck_1100_ = !lean_is_exclusive(v_s_1000_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1092_ = v_s_1000_;
v_isShared_1093_ = v_isSharedCheck_1100_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_ms_1090_);
lean_inc(v_tys_1089_);
lean_inc(v_e_1088_);
lean_dec(v_s_1000_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1100_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
uint8_t v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1098_; 
v___x_1094_ = 5;
v___x_1095_ = lean_byte_array_push(v_e_1088_, v___x_1094_);
v___x_1096_ = l_Lean_ModuleUsage_Enc_name(v___x_1095_, v_fvarId_1087_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 0, v___x_1096_);
v___x_1098_ = v___x_1092_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1096_);
lean_ctor_set(v_reuseFailAlloc_1099_, 1, v_tys_1089_);
lean_ctor_set(v_reuseFailAlloc_1099_, 2, v_ms_1090_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
case 6:
{
lean_object* v_type_1101_; lean_object* v_e_1102_; lean_object* v_tys_1103_; lean_object* v_ms_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1114_; 
v_type_1101_ = lean_ctor_get(v_x_1001_, 0);
lean_inc_ref(v_type_1101_);
lean_dec_ref_known(v_x_1001_, 1);
v_e_1102_ = lean_ctor_get(v_s_1000_, 0);
v_tys_1103_ = lean_ctor_get(v_s_1000_, 1);
v_ms_1104_ = lean_ctor_get(v_s_1000_, 2);
v_isSharedCheck_1114_ = !lean_is_exclusive(v_s_1000_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1106_ = v_s_1000_;
v_isShared_1107_ = v_isSharedCheck_1114_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_ms_1104_);
lean_inc(v_tys_1103_);
lean_inc(v_e_1102_);
lean_dec(v_s_1000_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1114_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
uint8_t v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1112_; 
v___x_1108_ = 6;
v___x_1109_ = lean_byte_array_push(v_e_1102_, v___x_1108_);
v___x_1110_ = lean_array_push(v_tys_1103_, v_type_1101_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 1, v___x_1110_);
lean_ctor_set(v___x_1106_, 0, v___x_1109_);
v___x_1112_ = v___x_1106_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v___x_1109_);
lean_ctor_set(v_reuseFailAlloc_1113_, 1, v___x_1110_);
lean_ctor_set(v_reuseFailAlloc_1113_, 2, v_ms_1104_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
case 7:
{
lean_object* v_fvarId_1115_; lean_object* v_i_1116_; lean_object* v_y_1117_; lean_object* v_k_1118_; lean_object* v_e_1119_; lean_object* v_tys_1120_; lean_object* v_ms_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1134_; 
v_fvarId_1115_ = lean_ctor_get(v_x_1001_, 0);
lean_inc(v_fvarId_1115_);
v_i_1116_ = lean_ctor_get(v_x_1001_, 1);
lean_inc(v_i_1116_);
v_y_1117_ = lean_ctor_get(v_x_1001_, 2);
lean_inc(v_y_1117_);
v_k_1118_ = lean_ctor_get(v_x_1001_, 3);
lean_inc_ref(v_k_1118_);
lean_dec_ref_known(v_x_1001_, 4);
v_e_1119_ = lean_ctor_get(v_s_1000_, 0);
v_tys_1120_ = lean_ctor_get(v_s_1000_, 1);
v_ms_1121_ = lean_ctor_get(v_s_1000_, 2);
v_isSharedCheck_1134_ = !lean_is_exclusive(v_s_1000_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1123_ = v_s_1000_;
v_isShared_1124_ = v_isSharedCheck_1134_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_ms_1121_);
lean_inc(v_tys_1120_);
lean_inc(v_e_1119_);
lean_dec(v_s_1000_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1134_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
uint8_t v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1130_; 
v___x_1125_ = 7;
v___x_1126_ = lean_byte_array_push(v_e_1119_, v___x_1125_);
v___x_1127_ = l_Lean_ModuleUsage_Enc_name(v___x_1126_, v_fvarId_1115_);
v___x_1128_ = l_Lean_ModuleUsage_Enc_nat(v___x_1127_, v_i_1116_);
if (v_isShared_1124_ == 0)
{
lean_ctor_set(v___x_1123_, 0, v___x_1128_);
v___x_1130_ = v___x_1123_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1128_);
lean_ctor_set(v_reuseFailAlloc_1133_, 1, v_tys_1120_);
lean_ctor_set(v_reuseFailAlloc_1133_, 2, v_ms_1121_);
v___x_1130_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1131_; 
v___x_1131_ = l_Lean_ModuleUsage_LCNFEnc_arg___redArg(v___x_1130_, v_y_1117_);
v_s_1000_ = v___x_1131_;
v_x_1001_ = v_k_1118_;
goto _start;
}
}
}
case 8:
{
lean_object* v_fvarId_1135_; lean_object* v_i_1136_; lean_object* v_y_1137_; lean_object* v_k_1138_; lean_object* v_e_1139_; lean_object* v_tys_1140_; lean_object* v_ms_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1154_; 
v_fvarId_1135_ = lean_ctor_get(v_x_1001_, 0);
lean_inc(v_fvarId_1135_);
v_i_1136_ = lean_ctor_get(v_x_1001_, 1);
lean_inc(v_i_1136_);
v_y_1137_ = lean_ctor_get(v_x_1001_, 2);
lean_inc(v_y_1137_);
v_k_1138_ = lean_ctor_get(v_x_1001_, 3);
lean_inc_ref(v_k_1138_);
lean_dec_ref_known(v_x_1001_, 4);
v_e_1139_ = lean_ctor_get(v_s_1000_, 0);
v_tys_1140_ = lean_ctor_get(v_s_1000_, 1);
v_ms_1141_ = lean_ctor_get(v_s_1000_, 2);
v_isSharedCheck_1154_ = !lean_is_exclusive(v_s_1000_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1143_ = v_s_1000_;
v_isShared_1144_ = v_isSharedCheck_1154_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_ms_1141_);
lean_inc(v_tys_1140_);
lean_inc(v_e_1139_);
lean_dec(v_s_1000_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1154_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
uint8_t v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1151_; 
v___x_1145_ = 8;
v___x_1146_ = lean_byte_array_push(v_e_1139_, v___x_1145_);
v___x_1147_ = l_Lean_ModuleUsage_Enc_name(v___x_1146_, v_fvarId_1135_);
v___x_1148_ = l_Lean_ModuleUsage_Enc_nat(v___x_1147_, v_i_1136_);
v___x_1149_ = l_Lean_ModuleUsage_Enc_name(v___x_1148_, v_y_1137_);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 0, v___x_1149_);
v___x_1151_ = v___x_1143_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1149_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v_tys_1140_);
lean_ctor_set(v_reuseFailAlloc_1153_, 2, v_ms_1141_);
v___x_1151_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
v_s_1000_ = v___x_1151_;
v_x_1001_ = v_k_1138_;
goto _start;
}
}
}
case 9:
{
lean_object* v_fvarId_1155_; lean_object* v_i_1156_; lean_object* v_offset_1157_; lean_object* v_y_1158_; lean_object* v_ty_1159_; lean_object* v_k_1160_; lean_object* v_e_1161_; lean_object* v_tys_1162_; lean_object* v_ms_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1178_; 
v_fvarId_1155_ = lean_ctor_get(v_x_1001_, 0);
lean_inc(v_fvarId_1155_);
v_i_1156_ = lean_ctor_get(v_x_1001_, 1);
lean_inc(v_i_1156_);
v_offset_1157_ = lean_ctor_get(v_x_1001_, 2);
lean_inc(v_offset_1157_);
v_y_1158_ = lean_ctor_get(v_x_1001_, 3);
lean_inc(v_y_1158_);
v_ty_1159_ = lean_ctor_get(v_x_1001_, 4);
lean_inc_ref(v_ty_1159_);
v_k_1160_ = lean_ctor_get(v_x_1001_, 5);
lean_inc_ref(v_k_1160_);
lean_dec_ref_known(v_x_1001_, 6);
v_e_1161_ = lean_ctor_get(v_s_1000_, 0);
v_tys_1162_ = lean_ctor_get(v_s_1000_, 1);
v_ms_1163_ = lean_ctor_get(v_s_1000_, 2);
v_isSharedCheck_1178_ = !lean_is_exclusive(v_s_1000_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1165_ = v_s_1000_;
v_isShared_1166_ = v_isSharedCheck_1178_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_ms_1163_);
lean_inc(v_tys_1162_);
lean_inc(v_e_1161_);
lean_dec(v_s_1000_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1178_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
uint8_t v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1175_; 
v___x_1167_ = 9;
v___x_1168_ = lean_byte_array_push(v_e_1161_, v___x_1167_);
v___x_1169_ = l_Lean_ModuleUsage_Enc_name(v___x_1168_, v_fvarId_1155_);
v___x_1170_ = l_Lean_ModuleUsage_Enc_nat(v___x_1169_, v_i_1156_);
v___x_1171_ = l_Lean_ModuleUsage_Enc_nat(v___x_1170_, v_offset_1157_);
v___x_1172_ = l_Lean_ModuleUsage_Enc_name(v___x_1171_, v_y_1158_);
v___x_1173_ = lean_array_push(v_tys_1162_, v_ty_1159_);
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 1, v___x_1173_);
lean_ctor_set(v___x_1165_, 0, v___x_1172_);
v___x_1175_ = v___x_1165_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v___x_1172_);
lean_ctor_set(v_reuseFailAlloc_1177_, 1, v___x_1173_);
lean_ctor_set(v_reuseFailAlloc_1177_, 2, v_ms_1163_);
v___x_1175_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
v_s_1000_ = v___x_1175_;
v_x_1001_ = v_k_1160_;
goto _start;
}
}
}
case 10:
{
lean_object* v_fvarId_1179_; lean_object* v_cidx_1180_; lean_object* v_k_1181_; lean_object* v_e_1182_; lean_object* v_tys_1183_; lean_object* v_ms_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1196_; 
v_fvarId_1179_ = lean_ctor_get(v_x_1001_, 0);
lean_inc(v_fvarId_1179_);
v_cidx_1180_ = lean_ctor_get(v_x_1001_, 1);
lean_inc(v_cidx_1180_);
v_k_1181_ = lean_ctor_get(v_x_1001_, 2);
lean_inc_ref(v_k_1181_);
lean_dec_ref_known(v_x_1001_, 3);
v_e_1182_ = lean_ctor_get(v_s_1000_, 0);
v_tys_1183_ = lean_ctor_get(v_s_1000_, 1);
v_ms_1184_ = lean_ctor_get(v_s_1000_, 2);
v_isSharedCheck_1196_ = !lean_is_exclusive(v_s_1000_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1186_ = v_s_1000_;
v_isShared_1187_ = v_isSharedCheck_1196_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_ms_1184_);
lean_inc(v_tys_1183_);
lean_inc(v_e_1182_);
lean_dec(v_s_1000_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1196_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
uint8_t v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1193_; 
v___x_1188_ = 10;
v___x_1189_ = lean_byte_array_push(v_e_1182_, v___x_1188_);
v___x_1190_ = l_Lean_ModuleUsage_Enc_name(v___x_1189_, v_fvarId_1179_);
v___x_1191_ = l_Lean_ModuleUsage_Enc_nat(v___x_1190_, v_cidx_1180_);
if (v_isShared_1187_ == 0)
{
lean_ctor_set(v___x_1186_, 0, v___x_1191_);
v___x_1193_ = v___x_1186_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v___x_1191_);
lean_ctor_set(v_reuseFailAlloc_1195_, 1, v_tys_1183_);
lean_ctor_set(v_reuseFailAlloc_1195_, 2, v_ms_1184_);
v___x_1193_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
v_s_1000_ = v___x_1193_;
v_x_1001_ = v_k_1181_;
goto _start;
}
}
}
case 11:
{
lean_object* v_fvarId_1197_; lean_object* v_n_1198_; uint8_t v_check_1199_; uint8_t v_persistent_1200_; lean_object* v_k_1201_; lean_object* v_e_1202_; lean_object* v_tys_1203_; lean_object* v_ms_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1218_; 
v_fvarId_1197_ = lean_ctor_get(v_x_1001_, 0);
lean_inc(v_fvarId_1197_);
v_n_1198_ = lean_ctor_get(v_x_1001_, 1);
lean_inc(v_n_1198_);
v_check_1199_ = lean_ctor_get_uint8(v_x_1001_, sizeof(void*)*3);
v_persistent_1200_ = lean_ctor_get_uint8(v_x_1001_, sizeof(void*)*3 + 1);
v_k_1201_ = lean_ctor_get(v_x_1001_, 2);
lean_inc_ref(v_k_1201_);
lean_dec_ref_known(v_x_1001_, 3);
v_e_1202_ = lean_ctor_get(v_s_1000_, 0);
v_tys_1203_ = lean_ctor_get(v_s_1000_, 1);
v_ms_1204_ = lean_ctor_get(v_s_1000_, 2);
v_isSharedCheck_1218_ = !lean_is_exclusive(v_s_1000_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1206_ = v_s_1000_;
v_isShared_1207_ = v_isSharedCheck_1218_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_ms_1204_);
lean_inc(v_tys_1203_);
lean_inc(v_e_1202_);
lean_dec(v_s_1000_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1218_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
uint8_t v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1215_; 
v___x_1208_ = 11;
v___x_1209_ = lean_byte_array_push(v_e_1202_, v___x_1208_);
v___x_1210_ = l_Lean_ModuleUsage_Enc_name(v___x_1209_, v_fvarId_1197_);
v___x_1211_ = l_Lean_ModuleUsage_Enc_nat(v___x_1210_, v_n_1198_);
v___x_1212_ = l_Lean_ModuleUsage_Enc_bool(v___x_1211_, v_check_1199_);
v___x_1213_ = l_Lean_ModuleUsage_Enc_bool(v___x_1212_, v_persistent_1200_);
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 0, v___x_1213_);
v___x_1215_ = v___x_1206_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v___x_1213_);
lean_ctor_set(v_reuseFailAlloc_1217_, 1, v_tys_1203_);
lean_ctor_set(v_reuseFailAlloc_1217_, 2, v_ms_1204_);
v___x_1215_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
v_s_1000_ = v___x_1215_;
v_x_1001_ = v_k_1201_;
goto _start;
}
}
}
case 12:
{
lean_object* v_fvarId_1219_; lean_object* v_n_1220_; uint8_t v_check_1221_; uint8_t v_persistent_1222_; lean_object* v_objs_x3f_1223_; lean_object* v_k_1224_; lean_object* v_e_1225_; lean_object* v_tys_1226_; lean_object* v_ms_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1243_; 
v_fvarId_1219_ = lean_ctor_get(v_x_1001_, 0);
lean_inc(v_fvarId_1219_);
v_n_1220_ = lean_ctor_get(v_x_1001_, 1);
lean_inc(v_n_1220_);
v_check_1221_ = lean_ctor_get_uint8(v_x_1001_, sizeof(void*)*4);
v_persistent_1222_ = lean_ctor_get_uint8(v_x_1001_, sizeof(void*)*4 + 1);
v_objs_x3f_1223_ = lean_ctor_get(v_x_1001_, 2);
lean_inc(v_objs_x3f_1223_);
v_k_1224_ = lean_ctor_get(v_x_1001_, 3);
lean_inc_ref(v_k_1224_);
lean_dec_ref_known(v_x_1001_, 4);
v_e_1225_ = lean_ctor_get(v_s_1000_, 0);
v_tys_1226_ = lean_ctor_get(v_s_1000_, 1);
v_ms_1227_ = lean_ctor_get(v_s_1000_, 2);
v_isSharedCheck_1243_ = !lean_is_exclusive(v_s_1000_);
if (v_isSharedCheck_1243_ == 0)
{
v___x_1229_ = v_s_1000_;
v_isShared_1230_ = v_isSharedCheck_1243_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_ms_1227_);
lean_inc(v_tys_1226_);
lean_inc(v_e_1225_);
lean_dec(v_s_1000_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1243_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___f_1231_; uint8_t v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1239_; 
v___f_1231_ = ((lean_object*)(l_Lean_ModuleUsage_LCNFEnc_code___closed__0));
v___x_1232_ = 12;
v___x_1233_ = lean_byte_array_push(v_e_1225_, v___x_1232_);
v___x_1234_ = l_Lean_ModuleUsage_Enc_name(v___x_1233_, v_fvarId_1219_);
v___x_1235_ = l_Lean_ModuleUsage_Enc_nat(v___x_1234_, v_n_1220_);
v___x_1236_ = l_Lean_ModuleUsage_Enc_bool(v___x_1235_, v_check_1221_);
v___x_1237_ = l_Lean_ModuleUsage_Enc_bool(v___x_1236_, v_persistent_1222_);
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 0, v___x_1237_);
v___x_1239_ = v___x_1229_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v___x_1237_);
lean_ctor_set(v_reuseFailAlloc_1242_, 1, v_tys_1226_);
lean_ctor_set(v_reuseFailAlloc_1242_, 2, v_ms_1227_);
v___x_1239_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
lean_object* v___x_1240_; 
v___x_1240_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_1239_, v_objs_x3f_1223_, v___f_1231_);
v_s_1000_ = v___x_1240_;
v_x_1001_ = v_k_1224_;
goto _start;
}
}
}
default: 
{
lean_object* v_fvarId_1244_; lean_object* v_k_1245_; lean_object* v_e_1246_; lean_object* v_tys_1247_; lean_object* v_ms_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1259_; 
v_fvarId_1244_ = lean_ctor_get(v_x_1001_, 0);
lean_inc(v_fvarId_1244_);
v_k_1245_ = lean_ctor_get(v_x_1001_, 1);
lean_inc_ref(v_k_1245_);
lean_dec_ref_known(v_x_1001_, 2);
v_e_1246_ = lean_ctor_get(v_s_1000_, 0);
v_tys_1247_ = lean_ctor_get(v_s_1000_, 1);
v_ms_1248_ = lean_ctor_get(v_s_1000_, 2);
v_isSharedCheck_1259_ = !lean_is_exclusive(v_s_1000_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1250_ = v_s_1000_;
v_isShared_1251_ = v_isSharedCheck_1259_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_ms_1248_);
lean_inc(v_tys_1247_);
lean_inc(v_e_1246_);
lean_dec(v_s_1000_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1259_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
uint8_t v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1256_; 
v___x_1252_ = 13;
v___x_1253_ = lean_byte_array_push(v_e_1246_, v___x_1252_);
v___x_1254_ = l_Lean_ModuleUsage_Enc_name(v___x_1253_, v_fvarId_1244_);
if (v_isShared_1251_ == 0)
{
lean_ctor_set(v___x_1250_, 0, v___x_1254_);
v___x_1256_ = v___x_1250_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v___x_1254_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v_tys_1247_);
lean_ctor_set(v_reuseFailAlloc_1258_, 2, v_ms_1248_);
v___x_1256_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
v_s_1000_ = v___x_1256_;
v_x_1001_ = v_k_1245_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_alt(uint8_t v_pu_1260_, lean_object* v_s_1261_, lean_object* v_x_1262_){
_start:
{
switch(lean_obj_tag(v_x_1262_))
{
case 0:
{
lean_object* v_ctorName_1263_; lean_object* v_params_1264_; lean_object* v_code_1265_; lean_object* v_e_1266_; lean_object* v_tys_1267_; lean_object* v_ms_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1281_; 
v_ctorName_1263_ = lean_ctor_get(v_x_1262_, 0);
lean_inc(v_ctorName_1263_);
v_params_1264_ = lean_ctor_get(v_x_1262_, 1);
lean_inc_ref(v_params_1264_);
v_code_1265_ = lean_ctor_get(v_x_1262_, 2);
lean_inc_ref(v_code_1265_);
lean_dec_ref_known(v_x_1262_, 3);
v_e_1266_ = lean_ctor_get(v_s_1261_, 0);
v_tys_1267_ = lean_ctor_get(v_s_1261_, 1);
v_ms_1268_ = lean_ctor_get(v_s_1261_, 2);
v_isSharedCheck_1281_ = !lean_is_exclusive(v_s_1261_);
if (v_isSharedCheck_1281_ == 0)
{
v___x_1270_ = v_s_1261_;
v_isShared_1271_ = v_isSharedCheck_1281_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_ms_1268_);
lean_inc(v_tys_1267_);
lean_inc(v_e_1266_);
lean_dec(v_s_1261_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1281_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
uint8_t v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1277_; 
v___x_1272_ = 0;
v___x_1273_ = lean_byte_array_push(v_e_1266_, v___x_1272_);
lean_inc(v_ctorName_1263_);
v___x_1274_ = l_Lean_ModuleUsage_Enc_name(v___x_1273_, v_ctorName_1263_);
v___x_1275_ = l_Lean_NameSet_insert(v_ms_1268_, v_ctorName_1263_);
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 2, v___x_1275_);
lean_ctor_set(v___x_1270_, 0, v___x_1274_);
v___x_1277_ = v___x_1270_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v___x_1274_);
lean_ctor_set(v_reuseFailAlloc_1280_, 1, v_tys_1267_);
lean_ctor_set(v_reuseFailAlloc_1280_, 2, v___x_1275_);
v___x_1277_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1278_ = l_Lean_ModuleUsage_LCNFEnc_params(v_pu_1260_, v___x_1277_, v_params_1264_);
lean_dec_ref(v_params_1264_);
v___x_1279_ = l_Lean_ModuleUsage_LCNFEnc_code(v_pu_1260_, v___x_1278_, v_code_1265_);
return v___x_1279_;
}
}
}
case 1:
{
lean_object* v_info_1282_; lean_object* v_code_1283_; lean_object* v_e_1284_; lean_object* v_tys_1285_; lean_object* v_ms_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1297_; 
v_info_1282_ = lean_ctor_get(v_x_1262_, 0);
lean_inc_ref(v_info_1282_);
v_code_1283_ = lean_ctor_get(v_x_1262_, 1);
lean_inc_ref(v_code_1283_);
lean_dec_ref_known(v_x_1262_, 2);
v_e_1284_ = lean_ctor_get(v_s_1261_, 0);
v_tys_1285_ = lean_ctor_get(v_s_1261_, 1);
v_ms_1286_ = lean_ctor_get(v_s_1261_, 2);
v_isSharedCheck_1297_ = !lean_is_exclusive(v_s_1261_);
if (v_isSharedCheck_1297_ == 0)
{
v___x_1288_ = v_s_1261_;
v_isShared_1289_ = v_isSharedCheck_1297_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_ms_1286_);
lean_inc(v_tys_1285_);
lean_inc(v_e_1284_);
lean_dec(v_s_1261_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1297_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
uint8_t v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1293_; 
v___x_1290_ = 1;
v___x_1291_ = lean_byte_array_push(v_e_1284_, v___x_1290_);
if (v_isShared_1289_ == 0)
{
lean_ctor_set(v___x_1288_, 0, v___x_1291_);
v___x_1293_ = v___x_1288_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v___x_1291_);
lean_ctor_set(v_reuseFailAlloc_1296_, 1, v_tys_1285_);
lean_ctor_set(v_reuseFailAlloc_1296_, 2, v_ms_1286_);
v___x_1293_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1294_ = l_Lean_ModuleUsage_LCNFEnc_ctorInfo(v___x_1293_, v_info_1282_);
v___x_1295_ = l_Lean_ModuleUsage_LCNFEnc_code(v_pu_1260_, v___x_1294_, v_code_1283_);
return v___x_1295_;
}
}
}
default: 
{
lean_object* v_code_1298_; lean_object* v_e_1299_; lean_object* v_tys_1300_; lean_object* v_ms_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1311_; 
v_code_1298_ = lean_ctor_get(v_x_1262_, 0);
lean_inc_ref(v_code_1298_);
lean_dec_ref_known(v_x_1262_, 1);
v_e_1299_ = lean_ctor_get(v_s_1261_, 0);
v_tys_1300_ = lean_ctor_get(v_s_1261_, 1);
v_ms_1301_ = lean_ctor_get(v_s_1261_, 2);
v_isSharedCheck_1311_ = !lean_is_exclusive(v_s_1261_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1303_ = v_s_1261_;
v_isShared_1304_ = v_isSharedCheck_1311_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_ms_1301_);
lean_inc(v_tys_1300_);
lean_inc(v_e_1299_);
lean_dec(v_s_1261_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1311_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
uint8_t v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1308_; 
v___x_1305_ = 2;
v___x_1306_ = lean_byte_array_push(v_e_1299_, v___x_1305_);
if (v_isShared_1304_ == 0)
{
lean_ctor_set(v___x_1303_, 0, v___x_1306_);
v___x_1308_ = v___x_1303_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v___x_1306_);
lean_ctor_set(v_reuseFailAlloc_1310_, 1, v_tys_1300_);
lean_ctor_set(v_reuseFailAlloc_1310_, 2, v_ms_1301_);
v___x_1308_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
lean_object* v___x_1309_; 
v___x_1309_ = l_Lean_ModuleUsage_LCNFEnc_code(v_pu_1260_, v___x_1308_, v_code_1298_);
return v___x_1309_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_casesE_spec__1(uint8_t v_pu_1312_, lean_object* v_as_1313_, size_t v_i_1314_, size_t v_stop_1315_, lean_object* v_b_1316_){
_start:
{
uint8_t v___x_1317_; 
v___x_1317_ = lean_usize_dec_eq(v_i_1314_, v_stop_1315_);
if (v___x_1317_ == 0)
{
lean_object* v___x_1318_; lean_object* v___x_1319_; size_t v___x_1320_; size_t v___x_1321_; 
v___x_1318_ = lean_array_uget_borrowed(v_as_1313_, v_i_1314_);
lean_inc(v___x_1318_);
v___x_1319_ = l_Lean_ModuleUsage_LCNFEnc_alt(v_pu_1312_, v_b_1316_, v___x_1318_);
v___x_1320_ = ((size_t)1ULL);
v___x_1321_ = lean_usize_add(v_i_1314_, v___x_1320_);
v_i_1314_ = v___x_1321_;
v_b_1316_ = v___x_1319_;
goto _start;
}
else
{
return v_b_1316_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_casesE_spec__1___boxed(lean_object* v_pu_1323_, lean_object* v_as_1324_, lean_object* v_i_1325_, lean_object* v_stop_1326_, lean_object* v_b_1327_){
_start:
{
uint8_t v_pu_boxed_1328_; size_t v_i_boxed_1329_; size_t v_stop_boxed_1330_; lean_object* v_res_1331_; 
v_pu_boxed_1328_ = lean_unbox(v_pu_1323_);
v_i_boxed_1329_ = lean_unbox_usize(v_i_1325_);
lean_dec(v_i_1325_);
v_stop_boxed_1330_ = lean_unbox_usize(v_stop_1326_);
lean_dec(v_stop_1326_);
v_res_1331_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_LCNFEnc_casesE_spec__1(v_pu_boxed_1328_, v_as_1324_, v_i_boxed_1329_, v_stop_boxed_1330_, v_b_1327_);
lean_dec_ref(v_as_1324_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_funDecl___boxed(lean_object* v_pu_1332_, lean_object* v_s_1333_, lean_object* v_x_1334_){
_start:
{
uint8_t v_pu_boxed_1335_; lean_object* v_res_1336_; 
v_pu_boxed_1335_ = lean_unbox(v_pu_1332_);
v_res_1336_ = l_Lean_ModuleUsage_LCNFEnc_funDecl(v_pu_boxed_1335_, v_s_1333_, v_x_1334_);
return v_res_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_casesE___boxed(lean_object* v_pu_1337_, lean_object* v_s_1338_, lean_object* v_x_1339_){
_start:
{
uint8_t v_pu_boxed_1340_; lean_object* v_res_1341_; 
v_pu_boxed_1340_ = lean_unbox(v_pu_1337_);
v_res_1341_ = l_Lean_ModuleUsage_LCNFEnc_casesE(v_pu_boxed_1340_, v_s_1338_, v_x_1339_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_alt___boxed(lean_object* v_pu_1342_, lean_object* v_s_1343_, lean_object* v_x_1344_){
_start:
{
uint8_t v_pu_boxed_1345_; lean_object* v_res_1346_; 
v_pu_boxed_1345_ = lean_unbox(v_pu_1342_);
v_res_1346_ = l_Lean_ModuleUsage_LCNFEnc_alt(v_pu_boxed_1345_, v_s_1343_, v_x_1344_);
return v_res_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_code___boxed(lean_object* v_pu_1347_, lean_object* v_s_1348_, lean_object* v_x_1349_){
_start:
{
uint8_t v_pu_boxed_1350_; lean_object* v_res_1351_; 
v_pu_boxed_1350_ = lean_unbox(v_pu_1347_);
v_res_1351_ = l_Lean_ModuleUsage_LCNFEnc_code(v_pu_boxed_1350_, v_s_1348_, v_x_1349_);
return v_res_1351_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_signature(uint8_t v_pu_1352_, lean_object* v_s_1353_, lean_object* v_sig_1354_){
_start:
{
lean_object* v_levelParams_1355_; lean_object* v_type_1356_; lean_object* v_params_1357_; uint8_t v_safe_1358_; lean_object* v_e_1359_; lean_object* v_tys_1360_; lean_object* v_ms_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1383_; 
v_levelParams_1355_ = lean_ctor_get(v_sig_1354_, 1);
lean_inc(v_levelParams_1355_);
v_type_1356_ = lean_ctor_get(v_sig_1354_, 2);
lean_inc_ref(v_type_1356_);
v_params_1357_ = lean_ctor_get(v_sig_1354_, 3);
lean_inc_ref(v_params_1357_);
v_safe_1358_ = lean_ctor_get_uint8(v_sig_1354_, sizeof(void*)*4);
lean_dec_ref(v_sig_1354_);
v_e_1359_ = lean_ctor_get(v_s_1353_, 0);
v_tys_1360_ = lean_ctor_get(v_s_1353_, 1);
v_ms_1361_ = lean_ctor_get(v_s_1353_, 2);
v_isSharedCheck_1383_ = !lean_is_exclusive(v_s_1353_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1363_ = v_s_1353_;
v_isShared_1364_ = v_isSharedCheck_1383_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_ms_1361_);
lean_inc(v_tys_1360_);
lean_inc(v_e_1359_);
lean_dec(v_s_1353_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1383_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1368_; 
v___x_1365_ = l_Lean_ModuleUsage_Enc_names(v_e_1359_, v_levelParams_1355_);
v___x_1366_ = lean_array_push(v_tys_1360_, v_type_1356_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 1, v___x_1366_);
lean_ctor_set(v___x_1363_, 0, v___x_1365_);
v___x_1368_ = v___x_1363_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v___x_1365_);
lean_ctor_set(v_reuseFailAlloc_1382_, 1, v___x_1366_);
lean_ctor_set(v_reuseFailAlloc_1382_, 2, v_ms_1361_);
v___x_1368_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
lean_object* v___x_1369_; lean_object* v_e_1370_; lean_object* v_tys_1371_; lean_object* v_ms_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1381_; 
v___x_1369_ = l_Lean_ModuleUsage_LCNFEnc_params(v_pu_1352_, v___x_1368_, v_params_1357_);
lean_dec_ref(v_params_1357_);
v_e_1370_ = lean_ctor_get(v___x_1369_, 0);
v_tys_1371_ = lean_ctor_get(v___x_1369_, 1);
v_ms_1372_ = lean_ctor_get(v___x_1369_, 2);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1369_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1374_ = v___x_1369_;
v_isShared_1375_ = v_isSharedCheck_1381_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_ms_1372_);
lean_inc(v_tys_1371_);
lean_inc(v_e_1370_);
lean_dec(v___x_1369_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1381_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1376_; lean_object* v___x_1378_; 
v___x_1376_ = l_Lean_ModuleUsage_Enc_bool(v_e_1370_, v_safe_1358_);
if (v_isShared_1375_ == 0)
{
lean_ctor_set(v___x_1374_, 0, v___x_1376_);
v___x_1378_ = v___x_1374_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v___x_1376_);
lean_ctor_set(v_reuseFailAlloc_1380_, 1, v_tys_1371_);
lean_ctor_set(v_reuseFailAlloc_1380_, 2, v_ms_1372_);
v___x_1378_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
lean_object* v___x_1379_; 
v___x_1379_ = l_Lean_ModuleUsage_CEnc_flushTys(v___x_1378_);
return v___x_1379_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_signature___boxed(lean_object* v_pu_1384_, lean_object* v_s_1385_, lean_object* v_sig_1386_){
_start:
{
uint8_t v_pu_boxed_1387_; lean_object* v_res_1388_; 
v_pu_boxed_1387_ = lean_unbox(v_pu_1384_);
v_res_1388_ = l_Lean_ModuleUsage_LCNFEnc_signature(v_pu_boxed_1387_, v_s_1385_, v_sig_1386_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_decl___lam__0(lean_object* v_s_1389_, uint8_t v_k_1390_){
_start:
{
lean_object* v_e_1391_; lean_object* v_tys_1392_; lean_object* v_ms_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1401_; 
v_e_1391_ = lean_ctor_get(v_s_1389_, 0);
v_tys_1392_ = lean_ctor_get(v_s_1389_, 1);
v_ms_1393_ = lean_ctor_get(v_s_1389_, 2);
v_isSharedCheck_1401_ = !lean_is_exclusive(v_s_1389_);
if (v_isSharedCheck_1401_ == 0)
{
v___x_1395_ = v_s_1389_;
v_isShared_1396_ = v_isSharedCheck_1401_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_ms_1393_);
lean_inc(v_tys_1392_);
lean_inc(v_e_1391_);
lean_dec(v_s_1389_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1401_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1397_; lean_object* v___x_1399_; 
v___x_1397_ = l_Lean_ModuleUsage_inlineEnc(v_e_1391_, v_k_1390_);
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 0, v___x_1397_);
v___x_1399_ = v___x_1395_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v___x_1397_);
lean_ctor_set(v_reuseFailAlloc_1400_, 1, v_tys_1392_);
lean_ctor_set(v_reuseFailAlloc_1400_, 2, v_ms_1393_);
v___x_1399_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
return v___x_1399_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_decl___lam__0___boxed(lean_object* v_s_1402_, lean_object* v_k_1403_){
_start:
{
uint8_t v_k_boxed_1404_; lean_object* v_res_1405_; 
v_k_boxed_1404_ = lean_unbox(v_k_1403_);
v_res_1405_ = l_Lean_ModuleUsage_LCNFEnc_decl___lam__0(v_s_1402_, v_k_boxed_1404_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_decl(uint8_t v_pu_1407_, lean_object* v_s_1408_, lean_object* v_d_1409_){
_start:
{
lean_object* v_toSignature_1410_; lean_object* v_value_1411_; uint8_t v_recursive_1412_; lean_object* v_inlineAttr_x3f_1413_; lean_object* v_levelParams_1414_; lean_object* v_type_1415_; lean_object* v_params_1416_; uint8_t v_safe_1417_; lean_object* v_e_1418_; lean_object* v_tys_1419_; lean_object* v_ms_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1461_; 
v_toSignature_1410_ = lean_ctor_get(v_d_1409_, 0);
lean_inc_ref(v_toSignature_1410_);
v_value_1411_ = lean_ctor_get(v_d_1409_, 1);
lean_inc_ref(v_value_1411_);
v_recursive_1412_ = lean_ctor_get_uint8(v_d_1409_, sizeof(void*)*3);
v_inlineAttr_x3f_1413_ = lean_ctor_get(v_d_1409_, 2);
lean_inc(v_inlineAttr_x3f_1413_);
lean_dec_ref(v_d_1409_);
v_levelParams_1414_ = lean_ctor_get(v_toSignature_1410_, 1);
lean_inc(v_levelParams_1414_);
v_type_1415_ = lean_ctor_get(v_toSignature_1410_, 2);
lean_inc_ref(v_type_1415_);
v_params_1416_ = lean_ctor_get(v_toSignature_1410_, 3);
lean_inc_ref(v_params_1416_);
v_safe_1417_ = lean_ctor_get_uint8(v_toSignature_1410_, sizeof(void*)*4);
lean_dec_ref(v_toSignature_1410_);
v_e_1418_ = lean_ctor_get(v_s_1408_, 0);
v_tys_1419_ = lean_ctor_get(v_s_1408_, 1);
v_ms_1420_ = lean_ctor_get(v_s_1408_, 2);
v_isSharedCheck_1461_ = !lean_is_exclusive(v_s_1408_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1422_ = v_s_1408_;
v_isShared_1423_ = v_isSharedCheck_1461_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_ms_1420_);
lean_inc(v_tys_1419_);
lean_inc(v_e_1418_);
lean_dec(v_s_1408_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1461_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1427_; 
v___x_1424_ = l_Lean_ModuleUsage_Enc_names(v_e_1418_, v_levelParams_1414_);
v___x_1425_ = lean_array_push(v_tys_1419_, v_type_1415_);
if (v_isShared_1423_ == 0)
{
lean_ctor_set(v___x_1422_, 1, v___x_1425_);
lean_ctor_set(v___x_1422_, 0, v___x_1424_);
v___x_1427_ = v___x_1422_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v___x_1424_);
lean_ctor_set(v_reuseFailAlloc_1460_, 1, v___x_1425_);
lean_ctor_set(v_reuseFailAlloc_1460_, 2, v_ms_1420_);
v___x_1427_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
lean_object* v___x_1428_; lean_object* v_e_1429_; lean_object* v_tys_1430_; lean_object* v_ms_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1459_; 
v___x_1428_ = l_Lean_ModuleUsage_LCNFEnc_params(v_pu_1407_, v___x_1427_, v_params_1416_);
lean_dec_ref(v_params_1416_);
v_e_1429_ = lean_ctor_get(v___x_1428_, 0);
v_tys_1430_ = lean_ctor_get(v___x_1428_, 1);
v_ms_1431_ = lean_ctor_get(v___x_1428_, 2);
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1433_ = v___x_1428_;
v_isShared_1434_ = v_isSharedCheck_1459_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_ms_1431_);
lean_inc(v_tys_1430_);
lean_inc(v_e_1429_);
lean_dec(v___x_1428_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1459_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___f_1435_; lean_object* v_e_1437_; lean_object* v_tys_1438_; lean_object* v_ms_1439_; lean_object* v___x_1446_; 
v___f_1435_ = ((lean_object*)(l_Lean_ModuleUsage_LCNFEnc_decl___closed__0));
v___x_1446_ = l_Lean_ModuleUsage_Enc_bool(v_e_1429_, v_safe_1417_);
if (lean_obj_tag(v_value_1411_) == 0)
{
lean_object* v_code_1447_; uint8_t v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v_e_1452_; lean_object* v_tys_1453_; lean_object* v_ms_1454_; 
v_code_1447_ = lean_ctor_get(v_value_1411_, 0);
lean_inc_ref(v_code_1447_);
lean_dec_ref_known(v_value_1411_, 1);
v___x_1448_ = 0;
v___x_1449_ = lean_byte_array_push(v___x_1446_, v___x_1448_);
v___x_1450_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1450_, 0, v___x_1449_);
lean_ctor_set(v___x_1450_, 1, v_tys_1430_);
lean_ctor_set(v___x_1450_, 2, v_ms_1431_);
v___x_1451_ = l_Lean_ModuleUsage_LCNFEnc_code(v_pu_1407_, v___x_1450_, v_code_1447_);
v_e_1452_ = lean_ctor_get(v___x_1451_, 0);
lean_inc_ref(v_e_1452_);
v_tys_1453_ = lean_ctor_get(v___x_1451_, 1);
lean_inc_ref(v_tys_1453_);
v_ms_1454_ = lean_ctor_get(v___x_1451_, 2);
lean_inc(v_ms_1454_);
lean_dec_ref(v___x_1451_);
v_e_1437_ = v_e_1452_;
v_tys_1438_ = v_tys_1453_;
v_ms_1439_ = v_ms_1454_;
goto v___jp_1436_;
}
else
{
lean_object* v_externAttrData_1455_; uint8_t v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; 
v_externAttrData_1455_ = lean_ctor_get(v_value_1411_, 0);
lean_inc(v_externAttrData_1455_);
lean_dec_ref_known(v_value_1411_, 1);
v___x_1456_ = 1;
v___x_1457_ = lean_byte_array_push(v___x_1446_, v___x_1456_);
v___x_1458_ = l_Lean_ModuleUsage_externEnc(v___x_1457_, v_externAttrData_1455_);
v_e_1437_ = v___x_1458_;
v_tys_1438_ = v_tys_1430_;
v_ms_1439_ = v_ms_1431_;
goto v___jp_1436_;
}
v___jp_1436_:
{
lean_object* v___x_1440_; lean_object* v___x_1442_; 
v___x_1440_ = l_Lean_ModuleUsage_Enc_bool(v_e_1437_, v_recursive_1412_);
if (v_isShared_1434_ == 0)
{
lean_ctor_set(v___x_1433_, 2, v_ms_1439_);
lean_ctor_set(v___x_1433_, 1, v_tys_1438_);
lean_ctor_set(v___x_1433_, 0, v___x_1440_);
v___x_1442_ = v___x_1433_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v___x_1440_);
lean_ctor_set(v_reuseFailAlloc_1445_, 1, v_tys_1438_);
lean_ctor_set(v_reuseFailAlloc_1445_, 2, v_ms_1439_);
v___x_1442_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1443_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_1442_, v_inlineAttr_x3f_1413_, v___f_1435_);
v___x_1444_ = l_Lean_ModuleUsage_CEnc_flushTys(v___x_1443_);
return v___x_1444_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LCNFEnc_decl___boxed(lean_object* v_pu_1462_, lean_object* v_s_1463_, lean_object* v_d_1464_){
_start:
{
uint8_t v_pu_boxed_1465_; lean_object* v_res_1466_; 
v_pu_boxed_1465_ = lean_unbox(v_pu_1462_);
v_res_1466_ = l_Lean_ModuleUsage_LCNFEnc_decl(v_pu_boxed_1465_, v_s_1463_, v_d_1464_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_irType___lam__0(lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v_e_1469_; lean_object* v_tys_1470_; lean_object* v_ms_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1480_; 
v_e_1469_ = lean_ctor_get(v___y_1467_, 0);
v_tys_1470_ = lean_ctor_get(v___y_1467_, 1);
v_ms_1471_ = lean_ctor_get(v___y_1467_, 2);
v_isSharedCheck_1480_ = !lean_is_exclusive(v___y_1467_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1473_ = v___y_1467_;
v_isShared_1474_ = v_isSharedCheck_1480_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_ms_1471_);
lean_inc(v_tys_1470_);
lean_inc(v_e_1469_);
lean_dec(v___y_1467_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1480_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1478_; 
lean_inc(v___y_1468_);
v___x_1475_ = l_Lean_ModuleUsage_Enc_name(v_e_1469_, v___y_1468_);
v___x_1476_ = l_Lean_NameSet_insert(v_ms_1471_, v___y_1468_);
if (v_isShared_1474_ == 0)
{
lean_ctor_set(v___x_1473_, 2, v___x_1476_);
lean_ctor_set(v___x_1473_, 0, v___x_1475_);
v___x_1478_ = v___x_1473_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v___x_1475_);
lean_ctor_set(v_reuseFailAlloc_1479_, 1, v_tys_1470_);
lean_ctor_set(v_reuseFailAlloc_1479_, 2, v___x_1476_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_irType(lean_object* v_s_1482_, lean_object* v_x_1483_){
_start:
{
switch(lean_obj_tag(v_x_1483_))
{
case 0:
{
lean_object* v_e_1484_; lean_object* v_tys_1485_; lean_object* v_ms_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1495_; 
v_e_1484_ = lean_ctor_get(v_s_1482_, 0);
v_tys_1485_ = lean_ctor_get(v_s_1482_, 1);
v_ms_1486_ = lean_ctor_get(v_s_1482_, 2);
v_isSharedCheck_1495_ = !lean_is_exclusive(v_s_1482_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1488_ = v_s_1482_;
v_isShared_1489_ = v_isSharedCheck_1495_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_ms_1486_);
lean_inc(v_tys_1485_);
lean_inc(v_e_1484_);
lean_dec(v_s_1482_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1495_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
uint8_t v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1493_; 
v___x_1490_ = 0;
v___x_1491_ = lean_byte_array_push(v_e_1484_, v___x_1490_);
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 0, v___x_1491_);
v___x_1493_ = v___x_1488_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v___x_1491_);
lean_ctor_set(v_reuseFailAlloc_1494_, 1, v_tys_1485_);
lean_ctor_set(v_reuseFailAlloc_1494_, 2, v_ms_1486_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
case 1:
{
lean_object* v_e_1496_; lean_object* v_tys_1497_; lean_object* v_ms_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1507_; 
v_e_1496_ = lean_ctor_get(v_s_1482_, 0);
v_tys_1497_ = lean_ctor_get(v_s_1482_, 1);
v_ms_1498_ = lean_ctor_get(v_s_1482_, 2);
v_isSharedCheck_1507_ = !lean_is_exclusive(v_s_1482_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1500_ = v_s_1482_;
v_isShared_1501_ = v_isSharedCheck_1507_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_ms_1498_);
lean_inc(v_tys_1497_);
lean_inc(v_e_1496_);
lean_dec(v_s_1482_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1507_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
uint8_t v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1505_; 
v___x_1502_ = 1;
v___x_1503_ = lean_byte_array_push(v_e_1496_, v___x_1502_);
if (v_isShared_1501_ == 0)
{
lean_ctor_set(v___x_1500_, 0, v___x_1503_);
v___x_1505_ = v___x_1500_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v___x_1503_);
lean_ctor_set(v_reuseFailAlloc_1506_, 1, v_tys_1497_);
lean_ctor_set(v_reuseFailAlloc_1506_, 2, v_ms_1498_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
}
case 2:
{
lean_object* v_e_1508_; lean_object* v_tys_1509_; lean_object* v_ms_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1519_; 
v_e_1508_ = lean_ctor_get(v_s_1482_, 0);
v_tys_1509_ = lean_ctor_get(v_s_1482_, 1);
v_ms_1510_ = lean_ctor_get(v_s_1482_, 2);
v_isSharedCheck_1519_ = !lean_is_exclusive(v_s_1482_);
if (v_isSharedCheck_1519_ == 0)
{
v___x_1512_ = v_s_1482_;
v_isShared_1513_ = v_isSharedCheck_1519_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_ms_1510_);
lean_inc(v_tys_1509_);
lean_inc(v_e_1508_);
lean_dec(v_s_1482_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1519_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
uint8_t v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1517_; 
v___x_1514_ = 2;
v___x_1515_ = lean_byte_array_push(v_e_1508_, v___x_1514_);
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 0, v___x_1515_);
v___x_1517_ = v___x_1512_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v___x_1515_);
lean_ctor_set(v_reuseFailAlloc_1518_, 1, v_tys_1509_);
lean_ctor_set(v_reuseFailAlloc_1518_, 2, v_ms_1510_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
case 3:
{
lean_object* v_e_1520_; lean_object* v_tys_1521_; lean_object* v_ms_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1531_; 
v_e_1520_ = lean_ctor_get(v_s_1482_, 0);
v_tys_1521_ = lean_ctor_get(v_s_1482_, 1);
v_ms_1522_ = lean_ctor_get(v_s_1482_, 2);
v_isSharedCheck_1531_ = !lean_is_exclusive(v_s_1482_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1524_ = v_s_1482_;
v_isShared_1525_ = v_isSharedCheck_1531_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_ms_1522_);
lean_inc(v_tys_1521_);
lean_inc(v_e_1520_);
lean_dec(v_s_1482_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1531_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
uint8_t v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1529_; 
v___x_1526_ = 3;
v___x_1527_ = lean_byte_array_push(v_e_1520_, v___x_1526_);
if (v_isShared_1525_ == 0)
{
lean_ctor_set(v___x_1524_, 0, v___x_1527_);
v___x_1529_ = v___x_1524_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v___x_1527_);
lean_ctor_set(v_reuseFailAlloc_1530_, 1, v_tys_1521_);
lean_ctor_set(v_reuseFailAlloc_1530_, 2, v_ms_1522_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
return v___x_1529_;
}
}
}
case 4:
{
lean_object* v_e_1532_; lean_object* v_tys_1533_; lean_object* v_ms_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1543_; 
v_e_1532_ = lean_ctor_get(v_s_1482_, 0);
v_tys_1533_ = lean_ctor_get(v_s_1482_, 1);
v_ms_1534_ = lean_ctor_get(v_s_1482_, 2);
v_isSharedCheck_1543_ = !lean_is_exclusive(v_s_1482_);
if (v_isSharedCheck_1543_ == 0)
{
v___x_1536_ = v_s_1482_;
v_isShared_1537_ = v_isSharedCheck_1543_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_ms_1534_);
lean_inc(v_tys_1533_);
lean_inc(v_e_1532_);
lean_dec(v_s_1482_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1543_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
uint8_t v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1541_; 
v___x_1538_ = 4;
v___x_1539_ = lean_byte_array_push(v_e_1532_, v___x_1538_);
if (v_isShared_1537_ == 0)
{
lean_ctor_set(v___x_1536_, 0, v___x_1539_);
v___x_1541_ = v___x_1536_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v___x_1539_);
lean_ctor_set(v_reuseFailAlloc_1542_, 1, v_tys_1533_);
lean_ctor_set(v_reuseFailAlloc_1542_, 2, v_ms_1534_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
case 5:
{
lean_object* v_e_1544_; lean_object* v_tys_1545_; lean_object* v_ms_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1555_; 
v_e_1544_ = lean_ctor_get(v_s_1482_, 0);
v_tys_1545_ = lean_ctor_get(v_s_1482_, 1);
v_ms_1546_ = lean_ctor_get(v_s_1482_, 2);
v_isSharedCheck_1555_ = !lean_is_exclusive(v_s_1482_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1548_ = v_s_1482_;
v_isShared_1549_ = v_isSharedCheck_1555_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_ms_1546_);
lean_inc(v_tys_1545_);
lean_inc(v_e_1544_);
lean_dec(v_s_1482_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1555_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
uint8_t v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1553_; 
v___x_1550_ = 5;
v___x_1551_ = lean_byte_array_push(v_e_1544_, v___x_1550_);
if (v_isShared_1549_ == 0)
{
lean_ctor_set(v___x_1548_, 0, v___x_1551_);
v___x_1553_ = v___x_1548_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v___x_1551_);
lean_ctor_set(v_reuseFailAlloc_1554_, 1, v_tys_1545_);
lean_ctor_set(v_reuseFailAlloc_1554_, 2, v_ms_1546_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
case 6:
{
lean_object* v_e_1556_; lean_object* v_tys_1557_; lean_object* v_ms_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1567_; 
v_e_1556_ = lean_ctor_get(v_s_1482_, 0);
v_tys_1557_ = lean_ctor_get(v_s_1482_, 1);
v_ms_1558_ = lean_ctor_get(v_s_1482_, 2);
v_isSharedCheck_1567_ = !lean_is_exclusive(v_s_1482_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1560_ = v_s_1482_;
v_isShared_1561_ = v_isSharedCheck_1567_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_ms_1558_);
lean_inc(v_tys_1557_);
lean_inc(v_e_1556_);
lean_dec(v_s_1482_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1567_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
uint8_t v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1565_; 
v___x_1562_ = 6;
v___x_1563_ = lean_byte_array_push(v_e_1556_, v___x_1562_);
if (v_isShared_1561_ == 0)
{
lean_ctor_set(v___x_1560_, 0, v___x_1563_);
v___x_1565_ = v___x_1560_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v___x_1563_);
lean_ctor_set(v_reuseFailAlloc_1566_, 1, v_tys_1557_);
lean_ctor_set(v_reuseFailAlloc_1566_, 2, v_ms_1558_);
v___x_1565_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
return v___x_1565_;
}
}
}
case 7:
{
lean_object* v_e_1568_; lean_object* v_tys_1569_; lean_object* v_ms_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1579_; 
v_e_1568_ = lean_ctor_get(v_s_1482_, 0);
v_tys_1569_ = lean_ctor_get(v_s_1482_, 1);
v_ms_1570_ = lean_ctor_get(v_s_1482_, 2);
v_isSharedCheck_1579_ = !lean_is_exclusive(v_s_1482_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1572_ = v_s_1482_;
v_isShared_1573_ = v_isSharedCheck_1579_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_ms_1570_);
lean_inc(v_tys_1569_);
lean_inc(v_e_1568_);
lean_dec(v_s_1482_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1579_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
uint8_t v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1577_; 
v___x_1574_ = 7;
v___x_1575_ = lean_byte_array_push(v_e_1568_, v___x_1574_);
if (v_isShared_1573_ == 0)
{
lean_ctor_set(v___x_1572_, 0, v___x_1575_);
v___x_1577_ = v___x_1572_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v___x_1575_);
lean_ctor_set(v_reuseFailAlloc_1578_, 1, v_tys_1569_);
lean_ctor_set(v_reuseFailAlloc_1578_, 2, v_ms_1570_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
}
case 8:
{
lean_object* v_e_1580_; lean_object* v_tys_1581_; lean_object* v_ms_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1591_; 
v_e_1580_ = lean_ctor_get(v_s_1482_, 0);
v_tys_1581_ = lean_ctor_get(v_s_1482_, 1);
v_ms_1582_ = lean_ctor_get(v_s_1482_, 2);
v_isSharedCheck_1591_ = !lean_is_exclusive(v_s_1482_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1584_ = v_s_1482_;
v_isShared_1585_ = v_isSharedCheck_1591_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_ms_1582_);
lean_inc(v_tys_1581_);
lean_inc(v_e_1580_);
lean_dec(v_s_1482_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1591_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
uint8_t v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1589_; 
v___x_1586_ = 8;
v___x_1587_ = lean_byte_array_push(v_e_1580_, v___x_1586_);
if (v_isShared_1585_ == 0)
{
lean_ctor_set(v___x_1584_, 0, v___x_1587_);
v___x_1589_ = v___x_1584_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v___x_1587_);
lean_ctor_set(v_reuseFailAlloc_1590_, 1, v_tys_1581_);
lean_ctor_set(v_reuseFailAlloc_1590_, 2, v_ms_1582_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
}
case 9:
{
lean_object* v_e_1592_; lean_object* v_tys_1593_; lean_object* v_ms_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1603_; 
v_e_1592_ = lean_ctor_get(v_s_1482_, 0);
v_tys_1593_ = lean_ctor_get(v_s_1482_, 1);
v_ms_1594_ = lean_ctor_get(v_s_1482_, 2);
v_isSharedCheck_1603_ = !lean_is_exclusive(v_s_1482_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1596_ = v_s_1482_;
v_isShared_1597_ = v_isSharedCheck_1603_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_ms_1594_);
lean_inc(v_tys_1593_);
lean_inc(v_e_1592_);
lean_dec(v_s_1482_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1603_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
uint8_t v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1601_; 
v___x_1598_ = 9;
v___x_1599_ = lean_byte_array_push(v_e_1592_, v___x_1598_);
if (v_isShared_1597_ == 0)
{
lean_ctor_set(v___x_1596_, 0, v___x_1599_);
v___x_1601_ = v___x_1596_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v___x_1599_);
lean_ctor_set(v_reuseFailAlloc_1602_, 1, v_tys_1593_);
lean_ctor_set(v_reuseFailAlloc_1602_, 2, v_ms_1594_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
}
case 10:
{
lean_object* v_leanTypeName_1604_; lean_object* v_types_1605_; lean_object* v_e_1606_; lean_object* v_tys_1607_; lean_object* v_ms_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1636_; 
v_leanTypeName_1604_ = lean_ctor_get(v_x_1483_, 0);
lean_inc(v_leanTypeName_1604_);
v_types_1605_ = lean_ctor_get(v_x_1483_, 1);
lean_inc_ref(v_types_1605_);
lean_dec_ref_known(v_x_1483_, 2);
v_e_1606_ = lean_ctor_get(v_s_1482_, 0);
v_tys_1607_ = lean_ctor_get(v_s_1482_, 1);
v_ms_1608_ = lean_ctor_get(v_s_1482_, 2);
v_isSharedCheck_1636_ = !lean_is_exclusive(v_s_1482_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1610_ = v_s_1482_;
v_isShared_1611_ = v_isSharedCheck_1636_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_ms_1608_);
lean_inc(v_tys_1607_);
lean_inc(v_e_1606_);
lean_dec(v_s_1482_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1636_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___f_1612_; uint8_t v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1616_; 
v___f_1612_ = ((lean_object*)(l_Lean_ModuleUsage_IREnc_irType___closed__0));
v___x_1613_ = 10;
v___x_1614_ = lean_byte_array_push(v_e_1606_, v___x_1613_);
if (v_isShared_1611_ == 0)
{
lean_ctor_set(v___x_1610_, 0, v___x_1614_);
v___x_1616_ = v___x_1610_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v___x_1614_);
lean_ctor_set(v_reuseFailAlloc_1635_, 1, v_tys_1607_);
lean_ctor_set(v_reuseFailAlloc_1635_, 2, v_ms_1608_);
v___x_1616_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
lean_object* v___x_1617_; lean_object* v_e_1618_; lean_object* v_tys_1619_; lean_object* v_ms_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1634_; 
v___x_1617_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_1616_, v_leanTypeName_1604_, v___f_1612_);
v_e_1618_ = lean_ctor_get(v___x_1617_, 0);
v_tys_1619_ = lean_ctor_get(v___x_1617_, 1);
v_ms_1620_ = lean_ctor_get(v___x_1617_, 2);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1622_ = v___x_1617_;
v_isShared_1623_ = v_isSharedCheck_1634_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_ms_1620_);
lean_inc(v_tys_1619_);
lean_inc(v_e_1618_);
lean_dec(v___x_1617_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1634_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1627_; 
v___x_1624_ = lean_array_get_size(v_types_1605_);
v___x_1625_ = l_Lean_ModuleUsage_Enc_nat(v_e_1618_, v___x_1624_);
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 0, v___x_1625_);
v___x_1627_ = v___x_1622_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v___x_1625_);
lean_ctor_set(v_reuseFailAlloc_1633_, 1, v_tys_1619_);
lean_ctor_set(v_reuseFailAlloc_1633_, 2, v_ms_1620_);
v___x_1627_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
lean_object* v___x_1628_; uint8_t v___x_1629_; 
v___x_1628_ = lean_unsigned_to_nat(0u);
v___x_1629_ = lean_nat_dec_lt(v___x_1628_, v___x_1624_);
if (v___x_1629_ == 0)
{
lean_dec_ref(v_types_1605_);
return v___x_1627_;
}
else
{
size_t v___x_1630_; size_t v___x_1631_; lean_object* v___x_1632_; 
v___x_1630_ = ((size_t)0ULL);
v___x_1631_ = lean_usize_of_nat(v___x_1624_);
v___x_1632_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_irType_spec__0(v_types_1605_, v___x_1630_, v___x_1631_, v___x_1627_);
lean_dec_ref(v_types_1605_);
return v___x_1632_;
}
}
}
}
}
}
case 11:
{
lean_object* v_leanTypeName_1637_; lean_object* v_types_1638_; lean_object* v_e_1639_; lean_object* v_tys_1640_; lean_object* v_ms_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1659_; 
v_leanTypeName_1637_ = lean_ctor_get(v_x_1483_, 0);
lean_inc(v_leanTypeName_1637_);
v_types_1638_ = lean_ctor_get(v_x_1483_, 1);
lean_inc_ref(v_types_1638_);
lean_dec_ref_known(v_x_1483_, 2);
v_e_1639_ = lean_ctor_get(v_s_1482_, 0);
v_tys_1640_ = lean_ctor_get(v_s_1482_, 1);
v_ms_1641_ = lean_ctor_get(v_s_1482_, 2);
v_isSharedCheck_1659_ = !lean_is_exclusive(v_s_1482_);
if (v_isSharedCheck_1659_ == 0)
{
v___x_1643_ = v_s_1482_;
v_isShared_1644_ = v_isSharedCheck_1659_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_ms_1641_);
lean_inc(v_tys_1640_);
lean_inc(v_e_1639_);
lean_dec(v_s_1482_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1659_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
uint8_t v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1652_; 
v___x_1645_ = 11;
v___x_1646_ = lean_byte_array_push(v_e_1639_, v___x_1645_);
lean_inc(v_leanTypeName_1637_);
v___x_1647_ = l_Lean_ModuleUsage_Enc_name(v___x_1646_, v_leanTypeName_1637_);
v___x_1648_ = l_Lean_NameSet_insert(v_ms_1641_, v_leanTypeName_1637_);
v___x_1649_ = lean_array_get_size(v_types_1638_);
v___x_1650_ = l_Lean_ModuleUsage_Enc_nat(v___x_1647_, v___x_1649_);
if (v_isShared_1644_ == 0)
{
lean_ctor_set(v___x_1643_, 2, v___x_1648_);
lean_ctor_set(v___x_1643_, 0, v___x_1650_);
v___x_1652_ = v___x_1643_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v___x_1650_);
lean_ctor_set(v_reuseFailAlloc_1658_, 1, v_tys_1640_);
lean_ctor_set(v_reuseFailAlloc_1658_, 2, v___x_1648_);
v___x_1652_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
lean_object* v___x_1653_; uint8_t v___x_1654_; 
v___x_1653_ = lean_unsigned_to_nat(0u);
v___x_1654_ = lean_nat_dec_lt(v___x_1653_, v___x_1649_);
if (v___x_1654_ == 0)
{
lean_dec_ref(v_types_1638_);
return v___x_1652_;
}
else
{
size_t v___x_1655_; size_t v___x_1656_; lean_object* v___x_1657_; 
v___x_1655_ = ((size_t)0ULL);
v___x_1656_ = lean_usize_of_nat(v___x_1649_);
v___x_1657_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_irType_spec__0(v_types_1638_, v___x_1655_, v___x_1656_, v___x_1652_);
lean_dec_ref(v_types_1638_);
return v___x_1657_;
}
}
}
}
case 12:
{
lean_object* v_e_1660_; lean_object* v_tys_1661_; lean_object* v_ms_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1671_; 
v_e_1660_ = lean_ctor_get(v_s_1482_, 0);
v_tys_1661_ = lean_ctor_get(v_s_1482_, 1);
v_ms_1662_ = lean_ctor_get(v_s_1482_, 2);
v_isSharedCheck_1671_ = !lean_is_exclusive(v_s_1482_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1664_ = v_s_1482_;
v_isShared_1665_ = v_isSharedCheck_1671_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_ms_1662_);
lean_inc(v_tys_1661_);
lean_inc(v_e_1660_);
lean_dec(v_s_1482_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1671_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
uint8_t v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1669_; 
v___x_1666_ = 12;
v___x_1667_ = lean_byte_array_push(v_e_1660_, v___x_1666_);
if (v_isShared_1665_ == 0)
{
lean_ctor_set(v___x_1664_, 0, v___x_1667_);
v___x_1669_ = v___x_1664_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v___x_1667_);
lean_ctor_set(v_reuseFailAlloc_1670_, 1, v_tys_1661_);
lean_ctor_set(v_reuseFailAlloc_1670_, 2, v_ms_1662_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
default: 
{
lean_object* v_e_1672_; lean_object* v_tys_1673_; lean_object* v_ms_1674_; lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1683_; 
v_e_1672_ = lean_ctor_get(v_s_1482_, 0);
v_tys_1673_ = lean_ctor_get(v_s_1482_, 1);
v_ms_1674_ = lean_ctor_get(v_s_1482_, 2);
v_isSharedCheck_1683_ = !lean_is_exclusive(v_s_1482_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1676_ = v_s_1482_;
v_isShared_1677_ = v_isSharedCheck_1683_;
goto v_resetjp_1675_;
}
else
{
lean_inc(v_ms_1674_);
lean_inc(v_tys_1673_);
lean_inc(v_e_1672_);
lean_dec(v_s_1482_);
v___x_1676_ = lean_box(0);
v_isShared_1677_ = v_isSharedCheck_1683_;
goto v_resetjp_1675_;
}
v_resetjp_1675_:
{
uint8_t v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1681_; 
v___x_1678_ = 13;
v___x_1679_ = lean_byte_array_push(v_e_1672_, v___x_1678_);
if (v_isShared_1677_ == 0)
{
lean_ctor_set(v___x_1676_, 0, v___x_1679_);
v___x_1681_ = v___x_1676_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v___x_1679_);
lean_ctor_set(v_reuseFailAlloc_1682_, 1, v_tys_1673_);
lean_ctor_set(v_reuseFailAlloc_1682_, 2, v_ms_1674_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_irType_spec__0(lean_object* v_as_1684_, size_t v_i_1685_, size_t v_stop_1686_, lean_object* v_b_1687_){
_start:
{
uint8_t v___x_1688_; 
v___x_1688_ = lean_usize_dec_eq(v_i_1685_, v_stop_1686_);
if (v___x_1688_ == 0)
{
lean_object* v___x_1689_; lean_object* v___x_1690_; size_t v___x_1691_; size_t v___x_1692_; 
v___x_1689_ = lean_array_uget_borrowed(v_as_1684_, v_i_1685_);
lean_inc(v___x_1689_);
v___x_1690_ = l_Lean_ModuleUsage_IREnc_irType(v_b_1687_, v___x_1689_);
v___x_1691_ = ((size_t)1ULL);
v___x_1692_ = lean_usize_add(v_i_1685_, v___x_1691_);
v_i_1685_ = v___x_1692_;
v_b_1687_ = v___x_1690_;
goto _start;
}
else
{
return v_b_1687_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_irType_spec__0___boxed(lean_object* v_as_1694_, lean_object* v_i_1695_, lean_object* v_stop_1696_, lean_object* v_b_1697_){
_start:
{
size_t v_i_boxed_1698_; size_t v_stop_boxed_1699_; lean_object* v_res_1700_; 
v_i_boxed_1698_ = lean_unbox_usize(v_i_1695_);
lean_dec(v_i_1695_);
v_stop_boxed_1699_ = lean_unbox_usize(v_stop_1696_);
lean_dec(v_stop_1696_);
v_res_1700_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_irType_spec__0(v_as_1694_, v_i_boxed_1698_, v_stop_boxed_1699_, v_b_1697_);
lean_dec_ref(v_as_1694_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_var(lean_object* v_s_1701_, lean_object* v_x_1702_){
_start:
{
lean_object* v_e_1703_; lean_object* v_tys_1704_; lean_object* v_ms_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1713_; 
v_e_1703_ = lean_ctor_get(v_s_1701_, 0);
v_tys_1704_ = lean_ctor_get(v_s_1701_, 1);
v_ms_1705_ = lean_ctor_get(v_s_1701_, 2);
v_isSharedCheck_1713_ = !lean_is_exclusive(v_s_1701_);
if (v_isSharedCheck_1713_ == 0)
{
v___x_1707_ = v_s_1701_;
v_isShared_1708_ = v_isSharedCheck_1713_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_ms_1705_);
lean_inc(v_tys_1704_);
lean_inc(v_e_1703_);
lean_dec(v_s_1701_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1713_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1709_; lean_object* v___x_1711_; 
v___x_1709_ = l_Lean_ModuleUsage_Enc_nat(v_e_1703_, v_x_1702_);
if (v_isShared_1708_ == 0)
{
lean_ctor_set(v___x_1707_, 0, v___x_1709_);
v___x_1711_ = v___x_1707_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v___x_1709_);
lean_ctor_set(v_reuseFailAlloc_1712_, 1, v_tys_1704_);
lean_ctor_set(v_reuseFailAlloc_1712_, 2, v_ms_1705_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_jp(lean_object* v_s_1714_, lean_object* v_j_1715_){
_start:
{
lean_object* v_e_1716_; lean_object* v_tys_1717_; lean_object* v_ms_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1726_; 
v_e_1716_ = lean_ctor_get(v_s_1714_, 0);
v_tys_1717_ = lean_ctor_get(v_s_1714_, 1);
v_ms_1718_ = lean_ctor_get(v_s_1714_, 2);
v_isSharedCheck_1726_ = !lean_is_exclusive(v_s_1714_);
if (v_isSharedCheck_1726_ == 0)
{
v___x_1720_ = v_s_1714_;
v_isShared_1721_ = v_isSharedCheck_1726_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_ms_1718_);
lean_inc(v_tys_1717_);
lean_inc(v_e_1716_);
lean_dec(v_s_1714_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1726_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1722_; lean_object* v___x_1724_; 
v___x_1722_ = l_Lean_ModuleUsage_Enc_nat(v_e_1716_, v_j_1715_);
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1722_);
v___x_1724_ = v___x_1720_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v___x_1722_);
lean_ctor_set(v_reuseFailAlloc_1725_, 1, v_tys_1717_);
lean_ctor_set(v_reuseFailAlloc_1725_, 2, v_ms_1718_);
v___x_1724_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
return v___x_1724_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_arg(lean_object* v_s_1727_, lean_object* v_x_1728_){
_start:
{
if (lean_obj_tag(v_x_1728_) == 0)
{
lean_object* v_id_1729_; lean_object* v_e_1730_; lean_object* v_tys_1731_; lean_object* v_ms_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1742_; 
v_id_1729_ = lean_ctor_get(v_x_1728_, 0);
lean_inc(v_id_1729_);
lean_dec_ref_known(v_x_1728_, 1);
v_e_1730_ = lean_ctor_get(v_s_1727_, 0);
v_tys_1731_ = lean_ctor_get(v_s_1727_, 1);
v_ms_1732_ = lean_ctor_get(v_s_1727_, 2);
v_isSharedCheck_1742_ = !lean_is_exclusive(v_s_1727_);
if (v_isSharedCheck_1742_ == 0)
{
v___x_1734_ = v_s_1727_;
v_isShared_1735_ = v_isSharedCheck_1742_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_ms_1732_);
lean_inc(v_tys_1731_);
lean_inc(v_e_1730_);
lean_dec(v_s_1727_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1742_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
uint8_t v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1739_; 
v___x_1736_ = 0;
v___x_1737_ = lean_byte_array_push(v_e_1730_, v___x_1736_);
if (v_isShared_1735_ == 0)
{
lean_ctor_set(v___x_1734_, 0, v___x_1737_);
v___x_1739_ = v___x_1734_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v___x_1737_);
lean_ctor_set(v_reuseFailAlloc_1741_, 1, v_tys_1731_);
lean_ctor_set(v_reuseFailAlloc_1741_, 2, v_ms_1732_);
v___x_1739_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
lean_object* v___x_1740_; 
v___x_1740_ = l_Lean_ModuleUsage_IREnc_var(v___x_1739_, v_id_1729_);
return v___x_1740_;
}
}
}
else
{
lean_object* v_e_1743_; lean_object* v_tys_1744_; lean_object* v_ms_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1754_; 
v_e_1743_ = lean_ctor_get(v_s_1727_, 0);
v_tys_1744_ = lean_ctor_get(v_s_1727_, 1);
v_ms_1745_ = lean_ctor_get(v_s_1727_, 2);
v_isSharedCheck_1754_ = !lean_is_exclusive(v_s_1727_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1747_ = v_s_1727_;
v_isShared_1748_ = v_isSharedCheck_1754_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_ms_1745_);
lean_inc(v_tys_1744_);
lean_inc(v_e_1743_);
lean_dec(v_s_1727_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1754_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
uint8_t v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1752_; 
v___x_1749_ = 1;
v___x_1750_ = lean_byte_array_push(v_e_1743_, v___x_1749_);
if (v_isShared_1748_ == 0)
{
lean_ctor_set(v___x_1747_, 0, v___x_1750_);
v___x_1752_ = v___x_1747_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v___x_1750_);
lean_ctor_set(v_reuseFailAlloc_1753_, 1, v_tys_1744_);
lean_ctor_set(v_reuseFailAlloc_1753_, 2, v_ms_1745_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_args_spec__0(lean_object* v_as_1755_, size_t v_i_1756_, size_t v_stop_1757_, lean_object* v_b_1758_){
_start:
{
uint8_t v___x_1759_; 
v___x_1759_ = lean_usize_dec_eq(v_i_1756_, v_stop_1757_);
if (v___x_1759_ == 0)
{
lean_object* v___x_1760_; lean_object* v___x_1761_; size_t v___x_1762_; size_t v___x_1763_; 
v___x_1760_ = lean_array_uget_borrowed(v_as_1755_, v_i_1756_);
lean_inc(v___x_1760_);
v___x_1761_ = l_Lean_ModuleUsage_IREnc_arg(v_b_1758_, v___x_1760_);
v___x_1762_ = ((size_t)1ULL);
v___x_1763_ = lean_usize_add(v_i_1756_, v___x_1762_);
v_i_1756_ = v___x_1763_;
v_b_1758_ = v___x_1761_;
goto _start;
}
else
{
return v_b_1758_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_args_spec__0___boxed(lean_object* v_as_1765_, lean_object* v_i_1766_, lean_object* v_stop_1767_, lean_object* v_b_1768_){
_start:
{
size_t v_i_boxed_1769_; size_t v_stop_boxed_1770_; lean_object* v_res_1771_; 
v_i_boxed_1769_ = lean_unbox_usize(v_i_1766_);
lean_dec(v_i_1766_);
v_stop_boxed_1770_ = lean_unbox_usize(v_stop_1767_);
lean_dec(v_stop_1767_);
v_res_1771_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_args_spec__0(v_as_1765_, v_i_boxed_1769_, v_stop_boxed_1770_, v_b_1768_);
lean_dec_ref(v_as_1765_);
return v_res_1771_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_args(lean_object* v_s_1772_, lean_object* v_ys_1773_){
_start:
{
lean_object* v_e_1774_; lean_object* v_tys_1775_; lean_object* v_ms_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1790_; 
v_e_1774_ = lean_ctor_get(v_s_1772_, 0);
v_tys_1775_ = lean_ctor_get(v_s_1772_, 1);
v_ms_1776_ = lean_ctor_get(v_s_1772_, 2);
v_isSharedCheck_1790_ = !lean_is_exclusive(v_s_1772_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1778_ = v_s_1772_;
v_isShared_1779_ = v_isSharedCheck_1790_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_ms_1776_);
lean_inc(v_tys_1775_);
lean_inc(v_e_1774_);
lean_dec(v_s_1772_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1790_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1783_; 
v___x_1780_ = lean_array_get_size(v_ys_1773_);
v___x_1781_ = l_Lean_ModuleUsage_Enc_nat(v_e_1774_, v___x_1780_);
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v___x_1781_);
v___x_1783_ = v___x_1778_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v___x_1781_);
lean_ctor_set(v_reuseFailAlloc_1789_, 1, v_tys_1775_);
lean_ctor_set(v_reuseFailAlloc_1789_, 2, v_ms_1776_);
v___x_1783_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
lean_object* v___x_1784_; uint8_t v___x_1785_; 
v___x_1784_ = lean_unsigned_to_nat(0u);
v___x_1785_ = lean_nat_dec_lt(v___x_1784_, v___x_1780_);
if (v___x_1785_ == 0)
{
return v___x_1783_;
}
else
{
size_t v___x_1786_; size_t v___x_1787_; lean_object* v___x_1788_; 
v___x_1786_ = ((size_t)0ULL);
v___x_1787_ = lean_usize_of_nat(v___x_1780_);
v___x_1788_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_args_spec__0(v_ys_1773_, v___x_1786_, v___x_1787_, v___x_1783_);
return v___x_1788_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_args___boxed(lean_object* v_s_1791_, lean_object* v_ys_1792_){
_start:
{
lean_object* v_res_1793_; 
v_res_1793_ = l_Lean_ModuleUsage_IREnc_args(v_s_1791_, v_ys_1792_);
lean_dec_ref(v_ys_1792_);
return v_res_1793_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_ctorInfo(lean_object* v_s_1794_, lean_object* v_i_1795_){
_start:
{
lean_object* v_name_1796_; lean_object* v_cidx_1797_; lean_object* v_size_1798_; lean_object* v_usize_1799_; lean_object* v_ssize_1800_; lean_object* v_e_1801_; lean_object* v_tys_1802_; lean_object* v_ms_1803_; lean_object* v___x_1805_; uint8_t v_isShared_1806_; uint8_t v_isSharedCheck_1816_; 
v_name_1796_ = lean_ctor_get(v_i_1795_, 0);
lean_inc(v_name_1796_);
v_cidx_1797_ = lean_ctor_get(v_i_1795_, 1);
lean_inc(v_cidx_1797_);
v_size_1798_ = lean_ctor_get(v_i_1795_, 2);
lean_inc(v_size_1798_);
v_usize_1799_ = lean_ctor_get(v_i_1795_, 3);
lean_inc(v_usize_1799_);
v_ssize_1800_ = lean_ctor_get(v_i_1795_, 4);
lean_inc(v_ssize_1800_);
lean_dec_ref(v_i_1795_);
v_e_1801_ = lean_ctor_get(v_s_1794_, 0);
v_tys_1802_ = lean_ctor_get(v_s_1794_, 1);
v_ms_1803_ = lean_ctor_get(v_s_1794_, 2);
v_isSharedCheck_1816_ = !lean_is_exclusive(v_s_1794_);
if (v_isSharedCheck_1816_ == 0)
{
v___x_1805_ = v_s_1794_;
v_isShared_1806_ = v_isSharedCheck_1816_;
goto v_resetjp_1804_;
}
else
{
lean_inc(v_ms_1803_);
lean_inc(v_tys_1802_);
lean_inc(v_e_1801_);
lean_dec(v_s_1794_);
v___x_1805_ = lean_box(0);
v_isShared_1806_ = v_isSharedCheck_1816_;
goto v_resetjp_1804_;
}
v_resetjp_1804_:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1814_; 
lean_inc(v_name_1796_);
v___x_1807_ = l_Lean_ModuleUsage_Enc_name(v_e_1801_, v_name_1796_);
v___x_1808_ = l_Lean_NameSet_insert(v_ms_1803_, v_name_1796_);
v___x_1809_ = l_Lean_ModuleUsage_Enc_nat(v___x_1807_, v_cidx_1797_);
v___x_1810_ = l_Lean_ModuleUsage_Enc_nat(v___x_1809_, v_size_1798_);
v___x_1811_ = l_Lean_ModuleUsage_Enc_nat(v___x_1810_, v_usize_1799_);
v___x_1812_ = l_Lean_ModuleUsage_Enc_nat(v___x_1811_, v_ssize_1800_);
if (v_isShared_1806_ == 0)
{
lean_ctor_set(v___x_1805_, 2, v___x_1808_);
lean_ctor_set(v___x_1805_, 0, v___x_1812_);
v___x_1814_ = v___x_1805_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v___x_1812_);
lean_ctor_set(v_reuseFailAlloc_1815_, 1, v_tys_1802_);
lean_ctor_set(v_reuseFailAlloc_1815_, 2, v___x_1808_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
return v___x_1814_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_expr(lean_object* v_s_1817_, lean_object* v_x_1818_){
_start:
{
switch(lean_obj_tag(v_x_1818_))
{
case 0:
{
lean_object* v_i_1819_; lean_object* v_ys_1820_; lean_object* v_e_1821_; lean_object* v_tys_1822_; lean_object* v_ms_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1834_; 
v_i_1819_ = lean_ctor_get(v_x_1818_, 0);
lean_inc_ref(v_i_1819_);
v_ys_1820_ = lean_ctor_get(v_x_1818_, 1);
lean_inc_ref(v_ys_1820_);
lean_dec_ref_known(v_x_1818_, 2);
v_e_1821_ = lean_ctor_get(v_s_1817_, 0);
v_tys_1822_ = lean_ctor_get(v_s_1817_, 1);
v_ms_1823_ = lean_ctor_get(v_s_1817_, 2);
v_isSharedCheck_1834_ = !lean_is_exclusive(v_s_1817_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1825_ = v_s_1817_;
v_isShared_1826_ = v_isSharedCheck_1834_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_ms_1823_);
lean_inc(v_tys_1822_);
lean_inc(v_e_1821_);
lean_dec(v_s_1817_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1834_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
uint8_t v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1830_; 
v___x_1827_ = 0;
v___x_1828_ = lean_byte_array_push(v_e_1821_, v___x_1827_);
if (v_isShared_1826_ == 0)
{
lean_ctor_set(v___x_1825_, 0, v___x_1828_);
v___x_1830_ = v___x_1825_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v___x_1828_);
lean_ctor_set(v_reuseFailAlloc_1833_, 1, v_tys_1822_);
lean_ctor_set(v_reuseFailAlloc_1833_, 2, v_ms_1823_);
v___x_1830_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1831_ = l_Lean_ModuleUsage_IREnc_ctorInfo(v___x_1830_, v_i_1819_);
v___x_1832_ = l_Lean_ModuleUsage_IREnc_args(v___x_1831_, v_ys_1820_);
lean_dec_ref(v_ys_1820_);
return v___x_1832_;
}
}
}
case 1:
{
lean_object* v_n_1835_; lean_object* v_x_1836_; lean_object* v_e_1837_; lean_object* v_tys_1838_; lean_object* v_ms_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1850_; 
v_n_1835_ = lean_ctor_get(v_x_1818_, 0);
lean_inc(v_n_1835_);
v_x_1836_ = lean_ctor_get(v_x_1818_, 1);
lean_inc(v_x_1836_);
lean_dec_ref_known(v_x_1818_, 2);
v_e_1837_ = lean_ctor_get(v_s_1817_, 0);
v_tys_1838_ = lean_ctor_get(v_s_1817_, 1);
v_ms_1839_ = lean_ctor_get(v_s_1817_, 2);
v_isSharedCheck_1850_ = !lean_is_exclusive(v_s_1817_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1841_ = v_s_1817_;
v_isShared_1842_ = v_isSharedCheck_1850_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_ms_1839_);
lean_inc(v_tys_1838_);
lean_inc(v_e_1837_);
lean_dec(v_s_1817_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1850_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
uint8_t v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1847_; 
v___x_1843_ = 1;
v___x_1844_ = lean_byte_array_push(v_e_1837_, v___x_1843_);
v___x_1845_ = l_Lean_ModuleUsage_Enc_nat(v___x_1844_, v_n_1835_);
if (v_isShared_1842_ == 0)
{
lean_ctor_set(v___x_1841_, 0, v___x_1845_);
v___x_1847_ = v___x_1841_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v___x_1845_);
lean_ctor_set(v_reuseFailAlloc_1849_, 1, v_tys_1838_);
lean_ctor_set(v_reuseFailAlloc_1849_, 2, v_ms_1839_);
v___x_1847_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
lean_object* v___x_1848_; 
v___x_1848_ = l_Lean_ModuleUsage_IREnc_var(v___x_1847_, v_x_1836_);
return v___x_1848_;
}
}
}
case 2:
{
lean_object* v_x_1851_; lean_object* v_i_1852_; uint8_t v_updtHeader_1853_; lean_object* v_ys_1854_; lean_object* v_e_1855_; lean_object* v_tys_1856_; lean_object* v_ms_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1880_; 
v_x_1851_ = lean_ctor_get(v_x_1818_, 0);
lean_inc(v_x_1851_);
v_i_1852_ = lean_ctor_get(v_x_1818_, 1);
lean_inc_ref(v_i_1852_);
v_updtHeader_1853_ = lean_ctor_get_uint8(v_x_1818_, sizeof(void*)*3);
v_ys_1854_ = lean_ctor_get(v_x_1818_, 2);
lean_inc_ref(v_ys_1854_);
lean_dec_ref_known(v_x_1818_, 3);
v_e_1855_ = lean_ctor_get(v_s_1817_, 0);
v_tys_1856_ = lean_ctor_get(v_s_1817_, 1);
v_ms_1857_ = lean_ctor_get(v_s_1817_, 2);
v_isSharedCheck_1880_ = !lean_is_exclusive(v_s_1817_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1859_ = v_s_1817_;
v_isShared_1860_ = v_isSharedCheck_1880_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_ms_1857_);
lean_inc(v_tys_1856_);
lean_inc(v_e_1855_);
lean_dec(v_s_1817_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1880_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
uint8_t v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1864_; 
v___x_1861_ = 2;
v___x_1862_ = lean_byte_array_push(v_e_1855_, v___x_1861_);
if (v_isShared_1860_ == 0)
{
lean_ctor_set(v___x_1859_, 0, v___x_1862_);
v___x_1864_ = v___x_1859_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v___x_1862_);
lean_ctor_set(v_reuseFailAlloc_1879_, 1, v_tys_1856_);
lean_ctor_set(v_reuseFailAlloc_1879_, 2, v_ms_1857_);
v___x_1864_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v_e_1867_; lean_object* v_tys_1868_; lean_object* v_ms_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1878_; 
v___x_1865_ = l_Lean_ModuleUsage_IREnc_var(v___x_1864_, v_x_1851_);
v___x_1866_ = l_Lean_ModuleUsage_IREnc_ctorInfo(v___x_1865_, v_i_1852_);
v_e_1867_ = lean_ctor_get(v___x_1866_, 0);
v_tys_1868_ = lean_ctor_get(v___x_1866_, 1);
v_ms_1869_ = lean_ctor_get(v___x_1866_, 2);
v_isSharedCheck_1878_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1871_ = v___x_1866_;
v_isShared_1872_ = v_isSharedCheck_1878_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_ms_1869_);
lean_inc(v_tys_1868_);
lean_inc(v_e_1867_);
lean_dec(v___x_1866_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1878_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v___x_1873_; lean_object* v___x_1875_; 
v___x_1873_ = l_Lean_ModuleUsage_Enc_bool(v_e_1867_, v_updtHeader_1853_);
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 0, v___x_1873_);
v___x_1875_ = v___x_1871_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v___x_1873_);
lean_ctor_set(v_reuseFailAlloc_1877_, 1, v_tys_1868_);
lean_ctor_set(v_reuseFailAlloc_1877_, 2, v_ms_1869_);
v___x_1875_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
lean_object* v___x_1876_; 
v___x_1876_ = l_Lean_ModuleUsage_IREnc_args(v___x_1875_, v_ys_1854_);
lean_dec_ref(v_ys_1854_);
return v___x_1876_;
}
}
}
}
}
case 3:
{
lean_object* v_i_1881_; lean_object* v_x_1882_; lean_object* v_e_1883_; lean_object* v_tys_1884_; lean_object* v_ms_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1896_; 
v_i_1881_ = lean_ctor_get(v_x_1818_, 0);
lean_inc(v_i_1881_);
v_x_1882_ = lean_ctor_get(v_x_1818_, 1);
lean_inc(v_x_1882_);
lean_dec_ref_known(v_x_1818_, 2);
v_e_1883_ = lean_ctor_get(v_s_1817_, 0);
v_tys_1884_ = lean_ctor_get(v_s_1817_, 1);
v_ms_1885_ = lean_ctor_get(v_s_1817_, 2);
v_isSharedCheck_1896_ = !lean_is_exclusive(v_s_1817_);
if (v_isSharedCheck_1896_ == 0)
{
v___x_1887_ = v_s_1817_;
v_isShared_1888_ = v_isSharedCheck_1896_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_ms_1885_);
lean_inc(v_tys_1884_);
lean_inc(v_e_1883_);
lean_dec(v_s_1817_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1896_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
uint8_t v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1893_; 
v___x_1889_ = 3;
v___x_1890_ = lean_byte_array_push(v_e_1883_, v___x_1889_);
v___x_1891_ = l_Lean_ModuleUsage_Enc_nat(v___x_1890_, v_i_1881_);
if (v_isShared_1888_ == 0)
{
lean_ctor_set(v___x_1887_, 0, v___x_1891_);
v___x_1893_ = v___x_1887_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v___x_1891_);
lean_ctor_set(v_reuseFailAlloc_1895_, 1, v_tys_1884_);
lean_ctor_set(v_reuseFailAlloc_1895_, 2, v_ms_1885_);
v___x_1893_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
lean_object* v___x_1894_; 
v___x_1894_ = l_Lean_ModuleUsage_IREnc_var(v___x_1893_, v_x_1882_);
return v___x_1894_;
}
}
}
case 4:
{
lean_object* v_i_1897_; lean_object* v_x_1898_; lean_object* v_e_1899_; lean_object* v_tys_1900_; lean_object* v_ms_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1912_; 
v_i_1897_ = lean_ctor_get(v_x_1818_, 0);
lean_inc(v_i_1897_);
v_x_1898_ = lean_ctor_get(v_x_1818_, 1);
lean_inc(v_x_1898_);
lean_dec_ref_known(v_x_1818_, 2);
v_e_1899_ = lean_ctor_get(v_s_1817_, 0);
v_tys_1900_ = lean_ctor_get(v_s_1817_, 1);
v_ms_1901_ = lean_ctor_get(v_s_1817_, 2);
v_isSharedCheck_1912_ = !lean_is_exclusive(v_s_1817_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1903_ = v_s_1817_;
v_isShared_1904_ = v_isSharedCheck_1912_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_ms_1901_);
lean_inc(v_tys_1900_);
lean_inc(v_e_1899_);
lean_dec(v_s_1817_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1912_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
uint8_t v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1909_; 
v___x_1905_ = 4;
v___x_1906_ = lean_byte_array_push(v_e_1899_, v___x_1905_);
v___x_1907_ = l_Lean_ModuleUsage_Enc_nat(v___x_1906_, v_i_1897_);
if (v_isShared_1904_ == 0)
{
lean_ctor_set(v___x_1903_, 0, v___x_1907_);
v___x_1909_ = v___x_1903_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v___x_1907_);
lean_ctor_set(v_reuseFailAlloc_1911_, 1, v_tys_1900_);
lean_ctor_set(v_reuseFailAlloc_1911_, 2, v_ms_1901_);
v___x_1909_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
lean_object* v___x_1910_; 
v___x_1910_ = l_Lean_ModuleUsage_IREnc_var(v___x_1909_, v_x_1898_);
return v___x_1910_;
}
}
}
case 5:
{
lean_object* v_n_1913_; lean_object* v_offset_1914_; lean_object* v_x_1915_; lean_object* v_e_1916_; lean_object* v_tys_1917_; lean_object* v_ms_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1930_; 
v_n_1913_ = lean_ctor_get(v_x_1818_, 0);
lean_inc(v_n_1913_);
v_offset_1914_ = lean_ctor_get(v_x_1818_, 1);
lean_inc(v_offset_1914_);
v_x_1915_ = lean_ctor_get(v_x_1818_, 2);
lean_inc(v_x_1915_);
lean_dec_ref_known(v_x_1818_, 3);
v_e_1916_ = lean_ctor_get(v_s_1817_, 0);
v_tys_1917_ = lean_ctor_get(v_s_1817_, 1);
v_ms_1918_ = lean_ctor_get(v_s_1817_, 2);
v_isSharedCheck_1930_ = !lean_is_exclusive(v_s_1817_);
if (v_isSharedCheck_1930_ == 0)
{
v___x_1920_ = v_s_1817_;
v_isShared_1921_ = v_isSharedCheck_1930_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_ms_1918_);
lean_inc(v_tys_1917_);
lean_inc(v_e_1916_);
lean_dec(v_s_1817_);
v___x_1920_ = lean_box(0);
v_isShared_1921_ = v_isSharedCheck_1930_;
goto v_resetjp_1919_;
}
v_resetjp_1919_:
{
uint8_t v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1927_; 
v___x_1922_ = 5;
v___x_1923_ = lean_byte_array_push(v_e_1916_, v___x_1922_);
v___x_1924_ = l_Lean_ModuleUsage_Enc_nat(v___x_1923_, v_n_1913_);
v___x_1925_ = l_Lean_ModuleUsage_Enc_nat(v___x_1924_, v_offset_1914_);
if (v_isShared_1921_ == 0)
{
lean_ctor_set(v___x_1920_, 0, v___x_1925_);
v___x_1927_ = v___x_1920_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1929_, 0, v___x_1925_);
lean_ctor_set(v_reuseFailAlloc_1929_, 1, v_tys_1917_);
lean_ctor_set(v_reuseFailAlloc_1929_, 2, v_ms_1918_);
v___x_1927_ = v_reuseFailAlloc_1929_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
lean_object* v___x_1928_; 
v___x_1928_ = l_Lean_ModuleUsage_IREnc_var(v___x_1927_, v_x_1915_);
return v___x_1928_;
}
}
}
case 6:
{
lean_object* v_c_1931_; lean_object* v_ys_1932_; lean_object* v_e_1933_; lean_object* v_tys_1934_; lean_object* v_ms_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1947_; 
v_c_1931_ = lean_ctor_get(v_x_1818_, 0);
lean_inc(v_c_1931_);
v_ys_1932_ = lean_ctor_get(v_x_1818_, 1);
lean_inc_ref(v_ys_1932_);
lean_dec_ref_known(v_x_1818_, 2);
v_e_1933_ = lean_ctor_get(v_s_1817_, 0);
v_tys_1934_ = lean_ctor_get(v_s_1817_, 1);
v_ms_1935_ = lean_ctor_get(v_s_1817_, 2);
v_isSharedCheck_1947_ = !lean_is_exclusive(v_s_1817_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1937_ = v_s_1817_;
v_isShared_1938_ = v_isSharedCheck_1947_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_ms_1935_);
lean_inc(v_tys_1934_);
lean_inc(v_e_1933_);
lean_dec(v_s_1817_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1947_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
uint8_t v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1944_; 
v___x_1939_ = 6;
v___x_1940_ = lean_byte_array_push(v_e_1933_, v___x_1939_);
lean_inc(v_c_1931_);
v___x_1941_ = l_Lean_ModuleUsage_Enc_name(v___x_1940_, v_c_1931_);
v___x_1942_ = l_Lean_NameSet_insert(v_ms_1935_, v_c_1931_);
if (v_isShared_1938_ == 0)
{
lean_ctor_set(v___x_1937_, 2, v___x_1942_);
lean_ctor_set(v___x_1937_, 0, v___x_1941_);
v___x_1944_ = v___x_1937_;
goto v_reusejp_1943_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v___x_1941_);
lean_ctor_set(v_reuseFailAlloc_1946_, 1, v_tys_1934_);
lean_ctor_set(v_reuseFailAlloc_1946_, 2, v___x_1942_);
v___x_1944_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1943_;
}
v_reusejp_1943_:
{
lean_object* v___x_1945_; 
v___x_1945_ = l_Lean_ModuleUsage_IREnc_args(v___x_1944_, v_ys_1932_);
lean_dec_ref(v_ys_1932_);
return v___x_1945_;
}
}
}
case 7:
{
lean_object* v_c_1948_; lean_object* v_ys_1949_; lean_object* v_e_1950_; lean_object* v_tys_1951_; lean_object* v_ms_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1964_; 
v_c_1948_ = lean_ctor_get(v_x_1818_, 0);
lean_inc(v_c_1948_);
v_ys_1949_ = lean_ctor_get(v_x_1818_, 1);
lean_inc_ref(v_ys_1949_);
lean_dec_ref_known(v_x_1818_, 2);
v_e_1950_ = lean_ctor_get(v_s_1817_, 0);
v_tys_1951_ = lean_ctor_get(v_s_1817_, 1);
v_ms_1952_ = lean_ctor_get(v_s_1817_, 2);
v_isSharedCheck_1964_ = !lean_is_exclusive(v_s_1817_);
if (v_isSharedCheck_1964_ == 0)
{
v___x_1954_ = v_s_1817_;
v_isShared_1955_ = v_isSharedCheck_1964_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_ms_1952_);
lean_inc(v_tys_1951_);
lean_inc(v_e_1950_);
lean_dec(v_s_1817_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1964_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
uint8_t v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1961_; 
v___x_1956_ = 7;
v___x_1957_ = lean_byte_array_push(v_e_1950_, v___x_1956_);
lean_inc(v_c_1948_);
v___x_1958_ = l_Lean_ModuleUsage_Enc_name(v___x_1957_, v_c_1948_);
v___x_1959_ = l_Lean_NameSet_insert(v_ms_1952_, v_c_1948_);
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 2, v___x_1959_);
lean_ctor_set(v___x_1954_, 0, v___x_1958_);
v___x_1961_ = v___x_1954_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v___x_1958_);
lean_ctor_set(v_reuseFailAlloc_1963_, 1, v_tys_1951_);
lean_ctor_set(v_reuseFailAlloc_1963_, 2, v___x_1959_);
v___x_1961_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
lean_object* v___x_1962_; 
v___x_1962_ = l_Lean_ModuleUsage_IREnc_args(v___x_1961_, v_ys_1949_);
lean_dec_ref(v_ys_1949_);
return v___x_1962_;
}
}
}
case 8:
{
lean_object* v_x_1965_; lean_object* v_ys_1966_; lean_object* v_e_1967_; lean_object* v_tys_1968_; lean_object* v_ms_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1980_; 
v_x_1965_ = lean_ctor_get(v_x_1818_, 0);
lean_inc(v_x_1965_);
v_ys_1966_ = lean_ctor_get(v_x_1818_, 1);
lean_inc_ref(v_ys_1966_);
lean_dec_ref_known(v_x_1818_, 2);
v_e_1967_ = lean_ctor_get(v_s_1817_, 0);
v_tys_1968_ = lean_ctor_get(v_s_1817_, 1);
v_ms_1969_ = lean_ctor_get(v_s_1817_, 2);
v_isSharedCheck_1980_ = !lean_is_exclusive(v_s_1817_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1971_ = v_s_1817_;
v_isShared_1972_ = v_isSharedCheck_1980_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_ms_1969_);
lean_inc(v_tys_1968_);
lean_inc(v_e_1967_);
lean_dec(v_s_1817_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1980_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
uint8_t v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1976_; 
v___x_1973_ = 8;
v___x_1974_ = lean_byte_array_push(v_e_1967_, v___x_1973_);
if (v_isShared_1972_ == 0)
{
lean_ctor_set(v___x_1971_, 0, v___x_1974_);
v___x_1976_ = v___x_1971_;
goto v_reusejp_1975_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v___x_1974_);
lean_ctor_set(v_reuseFailAlloc_1979_, 1, v_tys_1968_);
lean_ctor_set(v_reuseFailAlloc_1979_, 2, v_ms_1969_);
v___x_1976_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1975_;
}
v_reusejp_1975_:
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1977_ = l_Lean_ModuleUsage_IREnc_var(v___x_1976_, v_x_1965_);
v___x_1978_ = l_Lean_ModuleUsage_IREnc_args(v___x_1977_, v_ys_1966_);
lean_dec_ref(v_ys_1966_);
return v___x_1978_;
}
}
}
case 9:
{
lean_object* v_ty_1981_; lean_object* v_x_1982_; lean_object* v_e_1983_; lean_object* v_tys_1984_; lean_object* v_ms_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1996_; 
v_ty_1981_ = lean_ctor_get(v_x_1818_, 0);
lean_inc(v_ty_1981_);
v_x_1982_ = lean_ctor_get(v_x_1818_, 1);
lean_inc(v_x_1982_);
lean_dec_ref_known(v_x_1818_, 2);
v_e_1983_ = lean_ctor_get(v_s_1817_, 0);
v_tys_1984_ = lean_ctor_get(v_s_1817_, 1);
v_ms_1985_ = lean_ctor_get(v_s_1817_, 2);
v_isSharedCheck_1996_ = !lean_is_exclusive(v_s_1817_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1987_ = v_s_1817_;
v_isShared_1988_ = v_isSharedCheck_1996_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_ms_1985_);
lean_inc(v_tys_1984_);
lean_inc(v_e_1983_);
lean_dec(v_s_1817_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1996_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
uint8_t v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1992_; 
v___x_1989_ = 9;
v___x_1990_ = lean_byte_array_push(v_e_1983_, v___x_1989_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 0, v___x_1990_);
v___x_1992_ = v___x_1987_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v___x_1990_);
lean_ctor_set(v_reuseFailAlloc_1995_, 1, v_tys_1984_);
lean_ctor_set(v_reuseFailAlloc_1995_, 2, v_ms_1985_);
v___x_1992_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1993_ = l_Lean_ModuleUsage_IREnc_irType(v___x_1992_, v_ty_1981_);
v___x_1994_ = l_Lean_ModuleUsage_IREnc_var(v___x_1993_, v_x_1982_);
return v___x_1994_;
}
}
}
case 10:
{
lean_object* v_x_1997_; lean_object* v_e_1998_; lean_object* v_tys_1999_; lean_object* v_ms_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2010_; 
v_x_1997_ = lean_ctor_get(v_x_1818_, 0);
lean_inc(v_x_1997_);
lean_dec_ref_known(v_x_1818_, 1);
v_e_1998_ = lean_ctor_get(v_s_1817_, 0);
v_tys_1999_ = lean_ctor_get(v_s_1817_, 1);
v_ms_2000_ = lean_ctor_get(v_s_1817_, 2);
v_isSharedCheck_2010_ = !lean_is_exclusive(v_s_1817_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_2002_ = v_s_1817_;
v_isShared_2003_ = v_isSharedCheck_2010_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_ms_2000_);
lean_inc(v_tys_1999_);
lean_inc(v_e_1998_);
lean_dec(v_s_1817_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2010_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
uint8_t v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2007_; 
v___x_2004_ = 10;
v___x_2005_ = lean_byte_array_push(v_e_1998_, v___x_2004_);
if (v_isShared_2003_ == 0)
{
lean_ctor_set(v___x_2002_, 0, v___x_2005_);
v___x_2007_ = v___x_2002_;
goto v_reusejp_2006_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v___x_2005_);
lean_ctor_set(v_reuseFailAlloc_2009_, 1, v_tys_1999_);
lean_ctor_set(v_reuseFailAlloc_2009_, 2, v_ms_2000_);
v___x_2007_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2006_;
}
v_reusejp_2006_:
{
lean_object* v___x_2008_; 
v___x_2008_ = l_Lean_ModuleUsage_IREnc_var(v___x_2007_, v_x_1997_);
return v___x_2008_;
}
}
}
case 11:
{
lean_object* v_v_2011_; 
v_v_2011_ = lean_ctor_get(v_x_1818_, 0);
lean_inc_ref(v_v_2011_);
lean_dec_ref_known(v_x_1818_, 1);
if (lean_obj_tag(v_v_2011_) == 0)
{
lean_object* v_v_2012_; lean_object* v_e_2013_; lean_object* v_tys_2014_; lean_object* v_ms_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2025_; 
v_v_2012_ = lean_ctor_get(v_v_2011_, 0);
lean_inc(v_v_2012_);
lean_dec_ref_known(v_v_2011_, 1);
v_e_2013_ = lean_ctor_get(v_s_1817_, 0);
v_tys_2014_ = lean_ctor_get(v_s_1817_, 1);
v_ms_2015_ = lean_ctor_get(v_s_1817_, 2);
v_isSharedCheck_2025_ = !lean_is_exclusive(v_s_1817_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_2017_ = v_s_1817_;
v_isShared_2018_ = v_isSharedCheck_2025_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_ms_2015_);
lean_inc(v_tys_2014_);
lean_inc(v_e_2013_);
lean_dec(v_s_1817_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2025_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
uint8_t v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2023_; 
v___x_2019_ = 11;
v___x_2020_ = lean_byte_array_push(v_e_2013_, v___x_2019_);
v___x_2021_ = l_Lean_ModuleUsage_Enc_nat(v___x_2020_, v_v_2012_);
if (v_isShared_2018_ == 0)
{
lean_ctor_set(v___x_2017_, 0, v___x_2021_);
v___x_2023_ = v___x_2017_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v___x_2021_);
lean_ctor_set(v_reuseFailAlloc_2024_, 1, v_tys_2014_);
lean_ctor_set(v_reuseFailAlloc_2024_, 2, v_ms_2015_);
v___x_2023_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
return v___x_2023_;
}
}
}
else
{
lean_object* v_v_2026_; lean_object* v_e_2027_; lean_object* v_tys_2028_; lean_object* v_ms_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2039_; 
v_v_2026_ = lean_ctor_get(v_v_2011_, 0);
lean_inc_ref(v_v_2026_);
lean_dec_ref_known(v_v_2011_, 1);
v_e_2027_ = lean_ctor_get(v_s_1817_, 0);
v_tys_2028_ = lean_ctor_get(v_s_1817_, 1);
v_ms_2029_ = lean_ctor_get(v_s_1817_, 2);
v_isSharedCheck_2039_ = !lean_is_exclusive(v_s_1817_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2031_ = v_s_1817_;
v_isShared_2032_ = v_isSharedCheck_2039_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_ms_2029_);
lean_inc(v_tys_2028_);
lean_inc(v_e_2027_);
lean_dec(v_s_1817_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2039_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
uint8_t v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2037_; 
v___x_2033_ = 12;
v___x_2034_ = lean_byte_array_push(v_e_2027_, v___x_2033_);
v___x_2035_ = l_Lean_ModuleUsage_Enc_str(v___x_2034_, v_v_2026_);
if (v_isShared_2032_ == 0)
{
lean_ctor_set(v___x_2031_, 0, v___x_2035_);
v___x_2037_ = v___x_2031_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v___x_2035_);
lean_ctor_set(v_reuseFailAlloc_2038_, 1, v_tys_2028_);
lean_ctor_set(v_reuseFailAlloc_2038_, 2, v_ms_2029_);
v___x_2037_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
return v___x_2037_;
}
}
}
}
default: 
{
lean_object* v_x_2040_; lean_object* v_e_2041_; lean_object* v_tys_2042_; lean_object* v_ms_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2053_; 
v_x_2040_ = lean_ctor_get(v_x_1818_, 0);
lean_inc(v_x_2040_);
lean_dec_ref_known(v_x_1818_, 1);
v_e_2041_ = lean_ctor_get(v_s_1817_, 0);
v_tys_2042_ = lean_ctor_get(v_s_1817_, 1);
v_ms_2043_ = lean_ctor_get(v_s_1817_, 2);
v_isSharedCheck_2053_ = !lean_is_exclusive(v_s_1817_);
if (v_isSharedCheck_2053_ == 0)
{
v___x_2045_ = v_s_1817_;
v_isShared_2046_ = v_isSharedCheck_2053_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_ms_2043_);
lean_inc(v_tys_2042_);
lean_inc(v_e_2041_);
lean_dec(v_s_1817_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2053_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
uint8_t v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2050_; 
v___x_2047_ = 13;
v___x_2048_ = lean_byte_array_push(v_e_2041_, v___x_2047_);
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 0, v___x_2048_);
v___x_2050_ = v___x_2045_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v___x_2048_);
lean_ctor_set(v_reuseFailAlloc_2052_, 1, v_tys_2042_);
lean_ctor_set(v_reuseFailAlloc_2052_, 2, v_ms_2043_);
v___x_2050_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
lean_object* v___x_2051_; 
v___x_2051_ = l_Lean_ModuleUsage_IREnc_var(v___x_2050_, v_x_2040_);
return v___x_2051_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_param(lean_object* v_s_2054_, lean_object* v_p_2055_){
_start:
{
lean_object* v_x_2056_; uint8_t v_borrow_2057_; lean_object* v_ty_2058_; lean_object* v___x_2059_; lean_object* v_e_2060_; lean_object* v_tys_2061_; lean_object* v_ms_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2071_; 
v_x_2056_ = lean_ctor_get(v_p_2055_, 0);
lean_inc(v_x_2056_);
v_borrow_2057_ = lean_ctor_get_uint8(v_p_2055_, sizeof(void*)*2);
v_ty_2058_ = lean_ctor_get(v_p_2055_, 1);
lean_inc(v_ty_2058_);
lean_dec_ref(v_p_2055_);
v___x_2059_ = l_Lean_ModuleUsage_IREnc_var(v_s_2054_, v_x_2056_);
v_e_2060_ = lean_ctor_get(v___x_2059_, 0);
v_tys_2061_ = lean_ctor_get(v___x_2059_, 1);
v_ms_2062_ = lean_ctor_get(v___x_2059_, 2);
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2071_ == 0)
{
v___x_2064_ = v___x_2059_;
v_isShared_2065_ = v_isSharedCheck_2071_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_ms_2062_);
lean_inc(v_tys_2061_);
lean_inc(v_e_2060_);
lean_dec(v___x_2059_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2071_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2066_; lean_object* v___x_2068_; 
v___x_2066_ = l_Lean_ModuleUsage_Enc_bool(v_e_2060_, v_borrow_2057_);
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 0, v___x_2066_);
v___x_2068_ = v___x_2064_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v___x_2066_);
lean_ctor_set(v_reuseFailAlloc_2070_, 1, v_tys_2061_);
lean_ctor_set(v_reuseFailAlloc_2070_, 2, v_ms_2062_);
v___x_2068_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
lean_object* v___x_2069_; 
v___x_2069_ = l_Lean_ModuleUsage_IREnc_irType(v___x_2068_, v_ty_2058_);
return v___x_2069_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_params_spec__0(lean_object* v_as_2072_, size_t v_i_2073_, size_t v_stop_2074_, lean_object* v_b_2075_){
_start:
{
uint8_t v___x_2076_; 
v___x_2076_ = lean_usize_dec_eq(v_i_2073_, v_stop_2074_);
if (v___x_2076_ == 0)
{
lean_object* v___x_2077_; lean_object* v___x_2078_; size_t v___x_2079_; size_t v___x_2080_; 
v___x_2077_ = lean_array_uget_borrowed(v_as_2072_, v_i_2073_);
lean_inc(v___x_2077_);
v___x_2078_ = l_Lean_ModuleUsage_IREnc_param(v_b_2075_, v___x_2077_);
v___x_2079_ = ((size_t)1ULL);
v___x_2080_ = lean_usize_add(v_i_2073_, v___x_2079_);
v_i_2073_ = v___x_2080_;
v_b_2075_ = v___x_2078_;
goto _start;
}
else
{
return v_b_2075_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_params_spec__0___boxed(lean_object* v_as_2082_, lean_object* v_i_2083_, lean_object* v_stop_2084_, lean_object* v_b_2085_){
_start:
{
size_t v_i_boxed_2086_; size_t v_stop_boxed_2087_; lean_object* v_res_2088_; 
v_i_boxed_2086_ = lean_unbox_usize(v_i_2083_);
lean_dec(v_i_2083_);
v_stop_boxed_2087_ = lean_unbox_usize(v_stop_2084_);
lean_dec(v_stop_2084_);
v_res_2088_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_params_spec__0(v_as_2082_, v_i_boxed_2086_, v_stop_boxed_2087_, v_b_2085_);
lean_dec_ref(v_as_2082_);
return v_res_2088_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_params(lean_object* v_s_2089_, lean_object* v_xs_2090_){
_start:
{
lean_object* v_e_2091_; lean_object* v_tys_2092_; lean_object* v_ms_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2107_; 
v_e_2091_ = lean_ctor_get(v_s_2089_, 0);
v_tys_2092_ = lean_ctor_get(v_s_2089_, 1);
v_ms_2093_ = lean_ctor_get(v_s_2089_, 2);
v_isSharedCheck_2107_ = !lean_is_exclusive(v_s_2089_);
if (v_isSharedCheck_2107_ == 0)
{
v___x_2095_ = v_s_2089_;
v_isShared_2096_ = v_isSharedCheck_2107_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_ms_2093_);
lean_inc(v_tys_2092_);
lean_inc(v_e_2091_);
lean_dec(v_s_2089_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2107_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2100_; 
v___x_2097_ = lean_array_get_size(v_xs_2090_);
v___x_2098_ = l_Lean_ModuleUsage_Enc_nat(v_e_2091_, v___x_2097_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 0, v___x_2098_);
v___x_2100_ = v___x_2095_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v___x_2098_);
lean_ctor_set(v_reuseFailAlloc_2106_, 1, v_tys_2092_);
lean_ctor_set(v_reuseFailAlloc_2106_, 2, v_ms_2093_);
v___x_2100_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
lean_object* v___x_2101_; uint8_t v___x_2102_; 
v___x_2101_ = lean_unsigned_to_nat(0u);
v___x_2102_ = lean_nat_dec_lt(v___x_2101_, v___x_2097_);
if (v___x_2102_ == 0)
{
return v___x_2100_;
}
else
{
size_t v___x_2103_; size_t v___x_2104_; lean_object* v___x_2105_; 
v___x_2103_ = ((size_t)0ULL);
v___x_2104_ = lean_usize_of_nat(v___x_2097_);
v___x_2105_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_params_spec__0(v_xs_2090_, v___x_2103_, v___x_2104_, v___x_2100_);
return v___x_2105_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_params___boxed(lean_object* v_s_2108_, lean_object* v_xs_2109_){
_start:
{
lean_object* v_res_2110_; 
v_res_2110_ = l_Lean_ModuleUsage_IREnc_params(v_s_2108_, v_xs_2109_);
lean_dec_ref(v_xs_2109_);
return v_res_2110_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_body(lean_object* v_s_2111_, lean_object* v_x_2112_){
_start:
{
switch(lean_obj_tag(v_x_2112_))
{
case 0:
{
lean_object* v_x_2113_; lean_object* v_ty_2114_; lean_object* v_e_2115_; lean_object* v_b_2116_; lean_object* v_e_2117_; lean_object* v_tys_2118_; lean_object* v_ms_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2132_; 
v_x_2113_ = lean_ctor_get(v_x_2112_, 0);
lean_inc(v_x_2113_);
v_ty_2114_ = lean_ctor_get(v_x_2112_, 1);
lean_inc(v_ty_2114_);
v_e_2115_ = lean_ctor_get(v_x_2112_, 2);
lean_inc_ref(v_e_2115_);
v_b_2116_ = lean_ctor_get(v_x_2112_, 3);
lean_inc(v_b_2116_);
lean_dec_ref_known(v_x_2112_, 4);
v_e_2117_ = lean_ctor_get(v_s_2111_, 0);
v_tys_2118_ = lean_ctor_get(v_s_2111_, 1);
v_ms_2119_ = lean_ctor_get(v_s_2111_, 2);
v_isSharedCheck_2132_ = !lean_is_exclusive(v_s_2111_);
if (v_isSharedCheck_2132_ == 0)
{
v___x_2121_ = v_s_2111_;
v_isShared_2122_ = v_isSharedCheck_2132_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_ms_2119_);
lean_inc(v_tys_2118_);
lean_inc(v_e_2117_);
lean_dec(v_s_2111_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2132_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
uint8_t v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2126_; 
v___x_2123_ = 0;
v___x_2124_ = lean_byte_array_push(v_e_2117_, v___x_2123_);
if (v_isShared_2122_ == 0)
{
lean_ctor_set(v___x_2121_, 0, v___x_2124_);
v___x_2126_ = v___x_2121_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v___x_2124_);
lean_ctor_set(v_reuseFailAlloc_2131_, 1, v_tys_2118_);
lean_ctor_set(v_reuseFailAlloc_2131_, 2, v_ms_2119_);
v___x_2126_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; 
v___x_2127_ = l_Lean_ModuleUsage_IREnc_var(v___x_2126_, v_x_2113_);
v___x_2128_ = l_Lean_ModuleUsage_IREnc_irType(v___x_2127_, v_ty_2114_);
v___x_2129_ = l_Lean_ModuleUsage_IREnc_expr(v___x_2128_, v_e_2115_);
v_s_2111_ = v___x_2129_;
v_x_2112_ = v_b_2116_;
goto _start;
}
}
}
case 1:
{
lean_object* v_j_2133_; lean_object* v_xs_2134_; lean_object* v_v_2135_; lean_object* v_b_2136_; lean_object* v_e_2137_; lean_object* v_tys_2138_; lean_object* v_ms_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2152_; 
v_j_2133_ = lean_ctor_get(v_x_2112_, 0);
lean_inc(v_j_2133_);
v_xs_2134_ = lean_ctor_get(v_x_2112_, 1);
lean_inc_ref(v_xs_2134_);
v_v_2135_ = lean_ctor_get(v_x_2112_, 2);
lean_inc(v_v_2135_);
v_b_2136_ = lean_ctor_get(v_x_2112_, 3);
lean_inc(v_b_2136_);
lean_dec_ref_known(v_x_2112_, 4);
v_e_2137_ = lean_ctor_get(v_s_2111_, 0);
v_tys_2138_ = lean_ctor_get(v_s_2111_, 1);
v_ms_2139_ = lean_ctor_get(v_s_2111_, 2);
v_isSharedCheck_2152_ = !lean_is_exclusive(v_s_2111_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2141_ = v_s_2111_;
v_isShared_2142_ = v_isSharedCheck_2152_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_ms_2139_);
lean_inc(v_tys_2138_);
lean_inc(v_e_2137_);
lean_dec(v_s_2111_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2152_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
uint8_t v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2146_; 
v___x_2143_ = 1;
v___x_2144_ = lean_byte_array_push(v_e_2137_, v___x_2143_);
if (v_isShared_2142_ == 0)
{
lean_ctor_set(v___x_2141_, 0, v___x_2144_);
v___x_2146_ = v___x_2141_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v___x_2144_);
lean_ctor_set(v_reuseFailAlloc_2151_, 1, v_tys_2138_);
lean_ctor_set(v_reuseFailAlloc_2151_, 2, v_ms_2139_);
v___x_2146_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2147_ = l_Lean_ModuleUsage_IREnc_jp(v___x_2146_, v_j_2133_);
v___x_2148_ = l_Lean_ModuleUsage_IREnc_params(v___x_2147_, v_xs_2134_);
lean_dec_ref(v_xs_2134_);
v___x_2149_ = l_Lean_ModuleUsage_IREnc_body(v___x_2148_, v_v_2135_);
v_s_2111_ = v___x_2149_;
v_x_2112_ = v_b_2136_;
goto _start;
}
}
}
case 2:
{
lean_object* v_x_2153_; lean_object* v_i_2154_; lean_object* v_y_2155_; lean_object* v_b_2156_; lean_object* v_e_2157_; lean_object* v_tys_2158_; lean_object* v_ms_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2182_; 
v_x_2153_ = lean_ctor_get(v_x_2112_, 0);
lean_inc(v_x_2153_);
v_i_2154_ = lean_ctor_get(v_x_2112_, 1);
lean_inc(v_i_2154_);
v_y_2155_ = lean_ctor_get(v_x_2112_, 2);
lean_inc(v_y_2155_);
v_b_2156_ = lean_ctor_get(v_x_2112_, 3);
lean_inc(v_b_2156_);
lean_dec_ref_known(v_x_2112_, 4);
v_e_2157_ = lean_ctor_get(v_s_2111_, 0);
v_tys_2158_ = lean_ctor_get(v_s_2111_, 1);
v_ms_2159_ = lean_ctor_get(v_s_2111_, 2);
v_isSharedCheck_2182_ = !lean_is_exclusive(v_s_2111_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2161_ = v_s_2111_;
v_isShared_2162_ = v_isSharedCheck_2182_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_ms_2159_);
lean_inc(v_tys_2158_);
lean_inc(v_e_2157_);
lean_dec(v_s_2111_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2182_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
uint8_t v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2166_; 
v___x_2163_ = 2;
v___x_2164_ = lean_byte_array_push(v_e_2157_, v___x_2163_);
if (v_isShared_2162_ == 0)
{
lean_ctor_set(v___x_2161_, 0, v___x_2164_);
v___x_2166_ = v___x_2161_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v___x_2164_);
lean_ctor_set(v_reuseFailAlloc_2181_, 1, v_tys_2158_);
lean_ctor_set(v_reuseFailAlloc_2181_, 2, v_ms_2159_);
v___x_2166_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
lean_object* v___x_2167_; lean_object* v_e_2168_; lean_object* v_tys_2169_; lean_object* v_ms_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2180_; 
v___x_2167_ = l_Lean_ModuleUsage_IREnc_var(v___x_2166_, v_x_2153_);
v_e_2168_ = lean_ctor_get(v___x_2167_, 0);
v_tys_2169_ = lean_ctor_get(v___x_2167_, 1);
v_ms_2170_ = lean_ctor_get(v___x_2167_, 2);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2167_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2172_ = v___x_2167_;
v_isShared_2173_ = v_isSharedCheck_2180_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_ms_2170_);
lean_inc(v_tys_2169_);
lean_inc(v_e_2168_);
lean_dec(v___x_2167_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2180_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2174_; lean_object* v___x_2176_; 
v___x_2174_ = l_Lean_ModuleUsage_Enc_nat(v_e_2168_, v_i_2154_);
if (v_isShared_2173_ == 0)
{
lean_ctor_set(v___x_2172_, 0, v___x_2174_);
v___x_2176_ = v___x_2172_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v___x_2174_);
lean_ctor_set(v_reuseFailAlloc_2179_, 1, v_tys_2169_);
lean_ctor_set(v_reuseFailAlloc_2179_, 2, v_ms_2170_);
v___x_2176_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
lean_object* v___x_2177_; 
v___x_2177_ = l_Lean_ModuleUsage_IREnc_arg(v___x_2176_, v_y_2155_);
v_s_2111_ = v___x_2177_;
v_x_2112_ = v_b_2156_;
goto _start;
}
}
}
}
}
case 3:
{
lean_object* v_x_2183_; lean_object* v_cidx_2184_; lean_object* v_b_2185_; lean_object* v_e_2186_; lean_object* v_tys_2187_; lean_object* v_ms_2188_; lean_object* v___x_2190_; uint8_t v_isShared_2191_; uint8_t v_isSharedCheck_2210_; 
v_x_2183_ = lean_ctor_get(v_x_2112_, 0);
lean_inc(v_x_2183_);
v_cidx_2184_ = lean_ctor_get(v_x_2112_, 1);
lean_inc(v_cidx_2184_);
v_b_2185_ = lean_ctor_get(v_x_2112_, 2);
lean_inc(v_b_2185_);
lean_dec_ref_known(v_x_2112_, 3);
v_e_2186_ = lean_ctor_get(v_s_2111_, 0);
v_tys_2187_ = lean_ctor_get(v_s_2111_, 1);
v_ms_2188_ = lean_ctor_get(v_s_2111_, 2);
v_isSharedCheck_2210_ = !lean_is_exclusive(v_s_2111_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2190_ = v_s_2111_;
v_isShared_2191_ = v_isSharedCheck_2210_;
goto v_resetjp_2189_;
}
else
{
lean_inc(v_ms_2188_);
lean_inc(v_tys_2187_);
lean_inc(v_e_2186_);
lean_dec(v_s_2111_);
v___x_2190_ = lean_box(0);
v_isShared_2191_ = v_isSharedCheck_2210_;
goto v_resetjp_2189_;
}
v_resetjp_2189_:
{
uint8_t v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2195_; 
v___x_2192_ = 3;
v___x_2193_ = lean_byte_array_push(v_e_2186_, v___x_2192_);
if (v_isShared_2191_ == 0)
{
lean_ctor_set(v___x_2190_, 0, v___x_2193_);
v___x_2195_ = v___x_2190_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v___x_2193_);
lean_ctor_set(v_reuseFailAlloc_2209_, 1, v_tys_2187_);
lean_ctor_set(v_reuseFailAlloc_2209_, 2, v_ms_2188_);
v___x_2195_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
lean_object* v___x_2196_; lean_object* v_e_2197_; lean_object* v_tys_2198_; lean_object* v_ms_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2208_; 
v___x_2196_ = l_Lean_ModuleUsage_IREnc_var(v___x_2195_, v_x_2183_);
v_e_2197_ = lean_ctor_get(v___x_2196_, 0);
v_tys_2198_ = lean_ctor_get(v___x_2196_, 1);
v_ms_2199_ = lean_ctor_get(v___x_2196_, 2);
v_isSharedCheck_2208_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2201_ = v___x_2196_;
v_isShared_2202_ = v_isSharedCheck_2208_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_ms_2199_);
lean_inc(v_tys_2198_);
lean_inc(v_e_2197_);
lean_dec(v___x_2196_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2208_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
lean_object* v___x_2203_; lean_object* v___x_2205_; 
v___x_2203_ = l_Lean_ModuleUsage_Enc_nat(v_e_2197_, v_cidx_2184_);
if (v_isShared_2202_ == 0)
{
lean_ctor_set(v___x_2201_, 0, v___x_2203_);
v___x_2205_ = v___x_2201_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v___x_2203_);
lean_ctor_set(v_reuseFailAlloc_2207_, 1, v_tys_2198_);
lean_ctor_set(v_reuseFailAlloc_2207_, 2, v_ms_2199_);
v___x_2205_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
v_s_2111_ = v___x_2205_;
v_x_2112_ = v_b_2185_;
goto _start;
}
}
}
}
}
case 4:
{
lean_object* v_x_2211_; lean_object* v_i_2212_; lean_object* v_y_2213_; lean_object* v_b_2214_; lean_object* v_e_2215_; lean_object* v_tys_2216_; lean_object* v_ms_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2240_; 
v_x_2211_ = lean_ctor_get(v_x_2112_, 0);
lean_inc(v_x_2211_);
v_i_2212_ = lean_ctor_get(v_x_2112_, 1);
lean_inc(v_i_2212_);
v_y_2213_ = lean_ctor_get(v_x_2112_, 2);
lean_inc(v_y_2213_);
v_b_2214_ = lean_ctor_get(v_x_2112_, 3);
lean_inc(v_b_2214_);
lean_dec_ref_known(v_x_2112_, 4);
v_e_2215_ = lean_ctor_get(v_s_2111_, 0);
v_tys_2216_ = lean_ctor_get(v_s_2111_, 1);
v_ms_2217_ = lean_ctor_get(v_s_2111_, 2);
v_isSharedCheck_2240_ = !lean_is_exclusive(v_s_2111_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2219_ = v_s_2111_;
v_isShared_2220_ = v_isSharedCheck_2240_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_ms_2217_);
lean_inc(v_tys_2216_);
lean_inc(v_e_2215_);
lean_dec(v_s_2111_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2240_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
uint8_t v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2224_; 
v___x_2221_ = 4;
v___x_2222_ = lean_byte_array_push(v_e_2215_, v___x_2221_);
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 0, v___x_2222_);
v___x_2224_ = v___x_2219_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v___x_2222_);
lean_ctor_set(v_reuseFailAlloc_2239_, 1, v_tys_2216_);
lean_ctor_set(v_reuseFailAlloc_2239_, 2, v_ms_2217_);
v___x_2224_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
lean_object* v___x_2225_; lean_object* v_e_2226_; lean_object* v_tys_2227_; lean_object* v_ms_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2238_; 
v___x_2225_ = l_Lean_ModuleUsage_IREnc_var(v___x_2224_, v_x_2211_);
v_e_2226_ = lean_ctor_get(v___x_2225_, 0);
v_tys_2227_ = lean_ctor_get(v___x_2225_, 1);
v_ms_2228_ = lean_ctor_get(v___x_2225_, 2);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2225_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2230_ = v___x_2225_;
v_isShared_2231_ = v_isSharedCheck_2238_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_ms_2228_);
lean_inc(v_tys_2227_);
lean_inc(v_e_2226_);
lean_dec(v___x_2225_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2238_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v___x_2232_; lean_object* v___x_2234_; 
v___x_2232_ = l_Lean_ModuleUsage_Enc_nat(v_e_2226_, v_i_2212_);
if (v_isShared_2231_ == 0)
{
lean_ctor_set(v___x_2230_, 0, v___x_2232_);
v___x_2234_ = v___x_2230_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v___x_2232_);
lean_ctor_set(v_reuseFailAlloc_2237_, 1, v_tys_2227_);
lean_ctor_set(v_reuseFailAlloc_2237_, 2, v_ms_2228_);
v___x_2234_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
lean_object* v___x_2235_; 
v___x_2235_ = l_Lean_ModuleUsage_IREnc_var(v___x_2234_, v_y_2213_);
v_s_2111_ = v___x_2235_;
v_x_2112_ = v_b_2214_;
goto _start;
}
}
}
}
}
case 5:
{
lean_object* v_x_2241_; lean_object* v_i_2242_; lean_object* v_offset_2243_; lean_object* v_y_2244_; lean_object* v_ty_2245_; lean_object* v_b_2246_; lean_object* v_e_2247_; lean_object* v_tys_2248_; lean_object* v_ms_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2274_; 
v_x_2241_ = lean_ctor_get(v_x_2112_, 0);
lean_inc(v_x_2241_);
v_i_2242_ = lean_ctor_get(v_x_2112_, 1);
lean_inc(v_i_2242_);
v_offset_2243_ = lean_ctor_get(v_x_2112_, 2);
lean_inc(v_offset_2243_);
v_y_2244_ = lean_ctor_get(v_x_2112_, 3);
lean_inc(v_y_2244_);
v_ty_2245_ = lean_ctor_get(v_x_2112_, 4);
lean_inc(v_ty_2245_);
v_b_2246_ = lean_ctor_get(v_x_2112_, 5);
lean_inc(v_b_2246_);
lean_dec_ref_known(v_x_2112_, 6);
v_e_2247_ = lean_ctor_get(v_s_2111_, 0);
v_tys_2248_ = lean_ctor_get(v_s_2111_, 1);
v_ms_2249_ = lean_ctor_get(v_s_2111_, 2);
v_isSharedCheck_2274_ = !lean_is_exclusive(v_s_2111_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2251_ = v_s_2111_;
v_isShared_2252_ = v_isSharedCheck_2274_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_ms_2249_);
lean_inc(v_tys_2248_);
lean_inc(v_e_2247_);
lean_dec(v_s_2111_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2274_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
uint8_t v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2256_; 
v___x_2253_ = 5;
v___x_2254_ = lean_byte_array_push(v_e_2247_, v___x_2253_);
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 0, v___x_2254_);
v___x_2256_ = v___x_2251_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v___x_2254_);
lean_ctor_set(v_reuseFailAlloc_2273_, 1, v_tys_2248_);
lean_ctor_set(v_reuseFailAlloc_2273_, 2, v_ms_2249_);
v___x_2256_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
lean_object* v___x_2257_; lean_object* v_e_2258_; lean_object* v_tys_2259_; lean_object* v_ms_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2272_; 
v___x_2257_ = l_Lean_ModuleUsage_IREnc_var(v___x_2256_, v_x_2241_);
v_e_2258_ = lean_ctor_get(v___x_2257_, 0);
v_tys_2259_ = lean_ctor_get(v___x_2257_, 1);
v_ms_2260_ = lean_ctor_get(v___x_2257_, 2);
v_isSharedCheck_2272_ = !lean_is_exclusive(v___x_2257_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2262_ = v___x_2257_;
v_isShared_2263_ = v_isSharedCheck_2272_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_ms_2260_);
lean_inc(v_tys_2259_);
lean_inc(v_e_2258_);
lean_dec(v___x_2257_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2272_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2267_; 
v___x_2264_ = l_Lean_ModuleUsage_Enc_nat(v_e_2258_, v_i_2242_);
v___x_2265_ = l_Lean_ModuleUsage_Enc_nat(v___x_2264_, v_offset_2243_);
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 0, v___x_2265_);
v___x_2267_ = v___x_2262_;
goto v_reusejp_2266_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v___x_2265_);
lean_ctor_set(v_reuseFailAlloc_2271_, 1, v_tys_2259_);
lean_ctor_set(v_reuseFailAlloc_2271_, 2, v_ms_2260_);
v___x_2267_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2266_;
}
v_reusejp_2266_:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; 
v___x_2268_ = l_Lean_ModuleUsage_IREnc_var(v___x_2267_, v_y_2244_);
v___x_2269_ = l_Lean_ModuleUsage_IREnc_irType(v___x_2268_, v_ty_2245_);
v_s_2111_ = v___x_2269_;
v_x_2112_ = v_b_2246_;
goto _start;
}
}
}
}
}
case 6:
{
lean_object* v_x_2275_; lean_object* v_n_2276_; uint8_t v_c_2277_; uint8_t v_persistent_2278_; lean_object* v_b_2279_; lean_object* v_e_2280_; lean_object* v_tys_2281_; lean_object* v_ms_2282_; lean_object* v___x_2284_; uint8_t v_isShared_2285_; uint8_t v_isSharedCheck_2306_; 
v_x_2275_ = lean_ctor_get(v_x_2112_, 0);
lean_inc(v_x_2275_);
v_n_2276_ = lean_ctor_get(v_x_2112_, 1);
lean_inc(v_n_2276_);
v_c_2277_ = lean_ctor_get_uint8(v_x_2112_, sizeof(void*)*3);
v_persistent_2278_ = lean_ctor_get_uint8(v_x_2112_, sizeof(void*)*3 + 1);
v_b_2279_ = lean_ctor_get(v_x_2112_, 2);
lean_inc(v_b_2279_);
lean_dec_ref_known(v_x_2112_, 3);
v_e_2280_ = lean_ctor_get(v_s_2111_, 0);
v_tys_2281_ = lean_ctor_get(v_s_2111_, 1);
v_ms_2282_ = lean_ctor_get(v_s_2111_, 2);
v_isSharedCheck_2306_ = !lean_is_exclusive(v_s_2111_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2284_ = v_s_2111_;
v_isShared_2285_ = v_isSharedCheck_2306_;
goto v_resetjp_2283_;
}
else
{
lean_inc(v_ms_2282_);
lean_inc(v_tys_2281_);
lean_inc(v_e_2280_);
lean_dec(v_s_2111_);
v___x_2284_ = lean_box(0);
v_isShared_2285_ = v_isSharedCheck_2306_;
goto v_resetjp_2283_;
}
v_resetjp_2283_:
{
uint8_t v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2289_; 
v___x_2286_ = 6;
v___x_2287_ = lean_byte_array_push(v_e_2280_, v___x_2286_);
if (v_isShared_2285_ == 0)
{
lean_ctor_set(v___x_2284_, 0, v___x_2287_);
v___x_2289_ = v___x_2284_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v___x_2287_);
lean_ctor_set(v_reuseFailAlloc_2305_, 1, v_tys_2281_);
lean_ctor_set(v_reuseFailAlloc_2305_, 2, v_ms_2282_);
v___x_2289_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
lean_object* v___x_2290_; lean_object* v_e_2291_; lean_object* v_tys_2292_; lean_object* v_ms_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2304_; 
v___x_2290_ = l_Lean_ModuleUsage_IREnc_var(v___x_2289_, v_x_2275_);
v_e_2291_ = lean_ctor_get(v___x_2290_, 0);
v_tys_2292_ = lean_ctor_get(v___x_2290_, 1);
v_ms_2293_ = lean_ctor_get(v___x_2290_, 2);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2290_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2295_ = v___x_2290_;
v_isShared_2296_ = v_isSharedCheck_2304_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_ms_2293_);
lean_inc(v_tys_2292_);
lean_inc(v_e_2291_);
lean_dec(v___x_2290_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2304_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2301_; 
v___x_2297_ = l_Lean_ModuleUsage_Enc_nat(v_e_2291_, v_n_2276_);
v___x_2298_ = l_Lean_ModuleUsage_Enc_bool(v___x_2297_, v_c_2277_);
v___x_2299_ = l_Lean_ModuleUsage_Enc_bool(v___x_2298_, v_persistent_2278_);
if (v_isShared_2296_ == 0)
{
lean_ctor_set(v___x_2295_, 0, v___x_2299_);
v___x_2301_ = v___x_2295_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v___x_2299_);
lean_ctor_set(v_reuseFailAlloc_2303_, 1, v_tys_2292_);
lean_ctor_set(v_reuseFailAlloc_2303_, 2, v_ms_2293_);
v___x_2301_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
v_s_2111_ = v___x_2301_;
v_x_2112_ = v_b_2279_;
goto _start;
}
}
}
}
}
case 7:
{
lean_object* v_x_2307_; lean_object* v_n_2308_; uint8_t v_c_2309_; uint8_t v_persistent_2310_; lean_object* v_b_2311_; lean_object* v_e_2312_; lean_object* v_tys_2313_; lean_object* v_ms_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2338_; 
v_x_2307_ = lean_ctor_get(v_x_2112_, 0);
lean_inc(v_x_2307_);
v_n_2308_ = lean_ctor_get(v_x_2112_, 1);
lean_inc(v_n_2308_);
v_c_2309_ = lean_ctor_get_uint8(v_x_2112_, sizeof(void*)*3);
v_persistent_2310_ = lean_ctor_get_uint8(v_x_2112_, sizeof(void*)*3 + 1);
v_b_2311_ = lean_ctor_get(v_x_2112_, 2);
lean_inc(v_b_2311_);
lean_dec_ref_known(v_x_2112_, 3);
v_e_2312_ = lean_ctor_get(v_s_2111_, 0);
v_tys_2313_ = lean_ctor_get(v_s_2111_, 1);
v_ms_2314_ = lean_ctor_get(v_s_2111_, 2);
v_isSharedCheck_2338_ = !lean_is_exclusive(v_s_2111_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2316_ = v_s_2111_;
v_isShared_2317_ = v_isSharedCheck_2338_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_ms_2314_);
lean_inc(v_tys_2313_);
lean_inc(v_e_2312_);
lean_dec(v_s_2111_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2338_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
uint8_t v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2321_; 
v___x_2318_ = 7;
v___x_2319_ = lean_byte_array_push(v_e_2312_, v___x_2318_);
if (v_isShared_2317_ == 0)
{
lean_ctor_set(v___x_2316_, 0, v___x_2319_);
v___x_2321_ = v___x_2316_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v___x_2319_);
lean_ctor_set(v_reuseFailAlloc_2337_, 1, v_tys_2313_);
lean_ctor_set(v_reuseFailAlloc_2337_, 2, v_ms_2314_);
v___x_2321_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
lean_object* v___x_2322_; lean_object* v_e_2323_; lean_object* v_tys_2324_; lean_object* v_ms_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2336_; 
v___x_2322_ = l_Lean_ModuleUsage_IREnc_var(v___x_2321_, v_x_2307_);
v_e_2323_ = lean_ctor_get(v___x_2322_, 0);
v_tys_2324_ = lean_ctor_get(v___x_2322_, 1);
v_ms_2325_ = lean_ctor_get(v___x_2322_, 2);
v_isSharedCheck_2336_ = !lean_is_exclusive(v___x_2322_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2327_ = v___x_2322_;
v_isShared_2328_ = v_isSharedCheck_2336_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_ms_2325_);
lean_inc(v_tys_2324_);
lean_inc(v_e_2323_);
lean_dec(v___x_2322_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2336_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2333_; 
v___x_2329_ = l_Lean_ModuleUsage_Enc_nat(v_e_2323_, v_n_2308_);
v___x_2330_ = l_Lean_ModuleUsage_Enc_bool(v___x_2329_, v_c_2309_);
v___x_2331_ = l_Lean_ModuleUsage_Enc_bool(v___x_2330_, v_persistent_2310_);
if (v_isShared_2328_ == 0)
{
lean_ctor_set(v___x_2327_, 0, v___x_2331_);
v___x_2333_ = v___x_2327_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v___x_2331_);
lean_ctor_set(v_reuseFailAlloc_2335_, 1, v_tys_2324_);
lean_ctor_set(v_reuseFailAlloc_2335_, 2, v_ms_2325_);
v___x_2333_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
v_s_2111_ = v___x_2333_;
v_x_2112_ = v_b_2311_;
goto _start;
}
}
}
}
}
case 8:
{
lean_object* v_x_2339_; lean_object* v_b_2340_; lean_object* v_e_2341_; lean_object* v_tys_2342_; lean_object* v_ms_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2354_; 
v_x_2339_ = lean_ctor_get(v_x_2112_, 0);
lean_inc(v_x_2339_);
v_b_2340_ = lean_ctor_get(v_x_2112_, 1);
lean_inc(v_b_2340_);
lean_dec_ref_known(v_x_2112_, 2);
v_e_2341_ = lean_ctor_get(v_s_2111_, 0);
v_tys_2342_ = lean_ctor_get(v_s_2111_, 1);
v_ms_2343_ = lean_ctor_get(v_s_2111_, 2);
v_isSharedCheck_2354_ = !lean_is_exclusive(v_s_2111_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2345_ = v_s_2111_;
v_isShared_2346_ = v_isSharedCheck_2354_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_ms_2343_);
lean_inc(v_tys_2342_);
lean_inc(v_e_2341_);
lean_dec(v_s_2111_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2354_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
uint8_t v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2350_; 
v___x_2347_ = 8;
v___x_2348_ = lean_byte_array_push(v_e_2341_, v___x_2347_);
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 0, v___x_2348_);
v___x_2350_ = v___x_2345_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v___x_2348_);
lean_ctor_set(v_reuseFailAlloc_2353_, 1, v_tys_2342_);
lean_ctor_set(v_reuseFailAlloc_2353_, 2, v_ms_2343_);
v___x_2350_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
lean_object* v___x_2351_; 
v___x_2351_ = l_Lean_ModuleUsage_IREnc_var(v___x_2350_, v_x_2339_);
v_s_2111_ = v___x_2351_;
v_x_2112_ = v_b_2340_;
goto _start;
}
}
}
case 9:
{
lean_object* v_tid_2355_; lean_object* v_x_2356_; lean_object* v_xType_2357_; lean_object* v_cs_2358_; lean_object* v_e_2359_; lean_object* v_tys_2360_; lean_object* v_ms_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2391_; 
v_tid_2355_ = lean_ctor_get(v_x_2112_, 0);
lean_inc(v_tid_2355_);
v_x_2356_ = lean_ctor_get(v_x_2112_, 1);
lean_inc(v_x_2356_);
v_xType_2357_ = lean_ctor_get(v_x_2112_, 2);
lean_inc(v_xType_2357_);
v_cs_2358_ = lean_ctor_get(v_x_2112_, 3);
lean_inc_ref(v_cs_2358_);
lean_dec_ref_known(v_x_2112_, 4);
v_e_2359_ = lean_ctor_get(v_s_2111_, 0);
v_tys_2360_ = lean_ctor_get(v_s_2111_, 1);
v_ms_2361_ = lean_ctor_get(v_s_2111_, 2);
v_isSharedCheck_2391_ = !lean_is_exclusive(v_s_2111_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2363_ = v_s_2111_;
v_isShared_2364_ = v_isSharedCheck_2391_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_ms_2361_);
lean_inc(v_tys_2360_);
lean_inc(v_e_2359_);
lean_dec(v_s_2111_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2391_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
uint8_t v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2370_; 
v___x_2365_ = 9;
v___x_2366_ = lean_byte_array_push(v_e_2359_, v___x_2365_);
lean_inc(v_tid_2355_);
v___x_2367_ = l_Lean_ModuleUsage_Enc_name(v___x_2366_, v_tid_2355_);
v___x_2368_ = l_Lean_NameSet_insert(v_ms_2361_, v_tid_2355_);
if (v_isShared_2364_ == 0)
{
lean_ctor_set(v___x_2363_, 2, v___x_2368_);
lean_ctor_set(v___x_2363_, 0, v___x_2367_);
v___x_2370_ = v___x_2363_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v___x_2367_);
lean_ctor_set(v_reuseFailAlloc_2390_, 1, v_tys_2360_);
lean_ctor_set(v_reuseFailAlloc_2390_, 2, v___x_2368_);
v___x_2370_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v_e_2373_; lean_object* v_tys_2374_; lean_object* v_ms_2375_; lean_object* v___x_2377_; uint8_t v_isShared_2378_; uint8_t v_isSharedCheck_2389_; 
v___x_2371_ = l_Lean_ModuleUsage_IREnc_var(v___x_2370_, v_x_2356_);
v___x_2372_ = l_Lean_ModuleUsage_IREnc_irType(v___x_2371_, v_xType_2357_);
v_e_2373_ = lean_ctor_get(v___x_2372_, 0);
v_tys_2374_ = lean_ctor_get(v___x_2372_, 1);
v_ms_2375_ = lean_ctor_get(v___x_2372_, 2);
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2372_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2377_ = v___x_2372_;
v_isShared_2378_ = v_isSharedCheck_2389_;
goto v_resetjp_2376_;
}
else
{
lean_inc(v_ms_2375_);
lean_inc(v_tys_2374_);
lean_inc(v_e_2373_);
lean_dec(v___x_2372_);
v___x_2377_ = lean_box(0);
v_isShared_2378_ = v_isSharedCheck_2389_;
goto v_resetjp_2376_;
}
v_resetjp_2376_:
{
lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2382_; 
v___x_2379_ = lean_array_get_size(v_cs_2358_);
v___x_2380_ = l_Lean_ModuleUsage_Enc_nat(v_e_2373_, v___x_2379_);
if (v_isShared_2378_ == 0)
{
lean_ctor_set(v___x_2377_, 0, v___x_2380_);
v___x_2382_ = v___x_2377_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v___x_2380_);
lean_ctor_set(v_reuseFailAlloc_2388_, 1, v_tys_2374_);
lean_ctor_set(v_reuseFailAlloc_2388_, 2, v_ms_2375_);
v___x_2382_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
lean_object* v___x_2383_; uint8_t v___x_2384_; 
v___x_2383_ = lean_unsigned_to_nat(0u);
v___x_2384_ = lean_nat_dec_lt(v___x_2383_, v___x_2379_);
if (v___x_2384_ == 0)
{
lean_dec_ref(v_cs_2358_);
return v___x_2382_;
}
else
{
size_t v___x_2385_; size_t v___x_2386_; lean_object* v___x_2387_; 
v___x_2385_ = ((size_t)0ULL);
v___x_2386_ = lean_usize_of_nat(v___x_2379_);
v___x_2387_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_body_spec__0(v_cs_2358_, v___x_2385_, v___x_2386_, v___x_2382_);
lean_dec_ref(v_cs_2358_);
return v___x_2387_;
}
}
}
}
}
}
case 10:
{
lean_object* v_x_2392_; lean_object* v_e_2393_; lean_object* v_tys_2394_; lean_object* v_ms_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2405_; 
v_x_2392_ = lean_ctor_get(v_x_2112_, 0);
lean_inc(v_x_2392_);
lean_dec_ref_known(v_x_2112_, 1);
v_e_2393_ = lean_ctor_get(v_s_2111_, 0);
v_tys_2394_ = lean_ctor_get(v_s_2111_, 1);
v_ms_2395_ = lean_ctor_get(v_s_2111_, 2);
v_isSharedCheck_2405_ = !lean_is_exclusive(v_s_2111_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2397_ = v_s_2111_;
v_isShared_2398_ = v_isSharedCheck_2405_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_ms_2395_);
lean_inc(v_tys_2394_);
lean_inc(v_e_2393_);
lean_dec(v_s_2111_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2405_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
uint8_t v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2402_; 
v___x_2399_ = 10;
v___x_2400_ = lean_byte_array_push(v_e_2393_, v___x_2399_);
if (v_isShared_2398_ == 0)
{
lean_ctor_set(v___x_2397_, 0, v___x_2400_);
v___x_2402_ = v___x_2397_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v___x_2400_);
lean_ctor_set(v_reuseFailAlloc_2404_, 1, v_tys_2394_);
lean_ctor_set(v_reuseFailAlloc_2404_, 2, v_ms_2395_);
v___x_2402_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
lean_object* v___x_2403_; 
v___x_2403_ = l_Lean_ModuleUsage_IREnc_arg(v___x_2402_, v_x_2392_);
return v___x_2403_;
}
}
}
case 11:
{
lean_object* v_j_2406_; lean_object* v_ys_2407_; lean_object* v_e_2408_; lean_object* v_tys_2409_; lean_object* v_ms_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2421_; 
v_j_2406_ = lean_ctor_get(v_x_2112_, 0);
lean_inc(v_j_2406_);
v_ys_2407_ = lean_ctor_get(v_x_2112_, 1);
lean_inc_ref(v_ys_2407_);
lean_dec_ref_known(v_x_2112_, 2);
v_e_2408_ = lean_ctor_get(v_s_2111_, 0);
v_tys_2409_ = lean_ctor_get(v_s_2111_, 1);
v_ms_2410_ = lean_ctor_get(v_s_2111_, 2);
v_isSharedCheck_2421_ = !lean_is_exclusive(v_s_2111_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2412_ = v_s_2111_;
v_isShared_2413_ = v_isSharedCheck_2421_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_ms_2410_);
lean_inc(v_tys_2409_);
lean_inc(v_e_2408_);
lean_dec(v_s_2111_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2421_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
uint8_t v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2417_; 
v___x_2414_ = 11;
v___x_2415_ = lean_byte_array_push(v_e_2408_, v___x_2414_);
if (v_isShared_2413_ == 0)
{
lean_ctor_set(v___x_2412_, 0, v___x_2415_);
v___x_2417_ = v___x_2412_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v___x_2415_);
lean_ctor_set(v_reuseFailAlloc_2420_, 1, v_tys_2409_);
lean_ctor_set(v_reuseFailAlloc_2420_, 2, v_ms_2410_);
v___x_2417_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; 
v___x_2418_ = l_Lean_ModuleUsage_IREnc_jp(v___x_2417_, v_j_2406_);
v___x_2419_ = l_Lean_ModuleUsage_IREnc_args(v___x_2418_, v_ys_2407_);
lean_dec_ref(v_ys_2407_);
return v___x_2419_;
}
}
}
default: 
{
lean_object* v_e_2422_; lean_object* v_tys_2423_; lean_object* v_ms_2424_; lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2433_; 
v_e_2422_ = lean_ctor_get(v_s_2111_, 0);
v_tys_2423_ = lean_ctor_get(v_s_2111_, 1);
v_ms_2424_ = lean_ctor_get(v_s_2111_, 2);
v_isSharedCheck_2433_ = !lean_is_exclusive(v_s_2111_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2426_ = v_s_2111_;
v_isShared_2427_ = v_isSharedCheck_2433_;
goto v_resetjp_2425_;
}
else
{
lean_inc(v_ms_2424_);
lean_inc(v_tys_2423_);
lean_inc(v_e_2422_);
lean_dec(v_s_2111_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2433_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
uint8_t v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2431_; 
v___x_2428_ = 12;
v___x_2429_ = lean_byte_array_push(v_e_2422_, v___x_2428_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set(v___x_2426_, 0, v___x_2429_);
v___x_2431_ = v___x_2426_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v___x_2429_);
lean_ctor_set(v_reuseFailAlloc_2432_, 1, v_tys_2423_);
lean_ctor_set(v_reuseFailAlloc_2432_, 2, v_ms_2424_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_alt(lean_object* v_s_2434_, lean_object* v_x_2435_){
_start:
{
if (lean_obj_tag(v_x_2435_) == 0)
{
lean_object* v_info_2436_; lean_object* v_b_2437_; lean_object* v_e_2438_; lean_object* v_tys_2439_; lean_object* v_ms_2440_; lean_object* v___x_2442_; uint8_t v_isShared_2443_; uint8_t v_isSharedCheck_2451_; 
v_info_2436_ = lean_ctor_get(v_x_2435_, 0);
lean_inc_ref(v_info_2436_);
v_b_2437_ = lean_ctor_get(v_x_2435_, 1);
lean_inc(v_b_2437_);
lean_dec_ref_known(v_x_2435_, 2);
v_e_2438_ = lean_ctor_get(v_s_2434_, 0);
v_tys_2439_ = lean_ctor_get(v_s_2434_, 1);
v_ms_2440_ = lean_ctor_get(v_s_2434_, 2);
v_isSharedCheck_2451_ = !lean_is_exclusive(v_s_2434_);
if (v_isSharedCheck_2451_ == 0)
{
v___x_2442_ = v_s_2434_;
v_isShared_2443_ = v_isSharedCheck_2451_;
goto v_resetjp_2441_;
}
else
{
lean_inc(v_ms_2440_);
lean_inc(v_tys_2439_);
lean_inc(v_e_2438_);
lean_dec(v_s_2434_);
v___x_2442_ = lean_box(0);
v_isShared_2443_ = v_isSharedCheck_2451_;
goto v_resetjp_2441_;
}
v_resetjp_2441_:
{
uint8_t v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2447_; 
v___x_2444_ = 0;
v___x_2445_ = lean_byte_array_push(v_e_2438_, v___x_2444_);
if (v_isShared_2443_ == 0)
{
lean_ctor_set(v___x_2442_, 0, v___x_2445_);
v___x_2447_ = v___x_2442_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v___x_2445_);
lean_ctor_set(v_reuseFailAlloc_2450_, 1, v_tys_2439_);
lean_ctor_set(v_reuseFailAlloc_2450_, 2, v_ms_2440_);
v___x_2447_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2448_ = l_Lean_ModuleUsage_IREnc_ctorInfo(v___x_2447_, v_info_2436_);
v___x_2449_ = l_Lean_ModuleUsage_IREnc_body(v___x_2448_, v_b_2437_);
return v___x_2449_;
}
}
}
else
{
lean_object* v_b_2452_; lean_object* v_e_2453_; lean_object* v_tys_2454_; lean_object* v_ms_2455_; lean_object* v___x_2457_; uint8_t v_isShared_2458_; uint8_t v_isSharedCheck_2465_; 
v_b_2452_ = lean_ctor_get(v_x_2435_, 0);
lean_inc(v_b_2452_);
lean_dec_ref_known(v_x_2435_, 1);
v_e_2453_ = lean_ctor_get(v_s_2434_, 0);
v_tys_2454_ = lean_ctor_get(v_s_2434_, 1);
v_ms_2455_ = lean_ctor_get(v_s_2434_, 2);
v_isSharedCheck_2465_ = !lean_is_exclusive(v_s_2434_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2457_ = v_s_2434_;
v_isShared_2458_ = v_isSharedCheck_2465_;
goto v_resetjp_2456_;
}
else
{
lean_inc(v_ms_2455_);
lean_inc(v_tys_2454_);
lean_inc(v_e_2453_);
lean_dec(v_s_2434_);
v___x_2457_ = lean_box(0);
v_isShared_2458_ = v_isSharedCheck_2465_;
goto v_resetjp_2456_;
}
v_resetjp_2456_:
{
uint8_t v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2462_; 
v___x_2459_ = 1;
v___x_2460_ = lean_byte_array_push(v_e_2453_, v___x_2459_);
if (v_isShared_2458_ == 0)
{
lean_ctor_set(v___x_2457_, 0, v___x_2460_);
v___x_2462_ = v___x_2457_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v___x_2460_);
lean_ctor_set(v_reuseFailAlloc_2464_, 1, v_tys_2454_);
lean_ctor_set(v_reuseFailAlloc_2464_, 2, v_ms_2455_);
v___x_2462_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
lean_object* v___x_2463_; 
v___x_2463_ = l_Lean_ModuleUsage_IREnc_body(v___x_2462_, v_b_2452_);
return v___x_2463_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_body_spec__0(lean_object* v_as_2466_, size_t v_i_2467_, size_t v_stop_2468_, lean_object* v_b_2469_){
_start:
{
uint8_t v___x_2470_; 
v___x_2470_ = lean_usize_dec_eq(v_i_2467_, v_stop_2468_);
if (v___x_2470_ == 0)
{
lean_object* v___x_2471_; lean_object* v___x_2472_; size_t v___x_2473_; size_t v___x_2474_; 
v___x_2471_ = lean_array_uget_borrowed(v_as_2466_, v_i_2467_);
lean_inc(v___x_2471_);
v___x_2472_ = l_Lean_ModuleUsage_IREnc_alt(v_b_2469_, v___x_2471_);
v___x_2473_ = ((size_t)1ULL);
v___x_2474_ = lean_usize_add(v_i_2467_, v___x_2473_);
v_i_2467_ = v___x_2474_;
v_b_2469_ = v___x_2472_;
goto _start;
}
else
{
return v_b_2469_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_body_spec__0___boxed(lean_object* v_as_2476_, lean_object* v_i_2477_, lean_object* v_stop_2478_, lean_object* v_b_2479_){
_start:
{
size_t v_i_boxed_2480_; size_t v_stop_boxed_2481_; lean_object* v_res_2482_; 
v_i_boxed_2480_ = lean_unbox_usize(v_i_2477_);
lean_dec(v_i_2477_);
v_stop_boxed_2481_ = lean_unbox_usize(v_stop_2478_);
lean_dec(v_stop_2478_);
v_res_2482_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_IREnc_body_spec__0(v_as_2476_, v_i_boxed_2480_, v_stop_boxed_2481_, v_b_2479_);
lean_dec_ref(v_as_2476_);
return v_res_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_decl___lam__0(lean_object* v___y_2483_, lean_object* v___y_2484_){
_start:
{
lean_object* v_e_2485_; lean_object* v_tys_2486_; lean_object* v_ms_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2496_; 
v_e_2485_ = lean_ctor_get(v___y_2483_, 0);
v_tys_2486_ = lean_ctor_get(v___y_2483_, 1);
v_ms_2487_ = lean_ctor_get(v___y_2483_, 2);
v_isSharedCheck_2496_ = !lean_is_exclusive(v___y_2483_);
if (v_isSharedCheck_2496_ == 0)
{
v___x_2489_ = v___y_2483_;
v_isShared_2490_ = v_isSharedCheck_2496_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_ms_2487_);
lean_inc(v_tys_2486_);
lean_inc(v_e_2485_);
lean_dec(v___y_2483_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2496_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2494_; 
lean_inc(v___y_2484_);
v___x_2491_ = l_Lean_ModuleUsage_Enc_name(v_e_2485_, v___y_2484_);
v___x_2492_ = l_Lean_NameSet_insert(v_ms_2487_, v___y_2484_);
if (v_isShared_2490_ == 0)
{
lean_ctor_set(v___x_2489_, 2, v___x_2492_);
lean_ctor_set(v___x_2489_, 0, v___x_2491_);
v___x_2494_ = v___x_2489_;
goto v_reusejp_2493_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v___x_2491_);
lean_ctor_set(v_reuseFailAlloc_2495_, 1, v_tys_2486_);
lean_ctor_set(v_reuseFailAlloc_2495_, 2, v___x_2492_);
v___x_2494_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2493_;
}
v_reusejp_2493_:
{
return v___x_2494_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_IREnc_decl(lean_object* v_s_2498_, lean_object* v_x_2499_){
_start:
{
if (lean_obj_tag(v_x_2499_) == 0)
{
lean_object* v_info_2500_; lean_object* v_xs_2501_; lean_object* v_type_2502_; lean_object* v_body_2503_; lean_object* v_sorryDep_x3f_2504_; lean_object* v_maxJp_2505_; lean_object* v_maxVar_2506_; lean_object* v_e_2507_; lean_object* v_tys_2508_; lean_object* v_ms_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2535_; 
v_info_2500_ = lean_ctor_get(v_x_2499_, 4);
lean_inc_ref(v_info_2500_);
v_xs_2501_ = lean_ctor_get(v_x_2499_, 1);
lean_inc_ref(v_xs_2501_);
v_type_2502_ = lean_ctor_get(v_x_2499_, 2);
lean_inc(v_type_2502_);
v_body_2503_ = lean_ctor_get(v_x_2499_, 3);
lean_inc(v_body_2503_);
lean_dec_ref_known(v_x_2499_, 5);
v_sorryDep_x3f_2504_ = lean_ctor_get(v_info_2500_, 0);
lean_inc(v_sorryDep_x3f_2504_);
v_maxJp_2505_ = lean_ctor_get(v_info_2500_, 1);
lean_inc(v_maxJp_2505_);
v_maxVar_2506_ = lean_ctor_get(v_info_2500_, 2);
lean_inc(v_maxVar_2506_);
lean_dec_ref(v_info_2500_);
v_e_2507_ = lean_ctor_get(v_s_2498_, 0);
v_tys_2508_ = lean_ctor_get(v_s_2498_, 1);
v_ms_2509_ = lean_ctor_get(v_s_2498_, 2);
v_isSharedCheck_2535_ = !lean_is_exclusive(v_s_2498_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2511_ = v_s_2498_;
v_isShared_2512_ = v_isSharedCheck_2535_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_ms_2509_);
lean_inc(v_tys_2508_);
lean_inc(v_e_2507_);
lean_dec(v_s_2498_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2535_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v___f_2513_; uint8_t v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2517_; 
v___f_2513_ = ((lean_object*)(l_Lean_ModuleUsage_IREnc_decl___closed__0));
v___x_2514_ = 0;
v___x_2515_ = lean_byte_array_push(v_e_2507_, v___x_2514_);
if (v_isShared_2512_ == 0)
{
lean_ctor_set(v___x_2511_, 0, v___x_2515_);
v___x_2517_ = v___x_2511_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v___x_2515_);
lean_ctor_set(v_reuseFailAlloc_2534_, 1, v_tys_2508_);
lean_ctor_set(v_reuseFailAlloc_2534_, 2, v_ms_2509_);
v___x_2517_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
lean_object* v___x_2518_; lean_object* v_s_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v_e_2522_; lean_object* v_tys_2523_; lean_object* v_ms_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2533_; 
v___x_2518_ = l_Lean_ModuleUsage_IREnc_params(v___x_2517_, v_xs_2501_);
lean_dec_ref(v_xs_2501_);
v_s_2519_ = l_Lean_ModuleUsage_IREnc_irType(v___x_2518_, v_type_2502_);
v___x_2520_ = l_Lean_ModuleUsage_IREnc_body(v_s_2519_, v_body_2503_);
v___x_2521_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_2520_, v_sorryDep_x3f_2504_, v___f_2513_);
v_e_2522_ = lean_ctor_get(v___x_2521_, 0);
v_tys_2523_ = lean_ctor_get(v___x_2521_, 1);
v_ms_2524_ = lean_ctor_get(v___x_2521_, 2);
v_isSharedCheck_2533_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2533_ == 0)
{
v___x_2526_ = v___x_2521_;
v_isShared_2527_ = v_isSharedCheck_2533_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_ms_2524_);
lean_inc(v_tys_2523_);
lean_inc(v_e_2522_);
lean_dec(v___x_2521_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2533_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2531_; 
v___x_2528_ = l_Lean_ModuleUsage_Enc_nat(v_e_2522_, v_maxJp_2505_);
v___x_2529_ = l_Lean_ModuleUsage_Enc_nat(v___x_2528_, v_maxVar_2506_);
if (v_isShared_2527_ == 0)
{
lean_ctor_set(v___x_2526_, 0, v___x_2529_);
v___x_2531_ = v___x_2526_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v___x_2529_);
lean_ctor_set(v_reuseFailAlloc_2532_, 1, v_tys_2523_);
lean_ctor_set(v_reuseFailAlloc_2532_, 2, v_ms_2524_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
return v___x_2531_;
}
}
}
}
}
else
{
lean_object* v_xs_2536_; lean_object* v_type_2537_; lean_object* v_ext_2538_; lean_object* v_e_2539_; lean_object* v_tys_2540_; lean_object* v_ms_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2563_; 
v_xs_2536_ = lean_ctor_get(v_x_2499_, 1);
lean_inc_ref(v_xs_2536_);
v_type_2537_ = lean_ctor_get(v_x_2499_, 2);
lean_inc(v_type_2537_);
v_ext_2538_ = lean_ctor_get(v_x_2499_, 3);
lean_inc(v_ext_2538_);
lean_dec_ref_known(v_x_2499_, 4);
v_e_2539_ = lean_ctor_get(v_s_2498_, 0);
v_tys_2540_ = lean_ctor_get(v_s_2498_, 1);
v_ms_2541_ = lean_ctor_get(v_s_2498_, 2);
v_isSharedCheck_2563_ = !lean_is_exclusive(v_s_2498_);
if (v_isSharedCheck_2563_ == 0)
{
v___x_2543_ = v_s_2498_;
v_isShared_2544_ = v_isSharedCheck_2563_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_ms_2541_);
lean_inc(v_tys_2540_);
lean_inc(v_e_2539_);
lean_dec(v_s_2498_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2563_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
uint8_t v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2548_; 
v___x_2545_ = 1;
v___x_2546_ = lean_byte_array_push(v_e_2539_, v___x_2545_);
if (v_isShared_2544_ == 0)
{
lean_ctor_set(v___x_2543_, 0, v___x_2546_);
v___x_2548_ = v___x_2543_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v___x_2546_);
lean_ctor_set(v_reuseFailAlloc_2562_, 1, v_tys_2540_);
lean_ctor_set(v_reuseFailAlloc_2562_, 2, v_ms_2541_);
v___x_2548_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
lean_object* v___x_2549_; lean_object* v_s_2550_; lean_object* v_e_2551_; lean_object* v_tys_2552_; lean_object* v_ms_2553_; lean_object* v___x_2555_; uint8_t v_isShared_2556_; uint8_t v_isSharedCheck_2561_; 
v___x_2549_ = l_Lean_ModuleUsage_IREnc_params(v___x_2548_, v_xs_2536_);
lean_dec_ref(v_xs_2536_);
v_s_2550_ = l_Lean_ModuleUsage_IREnc_irType(v___x_2549_, v_type_2537_);
v_e_2551_ = lean_ctor_get(v_s_2550_, 0);
v_tys_2552_ = lean_ctor_get(v_s_2550_, 1);
v_ms_2553_ = lean_ctor_get(v_s_2550_, 2);
v_isSharedCheck_2561_ = !lean_is_exclusive(v_s_2550_);
if (v_isSharedCheck_2561_ == 0)
{
v___x_2555_ = v_s_2550_;
v_isShared_2556_ = v_isSharedCheck_2561_;
goto v_resetjp_2554_;
}
else
{
lean_inc(v_ms_2553_);
lean_inc(v_tys_2552_);
lean_inc(v_e_2551_);
lean_dec(v_s_2550_);
v___x_2555_ = lean_box(0);
v_isShared_2556_ = v_isSharedCheck_2561_;
goto v_resetjp_2554_;
}
v_resetjp_2554_:
{
lean_object* v___x_2557_; lean_object* v___x_2559_; 
v___x_2557_ = l_Lean_ModuleUsage_externEnc(v_e_2551_, v_ext_2538_);
if (v_isShared_2556_ == 0)
{
lean_ctor_set(v___x_2555_, 0, v___x_2557_);
v___x_2559_ = v___x_2555_;
goto v_reusejp_2558_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v___x_2557_);
lean_ctor_set(v_reuseFailAlloc_2560_, 1, v_tys_2552_);
lean_ctor_set(v_reuseFailAlloc_2560_, 2, v_ms_2553_);
v___x_2559_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2558_;
}
v_reusejp_2558_:
{
return v___x_2559_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_specParamInfoEnc(lean_object* v_s_2564_, lean_object* v_x_2565_){
_start:
{
switch(lean_obj_tag(v_x_2565_))
{
case 0:
{
uint8_t v_weak_2566_; lean_object* v_e_2567_; lean_object* v_tys_2568_; lean_object* v_ms_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2579_; 
v_weak_2566_ = lean_ctor_get_uint8(v_x_2565_, 0);
v_e_2567_ = lean_ctor_get(v_s_2564_, 0);
v_tys_2568_ = lean_ctor_get(v_s_2564_, 1);
v_ms_2569_ = lean_ctor_get(v_s_2564_, 2);
v_isSharedCheck_2579_ = !lean_is_exclusive(v_s_2564_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2571_ = v_s_2564_;
v_isShared_2572_ = v_isSharedCheck_2579_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_ms_2569_);
lean_inc(v_tys_2568_);
lean_inc(v_e_2567_);
lean_dec(v_s_2564_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2579_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
uint8_t v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2577_; 
v___x_2573_ = 0;
v___x_2574_ = lean_byte_array_push(v_e_2567_, v___x_2573_);
v___x_2575_ = l_Lean_ModuleUsage_Enc_bool(v___x_2574_, v_weak_2566_);
if (v_isShared_2572_ == 0)
{
lean_ctor_set(v___x_2571_, 0, v___x_2575_);
v___x_2577_ = v___x_2571_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v___x_2575_);
lean_ctor_set(v_reuseFailAlloc_2578_, 1, v_tys_2568_);
lean_ctor_set(v_reuseFailAlloc_2578_, 2, v_ms_2569_);
v___x_2577_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
return v___x_2577_;
}
}
}
case 1:
{
lean_object* v_e_2580_; lean_object* v_tys_2581_; lean_object* v_ms_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2591_; 
v_e_2580_ = lean_ctor_get(v_s_2564_, 0);
v_tys_2581_ = lean_ctor_get(v_s_2564_, 1);
v_ms_2582_ = lean_ctor_get(v_s_2564_, 2);
v_isSharedCheck_2591_ = !lean_is_exclusive(v_s_2564_);
if (v_isSharedCheck_2591_ == 0)
{
v___x_2584_ = v_s_2564_;
v_isShared_2585_ = v_isSharedCheck_2591_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_ms_2582_);
lean_inc(v_tys_2581_);
lean_inc(v_e_2580_);
lean_dec(v_s_2564_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2591_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
uint8_t v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2589_; 
v___x_2586_ = 1;
v___x_2587_ = lean_byte_array_push(v_e_2580_, v___x_2586_);
if (v_isShared_2585_ == 0)
{
lean_ctor_set(v___x_2584_, 0, v___x_2587_);
v___x_2589_ = v___x_2584_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2590_; 
v_reuseFailAlloc_2590_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2590_, 0, v___x_2587_);
lean_ctor_set(v_reuseFailAlloc_2590_, 1, v_tys_2581_);
lean_ctor_set(v_reuseFailAlloc_2590_, 2, v_ms_2582_);
v___x_2589_ = v_reuseFailAlloc_2590_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
return v___x_2589_;
}
}
}
case 2:
{
lean_object* v_e_2592_; lean_object* v_tys_2593_; lean_object* v_ms_2594_; lean_object* v___x_2596_; uint8_t v_isShared_2597_; uint8_t v_isSharedCheck_2603_; 
v_e_2592_ = lean_ctor_get(v_s_2564_, 0);
v_tys_2593_ = lean_ctor_get(v_s_2564_, 1);
v_ms_2594_ = lean_ctor_get(v_s_2564_, 2);
v_isSharedCheck_2603_ = !lean_is_exclusive(v_s_2564_);
if (v_isSharedCheck_2603_ == 0)
{
v___x_2596_ = v_s_2564_;
v_isShared_2597_ = v_isSharedCheck_2603_;
goto v_resetjp_2595_;
}
else
{
lean_inc(v_ms_2594_);
lean_inc(v_tys_2593_);
lean_inc(v_e_2592_);
lean_dec(v_s_2564_);
v___x_2596_ = lean_box(0);
v_isShared_2597_ = v_isSharedCheck_2603_;
goto v_resetjp_2595_;
}
v_resetjp_2595_:
{
uint8_t v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2601_; 
v___x_2598_ = 2;
v___x_2599_ = lean_byte_array_push(v_e_2592_, v___x_2598_);
if (v_isShared_2597_ == 0)
{
lean_ctor_set(v___x_2596_, 0, v___x_2599_);
v___x_2601_ = v___x_2596_;
goto v_reusejp_2600_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v___x_2599_);
lean_ctor_set(v_reuseFailAlloc_2602_, 1, v_tys_2593_);
lean_ctor_set(v_reuseFailAlloc_2602_, 2, v_ms_2594_);
v___x_2601_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2600_;
}
v_reusejp_2600_:
{
return v___x_2601_;
}
}
}
case 3:
{
lean_object* v_e_2604_; lean_object* v_tys_2605_; lean_object* v_ms_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2615_; 
v_e_2604_ = lean_ctor_get(v_s_2564_, 0);
v_tys_2605_ = lean_ctor_get(v_s_2564_, 1);
v_ms_2606_ = lean_ctor_get(v_s_2564_, 2);
v_isSharedCheck_2615_ = !lean_is_exclusive(v_s_2564_);
if (v_isSharedCheck_2615_ == 0)
{
v___x_2608_ = v_s_2564_;
v_isShared_2609_ = v_isSharedCheck_2615_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_ms_2606_);
lean_inc(v_tys_2605_);
lean_inc(v_e_2604_);
lean_dec(v_s_2564_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2615_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
uint8_t v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2613_; 
v___x_2610_ = 3;
v___x_2611_ = lean_byte_array_push(v_e_2604_, v___x_2610_);
if (v_isShared_2609_ == 0)
{
lean_ctor_set(v___x_2608_, 0, v___x_2611_);
v___x_2613_ = v___x_2608_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v___x_2611_);
lean_ctor_set(v_reuseFailAlloc_2614_, 1, v_tys_2605_);
lean_ctor_set(v_reuseFailAlloc_2614_, 2, v_ms_2606_);
v___x_2613_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
return v___x_2613_;
}
}
}
default: 
{
lean_object* v_e_2616_; lean_object* v_tys_2617_; lean_object* v_ms_2618_; lean_object* v___x_2620_; uint8_t v_isShared_2621_; uint8_t v_isSharedCheck_2627_; 
v_e_2616_ = lean_ctor_get(v_s_2564_, 0);
v_tys_2617_ = lean_ctor_get(v_s_2564_, 1);
v_ms_2618_ = lean_ctor_get(v_s_2564_, 2);
v_isSharedCheck_2627_ = !lean_is_exclusive(v_s_2564_);
if (v_isSharedCheck_2627_ == 0)
{
v___x_2620_ = v_s_2564_;
v_isShared_2621_ = v_isSharedCheck_2627_;
goto v_resetjp_2619_;
}
else
{
lean_inc(v_ms_2618_);
lean_inc(v_tys_2617_);
lean_inc(v_e_2616_);
lean_dec(v_s_2564_);
v___x_2620_ = lean_box(0);
v_isShared_2621_ = v_isSharedCheck_2627_;
goto v_resetjp_2619_;
}
v_resetjp_2619_:
{
uint8_t v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2625_; 
v___x_2622_ = 4;
v___x_2623_ = lean_byte_array_push(v_e_2616_, v___x_2622_);
if (v_isShared_2621_ == 0)
{
lean_ctor_set(v___x_2620_, 0, v___x_2623_);
v___x_2625_ = v___x_2620_;
goto v_reusejp_2624_;
}
else
{
lean_object* v_reuseFailAlloc_2626_; 
v_reuseFailAlloc_2626_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2626_, 0, v___x_2623_);
lean_ctor_set(v_reuseFailAlloc_2626_, 1, v_tys_2617_);
lean_ctor_set(v_reuseFailAlloc_2626_, 2, v_ms_2618_);
v___x_2625_ = v_reuseFailAlloc_2626_;
goto v_reusejp_2624_;
}
v_reusejp_2624_:
{
return v___x_2625_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_specParamInfoEnc___boxed(lean_object* v_s_2628_, lean_object* v_x_2629_){
_start:
{
lean_object* v_res_2630_; 
v_res_2630_ = l_Lean_ModuleUsage_specParamInfoEnc(v_s_2628_, v_x_2629_);
lean_dec(v_x_2629_);
return v_res_2630_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_specEntryEnc_spec__0(lean_object* v_as_2631_, size_t v_i_2632_, size_t v_stop_2633_, lean_object* v_b_2634_){
_start:
{
uint8_t v___x_2635_; 
v___x_2635_ = lean_usize_dec_eq(v_i_2632_, v_stop_2633_);
if (v___x_2635_ == 0)
{
lean_object* v___x_2636_; lean_object* v___x_2637_; size_t v___x_2638_; size_t v___x_2639_; 
v___x_2636_ = lean_array_uget_borrowed(v_as_2631_, v_i_2632_);
v___x_2637_ = l_Lean_ModuleUsage_specParamInfoEnc(v_b_2634_, v___x_2636_);
v___x_2638_ = ((size_t)1ULL);
v___x_2639_ = lean_usize_add(v_i_2632_, v___x_2638_);
v_i_2632_ = v___x_2639_;
v_b_2634_ = v___x_2637_;
goto _start;
}
else
{
return v_b_2634_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_specEntryEnc_spec__0___boxed(lean_object* v_as_2641_, lean_object* v_i_2642_, lean_object* v_stop_2643_, lean_object* v_b_2644_){
_start:
{
size_t v_i_boxed_2645_; size_t v_stop_boxed_2646_; lean_object* v_res_2647_; 
v_i_boxed_2645_ = lean_unbox_usize(v_i_2642_);
lean_dec(v_i_2642_);
v_stop_boxed_2646_ = lean_unbox_usize(v_stop_2643_);
lean_dec(v_stop_2643_);
v_res_2647_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_specEntryEnc_spec__0(v_as_2641_, v_i_boxed_2645_, v_stop_boxed_2646_, v_b_2644_);
lean_dec_ref(v_as_2641_);
return v_res_2647_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_specEntryEnc(lean_object* v_s_2648_, lean_object* v_e_2649_){
_start:
{
lean_object* v_declName_2650_; lean_object* v_paramsInfo_2651_; uint8_t v_alreadySpecialized_2652_; lean_object* v_e_2654_; lean_object* v_tys_2655_; lean_object* v_ms_2656_; lean_object* v_e_2659_; lean_object* v_tys_2660_; lean_object* v_ms_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2679_; 
v_declName_2650_ = lean_ctor_get(v_e_2649_, 0);
lean_inc(v_declName_2650_);
v_paramsInfo_2651_ = lean_ctor_get(v_e_2649_, 1);
lean_inc_ref(v_paramsInfo_2651_);
v_alreadySpecialized_2652_ = lean_ctor_get_uint8(v_e_2649_, sizeof(void*)*2);
lean_dec_ref(v_e_2649_);
v_e_2659_ = lean_ctor_get(v_s_2648_, 0);
v_tys_2660_ = lean_ctor_get(v_s_2648_, 1);
v_ms_2661_ = lean_ctor_get(v_s_2648_, 2);
v_isSharedCheck_2679_ = !lean_is_exclusive(v_s_2648_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2663_ = v_s_2648_;
v_isShared_2664_ = v_isSharedCheck_2679_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_ms_2661_);
lean_inc(v_tys_2660_);
lean_inc(v_e_2659_);
lean_dec(v_s_2648_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2679_;
goto v_resetjp_2662_;
}
v___jp_2653_:
{
lean_object* v___x_2657_; lean_object* v___x_2658_; 
v___x_2657_ = l_Lean_ModuleUsage_Enc_bool(v_e_2654_, v_alreadySpecialized_2652_);
v___x_2658_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2658_, 0, v___x_2657_);
lean_ctor_set(v___x_2658_, 1, v_tys_2655_);
lean_ctor_set(v___x_2658_, 2, v_ms_2656_);
return v___x_2658_;
}
v_resetjp_2662_:
{
lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; uint8_t v___x_2669_; 
v___x_2665_ = l_Lean_ModuleUsage_Enc_name(v_e_2659_, v_declName_2650_);
v___x_2666_ = lean_array_get_size(v_paramsInfo_2651_);
v___x_2667_ = l_Lean_ModuleUsage_Enc_nat(v___x_2665_, v___x_2666_);
v___x_2668_ = lean_unsigned_to_nat(0u);
v___x_2669_ = lean_nat_dec_lt(v___x_2668_, v___x_2666_);
if (v___x_2669_ == 0)
{
lean_del_object(v___x_2663_);
lean_dec_ref(v_paramsInfo_2651_);
v_e_2654_ = v___x_2667_;
v_tys_2655_ = v_tys_2660_;
v_ms_2656_ = v_ms_2661_;
goto v___jp_2653_;
}
else
{
lean_object* v___x_2671_; 
if (v_isShared_2664_ == 0)
{
lean_ctor_set(v___x_2663_, 0, v___x_2667_);
v___x_2671_ = v___x_2663_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v___x_2667_);
lean_ctor_set(v_reuseFailAlloc_2678_, 1, v_tys_2660_);
lean_ctor_set(v_reuseFailAlloc_2678_, 2, v_ms_2661_);
v___x_2671_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
size_t v___x_2672_; size_t v___x_2673_; lean_object* v___x_2674_; lean_object* v_e_2675_; lean_object* v_tys_2676_; lean_object* v_ms_2677_; 
v___x_2672_ = ((size_t)0ULL);
v___x_2673_ = lean_usize_of_nat(v___x_2666_);
v___x_2674_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_specEntryEnc_spec__0(v_paramsInfo_2651_, v___x_2672_, v___x_2673_, v___x_2671_);
lean_dec_ref(v_paramsInfo_2651_);
v_e_2675_ = lean_ctor_get(v___x_2674_, 0);
lean_inc_ref(v_e_2675_);
v_tys_2676_ = lean_ctor_get(v___x_2674_, 1);
lean_inc_ref(v_tys_2676_);
v_ms_2677_ = lean_ctor_get(v___x_2674_, 2);
lean_inc(v_ms_2677_);
lean_dec_ref(v___x_2674_);
v_e_2654_ = v_e_2675_;
v_tys_2655_ = v_tys_2676_;
v_ms_2656_ = v_ms_2677_;
goto v___jp_2653_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_summaryEnc_spec__0(lean_object* v_as_2680_, size_t v_i_2681_, size_t v_stop_2682_, lean_object* v_b_2683_){
_start:
{
uint8_t v___x_2684_; 
v___x_2684_ = lean_usize_dec_eq(v_i_2681_, v_stop_2682_);
if (v___x_2684_ == 0)
{
lean_object* v___x_2685_; lean_object* v___x_2686_; size_t v___x_2687_; size_t v___x_2688_; 
v___x_2685_ = lean_array_uget_borrowed(v_as_2680_, v_i_2681_);
lean_inc(v___x_2685_);
v___x_2686_ = l_Lean_ModuleUsage_summaryEnc(v_b_2683_, v___x_2685_);
v___x_2687_ = ((size_t)1ULL);
v___x_2688_ = lean_usize_add(v_i_2681_, v___x_2687_);
v_i_2681_ = v___x_2688_;
v_b_2683_ = v___x_2686_;
goto _start;
}
else
{
return v_b_2683_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_summaryEnc(lean_object* v_s_2690_, lean_object* v_x_2691_){
_start:
{
switch(lean_obj_tag(v_x_2691_))
{
case 0:
{
lean_object* v_e_2692_; lean_object* v_tys_2693_; lean_object* v_ms_2694_; lean_object* v___x_2696_; uint8_t v_isShared_2697_; uint8_t v_isSharedCheck_2703_; 
v_e_2692_ = lean_ctor_get(v_s_2690_, 0);
v_tys_2693_ = lean_ctor_get(v_s_2690_, 1);
v_ms_2694_ = lean_ctor_get(v_s_2690_, 2);
v_isSharedCheck_2703_ = !lean_is_exclusive(v_s_2690_);
if (v_isSharedCheck_2703_ == 0)
{
v___x_2696_ = v_s_2690_;
v_isShared_2697_ = v_isSharedCheck_2703_;
goto v_resetjp_2695_;
}
else
{
lean_inc(v_ms_2694_);
lean_inc(v_tys_2693_);
lean_inc(v_e_2692_);
lean_dec(v_s_2690_);
v___x_2696_ = lean_box(0);
v_isShared_2697_ = v_isSharedCheck_2703_;
goto v_resetjp_2695_;
}
v_resetjp_2695_:
{
uint8_t v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2701_; 
v___x_2698_ = 0;
v___x_2699_ = lean_byte_array_push(v_e_2692_, v___x_2698_);
if (v_isShared_2697_ == 0)
{
lean_ctor_set(v___x_2696_, 0, v___x_2699_);
v___x_2701_ = v___x_2696_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v___x_2699_);
lean_ctor_set(v_reuseFailAlloc_2702_, 1, v_tys_2693_);
lean_ctor_set(v_reuseFailAlloc_2702_, 2, v_ms_2694_);
v___x_2701_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
return v___x_2701_;
}
}
}
case 1:
{
lean_object* v_e_2704_; lean_object* v_tys_2705_; lean_object* v_ms_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2715_; 
v_e_2704_ = lean_ctor_get(v_s_2690_, 0);
v_tys_2705_ = lean_ctor_get(v_s_2690_, 1);
v_ms_2706_ = lean_ctor_get(v_s_2690_, 2);
v_isSharedCheck_2715_ = !lean_is_exclusive(v_s_2690_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2708_ = v_s_2690_;
v_isShared_2709_ = v_isSharedCheck_2715_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_ms_2706_);
lean_inc(v_tys_2705_);
lean_inc(v_e_2704_);
lean_dec(v_s_2690_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2715_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
uint8_t v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2713_; 
v___x_2710_ = 1;
v___x_2711_ = lean_byte_array_push(v_e_2704_, v___x_2710_);
if (v_isShared_2709_ == 0)
{
lean_ctor_set(v___x_2708_, 0, v___x_2711_);
v___x_2713_ = v___x_2708_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v___x_2711_);
lean_ctor_set(v_reuseFailAlloc_2714_, 1, v_tys_2705_);
lean_ctor_set(v_reuseFailAlloc_2714_, 2, v_ms_2706_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
}
case 2:
{
lean_object* v_i_2716_; lean_object* v_vs_2717_; lean_object* v_e_2718_; lean_object* v_tys_2719_; lean_object* v_ms_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2738_; 
v_i_2716_ = lean_ctor_get(v_x_2691_, 0);
lean_inc(v_i_2716_);
v_vs_2717_ = lean_ctor_get(v_x_2691_, 1);
lean_inc_ref(v_vs_2717_);
lean_dec_ref_known(v_x_2691_, 2);
v_e_2718_ = lean_ctor_get(v_s_2690_, 0);
v_tys_2719_ = lean_ctor_get(v_s_2690_, 1);
v_ms_2720_ = lean_ctor_get(v_s_2690_, 2);
v_isSharedCheck_2738_ = !lean_is_exclusive(v_s_2690_);
if (v_isSharedCheck_2738_ == 0)
{
v___x_2722_ = v_s_2690_;
v_isShared_2723_ = v_isSharedCheck_2738_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_ms_2720_);
lean_inc(v_tys_2719_);
lean_inc(v_e_2718_);
lean_dec(v_s_2690_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2738_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
uint8_t v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2731_; 
v___x_2724_ = 2;
v___x_2725_ = lean_byte_array_push(v_e_2718_, v___x_2724_);
lean_inc(v_i_2716_);
v___x_2726_ = l_Lean_ModuleUsage_Enc_name(v___x_2725_, v_i_2716_);
v___x_2727_ = l_Lean_NameSet_insert(v_ms_2720_, v_i_2716_);
v___x_2728_ = lean_array_get_size(v_vs_2717_);
v___x_2729_ = l_Lean_ModuleUsage_Enc_nat(v___x_2726_, v___x_2728_);
if (v_isShared_2723_ == 0)
{
lean_ctor_set(v___x_2722_, 2, v___x_2727_);
lean_ctor_set(v___x_2722_, 0, v___x_2729_);
v___x_2731_ = v___x_2722_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v___x_2729_);
lean_ctor_set(v_reuseFailAlloc_2737_, 1, v_tys_2719_);
lean_ctor_set(v_reuseFailAlloc_2737_, 2, v___x_2727_);
v___x_2731_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
lean_object* v___x_2732_; uint8_t v___x_2733_; 
v___x_2732_ = lean_unsigned_to_nat(0u);
v___x_2733_ = lean_nat_dec_lt(v___x_2732_, v___x_2728_);
if (v___x_2733_ == 0)
{
lean_dec_ref(v_vs_2717_);
return v___x_2731_;
}
else
{
size_t v___x_2734_; size_t v___x_2735_; lean_object* v___x_2736_; 
v___x_2734_ = ((size_t)0ULL);
v___x_2735_ = lean_usize_of_nat(v___x_2728_);
v___x_2736_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_summaryEnc_spec__0(v_vs_2717_, v___x_2734_, v___x_2735_, v___x_2731_);
lean_dec_ref(v_vs_2717_);
return v___x_2736_;
}
}
}
}
default: 
{
lean_object* v_vs_2739_; lean_object* v_e_2740_; lean_object* v_tys_2741_; lean_object* v_ms_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2754_; 
v_vs_2739_ = lean_ctor_get(v_x_2691_, 0);
lean_inc(v_vs_2739_);
lean_dec_ref_known(v_x_2691_, 1);
v_e_2740_ = lean_ctor_get(v_s_2690_, 0);
v_tys_2741_ = lean_ctor_get(v_s_2690_, 1);
v_ms_2742_ = lean_ctor_get(v_s_2690_, 2);
v_isSharedCheck_2754_ = !lean_is_exclusive(v_s_2690_);
if (v_isSharedCheck_2754_ == 0)
{
v___x_2744_ = v_s_2690_;
v_isShared_2745_ = v_isSharedCheck_2754_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_ms_2742_);
lean_inc(v_tys_2741_);
lean_inc(v_e_2740_);
lean_dec(v_s_2690_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2754_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
uint8_t v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2751_; 
v___x_2746_ = 3;
v___x_2747_ = lean_byte_array_push(v_e_2740_, v___x_2746_);
v___x_2748_ = l_List_lengthTR___redArg(v_vs_2739_);
v___x_2749_ = l_Lean_ModuleUsage_Enc_nat(v___x_2747_, v___x_2748_);
if (v_isShared_2745_ == 0)
{
lean_ctor_set(v___x_2744_, 0, v___x_2749_);
v___x_2751_ = v___x_2744_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v___x_2749_);
lean_ctor_set(v_reuseFailAlloc_2753_, 1, v_tys_2741_);
lean_ctor_set(v_reuseFailAlloc_2753_, 2, v_ms_2742_);
v___x_2751_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
lean_object* v___x_2752_; 
v___x_2752_ = l_List_foldl___at___00Lean_ModuleUsage_summaryEnc_spec__1(v___x_2751_, v_vs_2739_);
return v___x_2752_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_ModuleUsage_summaryEnc_spec__1(lean_object* v_x_2755_, lean_object* v_x_2756_){
_start:
{
if (lean_obj_tag(v_x_2756_) == 0)
{
return v_x_2755_;
}
else
{
lean_object* v_head_2757_; lean_object* v_tail_2758_; lean_object* v___x_2759_; 
v_head_2757_ = lean_ctor_get(v_x_2756_, 0);
lean_inc(v_head_2757_);
v_tail_2758_ = lean_ctor_get(v_x_2756_, 1);
lean_inc(v_tail_2758_);
lean_dec_ref_known(v_x_2756_, 2);
v___x_2759_ = l_Lean_ModuleUsage_summaryEnc(v_x_2755_, v_head_2757_);
v_x_2755_ = v___x_2759_;
v_x_2756_ = v_tail_2758_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_summaryEnc_spec__0___boxed(lean_object* v_as_2761_, lean_object* v_i_2762_, lean_object* v_stop_2763_, lean_object* v_b_2764_){
_start:
{
size_t v_i_boxed_2765_; size_t v_stop_boxed_2766_; lean_object* v_res_2767_; 
v_i_boxed_2765_ = lean_unbox_usize(v_i_2762_);
lean_dec(v_i_2762_);
v_stop_boxed_2766_ = lean_unbox_usize(v_stop_2763_);
lean_dec(v_stop_2763_);
v_res_2767_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_summaryEnc_spec__0(v_as_2761_, v_i_boxed_2765_, v_stop_boxed_2766_, v_b_2764_);
lean_dec_ref(v_as_2761_);
return v_res_2767_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_reducibilityEnc(lean_object* v_e_2768_, uint8_t v_x_2769_){
_start:
{
switch(v_x_2769_)
{
case 0:
{
uint8_t v___x_2770_; lean_object* v___x_2771_; 
v___x_2770_ = 0;
v___x_2771_ = lean_byte_array_push(v_e_2768_, v___x_2770_);
return v___x_2771_;
}
case 1:
{
uint8_t v___x_2772_; lean_object* v___x_2773_; 
v___x_2772_ = 1;
v___x_2773_ = lean_byte_array_push(v_e_2768_, v___x_2772_);
return v___x_2773_;
}
case 2:
{
uint8_t v___x_2774_; lean_object* v___x_2775_; 
v___x_2774_ = 2;
v___x_2775_ = lean_byte_array_push(v_e_2768_, v___x_2774_);
return v___x_2775_;
}
case 3:
{
uint8_t v___x_2776_; lean_object* v___x_2777_; 
v___x_2776_ = 3;
v___x_2777_ = lean_byte_array_push(v_e_2768_, v___x_2776_);
return v___x_2777_;
}
default: 
{
uint8_t v___x_2778_; lean_object* v___x_2779_; 
v___x_2778_ = 4;
v___x_2779_ = lean_byte_array_push(v_e_2768_, v___x_2778_);
return v___x_2779_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_reducibilityEnc___boxed(lean_object* v_e_2780_, lean_object* v_x_2781_){
_start:
{
uint8_t v_x_99__boxed_2782_; lean_object* v_res_2783_; 
v_x_99__boxed_2782_ = lean_unbox(v_x_2781_);
v_res_2783_ = l_Lean_ModuleUsage_reducibilityEnc(v_e_2780_, v_x_99__boxed_2782_);
return v_res_2783_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrKindEnc(lean_object* v_e_2784_, uint8_t v_x_2785_){
_start:
{
switch(v_x_2785_)
{
case 0:
{
uint8_t v___x_2786_; lean_object* v___x_2787_; 
v___x_2786_ = 0;
v___x_2787_ = lean_byte_array_push(v_e_2784_, v___x_2786_);
return v___x_2787_;
}
case 1:
{
uint8_t v___x_2788_; lean_object* v___x_2789_; 
v___x_2788_ = 1;
v___x_2789_ = lean_byte_array_push(v_e_2784_, v___x_2788_);
return v___x_2789_;
}
default: 
{
uint8_t v___x_2790_; lean_object* v___x_2791_; 
v___x_2790_ = 2;
v___x_2791_ = lean_byte_array_push(v_e_2784_, v___x_2790_);
return v___x_2791_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrKindEnc___boxed(lean_object* v_e_2792_, lean_object* v_x_2793_){
_start:
{
uint8_t v_x_61__boxed_2794_; lean_object* v_res_2795_; 
v_x_61__boxed_2794_ = lean_unbox(v_x_2793_);
v_res_2795_ = l_Lean_ModuleUsage_attrKindEnc(v_e_2792_, v_x_61__boxed_2794_);
return v_res_2795_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_scopedEnc___redArg(lean_object* v_f_2796_, lean_object* v_e_2797_, lean_object* v_x_2798_){
_start:
{
if (lean_obj_tag(v_x_2798_) == 0)
{
lean_object* v_a_2799_; uint8_t v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
v_a_2799_ = lean_ctor_get(v_x_2798_, 0);
lean_inc(v_a_2799_);
lean_dec_ref_known(v_x_2798_, 1);
v___x_2800_ = 0;
v___x_2801_ = lean_byte_array_push(v_e_2797_, v___x_2800_);
v___x_2802_ = lean_apply_2(v_f_2796_, v___x_2801_, v_a_2799_);
return v___x_2802_;
}
else
{
lean_object* v_a_2803_; lean_object* v_a_2804_; uint8_t v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; 
v_a_2803_ = lean_ctor_get(v_x_2798_, 0);
lean_inc(v_a_2803_);
v_a_2804_ = lean_ctor_get(v_x_2798_, 1);
lean_inc(v_a_2804_);
lean_dec_ref_known(v_x_2798_, 2);
v___x_2805_ = 1;
v___x_2806_ = lean_byte_array_push(v_e_2797_, v___x_2805_);
v___x_2807_ = l_Lean_ModuleUsage_Enc_name(v___x_2806_, v_a_2803_);
v___x_2808_ = lean_apply_2(v_f_2796_, v___x_2807_, v_a_2804_);
return v___x_2808_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_scopedEnc(lean_object* v_00_u03b1_2809_, lean_object* v_f_2810_, lean_object* v_e_2811_, lean_object* v_x_2812_){
_start:
{
lean_object* v___x_2813_; 
v___x_2813_ = l_Lean_ModuleUsage_scopedEnc___redArg(v_f_2810_, v_e_2811_, v_x_2812_);
return v___x_2813_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_instanceEntryEnc(lean_object* v_e_2815_, lean_object* v_a_2816_){
_start:
{
lean_object* v_priority_2817_; lean_object* v_globalName_x3f_2818_; uint8_t v_attrKind_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; 
v_priority_2817_ = lean_ctor_get(v_a_2816_, 2);
lean_inc(v_priority_2817_);
v_globalName_x3f_2818_ = lean_ctor_get(v_a_2816_, 3);
lean_inc(v_globalName_x3f_2818_);
v_attrKind_2819_ = lean_ctor_get_uint8(v_a_2816_, sizeof(void*)*5);
lean_dec_ref(v_a_2816_);
v___x_2820_ = ((lean_object*)(l_Lean_ModuleUsage_instanceEntryEnc___closed__0));
v___x_2821_ = l_Lean_ModuleUsage_Enc_opt___redArg(v_e_2815_, v_globalName_x3f_2818_, v___x_2820_);
v___x_2822_ = l_Lean_ModuleUsage_Enc_nat(v___x_2821_, v_priority_2817_);
v___x_2823_ = l_Lean_ModuleUsage_attrKindEnc(v___x_2822_, v_attrKind_2819_);
return v___x_2823_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0___redArg___lam__0(lean_object* v_e_2826_, lean_object* v_o_2827_){
_start:
{
lean_object* v___y_2829_; 
if (lean_obj_tag(v_o_2827_) == 0)
{
lean_object* v___x_2832_; 
v___x_2832_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0___redArg___lam__0___closed__0));
v___y_2829_ = v___x_2832_;
goto v___jp_2828_;
}
else
{
lean_object* v_val_2833_; 
v_val_2833_ = lean_ctor_get(v_o_2827_, 0);
lean_inc(v_val_2833_);
lean_dec_ref_known(v_o_2827_, 1);
v___y_2829_ = v_val_2833_;
goto v___jp_2828_;
}
v___jp_2828_:
{
lean_object* v___x_2830_; lean_object* v___x_2831_; 
v___x_2830_ = lean_array_push(v___y_2829_, v_e_2826_);
v___x_2831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2831_, 0, v___x_2830_);
return v___x_2831_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0___redArg(lean_object* v_e_2834_, lean_object* v_k_2835_, lean_object* v_t_2836_){
_start:
{
if (lean_obj_tag(v_t_2836_) == 0)
{
lean_object* v_size_2837_; lean_object* v_k_2838_; lean_object* v_v_2839_; lean_object* v_l_2840_; lean_object* v_r_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2856_; 
v_size_2837_ = lean_ctor_get(v_t_2836_, 0);
v_k_2838_ = lean_ctor_get(v_t_2836_, 1);
v_v_2839_ = lean_ctor_get(v_t_2836_, 2);
v_l_2840_ = lean_ctor_get(v_t_2836_, 3);
v_r_2841_ = lean_ctor_get(v_t_2836_, 4);
v_isSharedCheck_2856_ = !lean_is_exclusive(v_t_2836_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2843_ = v_t_2836_;
v_isShared_2844_ = v_isSharedCheck_2856_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_r_2841_);
lean_inc(v_l_2840_);
lean_inc(v_v_2839_);
lean_inc(v_k_2838_);
lean_inc(v_size_2837_);
lean_dec(v_t_2836_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2856_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
uint8_t v___x_2845_; 
v___x_2845_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2835_, v_k_2838_);
switch(v___x_2845_)
{
case 0:
{
lean_object* v_impl_2846_; lean_object* v___x_2847_; 
lean_del_object(v___x_2843_);
lean_dec(v_size_2837_);
v_impl_2846_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0___redArg(v_e_2834_, v_k_2835_, v_l_2840_);
v___x_2847_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_2838_, v_v_2839_, v_impl_2846_, v_r_2841_);
return v___x_2847_;
}
case 1:
{
lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v_val_2850_; lean_object* v___x_2852_; 
lean_dec(v_k_2838_);
v___x_2848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2848_, 0, v_v_2839_);
v___x_2849_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0___redArg___lam__0(v_e_2834_, v___x_2848_);
v_val_2850_ = lean_ctor_get(v___x_2849_, 0);
lean_inc(v_val_2850_);
lean_dec(v___x_2849_);
if (v_isShared_2844_ == 0)
{
lean_ctor_set(v___x_2843_, 2, v_val_2850_);
lean_ctor_set(v___x_2843_, 1, v_k_2835_);
v___x_2852_ = v___x_2843_;
goto v_reusejp_2851_;
}
else
{
lean_object* v_reuseFailAlloc_2853_; 
v_reuseFailAlloc_2853_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2853_, 0, v_size_2837_);
lean_ctor_set(v_reuseFailAlloc_2853_, 1, v_k_2835_);
lean_ctor_set(v_reuseFailAlloc_2853_, 2, v_val_2850_);
lean_ctor_set(v_reuseFailAlloc_2853_, 3, v_l_2840_);
lean_ctor_set(v_reuseFailAlloc_2853_, 4, v_r_2841_);
v___x_2852_ = v_reuseFailAlloc_2853_;
goto v_reusejp_2851_;
}
v_reusejp_2851_:
{
return v___x_2852_;
}
}
default: 
{
lean_object* v_impl_2854_; lean_object* v___x_2855_; 
lean_del_object(v___x_2843_);
lean_dec(v_size_2837_);
v_impl_2854_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0___redArg(v_e_2834_, v_k_2835_, v_r_2841_);
v___x_2855_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_2838_, v_v_2839_, v_l_2840_, v_impl_2854_);
return v___x_2855_;
}
}
}
}
else
{
lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v_val_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; 
v___x_2857_ = lean_box(0);
v___x_2858_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0___redArg___lam__0(v_e_2834_, v___x_2857_);
v_val_2859_ = lean_ctor_get(v___x_2858_, 0);
lean_inc(v_val_2859_);
lean_dec(v___x_2858_);
v___x_2860_ = lean_unsigned_to_nat(1u);
v___x_2861_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2861_, 0, v___x_2860_);
lean_ctor_set(v___x_2861_, 1, v_k_2835_);
lean_ctor_set(v___x_2861_, 2, v_val_2859_);
lean_ctor_set(v___x_2861_, 3, v_t_2836_);
lean_ctor_set(v___x_2861_, 4, v_t_2836_);
return v___x_2861_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__3_spec__6(lean_object* v_as_2862_, size_t v_i_2863_, size_t v_stop_2864_, lean_object* v_b_2865_){
_start:
{
uint8_t v___x_2866_; 
v___x_2866_ = lean_usize_dec_eq(v_i_2863_, v_stop_2864_);
if (v___x_2866_ == 0)
{
size_t v___x_2867_; size_t v___x_2868_; lean_object* v___x_2869_; 
v___x_2867_ = ((size_t)1ULL);
v___x_2868_ = lean_usize_sub(v_i_2863_, v___x_2867_);
v___x_2869_ = lean_array_uget_borrowed(v_as_2862_, v___x_2868_);
if (lean_obj_tag(v___x_2869_) == 0)
{
lean_object* v_a_2870_; lean_object* v_globalName_x3f_2871_; 
v_a_2870_ = lean_ctor_get(v___x_2869_, 0);
v_globalName_x3f_2871_ = lean_ctor_get(v_a_2870_, 3);
if (lean_obj_tag(v_globalName_x3f_2871_) == 0)
{
v_i_2863_ = v___x_2868_;
goto _start;
}
else
{
lean_object* v_val_2873_; lean_object* v___x_2874_; 
v_val_2873_ = lean_ctor_get(v_globalName_x3f_2871_, 0);
lean_inc(v_val_2873_);
lean_inc_ref(v___x_2869_);
v___x_2874_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0___redArg(v___x_2869_, v_val_2873_, v_b_2865_);
v_i_2863_ = v___x_2868_;
v_b_2865_ = v___x_2874_;
goto _start;
}
}
else
{
lean_object* v_a_2876_; lean_object* v_globalName_x3f_2877_; 
v_a_2876_ = lean_ctor_get(v___x_2869_, 1);
v_globalName_x3f_2877_ = lean_ctor_get(v_a_2876_, 3);
if (lean_obj_tag(v_globalName_x3f_2877_) == 0)
{
v_i_2863_ = v___x_2868_;
goto _start;
}
else
{
lean_object* v_val_2879_; lean_object* v___x_2880_; 
v_val_2879_ = lean_ctor_get(v_globalName_x3f_2877_, 0);
lean_inc(v_val_2879_);
lean_inc_ref(v___x_2869_);
v___x_2880_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0___redArg(v___x_2869_, v_val_2879_, v_b_2865_);
v_i_2863_ = v___x_2868_;
v_b_2865_ = v___x_2880_;
goto _start;
}
}
}
else
{
return v_b_2865_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__3_spec__6___boxed(lean_object* v_as_2882_, lean_object* v_i_2883_, lean_object* v_stop_2884_, lean_object* v_b_2885_){
_start:
{
size_t v_i_boxed_2886_; size_t v_stop_boxed_2887_; lean_object* v_res_2888_; 
v_i_boxed_2886_ = lean_unbox_usize(v_i_2883_);
lean_dec(v_i_2883_);
v_stop_boxed_2887_ = lean_unbox_usize(v_stop_2884_);
lean_dec(v_stop_2884_);
v_res_2888_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__3_spec__6(v_as_2882_, v_i_boxed_2886_, v_stop_boxed_2887_, v_b_2885_);
lean_dec_ref(v_as_2882_);
return v_res_2888_;
}
}
LEAN_EXPORT lean_object* l_List_foldrTR___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__3(lean_object* v_init_2889_, lean_object* v_l_2890_){
_start:
{
lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; uint8_t v___x_2894_; 
v___x_2891_ = lean_array_mk(v_l_2890_);
v___x_2892_ = lean_array_get_size(v___x_2891_);
v___x_2893_ = lean_unsigned_to_nat(0u);
v___x_2894_ = lean_nat_dec_lt(v___x_2893_, v___x_2892_);
if (v___x_2894_ == 0)
{
lean_dec_ref(v___x_2891_);
return v_init_2889_;
}
else
{
size_t v___x_2895_; size_t v___x_2896_; lean_object* v___x_2897_; 
v___x_2895_ = lean_usize_of_nat(v___x_2892_);
v___x_2896_ = ((size_t)0ULL);
v___x_2897_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__3_spec__6(v___x_2891_, v___x_2895_, v___x_2896_, v_init_2889_);
lean_dec_ref(v___x_2891_);
return v___x_2897_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__3___lam__0(lean_object* v_d_2900_, lean_object* v_o_2901_){
_start:
{
lean_object* v___y_2903_; 
if (lean_obj_tag(v_o_2901_) == 0)
{
lean_object* v___x_2906_; 
v___x_2906_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__3___lam__0___closed__0));
v___y_2903_ = v___x_2906_;
goto v___jp_2902_;
}
else
{
lean_object* v_val_2907_; 
v_val_2907_ = lean_ctor_get(v_o_2901_, 0);
lean_inc(v_val_2907_);
lean_dec_ref_known(v_o_2901_, 1);
v___y_2903_ = v_val_2907_;
goto v___jp_2902_;
}
v___jp_2902_:
{
lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2904_ = lean_array_push(v___y_2903_, v_d_2900_);
v___x_2905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2905_, 0, v___x_2904_);
return v___x_2905_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__3(lean_object* v_d_2908_, lean_object* v_a_2909_, lean_object* v_x_2910_){
_start:
{
if (lean_obj_tag(v_x_2910_) == 0)
{
lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v_val_2913_; lean_object* v___x_2914_; 
v___x_2911_ = lean_box(0);
v___x_2912_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__3___lam__0(v_d_2908_, v___x_2911_);
v_val_2913_ = lean_ctor_get(v___x_2912_, 0);
lean_inc(v_val_2913_);
lean_dec(v___x_2912_);
v___x_2914_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2914_, 0, v_a_2909_);
lean_ctor_set(v___x_2914_, 1, v_val_2913_);
lean_ctor_set(v___x_2914_, 2, v_x_2910_);
return v___x_2914_;
}
else
{
lean_object* v_key_2915_; lean_object* v_value_2916_; lean_object* v_tail_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2932_; 
v_key_2915_ = lean_ctor_get(v_x_2910_, 0);
v_value_2916_ = lean_ctor_get(v_x_2910_, 1);
v_tail_2917_ = lean_ctor_get(v_x_2910_, 2);
v_isSharedCheck_2932_ = !lean_is_exclusive(v_x_2910_);
if (v_isSharedCheck_2932_ == 0)
{
v___x_2919_ = v_x_2910_;
v_isShared_2920_ = v_isSharedCheck_2932_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_tail_2917_);
lean_inc(v_value_2916_);
lean_inc(v_key_2915_);
lean_dec(v_x_2910_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2932_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
uint8_t v___x_2921_; 
v___x_2921_ = lean_name_eq(v_key_2915_, v_a_2909_);
if (v___x_2921_ == 0)
{
lean_object* v_tail_2922_; lean_object* v___x_2924_; 
v_tail_2922_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__3(v_d_2908_, v_a_2909_, v_tail_2917_);
if (v_isShared_2920_ == 0)
{
lean_ctor_set(v___x_2919_, 2, v_tail_2922_);
v___x_2924_ = v___x_2919_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v_key_2915_);
lean_ctor_set(v_reuseFailAlloc_2925_, 1, v_value_2916_);
lean_ctor_set(v_reuseFailAlloc_2925_, 2, v_tail_2922_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
else
{
lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v_val_2928_; lean_object* v___x_2930_; 
lean_dec(v_key_2915_);
v___x_2926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2926_, 0, v_value_2916_);
v___x_2927_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__3___lam__0(v_d_2908_, v___x_2926_);
v_val_2928_ = lean_ctor_get(v___x_2927_, 0);
lean_inc(v_val_2928_);
lean_dec(v___x_2927_);
if (v_isShared_2920_ == 0)
{
lean_ctor_set(v___x_2919_, 1, v_val_2928_);
lean_ctor_set(v___x_2919_, 0, v_a_2909_);
v___x_2930_ = v___x_2919_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v_a_2909_);
lean_ctor_set(v_reuseFailAlloc_2931_, 1, v_val_2928_);
lean_ctor_set(v_reuseFailAlloc_2931_, 2, v_tail_2917_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
return v___x_2930_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2_spec__3_spec__6___redArg(lean_object* v_x_2933_, lean_object* v_x_2934_){
_start:
{
if (lean_obj_tag(v_x_2934_) == 0)
{
return v_x_2933_;
}
else
{
lean_object* v_key_2935_; lean_object* v_value_2936_; lean_object* v_tail_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2963_; 
v_key_2935_ = lean_ctor_get(v_x_2934_, 0);
v_value_2936_ = lean_ctor_get(v_x_2934_, 1);
v_tail_2937_ = lean_ctor_get(v_x_2934_, 2);
v_isSharedCheck_2963_ = !lean_is_exclusive(v_x_2934_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2939_ = v_x_2934_;
v_isShared_2940_ = v_isSharedCheck_2963_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_tail_2937_);
lean_inc(v_value_2936_);
lean_inc(v_key_2935_);
lean_dec(v_x_2934_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2963_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
lean_object* v___x_2941_; uint64_t v___y_2943_; 
v___x_2941_ = lean_array_get_size(v_x_2933_);
if (lean_obj_tag(v_key_2935_) == 0)
{
uint64_t v___x_2961_; 
v___x_2961_ = 1723ULL;
v___y_2943_ = v___x_2961_;
goto v___jp_2942_;
}
else
{
uint64_t v_hash_2962_; 
v_hash_2962_ = lean_ctor_get_uint64(v_key_2935_, sizeof(void*)*2);
v___y_2943_ = v_hash_2962_;
goto v___jp_2942_;
}
v___jp_2942_:
{
uint64_t v___x_2944_; uint64_t v___x_2945_; uint64_t v_fold_2946_; uint64_t v___x_2947_; uint64_t v___x_2948_; uint64_t v___x_2949_; size_t v___x_2950_; size_t v___x_2951_; size_t v___x_2952_; size_t v___x_2953_; size_t v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2957_; 
v___x_2944_ = 32ULL;
v___x_2945_ = lean_uint64_shift_right(v___y_2943_, v___x_2944_);
v_fold_2946_ = lean_uint64_xor(v___y_2943_, v___x_2945_);
v___x_2947_ = 16ULL;
v___x_2948_ = lean_uint64_shift_right(v_fold_2946_, v___x_2947_);
v___x_2949_ = lean_uint64_xor(v_fold_2946_, v___x_2948_);
v___x_2950_ = lean_uint64_to_usize(v___x_2949_);
v___x_2951_ = lean_usize_of_nat(v___x_2941_);
v___x_2952_ = ((size_t)1ULL);
v___x_2953_ = lean_usize_sub(v___x_2951_, v___x_2952_);
v___x_2954_ = lean_usize_land(v___x_2950_, v___x_2953_);
v___x_2955_ = lean_array_uget_borrowed(v_x_2933_, v___x_2954_);
lean_inc(v___x_2955_);
if (v_isShared_2940_ == 0)
{
lean_ctor_set(v___x_2939_, 2, v___x_2955_);
v___x_2957_ = v___x_2939_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_key_2935_);
lean_ctor_set(v_reuseFailAlloc_2960_, 1, v_value_2936_);
lean_ctor_set(v_reuseFailAlloc_2960_, 2, v___x_2955_);
v___x_2957_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
lean_object* v___x_2958_; 
v___x_2958_ = lean_array_uset(v_x_2933_, v___x_2954_, v___x_2957_);
v_x_2933_ = v___x_2958_;
v_x_2934_ = v_tail_2937_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2_spec__3___redArg(lean_object* v_i_2964_, lean_object* v_source_2965_, lean_object* v_target_2966_){
_start:
{
lean_object* v___x_2967_; uint8_t v___x_2968_; 
v___x_2967_ = lean_array_get_size(v_source_2965_);
v___x_2968_ = lean_nat_dec_lt(v_i_2964_, v___x_2967_);
if (v___x_2968_ == 0)
{
lean_dec_ref(v_source_2965_);
lean_dec(v_i_2964_);
return v_target_2966_;
}
else
{
lean_object* v_es_2969_; lean_object* v___x_2970_; lean_object* v_source_2971_; lean_object* v_target_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v_es_2969_ = lean_array_fget(v_source_2965_, v_i_2964_);
v___x_2970_ = lean_box(0);
v_source_2971_ = lean_array_fset(v_source_2965_, v_i_2964_, v___x_2970_);
v_target_2972_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2_spec__3_spec__6___redArg(v_target_2966_, v_es_2969_);
v___x_2973_ = lean_unsigned_to_nat(1u);
v___x_2974_ = lean_nat_add(v_i_2964_, v___x_2973_);
lean_dec(v_i_2964_);
v_i_2964_ = v___x_2974_;
v_source_2965_ = v_source_2971_;
v_target_2966_ = v_target_2972_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2___redArg(lean_object* v_data_2976_){
_start:
{
lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v_nbuckets_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
v___x_2977_ = lean_array_get_size(v_data_2976_);
v___x_2978_ = lean_unsigned_to_nat(2u);
v_nbuckets_2979_ = lean_nat_mul(v___x_2977_, v___x_2978_);
v___x_2980_ = lean_unsigned_to_nat(0u);
v___x_2981_ = lean_box(0);
v___x_2982_ = lean_mk_array(v_nbuckets_2979_, v___x_2981_);
v___x_2983_ = lean_array_propagate_mark(v_data_2976_, v___x_2982_);
v___x_2984_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2_spec__3___redArg(v___x_2980_, v_data_2976_, v___x_2983_);
return v___x_2984_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__1___redArg(lean_object* v_a_2985_, lean_object* v_x_2986_){
_start:
{
if (lean_obj_tag(v_x_2986_) == 0)
{
uint8_t v___x_2987_; 
v___x_2987_ = 0;
return v___x_2987_;
}
else
{
lean_object* v_key_2988_; lean_object* v_tail_2989_; uint8_t v___x_2990_; 
v_key_2988_ = lean_ctor_get(v_x_2986_, 0);
v_tail_2989_ = lean_ctor_get(v_x_2986_, 2);
v___x_2990_ = lean_name_eq(v_key_2988_, v_a_2985_);
if (v___x_2990_ == 0)
{
v_x_2986_ = v_tail_2989_;
goto _start;
}
else
{
return v___x_2990_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__1___redArg___boxed(lean_object* v_a_2992_, lean_object* v_x_2993_){
_start:
{
uint8_t v_res_2994_; lean_object* v_r_2995_; 
v_res_2994_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__1___redArg(v_a_2992_, v_x_2993_);
lean_dec(v_x_2993_);
lean_dec(v_a_2992_);
v_r_2995_ = lean_box(v_res_2994_);
return v_r_2995_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1(lean_object* v_d_2996_, lean_object* v_m_2997_, lean_object* v_a_2998_){
_start:
{
size_t v___y_3000_; lean_object* v___y_3001_; lean_object* v___y_3002_; lean_object* v___y_3003_; lean_object* v_size_3006_; lean_object* v_buckets_3007_; lean_object* v___x_3009_; uint8_t v_isShared_3010_; uint8_t v_isSharedCheck_3054_; 
v_size_3006_ = lean_ctor_get(v_m_2997_, 0);
v_buckets_3007_ = lean_ctor_get(v_m_2997_, 1);
v_isSharedCheck_3054_ = !lean_is_exclusive(v_m_2997_);
if (v_isSharedCheck_3054_ == 0)
{
v___x_3009_ = v_m_2997_;
v_isShared_3010_ = v_isSharedCheck_3054_;
goto v_resetjp_3008_;
}
else
{
lean_inc(v_buckets_3007_);
lean_inc(v_size_3006_);
lean_dec(v_m_2997_);
v___x_3009_ = lean_box(0);
v_isShared_3010_ = v_isSharedCheck_3054_;
goto v_resetjp_3008_;
}
v___jp_2999_:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; 
v___x_3004_ = lean_array_uset(v___y_3001_, v___y_3000_, v___y_3002_);
v___x_3005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3005_, 0, v___y_3003_);
lean_ctor_set(v___x_3005_, 1, v___x_3004_);
return v___x_3005_;
}
v_resetjp_3008_:
{
lean_object* v___x_3011_; uint64_t v___y_3013_; 
v___x_3011_ = lean_array_get_size(v_buckets_3007_);
if (lean_obj_tag(v_a_2998_) == 0)
{
uint64_t v___x_3052_; 
v___x_3052_ = 1723ULL;
v___y_3013_ = v___x_3052_;
goto v___jp_3012_;
}
else
{
uint64_t v_hash_3053_; 
v_hash_3053_ = lean_ctor_get_uint64(v_a_2998_, sizeof(void*)*2);
v___y_3013_ = v_hash_3053_;
goto v___jp_3012_;
}
v___jp_3012_:
{
uint64_t v___x_3014_; uint64_t v___x_3015_; uint64_t v_fold_3016_; uint64_t v___x_3017_; uint64_t v___x_3018_; uint64_t v___x_3019_; size_t v___x_3020_; size_t v___x_3021_; size_t v___x_3022_; size_t v___x_3023_; size_t v___x_3024_; lean_object* v_bkt_3025_; uint8_t v___x_3026_; 
v___x_3014_ = 32ULL;
v___x_3015_ = lean_uint64_shift_right(v___y_3013_, v___x_3014_);
v_fold_3016_ = lean_uint64_xor(v___y_3013_, v___x_3015_);
v___x_3017_ = 16ULL;
v___x_3018_ = lean_uint64_shift_right(v_fold_3016_, v___x_3017_);
v___x_3019_ = lean_uint64_xor(v_fold_3016_, v___x_3018_);
v___x_3020_ = lean_uint64_to_usize(v___x_3019_);
v___x_3021_ = lean_usize_of_nat(v___x_3011_);
v___x_3022_ = ((size_t)1ULL);
v___x_3023_ = lean_usize_sub(v___x_3021_, v___x_3022_);
v___x_3024_ = lean_usize_land(v___x_3020_, v___x_3023_);
v_bkt_3025_ = lean_array_uget_borrowed(v_buckets_3007_, v___x_3024_);
v___x_3026_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__1___redArg(v_a_2998_, v_bkt_3025_);
if (v___x_3026_ == 0)
{
lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v_size_x27_3030_; lean_object* v___x_3031_; lean_object* v_buckets_x27_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; uint8_t v___x_3038_; 
v___x_3027_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__3___lam__0___closed__0));
v___x_3028_ = lean_array_push(v___x_3027_, v_d_2996_);
v___x_3029_ = lean_unsigned_to_nat(1u);
v_size_x27_3030_ = lean_nat_add(v_size_3006_, v___x_3029_);
lean_dec(v_size_3006_);
lean_inc(v_bkt_3025_);
v___x_3031_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3031_, 0, v_a_2998_);
lean_ctor_set(v___x_3031_, 1, v___x_3028_);
lean_ctor_set(v___x_3031_, 2, v_bkt_3025_);
v_buckets_x27_3032_ = lean_array_uset(v_buckets_3007_, v___x_3024_, v___x_3031_);
v___x_3033_ = lean_unsigned_to_nat(4u);
v___x_3034_ = lean_nat_mul(v_size_x27_3030_, v___x_3033_);
v___x_3035_ = lean_unsigned_to_nat(3u);
v___x_3036_ = lean_nat_div(v___x_3034_, v___x_3035_);
lean_dec(v___x_3034_);
v___x_3037_ = lean_array_get_size(v_buckets_x27_3032_);
v___x_3038_ = lean_nat_dec_le(v___x_3036_, v___x_3037_);
lean_dec(v___x_3036_);
if (v___x_3038_ == 0)
{
lean_object* v_val_3039_; lean_object* v___x_3041_; 
v_val_3039_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2___redArg(v_buckets_x27_3032_);
if (v_isShared_3010_ == 0)
{
lean_ctor_set(v___x_3009_, 1, v_val_3039_);
lean_ctor_set(v___x_3009_, 0, v_size_x27_3030_);
v___x_3041_ = v___x_3009_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v_size_x27_3030_);
lean_ctor_set(v_reuseFailAlloc_3042_, 1, v_val_3039_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
return v___x_3041_;
}
}
else
{
lean_object* v___x_3044_; 
if (v_isShared_3010_ == 0)
{
lean_ctor_set(v___x_3009_, 1, v_buckets_x27_3032_);
lean_ctor_set(v___x_3009_, 0, v_size_x27_3030_);
v___x_3044_ = v___x_3009_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_size_x27_3030_);
lean_ctor_set(v_reuseFailAlloc_3045_, 1, v_buckets_x27_3032_);
v___x_3044_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
return v___x_3044_;
}
}
}
else
{
lean_object* v___x_3046_; lean_object* v_buckets_x27_3047_; lean_object* v_bkt_x27_3048_; uint8_t v___x_3049_; 
lean_inc(v_bkt_3025_);
lean_del_object(v___x_3009_);
v___x_3046_ = lean_box(0);
v_buckets_x27_3047_ = lean_array_uset(v_buckets_3007_, v___x_3024_, v___x_3046_);
lean_inc(v_a_2998_);
v_bkt_x27_3048_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__3(v_d_2996_, v_a_2998_, v_bkt_3025_);
v___x_3049_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__1___redArg(v_a_2998_, v_bkt_x27_3048_);
lean_dec(v_a_2998_);
if (v___x_3049_ == 0)
{
lean_object* v___x_3050_; lean_object* v___x_3051_; 
v___x_3050_ = lean_unsigned_to_nat(1u);
v___x_3051_ = lean_nat_sub(v_size_3006_, v___x_3050_);
lean_dec(v_size_3006_);
v___y_3000_ = v___x_3024_;
v___y_3001_ = v_buckets_x27_3047_;
v___y_3002_ = v_bkt_x27_3048_;
v___y_3003_ = v___x_3051_;
goto v___jp_2999_;
}
else
{
v___y_3000_ = v___x_3024_;
v___y_3001_ = v_buckets_x27_3047_;
v___y_3002_ = v_bkt_x27_3048_;
v___y_3003_ = v_size_3006_;
goto v___jp_2999_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__2(lean_object* v_x_3055_, lean_object* v_x_3056_){
_start:
{
if (lean_obj_tag(v_x_3056_) == 0)
{
return v_x_3055_;
}
else
{
lean_object* v_head_3057_; lean_object* v_tail_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; 
v_head_3057_ = lean_ctor_get(v_x_3056_, 0);
lean_inc(v_head_3057_);
v_tail_3058_ = lean_ctor_get(v_x_3056_, 1);
lean_inc(v_tail_3058_);
lean_dec_ref_known(v_x_3056_, 2);
v___x_3059_ = l_Lean_IR_Decl_name(v_head_3057_);
v___x_3060_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1(v_head_3057_, v_x_3055_, v___x_3059_);
v_x_3055_ = v___x_3060_;
v_x_3056_ = v_tail_3058_;
goto _start;
}
}
}
static lean_object* _init_l_Lean_ModuleUsage_LocalCompiled_ofEnv___closed__0(void){
_start:
{
lean_object* v___x_3062_; 
v___x_3062_ = l_Lean_ScopedEnvExtension_instInhabitedStateStack_default___redArg();
return v___x_3062_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_LocalCompiled_ofEnv(lean_object* v_env_3063_){
_start:
{
lean_object* v___x_3064_; lean_object* v_ext_3065_; lean_object* v_toEnvExtension_3066_; lean_object* v_asyncMode_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; uint8_t v___x_3071_; lean_object* v___x_3072_; lean_object* v_newEntries_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; 
v___x_3064_ = l_Lean_Meta_instanceExtension;
v_ext_3065_ = lean_ctor_get(v___x_3064_, 1);
v_toEnvExtension_3066_ = lean_ctor_get(v_ext_3065_, 0);
v_asyncMode_3067_ = lean_ctor_get(v_toEnvExtension_3066_, 2);
v___x_3068_ = lean_obj_once(&l_Lean_ModuleUsage_LocalCompiled_ofEnv___closed__0, &l_Lean_ModuleUsage_LocalCompiled_ofEnv___closed__0_once, _init_l_Lean_ModuleUsage_LocalCompiled_ofEnv___closed__0);
lean_inc_ref(v_env_3063_);
v___x_3069_ = l_Lean_IR_getDecls(v_env_3063_);
v___x_3070_ = lean_box(0);
v___x_3071_ = 0;
v___x_3072_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3068_, v_ext_3065_, v_env_3063_, v_asyncMode_3067_, v___x_3070_, v___x_3071_);
v_newEntries_3073_ = lean_ctor_get(v___x_3072_, 2);
lean_inc(v_newEntries_3073_);
lean_dec(v___x_3072_);
v___x_3074_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_CEnc_flushTys_spec__0___closed__3);
v___x_3075_ = l_List_foldl___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__2(v___x_3074_, v___x_3069_);
v___x_3076_ = lean_box(1);
v___x_3077_ = l_List_foldrTR___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__3(v___x_3076_, v_newEntries_3073_);
v___x_3078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3078_, 0, v___x_3075_);
lean_ctor_set(v___x_3078_, 1, v___x_3077_);
return v___x_3078_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0(lean_object* v_e_3079_, lean_object* v_k_3080_, lean_object* v_t_3081_, lean_object* v_hl_3082_){
_start:
{
lean_object* v___x_3083_; 
v___x_3083_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0___redArg(v_e_3079_, v_k_3080_, v_t_3081_);
return v___x_3083_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__1(lean_object* v_00_u03b2_3084_, lean_object* v_a_3085_, lean_object* v_x_3086_){
_start:
{
uint8_t v___x_3087_; 
v___x_3087_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__1___redArg(v_a_3085_, v_x_3086_);
return v___x_3087_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__1___boxed(lean_object* v_00_u03b2_3088_, lean_object* v_a_3089_, lean_object* v_x_3090_){
_start:
{
uint8_t v_res_3091_; lean_object* v_r_3092_; 
v_res_3091_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__1(v_00_u03b2_3088_, v_a_3089_, v_x_3090_);
lean_dec(v_x_3090_);
lean_dec(v_a_3089_);
v_r_3092_ = lean_box(v_res_3091_);
return v_r_3092_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2(lean_object* v_00_u03b2_3093_, lean_object* v_data_3094_){
_start:
{
lean_object* v___x_3095_; 
v___x_3095_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2___redArg(v_data_3094_);
return v___x_3095_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_3096_, lean_object* v_i_3097_, lean_object* v_source_3098_, lean_object* v_target_3099_){
_start:
{
lean_object* v___x_3100_; 
v___x_3100_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2_spec__3___redArg(v_i_3097_, v_source_3098_, v_target_3099_);
return v___x_3100_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_3101_, lean_object* v_x_3102_, lean_object* v_x_3103_){
_start:
{
lean_object* v___x_3104_; 
v___x_3104_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__2_spec__3_spec__6___redArg(v_x_3102_, v_x_3103_);
return v___x_3104_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_binderInfoEnc(lean_object* v_e_3105_, uint8_t v_x_3106_){
_start:
{
switch(v_x_3106_)
{
case 0:
{
uint8_t v___x_3107_; lean_object* v___x_3108_; 
v___x_3107_ = 0;
v___x_3108_ = lean_byte_array_push(v_e_3105_, v___x_3107_);
return v___x_3108_;
}
case 1:
{
uint8_t v___x_3109_; lean_object* v___x_3110_; 
v___x_3109_ = 1;
v___x_3110_ = lean_byte_array_push(v_e_3105_, v___x_3109_);
return v___x_3110_;
}
case 2:
{
uint8_t v___x_3111_; lean_object* v___x_3112_; 
v___x_3111_ = 2;
v___x_3112_ = lean_byte_array_push(v_e_3105_, v___x_3111_);
return v___x_3112_;
}
default: 
{
uint8_t v___x_3113_; lean_object* v___x_3114_; 
v___x_3113_ = 3;
v___x_3114_ = lean_byte_array_push(v_e_3105_, v___x_3113_);
return v___x_3114_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_binderInfoEnc___boxed(lean_object* v_e_3115_, lean_object* v_x_3116_){
_start:
{
uint8_t v_x_80__boxed_3117_; lean_object* v_res_3118_; 
v_x_80__boxed_3117_ = lean_unbox(v_x_3116_);
v_res_3118_ = l_Lean_ModuleUsage_binderInfoEnc(v_e_3115_, v_x_80__boxed_3117_);
return v_res_3118_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__1___lam__1(lean_object* v___y_3119_, lean_object* v___y_3120_){
_start:
{
lean_object* v_e_3121_; lean_object* v_tys_3122_; lean_object* v_ms_3123_; lean_object* v___x_3125_; uint8_t v_isShared_3126_; uint8_t v_isSharedCheck_3131_; 
v_e_3121_ = lean_ctor_get(v___y_3119_, 0);
v_tys_3122_ = lean_ctor_get(v___y_3119_, 1);
v_ms_3123_ = lean_ctor_get(v___y_3119_, 2);
v_isSharedCheck_3131_ = !lean_is_exclusive(v___y_3119_);
if (v_isSharedCheck_3131_ == 0)
{
v___x_3125_ = v___y_3119_;
v_isShared_3126_ = v_isSharedCheck_3131_;
goto v_resetjp_3124_;
}
else
{
lean_inc(v_ms_3123_);
lean_inc(v_tys_3122_);
lean_inc(v_e_3121_);
lean_dec(v___y_3119_);
v___x_3125_ = lean_box(0);
v_isShared_3126_ = v_isSharedCheck_3131_;
goto v_resetjp_3124_;
}
v_resetjp_3124_:
{
lean_object* v___x_3127_; lean_object* v___x_3129_; 
v___x_3127_ = lean_array_push(v_tys_3122_, v___y_3120_);
if (v_isShared_3126_ == 0)
{
lean_ctor_set(v___x_3125_, 1, v___x_3127_);
v___x_3129_ = v___x_3125_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v_e_3121_);
lean_ctor_set(v_reuseFailAlloc_3130_, 1, v___x_3127_);
lean_ctor_set(v_reuseFailAlloc_3130_, 2, v_ms_3123_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
return v___x_3129_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__1(lean_object* v_as_3133_, size_t v_i_3134_, size_t v_stop_3135_, lean_object* v_b_3136_){
_start:
{
uint8_t v___x_3137_; 
v___x_3137_ = lean_usize_dec_eq(v_i_3134_, v_stop_3135_);
if (v___x_3137_ == 0)
{
lean_object* v___x_3138_; lean_object* v_fieldName_3139_; lean_object* v_projFn_3140_; lean_object* v_subobject_x3f_3141_; uint8_t v_binderInfo_3142_; lean_object* v_autoParam_x3f_3143_; lean_object* v_e_3144_; lean_object* v_tys_3145_; lean_object* v_ms_3146_; lean_object* v___x_3148_; uint8_t v_isShared_3149_; uint8_t v_isSharedCheck_3174_; 
v___x_3138_ = lean_array_uget_borrowed(v_as_3133_, v_i_3134_);
v_fieldName_3139_ = lean_ctor_get(v___x_3138_, 0);
v_projFn_3140_ = lean_ctor_get(v___x_3138_, 1);
v_subobject_x3f_3141_ = lean_ctor_get(v___x_3138_, 2);
v_binderInfo_3142_ = lean_ctor_get_uint8(v___x_3138_, sizeof(void*)*4);
v_autoParam_x3f_3143_ = lean_ctor_get(v___x_3138_, 3);
v_e_3144_ = lean_ctor_get(v_b_3136_, 0);
v_tys_3145_ = lean_ctor_get(v_b_3136_, 1);
v_ms_3146_ = lean_ctor_get(v_b_3136_, 2);
v_isSharedCheck_3174_ = !lean_is_exclusive(v_b_3136_);
if (v_isSharedCheck_3174_ == 0)
{
v___x_3148_ = v_b_3136_;
v_isShared_3149_ = v_isSharedCheck_3174_;
goto v_resetjp_3147_;
}
else
{
lean_inc(v_ms_3146_);
lean_inc(v_tys_3145_);
lean_inc(v_e_3144_);
lean_dec(v_b_3136_);
v___x_3148_ = lean_box(0);
v_isShared_3149_ = v_isSharedCheck_3174_;
goto v_resetjp_3147_;
}
v_resetjp_3147_:
{
lean_object* v___f_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3155_; 
v___f_3150_ = ((lean_object*)(l_Lean_ModuleUsage_IREnc_irType___closed__0));
lean_inc(v_fieldName_3139_);
v___x_3151_ = l_Lean_ModuleUsage_Enc_name(v_e_3144_, v_fieldName_3139_);
lean_inc_n(v_projFn_3140_, 2);
v___x_3152_ = l_Lean_ModuleUsage_Enc_name(v___x_3151_, v_projFn_3140_);
v___x_3153_ = l_Lean_NameSet_insert(v_ms_3146_, v_projFn_3140_);
if (v_isShared_3149_ == 0)
{
lean_ctor_set(v___x_3148_, 2, v___x_3153_);
lean_ctor_set(v___x_3148_, 0, v___x_3152_);
v___x_3155_ = v___x_3148_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v___x_3152_);
lean_ctor_set(v_reuseFailAlloc_3173_, 1, v_tys_3145_);
lean_ctor_set(v_reuseFailAlloc_3173_, 2, v___x_3153_);
v___x_3155_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
lean_object* v_s_3156_; lean_object* v_e_3157_; lean_object* v_tys_3158_; lean_object* v_ms_3159_; lean_object* v___x_3161_; uint8_t v_isShared_3162_; uint8_t v_isSharedCheck_3172_; 
lean_inc(v_subobject_x3f_3141_);
v_s_3156_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_3155_, v_subobject_x3f_3141_, v___f_3150_);
v_e_3157_ = lean_ctor_get(v_s_3156_, 0);
v_tys_3158_ = lean_ctor_get(v_s_3156_, 1);
v_ms_3159_ = lean_ctor_get(v_s_3156_, 2);
v_isSharedCheck_3172_ = !lean_is_exclusive(v_s_3156_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3161_ = v_s_3156_;
v_isShared_3162_ = v_isSharedCheck_3172_;
goto v_resetjp_3160_;
}
else
{
lean_inc(v_ms_3159_);
lean_inc(v_tys_3158_);
lean_inc(v_e_3157_);
lean_dec(v_s_3156_);
v___x_3161_ = lean_box(0);
v_isShared_3162_ = v_isSharedCheck_3172_;
goto v_resetjp_3160_;
}
v_resetjp_3160_:
{
lean_object* v___f_3163_; lean_object* v___x_3164_; lean_object* v___x_3166_; 
v___f_3163_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__1___closed__0));
v___x_3164_ = l_Lean_ModuleUsage_binderInfoEnc(v_e_3157_, v_binderInfo_3142_);
if (v_isShared_3162_ == 0)
{
lean_ctor_set(v___x_3161_, 0, v___x_3164_);
v___x_3166_ = v___x_3161_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v___x_3164_);
lean_ctor_set(v_reuseFailAlloc_3171_, 1, v_tys_3158_);
lean_ctor_set(v_reuseFailAlloc_3171_, 2, v_ms_3159_);
v___x_3166_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
lean_object* v___x_3167_; size_t v___x_3168_; size_t v___x_3169_; 
lean_inc(v_autoParam_x3f_3143_);
v___x_3167_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_3166_, v_autoParam_x3f_3143_, v___f_3163_);
v___x_3168_ = ((size_t)1ULL);
v___x_3169_ = lean_usize_add(v_i_3134_, v___x_3168_);
v_i_3134_ = v___x_3169_;
v_b_3136_ = v___x_3167_;
goto _start;
}
}
}
}
}
else
{
return v_b_3136_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__1___boxed(lean_object* v_as_3175_, lean_object* v_i_3176_, lean_object* v_stop_3177_, lean_object* v_b_3178_){
_start:
{
size_t v_i_boxed_3179_; size_t v_stop_boxed_3180_; lean_object* v_res_3181_; 
v_i_boxed_3179_ = lean_unbox_usize(v_i_3176_);
lean_dec(v_i_3176_);
v_stop_boxed_3180_ = lean_unbox_usize(v_stop_3177_);
lean_dec(v_stop_3177_);
v_res_3181_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__1(v_as_3175_, v_i_boxed_3179_, v_stop_boxed_3180_, v_b_3178_);
lean_dec_ref(v_as_3175_);
return v_res_3181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__0(lean_object* v_as_3182_, size_t v_i_3183_, size_t v_stop_3184_, lean_object* v_b_3185_){
_start:
{
uint8_t v___x_3186_; 
v___x_3186_ = lean_usize_dec_eq(v_i_3183_, v_stop_3184_);
if (v___x_3186_ == 0)
{
lean_object* v___x_3187_; lean_object* v_structName_3188_; uint8_t v_subobject_3189_; lean_object* v_projFn_3190_; lean_object* v_e_3191_; lean_object* v_tys_3192_; lean_object* v_ms_3193_; lean_object* v___x_3195_; uint8_t v_isShared_3196_; uint8_t v_isSharedCheck_3208_; 
v___x_3187_ = lean_array_uget_borrowed(v_as_3182_, v_i_3183_);
v_structName_3188_ = lean_ctor_get(v___x_3187_, 0);
v_subobject_3189_ = lean_ctor_get_uint8(v___x_3187_, sizeof(void*)*2);
v_projFn_3190_ = lean_ctor_get(v___x_3187_, 1);
v_e_3191_ = lean_ctor_get(v_b_3185_, 0);
v_tys_3192_ = lean_ctor_get(v_b_3185_, 1);
v_ms_3193_ = lean_ctor_get(v_b_3185_, 2);
v_isSharedCheck_3208_ = !lean_is_exclusive(v_b_3185_);
if (v_isSharedCheck_3208_ == 0)
{
v___x_3195_ = v_b_3185_;
v_isShared_3196_ = v_isSharedCheck_3208_;
goto v_resetjp_3194_;
}
else
{
lean_inc(v_ms_3193_);
lean_inc(v_tys_3192_);
lean_inc(v_e_3191_);
lean_dec(v_b_3185_);
v___x_3195_ = lean_box(0);
v_isShared_3196_ = v_isSharedCheck_3208_;
goto v_resetjp_3194_;
}
v_resetjp_3194_:
{
lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3203_; 
lean_inc_n(v_structName_3188_, 2);
v___x_3197_ = l_Lean_ModuleUsage_Enc_name(v_e_3191_, v_structName_3188_);
v___x_3198_ = l_Lean_NameSet_insert(v_ms_3193_, v_structName_3188_);
v___x_3199_ = l_Lean_ModuleUsage_Enc_bool(v___x_3197_, v_subobject_3189_);
lean_inc_n(v_projFn_3190_, 2);
v___x_3200_ = l_Lean_ModuleUsage_Enc_name(v___x_3199_, v_projFn_3190_);
v___x_3201_ = l_Lean_NameSet_insert(v___x_3198_, v_projFn_3190_);
if (v_isShared_3196_ == 0)
{
lean_ctor_set(v___x_3195_, 2, v___x_3201_);
lean_ctor_set(v___x_3195_, 0, v___x_3200_);
v___x_3203_ = v___x_3195_;
goto v_reusejp_3202_;
}
else
{
lean_object* v_reuseFailAlloc_3207_; 
v_reuseFailAlloc_3207_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3207_, 0, v___x_3200_);
lean_ctor_set(v_reuseFailAlloc_3207_, 1, v_tys_3192_);
lean_ctor_set(v_reuseFailAlloc_3207_, 2, v___x_3201_);
v___x_3203_ = v_reuseFailAlloc_3207_;
goto v_reusejp_3202_;
}
v_reusejp_3202_:
{
size_t v___x_3204_; size_t v___x_3205_; 
v___x_3204_ = ((size_t)1ULL);
v___x_3205_ = lean_usize_add(v_i_3183_, v___x_3204_);
v_i_3183_ = v___x_3205_;
v_b_3185_ = v___x_3203_;
goto _start;
}
}
}
else
{
return v_b_3185_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__0___boxed(lean_object* v_as_3209_, lean_object* v_i_3210_, lean_object* v_stop_3211_, lean_object* v_b_3212_){
_start:
{
size_t v_i_boxed_3213_; size_t v_stop_boxed_3214_; lean_object* v_res_3215_; 
v_i_boxed_3213_ = lean_unbox_usize(v_i_3210_);
lean_dec(v_i_3210_);
v_stop_boxed_3214_ = lean_unbox_usize(v_stop_3211_);
lean_dec(v_stop_3211_);
v_res_3215_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__0(v_as_3209_, v_i_boxed_3213_, v_stop_boxed_3214_, v_b_3212_);
lean_dec_ref(v_as_3209_);
return v_res_3215_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_structureInfoEnc(lean_object* v_s_3216_, lean_object* v_i_3217_){
_start:
{
lean_object* v_structName_3218_; lean_object* v_fieldNames_3219_; lean_object* v_fieldInfo_3220_; lean_object* v_parentInfo_3221_; lean_object* v_e_3222_; lean_object* v_tys_3223_; lean_object* v_ms_3224_; lean_object* v___x_3226_; uint8_t v_isShared_3227_; uint8_t v_isSharedCheck_3255_; 
v_structName_3218_ = lean_ctor_get(v_i_3217_, 0);
lean_inc(v_structName_3218_);
v_fieldNames_3219_ = lean_ctor_get(v_i_3217_, 1);
lean_inc_ref(v_fieldNames_3219_);
v_fieldInfo_3220_ = lean_ctor_get(v_i_3217_, 2);
lean_inc_ref(v_fieldInfo_3220_);
v_parentInfo_3221_ = lean_ctor_get(v_i_3217_, 3);
lean_inc_ref(v_parentInfo_3221_);
lean_dec_ref(v_i_3217_);
v_e_3222_ = lean_ctor_get(v_s_3216_, 0);
v_tys_3223_ = lean_ctor_get(v_s_3216_, 1);
v_ms_3224_ = lean_ctor_get(v_s_3216_, 2);
v_isSharedCheck_3255_ = !lean_is_exclusive(v_s_3216_);
if (v_isSharedCheck_3255_ == 0)
{
v___x_3226_ = v_s_3216_;
v_isShared_3227_ = v_isSharedCheck_3255_;
goto v_resetjp_3225_;
}
else
{
lean_inc(v_ms_3224_);
lean_inc(v_tys_3223_);
lean_inc(v_e_3222_);
lean_dec(v_s_3216_);
v___x_3226_ = lean_box(0);
v_isShared_3227_ = v_isSharedCheck_3255_;
goto v_resetjp_3225_;
}
v_resetjp_3225_:
{
lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v_e_3235_; lean_object* v_tys_3236_; lean_object* v_ms_3237_; uint8_t v___x_3247_; 
v___x_3228_ = l_Lean_ModuleUsage_Enc_name(v_e_3222_, v_structName_3218_);
v___x_3229_ = lean_array_to_list(v_fieldNames_3219_);
v___x_3230_ = l_Lean_ModuleUsage_Enc_names(v___x_3228_, v___x_3229_);
v___x_3231_ = lean_array_get_size(v_fieldInfo_3220_);
v___x_3232_ = l_Lean_ModuleUsage_Enc_nat(v___x_3230_, v___x_3231_);
v___x_3233_ = lean_unsigned_to_nat(0u);
v___x_3247_ = lean_nat_dec_lt(v___x_3233_, v___x_3231_);
if (v___x_3247_ == 0)
{
lean_dec_ref(v_fieldInfo_3220_);
v_e_3235_ = v___x_3232_;
v_tys_3236_ = v_tys_3223_;
v_ms_3237_ = v_ms_3224_;
goto v___jp_3234_;
}
else
{
lean_object* v___x_3248_; size_t v___x_3249_; size_t v___x_3250_; lean_object* v___x_3251_; lean_object* v_e_3252_; lean_object* v_tys_3253_; lean_object* v_ms_3254_; 
v___x_3248_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3248_, 0, v___x_3232_);
lean_ctor_set(v___x_3248_, 1, v_tys_3223_);
lean_ctor_set(v___x_3248_, 2, v_ms_3224_);
v___x_3249_ = ((size_t)0ULL);
v___x_3250_ = lean_usize_of_nat(v___x_3231_);
v___x_3251_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__1(v_fieldInfo_3220_, v___x_3249_, v___x_3250_, v___x_3248_);
lean_dec_ref(v_fieldInfo_3220_);
v_e_3252_ = lean_ctor_get(v___x_3251_, 0);
lean_inc_ref(v_e_3252_);
v_tys_3253_ = lean_ctor_get(v___x_3251_, 1);
lean_inc_ref(v_tys_3253_);
v_ms_3254_ = lean_ctor_get(v___x_3251_, 2);
lean_inc(v_ms_3254_);
lean_dec_ref(v___x_3251_);
v_e_3235_ = v_e_3252_;
v_tys_3236_ = v_tys_3253_;
v_ms_3237_ = v_ms_3254_;
goto v___jp_3234_;
}
v___jp_3234_:
{
lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3241_; 
v___x_3238_ = lean_array_get_size(v_parentInfo_3221_);
v___x_3239_ = l_Lean_ModuleUsage_Enc_nat(v_e_3235_, v___x_3238_);
if (v_isShared_3227_ == 0)
{
lean_ctor_set(v___x_3226_, 2, v_ms_3237_);
lean_ctor_set(v___x_3226_, 1, v_tys_3236_);
lean_ctor_set(v___x_3226_, 0, v___x_3239_);
v___x_3241_ = v___x_3226_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v___x_3239_);
lean_ctor_set(v_reuseFailAlloc_3246_, 1, v_tys_3236_);
lean_ctor_set(v_reuseFailAlloc_3246_, 2, v_ms_3237_);
v___x_3241_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
uint8_t v___x_3242_; 
v___x_3242_ = lean_nat_dec_lt(v___x_3233_, v___x_3238_);
if (v___x_3242_ == 0)
{
lean_dec_ref(v_parentInfo_3221_);
return v___x_3241_;
}
else
{
size_t v___x_3243_; size_t v___x_3244_; lean_object* v___x_3245_; 
v___x_3243_ = ((size_t)0ULL);
v___x_3244_ = lean_usize_of_nat(v___x_3238_);
v___x_3245_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_structureInfoEnc_spec__0(v_parentInfo_3221_, v___x_3243_, v___x_3244_, v___x_3241_);
lean_dec_ref(v_parentInfo_3221_);
return v___x_3245_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_matcherInfoEnc___lam__0(lean_object* v___y_3256_, lean_object* v___y_3257_){
_start:
{
lean_object* v_e_3258_; lean_object* v_tys_3259_; lean_object* v_ms_3260_; lean_object* v___x_3262_; uint8_t v_isShared_3263_; uint8_t v_isSharedCheck_3268_; 
v_e_3258_ = lean_ctor_get(v___y_3256_, 0);
v_tys_3259_ = lean_ctor_get(v___y_3256_, 1);
v_ms_3260_ = lean_ctor_get(v___y_3256_, 2);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___y_3256_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3262_ = v___y_3256_;
v_isShared_3263_ = v_isSharedCheck_3268_;
goto v_resetjp_3261_;
}
else
{
lean_inc(v_ms_3260_);
lean_inc(v_tys_3259_);
lean_inc(v_e_3258_);
lean_dec(v___y_3256_);
v___x_3262_ = lean_box(0);
v_isShared_3263_ = v_isSharedCheck_3268_;
goto v_resetjp_3261_;
}
v_resetjp_3261_:
{
lean_object* v___x_3264_; lean_object* v___x_3266_; 
v___x_3264_ = l_Lean_ModuleUsage_Enc_nat(v_e_3258_, v___y_3257_);
if (v_isShared_3263_ == 0)
{
lean_ctor_set(v___x_3262_, 0, v___x_3264_);
v___x_3266_ = v___x_3262_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v___x_3264_);
lean_ctor_set(v_reuseFailAlloc_3267_, 1, v_tys_3259_);
lean_ctor_set(v_reuseFailAlloc_3267_, 2, v_ms_3260_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_ModuleUsage_matcherInfoEnc_spec__3(lean_object* v_x_3269_, lean_object* v_x_3270_){
_start:
{
if (lean_obj_tag(v_x_3270_) == 0)
{
return v_x_3269_;
}
else
{
lean_object* v_key_3271_; lean_object* v_value_3272_; lean_object* v_tail_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; 
v_key_3271_ = lean_ctor_get(v_x_3270_, 0);
v_value_3272_ = lean_ctor_get(v_x_3270_, 1);
v_tail_3273_ = lean_ctor_get(v_x_3270_, 2);
lean_inc(v_value_3272_);
lean_inc(v_key_3271_);
v___x_3274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3274_, 0, v_key_3271_);
lean_ctor_set(v___x_3274_, 1, v_value_3272_);
v___x_3275_ = lean_array_push(v_x_3269_, v___x_3274_);
v_x_3269_ = v___x_3275_;
v_x_3270_ = v_tail_3273_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_ModuleUsage_matcherInfoEnc_spec__3___boxed(lean_object* v_x_3277_, lean_object* v_x_3278_){
_start:
{
lean_object* v_res_3279_; 
v_res_3279_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_ModuleUsage_matcherInfoEnc_spec__3(v_x_3277_, v_x_3278_);
lean_dec(v_x_3278_);
return v_res_3279_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__4(lean_object* v_as_3280_, size_t v_i_3281_, size_t v_stop_3282_, lean_object* v_b_3283_){
_start:
{
uint8_t v___x_3284_; 
v___x_3284_ = lean_usize_dec_eq(v_i_3281_, v_stop_3282_);
if (v___x_3284_ == 0)
{
lean_object* v___x_3285_; lean_object* v___x_3286_; size_t v___x_3287_; size_t v___x_3288_; 
v___x_3285_ = lean_array_uget_borrowed(v_as_3280_, v_i_3281_);
v___x_3286_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_ModuleUsage_matcherInfoEnc_spec__3(v_b_3283_, v___x_3285_);
v___x_3287_ = ((size_t)1ULL);
v___x_3288_ = lean_usize_add(v_i_3281_, v___x_3287_);
v_i_3281_ = v___x_3288_;
v_b_3283_ = v___x_3286_;
goto _start;
}
else
{
return v_b_3283_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__4___boxed(lean_object* v_as_3290_, lean_object* v_i_3291_, lean_object* v_stop_3292_, lean_object* v_b_3293_){
_start:
{
size_t v_i_boxed_3294_; size_t v_stop_boxed_3295_; lean_object* v_res_3296_; 
v_i_boxed_3294_ = lean_unbox_usize(v_i_3291_);
lean_dec(v_i_3291_);
v_stop_boxed_3295_ = lean_unbox_usize(v_stop_3292_);
lean_dec(v_stop_3292_);
v_res_3296_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__4(v_as_3290_, v_i_boxed_3294_, v_stop_boxed_3295_, v_b_3293_);
lean_dec_ref(v_as_3290_);
return v_res_3296_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2_spec__3___redArg(lean_object* v_hi_3297_, lean_object* v_pivot_3298_, lean_object* v_as_3299_, lean_object* v_i_3300_, lean_object* v_k_3301_){
_start:
{
uint8_t v___x_3302_; 
v___x_3302_ = lean_nat_dec_lt(v_k_3301_, v_hi_3297_);
if (v___x_3302_ == 0)
{
lean_object* v___x_3303_; lean_object* v___x_3304_; 
lean_dec(v_k_3301_);
v___x_3303_ = lean_array_fswap(v_as_3299_, v_i_3300_, v_hi_3297_);
v___x_3304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3304_, 0, v_i_3300_);
lean_ctor_set(v___x_3304_, 1, v___x_3303_);
return v___x_3304_;
}
else
{
lean_object* v___x_3305_; lean_object* v_fst_3306_; lean_object* v_fst_3307_; uint8_t v___x_3308_; 
v___x_3305_ = lean_array_fget_borrowed(v_as_3299_, v_k_3301_);
v_fst_3306_ = lean_ctor_get(v___x_3305_, 0);
v_fst_3307_ = lean_ctor_get(v_pivot_3298_, 0);
v___x_3308_ = lean_nat_dec_lt(v_fst_3306_, v_fst_3307_);
if (v___x_3308_ == 0)
{
lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3309_ = lean_unsigned_to_nat(1u);
v___x_3310_ = lean_nat_add(v_k_3301_, v___x_3309_);
lean_dec(v_k_3301_);
v_k_3301_ = v___x_3310_;
goto _start;
}
else
{
lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; 
v___x_3312_ = lean_array_fswap(v_as_3299_, v_i_3300_, v_k_3301_);
v___x_3313_ = lean_unsigned_to_nat(1u);
v___x_3314_ = lean_nat_add(v_i_3300_, v___x_3313_);
lean_dec(v_i_3300_);
v___x_3315_ = lean_nat_add(v_k_3301_, v___x_3313_);
lean_dec(v_k_3301_);
v_as_3299_ = v___x_3312_;
v_i_3300_ = v___x_3314_;
v_k_3301_ = v___x_3315_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2_spec__3___redArg___boxed(lean_object* v_hi_3317_, lean_object* v_pivot_3318_, lean_object* v_as_3319_, lean_object* v_i_3320_, lean_object* v_k_3321_){
_start:
{
lean_object* v_res_3322_; 
v_res_3322_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2_spec__3___redArg(v_hi_3317_, v_pivot_3318_, v_as_3319_, v_i_3320_, v_k_3321_);
lean_dec_ref(v_pivot_3318_);
lean_dec(v_hi_3317_);
return v_res_3322_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___redArg___lam__0(lean_object* v_x1_3323_, lean_object* v_x2_3324_){
_start:
{
lean_object* v_fst_3325_; lean_object* v_fst_3326_; uint8_t v___x_3327_; 
v_fst_3325_ = lean_ctor_get(v_x1_3323_, 0);
v_fst_3326_ = lean_ctor_get(v_x2_3324_, 0);
v___x_3327_ = lean_nat_dec_lt(v_fst_3325_, v_fst_3326_);
return v___x_3327_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___redArg___lam__0___boxed(lean_object* v_x1_3328_, lean_object* v_x2_3329_){
_start:
{
uint8_t v_res_3330_; lean_object* v_r_3331_; 
v_res_3330_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___redArg___lam__0(v_x1_3328_, v_x2_3329_);
lean_dec_ref(v_x2_3329_);
lean_dec_ref(v_x1_3328_);
v_r_3331_ = lean_box(v_res_3330_);
return v_r_3331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___redArg(lean_object* v_n_3332_, lean_object* v_as_3333_, lean_object* v_lo_3334_, lean_object* v_hi_3335_){
_start:
{
lean_object* v___y_3337_; uint8_t v___x_3347_; 
v___x_3347_ = lean_nat_dec_lt(v_lo_3334_, v_hi_3335_);
if (v___x_3347_ == 0)
{
lean_dec(v_lo_3334_);
return v_as_3333_;
}
else
{
lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v_mid_3350_; lean_object* v___y_3352_; lean_object* v___y_3358_; lean_object* v___x_3363_; lean_object* v___x_3364_; uint8_t v___x_3365_; 
v___x_3348_ = lean_nat_add(v_lo_3334_, v_hi_3335_);
v___x_3349_ = lean_unsigned_to_nat(1u);
v_mid_3350_ = lean_nat_shiftr(v___x_3348_, v___x_3349_);
lean_dec(v___x_3348_);
v___x_3363_ = lean_array_fget_borrowed(v_as_3333_, v_mid_3350_);
v___x_3364_ = lean_array_fget_borrowed(v_as_3333_, v_lo_3334_);
v___x_3365_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___redArg___lam__0(v___x_3363_, v___x_3364_);
if (v___x_3365_ == 0)
{
v___y_3358_ = v_as_3333_;
goto v___jp_3357_;
}
else
{
lean_object* v___x_3366_; 
v___x_3366_ = lean_array_fswap(v_as_3333_, v_lo_3334_, v_mid_3350_);
v___y_3358_ = v___x_3366_;
goto v___jp_3357_;
}
v___jp_3351_:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; uint8_t v___x_3355_; 
v___x_3353_ = lean_array_fget_borrowed(v___y_3352_, v_mid_3350_);
v___x_3354_ = lean_array_fget_borrowed(v___y_3352_, v_hi_3335_);
v___x_3355_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___redArg___lam__0(v___x_3353_, v___x_3354_);
if (v___x_3355_ == 0)
{
lean_dec(v_mid_3350_);
v___y_3337_ = v___y_3352_;
goto v___jp_3336_;
}
else
{
lean_object* v___x_3356_; 
v___x_3356_ = lean_array_fswap(v___y_3352_, v_mid_3350_, v_hi_3335_);
lean_dec(v_mid_3350_);
v___y_3337_ = v___x_3356_;
goto v___jp_3336_;
}
}
v___jp_3357_:
{
lean_object* v___x_3359_; lean_object* v___x_3360_; uint8_t v___x_3361_; 
v___x_3359_ = lean_array_fget_borrowed(v___y_3358_, v_hi_3335_);
v___x_3360_ = lean_array_fget_borrowed(v___y_3358_, v_lo_3334_);
v___x_3361_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___redArg___lam__0(v___x_3359_, v___x_3360_);
if (v___x_3361_ == 0)
{
v___y_3352_ = v___y_3358_;
goto v___jp_3351_;
}
else
{
lean_object* v___x_3362_; 
v___x_3362_ = lean_array_fswap(v___y_3358_, v_lo_3334_, v_hi_3335_);
v___y_3352_ = v___x_3362_;
goto v___jp_3351_;
}
}
}
v___jp_3336_:
{
lean_object* v_pivot_3338_; lean_object* v___x_3339_; lean_object* v_fst_3340_; lean_object* v_snd_3341_; uint8_t v___x_3342_; 
v_pivot_3338_ = lean_array_fget(v___y_3337_, v_hi_3335_);
lean_inc_n(v_lo_3334_, 2);
v___x_3339_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2_spec__3___redArg(v_hi_3335_, v_pivot_3338_, v___y_3337_, v_lo_3334_, v_lo_3334_);
lean_dec(v_pivot_3338_);
v_fst_3340_ = lean_ctor_get(v___x_3339_, 0);
lean_inc(v_fst_3340_);
v_snd_3341_ = lean_ctor_get(v___x_3339_, 1);
lean_inc(v_snd_3341_);
lean_dec_ref(v___x_3339_);
v___x_3342_ = lean_nat_dec_le(v_hi_3335_, v_fst_3340_);
if (v___x_3342_ == 0)
{
lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; 
v___x_3343_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___redArg(v_n_3332_, v_snd_3341_, v_lo_3334_, v_fst_3340_);
v___x_3344_ = lean_unsigned_to_nat(1u);
v___x_3345_ = lean_nat_add(v_fst_3340_, v___x_3344_);
lean_dec(v_fst_3340_);
v_as_3333_ = v___x_3343_;
v_lo_3334_ = v___x_3345_;
goto _start;
}
else
{
lean_dec(v_fst_3340_);
lean_dec(v_lo_3334_);
return v_snd_3341_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___redArg___boxed(lean_object* v_n_3367_, lean_object* v_as_3368_, lean_object* v_lo_3369_, lean_object* v_hi_3370_){
_start:
{
lean_object* v_res_3371_; 
v_res_3371_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___redArg(v_n_3367_, v_as_3368_, v_lo_3369_, v_hi_3370_);
lean_dec(v_hi_3370_);
lean_dec(v_n_3367_);
return v_res_3371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__6(lean_object* v_as_3372_, size_t v_i_3373_, size_t v_stop_3374_, lean_object* v_b_3375_){
_start:
{
uint8_t v___x_3376_; 
v___x_3376_ = lean_usize_dec_eq(v_i_3373_, v_stop_3374_);
if (v___x_3376_ == 0)
{
lean_object* v___x_3377_; lean_object* v_numFields_3378_; lean_object* v_numOverlaps_3379_; uint8_t v_hasUnitThunk_3380_; lean_object* v_e_3381_; lean_object* v_tys_3382_; lean_object* v_ms_3383_; lean_object* v___x_3385_; uint8_t v_isShared_3386_; uint8_t v_isSharedCheck_3396_; 
v___x_3377_ = lean_array_uget_borrowed(v_as_3372_, v_i_3373_);
v_numFields_3378_ = lean_ctor_get(v___x_3377_, 0);
v_numOverlaps_3379_ = lean_ctor_get(v___x_3377_, 1);
v_hasUnitThunk_3380_ = lean_ctor_get_uint8(v___x_3377_, sizeof(void*)*2);
v_e_3381_ = lean_ctor_get(v_b_3375_, 0);
v_tys_3382_ = lean_ctor_get(v_b_3375_, 1);
v_ms_3383_ = lean_ctor_get(v_b_3375_, 2);
v_isSharedCheck_3396_ = !lean_is_exclusive(v_b_3375_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3385_ = v_b_3375_;
v_isShared_3386_ = v_isSharedCheck_3396_;
goto v_resetjp_3384_;
}
else
{
lean_inc(v_ms_3383_);
lean_inc(v_tys_3382_);
lean_inc(v_e_3381_);
lean_dec(v_b_3375_);
v___x_3385_ = lean_box(0);
v_isShared_3386_ = v_isSharedCheck_3396_;
goto v_resetjp_3384_;
}
v_resetjp_3384_:
{
lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3391_; 
lean_inc(v_numFields_3378_);
v___x_3387_ = l_Lean_ModuleUsage_Enc_nat(v_e_3381_, v_numFields_3378_);
lean_inc(v_numOverlaps_3379_);
v___x_3388_ = l_Lean_ModuleUsage_Enc_nat(v___x_3387_, v_numOverlaps_3379_);
v___x_3389_ = l_Lean_ModuleUsage_Enc_bool(v___x_3388_, v_hasUnitThunk_3380_);
if (v_isShared_3386_ == 0)
{
lean_ctor_set(v___x_3385_, 0, v___x_3389_);
v___x_3391_ = v___x_3385_;
goto v_reusejp_3390_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v___x_3389_);
lean_ctor_set(v_reuseFailAlloc_3395_, 1, v_tys_3382_);
lean_ctor_set(v_reuseFailAlloc_3395_, 2, v_ms_3383_);
v___x_3391_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3390_;
}
v_reusejp_3390_:
{
size_t v___x_3392_; size_t v___x_3393_; 
v___x_3392_ = ((size_t)1ULL);
v___x_3393_ = lean_usize_add(v_i_3373_, v___x_3392_);
v_i_3373_ = v___x_3393_;
v_b_3375_ = v___x_3391_;
goto _start;
}
}
}
else
{
return v_b_3375_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__6___boxed(lean_object* v_as_3397_, lean_object* v_i_3398_, lean_object* v_stop_3399_, lean_object* v_b_3400_){
_start:
{
size_t v_i_boxed_3401_; size_t v_stop_boxed_3402_; lean_object* v_res_3403_; 
v_i_boxed_3401_ = lean_unbox_usize(v_i_3398_);
lean_dec(v_i_3398_);
v_stop_boxed_3402_ = lean_unbox_usize(v_stop_3399_);
lean_dec(v_stop_3399_);
v_res_3403_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__6(v_as_3397_, v_i_boxed_3401_, v_stop_boxed_3402_, v_b_3400_);
lean_dec_ref(v_as_3397_);
return v_res_3403_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__5___lam__0(lean_object* v___y_3404_, lean_object* v___y_3405_){
_start:
{
lean_object* v_e_3406_; lean_object* v_tys_3407_; lean_object* v_ms_3408_; lean_object* v___x_3410_; uint8_t v_isShared_3411_; uint8_t v_isSharedCheck_3416_; 
v_e_3406_ = lean_ctor_get(v___y_3404_, 0);
v_tys_3407_ = lean_ctor_get(v___y_3404_, 1);
v_ms_3408_ = lean_ctor_get(v___y_3404_, 2);
v_isSharedCheck_3416_ = !lean_is_exclusive(v___y_3404_);
if (v_isSharedCheck_3416_ == 0)
{
v___x_3410_ = v___y_3404_;
v_isShared_3411_ = v_isSharedCheck_3416_;
goto v_resetjp_3409_;
}
else
{
lean_inc(v_ms_3408_);
lean_inc(v_tys_3407_);
lean_inc(v_e_3406_);
lean_dec(v___y_3404_);
v___x_3410_ = lean_box(0);
v_isShared_3411_ = v_isSharedCheck_3416_;
goto v_resetjp_3409_;
}
v_resetjp_3409_:
{
lean_object* v___x_3412_; lean_object* v___x_3414_; 
v___x_3412_ = l_Lean_ModuleUsage_Enc_name(v_e_3406_, v___y_3405_);
if (v_isShared_3411_ == 0)
{
lean_ctor_set(v___x_3410_, 0, v___x_3412_);
v___x_3414_ = v___x_3410_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v___x_3412_);
lean_ctor_set(v_reuseFailAlloc_3415_, 1, v_tys_3407_);
lean_ctor_set(v_reuseFailAlloc_3415_, 2, v_ms_3408_);
v___x_3414_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
return v___x_3414_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__5(lean_object* v_as_3418_, size_t v_i_3419_, size_t v_stop_3420_, lean_object* v_b_3421_){
_start:
{
uint8_t v___x_3422_; 
v___x_3422_ = lean_usize_dec_eq(v_i_3419_, v_stop_3420_);
if (v___x_3422_ == 0)
{
lean_object* v___f_3423_; lean_object* v_hName_x3f_3424_; lean_object* v___x_3425_; size_t v___x_3426_; size_t v___x_3427_; 
v___f_3423_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__5___closed__0));
v_hName_x3f_3424_ = lean_array_uget_borrowed(v_as_3418_, v_i_3419_);
lean_inc(v_hName_x3f_3424_);
v___x_3425_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v_b_3421_, v_hName_x3f_3424_, v___f_3423_);
v___x_3426_ = ((size_t)1ULL);
v___x_3427_ = lean_usize_add(v_i_3419_, v___x_3426_);
v_i_3419_ = v___x_3427_;
v_b_3421_ = v___x_3425_;
goto _start;
}
else
{
return v_b_3421_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__5___boxed(lean_object* v_as_3429_, lean_object* v_i_3430_, lean_object* v_stop_3431_, lean_object* v_b_3432_){
_start:
{
size_t v_i_boxed_3433_; size_t v_stop_boxed_3434_; lean_object* v_res_3435_; 
v_i_boxed_3433_ = lean_unbox_usize(v_i_3430_);
lean_dec(v_i_3430_);
v_stop_boxed_3434_ = lean_unbox_usize(v_stop_3431_);
lean_dec(v_stop_3431_);
v_res_3435_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__5(v_as_3429_, v_i_boxed_3433_, v_stop_boxed_3434_, v_b_3432_);
lean_dec_ref(v_as_3429_);
return v_res_3435_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_ModuleUsage_matcherInfoEnc_spec__0_spec__0(lean_object* v_init_3436_, lean_object* v_x_3437_){
_start:
{
if (lean_obj_tag(v_x_3437_) == 0)
{
lean_object* v_k_3438_; lean_object* v_l_3439_; lean_object* v_r_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; 
v_k_3438_ = lean_ctor_get(v_x_3437_, 1);
lean_inc(v_k_3438_);
v_l_3439_ = lean_ctor_get(v_x_3437_, 3);
lean_inc(v_l_3439_);
v_r_3440_ = lean_ctor_get(v_x_3437_, 4);
lean_inc(v_r_3440_);
lean_dec_ref_known(v_x_3437_, 5);
v___x_3441_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_ModuleUsage_matcherInfoEnc_spec__0_spec__0(v_init_3436_, v_l_3439_);
v___x_3442_ = lean_array_push(v___x_3441_, v_k_3438_);
v_init_3436_ = v___x_3442_;
v_x_3437_ = v_r_3440_;
goto _start;
}
else
{
return v_init_3436_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__1(lean_object* v_as_3444_, size_t v_i_3445_, size_t v_stop_3446_, lean_object* v_b_3447_){
_start:
{
uint8_t v___x_3448_; 
v___x_3448_ = lean_usize_dec_eq(v_i_3445_, v_stop_3446_);
if (v___x_3448_ == 0)
{
lean_object* v___x_3449_; lean_object* v_fst_3450_; lean_object* v_snd_3451_; lean_object* v_e_3452_; lean_object* v_tys_3453_; lean_object* v_ms_3454_; lean_object* v___x_3456_; uint8_t v_isShared_3457_; uint8_t v_isSharedCheck_3472_; 
v___x_3449_ = lean_array_uget_borrowed(v_as_3444_, v_i_3445_);
v_fst_3450_ = lean_ctor_get(v___x_3449_, 0);
v_snd_3451_ = lean_ctor_get(v___x_3449_, 1);
v_e_3452_ = lean_ctor_get(v_b_3447_, 0);
v_tys_3453_ = lean_ctor_get(v_b_3447_, 1);
v_ms_3454_ = lean_ctor_get(v_b_3447_, 2);
v_isSharedCheck_3472_ = !lean_is_exclusive(v_b_3447_);
if (v_isSharedCheck_3472_ == 0)
{
v___x_3456_ = v_b_3447_;
v_isShared_3457_ = v_isSharedCheck_3472_;
goto v_resetjp_3455_;
}
else
{
lean_inc(v_ms_3454_);
lean_inc(v_tys_3453_);
lean_inc(v_e_3452_);
lean_dec(v_b_3447_);
v___x_3456_ = lean_box(0);
v_isShared_3457_ = v_isSharedCheck_3472_;
goto v_resetjp_3455_;
}
v_resetjp_3455_:
{
lean_object* v___x_3458_; lean_object* v___y_3460_; 
lean_inc(v_fst_3450_);
v___x_3458_ = l_Lean_ModuleUsage_Enc_nat(v_e_3452_, v_fst_3450_);
if (lean_obj_tag(v_snd_3451_) == 0)
{
lean_object* v_size_3470_; 
v_size_3470_ = lean_ctor_get(v_snd_3451_, 0);
lean_inc(v_size_3470_);
v___y_3460_ = v_size_3470_;
goto v___jp_3459_;
}
else
{
lean_object* v___x_3471_; 
v___x_3471_ = lean_unsigned_to_nat(0u);
v___y_3460_ = v___x_3471_;
goto v___jp_3459_;
}
v___jp_3459_:
{
lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3465_; 
v___x_3461_ = lean_mk_empty_array_with_capacity(v___y_3460_);
lean_dec(v___y_3460_);
lean_inc(v_snd_3451_);
v___x_3462_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_ModuleUsage_matcherInfoEnc_spec__0_spec__0(v___x_3461_, v_snd_3451_);
v___x_3463_ = l_Lean_ModuleUsage_Enc_nats(v___x_3458_, v___x_3462_);
lean_dec_ref(v___x_3462_);
if (v_isShared_3457_ == 0)
{
lean_ctor_set(v___x_3456_, 0, v___x_3463_);
v___x_3465_ = v___x_3456_;
goto v_reusejp_3464_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v___x_3463_);
lean_ctor_set(v_reuseFailAlloc_3469_, 1, v_tys_3453_);
lean_ctor_set(v_reuseFailAlloc_3469_, 2, v_ms_3454_);
v___x_3465_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3464_;
}
v_reusejp_3464_:
{
size_t v___x_3466_; size_t v___x_3467_; 
v___x_3466_ = ((size_t)1ULL);
v___x_3467_ = lean_usize_add(v_i_3445_, v___x_3466_);
v_i_3445_ = v___x_3467_;
v_b_3447_ = v___x_3465_;
goto _start;
}
}
}
}
else
{
return v_b_3447_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__1___boxed(lean_object* v_as_3473_, lean_object* v_i_3474_, lean_object* v_stop_3475_, lean_object* v_b_3476_){
_start:
{
size_t v_i_boxed_3477_; size_t v_stop_boxed_3478_; lean_object* v_res_3479_; 
v_i_boxed_3477_ = lean_unbox_usize(v_i_3474_);
lean_dec(v_i_3474_);
v_stop_boxed_3478_ = lean_unbox_usize(v_stop_3475_);
lean_dec(v_stop_3475_);
v_res_3479_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__1(v_as_3473_, v_i_boxed_3477_, v_stop_boxed_3478_, v_b_3476_);
lean_dec_ref(v_as_3473_);
return v_res_3479_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_matcherInfoEnc(lean_object* v_s_3481_, lean_object* v_i_3482_){
_start:
{
lean_object* v_numParams_3483_; lean_object* v_numDiscrs_3484_; lean_object* v_altInfos_3485_; lean_object* v_uElimPos_x3f_3486_; lean_object* v_discrInfos_3487_; lean_object* v_overlaps_3488_; lean_object* v_e_3489_; lean_object* v_tys_3490_; lean_object* v_ms_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3578_; 
v_numParams_3483_ = lean_ctor_get(v_i_3482_, 0);
lean_inc(v_numParams_3483_);
v_numDiscrs_3484_ = lean_ctor_get(v_i_3482_, 1);
lean_inc(v_numDiscrs_3484_);
v_altInfos_3485_ = lean_ctor_get(v_i_3482_, 2);
lean_inc_ref(v_altInfos_3485_);
v_uElimPos_x3f_3486_ = lean_ctor_get(v_i_3482_, 3);
lean_inc(v_uElimPos_x3f_3486_);
v_discrInfos_3487_ = lean_ctor_get(v_i_3482_, 4);
lean_inc_ref(v_discrInfos_3487_);
v_overlaps_3488_ = lean_ctor_get(v_i_3482_, 5);
lean_inc_ref(v_overlaps_3488_);
lean_dec_ref(v_i_3482_);
v_e_3489_ = lean_ctor_get(v_s_3481_, 0);
v_tys_3490_ = lean_ctor_get(v_s_3481_, 1);
v_ms_3491_ = lean_ctor_get(v_s_3481_, 2);
v_isSharedCheck_3578_ = !lean_is_exclusive(v_s_3481_);
if (v_isSharedCheck_3578_ == 0)
{
v___x_3493_ = v_s_3481_;
v_isShared_3494_ = v_isSharedCheck_3578_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_ms_3491_);
lean_inc(v_tys_3490_);
lean_inc(v_e_3489_);
lean_dec(v_s_3481_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3578_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
lean_object* v___f_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3501_; 
v___f_3495_ = ((lean_object*)(l_Lean_ModuleUsage_matcherInfoEnc___closed__0));
v___x_3496_ = l_Lean_ModuleUsage_Enc_nat(v_e_3489_, v_numParams_3483_);
v___x_3497_ = l_Lean_ModuleUsage_Enc_nat(v___x_3496_, v_numDiscrs_3484_);
v___x_3498_ = lean_array_get_size(v_altInfos_3485_);
v___x_3499_ = l_Lean_ModuleUsage_Enc_nat(v___x_3497_, v___x_3498_);
if (v_isShared_3494_ == 0)
{
lean_ctor_set(v___x_3493_, 0, v___x_3499_);
v___x_3501_ = v___x_3493_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v___x_3499_);
lean_ctor_set(v_reuseFailAlloc_3577_, 1, v_tys_3490_);
lean_ctor_set(v_reuseFailAlloc_3577_, 2, v_ms_3491_);
v___x_3501_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
lean_object* v___x_3502_; lean_object* v___y_3504_; lean_object* v___y_3505_; lean_object* v___y_3523_; lean_object* v___y_3524_; lean_object* v___y_3525_; lean_object* v___y_3526_; lean_object* v___y_3527_; lean_object* v___y_3530_; lean_object* v___y_3531_; lean_object* v___y_3532_; lean_object* v___y_3533_; lean_object* v___y_3534_; lean_object* v___y_3537_; lean_object* v___y_3538_; lean_object* v___y_3545_; lean_object* v___y_3555_; uint8_t v___x_3573_; 
v___x_3502_ = lean_unsigned_to_nat(0u);
v___x_3573_ = lean_nat_dec_lt(v___x_3502_, v___x_3498_);
if (v___x_3573_ == 0)
{
lean_dec_ref(v_altInfos_3485_);
v___y_3555_ = v___x_3501_;
goto v___jp_3554_;
}
else
{
size_t v___x_3574_; size_t v___x_3575_; lean_object* v___x_3576_; 
v___x_3574_ = ((size_t)0ULL);
v___x_3575_ = lean_usize_of_nat(v___x_3498_);
v___x_3576_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__6(v_altInfos_3485_, v___x_3574_, v___x_3575_, v___x_3501_);
lean_dec_ref(v_altInfos_3485_);
v___y_3555_ = v___x_3576_;
goto v___jp_3554_;
}
v___jp_3503_:
{
lean_object* v_e_3506_; lean_object* v_tys_3507_; lean_object* v_ms_3508_; lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3521_; 
v_e_3506_ = lean_ctor_get(v___y_3504_, 0);
v_tys_3507_ = lean_ctor_get(v___y_3504_, 1);
v_ms_3508_ = lean_ctor_get(v___y_3504_, 2);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___y_3504_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3510_ = v___y_3504_;
v_isShared_3511_ = v_isSharedCheck_3521_;
goto v_resetjp_3509_;
}
else
{
lean_inc(v_ms_3508_);
lean_inc(v_tys_3507_);
lean_inc(v_e_3506_);
lean_dec(v___y_3504_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3521_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3515_; 
v___x_3512_ = lean_array_get_size(v___y_3505_);
v___x_3513_ = l_Lean_ModuleUsage_Enc_nat(v_e_3506_, v___x_3512_);
if (v_isShared_3511_ == 0)
{
lean_ctor_set(v___x_3510_, 0, v___x_3513_);
v___x_3515_ = v___x_3510_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v___x_3513_);
lean_ctor_set(v_reuseFailAlloc_3520_, 1, v_tys_3507_);
lean_ctor_set(v_reuseFailAlloc_3520_, 2, v_ms_3508_);
v___x_3515_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
uint8_t v___x_3516_; 
v___x_3516_ = lean_nat_dec_lt(v___x_3502_, v___x_3512_);
if (v___x_3516_ == 0)
{
lean_dec_ref(v___y_3505_);
return v___x_3515_;
}
else
{
size_t v___x_3517_; size_t v___x_3518_; lean_object* v___x_3519_; 
v___x_3517_ = ((size_t)0ULL);
v___x_3518_ = lean_usize_of_nat(v___x_3512_);
v___x_3519_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__1(v___y_3505_, v___x_3517_, v___x_3518_, v___x_3515_);
lean_dec_ref(v___y_3505_);
return v___x_3519_;
}
}
}
}
v___jp_3522_:
{
lean_object* v___x_3528_; 
v___x_3528_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___redArg(v___y_3524_, v___y_3525_, v___y_3523_, v___y_3527_);
lean_dec(v___y_3527_);
lean_dec(v___y_3524_);
v___y_3504_ = v___y_3526_;
v___y_3505_ = v___x_3528_;
goto v___jp_3503_;
}
v___jp_3529_:
{
uint8_t v___x_3535_; 
v___x_3535_ = lean_nat_dec_le(v___y_3534_, v___y_3532_);
if (v___x_3535_ == 0)
{
lean_dec(v___y_3532_);
lean_inc(v___y_3534_);
v___y_3523_ = v___y_3534_;
v___y_3524_ = v___y_3530_;
v___y_3525_ = v___y_3531_;
v___y_3526_ = v___y_3533_;
v___y_3527_ = v___y_3534_;
goto v___jp_3522_;
}
else
{
v___y_3523_ = v___y_3534_;
v___y_3524_ = v___y_3530_;
v___y_3525_ = v___y_3531_;
v___y_3526_ = v___y_3533_;
v___y_3527_ = v___y_3532_;
goto v___jp_3522_;
}
}
v___jp_3536_:
{
lean_object* v___x_3539_; uint8_t v___x_3540_; 
v___x_3539_ = lean_array_get_size(v___y_3538_);
v___x_3540_ = lean_nat_dec_eq(v___x_3539_, v___x_3502_);
if (v___x_3540_ == 0)
{
lean_object* v___x_3541_; lean_object* v___x_3542_; uint8_t v___x_3543_; 
v___x_3541_ = lean_unsigned_to_nat(1u);
v___x_3542_ = lean_nat_sub(v___x_3539_, v___x_3541_);
v___x_3543_ = lean_nat_dec_le(v___x_3502_, v___x_3542_);
if (v___x_3543_ == 0)
{
lean_inc(v___x_3542_);
v___y_3530_ = v___x_3539_;
v___y_3531_ = v___y_3538_;
v___y_3532_ = v___x_3542_;
v___y_3533_ = v___y_3537_;
v___y_3534_ = v___x_3542_;
goto v___jp_3529_;
}
else
{
v___y_3530_ = v___x_3539_;
v___y_3531_ = v___y_3538_;
v___y_3532_ = v___x_3542_;
v___y_3533_ = v___y_3537_;
v___y_3534_ = v___x_3502_;
goto v___jp_3529_;
}
}
else
{
v___y_3504_ = v___y_3537_;
v___y_3505_ = v___y_3538_;
goto v___jp_3503_;
}
}
v___jp_3544_:
{
lean_object* v_size_3546_; lean_object* v_buckets_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; uint8_t v___x_3550_; 
v_size_3546_ = lean_ctor_get(v_overlaps_3488_, 0);
lean_inc(v_size_3546_);
v_buckets_3547_ = lean_ctor_get(v_overlaps_3488_, 1);
lean_inc_ref(v_buckets_3547_);
lean_dec_ref(v_overlaps_3488_);
v___x_3548_ = lean_mk_empty_array_with_capacity(v_size_3546_);
lean_dec(v_size_3546_);
v___x_3549_ = lean_array_get_size(v_buckets_3547_);
v___x_3550_ = lean_nat_dec_lt(v___x_3502_, v___x_3549_);
if (v___x_3550_ == 0)
{
lean_dec_ref(v_buckets_3547_);
v___y_3537_ = v___y_3545_;
v___y_3538_ = v___x_3548_;
goto v___jp_3536_;
}
else
{
size_t v___x_3551_; size_t v___x_3552_; lean_object* v___x_3553_; 
v___x_3551_ = ((size_t)0ULL);
v___x_3552_ = lean_usize_of_nat(v___x_3549_);
v___x_3553_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__4(v_buckets_3547_, v___x_3551_, v___x_3552_, v___x_3548_);
lean_dec_ref(v_buckets_3547_);
v___y_3537_ = v___y_3545_;
v___y_3538_ = v___x_3553_;
goto v___jp_3536_;
}
}
v___jp_3554_:
{
lean_object* v___x_3556_; lean_object* v_e_3557_; lean_object* v_tys_3558_; lean_object* v_ms_3559_; lean_object* v___x_3561_; uint8_t v_isShared_3562_; uint8_t v_isSharedCheck_3572_; 
v___x_3556_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___y_3555_, v_uElimPos_x3f_3486_, v___f_3495_);
v_e_3557_ = lean_ctor_get(v___x_3556_, 0);
v_tys_3558_ = lean_ctor_get(v___x_3556_, 1);
v_ms_3559_ = lean_ctor_get(v___x_3556_, 2);
v_isSharedCheck_3572_ = !lean_is_exclusive(v___x_3556_);
if (v_isSharedCheck_3572_ == 0)
{
v___x_3561_ = v___x_3556_;
v_isShared_3562_ = v_isSharedCheck_3572_;
goto v_resetjp_3560_;
}
else
{
lean_inc(v_ms_3559_);
lean_inc(v_tys_3558_);
lean_inc(v_e_3557_);
lean_dec(v___x_3556_);
v___x_3561_ = lean_box(0);
v_isShared_3562_ = v_isSharedCheck_3572_;
goto v_resetjp_3560_;
}
v_resetjp_3560_:
{
lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3566_; 
v___x_3563_ = lean_array_get_size(v_discrInfos_3487_);
v___x_3564_ = l_Lean_ModuleUsage_Enc_nat(v_e_3557_, v___x_3563_);
if (v_isShared_3562_ == 0)
{
lean_ctor_set(v___x_3561_, 0, v___x_3564_);
v___x_3566_ = v___x_3561_;
goto v_reusejp_3565_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v___x_3564_);
lean_ctor_set(v_reuseFailAlloc_3571_, 1, v_tys_3558_);
lean_ctor_set(v_reuseFailAlloc_3571_, 2, v_ms_3559_);
v___x_3566_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3565_;
}
v_reusejp_3565_:
{
uint8_t v___x_3567_; 
v___x_3567_ = lean_nat_dec_lt(v___x_3502_, v___x_3563_);
if (v___x_3567_ == 0)
{
lean_dec_ref(v_discrInfos_3487_);
v___y_3545_ = v___x_3566_;
goto v___jp_3544_;
}
else
{
size_t v___x_3568_; size_t v___x_3569_; lean_object* v___x_3570_; 
v___x_3568_ = ((size_t)0ULL);
v___x_3569_ = lean_usize_of_nat(v___x_3563_);
v___x_3570_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_matcherInfoEnc_spec__5(v_discrInfos_3487_, v___x_3568_, v___x_3569_, v___x_3566_);
lean_dec_ref(v_discrInfos_3487_);
v___y_3545_ = v___x_3570_;
goto v___jp_3544_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_ModuleUsage_matcherInfoEnc_spec__0(lean_object* v_init_3579_, lean_object* v_t_3580_){
_start:
{
lean_object* v___x_3581_; 
v___x_3581_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_ModuleUsage_matcherInfoEnc_spec__0_spec__0(v_init_3579_, v_t_3580_);
return v___x_3581_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2(lean_object* v_n_3582_, lean_object* v_as_3583_, lean_object* v_lo_3584_, lean_object* v_hi_3585_, lean_object* v_w_3586_, lean_object* v_hlo_3587_, lean_object* v_hhi_3588_){
_start:
{
lean_object* v___x_3589_; 
v___x_3589_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___redArg(v_n_3582_, v_as_3583_, v_lo_3584_, v_hi_3585_);
return v___x_3589_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2___boxed(lean_object* v_n_3590_, lean_object* v_as_3591_, lean_object* v_lo_3592_, lean_object* v_hi_3593_, lean_object* v_w_3594_, lean_object* v_hlo_3595_, lean_object* v_hhi_3596_){
_start:
{
lean_object* v_res_3597_; 
v_res_3597_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2(v_n_3590_, v_as_3591_, v_lo_3592_, v_hi_3593_, v_w_3594_, v_hlo_3595_, v_hhi_3596_);
lean_dec(v_hi_3593_);
lean_dec(v_n_3590_);
return v_res_3597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2_spec__3(lean_object* v_n_3598_, lean_object* v_lo_3599_, lean_object* v_hi_3600_, lean_object* v_hhi_3601_, lean_object* v_pivot_3602_, lean_object* v_as_3603_, lean_object* v_i_3604_, lean_object* v_k_3605_, lean_object* v_ilo_3606_, lean_object* v_ik_3607_, lean_object* v_w_3608_){
_start:
{
lean_object* v___x_3609_; 
v___x_3609_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2_spec__3___redArg(v_hi_3600_, v_pivot_3602_, v_as_3603_, v_i_3604_, v_k_3605_);
return v___x_3609_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2_spec__3___boxed(lean_object* v_n_3610_, lean_object* v_lo_3611_, lean_object* v_hi_3612_, lean_object* v_hhi_3613_, lean_object* v_pivot_3614_, lean_object* v_as_3615_, lean_object* v_i_3616_, lean_object* v_k_3617_, lean_object* v_ilo_3618_, lean_object* v_ik_3619_, lean_object* v_w_3620_){
_start:
{
lean_object* v_res_3621_; 
v_res_3621_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_ModuleUsage_matcherInfoEnc_spec__2_spec__3(v_n_3610_, v_lo_3611_, v_hi_3612_, v_hhi_3613_, v_pivot_3614_, v_as_3615_, v_i_3616_, v_k_3617_, v_ilo_3618_, v_ik_3619_, v_w_3620_);
lean_dec_ref(v_pivot_3614_);
lean_dec(v_hi_3612_);
lean_dec(v_lo_3611_);
lean_dec(v_n_3610_);
return v_res_3621_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_noConfusionEnc(lean_object* v_e_3622_, lean_object* v_x_3623_){
_start:
{
if (lean_obj_tag(v_x_3623_) == 0)
{
lean_object* v_arity_3624_; lean_object* v_lhs_3625_; lean_object* v_rhs_3626_; uint8_t v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; 
v_arity_3624_ = lean_ctor_get(v_x_3623_, 0);
lean_inc(v_arity_3624_);
v_lhs_3625_ = lean_ctor_get(v_x_3623_, 1);
lean_inc(v_lhs_3625_);
v_rhs_3626_ = lean_ctor_get(v_x_3623_, 2);
lean_inc(v_rhs_3626_);
lean_dec_ref_known(v_x_3623_, 3);
v___x_3627_ = 0;
v___x_3628_ = lean_byte_array_push(v_e_3622_, v___x_3627_);
v___x_3629_ = l_Lean_ModuleUsage_Enc_nat(v___x_3628_, v_arity_3624_);
v___x_3630_ = l_Lean_ModuleUsage_Enc_nat(v___x_3629_, v_lhs_3625_);
v___x_3631_ = l_Lean_ModuleUsage_Enc_nat(v___x_3630_, v_rhs_3626_);
return v___x_3631_;
}
else
{
lean_object* v_arity_3632_; lean_object* v_fields_3633_; uint8_t v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; 
v_arity_3632_ = lean_ctor_get(v_x_3623_, 0);
lean_inc(v_arity_3632_);
v_fields_3633_ = lean_ctor_get(v_x_3623_, 1);
lean_inc(v_fields_3633_);
lean_dec_ref_known(v_x_3623_, 2);
v___x_3634_ = 1;
v___x_3635_ = lean_byte_array_push(v_e_3622_, v___x_3634_);
v___x_3636_ = l_Lean_ModuleUsage_Enc_nat(v___x_3635_, v_arity_3632_);
v___x_3637_ = l_Lean_ModuleUsage_Enc_nat(v___x_3636_, v_fields_3633_);
return v___x_3637_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_constantKindEnc(lean_object* v_e_3638_, uint8_t v_x_3639_){
_start:
{
switch(v_x_3639_)
{
case 0:
{
uint8_t v___x_3640_; lean_object* v___x_3641_; 
v___x_3640_ = 0;
v___x_3641_ = lean_byte_array_push(v_e_3638_, v___x_3640_);
return v___x_3641_;
}
case 1:
{
uint8_t v___x_3642_; lean_object* v___x_3643_; 
v___x_3642_ = 1;
v___x_3643_ = lean_byte_array_push(v_e_3638_, v___x_3642_);
return v___x_3643_;
}
case 2:
{
uint8_t v___x_3644_; lean_object* v___x_3645_; 
v___x_3644_ = 2;
v___x_3645_ = lean_byte_array_push(v_e_3638_, v___x_3644_);
return v___x_3645_;
}
case 3:
{
uint8_t v___x_3646_; lean_object* v___x_3647_; 
v___x_3646_ = 3;
v___x_3647_ = lean_byte_array_push(v_e_3638_, v___x_3646_);
return v___x_3647_;
}
case 4:
{
uint8_t v___x_3648_; lean_object* v___x_3649_; 
v___x_3648_ = 4;
v___x_3649_ = lean_byte_array_push(v_e_3638_, v___x_3648_);
return v___x_3649_;
}
case 5:
{
uint8_t v___x_3650_; lean_object* v___x_3651_; 
v___x_3650_ = 5;
v___x_3651_ = lean_byte_array_push(v_e_3638_, v___x_3650_);
return v___x_3651_;
}
case 6:
{
uint8_t v___x_3652_; lean_object* v___x_3653_; 
v___x_3652_ = 6;
v___x_3653_ = lean_byte_array_push(v_e_3638_, v___x_3652_);
return v___x_3653_;
}
default: 
{
uint8_t v___x_3654_; lean_object* v___x_3655_; 
v___x_3654_ = 7;
v___x_3655_ = lean_byte_array_push(v_e_3638_, v___x_3654_);
return v___x_3655_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_constantKindEnc___boxed(lean_object* v_e_3656_, lean_object* v_x_3657_){
_start:
{
uint8_t v_x_156__boxed_3658_; lean_object* v_res_3659_; 
v_x_156__boxed_3658_ = lean_unbox(v_x_3657_);
v_res_3659_ = l_Lean_ModuleUsage_constantKindEnc(v_e_3656_, v_x_156__boxed_3658_);
return v_res_3659_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_getStructuralRecArgPosOfEnv_x3f___boxed(lean_object* v_env_3662_, lean_object* v_declName_3663_){
_start:
{
lean_object* v_res_3664_; 
v_res_3664_ = lean_get_structural_rec_arg_pos_of_env(v_env_3662_, v_declName_3663_);
return v_res_3664_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__0(lean_object* v_s_3665_, uint8_t v_k_3666_){
_start:
{
lean_object* v_e_3667_; lean_object* v_tys_3668_; lean_object* v_ms_3669_; lean_object* v___x_3671_; uint8_t v_isShared_3672_; uint8_t v_isSharedCheck_3677_; 
v_e_3667_ = lean_ctor_get(v_s_3665_, 0);
v_tys_3668_ = lean_ctor_get(v_s_3665_, 1);
v_ms_3669_ = lean_ctor_get(v_s_3665_, 2);
v_isSharedCheck_3677_ = !lean_is_exclusive(v_s_3665_);
if (v_isSharedCheck_3677_ == 0)
{
v___x_3671_ = v_s_3665_;
v_isShared_3672_ = v_isSharedCheck_3677_;
goto v_resetjp_3670_;
}
else
{
lean_inc(v_ms_3669_);
lean_inc(v_tys_3668_);
lean_inc(v_e_3667_);
lean_dec(v_s_3665_);
v___x_3671_ = lean_box(0);
v_isShared_3672_ = v_isSharedCheck_3677_;
goto v_resetjp_3670_;
}
v_resetjp_3670_:
{
lean_object* v___x_3673_; lean_object* v___x_3675_; 
v___x_3673_ = l_Lean_ModuleUsage_constantKindEnc(v_e_3667_, v_k_3666_);
if (v_isShared_3672_ == 0)
{
lean_ctor_set(v___x_3671_, 0, v___x_3673_);
v___x_3675_ = v___x_3671_;
goto v_reusejp_3674_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v___x_3673_);
lean_ctor_set(v_reuseFailAlloc_3676_, 1, v_tys_3668_);
lean_ctor_set(v_reuseFailAlloc_3676_, 2, v_ms_3669_);
v___x_3675_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3674_;
}
v_reusejp_3674_:
{
return v___x_3675_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__0___boxed(lean_object* v_s_3678_, lean_object* v_k_3679_){
_start:
{
uint8_t v_k_boxed_3680_; lean_object* v_res_3681_; 
v_k_boxed_3680_ = lean_unbox(v_k_3679_);
v_res_3681_ = l_Lean_ModuleUsage_attrsEnc___lam__0(v_s_3678_, v_k_boxed_3680_);
return v_res_3681_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__1(lean_object* v_s_3682_, lean_object* v_i_3683_){
_start:
{
lean_object* v_numParams_3684_; uint8_t v_fromClass_3685_; lean_object* v_e_3686_; lean_object* v_tys_3687_; lean_object* v_ms_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3697_; 
v_numParams_3684_ = lean_ctor_get(v_i_3683_, 0);
lean_inc(v_numParams_3684_);
v_fromClass_3685_ = lean_ctor_get_uint8(v_i_3683_, sizeof(void*)*1);
lean_dec_ref(v_i_3683_);
v_e_3686_ = lean_ctor_get(v_s_3682_, 0);
v_tys_3687_ = lean_ctor_get(v_s_3682_, 1);
v_ms_3688_ = lean_ctor_get(v_s_3682_, 2);
v_isSharedCheck_3697_ = !lean_is_exclusive(v_s_3682_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3690_ = v_s_3682_;
v_isShared_3691_ = v_isSharedCheck_3697_;
goto v_resetjp_3689_;
}
else
{
lean_inc(v_ms_3688_);
lean_inc(v_tys_3687_);
lean_inc(v_e_3686_);
lean_dec(v_s_3682_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3697_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3695_; 
v___x_3692_ = l_Lean_ModuleUsage_Enc_nat(v_e_3686_, v_numParams_3684_);
v___x_3693_ = l_Lean_ModuleUsage_Enc_bool(v___x_3692_, v_fromClass_3685_);
if (v_isShared_3691_ == 0)
{
lean_ctor_set(v___x_3690_, 0, v___x_3693_);
v___x_3695_ = v___x_3690_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v___x_3693_);
lean_ctor_set(v_reuseFailAlloc_3696_, 1, v_tys_3687_);
lean_ctor_set(v_reuseFailAlloc_3696_, 2, v_ms_3688_);
v___x_3695_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
return v___x_3695_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__2(lean_object* v_s_3698_, lean_object* v_i_3699_){
_start:
{
lean_object* v_ctorName_3700_; lean_object* v_numParams_3701_; lean_object* v_i_3702_; uint8_t v_fromClass_3703_; lean_object* v_e_3704_; lean_object* v_tys_3705_; lean_object* v_ms_3706_; lean_object* v___x_3708_; uint8_t v_isShared_3709_; uint8_t v_isSharedCheck_3718_; 
v_ctorName_3700_ = lean_ctor_get(v_i_3699_, 0);
lean_inc(v_ctorName_3700_);
v_numParams_3701_ = lean_ctor_get(v_i_3699_, 1);
lean_inc(v_numParams_3701_);
v_i_3702_ = lean_ctor_get(v_i_3699_, 2);
lean_inc(v_i_3702_);
v_fromClass_3703_ = lean_ctor_get_uint8(v_i_3699_, sizeof(void*)*3);
lean_dec_ref(v_i_3699_);
v_e_3704_ = lean_ctor_get(v_s_3698_, 0);
v_tys_3705_ = lean_ctor_get(v_s_3698_, 1);
v_ms_3706_ = lean_ctor_get(v_s_3698_, 2);
v_isSharedCheck_3718_ = !lean_is_exclusive(v_s_3698_);
if (v_isSharedCheck_3718_ == 0)
{
v___x_3708_ = v_s_3698_;
v_isShared_3709_ = v_isSharedCheck_3718_;
goto v_resetjp_3707_;
}
else
{
lean_inc(v_ms_3706_);
lean_inc(v_tys_3705_);
lean_inc(v_e_3704_);
lean_dec(v_s_3698_);
v___x_3708_ = lean_box(0);
v_isShared_3709_ = v_isSharedCheck_3718_;
goto v_resetjp_3707_;
}
v_resetjp_3707_:
{
lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3716_; 
lean_inc(v_ctorName_3700_);
v___x_3710_ = l_Lean_ModuleUsage_Enc_name(v_e_3704_, v_ctorName_3700_);
v___x_3711_ = l_Lean_NameSet_insert(v_ms_3706_, v_ctorName_3700_);
v___x_3712_ = l_Lean_ModuleUsage_Enc_nat(v___x_3710_, v_numParams_3701_);
v___x_3713_ = l_Lean_ModuleUsage_Enc_nat(v___x_3712_, v_i_3702_);
v___x_3714_ = l_Lean_ModuleUsage_Enc_bool(v___x_3713_, v_fromClass_3703_);
if (v_isShared_3709_ == 0)
{
lean_ctor_set(v___x_3708_, 2, v___x_3711_);
lean_ctor_set(v___x_3708_, 0, v___x_3714_);
v___x_3716_ = v___x_3708_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v___x_3714_);
lean_ctor_set(v_reuseFailAlloc_3717_, 1, v_tys_3705_);
lean_ctor_set(v_reuseFailAlloc_3717_, 2, v___x_3711_);
v___x_3716_ = v_reuseFailAlloc_3717_;
goto v_reusejp_3715_;
}
v_reusejp_3715_:
{
return v___x_3716_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__3(lean_object* v_s_3719_, lean_object* v_i_3720_){
_start:
{
lean_object* v_e_3721_; lean_object* v_tys_3722_; lean_object* v_ms_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3731_; 
v_e_3721_ = lean_ctor_get(v_s_3719_, 0);
v_tys_3722_ = lean_ctor_get(v_s_3719_, 1);
v_ms_3723_ = lean_ctor_get(v_s_3719_, 2);
v_isSharedCheck_3731_ = !lean_is_exclusive(v_s_3719_);
if (v_isSharedCheck_3731_ == 0)
{
v___x_3725_ = v_s_3719_;
v_isShared_3726_ = v_isSharedCheck_3731_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_ms_3723_);
lean_inc(v_tys_3722_);
lean_inc(v_e_3721_);
lean_dec(v_s_3719_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3731_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
lean_object* v___x_3727_; lean_object* v___x_3729_; 
v___x_3727_ = l_Lean_ModuleUsage_noConfusionEnc(v_e_3721_, v_i_3720_);
if (v_isShared_3726_ == 0)
{
lean_ctor_set(v___x_3725_, 0, v___x_3727_);
v___x_3729_ = v___x_3725_;
goto v_reusejp_3728_;
}
else
{
lean_object* v_reuseFailAlloc_3730_; 
v_reuseFailAlloc_3730_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3730_, 0, v___x_3727_);
lean_ctor_set(v_reuseFailAlloc_3730_, 1, v_tys_3722_);
lean_ctor_set(v_reuseFailAlloc_3730_, 2, v_ms_3723_);
v___x_3729_ = v_reuseFailAlloc_3730_;
goto v_reusejp_3728_;
}
v_reusejp_3728_:
{
return v___x_3729_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__5(lean_object* v_s_3732_, lean_object* v_d_3733_){
_start:
{
lean_object* v_e_3734_; lean_object* v_tys_3735_; lean_object* v_ms_3736_; lean_object* v___x_3738_; uint8_t v_isShared_3739_; uint8_t v_isSharedCheck_3744_; 
v_e_3734_ = lean_ctor_get(v_s_3732_, 0);
v_tys_3735_ = lean_ctor_get(v_s_3732_, 1);
v_ms_3736_ = lean_ctor_get(v_s_3732_, 2);
v_isSharedCheck_3744_ = !lean_is_exclusive(v_s_3732_);
if (v_isSharedCheck_3744_ == 0)
{
v___x_3738_ = v_s_3732_;
v_isShared_3739_ = v_isSharedCheck_3744_;
goto v_resetjp_3737_;
}
else
{
lean_inc(v_ms_3736_);
lean_inc(v_tys_3735_);
lean_inc(v_e_3734_);
lean_dec(v_s_3732_);
v___x_3738_ = lean_box(0);
v_isShared_3739_ = v_isSharedCheck_3744_;
goto v_resetjp_3737_;
}
v_resetjp_3737_:
{
lean_object* v___x_3740_; lean_object* v___x_3742_; 
v___x_3740_ = l_Lean_ModuleUsage_externEnc(v_e_3734_, v_d_3733_);
if (v_isShared_3739_ == 0)
{
lean_ctor_set(v___x_3738_, 0, v___x_3740_);
v___x_3742_ = v___x_3738_;
goto v_reusejp_3741_;
}
else
{
lean_object* v_reuseFailAlloc_3743_; 
v_reuseFailAlloc_3743_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3743_, 0, v___x_3740_);
lean_ctor_set(v_reuseFailAlloc_3743_, 1, v_tys_3735_);
lean_ctor_set(v_reuseFailAlloc_3743_, 2, v_ms_3736_);
v___x_3742_ = v_reuseFailAlloc_3743_;
goto v_reusejp_3741_;
}
v_reusejp_3741_:
{
return v___x_3742_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__6(lean_object* v___y_3745_, lean_object* v___y_3746_){
_start:
{
lean_object* v_e_3747_; lean_object* v_tys_3748_; lean_object* v_ms_3749_; lean_object* v___x_3751_; uint8_t v_isShared_3752_; uint8_t v_isSharedCheck_3757_; 
v_e_3747_ = lean_ctor_get(v___y_3745_, 0);
v_tys_3748_ = lean_ctor_get(v___y_3745_, 1);
v_ms_3749_ = lean_ctor_get(v___y_3745_, 2);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___y_3745_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3751_ = v___y_3745_;
v_isShared_3752_ = v_isSharedCheck_3757_;
goto v_resetjp_3750_;
}
else
{
lean_inc(v_ms_3749_);
lean_inc(v_tys_3748_);
lean_inc(v_e_3747_);
lean_dec(v___y_3745_);
v___x_3751_ = lean_box(0);
v_isShared_3752_ = v_isSharedCheck_3757_;
goto v_resetjp_3750_;
}
v_resetjp_3750_:
{
lean_object* v___x_3753_; lean_object* v___x_3755_; 
v___x_3753_ = l_Lean_ModuleUsage_Enc_name(v_e_3747_, v___y_3746_);
if (v_isShared_3752_ == 0)
{
lean_ctor_set(v___x_3751_, 0, v___x_3753_);
v___x_3755_ = v___x_3751_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v___x_3753_);
lean_ctor_set(v_reuseFailAlloc_3756_, 1, v_tys_3748_);
lean_ctor_set(v_reuseFailAlloc_3756_, 2, v_ms_3749_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
return v___x_3755_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__4(lean_object* v___y_3758_, lean_object* v___y_3759_){
_start:
{
lean_object* v_e_3760_; lean_object* v_tys_3761_; lean_object* v_ms_3762_; lean_object* v___x_3764_; uint8_t v_isShared_3765_; uint8_t v_isSharedCheck_3770_; 
v_e_3760_ = lean_ctor_get(v___y_3758_, 0);
v_tys_3761_ = lean_ctor_get(v___y_3758_, 1);
v_ms_3762_ = lean_ctor_get(v___y_3758_, 2);
v_isSharedCheck_3770_ = !lean_is_exclusive(v___y_3758_);
if (v_isSharedCheck_3770_ == 0)
{
v___x_3764_ = v___y_3758_;
v_isShared_3765_ = v_isSharedCheck_3770_;
goto v_resetjp_3763_;
}
else
{
lean_inc(v_ms_3762_);
lean_inc(v_tys_3761_);
lean_inc(v_e_3760_);
lean_dec(v___y_3758_);
v___x_3764_ = lean_box(0);
v_isShared_3765_ = v_isSharedCheck_3770_;
goto v_resetjp_3763_;
}
v_resetjp_3763_:
{
lean_object* v___x_3766_; lean_object* v___x_3768_; 
v___x_3766_ = l_Lean_ModuleUsage_Enc_nats(v_e_3760_, v___y_3759_);
if (v_isShared_3765_ == 0)
{
lean_ctor_set(v___x_3764_, 0, v___x_3766_);
v___x_3768_ = v___x_3764_;
goto v_reusejp_3767_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v___x_3766_);
lean_ctor_set(v_reuseFailAlloc_3769_, 1, v_tys_3761_);
lean_ctor_set(v_reuseFailAlloc_3769_, 2, v_ms_3762_);
v___x_3768_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3767_;
}
v_reusejp_3767_:
{
return v___x_3768_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___lam__4___boxed(lean_object* v___y_3771_, lean_object* v___y_3772_){
_start:
{
lean_object* v_res_3773_; 
v_res_3773_ = l_Lean_ModuleUsage_attrsEnc___lam__4(v___y_3771_, v___y_3772_);
lean_dec_ref(v___y_3772_);
return v_res_3773_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_ModuleUsage_attrsEnc_spec__0___redArg(lean_object* v_t_3774_, lean_object* v_k_3775_, lean_object* v_fallback_3776_){
_start:
{
if (lean_obj_tag(v_t_3774_) == 0)
{
lean_object* v_k_3777_; lean_object* v_v_3778_; lean_object* v_l_3779_; lean_object* v_r_3780_; uint8_t v___x_3781_; 
v_k_3777_ = lean_ctor_get(v_t_3774_, 1);
v_v_3778_ = lean_ctor_get(v_t_3774_, 2);
v_l_3779_ = lean_ctor_get(v_t_3774_, 3);
v_r_3780_ = lean_ctor_get(v_t_3774_, 4);
v___x_3781_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3775_, v_k_3777_);
switch(v___x_3781_)
{
case 0:
{
v_t_3774_ = v_l_3779_;
goto _start;
}
case 1:
{
lean_inc(v_v_3778_);
return v_v_3778_;
}
default: 
{
v_t_3774_ = v_r_3780_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_3776_);
return v_fallback_3776_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_ModuleUsage_attrsEnc_spec__0___redArg___boxed(lean_object* v_t_3784_, lean_object* v_k_3785_, lean_object* v_fallback_3786_){
_start:
{
lean_object* v_res_3787_; 
v_res_3787_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_ModuleUsage_attrsEnc_spec__0___redArg(v_t_3784_, v_k_3785_, v_fallback_3786_);
lean_dec(v_fallback_3786_);
lean_dec(v_k_3785_);
lean_dec(v_t_3784_);
return v_res_3787_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_attrsEnc_spec__1(lean_object* v_as_3789_, size_t v_i_3790_, size_t v_stop_3791_, lean_object* v_b_3792_){
_start:
{
uint8_t v___x_3793_; 
v___x_3793_ = lean_usize_dec_eq(v_i_3790_, v_stop_3791_);
if (v___x_3793_ == 0)
{
lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; size_t v___x_3797_; size_t v___x_3798_; 
v___x_3794_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_attrsEnc_spec__1___closed__0));
v___x_3795_ = lean_array_uget_borrowed(v_as_3789_, v_i_3790_);
lean_inc(v___x_3795_);
v___x_3796_ = l_Lean_ModuleUsage_scopedEnc___redArg(v___x_3794_, v_b_3792_, v___x_3795_);
v___x_3797_ = ((size_t)1ULL);
v___x_3798_ = lean_usize_add(v_i_3790_, v___x_3797_);
v_i_3790_ = v___x_3798_;
v_b_3792_ = v___x_3796_;
goto _start;
}
else
{
return v_b_3792_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_attrsEnc_spec__1___boxed(lean_object* v_as_3800_, lean_object* v_i_3801_, lean_object* v_stop_3802_, lean_object* v_b_3803_){
_start:
{
size_t v_i_boxed_3804_; size_t v_stop_boxed_3805_; lean_object* v_res_3806_; 
v_i_boxed_3804_ = lean_unbox_usize(v_i_3801_);
lean_dec(v_i_3801_);
v_stop_boxed_3805_ = lean_unbox_usize(v_stop_3802_);
lean_dec(v_stop_3802_);
v_res_3806_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_attrsEnc_spec__1(v_as_3800_, v_i_boxed_3804_, v_stop_boxed_3805_, v_b_3803_);
lean_dec_ref(v_as_3800_);
return v_res_3806_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc(lean_object* v_env_3816_, lean_object* v_lc_3817_, lean_object* v_x_3818_, lean_object* v_s_3819_){
_start:
{
lean_object* v_insts_3820_; lean_object* v___x_3821_; lean_object* v_toEnvExtension_3822_; lean_object* v_asyncMode_3823_; lean_object* v___f_3824_; lean_object* v___f_3825_; lean_object* v___f_3826_; lean_object* v___f_3827_; lean_object* v___f_3828_; lean_object* v___f_3829_; lean_object* v___f_3830_; lean_object* v___f_3831_; lean_object* v___f_3832_; lean_object* v___f_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___y_3837_; lean_object* v___y_3838_; lean_object* v___y_3839_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v_insts_3902_; uint8_t v___y_3904_; uint8_t v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; 
v_insts_3820_ = lean_ctor_get(v_lc_3817_, 1);
v___x_3821_ = l_Lean_reducibilityCoreExt;
v_toEnvExtension_3822_ = lean_ctor_get(v___x_3821_, 0);
v_asyncMode_3823_ = lean_ctor_get(v_toEnvExtension_3822_, 2);
v___f_3824_ = ((lean_object*)(l_Lean_ModuleUsage_attrsEnc___closed__0));
v___f_3825_ = ((lean_object*)(l_Lean_ModuleUsage_attrsEnc___closed__1));
v___f_3826_ = ((lean_object*)(l_Lean_ModuleUsage_attrsEnc___closed__2));
v___f_3827_ = ((lean_object*)(l_Lean_ModuleUsage_attrsEnc___closed__3));
v___f_3828_ = ((lean_object*)(l_Lean_ModuleUsage_LCNFEnc_decl___closed__0));
v___f_3829_ = ((lean_object*)(l_Lean_ModuleUsage_attrsEnc___closed__4));
v___f_3830_ = ((lean_object*)(l_Lean_ModuleUsage_IREnc_decl___closed__0));
v___f_3831_ = ((lean_object*)(l_Lean_ModuleUsage_attrsEnc___closed__5));
v___f_3832_ = ((lean_object*)(l_Lean_ModuleUsage_attrsEnc___closed__6));
v___f_3833_ = ((lean_object*)(l_Lean_ModuleUsage_matcherInfoEnc___closed__0));
v___x_3834_ = lean_box(1);
v___x_3835_ = l_Lean_instInhabitedNoConfusionInfo_default;
v___x_3900_ = lean_unsigned_to_nat(0u);
v___x_3901_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__0___redArg___lam__0___closed__0));
v_insts_3902_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_ModuleUsage_attrsEnc_spec__0___redArg(v_insts_3820_, v_x_3818_, v___x_3901_);
v___x_3944_ = 0;
lean_inc(v_x_3818_);
lean_inc_ref(v_env_3816_);
v___x_3945_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_3834_, v___x_3821_, v_env_3816_, v_asyncMode_3823_, v_x_3818_, v___x_3944_);
v___x_3946_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_3945_, v_x_3818_);
lean_dec(v___x_3945_);
if (lean_obj_tag(v___x_3946_) == 0)
{
uint8_t v___x_3947_; 
v___x_3947_ = 1;
v___y_3904_ = v___x_3947_;
goto v___jp_3903_;
}
else
{
lean_object* v_val_3948_; uint8_t v___x_3949_; 
v_val_3948_ = lean_ctor_get(v___x_3946_, 0);
lean_inc(v_val_3948_);
lean_dec_ref_known(v___x_3946_, 1);
v___x_3949_ = lean_unbox(v_val_3948_);
lean_dec(v_val_3948_);
v___y_3904_ = v___x_3949_;
goto v___jp_3903_;
}
v___jp_3836_:
{
lean_object* v_s_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v_e_3845_; lean_object* v_tys_3846_; lean_object* v_ms_3847_; lean_object* v___x_3849_; uint8_t v_isShared_3850_; uint8_t v_isSharedCheck_3899_; 
v_s_3840_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_s_3840_, 0, v___y_3839_);
lean_ctor_set(v_s_3840_, 1, v___y_3838_);
lean_ctor_set(v_s_3840_, 2, v___y_3837_);
lean_inc(v_x_3818_);
lean_inc_ref_n(v_env_3816_, 2);
v___x_3841_ = l_Lean_Compiler_getSpecializationArgs_x3f(v_env_3816_, v_x_3818_);
v___x_3842_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v_s_3840_, v___x_3841_, v___f_3832_);
v___x_3843_ = l_Lean_getOutParamPositions_x3f(v_env_3816_, v_x_3818_);
v___x_3844_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_3842_, v___x_3843_, v___f_3832_);
v_e_3845_ = lean_ctor_get(v___x_3844_, 0);
v_tys_3846_ = lean_ctor_get(v___x_3844_, 1);
v_ms_3847_ = lean_ctor_get(v___x_3844_, 2);
v_isSharedCheck_3899_ = !lean_is_exclusive(v___x_3844_);
if (v_isSharedCheck_3899_ == 0)
{
v___x_3849_ = v___x_3844_;
v_isShared_3850_ = v_isSharedCheck_3899_;
goto v_resetjp_3848_;
}
else
{
lean_inc(v_ms_3847_);
lean_inc(v_tys_3846_);
lean_inc(v_e_3845_);
lean_dec(v___x_3844_);
v___x_3849_ = lean_box(0);
v_isShared_3850_ = v_isSharedCheck_3899_;
goto v_resetjp_3848_;
}
v_resetjp_3848_:
{
lean_object* v___x_3851_; lean_object* v_toEnvExtension_3852_; lean_object* v_asyncMode_3853_; uint8_t v___x_3854_; uint8_t v___x_3855_; uint8_t v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3862_; 
v___x_3851_ = l_Lean_noConfusionExt;
v_toEnvExtension_3852_ = lean_ctor_get(v___x_3851_, 0);
v_asyncMode_3853_ = lean_ctor_get(v_toEnvExtension_3852_, 2);
lean_inc_n(v_x_3818_, 4);
lean_inc_ref_n(v_env_3816_, 4);
v___x_3854_ = l_Lean_Compiler_hasNospecializeAttribute(v_env_3816_, v_x_3818_);
v___x_3855_ = l_Lean_Compiler_hasWeakSpecializeAttribute(v_env_3816_, v_x_3818_);
v___x_3856_ = l_Lean_isMarkedMeta(v_env_3816_, v_x_3818_);
v___x_3857_ = l_Lean_getStructureInfo_x3f(v_env_3816_, v_x_3818_);
v___x_3858_ = l_Lean_ModuleUsage_Enc_bool(v_e_3845_, v___x_3854_);
v___x_3859_ = l_Lean_ModuleUsage_Enc_bool(v___x_3858_, v___x_3855_);
v___x_3860_ = l_Lean_ModuleUsage_Enc_bool(v___x_3859_, v___x_3856_);
if (v_isShared_3850_ == 0)
{
lean_ctor_set(v___x_3849_, 0, v___x_3860_);
v___x_3862_ = v___x_3849_;
goto v_reusejp_3861_;
}
else
{
lean_object* v_reuseFailAlloc_3898_; 
v_reuseFailAlloc_3898_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3898_, 0, v___x_3860_);
lean_ctor_set(v_reuseFailAlloc_3898_, 1, v_tys_3846_);
lean_ctor_set(v_reuseFailAlloc_3898_, 2, v_ms_3847_);
v___x_3862_ = v_reuseFailAlloc_3898_;
goto v_reusejp_3861_;
}
v_reusejp_3861_:
{
lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; uint8_t v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v_e_3871_; lean_object* v_tys_3872_; lean_object* v_ms_3873_; lean_object* v___x_3875_; uint8_t v_isShared_3876_; uint8_t v_isSharedCheck_3897_; 
v___x_3863_ = ((lean_object*)(l_Lean_ModuleUsage_attrsEnc___closed__7));
v___x_3864_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_3862_, v___x_3857_, v___x_3863_);
lean_inc_n(v_x_3818_, 2);
lean_inc_ref_n(v_env_3816_, 2);
v___x_3865_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_3816_, v_x_3818_);
v___x_3866_ = ((lean_object*)(l_Lean_ModuleUsage_attrsEnc___closed__8));
v___x_3867_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_3864_, v___x_3865_, v___x_3866_);
v___x_3868_ = 0;
v___x_3869_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_3835_, v___x_3851_, v_env_3816_, v_x_3818_, v_asyncMode_3853_, v___x_3868_);
v___x_3870_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_3867_, v___x_3869_, v___f_3827_);
v_e_3871_ = lean_ctor_get(v___x_3870_, 0);
v_tys_3872_ = lean_ctor_get(v___x_3870_, 1);
v_ms_3873_ = lean_ctor_get(v___x_3870_, 2);
v_isSharedCheck_3897_ = !lean_is_exclusive(v___x_3870_);
if (v_isSharedCheck_3897_ == 0)
{
v___x_3875_ = v___x_3870_;
v_isShared_3876_ = v_isSharedCheck_3897_;
goto v_resetjp_3874_;
}
else
{
lean_inc(v_ms_3873_);
lean_inc(v_tys_3872_);
lean_inc(v_e_3871_);
lean_dec(v___x_3870_);
v___x_3875_ = lean_box(0);
v_isShared_3876_ = v_isSharedCheck_3897_;
goto v_resetjp_3874_;
}
v_resetjp_3874_:
{
lean_object* v___x_3877_; lean_object* v_toEnvExtension_3878_; lean_object* v_asyncMode_3879_; uint8_t v___x_3880_; lean_object* v___x_3881_; uint8_t v___x_3882_; lean_object* v___x_3883_; uint8_t v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3887_; 
v___x_3877_ = l_Lean_auxRecExt;
v_toEnvExtension_3878_ = lean_ctor_get(v___x_3877_, 0);
v_asyncMode_3879_ = lean_ctor_get(v_toEnvExtension_3878_, 2);
lean_inc_n(v_x_3818_, 3);
lean_inc_ref_n(v_env_3816_, 3);
v___x_3880_ = l_Lean_Meta_isMatcherLikeCore(v_env_3816_, v_x_3818_);
v___x_3881_ = l_Lean_ModuleUsage_Enc_bool(v_e_3871_, v___x_3880_);
v___x_3882_ = l_Lean_TagDeclarationExtension_isTagged(v___x_3877_, v_env_3816_, v_x_3818_, v_asyncMode_3879_);
v___x_3883_ = l_Lean_ModuleUsage_Enc_bool(v___x_3881_, v___x_3882_);
v___x_3884_ = l_Lean_isSparseCasesOn(v_env_3816_, v_x_3818_);
v___x_3885_ = l_Lean_ModuleUsage_Enc_bool(v___x_3883_, v___x_3884_);
if (v_isShared_3876_ == 0)
{
lean_ctor_set(v___x_3875_, 0, v___x_3885_);
v___x_3887_ = v___x_3875_;
goto v_reusejp_3886_;
}
else
{
lean_object* v_reuseFailAlloc_3896_; 
v_reuseFailAlloc_3896_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3896_, 0, v___x_3885_);
lean_ctor_set(v_reuseFailAlloc_3896_, 1, v_tys_3872_);
lean_ctor_set(v_reuseFailAlloc_3896_, 2, v_ms_3873_);
v___x_3887_ = v_reuseFailAlloc_3896_;
goto v_reusejp_3886_;
}
v_reusejp_3886_:
{
lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; 
lean_inc_n(v_x_3818_, 3);
lean_inc_ref_n(v_env_3816_, 3);
v___x_3888_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_3816_, v_x_3818_);
v___x_3889_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_3887_, v___x_3888_, v___f_3826_);
v___x_3890_ = l_Lean_Environment_getAuxParentProjectionInfo_x3f(v_env_3816_, v_x_3818_);
v___x_3891_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_3889_, v___x_3890_, v___f_3825_);
v___x_3892_ = lean_get_structural_rec_arg_pos_of_env(v_env_3816_, v_x_3818_);
v___x_3893_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_3891_, v___x_3892_, v___f_3833_);
v___x_3894_ = l_Lean_getOriginalConstKind_x3f(v_env_3816_, v_x_3818_);
v___x_3895_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_3893_, v___x_3894_, v___f_3824_);
return v___x_3895_;
}
}
}
}
}
v___jp_3903_:
{
lean_object* v___x_3905_; lean_object* v_toEnvExtension_3906_; lean_object* v_asyncMode_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v_e_3912_; lean_object* v_tys_3913_; lean_object* v_ms_3914_; lean_object* v___x_3916_; uint8_t v_isShared_3917_; uint8_t v_isSharedCheck_3943_; 
v___x_3905_ = l_Lean_noncomputableExt;
v_toEnvExtension_3906_ = lean_ctor_get(v___x_3905_, 0);
v_asyncMode_3907_ = lean_ctor_get(v_toEnvExtension_3906_, 2);
lean_inc_n(v_x_3818_, 2);
lean_inc_ref_n(v_env_3816_, 2);
v___x_3908_ = l_Lean_Compiler_getImplementedBy_x3f(v_env_3816_, v_x_3818_);
v___x_3909_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v_s_3819_, v___x_3908_, v___f_3830_);
v___x_3910_ = l_Lean_getExternAttrData_x3f(v_env_3816_, v_x_3818_);
v___x_3911_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_3909_, v___x_3910_, v___f_3829_);
v_e_3912_ = lean_ctor_get(v___x_3911_, 0);
v_tys_3913_ = lean_ctor_get(v___x_3911_, 1);
v_ms_3914_ = lean_ctor_get(v___x_3911_, 2);
v_isSharedCheck_3943_ = !lean_is_exclusive(v___x_3911_);
if (v_isSharedCheck_3943_ == 0)
{
v___x_3916_ = v___x_3911_;
v_isShared_3917_ = v_isSharedCheck_3943_;
goto v_resetjp_3915_;
}
else
{
lean_inc(v_ms_3914_);
lean_inc(v_tys_3913_);
lean_inc(v_e_3912_);
lean_dec(v___x_3911_);
v___x_3916_ = lean_box(0);
v_isShared_3917_ = v_isSharedCheck_3943_;
goto v_resetjp_3915_;
}
v_resetjp_3915_:
{
uint8_t v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3921_; 
lean_inc(v_x_3818_);
lean_inc_ref(v_env_3816_);
v___x_3918_ = l_Lean_isNoncomputable(v_env_3816_, v_x_3818_, v_asyncMode_3907_);
v___x_3919_ = l_Lean_ModuleUsage_Enc_bool(v_e_3912_, v___x_3918_);
if (v_isShared_3917_ == 0)
{
lean_ctor_set(v___x_3916_, 0, v___x_3919_);
v___x_3921_ = v___x_3916_;
goto v_reusejp_3920_;
}
else
{
lean_object* v_reuseFailAlloc_3942_; 
v_reuseFailAlloc_3942_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3942_, 0, v___x_3919_);
lean_ctor_set(v_reuseFailAlloc_3942_, 1, v_tys_3913_);
lean_ctor_set(v_reuseFailAlloc_3942_, 2, v_ms_3914_);
v___x_3921_ = v_reuseFailAlloc_3942_;
goto v_reusejp_3920_;
}
v_reusejp_3920_:
{
lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v_e_3928_; lean_object* v_tys_3929_; lean_object* v_ms_3930_; uint8_t v___x_3931_; lean_object* v___x_3932_; uint8_t v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; uint8_t v___x_3938_; 
lean_inc_n(v_x_3818_, 5);
lean_inc_ref_n(v_env_3816_, 5);
v___x_3922_ = lean_get_export_name_for(v_env_3816_, v_x_3818_);
v___x_3923_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_3921_, v___x_3922_, v___f_3831_);
v___x_3924_ = lean_get_init_fn_name_for(v_env_3816_, v_x_3818_);
v___x_3925_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_3923_, v___x_3924_, v___f_3830_);
v___x_3926_ = l_Lean_Compiler_getInlineAttribute_x3f(v_env_3816_, v_x_3818_);
v___x_3927_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___x_3925_, v___x_3926_, v___f_3828_);
v_e_3928_ = lean_ctor_get(v___x_3927_, 0);
lean_inc_ref(v_e_3928_);
v_tys_3929_ = lean_ctor_get(v___x_3927_, 1);
lean_inc_ref(v_tys_3929_);
v_ms_3930_ = lean_ctor_get(v___x_3927_, 2);
lean_inc(v_ms_3930_);
lean_dec_ref(v___x_3927_);
v___x_3931_ = l_Lean_hasNeverExtractAttribute(v_env_3816_, v_x_3818_);
v___x_3932_ = l_Lean_ModuleUsage_Enc_bool(v_e_3928_, v___x_3931_);
v___x_3933_ = l_Lean_hasMatchPatternAttribute(v_env_3816_, v_x_3818_);
v___x_3934_ = l_Lean_ModuleUsage_Enc_bool(v___x_3932_, v___x_3933_);
v___x_3935_ = l_Lean_ModuleUsage_reducibilityEnc(v___x_3934_, v___y_3904_);
v___x_3936_ = lean_array_get_size(v_insts_3902_);
v___x_3937_ = l_Lean_ModuleUsage_Enc_nat(v___x_3935_, v___x_3936_);
v___x_3938_ = lean_nat_dec_lt(v___x_3900_, v___x_3936_);
if (v___x_3938_ == 0)
{
lean_dec(v_insts_3902_);
v___y_3837_ = v_ms_3930_;
v___y_3838_ = v_tys_3929_;
v___y_3839_ = v___x_3937_;
goto v___jp_3836_;
}
else
{
size_t v___x_3939_; size_t v___x_3940_; lean_object* v___x_3941_; 
v___x_3939_ = ((size_t)0ULL);
v___x_3940_ = lean_usize_of_nat(v___x_3936_);
v___x_3941_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_attrsEnc_spec__1(v_insts_3902_, v___x_3939_, v___x_3940_, v___x_3937_);
lean_dec(v_insts_3902_);
v___y_3837_ = v_ms_3930_;
v___y_3838_ = v_tys_3929_;
v___y_3839_ = v___x_3941_;
goto v___jp_3836_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_attrsEnc___boxed(lean_object* v_env_3950_, lean_object* v_lc_3951_, lean_object* v_x_3952_, lean_object* v_s_3953_){
_start:
{
lean_object* v_res_3954_; 
v_res_3954_ = l_Lean_ModuleUsage_attrsEnc(v_env_3950_, v_lc_3951_, v_x_3952_, v_s_3953_);
lean_dec_ref(v_lc_3951_);
return v_res_3954_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_ModuleUsage_attrsEnc_spec__0(lean_object* v_00_u03b4_3955_, lean_object* v_t_3956_, lean_object* v_k_3957_, lean_object* v_fallback_3958_){
_start:
{
lean_object* v___x_3959_; 
v___x_3959_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_ModuleUsage_attrsEnc_spec__0___redArg(v_t_3956_, v_k_3957_, v_fallback_3958_);
return v___x_3959_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_ModuleUsage_attrsEnc_spec__0___boxed(lean_object* v_00_u03b4_3960_, lean_object* v_t_3961_, lean_object* v_k_3962_, lean_object* v_fallback_3963_){
_start:
{
lean_object* v_res_3964_; 
v_res_3964_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_ModuleUsage_attrsEnc_spec__0(v_00_u03b4_3960_, v_t_3961_, v_k_3962_, v_fallback_3963_);
lean_dec(v_fallback_3963_);
lean_dec(v_k_3962_);
lean_dec(v_t_3961_);
return v_res_3964_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_trivialEnc(lean_object* v_e_3965_, lean_object* v_i_3966_){
_start:
{
lean_object* v_ctorName_3967_; lean_object* v_numParams_3968_; lean_object* v_fieldIdx_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; 
v_ctorName_3967_ = lean_ctor_get(v_i_3966_, 0);
lean_inc(v_ctorName_3967_);
v_numParams_3968_ = lean_ctor_get(v_i_3966_, 1);
lean_inc(v_numParams_3968_);
v_fieldIdx_3969_ = lean_ctor_get(v_i_3966_, 2);
lean_inc(v_fieldIdx_3969_);
lean_dec_ref(v_i_3966_);
v___x_3970_ = l_Lean_ModuleUsage_Enc_name(v_e_3965_, v_ctorName_3967_);
v___x_3971_ = l_Lean_ModuleUsage_Enc_nat(v___x_3970_, v_numParams_3968_);
v___x_3972_ = l_Lean_ModuleUsage_Enc_nat(v___x_3971_, v_fieldIdx_3969_);
return v___x_3972_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_ctorInfoEnc(lean_object* v_e_3973_, lean_object* v_i_3974_){
_start:
{
lean_object* v_name_3975_; lean_object* v_cidx_3976_; lean_object* v_size_3977_; lean_object* v_usize_3978_; lean_object* v_ssize_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; 
v_name_3975_ = lean_ctor_get(v_i_3974_, 0);
lean_inc(v_name_3975_);
v_cidx_3976_ = lean_ctor_get(v_i_3974_, 1);
lean_inc(v_cidx_3976_);
v_size_3977_ = lean_ctor_get(v_i_3974_, 2);
lean_inc(v_size_3977_);
v_usize_3978_ = lean_ctor_get(v_i_3974_, 3);
lean_inc(v_usize_3978_);
v_ssize_3979_ = lean_ctor_get(v_i_3974_, 4);
lean_inc(v_ssize_3979_);
lean_dec_ref(v_i_3974_);
v___x_3980_ = l_Lean_ModuleUsage_Enc_name(v_e_3973_, v_name_3975_);
v___x_3981_ = l_Lean_ModuleUsage_Enc_nat(v___x_3980_, v_cidx_3976_);
v___x_3982_ = l_Lean_ModuleUsage_Enc_nat(v___x_3981_, v_size_3977_);
v___x_3983_ = l_Lean_ModuleUsage_Enc_nat(v___x_3982_, v_usize_3978_);
v___x_3984_ = l_Lean_ModuleUsage_Enc_nat(v___x_3983_, v_ssize_3979_);
return v___x_3984_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_ctorFieldEnc(lean_object* v_s_3985_, lean_object* v_x_3986_){
_start:
{
switch(lean_obj_tag(v_x_3986_))
{
case 0:
{
lean_object* v_e_3987_; lean_object* v_tys_3988_; lean_object* v_ms_3989_; lean_object* v___x_3991_; uint8_t v_isShared_3992_; uint8_t v_isSharedCheck_3998_; 
v_e_3987_ = lean_ctor_get(v_s_3985_, 0);
v_tys_3988_ = lean_ctor_get(v_s_3985_, 1);
v_ms_3989_ = lean_ctor_get(v_s_3985_, 2);
v_isSharedCheck_3998_ = !lean_is_exclusive(v_s_3985_);
if (v_isSharedCheck_3998_ == 0)
{
v___x_3991_ = v_s_3985_;
v_isShared_3992_ = v_isSharedCheck_3998_;
goto v_resetjp_3990_;
}
else
{
lean_inc(v_ms_3989_);
lean_inc(v_tys_3988_);
lean_inc(v_e_3987_);
lean_dec(v_s_3985_);
v___x_3991_ = lean_box(0);
v_isShared_3992_ = v_isSharedCheck_3998_;
goto v_resetjp_3990_;
}
v_resetjp_3990_:
{
uint8_t v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3996_; 
v___x_3993_ = 0;
v___x_3994_ = lean_byte_array_push(v_e_3987_, v___x_3993_);
if (v_isShared_3992_ == 0)
{
lean_ctor_set(v___x_3991_, 0, v___x_3994_);
v___x_3996_ = v___x_3991_;
goto v_reusejp_3995_;
}
else
{
lean_object* v_reuseFailAlloc_3997_; 
v_reuseFailAlloc_3997_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3997_, 0, v___x_3994_);
lean_ctor_set(v_reuseFailAlloc_3997_, 1, v_tys_3988_);
lean_ctor_set(v_reuseFailAlloc_3997_, 2, v_ms_3989_);
v___x_3996_ = v_reuseFailAlloc_3997_;
goto v_reusejp_3995_;
}
v_reusejp_3995_:
{
return v___x_3996_;
}
}
}
case 1:
{
lean_object* v_i_3999_; lean_object* v_type_4000_; lean_object* v_e_4001_; lean_object* v_tys_4002_; lean_object* v_ms_4003_; lean_object* v___x_4005_; uint8_t v_isShared_4006_; uint8_t v_isSharedCheck_4014_; 
v_i_3999_ = lean_ctor_get(v_x_3986_, 0);
lean_inc(v_i_3999_);
v_type_4000_ = lean_ctor_get(v_x_3986_, 1);
lean_inc_ref(v_type_4000_);
lean_dec_ref_known(v_x_3986_, 2);
v_e_4001_ = lean_ctor_get(v_s_3985_, 0);
v_tys_4002_ = lean_ctor_get(v_s_3985_, 1);
v_ms_4003_ = lean_ctor_get(v_s_3985_, 2);
v_isSharedCheck_4014_ = !lean_is_exclusive(v_s_3985_);
if (v_isSharedCheck_4014_ == 0)
{
v___x_4005_ = v_s_3985_;
v_isShared_4006_ = v_isSharedCheck_4014_;
goto v_resetjp_4004_;
}
else
{
lean_inc(v_ms_4003_);
lean_inc(v_tys_4002_);
lean_inc(v_e_4001_);
lean_dec(v_s_3985_);
v___x_4005_ = lean_box(0);
v_isShared_4006_ = v_isSharedCheck_4014_;
goto v_resetjp_4004_;
}
v_resetjp_4004_:
{
uint8_t v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4012_; 
v___x_4007_ = 1;
v___x_4008_ = lean_byte_array_push(v_e_4001_, v___x_4007_);
v___x_4009_ = l_Lean_ModuleUsage_Enc_nat(v___x_4008_, v_i_3999_);
v___x_4010_ = lean_array_push(v_tys_4002_, v_type_4000_);
if (v_isShared_4006_ == 0)
{
lean_ctor_set(v___x_4005_, 1, v___x_4010_);
lean_ctor_set(v___x_4005_, 0, v___x_4009_);
v___x_4012_ = v___x_4005_;
goto v_reusejp_4011_;
}
else
{
lean_object* v_reuseFailAlloc_4013_; 
v_reuseFailAlloc_4013_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4013_, 0, v___x_4009_);
lean_ctor_set(v_reuseFailAlloc_4013_, 1, v___x_4010_);
lean_ctor_set(v_reuseFailAlloc_4013_, 2, v_ms_4003_);
v___x_4012_ = v_reuseFailAlloc_4013_;
goto v_reusejp_4011_;
}
v_reusejp_4011_:
{
return v___x_4012_;
}
}
}
case 2:
{
lean_object* v_i_4015_; lean_object* v_e_4016_; lean_object* v_tys_4017_; lean_object* v_ms_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4028_; 
v_i_4015_ = lean_ctor_get(v_x_3986_, 0);
lean_inc(v_i_4015_);
lean_dec_ref_known(v_x_3986_, 1);
v_e_4016_ = lean_ctor_get(v_s_3985_, 0);
v_tys_4017_ = lean_ctor_get(v_s_3985_, 1);
v_ms_4018_ = lean_ctor_get(v_s_3985_, 2);
v_isSharedCheck_4028_ = !lean_is_exclusive(v_s_3985_);
if (v_isSharedCheck_4028_ == 0)
{
v___x_4020_ = v_s_3985_;
v_isShared_4021_ = v_isSharedCheck_4028_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_ms_4018_);
lean_inc(v_tys_4017_);
lean_inc(v_e_4016_);
lean_dec(v_s_3985_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4028_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
uint8_t v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4026_; 
v___x_4022_ = 2;
v___x_4023_ = lean_byte_array_push(v_e_4016_, v___x_4022_);
v___x_4024_ = l_Lean_ModuleUsage_Enc_nat(v___x_4023_, v_i_4015_);
if (v_isShared_4021_ == 0)
{
lean_ctor_set(v___x_4020_, 0, v___x_4024_);
v___x_4026_ = v___x_4020_;
goto v_reusejp_4025_;
}
else
{
lean_object* v_reuseFailAlloc_4027_; 
v_reuseFailAlloc_4027_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4027_, 0, v___x_4024_);
lean_ctor_set(v_reuseFailAlloc_4027_, 1, v_tys_4017_);
lean_ctor_set(v_reuseFailAlloc_4027_, 2, v_ms_4018_);
v___x_4026_ = v_reuseFailAlloc_4027_;
goto v_reusejp_4025_;
}
v_reusejp_4025_:
{
return v___x_4026_;
}
}
}
case 3:
{
lean_object* v_sz_4029_; lean_object* v_offset_4030_; lean_object* v_type_4031_; lean_object* v_e_4032_; lean_object* v_tys_4033_; lean_object* v_ms_4034_; lean_object* v___x_4036_; uint8_t v_isShared_4037_; uint8_t v_isSharedCheck_4046_; 
v_sz_4029_ = lean_ctor_get(v_x_3986_, 0);
lean_inc(v_sz_4029_);
v_offset_4030_ = lean_ctor_get(v_x_3986_, 1);
lean_inc(v_offset_4030_);
v_type_4031_ = lean_ctor_get(v_x_3986_, 2);
lean_inc_ref(v_type_4031_);
lean_dec_ref_known(v_x_3986_, 3);
v_e_4032_ = lean_ctor_get(v_s_3985_, 0);
v_tys_4033_ = lean_ctor_get(v_s_3985_, 1);
v_ms_4034_ = lean_ctor_get(v_s_3985_, 2);
v_isSharedCheck_4046_ = !lean_is_exclusive(v_s_3985_);
if (v_isSharedCheck_4046_ == 0)
{
v___x_4036_ = v_s_3985_;
v_isShared_4037_ = v_isSharedCheck_4046_;
goto v_resetjp_4035_;
}
else
{
lean_inc(v_ms_4034_);
lean_inc(v_tys_4033_);
lean_inc(v_e_4032_);
lean_dec(v_s_3985_);
v___x_4036_ = lean_box(0);
v_isShared_4037_ = v_isSharedCheck_4046_;
goto v_resetjp_4035_;
}
v_resetjp_4035_:
{
uint8_t v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4044_; 
v___x_4038_ = 3;
v___x_4039_ = lean_byte_array_push(v_e_4032_, v___x_4038_);
v___x_4040_ = l_Lean_ModuleUsage_Enc_nat(v___x_4039_, v_sz_4029_);
v___x_4041_ = l_Lean_ModuleUsage_Enc_nat(v___x_4040_, v_offset_4030_);
v___x_4042_ = lean_array_push(v_tys_4033_, v_type_4031_);
if (v_isShared_4037_ == 0)
{
lean_ctor_set(v___x_4036_, 1, v___x_4042_);
lean_ctor_set(v___x_4036_, 0, v___x_4041_);
v___x_4044_ = v___x_4036_;
goto v_reusejp_4043_;
}
else
{
lean_object* v_reuseFailAlloc_4045_; 
v_reuseFailAlloc_4045_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4045_, 0, v___x_4041_);
lean_ctor_set(v_reuseFailAlloc_4045_, 1, v___x_4042_);
lean_ctor_set(v_reuseFailAlloc_4045_, 2, v_ms_4034_);
v___x_4044_ = v_reuseFailAlloc_4045_;
goto v_reusejp_4043_;
}
v_reusejp_4043_:
{
return v___x_4044_;
}
}
}
case 4:
{
lean_object* v_e_4047_; lean_object* v_tys_4048_; lean_object* v_ms_4049_; lean_object* v___x_4051_; uint8_t v_isShared_4052_; uint8_t v_isSharedCheck_4058_; 
v_e_4047_ = lean_ctor_get(v_s_3985_, 0);
v_tys_4048_ = lean_ctor_get(v_s_3985_, 1);
v_ms_4049_ = lean_ctor_get(v_s_3985_, 2);
v_isSharedCheck_4058_ = !lean_is_exclusive(v_s_3985_);
if (v_isSharedCheck_4058_ == 0)
{
v___x_4051_ = v_s_3985_;
v_isShared_4052_ = v_isSharedCheck_4058_;
goto v_resetjp_4050_;
}
else
{
lean_inc(v_ms_4049_);
lean_inc(v_tys_4048_);
lean_inc(v_e_4047_);
lean_dec(v_s_3985_);
v___x_4051_ = lean_box(0);
v_isShared_4052_ = v_isSharedCheck_4058_;
goto v_resetjp_4050_;
}
v_resetjp_4050_:
{
uint8_t v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4056_; 
v___x_4053_ = 4;
v___x_4054_ = lean_byte_array_push(v_e_4047_, v___x_4053_);
if (v_isShared_4052_ == 0)
{
lean_ctor_set(v___x_4051_, 0, v___x_4054_);
v___x_4056_ = v___x_4051_;
goto v_reusejp_4055_;
}
else
{
lean_object* v_reuseFailAlloc_4057_; 
v_reuseFailAlloc_4057_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4057_, 0, v___x_4054_);
lean_ctor_set(v_reuseFailAlloc_4057_, 1, v_tys_4048_);
lean_ctor_set(v_reuseFailAlloc_4057_, 2, v_ms_4049_);
v___x_4056_ = v_reuseFailAlloc_4057_;
goto v_reusejp_4055_;
}
v_reusejp_4055_:
{
return v___x_4056_;
}
}
}
default: 
{
lean_object* v_depth_4059_; lean_object* v_i_4060_; lean_object* v_type_4061_; lean_object* v_e_4062_; lean_object* v_tys_4063_; lean_object* v_ms_4064_; lean_object* v___x_4066_; uint8_t v_isShared_4067_; uint8_t v_isSharedCheck_4076_; 
v_depth_4059_ = lean_ctor_get(v_x_3986_, 0);
lean_inc(v_depth_4059_);
v_i_4060_ = lean_ctor_get(v_x_3986_, 1);
lean_inc(v_i_4060_);
v_type_4061_ = lean_ctor_get(v_x_3986_, 2);
lean_inc_ref(v_type_4061_);
lean_dec_ref_known(v_x_3986_, 3);
v_e_4062_ = lean_ctor_get(v_s_3985_, 0);
v_tys_4063_ = lean_ctor_get(v_s_3985_, 1);
v_ms_4064_ = lean_ctor_get(v_s_3985_, 2);
v_isSharedCheck_4076_ = !lean_is_exclusive(v_s_3985_);
if (v_isSharedCheck_4076_ == 0)
{
v___x_4066_ = v_s_3985_;
v_isShared_4067_ = v_isSharedCheck_4076_;
goto v_resetjp_4065_;
}
else
{
lean_inc(v_ms_4064_);
lean_inc(v_tys_4063_);
lean_inc(v_e_4062_);
lean_dec(v_s_3985_);
v___x_4066_ = lean_box(0);
v_isShared_4067_ = v_isSharedCheck_4076_;
goto v_resetjp_4065_;
}
v_resetjp_4065_:
{
uint8_t v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4074_; 
v___x_4068_ = 5;
v___x_4069_ = lean_byte_array_push(v_e_4062_, v___x_4068_);
v___x_4070_ = l_Lean_ModuleUsage_Enc_nat(v___x_4069_, v_depth_4059_);
v___x_4071_ = l_Lean_ModuleUsage_Enc_nat(v___x_4070_, v_i_4060_);
v___x_4072_ = lean_array_push(v_tys_4063_, v_type_4061_);
if (v_isShared_4067_ == 0)
{
lean_ctor_set(v___x_4066_, 1, v___x_4072_);
lean_ctor_set(v___x_4066_, 0, v___x_4071_);
v___x_4074_ = v___x_4066_;
goto v_reusejp_4073_;
}
else
{
lean_object* v_reuseFailAlloc_4075_; 
v_reuseFailAlloc_4075_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4075_, 0, v___x_4071_);
lean_ctor_set(v_reuseFailAlloc_4075_, 1, v___x_4072_);
lean_ctor_set(v_reuseFailAlloc_4075_, 2, v_ms_4064_);
v___x_4074_ = v_reuseFailAlloc_4075_;
goto v_reusejp_4073_;
}
v_reusejp_4073_:
{
return v___x_4074_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_ctorLayoutEnc_spec__0(lean_object* v_as_4077_, size_t v_i_4078_, size_t v_stop_4079_, lean_object* v_b_4080_){
_start:
{
uint8_t v___x_4081_; 
v___x_4081_ = lean_usize_dec_eq(v_i_4078_, v_stop_4079_);
if (v___x_4081_ == 0)
{
lean_object* v___x_4082_; lean_object* v___x_4083_; size_t v___x_4084_; size_t v___x_4085_; 
v___x_4082_ = lean_array_uget_borrowed(v_as_4077_, v_i_4078_);
lean_inc(v___x_4082_);
v___x_4083_ = l_Lean_ModuleUsage_ctorFieldEnc(v_b_4080_, v___x_4082_);
v___x_4084_ = ((size_t)1ULL);
v___x_4085_ = lean_usize_add(v_i_4078_, v___x_4084_);
v_i_4078_ = v___x_4085_;
v_b_4080_ = v___x_4083_;
goto _start;
}
else
{
return v_b_4080_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_ctorLayoutEnc_spec__0___boxed(lean_object* v_as_4087_, lean_object* v_i_4088_, lean_object* v_stop_4089_, lean_object* v_b_4090_){
_start:
{
size_t v_i_boxed_4091_; size_t v_stop_boxed_4092_; lean_object* v_res_4093_; 
v_i_boxed_4091_ = lean_unbox_usize(v_i_4088_);
lean_dec(v_i_4088_);
v_stop_boxed_4092_ = lean_unbox_usize(v_stop_4089_);
lean_dec(v_stop_4089_);
v_res_4093_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_ctorLayoutEnc_spec__0(v_as_4087_, v_i_boxed_4091_, v_stop_boxed_4092_, v_b_4090_);
lean_dec_ref(v_as_4087_);
return v_res_4093_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_ctorLayoutEnc(lean_object* v_s_4094_, lean_object* v_l_4095_){
_start:
{
lean_object* v_ctorInfo_4096_; lean_object* v_fieldInfo_4097_; lean_object* v_e_4098_; lean_object* v_tys_4099_; lean_object* v_ms_4100_; lean_object* v___x_4102_; uint8_t v_isShared_4103_; uint8_t v_isSharedCheck_4115_; 
v_ctorInfo_4096_ = lean_ctor_get(v_l_4095_, 0);
lean_inc_ref(v_ctorInfo_4096_);
v_fieldInfo_4097_ = lean_ctor_get(v_l_4095_, 1);
lean_inc_ref(v_fieldInfo_4097_);
lean_dec_ref(v_l_4095_);
v_e_4098_ = lean_ctor_get(v_s_4094_, 0);
v_tys_4099_ = lean_ctor_get(v_s_4094_, 1);
v_ms_4100_ = lean_ctor_get(v_s_4094_, 2);
v_isSharedCheck_4115_ = !lean_is_exclusive(v_s_4094_);
if (v_isSharedCheck_4115_ == 0)
{
v___x_4102_ = v_s_4094_;
v_isShared_4103_ = v_isSharedCheck_4115_;
goto v_resetjp_4101_;
}
else
{
lean_inc(v_ms_4100_);
lean_inc(v_tys_4099_);
lean_inc(v_e_4098_);
lean_dec(v_s_4094_);
v___x_4102_ = lean_box(0);
v_isShared_4103_ = v_isSharedCheck_4115_;
goto v_resetjp_4101_;
}
v_resetjp_4101_:
{
lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4108_; 
v___x_4104_ = l_Lean_ModuleUsage_ctorInfoEnc(v_e_4098_, v_ctorInfo_4096_);
v___x_4105_ = lean_array_get_size(v_fieldInfo_4097_);
v___x_4106_ = l_Lean_ModuleUsage_Enc_nat(v___x_4104_, v___x_4105_);
if (v_isShared_4103_ == 0)
{
lean_ctor_set(v___x_4102_, 0, v___x_4106_);
v___x_4108_ = v___x_4102_;
goto v_reusejp_4107_;
}
else
{
lean_object* v_reuseFailAlloc_4114_; 
v_reuseFailAlloc_4114_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4114_, 0, v___x_4106_);
lean_ctor_set(v_reuseFailAlloc_4114_, 1, v_tys_4099_);
lean_ctor_set(v_reuseFailAlloc_4114_, 2, v_ms_4100_);
v___x_4108_ = v_reuseFailAlloc_4114_;
goto v_reusejp_4107_;
}
v_reusejp_4107_:
{
lean_object* v___x_4109_; uint8_t v___x_4110_; 
v___x_4109_ = lean_unsigned_to_nat(0u);
v___x_4110_ = lean_nat_dec_lt(v___x_4109_, v___x_4105_);
if (v___x_4110_ == 0)
{
lean_dec_ref(v_fieldInfo_4097_);
return v___x_4108_;
}
else
{
size_t v___x_4111_; size_t v___x_4112_; lean_object* v___x_4113_; 
v___x_4111_ = ((size_t)0ULL);
v___x_4112_ = lean_usize_of_nat(v___x_4105_);
v___x_4113_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_ctorLayoutEnc_spec__0(v_fieldInfo_4097_, v___x_4111_, v___x_4112_, v___x_4108_);
lean_dec_ref(v_fieldInfo_4097_);
return v___x_4113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___lam__0(lean_object* v_s_4116_, lean_object* v_n_4117_, lean_object* v_x_4118_){
_start:
{
lean_object* v___x_4119_; 
v___x_4119_ = l_Lean_NameSet_insert(v_s_4116_, v_n_4117_);
return v___x_4119_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___lam__0___boxed(lean_object* v_s_4120_, lean_object* v_n_4121_, lean_object* v_x_4122_){
_start:
{
lean_object* v_res_4123_; 
v_res_4123_ = l_Lean_ModuleUsage_compiledNames___lam__0(v_s_4120_, v_n_4121_, v_x_4122_);
lean_dec(v_x_4122_);
return v_res_4123_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___lam__1(lean_object* v_s_4124_, lean_object* v_n_4125_, lean_object* v_x_4126_){
_start:
{
lean_object* v___x_4127_; 
v___x_4127_ = l_Lean_NameSet_insert(v_s_4124_, v_n_4125_);
return v___x_4127_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___lam__1___boxed(lean_object* v_s_4128_, lean_object* v_n_4129_, lean_object* v_x_4130_){
_start:
{
lean_object* v_res_4131_; 
v_res_4131_ = l_Lean_ModuleUsage_compiledNames___lam__1(v_s_4128_, v_n_4129_, v_x_4130_);
lean_dec_ref(v_x_4130_);
return v_res_4131_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___lam__2(lean_object* v_s_4132_, lean_object* v_n_4133_, lean_object* v_x_4134_){
_start:
{
lean_object* v___x_4135_; 
v___x_4135_ = l_Lean_NameSet_insert(v_s_4132_, v_n_4133_);
return v___x_4135_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___lam__2___boxed(lean_object* v_s_4136_, lean_object* v_n_4137_, lean_object* v_x_4138_){
_start:
{
lean_object* v_res_4139_; 
v_res_4139_ = l_Lean_ModuleUsage_compiledNames___lam__2(v_s_4136_, v_n_4137_, v_x_4138_);
lean_dec_ref(v_x_4138_);
return v_res_4139_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___lam__3(lean_object* v_s_4140_, lean_object* v_n_4141_, lean_object* v_x_4142_){
_start:
{
lean_object* v___x_4143_; 
v___x_4143_ = l_Lean_NameSet_insert(v_s_4140_, v_n_4141_);
return v___x_4143_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___lam__3___boxed(lean_object* v_s_4144_, lean_object* v_n_4145_, lean_object* v_x_4146_){
_start:
{
lean_object* v_res_4147_; 
v_res_4147_ = l_Lean_ModuleUsage_compiledNames___lam__3(v_s_4144_, v_n_4145_, v_x_4146_);
lean_dec_ref(v_x_4146_);
return v_res_4147_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_ModuleUsage_compiledNames_spec__1(lean_object* v_x_4148_, lean_object* v_x_4149_){
_start:
{
if (lean_obj_tag(v_x_4149_) == 0)
{
return v_x_4148_;
}
else
{
lean_object* v_key_4150_; lean_object* v_tail_4151_; lean_object* v___x_4152_; 
v_key_4150_ = lean_ctor_get(v_x_4149_, 0);
lean_inc(v_key_4150_);
v_tail_4151_ = lean_ctor_get(v_x_4149_, 2);
lean_inc(v_tail_4151_);
lean_dec_ref_known(v_x_4149_, 3);
v___x_4152_ = l_Lean_NameSet_insert(v_x_4148_, v_key_4150_);
v_x_4148_ = v___x_4152_;
v_x_4149_ = v_tail_4151_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_compiledNames_spec__2(lean_object* v_as_4154_, size_t v_i_4155_, size_t v_stop_4156_, lean_object* v_b_4157_){
_start:
{
uint8_t v___x_4158_; 
v___x_4158_ = lean_usize_dec_eq(v_i_4155_, v_stop_4156_);
if (v___x_4158_ == 0)
{
lean_object* v___x_4159_; lean_object* v___x_4160_; size_t v___x_4161_; size_t v___x_4162_; 
v___x_4159_ = lean_array_uget_borrowed(v_as_4154_, v_i_4155_);
lean_inc(v___x_4159_);
v___x_4160_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_ModuleUsage_compiledNames_spec__1(v_b_4157_, v___x_4159_);
v___x_4161_ = ((size_t)1ULL);
v___x_4162_ = lean_usize_add(v_i_4155_, v___x_4161_);
v_i_4155_ = v___x_4162_;
v_b_4157_ = v___x_4160_;
goto _start;
}
else
{
return v_b_4157_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_compiledNames_spec__2___boxed(lean_object* v_as_4164_, lean_object* v_i_4165_, lean_object* v_stop_4166_, lean_object* v_b_4167_){
_start:
{
size_t v_i_boxed_4168_; size_t v_stop_boxed_4169_; lean_object* v_res_4170_; 
v_i_boxed_4168_ = lean_unbox_usize(v_i_4165_);
lean_dec(v_i_4165_);
v_stop_boxed_4169_ = lean_unbox_usize(v_stop_4166_);
lean_dec(v_stop_4166_);
v_res_4170_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_compiledNames_spec__2(v_as_4164_, v_i_boxed_4168_, v_stop_boxed_4169_, v_b_4167_);
lean_dec_ref(v_as_4164_);
return v_res_4170_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__5___redArg(lean_object* v_f_4171_, lean_object* v_keys_4172_, lean_object* v_vals_4173_, lean_object* v_i_4174_, lean_object* v_acc_4175_){
_start:
{
lean_object* v___x_4176_; uint8_t v___x_4177_; 
v___x_4176_ = lean_array_get_size(v_keys_4172_);
v___x_4177_ = lean_nat_dec_lt(v_i_4174_, v___x_4176_);
if (v___x_4177_ == 0)
{
lean_dec(v_i_4174_);
lean_dec(v_f_4171_);
return v_acc_4175_;
}
else
{
lean_object* v_k_4178_; lean_object* v_v_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; 
v_k_4178_ = lean_array_fget_borrowed(v_keys_4172_, v_i_4174_);
v_v_4179_ = lean_array_fget_borrowed(v_vals_4173_, v_i_4174_);
lean_inc(v_f_4171_);
lean_inc(v_v_4179_);
lean_inc(v_k_4178_);
v___x_4180_ = lean_apply_3(v_f_4171_, v_acc_4175_, v_k_4178_, v_v_4179_);
v___x_4181_ = lean_unsigned_to_nat(1u);
v___x_4182_ = lean_nat_add(v_i_4174_, v___x_4181_);
lean_dec(v_i_4174_);
v_i_4174_ = v___x_4182_;
v_acc_4175_ = v___x_4180_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_f_4184_, lean_object* v_keys_4185_, lean_object* v_vals_4186_, lean_object* v_i_4187_, lean_object* v_acc_4188_){
_start:
{
lean_object* v_res_4189_; 
v_res_4189_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__5___redArg(v_f_4184_, v_keys_4185_, v_vals_4186_, v_i_4187_, v_acc_4188_);
lean_dec_ref(v_vals_4186_);
lean_dec_ref(v_keys_4185_);
return v_res_4189_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_f_4190_, lean_object* v_as_4191_, size_t v_i_4192_, size_t v_stop_4193_, lean_object* v_b_4194_){
_start:
{
lean_object* v___y_4196_; uint8_t v___x_4200_; 
v___x_4200_ = lean_usize_dec_eq(v_i_4192_, v_stop_4193_);
if (v___x_4200_ == 0)
{
lean_object* v___x_4201_; 
v___x_4201_ = lean_array_uget_borrowed(v_as_4191_, v_i_4192_);
switch(lean_obj_tag(v___x_4201_))
{
case 0:
{
lean_object* v_key_4202_; lean_object* v_val_4203_; lean_object* v___x_4204_; 
v_key_4202_ = lean_ctor_get(v___x_4201_, 0);
v_val_4203_ = lean_ctor_get(v___x_4201_, 1);
lean_inc(v_f_4190_);
lean_inc(v_val_4203_);
lean_inc(v_key_4202_);
v___x_4204_ = lean_apply_3(v_f_4190_, v_b_4194_, v_key_4202_, v_val_4203_);
v___y_4196_ = v___x_4204_;
goto v___jp_4195_;
}
case 1:
{
lean_object* v_node_4205_; lean_object* v___x_4206_; 
v_node_4205_ = lean_ctor_get(v___x_4201_, 0);
lean_inc(v_f_4190_);
v___x_4206_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1___redArg(v_f_4190_, v_node_4205_, v_b_4194_);
v___y_4196_ = v___x_4206_;
goto v___jp_4195_;
}
default: 
{
v___y_4196_ = v_b_4194_;
goto v___jp_4195_;
}
}
}
else
{
lean_dec(v_f_4190_);
return v_b_4194_;
}
v___jp_4195_:
{
size_t v___x_4197_; size_t v___x_4198_; 
v___x_4197_ = ((size_t)1ULL);
v___x_4198_ = lean_usize_add(v_i_4192_, v___x_4197_);
v_i_4192_ = v___x_4198_;
v_b_4194_ = v___y_4196_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1___redArg(lean_object* v_f_4207_, lean_object* v_x_4208_, lean_object* v_x_4209_){
_start:
{
if (lean_obj_tag(v_x_4208_) == 0)
{
lean_object* v_es_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; uint8_t v___x_4213_; 
v_es_4210_ = lean_ctor_get(v_x_4208_, 0);
v___x_4211_ = lean_unsigned_to_nat(0u);
v___x_4212_ = lean_array_get_size(v_es_4210_);
v___x_4213_ = lean_nat_dec_lt(v___x_4211_, v___x_4212_);
if (v___x_4213_ == 0)
{
lean_dec(v_f_4207_);
return v_x_4209_;
}
else
{
size_t v___x_4214_; size_t v___x_4215_; lean_object* v___x_4216_; 
v___x_4214_ = ((size_t)0ULL);
v___x_4215_ = lean_usize_of_nat(v___x_4212_);
v___x_4216_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__4___redArg(v_f_4207_, v_es_4210_, v___x_4214_, v___x_4215_, v_x_4209_);
return v___x_4216_;
}
}
else
{
lean_object* v_ks_4217_; lean_object* v_vs_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; 
v_ks_4217_ = lean_ctor_get(v_x_4208_, 0);
v_vs_4218_ = lean_ctor_get(v_x_4208_, 1);
v___x_4219_ = lean_unsigned_to_nat(0u);
v___x_4220_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__5___redArg(v_f_4207_, v_ks_4217_, v_vs_4218_, v___x_4219_, v_x_4209_);
return v___x_4220_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_4221_, lean_object* v_x_4222_, lean_object* v_x_4223_){
_start:
{
lean_object* v_res_4224_; 
v_res_4224_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1___redArg(v_f_4221_, v_x_4222_, v_x_4223_);
lean_dec_ref(v_x_4222_);
return v_res_4224_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_f_4225_, lean_object* v_as_4226_, lean_object* v_i_4227_, lean_object* v_stop_4228_, lean_object* v_b_4229_){
_start:
{
size_t v_i_boxed_4230_; size_t v_stop_boxed_4231_; lean_object* v_res_4232_; 
v_i_boxed_4230_ = lean_unbox_usize(v_i_4227_);
lean_dec(v_i_4227_);
v_stop_boxed_4231_ = lean_unbox_usize(v_stop_4228_);
lean_dec(v_stop_4228_);
v_res_4232_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__4___redArg(v_f_4225_, v_as_4226_, v_i_boxed_4230_, v_stop_boxed_4231_, v_b_4229_);
lean_dec_ref(v_as_4226_);
return v_res_4232_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0___redArg___lam__0(lean_object* v_f_4233_, lean_object* v_x1_4234_, lean_object* v_x2_4235_, lean_object* v_x3_4236_){
_start:
{
lean_object* v___x_4237_; 
v___x_4237_ = lean_apply_3(v_f_4233_, v_x1_4234_, v_x2_4235_, v_x3_4236_);
return v___x_4237_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0___redArg(lean_object* v_map_4238_, lean_object* v_f_4239_, lean_object* v_init_4240_){
_start:
{
lean_object* v___f_4241_; lean_object* v___x_4242_; 
v___f_4241_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0___redArg___lam__0), 4, 1);
lean_closure_set(v___f_4241_, 0, v_f_4239_);
v___x_4242_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1___redArg(v___f_4241_, v_map_4238_, v_init_4240_);
return v___x_4242_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0___redArg___boxed(lean_object* v_map_4243_, lean_object* v_f_4244_, lean_object* v_init_4245_){
_start:
{
lean_object* v_res_4246_; 
v_res_4246_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0___redArg(v_map_4243_, v_f_4244_, v_init_4245_);
lean_dec_ref(v_map_4243_);
return v_res_4246_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_compiledNames___closed__4(void){
_start:
{
lean_object* v___x_4251_; 
v___x_4251_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v___x_4251_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames(lean_object* v_env_4252_, lean_object* v_lc_4253_){
_start:
{
lean_object* v_ir_4254_; lean_object* v_buckets_4255_; lean_object* v___f_4256_; lean_object* v___f_4257_; lean_object* v___f_4258_; lean_object* v___f_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___y_4263_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; uint8_t v___x_4294_; 
v_ir_4254_ = lean_ctor_get(v_lc_4253_, 0);
v_buckets_4255_ = lean_ctor_get(v_ir_4254_, 1);
v___f_4256_ = ((lean_object*)(l_Lean_ModuleUsage_compiledNames___closed__0));
v___f_4257_ = ((lean_object*)(l_Lean_ModuleUsage_compiledNames___closed__1));
v___f_4258_ = ((lean_object*)(l_Lean_ModuleUsage_compiledNames___closed__2));
v___f_4259_ = ((lean_object*)(l_Lean_ModuleUsage_compiledNames___closed__3));
v___x_4260_ = lean_obj_once(&l_Lean_ModuleUsage_compiledNames___closed__4, &l_Lean_ModuleUsage_compiledNames___closed__4_once, _init_l_Lean_ModuleUsage_compiledNames___closed__4);
v___x_4261_ = l_Lean_Compiler_LCNF_instInhabitedSpecState_default;
v___x_4291_ = l_Lean_NameSet_empty;
v___x_4292_ = lean_unsigned_to_nat(0u);
v___x_4293_ = lean_array_get_size(v_buckets_4255_);
v___x_4294_ = lean_nat_dec_lt(v___x_4292_, v___x_4293_);
if (v___x_4294_ == 0)
{
v___y_4263_ = v___x_4291_;
goto v___jp_4262_;
}
else
{
size_t v___x_4295_; size_t v___x_4296_; lean_object* v___x_4297_; 
v___x_4295_ = ((size_t)0ULL);
v___x_4296_ = lean_usize_of_nat(v___x_4293_);
v___x_4297_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_compiledNames_spec__2(v_buckets_4255_, v___x_4295_, v___x_4296_, v___x_4291_);
v___y_4263_ = v___x_4297_;
goto v___jp_4262_;
}
v___jp_4262_:
{
lean_object* v___x_4264_; lean_object* v_toEnvExtension_4265_; lean_object* v_asyncMode_4266_; lean_object* v___x_4267_; lean_object* v_toEnvExtension_4268_; lean_object* v_asyncMode_4269_; lean_object* v___x_4270_; lean_object* v_toEnvExtension_4271_; lean_object* v_asyncMode_4272_; lean_object* v___x_4273_; lean_object* v_toEnvExtension_4274_; lean_object* v_asyncMode_4275_; lean_object* v___x_4276_; lean_object* v_toEnvExtension_4277_; lean_object* v_asyncMode_4278_; lean_object* v___x_4279_; uint8_t v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v_s_4283_; lean_object* v___x_4284_; lean_object* v_s_4285_; lean_object* v_s_4286_; lean_object* v___x_4287_; lean_object* v_s_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; 
v___x_4264_ = l_Lean_Compiler_LCNF_baseExt;
v_toEnvExtension_4265_ = lean_ctor_get(v___x_4264_, 0);
v_asyncMode_4266_ = lean_ctor_get(v_toEnvExtension_4265_, 2);
v___x_4267_ = l_Lean_Compiler_LCNF_monoExt;
v_toEnvExtension_4268_ = lean_ctor_get(v___x_4267_, 0);
v_asyncMode_4269_ = lean_ctor_get(v_toEnvExtension_4268_, 2);
v___x_4270_ = l_Lean_Compiler_LCNF_impureSigExt;
v_toEnvExtension_4271_ = lean_ctor_get(v___x_4270_, 0);
v_asyncMode_4272_ = lean_ctor_get(v_toEnvExtension_4271_, 2);
v___x_4273_ = l_Lean_Compiler_LCNF_specExtension;
v_toEnvExtension_4274_ = lean_ctor_get(v___x_4273_, 0);
v_asyncMode_4275_ = lean_ctor_get(v_toEnvExtension_4274_, 2);
v___x_4276_ = l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt;
v_toEnvExtension_4277_ = lean_ctor_get(v___x_4276_, 0);
v_asyncMode_4278_ = lean_ctor_get(v_toEnvExtension_4277_, 2);
v___x_4279_ = lean_box(0);
v___x_4280_ = 0;
lean_inc_ref_n(v_env_4252_, 4);
v___x_4281_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4260_, v___x_4264_, v_env_4252_, v_asyncMode_4266_, v___x_4279_, v___x_4280_);
v___x_4282_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4260_, v___x_4267_, v_env_4252_, v_asyncMode_4269_, v___x_4279_, v___x_4280_);
v_s_4283_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0___redArg(v___x_4281_, v___f_4259_, v___y_4263_);
lean_dec(v___x_4281_);
v___x_4284_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4260_, v___x_4270_, v_env_4252_, v_asyncMode_4272_, v___x_4279_, v___x_4280_);
v_s_4285_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0___redArg(v___x_4282_, v___f_4259_, v_s_4283_);
lean_dec(v___x_4282_);
v_s_4286_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0___redArg(v___x_4284_, v___f_4258_, v_s_4285_);
lean_dec(v___x_4284_);
v___x_4287_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_4261_, v___x_4273_, v_env_4252_, v_asyncMode_4275_, v___x_4279_);
v_s_4288_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0___redArg(v___x_4287_, v___f_4257_, v_s_4286_);
lean_dec(v___x_4287_);
v___x_4289_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_4260_, v___x_4276_, v_env_4252_, v_asyncMode_4278_, v___x_4279_);
v___x_4290_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0___redArg(v___x_4289_, v___f_4256_, v_s_4288_);
lean_dec(v___x_4289_);
return v___x_4290_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledNames___boxed(lean_object* v_env_4298_, lean_object* v_lc_4299_){
_start:
{
lean_object* v_res_4300_; 
v_res_4300_ = l_Lean_ModuleUsage_compiledNames(v_env_4298_, v_lc_4299_);
lean_dec_ref(v_lc_4299_);
return v_res_4300_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0(lean_object* v_00_u03c3_4301_, lean_object* v_00_u03b2_4302_, lean_object* v_map_4303_, lean_object* v_f_4304_, lean_object* v_init_4305_){
_start:
{
lean_object* v___x_4306_; 
v___x_4306_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0___redArg(v_map_4303_, v_f_4304_, v_init_4305_);
return v___x_4306_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0___boxed(lean_object* v_00_u03c3_4307_, lean_object* v_00_u03b2_4308_, lean_object* v_map_4309_, lean_object* v_f_4310_, lean_object* v_init_4311_){
_start:
{
lean_object* v_res_4312_; 
v_res_4312_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0(v_00_u03c3_4307_, v_00_u03b2_4308_, v_map_4309_, v_f_4310_, v_init_4311_);
lean_dec_ref(v_map_4309_);
return v_res_4312_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0___redArg(lean_object* v_map_4313_, lean_object* v_f_4314_, lean_object* v_init_4315_){
_start:
{
lean_object* v___x_4316_; 
v___x_4316_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1___redArg(v_f_4314_, v_map_4313_, v_init_4315_);
return v___x_4316_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0___redArg___boxed(lean_object* v_map_4317_, lean_object* v_f_4318_, lean_object* v_init_4319_){
_start:
{
lean_object* v_res_4320_; 
v_res_4320_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0___redArg(v_map_4317_, v_f_4318_, v_init_4319_);
lean_dec_ref(v_map_4317_);
return v_res_4320_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0(lean_object* v_00_u03c3_4321_, lean_object* v_00_u03b2_4322_, lean_object* v_map_4323_, lean_object* v_f_4324_, lean_object* v_init_4325_){
_start:
{
lean_object* v___x_4326_; 
v___x_4326_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1___redArg(v_f_4324_, v_map_4323_, v_init_4325_);
return v___x_4326_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0___boxed(lean_object* v_00_u03c3_4327_, lean_object* v_00_u03b2_4328_, lean_object* v_map_4329_, lean_object* v_f_4330_, lean_object* v_init_4331_){
_start:
{
lean_object* v_res_4332_; 
v_res_4332_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0(v_00_u03c3_4327_, v_00_u03b2_4328_, v_map_4329_, v_f_4330_, v_init_4331_);
lean_dec_ref(v_map_4329_);
return v_res_4332_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1(lean_object* v_00_u03c3_4333_, lean_object* v_00_u03b1_4334_, lean_object* v_00_u03b2_4335_, lean_object* v_f_4336_, lean_object* v_x_4337_, lean_object* v_x_4338_){
_start:
{
lean_object* v___x_4339_; 
v___x_4339_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1___redArg(v_f_4336_, v_x_4337_, v_x_4338_);
return v___x_4339_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_4340_, lean_object* v_00_u03b1_4341_, lean_object* v_00_u03b2_4342_, lean_object* v_f_4343_, lean_object* v_x_4344_, lean_object* v_x_4345_){
_start:
{
lean_object* v_res_4346_; 
v_res_4346_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1(v_00_u03c3_4340_, v_00_u03b1_4341_, v_00_u03b2_4342_, v_f_4343_, v_x_4344_, v_x_4345_);
lean_dec_ref(v_x_4344_);
return v_res_4346_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_4347_, lean_object* v_00_u03b2_4348_, lean_object* v_00_u03c3_4349_, lean_object* v_f_4350_, lean_object* v_as_4351_, size_t v_i_4352_, size_t v_stop_4353_, lean_object* v_b_4354_){
_start:
{
lean_object* v___x_4355_; 
v___x_4355_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__4___redArg(v_f_4350_, v_as_4351_, v_i_4352_, v_stop_4353_, v_b_4354_);
return v___x_4355_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_4356_, lean_object* v_00_u03b2_4357_, lean_object* v_00_u03c3_4358_, lean_object* v_f_4359_, lean_object* v_as_4360_, lean_object* v_i_4361_, lean_object* v_stop_4362_, lean_object* v_b_4363_){
_start:
{
size_t v_i_boxed_4364_; size_t v_stop_boxed_4365_; lean_object* v_res_4366_; 
v_i_boxed_4364_ = lean_unbox_usize(v_i_4361_);
lean_dec(v_i_4361_);
v_stop_boxed_4365_ = lean_unbox_usize(v_stop_4362_);
lean_dec(v_stop_4362_);
v_res_4366_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__4(v_00_u03b1_4356_, v_00_u03b2_4357_, v_00_u03c3_4358_, v_f_4359_, v_as_4360_, v_i_boxed_4364_, v_stop_boxed_4365_, v_b_4363_);
lean_dec_ref(v_as_4360_);
return v_res_4366_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03c3_4367_, lean_object* v_00_u03b1_4368_, lean_object* v_00_u03b2_4369_, lean_object* v_f_4370_, lean_object* v_keys_4371_, lean_object* v_vals_4372_, lean_object* v_heq_4373_, lean_object* v_i_4374_, lean_object* v_acc_4375_){
_start:
{
lean_object* v___x_4376_; 
v___x_4376_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__5___redArg(v_f_4370_, v_keys_4371_, v_vals_4372_, v_i_4374_, v_acc_4375_);
return v___x_4376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03c3_4377_, lean_object* v_00_u03b1_4378_, lean_object* v_00_u03b2_4379_, lean_object* v_f_4380_, lean_object* v_keys_4381_, lean_object* v_vals_4382_, lean_object* v_heq_4383_, lean_object* v_i_4384_, lean_object* v_acc_4385_){
_start:
{
lean_object* v_res_4386_; 
v_res_4386_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ModuleUsage_compiledNames_spec__0_spec__0_spec__1_spec__5(v_00_u03c3_4377_, v_00_u03b1_4378_, v_00_u03b2_4379_, v_f_4380_, v_keys_4381_, v_vals_4382_, v_heq_4383_, v_i_4384_, v_acc_4385_);
lean_dec_ref(v_vals_4382_);
lean_dec_ref(v_keys_4381_);
return v_res_4386_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_entriesEnc___lam__0(lean_object* v___y_4387_, lean_object* v___y_4388_){
_start:
{
lean_object* v_e_4389_; lean_object* v_tys_4390_; lean_object* v_ms_4391_; lean_object* v___x_4393_; uint8_t v_isShared_4394_; uint8_t v_isSharedCheck_4399_; 
v_e_4389_ = lean_ctor_get(v___y_4387_, 0);
v_tys_4390_ = lean_ctor_get(v___y_4387_, 1);
v_ms_4391_ = lean_ctor_get(v___y_4387_, 2);
v_isSharedCheck_4399_ = !lean_is_exclusive(v___y_4387_);
if (v_isSharedCheck_4399_ == 0)
{
v___x_4393_ = v___y_4387_;
v_isShared_4394_ = v_isSharedCheck_4399_;
goto v_resetjp_4392_;
}
else
{
lean_inc(v_ms_4391_);
lean_inc(v_tys_4390_);
lean_inc(v_e_4389_);
lean_dec(v___y_4387_);
v___x_4393_ = lean_box(0);
v_isShared_4394_ = v_isSharedCheck_4399_;
goto v_resetjp_4392_;
}
v_resetjp_4392_:
{
lean_object* v___x_4395_; lean_object* v___x_4397_; 
v___x_4395_ = lean_array_push(v_tys_4390_, v___y_4388_);
if (v_isShared_4394_ == 0)
{
lean_ctor_set(v___x_4393_, 1, v___x_4395_);
v___x_4397_ = v___x_4393_;
goto v_reusejp_4396_;
}
else
{
lean_object* v_reuseFailAlloc_4398_; 
v_reuseFailAlloc_4398_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4398_, 0, v_e_4389_);
lean_ctor_set(v_reuseFailAlloc_4398_, 1, v___x_4395_);
lean_ctor_set(v_reuseFailAlloc_4398_, 2, v_ms_4391_);
v___x_4397_ = v_reuseFailAlloc_4398_;
goto v_reusejp_4396_;
}
v_reusejp_4396_:
{
return v___x_4397_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_entriesEnc___lam__1(lean_object* v_s_4401_, lean_object* v_i_4402_){
_start:
{
lean_object* v_e_4403_; lean_object* v_tys_4404_; lean_object* v_ms_4405_; lean_object* v___x_4407_; uint8_t v_isShared_4408_; uint8_t v_isSharedCheck_4414_; 
v_e_4403_ = lean_ctor_get(v_s_4401_, 0);
v_tys_4404_ = lean_ctor_get(v_s_4401_, 1);
v_ms_4405_ = lean_ctor_get(v_s_4401_, 2);
v_isSharedCheck_4414_ = !lean_is_exclusive(v_s_4401_);
if (v_isSharedCheck_4414_ == 0)
{
v___x_4407_ = v_s_4401_;
v_isShared_4408_ = v_isSharedCheck_4414_;
goto v_resetjp_4406_;
}
else
{
lean_inc(v_ms_4405_);
lean_inc(v_tys_4404_);
lean_inc(v_e_4403_);
lean_dec(v_s_4401_);
v___x_4407_ = lean_box(0);
v_isShared_4408_ = v_isSharedCheck_4414_;
goto v_resetjp_4406_;
}
v_resetjp_4406_:
{
lean_object* v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4412_; 
v___x_4409_ = ((lean_object*)(l_Lean_ModuleUsage_entriesEnc___lam__1___closed__0));
v___x_4410_ = l_Lean_ModuleUsage_Enc_opt___redArg(v_e_4403_, v_i_4402_, v___x_4409_);
if (v_isShared_4408_ == 0)
{
lean_ctor_set(v___x_4407_, 0, v___x_4410_);
v___x_4412_ = v___x_4407_;
goto v_reusejp_4411_;
}
else
{
lean_object* v_reuseFailAlloc_4413_; 
v_reuseFailAlloc_4413_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4413_, 0, v___x_4410_);
lean_ctor_set(v_reuseFailAlloc_4413_, 1, v_tys_4404_);
lean_ctor_set(v_reuseFailAlloc_4413_, 2, v_ms_4405_);
v___x_4412_ = v_reuseFailAlloc_4413_;
goto v_reusejp_4411_;
}
v_reusejp_4411_:
{
return v___x_4412_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1_spec__2___redArg(lean_object* v_a_4415_, lean_object* v_fallback_4416_, lean_object* v_x_4417_){
_start:
{
if (lean_obj_tag(v_x_4417_) == 0)
{
lean_inc(v_fallback_4416_);
return v_fallback_4416_;
}
else
{
lean_object* v_key_4418_; lean_object* v_value_4419_; lean_object* v_tail_4420_; uint8_t v___x_4421_; 
v_key_4418_ = lean_ctor_get(v_x_4417_, 0);
v_value_4419_ = lean_ctor_get(v_x_4417_, 1);
v_tail_4420_ = lean_ctor_get(v_x_4417_, 2);
v___x_4421_ = lean_name_eq(v_key_4418_, v_a_4415_);
if (v___x_4421_ == 0)
{
v_x_4417_ = v_tail_4420_;
goto _start;
}
else
{
lean_inc(v_value_4419_);
return v_value_4419_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1_spec__2___redArg___boxed(lean_object* v_a_4423_, lean_object* v_fallback_4424_, lean_object* v_x_4425_){
_start:
{
lean_object* v_res_4426_; 
v_res_4426_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1_spec__2___redArg(v_a_4423_, v_fallback_4424_, v_x_4425_);
lean_dec(v_x_4425_);
lean_dec(v_fallback_4424_);
lean_dec(v_a_4423_);
return v_res_4426_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1___redArg(lean_object* v_m_4427_, lean_object* v_a_4428_, lean_object* v_fallback_4429_){
_start:
{
lean_object* v_buckets_4430_; lean_object* v___x_4431_; uint64_t v___y_4433_; 
v_buckets_4430_ = lean_ctor_get(v_m_4427_, 1);
v___x_4431_ = lean_array_get_size(v_buckets_4430_);
if (lean_obj_tag(v_a_4428_) == 0)
{
uint64_t v___x_4447_; 
v___x_4447_ = 1723ULL;
v___y_4433_ = v___x_4447_;
goto v___jp_4432_;
}
else
{
uint64_t v_hash_4448_; 
v_hash_4448_ = lean_ctor_get_uint64(v_a_4428_, sizeof(void*)*2);
v___y_4433_ = v_hash_4448_;
goto v___jp_4432_;
}
v___jp_4432_:
{
uint64_t v___x_4434_; uint64_t v___x_4435_; uint64_t v_fold_4436_; uint64_t v___x_4437_; uint64_t v___x_4438_; uint64_t v___x_4439_; size_t v___x_4440_; size_t v___x_4441_; size_t v___x_4442_; size_t v___x_4443_; size_t v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; 
v___x_4434_ = 32ULL;
v___x_4435_ = lean_uint64_shift_right(v___y_4433_, v___x_4434_);
v_fold_4436_ = lean_uint64_xor(v___y_4433_, v___x_4435_);
v___x_4437_ = 16ULL;
v___x_4438_ = lean_uint64_shift_right(v_fold_4436_, v___x_4437_);
v___x_4439_ = lean_uint64_xor(v_fold_4436_, v___x_4438_);
v___x_4440_ = lean_uint64_to_usize(v___x_4439_);
v___x_4441_ = lean_usize_of_nat(v___x_4431_);
v___x_4442_ = ((size_t)1ULL);
v___x_4443_ = lean_usize_sub(v___x_4441_, v___x_4442_);
v___x_4444_ = lean_usize_land(v___x_4440_, v___x_4443_);
v___x_4445_ = lean_array_uget_borrowed(v_buckets_4430_, v___x_4444_);
v___x_4446_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1_spec__2___redArg(v_a_4428_, v_fallback_4429_, v___x_4445_);
return v___x_4446_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1___redArg___boxed(lean_object* v_m_4449_, lean_object* v_a_4450_, lean_object* v_fallback_4451_){
_start:
{
lean_object* v_res_4452_; 
v_res_4452_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1___redArg(v_m_4449_, v_a_4450_, v_fallback_4451_);
lean_dec(v_fallback_4451_);
lean_dec(v_a_4450_);
lean_dec_ref(v_m_4449_);
return v_res_4452_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_4453_, lean_object* v_vals_4454_, lean_object* v_i_4455_, lean_object* v_k_4456_){
_start:
{
lean_object* v___x_4457_; uint8_t v___x_4458_; 
v___x_4457_ = lean_array_get_size(v_keys_4453_);
v___x_4458_ = lean_nat_dec_lt(v_i_4455_, v___x_4457_);
if (v___x_4458_ == 0)
{
lean_object* v___x_4459_; 
lean_dec(v_i_4455_);
v___x_4459_ = lean_box(0);
return v___x_4459_;
}
else
{
lean_object* v_k_x27_4460_; uint8_t v___x_4461_; 
v_k_x27_4460_ = lean_array_fget_borrowed(v_keys_4453_, v_i_4455_);
v___x_4461_ = lean_name_eq(v_k_4456_, v_k_x27_4460_);
if (v___x_4461_ == 0)
{
lean_object* v___x_4462_; lean_object* v___x_4463_; 
v___x_4462_ = lean_unsigned_to_nat(1u);
v___x_4463_ = lean_nat_add(v_i_4455_, v___x_4462_);
lean_dec(v_i_4455_);
v_i_4455_ = v___x_4463_;
goto _start;
}
else
{
lean_object* v___x_4465_; lean_object* v___x_4466_; 
v___x_4465_ = lean_array_fget_borrowed(v_vals_4454_, v_i_4455_);
lean_dec(v_i_4455_);
lean_inc(v___x_4465_);
v___x_4466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4466_, 0, v___x_4465_);
return v___x_4466_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_4467_, lean_object* v_vals_4468_, lean_object* v_i_4469_, lean_object* v_k_4470_){
_start:
{
lean_object* v_res_4471_; 
v_res_4471_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0_spec__1___redArg(v_keys_4467_, v_vals_4468_, v_i_4469_, v_k_4470_);
lean_dec(v_k_4470_);
lean_dec_ref(v_vals_4468_);
lean_dec_ref(v_keys_4467_);
return v_res_4471_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0___redArg(lean_object* v_x_4472_, size_t v_x_4473_, lean_object* v_x_4474_){
_start:
{
if (lean_obj_tag(v_x_4472_) == 0)
{
lean_object* v_es_4475_; lean_object* v___x_4476_; size_t v___x_4477_; size_t v___x_4478_; lean_object* v_j_4479_; lean_object* v___x_4480_; 
v_es_4475_ = lean_ctor_get(v_x_4472_, 0);
v___x_4476_ = lean_box(2);
v___x_4477_ = ((size_t)31ULL);
v___x_4478_ = lean_usize_land(v_x_4473_, v___x_4477_);
v_j_4479_ = lean_usize_to_nat(v___x_4478_);
v___x_4480_ = lean_array_get_borrowed(v___x_4476_, v_es_4475_, v_j_4479_);
lean_dec(v_j_4479_);
switch(lean_obj_tag(v___x_4480_))
{
case 0:
{
lean_object* v_key_4481_; lean_object* v_val_4482_; uint8_t v___x_4483_; 
v_key_4481_ = lean_ctor_get(v___x_4480_, 0);
v_val_4482_ = lean_ctor_get(v___x_4480_, 1);
v___x_4483_ = lean_name_eq(v_x_4474_, v_key_4481_);
if (v___x_4483_ == 0)
{
lean_object* v___x_4484_; 
v___x_4484_ = lean_box(0);
return v___x_4484_;
}
else
{
lean_object* v___x_4485_; 
lean_inc(v_val_4482_);
v___x_4485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4485_, 0, v_val_4482_);
return v___x_4485_;
}
}
case 1:
{
lean_object* v_node_4486_; size_t v___x_4487_; size_t v___x_4488_; 
v_node_4486_ = lean_ctor_get(v___x_4480_, 0);
v___x_4487_ = ((size_t)5ULL);
v___x_4488_ = lean_usize_shift_right(v_x_4473_, v___x_4487_);
v_x_4472_ = v_node_4486_;
v_x_4473_ = v___x_4488_;
goto _start;
}
default: 
{
lean_object* v___x_4490_; 
v___x_4490_ = lean_box(0);
return v___x_4490_;
}
}
}
else
{
lean_object* v_ks_4491_; lean_object* v_vs_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; 
v_ks_4491_ = lean_ctor_get(v_x_4472_, 0);
v_vs_4492_ = lean_ctor_get(v_x_4472_, 1);
v___x_4493_ = lean_unsigned_to_nat(0u);
v___x_4494_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0_spec__1___redArg(v_ks_4491_, v_vs_4492_, v___x_4493_, v_x_4474_);
return v___x_4494_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0___redArg___boxed(lean_object* v_x_4495_, lean_object* v_x_4496_, lean_object* v_x_4497_){
_start:
{
size_t v_x_574__boxed_4498_; lean_object* v_res_4499_; 
v_x_574__boxed_4498_ = lean_unbox_usize(v_x_4496_);
lean_dec(v_x_4496_);
v_res_4499_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0___redArg(v_x_4495_, v_x_574__boxed_4498_, v_x_4497_);
lean_dec(v_x_4497_);
lean_dec_ref(v_x_4495_);
return v_res_4499_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0___redArg(lean_object* v_x_4500_, lean_object* v_x_4501_){
_start:
{
uint64_t v___y_4503_; 
if (lean_obj_tag(v_x_4501_) == 0)
{
uint64_t v___x_4506_; 
v___x_4506_ = 1723ULL;
v___y_4503_ = v___x_4506_;
goto v___jp_4502_;
}
else
{
uint64_t v_hash_4507_; 
v_hash_4507_ = lean_ctor_get_uint64(v_x_4501_, sizeof(void*)*2);
v___y_4503_ = v_hash_4507_;
goto v___jp_4502_;
}
v___jp_4502_:
{
size_t v___x_4504_; lean_object* v___x_4505_; 
v___x_4504_ = lean_uint64_to_usize(v___y_4503_);
v___x_4505_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0___redArg(v_x_4500_, v___x_4504_, v_x_4501_);
return v___x_4505_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0___redArg___boxed(lean_object* v_x_4508_, lean_object* v_x_4509_){
_start:
{
lean_object* v_res_4510_; 
v_res_4510_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0___redArg(v_x_4508_, v_x_4509_);
lean_dec(v_x_4509_);
lean_dec_ref(v_x_4508_);
return v_res_4510_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_entriesEnc_spec__2(lean_object* v_as_4511_, size_t v_i_4512_, size_t v_stop_4513_, lean_object* v_b_4514_){
_start:
{
uint8_t v___x_4515_; 
v___x_4515_ = lean_usize_dec_eq(v_i_4512_, v_stop_4513_);
if (v___x_4515_ == 0)
{
lean_object* v___x_4516_; lean_object* v___x_4517_; size_t v___x_4518_; size_t v___x_4519_; 
v___x_4516_ = lean_array_uget_borrowed(v_as_4511_, v_i_4512_);
lean_inc(v___x_4516_);
v___x_4517_ = l_Lean_ModuleUsage_IREnc_decl(v_b_4514_, v___x_4516_);
v___x_4518_ = ((size_t)1ULL);
v___x_4519_ = lean_usize_add(v_i_4512_, v___x_4518_);
v_i_4512_ = v___x_4519_;
v_b_4514_ = v___x_4517_;
goto _start;
}
else
{
return v_b_4514_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_entriesEnc_spec__2___boxed(lean_object* v_as_4521_, lean_object* v_i_4522_, lean_object* v_stop_4523_, lean_object* v_b_4524_){
_start:
{
size_t v_i_boxed_4525_; size_t v_stop_boxed_4526_; lean_object* v_res_4527_; 
v_i_boxed_4525_ = lean_unbox_usize(v_i_4522_);
lean_dec(v_i_4522_);
v_stop_boxed_4526_ = lean_unbox_usize(v_stop_4523_);
lean_dec(v_stop_4523_);
v_res_4527_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_entriesEnc_spec__2(v_as_4521_, v_i_boxed_4525_, v_stop_boxed_4526_, v_b_4524_);
lean_dec_ref(v_as_4521_);
return v_res_4527_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_entriesEnc(lean_object* v_env_4539_, lean_object* v_lc_4540_, lean_object* v_x_4541_, lean_object* v_s_4542_){
_start:
{
lean_object* v___x_4543_; lean_object* v_toEnvExtension_4544_; lean_object* v_asyncMode_4545_; lean_object* v___x_4546_; lean_object* v_toEnvExtension_4547_; lean_object* v_asyncMode_4548_; lean_object* v___x_4549_; lean_object* v_toEnvExtension_4550_; lean_object* v_asyncMode_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; uint8_t v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v_ir_4557_; lean_object* v___x_4558_; lean_object* v_s_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v_s_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v_s_4566_; lean_object* v_e_4567_; lean_object* v_tys_4568_; lean_object* v_ms_4569_; lean_object* v___x_4571_; uint8_t v_isShared_4572_; uint8_t v_isSharedCheck_4621_; 
v___x_4543_ = l_Lean_Compiler_LCNF_baseExt;
v_toEnvExtension_4544_ = lean_ctor_get(v___x_4543_, 0);
v_asyncMode_4545_ = lean_ctor_get(v_toEnvExtension_4544_, 2);
v___x_4546_ = l_Lean_Compiler_LCNF_monoExt;
v_toEnvExtension_4547_ = lean_ctor_get(v___x_4546_, 0);
v_asyncMode_4548_ = lean_ctor_get(v_toEnvExtension_4547_, 2);
v___x_4549_ = l_Lean_Compiler_LCNF_impureSigExt;
v_toEnvExtension_4550_ = lean_ctor_get(v___x_4549_, 0);
v_asyncMode_4551_ = lean_ctor_get(v_toEnvExtension_4550_, 2);
v___x_4552_ = lean_obj_once(&l_Lean_ModuleUsage_compiledNames___closed__4, &l_Lean_ModuleUsage_compiledNames___closed__4_once, _init_l_Lean_ModuleUsage_compiledNames___closed__4);
v___x_4553_ = lean_box(0);
v___x_4554_ = 0;
lean_inc_ref_n(v_env_4539_, 3);
v___x_4555_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4552_, v___x_4543_, v_env_4539_, v_asyncMode_4545_, v___x_4553_, v___x_4554_);
v___x_4556_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0___redArg(v___x_4555_, v_x_4541_);
lean_dec(v___x_4555_);
v_ir_4557_ = lean_ctor_get(v_lc_4540_, 0);
v___x_4558_ = ((lean_object*)(l_Lean_ModuleUsage_entriesEnc___closed__0));
v_s_4559_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v_s_4542_, v___x_4556_, v___x_4558_);
v___x_4560_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4552_, v___x_4546_, v_env_4539_, v_asyncMode_4548_, v___x_4553_, v___x_4554_);
v___x_4561_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0___redArg(v___x_4560_, v_x_4541_);
lean_dec(v___x_4560_);
v_s_4562_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v_s_4559_, v___x_4561_, v___x_4558_);
v___x_4563_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4552_, v___x_4549_, v_env_4539_, v_asyncMode_4551_, v___x_4553_, v___x_4554_);
v___x_4564_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0___redArg(v___x_4563_, v_x_4541_);
lean_dec(v___x_4563_);
v___x_4565_ = ((lean_object*)(l_Lean_ModuleUsage_entriesEnc___closed__1));
v_s_4566_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v_s_4562_, v___x_4564_, v___x_4565_);
v_e_4567_ = lean_ctor_get(v_s_4566_, 0);
v_tys_4568_ = lean_ctor_get(v_s_4566_, 1);
v_ms_4569_ = lean_ctor_get(v_s_4566_, 2);
v_isSharedCheck_4621_ = !lean_is_exclusive(v_s_4566_);
if (v_isSharedCheck_4621_ == 0)
{
v___x_4571_ = v_s_4566_;
v_isShared_4572_ = v_isSharedCheck_4621_;
goto v_resetjp_4570_;
}
else
{
lean_inc(v_ms_4569_);
lean_inc(v_tys_4568_);
lean_inc(v_e_4567_);
lean_dec(v_s_4566_);
v___x_4571_ = lean_box(0);
v_isShared_4572_ = v_isSharedCheck_4621_;
goto v_resetjp_4570_;
}
v_resetjp_4570_:
{
lean_object* v___f_4573_; lean_object* v___f_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___y_4578_; lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v_ds_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4615_; 
v___f_4573_ = ((lean_object*)(l_Lean_ModuleUsage_entriesEnc___closed__2));
v___f_4574_ = ((lean_object*)(l_Lean_ModuleUsage_entriesEnc___closed__3));
v___x_4575_ = l_Lean_Compiler_LCNF_instInhabitedSpecState_default;
v___x_4576_ = l_Lean_instInhabitedExpr;
v___x_4609_ = lean_unsigned_to_nat(0u);
v___x_4610_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00Lean_ModuleUsage_LocalCompiled_ofEnv_spec__1_spec__3___lam__0___closed__0));
v_ds_4611_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1___redArg(v_ir_4557_, v_x_4541_, v___x_4610_);
v___x_4612_ = lean_array_get_size(v_ds_4611_);
v___x_4613_ = l_Lean_ModuleUsage_Enc_nat(v_e_4567_, v___x_4612_);
if (v_isShared_4572_ == 0)
{
lean_ctor_set(v___x_4571_, 0, v___x_4613_);
v___x_4615_ = v___x_4571_;
goto v_reusejp_4614_;
}
else
{
lean_object* v_reuseFailAlloc_4620_; 
v_reuseFailAlloc_4620_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4620_, 0, v___x_4613_);
lean_ctor_set(v_reuseFailAlloc_4620_, 1, v_tys_4568_);
lean_ctor_set(v_reuseFailAlloc_4620_, 2, v_ms_4569_);
v___x_4615_ = v_reuseFailAlloc_4620_;
goto v_reusejp_4614_;
}
v___jp_4577_:
{
lean_object* v___x_4579_; lean_object* v_toEnvExtension_4580_; lean_object* v_asyncMode_4581_; lean_object* v___x_4582_; lean_object* v_toEnvExtension_4583_; lean_object* v_asyncMode_4584_; lean_object* v___x_4585_; lean_object* v_toEnvExtension_4586_; lean_object* v_asyncMode_4587_; lean_object* v___x_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v_s_4594_; lean_object* v___x_4595_; lean_object* v_s_4596_; lean_object* v_s_4597_; lean_object* v___x_4598_; lean_object* v_s_4599_; lean_object* v___x_4600_; lean_object* v_s_4601_; uint8_t v___x_4602_; lean_object* v___x_4603_; lean_object* v_s_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; 
v___x_4579_ = l_Lean_Compiler_LCNF_specExtension;
v_toEnvExtension_4580_ = lean_ctor_get(v___x_4579_, 0);
v_asyncMode_4581_ = lean_ctor_get(v_toEnvExtension_4580_, 2);
v___x_4582_ = l_Lean_Compiler_LCNF_UnreachableBranches_functionSummariesExt;
v_toEnvExtension_4583_ = lean_ctor_get(v___x_4582_, 0);
v_asyncMode_4584_ = lean_ctor_get(v_toEnvExtension_4583_, 2);
v___x_4585_ = l_Lean_Compiler_LCNF_monoTypeExt;
v_toEnvExtension_4586_ = lean_ctor_get(v___x_4585_, 0);
v_asyncMode_4587_ = lean_ctor_get(v_toEnvExtension_4586_, 2);
lean_inc_ref_n(v_env_4539_, 6);
v___x_4588_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_4575_, v___x_4579_, v_env_4539_, v_asyncMode_4581_, v___x_4553_);
v___x_4589_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0___redArg(v___x_4588_, v_x_4541_);
lean_dec(v___x_4588_);
v___x_4590_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_4552_, v___x_4582_, v_env_4539_, v_asyncMode_4584_, v___x_4553_);
v___x_4591_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0___redArg(v___x_4590_, v_x_4541_);
lean_dec(v___x_4590_);
lean_inc_n(v_x_4541_, 4);
v___x_4592_ = l_Lean_Compiler_LCNF_findTrivialStructureInfo_x3f(v_env_4539_, v_x_4541_);
v___x_4593_ = ((lean_object*)(l_Lean_ModuleUsage_entriesEnc___closed__4));
v_s_4594_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v___y_4578_, v___x_4589_, v___x_4593_);
v___x_4595_ = ((lean_object*)(l_Lean_ModuleUsage_entriesEnc___closed__5));
v_s_4596_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v_s_4594_, v___x_4591_, v___x_4595_);
v_s_4597_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v_s_4596_, v___x_4592_, v___f_4574_);
v___x_4598_ = l_Lean_Compiler_LCNF_findTrivialImpureStructureInfo_x3f(v_env_4539_, v_x_4541_);
v_s_4599_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v_s_4597_, v___x_4598_, v___f_4574_);
v___x_4600_ = l_Lean_Compiler_LCNF_findImpureType_x3f(v_env_4539_, v_x_4541_);
v_s_4601_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v_s_4599_, v___x_4600_, v___f_4573_);
v___x_4602_ = 0;
v___x_4603_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_4576_, v___x_4585_, v_env_4539_, v_x_4541_, v_asyncMode_4587_, v___x_4602_);
v_s_4604_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v_s_4601_, v___x_4603_, v___f_4573_);
v___x_4605_ = l_Lean_Compiler_LCNF_findCtorLayout_x3f(v_env_4539_, v_x_4541_);
v___x_4606_ = ((lean_object*)(l_Lean_ModuleUsage_entriesEnc___closed__6));
v___x_4607_ = l_Lean_ModuleUsage_CEnc_opt___redArg(v_s_4604_, v___x_4605_, v___x_4606_);
v___x_4608_ = l_Lean_ModuleUsage_CEnc_flushTys(v___x_4607_);
return v___x_4608_;
}
v_reusejp_4614_:
{
uint8_t v___x_4616_; 
v___x_4616_ = lean_nat_dec_lt(v___x_4609_, v___x_4612_);
if (v___x_4616_ == 0)
{
lean_dec(v_ds_4611_);
v___y_4578_ = v___x_4615_;
goto v___jp_4577_;
}
else
{
size_t v___x_4617_; size_t v___x_4618_; lean_object* v___x_4619_; 
v___x_4617_ = ((size_t)0ULL);
v___x_4618_ = lean_usize_of_nat(v___x_4612_);
v___x_4619_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_entriesEnc_spec__2(v_ds_4611_, v___x_4617_, v___x_4618_, v___x_4615_);
lean_dec(v_ds_4611_);
v___y_4578_ = v___x_4619_;
goto v___jp_4577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_entriesEnc___boxed(lean_object* v_env_4622_, lean_object* v_lc_4623_, lean_object* v_x_4624_, lean_object* v_s_4625_){
_start:
{
lean_object* v_res_4626_; 
v_res_4626_ = l_Lean_ModuleUsage_entriesEnc(v_env_4622_, v_lc_4623_, v_x_4624_, v_s_4625_);
lean_dec_ref(v_lc_4623_);
return v_res_4626_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0(lean_object* v_00_u03b2_4627_, lean_object* v_x_4628_, lean_object* v_x_4629_){
_start:
{
lean_object* v___x_4630_; 
v___x_4630_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0___redArg(v_x_4628_, v_x_4629_);
return v___x_4630_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0___boxed(lean_object* v_00_u03b2_4631_, lean_object* v_x_4632_, lean_object* v_x_4633_){
_start:
{
lean_object* v_res_4634_; 
v_res_4634_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0(v_00_u03b2_4631_, v_x_4632_, v_x_4633_);
lean_dec(v_x_4633_);
lean_dec_ref(v_x_4632_);
return v_res_4634_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1(lean_object* v_00_u03b2_4635_, lean_object* v_m_4636_, lean_object* v_a_4637_, lean_object* v_fallback_4638_){
_start:
{
lean_object* v___x_4639_; 
v___x_4639_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1___redArg(v_m_4636_, v_a_4637_, v_fallback_4638_);
return v___x_4639_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1___boxed(lean_object* v_00_u03b2_4640_, lean_object* v_m_4641_, lean_object* v_a_4642_, lean_object* v_fallback_4643_){
_start:
{
lean_object* v_res_4644_; 
v_res_4644_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1(v_00_u03b2_4640_, v_m_4641_, v_a_4642_, v_fallback_4643_);
lean_dec(v_fallback_4643_);
lean_dec(v_a_4642_);
lean_dec_ref(v_m_4641_);
return v_res_4644_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0(lean_object* v_00_u03b2_4645_, lean_object* v_x_4646_, size_t v_x_4647_, lean_object* v_x_4648_){
_start:
{
lean_object* v___x_4649_; 
v___x_4649_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0___redArg(v_x_4646_, v_x_4647_, v_x_4648_);
return v___x_4649_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4650_, lean_object* v_x_4651_, lean_object* v_x_4652_, lean_object* v_x_4653_){
_start:
{
size_t v_x_799__boxed_4654_; lean_object* v_res_4655_; 
v_x_799__boxed_4654_ = lean_unbox_usize(v_x_4652_);
lean_dec(v_x_4652_);
v_res_4655_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0(v_00_u03b2_4650_, v_x_4651_, v_x_799__boxed_4654_, v_x_4653_);
lean_dec(v_x_4653_);
lean_dec_ref(v_x_4651_);
return v_res_4655_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1_spec__2(lean_object* v_00_u03b2_4656_, lean_object* v_a_4657_, lean_object* v_fallback_4658_, lean_object* v_x_4659_){
_start:
{
lean_object* v___x_4660_; 
v___x_4660_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1_spec__2___redArg(v_a_4657_, v_fallback_4658_, v_x_4659_);
return v___x_4660_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1_spec__2___boxed(lean_object* v_00_u03b2_4661_, lean_object* v_a_4662_, lean_object* v_fallback_4663_, lean_object* v_x_4664_){
_start:
{
lean_object* v_res_4665_; 
v_res_4665_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_ModuleUsage_entriesEnc_spec__1_spec__2(v_00_u03b2_4661_, v_a_4662_, v_fallback_4663_, v_x_4664_);
lean_dec(v_x_4664_);
lean_dec(v_fallback_4663_);
lean_dec(v_a_4662_);
return v_res_4665_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_4666_, lean_object* v_keys_4667_, lean_object* v_vals_4668_, lean_object* v_heq_4669_, lean_object* v_i_4670_, lean_object* v_k_4671_){
_start:
{
lean_object* v___x_4672_; 
v___x_4672_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0_spec__1___redArg(v_keys_4667_, v_vals_4668_, v_i_4670_, v_k_4671_);
return v___x_4672_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_4673_, lean_object* v_keys_4674_, lean_object* v_vals_4675_, lean_object* v_heq_4676_, lean_object* v_i_4677_, lean_object* v_k_4678_){
_start:
{
lean_object* v_res_4679_; 
v_res_4679_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ModuleUsage_entriesEnc_spec__0_spec__0_spec__1(v_00_u03b2_4673_, v_keys_4674_, v_vals_4675_, v_heq_4676_, v_i_4677_, v_k_4678_);
lean_dec(v_k_4678_);
lean_dec_ref(v_vals_4675_);
lean_dec_ref(v_keys_4674_);
return v_res_4679_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledEnc(lean_object* v_env_4680_, lean_object* v_lc_4681_, lean_object* v_x_4682_, lean_object* v_s_4683_){
_start:
{
lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v_e_4687_; lean_object* v_tys_4688_; lean_object* v_ms_4689_; lean_object* v___x_4691_; uint8_t v_isShared_4692_; uint8_t v_isSharedCheck_4698_; 
lean_inc_n(v_x_4682_, 2);
lean_inc_ref_n(v_env_4680_, 2);
v___x_4684_ = l_Lean_ModuleUsage_attrsEnc(v_env_4680_, v_lc_4681_, v_x_4682_, v_s_4683_);
v___x_4685_ = l_Lean_ModuleUsage_CEnc_flushTys(v___x_4684_);
v___x_4686_ = l_Lean_ModuleUsage_entriesEnc(v_env_4680_, v_lc_4681_, v_x_4682_, v___x_4685_);
v_e_4687_ = lean_ctor_get(v___x_4686_, 0);
v_tys_4688_ = lean_ctor_get(v___x_4686_, 1);
v_ms_4689_ = lean_ctor_get(v___x_4686_, 2);
v_isSharedCheck_4698_ = !lean_is_exclusive(v___x_4686_);
if (v_isSharedCheck_4698_ == 0)
{
v___x_4691_ = v___x_4686_;
v_isShared_4692_ = v_isSharedCheck_4698_;
goto v_resetjp_4690_;
}
else
{
lean_inc(v_ms_4689_);
lean_inc(v_tys_4688_);
lean_inc(v_e_4687_);
lean_dec(v___x_4686_);
v___x_4691_ = lean_box(0);
v_isShared_4692_ = v_isSharedCheck_4698_;
goto v_resetjp_4690_;
}
v_resetjp_4690_:
{
uint8_t v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4696_; 
v___x_4693_ = l_Lean_isDeclMeta(v_env_4680_, v_x_4682_);
lean_dec(v_x_4682_);
v___x_4694_ = l_Lean_ModuleUsage_Enc_bool(v_e_4687_, v___x_4693_);
if (v_isShared_4692_ == 0)
{
lean_ctor_set(v___x_4691_, 0, v___x_4694_);
v___x_4696_ = v___x_4691_;
goto v_reusejp_4695_;
}
else
{
lean_object* v_reuseFailAlloc_4697_; 
v_reuseFailAlloc_4697_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4697_, 0, v___x_4694_);
lean_ctor_set(v_reuseFailAlloc_4697_, 1, v_tys_4688_);
lean_ctor_set(v_reuseFailAlloc_4697_, 2, v_ms_4689_);
v___x_4696_ = v_reuseFailAlloc_4697_;
goto v_reusejp_4695_;
}
v_reusejp_4695_:
{
return v___x_4696_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_compiledEnc___boxed(lean_object* v_env_4699_, lean_object* v_lc_4700_, lean_object* v_x_4701_, lean_object* v_s_4702_){
_start:
{
lean_object* v_res_4703_; 
v_res_4703_ = l_Lean_ModuleUsage_compiledEnc(v_env_4699_, v_lc_4700_, v_x_4701_, v_s_4702_);
lean_dec_ref(v_lc_4700_);
return v_res_4703_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__7(void){
_start:
{
lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; 
v___x_4719_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__6));
v___x_4720_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__4));
v___x_4721_ = l_Lean_mkPrivateNameCore(v___x_4720_, v___x_4719_);
return v___x_4721_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__10(void){
_start:
{
lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; 
v___x_4728_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__9));
v___x_4729_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__4));
v___x_4730_ = l_Lean_mkPrivateNameCore(v___x_4729_, v___x_4728_);
return v___x_4730_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__15(void){
_start:
{
lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; 
v___x_4743_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__14));
v___x_4744_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__4));
v___x_4745_ = l_Lean_mkPrivateNameCore(v___x_4744_, v___x_4743_);
return v___x_4745_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__20(void){
_start:
{
lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; 
v___x_4755_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__19));
v___x_4756_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__17));
v___x_4757_ = l_Lean_mkPrivateNameCore(v___x_4756_, v___x_4755_);
return v___x_4757_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__21(void){
_start:
{
lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; 
v___x_4758_ = lean_box(0);
v___x_4759_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__20, &l_Lean_ModuleUsage_digestedOwnTables___closed__20_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__20);
v___x_4760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4760_, 0, v___x_4759_);
lean_ctor_set(v___x_4760_, 1, v___x_4758_);
return v___x_4760_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__22(void){
_start:
{
lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; 
v___x_4761_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__21, &l_Lean_ModuleUsage_digestedOwnTables___closed__21_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__21);
v___x_4762_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__15, &l_Lean_ModuleUsage_digestedOwnTables___closed__15_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__15);
v___x_4763_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4763_, 0, v___x_4762_);
lean_ctor_set(v___x_4763_, 1, v___x_4761_);
return v___x_4763_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__23(void){
_start:
{
lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; 
v___x_4764_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__22, &l_Lean_ModuleUsage_digestedOwnTables___closed__22_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__22);
v___x_4765_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__12));
v___x_4766_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4766_, 0, v___x_4765_);
lean_ctor_set(v___x_4766_, 1, v___x_4764_);
return v___x_4766_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__24(void){
_start:
{
lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; 
v___x_4767_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__23, &l_Lean_ModuleUsage_digestedOwnTables___closed__23_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__23);
v___x_4768_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__10, &l_Lean_ModuleUsage_digestedOwnTables___closed__10_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__10);
v___x_4769_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4769_, 0, v___x_4768_);
lean_ctor_set(v___x_4769_, 1, v___x_4767_);
return v___x_4769_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__25(void){
_start:
{
lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v_y_4772_; 
v___x_4770_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__24, &l_Lean_ModuleUsage_digestedOwnTables___closed__24_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__24);
v___x_4771_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__7, &l_Lean_ModuleUsage_digestedOwnTables___closed__7_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__7);
v_y_4772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_4772_, 0, v___x_4771_);
lean_ctor_set(v_y_4772_, 1, v___x_4770_);
return v_y_4772_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__40(void){
_start:
{
lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; 
v___x_4811_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__39));
v___x_4812_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__37));
v___x_4813_ = l_Lean_mkPrivateNameCore(v___x_4812_, v___x_4811_);
return v___x_4813_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__41(void){
_start:
{
lean_object* v_y_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; 
v_y_4814_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__25, &l_Lean_ModuleUsage_digestedOwnTables___closed__25_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__25);
v___x_4815_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__40, &l_Lean_ModuleUsage_digestedOwnTables___closed__40_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__40);
v___x_4816_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4816_, 0, v___x_4815_);
lean_ctor_set(v___x_4816_, 1, v_y_4814_);
return v___x_4816_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__42(void){
_start:
{
lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; 
v___x_4817_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__41, &l_Lean_ModuleUsage_digestedOwnTables___closed__41_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__41);
v___x_4818_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__35));
v___x_4819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4819_, 0, v___x_4818_);
lean_ctor_set(v___x_4819_, 1, v___x_4817_);
return v___x_4819_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__43(void){
_start:
{
lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; 
v___x_4820_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__42, &l_Lean_ModuleUsage_digestedOwnTables___closed__42_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__42);
v___x_4821_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__32));
v___x_4822_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4822_, 0, v___x_4821_);
lean_ctor_set(v___x_4822_, 1, v___x_4820_);
return v___x_4822_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__44(void){
_start:
{
lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; 
v___x_4823_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__43, &l_Lean_ModuleUsage_digestedOwnTables___closed__43_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__43);
v___x_4824_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__30));
v___x_4825_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4825_, 0, v___x_4824_);
lean_ctor_set(v___x_4825_, 1, v___x_4823_);
return v___x_4825_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__45(void){
_start:
{
lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v_y_4828_; 
v___x_4826_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__44, &l_Lean_ModuleUsage_digestedOwnTables___closed__44_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__44);
v___x_4827_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__27));
v_y_4828_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_4828_, 0, v___x_4827_);
lean_ctor_set(v_y_4828_, 1, v___x_4826_);
return v_y_4828_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__56(void){
_start:
{
lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; 
v___x_4849_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__55));
v___x_4850_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__53));
v___x_4851_ = l_Lean_mkPrivateNameCore(v___x_4850_, v___x_4849_);
return v___x_4851_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__61(void){
_start:
{
lean_object* v_y_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; 
v_y_4864_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__45, &l_Lean_ModuleUsage_digestedOwnTables___closed__45_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__45);
v___x_4865_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__60));
v___x_4866_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4866_, 0, v___x_4865_);
lean_ctor_set(v___x_4866_, 1, v_y_4864_);
return v___x_4866_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__62(void){
_start:
{
lean_object* v___x_4867_; lean_object* v___x_4868_; lean_object* v___x_4869_; 
v___x_4867_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__61, &l_Lean_ModuleUsage_digestedOwnTables___closed__61_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__61);
v___x_4868_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__58));
v___x_4869_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4869_, 0, v___x_4868_);
lean_ctor_set(v___x_4869_, 1, v___x_4867_);
return v___x_4869_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__63(void){
_start:
{
lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; 
v___x_4870_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__62, &l_Lean_ModuleUsage_digestedOwnTables___closed__62_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__62);
v___x_4871_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__56, &l_Lean_ModuleUsage_digestedOwnTables___closed__56_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__56);
v___x_4872_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4872_, 0, v___x_4871_);
lean_ctor_set(v___x_4872_, 1, v___x_4870_);
return v___x_4872_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__64(void){
_start:
{
lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; 
v___x_4873_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__63, &l_Lean_ModuleUsage_digestedOwnTables___closed__63_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__63);
v___x_4874_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__51));
v___x_4875_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4875_, 0, v___x_4874_);
lean_ctor_set(v___x_4875_, 1, v___x_4873_);
return v___x_4875_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__65(void){
_start:
{
lean_object* v___x_4876_; lean_object* v___x_4877_; lean_object* v_y_4878_; 
v___x_4876_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__64, &l_Lean_ModuleUsage_digestedOwnTables___closed__64_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__64);
v___x_4877_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__47));
v_y_4878_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_4878_, 0, v___x_4877_);
lean_ctor_set(v_y_4878_, 1, v___x_4876_);
return v_y_4878_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__77(void){
_start:
{
lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; 
v___x_4901_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__76));
v___x_4902_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__74));
v___x_4903_ = l_Lean_mkPrivateNameCore(v___x_4902_, v___x_4901_);
return v___x_4903_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__80(void){
_start:
{
lean_object* v_y_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; 
v_y_4908_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__65, &l_Lean_ModuleUsage_digestedOwnTables___closed__65_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__65);
v___x_4909_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__79));
v___x_4910_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4910_, 0, v___x_4909_);
lean_ctor_set(v___x_4910_, 1, v_y_4908_);
return v___x_4910_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__81(void){
_start:
{
lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; 
v___x_4911_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__80, &l_Lean_ModuleUsage_digestedOwnTables___closed__80_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__80);
v___x_4912_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__77, &l_Lean_ModuleUsage_digestedOwnTables___closed__77_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__77);
v___x_4913_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4913_, 0, v___x_4912_);
lean_ctor_set(v___x_4913_, 1, v___x_4911_);
return v___x_4913_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__82(void){
_start:
{
lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; 
v___x_4914_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__81, &l_Lean_ModuleUsage_digestedOwnTables___closed__81_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__81);
v___x_4915_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__72));
v___x_4916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4916_, 0, v___x_4915_);
lean_ctor_set(v___x_4916_, 1, v___x_4914_);
return v___x_4916_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__83(void){
_start:
{
lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; 
v___x_4917_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__82, &l_Lean_ModuleUsage_digestedOwnTables___closed__82_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__82);
v___x_4918_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__70));
v___x_4919_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4919_, 0, v___x_4918_);
lean_ctor_set(v___x_4919_, 1, v___x_4917_);
return v___x_4919_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__84(void){
_start:
{
lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v_y_4922_; 
v___x_4920_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__83, &l_Lean_ModuleUsage_digestedOwnTables___closed__83_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__83);
v___x_4921_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__67));
v_y_4922_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_4922_, 0, v___x_4921_);
lean_ctor_set(v_y_4922_, 1, v___x_4920_);
return v_y_4922_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__91(void){
_start:
{
lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; 
v___x_4937_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__90));
v___x_4938_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__88));
v___x_4939_ = l_Lean_mkPrivateNameCore(v___x_4938_, v___x_4937_);
return v___x_4939_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__94(void){
_start:
{
lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; 
v___x_4944_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__93));
v___x_4945_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__88));
v___x_4946_ = l_Lean_mkPrivateNameCore(v___x_4945_, v___x_4944_);
return v___x_4946_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__99(void){
_start:
{
lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; 
v___x_4955_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__98));
v___x_4956_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__96));
v___x_4957_ = l_Lean_mkPrivateNameCore(v___x_4956_, v___x_4955_);
return v___x_4957_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__104(void){
_start:
{
lean_object* v_y_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; 
v_y_4967_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__84, &l_Lean_ModuleUsage_digestedOwnTables___closed__84_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__84);
v___x_4968_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__103));
v___x_4969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4969_, 0, v___x_4968_);
lean_ctor_set(v___x_4969_, 1, v_y_4967_);
return v___x_4969_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__105(void){
_start:
{
lean_object* v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; 
v___x_4970_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__104, &l_Lean_ModuleUsage_digestedOwnTables___closed__104_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__104);
v___x_4971_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__99, &l_Lean_ModuleUsage_digestedOwnTables___closed__99_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__99);
v___x_4972_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4972_, 0, v___x_4971_);
lean_ctor_set(v___x_4972_, 1, v___x_4970_);
return v___x_4972_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__106(void){
_start:
{
lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; 
v___x_4973_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__105, &l_Lean_ModuleUsage_digestedOwnTables___closed__105_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__105);
v___x_4974_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__94, &l_Lean_ModuleUsage_digestedOwnTables___closed__94_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__94);
v___x_4975_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4975_, 0, v___x_4974_);
lean_ctor_set(v___x_4975_, 1, v___x_4973_);
return v___x_4975_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__107(void){
_start:
{
lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; 
v___x_4976_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__106, &l_Lean_ModuleUsage_digestedOwnTables___closed__106_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__106);
v___x_4977_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__91, &l_Lean_ModuleUsage_digestedOwnTables___closed__91_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__91);
v___x_4978_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4978_, 0, v___x_4977_);
lean_ctor_set(v___x_4978_, 1, v___x_4976_);
return v___x_4978_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__108(void){
_start:
{
lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v_y_4981_; 
v___x_4979_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__107, &l_Lean_ModuleUsage_digestedOwnTables___closed__107_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__107);
v___x_4980_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__86));
v_y_4981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_4981_, 0, v___x_4980_);
lean_ctor_set(v_y_4981_, 1, v___x_4979_);
return v_y_4981_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__119(void){
_start:
{
lean_object* v_y_5004_; lean_object* v___x_5005_; lean_object* v___x_5006_; 
v_y_5004_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__108, &l_Lean_ModuleUsage_digestedOwnTables___closed__108_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__108);
v___x_5005_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__118));
v___x_5006_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5006_, 0, v___x_5005_);
lean_ctor_set(v___x_5006_, 1, v_y_5004_);
return v___x_5006_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__120(void){
_start:
{
lean_object* v___x_5007_; lean_object* v___x_5008_; lean_object* v___x_5009_; 
v___x_5007_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__119, &l_Lean_ModuleUsage_digestedOwnTables___closed__119_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__119);
v___x_5008_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__116));
v___x_5009_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5009_, 0, v___x_5008_);
lean_ctor_set(v___x_5009_, 1, v___x_5007_);
return v___x_5009_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__121(void){
_start:
{
lean_object* v___x_5010_; lean_object* v___x_5011_; lean_object* v___x_5012_; 
v___x_5010_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__120, &l_Lean_ModuleUsage_digestedOwnTables___closed__120_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__120);
v___x_5011_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__114));
v___x_5012_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5012_, 0, v___x_5011_);
lean_ctor_set(v___x_5012_, 1, v___x_5010_);
return v___x_5012_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__122(void){
_start:
{
lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; 
v___x_5013_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__121, &l_Lean_ModuleUsage_digestedOwnTables___closed__121_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__121);
v___x_5014_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__112));
v___x_5015_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5015_, 0, v___x_5014_);
lean_ctor_set(v___x_5015_, 1, v___x_5013_);
return v___x_5015_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__123(void){
_start:
{
lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v_y_5018_; 
v___x_5016_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__122, &l_Lean_ModuleUsage_digestedOwnTables___closed__122_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__122);
v___x_5017_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__110));
v_y_5018_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_5018_, 0, v___x_5017_);
lean_ctor_set(v_y_5018_, 1, v___x_5016_);
return v_y_5018_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__134(void){
_start:
{
lean_object* v_y_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; 
v_y_5040_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__123, &l_Lean_ModuleUsage_digestedOwnTables___closed__123_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__123);
v___x_5041_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__133));
v___x_5042_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5042_, 0, v___x_5041_);
lean_ctor_set(v___x_5042_, 1, v_y_5040_);
return v___x_5042_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__135(void){
_start:
{
lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; 
v___x_5043_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__134, &l_Lean_ModuleUsage_digestedOwnTables___closed__134_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__134);
v___x_5044_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__131));
v___x_5045_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5045_, 0, v___x_5044_);
lean_ctor_set(v___x_5045_, 1, v___x_5043_);
return v___x_5045_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__136(void){
_start:
{
lean_object* v___x_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; 
v___x_5046_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__135, &l_Lean_ModuleUsage_digestedOwnTables___closed__135_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__135);
v___x_5047_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__129));
v___x_5048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5048_, 0, v___x_5047_);
lean_ctor_set(v___x_5048_, 1, v___x_5046_);
return v___x_5048_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__137(void){
_start:
{
lean_object* v___x_5049_; lean_object* v___x_5050_; lean_object* v___x_5051_; 
v___x_5049_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__136, &l_Lean_ModuleUsage_digestedOwnTables___closed__136_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__136);
v___x_5050_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__127));
v___x_5051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5051_, 0, v___x_5050_);
lean_ctor_set(v___x_5051_, 1, v___x_5049_);
return v___x_5051_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__138(void){
_start:
{
lean_object* v___x_5052_; lean_object* v___x_5053_; lean_object* v_y_5054_; 
v___x_5052_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__137, &l_Lean_ModuleUsage_digestedOwnTables___closed__137_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__137);
v___x_5053_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__125));
v_y_5054_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_y_5054_, 0, v___x_5053_);
lean_ctor_set(v_y_5054_, 1, v___x_5052_);
return v_y_5054_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__147(void){
_start:
{
lean_object* v_y_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; 
v_y_5072_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__138, &l_Lean_ModuleUsage_digestedOwnTables___closed__138_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__138);
v___x_5073_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__146));
v___x_5074_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5074_, 0, v___x_5073_);
lean_ctor_set(v___x_5074_, 1, v_y_5072_);
return v___x_5074_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__148(void){
_start:
{
lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; 
v___x_5075_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__147, &l_Lean_ModuleUsage_digestedOwnTables___closed__147_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__147);
v___x_5076_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__144));
v___x_5077_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5077_, 0, v___x_5076_);
lean_ctor_set(v___x_5077_, 1, v___x_5075_);
return v___x_5077_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__149(void){
_start:
{
lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; 
v___x_5078_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__148, &l_Lean_ModuleUsage_digestedOwnTables___closed__148_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__148);
v___x_5079_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__142));
v___x_5080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5080_, 0, v___x_5079_);
lean_ctor_set(v___x_5080_, 1, v___x_5078_);
return v___x_5080_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables___closed__150(void){
_start:
{
lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; 
v___x_5081_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__149, &l_Lean_ModuleUsage_digestedOwnTables___closed__149_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__149);
v___x_5082_ = ((lean_object*)(l_Lean_ModuleUsage_digestedOwnTables___closed__140));
v___x_5083_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5083_, 0, v___x_5082_);
lean_ctor_set(v___x_5083_, 1, v___x_5081_);
return v___x_5083_;
}
}
static lean_object* _init_l_Lean_ModuleUsage_digestedOwnTables(void){
_start:
{
lean_object* v___x_5084_; 
v___x_5084_ = lean_obj_once(&l_Lean_ModuleUsage_digestedOwnTables___closed__150, &l_Lean_ModuleUsage_digestedOwnTables___closed__150_once, _init_l_Lean_ModuleUsage_digestedOwnTables___closed__150);
return v___x_5084_;
}
}
lean_object* runtime_initialize_Lean_Util_ModuleUsage_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_FoldConsts(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_SpecInfo(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_ElimDeadBranches(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ExportAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_InlineAttrs(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_NeverExtractAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Specialize(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_ReducibilityAttrs(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Instances(uint8_t builtin);
lean_object* runtime_initialize_Lean_Class(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatchPatternAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_ToImpureType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Structure(uint8_t builtin);
lean_object* runtime_initialize_Lean_AuxRecursor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatcherInfo(uint8_t builtin);
lean_object* runtime_initialize_Lean_ProjFns(uint8_t builtin);
lean_object* runtime_initialize_Lean_OriginalConstKind(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_ModuleUsage_Compiled(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Util_ModuleUsage_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_FoldConsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_SpecInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ElimDeadBranches(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ExportAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_NoncomputableAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_InlineAttrs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_NeverExtractAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Specialize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ReducibilityAttrs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Instances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Class(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatchPatternAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ToImpureType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_AuxRecursor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_ModuleUsage_digestedOwnTables = _init_l_Lean_ModuleUsage_digestedOwnTables();
lean_mark_persistent(l_Lean_ModuleUsage_digestedOwnTables);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_ModuleUsage_Compiled(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_ModuleUsage_Basic(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Util_FoldConsts(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_SpecInfo(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_ElimDeadBranches(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ExportAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_InlineAttrs(uint8_t builtin);
lean_object* initialize_Lean_Compiler_NeverExtractAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Specialize(uint8_t builtin);
lean_object* initialize_Lean_Compiler_MetaAttr(uint8_t builtin);
lean_object* initialize_Lean_ReducibilityAttrs(uint8_t builtin);
lean_object* initialize_Lean_Meta_Instances(uint8_t builtin);
lean_object* initialize_Lean_Class(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatchPatternAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_ToImpureType(uint8_t builtin);
lean_object* initialize_Lean_Structure(uint8_t builtin);
lean_object* initialize_Lean_AuxRecursor(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatcherInfo(uint8_t builtin);
lean_object* initialize_Lean_ProjFns(uint8_t builtin);
lean_object* initialize_Lean_OriginalConstKind(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_ModuleUsage_Compiled(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_ModuleUsage_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_FoldConsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_SpecInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_ElimDeadBranches(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ExportAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_NoncomputableAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_InlineAttrs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_NeverExtractAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Specialize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_MetaAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ReducibilityAttrs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Instances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Class(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatchPatternAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_ToImpureType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_AuxRecursor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatcherInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_OriginalConstKind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ModuleUsage_Compiled(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_ModuleUsage_Compiled(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_ModuleUsage_Compiled(builtin);
}
#ifdef __cplusplus
}
#endif
