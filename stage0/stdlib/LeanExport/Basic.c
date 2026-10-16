// Lean compiler output
// Module: LeanExport.Basic
// Imports: public import Lean public import Std.Data.HashMap.Basic
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
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_balance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_Lean_Name_isInternal(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lean_Json_setObjVal_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
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
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_NameHashSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_NameHashSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getUsedConstants(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Level_param___override(lean_object*);
uint64_t l_Lean_Level_hash(lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint64_t l_Lean_Expr_hash(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_instReprDataValue_repr(lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
extern lean_object* l_Lean_instInhabitedConstantInfo_default;
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_union___at___00Std_DTreeMap_union_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_inductiveVal_x21(lean_object*);
uint8_t l_Lean_ConstantInfo_isUnsafe(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_constants(lean_object*);
lean_object* lean_thunk_get_own(lean_object*);
extern lean_object* l_Lean_githash;
extern lean_object* l_Lean_versionString;
lean_object* l_Lean_ConstMap_toList(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* l_IO_println___redArg(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__0_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "implicit"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__2_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__2_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__3_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "strictImplicit"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__4_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__4_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__5_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "instImplicit"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__6 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__6_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__6_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__7 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__7_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(uint8_t);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___boxed(lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "opaque"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "abbrev"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__2_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__2_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__3_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__4_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson(lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___boxed(lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ctor"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__3_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lift"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__4_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__4_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__5_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ind"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__6 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__6_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__6_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__7 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__7_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson(uint8_t);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___boxed(lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "unsafe"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__0_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "safe"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__2_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__2_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__3_value;
static const lean_string_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "partial"};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__4_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__4_value)}};
static const lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__5_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson(uint8_t);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__Lean_KVMap_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_KVMap_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__0;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__1;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__2;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__3;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__4;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__5;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__6;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__7;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__8;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__9;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__10;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__11;
static lean_once_cell_t l_LeanExport_M_run___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_M_run___redArg___closed__12;
LEAN_EXPORT lean_object* l_LeanExport_M_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_M_run___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_M_run(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_M_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_initState___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_initState___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_any___at___00LeanExport_initState_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "--ignore-missing"};
static const lean_object* l_List_any___at___00LeanExport_initState_spec__2___closed__0 = (const lean_object*)&l_List_any___at___00LeanExport_initState_spec__2___closed__0_value;
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__2___boxed(lean_object*);
static const lean_string_object l_List_any___at___00LeanExport_initState_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "--export-mdata"};
static const lean_object* l_List_any___at___00LeanExport_initState_spec__0___closed__0 = (const lean_object*)&l_List_any___at___00LeanExport_initState_spec__0___closed__0_value;
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__8___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__13___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM___at___00LeanExport_initState_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM___at___00LeanExport_initState_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_any___at___00LeanExport_initState_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "--export-unsafe"};
static const lean_object* l_List_any___at___00LeanExport_initState_spec__1___closed__0 = (const lean_object*)&l_List_any___at___00LeanExport_initState_spec__1___closed__0_value;
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__1___boxed(lean_object*);
static const lean_closure_object l_LeanExport_initState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_LeanExport_initState___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_LeanExport_initState___closed__0 = (const lean_object*)&l_LeanExport_initState___closed__0_value;
LEAN_EXPORT lean_object* l_LeanExport_initState(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_initState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "in"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__0_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "LeanExport.Basic"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "_private.LeanExport.Basic.0.LeanExport.dumpName"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__2_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__5_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pre"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__7 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__7_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__8 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__8_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "il"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__0_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__2_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "imax"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__3_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "param"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__4_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "_private.LeanExport.Basic.0.LeanExport.dumpLevel"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__5_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpUparams(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpUparams___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpNames(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "_private.LeanExport.Basic.0.LeanExport.removeMData"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__0_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__6(lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "LeanExport.dumpConstant"};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 135, .m_capacity = 135, .m_length = 134, .m_data = "assertion violation: ((!ctorVal.isUnsafe) || ( __do_lift._@.LeanExport.Basic.2173241011._hygCtx._hyg.1873.0 ).exportUnsafe)\n          "};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Expected a `ConstantInfo.ctorInfo`."};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__4;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__5_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__6 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__6_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__7 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__7_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 132, .m_capacity = 132, .m_length = 131, .m_data = "assertion violation: ((!recVal.isUnsafe) || ( __do_lift._@.LeanExport.Basic.2173241011._hygCtx._hyg.2114.0 ).exportUnsafe)\n        "};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__0_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__1;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "expected a `constantinfo.recinfo`."};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__3;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19_spec__23(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19_spec__23___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00LeanExport_dumpConstant_spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__15(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_LeanExport_dumpExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpExpr___closed__0;
static lean_once_cell_t l_LeanExport_dumpExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpExpr___closed__1;
static const lean_string_object l_LeanExport_dumpExprAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ie"};
static const lean_object* l_LeanExport_dumpExprAux___closed__0 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__0_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bvar"};
static const lean_object* l_LeanExport_dumpExprAux___closed__1 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__1_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sort"};
static const lean_object* l_LeanExport_dumpExprAux___closed__2 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__2_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "const"};
static const lean_object* l_LeanExport_dumpExprAux___closed__3 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "us"};
static const lean_object* l_LeanExport_dumpExprAux___closed__4 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__4_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_LeanExport_dumpExprAux___closed__5 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__5_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "fn"};
static const lean_object* l_LeanExport_dumpExprAux___closed__6 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__6_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "arg"};
static const lean_object* l_LeanExport_dumpExprAux___closed__7 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__7_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lam"};
static const lean_object* l_LeanExport_dumpExprAux___closed__8 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__8_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "body"};
static const lean_object* l_LeanExport_dumpExprAux___closed__9 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__9_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "binderInfo"};
static const lean_object* l_LeanExport_dumpExprAux___closed__10 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__10_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "forallE"};
static const lean_object* l_LeanExport_dumpExprAux___closed__11 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__11_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "letE"};
static const lean_object* l_LeanExport_dumpExprAux___closed__12 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__12_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_LeanExport_dumpExprAux___closed__13 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__13_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nondep"};
static const lean_object* l_LeanExport_dumpExprAux___closed__14 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__14_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(lean_object*, lean_object*);
static const lean_string_object l_LeanExport_dumpExprAux___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "natVal"};
static const lean_object* l_LeanExport_dumpExprAux___closed__15 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__15_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofList"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__1_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__0_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2_value_aux_0),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__1_value),LEAN_SCALAR_PTR_LITERAL(118, 246, 177, 142, 179, 9, 199, 233)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__4 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__4_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Char"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__3_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__3_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5_value_aux_0),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__4_value),LEAN_SCALAR_PTR_LITERAL(27, 51, 10, 169, 25, 67, 44, 251)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(lean_object*, lean_object*);
static const lean_string_object l_LeanExport_dumpExprAux___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "strVal"};
static const lean_object* l_LeanExport_dumpExprAux___closed__16 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__16_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mdata"};
static const lean_object* l_LeanExport_dumpExprAux___closed__17 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__17_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_LeanExport_dumpExprAux___closed__18 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__18_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "expr"};
static const lean_object* l_LeanExport_dumpExprAux___closed__19 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__19_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_LeanExport_dumpExprAux___closed__20 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__20_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeName"};
static const lean_object* l_LeanExport_dumpExprAux___closed__21 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__21_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "idx"};
static const lean_object* l_LeanExport_dumpExprAux___closed__22 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__22_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "struct"};
static const lean_object* l_LeanExport_dumpExprAux___closed__23 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__23_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "cannot export free variables or metavariables"};
static const lean_object* l_LeanExport_dumpExprAux___closed__25 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__25_value;
static const lean_string_object l_LeanExport_dumpExprAux___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "LeanExport.dumpExprAux"};
static const lean_object* l_LeanExport_dumpExprAux___closed__24 = (const lean_object*)&l_LeanExport_dumpExprAux___closed__24_value;
static lean_once_cell_t l_LeanExport_dumpExprAux___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpExprAux___closed__26;
LEAN_EXPORT lean_object* l_LeanExport_dumpExprAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpExpr(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "levelParams"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numParams"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "numIndices"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ctors"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numNested"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "isRec"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "isReflexive"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isUnsafe"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "induct"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cidx"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numFields"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "nfields"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__0_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rhs"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__1 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__1_value;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "numMotives"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "numMinors"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rules"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "k"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18(size_t, size_t, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_LeanExport_dumpConstant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "inductive"};
static const lean_object* l_LeanExport_dumpConstant___closed__0 = (const lean_object*)&l_LeanExport_dumpConstant___closed__0_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "types"};
static const lean_object* l_LeanExport_dumpConstant___closed__1 = (const lean_object*)&l_LeanExport_dumpConstant___closed__1_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "recs"};
static const lean_object* l_LeanExport_dumpConstant___closed__2 = (const lean_object*)&l_LeanExport_dumpConstant___closed__2_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "axiom"};
static const lean_object* l_LeanExport_dumpConstant___closed__3 = (const lean_object*)&l_LeanExport_dumpConstant___closed__3_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_LeanExport_dumpConstant___closed__4 = (const lean_object*)&l_LeanExport_dumpConstant___closed__4_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "hints"};
static const lean_object* l_LeanExport_dumpConstant___closed__5 = (const lean_object*)&l_LeanExport_dumpConstant___closed__5_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "safety"};
static const lean_object* l_LeanExport_dumpConstant___closed__6 = (const lean_object*)&l_LeanExport_dumpConstant___closed__6_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "thm"};
static const lean_object* l_LeanExport_dumpConstant___closed__7 = (const lean_object*)&l_LeanExport_dumpConstant___closed__7_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_LeanExport_dumpConstant___closed__8 = (const lean_object*)&l_LeanExport_dumpConstant___closed__8_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_LeanExport_dumpConstant___closed__8_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_LeanExport_dumpConstant___closed__9 = (const lean_object*)&l_LeanExport_dumpConstant___closed__9_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Quot"};
static const lean_object* l_LeanExport_dumpConstant___closed__10 = (const lean_object*)&l_LeanExport_dumpConstant___closed__10_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_LeanExport_dumpConstant___closed__10_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_LeanExport_dumpConstant___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__15_value_aux_0),((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__6_value),LEAN_SCALAR_PTR_LITERAL(150, 213, 121, 152, 109, 27, 137, 60)}};
static const lean_object* l_LeanExport_dumpConstant___closed__15 = (const lean_object*)&l_LeanExport_dumpConstant___closed__15_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_LeanExport_dumpConstant___closed__16 = (const lean_object*)&l_LeanExport_dumpConstant___closed__16_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_LeanExport_dumpConstant___closed__10_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_LeanExport_dumpConstant___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__14_value_aux_0),((lean_object*)&l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__4_value),LEAN_SCALAR_PTR_LITERAL(91, 125, 38, 34, 222, 200, 201, 80)}};
static const lean_object* l_LeanExport_dumpConstant___closed__14 = (const lean_object*)&l_LeanExport_dumpConstant___closed__14_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__14_value),((lean_object*)&l_LeanExport_dumpConstant___closed__16_value)}};
static const lean_object* l_LeanExport_dumpConstant___closed__17 = (const lean_object*)&l_LeanExport_dumpConstant___closed__17_value;
static const lean_string_object l_LeanExport_dumpConstant___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_LeanExport_dumpConstant___closed__12 = (const lean_object*)&l_LeanExport_dumpConstant___closed__12_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_LeanExport_dumpConstant___closed__10_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_LeanExport_dumpConstant___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__13_value_aux_0),((lean_object*)&l_LeanExport_dumpConstant___closed__12_value),LEAN_SCALAR_PTR_LITERAL(255, 113, 137, 82, 82, 132, 58, 248)}};
static const lean_object* l_LeanExport_dumpConstant___closed__13 = (const lean_object*)&l_LeanExport_dumpConstant___closed__13_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__13_value),((lean_object*)&l_LeanExport_dumpConstant___closed__17_value)}};
static const lean_object* l_LeanExport_dumpConstant___closed__18 = (const lean_object*)&l_LeanExport_dumpConstant___closed__18_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_LeanExport_dumpConstant___closed__10_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_object* l_LeanExport_dumpConstant___closed__11 = (const lean_object*)&l_LeanExport_dumpConstant___closed__11_value;
static const lean_ctor_object l_LeanExport_dumpConstant___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_LeanExport_dumpConstant___closed__11_value),((lean_object*)&l_LeanExport_dumpConstant___closed__18_value)}};
static const lean_object* l_LeanExport_dumpConstant___closed__19 = (const lean_object*)&l_LeanExport_dumpConstant___closed__19_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Constant "};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = " not found in environment."};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__3_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__4_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "quot"};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__5_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__6 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_LeanExport_dumpConstant___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_LeanExport_dumpConstant___closed__20 = (const lean_object*)&l_LeanExport_dumpConstant___closed__20_value;
static lean_once_cell_t l_LeanExport_dumpConstant___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpConstant___closed__21;
static lean_once_cell_t l_LeanExport_dumpConstant___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpConstant___closed__22;
static const lean_closure_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 367, .m_capacity = 367, .m_length = 366, .m_data = "assertion violation: ctorVals.size == 0\n\n    /- We dump the constructor dependencies (which will not include the inductives in this block since we've\n    added the names to `visitedConstants`) before actually outputting anything in this inductive block to\n    ensure e.g. the `LT` in `Fin.mk` is dumped before this inductive block appears in the export file. -/\n    "};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__1_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__2;
static const lean_string_object l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 127, .m_capacity = 127, .m_length = 126, .m_data = "assertion violation: ((!val.isUnsafe) || ( __do_lift._@.LeanExport.Basic.2173241011._hygCtx._hyg.1797.0 ).exportUnsafe)\n      "};
static const lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__3_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__4;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__20(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpConstant(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpExprAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpConstant___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "githash"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__3 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__3_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "lean4export"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__9 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__9_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__9_value)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__10 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__10_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0_value),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__10_value)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__11 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__11_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "3.1.0"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__12 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__12_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__12_value)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__13 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__13_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0_value),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__13_value)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__14 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__14_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15_value;
static const lean_ctor_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__11_value),((lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15_value)}};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__16 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__16_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__19 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__19_value;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "exporter"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__20 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__20_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__22 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__22_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23;
static const lean_string_object l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "format"};
static const lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__24 = (const lean_object*)&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__24_value;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31;
static lean_once_cell_t l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32;
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_exportMetadata;
static lean_once_cell_t l_LeanExport_dumpMetadata___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_LeanExport_dumpMetadata___redArg___closed__0;
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___redArg(lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00LeanExport_dumpEnv_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00LeanExport_dumpEnv_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(uint8_t v_x_13_){
_start:
{
switch(v_x_13_)
{
case 0:
{
lean_object* v___x_14_; 
v___x_14_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__1));
return v___x_14_;
}
case 1:
{
lean_object* v___x_15_; 
v___x_15_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__3));
return v___x_15_;
}
case 2:
{
lean_object* v___x_16_; 
v___x_16_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__5));
return v___x_16_;
}
default: 
{
lean_object* v___x_17_; 
v___x_17_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___closed__7));
return v___x_17_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson___boxed(lean_object* v_x_18_){
_start:
{
uint8_t v_x_64__boxed_19_; lean_object* v_res_20_; 
v_x_64__boxed_19_ = lean_unbox(v_x_18_);
v_res_20_ = l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(v_x_64__boxed_19_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson(lean_object* v_x_28_){
_start:
{
switch(lean_obj_tag(v_x_28_))
{
case 0:
{
lean_object* v___x_29_; 
v___x_29_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__1));
return v___x_29_;
}
case 1:
{
lean_object* v___x_30_; 
v___x_30_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__3));
return v___x_30_;
}
default: 
{
uint32_t v_a_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v_a_31_ = lean_ctor_get_uint32(v_x_28_, 0);
v___x_32_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__4));
v___x_33_ = lean_uint32_to_nat(v_a_31_);
v___x_34_ = l_Lean_JsonNumber_fromNat(v___x_33_);
v___x_35_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v___x_32_);
lean_ctor_set(v___x_36_, 1, v___x_35_);
v___x_37_ = lean_box(0);
v___x_38_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_36_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
v___x_39_ = l_Lean_Json_mkObj(v___x_38_);
lean_dec_ref_known(v___x_38_, 2);
return v___x_39_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___boxed(lean_object* v_x_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson(v_x_40_);
lean_dec(v_x_40_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson(uint8_t v_x_54_){
_start:
{
switch(v_x_54_)
{
case 0:
{
lean_object* v___x_55_; 
v___x_55_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__1));
return v___x_55_;
}
case 1:
{
lean_object* v___x_56_; 
v___x_56_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__3));
return v___x_56_;
}
case 2:
{
lean_object* v___x_57_; 
v___x_57_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__5));
return v___x_57_;
}
default: 
{
lean_object* v___x_58_; 
v___x_58_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__7));
return v___x_58_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___boxed(lean_object* v_x_59_){
_start:
{
uint8_t v_x_64__boxed_60_; lean_object* v_res_61_; 
v_x_64__boxed_60_ = lean_unbox(v_x_59_);
v_res_61_ = l___private_LeanExport_Basic_0__Lean_QuotKind_toJson(v_x_64__boxed_60_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson(uint8_t v_x_71_){
_start:
{
switch(v_x_71_)
{
case 0:
{
lean_object* v___x_72_; 
v___x_72_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__1));
return v___x_72_;
}
case 1:
{
lean_object* v___x_73_; 
v___x_73_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__3));
return v___x_73_;
}
default: 
{
lean_object* v___x_74_; 
v___x_74_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___closed__5));
return v___x_74_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson___boxed(lean_object* v_x_75_){
_start:
{
uint8_t v_x_49__boxed_76_; lean_object* v_res_77_; 
v_x_49__boxed_76_ = lean_unbox(v_x_75_);
v_res_77_ = l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson(v_x_49__boxed_76_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__Lean_KVMap_toJson_spec__0(lean_object* v_a_78_, lean_object* v_a_79_){
_start:
{
if (lean_obj_tag(v_a_78_) == 0)
{
lean_object* v___x_80_; 
v___x_80_ = l_List_reverse___redArg(v_a_79_);
return v___x_80_;
}
else
{
lean_object* v_head_81_; lean_object* v_tail_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_106_; 
v_head_81_ = lean_ctor_get(v_a_78_, 0);
v_tail_82_ = lean_ctor_get(v_a_78_, 1);
v_isSharedCheck_106_ = !lean_is_exclusive(v_a_78_);
if (v_isSharedCheck_106_ == 0)
{
v___x_84_ = v_a_78_;
v_isShared_85_ = v_isSharedCheck_106_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_tail_82_);
lean_inc(v_head_81_);
lean_dec(v_a_78_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_106_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v_fst_86_; lean_object* v_snd_87_; lean_object* v___x_89_; uint8_t v_isShared_90_; uint8_t v_isSharedCheck_105_; 
v_fst_86_ = lean_ctor_get(v_head_81_, 0);
v_snd_87_ = lean_ctor_get(v_head_81_, 1);
v_isSharedCheck_105_ = !lean_is_exclusive(v_head_81_);
if (v_isSharedCheck_105_ == 0)
{
v___x_89_ = v_head_81_;
v_isShared_90_ = v_isSharedCheck_105_;
goto v_resetjp_88_;
}
else
{
lean_inc(v_snd_87_);
lean_inc(v_fst_86_);
lean_dec(v_head_81_);
v___x_89_ = lean_box(0);
v_isShared_90_ = v_isSharedCheck_105_;
goto v_resetjp_88_;
}
v_resetjp_88_:
{
uint8_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_99_; 
v___x_91_ = 1;
v___x_92_ = l_Lean_Name_toString(v_fst_86_, v___x_91_);
v___x_93_ = lean_unsigned_to_nat(0u);
v___x_94_ = l_Lean_instReprDataValue_repr(v_snd_87_, v___x_93_);
v___x_95_ = l_Std_Format_defWidth;
v___x_96_ = l_Std_Format_pretty(v___x_94_, v___x_95_, v___x_93_, v___x_93_);
v___x_97_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
if (v_isShared_90_ == 0)
{
lean_ctor_set(v___x_89_, 1, v___x_97_);
lean_ctor_set(v___x_89_, 0, v___x_92_);
v___x_99_ = v___x_89_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_104_, 1, v___x_97_);
v___x_99_ = v_reuseFailAlloc_104_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
lean_object* v___x_101_; 
if (v_isShared_85_ == 0)
{
lean_ctor_set(v___x_84_, 1, v_a_79_);
lean_ctor_set(v___x_84_, 0, v___x_99_);
v___x_101_ = v___x_84_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_99_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v_a_79_);
v___x_101_ = v_reuseFailAlloc_103_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
v_a_78_ = v_tail_82_;
v_a_79_ = v___x_101_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__Lean_KVMap_toJson(lean_object* v_kvs_107_){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_108_ = lean_box(0);
v___x_109_ = l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__Lean_KVMap_toJson_spec__0(v_kvs_107_, v___x_108_);
v___x_110_ = l_Lean_Json_mkObj(v___x_109_);
lean_dec(v___x_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2___redArg(lean_object* v_a_111_, lean_object* v_b_112_, lean_object* v_x_113_){
_start:
{
if (lean_obj_tag(v_x_113_) == 0)
{
lean_dec(v_b_112_);
lean_dec(v_a_111_);
return v_x_113_;
}
else
{
lean_object* v_key_114_; lean_object* v_value_115_; lean_object* v_tail_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_128_; 
v_key_114_ = lean_ctor_get(v_x_113_, 0);
v_value_115_ = lean_ctor_get(v_x_113_, 1);
v_tail_116_ = lean_ctor_get(v_x_113_, 2);
v_isSharedCheck_128_ = !lean_is_exclusive(v_x_113_);
if (v_isSharedCheck_128_ == 0)
{
v___x_118_ = v_x_113_;
v_isShared_119_ = v_isSharedCheck_128_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_tail_116_);
lean_inc(v_value_115_);
lean_inc(v_key_114_);
lean_dec(v_x_113_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_128_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
uint8_t v___x_120_; 
v___x_120_ = lean_name_eq(v_key_114_, v_a_111_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; lean_object* v___x_123_; 
v___x_121_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2___redArg(v_a_111_, v_b_112_, v_tail_116_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 2, v___x_121_);
v___x_123_ = v___x_118_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v_key_114_);
lean_ctor_set(v_reuseFailAlloc_124_, 1, v_value_115_);
lean_ctor_set(v_reuseFailAlloc_124_, 2, v___x_121_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
else
{
lean_object* v___x_126_; 
lean_dec(v_value_115_);
lean_dec(v_key_114_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 1, v_b_112_);
lean_ctor_set(v___x_118_, 0, v_a_111_);
v___x_126_ = v___x_118_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_a_111_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v_b_112_);
lean_ctor_set(v_reuseFailAlloc_127_, 2, v_tail_116_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_129_, lean_object* v_x_130_){
_start:
{
if (lean_obj_tag(v_x_130_) == 0)
{
return v_x_129_;
}
else
{
lean_object* v_key_131_; lean_object* v_value_132_; lean_object* v_tail_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_159_; 
v_key_131_ = lean_ctor_get(v_x_130_, 0);
v_value_132_ = lean_ctor_get(v_x_130_, 1);
v_tail_133_ = lean_ctor_get(v_x_130_, 2);
v_isSharedCheck_159_ = !lean_is_exclusive(v_x_130_);
if (v_isSharedCheck_159_ == 0)
{
v___x_135_ = v_x_130_;
v_isShared_136_ = v_isSharedCheck_159_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_tail_133_);
lean_inc(v_value_132_);
lean_inc(v_key_131_);
lean_dec(v_x_130_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_159_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; uint64_t v___y_139_; 
v___x_137_ = lean_array_get_size(v_x_129_);
if (lean_obj_tag(v_key_131_) == 0)
{
uint64_t v___x_157_; 
v___x_157_ = 1723ULL;
v___y_139_ = v___x_157_;
goto v___jp_138_;
}
else
{
uint64_t v_hash_158_; 
v_hash_158_ = lean_ctor_get_uint64(v_key_131_, sizeof(void*)*2);
v___y_139_ = v_hash_158_;
goto v___jp_138_;
}
v___jp_138_:
{
uint64_t v___x_140_; uint64_t v___x_141_; uint64_t v_fold_142_; uint64_t v___x_143_; uint64_t v___x_144_; uint64_t v___x_145_; size_t v___x_146_; size_t v___x_147_; size_t v___x_148_; size_t v___x_149_; size_t v___x_150_; lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_140_ = 32ULL;
v___x_141_ = lean_uint64_shift_right(v___y_139_, v___x_140_);
v_fold_142_ = lean_uint64_xor(v___y_139_, v___x_141_);
v___x_143_ = 16ULL;
v___x_144_ = lean_uint64_shift_right(v_fold_142_, v___x_143_);
v___x_145_ = lean_uint64_xor(v_fold_142_, v___x_144_);
v___x_146_ = lean_uint64_to_usize(v___x_145_);
v___x_147_ = lean_usize_of_nat(v___x_137_);
v___x_148_ = ((size_t)1ULL);
v___x_149_ = lean_usize_sub(v___x_147_, v___x_148_);
v___x_150_ = lean_usize_land(v___x_146_, v___x_149_);
v___x_151_ = lean_array_uget_borrowed(v_x_129_, v___x_150_);
lean_inc(v___x_151_);
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 2, v___x_151_);
v___x_153_ = v___x_135_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_key_131_);
lean_ctor_set(v_reuseFailAlloc_156_, 1, v_value_132_);
lean_ctor_set(v_reuseFailAlloc_156_, 2, v___x_151_);
v___x_153_ = v_reuseFailAlloc_156_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
lean_object* v___x_154_; 
v___x_154_ = lean_array_uset(v_x_129_, v___x_150_, v___x_153_);
v_x_129_ = v___x_154_;
v_x_130_ = v_tail_133_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2___redArg(lean_object* v_i_160_, lean_object* v_source_161_, lean_object* v_target_162_){
_start:
{
lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_163_ = lean_array_get_size(v_source_161_);
v___x_164_ = lean_nat_dec_lt(v_i_160_, v___x_163_);
if (v___x_164_ == 0)
{
lean_dec_ref(v_source_161_);
lean_dec(v_i_160_);
return v_target_162_;
}
else
{
lean_object* v_es_165_; lean_object* v___x_166_; lean_object* v_source_167_; lean_object* v_target_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v_es_165_ = lean_array_fget(v_source_161_, v_i_160_);
v___x_166_ = lean_box(0);
v_source_167_ = lean_array_fset(v_source_161_, v_i_160_, v___x_166_);
v_target_168_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4___redArg(v_target_162_, v_es_165_);
v___x_169_ = lean_unsigned_to_nat(1u);
v___x_170_ = lean_nat_add(v_i_160_, v___x_169_);
lean_dec(v_i_160_);
v_i_160_ = v___x_170_;
v_source_161_ = v_source_167_;
v_target_162_ = v_target_168_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1___redArg(lean_object* v_data_172_){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v_nbuckets_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_173_ = lean_array_get_size(v_data_172_);
v___x_174_ = lean_unsigned_to_nat(2u);
v_nbuckets_175_ = lean_nat_mul(v___x_173_, v___x_174_);
v___x_176_ = lean_unsigned_to_nat(0u);
v___x_177_ = lean_box(0);
v___x_178_ = lean_mk_array(v_nbuckets_175_, v___x_177_);
v___x_179_ = lean_array_propagate_mark(v_data_172_, v___x_178_);
v___x_180_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2___redArg(v___x_176_, v_data_172_, v___x_179_);
return v___x_180_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg(lean_object* v_a_181_, lean_object* v_x_182_){
_start:
{
if (lean_obj_tag(v_x_182_) == 0)
{
uint8_t v___x_183_; 
v___x_183_ = 0;
return v___x_183_;
}
else
{
lean_object* v_key_184_; lean_object* v_tail_185_; uint8_t v___x_186_; 
v_key_184_ = lean_ctor_get(v_x_182_, 0);
v_tail_185_ = lean_ctor_get(v_x_182_, 2);
v___x_186_ = lean_name_eq(v_key_184_, v_a_181_);
if (v___x_186_ == 0)
{
v_x_182_ = v_tail_185_;
goto _start;
}
else
{
return v___x_186_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg___boxed(lean_object* v_a_188_, lean_object* v_x_189_){
_start:
{
uint8_t v_res_190_; lean_object* v_r_191_; 
v_res_190_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg(v_a_188_, v_x_189_);
lean_dec(v_x_189_);
lean_dec(v_a_188_);
v_r_191_ = lean_box(v_res_190_);
return v_r_191_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(lean_object* v_m_192_, lean_object* v_a_193_, lean_object* v_b_194_){
_start:
{
lean_object* v_size_195_; lean_object* v_buckets_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_242_; 
v_size_195_ = lean_ctor_get(v_m_192_, 0);
v_buckets_196_ = lean_ctor_get(v_m_192_, 1);
v_isSharedCheck_242_ = !lean_is_exclusive(v_m_192_);
if (v_isSharedCheck_242_ == 0)
{
v___x_198_ = v_m_192_;
v_isShared_199_ = v_isSharedCheck_242_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_buckets_196_);
lean_inc(v_size_195_);
lean_dec(v_m_192_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_242_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_200_; uint64_t v___y_202_; 
v___x_200_ = lean_array_get_size(v_buckets_196_);
if (lean_obj_tag(v_a_193_) == 0)
{
uint64_t v___x_240_; 
v___x_240_ = 1723ULL;
v___y_202_ = v___x_240_;
goto v___jp_201_;
}
else
{
uint64_t v_hash_241_; 
v_hash_241_ = lean_ctor_get_uint64(v_a_193_, sizeof(void*)*2);
v___y_202_ = v_hash_241_;
goto v___jp_201_;
}
v___jp_201_:
{
uint64_t v___x_203_; uint64_t v___x_204_; uint64_t v_fold_205_; uint64_t v___x_206_; uint64_t v___x_207_; uint64_t v___x_208_; size_t v___x_209_; size_t v___x_210_; size_t v___x_211_; size_t v___x_212_; size_t v___x_213_; lean_object* v_bkt_214_; uint8_t v___x_215_; 
v___x_203_ = 32ULL;
v___x_204_ = lean_uint64_shift_right(v___y_202_, v___x_203_);
v_fold_205_ = lean_uint64_xor(v___y_202_, v___x_204_);
v___x_206_ = 16ULL;
v___x_207_ = lean_uint64_shift_right(v_fold_205_, v___x_206_);
v___x_208_ = lean_uint64_xor(v_fold_205_, v___x_207_);
v___x_209_ = lean_uint64_to_usize(v___x_208_);
v___x_210_ = lean_usize_of_nat(v___x_200_);
v___x_211_ = ((size_t)1ULL);
v___x_212_ = lean_usize_sub(v___x_210_, v___x_211_);
v___x_213_ = lean_usize_land(v___x_209_, v___x_212_);
v_bkt_214_ = lean_array_uget_borrowed(v_buckets_196_, v___x_213_);
v___x_215_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg(v_a_193_, v_bkt_214_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; lean_object* v_size_x27_217_; lean_object* v___x_218_; lean_object* v_buckets_x27_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; uint8_t v___x_225_; 
v___x_216_ = lean_unsigned_to_nat(1u);
v_size_x27_217_ = lean_nat_add(v_size_195_, v___x_216_);
lean_dec(v_size_195_);
lean_inc(v_bkt_214_);
v___x_218_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_218_, 0, v_a_193_);
lean_ctor_set(v___x_218_, 1, v_b_194_);
lean_ctor_set(v___x_218_, 2, v_bkt_214_);
v_buckets_x27_219_ = lean_array_uset(v_buckets_196_, v___x_213_, v___x_218_);
v___x_220_ = lean_unsigned_to_nat(4u);
v___x_221_ = lean_nat_mul(v_size_x27_217_, v___x_220_);
v___x_222_ = lean_unsigned_to_nat(3u);
v___x_223_ = lean_nat_div(v___x_221_, v___x_222_);
lean_dec(v___x_221_);
v___x_224_ = lean_array_get_size(v_buckets_x27_219_);
v___x_225_ = lean_nat_dec_le(v___x_223_, v___x_224_);
lean_dec(v___x_223_);
if (v___x_225_ == 0)
{
lean_object* v_val_226_; lean_object* v___x_228_; 
v_val_226_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1___redArg(v_buckets_x27_219_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 1, v_val_226_);
lean_ctor_set(v___x_198_, 0, v_size_x27_217_);
v___x_228_ = v___x_198_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v_size_x27_217_);
lean_ctor_set(v_reuseFailAlloc_229_, 1, v_val_226_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
return v___x_228_;
}
}
else
{
lean_object* v___x_231_; 
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 1, v_buckets_x27_219_);
lean_ctor_set(v___x_198_, 0, v_size_x27_217_);
v___x_231_ = v___x_198_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v_size_x27_217_);
lean_ctor_set(v_reuseFailAlloc_232_, 1, v_buckets_x27_219_);
v___x_231_ = v_reuseFailAlloc_232_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
return v___x_231_;
}
}
}
else
{
lean_object* v___x_233_; lean_object* v_buckets_x27_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_238_; 
lean_inc(v_bkt_214_);
v___x_233_ = lean_box(0);
v_buckets_x27_234_ = lean_array_uset(v_buckets_196_, v___x_213_, v___x_233_);
v___x_235_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2___redArg(v_a_193_, v_b_194_, v_bkt_214_);
v___x_236_ = lean_array_uset(v_buckets_x27_234_, v___x_213_, v___x_235_);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 1, v___x_236_);
v___x_238_ = v___x_198_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_size_195_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v___x_236_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6___redArg(lean_object* v_a_243_, lean_object* v_b_244_, lean_object* v_x_245_){
_start:
{
if (lean_obj_tag(v_x_245_) == 0)
{
lean_dec(v_b_244_);
lean_dec(v_a_243_);
return v_x_245_;
}
else
{
lean_object* v_key_246_; lean_object* v_value_247_; lean_object* v_tail_248_; lean_object* v___x_250_; uint8_t v_isShared_251_; uint8_t v_isSharedCheck_260_; 
v_key_246_ = lean_ctor_get(v_x_245_, 0);
v_value_247_ = lean_ctor_get(v_x_245_, 1);
v_tail_248_ = lean_ctor_get(v_x_245_, 2);
v_isSharedCheck_260_ = !lean_is_exclusive(v_x_245_);
if (v_isSharedCheck_260_ == 0)
{
v___x_250_ = v_x_245_;
v_isShared_251_ = v_isSharedCheck_260_;
goto v_resetjp_249_;
}
else
{
lean_inc(v_tail_248_);
lean_inc(v_value_247_);
lean_inc(v_key_246_);
lean_dec(v_x_245_);
v___x_250_ = lean_box(0);
v_isShared_251_ = v_isSharedCheck_260_;
goto v_resetjp_249_;
}
v_resetjp_249_:
{
uint8_t v___x_252_; 
v___x_252_ = lean_level_eq(v_key_246_, v_a_243_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; lean_object* v___x_255_; 
v___x_253_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6___redArg(v_a_243_, v_b_244_, v_tail_248_);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 2, v___x_253_);
v___x_255_ = v___x_250_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_key_246_);
lean_ctor_set(v_reuseFailAlloc_256_, 1, v_value_247_);
lean_ctor_set(v_reuseFailAlloc_256_, 2, v___x_253_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
else
{
lean_object* v___x_258_; 
lean_dec(v_value_247_);
lean_dec(v_key_246_);
if (v_isShared_251_ == 0)
{
lean_ctor_set(v___x_250_, 1, v_b_244_);
lean_ctor_set(v___x_250_, 0, v_a_243_);
v___x_258_ = v___x_250_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_a_243_);
lean_ctor_set(v_reuseFailAlloc_259_, 1, v_b_244_);
lean_ctor_set(v_reuseFailAlloc_259_, 2, v_tail_248_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9___redArg(lean_object* v_x_261_, lean_object* v_x_262_){
_start:
{
if (lean_obj_tag(v_x_262_) == 0)
{
return v_x_261_;
}
else
{
lean_object* v_key_263_; lean_object* v_value_264_; lean_object* v_tail_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_288_; 
v_key_263_ = lean_ctor_get(v_x_262_, 0);
v_value_264_ = lean_ctor_get(v_x_262_, 1);
v_tail_265_ = lean_ctor_get(v_x_262_, 2);
v_isSharedCheck_288_ = !lean_is_exclusive(v_x_262_);
if (v_isSharedCheck_288_ == 0)
{
v___x_267_ = v_x_262_;
v_isShared_268_ = v_isSharedCheck_288_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_tail_265_);
lean_inc(v_value_264_);
lean_inc(v_key_263_);
lean_dec(v_x_262_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_288_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_269_; uint64_t v___x_270_; uint64_t v___x_271_; uint64_t v___x_272_; uint64_t v_fold_273_; uint64_t v___x_274_; uint64_t v___x_275_; uint64_t v___x_276_; size_t v___x_277_; size_t v___x_278_; size_t v___x_279_; size_t v___x_280_; size_t v___x_281_; lean_object* v___x_282_; lean_object* v___x_284_; 
v___x_269_ = lean_array_get_size(v_x_261_);
v___x_270_ = l_Lean_Level_hash(v_key_263_);
v___x_271_ = 32ULL;
v___x_272_ = lean_uint64_shift_right(v___x_270_, v___x_271_);
v_fold_273_ = lean_uint64_xor(v___x_270_, v___x_272_);
v___x_274_ = 16ULL;
v___x_275_ = lean_uint64_shift_right(v_fold_273_, v___x_274_);
v___x_276_ = lean_uint64_xor(v_fold_273_, v___x_275_);
v___x_277_ = lean_uint64_to_usize(v___x_276_);
v___x_278_ = lean_usize_of_nat(v___x_269_);
v___x_279_ = ((size_t)1ULL);
v___x_280_ = lean_usize_sub(v___x_278_, v___x_279_);
v___x_281_ = lean_usize_land(v___x_277_, v___x_280_);
v___x_282_ = lean_array_uget_borrowed(v_x_261_, v___x_281_);
lean_inc(v___x_282_);
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 2, v___x_282_);
v___x_284_ = v___x_267_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_key_263_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v_value_264_);
lean_ctor_set(v_reuseFailAlloc_287_, 2, v___x_282_);
v___x_284_ = v_reuseFailAlloc_287_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
lean_object* v___x_285_; 
v___x_285_ = lean_array_uset(v_x_261_, v___x_281_, v___x_284_);
v_x_261_ = v___x_285_;
v_x_262_ = v_tail_265_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7___redArg(lean_object* v_i_289_, lean_object* v_source_290_, lean_object* v_target_291_){
_start:
{
lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_292_ = lean_array_get_size(v_source_290_);
v___x_293_ = lean_nat_dec_lt(v_i_289_, v___x_292_);
if (v___x_293_ == 0)
{
lean_dec_ref(v_source_290_);
lean_dec(v_i_289_);
return v_target_291_;
}
else
{
lean_object* v_es_294_; lean_object* v___x_295_; lean_object* v_source_296_; lean_object* v_target_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v_es_294_ = lean_array_fget(v_source_290_, v_i_289_);
v___x_295_ = lean_box(0);
v_source_296_ = lean_array_fset(v_source_290_, v_i_289_, v___x_295_);
v_target_297_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9___redArg(v_target_291_, v_es_294_);
v___x_298_ = lean_unsigned_to_nat(1u);
v___x_299_ = lean_nat_add(v_i_289_, v___x_298_);
lean_dec(v_i_289_);
v_i_289_ = v___x_299_;
v_source_290_ = v_source_296_;
v_target_291_ = v_target_297_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5___redArg(lean_object* v_data_301_){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v_nbuckets_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_302_ = lean_array_get_size(v_data_301_);
v___x_303_ = lean_unsigned_to_nat(2u);
v_nbuckets_304_ = lean_nat_mul(v___x_302_, v___x_303_);
v___x_305_ = lean_unsigned_to_nat(0u);
v___x_306_ = lean_box(0);
v___x_307_ = lean_mk_array(v_nbuckets_304_, v___x_306_);
v___x_308_ = lean_array_propagate_mark(v_data_301_, v___x_307_);
v___x_309_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7___redArg(v___x_305_, v_data_301_, v___x_308_);
return v___x_309_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg(lean_object* v_a_310_, lean_object* v_x_311_){
_start:
{
if (lean_obj_tag(v_x_311_) == 0)
{
uint8_t v___x_312_; 
v___x_312_ = 0;
return v___x_312_;
}
else
{
lean_object* v_key_313_; lean_object* v_tail_314_; uint8_t v___x_315_; 
v_key_313_ = lean_ctor_get(v_x_311_, 0);
v_tail_314_ = lean_ctor_get(v_x_311_, 2);
v___x_315_ = lean_level_eq(v_key_313_, v_a_310_);
if (v___x_315_ == 0)
{
v_x_311_ = v_tail_314_;
goto _start;
}
else
{
return v___x_315_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg___boxed(lean_object* v_a_317_, lean_object* v_x_318_){
_start:
{
uint8_t v_res_319_; lean_object* v_r_320_; 
v_res_319_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg(v_a_317_, v_x_318_);
lean_dec(v_x_318_);
lean_dec(v_a_317_);
v_r_320_ = lean_box(v_res_319_);
return v_r_320_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(lean_object* v_m_321_, lean_object* v_a_322_, lean_object* v_b_323_){
_start:
{
lean_object* v_size_324_; lean_object* v_buckets_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_368_; 
v_size_324_ = lean_ctor_get(v_m_321_, 0);
v_buckets_325_ = lean_ctor_get(v_m_321_, 1);
v_isSharedCheck_368_ = !lean_is_exclusive(v_m_321_);
if (v_isSharedCheck_368_ == 0)
{
v___x_327_ = v_m_321_;
v_isShared_328_ = v_isSharedCheck_368_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_buckets_325_);
lean_inc(v_size_324_);
lean_dec(v_m_321_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_368_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_329_; uint64_t v___x_330_; uint64_t v___x_331_; uint64_t v___x_332_; uint64_t v_fold_333_; uint64_t v___x_334_; uint64_t v___x_335_; uint64_t v___x_336_; size_t v___x_337_; size_t v___x_338_; size_t v___x_339_; size_t v___x_340_; size_t v___x_341_; lean_object* v_bkt_342_; uint8_t v___x_343_; 
v___x_329_ = lean_array_get_size(v_buckets_325_);
v___x_330_ = l_Lean_Level_hash(v_a_322_);
v___x_331_ = 32ULL;
v___x_332_ = lean_uint64_shift_right(v___x_330_, v___x_331_);
v_fold_333_ = lean_uint64_xor(v___x_330_, v___x_332_);
v___x_334_ = 16ULL;
v___x_335_ = lean_uint64_shift_right(v_fold_333_, v___x_334_);
v___x_336_ = lean_uint64_xor(v_fold_333_, v___x_335_);
v___x_337_ = lean_uint64_to_usize(v___x_336_);
v___x_338_ = lean_usize_of_nat(v___x_329_);
v___x_339_ = ((size_t)1ULL);
v___x_340_ = lean_usize_sub(v___x_338_, v___x_339_);
v___x_341_ = lean_usize_land(v___x_337_, v___x_340_);
v_bkt_342_ = lean_array_uget_borrowed(v_buckets_325_, v___x_341_);
v___x_343_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg(v_a_322_, v_bkt_342_);
if (v___x_343_ == 0)
{
lean_object* v___x_344_; lean_object* v_size_x27_345_; lean_object* v___x_346_; lean_object* v_buckets_x27_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_344_ = lean_unsigned_to_nat(1u);
v_size_x27_345_ = lean_nat_add(v_size_324_, v___x_344_);
lean_dec(v_size_324_);
lean_inc(v_bkt_342_);
v___x_346_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_346_, 0, v_a_322_);
lean_ctor_set(v___x_346_, 1, v_b_323_);
lean_ctor_set(v___x_346_, 2, v_bkt_342_);
v_buckets_x27_347_ = lean_array_uset(v_buckets_325_, v___x_341_, v___x_346_);
v___x_348_ = lean_unsigned_to_nat(4u);
v___x_349_ = lean_nat_mul(v_size_x27_345_, v___x_348_);
v___x_350_ = lean_unsigned_to_nat(3u);
v___x_351_ = lean_nat_div(v___x_349_, v___x_350_);
lean_dec(v___x_349_);
v___x_352_ = lean_array_get_size(v_buckets_x27_347_);
v___x_353_ = lean_nat_dec_le(v___x_351_, v___x_352_);
lean_dec(v___x_351_);
if (v___x_353_ == 0)
{
lean_object* v_val_354_; lean_object* v___x_356_; 
v_val_354_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5___redArg(v_buckets_x27_347_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 1, v_val_354_);
lean_ctor_set(v___x_327_, 0, v_size_x27_345_);
v___x_356_ = v___x_327_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v_size_x27_345_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v_val_354_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
else
{
lean_object* v___x_359_; 
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 1, v_buckets_x27_347_);
lean_ctor_set(v___x_327_, 0, v_size_x27_345_);
v___x_359_ = v___x_327_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_size_x27_345_);
lean_ctor_set(v_reuseFailAlloc_360_, 1, v_buckets_x27_347_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
else
{
lean_object* v___x_361_; lean_object* v_buckets_x27_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_366_; 
lean_inc(v_bkt_342_);
v___x_361_ = lean_box(0);
v_buckets_x27_362_ = lean_array_uset(v_buckets_325_, v___x_341_, v___x_361_);
v___x_363_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6___redArg(v_a_322_, v_b_323_, v_bkt_342_);
v___x_364_ = lean_array_uset(v_buckets_x27_362_, v___x_341_, v___x_363_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 1, v___x_364_);
v___x_366_ = v___x_327_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v_size_324_);
lean_ctor_set(v_reuseFailAlloc_367_, 1, v___x_364_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
}
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_369_ = lean_box(0);
v___x_370_ = lean_unsigned_to_nat(524288u);
v___x_371_ = lean_mk_array(v___x_370_, v___x_369_);
return v___x_371_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_372_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__0, &l_LeanExport_M_run___redArg___closed__0_once, _init_l_LeanExport_M_run___redArg___closed__0);
v___x_373_ = lean_unsigned_to_nat(0u);
v___x_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
lean_ctor_set(v___x_374_, 1, v___x_372_);
return v___x_374_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_375_ = lean_unsigned_to_nat(0u);
v___x_376_ = lean_box(0);
v___x_377_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__1, &l_LeanExport_M_run___redArg___closed__1_once, _init_l_LeanExport_M_run___redArg___closed__1);
v___x_378_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(v___x_377_, v___x_376_, v___x_375_);
return v___x_378_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__3(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_379_ = lean_box(0);
v___x_380_ = lean_unsigned_to_nat(2048u);
v___x_381_ = lean_mk_array(v___x_380_, v___x_379_);
return v___x_381_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__4(void){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_382_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__3, &l_LeanExport_M_run___redArg___closed__3_once, _init_l_LeanExport_M_run___redArg___closed__3);
v___x_383_ = lean_unsigned_to_nat(0u);
v___x_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
lean_ctor_set(v___x_384_, 1, v___x_382_);
return v___x_384_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__5(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_385_ = lean_unsigned_to_nat(0u);
v___x_386_ = lean_box(0);
v___x_387_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__4, &l_LeanExport_M_run___redArg___closed__4_once, _init_l_LeanExport_M_run___redArg___closed__4);
v___x_388_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(v___x_387_, v___x_386_, v___x_385_);
return v___x_388_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__6(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_389_ = lean_box(0);
v___x_390_ = lean_unsigned_to_nat(16777216u);
v___x_391_ = lean_mk_array(v___x_390_, v___x_389_);
return v___x_391_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__7(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_392_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__6, &l_LeanExport_M_run___redArg___closed__6_once, _init_l_LeanExport_M_run___redArg___closed__6);
v___x_393_ = lean_unsigned_to_nat(0u);
v___x_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
lean_ctor_set(v___x_394_, 1, v___x_392_);
return v___x_394_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__8(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_395_ = lean_box(0);
v___x_396_ = lean_unsigned_to_nat(16u);
v___x_397_ = lean_mk_array(v___x_396_, v___x_395_);
return v___x_397_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__9(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_398_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__8, &l_LeanExport_M_run___redArg___closed__8_once, _init_l_LeanExport_M_run___redArg___closed__8);
v___x_399_ = lean_unsigned_to_nat(0u);
v___x_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
lean_ctor_set(v___x_400_, 1, v___x_398_);
return v___x_400_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__10(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v___x_401_ = lean_box(0);
v___x_402_ = lean_unsigned_to_nat(262144u);
v___x_403_ = lean_mk_array(v___x_402_, v___x_401_);
return v___x_403_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__11(void){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_404_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__10, &l_LeanExport_M_run___redArg___closed__10_once, _init_l_LeanExport_M_run___redArg___closed__10);
v___x_405_ = lean_unsigned_to_nat(0u);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v___x_404_);
return v___x_406_;
}
}
static lean_object* _init_l_LeanExport_M_run___redArg___closed__12(void){
_start:
{
lean_object* v___x_407_; uint8_t v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_407_ = lean_box(1);
v___x_408_ = 0;
v___x_409_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__11, &l_LeanExport_M_run___redArg___closed__11_once, _init_l_LeanExport_M_run___redArg___closed__11);
v___x_410_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__9, &l_LeanExport_M_run___redArg___closed__9_once, _init_l_LeanExport_M_run___redArg___closed__9);
v___x_411_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__7, &l_LeanExport_M_run___redArg___closed__7_once, _init_l_LeanExport_M_run___redArg___closed__7);
v___x_412_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__5, &l_LeanExport_M_run___redArg___closed__5_once, _init_l_LeanExport_M_run___redArg___closed__5);
v___x_413_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__2, &l_LeanExport_M_run___redArg___closed__2_once, _init_l_LeanExport_M_run___redArg___closed__2);
v___x_414_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_414_, 0, v___x_413_);
lean_ctor_set(v___x_414_, 1, v___x_412_);
lean_ctor_set(v___x_414_, 2, v___x_411_);
lean_ctor_set(v___x_414_, 3, v___x_410_);
lean_ctor_set(v___x_414_, 4, v___x_409_);
lean_ctor_set(v___x_414_, 5, v___x_407_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*6, v___x_408_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*6 + 1, v___x_408_);
lean_ctor_set_uint8(v___x_414_, sizeof(void*)*6 + 2, v___x_408_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_M_run___redArg(lean_object* v_env_415_, lean_object* v_act_416_){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = lean_obj_once(&l_LeanExport_M_run___redArg___closed__12, &l_LeanExport_M_run___redArg___closed__12_once, _init_l_LeanExport_M_run___redArg___closed__12);
v___x_419_ = lean_apply_3(v_act_416_, v_env_415_, v___x_418_, lean_box(0));
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_428_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_428_ == 0)
{
v___x_422_ = v___x_419_;
v_isShared_423_ = v_isSharedCheck_428_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_419_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_428_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v_fst_424_; lean_object* v___x_426_; 
v_fst_424_ = lean_ctor_get(v_a_420_, 0);
lean_inc(v_fst_424_);
lean_dec(v_a_420_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v_fst_424_);
v___x_426_ = v___x_422_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_fst_424_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
else
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_436_; 
v_a_429_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_436_ == 0)
{
v___x_431_ = v___x_419_;
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_419_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_434_; 
if (v_isShared_432_ == 0)
{
v___x_434_ = v___x_431_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_a_429_);
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
LEAN_EXPORT lean_object* l_LeanExport_M_run___redArg___boxed(lean_object* v_env_437_, lean_object* v_act_438_, lean_object* v_a_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_LeanExport_M_run___redArg(v_env_437_, v_act_438_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_M_run(lean_object* v_00_u03b1_441_, lean_object* v_env_442_, lean_object* v_act_443_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_LeanExport_M_run___redArg(v_env_442_, v_act_443_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_M_run___boxed(lean_object* v_00_u03b1_446_, lean_object* v_env_447_, lean_object* v_act_448_, lean_object* v_a_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_LeanExport_M_run(v_00_u03b1_446_, v_env_447_, v_act_448_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0(lean_object* v_00_u03b2_451_, lean_object* v_m_452_, lean_object* v_a_453_, lean_object* v_b_454_){
_start:
{
lean_object* v___x_455_; 
v___x_455_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(v_m_452_, v_a_453_, v_b_454_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1(lean_object* v_00_u03b2_456_, lean_object* v_m_457_, lean_object* v_a_458_, lean_object* v_b_459_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(v_m_457_, v_a_458_, v_b_459_);
return v___x_460_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0(lean_object* v_00_u03b2_461_, lean_object* v_a_462_, lean_object* v_x_463_){
_start:
{
uint8_t v___x_464_; 
v___x_464_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___redArg(v_a_462_, v_x_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0___boxed(lean_object* v_00_u03b2_465_, lean_object* v_a_466_, lean_object* v_x_467_){
_start:
{
uint8_t v_res_468_; lean_object* v_r_469_; 
v_res_468_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__0(v_00_u03b2_465_, v_a_466_, v_x_467_);
lean_dec(v_x_467_);
lean_dec(v_a_466_);
v_r_469_ = lean_box(v_res_468_);
return v_r_469_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1(lean_object* v_00_u03b2_470_, lean_object* v_data_471_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1___redArg(v_data_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2(lean_object* v_00_u03b2_473_, lean_object* v_a_474_, lean_object* v_b_475_, lean_object* v_x_476_){
_start:
{
lean_object* v___x_477_; 
v___x_477_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__2___redArg(v_a_474_, v_b_475_, v_x_476_);
return v___x_477_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4(lean_object* v_00_u03b2_478_, lean_object* v_a_479_, lean_object* v_x_480_){
_start:
{
uint8_t v___x_481_; 
v___x_481_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___redArg(v_a_479_, v_x_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4___boxed(lean_object* v_00_u03b2_482_, lean_object* v_a_483_, lean_object* v_x_484_){
_start:
{
uint8_t v_res_485_; lean_object* v_r_486_; 
v_res_485_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__4(v_00_u03b2_482_, v_a_483_, v_x_484_);
lean_dec(v_x_484_);
lean_dec(v_a_483_);
v_r_486_ = lean_box(v_res_485_);
return v_r_486_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5(lean_object* v_00_u03b2_487_, lean_object* v_data_488_){
_start:
{
lean_object* v___x_489_; 
v___x_489_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5___redArg(v_data_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6(lean_object* v_00_u03b2_490_, lean_object* v_a_491_, lean_object* v_b_492_, lean_object* v_x_493_){
_start:
{
lean_object* v___x_494_; 
v___x_494_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__6___redArg(v_a_491_, v_b_492_, v_x_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_495_, lean_object* v_i_496_, lean_object* v_source_497_, lean_object* v_target_498_){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2___redArg(v_i_496_, v_source_497_, v_target_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7(lean_object* v_00_u03b2_500_, lean_object* v_i_501_, lean_object* v_source_502_, lean_object* v_target_503_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7___redArg(v_i_501_, v_source_502_, v_target_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_505_, lean_object* v_x_506_, lean_object* v_x_507_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0_spec__1_spec__2_spec__4___redArg(v_x_506_, v_x_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9(lean_object* v_00_u03b2_509_, lean_object* v_x_510_, lean_object* v_x_511_){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1_spec__5_spec__7_spec__9___redArg(v_x_510_, v_x_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg___lam__0(lean_object* v_val_513_, lean_object* v_x_514_){
_start:
{
if (lean_obj_tag(v_x_514_) == 0)
{
lean_object* v_toConstantVal_515_; lean_object* v_name_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v_toConstantVal_515_ = lean_ctor_get(v_val_513_, 0);
lean_inc_ref(v_toConstantVal_515_);
lean_dec_ref(v_val_513_);
v_name_516_ = lean_ctor_get(v_toConstantVal_515_, 0);
lean_inc(v_name_516_);
lean_dec_ref(v_toConstantVal_515_);
v___x_517_ = l_Lean_NameSet_empty;
v___x_518_ = l_Lean_NameSet_insert(v___x_517_, v_name_516_);
v___x_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
return v___x_519_;
}
else
{
lean_object* v_toConstantVal_520_; lean_object* v_val_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_530_; 
v_toConstantVal_520_ = lean_ctor_get(v_val_513_, 0);
lean_inc_ref(v_toConstantVal_520_);
lean_dec_ref(v_val_513_);
v_val_521_ = lean_ctor_get(v_x_514_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v_x_514_);
if (v_isSharedCheck_530_ == 0)
{
v___x_523_ = v_x_514_;
v_isShared_524_ = v_isSharedCheck_530_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_val_521_);
lean_dec(v_x_514_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_530_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v_name_525_; lean_object* v___x_526_; lean_object* v___x_528_; 
v_name_525_ = lean_ctor_get(v_toConstantVal_520_, 0);
lean_inc(v_name_525_);
lean_dec_ref(v_toConstantVal_520_);
v___x_526_ = l_Lean_NameSet_insert(v_val_521_, v_name_525_);
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 0, v___x_526_);
v___x_528_ = v___x_523_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v___x_526_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg(lean_object* v_val_531_, lean_object* v_k_532_, lean_object* v_t_533_){
_start:
{
if (lean_obj_tag(v_t_533_) == 0)
{
lean_object* v_size_534_; lean_object* v_k_535_; lean_object* v_v_536_; lean_object* v_l_537_; lean_object* v_r_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_553_; 
v_size_534_ = lean_ctor_get(v_t_533_, 0);
v_k_535_ = lean_ctor_get(v_t_533_, 1);
v_v_536_ = lean_ctor_get(v_t_533_, 2);
v_l_537_ = lean_ctor_get(v_t_533_, 3);
v_r_538_ = lean_ctor_get(v_t_533_, 4);
v_isSharedCheck_553_ = !lean_is_exclusive(v_t_533_);
if (v_isSharedCheck_553_ == 0)
{
v___x_540_ = v_t_533_;
v_isShared_541_ = v_isSharedCheck_553_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_r_538_);
lean_inc(v_l_537_);
lean_inc(v_v_536_);
lean_inc(v_k_535_);
lean_inc(v_size_534_);
lean_dec(v_t_533_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_553_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
uint8_t v___x_542_; 
v___x_542_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_532_, v_k_535_);
switch(v___x_542_)
{
case 0:
{
lean_object* v_impl_543_; lean_object* v___x_544_; 
lean_del_object(v___x_540_);
lean_dec(v_size_534_);
v_impl_543_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg(v_val_531_, v_k_532_, v_l_537_);
v___x_544_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_535_, v_v_536_, v_impl_543_, v_r_538_);
return v___x_544_;
}
case 1:
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v_val_547_; lean_object* v___x_549_; 
lean_dec(v_k_535_);
v___x_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_545_, 0, v_v_536_);
v___x_546_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg___lam__0(v_val_531_, v___x_545_);
v_val_547_ = lean_ctor_get(v___x_546_, 0);
lean_inc(v_val_547_);
lean_dec(v___x_546_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 2, v_val_547_);
lean_ctor_set(v___x_540_, 1, v_k_532_);
v___x_549_ = v___x_540_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v_size_534_);
lean_ctor_set(v_reuseFailAlloc_550_, 1, v_k_532_);
lean_ctor_set(v_reuseFailAlloc_550_, 2, v_val_547_);
lean_ctor_set(v_reuseFailAlloc_550_, 3, v_l_537_);
lean_ctor_set(v_reuseFailAlloc_550_, 4, v_r_538_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
default: 
{
lean_object* v_impl_551_; lean_object* v___x_552_; 
lean_del_object(v___x_540_);
lean_dec(v_size_534_);
v_impl_551_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg(v_val_531_, v_k_532_, v_r_538_);
v___x_552_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_535_, v_v_536_, v_l_537_, v_impl_551_);
return v___x_552_;
}
}
}
}
else
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v_val_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_554_ = lean_box(0);
v___x_555_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg___lam__0(v_val_531_, v___x_554_);
v_val_556_ = lean_ctor_get(v___x_555_, 0);
lean_inc(v_val_556_);
lean_dec(v___x_555_);
v___x_557_ = lean_unsigned_to_nat(1u);
v___x_558_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
lean_ctor_set(v___x_558_, 1, v_k_532_);
lean_ctor_set(v___x_558_, 2, v_val_556_);
lean_ctor_set(v___x_558_, 3, v_t_533_);
lean_ctor_set(v___x_558_, 4, v_t_533_);
return v___x_558_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___redArg(lean_object* v_val_559_, lean_object* v_as_x27_560_, lean_object* v_b_561_, lean_object* v___y_562_){
_start:
{
if (lean_obj_tag(v_as_x27_560_) == 0)
{
lean_object* v___x_564_; lean_object* v___x_565_; 
lean_dec_ref(v_val_559_);
v___x_564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_564_, 0, v_b_561_);
lean_ctor_set(v___x_564_, 1, v___y_562_);
v___x_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
return v___x_565_;
}
else
{
lean_object* v_head_566_; lean_object* v_tail_567_; lean_object* v___x_568_; 
v_head_566_ = lean_ctor_get(v_as_x27_560_, 0);
v_tail_567_ = lean_ctor_get(v_as_x27_560_, 1);
lean_inc(v_head_566_);
lean_inc_ref(v_val_559_);
v___x_568_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg(v_val_559_, v_head_566_, v_b_561_);
v_as_x27_560_ = v_tail_567_;
v_b_561_ = v___x_568_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___redArg___boxed(lean_object* v_val_570_, lean_object* v_as_x27_571_, lean_object* v_b_572_, lean_object* v___y_573_, lean_object* v___y_574_){
_start:
{
lean_object* v_res_575_; 
v_res_575_ = l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___redArg(v_val_570_, v_as_x27_571_, v_b_572_, v___y_573_);
lean_dec(v_as_x27_571_);
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_initState___lam__0(lean_object* v_n_576_, lean_object* v_v_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
lean_object* v_a_583_; lean_object* v_snd_584_; 
if (lean_obj_tag(v_v_577_) == 7)
{
lean_object* v_val_590_; lean_object* v_all_591_; lean_object* v___x_592_; lean_object* v_a_593_; lean_object* v_fst_594_; lean_object* v_snd_595_; 
v_val_590_ = lean_ctor_get(v_v_577_, 0);
lean_inc_ref(v_val_590_);
lean_dec_ref_known(v_v_577_, 1);
v_all_591_ = lean_ctor_get(v_val_590_, 1);
lean_inc(v_all_591_);
v___x_592_ = l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___redArg(v_val_590_, v_all_591_, v___y_578_, v___y_580_);
lean_dec(v_all_591_);
v_a_593_ = lean_ctor_get(v___x_592_, 0);
lean_inc(v_a_593_);
lean_dec_ref(v___x_592_);
v_fst_594_ = lean_ctor_get(v_a_593_, 0);
lean_inc(v_fst_594_);
v_snd_595_ = lean_ctor_get(v_a_593_, 1);
lean_inc(v_snd_595_);
lean_dec(v_a_593_);
v_a_583_ = v_fst_594_;
v_snd_584_ = v_snd_595_;
goto v___jp_582_;
}
else
{
lean_dec_ref(v_v_577_);
v_a_583_ = v___y_578_;
v_snd_584_ = v___y_580_;
goto v___jp_582_;
}
v___jp_582_:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_585_ = lean_box(0);
v___x_586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
lean_ctor_set(v___x_586_, 1, v_a_583_);
v___x_587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_587_, 0, v___x_586_);
v___x_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
lean_ctor_set(v___x_588_, 1, v_snd_584_);
v___x_589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_589_, 0, v___x_588_);
return v___x_589_;
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_initState___lam__0___boxed(lean_object* v_n_596_, lean_object* v_v_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_LeanExport_initState___lam__0(v_n_596_, v_v_597_, v___y_598_, v___y_599_, v___y_600_);
lean_dec_ref(v___y_599_);
lean_dec(v_n_596_);
return v_res_602_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__2(lean_object* v_x_604_){
_start:
{
if (lean_obj_tag(v_x_604_) == 0)
{
uint8_t v___x_605_; 
v___x_605_ = 0;
return v___x_605_;
}
else
{
lean_object* v_head_606_; lean_object* v_tail_607_; lean_object* v___x_608_; uint8_t v___x_609_; 
v_head_606_ = lean_ctor_get(v_x_604_, 0);
v_tail_607_ = lean_ctor_get(v_x_604_, 1);
v___x_608_ = ((lean_object*)(l_List_any___at___00LeanExport_initState_spec__2___closed__0));
v___x_609_ = lean_string_dec_eq(v_head_606_, v___x_608_);
if (v___x_609_ == 0)
{
v_x_604_ = v_tail_607_;
goto _start;
}
else
{
return v___x_609_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__2___boxed(lean_object* v_x_611_){
_start:
{
uint8_t v_res_612_; lean_object* v_r_613_; 
v_res_612_ = l_List_any___at___00LeanExport_initState_spec__2(v_x_611_);
lean_dec(v_x_611_);
v_r_613_ = lean_box(v_res_612_);
return v_r_613_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__0(lean_object* v_x_615_){
_start:
{
if (lean_obj_tag(v_x_615_) == 0)
{
uint8_t v___x_616_; 
v___x_616_ = 0;
return v___x_616_;
}
else
{
lean_object* v_head_617_; lean_object* v_tail_618_; lean_object* v___x_619_; uint8_t v___x_620_; 
v_head_617_ = lean_ctor_get(v_x_615_, 0);
v_tail_618_ = lean_ctor_get(v_x_615_, 1);
v___x_619_ = ((lean_object*)(l_List_any___at___00LeanExport_initState_spec__0___closed__0));
v___x_620_ = lean_string_dec_eq(v_head_617_, v___x_619_);
if (v___x_620_ == 0)
{
v_x_615_ = v_tail_618_;
goto _start;
}
else
{
return v___x_620_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__0___boxed(lean_object* v_x_622_){
_start:
{
uint8_t v_res_623_; lean_object* v_r_624_; 
v_res_623_ = l_List_any___at___00LeanExport_initState_spec__0(v_x_622_);
lean_dec(v_x_622_);
v_r_624_ = lean_box(v_res_623_);
return v_r_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg(lean_object* v_t_625_, lean_object* v_f_626_, lean_object* v_init_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_){
_start:
{
lean_object* v_key_632_; lean_object* v_val_x3f_633_; lean_object* v_children_634_; lean_object* v_s_636_; lean_object* v___y_637_; lean_object* v___y_638_; lean_object* v___y_639_; 
v_key_632_ = lean_ctor_get(v_t_625_, 0);
lean_inc(v_key_632_);
v_val_x3f_633_ = lean_ctor_get(v_t_625_, 1);
lean_inc(v_val_x3f_633_);
v_children_634_ = lean_ctor_get(v_t_625_, 2);
lean_inc_ref(v_children_634_);
lean_dec_ref(v_t_625_);
if (lean_obj_tag(v_val_x3f_633_) == 1)
{
lean_object* v_val_650_; lean_object* v___x_651_; 
v_val_650_ = lean_ctor_get(v_val_x3f_633_, 0);
lean_inc(v_val_650_);
lean_dec_ref_known(v_val_x3f_633_, 1);
lean_inc_ref(v_f_626_);
lean_inc_ref(v___y_629_);
v___x_651_ = lean_apply_7(v_f_626_, v_init_627_, v_key_632_, v_val_650_, v___y_628_, v___y_629_, v___y_630_, lean_box(0));
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v_a_652_; lean_object* v_fst_653_; 
v_a_652_ = lean_ctor_get(v___x_651_, 0);
lean_inc(v_a_652_);
v_fst_653_ = lean_ctor_get(v_a_652_, 0);
if (lean_obj_tag(v_fst_653_) == 0)
{
lean_dec(v_a_652_);
lean_dec_ref(v_children_634_);
lean_dec_ref(v_f_626_);
return v___x_651_;
}
else
{
lean_object* v_a_654_; lean_object* v_snd_655_; lean_object* v_fst_656_; lean_object* v_snd_657_; 
lean_dec_ref_known(v___x_651_, 1);
v_a_654_ = lean_ctor_get(v_fst_653_, 0);
lean_inc(v_a_654_);
v_snd_655_ = lean_ctor_get(v_a_652_, 1);
lean_inc(v_snd_655_);
lean_dec(v_a_652_);
v_fst_656_ = lean_ctor_get(v_a_654_, 0);
lean_inc(v_fst_656_);
v_snd_657_ = lean_ctor_get(v_a_654_, 1);
lean_inc(v_snd_657_);
lean_dec(v_a_654_);
v_s_636_ = v_fst_656_;
v___y_637_ = v_snd_657_;
v___y_638_ = v___y_629_;
v___y_639_ = v_snd_655_;
goto v___jp_635_;
}
}
else
{
lean_dec_ref(v_children_634_);
lean_dec_ref(v_f_626_);
return v___x_651_;
}
}
else
{
lean_dec(v_val_x3f_633_);
lean_dec(v_key_632_);
v_s_636_ = v_init_627_;
v___y_637_ = v___y_628_;
v___y_638_ = v___y_629_;
v___y_639_ = v___y_630_;
goto v___jp_635_;
}
v___jp_635_:
{
lean_object* v___x_640_; lean_object* v___x_641_; uint8_t v___x_642_; 
v___x_640_ = lean_unsigned_to_nat(0u);
v___x_641_ = lean_array_get_size(v_children_634_);
v___x_642_ = lean_nat_dec_lt(v___x_640_, v___x_641_);
if (v___x_642_ == 0)
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
lean_dec_ref(v_children_634_);
lean_dec_ref(v_f_626_);
v___x_643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_643_, 0, v_s_636_);
lean_ctor_set(v___x_643_, 1, v___y_637_);
v___x_644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
v___x_645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
lean_ctor_set(v___x_645_, 1, v___y_639_);
v___x_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
return v___x_646_;
}
else
{
size_t v___x_647_; size_t v___x_648_; lean_object* v___x_649_; 
v___x_647_ = ((size_t)0ULL);
v___x_648_ = lean_usize_of_nat(v___x_641_);
v___x_649_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___redArg(v_f_626_, v_children_634_, v___x_647_, v___x_648_, v_s_636_, v___y_637_, v___y_638_, v___y_639_);
lean_dec_ref(v_children_634_);
return v___x_649_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___redArg(lean_object* v_f_658_, lean_object* v_as_659_, size_t v_i_660_, size_t v_stop_661_, lean_object* v_b_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_){
_start:
{
uint8_t v___x_667_; 
v___x_667_ = lean_usize_dec_eq(v_i_660_, v_stop_661_);
if (v___x_667_ == 0)
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = lean_array_uget_borrowed(v_as_659_, v_i_660_);
lean_inc_ref(v_f_658_);
lean_inc(v___x_668_);
v___x_669_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg(v___x_668_, v_f_658_, v_b_662_, v___y_663_, v___y_664_, v___y_665_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_670_; lean_object* v_fst_671_; 
v_a_670_ = lean_ctor_get(v___x_669_, 0);
v_fst_671_ = lean_ctor_get(v_a_670_, 0);
if (lean_obj_tag(v_fst_671_) == 0)
{
lean_dec_ref(v_f_658_);
return v___x_669_;
}
else
{
lean_object* v_a_672_; lean_object* v_snd_673_; lean_object* v_fst_674_; lean_object* v_snd_675_; size_t v___x_676_; size_t v___x_677_; 
lean_inc(v_a_670_);
lean_dec_ref_known(v___x_669_, 1);
v_a_672_ = lean_ctor_get(v_fst_671_, 0);
lean_inc(v_a_672_);
v_snd_673_ = lean_ctor_get(v_a_670_, 1);
lean_inc(v_snd_673_);
lean_dec(v_a_670_);
v_fst_674_ = lean_ctor_get(v_a_672_, 0);
lean_inc(v_fst_674_);
v_snd_675_ = lean_ctor_get(v_a_672_, 1);
lean_inc(v_snd_675_);
lean_dec(v_a_672_);
v___x_676_ = ((size_t)1ULL);
v___x_677_ = lean_usize_add(v_i_660_, v___x_676_);
v_i_660_ = v___x_677_;
v_b_662_ = v_fst_674_;
v___y_663_ = v_snd_675_;
v___y_665_ = v_snd_673_;
goto _start;
}
}
else
{
lean_dec_ref(v_f_658_);
return v___x_669_;
}
}
else
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
lean_dec_ref(v_f_658_);
v___x_679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_679_, 0, v_b_662_);
lean_ctor_set(v___x_679_, 1, v___y_663_);
v___x_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_680_, 0, v___x_679_);
v___x_681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
lean_ctor_set(v___x_681_, 1, v___y_665_);
v___x_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_682_, 0, v___x_681_);
return v___x_682_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___redArg___boxed(lean_object* v_f_683_, lean_object* v_as_684_, lean_object* v_i_685_, lean_object* v_stop_686_, lean_object* v_b_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
size_t v_i_boxed_692_; size_t v_stop_boxed_693_; lean_object* v_res_694_; 
v_i_boxed_692_ = lean_unbox_usize(v_i_685_);
lean_dec(v_i_685_);
v_stop_boxed_693_ = lean_unbox_usize(v_stop_686_);
lean_dec(v_stop_686_);
v_res_694_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___redArg(v_f_683_, v_as_684_, v_i_boxed_692_, v_stop_boxed_693_, v_b_687_, v___y_688_, v___y_689_, v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec_ref(v_as_684_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg___boxed(lean_object* v_t_695_, lean_object* v_f_696_, lean_object* v_init_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg(v_t_695_, v_f_696_, v_init_697_, v___y_698_, v___y_699_, v___y_700_);
lean_dec_ref(v___y_699_);
return v_res_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___redArg(lean_object* v_t_703_, lean_object* v_f_704_, lean_object* v_init_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_){
_start:
{
switch(lean_obj_tag(v_t_703_))
{
case 0:
{
lean_object* v_tree_710_; lean_object* v___x_711_; 
v_tree_710_ = lean_ctor_get(v_t_703_, 1);
lean_inc_ref(v_tree_710_);
lean_dec_ref_known(v_t_703_, 2);
v___x_711_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg(v_tree_710_, v_f_704_, v_init_705_, v___y_706_, v___y_707_, v___y_708_);
return v___x_711_;
}
case 1:
{
lean_object* v_key_712_; lean_object* v_entry_x3f_713_; lean_object* v_children_714_; lean_object* v_s_716_; lean_object* v___y_717_; lean_object* v___y_718_; lean_object* v___y_719_; 
v_key_712_ = lean_ctor_get(v_t_703_, 0);
lean_inc(v_key_712_);
v_entry_x3f_713_ = lean_ctor_get(v_t_703_, 1);
lean_inc(v_entry_x3f_713_);
v_children_714_ = lean_ctor_get(v_t_703_, 2);
lean_inc_ref(v_children_714_);
lean_dec_ref_known(v_t_703_, 4);
if (lean_obj_tag(v_entry_x3f_713_) == 1)
{
lean_object* v_val_730_; lean_object* v_fst_731_; lean_object* v___x_732_; 
v_val_730_ = lean_ctor_get(v_entry_x3f_713_, 0);
lean_inc(v_val_730_);
lean_dec_ref_known(v_entry_x3f_713_, 1);
v_fst_731_ = lean_ctor_get(v_val_730_, 0);
lean_inc(v_fst_731_);
lean_dec(v_val_730_);
lean_inc_ref(v_f_704_);
lean_inc_ref(v___y_707_);
v___x_732_ = lean_apply_7(v_f_704_, v_init_705_, v_key_712_, v_fst_731_, v___y_706_, v___y_707_, v___y_708_, lean_box(0));
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; lean_object* v_fst_734_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
lean_inc(v_a_733_);
v_fst_734_ = lean_ctor_get(v_a_733_, 0);
if (lean_obj_tag(v_fst_734_) == 0)
{
lean_dec(v_a_733_);
lean_dec_ref(v_children_714_);
lean_dec_ref(v_f_704_);
return v___x_732_;
}
else
{
lean_object* v_a_735_; lean_object* v_snd_736_; lean_object* v_fst_737_; lean_object* v_snd_738_; 
lean_dec_ref_known(v___x_732_, 1);
v_a_735_ = lean_ctor_get(v_fst_734_, 0);
lean_inc(v_a_735_);
v_snd_736_ = lean_ctor_get(v_a_733_, 1);
lean_inc(v_snd_736_);
lean_dec(v_a_733_);
v_fst_737_ = lean_ctor_get(v_a_735_, 0);
lean_inc(v_fst_737_);
v_snd_738_ = lean_ctor_get(v_a_735_, 1);
lean_inc(v_snd_738_);
lean_dec(v_a_735_);
v_s_716_ = v_fst_737_;
v___y_717_ = v_snd_738_;
v___y_718_ = v___y_707_;
v___y_719_ = v_snd_736_;
goto v___jp_715_;
}
}
else
{
lean_dec_ref(v_children_714_);
lean_dec_ref(v_f_704_);
return v___x_732_;
}
}
else
{
lean_dec(v_entry_x3f_713_);
lean_dec(v_key_712_);
v_s_716_ = v_init_705_;
v___y_717_ = v___y_706_;
v___y_718_ = v___y_707_;
v___y_719_ = v___y_708_;
goto v___jp_715_;
}
v___jp_715_:
{
lean_object* v___x_720_; lean_object* v___x_721_; uint8_t v___x_722_; 
v___x_720_ = lean_unsigned_to_nat(0u);
v___x_721_ = lean_array_get_size(v_children_714_);
v___x_722_ = lean_nat_dec_lt(v___x_720_, v___x_721_);
if (v___x_722_ == 0)
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
lean_dec_ref(v_children_714_);
lean_dec_ref(v_f_704_);
v___x_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_723_, 0, v_s_716_);
lean_ctor_set(v___x_723_, 1, v___y_717_);
v___x_724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_724_, 0, v___x_723_);
v___x_725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_725_, 0, v___x_724_);
lean_ctor_set(v___x_725_, 1, v___y_719_);
v___x_726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_726_, 0, v___x_725_);
return v___x_726_;
}
else
{
size_t v___x_727_; size_t v___x_728_; lean_object* v___x_729_; 
v___x_727_ = ((size_t)0ULL);
v___x_728_ = lean_usize_of_nat(v___x_721_);
v___x_729_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__8___redArg(v_f_704_, v_children_714_, v___x_727_, v___x_728_, v_s_716_, v___y_717_, v___y_718_, v___y_719_);
lean_dec_ref(v_children_714_);
return v___x_729_;
}
}
}
case 2:
{
lean_object* v_key_739_; lean_object* v_entry_740_; lean_object* v_expanded_741_; lean_object* v_s_743_; lean_object* v___y_744_; lean_object* v___y_745_; lean_object* v___y_746_; lean_object* v___x_766_; 
v_key_739_ = lean_ctor_get(v_t_703_, 0);
lean_inc(v_key_739_);
v_entry_740_ = lean_ctor_get(v_t_703_, 1);
lean_inc_ref(v_entry_740_);
v_expanded_741_ = lean_ctor_get(v_t_703_, 2);
lean_inc_ref(v_expanded_741_);
lean_dec_ref_known(v_t_703_, 3);
v___x_766_ = lean_thunk_get_own(v_entry_740_);
lean_dec_ref(v_entry_740_);
if (lean_obj_tag(v___x_766_) == 1)
{
lean_object* v_val_767_; lean_object* v_fst_768_; lean_object* v___x_769_; 
v_val_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_val_767_);
lean_dec_ref_known(v___x_766_, 1);
v_fst_768_ = lean_ctor_get(v_val_767_, 0);
lean_inc(v_fst_768_);
lean_dec(v_val_767_);
lean_inc_ref(v_f_704_);
lean_inc_ref(v___y_707_);
v___x_769_ = lean_apply_7(v_f_704_, v_init_705_, v_key_739_, v_fst_768_, v___y_706_, v___y_707_, v___y_708_, lean_box(0));
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v_a_770_; lean_object* v_fst_771_; 
v_a_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_a_770_);
v_fst_771_ = lean_ctor_get(v_a_770_, 0);
if (lean_obj_tag(v_fst_771_) == 0)
{
lean_dec(v_a_770_);
lean_dec_ref(v_expanded_741_);
lean_dec_ref(v_f_704_);
return v___x_769_;
}
else
{
lean_object* v_a_772_; lean_object* v_snd_773_; lean_object* v_fst_774_; lean_object* v_snd_775_; 
lean_dec_ref_known(v___x_769_, 1);
v_a_772_ = lean_ctor_get(v_fst_771_, 0);
lean_inc(v_a_772_);
v_snd_773_ = lean_ctor_get(v_a_770_, 1);
lean_inc(v_snd_773_);
lean_dec(v_a_770_);
v_fst_774_ = lean_ctor_get(v_a_772_, 0);
lean_inc(v_fst_774_);
v_snd_775_ = lean_ctor_get(v_a_772_, 1);
lean_inc(v_snd_775_);
lean_dec(v_a_772_);
v_s_743_ = v_fst_774_;
v___y_744_ = v_snd_775_;
v___y_745_ = v___y_707_;
v___y_746_ = v_snd_773_;
goto v___jp_742_;
}
}
else
{
lean_dec_ref(v_expanded_741_);
lean_dec_ref(v_f_704_);
return v___x_769_;
}
}
else
{
lean_dec(v___x_766_);
lean_dec(v_key_739_);
v_s_743_ = v_init_705_;
v___y_744_ = v___y_706_;
v___y_745_ = v___y_707_;
v___y_746_ = v___y_708_;
goto v___jp_742_;
}
v___jp_742_:
{
lean_object* v___x_747_; lean_object* v_fst_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_764_; 
v___x_747_ = lean_thunk_get_own(v_expanded_741_);
lean_dec_ref(v_expanded_741_);
v_fst_748_ = lean_ctor_get(v___x_747_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_747_);
if (v_isSharedCheck_764_ == 0)
{
lean_object* v_unused_765_; 
v_unused_765_ = lean_ctor_get(v___x_747_, 1);
lean_dec(v_unused_765_);
v___x_750_ = v___x_747_;
v_isShared_751_ = v_isSharedCheck_764_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_fst_748_);
lean_dec(v___x_747_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_764_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_752_; lean_object* v___x_753_; uint8_t v___x_754_; 
v___x_752_ = lean_unsigned_to_nat(0u);
v___x_753_ = lean_array_get_size(v_fst_748_);
v___x_754_ = lean_nat_dec_lt(v___x_752_, v___x_753_);
if (v___x_754_ == 0)
{
lean_object* v___x_756_; 
lean_dec(v_fst_748_);
lean_dec_ref(v_f_704_);
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 1, v___y_744_);
lean_ctor_set(v___x_750_, 0, v_s_743_);
v___x_756_ = v___x_750_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_s_743_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v___y_744_);
v___x_756_ = v_reuseFailAlloc_760_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_757_, 0, v___x_756_);
v___x_758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_758_, 0, v___x_757_);
lean_ctor_set(v___x_758_, 1, v___y_746_);
v___x_759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_759_, 0, v___x_758_);
return v___x_759_;
}
}
else
{
size_t v___x_761_; size_t v___x_762_; lean_object* v___x_763_; 
lean_del_object(v___x_750_);
v___x_761_ = ((size_t)0ULL);
v___x_762_ = lean_usize_of_nat(v___x_753_);
v___x_763_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__8___redArg(v_f_704_, v_fst_748_, v___x_761_, v___x_762_, v_s_743_, v___y_744_, v___y_745_, v___y_746_);
lean_dec(v_fst_748_);
return v___x_763_;
}
}
}
}
default: 
{
lean_object* v_tree_776_; 
v_tree_776_ = lean_ctor_get(v_t_703_, 1);
lean_inc_ref(v_tree_776_);
lean_dec_ref_known(v_t_703_, 2);
v_t_703_ = v_tree_776_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__8___redArg(lean_object* v_f_778_, lean_object* v_as_779_, size_t v_i_780_, size_t v_stop_781_, lean_object* v_b_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
uint8_t v___x_787_; 
v___x_787_ = lean_usize_dec_eq(v_i_780_, v_stop_781_);
if (v___x_787_ == 0)
{
lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_788_ = lean_array_uget_borrowed(v_as_779_, v_i_780_);
lean_inc_ref(v_f_778_);
lean_inc(v___x_788_);
v___x_789_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___redArg(v___x_788_, v_f_778_, v_b_782_, v___y_783_, v___y_784_, v___y_785_);
if (lean_obj_tag(v___x_789_) == 0)
{
lean_object* v_a_790_; lean_object* v_fst_791_; 
v_a_790_ = lean_ctor_get(v___x_789_, 0);
v_fst_791_ = lean_ctor_get(v_a_790_, 0);
if (lean_obj_tag(v_fst_791_) == 0)
{
lean_dec_ref(v_f_778_);
return v___x_789_;
}
else
{
lean_object* v_a_792_; lean_object* v_snd_793_; lean_object* v_fst_794_; lean_object* v_snd_795_; size_t v___x_796_; size_t v___x_797_; 
lean_inc(v_a_790_);
lean_dec_ref_known(v___x_789_, 1);
v_a_792_ = lean_ctor_get(v_fst_791_, 0);
lean_inc(v_a_792_);
v_snd_793_ = lean_ctor_get(v_a_790_, 1);
lean_inc(v_snd_793_);
lean_dec(v_a_790_);
v_fst_794_ = lean_ctor_get(v_a_792_, 0);
lean_inc(v_fst_794_);
v_snd_795_ = lean_ctor_get(v_a_792_, 1);
lean_inc(v_snd_795_);
lean_dec(v_a_792_);
v___x_796_ = ((size_t)1ULL);
v___x_797_ = lean_usize_add(v_i_780_, v___x_796_);
v_i_780_ = v___x_797_;
v_b_782_ = v_fst_794_;
v___y_783_ = v_snd_795_;
v___y_785_ = v_snd_793_;
goto _start;
}
}
else
{
lean_dec_ref(v_f_778_);
return v___x_789_;
}
}
else
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
lean_dec_ref(v_f_778_);
v___x_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_799_, 0, v_b_782_);
lean_ctor_set(v___x_799_, 1, v___y_783_);
v___x_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_800_, 0, v___x_799_);
v___x_801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_801_, 0, v___x_800_);
lean_ctor_set(v___x_801_, 1, v___y_785_);
v___x_802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
return v___x_802_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__8___redArg___boxed(lean_object* v_f_803_, lean_object* v_as_804_, lean_object* v_i_805_, lean_object* v_stop_806_, lean_object* v_b_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
size_t v_i_boxed_812_; size_t v_stop_boxed_813_; lean_object* v_res_814_; 
v_i_boxed_812_ = lean_unbox_usize(v_i_805_);
lean_dec(v_i_805_);
v_stop_boxed_813_ = lean_unbox_usize(v_stop_806_);
lean_dec(v_stop_806_);
v_res_814_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__8___redArg(v_f_803_, v_as_804_, v_i_boxed_812_, v_stop_boxed_813_, v_b_807_, v___y_808_, v___y_809_, v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec_ref(v_as_804_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___redArg___boxed(lean_object* v_t_815_, lean_object* v_f_816_, lean_object* v_init_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___redArg(v_t_815_, v_f_816_, v_init_817_, v___y_818_, v___y_819_, v___y_820_);
lean_dec_ref(v___y_819_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg___lam__0(lean_object* v_f_823_, lean_object* v_x_824_, lean_object* v_n_825_, lean_object* v_v_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_){
_start:
{
lean_object* v___x_831_; 
lean_inc_ref(v___y_828_);
v___x_831_ = lean_apply_6(v_f_823_, v_n_825_, v_v_826_, v___y_827_, v___y_828_, v___y_829_, lean_box(0));
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg___lam__0___boxed(lean_object* v_f_832_, lean_object* v_x_833_, lean_object* v_n_834_, lean_object* v_v_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg___lam__0(v_f_832_, v_x_833_, v_n_834_, v_v_835_, v___y_836_, v___y_837_, v___y_838_);
lean_dec_ref(v___y_837_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg(lean_object* v_t_841_, lean_object* v_f_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_){
_start:
{
lean_object* v___f_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___f_847_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_847_, 0, v_f_842_);
v___x_848_ = lean_box(0);
v___x_849_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___redArg(v_t_841_, v___f_847_, v___x_848_, v___y_843_, v___y_844_, v___y_845_);
return v___x_849_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg___boxed(lean_object* v_t_850_, lean_object* v_f_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_){
_start:
{
lean_object* v_res_856_; 
v_res_856_ = l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg(v_t_850_, v_f_851_, v___y_852_, v___y_853_, v___y_854_);
lean_dec_ref(v___y_853_);
return v_res_856_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__14___redArg(lean_object* v_f_857_, lean_object* v_keys_858_, lean_object* v_vals_859_, lean_object* v_i_860_, lean_object* v_acc_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_){
_start:
{
lean_object* v___x_866_; uint8_t v___x_867_; 
v___x_866_ = lean_array_get_size(v_keys_858_);
v___x_867_ = lean_nat_dec_lt(v_i_860_, v___x_866_);
if (v___x_867_ == 0)
{
lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
lean_dec(v_i_860_);
lean_dec_ref(v_f_857_);
v___x_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_868_, 0, v_acc_861_);
lean_ctor_set(v___x_868_, 1, v___y_862_);
v___x_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
v___x_870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_870_, 0, v___x_869_);
lean_ctor_set(v___x_870_, 1, v___y_864_);
v___x_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_871_, 0, v___x_870_);
return v___x_871_;
}
else
{
lean_object* v_k_872_; lean_object* v_v_873_; lean_object* v___x_874_; 
v_k_872_ = lean_array_fget_borrowed(v_keys_858_, v_i_860_);
v_v_873_ = lean_array_fget_borrowed(v_vals_859_, v_i_860_);
lean_inc_ref(v_f_857_);
lean_inc_ref(v___y_863_);
lean_inc(v_v_873_);
lean_inc(v_k_872_);
v___x_874_ = lean_apply_7(v_f_857_, v_acc_861_, v_k_872_, v_v_873_, v___y_862_, v___y_863_, v___y_864_, lean_box(0));
if (lean_obj_tag(v___x_874_) == 0)
{
lean_object* v_a_875_; lean_object* v_fst_876_; 
v_a_875_ = lean_ctor_get(v___x_874_, 0);
lean_inc(v_a_875_);
v_fst_876_ = lean_ctor_get(v_a_875_, 0);
if (lean_obj_tag(v_fst_876_) == 0)
{
lean_dec(v_a_875_);
lean_dec(v_i_860_);
lean_dec_ref(v_f_857_);
return v___x_874_;
}
else
{
lean_object* v_a_877_; lean_object* v_snd_878_; lean_object* v_fst_879_; lean_object* v_snd_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
lean_dec_ref_known(v___x_874_, 1);
v_a_877_ = lean_ctor_get(v_fst_876_, 0);
lean_inc(v_a_877_);
v_snd_878_ = lean_ctor_get(v_a_875_, 1);
lean_inc(v_snd_878_);
lean_dec(v_a_875_);
v_fst_879_ = lean_ctor_get(v_a_877_, 0);
lean_inc(v_fst_879_);
v_snd_880_ = lean_ctor_get(v_a_877_, 1);
lean_inc(v_snd_880_);
lean_dec(v_a_877_);
v___x_881_ = lean_unsigned_to_nat(1u);
v___x_882_ = lean_nat_add(v_i_860_, v___x_881_);
lean_dec(v_i_860_);
v_i_860_ = v___x_882_;
v_acc_861_ = v_fst_879_;
v___y_862_ = v_snd_880_;
v___y_864_ = v_snd_878_;
goto _start;
}
}
else
{
lean_dec(v_i_860_);
lean_dec_ref(v_f_857_);
return v___x_874_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__14___redArg___boxed(lean_object* v_f_884_, lean_object* v_keys_885_, lean_object* v_vals_886_, lean_object* v_i_887_, lean_object* v_acc_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__14___redArg(v_f_884_, v_keys_885_, v_vals_886_, v_i_887_, v_acc_888_, v___y_889_, v___y_890_, v___y_891_);
lean_dec_ref(v___y_890_);
lean_dec_ref(v_vals_886_);
lean_dec_ref(v_keys_885_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__13___redArg(lean_object* v_f_894_, lean_object* v_as_895_, size_t v_i_896_, size_t v_stop_897_, lean_object* v_b_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_){
_start:
{
lean_object* v_fst_904_; lean_object* v_snd_905_; lean_object* v_snd_906_; lean_object* v___y_911_; uint8_t v___x_918_; 
v___x_918_ = lean_usize_dec_eq(v_i_896_, v_stop_897_);
if (v___x_918_ == 0)
{
lean_object* v___x_919_; 
v___x_919_ = lean_array_uget_borrowed(v_as_895_, v_i_896_);
switch(lean_obj_tag(v___x_919_))
{
case 0:
{
lean_object* v_key_920_; lean_object* v_val_921_; lean_object* v___x_922_; 
v_key_920_ = lean_ctor_get(v___x_919_, 0);
v_val_921_ = lean_ctor_get(v___x_919_, 1);
lean_inc_ref(v_f_894_);
lean_inc_ref(v___y_900_);
lean_inc(v_val_921_);
lean_inc(v_key_920_);
v___x_922_ = lean_apply_7(v_f_894_, v_b_898_, v_key_920_, v_val_921_, v___y_899_, v___y_900_, v___y_901_, lean_box(0));
v___y_911_ = v___x_922_;
goto v___jp_910_;
}
case 1:
{
lean_object* v_node_923_; lean_object* v___x_924_; 
v_node_923_ = lean_ctor_get(v___x_919_, 0);
lean_inc(v_node_923_);
lean_inc_ref(v_f_894_);
v___x_924_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11___redArg(v_f_894_, v_node_923_, v_b_898_, v___y_899_, v___y_900_, v___y_901_);
v___y_911_ = v___x_924_;
goto v___jp_910_;
}
default: 
{
v_fst_904_ = v_b_898_;
v_snd_905_ = v___y_899_;
v_snd_906_ = v___y_901_;
goto v___jp_903_;
}
}
}
else
{
lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
lean_dec_ref(v_f_894_);
v___x_925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_925_, 0, v_b_898_);
lean_ctor_set(v___x_925_, 1, v___y_899_);
v___x_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_926_, 0, v___x_925_);
v___x_927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_927_, 0, v___x_926_);
lean_ctor_set(v___x_927_, 1, v___y_901_);
v___x_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_928_, 0, v___x_927_);
return v___x_928_;
}
v___jp_903_:
{
size_t v___x_907_; size_t v___x_908_; 
v___x_907_ = ((size_t)1ULL);
v___x_908_ = lean_usize_add(v_i_896_, v___x_907_);
v_i_896_ = v___x_908_;
v_b_898_ = v_fst_904_;
v___y_899_ = v_snd_905_;
v___y_901_ = v_snd_906_;
goto _start;
}
v___jp_910_:
{
if (lean_obj_tag(v___y_911_) == 0)
{
lean_object* v_a_912_; lean_object* v_fst_913_; 
v_a_912_ = lean_ctor_get(v___y_911_, 0);
v_fst_913_ = lean_ctor_get(v_a_912_, 0);
if (lean_obj_tag(v_fst_913_) == 0)
{
lean_dec_ref(v_f_894_);
return v___y_911_;
}
else
{
lean_object* v_a_914_; lean_object* v_snd_915_; lean_object* v_fst_916_; lean_object* v_snd_917_; 
lean_inc(v_a_912_);
lean_dec_ref_known(v___y_911_, 1);
v_a_914_ = lean_ctor_get(v_fst_913_, 0);
lean_inc(v_a_914_);
v_snd_915_ = lean_ctor_get(v_a_912_, 1);
lean_inc(v_snd_915_);
lean_dec(v_a_912_);
v_fst_916_ = lean_ctor_get(v_a_914_, 0);
lean_inc(v_fst_916_);
v_snd_917_ = lean_ctor_get(v_a_914_, 1);
lean_inc(v_snd_917_);
lean_dec(v_a_914_);
v_fst_904_ = v_fst_916_;
v_snd_905_ = v_snd_917_;
v_snd_906_ = v_snd_915_;
goto v___jp_903_;
}
}
else
{
lean_dec_ref(v_f_894_);
return v___y_911_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11___redArg(lean_object* v_f_929_, lean_object* v_x_930_, lean_object* v_x_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_){
_start:
{
if (lean_obj_tag(v_x_930_) == 0)
{
lean_object* v_es_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_952_; 
v_es_936_ = lean_ctor_get(v_x_930_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v_x_930_);
if (v_isSharedCheck_952_ == 0)
{
v___x_938_ = v_x_930_;
v_isShared_939_ = v_isSharedCheck_952_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_es_936_);
lean_dec(v_x_930_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_952_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_940_; lean_object* v___x_941_; uint8_t v___x_942_; 
v___x_940_ = lean_unsigned_to_nat(0u);
v___x_941_ = lean_array_get_size(v_es_936_);
v___x_942_ = lean_nat_dec_lt(v___x_940_, v___x_941_);
if (v___x_942_ == 0)
{
lean_object* v___x_943_; lean_object* v___x_945_; 
lean_dec_ref(v_es_936_);
lean_dec_ref(v_f_929_);
v___x_943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_943_, 0, v_x_931_);
lean_ctor_set(v___x_943_, 1, v___y_932_);
if (v_isShared_939_ == 0)
{
lean_ctor_set_tag(v___x_938_, 1);
lean_ctor_set(v___x_938_, 0, v___x_943_);
v___x_945_ = v___x_938_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v___x_943_);
v___x_945_ = v_reuseFailAlloc_948_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_946_, 0, v___x_945_);
lean_ctor_set(v___x_946_, 1, v___y_934_);
v___x_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_947_, 0, v___x_946_);
return v___x_947_;
}
}
else
{
size_t v___x_949_; size_t v___x_950_; lean_object* v___x_951_; 
lean_del_object(v___x_938_);
v___x_949_ = ((size_t)0ULL);
v___x_950_ = lean_usize_of_nat(v___x_941_);
v___x_951_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__13___redArg(v_f_929_, v_es_936_, v___x_949_, v___x_950_, v_x_931_, v___y_932_, v___y_933_, v___y_934_);
lean_dec_ref(v_es_936_);
return v___x_951_;
}
}
}
else
{
lean_object* v_ks_953_; lean_object* v_vs_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v_ks_953_ = lean_ctor_get(v_x_930_, 0);
lean_inc_ref(v_ks_953_);
v_vs_954_ = lean_ctor_get(v_x_930_, 1);
lean_inc_ref(v_vs_954_);
lean_dec_ref_known(v_x_930_, 2);
v___x_955_ = lean_unsigned_to_nat(0u);
v___x_956_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__14___redArg(v_f_929_, v_ks_953_, v_vs_954_, v___x_955_, v_x_931_, v___y_932_, v___y_933_, v___y_934_);
lean_dec_ref(v_vs_954_);
lean_dec_ref(v_ks_953_);
return v___x_956_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11___redArg___boxed(lean_object* v_f_957_, lean_object* v_x_958_, lean_object* v_x_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11___redArg(v_f_957_, v_x_958_, v_x_959_, v___y_960_, v___y_961_, v___y_962_);
lean_dec_ref(v___y_961_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__13___redArg___boxed(lean_object* v_f_965_, lean_object* v_as_966_, lean_object* v_i_967_, lean_object* v_stop_968_, lean_object* v_b_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
size_t v_i_boxed_974_; size_t v_stop_boxed_975_; lean_object* v_res_976_; 
v_i_boxed_974_ = lean_unbox_usize(v_i_967_);
lean_dec(v_i_967_);
v_stop_boxed_975_ = lean_unbox_usize(v_stop_968_);
lean_dec(v_stop_968_);
v_res_976_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__13___redArg(v_f_965_, v_as_966_, v_i_boxed_974_, v_stop_boxed_975_, v_b_969_, v___y_970_, v___y_971_, v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec_ref(v_as_966_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg___lam__0(lean_object* v_f_977_, lean_object* v_x_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_){
_start:
{
lean_object* v___x_985_; 
lean_inc_ref(v___y_982_);
v___x_985_ = lean_apply_6(v_f_977_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, lean_box(0));
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg___lam__0___boxed(lean_object* v_f_986_, lean_object* v_x_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg___lam__0(v_f_986_, v_x_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_);
lean_dec_ref(v___y_991_);
return v_res_994_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg(lean_object* v_map_995_, lean_object* v_f_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v___f_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___f_1001_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1001_, 0, v_f_996_);
v___x_1002_ = lean_box(0);
v___x_1003_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11___redArg(v___f_1001_, v_map_995_, v___x_1002_, v___y_997_, v___y_998_, v___y_999_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg___boxed(lean_object* v_map_1004_, lean_object* v_f_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_){
_start:
{
lean_object* v_res_1010_; 
v_res_1010_ = l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg(v_map_1004_, v_f_1005_, v___y_1006_, v___y_1007_, v___y_1008_);
lean_dec_ref(v___y_1007_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM___at___00LeanExport_initState_spec__5(lean_object* v_map_1011_, lean_object* v_f_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_){
_start:
{
lean_object* v_map_u2081_1017_; lean_object* v_map_u2082_1018_; lean_object* v___x_1019_; 
v_map_u2081_1017_ = lean_ctor_get(v_map_1011_, 0);
lean_inc_ref(v_map_u2081_1017_);
v_map_u2082_1018_ = lean_ctor_get(v_map_1011_, 1);
lean_inc_ref(v_map_u2082_1018_);
lean_dec_ref(v_map_1011_);
lean_inc_ref(v_f_1012_);
v___x_1019_ = l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg(v_map_u2081_1017_, v_f_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; lean_object* v_fst_1021_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
v_fst_1021_ = lean_ctor_get(v_a_1020_, 0);
if (lean_obj_tag(v_fst_1021_) == 0)
{
lean_dec_ref(v_map_u2082_1018_);
lean_dec_ref(v_f_1012_);
return v___x_1019_;
}
else
{
lean_object* v_a_1022_; lean_object* v_snd_1023_; lean_object* v_snd_1024_; lean_object* v___x_1025_; 
lean_inc(v_a_1020_);
lean_dec_ref_known(v___x_1019_, 1);
v_a_1022_ = lean_ctor_get(v_fst_1021_, 0);
lean_inc(v_a_1022_);
v_snd_1023_ = lean_ctor_get(v_a_1020_, 1);
lean_inc(v_snd_1023_);
lean_dec(v_a_1020_);
v_snd_1024_ = lean_ctor_get(v_a_1022_, 1);
lean_inc(v_snd_1024_);
lean_dec(v_a_1022_);
v___x_1025_ = l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg(v_map_u2082_1018_, v_f_1012_, v_snd_1024_, v___y_1014_, v_snd_1023_);
return v___x_1025_;
}
}
else
{
lean_dec_ref(v_map_u2082_1018_);
lean_dec_ref(v_f_1012_);
return v___x_1019_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM___at___00LeanExport_initState_spec__5___boxed(lean_object* v_map_1026_, lean_object* v_f_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l_Lean_ConstMap_forM___at___00LeanExport_initState_spec__5(v_map_1026_, v_f_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
lean_dec_ref(v___y_1029_);
return v_res_1032_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00LeanExport_initState_spec__1(lean_object* v_x_1034_){
_start:
{
if (lean_obj_tag(v_x_1034_) == 0)
{
uint8_t v___x_1035_; 
v___x_1035_ = 0;
return v___x_1035_;
}
else
{
lean_object* v_head_1036_; lean_object* v_tail_1037_; lean_object* v___x_1038_; uint8_t v___x_1039_; 
v_head_1036_ = lean_ctor_get(v_x_1034_, 0);
v_tail_1037_ = lean_ctor_get(v_x_1034_, 1);
v___x_1038_ = ((lean_object*)(l_List_any___at___00LeanExport_initState_spec__1___closed__0));
v___x_1039_ = lean_string_dec_eq(v_head_1036_, v___x_1038_);
if (v___x_1039_ == 0)
{
v_x_1034_ = v_tail_1037_;
goto _start;
}
else
{
return v___x_1039_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00LeanExport_initState_spec__1___boxed(lean_object* v_x_1041_){
_start:
{
uint8_t v_res_1042_; lean_object* v_r_1043_; 
v_res_1042_ = l_List_any___at___00LeanExport_initState_spec__1(v_x_1041_);
lean_dec(v_x_1041_);
v_r_1043_ = lean_box(v_res_1042_);
return v_r_1043_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_initState(lean_object* v_env_1045_, lean_object* v_cliOptions_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_){
_start:
{
lean_object* v_fst_1051_; lean_object* v_snd_1052_; lean_object* v___f_1072_; lean_object* v_recursorMap_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___f_1072_ = ((lean_object*)(l_LeanExport_initState___closed__0));
v_recursorMap_1073_ = lean_box(1);
v___x_1074_ = l_Lean_Environment_constants(v_env_1045_);
v___x_1075_ = l_Lean_ConstMap_forM___at___00LeanExport_initState_spec__5(v___x_1074_, v___f_1072_, v_recursorMap_1073_, v_a_1047_, v_a_1048_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; lean_object* v_fst_1077_; 
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1075_, 1);
v_fst_1077_ = lean_ctor_get(v_a_1076_, 0);
if (lean_obj_tag(v_fst_1077_) == 0)
{
lean_object* v_snd_1078_; lean_object* v_a_1079_; 
lean_inc_ref(v_fst_1077_);
v_snd_1078_ = lean_ctor_get(v_a_1076_, 1);
lean_inc(v_snd_1078_);
lean_dec(v_a_1076_);
v_a_1079_ = lean_ctor_get(v_fst_1077_, 0);
lean_inc(v_a_1079_);
lean_dec_ref_known(v_fst_1077_, 1);
v_fst_1051_ = v_a_1079_;
v_snd_1052_ = v_snd_1078_;
goto v___jp_1050_;
}
else
{
lean_object* v_a_1080_; lean_object* v_snd_1081_; lean_object* v_snd_1082_; 
v_a_1080_ = lean_ctor_get(v_fst_1077_, 0);
lean_inc(v_a_1080_);
v_snd_1081_ = lean_ctor_get(v_a_1076_, 1);
lean_inc(v_snd_1081_);
lean_dec(v_a_1076_);
v_snd_1082_ = lean_ctor_get(v_a_1080_, 1);
lean_inc(v_snd_1082_);
lean_dec(v_a_1080_);
v_fst_1051_ = v_snd_1082_;
v_snd_1052_ = v_snd_1081_;
goto v___jp_1050_;
}
}
else
{
lean_object* v_a_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1090_; 
v_a_1083_ = lean_ctor_get(v___x_1075_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1085_ = v___x_1075_;
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_a_1083_);
lean_dec(v___x_1075_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1090_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1088_; 
if (v_isShared_1086_ == 0)
{
v___x_1088_ = v___x_1085_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v_a_1083_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
v___jp_1050_:
{
lean_object* v_visitedNames_1053_; lean_object* v_visitedLevels_1054_; lean_object* v_visitedExprs_1055_; lean_object* v_visitedConstants_1056_; lean_object* v_noMDataExprs_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1070_; 
v_visitedNames_1053_ = lean_ctor_get(v_snd_1052_, 0);
v_visitedLevels_1054_ = lean_ctor_get(v_snd_1052_, 1);
v_visitedExprs_1055_ = lean_ctor_get(v_snd_1052_, 2);
v_visitedConstants_1056_ = lean_ctor_get(v_snd_1052_, 3);
v_noMDataExprs_1057_ = lean_ctor_get(v_snd_1052_, 4);
v_isSharedCheck_1070_ = !lean_is_exclusive(v_snd_1052_);
if (v_isSharedCheck_1070_ == 0)
{
lean_object* v_unused_1071_; 
v_unused_1071_ = lean_ctor_get(v_snd_1052_, 5);
lean_dec(v_unused_1071_);
v___x_1059_ = v_snd_1052_;
v_isShared_1060_ = v_isSharedCheck_1070_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_noMDataExprs_1057_);
lean_inc(v_visitedConstants_1056_);
lean_inc(v_visitedExprs_1055_);
lean_inc(v_visitedLevels_1054_);
lean_inc(v_visitedNames_1053_);
lean_dec(v_snd_1052_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1070_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1061_; uint8_t v___x_1062_; uint8_t v___x_1063_; uint8_t v___x_1064_; lean_object* v___x_1066_; 
v___x_1061_ = lean_box(0);
v___x_1062_ = l_List_any___at___00LeanExport_initState_spec__0(v_cliOptions_1046_);
v___x_1063_ = l_List_any___at___00LeanExport_initState_spec__1(v_cliOptions_1046_);
v___x_1064_ = l_List_any___at___00LeanExport_initState_spec__2(v_cliOptions_1046_);
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 5, v_fst_1051_);
v___x_1066_ = v___x_1059_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_visitedNames_1053_);
lean_ctor_set(v_reuseFailAlloc_1069_, 1, v_visitedLevels_1054_);
lean_ctor_set(v_reuseFailAlloc_1069_, 2, v_visitedExprs_1055_);
lean_ctor_set(v_reuseFailAlloc_1069_, 3, v_visitedConstants_1056_);
lean_ctor_set(v_reuseFailAlloc_1069_, 4, v_noMDataExprs_1057_);
lean_ctor_set(v_reuseFailAlloc_1069_, 5, v_fst_1051_);
v___x_1066_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
lean_ctor_set_uint8(v___x_1066_, sizeof(void*)*6, v___x_1062_);
lean_ctor_set_uint8(v___x_1066_, sizeof(void*)*6 + 1, v___x_1063_);
lean_ctor_set_uint8(v___x_1066_, sizeof(void*)*6 + 2, v___x_1064_);
v___x_1067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1061_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
v___x_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1067_);
return v___x_1068_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_initState___boxed(lean_object* v_env_1091_, lean_object* v_cliOptions_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l_LeanExport_initState(v_env_1091_, v_cliOptions_1092_, v_a_1093_, v_a_1094_);
lean_dec_ref(v_a_1093_);
lean_dec(v_cliOptions_1092_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3(lean_object* v_val_1097_, lean_object* v_k_1098_, lean_object* v_t_1099_, lean_object* v_hl_1100_){
_start:
{
lean_object* v___x_1101_; 
v___x_1101_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00LeanExport_initState_spec__3___redArg(v_val_1097_, v_k_1098_, v_t_1099_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4(lean_object* v_val_1102_, lean_object* v_as_1103_, lean_object* v_as_x27_1104_, lean_object* v_b_1105_, lean_object* v_a_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
lean_object* v___x_1110_; 
v___x_1110_ = l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___redArg(v_val_1102_, v_as_x27_1104_, v_b_1105_, v___y_1108_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4___boxed(lean_object* v_val_1111_, lean_object* v_as_1112_, lean_object* v_as_x27_1113_, lean_object* v_b_1114_, lean_object* v_a_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_List_forIn_x27_loop___at___00LeanExport_initState_spec__4(v_val_1111_, v_as_1112_, v_as_x27_1113_, v_b_1114_, v_a_1115_, v___y_1116_, v___y_1117_);
lean_dec_ref(v___y_1116_);
lean_dec(v_as_x27_1113_);
lean_dec(v_as_1112_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5(lean_object* v_00_u03b1_1120_, lean_object* v_t_1121_, lean_object* v_f_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_){
_start:
{
lean_object* v___x_1127_; 
v___x_1127_ = l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg(v_t_1121_, v_f_1122_, v___y_1123_, v___y_1124_, v___y_1125_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___boxed(lean_object* v_00_u03b1_1128_, lean_object* v_t_1129_, lean_object* v_f_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5(v_00_u03b1_1128_, v_t_1129_, v_f_1130_, v___y_1131_, v___y_1132_, v___y_1133_);
lean_dec_ref(v___y_1132_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6(lean_object* v_00_u03b2_1136_, lean_object* v_map_1137_, lean_object* v_f_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6___redArg(v_map_1137_, v_f_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6___boxed(lean_object* v_00_u03b2_1144_, lean_object* v_map_1145_, lean_object* v_f_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_){
_start:
{
lean_object* v_res_1151_; 
v_res_1151_ = l_Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6(v_00_u03b2_1144_, v_map_1145_, v_f_1146_, v___y_1147_, v___y_1148_, v___y_1149_);
lean_dec_ref(v___y_1148_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6(lean_object* v_00_u03b1_1152_, lean_object* v_00_u03c3_1153_, lean_object* v_t_1154_, lean_object* v_f_1155_, lean_object* v_init_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_){
_start:
{
lean_object* v___x_1161_; 
v___x_1161_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___redArg(v_t_1154_, v_f_1155_, v_init_1156_, v___y_1157_, v___y_1158_, v___y_1159_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___boxed(lean_object* v_00_u03b1_1162_, lean_object* v_00_u03c3_1163_, lean_object* v_t_1164_, lean_object* v_f_1165_, lean_object* v_init_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6(v_00_u03b1_1162_, v_00_u03c3_1163_, v_t_1164_, v_f_1165_, v_init_1166_, v___y_1167_, v___y_1168_, v___y_1169_);
lean_dec_ref(v___y_1168_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8___redArg(lean_object* v_map_1172_, lean_object* v_f_1173_, lean_object* v_init_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v___x_1179_; 
v___x_1179_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11___redArg(v_f_1173_, v_map_1172_, v_init_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8___redArg___boxed(lean_object* v_map_1180_, lean_object* v_f_1181_, lean_object* v_init_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8___redArg(v_map_1180_, v_f_1181_, v_init_1182_, v___y_1183_, v___y_1184_, v___y_1185_);
lean_dec_ref(v___y_1184_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8(lean_object* v_00_u03c3_1188_, lean_object* v_00_u03b2_1189_, lean_object* v_map_1190_, lean_object* v_f_1191_, lean_object* v_init_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v___x_1197_; 
v___x_1197_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11___redArg(v_f_1191_, v_map_1190_, v_init_1192_, v___y_1193_, v___y_1194_, v___y_1195_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8___boxed(lean_object* v_00_u03c3_1198_, lean_object* v_00_u03b2_1199_, lean_object* v_map_1200_, lean_object* v_f_1201_, lean_object* v_init_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8(v_00_u03c3_1198_, v_00_u03b2_1199_, v_map_1200_, v_f_1201_, v_init_1202_, v___y_1203_, v___y_1204_, v___y_1205_);
lean_dec_ref(v___y_1204_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7(lean_object* v_00_u03b1_1208_, lean_object* v_00_u03c3_1209_, lean_object* v_t_1210_, lean_object* v_f_1211_, lean_object* v_init_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
lean_object* v___x_1217_; 
v___x_1217_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg(v_t_1210_, v_f_1211_, v_init_1212_, v___y_1213_, v___y_1214_, v___y_1215_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___boxed(lean_object* v_00_u03b1_1218_, lean_object* v_00_u03c3_1219_, lean_object* v_t_1220_, lean_object* v_f_1221_, lean_object* v_init_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_){
_start:
{
lean_object* v_res_1227_; 
v_res_1227_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7(v_00_u03b1_1218_, v_00_u03c3_1219_, v_t_1220_, v_f_1221_, v_init_1222_, v___y_1223_, v___y_1224_, v___y_1225_);
lean_dec_ref(v___y_1224_);
return v_res_1227_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__8(lean_object* v_00_u03b1_1228_, lean_object* v_00_u03c3_1229_, lean_object* v_f_1230_, lean_object* v_as_1231_, size_t v_i_1232_, size_t v_stop_1233_, lean_object* v_b_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_){
_start:
{
lean_object* v___x_1239_; 
v___x_1239_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__8___redArg(v_f_1230_, v_as_1231_, v_i_1232_, v_stop_1233_, v_b_1234_, v___y_1235_, v___y_1236_, v___y_1237_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__8___boxed(lean_object* v_00_u03b1_1240_, lean_object* v_00_u03c3_1241_, lean_object* v_f_1242_, lean_object* v_as_1243_, lean_object* v_i_1244_, lean_object* v_stop_1245_, lean_object* v_b_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_){
_start:
{
size_t v_i_boxed_1251_; size_t v_stop_boxed_1252_; lean_object* v_res_1253_; 
v_i_boxed_1251_ = lean_unbox_usize(v_i_1244_);
lean_dec(v_i_1244_);
v_stop_boxed_1252_ = lean_unbox_usize(v_stop_1245_);
lean_dec(v_stop_1245_);
v_res_1253_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__8(v_00_u03b1_1240_, v_00_u03c3_1241_, v_f_1242_, v_as_1243_, v_i_boxed_1251_, v_stop_boxed_1252_, v_b_1246_, v___y_1247_, v___y_1248_, v___y_1249_);
lean_dec_ref(v___y_1248_);
lean_dec_ref(v_as_1243_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11(lean_object* v_00_u03c3_1254_, lean_object* v_00_u03b1_1255_, lean_object* v_00_u03b2_1256_, lean_object* v_f_1257_, lean_object* v_x_1258_, lean_object* v_x_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_){
_start:
{
lean_object* v___x_1264_; 
v___x_1264_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11___redArg(v_f_1257_, v_x_1258_, v_x_1259_, v___y_1260_, v___y_1261_, v___y_1262_);
return v___x_1264_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11___boxed(lean_object* v_00_u03c3_1265_, lean_object* v_00_u03b1_1266_, lean_object* v_00_u03b2_1267_, lean_object* v_f_1268_, lean_object* v_x_1269_, lean_object* v_x_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_){
_start:
{
lean_object* v_res_1275_; 
v_res_1275_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11(v_00_u03c3_1265_, v_00_u03b1_1266_, v_00_u03b2_1267_, v_f_1268_, v_x_1269_, v_x_1270_, v___y_1271_, v___y_1272_, v___y_1273_);
lean_dec_ref(v___y_1272_);
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9(lean_object* v_00_u03b1_1276_, lean_object* v_00_u03c3_1277_, lean_object* v_f_1278_, lean_object* v_as_1279_, size_t v_i_1280_, size_t v_stop_1281_, lean_object* v_b_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_){
_start:
{
lean_object* v___x_1287_; 
v___x_1287_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___redArg(v_f_1278_, v_as_1279_, v_i_1280_, v_stop_1281_, v_b_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___boxed(lean_object* v_00_u03b1_1288_, lean_object* v_00_u03c3_1289_, lean_object* v_f_1290_, lean_object* v_as_1291_, lean_object* v_i_1292_, lean_object* v_stop_1293_, lean_object* v_b_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_){
_start:
{
size_t v_i_boxed_1299_; size_t v_stop_boxed_1300_; lean_object* v_res_1301_; 
v_i_boxed_1299_ = lean_unbox_usize(v_i_1292_);
lean_dec(v_i_1292_);
v_stop_boxed_1300_ = lean_unbox_usize(v_stop_1293_);
lean_dec(v_stop_1293_);
v_res_1301_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9(v_00_u03b1_1288_, v_00_u03c3_1289_, v_f_1290_, v_as_1291_, v_i_boxed_1299_, v_stop_boxed_1300_, v_b_1294_, v___y_1295_, v___y_1296_, v___y_1297_);
lean_dec_ref(v___y_1296_);
lean_dec_ref(v_as_1291_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__13(lean_object* v_00_u03b1_1302_, lean_object* v_00_u03b2_1303_, lean_object* v_00_u03c3_1304_, lean_object* v_f_1305_, lean_object* v_as_1306_, size_t v_i_1307_, size_t v_stop_1308_, lean_object* v_b_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
lean_object* v___x_1314_; 
v___x_1314_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__13___redArg(v_f_1305_, v_as_1306_, v_i_1307_, v_stop_1308_, v_b_1309_, v___y_1310_, v___y_1311_, v___y_1312_);
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__13___boxed(lean_object* v_00_u03b1_1315_, lean_object* v_00_u03b2_1316_, lean_object* v_00_u03c3_1317_, lean_object* v_f_1318_, lean_object* v_as_1319_, lean_object* v_i_1320_, lean_object* v_stop_1321_, lean_object* v_b_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_){
_start:
{
size_t v_i_boxed_1327_; size_t v_stop_boxed_1328_; lean_object* v_res_1329_; 
v_i_boxed_1327_ = lean_unbox_usize(v_i_1320_);
lean_dec(v_i_1320_);
v_stop_boxed_1328_ = lean_unbox_usize(v_stop_1321_);
lean_dec(v_stop_1321_);
v_res_1329_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__13(v_00_u03b1_1315_, v_00_u03b2_1316_, v_00_u03c3_1317_, v_f_1318_, v_as_1319_, v_i_boxed_1327_, v_stop_boxed_1328_, v_b_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
lean_dec_ref(v___y_1324_);
lean_dec_ref(v_as_1319_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__14(lean_object* v_00_u03c3_1330_, lean_object* v_00_u03b1_1331_, lean_object* v_00_u03b2_1332_, lean_object* v_f_1333_, lean_object* v_keys_1334_, lean_object* v_vals_1335_, lean_object* v_heq_1336_, lean_object* v_i_1337_, lean_object* v_acc_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_){
_start:
{
lean_object* v___x_1343_; 
v___x_1343_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__14___redArg(v_f_1333_, v_keys_1334_, v_vals_1335_, v_i_1337_, v_acc_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__14___boxed(lean_object* v_00_u03c3_1344_, lean_object* v_00_u03b1_1345_, lean_object* v_00_u03b2_1346_, lean_object* v_f_1347_, lean_object* v_keys_1348_, lean_object* v_vals_1349_, lean_object* v_heq_1350_, lean_object* v_i_1351_, lean_object* v_acc_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_){
_start:
{
lean_object* v_res_1357_; 
v_res_1357_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__11_spec__14(v_00_u03c3_1344_, v_00_u03b1_1345_, v_00_u03b2_1346_, v_f_1347_, v_keys_1348_, v_vals_1349_, v_heq_1350_, v_i_1351_, v_acc_1352_, v___y_1353_, v___y_1354_, v___y_1355_);
lean_dec_ref(v___y_1354_);
lean_dec_ref(v_vals_1349_);
lean_dec_ref(v_keys_1348_);
return v_res_1357_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg(lean_object* v_inst_1359_, lean_object* v_inst_1360_, lean_object* v_x_1361_, lean_object* v_namespaced_1362_, lean_object* v_getM_1363_, lean_object* v_setM_1364_, lean_object* v_rec_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_){
_start:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
lean_inc_ref(v_getM_1363_);
lean_inc_ref(v_a_1367_);
v___x_1369_ = lean_apply_1(v_getM_1363_, v_a_1367_);
lean_inc(v_x_1361_);
lean_inc_ref(v_inst_1359_);
lean_inc_ref(v_inst_1360_);
v___x_1370_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_1360_, v_inst_1359_, v___x_1369_, v_x_1361_);
lean_dec_ref(v___x_1369_);
if (lean_obj_tag(v___x_1370_) == 1)
{
lean_object* v_val_1371_; lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1379_; 
lean_dec_ref(v_rec_1365_);
lean_dec_ref(v_setM_1364_);
lean_dec_ref(v_getM_1363_);
lean_dec_ref(v_namespaced_1362_);
lean_dec(v_x_1361_);
lean_dec_ref(v_inst_1360_);
lean_dec_ref(v_inst_1359_);
v_val_1371_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1373_ = v___x_1370_;
v_isShared_1374_ = v_isSharedCheck_1379_;
goto v_resetjp_1372_;
}
else
{
lean_inc(v_val_1371_);
lean_dec(v___x_1370_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1379_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1375_; lean_object* v___x_1377_; 
v___x_1375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1375_, 0, v_val_1371_);
lean_ctor_set(v___x_1375_, 1, v_a_1367_);
if (v_isShared_1374_ == 0)
{
lean_ctor_set_tag(v___x_1373_, 0);
lean_ctor_set(v___x_1373_, 0, v___x_1375_);
v___x_1377_ = v___x_1373_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v___x_1375_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
else
{
lean_object* v___f_1380_; lean_object* v___x_1381_; 
lean_dec(v___x_1370_);
v___f_1380_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0));
lean_inc_ref(v_a_1366_);
v___x_1381_ = lean_apply_3(v_rec_1365_, v_a_1366_, v_a_1367_, lean_box(0));
if (lean_obj_tag(v___x_1381_) == 0)
{
lean_object* v_a_1382_; lean_object* v_fst_1383_; lean_object* v_snd_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1416_; 
v_a_1382_ = lean_ctor_get(v___x_1381_, 0);
lean_inc(v_a_1382_);
lean_dec_ref_known(v___x_1381_, 1);
v_fst_1383_ = lean_ctor_get(v_a_1382_, 0);
v_snd_1384_ = lean_ctor_get(v_a_1382_, 1);
v_isSharedCheck_1416_ = !lean_is_exclusive(v_a_1382_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1386_ = v_a_1382_;
v_isShared_1387_ = v_isSharedCheck_1416_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_snd_1384_);
lean_inc(v_fst_1383_);
lean_dec(v_a_1382_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1416_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1388_; lean_object* v_size_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; 
lean_inc(v_snd_1384_);
v___x_1388_ = lean_apply_1(v_getM_1363_, v_snd_1384_);
v_size_1389_ = lean_ctor_get(v___x_1388_, 0);
lean_inc_n(v_size_1389_, 2);
v___x_1390_ = l_Lean_JsonNumber_fromNat(v_size_1389_);
v___x_1391_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1390_);
v___x_1392_ = l_Lean_Json_setObjVal_x21(v_fst_1383_, v_namespaced_1362_, v___x_1391_);
v___x_1393_ = l_Lean_Json_compress(v___x_1392_);
v___x_1394_ = l_IO_println___redArg(v___f_1380_, v___x_1393_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1406_; 
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1406_ == 0)
{
lean_object* v_unused_1407_; 
v_unused_1407_ = lean_ctor_get(v___x_1394_, 0);
lean_dec(v_unused_1407_);
v___x_1396_ = v___x_1394_;
v_isShared_1397_ = v_isSharedCheck_1406_;
goto v_resetjp_1395_;
}
else
{
lean_dec(v___x_1394_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1406_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1401_; 
lean_inc(v_size_1389_);
v___x_1398_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_1360_, v_inst_1359_, v___x_1388_, v_x_1361_, v_size_1389_);
v___x_1399_ = lean_apply_2(v_setM_1364_, v_snd_1384_, v___x_1398_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set(v___x_1386_, 1, v___x_1399_);
lean_ctor_set(v___x_1386_, 0, v_size_1389_);
v___x_1401_ = v___x_1386_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_size_1389_);
lean_ctor_set(v_reuseFailAlloc_1405_, 1, v___x_1399_);
v___x_1401_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
lean_object* v___x_1403_; 
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 0, v___x_1401_);
v___x_1403_ = v___x_1396_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1401_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
}
else
{
lean_object* v_a_1408_; lean_object* v___x_1410_; uint8_t v_isShared_1411_; uint8_t v_isSharedCheck_1415_; 
lean_dec(v_size_1389_);
lean_dec_ref(v___x_1388_);
lean_del_object(v___x_1386_);
lean_dec(v_snd_1384_);
lean_dec_ref(v_setM_1364_);
lean_dec(v_x_1361_);
lean_dec_ref(v_inst_1360_);
lean_dec_ref(v_inst_1359_);
v_a_1408_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1410_ = v___x_1394_;
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
else
{
lean_inc(v_a_1408_);
lean_dec(v___x_1394_);
v___x_1410_ = lean_box(0);
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
v_resetjp_1409_:
{
lean_object* v___x_1413_; 
if (v_isShared_1411_ == 0)
{
v___x_1413_ = v___x_1410_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v_a_1408_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
}
}
else
{
lean_object* v_a_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1424_; 
lean_dec_ref(v_setM_1364_);
lean_dec_ref(v_getM_1363_);
lean_dec_ref(v_namespaced_1362_);
lean_dec(v_x_1361_);
lean_dec_ref(v_inst_1360_);
lean_dec_ref(v_inst_1359_);
v_a_1417_ = lean_ctor_get(v___x_1381_, 0);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1381_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1419_ = v___x_1381_;
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_a_1417_);
lean_dec(v___x_1381_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1422_; 
if (v_isShared_1420_ == 0)
{
v___x_1422_ = v___x_1419_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v_a_1417_);
v___x_1422_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
return v___x_1422_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___boxed(lean_object* v_inst_1425_, lean_object* v_inst_1426_, lean_object* v_x_1427_, lean_object* v_namespaced_1428_, lean_object* v_getM_1429_, lean_object* v_setM_1430_, lean_object* v_rec_1431_, lean_object* v_a_1432_, lean_object* v_a_1433_, lean_object* v_a_1434_){
_start:
{
lean_object* v_res_1435_; 
v_res_1435_ = l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg(v_inst_1425_, v_inst_1426_, v_x_1427_, v_namespaced_1428_, v_getM_1429_, v_setM_1430_, v_rec_1431_, v_a_1432_, v_a_1433_);
lean_dec_ref(v_a_1432_);
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx(lean_object* v_00_u03b1_1436_, lean_object* v_inst_1437_, lean_object* v_inst_1438_, lean_object* v_x_1439_, lean_object* v_namespaced_1440_, lean_object* v_getM_1441_, lean_object* v_setM_1442_, lean_object* v_rec_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; 
lean_inc_ref(v_getM_1441_);
lean_inc_ref(v_a_1445_);
v___x_1447_ = lean_apply_1(v_getM_1441_, v_a_1445_);
lean_inc(v_x_1439_);
lean_inc_ref(v_inst_1437_);
lean_inc_ref(v_inst_1438_);
v___x_1448_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_1438_, v_inst_1437_, v___x_1447_, v_x_1439_);
lean_dec_ref(v___x_1447_);
if (lean_obj_tag(v___x_1448_) == 1)
{
lean_object* v_val_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1457_; 
lean_dec_ref(v_rec_1443_);
lean_dec_ref(v_setM_1442_);
lean_dec_ref(v_getM_1441_);
lean_dec_ref(v_namespaced_1440_);
lean_dec(v_x_1439_);
lean_dec_ref(v_inst_1438_);
lean_dec_ref(v_inst_1437_);
v_val_1449_ = lean_ctor_get(v___x_1448_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1448_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1451_ = v___x_1448_;
v_isShared_1452_ = v_isSharedCheck_1457_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_val_1449_);
lean_dec(v___x_1448_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1457_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___x_1453_; lean_object* v___x_1455_; 
v___x_1453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1453_, 0, v_val_1449_);
lean_ctor_set(v___x_1453_, 1, v_a_1445_);
if (v_isShared_1452_ == 0)
{
lean_ctor_set_tag(v___x_1451_, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1453_);
v___x_1455_ = v___x_1451_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___x_1453_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
else
{
lean_object* v___f_1458_; lean_object* v___x_1459_; 
lean_dec(v___x_1448_);
v___f_1458_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0));
lean_inc_ref(v_a_1444_);
v___x_1459_ = lean_apply_3(v_rec_1443_, v_a_1444_, v_a_1445_, lean_box(0));
if (lean_obj_tag(v___x_1459_) == 0)
{
lean_object* v_a_1460_; lean_object* v_fst_1461_; lean_object* v_snd_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1494_; 
v_a_1460_ = lean_ctor_get(v___x_1459_, 0);
lean_inc(v_a_1460_);
lean_dec_ref_known(v___x_1459_, 1);
v_fst_1461_ = lean_ctor_get(v_a_1460_, 0);
v_snd_1462_ = lean_ctor_get(v_a_1460_, 1);
v_isSharedCheck_1494_ = !lean_is_exclusive(v_a_1460_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1464_ = v_a_1460_;
v_isShared_1465_ = v_isSharedCheck_1494_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_snd_1462_);
lean_inc(v_fst_1461_);
lean_dec(v_a_1460_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1494_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1466_; lean_object* v_size_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; 
lean_inc(v_snd_1462_);
v___x_1466_ = lean_apply_1(v_getM_1441_, v_snd_1462_);
v_size_1467_ = lean_ctor_get(v___x_1466_, 0);
lean_inc_n(v_size_1467_, 2);
v___x_1468_ = l_Lean_JsonNumber_fromNat(v_size_1467_);
v___x_1469_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1468_);
v___x_1470_ = l_Lean_Json_setObjVal_x21(v_fst_1461_, v_namespaced_1440_, v___x_1469_);
v___x_1471_ = l_Lean_Json_compress(v___x_1470_);
v___x_1472_ = l_IO_println___redArg(v___f_1458_, v___x_1471_);
if (lean_obj_tag(v___x_1472_) == 0)
{
lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1484_; 
v_isSharedCheck_1484_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1484_ == 0)
{
lean_object* v_unused_1485_; 
v_unused_1485_ = lean_ctor_get(v___x_1472_, 0);
lean_dec(v_unused_1485_);
v___x_1474_ = v___x_1472_;
v_isShared_1475_ = v_isSharedCheck_1484_;
goto v_resetjp_1473_;
}
else
{
lean_dec(v___x_1472_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1484_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1479_; 
lean_inc(v_size_1467_);
v___x_1476_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_1438_, v_inst_1437_, v___x_1466_, v_x_1439_, v_size_1467_);
v___x_1477_ = lean_apply_2(v_setM_1442_, v_snd_1462_, v___x_1476_);
if (v_isShared_1465_ == 0)
{
lean_ctor_set(v___x_1464_, 1, v___x_1477_);
lean_ctor_set(v___x_1464_, 0, v_size_1467_);
v___x_1479_ = v___x_1464_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v_size_1467_);
lean_ctor_set(v_reuseFailAlloc_1483_, 1, v___x_1477_);
v___x_1479_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
lean_object* v___x_1481_; 
if (v_isShared_1475_ == 0)
{
lean_ctor_set(v___x_1474_, 0, v___x_1479_);
v___x_1481_ = v___x_1474_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v___x_1479_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
}
}
else
{
lean_object* v_a_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1493_; 
lean_dec(v_size_1467_);
lean_dec_ref(v___x_1466_);
lean_del_object(v___x_1464_);
lean_dec(v_snd_1462_);
lean_dec_ref(v_setM_1442_);
lean_dec(v_x_1439_);
lean_dec_ref(v_inst_1438_);
lean_dec_ref(v_inst_1437_);
v_a_1486_ = lean_ctor_get(v___x_1472_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1488_ = v___x_1472_;
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_a_1486_);
lean_dec(v___x_1472_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1491_; 
if (v_isShared_1489_ == 0)
{
v___x_1491_ = v___x_1488_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_a_1486_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
}
}
else
{
lean_object* v_a_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1502_; 
lean_dec_ref(v_setM_1442_);
lean_dec_ref(v_getM_1441_);
lean_dec_ref(v_namespaced_1440_);
lean_dec(v_x_1439_);
lean_dec_ref(v_inst_1438_);
lean_dec_ref(v_inst_1437_);
v_a_1495_ = lean_ctor_get(v___x_1459_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1459_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1497_ = v___x_1459_;
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_a_1495_);
lean_dec(v___x_1459_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1500_; 
if (v_isShared_1498_ == 0)
{
v___x_1500_ = v___x_1497_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v_a_1495_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___boxed(lean_object* v_00_u03b1_1503_, lean_object* v_inst_1504_, lean_object* v_inst_1505_, lean_object* v_x_1506_, lean_object* v_namespaced_1507_, lean_object* v_getM_1508_, lean_object* v_setM_1509_, lean_object* v_rec_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_){
_start:
{
lean_object* v_res_1514_; 
v_res_1514_ = l___private_LeanExport_Basic_0__LeanExport_getIdx(v_00_u03b1_1503_, v_inst_1504_, v_inst_1505_, v_x_1506_, v_namespaced_1507_, v_getM_1508_, v_setM_1509_, v_rec_1510_, v_a_1511_, v_a_1512_);
lean_dec_ref(v_a_1511_);
return v_res_1514_;
}
}
static lean_object* _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l_instMonadEIO___redArg();
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(lean_object* v_msg_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_){
_start:
{
lean_object* v___x_1520_; lean_object* v___f_1521_; lean_object* v___f_1522_; lean_object* v___f_1523_; lean_object* v___f_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___f_1533_; lean_object* v___x_1423__overap_1534_; lean_object* v___x_1535_; 
v___x_1520_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_1521_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1521_, 0, v___x_1520_);
v___f_1522_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1522_, 0, v___x_1520_);
v___f_1523_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_1523_, 0, v___x_1520_);
v___f_1524_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_1524_, 0, v___x_1520_);
v___x_1525_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_1525_, 0, lean_box(0));
lean_closure_set(v___x_1525_, 1, lean_box(0));
lean_closure_set(v___x_1525_, 2, v___x_1520_);
v___x_1526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1526_, 0, v___x_1525_);
lean_ctor_set(v___x_1526_, 1, v___f_1521_);
v___x_1527_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_1527_, 0, lean_box(0));
lean_closure_set(v___x_1527_, 1, lean_box(0));
lean_closure_set(v___x_1527_, 2, v___x_1520_);
v___x_1528_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1526_);
lean_ctor_set(v___x_1528_, 1, v___x_1527_);
lean_ctor_set(v___x_1528_, 2, v___f_1522_);
lean_ctor_set(v___x_1528_, 3, v___f_1523_);
lean_ctor_set(v___x_1528_, 4, v___f_1524_);
v___x_1529_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_1529_, 0, lean_box(0));
lean_closure_set(v___x_1529_, 1, lean_box(0));
lean_closure_set(v___x_1529_, 2, v___x_1520_);
v___x_1530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1528_);
lean_ctor_set(v___x_1530_, 1, v___x_1529_);
v___x_1531_ = lean_box(0);
v___x_1532_ = l_instInhabitedOfMonad___redArg(v___x_1530_, v___x_1531_);
v___f_1533_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1533_, 0, v___x_1532_);
v___x_1423__overap_1534_ = lean_panic_fn_borrowed(v___f_1533_, v_msg_1516_);
lean_dec_ref(v___f_1533_);
lean_inc_ref(v___y_1517_);
v___x_1535_ = lean_apply_3(v___x_1423__overap_1534_, v___y_1517_, v___y_1518_, lean_box(0));
return v___x_1535_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___boxed(lean_object* v_msg_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v_msg_1536_, v___y_1537_, v___y_1538_);
lean_dec_ref(v___y_1537_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(lean_object* v_a_1541_, lean_object* v_x_1542_){
_start:
{
if (lean_obj_tag(v_x_1542_) == 0)
{
lean_object* v___x_1543_; 
v___x_1543_ = lean_box(0);
return v___x_1543_;
}
else
{
lean_object* v_key_1544_; lean_object* v_value_1545_; lean_object* v_tail_1546_; uint8_t v___x_1547_; 
v_key_1544_ = lean_ctor_get(v_x_1542_, 0);
v_value_1545_ = lean_ctor_get(v_x_1542_, 1);
v_tail_1546_ = lean_ctor_get(v_x_1542_, 2);
v___x_1547_ = lean_name_eq(v_key_1544_, v_a_1541_);
if (v___x_1547_ == 0)
{
v_x_1542_ = v_tail_1546_;
goto _start;
}
else
{
lean_object* v___x_1549_; 
lean_inc(v_value_1545_);
v___x_1549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1549_, 0, v_value_1545_);
return v___x_1549_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg___boxed(lean_object* v_a_1550_, lean_object* v_x_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(v_a_1550_, v_x_1551_);
lean_dec(v_x_1551_);
lean_dec(v_a_1550_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(lean_object* v_m_1553_, lean_object* v_a_1554_){
_start:
{
lean_object* v_buckets_1555_; lean_object* v___x_1556_; uint64_t v___y_1558_; 
v_buckets_1555_ = lean_ctor_get(v_m_1553_, 1);
v___x_1556_ = lean_array_get_size(v_buckets_1555_);
if (lean_obj_tag(v_a_1554_) == 0)
{
uint64_t v___x_1572_; 
v___x_1572_ = 1723ULL;
v___y_1558_ = v___x_1572_;
goto v___jp_1557_;
}
else
{
uint64_t v_hash_1573_; 
v_hash_1573_ = lean_ctor_get_uint64(v_a_1554_, sizeof(void*)*2);
v___y_1558_ = v_hash_1573_;
goto v___jp_1557_;
}
v___jp_1557_:
{
uint64_t v___x_1559_; uint64_t v___x_1560_; uint64_t v_fold_1561_; uint64_t v___x_1562_; uint64_t v___x_1563_; uint64_t v___x_1564_; size_t v___x_1565_; size_t v___x_1566_; size_t v___x_1567_; size_t v___x_1568_; size_t v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; 
v___x_1559_ = 32ULL;
v___x_1560_ = lean_uint64_shift_right(v___y_1558_, v___x_1559_);
v_fold_1561_ = lean_uint64_xor(v___y_1558_, v___x_1560_);
v___x_1562_ = 16ULL;
v___x_1563_ = lean_uint64_shift_right(v_fold_1561_, v___x_1562_);
v___x_1564_ = lean_uint64_xor(v_fold_1561_, v___x_1563_);
v___x_1565_ = lean_uint64_to_usize(v___x_1564_);
v___x_1566_ = lean_usize_of_nat(v___x_1556_);
v___x_1567_ = ((size_t)1ULL);
v___x_1568_ = lean_usize_sub(v___x_1566_, v___x_1567_);
v___x_1569_ = lean_usize_land(v___x_1565_, v___x_1568_);
v___x_1570_ = lean_array_uget_borrowed(v_buckets_1555_, v___x_1569_);
v___x_1571_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(v_a_1554_, v___x_1570_);
return v___x_1571_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg___boxed(lean_object* v_m_1574_, lean_object* v_a_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(v_m_1574_, v_a_1575_);
lean_dec(v_a_1575_);
lean_dec_ref(v_m_1574_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(lean_object* v_s_1577_){
_start:
{
lean_object* v___x_1579_; lean_object* v_putStr_1580_; lean_object* v___x_1581_; 
v___x_1579_ = lean_get_stdout();
v_putStr_1580_ = lean_ctor_get(v___x_1579_, 4);
lean_inc_ref(v_putStr_1580_);
lean_dec_ref(v___x_1579_);
v___x_1581_ = lean_apply_2(v_putStr_1580_, v_s_1577_, lean_box(0));
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2___boxed(lean_object* v_s_1582_, lean_object* v_a_1583_){
_start:
{
lean_object* v_res_1584_; 
v_res_1584_ = l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(v_s_1582_);
return v_res_1584_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(lean_object* v_s_1585_){
_start:
{
uint32_t v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1587_ = 10;
v___x_1588_ = lean_string_push(v_s_1585_, v___x_1587_);
v___x_1589_ = l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(v___x_1588_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1___boxed(lean_object* v_s_1590_, lean_object* v_a_1591_){
_start:
{
lean_object* v_res_1592_; 
v_res_1592_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v_s_1590_);
return v_res_1592_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4(void){
_start:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; 
v___x_1597_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3));
v___x_1598_ = lean_unsigned_to_nat(18u);
v___x_1599_ = lean_unsigned_to_nat(114u);
v___x_1600_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__2));
v___x_1601_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_1602_ = l_mkPanicMessageWithDecl(v___x_1601_, v___x_1600_, v___x_1599_, v___x_1598_, v___x_1597_);
return v___x_1602_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName(lean_object* v_n_1607_, lean_object* v_a_1608_, lean_object* v_a_1609_){
_start:
{
lean_object* v_visitedNames_1611_; lean_object* v___x_1612_; 
v_visitedNames_1611_ = lean_ctor_get(v_a_1609_, 0);
v___x_1612_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(v_visitedNames_1611_, v_n_1607_);
if (lean_obj_tag(v___x_1612_) == 1)
{
lean_object* v_val_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1621_; 
lean_dec(v_n_1607_);
v_val_1613_ = lean_ctor_get(v___x_1612_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1612_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1615_ = v___x_1612_;
v_isShared_1616_ = v_isSharedCheck_1621_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_val_1613_);
lean_dec(v___x_1612_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1621_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1617_; lean_object* v___x_1619_; 
v___x_1617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1617_, 0, v_val_1613_);
lean_ctor_set(v___x_1617_, 1, v_a_1609_);
if (v_isShared_1616_ == 0)
{
lean_ctor_set_tag(v___x_1615_, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1617_);
v___x_1619_ = v___x_1615_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v___x_1617_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
}
else
{
lean_object* v___x_1622_; lean_object* v_fst_1624_; lean_object* v_snd_1625_; 
lean_dec(v___x_1612_);
v___x_1622_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__0));
switch(lean_obj_tag(v_n_1607_))
{
case 0:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1666_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4, &l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4_once, _init_l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4);
v___x_1667_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v___x_1666_, v_a_1608_, v_a_1609_);
if (lean_obj_tag(v___x_1667_) == 0)
{
lean_object* v_a_1668_; lean_object* v_fst_1669_; lean_object* v_snd_1670_; 
v_a_1668_ = lean_ctor_get(v___x_1667_, 0);
lean_inc(v_a_1668_);
lean_dec_ref_known(v___x_1667_, 1);
v_fst_1669_ = lean_ctor_get(v_a_1668_, 0);
lean_inc(v_fst_1669_);
v_snd_1670_ = lean_ctor_get(v_a_1668_, 1);
lean_inc(v_snd_1670_);
lean_dec(v_a_1668_);
v_fst_1624_ = v_fst_1669_;
v_snd_1625_ = v_snd_1670_;
goto v___jp_1623_;
}
else
{
lean_object* v_a_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1678_; 
v_a_1671_ = lean_ctor_get(v___x_1667_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v___x_1667_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1673_ = v___x_1667_;
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_a_1671_);
lean_dec(v___x_1667_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___x_1676_; 
if (v_isShared_1674_ == 0)
{
v___x_1676_ = v___x_1673_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_a_1671_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
return v___x_1676_;
}
}
}
}
case 1:
{
lean_object* v_pre_1679_; lean_object* v_str_1680_; lean_object* v___x_1681_; 
v_pre_1679_ = lean_ctor_get(v_n_1607_, 0);
v_str_1680_ = lean_ctor_get(v_n_1607_, 1);
lean_inc(v_pre_1679_);
v___x_1681_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_pre_1679_, v_a_1608_, v_a_1609_);
if (lean_obj_tag(v___x_1681_) == 0)
{
lean_object* v_a_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1710_; 
v_a_1682_ = lean_ctor_get(v___x_1681_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1681_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1684_ = v___x_1681_;
v_isShared_1685_ = v_isSharedCheck_1710_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_a_1682_);
lean_dec(v___x_1681_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1710_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v_fst_1686_; lean_object* v_snd_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1709_; 
v_fst_1686_ = lean_ctor_get(v_a_1682_, 0);
v_snd_1687_ = lean_ctor_get(v_a_1682_, 1);
v_isSharedCheck_1709_ = !lean_is_exclusive(v_a_1682_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1689_ = v_a_1682_;
v_isShared_1690_ = v_isSharedCheck_1709_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_snd_1687_);
lean_inc(v_fst_1686_);
lean_dec(v_a_1682_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1709_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1695_; 
v___x_1691_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__5));
v___x_1692_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6));
v___x_1693_ = l_Lean_JsonNumber_fromNat(v_fst_1686_);
if (v_isShared_1685_ == 0)
{
lean_ctor_set_tag(v___x_1684_, 2);
lean_ctor_set(v___x_1684_, 0, v___x_1693_);
v___x_1695_ = v___x_1684_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v___x_1693_);
v___x_1695_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
lean_object* v___x_1697_; 
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 1, v___x_1695_);
lean_ctor_set(v___x_1689_, 0, v___x_1692_);
v___x_1697_ = v___x_1689_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v___x_1692_);
lean_ctor_set(v_reuseFailAlloc_1707_, 1, v___x_1695_);
v___x_1697_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
lean_inc_ref(v_str_1680_);
v___x_1698_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1698_, 0, v_str_1680_);
v___x_1699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1699_, 0, v___x_1691_);
lean_ctor_set(v___x_1699_, 1, v___x_1698_);
v___x_1700_ = lean_box(0);
v___x_1701_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1699_);
lean_ctor_set(v___x_1701_, 1, v___x_1700_);
v___x_1702_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1702_, 0, v___x_1697_);
lean_ctor_set(v___x_1702_, 1, v___x_1701_);
v___x_1703_ = l_Lean_Json_mkObj(v___x_1702_);
lean_dec_ref_known(v___x_1702_, 2);
v___x_1704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1691_);
lean_ctor_set(v___x_1704_, 1, v___x_1703_);
v___x_1705_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1704_);
lean_ctor_set(v___x_1705_, 1, v___x_1700_);
v___x_1706_ = l_Lean_Json_mkObj(v___x_1705_);
lean_dec_ref_known(v___x_1705_, 2);
v_fst_1624_ = v___x_1706_;
v_snd_1625_ = v_snd_1687_;
goto v___jp_1623_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_n_1607_, 2);
return v___x_1681_;
}
}
default: 
{
lean_object* v_pre_1711_; lean_object* v_i_1712_; lean_object* v___x_1713_; 
v_pre_1711_ = lean_ctor_get(v_n_1607_, 0);
v_i_1712_ = lean_ctor_get(v_n_1607_, 1);
lean_inc(v_pre_1711_);
v___x_1713_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_pre_1711_, v_a_1608_, v_a_1609_);
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1744_; 
v_a_1714_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1744_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1716_ = v___x_1713_;
v_isShared_1717_ = v_isSharedCheck_1744_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1713_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1744_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v_fst_1718_; lean_object* v_snd_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1743_; 
v_fst_1718_ = lean_ctor_get(v_a_1714_, 0);
v_snd_1719_ = lean_ctor_get(v_a_1714_, 1);
v_isSharedCheck_1743_ = !lean_is_exclusive(v_a_1714_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1721_ = v_a_1714_;
v_isShared_1722_ = v_isSharedCheck_1743_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_snd_1719_);
lean_inc(v_fst_1718_);
lean_dec(v_a_1714_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1743_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1727_; 
v___x_1723_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__7));
v___x_1724_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6));
v___x_1725_ = l_Lean_JsonNumber_fromNat(v_fst_1718_);
if (v_isShared_1717_ == 0)
{
lean_ctor_set_tag(v___x_1716_, 2);
lean_ctor_set(v___x_1716_, 0, v___x_1725_);
v___x_1727_ = v___x_1716_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v___x_1725_);
v___x_1727_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
lean_object* v___x_1729_; 
if (v_isShared_1722_ == 0)
{
lean_ctor_set(v___x_1721_, 1, v___x_1727_);
lean_ctor_set(v___x_1721_, 0, v___x_1724_);
v___x_1729_ = v___x_1721_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v___x_1724_);
lean_ctor_set(v_reuseFailAlloc_1741_, 1, v___x_1727_);
v___x_1729_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1730_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__8));
lean_inc(v_i_1712_);
v___x_1731_ = l_Lean_JsonNumber_fromNat(v_i_1712_);
v___x_1732_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1731_);
v___x_1733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1730_);
lean_ctor_set(v___x_1733_, 1, v___x_1732_);
v___x_1734_ = lean_box(0);
v___x_1735_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1733_);
lean_ctor_set(v___x_1735_, 1, v___x_1734_);
v___x_1736_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1729_);
lean_ctor_set(v___x_1736_, 1, v___x_1735_);
v___x_1737_ = l_Lean_Json_mkObj(v___x_1736_);
lean_dec_ref_known(v___x_1736_, 2);
v___x_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1723_);
lean_ctor_set(v___x_1738_, 1, v___x_1737_);
v___x_1739_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1738_);
lean_ctor_set(v___x_1739_, 1, v___x_1734_);
v___x_1740_ = l_Lean_Json_mkObj(v___x_1739_);
lean_dec_ref_known(v___x_1739_, 2);
v_fst_1624_ = v___x_1740_;
v_snd_1625_ = v_snd_1719_;
goto v___jp_1623_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_n_1607_, 2);
return v___x_1713_;
}
}
}
v___jp_1623_:
{
lean_object* v_visitedNames_1626_; lean_object* v_visitedLevels_1627_; lean_object* v_visitedExprs_1628_; lean_object* v_visitedConstants_1629_; lean_object* v_noMDataExprs_1630_; uint8_t v_exportMData_1631_; uint8_t v_exportUnsafe_1632_; uint8_t v_ignoreMissing_1633_; lean_object* v_recursorMap_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1665_; 
v_visitedNames_1626_ = lean_ctor_get(v_snd_1625_, 0);
v_visitedLevels_1627_ = lean_ctor_get(v_snd_1625_, 1);
v_visitedExprs_1628_ = lean_ctor_get(v_snd_1625_, 2);
v_visitedConstants_1629_ = lean_ctor_get(v_snd_1625_, 3);
v_noMDataExprs_1630_ = lean_ctor_get(v_snd_1625_, 4);
v_exportMData_1631_ = lean_ctor_get_uint8(v_snd_1625_, sizeof(void*)*6);
v_exportUnsafe_1632_ = lean_ctor_get_uint8(v_snd_1625_, sizeof(void*)*6 + 1);
v_ignoreMissing_1633_ = lean_ctor_get_uint8(v_snd_1625_, sizeof(void*)*6 + 2);
v_recursorMap_1634_ = lean_ctor_get(v_snd_1625_, 5);
v_isSharedCheck_1665_ = !lean_is_exclusive(v_snd_1625_);
if (v_isSharedCheck_1665_ == 0)
{
v___x_1636_ = v_snd_1625_;
v_isShared_1637_ = v_isSharedCheck_1665_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_recursorMap_1634_);
lean_inc(v_noMDataExprs_1630_);
lean_inc(v_visitedConstants_1629_);
lean_inc(v_visitedExprs_1628_);
lean_inc(v_visitedLevels_1627_);
lean_inc(v_visitedNames_1626_);
lean_dec(v_snd_1625_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1665_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v_size_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v_size_1638_ = lean_ctor_get(v_visitedNames_1626_, 0);
lean_inc_n(v_size_1638_, 2);
v___x_1639_ = l_Lean_JsonNumber_fromNat(v_size_1638_);
v___x_1640_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1640_, 0, v___x_1639_);
v___x_1641_ = l_Lean_Json_setObjVal_x21(v_fst_1624_, v___x_1622_, v___x_1640_);
v___x_1642_ = l_Lean_Json_compress(v___x_1641_);
v___x_1643_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_1642_);
if (lean_obj_tag(v___x_1643_) == 0)
{
lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1655_; 
v_isSharedCheck_1655_ = !lean_is_exclusive(v___x_1643_);
if (v_isSharedCheck_1655_ == 0)
{
lean_object* v_unused_1656_; 
v_unused_1656_ = lean_ctor_get(v___x_1643_, 0);
lean_dec(v_unused_1656_);
v___x_1645_ = v___x_1643_;
v_isShared_1646_ = v_isSharedCheck_1655_;
goto v_resetjp_1644_;
}
else
{
lean_dec(v___x_1643_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1655_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v___x_1647_; lean_object* v___x_1649_; 
lean_inc(v_size_1638_);
v___x_1647_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(v_visitedNames_1626_, v_n_1607_, v_size_1638_);
if (v_isShared_1637_ == 0)
{
lean_ctor_set(v___x_1636_, 0, v___x_1647_);
v___x_1649_ = v___x_1636_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v___x_1647_);
lean_ctor_set(v_reuseFailAlloc_1654_, 1, v_visitedLevels_1627_);
lean_ctor_set(v_reuseFailAlloc_1654_, 2, v_visitedExprs_1628_);
lean_ctor_set(v_reuseFailAlloc_1654_, 3, v_visitedConstants_1629_);
lean_ctor_set(v_reuseFailAlloc_1654_, 4, v_noMDataExprs_1630_);
lean_ctor_set(v_reuseFailAlloc_1654_, 5, v_recursorMap_1634_);
lean_ctor_set_uint8(v_reuseFailAlloc_1654_, sizeof(void*)*6, v_exportMData_1631_);
lean_ctor_set_uint8(v_reuseFailAlloc_1654_, sizeof(void*)*6 + 1, v_exportUnsafe_1632_);
lean_ctor_set_uint8(v_reuseFailAlloc_1654_, sizeof(void*)*6 + 2, v_ignoreMissing_1633_);
v___x_1649_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
lean_object* v___x_1650_; lean_object* v___x_1652_; 
v___x_1650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1650_, 0, v_size_1638_);
lean_ctor_set(v___x_1650_, 1, v___x_1649_);
if (v_isShared_1646_ == 0)
{
lean_ctor_set(v___x_1645_, 0, v___x_1650_);
v___x_1652_ = v___x_1645_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v___x_1650_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
}
else
{
lean_object* v_a_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1664_; 
lean_dec(v_size_1638_);
lean_del_object(v___x_1636_);
lean_dec(v_recursorMap_1634_);
lean_dec_ref(v_noMDataExprs_1630_);
lean_dec_ref(v_visitedConstants_1629_);
lean_dec_ref(v_visitedExprs_1628_);
lean_dec_ref(v_visitedLevels_1627_);
lean_dec_ref(v_visitedNames_1626_);
lean_dec(v_n_1607_);
v_a_1657_ = lean_ctor_get(v___x_1643_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v___x_1643_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1659_ = v___x_1643_;
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_a_1657_);
lean_dec(v___x_1643_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1662_; 
if (v_isShared_1660_ == 0)
{
v___x_1662_ = v___x_1659_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v_a_1657_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___boxed(lean_object* v_n_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_){
_start:
{
lean_object* v_res_1749_; 
v_res_1749_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_n_1745_, v_a_1746_, v_a_1747_);
lean_dec_ref(v_a_1746_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0(lean_object* v_00_u03b2_1750_, lean_object* v_m_1751_, lean_object* v_a_1752_){
_start:
{
lean_object* v___x_1753_; 
v___x_1753_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(v_m_1751_, v_a_1752_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___boxed(lean_object* v_00_u03b2_1754_, lean_object* v_m_1755_, lean_object* v_a_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0(v_00_u03b2_1754_, v_m_1755_, v_a_1756_);
lean_dec(v_a_1756_);
lean_dec_ref(v_m_1755_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0(lean_object* v_00_u03b2_1758_, lean_object* v_a_1759_, lean_object* v_x_1760_){
_start:
{
lean_object* v___x_1761_; 
v___x_1761_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(v_a_1759_, v_x_1760_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1762_, lean_object* v_a_1763_, lean_object* v_x_1764_){
_start:
{
lean_object* v_res_1765_; 
v_res_1765_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0(v_00_u03b2_1762_, v_a_1763_, v_x_1764_);
lean_dec(v_x_1764_);
lean_dec(v_a_1763_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(lean_object* v_a_1766_, lean_object* v_x_1767_){
_start:
{
if (lean_obj_tag(v_x_1767_) == 0)
{
lean_object* v___x_1768_; 
v___x_1768_ = lean_box(0);
return v___x_1768_;
}
else
{
lean_object* v_key_1769_; lean_object* v_value_1770_; lean_object* v_tail_1771_; uint8_t v___x_1772_; 
v_key_1769_ = lean_ctor_get(v_x_1767_, 0);
v_value_1770_ = lean_ctor_get(v_x_1767_, 1);
v_tail_1771_ = lean_ctor_get(v_x_1767_, 2);
v___x_1772_ = lean_level_eq(v_key_1769_, v_a_1766_);
if (v___x_1772_ == 0)
{
v_x_1767_ = v_tail_1771_;
goto _start;
}
else
{
lean_object* v___x_1774_; 
lean_inc(v_value_1770_);
v___x_1774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1774_, 0, v_value_1770_);
return v___x_1774_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg___boxed(lean_object* v_a_1775_, lean_object* v_x_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(v_a_1775_, v_x_1776_);
lean_dec(v_x_1776_);
lean_dec(v_a_1775_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(lean_object* v_m_1778_, lean_object* v_a_1779_){
_start:
{
lean_object* v_buckets_1780_; lean_object* v___x_1781_; uint64_t v___x_1782_; uint64_t v___x_1783_; uint64_t v___x_1784_; uint64_t v_fold_1785_; uint64_t v___x_1786_; uint64_t v___x_1787_; uint64_t v___x_1788_; size_t v___x_1789_; size_t v___x_1790_; size_t v___x_1791_; size_t v___x_1792_; size_t v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
v_buckets_1780_ = lean_ctor_get(v_m_1778_, 1);
v___x_1781_ = lean_array_get_size(v_buckets_1780_);
v___x_1782_ = l_Lean_Level_hash(v_a_1779_);
v___x_1783_ = 32ULL;
v___x_1784_ = lean_uint64_shift_right(v___x_1782_, v___x_1783_);
v_fold_1785_ = lean_uint64_xor(v___x_1782_, v___x_1784_);
v___x_1786_ = 16ULL;
v___x_1787_ = lean_uint64_shift_right(v_fold_1785_, v___x_1786_);
v___x_1788_ = lean_uint64_xor(v_fold_1785_, v___x_1787_);
v___x_1789_ = lean_uint64_to_usize(v___x_1788_);
v___x_1790_ = lean_usize_of_nat(v___x_1781_);
v___x_1791_ = ((size_t)1ULL);
v___x_1792_ = lean_usize_sub(v___x_1790_, v___x_1791_);
v___x_1793_ = lean_usize_land(v___x_1789_, v___x_1792_);
v___x_1794_ = lean_array_uget_borrowed(v_buckets_1780_, v___x_1793_);
v___x_1795_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(v_a_1779_, v___x_1794_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg___boxed(lean_object* v_m_1796_, lean_object* v_a_1797_){
_start:
{
lean_object* v_res_1798_; 
v_res_1798_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(v_m_1796_, v_a_1797_);
lean_dec(v_a_1797_);
lean_dec_ref(v_m_1796_);
return v_res_1798_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6(void){
_start:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1805_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3));
v___x_1806_ = lean_unsigned_to_nat(23u);
v___x_1807_ = lean_unsigned_to_nat(132u);
v___x_1808_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__5));
v___x_1809_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_1810_ = l_mkPanicMessageWithDecl(v___x_1809_, v___x_1808_, v___x_1807_, v___x_1806_, v___x_1805_);
return v___x_1810_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel(lean_object* v_l_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_){
_start:
{
lean_object* v_visitedLevels_1815_; lean_object* v___x_1816_; 
v_visitedLevels_1815_ = lean_ctor_get(v_a_1813_, 1);
v___x_1816_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(v_visitedLevels_1815_, v_l_1811_);
if (lean_obj_tag(v___x_1816_) == 1)
{
lean_object* v_val_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1825_; 
lean_dec(v_l_1811_);
v_val_1817_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1819_ = v___x_1816_;
v_isShared_1820_ = v_isSharedCheck_1825_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_val_1817_);
lean_dec(v___x_1816_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1825_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
lean_object* v___x_1821_; lean_object* v___x_1823_; 
v___x_1821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1821_, 0, v_val_1817_);
lean_ctor_set(v___x_1821_, 1, v_a_1813_);
if (v_isShared_1820_ == 0)
{
lean_ctor_set_tag(v___x_1819_, 0);
lean_ctor_set(v___x_1819_, 0, v___x_1821_);
v___x_1823_ = v___x_1819_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v___x_1821_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
}
else
{
lean_object* v___x_1826_; lean_object* v_fst_1828_; lean_object* v_snd_1829_; 
lean_dec(v___x_1816_);
v___x_1826_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__0));
switch(lean_obj_tag(v_l_1811_))
{
case 1:
{
lean_object* v_a_1870_; lean_object* v___x_1871_; 
v_a_1870_ = lean_ctor_get(v_l_1811_, 0);
lean_inc(v_a_1870_);
v___x_1871_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1870_, v_a_1812_, v_a_1813_);
if (lean_obj_tag(v___x_1871_) == 0)
{
lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1893_; 
v_a_1872_ = lean_ctor_get(v___x_1871_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1871_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1874_ = v___x_1871_;
v_isShared_1875_ = v_isSharedCheck_1893_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_dec(v___x_1871_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1893_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v_fst_1876_; lean_object* v_snd_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1892_; 
v_fst_1876_ = lean_ctor_get(v_a_1872_, 0);
v_snd_1877_ = lean_ctor_get(v_a_1872_, 1);
v_isSharedCheck_1892_ = !lean_is_exclusive(v_a_1872_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1879_ = v_a_1872_;
v_isShared_1880_ = v_isSharedCheck_1892_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_snd_1877_);
lean_inc(v_fst_1876_);
lean_dec(v_a_1872_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1892_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1884_; 
v___x_1881_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__1));
v___x_1882_ = l_Lean_JsonNumber_fromNat(v_fst_1876_);
if (v_isShared_1875_ == 0)
{
lean_ctor_set_tag(v___x_1874_, 2);
lean_ctor_set(v___x_1874_, 0, v___x_1882_);
v___x_1884_ = v___x_1874_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v___x_1882_);
v___x_1884_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
lean_object* v___x_1886_; 
if (v_isShared_1880_ == 0)
{
lean_ctor_set(v___x_1879_, 1, v___x_1884_);
lean_ctor_set(v___x_1879_, 0, v___x_1881_);
v___x_1886_ = v___x_1879_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v___x_1881_);
lean_ctor_set(v_reuseFailAlloc_1890_, 1, v___x_1884_);
v___x_1886_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1887_ = lean_box(0);
v___x_1888_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1888_, 0, v___x_1886_);
lean_ctor_set(v___x_1888_, 1, v___x_1887_);
v___x_1889_ = l_Lean_Json_mkObj(v___x_1888_);
lean_dec_ref_known(v___x_1888_, 2);
v_fst_1828_ = v___x_1889_;
v_snd_1829_ = v_snd_1877_;
goto v___jp_1827_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_l_1811_, 1);
return v___x_1871_;
}
}
case 2:
{
lean_object* v_a_1894_; lean_object* v_a_1895_; lean_object* v___x_1896_; 
v_a_1894_ = lean_ctor_get(v_l_1811_, 0);
v_a_1895_ = lean_ctor_get(v_l_1811_, 1);
lean_inc(v_a_1894_);
v___x_1896_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1894_, v_a_1812_, v_a_1813_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v_a_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1941_; 
v_a_1897_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1899_ = v___x_1896_;
v_isShared_1900_ = v_isSharedCheck_1941_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_a_1897_);
lean_dec(v___x_1896_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1941_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v_fst_1901_; lean_object* v_snd_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1940_; 
v_fst_1901_ = lean_ctor_get(v_a_1897_, 0);
v_snd_1902_ = lean_ctor_get(v_a_1897_, 1);
v_isSharedCheck_1940_ = !lean_is_exclusive(v_a_1897_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1904_ = v_a_1897_;
v_isShared_1905_ = v_isSharedCheck_1940_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_snd_1902_);
lean_inc(v_fst_1901_);
lean_dec(v_a_1897_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1940_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1906_; 
lean_inc(v_a_1895_);
v___x_1906_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1895_, v_a_1812_, v_snd_1902_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1939_; 
v_a_1907_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1909_ = v___x_1906_;
v_isShared_1910_ = v_isSharedCheck_1939_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1906_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1939_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v_fst_1911_; lean_object* v_snd_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1938_; 
v_fst_1911_ = lean_ctor_get(v_a_1907_, 0);
v_snd_1912_ = lean_ctor_get(v_a_1907_, 1);
v_isSharedCheck_1938_ = !lean_is_exclusive(v_a_1907_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1914_ = v_a_1907_;
v_isShared_1915_ = v_isSharedCheck_1938_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_snd_1912_);
lean_inc(v_fst_1911_);
lean_dec(v_a_1907_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1938_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1919_; 
v___x_1916_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__2));
v___x_1917_ = l_Lean_JsonNumber_fromNat(v_fst_1901_);
if (v_isShared_1910_ == 0)
{
lean_ctor_set_tag(v___x_1909_, 2);
lean_ctor_set(v___x_1909_, 0, v___x_1917_);
v___x_1919_ = v___x_1909_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v___x_1917_);
v___x_1919_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
lean_object* v___x_1920_; lean_object* v___x_1922_; 
v___x_1920_ = l_Lean_JsonNumber_fromNat(v_fst_1911_);
if (v_isShared_1900_ == 0)
{
lean_ctor_set_tag(v___x_1899_, 2);
lean_ctor_set(v___x_1899_, 0, v___x_1920_);
v___x_1922_ = v___x_1899_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v___x_1920_);
v___x_1922_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1929_; 
v___x_1923_ = lean_unsigned_to_nat(2u);
v___x_1924_ = lean_mk_empty_array_with_capacity(v___x_1923_);
v___x_1925_ = lean_array_push(v___x_1924_, v___x_1919_);
v___x_1926_ = lean_array_push(v___x_1925_, v___x_1922_);
v___x_1927_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1927_, 0, v___x_1926_);
if (v_isShared_1915_ == 0)
{
lean_ctor_set(v___x_1914_, 1, v___x_1927_);
lean_ctor_set(v___x_1914_, 0, v___x_1916_);
v___x_1929_ = v___x_1914_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1935_; 
v_reuseFailAlloc_1935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1935_, 0, v___x_1916_);
lean_ctor_set(v_reuseFailAlloc_1935_, 1, v___x_1927_);
v___x_1929_ = v_reuseFailAlloc_1935_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
lean_object* v___x_1930_; lean_object* v___x_1932_; 
v___x_1930_ = lean_box(0);
if (v_isShared_1905_ == 0)
{
lean_ctor_set_tag(v___x_1904_, 1);
lean_ctor_set(v___x_1904_, 1, v___x_1930_);
lean_ctor_set(v___x_1904_, 0, v___x_1929_);
v___x_1932_ = v___x_1904_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v___x_1929_);
lean_ctor_set(v_reuseFailAlloc_1934_, 1, v___x_1930_);
v___x_1932_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
lean_object* v___x_1933_; 
v___x_1933_ = l_Lean_Json_mkObj(v___x_1932_);
lean_dec_ref(v___x_1932_);
v_fst_1828_ = v___x_1933_;
v_snd_1829_ = v_snd_1912_;
goto v___jp_1827_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1904_);
lean_dec(v_fst_1901_);
lean_del_object(v___x_1899_);
lean_dec_ref_known(v_l_1811_, 2);
return v___x_1906_;
}
}
}
}
else
{
lean_dec_ref_known(v_l_1811_, 2);
return v___x_1896_;
}
}
case 3:
{
lean_object* v_a_1942_; lean_object* v_a_1943_; lean_object* v___x_1944_; 
v_a_1942_ = lean_ctor_get(v_l_1811_, 0);
v_a_1943_ = lean_ctor_get(v_l_1811_, 1);
lean_inc(v_a_1942_);
v___x_1944_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1942_, v_a_1812_, v_a_1813_);
if (lean_obj_tag(v___x_1944_) == 0)
{
lean_object* v_a_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1989_; 
v_a_1945_ = lean_ctor_get(v___x_1944_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v___x_1944_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1947_ = v___x_1944_;
v_isShared_1948_ = v_isSharedCheck_1989_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_a_1945_);
lean_dec(v___x_1944_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1989_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v_fst_1949_; lean_object* v_snd_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1988_; 
v_fst_1949_ = lean_ctor_get(v_a_1945_, 0);
v_snd_1950_ = lean_ctor_get(v_a_1945_, 1);
v_isSharedCheck_1988_ = !lean_is_exclusive(v_a_1945_);
if (v_isSharedCheck_1988_ == 0)
{
v___x_1952_ = v_a_1945_;
v_isShared_1953_ = v_isSharedCheck_1988_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_snd_1950_);
lean_inc(v_fst_1949_);
lean_dec(v_a_1945_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1988_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1954_; 
lean_inc(v_a_1943_);
v___x_1954_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1943_, v_a_1812_, v_snd_1950_);
if (lean_obj_tag(v___x_1954_) == 0)
{
lean_object* v_a_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1987_; 
v_a_1955_ = lean_ctor_get(v___x_1954_, 0);
v_isSharedCheck_1987_ = !lean_is_exclusive(v___x_1954_);
if (v_isSharedCheck_1987_ == 0)
{
v___x_1957_ = v___x_1954_;
v_isShared_1958_ = v_isSharedCheck_1987_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_a_1955_);
lean_dec(v___x_1954_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1987_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v_fst_1959_; lean_object* v_snd_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1986_; 
v_fst_1959_ = lean_ctor_get(v_a_1955_, 0);
v_snd_1960_ = lean_ctor_get(v_a_1955_, 1);
v_isSharedCheck_1986_ = !lean_is_exclusive(v_a_1955_);
if (v_isSharedCheck_1986_ == 0)
{
v___x_1962_ = v_a_1955_;
v_isShared_1963_ = v_isSharedCheck_1986_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_snd_1960_);
lean_inc(v_fst_1959_);
lean_dec(v_a_1955_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1986_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1967_; 
v___x_1964_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__3));
v___x_1965_ = l_Lean_JsonNumber_fromNat(v_fst_1949_);
if (v_isShared_1958_ == 0)
{
lean_ctor_set_tag(v___x_1957_, 2);
lean_ctor_set(v___x_1957_, 0, v___x_1965_);
v___x_1967_ = v___x_1957_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v___x_1965_);
v___x_1967_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
lean_object* v___x_1968_; lean_object* v___x_1970_; 
v___x_1968_ = l_Lean_JsonNumber_fromNat(v_fst_1959_);
if (v_isShared_1948_ == 0)
{
lean_ctor_set_tag(v___x_1947_, 2);
lean_ctor_set(v___x_1947_, 0, v___x_1968_);
v___x_1970_ = v___x_1947_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v___x_1968_);
v___x_1970_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1977_; 
v___x_1971_ = lean_unsigned_to_nat(2u);
v___x_1972_ = lean_mk_empty_array_with_capacity(v___x_1971_);
v___x_1973_ = lean_array_push(v___x_1972_, v___x_1967_);
v___x_1974_ = lean_array_push(v___x_1973_, v___x_1970_);
v___x_1975_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1975_, 0, v___x_1974_);
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 1, v___x_1975_);
lean_ctor_set(v___x_1962_, 0, v___x_1964_);
v___x_1977_ = v___x_1962_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v___x_1964_);
lean_ctor_set(v_reuseFailAlloc_1983_, 1, v___x_1975_);
v___x_1977_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
lean_object* v___x_1978_; lean_object* v___x_1980_; 
v___x_1978_ = lean_box(0);
if (v_isShared_1953_ == 0)
{
lean_ctor_set_tag(v___x_1952_, 1);
lean_ctor_set(v___x_1952_, 1, v___x_1978_);
lean_ctor_set(v___x_1952_, 0, v___x_1977_);
v___x_1980_ = v___x_1952_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v___x_1977_);
lean_ctor_set(v_reuseFailAlloc_1982_, 1, v___x_1978_);
v___x_1980_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
lean_object* v___x_1981_; 
v___x_1981_ = l_Lean_Json_mkObj(v___x_1980_);
lean_dec_ref(v___x_1980_);
v_fst_1828_ = v___x_1981_;
v_snd_1829_ = v_snd_1960_;
goto v___jp_1827_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1952_);
lean_dec(v_fst_1949_);
lean_del_object(v___x_1947_);
lean_dec_ref_known(v_l_1811_, 2);
return v___x_1954_;
}
}
}
}
else
{
lean_dec_ref_known(v_l_1811_, 2);
return v___x_1944_;
}
}
case 4:
{
lean_object* v_a_1990_; lean_object* v___x_1991_; 
v_a_1990_ = lean_ctor_get(v_l_1811_, 0);
lean_inc(v_a_1990_);
v___x_1991_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_a_1990_, v_a_1812_, v_a_1813_);
if (lean_obj_tag(v___x_1991_) == 0)
{
lean_object* v_a_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2013_; 
v_a_1992_ = lean_ctor_get(v___x_1991_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_1991_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_1994_ = v___x_1991_;
v_isShared_1995_ = v_isSharedCheck_2013_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_a_1992_);
lean_dec(v___x_1991_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2013_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v_fst_1996_; lean_object* v_snd_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2012_; 
v_fst_1996_ = lean_ctor_get(v_a_1992_, 0);
v_snd_1997_ = lean_ctor_get(v_a_1992_, 1);
v_isSharedCheck_2012_ = !lean_is_exclusive(v_a_1992_);
if (v_isSharedCheck_2012_ == 0)
{
v___x_1999_ = v_a_1992_;
v_isShared_2000_ = v_isSharedCheck_2012_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_snd_1997_);
lean_inc(v_fst_1996_);
lean_dec(v_a_1992_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2012_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2004_; 
v___x_2001_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__4));
v___x_2002_ = l_Lean_JsonNumber_fromNat(v_fst_1996_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set_tag(v___x_1994_, 2);
lean_ctor_set(v___x_1994_, 0, v___x_2002_);
v___x_2004_ = v___x_1994_;
goto v_reusejp_2003_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v___x_2002_);
v___x_2004_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2003_;
}
v_reusejp_2003_:
{
lean_object* v___x_2006_; 
if (v_isShared_2000_ == 0)
{
lean_ctor_set(v___x_1999_, 1, v___x_2004_);
lean_ctor_set(v___x_1999_, 0, v___x_2001_);
v___x_2006_ = v___x_1999_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v___x_2001_);
lean_ctor_set(v_reuseFailAlloc_2010_, 1, v___x_2004_);
v___x_2006_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2007_ = lean_box(0);
v___x_2008_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2008_, 0, v___x_2006_);
lean_ctor_set(v___x_2008_, 1, v___x_2007_);
v___x_2009_ = l_Lean_Json_mkObj(v___x_2008_);
lean_dec_ref_known(v___x_2008_, 2);
v_fst_1828_ = v___x_2009_;
v_snd_1829_ = v_snd_1997_;
goto v___jp_1827_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_l_1811_, 1);
return v___x_1991_;
}
}
default: 
{
lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2014_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6, &l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6_once, _init_l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6);
v___x_2015_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v___x_2014_, v_a_1812_, v_a_1813_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_a_2016_; lean_object* v_fst_2017_; lean_object* v_snd_2018_; 
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_a_2016_);
lean_dec_ref_known(v___x_2015_, 1);
v_fst_2017_ = lean_ctor_get(v_a_2016_, 0);
lean_inc(v_fst_2017_);
v_snd_2018_ = lean_ctor_get(v_a_2016_, 1);
lean_inc(v_snd_2018_);
lean_dec(v_a_2016_);
v_fst_1828_ = v_fst_2017_;
v_snd_1829_ = v_snd_2018_;
goto v___jp_1827_;
}
else
{
lean_object* v_a_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2026_; 
lean_dec(v_l_1811_);
v_a_2019_ = lean_ctor_get(v___x_2015_, 0);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2021_ = v___x_2015_;
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_a_2019_);
lean_dec(v___x_2015_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2024_; 
if (v_isShared_2022_ == 0)
{
v___x_2024_ = v___x_2021_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v_a_2019_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
return v___x_2024_;
}
}
}
}
}
v___jp_1827_:
{
lean_object* v_visitedLevels_1830_; lean_object* v_visitedNames_1831_; lean_object* v_visitedExprs_1832_; lean_object* v_visitedConstants_1833_; lean_object* v_noMDataExprs_1834_; uint8_t v_exportMData_1835_; uint8_t v_exportUnsafe_1836_; uint8_t v_ignoreMissing_1837_; lean_object* v_recursorMap_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1869_; 
v_visitedLevels_1830_ = lean_ctor_get(v_snd_1829_, 1);
v_visitedNames_1831_ = lean_ctor_get(v_snd_1829_, 0);
v_visitedExprs_1832_ = lean_ctor_get(v_snd_1829_, 2);
v_visitedConstants_1833_ = lean_ctor_get(v_snd_1829_, 3);
v_noMDataExprs_1834_ = lean_ctor_get(v_snd_1829_, 4);
v_exportMData_1835_ = lean_ctor_get_uint8(v_snd_1829_, sizeof(void*)*6);
v_exportUnsafe_1836_ = lean_ctor_get_uint8(v_snd_1829_, sizeof(void*)*6 + 1);
v_ignoreMissing_1837_ = lean_ctor_get_uint8(v_snd_1829_, sizeof(void*)*6 + 2);
v_recursorMap_1838_ = lean_ctor_get(v_snd_1829_, 5);
v_isSharedCheck_1869_ = !lean_is_exclusive(v_snd_1829_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1840_ = v_snd_1829_;
v_isShared_1841_ = v_isSharedCheck_1869_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_recursorMap_1838_);
lean_inc(v_noMDataExprs_1834_);
lean_inc(v_visitedConstants_1833_);
lean_inc(v_visitedExprs_1832_);
lean_inc(v_visitedLevels_1830_);
lean_inc(v_visitedNames_1831_);
lean_dec(v_snd_1829_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1869_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v_size_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
v_size_1842_ = lean_ctor_get(v_visitedLevels_1830_, 0);
lean_inc_n(v_size_1842_, 2);
v___x_1843_ = l_Lean_JsonNumber_fromNat(v_size_1842_);
v___x_1844_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1843_);
v___x_1845_ = l_Lean_Json_setObjVal_x21(v_fst_1828_, v___x_1826_, v___x_1844_);
v___x_1846_ = l_Lean_Json_compress(v___x_1845_);
v___x_1847_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_1846_);
if (lean_obj_tag(v___x_1847_) == 0)
{
lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1859_; 
v_isSharedCheck_1859_ = !lean_is_exclusive(v___x_1847_);
if (v_isSharedCheck_1859_ == 0)
{
lean_object* v_unused_1860_; 
v_unused_1860_ = lean_ctor_get(v___x_1847_, 0);
lean_dec(v_unused_1860_);
v___x_1849_ = v___x_1847_;
v_isShared_1850_ = v_isSharedCheck_1859_;
goto v_resetjp_1848_;
}
else
{
lean_dec(v___x_1847_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1859_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v___x_1851_; lean_object* v___x_1853_; 
lean_inc(v_size_1842_);
v___x_1851_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(v_visitedLevels_1830_, v_l_1811_, v_size_1842_);
if (v_isShared_1841_ == 0)
{
lean_ctor_set(v___x_1840_, 1, v___x_1851_);
v___x_1853_ = v___x_1840_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v_visitedNames_1831_);
lean_ctor_set(v_reuseFailAlloc_1858_, 1, v___x_1851_);
lean_ctor_set(v_reuseFailAlloc_1858_, 2, v_visitedExprs_1832_);
lean_ctor_set(v_reuseFailAlloc_1858_, 3, v_visitedConstants_1833_);
lean_ctor_set(v_reuseFailAlloc_1858_, 4, v_noMDataExprs_1834_);
lean_ctor_set(v_reuseFailAlloc_1858_, 5, v_recursorMap_1838_);
lean_ctor_set_uint8(v_reuseFailAlloc_1858_, sizeof(void*)*6, v_exportMData_1835_);
lean_ctor_set_uint8(v_reuseFailAlloc_1858_, sizeof(void*)*6 + 1, v_exportUnsafe_1836_);
lean_ctor_set_uint8(v_reuseFailAlloc_1858_, sizeof(void*)*6 + 2, v_ignoreMissing_1837_);
v___x_1853_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
lean_object* v___x_1854_; lean_object* v___x_1856_; 
v___x_1854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1854_, 0, v_size_1842_);
lean_ctor_set(v___x_1854_, 1, v___x_1853_);
if (v_isShared_1850_ == 0)
{
lean_ctor_set(v___x_1849_, 0, v___x_1854_);
v___x_1856_ = v___x_1849_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v___x_1854_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
}
}
else
{
lean_object* v_a_1861_; lean_object* v___x_1863_; uint8_t v_isShared_1864_; uint8_t v_isSharedCheck_1868_; 
lean_dec(v_size_1842_);
lean_del_object(v___x_1840_);
lean_dec(v_recursorMap_1838_);
lean_dec_ref(v_noMDataExprs_1834_);
lean_dec_ref(v_visitedConstants_1833_);
lean_dec_ref(v_visitedExprs_1832_);
lean_dec_ref(v_visitedNames_1831_);
lean_dec_ref(v_visitedLevels_1830_);
lean_dec(v_l_1811_);
v_a_1861_ = lean_ctor_get(v___x_1847_, 0);
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1847_);
if (v_isSharedCheck_1868_ == 0)
{
v___x_1863_ = v___x_1847_;
v_isShared_1864_ = v_isSharedCheck_1868_;
goto v_resetjp_1862_;
}
else
{
lean_inc(v_a_1861_);
lean_dec(v___x_1847_);
v___x_1863_ = lean_box(0);
v_isShared_1864_ = v_isSharedCheck_1868_;
goto v_resetjp_1862_;
}
v_resetjp_1862_:
{
lean_object* v___x_1866_; 
if (v_isShared_1864_ == 0)
{
v___x_1866_ = v___x_1863_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v_a_1861_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
return v___x_1866_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___boxed(lean_object* v_l_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_l_2027_, v_a_2028_, v_a_2029_);
lean_dec_ref(v_a_2028_);
return v_res_2031_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0(lean_object* v_00_u03b2_2032_, lean_object* v_m_2033_, lean_object* v_a_2034_){
_start:
{
lean_object* v___x_2035_; 
v___x_2035_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(v_m_2033_, v_a_2034_);
return v___x_2035_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___boxed(lean_object* v_00_u03b2_2036_, lean_object* v_m_2037_, lean_object* v_a_2038_){
_start:
{
lean_object* v_res_2039_; 
v_res_2039_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0(v_00_u03b2_2036_, v_m_2037_, v_a_2038_);
lean_dec(v_a_2038_);
lean_dec_ref(v_m_2037_);
return v_res_2039_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0(lean_object* v_00_u03b2_2040_, lean_object* v_a_2041_, lean_object* v_x_2042_){
_start:
{
lean_object* v___x_2043_; 
v___x_2043_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(v_a_2041_, v_x_2042_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2044_, lean_object* v_a_2045_, lean_object* v_x_2046_){
_start:
{
lean_object* v_res_2047_; 
v_res_2047_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0(v_00_u03b2_2044_, v_a_2045_, v_x_2046_);
lean_dec(v_x_2046_);
lean_dec(v_a_2045_);
return v_res_2047_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__1(lean_object* v_a_2048_, lean_object* v_a_2049_){
_start:
{
if (lean_obj_tag(v_a_2048_) == 0)
{
lean_object* v___x_2050_; 
v___x_2050_ = l_List_reverse___redArg(v_a_2049_);
return v___x_2050_;
}
else
{
lean_object* v_head_2051_; lean_object* v_tail_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2061_; 
v_head_2051_ = lean_ctor_get(v_a_2048_, 0);
v_tail_2052_ = lean_ctor_get(v_a_2048_, 1);
v_isSharedCheck_2061_ = !lean_is_exclusive(v_a_2048_);
if (v_isSharedCheck_2061_ == 0)
{
v___x_2054_ = v_a_2048_;
v_isShared_2055_ = v_isSharedCheck_2061_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_tail_2052_);
lean_inc(v_head_2051_);
lean_dec(v_a_2048_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2061_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v___x_2056_; lean_object* v___x_2058_; 
v___x_2056_ = l_Lean_Level_param___override(v_head_2051_);
if (v_isShared_2055_ == 0)
{
lean_ctor_set(v___x_2054_, 1, v_a_2049_);
lean_ctor_set(v___x_2054_, 0, v___x_2056_);
v___x_2058_ = v___x_2054_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v___x_2056_);
lean_ctor_set(v_reuseFailAlloc_2060_, 1, v_a_2049_);
v___x_2058_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
v_a_2048_ = v_tail_2052_;
v_a_2049_ = v___x_2058_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(size_t v_sz_2062_, size_t v_i_2063_, lean_object* v_bs_2064_){
_start:
{
uint8_t v___x_2065_; 
v___x_2065_ = lean_usize_dec_lt(v_i_2063_, v_sz_2062_);
if (v___x_2065_ == 0)
{
return v_bs_2064_;
}
else
{
lean_object* v_v_2066_; lean_object* v___x_2067_; lean_object* v_bs_x27_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; size_t v___x_2071_; size_t v___x_2072_; lean_object* v___x_2073_; 
v_v_2066_ = lean_array_uget(v_bs_2064_, v_i_2063_);
v___x_2067_ = lean_unsigned_to_nat(0u);
v_bs_x27_2068_ = lean_array_uset(v_bs_2064_, v_i_2063_, v___x_2067_);
v___x_2069_ = l_Lean_JsonNumber_fromNat(v_v_2066_);
v___x_2070_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2070_, 0, v___x_2069_);
v___x_2071_ = ((size_t)1ULL);
v___x_2072_ = lean_usize_add(v_i_2063_, v___x_2071_);
v___x_2073_ = lean_array_uset(v_bs_x27_2068_, v_i_2063_, v___x_2070_);
v_i_2063_ = v___x_2072_;
v_bs_2064_ = v___x_2073_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4___boxed(lean_object* v_sz_2075_, lean_object* v_i_2076_, lean_object* v_bs_2077_){
_start:
{
size_t v_sz_boxed_2078_; size_t v_i_boxed_2079_; lean_object* v_res_2080_; 
v_sz_boxed_2078_ = lean_unbox_usize(v_sz_2075_);
lean_dec(v_sz_2075_);
v_i_boxed_2079_ = lean_unbox_usize(v_i_2076_);
lean_dec(v_i_2076_);
v_res_2080_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(v_sz_boxed_2078_, v_i_boxed_2079_, v_bs_2077_);
return v_res_2080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3(lean_object* v_a_2081_){
_start:
{
size_t v_sz_2082_; size_t v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
v_sz_2082_ = lean_array_size(v_a_2081_);
v___x_2083_ = ((size_t)0ULL);
v___x_2084_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(v_sz_2082_, v___x_2083_, v_a_2081_);
v___x_2085_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2085_, 0, v___x_2084_);
return v___x_2085_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(lean_object* v_a_2086_){
_start:
{
lean_object* v___x_2087_; lean_object* v___x_2088_; 
v___x_2087_ = lean_array_mk(v_a_2086_);
v___x_2088_ = l_Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3(v___x_2087_);
return v___x_2088_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(lean_object* v_x_2089_, lean_object* v_x_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_){
_start:
{
if (lean_obj_tag(v_x_2089_) == 0)
{
lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2094_ = l_List_reverse___redArg(v_x_2090_);
v___x_2095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2094_);
lean_ctor_set(v___x_2095_, 1, v___y_2092_);
v___x_2096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2095_);
return v___x_2096_;
}
else
{
lean_object* v_head_2097_; lean_object* v_tail_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2118_; 
v_head_2097_ = lean_ctor_get(v_x_2089_, 0);
v_tail_2098_ = lean_ctor_get(v_x_2089_, 1);
v_isSharedCheck_2118_ = !lean_is_exclusive(v_x_2089_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2100_ = v_x_2089_;
v_isShared_2101_ = v_isSharedCheck_2118_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_tail_2098_);
lean_inc(v_head_2097_);
lean_dec(v_x_2089_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2118_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
lean_object* v___x_2102_; 
v___x_2102_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_head_2097_, v___y_2091_, v___y_2092_);
if (lean_obj_tag(v___x_2102_) == 0)
{
lean_object* v_a_2103_; lean_object* v_fst_2104_; lean_object* v_snd_2105_; lean_object* v___x_2107_; 
v_a_2103_ = lean_ctor_get(v___x_2102_, 0);
lean_inc(v_a_2103_);
lean_dec_ref_known(v___x_2102_, 1);
v_fst_2104_ = lean_ctor_get(v_a_2103_, 0);
lean_inc(v_fst_2104_);
v_snd_2105_ = lean_ctor_get(v_a_2103_, 1);
lean_inc(v_snd_2105_);
lean_dec(v_a_2103_);
if (v_isShared_2101_ == 0)
{
lean_ctor_set(v___x_2100_, 1, v_x_2090_);
lean_ctor_set(v___x_2100_, 0, v_fst_2104_);
v___x_2107_ = v___x_2100_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_fst_2104_);
lean_ctor_set(v_reuseFailAlloc_2109_, 1, v_x_2090_);
v___x_2107_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
v_x_2089_ = v_tail_2098_;
v_x_2090_ = v___x_2107_;
v___y_2092_ = v_snd_2105_;
goto _start;
}
}
else
{
lean_object* v_a_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2117_; 
lean_del_object(v___x_2100_);
lean_dec(v_tail_2098_);
lean_dec(v_x_2090_);
v_a_2110_ = lean_ctor_get(v___x_2102_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2102_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2112_ = v___x_2102_;
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_a_2110_);
lean_dec(v___x_2102_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2115_; 
if (v_isShared_2113_ == 0)
{
v___x_2115_ = v___x_2112_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v_a_2110_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2___boxed(lean_object* v_x_2119_, lean_object* v_x_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_){
_start:
{
lean_object* v_res_2124_; 
v_res_2124_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(v_x_2119_, v_x_2120_, v___y_2121_, v___y_2122_);
lean_dec_ref(v___y_2121_);
return v_res_2124_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(lean_object* v_x_2125_, lean_object* v_x_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_){
_start:
{
if (lean_obj_tag(v_x_2125_) == 0)
{
lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; 
v___x_2130_ = l_List_reverse___redArg(v_x_2126_);
v___x_2131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2130_);
lean_ctor_set(v___x_2131_, 1, v___y_2128_);
v___x_2132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2131_);
return v___x_2132_;
}
else
{
lean_object* v_head_2133_; lean_object* v_tail_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2154_; 
v_head_2133_ = lean_ctor_get(v_x_2125_, 0);
v_tail_2134_ = lean_ctor_get(v_x_2125_, 1);
v_isSharedCheck_2154_ = !lean_is_exclusive(v_x_2125_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2136_ = v_x_2125_;
v_isShared_2137_ = v_isSharedCheck_2154_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_tail_2134_);
lean_inc(v_head_2133_);
lean_dec(v_x_2125_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2154_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2138_; 
v___x_2138_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_head_2133_, v___y_2127_, v___y_2128_);
if (lean_obj_tag(v___x_2138_) == 0)
{
lean_object* v_a_2139_; lean_object* v_fst_2140_; lean_object* v_snd_2141_; lean_object* v___x_2143_; 
v_a_2139_ = lean_ctor_get(v___x_2138_, 0);
lean_inc(v_a_2139_);
lean_dec_ref_known(v___x_2138_, 1);
v_fst_2140_ = lean_ctor_get(v_a_2139_, 0);
lean_inc(v_fst_2140_);
v_snd_2141_ = lean_ctor_get(v_a_2139_, 1);
lean_inc(v_snd_2141_);
lean_dec(v_a_2139_);
if (v_isShared_2137_ == 0)
{
lean_ctor_set(v___x_2136_, 1, v_x_2126_);
lean_ctor_set(v___x_2136_, 0, v_fst_2140_);
v___x_2143_ = v___x_2136_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_fst_2140_);
lean_ctor_set(v_reuseFailAlloc_2145_, 1, v_x_2126_);
v___x_2143_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
v_x_2125_ = v_tail_2134_;
v_x_2126_ = v___x_2143_;
v___y_2128_ = v_snd_2141_;
goto _start;
}
}
else
{
lean_object* v_a_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2153_; 
lean_del_object(v___x_2136_);
lean_dec(v_tail_2134_);
lean_dec(v_x_2126_);
v_a_2146_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2148_ = v___x_2138_;
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_a_2146_);
lean_dec(v___x_2138_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v___x_2151_; 
if (v_isShared_2149_ == 0)
{
v___x_2151_ = v___x_2148_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_a_2146_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
return v___x_2151_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0___boxed(lean_object* v_x_2155_, lean_object* v_x_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_){
_start:
{
lean_object* v_res_2160_; 
v_res_2160_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(v_x_2155_, v_x_2156_, v___y_2157_, v___y_2158_);
lean_dec_ref(v___y_2157_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpUparams(lean_object* v_uparams_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_){
_start:
{
lean_object* v___x_2165_; lean_object* v___x_2166_; 
v___x_2165_ = lean_box(0);
lean_inc(v_uparams_2161_);
v___x_2166_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(v_uparams_2161_, v___x_2165_, v_a_2162_, v_a_2163_);
if (lean_obj_tag(v___x_2166_) == 0)
{
lean_object* v_a_2167_; lean_object* v_fst_2168_; lean_object* v_snd_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v_a_2167_ = lean_ctor_get(v___x_2166_, 0);
lean_inc(v_a_2167_);
lean_dec_ref_known(v___x_2166_, 1);
v_fst_2168_ = lean_ctor_get(v_a_2167_, 0);
lean_inc(v_fst_2168_);
v_snd_2169_ = lean_ctor_get(v_a_2167_, 1);
lean_inc(v_snd_2169_);
lean_dec(v_a_2167_);
v___x_2170_ = l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__1(v_uparams_2161_, v___x_2165_);
v___x_2171_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(v___x_2170_, v___x_2165_, v_a_2162_, v_snd_2169_);
if (lean_obj_tag(v___x_2171_) == 0)
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2189_; 
v_a_2172_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2174_ = v___x_2171_;
v_isShared_2175_ = v_isSharedCheck_2189_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2171_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2189_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v_snd_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2187_; 
v_snd_2176_ = lean_ctor_get(v_a_2172_, 1);
v_isSharedCheck_2187_ = !lean_is_exclusive(v_a_2172_);
if (v_isSharedCheck_2187_ == 0)
{
lean_object* v_unused_2188_; 
v_unused_2188_ = lean_ctor_get(v_a_2172_, 0);
lean_dec(v_unused_2188_);
v___x_2178_ = v_a_2172_;
v_isShared_2179_ = v_isSharedCheck_2187_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_snd_2176_);
lean_dec(v_a_2172_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2187_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2180_; lean_object* v___x_2182_; 
v___x_2180_ = l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(v_fst_2168_);
if (v_isShared_2179_ == 0)
{
lean_ctor_set(v___x_2178_, 0, v___x_2180_);
v___x_2182_ = v___x_2178_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v___x_2180_);
lean_ctor_set(v_reuseFailAlloc_2186_, 1, v_snd_2176_);
v___x_2182_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
lean_object* v___x_2184_; 
if (v_isShared_2175_ == 0)
{
lean_ctor_set(v___x_2174_, 0, v___x_2182_);
v___x_2184_ = v___x_2174_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v___x_2182_);
v___x_2184_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
return v___x_2184_;
}
}
}
}
}
else
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2197_; 
lean_dec(v_fst_2168_);
v_a_2190_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2192_ = v___x_2171_;
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2171_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2195_; 
if (v_isShared_2193_ == 0)
{
v___x_2195_ = v___x_2192_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_a_2190_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
return v___x_2195_;
}
}
}
}
else
{
lean_object* v_a_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2205_; 
lean_dec(v_uparams_2161_);
v_a_2198_ = lean_ctor_get(v___x_2166_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v___x_2166_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2200_ = v___x_2166_;
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_a_2198_);
lean_dec(v___x_2166_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2205_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2203_; 
if (v_isShared_2201_ == 0)
{
v___x_2203_ = v___x_2200_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_a_2198_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpUparams___boxed(lean_object* v_uparams_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_, lean_object* v_a_2209_){
_start:
{
lean_object* v_res_2210_; 
v_res_2210_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_uparams_2206_, v_a_2207_, v_a_2208_);
lean_dec_ref(v_a_2207_);
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpNames(lean_object* v_uparams_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_){
_start:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2215_ = lean_box(0);
v___x_2216_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(v_uparams_2211_, v___x_2215_, v_a_2212_, v_a_2213_);
if (lean_obj_tag(v___x_2216_) == 0)
{
lean_object* v_a_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2234_; 
v_a_2217_ = lean_ctor_get(v___x_2216_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2219_ = v___x_2216_;
v_isShared_2220_ = v_isSharedCheck_2234_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_a_2217_);
lean_dec(v___x_2216_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2234_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v_fst_2221_; lean_object* v_snd_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2233_; 
v_fst_2221_ = lean_ctor_get(v_a_2217_, 0);
v_snd_2222_ = lean_ctor_get(v_a_2217_, 1);
v_isSharedCheck_2233_ = !lean_is_exclusive(v_a_2217_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2224_ = v_a_2217_;
v_isShared_2225_ = v_isSharedCheck_2233_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_snd_2222_);
lean_inc(v_fst_2221_);
lean_dec(v_a_2217_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2233_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2226_; lean_object* v___x_2228_; 
v___x_2226_ = l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(v_fst_2221_);
if (v_isShared_2225_ == 0)
{
lean_ctor_set(v___x_2224_, 0, v___x_2226_);
v___x_2228_ = v___x_2224_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v___x_2226_);
lean_ctor_set(v_reuseFailAlloc_2232_, 1, v_snd_2222_);
v___x_2228_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
lean_object* v___x_2230_; 
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 0, v___x_2228_);
v___x_2230_ = v___x_2219_;
goto v_reusejp_2229_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v___x_2228_);
v___x_2230_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2229_;
}
v_reusejp_2229_:
{
return v___x_2230_;
}
}
}
}
}
else
{
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
v_a_2235_ = lean_ctor_get(v___x_2216_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v___x_2216_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2216_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2238_ == 0)
{
v___x_2240_ = v___x_2237_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpNames___boxed(lean_object* v_uparams_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_){
_start:
{
lean_object* v_res_2247_; 
v_res_2247_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_uparams_2243_, v_a_2244_, v_a_2245_);
lean_dec_ref(v_a_2244_);
return v_res_2247_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(lean_object* v_msg_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_){
_start:
{
lean_object* v___x_2252_; lean_object* v___f_2253_; lean_object* v___f_2254_; lean_object* v___f_2255_; lean_object* v___f_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___f_2265_; lean_object* v___x_11487__overap_2266_; lean_object* v___x_2267_; 
v___x_2252_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2253_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2253_, 0, v___x_2252_);
v___f_2254_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2254_, 0, v___x_2252_);
v___f_2255_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2255_, 0, v___x_2252_);
v___f_2256_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2256_, 0, v___x_2252_);
v___x_2257_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2257_, 0, lean_box(0));
lean_closure_set(v___x_2257_, 1, lean_box(0));
lean_closure_set(v___x_2257_, 2, v___x_2252_);
v___x_2258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2258_, 0, v___x_2257_);
lean_ctor_set(v___x_2258_, 1, v___f_2253_);
v___x_2259_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2259_, 0, lean_box(0));
lean_closure_set(v___x_2259_, 1, lean_box(0));
lean_closure_set(v___x_2259_, 2, v___x_2252_);
v___x_2260_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2260_, 0, v___x_2258_);
lean_ctor_set(v___x_2260_, 1, v___x_2259_);
lean_ctor_set(v___x_2260_, 2, v___f_2254_);
lean_ctor_set(v___x_2260_, 3, v___f_2255_);
lean_ctor_set(v___x_2260_, 4, v___f_2256_);
v___x_2261_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2261_, 0, lean_box(0));
lean_closure_set(v___x_2261_, 1, lean_box(0));
lean_closure_set(v___x_2261_, 2, v___x_2252_);
v___x_2262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2260_);
lean_ctor_set(v___x_2262_, 1, v___x_2261_);
v___x_2263_ = l_Lean_instInhabitedExpr;
v___x_2264_ = l_instInhabitedOfMonad___redArg(v___x_2262_, v___x_2263_);
v___f_2265_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2265_, 0, v___x_2264_);
v___x_11487__overap_2266_ = lean_panic_fn_borrowed(v___f_2265_, v_msg_2248_);
lean_dec_ref(v___f_2265_);
lean_inc_ref(v___y_2249_);
v___x_2267_ = lean_apply_3(v___x_11487__overap_2266_, v___y_2249_, v___y_2250_, lean_box(0));
return v___x_2267_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2___boxed(lean_object* v_msg_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_){
_start:
{
lean_object* v_res_2272_; 
v_res_2272_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(v_msg_2268_, v___y_2269_, v___y_2270_);
lean_dec_ref(v___y_2269_);
return v_res_2272_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(lean_object* v_a_2273_, lean_object* v_b_2274_, lean_object* v_x_2275_){
_start:
{
if (lean_obj_tag(v_x_2275_) == 0)
{
lean_dec(v_b_2274_);
lean_dec_ref(v_a_2273_);
return v_x_2275_;
}
else
{
lean_object* v_key_2276_; lean_object* v_value_2277_; lean_object* v_tail_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2290_; 
v_key_2276_ = lean_ctor_get(v_x_2275_, 0);
v_value_2277_ = lean_ctor_get(v_x_2275_, 1);
v_tail_2278_ = lean_ctor_get(v_x_2275_, 2);
v_isSharedCheck_2290_ = !lean_is_exclusive(v_x_2275_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2280_ = v_x_2275_;
v_isShared_2281_ = v_isSharedCheck_2290_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_tail_2278_);
lean_inc(v_value_2277_);
lean_inc(v_key_2276_);
lean_dec(v_x_2275_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2290_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
uint8_t v___x_2282_; 
v___x_2282_ = lean_expr_eqv(v_key_2276_, v_a_2273_);
if (v___x_2282_ == 0)
{
lean_object* v___x_2283_; lean_object* v___x_2285_; 
v___x_2283_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(v_a_2273_, v_b_2274_, v_tail_2278_);
if (v_isShared_2281_ == 0)
{
lean_ctor_set(v___x_2280_, 2, v___x_2283_);
v___x_2285_ = v___x_2280_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_key_2276_);
lean_ctor_set(v_reuseFailAlloc_2286_, 1, v_value_2277_);
lean_ctor_set(v_reuseFailAlloc_2286_, 2, v___x_2283_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
return v___x_2285_;
}
}
else
{
lean_object* v___x_2288_; 
lean_dec(v_value_2277_);
lean_dec(v_key_2276_);
if (v_isShared_2281_ == 0)
{
lean_ctor_set(v___x_2280_, 1, v_b_2274_);
lean_ctor_set(v___x_2280_, 0, v_a_2273_);
v___x_2288_ = v___x_2280_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_a_2273_);
lean_ctor_set(v_reuseFailAlloc_2289_, 1, v_b_2274_);
lean_ctor_set(v_reuseFailAlloc_2289_, 2, v_tail_2278_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
return v___x_2288_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(lean_object* v_x_2291_, lean_object* v_x_2292_){
_start:
{
if (lean_obj_tag(v_x_2292_) == 0)
{
return v_x_2291_;
}
else
{
lean_object* v_key_2293_; lean_object* v_value_2294_; lean_object* v_tail_2295_; lean_object* v___x_2297_; uint8_t v_isShared_2298_; uint8_t v_isSharedCheck_2318_; 
v_key_2293_ = lean_ctor_get(v_x_2292_, 0);
v_value_2294_ = lean_ctor_get(v_x_2292_, 1);
v_tail_2295_ = lean_ctor_get(v_x_2292_, 2);
v_isSharedCheck_2318_ = !lean_is_exclusive(v_x_2292_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2297_ = v_x_2292_;
v_isShared_2298_ = v_isSharedCheck_2318_;
goto v_resetjp_2296_;
}
else
{
lean_inc(v_tail_2295_);
lean_inc(v_value_2294_);
lean_inc(v_key_2293_);
lean_dec(v_x_2292_);
v___x_2297_ = lean_box(0);
v_isShared_2298_ = v_isSharedCheck_2318_;
goto v_resetjp_2296_;
}
v_resetjp_2296_:
{
lean_object* v___x_2299_; uint64_t v___x_2300_; uint64_t v___x_2301_; uint64_t v___x_2302_; uint64_t v_fold_2303_; uint64_t v___x_2304_; uint64_t v___x_2305_; uint64_t v___x_2306_; size_t v___x_2307_; size_t v___x_2308_; size_t v___x_2309_; size_t v___x_2310_; size_t v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2314_; 
v___x_2299_ = lean_array_get_size(v_x_2291_);
v___x_2300_ = l_Lean_Expr_hash(v_key_2293_);
v___x_2301_ = 32ULL;
v___x_2302_ = lean_uint64_shift_right(v___x_2300_, v___x_2301_);
v_fold_2303_ = lean_uint64_xor(v___x_2300_, v___x_2302_);
v___x_2304_ = 16ULL;
v___x_2305_ = lean_uint64_shift_right(v_fold_2303_, v___x_2304_);
v___x_2306_ = lean_uint64_xor(v_fold_2303_, v___x_2305_);
v___x_2307_ = lean_uint64_to_usize(v___x_2306_);
v___x_2308_ = lean_usize_of_nat(v___x_2299_);
v___x_2309_ = ((size_t)1ULL);
v___x_2310_ = lean_usize_sub(v___x_2308_, v___x_2309_);
v___x_2311_ = lean_usize_land(v___x_2307_, v___x_2310_);
v___x_2312_ = lean_array_uget_borrowed(v_x_2291_, v___x_2311_);
lean_inc(v___x_2312_);
if (v_isShared_2298_ == 0)
{
lean_ctor_set(v___x_2297_, 2, v___x_2312_);
v___x_2314_ = v___x_2297_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_key_2293_);
lean_ctor_set(v_reuseFailAlloc_2317_, 1, v_value_2294_);
lean_ctor_set(v_reuseFailAlloc_2317_, 2, v___x_2312_);
v___x_2314_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
lean_object* v___x_2315_; 
v___x_2315_ = lean_array_uset(v_x_2291_, v___x_2311_, v___x_2314_);
v_x_2291_ = v___x_2315_;
v_x_2292_ = v_tail_2295_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(lean_object* v_i_2319_, lean_object* v_source_2320_, lean_object* v_target_2321_){
_start:
{
lean_object* v___x_2322_; uint8_t v___x_2323_; 
v___x_2322_ = lean_array_get_size(v_source_2320_);
v___x_2323_ = lean_nat_dec_lt(v_i_2319_, v___x_2322_);
if (v___x_2323_ == 0)
{
lean_dec_ref(v_source_2320_);
lean_dec(v_i_2319_);
return v_target_2321_;
}
else
{
lean_object* v_es_2324_; lean_object* v___x_2325_; lean_object* v_source_2326_; lean_object* v_target_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; 
v_es_2324_ = lean_array_fget(v_source_2320_, v_i_2319_);
v___x_2325_ = lean_box(0);
v_source_2326_ = lean_array_fset(v_source_2320_, v_i_2319_, v___x_2325_);
v_target_2327_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(v_target_2321_, v_es_2324_);
v___x_2328_ = lean_unsigned_to_nat(1u);
v___x_2329_ = lean_nat_add(v_i_2319_, v___x_2328_);
lean_dec(v_i_2319_);
v_i_2319_ = v___x_2329_;
v_source_2320_ = v_source_2326_;
v_target_2321_ = v_target_2327_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(lean_object* v_data_2331_){
_start:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v_nbuckets_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; 
v___x_2332_ = lean_array_get_size(v_data_2331_);
v___x_2333_ = lean_unsigned_to_nat(2u);
v_nbuckets_2334_ = lean_nat_mul(v___x_2332_, v___x_2333_);
v___x_2335_ = lean_unsigned_to_nat(0u);
v___x_2336_ = lean_box(0);
v___x_2337_ = lean_mk_array(v_nbuckets_2334_, v___x_2336_);
v___x_2338_ = lean_array_propagate_mark(v_data_2331_, v___x_2337_);
v___x_2339_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(v___x_2335_, v_data_2331_, v___x_2338_);
return v___x_2339_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(lean_object* v_a_2340_, lean_object* v_x_2341_){
_start:
{
if (lean_obj_tag(v_x_2341_) == 0)
{
uint8_t v___x_2342_; 
v___x_2342_ = 0;
return v___x_2342_;
}
else
{
lean_object* v_key_2343_; lean_object* v_tail_2344_; uint8_t v___x_2345_; 
v_key_2343_ = lean_ctor_get(v_x_2341_, 0);
v_tail_2344_ = lean_ctor_get(v_x_2341_, 2);
v___x_2345_ = lean_expr_eqv(v_key_2343_, v_a_2340_);
if (v___x_2345_ == 0)
{
v_x_2341_ = v_tail_2344_;
goto _start;
}
else
{
return v___x_2345_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg___boxed(lean_object* v_a_2347_, lean_object* v_x_2348_){
_start:
{
uint8_t v_res_2349_; lean_object* v_r_2350_; 
v_res_2349_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(v_a_2347_, v_x_2348_);
lean_dec(v_x_2348_);
lean_dec_ref(v_a_2347_);
v_r_2350_ = lean_box(v_res_2349_);
return v_r_2350_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(lean_object* v_m_2351_, lean_object* v_a_2352_, lean_object* v_b_2353_){
_start:
{
lean_object* v_size_2354_; lean_object* v_buckets_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2398_; 
v_size_2354_ = lean_ctor_get(v_m_2351_, 0);
v_buckets_2355_ = lean_ctor_get(v_m_2351_, 1);
v_isSharedCheck_2398_ = !lean_is_exclusive(v_m_2351_);
if (v_isSharedCheck_2398_ == 0)
{
v___x_2357_ = v_m_2351_;
v_isShared_2358_ = v_isSharedCheck_2398_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_buckets_2355_);
lean_inc(v_size_2354_);
lean_dec(v_m_2351_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2398_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___x_2359_; uint64_t v___x_2360_; uint64_t v___x_2361_; uint64_t v___x_2362_; uint64_t v_fold_2363_; uint64_t v___x_2364_; uint64_t v___x_2365_; uint64_t v___x_2366_; size_t v___x_2367_; size_t v___x_2368_; size_t v___x_2369_; size_t v___x_2370_; size_t v___x_2371_; lean_object* v_bkt_2372_; uint8_t v___x_2373_; 
v___x_2359_ = lean_array_get_size(v_buckets_2355_);
v___x_2360_ = l_Lean_Expr_hash(v_a_2352_);
v___x_2361_ = 32ULL;
v___x_2362_ = lean_uint64_shift_right(v___x_2360_, v___x_2361_);
v_fold_2363_ = lean_uint64_xor(v___x_2360_, v___x_2362_);
v___x_2364_ = 16ULL;
v___x_2365_ = lean_uint64_shift_right(v_fold_2363_, v___x_2364_);
v___x_2366_ = lean_uint64_xor(v_fold_2363_, v___x_2365_);
v___x_2367_ = lean_uint64_to_usize(v___x_2366_);
v___x_2368_ = lean_usize_of_nat(v___x_2359_);
v___x_2369_ = ((size_t)1ULL);
v___x_2370_ = lean_usize_sub(v___x_2368_, v___x_2369_);
v___x_2371_ = lean_usize_land(v___x_2367_, v___x_2370_);
v_bkt_2372_ = lean_array_uget_borrowed(v_buckets_2355_, v___x_2371_);
v___x_2373_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(v_a_2352_, v_bkt_2372_);
if (v___x_2373_ == 0)
{
lean_object* v___x_2374_; lean_object* v_size_x27_2375_; lean_object* v___x_2376_; lean_object* v_buckets_x27_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; uint8_t v___x_2383_; 
v___x_2374_ = lean_unsigned_to_nat(1u);
v_size_x27_2375_ = lean_nat_add(v_size_2354_, v___x_2374_);
lean_dec(v_size_2354_);
lean_inc(v_bkt_2372_);
v___x_2376_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2376_, 0, v_a_2352_);
lean_ctor_set(v___x_2376_, 1, v_b_2353_);
lean_ctor_set(v___x_2376_, 2, v_bkt_2372_);
v_buckets_x27_2377_ = lean_array_uset(v_buckets_2355_, v___x_2371_, v___x_2376_);
v___x_2378_ = lean_unsigned_to_nat(4u);
v___x_2379_ = lean_nat_mul(v_size_x27_2375_, v___x_2378_);
v___x_2380_ = lean_unsigned_to_nat(3u);
v___x_2381_ = lean_nat_div(v___x_2379_, v___x_2380_);
lean_dec(v___x_2379_);
v___x_2382_ = lean_array_get_size(v_buckets_x27_2377_);
v___x_2383_ = lean_nat_dec_le(v___x_2381_, v___x_2382_);
lean_dec(v___x_2381_);
if (v___x_2383_ == 0)
{
lean_object* v_val_2384_; lean_object* v___x_2386_; 
v_val_2384_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(v_buckets_x27_2377_);
if (v_isShared_2358_ == 0)
{
lean_ctor_set(v___x_2357_, 1, v_val_2384_);
lean_ctor_set(v___x_2357_, 0, v_size_x27_2375_);
v___x_2386_ = v___x_2357_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v_size_x27_2375_);
lean_ctor_set(v_reuseFailAlloc_2387_, 1, v_val_2384_);
v___x_2386_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
return v___x_2386_;
}
}
else
{
lean_object* v___x_2389_; 
if (v_isShared_2358_ == 0)
{
lean_ctor_set(v___x_2357_, 1, v_buckets_x27_2377_);
lean_ctor_set(v___x_2357_, 0, v_size_x27_2375_);
v___x_2389_ = v___x_2357_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v_size_x27_2375_);
lean_ctor_set(v_reuseFailAlloc_2390_, 1, v_buckets_x27_2377_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
return v___x_2389_;
}
}
}
else
{
lean_object* v___x_2391_; lean_object* v_buckets_x27_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2396_; 
lean_inc(v_bkt_2372_);
v___x_2391_ = lean_box(0);
v_buckets_x27_2392_ = lean_array_uset(v_buckets_2355_, v___x_2371_, v___x_2391_);
v___x_2393_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(v_a_2352_, v_b_2353_, v_bkt_2372_);
v___x_2394_ = lean_array_uset(v_buckets_x27_2392_, v___x_2371_, v___x_2393_);
if (v_isShared_2358_ == 0)
{
lean_ctor_set(v___x_2357_, 1, v___x_2394_);
v___x_2396_ = v___x_2357_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v_size_2354_);
lean_ctor_set(v_reuseFailAlloc_2397_, 1, v___x_2394_);
v___x_2396_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
return v___x_2396_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(lean_object* v_a_2399_, lean_object* v_x_2400_){
_start:
{
if (lean_obj_tag(v_x_2400_) == 0)
{
lean_object* v___x_2401_; 
v___x_2401_ = lean_box(0);
return v___x_2401_;
}
else
{
lean_object* v_key_2402_; lean_object* v_value_2403_; lean_object* v_tail_2404_; uint8_t v___x_2405_; 
v_key_2402_ = lean_ctor_get(v_x_2400_, 0);
v_value_2403_ = lean_ctor_get(v_x_2400_, 1);
v_tail_2404_ = lean_ctor_get(v_x_2400_, 2);
v___x_2405_ = lean_expr_eqv(v_key_2402_, v_a_2399_);
if (v___x_2405_ == 0)
{
v_x_2400_ = v_tail_2404_;
goto _start;
}
else
{
lean_object* v___x_2407_; 
lean_inc(v_value_2403_);
v___x_2407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2407_, 0, v_value_2403_);
return v___x_2407_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg___boxed(lean_object* v_a_2408_, lean_object* v_x_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(v_a_2408_, v_x_2409_);
lean_dec(v_x_2409_);
lean_dec_ref(v_a_2408_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(lean_object* v_m_2411_, lean_object* v_a_2412_){
_start:
{
lean_object* v_buckets_2413_; lean_object* v___x_2414_; uint64_t v___x_2415_; uint64_t v___x_2416_; uint64_t v___x_2417_; uint64_t v_fold_2418_; uint64_t v___x_2419_; uint64_t v___x_2420_; uint64_t v___x_2421_; size_t v___x_2422_; size_t v___x_2423_; size_t v___x_2424_; size_t v___x_2425_; size_t v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; 
v_buckets_2413_ = lean_ctor_get(v_m_2411_, 1);
v___x_2414_ = lean_array_get_size(v_buckets_2413_);
v___x_2415_ = l_Lean_Expr_hash(v_a_2412_);
v___x_2416_ = 32ULL;
v___x_2417_ = lean_uint64_shift_right(v___x_2415_, v___x_2416_);
v_fold_2418_ = lean_uint64_xor(v___x_2415_, v___x_2417_);
v___x_2419_ = 16ULL;
v___x_2420_ = lean_uint64_shift_right(v_fold_2418_, v___x_2419_);
v___x_2421_ = lean_uint64_xor(v_fold_2418_, v___x_2420_);
v___x_2422_ = lean_uint64_to_usize(v___x_2421_);
v___x_2423_ = lean_usize_of_nat(v___x_2414_);
v___x_2424_ = ((size_t)1ULL);
v___x_2425_ = lean_usize_sub(v___x_2423_, v___x_2424_);
v___x_2426_ = lean_usize_land(v___x_2422_, v___x_2425_);
v___x_2427_ = lean_array_uget_borrowed(v_buckets_2413_, v___x_2426_);
v___x_2428_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(v_a_2412_, v___x_2427_);
return v___x_2428_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg___boxed(lean_object* v_m_2429_, lean_object* v_a_2430_){
_start:
{
lean_object* v_res_2431_; 
v_res_2431_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_m_2429_, v_a_2430_);
lean_dec_ref(v_a_2430_);
lean_dec_ref(v_m_2429_);
return v_res_2431_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1(void){
_start:
{
lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; 
v___x_2433_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3));
v___x_2434_ = lean_unsigned_to_nat(26u);
v___x_2435_ = lean_unsigned_to_nat(152u);
v___x_2436_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__0));
v___x_2437_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2438_ = l_mkPanicMessageWithDecl(v___x_2437_, v___x_2436_, v___x_2435_, v___x_2434_, v___x_2433_);
return v___x_2438_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData(lean_object* v_e_2439_, lean_object* v_a_2440_, lean_object* v_a_2441_){
_start:
{
lean_object* v_e_x27_2444_; lean_object* v_visitedNames_2445_; lean_object* v_visitedLevels_2446_; lean_object* v_visitedExprs_2447_; lean_object* v_visitedConstants_2448_; lean_object* v_noMDataExprs_2449_; uint8_t v_exportMData_2450_; uint8_t v_exportUnsafe_2451_; uint8_t v_ignoreMissing_2452_; lean_object* v_recursorMap_2453_; lean_object* v_e_x27_2459_; lean_object* v___y_2460_; lean_object* v_visitedNames_2470_; lean_object* v_visitedLevels_2471_; lean_object* v_visitedExprs_2472_; lean_object* v_visitedConstants_2473_; lean_object* v_noMDataExprs_2474_; uint8_t v_exportMData_2475_; uint8_t v_exportUnsafe_2476_; uint8_t v_ignoreMissing_2477_; lean_object* v_recursorMap_2478_; lean_object* v___x_2479_; 
v_visitedNames_2470_ = lean_ctor_get(v_a_2441_, 0);
v_visitedLevels_2471_ = lean_ctor_get(v_a_2441_, 1);
v_visitedExprs_2472_ = lean_ctor_get(v_a_2441_, 2);
v_visitedConstants_2473_ = lean_ctor_get(v_a_2441_, 3);
v_noMDataExprs_2474_ = lean_ctor_get(v_a_2441_, 4);
v_exportMData_2475_ = lean_ctor_get_uint8(v_a_2441_, sizeof(void*)*6);
v_exportUnsafe_2476_ = lean_ctor_get_uint8(v_a_2441_, sizeof(void*)*6 + 1);
v_ignoreMissing_2477_ = lean_ctor_get_uint8(v_a_2441_, sizeof(void*)*6 + 2);
v_recursorMap_2478_ = lean_ctor_get(v_a_2441_, 5);
v___x_2479_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_noMDataExprs_2474_, v_e_2439_);
if (lean_obj_tag(v___x_2479_) == 1)
{
lean_object* v_val_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2488_; 
lean_dec_ref(v_e_2439_);
v_val_2480_ = lean_ctor_get(v___x_2479_, 0);
v_isSharedCheck_2488_ = !lean_is_exclusive(v___x_2479_);
if (v_isSharedCheck_2488_ == 0)
{
v___x_2482_ = v___x_2479_;
v_isShared_2483_ = v_isSharedCheck_2488_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_val_2480_);
lean_dec(v___x_2479_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2488_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2484_; lean_object* v___x_2486_; 
v___x_2484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2484_, 0, v_val_2480_);
lean_ctor_set(v___x_2484_, 1, v_a_2441_);
if (v_isShared_2483_ == 0)
{
lean_ctor_set_tag(v___x_2482_, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2484_);
v___x_2486_ = v___x_2482_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v___x_2484_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
return v___x_2486_;
}
}
}
else
{
lean_dec(v___x_2479_);
switch(lean_obj_tag(v_e_2439_))
{
case 1:
{
lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2489_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1, &l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1_once, _init_l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1);
v___x_2490_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(v___x_2489_, v_a_2440_, v_a_2441_);
if (lean_obj_tag(v___x_2490_) == 0)
{
lean_object* v_a_2491_; lean_object* v_fst_2492_; lean_object* v_snd_2493_; 
v_a_2491_ = lean_ctor_get(v___x_2490_, 0);
lean_inc(v_a_2491_);
lean_dec_ref_known(v___x_2490_, 1);
v_fst_2492_ = lean_ctor_get(v_a_2491_, 0);
lean_inc(v_fst_2492_);
v_snd_2493_ = lean_ctor_get(v_a_2491_, 1);
lean_inc(v_snd_2493_);
lean_dec(v_a_2491_);
v_e_x27_2459_ = v_fst_2492_;
v___y_2460_ = v_snd_2493_;
goto v___jp_2458_;
}
else
{
lean_dec_ref_known(v_e_2439_, 1);
return v___x_2490_;
}
}
case 2:
{
lean_object* v___x_2494_; lean_object* v___x_2495_; 
v___x_2494_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1, &l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1_once, _init_l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1);
v___x_2495_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(v___x_2494_, v_a_2440_, v_a_2441_);
if (lean_obj_tag(v___x_2495_) == 0)
{
lean_object* v_a_2496_; lean_object* v_fst_2497_; lean_object* v_snd_2498_; 
v_a_2496_ = lean_ctor_get(v___x_2495_, 0);
lean_inc(v_a_2496_);
lean_dec_ref_known(v___x_2495_, 1);
v_fst_2497_ = lean_ctor_get(v_a_2496_, 0);
lean_inc(v_fst_2497_);
v_snd_2498_ = lean_ctor_get(v_a_2496_, 1);
lean_inc(v_snd_2498_);
lean_dec(v_a_2496_);
v_e_x27_2459_ = v_fst_2497_;
v___y_2460_ = v_snd_2498_;
goto v___jp_2458_;
}
else
{
lean_dec_ref_known(v_e_2439_, 1);
return v___x_2495_;
}
}
case 5:
{
lean_object* v_fn_2499_; lean_object* v_arg_2500_; lean_object* v___x_2501_; 
v_fn_2499_ = lean_ctor_get(v_e_2439_, 0);
v_arg_2500_ = lean_ctor_get(v_e_2439_, 1);
lean_inc_ref(v_fn_2499_);
v___x_2501_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_fn_2499_, v_a_2440_, v_a_2441_);
if (lean_obj_tag(v___x_2501_) == 0)
{
lean_object* v_a_2502_; lean_object* v_fst_2503_; lean_object* v_snd_2504_; lean_object* v___x_2505_; 
v_a_2502_ = lean_ctor_get(v___x_2501_, 0);
lean_inc(v_a_2502_);
lean_dec_ref_known(v___x_2501_, 1);
v_fst_2503_ = lean_ctor_get(v_a_2502_, 0);
lean_inc(v_fst_2503_);
v_snd_2504_ = lean_ctor_get(v_a_2502_, 1);
lean_inc(v_snd_2504_);
lean_dec(v_a_2502_);
lean_inc_ref(v_arg_2500_);
v___x_2505_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_arg_2500_, v_a_2440_, v_snd_2504_);
if (lean_obj_tag(v___x_2505_) == 0)
{
lean_object* v_a_2506_; lean_object* v_fst_2507_; lean_object* v_snd_2508_; size_t v___x_2509_; size_t v___x_2510_; uint8_t v___x_2511_; 
v_a_2506_ = lean_ctor_get(v___x_2505_, 0);
lean_inc(v_a_2506_);
lean_dec_ref_known(v___x_2505_, 1);
v_fst_2507_ = lean_ctor_get(v_a_2506_, 0);
lean_inc(v_fst_2507_);
v_snd_2508_ = lean_ctor_get(v_a_2506_, 1);
lean_inc(v_snd_2508_);
lean_dec(v_a_2506_);
v___x_2509_ = lean_ptr_addr(v_fn_2499_);
v___x_2510_ = lean_ptr_addr(v_fst_2503_);
v___x_2511_ = lean_usize_dec_eq(v___x_2509_, v___x_2510_);
if (v___x_2511_ == 0)
{
lean_object* v___x_2512_; 
v___x_2512_ = l_Lean_Expr_app___override(v_fst_2503_, v_fst_2507_);
v_e_x27_2459_ = v___x_2512_;
v___y_2460_ = v_snd_2508_;
goto v___jp_2458_;
}
else
{
size_t v___x_2513_; size_t v___x_2514_; uint8_t v___x_2515_; 
v___x_2513_ = lean_ptr_addr(v_arg_2500_);
v___x_2514_ = lean_ptr_addr(v_fst_2507_);
v___x_2515_ = lean_usize_dec_eq(v___x_2513_, v___x_2514_);
if (v___x_2515_ == 0)
{
lean_object* v___x_2516_; 
v___x_2516_ = l_Lean_Expr_app___override(v_fst_2503_, v_fst_2507_);
v_e_x27_2459_ = v___x_2516_;
v___y_2460_ = v_snd_2508_;
goto v___jp_2458_;
}
else
{
lean_dec(v_fst_2507_);
lean_dec(v_fst_2503_);
lean_inc_ref(v_e_2439_);
v_e_x27_2459_ = v_e_2439_;
v___y_2460_ = v_snd_2508_;
goto v___jp_2458_;
}
}
}
else
{
lean_dec(v_fst_2503_);
lean_dec_ref_known(v_e_2439_, 2);
return v___x_2505_;
}
}
else
{
lean_dec_ref_known(v_e_2439_, 2);
return v___x_2501_;
}
}
case 6:
{
lean_object* v_binderName_2517_; lean_object* v_binderType_2518_; lean_object* v_body_2519_; uint8_t v_binderInfo_2520_; lean_object* v___x_2521_; 
v_binderName_2517_ = lean_ctor_get(v_e_2439_, 0);
v_binderType_2518_ = lean_ctor_get(v_e_2439_, 1);
v_body_2519_ = lean_ctor_get(v_e_2439_, 2);
v_binderInfo_2520_ = lean_ctor_get_uint8(v_e_2439_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2518_);
v___x_2521_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_binderType_2518_, v_a_2440_, v_a_2441_);
if (lean_obj_tag(v___x_2521_) == 0)
{
lean_object* v_a_2522_; lean_object* v_fst_2523_; lean_object* v_snd_2524_; lean_object* v___x_2525_; 
v_a_2522_ = lean_ctor_get(v___x_2521_, 0);
lean_inc(v_a_2522_);
lean_dec_ref_known(v___x_2521_, 1);
v_fst_2523_ = lean_ctor_get(v_a_2522_, 0);
lean_inc(v_fst_2523_);
v_snd_2524_ = lean_ctor_get(v_a_2522_, 1);
lean_inc(v_snd_2524_);
lean_dec(v_a_2522_);
lean_inc_ref(v_body_2519_);
v___x_2525_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_body_2519_, v_a_2440_, v_snd_2524_);
if (lean_obj_tag(v___x_2525_) == 0)
{
lean_object* v_a_2526_; lean_object* v_fst_2527_; lean_object* v_snd_2528_; size_t v___x_2529_; size_t v___x_2530_; uint8_t v___x_2531_; 
v_a_2526_ = lean_ctor_get(v___x_2525_, 0);
lean_inc(v_a_2526_);
lean_dec_ref_known(v___x_2525_, 1);
v_fst_2527_ = lean_ctor_get(v_a_2526_, 0);
lean_inc(v_fst_2527_);
v_snd_2528_ = lean_ctor_get(v_a_2526_, 1);
lean_inc(v_snd_2528_);
lean_dec(v_a_2526_);
v___x_2529_ = lean_ptr_addr(v_binderType_2518_);
v___x_2530_ = lean_ptr_addr(v_fst_2523_);
v___x_2531_ = lean_usize_dec_eq(v___x_2529_, v___x_2530_);
if (v___x_2531_ == 0)
{
lean_object* v___x_2532_; 
lean_inc(v_binderName_2517_);
v___x_2532_ = l_Lean_Expr_lam___override(v_binderName_2517_, v_fst_2523_, v_fst_2527_, v_binderInfo_2520_);
v_e_x27_2459_ = v___x_2532_;
v___y_2460_ = v_snd_2528_;
goto v___jp_2458_;
}
else
{
size_t v___x_2533_; size_t v___x_2534_; uint8_t v___x_2535_; 
v___x_2533_ = lean_ptr_addr(v_body_2519_);
v___x_2534_ = lean_ptr_addr(v_fst_2527_);
v___x_2535_ = lean_usize_dec_eq(v___x_2533_, v___x_2534_);
if (v___x_2535_ == 0)
{
lean_object* v___x_2536_; 
lean_inc(v_binderName_2517_);
v___x_2536_ = l_Lean_Expr_lam___override(v_binderName_2517_, v_fst_2523_, v_fst_2527_, v_binderInfo_2520_);
v_e_x27_2459_ = v___x_2536_;
v___y_2460_ = v_snd_2528_;
goto v___jp_2458_;
}
else
{
uint8_t v___x_2537_; 
v___x_2537_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2520_, v_binderInfo_2520_);
if (v___x_2537_ == 0)
{
lean_object* v___x_2538_; 
lean_inc(v_binderName_2517_);
v___x_2538_ = l_Lean_Expr_lam___override(v_binderName_2517_, v_fst_2523_, v_fst_2527_, v_binderInfo_2520_);
v_e_x27_2459_ = v___x_2538_;
v___y_2460_ = v_snd_2528_;
goto v___jp_2458_;
}
else
{
lean_dec(v_fst_2527_);
lean_dec(v_fst_2523_);
lean_inc_ref(v_e_2439_);
v_e_x27_2459_ = v_e_2439_;
v___y_2460_ = v_snd_2528_;
goto v___jp_2458_;
}
}
}
}
else
{
lean_dec(v_fst_2523_);
lean_dec_ref_known(v_e_2439_, 3);
return v___x_2525_;
}
}
else
{
lean_dec_ref_known(v_e_2439_, 3);
return v___x_2521_;
}
}
case 7:
{
lean_object* v_binderName_2539_; lean_object* v_binderType_2540_; lean_object* v_body_2541_; uint8_t v_binderInfo_2542_; lean_object* v___x_2543_; 
v_binderName_2539_ = lean_ctor_get(v_e_2439_, 0);
v_binderType_2540_ = lean_ctor_get(v_e_2439_, 1);
v_body_2541_ = lean_ctor_get(v_e_2439_, 2);
v_binderInfo_2542_ = lean_ctor_get_uint8(v_e_2439_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2540_);
v___x_2543_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_binderType_2540_, v_a_2440_, v_a_2441_);
if (lean_obj_tag(v___x_2543_) == 0)
{
lean_object* v_a_2544_; lean_object* v_fst_2545_; lean_object* v_snd_2546_; lean_object* v___x_2547_; 
v_a_2544_ = lean_ctor_get(v___x_2543_, 0);
lean_inc(v_a_2544_);
lean_dec_ref_known(v___x_2543_, 1);
v_fst_2545_ = lean_ctor_get(v_a_2544_, 0);
lean_inc(v_fst_2545_);
v_snd_2546_ = lean_ctor_get(v_a_2544_, 1);
lean_inc(v_snd_2546_);
lean_dec(v_a_2544_);
lean_inc_ref(v_body_2541_);
v___x_2547_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_body_2541_, v_a_2440_, v_snd_2546_);
if (lean_obj_tag(v___x_2547_) == 0)
{
lean_object* v_a_2548_; lean_object* v_fst_2549_; lean_object* v_snd_2550_; size_t v___x_2551_; size_t v___x_2552_; uint8_t v___x_2553_; 
v_a_2548_ = lean_ctor_get(v___x_2547_, 0);
lean_inc(v_a_2548_);
lean_dec_ref_known(v___x_2547_, 1);
v_fst_2549_ = lean_ctor_get(v_a_2548_, 0);
lean_inc(v_fst_2549_);
v_snd_2550_ = lean_ctor_get(v_a_2548_, 1);
lean_inc(v_snd_2550_);
lean_dec(v_a_2548_);
v___x_2551_ = lean_ptr_addr(v_binderType_2540_);
v___x_2552_ = lean_ptr_addr(v_fst_2545_);
v___x_2553_ = lean_usize_dec_eq(v___x_2551_, v___x_2552_);
if (v___x_2553_ == 0)
{
lean_object* v___x_2554_; 
lean_inc(v_binderName_2539_);
v___x_2554_ = l_Lean_Expr_forallE___override(v_binderName_2539_, v_fst_2545_, v_fst_2549_, v_binderInfo_2542_);
v_e_x27_2459_ = v___x_2554_;
v___y_2460_ = v_snd_2550_;
goto v___jp_2458_;
}
else
{
size_t v___x_2555_; size_t v___x_2556_; uint8_t v___x_2557_; 
v___x_2555_ = lean_ptr_addr(v_body_2541_);
v___x_2556_ = lean_ptr_addr(v_fst_2549_);
v___x_2557_ = lean_usize_dec_eq(v___x_2555_, v___x_2556_);
if (v___x_2557_ == 0)
{
lean_object* v___x_2558_; 
lean_inc(v_binderName_2539_);
v___x_2558_ = l_Lean_Expr_forallE___override(v_binderName_2539_, v_fst_2545_, v_fst_2549_, v_binderInfo_2542_);
v_e_x27_2459_ = v___x_2558_;
v___y_2460_ = v_snd_2550_;
goto v___jp_2458_;
}
else
{
uint8_t v___x_2559_; 
v___x_2559_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2542_, v_binderInfo_2542_);
if (v___x_2559_ == 0)
{
lean_object* v___x_2560_; 
lean_inc(v_binderName_2539_);
v___x_2560_ = l_Lean_Expr_forallE___override(v_binderName_2539_, v_fst_2545_, v_fst_2549_, v_binderInfo_2542_);
v_e_x27_2459_ = v___x_2560_;
v___y_2460_ = v_snd_2550_;
goto v___jp_2458_;
}
else
{
lean_dec(v_fst_2549_);
lean_dec(v_fst_2545_);
lean_inc_ref(v_e_2439_);
v_e_x27_2459_ = v_e_2439_;
v___y_2460_ = v_snd_2550_;
goto v___jp_2458_;
}
}
}
}
else
{
lean_dec(v_fst_2545_);
lean_dec_ref_known(v_e_2439_, 3);
return v___x_2547_;
}
}
else
{
lean_dec_ref_known(v_e_2439_, 3);
return v___x_2543_;
}
}
case 8:
{
lean_object* v_declName_2561_; lean_object* v_type_2562_; lean_object* v_value_2563_; lean_object* v_body_2564_; uint8_t v_nondep_2565_; lean_object* v___x_2566_; 
v_declName_2561_ = lean_ctor_get(v_e_2439_, 0);
v_type_2562_ = lean_ctor_get(v_e_2439_, 1);
v_value_2563_ = lean_ctor_get(v_e_2439_, 2);
v_body_2564_ = lean_ctor_get(v_e_2439_, 3);
v_nondep_2565_ = lean_ctor_get_uint8(v_e_2439_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_2562_);
v___x_2566_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_type_2562_, v_a_2440_, v_a_2441_);
if (lean_obj_tag(v___x_2566_) == 0)
{
lean_object* v_a_2567_; lean_object* v_fst_2568_; lean_object* v_snd_2569_; lean_object* v___x_2570_; 
v_a_2567_ = lean_ctor_get(v___x_2566_, 0);
lean_inc(v_a_2567_);
lean_dec_ref_known(v___x_2566_, 1);
v_fst_2568_ = lean_ctor_get(v_a_2567_, 0);
lean_inc(v_fst_2568_);
v_snd_2569_ = lean_ctor_get(v_a_2567_, 1);
lean_inc(v_snd_2569_);
lean_dec(v_a_2567_);
lean_inc_ref(v_value_2563_);
v___x_2570_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_value_2563_, v_a_2440_, v_snd_2569_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v_a_2571_; lean_object* v_fst_2572_; lean_object* v_snd_2573_; lean_object* v___x_2574_; 
v_a_2571_ = lean_ctor_get(v___x_2570_, 0);
lean_inc(v_a_2571_);
lean_dec_ref_known(v___x_2570_, 1);
v_fst_2572_ = lean_ctor_get(v_a_2571_, 0);
lean_inc(v_fst_2572_);
v_snd_2573_ = lean_ctor_get(v_a_2571_, 1);
lean_inc(v_snd_2573_);
lean_dec(v_a_2571_);
lean_inc_ref(v_body_2564_);
v___x_2574_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_body_2564_, v_a_2440_, v_snd_2573_);
if (lean_obj_tag(v___x_2574_) == 0)
{
lean_object* v_a_2575_; lean_object* v_fst_2576_; lean_object* v_snd_2577_; uint8_t v___x_2578_; size_t v___x_2579_; size_t v___x_2580_; uint8_t v___x_2581_; 
v_a_2575_ = lean_ctor_get(v___x_2574_, 0);
lean_inc(v_a_2575_);
lean_dec_ref_known(v___x_2574_, 1);
v_fst_2576_ = lean_ctor_get(v_a_2575_, 0);
lean_inc(v_fst_2576_);
v_snd_2577_ = lean_ctor_get(v_a_2575_, 1);
lean_inc(v_snd_2577_);
lean_dec(v_a_2575_);
v___x_2578_ = 0;
v___x_2579_ = lean_ptr_addr(v_type_2562_);
v___x_2580_ = lean_ptr_addr(v_fst_2568_);
v___x_2581_ = lean_usize_dec_eq(v___x_2579_, v___x_2580_);
if (v___x_2581_ == 0)
{
lean_object* v___x_2582_; 
lean_inc(v_declName_2561_);
v___x_2582_ = l_Lean_Expr_letE___override(v_declName_2561_, v_fst_2568_, v_fst_2572_, v_fst_2576_, v___x_2578_);
v_e_x27_2459_ = v___x_2582_;
v___y_2460_ = v_snd_2577_;
goto v___jp_2458_;
}
else
{
size_t v___x_2583_; size_t v___x_2584_; uint8_t v___x_2585_; 
v___x_2583_ = lean_ptr_addr(v_value_2563_);
v___x_2584_ = lean_ptr_addr(v_fst_2572_);
v___x_2585_ = lean_usize_dec_eq(v___x_2583_, v___x_2584_);
if (v___x_2585_ == 0)
{
lean_object* v___x_2586_; 
lean_inc(v_declName_2561_);
v___x_2586_ = l_Lean_Expr_letE___override(v_declName_2561_, v_fst_2568_, v_fst_2572_, v_fst_2576_, v___x_2578_);
v_e_x27_2459_ = v___x_2586_;
v___y_2460_ = v_snd_2577_;
goto v___jp_2458_;
}
else
{
size_t v___x_2587_; size_t v___x_2588_; uint8_t v___x_2589_; 
v___x_2587_ = lean_ptr_addr(v_body_2564_);
v___x_2588_ = lean_ptr_addr(v_fst_2576_);
v___x_2589_ = lean_usize_dec_eq(v___x_2587_, v___x_2588_);
if (v___x_2589_ == 0)
{
lean_object* v___x_2590_; 
lean_inc(v_declName_2561_);
v___x_2590_ = l_Lean_Expr_letE___override(v_declName_2561_, v_fst_2568_, v_fst_2572_, v_fst_2576_, v___x_2578_);
v_e_x27_2459_ = v___x_2590_;
v___y_2460_ = v_snd_2577_;
goto v___jp_2458_;
}
else
{
if (v_nondep_2565_ == 0)
{
lean_dec(v_fst_2576_);
lean_dec(v_fst_2572_);
lean_dec(v_fst_2568_);
lean_inc_ref(v_e_2439_);
v_e_x27_2459_ = v_e_2439_;
v___y_2460_ = v_snd_2577_;
goto v___jp_2458_;
}
else
{
lean_object* v___x_2591_; 
lean_inc(v_declName_2561_);
v___x_2591_ = l_Lean_Expr_letE___override(v_declName_2561_, v_fst_2568_, v_fst_2572_, v_fst_2576_, v___x_2578_);
v_e_x27_2459_ = v___x_2591_;
v___y_2460_ = v_snd_2577_;
goto v___jp_2458_;
}
}
}
}
}
else
{
lean_dec(v_fst_2572_);
lean_dec(v_fst_2568_);
lean_dec_ref_known(v_e_2439_, 4);
return v___x_2574_;
}
}
else
{
lean_dec(v_fst_2568_);
lean_dec_ref_known(v_e_2439_, 4);
return v___x_2570_;
}
}
else
{
lean_dec_ref_known(v_e_2439_, 4);
return v___x_2566_;
}
}
case 10:
{
lean_object* v_expr_2592_; lean_object* v___x_2593_; 
v_expr_2592_ = lean_ctor_get(v_e_2439_, 1);
lean_inc_ref(v_expr_2592_);
v___x_2593_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_expr_2592_, v_a_2440_, v_a_2441_);
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v_a_2594_; lean_object* v_fst_2595_; lean_object* v_snd_2596_; 
v_a_2594_ = lean_ctor_get(v___x_2593_, 0);
lean_inc(v_a_2594_);
lean_dec_ref_known(v___x_2593_, 1);
v_fst_2595_ = lean_ctor_get(v_a_2594_, 0);
lean_inc(v_fst_2595_);
v_snd_2596_ = lean_ctor_get(v_a_2594_, 1);
lean_inc(v_snd_2596_);
lean_dec(v_a_2594_);
v_e_x27_2459_ = v_fst_2595_;
v___y_2460_ = v_snd_2596_;
goto v___jp_2458_;
}
else
{
lean_dec_ref_known(v_e_2439_, 2);
return v___x_2593_;
}
}
case 11:
{
lean_object* v_typeName_2597_; lean_object* v_idx_2598_; lean_object* v_struct_2599_; lean_object* v___x_2600_; 
v_typeName_2597_ = lean_ctor_get(v_e_2439_, 0);
v_idx_2598_ = lean_ctor_get(v_e_2439_, 1);
v_struct_2599_ = lean_ctor_get(v_e_2439_, 2);
lean_inc_ref(v_struct_2599_);
v___x_2600_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_struct_2599_, v_a_2440_, v_a_2441_);
if (lean_obj_tag(v___x_2600_) == 0)
{
lean_object* v_a_2601_; lean_object* v_fst_2602_; lean_object* v_snd_2603_; size_t v___x_2604_; size_t v___x_2605_; uint8_t v___x_2606_; 
v_a_2601_ = lean_ctor_get(v___x_2600_, 0);
lean_inc(v_a_2601_);
lean_dec_ref_known(v___x_2600_, 1);
v_fst_2602_ = lean_ctor_get(v_a_2601_, 0);
lean_inc(v_fst_2602_);
v_snd_2603_ = lean_ctor_get(v_a_2601_, 1);
lean_inc(v_snd_2603_);
lean_dec(v_a_2601_);
v___x_2604_ = lean_ptr_addr(v_struct_2599_);
v___x_2605_ = lean_ptr_addr(v_fst_2602_);
v___x_2606_ = lean_usize_dec_eq(v___x_2604_, v___x_2605_);
if (v___x_2606_ == 0)
{
lean_object* v___x_2607_; 
lean_inc(v_idx_2598_);
lean_inc(v_typeName_2597_);
v___x_2607_ = l_Lean_Expr_proj___override(v_typeName_2597_, v_idx_2598_, v_fst_2602_);
v_e_x27_2459_ = v___x_2607_;
v___y_2460_ = v_snd_2603_;
goto v___jp_2458_;
}
else
{
lean_dec(v_fst_2602_);
lean_inc_ref(v_e_2439_);
v_e_x27_2459_ = v_e_2439_;
v___y_2460_ = v_snd_2603_;
goto v___jp_2458_;
}
}
else
{
lean_dec_ref_known(v_e_2439_, 3);
return v___x_2600_;
}
}
default: 
{
lean_inc(v_recursorMap_2478_);
lean_inc_ref(v_noMDataExprs_2474_);
lean_inc_ref(v_visitedConstants_2473_);
lean_inc_ref(v_visitedExprs_2472_);
lean_inc_ref(v_visitedLevels_2471_);
lean_inc_ref(v_visitedNames_2470_);
lean_dec_ref(v_a_2441_);
lean_inc_ref(v_e_2439_);
v_e_x27_2444_ = v_e_2439_;
v_visitedNames_2445_ = v_visitedNames_2470_;
v_visitedLevels_2446_ = v_visitedLevels_2471_;
v_visitedExprs_2447_ = v_visitedExprs_2472_;
v_visitedConstants_2448_ = v_visitedConstants_2473_;
v_noMDataExprs_2449_ = v_noMDataExprs_2474_;
v_exportMData_2450_ = v_exportMData_2475_;
v_exportUnsafe_2451_ = v_exportUnsafe_2476_;
v_ignoreMissing_2452_ = v_ignoreMissing_2477_;
v_recursorMap_2453_ = v_recursorMap_2478_;
goto v___jp_2443_;
}
}
}
v___jp_2443_:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; 
lean_inc_ref(v_e_x27_2444_);
v___x_2454_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(v_noMDataExprs_2449_, v_e_2439_, v_e_x27_2444_);
v___x_2455_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_2455_, 0, v_visitedNames_2445_);
lean_ctor_set(v___x_2455_, 1, v_visitedLevels_2446_);
lean_ctor_set(v___x_2455_, 2, v_visitedExprs_2447_);
lean_ctor_set(v___x_2455_, 3, v_visitedConstants_2448_);
lean_ctor_set(v___x_2455_, 4, v___x_2454_);
lean_ctor_set(v___x_2455_, 5, v_recursorMap_2453_);
lean_ctor_set_uint8(v___x_2455_, sizeof(void*)*6, v_exportMData_2450_);
lean_ctor_set_uint8(v___x_2455_, sizeof(void*)*6 + 1, v_exportUnsafe_2451_);
lean_ctor_set_uint8(v___x_2455_, sizeof(void*)*6 + 2, v_ignoreMissing_2452_);
v___x_2456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2456_, 0, v_e_x27_2444_);
lean_ctor_set(v___x_2456_, 1, v___x_2455_);
v___x_2457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2457_, 0, v___x_2456_);
return v___x_2457_;
}
v___jp_2458_:
{
lean_object* v_visitedNames_2461_; lean_object* v_visitedLevels_2462_; lean_object* v_visitedExprs_2463_; lean_object* v_visitedConstants_2464_; lean_object* v_noMDataExprs_2465_; uint8_t v_exportMData_2466_; uint8_t v_exportUnsafe_2467_; uint8_t v_ignoreMissing_2468_; lean_object* v_recursorMap_2469_; 
v_visitedNames_2461_ = lean_ctor_get(v___y_2460_, 0);
lean_inc_ref(v_visitedNames_2461_);
v_visitedLevels_2462_ = lean_ctor_get(v___y_2460_, 1);
lean_inc_ref(v_visitedLevels_2462_);
v_visitedExprs_2463_ = lean_ctor_get(v___y_2460_, 2);
lean_inc_ref(v_visitedExprs_2463_);
v_visitedConstants_2464_ = lean_ctor_get(v___y_2460_, 3);
lean_inc_ref(v_visitedConstants_2464_);
v_noMDataExprs_2465_ = lean_ctor_get(v___y_2460_, 4);
lean_inc_ref(v_noMDataExprs_2465_);
v_exportMData_2466_ = lean_ctor_get_uint8(v___y_2460_, sizeof(void*)*6);
v_exportUnsafe_2467_ = lean_ctor_get_uint8(v___y_2460_, sizeof(void*)*6 + 1);
v_ignoreMissing_2468_ = lean_ctor_get_uint8(v___y_2460_, sizeof(void*)*6 + 2);
v_recursorMap_2469_ = lean_ctor_get(v___y_2460_, 5);
lean_inc(v_recursorMap_2469_);
lean_dec_ref(v___y_2460_);
v_e_x27_2444_ = v_e_x27_2459_;
v_visitedNames_2445_ = v_visitedNames_2461_;
v_visitedLevels_2446_ = v_visitedLevels_2462_;
v_visitedExprs_2447_ = v_visitedExprs_2463_;
v_visitedConstants_2448_ = v_visitedConstants_2464_;
v_noMDataExprs_2449_ = v_noMDataExprs_2465_;
v_exportMData_2450_ = v_exportMData_2466_;
v_exportUnsafe_2451_ = v_exportUnsafe_2467_;
v_ignoreMissing_2452_ = v_ignoreMissing_2468_;
v_recursorMap_2453_ = v_recursorMap_2469_;
goto v___jp_2443_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData___boxed(lean_object* v_e_2608_, lean_object* v_a_2609_, lean_object* v_a_2610_, lean_object* v_a_2611_){
_start:
{
lean_object* v_res_2612_; 
v_res_2612_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_e_2608_, v_a_2609_, v_a_2610_);
lean_dec_ref(v_a_2609_);
return v_res_2612_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0(lean_object* v_00_u03b2_2613_, lean_object* v_m_2614_, lean_object* v_a_2615_, lean_object* v_b_2616_){
_start:
{
lean_object* v___x_2617_; 
v___x_2617_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(v_m_2614_, v_a_2615_, v_b_2616_);
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1(lean_object* v_00_u03b2_2618_, lean_object* v_m_2619_, lean_object* v_a_2620_){
_start:
{
lean_object* v___x_2621_; 
v___x_2621_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_m_2619_, v_a_2620_);
return v___x_2621_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___boxed(lean_object* v_00_u03b2_2622_, lean_object* v_m_2623_, lean_object* v_a_2624_){
_start:
{
lean_object* v_res_2625_; 
v_res_2625_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1(v_00_u03b2_2622_, v_m_2623_, v_a_2624_);
lean_dec_ref(v_a_2624_);
lean_dec_ref(v_m_2623_);
return v_res_2625_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0(lean_object* v_00_u03b2_2626_, lean_object* v_a_2627_, lean_object* v_x_2628_){
_start:
{
uint8_t v___x_2629_; 
v___x_2629_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(v_a_2627_, v_x_2628_);
return v___x_2629_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2630_, lean_object* v_a_2631_, lean_object* v_x_2632_){
_start:
{
uint8_t v_res_2633_; lean_object* v_r_2634_; 
v_res_2633_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0(v_00_u03b2_2630_, v_a_2631_, v_x_2632_);
lean_dec(v_x_2632_);
lean_dec_ref(v_a_2631_);
v_r_2634_ = lean_box(v_res_2633_);
return v_r_2634_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1(lean_object* v_00_u03b2_2635_, lean_object* v_data_2636_){
_start:
{
lean_object* v___x_2637_; 
v___x_2637_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(v_data_2636_);
return v___x_2637_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2(lean_object* v_00_u03b2_2638_, lean_object* v_a_2639_, lean_object* v_b_2640_, lean_object* v_x_2641_){
_start:
{
lean_object* v___x_2642_; 
v___x_2642_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(v_a_2639_, v_b_2640_, v_x_2641_);
return v___x_2642_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4(lean_object* v_00_u03b2_2643_, lean_object* v_a_2644_, lean_object* v_x_2645_){
_start:
{
lean_object* v___x_2646_; 
v___x_2646_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(v_a_2644_, v_x_2645_);
return v___x_2646_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___boxed(lean_object* v_00_u03b2_2647_, lean_object* v_a_2648_, lean_object* v_x_2649_){
_start:
{
lean_object* v_res_2650_; 
v_res_2650_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4(v_00_u03b2_2647_, v_a_2648_, v_x_2649_);
lean_dec(v_x_2649_);
lean_dec_ref(v_a_2648_);
return v_res_2650_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2651_, lean_object* v_i_2652_, lean_object* v_source_2653_, lean_object* v_target_2654_){
_start:
{
lean_object* v___x_2655_; 
v___x_2655_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(v_i_2652_, v_source_2653_, v_target_2654_);
return v___x_2655_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_2656_, lean_object* v_x_2657_, lean_object* v_x_2658_){
_start:
{
lean_object* v___x_2659_; 
v___x_2659_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(v_x_2657_, v_x_2658_);
return v___x_2659_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(lean_object* v_fields_2660_, lean_object* v_a_2661_){
_start:
{
lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___x_2663_ = l_Lean_Json_mkObj(v_fields_2660_);
v___x_2664_ = l_Lean_Json_compress(v___x_2663_);
v___x_2665_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_2664_);
if (lean_obj_tag(v___x_2665_) == 0)
{
lean_object* v_a_2666_; lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2674_; 
v_a_2666_ = lean_ctor_get(v___x_2665_, 0);
v_isSharedCheck_2674_ = !lean_is_exclusive(v___x_2665_);
if (v_isSharedCheck_2674_ == 0)
{
v___x_2668_ = v___x_2665_;
v_isShared_2669_ = v_isSharedCheck_2674_;
goto v_resetjp_2667_;
}
else
{
lean_inc(v_a_2666_);
lean_dec(v___x_2665_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2674_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
lean_object* v___x_2670_; lean_object* v___x_2672_; 
v___x_2670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2670_, 0, v_a_2666_);
lean_ctor_set(v___x_2670_, 1, v_a_2661_);
if (v_isShared_2669_ == 0)
{
lean_ctor_set(v___x_2668_, 0, v___x_2670_);
v___x_2672_ = v___x_2668_;
goto v_reusejp_2671_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v___x_2670_);
v___x_2672_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2671_;
}
v_reusejp_2671_:
{
return v___x_2672_;
}
}
}
else
{
lean_object* v_a_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2682_; 
lean_dec_ref(v_a_2661_);
v_a_2675_ = lean_ctor_get(v___x_2665_, 0);
v_isSharedCheck_2682_ = !lean_is_exclusive(v___x_2665_);
if (v_isSharedCheck_2682_ == 0)
{
v___x_2677_ = v___x_2665_;
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_a_2675_);
lean_dec(v___x_2665_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2682_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2680_; 
if (v_isShared_2678_ == 0)
{
v___x_2680_ = v___x_2677_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2681_; 
v_reuseFailAlloc_2681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2681_, 0, v_a_2675_);
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
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg___boxed(lean_object* v_fields_2683_, lean_object* v_a_2684_, lean_object* v_a_2685_){
_start:
{
lean_object* v_res_2686_; 
v_res_2686_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v_fields_2683_, v_a_2684_);
lean_dec(v_fields_2683_);
return v_res_2686_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj(lean_object* v_fields_2687_, lean_object* v_a_2688_, lean_object* v_a_2689_){
_start:
{
lean_object* v___x_2691_; 
v___x_2691_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v_fields_2687_, v_a_2689_);
return v___x_2691_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___boxed(lean_object* v_fields_2692_, lean_object* v_a_2693_, lean_object* v_a_2694_, lean_object* v_a_2695_){
_start:
{
lean_object* v_res_2696_; 
v_res_2696_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj(v_fields_2692_, v_a_2693_, v_a_2694_);
lean_dec_ref(v_a_2693_);
lean_dec(v_fields_2692_);
return v_res_2696_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg(lean_object* v_t_2697_, lean_object* v_k_2698_){
_start:
{
if (lean_obj_tag(v_t_2697_) == 0)
{
lean_object* v_k_2699_; lean_object* v_v_2700_; lean_object* v_l_2701_; lean_object* v_r_2702_; uint8_t v___x_2703_; 
v_k_2699_ = lean_ctor_get(v_t_2697_, 1);
v_v_2700_ = lean_ctor_get(v_t_2697_, 2);
v_l_2701_ = lean_ctor_get(v_t_2697_, 3);
v_r_2702_ = lean_ctor_get(v_t_2697_, 4);
v___x_2703_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2698_, v_k_2699_);
switch(v___x_2703_)
{
case 0:
{
v_t_2697_ = v_l_2701_;
goto _start;
}
case 1:
{
lean_object* v___x_2705_; 
lean_inc(v_v_2700_);
v___x_2705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2705_, 0, v_v_2700_);
return v___x_2705_;
}
default: 
{
v_t_2697_ = v_r_2702_;
goto _start;
}
}
}
else
{
lean_object* v___x_2707_; 
v___x_2707_ = lean_box(0);
return v___x_2707_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg___boxed(lean_object* v_t_2708_, lean_object* v_k_2709_){
_start:
{
lean_object* v_res_2710_; 
v_res_2710_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg(v_t_2708_, v_k_2709_);
lean_dec(v_k_2709_);
lean_dec(v_t_2708_);
return v_res_2710_;
}
}
static lean_object* _init_l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0(void){
_start:
{
lean_object* v___x_2711_; 
v___x_2711_ = l_Array_instInhabited___redArg();
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8(lean_object* v_msg_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_){
_start:
{
lean_object* v___x_2716_; lean_object* v___f_2717_; lean_object* v___f_2718_; lean_object* v___f_2719_; lean_object* v___f_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___f_2730_; lean_object* v___x_163499__overap_2731_; lean_object* v___x_2732_; 
v___x_2716_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2717_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2717_, 0, v___x_2716_);
v___f_2718_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2718_, 0, v___x_2716_);
v___f_2719_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2719_, 0, v___x_2716_);
v___f_2720_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2720_, 0, v___x_2716_);
v___x_2721_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2721_, 0, lean_box(0));
lean_closure_set(v___x_2721_, 1, lean_box(0));
lean_closure_set(v___x_2721_, 2, v___x_2716_);
v___x_2722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2722_, 0, v___x_2721_);
lean_ctor_set(v___x_2722_, 1, v___f_2717_);
v___x_2723_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2723_, 0, lean_box(0));
lean_closure_set(v___x_2723_, 1, lean_box(0));
lean_closure_set(v___x_2723_, 2, v___x_2716_);
v___x_2724_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2722_);
lean_ctor_set(v___x_2724_, 1, v___x_2723_);
lean_ctor_set(v___x_2724_, 2, v___f_2718_);
lean_ctor_set(v___x_2724_, 3, v___f_2719_);
lean_ctor_set(v___x_2724_, 4, v___f_2720_);
v___x_2725_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2725_, 0, lean_box(0));
lean_closure_set(v___x_2725_, 1, lean_box(0));
lean_closure_set(v___x_2725_, 2, v___x_2716_);
v___x_2726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2726_, 0, v___x_2724_);
lean_ctor_set(v___x_2726_, 1, v___x_2725_);
v___x_2727_ = lean_obj_once(&l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0, &l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0_once, _init_l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0);
v___x_2728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2728_, 0, v___x_2727_);
v___x_2729_ = l_instInhabitedOfMonad___redArg(v___x_2726_, v___x_2728_);
v___f_2730_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2730_, 0, v___x_2729_);
v___x_163499__overap_2731_ = lean_panic_fn_borrowed(v___f_2730_, v_msg_2712_);
lean_dec_ref(v___f_2730_);
lean_inc_ref(v___y_2713_);
v___x_2732_ = lean_apply_3(v___x_163499__overap_2731_, v___y_2713_, v___y_2714_, lean_box(0));
return v___x_2732_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8___boxed(lean_object* v_msg_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_){
_start:
{
lean_object* v_res_2737_; 
v_res_2737_ = l_panic___at___00LeanExport_dumpConstant_spec__8(v_msg_2733_, v___y_2734_, v___y_2735_);
lean_dec_ref(v___y_2734_);
return v_res_2737_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__5(lean_object* v_msg_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_){
_start:
{
lean_object* v___x_2742_; lean_object* v___f_2743_; lean_object* v___f_2744_; lean_object* v___f_2745_; lean_object* v___f_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___f_2755_; lean_object* v___x_162777__overap_2756_; lean_object* v___x_2757_; 
v___x_2742_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2743_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2743_, 0, v___x_2742_);
v___f_2744_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2744_, 0, v___x_2742_);
v___f_2745_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2745_, 0, v___x_2742_);
v___f_2746_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2746_, 0, v___x_2742_);
v___x_2747_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2747_, 0, lean_box(0));
lean_closure_set(v___x_2747_, 1, lean_box(0));
lean_closure_set(v___x_2747_, 2, v___x_2742_);
v___x_2748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2748_, 0, v___x_2747_);
lean_ctor_set(v___x_2748_, 1, v___f_2743_);
v___x_2749_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2749_, 0, lean_box(0));
lean_closure_set(v___x_2749_, 1, lean_box(0));
lean_closure_set(v___x_2749_, 2, v___x_2742_);
v___x_2750_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2748_);
lean_ctor_set(v___x_2750_, 1, v___x_2749_);
lean_ctor_set(v___x_2750_, 2, v___f_2744_);
lean_ctor_set(v___x_2750_, 3, v___f_2745_);
lean_ctor_set(v___x_2750_, 4, v___f_2746_);
v___x_2751_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2751_, 0, lean_box(0));
lean_closure_set(v___x_2751_, 1, lean_box(0));
lean_closure_set(v___x_2751_, 2, v___x_2742_);
v___x_2752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2752_, 0, v___x_2750_);
lean_ctor_set(v___x_2752_, 1, v___x_2751_);
v___x_2753_ = lean_box(0);
v___x_2754_ = l_instInhabitedOfMonad___redArg(v___x_2752_, v___x_2753_);
v___f_2755_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2755_, 0, v___x_2754_);
v___x_162777__overap_2756_ = lean_panic_fn_borrowed(v___f_2755_, v_msg_2738_);
lean_dec_ref(v___f_2755_);
lean_inc_ref(v___y_2739_);
v___x_2757_ = lean_apply_3(v___x_162777__overap_2756_, v___y_2739_, v___y_2740_, lean_box(0));
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__5___boxed(lean_object* v_msg_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_){
_start:
{
lean_object* v_res_2762_; 
v_res_2762_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v_msg_2758_, v___y_2759_, v___y_2760_);
lean_dec_ref(v___y_2759_);
return v_res_2762_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__6(lean_object* v_msg_2763_){
_start:
{
lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2764_ = l_Lean_instInhabitedConstantInfo_default;
v___x_2765_ = lean_panic_fn_borrowed(v___x_2764_, v_msg_2763_);
return v___x_2765_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; 
v___x_2768_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1));
v___x_2769_ = lean_unsigned_to_nat(10u);
v___x_2770_ = lean_unsigned_to_nat(334u);
v___x_2771_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_2772_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2773_ = l_mkPanicMessageWithDecl(v___x_2772_, v___x_2771_, v___x_2770_, v___x_2769_, v___x_2768_);
return v___x_2773_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__4(void){
_start:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; 
v___x_2775_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3));
v___x_2776_ = lean_unsigned_to_nat(15u);
v___x_2777_ = lean_unsigned_to_nat(336u);
v___x_2778_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_2779_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2780_ = l_mkPanicMessageWithDecl(v___x_2779_, v___x_2778_, v___x_2777_, v___x_2776_, v___x_2775_);
return v___x_2780_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8(void){
_start:
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; 
v___x_2784_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__7));
v___x_2785_ = lean_unsigned_to_nat(14u);
v___x_2786_ = lean_unsigned_to_nat(22u);
v___x_2787_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__6));
v___x_2788_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__5));
v___x_2789_ = l_mkPanicMessageWithDecl(v___x_2788_, v___x_2787_, v___x_2786_, v___x_2785_, v___x_2784_);
return v___x_2789_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(uint8_t v___y_2790_, uint8_t v___x_2791_, lean_object* v_as_x27_2792_, lean_object* v_b_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_){
_start:
{
if (lean_obj_tag(v_as_x27_2792_) == 0)
{
lean_object* v___x_2797_; lean_object* v___x_2798_; 
v___x_2797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2797_, 0, v_b_2793_);
lean_ctor_set(v___x_2797_, 1, v___y_2795_);
v___x_2798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2798_, 0, v___x_2797_);
return v___x_2798_;
}
else
{
lean_object* v_head_2799_; lean_object* v_tail_2800_; lean_object* v___y_2802_; lean_object* v___y_2806_; lean_object* v___y_2841_; lean_object* v___x_2857_; 
v_head_2799_ = lean_ctor_get(v_as_x27_2792_, 0);
v_tail_2800_ = lean_ctor_get(v_as_x27_2792_, 1);
lean_inc(v_head_2799_);
lean_inc_ref(v___y_2794_);
v___x_2857_ = l_Lean_Environment_find_x3f(v___y_2794_, v_head_2799_, v___x_2791_);
if (lean_obj_tag(v___x_2857_) == 0)
{
lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2858_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8);
v___x_2859_ = l_panic___at___00LeanExport_dumpConstant_spec__6(v___x_2858_);
v___y_2841_ = v___x_2859_;
goto v___jp_2840_;
}
else
{
lean_object* v_val_2860_; 
v_val_2860_ = lean_ctor_get(v___x_2857_, 0);
lean_inc(v_val_2860_);
lean_dec_ref_known(v___x_2857_, 1);
v___y_2841_ = v_val_2860_;
goto v___jp_2840_;
}
v___jp_2801_:
{
lean_object* v___x_2803_; 
v___x_2803_ = lean_array_push(v_b_2793_, v___y_2802_);
v_as_x27_2792_ = v_tail_2800_;
v_b_2793_ = v___x_2803_;
goto _start;
}
v___jp_2805_:
{
uint8_t v_exportUnsafe_2807_; 
v_exportUnsafe_2807_ = lean_ctor_get_uint8(v___y_2795_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_2807_ == 0)
{
lean_object* v___x_2808_; lean_object* v___x_2809_; 
lean_dec_ref(v___y_2806_);
lean_dec_ref(v_b_2793_);
v___x_2808_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2);
v___x_2809_ = l_panic___at___00LeanExport_dumpConstant_spec__8(v___x_2808_, v___y_2794_, v___y_2795_);
if (lean_obj_tag(v___x_2809_) == 0)
{
lean_object* v_a_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2831_; 
v_a_2810_ = lean_ctor_get(v___x_2809_, 0);
v_isSharedCheck_2831_ = !lean_is_exclusive(v___x_2809_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2812_ = v___x_2809_;
v_isShared_2813_ = v_isSharedCheck_2831_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_a_2810_);
lean_dec(v___x_2809_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2831_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v_fst_2814_; 
v_fst_2814_ = lean_ctor_get(v_a_2810_, 0);
lean_inc(v_fst_2814_);
if (lean_obj_tag(v_fst_2814_) == 0)
{
lean_object* v_snd_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2826_; 
v_snd_2815_ = lean_ctor_get(v_a_2810_, 1);
v_isSharedCheck_2826_ = !lean_is_exclusive(v_a_2810_);
if (v_isSharedCheck_2826_ == 0)
{
lean_object* v_unused_2827_; 
v_unused_2827_ = lean_ctor_get(v_a_2810_, 0);
lean_dec(v_unused_2827_);
v___x_2817_ = v_a_2810_;
v_isShared_2818_ = v_isSharedCheck_2826_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_snd_2815_);
lean_dec(v_a_2810_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2826_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
lean_object* v_a_2819_; lean_object* v___x_2821_; 
v_a_2819_ = lean_ctor_get(v_fst_2814_, 0);
lean_inc(v_a_2819_);
lean_dec_ref_known(v_fst_2814_, 1);
if (v_isShared_2818_ == 0)
{
lean_ctor_set(v___x_2817_, 0, v_a_2819_);
v___x_2821_ = v___x_2817_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_a_2819_);
lean_ctor_set(v_reuseFailAlloc_2825_, 1, v_snd_2815_);
v___x_2821_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
lean_object* v___x_2823_; 
if (v_isShared_2813_ == 0)
{
lean_ctor_set(v___x_2812_, 0, v___x_2821_);
v___x_2823_ = v___x_2812_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v___x_2821_);
v___x_2823_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
return v___x_2823_;
}
}
}
}
else
{
lean_object* v_snd_2828_; lean_object* v_a_2829_; 
lean_del_object(v___x_2812_);
v_snd_2828_ = lean_ctor_get(v_a_2810_, 1);
lean_inc(v_snd_2828_);
lean_dec(v_a_2810_);
v_a_2829_ = lean_ctor_get(v_fst_2814_, 0);
lean_inc(v_a_2829_);
lean_dec_ref_known(v_fst_2814_, 1);
v_as_x27_2792_ = v_tail_2800_;
v_b_2793_ = v_a_2829_;
v___y_2795_ = v_snd_2828_;
goto _start;
}
}
}
else
{
lean_object* v_a_2832_; lean_object* v___x_2834_; uint8_t v_isShared_2835_; uint8_t v_isSharedCheck_2839_; 
v_a_2832_ = lean_ctor_get(v___x_2809_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2809_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2834_ = v___x_2809_;
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
else
{
lean_inc(v_a_2832_);
lean_dec(v___x_2809_);
v___x_2834_ = lean_box(0);
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
v_resetjp_2833_:
{
lean_object* v___x_2837_; 
if (v_isShared_2835_ == 0)
{
v___x_2837_ = v___x_2834_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v_a_2832_);
v___x_2837_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
return v___x_2837_;
}
}
}
}
else
{
v___y_2802_ = v___y_2806_;
goto v___jp_2801_;
}
}
v___jp_2840_:
{
if (lean_obj_tag(v___y_2841_) == 6)
{
lean_object* v_val_2842_; uint8_t v_isUnsafe_2843_; 
v_val_2842_ = lean_ctor_get(v___y_2841_, 0);
lean_inc_ref(v_val_2842_);
lean_dec_ref_known(v___y_2841_, 1);
v_isUnsafe_2843_ = lean_ctor_get_uint8(v_val_2842_, sizeof(void*)*5);
if (v_isUnsafe_2843_ == 0)
{
if (v___y_2790_ == 0)
{
v___y_2806_ = v_val_2842_;
goto v___jp_2805_;
}
else
{
v___y_2802_ = v_val_2842_;
goto v___jp_2801_;
}
}
else
{
v___y_2806_ = v_val_2842_;
goto v___jp_2805_;
}
}
else
{
lean_object* v___x_2844_; lean_object* v___x_2845_; 
lean_dec_ref(v___y_2841_);
v___x_2844_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__4, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__4);
v___x_2845_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_2844_, v___y_2794_, v___y_2795_);
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_object* v_a_2846_; lean_object* v_snd_2847_; 
v_a_2846_ = lean_ctor_get(v___x_2845_, 0);
lean_inc(v_a_2846_);
lean_dec_ref_known(v___x_2845_, 1);
v_snd_2847_ = lean_ctor_get(v_a_2846_, 1);
lean_inc(v_snd_2847_);
lean_dec(v_a_2846_);
v_as_x27_2792_ = v_tail_2800_;
v___y_2795_ = v_snd_2847_;
goto _start;
}
else
{
lean_object* v_a_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2856_; 
lean_dec_ref(v_b_2793_);
v_a_2849_ = lean_ctor_get(v___x_2845_, 0);
v_isSharedCheck_2856_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2851_ = v___x_2845_;
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_a_2849_);
lean_dec(v___x_2845_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v___x_2854_; 
if (v_isShared_2852_ == 0)
{
v___x_2854_ = v___x_2851_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_a_2849_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___boxed(lean_object* v___y_2861_, lean_object* v___x_2862_, lean_object* v_as_x27_2863_, lean_object* v_b_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_){
_start:
{
uint8_t v___y_172148__boxed_2868_; uint8_t v___x_172149__boxed_2869_; lean_object* v_res_2870_; 
v___y_172148__boxed_2868_ = lean_unbox(v___y_2861_);
v___x_172149__boxed_2869_ = lean_unbox(v___x_2862_);
v_res_2870_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(v___y_172148__boxed_2868_, v___x_172149__boxed_2869_, v_as_x27_2863_, v_b_2864_, v___y_2865_, v___y_2866_);
lean_dec_ref(v___y_2865_);
lean_dec(v_as_x27_2863_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__11(lean_object* v_msg_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_){
_start:
{
lean_object* v___x_2875_; lean_object* v___f_2876_; lean_object* v___f_2877_; lean_object* v___f_2878_; lean_object* v___f_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___f_2892_; lean_object* v___x_164180__overap_2893_; lean_object* v___x_2894_; 
v___x_2875_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2876_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2876_, 0, v___x_2875_);
v___f_2877_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2877_, 0, v___x_2875_);
v___f_2878_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2878_, 0, v___x_2875_);
v___f_2879_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2879_, 0, v___x_2875_);
v___x_2880_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2880_, 0, lean_box(0));
lean_closure_set(v___x_2880_, 1, lean_box(0));
lean_closure_set(v___x_2880_, 2, v___x_2875_);
v___x_2881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2881_, 0, v___x_2880_);
lean_ctor_set(v___x_2881_, 1, v___f_2876_);
v___x_2882_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2882_, 0, lean_box(0));
lean_closure_set(v___x_2882_, 1, lean_box(0));
lean_closure_set(v___x_2882_, 2, v___x_2875_);
v___x_2883_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2881_);
lean_ctor_set(v___x_2883_, 1, v___x_2882_);
lean_ctor_set(v___x_2883_, 2, v___f_2877_);
lean_ctor_set(v___x_2883_, 3, v___f_2878_);
lean_ctor_set(v___x_2883_, 4, v___f_2879_);
v___x_2884_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2884_, 0, lean_box(0));
lean_closure_set(v___x_2884_, 1, lean_box(0));
lean_closure_set(v___x_2884_, 2, v___x_2875_);
v___x_2885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2885_, 0, v___x_2883_);
lean_ctor_set(v___x_2885_, 1, v___x_2884_);
v___x_2886_ = lean_obj_once(&l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0, &l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0_once, _init_l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0);
v___x_2887_ = lean_box(1);
v___x_2888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2888_, 0, v___x_2886_);
lean_ctor_set(v___x_2888_, 1, v___x_2887_);
v___x_2889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2889_, 0, v___x_2886_);
lean_ctor_set(v___x_2889_, 1, v___x_2888_);
v___x_2890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2890_, 0, v___x_2889_);
v___x_2891_ = l_instInhabitedOfMonad___redArg(v___x_2885_, v___x_2890_);
v___f_2892_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2892_, 0, v___x_2891_);
v___x_164180__overap_2893_ = lean_panic_fn_borrowed(v___f_2892_, v_msg_2871_);
lean_dec_ref(v___f_2892_);
lean_inc_ref(v___y_2872_);
v___x_2894_ = lean_apply_3(v___x_164180__overap_2893_, v___y_2872_, v___y_2873_, lean_box(0));
return v___x_2894_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__11___boxed(lean_object* v_msg_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_){
_start:
{
lean_object* v_res_2899_; 
v_res_2899_ = l_panic___at___00LeanExport_dumpConstant_spec__11(v_msg_2895_, v___y_2896_, v___y_2897_);
lean_dec_ref(v___y_2896_);
return v_res_2899_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4(lean_object* v_msg_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_){
_start:
{
lean_object* v___x_2904_; lean_object* v___f_2905_; lean_object* v___f_2906_; lean_object* v___f_2907_; lean_object* v___f_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___f_2918_; lean_object* v___x_162765__overap_2919_; lean_object* v___x_2920_; 
v___x_2904_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2905_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2905_, 0, v___x_2904_);
v___f_2906_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2906_, 0, v___x_2904_);
v___f_2907_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2907_, 0, v___x_2904_);
v___f_2908_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2908_, 0, v___x_2904_);
v___x_2909_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2909_, 0, lean_box(0));
lean_closure_set(v___x_2909_, 1, lean_box(0));
lean_closure_set(v___x_2909_, 2, v___x_2904_);
v___x_2910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2910_, 0, v___x_2909_);
lean_ctor_set(v___x_2910_, 1, v___f_2905_);
v___x_2911_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2911_, 0, lean_box(0));
lean_closure_set(v___x_2911_, 1, lean_box(0));
lean_closure_set(v___x_2911_, 2, v___x_2904_);
v___x_2912_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2910_);
lean_ctor_set(v___x_2912_, 1, v___x_2911_);
lean_ctor_set(v___x_2912_, 2, v___f_2906_);
lean_ctor_set(v___x_2912_, 3, v___f_2907_);
lean_ctor_set(v___x_2912_, 4, v___f_2908_);
v___x_2913_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2913_, 0, lean_box(0));
lean_closure_set(v___x_2913_, 1, lean_box(0));
lean_closure_set(v___x_2913_, 2, v___x_2904_);
v___x_2914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2914_, 0, v___x_2912_);
lean_ctor_set(v___x_2914_, 1, v___x_2913_);
v___x_2915_ = lean_obj_once(&l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0, &l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0_once, _init_l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0);
v___x_2916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2915_);
v___x_2917_ = l_instInhabitedOfMonad___redArg(v___x_2914_, v___x_2916_);
v___f_2918_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2918_, 0, v___x_2917_);
v___x_162765__overap_2919_ = lean_panic_fn_borrowed(v___f_2918_, v_msg_2900_);
lean_dec_ref(v___f_2918_);
lean_inc_ref(v___y_2901_);
v___x_2920_ = lean_apply_3(v___x_162765__overap_2919_, v___y_2901_, v___y_2902_, lean_box(0));
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4___boxed(lean_object* v_msg_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_){
_start:
{
lean_object* v_res_2925_; 
v_res_2925_ = l_panic___at___00LeanExport_dumpConstant_spec__4(v_msg_2921_, v___y_2922_, v___y_2923_);
lean_dec_ref(v___y_2922_);
return v_res_2925_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__1(void){
_start:
{
lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; 
v___x_2927_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__0));
v___x_2928_ = lean_unsigned_to_nat(8u);
v___x_2929_ = lean_unsigned_to_nat(354u);
v___x_2930_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_2931_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2932_ = l_mkPanicMessageWithDecl(v___x_2931_, v___x_2930_, v___x_2929_, v___x_2928_, v___x_2927_);
return v___x_2932_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__3(void){
_start:
{
lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2934_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__2));
v___x_2935_ = lean_unsigned_to_nat(13u);
v___x_2936_ = lean_unsigned_to_nat(356u);
v___x_2937_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_2938_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2939_ = l_mkPanicMessageWithDecl(v___x_2938_, v___x_2937_, v___x_2936_, v___x_2935_, v___x_2934_);
return v___x_2939_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21(uint8_t v___x_2940_, lean_object* v_init_2941_, lean_object* v_x_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_){
_start:
{
lean_object* v_d_2947_; lean_object* v___y_2948_; 
if (lean_obj_tag(v_x_2942_) == 0)
{
lean_object* v_k_2952_; lean_object* v_l_2953_; lean_object* v_r_2954_; lean_object* v___x_2955_; 
v_k_2952_ = lean_ctor_get(v_x_2942_, 1);
lean_inc(v_k_2952_);
v_l_2953_ = lean_ctor_get(v_x_2942_, 3);
lean_inc(v_l_2953_);
v_r_2954_ = lean_ctor_get(v_x_2942_, 4);
lean_inc(v_r_2954_);
lean_dec_ref_known(v_x_2942_, 5);
v___x_2955_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21(v___x_2940_, v_init_2941_, v_l_2953_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_2955_) == 0)
{
lean_object* v_a_2956_; lean_object* v_fst_2957_; 
v_a_2956_ = lean_ctor_get(v___x_2955_, 0);
lean_inc(v_a_2956_);
lean_dec_ref_known(v___x_2955_, 1);
v_fst_2957_ = lean_ctor_get(v_a_2956_, 0);
lean_inc(v_fst_2957_);
if (lean_obj_tag(v_fst_2957_) == 0)
{
lean_object* v_snd_2958_; lean_object* v_a_2959_; 
lean_dec(v_r_2954_);
lean_dec(v_k_2952_);
v_snd_2958_ = lean_ctor_get(v_a_2956_, 1);
lean_inc(v_snd_2958_);
lean_dec(v_a_2956_);
v_a_2959_ = lean_ctor_get(v_fst_2957_, 0);
lean_inc(v_a_2959_);
lean_dec_ref_known(v_fst_2957_, 1);
v_d_2947_ = v_a_2959_;
v___y_2948_ = v_snd_2958_;
goto v___jp_2946_;
}
else
{
lean_object* v_snd_2960_; lean_object* v_a_2961_; lean_object* v___y_2963_; lean_object* v___y_2967_; lean_object* v___x_2993_; 
v_snd_2960_ = lean_ctor_get(v_a_2956_, 1);
lean_inc(v_snd_2960_);
lean_dec(v_a_2956_);
v_a_2961_ = lean_ctor_get(v_fst_2957_, 0);
lean_inc(v_a_2961_);
lean_dec_ref_known(v_fst_2957_, 1);
lean_inc_ref(v___y_2943_);
v___x_2993_ = l_Lean_Environment_find_x3f(v___y_2943_, v_k_2952_, v___x_2940_);
if (lean_obj_tag(v___x_2993_) == 0)
{
lean_object* v___x_2994_; lean_object* v___x_2995_; 
v___x_2994_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8);
v___x_2995_ = l_panic___at___00LeanExport_dumpConstant_spec__6(v___x_2994_);
v___y_2967_ = v___x_2995_;
goto v___jp_2966_;
}
else
{
lean_object* v_val_2996_; 
v_val_2996_ = lean_ctor_get(v___x_2993_, 0);
lean_inc(v_val_2996_);
lean_dec_ref_known(v___x_2993_, 1);
v___y_2967_ = v_val_2996_;
goto v___jp_2966_;
}
v___jp_2962_:
{
lean_object* v___x_2964_; 
v___x_2964_ = lean_array_push(v_a_2961_, v___y_2963_);
v_init_2941_ = v___x_2964_;
v_x_2942_ = v_r_2954_;
v___y_2944_ = v_snd_2960_;
goto _start;
}
v___jp_2966_:
{
if (lean_obj_tag(v___y_2967_) == 7)
{
lean_object* v_val_2968_; uint8_t v_isUnsafe_2969_; 
v_val_2968_ = lean_ctor_get(v___y_2967_, 0);
lean_inc_ref(v_val_2968_);
lean_dec_ref_known(v___y_2967_, 1);
v_isUnsafe_2969_ = lean_ctor_get_uint8(v_val_2968_, sizeof(void*)*7 + 1);
if (v_isUnsafe_2969_ == 0)
{
v___y_2963_ = v_val_2968_;
goto v___jp_2962_;
}
else
{
if (v___x_2940_ == 0)
{
uint8_t v_exportUnsafe_2970_; 
v_exportUnsafe_2970_ = lean_ctor_get_uint8(v_snd_2960_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_2970_ == 0)
{
lean_object* v___x_2971_; lean_object* v___x_2972_; 
lean_dec_ref(v_val_2968_);
lean_dec(v_a_2961_);
v___x_2971_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__1, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__1_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__1);
v___x_2972_ = l_panic___at___00LeanExport_dumpConstant_spec__4(v___x_2971_, v___y_2943_, v_snd_2960_);
if (lean_obj_tag(v___x_2972_) == 0)
{
lean_object* v_a_2973_; lean_object* v_fst_2974_; 
v_a_2973_ = lean_ctor_get(v___x_2972_, 0);
lean_inc(v_a_2973_);
lean_dec_ref_known(v___x_2972_, 1);
v_fst_2974_ = lean_ctor_get(v_a_2973_, 0);
lean_inc(v_fst_2974_);
if (lean_obj_tag(v_fst_2974_) == 0)
{
lean_object* v_snd_2975_; lean_object* v_a_2976_; 
lean_dec(v_r_2954_);
v_snd_2975_ = lean_ctor_get(v_a_2973_, 1);
lean_inc(v_snd_2975_);
lean_dec(v_a_2973_);
v_a_2976_ = lean_ctor_get(v_fst_2974_, 0);
lean_inc(v_a_2976_);
lean_dec_ref_known(v_fst_2974_, 1);
v_d_2947_ = v_a_2976_;
v___y_2948_ = v_snd_2975_;
goto v___jp_2946_;
}
else
{
lean_object* v_snd_2977_; lean_object* v_a_2978_; 
v_snd_2977_ = lean_ctor_get(v_a_2973_, 1);
lean_inc(v_snd_2977_);
lean_dec(v_a_2973_);
v_a_2978_ = lean_ctor_get(v_fst_2974_, 0);
lean_inc(v_a_2978_);
lean_dec_ref_known(v_fst_2974_, 1);
v_init_2941_ = v_a_2978_;
v_x_2942_ = v_r_2954_;
v___y_2944_ = v_snd_2977_;
goto _start;
}
}
else
{
lean_dec(v_r_2954_);
return v___x_2972_;
}
}
else
{
v___y_2963_ = v_val_2968_;
goto v___jp_2962_;
}
}
else
{
v___y_2963_ = v_val_2968_;
goto v___jp_2962_;
}
}
}
else
{
lean_object* v___x_2980_; lean_object* v___x_2981_; 
lean_dec_ref(v___y_2967_);
v___x_2980_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__3, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__3);
v___x_2981_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_2980_, v___y_2943_, v_snd_2960_);
if (lean_obj_tag(v___x_2981_) == 0)
{
lean_object* v_a_2982_; lean_object* v_snd_2983_; 
v_a_2982_ = lean_ctor_get(v___x_2981_, 0);
lean_inc(v_a_2982_);
lean_dec_ref_known(v___x_2981_, 1);
v_snd_2983_ = lean_ctor_get(v_a_2982_, 1);
lean_inc(v_snd_2983_);
lean_dec(v_a_2982_);
v_init_2941_ = v_a_2961_;
v_x_2942_ = v_r_2954_;
v___y_2944_ = v_snd_2983_;
goto _start;
}
else
{
lean_object* v_a_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_2992_; 
lean_dec(v_a_2961_);
lean_dec(v_r_2954_);
v_a_2985_ = lean_ctor_get(v___x_2981_, 0);
v_isSharedCheck_2992_ = !lean_is_exclusive(v___x_2981_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2987_ = v___x_2981_;
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_a_2985_);
lean_dec(v___x_2981_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2990_; 
if (v_isShared_2988_ == 0)
{
v___x_2990_ = v___x_2987_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v_a_2985_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
return v___x_2990_;
}
}
}
}
}
}
}
else
{
lean_dec(v_r_2954_);
lean_dec(v_k_2952_);
return v___x_2955_;
}
}
else
{
lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2997_, 0, v_init_2941_);
v___x_2998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2998_, 0, v___x_2997_);
lean_ctor_set(v___x_2998_, 1, v___y_2944_);
v___x_2999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2999_, 0, v___x_2998_);
return v___x_2999_;
}
v___jp_2946_:
{
lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; 
v___x_2949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2949_, 0, v_d_2947_);
v___x_2950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2949_);
lean_ctor_set(v___x_2950_, 1, v___y_2948_);
v___x_2951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2950_);
return v___x_2951_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___boxed(lean_object* v___x_3000_, lean_object* v_init_3001_, lean_object* v_x_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_){
_start:
{
uint8_t v___x_172445__boxed_3006_; lean_object* v_res_3007_; 
v___x_172445__boxed_3006_ = lean_unbox(v___x_3000_);
v_res_3007_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21(v___x_172445__boxed_3006_, v_init_3001_, v_x_3002_, v___y_3003_, v___y_3004_);
lean_dec_ref(v___y_3003_);
return v_res_3007_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19_spec__23(size_t v_sz_3008_, size_t v_i_3009_, lean_object* v_bs_3010_){
_start:
{
uint8_t v___x_3011_; 
v___x_3011_ = lean_usize_dec_lt(v_i_3009_, v_sz_3008_);
if (v___x_3011_ == 0)
{
return v_bs_3010_;
}
else
{
lean_object* v_v_3012_; lean_object* v___x_3013_; lean_object* v_bs_x27_3014_; size_t v___x_3015_; size_t v___x_3016_; lean_object* v___x_3017_; 
v_v_3012_ = lean_array_uget(v_bs_3010_, v_i_3009_);
v___x_3013_ = lean_unsigned_to_nat(0u);
v_bs_x27_3014_ = lean_array_uset(v_bs_3010_, v_i_3009_, v___x_3013_);
v___x_3015_ = ((size_t)1ULL);
v___x_3016_ = lean_usize_add(v_i_3009_, v___x_3015_);
v___x_3017_ = lean_array_uset(v_bs_x27_3014_, v_i_3009_, v_v_3012_);
v_i_3009_ = v___x_3016_;
v_bs_3010_ = v___x_3017_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19_spec__23___boxed(lean_object* v_sz_3019_, lean_object* v_i_3020_, lean_object* v_bs_3021_){
_start:
{
size_t v_sz_boxed_3022_; size_t v_i_boxed_3023_; lean_object* v_res_3024_; 
v_sz_boxed_3022_ = lean_unbox_usize(v_sz_3019_);
lean_dec(v_sz_3019_);
v_i_boxed_3023_ = lean_unbox_usize(v_i_3020_);
lean_dec(v_i_3020_);
v_res_3024_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19_spec__23(v_sz_boxed_3022_, v_i_boxed_3023_, v_bs_3021_);
return v_res_3024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(lean_object* v_a_3025_){
_start:
{
size_t v_sz_3026_; size_t v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; 
v_sz_3026_ = lean_array_size(v_a_3025_);
v___x_3027_ = ((size_t)0ULL);
v___x_3028_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19_spec__23(v_sz_3026_, v___x_3027_, v_a_3025_);
v___x_3029_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3029_, 0, v___x_3028_);
return v___x_3029_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00LeanExport_dumpConstant_spec__3(lean_object* v_a_3030_){
_start:
{
lean_object* v___x_3031_; lean_object* v___x_3032_; 
v___x_3031_ = lean_array_mk(v_a_3030_);
v___x_3032_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(v___x_3031_);
return v___x_3032_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(lean_object* v_as_3033_, size_t v_sz_3034_, size_t v_i_3035_, lean_object* v_b_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_){
_start:
{
uint8_t v___x_3040_; 
v___x_3040_ = lean_usize_dec_lt(v_i_3035_, v_sz_3034_);
if (v___x_3040_ == 0)
{
lean_object* v___x_3041_; lean_object* v___x_3042_; 
v___x_3041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3041_, 0, v_b_3036_);
lean_ctor_set(v___x_3041_, 1, v___y_3038_);
v___x_3042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3042_, 0, v___x_3041_);
return v___x_3042_;
}
else
{
lean_object* v_visitedNames_3043_; lean_object* v_visitedLevels_3044_; lean_object* v_visitedExprs_3045_; lean_object* v_visitedConstants_3046_; lean_object* v_noMDataExprs_3047_; uint8_t v_exportMData_3048_; uint8_t v_exportUnsafe_3049_; uint8_t v_ignoreMissing_3050_; lean_object* v_recursorMap_3051_; lean_object* v___x_3053_; uint8_t v_isShared_3054_; uint8_t v_isSharedCheck_3070_; 
v_visitedNames_3043_ = lean_ctor_get(v___y_3038_, 0);
v_visitedLevels_3044_ = lean_ctor_get(v___y_3038_, 1);
v_visitedExprs_3045_ = lean_ctor_get(v___y_3038_, 2);
v_visitedConstants_3046_ = lean_ctor_get(v___y_3038_, 3);
v_noMDataExprs_3047_ = lean_ctor_get(v___y_3038_, 4);
v_exportMData_3048_ = lean_ctor_get_uint8(v___y_3038_, sizeof(void*)*6);
v_exportUnsafe_3049_ = lean_ctor_get_uint8(v___y_3038_, sizeof(void*)*6 + 1);
v_ignoreMissing_3050_ = lean_ctor_get_uint8(v___y_3038_, sizeof(void*)*6 + 2);
v_recursorMap_3051_ = lean_ctor_get(v___y_3038_, 5);
v_isSharedCheck_3070_ = !lean_is_exclusive(v___y_3038_);
if (v_isSharedCheck_3070_ == 0)
{
v___x_3053_ = v___y_3038_;
v_isShared_3054_ = v_isSharedCheck_3070_;
goto v_resetjp_3052_;
}
else
{
lean_inc(v_recursorMap_3051_);
lean_inc(v_noMDataExprs_3047_);
lean_inc(v_visitedConstants_3046_);
lean_inc(v_visitedExprs_3045_);
lean_inc(v_visitedLevels_3044_);
lean_inc(v_visitedNames_3043_);
lean_dec(v___y_3038_);
v___x_3053_ = lean_box(0);
v_isShared_3054_ = v_isSharedCheck_3070_;
goto v_resetjp_3052_;
}
v_resetjp_3052_:
{
lean_object* v_a_3055_; lean_object* v_toConstantVal_3056_; lean_object* v_name_3057_; lean_object* v_type_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3062_; 
v_a_3055_ = lean_array_uget_borrowed(v_as_3033_, v_i_3035_);
v_toConstantVal_3056_ = lean_ctor_get(v_a_3055_, 0);
v_name_3057_ = lean_ctor_get(v_toConstantVal_3056_, 0);
v_type_3058_ = lean_ctor_get(v_toConstantVal_3056_, 2);
v___x_3059_ = lean_box(0);
lean_inc(v_name_3057_);
v___x_3060_ = l_Lean_NameHashSet_insert(v_visitedConstants_3046_, v_name_3057_);
if (v_isShared_3054_ == 0)
{
lean_ctor_set(v___x_3053_, 3, v___x_3060_);
v___x_3062_ = v___x_3053_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v_visitedNames_3043_);
lean_ctor_set(v_reuseFailAlloc_3069_, 1, v_visitedLevels_3044_);
lean_ctor_set(v_reuseFailAlloc_3069_, 2, v_visitedExprs_3045_);
lean_ctor_set(v_reuseFailAlloc_3069_, 3, v___x_3060_);
lean_ctor_set(v_reuseFailAlloc_3069_, 4, v_noMDataExprs_3047_);
lean_ctor_set(v_reuseFailAlloc_3069_, 5, v_recursorMap_3051_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, sizeof(void*)*6, v_exportMData_3048_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, sizeof(void*)*6 + 1, v_exportUnsafe_3049_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, sizeof(void*)*6 + 2, v_ignoreMissing_3050_);
v___x_3062_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
lean_object* v___x_3063_; 
lean_inc_ref(v_type_3058_);
v___x_3063_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_3058_, v___y_3037_, v___x_3062_);
if (lean_obj_tag(v___x_3063_) == 0)
{
lean_object* v_a_3064_; lean_object* v_snd_3065_; size_t v___x_3066_; size_t v___x_3067_; 
v_a_3064_ = lean_ctor_get(v___x_3063_, 0);
lean_inc(v_a_3064_);
lean_dec_ref_known(v___x_3063_, 1);
v_snd_3065_ = lean_ctor_get(v_a_3064_, 1);
lean_inc(v_snd_3065_);
lean_dec(v_a_3064_);
v___x_3066_ = ((size_t)1ULL);
v___x_3067_ = lean_usize_add(v_i_3035_, v___x_3066_);
v_i_3035_ = v___x_3067_;
v_b_3036_ = v___x_3059_;
v___y_3038_ = v_snd_3065_;
goto _start;
}
else
{
return v___x_3063_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg(lean_object* v_as_x27_3071_, lean_object* v_b_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_){
_start:
{
if (lean_obj_tag(v_as_x27_3071_) == 0)
{
lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3076_, 0, v_b_3072_);
lean_ctor_set(v___x_3076_, 1, v___y_3074_);
v___x_3077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3077_, 0, v___x_3076_);
return v___x_3077_;
}
else
{
lean_object* v_head_3078_; lean_object* v_tail_3079_; lean_object* v_rhs_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; 
v_head_3078_ = lean_ctor_get(v_as_x27_3071_, 0);
v_tail_3079_ = lean_ctor_get(v_as_x27_3071_, 1);
v_rhs_3080_ = lean_ctor_get(v_head_3078_, 2);
v___x_3081_ = lean_box(0);
lean_inc_ref(v_rhs_3080_);
v___x_3082_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_rhs_3080_, v___y_3073_, v___y_3074_);
if (lean_obj_tag(v___x_3082_) == 0)
{
lean_object* v_a_3083_; lean_object* v_snd_3084_; 
v_a_3083_ = lean_ctor_get(v___x_3082_, 0);
lean_inc(v_a_3083_);
lean_dec_ref_known(v___x_3082_, 1);
v_snd_3084_ = lean_ctor_get(v_a_3083_, 1);
lean_inc(v_snd_3084_);
lean_dec(v_a_3083_);
v_as_x27_3071_ = v_tail_3079_;
v_b_3072_ = v___x_3081_;
v___y_3074_ = v_snd_3084_;
goto _start;
}
else
{
return v___x_3082_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__15(lean_object* v_as_3086_, size_t v_sz_3087_, size_t v_i_3088_, lean_object* v_b_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_){
_start:
{
uint8_t v___x_3093_; 
v___x_3093_ = lean_usize_dec_lt(v_i_3088_, v_sz_3087_);
if (v___x_3093_ == 0)
{
lean_object* v___x_3094_; lean_object* v___x_3095_; 
v___x_3094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3094_, 0, v_b_3089_);
lean_ctor_set(v___x_3094_, 1, v___y_3091_);
v___x_3095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3094_);
return v___x_3095_;
}
else
{
lean_object* v_a_3096_; lean_object* v_rules_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; 
v_a_3096_ = lean_array_uget_borrowed(v_as_3086_, v_i_3088_);
v_rules_3097_ = lean_ctor_get(v_a_3096_, 6);
v___x_3098_ = lean_box(0);
v___x_3099_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg(v_rules_3097_, v___x_3098_, v___y_3090_, v___y_3091_);
if (lean_obj_tag(v___x_3099_) == 0)
{
lean_object* v_a_3100_; lean_object* v_snd_3101_; size_t v___x_3102_; size_t v___x_3103_; 
v_a_3100_ = lean_ctor_get(v___x_3099_, 0);
lean_inc(v_a_3100_);
lean_dec_ref_known(v___x_3099_, 1);
v_snd_3101_ = lean_ctor_get(v_a_3100_, 1);
lean_inc(v_snd_3101_);
lean_dec(v_a_3100_);
v___x_3102_ = ((size_t)1ULL);
v___x_3103_ = lean_usize_add(v_i_3088_, v___x_3102_);
v_i_3088_ = v___x_3103_;
v_b_3089_ = v___x_3098_;
v___y_3091_ = v_snd_3101_;
goto _start;
}
else
{
return v___x_3099_;
}
}
}
}
static lean_object* _init_l_LeanExport_dumpExpr___closed__0(void){
_start:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; 
v___x_3105_ = lean_box(0);
v___x_3106_ = lean_unsigned_to_nat(16u);
v___x_3107_ = lean_mk_array(v___x_3106_, v___x_3105_);
return v___x_3107_;
}
}
static lean_object* _init_l_LeanExport_dumpExpr___closed__1(void){
_start:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3108_ = lean_obj_once(&l_LeanExport_dumpExpr___closed__0, &l_LeanExport_dumpExpr___closed__0_once, _init_l_LeanExport_dumpExpr___closed__0);
v___x_3109_ = lean_unsigned_to_nat(0u);
v___x_3110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3109_);
lean_ctor_set(v___x_3110_, 1, v___x_3108_);
return v___x_3110_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(lean_object* v_a_3130_, lean_object* v_a_3131_){
_start:
{
lean_object* v_visitedConstants_3137_; lean_object* v_nat_3138_; uint8_t v___x_3139_; 
v_visitedConstants_3137_ = lean_ctor_get(v_a_3131_, 3);
v_nat_3138_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__1));
v___x_3139_ = l_Lean_NameHashSet_contains(v_visitedConstants_3137_, v_nat_3138_);
if (v___x_3139_ == 0)
{
lean_object* v___x_3140_; 
lean_inc_ref(v_a_3130_);
v___x_3140_ = l_Lean_Environment_find_x3f(v_a_3130_, v_nat_3138_, v___x_3139_);
if (lean_obj_tag(v___x_3140_) == 0)
{
goto v___jp_3133_;
}
else
{
lean_object* v___x_3141_; 
lean_dec_ref_known(v___x_3140_, 1);
v___x_3141_ = l_LeanExport_dumpConstant(v_nat_3138_, v_a_3130_, v_a_3131_);
return v___x_3141_;
}
}
else
{
goto v___jp_3133_;
}
v___jp_3133_:
{
lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; 
v___x_3134_ = lean_box(0);
v___x_3135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3134_);
lean_ctor_set(v___x_3135_, 1, v_a_3131_);
v___x_3136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3136_, 0, v___x_3135_);
return v___x_3136_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(lean_object* v_a_3153_, lean_object* v_a_3154_){
_start:
{
lean_object* v___y_3157_; lean_object* v___y_3162_; lean_object* v___y_3163_; lean_object* v_visitedConstants_3164_; lean_object* v_visitedConstants_3169_; lean_object* v_charOfNat_3170_; uint8_t v___x_3171_; 
v_visitedConstants_3169_ = lean_ctor_get(v_a_3154_, 3);
v_charOfNat_3170_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5));
v___x_3171_ = l_Lean_NameHashSet_contains(v_visitedConstants_3169_, v_charOfNat_3170_);
if (v___x_3171_ == 0)
{
lean_object* v___x_3172_; 
lean_inc_ref(v_a_3153_);
v___x_3172_ = l_Lean_Environment_find_x3f(v_a_3153_, v_charOfNat_3170_, v___x_3171_);
if (lean_obj_tag(v___x_3172_) == 0)
{
lean_inc_ref(v_visitedConstants_3169_);
v___y_3162_ = v_a_3153_;
v___y_3163_ = v_a_3154_;
v_visitedConstants_3164_ = v_visitedConstants_3169_;
goto v___jp_3161_;
}
else
{
lean_object* v___x_3173_; 
lean_dec_ref_known(v___x_3172_, 1);
v___x_3173_ = l_LeanExport_dumpConstant(v_charOfNat_3170_, v_a_3153_, v_a_3154_);
if (lean_obj_tag(v___x_3173_) == 0)
{
lean_object* v_a_3174_; lean_object* v_snd_3175_; lean_object* v_visitedConstants_3176_; 
v_a_3174_ = lean_ctor_get(v___x_3173_, 0);
lean_inc(v_a_3174_);
lean_dec_ref_known(v___x_3173_, 1);
v_snd_3175_ = lean_ctor_get(v_a_3174_, 1);
lean_inc(v_snd_3175_);
lean_dec(v_a_3174_);
v_visitedConstants_3176_ = lean_ctor_get(v_snd_3175_, 3);
lean_inc_ref(v_visitedConstants_3176_);
v___y_3162_ = v_a_3153_;
v___y_3163_ = v_snd_3175_;
v_visitedConstants_3164_ = v_visitedConstants_3176_;
goto v___jp_3161_;
}
else
{
return v___x_3173_;
}
}
}
else
{
lean_inc_ref(v_visitedConstants_3169_);
v___y_3162_ = v_a_3153_;
v___y_3163_ = v_a_3154_;
v_visitedConstants_3164_ = v_visitedConstants_3169_;
goto v___jp_3161_;
}
v___jp_3156_:
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; 
v___x_3158_ = lean_box(0);
v___x_3159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3159_, 0, v___x_3158_);
lean_ctor_set(v___x_3159_, 1, v___y_3157_);
v___x_3160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3160_, 0, v___x_3159_);
return v___x_3160_;
}
v___jp_3161_:
{
lean_object* v___x_3165_; uint8_t v___x_3166_; 
v___x_3165_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2));
v___x_3166_ = l_Lean_NameHashSet_contains(v_visitedConstants_3164_, v___x_3165_);
lean_dec_ref(v_visitedConstants_3164_);
if (v___x_3166_ == 0)
{
lean_object* v___x_3167_; 
lean_inc_ref(v___y_3162_);
v___x_3167_ = l_Lean_Environment_find_x3f(v___y_3162_, v___x_3165_, v___x_3166_);
if (lean_obj_tag(v___x_3167_) == 0)
{
v___y_3157_ = v___y_3163_;
goto v___jp_3156_;
}
else
{
lean_object* v___x_3168_; 
lean_dec_ref_known(v___x_3167_, 1);
v___x_3168_ = l_LeanExport_dumpConstant(v___x_3165_, v___y_3162_, v___y_3163_);
return v___x_3168_;
}
}
else
{
v___y_3157_ = v___y_3163_;
goto v___jp_3156_;
}
}
}
}
static lean_object* _init_l_LeanExport_dumpExprAux___closed__26(void){
_start:
{
lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; 
v___x_3187_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__25));
v___x_3188_ = lean_unsigned_to_nat(29u);
v___x_3189_ = lean_unsigned_to_nat(177u);
v___x_3190_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__24));
v___x_3191_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_3192_ = l_mkPanicMessageWithDecl(v___x_3191_, v___x_3190_, v___x_3189_, v___x_3188_, v___x_3187_);
return v___x_3192_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExprAux(lean_object* v_e_3193_, lean_object* v_a_3194_, lean_object* v_a_3195_){
_start:
{
lean_object* v_visitedNames_3197_; lean_object* v_visitedLevels_3198_; lean_object* v_visitedExprs_3199_; lean_object* v_visitedConstants_3200_; lean_object* v_noMDataExprs_3201_; uint8_t v_exportMData_3202_; uint8_t v_exportUnsafe_3203_; uint8_t v_ignoreMissing_3204_; lean_object* v_recursorMap_3205_; lean_object* v___x_3206_; 
v_visitedNames_3197_ = lean_ctor_get(v_a_3195_, 0);
v_visitedLevels_3198_ = lean_ctor_get(v_a_3195_, 1);
v_visitedExprs_3199_ = lean_ctor_get(v_a_3195_, 2);
v_visitedConstants_3200_ = lean_ctor_get(v_a_3195_, 3);
v_noMDataExprs_3201_ = lean_ctor_get(v_a_3195_, 4);
v_exportMData_3202_ = lean_ctor_get_uint8(v_a_3195_, sizeof(void*)*6);
v_exportUnsafe_3203_ = lean_ctor_get_uint8(v_a_3195_, sizeof(void*)*6 + 1);
v_ignoreMissing_3204_ = lean_ctor_get_uint8(v_a_3195_, sizeof(void*)*6 + 2);
v_recursorMap_3205_ = lean_ctor_get(v_a_3195_, 5);
v___x_3206_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_visitedExprs_3199_, v_e_3193_);
if (lean_obj_tag(v___x_3206_) == 1)
{
lean_object* v_val_3207_; lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3215_; 
lean_dec_ref(v_e_3193_);
v_val_3207_ = lean_ctor_get(v___x_3206_, 0);
v_isSharedCheck_3215_ = !lean_is_exclusive(v___x_3206_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3209_ = v___x_3206_;
v_isShared_3210_ = v_isSharedCheck_3215_;
goto v_resetjp_3208_;
}
else
{
lean_inc(v_val_3207_);
lean_dec(v___x_3206_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3215_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v___x_3211_; lean_object* v___x_3213_; 
v___x_3211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3211_, 0, v_val_3207_);
lean_ctor_set(v___x_3211_, 1, v_a_3195_);
if (v_isShared_3210_ == 0)
{
lean_ctor_set_tag(v___x_3209_, 0);
lean_ctor_set(v___x_3209_, 0, v___x_3211_);
v___x_3213_ = v___x_3209_;
goto v_reusejp_3212_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v___x_3211_);
v___x_3213_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3212_;
}
v_reusejp_3212_:
{
return v___x_3213_;
}
}
}
else
{
lean_object* v___x_3216_; lean_object* v_fst_3218_; lean_object* v_visitedNames_3219_; lean_object* v_visitedLevels_3220_; lean_object* v_visitedExprs_3221_; lean_object* v_visitedConstants_3222_; lean_object* v_noMDataExprs_3223_; uint8_t v_exportMData_3224_; uint8_t v_exportUnsafe_3225_; uint8_t v_ignoreMissing_3226_; lean_object* v_recursorMap_3227_; lean_object* v_fst_3254_; lean_object* v_snd_3255_; 
lean_dec(v___x_3206_);
v___x_3216_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__0));
switch(lean_obj_tag(v_e_3193_))
{
case 0:
{
lean_object* v_deBruijnIndex_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; 
lean_inc(v_recursorMap_3205_);
lean_inc_ref(v_noMDataExprs_3201_);
lean_inc_ref(v_visitedConstants_3200_);
lean_inc_ref(v_visitedExprs_3199_);
lean_inc_ref(v_visitedLevels_3198_);
lean_inc_ref(v_visitedNames_3197_);
lean_dec_ref(v_a_3195_);
v_deBruijnIndex_3265_ = lean_ctor_get(v_e_3193_, 0);
v___x_3266_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__1));
lean_inc(v_deBruijnIndex_3265_);
v___x_3267_ = l_Lean_JsonNumber_fromNat(v_deBruijnIndex_3265_);
v___x_3268_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3268_, 0, v___x_3267_);
v___x_3269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3269_, 0, v___x_3266_);
lean_ctor_set(v___x_3269_, 1, v___x_3268_);
v___x_3270_ = lean_box(0);
v___x_3271_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3271_, 0, v___x_3269_);
lean_ctor_set(v___x_3271_, 1, v___x_3270_);
v___x_3272_ = l_Lean_Json_mkObj(v___x_3271_);
lean_dec_ref_known(v___x_3271_, 2);
v_fst_3218_ = v___x_3272_;
v_visitedNames_3219_ = v_visitedNames_3197_;
v_visitedLevels_3220_ = v_visitedLevels_3198_;
v_visitedExprs_3221_ = v_visitedExprs_3199_;
v_visitedConstants_3222_ = v_visitedConstants_3200_;
v_noMDataExprs_3223_ = v_noMDataExprs_3201_;
v_exportMData_3224_ = v_exportMData_3202_;
v_exportUnsafe_3225_ = v_exportUnsafe_3203_;
v_ignoreMissing_3226_ = v_ignoreMissing_3204_;
v_recursorMap_3227_ = v_recursorMap_3205_;
goto v___jp_3217_;
}
case 3:
{
lean_object* v_u_3273_; lean_object* v___x_3274_; 
v_u_3273_ = lean_ctor_get(v_e_3193_, 0);
lean_inc(v_u_3273_);
v___x_3274_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_u_3273_, v_a_3194_, v_a_3195_);
if (lean_obj_tag(v___x_3274_) == 0)
{
lean_object* v_a_3275_; lean_object* v___x_3277_; uint8_t v_isShared_3278_; uint8_t v_isSharedCheck_3296_; 
v_a_3275_ = lean_ctor_get(v___x_3274_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___x_3274_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3277_ = v___x_3274_;
v_isShared_3278_ = v_isSharedCheck_3296_;
goto v_resetjp_3276_;
}
else
{
lean_inc(v_a_3275_);
lean_dec(v___x_3274_);
v___x_3277_ = lean_box(0);
v_isShared_3278_ = v_isSharedCheck_3296_;
goto v_resetjp_3276_;
}
v_resetjp_3276_:
{
lean_object* v_fst_3279_; lean_object* v_snd_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3295_; 
v_fst_3279_ = lean_ctor_get(v_a_3275_, 0);
v_snd_3280_ = lean_ctor_get(v_a_3275_, 1);
v_isSharedCheck_3295_ = !lean_is_exclusive(v_a_3275_);
if (v_isSharedCheck_3295_ == 0)
{
v___x_3282_ = v_a_3275_;
v_isShared_3283_ = v_isSharedCheck_3295_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_snd_3280_);
lean_inc(v_fst_3279_);
lean_dec(v_a_3275_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3295_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3287_; 
v___x_3284_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__2));
v___x_3285_ = l_Lean_JsonNumber_fromNat(v_fst_3279_);
if (v_isShared_3278_ == 0)
{
lean_ctor_set_tag(v___x_3277_, 2);
lean_ctor_set(v___x_3277_, 0, v___x_3285_);
v___x_3287_ = v___x_3277_;
goto v_reusejp_3286_;
}
else
{
lean_object* v_reuseFailAlloc_3294_; 
v_reuseFailAlloc_3294_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3294_, 0, v___x_3285_);
v___x_3287_ = v_reuseFailAlloc_3294_;
goto v_reusejp_3286_;
}
v_reusejp_3286_:
{
lean_object* v___x_3289_; 
if (v_isShared_3283_ == 0)
{
lean_ctor_set(v___x_3282_, 1, v___x_3287_);
lean_ctor_set(v___x_3282_, 0, v___x_3284_);
v___x_3289_ = v___x_3282_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v___x_3284_);
lean_ctor_set(v_reuseFailAlloc_3293_, 1, v___x_3287_);
v___x_3289_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
v___x_3290_ = lean_box(0);
v___x_3291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3291_, 0, v___x_3289_);
lean_ctor_set(v___x_3291_, 1, v___x_3290_);
v___x_3292_ = l_Lean_Json_mkObj(v___x_3291_);
lean_dec_ref_known(v___x_3291_, 2);
v_fst_3254_ = v___x_3292_;
v_snd_3255_ = v_snd_3280_;
goto v___jp_3253_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3193_, 1);
return v___x_3274_;
}
}
case 4:
{
lean_object* v_declName_3297_; lean_object* v_us_3298_; lean_object* v___x_3299_; 
v_declName_3297_ = lean_ctor_get(v_e_3193_, 0);
v_us_3298_ = lean_ctor_get(v_e_3193_, 1);
lean_inc(v_declName_3297_);
v___x_3299_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_declName_3297_, v_a_3194_, v_a_3195_);
if (lean_obj_tag(v___x_3299_) == 0)
{
lean_object* v_a_3300_; lean_object* v___x_3302_; uint8_t v_isShared_3303_; uint8_t v_isSharedCheck_3347_; 
v_a_3300_ = lean_ctor_get(v___x_3299_, 0);
v_isSharedCheck_3347_ = !lean_is_exclusive(v___x_3299_);
if (v_isSharedCheck_3347_ == 0)
{
v___x_3302_ = v___x_3299_;
v_isShared_3303_ = v_isSharedCheck_3347_;
goto v_resetjp_3301_;
}
else
{
lean_inc(v_a_3300_);
lean_dec(v___x_3299_);
v___x_3302_ = lean_box(0);
v_isShared_3303_ = v_isSharedCheck_3347_;
goto v_resetjp_3301_;
}
v_resetjp_3301_:
{
lean_object* v_fst_3304_; lean_object* v_snd_3305_; lean_object* v___x_3307_; uint8_t v_isShared_3308_; uint8_t v_isSharedCheck_3346_; 
v_fst_3304_ = lean_ctor_get(v_a_3300_, 0);
v_snd_3305_ = lean_ctor_get(v_a_3300_, 1);
v_isSharedCheck_3346_ = !lean_is_exclusive(v_a_3300_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3307_ = v_a_3300_;
v_isShared_3308_ = v_isSharedCheck_3346_;
goto v_resetjp_3306_;
}
else
{
lean_inc(v_snd_3305_);
lean_inc(v_fst_3304_);
lean_dec(v_a_3300_);
v___x_3307_ = lean_box(0);
v_isShared_3308_ = v_isSharedCheck_3346_;
goto v_resetjp_3306_;
}
v_resetjp_3306_:
{
lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3309_ = lean_box(0);
lean_inc(v_us_3298_);
v___x_3310_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(v_us_3298_, v___x_3309_, v_a_3194_, v_snd_3305_);
if (lean_obj_tag(v___x_3310_) == 0)
{
lean_object* v_a_3311_; lean_object* v_fst_3312_; lean_object* v_snd_3313_; lean_object* v___x_3315_; uint8_t v_isShared_3316_; uint8_t v_isSharedCheck_3337_; 
v_a_3311_ = lean_ctor_get(v___x_3310_, 0);
lean_inc(v_a_3311_);
lean_dec_ref_known(v___x_3310_, 1);
v_fst_3312_ = lean_ctor_get(v_a_3311_, 0);
v_snd_3313_ = lean_ctor_get(v_a_3311_, 1);
v_isSharedCheck_3337_ = !lean_is_exclusive(v_a_3311_);
if (v_isSharedCheck_3337_ == 0)
{
v___x_3315_ = v_a_3311_;
v_isShared_3316_ = v_isSharedCheck_3337_;
goto v_resetjp_3314_;
}
else
{
lean_inc(v_snd_3313_);
lean_inc(v_fst_3312_);
lean_dec(v_a_3311_);
v___x_3315_ = lean_box(0);
v_isShared_3316_ = v_isSharedCheck_3337_;
goto v_resetjp_3314_;
}
v_resetjp_3314_:
{
lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3321_; 
v___x_3317_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__3));
v___x_3318_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_3319_ = l_Lean_JsonNumber_fromNat(v_fst_3304_);
if (v_isShared_3303_ == 0)
{
lean_ctor_set_tag(v___x_3302_, 2);
lean_ctor_set(v___x_3302_, 0, v___x_3319_);
v___x_3321_ = v___x_3302_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3336_; 
v_reuseFailAlloc_3336_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3336_, 0, v___x_3319_);
v___x_3321_ = v_reuseFailAlloc_3336_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
lean_object* v___x_3323_; 
if (v_isShared_3316_ == 0)
{
lean_ctor_set(v___x_3315_, 1, v___x_3321_);
lean_ctor_set(v___x_3315_, 0, v___x_3318_);
v___x_3323_ = v___x_3315_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v___x_3318_);
lean_ctor_set(v_reuseFailAlloc_3335_, 1, v___x_3321_);
v___x_3323_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3327_; 
v___x_3324_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__4));
v___x_3325_ = l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(v_fst_3312_);
if (v_isShared_3308_ == 0)
{
lean_ctor_set(v___x_3307_, 1, v___x_3325_);
lean_ctor_set(v___x_3307_, 0, v___x_3324_);
v___x_3327_ = v___x_3307_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3334_; 
v_reuseFailAlloc_3334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3334_, 0, v___x_3324_);
lean_ctor_set(v_reuseFailAlloc_3334_, 1, v___x_3325_);
v___x_3327_ = v_reuseFailAlloc_3334_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; 
v___x_3328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3328_, 0, v___x_3327_);
lean_ctor_set(v___x_3328_, 1, v___x_3309_);
v___x_3329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3329_, 0, v___x_3323_);
lean_ctor_set(v___x_3329_, 1, v___x_3328_);
v___x_3330_ = l_Lean_Json_mkObj(v___x_3329_);
lean_dec_ref_known(v___x_3329_, 2);
v___x_3331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3331_, 0, v___x_3317_);
lean_ctor_set(v___x_3331_, 1, v___x_3330_);
v___x_3332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3331_);
lean_ctor_set(v___x_3332_, 1, v___x_3309_);
v___x_3333_ = l_Lean_Json_mkObj(v___x_3332_);
lean_dec_ref_known(v___x_3332_, 2);
v_fst_3254_ = v___x_3333_;
v_snd_3255_ = v_snd_3313_;
goto v___jp_3253_;
}
}
}
}
}
else
{
lean_object* v_a_3338_; lean_object* v___x_3340_; uint8_t v_isShared_3341_; uint8_t v_isSharedCheck_3345_; 
lean_del_object(v___x_3307_);
lean_dec(v_fst_3304_);
lean_del_object(v___x_3302_);
lean_dec_ref_known(v_e_3193_, 2);
v_a_3338_ = lean_ctor_get(v___x_3310_, 0);
v_isSharedCheck_3345_ = !lean_is_exclusive(v___x_3310_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3340_ = v___x_3310_;
v_isShared_3341_ = v_isSharedCheck_3345_;
goto v_resetjp_3339_;
}
else
{
lean_inc(v_a_3338_);
lean_dec(v___x_3310_);
v___x_3340_ = lean_box(0);
v_isShared_3341_ = v_isSharedCheck_3345_;
goto v_resetjp_3339_;
}
v_resetjp_3339_:
{
lean_object* v___x_3343_; 
if (v_isShared_3341_ == 0)
{
v___x_3343_ = v___x_3340_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v_a_3338_);
v___x_3343_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
return v___x_3343_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3193_, 2);
return v___x_3299_;
}
}
case 5:
{
lean_object* v_fn_3348_; lean_object* v_arg_3349_; lean_object* v___x_3350_; 
v_fn_3348_ = lean_ctor_get(v_e_3193_, 0);
v_arg_3349_ = lean_ctor_get(v_e_3193_, 1);
lean_inc_ref(v_fn_3348_);
v___x_3350_ = l_LeanExport_dumpExprAux(v_fn_3348_, v_a_3194_, v_a_3195_);
if (lean_obj_tag(v___x_3350_) == 0)
{
lean_object* v_a_3351_; lean_object* v___x_3353_; uint8_t v_isShared_3354_; uint8_t v_isSharedCheck_3397_; 
v_a_3351_ = lean_ctor_get(v___x_3350_, 0);
v_isSharedCheck_3397_ = !lean_is_exclusive(v___x_3350_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3353_ = v___x_3350_;
v_isShared_3354_ = v_isSharedCheck_3397_;
goto v_resetjp_3352_;
}
else
{
lean_inc(v_a_3351_);
lean_dec(v___x_3350_);
v___x_3353_ = lean_box(0);
v_isShared_3354_ = v_isSharedCheck_3397_;
goto v_resetjp_3352_;
}
v_resetjp_3352_:
{
lean_object* v_fst_3355_; lean_object* v_snd_3356_; lean_object* v___x_3358_; uint8_t v_isShared_3359_; uint8_t v_isSharedCheck_3396_; 
v_fst_3355_ = lean_ctor_get(v_a_3351_, 0);
v_snd_3356_ = lean_ctor_get(v_a_3351_, 1);
v_isSharedCheck_3396_ = !lean_is_exclusive(v_a_3351_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3358_ = v_a_3351_;
v_isShared_3359_ = v_isSharedCheck_3396_;
goto v_resetjp_3357_;
}
else
{
lean_inc(v_snd_3356_);
lean_inc(v_fst_3355_);
lean_dec(v_a_3351_);
v___x_3358_ = lean_box(0);
v_isShared_3359_ = v_isSharedCheck_3396_;
goto v_resetjp_3357_;
}
v_resetjp_3357_:
{
lean_object* v___x_3360_; 
lean_inc_ref(v_arg_3349_);
v___x_3360_ = l_LeanExport_dumpExprAux(v_arg_3349_, v_a_3194_, v_snd_3356_);
if (lean_obj_tag(v___x_3360_) == 0)
{
lean_object* v_a_3361_; lean_object* v___x_3363_; uint8_t v_isShared_3364_; uint8_t v_isSharedCheck_3395_; 
v_a_3361_ = lean_ctor_get(v___x_3360_, 0);
v_isSharedCheck_3395_ = !lean_is_exclusive(v___x_3360_);
if (v_isSharedCheck_3395_ == 0)
{
v___x_3363_ = v___x_3360_;
v_isShared_3364_ = v_isSharedCheck_3395_;
goto v_resetjp_3362_;
}
else
{
lean_inc(v_a_3361_);
lean_dec(v___x_3360_);
v___x_3363_ = lean_box(0);
v_isShared_3364_ = v_isSharedCheck_3395_;
goto v_resetjp_3362_;
}
v_resetjp_3362_:
{
lean_object* v_fst_3365_; lean_object* v_snd_3366_; lean_object* v___x_3368_; uint8_t v_isShared_3369_; uint8_t v_isSharedCheck_3394_; 
v_fst_3365_ = lean_ctor_get(v_a_3361_, 0);
v_snd_3366_ = lean_ctor_get(v_a_3361_, 1);
v_isSharedCheck_3394_ = !lean_is_exclusive(v_a_3361_);
if (v_isSharedCheck_3394_ == 0)
{
v___x_3368_ = v_a_3361_;
v_isShared_3369_ = v_isSharedCheck_3394_;
goto v_resetjp_3367_;
}
else
{
lean_inc(v_snd_3366_);
lean_inc(v_fst_3365_);
lean_dec(v_a_3361_);
v___x_3368_ = lean_box(0);
v_isShared_3369_ = v_isSharedCheck_3394_;
goto v_resetjp_3367_;
}
v_resetjp_3367_:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3374_; 
v___x_3370_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__5));
v___x_3371_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__6));
v___x_3372_ = l_Lean_JsonNumber_fromNat(v_fst_3355_);
if (v_isShared_3364_ == 0)
{
lean_ctor_set_tag(v___x_3363_, 2);
lean_ctor_set(v___x_3363_, 0, v___x_3372_);
v___x_3374_ = v___x_3363_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3393_; 
v_reuseFailAlloc_3393_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3393_, 0, v___x_3372_);
v___x_3374_ = v_reuseFailAlloc_3393_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
lean_object* v___x_3376_; 
if (v_isShared_3369_ == 0)
{
lean_ctor_set(v___x_3368_, 1, v___x_3374_);
lean_ctor_set(v___x_3368_, 0, v___x_3371_);
v___x_3376_ = v___x_3368_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v___x_3371_);
lean_ctor_set(v_reuseFailAlloc_3392_, 1, v___x_3374_);
v___x_3376_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3380_; 
v___x_3377_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__7));
v___x_3378_ = l_Lean_JsonNumber_fromNat(v_fst_3365_);
if (v_isShared_3354_ == 0)
{
lean_ctor_set_tag(v___x_3353_, 2);
lean_ctor_set(v___x_3353_, 0, v___x_3378_);
v___x_3380_ = v___x_3353_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3391_; 
v_reuseFailAlloc_3391_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3391_, 0, v___x_3378_);
v___x_3380_ = v_reuseFailAlloc_3391_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
lean_object* v___x_3382_; 
if (v_isShared_3359_ == 0)
{
lean_ctor_set(v___x_3358_, 1, v___x_3380_);
lean_ctor_set(v___x_3358_, 0, v___x_3377_);
v___x_3382_ = v___x_3358_;
goto v_reusejp_3381_;
}
else
{
lean_object* v_reuseFailAlloc_3390_; 
v_reuseFailAlloc_3390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3390_, 0, v___x_3377_);
lean_ctor_set(v_reuseFailAlloc_3390_, 1, v___x_3380_);
v___x_3382_ = v_reuseFailAlloc_3390_;
goto v_reusejp_3381_;
}
v_reusejp_3381_:
{
lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; 
v___x_3383_ = lean_box(0);
v___x_3384_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3384_, 0, v___x_3382_);
lean_ctor_set(v___x_3384_, 1, v___x_3383_);
v___x_3385_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3385_, 0, v___x_3376_);
lean_ctor_set(v___x_3385_, 1, v___x_3384_);
v___x_3386_ = l_Lean_Json_mkObj(v___x_3385_);
lean_dec_ref_known(v___x_3385_, 2);
v___x_3387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3387_, 0, v___x_3370_);
lean_ctor_set(v___x_3387_, 1, v___x_3386_);
v___x_3388_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3388_, 0, v___x_3387_);
lean_ctor_set(v___x_3388_, 1, v___x_3383_);
v___x_3389_ = l_Lean_Json_mkObj(v___x_3388_);
lean_dec_ref_known(v___x_3388_, 2);
v_fst_3254_ = v___x_3389_;
v_snd_3255_ = v_snd_3366_;
goto v___jp_3253_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_3358_);
lean_dec(v_fst_3355_);
lean_del_object(v___x_3353_);
lean_dec_ref_known(v_e_3193_, 2);
return v___x_3360_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3193_, 2);
return v___x_3350_;
}
}
case 6:
{
lean_object* v_binderName_3398_; lean_object* v_binderType_3399_; lean_object* v_body_3400_; uint8_t v_binderInfo_3401_; lean_object* v___x_3402_; 
v_binderName_3398_ = lean_ctor_get(v_e_3193_, 0);
v_binderType_3399_ = lean_ctor_get(v_e_3193_, 1);
v_body_3400_ = lean_ctor_get(v_e_3193_, 2);
v_binderInfo_3401_ = lean_ctor_get_uint8(v_e_3193_, sizeof(void*)*3 + 8);
lean_inc(v_binderName_3398_);
v___x_3402_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_binderName_3398_, v_a_3194_, v_a_3195_);
if (lean_obj_tag(v___x_3402_) == 0)
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3474_; 
v_a_3403_ = lean_ctor_get(v___x_3402_, 0);
v_isSharedCheck_3474_ = !lean_is_exclusive(v___x_3402_);
if (v_isSharedCheck_3474_ == 0)
{
v___x_3405_ = v___x_3402_;
v_isShared_3406_ = v_isSharedCheck_3474_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3402_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3474_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v_fst_3407_; lean_object* v_snd_3408_; lean_object* v___x_3410_; uint8_t v_isShared_3411_; uint8_t v_isSharedCheck_3473_; 
v_fst_3407_ = lean_ctor_get(v_a_3403_, 0);
v_snd_3408_ = lean_ctor_get(v_a_3403_, 1);
v_isSharedCheck_3473_ = !lean_is_exclusive(v_a_3403_);
if (v_isSharedCheck_3473_ == 0)
{
v___x_3410_ = v_a_3403_;
v_isShared_3411_ = v_isSharedCheck_3473_;
goto v_resetjp_3409_;
}
else
{
lean_inc(v_snd_3408_);
lean_inc(v_fst_3407_);
lean_dec(v_a_3403_);
v___x_3410_ = lean_box(0);
v_isShared_3411_ = v_isSharedCheck_3473_;
goto v_resetjp_3409_;
}
v_resetjp_3409_:
{
lean_object* v___x_3412_; 
lean_inc_ref(v_binderType_3399_);
v___x_3412_ = l_LeanExport_dumpExprAux(v_binderType_3399_, v_a_3194_, v_snd_3408_);
if (lean_obj_tag(v___x_3412_) == 0)
{
lean_object* v_a_3413_; lean_object* v___x_3415_; uint8_t v_isShared_3416_; uint8_t v_isSharedCheck_3472_; 
v_a_3413_ = lean_ctor_get(v___x_3412_, 0);
v_isSharedCheck_3472_ = !lean_is_exclusive(v___x_3412_);
if (v_isSharedCheck_3472_ == 0)
{
v___x_3415_ = v___x_3412_;
v_isShared_3416_ = v_isSharedCheck_3472_;
goto v_resetjp_3414_;
}
else
{
lean_inc(v_a_3413_);
lean_dec(v___x_3412_);
v___x_3415_ = lean_box(0);
v_isShared_3416_ = v_isSharedCheck_3472_;
goto v_resetjp_3414_;
}
v_resetjp_3414_:
{
lean_object* v_fst_3417_; lean_object* v_snd_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3471_; 
v_fst_3417_ = lean_ctor_get(v_a_3413_, 0);
v_snd_3418_ = lean_ctor_get(v_a_3413_, 1);
v_isSharedCheck_3471_ = !lean_is_exclusive(v_a_3413_);
if (v_isSharedCheck_3471_ == 0)
{
v___x_3420_ = v_a_3413_;
v_isShared_3421_ = v_isSharedCheck_3471_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_snd_3418_);
lean_inc(v_fst_3417_);
lean_dec(v_a_3413_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3471_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
lean_object* v___x_3422_; 
lean_inc_ref(v_body_3400_);
v___x_3422_ = l_LeanExport_dumpExprAux(v_body_3400_, v_a_3194_, v_snd_3418_);
if (lean_obj_tag(v___x_3422_) == 0)
{
lean_object* v_a_3423_; lean_object* v___x_3425_; uint8_t v_isShared_3426_; uint8_t v_isSharedCheck_3470_; 
v_a_3423_ = lean_ctor_get(v___x_3422_, 0);
v_isSharedCheck_3470_ = !lean_is_exclusive(v___x_3422_);
if (v_isSharedCheck_3470_ == 0)
{
v___x_3425_ = v___x_3422_;
v_isShared_3426_ = v_isSharedCheck_3470_;
goto v_resetjp_3424_;
}
else
{
lean_inc(v_a_3423_);
lean_dec(v___x_3422_);
v___x_3425_ = lean_box(0);
v_isShared_3426_ = v_isSharedCheck_3470_;
goto v_resetjp_3424_;
}
v_resetjp_3424_:
{
lean_object* v_fst_3427_; lean_object* v_snd_3428_; lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3469_; 
v_fst_3427_ = lean_ctor_get(v_a_3423_, 0);
v_snd_3428_ = lean_ctor_get(v_a_3423_, 1);
v_isSharedCheck_3469_ = !lean_is_exclusive(v_a_3423_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3430_ = v_a_3423_;
v_isShared_3431_ = v_isSharedCheck_3469_;
goto v_resetjp_3429_;
}
else
{
lean_inc(v_snd_3428_);
lean_inc(v_fst_3427_);
lean_dec(v_a_3423_);
v___x_3430_ = lean_box(0);
v_isShared_3431_ = v_isSharedCheck_3469_;
goto v_resetjp_3429_;
}
v_resetjp_3429_:
{
lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3436_; 
v___x_3432_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__8));
v___x_3433_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_3434_ = l_Lean_JsonNumber_fromNat(v_fst_3407_);
if (v_isShared_3426_ == 0)
{
lean_ctor_set_tag(v___x_3425_, 2);
lean_ctor_set(v___x_3425_, 0, v___x_3434_);
v___x_3436_ = v___x_3425_;
goto v_reusejp_3435_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v___x_3434_);
v___x_3436_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3435_;
}
v_reusejp_3435_:
{
lean_object* v___x_3438_; 
if (v_isShared_3431_ == 0)
{
lean_ctor_set(v___x_3430_, 1, v___x_3436_);
lean_ctor_set(v___x_3430_, 0, v___x_3433_);
v___x_3438_ = v___x_3430_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v___x_3433_);
lean_ctor_set(v_reuseFailAlloc_3467_, 1, v___x_3436_);
v___x_3438_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3442_; 
v___x_3439_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3440_ = l_Lean_JsonNumber_fromNat(v_fst_3417_);
if (v_isShared_3416_ == 0)
{
lean_ctor_set_tag(v___x_3415_, 2);
lean_ctor_set(v___x_3415_, 0, v___x_3440_);
v___x_3442_ = v___x_3415_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v___x_3440_);
v___x_3442_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
lean_object* v___x_3444_; 
if (v_isShared_3421_ == 0)
{
lean_ctor_set(v___x_3420_, 1, v___x_3442_);
lean_ctor_set(v___x_3420_, 0, v___x_3439_);
v___x_3444_ = v___x_3420_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v___x_3439_);
lean_ctor_set(v_reuseFailAlloc_3465_, 1, v___x_3442_);
v___x_3444_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3448_; 
v___x_3445_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__9));
v___x_3446_ = l_Lean_JsonNumber_fromNat(v_fst_3427_);
if (v_isShared_3406_ == 0)
{
lean_ctor_set_tag(v___x_3405_, 2);
lean_ctor_set(v___x_3405_, 0, v___x_3446_);
v___x_3448_ = v___x_3405_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v___x_3446_);
v___x_3448_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
lean_object* v___x_3450_; 
if (v_isShared_3411_ == 0)
{
lean_ctor_set(v___x_3410_, 1, v___x_3448_);
lean_ctor_set(v___x_3410_, 0, v___x_3445_);
v___x_3450_ = v___x_3410_;
goto v_reusejp_3449_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v___x_3445_);
lean_ctor_set(v_reuseFailAlloc_3463_, 1, v___x_3448_);
v___x_3450_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3449_;
}
v_reusejp_3449_:
{
lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; 
v___x_3451_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__10));
v___x_3452_ = l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(v_binderInfo_3401_);
v___x_3453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3453_, 0, v___x_3451_);
lean_ctor_set(v___x_3453_, 1, v___x_3452_);
v___x_3454_ = lean_box(0);
v___x_3455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3455_, 0, v___x_3453_);
lean_ctor_set(v___x_3455_, 1, v___x_3454_);
v___x_3456_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3456_, 0, v___x_3450_);
lean_ctor_set(v___x_3456_, 1, v___x_3455_);
v___x_3457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3444_);
lean_ctor_set(v___x_3457_, 1, v___x_3456_);
v___x_3458_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3458_, 0, v___x_3438_);
lean_ctor_set(v___x_3458_, 1, v___x_3457_);
v___x_3459_ = l_Lean_Json_mkObj(v___x_3458_);
lean_dec_ref_known(v___x_3458_, 2);
v___x_3460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3432_);
lean_ctor_set(v___x_3460_, 1, v___x_3459_);
v___x_3461_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3461_, 0, v___x_3460_);
lean_ctor_set(v___x_3461_, 1, v___x_3454_);
v___x_3462_ = l_Lean_Json_mkObj(v___x_3461_);
lean_dec_ref_known(v___x_3461_, 2);
v_fst_3254_ = v___x_3462_;
v_snd_3255_ = v_snd_3428_;
goto v___jp_3253_;
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
lean_del_object(v___x_3420_);
lean_dec(v_fst_3417_);
lean_del_object(v___x_3415_);
lean_del_object(v___x_3410_);
lean_dec(v_fst_3407_);
lean_del_object(v___x_3405_);
lean_dec_ref_known(v_e_3193_, 3);
return v___x_3422_;
}
}
}
}
else
{
lean_del_object(v___x_3410_);
lean_dec(v_fst_3407_);
lean_del_object(v___x_3405_);
lean_dec_ref_known(v_e_3193_, 3);
return v___x_3412_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3193_, 3);
return v___x_3402_;
}
}
case 7:
{
lean_object* v_binderName_3475_; lean_object* v_binderType_3476_; lean_object* v_body_3477_; uint8_t v_binderInfo_3478_; lean_object* v___x_3479_; 
v_binderName_3475_ = lean_ctor_get(v_e_3193_, 0);
v_binderType_3476_ = lean_ctor_get(v_e_3193_, 1);
v_body_3477_ = lean_ctor_get(v_e_3193_, 2);
v_binderInfo_3478_ = lean_ctor_get_uint8(v_e_3193_, sizeof(void*)*3 + 8);
lean_inc(v_binderName_3475_);
v___x_3479_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_binderName_3475_, v_a_3194_, v_a_3195_);
if (lean_obj_tag(v___x_3479_) == 0)
{
lean_object* v_a_3480_; lean_object* v___x_3482_; uint8_t v_isShared_3483_; uint8_t v_isSharedCheck_3551_; 
v_a_3480_ = lean_ctor_get(v___x_3479_, 0);
v_isSharedCheck_3551_ = !lean_is_exclusive(v___x_3479_);
if (v_isSharedCheck_3551_ == 0)
{
v___x_3482_ = v___x_3479_;
v_isShared_3483_ = v_isSharedCheck_3551_;
goto v_resetjp_3481_;
}
else
{
lean_inc(v_a_3480_);
lean_dec(v___x_3479_);
v___x_3482_ = lean_box(0);
v_isShared_3483_ = v_isSharedCheck_3551_;
goto v_resetjp_3481_;
}
v_resetjp_3481_:
{
lean_object* v_fst_3484_; lean_object* v_snd_3485_; lean_object* v___x_3487_; uint8_t v_isShared_3488_; uint8_t v_isSharedCheck_3550_; 
v_fst_3484_ = lean_ctor_get(v_a_3480_, 0);
v_snd_3485_ = lean_ctor_get(v_a_3480_, 1);
v_isSharedCheck_3550_ = !lean_is_exclusive(v_a_3480_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3487_ = v_a_3480_;
v_isShared_3488_ = v_isSharedCheck_3550_;
goto v_resetjp_3486_;
}
else
{
lean_inc(v_snd_3485_);
lean_inc(v_fst_3484_);
lean_dec(v_a_3480_);
v___x_3487_ = lean_box(0);
v_isShared_3488_ = v_isSharedCheck_3550_;
goto v_resetjp_3486_;
}
v_resetjp_3486_:
{
lean_object* v___x_3489_; 
lean_inc_ref(v_binderType_3476_);
v___x_3489_ = l_LeanExport_dumpExprAux(v_binderType_3476_, v_a_3194_, v_snd_3485_);
if (lean_obj_tag(v___x_3489_) == 0)
{
lean_object* v_a_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3549_; 
v_a_3490_ = lean_ctor_get(v___x_3489_, 0);
v_isSharedCheck_3549_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3549_ == 0)
{
v___x_3492_ = v___x_3489_;
v_isShared_3493_ = v_isSharedCheck_3549_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_a_3490_);
lean_dec(v___x_3489_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3549_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v_fst_3494_; lean_object* v_snd_3495_; lean_object* v___x_3497_; uint8_t v_isShared_3498_; uint8_t v_isSharedCheck_3548_; 
v_fst_3494_ = lean_ctor_get(v_a_3490_, 0);
v_snd_3495_ = lean_ctor_get(v_a_3490_, 1);
v_isSharedCheck_3548_ = !lean_is_exclusive(v_a_3490_);
if (v_isSharedCheck_3548_ == 0)
{
v___x_3497_ = v_a_3490_;
v_isShared_3498_ = v_isSharedCheck_3548_;
goto v_resetjp_3496_;
}
else
{
lean_inc(v_snd_3495_);
lean_inc(v_fst_3494_);
lean_dec(v_a_3490_);
v___x_3497_ = lean_box(0);
v_isShared_3498_ = v_isSharedCheck_3548_;
goto v_resetjp_3496_;
}
v_resetjp_3496_:
{
lean_object* v___x_3499_; 
lean_inc_ref(v_body_3477_);
v___x_3499_ = l_LeanExport_dumpExprAux(v_body_3477_, v_a_3194_, v_snd_3495_);
if (lean_obj_tag(v___x_3499_) == 0)
{
lean_object* v_a_3500_; lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3547_; 
v_a_3500_ = lean_ctor_get(v___x_3499_, 0);
v_isSharedCheck_3547_ = !lean_is_exclusive(v___x_3499_);
if (v_isSharedCheck_3547_ == 0)
{
v___x_3502_ = v___x_3499_;
v_isShared_3503_ = v_isSharedCheck_3547_;
goto v_resetjp_3501_;
}
else
{
lean_inc(v_a_3500_);
lean_dec(v___x_3499_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3547_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
lean_object* v_fst_3504_; lean_object* v_snd_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3546_; 
v_fst_3504_ = lean_ctor_get(v_a_3500_, 0);
v_snd_3505_ = lean_ctor_get(v_a_3500_, 1);
v_isSharedCheck_3546_ = !lean_is_exclusive(v_a_3500_);
if (v_isSharedCheck_3546_ == 0)
{
v___x_3507_ = v_a_3500_;
v_isShared_3508_ = v_isSharedCheck_3546_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_snd_3505_);
lean_inc(v_fst_3504_);
lean_dec(v_a_3500_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3546_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3513_; 
v___x_3509_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__11));
v___x_3510_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_3511_ = l_Lean_JsonNumber_fromNat(v_fst_3484_);
if (v_isShared_3503_ == 0)
{
lean_ctor_set_tag(v___x_3502_, 2);
lean_ctor_set(v___x_3502_, 0, v___x_3511_);
v___x_3513_ = v___x_3502_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3545_; 
v_reuseFailAlloc_3545_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3545_, 0, v___x_3511_);
v___x_3513_ = v_reuseFailAlloc_3545_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
lean_object* v___x_3515_; 
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 1, v___x_3513_);
lean_ctor_set(v___x_3507_, 0, v___x_3510_);
v___x_3515_ = v___x_3507_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3544_; 
v_reuseFailAlloc_3544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3544_, 0, v___x_3510_);
lean_ctor_set(v_reuseFailAlloc_3544_, 1, v___x_3513_);
v___x_3515_ = v_reuseFailAlloc_3544_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3519_; 
v___x_3516_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3517_ = l_Lean_JsonNumber_fromNat(v_fst_3494_);
if (v_isShared_3493_ == 0)
{
lean_ctor_set_tag(v___x_3492_, 2);
lean_ctor_set(v___x_3492_, 0, v___x_3517_);
v___x_3519_ = v___x_3492_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v___x_3517_);
v___x_3519_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3518_;
}
v_reusejp_3518_:
{
lean_object* v___x_3521_; 
if (v_isShared_3498_ == 0)
{
lean_ctor_set(v___x_3497_, 1, v___x_3519_);
lean_ctor_set(v___x_3497_, 0, v___x_3516_);
v___x_3521_ = v___x_3497_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v___x_3516_);
lean_ctor_set(v_reuseFailAlloc_3542_, 1, v___x_3519_);
v___x_3521_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3525_; 
v___x_3522_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__9));
v___x_3523_ = l_Lean_JsonNumber_fromNat(v_fst_3504_);
if (v_isShared_3483_ == 0)
{
lean_ctor_set_tag(v___x_3482_, 2);
lean_ctor_set(v___x_3482_, 0, v___x_3523_);
v___x_3525_ = v___x_3482_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v___x_3523_);
v___x_3525_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
lean_object* v___x_3527_; 
if (v_isShared_3488_ == 0)
{
lean_ctor_set(v___x_3487_, 1, v___x_3525_);
lean_ctor_set(v___x_3487_, 0, v___x_3522_);
v___x_3527_ = v___x_3487_;
goto v_reusejp_3526_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v___x_3522_);
lean_ctor_set(v_reuseFailAlloc_3540_, 1, v___x_3525_);
v___x_3527_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3526_;
}
v_reusejp_3526_:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; 
v___x_3528_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__10));
v___x_3529_ = l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(v_binderInfo_3478_);
v___x_3530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3530_, 0, v___x_3528_);
lean_ctor_set(v___x_3530_, 1, v___x_3529_);
v___x_3531_ = lean_box(0);
v___x_3532_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3532_, 0, v___x_3530_);
lean_ctor_set(v___x_3532_, 1, v___x_3531_);
v___x_3533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3527_);
lean_ctor_set(v___x_3533_, 1, v___x_3532_);
v___x_3534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3521_);
lean_ctor_set(v___x_3534_, 1, v___x_3533_);
v___x_3535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3535_, 0, v___x_3515_);
lean_ctor_set(v___x_3535_, 1, v___x_3534_);
v___x_3536_ = l_Lean_Json_mkObj(v___x_3535_);
lean_dec_ref_known(v___x_3535_, 2);
v___x_3537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3509_);
lean_ctor_set(v___x_3537_, 1, v___x_3536_);
v___x_3538_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3538_, 0, v___x_3537_);
lean_ctor_set(v___x_3538_, 1, v___x_3531_);
v___x_3539_ = l_Lean_Json_mkObj(v___x_3538_);
lean_dec_ref_known(v___x_3538_, 2);
v_fst_3254_ = v___x_3539_;
v_snd_3255_ = v_snd_3505_;
goto v___jp_3253_;
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
lean_del_object(v___x_3497_);
lean_dec(v_fst_3494_);
lean_del_object(v___x_3492_);
lean_del_object(v___x_3487_);
lean_dec(v_fst_3484_);
lean_del_object(v___x_3482_);
lean_dec_ref_known(v_e_3193_, 3);
return v___x_3499_;
}
}
}
}
else
{
lean_del_object(v___x_3487_);
lean_dec(v_fst_3484_);
lean_del_object(v___x_3482_);
lean_dec_ref_known(v_e_3193_, 3);
return v___x_3489_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3193_, 3);
return v___x_3479_;
}
}
case 8:
{
lean_object* v_declName_3552_; lean_object* v_type_3553_; lean_object* v_value_3554_; lean_object* v_body_3555_; uint8_t v_nondep_3556_; lean_object* v___x_3557_; 
v_declName_3552_ = lean_ctor_get(v_e_3193_, 0);
v_type_3553_ = lean_ctor_get(v_e_3193_, 1);
v_value_3554_ = lean_ctor_get(v_e_3193_, 2);
v_body_3555_ = lean_ctor_get(v_e_3193_, 3);
v_nondep_3556_ = lean_ctor_get_uint8(v_e_3193_, sizeof(void*)*4 + 8);
lean_inc(v_declName_3552_);
v___x_3557_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_declName_3552_, v_a_3194_, v_a_3195_);
if (lean_obj_tag(v___x_3557_) == 0)
{
lean_object* v_a_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3650_; 
v_a_3558_ = lean_ctor_get(v___x_3557_, 0);
v_isSharedCheck_3650_ = !lean_is_exclusive(v___x_3557_);
if (v_isSharedCheck_3650_ == 0)
{
v___x_3560_ = v___x_3557_;
v_isShared_3561_ = v_isSharedCheck_3650_;
goto v_resetjp_3559_;
}
else
{
lean_inc(v_a_3558_);
lean_dec(v___x_3557_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3650_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v_fst_3562_; lean_object* v_snd_3563_; lean_object* v___x_3565_; uint8_t v_isShared_3566_; uint8_t v_isSharedCheck_3649_; 
v_fst_3562_ = lean_ctor_get(v_a_3558_, 0);
v_snd_3563_ = lean_ctor_get(v_a_3558_, 1);
v_isSharedCheck_3649_ = !lean_is_exclusive(v_a_3558_);
if (v_isSharedCheck_3649_ == 0)
{
v___x_3565_ = v_a_3558_;
v_isShared_3566_ = v_isSharedCheck_3649_;
goto v_resetjp_3564_;
}
else
{
lean_inc(v_snd_3563_);
lean_inc(v_fst_3562_);
lean_dec(v_a_3558_);
v___x_3565_ = lean_box(0);
v_isShared_3566_ = v_isSharedCheck_3649_;
goto v_resetjp_3564_;
}
v_resetjp_3564_:
{
lean_object* v___x_3567_; 
lean_inc_ref(v_type_3553_);
v___x_3567_ = l_LeanExport_dumpExprAux(v_type_3553_, v_a_3194_, v_snd_3563_);
if (lean_obj_tag(v___x_3567_) == 0)
{
lean_object* v_a_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3648_; 
v_a_3568_ = lean_ctor_get(v___x_3567_, 0);
v_isSharedCheck_3648_ = !lean_is_exclusive(v___x_3567_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3570_ = v___x_3567_;
v_isShared_3571_ = v_isSharedCheck_3648_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_a_3568_);
lean_dec(v___x_3567_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3648_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v_fst_3572_; lean_object* v_snd_3573_; lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3647_; 
v_fst_3572_ = lean_ctor_get(v_a_3568_, 0);
v_snd_3573_ = lean_ctor_get(v_a_3568_, 1);
v_isSharedCheck_3647_ = !lean_is_exclusive(v_a_3568_);
if (v_isSharedCheck_3647_ == 0)
{
v___x_3575_ = v_a_3568_;
v_isShared_3576_ = v_isSharedCheck_3647_;
goto v_resetjp_3574_;
}
else
{
lean_inc(v_snd_3573_);
lean_inc(v_fst_3572_);
lean_dec(v_a_3568_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3647_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
lean_object* v___x_3577_; 
lean_inc_ref(v_value_3554_);
v___x_3577_ = l_LeanExport_dumpExprAux(v_value_3554_, v_a_3194_, v_snd_3573_);
if (lean_obj_tag(v___x_3577_) == 0)
{
lean_object* v_a_3578_; lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3646_; 
v_a_3578_ = lean_ctor_get(v___x_3577_, 0);
v_isSharedCheck_3646_ = !lean_is_exclusive(v___x_3577_);
if (v_isSharedCheck_3646_ == 0)
{
v___x_3580_ = v___x_3577_;
v_isShared_3581_ = v_isSharedCheck_3646_;
goto v_resetjp_3579_;
}
else
{
lean_inc(v_a_3578_);
lean_dec(v___x_3577_);
v___x_3580_ = lean_box(0);
v_isShared_3581_ = v_isSharedCheck_3646_;
goto v_resetjp_3579_;
}
v_resetjp_3579_:
{
lean_object* v_fst_3582_; lean_object* v_snd_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3645_; 
v_fst_3582_ = lean_ctor_get(v_a_3578_, 0);
v_snd_3583_ = lean_ctor_get(v_a_3578_, 1);
v_isSharedCheck_3645_ = !lean_is_exclusive(v_a_3578_);
if (v_isSharedCheck_3645_ == 0)
{
v___x_3585_ = v_a_3578_;
v_isShared_3586_ = v_isSharedCheck_3645_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_snd_3583_);
lean_inc(v_fst_3582_);
lean_dec(v_a_3578_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3645_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3587_; 
lean_inc_ref(v_body_3555_);
v___x_3587_ = l_LeanExport_dumpExprAux(v_body_3555_, v_a_3194_, v_snd_3583_);
if (lean_obj_tag(v___x_3587_) == 0)
{
lean_object* v_a_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3644_; 
v_a_3588_ = lean_ctor_get(v___x_3587_, 0);
v_isSharedCheck_3644_ = !lean_is_exclusive(v___x_3587_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3590_ = v___x_3587_;
v_isShared_3591_ = v_isSharedCheck_3644_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_a_3588_);
lean_dec(v___x_3587_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3644_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v_fst_3592_; lean_object* v_snd_3593_; lean_object* v___x_3595_; uint8_t v_isShared_3596_; uint8_t v_isSharedCheck_3643_; 
v_fst_3592_ = lean_ctor_get(v_a_3588_, 0);
v_snd_3593_ = lean_ctor_get(v_a_3588_, 1);
v_isSharedCheck_3643_ = !lean_is_exclusive(v_a_3588_);
if (v_isSharedCheck_3643_ == 0)
{
v___x_3595_ = v_a_3588_;
v_isShared_3596_ = v_isSharedCheck_3643_;
goto v_resetjp_3594_;
}
else
{
lean_inc(v_snd_3593_);
lean_inc(v_fst_3592_);
lean_dec(v_a_3588_);
v___x_3595_ = lean_box(0);
v_isShared_3596_ = v_isSharedCheck_3643_;
goto v_resetjp_3594_;
}
v_resetjp_3594_:
{
lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3601_; 
v___x_3597_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__12));
v___x_3598_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_3599_ = l_Lean_JsonNumber_fromNat(v_fst_3562_);
if (v_isShared_3591_ == 0)
{
lean_ctor_set_tag(v___x_3590_, 2);
lean_ctor_set(v___x_3590_, 0, v___x_3599_);
v___x_3601_ = v___x_3590_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v___x_3599_);
v___x_3601_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
lean_object* v___x_3603_; 
if (v_isShared_3596_ == 0)
{
lean_ctor_set(v___x_3595_, 1, v___x_3601_);
lean_ctor_set(v___x_3595_, 0, v___x_3598_);
v___x_3603_ = v___x_3595_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v___x_3598_);
lean_ctor_set(v_reuseFailAlloc_3641_, 1, v___x_3601_);
v___x_3603_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3602_;
}
v_reusejp_3602_:
{
lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3607_; 
v___x_3604_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3605_ = l_Lean_JsonNumber_fromNat(v_fst_3572_);
if (v_isShared_3581_ == 0)
{
lean_ctor_set_tag(v___x_3580_, 2);
lean_ctor_set(v___x_3580_, 0, v___x_3605_);
v___x_3607_ = v___x_3580_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v___x_3605_);
v___x_3607_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
lean_object* v___x_3609_; 
if (v_isShared_3586_ == 0)
{
lean_ctor_set(v___x_3585_, 1, v___x_3607_);
lean_ctor_set(v___x_3585_, 0, v___x_3604_);
v___x_3609_ = v___x_3585_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v___x_3604_);
lean_ctor_set(v_reuseFailAlloc_3639_, 1, v___x_3607_);
v___x_3609_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3613_; 
v___x_3610_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_3611_ = l_Lean_JsonNumber_fromNat(v_fst_3582_);
if (v_isShared_3571_ == 0)
{
lean_ctor_set_tag(v___x_3570_, 2);
lean_ctor_set(v___x_3570_, 0, v___x_3611_);
v___x_3613_ = v___x_3570_;
goto v_reusejp_3612_;
}
else
{
lean_object* v_reuseFailAlloc_3638_; 
v_reuseFailAlloc_3638_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3638_, 0, v___x_3611_);
v___x_3613_ = v_reuseFailAlloc_3638_;
goto v_reusejp_3612_;
}
v_reusejp_3612_:
{
lean_object* v___x_3615_; 
if (v_isShared_3576_ == 0)
{
lean_ctor_set(v___x_3575_, 1, v___x_3613_);
lean_ctor_set(v___x_3575_, 0, v___x_3610_);
v___x_3615_ = v___x_3575_;
goto v_reusejp_3614_;
}
else
{
lean_object* v_reuseFailAlloc_3637_; 
v_reuseFailAlloc_3637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3637_, 0, v___x_3610_);
lean_ctor_set(v_reuseFailAlloc_3637_, 1, v___x_3613_);
v___x_3615_ = v_reuseFailAlloc_3637_;
goto v_reusejp_3614_;
}
v_reusejp_3614_:
{
lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3619_; 
v___x_3616_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__9));
v___x_3617_ = l_Lean_JsonNumber_fromNat(v_fst_3592_);
if (v_isShared_3561_ == 0)
{
lean_ctor_set_tag(v___x_3560_, 2);
lean_ctor_set(v___x_3560_, 0, v___x_3617_);
v___x_3619_ = v___x_3560_;
goto v_reusejp_3618_;
}
else
{
lean_object* v_reuseFailAlloc_3636_; 
v_reuseFailAlloc_3636_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3636_, 0, v___x_3617_);
v___x_3619_ = v_reuseFailAlloc_3636_;
goto v_reusejp_3618_;
}
v_reusejp_3618_:
{
lean_object* v___x_3621_; 
if (v_isShared_3566_ == 0)
{
lean_ctor_set(v___x_3565_, 1, v___x_3619_);
lean_ctor_set(v___x_3565_, 0, v___x_3616_);
v___x_3621_ = v___x_3565_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3635_; 
v_reuseFailAlloc_3635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3635_, 0, v___x_3616_);
lean_ctor_set(v_reuseFailAlloc_3635_, 1, v___x_3619_);
v___x_3621_ = v_reuseFailAlloc_3635_;
goto v_reusejp_3620_;
}
v_reusejp_3620_:
{
lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; 
v___x_3622_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__14));
v___x_3623_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3623_, 0, v_nondep_3556_);
v___x_3624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3622_);
lean_ctor_set(v___x_3624_, 1, v___x_3623_);
v___x_3625_ = lean_box(0);
v___x_3626_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3626_, 0, v___x_3624_);
lean_ctor_set(v___x_3626_, 1, v___x_3625_);
v___x_3627_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3627_, 0, v___x_3621_);
lean_ctor_set(v___x_3627_, 1, v___x_3626_);
v___x_3628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3628_, 0, v___x_3615_);
lean_ctor_set(v___x_3628_, 1, v___x_3627_);
v___x_3629_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3629_, 0, v___x_3609_);
lean_ctor_set(v___x_3629_, 1, v___x_3628_);
v___x_3630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3630_, 0, v___x_3603_);
lean_ctor_set(v___x_3630_, 1, v___x_3629_);
v___x_3631_ = l_Lean_Json_mkObj(v___x_3630_);
lean_dec_ref_known(v___x_3630_, 2);
v___x_3632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3632_, 0, v___x_3597_);
lean_ctor_set(v___x_3632_, 1, v___x_3631_);
v___x_3633_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3633_, 0, v___x_3632_);
lean_ctor_set(v___x_3633_, 1, v___x_3625_);
v___x_3634_ = l_Lean_Json_mkObj(v___x_3633_);
lean_dec_ref_known(v___x_3633_, 2);
v_fst_3254_ = v___x_3634_;
v_snd_3255_ = v_snd_3593_;
goto v___jp_3253_;
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
else
{
lean_del_object(v___x_3585_);
lean_dec(v_fst_3582_);
lean_del_object(v___x_3580_);
lean_del_object(v___x_3575_);
lean_dec(v_fst_3572_);
lean_del_object(v___x_3570_);
lean_del_object(v___x_3565_);
lean_dec(v_fst_3562_);
lean_del_object(v___x_3560_);
lean_dec_ref_known(v_e_3193_, 4);
return v___x_3587_;
}
}
}
}
else
{
lean_del_object(v___x_3575_);
lean_dec(v_fst_3572_);
lean_del_object(v___x_3570_);
lean_del_object(v___x_3565_);
lean_dec(v_fst_3562_);
lean_del_object(v___x_3560_);
lean_dec_ref_known(v_e_3193_, 4);
return v___x_3577_;
}
}
}
}
else
{
lean_del_object(v___x_3565_);
lean_dec(v_fst_3562_);
lean_del_object(v___x_3560_);
lean_dec_ref_known(v_e_3193_, 4);
return v___x_3567_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3193_, 4);
return v___x_3557_;
}
}
case 9:
{
lean_object* v_a_3651_; 
v_a_3651_ = lean_ctor_get(v_e_3193_, 0);
lean_inc_ref(v_a_3651_);
if (lean_obj_tag(v_a_3651_) == 0)
{
lean_object* v_val_3652_; lean_object* v___x_3654_; uint8_t v_isShared_3655_; uint8_t v_isSharedCheck_3683_; 
v_val_3652_ = lean_ctor_get(v_a_3651_, 0);
v_isSharedCheck_3683_ = !lean_is_exclusive(v_a_3651_);
if (v_isSharedCheck_3683_ == 0)
{
v___x_3654_ = v_a_3651_;
v_isShared_3655_ = v_isSharedCheck_3683_;
goto v_resetjp_3653_;
}
else
{
lean_inc(v_val_3652_);
lean_dec(v_a_3651_);
v___x_3654_ = lean_box(0);
v_isShared_3655_ = v_isSharedCheck_3683_;
goto v_resetjp_3653_;
}
v_resetjp_3653_:
{
lean_object* v___x_3656_; 
v___x_3656_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(v_a_3194_, v_a_3195_);
if (lean_obj_tag(v___x_3656_) == 0)
{
lean_object* v_a_3657_; lean_object* v_snd_3658_; lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3673_; 
v_a_3657_ = lean_ctor_get(v___x_3656_, 0);
lean_inc(v_a_3657_);
lean_dec_ref_known(v___x_3656_, 1);
v_snd_3658_ = lean_ctor_get(v_a_3657_, 1);
v_isSharedCheck_3673_ = !lean_is_exclusive(v_a_3657_);
if (v_isSharedCheck_3673_ == 0)
{
lean_object* v_unused_3674_; 
v_unused_3674_ = lean_ctor_get(v_a_3657_, 0);
lean_dec(v_unused_3674_);
v___x_3660_ = v_a_3657_;
v_isShared_3661_ = v_isSharedCheck_3673_;
goto v_resetjp_3659_;
}
else
{
lean_inc(v_snd_3658_);
lean_dec(v_a_3657_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3673_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3665_; 
v___x_3662_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__15));
v___x_3663_ = l_Nat_reprFast(v_val_3652_);
if (v_isShared_3655_ == 0)
{
lean_ctor_set_tag(v___x_3654_, 3);
lean_ctor_set(v___x_3654_, 0, v___x_3663_);
v___x_3665_ = v___x_3654_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v___x_3663_);
v___x_3665_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
lean_object* v___x_3667_; 
if (v_isShared_3661_ == 0)
{
lean_ctor_set(v___x_3660_, 1, v___x_3665_);
lean_ctor_set(v___x_3660_, 0, v___x_3662_);
v___x_3667_ = v___x_3660_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v___x_3662_);
lean_ctor_set(v_reuseFailAlloc_3671_, 1, v___x_3665_);
v___x_3667_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; 
v___x_3668_ = lean_box(0);
v___x_3669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3669_, 0, v___x_3667_);
lean_ctor_set(v___x_3669_, 1, v___x_3668_);
v___x_3670_ = l_Lean_Json_mkObj(v___x_3669_);
lean_dec_ref_known(v___x_3669_, 2);
v_fst_3254_ = v___x_3670_;
v_snd_3255_ = v_snd_3658_;
goto v___jp_3253_;
}
}
}
}
else
{
lean_object* v_a_3675_; lean_object* v___x_3677_; uint8_t v_isShared_3678_; uint8_t v_isSharedCheck_3682_; 
lean_del_object(v___x_3654_);
lean_dec(v_val_3652_);
lean_dec_ref_known(v_e_3193_, 1);
v_a_3675_ = lean_ctor_get(v___x_3656_, 0);
v_isSharedCheck_3682_ = !lean_is_exclusive(v___x_3656_);
if (v_isSharedCheck_3682_ == 0)
{
v___x_3677_ = v___x_3656_;
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
else
{
lean_inc(v_a_3675_);
lean_dec(v___x_3656_);
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
}
else
{
lean_object* v_val_3684_; lean_object* v___x_3686_; uint8_t v_isShared_3687_; uint8_t v_isSharedCheck_3714_; 
v_val_3684_ = lean_ctor_get(v_a_3651_, 0);
v_isSharedCheck_3714_ = !lean_is_exclusive(v_a_3651_);
if (v_isSharedCheck_3714_ == 0)
{
v___x_3686_ = v_a_3651_;
v_isShared_3687_ = v_isSharedCheck_3714_;
goto v_resetjp_3685_;
}
else
{
lean_inc(v_val_3684_);
lean_dec(v_a_3651_);
v___x_3686_ = lean_box(0);
v_isShared_3687_ = v_isSharedCheck_3714_;
goto v_resetjp_3685_;
}
v_resetjp_3685_:
{
lean_object* v___x_3688_; 
v___x_3688_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(v_a_3194_, v_a_3195_);
if (lean_obj_tag(v___x_3688_) == 0)
{
lean_object* v_a_3689_; lean_object* v_snd_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3704_; 
v_a_3689_ = lean_ctor_get(v___x_3688_, 0);
lean_inc(v_a_3689_);
lean_dec_ref_known(v___x_3688_, 1);
v_snd_3690_ = lean_ctor_get(v_a_3689_, 1);
v_isSharedCheck_3704_ = !lean_is_exclusive(v_a_3689_);
if (v_isSharedCheck_3704_ == 0)
{
lean_object* v_unused_3705_; 
v_unused_3705_ = lean_ctor_get(v_a_3689_, 0);
lean_dec(v_unused_3705_);
v___x_3692_ = v_a_3689_;
v_isShared_3693_ = v_isSharedCheck_3704_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_snd_3690_);
lean_dec(v_a_3689_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3704_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
lean_object* v___x_3694_; lean_object* v___x_3696_; 
v___x_3694_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__16));
if (v_isShared_3687_ == 0)
{
lean_ctor_set_tag(v___x_3686_, 3);
v___x_3696_ = v___x_3686_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3703_; 
v_reuseFailAlloc_3703_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3703_, 0, v_val_3684_);
v___x_3696_ = v_reuseFailAlloc_3703_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
lean_object* v___x_3698_; 
if (v_isShared_3693_ == 0)
{
lean_ctor_set(v___x_3692_, 1, v___x_3696_);
lean_ctor_set(v___x_3692_, 0, v___x_3694_);
v___x_3698_ = v___x_3692_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v___x_3694_);
lean_ctor_set(v_reuseFailAlloc_3702_, 1, v___x_3696_);
v___x_3698_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; 
v___x_3699_ = lean_box(0);
v___x_3700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3700_, 0, v___x_3698_);
lean_ctor_set(v___x_3700_, 1, v___x_3699_);
v___x_3701_ = l_Lean_Json_mkObj(v___x_3700_);
lean_dec_ref_known(v___x_3700_, 2);
v_fst_3254_ = v___x_3701_;
v_snd_3255_ = v_snd_3690_;
goto v___jp_3253_;
}
}
}
}
else
{
lean_object* v_a_3706_; lean_object* v___x_3708_; uint8_t v_isShared_3709_; uint8_t v_isSharedCheck_3713_; 
lean_del_object(v___x_3686_);
lean_dec_ref(v_val_3684_);
lean_dec_ref_known(v_e_3193_, 1);
v_a_3706_ = lean_ctor_get(v___x_3688_, 0);
v_isSharedCheck_3713_ = !lean_is_exclusive(v___x_3688_);
if (v_isSharedCheck_3713_ == 0)
{
v___x_3708_ = v___x_3688_;
v_isShared_3709_ = v_isSharedCheck_3713_;
goto v_resetjp_3707_;
}
else
{
lean_inc(v_a_3706_);
lean_dec(v___x_3688_);
v___x_3708_ = lean_box(0);
v_isShared_3709_ = v_isSharedCheck_3713_;
goto v_resetjp_3707_;
}
v_resetjp_3707_:
{
lean_object* v___x_3711_; 
if (v_isShared_3709_ == 0)
{
v___x_3711_ = v___x_3708_;
goto v_reusejp_3710_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v_a_3706_);
v___x_3711_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3710_;
}
v_reusejp_3710_:
{
return v___x_3711_;
}
}
}
}
}
}
case 10:
{
lean_object* v_data_3715_; lean_object* v_expr_3716_; lean_object* v___x_3717_; 
v_data_3715_ = lean_ctor_get(v_e_3193_, 0);
v_expr_3716_ = lean_ctor_get(v_e_3193_, 1);
lean_inc_ref(v_expr_3716_);
v___x_3717_ = l_LeanExport_dumpExprAux(v_expr_3716_, v_a_3194_, v_a_3195_);
if (lean_obj_tag(v___x_3717_) == 0)
{
lean_object* v_a_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3747_; 
v_a_3718_ = lean_ctor_get(v___x_3717_, 0);
v_isSharedCheck_3747_ = !lean_is_exclusive(v___x_3717_);
if (v_isSharedCheck_3747_ == 0)
{
v___x_3720_ = v___x_3717_;
v_isShared_3721_ = v_isSharedCheck_3747_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_a_3718_);
lean_dec(v___x_3717_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3747_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v_fst_3722_; lean_object* v_snd_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3746_; 
v_fst_3722_ = lean_ctor_get(v_a_3718_, 0);
v_snd_3723_ = lean_ctor_get(v_a_3718_, 1);
v_isSharedCheck_3746_ = !lean_is_exclusive(v_a_3718_);
if (v_isSharedCheck_3746_ == 0)
{
v___x_3725_ = v_a_3718_;
v_isShared_3726_ = v_isSharedCheck_3746_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_snd_3723_);
lean_inc(v_fst_3722_);
lean_dec(v_a_3718_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3746_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3731_; 
v___x_3727_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__17));
v___x_3728_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__18));
lean_inc(v_data_3715_);
v___x_3729_ = l___private_LeanExport_Basic_0__Lean_KVMap_toJson(v_data_3715_);
if (v_isShared_3726_ == 0)
{
lean_ctor_set(v___x_3725_, 1, v___x_3729_);
lean_ctor_set(v___x_3725_, 0, v___x_3728_);
v___x_3731_ = v___x_3725_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3745_; 
v_reuseFailAlloc_3745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3745_, 0, v___x_3728_);
lean_ctor_set(v_reuseFailAlloc_3745_, 1, v___x_3729_);
v___x_3731_ = v_reuseFailAlloc_3745_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3735_; 
v___x_3732_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__19));
v___x_3733_ = l_Lean_JsonNumber_fromNat(v_fst_3722_);
if (v_isShared_3721_ == 0)
{
lean_ctor_set_tag(v___x_3720_, 2);
lean_ctor_set(v___x_3720_, 0, v___x_3733_);
v___x_3735_ = v___x_3720_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3744_; 
v_reuseFailAlloc_3744_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3744_, 0, v___x_3733_);
v___x_3735_ = v_reuseFailAlloc_3744_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; 
v___x_3736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3736_, 0, v___x_3732_);
lean_ctor_set(v___x_3736_, 1, v___x_3735_);
v___x_3737_ = lean_box(0);
v___x_3738_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3738_, 0, v___x_3736_);
lean_ctor_set(v___x_3738_, 1, v___x_3737_);
v___x_3739_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3739_, 0, v___x_3731_);
lean_ctor_set(v___x_3739_, 1, v___x_3738_);
v___x_3740_ = l_Lean_Json_mkObj(v___x_3739_);
lean_dec_ref_known(v___x_3739_, 2);
v___x_3741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3741_, 0, v___x_3727_);
lean_ctor_set(v___x_3741_, 1, v___x_3740_);
v___x_3742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3741_);
lean_ctor_set(v___x_3742_, 1, v___x_3737_);
v___x_3743_ = l_Lean_Json_mkObj(v___x_3742_);
lean_dec_ref_known(v___x_3742_, 2);
v_fst_3254_ = v___x_3743_;
v_snd_3255_ = v_snd_3723_;
goto v___jp_3253_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3193_, 2);
return v___x_3717_;
}
}
case 11:
{
lean_object* v_typeName_3748_; lean_object* v_idx_3749_; lean_object* v_struct_3750_; lean_object* v___x_3751_; 
v_typeName_3748_ = lean_ctor_get(v_e_3193_, 0);
v_idx_3749_ = lean_ctor_get(v_e_3193_, 1);
v_struct_3750_ = lean_ctor_get(v_e_3193_, 2);
lean_inc(v_typeName_3748_);
v___x_3751_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_typeName_3748_, v_a_3194_, v_a_3195_);
if (lean_obj_tag(v___x_3751_) == 0)
{
lean_object* v_a_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3803_; 
v_a_3752_ = lean_ctor_get(v___x_3751_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3751_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3754_ = v___x_3751_;
v_isShared_3755_ = v_isSharedCheck_3803_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_a_3752_);
lean_dec(v___x_3751_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3803_;
goto v_resetjp_3753_;
}
v_resetjp_3753_:
{
lean_object* v_fst_3756_; lean_object* v_snd_3757_; lean_object* v___x_3759_; uint8_t v_isShared_3760_; uint8_t v_isSharedCheck_3802_; 
v_fst_3756_ = lean_ctor_get(v_a_3752_, 0);
v_snd_3757_ = lean_ctor_get(v_a_3752_, 1);
v_isSharedCheck_3802_ = !lean_is_exclusive(v_a_3752_);
if (v_isSharedCheck_3802_ == 0)
{
v___x_3759_ = v_a_3752_;
v_isShared_3760_ = v_isSharedCheck_3802_;
goto v_resetjp_3758_;
}
else
{
lean_inc(v_snd_3757_);
lean_inc(v_fst_3756_);
lean_dec(v_a_3752_);
v___x_3759_ = lean_box(0);
v_isShared_3760_ = v_isSharedCheck_3802_;
goto v_resetjp_3758_;
}
v_resetjp_3758_:
{
lean_object* v___x_3761_; 
lean_inc_ref(v_struct_3750_);
v___x_3761_ = l_LeanExport_dumpExprAux(v_struct_3750_, v_a_3194_, v_snd_3757_);
if (lean_obj_tag(v___x_3761_) == 0)
{
lean_object* v_a_3762_; lean_object* v___x_3764_; uint8_t v_isShared_3765_; uint8_t v_isSharedCheck_3801_; 
v_a_3762_ = lean_ctor_get(v___x_3761_, 0);
v_isSharedCheck_3801_ = !lean_is_exclusive(v___x_3761_);
if (v_isSharedCheck_3801_ == 0)
{
v___x_3764_ = v___x_3761_;
v_isShared_3765_ = v_isSharedCheck_3801_;
goto v_resetjp_3763_;
}
else
{
lean_inc(v_a_3762_);
lean_dec(v___x_3761_);
v___x_3764_ = lean_box(0);
v_isShared_3765_ = v_isSharedCheck_3801_;
goto v_resetjp_3763_;
}
v_resetjp_3763_:
{
lean_object* v_fst_3766_; lean_object* v_snd_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3800_; 
v_fst_3766_ = lean_ctor_get(v_a_3762_, 0);
v_snd_3767_ = lean_ctor_get(v_a_3762_, 1);
v_isSharedCheck_3800_ = !lean_is_exclusive(v_a_3762_);
if (v_isSharedCheck_3800_ == 0)
{
v___x_3769_ = v_a_3762_;
v_isShared_3770_ = v_isSharedCheck_3800_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_snd_3767_);
lean_inc(v_fst_3766_);
lean_dec(v_a_3762_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3800_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3775_; 
v___x_3771_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__20));
v___x_3772_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__21));
v___x_3773_ = l_Lean_JsonNumber_fromNat(v_fst_3756_);
if (v_isShared_3765_ == 0)
{
lean_ctor_set_tag(v___x_3764_, 2);
lean_ctor_set(v___x_3764_, 0, v___x_3773_);
v___x_3775_ = v___x_3764_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3799_; 
v_reuseFailAlloc_3799_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3799_, 0, v___x_3773_);
v___x_3775_ = v_reuseFailAlloc_3799_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
lean_object* v___x_3777_; 
if (v_isShared_3770_ == 0)
{
lean_ctor_set(v___x_3769_, 1, v___x_3775_);
lean_ctor_set(v___x_3769_, 0, v___x_3772_);
v___x_3777_ = v___x_3769_;
goto v_reusejp_3776_;
}
else
{
lean_object* v_reuseFailAlloc_3798_; 
v_reuseFailAlloc_3798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3798_, 0, v___x_3772_);
lean_ctor_set(v_reuseFailAlloc_3798_, 1, v___x_3775_);
v___x_3777_ = v_reuseFailAlloc_3798_;
goto v_reusejp_3776_;
}
v_reusejp_3776_:
{
lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3781_; 
v___x_3778_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__22));
lean_inc(v_idx_3749_);
v___x_3779_ = l_Lean_JsonNumber_fromNat(v_idx_3749_);
if (v_isShared_3755_ == 0)
{
lean_ctor_set_tag(v___x_3754_, 2);
lean_ctor_set(v___x_3754_, 0, v___x_3779_);
v___x_3781_ = v___x_3754_;
goto v_reusejp_3780_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v___x_3779_);
v___x_3781_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3780_;
}
v_reusejp_3780_:
{
lean_object* v___x_3783_; 
if (v_isShared_3760_ == 0)
{
lean_ctor_set(v___x_3759_, 1, v___x_3781_);
lean_ctor_set(v___x_3759_, 0, v___x_3778_);
v___x_3783_ = v___x_3759_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v___x_3778_);
lean_ctor_set(v_reuseFailAlloc_3796_, 1, v___x_3781_);
v___x_3783_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; 
v___x_3784_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__23));
v___x_3785_ = l_Lean_JsonNumber_fromNat(v_fst_3766_);
v___x_3786_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3786_, 0, v___x_3785_);
v___x_3787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3787_, 0, v___x_3784_);
lean_ctor_set(v___x_3787_, 1, v___x_3786_);
v___x_3788_ = lean_box(0);
v___x_3789_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3789_, 0, v___x_3787_);
lean_ctor_set(v___x_3789_, 1, v___x_3788_);
v___x_3790_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3790_, 0, v___x_3783_);
lean_ctor_set(v___x_3790_, 1, v___x_3789_);
v___x_3791_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3791_, 0, v___x_3777_);
lean_ctor_set(v___x_3791_, 1, v___x_3790_);
v___x_3792_ = l_Lean_Json_mkObj(v___x_3791_);
lean_dec_ref_known(v___x_3791_, 2);
v___x_3793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3793_, 0, v___x_3771_);
lean_ctor_set(v___x_3793_, 1, v___x_3792_);
v___x_3794_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3794_, 0, v___x_3793_);
lean_ctor_set(v___x_3794_, 1, v___x_3788_);
v___x_3795_ = l_Lean_Json_mkObj(v___x_3794_);
lean_dec_ref_known(v___x_3794_, 2);
v_fst_3254_ = v___x_3795_;
v_snd_3255_ = v_snd_3767_;
goto v___jp_3253_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_3759_);
lean_dec(v_fst_3756_);
lean_del_object(v___x_3754_);
lean_dec_ref_known(v_e_3193_, 3);
return v___x_3761_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3193_, 3);
return v___x_3751_;
}
}
default: 
{
lean_object* v___x_3804_; lean_object* v___x_3805_; 
v___x_3804_ = lean_obj_once(&l_LeanExport_dumpExprAux___closed__26, &l_LeanExport_dumpExprAux___closed__26_once, _init_l_LeanExport_dumpExprAux___closed__26);
v___x_3805_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v___x_3804_, v_a_3194_, v_a_3195_);
if (lean_obj_tag(v___x_3805_) == 0)
{
lean_object* v_a_3806_; lean_object* v_fst_3807_; lean_object* v_snd_3808_; 
v_a_3806_ = lean_ctor_get(v___x_3805_, 0);
lean_inc(v_a_3806_);
lean_dec_ref_known(v___x_3805_, 1);
v_fst_3807_ = lean_ctor_get(v_a_3806_, 0);
lean_inc(v_fst_3807_);
v_snd_3808_ = lean_ctor_get(v_a_3806_, 1);
lean_inc(v_snd_3808_);
lean_dec(v_a_3806_);
v_fst_3254_ = v_fst_3807_;
v_snd_3255_ = v_snd_3808_;
goto v___jp_3253_;
}
else
{
lean_object* v_a_3809_; lean_object* v___x_3811_; uint8_t v_isShared_3812_; uint8_t v_isSharedCheck_3816_; 
lean_dec_ref(v_e_3193_);
v_a_3809_ = lean_ctor_get(v___x_3805_, 0);
v_isSharedCheck_3816_ = !lean_is_exclusive(v___x_3805_);
if (v_isSharedCheck_3816_ == 0)
{
v___x_3811_ = v___x_3805_;
v_isShared_3812_ = v_isSharedCheck_3816_;
goto v_resetjp_3810_;
}
else
{
lean_inc(v_a_3809_);
lean_dec(v___x_3805_);
v___x_3811_ = lean_box(0);
v_isShared_3812_ = v_isSharedCheck_3816_;
goto v_resetjp_3810_;
}
v_resetjp_3810_:
{
lean_object* v___x_3814_; 
if (v_isShared_3812_ == 0)
{
v___x_3814_ = v___x_3811_;
goto v_reusejp_3813_;
}
else
{
lean_object* v_reuseFailAlloc_3815_; 
v_reuseFailAlloc_3815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3815_, 0, v_a_3809_);
v___x_3814_ = v_reuseFailAlloc_3815_;
goto v_reusejp_3813_;
}
v_reusejp_3813_:
{
return v___x_3814_;
}
}
}
}
}
v___jp_3217_:
{
lean_object* v_size_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; 
v_size_3228_ = lean_ctor_get(v_visitedExprs_3221_, 0);
lean_inc_n(v_size_3228_, 2);
v___x_3229_ = l_Lean_JsonNumber_fromNat(v_size_3228_);
v___x_3230_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3230_, 0, v___x_3229_);
v___x_3231_ = l_Lean_Json_setObjVal_x21(v_fst_3218_, v___x_3216_, v___x_3230_);
v___x_3232_ = l_Lean_Json_compress(v___x_3231_);
v___x_3233_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_3232_);
if (lean_obj_tag(v___x_3233_) == 0)
{
lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3243_; 
v_isSharedCheck_3243_ = !lean_is_exclusive(v___x_3233_);
if (v_isSharedCheck_3243_ == 0)
{
lean_object* v_unused_3244_; 
v_unused_3244_ = lean_ctor_get(v___x_3233_, 0);
lean_dec(v_unused_3244_);
v___x_3235_ = v___x_3233_;
v_isShared_3236_ = v_isSharedCheck_3243_;
goto v_resetjp_3234_;
}
else
{
lean_dec(v___x_3233_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3243_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3241_; 
lean_inc(v_size_3228_);
v___x_3237_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(v_visitedExprs_3221_, v_e_3193_, v_size_3228_);
v___x_3238_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_3238_, 0, v_visitedNames_3219_);
lean_ctor_set(v___x_3238_, 1, v_visitedLevels_3220_);
lean_ctor_set(v___x_3238_, 2, v___x_3237_);
lean_ctor_set(v___x_3238_, 3, v_visitedConstants_3222_);
lean_ctor_set(v___x_3238_, 4, v_noMDataExprs_3223_);
lean_ctor_set(v___x_3238_, 5, v_recursorMap_3227_);
lean_ctor_set_uint8(v___x_3238_, sizeof(void*)*6, v_exportMData_3224_);
lean_ctor_set_uint8(v___x_3238_, sizeof(void*)*6 + 1, v_exportUnsafe_3225_);
lean_ctor_set_uint8(v___x_3238_, sizeof(void*)*6 + 2, v_ignoreMissing_3226_);
v___x_3239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3239_, 0, v_size_3228_);
lean_ctor_set(v___x_3239_, 1, v___x_3238_);
if (v_isShared_3236_ == 0)
{
lean_ctor_set(v___x_3235_, 0, v___x_3239_);
v___x_3241_ = v___x_3235_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v___x_3239_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
return v___x_3241_;
}
}
}
else
{
lean_object* v_a_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3252_; 
lean_dec(v_size_3228_);
lean_dec(v_recursorMap_3227_);
lean_dec_ref(v_noMDataExprs_3223_);
lean_dec_ref(v_visitedConstants_3222_);
lean_dec_ref(v_visitedExprs_3221_);
lean_dec_ref(v_visitedLevels_3220_);
lean_dec_ref(v_visitedNames_3219_);
lean_dec_ref(v_e_3193_);
v_a_3245_ = lean_ctor_get(v___x_3233_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3233_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3247_ = v___x_3233_;
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_a_3245_);
lean_dec(v___x_3233_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
lean_object* v___x_3250_; 
if (v_isShared_3248_ == 0)
{
v___x_3250_ = v___x_3247_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_a_3245_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
return v___x_3250_;
}
}
}
}
v___jp_3253_:
{
lean_object* v_visitedNames_3256_; lean_object* v_visitedLevels_3257_; lean_object* v_visitedExprs_3258_; lean_object* v_visitedConstants_3259_; lean_object* v_noMDataExprs_3260_; uint8_t v_exportMData_3261_; uint8_t v_exportUnsafe_3262_; uint8_t v_ignoreMissing_3263_; lean_object* v_recursorMap_3264_; 
v_visitedNames_3256_ = lean_ctor_get(v_snd_3255_, 0);
lean_inc_ref(v_visitedNames_3256_);
v_visitedLevels_3257_ = lean_ctor_get(v_snd_3255_, 1);
lean_inc_ref(v_visitedLevels_3257_);
v_visitedExprs_3258_ = lean_ctor_get(v_snd_3255_, 2);
lean_inc_ref(v_visitedExprs_3258_);
v_visitedConstants_3259_ = lean_ctor_get(v_snd_3255_, 3);
lean_inc_ref(v_visitedConstants_3259_);
v_noMDataExprs_3260_ = lean_ctor_get(v_snd_3255_, 4);
lean_inc_ref(v_noMDataExprs_3260_);
v_exportMData_3261_ = lean_ctor_get_uint8(v_snd_3255_, sizeof(void*)*6);
v_exportUnsafe_3262_ = lean_ctor_get_uint8(v_snd_3255_, sizeof(void*)*6 + 1);
v_ignoreMissing_3263_ = lean_ctor_get_uint8(v_snd_3255_, sizeof(void*)*6 + 2);
v_recursorMap_3264_ = lean_ctor_get(v_snd_3255_, 5);
lean_inc(v_recursorMap_3264_);
lean_dec_ref(v_snd_3255_);
v_fst_3218_ = v_fst_3254_;
v_visitedNames_3219_ = v_visitedNames_3256_;
v_visitedLevels_3220_ = v_visitedLevels_3257_;
v_visitedExprs_3221_ = v_visitedExprs_3258_;
v_visitedConstants_3222_ = v_visitedConstants_3259_;
v_noMDataExprs_3223_ = v_noMDataExprs_3260_;
v_exportMData_3224_ = v_exportMData_3261_;
v_exportUnsafe_3225_ = v_exportUnsafe_3262_;
v_ignoreMissing_3226_ = v_ignoreMissing_3263_;
v_recursorMap_3227_ = v_recursorMap_3264_;
goto v___jp_3217_;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExpr(lean_object* v_e_3817_, lean_object* v_a_3818_, lean_object* v_a_3819_){
_start:
{
uint8_t v_exportMData_3821_; 
v_exportMData_3821_ = lean_ctor_get_uint8(v_a_3819_, sizeof(void*)*6);
if (v_exportMData_3821_ == 0)
{
lean_object* v_visitedNames_3822_; lean_object* v_visitedLevels_3823_; lean_object* v_visitedExprs_3824_; lean_object* v_visitedConstants_3825_; uint8_t v_exportUnsafe_3826_; uint8_t v_ignoreMissing_3827_; lean_object* v_recursorMap_3828_; lean_object* v___x_3830_; uint8_t v_isShared_3831_; uint8_t v_isSharedCheck_3849_; 
v_visitedNames_3822_ = lean_ctor_get(v_a_3819_, 0);
v_visitedLevels_3823_ = lean_ctor_get(v_a_3819_, 1);
v_visitedExprs_3824_ = lean_ctor_get(v_a_3819_, 2);
v_visitedConstants_3825_ = lean_ctor_get(v_a_3819_, 3);
v_exportUnsafe_3826_ = lean_ctor_get_uint8(v_a_3819_, sizeof(void*)*6 + 1);
v_ignoreMissing_3827_ = lean_ctor_get_uint8(v_a_3819_, sizeof(void*)*6 + 2);
v_recursorMap_3828_ = lean_ctor_get(v_a_3819_, 5);
v_isSharedCheck_3849_ = !lean_is_exclusive(v_a_3819_);
if (v_isSharedCheck_3849_ == 0)
{
lean_object* v_unused_3850_; 
v_unused_3850_ = lean_ctor_get(v_a_3819_, 4);
lean_dec(v_unused_3850_);
v___x_3830_ = v_a_3819_;
v_isShared_3831_ = v_isSharedCheck_3849_;
goto v_resetjp_3829_;
}
else
{
lean_inc(v_recursorMap_3828_);
lean_inc(v_visitedConstants_3825_);
lean_inc(v_visitedExprs_3824_);
lean_inc(v_visitedLevels_3823_);
lean_inc(v_visitedNames_3822_);
lean_dec(v_a_3819_);
v___x_3830_ = lean_box(0);
v_isShared_3831_ = v_isSharedCheck_3849_;
goto v_resetjp_3829_;
}
v_resetjp_3829_:
{
lean_object* v___x_3832_; lean_object* v___x_3834_; 
v___x_3832_ = lean_obj_once(&l_LeanExport_dumpExpr___closed__1, &l_LeanExport_dumpExpr___closed__1_once, _init_l_LeanExport_dumpExpr___closed__1);
if (v_isShared_3831_ == 0)
{
lean_ctor_set(v___x_3830_, 4, v___x_3832_);
v___x_3834_ = v___x_3830_;
goto v_reusejp_3833_;
}
else
{
lean_object* v_reuseFailAlloc_3848_; 
v_reuseFailAlloc_3848_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3848_, 0, v_visitedNames_3822_);
lean_ctor_set(v_reuseFailAlloc_3848_, 1, v_visitedLevels_3823_);
lean_ctor_set(v_reuseFailAlloc_3848_, 2, v_visitedExprs_3824_);
lean_ctor_set(v_reuseFailAlloc_3848_, 3, v_visitedConstants_3825_);
lean_ctor_set(v_reuseFailAlloc_3848_, 4, v___x_3832_);
lean_ctor_set(v_reuseFailAlloc_3848_, 5, v_recursorMap_3828_);
lean_ctor_set_uint8(v_reuseFailAlloc_3848_, sizeof(void*)*6, v_exportMData_3821_);
lean_ctor_set_uint8(v_reuseFailAlloc_3848_, sizeof(void*)*6 + 1, v_exportUnsafe_3826_);
lean_ctor_set_uint8(v_reuseFailAlloc_3848_, sizeof(void*)*6 + 2, v_ignoreMissing_3827_);
v___x_3834_ = v_reuseFailAlloc_3848_;
goto v_reusejp_3833_;
}
v_reusejp_3833_:
{
lean_object* v___x_3835_; 
v___x_3835_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_e_3817_, v_a_3818_, v___x_3834_);
if (lean_obj_tag(v___x_3835_) == 0)
{
lean_object* v_a_3836_; lean_object* v_fst_3837_; lean_object* v_snd_3838_; lean_object* v___x_3839_; 
v_a_3836_ = lean_ctor_get(v___x_3835_, 0);
lean_inc(v_a_3836_);
lean_dec_ref_known(v___x_3835_, 1);
v_fst_3837_ = lean_ctor_get(v_a_3836_, 0);
lean_inc(v_fst_3837_);
v_snd_3838_ = lean_ctor_get(v_a_3836_, 1);
lean_inc(v_snd_3838_);
lean_dec(v_a_3836_);
v___x_3839_ = l_LeanExport_dumpExprAux(v_fst_3837_, v_a_3818_, v_snd_3838_);
return v___x_3839_;
}
else
{
lean_object* v_a_3840_; lean_object* v___x_3842_; uint8_t v_isShared_3843_; uint8_t v_isSharedCheck_3847_; 
v_a_3840_ = lean_ctor_get(v___x_3835_, 0);
v_isSharedCheck_3847_ = !lean_is_exclusive(v___x_3835_);
if (v_isSharedCheck_3847_ == 0)
{
v___x_3842_ = v___x_3835_;
v_isShared_3843_ = v_isSharedCheck_3847_;
goto v_resetjp_3841_;
}
else
{
lean_inc(v_a_3840_);
lean_dec(v___x_3835_);
v___x_3842_ = lean_box(0);
v_isShared_3843_ = v_isSharedCheck_3847_;
goto v_resetjp_3841_;
}
v_resetjp_3841_:
{
lean_object* v___x_3845_; 
if (v_isShared_3843_ == 0)
{
v___x_3845_ = v___x_3842_;
goto v_reusejp_3844_;
}
else
{
lean_object* v_reuseFailAlloc_3846_; 
v_reuseFailAlloc_3846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3846_, 0, v_a_3840_);
v___x_3845_ = v_reuseFailAlloc_3846_;
goto v_reusejp_3844_;
}
v_reusejp_3844_:
{
return v___x_3845_;
}
}
}
}
}
}
else
{
lean_object* v___x_3851_; 
v___x_3851_ = l_LeanExport_dumpExprAux(v_e_3817_, v_a_3818_, v_a_3819_);
return v___x_3851_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(size_t v_sz_3861_, size_t v_i_3862_, lean_object* v_bs_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_){
_start:
{
uint8_t v___x_3867_; 
v___x_3867_ = lean_usize_dec_lt(v_i_3862_, v_sz_3861_);
if (v___x_3867_ == 0)
{
lean_object* v___x_3868_; lean_object* v___x_3869_; 
v___x_3868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3868_, 0, v_bs_3863_);
lean_ctor_set(v___x_3868_, 1, v___y_3865_);
v___x_3869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3869_, 0, v___x_3868_);
return v___x_3869_;
}
else
{
lean_object* v_v_3870_; lean_object* v_toConstantVal_3871_; lean_object* v_numParams_3872_; lean_object* v_numIndices_3873_; lean_object* v_all_3874_; lean_object* v_ctors_3875_; lean_object* v_numNested_3876_; uint8_t v_isRec_3877_; uint8_t v_isUnsafe_3878_; uint8_t v_isReflexive_3879_; lean_object* v_name_3880_; lean_object* v_levelParams_3881_; lean_object* v_type_3882_; lean_object* v___x_3883_; lean_object* v_bs_x27_3884_; lean_object* v___x_3885_; 
v_v_3870_ = lean_array_uget_borrowed(v_bs_3863_, v_i_3862_);
v_toConstantVal_3871_ = lean_ctor_get(v_v_3870_, 0);
v_numParams_3872_ = lean_ctor_get(v_v_3870_, 1);
lean_inc(v_numParams_3872_);
v_numIndices_3873_ = lean_ctor_get(v_v_3870_, 2);
lean_inc(v_numIndices_3873_);
v_all_3874_ = lean_ctor_get(v_v_3870_, 3);
lean_inc(v_all_3874_);
v_ctors_3875_ = lean_ctor_get(v_v_3870_, 4);
lean_inc(v_ctors_3875_);
v_numNested_3876_ = lean_ctor_get(v_v_3870_, 5);
lean_inc(v_numNested_3876_);
v_isRec_3877_ = lean_ctor_get_uint8(v_v_3870_, sizeof(void*)*6);
v_isUnsafe_3878_ = lean_ctor_get_uint8(v_v_3870_, sizeof(void*)*6 + 1);
v_isReflexive_3879_ = lean_ctor_get_uint8(v_v_3870_, sizeof(void*)*6 + 2);
v_name_3880_ = lean_ctor_get(v_toConstantVal_3871_, 0);
lean_inc(v_name_3880_);
v_levelParams_3881_ = lean_ctor_get(v_toConstantVal_3871_, 1);
lean_inc(v_levelParams_3881_);
v_type_3882_ = lean_ctor_get(v_toConstantVal_3871_, 2);
lean_inc_ref(v_type_3882_);
v___x_3883_ = lean_unsigned_to_nat(0u);
v_bs_x27_3884_ = lean_array_uset(v_bs_3863_, v_i_3862_, v___x_3883_);
v___x_3885_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_3880_, v___y_3864_, v___y_3865_);
if (lean_obj_tag(v___x_3885_) == 0)
{
lean_object* v_a_3886_; lean_object* v_fst_3887_; lean_object* v_snd_3888_; lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_4018_; 
v_a_3886_ = lean_ctor_get(v___x_3885_, 0);
lean_inc(v_a_3886_);
lean_dec_ref_known(v___x_3885_, 1);
v_fst_3887_ = lean_ctor_get(v_a_3886_, 0);
v_snd_3888_ = lean_ctor_get(v_a_3886_, 1);
v_isSharedCheck_4018_ = !lean_is_exclusive(v_a_3886_);
if (v_isSharedCheck_4018_ == 0)
{
v___x_3890_ = v_a_3886_;
v_isShared_3891_ = v_isSharedCheck_4018_;
goto v_resetjp_3889_;
}
else
{
lean_inc(v_snd_3888_);
lean_inc(v_fst_3887_);
lean_dec(v_a_3886_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_4018_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
lean_object* v___x_3892_; 
v___x_3892_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_3881_, v___y_3864_, v_snd_3888_);
if (lean_obj_tag(v___x_3892_) == 0)
{
lean_object* v_a_3893_; lean_object* v_fst_3894_; lean_object* v_snd_3895_; lean_object* v___x_3897_; uint8_t v_isShared_3898_; uint8_t v_isSharedCheck_4009_; 
v_a_3893_ = lean_ctor_get(v___x_3892_, 0);
lean_inc(v_a_3893_);
lean_dec_ref_known(v___x_3892_, 1);
v_fst_3894_ = lean_ctor_get(v_a_3893_, 0);
v_snd_3895_ = lean_ctor_get(v_a_3893_, 1);
v_isSharedCheck_4009_ = !lean_is_exclusive(v_a_3893_);
if (v_isSharedCheck_4009_ == 0)
{
v___x_3897_ = v_a_3893_;
v_isShared_3898_ = v_isSharedCheck_4009_;
goto v_resetjp_3896_;
}
else
{
lean_inc(v_snd_3895_);
lean_inc(v_fst_3894_);
lean_dec(v_a_3893_);
v___x_3897_ = lean_box(0);
v_isShared_3898_ = v_isSharedCheck_4009_;
goto v_resetjp_3896_;
}
v_resetjp_3896_:
{
lean_object* v___x_3899_; 
v___x_3899_ = l_LeanExport_dumpExpr(v_type_3882_, v___y_3864_, v_snd_3895_);
if (lean_obj_tag(v___x_3899_) == 0)
{
lean_object* v_a_3900_; lean_object* v_fst_3901_; lean_object* v_snd_3902_; lean_object* v___x_3904_; uint8_t v_isShared_3905_; uint8_t v_isSharedCheck_4000_; 
v_a_3900_ = lean_ctor_get(v___x_3899_, 0);
lean_inc(v_a_3900_);
lean_dec_ref_known(v___x_3899_, 1);
v_fst_3901_ = lean_ctor_get(v_a_3900_, 0);
v_snd_3902_ = lean_ctor_get(v_a_3900_, 1);
v_isSharedCheck_4000_ = !lean_is_exclusive(v_a_3900_);
if (v_isSharedCheck_4000_ == 0)
{
v___x_3904_ = v_a_3900_;
v_isShared_3905_ = v_isSharedCheck_4000_;
goto v_resetjp_3903_;
}
else
{
lean_inc(v_snd_3902_);
lean_inc(v_fst_3901_);
lean_dec(v_a_3900_);
v___x_3904_ = lean_box(0);
v_isShared_3905_ = v_isSharedCheck_4000_;
goto v_resetjp_3903_;
}
v_resetjp_3903_:
{
lean_object* v___x_3906_; 
v___x_3906_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_3874_, v___y_3864_, v_snd_3902_);
if (lean_obj_tag(v___x_3906_) == 0)
{
lean_object* v_a_3907_; lean_object* v_fst_3908_; lean_object* v_snd_3909_; lean_object* v___x_3911_; uint8_t v_isShared_3912_; uint8_t v_isSharedCheck_3991_; 
v_a_3907_ = lean_ctor_get(v___x_3906_, 0);
lean_inc(v_a_3907_);
lean_dec_ref_known(v___x_3906_, 1);
v_fst_3908_ = lean_ctor_get(v_a_3907_, 0);
v_snd_3909_ = lean_ctor_get(v_a_3907_, 1);
v_isSharedCheck_3991_ = !lean_is_exclusive(v_a_3907_);
if (v_isSharedCheck_3991_ == 0)
{
v___x_3911_ = v_a_3907_;
v_isShared_3912_ = v_isSharedCheck_3991_;
goto v_resetjp_3910_;
}
else
{
lean_inc(v_snd_3909_);
lean_inc(v_fst_3908_);
lean_dec(v_a_3907_);
v___x_3911_ = lean_box(0);
v_isShared_3912_ = v_isSharedCheck_3991_;
goto v_resetjp_3910_;
}
v_resetjp_3910_:
{
lean_object* v___x_3913_; 
v___x_3913_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_ctors_3875_, v___y_3864_, v_snd_3909_);
if (lean_obj_tag(v___x_3913_) == 0)
{
lean_object* v_a_3914_; lean_object* v_fst_3915_; lean_object* v_snd_3916_; lean_object* v___x_3918_; uint8_t v_isShared_3919_; uint8_t v_isSharedCheck_3982_; 
v_a_3914_ = lean_ctor_get(v___x_3913_, 0);
lean_inc(v_a_3914_);
lean_dec_ref_known(v___x_3913_, 1);
v_fst_3915_ = lean_ctor_get(v_a_3914_, 0);
v_snd_3916_ = lean_ctor_get(v_a_3914_, 1);
v_isSharedCheck_3982_ = !lean_is_exclusive(v_a_3914_);
if (v_isSharedCheck_3982_ == 0)
{
v___x_3918_ = v_a_3914_;
v_isShared_3919_ = v_isSharedCheck_3982_;
goto v_resetjp_3917_;
}
else
{
lean_inc(v_snd_3916_);
lean_inc(v_fst_3915_);
lean_dec(v_a_3914_);
v___x_3918_ = lean_box(0);
v_isShared_3919_ = v_isSharedCheck_3982_;
goto v_resetjp_3917_;
}
v_resetjp_3917_:
{
lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3924_; 
v___x_3920_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_3921_ = l_Lean_JsonNumber_fromNat(v_fst_3887_);
v___x_3922_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3922_, 0, v___x_3921_);
if (v_isShared_3919_ == 0)
{
lean_ctor_set(v___x_3918_, 1, v___x_3922_);
lean_ctor_set(v___x_3918_, 0, v___x_3920_);
v___x_3924_ = v___x_3918_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3981_; 
v_reuseFailAlloc_3981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3981_, 0, v___x_3920_);
lean_ctor_set(v_reuseFailAlloc_3981_, 1, v___x_3922_);
v___x_3924_ = v_reuseFailAlloc_3981_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
lean_object* v___x_3925_; lean_object* v___x_3927_; 
v___x_3925_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_3912_ == 0)
{
lean_ctor_set(v___x_3911_, 1, v_fst_3894_);
lean_ctor_set(v___x_3911_, 0, v___x_3925_);
v___x_3927_ = v___x_3911_;
goto v_reusejp_3926_;
}
else
{
lean_object* v_reuseFailAlloc_3980_; 
v_reuseFailAlloc_3980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3980_, 0, v___x_3925_);
lean_ctor_set(v_reuseFailAlloc_3980_, 1, v_fst_3894_);
v___x_3927_ = v_reuseFailAlloc_3980_;
goto v_reusejp_3926_;
}
v_reusejp_3926_:
{
lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3932_; 
v___x_3928_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3929_ = l_Lean_JsonNumber_fromNat(v_fst_3901_);
v___x_3930_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3930_, 0, v___x_3929_);
if (v_isShared_3905_ == 0)
{
lean_ctor_set(v___x_3904_, 1, v___x_3930_);
lean_ctor_set(v___x_3904_, 0, v___x_3928_);
v___x_3932_ = v___x_3904_;
goto v_reusejp_3931_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v___x_3928_);
lean_ctor_set(v_reuseFailAlloc_3979_, 1, v___x_3930_);
v___x_3932_ = v_reuseFailAlloc_3979_;
goto v_reusejp_3931_;
}
v_reusejp_3931_:
{
lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3937_; 
v___x_3933_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__4));
v___x_3934_ = l_Lean_JsonNumber_fromNat(v_numParams_3872_);
v___x_3935_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3935_, 0, v___x_3934_);
if (v_isShared_3898_ == 0)
{
lean_ctor_set(v___x_3897_, 1, v___x_3935_);
lean_ctor_set(v___x_3897_, 0, v___x_3933_);
v___x_3937_ = v___x_3897_;
goto v_reusejp_3936_;
}
else
{
lean_object* v_reuseFailAlloc_3978_; 
v_reuseFailAlloc_3978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3978_, 0, v___x_3933_);
lean_ctor_set(v_reuseFailAlloc_3978_, 1, v___x_3935_);
v___x_3937_ = v_reuseFailAlloc_3978_;
goto v_reusejp_3936_;
}
v_reusejp_3936_:
{
lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3942_; 
v___x_3938_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_3939_ = l_Lean_JsonNumber_fromNat(v_numIndices_3873_);
v___x_3940_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3940_, 0, v___x_3939_);
if (v_isShared_3891_ == 0)
{
lean_ctor_set(v___x_3890_, 1, v___x_3940_);
lean_ctor_set(v___x_3890_, 0, v___x_3938_);
v___x_3942_ = v___x_3890_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3977_; 
v_reuseFailAlloc_3977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3977_, 0, v___x_3938_);
lean_ctor_set(v_reuseFailAlloc_3977_, 1, v___x_3940_);
v___x_3942_ = v_reuseFailAlloc_3977_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; size_t v___x_3973_; size_t v___x_3974_; lean_object* v___x_3975_; 
v___x_3943_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
v___x_3944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3944_, 0, v___x_3943_);
lean_ctor_set(v___x_3944_, 1, v_fst_3908_);
v___x_3945_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2));
v___x_3946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3946_, 0, v___x_3945_);
lean_ctor_set(v___x_3946_, 1, v_fst_3915_);
v___x_3947_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__3));
v___x_3948_ = l_Lean_JsonNumber_fromNat(v_numNested_3876_);
v___x_3949_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3948_);
v___x_3950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3950_, 0, v___x_3947_);
lean_ctor_set(v___x_3950_, 1, v___x_3949_);
v___x_3951_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4));
v___x_3952_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3952_, 0, v_isRec_3877_);
v___x_3953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3953_, 0, v___x_3951_);
lean_ctor_set(v___x_3953_, 1, v___x_3952_);
v___x_3954_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__5));
v___x_3955_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3955_, 0, v_isReflexive_3879_);
v___x_3956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3956_, 0, v___x_3954_);
lean_ctor_set(v___x_3956_, 1, v___x_3955_);
v___x_3957_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6));
v___x_3958_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3958_, 0, v_isUnsafe_3878_);
v___x_3959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3957_);
lean_ctor_set(v___x_3959_, 1, v___x_3958_);
v___x_3960_ = lean_box(0);
v___x_3961_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3961_, 0, v___x_3959_);
lean_ctor_set(v___x_3961_, 1, v___x_3960_);
v___x_3962_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3962_, 0, v___x_3956_);
lean_ctor_set(v___x_3962_, 1, v___x_3961_);
v___x_3963_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3963_, 0, v___x_3953_);
lean_ctor_set(v___x_3963_, 1, v___x_3962_);
v___x_3964_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3950_);
lean_ctor_set(v___x_3964_, 1, v___x_3963_);
v___x_3965_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3965_, 0, v___x_3946_);
lean_ctor_set(v___x_3965_, 1, v___x_3964_);
v___x_3966_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3944_);
lean_ctor_set(v___x_3966_, 1, v___x_3965_);
v___x_3967_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3967_, 0, v___x_3942_);
lean_ctor_set(v___x_3967_, 1, v___x_3966_);
v___x_3968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3968_, 0, v___x_3937_);
lean_ctor_set(v___x_3968_, 1, v___x_3967_);
v___x_3969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3969_, 0, v___x_3932_);
lean_ctor_set(v___x_3969_, 1, v___x_3968_);
v___x_3970_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3970_, 0, v___x_3927_);
lean_ctor_set(v___x_3970_, 1, v___x_3969_);
v___x_3971_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3971_, 0, v___x_3924_);
lean_ctor_set(v___x_3971_, 1, v___x_3970_);
v___x_3972_ = l_Lean_Json_mkObj(v___x_3971_);
lean_dec_ref_known(v___x_3971_, 2);
v___x_3973_ = ((size_t)1ULL);
v___x_3974_ = lean_usize_add(v_i_3862_, v___x_3973_);
v___x_3975_ = lean_array_uset(v_bs_x27_3884_, v_i_3862_, v___x_3972_);
v_i_3862_ = v___x_3974_;
v_bs_3863_ = v___x_3975_;
v___y_3865_ = v_snd_3916_;
goto _start;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3983_; lean_object* v___x_3985_; uint8_t v_isShared_3986_; uint8_t v_isSharedCheck_3990_; 
lean_del_object(v___x_3911_);
lean_dec(v_fst_3908_);
lean_del_object(v___x_3904_);
lean_dec(v_fst_3901_);
lean_del_object(v___x_3897_);
lean_dec(v_fst_3894_);
lean_del_object(v___x_3890_);
lean_dec(v_fst_3887_);
lean_dec_ref(v_bs_x27_3884_);
lean_dec(v_numNested_3876_);
lean_dec(v_numIndices_3873_);
lean_dec(v_numParams_3872_);
v_a_3983_ = lean_ctor_get(v___x_3913_, 0);
v_isSharedCheck_3990_ = !lean_is_exclusive(v___x_3913_);
if (v_isSharedCheck_3990_ == 0)
{
v___x_3985_ = v___x_3913_;
v_isShared_3986_ = v_isSharedCheck_3990_;
goto v_resetjp_3984_;
}
else
{
lean_inc(v_a_3983_);
lean_dec(v___x_3913_);
v___x_3985_ = lean_box(0);
v_isShared_3986_ = v_isSharedCheck_3990_;
goto v_resetjp_3984_;
}
v_resetjp_3984_:
{
lean_object* v___x_3988_; 
if (v_isShared_3986_ == 0)
{
v___x_3988_ = v___x_3985_;
goto v_reusejp_3987_;
}
else
{
lean_object* v_reuseFailAlloc_3989_; 
v_reuseFailAlloc_3989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3989_, 0, v_a_3983_);
v___x_3988_ = v_reuseFailAlloc_3989_;
goto v_reusejp_3987_;
}
v_reusejp_3987_:
{
return v___x_3988_;
}
}
}
}
}
else
{
lean_object* v_a_3992_; lean_object* v___x_3994_; uint8_t v_isShared_3995_; uint8_t v_isSharedCheck_3999_; 
lean_del_object(v___x_3904_);
lean_dec(v_fst_3901_);
lean_del_object(v___x_3897_);
lean_dec(v_fst_3894_);
lean_del_object(v___x_3890_);
lean_dec(v_fst_3887_);
lean_dec_ref(v_bs_x27_3884_);
lean_dec(v_numNested_3876_);
lean_dec(v_ctors_3875_);
lean_dec(v_numIndices_3873_);
lean_dec(v_numParams_3872_);
v_a_3992_ = lean_ctor_get(v___x_3906_, 0);
v_isSharedCheck_3999_ = !lean_is_exclusive(v___x_3906_);
if (v_isSharedCheck_3999_ == 0)
{
v___x_3994_ = v___x_3906_;
v_isShared_3995_ = v_isSharedCheck_3999_;
goto v_resetjp_3993_;
}
else
{
lean_inc(v_a_3992_);
lean_dec(v___x_3906_);
v___x_3994_ = lean_box(0);
v_isShared_3995_ = v_isSharedCheck_3999_;
goto v_resetjp_3993_;
}
v_resetjp_3993_:
{
lean_object* v___x_3997_; 
if (v_isShared_3995_ == 0)
{
v___x_3997_ = v___x_3994_;
goto v_reusejp_3996_;
}
else
{
lean_object* v_reuseFailAlloc_3998_; 
v_reuseFailAlloc_3998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3998_, 0, v_a_3992_);
v___x_3997_ = v_reuseFailAlloc_3998_;
goto v_reusejp_3996_;
}
v_reusejp_3996_:
{
return v___x_3997_;
}
}
}
}
}
else
{
lean_object* v_a_4001_; lean_object* v___x_4003_; uint8_t v_isShared_4004_; uint8_t v_isSharedCheck_4008_; 
lean_del_object(v___x_3897_);
lean_dec(v_fst_3894_);
lean_del_object(v___x_3890_);
lean_dec(v_fst_3887_);
lean_dec_ref(v_bs_x27_3884_);
lean_dec(v_numNested_3876_);
lean_dec(v_ctors_3875_);
lean_dec(v_all_3874_);
lean_dec(v_numIndices_3873_);
lean_dec(v_numParams_3872_);
v_a_4001_ = lean_ctor_get(v___x_3899_, 0);
v_isSharedCheck_4008_ = !lean_is_exclusive(v___x_3899_);
if (v_isSharedCheck_4008_ == 0)
{
v___x_4003_ = v___x_3899_;
v_isShared_4004_ = v_isSharedCheck_4008_;
goto v_resetjp_4002_;
}
else
{
lean_inc(v_a_4001_);
lean_dec(v___x_3899_);
v___x_4003_ = lean_box(0);
v_isShared_4004_ = v_isSharedCheck_4008_;
goto v_resetjp_4002_;
}
v_resetjp_4002_:
{
lean_object* v___x_4006_; 
if (v_isShared_4004_ == 0)
{
v___x_4006_ = v___x_4003_;
goto v_reusejp_4005_;
}
else
{
lean_object* v_reuseFailAlloc_4007_; 
v_reuseFailAlloc_4007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4007_, 0, v_a_4001_);
v___x_4006_ = v_reuseFailAlloc_4007_;
goto v_reusejp_4005_;
}
v_reusejp_4005_:
{
return v___x_4006_;
}
}
}
}
}
else
{
lean_object* v_a_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4017_; 
lean_del_object(v___x_3890_);
lean_dec(v_fst_3887_);
lean_dec_ref(v_bs_x27_3884_);
lean_dec_ref(v_type_3882_);
lean_dec(v_numNested_3876_);
lean_dec(v_ctors_3875_);
lean_dec(v_all_3874_);
lean_dec(v_numIndices_3873_);
lean_dec(v_numParams_3872_);
v_a_4010_ = lean_ctor_get(v___x_3892_, 0);
v_isSharedCheck_4017_ = !lean_is_exclusive(v___x_3892_);
if (v_isSharedCheck_4017_ == 0)
{
v___x_4012_ = v___x_3892_;
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_a_4010_);
lean_dec(v___x_3892_);
v___x_4012_ = lean_box(0);
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
v_resetjp_4011_:
{
lean_object* v___x_4015_; 
if (v_isShared_4013_ == 0)
{
v___x_4015_ = v___x_4012_;
goto v_reusejp_4014_;
}
else
{
lean_object* v_reuseFailAlloc_4016_; 
v_reuseFailAlloc_4016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v_a_4010_);
v___x_4015_ = v_reuseFailAlloc_4016_;
goto v_reusejp_4014_;
}
v_reusejp_4014_:
{
return v___x_4015_;
}
}
}
}
}
else
{
lean_object* v_a_4019_; lean_object* v___x_4021_; uint8_t v_isShared_4022_; uint8_t v_isSharedCheck_4026_; 
lean_dec_ref(v_bs_x27_3884_);
lean_dec_ref(v_type_3882_);
lean_dec(v_levelParams_3881_);
lean_dec(v_numNested_3876_);
lean_dec(v_ctors_3875_);
lean_dec(v_all_3874_);
lean_dec(v_numIndices_3873_);
lean_dec(v_numParams_3872_);
v_a_4019_ = lean_ctor_get(v___x_3885_, 0);
v_isSharedCheck_4026_ = !lean_is_exclusive(v___x_3885_);
if (v_isSharedCheck_4026_ == 0)
{
v___x_4021_ = v___x_3885_;
v_isShared_4022_ = v_isSharedCheck_4026_;
goto v_resetjp_4020_;
}
else
{
lean_inc(v_a_4019_);
lean_dec(v___x_3885_);
v___x_4021_ = lean_box(0);
v_isShared_4022_ = v_isSharedCheck_4026_;
goto v_resetjp_4020_;
}
v_resetjp_4020_:
{
lean_object* v___x_4024_; 
if (v_isShared_4022_ == 0)
{
v___x_4024_ = v___x_4021_;
goto v_reusejp_4023_;
}
else
{
lean_object* v_reuseFailAlloc_4025_; 
v_reuseFailAlloc_4025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4025_, 0, v_a_4019_);
v___x_4024_ = v_reuseFailAlloc_4025_;
goto v_reusejp_4023_;
}
v_reusejp_4023_:
{
return v___x_4024_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(size_t v_sz_4030_, size_t v_i_4031_, lean_object* v_bs_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_){
_start:
{
uint8_t v___x_4036_; 
v___x_4036_ = lean_usize_dec_lt(v_i_4031_, v_sz_4030_);
if (v___x_4036_ == 0)
{
lean_object* v___x_4037_; lean_object* v___x_4038_; 
v___x_4037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4037_, 0, v_bs_4032_);
lean_ctor_set(v___x_4037_, 1, v___y_4034_);
v___x_4038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4038_, 0, v___x_4037_);
return v___x_4038_;
}
else
{
lean_object* v_v_4039_; lean_object* v_toConstantVal_4040_; lean_object* v_induct_4041_; lean_object* v_cidx_4042_; lean_object* v_numParams_4043_; lean_object* v_numFields_4044_; uint8_t v_isUnsafe_4045_; lean_object* v_name_4046_; lean_object* v_levelParams_4047_; lean_object* v_type_4048_; lean_object* v___x_4049_; lean_object* v_bs_x27_4050_; lean_object* v___x_4051_; 
v_v_4039_ = lean_array_uget_borrowed(v_bs_4032_, v_i_4031_);
v_toConstantVal_4040_ = lean_ctor_get(v_v_4039_, 0);
v_induct_4041_ = lean_ctor_get(v_v_4039_, 1);
lean_inc(v_induct_4041_);
v_cidx_4042_ = lean_ctor_get(v_v_4039_, 2);
lean_inc(v_cidx_4042_);
v_numParams_4043_ = lean_ctor_get(v_v_4039_, 3);
lean_inc(v_numParams_4043_);
v_numFields_4044_ = lean_ctor_get(v_v_4039_, 4);
lean_inc(v_numFields_4044_);
v_isUnsafe_4045_ = lean_ctor_get_uint8(v_v_4039_, sizeof(void*)*5);
v_name_4046_ = lean_ctor_get(v_toConstantVal_4040_, 0);
lean_inc(v_name_4046_);
v_levelParams_4047_ = lean_ctor_get(v_toConstantVal_4040_, 1);
lean_inc(v_levelParams_4047_);
v_type_4048_ = lean_ctor_get(v_toConstantVal_4040_, 2);
lean_inc_ref(v_type_4048_);
v___x_4049_ = lean_unsigned_to_nat(0u);
v_bs_x27_4050_ = lean_array_uset(v_bs_4032_, v_i_4031_, v___x_4049_);
v___x_4051_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4046_, v___y_4033_, v___y_4034_);
if (lean_obj_tag(v___x_4051_) == 0)
{
lean_object* v_a_4052_; lean_object* v_fst_4053_; lean_object* v_snd_4054_; lean_object* v___x_4056_; uint8_t v_isShared_4057_; uint8_t v_isSharedCheck_4157_; 
v_a_4052_ = lean_ctor_get(v___x_4051_, 0);
lean_inc(v_a_4052_);
lean_dec_ref_known(v___x_4051_, 1);
v_fst_4053_ = lean_ctor_get(v_a_4052_, 0);
v_snd_4054_ = lean_ctor_get(v_a_4052_, 1);
v_isSharedCheck_4157_ = !lean_is_exclusive(v_a_4052_);
if (v_isSharedCheck_4157_ == 0)
{
v___x_4056_ = v_a_4052_;
v_isShared_4057_ = v_isSharedCheck_4157_;
goto v_resetjp_4055_;
}
else
{
lean_inc(v_snd_4054_);
lean_inc(v_fst_4053_);
lean_dec(v_a_4052_);
v___x_4056_ = lean_box(0);
v_isShared_4057_ = v_isSharedCheck_4157_;
goto v_resetjp_4055_;
}
v_resetjp_4055_:
{
lean_object* v___x_4058_; 
v___x_4058_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4047_, v___y_4033_, v_snd_4054_);
if (lean_obj_tag(v___x_4058_) == 0)
{
lean_object* v_a_4059_; lean_object* v_fst_4060_; lean_object* v_snd_4061_; lean_object* v___x_4063_; uint8_t v_isShared_4064_; uint8_t v_isSharedCheck_4148_; 
v_a_4059_ = lean_ctor_get(v___x_4058_, 0);
lean_inc(v_a_4059_);
lean_dec_ref_known(v___x_4058_, 1);
v_fst_4060_ = lean_ctor_get(v_a_4059_, 0);
v_snd_4061_ = lean_ctor_get(v_a_4059_, 1);
v_isSharedCheck_4148_ = !lean_is_exclusive(v_a_4059_);
if (v_isSharedCheck_4148_ == 0)
{
v___x_4063_ = v_a_4059_;
v_isShared_4064_ = v_isSharedCheck_4148_;
goto v_resetjp_4062_;
}
else
{
lean_inc(v_snd_4061_);
lean_inc(v_fst_4060_);
lean_dec(v_a_4059_);
v___x_4063_ = lean_box(0);
v_isShared_4064_ = v_isSharedCheck_4148_;
goto v_resetjp_4062_;
}
v_resetjp_4062_:
{
lean_object* v___x_4065_; 
v___x_4065_ = l_LeanExport_dumpExpr(v_type_4048_, v___y_4033_, v_snd_4061_);
if (lean_obj_tag(v___x_4065_) == 0)
{
lean_object* v_a_4066_; lean_object* v_fst_4067_; lean_object* v_snd_4068_; lean_object* v___x_4070_; uint8_t v_isShared_4071_; uint8_t v_isSharedCheck_4139_; 
v_a_4066_ = lean_ctor_get(v___x_4065_, 0);
lean_inc(v_a_4066_);
lean_dec_ref_known(v___x_4065_, 1);
v_fst_4067_ = lean_ctor_get(v_a_4066_, 0);
v_snd_4068_ = lean_ctor_get(v_a_4066_, 1);
v_isSharedCheck_4139_ = !lean_is_exclusive(v_a_4066_);
if (v_isSharedCheck_4139_ == 0)
{
v___x_4070_ = v_a_4066_;
v_isShared_4071_ = v_isSharedCheck_4139_;
goto v_resetjp_4069_;
}
else
{
lean_inc(v_snd_4068_);
lean_inc(v_fst_4067_);
lean_dec(v_a_4066_);
v___x_4070_ = lean_box(0);
v_isShared_4071_ = v_isSharedCheck_4139_;
goto v_resetjp_4069_;
}
v_resetjp_4069_:
{
lean_object* v___x_4072_; 
v___x_4072_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_induct_4041_, v___y_4033_, v_snd_4068_);
if (lean_obj_tag(v___x_4072_) == 0)
{
lean_object* v_a_4073_; lean_object* v_fst_4074_; lean_object* v_snd_4075_; lean_object* v___x_4077_; uint8_t v_isShared_4078_; uint8_t v_isSharedCheck_4130_; 
v_a_4073_ = lean_ctor_get(v___x_4072_, 0);
lean_inc(v_a_4073_);
lean_dec_ref_known(v___x_4072_, 1);
v_fst_4074_ = lean_ctor_get(v_a_4073_, 0);
v_snd_4075_ = lean_ctor_get(v_a_4073_, 1);
v_isSharedCheck_4130_ = !lean_is_exclusive(v_a_4073_);
if (v_isSharedCheck_4130_ == 0)
{
v___x_4077_ = v_a_4073_;
v_isShared_4078_ = v_isSharedCheck_4130_;
goto v_resetjp_4076_;
}
else
{
lean_inc(v_snd_4075_);
lean_inc(v_fst_4074_);
lean_dec(v_a_4073_);
v___x_4077_ = lean_box(0);
v_isShared_4078_ = v_isSharedCheck_4130_;
goto v_resetjp_4076_;
}
v_resetjp_4076_:
{
lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4083_; 
v___x_4079_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_4080_ = l_Lean_JsonNumber_fromNat(v_fst_4053_);
v___x_4081_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4081_, 0, v___x_4080_);
if (v_isShared_4078_ == 0)
{
lean_ctor_set(v___x_4077_, 1, v___x_4081_);
lean_ctor_set(v___x_4077_, 0, v___x_4079_);
v___x_4083_ = v___x_4077_;
goto v_reusejp_4082_;
}
else
{
lean_object* v_reuseFailAlloc_4129_; 
v_reuseFailAlloc_4129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4129_, 0, v___x_4079_);
lean_ctor_set(v_reuseFailAlloc_4129_, 1, v___x_4081_);
v___x_4083_ = v_reuseFailAlloc_4129_;
goto v_reusejp_4082_;
}
v_reusejp_4082_:
{
lean_object* v___x_4084_; lean_object* v___x_4086_; 
v___x_4084_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_4071_ == 0)
{
lean_ctor_set(v___x_4070_, 1, v_fst_4060_);
lean_ctor_set(v___x_4070_, 0, v___x_4084_);
v___x_4086_ = v___x_4070_;
goto v_reusejp_4085_;
}
else
{
lean_object* v_reuseFailAlloc_4128_; 
v_reuseFailAlloc_4128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4128_, 0, v___x_4084_);
lean_ctor_set(v_reuseFailAlloc_4128_, 1, v_fst_4060_);
v___x_4086_ = v_reuseFailAlloc_4128_;
goto v_reusejp_4085_;
}
v_reusejp_4085_:
{
lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4091_; 
v___x_4087_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_4088_ = l_Lean_JsonNumber_fromNat(v_fst_4067_);
v___x_4089_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4089_, 0, v___x_4088_);
if (v_isShared_4064_ == 0)
{
lean_ctor_set(v___x_4063_, 1, v___x_4089_);
lean_ctor_set(v___x_4063_, 0, v___x_4087_);
v___x_4091_ = v___x_4063_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4127_; 
v_reuseFailAlloc_4127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4127_, 0, v___x_4087_);
lean_ctor_set(v_reuseFailAlloc_4127_, 1, v___x_4089_);
v___x_4091_ = v_reuseFailAlloc_4127_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4096_; 
v___x_4092_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__2));
v___x_4093_ = l_Lean_JsonNumber_fromNat(v_fst_4074_);
v___x_4094_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4094_, 0, v___x_4093_);
if (v_isShared_4057_ == 0)
{
lean_ctor_set(v___x_4056_, 1, v___x_4094_);
lean_ctor_set(v___x_4056_, 0, v___x_4092_);
v___x_4096_ = v___x_4056_;
goto v_reusejp_4095_;
}
else
{
lean_object* v_reuseFailAlloc_4126_; 
v_reuseFailAlloc_4126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4126_, 0, v___x_4092_);
lean_ctor_set(v_reuseFailAlloc_4126_, 1, v___x_4094_);
v___x_4096_ = v_reuseFailAlloc_4126_;
goto v_reusejp_4095_;
}
v_reusejp_4095_:
{
lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; size_t v___x_4122_; size_t v___x_4123_; lean_object* v___x_4124_; 
v___x_4097_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__3));
v___x_4098_ = l_Lean_JsonNumber_fromNat(v_cidx_4042_);
v___x_4099_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4099_, 0, v___x_4098_);
v___x_4100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4100_, 0, v___x_4097_);
lean_ctor_set(v___x_4100_, 1, v___x_4099_);
v___x_4101_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__4));
v___x_4102_ = l_Lean_JsonNumber_fromNat(v_numParams_4043_);
v___x_4103_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4103_, 0, v___x_4102_);
v___x_4104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4104_, 0, v___x_4101_);
lean_ctor_set(v___x_4104_, 1, v___x_4103_);
v___x_4105_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__5));
v___x_4106_ = l_Lean_JsonNumber_fromNat(v_numFields_4044_);
v___x_4107_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4107_, 0, v___x_4106_);
v___x_4108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4108_, 0, v___x_4105_);
lean_ctor_set(v___x_4108_, 1, v___x_4107_);
v___x_4109_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6));
v___x_4110_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4110_, 0, v_isUnsafe_4045_);
v___x_4111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4111_, 0, v___x_4109_);
lean_ctor_set(v___x_4111_, 1, v___x_4110_);
v___x_4112_ = lean_box(0);
v___x_4113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4113_, 0, v___x_4111_);
lean_ctor_set(v___x_4113_, 1, v___x_4112_);
v___x_4114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4114_, 0, v___x_4108_);
lean_ctor_set(v___x_4114_, 1, v___x_4113_);
v___x_4115_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4115_, 0, v___x_4104_);
lean_ctor_set(v___x_4115_, 1, v___x_4114_);
v___x_4116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4116_, 0, v___x_4100_);
lean_ctor_set(v___x_4116_, 1, v___x_4115_);
v___x_4117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4117_, 0, v___x_4096_);
lean_ctor_set(v___x_4117_, 1, v___x_4116_);
v___x_4118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4118_, 0, v___x_4091_);
lean_ctor_set(v___x_4118_, 1, v___x_4117_);
v___x_4119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4119_, 0, v___x_4086_);
lean_ctor_set(v___x_4119_, 1, v___x_4118_);
v___x_4120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4120_, 0, v___x_4083_);
lean_ctor_set(v___x_4120_, 1, v___x_4119_);
v___x_4121_ = l_Lean_Json_mkObj(v___x_4120_);
lean_dec_ref_known(v___x_4120_, 2);
v___x_4122_ = ((size_t)1ULL);
v___x_4123_ = lean_usize_add(v_i_4031_, v___x_4122_);
v___x_4124_ = lean_array_uset(v_bs_x27_4050_, v_i_4031_, v___x_4121_);
v_i_4031_ = v___x_4123_;
v_bs_4032_ = v___x_4124_;
v___y_4034_ = v_snd_4075_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4138_; 
lean_del_object(v___x_4070_);
lean_dec(v_fst_4067_);
lean_del_object(v___x_4063_);
lean_dec(v_fst_4060_);
lean_del_object(v___x_4056_);
lean_dec(v_fst_4053_);
lean_dec_ref(v_bs_x27_4050_);
lean_dec(v_numFields_4044_);
lean_dec(v_numParams_4043_);
lean_dec(v_cidx_4042_);
v_a_4131_ = lean_ctor_get(v___x_4072_, 0);
v_isSharedCheck_4138_ = !lean_is_exclusive(v___x_4072_);
if (v_isSharedCheck_4138_ == 0)
{
v___x_4133_ = v___x_4072_;
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_a_4131_);
lean_dec(v___x_4072_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4138_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
lean_object* v___x_4136_; 
if (v_isShared_4134_ == 0)
{
v___x_4136_ = v___x_4133_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4137_; 
v_reuseFailAlloc_4137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4137_, 0, v_a_4131_);
v___x_4136_ = v_reuseFailAlloc_4137_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
return v___x_4136_;
}
}
}
}
}
else
{
lean_object* v_a_4140_; lean_object* v___x_4142_; uint8_t v_isShared_4143_; uint8_t v_isSharedCheck_4147_; 
lean_del_object(v___x_4063_);
lean_dec(v_fst_4060_);
lean_del_object(v___x_4056_);
lean_dec(v_fst_4053_);
lean_dec_ref(v_bs_x27_4050_);
lean_dec(v_numFields_4044_);
lean_dec(v_numParams_4043_);
lean_dec(v_cidx_4042_);
lean_dec(v_induct_4041_);
v_a_4140_ = lean_ctor_get(v___x_4065_, 0);
v_isSharedCheck_4147_ = !lean_is_exclusive(v___x_4065_);
if (v_isSharedCheck_4147_ == 0)
{
v___x_4142_ = v___x_4065_;
v_isShared_4143_ = v_isSharedCheck_4147_;
goto v_resetjp_4141_;
}
else
{
lean_inc(v_a_4140_);
lean_dec(v___x_4065_);
v___x_4142_ = lean_box(0);
v_isShared_4143_ = v_isSharedCheck_4147_;
goto v_resetjp_4141_;
}
v_resetjp_4141_:
{
lean_object* v___x_4145_; 
if (v_isShared_4143_ == 0)
{
v___x_4145_ = v___x_4142_;
goto v_reusejp_4144_;
}
else
{
lean_object* v_reuseFailAlloc_4146_; 
v_reuseFailAlloc_4146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4146_, 0, v_a_4140_);
v___x_4145_ = v_reuseFailAlloc_4146_;
goto v_reusejp_4144_;
}
v_reusejp_4144_:
{
return v___x_4145_;
}
}
}
}
}
else
{
lean_object* v_a_4149_; lean_object* v___x_4151_; uint8_t v_isShared_4152_; uint8_t v_isSharedCheck_4156_; 
lean_del_object(v___x_4056_);
lean_dec(v_fst_4053_);
lean_dec_ref(v_bs_x27_4050_);
lean_dec_ref(v_type_4048_);
lean_dec(v_numFields_4044_);
lean_dec(v_numParams_4043_);
lean_dec(v_cidx_4042_);
lean_dec(v_induct_4041_);
v_a_4149_ = lean_ctor_get(v___x_4058_, 0);
v_isSharedCheck_4156_ = !lean_is_exclusive(v___x_4058_);
if (v_isSharedCheck_4156_ == 0)
{
v___x_4151_ = v___x_4058_;
v_isShared_4152_ = v_isSharedCheck_4156_;
goto v_resetjp_4150_;
}
else
{
lean_inc(v_a_4149_);
lean_dec(v___x_4058_);
v___x_4151_ = lean_box(0);
v_isShared_4152_ = v_isSharedCheck_4156_;
goto v_resetjp_4150_;
}
v_resetjp_4150_:
{
lean_object* v___x_4154_; 
if (v_isShared_4152_ == 0)
{
v___x_4154_ = v___x_4151_;
goto v_reusejp_4153_;
}
else
{
lean_object* v_reuseFailAlloc_4155_; 
v_reuseFailAlloc_4155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4155_, 0, v_a_4149_);
v___x_4154_ = v_reuseFailAlloc_4155_;
goto v_reusejp_4153_;
}
v_reusejp_4153_:
{
return v___x_4154_;
}
}
}
}
}
else
{
lean_object* v_a_4158_; lean_object* v___x_4160_; uint8_t v_isShared_4161_; uint8_t v_isSharedCheck_4165_; 
lean_dec_ref(v_bs_x27_4050_);
lean_dec_ref(v_type_4048_);
lean_dec(v_levelParams_4047_);
lean_dec(v_numFields_4044_);
lean_dec(v_numParams_4043_);
lean_dec(v_cidx_4042_);
lean_dec(v_induct_4041_);
v_a_4158_ = lean_ctor_get(v___x_4051_, 0);
v_isSharedCheck_4165_ = !lean_is_exclusive(v___x_4051_);
if (v_isSharedCheck_4165_ == 0)
{
v___x_4160_ = v___x_4051_;
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
else
{
lean_inc(v_a_4158_);
lean_dec(v___x_4051_);
v___x_4160_ = lean_box(0);
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
v_resetjp_4159_:
{
lean_object* v___x_4163_; 
if (v_isShared_4161_ == 0)
{
v___x_4163_ = v___x_4160_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v_a_4158_);
v___x_4163_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
return v___x_4163_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(lean_object* v_rule_4168_, lean_object* v_a_4169_, lean_object* v_a_4170_){
_start:
{
lean_object* v_ctor_4172_; lean_object* v_nfields_4173_; lean_object* v_rhs_4174_; lean_object* v___x_4175_; 
v_ctor_4172_ = lean_ctor_get(v_rule_4168_, 0);
lean_inc(v_ctor_4172_);
v_nfields_4173_ = lean_ctor_get(v_rule_4168_, 1);
lean_inc(v_nfields_4173_);
v_rhs_4174_ = lean_ctor_get(v_rule_4168_, 2);
lean_inc_ref(v_rhs_4174_);
lean_dec_ref(v_rule_4168_);
v___x_4175_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_ctor_4172_, v_a_4169_, v_a_4170_);
if (lean_obj_tag(v___x_4175_) == 0)
{
lean_object* v_a_4176_; lean_object* v_fst_4177_; lean_object* v_snd_4178_; lean_object* v___x_4180_; uint8_t v_isShared_4181_; uint8_t v_isSharedCheck_4227_; 
v_a_4176_ = lean_ctor_get(v___x_4175_, 0);
lean_inc(v_a_4176_);
lean_dec_ref_known(v___x_4175_, 1);
v_fst_4177_ = lean_ctor_get(v_a_4176_, 0);
v_snd_4178_ = lean_ctor_get(v_a_4176_, 1);
v_isSharedCheck_4227_ = !lean_is_exclusive(v_a_4176_);
if (v_isSharedCheck_4227_ == 0)
{
v___x_4180_ = v_a_4176_;
v_isShared_4181_ = v_isSharedCheck_4227_;
goto v_resetjp_4179_;
}
else
{
lean_inc(v_snd_4178_);
lean_inc(v_fst_4177_);
lean_dec(v_a_4176_);
v___x_4180_ = lean_box(0);
v_isShared_4181_ = v_isSharedCheck_4227_;
goto v_resetjp_4179_;
}
v_resetjp_4179_:
{
lean_object* v___x_4182_; 
v___x_4182_ = l_LeanExport_dumpExpr(v_rhs_4174_, v_a_4169_, v_snd_4178_);
if (lean_obj_tag(v___x_4182_) == 0)
{
lean_object* v_a_4183_; lean_object* v___x_4185_; uint8_t v_isShared_4186_; uint8_t v_isSharedCheck_4218_; 
v_a_4183_ = lean_ctor_get(v___x_4182_, 0);
v_isSharedCheck_4218_ = !lean_is_exclusive(v___x_4182_);
if (v_isSharedCheck_4218_ == 0)
{
v___x_4185_ = v___x_4182_;
v_isShared_4186_ = v_isSharedCheck_4218_;
goto v_resetjp_4184_;
}
else
{
lean_inc(v_a_4183_);
lean_dec(v___x_4182_);
v___x_4185_ = lean_box(0);
v_isShared_4186_ = v_isSharedCheck_4218_;
goto v_resetjp_4184_;
}
v_resetjp_4184_:
{
lean_object* v_fst_4187_; lean_object* v_snd_4188_; lean_object* v___x_4190_; uint8_t v_isShared_4191_; uint8_t v_isSharedCheck_4217_; 
v_fst_4187_ = lean_ctor_get(v_a_4183_, 0);
v_snd_4188_ = lean_ctor_get(v_a_4183_, 1);
v_isSharedCheck_4217_ = !lean_is_exclusive(v_a_4183_);
if (v_isSharedCheck_4217_ == 0)
{
v___x_4190_ = v_a_4183_;
v_isShared_4191_ = v_isSharedCheck_4217_;
goto v_resetjp_4189_;
}
else
{
lean_inc(v_snd_4188_);
lean_inc(v_fst_4187_);
lean_dec(v_a_4183_);
v___x_4190_ = lean_box(0);
v_isShared_4191_ = v_isSharedCheck_4217_;
goto v_resetjp_4189_;
}
v_resetjp_4189_:
{
lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4196_; 
v___x_4192_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2));
v___x_4193_ = l_Lean_JsonNumber_fromNat(v_fst_4177_);
v___x_4194_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4194_, 0, v___x_4193_);
if (v_isShared_4191_ == 0)
{
lean_ctor_set(v___x_4190_, 1, v___x_4194_);
lean_ctor_set(v___x_4190_, 0, v___x_4192_);
v___x_4196_ = v___x_4190_;
goto v_reusejp_4195_;
}
else
{
lean_object* v_reuseFailAlloc_4216_; 
v_reuseFailAlloc_4216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4216_, 0, v___x_4192_);
lean_ctor_set(v_reuseFailAlloc_4216_, 1, v___x_4194_);
v___x_4196_ = v_reuseFailAlloc_4216_;
goto v_reusejp_4195_;
}
v_reusejp_4195_:
{
lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4201_; 
v___x_4197_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__0));
v___x_4198_ = l_Lean_JsonNumber_fromNat(v_nfields_4173_);
v___x_4199_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4199_, 0, v___x_4198_);
if (v_isShared_4181_ == 0)
{
lean_ctor_set(v___x_4180_, 1, v___x_4199_);
lean_ctor_set(v___x_4180_, 0, v___x_4197_);
v___x_4201_ = v___x_4180_;
goto v_reusejp_4200_;
}
else
{
lean_object* v_reuseFailAlloc_4215_; 
v_reuseFailAlloc_4215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4215_, 0, v___x_4197_);
lean_ctor_set(v_reuseFailAlloc_4215_, 1, v___x_4199_);
v___x_4201_ = v_reuseFailAlloc_4215_;
goto v_reusejp_4200_;
}
v_reusejp_4200_:
{
lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4213_; 
v___x_4202_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__1));
v___x_4203_ = l_Lean_JsonNumber_fromNat(v_fst_4187_);
v___x_4204_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4204_, 0, v___x_4203_);
v___x_4205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4205_, 0, v___x_4202_);
lean_ctor_set(v___x_4205_, 1, v___x_4204_);
v___x_4206_ = lean_box(0);
v___x_4207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4207_, 0, v___x_4205_);
lean_ctor_set(v___x_4207_, 1, v___x_4206_);
v___x_4208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4208_, 0, v___x_4201_);
lean_ctor_set(v___x_4208_, 1, v___x_4207_);
v___x_4209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4209_, 0, v___x_4196_);
lean_ctor_set(v___x_4209_, 1, v___x_4208_);
v___x_4210_ = l_Lean_Json_mkObj(v___x_4209_);
lean_dec_ref_known(v___x_4209_, 2);
v___x_4211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4211_, 0, v___x_4210_);
lean_ctor_set(v___x_4211_, 1, v_snd_4188_);
if (v_isShared_4186_ == 0)
{
lean_ctor_set(v___x_4185_, 0, v___x_4211_);
v___x_4213_ = v___x_4185_;
goto v_reusejp_4212_;
}
else
{
lean_object* v_reuseFailAlloc_4214_; 
v_reuseFailAlloc_4214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4214_, 0, v___x_4211_);
v___x_4213_ = v_reuseFailAlloc_4214_;
goto v_reusejp_4212_;
}
v_reusejp_4212_:
{
return v___x_4213_;
}
}
}
}
}
}
else
{
lean_object* v_a_4219_; lean_object* v___x_4221_; uint8_t v_isShared_4222_; uint8_t v_isSharedCheck_4226_; 
lean_del_object(v___x_4180_);
lean_dec(v_fst_4177_);
lean_dec(v_nfields_4173_);
v_a_4219_ = lean_ctor_get(v___x_4182_, 0);
v_isSharedCheck_4226_ = !lean_is_exclusive(v___x_4182_);
if (v_isSharedCheck_4226_ == 0)
{
v___x_4221_ = v___x_4182_;
v_isShared_4222_ = v_isSharedCheck_4226_;
goto v_resetjp_4220_;
}
else
{
lean_inc(v_a_4219_);
lean_dec(v___x_4182_);
v___x_4221_ = lean_box(0);
v_isShared_4222_ = v_isSharedCheck_4226_;
goto v_resetjp_4220_;
}
v_resetjp_4220_:
{
lean_object* v___x_4224_; 
if (v_isShared_4222_ == 0)
{
v___x_4224_ = v___x_4221_;
goto v_reusejp_4223_;
}
else
{
lean_object* v_reuseFailAlloc_4225_; 
v_reuseFailAlloc_4225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4225_, 0, v_a_4219_);
v___x_4224_ = v_reuseFailAlloc_4225_;
goto v_reusejp_4223_;
}
v_reusejp_4223_:
{
return v___x_4224_;
}
}
}
}
}
else
{
lean_object* v_a_4228_; lean_object* v___x_4230_; uint8_t v_isShared_4231_; uint8_t v_isSharedCheck_4235_; 
lean_dec_ref(v_rhs_4174_);
lean_dec(v_nfields_4173_);
v_a_4228_ = lean_ctor_get(v___x_4175_, 0);
v_isSharedCheck_4235_ = !lean_is_exclusive(v___x_4175_);
if (v_isSharedCheck_4235_ == 0)
{
v___x_4230_ = v___x_4175_;
v_isShared_4231_ = v_isSharedCheck_4235_;
goto v_resetjp_4229_;
}
else
{
lean_inc(v_a_4228_);
lean_dec(v___x_4175_);
v___x_4230_ = lean_box(0);
v_isShared_4231_ = v_isSharedCheck_4235_;
goto v_resetjp_4229_;
}
v_resetjp_4229_:
{
lean_object* v___x_4233_; 
if (v_isShared_4231_ == 0)
{
v___x_4233_ = v___x_4230_;
goto v_reusejp_4232_;
}
else
{
lean_object* v_reuseFailAlloc_4234_; 
v_reuseFailAlloc_4234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4234_, 0, v_a_4228_);
v___x_4233_ = v_reuseFailAlloc_4234_;
goto v_reusejp_4232_;
}
v_reusejp_4232_:
{
return v___x_4233_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(lean_object* v_x_4236_, lean_object* v_x_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_){
_start:
{
if (lean_obj_tag(v_x_4236_) == 0)
{
lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; 
v___x_4241_ = l_List_reverse___redArg(v_x_4237_);
v___x_4242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4242_, 0, v___x_4241_);
lean_ctor_set(v___x_4242_, 1, v___y_4239_);
v___x_4243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4243_, 0, v___x_4242_);
return v___x_4243_;
}
else
{
lean_object* v_head_4244_; lean_object* v_tail_4245_; lean_object* v___x_4247_; uint8_t v_isShared_4248_; uint8_t v_isSharedCheck_4265_; 
v_head_4244_ = lean_ctor_get(v_x_4236_, 0);
v_tail_4245_ = lean_ctor_get(v_x_4236_, 1);
v_isSharedCheck_4265_ = !lean_is_exclusive(v_x_4236_);
if (v_isSharedCheck_4265_ == 0)
{
v___x_4247_ = v_x_4236_;
v_isShared_4248_ = v_isSharedCheck_4265_;
goto v_resetjp_4246_;
}
else
{
lean_inc(v_tail_4245_);
lean_inc(v_head_4244_);
lean_dec(v_x_4236_);
v___x_4247_ = lean_box(0);
v_isShared_4248_ = v_isSharedCheck_4265_;
goto v_resetjp_4246_;
}
v_resetjp_4246_:
{
lean_object* v___x_4249_; 
v___x_4249_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(v_head_4244_, v___y_4238_, v___y_4239_);
if (lean_obj_tag(v___x_4249_) == 0)
{
lean_object* v_a_4250_; lean_object* v_fst_4251_; lean_object* v_snd_4252_; lean_object* v___x_4254_; 
v_a_4250_ = lean_ctor_get(v___x_4249_, 0);
lean_inc(v_a_4250_);
lean_dec_ref_known(v___x_4249_, 1);
v_fst_4251_ = lean_ctor_get(v_a_4250_, 0);
lean_inc(v_fst_4251_);
v_snd_4252_ = lean_ctor_get(v_a_4250_, 1);
lean_inc(v_snd_4252_);
lean_dec(v_a_4250_);
if (v_isShared_4248_ == 0)
{
lean_ctor_set(v___x_4247_, 1, v_x_4237_);
lean_ctor_set(v___x_4247_, 0, v_fst_4251_);
v___x_4254_ = v___x_4247_;
goto v_reusejp_4253_;
}
else
{
lean_object* v_reuseFailAlloc_4256_; 
v_reuseFailAlloc_4256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4256_, 0, v_fst_4251_);
lean_ctor_set(v_reuseFailAlloc_4256_, 1, v_x_4237_);
v___x_4254_ = v_reuseFailAlloc_4256_;
goto v_reusejp_4253_;
}
v_reusejp_4253_:
{
v_x_4236_ = v_tail_4245_;
v_x_4237_ = v___x_4254_;
v___y_4239_ = v_snd_4252_;
goto _start;
}
}
else
{
lean_object* v_a_4257_; lean_object* v___x_4259_; uint8_t v_isShared_4260_; uint8_t v_isSharedCheck_4264_; 
lean_del_object(v___x_4247_);
lean_dec(v_tail_4245_);
lean_dec(v_x_4237_);
v_a_4257_ = lean_ctor_get(v___x_4249_, 0);
v_isSharedCheck_4264_ = !lean_is_exclusive(v___x_4249_);
if (v_isSharedCheck_4264_ == 0)
{
v___x_4259_ = v___x_4249_;
v_isShared_4260_ = v_isSharedCheck_4264_;
goto v_resetjp_4258_;
}
else
{
lean_inc(v_a_4257_);
lean_dec(v___x_4249_);
v___x_4259_ = lean_box(0);
v_isShared_4260_ = v_isSharedCheck_4264_;
goto v_resetjp_4258_;
}
v_resetjp_4258_:
{
lean_object* v___x_4262_; 
if (v_isShared_4260_ == 0)
{
v___x_4262_ = v___x_4259_;
goto v_reusejp_4261_;
}
else
{
lean_object* v_reuseFailAlloc_4263_; 
v_reuseFailAlloc_4263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4263_, 0, v_a_4257_);
v___x_4262_ = v_reuseFailAlloc_4263_;
goto v_reusejp_4261_;
}
v_reusejp_4261_:
{
return v___x_4262_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18(size_t v_sz_4270_, size_t v_i_4271_, lean_object* v_bs_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_){
_start:
{
uint8_t v___x_4276_; 
v___x_4276_ = lean_usize_dec_lt(v_i_4271_, v_sz_4270_);
if (v___x_4276_ == 0)
{
lean_object* v___x_4277_; lean_object* v___x_4278_; 
v___x_4277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4277_, 0, v_bs_4272_);
lean_ctor_set(v___x_4277_, 1, v___y_4274_);
v___x_4278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4278_, 0, v___x_4277_);
return v___x_4278_;
}
else
{
lean_object* v_v_4279_; lean_object* v_toConstantVal_4280_; lean_object* v_all_4281_; lean_object* v_numParams_4282_; lean_object* v_numIndices_4283_; lean_object* v_numMotives_4284_; lean_object* v_numMinors_4285_; lean_object* v_rules_4286_; uint8_t v_k_4287_; uint8_t v_isUnsafe_4288_; lean_object* v_name_4289_; lean_object* v_levelParams_4290_; lean_object* v_type_4291_; lean_object* v___x_4292_; lean_object* v_bs_x27_4293_; lean_object* v___x_4294_; 
v_v_4279_ = lean_array_uget_borrowed(v_bs_4272_, v_i_4271_);
v_toConstantVal_4280_ = lean_ctor_get(v_v_4279_, 0);
v_all_4281_ = lean_ctor_get(v_v_4279_, 1);
lean_inc(v_all_4281_);
v_numParams_4282_ = lean_ctor_get(v_v_4279_, 2);
lean_inc(v_numParams_4282_);
v_numIndices_4283_ = lean_ctor_get(v_v_4279_, 3);
lean_inc(v_numIndices_4283_);
v_numMotives_4284_ = lean_ctor_get(v_v_4279_, 4);
lean_inc(v_numMotives_4284_);
v_numMinors_4285_ = lean_ctor_get(v_v_4279_, 5);
lean_inc(v_numMinors_4285_);
v_rules_4286_ = lean_ctor_get(v_v_4279_, 6);
lean_inc(v_rules_4286_);
v_k_4287_ = lean_ctor_get_uint8(v_v_4279_, sizeof(void*)*7);
v_isUnsafe_4288_ = lean_ctor_get_uint8(v_v_4279_, sizeof(void*)*7 + 1);
v_name_4289_ = lean_ctor_get(v_toConstantVal_4280_, 0);
lean_inc(v_name_4289_);
v_levelParams_4290_ = lean_ctor_get(v_toConstantVal_4280_, 1);
lean_inc(v_levelParams_4290_);
v_type_4291_ = lean_ctor_get(v_toConstantVal_4280_, 2);
lean_inc_ref(v_type_4291_);
v___x_4292_ = lean_unsigned_to_nat(0u);
v_bs_x27_4293_ = lean_array_uset(v_bs_4272_, v_i_4271_, v___x_4292_);
v___x_4294_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4289_, v___y_4273_, v___y_4274_);
if (lean_obj_tag(v___x_4294_) == 0)
{
lean_object* v_a_4295_; lean_object* v_fst_4296_; lean_object* v_snd_4297_; lean_object* v___x_4299_; uint8_t v_isShared_4300_; uint8_t v_isSharedCheck_4429_; 
v_a_4295_ = lean_ctor_get(v___x_4294_, 0);
lean_inc(v_a_4295_);
lean_dec_ref_known(v___x_4294_, 1);
v_fst_4296_ = lean_ctor_get(v_a_4295_, 0);
v_snd_4297_ = lean_ctor_get(v_a_4295_, 1);
v_isSharedCheck_4429_ = !lean_is_exclusive(v_a_4295_);
if (v_isSharedCheck_4429_ == 0)
{
v___x_4299_ = v_a_4295_;
v_isShared_4300_ = v_isSharedCheck_4429_;
goto v_resetjp_4298_;
}
else
{
lean_inc(v_snd_4297_);
lean_inc(v_fst_4296_);
lean_dec(v_a_4295_);
v___x_4299_ = lean_box(0);
v_isShared_4300_ = v_isSharedCheck_4429_;
goto v_resetjp_4298_;
}
v_resetjp_4298_:
{
lean_object* v___x_4301_; 
v___x_4301_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4290_, v___y_4273_, v_snd_4297_);
if (lean_obj_tag(v___x_4301_) == 0)
{
lean_object* v_a_4302_; lean_object* v_fst_4303_; lean_object* v_snd_4304_; lean_object* v___x_4306_; uint8_t v_isShared_4307_; uint8_t v_isSharedCheck_4420_; 
v_a_4302_ = lean_ctor_get(v___x_4301_, 0);
lean_inc(v_a_4302_);
lean_dec_ref_known(v___x_4301_, 1);
v_fst_4303_ = lean_ctor_get(v_a_4302_, 0);
v_snd_4304_ = lean_ctor_get(v_a_4302_, 1);
v_isSharedCheck_4420_ = !lean_is_exclusive(v_a_4302_);
if (v_isSharedCheck_4420_ == 0)
{
v___x_4306_ = v_a_4302_;
v_isShared_4307_ = v_isSharedCheck_4420_;
goto v_resetjp_4305_;
}
else
{
lean_inc(v_snd_4304_);
lean_inc(v_fst_4303_);
lean_dec(v_a_4302_);
v___x_4306_ = lean_box(0);
v_isShared_4307_ = v_isSharedCheck_4420_;
goto v_resetjp_4305_;
}
v_resetjp_4305_:
{
lean_object* v___x_4308_; 
v___x_4308_ = l_LeanExport_dumpExpr(v_type_4291_, v___y_4273_, v_snd_4304_);
if (lean_obj_tag(v___x_4308_) == 0)
{
lean_object* v_a_4309_; lean_object* v_fst_4310_; lean_object* v_snd_4311_; lean_object* v___x_4313_; uint8_t v_isShared_4314_; uint8_t v_isSharedCheck_4411_; 
v_a_4309_ = lean_ctor_get(v___x_4308_, 0);
lean_inc(v_a_4309_);
lean_dec_ref_known(v___x_4308_, 1);
v_fst_4310_ = lean_ctor_get(v_a_4309_, 0);
v_snd_4311_ = lean_ctor_get(v_a_4309_, 1);
v_isSharedCheck_4411_ = !lean_is_exclusive(v_a_4309_);
if (v_isSharedCheck_4411_ == 0)
{
v___x_4313_ = v_a_4309_;
v_isShared_4314_ = v_isSharedCheck_4411_;
goto v_resetjp_4312_;
}
else
{
lean_inc(v_snd_4311_);
lean_inc(v_fst_4310_);
lean_dec(v_a_4309_);
v___x_4313_ = lean_box(0);
v_isShared_4314_ = v_isSharedCheck_4411_;
goto v_resetjp_4312_;
}
v_resetjp_4312_:
{
lean_object* v___x_4315_; 
v___x_4315_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_4281_, v___y_4273_, v_snd_4311_);
if (lean_obj_tag(v___x_4315_) == 0)
{
lean_object* v_a_4316_; lean_object* v_fst_4317_; lean_object* v_snd_4318_; lean_object* v___x_4320_; uint8_t v_isShared_4321_; uint8_t v_isSharedCheck_4402_; 
v_a_4316_ = lean_ctor_get(v___x_4315_, 0);
lean_inc(v_a_4316_);
lean_dec_ref_known(v___x_4315_, 1);
v_fst_4317_ = lean_ctor_get(v_a_4316_, 0);
v_snd_4318_ = lean_ctor_get(v_a_4316_, 1);
v_isSharedCheck_4402_ = !lean_is_exclusive(v_a_4316_);
if (v_isSharedCheck_4402_ == 0)
{
v___x_4320_ = v_a_4316_;
v_isShared_4321_ = v_isSharedCheck_4402_;
goto v_resetjp_4319_;
}
else
{
lean_inc(v_snd_4318_);
lean_inc(v_fst_4317_);
lean_dec(v_a_4316_);
v___x_4320_ = lean_box(0);
v_isShared_4321_ = v_isSharedCheck_4402_;
goto v_resetjp_4319_;
}
v_resetjp_4319_:
{
lean_object* v___x_4322_; lean_object* v___x_4323_; 
v___x_4322_ = lean_box(0);
v___x_4323_ = l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(v_rules_4286_, v___x_4322_, v___y_4273_, v_snd_4318_);
if (lean_obj_tag(v___x_4323_) == 0)
{
lean_object* v_a_4324_; lean_object* v_fst_4325_; lean_object* v_snd_4326_; lean_object* v___x_4328_; uint8_t v_isShared_4329_; uint8_t v_isSharedCheck_4393_; 
v_a_4324_ = lean_ctor_get(v___x_4323_, 0);
lean_inc(v_a_4324_);
lean_dec_ref_known(v___x_4323_, 1);
v_fst_4325_ = lean_ctor_get(v_a_4324_, 0);
v_snd_4326_ = lean_ctor_get(v_a_4324_, 1);
v_isSharedCheck_4393_ = !lean_is_exclusive(v_a_4324_);
if (v_isSharedCheck_4393_ == 0)
{
v___x_4328_ = v_a_4324_;
v_isShared_4329_ = v_isSharedCheck_4393_;
goto v_resetjp_4327_;
}
else
{
lean_inc(v_snd_4326_);
lean_inc(v_fst_4325_);
lean_dec(v_a_4324_);
v___x_4328_ = lean_box(0);
v_isShared_4329_ = v_isSharedCheck_4393_;
goto v_resetjp_4327_;
}
v_resetjp_4327_:
{
lean_object* v___x_4330_; lean_object* v___x_4331_; lean_object* v___x_4332_; lean_object* v___x_4334_; 
v___x_4330_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_4331_ = l_Lean_JsonNumber_fromNat(v_fst_4296_);
v___x_4332_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4332_, 0, v___x_4331_);
if (v_isShared_4329_ == 0)
{
lean_ctor_set(v___x_4328_, 1, v___x_4332_);
lean_ctor_set(v___x_4328_, 0, v___x_4330_);
v___x_4334_ = v___x_4328_;
goto v_reusejp_4333_;
}
else
{
lean_object* v_reuseFailAlloc_4392_; 
v_reuseFailAlloc_4392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4392_, 0, v___x_4330_);
lean_ctor_set(v_reuseFailAlloc_4392_, 1, v___x_4332_);
v___x_4334_ = v_reuseFailAlloc_4392_;
goto v_reusejp_4333_;
}
v_reusejp_4333_:
{
lean_object* v___x_4335_; lean_object* v___x_4337_; 
v___x_4335_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_4321_ == 0)
{
lean_ctor_set(v___x_4320_, 1, v_fst_4303_);
lean_ctor_set(v___x_4320_, 0, v___x_4335_);
v___x_4337_ = v___x_4320_;
goto v_reusejp_4336_;
}
else
{
lean_object* v_reuseFailAlloc_4391_; 
v_reuseFailAlloc_4391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4391_, 0, v___x_4335_);
lean_ctor_set(v_reuseFailAlloc_4391_, 1, v_fst_4303_);
v___x_4337_ = v_reuseFailAlloc_4391_;
goto v_reusejp_4336_;
}
v_reusejp_4336_:
{
lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4342_; 
v___x_4338_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_4339_ = l_Lean_JsonNumber_fromNat(v_fst_4310_);
v___x_4340_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4340_, 0, v___x_4339_);
if (v_isShared_4314_ == 0)
{
lean_ctor_set(v___x_4313_, 1, v___x_4340_);
lean_ctor_set(v___x_4313_, 0, v___x_4338_);
v___x_4342_ = v___x_4313_;
goto v_reusejp_4341_;
}
else
{
lean_object* v_reuseFailAlloc_4390_; 
v_reuseFailAlloc_4390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4390_, 0, v___x_4338_);
lean_ctor_set(v_reuseFailAlloc_4390_, 1, v___x_4340_);
v___x_4342_ = v_reuseFailAlloc_4390_;
goto v_reusejp_4341_;
}
v_reusejp_4341_:
{
lean_object* v___x_4343_; lean_object* v___x_4345_; 
v___x_4343_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_4307_ == 0)
{
lean_ctor_set(v___x_4306_, 1, v_fst_4317_);
lean_ctor_set(v___x_4306_, 0, v___x_4343_);
v___x_4345_ = v___x_4306_;
goto v_reusejp_4344_;
}
else
{
lean_object* v_reuseFailAlloc_4389_; 
v_reuseFailAlloc_4389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4389_, 0, v___x_4343_);
lean_ctor_set(v_reuseFailAlloc_4389_, 1, v_fst_4317_);
v___x_4345_ = v_reuseFailAlloc_4389_;
goto v_reusejp_4344_;
}
v_reusejp_4344_:
{
lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4350_; 
v___x_4346_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__4));
v___x_4347_ = l_Lean_JsonNumber_fromNat(v_numParams_4282_);
v___x_4348_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4348_, 0, v___x_4347_);
if (v_isShared_4300_ == 0)
{
lean_ctor_set(v___x_4299_, 1, v___x_4348_);
lean_ctor_set(v___x_4299_, 0, v___x_4346_);
v___x_4350_ = v___x_4299_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4388_; 
v_reuseFailAlloc_4388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4388_, 0, v___x_4346_);
lean_ctor_set(v_reuseFailAlloc_4388_, 1, v___x_4348_);
v___x_4350_ = v_reuseFailAlloc_4388_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; size_t v___x_4384_; size_t v___x_4385_; lean_object* v___x_4386_; 
v___x_4351_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_4352_ = l_Lean_JsonNumber_fromNat(v_numIndices_4283_);
v___x_4353_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4353_, 0, v___x_4352_);
v___x_4354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4354_, 0, v___x_4351_);
lean_ctor_set(v___x_4354_, 1, v___x_4353_);
v___x_4355_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__0));
v___x_4356_ = l_Lean_JsonNumber_fromNat(v_numMotives_4284_);
v___x_4357_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4357_, 0, v___x_4356_);
v___x_4358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4358_, 0, v___x_4355_);
lean_ctor_set(v___x_4358_, 1, v___x_4357_);
v___x_4359_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__1));
v___x_4360_ = l_Lean_JsonNumber_fromNat(v_numMinors_4285_);
v___x_4361_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4361_, 0, v___x_4360_);
v___x_4362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4362_, 0, v___x_4359_);
lean_ctor_set(v___x_4362_, 1, v___x_4361_);
v___x_4363_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__2));
v___x_4364_ = l_Lean_List_toJson___at___00LeanExport_dumpConstant_spec__3(v_fst_4325_);
v___x_4365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4365_, 0, v___x_4363_);
lean_ctor_set(v___x_4365_, 1, v___x_4364_);
v___x_4366_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__3));
v___x_4367_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4367_, 0, v_k_4287_);
v___x_4368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4368_, 0, v___x_4366_);
lean_ctor_set(v___x_4368_, 1, v___x_4367_);
v___x_4369_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6));
v___x_4370_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4370_, 0, v_isUnsafe_4288_);
v___x_4371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4371_, 0, v___x_4369_);
lean_ctor_set(v___x_4371_, 1, v___x_4370_);
v___x_4372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4372_, 0, v___x_4371_);
lean_ctor_set(v___x_4372_, 1, v___x_4322_);
v___x_4373_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4373_, 0, v___x_4368_);
lean_ctor_set(v___x_4373_, 1, v___x_4372_);
v___x_4374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4374_, 0, v___x_4365_);
lean_ctor_set(v___x_4374_, 1, v___x_4373_);
v___x_4375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4375_, 0, v___x_4362_);
lean_ctor_set(v___x_4375_, 1, v___x_4374_);
v___x_4376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4376_, 0, v___x_4358_);
lean_ctor_set(v___x_4376_, 1, v___x_4375_);
v___x_4377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4377_, 0, v___x_4354_);
lean_ctor_set(v___x_4377_, 1, v___x_4376_);
v___x_4378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4378_, 0, v___x_4350_);
lean_ctor_set(v___x_4378_, 1, v___x_4377_);
v___x_4379_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4379_, 0, v___x_4345_);
lean_ctor_set(v___x_4379_, 1, v___x_4378_);
v___x_4380_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4380_, 0, v___x_4342_);
lean_ctor_set(v___x_4380_, 1, v___x_4379_);
v___x_4381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4381_, 0, v___x_4337_);
lean_ctor_set(v___x_4381_, 1, v___x_4380_);
v___x_4382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4382_, 0, v___x_4334_);
lean_ctor_set(v___x_4382_, 1, v___x_4381_);
v___x_4383_ = l_Lean_Json_mkObj(v___x_4382_);
lean_dec_ref_known(v___x_4382_, 2);
v___x_4384_ = ((size_t)1ULL);
v___x_4385_ = lean_usize_add(v_i_4271_, v___x_4384_);
v___x_4386_ = lean_array_uset(v_bs_x27_4293_, v_i_4271_, v___x_4383_);
v_i_4271_ = v___x_4385_;
v_bs_4272_ = v___x_4386_;
v___y_4274_ = v_snd_4326_;
goto _start;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4394_; lean_object* v___x_4396_; uint8_t v_isShared_4397_; uint8_t v_isSharedCheck_4401_; 
lean_del_object(v___x_4320_);
lean_dec(v_fst_4317_);
lean_del_object(v___x_4313_);
lean_dec(v_fst_4310_);
lean_del_object(v___x_4306_);
lean_dec(v_fst_4303_);
lean_del_object(v___x_4299_);
lean_dec(v_fst_4296_);
lean_dec_ref(v_bs_x27_4293_);
lean_dec(v_numMinors_4285_);
lean_dec(v_numMotives_4284_);
lean_dec(v_numIndices_4283_);
lean_dec(v_numParams_4282_);
v_a_4394_ = lean_ctor_get(v___x_4323_, 0);
v_isSharedCheck_4401_ = !lean_is_exclusive(v___x_4323_);
if (v_isSharedCheck_4401_ == 0)
{
v___x_4396_ = v___x_4323_;
v_isShared_4397_ = v_isSharedCheck_4401_;
goto v_resetjp_4395_;
}
else
{
lean_inc(v_a_4394_);
lean_dec(v___x_4323_);
v___x_4396_ = lean_box(0);
v_isShared_4397_ = v_isSharedCheck_4401_;
goto v_resetjp_4395_;
}
v_resetjp_4395_:
{
lean_object* v___x_4399_; 
if (v_isShared_4397_ == 0)
{
v___x_4399_ = v___x_4396_;
goto v_reusejp_4398_;
}
else
{
lean_object* v_reuseFailAlloc_4400_; 
v_reuseFailAlloc_4400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4400_, 0, v_a_4394_);
v___x_4399_ = v_reuseFailAlloc_4400_;
goto v_reusejp_4398_;
}
v_reusejp_4398_:
{
return v___x_4399_;
}
}
}
}
}
else
{
lean_object* v_a_4403_; lean_object* v___x_4405_; uint8_t v_isShared_4406_; uint8_t v_isSharedCheck_4410_; 
lean_del_object(v___x_4313_);
lean_dec(v_fst_4310_);
lean_del_object(v___x_4306_);
lean_dec(v_fst_4303_);
lean_del_object(v___x_4299_);
lean_dec(v_fst_4296_);
lean_dec_ref(v_bs_x27_4293_);
lean_dec(v_rules_4286_);
lean_dec(v_numMinors_4285_);
lean_dec(v_numMotives_4284_);
lean_dec(v_numIndices_4283_);
lean_dec(v_numParams_4282_);
v_a_4403_ = lean_ctor_get(v___x_4315_, 0);
v_isSharedCheck_4410_ = !lean_is_exclusive(v___x_4315_);
if (v_isSharedCheck_4410_ == 0)
{
v___x_4405_ = v___x_4315_;
v_isShared_4406_ = v_isSharedCheck_4410_;
goto v_resetjp_4404_;
}
else
{
lean_inc(v_a_4403_);
lean_dec(v___x_4315_);
v___x_4405_ = lean_box(0);
v_isShared_4406_ = v_isSharedCheck_4410_;
goto v_resetjp_4404_;
}
v_resetjp_4404_:
{
lean_object* v___x_4408_; 
if (v_isShared_4406_ == 0)
{
v___x_4408_ = v___x_4405_;
goto v_reusejp_4407_;
}
else
{
lean_object* v_reuseFailAlloc_4409_; 
v_reuseFailAlloc_4409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4409_, 0, v_a_4403_);
v___x_4408_ = v_reuseFailAlloc_4409_;
goto v_reusejp_4407_;
}
v_reusejp_4407_:
{
return v___x_4408_;
}
}
}
}
}
else
{
lean_object* v_a_4412_; lean_object* v___x_4414_; uint8_t v_isShared_4415_; uint8_t v_isSharedCheck_4419_; 
lean_del_object(v___x_4306_);
lean_dec(v_fst_4303_);
lean_del_object(v___x_4299_);
lean_dec(v_fst_4296_);
lean_dec_ref(v_bs_x27_4293_);
lean_dec(v_rules_4286_);
lean_dec(v_numMinors_4285_);
lean_dec(v_numMotives_4284_);
lean_dec(v_numIndices_4283_);
lean_dec(v_numParams_4282_);
lean_dec(v_all_4281_);
v_a_4412_ = lean_ctor_get(v___x_4308_, 0);
v_isSharedCheck_4419_ = !lean_is_exclusive(v___x_4308_);
if (v_isSharedCheck_4419_ == 0)
{
v___x_4414_ = v___x_4308_;
v_isShared_4415_ = v_isSharedCheck_4419_;
goto v_resetjp_4413_;
}
else
{
lean_inc(v_a_4412_);
lean_dec(v___x_4308_);
v___x_4414_ = lean_box(0);
v_isShared_4415_ = v_isSharedCheck_4419_;
goto v_resetjp_4413_;
}
v_resetjp_4413_:
{
lean_object* v___x_4417_; 
if (v_isShared_4415_ == 0)
{
v___x_4417_ = v___x_4414_;
goto v_reusejp_4416_;
}
else
{
lean_object* v_reuseFailAlloc_4418_; 
v_reuseFailAlloc_4418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4418_, 0, v_a_4412_);
v___x_4417_ = v_reuseFailAlloc_4418_;
goto v_reusejp_4416_;
}
v_reusejp_4416_:
{
return v___x_4417_;
}
}
}
}
}
else
{
lean_object* v_a_4421_; lean_object* v___x_4423_; uint8_t v_isShared_4424_; uint8_t v_isSharedCheck_4428_; 
lean_del_object(v___x_4299_);
lean_dec(v_fst_4296_);
lean_dec_ref(v_bs_x27_4293_);
lean_dec_ref(v_type_4291_);
lean_dec(v_rules_4286_);
lean_dec(v_numMinors_4285_);
lean_dec(v_numMotives_4284_);
lean_dec(v_numIndices_4283_);
lean_dec(v_numParams_4282_);
lean_dec(v_all_4281_);
v_a_4421_ = lean_ctor_get(v___x_4301_, 0);
v_isSharedCheck_4428_ = !lean_is_exclusive(v___x_4301_);
if (v_isSharedCheck_4428_ == 0)
{
v___x_4423_ = v___x_4301_;
v_isShared_4424_ = v_isSharedCheck_4428_;
goto v_resetjp_4422_;
}
else
{
lean_inc(v_a_4421_);
lean_dec(v___x_4301_);
v___x_4423_ = lean_box(0);
v_isShared_4424_ = v_isSharedCheck_4428_;
goto v_resetjp_4422_;
}
v_resetjp_4422_:
{
lean_object* v___x_4426_; 
if (v_isShared_4424_ == 0)
{
v___x_4426_ = v___x_4423_;
goto v_reusejp_4425_;
}
else
{
lean_object* v_reuseFailAlloc_4427_; 
v_reuseFailAlloc_4427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4427_, 0, v_a_4421_);
v___x_4426_ = v_reuseFailAlloc_4427_;
goto v_reusejp_4425_;
}
v_reusejp_4425_:
{
return v___x_4426_;
}
}
}
}
}
else
{
lean_object* v_a_4430_; lean_object* v___x_4432_; uint8_t v_isShared_4433_; uint8_t v_isSharedCheck_4437_; 
lean_dec_ref(v_bs_x27_4293_);
lean_dec_ref(v_type_4291_);
lean_dec(v_levelParams_4290_);
lean_dec(v_rules_4286_);
lean_dec(v_numMinors_4285_);
lean_dec(v_numMotives_4284_);
lean_dec(v_numIndices_4283_);
lean_dec(v_numParams_4282_);
lean_dec(v_all_4281_);
v_a_4430_ = lean_ctor_get(v___x_4294_, 0);
v_isSharedCheck_4437_ = !lean_is_exclusive(v___x_4294_);
if (v_isSharedCheck_4437_ == 0)
{
v___x_4432_ = v___x_4294_;
v_isShared_4433_ = v_isSharedCheck_4437_;
goto v_resetjp_4431_;
}
else
{
lean_inc(v_a_4430_);
lean_dec(v___x_4294_);
v___x_4432_ = lean_box(0);
v_isShared_4433_ = v_isSharedCheck_4437_;
goto v_resetjp_4431_;
}
v_resetjp_4431_:
{
lean_object* v___x_4435_; 
if (v_isShared_4433_ == 0)
{
v___x_4435_ = v___x_4432_;
goto v_reusejp_4434_;
}
else
{
lean_object* v_reuseFailAlloc_4436_; 
v_reuseFailAlloc_4436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4436_, 0, v_a_4430_);
v___x_4435_ = v_reuseFailAlloc_4436_;
goto v_reusejp_4434_;
}
v_reusejp_4434_:
{
return v___x_4435_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(uint8_t v___x_4486_, lean_object* v_as_x27_4487_, lean_object* v_b_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_){
_start:
{
if (lean_obj_tag(v_as_x27_4487_) == 0)
{
lean_object* v___x_4492_; lean_object* v___x_4493_; 
v___x_4492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4492_, 0, v_b_4488_);
lean_ctor_set(v___x_4492_, 1, v___y_4490_);
v___x_4493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4493_, 0, v___x_4492_);
return v___x_4493_;
}
else
{
lean_object* v_head_4494_; lean_object* v_tail_4495_; lean_object* v___x_4496_; lean_object* v___y_4498_; lean_object* v___y_4499_; lean_object* v___x_4527_; 
lean_dec_ref(v_b_4488_);
v_head_4494_ = lean_ctor_get(v_as_x27_4487_, 0);
v_tail_4495_ = lean_ctor_get(v_as_x27_4487_, 1);
v___x_4496_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0));
lean_inc(v_head_4494_);
lean_inc_ref(v___y_4489_);
v___x_4527_ = l_Lean_Environment_find_x3f(v___y_4489_, v_head_4494_, v___x_4486_);
if (lean_obj_tag(v___x_4527_) == 1)
{
lean_object* v_val_4528_; lean_object* v___x_4530_; uint8_t v_isShared_4531_; uint8_t v_isSharedCheck_4651_; 
v_val_4528_ = lean_ctor_get(v___x_4527_, 0);
v_isSharedCheck_4651_ = !lean_is_exclusive(v___x_4527_);
if (v_isSharedCheck_4651_ == 0)
{
v___x_4530_ = v___x_4527_;
v_isShared_4531_ = v_isSharedCheck_4651_;
goto v_resetjp_4529_;
}
else
{
lean_inc(v_val_4528_);
lean_dec(v___x_4527_);
v___x_4530_ = lean_box(0);
v_isShared_4531_ = v_isSharedCheck_4651_;
goto v_resetjp_4529_;
}
v_resetjp_4529_:
{
if (lean_obj_tag(v_val_4528_) == 4)
{
lean_object* v_val_4532_; lean_object* v___x_4534_; uint8_t v_isShared_4535_; uint8_t v_isSharedCheck_4650_; 
v_val_4532_ = lean_ctor_get(v_val_4528_, 0);
v_isSharedCheck_4650_ = !lean_is_exclusive(v_val_4528_);
if (v_isSharedCheck_4650_ == 0)
{
v___x_4534_ = v_val_4528_;
v_isShared_4535_ = v_isSharedCheck_4650_;
goto v_resetjp_4533_;
}
else
{
lean_inc(v_val_4532_);
lean_dec(v_val_4528_);
v___x_4534_ = lean_box(0);
v_isShared_4535_ = v_isSharedCheck_4650_;
goto v_resetjp_4533_;
}
v_resetjp_4533_:
{
lean_object* v_toConstantVal_4536_; lean_object* v_visitedNames_4537_; lean_object* v_visitedLevels_4538_; lean_object* v_visitedExprs_4539_; lean_object* v_visitedConstants_4540_; lean_object* v_noMDataExprs_4541_; uint8_t v_exportMData_4542_; uint8_t v_exportUnsafe_4543_; uint8_t v_ignoreMissing_4544_; lean_object* v_recursorMap_4545_; lean_object* v___x_4547_; uint8_t v_isShared_4548_; uint8_t v_isSharedCheck_4649_; 
v_toConstantVal_4536_ = lean_ctor_get(v_val_4532_, 0);
lean_inc_ref(v_toConstantVal_4536_);
v_visitedNames_4537_ = lean_ctor_get(v___y_4490_, 0);
v_visitedLevels_4538_ = lean_ctor_get(v___y_4490_, 1);
v_visitedExprs_4539_ = lean_ctor_get(v___y_4490_, 2);
v_visitedConstants_4540_ = lean_ctor_get(v___y_4490_, 3);
v_noMDataExprs_4541_ = lean_ctor_get(v___y_4490_, 4);
v_exportMData_4542_ = lean_ctor_get_uint8(v___y_4490_, sizeof(void*)*6);
v_exportUnsafe_4543_ = lean_ctor_get_uint8(v___y_4490_, sizeof(void*)*6 + 1);
v_ignoreMissing_4544_ = lean_ctor_get_uint8(v___y_4490_, sizeof(void*)*6 + 2);
v_recursorMap_4545_ = lean_ctor_get(v___y_4490_, 5);
v_isSharedCheck_4649_ = !lean_is_exclusive(v___y_4490_);
if (v_isSharedCheck_4649_ == 0)
{
v___x_4547_ = v___y_4490_;
v_isShared_4548_ = v_isSharedCheck_4649_;
goto v_resetjp_4546_;
}
else
{
lean_inc(v_recursorMap_4545_);
lean_inc(v_noMDataExprs_4541_);
lean_inc(v_visitedConstants_4540_);
lean_inc(v_visitedExprs_4539_);
lean_inc(v_visitedLevels_4538_);
lean_inc(v_visitedNames_4537_);
lean_dec(v___y_4490_);
v___x_4547_ = lean_box(0);
v_isShared_4548_ = v_isSharedCheck_4649_;
goto v_resetjp_4546_;
}
v_resetjp_4546_:
{
uint8_t v_kind_4549_; lean_object* v_name_4550_; lean_object* v_levelParams_4551_; lean_object* v_type_4552_; lean_object* v___x_4553_; lean_object* v___x_4555_; 
v_kind_4549_ = lean_ctor_get_uint8(v_val_4532_, sizeof(void*)*1);
lean_dec_ref(v_val_4532_);
v_name_4550_ = lean_ctor_get(v_toConstantVal_4536_, 0);
lean_inc(v_name_4550_);
v_levelParams_4551_ = lean_ctor_get(v_toConstantVal_4536_, 1);
lean_inc(v_levelParams_4551_);
v_type_4552_ = lean_ctor_get(v_toConstantVal_4536_, 2);
lean_inc_ref(v_type_4552_);
lean_dec_ref(v_toConstantVal_4536_);
lean_inc(v_head_4494_);
v___x_4553_ = l_Lean_NameHashSet_insert(v_visitedConstants_4540_, v_head_4494_);
if (v_isShared_4548_ == 0)
{
lean_ctor_set(v___x_4547_, 3, v___x_4553_);
v___x_4555_ = v___x_4547_;
goto v_reusejp_4554_;
}
else
{
lean_object* v_reuseFailAlloc_4648_; 
v_reuseFailAlloc_4648_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_4648_, 0, v_visitedNames_4537_);
lean_ctor_set(v_reuseFailAlloc_4648_, 1, v_visitedLevels_4538_);
lean_ctor_set(v_reuseFailAlloc_4648_, 2, v_visitedExprs_4539_);
lean_ctor_set(v_reuseFailAlloc_4648_, 3, v___x_4553_);
lean_ctor_set(v_reuseFailAlloc_4648_, 4, v_noMDataExprs_4541_);
lean_ctor_set(v_reuseFailAlloc_4648_, 5, v_recursorMap_4545_);
lean_ctor_set_uint8(v_reuseFailAlloc_4648_, sizeof(void*)*6, v_exportMData_4542_);
lean_ctor_set_uint8(v_reuseFailAlloc_4648_, sizeof(void*)*6 + 1, v_exportUnsafe_4543_);
lean_ctor_set_uint8(v_reuseFailAlloc_4648_, sizeof(void*)*6 + 2, v_ignoreMissing_4544_);
v___x_4555_ = v_reuseFailAlloc_4648_;
goto v_reusejp_4554_;
}
v_reusejp_4554_:
{
lean_object* v___x_4556_; 
v___x_4556_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4550_, v___y_4489_, v___x_4555_);
if (lean_obj_tag(v___x_4556_) == 0)
{
lean_object* v_a_4557_; lean_object* v_fst_4558_; lean_object* v_snd_4559_; lean_object* v___x_4561_; uint8_t v_isShared_4562_; uint8_t v_isSharedCheck_4639_; 
v_a_4557_ = lean_ctor_get(v___x_4556_, 0);
lean_inc(v_a_4557_);
lean_dec_ref_known(v___x_4556_, 1);
v_fst_4558_ = lean_ctor_get(v_a_4557_, 0);
v_snd_4559_ = lean_ctor_get(v_a_4557_, 1);
v_isSharedCheck_4639_ = !lean_is_exclusive(v_a_4557_);
if (v_isSharedCheck_4639_ == 0)
{
v___x_4561_ = v_a_4557_;
v_isShared_4562_ = v_isSharedCheck_4639_;
goto v_resetjp_4560_;
}
else
{
lean_inc(v_snd_4559_);
lean_inc(v_fst_4558_);
lean_dec(v_a_4557_);
v___x_4561_ = lean_box(0);
v_isShared_4562_ = v_isSharedCheck_4639_;
goto v_resetjp_4560_;
}
v_resetjp_4560_:
{
lean_object* v___x_4563_; 
v___x_4563_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4551_, v___y_4489_, v_snd_4559_);
if (lean_obj_tag(v___x_4563_) == 0)
{
lean_object* v_a_4564_; lean_object* v_fst_4565_; lean_object* v_snd_4566_; lean_object* v___x_4568_; uint8_t v_isShared_4569_; uint8_t v_isSharedCheck_4630_; 
v_a_4564_ = lean_ctor_get(v___x_4563_, 0);
lean_inc(v_a_4564_);
lean_dec_ref_known(v___x_4563_, 1);
v_fst_4565_ = lean_ctor_get(v_a_4564_, 0);
v_snd_4566_ = lean_ctor_get(v_a_4564_, 1);
v_isSharedCheck_4630_ = !lean_is_exclusive(v_a_4564_);
if (v_isSharedCheck_4630_ == 0)
{
v___x_4568_ = v_a_4564_;
v_isShared_4569_ = v_isSharedCheck_4630_;
goto v_resetjp_4567_;
}
else
{
lean_inc(v_snd_4566_);
lean_inc(v_fst_4565_);
lean_dec(v_a_4564_);
v___x_4568_ = lean_box(0);
v_isShared_4569_ = v_isSharedCheck_4630_;
goto v_resetjp_4567_;
}
v_resetjp_4567_:
{
lean_object* v___x_4570_; 
v___x_4570_ = l_LeanExport_dumpExpr(v_type_4552_, v___y_4489_, v_snd_4566_);
if (lean_obj_tag(v___x_4570_) == 0)
{
lean_object* v_a_4571_; lean_object* v_fst_4572_; lean_object* v_snd_4573_; lean_object* v___x_4575_; uint8_t v_isShared_4576_; uint8_t v_isSharedCheck_4621_; 
v_a_4571_ = lean_ctor_get(v___x_4570_, 0);
lean_inc(v_a_4571_);
lean_dec_ref_known(v___x_4570_, 1);
v_fst_4572_ = lean_ctor_get(v_a_4571_, 0);
v_snd_4573_ = lean_ctor_get(v_a_4571_, 1);
v_isSharedCheck_4621_ = !lean_is_exclusive(v_a_4571_);
if (v_isSharedCheck_4621_ == 0)
{
v___x_4575_ = v_a_4571_;
v_isShared_4576_ = v_isSharedCheck_4621_;
goto v_resetjp_4574_;
}
else
{
lean_inc(v_snd_4573_);
lean_inc(v_fst_4572_);
lean_dec(v_a_4571_);
v___x_4575_ = lean_box(0);
v_isShared_4576_ = v_isSharedCheck_4621_;
goto v_resetjp_4574_;
}
v_resetjp_4574_:
{
lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; lean_object* v___x_4581_; 
v___x_4577_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__5));
v___x_4578_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_4579_ = l_Lean_JsonNumber_fromNat(v_fst_4558_);
if (v_isShared_4535_ == 0)
{
lean_ctor_set_tag(v___x_4534_, 2);
lean_ctor_set(v___x_4534_, 0, v___x_4579_);
v___x_4581_ = v___x_4534_;
goto v_reusejp_4580_;
}
else
{
lean_object* v_reuseFailAlloc_4620_; 
v_reuseFailAlloc_4620_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4620_, 0, v___x_4579_);
v___x_4581_ = v_reuseFailAlloc_4620_;
goto v_reusejp_4580_;
}
v_reusejp_4580_:
{
lean_object* v___x_4583_; 
if (v_isShared_4576_ == 0)
{
lean_ctor_set(v___x_4575_, 1, v___x_4581_);
lean_ctor_set(v___x_4575_, 0, v___x_4578_);
v___x_4583_ = v___x_4575_;
goto v_reusejp_4582_;
}
else
{
lean_object* v_reuseFailAlloc_4619_; 
v_reuseFailAlloc_4619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4619_, 0, v___x_4578_);
lean_ctor_set(v_reuseFailAlloc_4619_, 1, v___x_4581_);
v___x_4583_ = v_reuseFailAlloc_4619_;
goto v_reusejp_4582_;
}
v_reusejp_4582_:
{
lean_object* v___x_4584_; lean_object* v___x_4586_; 
v___x_4584_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_4569_ == 0)
{
lean_ctor_set(v___x_4568_, 1, v_fst_4565_);
lean_ctor_set(v___x_4568_, 0, v___x_4584_);
v___x_4586_ = v___x_4568_;
goto v_reusejp_4585_;
}
else
{
lean_object* v_reuseFailAlloc_4618_; 
v_reuseFailAlloc_4618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4618_, 0, v___x_4584_);
lean_ctor_set(v_reuseFailAlloc_4618_, 1, v_fst_4565_);
v___x_4586_ = v_reuseFailAlloc_4618_;
goto v_reusejp_4585_;
}
v_reusejp_4585_:
{
lean_object* v___x_4587_; lean_object* v___x_4588_; lean_object* v___x_4590_; 
v___x_4587_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_4588_ = l_Lean_JsonNumber_fromNat(v_fst_4572_);
if (v_isShared_4531_ == 0)
{
lean_ctor_set_tag(v___x_4530_, 2);
lean_ctor_set(v___x_4530_, 0, v___x_4588_);
v___x_4590_ = v___x_4530_;
goto v_reusejp_4589_;
}
else
{
lean_object* v_reuseFailAlloc_4617_; 
v_reuseFailAlloc_4617_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4617_, 0, v___x_4588_);
v___x_4590_ = v_reuseFailAlloc_4617_;
goto v_reusejp_4589_;
}
v_reusejp_4589_:
{
lean_object* v___x_4592_; 
if (v_isShared_4562_ == 0)
{
lean_ctor_set(v___x_4561_, 1, v___x_4590_);
lean_ctor_set(v___x_4561_, 0, v___x_4587_);
v___x_4592_ = v___x_4561_;
goto v_reusejp_4591_;
}
else
{
lean_object* v_reuseFailAlloc_4616_; 
v_reuseFailAlloc_4616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4616_, 0, v___x_4587_);
lean_ctor_set(v_reuseFailAlloc_4616_, 1, v___x_4590_);
v___x_4592_ = v_reuseFailAlloc_4616_;
goto v_reusejp_4591_;
}
v_reusejp_4591_:
{
lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; 
v___x_4593_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__6));
v___x_4594_ = l___private_LeanExport_Basic_0__Lean_QuotKind_toJson(v_kind_4549_);
v___x_4595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4595_, 0, v___x_4593_);
lean_ctor_set(v___x_4595_, 1, v___x_4594_);
v___x_4596_ = lean_box(0);
v___x_4597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4597_, 0, v___x_4595_);
lean_ctor_set(v___x_4597_, 1, v___x_4596_);
v___x_4598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4598_, 0, v___x_4592_);
lean_ctor_set(v___x_4598_, 1, v___x_4597_);
v___x_4599_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4599_, 0, v___x_4586_);
lean_ctor_set(v___x_4599_, 1, v___x_4598_);
v___x_4600_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4600_, 0, v___x_4583_);
lean_ctor_set(v___x_4600_, 1, v___x_4599_);
v___x_4601_ = l_Lean_Json_mkObj(v___x_4600_);
lean_dec_ref_known(v___x_4600_, 2);
v___x_4602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4602_, 0, v___x_4577_);
lean_ctor_set(v___x_4602_, 1, v___x_4601_);
v___x_4603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4603_, 0, v___x_4602_);
lean_ctor_set(v___x_4603_, 1, v___x_4596_);
v___x_4604_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_4603_, v_snd_4573_);
lean_dec_ref_known(v___x_4603_, 2);
if (lean_obj_tag(v___x_4604_) == 0)
{
lean_object* v_a_4605_; lean_object* v_snd_4606_; 
v_a_4605_ = lean_ctor_get(v___x_4604_, 0);
lean_inc(v_a_4605_);
lean_dec_ref_known(v___x_4604_, 1);
v_snd_4606_ = lean_ctor_get(v_a_4605_, 1);
lean_inc(v_snd_4606_);
lean_dec(v_a_4605_);
v_as_x27_4487_ = v_tail_4495_;
v_b_4488_ = v___x_4496_;
v___y_4490_ = v_snd_4606_;
goto _start;
}
else
{
lean_object* v_a_4608_; lean_object* v___x_4610_; uint8_t v_isShared_4611_; uint8_t v_isSharedCheck_4615_; 
v_a_4608_ = lean_ctor_get(v___x_4604_, 0);
v_isSharedCheck_4615_ = !lean_is_exclusive(v___x_4604_);
if (v_isSharedCheck_4615_ == 0)
{
v___x_4610_ = v___x_4604_;
v_isShared_4611_ = v_isSharedCheck_4615_;
goto v_resetjp_4609_;
}
else
{
lean_inc(v_a_4608_);
lean_dec(v___x_4604_);
v___x_4610_ = lean_box(0);
v_isShared_4611_ = v_isSharedCheck_4615_;
goto v_resetjp_4609_;
}
v_resetjp_4609_:
{
lean_object* v___x_4613_; 
if (v_isShared_4611_ == 0)
{
v___x_4613_ = v___x_4610_;
goto v_reusejp_4612_;
}
else
{
lean_object* v_reuseFailAlloc_4614_; 
v_reuseFailAlloc_4614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4614_, 0, v_a_4608_);
v___x_4613_ = v_reuseFailAlloc_4614_;
goto v_reusejp_4612_;
}
v_reusejp_4612_:
{
return v___x_4613_;
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
lean_object* v_a_4622_; lean_object* v___x_4624_; uint8_t v_isShared_4625_; uint8_t v_isSharedCheck_4629_; 
lean_del_object(v___x_4568_);
lean_dec(v_fst_4565_);
lean_del_object(v___x_4561_);
lean_dec(v_fst_4558_);
lean_del_object(v___x_4534_);
lean_del_object(v___x_4530_);
v_a_4622_ = lean_ctor_get(v___x_4570_, 0);
v_isSharedCheck_4629_ = !lean_is_exclusive(v___x_4570_);
if (v_isSharedCheck_4629_ == 0)
{
v___x_4624_ = v___x_4570_;
v_isShared_4625_ = v_isSharedCheck_4629_;
goto v_resetjp_4623_;
}
else
{
lean_inc(v_a_4622_);
lean_dec(v___x_4570_);
v___x_4624_ = lean_box(0);
v_isShared_4625_ = v_isSharedCheck_4629_;
goto v_resetjp_4623_;
}
v_resetjp_4623_:
{
lean_object* v___x_4627_; 
if (v_isShared_4625_ == 0)
{
v___x_4627_ = v___x_4624_;
goto v_reusejp_4626_;
}
else
{
lean_object* v_reuseFailAlloc_4628_; 
v_reuseFailAlloc_4628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4628_, 0, v_a_4622_);
v___x_4627_ = v_reuseFailAlloc_4628_;
goto v_reusejp_4626_;
}
v_reusejp_4626_:
{
return v___x_4627_;
}
}
}
}
}
else
{
lean_object* v_a_4631_; lean_object* v___x_4633_; uint8_t v_isShared_4634_; uint8_t v_isSharedCheck_4638_; 
lean_del_object(v___x_4561_);
lean_dec(v_fst_4558_);
lean_dec_ref(v_type_4552_);
lean_del_object(v___x_4534_);
lean_del_object(v___x_4530_);
v_a_4631_ = lean_ctor_get(v___x_4563_, 0);
v_isSharedCheck_4638_ = !lean_is_exclusive(v___x_4563_);
if (v_isSharedCheck_4638_ == 0)
{
v___x_4633_ = v___x_4563_;
v_isShared_4634_ = v_isSharedCheck_4638_;
goto v_resetjp_4632_;
}
else
{
lean_inc(v_a_4631_);
lean_dec(v___x_4563_);
v___x_4633_ = lean_box(0);
v_isShared_4634_ = v_isSharedCheck_4638_;
goto v_resetjp_4632_;
}
v_resetjp_4632_:
{
lean_object* v___x_4636_; 
if (v_isShared_4634_ == 0)
{
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
return v___x_4636_;
}
}
}
}
}
else
{
lean_object* v_a_4640_; lean_object* v___x_4642_; uint8_t v_isShared_4643_; uint8_t v_isSharedCheck_4647_; 
lean_dec_ref(v_type_4552_);
lean_dec(v_levelParams_4551_);
lean_del_object(v___x_4534_);
lean_del_object(v___x_4530_);
v_a_4640_ = lean_ctor_get(v___x_4556_, 0);
v_isSharedCheck_4647_ = !lean_is_exclusive(v___x_4556_);
if (v_isSharedCheck_4647_ == 0)
{
v___x_4642_ = v___x_4556_;
v_isShared_4643_ = v_isSharedCheck_4647_;
goto v_resetjp_4641_;
}
else
{
lean_inc(v_a_4640_);
lean_dec(v___x_4556_);
v___x_4642_ = lean_box(0);
v_isShared_4643_ = v_isSharedCheck_4647_;
goto v_resetjp_4641_;
}
v_resetjp_4641_:
{
lean_object* v___x_4645_; 
if (v_isShared_4643_ == 0)
{
v___x_4645_ = v___x_4642_;
goto v_reusejp_4644_;
}
else
{
lean_object* v_reuseFailAlloc_4646_; 
v_reuseFailAlloc_4646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4646_, 0, v_a_4640_);
v___x_4645_ = v_reuseFailAlloc_4646_;
goto v_reusejp_4644_;
}
v_reusejp_4644_:
{
return v___x_4645_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_4530_);
lean_dec(v_val_4528_);
v___y_4498_ = v___y_4489_;
v___y_4499_ = v___y_4490_;
goto v___jp_4497_;
}
}
}
else
{
lean_dec(v___x_4527_);
v___y_4498_ = v___y_4489_;
v___y_4499_ = v___y_4490_;
goto v___jp_4497_;
}
v___jp_4497_:
{
uint8_t v_ignoreMissing_4500_; 
v_ignoreMissing_4500_ = lean_ctor_get_uint8(v___y_4499_, sizeof(void*)*6 + 2);
if (v_ignoreMissing_4500_ == 0)
{
lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; uint8_t v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; 
v___x_4501_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_4502_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_4503_ = lean_unsigned_to_nat(313u);
v___x_4504_ = lean_unsigned_to_nat(52u);
v___x_4505_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1));
v___x_4506_ = 1;
lean_inc(v_head_4494_);
v___x_4507_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_4494_, v___x_4506_);
v___x_4508_ = lean_string_append(v___x_4505_, v___x_4507_);
lean_dec_ref(v___x_4507_);
v___x_4509_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2));
v___x_4510_ = lean_string_append(v___x_4508_, v___x_4509_);
v___x_4511_ = l_mkPanicMessageWithDecl(v___x_4501_, v___x_4502_, v___x_4503_, v___x_4504_, v___x_4510_);
lean_dec_ref(v___x_4510_);
v___x_4512_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_4511_, v___y_4498_, v___y_4499_);
if (lean_obj_tag(v___x_4512_) == 0)
{
lean_object* v_a_4513_; lean_object* v_snd_4514_; 
v_a_4513_ = lean_ctor_get(v___x_4512_, 0);
lean_inc(v_a_4513_);
lean_dec_ref_known(v___x_4512_, 1);
v_snd_4514_ = lean_ctor_get(v_a_4513_, 1);
lean_inc(v_snd_4514_);
lean_dec(v_a_4513_);
v_as_x27_4487_ = v_tail_4495_;
v_b_4488_ = v___x_4496_;
v___y_4490_ = v_snd_4514_;
goto _start;
}
else
{
lean_object* v_a_4516_; lean_object* v___x_4518_; uint8_t v_isShared_4519_; uint8_t v_isSharedCheck_4523_; 
v_a_4516_ = lean_ctor_get(v___x_4512_, 0);
v_isSharedCheck_4523_ = !lean_is_exclusive(v___x_4512_);
if (v_isSharedCheck_4523_ == 0)
{
v___x_4518_ = v___x_4512_;
v_isShared_4519_ = v_isSharedCheck_4523_;
goto v_resetjp_4517_;
}
else
{
lean_inc(v_a_4516_);
lean_dec(v___x_4512_);
v___x_4518_ = lean_box(0);
v_isShared_4519_ = v_isSharedCheck_4523_;
goto v_resetjp_4517_;
}
v_resetjp_4517_:
{
lean_object* v___x_4521_; 
if (v_isShared_4519_ == 0)
{
v___x_4521_ = v___x_4518_;
goto v_reusejp_4520_;
}
else
{
lean_object* v_reuseFailAlloc_4522_; 
v_reuseFailAlloc_4522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4522_, 0, v_a_4516_);
v___x_4521_ = v_reuseFailAlloc_4522_;
goto v_reusejp_4520_;
}
v_reusejp_4520_:
{
return v___x_4521_;
}
}
}
}
else
{
lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; 
v___x_4524_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__4));
v___x_4525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4525_, 0, v___x_4524_);
lean_ctor_set(v___x_4525_, 1, v___y_4499_);
v___x_4526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4526_, 0, v___x_4525_);
return v___x_4526_;
}
}
}
}
}
static lean_object* _init_l_LeanExport_dumpConstant___closed__21(void){
_start:
{
lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; 
v___x_4654_ = l_Lean_NameSet_empty;
v___x_4655_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__20));
v___x_4656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4656_, 0, v___x_4655_);
lean_ctor_set(v___x_4656_, 1, v___x_4654_);
return v___x_4656_;
}
}
static lean_object* _init_l_LeanExport_dumpConstant___closed__22(void){
_start:
{
lean_object* v___x_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; 
v___x_4657_ = lean_obj_once(&l_LeanExport_dumpConstant___closed__21, &l_LeanExport_dumpConstant___closed__21_once, _init_l_LeanExport_dumpConstant___closed__21);
v___x_4658_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__20));
v___x_4659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4659_, 0, v___x_4658_);
lean_ctor_set(v___x_4659_, 1, v___x_4657_);
return v___x_4659_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; 
v___x_4662_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__1));
v___x_4663_ = lean_unsigned_to_nat(11u);
v___x_4664_ = lean_unsigned_to_nat(341u);
v___x_4665_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_4666_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_4667_ = l_mkPanicMessageWithDecl(v___x_4666_, v___x_4665_, v___x_4664_, v___x_4663_, v___x_4662_);
return v___x_4667_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__4(void){
_start:
{
lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; 
v___x_4669_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__3));
v___x_4670_ = lean_unsigned_to_nat(6u);
v___x_4671_ = lean_unsigned_to_nat(329u);
v___x_4672_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_4673_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_4674_ = l_mkPanicMessageWithDecl(v___x_4673_, v___x_4672_, v___x_4671_, v___x_4670_, v___x_4669_);
return v___x_4674_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(uint8_t v___x_4675_, lean_object* v_val_4676_, lean_object* v_as_x27_4677_, lean_object* v_b_4678_, lean_object* v___y_4679_, lean_object* v___y_4680_){
_start:
{
if (lean_obj_tag(v_as_x27_4677_) == 0)
{
lean_object* v___x_4682_; lean_object* v___x_4683_; 
v___x_4682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4682_, 0, v_b_4678_);
lean_ctor_set(v___x_4682_, 1, v___y_4680_);
v___x_4683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4683_, 0, v___x_4682_);
return v___x_4683_;
}
else
{
lean_object* v_head_4684_; lean_object* v_tail_4685_; lean_object* v___y_4687_; lean_object* v_snd_4718_; lean_object* v_fst_4719_; lean_object* v_fst_4720_; lean_object* v_snd_4721_; lean_object* v___y_4723_; lean_object* v_toConstantVal_4724_; lean_object* v_ctors_4725_; uint8_t v___y_4726_; lean_object* v___y_4805_; lean_object* v___x_4816_; 
v_head_4684_ = lean_ctor_get(v_as_x27_4677_, 0);
v_tail_4685_ = lean_ctor_get(v_as_x27_4677_, 1);
v_snd_4718_ = lean_ctor_get(v_b_4678_, 1);
lean_inc(v_snd_4718_);
v_fst_4719_ = lean_ctor_get(v_b_4678_, 0);
lean_inc(v_fst_4719_);
lean_dec_ref(v_b_4678_);
v_fst_4720_ = lean_ctor_get(v_snd_4718_, 0);
lean_inc(v_fst_4720_);
v_snd_4721_ = lean_ctor_get(v_snd_4718_, 1);
lean_inc(v_snd_4721_);
lean_dec(v_snd_4718_);
lean_inc(v_head_4684_);
lean_inc_ref(v___y_4679_);
v___x_4816_ = l_Lean_Environment_find_x3f(v___y_4679_, v_head_4684_, v___x_4675_);
if (lean_obj_tag(v___x_4816_) == 0)
{
lean_object* v___x_4817_; lean_object* v___x_4818_; 
v___x_4817_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8);
v___x_4818_ = l_panic___at___00LeanExport_dumpConstant_spec__6(v___x_4817_);
v___y_4805_ = v___x_4818_;
goto v___jp_4804_;
}
else
{
lean_object* v_val_4819_; 
v_val_4819_ = lean_ctor_get(v___x_4816_, 0);
lean_inc(v_val_4819_);
lean_dec_ref_known(v___x_4816_, 1);
v___y_4805_ = v_val_4819_;
goto v___jp_4804_;
}
v___jp_4686_:
{
if (lean_obj_tag(v___y_4687_) == 0)
{
lean_object* v_a_4688_; lean_object* v___x_4690_; uint8_t v_isShared_4691_; uint8_t v_isSharedCheck_4709_; 
v_a_4688_ = lean_ctor_get(v___y_4687_, 0);
v_isSharedCheck_4709_ = !lean_is_exclusive(v___y_4687_);
if (v_isSharedCheck_4709_ == 0)
{
v___x_4690_ = v___y_4687_;
v_isShared_4691_ = v_isSharedCheck_4709_;
goto v_resetjp_4689_;
}
else
{
lean_inc(v_a_4688_);
lean_dec(v___y_4687_);
v___x_4690_ = lean_box(0);
v_isShared_4691_ = v_isSharedCheck_4709_;
goto v_resetjp_4689_;
}
v_resetjp_4689_:
{
lean_object* v_fst_4692_; 
v_fst_4692_ = lean_ctor_get(v_a_4688_, 0);
lean_inc(v_fst_4692_);
if (lean_obj_tag(v_fst_4692_) == 0)
{
lean_object* v_snd_4693_; lean_object* v___x_4695_; uint8_t v_isShared_4696_; uint8_t v_isSharedCheck_4704_; 
v_snd_4693_ = lean_ctor_get(v_a_4688_, 1);
v_isSharedCheck_4704_ = !lean_is_exclusive(v_a_4688_);
if (v_isSharedCheck_4704_ == 0)
{
lean_object* v_unused_4705_; 
v_unused_4705_ = lean_ctor_get(v_a_4688_, 0);
lean_dec(v_unused_4705_);
v___x_4695_ = v_a_4688_;
v_isShared_4696_ = v_isSharedCheck_4704_;
goto v_resetjp_4694_;
}
else
{
lean_inc(v_snd_4693_);
lean_dec(v_a_4688_);
v___x_4695_ = lean_box(0);
v_isShared_4696_ = v_isSharedCheck_4704_;
goto v_resetjp_4694_;
}
v_resetjp_4694_:
{
lean_object* v_a_4697_; lean_object* v___x_4699_; 
v_a_4697_ = lean_ctor_get(v_fst_4692_, 0);
lean_inc(v_a_4697_);
lean_dec_ref_known(v_fst_4692_, 1);
if (v_isShared_4696_ == 0)
{
lean_ctor_set(v___x_4695_, 0, v_a_4697_);
v___x_4699_ = v___x_4695_;
goto v_reusejp_4698_;
}
else
{
lean_object* v_reuseFailAlloc_4703_; 
v_reuseFailAlloc_4703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4703_, 0, v_a_4697_);
lean_ctor_set(v_reuseFailAlloc_4703_, 1, v_snd_4693_);
v___x_4699_ = v_reuseFailAlloc_4703_;
goto v_reusejp_4698_;
}
v_reusejp_4698_:
{
lean_object* v___x_4701_; 
if (v_isShared_4691_ == 0)
{
lean_ctor_set(v___x_4690_, 0, v___x_4699_);
v___x_4701_ = v___x_4690_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v___x_4699_);
v___x_4701_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
return v___x_4701_;
}
}
}
}
else
{
lean_object* v_snd_4706_; lean_object* v_a_4707_; 
lean_del_object(v___x_4690_);
v_snd_4706_ = lean_ctor_get(v_a_4688_, 1);
lean_inc(v_snd_4706_);
lean_dec(v_a_4688_);
v_a_4707_ = lean_ctor_get(v_fst_4692_, 0);
lean_inc(v_a_4707_);
lean_dec_ref_known(v_fst_4692_, 1);
v_as_x27_4677_ = v_tail_4685_;
v_b_4678_ = v_a_4707_;
v___y_4680_ = v_snd_4706_;
goto _start;
}
}
}
else
{
lean_object* v_a_4710_; lean_object* v___x_4712_; uint8_t v_isShared_4713_; uint8_t v_isSharedCheck_4717_; 
v_a_4710_ = lean_ctor_get(v___y_4687_, 0);
v_isSharedCheck_4717_ = !lean_is_exclusive(v___y_4687_);
if (v_isSharedCheck_4717_ == 0)
{
v___x_4712_ = v___y_4687_;
v_isShared_4713_ = v_isSharedCheck_4717_;
goto v_resetjp_4711_;
}
else
{
lean_inc(v_a_4710_);
lean_dec(v___y_4687_);
v___x_4712_ = lean_box(0);
v_isShared_4713_ = v_isSharedCheck_4717_;
goto v_resetjp_4711_;
}
v_resetjp_4711_:
{
lean_object* v___x_4715_; 
if (v_isShared_4713_ == 0)
{
v___x_4715_ = v___x_4712_;
goto v_reusejp_4714_;
}
else
{
lean_object* v_reuseFailAlloc_4716_; 
v_reuseFailAlloc_4716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4716_, 0, v_a_4710_);
v___x_4715_ = v_reuseFailAlloc_4716_;
goto v_reusejp_4714_;
}
v_reusejp_4714_:
{
return v___x_4715_;
}
}
}
}
v___jp_4722_:
{
lean_object* v___x_4727_; lean_object* v___x_4728_; 
v___x_4727_ = lean_array_push(v_fst_4719_, v___y_4723_);
v___x_4728_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(v___y_4726_, v___x_4675_, v_ctors_4725_, v_fst_4720_, v___y_4679_, v___y_4680_);
lean_dec(v_ctors_4725_);
if (lean_obj_tag(v___x_4728_) == 0)
{
lean_object* v_a_4729_; lean_object* v_snd_4730_; lean_object* v_fst_4731_; lean_object* v___x_4733_; uint8_t v_isShared_4734_; uint8_t v_isSharedCheck_4795_; 
v_a_4729_ = lean_ctor_get(v___x_4728_, 0);
lean_inc(v_a_4729_);
lean_dec_ref_known(v___x_4728_, 1);
v_snd_4730_ = lean_ctor_get(v_a_4729_, 1);
v_fst_4731_ = lean_ctor_get(v_a_4729_, 0);
v_isSharedCheck_4795_ = !lean_is_exclusive(v_a_4729_);
if (v_isSharedCheck_4795_ == 0)
{
v___x_4733_ = v_a_4729_;
v_isShared_4734_ = v_isSharedCheck_4795_;
goto v_resetjp_4732_;
}
else
{
lean_inc(v_snd_4730_);
lean_inc(v_fst_4731_);
lean_dec(v_a_4729_);
v___x_4733_ = lean_box(0);
v_isShared_4734_ = v_isSharedCheck_4795_;
goto v_resetjp_4732_;
}
v_resetjp_4732_:
{
lean_object* v_visitedNames_4735_; lean_object* v_visitedLevels_4736_; lean_object* v_visitedExprs_4737_; lean_object* v_visitedConstants_4738_; lean_object* v_noMDataExprs_4739_; uint8_t v_exportMData_4740_; uint8_t v_exportUnsafe_4741_; uint8_t v_ignoreMissing_4742_; lean_object* v_recursorMap_4743_; lean_object* v___x_4745_; uint8_t v_isShared_4746_; uint8_t v_isSharedCheck_4794_; 
v_visitedNames_4735_ = lean_ctor_get(v_snd_4730_, 0);
v_visitedLevels_4736_ = lean_ctor_get(v_snd_4730_, 1);
v_visitedExprs_4737_ = lean_ctor_get(v_snd_4730_, 2);
v_visitedConstants_4738_ = lean_ctor_get(v_snd_4730_, 3);
v_noMDataExprs_4739_ = lean_ctor_get(v_snd_4730_, 4);
v_exportMData_4740_ = lean_ctor_get_uint8(v_snd_4730_, sizeof(void*)*6);
v_exportUnsafe_4741_ = lean_ctor_get_uint8(v_snd_4730_, sizeof(void*)*6 + 1);
v_ignoreMissing_4742_ = lean_ctor_get_uint8(v_snd_4730_, sizeof(void*)*6 + 2);
v_recursorMap_4743_ = lean_ctor_get(v_snd_4730_, 5);
v_isSharedCheck_4794_ = !lean_is_exclusive(v_snd_4730_);
if (v_isSharedCheck_4794_ == 0)
{
v___x_4745_ = v_snd_4730_;
v_isShared_4746_ = v_isSharedCheck_4794_;
goto v_resetjp_4744_;
}
else
{
lean_inc(v_recursorMap_4743_);
lean_inc(v_noMDataExprs_4739_);
lean_inc(v_visitedConstants_4738_);
lean_inc(v_visitedExprs_4737_);
lean_inc(v_visitedLevels_4736_);
lean_inc(v_visitedNames_4735_);
lean_dec(v_snd_4730_);
v___x_4745_ = lean_box(0);
v_isShared_4746_ = v_isSharedCheck_4794_;
goto v_resetjp_4744_;
}
v_resetjp_4744_:
{
lean_object* v_type_4747_; lean_object* v___x_4748_; lean_object* v___x_4750_; 
v_type_4747_ = lean_ctor_get(v_toConstantVal_4724_, 2);
lean_inc_ref(v_type_4747_);
lean_dec_ref(v_toConstantVal_4724_);
lean_inc(v_head_4684_);
v___x_4748_ = l_Lean_NameHashSet_insert(v_visitedConstants_4738_, v_head_4684_);
if (v_isShared_4746_ == 0)
{
lean_ctor_set(v___x_4745_, 3, v___x_4748_);
v___x_4750_ = v___x_4745_;
goto v_reusejp_4749_;
}
else
{
lean_object* v_reuseFailAlloc_4793_; 
v_reuseFailAlloc_4793_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_4793_, 0, v_visitedNames_4735_);
lean_ctor_set(v_reuseFailAlloc_4793_, 1, v_visitedLevels_4736_);
lean_ctor_set(v_reuseFailAlloc_4793_, 2, v_visitedExprs_4737_);
lean_ctor_set(v_reuseFailAlloc_4793_, 3, v___x_4748_);
lean_ctor_set(v_reuseFailAlloc_4793_, 4, v_noMDataExprs_4739_);
lean_ctor_set(v_reuseFailAlloc_4793_, 5, v_recursorMap_4743_);
lean_ctor_set_uint8(v_reuseFailAlloc_4793_, sizeof(void*)*6, v_exportMData_4740_);
lean_ctor_set_uint8(v_reuseFailAlloc_4793_, sizeof(void*)*6 + 1, v_exportUnsafe_4741_);
lean_ctor_set_uint8(v_reuseFailAlloc_4793_, sizeof(void*)*6 + 2, v_ignoreMissing_4742_);
v___x_4750_ = v_reuseFailAlloc_4793_;
goto v_reusejp_4749_;
}
v_reusejp_4749_:
{
lean_object* v___x_4751_; 
v___x_4751_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_4747_, v___y_4679_, v___x_4750_);
if (lean_obj_tag(v___x_4751_) == 0)
{
lean_object* v_a_4752_; lean_object* v_snd_4753_; lean_object* v___x_4755_; uint8_t v_isShared_4756_; uint8_t v_isSharedCheck_4783_; 
v_a_4752_ = lean_ctor_get(v___x_4751_, 0);
lean_inc(v_a_4752_);
lean_dec_ref_known(v___x_4751_, 1);
v_snd_4753_ = lean_ctor_get(v_a_4752_, 1);
v_isSharedCheck_4783_ = !lean_is_exclusive(v_a_4752_);
if (v_isSharedCheck_4783_ == 0)
{
lean_object* v_unused_4784_; 
v_unused_4784_ = lean_ctor_get(v_a_4752_, 0);
lean_dec(v_unused_4784_);
v___x_4755_ = v_a_4752_;
v_isShared_4756_ = v_isSharedCheck_4783_;
goto v_resetjp_4754_;
}
else
{
lean_inc(v_snd_4753_);
lean_dec(v_a_4752_);
v___x_4755_ = lean_box(0);
v_isShared_4756_ = v_isSharedCheck_4783_;
goto v_resetjp_4754_;
}
v_resetjp_4754_:
{
lean_object* v_toConstantVal_4757_; lean_object* v_recursorMap_4758_; lean_object* v_name_4759_; lean_object* v___x_4760_; 
v_toConstantVal_4757_ = lean_ctor_get(v_val_4676_, 0);
v_recursorMap_4758_ = lean_ctor_get(v_snd_4753_, 5);
v_name_4759_ = lean_ctor_get(v_toConstantVal_4757_, 0);
v___x_4760_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg(v_recursorMap_4758_, v_name_4759_);
if (lean_obj_tag(v___x_4760_) == 1)
{
lean_object* v_val_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4765_; 
v_val_4761_ = lean_ctor_get(v___x_4760_, 0);
lean_inc(v_val_4761_);
lean_dec_ref_known(v___x_4760_, 1);
v___x_4762_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__0));
v___x_4763_ = l_Std_DTreeMap_Internal_Impl_union___at___00Std_DTreeMap_union_spec__0___redArg(v___x_4762_, v_snd_4721_, v_val_4761_);
if (v_isShared_4756_ == 0)
{
lean_ctor_set(v___x_4755_, 1, v___x_4763_);
lean_ctor_set(v___x_4755_, 0, v_fst_4731_);
v___x_4765_ = v___x_4755_;
goto v_reusejp_4764_;
}
else
{
lean_object* v_reuseFailAlloc_4770_; 
v_reuseFailAlloc_4770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4770_, 0, v_fst_4731_);
lean_ctor_set(v_reuseFailAlloc_4770_, 1, v___x_4763_);
v___x_4765_ = v_reuseFailAlloc_4770_;
goto v_reusejp_4764_;
}
v_reusejp_4764_:
{
lean_object* v___x_4767_; 
if (v_isShared_4734_ == 0)
{
lean_ctor_set(v___x_4733_, 1, v___x_4765_);
lean_ctor_set(v___x_4733_, 0, v___x_4727_);
v___x_4767_ = v___x_4733_;
goto v_reusejp_4766_;
}
else
{
lean_object* v_reuseFailAlloc_4769_; 
v_reuseFailAlloc_4769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4769_, 0, v___x_4727_);
lean_ctor_set(v_reuseFailAlloc_4769_, 1, v___x_4765_);
v___x_4767_ = v_reuseFailAlloc_4769_;
goto v_reusejp_4766_;
}
v_reusejp_4766_:
{
v_as_x27_4677_ = v_tail_4685_;
v_b_4678_ = v___x_4767_;
v___y_4680_ = v_snd_4753_;
goto _start;
}
}
}
else
{
lean_object* v___x_4771_; lean_object* v___x_4772_; uint8_t v___x_4773_; 
lean_dec(v___x_4760_);
v___x_4771_ = lean_array_get_size(v_fst_4731_);
v___x_4772_ = lean_unsigned_to_nat(0u);
v___x_4773_ = lean_nat_dec_eq(v___x_4771_, v___x_4772_);
if (v___x_4773_ == 0)
{
lean_object* v___x_4774_; lean_object* v___x_4775_; 
lean_del_object(v___x_4755_);
lean_del_object(v___x_4733_);
lean_dec(v_fst_4731_);
lean_dec_ref(v___x_4727_);
lean_dec(v_snd_4721_);
v___x_4774_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__2, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__2);
v___x_4775_ = l_panic___at___00LeanExport_dumpConstant_spec__11(v___x_4774_, v___y_4679_, v_snd_4753_);
v___y_4687_ = v___x_4775_;
goto v___jp_4686_;
}
else
{
lean_object* v___x_4777_; 
if (v_isShared_4756_ == 0)
{
lean_ctor_set(v___x_4755_, 1, v_snd_4721_);
lean_ctor_set(v___x_4755_, 0, v_fst_4731_);
v___x_4777_ = v___x_4755_;
goto v_reusejp_4776_;
}
else
{
lean_object* v_reuseFailAlloc_4782_; 
v_reuseFailAlloc_4782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4782_, 0, v_fst_4731_);
lean_ctor_set(v_reuseFailAlloc_4782_, 1, v_snd_4721_);
v___x_4777_ = v_reuseFailAlloc_4782_;
goto v_reusejp_4776_;
}
v_reusejp_4776_:
{
lean_object* v___x_4779_; 
if (v_isShared_4734_ == 0)
{
lean_ctor_set(v___x_4733_, 1, v___x_4777_);
lean_ctor_set(v___x_4733_, 0, v___x_4727_);
v___x_4779_ = v___x_4733_;
goto v_reusejp_4778_;
}
else
{
lean_object* v_reuseFailAlloc_4781_; 
v_reuseFailAlloc_4781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4781_, 0, v___x_4727_);
lean_ctor_set(v_reuseFailAlloc_4781_, 1, v___x_4777_);
v___x_4779_ = v_reuseFailAlloc_4781_;
goto v_reusejp_4778_;
}
v_reusejp_4778_:
{
v_as_x27_4677_ = v_tail_4685_;
v_b_4678_ = v___x_4779_;
v___y_4680_ = v_snd_4753_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_4785_; lean_object* v___x_4787_; uint8_t v_isShared_4788_; uint8_t v_isSharedCheck_4792_; 
lean_del_object(v___x_4733_);
lean_dec(v_fst_4731_);
lean_dec_ref(v___x_4727_);
lean_dec(v_snd_4721_);
v_a_4785_ = lean_ctor_get(v___x_4751_, 0);
v_isSharedCheck_4792_ = !lean_is_exclusive(v___x_4751_);
if (v_isSharedCheck_4792_ == 0)
{
v___x_4787_ = v___x_4751_;
v_isShared_4788_ = v_isSharedCheck_4792_;
goto v_resetjp_4786_;
}
else
{
lean_inc(v_a_4785_);
lean_dec(v___x_4751_);
v___x_4787_ = lean_box(0);
v_isShared_4788_ = v_isSharedCheck_4792_;
goto v_resetjp_4786_;
}
v_resetjp_4786_:
{
lean_object* v___x_4790_; 
if (v_isShared_4788_ == 0)
{
v___x_4790_ = v___x_4787_;
goto v_reusejp_4789_;
}
else
{
lean_object* v_reuseFailAlloc_4791_; 
v_reuseFailAlloc_4791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4791_, 0, v_a_4785_);
v___x_4790_ = v_reuseFailAlloc_4791_;
goto v_reusejp_4789_;
}
v_reusejp_4789_:
{
return v___x_4790_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4796_; lean_object* v___x_4798_; uint8_t v_isShared_4799_; uint8_t v_isSharedCheck_4803_; 
lean_dec_ref(v___x_4727_);
lean_dec_ref(v_toConstantVal_4724_);
lean_dec(v_snd_4721_);
v_a_4796_ = lean_ctor_get(v___x_4728_, 0);
v_isSharedCheck_4803_ = !lean_is_exclusive(v___x_4728_);
if (v_isSharedCheck_4803_ == 0)
{
v___x_4798_ = v___x_4728_;
v_isShared_4799_ = v_isSharedCheck_4803_;
goto v_resetjp_4797_;
}
else
{
lean_inc(v_a_4796_);
lean_dec(v___x_4728_);
v___x_4798_ = lean_box(0);
v_isShared_4799_ = v_isSharedCheck_4803_;
goto v_resetjp_4797_;
}
v_resetjp_4797_:
{
lean_object* v___x_4801_; 
if (v_isShared_4799_ == 0)
{
v___x_4801_ = v___x_4798_;
goto v_reusejp_4800_;
}
else
{
lean_object* v_reuseFailAlloc_4802_; 
v_reuseFailAlloc_4802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4802_, 0, v_a_4796_);
v___x_4801_ = v_reuseFailAlloc_4802_;
goto v_reusejp_4800_;
}
v_reusejp_4800_:
{
return v___x_4801_;
}
}
}
}
v___jp_4804_:
{
lean_object* v___x_4806_; uint8_t v_isUnsafe_4807_; 
v___x_4806_ = l_Lean_ConstantInfo_inductiveVal_x21(v___y_4805_);
lean_dec_ref(v___y_4805_);
v_isUnsafe_4807_ = lean_ctor_get_uint8(v___x_4806_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4807_ == 0)
{
lean_object* v_toConstantVal_4808_; lean_object* v_ctors_4809_; uint8_t v___x_4810_; 
v_toConstantVal_4808_ = lean_ctor_get(v___x_4806_, 0);
lean_inc_ref(v_toConstantVal_4808_);
v_ctors_4809_ = lean_ctor_get(v___x_4806_, 4);
lean_inc(v_ctors_4809_);
v___x_4810_ = 1;
v___y_4723_ = v___x_4806_;
v_toConstantVal_4724_ = v_toConstantVal_4808_;
v_ctors_4725_ = v_ctors_4809_;
v___y_4726_ = v___x_4810_;
goto v___jp_4722_;
}
else
{
uint8_t v_exportUnsafe_4811_; 
v_exportUnsafe_4811_ = lean_ctor_get_uint8(v___y_4680_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_4811_ == 0)
{
lean_object* v___x_4812_; lean_object* v___x_4813_; 
lean_dec_ref(v___x_4806_);
lean_dec(v_snd_4721_);
lean_dec(v_fst_4720_);
lean_dec(v_fst_4719_);
v___x_4812_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__4, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__4);
v___x_4813_ = l_panic___at___00LeanExport_dumpConstant_spec__11(v___x_4812_, v___y_4679_, v___y_4680_);
v___y_4687_ = v___x_4813_;
goto v___jp_4686_;
}
else
{
lean_object* v_toConstantVal_4814_; lean_object* v_ctors_4815_; 
v_toConstantVal_4814_ = lean_ctor_get(v___x_4806_, 0);
lean_inc_ref(v_toConstantVal_4814_);
v_ctors_4815_ = lean_ctor_get(v___x_4806_, 4);
lean_inc(v_ctors_4815_);
v___y_4723_ = v___x_4806_;
v_toConstantVal_4724_ = v_toConstantVal_4814_;
v_ctors_4725_ = v_ctors_4815_;
v___y_4726_ = v_exportUnsafe_4811_;
goto v___jp_4722_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__20(lean_object* v_as_4820_, size_t v_sz_4821_, size_t v_i_4822_, lean_object* v_b_4823_, lean_object* v___y_4824_, lean_object* v___y_4825_){
_start:
{
uint8_t v___x_4827_; 
v___x_4827_ = lean_usize_dec_lt(v_i_4822_, v_sz_4821_);
if (v___x_4827_ == 0)
{
lean_object* v___x_4828_; lean_object* v___x_4829_; 
v___x_4828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4828_, 0, v_b_4823_);
lean_ctor_set(v___x_4828_, 1, v___y_4825_);
v___x_4829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4829_, 0, v___x_4828_);
return v___x_4829_;
}
else
{
lean_object* v_visitedNames_4830_; lean_object* v_visitedLevels_4831_; lean_object* v_visitedExprs_4832_; lean_object* v_visitedConstants_4833_; lean_object* v_noMDataExprs_4834_; uint8_t v_exportMData_4835_; uint8_t v_exportUnsafe_4836_; uint8_t v_ignoreMissing_4837_; lean_object* v_recursorMap_4838_; lean_object* v___x_4840_; uint8_t v_isShared_4841_; uint8_t v_isSharedCheck_4857_; 
v_visitedNames_4830_ = lean_ctor_get(v___y_4825_, 0);
v_visitedLevels_4831_ = lean_ctor_get(v___y_4825_, 1);
v_visitedExprs_4832_ = lean_ctor_get(v___y_4825_, 2);
v_visitedConstants_4833_ = lean_ctor_get(v___y_4825_, 3);
v_noMDataExprs_4834_ = lean_ctor_get(v___y_4825_, 4);
v_exportMData_4835_ = lean_ctor_get_uint8(v___y_4825_, sizeof(void*)*6);
v_exportUnsafe_4836_ = lean_ctor_get_uint8(v___y_4825_, sizeof(void*)*6 + 1);
v_ignoreMissing_4837_ = lean_ctor_get_uint8(v___y_4825_, sizeof(void*)*6 + 2);
v_recursorMap_4838_ = lean_ctor_get(v___y_4825_, 5);
v_isSharedCheck_4857_ = !lean_is_exclusive(v___y_4825_);
if (v_isSharedCheck_4857_ == 0)
{
v___x_4840_ = v___y_4825_;
v_isShared_4841_ = v_isSharedCheck_4857_;
goto v_resetjp_4839_;
}
else
{
lean_inc(v_recursorMap_4838_);
lean_inc(v_noMDataExprs_4834_);
lean_inc(v_visitedConstants_4833_);
lean_inc(v_visitedExprs_4832_);
lean_inc(v_visitedLevels_4831_);
lean_inc(v_visitedNames_4830_);
lean_dec(v___y_4825_);
v___x_4840_ = lean_box(0);
v_isShared_4841_ = v_isSharedCheck_4857_;
goto v_resetjp_4839_;
}
v_resetjp_4839_:
{
lean_object* v_a_4842_; lean_object* v_toConstantVal_4843_; lean_object* v_name_4844_; lean_object* v_type_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4849_; 
v_a_4842_ = lean_array_uget_borrowed(v_as_4820_, v_i_4822_);
v_toConstantVal_4843_ = lean_ctor_get(v_a_4842_, 0);
v_name_4844_ = lean_ctor_get(v_toConstantVal_4843_, 0);
v_type_4845_ = lean_ctor_get(v_toConstantVal_4843_, 2);
v___x_4846_ = lean_box(0);
lean_inc(v_name_4844_);
v___x_4847_ = l_Lean_NameHashSet_insert(v_visitedConstants_4833_, v_name_4844_);
if (v_isShared_4841_ == 0)
{
lean_ctor_set(v___x_4840_, 3, v___x_4847_);
v___x_4849_ = v___x_4840_;
goto v_reusejp_4848_;
}
else
{
lean_object* v_reuseFailAlloc_4856_; 
v_reuseFailAlloc_4856_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_4856_, 0, v_visitedNames_4830_);
lean_ctor_set(v_reuseFailAlloc_4856_, 1, v_visitedLevels_4831_);
lean_ctor_set(v_reuseFailAlloc_4856_, 2, v_visitedExprs_4832_);
lean_ctor_set(v_reuseFailAlloc_4856_, 3, v___x_4847_);
lean_ctor_set(v_reuseFailAlloc_4856_, 4, v_noMDataExprs_4834_);
lean_ctor_set(v_reuseFailAlloc_4856_, 5, v_recursorMap_4838_);
lean_ctor_set_uint8(v_reuseFailAlloc_4856_, sizeof(void*)*6, v_exportMData_4835_);
lean_ctor_set_uint8(v_reuseFailAlloc_4856_, sizeof(void*)*6 + 1, v_exportUnsafe_4836_);
lean_ctor_set_uint8(v_reuseFailAlloc_4856_, sizeof(void*)*6 + 2, v_ignoreMissing_4837_);
v___x_4849_ = v_reuseFailAlloc_4856_;
goto v_reusejp_4848_;
}
v_reusejp_4848_:
{
lean_object* v___x_4850_; 
lean_inc_ref(v_type_4845_);
v___x_4850_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_4845_, v___y_4824_, v___x_4849_);
if (lean_obj_tag(v___x_4850_) == 0)
{
lean_object* v_a_4851_; lean_object* v_snd_4852_; size_t v___x_4853_; size_t v___x_4854_; 
v_a_4851_ = lean_ctor_get(v___x_4850_, 0);
lean_inc(v_a_4851_);
lean_dec_ref_known(v___x_4850_, 1);
v_snd_4852_ = lean_ctor_get(v_a_4851_, 1);
lean_inc(v_snd_4852_);
lean_dec(v_a_4851_);
v___x_4853_ = ((size_t)1ULL);
v___x_4854_ = lean_usize_add(v_i_4822_, v___x_4853_);
v_i_4822_ = v___x_4854_;
v_b_4823_ = v___x_4846_;
v___y_4825_ = v_snd_4852_;
goto _start;
}
else
{
return v___x_4850_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg(lean_object* v_as_x27_4858_, lean_object* v_b_4859_, lean_object* v___y_4860_, lean_object* v___y_4861_){
_start:
{
if (lean_obj_tag(v_as_x27_4858_) == 0)
{
lean_object* v___x_4863_; lean_object* v___x_4864_; 
v___x_4863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4863_, 0, v_b_4859_);
lean_ctor_set(v___x_4863_, 1, v___y_4861_);
v___x_4864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4864_, 0, v___x_4863_);
return v___x_4864_;
}
else
{
lean_object* v_head_4865_; lean_object* v_tail_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; 
v_head_4865_ = lean_ctor_get(v_as_x27_4858_, 0);
v_tail_4866_ = lean_ctor_get(v_as_x27_4858_, 1);
v___x_4867_ = lean_box(0);
lean_inc(v_head_4865_);
v___x_4868_ = l_LeanExport_dumpConstant(v_head_4865_, v___y_4860_, v___y_4861_);
if (lean_obj_tag(v___x_4868_) == 0)
{
lean_object* v_a_4869_; lean_object* v_snd_4870_; 
v_a_4869_ = lean_ctor_get(v___x_4868_, 0);
lean_inc(v_a_4869_);
lean_dec_ref_known(v___x_4868_, 1);
v_snd_4870_ = lean_ctor_get(v_a_4869_, 1);
lean_inc(v_snd_4870_);
lean_dec(v_a_4869_);
v_as_x27_4858_ = v_tail_4866_;
v_b_4859_ = v___x_4867_;
v___y_4861_ = v_snd_4870_;
goto _start;
}
else
{
return v___x_4868_;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpConstant(lean_object* v_c_4872_, lean_object* v_a_4873_, lean_object* v_a_4874_){
_start:
{
lean_object* v___y_4881_; lean_object* v___y_4882_; lean_object* v___y_4883_; lean_object* v_fst_4884_; lean_object* v_snd_4885_; uint8_t v___x_4982_; lean_object* v___x_4983_; 
v___x_4982_ = 0;
lean_inc(v_c_4872_);
lean_inc_ref(v_a_4873_);
v___x_4983_ = l_Lean_Environment_find_x3f(v_a_4873_, v_c_4872_, v___x_4982_);
if (lean_obj_tag(v___x_4983_) == 1)
{
lean_object* v_val_4984_; uint8_t v___x_5722_; 
v_val_4984_ = lean_ctor_get(v___x_4983_, 0);
lean_inc(v_val_4984_);
lean_dec_ref_known(v___x_4983_, 1);
v___x_5722_ = l_Lean_ConstantInfo_isUnsafe(v_val_4984_);
if (v___x_5722_ == 0)
{
goto v___jp_4985_;
}
else
{
uint8_t v_exportUnsafe_5723_; 
v_exportUnsafe_5723_ = lean_ctor_get_uint8(v_a_4874_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_5723_ == 0)
{
lean_dec(v_val_4984_);
lean_dec(v_c_4872_);
goto v___jp_4876_;
}
else
{
goto v___jp_4985_;
}
}
v___jp_4985_:
{
lean_object* v_visitedNames_4986_; lean_object* v_visitedLevels_4987_; lean_object* v_visitedExprs_4988_; lean_object* v_visitedConstants_4989_; lean_object* v_noMDataExprs_4990_; uint8_t v_exportMData_4991_; uint8_t v_exportUnsafe_4992_; uint8_t v_ignoreMissing_4993_; lean_object* v_recursorMap_4994_; uint8_t v___x_4995_; 
v_visitedNames_4986_ = lean_ctor_get(v_a_4874_, 0);
v_visitedLevels_4987_ = lean_ctor_get(v_a_4874_, 1);
v_visitedExprs_4988_ = lean_ctor_get(v_a_4874_, 2);
v_visitedConstants_4989_ = lean_ctor_get(v_a_4874_, 3);
v_noMDataExprs_4990_ = lean_ctor_get(v_a_4874_, 4);
v_exportMData_4991_ = lean_ctor_get_uint8(v_a_4874_, sizeof(void*)*6);
v_exportUnsafe_4992_ = lean_ctor_get_uint8(v_a_4874_, sizeof(void*)*6 + 1);
v_ignoreMissing_4993_ = lean_ctor_get_uint8(v_a_4874_, sizeof(void*)*6 + 2);
v_recursorMap_4994_ = lean_ctor_get(v_a_4874_, 5);
v___x_4995_ = l_Lean_NameHashSet_contains(v_visitedConstants_4989_, v_c_4872_);
if (v___x_4995_ == 0)
{
lean_object* v___x_4997_; uint8_t v_isShared_4998_; uint8_t v_isSharedCheck_5715_; 
lean_inc(v_recursorMap_4994_);
lean_inc_ref(v_noMDataExprs_4990_);
lean_inc_ref(v_visitedConstants_4989_);
lean_inc_ref(v_visitedExprs_4988_);
lean_inc_ref(v_visitedLevels_4987_);
lean_inc_ref(v_visitedNames_4986_);
v_isSharedCheck_5715_ = !lean_is_exclusive(v_a_4874_);
if (v_isSharedCheck_5715_ == 0)
{
lean_object* v_unused_5716_; lean_object* v_unused_5717_; lean_object* v_unused_5718_; lean_object* v_unused_5719_; lean_object* v_unused_5720_; lean_object* v_unused_5721_; 
v_unused_5716_ = lean_ctor_get(v_a_4874_, 5);
lean_dec(v_unused_5716_);
v_unused_5717_ = lean_ctor_get(v_a_4874_, 4);
lean_dec(v_unused_5717_);
v_unused_5718_ = lean_ctor_get(v_a_4874_, 3);
lean_dec(v_unused_5718_);
v_unused_5719_ = lean_ctor_get(v_a_4874_, 2);
lean_dec(v_unused_5719_);
v_unused_5720_ = lean_ctor_get(v_a_4874_, 1);
lean_dec(v_unused_5720_);
v_unused_5721_ = lean_ctor_get(v_a_4874_, 0);
lean_dec(v_unused_5721_);
v___x_4997_ = v_a_4874_;
v_isShared_4998_ = v_isSharedCheck_5715_;
goto v_resetjp_4996_;
}
else
{
lean_dec(v_a_4874_);
v___x_4997_ = lean_box(0);
v_isShared_4998_ = v_isSharedCheck_5715_;
goto v_resetjp_4996_;
}
v_resetjp_4996_:
{
lean_object* v___x_4999_; lean_object* v___x_5001_; 
v___x_4999_ = l_Lean_NameHashSet_insert(v_visitedConstants_4989_, v_c_4872_);
if (v_isShared_4998_ == 0)
{
lean_ctor_set(v___x_4997_, 3, v___x_4999_);
v___x_5001_ = v___x_4997_;
goto v_reusejp_5000_;
}
else
{
lean_object* v_reuseFailAlloc_5714_; 
v_reuseFailAlloc_5714_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_5714_, 0, v_visitedNames_4986_);
lean_ctor_set(v_reuseFailAlloc_5714_, 1, v_visitedLevels_4987_);
lean_ctor_set(v_reuseFailAlloc_5714_, 2, v_visitedExprs_4988_);
lean_ctor_set(v_reuseFailAlloc_5714_, 3, v___x_4999_);
lean_ctor_set(v_reuseFailAlloc_5714_, 4, v_noMDataExprs_4990_);
lean_ctor_set(v_reuseFailAlloc_5714_, 5, v_recursorMap_4994_);
lean_ctor_set_uint8(v_reuseFailAlloc_5714_, sizeof(void*)*6, v_exportMData_4991_);
lean_ctor_set_uint8(v_reuseFailAlloc_5714_, sizeof(void*)*6 + 1, v_exportUnsafe_4992_);
lean_ctor_set_uint8(v_reuseFailAlloc_5714_, sizeof(void*)*6 + 2, v_ignoreMissing_4993_);
v___x_5001_ = v_reuseFailAlloc_5714_;
goto v_reusejp_5000_;
}
v_reusejp_5000_:
{
switch(lean_obj_tag(v_val_4984_))
{
case 0:
{
lean_object* v_val_5002_; lean_object* v___x_5004_; uint8_t v_isShared_5005_; uint8_t v_isSharedCheck_5106_; 
v_val_5002_ = lean_ctor_get(v_val_4984_, 0);
v_isSharedCheck_5106_ = !lean_is_exclusive(v_val_4984_);
if (v_isSharedCheck_5106_ == 0)
{
v___x_5004_ = v_val_4984_;
v_isShared_5005_ = v_isSharedCheck_5106_;
goto v_resetjp_5003_;
}
else
{
lean_inc(v_val_5002_);
lean_dec(v_val_4984_);
v___x_5004_ = lean_box(0);
v_isShared_5005_ = v_isSharedCheck_5106_;
goto v_resetjp_5003_;
}
v_resetjp_5003_:
{
lean_object* v_toConstantVal_5006_; uint8_t v_isUnsafe_5007_; lean_object* v_name_5008_; lean_object* v_levelParams_5009_; lean_object* v_type_5010_; lean_object* v___x_5011_; 
v_toConstantVal_5006_ = lean_ctor_get(v_val_5002_, 0);
lean_inc_ref(v_toConstantVal_5006_);
v_isUnsafe_5007_ = lean_ctor_get_uint8(v_val_5002_, sizeof(void*)*1);
lean_dec_ref(v_val_5002_);
v_name_5008_ = lean_ctor_get(v_toConstantVal_5006_, 0);
lean_inc(v_name_5008_);
v_levelParams_5009_ = lean_ctor_get(v_toConstantVal_5006_, 1);
lean_inc(v_levelParams_5009_);
v_type_5010_ = lean_ctor_get(v_toConstantVal_5006_, 2);
lean_inc_ref_n(v_type_5010_, 2);
lean_dec_ref(v_toConstantVal_5006_);
v___x_5011_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_5010_, v_a_4873_, v___x_5001_);
if (lean_obj_tag(v___x_5011_) == 0)
{
lean_object* v_a_5012_; lean_object* v___x_5014_; uint8_t v_isShared_5015_; uint8_t v_isSharedCheck_5105_; 
v_a_5012_ = lean_ctor_get(v___x_5011_, 0);
v_isSharedCheck_5105_ = !lean_is_exclusive(v___x_5011_);
if (v_isSharedCheck_5105_ == 0)
{
v___x_5014_ = v___x_5011_;
v_isShared_5015_ = v_isSharedCheck_5105_;
goto v_resetjp_5013_;
}
else
{
lean_inc(v_a_5012_);
lean_dec(v___x_5011_);
v___x_5014_ = lean_box(0);
v_isShared_5015_ = v_isSharedCheck_5105_;
goto v_resetjp_5013_;
}
v_resetjp_5013_:
{
lean_object* v_snd_5016_; lean_object* v___x_5018_; uint8_t v_isShared_5019_; uint8_t v_isSharedCheck_5103_; 
v_snd_5016_ = lean_ctor_get(v_a_5012_, 1);
v_isSharedCheck_5103_ = !lean_is_exclusive(v_a_5012_);
if (v_isSharedCheck_5103_ == 0)
{
lean_object* v_unused_5104_; 
v_unused_5104_ = lean_ctor_get(v_a_5012_, 0);
lean_dec(v_unused_5104_);
v___x_5018_ = v_a_5012_;
v_isShared_5019_ = v_isSharedCheck_5103_;
goto v_resetjp_5017_;
}
else
{
lean_inc(v_snd_5016_);
lean_dec(v_a_5012_);
v___x_5018_ = lean_box(0);
v_isShared_5019_ = v_isSharedCheck_5103_;
goto v_resetjp_5017_;
}
v_resetjp_5017_:
{
lean_object* v___x_5020_; 
v___x_5020_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_5008_, v_a_4873_, v_snd_5016_);
if (lean_obj_tag(v___x_5020_) == 0)
{
lean_object* v_a_5021_; lean_object* v_fst_5022_; lean_object* v_snd_5023_; lean_object* v___x_5025_; uint8_t v_isShared_5026_; uint8_t v_isSharedCheck_5094_; 
v_a_5021_ = lean_ctor_get(v___x_5020_, 0);
lean_inc(v_a_5021_);
lean_dec_ref_known(v___x_5020_, 1);
v_fst_5022_ = lean_ctor_get(v_a_5021_, 0);
v_snd_5023_ = lean_ctor_get(v_a_5021_, 1);
v_isSharedCheck_5094_ = !lean_is_exclusive(v_a_5021_);
if (v_isSharedCheck_5094_ == 0)
{
v___x_5025_ = v_a_5021_;
v_isShared_5026_ = v_isSharedCheck_5094_;
goto v_resetjp_5024_;
}
else
{
lean_inc(v_snd_5023_);
lean_inc(v_fst_5022_);
lean_dec(v_a_5021_);
v___x_5025_ = lean_box(0);
v_isShared_5026_ = v_isSharedCheck_5094_;
goto v_resetjp_5024_;
}
v_resetjp_5024_:
{
lean_object* v___x_5027_; 
v___x_5027_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_5009_, v_a_4873_, v_snd_5023_);
if (lean_obj_tag(v___x_5027_) == 0)
{
lean_object* v_a_5028_; lean_object* v_fst_5029_; lean_object* v_snd_5030_; lean_object* v___x_5032_; uint8_t v_isShared_5033_; uint8_t v_isSharedCheck_5085_; 
v_a_5028_ = lean_ctor_get(v___x_5027_, 0);
lean_inc(v_a_5028_);
lean_dec_ref_known(v___x_5027_, 1);
v_fst_5029_ = lean_ctor_get(v_a_5028_, 0);
v_snd_5030_ = lean_ctor_get(v_a_5028_, 1);
v_isSharedCheck_5085_ = !lean_is_exclusive(v_a_5028_);
if (v_isSharedCheck_5085_ == 0)
{
v___x_5032_ = v_a_5028_;
v_isShared_5033_ = v_isSharedCheck_5085_;
goto v_resetjp_5031_;
}
else
{
lean_inc(v_snd_5030_);
lean_inc(v_fst_5029_);
lean_dec(v_a_5028_);
v___x_5032_ = lean_box(0);
v_isShared_5033_ = v_isSharedCheck_5085_;
goto v_resetjp_5031_;
}
v_resetjp_5031_:
{
lean_object* v___x_5034_; 
v___x_5034_ = l_LeanExport_dumpExpr(v_type_5010_, v_a_4873_, v_snd_5030_);
if (lean_obj_tag(v___x_5034_) == 0)
{
lean_object* v_a_5035_; lean_object* v_fst_5036_; lean_object* v_snd_5037_; lean_object* v___x_5039_; uint8_t v_isShared_5040_; uint8_t v_isSharedCheck_5076_; 
v_a_5035_ = lean_ctor_get(v___x_5034_, 0);
lean_inc(v_a_5035_);
lean_dec_ref_known(v___x_5034_, 1);
v_fst_5036_ = lean_ctor_get(v_a_5035_, 0);
v_snd_5037_ = lean_ctor_get(v_a_5035_, 1);
v_isSharedCheck_5076_ = !lean_is_exclusive(v_a_5035_);
if (v_isSharedCheck_5076_ == 0)
{
v___x_5039_ = v_a_5035_;
v_isShared_5040_ = v_isSharedCheck_5076_;
goto v_resetjp_5038_;
}
else
{
lean_inc(v_snd_5037_);
lean_inc(v_fst_5036_);
lean_dec(v_a_5035_);
v___x_5039_ = lean_box(0);
v_isShared_5040_ = v_isSharedCheck_5076_;
goto v_resetjp_5038_;
}
v_resetjp_5038_:
{
lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5045_; 
v___x_5041_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__3));
v___x_5042_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_5043_ = l_Lean_JsonNumber_fromNat(v_fst_5022_);
if (v_isShared_5015_ == 0)
{
lean_ctor_set_tag(v___x_5014_, 2);
lean_ctor_set(v___x_5014_, 0, v___x_5043_);
v___x_5045_ = v___x_5014_;
goto v_reusejp_5044_;
}
else
{
lean_object* v_reuseFailAlloc_5075_; 
v_reuseFailAlloc_5075_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5075_, 0, v___x_5043_);
v___x_5045_ = v_reuseFailAlloc_5075_;
goto v_reusejp_5044_;
}
v_reusejp_5044_:
{
lean_object* v___x_5047_; 
if (v_isShared_5040_ == 0)
{
lean_ctor_set(v___x_5039_, 1, v___x_5045_);
lean_ctor_set(v___x_5039_, 0, v___x_5042_);
v___x_5047_ = v___x_5039_;
goto v_reusejp_5046_;
}
else
{
lean_object* v_reuseFailAlloc_5074_; 
v_reuseFailAlloc_5074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5074_, 0, v___x_5042_);
lean_ctor_set(v_reuseFailAlloc_5074_, 1, v___x_5045_);
v___x_5047_ = v_reuseFailAlloc_5074_;
goto v_reusejp_5046_;
}
v_reusejp_5046_:
{
lean_object* v___x_5048_; lean_object* v___x_5050_; 
v___x_5048_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_5033_ == 0)
{
lean_ctor_set(v___x_5032_, 1, v_fst_5029_);
lean_ctor_set(v___x_5032_, 0, v___x_5048_);
v___x_5050_ = v___x_5032_;
goto v_reusejp_5049_;
}
else
{
lean_object* v_reuseFailAlloc_5073_; 
v_reuseFailAlloc_5073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5073_, 0, v___x_5048_);
lean_ctor_set(v_reuseFailAlloc_5073_, 1, v_fst_5029_);
v___x_5050_ = v_reuseFailAlloc_5073_;
goto v_reusejp_5049_;
}
v_reusejp_5049_:
{
lean_object* v___x_5051_; lean_object* v___x_5052_; lean_object* v___x_5054_; 
v___x_5051_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_5052_ = l_Lean_JsonNumber_fromNat(v_fst_5036_);
if (v_isShared_5005_ == 0)
{
lean_ctor_set_tag(v___x_5004_, 2);
lean_ctor_set(v___x_5004_, 0, v___x_5052_);
v___x_5054_ = v___x_5004_;
goto v_reusejp_5053_;
}
else
{
lean_object* v_reuseFailAlloc_5072_; 
v_reuseFailAlloc_5072_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5072_, 0, v___x_5052_);
v___x_5054_ = v_reuseFailAlloc_5072_;
goto v_reusejp_5053_;
}
v_reusejp_5053_:
{
lean_object* v___x_5056_; 
if (v_isShared_5026_ == 0)
{
lean_ctor_set(v___x_5025_, 1, v___x_5054_);
lean_ctor_set(v___x_5025_, 0, v___x_5051_);
v___x_5056_ = v___x_5025_;
goto v_reusejp_5055_;
}
else
{
lean_object* v_reuseFailAlloc_5071_; 
v_reuseFailAlloc_5071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5071_, 0, v___x_5051_);
lean_ctor_set(v_reuseFailAlloc_5071_, 1, v___x_5054_);
v___x_5056_ = v_reuseFailAlloc_5071_;
goto v_reusejp_5055_;
}
v_reusejp_5055_:
{
lean_object* v___x_5057_; lean_object* v___x_5058_; lean_object* v___x_5060_; 
v___x_5057_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6));
v___x_5058_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_5058_, 0, v_isUnsafe_5007_);
if (v_isShared_5019_ == 0)
{
lean_ctor_set(v___x_5018_, 1, v___x_5058_);
lean_ctor_set(v___x_5018_, 0, v___x_5057_);
v___x_5060_ = v___x_5018_;
goto v_reusejp_5059_;
}
else
{
lean_object* v_reuseFailAlloc_5070_; 
v_reuseFailAlloc_5070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5070_, 0, v___x_5057_);
lean_ctor_set(v_reuseFailAlloc_5070_, 1, v___x_5058_);
v___x_5060_ = v_reuseFailAlloc_5070_;
goto v_reusejp_5059_;
}
v_reusejp_5059_:
{
lean_object* v___x_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; lean_object* v___x_5064_; lean_object* v___x_5065_; lean_object* v___x_5066_; lean_object* v___x_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; 
v___x_5061_ = lean_box(0);
v___x_5062_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5062_, 0, v___x_5060_);
lean_ctor_set(v___x_5062_, 1, v___x_5061_);
v___x_5063_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5063_, 0, v___x_5056_);
lean_ctor_set(v___x_5063_, 1, v___x_5062_);
v___x_5064_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5064_, 0, v___x_5050_);
lean_ctor_set(v___x_5064_, 1, v___x_5063_);
v___x_5065_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5065_, 0, v___x_5047_);
lean_ctor_set(v___x_5065_, 1, v___x_5064_);
v___x_5066_ = l_Lean_Json_mkObj(v___x_5065_);
lean_dec_ref_known(v___x_5065_, 2);
v___x_5067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5067_, 0, v___x_5041_);
lean_ctor_set(v___x_5067_, 1, v___x_5066_);
v___x_5068_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5068_, 0, v___x_5067_);
lean_ctor_set(v___x_5068_, 1, v___x_5061_);
v___x_5069_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_5068_, v_snd_5037_);
lean_dec_ref_known(v___x_5068_, 2);
return v___x_5069_;
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
lean_object* v_a_5077_; lean_object* v___x_5079_; uint8_t v_isShared_5080_; uint8_t v_isSharedCheck_5084_; 
lean_del_object(v___x_5032_);
lean_dec(v_fst_5029_);
lean_del_object(v___x_5025_);
lean_dec(v_fst_5022_);
lean_del_object(v___x_5018_);
lean_del_object(v___x_5014_);
lean_del_object(v___x_5004_);
v_a_5077_ = lean_ctor_get(v___x_5034_, 0);
v_isSharedCheck_5084_ = !lean_is_exclusive(v___x_5034_);
if (v_isSharedCheck_5084_ == 0)
{
v___x_5079_ = v___x_5034_;
v_isShared_5080_ = v_isSharedCheck_5084_;
goto v_resetjp_5078_;
}
else
{
lean_inc(v_a_5077_);
lean_dec(v___x_5034_);
v___x_5079_ = lean_box(0);
v_isShared_5080_ = v_isSharedCheck_5084_;
goto v_resetjp_5078_;
}
v_resetjp_5078_:
{
lean_object* v___x_5082_; 
if (v_isShared_5080_ == 0)
{
v___x_5082_ = v___x_5079_;
goto v_reusejp_5081_;
}
else
{
lean_object* v_reuseFailAlloc_5083_; 
v_reuseFailAlloc_5083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5083_, 0, v_a_5077_);
v___x_5082_ = v_reuseFailAlloc_5083_;
goto v_reusejp_5081_;
}
v_reusejp_5081_:
{
return v___x_5082_;
}
}
}
}
}
else
{
lean_object* v_a_5086_; lean_object* v___x_5088_; uint8_t v_isShared_5089_; uint8_t v_isSharedCheck_5093_; 
lean_del_object(v___x_5025_);
lean_dec(v_fst_5022_);
lean_del_object(v___x_5018_);
lean_del_object(v___x_5014_);
lean_dec_ref(v_type_5010_);
lean_del_object(v___x_5004_);
v_a_5086_ = lean_ctor_get(v___x_5027_, 0);
v_isSharedCheck_5093_ = !lean_is_exclusive(v___x_5027_);
if (v_isSharedCheck_5093_ == 0)
{
v___x_5088_ = v___x_5027_;
v_isShared_5089_ = v_isSharedCheck_5093_;
goto v_resetjp_5087_;
}
else
{
lean_inc(v_a_5086_);
lean_dec(v___x_5027_);
v___x_5088_ = lean_box(0);
v_isShared_5089_ = v_isSharedCheck_5093_;
goto v_resetjp_5087_;
}
v_resetjp_5087_:
{
lean_object* v___x_5091_; 
if (v_isShared_5089_ == 0)
{
v___x_5091_ = v___x_5088_;
goto v_reusejp_5090_;
}
else
{
lean_object* v_reuseFailAlloc_5092_; 
v_reuseFailAlloc_5092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5092_, 0, v_a_5086_);
v___x_5091_ = v_reuseFailAlloc_5092_;
goto v_reusejp_5090_;
}
v_reusejp_5090_:
{
return v___x_5091_;
}
}
}
}
}
else
{
lean_object* v_a_5095_; lean_object* v___x_5097_; uint8_t v_isShared_5098_; uint8_t v_isSharedCheck_5102_; 
lean_del_object(v___x_5018_);
lean_del_object(v___x_5014_);
lean_dec_ref(v_type_5010_);
lean_dec(v_levelParams_5009_);
lean_del_object(v___x_5004_);
v_a_5095_ = lean_ctor_get(v___x_5020_, 0);
v_isSharedCheck_5102_ = !lean_is_exclusive(v___x_5020_);
if (v_isSharedCheck_5102_ == 0)
{
v___x_5097_ = v___x_5020_;
v_isShared_5098_ = v_isSharedCheck_5102_;
goto v_resetjp_5096_;
}
else
{
lean_inc(v_a_5095_);
lean_dec(v___x_5020_);
v___x_5097_ = lean_box(0);
v_isShared_5098_ = v_isSharedCheck_5102_;
goto v_resetjp_5096_;
}
v_resetjp_5096_:
{
lean_object* v___x_5100_; 
if (v_isShared_5098_ == 0)
{
v___x_5100_ = v___x_5097_;
goto v_reusejp_5099_;
}
else
{
lean_object* v_reuseFailAlloc_5101_; 
v_reuseFailAlloc_5101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5101_, 0, v_a_5095_);
v___x_5100_ = v_reuseFailAlloc_5101_;
goto v_reusejp_5099_;
}
v_reusejp_5099_:
{
return v___x_5100_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_type_5010_);
lean_dec(v_levelParams_5009_);
lean_dec(v_name_5008_);
lean_del_object(v___x_5004_);
return v___x_5011_;
}
}
}
case 1:
{
lean_object* v_val_5107_; lean_object* v___x_5109_; uint8_t v_isShared_5110_; uint8_t v_isSharedCheck_5278_; 
v_val_5107_ = lean_ctor_get(v_val_4984_, 0);
v_isSharedCheck_5278_ = !lean_is_exclusive(v_val_4984_);
if (v_isSharedCheck_5278_ == 0)
{
v___x_5109_ = v_val_4984_;
v_isShared_5110_ = v_isSharedCheck_5278_;
goto v_resetjp_5108_;
}
else
{
lean_inc(v_val_5107_);
lean_dec(v_val_4984_);
v___x_5109_ = lean_box(0);
v_isShared_5110_ = v_isSharedCheck_5278_;
goto v_resetjp_5108_;
}
v_resetjp_5108_:
{
lean_object* v_toConstantVal_5111_; lean_object* v_value_5112_; lean_object* v_hints_5113_; uint8_t v_safety_5114_; lean_object* v_all_5115_; lean_object* v_name_5116_; lean_object* v_levelParams_5117_; lean_object* v_type_5118_; lean_object* v___x_5119_; 
v_toConstantVal_5111_ = lean_ctor_get(v_val_5107_, 0);
lean_inc_ref(v_toConstantVal_5111_);
v_value_5112_ = lean_ctor_get(v_val_5107_, 1);
lean_inc_ref(v_value_5112_);
v_hints_5113_ = lean_ctor_get(v_val_5107_, 2);
lean_inc(v_hints_5113_);
v_safety_5114_ = lean_ctor_get_uint8(v_val_5107_, sizeof(void*)*4);
v_all_5115_ = lean_ctor_get(v_val_5107_, 3);
lean_inc(v_all_5115_);
lean_dec_ref(v_val_5107_);
v_name_5116_ = lean_ctor_get(v_toConstantVal_5111_, 0);
lean_inc(v_name_5116_);
v_levelParams_5117_ = lean_ctor_get(v_toConstantVal_5111_, 1);
lean_inc(v_levelParams_5117_);
v_type_5118_ = lean_ctor_get(v_toConstantVal_5111_, 2);
lean_inc_ref_n(v_type_5118_, 2);
lean_dec_ref(v_toConstantVal_5111_);
v___x_5119_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_5118_, v_a_4873_, v___x_5001_);
if (lean_obj_tag(v___x_5119_) == 0)
{
lean_object* v_a_5120_; lean_object* v___x_5122_; uint8_t v_isShared_5123_; uint8_t v_isSharedCheck_5277_; 
v_a_5120_ = lean_ctor_get(v___x_5119_, 0);
v_isSharedCheck_5277_ = !lean_is_exclusive(v___x_5119_);
if (v_isSharedCheck_5277_ == 0)
{
v___x_5122_ = v___x_5119_;
v_isShared_5123_ = v_isSharedCheck_5277_;
goto v_resetjp_5121_;
}
else
{
lean_inc(v_a_5120_);
lean_dec(v___x_5119_);
v___x_5122_ = lean_box(0);
v_isShared_5123_ = v_isSharedCheck_5277_;
goto v_resetjp_5121_;
}
v_resetjp_5121_:
{
lean_object* v_snd_5124_; lean_object* v___x_5126_; uint8_t v_isShared_5127_; uint8_t v_isSharedCheck_5275_; 
v_snd_5124_ = lean_ctor_get(v_a_5120_, 1);
v_isSharedCheck_5275_ = !lean_is_exclusive(v_a_5120_);
if (v_isSharedCheck_5275_ == 0)
{
lean_object* v_unused_5276_; 
v_unused_5276_ = lean_ctor_get(v_a_5120_, 0);
lean_dec(v_unused_5276_);
v___x_5126_ = v_a_5120_;
v_isShared_5127_ = v_isSharedCheck_5275_;
goto v_resetjp_5125_;
}
else
{
lean_inc(v_snd_5124_);
lean_dec(v_a_5120_);
v___x_5126_ = lean_box(0);
v_isShared_5127_ = v_isSharedCheck_5275_;
goto v_resetjp_5125_;
}
v_resetjp_5125_:
{
lean_object* v___x_5128_; 
lean_inc_ref(v_value_5112_);
v___x_5128_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_value_5112_, v_a_4873_, v_snd_5124_);
if (lean_obj_tag(v___x_5128_) == 0)
{
lean_object* v_a_5129_; lean_object* v___x_5131_; uint8_t v_isShared_5132_; uint8_t v_isSharedCheck_5274_; 
v_a_5129_ = lean_ctor_get(v___x_5128_, 0);
v_isSharedCheck_5274_ = !lean_is_exclusive(v___x_5128_);
if (v_isSharedCheck_5274_ == 0)
{
v___x_5131_ = v___x_5128_;
v_isShared_5132_ = v_isSharedCheck_5274_;
goto v_resetjp_5130_;
}
else
{
lean_inc(v_a_5129_);
lean_dec(v___x_5128_);
v___x_5131_ = lean_box(0);
v_isShared_5132_ = v_isSharedCheck_5274_;
goto v_resetjp_5130_;
}
v_resetjp_5130_:
{
lean_object* v_snd_5133_; lean_object* v___x_5135_; uint8_t v_isShared_5136_; uint8_t v_isSharedCheck_5272_; 
v_snd_5133_ = lean_ctor_get(v_a_5129_, 1);
v_isSharedCheck_5272_ = !lean_is_exclusive(v_a_5129_);
if (v_isSharedCheck_5272_ == 0)
{
lean_object* v_unused_5273_; 
v_unused_5273_ = lean_ctor_get(v_a_5129_, 0);
lean_dec(v_unused_5273_);
v___x_5135_ = v_a_5129_;
v_isShared_5136_ = v_isSharedCheck_5272_;
goto v_resetjp_5134_;
}
else
{
lean_inc(v_snd_5133_);
lean_dec(v_a_5129_);
v___x_5135_ = lean_box(0);
v_isShared_5136_ = v_isSharedCheck_5272_;
goto v_resetjp_5134_;
}
v_resetjp_5134_:
{
lean_object* v___x_5137_; 
v___x_5137_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_5116_, v_a_4873_, v_snd_5133_);
if (lean_obj_tag(v___x_5137_) == 0)
{
lean_object* v_a_5138_; lean_object* v_fst_5139_; lean_object* v_snd_5140_; lean_object* v___x_5142_; uint8_t v_isShared_5143_; uint8_t v_isSharedCheck_5263_; 
v_a_5138_ = lean_ctor_get(v___x_5137_, 0);
lean_inc(v_a_5138_);
lean_dec_ref_known(v___x_5137_, 1);
v_fst_5139_ = lean_ctor_get(v_a_5138_, 0);
v_snd_5140_ = lean_ctor_get(v_a_5138_, 1);
v_isSharedCheck_5263_ = !lean_is_exclusive(v_a_5138_);
if (v_isSharedCheck_5263_ == 0)
{
v___x_5142_ = v_a_5138_;
v_isShared_5143_ = v_isSharedCheck_5263_;
goto v_resetjp_5141_;
}
else
{
lean_inc(v_snd_5140_);
lean_inc(v_fst_5139_);
lean_dec(v_a_5138_);
v___x_5142_ = lean_box(0);
v_isShared_5143_ = v_isSharedCheck_5263_;
goto v_resetjp_5141_;
}
v_resetjp_5141_:
{
lean_object* v___x_5144_; 
v___x_5144_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_5117_, v_a_4873_, v_snd_5140_);
if (lean_obj_tag(v___x_5144_) == 0)
{
lean_object* v_a_5145_; lean_object* v_fst_5146_; lean_object* v_snd_5147_; lean_object* v___x_5149_; uint8_t v_isShared_5150_; uint8_t v_isSharedCheck_5254_; 
v_a_5145_ = lean_ctor_get(v___x_5144_, 0);
lean_inc(v_a_5145_);
lean_dec_ref_known(v___x_5144_, 1);
v_fst_5146_ = lean_ctor_get(v_a_5145_, 0);
v_snd_5147_ = lean_ctor_get(v_a_5145_, 1);
v_isSharedCheck_5254_ = !lean_is_exclusive(v_a_5145_);
if (v_isSharedCheck_5254_ == 0)
{
v___x_5149_ = v_a_5145_;
v_isShared_5150_ = v_isSharedCheck_5254_;
goto v_resetjp_5148_;
}
else
{
lean_inc(v_snd_5147_);
lean_inc(v_fst_5146_);
lean_dec(v_a_5145_);
v___x_5149_ = lean_box(0);
v_isShared_5150_ = v_isSharedCheck_5254_;
goto v_resetjp_5148_;
}
v_resetjp_5148_:
{
lean_object* v___x_5151_; 
v___x_5151_ = l_LeanExport_dumpExpr(v_type_5118_, v_a_4873_, v_snd_5147_);
if (lean_obj_tag(v___x_5151_) == 0)
{
lean_object* v_a_5152_; lean_object* v_fst_5153_; lean_object* v_snd_5154_; lean_object* v___x_5156_; uint8_t v_isShared_5157_; uint8_t v_isSharedCheck_5245_; 
v_a_5152_ = lean_ctor_get(v___x_5151_, 0);
lean_inc(v_a_5152_);
lean_dec_ref_known(v___x_5151_, 1);
v_fst_5153_ = lean_ctor_get(v_a_5152_, 0);
v_snd_5154_ = lean_ctor_get(v_a_5152_, 1);
v_isSharedCheck_5245_ = !lean_is_exclusive(v_a_5152_);
if (v_isSharedCheck_5245_ == 0)
{
v___x_5156_ = v_a_5152_;
v_isShared_5157_ = v_isSharedCheck_5245_;
goto v_resetjp_5155_;
}
else
{
lean_inc(v_snd_5154_);
lean_inc(v_fst_5153_);
lean_dec(v_a_5152_);
v___x_5156_ = lean_box(0);
v_isShared_5157_ = v_isSharedCheck_5245_;
goto v_resetjp_5155_;
}
v_resetjp_5155_:
{
lean_object* v___x_5158_; 
v___x_5158_ = l_LeanExport_dumpExpr(v_value_5112_, v_a_4873_, v_snd_5154_);
if (lean_obj_tag(v___x_5158_) == 0)
{
lean_object* v_a_5159_; lean_object* v_fst_5160_; lean_object* v_snd_5161_; lean_object* v___x_5163_; uint8_t v_isShared_5164_; uint8_t v_isSharedCheck_5236_; 
v_a_5159_ = lean_ctor_get(v___x_5158_, 0);
lean_inc(v_a_5159_);
lean_dec_ref_known(v___x_5158_, 1);
v_fst_5160_ = lean_ctor_get(v_a_5159_, 0);
v_snd_5161_ = lean_ctor_get(v_a_5159_, 1);
v_isSharedCheck_5236_ = !lean_is_exclusive(v_a_5159_);
if (v_isSharedCheck_5236_ == 0)
{
v___x_5163_ = v_a_5159_;
v_isShared_5164_ = v_isSharedCheck_5236_;
goto v_resetjp_5162_;
}
else
{
lean_inc(v_snd_5161_);
lean_inc(v_fst_5160_);
lean_dec(v_a_5159_);
v___x_5163_ = lean_box(0);
v_isShared_5164_ = v_isSharedCheck_5236_;
goto v_resetjp_5162_;
}
v_resetjp_5162_:
{
lean_object* v___x_5165_; 
v___x_5165_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_5115_, v_a_4873_, v_snd_5161_);
if (lean_obj_tag(v___x_5165_) == 0)
{
lean_object* v_a_5166_; lean_object* v_fst_5167_; lean_object* v_snd_5168_; lean_object* v___x_5170_; uint8_t v_isShared_5171_; uint8_t v_isSharedCheck_5227_; 
v_a_5166_ = lean_ctor_get(v___x_5165_, 0);
lean_inc(v_a_5166_);
lean_dec_ref_known(v___x_5165_, 1);
v_fst_5167_ = lean_ctor_get(v_a_5166_, 0);
v_snd_5168_ = lean_ctor_get(v_a_5166_, 1);
v_isSharedCheck_5227_ = !lean_is_exclusive(v_a_5166_);
if (v_isSharedCheck_5227_ == 0)
{
v___x_5170_ = v_a_5166_;
v_isShared_5171_ = v_isSharedCheck_5227_;
goto v_resetjp_5169_;
}
else
{
lean_inc(v_snd_5168_);
lean_inc(v_fst_5167_);
lean_dec(v_a_5166_);
v___x_5170_ = lean_box(0);
v_isShared_5171_ = v_isSharedCheck_5227_;
goto v_resetjp_5169_;
}
v_resetjp_5169_:
{
lean_object* v___x_5172_; lean_object* v___x_5173_; lean_object* v___x_5174_; lean_object* v___x_5176_; 
v___x_5172_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__4));
v___x_5173_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_5174_ = l_Lean_JsonNumber_fromNat(v_fst_5139_);
if (v_isShared_5132_ == 0)
{
lean_ctor_set_tag(v___x_5131_, 2);
lean_ctor_set(v___x_5131_, 0, v___x_5174_);
v___x_5176_ = v___x_5131_;
goto v_reusejp_5175_;
}
else
{
lean_object* v_reuseFailAlloc_5226_; 
v_reuseFailAlloc_5226_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5226_, 0, v___x_5174_);
v___x_5176_ = v_reuseFailAlloc_5226_;
goto v_reusejp_5175_;
}
v_reusejp_5175_:
{
lean_object* v___x_5178_; 
if (v_isShared_5171_ == 0)
{
lean_ctor_set(v___x_5170_, 1, v___x_5176_);
lean_ctor_set(v___x_5170_, 0, v___x_5173_);
v___x_5178_ = v___x_5170_;
goto v_reusejp_5177_;
}
else
{
lean_object* v_reuseFailAlloc_5225_; 
v_reuseFailAlloc_5225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5225_, 0, v___x_5173_);
lean_ctor_set(v_reuseFailAlloc_5225_, 1, v___x_5176_);
v___x_5178_ = v_reuseFailAlloc_5225_;
goto v_reusejp_5177_;
}
v_reusejp_5177_:
{
lean_object* v___x_5179_; lean_object* v___x_5181_; 
v___x_5179_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_5164_ == 0)
{
lean_ctor_set(v___x_5163_, 1, v_fst_5146_);
lean_ctor_set(v___x_5163_, 0, v___x_5179_);
v___x_5181_ = v___x_5163_;
goto v_reusejp_5180_;
}
else
{
lean_object* v_reuseFailAlloc_5224_; 
v_reuseFailAlloc_5224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5224_, 0, v___x_5179_);
lean_ctor_set(v_reuseFailAlloc_5224_, 1, v_fst_5146_);
v___x_5181_ = v_reuseFailAlloc_5224_;
goto v_reusejp_5180_;
}
v_reusejp_5180_:
{
lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5185_; 
v___x_5182_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_5183_ = l_Lean_JsonNumber_fromNat(v_fst_5153_);
if (v_isShared_5123_ == 0)
{
lean_ctor_set_tag(v___x_5122_, 2);
lean_ctor_set(v___x_5122_, 0, v___x_5183_);
v___x_5185_ = v___x_5122_;
goto v_reusejp_5184_;
}
else
{
lean_object* v_reuseFailAlloc_5223_; 
v_reuseFailAlloc_5223_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5223_, 0, v___x_5183_);
v___x_5185_ = v_reuseFailAlloc_5223_;
goto v_reusejp_5184_;
}
v_reusejp_5184_:
{
lean_object* v___x_5187_; 
if (v_isShared_5157_ == 0)
{
lean_ctor_set(v___x_5156_, 1, v___x_5185_);
lean_ctor_set(v___x_5156_, 0, v___x_5182_);
v___x_5187_ = v___x_5156_;
goto v_reusejp_5186_;
}
else
{
lean_object* v_reuseFailAlloc_5222_; 
v_reuseFailAlloc_5222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5222_, 0, v___x_5182_);
lean_ctor_set(v_reuseFailAlloc_5222_, 1, v___x_5185_);
v___x_5187_ = v_reuseFailAlloc_5222_;
goto v_reusejp_5186_;
}
v_reusejp_5186_:
{
lean_object* v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5191_; 
v___x_5188_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_5189_ = l_Lean_JsonNumber_fromNat(v_fst_5160_);
if (v_isShared_5110_ == 0)
{
lean_ctor_set_tag(v___x_5109_, 2);
lean_ctor_set(v___x_5109_, 0, v___x_5189_);
v___x_5191_ = v___x_5109_;
goto v_reusejp_5190_;
}
else
{
lean_object* v_reuseFailAlloc_5221_; 
v_reuseFailAlloc_5221_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5221_, 0, v___x_5189_);
v___x_5191_ = v_reuseFailAlloc_5221_;
goto v_reusejp_5190_;
}
v_reusejp_5190_:
{
lean_object* v___x_5193_; 
if (v_isShared_5150_ == 0)
{
lean_ctor_set(v___x_5149_, 1, v___x_5191_);
lean_ctor_set(v___x_5149_, 0, v___x_5188_);
v___x_5193_ = v___x_5149_;
goto v_reusejp_5192_;
}
else
{
lean_object* v_reuseFailAlloc_5220_; 
v_reuseFailAlloc_5220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5220_, 0, v___x_5188_);
lean_ctor_set(v_reuseFailAlloc_5220_, 1, v___x_5191_);
v___x_5193_ = v_reuseFailAlloc_5220_;
goto v_reusejp_5192_;
}
v_reusejp_5192_:
{
lean_object* v___x_5194_; lean_object* v___x_5195_; lean_object* v___x_5197_; 
v___x_5194_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__5));
v___x_5195_ = l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson(v_hints_5113_);
lean_dec(v_hints_5113_);
if (v_isShared_5143_ == 0)
{
lean_ctor_set(v___x_5142_, 1, v___x_5195_);
lean_ctor_set(v___x_5142_, 0, v___x_5194_);
v___x_5197_ = v___x_5142_;
goto v_reusejp_5196_;
}
else
{
lean_object* v_reuseFailAlloc_5219_; 
v_reuseFailAlloc_5219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5219_, 0, v___x_5194_);
lean_ctor_set(v_reuseFailAlloc_5219_, 1, v___x_5195_);
v___x_5197_ = v_reuseFailAlloc_5219_;
goto v_reusejp_5196_;
}
v_reusejp_5196_:
{
lean_object* v___x_5198_; lean_object* v___x_5199_; lean_object* v___x_5201_; 
v___x_5198_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__6));
v___x_5199_ = l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson(v_safety_5114_);
if (v_isShared_5136_ == 0)
{
lean_ctor_set(v___x_5135_, 1, v___x_5199_);
lean_ctor_set(v___x_5135_, 0, v___x_5198_);
v___x_5201_ = v___x_5135_;
goto v_reusejp_5200_;
}
else
{
lean_object* v_reuseFailAlloc_5218_; 
v_reuseFailAlloc_5218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5218_, 0, v___x_5198_);
lean_ctor_set(v_reuseFailAlloc_5218_, 1, v___x_5199_);
v___x_5201_ = v_reuseFailAlloc_5218_;
goto v_reusejp_5200_;
}
v_reusejp_5200_:
{
lean_object* v___x_5202_; lean_object* v___x_5204_; 
v___x_5202_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_5127_ == 0)
{
lean_ctor_set(v___x_5126_, 1, v_fst_5167_);
lean_ctor_set(v___x_5126_, 0, v___x_5202_);
v___x_5204_ = v___x_5126_;
goto v_reusejp_5203_;
}
else
{
lean_object* v_reuseFailAlloc_5217_; 
v_reuseFailAlloc_5217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5217_, 0, v___x_5202_);
lean_ctor_set(v_reuseFailAlloc_5217_, 1, v_fst_5167_);
v___x_5204_ = v_reuseFailAlloc_5217_;
goto v_reusejp_5203_;
}
v_reusejp_5203_:
{
lean_object* v___x_5205_; lean_object* v___x_5206_; lean_object* v___x_5207_; lean_object* v___x_5208_; lean_object* v___x_5209_; lean_object* v___x_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; 
v___x_5205_ = lean_box(0);
v___x_5206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5206_, 0, v___x_5204_);
lean_ctor_set(v___x_5206_, 1, v___x_5205_);
v___x_5207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5207_, 0, v___x_5201_);
lean_ctor_set(v___x_5207_, 1, v___x_5206_);
v___x_5208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5208_, 0, v___x_5197_);
lean_ctor_set(v___x_5208_, 1, v___x_5207_);
v___x_5209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5209_, 0, v___x_5193_);
lean_ctor_set(v___x_5209_, 1, v___x_5208_);
v___x_5210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5210_, 0, v___x_5187_);
lean_ctor_set(v___x_5210_, 1, v___x_5209_);
v___x_5211_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5211_, 0, v___x_5181_);
lean_ctor_set(v___x_5211_, 1, v___x_5210_);
v___x_5212_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5212_, 0, v___x_5178_);
lean_ctor_set(v___x_5212_, 1, v___x_5211_);
v___x_5213_ = l_Lean_Json_mkObj(v___x_5212_);
lean_dec_ref_known(v___x_5212_, 2);
v___x_5214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5214_, 0, v___x_5172_);
lean_ctor_set(v___x_5214_, 1, v___x_5213_);
v___x_5215_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5215_, 0, v___x_5214_);
lean_ctor_set(v___x_5215_, 1, v___x_5205_);
v___x_5216_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_5215_, v_snd_5168_);
lean_dec_ref_known(v___x_5215_, 2);
return v___x_5216_;
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
}
else
{
lean_object* v_a_5228_; lean_object* v___x_5230_; uint8_t v_isShared_5231_; uint8_t v_isSharedCheck_5235_; 
lean_del_object(v___x_5163_);
lean_dec(v_fst_5160_);
lean_del_object(v___x_5156_);
lean_dec(v_fst_5153_);
lean_del_object(v___x_5149_);
lean_dec(v_fst_5146_);
lean_del_object(v___x_5142_);
lean_dec(v_fst_5139_);
lean_del_object(v___x_5135_);
lean_del_object(v___x_5131_);
lean_del_object(v___x_5126_);
lean_del_object(v___x_5122_);
lean_dec(v_hints_5113_);
lean_del_object(v___x_5109_);
v_a_5228_ = lean_ctor_get(v___x_5165_, 0);
v_isSharedCheck_5235_ = !lean_is_exclusive(v___x_5165_);
if (v_isSharedCheck_5235_ == 0)
{
v___x_5230_ = v___x_5165_;
v_isShared_5231_ = v_isSharedCheck_5235_;
goto v_resetjp_5229_;
}
else
{
lean_inc(v_a_5228_);
lean_dec(v___x_5165_);
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
}
else
{
lean_object* v_a_5237_; lean_object* v___x_5239_; uint8_t v_isShared_5240_; uint8_t v_isSharedCheck_5244_; 
lean_del_object(v___x_5156_);
lean_dec(v_fst_5153_);
lean_del_object(v___x_5149_);
lean_dec(v_fst_5146_);
lean_del_object(v___x_5142_);
lean_dec(v_fst_5139_);
lean_del_object(v___x_5135_);
lean_del_object(v___x_5131_);
lean_del_object(v___x_5126_);
lean_del_object(v___x_5122_);
lean_dec(v_all_5115_);
lean_dec(v_hints_5113_);
lean_del_object(v___x_5109_);
v_a_5237_ = lean_ctor_get(v___x_5158_, 0);
v_isSharedCheck_5244_ = !lean_is_exclusive(v___x_5158_);
if (v_isSharedCheck_5244_ == 0)
{
v___x_5239_ = v___x_5158_;
v_isShared_5240_ = v_isSharedCheck_5244_;
goto v_resetjp_5238_;
}
else
{
lean_inc(v_a_5237_);
lean_dec(v___x_5158_);
v___x_5239_ = lean_box(0);
v_isShared_5240_ = v_isSharedCheck_5244_;
goto v_resetjp_5238_;
}
v_resetjp_5238_:
{
lean_object* v___x_5242_; 
if (v_isShared_5240_ == 0)
{
v___x_5242_ = v___x_5239_;
goto v_reusejp_5241_;
}
else
{
lean_object* v_reuseFailAlloc_5243_; 
v_reuseFailAlloc_5243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5243_, 0, v_a_5237_);
v___x_5242_ = v_reuseFailAlloc_5243_;
goto v_reusejp_5241_;
}
v_reusejp_5241_:
{
return v___x_5242_;
}
}
}
}
}
else
{
lean_object* v_a_5246_; lean_object* v___x_5248_; uint8_t v_isShared_5249_; uint8_t v_isSharedCheck_5253_; 
lean_del_object(v___x_5149_);
lean_dec(v_fst_5146_);
lean_del_object(v___x_5142_);
lean_dec(v_fst_5139_);
lean_del_object(v___x_5135_);
lean_del_object(v___x_5131_);
lean_del_object(v___x_5126_);
lean_del_object(v___x_5122_);
lean_dec(v_all_5115_);
lean_dec(v_hints_5113_);
lean_dec_ref(v_value_5112_);
lean_del_object(v___x_5109_);
v_a_5246_ = lean_ctor_get(v___x_5151_, 0);
v_isSharedCheck_5253_ = !lean_is_exclusive(v___x_5151_);
if (v_isSharedCheck_5253_ == 0)
{
v___x_5248_ = v___x_5151_;
v_isShared_5249_ = v_isSharedCheck_5253_;
goto v_resetjp_5247_;
}
else
{
lean_inc(v_a_5246_);
lean_dec(v___x_5151_);
v___x_5248_ = lean_box(0);
v_isShared_5249_ = v_isSharedCheck_5253_;
goto v_resetjp_5247_;
}
v_resetjp_5247_:
{
lean_object* v___x_5251_; 
if (v_isShared_5249_ == 0)
{
v___x_5251_ = v___x_5248_;
goto v_reusejp_5250_;
}
else
{
lean_object* v_reuseFailAlloc_5252_; 
v_reuseFailAlloc_5252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5252_, 0, v_a_5246_);
v___x_5251_ = v_reuseFailAlloc_5252_;
goto v_reusejp_5250_;
}
v_reusejp_5250_:
{
return v___x_5251_;
}
}
}
}
}
else
{
lean_object* v_a_5255_; lean_object* v___x_5257_; uint8_t v_isShared_5258_; uint8_t v_isSharedCheck_5262_; 
lean_del_object(v___x_5142_);
lean_dec(v_fst_5139_);
lean_del_object(v___x_5135_);
lean_del_object(v___x_5131_);
lean_del_object(v___x_5126_);
lean_del_object(v___x_5122_);
lean_dec_ref(v_type_5118_);
lean_dec(v_all_5115_);
lean_dec(v_hints_5113_);
lean_dec_ref(v_value_5112_);
lean_del_object(v___x_5109_);
v_a_5255_ = lean_ctor_get(v___x_5144_, 0);
v_isSharedCheck_5262_ = !lean_is_exclusive(v___x_5144_);
if (v_isSharedCheck_5262_ == 0)
{
v___x_5257_ = v___x_5144_;
v_isShared_5258_ = v_isSharedCheck_5262_;
goto v_resetjp_5256_;
}
else
{
lean_inc(v_a_5255_);
lean_dec(v___x_5144_);
v___x_5257_ = lean_box(0);
v_isShared_5258_ = v_isSharedCheck_5262_;
goto v_resetjp_5256_;
}
v_resetjp_5256_:
{
lean_object* v___x_5260_; 
if (v_isShared_5258_ == 0)
{
v___x_5260_ = v___x_5257_;
goto v_reusejp_5259_;
}
else
{
lean_object* v_reuseFailAlloc_5261_; 
v_reuseFailAlloc_5261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5261_, 0, v_a_5255_);
v___x_5260_ = v_reuseFailAlloc_5261_;
goto v_reusejp_5259_;
}
v_reusejp_5259_:
{
return v___x_5260_;
}
}
}
}
}
else
{
lean_object* v_a_5264_; lean_object* v___x_5266_; uint8_t v_isShared_5267_; uint8_t v_isSharedCheck_5271_; 
lean_del_object(v___x_5135_);
lean_del_object(v___x_5131_);
lean_del_object(v___x_5126_);
lean_del_object(v___x_5122_);
lean_dec_ref(v_type_5118_);
lean_dec(v_levelParams_5117_);
lean_dec(v_all_5115_);
lean_dec(v_hints_5113_);
lean_dec_ref(v_value_5112_);
lean_del_object(v___x_5109_);
v_a_5264_ = lean_ctor_get(v___x_5137_, 0);
v_isSharedCheck_5271_ = !lean_is_exclusive(v___x_5137_);
if (v_isSharedCheck_5271_ == 0)
{
v___x_5266_ = v___x_5137_;
v_isShared_5267_ = v_isSharedCheck_5271_;
goto v_resetjp_5265_;
}
else
{
lean_inc(v_a_5264_);
lean_dec(v___x_5137_);
v___x_5266_ = lean_box(0);
v_isShared_5267_ = v_isSharedCheck_5271_;
goto v_resetjp_5265_;
}
v_resetjp_5265_:
{
lean_object* v___x_5269_; 
if (v_isShared_5267_ == 0)
{
v___x_5269_ = v___x_5266_;
goto v_reusejp_5268_;
}
else
{
lean_object* v_reuseFailAlloc_5270_; 
v_reuseFailAlloc_5270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5270_, 0, v_a_5264_);
v___x_5269_ = v_reuseFailAlloc_5270_;
goto v_reusejp_5268_;
}
v_reusejp_5268_:
{
return v___x_5269_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_5126_);
lean_del_object(v___x_5122_);
lean_dec_ref(v_type_5118_);
lean_dec(v_levelParams_5117_);
lean_dec(v_name_5116_);
lean_dec(v_all_5115_);
lean_dec(v_hints_5113_);
lean_dec_ref(v_value_5112_);
lean_del_object(v___x_5109_);
return v___x_5128_;
}
}
}
}
else
{
lean_dec_ref(v_type_5118_);
lean_dec(v_levelParams_5117_);
lean_dec(v_name_5116_);
lean_dec(v_all_5115_);
lean_dec(v_hints_5113_);
lean_dec_ref(v_value_5112_);
lean_del_object(v___x_5109_);
return v___x_5119_;
}
}
}
case 2:
{
lean_object* v_val_5279_; lean_object* v___x_5281_; uint8_t v_isShared_5282_; uint8_t v_isSharedCheck_5440_; 
v_val_5279_ = lean_ctor_get(v_val_4984_, 0);
v_isSharedCheck_5440_ = !lean_is_exclusive(v_val_4984_);
if (v_isSharedCheck_5440_ == 0)
{
v___x_5281_ = v_val_4984_;
v_isShared_5282_ = v_isSharedCheck_5440_;
goto v_resetjp_5280_;
}
else
{
lean_inc(v_val_5279_);
lean_dec(v_val_4984_);
v___x_5281_ = lean_box(0);
v_isShared_5282_ = v_isSharedCheck_5440_;
goto v_resetjp_5280_;
}
v_resetjp_5280_:
{
lean_object* v_toConstantVal_5283_; lean_object* v_value_5284_; lean_object* v_all_5285_; lean_object* v_name_5286_; lean_object* v_levelParams_5287_; lean_object* v_type_5288_; lean_object* v___x_5289_; 
v_toConstantVal_5283_ = lean_ctor_get(v_val_5279_, 0);
lean_inc_ref(v_toConstantVal_5283_);
v_value_5284_ = lean_ctor_get(v_val_5279_, 1);
lean_inc_ref(v_value_5284_);
v_all_5285_ = lean_ctor_get(v_val_5279_, 2);
lean_inc(v_all_5285_);
lean_dec_ref(v_val_5279_);
v_name_5286_ = lean_ctor_get(v_toConstantVal_5283_, 0);
lean_inc(v_name_5286_);
v_levelParams_5287_ = lean_ctor_get(v_toConstantVal_5283_, 1);
lean_inc(v_levelParams_5287_);
v_type_5288_ = lean_ctor_get(v_toConstantVal_5283_, 2);
lean_inc_ref_n(v_type_5288_, 2);
lean_dec_ref(v_toConstantVal_5283_);
v___x_5289_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_5288_, v_a_4873_, v___x_5001_);
if (lean_obj_tag(v___x_5289_) == 0)
{
lean_object* v_a_5290_; lean_object* v___x_5292_; uint8_t v_isShared_5293_; uint8_t v_isSharedCheck_5439_; 
v_a_5290_ = lean_ctor_get(v___x_5289_, 0);
v_isSharedCheck_5439_ = !lean_is_exclusive(v___x_5289_);
if (v_isSharedCheck_5439_ == 0)
{
v___x_5292_ = v___x_5289_;
v_isShared_5293_ = v_isSharedCheck_5439_;
goto v_resetjp_5291_;
}
else
{
lean_inc(v_a_5290_);
lean_dec(v___x_5289_);
v___x_5292_ = lean_box(0);
v_isShared_5293_ = v_isSharedCheck_5439_;
goto v_resetjp_5291_;
}
v_resetjp_5291_:
{
lean_object* v_snd_5294_; lean_object* v___x_5296_; uint8_t v_isShared_5297_; uint8_t v_isSharedCheck_5437_; 
v_snd_5294_ = lean_ctor_get(v_a_5290_, 1);
v_isSharedCheck_5437_ = !lean_is_exclusive(v_a_5290_);
if (v_isSharedCheck_5437_ == 0)
{
lean_object* v_unused_5438_; 
v_unused_5438_ = lean_ctor_get(v_a_5290_, 0);
lean_dec(v_unused_5438_);
v___x_5296_ = v_a_5290_;
v_isShared_5297_ = v_isSharedCheck_5437_;
goto v_resetjp_5295_;
}
else
{
lean_inc(v_snd_5294_);
lean_dec(v_a_5290_);
v___x_5296_ = lean_box(0);
v_isShared_5297_ = v_isSharedCheck_5437_;
goto v_resetjp_5295_;
}
v_resetjp_5295_:
{
lean_object* v___x_5298_; 
lean_inc_ref(v_value_5284_);
v___x_5298_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_value_5284_, v_a_4873_, v_snd_5294_);
if (lean_obj_tag(v___x_5298_) == 0)
{
lean_object* v_a_5299_; lean_object* v___x_5301_; uint8_t v_isShared_5302_; uint8_t v_isSharedCheck_5436_; 
v_a_5299_ = lean_ctor_get(v___x_5298_, 0);
v_isSharedCheck_5436_ = !lean_is_exclusive(v___x_5298_);
if (v_isSharedCheck_5436_ == 0)
{
v___x_5301_ = v___x_5298_;
v_isShared_5302_ = v_isSharedCheck_5436_;
goto v_resetjp_5300_;
}
else
{
lean_inc(v_a_5299_);
lean_dec(v___x_5298_);
v___x_5301_ = lean_box(0);
v_isShared_5302_ = v_isSharedCheck_5436_;
goto v_resetjp_5300_;
}
v_resetjp_5300_:
{
lean_object* v_snd_5303_; lean_object* v___x_5305_; uint8_t v_isShared_5306_; uint8_t v_isSharedCheck_5434_; 
v_snd_5303_ = lean_ctor_get(v_a_5299_, 1);
v_isSharedCheck_5434_ = !lean_is_exclusive(v_a_5299_);
if (v_isSharedCheck_5434_ == 0)
{
lean_object* v_unused_5435_; 
v_unused_5435_ = lean_ctor_get(v_a_5299_, 0);
lean_dec(v_unused_5435_);
v___x_5305_ = v_a_5299_;
v_isShared_5306_ = v_isSharedCheck_5434_;
goto v_resetjp_5304_;
}
else
{
lean_inc(v_snd_5303_);
lean_dec(v_a_5299_);
v___x_5305_ = lean_box(0);
v_isShared_5306_ = v_isSharedCheck_5434_;
goto v_resetjp_5304_;
}
v_resetjp_5304_:
{
lean_object* v___x_5307_; 
v___x_5307_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_5286_, v_a_4873_, v_snd_5303_);
if (lean_obj_tag(v___x_5307_) == 0)
{
lean_object* v_a_5308_; lean_object* v_fst_5309_; lean_object* v_snd_5310_; lean_object* v___x_5312_; uint8_t v_isShared_5313_; uint8_t v_isSharedCheck_5425_; 
v_a_5308_ = lean_ctor_get(v___x_5307_, 0);
lean_inc(v_a_5308_);
lean_dec_ref_known(v___x_5307_, 1);
v_fst_5309_ = lean_ctor_get(v_a_5308_, 0);
v_snd_5310_ = lean_ctor_get(v_a_5308_, 1);
v_isSharedCheck_5425_ = !lean_is_exclusive(v_a_5308_);
if (v_isSharedCheck_5425_ == 0)
{
v___x_5312_ = v_a_5308_;
v_isShared_5313_ = v_isSharedCheck_5425_;
goto v_resetjp_5311_;
}
else
{
lean_inc(v_snd_5310_);
lean_inc(v_fst_5309_);
lean_dec(v_a_5308_);
v___x_5312_ = lean_box(0);
v_isShared_5313_ = v_isSharedCheck_5425_;
goto v_resetjp_5311_;
}
v_resetjp_5311_:
{
lean_object* v___x_5314_; 
v___x_5314_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_5287_, v_a_4873_, v_snd_5310_);
if (lean_obj_tag(v___x_5314_) == 0)
{
lean_object* v_a_5315_; lean_object* v_fst_5316_; lean_object* v_snd_5317_; lean_object* v___x_5319_; uint8_t v_isShared_5320_; uint8_t v_isSharedCheck_5416_; 
v_a_5315_ = lean_ctor_get(v___x_5314_, 0);
lean_inc(v_a_5315_);
lean_dec_ref_known(v___x_5314_, 1);
v_fst_5316_ = lean_ctor_get(v_a_5315_, 0);
v_snd_5317_ = lean_ctor_get(v_a_5315_, 1);
v_isSharedCheck_5416_ = !lean_is_exclusive(v_a_5315_);
if (v_isSharedCheck_5416_ == 0)
{
v___x_5319_ = v_a_5315_;
v_isShared_5320_ = v_isSharedCheck_5416_;
goto v_resetjp_5318_;
}
else
{
lean_inc(v_snd_5317_);
lean_inc(v_fst_5316_);
lean_dec(v_a_5315_);
v___x_5319_ = lean_box(0);
v_isShared_5320_ = v_isSharedCheck_5416_;
goto v_resetjp_5318_;
}
v_resetjp_5318_:
{
lean_object* v___x_5321_; 
v___x_5321_ = l_LeanExport_dumpExpr(v_type_5288_, v_a_4873_, v_snd_5317_);
if (lean_obj_tag(v___x_5321_) == 0)
{
lean_object* v_a_5322_; lean_object* v_fst_5323_; lean_object* v_snd_5324_; lean_object* v___x_5326_; uint8_t v_isShared_5327_; uint8_t v_isSharedCheck_5407_; 
v_a_5322_ = lean_ctor_get(v___x_5321_, 0);
lean_inc(v_a_5322_);
lean_dec_ref_known(v___x_5321_, 1);
v_fst_5323_ = lean_ctor_get(v_a_5322_, 0);
v_snd_5324_ = lean_ctor_get(v_a_5322_, 1);
v_isSharedCheck_5407_ = !lean_is_exclusive(v_a_5322_);
if (v_isSharedCheck_5407_ == 0)
{
v___x_5326_ = v_a_5322_;
v_isShared_5327_ = v_isSharedCheck_5407_;
goto v_resetjp_5325_;
}
else
{
lean_inc(v_snd_5324_);
lean_inc(v_fst_5323_);
lean_dec(v_a_5322_);
v___x_5326_ = lean_box(0);
v_isShared_5327_ = v_isSharedCheck_5407_;
goto v_resetjp_5325_;
}
v_resetjp_5325_:
{
lean_object* v___x_5328_; 
v___x_5328_ = l_LeanExport_dumpExpr(v_value_5284_, v_a_4873_, v_snd_5324_);
if (lean_obj_tag(v___x_5328_) == 0)
{
lean_object* v_a_5329_; lean_object* v_fst_5330_; lean_object* v_snd_5331_; lean_object* v___x_5333_; uint8_t v_isShared_5334_; uint8_t v_isSharedCheck_5398_; 
v_a_5329_ = lean_ctor_get(v___x_5328_, 0);
lean_inc(v_a_5329_);
lean_dec_ref_known(v___x_5328_, 1);
v_fst_5330_ = lean_ctor_get(v_a_5329_, 0);
v_snd_5331_ = lean_ctor_get(v_a_5329_, 1);
v_isSharedCheck_5398_ = !lean_is_exclusive(v_a_5329_);
if (v_isSharedCheck_5398_ == 0)
{
v___x_5333_ = v_a_5329_;
v_isShared_5334_ = v_isSharedCheck_5398_;
goto v_resetjp_5332_;
}
else
{
lean_inc(v_snd_5331_);
lean_inc(v_fst_5330_);
lean_dec(v_a_5329_);
v___x_5333_ = lean_box(0);
v_isShared_5334_ = v_isSharedCheck_5398_;
goto v_resetjp_5332_;
}
v_resetjp_5332_:
{
lean_object* v___x_5335_; 
v___x_5335_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_5285_, v_a_4873_, v_snd_5331_);
if (lean_obj_tag(v___x_5335_) == 0)
{
lean_object* v_a_5336_; lean_object* v_fst_5337_; lean_object* v_snd_5338_; lean_object* v___x_5340_; uint8_t v_isShared_5341_; uint8_t v_isSharedCheck_5389_; 
v_a_5336_ = lean_ctor_get(v___x_5335_, 0);
lean_inc(v_a_5336_);
lean_dec_ref_known(v___x_5335_, 1);
v_fst_5337_ = lean_ctor_get(v_a_5336_, 0);
v_snd_5338_ = lean_ctor_get(v_a_5336_, 1);
v_isSharedCheck_5389_ = !lean_is_exclusive(v_a_5336_);
if (v_isSharedCheck_5389_ == 0)
{
v___x_5340_ = v_a_5336_;
v_isShared_5341_ = v_isSharedCheck_5389_;
goto v_resetjp_5339_;
}
else
{
lean_inc(v_snd_5338_);
lean_inc(v_fst_5337_);
lean_dec(v_a_5336_);
v___x_5340_ = lean_box(0);
v_isShared_5341_ = v_isSharedCheck_5389_;
goto v_resetjp_5339_;
}
v_resetjp_5339_:
{
lean_object* v___x_5342_; lean_object* v___x_5343_; lean_object* v___x_5344_; lean_object* v___x_5346_; 
v___x_5342_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__7));
v___x_5343_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_5344_ = l_Lean_JsonNumber_fromNat(v_fst_5309_);
if (v_isShared_5302_ == 0)
{
lean_ctor_set_tag(v___x_5301_, 2);
lean_ctor_set(v___x_5301_, 0, v___x_5344_);
v___x_5346_ = v___x_5301_;
goto v_reusejp_5345_;
}
else
{
lean_object* v_reuseFailAlloc_5388_; 
v_reuseFailAlloc_5388_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5388_, 0, v___x_5344_);
v___x_5346_ = v_reuseFailAlloc_5388_;
goto v_reusejp_5345_;
}
v_reusejp_5345_:
{
lean_object* v___x_5348_; 
if (v_isShared_5341_ == 0)
{
lean_ctor_set(v___x_5340_, 1, v___x_5346_);
lean_ctor_set(v___x_5340_, 0, v___x_5343_);
v___x_5348_ = v___x_5340_;
goto v_reusejp_5347_;
}
else
{
lean_object* v_reuseFailAlloc_5387_; 
v_reuseFailAlloc_5387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5387_, 0, v___x_5343_);
lean_ctor_set(v_reuseFailAlloc_5387_, 1, v___x_5346_);
v___x_5348_ = v_reuseFailAlloc_5387_;
goto v_reusejp_5347_;
}
v_reusejp_5347_:
{
lean_object* v___x_5349_; lean_object* v___x_5351_; 
v___x_5349_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_5334_ == 0)
{
lean_ctor_set(v___x_5333_, 1, v_fst_5316_);
lean_ctor_set(v___x_5333_, 0, v___x_5349_);
v___x_5351_ = v___x_5333_;
goto v_reusejp_5350_;
}
else
{
lean_object* v_reuseFailAlloc_5386_; 
v_reuseFailAlloc_5386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5386_, 0, v___x_5349_);
lean_ctor_set(v_reuseFailAlloc_5386_, 1, v_fst_5316_);
v___x_5351_ = v_reuseFailAlloc_5386_;
goto v_reusejp_5350_;
}
v_reusejp_5350_:
{
lean_object* v___x_5352_; lean_object* v___x_5353_; lean_object* v___x_5355_; 
v___x_5352_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_5353_ = l_Lean_JsonNumber_fromNat(v_fst_5323_);
if (v_isShared_5293_ == 0)
{
lean_ctor_set_tag(v___x_5292_, 2);
lean_ctor_set(v___x_5292_, 0, v___x_5353_);
v___x_5355_ = v___x_5292_;
goto v_reusejp_5354_;
}
else
{
lean_object* v_reuseFailAlloc_5385_; 
v_reuseFailAlloc_5385_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5385_, 0, v___x_5353_);
v___x_5355_ = v_reuseFailAlloc_5385_;
goto v_reusejp_5354_;
}
v_reusejp_5354_:
{
lean_object* v___x_5357_; 
if (v_isShared_5327_ == 0)
{
lean_ctor_set(v___x_5326_, 1, v___x_5355_);
lean_ctor_set(v___x_5326_, 0, v___x_5352_);
v___x_5357_ = v___x_5326_;
goto v_reusejp_5356_;
}
else
{
lean_object* v_reuseFailAlloc_5384_; 
v_reuseFailAlloc_5384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5384_, 0, v___x_5352_);
lean_ctor_set(v_reuseFailAlloc_5384_, 1, v___x_5355_);
v___x_5357_ = v_reuseFailAlloc_5384_;
goto v_reusejp_5356_;
}
v_reusejp_5356_:
{
lean_object* v___x_5358_; lean_object* v___x_5359_; lean_object* v___x_5361_; 
v___x_5358_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_5359_ = l_Lean_JsonNumber_fromNat(v_fst_5330_);
if (v_isShared_5282_ == 0)
{
lean_ctor_set(v___x_5281_, 0, v___x_5359_);
v___x_5361_ = v___x_5281_;
goto v_reusejp_5360_;
}
else
{
lean_object* v_reuseFailAlloc_5383_; 
v_reuseFailAlloc_5383_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5383_, 0, v___x_5359_);
v___x_5361_ = v_reuseFailAlloc_5383_;
goto v_reusejp_5360_;
}
v_reusejp_5360_:
{
lean_object* v___x_5363_; 
if (v_isShared_5320_ == 0)
{
lean_ctor_set(v___x_5319_, 1, v___x_5361_);
lean_ctor_set(v___x_5319_, 0, v___x_5358_);
v___x_5363_ = v___x_5319_;
goto v_reusejp_5362_;
}
else
{
lean_object* v_reuseFailAlloc_5382_; 
v_reuseFailAlloc_5382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5382_, 0, v___x_5358_);
lean_ctor_set(v_reuseFailAlloc_5382_, 1, v___x_5361_);
v___x_5363_ = v_reuseFailAlloc_5382_;
goto v_reusejp_5362_;
}
v_reusejp_5362_:
{
lean_object* v___x_5364_; lean_object* v___x_5366_; 
v___x_5364_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_5313_ == 0)
{
lean_ctor_set(v___x_5312_, 1, v_fst_5337_);
lean_ctor_set(v___x_5312_, 0, v___x_5364_);
v___x_5366_ = v___x_5312_;
goto v_reusejp_5365_;
}
else
{
lean_object* v_reuseFailAlloc_5381_; 
v_reuseFailAlloc_5381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5381_, 0, v___x_5364_);
lean_ctor_set(v_reuseFailAlloc_5381_, 1, v_fst_5337_);
v___x_5366_ = v_reuseFailAlloc_5381_;
goto v_reusejp_5365_;
}
v_reusejp_5365_:
{
lean_object* v___x_5367_; lean_object* v___x_5369_; 
v___x_5367_ = lean_box(0);
if (v_isShared_5297_ == 0)
{
lean_ctor_set_tag(v___x_5296_, 1);
lean_ctor_set(v___x_5296_, 1, v___x_5367_);
lean_ctor_set(v___x_5296_, 0, v___x_5366_);
v___x_5369_ = v___x_5296_;
goto v_reusejp_5368_;
}
else
{
lean_object* v_reuseFailAlloc_5380_; 
v_reuseFailAlloc_5380_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5380_, 0, v___x_5366_);
lean_ctor_set(v_reuseFailAlloc_5380_, 1, v___x_5367_);
v___x_5369_ = v_reuseFailAlloc_5380_;
goto v_reusejp_5368_;
}
v_reusejp_5368_:
{
lean_object* v___x_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5376_; 
v___x_5370_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5370_, 0, v___x_5363_);
lean_ctor_set(v___x_5370_, 1, v___x_5369_);
v___x_5371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5371_, 0, v___x_5357_);
lean_ctor_set(v___x_5371_, 1, v___x_5370_);
v___x_5372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5372_, 0, v___x_5351_);
lean_ctor_set(v___x_5372_, 1, v___x_5371_);
v___x_5373_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5373_, 0, v___x_5348_);
lean_ctor_set(v___x_5373_, 1, v___x_5372_);
v___x_5374_ = l_Lean_Json_mkObj(v___x_5373_);
lean_dec_ref_known(v___x_5373_, 2);
if (v_isShared_5306_ == 0)
{
lean_ctor_set(v___x_5305_, 1, v___x_5374_);
lean_ctor_set(v___x_5305_, 0, v___x_5342_);
v___x_5376_ = v___x_5305_;
goto v_reusejp_5375_;
}
else
{
lean_object* v_reuseFailAlloc_5379_; 
v_reuseFailAlloc_5379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5379_, 0, v___x_5342_);
lean_ctor_set(v_reuseFailAlloc_5379_, 1, v___x_5374_);
v___x_5376_ = v_reuseFailAlloc_5379_;
goto v_reusejp_5375_;
}
v_reusejp_5375_:
{
lean_object* v___x_5377_; lean_object* v___x_5378_; 
v___x_5377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5377_, 0, v___x_5376_);
lean_ctor_set(v___x_5377_, 1, v___x_5367_);
v___x_5378_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_5377_, v_snd_5338_);
lean_dec_ref_known(v___x_5377_, 2);
return v___x_5378_;
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
}
else
{
lean_object* v_a_5390_; lean_object* v___x_5392_; uint8_t v_isShared_5393_; uint8_t v_isSharedCheck_5397_; 
lean_del_object(v___x_5333_);
lean_dec(v_fst_5330_);
lean_del_object(v___x_5326_);
lean_dec(v_fst_5323_);
lean_del_object(v___x_5319_);
lean_dec(v_fst_5316_);
lean_del_object(v___x_5312_);
lean_dec(v_fst_5309_);
lean_del_object(v___x_5305_);
lean_del_object(v___x_5301_);
lean_del_object(v___x_5296_);
lean_del_object(v___x_5292_);
lean_del_object(v___x_5281_);
v_a_5390_ = lean_ctor_get(v___x_5335_, 0);
v_isSharedCheck_5397_ = !lean_is_exclusive(v___x_5335_);
if (v_isSharedCheck_5397_ == 0)
{
v___x_5392_ = v___x_5335_;
v_isShared_5393_ = v_isSharedCheck_5397_;
goto v_resetjp_5391_;
}
else
{
lean_inc(v_a_5390_);
lean_dec(v___x_5335_);
v___x_5392_ = lean_box(0);
v_isShared_5393_ = v_isSharedCheck_5397_;
goto v_resetjp_5391_;
}
v_resetjp_5391_:
{
lean_object* v___x_5395_; 
if (v_isShared_5393_ == 0)
{
v___x_5395_ = v___x_5392_;
goto v_reusejp_5394_;
}
else
{
lean_object* v_reuseFailAlloc_5396_; 
v_reuseFailAlloc_5396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5396_, 0, v_a_5390_);
v___x_5395_ = v_reuseFailAlloc_5396_;
goto v_reusejp_5394_;
}
v_reusejp_5394_:
{
return v___x_5395_;
}
}
}
}
}
else
{
lean_object* v_a_5399_; lean_object* v___x_5401_; uint8_t v_isShared_5402_; uint8_t v_isSharedCheck_5406_; 
lean_del_object(v___x_5326_);
lean_dec(v_fst_5323_);
lean_del_object(v___x_5319_);
lean_dec(v_fst_5316_);
lean_del_object(v___x_5312_);
lean_dec(v_fst_5309_);
lean_del_object(v___x_5305_);
lean_del_object(v___x_5301_);
lean_del_object(v___x_5296_);
lean_del_object(v___x_5292_);
lean_dec(v_all_5285_);
lean_del_object(v___x_5281_);
v_a_5399_ = lean_ctor_get(v___x_5328_, 0);
v_isSharedCheck_5406_ = !lean_is_exclusive(v___x_5328_);
if (v_isSharedCheck_5406_ == 0)
{
v___x_5401_ = v___x_5328_;
v_isShared_5402_ = v_isSharedCheck_5406_;
goto v_resetjp_5400_;
}
else
{
lean_inc(v_a_5399_);
lean_dec(v___x_5328_);
v___x_5401_ = lean_box(0);
v_isShared_5402_ = v_isSharedCheck_5406_;
goto v_resetjp_5400_;
}
v_resetjp_5400_:
{
lean_object* v___x_5404_; 
if (v_isShared_5402_ == 0)
{
v___x_5404_ = v___x_5401_;
goto v_reusejp_5403_;
}
else
{
lean_object* v_reuseFailAlloc_5405_; 
v_reuseFailAlloc_5405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5405_, 0, v_a_5399_);
v___x_5404_ = v_reuseFailAlloc_5405_;
goto v_reusejp_5403_;
}
v_reusejp_5403_:
{
return v___x_5404_;
}
}
}
}
}
else
{
lean_object* v_a_5408_; lean_object* v___x_5410_; uint8_t v_isShared_5411_; uint8_t v_isSharedCheck_5415_; 
lean_del_object(v___x_5319_);
lean_dec(v_fst_5316_);
lean_del_object(v___x_5312_);
lean_dec(v_fst_5309_);
lean_del_object(v___x_5305_);
lean_del_object(v___x_5301_);
lean_del_object(v___x_5296_);
lean_del_object(v___x_5292_);
lean_dec(v_all_5285_);
lean_dec_ref(v_value_5284_);
lean_del_object(v___x_5281_);
v_a_5408_ = lean_ctor_get(v___x_5321_, 0);
v_isSharedCheck_5415_ = !lean_is_exclusive(v___x_5321_);
if (v_isSharedCheck_5415_ == 0)
{
v___x_5410_ = v___x_5321_;
v_isShared_5411_ = v_isSharedCheck_5415_;
goto v_resetjp_5409_;
}
else
{
lean_inc(v_a_5408_);
lean_dec(v___x_5321_);
v___x_5410_ = lean_box(0);
v_isShared_5411_ = v_isSharedCheck_5415_;
goto v_resetjp_5409_;
}
v_resetjp_5409_:
{
lean_object* v___x_5413_; 
if (v_isShared_5411_ == 0)
{
v___x_5413_ = v___x_5410_;
goto v_reusejp_5412_;
}
else
{
lean_object* v_reuseFailAlloc_5414_; 
v_reuseFailAlloc_5414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5414_, 0, v_a_5408_);
v___x_5413_ = v_reuseFailAlloc_5414_;
goto v_reusejp_5412_;
}
v_reusejp_5412_:
{
return v___x_5413_;
}
}
}
}
}
else
{
lean_object* v_a_5417_; lean_object* v___x_5419_; uint8_t v_isShared_5420_; uint8_t v_isSharedCheck_5424_; 
lean_del_object(v___x_5312_);
lean_dec(v_fst_5309_);
lean_del_object(v___x_5305_);
lean_del_object(v___x_5301_);
lean_del_object(v___x_5296_);
lean_del_object(v___x_5292_);
lean_dec_ref(v_type_5288_);
lean_dec(v_all_5285_);
lean_dec_ref(v_value_5284_);
lean_del_object(v___x_5281_);
v_a_5417_ = lean_ctor_get(v___x_5314_, 0);
v_isSharedCheck_5424_ = !lean_is_exclusive(v___x_5314_);
if (v_isSharedCheck_5424_ == 0)
{
v___x_5419_ = v___x_5314_;
v_isShared_5420_ = v_isSharedCheck_5424_;
goto v_resetjp_5418_;
}
else
{
lean_inc(v_a_5417_);
lean_dec(v___x_5314_);
v___x_5419_ = lean_box(0);
v_isShared_5420_ = v_isSharedCheck_5424_;
goto v_resetjp_5418_;
}
v_resetjp_5418_:
{
lean_object* v___x_5422_; 
if (v_isShared_5420_ == 0)
{
v___x_5422_ = v___x_5419_;
goto v_reusejp_5421_;
}
else
{
lean_object* v_reuseFailAlloc_5423_; 
v_reuseFailAlloc_5423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5423_, 0, v_a_5417_);
v___x_5422_ = v_reuseFailAlloc_5423_;
goto v_reusejp_5421_;
}
v_reusejp_5421_:
{
return v___x_5422_;
}
}
}
}
}
else
{
lean_object* v_a_5426_; lean_object* v___x_5428_; uint8_t v_isShared_5429_; uint8_t v_isSharedCheck_5433_; 
lean_del_object(v___x_5305_);
lean_del_object(v___x_5301_);
lean_del_object(v___x_5296_);
lean_del_object(v___x_5292_);
lean_dec_ref(v_type_5288_);
lean_dec(v_levelParams_5287_);
lean_dec(v_all_5285_);
lean_dec_ref(v_value_5284_);
lean_del_object(v___x_5281_);
v_a_5426_ = lean_ctor_get(v___x_5307_, 0);
v_isSharedCheck_5433_ = !lean_is_exclusive(v___x_5307_);
if (v_isSharedCheck_5433_ == 0)
{
v___x_5428_ = v___x_5307_;
v_isShared_5429_ = v_isSharedCheck_5433_;
goto v_resetjp_5427_;
}
else
{
lean_inc(v_a_5426_);
lean_dec(v___x_5307_);
v___x_5428_ = lean_box(0);
v_isShared_5429_ = v_isSharedCheck_5433_;
goto v_resetjp_5427_;
}
v_resetjp_5427_:
{
lean_object* v___x_5431_; 
if (v_isShared_5429_ == 0)
{
v___x_5431_ = v___x_5428_;
goto v_reusejp_5430_;
}
else
{
lean_object* v_reuseFailAlloc_5432_; 
v_reuseFailAlloc_5432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5432_, 0, v_a_5426_);
v___x_5431_ = v_reuseFailAlloc_5432_;
goto v_reusejp_5430_;
}
v_reusejp_5430_:
{
return v___x_5431_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_5296_);
lean_del_object(v___x_5292_);
lean_dec_ref(v_type_5288_);
lean_dec(v_levelParams_5287_);
lean_dec(v_name_5286_);
lean_dec(v_all_5285_);
lean_dec_ref(v_value_5284_);
lean_del_object(v___x_5281_);
return v___x_5298_;
}
}
}
}
else
{
lean_dec_ref(v_type_5288_);
lean_dec(v_levelParams_5287_);
lean_dec(v_name_5286_);
lean_dec(v_all_5285_);
lean_dec_ref(v_value_5284_);
lean_del_object(v___x_5281_);
return v___x_5289_;
}
}
}
case 3:
{
lean_object* v_val_5441_; lean_object* v___x_5443_; uint8_t v_isShared_5444_; uint8_t v_isSharedCheck_5607_; 
v_val_5441_ = lean_ctor_get(v_val_4984_, 0);
v_isSharedCheck_5607_ = !lean_is_exclusive(v_val_4984_);
if (v_isSharedCheck_5607_ == 0)
{
v___x_5443_ = v_val_4984_;
v_isShared_5444_ = v_isSharedCheck_5607_;
goto v_resetjp_5442_;
}
else
{
lean_inc(v_val_5441_);
lean_dec(v_val_4984_);
v___x_5443_ = lean_box(0);
v_isShared_5444_ = v_isSharedCheck_5607_;
goto v_resetjp_5442_;
}
v_resetjp_5442_:
{
lean_object* v_toConstantVal_5445_; lean_object* v_value_5446_; uint8_t v_isUnsafe_5447_; lean_object* v_all_5448_; lean_object* v_name_5449_; lean_object* v_levelParams_5450_; lean_object* v_type_5451_; lean_object* v___x_5452_; 
v_toConstantVal_5445_ = lean_ctor_get(v_val_5441_, 0);
lean_inc_ref(v_toConstantVal_5445_);
v_value_5446_ = lean_ctor_get(v_val_5441_, 1);
lean_inc_ref(v_value_5446_);
v_isUnsafe_5447_ = lean_ctor_get_uint8(v_val_5441_, sizeof(void*)*3);
v_all_5448_ = lean_ctor_get(v_val_5441_, 2);
lean_inc(v_all_5448_);
lean_dec_ref(v_val_5441_);
v_name_5449_ = lean_ctor_get(v_toConstantVal_5445_, 0);
lean_inc(v_name_5449_);
v_levelParams_5450_ = lean_ctor_get(v_toConstantVal_5445_, 1);
lean_inc(v_levelParams_5450_);
v_type_5451_ = lean_ctor_get(v_toConstantVal_5445_, 2);
lean_inc_ref_n(v_type_5451_, 2);
lean_dec_ref(v_toConstantVal_5445_);
v___x_5452_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_5451_, v_a_4873_, v___x_5001_);
if (lean_obj_tag(v___x_5452_) == 0)
{
lean_object* v_a_5453_; lean_object* v___x_5455_; uint8_t v_isShared_5456_; uint8_t v_isSharedCheck_5606_; 
v_a_5453_ = lean_ctor_get(v___x_5452_, 0);
v_isSharedCheck_5606_ = !lean_is_exclusive(v___x_5452_);
if (v_isSharedCheck_5606_ == 0)
{
v___x_5455_ = v___x_5452_;
v_isShared_5456_ = v_isSharedCheck_5606_;
goto v_resetjp_5454_;
}
else
{
lean_inc(v_a_5453_);
lean_dec(v___x_5452_);
v___x_5455_ = lean_box(0);
v_isShared_5456_ = v_isSharedCheck_5606_;
goto v_resetjp_5454_;
}
v_resetjp_5454_:
{
lean_object* v_snd_5457_; lean_object* v___x_5459_; uint8_t v_isShared_5460_; uint8_t v_isSharedCheck_5604_; 
v_snd_5457_ = lean_ctor_get(v_a_5453_, 1);
v_isSharedCheck_5604_ = !lean_is_exclusive(v_a_5453_);
if (v_isSharedCheck_5604_ == 0)
{
lean_object* v_unused_5605_; 
v_unused_5605_ = lean_ctor_get(v_a_5453_, 0);
lean_dec(v_unused_5605_);
v___x_5459_ = v_a_5453_;
v_isShared_5460_ = v_isSharedCheck_5604_;
goto v_resetjp_5458_;
}
else
{
lean_inc(v_snd_5457_);
lean_dec(v_a_5453_);
v___x_5459_ = lean_box(0);
v_isShared_5460_ = v_isSharedCheck_5604_;
goto v_resetjp_5458_;
}
v_resetjp_5458_:
{
lean_object* v___x_5461_; 
lean_inc_ref(v_value_5446_);
v___x_5461_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_value_5446_, v_a_4873_, v_snd_5457_);
if (lean_obj_tag(v___x_5461_) == 0)
{
lean_object* v_a_5462_; lean_object* v___x_5464_; uint8_t v_isShared_5465_; uint8_t v_isSharedCheck_5603_; 
v_a_5462_ = lean_ctor_get(v___x_5461_, 0);
v_isSharedCheck_5603_ = !lean_is_exclusive(v___x_5461_);
if (v_isSharedCheck_5603_ == 0)
{
v___x_5464_ = v___x_5461_;
v_isShared_5465_ = v_isSharedCheck_5603_;
goto v_resetjp_5463_;
}
else
{
lean_inc(v_a_5462_);
lean_dec(v___x_5461_);
v___x_5464_ = lean_box(0);
v_isShared_5465_ = v_isSharedCheck_5603_;
goto v_resetjp_5463_;
}
v_resetjp_5463_:
{
lean_object* v_snd_5466_; lean_object* v___x_5468_; uint8_t v_isShared_5469_; uint8_t v_isSharedCheck_5601_; 
v_snd_5466_ = lean_ctor_get(v_a_5462_, 1);
v_isSharedCheck_5601_ = !lean_is_exclusive(v_a_5462_);
if (v_isSharedCheck_5601_ == 0)
{
lean_object* v_unused_5602_; 
v_unused_5602_ = lean_ctor_get(v_a_5462_, 0);
lean_dec(v_unused_5602_);
v___x_5468_ = v_a_5462_;
v_isShared_5469_ = v_isSharedCheck_5601_;
goto v_resetjp_5467_;
}
else
{
lean_inc(v_snd_5466_);
lean_dec(v_a_5462_);
v___x_5468_ = lean_box(0);
v_isShared_5469_ = v_isSharedCheck_5601_;
goto v_resetjp_5467_;
}
v_resetjp_5467_:
{
lean_object* v___x_5470_; 
v___x_5470_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_5449_, v_a_4873_, v_snd_5466_);
if (lean_obj_tag(v___x_5470_) == 0)
{
lean_object* v_a_5471_; lean_object* v_fst_5472_; lean_object* v_snd_5473_; lean_object* v___x_5475_; uint8_t v_isShared_5476_; uint8_t v_isSharedCheck_5592_; 
v_a_5471_ = lean_ctor_get(v___x_5470_, 0);
lean_inc(v_a_5471_);
lean_dec_ref_known(v___x_5470_, 1);
v_fst_5472_ = lean_ctor_get(v_a_5471_, 0);
v_snd_5473_ = lean_ctor_get(v_a_5471_, 1);
v_isSharedCheck_5592_ = !lean_is_exclusive(v_a_5471_);
if (v_isSharedCheck_5592_ == 0)
{
v___x_5475_ = v_a_5471_;
v_isShared_5476_ = v_isSharedCheck_5592_;
goto v_resetjp_5474_;
}
else
{
lean_inc(v_snd_5473_);
lean_inc(v_fst_5472_);
lean_dec(v_a_5471_);
v___x_5475_ = lean_box(0);
v_isShared_5476_ = v_isSharedCheck_5592_;
goto v_resetjp_5474_;
}
v_resetjp_5474_:
{
lean_object* v___x_5477_; 
v___x_5477_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_5450_, v_a_4873_, v_snd_5473_);
if (lean_obj_tag(v___x_5477_) == 0)
{
lean_object* v_a_5478_; lean_object* v_fst_5479_; lean_object* v_snd_5480_; lean_object* v___x_5482_; uint8_t v_isShared_5483_; uint8_t v_isSharedCheck_5583_; 
v_a_5478_ = lean_ctor_get(v___x_5477_, 0);
lean_inc(v_a_5478_);
lean_dec_ref_known(v___x_5477_, 1);
v_fst_5479_ = lean_ctor_get(v_a_5478_, 0);
v_snd_5480_ = lean_ctor_get(v_a_5478_, 1);
v_isSharedCheck_5583_ = !lean_is_exclusive(v_a_5478_);
if (v_isSharedCheck_5583_ == 0)
{
v___x_5482_ = v_a_5478_;
v_isShared_5483_ = v_isSharedCheck_5583_;
goto v_resetjp_5481_;
}
else
{
lean_inc(v_snd_5480_);
lean_inc(v_fst_5479_);
lean_dec(v_a_5478_);
v___x_5482_ = lean_box(0);
v_isShared_5483_ = v_isSharedCheck_5583_;
goto v_resetjp_5481_;
}
v_resetjp_5481_:
{
lean_object* v___x_5484_; 
v___x_5484_ = l_LeanExport_dumpExpr(v_type_5451_, v_a_4873_, v_snd_5480_);
if (lean_obj_tag(v___x_5484_) == 0)
{
lean_object* v_a_5485_; lean_object* v_fst_5486_; lean_object* v_snd_5487_; lean_object* v___x_5489_; uint8_t v_isShared_5490_; uint8_t v_isSharedCheck_5574_; 
v_a_5485_ = lean_ctor_get(v___x_5484_, 0);
lean_inc(v_a_5485_);
lean_dec_ref_known(v___x_5484_, 1);
v_fst_5486_ = lean_ctor_get(v_a_5485_, 0);
v_snd_5487_ = lean_ctor_get(v_a_5485_, 1);
v_isSharedCheck_5574_ = !lean_is_exclusive(v_a_5485_);
if (v_isSharedCheck_5574_ == 0)
{
v___x_5489_ = v_a_5485_;
v_isShared_5490_ = v_isSharedCheck_5574_;
goto v_resetjp_5488_;
}
else
{
lean_inc(v_snd_5487_);
lean_inc(v_fst_5486_);
lean_dec(v_a_5485_);
v___x_5489_ = lean_box(0);
v_isShared_5490_ = v_isSharedCheck_5574_;
goto v_resetjp_5488_;
}
v_resetjp_5488_:
{
lean_object* v___x_5491_; 
v___x_5491_ = l_LeanExport_dumpExpr(v_value_5446_, v_a_4873_, v_snd_5487_);
if (lean_obj_tag(v___x_5491_) == 0)
{
lean_object* v_a_5492_; lean_object* v_fst_5493_; lean_object* v_snd_5494_; lean_object* v___x_5496_; uint8_t v_isShared_5497_; uint8_t v_isSharedCheck_5565_; 
v_a_5492_ = lean_ctor_get(v___x_5491_, 0);
lean_inc(v_a_5492_);
lean_dec_ref_known(v___x_5491_, 1);
v_fst_5493_ = lean_ctor_get(v_a_5492_, 0);
v_snd_5494_ = lean_ctor_get(v_a_5492_, 1);
v_isSharedCheck_5565_ = !lean_is_exclusive(v_a_5492_);
if (v_isSharedCheck_5565_ == 0)
{
v___x_5496_ = v_a_5492_;
v_isShared_5497_ = v_isSharedCheck_5565_;
goto v_resetjp_5495_;
}
else
{
lean_inc(v_snd_5494_);
lean_inc(v_fst_5493_);
lean_dec(v_a_5492_);
v___x_5496_ = lean_box(0);
v_isShared_5497_ = v_isSharedCheck_5565_;
goto v_resetjp_5495_;
}
v_resetjp_5495_:
{
lean_object* v___x_5498_; 
v___x_5498_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_5448_, v_a_4873_, v_snd_5494_);
if (lean_obj_tag(v___x_5498_) == 0)
{
lean_object* v_a_5499_; lean_object* v_fst_5500_; lean_object* v_snd_5501_; lean_object* v___x_5503_; uint8_t v_isShared_5504_; uint8_t v_isSharedCheck_5556_; 
v_a_5499_ = lean_ctor_get(v___x_5498_, 0);
lean_inc(v_a_5499_);
lean_dec_ref_known(v___x_5498_, 1);
v_fst_5500_ = lean_ctor_get(v_a_5499_, 0);
v_snd_5501_ = lean_ctor_get(v_a_5499_, 1);
v_isSharedCheck_5556_ = !lean_is_exclusive(v_a_5499_);
if (v_isSharedCheck_5556_ == 0)
{
v___x_5503_ = v_a_5499_;
v_isShared_5504_ = v_isSharedCheck_5556_;
goto v_resetjp_5502_;
}
else
{
lean_inc(v_snd_5501_);
lean_inc(v_fst_5500_);
lean_dec(v_a_5499_);
v___x_5503_ = lean_box(0);
v_isShared_5504_ = v_isSharedCheck_5556_;
goto v_resetjp_5502_;
}
v_resetjp_5502_:
{
lean_object* v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5509_; 
v___x_5505_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0));
v___x_5506_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_5507_ = l_Lean_JsonNumber_fromNat(v_fst_5472_);
if (v_isShared_5465_ == 0)
{
lean_ctor_set_tag(v___x_5464_, 2);
lean_ctor_set(v___x_5464_, 0, v___x_5507_);
v___x_5509_ = v___x_5464_;
goto v_reusejp_5508_;
}
else
{
lean_object* v_reuseFailAlloc_5555_; 
v_reuseFailAlloc_5555_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5555_, 0, v___x_5507_);
v___x_5509_ = v_reuseFailAlloc_5555_;
goto v_reusejp_5508_;
}
v_reusejp_5508_:
{
lean_object* v___x_5511_; 
if (v_isShared_5504_ == 0)
{
lean_ctor_set(v___x_5503_, 1, v___x_5509_);
lean_ctor_set(v___x_5503_, 0, v___x_5506_);
v___x_5511_ = v___x_5503_;
goto v_reusejp_5510_;
}
else
{
lean_object* v_reuseFailAlloc_5554_; 
v_reuseFailAlloc_5554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5554_, 0, v___x_5506_);
lean_ctor_set(v_reuseFailAlloc_5554_, 1, v___x_5509_);
v___x_5511_ = v_reuseFailAlloc_5554_;
goto v_reusejp_5510_;
}
v_reusejp_5510_:
{
lean_object* v___x_5512_; lean_object* v___x_5514_; 
v___x_5512_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_5497_ == 0)
{
lean_ctor_set(v___x_5496_, 1, v_fst_5479_);
lean_ctor_set(v___x_5496_, 0, v___x_5512_);
v___x_5514_ = v___x_5496_;
goto v_reusejp_5513_;
}
else
{
lean_object* v_reuseFailAlloc_5553_; 
v_reuseFailAlloc_5553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5553_, 0, v___x_5512_);
lean_ctor_set(v_reuseFailAlloc_5553_, 1, v_fst_5479_);
v___x_5514_ = v_reuseFailAlloc_5553_;
goto v_reusejp_5513_;
}
v_reusejp_5513_:
{
lean_object* v___x_5515_; lean_object* v___x_5516_; lean_object* v___x_5518_; 
v___x_5515_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_5516_ = l_Lean_JsonNumber_fromNat(v_fst_5486_);
if (v_isShared_5456_ == 0)
{
lean_ctor_set_tag(v___x_5455_, 2);
lean_ctor_set(v___x_5455_, 0, v___x_5516_);
v___x_5518_ = v___x_5455_;
goto v_reusejp_5517_;
}
else
{
lean_object* v_reuseFailAlloc_5552_; 
v_reuseFailAlloc_5552_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5552_, 0, v___x_5516_);
v___x_5518_ = v_reuseFailAlloc_5552_;
goto v_reusejp_5517_;
}
v_reusejp_5517_:
{
lean_object* v___x_5520_; 
if (v_isShared_5490_ == 0)
{
lean_ctor_set(v___x_5489_, 1, v___x_5518_);
lean_ctor_set(v___x_5489_, 0, v___x_5515_);
v___x_5520_ = v___x_5489_;
goto v_reusejp_5519_;
}
else
{
lean_object* v_reuseFailAlloc_5551_; 
v_reuseFailAlloc_5551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5551_, 0, v___x_5515_);
lean_ctor_set(v_reuseFailAlloc_5551_, 1, v___x_5518_);
v___x_5520_ = v_reuseFailAlloc_5551_;
goto v_reusejp_5519_;
}
v_reusejp_5519_:
{
lean_object* v___x_5521_; lean_object* v___x_5522_; lean_object* v___x_5524_; 
v___x_5521_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_5522_ = l_Lean_JsonNumber_fromNat(v_fst_5493_);
if (v_isShared_5444_ == 0)
{
lean_ctor_set_tag(v___x_5443_, 2);
lean_ctor_set(v___x_5443_, 0, v___x_5522_);
v___x_5524_ = v___x_5443_;
goto v_reusejp_5523_;
}
else
{
lean_object* v_reuseFailAlloc_5550_; 
v_reuseFailAlloc_5550_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5550_, 0, v___x_5522_);
v___x_5524_ = v_reuseFailAlloc_5550_;
goto v_reusejp_5523_;
}
v_reusejp_5523_:
{
lean_object* v___x_5526_; 
if (v_isShared_5483_ == 0)
{
lean_ctor_set(v___x_5482_, 1, v___x_5524_);
lean_ctor_set(v___x_5482_, 0, v___x_5521_);
v___x_5526_ = v___x_5482_;
goto v_reusejp_5525_;
}
else
{
lean_object* v_reuseFailAlloc_5549_; 
v_reuseFailAlloc_5549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5549_, 0, v___x_5521_);
lean_ctor_set(v_reuseFailAlloc_5549_, 1, v___x_5524_);
v___x_5526_ = v_reuseFailAlloc_5549_;
goto v_reusejp_5525_;
}
v_reusejp_5525_:
{
lean_object* v___x_5527_; lean_object* v___x_5529_; 
v___x_5527_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_5476_ == 0)
{
lean_ctor_set(v___x_5475_, 1, v_fst_5500_);
lean_ctor_set(v___x_5475_, 0, v___x_5527_);
v___x_5529_ = v___x_5475_;
goto v_reusejp_5528_;
}
else
{
lean_object* v_reuseFailAlloc_5548_; 
v_reuseFailAlloc_5548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5548_, 0, v___x_5527_);
lean_ctor_set(v_reuseFailAlloc_5548_, 1, v_fst_5500_);
v___x_5529_ = v_reuseFailAlloc_5548_;
goto v_reusejp_5528_;
}
v_reusejp_5528_:
{
lean_object* v___x_5530_; lean_object* v___x_5531_; lean_object* v___x_5533_; 
v___x_5530_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6));
v___x_5531_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_5531_, 0, v_isUnsafe_5447_);
if (v_isShared_5469_ == 0)
{
lean_ctor_set(v___x_5468_, 1, v___x_5531_);
lean_ctor_set(v___x_5468_, 0, v___x_5530_);
v___x_5533_ = v___x_5468_;
goto v_reusejp_5532_;
}
else
{
lean_object* v_reuseFailAlloc_5547_; 
v_reuseFailAlloc_5547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5547_, 0, v___x_5530_);
lean_ctor_set(v_reuseFailAlloc_5547_, 1, v___x_5531_);
v___x_5533_ = v_reuseFailAlloc_5547_;
goto v_reusejp_5532_;
}
v_reusejp_5532_:
{
lean_object* v___x_5534_; lean_object* v___x_5535_; lean_object* v___x_5536_; lean_object* v___x_5537_; lean_object* v___x_5538_; lean_object* v___x_5539_; lean_object* v___x_5540_; lean_object* v___x_5541_; lean_object* v___x_5543_; 
v___x_5534_ = lean_box(0);
v___x_5535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5535_, 0, v___x_5533_);
lean_ctor_set(v___x_5535_, 1, v___x_5534_);
v___x_5536_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5536_, 0, v___x_5529_);
lean_ctor_set(v___x_5536_, 1, v___x_5535_);
v___x_5537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5537_, 0, v___x_5526_);
lean_ctor_set(v___x_5537_, 1, v___x_5536_);
v___x_5538_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5538_, 0, v___x_5520_);
lean_ctor_set(v___x_5538_, 1, v___x_5537_);
v___x_5539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5539_, 0, v___x_5514_);
lean_ctor_set(v___x_5539_, 1, v___x_5538_);
v___x_5540_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5540_, 0, v___x_5511_);
lean_ctor_set(v___x_5540_, 1, v___x_5539_);
v___x_5541_ = l_Lean_Json_mkObj(v___x_5540_);
lean_dec_ref_known(v___x_5540_, 2);
if (v_isShared_5460_ == 0)
{
lean_ctor_set(v___x_5459_, 1, v___x_5541_);
lean_ctor_set(v___x_5459_, 0, v___x_5505_);
v___x_5543_ = v___x_5459_;
goto v_reusejp_5542_;
}
else
{
lean_object* v_reuseFailAlloc_5546_; 
v_reuseFailAlloc_5546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5546_, 0, v___x_5505_);
lean_ctor_set(v_reuseFailAlloc_5546_, 1, v___x_5541_);
v___x_5543_ = v_reuseFailAlloc_5546_;
goto v_reusejp_5542_;
}
v_reusejp_5542_:
{
lean_object* v___x_5544_; lean_object* v___x_5545_; 
v___x_5544_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5544_, 0, v___x_5543_);
lean_ctor_set(v___x_5544_, 1, v___x_5534_);
v___x_5545_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_5544_, v_snd_5501_);
lean_dec_ref_known(v___x_5544_, 2);
return v___x_5545_;
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
}
else
{
lean_object* v_a_5557_; lean_object* v___x_5559_; uint8_t v_isShared_5560_; uint8_t v_isSharedCheck_5564_; 
lean_del_object(v___x_5496_);
lean_dec(v_fst_5493_);
lean_del_object(v___x_5489_);
lean_dec(v_fst_5486_);
lean_del_object(v___x_5482_);
lean_dec(v_fst_5479_);
lean_del_object(v___x_5475_);
lean_dec(v_fst_5472_);
lean_del_object(v___x_5468_);
lean_del_object(v___x_5464_);
lean_del_object(v___x_5459_);
lean_del_object(v___x_5455_);
lean_del_object(v___x_5443_);
v_a_5557_ = lean_ctor_get(v___x_5498_, 0);
v_isSharedCheck_5564_ = !lean_is_exclusive(v___x_5498_);
if (v_isSharedCheck_5564_ == 0)
{
v___x_5559_ = v___x_5498_;
v_isShared_5560_ = v_isSharedCheck_5564_;
goto v_resetjp_5558_;
}
else
{
lean_inc(v_a_5557_);
lean_dec(v___x_5498_);
v___x_5559_ = lean_box(0);
v_isShared_5560_ = v_isSharedCheck_5564_;
goto v_resetjp_5558_;
}
v_resetjp_5558_:
{
lean_object* v___x_5562_; 
if (v_isShared_5560_ == 0)
{
v___x_5562_ = v___x_5559_;
goto v_reusejp_5561_;
}
else
{
lean_object* v_reuseFailAlloc_5563_; 
v_reuseFailAlloc_5563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5563_, 0, v_a_5557_);
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
lean_object* v_a_5566_; lean_object* v___x_5568_; uint8_t v_isShared_5569_; uint8_t v_isSharedCheck_5573_; 
lean_del_object(v___x_5489_);
lean_dec(v_fst_5486_);
lean_del_object(v___x_5482_);
lean_dec(v_fst_5479_);
lean_del_object(v___x_5475_);
lean_dec(v_fst_5472_);
lean_del_object(v___x_5468_);
lean_del_object(v___x_5464_);
lean_del_object(v___x_5459_);
lean_del_object(v___x_5455_);
lean_dec(v_all_5448_);
lean_del_object(v___x_5443_);
v_a_5566_ = lean_ctor_get(v___x_5491_, 0);
v_isSharedCheck_5573_ = !lean_is_exclusive(v___x_5491_);
if (v_isSharedCheck_5573_ == 0)
{
v___x_5568_ = v___x_5491_;
v_isShared_5569_ = v_isSharedCheck_5573_;
goto v_resetjp_5567_;
}
else
{
lean_inc(v_a_5566_);
lean_dec(v___x_5491_);
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
}
else
{
lean_object* v_a_5575_; lean_object* v___x_5577_; uint8_t v_isShared_5578_; uint8_t v_isSharedCheck_5582_; 
lean_del_object(v___x_5482_);
lean_dec(v_fst_5479_);
lean_del_object(v___x_5475_);
lean_dec(v_fst_5472_);
lean_del_object(v___x_5468_);
lean_del_object(v___x_5464_);
lean_del_object(v___x_5459_);
lean_del_object(v___x_5455_);
lean_dec(v_all_5448_);
lean_dec_ref(v_value_5446_);
lean_del_object(v___x_5443_);
v_a_5575_ = lean_ctor_get(v___x_5484_, 0);
v_isSharedCheck_5582_ = !lean_is_exclusive(v___x_5484_);
if (v_isSharedCheck_5582_ == 0)
{
v___x_5577_ = v___x_5484_;
v_isShared_5578_ = v_isSharedCheck_5582_;
goto v_resetjp_5576_;
}
else
{
lean_inc(v_a_5575_);
lean_dec(v___x_5484_);
v___x_5577_ = lean_box(0);
v_isShared_5578_ = v_isSharedCheck_5582_;
goto v_resetjp_5576_;
}
v_resetjp_5576_:
{
lean_object* v___x_5580_; 
if (v_isShared_5578_ == 0)
{
v___x_5580_ = v___x_5577_;
goto v_reusejp_5579_;
}
else
{
lean_object* v_reuseFailAlloc_5581_; 
v_reuseFailAlloc_5581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5581_, 0, v_a_5575_);
v___x_5580_ = v_reuseFailAlloc_5581_;
goto v_reusejp_5579_;
}
v_reusejp_5579_:
{
return v___x_5580_;
}
}
}
}
}
else
{
lean_object* v_a_5584_; lean_object* v___x_5586_; uint8_t v_isShared_5587_; uint8_t v_isSharedCheck_5591_; 
lean_del_object(v___x_5475_);
lean_dec(v_fst_5472_);
lean_del_object(v___x_5468_);
lean_del_object(v___x_5464_);
lean_del_object(v___x_5459_);
lean_del_object(v___x_5455_);
lean_dec_ref(v_type_5451_);
lean_dec(v_all_5448_);
lean_dec_ref(v_value_5446_);
lean_del_object(v___x_5443_);
v_a_5584_ = lean_ctor_get(v___x_5477_, 0);
v_isSharedCheck_5591_ = !lean_is_exclusive(v___x_5477_);
if (v_isSharedCheck_5591_ == 0)
{
v___x_5586_ = v___x_5477_;
v_isShared_5587_ = v_isSharedCheck_5591_;
goto v_resetjp_5585_;
}
else
{
lean_inc(v_a_5584_);
lean_dec(v___x_5477_);
v___x_5586_ = lean_box(0);
v_isShared_5587_ = v_isSharedCheck_5591_;
goto v_resetjp_5585_;
}
v_resetjp_5585_:
{
lean_object* v___x_5589_; 
if (v_isShared_5587_ == 0)
{
v___x_5589_ = v___x_5586_;
goto v_reusejp_5588_;
}
else
{
lean_object* v_reuseFailAlloc_5590_; 
v_reuseFailAlloc_5590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5590_, 0, v_a_5584_);
v___x_5589_ = v_reuseFailAlloc_5590_;
goto v_reusejp_5588_;
}
v_reusejp_5588_:
{
return v___x_5589_;
}
}
}
}
}
else
{
lean_object* v_a_5593_; lean_object* v___x_5595_; uint8_t v_isShared_5596_; uint8_t v_isSharedCheck_5600_; 
lean_del_object(v___x_5468_);
lean_del_object(v___x_5464_);
lean_del_object(v___x_5459_);
lean_del_object(v___x_5455_);
lean_dec_ref(v_type_5451_);
lean_dec(v_levelParams_5450_);
lean_dec(v_all_5448_);
lean_dec_ref(v_value_5446_);
lean_del_object(v___x_5443_);
v_a_5593_ = lean_ctor_get(v___x_5470_, 0);
v_isSharedCheck_5600_ = !lean_is_exclusive(v___x_5470_);
if (v_isSharedCheck_5600_ == 0)
{
v___x_5595_ = v___x_5470_;
v_isShared_5596_ = v_isSharedCheck_5600_;
goto v_resetjp_5594_;
}
else
{
lean_inc(v_a_5593_);
lean_dec(v___x_5470_);
v___x_5595_ = lean_box(0);
v_isShared_5596_ = v_isSharedCheck_5600_;
goto v_resetjp_5594_;
}
v_resetjp_5594_:
{
lean_object* v___x_5598_; 
if (v_isShared_5596_ == 0)
{
v___x_5598_ = v___x_5595_;
goto v_reusejp_5597_;
}
else
{
lean_object* v_reuseFailAlloc_5599_; 
v_reuseFailAlloc_5599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5599_, 0, v_a_5593_);
v___x_5598_ = v_reuseFailAlloc_5599_;
goto v_reusejp_5597_;
}
v_reusejp_5597_:
{
return v___x_5598_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_5459_);
lean_del_object(v___x_5455_);
lean_dec_ref(v_type_5451_);
lean_dec(v_levelParams_5450_);
lean_dec(v_name_5449_);
lean_dec(v_all_5448_);
lean_dec_ref(v_value_5446_);
lean_del_object(v___x_5443_);
return v___x_5461_;
}
}
}
}
else
{
lean_dec_ref(v_type_5451_);
lean_dec(v_levelParams_5450_);
lean_dec(v_name_5449_);
lean_dec(v_all_5448_);
lean_dec_ref(v_value_5446_);
lean_del_object(v___x_5443_);
return v___x_5452_;
}
}
}
case 4:
{
lean_object* v___x_5608_; lean_object* v___x_5609_; 
lean_dec_ref_known(v_val_4984_, 1);
v___x_5608_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__9));
v___x_5609_ = l_LeanExport_dumpConstant(v___x_5608_, v_a_4873_, v___x_5001_);
if (lean_obj_tag(v___x_5609_) == 0)
{
lean_object* v_a_5610_; lean_object* v_snd_5611_; lean_object* v___x_5612_; lean_object* v___x_5613_; lean_object* v___x_5614_; lean_object* v___x_5615_; 
v_a_5610_ = lean_ctor_get(v___x_5609_, 0);
lean_inc(v_a_5610_);
lean_dec_ref_known(v___x_5609_, 1);
v_snd_5611_ = lean_ctor_get(v_a_5610_, 1);
lean_inc(v_snd_5611_);
lean_dec(v_a_5610_);
v___x_5612_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__19));
v___x_5613_ = lean_box(0);
v___x_5614_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0));
v___x_5615_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(v___x_4995_, v___x_5612_, v___x_5614_, v_a_4873_, v_snd_5611_);
if (lean_obj_tag(v___x_5615_) == 0)
{
lean_object* v_a_5616_; lean_object* v___x_5618_; uint8_t v_isShared_5619_; uint8_t v_isSharedCheck_5642_; 
v_a_5616_ = lean_ctor_get(v___x_5615_, 0);
v_isSharedCheck_5642_ = !lean_is_exclusive(v___x_5615_);
if (v_isSharedCheck_5642_ == 0)
{
v___x_5618_ = v___x_5615_;
v_isShared_5619_ = v_isSharedCheck_5642_;
goto v_resetjp_5617_;
}
else
{
lean_inc(v_a_5616_);
lean_dec(v___x_5615_);
v___x_5618_ = lean_box(0);
v_isShared_5619_ = v_isSharedCheck_5642_;
goto v_resetjp_5617_;
}
v_resetjp_5617_:
{
lean_object* v_fst_5620_; lean_object* v_fst_5621_; lean_object* v___x_5623_; uint8_t v_isShared_5624_; uint8_t v_isSharedCheck_5640_; 
v_fst_5620_ = lean_ctor_get(v_a_5616_, 0);
lean_inc(v_fst_5620_);
v_fst_5621_ = lean_ctor_get(v_fst_5620_, 0);
v_isSharedCheck_5640_ = !lean_is_exclusive(v_fst_5620_);
if (v_isSharedCheck_5640_ == 0)
{
lean_object* v_unused_5641_; 
v_unused_5641_ = lean_ctor_get(v_fst_5620_, 1);
lean_dec(v_unused_5641_);
v___x_5623_ = v_fst_5620_;
v_isShared_5624_ = v_isSharedCheck_5640_;
goto v_resetjp_5622_;
}
else
{
lean_inc(v_fst_5621_);
lean_dec(v_fst_5620_);
v___x_5623_ = lean_box(0);
v_isShared_5624_ = v_isSharedCheck_5640_;
goto v_resetjp_5622_;
}
v_resetjp_5622_:
{
if (lean_obj_tag(v_fst_5621_) == 0)
{
lean_object* v_snd_5625_; lean_object* v___x_5627_; 
v_snd_5625_ = lean_ctor_get(v_a_5616_, 1);
lean_inc(v_snd_5625_);
lean_dec(v_a_5616_);
if (v_isShared_5624_ == 0)
{
lean_ctor_set(v___x_5623_, 1, v_snd_5625_);
lean_ctor_set(v___x_5623_, 0, v___x_5613_);
v___x_5627_ = v___x_5623_;
goto v_reusejp_5626_;
}
else
{
lean_object* v_reuseFailAlloc_5631_; 
v_reuseFailAlloc_5631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5631_, 0, v___x_5613_);
lean_ctor_set(v_reuseFailAlloc_5631_, 1, v_snd_5625_);
v___x_5627_ = v_reuseFailAlloc_5631_;
goto v_reusejp_5626_;
}
v_reusejp_5626_:
{
lean_object* v___x_5629_; 
if (v_isShared_5619_ == 0)
{
lean_ctor_set(v___x_5618_, 0, v___x_5627_);
v___x_5629_ = v___x_5618_;
goto v_reusejp_5628_;
}
else
{
lean_object* v_reuseFailAlloc_5630_; 
v_reuseFailAlloc_5630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5630_, 0, v___x_5627_);
v___x_5629_ = v_reuseFailAlloc_5630_;
goto v_reusejp_5628_;
}
v_reusejp_5628_:
{
return v___x_5629_;
}
}
}
else
{
lean_object* v_snd_5632_; lean_object* v_val_5633_; lean_object* v___x_5635_; 
v_snd_5632_ = lean_ctor_get(v_a_5616_, 1);
lean_inc(v_snd_5632_);
lean_dec(v_a_5616_);
v_val_5633_ = lean_ctor_get(v_fst_5621_, 0);
lean_inc(v_val_5633_);
lean_dec_ref_known(v_fst_5621_, 1);
if (v_isShared_5624_ == 0)
{
lean_ctor_set(v___x_5623_, 1, v_snd_5632_);
lean_ctor_set(v___x_5623_, 0, v_val_5633_);
v___x_5635_ = v___x_5623_;
goto v_reusejp_5634_;
}
else
{
lean_object* v_reuseFailAlloc_5639_; 
v_reuseFailAlloc_5639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5639_, 0, v_val_5633_);
lean_ctor_set(v_reuseFailAlloc_5639_, 1, v_snd_5632_);
v___x_5635_ = v_reuseFailAlloc_5639_;
goto v_reusejp_5634_;
}
v_reusejp_5634_:
{
lean_object* v___x_5637_; 
if (v_isShared_5619_ == 0)
{
lean_ctor_set(v___x_5618_, 0, v___x_5635_);
v___x_5637_ = v___x_5618_;
goto v_reusejp_5636_;
}
else
{
lean_object* v_reuseFailAlloc_5638_; 
v_reuseFailAlloc_5638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5638_, 0, v___x_5635_);
v___x_5637_ = v_reuseFailAlloc_5638_;
goto v_reusejp_5636_;
}
v_reusejp_5636_:
{
return v___x_5637_;
}
}
}
}
}
}
else
{
lean_object* v_a_5643_; lean_object* v___x_5645_; uint8_t v_isShared_5646_; uint8_t v_isSharedCheck_5650_; 
v_a_5643_ = lean_ctor_get(v___x_5615_, 0);
v_isSharedCheck_5650_ = !lean_is_exclusive(v___x_5615_);
if (v_isSharedCheck_5650_ == 0)
{
v___x_5645_ = v___x_5615_;
v_isShared_5646_ = v_isSharedCheck_5650_;
goto v_resetjp_5644_;
}
else
{
lean_inc(v_a_5643_);
lean_dec(v___x_5615_);
v___x_5645_ = lean_box(0);
v_isShared_5646_ = v_isSharedCheck_5650_;
goto v_resetjp_5644_;
}
v_resetjp_5644_:
{
lean_object* v___x_5648_; 
if (v_isShared_5646_ == 0)
{
v___x_5648_ = v___x_5645_;
goto v_reusejp_5647_;
}
else
{
lean_object* v_reuseFailAlloc_5649_; 
v_reuseFailAlloc_5649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5649_, 0, v_a_5643_);
v___x_5648_ = v_reuseFailAlloc_5649_;
goto v_reusejp_5647_;
}
v_reusejp_5647_:
{
return v___x_5648_;
}
}
}
}
else
{
return v___x_5609_;
}
}
case 5:
{
lean_object* v_val_5651_; lean_object* v_all_5652_; lean_object* v___x_5653_; lean_object* v___x_5654_; lean_object* v___x_5655_; 
v_val_5651_ = lean_ctor_get(v_val_4984_, 0);
lean_inc_ref(v_val_5651_);
lean_dec_ref_known(v_val_4984_, 1);
v_all_5652_ = lean_ctor_get(v_val_5651_, 3);
lean_inc(v_all_5652_);
v___x_5653_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__20));
v___x_5654_ = lean_obj_once(&l_LeanExport_dumpConstant___closed__22, &l_LeanExport_dumpConstant___closed__22_once, _init_l_LeanExport_dumpConstant___closed__22);
v___x_5655_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(v___x_4995_, v_val_5651_, v_all_5652_, v___x_5654_, v_a_4873_, v___x_5001_);
lean_dec(v_all_5652_);
lean_dec_ref(v_val_5651_);
if (lean_obj_tag(v___x_5655_) == 0)
{
lean_object* v_a_5656_; lean_object* v_fst_5657_; lean_object* v_snd_5658_; lean_object* v_snd_5659_; lean_object* v_fst_5660_; lean_object* v_fst_5661_; lean_object* v_snd_5662_; lean_object* v___x_5663_; size_t v_sz_5664_; size_t v___x_5665_; lean_object* v___x_5666_; 
v_a_5656_ = lean_ctor_get(v___x_5655_, 0);
lean_inc(v_a_5656_);
lean_dec_ref_known(v___x_5655_, 1);
v_fst_5657_ = lean_ctor_get(v_a_5656_, 0);
lean_inc(v_fst_5657_);
v_snd_5658_ = lean_ctor_get(v_fst_5657_, 1);
lean_inc(v_snd_5658_);
v_snd_5659_ = lean_ctor_get(v_a_5656_, 1);
lean_inc(v_snd_5659_);
lean_dec(v_a_5656_);
v_fst_5660_ = lean_ctor_get(v_fst_5657_, 0);
lean_inc(v_fst_5660_);
lean_dec(v_fst_5657_);
v_fst_5661_ = lean_ctor_get(v_snd_5658_, 0);
lean_inc(v_fst_5661_);
v_snd_5662_ = lean_ctor_get(v_snd_5658_, 1);
lean_inc(v_snd_5662_);
lean_dec(v_snd_5658_);
v___x_5663_ = lean_box(0);
v_sz_5664_ = lean_array_size(v_fst_5661_);
v___x_5665_ = ((size_t)0ULL);
v___x_5666_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__20(v_fst_5661_, v_sz_5664_, v___x_5665_, v___x_5663_, v_a_4873_, v_snd_5659_);
if (lean_obj_tag(v___x_5666_) == 0)
{
lean_object* v_a_5667_; lean_object* v_snd_5668_; lean_object* v___x_5669_; 
v_a_5667_ = lean_ctor_get(v___x_5666_, 0);
lean_inc(v_a_5667_);
lean_dec_ref_known(v___x_5666_, 1);
v_snd_5668_ = lean_ctor_get(v_a_5667_, 1);
lean_inc(v_snd_5668_);
lean_dec(v_a_5667_);
v___x_5669_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21(v___x_4995_, v___x_5653_, v_snd_5662_, v_a_4873_, v_snd_5668_);
if (lean_obj_tag(v___x_5669_) == 0)
{
lean_object* v_a_5670_; lean_object* v_fst_5671_; lean_object* v_snd_5672_; lean_object* v_a_5673_; 
v_a_5670_ = lean_ctor_get(v___x_5669_, 0);
lean_inc(v_a_5670_);
lean_dec_ref_known(v___x_5669_, 1);
v_fst_5671_ = lean_ctor_get(v_a_5670_, 0);
lean_inc(v_fst_5671_);
v_snd_5672_ = lean_ctor_get(v_a_5670_, 1);
lean_inc(v_snd_5672_);
lean_dec(v_a_5670_);
v_a_5673_ = lean_ctor_get(v_fst_5671_, 0);
lean_inc(v_a_5673_);
lean_dec(v_fst_5671_);
v___y_4881_ = v___x_5663_;
v___y_4882_ = v_fst_5660_;
v___y_4883_ = v_fst_5661_;
v_fst_4884_ = v_a_5673_;
v_snd_4885_ = v_snd_5672_;
goto v___jp_4880_;
}
else
{
lean_object* v_a_5674_; lean_object* v___x_5676_; uint8_t v_isShared_5677_; uint8_t v_isSharedCheck_5681_; 
lean_dec(v_fst_5661_);
lean_dec(v_fst_5660_);
v_a_5674_ = lean_ctor_get(v___x_5669_, 0);
v_isSharedCheck_5681_ = !lean_is_exclusive(v___x_5669_);
if (v_isSharedCheck_5681_ == 0)
{
v___x_5676_ = v___x_5669_;
v_isShared_5677_ = v_isSharedCheck_5681_;
goto v_resetjp_5675_;
}
else
{
lean_inc(v_a_5674_);
lean_dec(v___x_5669_);
v___x_5676_ = lean_box(0);
v_isShared_5677_ = v_isSharedCheck_5681_;
goto v_resetjp_5675_;
}
v_resetjp_5675_:
{
lean_object* v___x_5679_; 
if (v_isShared_5677_ == 0)
{
v___x_5679_ = v___x_5676_;
goto v_reusejp_5678_;
}
else
{
lean_object* v_reuseFailAlloc_5680_; 
v_reuseFailAlloc_5680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5680_, 0, v_a_5674_);
v___x_5679_ = v_reuseFailAlloc_5680_;
goto v_reusejp_5678_;
}
v_reusejp_5678_:
{
return v___x_5679_;
}
}
}
}
else
{
lean_dec(v_snd_5662_);
lean_dec(v_fst_5661_);
lean_dec(v_fst_5660_);
return v___x_5666_;
}
}
else
{
lean_object* v_a_5682_; lean_object* v___x_5684_; uint8_t v_isShared_5685_; uint8_t v_isSharedCheck_5689_; 
v_a_5682_ = lean_ctor_get(v___x_5655_, 0);
v_isSharedCheck_5689_ = !lean_is_exclusive(v___x_5655_);
if (v_isSharedCheck_5689_ == 0)
{
v___x_5684_ = v___x_5655_;
v_isShared_5685_ = v_isSharedCheck_5689_;
goto v_resetjp_5683_;
}
else
{
lean_inc(v_a_5682_);
lean_dec(v___x_5655_);
v___x_5684_ = lean_box(0);
v_isShared_5685_ = v_isSharedCheck_5689_;
goto v_resetjp_5683_;
}
v_resetjp_5683_:
{
lean_object* v___x_5687_; 
if (v_isShared_5685_ == 0)
{
v___x_5687_ = v___x_5684_;
goto v_reusejp_5686_;
}
else
{
lean_object* v_reuseFailAlloc_5688_; 
v_reuseFailAlloc_5688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5688_, 0, v_a_5682_);
v___x_5687_ = v_reuseFailAlloc_5688_;
goto v_reusejp_5686_;
}
v_reusejp_5686_:
{
return v___x_5687_;
}
}
}
}
case 6:
{
lean_object* v_val_5690_; lean_object* v_induct_5691_; 
v_val_5690_ = lean_ctor_get(v_val_4984_, 0);
lean_inc_ref(v_val_5690_);
lean_dec_ref_known(v_val_4984_, 1);
v_induct_5691_ = lean_ctor_get(v_val_5690_, 1);
lean_inc(v_induct_5691_);
lean_dec_ref(v_val_5690_);
v_c_4872_ = v_induct_5691_;
v_a_4874_ = v___x_5001_;
goto _start;
}
default: 
{
lean_object* v_val_5693_; lean_object* v_all_5694_; lean_object* v___x_5695_; lean_object* v___x_5696_; 
v_val_5693_ = lean_ctor_get(v_val_4984_, 0);
lean_inc_ref(v_val_5693_);
lean_dec_ref_known(v_val_4984_, 1);
v_all_5694_ = lean_ctor_get(v_val_5693_, 1);
lean_inc(v_all_5694_);
lean_dec_ref(v_val_5693_);
v___x_5695_ = lean_box(0);
v___x_5696_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg(v_all_5694_, v___x_5695_, v_a_4873_, v___x_5001_);
lean_dec(v_all_5694_);
if (lean_obj_tag(v___x_5696_) == 0)
{
lean_object* v_a_5697_; lean_object* v___x_5699_; uint8_t v_isShared_5700_; uint8_t v_isSharedCheck_5713_; 
v_a_5697_ = lean_ctor_get(v___x_5696_, 0);
v_isSharedCheck_5713_ = !lean_is_exclusive(v___x_5696_);
if (v_isSharedCheck_5713_ == 0)
{
v___x_5699_ = v___x_5696_;
v_isShared_5700_ = v_isSharedCheck_5713_;
goto v_resetjp_5698_;
}
else
{
lean_inc(v_a_5697_);
lean_dec(v___x_5696_);
v___x_5699_ = lean_box(0);
v_isShared_5700_ = v_isSharedCheck_5713_;
goto v_resetjp_5698_;
}
v_resetjp_5698_:
{
lean_object* v_snd_5701_; lean_object* v___x_5703_; uint8_t v_isShared_5704_; uint8_t v_isSharedCheck_5711_; 
v_snd_5701_ = lean_ctor_get(v_a_5697_, 1);
v_isSharedCheck_5711_ = !lean_is_exclusive(v_a_5697_);
if (v_isSharedCheck_5711_ == 0)
{
lean_object* v_unused_5712_; 
v_unused_5712_ = lean_ctor_get(v_a_5697_, 0);
lean_dec(v_unused_5712_);
v___x_5703_ = v_a_5697_;
v_isShared_5704_ = v_isSharedCheck_5711_;
goto v_resetjp_5702_;
}
else
{
lean_inc(v_snd_5701_);
lean_dec(v_a_5697_);
v___x_5703_ = lean_box(0);
v_isShared_5704_ = v_isSharedCheck_5711_;
goto v_resetjp_5702_;
}
v_resetjp_5702_:
{
lean_object* v___x_5706_; 
if (v_isShared_5704_ == 0)
{
lean_ctor_set(v___x_5703_, 0, v___x_5695_);
v___x_5706_ = v___x_5703_;
goto v_reusejp_5705_;
}
else
{
lean_object* v_reuseFailAlloc_5710_; 
v_reuseFailAlloc_5710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5710_, 0, v___x_5695_);
lean_ctor_set(v_reuseFailAlloc_5710_, 1, v_snd_5701_);
v___x_5706_ = v_reuseFailAlloc_5710_;
goto v_reusejp_5705_;
}
v_reusejp_5705_:
{
lean_object* v___x_5708_; 
if (v_isShared_5700_ == 0)
{
lean_ctor_set(v___x_5699_, 0, v___x_5706_);
v___x_5708_ = v___x_5699_;
goto v_reusejp_5707_;
}
else
{
lean_object* v_reuseFailAlloc_5709_; 
v_reuseFailAlloc_5709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5709_, 0, v___x_5706_);
v___x_5708_ = v_reuseFailAlloc_5709_;
goto v_reusejp_5707_;
}
v_reusejp_5707_:
{
return v___x_5708_;
}
}
}
}
}
else
{
return v___x_5696_;
}
}
}
}
}
}
else
{
lean_dec(v_val_4984_);
lean_dec(v_c_4872_);
goto v___jp_4876_;
}
}
}
else
{
uint8_t v_ignoreMissing_5724_; 
lean_dec(v___x_4983_);
v_ignoreMissing_5724_ = lean_ctor_get_uint8(v_a_4874_, sizeof(void*)*6 + 2);
if (v_ignoreMissing_5724_ == 0)
{
lean_object* v___x_5725_; lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; uint8_t v___x_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; lean_object* v___x_5736_; 
v___x_5725_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_5726_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_5727_ = lean_unsigned_to_nat(254u);
v___x_5728_ = lean_unsigned_to_nat(48u);
v___x_5729_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1));
v___x_5730_ = 1;
v___x_5731_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_c_4872_, v___x_5730_);
v___x_5732_ = lean_string_append(v___x_5729_, v___x_5731_);
lean_dec_ref(v___x_5731_);
v___x_5733_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2));
v___x_5734_ = lean_string_append(v___x_5732_, v___x_5733_);
v___x_5735_ = l_mkPanicMessageWithDecl(v___x_5725_, v___x_5726_, v___x_5727_, v___x_5728_, v___x_5734_);
lean_dec_ref(v___x_5734_);
v___x_5736_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_5735_, v_a_4873_, v_a_4874_);
return v___x_5736_;
}
else
{
lean_object* v___x_5737_; lean_object* v___x_5738_; lean_object* v___x_5739_; 
lean_dec(v_c_4872_);
v___x_5737_ = lean_box(0);
v___x_5738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5738_, 0, v___x_5737_);
lean_ctor_set(v___x_5738_, 1, v_a_4874_);
v___x_5739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5739_, 0, v___x_5738_);
return v___x_5739_;
}
}
v___jp_4876_:
{
lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; 
v___x_4877_ = lean_box(0);
v___x_4878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4878_, 0, v___x_4877_);
lean_ctor_set(v___x_4878_, 1, v_a_4874_);
v___x_4879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4879_, 0, v___x_4878_);
return v___x_4879_;
}
v___jp_4880_:
{
size_t v_sz_4886_; size_t v___x_4887_; lean_object* v___x_4888_; 
v_sz_4886_ = lean_array_size(v_fst_4884_);
v___x_4887_ = ((size_t)0ULL);
v___x_4888_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(v_fst_4884_, v_sz_4886_, v___x_4887_, v___y_4881_, v_a_4873_, v_snd_4885_);
if (lean_obj_tag(v___x_4888_) == 0)
{
lean_object* v_a_4889_; lean_object* v_snd_4890_; lean_object* v___x_4892_; uint8_t v_isShared_4893_; uint8_t v_isSharedCheck_4980_; 
v_a_4889_ = lean_ctor_get(v___x_4888_, 0);
lean_inc(v_a_4889_);
lean_dec_ref_known(v___x_4888_, 1);
v_snd_4890_ = lean_ctor_get(v_a_4889_, 1);
v_isSharedCheck_4980_ = !lean_is_exclusive(v_a_4889_);
if (v_isSharedCheck_4980_ == 0)
{
lean_object* v_unused_4981_; 
v_unused_4981_ = lean_ctor_get(v_a_4889_, 0);
lean_dec(v_unused_4981_);
v___x_4892_ = v_a_4889_;
v_isShared_4893_ = v_isSharedCheck_4980_;
goto v_resetjp_4891_;
}
else
{
lean_inc(v_snd_4890_);
lean_dec(v_a_4889_);
v___x_4892_ = lean_box(0);
v_isShared_4893_ = v_isSharedCheck_4980_;
goto v_resetjp_4891_;
}
v_resetjp_4891_:
{
lean_object* v___x_4894_; 
v___x_4894_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__15(v_fst_4884_, v_sz_4886_, v___x_4887_, v___y_4881_, v_a_4873_, v_snd_4890_);
if (lean_obj_tag(v___x_4894_) == 0)
{
lean_object* v_a_4895_; lean_object* v_snd_4896_; lean_object* v___x_4898_; uint8_t v_isShared_4899_; uint8_t v_isSharedCheck_4978_; 
v_a_4895_ = lean_ctor_get(v___x_4894_, 0);
lean_inc(v_a_4895_);
lean_dec_ref_known(v___x_4894_, 1);
v_snd_4896_ = lean_ctor_get(v_a_4895_, 1);
v_isSharedCheck_4978_ = !lean_is_exclusive(v_a_4895_);
if (v_isSharedCheck_4978_ == 0)
{
lean_object* v_unused_4979_; 
v_unused_4979_ = lean_ctor_get(v_a_4895_, 0);
lean_dec(v_unused_4979_);
v___x_4898_ = v_a_4895_;
v_isShared_4899_ = v_isSharedCheck_4978_;
goto v_resetjp_4897_;
}
else
{
lean_inc(v_snd_4896_);
lean_dec(v_a_4895_);
v___x_4898_ = lean_box(0);
v_isShared_4899_ = v_isSharedCheck_4978_;
goto v_resetjp_4897_;
}
v_resetjp_4897_:
{
size_t v_sz_4900_; lean_object* v___x_4901_; 
v_sz_4900_ = lean_array_size(v___y_4882_);
v___x_4901_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(v_sz_4900_, v___x_4887_, v___y_4882_, v_a_4873_, v_snd_4896_);
if (lean_obj_tag(v___x_4901_) == 0)
{
lean_object* v_a_4902_; lean_object* v_fst_4903_; lean_object* v_snd_4904_; lean_object* v___x_4906_; uint8_t v_isShared_4907_; uint8_t v_isSharedCheck_4969_; 
v_a_4902_ = lean_ctor_get(v___x_4901_, 0);
lean_inc(v_a_4902_);
lean_dec_ref_known(v___x_4901_, 1);
v_fst_4903_ = lean_ctor_get(v_a_4902_, 0);
v_snd_4904_ = lean_ctor_get(v_a_4902_, 1);
v_isSharedCheck_4969_ = !lean_is_exclusive(v_a_4902_);
if (v_isSharedCheck_4969_ == 0)
{
v___x_4906_ = v_a_4902_;
v_isShared_4907_ = v_isSharedCheck_4969_;
goto v_resetjp_4905_;
}
else
{
lean_inc(v_snd_4904_);
lean_inc(v_fst_4903_);
lean_dec(v_a_4902_);
v___x_4906_ = lean_box(0);
v_isShared_4907_ = v_isSharedCheck_4969_;
goto v_resetjp_4905_;
}
v_resetjp_4905_:
{
size_t v_sz_4908_; lean_object* v___x_4909_; 
v_sz_4908_ = lean_array_size(v___y_4883_);
v___x_4909_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(v_sz_4908_, v___x_4887_, v___y_4883_, v_a_4873_, v_snd_4904_);
if (lean_obj_tag(v___x_4909_) == 0)
{
lean_object* v_a_4910_; lean_object* v_fst_4911_; lean_object* v_snd_4912_; lean_object* v___x_4914_; uint8_t v_isShared_4915_; uint8_t v_isSharedCheck_4960_; 
v_a_4910_ = lean_ctor_get(v___x_4909_, 0);
lean_inc(v_a_4910_);
lean_dec_ref_known(v___x_4909_, 1);
v_fst_4911_ = lean_ctor_get(v_a_4910_, 0);
v_snd_4912_ = lean_ctor_get(v_a_4910_, 1);
v_isSharedCheck_4960_ = !lean_is_exclusive(v_a_4910_);
if (v_isSharedCheck_4960_ == 0)
{
v___x_4914_ = v_a_4910_;
v_isShared_4915_ = v_isSharedCheck_4960_;
goto v_resetjp_4913_;
}
else
{
lean_inc(v_snd_4912_);
lean_inc(v_fst_4911_);
lean_dec(v_a_4910_);
v___x_4914_ = lean_box(0);
v_isShared_4915_ = v_isSharedCheck_4960_;
goto v_resetjp_4913_;
}
v_resetjp_4913_:
{
lean_object* v___x_4916_; 
v___x_4916_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18(v_sz_4886_, v___x_4887_, v_fst_4884_, v_a_4873_, v_snd_4912_);
if (lean_obj_tag(v___x_4916_) == 0)
{
lean_object* v_a_4917_; lean_object* v_fst_4918_; lean_object* v_snd_4919_; lean_object* v___x_4921_; uint8_t v_isShared_4922_; uint8_t v_isSharedCheck_4951_; 
v_a_4917_ = lean_ctor_get(v___x_4916_, 0);
lean_inc(v_a_4917_);
lean_dec_ref_known(v___x_4916_, 1);
v_fst_4918_ = lean_ctor_get(v_a_4917_, 0);
v_snd_4919_ = lean_ctor_get(v_a_4917_, 1);
v_isSharedCheck_4951_ = !lean_is_exclusive(v_a_4917_);
if (v_isSharedCheck_4951_ == 0)
{
v___x_4921_ = v_a_4917_;
v_isShared_4922_ = v_isSharedCheck_4951_;
goto v_resetjp_4920_;
}
else
{
lean_inc(v_snd_4919_);
lean_inc(v_fst_4918_);
lean_dec(v_a_4917_);
v___x_4921_ = lean_box(0);
v_isShared_4922_ = v_isSharedCheck_4951_;
goto v_resetjp_4920_;
}
v_resetjp_4920_:
{
lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4927_; 
v___x_4923_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__0));
v___x_4924_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__1));
v___x_4925_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(v_fst_4903_);
if (v_isShared_4922_ == 0)
{
lean_ctor_set(v___x_4921_, 1, v___x_4925_);
lean_ctor_set(v___x_4921_, 0, v___x_4924_);
v___x_4927_ = v___x_4921_;
goto v_reusejp_4926_;
}
else
{
lean_object* v_reuseFailAlloc_4950_; 
v_reuseFailAlloc_4950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4950_, 0, v___x_4924_);
lean_ctor_set(v_reuseFailAlloc_4950_, 1, v___x_4925_);
v___x_4927_ = v_reuseFailAlloc_4950_;
goto v_reusejp_4926_;
}
v_reusejp_4926_:
{
lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4931_; 
v___x_4928_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2));
v___x_4929_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(v_fst_4911_);
if (v_isShared_4915_ == 0)
{
lean_ctor_set(v___x_4914_, 1, v___x_4929_);
lean_ctor_set(v___x_4914_, 0, v___x_4928_);
v___x_4931_ = v___x_4914_;
goto v_reusejp_4930_;
}
else
{
lean_object* v_reuseFailAlloc_4949_; 
v_reuseFailAlloc_4949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4949_, 0, v___x_4928_);
lean_ctor_set(v_reuseFailAlloc_4949_, 1, v___x_4929_);
v___x_4931_ = v_reuseFailAlloc_4949_;
goto v_reusejp_4930_;
}
v_reusejp_4930_:
{
lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4935_; 
v___x_4932_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__2));
v___x_4933_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(v_fst_4918_);
if (v_isShared_4907_ == 0)
{
lean_ctor_set(v___x_4906_, 1, v___x_4933_);
lean_ctor_set(v___x_4906_, 0, v___x_4932_);
v___x_4935_ = v___x_4906_;
goto v_reusejp_4934_;
}
else
{
lean_object* v_reuseFailAlloc_4948_; 
v_reuseFailAlloc_4948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4948_, 0, v___x_4932_);
lean_ctor_set(v_reuseFailAlloc_4948_, 1, v___x_4933_);
v___x_4935_ = v_reuseFailAlloc_4948_;
goto v_reusejp_4934_;
}
v_reusejp_4934_:
{
lean_object* v___x_4936_; lean_object* v___x_4938_; 
v___x_4936_ = lean_box(0);
if (v_isShared_4893_ == 0)
{
lean_ctor_set_tag(v___x_4892_, 1);
lean_ctor_set(v___x_4892_, 1, v___x_4936_);
lean_ctor_set(v___x_4892_, 0, v___x_4935_);
v___x_4938_ = v___x_4892_;
goto v_reusejp_4937_;
}
else
{
lean_object* v_reuseFailAlloc_4947_; 
v_reuseFailAlloc_4947_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4947_, 0, v___x_4935_);
lean_ctor_set(v_reuseFailAlloc_4947_, 1, v___x_4936_);
v___x_4938_ = v_reuseFailAlloc_4947_;
goto v_reusejp_4937_;
}
v_reusejp_4937_:
{
lean_object* v___x_4939_; lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4943_; 
v___x_4939_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4939_, 0, v___x_4931_);
lean_ctor_set(v___x_4939_, 1, v___x_4938_);
v___x_4940_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4940_, 0, v___x_4927_);
lean_ctor_set(v___x_4940_, 1, v___x_4939_);
v___x_4941_ = l_Lean_Json_mkObj(v___x_4940_);
lean_dec_ref_known(v___x_4940_, 2);
if (v_isShared_4899_ == 0)
{
lean_ctor_set(v___x_4898_, 1, v___x_4941_);
lean_ctor_set(v___x_4898_, 0, v___x_4923_);
v___x_4943_ = v___x_4898_;
goto v_reusejp_4942_;
}
else
{
lean_object* v_reuseFailAlloc_4946_; 
v_reuseFailAlloc_4946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4946_, 0, v___x_4923_);
lean_ctor_set(v_reuseFailAlloc_4946_, 1, v___x_4941_);
v___x_4943_ = v_reuseFailAlloc_4946_;
goto v_reusejp_4942_;
}
v_reusejp_4942_:
{
lean_object* v___x_4944_; lean_object* v___x_4945_; 
v___x_4944_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4944_, 0, v___x_4943_);
lean_ctor_set(v___x_4944_, 1, v___x_4936_);
v___x_4945_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_4944_, v_snd_4919_);
lean_dec_ref_known(v___x_4944_, 2);
return v___x_4945_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4952_; lean_object* v___x_4954_; uint8_t v_isShared_4955_; uint8_t v_isSharedCheck_4959_; 
lean_del_object(v___x_4914_);
lean_dec(v_fst_4911_);
lean_del_object(v___x_4906_);
lean_dec(v_fst_4903_);
lean_del_object(v___x_4898_);
lean_del_object(v___x_4892_);
v_a_4952_ = lean_ctor_get(v___x_4916_, 0);
v_isSharedCheck_4959_ = !lean_is_exclusive(v___x_4916_);
if (v_isSharedCheck_4959_ == 0)
{
v___x_4954_ = v___x_4916_;
v_isShared_4955_ = v_isSharedCheck_4959_;
goto v_resetjp_4953_;
}
else
{
lean_inc(v_a_4952_);
lean_dec(v___x_4916_);
v___x_4954_ = lean_box(0);
v_isShared_4955_ = v_isSharedCheck_4959_;
goto v_resetjp_4953_;
}
v_resetjp_4953_:
{
lean_object* v___x_4957_; 
if (v_isShared_4955_ == 0)
{
v___x_4957_ = v___x_4954_;
goto v_reusejp_4956_;
}
else
{
lean_object* v_reuseFailAlloc_4958_; 
v_reuseFailAlloc_4958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4958_, 0, v_a_4952_);
v___x_4957_ = v_reuseFailAlloc_4958_;
goto v_reusejp_4956_;
}
v_reusejp_4956_:
{
return v___x_4957_;
}
}
}
}
}
else
{
lean_object* v_a_4961_; lean_object* v___x_4963_; uint8_t v_isShared_4964_; uint8_t v_isSharedCheck_4968_; 
lean_del_object(v___x_4906_);
lean_dec(v_fst_4903_);
lean_del_object(v___x_4898_);
lean_del_object(v___x_4892_);
lean_dec_ref(v_fst_4884_);
v_a_4961_ = lean_ctor_get(v___x_4909_, 0);
v_isSharedCheck_4968_ = !lean_is_exclusive(v___x_4909_);
if (v_isSharedCheck_4968_ == 0)
{
v___x_4963_ = v___x_4909_;
v_isShared_4964_ = v_isSharedCheck_4968_;
goto v_resetjp_4962_;
}
else
{
lean_inc(v_a_4961_);
lean_dec(v___x_4909_);
v___x_4963_ = lean_box(0);
v_isShared_4964_ = v_isSharedCheck_4968_;
goto v_resetjp_4962_;
}
v_resetjp_4962_:
{
lean_object* v___x_4966_; 
if (v_isShared_4964_ == 0)
{
v___x_4966_ = v___x_4963_;
goto v_reusejp_4965_;
}
else
{
lean_object* v_reuseFailAlloc_4967_; 
v_reuseFailAlloc_4967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4967_, 0, v_a_4961_);
v___x_4966_ = v_reuseFailAlloc_4967_;
goto v_reusejp_4965_;
}
v_reusejp_4965_:
{
return v___x_4966_;
}
}
}
}
}
else
{
lean_object* v_a_4970_; lean_object* v___x_4972_; uint8_t v_isShared_4973_; uint8_t v_isSharedCheck_4977_; 
lean_del_object(v___x_4898_);
lean_del_object(v___x_4892_);
lean_dec_ref(v_fst_4884_);
lean_dec(v___y_4883_);
v_a_4970_ = lean_ctor_get(v___x_4901_, 0);
v_isSharedCheck_4977_ = !lean_is_exclusive(v___x_4901_);
if (v_isSharedCheck_4977_ == 0)
{
v___x_4972_ = v___x_4901_;
v_isShared_4973_ = v_isSharedCheck_4977_;
goto v_resetjp_4971_;
}
else
{
lean_inc(v_a_4970_);
lean_dec(v___x_4901_);
v___x_4972_ = lean_box(0);
v_isShared_4973_ = v_isSharedCheck_4977_;
goto v_resetjp_4971_;
}
v_resetjp_4971_:
{
lean_object* v___x_4975_; 
if (v_isShared_4973_ == 0)
{
v___x_4975_ = v___x_4972_;
goto v_reusejp_4974_;
}
else
{
lean_object* v_reuseFailAlloc_4976_; 
v_reuseFailAlloc_4976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4976_, 0, v_a_4970_);
v___x_4975_ = v_reuseFailAlloc_4976_;
goto v_reusejp_4974_;
}
v_reusejp_4974_:
{
return v___x_4975_;
}
}
}
}
}
else
{
lean_del_object(v___x_4892_);
lean_dec_ref(v_fst_4884_);
lean_dec(v___y_4883_);
lean_dec(v___y_4882_);
return v___x_4894_;
}
}
}
else
{
lean_dec_ref(v_fst_4884_);
lean_dec(v___y_4883_);
lean_dec(v___y_4882_);
return v___x_4888_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(lean_object* v_as_5740_, size_t v_sz_5741_, size_t v_i_5742_, lean_object* v_b_5743_, lean_object* v___y_5744_, lean_object* v___y_5745_){
_start:
{
uint8_t v___x_5747_; 
v___x_5747_ = lean_usize_dec_lt(v_i_5742_, v_sz_5741_);
if (v___x_5747_ == 0)
{
lean_object* v___x_5748_; lean_object* v___x_5749_; 
v___x_5748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5748_, 0, v_b_5743_);
lean_ctor_set(v___x_5748_, 1, v___y_5745_);
v___x_5749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5749_, 0, v___x_5748_);
return v___x_5749_;
}
else
{
lean_object* v___x_5750_; lean_object* v_a_5751_; lean_object* v___x_5752_; 
v___x_5750_ = lean_box(0);
v_a_5751_ = lean_array_uget_borrowed(v_as_5740_, v_i_5742_);
lean_inc(v_a_5751_);
v___x_5752_ = l_LeanExport_dumpConstant(v_a_5751_, v___y_5744_, v___y_5745_);
if (lean_obj_tag(v___x_5752_) == 0)
{
lean_object* v_a_5753_; lean_object* v_snd_5754_; size_t v___x_5755_; size_t v___x_5756_; 
v_a_5753_ = lean_ctor_get(v___x_5752_, 0);
lean_inc(v_a_5753_);
lean_dec_ref_known(v___x_5752_, 1);
v_snd_5754_ = lean_ctor_get(v_a_5753_, 1);
lean_inc(v_snd_5754_);
lean_dec(v_a_5753_);
v___x_5755_ = ((size_t)1ULL);
v___x_5756_ = lean_usize_add(v_i_5742_, v___x_5755_);
v_i_5742_ = v___x_5756_;
v_b_5743_ = v___x_5750_;
v___y_5745_ = v_snd_5754_;
goto _start;
}
else
{
return v___x_5752_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(lean_object* v_e_5758_, lean_object* v_a_5759_, lean_object* v_a_5760_){
_start:
{
lean_object* v___x_5762_; lean_object* v___x_5763_; size_t v_sz_5764_; size_t v___x_5765_; lean_object* v___x_5766_; 
v___x_5762_ = l_Lean_Expr_getUsedConstants(v_e_5758_);
v___x_5763_ = lean_box(0);
v_sz_5764_ = lean_array_size(v___x_5762_);
v___x_5765_ = ((size_t)0ULL);
v___x_5766_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(v___x_5762_, v_sz_5764_, v___x_5765_, v___x_5763_, v_a_5759_, v_a_5760_);
lean_dec_ref(v___x_5762_);
if (lean_obj_tag(v___x_5766_) == 0)
{
lean_object* v_a_5767_; lean_object* v___x_5769_; uint8_t v_isShared_5770_; uint8_t v_isSharedCheck_5783_; 
v_a_5767_ = lean_ctor_get(v___x_5766_, 0);
v_isSharedCheck_5783_ = !lean_is_exclusive(v___x_5766_);
if (v_isSharedCheck_5783_ == 0)
{
v___x_5769_ = v___x_5766_;
v_isShared_5770_ = v_isSharedCheck_5783_;
goto v_resetjp_5768_;
}
else
{
lean_inc(v_a_5767_);
lean_dec(v___x_5766_);
v___x_5769_ = lean_box(0);
v_isShared_5770_ = v_isSharedCheck_5783_;
goto v_resetjp_5768_;
}
v_resetjp_5768_:
{
lean_object* v_snd_5771_; lean_object* v___x_5773_; uint8_t v_isShared_5774_; uint8_t v_isSharedCheck_5781_; 
v_snd_5771_ = lean_ctor_get(v_a_5767_, 1);
v_isSharedCheck_5781_ = !lean_is_exclusive(v_a_5767_);
if (v_isSharedCheck_5781_ == 0)
{
lean_object* v_unused_5782_; 
v_unused_5782_ = lean_ctor_get(v_a_5767_, 0);
lean_dec(v_unused_5782_);
v___x_5773_ = v_a_5767_;
v_isShared_5774_ = v_isSharedCheck_5781_;
goto v_resetjp_5772_;
}
else
{
lean_inc(v_snd_5771_);
lean_dec(v_a_5767_);
v___x_5773_ = lean_box(0);
v_isShared_5774_ = v_isSharedCheck_5781_;
goto v_resetjp_5772_;
}
v_resetjp_5772_:
{
lean_object* v___x_5776_; 
if (v_isShared_5774_ == 0)
{
lean_ctor_set(v___x_5773_, 0, v___x_5763_);
v___x_5776_ = v___x_5773_;
goto v_reusejp_5775_;
}
else
{
lean_object* v_reuseFailAlloc_5780_; 
v_reuseFailAlloc_5780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5780_, 0, v___x_5763_);
lean_ctor_set(v_reuseFailAlloc_5780_, 1, v_snd_5771_);
v___x_5776_ = v_reuseFailAlloc_5780_;
goto v_reusejp_5775_;
}
v_reusejp_5775_:
{
lean_object* v___x_5778_; 
if (v_isShared_5770_ == 0)
{
lean_ctor_set(v___x_5769_, 0, v___x_5776_);
v___x_5778_ = v___x_5769_;
goto v_reusejp_5777_;
}
else
{
lean_object* v_reuseFailAlloc_5779_; 
v_reuseFailAlloc_5779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5779_, 0, v___x_5776_);
v___x_5778_ = v_reuseFailAlloc_5779_;
goto v_reusejp_5777_;
}
v_reusejp_5777_:
{
return v___x_5778_;
}
}
}
}
}
else
{
return v___x_5766_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps___boxed(lean_object* v_e_5784_, lean_object* v_a_5785_, lean_object* v_a_5786_, lean_object* v_a_5787_){
_start:
{
lean_object* v_res_5788_; 
v_res_5788_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_e_5784_, v_a_5785_, v_a_5786_);
lean_dec_ref(v_a_5785_);
return v_res_5788_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg___boxed(lean_object* v_as_x27_5789_, lean_object* v_b_5790_, lean_object* v___y_5791_, lean_object* v___y_5792_, lean_object* v___y_5793_){
_start:
{
lean_object* v_res_5794_; 
v_res_5794_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg(v_as_x27_5789_, v_b_5790_, v___y_5791_, v___y_5792_);
lean_dec_ref(v___y_5791_);
lean_dec(v_as_x27_5789_);
return v_res_5794_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg___boxed(lean_object* v_as_x27_5795_, lean_object* v_b_5796_, lean_object* v___y_5797_, lean_object* v___y_5798_, lean_object* v___y_5799_){
_start:
{
lean_object* v_res_5800_; 
v_res_5800_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg(v_as_x27_5795_, v_b_5796_, v___y_5797_, v___y_5798_);
lean_dec_ref(v___y_5797_);
lean_dec(v_as_x27_5795_);
return v_res_5800_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2___boxed(lean_object* v_x_5801_, lean_object* v_x_5802_, lean_object* v___y_5803_, lean_object* v___y_5804_, lean_object* v___y_5805_){
_start:
{
lean_object* v_res_5806_; 
v_res_5806_ = l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(v_x_5801_, v_x_5802_, v___y_5803_, v___y_5804_);
lean_dec_ref(v___y_5803_);
return v_res_5806_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0___boxed(lean_object* v_as_5807_, lean_object* v_sz_5808_, lean_object* v_i_5809_, lean_object* v_b_5810_, lean_object* v___y_5811_, lean_object* v___y_5812_, lean_object* v___y_5813_){
_start:
{
size_t v_sz_boxed_5814_; size_t v_i_boxed_5815_; lean_object* v_res_5816_; 
v_sz_boxed_5814_ = lean_unbox_usize(v_sz_5808_);
lean_dec(v_sz_5808_);
v_i_boxed_5815_ = lean_unbox_usize(v_i_5809_);
lean_dec(v_i_5809_);
v_res_5816_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(v_as_5807_, v_sz_boxed_5814_, v_i_boxed_5815_, v_b_5810_, v___y_5811_, v___y_5812_);
lean_dec_ref(v___y_5811_);
lean_dec_ref(v_as_5807_);
return v_res_5816_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___boxed(lean_object* v_a_5817_, lean_object* v_a_5818_, lean_object* v_a_5819_){
_start:
{
lean_object* v_res_5820_; 
v_res_5820_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(v_a_5817_, v_a_5818_);
lean_dec_ref(v_a_5817_);
return v_res_5820_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__15___boxed(lean_object* v_as_5821_, lean_object* v_sz_5822_, lean_object* v_i_5823_, lean_object* v_b_5824_, lean_object* v___y_5825_, lean_object* v___y_5826_, lean_object* v___y_5827_){
_start:
{
size_t v_sz_boxed_5828_; size_t v_i_boxed_5829_; lean_object* v_res_5830_; 
v_sz_boxed_5828_ = lean_unbox_usize(v_sz_5822_);
lean_dec(v_sz_5822_);
v_i_boxed_5829_ = lean_unbox_usize(v_i_5823_);
lean_dec(v_i_5823_);
v_res_5830_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__15(v_as_5821_, v_sz_boxed_5828_, v_i_boxed_5829_, v_b_5824_, v___y_5825_, v___y_5826_);
lean_dec_ref(v___y_5825_);
lean_dec_ref(v_as_5821_);
return v_res_5830_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExpr___boxed(lean_object* v_e_5831_, lean_object* v_a_5832_, lean_object* v_a_5833_, lean_object* v_a_5834_){
_start:
{
lean_object* v_res_5835_; 
v_res_5835_ = l_LeanExport_dumpExpr(v_e_5831_, v_a_5832_, v_a_5833_);
lean_dec_ref(v_a_5832_);
return v_res_5835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14___boxed(lean_object* v_as_5836_, lean_object* v_sz_5837_, lean_object* v_i_5838_, lean_object* v_b_5839_, lean_object* v___y_5840_, lean_object* v___y_5841_, lean_object* v___y_5842_){
_start:
{
size_t v_sz_boxed_5843_; size_t v_i_boxed_5844_; lean_object* v_res_5845_; 
v_sz_boxed_5843_ = lean_unbox_usize(v_sz_5837_);
lean_dec(v_sz_5837_);
v_i_boxed_5844_ = lean_unbox_usize(v_i_5838_);
lean_dec(v_i_5838_);
v_res_5845_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(v_as_5836_, v_sz_boxed_5843_, v_i_boxed_5844_, v_b_5839_, v___y_5840_, v___y_5841_);
lean_dec_ref(v___y_5840_);
lean_dec_ref(v_as_5836_);
return v_res_5845_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__20___boxed(lean_object* v_as_5846_, lean_object* v_sz_5847_, lean_object* v_i_5848_, lean_object* v_b_5849_, lean_object* v___y_5850_, lean_object* v___y_5851_, lean_object* v___y_5852_){
_start:
{
size_t v_sz_boxed_5853_; size_t v_i_boxed_5854_; lean_object* v_res_5855_; 
v_sz_boxed_5853_ = lean_unbox_usize(v_sz_5847_);
lean_dec(v_sz_5847_);
v_i_boxed_5854_ = lean_unbox_usize(v_i_5848_);
lean_dec(v_i_5848_);
v_res_5855_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__20(v_as_5846_, v_sz_boxed_5853_, v_i_boxed_5854_, v_b_5849_, v___y_5850_, v___y_5851_);
lean_dec_ref(v___y_5850_);
lean_dec_ref(v_as_5846_);
return v_res_5855_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___boxed(lean_object* v_rule_5856_, lean_object* v_a_5857_, lean_object* v_a_5858_, lean_object* v_a_5859_){
_start:
{
lean_object* v_res_5860_; 
v_res_5860_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(v_rule_5856_, v_a_5857_, v_a_5858_);
lean_dec_ref(v_a_5857_);
return v_res_5860_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___boxed(lean_object* v_a_5861_, lean_object* v_a_5862_, lean_object* v_a_5863_){
_start:
{
lean_object* v_res_5864_; 
v_res_5864_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(v_a_5861_, v_a_5862_);
lean_dec_ref(v_a_5861_);
return v_res_5864_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___boxed(lean_object* v_sz_5865_, lean_object* v_i_5866_, lean_object* v_bs_5867_, lean_object* v___y_5868_, lean_object* v___y_5869_, lean_object* v___y_5870_){
_start:
{
size_t v_sz_boxed_5871_; size_t v_i_boxed_5872_; lean_object* v_res_5873_; 
v_sz_boxed_5871_ = lean_unbox_usize(v_sz_5865_);
lean_dec(v_sz_5865_);
v_i_boxed_5872_ = lean_unbox_usize(v_i_5866_);
lean_dec(v_i_5866_);
v_res_5873_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(v_sz_boxed_5871_, v_i_boxed_5872_, v_bs_5867_, v___y_5868_, v___y_5869_);
lean_dec_ref(v___y_5868_);
return v_res_5873_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___boxed(lean_object* v_sz_5874_, lean_object* v_i_5875_, lean_object* v_bs_5876_, lean_object* v___y_5877_, lean_object* v___y_5878_, lean_object* v___y_5879_){
_start:
{
size_t v_sz_boxed_5880_; size_t v_i_boxed_5881_; lean_object* v_res_5882_; 
v_sz_boxed_5880_ = lean_unbox_usize(v_sz_5874_);
lean_dec(v_sz_5874_);
v_i_boxed_5881_ = lean_unbox_usize(v_i_5875_);
lean_dec(v_i_5875_);
v_res_5882_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(v_sz_boxed_5880_, v_i_boxed_5881_, v_bs_5876_, v___y_5877_, v___y_5878_);
lean_dec_ref(v___y_5877_);
return v_res_5882_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___boxed(lean_object* v_sz_5883_, lean_object* v_i_5884_, lean_object* v_bs_5885_, lean_object* v___y_5886_, lean_object* v___y_5887_, lean_object* v___y_5888_){
_start:
{
size_t v_sz_boxed_5889_; size_t v_i_boxed_5890_; lean_object* v_res_5891_; 
v_sz_boxed_5889_ = lean_unbox_usize(v_sz_5883_);
lean_dec(v_sz_5883_);
v_i_boxed_5890_ = lean_unbox_usize(v_i_5884_);
lean_dec(v_i_5884_);
v_res_5891_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18(v_sz_boxed_5889_, v_i_boxed_5890_, v_bs_5885_, v___y_5886_, v___y_5887_);
lean_dec_ref(v___y_5886_);
return v_res_5891_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___boxed(lean_object* v___x_5892_, lean_object* v_as_x27_5893_, lean_object* v_b_5894_, lean_object* v___y_5895_, lean_object* v___y_5896_, lean_object* v___y_5897_){
_start:
{
uint8_t v___x_173317__boxed_5898_; lean_object* v_res_5899_; 
v___x_173317__boxed_5898_ = lean_unbox(v___x_5892_);
v_res_5899_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(v___x_173317__boxed_5898_, v_as_x27_5893_, v_b_5894_, v___y_5895_, v___y_5896_);
lean_dec_ref(v___y_5895_);
lean_dec(v_as_x27_5893_);
return v_res_5899_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___boxed(lean_object* v___x_5900_, lean_object* v_val_5901_, lean_object* v_as_x27_5902_, lean_object* v_b_5903_, lean_object* v___y_5904_, lean_object* v___y_5905_, lean_object* v___y_5906_){
_start:
{
uint8_t v___x_173417__boxed_5907_; lean_object* v_res_5908_; 
v___x_173417__boxed_5907_ = lean_unbox(v___x_5900_);
v_res_5908_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(v___x_173417__boxed_5907_, v_val_5901_, v_as_x27_5902_, v_b_5903_, v___y_5904_, v___y_5905_);
lean_dec_ref(v___y_5904_);
lean_dec(v_as_x27_5902_);
lean_dec_ref(v_val_5901_);
return v_res_5908_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExprAux___boxed(lean_object* v_e_5909_, lean_object* v_a_5910_, lean_object* v_a_5911_, lean_object* v_a_5912_){
_start:
{
lean_object* v_res_5913_; 
v_res_5913_ = l_LeanExport_dumpExprAux(v_e_5909_, v_a_5910_, v_a_5911_);
lean_dec_ref(v_a_5910_);
return v_res_5913_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpConstant___boxed(lean_object* v_c_5914_, lean_object* v_a_5915_, lean_object* v_a_5916_, lean_object* v_a_5917_){
_start:
{
lean_object* v_res_5918_; 
v_res_5918_ = l_LeanExport_dumpConstant(v_c_5914_, v_a_5915_, v_a_5916_);
lean_dec_ref(v_a_5915_);
return v_res_5918_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7(uint8_t v___x_5919_, lean_object* v_as_5920_, lean_object* v_as_x27_5921_, lean_object* v_b_5922_, lean_object* v_a_5923_, lean_object* v___y_5924_, lean_object* v___y_5925_){
_start:
{
lean_object* v___x_5927_; 
v___x_5927_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(v___x_5919_, v_as_x27_5921_, v_b_5922_, v___y_5924_, v___y_5925_);
return v___x_5927_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___boxed(lean_object* v___x_5928_, lean_object* v_as_5929_, lean_object* v_as_x27_5930_, lean_object* v_b_5931_, lean_object* v_a_5932_, lean_object* v___y_5933_, lean_object* v___y_5934_, lean_object* v___y_5935_){
_start:
{
uint8_t v___x_177938__boxed_5936_; lean_object* v_res_5937_; 
v___x_177938__boxed_5936_ = lean_unbox(v___x_5928_);
v_res_5937_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7(v___x_177938__boxed_5936_, v_as_5929_, v_as_x27_5930_, v_b_5931_, v_a_5932_, v___y_5933_, v___y_5934_);
lean_dec_ref(v___y_5933_);
lean_dec(v_as_x27_5930_);
lean_dec(v_as_5929_);
return v_res_5937_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9(uint8_t v___y_5938_, uint8_t v___x_5939_, lean_object* v_as_5940_, lean_object* v_as_x27_5941_, lean_object* v_b_5942_, lean_object* v_a_5943_, lean_object* v___y_5944_, lean_object* v___y_5945_){
_start:
{
lean_object* v___x_5947_; 
v___x_5947_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(v___y_5938_, v___x_5939_, v_as_x27_5941_, v_b_5942_, v___y_5944_, v___y_5945_);
return v___x_5947_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___boxed(lean_object* v___y_5948_, lean_object* v___x_5949_, lean_object* v_as_5950_, lean_object* v_as_x27_5951_, lean_object* v_b_5952_, lean_object* v_a_5953_, lean_object* v___y_5954_, lean_object* v___y_5955_, lean_object* v___y_5956_){
_start:
{
uint8_t v___y_177955__boxed_5957_; uint8_t v___x_177956__boxed_5958_; lean_object* v_res_5959_; 
v___y_177955__boxed_5957_ = lean_unbox(v___y_5948_);
v___x_177956__boxed_5958_ = lean_unbox(v___x_5949_);
v_res_5959_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9(v___y_177955__boxed_5957_, v___x_177956__boxed_5958_, v_as_5950_, v_as_x27_5951_, v_b_5952_, v_a_5953_, v___y_5954_, v___y_5955_);
lean_dec_ref(v___y_5954_);
lean_dec(v_as_x27_5951_);
lean_dec(v_as_5950_);
return v_res_5959_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10(lean_object* v_00_u03b4_5960_, lean_object* v_t_5961_, lean_object* v_k_5962_){
_start:
{
lean_object* v___x_5963_; 
v___x_5963_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg(v_t_5961_, v_k_5962_);
return v___x_5963_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___boxed(lean_object* v_00_u03b4_5964_, lean_object* v_t_5965_, lean_object* v_k_5966_){
_start:
{
lean_object* v_res_5967_; 
v_res_5967_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10(v_00_u03b4_5964_, v_t_5965_, v_k_5966_);
lean_dec(v_k_5966_);
lean_dec(v_t_5965_);
return v_res_5967_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12(uint8_t v___x_5968_, lean_object* v_val_5969_, lean_object* v_as_5970_, lean_object* v_as_x27_5971_, lean_object* v_b_5972_, lean_object* v_a_5973_, lean_object* v___y_5974_, lean_object* v___y_5975_){
_start:
{
lean_object* v___x_5977_; 
v___x_5977_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(v___x_5968_, v_val_5969_, v_as_x27_5971_, v_b_5972_, v___y_5974_, v___y_5975_);
return v___x_5977_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___boxed(lean_object* v___x_5978_, lean_object* v_val_5979_, lean_object* v_as_5980_, lean_object* v_as_x27_5981_, lean_object* v_b_5982_, lean_object* v_a_5983_, lean_object* v___y_5984_, lean_object* v___y_5985_, lean_object* v___y_5986_){
_start:
{
uint8_t v___x_177977__boxed_5987_; lean_object* v_res_5988_; 
v___x_177977__boxed_5987_ = lean_unbox(v___x_5978_);
v_res_5988_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12(v___x_177977__boxed_5987_, v_val_5979_, v_as_5980_, v_as_x27_5981_, v_b_5982_, v_a_5983_, v___y_5984_, v___y_5985_);
lean_dec_ref(v___y_5984_);
lean_dec(v_as_x27_5981_);
lean_dec(v_as_5980_);
lean_dec_ref(v_val_5979_);
return v_res_5988_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13(lean_object* v_as_5989_, lean_object* v_as_x27_5990_, lean_object* v_b_5991_, lean_object* v_a_5992_, lean_object* v___y_5993_, lean_object* v___y_5994_){
_start:
{
lean_object* v___x_5996_; 
v___x_5996_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg(v_as_x27_5990_, v_b_5991_, v___y_5993_, v___y_5994_);
return v___x_5996_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___boxed(lean_object* v_as_5997_, lean_object* v_as_x27_5998_, lean_object* v_b_5999_, lean_object* v_a_6000_, lean_object* v___y_6001_, lean_object* v___y_6002_, lean_object* v___y_6003_){
_start:
{
lean_object* v_res_6004_; 
v_res_6004_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13(v_as_5997_, v_as_x27_5998_, v_b_5999_, v_a_6000_, v___y_6001_, v___y_6002_);
lean_dec_ref(v___y_6001_);
lean_dec(v_as_x27_5998_);
lean_dec(v_as_5997_);
return v_res_6004_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22(lean_object* v_as_6005_, lean_object* v_as_x27_6006_, lean_object* v_b_6007_, lean_object* v_a_6008_, lean_object* v___y_6009_, lean_object* v___y_6010_){
_start:
{
lean_object* v___x_6012_; 
v___x_6012_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg(v_as_x27_6006_, v_b_6007_, v___y_6009_, v___y_6010_);
return v___x_6012_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___boxed(lean_object* v_as_6013_, lean_object* v_as_x27_6014_, lean_object* v_b_6015_, lean_object* v_a_6016_, lean_object* v___y_6017_, lean_object* v___y_6018_, lean_object* v___y_6019_){
_start:
{
lean_object* v_res_6020_; 
v_res_6020_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22(v_as_6013_, v_as_x27_6014_, v_b_6015_, v_a_6016_, v___y_6017_, v___y_6018_);
lean_dec_ref(v___y_6017_);
lean_dec(v_as_x27_6014_);
lean_dec(v_as_6013_);
return v_res_6020_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1(void){
_start:
{
lean_object* v___x_6022_; lean_object* v___x_6023_; 
v___x_6022_ = l_Lean_versionString;
v___x_6023_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6023_, 0, v___x_6022_);
return v___x_6023_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2(void){
_start:
{
lean_object* v___x_6024_; lean_object* v___x_6025_; lean_object* v___x_6026_; 
v___x_6024_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1);
v___x_6025_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0));
v___x_6026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6026_, 0, v___x_6025_);
lean_ctor_set(v___x_6026_, 1, v___x_6024_);
return v___x_6026_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4(void){
_start:
{
lean_object* v___x_6028_; lean_object* v___x_6029_; 
v___x_6028_ = l_Lean_githash;
v___x_6029_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6029_, 0, v___x_6028_);
return v___x_6029_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5(void){
_start:
{
lean_object* v___x_6030_; lean_object* v___x_6031_; lean_object* v___x_6032_; 
v___x_6030_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4);
v___x_6031_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__3));
v___x_6032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6032_, 0, v___x_6031_);
lean_ctor_set(v___x_6032_, 1, v___x_6030_);
return v___x_6032_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6(void){
_start:
{
lean_object* v___x_6033_; lean_object* v___x_6034_; lean_object* v___x_6035_; 
v___x_6033_ = lean_box(0);
v___x_6034_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5);
v___x_6035_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6035_, 0, v___x_6034_);
lean_ctor_set(v___x_6035_, 1, v___x_6033_);
return v___x_6035_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7(void){
_start:
{
lean_object* v___x_6036_; lean_object* v___x_6037_; lean_object* v___x_6038_; 
v___x_6036_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6);
v___x_6037_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2);
v___x_6038_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6038_, 0, v___x_6037_);
lean_ctor_set(v___x_6038_, 1, v___x_6036_);
return v___x_6038_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8(void){
_start:
{
lean_object* v___x_6039_; lean_object* v_leanMeta_6040_; 
v___x_6039_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7);
v_leanMeta_6040_ = l_Lean_Json_mkObj(v___x_6039_);
return v_leanMeta_6040_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17(void){
_start:
{
lean_object* v___x_6059_; lean_object* v_exporterMeta_6060_; 
v___x_6059_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__16));
v_exporterMeta_6060_ = l_Lean_Json_mkObj(v___x_6059_);
return v_exporterMeta_6060_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18(void){
_start:
{
lean_object* v___x_6061_; lean_object* v_formatMeta_6062_; 
v___x_6061_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15));
v_formatMeta_6062_ = l_Lean_Json_mkObj(v___x_6061_);
return v_formatMeta_6062_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21(void){
_start:
{
lean_object* v_exporterMeta_6065_; lean_object* v___x_6066_; lean_object* v___x_6067_; 
v_exporterMeta_6065_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17);
v___x_6066_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__20));
v___x_6067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6067_, 0, v___x_6066_);
lean_ctor_set(v___x_6067_, 1, v_exporterMeta_6065_);
return v___x_6067_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23(void){
_start:
{
lean_object* v_leanMeta_6069_; lean_object* v___x_6070_; lean_object* v___x_6071_; 
v_leanMeta_6069_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8);
v___x_6070_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__22));
v___x_6071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6071_, 0, v___x_6070_);
lean_ctor_set(v___x_6071_, 1, v_leanMeta_6069_);
return v___x_6071_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25(void){
_start:
{
lean_object* v_formatMeta_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; 
v_formatMeta_6073_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18);
v___x_6074_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__24));
v___x_6075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6075_, 0, v___x_6074_);
lean_ctor_set(v___x_6075_, 1, v_formatMeta_6073_);
return v___x_6075_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26(void){
_start:
{
lean_object* v___x_6076_; lean_object* v___x_6077_; lean_object* v___x_6078_; 
v___x_6076_ = lean_box(0);
v___x_6077_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25);
v___x_6078_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6078_, 0, v___x_6077_);
lean_ctor_set(v___x_6078_, 1, v___x_6076_);
return v___x_6078_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27(void){
_start:
{
lean_object* v___x_6079_; lean_object* v___x_6080_; lean_object* v___x_6081_; 
v___x_6079_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26);
v___x_6080_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23);
v___x_6081_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6081_, 0, v___x_6080_);
lean_ctor_set(v___x_6081_, 1, v___x_6079_);
return v___x_6081_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28(void){
_start:
{
lean_object* v___x_6082_; lean_object* v___x_6083_; lean_object* v___x_6084_; 
v___x_6082_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27);
v___x_6083_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21);
v___x_6084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6084_, 0, v___x_6083_);
lean_ctor_set(v___x_6084_, 1, v___x_6082_);
return v___x_6084_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29(void){
_start:
{
lean_object* v___x_6085_; lean_object* v___x_6086_; 
v___x_6085_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28);
v___x_6086_ = l_Lean_Json_mkObj(v___x_6085_);
return v___x_6086_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30(void){
_start:
{
lean_object* v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6089_; 
v___x_6087_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29);
v___x_6088_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__19));
v___x_6089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6089_, 0, v___x_6088_);
lean_ctor_set(v___x_6089_, 1, v___x_6087_);
return v___x_6089_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31(void){
_start:
{
lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; 
v___x_6090_ = lean_box(0);
v___x_6091_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30);
v___x_6092_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6092_, 0, v___x_6091_);
lean_ctor_set(v___x_6092_, 1, v___x_6090_);
return v___x_6092_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32(void){
_start:
{
lean_object* v___x_6093_; lean_object* v___x_6094_; 
v___x_6093_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31);
v___x_6094_ = l_Lean_Json_mkObj(v___x_6093_);
return v___x_6094_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata(void){
_start:
{
lean_object* v___x_6095_; 
v___x_6095_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32);
return v___x_6095_;
}
}
static lean_object* _init_l_LeanExport_dumpMetadata___redArg___closed__0(void){
_start:
{
lean_object* v___x_6096_; lean_object* v___x_6097_; 
v___x_6096_ = l___private_LeanExport_Basic_0__LeanExport_exportMetadata;
v___x_6097_ = l_Lean_Json_compress(v___x_6096_);
return v___x_6097_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___redArg(lean_object* v_a_6098_){
_start:
{
lean_object* v___x_6100_; lean_object* v___x_6101_; 
v___x_6100_ = lean_obj_once(&l_LeanExport_dumpMetadata___redArg___closed__0, &l_LeanExport_dumpMetadata___redArg___closed__0_once, _init_l_LeanExport_dumpMetadata___redArg___closed__0);
v___x_6101_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_6100_);
if (lean_obj_tag(v___x_6101_) == 0)
{
lean_object* v_a_6102_; lean_object* v___x_6104_; uint8_t v_isShared_6105_; uint8_t v_isSharedCheck_6110_; 
v_a_6102_ = lean_ctor_get(v___x_6101_, 0);
v_isSharedCheck_6110_ = !lean_is_exclusive(v___x_6101_);
if (v_isSharedCheck_6110_ == 0)
{
v___x_6104_ = v___x_6101_;
v_isShared_6105_ = v_isSharedCheck_6110_;
goto v_resetjp_6103_;
}
else
{
lean_inc(v_a_6102_);
lean_dec(v___x_6101_);
v___x_6104_ = lean_box(0);
v_isShared_6105_ = v_isSharedCheck_6110_;
goto v_resetjp_6103_;
}
v_resetjp_6103_:
{
lean_object* v___x_6106_; lean_object* v___x_6108_; 
v___x_6106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6106_, 0, v_a_6102_);
lean_ctor_set(v___x_6106_, 1, v_a_6098_);
if (v_isShared_6105_ == 0)
{
lean_ctor_set(v___x_6104_, 0, v___x_6106_);
v___x_6108_ = v___x_6104_;
goto v_reusejp_6107_;
}
else
{
lean_object* v_reuseFailAlloc_6109_; 
v_reuseFailAlloc_6109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6109_, 0, v___x_6106_);
v___x_6108_ = v_reuseFailAlloc_6109_;
goto v_reusejp_6107_;
}
v_reusejp_6107_:
{
return v___x_6108_;
}
}
}
else
{
lean_object* v_a_6111_; lean_object* v___x_6113_; uint8_t v_isShared_6114_; uint8_t v_isSharedCheck_6118_; 
lean_dec_ref(v_a_6098_);
v_a_6111_ = lean_ctor_get(v___x_6101_, 0);
v_isSharedCheck_6118_ = !lean_is_exclusive(v___x_6101_);
if (v_isSharedCheck_6118_ == 0)
{
v___x_6113_ = v___x_6101_;
v_isShared_6114_ = v_isSharedCheck_6118_;
goto v_resetjp_6112_;
}
else
{
lean_inc(v_a_6111_);
lean_dec(v___x_6101_);
v___x_6113_ = lean_box(0);
v_isShared_6114_ = v_isSharedCheck_6118_;
goto v_resetjp_6112_;
}
v_resetjp_6112_:
{
lean_object* v___x_6116_; 
if (v_isShared_6114_ == 0)
{
v___x_6116_ = v___x_6113_;
goto v_reusejp_6115_;
}
else
{
lean_object* v_reuseFailAlloc_6117_; 
v_reuseFailAlloc_6117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6117_, 0, v_a_6111_);
v___x_6116_ = v_reuseFailAlloc_6117_;
goto v_reusejp_6115_;
}
v_reusejp_6115_:
{
return v___x_6116_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___redArg___boxed(lean_object* v_a_6119_, lean_object* v_a_6120_){
_start:
{
lean_object* v_res_6121_; 
v_res_6121_ = l_LeanExport_dumpMetadata___redArg(v_a_6119_);
return v_res_6121_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata(lean_object* v_a_6122_, lean_object* v_a_6123_){
_start:
{
lean_object* v___x_6125_; 
v___x_6125_ = l_LeanExport_dumpMetadata___redArg(v_a_6123_);
return v___x_6125_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___boxed(lean_object* v_a_6126_, lean_object* v_a_6127_, lean_object* v_a_6128_){
_start:
{
lean_object* v_res_6129_; 
v_res_6129_ = l_LeanExport_dumpMetadata(v_a_6126_, v_a_6127_);
lean_dec_ref(v_a_6126_);
return v_res_6129_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(lean_object* v_as_x27_6130_, lean_object* v_b_6131_, lean_object* v___y_6132_, lean_object* v___y_6133_){
_start:
{
if (lean_obj_tag(v_as_x27_6130_) == 0)
{
lean_object* v___x_6135_; lean_object* v___x_6136_; 
v___x_6135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6135_, 0, v_b_6131_);
lean_ctor_set(v___x_6135_, 1, v___y_6133_);
v___x_6136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6136_, 0, v___x_6135_);
return v___x_6136_;
}
else
{
lean_object* v_head_6137_; lean_object* v_tail_6138_; lean_object* v_visitedNames_6139_; lean_object* v_visitedLevels_6140_; lean_object* v_visitedExprs_6141_; lean_object* v_visitedConstants_6142_; uint8_t v_exportMData_6143_; uint8_t v_exportUnsafe_6144_; uint8_t v_ignoreMissing_6145_; lean_object* v_recursorMap_6146_; lean_object* v___x_6148_; uint8_t v_isShared_6149_; uint8_t v_isSharedCheck_6159_; 
v_head_6137_ = lean_ctor_get(v_as_x27_6130_, 0);
v_tail_6138_ = lean_ctor_get(v_as_x27_6130_, 1);
v_visitedNames_6139_ = lean_ctor_get(v___y_6133_, 0);
v_visitedLevels_6140_ = lean_ctor_get(v___y_6133_, 1);
v_visitedExprs_6141_ = lean_ctor_get(v___y_6133_, 2);
v_visitedConstants_6142_ = lean_ctor_get(v___y_6133_, 3);
v_exportMData_6143_ = lean_ctor_get_uint8(v___y_6133_, sizeof(void*)*6);
v_exportUnsafe_6144_ = lean_ctor_get_uint8(v___y_6133_, sizeof(void*)*6 + 1);
v_ignoreMissing_6145_ = lean_ctor_get_uint8(v___y_6133_, sizeof(void*)*6 + 2);
v_recursorMap_6146_ = lean_ctor_get(v___y_6133_, 5);
v_isSharedCheck_6159_ = !lean_is_exclusive(v___y_6133_);
if (v_isSharedCheck_6159_ == 0)
{
lean_object* v_unused_6160_; 
v_unused_6160_ = lean_ctor_get(v___y_6133_, 4);
lean_dec(v_unused_6160_);
v___x_6148_ = v___y_6133_;
v_isShared_6149_ = v_isSharedCheck_6159_;
goto v_resetjp_6147_;
}
else
{
lean_inc(v_recursorMap_6146_);
lean_inc(v_visitedConstants_6142_);
lean_inc(v_visitedExprs_6141_);
lean_inc(v_visitedLevels_6140_);
lean_inc(v_visitedNames_6139_);
lean_dec(v___y_6133_);
v___x_6148_ = lean_box(0);
v_isShared_6149_ = v_isSharedCheck_6159_;
goto v_resetjp_6147_;
}
v_resetjp_6147_:
{
lean_object* v___x_6150_; lean_object* v___x_6151_; lean_object* v___x_6153_; 
v___x_6150_ = lean_box(0);
v___x_6151_ = lean_obj_once(&l_LeanExport_dumpExpr___closed__1, &l_LeanExport_dumpExpr___closed__1_once, _init_l_LeanExport_dumpExpr___closed__1);
if (v_isShared_6149_ == 0)
{
lean_ctor_set(v___x_6148_, 4, v___x_6151_);
v___x_6153_ = v___x_6148_;
goto v_reusejp_6152_;
}
else
{
lean_object* v_reuseFailAlloc_6158_; 
v_reuseFailAlloc_6158_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_6158_, 0, v_visitedNames_6139_);
lean_ctor_set(v_reuseFailAlloc_6158_, 1, v_visitedLevels_6140_);
lean_ctor_set(v_reuseFailAlloc_6158_, 2, v_visitedExprs_6141_);
lean_ctor_set(v_reuseFailAlloc_6158_, 3, v_visitedConstants_6142_);
lean_ctor_set(v_reuseFailAlloc_6158_, 4, v___x_6151_);
lean_ctor_set(v_reuseFailAlloc_6158_, 5, v_recursorMap_6146_);
lean_ctor_set_uint8(v_reuseFailAlloc_6158_, sizeof(void*)*6, v_exportMData_6143_);
lean_ctor_set_uint8(v_reuseFailAlloc_6158_, sizeof(void*)*6 + 1, v_exportUnsafe_6144_);
lean_ctor_set_uint8(v_reuseFailAlloc_6158_, sizeof(void*)*6 + 2, v_ignoreMissing_6145_);
v___x_6153_ = v_reuseFailAlloc_6158_;
goto v_reusejp_6152_;
}
v_reusejp_6152_:
{
lean_object* v___x_6154_; 
lean_inc(v_head_6137_);
v___x_6154_ = l_LeanExport_dumpConstant(v_head_6137_, v___y_6132_, v___x_6153_);
if (lean_obj_tag(v___x_6154_) == 0)
{
lean_object* v_a_6155_; lean_object* v_snd_6156_; 
v_a_6155_ = lean_ctor_get(v___x_6154_, 0);
lean_inc(v_a_6155_);
lean_dec_ref_known(v___x_6154_, 1);
v_snd_6156_ = lean_ctor_get(v_a_6155_, 1);
lean_inc(v_snd_6156_);
lean_dec(v_a_6155_);
v_as_x27_6130_ = v_tail_6138_;
v_b_6131_ = v___x_6150_;
v___y_6133_ = v_snd_6156_;
goto _start;
}
else
{
return v___x_6154_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg___boxed(lean_object* v_as_x27_6161_, lean_object* v_b_6162_, lean_object* v___y_6163_, lean_object* v___y_6164_, lean_object* v___y_6165_){
_start:
{
lean_object* v_res_6166_; 
v_res_6166_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(v_as_x27_6161_, v_b_6162_, v___y_6163_, v___y_6164_);
lean_dec_ref(v___y_6163_);
lean_dec(v_as_x27_6161_);
return v_res_6166_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___lam__0(lean_object* v_env_6167_, lean_object* v_cliOptions_6168_, lean_object* v___y_6169_, lean_object* v___y_6170_, lean_object* v___y_6171_){
_start:
{
lean_object* v___x_6173_; 
v___x_6173_ = l_LeanExport_initState(v_env_6167_, v_cliOptions_6168_, v___y_6170_, v___y_6171_);
if (lean_obj_tag(v___x_6173_) == 0)
{
lean_object* v_a_6174_; lean_object* v_snd_6175_; lean_object* v___x_6176_; 
v_a_6174_ = lean_ctor_get(v___x_6173_, 0);
lean_inc(v_a_6174_);
lean_dec_ref_known(v___x_6173_, 1);
v_snd_6175_ = lean_ctor_get(v_a_6174_, 1);
lean_inc(v_snd_6175_);
lean_dec(v_a_6174_);
v___x_6176_ = l_LeanExport_dumpMetadata___redArg(v_snd_6175_);
if (lean_obj_tag(v___x_6176_) == 0)
{
lean_object* v_a_6177_; lean_object* v_snd_6178_; lean_object* v___x_6179_; lean_object* v___x_6180_; 
v_a_6177_ = lean_ctor_get(v___x_6176_, 0);
lean_inc(v_a_6177_);
lean_dec_ref_known(v___x_6176_, 1);
v_snd_6178_ = lean_ctor_get(v_a_6177_, 1);
lean_inc(v_snd_6178_);
lean_dec(v_a_6177_);
v___x_6179_ = lean_box(0);
v___x_6180_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(v___y_6169_, v___x_6179_, v___y_6170_, v_snd_6178_);
if (lean_obj_tag(v___x_6180_) == 0)
{
lean_object* v_a_6181_; lean_object* v___x_6183_; uint8_t v_isShared_6184_; uint8_t v_isSharedCheck_6197_; 
v_a_6181_ = lean_ctor_get(v___x_6180_, 0);
v_isSharedCheck_6197_ = !lean_is_exclusive(v___x_6180_);
if (v_isSharedCheck_6197_ == 0)
{
v___x_6183_ = v___x_6180_;
v_isShared_6184_ = v_isSharedCheck_6197_;
goto v_resetjp_6182_;
}
else
{
lean_inc(v_a_6181_);
lean_dec(v___x_6180_);
v___x_6183_ = lean_box(0);
v_isShared_6184_ = v_isSharedCheck_6197_;
goto v_resetjp_6182_;
}
v_resetjp_6182_:
{
lean_object* v_snd_6185_; lean_object* v___x_6187_; uint8_t v_isShared_6188_; uint8_t v_isSharedCheck_6195_; 
v_snd_6185_ = lean_ctor_get(v_a_6181_, 1);
v_isSharedCheck_6195_ = !lean_is_exclusive(v_a_6181_);
if (v_isSharedCheck_6195_ == 0)
{
lean_object* v_unused_6196_; 
v_unused_6196_ = lean_ctor_get(v_a_6181_, 0);
lean_dec(v_unused_6196_);
v___x_6187_ = v_a_6181_;
v_isShared_6188_ = v_isSharedCheck_6195_;
goto v_resetjp_6186_;
}
else
{
lean_inc(v_snd_6185_);
lean_dec(v_a_6181_);
v___x_6187_ = lean_box(0);
v_isShared_6188_ = v_isSharedCheck_6195_;
goto v_resetjp_6186_;
}
v_resetjp_6186_:
{
lean_object* v___x_6190_; 
if (v_isShared_6188_ == 0)
{
lean_ctor_set(v___x_6187_, 0, v___x_6179_);
v___x_6190_ = v___x_6187_;
goto v_reusejp_6189_;
}
else
{
lean_object* v_reuseFailAlloc_6194_; 
v_reuseFailAlloc_6194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6194_, 0, v___x_6179_);
lean_ctor_set(v_reuseFailAlloc_6194_, 1, v_snd_6185_);
v___x_6190_ = v_reuseFailAlloc_6194_;
goto v_reusejp_6189_;
}
v_reusejp_6189_:
{
lean_object* v___x_6192_; 
if (v_isShared_6184_ == 0)
{
lean_ctor_set(v___x_6183_, 0, v___x_6190_);
v___x_6192_ = v___x_6183_;
goto v_reusejp_6191_;
}
else
{
lean_object* v_reuseFailAlloc_6193_; 
v_reuseFailAlloc_6193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6193_, 0, v___x_6190_);
v___x_6192_ = v_reuseFailAlloc_6193_;
goto v_reusejp_6191_;
}
v_reusejp_6191_:
{
return v___x_6192_;
}
}
}
}
}
else
{
return v___x_6180_;
}
}
else
{
return v___x_6176_;
}
}
else
{
return v___x_6173_;
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___lam__0___boxed(lean_object* v_env_6198_, lean_object* v_cliOptions_6199_, lean_object* v___y_6200_, lean_object* v___y_6201_, lean_object* v___y_6202_, lean_object* v___y_6203_){
_start:
{
lean_object* v_res_6204_; 
v_res_6204_ = l_LeanExport_dumpEnv___lam__0(v_env_6198_, v_cliOptions_6199_, v___y_6200_, v___y_6201_, v___y_6202_);
lean_dec_ref(v___y_6201_);
lean_dec(v___y_6200_);
lean_dec(v_cliOptions_6199_);
return v_res_6204_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00LeanExport_dumpEnv_spec__2(lean_object* v_a_6205_, lean_object* v_a_6206_){
_start:
{
if (lean_obj_tag(v_a_6205_) == 0)
{
lean_object* v___x_6207_; 
v___x_6207_ = l_List_reverse___redArg(v_a_6206_);
return v___x_6207_;
}
else
{
lean_object* v_head_6208_; lean_object* v_tail_6209_; lean_object* v___x_6211_; uint8_t v_isShared_6212_; uint8_t v_isSharedCheck_6219_; 
v_head_6208_ = lean_ctor_get(v_a_6205_, 0);
v_tail_6209_ = lean_ctor_get(v_a_6205_, 1);
v_isSharedCheck_6219_ = !lean_is_exclusive(v_a_6205_);
if (v_isSharedCheck_6219_ == 0)
{
v___x_6211_ = v_a_6205_;
v_isShared_6212_ = v_isSharedCheck_6219_;
goto v_resetjp_6210_;
}
else
{
lean_inc(v_tail_6209_);
lean_inc(v_head_6208_);
lean_dec(v_a_6205_);
v___x_6211_ = lean_box(0);
v_isShared_6212_ = v_isSharedCheck_6219_;
goto v_resetjp_6210_;
}
v_resetjp_6210_:
{
uint8_t v___x_6213_; 
v___x_6213_ = l_Lean_Name_isInternal(v_head_6208_);
if (v___x_6213_ == 0)
{
lean_object* v___x_6215_; 
if (v_isShared_6212_ == 0)
{
lean_ctor_set(v___x_6211_, 1, v_a_6206_);
v___x_6215_ = v___x_6211_;
goto v_reusejp_6214_;
}
else
{
lean_object* v_reuseFailAlloc_6217_; 
v_reuseFailAlloc_6217_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6217_, 0, v_head_6208_);
lean_ctor_set(v_reuseFailAlloc_6217_, 1, v_a_6206_);
v___x_6215_ = v_reuseFailAlloc_6217_;
goto v_reusejp_6214_;
}
v_reusejp_6214_:
{
v_a_6205_ = v_tail_6209_;
v_a_6206_ = v___x_6215_;
goto _start;
}
}
else
{
lean_del_object(v___x_6211_);
lean_dec(v_head_6208_);
v_a_6205_ = v_tail_6209_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00LeanExport_dumpEnv_spec__1(lean_object* v_a_6220_, lean_object* v_a_6221_){
_start:
{
if (lean_obj_tag(v_a_6220_) == 0)
{
lean_object* v___x_6222_; 
v___x_6222_ = l_List_reverse___redArg(v_a_6221_);
return v___x_6222_;
}
else
{
lean_object* v_head_6223_; lean_object* v_tail_6224_; lean_object* v___x_6226_; uint8_t v_isShared_6227_; uint8_t v_isSharedCheck_6233_; 
v_head_6223_ = lean_ctor_get(v_a_6220_, 0);
v_tail_6224_ = lean_ctor_get(v_a_6220_, 1);
v_isSharedCheck_6233_ = !lean_is_exclusive(v_a_6220_);
if (v_isSharedCheck_6233_ == 0)
{
v___x_6226_ = v_a_6220_;
v_isShared_6227_ = v_isSharedCheck_6233_;
goto v_resetjp_6225_;
}
else
{
lean_inc(v_tail_6224_);
lean_inc(v_head_6223_);
lean_dec(v_a_6220_);
v___x_6226_ = lean_box(0);
v_isShared_6227_ = v_isSharedCheck_6233_;
goto v_resetjp_6225_;
}
v_resetjp_6225_:
{
lean_object* v_fst_6228_; lean_object* v___x_6230_; 
v_fst_6228_ = lean_ctor_get(v_head_6223_, 0);
lean_inc(v_fst_6228_);
lean_dec(v_head_6223_);
if (v_isShared_6227_ == 0)
{
lean_ctor_set(v___x_6226_, 1, v_a_6221_);
lean_ctor_set(v___x_6226_, 0, v_fst_6228_);
v___x_6230_ = v___x_6226_;
goto v_reusejp_6229_;
}
else
{
lean_object* v_reuseFailAlloc_6232_; 
v_reuseFailAlloc_6232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6232_, 0, v_fst_6228_);
lean_ctor_set(v_reuseFailAlloc_6232_, 1, v_a_6221_);
v___x_6230_ = v_reuseFailAlloc_6232_;
goto v_reusejp_6229_;
}
v_reusejp_6229_:
{
v_a_6220_ = v_tail_6224_;
v_a_6221_ = v___x_6230_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv(lean_object* v_env_6234_, lean_object* v_constants_x3f_6235_, lean_object* v_cliOptions_6236_){
_start:
{
lean_object* v___y_6239_; 
if (lean_obj_tag(v_constants_x3f_6235_) == 0)
{
lean_object* v___x_6242_; lean_object* v___x_6243_; lean_object* v___x_6244_; lean_object* v___x_6245_; lean_object* v___x_6246_; 
lean_inc_ref(v_env_6234_);
v___x_6242_ = l_Lean_Environment_constants(v_env_6234_);
v___x_6243_ = l_Lean_ConstMap_toList(v___x_6242_);
v___x_6244_ = lean_box(0);
v___x_6245_ = l_List_mapTR_loop___at___00LeanExport_dumpEnv_spec__1(v___x_6243_, v___x_6244_);
v___x_6246_ = l_List_filterTR_loop___at___00LeanExport_dumpEnv_spec__2(v___x_6245_, v___x_6244_);
v___y_6239_ = v___x_6246_;
goto v___jp_6238_;
}
else
{
lean_object* v_val_6247_; 
v_val_6247_ = lean_ctor_get(v_constants_x3f_6235_, 0);
lean_inc(v_val_6247_);
lean_dec_ref_known(v_constants_x3f_6235_, 1);
v___y_6239_ = v_val_6247_;
goto v___jp_6238_;
}
v___jp_6238_:
{
lean_object* v___f_6240_; lean_object* v___x_6241_; 
lean_inc_ref(v_env_6234_);
v___f_6240_ = lean_alloc_closure((void*)(l_LeanExport_dumpEnv___lam__0___boxed), 6, 3);
lean_closure_set(v___f_6240_, 0, v_env_6234_);
lean_closure_set(v___f_6240_, 1, v_cliOptions_6236_);
lean_closure_set(v___f_6240_, 2, v___y_6239_);
v___x_6241_ = l_LeanExport_M_run___redArg(v_env_6234_, v___f_6240_);
return v___x_6241_;
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___boxed(lean_object* v_env_6248_, lean_object* v_constants_x3f_6249_, lean_object* v_cliOptions_6250_, lean_object* v_a_6251_){
_start:
{
lean_object* v_res_6252_; 
v_res_6252_ = l_LeanExport_dumpEnv(v_env_6248_, v_constants_x3f_6249_, v_cliOptions_6250_);
return v_res_6252_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0(lean_object* v_as_6253_, lean_object* v_as_x27_6254_, lean_object* v_b_6255_, lean_object* v_a_6256_, lean_object* v___y_6257_, lean_object* v___y_6258_){
_start:
{
lean_object* v___x_6260_; 
v___x_6260_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(v_as_x27_6254_, v_b_6255_, v___y_6257_, v___y_6258_);
return v___x_6260_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___boxed(lean_object* v_as_6261_, lean_object* v_as_x27_6262_, lean_object* v_b_6263_, lean_object* v_a_6264_, lean_object* v___y_6265_, lean_object* v___y_6266_, lean_object* v___y_6267_){
_start:
{
lean_object* v_res_6268_; 
v_res_6268_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0(v_as_6261_, v_as_x27_6262_, v_b_6263_, v_a_6264_, v___y_6265_, v___y_6266_);
lean_dec_ref(v___y_6265_);
lean_dec(v_as_x27_6262_);
lean_dec(v_as_6261_);
return v_res_6268_;
}
}
lean_object* runtime_initialize_Lean(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashMap_Basic(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_LeanExport_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_LeanExport_Basic_0__LeanExport_exportMetadata = _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata();
lean_mark_persistent(l___private_LeanExport_Basic_0__LeanExport_exportMetadata);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_LeanExport_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_LeanExport_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_LeanExport_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_LeanExport_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_LeanExport_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
