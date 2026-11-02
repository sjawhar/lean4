// Lean compiler output
// Module: Lean.ParserCompiler.Attribute
// Imports: public import Lean.Compiler.InitAttr import Lean.ExtraModUses
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_instInhabitedEnvExtension_default___redArg();
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t lean_has_compile_error(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Elab_abortCommandExceptionId;
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* lean_st_ref_take(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_usageRecordingEnabled();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
lean_object* l_Lean_Name_mkStr1(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Attribute_Builtin_getIdent(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
extern lean_object* l_Lean_instInhabitedAttributeImpl_default;
static const lean_string_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "(`Inhabited.default` for `IO.Error`)"};
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__0_value)}};
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__1 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0_value),((lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0_value),((lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__0_value)}};
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__1 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__0_value;
static const lean_closure_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__1 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__1_value;
static const lean_closure_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__2 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__2_value;
static const lean_closure_object l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__3 = (const lean_object*)&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__3_value;
static lean_once_cell_t l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4;
static lean_once_cell_t l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5;
static lean_once_cell_t l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__3 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__3_value;
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_0),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_1),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value_aux_2),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4_value;
static const lean_array_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__6 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__6_value;
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_0),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_1),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value_aux_2),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__8 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__8_value;
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__9 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__9_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__10 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__10_value;
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_0),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_1),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value_aux_2),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11_value;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__14 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__14_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__15 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__15_value;
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_0),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_1),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value_aux_2),((lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16_value;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__17 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__17_value;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__1;
static const lean_string_object l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__2 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11_spec__15_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11_spec__15___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__0;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__1_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__2_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__3_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__7;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__8_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__8_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__16_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__18_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_ParserCompiler_registerCombinatorAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_registerCombinatorAttribute___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___closed__0_value;
static const lean_closure_object l_Lean_ParserCompiler_registerCombinatorAttribute___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___closed__1 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___closed__1_value;
static const lean_closure_object l_Lean_ParserCompiler_registerCombinatorAttribute___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___closed__2 = (const lean_object*)&l_Lean_ParserCompiler_registerCombinatorAttribute___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11_spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11_spec__15_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "no declaration of attribute ["};
static const lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__0 = (const lean_object*)&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__0_value;
static lean_once_cell_t l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1;
static const lean_string_object l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "] found for `"};
static const lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__2 = (const lean_object*)&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__2_value;
static lean_once_cell_t l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3;
static const lean_string_object l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__4 = (const lean_object*)&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__4_value;
static lean_once_cell_t l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0(lean_object* v_x_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___closed__1));
v___x_8_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0___boxed(lean_object* v_x_9_, lean_object* v___y_10_, lean_object* v___y_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__0(v_x_9_, v___y_10_);
lean_dec_ref(v___y_10_);
lean_dec_ref(v_x_9_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1(lean_object* v_s_13_, lean_object* v_x_14_){
_start:
{
lean_inc_ref(v_s_13_);
return v_s_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1___boxed(lean_object* v_s_15_, lean_object* v_x_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__1(v_s_15_, v_x_16_);
lean_dec_ref(v_x_16_);
lean_dec_ref(v_s_15_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2(lean_object* v_x_22_, lean_object* v_x_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___closed__1));
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2___boxed(lean_object* v_x_25_, lean_object* v_x_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__2(v_x_25_, v_x_26_);
lean_dec_ref(v_x_26_);
lean_dec_ref(v_x_25_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3(lean_object* v_x_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = lean_box(0);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3___boxed(lean_object* v_x_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___lam__3(v_x_30_);
lean_dec_ref(v_x_30_);
return v_res_31_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_instInhabitedEnvExtension_default___redArg();
return v___x_36_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5(void){
_start:
{
lean_object* v___f_37_; lean_object* v___f_38_; lean_object* v___f_39_; lean_object* v___f_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___f_37_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__3));
v___f_38_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__2));
v___f_39_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__1));
v___f_40_ = ((lean_object*)(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__0));
v___x_41_ = lean_box(0);
v___x_42_ = lean_obj_once(&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4, &l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4_once, _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__4);
v___x_43_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_43_, 0, v___x_42_);
lean_ctor_set(v___x_43_, 1, v___x_41_);
lean_ctor_set(v___x_43_, 2, v___f_40_);
lean_ctor_set(v___x_43_, 3, v___f_39_);
lean_ctor_set(v___x_43_, 4, v___f_38_);
lean_ctor_set(v___x_43_, 5, v___f_37_);
return v___x_43_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_44_ = lean_obj_once(&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5, &l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5_once, _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__5);
v___x_45_ = l_Lean_instInhabitedAttributeImpl_default;
v___x_46_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
lean_ctor_set(v___x_46_, 1, v___x_44_);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_obj_once(&l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6, &l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6_once, _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default___closed__6);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default;
return v___x_48_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__10));
v___x_76_ = l_Lean_mkAtom(v___x_75_);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_77_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__12);
v___x_78_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5));
v___x_79_ = lean_array_push(v___x_78_, v___x_77_);
return v___x_79_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__17));
v___x_89_ = l_Lean_mkAtom(v___x_88_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__18);
v___x_91_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5));
v___x_92_ = lean_array_push(v___x_91_, v___x_90_);
return v___x_92_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_93_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__19);
v___x_94_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__16));
v___x_95_ = lean_box(2);
v___x_96_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
lean_ctor_set(v___x_96_, 1, v___x_94_);
lean_ctor_set(v___x_96_, 2, v___x_93_);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__20);
v___x_98_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__13);
v___x_99_ = lean_array_push(v___x_98_, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_100_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__21);
v___x_101_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__11));
v___x_102_ = lean_box(2);
v___x_103_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v___x_101_);
lean_ctor_set(v___x_103_, 2, v___x_100_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_104_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__22);
v___x_105_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5));
v___x_106_ = lean_array_push(v___x_105_, v___x_104_);
return v___x_106_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_107_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__23);
v___x_108_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__9));
v___x_109_ = lean_box(2);
v___x_110_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
lean_ctor_set(v___x_110_, 1, v___x_108_);
lean_ctor_set(v___x_110_, 2, v___x_107_);
return v___x_110_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_111_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__24);
v___x_112_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5));
v___x_113_ = lean_array_push(v___x_112_, v___x_111_);
return v___x_113_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26(void){
_start:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_114_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__25);
v___x_115_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__7));
v___x_116_ = lean_box(2);
v___x_117_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set(v___x_117_, 1, v___x_115_);
lean_ctor_set(v___x_117_, 2, v___x_114_);
return v___x_117_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_118_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__26);
v___x_119_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__5));
v___x_120_ = lean_array_push(v___x_119_, v___x_118_);
return v___x_120_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_121_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__27);
v___x_122_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__4));
v___x_123_ = lean_box(2);
v___x_124_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_124_, 0, v___x_123_);
lean_ctor_set(v___x_124_, 1, v___x_122_);
lean_ctor_set(v___x_124_, 2, v___x_121_);
return v___x_124_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1(void){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28, &l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1___closed__28);
return v___x_125_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_126_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_127_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0, &l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0);
v___x_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1, &l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__1);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(lean_object* v_env_131_, lean_object* v___y_132_){
_start:
{
lean_object* v___x_134_; lean_object* v_nextMacroScope_135_; lean_object* v_ngen_136_; lean_object* v_auxDeclNGen_137_; lean_object* v_traceState_138_; lean_object* v_recordedDeps_139_; lean_object* v_messages_140_; lean_object* v_infoState_141_; lean_object* v_snapshotTasks_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_153_; 
v___x_134_ = lean_st_ref_take(v___y_132_);
v_nextMacroScope_135_ = lean_ctor_get(v___x_134_, 1);
v_ngen_136_ = lean_ctor_get(v___x_134_, 2);
v_auxDeclNGen_137_ = lean_ctor_get(v___x_134_, 3);
v_traceState_138_ = lean_ctor_get(v___x_134_, 4);
v_recordedDeps_139_ = lean_ctor_get(v___x_134_, 6);
v_messages_140_ = lean_ctor_get(v___x_134_, 7);
v_infoState_141_ = lean_ctor_get(v___x_134_, 8);
v_snapshotTasks_142_ = lean_ctor_get(v___x_134_, 9);
v_isSharedCheck_153_ = !lean_is_exclusive(v___x_134_);
if (v_isSharedCheck_153_ == 0)
{
lean_object* v_unused_154_; lean_object* v_unused_155_; 
v_unused_154_ = lean_ctor_get(v___x_134_, 5);
lean_dec(v_unused_154_);
v_unused_155_ = lean_ctor_get(v___x_134_, 0);
lean_dec(v_unused_155_);
v___x_144_ = v___x_134_;
v_isShared_145_ = v_isSharedCheck_153_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_snapshotTasks_142_);
lean_inc(v_infoState_141_);
lean_inc(v_messages_140_);
lean_inc(v_recordedDeps_139_);
lean_inc(v_traceState_138_);
lean_inc(v_auxDeclNGen_137_);
lean_inc(v_ngen_136_);
lean_inc(v_nextMacroScope_135_);
lean_dec(v___x_134_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_153_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_149_; 
v___x_146_ = lean_box(0);
v___x_147_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2, &l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2);
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 5, v___x_147_);
lean_ctor_set(v___x_144_, 0, v_env_131_);
v___x_149_ = v___x_144_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_env_131_);
lean_ctor_set(v_reuseFailAlloc_152_, 1, v_nextMacroScope_135_);
lean_ctor_set(v_reuseFailAlloc_152_, 2, v_ngen_136_);
lean_ctor_set(v_reuseFailAlloc_152_, 3, v_auxDeclNGen_137_);
lean_ctor_set(v_reuseFailAlloc_152_, 4, v_traceState_138_);
lean_ctor_set(v_reuseFailAlloc_152_, 5, v___x_147_);
lean_ctor_set(v_reuseFailAlloc_152_, 6, v_recordedDeps_139_);
lean_ctor_set(v_reuseFailAlloc_152_, 7, v_messages_140_);
lean_ctor_set(v_reuseFailAlloc_152_, 8, v_infoState_141_);
lean_ctor_set(v_reuseFailAlloc_152_, 9, v_snapshotTasks_142_);
v___x_149_ = v_reuseFailAlloc_152_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = lean_st_ref_put(v___y_132_, v___x_149_);
v___x_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_151_, 0, v___x_146_);
return v___x_151_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___boxed(lean_object* v_env_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(v_env_156_, v___y_157_);
lean_dec(v___y_157_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3(lean_object* v_env_160_, lean_object* v___y_161_, lean_object* v___y_162_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(v_env_160_, v___y_162_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___boxed(lean_object* v_env_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3(v_env_165_, v___y_166_, v___y_167_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
return v_res_169_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0, &l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__0);
v___x_171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
return v___x_171_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_172_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_173_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0);
v___x_174_ = lean_unsigned_to_nat(0u);
v___x_175_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
lean_ctor_set(v___x_175_, 1, v___x_174_);
lean_ctor_set(v___x_175_, 2, v___x_174_);
lean_ctor_set(v___x_175_, 3, v___x_174_);
lean_ctor_set(v___x_175_, 4, v___x_173_);
lean_ctor_set(v___x_175_, 5, v___x_173_);
lean_ctor_set(v___x_175_, 6, v___x_173_);
lean_ctor_set(v___x_175_, 7, v___x_173_);
lean_ctor_set(v___x_175_, 8, v___x_173_);
lean_ctor_set(v___x_175_, 9, v___x_173_);
lean_ctor_set(v___x_175_, 10, v___x_173_);
lean_ctor_set(v___x_175_, 11, v___x_172_);
return v___x_175_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_176_ = lean_unsigned_to_nat(32u);
v___x_177_ = lean_mk_empty_array_with_capacity(v___x_176_);
v___x_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
return v___x_178_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3(void){
_start:
{
size_t v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_179_ = ((size_t)5ULL);
v___x_180_ = lean_unsigned_to_nat(0u);
v___x_181_ = lean_unsigned_to_nat(32u);
v___x_182_ = lean_mk_empty_array_with_capacity(v___x_181_);
v___x_183_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__2);
v___x_184_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_184_, 0, v___x_183_);
lean_ctor_set(v___x_184_, 1, v___x_182_);
lean_ctor_set(v___x_184_, 2, v___x_180_);
lean_ctor_set(v___x_184_, 3, v___x_180_);
lean_ctor_set_usize(v___x_184_, 4, v___x_179_);
return v___x_184_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_185_ = lean_box(1);
v___x_186_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__3);
v___x_187_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__0);
v___x_188_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
lean_ctor_set(v___x_188_, 1, v___x_186_);
lean_ctor_set(v___x_188_, 2, v___x_185_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0(lean_object* v_msgData_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v___x_193_; lean_object* v_toCold_194_; lean_object* v_env_195_; lean_object* v_options_196_; uint8_t v___x_197_; lean_object* v_env_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_193_ = lean_st_ref_get(v___y_191_);
v_toCold_194_ = lean_ctor_get(v___y_190_, 0);
v_env_195_ = lean_ctor_get(v___x_193_, 0);
lean_inc_ref(v_env_195_);
lean_dec(v___x_193_);
v_options_196_ = lean_ctor_get(v_toCold_194_, 2);
v___x_197_ = 0;
v_env_198_ = l_Lean_Environment_setRecordingDeps(v_env_195_, v___x_197_);
v___x_199_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__1);
v___x_200_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___closed__4);
lean_inc_ref(v_options_196_);
v___x_201_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_201_, 0, v_env_198_);
lean_ctor_set(v___x_201_, 1, v___x_199_);
lean_ctor_set(v___x_201_, 2, v___x_200_);
lean_ctor_set(v___x_201_, 3, v_options_196_);
v___x_202_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
lean_ctor_set(v___x_202_, 1, v_msgData_189_);
v___x_203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0___boxed(lean_object* v_msgData_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0(v_msgData_204_, v___y_205_, v___y_206_);
lean_dec(v___y_206_);
lean_dec_ref(v___y_205_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(lean_object* v_msg_209_, lean_object* v___y_210_, lean_object* v___y_211_){
_start:
{
lean_object* v_ref_213_; lean_object* v___x_214_; lean_object* v_a_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_223_; 
v_ref_213_ = lean_ctor_get(v___y_210_, 2);
v___x_214_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0(v_msg_209_, v___y_210_, v___y_211_);
v_a_215_ = lean_ctor_get(v___x_214_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_214_);
if (v_isSharedCheck_223_ == 0)
{
v___x_217_ = v___x_214_;
v_isShared_218_ = v_isSharedCheck_223_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_a_215_);
lean_dec(v___x_214_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_223_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_219_; lean_object* v___x_221_; 
lean_inc(v_ref_213_);
v___x_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_219_, 0, v_ref_213_);
lean_ctor_set(v___x_219_, 1, v_a_215_);
if (v_isShared_218_ == 0)
{
lean_ctor_set_tag(v___x_217_, 1);
lean_ctor_set(v___x_217_, 0, v___x_219_);
v___x_221_ = v___x_217_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_219_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg___boxed(lean_object* v_msg_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(v_msg_224_, v___y_225_, v___y_226_);
lean_dec(v___y_226_);
lean_dec_ref(v___y_225_);
return v_res_228_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__1(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__0));
v___x_231_ = l_Lean_stringToMessageData(v___x_230_);
return v___x_231_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__3(void){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_233_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__2));
v___x_234_ = l_Lean_stringToMessageData(v___x_233_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0(lean_object* v_name_235_, lean_object* v_decl_236_, lean_object* v___y_237_, lean_object* v___y_238_){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_240_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__1, &l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__1_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__1);
v___x_241_ = l_Lean_MessageData_ofName(v_name_235_);
v___x_242_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_240_);
lean_ctor_set(v___x_242_, 1, v___x_241_);
v___x_243_ = lean_obj_once(&l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__3, &l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__3_once, _init_l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___closed__3);
v___x_244_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_242_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(v___x_244_, v___y_237_, v___y_238_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___boxed(lean_object* v_name_246_, lean_object* v_decl_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0(v_name_246_, v_decl_247_, v___y_248_, v___y_249_);
lean_dec(v___y_249_);
lean_dec_ref(v___y_248_);
lean_dec(v_decl_247_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__1(lean_object* v_es_252_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = lean_array_mk(v_es_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__2(lean_object* v_s_254_, lean_object* v_p_255_){
_start:
{
lean_object* v_fst_256_; lean_object* v_snd_257_; lean_object* v___x_258_; 
v_fst_256_ = lean_ctor_get(v_p_255_, 0);
lean_inc(v_fst_256_);
v_snd_257_ = lean_ctor_get(v_p_255_, 1);
lean_inc(v_snd_257_);
lean_dec_ref(v_p_255_);
v___x_258_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_256_, v_snd_257_, v_s_254_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__3(lean_object* v_addEntryFn_259_, lean_object* v___x_260_, lean_object* v_s_261_){
_start:
{
lean_object* v_importedEntries_262_; lean_object* v_state_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_271_; 
v_importedEntries_262_ = lean_ctor_get(v_s_261_, 0);
v_state_263_ = lean_ctor_get(v_s_261_, 1);
v_isSharedCheck_271_ = !lean_is_exclusive(v_s_261_);
if (v_isSharedCheck_271_ == 0)
{
v___x_265_ = v_s_261_;
v_isShared_266_ = v_isSharedCheck_271_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_state_263_);
lean_inc(v_importedEntries_262_);
lean_dec(v_s_261_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_271_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v_state_267_; lean_object* v___x_269_; 
v_state_267_ = lean_apply_2(v_addEntryFn_259_, v_state_263_, v___x_260_);
if (v_isShared_266_ == 0)
{
lean_ctor_set(v___x_265_, 1, v_state_267_);
v___x_269_ = v___x_265_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_importedEntries_262_);
lean_ctor_set(v_reuseFailAlloc_270_, 1, v_state_267_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__10___redArg(lean_object* v_a_272_, lean_object* v_x_273_){
_start:
{
if (lean_obj_tag(v_x_273_) == 0)
{
uint8_t v___x_274_; 
v___x_274_ = 0;
return v___x_274_;
}
else
{
lean_object* v_key_275_; lean_object* v_tail_276_; uint8_t v___x_277_; 
v_key_275_ = lean_ctor_get(v_x_273_, 0);
v_tail_276_ = lean_ctor_get(v_x_273_, 2);
v___x_277_ = l_Lean_instBEqExtraModUse_beq(v_key_275_, v_a_272_);
if (v___x_277_ == 0)
{
v_x_273_ = v_tail_276_;
goto _start;
}
else
{
return v___x_277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__10___redArg___boxed(lean_object* v_a_279_, lean_object* v_x_280_){
_start:
{
uint8_t v_res_281_; lean_object* v_r_282_; 
v_res_281_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__10___redArg(v_a_279_, v_x_280_);
lean_dec(v_x_280_);
lean_dec_ref(v_a_279_);
v_r_282_ = lean_box(v_res_281_);
return v_r_282_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11_spec__15_spec__18___redArg(lean_object* v_x_283_, lean_object* v_x_284_){
_start:
{
if (lean_obj_tag(v_x_284_) == 0)
{
return v_x_283_;
}
else
{
lean_object* v_key_285_; lean_object* v_value_286_; lean_object* v_tail_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_310_; 
v_key_285_ = lean_ctor_get(v_x_284_, 0);
v_value_286_ = lean_ctor_get(v_x_284_, 1);
v_tail_287_ = lean_ctor_get(v_x_284_, 2);
v_isSharedCheck_310_ = !lean_is_exclusive(v_x_284_);
if (v_isSharedCheck_310_ == 0)
{
v___x_289_ = v_x_284_;
v_isShared_290_ = v_isSharedCheck_310_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_tail_287_);
lean_inc(v_value_286_);
lean_inc(v_key_285_);
lean_dec(v_x_284_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_310_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_291_; uint64_t v___x_292_; uint64_t v___x_293_; uint64_t v___x_294_; uint64_t v_fold_295_; uint64_t v___x_296_; uint64_t v___x_297_; uint64_t v___x_298_; size_t v___x_299_; size_t v___x_300_; size_t v___x_301_; size_t v___x_302_; size_t v___x_303_; lean_object* v___x_304_; lean_object* v___x_306_; 
v___x_291_ = lean_array_get_size(v_x_283_);
v___x_292_ = l_Lean_instHashableExtraModUse_hash(v_key_285_);
v___x_293_ = 32ULL;
v___x_294_ = lean_uint64_shift_right(v___x_292_, v___x_293_);
v_fold_295_ = lean_uint64_xor(v___x_292_, v___x_294_);
v___x_296_ = 16ULL;
v___x_297_ = lean_uint64_shift_right(v_fold_295_, v___x_296_);
v___x_298_ = lean_uint64_xor(v_fold_295_, v___x_297_);
v___x_299_ = lean_uint64_to_usize(v___x_298_);
v___x_300_ = lean_usize_of_nat(v___x_291_);
v___x_301_ = ((size_t)1ULL);
v___x_302_ = lean_usize_sub(v___x_300_, v___x_301_);
v___x_303_ = lean_usize_land(v___x_299_, v___x_302_);
v___x_304_ = lean_array_uget_borrowed(v_x_283_, v___x_303_);
lean_inc(v___x_304_);
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 2, v___x_304_);
v___x_306_ = v___x_289_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_key_285_);
lean_ctor_set(v_reuseFailAlloc_309_, 1, v_value_286_);
lean_ctor_set(v_reuseFailAlloc_309_, 2, v___x_304_);
v___x_306_ = v_reuseFailAlloc_309_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
lean_object* v___x_307_; 
v___x_307_ = lean_array_uset(v_x_283_, v___x_303_, v___x_306_);
v_x_283_ = v___x_307_;
v_x_284_ = v_tail_287_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11_spec__15___redArg(lean_object* v_i_311_, lean_object* v_source_312_, lean_object* v_target_313_){
_start:
{
lean_object* v___x_314_; uint8_t v___x_315_; 
v___x_314_ = lean_array_get_size(v_source_312_);
v___x_315_ = lean_nat_dec_lt(v_i_311_, v___x_314_);
if (v___x_315_ == 0)
{
lean_dec_ref(v_source_312_);
lean_dec(v_i_311_);
return v_target_313_;
}
else
{
lean_object* v_es_316_; lean_object* v___x_317_; lean_object* v_source_318_; lean_object* v_target_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v_es_316_ = lean_array_fget(v_source_312_, v_i_311_);
v___x_317_ = lean_box(0);
v_source_318_ = lean_array_fset(v_source_312_, v_i_311_, v___x_317_);
v_target_319_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11_spec__15_spec__18___redArg(v_target_313_, v_es_316_);
v___x_320_ = lean_unsigned_to_nat(1u);
v___x_321_ = lean_nat_add(v_i_311_, v___x_320_);
lean_dec(v_i_311_);
v_i_311_ = v___x_321_;
v_source_312_ = v_source_318_;
v_target_313_ = v_target_319_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11___redArg(lean_object* v_data_323_){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v_nbuckets_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_324_ = lean_array_get_size(v_data_323_);
v___x_325_ = lean_unsigned_to_nat(2u);
v_nbuckets_326_ = lean_nat_mul(v___x_324_, v___x_325_);
v___x_327_ = lean_unsigned_to_nat(0u);
v___x_328_ = lean_box(0);
v___x_329_ = lean_mk_array(v_nbuckets_326_, v___x_328_);
v___x_330_ = lean_array_propagate_mark(v_data_323_, v___x_329_);
v___x_331_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11_spec__15___redArg(v___x_327_, v_data_323_, v___x_330_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg(lean_object* v_m_332_, lean_object* v_a_333_, lean_object* v_b_334_){
_start:
{
lean_object* v_size_335_; lean_object* v_buckets_336_; lean_object* v___x_337_; uint64_t v___x_338_; uint64_t v___x_339_; uint64_t v___x_340_; uint64_t v_fold_341_; uint64_t v___x_342_; uint64_t v___x_343_; uint64_t v___x_344_; size_t v___x_345_; size_t v___x_346_; size_t v___x_347_; size_t v___x_348_; size_t v___x_349_; lean_object* v_bkt_350_; uint8_t v___x_351_; 
v_size_335_ = lean_ctor_get(v_m_332_, 0);
v_buckets_336_ = lean_ctor_get(v_m_332_, 1);
v___x_337_ = lean_array_get_size(v_buckets_336_);
v___x_338_ = l_Lean_instHashableExtraModUse_hash(v_a_333_);
v___x_339_ = 32ULL;
v___x_340_ = lean_uint64_shift_right(v___x_338_, v___x_339_);
v_fold_341_ = lean_uint64_xor(v___x_338_, v___x_340_);
v___x_342_ = 16ULL;
v___x_343_ = lean_uint64_shift_right(v_fold_341_, v___x_342_);
v___x_344_ = lean_uint64_xor(v_fold_341_, v___x_343_);
v___x_345_ = lean_uint64_to_usize(v___x_344_);
v___x_346_ = lean_usize_of_nat(v___x_337_);
v___x_347_ = ((size_t)1ULL);
v___x_348_ = lean_usize_sub(v___x_346_, v___x_347_);
v___x_349_ = lean_usize_land(v___x_345_, v___x_348_);
v_bkt_350_ = lean_array_uget_borrowed(v_buckets_336_, v___x_349_);
v___x_351_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__10___redArg(v_a_333_, v_bkt_350_);
if (v___x_351_ == 0)
{
lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_372_; 
lean_inc_ref(v_buckets_336_);
lean_inc(v_size_335_);
v_isSharedCheck_372_ = !lean_is_exclusive(v_m_332_);
if (v_isSharedCheck_372_ == 0)
{
lean_object* v_unused_373_; lean_object* v_unused_374_; 
v_unused_373_ = lean_ctor_get(v_m_332_, 1);
lean_dec(v_unused_373_);
v_unused_374_ = lean_ctor_get(v_m_332_, 0);
lean_dec(v_unused_374_);
v___x_353_ = v_m_332_;
v_isShared_354_ = v_isSharedCheck_372_;
goto v_resetjp_352_;
}
else
{
lean_dec(v_m_332_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_372_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_355_; lean_object* v_size_x27_356_; lean_object* v___x_357_; lean_object* v_buckets_x27_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; 
v___x_355_ = lean_unsigned_to_nat(1u);
v_size_x27_356_ = lean_nat_add(v_size_335_, v___x_355_);
lean_dec(v_size_335_);
lean_inc(v_bkt_350_);
v___x_357_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_357_, 0, v_a_333_);
lean_ctor_set(v___x_357_, 1, v_b_334_);
lean_ctor_set(v___x_357_, 2, v_bkt_350_);
v_buckets_x27_358_ = lean_array_uset(v_buckets_336_, v___x_349_, v___x_357_);
v___x_359_ = lean_unsigned_to_nat(4u);
v___x_360_ = lean_nat_mul(v_size_x27_356_, v___x_359_);
v___x_361_ = lean_unsigned_to_nat(3u);
v___x_362_ = lean_nat_div(v___x_360_, v___x_361_);
lean_dec(v___x_360_);
v___x_363_ = lean_array_get_size(v_buckets_x27_358_);
v___x_364_ = lean_nat_dec_le(v___x_362_, v___x_363_);
lean_dec(v___x_362_);
if (v___x_364_ == 0)
{
lean_object* v_val_365_; lean_object* v___x_367_; 
v_val_365_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11___redArg(v_buckets_x27_358_);
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 1, v_val_365_);
lean_ctor_set(v___x_353_, 0, v_size_x27_356_);
v___x_367_ = v___x_353_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_size_x27_356_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v_val_365_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
else
{
lean_object* v___x_370_; 
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 1, v_buckets_x27_358_);
lean_ctor_set(v___x_353_, 0, v_size_x27_356_);
v___x_370_ = v___x_353_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_size_x27_356_);
lean_ctor_set(v_reuseFailAlloc_371_, 1, v_buckets_x27_358_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
else
{
lean_dec(v_b_334_);
lean_dec_ref(v_a_333_);
return v_m_332_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___redArg(lean_object* v_keys_375_, lean_object* v_i_376_, lean_object* v_k_377_){
_start:
{
lean_object* v___x_378_; uint8_t v___x_379_; 
v___x_378_ = lean_array_get_size(v_keys_375_);
v___x_379_ = lean_nat_dec_lt(v_i_376_, v___x_378_);
if (v___x_379_ == 0)
{
lean_dec(v_i_376_);
return v___x_379_;
}
else
{
lean_object* v_k_x27_380_; uint8_t v___x_381_; 
v_k_x27_380_ = lean_array_fget_borrowed(v_keys_375_, v_i_376_);
v___x_381_ = l_Lean_instBEqExtraModUse_beq(v_k_377_, v_k_x27_380_);
if (v___x_381_ == 0)
{
lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_382_ = lean_unsigned_to_nat(1u);
v___x_383_ = lean_nat_add(v_i_376_, v___x_382_);
lean_dec(v_i_376_);
v_i_376_ = v___x_383_;
goto _start;
}
else
{
lean_dec(v_i_376_);
return v___x_379_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___redArg___boxed(lean_object* v_keys_385_, lean_object* v_i_386_, lean_object* v_k_387_){
_start:
{
uint8_t v_res_388_; lean_object* v_r_389_; 
v_res_388_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___redArg(v_keys_385_, v_i_386_, v_k_387_);
lean_dec_ref(v_k_387_);
lean_dec_ref(v_keys_385_);
v_r_389_ = lean_box(v_res_388_);
return v_r_389_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg(lean_object* v_x_390_, size_t v_x_391_, lean_object* v_x_392_){
_start:
{
if (lean_obj_tag(v_x_390_) == 0)
{
lean_object* v_es_393_; lean_object* v___x_394_; size_t v___x_395_; size_t v___x_396_; lean_object* v_j_397_; lean_object* v___x_398_; 
v_es_393_ = lean_ctor_get(v_x_390_, 0);
v___x_394_ = lean_box(2);
v___x_395_ = ((size_t)31ULL);
v___x_396_ = lean_usize_land(v_x_391_, v___x_395_);
v_j_397_ = lean_usize_to_nat(v___x_396_);
v___x_398_ = lean_array_get_borrowed(v___x_394_, v_es_393_, v_j_397_);
lean_dec(v_j_397_);
switch(lean_obj_tag(v___x_398_))
{
case 0:
{
lean_object* v_key_399_; uint8_t v___x_400_; 
v_key_399_ = lean_ctor_get(v___x_398_, 0);
v___x_400_ = l_Lean_instBEqExtraModUse_beq(v_x_392_, v_key_399_);
return v___x_400_;
}
case 1:
{
lean_object* v_node_401_; size_t v___x_402_; size_t v___x_403_; 
v_node_401_ = lean_ctor_get(v___x_398_, 0);
v___x_402_ = ((size_t)5ULL);
v___x_403_ = lean_usize_shift_right(v_x_391_, v___x_402_);
v_x_390_ = v_node_401_;
v_x_391_ = v___x_403_;
goto _start;
}
default: 
{
uint8_t v___x_405_; 
v___x_405_ = 0;
return v___x_405_;
}
}
}
else
{
lean_object* v_ks_406_; lean_object* v___x_407_; uint8_t v___x_408_; 
v_ks_406_ = lean_ctor_get(v_x_390_, 0);
v___x_407_ = lean_unsigned_to_nat(0u);
v___x_408_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___redArg(v_ks_406_, v___x_407_, v_x_392_);
return v___x_408_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg___boxed(lean_object* v_x_409_, lean_object* v_x_410_, lean_object* v_x_411_){
_start:
{
size_t v_x_6329__boxed_412_; uint8_t v_res_413_; lean_object* v_r_414_; 
v_x_6329__boxed_412_ = lean_unbox_usize(v_x_410_);
lean_dec(v_x_410_);
v_res_413_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg(v_x_409_, v_x_6329__boxed_412_, v_x_411_);
lean_dec_ref(v_x_411_);
lean_dec_ref(v_x_409_);
v_r_414_ = lean_box(v_res_413_);
return v_r_414_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg(lean_object* v_x_415_, lean_object* v_x_416_){
_start:
{
uint64_t v___x_417_; size_t v___x_418_; uint8_t v___x_419_; 
v___x_417_ = l_Lean_instHashableExtraModUse_hash(v_x_416_);
v___x_418_ = lean_uint64_to_usize(v___x_417_);
v___x_419_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg(v_x_415_, v___x_418_, v_x_416_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg___boxed(lean_object* v_x_420_, lean_object* v_x_421_){
_start:
{
uint8_t v_res_422_; lean_object* v_r_423_; 
v_res_422_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg(v_x_420_, v_x_421_);
lean_dec_ref(v_x_421_);
lean_dec_ref(v_x_420_);
v_r_423_ = lean_box(v_res_422_);
return v_r_423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___lam__0(lean_object* v___x_424_, lean_object* v_entry_425_, lean_object* v_s_426_){
_start:
{
lean_object* v_addEntryFn_427_; lean_object* v_importedEntries_428_; lean_object* v_state_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_437_; 
v_addEntryFn_427_ = lean_ctor_get(v___x_424_, 3);
lean_inc(v_addEntryFn_427_);
lean_dec_ref(v___x_424_);
v_importedEntries_428_ = lean_ctor_get(v_s_426_, 0);
v_state_429_ = lean_ctor_get(v_s_426_, 1);
v_isSharedCheck_437_ = !lean_is_exclusive(v_s_426_);
if (v_isSharedCheck_437_ == 0)
{
v___x_431_ = v_s_426_;
v_isShared_432_ = v_isSharedCheck_437_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_state_429_);
lean_inc(v_importedEntries_428_);
lean_dec(v_s_426_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_437_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v_state_433_; lean_object* v___x_435_; 
v_state_433_ = lean_apply_2(v_addEntryFn_427_, v_state_429_, v_entry_425_);
if (v_isShared_432_ == 0)
{
lean_ctor_set(v___x_431_, 1, v_state_433_);
v___x_435_ = v___x_431_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_importedEntries_428_);
lean_ctor_set(v_reuseFailAlloc_436_, 1, v_state_433_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__0(void){
_start:
{
lean_object* v___x_438_; double v___x_439_; 
v___x_438_ = lean_unsigned_to_nat(0u);
v___x_439_ = lean_float_of_nat(v___x_438_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9(lean_object* v_cls_443_, lean_object* v_msg_444_, lean_object* v___y_445_, lean_object* v___y_446_){
_start:
{
lean_object* v_ref_448_; lean_object* v___x_449_; lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_495_; 
v_ref_448_ = lean_ctor_get(v___y_445_, 2);
v___x_449_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0_spec__0(v_msg_444_, v___y_445_, v___y_446_);
v_a_450_ = lean_ctor_get(v___x_449_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_495_ == 0)
{
v___x_452_ = v___x_449_;
v_isShared_453_ = v_isSharedCheck_495_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v___x_449_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_495_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_454_; lean_object* v_traceState_455_; lean_object* v_env_456_; lean_object* v_nextMacroScope_457_; lean_object* v_ngen_458_; lean_object* v_auxDeclNGen_459_; lean_object* v_cache_460_; lean_object* v_recordedDeps_461_; lean_object* v_messages_462_; lean_object* v_infoState_463_; lean_object* v_snapshotTasks_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_494_; 
v___x_454_ = lean_st_ref_take(v___y_446_);
v_traceState_455_ = lean_ctor_get(v___x_454_, 4);
v_env_456_ = lean_ctor_get(v___x_454_, 0);
v_nextMacroScope_457_ = lean_ctor_get(v___x_454_, 1);
v_ngen_458_ = lean_ctor_get(v___x_454_, 2);
v_auxDeclNGen_459_ = lean_ctor_get(v___x_454_, 3);
v_cache_460_ = lean_ctor_get(v___x_454_, 5);
v_recordedDeps_461_ = lean_ctor_get(v___x_454_, 6);
v_messages_462_ = lean_ctor_get(v___x_454_, 7);
v_infoState_463_ = lean_ctor_get(v___x_454_, 8);
v_snapshotTasks_464_ = lean_ctor_get(v___x_454_, 9);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_454_);
if (v_isSharedCheck_494_ == 0)
{
v___x_466_ = v___x_454_;
v_isShared_467_ = v_isSharedCheck_494_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_snapshotTasks_464_);
lean_inc(v_infoState_463_);
lean_inc(v_messages_462_);
lean_inc(v_recordedDeps_461_);
lean_inc(v_cache_460_);
lean_inc(v_traceState_455_);
lean_inc(v_auxDeclNGen_459_);
lean_inc(v_ngen_458_);
lean_inc(v_nextMacroScope_457_);
lean_inc(v_env_456_);
lean_dec(v___x_454_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_494_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
uint64_t v_tid_468_; lean_object* v_traces_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_493_; 
v_tid_468_ = lean_ctor_get_uint64(v_traceState_455_, sizeof(void*)*1);
v_traces_469_ = lean_ctor_get(v_traceState_455_, 0);
v_isSharedCheck_493_ = !lean_is_exclusive(v_traceState_455_);
if (v_isSharedCheck_493_ == 0)
{
v___x_471_ = v_traceState_455_;
v_isShared_472_ = v_isSharedCheck_493_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_traces_469_);
lean_dec(v_traceState_455_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_493_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_473_; lean_object* v___x_474_; double v___x_475_; uint8_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_484_; 
v___x_473_ = lean_box(0);
v___x_474_ = lean_box(0);
v___x_475_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__0);
v___x_476_ = 0;
v___x_477_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__1));
v___x_478_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_478_, 0, v_cls_443_);
lean_ctor_set(v___x_478_, 1, v___x_474_);
lean_ctor_set(v___x_478_, 2, v___x_477_);
lean_ctor_set_float(v___x_478_, sizeof(void*)*3, v___x_475_);
lean_ctor_set_float(v___x_478_, sizeof(void*)*3 + 8, v___x_475_);
lean_ctor_set_uint8(v___x_478_, sizeof(void*)*3 + 16, v___x_476_);
v___x_479_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__2));
v___x_480_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_480_, 0, v___x_478_);
lean_ctor_set(v___x_480_, 1, v_a_450_);
lean_ctor_set(v___x_480_, 2, v___x_479_);
lean_inc(v_ref_448_);
v___x_481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_481_, 0, v_ref_448_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
v___x_482_ = l_Lean_PersistentArray_push___redArg(v_traces_469_, v___x_481_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 0, v___x_482_);
v___x_484_ = v___x_471_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v___x_482_);
lean_ctor_set_uint64(v_reuseFailAlloc_492_, sizeof(void*)*1, v_tid_468_);
v___x_484_ = v_reuseFailAlloc_492_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
lean_object* v___x_486_; 
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 4, v___x_484_);
v___x_486_ = v___x_466_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_env_456_);
lean_ctor_set(v_reuseFailAlloc_491_, 1, v_nextMacroScope_457_);
lean_ctor_set(v_reuseFailAlloc_491_, 2, v_ngen_458_);
lean_ctor_set(v_reuseFailAlloc_491_, 3, v_auxDeclNGen_459_);
lean_ctor_set(v_reuseFailAlloc_491_, 4, v___x_484_);
lean_ctor_set(v_reuseFailAlloc_491_, 5, v_cache_460_);
lean_ctor_set(v_reuseFailAlloc_491_, 6, v_recordedDeps_461_);
lean_ctor_set(v_reuseFailAlloc_491_, 7, v_messages_462_);
lean_ctor_set(v_reuseFailAlloc_491_, 8, v_infoState_463_);
lean_ctor_set(v_reuseFailAlloc_491_, 9, v_snapshotTasks_464_);
v___x_486_ = v_reuseFailAlloc_491_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
lean_object* v___x_487_; lean_object* v___x_489_; 
v___x_487_ = lean_st_ref_put(v___y_446_, v___x_486_);
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 0, v___x_473_);
v___x_489_ = v___x_452_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v___x_473_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___boxed(lean_object* v_cls_496_, lean_object* v_msg_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9(v_cls_496_, v_msg_497_, v___y_498_, v___y_499_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
return v_res_501_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__0(void){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_502_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__4(void){
_start:
{
lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_507_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__3));
v___x_508_ = l_Lean_stringToMessageData(v___x_507_);
return v___x_508_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6(void){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_510_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__5));
v___x_511_ = l_Lean_stringToMessageData(v___x_510_);
return v___x_511_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__7(void){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9___closed__1));
v___x_513_ = l_Lean_stringToMessageData(v___x_512_);
return v___x_513_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__10(void){
_start:
{
lean_object* v_cls_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v_cls_517_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__2));
v___x_518_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__9));
v___x_519_ = l_Lean_Name_append(v___x_518_, v_cls_517_);
return v___x_519_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__12(void){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__11));
v___x_522_ = l_Lean_stringToMessageData(v___x_521_);
return v___x_522_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__14(void){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__13));
v___x_525_ = l_Lean_stringToMessageData(v___x_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5(lean_object* v_mod_530_, uint8_t v_isMeta_531_, lean_object* v_hint_532_, lean_object* v___y_533_, lean_object* v___y_534_){
_start:
{
lean_object* v___y_537_; lean_object* v___y_538_; lean_object* v___y_539_; lean_object* v___y_540_; lean_object* v___y_541_; lean_object* v___y_542_; lean_object* v___y_543_; lean_object* v___y_544_; lean_object* v___y_545_; lean_object* v___y_546_; lean_object* v___y_547_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v_env_554_; uint8_t v_isExporting_555_; lean_object* v_entry_556_; lean_object* v___x_557_; lean_object* v_env_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; uint8_t v___x_563_; 
v___x_552_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__0);
v___x_553_ = lean_st_ref_get(v___y_534_);
v_env_554_ = lean_ctor_get(v___x_553_, 0);
lean_inc_ref(v_env_554_);
lean_dec(v___x_553_);
v_isExporting_555_ = lean_ctor_get_uint8(v_env_554_, sizeof(void*)*13);
lean_dec_ref(v_env_554_);
lean_inc(v_mod_530_);
v_entry_556_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_556_, 0, v_mod_530_);
lean_ctor_set_uint8(v_entry_556_, sizeof(void*)*1, v_isExporting_555_);
lean_ctor_set_uint8(v_entry_556_, sizeof(void*)*1 + 1, v_isMeta_531_);
v___x_557_ = lean_st_ref_get(v___y_534_);
v_env_558_ = lean_ctor_get(v___x_557_, 0);
lean_inc_ref(v_env_558_);
lean_dec(v___x_557_);
v___x_559_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_560_ = lean_box(1);
v___x_561_ = lean_box(0);
v___x_562_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_552_, v___x_559_, v_env_558_, v___x_560_, v___x_561_);
v___x_563_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg(v___x_562_, v_entry_556_);
lean_dec(v___x_562_);
if (v___x_563_ == 0)
{
lean_object* v_toCold_564_; lean_object* v_options_565_; lean_object* v_inheritedTraceOptions_566_; uint8_t v_hasTrace_567_; lean_object* v___f_568_; uint8_t v___x_569_; lean_object* v___y_571_; lean_object* v___y_590_; 
v_toCold_564_ = lean_ctor_get(v___y_533_, 0);
v_options_565_ = lean_ctor_get(v_toCold_564_, 2);
v_inheritedTraceOptions_566_ = lean_ctor_get(v_toCold_564_, 11);
v_hasTrace_567_ = lean_ctor_get_uint8(v_options_565_, sizeof(void*)*1);
lean_inc_ref(v_entry_556_);
v___f_568_ = lean_alloc_closure((void*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___lam__0), 3, 2);
lean_closure_set(v___f_568_, 0, v___x_559_);
lean_closure_set(v___f_568_, 1, v_entry_556_);
v___x_569_ = 1;
if (v_hasTrace_567_ == 0)
{
lean_dec(v_hint_532_);
lean_dec(v_mod_530_);
v___y_590_ = v___y_534_;
goto v___jp_589_;
}
else
{
lean_object* v_cls_597_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___y_604_; lean_object* v___y_605_; lean_object* v___x_617_; uint8_t v___x_618_; 
v_cls_597_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__2));
v___x_617_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__10);
v___x_618_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_566_, v_options_565_, v___x_617_);
if (v___x_618_ == 0)
{
lean_dec(v_hint_532_);
lean_dec(v_mod_530_);
v___y_590_ = v___y_534_;
goto v___jp_589_;
}
else
{
lean_object* v___x_619_; lean_object* v___y_621_; 
v___x_619_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__12);
if (v_isExporting_555_ == 0)
{
lean_object* v___x_628_; 
v___x_628_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__17));
v___y_621_ = v___x_628_;
goto v___jp_620_;
}
else
{
lean_object* v___x_629_; 
v___x_629_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__18));
v___y_621_ = v___x_629_;
goto v___jp_620_;
}
v___jp_620_:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
lean_inc_ref(v___y_621_);
v___x_622_ = l_Lean_stringToMessageData(v___y_621_);
v___x_623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_623_, 0, v___x_619_);
lean_ctor_set(v___x_623_, 1, v___x_622_);
v___x_624_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__14);
v___x_625_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_625_, 0, v___x_623_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
if (v_isMeta_531_ == 0)
{
lean_object* v___x_626_; 
v___x_626_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__15));
v___y_604_ = v___x_625_;
v___y_605_ = v___x_626_;
goto v___jp_603_;
}
else
{
lean_object* v___x_627_; 
v___x_627_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__16));
v___y_604_ = v___x_625_;
v___y_605_ = v___x_627_;
goto v___jp_603_;
}
}
}
v___jp_598_:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_601_, 0, v___y_599_);
lean_ctor_set(v___x_601_, 1, v___y_600_);
v___x_602_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__9(v_cls_597_, v___x_601_, v___y_533_, v___y_534_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_dec_ref_known(v___x_602_, 1);
v___y_590_ = v___y_534_;
goto v___jp_589_;
}
else
{
lean_dec_ref(v___f_568_);
lean_dec_ref_known(v_entry_556_, 1);
return v___x_602_;
}
}
v___jp_603_:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; uint8_t v___x_612_; 
lean_inc_ref(v___y_605_);
v___x_606_ = l_Lean_stringToMessageData(v___y_605_);
v___x_607_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_607_, 0, v___y_604_);
lean_ctor_set(v___x_607_, 1, v___x_606_);
v___x_608_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__4);
v___x_609_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_609_, 0, v___x_607_);
lean_ctor_set(v___x_609_, 1, v___x_608_);
v___x_610_ = l_Lean_MessageData_ofName(v_mod_530_);
v___x_611_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_609_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
v___x_612_ = l_Lean_Name_isAnonymous(v_hint_532_);
if (v___x_612_ == 0)
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_613_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__6);
v___x_614_ = l_Lean_MessageData_ofName(v_hint_532_);
v___x_615_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_613_);
lean_ctor_set(v___x_615_, 1, v___x_614_);
v___y_599_ = v___x_611_;
v___y_600_ = v___x_615_;
goto v___jp_598_;
}
else
{
lean_object* v___x_616_; 
lean_dec(v_hint_532_);
v___x_616_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___closed__7);
v___y_599_ = v___x_611_;
v___y_600_ = v___x_616_;
goto v___jp_598_;
}
}
}
v___jp_570_:
{
lean_object* v___x_572_; lean_object* v_toEnvExtension_573_; lean_object* v_env_574_; lean_object* v_nextMacroScope_575_; lean_object* v_ngen_576_; lean_object* v_auxDeclNGen_577_; lean_object* v_traceState_578_; lean_object* v_recordedDeps_579_; lean_object* v_messages_580_; lean_object* v_infoState_581_; lean_object* v_snapshotTasks_582_; lean_object* v_asyncMode_583_; uint8_t v_logWrites_584_; lean_object* v___x_585_; 
v___x_572_ = lean_st_ref_take(v___y_571_);
v_toEnvExtension_573_ = lean_ctor_get(v___x_559_, 0);
v_env_574_ = lean_ctor_get(v___x_572_, 0);
lean_inc_ref(v_env_574_);
v_nextMacroScope_575_ = lean_ctor_get(v___x_572_, 1);
lean_inc(v_nextMacroScope_575_);
v_ngen_576_ = lean_ctor_get(v___x_572_, 2);
lean_inc_ref(v_ngen_576_);
v_auxDeclNGen_577_ = lean_ctor_get(v___x_572_, 3);
lean_inc_ref(v_auxDeclNGen_577_);
v_traceState_578_ = lean_ctor_get(v___x_572_, 4);
lean_inc_ref(v_traceState_578_);
v_recordedDeps_579_ = lean_ctor_get(v___x_572_, 6);
lean_inc_ref(v_recordedDeps_579_);
v_messages_580_ = lean_ctor_get(v___x_572_, 7);
lean_inc_ref(v_messages_580_);
v_infoState_581_ = lean_ctor_get(v___x_572_, 8);
lean_inc_ref(v_infoState_581_);
v_snapshotTasks_582_ = lean_ctor_get(v___x_572_, 9);
lean_inc_ref(v_snapshotTasks_582_);
lean_dec(v___x_572_);
v_asyncMode_583_ = lean_ctor_get(v_toEnvExtension_573_, 2);
v_logWrites_584_ = lean_ctor_get_uint8(v_toEnvExtension_573_, sizeof(void*)*6);
v___x_585_ = lean_box(0);
if (v_logWrites_584_ == 0)
{
lean_object* v___x_586_; 
lean_inc_ref(v_toEnvExtension_573_);
v___x_586_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_573_, v_env_574_, v___f_568_, v_asyncMode_583_, v___x_561_, v___x_569_);
v___y_537_ = v_traceState_578_;
v___y_538_ = v_snapshotTasks_582_;
v___y_539_ = v_auxDeclNGen_577_;
v___y_540_ = v_messages_580_;
v___y_541_ = v_recordedDeps_579_;
v___y_542_ = v_nextMacroScope_575_;
v___y_543_ = v___x_585_;
v___y_544_ = v_infoState_581_;
v___y_545_ = v___y_571_;
v___y_546_ = v_ngen_576_;
v___y_547_ = v___x_586_;
goto v___jp_536_;
}
else
{
lean_object* v___x_587_; lean_object* v___x_588_; 
lean_inc_ref_n(v_toEnvExtension_573_, 2);
v___x_587_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_573_, v_env_574_);
lean_dec_ref(v_env_574_);
v___x_588_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_573_, v___x_587_, v___f_568_, v_asyncMode_583_, v___x_561_, v___x_569_);
v___y_537_ = v_traceState_578_;
v___y_538_ = v_snapshotTasks_582_;
v___y_539_ = v_auxDeclNGen_577_;
v___y_540_ = v_messages_580_;
v___y_541_ = v_recordedDeps_579_;
v___y_542_ = v_nextMacroScope_575_;
v___y_543_ = v___x_585_;
v___y_544_ = v_infoState_581_;
v___y_545_ = v___y_571_;
v___y_546_ = v_ngen_576_;
v___y_547_ = v___x_588_;
goto v___jp_536_;
}
}
v___jp_589_:
{
uint8_t v___x_591_; 
v___x_591_ = l_Lean_usageRecordingEnabled();
if (v___x_591_ == 0)
{
lean_dec_ref_known(v_entry_556_, 1);
v___y_571_ = v___y_590_;
goto v___jp_570_;
}
else
{
lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_592_ = l___private_Lean_ExtraModUses_0__Lean_extraModUsesByChecksRef;
v___x_593_ = lean_st_ref_take(v___x_592_);
v___x_594_ = lean_box(0);
v___x_595_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg(v___x_593_, v_entry_556_, v___x_594_);
v___x_596_ = lean_st_ref_put(v___x_592_, v___x_595_);
v___y_571_ = v___y_590_;
goto v___jp_570_;
}
}
}
else
{
lean_object* v___x_630_; lean_object* v___x_631_; 
lean_dec_ref_known(v_entry_556_, 1);
lean_dec(v_hint_532_);
lean_dec(v_mod_530_);
v___x_630_ = lean_box(0);
v___x_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_631_, 0, v___x_630_);
return v___x_631_;
}
v___jp_536_:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_548_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2, &l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg___closed__2);
v___x_549_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_549_, 0, v___y_547_);
lean_ctor_set(v___x_549_, 1, v___y_542_);
lean_ctor_set(v___x_549_, 2, v___y_546_);
lean_ctor_set(v___x_549_, 3, v___y_539_);
lean_ctor_set(v___x_549_, 4, v___y_537_);
lean_ctor_set(v___x_549_, 5, v___x_548_);
lean_ctor_set(v___x_549_, 6, v___y_541_);
lean_ctor_set(v___x_549_, 7, v___y_540_);
lean_ctor_set(v___x_549_, 8, v___y_544_);
lean_ctor_set(v___x_549_, 9, v___y_538_);
v___x_550_ = lean_st_ref_put(v___y_545_, v___x_549_);
v___x_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_551_, 0, v___y_543_);
return v___x_551_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5___boxed(lean_object* v_mod_632_, lean_object* v_isMeta_633_, lean_object* v_hint_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_){
_start:
{
uint8_t v_isMeta_boxed_638_; lean_object* v_res_639_; 
v_isMeta_boxed_638_ = lean_unbox(v_isMeta_633_);
v_res_639_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5(v_mod_632_, v_isMeta_boxed_638_, v_hint_634_, v___y_635_, v___y_636_);
lean_dec(v___y_636_);
lean_dec_ref(v___y_635_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6(lean_object* v___x_640_, lean_object* v_declName_641_, lean_object* v_as_642_, size_t v_sz_643_, size_t v_i_644_, lean_object* v_b_645_, lean_object* v___y_646_, lean_object* v___y_647_){
_start:
{
uint8_t v___x_649_; 
v___x_649_ = lean_usize_dec_lt(v_i_644_, v_sz_643_);
if (v___x_649_ == 0)
{
lean_object* v___x_650_; 
lean_dec(v_declName_641_);
v___x_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_650_, 0, v_b_645_);
return v___x_650_;
}
else
{
lean_object* v___x_651_; lean_object* v_modules_652_; lean_object* v___x_653_; lean_object* v_a_654_; lean_object* v___x_655_; lean_object* v_toImport_656_; lean_object* v_module_657_; lean_object* v___x_658_; uint8_t v___x_659_; lean_object* v___x_660_; 
v___x_651_ = l_Lean_Environment_header(v___x_640_);
v_modules_652_ = lean_ctor_get(v___x_651_, 3);
lean_inc_ref(v_modules_652_);
lean_dec_ref(v___x_651_);
v___x_653_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_654_ = lean_array_uget_borrowed(v_as_642_, v_i_644_);
v___x_655_ = lean_array_get(v___x_653_, v_modules_652_, v_a_654_);
lean_dec_ref(v_modules_652_);
v_toImport_656_ = lean_ctor_get(v___x_655_, 0);
lean_inc_ref(v_toImport_656_);
lean_dec(v___x_655_);
v_module_657_ = lean_ctor_get(v_toImport_656_, 0);
lean_inc(v_module_657_);
lean_dec_ref(v_toImport_656_);
v___x_658_ = lean_box(0);
v___x_659_ = 0;
lean_inc(v_declName_641_);
v___x_660_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5(v_module_657_, v___x_659_, v_declName_641_, v___y_646_, v___y_647_);
if (lean_obj_tag(v___x_660_) == 0)
{
size_t v___x_661_; size_t v___x_662_; 
lean_dec_ref_known(v___x_660_, 1);
v___x_661_ = ((size_t)1ULL);
v___x_662_ = lean_usize_add(v_i_644_, v___x_661_);
v_i_644_ = v___x_662_;
v_b_645_ = v___x_658_;
goto _start;
}
else
{
lean_dec(v_declName_641_);
return v___x_660_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6___boxed(lean_object* v___x_664_, lean_object* v_declName_665_, lean_object* v_as_666_, lean_object* v_sz_667_, lean_object* v_i_668_, lean_object* v_b_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_){
_start:
{
size_t v_sz_boxed_673_; size_t v_i_boxed_674_; lean_object* v_res_675_; 
v_sz_boxed_673_ = lean_unbox_usize(v_sz_667_);
lean_dec(v_sz_667_);
v_i_boxed_674_ = lean_unbox_usize(v_i_668_);
lean_dec(v_i_668_);
v_res_675_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6(v___x_664_, v_declName_665_, v_as_666_, v_sz_boxed_673_, v_i_boxed_674_, v_b_669_, v___y_670_, v___y_671_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec_ref(v_as_666_);
lean_dec_ref(v___x_664_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___redArg(lean_object* v_a_676_, lean_object* v_x_677_){
_start:
{
if (lean_obj_tag(v_x_677_) == 0)
{
lean_object* v___x_678_; 
v___x_678_ = lean_box(0);
return v___x_678_;
}
else
{
lean_object* v_key_679_; lean_object* v_value_680_; lean_object* v_tail_681_; uint8_t v___x_682_; 
v_key_679_ = lean_ctor_get(v_x_677_, 0);
v_value_680_ = lean_ctor_get(v_x_677_, 1);
v_tail_681_ = lean_ctor_get(v_x_677_, 2);
v___x_682_ = lean_name_eq(v_key_679_, v_a_676_);
if (v___x_682_ == 0)
{
v_x_677_ = v_tail_681_;
goto _start;
}
else
{
lean_object* v___x_684_; 
lean_inc(v_value_680_);
v___x_684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_684_, 0, v_value_680_);
return v___x_684_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___redArg___boxed(lean_object* v_a_685_, lean_object* v_x_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___redArg(v_a_685_, v_x_686_);
lean_dec(v_x_686_);
lean_dec(v_a_685_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg(lean_object* v_m_688_, lean_object* v_a_689_){
_start:
{
lean_object* v_buckets_690_; lean_object* v___x_691_; uint64_t v___y_693_; 
v_buckets_690_ = lean_ctor_get(v_m_688_, 1);
v___x_691_ = lean_array_get_size(v_buckets_690_);
if (lean_obj_tag(v_a_689_) == 0)
{
uint64_t v___x_707_; 
v___x_707_ = 1723ULL;
v___y_693_ = v___x_707_;
goto v___jp_692_;
}
else
{
uint64_t v_hash_708_; 
v_hash_708_ = lean_ctor_get_uint64(v_a_689_, sizeof(void*)*2);
v___y_693_ = v_hash_708_;
goto v___jp_692_;
}
v___jp_692_:
{
uint64_t v___x_694_; uint64_t v___x_695_; uint64_t v_fold_696_; uint64_t v___x_697_; uint64_t v___x_698_; uint64_t v___x_699_; size_t v___x_700_; size_t v___x_701_; size_t v___x_702_; size_t v___x_703_; size_t v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_694_ = 32ULL;
v___x_695_ = lean_uint64_shift_right(v___y_693_, v___x_694_);
v_fold_696_ = lean_uint64_xor(v___y_693_, v___x_695_);
v___x_697_ = 16ULL;
v___x_698_ = lean_uint64_shift_right(v_fold_696_, v___x_697_);
v___x_699_ = lean_uint64_xor(v_fold_696_, v___x_698_);
v___x_700_ = lean_uint64_to_usize(v___x_699_);
v___x_701_ = lean_usize_of_nat(v___x_691_);
v___x_702_ = ((size_t)1ULL);
v___x_703_ = lean_usize_sub(v___x_701_, v___x_702_);
v___x_704_ = lean_usize_land(v___x_700_, v___x_703_);
v___x_705_ = lean_array_uget_borrowed(v_buckets_690_, v___x_704_);
v___x_706_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___redArg(v_a_689_, v___x_705_);
return v___x_706_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg___boxed(lean_object* v_m_709_, lean_object* v_a_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg(v_m_709_, v_a_710_);
lean_dec(v_a_710_);
lean_dec_ref(v_m_709_);
return v_res_711_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__0(void){
_start:
{
lean_object* v___x_712_; 
v___x_712_ = l_Std_HashMap_instInhabited___redArg();
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2(lean_object* v_declName_715_, uint8_t v_isMeta_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v_env_725_; lean_object* v___y_727_; lean_object* v___x_740_; 
v___x_720_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__0);
v___x_721_ = lean_st_ref_get(v___y_718_);
v_env_725_ = lean_ctor_get(v___x_721_, 0);
lean_inc_ref(v_env_725_);
lean_dec(v___x_721_);
v___x_740_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_725_, v_declName_715_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_dec_ref(v_env_725_);
lean_dec(v_declName_715_);
goto v___jp_722_;
}
else
{
lean_object* v_val_741_; lean_object* v___x_742_; lean_object* v_modules_743_; lean_object* v___x_744_; uint8_t v___x_745_; 
v_val_741_ = lean_ctor_get(v___x_740_, 0);
lean_inc(v_val_741_);
lean_dec_ref_known(v___x_740_, 1);
v___x_742_ = l_Lean_Environment_header(v_env_725_);
v_modules_743_ = lean_ctor_get(v___x_742_, 3);
lean_inc_ref(v_modules_743_);
lean_dec_ref(v___x_742_);
v___x_744_ = lean_array_get_size(v_modules_743_);
v___x_745_ = lean_nat_dec_lt(v_val_741_, v___x_744_);
if (v___x_745_ == 0)
{
lean_dec_ref(v_modules_743_);
lean_dec(v_val_741_);
lean_dec_ref(v_env_725_);
lean_dec(v_declName_715_);
goto v___jp_722_;
}
else
{
lean_object* v___x_746_; lean_object* v___x_747_; uint8_t v___y_749_; 
v___x_746_ = lean_array_fget(v_modules_743_, v_val_741_);
lean_dec(v_val_741_);
lean_dec_ref(v_modules_743_);
v___x_747_ = lean_st_ref_get(v___y_718_);
if (v_isMeta_716_ == 0)
{
lean_dec(v___x_747_);
v___y_749_ = v_isMeta_716_;
goto v___jp_748_;
}
else
{
lean_object* v_env_760_; uint8_t v___x_761_; 
v_env_760_ = lean_ctor_get(v___x_747_, 0);
lean_inc_ref(v_env_760_);
lean_dec(v___x_747_);
lean_inc(v_declName_715_);
v___x_761_ = l_Lean_isMarkedMeta(v_env_760_, v_declName_715_);
if (v___x_761_ == 0)
{
v___y_749_ = v_isMeta_716_;
goto v___jp_748_;
}
else
{
uint8_t v___x_762_; 
v___x_762_ = 0;
v___y_749_ = v___x_762_;
goto v___jp_748_;
}
}
v___jp_748_:
{
lean_object* v_toImport_750_; lean_object* v_module_751_; lean_object* v___x_752_; 
v_toImport_750_ = lean_ctor_get(v___x_746_, 0);
lean_inc_ref(v_toImport_750_);
lean_dec(v___x_746_);
v_module_751_ = lean_ctor_get(v_toImport_750_, 0);
lean_inc(v_module_751_);
lean_dec_ref(v_toImport_750_);
lean_inc(v_declName_715_);
v___x_752_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5(v_module_751_, v___y_749_, v_declName_715_, v___y_717_, v___y_718_);
if (lean_obj_tag(v___x_752_) == 0)
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
lean_dec_ref_known(v___x_752_, 1);
v___x_753_ = l_Lean_indirectModUseExt;
v___x_754_ = lean_box(1);
v___x_755_ = lean_box(0);
lean_inc_ref(v_env_725_);
v___x_756_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_720_, v___x_753_, v_env_725_, v___x_754_, v___x_755_);
v___x_757_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg(v___x_756_, v_declName_715_);
lean_dec(v___x_756_);
if (lean_obj_tag(v___x_757_) == 0)
{
lean_object* v___x_758_; 
v___x_758_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___closed__1));
v___y_727_ = v___x_758_;
goto v___jp_726_;
}
else
{
lean_object* v_val_759_; 
v_val_759_ = lean_ctor_get(v___x_757_, 0);
lean_inc(v_val_759_);
lean_dec_ref_known(v___x_757_, 1);
v___y_727_ = v_val_759_;
goto v___jp_726_;
}
}
else
{
lean_dec_ref(v_env_725_);
lean_dec(v_declName_715_);
return v___x_752_;
}
}
}
}
v___jp_722_:
{
lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_723_ = lean_box(0);
v___x_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_724_, 0, v___x_723_);
return v___x_724_;
}
v___jp_726_:
{
lean_object* v___x_728_; size_t v_sz_729_; size_t v___x_730_; lean_object* v___x_731_; 
v___x_728_ = lean_box(0);
v_sz_729_ = lean_array_size(v___y_727_);
v___x_730_ = ((size_t)0ULL);
v___x_731_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__6(v_env_725_, v_declName_715_, v___y_727_, v_sz_729_, v___x_730_, v___x_728_, v___y_717_, v___y_718_);
lean_dec_ref(v___y_727_);
lean_dec_ref(v_env_725_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_738_ == 0)
{
lean_object* v_unused_739_; 
v_unused_739_ = lean_ctor_get(v___x_731_, 0);
lean_dec(v_unused_739_);
v___x_733_ = v___x_731_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_dec(v___x_731_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 0, v___x_728_);
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_728_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
else
{
return v___x_731_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2___boxed(lean_object* v_declName_763_, lean_object* v_isMeta_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_){
_start:
{
uint8_t v_isMeta_boxed_768_; lean_object* v_res_769_; 
v_isMeta_boxed_768_ = lean_unbox(v_isMeta_764_);
v_res_769_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2(v_declName_763_, v_isMeta_boxed_768_, v___y_765_, v___y_766_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__4(uint8_t v___x_770_, lean_object* v_a_771_, lean_object* v_decl_772_, lean_object* v_stx_773_, uint8_t v_x_774_, lean_object* v___y_775_, lean_object* v___y_776_){
_start:
{
lean_object* v___x_778_; lean_object* v_env_779_; lean_object* v___x_780_; 
v___x_778_ = lean_st_ref_get(v___y_776_);
v_env_779_ = lean_ctor_get(v___x_778_, 0);
lean_inc_ref(v_env_779_);
lean_dec(v___x_778_);
v___x_780_ = l_Lean_Attribute_Builtin_getIdent(v_stx_773_, v___y_775_, v___y_776_);
if (lean_obj_tag(v___x_780_) == 0)
{
lean_object* v_a_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v_a_781_ = lean_ctor_get(v___x_780_, 0);
lean_inc(v_a_781_);
lean_dec_ref_known(v___x_780_, 1);
v___x_782_ = lean_box(0);
v___x_783_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v_a_781_, v___x_782_, v___y_775_, v___y_776_);
if (lean_obj_tag(v___x_783_) == 0)
{
lean_object* v_a_784_; lean_object* v___x_785_; 
v_a_784_ = lean_ctor_get(v___x_783_, 0);
lean_inc_n(v_a_784_, 2);
lean_dec_ref_known(v___x_783_, 1);
v___x_785_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2(v_a_784_, v___x_770_, v___y_775_, v___y_776_);
if (lean_obj_tag(v___x_785_) == 0)
{
lean_object* v_toEnvExtension_786_; lean_object* v_addEntryFn_787_; lean_object* v_asyncMode_788_; uint8_t v_logWrites_789_; lean_object* v___x_790_; lean_object* v___f_791_; lean_object* v___x_792_; uint8_t v___x_793_; 
lean_dec_ref_known(v___x_785_, 1);
v_toEnvExtension_786_ = lean_ctor_get(v_a_771_, 0);
lean_inc_ref(v_toEnvExtension_786_);
v_addEntryFn_787_ = lean_ctor_get(v_a_771_, 3);
lean_inc(v_addEntryFn_787_);
lean_dec_ref(v_a_771_);
v_asyncMode_788_ = lean_ctor_get(v_toEnvExtension_786_, 2);
lean_inc(v_asyncMode_788_);
v_logWrites_789_ = lean_ctor_get_uint8(v_toEnvExtension_786_, sizeof(void*)*6);
v___x_790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_790_, 0, v_a_784_);
lean_ctor_set(v___x_790_, 1, v_decl_772_);
v___f_791_ = lean_alloc_closure((void*)(l_Lean_ParserCompiler_registerCombinatorAttribute___lam__3), 3, 2);
lean_closure_set(v___f_791_, 0, v_addEntryFn_787_);
lean_closure_set(v___f_791_, 1, v___x_790_);
v___x_792_ = lean_box(0);
v___x_793_ = 1;
if (v_logWrites_789_ == 0)
{
lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_794_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_786_, v_env_779_, v___f_791_, v_asyncMode_788_, v___x_792_, v___x_793_);
lean_dec(v_asyncMode_788_);
v___x_795_ = l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(v___x_794_, v___y_776_);
return v___x_795_;
}
else
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
lean_inc_ref(v_toEnvExtension_786_);
v___x_796_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_786_, v_env_779_);
lean_dec_ref(v_env_779_);
v___x_797_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_786_, v___x_796_, v___f_791_, v_asyncMode_788_, v___x_792_, v___x_793_);
lean_dec(v_asyncMode_788_);
v___x_798_ = l_Lean_setEnv___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__3___redArg(v___x_797_, v___y_776_);
return v___x_798_;
}
}
else
{
lean_dec(v_a_784_);
lean_dec_ref(v_env_779_);
lean_dec(v_decl_772_);
lean_dec_ref(v_a_771_);
return v___x_785_;
}
}
else
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_806_; 
lean_dec_ref(v_env_779_);
lean_dec(v_decl_772_);
lean_dec_ref(v_a_771_);
v_a_799_ = lean_ctor_get(v___x_783_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_806_ == 0)
{
v___x_801_ = v___x_783_;
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v___x_783_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_806_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_804_; 
if (v_isShared_802_ == 0)
{
v___x_804_ = v___x_801_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_799_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec_ref(v_env_779_);
lean_dec(v_decl_772_);
lean_dec_ref(v_a_771_);
v_a_807_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_780_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_780_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___lam__4___boxed(lean_object* v___x_815_, lean_object* v_a_816_, lean_object* v_decl_817_, lean_object* v_stx_818_, lean_object* v_x_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
uint8_t v___x_6930__boxed_823_; uint8_t v_x_6932__boxed_824_; lean_object* v_res_825_; 
v___x_6930__boxed_823_ = lean_unbox(v___x_815_);
v_x_6932__boxed_824_ = lean_unbox(v_x_819_);
v_res_825_ = l_Lean_ParserCompiler_registerCombinatorAttribute___lam__4(v___x_6930__boxed_823_, v_a_816_, v_decl_817_, v_stx_818_, v_x_6932__boxed_824_, v___y_820_, v___y_821_);
lean_dec(v___y_821_);
lean_dec_ref(v___y_820_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2(lean_object* v_as_826_, size_t v_i_827_, size_t v_stop_828_, lean_object* v_b_829_){
_start:
{
uint8_t v___x_830_; 
v___x_830_ = lean_usize_dec_eq(v_i_827_, v_stop_828_);
if (v___x_830_ == 0)
{
lean_object* v___x_831_; lean_object* v_fst_832_; lean_object* v_snd_833_; lean_object* v___x_834_; size_t v___x_835_; size_t v___x_836_; 
v___x_831_ = lean_array_uget_borrowed(v_as_826_, v_i_827_);
v_fst_832_ = lean_ctor_get(v___x_831_, 0);
v_snd_833_ = lean_ctor_get(v___x_831_, 1);
lean_inc(v_snd_833_);
lean_inc(v_fst_832_);
v___x_834_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_832_, v_snd_833_, v_b_829_);
v___x_835_ = ((size_t)1ULL);
v___x_836_ = lean_usize_add(v_i_827_, v___x_835_);
v_i_827_ = v___x_836_;
v_b_829_ = v___x_834_;
goto _start;
}
else
{
return v_b_829_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2___boxed(lean_object* v_as_838_, lean_object* v_i_839_, lean_object* v_stop_840_, lean_object* v_b_841_){
_start:
{
size_t v_i_boxed_842_; size_t v_stop_boxed_843_; lean_object* v_res_844_; 
v_i_boxed_842_ = lean_unbox_usize(v_i_839_);
lean_dec(v_i_839_);
v_stop_boxed_843_ = lean_unbox_usize(v_stop_840_);
lean_dec(v_stop_840_);
v_res_844_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2(v_as_838_, v_i_boxed_842_, v_stop_boxed_843_, v_b_841_);
lean_dec_ref(v_as_838_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3(lean_object* v_as_845_, size_t v_i_846_, size_t v_stop_847_, lean_object* v_b_848_){
_start:
{
lean_object* v___y_850_; uint8_t v___x_854_; 
v___x_854_ = lean_usize_dec_eq(v_i_846_, v_stop_847_);
if (v___x_854_ == 0)
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; uint8_t v___x_858_; 
v___x_855_ = lean_array_uget_borrowed(v_as_845_, v_i_846_);
v___x_856_ = lean_unsigned_to_nat(0u);
v___x_857_ = lean_array_get_size(v___x_855_);
v___x_858_ = lean_nat_dec_lt(v___x_856_, v___x_857_);
if (v___x_858_ == 0)
{
v___y_850_ = v_b_848_;
goto v___jp_849_;
}
else
{
size_t v___x_859_; size_t v___x_860_; lean_object* v___x_861_; 
v___x_859_ = ((size_t)0ULL);
v___x_860_ = lean_usize_of_nat(v___x_857_);
v___x_861_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__2(v___x_855_, v___x_859_, v___x_860_, v_b_848_);
v___y_850_ = v___x_861_;
goto v___jp_849_;
}
}
else
{
return v_b_848_;
}
v___jp_849_:
{
size_t v___x_851_; size_t v___x_852_; 
v___x_851_ = ((size_t)1ULL);
v___x_852_ = lean_usize_add(v_i_846_, v___x_851_);
v_i_846_ = v___x_852_;
v_b_848_ = v___y_850_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3___boxed(lean_object* v_as_862_, lean_object* v_i_863_, lean_object* v_stop_864_, lean_object* v_b_865_){
_start:
{
size_t v_i_boxed_866_; size_t v_stop_boxed_867_; lean_object* v_res_868_; 
v_i_boxed_866_ = lean_unbox_usize(v_i_863_);
lean_dec(v_i_863_);
v_stop_boxed_867_ = lean_unbox_usize(v_stop_864_);
lean_dec(v_stop_864_);
v_res_868_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3(v_as_862_, v_i_boxed_866_, v_stop_boxed_867_, v_b_865_);
lean_dec_ref(v_as_862_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1(lean_object* v_initState_869_, lean_object* v_as_870_){
_start:
{
lean_object* v___x_871_; lean_object* v___x_872_; uint8_t v___x_873_; 
v___x_871_ = lean_unsigned_to_nat(0u);
v___x_872_ = lean_array_get_size(v_as_870_);
v___x_873_ = lean_nat_dec_lt(v___x_871_, v___x_872_);
if (v___x_873_ == 0)
{
return v_initState_869_;
}
else
{
size_t v___x_874_; size_t v___x_875_; lean_object* v___x_876_; 
v___x_874_ = ((size_t)0ULL);
v___x_875_ = lean_usize_of_nat(v___x_872_);
v___x_876_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1_spec__3(v_as_870_, v___x_874_, v___x_875_, v_initState_869_);
return v___x_876_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1___boxed(lean_object* v_initState_877_, lean_object* v_as_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Lean_mkStateFromImportedEntries___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__1(v_initState_877_, v_as_878_);
lean_dec_ref(v_as_878_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute(lean_object* v_name_884_, lean_object* v_descr_885_, lean_object* v_ref_886_){
_start:
{
lean_object* v___f_888_; lean_object* v___f_889_; lean_object* v___f_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; uint8_t v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
lean_inc(v_name_884_);
v___f_888_ = lean_alloc_closure((void*)(l_Lean_ParserCompiler_registerCombinatorAttribute___lam__0___boxed), 5, 1);
lean_closure_set(v___f_888_, 0, v_name_884_);
v___f_889_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___closed__0));
v___f_890_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___closed__1));
v___x_891_ = ((lean_object*)(l_Lean_ParserCompiler_registerCombinatorAttribute___closed__2));
v___x_892_ = lean_box(0);
v___x_893_ = lean_box(2);
v___x_894_ = 0;
lean_inc(v_ref_886_);
v___x_895_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_895_, 0, v_ref_886_);
lean_ctor_set(v___x_895_, 1, v___f_890_);
lean_ctor_set(v___x_895_, 2, v___x_891_);
lean_ctor_set(v___x_895_, 3, v___f_889_);
lean_ctor_set(v___x_895_, 4, v___x_892_);
lean_ctor_set(v___x_895_, 5, v___x_893_);
lean_ctor_set(v___x_895_, 6, v___x_892_);
lean_ctor_set_uint8(v___x_895_, sizeof(void*)*7, v___x_894_);
v___x_896_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_895_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v___x_898_; lean_object* v___f_899_; uint8_t v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc_n(v_a_897_, 2);
lean_dec_ref_known(v___x_896_, 1);
v___x_898_ = lean_box(v___x_894_);
v___f_899_ = lean_alloc_closure((void*)(l_Lean_ParserCompiler_registerCombinatorAttribute___lam__4___boxed), 8, 2);
lean_closure_set(v___f_899_, 0, v___x_898_);
lean_closure_set(v___f_899_, 1, v_a_897_);
v___x_900_ = 0;
v___x_901_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_901_, 0, v_ref_886_);
lean_ctor_set(v___x_901_, 1, v_name_884_);
lean_ctor_set(v___x_901_, 2, v_descr_885_);
lean_ctor_set_uint8(v___x_901_, sizeof(void*)*3, v___x_900_);
v___x_902_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_902_, 0, v___x_901_);
lean_ctor_set(v___x_902_, 1, v___f_899_);
lean_ctor_set(v___x_902_, 2, v___f_888_);
lean_inc_ref(v___x_902_);
v___x_903_ = l_Lean_registerBuiltinAttribute(v___x_902_);
if (lean_obj_tag(v___x_903_) == 0)
{
lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_911_; 
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_911_ == 0)
{
lean_object* v_unused_912_; 
v_unused_912_ = lean_ctor_get(v___x_903_, 0);
lean_dec(v_unused_912_);
v___x_905_ = v___x_903_;
v_isShared_906_ = v_isSharedCheck_911_;
goto v_resetjp_904_;
}
else
{
lean_dec(v___x_903_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_911_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_907_; lean_object* v___x_909_; 
v___x_907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_907_, 0, v___x_902_);
lean_ctor_set(v___x_907_, 1, v_a_897_);
if (v_isShared_906_ == 0)
{
lean_ctor_set(v___x_905_, 0, v___x_907_);
v___x_909_ = v___x_905_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v___x_907_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
else
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
lean_dec_ref_known(v___x_902_, 3);
lean_dec(v_a_897_);
v_a_913_ = lean_ctor_get(v___x_903_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_903_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_903_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
else
{
lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_928_; 
lean_dec_ref(v___f_888_);
lean_dec(v_ref_886_);
lean_dec_ref(v_descr_885_);
lean_dec(v_name_884_);
v_a_921_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_928_ == 0)
{
v___x_923_ = v___x_896_;
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_896_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_926_; 
if (v_isShared_924_ == 0)
{
v___x_926_ = v___x_923_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_a_921_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_registerCombinatorAttribute___boxed(lean_object* v_name_929_, lean_object* v_descr_930_, lean_object* v_ref_931_, lean_object* v_a_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = l_Lean_ParserCompiler_registerCombinatorAttribute(v_name_929_, v_descr_930_, v_ref_931_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0(lean_object* v_00_u03b1_934_, lean_object* v_msg_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
lean_object* v___x_939_; 
v___x_939_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(v_msg_935_, v___y_936_, v___y_937_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___boxed(lean_object* v_00_u03b1_940_, lean_object* v_msg_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0(v_00_u03b1_940_, v_msg_941_, v___y_942_, v___y_943_);
lean_dec(v___y_943_);
lean_dec_ref(v___y_942_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7(lean_object* v_00_u03b2_946_, lean_object* v_m_947_, lean_object* v_a_948_){
_start:
{
lean_object* v___x_949_; 
v___x_949_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___redArg(v_m_947_, v_a_948_);
return v___x_949_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7___boxed(lean_object* v_00_u03b2_950_, lean_object* v_m_951_, lean_object* v_a_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7(v_00_u03b2_950_, v_m_951_, v_a_952_);
lean_dec(v_a_952_);
lean_dec_ref(v_m_951_);
return v_res_953_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7(lean_object* v_00_u03b2_954_, lean_object* v_x_955_, lean_object* v_x_956_){
_start:
{
uint8_t v___x_957_; 
v___x_957_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___redArg(v_x_955_, v_x_956_);
return v___x_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7___boxed(lean_object* v_00_u03b2_958_, lean_object* v_x_959_, lean_object* v_x_960_){
_start:
{
uint8_t v_res_961_; lean_object* v_r_962_; 
v_res_961_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7(v_00_u03b2_958_, v_x_959_, v_x_960_);
lean_dec_ref(v_x_960_);
lean_dec_ref(v_x_959_);
v_r_962_ = lean_box(v_res_961_);
return v_r_962_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8(lean_object* v_00_u03b2_963_, lean_object* v_m_964_, lean_object* v_a_965_, lean_object* v_b_966_){
_start:
{
lean_object* v___x_967_; 
v___x_967_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8___redArg(v_m_964_, v_a_965_, v_b_966_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12(lean_object* v_00_u03b2_968_, lean_object* v_a_969_, lean_object* v_x_970_){
_start:
{
lean_object* v___x_971_; 
v___x_971_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___redArg(v_a_969_, v_x_970_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12___boxed(lean_object* v_00_u03b2_972_, lean_object* v_a_973_, lean_object* v_x_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__7_spec__12(v_00_u03b2_972_, v_a_973_, v_x_974_);
lean_dec(v_x_974_);
lean_dec(v_a_973_);
return v_res_975_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8(lean_object* v_00_u03b2_976_, lean_object* v_x_977_, size_t v_x_978_, lean_object* v_x_979_){
_start:
{
uint8_t v___x_980_; 
v___x_980_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___redArg(v_x_977_, v_x_978_, v_x_979_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8___boxed(lean_object* v_00_u03b2_981_, lean_object* v_x_982_, lean_object* v_x_983_, lean_object* v_x_984_){
_start:
{
size_t v_x_7190__boxed_985_; uint8_t v_res_986_; lean_object* v_r_987_; 
v_x_7190__boxed_985_ = lean_unbox_usize(v_x_983_);
lean_dec(v_x_983_);
v_res_986_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8(v_00_u03b2_981_, v_x_982_, v_x_7190__boxed_985_, v_x_984_);
lean_dec_ref(v_x_984_);
lean_dec_ref(v_x_982_);
v_r_987_ = lean_box(v_res_986_);
return v_r_987_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__10(lean_object* v_00_u03b2_988_, lean_object* v_a_989_, lean_object* v_x_990_){
_start:
{
uint8_t v___x_991_; 
v___x_991_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__10___redArg(v_a_989_, v_x_990_);
return v___x_991_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__10___boxed(lean_object* v_00_u03b2_992_, lean_object* v_a_993_, lean_object* v_x_994_){
_start:
{
uint8_t v_res_995_; lean_object* v_r_996_; 
v_res_995_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__10(v_00_u03b2_992_, v_a_993_, v_x_994_);
lean_dec(v_x_994_);
lean_dec_ref(v_a_993_);
v_r_996_ = lean_box(v_res_995_);
return v_r_996_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11(lean_object* v_00_u03b2_997_, lean_object* v_data_998_){
_start:
{
lean_object* v___x_999_; 
v___x_999_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11___redArg(v_data_998_);
return v___x_999_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11(lean_object* v_00_u03b2_1000_, lean_object* v_keys_1001_, lean_object* v_vals_1002_, lean_object* v_heq_1003_, lean_object* v_i_1004_, lean_object* v_k_1005_){
_start:
{
uint8_t v___x_1006_; 
v___x_1006_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___redArg(v_keys_1001_, v_i_1004_, v_k_1005_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11___boxed(lean_object* v_00_u03b2_1007_, lean_object* v_keys_1008_, lean_object* v_vals_1009_, lean_object* v_heq_1010_, lean_object* v_i_1011_, lean_object* v_k_1012_){
_start:
{
uint8_t v_res_1013_; lean_object* v_r_1014_; 
v_res_1013_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__7_spec__8_spec__11(v_00_u03b2_1007_, v_keys_1008_, v_vals_1009_, v_heq_1010_, v_i_1011_, v_k_1012_);
lean_dec_ref(v_k_1012_);
lean_dec_ref(v_vals_1009_);
lean_dec_ref(v_keys_1008_);
v_r_1014_ = lean_box(v_res_1013_);
return v_r_1014_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11_spec__15(lean_object* v_00_u03b2_1015_, lean_object* v_i_1016_, lean_object* v_source_1017_, lean_object* v_target_1018_){
_start:
{
lean_object* v___x_1019_; 
v___x_1019_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11_spec__15___redArg(v_i_1016_, v_source_1017_, v_target_1018_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11_spec__15_spec__18(lean_object* v_00_u03b2_1020_, lean_object* v_x_1021_, lean_object* v_x_1022_){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__2_spec__5_spec__8_spec__11_spec__15_spec__18___redArg(v_x_1021_, v_x_1022_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f(lean_object* v_attr_1024_, lean_object* v_env_1025_, lean_object* v_parserDecl_1026_){
_start:
{
lean_object* v_ext_1027_; lean_object* v_toEnvExtension_1028_; lean_object* v_asyncMode_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; 
v_ext_1027_ = lean_ctor_get(v_attr_1024_, 1);
v_toEnvExtension_1028_ = lean_ctor_get(v_ext_1027_, 0);
v_asyncMode_1029_ = lean_ctor_get(v_toEnvExtension_1028_, 2);
v___x_1030_ = lean_box(1);
v___x_1031_ = lean_box(0);
v___x_1032_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1030_, v_ext_1027_, v_env_1025_, v_asyncMode_1029_, v___x_1031_);
v___x_1033_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1032_, v_parserDecl_1026_);
lean_dec(v___x_1032_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f___boxed(lean_object* v_attr_1034_, lean_object* v_env_1035_, lean_object* v_parserDecl_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f(v_attr_1034_, v_env_1035_, v_parserDecl_1036_);
lean_dec(v_parserDecl_1036_);
lean_dec_ref(v_attr_1034_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_setDeclFor(lean_object* v_attr_1038_, lean_object* v_env_1039_, lean_object* v_parserDecl_1040_, lean_object* v_decl_1041_){
_start:
{
lean_object* v_ext_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1059_; 
v_ext_1042_ = lean_ctor_get(v_attr_1038_, 1);
v_isSharedCheck_1059_ = !lean_is_exclusive(v_attr_1038_);
if (v_isSharedCheck_1059_ == 0)
{
lean_object* v_unused_1060_; 
v_unused_1060_ = lean_ctor_get(v_attr_1038_, 0);
lean_dec(v_unused_1060_);
v___x_1044_ = v_attr_1038_;
v_isShared_1045_ = v_isSharedCheck_1059_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_ext_1042_);
lean_dec(v_attr_1038_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1059_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v_toEnvExtension_1046_; lean_object* v_addEntryFn_1047_; lean_object* v_asyncMode_1048_; uint8_t v_logWrites_1049_; lean_object* v___x_1051_; 
v_toEnvExtension_1046_ = lean_ctor_get(v_ext_1042_, 0);
lean_inc_ref(v_toEnvExtension_1046_);
v_addEntryFn_1047_ = lean_ctor_get(v_ext_1042_, 3);
lean_inc(v_addEntryFn_1047_);
lean_dec_ref(v_ext_1042_);
v_asyncMode_1048_ = lean_ctor_get(v_toEnvExtension_1046_, 2);
lean_inc(v_asyncMode_1048_);
v_logWrites_1049_ = lean_ctor_get_uint8(v_toEnvExtension_1046_, sizeof(void*)*6);
if (v_isShared_1045_ == 0)
{
lean_ctor_set(v___x_1044_, 1, v_decl_1041_);
lean_ctor_set(v___x_1044_, 0, v_parserDecl_1040_);
v___x_1051_ = v___x_1044_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v_parserDecl_1040_);
lean_ctor_set(v_reuseFailAlloc_1058_, 1, v_decl_1041_);
v___x_1051_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
lean_object* v___f_1052_; lean_object* v___x_1053_; uint8_t v___x_1054_; 
v___f_1052_ = lean_alloc_closure((void*)(l_Lean_ParserCompiler_registerCombinatorAttribute___lam__3), 3, 2);
lean_closure_set(v___f_1052_, 0, v_addEntryFn_1047_);
lean_closure_set(v___f_1052_, 1, v___x_1051_);
v___x_1053_ = lean_box(0);
v___x_1054_ = 1;
if (v_logWrites_1049_ == 0)
{
lean_object* v___x_1055_; 
v___x_1055_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1046_, v_env_1039_, v___f_1052_, v_asyncMode_1048_, v___x_1053_, v___x_1054_);
lean_dec(v_asyncMode_1048_);
return v___x_1055_;
}
else
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
lean_inc_ref(v_toEnvExtension_1046_);
v___x_1056_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1046_, v_env_1039_);
lean_dec_ref(v_env_1039_);
v___x_1057_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1046_, v___x_1056_, v___f_1052_, v_asyncMode_1048_, v___x_1053_, v___x_1054_);
lean_dec(v_asyncMode_1048_);
return v___x_1057_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(lean_object* v_x_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_){
_start:
{
if (lean_obj_tag(v_x_1061_) == 0)
{
lean_object* v_a_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v_a_1065_ = lean_ctor_get(v_x_1061_, 0);
lean_inc(v_a_1065_);
lean_dec_ref_known(v_x_1061_, 1);
v___x_1066_ = l_Lean_stringToMessageData(v_a_1065_);
v___x_1067_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(v___x_1066_, v___y_1062_, v___y_1063_);
return v___x_1067_;
}
else
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
v_a_1068_ = lean_ctor_get(v_x_1061_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v_x_1061_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v_x_1061_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v_x_1061_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
lean_ctor_set_tag(v___x_1070_, 0);
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_a_1068_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg___boxed(lean_object* v_x_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(v_x_1076_, v___y_1077_, v___y_1078_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
return v_res_1080_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1081_ = lean_box(0);
v___x_1082_ = l_Lean_Elab_abortCommandExceptionId;
v___x_1083_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1082_);
lean_ctor_set(v___x_1083_, 1, v___x_1081_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg(){
_start:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1085_ = lean_obj_once(&l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0, &l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___closed__0);
v___x_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
return v___x_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg___boxed(lean_object* v___y_1087_){
_start:
{
lean_object* v_res_1088_; 
v_res_1088_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg();
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg(lean_object* v_constName_1089_, uint8_t v_checkMeta_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_){
_start:
{
lean_object* v___x_1094_; lean_object* v_env_1095_; uint8_t v___x_1096_; 
v___x_1094_ = lean_st_ref_get(v___y_1092_);
v_env_1095_ = lean_ctor_get(v___x_1094_, 0);
lean_inc_ref(v_env_1095_);
lean_dec(v___x_1094_);
lean_inc(v_constName_1089_);
v___x_1096_ = lean_has_compile_error(v_env_1095_, v_constName_1089_);
if (v___x_1096_ == 0)
{
lean_object* v___x_1097_; lean_object* v_env_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1097_ = lean_st_ref_get(v___y_1092_);
v_env_1098_ = lean_ctor_get(v___x_1097_, 0);
lean_inc_ref(v_env_1098_);
lean_dec(v___x_1097_);
v___x_1099_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1091_);
v___x_1100_ = l_Lean_Environment_evalConst___redArg(v_env_1098_, v___x_1099_, v_constName_1089_, v_checkMeta_1090_);
lean_dec(v_constName_1089_);
lean_dec_ref(v___x_1099_);
lean_dec_ref(v_env_1098_);
v___x_1101_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(v___x_1100_, v___y_1091_, v___y_1092_);
return v___x_1101_;
}
else
{
lean_object* v___x_1102_; 
v___x_1102_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg();
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v___x_1103_; lean_object* v_env_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
lean_dec_ref_known(v___x_1102_, 1);
v___x_1103_ = lean_st_ref_get(v___y_1092_);
v_env_1104_ = lean_ctor_get(v___x_1103_, 0);
lean_inc_ref(v_env_1104_);
lean_dec(v___x_1103_);
v___x_1105_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_1091_);
v___x_1106_ = l_Lean_Environment_evalConst___redArg(v_env_1104_, v___x_1105_, v_constName_1089_, v_checkMeta_1090_);
lean_dec(v_constName_1089_);
lean_dec_ref(v___x_1105_);
lean_dec_ref(v_env_1104_);
v___x_1107_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(v___x_1106_, v___y_1091_, v___y_1092_);
return v___x_1107_;
}
else
{
lean_object* v_a_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1115_; 
lean_dec(v_constName_1089_);
v_a_1108_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1110_ = v___x_1102_;
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_a_1108_);
lean_dec(v___x_1102_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1113_; 
if (v_isShared_1111_ == 0)
{
v___x_1113_ = v___x_1110_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_a_1108_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg___boxed(lean_object* v_constName_1116_, lean_object* v_checkMeta_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
uint8_t v_checkMeta_boxed_1121_; lean_object* v_res_1122_; 
v_checkMeta_boxed_1121_ = lean_unbox(v_checkMeta_1117_);
v_res_1122_ = l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg(v_constName_1116_, v_checkMeta_boxed_1121_, v___y_1118_, v___y_1119_);
lean_dec(v___y_1119_);
lean_dec_ref(v___y_1118_);
return v_res_1122_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1(void){
_start:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1124_ = ((lean_object*)(l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__0));
v___x_1125_ = l_Lean_stringToMessageData(v___x_1124_);
return v___x_1125_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3(void){
_start:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1127_ = ((lean_object*)(l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__2));
v___x_1128_ = l_Lean_stringToMessageData(v___x_1127_);
return v___x_1128_;
}
}
static lean_object* _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5(void){
_start:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1130_ = ((lean_object*)(l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__4));
v___x_1131_ = l_Lean_stringToMessageData(v___x_1130_);
return v___x_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg(lean_object* v_attr_1132_, lean_object* v_parserDecl_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_){
_start:
{
lean_object* v___x_1137_; lean_object* v_env_1138_; lean_object* v___x_1139_; 
v___x_1137_ = lean_st_ref_get(v_a_1135_);
v_env_1138_ = lean_ctor_get(v___x_1137_, 0);
lean_inc_ref(v_env_1138_);
lean_dec(v___x_1137_);
v___x_1139_ = l_Lean_ParserCompiler_CombinatorAttribute_getDeclFor_x3f(v_attr_1132_, v_env_1138_, v_parserDecl_1133_);
if (lean_obj_tag(v___x_1139_) == 1)
{
lean_object* v_val_1140_; uint8_t v___x_1141_; lean_object* v___x_1142_; 
lean_dec(v_parserDecl_1133_);
lean_dec_ref(v_attr_1132_);
v_val_1140_ = lean_ctor_get(v___x_1139_, 0);
lean_inc(v_val_1140_);
lean_dec_ref_known(v___x_1139_, 1);
v___x_1141_ = 1;
v___x_1142_ = l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg(v_val_1140_, v___x_1141_, v_a_1134_, v_a_1135_);
return v___x_1142_;
}
else
{
lean_object* v_impl_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1161_; 
lean_dec(v___x_1139_);
v_impl_1143_ = lean_ctor_get(v_attr_1132_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v_attr_1132_);
if (v_isSharedCheck_1161_ == 0)
{
lean_object* v_unused_1162_; 
v_unused_1162_ = lean_ctor_get(v_attr_1132_, 1);
lean_dec(v_unused_1162_);
v___x_1145_ = v_attr_1132_;
v_isShared_1146_ = v_isSharedCheck_1161_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_impl_1143_);
lean_dec(v_attr_1132_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1161_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v_toAttributeImplCore_1147_; lean_object* v_name_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1152_; 
v_toAttributeImplCore_1147_ = lean_ctor_get(v_impl_1143_, 0);
lean_inc_ref(v_toAttributeImplCore_1147_);
lean_dec_ref(v_impl_1143_);
v_name_1148_ = lean_ctor_get(v_toAttributeImplCore_1147_, 1);
lean_inc(v_name_1148_);
lean_dec_ref(v_toAttributeImplCore_1147_);
v___x_1149_ = lean_obj_once(&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1, &l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1_once, _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__1);
v___x_1150_ = l_Lean_MessageData_ofName(v_name_1148_);
if (v_isShared_1146_ == 0)
{
lean_ctor_set_tag(v___x_1145_, 7);
lean_ctor_set(v___x_1145_, 1, v___x_1150_);
lean_ctor_set(v___x_1145_, 0, v___x_1149_);
v___x_1152_ = v___x_1145_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v___x_1149_);
lean_ctor_set(v_reuseFailAlloc_1160_, 1, v___x_1150_);
v___x_1152_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v___x_1153_ = lean_obj_once(&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3, &l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3_once, _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__3);
v___x_1154_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1152_);
lean_ctor_set(v___x_1154_, 1, v___x_1153_);
v___x_1155_ = l_Lean_MessageData_ofName(v_parserDecl_1133_);
v___x_1156_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1154_);
lean_ctor_set(v___x_1156_, 1, v___x_1155_);
v___x_1157_ = lean_obj_once(&l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5, &l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5_once, _init_l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___closed__5);
v___x_1158_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1156_);
lean_ctor_set(v___x_1158_, 1, v___x_1157_);
v___x_1159_ = l_Lean_throwError___at___00Lean_ParserCompiler_registerCombinatorAttribute_spec__0___redArg(v___x_1158_, v_a_1134_, v_a_1135_);
return v___x_1159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg___boxed(lean_object* v_attr_1163_, lean_object* v_parserDecl_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg(v_attr_1163_, v_parserDecl_1164_, v_a_1165_, v_a_1166_);
lean_dec(v_a_1166_);
lean_dec_ref(v_a_1165_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor(lean_object* v_00_u03b1_1169_, lean_object* v_attr_1170_, lean_object* v_parserDecl_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_){
_start:
{
lean_object* v___x_1175_; 
v___x_1175_ = l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___redArg(v_attr_1170_, v_parserDecl_1171_, v_a_1172_, v_a_1173_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___boxed(lean_object* v_00_u03b1_1176_, lean_object* v_attr_1177_, lean_object* v_parserDecl_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor(v_00_u03b1_1176_, v_attr_1177_, v_parserDecl_1178_, v_a_1179_, v_a_1180_);
lean_dec(v_a_1180_);
lean_dec_ref(v_a_1179_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1(lean_object* v_00_u03b1_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_){
_start:
{
lean_object* v___x_1187_; 
v___x_1187_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___redArg();
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__1(v_00_u03b1_1188_, v___y_1189_, v___y_1190_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0(lean_object* v_00_u03b1_1193_, lean_object* v_constName_1194_, uint8_t v_checkMeta_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___redArg(v_constName_1194_, v_checkMeta_1195_, v___y_1196_, v___y_1197_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0___boxed(lean_object* v_00_u03b1_1200_, lean_object* v_constName_1201_, lean_object* v_checkMeta_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
uint8_t v_checkMeta_boxed_1206_; lean_object* v_res_1207_; 
v_checkMeta_boxed_1206_ = lean_unbox(v_checkMeta_1202_);
v_res_1207_ = l_Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0(v_00_u03b1_1200_, v_constName_1201_, v_checkMeta_boxed_1206_, v___y_1203_, v___y_1204_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0(lean_object* v_00_u03b1_1208_, lean_object* v_x_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___redArg(v_x_1209_, v___y_1210_, v___y_1211_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1214_, lean_object* v_x_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_){
_start:
{
lean_object* v_res_1219_; 
v_res_1219_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_ParserCompiler_CombinatorAttribute_runDeclFor_spec__0_spec__0(v_00_u03b1_1214_, v_x_1215_, v___y_1216_, v___y_1217_);
lean_dec(v___y_1217_);
lean_dec_ref(v___y_1216_);
return v_res_1219_;
}
}
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ParserCompiler_Attribute(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default = _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default();
lean_mark_persistent(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute_default);
l_Lean_ParserCompiler_instInhabitedCombinatorAttribute = _init_l_Lean_ParserCompiler_instInhabitedCombinatorAttribute();
lean_mark_persistent(l_Lean_ParserCompiler_instInhabitedCombinatorAttribute);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ParserCompiler_Attribute(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1 = _init_l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1();
lean_mark_persistent(l_Lean_ParserCompiler_registerCombinatorAttribute___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ParserCompiler_Attribute(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ParserCompiler_Attribute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ParserCompiler_Attribute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ParserCompiler_Attribute(builtin);
}
#ifdef __cplusplus
}
#endif
