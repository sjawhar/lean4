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
lean_object* lean_imported_consts_force_shared(lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9_spec__11___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__10___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__13___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___redArg(lean_object* v_t_625_, lean_object* v_f_626_, lean_object* v_init_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_){
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
v___x_649_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9_spec__11___redArg(v_f_626_, v_children_634_, v___x_647_, v___x_648_, v_s_636_, v___y_637_, v___y_638_, v___y_639_);
lean_dec_ref(v_children_634_);
return v___x_649_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9_spec__11___redArg(lean_object* v_f_658_, lean_object* v_as_659_, size_t v_i_660_, size_t v_stop_661_, lean_object* v_b_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_){
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
v___x_669_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___redArg(v___x_668_, v_f_658_, v_b_662_, v___y_663_, v___y_664_, v___y_665_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9_spec__11___redArg___boxed(lean_object* v_f_683_, lean_object* v_as_684_, lean_object* v_i_685_, lean_object* v_stop_686_, lean_object* v_b_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
size_t v_i_boxed_692_; size_t v_stop_boxed_693_; lean_object* v_res_694_; 
v_i_boxed_692_ = lean_unbox_usize(v_i_685_);
lean_dec(v_i_685_);
v_stop_boxed_693_ = lean_unbox_usize(v_stop_686_);
lean_dec(v_stop_686_);
v_res_694_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9_spec__11___redArg(v_f_683_, v_as_684_, v_i_boxed_692_, v_stop_boxed_693_, v_b_687_, v___y_688_, v___y_689_, v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec_ref(v_as_684_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___redArg___boxed(lean_object* v_t_695_, lean_object* v_f_696_, lean_object* v_init_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___redArg(v_t_695_, v_f_696_, v_init_697_, v___y_698_, v___y_699_, v___y_700_);
lean_dec_ref(v___y_699_);
return v_res_702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg(lean_object* v_t_703_, lean_object* v_f_704_, lean_object* v_init_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_){
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
v___x_711_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___redArg(v_tree_710_, v_f_704_, v_init_705_, v___y_706_, v___y_707_, v___y_708_);
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
v___x_729_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__10___redArg(v_f_704_, v_children_714_, v___x_727_, v___x_728_, v_s_716_, v___y_717_, v___y_718_, v___y_719_);
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
v___x_766_ = lean_imported_consts_force_shared(v_entry_740_);
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
v___x_747_ = lean_imported_consts_force_shared(v_expanded_741_);
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
v___x_763_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__10___redArg(v_f_704_, v_fst_748_, v___x_761_, v___x_762_, v_s_743_, v___y_744_, v___y_745_, v___y_746_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__10___redArg(lean_object* v_f_778_, lean_object* v_as_779_, size_t v_i_780_, size_t v_stop_781_, lean_object* v_b_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
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
v___x_789_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg(v___x_788_, v_f_778_, v_b_782_, v___y_783_, v___y_784_, v___y_785_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__10___redArg___boxed(lean_object* v_f_803_, lean_object* v_as_804_, lean_object* v_i_805_, lean_object* v_stop_806_, lean_object* v_b_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
size_t v_i_boxed_812_; size_t v_stop_boxed_813_; lean_object* v_res_814_; 
v_i_boxed_812_ = lean_unbox_usize(v_i_805_);
lean_dec(v_i_805_);
v_stop_boxed_813_ = lean_unbox_usize(v_stop_806_);
lean_dec(v_stop_806_);
v_res_814_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__10___redArg(v_f_803_, v_as_804_, v_i_boxed_812_, v_stop_boxed_813_, v_b_807_, v___y_808_, v___y_809_, v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec_ref(v_as_804_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg___boxed(lean_object* v_t_815_, lean_object* v_f_816_, lean_object* v_init_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg(v_t_815_, v_f_816_, v_init_817_, v___y_818_, v___y_819_, v___y_820_);
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
v___x_849_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg(v_t_841_, v___f_847_, v___x_848_, v___y_843_, v___y_844_, v___y_845_);
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
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__14___redArg(lean_object* v_f_857_, lean_object* v_keys_858_, lean_object* v_vals_859_, lean_object* v_i_860_, lean_object* v_acc_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_){
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
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__14___redArg___boxed(lean_object* v_f_884_, lean_object* v_keys_885_, lean_object* v_vals_886_, lean_object* v_i_887_, lean_object* v_acc_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__14___redArg(v_f_884_, v_keys_885_, v_vals_886_, v_i_887_, v_acc_888_, v___y_889_, v___y_890_, v___y_891_);
lean_dec_ref(v___y_890_);
lean_dec_ref(v_vals_886_);
lean_dec_ref(v_keys_885_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__13___redArg(lean_object* v_f_894_, lean_object* v_as_895_, size_t v_i_896_, size_t v_stop_897_, lean_object* v_b_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_){
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
v___x_924_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10___redArg(v_f_894_, v_node_923_, v_b_898_, v___y_899_, v___y_900_, v___y_901_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10___redArg(lean_object* v_f_929_, lean_object* v_x_930_, lean_object* v_x_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_){
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
v___x_951_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__13___redArg(v_f_929_, v_es_936_, v___x_949_, v___x_950_, v_x_931_, v___y_932_, v___y_933_, v___y_934_);
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
v___x_956_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__14___redArg(v_f_929_, v_ks_953_, v_vs_954_, v___x_955_, v_x_931_, v___y_932_, v___y_933_, v___y_934_);
lean_dec_ref(v_vs_954_);
lean_dec_ref(v_ks_953_);
return v___x_956_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10___redArg___boxed(lean_object* v_f_957_, lean_object* v_x_958_, lean_object* v_x_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10___redArg(v_f_957_, v_x_958_, v_x_959_, v___y_960_, v___y_961_, v___y_962_);
lean_dec_ref(v___y_961_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__13___redArg___boxed(lean_object* v_f_965_, lean_object* v_as_966_, lean_object* v_i_967_, lean_object* v_stop_968_, lean_object* v_b_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
size_t v_i_boxed_974_; size_t v_stop_boxed_975_; lean_object* v_res_976_; 
v_i_boxed_974_ = lean_unbox_usize(v_i_967_);
lean_dec(v_i_967_);
v_stop_boxed_975_ = lean_unbox_usize(v_stop_968_);
lean_dec(v_stop_968_);
v_res_976_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__13___redArg(v_f_965_, v_as_966_, v_i_boxed_974_, v_stop_boxed_975_, v_b_969_, v___y_970_, v___y_971_, v___y_972_);
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
v___x_1003_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10___redArg(v___f_1001_, v_map_995_, v___x_1002_, v___y_997_, v___y_998_, v___y_999_);
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
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___redArg(lean_object* v_t_1152_, lean_object* v_f_1153_, lean_object* v_init_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_){
_start:
{
lean_object* v___x_1159_; 
v___x_1159_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg(v_t_1152_, v_f_1153_, v_init_1154_, v___y_1155_, v___y_1156_, v___y_1157_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___redArg___boxed(lean_object* v_t_1160_, lean_object* v_f_1161_, lean_object* v_init_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
lean_object* v_res_1167_; 
v_res_1167_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___redArg(v_t_1160_, v_f_1161_, v_init_1162_, v___y_1163_, v___y_1164_, v___y_1165_);
lean_dec_ref(v___y_1164_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6(lean_object* v_00_u03b1_1168_, lean_object* v_00_u03c3_1169_, lean_object* v_t_1170_, lean_object* v_f_1171_, lean_object* v_init_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg(v_t_1170_, v_f_1171_, v_init_1172_, v___y_1173_, v___y_1174_, v___y_1175_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6___boxed(lean_object* v_00_u03b1_1178_, lean_object* v_00_u03c3_1179_, lean_object* v_t_1180_, lean_object* v_f_1181_, lean_object* v_init_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6(v_00_u03b1_1178_, v_00_u03c3_1179_, v_t_1180_, v_f_1181_, v_init_1182_, v___y_1183_, v___y_1184_, v___y_1185_);
lean_dec_ref(v___y_1184_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8___redArg(lean_object* v_map_1188_, lean_object* v_f_1189_, lean_object* v_init_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
lean_object* v___x_1195_; 
v___x_1195_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10___redArg(v_f_1189_, v_map_1188_, v_init_1190_, v___y_1191_, v___y_1192_, v___y_1193_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8___redArg___boxed(lean_object* v_map_1196_, lean_object* v_f_1197_, lean_object* v_init_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8___redArg(v_map_1196_, v_f_1197_, v_init_1198_, v___y_1199_, v___y_1200_, v___y_1201_);
lean_dec_ref(v___y_1200_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8(lean_object* v_00_u03c3_1204_, lean_object* v_00_u03b2_1205_, lean_object* v_map_1206_, lean_object* v_f_1207_, lean_object* v_init_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10___redArg(v_f_1207_, v_map_1206_, v_init_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8___boxed(lean_object* v_00_u03c3_1214_, lean_object* v_00_u03b2_1215_, lean_object* v_map_1216_, lean_object* v_f_1217_, lean_object* v_init_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8(v_00_u03c3_1214_, v_00_u03b2_1215_, v_map_1216_, v_f_1217_, v_init_1218_, v___y_1219_, v___y_1220_, v___y_1221_);
lean_dec_ref(v___y_1220_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7(lean_object* v_00_u03b1_1224_, lean_object* v_00_u03c3_1225_, lean_object* v_t_1226_, lean_object* v_f_1227_, lean_object* v_init_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_){
_start:
{
lean_object* v___x_1233_; 
v___x_1233_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___redArg(v_t_1226_, v_f_1227_, v_init_1228_, v___y_1229_, v___y_1230_, v___y_1231_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7___boxed(lean_object* v_00_u03b1_1234_, lean_object* v_00_u03c3_1235_, lean_object* v_t_1236_, lean_object* v_f_1237_, lean_object* v_init_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_){
_start:
{
lean_object* v_res_1243_; 
v_res_1243_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7(v_00_u03b1_1234_, v_00_u03c3_1235_, v_t_1236_, v_f_1237_, v_init_1238_, v___y_1239_, v___y_1240_, v___y_1241_);
lean_dec_ref(v___y_1240_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10(lean_object* v_00_u03c3_1244_, lean_object* v_00_u03b1_1245_, lean_object* v_00_u03b2_1246_, lean_object* v_f_1247_, lean_object* v_x_1248_, lean_object* v_x_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_){
_start:
{
lean_object* v___x_1254_; 
v___x_1254_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10___redArg(v_f_1247_, v_x_1248_, v_x_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
return v___x_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10___boxed(lean_object* v_00_u03c3_1255_, lean_object* v_00_u03b1_1256_, lean_object* v_00_u03b2_1257_, lean_object* v_f_1258_, lean_object* v_x_1259_, lean_object* v_x_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_){
_start:
{
lean_object* v_res_1265_; 
v_res_1265_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10(v_00_u03c3_1255_, v_00_u03b1_1256_, v_00_u03b2_1257_, v_f_1258_, v_x_1259_, v_x_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
lean_dec_ref(v___y_1262_);
return v_res_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9(lean_object* v_00_u03b1_1266_, lean_object* v_00_u03c3_1267_, lean_object* v_t_1268_, lean_object* v_f_1269_, lean_object* v_init_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
lean_object* v___x_1275_; 
v___x_1275_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___redArg(v_t_1268_, v_f_1269_, v_init_1270_, v___y_1271_, v___y_1272_, v___y_1273_);
return v___x_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9___boxed(lean_object* v_00_u03b1_1276_, lean_object* v_00_u03c3_1277_, lean_object* v_t_1278_, lean_object* v_f_1279_, lean_object* v_init_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_){
_start:
{
lean_object* v_res_1285_; 
v_res_1285_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9(v_00_u03b1_1276_, v_00_u03c3_1277_, v_t_1278_, v_f_1279_, v_init_1280_, v___y_1281_, v___y_1282_, v___y_1283_);
lean_dec_ref(v___y_1282_);
return v_res_1285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__10(lean_object* v_00_u03b1_1286_, lean_object* v_00_u03c3_1287_, lean_object* v_f_1288_, lean_object* v_as_1289_, size_t v_i_1290_, size_t v_stop_1291_, lean_object* v_b_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_){
_start:
{
lean_object* v___x_1297_; 
v___x_1297_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__10___redArg(v_f_1288_, v_as_1289_, v_i_1290_, v_stop_1291_, v_b_1292_, v___y_1293_, v___y_1294_, v___y_1295_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__10___boxed(lean_object* v_00_u03b1_1298_, lean_object* v_00_u03c3_1299_, lean_object* v_f_1300_, lean_object* v_as_1301_, lean_object* v_i_1302_, lean_object* v_stop_1303_, lean_object* v_b_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_){
_start:
{
size_t v_i_boxed_1309_; size_t v_stop_boxed_1310_; lean_object* v_res_1311_; 
v_i_boxed_1309_ = lean_unbox_usize(v_i_1302_);
lean_dec(v_i_1302_);
v_stop_boxed_1310_ = lean_unbox_usize(v_stop_1303_);
lean_dec(v_stop_1303_);
v_res_1311_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__10(v_00_u03b1_1298_, v_00_u03c3_1299_, v_f_1300_, v_as_1301_, v_i_boxed_1309_, v_stop_boxed_1310_, v_b_1304_, v___y_1305_, v___y_1306_, v___y_1307_);
lean_dec_ref(v___y_1306_);
lean_dec_ref(v_as_1301_);
return v_res_1311_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__13(lean_object* v_00_u03b1_1312_, lean_object* v_00_u03b2_1313_, lean_object* v_00_u03c3_1314_, lean_object* v_f_1315_, lean_object* v_as_1316_, size_t v_i_1317_, size_t v_stop_1318_, lean_object* v_b_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_){
_start:
{
lean_object* v___x_1324_; 
v___x_1324_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__13___redArg(v_f_1315_, v_as_1316_, v_i_1317_, v_stop_1318_, v_b_1319_, v___y_1320_, v___y_1321_, v___y_1322_);
return v___x_1324_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__13___boxed(lean_object* v_00_u03b1_1325_, lean_object* v_00_u03b2_1326_, lean_object* v_00_u03c3_1327_, lean_object* v_f_1328_, lean_object* v_as_1329_, lean_object* v_i_1330_, lean_object* v_stop_1331_, lean_object* v_b_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_){
_start:
{
size_t v_i_boxed_1337_; size_t v_stop_boxed_1338_; lean_object* v_res_1339_; 
v_i_boxed_1337_ = lean_unbox_usize(v_i_1330_);
lean_dec(v_i_1330_);
v_stop_boxed_1338_ = lean_unbox_usize(v_stop_1331_);
lean_dec(v_stop_1331_);
v_res_1339_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__13(v_00_u03b1_1325_, v_00_u03b2_1326_, v_00_u03c3_1327_, v_f_1328_, v_as_1329_, v_i_boxed_1337_, v_stop_boxed_1338_, v_b_1332_, v___y_1333_, v___y_1334_, v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec_ref(v_as_1329_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__14(lean_object* v_00_u03c3_1340_, lean_object* v_00_u03b1_1341_, lean_object* v_00_u03b2_1342_, lean_object* v_f_1343_, lean_object* v_keys_1344_, lean_object* v_vals_1345_, lean_object* v_heq_1346_, lean_object* v_i_1347_, lean_object* v_acc_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_){
_start:
{
lean_object* v___x_1353_; 
v___x_1353_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__14___redArg(v_f_1343_, v_keys_1344_, v_vals_1345_, v_i_1347_, v_acc_1348_, v___y_1349_, v___y_1350_, v___y_1351_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__14___boxed(lean_object* v_00_u03c3_1354_, lean_object* v_00_u03b1_1355_, lean_object* v_00_u03b2_1356_, lean_object* v_f_1357_, lean_object* v_keys_1358_, lean_object* v_vals_1359_, lean_object* v_heq_1360_, lean_object* v_i_1361_, lean_object* v_acc_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
lean_object* v_res_1367_; 
v_res_1367_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__6_spec__8_spec__10_spec__14(v_00_u03c3_1354_, v_00_u03b1_1355_, v_00_u03b2_1356_, v_f_1357_, v_keys_1358_, v_vals_1359_, v_heq_1360_, v_i_1361_, v_acc_1362_, v___y_1363_, v___y_1364_, v___y_1365_);
lean_dec_ref(v___y_1364_);
lean_dec_ref(v_vals_1359_);
lean_dec_ref(v_keys_1358_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9_spec__11(lean_object* v_00_u03b1_1368_, lean_object* v_00_u03c3_1369_, lean_object* v_f_1370_, lean_object* v_as_1371_, size_t v_i_1372_, size_t v_stop_1373_, lean_object* v_b_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
lean_object* v___x_1379_; 
v___x_1379_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9_spec__11___redArg(v_f_1370_, v_as_1371_, v_i_1372_, v_stop_1373_, v_b_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
return v___x_1379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9_spec__11___boxed(lean_object* v_00_u03b1_1380_, lean_object* v_00_u03c3_1381_, lean_object* v_f_1382_, lean_object* v_as_1383_, lean_object* v_i_1384_, lean_object* v_stop_1385_, lean_object* v_b_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
size_t v_i_boxed_1391_; size_t v_stop_boxed_1392_; lean_object* v_res_1393_; 
v_i_boxed_1391_ = lean_unbox_usize(v_i_1384_);
lean_dec(v_i_1384_);
v_stop_boxed_1392_ = lean_unbox_usize(v_stop_1385_);
lean_dec(v_stop_1385_);
v_res_1393_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_forM___at___00Lean_ConstMap_forM___at___00LeanExport_initState_spec__5_spec__5_spec__6_spec__7_spec__9_spec__11(v_00_u03b1_1380_, v_00_u03c3_1381_, v_f_1382_, v_as_1383_, v_i_boxed_1391_, v_stop_boxed_1392_, v_b_1386_, v___y_1387_, v___y_1388_, v___y_1389_);
lean_dec_ref(v___y_1388_);
lean_dec_ref(v_as_1383_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg(lean_object* v_inst_1395_, lean_object* v_inst_1396_, lean_object* v_x_1397_, lean_object* v_namespaced_1398_, lean_object* v_getM_1399_, lean_object* v_setM_1400_, lean_object* v_rec_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_){
_start:
{
lean_object* v___x_1405_; lean_object* v___x_1406_; 
lean_inc_ref(v_getM_1399_);
lean_inc_ref(v_a_1403_);
v___x_1405_ = lean_apply_1(v_getM_1399_, v_a_1403_);
lean_inc(v_x_1397_);
lean_inc_ref(v_inst_1395_);
lean_inc_ref(v_inst_1396_);
v___x_1406_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_1396_, v_inst_1395_, v___x_1405_, v_x_1397_);
lean_dec_ref(v___x_1405_);
if (lean_obj_tag(v___x_1406_) == 1)
{
lean_object* v_val_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1415_; 
lean_dec_ref(v_rec_1401_);
lean_dec_ref(v_setM_1400_);
lean_dec_ref(v_getM_1399_);
lean_dec_ref(v_namespaced_1398_);
lean_dec(v_x_1397_);
lean_dec_ref(v_inst_1396_);
lean_dec_ref(v_inst_1395_);
v_val_1407_ = lean_ctor_get(v___x_1406_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1406_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1409_ = v___x_1406_;
v_isShared_1410_ = v_isSharedCheck_1415_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_val_1407_);
lean_dec(v___x_1406_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1415_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1411_; lean_object* v___x_1413_; 
v___x_1411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1411_, 0, v_val_1407_);
lean_ctor_set(v___x_1411_, 1, v_a_1403_);
if (v_isShared_1410_ == 0)
{
lean_ctor_set_tag(v___x_1409_, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1411_);
v___x_1413_ = v___x_1409_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1411_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
else
{
lean_object* v___f_1416_; lean_object* v___x_1417_; 
lean_dec(v___x_1406_);
v___f_1416_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0));
lean_inc_ref(v_a_1402_);
v___x_1417_ = lean_apply_3(v_rec_1401_, v_a_1402_, v_a_1403_, lean_box(0));
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v_a_1418_; lean_object* v_fst_1419_; lean_object* v_snd_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1452_; 
v_a_1418_ = lean_ctor_get(v___x_1417_, 0);
lean_inc(v_a_1418_);
lean_dec_ref_known(v___x_1417_, 1);
v_fst_1419_ = lean_ctor_get(v_a_1418_, 0);
v_snd_1420_ = lean_ctor_get(v_a_1418_, 1);
v_isSharedCheck_1452_ = !lean_is_exclusive(v_a_1418_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1422_ = v_a_1418_;
v_isShared_1423_ = v_isSharedCheck_1452_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_snd_1420_);
lean_inc(v_fst_1419_);
lean_dec(v_a_1418_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1452_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1424_; lean_object* v_size_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
lean_inc(v_snd_1420_);
v___x_1424_ = lean_apply_1(v_getM_1399_, v_snd_1420_);
v_size_1425_ = lean_ctor_get(v___x_1424_, 0);
lean_inc_n(v_size_1425_, 2);
v___x_1426_ = l_Lean_JsonNumber_fromNat(v_size_1425_);
v___x_1427_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1427_, 0, v___x_1426_);
v___x_1428_ = l_Lean_Json_setObjVal_x21(v_fst_1419_, v_namespaced_1398_, v___x_1427_);
v___x_1429_ = l_Lean_Json_compress(v___x_1428_);
v___x_1430_ = l_IO_println___redArg(v___f_1416_, v___x_1429_);
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1442_; 
v_isSharedCheck_1442_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1442_ == 0)
{
lean_object* v_unused_1443_; 
v_unused_1443_ = lean_ctor_get(v___x_1430_, 0);
lean_dec(v_unused_1443_);
v___x_1432_ = v___x_1430_;
v_isShared_1433_ = v_isSharedCheck_1442_;
goto v_resetjp_1431_;
}
else
{
lean_dec(v___x_1430_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1442_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1437_; 
lean_inc(v_size_1425_);
v___x_1434_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_1396_, v_inst_1395_, v___x_1424_, v_x_1397_, v_size_1425_);
v___x_1435_ = lean_apply_2(v_setM_1400_, v_snd_1420_, v___x_1434_);
if (v_isShared_1423_ == 0)
{
lean_ctor_set(v___x_1422_, 1, v___x_1435_);
lean_ctor_set(v___x_1422_, 0, v_size_1425_);
v___x_1437_ = v___x_1422_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1441_; 
v_reuseFailAlloc_1441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1441_, 0, v_size_1425_);
lean_ctor_set(v_reuseFailAlloc_1441_, 1, v___x_1435_);
v___x_1437_ = v_reuseFailAlloc_1441_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
lean_object* v___x_1439_; 
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 0, v___x_1437_);
v___x_1439_ = v___x_1432_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v___x_1437_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
}
else
{
lean_object* v_a_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1451_; 
lean_dec(v_size_1425_);
lean_dec_ref(v___x_1424_);
lean_del_object(v___x_1422_);
lean_dec(v_snd_1420_);
lean_dec_ref(v_setM_1400_);
lean_dec(v_x_1397_);
lean_dec_ref(v_inst_1396_);
lean_dec_ref(v_inst_1395_);
v_a_1444_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1446_ = v___x_1430_;
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_a_1444_);
lean_dec(v___x_1430_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1449_; 
if (v_isShared_1447_ == 0)
{
v___x_1449_ = v___x_1446_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_a_1444_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
}
}
}
else
{
lean_object* v_a_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1460_; 
lean_dec_ref(v_setM_1400_);
lean_dec_ref(v_getM_1399_);
lean_dec_ref(v_namespaced_1398_);
lean_dec(v_x_1397_);
lean_dec_ref(v_inst_1396_);
lean_dec_ref(v_inst_1395_);
v_a_1453_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1455_ = v___x_1417_;
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_a_1453_);
lean_dec(v___x_1417_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1458_; 
if (v_isShared_1456_ == 0)
{
v___x_1458_ = v___x_1455_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_a_1453_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___boxed(lean_object* v_inst_1461_, lean_object* v_inst_1462_, lean_object* v_x_1463_, lean_object* v_namespaced_1464_, lean_object* v_getM_1465_, lean_object* v_setM_1466_, lean_object* v_rec_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg(v_inst_1461_, v_inst_1462_, v_x_1463_, v_namespaced_1464_, v_getM_1465_, v_setM_1466_, v_rec_1467_, v_a_1468_, v_a_1469_);
lean_dec_ref(v_a_1468_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx(lean_object* v_00_u03b1_1472_, lean_object* v_inst_1473_, lean_object* v_inst_1474_, lean_object* v_x_1475_, lean_object* v_namespaced_1476_, lean_object* v_getM_1477_, lean_object* v_setM_1478_, lean_object* v_rec_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_){
_start:
{
lean_object* v___x_1483_; lean_object* v___x_1484_; 
lean_inc_ref(v_getM_1477_);
lean_inc_ref(v_a_1481_);
v___x_1483_ = lean_apply_1(v_getM_1477_, v_a_1481_);
lean_inc(v_x_1475_);
lean_inc_ref(v_inst_1473_);
lean_inc_ref(v_inst_1474_);
v___x_1484_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_1474_, v_inst_1473_, v___x_1483_, v_x_1475_);
lean_dec_ref(v___x_1483_);
if (lean_obj_tag(v___x_1484_) == 1)
{
lean_object* v_val_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1493_; 
lean_dec_ref(v_rec_1479_);
lean_dec_ref(v_setM_1478_);
lean_dec_ref(v_getM_1477_);
lean_dec_ref(v_namespaced_1476_);
lean_dec(v_x_1475_);
lean_dec_ref(v_inst_1474_);
lean_dec_ref(v_inst_1473_);
v_val_1485_ = lean_ctor_get(v___x_1484_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1484_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1487_ = v___x_1484_;
v_isShared_1488_ = v_isSharedCheck_1493_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_val_1485_);
lean_dec(v___x_1484_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1493_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v___x_1489_; lean_object* v___x_1491_; 
v___x_1489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1489_, 0, v_val_1485_);
lean_ctor_set(v___x_1489_, 1, v_a_1481_);
if (v_isShared_1488_ == 0)
{
lean_ctor_set_tag(v___x_1487_, 0);
lean_ctor_set(v___x_1487_, 0, v___x_1489_);
v___x_1491_ = v___x_1487_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v___x_1489_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
else
{
lean_object* v___f_1494_; lean_object* v___x_1495_; 
lean_dec(v___x_1484_);
v___f_1494_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_getIdx___redArg___closed__0));
lean_inc_ref(v_a_1480_);
v___x_1495_ = lean_apply_3(v_rec_1479_, v_a_1480_, v_a_1481_, lean_box(0));
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v_a_1496_; lean_object* v_fst_1497_; lean_object* v_snd_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1530_; 
v_a_1496_ = lean_ctor_get(v___x_1495_, 0);
lean_inc(v_a_1496_);
lean_dec_ref_known(v___x_1495_, 1);
v_fst_1497_ = lean_ctor_get(v_a_1496_, 0);
v_snd_1498_ = lean_ctor_get(v_a_1496_, 1);
v_isSharedCheck_1530_ = !lean_is_exclusive(v_a_1496_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1500_ = v_a_1496_;
v_isShared_1501_ = v_isSharedCheck_1530_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_snd_1498_);
lean_inc(v_fst_1497_);
lean_dec(v_a_1496_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1530_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1502_; lean_object* v_size_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
lean_inc(v_snd_1498_);
v___x_1502_ = lean_apply_1(v_getM_1477_, v_snd_1498_);
v_size_1503_ = lean_ctor_get(v___x_1502_, 0);
lean_inc_n(v_size_1503_, 2);
v___x_1504_ = l_Lean_JsonNumber_fromNat(v_size_1503_);
v___x_1505_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1505_, 0, v___x_1504_);
v___x_1506_ = l_Lean_Json_setObjVal_x21(v_fst_1497_, v_namespaced_1476_, v___x_1505_);
v___x_1507_ = l_Lean_Json_compress(v___x_1506_);
v___x_1508_ = l_IO_println___redArg(v___f_1494_, v___x_1507_);
if (lean_obj_tag(v___x_1508_) == 0)
{
lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1520_; 
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1508_);
if (v_isSharedCheck_1520_ == 0)
{
lean_object* v_unused_1521_; 
v_unused_1521_ = lean_ctor_get(v___x_1508_, 0);
lean_dec(v_unused_1521_);
v___x_1510_ = v___x_1508_;
v_isShared_1511_ = v_isSharedCheck_1520_;
goto v_resetjp_1509_;
}
else
{
lean_dec(v___x_1508_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1520_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1515_; 
lean_inc(v_size_1503_);
v___x_1512_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_1474_, v_inst_1473_, v___x_1502_, v_x_1475_, v_size_1503_);
v___x_1513_ = lean_apply_2(v_setM_1478_, v_snd_1498_, v___x_1512_);
if (v_isShared_1501_ == 0)
{
lean_ctor_set(v___x_1500_, 1, v___x_1513_);
lean_ctor_set(v___x_1500_, 0, v_size_1503_);
v___x_1515_ = v___x_1500_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_size_1503_);
lean_ctor_set(v_reuseFailAlloc_1519_, 1, v___x_1513_);
v___x_1515_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
lean_object* v___x_1517_; 
if (v_isShared_1511_ == 0)
{
lean_ctor_set(v___x_1510_, 0, v___x_1515_);
v___x_1517_ = v___x_1510_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v___x_1515_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
}
}
else
{
lean_object* v_a_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1529_; 
lean_dec(v_size_1503_);
lean_dec_ref(v___x_1502_);
lean_del_object(v___x_1500_);
lean_dec(v_snd_1498_);
lean_dec_ref(v_setM_1478_);
lean_dec(v_x_1475_);
lean_dec_ref(v_inst_1474_);
lean_dec_ref(v_inst_1473_);
v_a_1522_ = lean_ctor_get(v___x_1508_, 0);
v_isSharedCheck_1529_ = !lean_is_exclusive(v___x_1508_);
if (v_isSharedCheck_1529_ == 0)
{
v___x_1524_ = v___x_1508_;
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_a_1522_);
lean_dec(v___x_1508_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1529_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1527_; 
if (v_isShared_1525_ == 0)
{
v___x_1527_ = v___x_1524_;
goto v_reusejp_1526_;
}
else
{
lean_object* v_reuseFailAlloc_1528_; 
v_reuseFailAlloc_1528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1528_, 0, v_a_1522_);
v___x_1527_ = v_reuseFailAlloc_1528_;
goto v_reusejp_1526_;
}
v_reusejp_1526_:
{
return v___x_1527_;
}
}
}
}
}
else
{
lean_object* v_a_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1538_; 
lean_dec_ref(v_setM_1478_);
lean_dec_ref(v_getM_1477_);
lean_dec_ref(v_namespaced_1476_);
lean_dec(v_x_1475_);
lean_dec_ref(v_inst_1474_);
lean_dec_ref(v_inst_1473_);
v_a_1531_ = lean_ctor_get(v___x_1495_, 0);
v_isSharedCheck_1538_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1538_ == 0)
{
v___x_1533_ = v___x_1495_;
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_a_1531_);
lean_dec(v___x_1495_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1538_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v___x_1536_; 
if (v_isShared_1534_ == 0)
{
v___x_1536_ = v___x_1533_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v_a_1531_);
v___x_1536_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
return v___x_1536_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_getIdx___boxed(lean_object* v_00_u03b1_1539_, lean_object* v_inst_1540_, lean_object* v_inst_1541_, lean_object* v_x_1542_, lean_object* v_namespaced_1543_, lean_object* v_getM_1544_, lean_object* v_setM_1545_, lean_object* v_rec_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l___private_LeanExport_Basic_0__LeanExport_getIdx(v_00_u03b1_1539_, v_inst_1540_, v_inst_1541_, v_x_1542_, v_namespaced_1543_, v_getM_1544_, v_setM_1545_, v_rec_1546_, v_a_1547_, v_a_1548_);
lean_dec_ref(v_a_1547_);
return v_res_1550_;
}
}
static lean_object* _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1551_; 
v___x_1551_ = l_instMonadEIO___redArg();
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(lean_object* v_msg_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_){
_start:
{
lean_object* v___x_1556_; lean_object* v___f_1557_; lean_object* v___f_1558_; lean_object* v___f_1559_; lean_object* v___f_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___f_1569_; lean_object* v___x_1423__overap_1570_; lean_object* v___x_1571_; 
v___x_1556_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_1557_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1557_, 0, v___x_1556_);
v___f_1558_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1558_, 0, v___x_1556_);
v___f_1559_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_1559_, 0, v___x_1556_);
v___f_1560_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_1560_, 0, v___x_1556_);
v___x_1561_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_1561_, 0, lean_box(0));
lean_closure_set(v___x_1561_, 1, lean_box(0));
lean_closure_set(v___x_1561_, 2, v___x_1556_);
v___x_1562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1561_);
lean_ctor_set(v___x_1562_, 1, v___f_1557_);
v___x_1563_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_1563_, 0, lean_box(0));
lean_closure_set(v___x_1563_, 1, lean_box(0));
lean_closure_set(v___x_1563_, 2, v___x_1556_);
v___x_1564_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1562_);
lean_ctor_set(v___x_1564_, 1, v___x_1563_);
lean_ctor_set(v___x_1564_, 2, v___f_1558_);
lean_ctor_set(v___x_1564_, 3, v___f_1559_);
lean_ctor_set(v___x_1564_, 4, v___f_1560_);
v___x_1565_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_1565_, 0, lean_box(0));
lean_closure_set(v___x_1565_, 1, lean_box(0));
lean_closure_set(v___x_1565_, 2, v___x_1556_);
v___x_1566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1564_);
lean_ctor_set(v___x_1566_, 1, v___x_1565_);
v___x_1567_ = lean_box(0);
v___x_1568_ = l_instInhabitedOfMonad___redArg(v___x_1566_, v___x_1567_);
v___f_1569_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1569_, 0, v___x_1568_);
v___x_1423__overap_1570_ = lean_panic_fn_borrowed(v___f_1569_, v_msg_1552_);
lean_dec_ref(v___f_1569_);
lean_inc_ref(v___y_1553_);
v___x_1571_ = lean_apply_3(v___x_1423__overap_1570_, v___y_1553_, v___y_1554_, lean_box(0));
return v___x_1571_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___boxed(lean_object* v_msg_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v_msg_1572_, v___y_1573_, v___y_1574_);
lean_dec_ref(v___y_1573_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(lean_object* v_a_1577_, lean_object* v_x_1578_){
_start:
{
if (lean_obj_tag(v_x_1578_) == 0)
{
lean_object* v___x_1579_; 
v___x_1579_ = lean_box(0);
return v___x_1579_;
}
else
{
lean_object* v_key_1580_; lean_object* v_value_1581_; lean_object* v_tail_1582_; uint8_t v___x_1583_; 
v_key_1580_ = lean_ctor_get(v_x_1578_, 0);
v_value_1581_ = lean_ctor_get(v_x_1578_, 1);
v_tail_1582_ = lean_ctor_get(v_x_1578_, 2);
v___x_1583_ = lean_name_eq(v_key_1580_, v_a_1577_);
if (v___x_1583_ == 0)
{
v_x_1578_ = v_tail_1582_;
goto _start;
}
else
{
lean_object* v___x_1585_; 
lean_inc(v_value_1581_);
v___x_1585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1585_, 0, v_value_1581_);
return v___x_1585_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg___boxed(lean_object* v_a_1586_, lean_object* v_x_1587_){
_start:
{
lean_object* v_res_1588_; 
v_res_1588_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(v_a_1586_, v_x_1587_);
lean_dec(v_x_1587_);
lean_dec(v_a_1586_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(lean_object* v_m_1589_, lean_object* v_a_1590_){
_start:
{
lean_object* v_buckets_1591_; lean_object* v___x_1592_; uint64_t v___y_1594_; 
v_buckets_1591_ = lean_ctor_get(v_m_1589_, 1);
v___x_1592_ = lean_array_get_size(v_buckets_1591_);
if (lean_obj_tag(v_a_1590_) == 0)
{
uint64_t v___x_1608_; 
v___x_1608_ = 1723ULL;
v___y_1594_ = v___x_1608_;
goto v___jp_1593_;
}
else
{
uint64_t v_hash_1609_; 
v_hash_1609_ = lean_ctor_get_uint64(v_a_1590_, sizeof(void*)*2);
v___y_1594_ = v_hash_1609_;
goto v___jp_1593_;
}
v___jp_1593_:
{
uint64_t v___x_1595_; uint64_t v___x_1596_; uint64_t v_fold_1597_; uint64_t v___x_1598_; uint64_t v___x_1599_; uint64_t v___x_1600_; size_t v___x_1601_; size_t v___x_1602_; size_t v___x_1603_; size_t v___x_1604_; size_t v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1595_ = 32ULL;
v___x_1596_ = lean_uint64_shift_right(v___y_1594_, v___x_1595_);
v_fold_1597_ = lean_uint64_xor(v___y_1594_, v___x_1596_);
v___x_1598_ = 16ULL;
v___x_1599_ = lean_uint64_shift_right(v_fold_1597_, v___x_1598_);
v___x_1600_ = lean_uint64_xor(v_fold_1597_, v___x_1599_);
v___x_1601_ = lean_uint64_to_usize(v___x_1600_);
v___x_1602_ = lean_usize_of_nat(v___x_1592_);
v___x_1603_ = ((size_t)1ULL);
v___x_1604_ = lean_usize_sub(v___x_1602_, v___x_1603_);
v___x_1605_ = lean_usize_land(v___x_1601_, v___x_1604_);
v___x_1606_ = lean_array_uget_borrowed(v_buckets_1591_, v___x_1605_);
v___x_1607_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(v_a_1590_, v___x_1606_);
return v___x_1607_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg___boxed(lean_object* v_m_1610_, lean_object* v_a_1611_){
_start:
{
lean_object* v_res_1612_; 
v_res_1612_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(v_m_1610_, v_a_1611_);
lean_dec(v_a_1611_);
lean_dec_ref(v_m_1610_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(lean_object* v_s_1613_){
_start:
{
lean_object* v___x_1615_; lean_object* v_putStr_1616_; lean_object* v___x_1617_; 
v___x_1615_ = lean_get_stdout();
v_putStr_1616_ = lean_ctor_get(v___x_1615_, 4);
lean_inc_ref(v_putStr_1616_);
lean_dec_ref(v___x_1615_);
v___x_1617_ = lean_apply_2(v_putStr_1616_, v_s_1613_, lean_box(0));
return v___x_1617_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2___boxed(lean_object* v_s_1618_, lean_object* v_a_1619_){
_start:
{
lean_object* v_res_1620_; 
v_res_1620_ = l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(v_s_1618_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(lean_object* v_s_1621_){
_start:
{
uint32_t v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; 
v___x_1623_ = 10;
v___x_1624_ = lean_string_push(v_s_1621_, v___x_1623_);
v___x_1625_ = l_IO_print___at___00IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1_spec__2(v___x_1624_);
return v___x_1625_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1___boxed(lean_object* v_s_1626_, lean_object* v_a_1627_){
_start:
{
lean_object* v_res_1628_; 
v_res_1628_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v_s_1626_);
return v_res_1628_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4(void){
_start:
{
lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1633_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3));
v___x_1634_ = lean_unsigned_to_nat(18u);
v___x_1635_ = lean_unsigned_to_nat(114u);
v___x_1636_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__2));
v___x_1637_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_1638_ = l_mkPanicMessageWithDecl(v___x_1637_, v___x_1636_, v___x_1635_, v___x_1634_, v___x_1633_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName(lean_object* v_n_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_){
_start:
{
lean_object* v_visitedNames_1647_; lean_object* v___x_1648_; 
v_visitedNames_1647_ = lean_ctor_get(v_a_1645_, 0);
v___x_1648_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(v_visitedNames_1647_, v_n_1643_);
if (lean_obj_tag(v___x_1648_) == 1)
{
lean_object* v_val_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1657_; 
lean_dec(v_n_1643_);
v_val_1649_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1657_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1657_ == 0)
{
v___x_1651_ = v___x_1648_;
v_isShared_1652_ = v_isSharedCheck_1657_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_val_1649_);
lean_dec(v___x_1648_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1657_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1653_; lean_object* v___x_1655_; 
v___x_1653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1653_, 0, v_val_1649_);
lean_ctor_set(v___x_1653_, 1, v_a_1645_);
if (v_isShared_1652_ == 0)
{
lean_ctor_set_tag(v___x_1651_, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1653_);
v___x_1655_ = v___x_1651_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v___x_1653_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
return v___x_1655_;
}
}
}
else
{
lean_object* v___x_1658_; lean_object* v_fst_1660_; lean_object* v_snd_1661_; 
lean_dec(v___x_1648_);
v___x_1658_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__0));
switch(lean_obj_tag(v_n_1643_))
{
case 0:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; 
v___x_1702_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4, &l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4_once, _init_l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__4);
v___x_1703_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v___x_1702_, v_a_1644_, v_a_1645_);
if (lean_obj_tag(v___x_1703_) == 0)
{
lean_object* v_a_1704_; lean_object* v_fst_1705_; lean_object* v_snd_1706_; 
v_a_1704_ = lean_ctor_get(v___x_1703_, 0);
lean_inc(v_a_1704_);
lean_dec_ref_known(v___x_1703_, 1);
v_fst_1705_ = lean_ctor_get(v_a_1704_, 0);
lean_inc(v_fst_1705_);
v_snd_1706_ = lean_ctor_get(v_a_1704_, 1);
lean_inc(v_snd_1706_);
lean_dec(v_a_1704_);
v_fst_1660_ = v_fst_1705_;
v_snd_1661_ = v_snd_1706_;
goto v___jp_1659_;
}
else
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1714_; 
v_a_1707_ = lean_ctor_get(v___x_1703_, 0);
v_isSharedCheck_1714_ = !lean_is_exclusive(v___x_1703_);
if (v_isSharedCheck_1714_ == 0)
{
v___x_1709_ = v___x_1703_;
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1703_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1714_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1712_; 
if (v_isShared_1710_ == 0)
{
v___x_1712_ = v___x_1709_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v_a_1707_);
v___x_1712_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
return v___x_1712_;
}
}
}
}
case 1:
{
lean_object* v_pre_1715_; lean_object* v_str_1716_; lean_object* v___x_1717_; 
v_pre_1715_ = lean_ctor_get(v_n_1643_, 0);
v_str_1716_ = lean_ctor_get(v_n_1643_, 1);
lean_inc(v_pre_1715_);
v___x_1717_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_pre_1715_, v_a_1644_, v_a_1645_);
if (lean_obj_tag(v___x_1717_) == 0)
{
lean_object* v_a_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1746_; 
v_a_1718_ = lean_ctor_get(v___x_1717_, 0);
v_isSharedCheck_1746_ = !lean_is_exclusive(v___x_1717_);
if (v_isSharedCheck_1746_ == 0)
{
v___x_1720_ = v___x_1717_;
v_isShared_1721_ = v_isSharedCheck_1746_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_a_1718_);
lean_dec(v___x_1717_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1746_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v_fst_1722_; lean_object* v_snd_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1745_; 
v_fst_1722_ = lean_ctor_get(v_a_1718_, 0);
v_snd_1723_ = lean_ctor_get(v_a_1718_, 1);
v_isSharedCheck_1745_ = !lean_is_exclusive(v_a_1718_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1725_ = v_a_1718_;
v_isShared_1726_ = v_isSharedCheck_1745_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_snd_1723_);
lean_inc(v_fst_1722_);
lean_dec(v_a_1718_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1745_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1731_; 
v___x_1727_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__5));
v___x_1728_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6));
v___x_1729_ = l_Lean_JsonNumber_fromNat(v_fst_1722_);
if (v_isShared_1721_ == 0)
{
lean_ctor_set_tag(v___x_1720_, 2);
lean_ctor_set(v___x_1720_, 0, v___x_1729_);
v___x_1731_ = v___x_1720_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v___x_1729_);
v___x_1731_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
lean_object* v___x_1733_; 
if (v_isShared_1726_ == 0)
{
lean_ctor_set(v___x_1725_, 1, v___x_1731_);
lean_ctor_set(v___x_1725_, 0, v___x_1728_);
v___x_1733_ = v___x_1725_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v___x_1728_);
lean_ctor_set(v_reuseFailAlloc_1743_, 1, v___x_1731_);
v___x_1733_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; 
lean_inc_ref(v_str_1716_);
v___x_1734_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1734_, 0, v_str_1716_);
v___x_1735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1727_);
lean_ctor_set(v___x_1735_, 1, v___x_1734_);
v___x_1736_ = lean_box(0);
v___x_1737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1737_, 0, v___x_1735_);
lean_ctor_set(v___x_1737_, 1, v___x_1736_);
v___x_1738_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1733_);
lean_ctor_set(v___x_1738_, 1, v___x_1737_);
v___x_1739_ = l_Lean_Json_mkObj(v___x_1738_);
lean_dec_ref_known(v___x_1738_, 2);
v___x_1740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1740_, 0, v___x_1727_);
lean_ctor_set(v___x_1740_, 1, v___x_1739_);
v___x_1741_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1740_);
lean_ctor_set(v___x_1741_, 1, v___x_1736_);
v___x_1742_ = l_Lean_Json_mkObj(v___x_1741_);
lean_dec_ref_known(v___x_1741_, 2);
v_fst_1660_ = v___x_1742_;
v_snd_1661_ = v_snd_1723_;
goto v___jp_1659_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_n_1643_, 2);
return v___x_1717_;
}
}
default: 
{
lean_object* v_pre_1747_; lean_object* v_i_1748_; lean_object* v___x_1749_; 
v_pre_1747_ = lean_ctor_get(v_n_1643_, 0);
v_i_1748_ = lean_ctor_get(v_n_1643_, 1);
lean_inc(v_pre_1747_);
v___x_1749_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_pre_1747_, v_a_1644_, v_a_1645_);
if (lean_obj_tag(v___x_1749_) == 0)
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1780_; 
v_a_1750_ = lean_ctor_get(v___x_1749_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1749_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1752_ = v___x_1749_;
v_isShared_1753_ = v_isSharedCheck_1780_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1749_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1780_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v_fst_1754_; lean_object* v_snd_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1779_; 
v_fst_1754_ = lean_ctor_get(v_a_1750_, 0);
v_snd_1755_ = lean_ctor_get(v_a_1750_, 1);
v_isSharedCheck_1779_ = !lean_is_exclusive(v_a_1750_);
if (v_isSharedCheck_1779_ == 0)
{
v___x_1757_ = v_a_1750_;
v_isShared_1758_ = v_isSharedCheck_1779_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_snd_1755_);
lean_inc(v_fst_1754_);
lean_dec(v_a_1750_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1779_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1763_; 
v___x_1759_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__7));
v___x_1760_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__6));
v___x_1761_ = l_Lean_JsonNumber_fromNat(v_fst_1754_);
if (v_isShared_1753_ == 0)
{
lean_ctor_set_tag(v___x_1752_, 2);
lean_ctor_set(v___x_1752_, 0, v___x_1761_);
v___x_1763_ = v___x_1752_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v___x_1761_);
v___x_1763_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
lean_object* v___x_1765_; 
if (v_isShared_1758_ == 0)
{
lean_ctor_set(v___x_1757_, 1, v___x_1763_);
lean_ctor_set(v___x_1757_, 0, v___x_1760_);
v___x_1765_ = v___x_1757_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v___x_1760_);
lean_ctor_set(v_reuseFailAlloc_1777_, 1, v___x_1763_);
v___x_1765_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1766_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__8));
lean_inc(v_i_1748_);
v___x_1767_ = l_Lean_JsonNumber_fromNat(v_i_1748_);
v___x_1768_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1767_);
v___x_1769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1766_);
lean_ctor_set(v___x_1769_, 1, v___x_1768_);
v___x_1770_ = lean_box(0);
v___x_1771_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1769_);
lean_ctor_set(v___x_1771_, 1, v___x_1770_);
v___x_1772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1765_);
lean_ctor_set(v___x_1772_, 1, v___x_1771_);
v___x_1773_ = l_Lean_Json_mkObj(v___x_1772_);
lean_dec_ref_known(v___x_1772_, 2);
v___x_1774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1774_, 0, v___x_1759_);
lean_ctor_set(v___x_1774_, 1, v___x_1773_);
v___x_1775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1775_, 0, v___x_1774_);
lean_ctor_set(v___x_1775_, 1, v___x_1770_);
v___x_1776_ = l_Lean_Json_mkObj(v___x_1775_);
lean_dec_ref_known(v___x_1775_, 2);
v_fst_1660_ = v___x_1776_;
v_snd_1661_ = v_snd_1755_;
goto v___jp_1659_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_n_1643_, 2);
return v___x_1749_;
}
}
}
v___jp_1659_:
{
lean_object* v_visitedNames_1662_; lean_object* v_visitedLevels_1663_; lean_object* v_visitedExprs_1664_; lean_object* v_visitedConstants_1665_; lean_object* v_noMDataExprs_1666_; uint8_t v_exportMData_1667_; uint8_t v_exportUnsafe_1668_; uint8_t v_ignoreMissing_1669_; lean_object* v_recursorMap_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1701_; 
v_visitedNames_1662_ = lean_ctor_get(v_snd_1661_, 0);
v_visitedLevels_1663_ = lean_ctor_get(v_snd_1661_, 1);
v_visitedExprs_1664_ = lean_ctor_get(v_snd_1661_, 2);
v_visitedConstants_1665_ = lean_ctor_get(v_snd_1661_, 3);
v_noMDataExprs_1666_ = lean_ctor_get(v_snd_1661_, 4);
v_exportMData_1667_ = lean_ctor_get_uint8(v_snd_1661_, sizeof(void*)*6);
v_exportUnsafe_1668_ = lean_ctor_get_uint8(v_snd_1661_, sizeof(void*)*6 + 1);
v_ignoreMissing_1669_ = lean_ctor_get_uint8(v_snd_1661_, sizeof(void*)*6 + 2);
v_recursorMap_1670_ = lean_ctor_get(v_snd_1661_, 5);
v_isSharedCheck_1701_ = !lean_is_exclusive(v_snd_1661_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1672_ = v_snd_1661_;
v_isShared_1673_ = v_isSharedCheck_1701_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_recursorMap_1670_);
lean_inc(v_noMDataExprs_1666_);
lean_inc(v_visitedConstants_1665_);
lean_inc(v_visitedExprs_1664_);
lean_inc(v_visitedLevels_1663_);
lean_inc(v_visitedNames_1662_);
lean_dec(v_snd_1661_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1701_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v_size_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; 
v_size_1674_ = lean_ctor_get(v_visitedNames_1662_, 0);
lean_inc_n(v_size_1674_, 2);
v___x_1675_ = l_Lean_JsonNumber_fromNat(v_size_1674_);
v___x_1676_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1676_, 0, v___x_1675_);
v___x_1677_ = l_Lean_Json_setObjVal_x21(v_fst_1660_, v___x_1658_, v___x_1676_);
v___x_1678_ = l_Lean_Json_compress(v___x_1677_);
v___x_1679_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_1678_);
if (lean_obj_tag(v___x_1679_) == 0)
{
lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1691_; 
v_isSharedCheck_1691_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1691_ == 0)
{
lean_object* v_unused_1692_; 
v_unused_1692_ = lean_ctor_get(v___x_1679_, 0);
lean_dec(v_unused_1692_);
v___x_1681_ = v___x_1679_;
v_isShared_1682_ = v_isSharedCheck_1691_;
goto v_resetjp_1680_;
}
else
{
lean_dec(v___x_1679_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1691_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1683_; lean_object* v___x_1685_; 
lean_inc(v_size_1674_);
v___x_1683_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__0___redArg(v_visitedNames_1662_, v_n_1643_, v_size_1674_);
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 0, v___x_1683_);
v___x_1685_ = v___x_1672_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v___x_1683_);
lean_ctor_set(v_reuseFailAlloc_1690_, 1, v_visitedLevels_1663_);
lean_ctor_set(v_reuseFailAlloc_1690_, 2, v_visitedExprs_1664_);
lean_ctor_set(v_reuseFailAlloc_1690_, 3, v_visitedConstants_1665_);
lean_ctor_set(v_reuseFailAlloc_1690_, 4, v_noMDataExprs_1666_);
lean_ctor_set(v_reuseFailAlloc_1690_, 5, v_recursorMap_1670_);
lean_ctor_set_uint8(v_reuseFailAlloc_1690_, sizeof(void*)*6, v_exportMData_1667_);
lean_ctor_set_uint8(v_reuseFailAlloc_1690_, sizeof(void*)*6 + 1, v_exportUnsafe_1668_);
lean_ctor_set_uint8(v_reuseFailAlloc_1690_, sizeof(void*)*6 + 2, v_ignoreMissing_1669_);
v___x_1685_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
lean_object* v___x_1686_; lean_object* v___x_1688_; 
v___x_1686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1686_, 0, v_size_1674_);
lean_ctor_set(v___x_1686_, 1, v___x_1685_);
if (v_isShared_1682_ == 0)
{
lean_ctor_set(v___x_1681_, 0, v___x_1686_);
v___x_1688_ = v___x_1681_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v___x_1686_);
v___x_1688_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
return v___x_1688_;
}
}
}
}
else
{
lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1700_; 
lean_dec(v_size_1674_);
lean_del_object(v___x_1672_);
lean_dec(v_recursorMap_1670_);
lean_dec_ref(v_noMDataExprs_1666_);
lean_dec_ref(v_visitedConstants_1665_);
lean_dec_ref(v_visitedExprs_1664_);
lean_dec_ref(v_visitedLevels_1663_);
lean_dec_ref(v_visitedNames_1662_);
lean_dec(v_n_1643_);
v_a_1693_ = lean_ctor_get(v___x_1679_, 0);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1695_ = v___x_1679_;
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v___x_1679_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1698_; 
if (v_isShared_1696_ == 0)
{
v___x_1698_ = v___x_1695_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_a_1693_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpName___boxed(lean_object* v_n_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_){
_start:
{
lean_object* v_res_1785_; 
v_res_1785_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_n_1781_, v_a_1782_, v_a_1783_);
lean_dec_ref(v_a_1782_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0(lean_object* v_00_u03b2_1786_, lean_object* v_m_1787_, lean_object* v_a_1788_){
_start:
{
lean_object* v___x_1789_; 
v___x_1789_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___redArg(v_m_1787_, v_a_1788_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0___boxed(lean_object* v_00_u03b2_1790_, lean_object* v_m_1791_, lean_object* v_a_1792_){
_start:
{
lean_object* v_res_1793_; 
v_res_1793_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0(v_00_u03b2_1790_, v_m_1791_, v_a_1792_);
lean_dec(v_a_1792_);
lean_dec_ref(v_m_1791_);
return v_res_1793_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0(lean_object* v_00_u03b2_1794_, lean_object* v_a_1795_, lean_object* v_x_1796_){
_start:
{
lean_object* v___x_1797_; 
v___x_1797_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___redArg(v_a_1795_, v_x_1796_);
return v___x_1797_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1798_, lean_object* v_a_1799_, lean_object* v_x_1800_){
_start:
{
lean_object* v_res_1801_; 
v_res_1801_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__0_spec__0(v_00_u03b2_1798_, v_a_1799_, v_x_1800_);
lean_dec(v_x_1800_);
lean_dec(v_a_1799_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(lean_object* v_a_1802_, lean_object* v_x_1803_){
_start:
{
if (lean_obj_tag(v_x_1803_) == 0)
{
lean_object* v___x_1804_; 
v___x_1804_ = lean_box(0);
return v___x_1804_;
}
else
{
lean_object* v_key_1805_; lean_object* v_value_1806_; lean_object* v_tail_1807_; uint8_t v___x_1808_; 
v_key_1805_ = lean_ctor_get(v_x_1803_, 0);
v_value_1806_ = lean_ctor_get(v_x_1803_, 1);
v_tail_1807_ = lean_ctor_get(v_x_1803_, 2);
v___x_1808_ = lean_level_eq(v_key_1805_, v_a_1802_);
if (v___x_1808_ == 0)
{
v_x_1803_ = v_tail_1807_;
goto _start;
}
else
{
lean_object* v___x_1810_; 
lean_inc(v_value_1806_);
v___x_1810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1810_, 0, v_value_1806_);
return v___x_1810_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg___boxed(lean_object* v_a_1811_, lean_object* v_x_1812_){
_start:
{
lean_object* v_res_1813_; 
v_res_1813_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(v_a_1811_, v_x_1812_);
lean_dec(v_x_1812_);
lean_dec(v_a_1811_);
return v_res_1813_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(lean_object* v_m_1814_, lean_object* v_a_1815_){
_start:
{
lean_object* v_buckets_1816_; lean_object* v___x_1817_; uint64_t v___x_1818_; uint64_t v___x_1819_; uint64_t v___x_1820_; uint64_t v_fold_1821_; uint64_t v___x_1822_; uint64_t v___x_1823_; uint64_t v___x_1824_; size_t v___x_1825_; size_t v___x_1826_; size_t v___x_1827_; size_t v___x_1828_; size_t v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v_buckets_1816_ = lean_ctor_get(v_m_1814_, 1);
v___x_1817_ = lean_array_get_size(v_buckets_1816_);
v___x_1818_ = l_Lean_Level_hash(v_a_1815_);
v___x_1819_ = 32ULL;
v___x_1820_ = lean_uint64_shift_right(v___x_1818_, v___x_1819_);
v_fold_1821_ = lean_uint64_xor(v___x_1818_, v___x_1820_);
v___x_1822_ = 16ULL;
v___x_1823_ = lean_uint64_shift_right(v_fold_1821_, v___x_1822_);
v___x_1824_ = lean_uint64_xor(v_fold_1821_, v___x_1823_);
v___x_1825_ = lean_uint64_to_usize(v___x_1824_);
v___x_1826_ = lean_usize_of_nat(v___x_1817_);
v___x_1827_ = ((size_t)1ULL);
v___x_1828_ = lean_usize_sub(v___x_1826_, v___x_1827_);
v___x_1829_ = lean_usize_land(v___x_1825_, v___x_1828_);
v___x_1830_ = lean_array_uget_borrowed(v_buckets_1816_, v___x_1829_);
v___x_1831_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(v_a_1815_, v___x_1830_);
return v___x_1831_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg___boxed(lean_object* v_m_1832_, lean_object* v_a_1833_){
_start:
{
lean_object* v_res_1834_; 
v_res_1834_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(v_m_1832_, v_a_1833_);
lean_dec(v_a_1833_);
lean_dec_ref(v_m_1832_);
return v_res_1834_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6(void){
_start:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1841_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3));
v___x_1842_ = lean_unsigned_to_nat(23u);
v___x_1843_ = lean_unsigned_to_nat(132u);
v___x_1844_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__5));
v___x_1845_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_1846_ = l_mkPanicMessageWithDecl(v___x_1845_, v___x_1844_, v___x_1843_, v___x_1842_, v___x_1841_);
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel(lean_object* v_l_1847_, lean_object* v_a_1848_, lean_object* v_a_1849_){
_start:
{
lean_object* v_visitedLevels_1851_; lean_object* v___x_1852_; 
v_visitedLevels_1851_ = lean_ctor_get(v_a_1849_, 1);
v___x_1852_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(v_visitedLevels_1851_, v_l_1847_);
if (lean_obj_tag(v___x_1852_) == 1)
{
lean_object* v_val_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1861_; 
lean_dec(v_l_1847_);
v_val_1853_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1855_ = v___x_1852_;
v_isShared_1856_ = v_isSharedCheck_1861_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_val_1853_);
lean_dec(v___x_1852_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1861_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1857_; lean_object* v___x_1859_; 
v___x_1857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1857_, 0, v_val_1853_);
lean_ctor_set(v___x_1857_, 1, v_a_1849_);
if (v_isShared_1856_ == 0)
{
lean_ctor_set_tag(v___x_1855_, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1857_);
v___x_1859_ = v___x_1855_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v___x_1857_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
else
{
lean_object* v___x_1862_; lean_object* v_fst_1864_; lean_object* v_snd_1865_; 
lean_dec(v___x_1852_);
v___x_1862_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__0));
switch(lean_obj_tag(v_l_1847_))
{
case 1:
{
lean_object* v_a_1906_; lean_object* v___x_1907_; 
v_a_1906_ = lean_ctor_get(v_l_1847_, 0);
lean_inc(v_a_1906_);
v___x_1907_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1906_, v_a_1848_, v_a_1849_);
if (lean_obj_tag(v___x_1907_) == 0)
{
lean_object* v_a_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1929_; 
v_a_1908_ = lean_ctor_get(v___x_1907_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1910_ = v___x_1907_;
v_isShared_1911_ = v_isSharedCheck_1929_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_a_1908_);
lean_dec(v___x_1907_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1929_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v_fst_1912_; lean_object* v_snd_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1928_; 
v_fst_1912_ = lean_ctor_get(v_a_1908_, 0);
v_snd_1913_ = lean_ctor_get(v_a_1908_, 1);
v_isSharedCheck_1928_ = !lean_is_exclusive(v_a_1908_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1915_ = v_a_1908_;
v_isShared_1916_ = v_isSharedCheck_1928_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_snd_1913_);
lean_inc(v_fst_1912_);
lean_dec(v_a_1908_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1928_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1920_; 
v___x_1917_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__1));
v___x_1918_ = l_Lean_JsonNumber_fromNat(v_fst_1912_);
if (v_isShared_1911_ == 0)
{
lean_ctor_set_tag(v___x_1910_, 2);
lean_ctor_set(v___x_1910_, 0, v___x_1918_);
v___x_1920_ = v___x_1910_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v___x_1918_);
v___x_1920_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
lean_object* v___x_1922_; 
if (v_isShared_1916_ == 0)
{
lean_ctor_set(v___x_1915_, 1, v___x_1920_);
lean_ctor_set(v___x_1915_, 0, v___x_1917_);
v___x_1922_ = v___x_1915_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v___x_1917_);
lean_ctor_set(v_reuseFailAlloc_1926_, 1, v___x_1920_);
v___x_1922_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; 
v___x_1923_ = lean_box(0);
v___x_1924_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1922_);
lean_ctor_set(v___x_1924_, 1, v___x_1923_);
v___x_1925_ = l_Lean_Json_mkObj(v___x_1924_);
lean_dec_ref_known(v___x_1924_, 2);
v_fst_1864_ = v___x_1925_;
v_snd_1865_ = v_snd_1913_;
goto v___jp_1863_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_l_1847_, 1);
return v___x_1907_;
}
}
case 2:
{
lean_object* v_a_1930_; lean_object* v_a_1931_; lean_object* v___x_1932_; 
v_a_1930_ = lean_ctor_get(v_l_1847_, 0);
v_a_1931_ = lean_ctor_get(v_l_1847_, 1);
lean_inc(v_a_1930_);
v___x_1932_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1930_, v_a_1848_, v_a_1849_);
if (lean_obj_tag(v___x_1932_) == 0)
{
lean_object* v_a_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1977_; 
v_a_1933_ = lean_ctor_get(v___x_1932_, 0);
v_isSharedCheck_1977_ = !lean_is_exclusive(v___x_1932_);
if (v_isSharedCheck_1977_ == 0)
{
v___x_1935_ = v___x_1932_;
v_isShared_1936_ = v_isSharedCheck_1977_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_a_1933_);
lean_dec(v___x_1932_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1977_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v_fst_1937_; lean_object* v_snd_1938_; lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1976_; 
v_fst_1937_ = lean_ctor_get(v_a_1933_, 0);
v_snd_1938_ = lean_ctor_get(v_a_1933_, 1);
v_isSharedCheck_1976_ = !lean_is_exclusive(v_a_1933_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1940_ = v_a_1933_;
v_isShared_1941_ = v_isSharedCheck_1976_;
goto v_resetjp_1939_;
}
else
{
lean_inc(v_snd_1938_);
lean_inc(v_fst_1937_);
lean_dec(v_a_1933_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1976_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v___x_1942_; 
lean_inc(v_a_1931_);
v___x_1942_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1931_, v_a_1848_, v_snd_1938_);
if (lean_obj_tag(v___x_1942_) == 0)
{
lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1975_; 
v_a_1943_ = lean_ctor_get(v___x_1942_, 0);
v_isSharedCheck_1975_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_1975_ == 0)
{
v___x_1945_ = v___x_1942_;
v_isShared_1946_ = v_isSharedCheck_1975_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v___x_1942_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1975_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v_fst_1947_; lean_object* v_snd_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1974_; 
v_fst_1947_ = lean_ctor_get(v_a_1943_, 0);
v_snd_1948_ = lean_ctor_get(v_a_1943_, 1);
v_isSharedCheck_1974_ = !lean_is_exclusive(v_a_1943_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1950_ = v_a_1943_;
v_isShared_1951_ = v_isSharedCheck_1974_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_snd_1948_);
lean_inc(v_fst_1947_);
lean_dec(v_a_1943_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1974_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1955_; 
v___x_1952_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__2));
v___x_1953_ = l_Lean_JsonNumber_fromNat(v_fst_1937_);
if (v_isShared_1946_ == 0)
{
lean_ctor_set_tag(v___x_1945_, 2);
lean_ctor_set(v___x_1945_, 0, v___x_1953_);
v___x_1955_ = v___x_1945_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v___x_1953_);
v___x_1955_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
lean_object* v___x_1956_; lean_object* v___x_1958_; 
v___x_1956_ = l_Lean_JsonNumber_fromNat(v_fst_1947_);
if (v_isShared_1936_ == 0)
{
lean_ctor_set_tag(v___x_1935_, 2);
lean_ctor_set(v___x_1935_, 0, v___x_1956_);
v___x_1958_ = v___x_1935_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v___x_1956_);
v___x_1958_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1965_; 
v___x_1959_ = lean_unsigned_to_nat(2u);
v___x_1960_ = lean_mk_empty_array_with_capacity(v___x_1959_);
v___x_1961_ = lean_array_push(v___x_1960_, v___x_1955_);
v___x_1962_ = lean_array_push(v___x_1961_, v___x_1958_);
v___x_1963_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1963_, 0, v___x_1962_);
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 1, v___x_1963_);
lean_ctor_set(v___x_1950_, 0, v___x_1952_);
v___x_1965_ = v___x_1950_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v___x_1952_);
lean_ctor_set(v_reuseFailAlloc_1971_, 1, v___x_1963_);
v___x_1965_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
lean_object* v___x_1966_; lean_object* v___x_1968_; 
v___x_1966_ = lean_box(0);
if (v_isShared_1941_ == 0)
{
lean_ctor_set_tag(v___x_1940_, 1);
lean_ctor_set(v___x_1940_, 1, v___x_1966_);
lean_ctor_set(v___x_1940_, 0, v___x_1965_);
v___x_1968_ = v___x_1940_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v___x_1965_);
lean_ctor_set(v_reuseFailAlloc_1970_, 1, v___x_1966_);
v___x_1968_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
lean_object* v___x_1969_; 
v___x_1969_ = l_Lean_Json_mkObj(v___x_1968_);
lean_dec_ref(v___x_1968_);
v_fst_1864_ = v___x_1969_;
v_snd_1865_ = v_snd_1948_;
goto v___jp_1863_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1940_);
lean_dec(v_fst_1937_);
lean_del_object(v___x_1935_);
lean_dec_ref_known(v_l_1847_, 2);
return v___x_1942_;
}
}
}
}
else
{
lean_dec_ref_known(v_l_1847_, 2);
return v___x_1932_;
}
}
case 3:
{
lean_object* v_a_1978_; lean_object* v_a_1979_; lean_object* v___x_1980_; 
v_a_1978_ = lean_ctor_get(v_l_1847_, 0);
v_a_1979_ = lean_ctor_get(v_l_1847_, 1);
lean_inc(v_a_1978_);
v___x_1980_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1978_, v_a_1848_, v_a_1849_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_2025_; 
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_2025_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_1983_ = v___x_1980_;
v_isShared_1984_ = v_isSharedCheck_2025_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_a_1981_);
lean_dec(v___x_1980_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_2025_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v_fst_1985_; lean_object* v_snd_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_2024_; 
v_fst_1985_ = lean_ctor_get(v_a_1981_, 0);
v_snd_1986_ = lean_ctor_get(v_a_1981_, 1);
v_isSharedCheck_2024_ = !lean_is_exclusive(v_a_1981_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_1988_ = v_a_1981_;
v_isShared_1989_ = v_isSharedCheck_2024_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_snd_1986_);
lean_inc(v_fst_1985_);
lean_dec(v_a_1981_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_2024_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1990_; 
lean_inc(v_a_1979_);
v___x_1990_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_a_1979_, v_a_1848_, v_snd_1986_);
if (lean_obj_tag(v___x_1990_) == 0)
{
lean_object* v_a_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_2023_; 
v_a_1991_ = lean_ctor_get(v___x_1990_, 0);
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_1990_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_1993_ = v___x_1990_;
v_isShared_1994_ = v_isSharedCheck_2023_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_a_1991_);
lean_dec(v___x_1990_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_2023_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v_fst_1995_; lean_object* v_snd_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2022_; 
v_fst_1995_ = lean_ctor_get(v_a_1991_, 0);
v_snd_1996_ = lean_ctor_get(v_a_1991_, 1);
v_isSharedCheck_2022_ = !lean_is_exclusive(v_a_1991_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_1998_ = v_a_1991_;
v_isShared_1999_ = v_isSharedCheck_2022_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_snd_1996_);
lean_inc(v_fst_1995_);
lean_dec(v_a_1991_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2022_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2003_; 
v___x_2000_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__3));
v___x_2001_ = l_Lean_JsonNumber_fromNat(v_fst_1985_);
if (v_isShared_1994_ == 0)
{
lean_ctor_set_tag(v___x_1993_, 2);
lean_ctor_set(v___x_1993_, 0, v___x_2001_);
v___x_2003_ = v___x_1993_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v___x_2001_);
v___x_2003_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
lean_object* v___x_2004_; lean_object* v___x_2006_; 
v___x_2004_ = l_Lean_JsonNumber_fromNat(v_fst_1995_);
if (v_isShared_1984_ == 0)
{
lean_ctor_set_tag(v___x_1983_, 2);
lean_ctor_set(v___x_1983_, 0, v___x_2004_);
v___x_2006_ = v___x_1983_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v___x_2004_);
v___x_2006_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2013_; 
v___x_2007_ = lean_unsigned_to_nat(2u);
v___x_2008_ = lean_mk_empty_array_with_capacity(v___x_2007_);
v___x_2009_ = lean_array_push(v___x_2008_, v___x_2003_);
v___x_2010_ = lean_array_push(v___x_2009_, v___x_2006_);
v___x_2011_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2011_, 0, v___x_2010_);
if (v_isShared_1999_ == 0)
{
lean_ctor_set(v___x_1998_, 1, v___x_2011_);
lean_ctor_set(v___x_1998_, 0, v___x_2000_);
v___x_2013_ = v___x_1998_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v___x_2000_);
lean_ctor_set(v_reuseFailAlloc_2019_, 1, v___x_2011_);
v___x_2013_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
lean_object* v___x_2014_; lean_object* v___x_2016_; 
v___x_2014_ = lean_box(0);
if (v_isShared_1989_ == 0)
{
lean_ctor_set_tag(v___x_1988_, 1);
lean_ctor_set(v___x_1988_, 1, v___x_2014_);
lean_ctor_set(v___x_1988_, 0, v___x_2013_);
v___x_2016_ = v___x_1988_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v___x_2013_);
lean_ctor_set(v_reuseFailAlloc_2018_, 1, v___x_2014_);
v___x_2016_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
lean_object* v___x_2017_; 
v___x_2017_ = l_Lean_Json_mkObj(v___x_2016_);
lean_dec_ref(v___x_2016_);
v_fst_1864_ = v___x_2017_;
v_snd_1865_ = v_snd_1996_;
goto v___jp_1863_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1988_);
lean_dec(v_fst_1985_);
lean_del_object(v___x_1983_);
lean_dec_ref_known(v_l_1847_, 2);
return v___x_1990_;
}
}
}
}
else
{
lean_dec_ref_known(v_l_1847_, 2);
return v___x_1980_;
}
}
case 4:
{
lean_object* v_a_2026_; lean_object* v___x_2027_; 
v_a_2026_ = lean_ctor_get(v_l_1847_, 0);
lean_inc(v_a_2026_);
v___x_2027_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_a_2026_, v_a_1848_, v_a_1849_);
if (lean_obj_tag(v___x_2027_) == 0)
{
lean_object* v_a_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2049_; 
v_a_2028_ = lean_ctor_get(v___x_2027_, 0);
v_isSharedCheck_2049_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2049_ == 0)
{
v___x_2030_ = v___x_2027_;
v_isShared_2031_ = v_isSharedCheck_2049_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_a_2028_);
lean_dec(v___x_2027_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2049_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v_fst_2032_; lean_object* v_snd_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2048_; 
v_fst_2032_ = lean_ctor_get(v_a_2028_, 0);
v_snd_2033_ = lean_ctor_get(v_a_2028_, 1);
v_isSharedCheck_2048_ = !lean_is_exclusive(v_a_2028_);
if (v_isSharedCheck_2048_ == 0)
{
v___x_2035_ = v_a_2028_;
v_isShared_2036_ = v_isSharedCheck_2048_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_snd_2033_);
lean_inc(v_fst_2032_);
lean_dec(v_a_2028_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2048_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2040_; 
v___x_2037_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__4));
v___x_2038_ = l_Lean_JsonNumber_fromNat(v_fst_2032_);
if (v_isShared_2031_ == 0)
{
lean_ctor_set_tag(v___x_2030_, 2);
lean_ctor_set(v___x_2030_, 0, v___x_2038_);
v___x_2040_ = v___x_2030_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v___x_2038_);
v___x_2040_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
lean_object* v___x_2042_; 
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 1, v___x_2040_);
lean_ctor_set(v___x_2035_, 0, v___x_2037_);
v___x_2042_ = v___x_2035_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2037_);
lean_ctor_set(v_reuseFailAlloc_2046_, 1, v___x_2040_);
v___x_2042_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2043_ = lean_box(0);
v___x_2044_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2042_);
lean_ctor_set(v___x_2044_, 1, v___x_2043_);
v___x_2045_ = l_Lean_Json_mkObj(v___x_2044_);
lean_dec_ref_known(v___x_2044_, 2);
v_fst_1864_ = v___x_2045_;
v_snd_1865_ = v_snd_2033_;
goto v___jp_1863_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_l_1847_, 1);
return v___x_2027_;
}
}
default: 
{
lean_object* v___x_2050_; lean_object* v___x_2051_; 
v___x_2050_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6, &l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6_once, _init_l___private_LeanExport_Basic_0__LeanExport_dumpLevel___closed__6);
v___x_2051_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v___x_2050_, v_a_1848_, v_a_1849_);
if (lean_obj_tag(v___x_2051_) == 0)
{
lean_object* v_a_2052_; lean_object* v_fst_2053_; lean_object* v_snd_2054_; 
v_a_2052_ = lean_ctor_get(v___x_2051_, 0);
lean_inc(v_a_2052_);
lean_dec_ref_known(v___x_2051_, 1);
v_fst_2053_ = lean_ctor_get(v_a_2052_, 0);
lean_inc(v_fst_2053_);
v_snd_2054_ = lean_ctor_get(v_a_2052_, 1);
lean_inc(v_snd_2054_);
lean_dec(v_a_2052_);
v_fst_1864_ = v_fst_2053_;
v_snd_1865_ = v_snd_2054_;
goto v___jp_1863_;
}
else
{
lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2062_; 
lean_dec(v_l_1847_);
v_a_2055_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2057_ = v___x_2051_;
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_dec(v___x_2051_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2062_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2060_; 
if (v_isShared_2058_ == 0)
{
v___x_2060_ = v___x_2057_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_a_2055_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
}
v___jp_1863_:
{
lean_object* v_visitedLevels_1866_; lean_object* v_visitedNames_1867_; lean_object* v_visitedExprs_1868_; lean_object* v_visitedConstants_1869_; lean_object* v_noMDataExprs_1870_; uint8_t v_exportMData_1871_; uint8_t v_exportUnsafe_1872_; uint8_t v_ignoreMissing_1873_; lean_object* v_recursorMap_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1905_; 
v_visitedLevels_1866_ = lean_ctor_get(v_snd_1865_, 1);
v_visitedNames_1867_ = lean_ctor_get(v_snd_1865_, 0);
v_visitedExprs_1868_ = lean_ctor_get(v_snd_1865_, 2);
v_visitedConstants_1869_ = lean_ctor_get(v_snd_1865_, 3);
v_noMDataExprs_1870_ = lean_ctor_get(v_snd_1865_, 4);
v_exportMData_1871_ = lean_ctor_get_uint8(v_snd_1865_, sizeof(void*)*6);
v_exportUnsafe_1872_ = lean_ctor_get_uint8(v_snd_1865_, sizeof(void*)*6 + 1);
v_ignoreMissing_1873_ = lean_ctor_get_uint8(v_snd_1865_, sizeof(void*)*6 + 2);
v_recursorMap_1874_ = lean_ctor_get(v_snd_1865_, 5);
v_isSharedCheck_1905_ = !lean_is_exclusive(v_snd_1865_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1876_ = v_snd_1865_;
v_isShared_1877_ = v_isSharedCheck_1905_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_recursorMap_1874_);
lean_inc(v_noMDataExprs_1870_);
lean_inc(v_visitedConstants_1869_);
lean_inc(v_visitedExprs_1868_);
lean_inc(v_visitedLevels_1866_);
lean_inc(v_visitedNames_1867_);
lean_dec(v_snd_1865_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1905_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v_size_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
v_size_1878_ = lean_ctor_get(v_visitedLevels_1866_, 0);
lean_inc_n(v_size_1878_, 2);
v___x_1879_ = l_Lean_JsonNumber_fromNat(v_size_1878_);
v___x_1880_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1879_);
v___x_1881_ = l_Lean_Json_setObjVal_x21(v_fst_1864_, v___x_1862_, v___x_1880_);
v___x_1882_ = l_Lean_Json_compress(v___x_1881_);
v___x_1883_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_1882_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1895_; 
v_isSharedCheck_1895_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1895_ == 0)
{
lean_object* v_unused_1896_; 
v_unused_1896_ = lean_ctor_get(v___x_1883_, 0);
lean_dec(v_unused_1896_);
v___x_1885_ = v___x_1883_;
v_isShared_1886_ = v_isSharedCheck_1895_;
goto v_resetjp_1884_;
}
else
{
lean_dec(v___x_1883_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1895_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v___x_1887_; lean_object* v___x_1889_; 
lean_inc(v_size_1878_);
v___x_1887_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00LeanExport_M_run_spec__1___redArg(v_visitedLevels_1866_, v_l_1847_, v_size_1878_);
if (v_isShared_1877_ == 0)
{
lean_ctor_set(v___x_1876_, 1, v___x_1887_);
v___x_1889_ = v___x_1876_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v_visitedNames_1867_);
lean_ctor_set(v_reuseFailAlloc_1894_, 1, v___x_1887_);
lean_ctor_set(v_reuseFailAlloc_1894_, 2, v_visitedExprs_1868_);
lean_ctor_set(v_reuseFailAlloc_1894_, 3, v_visitedConstants_1869_);
lean_ctor_set(v_reuseFailAlloc_1894_, 4, v_noMDataExprs_1870_);
lean_ctor_set(v_reuseFailAlloc_1894_, 5, v_recursorMap_1874_);
lean_ctor_set_uint8(v_reuseFailAlloc_1894_, sizeof(void*)*6, v_exportMData_1871_);
lean_ctor_set_uint8(v_reuseFailAlloc_1894_, sizeof(void*)*6 + 1, v_exportUnsafe_1872_);
lean_ctor_set_uint8(v_reuseFailAlloc_1894_, sizeof(void*)*6 + 2, v_ignoreMissing_1873_);
v___x_1889_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
lean_object* v___x_1890_; lean_object* v___x_1892_; 
v___x_1890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1890_, 0, v_size_1878_);
lean_ctor_set(v___x_1890_, 1, v___x_1889_);
if (v_isShared_1886_ == 0)
{
lean_ctor_set(v___x_1885_, 0, v___x_1890_);
v___x_1892_ = v___x_1885_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v___x_1890_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
}
else
{
lean_object* v_a_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1904_; 
lean_dec(v_size_1878_);
lean_del_object(v___x_1876_);
lean_dec(v_recursorMap_1874_);
lean_dec_ref(v_noMDataExprs_1870_);
lean_dec_ref(v_visitedConstants_1869_);
lean_dec_ref(v_visitedExprs_1868_);
lean_dec_ref(v_visitedNames_1867_);
lean_dec_ref(v_visitedLevels_1866_);
lean_dec(v_l_1847_);
v_a_1897_ = lean_ctor_get(v___x_1883_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1899_ = v___x_1883_;
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_a_1897_);
lean_dec(v___x_1883_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1902_; 
if (v_isShared_1900_ == 0)
{
v___x_1902_ = v___x_1899_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v_a_1897_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpLevel___boxed(lean_object* v_l_2063_, lean_object* v_a_2064_, lean_object* v_a_2065_, lean_object* v_a_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_l_2063_, v_a_2064_, v_a_2065_);
lean_dec_ref(v_a_2064_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0(lean_object* v_00_u03b2_2068_, lean_object* v_m_2069_, lean_object* v_a_2070_){
_start:
{
lean_object* v___x_2071_; 
v___x_2071_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___redArg(v_m_2069_, v_a_2070_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0___boxed(lean_object* v_00_u03b2_2072_, lean_object* v_m_2073_, lean_object* v_a_2074_){
_start:
{
lean_object* v_res_2075_; 
v_res_2075_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0(v_00_u03b2_2072_, v_m_2073_, v_a_2074_);
lean_dec(v_a_2074_);
lean_dec_ref(v_m_2073_);
return v_res_2075_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0(lean_object* v_00_u03b2_2076_, lean_object* v_a_2077_, lean_object* v_x_2078_){
_start:
{
lean_object* v___x_2079_; 
v___x_2079_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___redArg(v_a_2077_, v_x_2078_);
return v___x_2079_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2080_, lean_object* v_a_2081_, lean_object* v_x_2082_){
_start:
{
lean_object* v_res_2083_; 
v_res_2083_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_dumpLevel_spec__0_spec__0(v_00_u03b2_2080_, v_a_2081_, v_x_2082_);
lean_dec(v_x_2082_);
lean_dec(v_a_2081_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__1(lean_object* v_a_2084_, lean_object* v_a_2085_){
_start:
{
if (lean_obj_tag(v_a_2084_) == 0)
{
lean_object* v___x_2086_; 
v___x_2086_ = l_List_reverse___redArg(v_a_2085_);
return v___x_2086_;
}
else
{
lean_object* v_head_2087_; lean_object* v_tail_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2097_; 
v_head_2087_ = lean_ctor_get(v_a_2084_, 0);
v_tail_2088_ = lean_ctor_get(v_a_2084_, 1);
v_isSharedCheck_2097_ = !lean_is_exclusive(v_a_2084_);
if (v_isSharedCheck_2097_ == 0)
{
v___x_2090_ = v_a_2084_;
v_isShared_2091_ = v_isSharedCheck_2097_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_tail_2088_);
lean_inc(v_head_2087_);
lean_dec(v_a_2084_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2097_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2092_; lean_object* v___x_2094_; 
v___x_2092_ = l_Lean_Level_param___override(v_head_2087_);
if (v_isShared_2091_ == 0)
{
lean_ctor_set(v___x_2090_, 1, v_a_2085_);
lean_ctor_set(v___x_2090_, 0, v___x_2092_);
v___x_2094_ = v___x_2090_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v___x_2092_);
lean_ctor_set(v_reuseFailAlloc_2096_, 1, v_a_2085_);
v___x_2094_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
v_a_2084_ = v_tail_2088_;
v_a_2085_ = v___x_2094_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(size_t v_sz_2098_, size_t v_i_2099_, lean_object* v_bs_2100_){
_start:
{
uint8_t v___x_2101_; 
v___x_2101_ = lean_usize_dec_lt(v_i_2099_, v_sz_2098_);
if (v___x_2101_ == 0)
{
return v_bs_2100_;
}
else
{
lean_object* v_v_2102_; lean_object* v___x_2103_; lean_object* v_bs_x27_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; size_t v___x_2107_; size_t v___x_2108_; lean_object* v___x_2109_; 
v_v_2102_ = lean_array_uget(v_bs_2100_, v_i_2099_);
v___x_2103_ = lean_unsigned_to_nat(0u);
v_bs_x27_2104_ = lean_array_uset(v_bs_2100_, v_i_2099_, v___x_2103_);
v___x_2105_ = l_Lean_JsonNumber_fromNat(v_v_2102_);
v___x_2106_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2106_, 0, v___x_2105_);
v___x_2107_ = ((size_t)1ULL);
v___x_2108_ = lean_usize_add(v_i_2099_, v___x_2107_);
v___x_2109_ = lean_array_uset(v_bs_x27_2104_, v_i_2099_, v___x_2106_);
v_i_2099_ = v___x_2108_;
v_bs_2100_ = v___x_2109_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4___boxed(lean_object* v_sz_2111_, lean_object* v_i_2112_, lean_object* v_bs_2113_){
_start:
{
size_t v_sz_boxed_2114_; size_t v_i_boxed_2115_; lean_object* v_res_2116_; 
v_sz_boxed_2114_ = lean_unbox_usize(v_sz_2111_);
lean_dec(v_sz_2111_);
v_i_boxed_2115_ = lean_unbox_usize(v_i_2112_);
lean_dec(v_i_2112_);
v_res_2116_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(v_sz_boxed_2114_, v_i_boxed_2115_, v_bs_2113_);
return v_res_2116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3(lean_object* v_a_2117_){
_start:
{
size_t v_sz_2118_; size_t v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
v_sz_2118_ = lean_array_size(v_a_2117_);
v___x_2119_ = ((size_t)0ULL);
v___x_2120_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3_spec__4(v_sz_2118_, v___x_2119_, v_a_2117_);
v___x_2121_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2120_);
return v___x_2121_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(lean_object* v_a_2122_){
_start:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2123_ = lean_array_mk(v_a_2122_);
v___x_2124_ = l_Lean_Array_toJson___at___00Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3_spec__3(v___x_2123_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(lean_object* v_x_2125_, lean_object* v_x_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_){
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
v___x_2138_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_head_2133_, v___y_2127_, v___y_2128_);
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
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2___boxed(lean_object* v_x_2155_, lean_object* v_x_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_){
_start:
{
lean_object* v_res_2160_; 
v_res_2160_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(v_x_2155_, v_x_2156_, v___y_2157_, v___y_2158_);
lean_dec_ref(v___y_2157_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(lean_object* v_x_2161_, lean_object* v_x_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_){
_start:
{
if (lean_obj_tag(v_x_2161_) == 0)
{
lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2166_ = l_List_reverse___redArg(v_x_2162_);
v___x_2167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2166_);
lean_ctor_set(v___x_2167_, 1, v___y_2164_);
v___x_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2167_);
return v___x_2168_;
}
else
{
lean_object* v_head_2169_; lean_object* v_tail_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2190_; 
v_head_2169_ = lean_ctor_get(v_x_2161_, 0);
v_tail_2170_ = lean_ctor_get(v_x_2161_, 1);
v_isSharedCheck_2190_ = !lean_is_exclusive(v_x_2161_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2172_ = v_x_2161_;
v_isShared_2173_ = v_isSharedCheck_2190_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_tail_2170_);
lean_inc(v_head_2169_);
lean_dec(v_x_2161_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2190_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2174_; 
v___x_2174_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_head_2169_, v___y_2163_, v___y_2164_);
if (lean_obj_tag(v___x_2174_) == 0)
{
lean_object* v_a_2175_; lean_object* v_fst_2176_; lean_object* v_snd_2177_; lean_object* v___x_2179_; 
v_a_2175_ = lean_ctor_get(v___x_2174_, 0);
lean_inc(v_a_2175_);
lean_dec_ref_known(v___x_2174_, 1);
v_fst_2176_ = lean_ctor_get(v_a_2175_, 0);
lean_inc(v_fst_2176_);
v_snd_2177_ = lean_ctor_get(v_a_2175_, 1);
lean_inc(v_snd_2177_);
lean_dec(v_a_2175_);
if (v_isShared_2173_ == 0)
{
lean_ctor_set(v___x_2172_, 1, v_x_2162_);
lean_ctor_set(v___x_2172_, 0, v_fst_2176_);
v___x_2179_ = v___x_2172_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v_fst_2176_);
lean_ctor_set(v_reuseFailAlloc_2181_, 1, v_x_2162_);
v___x_2179_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
v_x_2161_ = v_tail_2170_;
v_x_2162_ = v___x_2179_;
v___y_2164_ = v_snd_2177_;
goto _start;
}
}
else
{
lean_object* v_a_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2189_; 
lean_del_object(v___x_2172_);
lean_dec(v_tail_2170_);
lean_dec(v_x_2162_);
v_a_2182_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2184_ = v___x_2174_;
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_dec(v___x_2174_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2187_; 
if (v_isShared_2185_ == 0)
{
v___x_2187_ = v___x_2184_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v_a_2182_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0___boxed(lean_object* v_x_2191_, lean_object* v_x_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_){
_start:
{
lean_object* v_res_2196_; 
v_res_2196_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(v_x_2191_, v_x_2192_, v___y_2193_, v___y_2194_);
lean_dec_ref(v___y_2193_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpUparams(lean_object* v_uparams_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_){
_start:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2201_ = lean_box(0);
lean_inc(v_uparams_2197_);
v___x_2202_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(v_uparams_2197_, v___x_2201_, v_a_2198_, v_a_2199_);
if (lean_obj_tag(v___x_2202_) == 0)
{
lean_object* v_a_2203_; lean_object* v_fst_2204_; lean_object* v_snd_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v_a_2203_ = lean_ctor_get(v___x_2202_, 0);
lean_inc(v_a_2203_);
lean_dec_ref_known(v___x_2202_, 1);
v_fst_2204_ = lean_ctor_get(v_a_2203_, 0);
lean_inc(v_fst_2204_);
v_snd_2205_ = lean_ctor_get(v_a_2203_, 1);
lean_inc(v_snd_2205_);
lean_dec(v_a_2203_);
v___x_2206_ = l_List_mapTR_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__1(v_uparams_2197_, v___x_2201_);
v___x_2207_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(v___x_2206_, v___x_2201_, v_a_2198_, v_snd_2205_);
if (lean_obj_tag(v___x_2207_) == 0)
{
lean_object* v_a_2208_; lean_object* v___x_2210_; uint8_t v_isShared_2211_; uint8_t v_isSharedCheck_2225_; 
v_a_2208_ = lean_ctor_get(v___x_2207_, 0);
v_isSharedCheck_2225_ = !lean_is_exclusive(v___x_2207_);
if (v_isSharedCheck_2225_ == 0)
{
v___x_2210_ = v___x_2207_;
v_isShared_2211_ = v_isSharedCheck_2225_;
goto v_resetjp_2209_;
}
else
{
lean_inc(v_a_2208_);
lean_dec(v___x_2207_);
v___x_2210_ = lean_box(0);
v_isShared_2211_ = v_isSharedCheck_2225_;
goto v_resetjp_2209_;
}
v_resetjp_2209_:
{
lean_object* v_snd_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2223_; 
v_snd_2212_ = lean_ctor_get(v_a_2208_, 1);
v_isSharedCheck_2223_ = !lean_is_exclusive(v_a_2208_);
if (v_isSharedCheck_2223_ == 0)
{
lean_object* v_unused_2224_; 
v_unused_2224_ = lean_ctor_get(v_a_2208_, 0);
lean_dec(v_unused_2224_);
v___x_2214_ = v_a_2208_;
v_isShared_2215_ = v_isSharedCheck_2223_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_snd_2212_);
lean_dec(v_a_2208_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2223_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2216_; lean_object* v___x_2218_; 
v___x_2216_ = l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(v_fst_2204_);
if (v_isShared_2215_ == 0)
{
lean_ctor_set(v___x_2214_, 0, v___x_2216_);
v___x_2218_ = v___x_2214_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2216_);
lean_ctor_set(v_reuseFailAlloc_2222_, 1, v_snd_2212_);
v___x_2218_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
lean_object* v___x_2220_; 
if (v_isShared_2211_ == 0)
{
lean_ctor_set(v___x_2210_, 0, v___x_2218_);
v___x_2220_ = v___x_2210_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v___x_2218_);
v___x_2220_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
return v___x_2220_;
}
}
}
}
}
else
{
lean_object* v_a_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2233_; 
lean_dec(v_fst_2204_);
v_a_2226_ = lean_ctor_get(v___x_2207_, 0);
v_isSharedCheck_2233_ = !lean_is_exclusive(v___x_2207_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2228_ = v___x_2207_;
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_a_2226_);
lean_dec(v___x_2207_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2231_; 
if (v_isShared_2229_ == 0)
{
v___x_2231_ = v___x_2228_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v_a_2226_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
return v___x_2231_;
}
}
}
}
else
{
lean_object* v_a_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2241_; 
lean_dec(v_uparams_2197_);
v_a_2234_ = lean_ctor_get(v___x_2202_, 0);
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2202_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2236_ = v___x_2202_;
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_a_2234_);
lean_dec(v___x_2202_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v___x_2239_; 
if (v_isShared_2237_ == 0)
{
v___x_2239_ = v___x_2236_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_a_2234_);
v___x_2239_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
return v___x_2239_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpUparams___boxed(lean_object* v_uparams_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_a_2245_){
_start:
{
lean_object* v_res_2246_; 
v_res_2246_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_uparams_2242_, v_a_2243_, v_a_2244_);
lean_dec_ref(v_a_2243_);
return v_res_2246_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpNames(lean_object* v_uparams_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2251_ = lean_box(0);
v___x_2252_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__0(v_uparams_2247_, v___x_2251_, v_a_2248_, v_a_2249_);
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v_a_2253_; lean_object* v___x_2255_; uint8_t v_isShared_2256_; uint8_t v_isSharedCheck_2270_; 
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2270_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2270_ == 0)
{
v___x_2255_ = v___x_2252_;
v_isShared_2256_ = v_isSharedCheck_2270_;
goto v_resetjp_2254_;
}
else
{
lean_inc(v_a_2253_);
lean_dec(v___x_2252_);
v___x_2255_ = lean_box(0);
v_isShared_2256_ = v_isSharedCheck_2270_;
goto v_resetjp_2254_;
}
v_resetjp_2254_:
{
lean_object* v_fst_2257_; lean_object* v_snd_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2269_; 
v_fst_2257_ = lean_ctor_get(v_a_2253_, 0);
v_snd_2258_ = lean_ctor_get(v_a_2253_, 1);
v_isSharedCheck_2269_ = !lean_is_exclusive(v_a_2253_);
if (v_isSharedCheck_2269_ == 0)
{
v___x_2260_ = v_a_2253_;
v_isShared_2261_ = v_isSharedCheck_2269_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_snd_2258_);
lean_inc(v_fst_2257_);
lean_dec(v_a_2253_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2269_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2262_; lean_object* v___x_2264_; 
v___x_2262_ = l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(v_fst_2257_);
if (v_isShared_2261_ == 0)
{
lean_ctor_set(v___x_2260_, 0, v___x_2262_);
v___x_2264_ = v___x_2260_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v___x_2262_);
lean_ctor_set(v_reuseFailAlloc_2268_, 1, v_snd_2258_);
v___x_2264_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
lean_object* v___x_2266_; 
if (v_isShared_2256_ == 0)
{
lean_ctor_set(v___x_2255_, 0, v___x_2264_);
v___x_2266_ = v___x_2255_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v___x_2264_);
v___x_2266_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
return v___x_2266_;
}
}
}
}
}
else
{
lean_object* v_a_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2278_; 
v_a_2271_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2278_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2278_ == 0)
{
v___x_2273_ = v___x_2252_;
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_a_2271_);
lean_dec(v___x_2252_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v___x_2276_; 
if (v_isShared_2274_ == 0)
{
v___x_2276_ = v___x_2273_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_a_2271_);
v___x_2276_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
return v___x_2276_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpNames___boxed(lean_object* v_uparams_2279_, lean_object* v_a_2280_, lean_object* v_a_2281_, lean_object* v_a_2282_){
_start:
{
lean_object* v_res_2283_; 
v_res_2283_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_uparams_2279_, v_a_2280_, v_a_2281_);
lean_dec_ref(v_a_2280_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(lean_object* v_msg_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_){
_start:
{
lean_object* v___x_2288_; lean_object* v___f_2289_; lean_object* v___f_2290_; lean_object* v___f_2291_; lean_object* v___f_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___f_2301_; lean_object* v___x_11487__overap_2302_; lean_object* v___x_2303_; 
v___x_2288_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2289_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2289_, 0, v___x_2288_);
v___f_2290_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2290_, 0, v___x_2288_);
v___f_2291_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2291_, 0, v___x_2288_);
v___f_2292_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2292_, 0, v___x_2288_);
v___x_2293_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2293_, 0, lean_box(0));
lean_closure_set(v___x_2293_, 1, lean_box(0));
lean_closure_set(v___x_2293_, 2, v___x_2288_);
v___x_2294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2293_);
lean_ctor_set(v___x_2294_, 1, v___f_2289_);
v___x_2295_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2295_, 0, lean_box(0));
lean_closure_set(v___x_2295_, 1, lean_box(0));
lean_closure_set(v___x_2295_, 2, v___x_2288_);
v___x_2296_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2296_, 0, v___x_2294_);
lean_ctor_set(v___x_2296_, 1, v___x_2295_);
lean_ctor_set(v___x_2296_, 2, v___f_2290_);
lean_ctor_set(v___x_2296_, 3, v___f_2291_);
lean_ctor_set(v___x_2296_, 4, v___f_2292_);
v___x_2297_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2297_, 0, lean_box(0));
lean_closure_set(v___x_2297_, 1, lean_box(0));
lean_closure_set(v___x_2297_, 2, v___x_2288_);
v___x_2298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2296_);
lean_ctor_set(v___x_2298_, 1, v___x_2297_);
v___x_2299_ = l_Lean_instInhabitedExpr;
v___x_2300_ = l_instInhabitedOfMonad___redArg(v___x_2298_, v___x_2299_);
v___f_2301_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2301_, 0, v___x_2300_);
v___x_11487__overap_2302_ = lean_panic_fn_borrowed(v___f_2301_, v_msg_2284_);
lean_dec_ref(v___f_2301_);
lean_inc_ref(v___y_2285_);
v___x_2303_ = lean_apply_3(v___x_11487__overap_2302_, v___y_2285_, v___y_2286_, lean_box(0));
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2___boxed(lean_object* v_msg_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(v_msg_2304_, v___y_2305_, v___y_2306_);
lean_dec_ref(v___y_2305_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(lean_object* v_a_2309_, lean_object* v_b_2310_, lean_object* v_x_2311_){
_start:
{
if (lean_obj_tag(v_x_2311_) == 0)
{
lean_dec(v_b_2310_);
lean_dec_ref(v_a_2309_);
return v_x_2311_;
}
else
{
lean_object* v_key_2312_; lean_object* v_value_2313_; lean_object* v_tail_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2326_; 
v_key_2312_ = lean_ctor_get(v_x_2311_, 0);
v_value_2313_ = lean_ctor_get(v_x_2311_, 1);
v_tail_2314_ = lean_ctor_get(v_x_2311_, 2);
v_isSharedCheck_2326_ = !lean_is_exclusive(v_x_2311_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2316_ = v_x_2311_;
v_isShared_2317_ = v_isSharedCheck_2326_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_tail_2314_);
lean_inc(v_value_2313_);
lean_inc(v_key_2312_);
lean_dec(v_x_2311_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2326_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
uint8_t v___x_2318_; 
v___x_2318_ = lean_expr_eqv(v_key_2312_, v_a_2309_);
if (v___x_2318_ == 0)
{
lean_object* v___x_2319_; lean_object* v___x_2321_; 
v___x_2319_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(v_a_2309_, v_b_2310_, v_tail_2314_);
if (v_isShared_2317_ == 0)
{
lean_ctor_set(v___x_2316_, 2, v___x_2319_);
v___x_2321_ = v___x_2316_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_key_2312_);
lean_ctor_set(v_reuseFailAlloc_2322_, 1, v_value_2313_);
lean_ctor_set(v_reuseFailAlloc_2322_, 2, v___x_2319_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
else
{
lean_object* v___x_2324_; 
lean_dec(v_value_2313_);
lean_dec(v_key_2312_);
if (v_isShared_2317_ == 0)
{
lean_ctor_set(v___x_2316_, 1, v_b_2310_);
lean_ctor_set(v___x_2316_, 0, v_a_2309_);
v___x_2324_ = v___x_2316_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_a_2309_);
lean_ctor_set(v_reuseFailAlloc_2325_, 1, v_b_2310_);
lean_ctor_set(v_reuseFailAlloc_2325_, 2, v_tail_2314_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(lean_object* v_x_2327_, lean_object* v_x_2328_){
_start:
{
if (lean_obj_tag(v_x_2328_) == 0)
{
return v_x_2327_;
}
else
{
lean_object* v_key_2329_; lean_object* v_value_2330_; lean_object* v_tail_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2354_; 
v_key_2329_ = lean_ctor_get(v_x_2328_, 0);
v_value_2330_ = lean_ctor_get(v_x_2328_, 1);
v_tail_2331_ = lean_ctor_get(v_x_2328_, 2);
v_isSharedCheck_2354_ = !lean_is_exclusive(v_x_2328_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2333_ = v_x_2328_;
v_isShared_2334_ = v_isSharedCheck_2354_;
goto v_resetjp_2332_;
}
else
{
lean_inc(v_tail_2331_);
lean_inc(v_value_2330_);
lean_inc(v_key_2329_);
lean_dec(v_x_2328_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2354_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
lean_object* v___x_2335_; uint64_t v___x_2336_; uint64_t v___x_2337_; uint64_t v___x_2338_; uint64_t v_fold_2339_; uint64_t v___x_2340_; uint64_t v___x_2341_; uint64_t v___x_2342_; size_t v___x_2343_; size_t v___x_2344_; size_t v___x_2345_; size_t v___x_2346_; size_t v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2350_; 
v___x_2335_ = lean_array_get_size(v_x_2327_);
v___x_2336_ = l_Lean_Expr_hash(v_key_2329_);
v___x_2337_ = 32ULL;
v___x_2338_ = lean_uint64_shift_right(v___x_2336_, v___x_2337_);
v_fold_2339_ = lean_uint64_xor(v___x_2336_, v___x_2338_);
v___x_2340_ = 16ULL;
v___x_2341_ = lean_uint64_shift_right(v_fold_2339_, v___x_2340_);
v___x_2342_ = lean_uint64_xor(v_fold_2339_, v___x_2341_);
v___x_2343_ = lean_uint64_to_usize(v___x_2342_);
v___x_2344_ = lean_usize_of_nat(v___x_2335_);
v___x_2345_ = ((size_t)1ULL);
v___x_2346_ = lean_usize_sub(v___x_2344_, v___x_2345_);
v___x_2347_ = lean_usize_land(v___x_2343_, v___x_2346_);
v___x_2348_ = lean_array_uget_borrowed(v_x_2327_, v___x_2347_);
lean_inc(v___x_2348_);
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 2, v___x_2348_);
v___x_2350_ = v___x_2333_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_key_2329_);
lean_ctor_set(v_reuseFailAlloc_2353_, 1, v_value_2330_);
lean_ctor_set(v_reuseFailAlloc_2353_, 2, v___x_2348_);
v___x_2350_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
lean_object* v___x_2351_; 
v___x_2351_ = lean_array_uset(v_x_2327_, v___x_2347_, v___x_2350_);
v_x_2327_ = v___x_2351_;
v_x_2328_ = v_tail_2331_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(lean_object* v_i_2355_, lean_object* v_source_2356_, lean_object* v_target_2357_){
_start:
{
lean_object* v___x_2358_; uint8_t v___x_2359_; 
v___x_2358_ = lean_array_get_size(v_source_2356_);
v___x_2359_ = lean_nat_dec_lt(v_i_2355_, v___x_2358_);
if (v___x_2359_ == 0)
{
lean_dec_ref(v_source_2356_);
lean_dec(v_i_2355_);
return v_target_2357_;
}
else
{
lean_object* v_es_2360_; lean_object* v___x_2361_; lean_object* v_source_2362_; lean_object* v_target_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; 
v_es_2360_ = lean_array_fget(v_source_2356_, v_i_2355_);
v___x_2361_ = lean_box(0);
v_source_2362_ = lean_array_fset(v_source_2356_, v_i_2355_, v___x_2361_);
v_target_2363_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(v_target_2357_, v_es_2360_);
v___x_2364_ = lean_unsigned_to_nat(1u);
v___x_2365_ = lean_nat_add(v_i_2355_, v___x_2364_);
lean_dec(v_i_2355_);
v_i_2355_ = v___x_2365_;
v_source_2356_ = v_source_2362_;
v_target_2357_ = v_target_2363_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(lean_object* v_data_2367_){
_start:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v_nbuckets_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; 
v___x_2368_ = lean_array_get_size(v_data_2367_);
v___x_2369_ = lean_unsigned_to_nat(2u);
v_nbuckets_2370_ = lean_nat_mul(v___x_2368_, v___x_2369_);
v___x_2371_ = lean_unsigned_to_nat(0u);
v___x_2372_ = lean_box(0);
v___x_2373_ = lean_mk_array(v_nbuckets_2370_, v___x_2372_);
v___x_2374_ = lean_array_propagate_mark(v_data_2367_, v___x_2373_);
v___x_2375_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(v___x_2371_, v_data_2367_, v___x_2374_);
return v___x_2375_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(lean_object* v_a_2376_, lean_object* v_x_2377_){
_start:
{
if (lean_obj_tag(v_x_2377_) == 0)
{
uint8_t v___x_2378_; 
v___x_2378_ = 0;
return v___x_2378_;
}
else
{
lean_object* v_key_2379_; lean_object* v_tail_2380_; uint8_t v___x_2381_; 
v_key_2379_ = lean_ctor_get(v_x_2377_, 0);
v_tail_2380_ = lean_ctor_get(v_x_2377_, 2);
v___x_2381_ = lean_expr_eqv(v_key_2379_, v_a_2376_);
if (v___x_2381_ == 0)
{
v_x_2377_ = v_tail_2380_;
goto _start;
}
else
{
return v___x_2381_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg___boxed(lean_object* v_a_2383_, lean_object* v_x_2384_){
_start:
{
uint8_t v_res_2385_; lean_object* v_r_2386_; 
v_res_2385_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(v_a_2383_, v_x_2384_);
lean_dec(v_x_2384_);
lean_dec_ref(v_a_2383_);
v_r_2386_ = lean_box(v_res_2385_);
return v_r_2386_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(lean_object* v_m_2387_, lean_object* v_a_2388_, lean_object* v_b_2389_){
_start:
{
lean_object* v_size_2390_; lean_object* v_buckets_2391_; lean_object* v___x_2393_; uint8_t v_isShared_2394_; uint8_t v_isSharedCheck_2434_; 
v_size_2390_ = lean_ctor_get(v_m_2387_, 0);
v_buckets_2391_ = lean_ctor_get(v_m_2387_, 1);
v_isSharedCheck_2434_ = !lean_is_exclusive(v_m_2387_);
if (v_isSharedCheck_2434_ == 0)
{
v___x_2393_ = v_m_2387_;
v_isShared_2394_ = v_isSharedCheck_2434_;
goto v_resetjp_2392_;
}
else
{
lean_inc(v_buckets_2391_);
lean_inc(v_size_2390_);
lean_dec(v_m_2387_);
v___x_2393_ = lean_box(0);
v_isShared_2394_ = v_isSharedCheck_2434_;
goto v_resetjp_2392_;
}
v_resetjp_2392_:
{
lean_object* v___x_2395_; uint64_t v___x_2396_; uint64_t v___x_2397_; uint64_t v___x_2398_; uint64_t v_fold_2399_; uint64_t v___x_2400_; uint64_t v___x_2401_; uint64_t v___x_2402_; size_t v___x_2403_; size_t v___x_2404_; size_t v___x_2405_; size_t v___x_2406_; size_t v___x_2407_; lean_object* v_bkt_2408_; uint8_t v___x_2409_; 
v___x_2395_ = lean_array_get_size(v_buckets_2391_);
v___x_2396_ = l_Lean_Expr_hash(v_a_2388_);
v___x_2397_ = 32ULL;
v___x_2398_ = lean_uint64_shift_right(v___x_2396_, v___x_2397_);
v_fold_2399_ = lean_uint64_xor(v___x_2396_, v___x_2398_);
v___x_2400_ = 16ULL;
v___x_2401_ = lean_uint64_shift_right(v_fold_2399_, v___x_2400_);
v___x_2402_ = lean_uint64_xor(v_fold_2399_, v___x_2401_);
v___x_2403_ = lean_uint64_to_usize(v___x_2402_);
v___x_2404_ = lean_usize_of_nat(v___x_2395_);
v___x_2405_ = ((size_t)1ULL);
v___x_2406_ = lean_usize_sub(v___x_2404_, v___x_2405_);
v___x_2407_ = lean_usize_land(v___x_2403_, v___x_2406_);
v_bkt_2408_ = lean_array_uget_borrowed(v_buckets_2391_, v___x_2407_);
v___x_2409_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(v_a_2388_, v_bkt_2408_);
if (v___x_2409_ == 0)
{
lean_object* v___x_2410_; lean_object* v_size_x27_2411_; lean_object* v___x_2412_; lean_object* v_buckets_x27_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; uint8_t v___x_2419_; 
v___x_2410_ = lean_unsigned_to_nat(1u);
v_size_x27_2411_ = lean_nat_add(v_size_2390_, v___x_2410_);
lean_dec(v_size_2390_);
lean_inc(v_bkt_2408_);
v___x_2412_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2412_, 0, v_a_2388_);
lean_ctor_set(v___x_2412_, 1, v_b_2389_);
lean_ctor_set(v___x_2412_, 2, v_bkt_2408_);
v_buckets_x27_2413_ = lean_array_uset(v_buckets_2391_, v___x_2407_, v___x_2412_);
v___x_2414_ = lean_unsigned_to_nat(4u);
v___x_2415_ = lean_nat_mul(v_size_x27_2411_, v___x_2414_);
v___x_2416_ = lean_unsigned_to_nat(3u);
v___x_2417_ = lean_nat_div(v___x_2415_, v___x_2416_);
lean_dec(v___x_2415_);
v___x_2418_ = lean_array_get_size(v_buckets_x27_2413_);
v___x_2419_ = lean_nat_dec_le(v___x_2417_, v___x_2418_);
lean_dec(v___x_2417_);
if (v___x_2419_ == 0)
{
lean_object* v_val_2420_; lean_object* v___x_2422_; 
v_val_2420_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(v_buckets_x27_2413_);
if (v_isShared_2394_ == 0)
{
lean_ctor_set(v___x_2393_, 1, v_val_2420_);
lean_ctor_set(v___x_2393_, 0, v_size_x27_2411_);
v___x_2422_ = v___x_2393_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v_size_x27_2411_);
lean_ctor_set(v_reuseFailAlloc_2423_, 1, v_val_2420_);
v___x_2422_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
return v___x_2422_;
}
}
else
{
lean_object* v___x_2425_; 
if (v_isShared_2394_ == 0)
{
lean_ctor_set(v___x_2393_, 1, v_buckets_x27_2413_);
lean_ctor_set(v___x_2393_, 0, v_size_x27_2411_);
v___x_2425_ = v___x_2393_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v_size_x27_2411_);
lean_ctor_set(v_reuseFailAlloc_2426_, 1, v_buckets_x27_2413_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
return v___x_2425_;
}
}
}
else
{
lean_object* v___x_2427_; lean_object* v_buckets_x27_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2432_; 
lean_inc(v_bkt_2408_);
v___x_2427_ = lean_box(0);
v_buckets_x27_2428_ = lean_array_uset(v_buckets_2391_, v___x_2407_, v___x_2427_);
v___x_2429_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(v_a_2388_, v_b_2389_, v_bkt_2408_);
v___x_2430_ = lean_array_uset(v_buckets_x27_2428_, v___x_2407_, v___x_2429_);
if (v_isShared_2394_ == 0)
{
lean_ctor_set(v___x_2393_, 1, v___x_2430_);
v___x_2432_ = v___x_2393_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v_size_2390_);
lean_ctor_set(v_reuseFailAlloc_2433_, 1, v___x_2430_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(lean_object* v_a_2435_, lean_object* v_x_2436_){
_start:
{
if (lean_obj_tag(v_x_2436_) == 0)
{
lean_object* v___x_2437_; 
v___x_2437_ = lean_box(0);
return v___x_2437_;
}
else
{
lean_object* v_key_2438_; lean_object* v_value_2439_; lean_object* v_tail_2440_; uint8_t v___x_2441_; 
v_key_2438_ = lean_ctor_get(v_x_2436_, 0);
v_value_2439_ = lean_ctor_get(v_x_2436_, 1);
v_tail_2440_ = lean_ctor_get(v_x_2436_, 2);
v___x_2441_ = lean_expr_eqv(v_key_2438_, v_a_2435_);
if (v___x_2441_ == 0)
{
v_x_2436_ = v_tail_2440_;
goto _start;
}
else
{
lean_object* v___x_2443_; 
lean_inc(v_value_2439_);
v___x_2443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2443_, 0, v_value_2439_);
return v___x_2443_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg___boxed(lean_object* v_a_2444_, lean_object* v_x_2445_){
_start:
{
lean_object* v_res_2446_; 
v_res_2446_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(v_a_2444_, v_x_2445_);
lean_dec(v_x_2445_);
lean_dec_ref(v_a_2444_);
return v_res_2446_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(lean_object* v_m_2447_, lean_object* v_a_2448_){
_start:
{
lean_object* v_buckets_2449_; lean_object* v___x_2450_; uint64_t v___x_2451_; uint64_t v___x_2452_; uint64_t v___x_2453_; uint64_t v_fold_2454_; uint64_t v___x_2455_; uint64_t v___x_2456_; uint64_t v___x_2457_; size_t v___x_2458_; size_t v___x_2459_; size_t v___x_2460_; size_t v___x_2461_; size_t v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v_buckets_2449_ = lean_ctor_get(v_m_2447_, 1);
v___x_2450_ = lean_array_get_size(v_buckets_2449_);
v___x_2451_ = l_Lean_Expr_hash(v_a_2448_);
v___x_2452_ = 32ULL;
v___x_2453_ = lean_uint64_shift_right(v___x_2451_, v___x_2452_);
v_fold_2454_ = lean_uint64_xor(v___x_2451_, v___x_2453_);
v___x_2455_ = 16ULL;
v___x_2456_ = lean_uint64_shift_right(v_fold_2454_, v___x_2455_);
v___x_2457_ = lean_uint64_xor(v_fold_2454_, v___x_2456_);
v___x_2458_ = lean_uint64_to_usize(v___x_2457_);
v___x_2459_ = lean_usize_of_nat(v___x_2450_);
v___x_2460_ = ((size_t)1ULL);
v___x_2461_ = lean_usize_sub(v___x_2459_, v___x_2460_);
v___x_2462_ = lean_usize_land(v___x_2458_, v___x_2461_);
v___x_2463_ = lean_array_uget_borrowed(v_buckets_2449_, v___x_2462_);
v___x_2464_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(v_a_2448_, v___x_2463_);
return v___x_2464_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg___boxed(lean_object* v_m_2465_, lean_object* v_a_2466_){
_start:
{
lean_object* v_res_2467_; 
v_res_2467_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_m_2465_, v_a_2466_);
lean_dec_ref(v_a_2466_);
lean_dec_ref(v_m_2465_);
return v_res_2467_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1(void){
_start:
{
lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; 
v___x_2469_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__3));
v___x_2470_ = lean_unsigned_to_nat(26u);
v___x_2471_ = lean_unsigned_to_nat(152u);
v___x_2472_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__0));
v___x_2473_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2474_ = l_mkPanicMessageWithDecl(v___x_2473_, v___x_2472_, v___x_2471_, v___x_2470_, v___x_2469_);
return v___x_2474_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData(lean_object* v_e_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_){
_start:
{
lean_object* v_e_x27_2480_; lean_object* v_visitedNames_2481_; lean_object* v_visitedLevels_2482_; lean_object* v_visitedExprs_2483_; lean_object* v_visitedConstants_2484_; lean_object* v_noMDataExprs_2485_; uint8_t v_exportMData_2486_; uint8_t v_exportUnsafe_2487_; uint8_t v_ignoreMissing_2488_; lean_object* v_recursorMap_2489_; lean_object* v_e_x27_2495_; lean_object* v___y_2496_; lean_object* v_visitedNames_2506_; lean_object* v_visitedLevels_2507_; lean_object* v_visitedExprs_2508_; lean_object* v_visitedConstants_2509_; lean_object* v_noMDataExprs_2510_; uint8_t v_exportMData_2511_; uint8_t v_exportUnsafe_2512_; uint8_t v_ignoreMissing_2513_; lean_object* v_recursorMap_2514_; lean_object* v___x_2515_; 
v_visitedNames_2506_ = lean_ctor_get(v_a_2477_, 0);
v_visitedLevels_2507_ = lean_ctor_get(v_a_2477_, 1);
v_visitedExprs_2508_ = lean_ctor_get(v_a_2477_, 2);
v_visitedConstants_2509_ = lean_ctor_get(v_a_2477_, 3);
v_noMDataExprs_2510_ = lean_ctor_get(v_a_2477_, 4);
v_exportMData_2511_ = lean_ctor_get_uint8(v_a_2477_, sizeof(void*)*6);
v_exportUnsafe_2512_ = lean_ctor_get_uint8(v_a_2477_, sizeof(void*)*6 + 1);
v_ignoreMissing_2513_ = lean_ctor_get_uint8(v_a_2477_, sizeof(void*)*6 + 2);
v_recursorMap_2514_ = lean_ctor_get(v_a_2477_, 5);
v___x_2515_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_noMDataExprs_2510_, v_e_2475_);
if (lean_obj_tag(v___x_2515_) == 1)
{
lean_object* v_val_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2524_; 
lean_dec_ref(v_e_2475_);
v_val_2516_ = lean_ctor_get(v___x_2515_, 0);
v_isSharedCheck_2524_ = !lean_is_exclusive(v___x_2515_);
if (v_isSharedCheck_2524_ == 0)
{
v___x_2518_ = v___x_2515_;
v_isShared_2519_ = v_isSharedCheck_2524_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_val_2516_);
lean_dec(v___x_2515_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2524_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2520_; lean_object* v___x_2522_; 
v___x_2520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2520_, 0, v_val_2516_);
lean_ctor_set(v___x_2520_, 1, v_a_2477_);
if (v_isShared_2519_ == 0)
{
lean_ctor_set_tag(v___x_2518_, 0);
lean_ctor_set(v___x_2518_, 0, v___x_2520_);
v___x_2522_ = v___x_2518_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v___x_2520_);
v___x_2522_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
return v___x_2522_;
}
}
}
else
{
lean_dec(v___x_2515_);
switch(lean_obj_tag(v_e_2475_))
{
case 1:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; 
v___x_2525_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1, &l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1_once, _init_l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1);
v___x_2526_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(v___x_2525_, v_a_2476_, v_a_2477_);
if (lean_obj_tag(v___x_2526_) == 0)
{
lean_object* v_a_2527_; lean_object* v_fst_2528_; lean_object* v_snd_2529_; 
v_a_2527_ = lean_ctor_get(v___x_2526_, 0);
lean_inc(v_a_2527_);
lean_dec_ref_known(v___x_2526_, 1);
v_fst_2528_ = lean_ctor_get(v_a_2527_, 0);
lean_inc(v_fst_2528_);
v_snd_2529_ = lean_ctor_get(v_a_2527_, 1);
lean_inc(v_snd_2529_);
lean_dec(v_a_2527_);
v_e_x27_2495_ = v_fst_2528_;
v___y_2496_ = v_snd_2529_;
goto v___jp_2494_;
}
else
{
lean_dec_ref_known(v_e_2475_, 1);
return v___x_2526_;
}
}
case 2:
{
lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2530_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1, &l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1_once, _init_l___private_LeanExport_Basic_0__LeanExport_removeMData___closed__1);
v___x_2531_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__2(v___x_2530_, v_a_2476_, v_a_2477_);
if (lean_obj_tag(v___x_2531_) == 0)
{
lean_object* v_a_2532_; lean_object* v_fst_2533_; lean_object* v_snd_2534_; 
v_a_2532_ = lean_ctor_get(v___x_2531_, 0);
lean_inc(v_a_2532_);
lean_dec_ref_known(v___x_2531_, 1);
v_fst_2533_ = lean_ctor_get(v_a_2532_, 0);
lean_inc(v_fst_2533_);
v_snd_2534_ = lean_ctor_get(v_a_2532_, 1);
lean_inc(v_snd_2534_);
lean_dec(v_a_2532_);
v_e_x27_2495_ = v_fst_2533_;
v___y_2496_ = v_snd_2534_;
goto v___jp_2494_;
}
else
{
lean_dec_ref_known(v_e_2475_, 1);
return v___x_2531_;
}
}
case 5:
{
lean_object* v_fn_2535_; lean_object* v_arg_2536_; lean_object* v___x_2537_; 
v_fn_2535_ = lean_ctor_get(v_e_2475_, 0);
v_arg_2536_ = lean_ctor_get(v_e_2475_, 1);
lean_inc_ref(v_fn_2535_);
v___x_2537_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_fn_2535_, v_a_2476_, v_a_2477_);
if (lean_obj_tag(v___x_2537_) == 0)
{
lean_object* v_a_2538_; lean_object* v_fst_2539_; lean_object* v_snd_2540_; lean_object* v___x_2541_; 
v_a_2538_ = lean_ctor_get(v___x_2537_, 0);
lean_inc(v_a_2538_);
lean_dec_ref_known(v___x_2537_, 1);
v_fst_2539_ = lean_ctor_get(v_a_2538_, 0);
lean_inc(v_fst_2539_);
v_snd_2540_ = lean_ctor_get(v_a_2538_, 1);
lean_inc(v_snd_2540_);
lean_dec(v_a_2538_);
lean_inc_ref(v_arg_2536_);
v___x_2541_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_arg_2536_, v_a_2476_, v_snd_2540_);
if (lean_obj_tag(v___x_2541_) == 0)
{
lean_object* v_a_2542_; lean_object* v_fst_2543_; lean_object* v_snd_2544_; size_t v___x_2545_; size_t v___x_2546_; uint8_t v___x_2547_; 
v_a_2542_ = lean_ctor_get(v___x_2541_, 0);
lean_inc(v_a_2542_);
lean_dec_ref_known(v___x_2541_, 1);
v_fst_2543_ = lean_ctor_get(v_a_2542_, 0);
lean_inc(v_fst_2543_);
v_snd_2544_ = lean_ctor_get(v_a_2542_, 1);
lean_inc(v_snd_2544_);
lean_dec(v_a_2542_);
v___x_2545_ = lean_ptr_addr(v_fn_2535_);
v___x_2546_ = lean_ptr_addr(v_fst_2539_);
v___x_2547_ = lean_usize_dec_eq(v___x_2545_, v___x_2546_);
if (v___x_2547_ == 0)
{
lean_object* v___x_2548_; 
v___x_2548_ = l_Lean_Expr_app___override(v_fst_2539_, v_fst_2543_);
v_e_x27_2495_ = v___x_2548_;
v___y_2496_ = v_snd_2544_;
goto v___jp_2494_;
}
else
{
size_t v___x_2549_; size_t v___x_2550_; uint8_t v___x_2551_; 
v___x_2549_ = lean_ptr_addr(v_arg_2536_);
v___x_2550_ = lean_ptr_addr(v_fst_2543_);
v___x_2551_ = lean_usize_dec_eq(v___x_2549_, v___x_2550_);
if (v___x_2551_ == 0)
{
lean_object* v___x_2552_; 
v___x_2552_ = l_Lean_Expr_app___override(v_fst_2539_, v_fst_2543_);
v_e_x27_2495_ = v___x_2552_;
v___y_2496_ = v_snd_2544_;
goto v___jp_2494_;
}
else
{
lean_dec(v_fst_2543_);
lean_dec(v_fst_2539_);
lean_inc_ref(v_e_2475_);
v_e_x27_2495_ = v_e_2475_;
v___y_2496_ = v_snd_2544_;
goto v___jp_2494_;
}
}
}
else
{
lean_dec(v_fst_2539_);
lean_dec_ref_known(v_e_2475_, 2);
return v___x_2541_;
}
}
else
{
lean_dec_ref_known(v_e_2475_, 2);
return v___x_2537_;
}
}
case 6:
{
lean_object* v_binderName_2553_; lean_object* v_binderType_2554_; lean_object* v_body_2555_; uint8_t v_binderInfo_2556_; lean_object* v___x_2557_; 
v_binderName_2553_ = lean_ctor_get(v_e_2475_, 0);
v_binderType_2554_ = lean_ctor_get(v_e_2475_, 1);
v_body_2555_ = lean_ctor_get(v_e_2475_, 2);
v_binderInfo_2556_ = lean_ctor_get_uint8(v_e_2475_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2554_);
v___x_2557_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_binderType_2554_, v_a_2476_, v_a_2477_);
if (lean_obj_tag(v___x_2557_) == 0)
{
lean_object* v_a_2558_; lean_object* v_fst_2559_; lean_object* v_snd_2560_; lean_object* v___x_2561_; 
v_a_2558_ = lean_ctor_get(v___x_2557_, 0);
lean_inc(v_a_2558_);
lean_dec_ref_known(v___x_2557_, 1);
v_fst_2559_ = lean_ctor_get(v_a_2558_, 0);
lean_inc(v_fst_2559_);
v_snd_2560_ = lean_ctor_get(v_a_2558_, 1);
lean_inc(v_snd_2560_);
lean_dec(v_a_2558_);
lean_inc_ref(v_body_2555_);
v___x_2561_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_body_2555_, v_a_2476_, v_snd_2560_);
if (lean_obj_tag(v___x_2561_) == 0)
{
lean_object* v_a_2562_; lean_object* v_fst_2563_; lean_object* v_snd_2564_; size_t v___x_2565_; size_t v___x_2566_; uint8_t v___x_2567_; 
v_a_2562_ = lean_ctor_get(v___x_2561_, 0);
lean_inc(v_a_2562_);
lean_dec_ref_known(v___x_2561_, 1);
v_fst_2563_ = lean_ctor_get(v_a_2562_, 0);
lean_inc(v_fst_2563_);
v_snd_2564_ = lean_ctor_get(v_a_2562_, 1);
lean_inc(v_snd_2564_);
lean_dec(v_a_2562_);
v___x_2565_ = lean_ptr_addr(v_binderType_2554_);
v___x_2566_ = lean_ptr_addr(v_fst_2559_);
v___x_2567_ = lean_usize_dec_eq(v___x_2565_, v___x_2566_);
if (v___x_2567_ == 0)
{
lean_object* v___x_2568_; 
lean_inc(v_binderName_2553_);
v___x_2568_ = l_Lean_Expr_lam___override(v_binderName_2553_, v_fst_2559_, v_fst_2563_, v_binderInfo_2556_);
v_e_x27_2495_ = v___x_2568_;
v___y_2496_ = v_snd_2564_;
goto v___jp_2494_;
}
else
{
size_t v___x_2569_; size_t v___x_2570_; uint8_t v___x_2571_; 
v___x_2569_ = lean_ptr_addr(v_body_2555_);
v___x_2570_ = lean_ptr_addr(v_fst_2563_);
v___x_2571_ = lean_usize_dec_eq(v___x_2569_, v___x_2570_);
if (v___x_2571_ == 0)
{
lean_object* v___x_2572_; 
lean_inc(v_binderName_2553_);
v___x_2572_ = l_Lean_Expr_lam___override(v_binderName_2553_, v_fst_2559_, v_fst_2563_, v_binderInfo_2556_);
v_e_x27_2495_ = v___x_2572_;
v___y_2496_ = v_snd_2564_;
goto v___jp_2494_;
}
else
{
uint8_t v___x_2573_; 
v___x_2573_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2556_, v_binderInfo_2556_);
if (v___x_2573_ == 0)
{
lean_object* v___x_2574_; 
lean_inc(v_binderName_2553_);
v___x_2574_ = l_Lean_Expr_lam___override(v_binderName_2553_, v_fst_2559_, v_fst_2563_, v_binderInfo_2556_);
v_e_x27_2495_ = v___x_2574_;
v___y_2496_ = v_snd_2564_;
goto v___jp_2494_;
}
else
{
lean_dec(v_fst_2563_);
lean_dec(v_fst_2559_);
lean_inc_ref(v_e_2475_);
v_e_x27_2495_ = v_e_2475_;
v___y_2496_ = v_snd_2564_;
goto v___jp_2494_;
}
}
}
}
else
{
lean_dec(v_fst_2559_);
lean_dec_ref_known(v_e_2475_, 3);
return v___x_2561_;
}
}
else
{
lean_dec_ref_known(v_e_2475_, 3);
return v___x_2557_;
}
}
case 7:
{
lean_object* v_binderName_2575_; lean_object* v_binderType_2576_; lean_object* v_body_2577_; uint8_t v_binderInfo_2578_; lean_object* v___x_2579_; 
v_binderName_2575_ = lean_ctor_get(v_e_2475_, 0);
v_binderType_2576_ = lean_ctor_get(v_e_2475_, 1);
v_body_2577_ = lean_ctor_get(v_e_2475_, 2);
v_binderInfo_2578_ = lean_ctor_get_uint8(v_e_2475_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2576_);
v___x_2579_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_binderType_2576_, v_a_2476_, v_a_2477_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_object* v_a_2580_; lean_object* v_fst_2581_; lean_object* v_snd_2582_; lean_object* v___x_2583_; 
v_a_2580_ = lean_ctor_get(v___x_2579_, 0);
lean_inc(v_a_2580_);
lean_dec_ref_known(v___x_2579_, 1);
v_fst_2581_ = lean_ctor_get(v_a_2580_, 0);
lean_inc(v_fst_2581_);
v_snd_2582_ = lean_ctor_get(v_a_2580_, 1);
lean_inc(v_snd_2582_);
lean_dec(v_a_2580_);
lean_inc_ref(v_body_2577_);
v___x_2583_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_body_2577_, v_a_2476_, v_snd_2582_);
if (lean_obj_tag(v___x_2583_) == 0)
{
lean_object* v_a_2584_; lean_object* v_fst_2585_; lean_object* v_snd_2586_; size_t v___x_2587_; size_t v___x_2588_; uint8_t v___x_2589_; 
v_a_2584_ = lean_ctor_get(v___x_2583_, 0);
lean_inc(v_a_2584_);
lean_dec_ref_known(v___x_2583_, 1);
v_fst_2585_ = lean_ctor_get(v_a_2584_, 0);
lean_inc(v_fst_2585_);
v_snd_2586_ = lean_ctor_get(v_a_2584_, 1);
lean_inc(v_snd_2586_);
lean_dec(v_a_2584_);
v___x_2587_ = lean_ptr_addr(v_binderType_2576_);
v___x_2588_ = lean_ptr_addr(v_fst_2581_);
v___x_2589_ = lean_usize_dec_eq(v___x_2587_, v___x_2588_);
if (v___x_2589_ == 0)
{
lean_object* v___x_2590_; 
lean_inc(v_binderName_2575_);
v___x_2590_ = l_Lean_Expr_forallE___override(v_binderName_2575_, v_fst_2581_, v_fst_2585_, v_binderInfo_2578_);
v_e_x27_2495_ = v___x_2590_;
v___y_2496_ = v_snd_2586_;
goto v___jp_2494_;
}
else
{
size_t v___x_2591_; size_t v___x_2592_; uint8_t v___x_2593_; 
v___x_2591_ = lean_ptr_addr(v_body_2577_);
v___x_2592_ = lean_ptr_addr(v_fst_2585_);
v___x_2593_ = lean_usize_dec_eq(v___x_2591_, v___x_2592_);
if (v___x_2593_ == 0)
{
lean_object* v___x_2594_; 
lean_inc(v_binderName_2575_);
v___x_2594_ = l_Lean_Expr_forallE___override(v_binderName_2575_, v_fst_2581_, v_fst_2585_, v_binderInfo_2578_);
v_e_x27_2495_ = v___x_2594_;
v___y_2496_ = v_snd_2586_;
goto v___jp_2494_;
}
else
{
uint8_t v___x_2595_; 
v___x_2595_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2578_, v_binderInfo_2578_);
if (v___x_2595_ == 0)
{
lean_object* v___x_2596_; 
lean_inc(v_binderName_2575_);
v___x_2596_ = l_Lean_Expr_forallE___override(v_binderName_2575_, v_fst_2581_, v_fst_2585_, v_binderInfo_2578_);
v_e_x27_2495_ = v___x_2596_;
v___y_2496_ = v_snd_2586_;
goto v___jp_2494_;
}
else
{
lean_dec(v_fst_2585_);
lean_dec(v_fst_2581_);
lean_inc_ref(v_e_2475_);
v_e_x27_2495_ = v_e_2475_;
v___y_2496_ = v_snd_2586_;
goto v___jp_2494_;
}
}
}
}
else
{
lean_dec(v_fst_2581_);
lean_dec_ref_known(v_e_2475_, 3);
return v___x_2583_;
}
}
else
{
lean_dec_ref_known(v_e_2475_, 3);
return v___x_2579_;
}
}
case 8:
{
lean_object* v_declName_2597_; lean_object* v_type_2598_; lean_object* v_value_2599_; lean_object* v_body_2600_; uint8_t v_nondep_2601_; lean_object* v___x_2602_; 
v_declName_2597_ = lean_ctor_get(v_e_2475_, 0);
v_type_2598_ = lean_ctor_get(v_e_2475_, 1);
v_value_2599_ = lean_ctor_get(v_e_2475_, 2);
v_body_2600_ = lean_ctor_get(v_e_2475_, 3);
v_nondep_2601_ = lean_ctor_get_uint8(v_e_2475_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_2598_);
v___x_2602_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_type_2598_, v_a_2476_, v_a_2477_);
if (lean_obj_tag(v___x_2602_) == 0)
{
lean_object* v_a_2603_; lean_object* v_fst_2604_; lean_object* v_snd_2605_; lean_object* v___x_2606_; 
v_a_2603_ = lean_ctor_get(v___x_2602_, 0);
lean_inc(v_a_2603_);
lean_dec_ref_known(v___x_2602_, 1);
v_fst_2604_ = lean_ctor_get(v_a_2603_, 0);
lean_inc(v_fst_2604_);
v_snd_2605_ = lean_ctor_get(v_a_2603_, 1);
lean_inc(v_snd_2605_);
lean_dec(v_a_2603_);
lean_inc_ref(v_value_2599_);
v___x_2606_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_value_2599_, v_a_2476_, v_snd_2605_);
if (lean_obj_tag(v___x_2606_) == 0)
{
lean_object* v_a_2607_; lean_object* v_fst_2608_; lean_object* v_snd_2609_; lean_object* v___x_2610_; 
v_a_2607_ = lean_ctor_get(v___x_2606_, 0);
lean_inc(v_a_2607_);
lean_dec_ref_known(v___x_2606_, 1);
v_fst_2608_ = lean_ctor_get(v_a_2607_, 0);
lean_inc(v_fst_2608_);
v_snd_2609_ = lean_ctor_get(v_a_2607_, 1);
lean_inc(v_snd_2609_);
lean_dec(v_a_2607_);
lean_inc_ref(v_body_2600_);
v___x_2610_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_body_2600_, v_a_2476_, v_snd_2609_);
if (lean_obj_tag(v___x_2610_) == 0)
{
lean_object* v_a_2611_; lean_object* v_fst_2612_; lean_object* v_snd_2613_; uint8_t v___x_2614_; size_t v___x_2615_; size_t v___x_2616_; uint8_t v___x_2617_; 
v_a_2611_ = lean_ctor_get(v___x_2610_, 0);
lean_inc(v_a_2611_);
lean_dec_ref_known(v___x_2610_, 1);
v_fst_2612_ = lean_ctor_get(v_a_2611_, 0);
lean_inc(v_fst_2612_);
v_snd_2613_ = lean_ctor_get(v_a_2611_, 1);
lean_inc(v_snd_2613_);
lean_dec(v_a_2611_);
v___x_2614_ = 0;
v___x_2615_ = lean_ptr_addr(v_type_2598_);
v___x_2616_ = lean_ptr_addr(v_fst_2604_);
v___x_2617_ = lean_usize_dec_eq(v___x_2615_, v___x_2616_);
if (v___x_2617_ == 0)
{
lean_object* v___x_2618_; 
lean_inc(v_declName_2597_);
v___x_2618_ = l_Lean_Expr_letE___override(v_declName_2597_, v_fst_2604_, v_fst_2608_, v_fst_2612_, v___x_2614_);
v_e_x27_2495_ = v___x_2618_;
v___y_2496_ = v_snd_2613_;
goto v___jp_2494_;
}
else
{
size_t v___x_2619_; size_t v___x_2620_; uint8_t v___x_2621_; 
v___x_2619_ = lean_ptr_addr(v_value_2599_);
v___x_2620_ = lean_ptr_addr(v_fst_2608_);
v___x_2621_ = lean_usize_dec_eq(v___x_2619_, v___x_2620_);
if (v___x_2621_ == 0)
{
lean_object* v___x_2622_; 
lean_inc(v_declName_2597_);
v___x_2622_ = l_Lean_Expr_letE___override(v_declName_2597_, v_fst_2604_, v_fst_2608_, v_fst_2612_, v___x_2614_);
v_e_x27_2495_ = v___x_2622_;
v___y_2496_ = v_snd_2613_;
goto v___jp_2494_;
}
else
{
size_t v___x_2623_; size_t v___x_2624_; uint8_t v___x_2625_; 
v___x_2623_ = lean_ptr_addr(v_body_2600_);
v___x_2624_ = lean_ptr_addr(v_fst_2612_);
v___x_2625_ = lean_usize_dec_eq(v___x_2623_, v___x_2624_);
if (v___x_2625_ == 0)
{
lean_object* v___x_2626_; 
lean_inc(v_declName_2597_);
v___x_2626_ = l_Lean_Expr_letE___override(v_declName_2597_, v_fst_2604_, v_fst_2608_, v_fst_2612_, v___x_2614_);
v_e_x27_2495_ = v___x_2626_;
v___y_2496_ = v_snd_2613_;
goto v___jp_2494_;
}
else
{
if (v_nondep_2601_ == 0)
{
lean_dec(v_fst_2612_);
lean_dec(v_fst_2608_);
lean_dec(v_fst_2604_);
lean_inc_ref(v_e_2475_);
v_e_x27_2495_ = v_e_2475_;
v___y_2496_ = v_snd_2613_;
goto v___jp_2494_;
}
else
{
lean_object* v___x_2627_; 
lean_inc(v_declName_2597_);
v___x_2627_ = l_Lean_Expr_letE___override(v_declName_2597_, v_fst_2604_, v_fst_2608_, v_fst_2612_, v___x_2614_);
v_e_x27_2495_ = v___x_2627_;
v___y_2496_ = v_snd_2613_;
goto v___jp_2494_;
}
}
}
}
}
else
{
lean_dec(v_fst_2608_);
lean_dec(v_fst_2604_);
lean_dec_ref_known(v_e_2475_, 4);
return v___x_2610_;
}
}
else
{
lean_dec(v_fst_2604_);
lean_dec_ref_known(v_e_2475_, 4);
return v___x_2606_;
}
}
else
{
lean_dec_ref_known(v_e_2475_, 4);
return v___x_2602_;
}
}
case 10:
{
lean_object* v_expr_2628_; lean_object* v___x_2629_; 
v_expr_2628_ = lean_ctor_get(v_e_2475_, 1);
lean_inc_ref(v_expr_2628_);
v___x_2629_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_expr_2628_, v_a_2476_, v_a_2477_);
if (lean_obj_tag(v___x_2629_) == 0)
{
lean_object* v_a_2630_; lean_object* v_fst_2631_; lean_object* v_snd_2632_; 
v_a_2630_ = lean_ctor_get(v___x_2629_, 0);
lean_inc(v_a_2630_);
lean_dec_ref_known(v___x_2629_, 1);
v_fst_2631_ = lean_ctor_get(v_a_2630_, 0);
lean_inc(v_fst_2631_);
v_snd_2632_ = lean_ctor_get(v_a_2630_, 1);
lean_inc(v_snd_2632_);
lean_dec(v_a_2630_);
v_e_x27_2495_ = v_fst_2631_;
v___y_2496_ = v_snd_2632_;
goto v___jp_2494_;
}
else
{
lean_dec_ref_known(v_e_2475_, 2);
return v___x_2629_;
}
}
case 11:
{
lean_object* v_typeName_2633_; lean_object* v_idx_2634_; lean_object* v_struct_2635_; lean_object* v___x_2636_; 
v_typeName_2633_ = lean_ctor_get(v_e_2475_, 0);
v_idx_2634_ = lean_ctor_get(v_e_2475_, 1);
v_struct_2635_ = lean_ctor_get(v_e_2475_, 2);
lean_inc_ref(v_struct_2635_);
v___x_2636_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_struct_2635_, v_a_2476_, v_a_2477_);
if (lean_obj_tag(v___x_2636_) == 0)
{
lean_object* v_a_2637_; lean_object* v_fst_2638_; lean_object* v_snd_2639_; size_t v___x_2640_; size_t v___x_2641_; uint8_t v___x_2642_; 
v_a_2637_ = lean_ctor_get(v___x_2636_, 0);
lean_inc(v_a_2637_);
lean_dec_ref_known(v___x_2636_, 1);
v_fst_2638_ = lean_ctor_get(v_a_2637_, 0);
lean_inc(v_fst_2638_);
v_snd_2639_ = lean_ctor_get(v_a_2637_, 1);
lean_inc(v_snd_2639_);
lean_dec(v_a_2637_);
v___x_2640_ = lean_ptr_addr(v_struct_2635_);
v___x_2641_ = lean_ptr_addr(v_fst_2638_);
v___x_2642_ = lean_usize_dec_eq(v___x_2640_, v___x_2641_);
if (v___x_2642_ == 0)
{
lean_object* v___x_2643_; 
lean_inc(v_idx_2634_);
lean_inc(v_typeName_2633_);
v___x_2643_ = l_Lean_Expr_proj___override(v_typeName_2633_, v_idx_2634_, v_fst_2638_);
v_e_x27_2495_ = v___x_2643_;
v___y_2496_ = v_snd_2639_;
goto v___jp_2494_;
}
else
{
lean_dec(v_fst_2638_);
lean_inc_ref(v_e_2475_);
v_e_x27_2495_ = v_e_2475_;
v___y_2496_ = v_snd_2639_;
goto v___jp_2494_;
}
}
else
{
lean_dec_ref_known(v_e_2475_, 3);
return v___x_2636_;
}
}
default: 
{
lean_inc(v_recursorMap_2514_);
lean_inc_ref(v_noMDataExprs_2510_);
lean_inc_ref(v_visitedConstants_2509_);
lean_inc_ref(v_visitedExprs_2508_);
lean_inc_ref(v_visitedLevels_2507_);
lean_inc_ref(v_visitedNames_2506_);
lean_dec_ref(v_a_2477_);
lean_inc_ref(v_e_2475_);
v_e_x27_2480_ = v_e_2475_;
v_visitedNames_2481_ = v_visitedNames_2506_;
v_visitedLevels_2482_ = v_visitedLevels_2507_;
v_visitedExprs_2483_ = v_visitedExprs_2508_;
v_visitedConstants_2484_ = v_visitedConstants_2509_;
v_noMDataExprs_2485_ = v_noMDataExprs_2510_;
v_exportMData_2486_ = v_exportMData_2511_;
v_exportUnsafe_2487_ = v_exportUnsafe_2512_;
v_ignoreMissing_2488_ = v_ignoreMissing_2513_;
v_recursorMap_2489_ = v_recursorMap_2514_;
goto v___jp_2479_;
}
}
}
v___jp_2479_:
{
lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; 
lean_inc_ref(v_e_x27_2480_);
v___x_2490_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(v_noMDataExprs_2485_, v_e_2475_, v_e_x27_2480_);
v___x_2491_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_2491_, 0, v_visitedNames_2481_);
lean_ctor_set(v___x_2491_, 1, v_visitedLevels_2482_);
lean_ctor_set(v___x_2491_, 2, v_visitedExprs_2483_);
lean_ctor_set(v___x_2491_, 3, v_visitedConstants_2484_);
lean_ctor_set(v___x_2491_, 4, v___x_2490_);
lean_ctor_set(v___x_2491_, 5, v_recursorMap_2489_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*6, v_exportMData_2486_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*6 + 1, v_exportUnsafe_2487_);
lean_ctor_set_uint8(v___x_2491_, sizeof(void*)*6 + 2, v_ignoreMissing_2488_);
v___x_2492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2492_, 0, v_e_x27_2480_);
lean_ctor_set(v___x_2492_, 1, v___x_2491_);
v___x_2493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2493_, 0, v___x_2492_);
return v___x_2493_;
}
v___jp_2494_:
{
lean_object* v_visitedNames_2497_; lean_object* v_visitedLevels_2498_; lean_object* v_visitedExprs_2499_; lean_object* v_visitedConstants_2500_; lean_object* v_noMDataExprs_2501_; uint8_t v_exportMData_2502_; uint8_t v_exportUnsafe_2503_; uint8_t v_ignoreMissing_2504_; lean_object* v_recursorMap_2505_; 
v_visitedNames_2497_ = lean_ctor_get(v___y_2496_, 0);
lean_inc_ref(v_visitedNames_2497_);
v_visitedLevels_2498_ = lean_ctor_get(v___y_2496_, 1);
lean_inc_ref(v_visitedLevels_2498_);
v_visitedExprs_2499_ = lean_ctor_get(v___y_2496_, 2);
lean_inc_ref(v_visitedExprs_2499_);
v_visitedConstants_2500_ = lean_ctor_get(v___y_2496_, 3);
lean_inc_ref(v_visitedConstants_2500_);
v_noMDataExprs_2501_ = lean_ctor_get(v___y_2496_, 4);
lean_inc_ref(v_noMDataExprs_2501_);
v_exportMData_2502_ = lean_ctor_get_uint8(v___y_2496_, sizeof(void*)*6);
v_exportUnsafe_2503_ = lean_ctor_get_uint8(v___y_2496_, sizeof(void*)*6 + 1);
v_ignoreMissing_2504_ = lean_ctor_get_uint8(v___y_2496_, sizeof(void*)*6 + 2);
v_recursorMap_2505_ = lean_ctor_get(v___y_2496_, 5);
lean_inc(v_recursorMap_2505_);
lean_dec_ref(v___y_2496_);
v_e_x27_2480_ = v_e_x27_2495_;
v_visitedNames_2481_ = v_visitedNames_2497_;
v_visitedLevels_2482_ = v_visitedLevels_2498_;
v_visitedExprs_2483_ = v_visitedExprs_2499_;
v_visitedConstants_2484_ = v_visitedConstants_2500_;
v_noMDataExprs_2485_ = v_noMDataExprs_2501_;
v_exportMData_2486_ = v_exportMData_2502_;
v_exportUnsafe_2487_ = v_exportUnsafe_2503_;
v_ignoreMissing_2488_ = v_ignoreMissing_2504_;
v_recursorMap_2489_ = v_recursorMap_2505_;
goto v___jp_2479_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_removeMData___boxed(lean_object* v_e_2644_, lean_object* v_a_2645_, lean_object* v_a_2646_, lean_object* v_a_2647_){
_start:
{
lean_object* v_res_2648_; 
v_res_2648_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_e_2644_, v_a_2645_, v_a_2646_);
lean_dec_ref(v_a_2645_);
return v_res_2648_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0(lean_object* v_00_u03b2_2649_, lean_object* v_m_2650_, lean_object* v_a_2651_, lean_object* v_b_2652_){
_start:
{
lean_object* v___x_2653_; 
v___x_2653_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(v_m_2650_, v_a_2651_, v_b_2652_);
return v___x_2653_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1(lean_object* v_00_u03b2_2654_, lean_object* v_m_2655_, lean_object* v_a_2656_){
_start:
{
lean_object* v___x_2657_; 
v___x_2657_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_m_2655_, v_a_2656_);
return v___x_2657_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___boxed(lean_object* v_00_u03b2_2658_, lean_object* v_m_2659_, lean_object* v_a_2660_){
_start:
{
lean_object* v_res_2661_; 
v_res_2661_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1(v_00_u03b2_2658_, v_m_2659_, v_a_2660_);
lean_dec_ref(v_a_2660_);
lean_dec_ref(v_m_2659_);
return v_res_2661_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0(lean_object* v_00_u03b2_2662_, lean_object* v_a_2663_, lean_object* v_x_2664_){
_start:
{
uint8_t v___x_2665_; 
v___x_2665_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___redArg(v_a_2663_, v_x_2664_);
return v___x_2665_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2666_, lean_object* v_a_2667_, lean_object* v_x_2668_){
_start:
{
uint8_t v_res_2669_; lean_object* v_r_2670_; 
v_res_2669_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__0(v_00_u03b2_2666_, v_a_2667_, v_x_2668_);
lean_dec(v_x_2668_);
lean_dec_ref(v_a_2667_);
v_r_2670_ = lean_box(v_res_2669_);
return v_r_2670_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1(lean_object* v_00_u03b2_2671_, lean_object* v_data_2672_){
_start:
{
lean_object* v___x_2673_; 
v___x_2673_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1___redArg(v_data_2672_);
return v___x_2673_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2(lean_object* v_00_u03b2_2674_, lean_object* v_a_2675_, lean_object* v_b_2676_, lean_object* v_x_2677_){
_start:
{
lean_object* v___x_2678_; 
v___x_2678_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__2___redArg(v_a_2675_, v_b_2676_, v_x_2677_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4(lean_object* v_00_u03b2_2679_, lean_object* v_a_2680_, lean_object* v_x_2681_){
_start:
{
lean_object* v___x_2682_; 
v___x_2682_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___redArg(v_a_2680_, v_x_2681_);
return v___x_2682_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4___boxed(lean_object* v_00_u03b2_2683_, lean_object* v_a_2684_, lean_object* v_x_2685_){
_start:
{
lean_object* v_res_2686_; 
v_res_2686_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1_spec__4(v_00_u03b2_2683_, v_a_2684_, v_x_2685_);
lean_dec(v_x_2685_);
lean_dec_ref(v_a_2684_);
return v_res_2686_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2687_, lean_object* v_i_2688_, lean_object* v_source_2689_, lean_object* v_target_2690_){
_start:
{
lean_object* v___x_2691_; 
v___x_2691_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3___redArg(v_i_2688_, v_source_2689_, v_target_2690_);
return v___x_2691_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_2692_, lean_object* v_x_2693_, lean_object* v_x_2694_){
_start:
{
lean_object* v___x_2695_; 
v___x_2695_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0_spec__1_spec__3_spec__5___redArg(v_x_2693_, v_x_2694_);
return v___x_2695_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(lean_object* v_fields_2696_, lean_object* v_a_2697_){
_start:
{
lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; 
v___x_2699_ = l_Lean_Json_mkObj(v_fields_2696_);
v___x_2700_ = l_Lean_Json_compress(v___x_2699_);
v___x_2701_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_2700_);
if (lean_obj_tag(v___x_2701_) == 0)
{
lean_object* v_a_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2710_; 
v_a_2702_ = lean_ctor_get(v___x_2701_, 0);
v_isSharedCheck_2710_ = !lean_is_exclusive(v___x_2701_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2704_ = v___x_2701_;
v_isShared_2705_ = v_isSharedCheck_2710_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_a_2702_);
lean_dec(v___x_2701_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2710_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2706_; lean_object* v___x_2708_; 
v___x_2706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2706_, 0, v_a_2702_);
lean_ctor_set(v___x_2706_, 1, v_a_2697_);
if (v_isShared_2705_ == 0)
{
lean_ctor_set(v___x_2704_, 0, v___x_2706_);
v___x_2708_ = v___x_2704_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v___x_2706_);
v___x_2708_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
return v___x_2708_;
}
}
}
else
{
lean_object* v_a_2711_; lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2718_; 
lean_dec_ref(v_a_2697_);
v_a_2711_ = lean_ctor_get(v___x_2701_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___x_2701_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2713_ = v___x_2701_;
v_isShared_2714_ = v_isSharedCheck_2718_;
goto v_resetjp_2712_;
}
else
{
lean_inc(v_a_2711_);
lean_dec(v___x_2701_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2718_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v___x_2716_; 
if (v_isShared_2714_ == 0)
{
v___x_2716_ = v___x_2713_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v_a_2711_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
return v___x_2716_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg___boxed(lean_object* v_fields_2719_, lean_object* v_a_2720_, lean_object* v_a_2721_){
_start:
{
lean_object* v_res_2722_; 
v_res_2722_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v_fields_2719_, v_a_2720_);
lean_dec(v_fields_2719_);
return v_res_2722_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj(lean_object* v_fields_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_){
_start:
{
lean_object* v___x_2727_; 
v___x_2727_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v_fields_2723_, v_a_2725_);
return v___x_2727_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___boxed(lean_object* v_fields_2728_, lean_object* v_a_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_){
_start:
{
lean_object* v_res_2732_; 
v_res_2732_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj(v_fields_2728_, v_a_2729_, v_a_2730_);
lean_dec_ref(v_a_2729_);
lean_dec(v_fields_2728_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg(lean_object* v_t_2733_, lean_object* v_k_2734_){
_start:
{
if (lean_obj_tag(v_t_2733_) == 0)
{
lean_object* v_k_2735_; lean_object* v_v_2736_; lean_object* v_l_2737_; lean_object* v_r_2738_; uint8_t v___x_2739_; 
v_k_2735_ = lean_ctor_get(v_t_2733_, 1);
v_v_2736_ = lean_ctor_get(v_t_2733_, 2);
v_l_2737_ = lean_ctor_get(v_t_2733_, 3);
v_r_2738_ = lean_ctor_get(v_t_2733_, 4);
v___x_2739_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2734_, v_k_2735_);
switch(v___x_2739_)
{
case 0:
{
v_t_2733_ = v_l_2737_;
goto _start;
}
case 1:
{
lean_object* v___x_2741_; 
lean_inc(v_v_2736_);
v___x_2741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2741_, 0, v_v_2736_);
return v___x_2741_;
}
default: 
{
v_t_2733_ = v_r_2738_;
goto _start;
}
}
}
else
{
lean_object* v___x_2743_; 
v___x_2743_ = lean_box(0);
return v___x_2743_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg___boxed(lean_object* v_t_2744_, lean_object* v_k_2745_){
_start:
{
lean_object* v_res_2746_; 
v_res_2746_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg(v_t_2744_, v_k_2745_);
lean_dec(v_k_2745_);
lean_dec(v_t_2744_);
return v_res_2746_;
}
}
static lean_object* _init_l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0(void){
_start:
{
lean_object* v___x_2747_; 
v___x_2747_ = l_Array_instInhabited___redArg();
return v___x_2747_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8(lean_object* v_msg_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_){
_start:
{
lean_object* v___x_2752_; lean_object* v___f_2753_; lean_object* v___f_2754_; lean_object* v___f_2755_; lean_object* v___f_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___f_2766_; lean_object* v___x_163499__overap_2767_; lean_object* v___x_2768_; 
v___x_2752_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2753_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2753_, 0, v___x_2752_);
v___f_2754_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2754_, 0, v___x_2752_);
v___f_2755_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2755_, 0, v___x_2752_);
v___f_2756_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2756_, 0, v___x_2752_);
v___x_2757_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2757_, 0, lean_box(0));
lean_closure_set(v___x_2757_, 1, lean_box(0));
lean_closure_set(v___x_2757_, 2, v___x_2752_);
v___x_2758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2758_, 0, v___x_2757_);
lean_ctor_set(v___x_2758_, 1, v___f_2753_);
v___x_2759_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2759_, 0, lean_box(0));
lean_closure_set(v___x_2759_, 1, lean_box(0));
lean_closure_set(v___x_2759_, 2, v___x_2752_);
v___x_2760_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2760_, 0, v___x_2758_);
lean_ctor_set(v___x_2760_, 1, v___x_2759_);
lean_ctor_set(v___x_2760_, 2, v___f_2754_);
lean_ctor_set(v___x_2760_, 3, v___f_2755_);
lean_ctor_set(v___x_2760_, 4, v___f_2756_);
v___x_2761_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2761_, 0, lean_box(0));
lean_closure_set(v___x_2761_, 1, lean_box(0));
lean_closure_set(v___x_2761_, 2, v___x_2752_);
v___x_2762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2762_, 0, v___x_2760_);
lean_ctor_set(v___x_2762_, 1, v___x_2761_);
v___x_2763_ = lean_obj_once(&l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0, &l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0_once, _init_l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0);
v___x_2764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2764_, 0, v___x_2763_);
v___x_2765_ = l_instInhabitedOfMonad___redArg(v___x_2762_, v___x_2764_);
v___f_2766_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2766_, 0, v___x_2765_);
v___x_163499__overap_2767_ = lean_panic_fn_borrowed(v___f_2766_, v_msg_2748_);
lean_dec_ref(v___f_2766_);
lean_inc_ref(v___y_2749_);
v___x_2768_ = lean_apply_3(v___x_163499__overap_2767_, v___y_2749_, v___y_2750_, lean_box(0));
return v___x_2768_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__8___boxed(lean_object* v_msg_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_){
_start:
{
lean_object* v_res_2773_; 
v_res_2773_ = l_panic___at___00LeanExport_dumpConstant_spec__8(v_msg_2769_, v___y_2770_, v___y_2771_);
lean_dec_ref(v___y_2770_);
return v_res_2773_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__5(lean_object* v_msg_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_){
_start:
{
lean_object* v___x_2778_; lean_object* v___f_2779_; lean_object* v___f_2780_; lean_object* v___f_2781_; lean_object* v___f_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___f_2791_; lean_object* v___x_162777__overap_2792_; lean_object* v___x_2793_; 
v___x_2778_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2779_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2779_, 0, v___x_2778_);
v___f_2780_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2780_, 0, v___x_2778_);
v___f_2781_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2781_, 0, v___x_2778_);
v___f_2782_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2782_, 0, v___x_2778_);
v___x_2783_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2783_, 0, lean_box(0));
lean_closure_set(v___x_2783_, 1, lean_box(0));
lean_closure_set(v___x_2783_, 2, v___x_2778_);
v___x_2784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2783_);
lean_ctor_set(v___x_2784_, 1, v___f_2779_);
v___x_2785_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2785_, 0, lean_box(0));
lean_closure_set(v___x_2785_, 1, lean_box(0));
lean_closure_set(v___x_2785_, 2, v___x_2778_);
v___x_2786_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2786_, 0, v___x_2784_);
lean_ctor_set(v___x_2786_, 1, v___x_2785_);
lean_ctor_set(v___x_2786_, 2, v___f_2780_);
lean_ctor_set(v___x_2786_, 3, v___f_2781_);
lean_ctor_set(v___x_2786_, 4, v___f_2782_);
v___x_2787_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2787_, 0, lean_box(0));
lean_closure_set(v___x_2787_, 1, lean_box(0));
lean_closure_set(v___x_2787_, 2, v___x_2778_);
v___x_2788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2788_, 0, v___x_2786_);
lean_ctor_set(v___x_2788_, 1, v___x_2787_);
v___x_2789_ = lean_box(0);
v___x_2790_ = l_instInhabitedOfMonad___redArg(v___x_2788_, v___x_2789_);
v___f_2791_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2791_, 0, v___x_2790_);
v___x_162777__overap_2792_ = lean_panic_fn_borrowed(v___f_2791_, v_msg_2774_);
lean_dec_ref(v___f_2791_);
lean_inc_ref(v___y_2775_);
v___x_2793_ = lean_apply_3(v___x_162777__overap_2792_, v___y_2775_, v___y_2776_, lean_box(0));
return v___x_2793_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__5___boxed(lean_object* v_msg_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_){
_start:
{
lean_object* v_res_2798_; 
v_res_2798_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v_msg_2794_, v___y_2795_, v___y_2796_);
lean_dec_ref(v___y_2795_);
return v_res_2798_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__6(lean_object* v_msg_2799_){
_start:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; 
v___x_2800_ = l_Lean_instInhabitedConstantInfo_default;
v___x_2801_ = lean_panic_fn_borrowed(v___x_2800_, v_msg_2799_);
return v___x_2801_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; 
v___x_2804_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__1));
v___x_2805_ = lean_unsigned_to_nat(10u);
v___x_2806_ = lean_unsigned_to_nat(334u);
v___x_2807_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_2808_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2809_ = l_mkPanicMessageWithDecl(v___x_2808_, v___x_2807_, v___x_2806_, v___x_2805_, v___x_2804_);
return v___x_2809_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__4(void){
_start:
{
lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; 
v___x_2811_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__3));
v___x_2812_ = lean_unsigned_to_nat(15u);
v___x_2813_ = lean_unsigned_to_nat(336u);
v___x_2814_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_2815_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2816_ = l_mkPanicMessageWithDecl(v___x_2815_, v___x_2814_, v___x_2813_, v___x_2812_, v___x_2811_);
return v___x_2816_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8(void){
_start:
{
lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; 
v___x_2820_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__7));
v___x_2821_ = lean_unsigned_to_nat(14u);
v___x_2822_ = lean_unsigned_to_nat(22u);
v___x_2823_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__6));
v___x_2824_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__5));
v___x_2825_ = l_mkPanicMessageWithDecl(v___x_2824_, v___x_2823_, v___x_2822_, v___x_2821_, v___x_2820_);
return v___x_2825_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(uint8_t v___y_2826_, uint8_t v___x_2827_, lean_object* v_as_x27_2828_, lean_object* v_b_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_){
_start:
{
if (lean_obj_tag(v_as_x27_2828_) == 0)
{
lean_object* v___x_2833_; lean_object* v___x_2834_; 
v___x_2833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2833_, 0, v_b_2829_);
lean_ctor_set(v___x_2833_, 1, v___y_2831_);
v___x_2834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2834_, 0, v___x_2833_);
return v___x_2834_;
}
else
{
lean_object* v_head_2835_; lean_object* v_tail_2836_; lean_object* v___y_2838_; lean_object* v___y_2842_; lean_object* v___y_2877_; lean_object* v___x_2893_; 
v_head_2835_ = lean_ctor_get(v_as_x27_2828_, 0);
v_tail_2836_ = lean_ctor_get(v_as_x27_2828_, 1);
lean_inc(v_head_2835_);
lean_inc_ref(v___y_2830_);
v___x_2893_ = l_Lean_Environment_find_x3f(v___y_2830_, v_head_2835_, v___x_2827_);
if (lean_obj_tag(v___x_2893_) == 0)
{
lean_object* v___x_2894_; lean_object* v___x_2895_; 
v___x_2894_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8);
v___x_2895_ = l_panic___at___00LeanExport_dumpConstant_spec__6(v___x_2894_);
v___y_2877_ = v___x_2895_;
goto v___jp_2876_;
}
else
{
lean_object* v_val_2896_; 
v_val_2896_ = lean_ctor_get(v___x_2893_, 0);
lean_inc(v_val_2896_);
lean_dec_ref_known(v___x_2893_, 1);
v___y_2877_ = v_val_2896_;
goto v___jp_2876_;
}
v___jp_2837_:
{
lean_object* v___x_2839_; 
v___x_2839_ = lean_array_push(v_b_2829_, v___y_2838_);
v_as_x27_2828_ = v_tail_2836_;
v_b_2829_ = v___x_2839_;
goto _start;
}
v___jp_2841_:
{
uint8_t v_exportUnsafe_2843_; 
v_exportUnsafe_2843_ = lean_ctor_get_uint8(v___y_2831_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_2843_ == 0)
{
lean_object* v___x_2844_; lean_object* v___x_2845_; 
lean_dec_ref(v___y_2842_);
lean_dec_ref(v_b_2829_);
v___x_2844_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__2);
v___x_2845_ = l_panic___at___00LeanExport_dumpConstant_spec__8(v___x_2844_, v___y_2830_, v___y_2831_);
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_object* v_a_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2867_; 
v_a_2846_ = lean_ctor_get(v___x_2845_, 0);
v_isSharedCheck_2867_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2867_ == 0)
{
v___x_2848_ = v___x_2845_;
v_isShared_2849_ = v_isSharedCheck_2867_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_a_2846_);
lean_dec(v___x_2845_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2867_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
lean_object* v_fst_2850_; 
v_fst_2850_ = lean_ctor_get(v_a_2846_, 0);
lean_inc(v_fst_2850_);
if (lean_obj_tag(v_fst_2850_) == 0)
{
lean_object* v_snd_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2862_; 
v_snd_2851_ = lean_ctor_get(v_a_2846_, 1);
v_isSharedCheck_2862_ = !lean_is_exclusive(v_a_2846_);
if (v_isSharedCheck_2862_ == 0)
{
lean_object* v_unused_2863_; 
v_unused_2863_ = lean_ctor_get(v_a_2846_, 0);
lean_dec(v_unused_2863_);
v___x_2853_ = v_a_2846_;
v_isShared_2854_ = v_isSharedCheck_2862_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_snd_2851_);
lean_dec(v_a_2846_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2862_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v_a_2855_; lean_object* v___x_2857_; 
v_a_2855_ = lean_ctor_get(v_fst_2850_, 0);
lean_inc(v_a_2855_);
lean_dec_ref_known(v_fst_2850_, 1);
if (v_isShared_2854_ == 0)
{
lean_ctor_set(v___x_2853_, 0, v_a_2855_);
v___x_2857_ = v___x_2853_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2861_; 
v_reuseFailAlloc_2861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2861_, 0, v_a_2855_);
lean_ctor_set(v_reuseFailAlloc_2861_, 1, v_snd_2851_);
v___x_2857_ = v_reuseFailAlloc_2861_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
lean_object* v___x_2859_; 
if (v_isShared_2849_ == 0)
{
lean_ctor_set(v___x_2848_, 0, v___x_2857_);
v___x_2859_ = v___x_2848_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v___x_2857_);
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
lean_object* v_snd_2864_; lean_object* v_a_2865_; 
lean_del_object(v___x_2848_);
v_snd_2864_ = lean_ctor_get(v_a_2846_, 1);
lean_inc(v_snd_2864_);
lean_dec(v_a_2846_);
v_a_2865_ = lean_ctor_get(v_fst_2850_, 0);
lean_inc(v_a_2865_);
lean_dec_ref_known(v_fst_2850_, 1);
v_as_x27_2828_ = v_tail_2836_;
v_b_2829_ = v_a_2865_;
v___y_2831_ = v_snd_2864_;
goto _start;
}
}
}
else
{
lean_object* v_a_2868_; lean_object* v___x_2870_; uint8_t v_isShared_2871_; uint8_t v_isSharedCheck_2875_; 
v_a_2868_ = lean_ctor_get(v___x_2845_, 0);
v_isSharedCheck_2875_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2875_ == 0)
{
v___x_2870_ = v___x_2845_;
v_isShared_2871_ = v_isSharedCheck_2875_;
goto v_resetjp_2869_;
}
else
{
lean_inc(v_a_2868_);
lean_dec(v___x_2845_);
v___x_2870_ = lean_box(0);
v_isShared_2871_ = v_isSharedCheck_2875_;
goto v_resetjp_2869_;
}
v_resetjp_2869_:
{
lean_object* v___x_2873_; 
if (v_isShared_2871_ == 0)
{
v___x_2873_ = v___x_2870_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v_a_2868_);
v___x_2873_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
return v___x_2873_;
}
}
}
}
else
{
v___y_2838_ = v___y_2842_;
goto v___jp_2837_;
}
}
v___jp_2876_:
{
if (lean_obj_tag(v___y_2877_) == 6)
{
lean_object* v_val_2878_; uint8_t v_isUnsafe_2879_; 
v_val_2878_ = lean_ctor_get(v___y_2877_, 0);
lean_inc_ref(v_val_2878_);
lean_dec_ref_known(v___y_2877_, 1);
v_isUnsafe_2879_ = lean_ctor_get_uint8(v_val_2878_, sizeof(void*)*5);
if (v_isUnsafe_2879_ == 0)
{
if (v___y_2826_ == 0)
{
v___y_2842_ = v_val_2878_;
goto v___jp_2841_;
}
else
{
v___y_2838_ = v_val_2878_;
goto v___jp_2837_;
}
}
else
{
v___y_2842_ = v_val_2878_;
goto v___jp_2841_;
}
}
else
{
lean_object* v___x_2880_; lean_object* v___x_2881_; 
lean_dec_ref(v___y_2877_);
v___x_2880_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__4, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__4);
v___x_2881_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_2880_, v___y_2830_, v___y_2831_);
if (lean_obj_tag(v___x_2881_) == 0)
{
lean_object* v_a_2882_; lean_object* v_snd_2883_; 
v_a_2882_ = lean_ctor_get(v___x_2881_, 0);
lean_inc(v_a_2882_);
lean_dec_ref_known(v___x_2881_, 1);
v_snd_2883_ = lean_ctor_get(v_a_2882_, 1);
lean_inc(v_snd_2883_);
lean_dec(v_a_2882_);
v_as_x27_2828_ = v_tail_2836_;
v___y_2831_ = v_snd_2883_;
goto _start;
}
else
{
lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2892_; 
lean_dec_ref(v_b_2829_);
v_a_2885_ = lean_ctor_get(v___x_2881_, 0);
v_isSharedCheck_2892_ = !lean_is_exclusive(v___x_2881_);
if (v_isSharedCheck_2892_ == 0)
{
v___x_2887_ = v___x_2881_;
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v___x_2881_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2892_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
lean_object* v___x_2890_; 
if (v_isShared_2888_ == 0)
{
v___x_2890_ = v___x_2887_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2891_; 
v_reuseFailAlloc_2891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2891_, 0, v_a_2885_);
v___x_2890_ = v_reuseFailAlloc_2891_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
return v___x_2890_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___boxed(lean_object* v___y_2897_, lean_object* v___x_2898_, lean_object* v_as_x27_2899_, lean_object* v_b_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_){
_start:
{
uint8_t v___y_172148__boxed_2904_; uint8_t v___x_172149__boxed_2905_; lean_object* v_res_2906_; 
v___y_172148__boxed_2904_ = lean_unbox(v___y_2897_);
v___x_172149__boxed_2905_ = lean_unbox(v___x_2898_);
v_res_2906_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(v___y_172148__boxed_2904_, v___x_172149__boxed_2905_, v_as_x27_2899_, v_b_2900_, v___y_2901_, v___y_2902_);
lean_dec_ref(v___y_2901_);
lean_dec(v_as_x27_2899_);
return v_res_2906_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__11(lean_object* v_msg_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_){
_start:
{
lean_object* v___x_2911_; lean_object* v___f_2912_; lean_object* v___f_2913_; lean_object* v___f_2914_; lean_object* v___f_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___f_2928_; lean_object* v___x_164180__overap_2929_; lean_object* v___x_2930_; 
v___x_2911_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2912_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2912_, 0, v___x_2911_);
v___f_2913_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2913_, 0, v___x_2911_);
v___f_2914_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2914_, 0, v___x_2911_);
v___f_2915_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2915_, 0, v___x_2911_);
v___x_2916_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2916_, 0, lean_box(0));
lean_closure_set(v___x_2916_, 1, lean_box(0));
lean_closure_set(v___x_2916_, 2, v___x_2911_);
v___x_2917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2917_, 0, v___x_2916_);
lean_ctor_set(v___x_2917_, 1, v___f_2912_);
v___x_2918_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2918_, 0, lean_box(0));
lean_closure_set(v___x_2918_, 1, lean_box(0));
lean_closure_set(v___x_2918_, 2, v___x_2911_);
v___x_2919_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2919_, 0, v___x_2917_);
lean_ctor_set(v___x_2919_, 1, v___x_2918_);
lean_ctor_set(v___x_2919_, 2, v___f_2913_);
lean_ctor_set(v___x_2919_, 3, v___f_2914_);
lean_ctor_set(v___x_2919_, 4, v___f_2915_);
v___x_2920_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2920_, 0, lean_box(0));
lean_closure_set(v___x_2920_, 1, lean_box(0));
lean_closure_set(v___x_2920_, 2, v___x_2911_);
v___x_2921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2919_);
lean_ctor_set(v___x_2921_, 1, v___x_2920_);
v___x_2922_ = lean_obj_once(&l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0, &l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0_once, _init_l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0);
v___x_2923_ = lean_box(1);
v___x_2924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2924_, 0, v___x_2922_);
lean_ctor_set(v___x_2924_, 1, v___x_2923_);
v___x_2925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2925_, 0, v___x_2922_);
lean_ctor_set(v___x_2925_, 1, v___x_2924_);
v___x_2926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2926_, 0, v___x_2925_);
v___x_2927_ = l_instInhabitedOfMonad___redArg(v___x_2921_, v___x_2926_);
v___f_2928_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2928_, 0, v___x_2927_);
v___x_164180__overap_2929_ = lean_panic_fn_borrowed(v___f_2928_, v_msg_2907_);
lean_dec_ref(v___f_2928_);
lean_inc_ref(v___y_2908_);
v___x_2930_ = lean_apply_3(v___x_164180__overap_2929_, v___y_2908_, v___y_2909_, lean_box(0));
return v___x_2930_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__11___boxed(lean_object* v_msg_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_){
_start:
{
lean_object* v_res_2935_; 
v_res_2935_ = l_panic___at___00LeanExport_dumpConstant_spec__11(v_msg_2931_, v___y_2932_, v___y_2933_);
lean_dec_ref(v___y_2932_);
return v_res_2935_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4(lean_object* v_msg_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_){
_start:
{
lean_object* v___x_2940_; lean_object* v___f_2941_; lean_object* v___f_2942_; lean_object* v___f_2943_; lean_object* v___f_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___f_2954_; lean_object* v___x_162765__overap_2955_; lean_object* v___x_2956_; 
v___x_2940_ = lean_obj_once(&l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0, &l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0_once, _init_l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2___closed__0);
v___f_2941_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2941_, 0, v___x_2940_);
v___f_2942_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2942_, 0, v___x_2940_);
v___f_2943_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_2943_, 0, v___x_2940_);
v___f_2944_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_2944_, 0, v___x_2940_);
v___x_2945_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_2945_, 0, lean_box(0));
lean_closure_set(v___x_2945_, 1, lean_box(0));
lean_closure_set(v___x_2945_, 2, v___x_2940_);
v___x_2946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2946_, 0, v___x_2945_);
lean_ctor_set(v___x_2946_, 1, v___f_2941_);
v___x_2947_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_2947_, 0, lean_box(0));
lean_closure_set(v___x_2947_, 1, lean_box(0));
lean_closure_set(v___x_2947_, 2, v___x_2940_);
v___x_2948_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2946_);
lean_ctor_set(v___x_2948_, 1, v___x_2947_);
lean_ctor_set(v___x_2948_, 2, v___f_2942_);
lean_ctor_set(v___x_2948_, 3, v___f_2943_);
lean_ctor_set(v___x_2948_, 4, v___f_2944_);
v___x_2949_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_2949_, 0, lean_box(0));
lean_closure_set(v___x_2949_, 1, lean_box(0));
lean_closure_set(v___x_2949_, 2, v___x_2940_);
v___x_2950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2948_);
lean_ctor_set(v___x_2950_, 1, v___x_2949_);
v___x_2951_ = lean_obj_once(&l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0, &l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0_once, _init_l_panic___at___00LeanExport_dumpConstant_spec__8___closed__0);
v___x_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2952_, 0, v___x_2951_);
v___x_2953_ = l_instInhabitedOfMonad___redArg(v___x_2950_, v___x_2952_);
v___f_2954_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2954_, 0, v___x_2953_);
v___x_162765__overap_2955_ = lean_panic_fn_borrowed(v___f_2954_, v_msg_2936_);
lean_dec_ref(v___f_2954_);
lean_inc_ref(v___y_2937_);
v___x_2956_ = lean_apply_3(v___x_162765__overap_2955_, v___y_2937_, v___y_2938_, lean_box(0));
return v___x_2956_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00LeanExport_dumpConstant_spec__4___boxed(lean_object* v_msg_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l_panic___at___00LeanExport_dumpConstant_spec__4(v_msg_2957_, v___y_2958_, v___y_2959_);
lean_dec_ref(v___y_2958_);
return v_res_2961_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__1(void){
_start:
{
lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
v___x_2963_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__0));
v___x_2964_ = lean_unsigned_to_nat(8u);
v___x_2965_ = lean_unsigned_to_nat(354u);
v___x_2966_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_2967_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2968_ = l_mkPanicMessageWithDecl(v___x_2967_, v___x_2966_, v___x_2965_, v___x_2964_, v___x_2963_);
return v___x_2968_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__3(void){
_start:
{
lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; 
v___x_2970_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__2));
v___x_2971_ = lean_unsigned_to_nat(13u);
v___x_2972_ = lean_unsigned_to_nat(356u);
v___x_2973_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_2974_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_2975_ = l_mkPanicMessageWithDecl(v___x_2974_, v___x_2973_, v___x_2972_, v___x_2971_, v___x_2970_);
return v___x_2975_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21(uint8_t v___x_2976_, lean_object* v_init_2977_, lean_object* v_x_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_){
_start:
{
lean_object* v_d_2983_; lean_object* v___y_2984_; 
if (lean_obj_tag(v_x_2978_) == 0)
{
lean_object* v_k_2988_; lean_object* v_l_2989_; lean_object* v_r_2990_; lean_object* v___x_2991_; 
v_k_2988_ = lean_ctor_get(v_x_2978_, 1);
lean_inc(v_k_2988_);
v_l_2989_ = lean_ctor_get(v_x_2978_, 3);
lean_inc(v_l_2989_);
v_r_2990_ = lean_ctor_get(v_x_2978_, 4);
lean_inc(v_r_2990_);
lean_dec_ref_known(v_x_2978_, 5);
v___x_2991_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21(v___x_2976_, v_init_2977_, v_l_2989_, v___y_2979_, v___y_2980_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; lean_object* v_fst_2993_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc(v_a_2992_);
lean_dec_ref_known(v___x_2991_, 1);
v_fst_2993_ = lean_ctor_get(v_a_2992_, 0);
lean_inc(v_fst_2993_);
if (lean_obj_tag(v_fst_2993_) == 0)
{
lean_object* v_snd_2994_; lean_object* v_a_2995_; 
lean_dec(v_r_2990_);
lean_dec(v_k_2988_);
v_snd_2994_ = lean_ctor_get(v_a_2992_, 1);
lean_inc(v_snd_2994_);
lean_dec(v_a_2992_);
v_a_2995_ = lean_ctor_get(v_fst_2993_, 0);
lean_inc(v_a_2995_);
lean_dec_ref_known(v_fst_2993_, 1);
v_d_2983_ = v_a_2995_;
v___y_2984_ = v_snd_2994_;
goto v___jp_2982_;
}
else
{
lean_object* v_snd_2996_; lean_object* v_a_2997_; lean_object* v___y_2999_; lean_object* v___y_3003_; lean_object* v___x_3029_; 
v_snd_2996_ = lean_ctor_get(v_a_2992_, 1);
lean_inc(v_snd_2996_);
lean_dec(v_a_2992_);
v_a_2997_ = lean_ctor_get(v_fst_2993_, 0);
lean_inc(v_a_2997_);
lean_dec_ref_known(v_fst_2993_, 1);
lean_inc_ref(v___y_2979_);
v___x_3029_ = l_Lean_Environment_find_x3f(v___y_2979_, v_k_2988_, v___x_2976_);
if (lean_obj_tag(v___x_3029_) == 0)
{
lean_object* v___x_3030_; lean_object* v___x_3031_; 
v___x_3030_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8);
v___x_3031_ = l_panic___at___00LeanExport_dumpConstant_spec__6(v___x_3030_);
v___y_3003_ = v___x_3031_;
goto v___jp_3002_;
}
else
{
lean_object* v_val_3032_; 
v_val_3032_ = lean_ctor_get(v___x_3029_, 0);
lean_inc(v_val_3032_);
lean_dec_ref_known(v___x_3029_, 1);
v___y_3003_ = v_val_3032_;
goto v___jp_3002_;
}
v___jp_2998_:
{
lean_object* v___x_3000_; 
v___x_3000_ = lean_array_push(v_a_2997_, v___y_2999_);
v_init_2977_ = v___x_3000_;
v_x_2978_ = v_r_2990_;
v___y_2980_ = v_snd_2996_;
goto _start;
}
v___jp_3002_:
{
if (lean_obj_tag(v___y_3003_) == 7)
{
lean_object* v_val_3004_; uint8_t v_isUnsafe_3005_; 
v_val_3004_ = lean_ctor_get(v___y_3003_, 0);
lean_inc_ref(v_val_3004_);
lean_dec_ref_known(v___y_3003_, 1);
v_isUnsafe_3005_ = lean_ctor_get_uint8(v_val_3004_, sizeof(void*)*7 + 1);
if (v_isUnsafe_3005_ == 0)
{
v___y_2999_ = v_val_3004_;
goto v___jp_2998_;
}
else
{
if (v___x_2976_ == 0)
{
uint8_t v_exportUnsafe_3006_; 
v_exportUnsafe_3006_ = lean_ctor_get_uint8(v_snd_2996_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_3006_ == 0)
{
lean_object* v___x_3007_; lean_object* v___x_3008_; 
lean_dec_ref(v_val_3004_);
lean_dec(v_a_2997_);
v___x_3007_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__1, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__1_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__1);
v___x_3008_ = l_panic___at___00LeanExport_dumpConstant_spec__4(v___x_3007_, v___y_2979_, v_snd_2996_);
if (lean_obj_tag(v___x_3008_) == 0)
{
lean_object* v_a_3009_; lean_object* v_fst_3010_; 
v_a_3009_ = lean_ctor_get(v___x_3008_, 0);
lean_inc(v_a_3009_);
lean_dec_ref_known(v___x_3008_, 1);
v_fst_3010_ = lean_ctor_get(v_a_3009_, 0);
lean_inc(v_fst_3010_);
if (lean_obj_tag(v_fst_3010_) == 0)
{
lean_object* v_snd_3011_; lean_object* v_a_3012_; 
lean_dec(v_r_2990_);
v_snd_3011_ = lean_ctor_get(v_a_3009_, 1);
lean_inc(v_snd_3011_);
lean_dec(v_a_3009_);
v_a_3012_ = lean_ctor_get(v_fst_3010_, 0);
lean_inc(v_a_3012_);
lean_dec_ref_known(v_fst_3010_, 1);
v_d_2983_ = v_a_3012_;
v___y_2984_ = v_snd_3011_;
goto v___jp_2982_;
}
else
{
lean_object* v_snd_3013_; lean_object* v_a_3014_; 
v_snd_3013_ = lean_ctor_get(v_a_3009_, 1);
lean_inc(v_snd_3013_);
lean_dec(v_a_3009_);
v_a_3014_ = lean_ctor_get(v_fst_3010_, 0);
lean_inc(v_a_3014_);
lean_dec_ref_known(v_fst_3010_, 1);
v_init_2977_ = v_a_3014_;
v_x_2978_ = v_r_2990_;
v___y_2980_ = v_snd_3013_;
goto _start;
}
}
else
{
lean_dec(v_r_2990_);
return v___x_3008_;
}
}
else
{
v___y_2999_ = v_val_3004_;
goto v___jp_2998_;
}
}
else
{
v___y_2999_ = v_val_3004_;
goto v___jp_2998_;
}
}
}
else
{
lean_object* v___x_3016_; lean_object* v___x_3017_; 
lean_dec_ref(v___y_3003_);
v___x_3016_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__3, &l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___closed__3);
v___x_3017_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_3016_, v___y_2979_, v_snd_2996_);
if (lean_obj_tag(v___x_3017_) == 0)
{
lean_object* v_a_3018_; lean_object* v_snd_3019_; 
v_a_3018_ = lean_ctor_get(v___x_3017_, 0);
lean_inc(v_a_3018_);
lean_dec_ref_known(v___x_3017_, 1);
v_snd_3019_ = lean_ctor_get(v_a_3018_, 1);
lean_inc(v_snd_3019_);
lean_dec(v_a_3018_);
v_init_2977_ = v_a_2997_;
v_x_2978_ = v_r_2990_;
v___y_2980_ = v_snd_3019_;
goto _start;
}
else
{
lean_object* v_a_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3028_; 
lean_dec(v_a_2997_);
lean_dec(v_r_2990_);
v_a_3021_ = lean_ctor_get(v___x_3017_, 0);
v_isSharedCheck_3028_ = !lean_is_exclusive(v___x_3017_);
if (v_isSharedCheck_3028_ == 0)
{
v___x_3023_ = v___x_3017_;
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_a_3021_);
lean_dec(v___x_3017_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v___x_3026_; 
if (v_isShared_3024_ == 0)
{
v___x_3026_ = v___x_3023_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v_a_3021_);
v___x_3026_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
return v___x_3026_;
}
}
}
}
}
}
}
else
{
lean_dec(v_r_2990_);
lean_dec(v_k_2988_);
return v___x_2991_;
}
}
else
{
lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; 
v___x_3033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3033_, 0, v_init_2977_);
v___x_3034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3034_, 0, v___x_3033_);
lean_ctor_set(v___x_3034_, 1, v___y_2980_);
v___x_3035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3034_);
return v___x_3035_;
}
v___jp_2982_:
{
lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___x_2985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2985_, 0, v_d_2983_);
v___x_2986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2986_, 0, v___x_2985_);
lean_ctor_set(v___x_2986_, 1, v___y_2984_);
v___x_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2987_, 0, v___x_2986_);
return v___x_2987_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21___boxed(lean_object* v___x_3036_, lean_object* v_init_3037_, lean_object* v_x_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_){
_start:
{
uint8_t v___x_172445__boxed_3042_; lean_object* v_res_3043_; 
v___x_172445__boxed_3042_ = lean_unbox(v___x_3036_);
v_res_3043_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21(v___x_172445__boxed_3042_, v_init_3037_, v_x_3038_, v___y_3039_, v___y_3040_);
lean_dec_ref(v___y_3039_);
return v_res_3043_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19_spec__23(size_t v_sz_3044_, size_t v_i_3045_, lean_object* v_bs_3046_){
_start:
{
uint8_t v___x_3047_; 
v___x_3047_ = lean_usize_dec_lt(v_i_3045_, v_sz_3044_);
if (v___x_3047_ == 0)
{
return v_bs_3046_;
}
else
{
lean_object* v_v_3048_; lean_object* v___x_3049_; lean_object* v_bs_x27_3050_; size_t v___x_3051_; size_t v___x_3052_; lean_object* v___x_3053_; 
v_v_3048_ = lean_array_uget(v_bs_3046_, v_i_3045_);
v___x_3049_ = lean_unsigned_to_nat(0u);
v_bs_x27_3050_ = lean_array_uset(v_bs_3046_, v_i_3045_, v___x_3049_);
v___x_3051_ = ((size_t)1ULL);
v___x_3052_ = lean_usize_add(v_i_3045_, v___x_3051_);
v___x_3053_ = lean_array_uset(v_bs_x27_3050_, v_i_3045_, v_v_3048_);
v_i_3045_ = v___x_3052_;
v_bs_3046_ = v___x_3053_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19_spec__23___boxed(lean_object* v_sz_3055_, lean_object* v_i_3056_, lean_object* v_bs_3057_){
_start:
{
size_t v_sz_boxed_3058_; size_t v_i_boxed_3059_; lean_object* v_res_3060_; 
v_sz_boxed_3058_ = lean_unbox_usize(v_sz_3055_);
lean_dec(v_sz_3055_);
v_i_boxed_3059_ = lean_unbox_usize(v_i_3056_);
lean_dec(v_i_3056_);
v_res_3060_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19_spec__23(v_sz_boxed_3058_, v_i_boxed_3059_, v_bs_3057_);
return v_res_3060_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(lean_object* v_a_3061_){
_start:
{
size_t v_sz_3062_; size_t v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; 
v_sz_3062_ = lean_array_size(v_a_3061_);
v___x_3063_ = ((size_t)0ULL);
v___x_3064_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19_spec__23(v_sz_3062_, v___x_3063_, v_a_3061_);
v___x_3065_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3064_);
return v___x_3065_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toJson___at___00LeanExport_dumpConstant_spec__3(lean_object* v_a_3066_){
_start:
{
lean_object* v___x_3067_; lean_object* v___x_3068_; 
v___x_3067_ = lean_array_mk(v_a_3066_);
v___x_3068_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(v___x_3067_);
return v___x_3068_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(lean_object* v_as_3069_, size_t v_sz_3070_, size_t v_i_3071_, lean_object* v_b_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_){
_start:
{
uint8_t v___x_3076_; 
v___x_3076_ = lean_usize_dec_lt(v_i_3071_, v_sz_3070_);
if (v___x_3076_ == 0)
{
lean_object* v___x_3077_; lean_object* v___x_3078_; 
v___x_3077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3077_, 0, v_b_3072_);
lean_ctor_set(v___x_3077_, 1, v___y_3074_);
v___x_3078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3078_, 0, v___x_3077_);
return v___x_3078_;
}
else
{
lean_object* v_visitedNames_3079_; lean_object* v_visitedLevels_3080_; lean_object* v_visitedExprs_3081_; lean_object* v_visitedConstants_3082_; lean_object* v_noMDataExprs_3083_; uint8_t v_exportMData_3084_; uint8_t v_exportUnsafe_3085_; uint8_t v_ignoreMissing_3086_; lean_object* v_recursorMap_3087_; lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3106_; 
v_visitedNames_3079_ = lean_ctor_get(v___y_3074_, 0);
v_visitedLevels_3080_ = lean_ctor_get(v___y_3074_, 1);
v_visitedExprs_3081_ = lean_ctor_get(v___y_3074_, 2);
v_visitedConstants_3082_ = lean_ctor_get(v___y_3074_, 3);
v_noMDataExprs_3083_ = lean_ctor_get(v___y_3074_, 4);
v_exportMData_3084_ = lean_ctor_get_uint8(v___y_3074_, sizeof(void*)*6);
v_exportUnsafe_3085_ = lean_ctor_get_uint8(v___y_3074_, sizeof(void*)*6 + 1);
v_ignoreMissing_3086_ = lean_ctor_get_uint8(v___y_3074_, sizeof(void*)*6 + 2);
v_recursorMap_3087_ = lean_ctor_get(v___y_3074_, 5);
v_isSharedCheck_3106_ = !lean_is_exclusive(v___y_3074_);
if (v_isSharedCheck_3106_ == 0)
{
v___x_3089_ = v___y_3074_;
v_isShared_3090_ = v_isSharedCheck_3106_;
goto v_resetjp_3088_;
}
else
{
lean_inc(v_recursorMap_3087_);
lean_inc(v_noMDataExprs_3083_);
lean_inc(v_visitedConstants_3082_);
lean_inc(v_visitedExprs_3081_);
lean_inc(v_visitedLevels_3080_);
lean_inc(v_visitedNames_3079_);
lean_dec(v___y_3074_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3106_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
lean_object* v_a_3091_; lean_object* v_toConstantVal_3092_; lean_object* v_name_3093_; lean_object* v_type_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3098_; 
v_a_3091_ = lean_array_uget_borrowed(v_as_3069_, v_i_3071_);
v_toConstantVal_3092_ = lean_ctor_get(v_a_3091_, 0);
v_name_3093_ = lean_ctor_get(v_toConstantVal_3092_, 0);
v_type_3094_ = lean_ctor_get(v_toConstantVal_3092_, 2);
v___x_3095_ = lean_box(0);
lean_inc(v_name_3093_);
v___x_3096_ = l_Lean_NameHashSet_insert(v_visitedConstants_3082_, v_name_3093_);
if (v_isShared_3090_ == 0)
{
lean_ctor_set(v___x_3089_, 3, v___x_3096_);
v___x_3098_ = v___x_3089_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3105_; 
v_reuseFailAlloc_3105_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3105_, 0, v_visitedNames_3079_);
lean_ctor_set(v_reuseFailAlloc_3105_, 1, v_visitedLevels_3080_);
lean_ctor_set(v_reuseFailAlloc_3105_, 2, v_visitedExprs_3081_);
lean_ctor_set(v_reuseFailAlloc_3105_, 3, v___x_3096_);
lean_ctor_set(v_reuseFailAlloc_3105_, 4, v_noMDataExprs_3083_);
lean_ctor_set(v_reuseFailAlloc_3105_, 5, v_recursorMap_3087_);
lean_ctor_set_uint8(v_reuseFailAlloc_3105_, sizeof(void*)*6, v_exportMData_3084_);
lean_ctor_set_uint8(v_reuseFailAlloc_3105_, sizeof(void*)*6 + 1, v_exportUnsafe_3085_);
lean_ctor_set_uint8(v_reuseFailAlloc_3105_, sizeof(void*)*6 + 2, v_ignoreMissing_3086_);
v___x_3098_ = v_reuseFailAlloc_3105_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
lean_object* v___x_3099_; 
lean_inc_ref(v_type_3094_);
v___x_3099_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_3094_, v___y_3073_, v___x_3098_);
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
v___x_3103_ = lean_usize_add(v_i_3071_, v___x_3102_);
v_i_3071_ = v___x_3103_;
v_b_3072_ = v___x_3095_;
v___y_3074_ = v_snd_3101_;
goto _start;
}
else
{
return v___x_3099_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg(lean_object* v_as_x27_3107_, lean_object* v_b_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_){
_start:
{
if (lean_obj_tag(v_as_x27_3107_) == 0)
{
lean_object* v___x_3112_; lean_object* v___x_3113_; 
v___x_3112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3112_, 0, v_b_3108_);
lean_ctor_set(v___x_3112_, 1, v___y_3110_);
v___x_3113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3112_);
return v___x_3113_;
}
else
{
lean_object* v_head_3114_; lean_object* v_tail_3115_; lean_object* v_rhs_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
v_head_3114_ = lean_ctor_get(v_as_x27_3107_, 0);
v_tail_3115_ = lean_ctor_get(v_as_x27_3107_, 1);
v_rhs_3116_ = lean_ctor_get(v_head_3114_, 2);
v___x_3117_ = lean_box(0);
lean_inc_ref(v_rhs_3116_);
v___x_3118_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_rhs_3116_, v___y_3109_, v___y_3110_);
if (lean_obj_tag(v___x_3118_) == 0)
{
lean_object* v_a_3119_; lean_object* v_snd_3120_; 
v_a_3119_ = lean_ctor_get(v___x_3118_, 0);
lean_inc(v_a_3119_);
lean_dec_ref_known(v___x_3118_, 1);
v_snd_3120_ = lean_ctor_get(v_a_3119_, 1);
lean_inc(v_snd_3120_);
lean_dec(v_a_3119_);
v_as_x27_3107_ = v_tail_3115_;
v_b_3108_ = v___x_3117_;
v___y_3110_ = v_snd_3120_;
goto _start;
}
else
{
return v___x_3118_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__15(lean_object* v_as_3122_, size_t v_sz_3123_, size_t v_i_3124_, lean_object* v_b_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_){
_start:
{
uint8_t v___x_3129_; 
v___x_3129_ = lean_usize_dec_lt(v_i_3124_, v_sz_3123_);
if (v___x_3129_ == 0)
{
lean_object* v___x_3130_; lean_object* v___x_3131_; 
v___x_3130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3130_, 0, v_b_3125_);
lean_ctor_set(v___x_3130_, 1, v___y_3127_);
v___x_3131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3130_);
return v___x_3131_;
}
else
{
lean_object* v_a_3132_; lean_object* v_rules_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v_a_3132_ = lean_array_uget_borrowed(v_as_3122_, v_i_3124_);
v_rules_3133_ = lean_ctor_get(v_a_3132_, 6);
v___x_3134_ = lean_box(0);
v___x_3135_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg(v_rules_3133_, v___x_3134_, v___y_3126_, v___y_3127_);
if (lean_obj_tag(v___x_3135_) == 0)
{
lean_object* v_a_3136_; lean_object* v_snd_3137_; size_t v___x_3138_; size_t v___x_3139_; 
v_a_3136_ = lean_ctor_get(v___x_3135_, 0);
lean_inc(v_a_3136_);
lean_dec_ref_known(v___x_3135_, 1);
v_snd_3137_ = lean_ctor_get(v_a_3136_, 1);
lean_inc(v_snd_3137_);
lean_dec(v_a_3136_);
v___x_3138_ = ((size_t)1ULL);
v___x_3139_ = lean_usize_add(v_i_3124_, v___x_3138_);
v_i_3124_ = v___x_3139_;
v_b_3125_ = v___x_3134_;
v___y_3127_ = v_snd_3137_;
goto _start;
}
else
{
return v___x_3135_;
}
}
}
}
static lean_object* _init_l_LeanExport_dumpExpr___closed__0(void){
_start:
{
lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; 
v___x_3141_ = lean_box(0);
v___x_3142_ = lean_unsigned_to_nat(16u);
v___x_3143_ = lean_mk_array(v___x_3142_, v___x_3141_);
return v___x_3143_;
}
}
static lean_object* _init_l_LeanExport_dumpExpr___closed__1(void){
_start:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; 
v___x_3144_ = lean_obj_once(&l_LeanExport_dumpExpr___closed__0, &l_LeanExport_dumpExpr___closed__0_once, _init_l_LeanExport_dumpExpr___closed__0);
v___x_3145_ = lean_unsigned_to_nat(0u);
v___x_3146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3145_);
lean_ctor_set(v___x_3146_, 1, v___x_3144_);
return v___x_3146_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(lean_object* v_a_3166_, lean_object* v_a_3167_){
_start:
{
lean_object* v_visitedConstants_3173_; lean_object* v_nat_3174_; uint8_t v___x_3175_; 
v_visitedConstants_3173_ = lean_ctor_get(v_a_3167_, 3);
v_nat_3174_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___closed__1));
v___x_3175_ = l_Lean_NameHashSet_contains(v_visitedConstants_3173_, v_nat_3174_);
if (v___x_3175_ == 0)
{
lean_object* v___x_3176_; 
lean_inc_ref(v_a_3166_);
v___x_3176_ = l_Lean_Environment_find_x3f(v_a_3166_, v_nat_3174_, v___x_3175_);
if (lean_obj_tag(v___x_3176_) == 0)
{
goto v___jp_3169_;
}
else
{
lean_object* v___x_3177_; 
lean_dec_ref_known(v___x_3176_, 1);
v___x_3177_ = l_LeanExport_dumpConstant(v_nat_3174_, v_a_3166_, v_a_3167_);
return v___x_3177_;
}
}
else
{
goto v___jp_3169_;
}
v___jp_3169_:
{
lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3170_ = lean_box(0);
v___x_3171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3170_);
lean_ctor_set(v___x_3171_, 1, v_a_3167_);
v___x_3172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3172_, 0, v___x_3171_);
return v___x_3172_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(lean_object* v_a_3189_, lean_object* v_a_3190_){
_start:
{
lean_object* v___y_3193_; lean_object* v___y_3198_; lean_object* v___y_3199_; lean_object* v_visitedConstants_3200_; lean_object* v_visitedConstants_3205_; lean_object* v_charOfNat_3206_; uint8_t v___x_3207_; 
v_visitedConstants_3205_ = lean_ctor_get(v_a_3190_, 3);
v_charOfNat_3206_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__5));
v___x_3207_ = l_Lean_NameHashSet_contains(v_visitedConstants_3205_, v_charOfNat_3206_);
if (v___x_3207_ == 0)
{
lean_object* v___x_3208_; 
lean_inc_ref(v_a_3189_);
v___x_3208_ = l_Lean_Environment_find_x3f(v_a_3189_, v_charOfNat_3206_, v___x_3207_);
if (lean_obj_tag(v___x_3208_) == 0)
{
lean_inc_ref(v_visitedConstants_3205_);
v___y_3198_ = v_a_3189_;
v___y_3199_ = v_a_3190_;
v_visitedConstants_3200_ = v_visitedConstants_3205_;
goto v___jp_3197_;
}
else
{
lean_object* v___x_3209_; 
lean_dec_ref_known(v___x_3208_, 1);
v___x_3209_ = l_LeanExport_dumpConstant(v_charOfNat_3206_, v_a_3189_, v_a_3190_);
if (lean_obj_tag(v___x_3209_) == 0)
{
lean_object* v_a_3210_; lean_object* v_snd_3211_; lean_object* v_visitedConstants_3212_; 
v_a_3210_ = lean_ctor_get(v___x_3209_, 0);
lean_inc(v_a_3210_);
lean_dec_ref_known(v___x_3209_, 1);
v_snd_3211_ = lean_ctor_get(v_a_3210_, 1);
lean_inc(v_snd_3211_);
lean_dec(v_a_3210_);
v_visitedConstants_3212_ = lean_ctor_get(v_snd_3211_, 3);
lean_inc_ref(v_visitedConstants_3212_);
v___y_3198_ = v_a_3189_;
v___y_3199_ = v_snd_3211_;
v_visitedConstants_3200_ = v_visitedConstants_3212_;
goto v___jp_3197_;
}
else
{
return v___x_3209_;
}
}
}
else
{
lean_inc_ref(v_visitedConstants_3205_);
v___y_3198_ = v_a_3189_;
v___y_3199_ = v_a_3190_;
v_visitedConstants_3200_ = v_visitedConstants_3205_;
goto v___jp_3197_;
}
v___jp_3192_:
{
lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; 
v___x_3194_ = lean_box(0);
v___x_3195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3195_, 0, v___x_3194_);
lean_ctor_set(v___x_3195_, 1, v___y_3193_);
v___x_3196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3196_, 0, v___x_3195_);
return v___x_3196_;
}
v___jp_3197_:
{
lean_object* v___x_3201_; uint8_t v___x_3202_; 
v___x_3201_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___closed__2));
v___x_3202_ = l_Lean_NameHashSet_contains(v_visitedConstants_3200_, v___x_3201_);
lean_dec_ref(v_visitedConstants_3200_);
if (v___x_3202_ == 0)
{
lean_object* v___x_3203_; 
lean_inc_ref(v___y_3198_);
v___x_3203_ = l_Lean_Environment_find_x3f(v___y_3198_, v___x_3201_, v___x_3202_);
if (lean_obj_tag(v___x_3203_) == 0)
{
v___y_3193_ = v___y_3199_;
goto v___jp_3192_;
}
else
{
lean_object* v___x_3204_; 
lean_dec_ref_known(v___x_3203_, 1);
v___x_3204_ = l_LeanExport_dumpConstant(v___x_3201_, v___y_3198_, v___y_3199_);
return v___x_3204_;
}
}
else
{
v___y_3193_ = v___y_3199_;
goto v___jp_3192_;
}
}
}
}
static lean_object* _init_l_LeanExport_dumpExprAux___closed__26(void){
_start:
{
lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; 
v___x_3223_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__25));
v___x_3224_ = lean_unsigned_to_nat(29u);
v___x_3225_ = lean_unsigned_to_nat(177u);
v___x_3226_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__24));
v___x_3227_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_3228_ = l_mkPanicMessageWithDecl(v___x_3227_, v___x_3226_, v___x_3225_, v___x_3224_, v___x_3223_);
return v___x_3228_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExprAux(lean_object* v_e_3229_, lean_object* v_a_3230_, lean_object* v_a_3231_){
_start:
{
lean_object* v_visitedNames_3233_; lean_object* v_visitedLevels_3234_; lean_object* v_visitedExprs_3235_; lean_object* v_visitedConstants_3236_; lean_object* v_noMDataExprs_3237_; uint8_t v_exportMData_3238_; uint8_t v_exportUnsafe_3239_; uint8_t v_ignoreMissing_3240_; lean_object* v_recursorMap_3241_; lean_object* v___x_3242_; 
v_visitedNames_3233_ = lean_ctor_get(v_a_3231_, 0);
v_visitedLevels_3234_ = lean_ctor_get(v_a_3231_, 1);
v_visitedExprs_3235_ = lean_ctor_get(v_a_3231_, 2);
v_visitedConstants_3236_ = lean_ctor_get(v_a_3231_, 3);
v_noMDataExprs_3237_ = lean_ctor_get(v_a_3231_, 4);
v_exportMData_3238_ = lean_ctor_get_uint8(v_a_3231_, sizeof(void*)*6);
v_exportUnsafe_3239_ = lean_ctor_get_uint8(v_a_3231_, sizeof(void*)*6 + 1);
v_ignoreMissing_3240_ = lean_ctor_get_uint8(v_a_3231_, sizeof(void*)*6 + 2);
v_recursorMap_3241_ = lean_ctor_get(v_a_3231_, 5);
v___x_3242_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__1___redArg(v_visitedExprs_3235_, v_e_3229_);
if (lean_obj_tag(v___x_3242_) == 1)
{
lean_object* v_val_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3251_; 
lean_dec_ref(v_e_3229_);
v_val_3243_ = lean_ctor_get(v___x_3242_, 0);
v_isSharedCheck_3251_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3251_ == 0)
{
v___x_3245_ = v___x_3242_;
v_isShared_3246_ = v_isSharedCheck_3251_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_val_3243_);
lean_dec(v___x_3242_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3251_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
lean_object* v___x_3247_; lean_object* v___x_3249_; 
v___x_3247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3247_, 0, v_val_3243_);
lean_ctor_set(v___x_3247_, 1, v_a_3231_);
if (v_isShared_3246_ == 0)
{
lean_ctor_set_tag(v___x_3245_, 0);
lean_ctor_set(v___x_3245_, 0, v___x_3247_);
v___x_3249_ = v___x_3245_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3250_; 
v_reuseFailAlloc_3250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3250_, 0, v___x_3247_);
v___x_3249_ = v_reuseFailAlloc_3250_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
return v___x_3249_;
}
}
}
else
{
lean_object* v___x_3252_; lean_object* v_fst_3254_; lean_object* v_visitedNames_3255_; lean_object* v_visitedLevels_3256_; lean_object* v_visitedExprs_3257_; lean_object* v_visitedConstants_3258_; lean_object* v_noMDataExprs_3259_; uint8_t v_exportMData_3260_; uint8_t v_exportUnsafe_3261_; uint8_t v_ignoreMissing_3262_; lean_object* v_recursorMap_3263_; lean_object* v_fst_3290_; lean_object* v_snd_3291_; 
lean_dec(v___x_3242_);
v___x_3252_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__0));
switch(lean_obj_tag(v_e_3229_))
{
case 0:
{
lean_object* v_deBruijnIndex_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; 
lean_inc(v_recursorMap_3241_);
lean_inc_ref(v_noMDataExprs_3237_);
lean_inc_ref(v_visitedConstants_3236_);
lean_inc_ref(v_visitedExprs_3235_);
lean_inc_ref(v_visitedLevels_3234_);
lean_inc_ref(v_visitedNames_3233_);
lean_dec_ref(v_a_3231_);
v_deBruijnIndex_3301_ = lean_ctor_get(v_e_3229_, 0);
v___x_3302_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__1));
lean_inc(v_deBruijnIndex_3301_);
v___x_3303_ = l_Lean_JsonNumber_fromNat(v_deBruijnIndex_3301_);
v___x_3304_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3303_);
v___x_3305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3305_, 0, v___x_3302_);
lean_ctor_set(v___x_3305_, 1, v___x_3304_);
v___x_3306_ = lean_box(0);
v___x_3307_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3307_, 0, v___x_3305_);
lean_ctor_set(v___x_3307_, 1, v___x_3306_);
v___x_3308_ = l_Lean_Json_mkObj(v___x_3307_);
lean_dec_ref_known(v___x_3307_, 2);
v_fst_3254_ = v___x_3308_;
v_visitedNames_3255_ = v_visitedNames_3233_;
v_visitedLevels_3256_ = v_visitedLevels_3234_;
v_visitedExprs_3257_ = v_visitedExprs_3235_;
v_visitedConstants_3258_ = v_visitedConstants_3236_;
v_noMDataExprs_3259_ = v_noMDataExprs_3237_;
v_exportMData_3260_ = v_exportMData_3238_;
v_exportUnsafe_3261_ = v_exportUnsafe_3239_;
v_ignoreMissing_3262_ = v_ignoreMissing_3240_;
v_recursorMap_3263_ = v_recursorMap_3241_;
goto v___jp_3253_;
}
case 3:
{
lean_object* v_u_3309_; lean_object* v___x_3310_; 
v_u_3309_ = lean_ctor_get(v_e_3229_, 0);
lean_inc(v_u_3309_);
v___x_3310_ = l___private_LeanExport_Basic_0__LeanExport_dumpLevel(v_u_3309_, v_a_3230_, v_a_3231_);
if (lean_obj_tag(v___x_3310_) == 0)
{
lean_object* v_a_3311_; lean_object* v___x_3313_; uint8_t v_isShared_3314_; uint8_t v_isSharedCheck_3332_; 
v_a_3311_ = lean_ctor_get(v___x_3310_, 0);
v_isSharedCheck_3332_ = !lean_is_exclusive(v___x_3310_);
if (v_isSharedCheck_3332_ == 0)
{
v___x_3313_ = v___x_3310_;
v_isShared_3314_ = v_isSharedCheck_3332_;
goto v_resetjp_3312_;
}
else
{
lean_inc(v_a_3311_);
lean_dec(v___x_3310_);
v___x_3313_ = lean_box(0);
v_isShared_3314_ = v_isSharedCheck_3332_;
goto v_resetjp_3312_;
}
v_resetjp_3312_:
{
lean_object* v_fst_3315_; lean_object* v_snd_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3331_; 
v_fst_3315_ = lean_ctor_get(v_a_3311_, 0);
v_snd_3316_ = lean_ctor_get(v_a_3311_, 1);
v_isSharedCheck_3331_ = !lean_is_exclusive(v_a_3311_);
if (v_isSharedCheck_3331_ == 0)
{
v___x_3318_ = v_a_3311_;
v_isShared_3319_ = v_isSharedCheck_3331_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_snd_3316_);
lean_inc(v_fst_3315_);
lean_dec(v_a_3311_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3331_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3323_; 
v___x_3320_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__2));
v___x_3321_ = l_Lean_JsonNumber_fromNat(v_fst_3315_);
if (v_isShared_3314_ == 0)
{
lean_ctor_set_tag(v___x_3313_, 2);
lean_ctor_set(v___x_3313_, 0, v___x_3321_);
v___x_3323_ = v___x_3313_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v___x_3321_);
v___x_3323_ = v_reuseFailAlloc_3330_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
lean_object* v___x_3325_; 
if (v_isShared_3319_ == 0)
{
lean_ctor_set(v___x_3318_, 1, v___x_3323_);
lean_ctor_set(v___x_3318_, 0, v___x_3320_);
v___x_3325_ = v___x_3318_;
goto v_reusejp_3324_;
}
else
{
lean_object* v_reuseFailAlloc_3329_; 
v_reuseFailAlloc_3329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3329_, 0, v___x_3320_);
lean_ctor_set(v_reuseFailAlloc_3329_, 1, v___x_3323_);
v___x_3325_ = v_reuseFailAlloc_3329_;
goto v_reusejp_3324_;
}
v_reusejp_3324_:
{
lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
v___x_3326_ = lean_box(0);
v___x_3327_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3327_, 0, v___x_3325_);
lean_ctor_set(v___x_3327_, 1, v___x_3326_);
v___x_3328_ = l_Lean_Json_mkObj(v___x_3327_);
lean_dec_ref_known(v___x_3327_, 2);
v_fst_3290_ = v___x_3328_;
v_snd_3291_ = v_snd_3316_;
goto v___jp_3289_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3229_, 1);
return v___x_3310_;
}
}
case 4:
{
lean_object* v_declName_3333_; lean_object* v_us_3334_; lean_object* v___x_3335_; 
v_declName_3333_ = lean_ctor_get(v_e_3229_, 0);
v_us_3334_ = lean_ctor_get(v_e_3229_, 1);
lean_inc(v_declName_3333_);
v___x_3335_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_declName_3333_, v_a_3230_, v_a_3231_);
if (lean_obj_tag(v___x_3335_) == 0)
{
lean_object* v_a_3336_; lean_object* v___x_3338_; uint8_t v_isShared_3339_; uint8_t v_isSharedCheck_3383_; 
v_a_3336_ = lean_ctor_get(v___x_3335_, 0);
v_isSharedCheck_3383_ = !lean_is_exclusive(v___x_3335_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3338_ = v___x_3335_;
v_isShared_3339_ = v_isSharedCheck_3383_;
goto v_resetjp_3337_;
}
else
{
lean_inc(v_a_3336_);
lean_dec(v___x_3335_);
v___x_3338_ = lean_box(0);
v_isShared_3339_ = v_isSharedCheck_3383_;
goto v_resetjp_3337_;
}
v_resetjp_3337_:
{
lean_object* v_fst_3340_; lean_object* v_snd_3341_; lean_object* v___x_3343_; uint8_t v_isShared_3344_; uint8_t v_isSharedCheck_3382_; 
v_fst_3340_ = lean_ctor_get(v_a_3336_, 0);
v_snd_3341_ = lean_ctor_get(v_a_3336_, 1);
v_isSharedCheck_3382_ = !lean_is_exclusive(v_a_3336_);
if (v_isSharedCheck_3382_ == 0)
{
v___x_3343_ = v_a_3336_;
v_isShared_3344_ = v_isSharedCheck_3382_;
goto v_resetjp_3342_;
}
else
{
lean_inc(v_snd_3341_);
lean_inc(v_fst_3340_);
lean_dec(v_a_3336_);
v___x_3343_ = lean_box(0);
v_isShared_3344_ = v_isSharedCheck_3382_;
goto v_resetjp_3342_;
}
v_resetjp_3342_:
{
lean_object* v___x_3345_; lean_object* v___x_3346_; 
v___x_3345_ = lean_box(0);
lean_inc(v_us_3334_);
v___x_3346_ = l_List_mapM_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__2(v_us_3334_, v___x_3345_, v_a_3230_, v_snd_3341_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v_a_3347_; lean_object* v_fst_3348_; lean_object* v_snd_3349_; lean_object* v___x_3351_; uint8_t v_isShared_3352_; uint8_t v_isSharedCheck_3373_; 
v_a_3347_ = lean_ctor_get(v___x_3346_, 0);
lean_inc(v_a_3347_);
lean_dec_ref_known(v___x_3346_, 1);
v_fst_3348_ = lean_ctor_get(v_a_3347_, 0);
v_snd_3349_ = lean_ctor_get(v_a_3347_, 1);
v_isSharedCheck_3373_ = !lean_is_exclusive(v_a_3347_);
if (v_isSharedCheck_3373_ == 0)
{
v___x_3351_ = v_a_3347_;
v_isShared_3352_ = v_isSharedCheck_3373_;
goto v_resetjp_3350_;
}
else
{
lean_inc(v_snd_3349_);
lean_inc(v_fst_3348_);
lean_dec(v_a_3347_);
v___x_3351_ = lean_box(0);
v_isShared_3352_ = v_isSharedCheck_3373_;
goto v_resetjp_3350_;
}
v_resetjp_3350_:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3357_; 
v___x_3353_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__3));
v___x_3354_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_3355_ = l_Lean_JsonNumber_fromNat(v_fst_3340_);
if (v_isShared_3339_ == 0)
{
lean_ctor_set_tag(v___x_3338_, 2);
lean_ctor_set(v___x_3338_, 0, v___x_3355_);
v___x_3357_ = v___x_3338_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v___x_3355_);
v___x_3357_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
lean_object* v___x_3359_; 
if (v_isShared_3352_ == 0)
{
lean_ctor_set(v___x_3351_, 1, v___x_3357_);
lean_ctor_set(v___x_3351_, 0, v___x_3354_);
v___x_3359_ = v___x_3351_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3371_; 
v_reuseFailAlloc_3371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3371_, 0, v___x_3354_);
lean_ctor_set(v_reuseFailAlloc_3371_, 1, v___x_3357_);
v___x_3359_ = v_reuseFailAlloc_3371_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3363_; 
v___x_3360_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__4));
v___x_3361_ = l_Lean_List_toJson___at___00__private_LeanExport_Basic_0__LeanExport_dumpUparams_spec__3(v_fst_3348_);
if (v_isShared_3344_ == 0)
{
lean_ctor_set(v___x_3343_, 1, v___x_3361_);
lean_ctor_set(v___x_3343_, 0, v___x_3360_);
v___x_3363_ = v___x_3343_;
goto v_reusejp_3362_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v___x_3360_);
lean_ctor_set(v_reuseFailAlloc_3370_, 1, v___x_3361_);
v___x_3363_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3362_;
}
v_reusejp_3362_:
{
lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3364_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3364_, 0, v___x_3363_);
lean_ctor_set(v___x_3364_, 1, v___x_3345_);
v___x_3365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3365_, 0, v___x_3359_);
lean_ctor_set(v___x_3365_, 1, v___x_3364_);
v___x_3366_ = l_Lean_Json_mkObj(v___x_3365_);
lean_dec_ref_known(v___x_3365_, 2);
v___x_3367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3367_, 0, v___x_3353_);
lean_ctor_set(v___x_3367_, 1, v___x_3366_);
v___x_3368_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3368_, 0, v___x_3367_);
lean_ctor_set(v___x_3368_, 1, v___x_3345_);
v___x_3369_ = l_Lean_Json_mkObj(v___x_3368_);
lean_dec_ref_known(v___x_3368_, 2);
v_fst_3290_ = v___x_3369_;
v_snd_3291_ = v_snd_3349_;
goto v___jp_3289_;
}
}
}
}
}
else
{
lean_object* v_a_3374_; lean_object* v___x_3376_; uint8_t v_isShared_3377_; uint8_t v_isSharedCheck_3381_; 
lean_del_object(v___x_3343_);
lean_dec(v_fst_3340_);
lean_del_object(v___x_3338_);
lean_dec_ref_known(v_e_3229_, 2);
v_a_3374_ = lean_ctor_get(v___x_3346_, 0);
v_isSharedCheck_3381_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3381_ == 0)
{
v___x_3376_ = v___x_3346_;
v_isShared_3377_ = v_isSharedCheck_3381_;
goto v_resetjp_3375_;
}
else
{
lean_inc(v_a_3374_);
lean_dec(v___x_3346_);
v___x_3376_ = lean_box(0);
v_isShared_3377_ = v_isSharedCheck_3381_;
goto v_resetjp_3375_;
}
v_resetjp_3375_:
{
lean_object* v___x_3379_; 
if (v_isShared_3377_ == 0)
{
v___x_3379_ = v___x_3376_;
goto v_reusejp_3378_;
}
else
{
lean_object* v_reuseFailAlloc_3380_; 
v_reuseFailAlloc_3380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3380_, 0, v_a_3374_);
v___x_3379_ = v_reuseFailAlloc_3380_;
goto v_reusejp_3378_;
}
v_reusejp_3378_:
{
return v___x_3379_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3229_, 2);
return v___x_3335_;
}
}
case 5:
{
lean_object* v_fn_3384_; lean_object* v_arg_3385_; lean_object* v___x_3386_; 
v_fn_3384_ = lean_ctor_get(v_e_3229_, 0);
v_arg_3385_ = lean_ctor_get(v_e_3229_, 1);
lean_inc_ref(v_fn_3384_);
v___x_3386_ = l_LeanExport_dumpExprAux(v_fn_3384_, v_a_3230_, v_a_3231_);
if (lean_obj_tag(v___x_3386_) == 0)
{
lean_object* v_a_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3433_; 
v_a_3387_ = lean_ctor_get(v___x_3386_, 0);
v_isSharedCheck_3433_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3433_ == 0)
{
v___x_3389_ = v___x_3386_;
v_isShared_3390_ = v_isSharedCheck_3433_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_a_3387_);
lean_dec(v___x_3386_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3433_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v_fst_3391_; lean_object* v_snd_3392_; lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3432_; 
v_fst_3391_ = lean_ctor_get(v_a_3387_, 0);
v_snd_3392_ = lean_ctor_get(v_a_3387_, 1);
v_isSharedCheck_3432_ = !lean_is_exclusive(v_a_3387_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3394_ = v_a_3387_;
v_isShared_3395_ = v_isSharedCheck_3432_;
goto v_resetjp_3393_;
}
else
{
lean_inc(v_snd_3392_);
lean_inc(v_fst_3391_);
lean_dec(v_a_3387_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3432_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
lean_object* v___x_3396_; 
lean_inc_ref(v_arg_3385_);
v___x_3396_ = l_LeanExport_dumpExprAux(v_arg_3385_, v_a_3230_, v_snd_3392_);
if (lean_obj_tag(v___x_3396_) == 0)
{
lean_object* v_a_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3431_; 
v_a_3397_ = lean_ctor_get(v___x_3396_, 0);
v_isSharedCheck_3431_ = !lean_is_exclusive(v___x_3396_);
if (v_isSharedCheck_3431_ == 0)
{
v___x_3399_ = v___x_3396_;
v_isShared_3400_ = v_isSharedCheck_3431_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_a_3397_);
lean_dec(v___x_3396_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3431_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v_fst_3401_; lean_object* v_snd_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3430_; 
v_fst_3401_ = lean_ctor_get(v_a_3397_, 0);
v_snd_3402_ = lean_ctor_get(v_a_3397_, 1);
v_isSharedCheck_3430_ = !lean_is_exclusive(v_a_3397_);
if (v_isSharedCheck_3430_ == 0)
{
v___x_3404_ = v_a_3397_;
v_isShared_3405_ = v_isSharedCheck_3430_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_snd_3402_);
lean_inc(v_fst_3401_);
lean_dec(v_a_3397_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3430_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3410_; 
v___x_3406_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__5));
v___x_3407_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__6));
v___x_3408_ = l_Lean_JsonNumber_fromNat(v_fst_3391_);
if (v_isShared_3400_ == 0)
{
lean_ctor_set_tag(v___x_3399_, 2);
lean_ctor_set(v___x_3399_, 0, v___x_3408_);
v___x_3410_ = v___x_3399_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3429_; 
v_reuseFailAlloc_3429_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3429_, 0, v___x_3408_);
v___x_3410_ = v_reuseFailAlloc_3429_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
lean_object* v___x_3412_; 
if (v_isShared_3405_ == 0)
{
lean_ctor_set(v___x_3404_, 1, v___x_3410_);
lean_ctor_set(v___x_3404_, 0, v___x_3407_);
v___x_3412_ = v___x_3404_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3428_; 
v_reuseFailAlloc_3428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3428_, 0, v___x_3407_);
lean_ctor_set(v_reuseFailAlloc_3428_, 1, v___x_3410_);
v___x_3412_ = v_reuseFailAlloc_3428_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3416_; 
v___x_3413_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__7));
v___x_3414_ = l_Lean_JsonNumber_fromNat(v_fst_3401_);
if (v_isShared_3390_ == 0)
{
lean_ctor_set_tag(v___x_3389_, 2);
lean_ctor_set(v___x_3389_, 0, v___x_3414_);
v___x_3416_ = v___x_3389_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3427_; 
v_reuseFailAlloc_3427_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3427_, 0, v___x_3414_);
v___x_3416_ = v_reuseFailAlloc_3427_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
lean_object* v___x_3418_; 
if (v_isShared_3395_ == 0)
{
lean_ctor_set(v___x_3394_, 1, v___x_3416_);
lean_ctor_set(v___x_3394_, 0, v___x_3413_);
v___x_3418_ = v___x_3394_;
goto v_reusejp_3417_;
}
else
{
lean_object* v_reuseFailAlloc_3426_; 
v_reuseFailAlloc_3426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3426_, 0, v___x_3413_);
lean_ctor_set(v_reuseFailAlloc_3426_, 1, v___x_3416_);
v___x_3418_ = v_reuseFailAlloc_3426_;
goto v_reusejp_3417_;
}
v_reusejp_3417_:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; 
v___x_3419_ = lean_box(0);
v___x_3420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3420_, 0, v___x_3418_);
lean_ctor_set(v___x_3420_, 1, v___x_3419_);
v___x_3421_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3421_, 0, v___x_3412_);
lean_ctor_set(v___x_3421_, 1, v___x_3420_);
v___x_3422_ = l_Lean_Json_mkObj(v___x_3421_);
lean_dec_ref_known(v___x_3421_, 2);
v___x_3423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3423_, 0, v___x_3406_);
lean_ctor_set(v___x_3423_, 1, v___x_3422_);
v___x_3424_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3424_, 0, v___x_3423_);
lean_ctor_set(v___x_3424_, 1, v___x_3419_);
v___x_3425_ = l_Lean_Json_mkObj(v___x_3424_);
lean_dec_ref_known(v___x_3424_, 2);
v_fst_3290_ = v___x_3425_;
v_snd_3291_ = v_snd_3402_;
goto v___jp_3289_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_3394_);
lean_dec(v_fst_3391_);
lean_del_object(v___x_3389_);
lean_dec_ref_known(v_e_3229_, 2);
return v___x_3396_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3229_, 2);
return v___x_3386_;
}
}
case 6:
{
lean_object* v_binderName_3434_; lean_object* v_binderType_3435_; lean_object* v_body_3436_; uint8_t v_binderInfo_3437_; lean_object* v___x_3438_; 
v_binderName_3434_ = lean_ctor_get(v_e_3229_, 0);
v_binderType_3435_ = lean_ctor_get(v_e_3229_, 1);
v_body_3436_ = lean_ctor_get(v_e_3229_, 2);
v_binderInfo_3437_ = lean_ctor_get_uint8(v_e_3229_, sizeof(void*)*3 + 8);
lean_inc(v_binderName_3434_);
v___x_3438_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_binderName_3434_, v_a_3230_, v_a_3231_);
if (lean_obj_tag(v___x_3438_) == 0)
{
lean_object* v_a_3439_; lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3510_; 
v_a_3439_ = lean_ctor_get(v___x_3438_, 0);
v_isSharedCheck_3510_ = !lean_is_exclusive(v___x_3438_);
if (v_isSharedCheck_3510_ == 0)
{
v___x_3441_ = v___x_3438_;
v_isShared_3442_ = v_isSharedCheck_3510_;
goto v_resetjp_3440_;
}
else
{
lean_inc(v_a_3439_);
lean_dec(v___x_3438_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3510_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v_fst_3443_; lean_object* v_snd_3444_; lean_object* v___x_3446_; uint8_t v_isShared_3447_; uint8_t v_isSharedCheck_3509_; 
v_fst_3443_ = lean_ctor_get(v_a_3439_, 0);
v_snd_3444_ = lean_ctor_get(v_a_3439_, 1);
v_isSharedCheck_3509_ = !lean_is_exclusive(v_a_3439_);
if (v_isSharedCheck_3509_ == 0)
{
v___x_3446_ = v_a_3439_;
v_isShared_3447_ = v_isSharedCheck_3509_;
goto v_resetjp_3445_;
}
else
{
lean_inc(v_snd_3444_);
lean_inc(v_fst_3443_);
lean_dec(v_a_3439_);
v___x_3446_ = lean_box(0);
v_isShared_3447_ = v_isSharedCheck_3509_;
goto v_resetjp_3445_;
}
v_resetjp_3445_:
{
lean_object* v___x_3448_; 
lean_inc_ref(v_binderType_3435_);
v___x_3448_ = l_LeanExport_dumpExprAux(v_binderType_3435_, v_a_3230_, v_snd_3444_);
if (lean_obj_tag(v___x_3448_) == 0)
{
lean_object* v_a_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3508_; 
v_a_3449_ = lean_ctor_get(v___x_3448_, 0);
v_isSharedCheck_3508_ = !lean_is_exclusive(v___x_3448_);
if (v_isSharedCheck_3508_ == 0)
{
v___x_3451_ = v___x_3448_;
v_isShared_3452_ = v_isSharedCheck_3508_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_a_3449_);
lean_dec(v___x_3448_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3508_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v_fst_3453_; lean_object* v_snd_3454_; lean_object* v___x_3456_; uint8_t v_isShared_3457_; uint8_t v_isSharedCheck_3507_; 
v_fst_3453_ = lean_ctor_get(v_a_3449_, 0);
v_snd_3454_ = lean_ctor_get(v_a_3449_, 1);
v_isSharedCheck_3507_ = !lean_is_exclusive(v_a_3449_);
if (v_isSharedCheck_3507_ == 0)
{
v___x_3456_ = v_a_3449_;
v_isShared_3457_ = v_isSharedCheck_3507_;
goto v_resetjp_3455_;
}
else
{
lean_inc(v_snd_3454_);
lean_inc(v_fst_3453_);
lean_dec(v_a_3449_);
v___x_3456_ = lean_box(0);
v_isShared_3457_ = v_isSharedCheck_3507_;
goto v_resetjp_3455_;
}
v_resetjp_3455_:
{
lean_object* v___x_3458_; 
lean_inc_ref(v_body_3436_);
v___x_3458_ = l_LeanExport_dumpExprAux(v_body_3436_, v_a_3230_, v_snd_3454_);
if (lean_obj_tag(v___x_3458_) == 0)
{
lean_object* v_a_3459_; lean_object* v___x_3461_; uint8_t v_isShared_3462_; uint8_t v_isSharedCheck_3506_; 
v_a_3459_ = lean_ctor_get(v___x_3458_, 0);
v_isSharedCheck_3506_ = !lean_is_exclusive(v___x_3458_);
if (v_isSharedCheck_3506_ == 0)
{
v___x_3461_ = v___x_3458_;
v_isShared_3462_ = v_isSharedCheck_3506_;
goto v_resetjp_3460_;
}
else
{
lean_inc(v_a_3459_);
lean_dec(v___x_3458_);
v___x_3461_ = lean_box(0);
v_isShared_3462_ = v_isSharedCheck_3506_;
goto v_resetjp_3460_;
}
v_resetjp_3460_:
{
lean_object* v_fst_3463_; lean_object* v_snd_3464_; lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3505_; 
v_fst_3463_ = lean_ctor_get(v_a_3459_, 0);
v_snd_3464_ = lean_ctor_get(v_a_3459_, 1);
v_isSharedCheck_3505_ = !lean_is_exclusive(v_a_3459_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3466_ = v_a_3459_;
v_isShared_3467_ = v_isSharedCheck_3505_;
goto v_resetjp_3465_;
}
else
{
lean_inc(v_snd_3464_);
lean_inc(v_fst_3463_);
lean_dec(v_a_3459_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3505_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3472_; 
v___x_3468_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__8));
v___x_3469_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_3470_ = l_Lean_JsonNumber_fromNat(v_fst_3443_);
if (v_isShared_3462_ == 0)
{
lean_ctor_set_tag(v___x_3461_, 2);
lean_ctor_set(v___x_3461_, 0, v___x_3470_);
v___x_3472_ = v___x_3461_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3504_; 
v_reuseFailAlloc_3504_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3504_, 0, v___x_3470_);
v___x_3472_ = v_reuseFailAlloc_3504_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
lean_object* v___x_3474_; 
if (v_isShared_3467_ == 0)
{
lean_ctor_set(v___x_3466_, 1, v___x_3472_);
lean_ctor_set(v___x_3466_, 0, v___x_3469_);
v___x_3474_ = v___x_3466_;
goto v_reusejp_3473_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v___x_3469_);
lean_ctor_set(v_reuseFailAlloc_3503_, 1, v___x_3472_);
v___x_3474_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3473_;
}
v_reusejp_3473_:
{
lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3478_; 
v___x_3475_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3476_ = l_Lean_JsonNumber_fromNat(v_fst_3453_);
if (v_isShared_3452_ == 0)
{
lean_ctor_set_tag(v___x_3451_, 2);
lean_ctor_set(v___x_3451_, 0, v___x_3476_);
v___x_3478_ = v___x_3451_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v___x_3476_);
v___x_3478_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
lean_object* v___x_3480_; 
if (v_isShared_3457_ == 0)
{
lean_ctor_set(v___x_3456_, 1, v___x_3478_);
lean_ctor_set(v___x_3456_, 0, v___x_3475_);
v___x_3480_ = v___x_3456_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v___x_3475_);
lean_ctor_set(v_reuseFailAlloc_3501_, 1, v___x_3478_);
v___x_3480_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3484_; 
v___x_3481_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__9));
v___x_3482_ = l_Lean_JsonNumber_fromNat(v_fst_3463_);
if (v_isShared_3442_ == 0)
{
lean_ctor_set_tag(v___x_3441_, 2);
lean_ctor_set(v___x_3441_, 0, v___x_3482_);
v___x_3484_ = v___x_3441_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3500_; 
v_reuseFailAlloc_3500_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3500_, 0, v___x_3482_);
v___x_3484_ = v_reuseFailAlloc_3500_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
lean_object* v___x_3486_; 
if (v_isShared_3447_ == 0)
{
lean_ctor_set(v___x_3446_, 1, v___x_3484_);
lean_ctor_set(v___x_3446_, 0, v___x_3481_);
v___x_3486_ = v___x_3446_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v___x_3481_);
lean_ctor_set(v_reuseFailAlloc_3499_, 1, v___x_3484_);
v___x_3486_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; 
v___x_3487_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__10));
v___x_3488_ = l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(v_binderInfo_3437_);
v___x_3489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3489_, 0, v___x_3487_);
lean_ctor_set(v___x_3489_, 1, v___x_3488_);
v___x_3490_ = lean_box(0);
v___x_3491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3491_, 0, v___x_3489_);
lean_ctor_set(v___x_3491_, 1, v___x_3490_);
v___x_3492_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3492_, 0, v___x_3486_);
lean_ctor_set(v___x_3492_, 1, v___x_3491_);
v___x_3493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3493_, 0, v___x_3480_);
lean_ctor_set(v___x_3493_, 1, v___x_3492_);
v___x_3494_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3494_, 0, v___x_3474_);
lean_ctor_set(v___x_3494_, 1, v___x_3493_);
v___x_3495_ = l_Lean_Json_mkObj(v___x_3494_);
lean_dec_ref_known(v___x_3494_, 2);
v___x_3496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3496_, 0, v___x_3468_);
lean_ctor_set(v___x_3496_, 1, v___x_3495_);
v___x_3497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3497_, 0, v___x_3496_);
lean_ctor_set(v___x_3497_, 1, v___x_3490_);
v___x_3498_ = l_Lean_Json_mkObj(v___x_3497_);
lean_dec_ref_known(v___x_3497_, 2);
v_fst_3290_ = v___x_3498_;
v_snd_3291_ = v_snd_3464_;
goto v___jp_3289_;
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
lean_del_object(v___x_3456_);
lean_dec(v_fst_3453_);
lean_del_object(v___x_3451_);
lean_del_object(v___x_3446_);
lean_dec(v_fst_3443_);
lean_del_object(v___x_3441_);
lean_dec_ref_known(v_e_3229_, 3);
return v___x_3458_;
}
}
}
}
else
{
lean_del_object(v___x_3446_);
lean_dec(v_fst_3443_);
lean_del_object(v___x_3441_);
lean_dec_ref_known(v_e_3229_, 3);
return v___x_3448_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3229_, 3);
return v___x_3438_;
}
}
case 7:
{
lean_object* v_binderName_3511_; lean_object* v_binderType_3512_; lean_object* v_body_3513_; uint8_t v_binderInfo_3514_; lean_object* v___x_3515_; 
v_binderName_3511_ = lean_ctor_get(v_e_3229_, 0);
v_binderType_3512_ = lean_ctor_get(v_e_3229_, 1);
v_body_3513_ = lean_ctor_get(v_e_3229_, 2);
v_binderInfo_3514_ = lean_ctor_get_uint8(v_e_3229_, sizeof(void*)*3 + 8);
lean_inc(v_binderName_3511_);
v___x_3515_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_binderName_3511_, v_a_3230_, v_a_3231_);
if (lean_obj_tag(v___x_3515_) == 0)
{
lean_object* v_a_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3587_; 
v_a_3516_ = lean_ctor_get(v___x_3515_, 0);
v_isSharedCheck_3587_ = !lean_is_exclusive(v___x_3515_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3518_ = v___x_3515_;
v_isShared_3519_ = v_isSharedCheck_3587_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_a_3516_);
lean_dec(v___x_3515_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3587_;
goto v_resetjp_3517_;
}
v_resetjp_3517_:
{
lean_object* v_fst_3520_; lean_object* v_snd_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3586_; 
v_fst_3520_ = lean_ctor_get(v_a_3516_, 0);
v_snd_3521_ = lean_ctor_get(v_a_3516_, 1);
v_isSharedCheck_3586_ = !lean_is_exclusive(v_a_3516_);
if (v_isSharedCheck_3586_ == 0)
{
v___x_3523_ = v_a_3516_;
v_isShared_3524_ = v_isSharedCheck_3586_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_snd_3521_);
lean_inc(v_fst_3520_);
lean_dec(v_a_3516_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3586_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
lean_object* v___x_3525_; 
lean_inc_ref(v_binderType_3512_);
v___x_3525_ = l_LeanExport_dumpExprAux(v_binderType_3512_, v_a_3230_, v_snd_3521_);
if (lean_obj_tag(v___x_3525_) == 0)
{
lean_object* v_a_3526_; lean_object* v___x_3528_; uint8_t v_isShared_3529_; uint8_t v_isSharedCheck_3585_; 
v_a_3526_ = lean_ctor_get(v___x_3525_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_3525_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3528_ = v___x_3525_;
v_isShared_3529_ = v_isSharedCheck_3585_;
goto v_resetjp_3527_;
}
else
{
lean_inc(v_a_3526_);
lean_dec(v___x_3525_);
v___x_3528_ = lean_box(0);
v_isShared_3529_ = v_isSharedCheck_3585_;
goto v_resetjp_3527_;
}
v_resetjp_3527_:
{
lean_object* v_fst_3530_; lean_object* v_snd_3531_; lean_object* v___x_3533_; uint8_t v_isShared_3534_; uint8_t v_isSharedCheck_3584_; 
v_fst_3530_ = lean_ctor_get(v_a_3526_, 0);
v_snd_3531_ = lean_ctor_get(v_a_3526_, 1);
v_isSharedCheck_3584_ = !lean_is_exclusive(v_a_3526_);
if (v_isSharedCheck_3584_ == 0)
{
v___x_3533_ = v_a_3526_;
v_isShared_3534_ = v_isSharedCheck_3584_;
goto v_resetjp_3532_;
}
else
{
lean_inc(v_snd_3531_);
lean_inc(v_fst_3530_);
lean_dec(v_a_3526_);
v___x_3533_ = lean_box(0);
v_isShared_3534_ = v_isSharedCheck_3584_;
goto v_resetjp_3532_;
}
v_resetjp_3532_:
{
lean_object* v___x_3535_; 
lean_inc_ref(v_body_3513_);
v___x_3535_ = l_LeanExport_dumpExprAux(v_body_3513_, v_a_3230_, v_snd_3531_);
if (lean_obj_tag(v___x_3535_) == 0)
{
lean_object* v_a_3536_; lean_object* v___x_3538_; uint8_t v_isShared_3539_; uint8_t v_isSharedCheck_3583_; 
v_a_3536_ = lean_ctor_get(v___x_3535_, 0);
v_isSharedCheck_3583_ = !lean_is_exclusive(v___x_3535_);
if (v_isSharedCheck_3583_ == 0)
{
v___x_3538_ = v___x_3535_;
v_isShared_3539_ = v_isSharedCheck_3583_;
goto v_resetjp_3537_;
}
else
{
lean_inc(v_a_3536_);
lean_dec(v___x_3535_);
v___x_3538_ = lean_box(0);
v_isShared_3539_ = v_isSharedCheck_3583_;
goto v_resetjp_3537_;
}
v_resetjp_3537_:
{
lean_object* v_fst_3540_; lean_object* v_snd_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3582_; 
v_fst_3540_ = lean_ctor_get(v_a_3536_, 0);
v_snd_3541_ = lean_ctor_get(v_a_3536_, 1);
v_isSharedCheck_3582_ = !lean_is_exclusive(v_a_3536_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3543_ = v_a_3536_;
v_isShared_3544_ = v_isSharedCheck_3582_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_snd_3541_);
lean_inc(v_fst_3540_);
lean_dec(v_a_3536_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3582_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3549_; 
v___x_3545_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__11));
v___x_3546_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_3547_ = l_Lean_JsonNumber_fromNat(v_fst_3520_);
if (v_isShared_3539_ == 0)
{
lean_ctor_set_tag(v___x_3538_, 2);
lean_ctor_set(v___x_3538_, 0, v___x_3547_);
v___x_3549_ = v___x_3538_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v___x_3547_);
v___x_3549_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
lean_object* v___x_3551_; 
if (v_isShared_3544_ == 0)
{
lean_ctor_set(v___x_3543_, 1, v___x_3549_);
lean_ctor_set(v___x_3543_, 0, v___x_3546_);
v___x_3551_ = v___x_3543_;
goto v_reusejp_3550_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v___x_3546_);
lean_ctor_set(v_reuseFailAlloc_3580_, 1, v___x_3549_);
v___x_3551_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3550_;
}
v_reusejp_3550_:
{
lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3555_; 
v___x_3552_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3553_ = l_Lean_JsonNumber_fromNat(v_fst_3530_);
if (v_isShared_3529_ == 0)
{
lean_ctor_set_tag(v___x_3528_, 2);
lean_ctor_set(v___x_3528_, 0, v___x_3553_);
v___x_3555_ = v___x_3528_;
goto v_reusejp_3554_;
}
else
{
lean_object* v_reuseFailAlloc_3579_; 
v_reuseFailAlloc_3579_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3579_, 0, v___x_3553_);
v___x_3555_ = v_reuseFailAlloc_3579_;
goto v_reusejp_3554_;
}
v_reusejp_3554_:
{
lean_object* v___x_3557_; 
if (v_isShared_3534_ == 0)
{
lean_ctor_set(v___x_3533_, 1, v___x_3555_);
lean_ctor_set(v___x_3533_, 0, v___x_3552_);
v___x_3557_ = v___x_3533_;
goto v_reusejp_3556_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v___x_3552_);
lean_ctor_set(v_reuseFailAlloc_3578_, 1, v___x_3555_);
v___x_3557_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3556_;
}
v_reusejp_3556_:
{
lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3561_; 
v___x_3558_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__9));
v___x_3559_ = l_Lean_JsonNumber_fromNat(v_fst_3540_);
if (v_isShared_3519_ == 0)
{
lean_ctor_set_tag(v___x_3518_, 2);
lean_ctor_set(v___x_3518_, 0, v___x_3559_);
v___x_3561_ = v___x_3518_;
goto v_reusejp_3560_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v___x_3559_);
v___x_3561_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3560_;
}
v_reusejp_3560_:
{
lean_object* v___x_3563_; 
if (v_isShared_3524_ == 0)
{
lean_ctor_set(v___x_3523_, 1, v___x_3561_);
lean_ctor_set(v___x_3523_, 0, v___x_3558_);
v___x_3563_ = v___x_3523_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3576_; 
v_reuseFailAlloc_3576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3576_, 0, v___x_3558_);
lean_ctor_set(v_reuseFailAlloc_3576_, 1, v___x_3561_);
v___x_3563_ = v_reuseFailAlloc_3576_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; 
v___x_3564_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__10));
v___x_3565_ = l___private_LeanExport_Basic_0__Lean_BinderInfo_toJson(v_binderInfo_3514_);
v___x_3566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3566_, 0, v___x_3564_);
lean_ctor_set(v___x_3566_, 1, v___x_3565_);
v___x_3567_ = lean_box(0);
v___x_3568_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3568_, 0, v___x_3566_);
lean_ctor_set(v___x_3568_, 1, v___x_3567_);
v___x_3569_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3569_, 0, v___x_3563_);
lean_ctor_set(v___x_3569_, 1, v___x_3568_);
v___x_3570_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3570_, 0, v___x_3557_);
lean_ctor_set(v___x_3570_, 1, v___x_3569_);
v___x_3571_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3571_, 0, v___x_3551_);
lean_ctor_set(v___x_3571_, 1, v___x_3570_);
v___x_3572_ = l_Lean_Json_mkObj(v___x_3571_);
lean_dec_ref_known(v___x_3571_, 2);
v___x_3573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3573_, 0, v___x_3545_);
lean_ctor_set(v___x_3573_, 1, v___x_3572_);
v___x_3574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3574_, 0, v___x_3573_);
lean_ctor_set(v___x_3574_, 1, v___x_3567_);
v___x_3575_ = l_Lean_Json_mkObj(v___x_3574_);
lean_dec_ref_known(v___x_3574_, 2);
v_fst_3290_ = v___x_3575_;
v_snd_3291_ = v_snd_3541_;
goto v___jp_3289_;
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
lean_del_object(v___x_3533_);
lean_dec(v_fst_3530_);
lean_del_object(v___x_3528_);
lean_del_object(v___x_3523_);
lean_dec(v_fst_3520_);
lean_del_object(v___x_3518_);
lean_dec_ref_known(v_e_3229_, 3);
return v___x_3535_;
}
}
}
}
else
{
lean_del_object(v___x_3523_);
lean_dec(v_fst_3520_);
lean_del_object(v___x_3518_);
lean_dec_ref_known(v_e_3229_, 3);
return v___x_3525_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3229_, 3);
return v___x_3515_;
}
}
case 8:
{
lean_object* v_declName_3588_; lean_object* v_type_3589_; lean_object* v_value_3590_; lean_object* v_body_3591_; uint8_t v_nondep_3592_; lean_object* v___x_3593_; 
v_declName_3588_ = lean_ctor_get(v_e_3229_, 0);
v_type_3589_ = lean_ctor_get(v_e_3229_, 1);
v_value_3590_ = lean_ctor_get(v_e_3229_, 2);
v_body_3591_ = lean_ctor_get(v_e_3229_, 3);
v_nondep_3592_ = lean_ctor_get_uint8(v_e_3229_, sizeof(void*)*4 + 8);
lean_inc(v_declName_3588_);
v___x_3593_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_declName_3588_, v_a_3230_, v_a_3231_);
if (lean_obj_tag(v___x_3593_) == 0)
{
lean_object* v_a_3594_; lean_object* v___x_3596_; uint8_t v_isShared_3597_; uint8_t v_isSharedCheck_3686_; 
v_a_3594_ = lean_ctor_get(v___x_3593_, 0);
v_isSharedCheck_3686_ = !lean_is_exclusive(v___x_3593_);
if (v_isSharedCheck_3686_ == 0)
{
v___x_3596_ = v___x_3593_;
v_isShared_3597_ = v_isSharedCheck_3686_;
goto v_resetjp_3595_;
}
else
{
lean_inc(v_a_3594_);
lean_dec(v___x_3593_);
v___x_3596_ = lean_box(0);
v_isShared_3597_ = v_isSharedCheck_3686_;
goto v_resetjp_3595_;
}
v_resetjp_3595_:
{
lean_object* v_fst_3598_; lean_object* v_snd_3599_; lean_object* v___x_3601_; uint8_t v_isShared_3602_; uint8_t v_isSharedCheck_3685_; 
v_fst_3598_ = lean_ctor_get(v_a_3594_, 0);
v_snd_3599_ = lean_ctor_get(v_a_3594_, 1);
v_isSharedCheck_3685_ = !lean_is_exclusive(v_a_3594_);
if (v_isSharedCheck_3685_ == 0)
{
v___x_3601_ = v_a_3594_;
v_isShared_3602_ = v_isSharedCheck_3685_;
goto v_resetjp_3600_;
}
else
{
lean_inc(v_snd_3599_);
lean_inc(v_fst_3598_);
lean_dec(v_a_3594_);
v___x_3601_ = lean_box(0);
v_isShared_3602_ = v_isSharedCheck_3685_;
goto v_resetjp_3600_;
}
v_resetjp_3600_:
{
lean_object* v___x_3603_; 
lean_inc_ref(v_type_3589_);
v___x_3603_ = l_LeanExport_dumpExprAux(v_type_3589_, v_a_3230_, v_snd_3599_);
if (lean_obj_tag(v___x_3603_) == 0)
{
lean_object* v_a_3604_; lean_object* v___x_3606_; uint8_t v_isShared_3607_; uint8_t v_isSharedCheck_3684_; 
v_a_3604_ = lean_ctor_get(v___x_3603_, 0);
v_isSharedCheck_3684_ = !lean_is_exclusive(v___x_3603_);
if (v_isSharedCheck_3684_ == 0)
{
v___x_3606_ = v___x_3603_;
v_isShared_3607_ = v_isSharedCheck_3684_;
goto v_resetjp_3605_;
}
else
{
lean_inc(v_a_3604_);
lean_dec(v___x_3603_);
v___x_3606_ = lean_box(0);
v_isShared_3607_ = v_isSharedCheck_3684_;
goto v_resetjp_3605_;
}
v_resetjp_3605_:
{
lean_object* v_fst_3608_; lean_object* v_snd_3609_; lean_object* v___x_3611_; uint8_t v_isShared_3612_; uint8_t v_isSharedCheck_3683_; 
v_fst_3608_ = lean_ctor_get(v_a_3604_, 0);
v_snd_3609_ = lean_ctor_get(v_a_3604_, 1);
v_isSharedCheck_3683_ = !lean_is_exclusive(v_a_3604_);
if (v_isSharedCheck_3683_ == 0)
{
v___x_3611_ = v_a_3604_;
v_isShared_3612_ = v_isSharedCheck_3683_;
goto v_resetjp_3610_;
}
else
{
lean_inc(v_snd_3609_);
lean_inc(v_fst_3608_);
lean_dec(v_a_3604_);
v___x_3611_ = lean_box(0);
v_isShared_3612_ = v_isSharedCheck_3683_;
goto v_resetjp_3610_;
}
v_resetjp_3610_:
{
lean_object* v___x_3613_; 
lean_inc_ref(v_value_3590_);
v___x_3613_ = l_LeanExport_dumpExprAux(v_value_3590_, v_a_3230_, v_snd_3609_);
if (lean_obj_tag(v___x_3613_) == 0)
{
lean_object* v_a_3614_; lean_object* v___x_3616_; uint8_t v_isShared_3617_; uint8_t v_isSharedCheck_3682_; 
v_a_3614_ = lean_ctor_get(v___x_3613_, 0);
v_isSharedCheck_3682_ = !lean_is_exclusive(v___x_3613_);
if (v_isSharedCheck_3682_ == 0)
{
v___x_3616_ = v___x_3613_;
v_isShared_3617_ = v_isSharedCheck_3682_;
goto v_resetjp_3615_;
}
else
{
lean_inc(v_a_3614_);
lean_dec(v___x_3613_);
v___x_3616_ = lean_box(0);
v_isShared_3617_ = v_isSharedCheck_3682_;
goto v_resetjp_3615_;
}
v_resetjp_3615_:
{
lean_object* v_fst_3618_; lean_object* v_snd_3619_; lean_object* v___x_3621_; uint8_t v_isShared_3622_; uint8_t v_isSharedCheck_3681_; 
v_fst_3618_ = lean_ctor_get(v_a_3614_, 0);
v_snd_3619_ = lean_ctor_get(v_a_3614_, 1);
v_isSharedCheck_3681_ = !lean_is_exclusive(v_a_3614_);
if (v_isSharedCheck_3681_ == 0)
{
v___x_3621_ = v_a_3614_;
v_isShared_3622_ = v_isSharedCheck_3681_;
goto v_resetjp_3620_;
}
else
{
lean_inc(v_snd_3619_);
lean_inc(v_fst_3618_);
lean_dec(v_a_3614_);
v___x_3621_ = lean_box(0);
v_isShared_3622_ = v_isSharedCheck_3681_;
goto v_resetjp_3620_;
}
v_resetjp_3620_:
{
lean_object* v___x_3623_; 
lean_inc_ref(v_body_3591_);
v___x_3623_ = l_LeanExport_dumpExprAux(v_body_3591_, v_a_3230_, v_snd_3619_);
if (lean_obj_tag(v___x_3623_) == 0)
{
lean_object* v_a_3624_; lean_object* v___x_3626_; uint8_t v_isShared_3627_; uint8_t v_isSharedCheck_3680_; 
v_a_3624_ = lean_ctor_get(v___x_3623_, 0);
v_isSharedCheck_3680_ = !lean_is_exclusive(v___x_3623_);
if (v_isSharedCheck_3680_ == 0)
{
v___x_3626_ = v___x_3623_;
v_isShared_3627_ = v_isSharedCheck_3680_;
goto v_resetjp_3625_;
}
else
{
lean_inc(v_a_3624_);
lean_dec(v___x_3623_);
v___x_3626_ = lean_box(0);
v_isShared_3627_ = v_isSharedCheck_3680_;
goto v_resetjp_3625_;
}
v_resetjp_3625_:
{
lean_object* v_fst_3628_; lean_object* v_snd_3629_; lean_object* v___x_3631_; uint8_t v_isShared_3632_; uint8_t v_isSharedCheck_3679_; 
v_fst_3628_ = lean_ctor_get(v_a_3624_, 0);
v_snd_3629_ = lean_ctor_get(v_a_3624_, 1);
v_isSharedCheck_3679_ = !lean_is_exclusive(v_a_3624_);
if (v_isSharedCheck_3679_ == 0)
{
v___x_3631_ = v_a_3624_;
v_isShared_3632_ = v_isSharedCheck_3679_;
goto v_resetjp_3630_;
}
else
{
lean_inc(v_snd_3629_);
lean_inc(v_fst_3628_);
lean_dec(v_a_3624_);
v___x_3631_ = lean_box(0);
v_isShared_3632_ = v_isSharedCheck_3679_;
goto v_resetjp_3630_;
}
v_resetjp_3630_:
{
lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3637_; 
v___x_3633_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__12));
v___x_3634_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_3635_ = l_Lean_JsonNumber_fromNat(v_fst_3598_);
if (v_isShared_3627_ == 0)
{
lean_ctor_set_tag(v___x_3626_, 2);
lean_ctor_set(v___x_3626_, 0, v___x_3635_);
v___x_3637_ = v___x_3626_;
goto v_reusejp_3636_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v___x_3635_);
v___x_3637_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3636_;
}
v_reusejp_3636_:
{
lean_object* v___x_3639_; 
if (v_isShared_3632_ == 0)
{
lean_ctor_set(v___x_3631_, 1, v___x_3637_);
lean_ctor_set(v___x_3631_, 0, v___x_3634_);
v___x_3639_ = v___x_3631_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v___x_3634_);
lean_ctor_set(v_reuseFailAlloc_3677_, 1, v___x_3637_);
v___x_3639_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3643_; 
v___x_3640_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3641_ = l_Lean_JsonNumber_fromNat(v_fst_3608_);
if (v_isShared_3617_ == 0)
{
lean_ctor_set_tag(v___x_3616_, 2);
lean_ctor_set(v___x_3616_, 0, v___x_3641_);
v___x_3643_ = v___x_3616_;
goto v_reusejp_3642_;
}
else
{
lean_object* v_reuseFailAlloc_3676_; 
v_reuseFailAlloc_3676_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3676_, 0, v___x_3641_);
v___x_3643_ = v_reuseFailAlloc_3676_;
goto v_reusejp_3642_;
}
v_reusejp_3642_:
{
lean_object* v___x_3645_; 
if (v_isShared_3622_ == 0)
{
lean_ctor_set(v___x_3621_, 1, v___x_3643_);
lean_ctor_set(v___x_3621_, 0, v___x_3640_);
v___x_3645_ = v___x_3621_;
goto v_reusejp_3644_;
}
else
{
lean_object* v_reuseFailAlloc_3675_; 
v_reuseFailAlloc_3675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3675_, 0, v___x_3640_);
lean_ctor_set(v_reuseFailAlloc_3675_, 1, v___x_3643_);
v___x_3645_ = v_reuseFailAlloc_3675_;
goto v_reusejp_3644_;
}
v_reusejp_3644_:
{
lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3649_; 
v___x_3646_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_3647_ = l_Lean_JsonNumber_fromNat(v_fst_3618_);
if (v_isShared_3607_ == 0)
{
lean_ctor_set_tag(v___x_3606_, 2);
lean_ctor_set(v___x_3606_, 0, v___x_3647_);
v___x_3649_ = v___x_3606_;
goto v_reusejp_3648_;
}
else
{
lean_object* v_reuseFailAlloc_3674_; 
v_reuseFailAlloc_3674_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3674_, 0, v___x_3647_);
v___x_3649_ = v_reuseFailAlloc_3674_;
goto v_reusejp_3648_;
}
v_reusejp_3648_:
{
lean_object* v___x_3651_; 
if (v_isShared_3612_ == 0)
{
lean_ctor_set(v___x_3611_, 1, v___x_3649_);
lean_ctor_set(v___x_3611_, 0, v___x_3646_);
v___x_3651_ = v___x_3611_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3673_; 
v_reuseFailAlloc_3673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3673_, 0, v___x_3646_);
lean_ctor_set(v_reuseFailAlloc_3673_, 1, v___x_3649_);
v___x_3651_ = v_reuseFailAlloc_3673_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3655_; 
v___x_3652_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__9));
v___x_3653_ = l_Lean_JsonNumber_fromNat(v_fst_3628_);
if (v_isShared_3597_ == 0)
{
lean_ctor_set_tag(v___x_3596_, 2);
lean_ctor_set(v___x_3596_, 0, v___x_3653_);
v___x_3655_ = v___x_3596_;
goto v_reusejp_3654_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v___x_3653_);
v___x_3655_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
lean_object* v___x_3657_; 
if (v_isShared_3602_ == 0)
{
lean_ctor_set(v___x_3601_, 1, v___x_3655_);
lean_ctor_set(v___x_3601_, 0, v___x_3652_);
v___x_3657_ = v___x_3601_;
goto v_reusejp_3656_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v___x_3652_);
lean_ctor_set(v_reuseFailAlloc_3671_, 1, v___x_3655_);
v___x_3657_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3656_;
}
v_reusejp_3656_:
{
lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; 
v___x_3658_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__14));
v___x_3659_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3659_, 0, v_nondep_3592_);
v___x_3660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3660_, 0, v___x_3658_);
lean_ctor_set(v___x_3660_, 1, v___x_3659_);
v___x_3661_ = lean_box(0);
v___x_3662_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3662_, 0, v___x_3660_);
lean_ctor_set(v___x_3662_, 1, v___x_3661_);
v___x_3663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3663_, 0, v___x_3657_);
lean_ctor_set(v___x_3663_, 1, v___x_3662_);
v___x_3664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3664_, 0, v___x_3651_);
lean_ctor_set(v___x_3664_, 1, v___x_3663_);
v___x_3665_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3665_, 0, v___x_3645_);
lean_ctor_set(v___x_3665_, 1, v___x_3664_);
v___x_3666_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3666_, 0, v___x_3639_);
lean_ctor_set(v___x_3666_, 1, v___x_3665_);
v___x_3667_ = l_Lean_Json_mkObj(v___x_3666_);
lean_dec_ref_known(v___x_3666_, 2);
v___x_3668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3668_, 0, v___x_3633_);
lean_ctor_set(v___x_3668_, 1, v___x_3667_);
v___x_3669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3669_, 0, v___x_3668_);
lean_ctor_set(v___x_3669_, 1, v___x_3661_);
v___x_3670_ = l_Lean_Json_mkObj(v___x_3669_);
lean_dec_ref_known(v___x_3669_, 2);
v_fst_3290_ = v___x_3670_;
v_snd_3291_ = v_snd_3629_;
goto v___jp_3289_;
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
lean_del_object(v___x_3621_);
lean_dec(v_fst_3618_);
lean_del_object(v___x_3616_);
lean_del_object(v___x_3611_);
lean_dec(v_fst_3608_);
lean_del_object(v___x_3606_);
lean_del_object(v___x_3601_);
lean_dec(v_fst_3598_);
lean_del_object(v___x_3596_);
lean_dec_ref_known(v_e_3229_, 4);
return v___x_3623_;
}
}
}
}
else
{
lean_del_object(v___x_3611_);
lean_dec(v_fst_3608_);
lean_del_object(v___x_3606_);
lean_del_object(v___x_3601_);
lean_dec(v_fst_3598_);
lean_del_object(v___x_3596_);
lean_dec_ref_known(v_e_3229_, 4);
return v___x_3613_;
}
}
}
}
else
{
lean_del_object(v___x_3601_);
lean_dec(v_fst_3598_);
lean_del_object(v___x_3596_);
lean_dec_ref_known(v_e_3229_, 4);
return v___x_3603_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3229_, 4);
return v___x_3593_;
}
}
case 9:
{
lean_object* v_a_3687_; 
v_a_3687_ = lean_ctor_get(v_e_3229_, 0);
lean_inc_ref(v_a_3687_);
if (lean_obj_tag(v_a_3687_) == 0)
{
lean_object* v_val_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3719_; 
v_val_3688_ = lean_ctor_get(v_a_3687_, 0);
v_isSharedCheck_3719_ = !lean_is_exclusive(v_a_3687_);
if (v_isSharedCheck_3719_ == 0)
{
v___x_3690_ = v_a_3687_;
v_isShared_3691_ = v_isSharedCheck_3719_;
goto v_resetjp_3689_;
}
else
{
lean_inc(v_val_3688_);
lean_dec(v_a_3687_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3719_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
lean_object* v___x_3692_; 
v___x_3692_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(v_a_3230_, v_a_3231_);
if (lean_obj_tag(v___x_3692_) == 0)
{
lean_object* v_a_3693_; lean_object* v_snd_3694_; lean_object* v___x_3696_; uint8_t v_isShared_3697_; uint8_t v_isSharedCheck_3709_; 
v_a_3693_ = lean_ctor_get(v___x_3692_, 0);
lean_inc(v_a_3693_);
lean_dec_ref_known(v___x_3692_, 1);
v_snd_3694_ = lean_ctor_get(v_a_3693_, 1);
v_isSharedCheck_3709_ = !lean_is_exclusive(v_a_3693_);
if (v_isSharedCheck_3709_ == 0)
{
lean_object* v_unused_3710_; 
v_unused_3710_ = lean_ctor_get(v_a_3693_, 0);
lean_dec(v_unused_3710_);
v___x_3696_ = v_a_3693_;
v_isShared_3697_ = v_isSharedCheck_3709_;
goto v_resetjp_3695_;
}
else
{
lean_inc(v_snd_3694_);
lean_dec(v_a_3693_);
v___x_3696_ = lean_box(0);
v_isShared_3697_ = v_isSharedCheck_3709_;
goto v_resetjp_3695_;
}
v_resetjp_3695_:
{
lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3701_; 
v___x_3698_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__15));
v___x_3699_ = l_Nat_reprFast(v_val_3688_);
if (v_isShared_3691_ == 0)
{
lean_ctor_set_tag(v___x_3690_, 3);
lean_ctor_set(v___x_3690_, 0, v___x_3699_);
v___x_3701_ = v___x_3690_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v___x_3699_);
v___x_3701_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
lean_object* v___x_3703_; 
if (v_isShared_3697_ == 0)
{
lean_ctor_set(v___x_3696_, 1, v___x_3701_);
lean_ctor_set(v___x_3696_, 0, v___x_3698_);
v___x_3703_ = v___x_3696_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v___x_3698_);
lean_ctor_set(v_reuseFailAlloc_3707_, 1, v___x_3701_);
v___x_3703_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; 
v___x_3704_ = lean_box(0);
v___x_3705_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3705_, 0, v___x_3703_);
lean_ctor_set(v___x_3705_, 1, v___x_3704_);
v___x_3706_ = l_Lean_Json_mkObj(v___x_3705_);
lean_dec_ref_known(v___x_3705_, 2);
v_fst_3290_ = v___x_3706_;
v_snd_3291_ = v_snd_3694_;
goto v___jp_3289_;
}
}
}
}
else
{
lean_object* v_a_3711_; lean_object* v___x_3713_; uint8_t v_isShared_3714_; uint8_t v_isSharedCheck_3718_; 
lean_del_object(v___x_3690_);
lean_dec(v_val_3688_);
lean_dec_ref_known(v_e_3229_, 1);
v_a_3711_ = lean_ctor_get(v___x_3692_, 0);
v_isSharedCheck_3718_ = !lean_is_exclusive(v___x_3692_);
if (v_isSharedCheck_3718_ == 0)
{
v___x_3713_ = v___x_3692_;
v_isShared_3714_ = v_isSharedCheck_3718_;
goto v_resetjp_3712_;
}
else
{
lean_inc(v_a_3711_);
lean_dec(v___x_3692_);
v___x_3713_ = lean_box(0);
v_isShared_3714_ = v_isSharedCheck_3718_;
goto v_resetjp_3712_;
}
v_resetjp_3712_:
{
lean_object* v___x_3716_; 
if (v_isShared_3714_ == 0)
{
v___x_3716_ = v___x_3713_;
goto v_reusejp_3715_;
}
else
{
lean_object* v_reuseFailAlloc_3717_; 
v_reuseFailAlloc_3717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3717_, 0, v_a_3711_);
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
}
else
{
lean_object* v_val_3720_; lean_object* v___x_3722_; uint8_t v_isShared_3723_; uint8_t v_isSharedCheck_3750_; 
v_val_3720_ = lean_ctor_get(v_a_3687_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v_a_3687_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3722_ = v_a_3687_;
v_isShared_3723_ = v_isSharedCheck_3750_;
goto v_resetjp_3721_;
}
else
{
lean_inc(v_val_3720_);
lean_dec(v_a_3687_);
v___x_3722_ = lean_box(0);
v_isShared_3723_ = v_isSharedCheck_3750_;
goto v_resetjp_3721_;
}
v_resetjp_3721_:
{
lean_object* v___x_3724_; 
v___x_3724_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(v_a_3230_, v_a_3231_);
if (lean_obj_tag(v___x_3724_) == 0)
{
lean_object* v_a_3725_; lean_object* v_snd_3726_; lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3740_; 
v_a_3725_ = lean_ctor_get(v___x_3724_, 0);
lean_inc(v_a_3725_);
lean_dec_ref_known(v___x_3724_, 1);
v_snd_3726_ = lean_ctor_get(v_a_3725_, 1);
v_isSharedCheck_3740_ = !lean_is_exclusive(v_a_3725_);
if (v_isSharedCheck_3740_ == 0)
{
lean_object* v_unused_3741_; 
v_unused_3741_ = lean_ctor_get(v_a_3725_, 0);
lean_dec(v_unused_3741_);
v___x_3728_ = v_a_3725_;
v_isShared_3729_ = v_isSharedCheck_3740_;
goto v_resetjp_3727_;
}
else
{
lean_inc(v_snd_3726_);
lean_dec(v_a_3725_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3740_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v___x_3730_; lean_object* v___x_3732_; 
v___x_3730_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__16));
if (v_isShared_3723_ == 0)
{
lean_ctor_set_tag(v___x_3722_, 3);
v___x_3732_ = v___x_3722_;
goto v_reusejp_3731_;
}
else
{
lean_object* v_reuseFailAlloc_3739_; 
v_reuseFailAlloc_3739_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3739_, 0, v_val_3720_);
v___x_3732_ = v_reuseFailAlloc_3739_;
goto v_reusejp_3731_;
}
v_reusejp_3731_:
{
lean_object* v___x_3734_; 
if (v_isShared_3729_ == 0)
{
lean_ctor_set(v___x_3728_, 1, v___x_3732_);
lean_ctor_set(v___x_3728_, 0, v___x_3730_);
v___x_3734_ = v___x_3728_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3738_; 
v_reuseFailAlloc_3738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3738_, 0, v___x_3730_);
lean_ctor_set(v_reuseFailAlloc_3738_, 1, v___x_3732_);
v___x_3734_ = v_reuseFailAlloc_3738_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; 
v___x_3735_ = lean_box(0);
v___x_3736_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3736_, 0, v___x_3734_);
lean_ctor_set(v___x_3736_, 1, v___x_3735_);
v___x_3737_ = l_Lean_Json_mkObj(v___x_3736_);
lean_dec_ref_known(v___x_3736_, 2);
v_fst_3290_ = v___x_3737_;
v_snd_3291_ = v_snd_3726_;
goto v___jp_3289_;
}
}
}
}
else
{
lean_object* v_a_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3749_; 
lean_del_object(v___x_3722_);
lean_dec_ref(v_val_3720_);
lean_dec_ref_known(v_e_3229_, 1);
v_a_3742_ = lean_ctor_get(v___x_3724_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v___x_3724_);
if (v_isSharedCheck_3749_ == 0)
{
v___x_3744_ = v___x_3724_;
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_a_3742_);
lean_dec(v___x_3724_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v___x_3747_; 
if (v_isShared_3745_ == 0)
{
v___x_3747_ = v___x_3744_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v_a_3742_);
v___x_3747_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
return v___x_3747_;
}
}
}
}
}
}
case 10:
{
lean_object* v_data_3751_; lean_object* v_expr_3752_; lean_object* v___x_3753_; 
v_data_3751_ = lean_ctor_get(v_e_3229_, 0);
v_expr_3752_ = lean_ctor_get(v_e_3229_, 1);
lean_inc_ref(v_expr_3752_);
v___x_3753_ = l_LeanExport_dumpExprAux(v_expr_3752_, v_a_3230_, v_a_3231_);
if (lean_obj_tag(v___x_3753_) == 0)
{
lean_object* v_a_3754_; lean_object* v___x_3756_; uint8_t v_isShared_3757_; uint8_t v_isSharedCheck_3783_; 
v_a_3754_ = lean_ctor_get(v___x_3753_, 0);
v_isSharedCheck_3783_ = !lean_is_exclusive(v___x_3753_);
if (v_isSharedCheck_3783_ == 0)
{
v___x_3756_ = v___x_3753_;
v_isShared_3757_ = v_isSharedCheck_3783_;
goto v_resetjp_3755_;
}
else
{
lean_inc(v_a_3754_);
lean_dec(v___x_3753_);
v___x_3756_ = lean_box(0);
v_isShared_3757_ = v_isSharedCheck_3783_;
goto v_resetjp_3755_;
}
v_resetjp_3755_:
{
lean_object* v_fst_3758_; lean_object* v_snd_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3782_; 
v_fst_3758_ = lean_ctor_get(v_a_3754_, 0);
v_snd_3759_ = lean_ctor_get(v_a_3754_, 1);
v_isSharedCheck_3782_ = !lean_is_exclusive(v_a_3754_);
if (v_isSharedCheck_3782_ == 0)
{
v___x_3761_ = v_a_3754_;
v_isShared_3762_ = v_isSharedCheck_3782_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_snd_3759_);
lean_inc(v_fst_3758_);
lean_dec(v_a_3754_);
v___x_3761_ = lean_box(0);
v_isShared_3762_ = v_isSharedCheck_3782_;
goto v_resetjp_3760_;
}
v_resetjp_3760_:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3767_; 
v___x_3763_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__17));
v___x_3764_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__18));
lean_inc(v_data_3751_);
v___x_3765_ = l___private_LeanExport_Basic_0__Lean_KVMap_toJson(v_data_3751_);
if (v_isShared_3762_ == 0)
{
lean_ctor_set(v___x_3761_, 1, v___x_3765_);
lean_ctor_set(v___x_3761_, 0, v___x_3764_);
v___x_3767_ = v___x_3761_;
goto v_reusejp_3766_;
}
else
{
lean_object* v_reuseFailAlloc_3781_; 
v_reuseFailAlloc_3781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3781_, 0, v___x_3764_);
lean_ctor_set(v_reuseFailAlloc_3781_, 1, v___x_3765_);
v___x_3767_ = v_reuseFailAlloc_3781_;
goto v_reusejp_3766_;
}
v_reusejp_3766_:
{
lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3771_; 
v___x_3768_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__19));
v___x_3769_ = l_Lean_JsonNumber_fromNat(v_fst_3758_);
if (v_isShared_3757_ == 0)
{
lean_ctor_set_tag(v___x_3756_, 2);
lean_ctor_set(v___x_3756_, 0, v___x_3769_);
v___x_3771_ = v___x_3756_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3780_; 
v_reuseFailAlloc_3780_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3780_, 0, v___x_3769_);
v___x_3771_ = v_reuseFailAlloc_3780_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; 
v___x_3772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3772_, 0, v___x_3768_);
lean_ctor_set(v___x_3772_, 1, v___x_3771_);
v___x_3773_ = lean_box(0);
v___x_3774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3774_, 0, v___x_3772_);
lean_ctor_set(v___x_3774_, 1, v___x_3773_);
v___x_3775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3775_, 0, v___x_3767_);
lean_ctor_set(v___x_3775_, 1, v___x_3774_);
v___x_3776_ = l_Lean_Json_mkObj(v___x_3775_);
lean_dec_ref_known(v___x_3775_, 2);
v___x_3777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3777_, 0, v___x_3763_);
lean_ctor_set(v___x_3777_, 1, v___x_3776_);
v___x_3778_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3778_, 0, v___x_3777_);
lean_ctor_set(v___x_3778_, 1, v___x_3773_);
v___x_3779_ = l_Lean_Json_mkObj(v___x_3778_);
lean_dec_ref_known(v___x_3778_, 2);
v_fst_3290_ = v___x_3779_;
v_snd_3291_ = v_snd_3759_;
goto v___jp_3289_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_3229_, 2);
return v___x_3753_;
}
}
case 11:
{
lean_object* v_typeName_3784_; lean_object* v_idx_3785_; lean_object* v_struct_3786_; lean_object* v___x_3787_; 
v_typeName_3784_ = lean_ctor_get(v_e_3229_, 0);
v_idx_3785_ = lean_ctor_get(v_e_3229_, 1);
v_struct_3786_ = lean_ctor_get(v_e_3229_, 2);
lean_inc(v_typeName_3784_);
v___x_3787_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_typeName_3784_, v_a_3230_, v_a_3231_);
if (lean_obj_tag(v___x_3787_) == 0)
{
lean_object* v_a_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3839_; 
v_a_3788_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3839_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3839_ == 0)
{
v___x_3790_ = v___x_3787_;
v_isShared_3791_ = v_isSharedCheck_3839_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_a_3788_);
lean_dec(v___x_3787_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3839_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v_fst_3792_; lean_object* v_snd_3793_; lean_object* v___x_3795_; uint8_t v_isShared_3796_; uint8_t v_isSharedCheck_3838_; 
v_fst_3792_ = lean_ctor_get(v_a_3788_, 0);
v_snd_3793_ = lean_ctor_get(v_a_3788_, 1);
v_isSharedCheck_3838_ = !lean_is_exclusive(v_a_3788_);
if (v_isSharedCheck_3838_ == 0)
{
v___x_3795_ = v_a_3788_;
v_isShared_3796_ = v_isSharedCheck_3838_;
goto v_resetjp_3794_;
}
else
{
lean_inc(v_snd_3793_);
lean_inc(v_fst_3792_);
lean_dec(v_a_3788_);
v___x_3795_ = lean_box(0);
v_isShared_3796_ = v_isSharedCheck_3838_;
goto v_resetjp_3794_;
}
v_resetjp_3794_:
{
lean_object* v___x_3797_; 
lean_inc_ref(v_struct_3786_);
v___x_3797_ = l_LeanExport_dumpExprAux(v_struct_3786_, v_a_3230_, v_snd_3793_);
if (lean_obj_tag(v___x_3797_) == 0)
{
lean_object* v_a_3798_; lean_object* v___x_3800_; uint8_t v_isShared_3801_; uint8_t v_isSharedCheck_3837_; 
v_a_3798_ = lean_ctor_get(v___x_3797_, 0);
v_isSharedCheck_3837_ = !lean_is_exclusive(v___x_3797_);
if (v_isSharedCheck_3837_ == 0)
{
v___x_3800_ = v___x_3797_;
v_isShared_3801_ = v_isSharedCheck_3837_;
goto v_resetjp_3799_;
}
else
{
lean_inc(v_a_3798_);
lean_dec(v___x_3797_);
v___x_3800_ = lean_box(0);
v_isShared_3801_ = v_isSharedCheck_3837_;
goto v_resetjp_3799_;
}
v_resetjp_3799_:
{
lean_object* v_fst_3802_; lean_object* v_snd_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3836_; 
v_fst_3802_ = lean_ctor_get(v_a_3798_, 0);
v_snd_3803_ = lean_ctor_get(v_a_3798_, 1);
v_isSharedCheck_3836_ = !lean_is_exclusive(v_a_3798_);
if (v_isSharedCheck_3836_ == 0)
{
v___x_3805_ = v_a_3798_;
v_isShared_3806_ = v_isSharedCheck_3836_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_snd_3803_);
lean_inc(v_fst_3802_);
lean_dec(v_a_3798_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3836_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3811_; 
v___x_3807_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__20));
v___x_3808_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__21));
v___x_3809_ = l_Lean_JsonNumber_fromNat(v_fst_3792_);
if (v_isShared_3801_ == 0)
{
lean_ctor_set_tag(v___x_3800_, 2);
lean_ctor_set(v___x_3800_, 0, v___x_3809_);
v___x_3811_ = v___x_3800_;
goto v_reusejp_3810_;
}
else
{
lean_object* v_reuseFailAlloc_3835_; 
v_reuseFailAlloc_3835_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3835_, 0, v___x_3809_);
v___x_3811_ = v_reuseFailAlloc_3835_;
goto v_reusejp_3810_;
}
v_reusejp_3810_:
{
lean_object* v___x_3813_; 
if (v_isShared_3806_ == 0)
{
lean_ctor_set(v___x_3805_, 1, v___x_3811_);
lean_ctor_set(v___x_3805_, 0, v___x_3808_);
v___x_3813_ = v___x_3805_;
goto v_reusejp_3812_;
}
else
{
lean_object* v_reuseFailAlloc_3834_; 
v_reuseFailAlloc_3834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3834_, 0, v___x_3808_);
lean_ctor_set(v_reuseFailAlloc_3834_, 1, v___x_3811_);
v___x_3813_ = v_reuseFailAlloc_3834_;
goto v_reusejp_3812_;
}
v_reusejp_3812_:
{
lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3817_; 
v___x_3814_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__22));
lean_inc(v_idx_3785_);
v___x_3815_ = l_Lean_JsonNumber_fromNat(v_idx_3785_);
if (v_isShared_3791_ == 0)
{
lean_ctor_set_tag(v___x_3790_, 2);
lean_ctor_set(v___x_3790_, 0, v___x_3815_);
v___x_3817_ = v___x_3790_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v___x_3815_);
v___x_3817_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
lean_object* v___x_3819_; 
if (v_isShared_3796_ == 0)
{
lean_ctor_set(v___x_3795_, 1, v___x_3817_);
lean_ctor_set(v___x_3795_, 0, v___x_3814_);
v___x_3819_ = v___x_3795_;
goto v_reusejp_3818_;
}
else
{
lean_object* v_reuseFailAlloc_3832_; 
v_reuseFailAlloc_3832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3832_, 0, v___x_3814_);
lean_ctor_set(v_reuseFailAlloc_3832_, 1, v___x_3817_);
v___x_3819_ = v_reuseFailAlloc_3832_;
goto v_reusejp_3818_;
}
v_reusejp_3818_:
{
lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; 
v___x_3820_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__23));
v___x_3821_ = l_Lean_JsonNumber_fromNat(v_fst_3802_);
v___x_3822_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3822_, 0, v___x_3821_);
v___x_3823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3823_, 0, v___x_3820_);
lean_ctor_set(v___x_3823_, 1, v___x_3822_);
v___x_3824_ = lean_box(0);
v___x_3825_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3825_, 0, v___x_3823_);
lean_ctor_set(v___x_3825_, 1, v___x_3824_);
v___x_3826_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3826_, 0, v___x_3819_);
lean_ctor_set(v___x_3826_, 1, v___x_3825_);
v___x_3827_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3827_, 0, v___x_3813_);
lean_ctor_set(v___x_3827_, 1, v___x_3826_);
v___x_3828_ = l_Lean_Json_mkObj(v___x_3827_);
lean_dec_ref_known(v___x_3827_, 2);
v___x_3829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3829_, 0, v___x_3807_);
lean_ctor_set(v___x_3829_, 1, v___x_3828_);
v___x_3830_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3830_, 0, v___x_3829_);
lean_ctor_set(v___x_3830_, 1, v___x_3824_);
v___x_3831_ = l_Lean_Json_mkObj(v___x_3830_);
lean_dec_ref_known(v___x_3830_, 2);
v_fst_3290_ = v___x_3831_;
v_snd_3291_ = v_snd_3803_;
goto v___jp_3289_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_3795_);
lean_dec(v_fst_3792_);
lean_del_object(v___x_3790_);
lean_dec_ref_known(v_e_3229_, 3);
return v___x_3797_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3229_, 3);
return v___x_3787_;
}
}
default: 
{
lean_object* v___x_3840_; lean_object* v___x_3841_; 
v___x_3840_ = lean_obj_once(&l_LeanExport_dumpExprAux___closed__26, &l_LeanExport_dumpExprAux___closed__26_once, _init_l_LeanExport_dumpExprAux___closed__26);
v___x_3841_ = l_panic___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__2(v___x_3840_, v_a_3230_, v_a_3231_);
if (lean_obj_tag(v___x_3841_) == 0)
{
lean_object* v_a_3842_; lean_object* v_fst_3843_; lean_object* v_snd_3844_; 
v_a_3842_ = lean_ctor_get(v___x_3841_, 0);
lean_inc(v_a_3842_);
lean_dec_ref_known(v___x_3841_, 1);
v_fst_3843_ = lean_ctor_get(v_a_3842_, 0);
lean_inc(v_fst_3843_);
v_snd_3844_ = lean_ctor_get(v_a_3842_, 1);
lean_inc(v_snd_3844_);
lean_dec(v_a_3842_);
v_fst_3290_ = v_fst_3843_;
v_snd_3291_ = v_snd_3844_;
goto v___jp_3289_;
}
else
{
lean_object* v_a_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3852_; 
lean_dec_ref(v_e_3229_);
v_a_3845_ = lean_ctor_get(v___x_3841_, 0);
v_isSharedCheck_3852_ = !lean_is_exclusive(v___x_3841_);
if (v_isSharedCheck_3852_ == 0)
{
v___x_3847_ = v___x_3841_;
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_a_3845_);
lean_dec(v___x_3841_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3852_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
lean_object* v___x_3850_; 
if (v_isShared_3848_ == 0)
{
v___x_3850_ = v___x_3847_;
goto v_reusejp_3849_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3851_, 0, v_a_3845_);
v___x_3850_ = v_reuseFailAlloc_3851_;
goto v_reusejp_3849_;
}
v_reusejp_3849_:
{
return v___x_3850_;
}
}
}
}
}
v___jp_3253_:
{
lean_object* v_size_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; 
v_size_3264_ = lean_ctor_get(v_visitedExprs_3257_, 0);
lean_inc_n(v_size_3264_, 2);
v___x_3265_ = l_Lean_JsonNumber_fromNat(v_size_3264_);
v___x_3266_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3266_, 0, v___x_3265_);
v___x_3267_ = l_Lean_Json_setObjVal_x21(v_fst_3254_, v___x_3252_, v___x_3266_);
v___x_3268_ = l_Lean_Json_compress(v___x_3267_);
v___x_3269_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_3268_);
if (lean_obj_tag(v___x_3269_) == 0)
{
lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3279_; 
v_isSharedCheck_3279_ = !lean_is_exclusive(v___x_3269_);
if (v_isSharedCheck_3279_ == 0)
{
lean_object* v_unused_3280_; 
v_unused_3280_ = lean_ctor_get(v___x_3269_, 0);
lean_dec(v_unused_3280_);
v___x_3271_ = v___x_3269_;
v_isShared_3272_ = v_isSharedCheck_3279_;
goto v_resetjp_3270_;
}
else
{
lean_dec(v___x_3269_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3279_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3277_; 
lean_inc(v_size_3264_);
v___x_3273_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_LeanExport_Basic_0__LeanExport_removeMData_spec__0___redArg(v_visitedExprs_3257_, v_e_3229_, v_size_3264_);
v___x_3274_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v___x_3274_, 0, v_visitedNames_3255_);
lean_ctor_set(v___x_3274_, 1, v_visitedLevels_3256_);
lean_ctor_set(v___x_3274_, 2, v___x_3273_);
lean_ctor_set(v___x_3274_, 3, v_visitedConstants_3258_);
lean_ctor_set(v___x_3274_, 4, v_noMDataExprs_3259_);
lean_ctor_set(v___x_3274_, 5, v_recursorMap_3263_);
lean_ctor_set_uint8(v___x_3274_, sizeof(void*)*6, v_exportMData_3260_);
lean_ctor_set_uint8(v___x_3274_, sizeof(void*)*6 + 1, v_exportUnsafe_3261_);
lean_ctor_set_uint8(v___x_3274_, sizeof(void*)*6 + 2, v_ignoreMissing_3262_);
v___x_3275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3275_, 0, v_size_3264_);
lean_ctor_set(v___x_3275_, 1, v___x_3274_);
if (v_isShared_3272_ == 0)
{
lean_ctor_set(v___x_3271_, 0, v___x_3275_);
v___x_3277_ = v___x_3271_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v___x_3275_);
v___x_3277_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
return v___x_3277_;
}
}
}
else
{
lean_object* v_a_3281_; lean_object* v___x_3283_; uint8_t v_isShared_3284_; uint8_t v_isSharedCheck_3288_; 
lean_dec(v_size_3264_);
lean_dec(v_recursorMap_3263_);
lean_dec_ref(v_noMDataExprs_3259_);
lean_dec_ref(v_visitedConstants_3258_);
lean_dec_ref(v_visitedExprs_3257_);
lean_dec_ref(v_visitedLevels_3256_);
lean_dec_ref(v_visitedNames_3255_);
lean_dec_ref(v_e_3229_);
v_a_3281_ = lean_ctor_get(v___x_3269_, 0);
v_isSharedCheck_3288_ = !lean_is_exclusive(v___x_3269_);
if (v_isSharedCheck_3288_ == 0)
{
v___x_3283_ = v___x_3269_;
v_isShared_3284_ = v_isSharedCheck_3288_;
goto v_resetjp_3282_;
}
else
{
lean_inc(v_a_3281_);
lean_dec(v___x_3269_);
v___x_3283_ = lean_box(0);
v_isShared_3284_ = v_isSharedCheck_3288_;
goto v_resetjp_3282_;
}
v_resetjp_3282_:
{
lean_object* v___x_3286_; 
if (v_isShared_3284_ == 0)
{
v___x_3286_ = v___x_3283_;
goto v_reusejp_3285_;
}
else
{
lean_object* v_reuseFailAlloc_3287_; 
v_reuseFailAlloc_3287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3287_, 0, v_a_3281_);
v___x_3286_ = v_reuseFailAlloc_3287_;
goto v_reusejp_3285_;
}
v_reusejp_3285_:
{
return v___x_3286_;
}
}
}
}
v___jp_3289_:
{
lean_object* v_visitedNames_3292_; lean_object* v_visitedLevels_3293_; lean_object* v_visitedExprs_3294_; lean_object* v_visitedConstants_3295_; lean_object* v_noMDataExprs_3296_; uint8_t v_exportMData_3297_; uint8_t v_exportUnsafe_3298_; uint8_t v_ignoreMissing_3299_; lean_object* v_recursorMap_3300_; 
v_visitedNames_3292_ = lean_ctor_get(v_snd_3291_, 0);
lean_inc_ref(v_visitedNames_3292_);
v_visitedLevels_3293_ = lean_ctor_get(v_snd_3291_, 1);
lean_inc_ref(v_visitedLevels_3293_);
v_visitedExprs_3294_ = lean_ctor_get(v_snd_3291_, 2);
lean_inc_ref(v_visitedExprs_3294_);
v_visitedConstants_3295_ = lean_ctor_get(v_snd_3291_, 3);
lean_inc_ref(v_visitedConstants_3295_);
v_noMDataExprs_3296_ = lean_ctor_get(v_snd_3291_, 4);
lean_inc_ref(v_noMDataExprs_3296_);
v_exportMData_3297_ = lean_ctor_get_uint8(v_snd_3291_, sizeof(void*)*6);
v_exportUnsafe_3298_ = lean_ctor_get_uint8(v_snd_3291_, sizeof(void*)*6 + 1);
v_ignoreMissing_3299_ = lean_ctor_get_uint8(v_snd_3291_, sizeof(void*)*6 + 2);
v_recursorMap_3300_ = lean_ctor_get(v_snd_3291_, 5);
lean_inc(v_recursorMap_3300_);
lean_dec_ref(v_snd_3291_);
v_fst_3254_ = v_fst_3290_;
v_visitedNames_3255_ = v_visitedNames_3292_;
v_visitedLevels_3256_ = v_visitedLevels_3293_;
v_visitedExprs_3257_ = v_visitedExprs_3294_;
v_visitedConstants_3258_ = v_visitedConstants_3295_;
v_noMDataExprs_3259_ = v_noMDataExprs_3296_;
v_exportMData_3260_ = v_exportMData_3297_;
v_exportUnsafe_3261_ = v_exportUnsafe_3298_;
v_ignoreMissing_3262_ = v_ignoreMissing_3299_;
v_recursorMap_3263_ = v_recursorMap_3300_;
goto v___jp_3253_;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExpr(lean_object* v_e_3853_, lean_object* v_a_3854_, lean_object* v_a_3855_){
_start:
{
uint8_t v_exportMData_3857_; 
v_exportMData_3857_ = lean_ctor_get_uint8(v_a_3855_, sizeof(void*)*6);
if (v_exportMData_3857_ == 0)
{
lean_object* v_visitedNames_3858_; lean_object* v_visitedLevels_3859_; lean_object* v_visitedExprs_3860_; lean_object* v_visitedConstants_3861_; uint8_t v_exportUnsafe_3862_; uint8_t v_ignoreMissing_3863_; lean_object* v_recursorMap_3864_; lean_object* v___x_3866_; uint8_t v_isShared_3867_; uint8_t v_isSharedCheck_3885_; 
v_visitedNames_3858_ = lean_ctor_get(v_a_3855_, 0);
v_visitedLevels_3859_ = lean_ctor_get(v_a_3855_, 1);
v_visitedExprs_3860_ = lean_ctor_get(v_a_3855_, 2);
v_visitedConstants_3861_ = lean_ctor_get(v_a_3855_, 3);
v_exportUnsafe_3862_ = lean_ctor_get_uint8(v_a_3855_, sizeof(void*)*6 + 1);
v_ignoreMissing_3863_ = lean_ctor_get_uint8(v_a_3855_, sizeof(void*)*6 + 2);
v_recursorMap_3864_ = lean_ctor_get(v_a_3855_, 5);
v_isSharedCheck_3885_ = !lean_is_exclusive(v_a_3855_);
if (v_isSharedCheck_3885_ == 0)
{
lean_object* v_unused_3886_; 
v_unused_3886_ = lean_ctor_get(v_a_3855_, 4);
lean_dec(v_unused_3886_);
v___x_3866_ = v_a_3855_;
v_isShared_3867_ = v_isSharedCheck_3885_;
goto v_resetjp_3865_;
}
else
{
lean_inc(v_recursorMap_3864_);
lean_inc(v_visitedConstants_3861_);
lean_inc(v_visitedExprs_3860_);
lean_inc(v_visitedLevels_3859_);
lean_inc(v_visitedNames_3858_);
lean_dec(v_a_3855_);
v___x_3866_ = lean_box(0);
v_isShared_3867_ = v_isSharedCheck_3885_;
goto v_resetjp_3865_;
}
v_resetjp_3865_:
{
lean_object* v___x_3868_; lean_object* v___x_3870_; 
v___x_3868_ = lean_obj_once(&l_LeanExport_dumpExpr___closed__1, &l_LeanExport_dumpExpr___closed__1_once, _init_l_LeanExport_dumpExpr___closed__1);
if (v_isShared_3867_ == 0)
{
lean_ctor_set(v___x_3866_, 4, v___x_3868_);
v___x_3870_ = v___x_3866_;
goto v_reusejp_3869_;
}
else
{
lean_object* v_reuseFailAlloc_3884_; 
v_reuseFailAlloc_3884_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_3884_, 0, v_visitedNames_3858_);
lean_ctor_set(v_reuseFailAlloc_3884_, 1, v_visitedLevels_3859_);
lean_ctor_set(v_reuseFailAlloc_3884_, 2, v_visitedExprs_3860_);
lean_ctor_set(v_reuseFailAlloc_3884_, 3, v_visitedConstants_3861_);
lean_ctor_set(v_reuseFailAlloc_3884_, 4, v___x_3868_);
lean_ctor_set(v_reuseFailAlloc_3884_, 5, v_recursorMap_3864_);
lean_ctor_set_uint8(v_reuseFailAlloc_3884_, sizeof(void*)*6, v_exportMData_3857_);
lean_ctor_set_uint8(v_reuseFailAlloc_3884_, sizeof(void*)*6 + 1, v_exportUnsafe_3862_);
lean_ctor_set_uint8(v_reuseFailAlloc_3884_, sizeof(void*)*6 + 2, v_ignoreMissing_3863_);
v___x_3870_ = v_reuseFailAlloc_3884_;
goto v_reusejp_3869_;
}
v_reusejp_3869_:
{
lean_object* v___x_3871_; 
v___x_3871_ = l___private_LeanExport_Basic_0__LeanExport_removeMData(v_e_3853_, v_a_3854_, v___x_3870_);
if (lean_obj_tag(v___x_3871_) == 0)
{
lean_object* v_a_3872_; lean_object* v_fst_3873_; lean_object* v_snd_3874_; lean_object* v___x_3875_; 
v_a_3872_ = lean_ctor_get(v___x_3871_, 0);
lean_inc(v_a_3872_);
lean_dec_ref_known(v___x_3871_, 1);
v_fst_3873_ = lean_ctor_get(v_a_3872_, 0);
lean_inc(v_fst_3873_);
v_snd_3874_ = lean_ctor_get(v_a_3872_, 1);
lean_inc(v_snd_3874_);
lean_dec(v_a_3872_);
v___x_3875_ = l_LeanExport_dumpExprAux(v_fst_3873_, v_a_3854_, v_snd_3874_);
return v___x_3875_;
}
else
{
lean_object* v_a_3876_; lean_object* v___x_3878_; uint8_t v_isShared_3879_; uint8_t v_isSharedCheck_3883_; 
v_a_3876_ = lean_ctor_get(v___x_3871_, 0);
v_isSharedCheck_3883_ = !lean_is_exclusive(v___x_3871_);
if (v_isSharedCheck_3883_ == 0)
{
v___x_3878_ = v___x_3871_;
v_isShared_3879_ = v_isSharedCheck_3883_;
goto v_resetjp_3877_;
}
else
{
lean_inc(v_a_3876_);
lean_dec(v___x_3871_);
v___x_3878_ = lean_box(0);
v_isShared_3879_ = v_isSharedCheck_3883_;
goto v_resetjp_3877_;
}
v_resetjp_3877_:
{
lean_object* v___x_3881_; 
if (v_isShared_3879_ == 0)
{
v___x_3881_ = v___x_3878_;
goto v_reusejp_3880_;
}
else
{
lean_object* v_reuseFailAlloc_3882_; 
v_reuseFailAlloc_3882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3882_, 0, v_a_3876_);
v___x_3881_ = v_reuseFailAlloc_3882_;
goto v_reusejp_3880_;
}
v_reusejp_3880_:
{
return v___x_3881_;
}
}
}
}
}
}
else
{
lean_object* v___x_3887_; 
v___x_3887_ = l_LeanExport_dumpExprAux(v_e_3853_, v_a_3854_, v_a_3855_);
return v___x_3887_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(size_t v_sz_3897_, size_t v_i_3898_, lean_object* v_bs_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_){
_start:
{
uint8_t v___x_3903_; 
v___x_3903_ = lean_usize_dec_lt(v_i_3898_, v_sz_3897_);
if (v___x_3903_ == 0)
{
lean_object* v___x_3904_; lean_object* v___x_3905_; 
v___x_3904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3904_, 0, v_bs_3899_);
lean_ctor_set(v___x_3904_, 1, v___y_3901_);
v___x_3905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3905_, 0, v___x_3904_);
return v___x_3905_;
}
else
{
lean_object* v_v_3906_; lean_object* v_toConstantVal_3907_; lean_object* v_numParams_3908_; lean_object* v_numIndices_3909_; lean_object* v_all_3910_; lean_object* v_ctors_3911_; lean_object* v_numNested_3912_; uint8_t v_isRec_3913_; uint8_t v_isUnsafe_3914_; uint8_t v_isReflexive_3915_; lean_object* v_name_3916_; lean_object* v_levelParams_3917_; lean_object* v_type_3918_; lean_object* v___x_3919_; lean_object* v_bs_x27_3920_; lean_object* v___x_3921_; 
v_v_3906_ = lean_array_uget_borrowed(v_bs_3899_, v_i_3898_);
v_toConstantVal_3907_ = lean_ctor_get(v_v_3906_, 0);
v_numParams_3908_ = lean_ctor_get(v_v_3906_, 1);
lean_inc(v_numParams_3908_);
v_numIndices_3909_ = lean_ctor_get(v_v_3906_, 2);
lean_inc(v_numIndices_3909_);
v_all_3910_ = lean_ctor_get(v_v_3906_, 3);
lean_inc(v_all_3910_);
v_ctors_3911_ = lean_ctor_get(v_v_3906_, 4);
lean_inc(v_ctors_3911_);
v_numNested_3912_ = lean_ctor_get(v_v_3906_, 5);
lean_inc(v_numNested_3912_);
v_isRec_3913_ = lean_ctor_get_uint8(v_v_3906_, sizeof(void*)*6);
v_isUnsafe_3914_ = lean_ctor_get_uint8(v_v_3906_, sizeof(void*)*6 + 1);
v_isReflexive_3915_ = lean_ctor_get_uint8(v_v_3906_, sizeof(void*)*6 + 2);
v_name_3916_ = lean_ctor_get(v_toConstantVal_3907_, 0);
lean_inc(v_name_3916_);
v_levelParams_3917_ = lean_ctor_get(v_toConstantVal_3907_, 1);
lean_inc(v_levelParams_3917_);
v_type_3918_ = lean_ctor_get(v_toConstantVal_3907_, 2);
lean_inc_ref(v_type_3918_);
v___x_3919_ = lean_unsigned_to_nat(0u);
v_bs_x27_3920_ = lean_array_uset(v_bs_3899_, v_i_3898_, v___x_3919_);
v___x_3921_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_3916_, v___y_3900_, v___y_3901_);
if (lean_obj_tag(v___x_3921_) == 0)
{
lean_object* v_a_3922_; lean_object* v_fst_3923_; lean_object* v_snd_3924_; lean_object* v___x_3926_; uint8_t v_isShared_3927_; uint8_t v_isSharedCheck_4054_; 
v_a_3922_ = lean_ctor_get(v___x_3921_, 0);
lean_inc(v_a_3922_);
lean_dec_ref_known(v___x_3921_, 1);
v_fst_3923_ = lean_ctor_get(v_a_3922_, 0);
v_snd_3924_ = lean_ctor_get(v_a_3922_, 1);
v_isSharedCheck_4054_ = !lean_is_exclusive(v_a_3922_);
if (v_isSharedCheck_4054_ == 0)
{
v___x_3926_ = v_a_3922_;
v_isShared_3927_ = v_isSharedCheck_4054_;
goto v_resetjp_3925_;
}
else
{
lean_inc(v_snd_3924_);
lean_inc(v_fst_3923_);
lean_dec(v_a_3922_);
v___x_3926_ = lean_box(0);
v_isShared_3927_ = v_isSharedCheck_4054_;
goto v_resetjp_3925_;
}
v_resetjp_3925_:
{
lean_object* v___x_3928_; 
v___x_3928_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_3917_, v___y_3900_, v_snd_3924_);
if (lean_obj_tag(v___x_3928_) == 0)
{
lean_object* v_a_3929_; lean_object* v_fst_3930_; lean_object* v_snd_3931_; lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_4045_; 
v_a_3929_ = lean_ctor_get(v___x_3928_, 0);
lean_inc(v_a_3929_);
lean_dec_ref_known(v___x_3928_, 1);
v_fst_3930_ = lean_ctor_get(v_a_3929_, 0);
v_snd_3931_ = lean_ctor_get(v_a_3929_, 1);
v_isSharedCheck_4045_ = !lean_is_exclusive(v_a_3929_);
if (v_isSharedCheck_4045_ == 0)
{
v___x_3933_ = v_a_3929_;
v_isShared_3934_ = v_isSharedCheck_4045_;
goto v_resetjp_3932_;
}
else
{
lean_inc(v_snd_3931_);
lean_inc(v_fst_3930_);
lean_dec(v_a_3929_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_4045_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
lean_object* v___x_3935_; 
v___x_3935_ = l_LeanExport_dumpExpr(v_type_3918_, v___y_3900_, v_snd_3931_);
if (lean_obj_tag(v___x_3935_) == 0)
{
lean_object* v_a_3936_; lean_object* v_fst_3937_; lean_object* v_snd_3938_; lean_object* v___x_3940_; uint8_t v_isShared_3941_; uint8_t v_isSharedCheck_4036_; 
v_a_3936_ = lean_ctor_get(v___x_3935_, 0);
lean_inc(v_a_3936_);
lean_dec_ref_known(v___x_3935_, 1);
v_fst_3937_ = lean_ctor_get(v_a_3936_, 0);
v_snd_3938_ = lean_ctor_get(v_a_3936_, 1);
v_isSharedCheck_4036_ = !lean_is_exclusive(v_a_3936_);
if (v_isSharedCheck_4036_ == 0)
{
v___x_3940_ = v_a_3936_;
v_isShared_3941_ = v_isSharedCheck_4036_;
goto v_resetjp_3939_;
}
else
{
lean_inc(v_snd_3938_);
lean_inc(v_fst_3937_);
lean_dec(v_a_3936_);
v___x_3940_ = lean_box(0);
v_isShared_3941_ = v_isSharedCheck_4036_;
goto v_resetjp_3939_;
}
v_resetjp_3939_:
{
lean_object* v___x_3942_; 
v___x_3942_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_3910_, v___y_3900_, v_snd_3938_);
if (lean_obj_tag(v___x_3942_) == 0)
{
lean_object* v_a_3943_; lean_object* v_fst_3944_; lean_object* v_snd_3945_; lean_object* v___x_3947_; uint8_t v_isShared_3948_; uint8_t v_isSharedCheck_4027_; 
v_a_3943_ = lean_ctor_get(v___x_3942_, 0);
lean_inc(v_a_3943_);
lean_dec_ref_known(v___x_3942_, 1);
v_fst_3944_ = lean_ctor_get(v_a_3943_, 0);
v_snd_3945_ = lean_ctor_get(v_a_3943_, 1);
v_isSharedCheck_4027_ = !lean_is_exclusive(v_a_3943_);
if (v_isSharedCheck_4027_ == 0)
{
v___x_3947_ = v_a_3943_;
v_isShared_3948_ = v_isSharedCheck_4027_;
goto v_resetjp_3946_;
}
else
{
lean_inc(v_snd_3945_);
lean_inc(v_fst_3944_);
lean_dec(v_a_3943_);
v___x_3947_ = lean_box(0);
v_isShared_3948_ = v_isSharedCheck_4027_;
goto v_resetjp_3946_;
}
v_resetjp_3946_:
{
lean_object* v___x_3949_; 
v___x_3949_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_ctors_3911_, v___y_3900_, v_snd_3945_);
if (lean_obj_tag(v___x_3949_) == 0)
{
lean_object* v_a_3950_; lean_object* v_fst_3951_; lean_object* v_snd_3952_; lean_object* v___x_3954_; uint8_t v_isShared_3955_; uint8_t v_isSharedCheck_4018_; 
v_a_3950_ = lean_ctor_get(v___x_3949_, 0);
lean_inc(v_a_3950_);
lean_dec_ref_known(v___x_3949_, 1);
v_fst_3951_ = lean_ctor_get(v_a_3950_, 0);
v_snd_3952_ = lean_ctor_get(v_a_3950_, 1);
v_isSharedCheck_4018_ = !lean_is_exclusive(v_a_3950_);
if (v_isSharedCheck_4018_ == 0)
{
v___x_3954_ = v_a_3950_;
v_isShared_3955_ = v_isSharedCheck_4018_;
goto v_resetjp_3953_;
}
else
{
lean_inc(v_snd_3952_);
lean_inc(v_fst_3951_);
lean_dec(v_a_3950_);
v___x_3954_ = lean_box(0);
v_isShared_3955_ = v_isSharedCheck_4018_;
goto v_resetjp_3953_;
}
v_resetjp_3953_:
{
lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3960_; 
v___x_3956_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_3957_ = l_Lean_JsonNumber_fromNat(v_fst_3923_);
v___x_3958_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3958_, 0, v___x_3957_);
if (v_isShared_3955_ == 0)
{
lean_ctor_set(v___x_3954_, 1, v___x_3958_);
lean_ctor_set(v___x_3954_, 0, v___x_3956_);
v___x_3960_ = v___x_3954_;
goto v_reusejp_3959_;
}
else
{
lean_object* v_reuseFailAlloc_4017_; 
v_reuseFailAlloc_4017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4017_, 0, v___x_3956_);
lean_ctor_set(v_reuseFailAlloc_4017_, 1, v___x_3958_);
v___x_3960_ = v_reuseFailAlloc_4017_;
goto v_reusejp_3959_;
}
v_reusejp_3959_:
{
lean_object* v___x_3961_; lean_object* v___x_3963_; 
v___x_3961_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_3948_ == 0)
{
lean_ctor_set(v___x_3947_, 1, v_fst_3930_);
lean_ctor_set(v___x_3947_, 0, v___x_3961_);
v___x_3963_ = v___x_3947_;
goto v_reusejp_3962_;
}
else
{
lean_object* v_reuseFailAlloc_4016_; 
v_reuseFailAlloc_4016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v___x_3961_);
lean_ctor_set(v_reuseFailAlloc_4016_, 1, v_fst_3930_);
v___x_3963_ = v_reuseFailAlloc_4016_;
goto v_reusejp_3962_;
}
v_reusejp_3962_:
{
lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3968_; 
v___x_3964_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_3965_ = l_Lean_JsonNumber_fromNat(v_fst_3937_);
v___x_3966_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3965_);
if (v_isShared_3941_ == 0)
{
lean_ctor_set(v___x_3940_, 1, v___x_3966_);
lean_ctor_set(v___x_3940_, 0, v___x_3964_);
v___x_3968_ = v___x_3940_;
goto v_reusejp_3967_;
}
else
{
lean_object* v_reuseFailAlloc_4015_; 
v_reuseFailAlloc_4015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4015_, 0, v___x_3964_);
lean_ctor_set(v_reuseFailAlloc_4015_, 1, v___x_3966_);
v___x_3968_ = v_reuseFailAlloc_4015_;
goto v_reusejp_3967_;
}
v_reusejp_3967_:
{
lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3973_; 
v___x_3969_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__4));
v___x_3970_ = l_Lean_JsonNumber_fromNat(v_numParams_3908_);
v___x_3971_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3971_, 0, v___x_3970_);
if (v_isShared_3934_ == 0)
{
lean_ctor_set(v___x_3933_, 1, v___x_3971_);
lean_ctor_set(v___x_3933_, 0, v___x_3969_);
v___x_3973_ = v___x_3933_;
goto v_reusejp_3972_;
}
else
{
lean_object* v_reuseFailAlloc_4014_; 
v_reuseFailAlloc_4014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4014_, 0, v___x_3969_);
lean_ctor_set(v_reuseFailAlloc_4014_, 1, v___x_3971_);
v___x_3973_ = v_reuseFailAlloc_4014_;
goto v_reusejp_3972_;
}
v_reusejp_3972_:
{
lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3978_; 
v___x_3974_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_3975_ = l_Lean_JsonNumber_fromNat(v_numIndices_3909_);
v___x_3976_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3976_, 0, v___x_3975_);
if (v_isShared_3927_ == 0)
{
lean_ctor_set(v___x_3926_, 1, v___x_3976_);
lean_ctor_set(v___x_3926_, 0, v___x_3974_);
v___x_3978_ = v___x_3926_;
goto v_reusejp_3977_;
}
else
{
lean_object* v_reuseFailAlloc_4013_; 
v_reuseFailAlloc_4013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4013_, 0, v___x_3974_);
lean_ctor_set(v_reuseFailAlloc_4013_, 1, v___x_3976_);
v___x_3978_ = v_reuseFailAlloc_4013_;
goto v_reusejp_3977_;
}
v_reusejp_3977_:
{
lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___x_3993_; lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; size_t v___x_4009_; size_t v___x_4010_; lean_object* v___x_4011_; 
v___x_3979_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
v___x_3980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3980_, 0, v___x_3979_);
lean_ctor_set(v___x_3980_, 1, v_fst_3944_);
v___x_3981_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2));
v___x_3982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3982_, 0, v___x_3981_);
lean_ctor_set(v___x_3982_, 1, v_fst_3951_);
v___x_3983_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__3));
v___x_3984_ = l_Lean_JsonNumber_fromNat(v_numNested_3912_);
v___x_3985_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3985_, 0, v___x_3984_);
v___x_3986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3986_, 0, v___x_3983_);
lean_ctor_set(v___x_3986_, 1, v___x_3985_);
v___x_3987_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__4));
v___x_3988_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3988_, 0, v_isRec_3913_);
v___x_3989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3989_, 0, v___x_3987_);
lean_ctor_set(v___x_3989_, 1, v___x_3988_);
v___x_3990_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__5));
v___x_3991_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3991_, 0, v_isReflexive_3915_);
v___x_3992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3992_, 0, v___x_3990_);
lean_ctor_set(v___x_3992_, 1, v___x_3991_);
v___x_3993_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6));
v___x_3994_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3994_, 0, v_isUnsafe_3914_);
v___x_3995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3995_, 0, v___x_3993_);
lean_ctor_set(v___x_3995_, 1, v___x_3994_);
v___x_3996_ = lean_box(0);
v___x_3997_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3997_, 0, v___x_3995_);
lean_ctor_set(v___x_3997_, 1, v___x_3996_);
v___x_3998_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3998_, 0, v___x_3992_);
lean_ctor_set(v___x_3998_, 1, v___x_3997_);
v___x_3999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3999_, 0, v___x_3989_);
lean_ctor_set(v___x_3999_, 1, v___x_3998_);
v___x_4000_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4000_, 0, v___x_3986_);
lean_ctor_set(v___x_4000_, 1, v___x_3999_);
v___x_4001_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4001_, 0, v___x_3982_);
lean_ctor_set(v___x_4001_, 1, v___x_4000_);
v___x_4002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4002_, 0, v___x_3980_);
lean_ctor_set(v___x_4002_, 1, v___x_4001_);
v___x_4003_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4003_, 0, v___x_3978_);
lean_ctor_set(v___x_4003_, 1, v___x_4002_);
v___x_4004_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4004_, 0, v___x_3973_);
lean_ctor_set(v___x_4004_, 1, v___x_4003_);
v___x_4005_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4005_, 0, v___x_3968_);
lean_ctor_set(v___x_4005_, 1, v___x_4004_);
v___x_4006_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4006_, 0, v___x_3963_);
lean_ctor_set(v___x_4006_, 1, v___x_4005_);
v___x_4007_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4007_, 0, v___x_3960_);
lean_ctor_set(v___x_4007_, 1, v___x_4006_);
v___x_4008_ = l_Lean_Json_mkObj(v___x_4007_);
lean_dec_ref_known(v___x_4007_, 2);
v___x_4009_ = ((size_t)1ULL);
v___x_4010_ = lean_usize_add(v_i_3898_, v___x_4009_);
v___x_4011_ = lean_array_uset(v_bs_x27_3920_, v_i_3898_, v___x_4008_);
v_i_3898_ = v___x_4010_;
v_bs_3899_ = v___x_4011_;
v___y_3901_ = v_snd_3952_;
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
lean_object* v_a_4019_; lean_object* v___x_4021_; uint8_t v_isShared_4022_; uint8_t v_isSharedCheck_4026_; 
lean_del_object(v___x_3947_);
lean_dec(v_fst_3944_);
lean_del_object(v___x_3940_);
lean_dec(v_fst_3937_);
lean_del_object(v___x_3933_);
lean_dec(v_fst_3930_);
lean_del_object(v___x_3926_);
lean_dec(v_fst_3923_);
lean_dec_ref(v_bs_x27_3920_);
lean_dec(v_numNested_3912_);
lean_dec(v_numIndices_3909_);
lean_dec(v_numParams_3908_);
v_a_4019_ = lean_ctor_get(v___x_3949_, 0);
v_isSharedCheck_4026_ = !lean_is_exclusive(v___x_3949_);
if (v_isSharedCheck_4026_ == 0)
{
v___x_4021_ = v___x_3949_;
v_isShared_4022_ = v_isSharedCheck_4026_;
goto v_resetjp_4020_;
}
else
{
lean_inc(v_a_4019_);
lean_dec(v___x_3949_);
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
else
{
lean_object* v_a_4028_; lean_object* v___x_4030_; uint8_t v_isShared_4031_; uint8_t v_isSharedCheck_4035_; 
lean_del_object(v___x_3940_);
lean_dec(v_fst_3937_);
lean_del_object(v___x_3933_);
lean_dec(v_fst_3930_);
lean_del_object(v___x_3926_);
lean_dec(v_fst_3923_);
lean_dec_ref(v_bs_x27_3920_);
lean_dec(v_numNested_3912_);
lean_dec(v_ctors_3911_);
lean_dec(v_numIndices_3909_);
lean_dec(v_numParams_3908_);
v_a_4028_ = lean_ctor_get(v___x_3942_, 0);
v_isSharedCheck_4035_ = !lean_is_exclusive(v___x_3942_);
if (v_isSharedCheck_4035_ == 0)
{
v___x_4030_ = v___x_3942_;
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
else
{
lean_inc(v_a_4028_);
lean_dec(v___x_3942_);
v___x_4030_ = lean_box(0);
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
v_resetjp_4029_:
{
lean_object* v___x_4033_; 
if (v_isShared_4031_ == 0)
{
v___x_4033_ = v___x_4030_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v_a_4028_);
v___x_4033_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
return v___x_4033_;
}
}
}
}
}
else
{
lean_object* v_a_4037_; lean_object* v___x_4039_; uint8_t v_isShared_4040_; uint8_t v_isSharedCheck_4044_; 
lean_del_object(v___x_3933_);
lean_dec(v_fst_3930_);
lean_del_object(v___x_3926_);
lean_dec(v_fst_3923_);
lean_dec_ref(v_bs_x27_3920_);
lean_dec(v_numNested_3912_);
lean_dec(v_ctors_3911_);
lean_dec(v_all_3910_);
lean_dec(v_numIndices_3909_);
lean_dec(v_numParams_3908_);
v_a_4037_ = lean_ctor_get(v___x_3935_, 0);
v_isSharedCheck_4044_ = !lean_is_exclusive(v___x_3935_);
if (v_isSharedCheck_4044_ == 0)
{
v___x_4039_ = v___x_3935_;
v_isShared_4040_ = v_isSharedCheck_4044_;
goto v_resetjp_4038_;
}
else
{
lean_inc(v_a_4037_);
lean_dec(v___x_3935_);
v___x_4039_ = lean_box(0);
v_isShared_4040_ = v_isSharedCheck_4044_;
goto v_resetjp_4038_;
}
v_resetjp_4038_:
{
lean_object* v___x_4042_; 
if (v_isShared_4040_ == 0)
{
v___x_4042_ = v___x_4039_;
goto v_reusejp_4041_;
}
else
{
lean_object* v_reuseFailAlloc_4043_; 
v_reuseFailAlloc_4043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4043_, 0, v_a_4037_);
v___x_4042_ = v_reuseFailAlloc_4043_;
goto v_reusejp_4041_;
}
v_reusejp_4041_:
{
return v___x_4042_;
}
}
}
}
}
else
{
lean_object* v_a_4046_; lean_object* v___x_4048_; uint8_t v_isShared_4049_; uint8_t v_isSharedCheck_4053_; 
lean_del_object(v___x_3926_);
lean_dec(v_fst_3923_);
lean_dec_ref(v_bs_x27_3920_);
lean_dec_ref(v_type_3918_);
lean_dec(v_numNested_3912_);
lean_dec(v_ctors_3911_);
lean_dec(v_all_3910_);
lean_dec(v_numIndices_3909_);
lean_dec(v_numParams_3908_);
v_a_4046_ = lean_ctor_get(v___x_3928_, 0);
v_isSharedCheck_4053_ = !lean_is_exclusive(v___x_3928_);
if (v_isSharedCheck_4053_ == 0)
{
v___x_4048_ = v___x_3928_;
v_isShared_4049_ = v_isSharedCheck_4053_;
goto v_resetjp_4047_;
}
else
{
lean_inc(v_a_4046_);
lean_dec(v___x_3928_);
v___x_4048_ = lean_box(0);
v_isShared_4049_ = v_isSharedCheck_4053_;
goto v_resetjp_4047_;
}
v_resetjp_4047_:
{
lean_object* v___x_4051_; 
if (v_isShared_4049_ == 0)
{
v___x_4051_ = v___x_4048_;
goto v_reusejp_4050_;
}
else
{
lean_object* v_reuseFailAlloc_4052_; 
v_reuseFailAlloc_4052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4052_, 0, v_a_4046_);
v___x_4051_ = v_reuseFailAlloc_4052_;
goto v_reusejp_4050_;
}
v_reusejp_4050_:
{
return v___x_4051_;
}
}
}
}
}
else
{
lean_object* v_a_4055_; lean_object* v___x_4057_; uint8_t v_isShared_4058_; uint8_t v_isSharedCheck_4062_; 
lean_dec_ref(v_bs_x27_3920_);
lean_dec_ref(v_type_3918_);
lean_dec(v_levelParams_3917_);
lean_dec(v_numNested_3912_);
lean_dec(v_ctors_3911_);
lean_dec(v_all_3910_);
lean_dec(v_numIndices_3909_);
lean_dec(v_numParams_3908_);
v_a_4055_ = lean_ctor_get(v___x_3921_, 0);
v_isSharedCheck_4062_ = !lean_is_exclusive(v___x_3921_);
if (v_isSharedCheck_4062_ == 0)
{
v___x_4057_ = v___x_3921_;
v_isShared_4058_ = v_isSharedCheck_4062_;
goto v_resetjp_4056_;
}
else
{
lean_inc(v_a_4055_);
lean_dec(v___x_3921_);
v___x_4057_ = lean_box(0);
v_isShared_4058_ = v_isSharedCheck_4062_;
goto v_resetjp_4056_;
}
v_resetjp_4056_:
{
lean_object* v___x_4060_; 
if (v_isShared_4058_ == 0)
{
v___x_4060_ = v___x_4057_;
goto v_reusejp_4059_;
}
else
{
lean_object* v_reuseFailAlloc_4061_; 
v_reuseFailAlloc_4061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4061_, 0, v_a_4055_);
v___x_4060_ = v_reuseFailAlloc_4061_;
goto v_reusejp_4059_;
}
v_reusejp_4059_:
{
return v___x_4060_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(size_t v_sz_4066_, size_t v_i_4067_, lean_object* v_bs_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_){
_start:
{
uint8_t v___x_4072_; 
v___x_4072_ = lean_usize_dec_lt(v_i_4067_, v_sz_4066_);
if (v___x_4072_ == 0)
{
lean_object* v___x_4073_; lean_object* v___x_4074_; 
v___x_4073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4073_, 0, v_bs_4068_);
lean_ctor_set(v___x_4073_, 1, v___y_4070_);
v___x_4074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4074_, 0, v___x_4073_);
return v___x_4074_;
}
else
{
lean_object* v_v_4075_; lean_object* v_toConstantVal_4076_; lean_object* v_induct_4077_; lean_object* v_cidx_4078_; lean_object* v_numParams_4079_; lean_object* v_numFields_4080_; uint8_t v_isUnsafe_4081_; lean_object* v_name_4082_; lean_object* v_levelParams_4083_; lean_object* v_type_4084_; lean_object* v___x_4085_; lean_object* v_bs_x27_4086_; lean_object* v___x_4087_; 
v_v_4075_ = lean_array_uget_borrowed(v_bs_4068_, v_i_4067_);
v_toConstantVal_4076_ = lean_ctor_get(v_v_4075_, 0);
v_induct_4077_ = lean_ctor_get(v_v_4075_, 1);
lean_inc(v_induct_4077_);
v_cidx_4078_ = lean_ctor_get(v_v_4075_, 2);
lean_inc(v_cidx_4078_);
v_numParams_4079_ = lean_ctor_get(v_v_4075_, 3);
lean_inc(v_numParams_4079_);
v_numFields_4080_ = lean_ctor_get(v_v_4075_, 4);
lean_inc(v_numFields_4080_);
v_isUnsafe_4081_ = lean_ctor_get_uint8(v_v_4075_, sizeof(void*)*5);
v_name_4082_ = lean_ctor_get(v_toConstantVal_4076_, 0);
lean_inc(v_name_4082_);
v_levelParams_4083_ = lean_ctor_get(v_toConstantVal_4076_, 1);
lean_inc(v_levelParams_4083_);
v_type_4084_ = lean_ctor_get(v_toConstantVal_4076_, 2);
lean_inc_ref(v_type_4084_);
v___x_4085_ = lean_unsigned_to_nat(0u);
v_bs_x27_4086_ = lean_array_uset(v_bs_4068_, v_i_4067_, v___x_4085_);
v___x_4087_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4082_, v___y_4069_, v___y_4070_);
if (lean_obj_tag(v___x_4087_) == 0)
{
lean_object* v_a_4088_; lean_object* v_fst_4089_; lean_object* v_snd_4090_; lean_object* v___x_4092_; uint8_t v_isShared_4093_; uint8_t v_isSharedCheck_4193_; 
v_a_4088_ = lean_ctor_get(v___x_4087_, 0);
lean_inc(v_a_4088_);
lean_dec_ref_known(v___x_4087_, 1);
v_fst_4089_ = lean_ctor_get(v_a_4088_, 0);
v_snd_4090_ = lean_ctor_get(v_a_4088_, 1);
v_isSharedCheck_4193_ = !lean_is_exclusive(v_a_4088_);
if (v_isSharedCheck_4193_ == 0)
{
v___x_4092_ = v_a_4088_;
v_isShared_4093_ = v_isSharedCheck_4193_;
goto v_resetjp_4091_;
}
else
{
lean_inc(v_snd_4090_);
lean_inc(v_fst_4089_);
lean_dec(v_a_4088_);
v___x_4092_ = lean_box(0);
v_isShared_4093_ = v_isSharedCheck_4193_;
goto v_resetjp_4091_;
}
v_resetjp_4091_:
{
lean_object* v___x_4094_; 
v___x_4094_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4083_, v___y_4069_, v_snd_4090_);
if (lean_obj_tag(v___x_4094_) == 0)
{
lean_object* v_a_4095_; lean_object* v_fst_4096_; lean_object* v_snd_4097_; lean_object* v___x_4099_; uint8_t v_isShared_4100_; uint8_t v_isSharedCheck_4184_; 
v_a_4095_ = lean_ctor_get(v___x_4094_, 0);
lean_inc(v_a_4095_);
lean_dec_ref_known(v___x_4094_, 1);
v_fst_4096_ = lean_ctor_get(v_a_4095_, 0);
v_snd_4097_ = lean_ctor_get(v_a_4095_, 1);
v_isSharedCheck_4184_ = !lean_is_exclusive(v_a_4095_);
if (v_isSharedCheck_4184_ == 0)
{
v___x_4099_ = v_a_4095_;
v_isShared_4100_ = v_isSharedCheck_4184_;
goto v_resetjp_4098_;
}
else
{
lean_inc(v_snd_4097_);
lean_inc(v_fst_4096_);
lean_dec(v_a_4095_);
v___x_4099_ = lean_box(0);
v_isShared_4100_ = v_isSharedCheck_4184_;
goto v_resetjp_4098_;
}
v_resetjp_4098_:
{
lean_object* v___x_4101_; 
v___x_4101_ = l_LeanExport_dumpExpr(v_type_4084_, v___y_4069_, v_snd_4097_);
if (lean_obj_tag(v___x_4101_) == 0)
{
lean_object* v_a_4102_; lean_object* v_fst_4103_; lean_object* v_snd_4104_; lean_object* v___x_4106_; uint8_t v_isShared_4107_; uint8_t v_isSharedCheck_4175_; 
v_a_4102_ = lean_ctor_get(v___x_4101_, 0);
lean_inc(v_a_4102_);
lean_dec_ref_known(v___x_4101_, 1);
v_fst_4103_ = lean_ctor_get(v_a_4102_, 0);
v_snd_4104_ = lean_ctor_get(v_a_4102_, 1);
v_isSharedCheck_4175_ = !lean_is_exclusive(v_a_4102_);
if (v_isSharedCheck_4175_ == 0)
{
v___x_4106_ = v_a_4102_;
v_isShared_4107_ = v_isSharedCheck_4175_;
goto v_resetjp_4105_;
}
else
{
lean_inc(v_snd_4104_);
lean_inc(v_fst_4103_);
lean_dec(v_a_4102_);
v___x_4106_ = lean_box(0);
v_isShared_4107_ = v_isSharedCheck_4175_;
goto v_resetjp_4105_;
}
v_resetjp_4105_:
{
lean_object* v___x_4108_; 
v___x_4108_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_induct_4077_, v___y_4069_, v_snd_4104_);
if (lean_obj_tag(v___x_4108_) == 0)
{
lean_object* v_a_4109_; lean_object* v_fst_4110_; lean_object* v_snd_4111_; lean_object* v___x_4113_; uint8_t v_isShared_4114_; uint8_t v_isSharedCheck_4166_; 
v_a_4109_ = lean_ctor_get(v___x_4108_, 0);
lean_inc(v_a_4109_);
lean_dec_ref_known(v___x_4108_, 1);
v_fst_4110_ = lean_ctor_get(v_a_4109_, 0);
v_snd_4111_ = lean_ctor_get(v_a_4109_, 1);
v_isSharedCheck_4166_ = !lean_is_exclusive(v_a_4109_);
if (v_isSharedCheck_4166_ == 0)
{
v___x_4113_ = v_a_4109_;
v_isShared_4114_ = v_isSharedCheck_4166_;
goto v_resetjp_4112_;
}
else
{
lean_inc(v_snd_4111_);
lean_inc(v_fst_4110_);
lean_dec(v_a_4109_);
v___x_4113_ = lean_box(0);
v_isShared_4114_ = v_isSharedCheck_4166_;
goto v_resetjp_4112_;
}
v_resetjp_4112_:
{
lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4119_; 
v___x_4115_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_4116_ = l_Lean_JsonNumber_fromNat(v_fst_4089_);
v___x_4117_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4117_, 0, v___x_4116_);
if (v_isShared_4114_ == 0)
{
lean_ctor_set(v___x_4113_, 1, v___x_4117_);
lean_ctor_set(v___x_4113_, 0, v___x_4115_);
v___x_4119_ = v___x_4113_;
goto v_reusejp_4118_;
}
else
{
lean_object* v_reuseFailAlloc_4165_; 
v_reuseFailAlloc_4165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4165_, 0, v___x_4115_);
lean_ctor_set(v_reuseFailAlloc_4165_, 1, v___x_4117_);
v___x_4119_ = v_reuseFailAlloc_4165_;
goto v_reusejp_4118_;
}
v_reusejp_4118_:
{
lean_object* v___x_4120_; lean_object* v___x_4122_; 
v___x_4120_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_4107_ == 0)
{
lean_ctor_set(v___x_4106_, 1, v_fst_4096_);
lean_ctor_set(v___x_4106_, 0, v___x_4120_);
v___x_4122_ = v___x_4106_;
goto v_reusejp_4121_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v___x_4120_);
lean_ctor_set(v_reuseFailAlloc_4164_, 1, v_fst_4096_);
v___x_4122_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4121_;
}
v_reusejp_4121_:
{
lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4127_; 
v___x_4123_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_4124_ = l_Lean_JsonNumber_fromNat(v_fst_4103_);
v___x_4125_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4125_, 0, v___x_4124_);
if (v_isShared_4100_ == 0)
{
lean_ctor_set(v___x_4099_, 1, v___x_4125_);
lean_ctor_set(v___x_4099_, 0, v___x_4123_);
v___x_4127_ = v___x_4099_;
goto v_reusejp_4126_;
}
else
{
lean_object* v_reuseFailAlloc_4163_; 
v_reuseFailAlloc_4163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4163_, 0, v___x_4123_);
lean_ctor_set(v_reuseFailAlloc_4163_, 1, v___x_4125_);
v___x_4127_ = v_reuseFailAlloc_4163_;
goto v_reusejp_4126_;
}
v_reusejp_4126_:
{
lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4132_; 
v___x_4128_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__2));
v___x_4129_ = l_Lean_JsonNumber_fromNat(v_fst_4110_);
v___x_4130_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4130_, 0, v___x_4129_);
if (v_isShared_4093_ == 0)
{
lean_ctor_set(v___x_4092_, 1, v___x_4130_);
lean_ctor_set(v___x_4092_, 0, v___x_4128_);
v___x_4132_ = v___x_4092_;
goto v_reusejp_4131_;
}
else
{
lean_object* v_reuseFailAlloc_4162_; 
v_reuseFailAlloc_4162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4162_, 0, v___x_4128_);
lean_ctor_set(v_reuseFailAlloc_4162_, 1, v___x_4130_);
v___x_4132_ = v_reuseFailAlloc_4162_;
goto v_reusejp_4131_;
}
v_reusejp_4131_:
{
lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; size_t v___x_4158_; size_t v___x_4159_; lean_object* v___x_4160_; 
v___x_4133_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__3));
v___x_4134_ = l_Lean_JsonNumber_fromNat(v_cidx_4078_);
v___x_4135_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4135_, 0, v___x_4134_);
v___x_4136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4136_, 0, v___x_4133_);
lean_ctor_set(v___x_4136_, 1, v___x_4135_);
v___x_4137_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__4));
v___x_4138_ = l_Lean_JsonNumber_fromNat(v_numParams_4079_);
v___x_4139_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4139_, 0, v___x_4138_);
v___x_4140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4140_, 0, v___x_4137_);
lean_ctor_set(v___x_4140_, 1, v___x_4139_);
v___x_4141_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__5));
v___x_4142_ = l_Lean_JsonNumber_fromNat(v_numFields_4080_);
v___x_4143_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4143_, 0, v___x_4142_);
v___x_4144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4144_, 0, v___x_4141_);
lean_ctor_set(v___x_4144_, 1, v___x_4143_);
v___x_4145_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6));
v___x_4146_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4146_, 0, v_isUnsafe_4081_);
v___x_4147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4147_, 0, v___x_4145_);
lean_ctor_set(v___x_4147_, 1, v___x_4146_);
v___x_4148_ = lean_box(0);
v___x_4149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4149_, 0, v___x_4147_);
lean_ctor_set(v___x_4149_, 1, v___x_4148_);
v___x_4150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4150_, 0, v___x_4144_);
lean_ctor_set(v___x_4150_, 1, v___x_4149_);
v___x_4151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4151_, 0, v___x_4140_);
lean_ctor_set(v___x_4151_, 1, v___x_4150_);
v___x_4152_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4152_, 0, v___x_4136_);
lean_ctor_set(v___x_4152_, 1, v___x_4151_);
v___x_4153_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4153_, 0, v___x_4132_);
lean_ctor_set(v___x_4153_, 1, v___x_4152_);
v___x_4154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4154_, 0, v___x_4127_);
lean_ctor_set(v___x_4154_, 1, v___x_4153_);
v___x_4155_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4155_, 0, v___x_4122_);
lean_ctor_set(v___x_4155_, 1, v___x_4154_);
v___x_4156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4156_, 0, v___x_4119_);
lean_ctor_set(v___x_4156_, 1, v___x_4155_);
v___x_4157_ = l_Lean_Json_mkObj(v___x_4156_);
lean_dec_ref_known(v___x_4156_, 2);
v___x_4158_ = ((size_t)1ULL);
v___x_4159_ = lean_usize_add(v_i_4067_, v___x_4158_);
v___x_4160_ = lean_array_uset(v_bs_x27_4086_, v_i_4067_, v___x_4157_);
v_i_4067_ = v___x_4159_;
v_bs_4068_ = v___x_4160_;
v___y_4070_ = v_snd_4111_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_4167_; lean_object* v___x_4169_; uint8_t v_isShared_4170_; uint8_t v_isSharedCheck_4174_; 
lean_del_object(v___x_4106_);
lean_dec(v_fst_4103_);
lean_del_object(v___x_4099_);
lean_dec(v_fst_4096_);
lean_del_object(v___x_4092_);
lean_dec(v_fst_4089_);
lean_dec_ref(v_bs_x27_4086_);
lean_dec(v_numFields_4080_);
lean_dec(v_numParams_4079_);
lean_dec(v_cidx_4078_);
v_a_4167_ = lean_ctor_get(v___x_4108_, 0);
v_isSharedCheck_4174_ = !lean_is_exclusive(v___x_4108_);
if (v_isSharedCheck_4174_ == 0)
{
v___x_4169_ = v___x_4108_;
v_isShared_4170_ = v_isSharedCheck_4174_;
goto v_resetjp_4168_;
}
else
{
lean_inc(v_a_4167_);
lean_dec(v___x_4108_);
v___x_4169_ = lean_box(0);
v_isShared_4170_ = v_isSharedCheck_4174_;
goto v_resetjp_4168_;
}
v_resetjp_4168_:
{
lean_object* v___x_4172_; 
if (v_isShared_4170_ == 0)
{
v___x_4172_ = v___x_4169_;
goto v_reusejp_4171_;
}
else
{
lean_object* v_reuseFailAlloc_4173_; 
v_reuseFailAlloc_4173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4173_, 0, v_a_4167_);
v___x_4172_ = v_reuseFailAlloc_4173_;
goto v_reusejp_4171_;
}
v_reusejp_4171_:
{
return v___x_4172_;
}
}
}
}
}
else
{
lean_object* v_a_4176_; lean_object* v___x_4178_; uint8_t v_isShared_4179_; uint8_t v_isSharedCheck_4183_; 
lean_del_object(v___x_4099_);
lean_dec(v_fst_4096_);
lean_del_object(v___x_4092_);
lean_dec(v_fst_4089_);
lean_dec_ref(v_bs_x27_4086_);
lean_dec(v_numFields_4080_);
lean_dec(v_numParams_4079_);
lean_dec(v_cidx_4078_);
lean_dec(v_induct_4077_);
v_a_4176_ = lean_ctor_get(v___x_4101_, 0);
v_isSharedCheck_4183_ = !lean_is_exclusive(v___x_4101_);
if (v_isSharedCheck_4183_ == 0)
{
v___x_4178_ = v___x_4101_;
v_isShared_4179_ = v_isSharedCheck_4183_;
goto v_resetjp_4177_;
}
else
{
lean_inc(v_a_4176_);
lean_dec(v___x_4101_);
v___x_4178_ = lean_box(0);
v_isShared_4179_ = v_isSharedCheck_4183_;
goto v_resetjp_4177_;
}
v_resetjp_4177_:
{
lean_object* v___x_4181_; 
if (v_isShared_4179_ == 0)
{
v___x_4181_ = v___x_4178_;
goto v_reusejp_4180_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v_a_4176_);
v___x_4181_ = v_reuseFailAlloc_4182_;
goto v_reusejp_4180_;
}
v_reusejp_4180_:
{
return v___x_4181_;
}
}
}
}
}
else
{
lean_object* v_a_4185_; lean_object* v___x_4187_; uint8_t v_isShared_4188_; uint8_t v_isSharedCheck_4192_; 
lean_del_object(v___x_4092_);
lean_dec(v_fst_4089_);
lean_dec_ref(v_bs_x27_4086_);
lean_dec_ref(v_type_4084_);
lean_dec(v_numFields_4080_);
lean_dec(v_numParams_4079_);
lean_dec(v_cidx_4078_);
lean_dec(v_induct_4077_);
v_a_4185_ = lean_ctor_get(v___x_4094_, 0);
v_isSharedCheck_4192_ = !lean_is_exclusive(v___x_4094_);
if (v_isSharedCheck_4192_ == 0)
{
v___x_4187_ = v___x_4094_;
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
else
{
lean_inc(v_a_4185_);
lean_dec(v___x_4094_);
v___x_4187_ = lean_box(0);
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
v_resetjp_4186_:
{
lean_object* v___x_4190_; 
if (v_isShared_4188_ == 0)
{
v___x_4190_ = v___x_4187_;
goto v_reusejp_4189_;
}
else
{
lean_object* v_reuseFailAlloc_4191_; 
v_reuseFailAlloc_4191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4191_, 0, v_a_4185_);
v___x_4190_ = v_reuseFailAlloc_4191_;
goto v_reusejp_4189_;
}
v_reusejp_4189_:
{
return v___x_4190_;
}
}
}
}
}
else
{
lean_object* v_a_4194_; lean_object* v___x_4196_; uint8_t v_isShared_4197_; uint8_t v_isSharedCheck_4201_; 
lean_dec_ref(v_bs_x27_4086_);
lean_dec_ref(v_type_4084_);
lean_dec(v_levelParams_4083_);
lean_dec(v_numFields_4080_);
lean_dec(v_numParams_4079_);
lean_dec(v_cidx_4078_);
lean_dec(v_induct_4077_);
v_a_4194_ = lean_ctor_get(v___x_4087_, 0);
v_isSharedCheck_4201_ = !lean_is_exclusive(v___x_4087_);
if (v_isSharedCheck_4201_ == 0)
{
v___x_4196_ = v___x_4087_;
v_isShared_4197_ = v_isSharedCheck_4201_;
goto v_resetjp_4195_;
}
else
{
lean_inc(v_a_4194_);
lean_dec(v___x_4087_);
v___x_4196_ = lean_box(0);
v_isShared_4197_ = v_isSharedCheck_4201_;
goto v_resetjp_4195_;
}
v_resetjp_4195_:
{
lean_object* v___x_4199_; 
if (v_isShared_4197_ == 0)
{
v___x_4199_ = v___x_4196_;
goto v_reusejp_4198_;
}
else
{
lean_object* v_reuseFailAlloc_4200_; 
v_reuseFailAlloc_4200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4200_, 0, v_a_4194_);
v___x_4199_ = v_reuseFailAlloc_4200_;
goto v_reusejp_4198_;
}
v_reusejp_4198_:
{
return v___x_4199_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(lean_object* v_rule_4204_, lean_object* v_a_4205_, lean_object* v_a_4206_){
_start:
{
lean_object* v_ctor_4208_; lean_object* v_nfields_4209_; lean_object* v_rhs_4210_; lean_object* v___x_4211_; 
v_ctor_4208_ = lean_ctor_get(v_rule_4204_, 0);
lean_inc(v_ctor_4208_);
v_nfields_4209_ = lean_ctor_get(v_rule_4204_, 1);
lean_inc(v_nfields_4209_);
v_rhs_4210_ = lean_ctor_get(v_rule_4204_, 2);
lean_inc_ref(v_rhs_4210_);
lean_dec_ref(v_rule_4204_);
v___x_4211_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_ctor_4208_, v_a_4205_, v_a_4206_);
if (lean_obj_tag(v___x_4211_) == 0)
{
lean_object* v_a_4212_; lean_object* v_fst_4213_; lean_object* v_snd_4214_; lean_object* v___x_4216_; uint8_t v_isShared_4217_; uint8_t v_isSharedCheck_4263_; 
v_a_4212_ = lean_ctor_get(v___x_4211_, 0);
lean_inc(v_a_4212_);
lean_dec_ref_known(v___x_4211_, 1);
v_fst_4213_ = lean_ctor_get(v_a_4212_, 0);
v_snd_4214_ = lean_ctor_get(v_a_4212_, 1);
v_isSharedCheck_4263_ = !lean_is_exclusive(v_a_4212_);
if (v_isSharedCheck_4263_ == 0)
{
v___x_4216_ = v_a_4212_;
v_isShared_4217_ = v_isSharedCheck_4263_;
goto v_resetjp_4215_;
}
else
{
lean_inc(v_snd_4214_);
lean_inc(v_fst_4213_);
lean_dec(v_a_4212_);
v___x_4216_ = lean_box(0);
v_isShared_4217_ = v_isSharedCheck_4263_;
goto v_resetjp_4215_;
}
v_resetjp_4215_:
{
lean_object* v___x_4218_; 
v___x_4218_ = l_LeanExport_dumpExpr(v_rhs_4210_, v_a_4205_, v_snd_4214_);
if (lean_obj_tag(v___x_4218_) == 0)
{
lean_object* v_a_4219_; lean_object* v___x_4221_; uint8_t v_isShared_4222_; uint8_t v_isSharedCheck_4254_; 
v_a_4219_ = lean_ctor_get(v___x_4218_, 0);
v_isSharedCheck_4254_ = !lean_is_exclusive(v___x_4218_);
if (v_isSharedCheck_4254_ == 0)
{
v___x_4221_ = v___x_4218_;
v_isShared_4222_ = v_isSharedCheck_4254_;
goto v_resetjp_4220_;
}
else
{
lean_inc(v_a_4219_);
lean_dec(v___x_4218_);
v___x_4221_ = lean_box(0);
v_isShared_4222_ = v_isSharedCheck_4254_;
goto v_resetjp_4220_;
}
v_resetjp_4220_:
{
lean_object* v_fst_4223_; lean_object* v_snd_4224_; lean_object* v___x_4226_; uint8_t v_isShared_4227_; uint8_t v_isSharedCheck_4253_; 
v_fst_4223_ = lean_ctor_get(v_a_4219_, 0);
v_snd_4224_ = lean_ctor_get(v_a_4219_, 1);
v_isSharedCheck_4253_ = !lean_is_exclusive(v_a_4219_);
if (v_isSharedCheck_4253_ == 0)
{
v___x_4226_ = v_a_4219_;
v_isShared_4227_ = v_isSharedCheck_4253_;
goto v_resetjp_4225_;
}
else
{
lean_inc(v_snd_4224_);
lean_inc(v_fst_4223_);
lean_dec(v_a_4219_);
v___x_4226_ = lean_box(0);
v_isShared_4227_ = v_isSharedCheck_4253_;
goto v_resetjp_4225_;
}
v_resetjp_4225_:
{
lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4232_; 
v___x_4228_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__2));
v___x_4229_ = l_Lean_JsonNumber_fromNat(v_fst_4213_);
v___x_4230_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4230_, 0, v___x_4229_);
if (v_isShared_4227_ == 0)
{
lean_ctor_set(v___x_4226_, 1, v___x_4230_);
lean_ctor_set(v___x_4226_, 0, v___x_4228_);
v___x_4232_ = v___x_4226_;
goto v_reusejp_4231_;
}
else
{
lean_object* v_reuseFailAlloc_4252_; 
v_reuseFailAlloc_4252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4252_, 0, v___x_4228_);
lean_ctor_set(v_reuseFailAlloc_4252_, 1, v___x_4230_);
v___x_4232_ = v_reuseFailAlloc_4252_;
goto v_reusejp_4231_;
}
v_reusejp_4231_:
{
lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4237_; 
v___x_4233_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__0));
v___x_4234_ = l_Lean_JsonNumber_fromNat(v_nfields_4209_);
v___x_4235_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4235_, 0, v___x_4234_);
if (v_isShared_4217_ == 0)
{
lean_ctor_set(v___x_4216_, 1, v___x_4235_);
lean_ctor_set(v___x_4216_, 0, v___x_4233_);
v___x_4237_ = v___x_4216_;
goto v_reusejp_4236_;
}
else
{
lean_object* v_reuseFailAlloc_4251_; 
v_reuseFailAlloc_4251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4251_, 0, v___x_4233_);
lean_ctor_set(v_reuseFailAlloc_4251_, 1, v___x_4235_);
v___x_4237_ = v_reuseFailAlloc_4251_;
goto v_reusejp_4236_;
}
v_reusejp_4236_:
{
lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4249_; 
v___x_4238_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___closed__1));
v___x_4239_ = l_Lean_JsonNumber_fromNat(v_fst_4223_);
v___x_4240_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4240_, 0, v___x_4239_);
v___x_4241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4241_, 0, v___x_4238_);
lean_ctor_set(v___x_4241_, 1, v___x_4240_);
v___x_4242_ = lean_box(0);
v___x_4243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4243_, 0, v___x_4241_);
lean_ctor_set(v___x_4243_, 1, v___x_4242_);
v___x_4244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4244_, 0, v___x_4237_);
lean_ctor_set(v___x_4244_, 1, v___x_4243_);
v___x_4245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4245_, 0, v___x_4232_);
lean_ctor_set(v___x_4245_, 1, v___x_4244_);
v___x_4246_ = l_Lean_Json_mkObj(v___x_4245_);
lean_dec_ref_known(v___x_4245_, 2);
v___x_4247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4247_, 0, v___x_4246_);
lean_ctor_set(v___x_4247_, 1, v_snd_4224_);
if (v_isShared_4222_ == 0)
{
lean_ctor_set(v___x_4221_, 0, v___x_4247_);
v___x_4249_ = v___x_4221_;
goto v_reusejp_4248_;
}
else
{
lean_object* v_reuseFailAlloc_4250_; 
v_reuseFailAlloc_4250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4250_, 0, v___x_4247_);
v___x_4249_ = v_reuseFailAlloc_4250_;
goto v_reusejp_4248_;
}
v_reusejp_4248_:
{
return v___x_4249_;
}
}
}
}
}
}
else
{
lean_object* v_a_4255_; lean_object* v___x_4257_; uint8_t v_isShared_4258_; uint8_t v_isSharedCheck_4262_; 
lean_del_object(v___x_4216_);
lean_dec(v_fst_4213_);
lean_dec(v_nfields_4209_);
v_a_4255_ = lean_ctor_get(v___x_4218_, 0);
v_isSharedCheck_4262_ = !lean_is_exclusive(v___x_4218_);
if (v_isSharedCheck_4262_ == 0)
{
v___x_4257_ = v___x_4218_;
v_isShared_4258_ = v_isSharedCheck_4262_;
goto v_resetjp_4256_;
}
else
{
lean_inc(v_a_4255_);
lean_dec(v___x_4218_);
v___x_4257_ = lean_box(0);
v_isShared_4258_ = v_isSharedCheck_4262_;
goto v_resetjp_4256_;
}
v_resetjp_4256_:
{
lean_object* v___x_4260_; 
if (v_isShared_4258_ == 0)
{
v___x_4260_ = v___x_4257_;
goto v_reusejp_4259_;
}
else
{
lean_object* v_reuseFailAlloc_4261_; 
v_reuseFailAlloc_4261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4261_, 0, v_a_4255_);
v___x_4260_ = v_reuseFailAlloc_4261_;
goto v_reusejp_4259_;
}
v_reusejp_4259_:
{
return v___x_4260_;
}
}
}
}
}
else
{
lean_object* v_a_4264_; lean_object* v___x_4266_; uint8_t v_isShared_4267_; uint8_t v_isSharedCheck_4271_; 
lean_dec_ref(v_rhs_4210_);
lean_dec(v_nfields_4209_);
v_a_4264_ = lean_ctor_get(v___x_4211_, 0);
v_isSharedCheck_4271_ = !lean_is_exclusive(v___x_4211_);
if (v_isSharedCheck_4271_ == 0)
{
v___x_4266_ = v___x_4211_;
v_isShared_4267_ = v_isSharedCheck_4271_;
goto v_resetjp_4265_;
}
else
{
lean_inc(v_a_4264_);
lean_dec(v___x_4211_);
v___x_4266_ = lean_box(0);
v_isShared_4267_ = v_isSharedCheck_4271_;
goto v_resetjp_4265_;
}
v_resetjp_4265_:
{
lean_object* v___x_4269_; 
if (v_isShared_4267_ == 0)
{
v___x_4269_ = v___x_4266_;
goto v_reusejp_4268_;
}
else
{
lean_object* v_reuseFailAlloc_4270_; 
v_reuseFailAlloc_4270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4270_, 0, v_a_4264_);
v___x_4269_ = v_reuseFailAlloc_4270_;
goto v_reusejp_4268_;
}
v_reusejp_4268_:
{
return v___x_4269_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(lean_object* v_x_4272_, lean_object* v_x_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_){
_start:
{
if (lean_obj_tag(v_x_4272_) == 0)
{
lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; 
v___x_4277_ = l_List_reverse___redArg(v_x_4273_);
v___x_4278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4278_, 0, v___x_4277_);
lean_ctor_set(v___x_4278_, 1, v___y_4275_);
v___x_4279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4279_, 0, v___x_4278_);
return v___x_4279_;
}
else
{
lean_object* v_head_4280_; lean_object* v_tail_4281_; lean_object* v___x_4283_; uint8_t v_isShared_4284_; uint8_t v_isSharedCheck_4301_; 
v_head_4280_ = lean_ctor_get(v_x_4272_, 0);
v_tail_4281_ = lean_ctor_get(v_x_4272_, 1);
v_isSharedCheck_4301_ = !lean_is_exclusive(v_x_4272_);
if (v_isSharedCheck_4301_ == 0)
{
v___x_4283_ = v_x_4272_;
v_isShared_4284_ = v_isSharedCheck_4301_;
goto v_resetjp_4282_;
}
else
{
lean_inc(v_tail_4281_);
lean_inc(v_head_4280_);
lean_dec(v_x_4272_);
v___x_4283_ = lean_box(0);
v_isShared_4284_ = v_isSharedCheck_4301_;
goto v_resetjp_4282_;
}
v_resetjp_4282_:
{
lean_object* v___x_4285_; 
v___x_4285_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(v_head_4280_, v___y_4274_, v___y_4275_);
if (lean_obj_tag(v___x_4285_) == 0)
{
lean_object* v_a_4286_; lean_object* v_fst_4287_; lean_object* v_snd_4288_; lean_object* v___x_4290_; 
v_a_4286_ = lean_ctor_get(v___x_4285_, 0);
lean_inc(v_a_4286_);
lean_dec_ref_known(v___x_4285_, 1);
v_fst_4287_ = lean_ctor_get(v_a_4286_, 0);
lean_inc(v_fst_4287_);
v_snd_4288_ = lean_ctor_get(v_a_4286_, 1);
lean_inc(v_snd_4288_);
lean_dec(v_a_4286_);
if (v_isShared_4284_ == 0)
{
lean_ctor_set(v___x_4283_, 1, v_x_4273_);
lean_ctor_set(v___x_4283_, 0, v_fst_4287_);
v___x_4290_ = v___x_4283_;
goto v_reusejp_4289_;
}
else
{
lean_object* v_reuseFailAlloc_4292_; 
v_reuseFailAlloc_4292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4292_, 0, v_fst_4287_);
lean_ctor_set(v_reuseFailAlloc_4292_, 1, v_x_4273_);
v___x_4290_ = v_reuseFailAlloc_4292_;
goto v_reusejp_4289_;
}
v_reusejp_4289_:
{
v_x_4272_ = v_tail_4281_;
v_x_4273_ = v___x_4290_;
v___y_4275_ = v_snd_4288_;
goto _start;
}
}
else
{
lean_object* v_a_4293_; lean_object* v___x_4295_; uint8_t v_isShared_4296_; uint8_t v_isSharedCheck_4300_; 
lean_del_object(v___x_4283_);
lean_dec(v_tail_4281_);
lean_dec(v_x_4273_);
v_a_4293_ = lean_ctor_get(v___x_4285_, 0);
v_isSharedCheck_4300_ = !lean_is_exclusive(v___x_4285_);
if (v_isSharedCheck_4300_ == 0)
{
v___x_4295_ = v___x_4285_;
v_isShared_4296_ = v_isSharedCheck_4300_;
goto v_resetjp_4294_;
}
else
{
lean_inc(v_a_4293_);
lean_dec(v___x_4285_);
v___x_4295_ = lean_box(0);
v_isShared_4296_ = v_isSharedCheck_4300_;
goto v_resetjp_4294_;
}
v_resetjp_4294_:
{
lean_object* v___x_4298_; 
if (v_isShared_4296_ == 0)
{
v___x_4298_ = v___x_4295_;
goto v_reusejp_4297_;
}
else
{
lean_object* v_reuseFailAlloc_4299_; 
v_reuseFailAlloc_4299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4299_, 0, v_a_4293_);
v___x_4298_ = v_reuseFailAlloc_4299_;
goto v_reusejp_4297_;
}
v_reusejp_4297_:
{
return v___x_4298_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18(size_t v_sz_4306_, size_t v_i_4307_, lean_object* v_bs_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_){
_start:
{
uint8_t v___x_4312_; 
v___x_4312_ = lean_usize_dec_lt(v_i_4307_, v_sz_4306_);
if (v___x_4312_ == 0)
{
lean_object* v___x_4313_; lean_object* v___x_4314_; 
v___x_4313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4313_, 0, v_bs_4308_);
lean_ctor_set(v___x_4313_, 1, v___y_4310_);
v___x_4314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4314_, 0, v___x_4313_);
return v___x_4314_;
}
else
{
lean_object* v_v_4315_; lean_object* v_toConstantVal_4316_; lean_object* v_all_4317_; lean_object* v_numParams_4318_; lean_object* v_numIndices_4319_; lean_object* v_numMotives_4320_; lean_object* v_numMinors_4321_; lean_object* v_rules_4322_; uint8_t v_k_4323_; uint8_t v_isUnsafe_4324_; lean_object* v_name_4325_; lean_object* v_levelParams_4326_; lean_object* v_type_4327_; lean_object* v___x_4328_; lean_object* v_bs_x27_4329_; lean_object* v___x_4330_; 
v_v_4315_ = lean_array_uget_borrowed(v_bs_4308_, v_i_4307_);
v_toConstantVal_4316_ = lean_ctor_get(v_v_4315_, 0);
v_all_4317_ = lean_ctor_get(v_v_4315_, 1);
lean_inc(v_all_4317_);
v_numParams_4318_ = lean_ctor_get(v_v_4315_, 2);
lean_inc(v_numParams_4318_);
v_numIndices_4319_ = lean_ctor_get(v_v_4315_, 3);
lean_inc(v_numIndices_4319_);
v_numMotives_4320_ = lean_ctor_get(v_v_4315_, 4);
lean_inc(v_numMotives_4320_);
v_numMinors_4321_ = lean_ctor_get(v_v_4315_, 5);
lean_inc(v_numMinors_4321_);
v_rules_4322_ = lean_ctor_get(v_v_4315_, 6);
lean_inc(v_rules_4322_);
v_k_4323_ = lean_ctor_get_uint8(v_v_4315_, sizeof(void*)*7);
v_isUnsafe_4324_ = lean_ctor_get_uint8(v_v_4315_, sizeof(void*)*7 + 1);
v_name_4325_ = lean_ctor_get(v_toConstantVal_4316_, 0);
lean_inc(v_name_4325_);
v_levelParams_4326_ = lean_ctor_get(v_toConstantVal_4316_, 1);
lean_inc(v_levelParams_4326_);
v_type_4327_ = lean_ctor_get(v_toConstantVal_4316_, 2);
lean_inc_ref(v_type_4327_);
v___x_4328_ = lean_unsigned_to_nat(0u);
v_bs_x27_4329_ = lean_array_uset(v_bs_4308_, v_i_4307_, v___x_4328_);
v___x_4330_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4325_, v___y_4309_, v___y_4310_);
if (lean_obj_tag(v___x_4330_) == 0)
{
lean_object* v_a_4331_; lean_object* v_fst_4332_; lean_object* v_snd_4333_; lean_object* v___x_4335_; uint8_t v_isShared_4336_; uint8_t v_isSharedCheck_4465_; 
v_a_4331_ = lean_ctor_get(v___x_4330_, 0);
lean_inc(v_a_4331_);
lean_dec_ref_known(v___x_4330_, 1);
v_fst_4332_ = lean_ctor_get(v_a_4331_, 0);
v_snd_4333_ = lean_ctor_get(v_a_4331_, 1);
v_isSharedCheck_4465_ = !lean_is_exclusive(v_a_4331_);
if (v_isSharedCheck_4465_ == 0)
{
v___x_4335_ = v_a_4331_;
v_isShared_4336_ = v_isSharedCheck_4465_;
goto v_resetjp_4334_;
}
else
{
lean_inc(v_snd_4333_);
lean_inc(v_fst_4332_);
lean_dec(v_a_4331_);
v___x_4335_ = lean_box(0);
v_isShared_4336_ = v_isSharedCheck_4465_;
goto v_resetjp_4334_;
}
v_resetjp_4334_:
{
lean_object* v___x_4337_; 
v___x_4337_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4326_, v___y_4309_, v_snd_4333_);
if (lean_obj_tag(v___x_4337_) == 0)
{
lean_object* v_a_4338_; lean_object* v_fst_4339_; lean_object* v_snd_4340_; lean_object* v___x_4342_; uint8_t v_isShared_4343_; uint8_t v_isSharedCheck_4456_; 
v_a_4338_ = lean_ctor_get(v___x_4337_, 0);
lean_inc(v_a_4338_);
lean_dec_ref_known(v___x_4337_, 1);
v_fst_4339_ = lean_ctor_get(v_a_4338_, 0);
v_snd_4340_ = lean_ctor_get(v_a_4338_, 1);
v_isSharedCheck_4456_ = !lean_is_exclusive(v_a_4338_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4342_ = v_a_4338_;
v_isShared_4343_ = v_isSharedCheck_4456_;
goto v_resetjp_4341_;
}
else
{
lean_inc(v_snd_4340_);
lean_inc(v_fst_4339_);
lean_dec(v_a_4338_);
v___x_4342_ = lean_box(0);
v_isShared_4343_ = v_isSharedCheck_4456_;
goto v_resetjp_4341_;
}
v_resetjp_4341_:
{
lean_object* v___x_4344_; 
v___x_4344_ = l_LeanExport_dumpExpr(v_type_4327_, v___y_4309_, v_snd_4340_);
if (lean_obj_tag(v___x_4344_) == 0)
{
lean_object* v_a_4345_; lean_object* v_fst_4346_; lean_object* v_snd_4347_; lean_object* v___x_4349_; uint8_t v_isShared_4350_; uint8_t v_isSharedCheck_4447_; 
v_a_4345_ = lean_ctor_get(v___x_4344_, 0);
lean_inc(v_a_4345_);
lean_dec_ref_known(v___x_4344_, 1);
v_fst_4346_ = lean_ctor_get(v_a_4345_, 0);
v_snd_4347_ = lean_ctor_get(v_a_4345_, 1);
v_isSharedCheck_4447_ = !lean_is_exclusive(v_a_4345_);
if (v_isSharedCheck_4447_ == 0)
{
v___x_4349_ = v_a_4345_;
v_isShared_4350_ = v_isSharedCheck_4447_;
goto v_resetjp_4348_;
}
else
{
lean_inc(v_snd_4347_);
lean_inc(v_fst_4346_);
lean_dec(v_a_4345_);
v___x_4349_ = lean_box(0);
v_isShared_4350_ = v_isSharedCheck_4447_;
goto v_resetjp_4348_;
}
v_resetjp_4348_:
{
lean_object* v___x_4351_; 
v___x_4351_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_4317_, v___y_4309_, v_snd_4347_);
if (lean_obj_tag(v___x_4351_) == 0)
{
lean_object* v_a_4352_; lean_object* v_fst_4353_; lean_object* v_snd_4354_; lean_object* v___x_4356_; uint8_t v_isShared_4357_; uint8_t v_isSharedCheck_4438_; 
v_a_4352_ = lean_ctor_get(v___x_4351_, 0);
lean_inc(v_a_4352_);
lean_dec_ref_known(v___x_4351_, 1);
v_fst_4353_ = lean_ctor_get(v_a_4352_, 0);
v_snd_4354_ = lean_ctor_get(v_a_4352_, 1);
v_isSharedCheck_4438_ = !lean_is_exclusive(v_a_4352_);
if (v_isSharedCheck_4438_ == 0)
{
v___x_4356_ = v_a_4352_;
v_isShared_4357_ = v_isSharedCheck_4438_;
goto v_resetjp_4355_;
}
else
{
lean_inc(v_snd_4354_);
lean_inc(v_fst_4353_);
lean_dec(v_a_4352_);
v___x_4356_ = lean_box(0);
v_isShared_4357_ = v_isSharedCheck_4438_;
goto v_resetjp_4355_;
}
v_resetjp_4355_:
{
lean_object* v___x_4358_; lean_object* v___x_4359_; 
v___x_4358_ = lean_box(0);
v___x_4359_ = l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(v_rules_4322_, v___x_4358_, v___y_4309_, v_snd_4354_);
if (lean_obj_tag(v___x_4359_) == 0)
{
lean_object* v_a_4360_; lean_object* v_fst_4361_; lean_object* v_snd_4362_; lean_object* v___x_4364_; uint8_t v_isShared_4365_; uint8_t v_isSharedCheck_4429_; 
v_a_4360_ = lean_ctor_get(v___x_4359_, 0);
lean_inc(v_a_4360_);
lean_dec_ref_known(v___x_4359_, 1);
v_fst_4361_ = lean_ctor_get(v_a_4360_, 0);
v_snd_4362_ = lean_ctor_get(v_a_4360_, 1);
v_isSharedCheck_4429_ = !lean_is_exclusive(v_a_4360_);
if (v_isSharedCheck_4429_ == 0)
{
v___x_4364_ = v_a_4360_;
v_isShared_4365_ = v_isSharedCheck_4429_;
goto v_resetjp_4363_;
}
else
{
lean_inc(v_snd_4362_);
lean_inc(v_fst_4361_);
lean_dec(v_a_4360_);
v___x_4364_ = lean_box(0);
v_isShared_4365_ = v_isSharedCheck_4429_;
goto v_resetjp_4363_;
}
v_resetjp_4363_:
{
lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4370_; 
v___x_4366_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_4367_ = l_Lean_JsonNumber_fromNat(v_fst_4332_);
v___x_4368_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4368_, 0, v___x_4367_);
if (v_isShared_4365_ == 0)
{
lean_ctor_set(v___x_4364_, 1, v___x_4368_);
lean_ctor_set(v___x_4364_, 0, v___x_4366_);
v___x_4370_ = v___x_4364_;
goto v_reusejp_4369_;
}
else
{
lean_object* v_reuseFailAlloc_4428_; 
v_reuseFailAlloc_4428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4428_, 0, v___x_4366_);
lean_ctor_set(v_reuseFailAlloc_4428_, 1, v___x_4368_);
v___x_4370_ = v_reuseFailAlloc_4428_;
goto v_reusejp_4369_;
}
v_reusejp_4369_:
{
lean_object* v___x_4371_; lean_object* v___x_4373_; 
v___x_4371_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_4357_ == 0)
{
lean_ctor_set(v___x_4356_, 1, v_fst_4339_);
lean_ctor_set(v___x_4356_, 0, v___x_4371_);
v___x_4373_ = v___x_4356_;
goto v_reusejp_4372_;
}
else
{
lean_object* v_reuseFailAlloc_4427_; 
v_reuseFailAlloc_4427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4427_, 0, v___x_4371_);
lean_ctor_set(v_reuseFailAlloc_4427_, 1, v_fst_4339_);
v___x_4373_ = v_reuseFailAlloc_4427_;
goto v_reusejp_4372_;
}
v_reusejp_4372_:
{
lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4378_; 
v___x_4374_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_4375_ = l_Lean_JsonNumber_fromNat(v_fst_4346_);
v___x_4376_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4376_, 0, v___x_4375_);
if (v_isShared_4350_ == 0)
{
lean_ctor_set(v___x_4349_, 1, v___x_4376_);
lean_ctor_set(v___x_4349_, 0, v___x_4374_);
v___x_4378_ = v___x_4349_;
goto v_reusejp_4377_;
}
else
{
lean_object* v_reuseFailAlloc_4426_; 
v_reuseFailAlloc_4426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4426_, 0, v___x_4374_);
lean_ctor_set(v_reuseFailAlloc_4426_, 1, v___x_4376_);
v___x_4378_ = v_reuseFailAlloc_4426_;
goto v_reusejp_4377_;
}
v_reusejp_4377_:
{
lean_object* v___x_4379_; lean_object* v___x_4381_; 
v___x_4379_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_4343_ == 0)
{
lean_ctor_set(v___x_4342_, 1, v_fst_4353_);
lean_ctor_set(v___x_4342_, 0, v___x_4379_);
v___x_4381_ = v___x_4342_;
goto v_reusejp_4380_;
}
else
{
lean_object* v_reuseFailAlloc_4425_; 
v_reuseFailAlloc_4425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4425_, 0, v___x_4379_);
lean_ctor_set(v_reuseFailAlloc_4425_, 1, v_fst_4353_);
v___x_4381_ = v_reuseFailAlloc_4425_;
goto v_reusejp_4380_;
}
v_reusejp_4380_:
{
lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4386_; 
v___x_4382_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__4));
v___x_4383_ = l_Lean_JsonNumber_fromNat(v_numParams_4318_);
v___x_4384_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4384_, 0, v___x_4383_);
if (v_isShared_4336_ == 0)
{
lean_ctor_set(v___x_4335_, 1, v___x_4384_);
lean_ctor_set(v___x_4335_, 0, v___x_4382_);
v___x_4386_ = v___x_4335_;
goto v_reusejp_4385_;
}
else
{
lean_object* v_reuseFailAlloc_4424_; 
v_reuseFailAlloc_4424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4424_, 0, v___x_4382_);
lean_ctor_set(v_reuseFailAlloc_4424_, 1, v___x_4384_);
v___x_4386_ = v_reuseFailAlloc_4424_;
goto v_reusejp_4385_;
}
v_reusejp_4385_:
{
lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; size_t v___x_4420_; size_t v___x_4421_; lean_object* v___x_4422_; 
v___x_4387_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__0));
v___x_4388_ = l_Lean_JsonNumber_fromNat(v_numIndices_4319_);
v___x_4389_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4389_, 0, v___x_4388_);
v___x_4390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4390_, 0, v___x_4387_);
lean_ctor_set(v___x_4390_, 1, v___x_4389_);
v___x_4391_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__0));
v___x_4392_ = l_Lean_JsonNumber_fromNat(v_numMotives_4320_);
v___x_4393_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4393_, 0, v___x_4392_);
v___x_4394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4394_, 0, v___x_4391_);
lean_ctor_set(v___x_4394_, 1, v___x_4393_);
v___x_4395_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__1));
v___x_4396_ = l_Lean_JsonNumber_fromNat(v_numMinors_4321_);
v___x_4397_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4397_, 0, v___x_4396_);
v___x_4398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4398_, 0, v___x_4395_);
lean_ctor_set(v___x_4398_, 1, v___x_4397_);
v___x_4399_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__2));
v___x_4400_ = l_Lean_List_toJson___at___00LeanExport_dumpConstant_spec__3(v_fst_4361_);
v___x_4401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4401_, 0, v___x_4399_);
lean_ctor_set(v___x_4401_, 1, v___x_4400_);
v___x_4402_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___closed__3));
v___x_4403_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4403_, 0, v_k_4323_);
v___x_4404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4404_, 0, v___x_4402_);
lean_ctor_set(v___x_4404_, 1, v___x_4403_);
v___x_4405_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6));
v___x_4406_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4406_, 0, v_isUnsafe_4324_);
v___x_4407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4407_, 0, v___x_4405_);
lean_ctor_set(v___x_4407_, 1, v___x_4406_);
v___x_4408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4408_, 0, v___x_4407_);
lean_ctor_set(v___x_4408_, 1, v___x_4358_);
v___x_4409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4409_, 0, v___x_4404_);
lean_ctor_set(v___x_4409_, 1, v___x_4408_);
v___x_4410_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4410_, 0, v___x_4401_);
lean_ctor_set(v___x_4410_, 1, v___x_4409_);
v___x_4411_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4411_, 0, v___x_4398_);
lean_ctor_set(v___x_4411_, 1, v___x_4410_);
v___x_4412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4412_, 0, v___x_4394_);
lean_ctor_set(v___x_4412_, 1, v___x_4411_);
v___x_4413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4413_, 0, v___x_4390_);
lean_ctor_set(v___x_4413_, 1, v___x_4412_);
v___x_4414_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4414_, 0, v___x_4386_);
lean_ctor_set(v___x_4414_, 1, v___x_4413_);
v___x_4415_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4415_, 0, v___x_4381_);
lean_ctor_set(v___x_4415_, 1, v___x_4414_);
v___x_4416_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4416_, 0, v___x_4378_);
lean_ctor_set(v___x_4416_, 1, v___x_4415_);
v___x_4417_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4417_, 0, v___x_4373_);
lean_ctor_set(v___x_4417_, 1, v___x_4416_);
v___x_4418_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4418_, 0, v___x_4370_);
lean_ctor_set(v___x_4418_, 1, v___x_4417_);
v___x_4419_ = l_Lean_Json_mkObj(v___x_4418_);
lean_dec_ref_known(v___x_4418_, 2);
v___x_4420_ = ((size_t)1ULL);
v___x_4421_ = lean_usize_add(v_i_4307_, v___x_4420_);
v___x_4422_ = lean_array_uset(v_bs_x27_4329_, v_i_4307_, v___x_4419_);
v_i_4307_ = v___x_4421_;
v_bs_4308_ = v___x_4422_;
v___y_4310_ = v_snd_4362_;
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
lean_object* v_a_4430_; lean_object* v___x_4432_; uint8_t v_isShared_4433_; uint8_t v_isSharedCheck_4437_; 
lean_del_object(v___x_4356_);
lean_dec(v_fst_4353_);
lean_del_object(v___x_4349_);
lean_dec(v_fst_4346_);
lean_del_object(v___x_4342_);
lean_dec(v_fst_4339_);
lean_del_object(v___x_4335_);
lean_dec(v_fst_4332_);
lean_dec_ref(v_bs_x27_4329_);
lean_dec(v_numMinors_4321_);
lean_dec(v_numMotives_4320_);
lean_dec(v_numIndices_4319_);
lean_dec(v_numParams_4318_);
v_a_4430_ = lean_ctor_get(v___x_4359_, 0);
v_isSharedCheck_4437_ = !lean_is_exclusive(v___x_4359_);
if (v_isSharedCheck_4437_ == 0)
{
v___x_4432_ = v___x_4359_;
v_isShared_4433_ = v_isSharedCheck_4437_;
goto v_resetjp_4431_;
}
else
{
lean_inc(v_a_4430_);
lean_dec(v___x_4359_);
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
else
{
lean_object* v_a_4439_; lean_object* v___x_4441_; uint8_t v_isShared_4442_; uint8_t v_isSharedCheck_4446_; 
lean_del_object(v___x_4349_);
lean_dec(v_fst_4346_);
lean_del_object(v___x_4342_);
lean_dec(v_fst_4339_);
lean_del_object(v___x_4335_);
lean_dec(v_fst_4332_);
lean_dec_ref(v_bs_x27_4329_);
lean_dec(v_rules_4322_);
lean_dec(v_numMinors_4321_);
lean_dec(v_numMotives_4320_);
lean_dec(v_numIndices_4319_);
lean_dec(v_numParams_4318_);
v_a_4439_ = lean_ctor_get(v___x_4351_, 0);
v_isSharedCheck_4446_ = !lean_is_exclusive(v___x_4351_);
if (v_isSharedCheck_4446_ == 0)
{
v___x_4441_ = v___x_4351_;
v_isShared_4442_ = v_isSharedCheck_4446_;
goto v_resetjp_4440_;
}
else
{
lean_inc(v_a_4439_);
lean_dec(v___x_4351_);
v___x_4441_ = lean_box(0);
v_isShared_4442_ = v_isSharedCheck_4446_;
goto v_resetjp_4440_;
}
v_resetjp_4440_:
{
lean_object* v___x_4444_; 
if (v_isShared_4442_ == 0)
{
v___x_4444_ = v___x_4441_;
goto v_reusejp_4443_;
}
else
{
lean_object* v_reuseFailAlloc_4445_; 
v_reuseFailAlloc_4445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4445_, 0, v_a_4439_);
v___x_4444_ = v_reuseFailAlloc_4445_;
goto v_reusejp_4443_;
}
v_reusejp_4443_:
{
return v___x_4444_;
}
}
}
}
}
else
{
lean_object* v_a_4448_; lean_object* v___x_4450_; uint8_t v_isShared_4451_; uint8_t v_isSharedCheck_4455_; 
lean_del_object(v___x_4342_);
lean_dec(v_fst_4339_);
lean_del_object(v___x_4335_);
lean_dec(v_fst_4332_);
lean_dec_ref(v_bs_x27_4329_);
lean_dec(v_rules_4322_);
lean_dec(v_numMinors_4321_);
lean_dec(v_numMotives_4320_);
lean_dec(v_numIndices_4319_);
lean_dec(v_numParams_4318_);
lean_dec(v_all_4317_);
v_a_4448_ = lean_ctor_get(v___x_4344_, 0);
v_isSharedCheck_4455_ = !lean_is_exclusive(v___x_4344_);
if (v_isSharedCheck_4455_ == 0)
{
v___x_4450_ = v___x_4344_;
v_isShared_4451_ = v_isSharedCheck_4455_;
goto v_resetjp_4449_;
}
else
{
lean_inc(v_a_4448_);
lean_dec(v___x_4344_);
v___x_4450_ = lean_box(0);
v_isShared_4451_ = v_isSharedCheck_4455_;
goto v_resetjp_4449_;
}
v_resetjp_4449_:
{
lean_object* v___x_4453_; 
if (v_isShared_4451_ == 0)
{
v___x_4453_ = v___x_4450_;
goto v_reusejp_4452_;
}
else
{
lean_object* v_reuseFailAlloc_4454_; 
v_reuseFailAlloc_4454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4454_, 0, v_a_4448_);
v___x_4453_ = v_reuseFailAlloc_4454_;
goto v_reusejp_4452_;
}
v_reusejp_4452_:
{
return v___x_4453_;
}
}
}
}
}
else
{
lean_object* v_a_4457_; lean_object* v___x_4459_; uint8_t v_isShared_4460_; uint8_t v_isSharedCheck_4464_; 
lean_del_object(v___x_4335_);
lean_dec(v_fst_4332_);
lean_dec_ref(v_bs_x27_4329_);
lean_dec_ref(v_type_4327_);
lean_dec(v_rules_4322_);
lean_dec(v_numMinors_4321_);
lean_dec(v_numMotives_4320_);
lean_dec(v_numIndices_4319_);
lean_dec(v_numParams_4318_);
lean_dec(v_all_4317_);
v_a_4457_ = lean_ctor_get(v___x_4337_, 0);
v_isSharedCheck_4464_ = !lean_is_exclusive(v___x_4337_);
if (v_isSharedCheck_4464_ == 0)
{
v___x_4459_ = v___x_4337_;
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
else
{
lean_inc(v_a_4457_);
lean_dec(v___x_4337_);
v___x_4459_ = lean_box(0);
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
v_resetjp_4458_:
{
lean_object* v___x_4462_; 
if (v_isShared_4460_ == 0)
{
v___x_4462_ = v___x_4459_;
goto v_reusejp_4461_;
}
else
{
lean_object* v_reuseFailAlloc_4463_; 
v_reuseFailAlloc_4463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4463_, 0, v_a_4457_);
v___x_4462_ = v_reuseFailAlloc_4463_;
goto v_reusejp_4461_;
}
v_reusejp_4461_:
{
return v___x_4462_;
}
}
}
}
}
else
{
lean_object* v_a_4466_; lean_object* v___x_4468_; uint8_t v_isShared_4469_; uint8_t v_isSharedCheck_4473_; 
lean_dec_ref(v_bs_x27_4329_);
lean_dec_ref(v_type_4327_);
lean_dec(v_levelParams_4326_);
lean_dec(v_rules_4322_);
lean_dec(v_numMinors_4321_);
lean_dec(v_numMotives_4320_);
lean_dec(v_numIndices_4319_);
lean_dec(v_numParams_4318_);
lean_dec(v_all_4317_);
v_a_4466_ = lean_ctor_get(v___x_4330_, 0);
v_isSharedCheck_4473_ = !lean_is_exclusive(v___x_4330_);
if (v_isSharedCheck_4473_ == 0)
{
v___x_4468_ = v___x_4330_;
v_isShared_4469_ = v_isSharedCheck_4473_;
goto v_resetjp_4467_;
}
else
{
lean_inc(v_a_4466_);
lean_dec(v___x_4330_);
v___x_4468_ = lean_box(0);
v_isShared_4469_ = v_isSharedCheck_4473_;
goto v_resetjp_4467_;
}
v_resetjp_4467_:
{
lean_object* v___x_4471_; 
if (v_isShared_4469_ == 0)
{
v___x_4471_ = v___x_4468_;
goto v_reusejp_4470_;
}
else
{
lean_object* v_reuseFailAlloc_4472_; 
v_reuseFailAlloc_4472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4472_, 0, v_a_4466_);
v___x_4471_ = v_reuseFailAlloc_4472_;
goto v_reusejp_4470_;
}
v_reusejp_4470_:
{
return v___x_4471_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(uint8_t v___x_4522_, lean_object* v_as_x27_4523_, lean_object* v_b_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_){
_start:
{
if (lean_obj_tag(v_as_x27_4523_) == 0)
{
lean_object* v___x_4528_; lean_object* v___x_4529_; 
v___x_4528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4528_, 0, v_b_4524_);
lean_ctor_set(v___x_4528_, 1, v___y_4526_);
v___x_4529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4529_, 0, v___x_4528_);
return v___x_4529_;
}
else
{
lean_object* v_head_4530_; lean_object* v_tail_4531_; lean_object* v___x_4532_; lean_object* v___y_4534_; lean_object* v___y_4535_; lean_object* v___x_4563_; 
lean_dec_ref(v_b_4524_);
v_head_4530_ = lean_ctor_get(v_as_x27_4523_, 0);
v_tail_4531_ = lean_ctor_get(v_as_x27_4523_, 1);
v___x_4532_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0));
lean_inc(v_head_4530_);
lean_inc_ref(v___y_4525_);
v___x_4563_ = l_Lean_Environment_find_x3f(v___y_4525_, v_head_4530_, v___x_4522_);
if (lean_obj_tag(v___x_4563_) == 1)
{
lean_object* v_val_4564_; lean_object* v___x_4566_; uint8_t v_isShared_4567_; uint8_t v_isSharedCheck_4687_; 
v_val_4564_ = lean_ctor_get(v___x_4563_, 0);
v_isSharedCheck_4687_ = !lean_is_exclusive(v___x_4563_);
if (v_isSharedCheck_4687_ == 0)
{
v___x_4566_ = v___x_4563_;
v_isShared_4567_ = v_isSharedCheck_4687_;
goto v_resetjp_4565_;
}
else
{
lean_inc(v_val_4564_);
lean_dec(v___x_4563_);
v___x_4566_ = lean_box(0);
v_isShared_4567_ = v_isSharedCheck_4687_;
goto v_resetjp_4565_;
}
v_resetjp_4565_:
{
if (lean_obj_tag(v_val_4564_) == 4)
{
lean_object* v_val_4568_; lean_object* v___x_4570_; uint8_t v_isShared_4571_; uint8_t v_isSharedCheck_4686_; 
v_val_4568_ = lean_ctor_get(v_val_4564_, 0);
v_isSharedCheck_4686_ = !lean_is_exclusive(v_val_4564_);
if (v_isSharedCheck_4686_ == 0)
{
v___x_4570_ = v_val_4564_;
v_isShared_4571_ = v_isSharedCheck_4686_;
goto v_resetjp_4569_;
}
else
{
lean_inc(v_val_4568_);
lean_dec(v_val_4564_);
v___x_4570_ = lean_box(0);
v_isShared_4571_ = v_isSharedCheck_4686_;
goto v_resetjp_4569_;
}
v_resetjp_4569_:
{
lean_object* v_toConstantVal_4572_; lean_object* v_visitedNames_4573_; lean_object* v_visitedLevels_4574_; lean_object* v_visitedExprs_4575_; lean_object* v_visitedConstants_4576_; lean_object* v_noMDataExprs_4577_; uint8_t v_exportMData_4578_; uint8_t v_exportUnsafe_4579_; uint8_t v_ignoreMissing_4580_; lean_object* v_recursorMap_4581_; lean_object* v___x_4583_; uint8_t v_isShared_4584_; uint8_t v_isSharedCheck_4685_; 
v_toConstantVal_4572_ = lean_ctor_get(v_val_4568_, 0);
lean_inc_ref(v_toConstantVal_4572_);
v_visitedNames_4573_ = lean_ctor_get(v___y_4526_, 0);
v_visitedLevels_4574_ = lean_ctor_get(v___y_4526_, 1);
v_visitedExprs_4575_ = lean_ctor_get(v___y_4526_, 2);
v_visitedConstants_4576_ = lean_ctor_get(v___y_4526_, 3);
v_noMDataExprs_4577_ = lean_ctor_get(v___y_4526_, 4);
v_exportMData_4578_ = lean_ctor_get_uint8(v___y_4526_, sizeof(void*)*6);
v_exportUnsafe_4579_ = lean_ctor_get_uint8(v___y_4526_, sizeof(void*)*6 + 1);
v_ignoreMissing_4580_ = lean_ctor_get_uint8(v___y_4526_, sizeof(void*)*6 + 2);
v_recursorMap_4581_ = lean_ctor_get(v___y_4526_, 5);
v_isSharedCheck_4685_ = !lean_is_exclusive(v___y_4526_);
if (v_isSharedCheck_4685_ == 0)
{
v___x_4583_ = v___y_4526_;
v_isShared_4584_ = v_isSharedCheck_4685_;
goto v_resetjp_4582_;
}
else
{
lean_inc(v_recursorMap_4581_);
lean_inc(v_noMDataExprs_4577_);
lean_inc(v_visitedConstants_4576_);
lean_inc(v_visitedExprs_4575_);
lean_inc(v_visitedLevels_4574_);
lean_inc(v_visitedNames_4573_);
lean_dec(v___y_4526_);
v___x_4583_ = lean_box(0);
v_isShared_4584_ = v_isSharedCheck_4685_;
goto v_resetjp_4582_;
}
v_resetjp_4582_:
{
uint8_t v_kind_4585_; lean_object* v_name_4586_; lean_object* v_levelParams_4587_; lean_object* v_type_4588_; lean_object* v___x_4589_; lean_object* v___x_4591_; 
v_kind_4585_ = lean_ctor_get_uint8(v_val_4568_, sizeof(void*)*1);
lean_dec_ref(v_val_4568_);
v_name_4586_ = lean_ctor_get(v_toConstantVal_4572_, 0);
lean_inc(v_name_4586_);
v_levelParams_4587_ = lean_ctor_get(v_toConstantVal_4572_, 1);
lean_inc(v_levelParams_4587_);
v_type_4588_ = lean_ctor_get(v_toConstantVal_4572_, 2);
lean_inc_ref(v_type_4588_);
lean_dec_ref(v_toConstantVal_4572_);
lean_inc(v_head_4530_);
v___x_4589_ = l_Lean_NameHashSet_insert(v_visitedConstants_4576_, v_head_4530_);
if (v_isShared_4584_ == 0)
{
lean_ctor_set(v___x_4583_, 3, v___x_4589_);
v___x_4591_ = v___x_4583_;
goto v_reusejp_4590_;
}
else
{
lean_object* v_reuseFailAlloc_4684_; 
v_reuseFailAlloc_4684_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_4684_, 0, v_visitedNames_4573_);
lean_ctor_set(v_reuseFailAlloc_4684_, 1, v_visitedLevels_4574_);
lean_ctor_set(v_reuseFailAlloc_4684_, 2, v_visitedExprs_4575_);
lean_ctor_set(v_reuseFailAlloc_4684_, 3, v___x_4589_);
lean_ctor_set(v_reuseFailAlloc_4684_, 4, v_noMDataExprs_4577_);
lean_ctor_set(v_reuseFailAlloc_4684_, 5, v_recursorMap_4581_);
lean_ctor_set_uint8(v_reuseFailAlloc_4684_, sizeof(void*)*6, v_exportMData_4578_);
lean_ctor_set_uint8(v_reuseFailAlloc_4684_, sizeof(void*)*6 + 1, v_exportUnsafe_4579_);
lean_ctor_set_uint8(v_reuseFailAlloc_4684_, sizeof(void*)*6 + 2, v_ignoreMissing_4580_);
v___x_4591_ = v_reuseFailAlloc_4684_;
goto v_reusejp_4590_;
}
v_reusejp_4590_:
{
lean_object* v___x_4592_; 
v___x_4592_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_4586_, v___y_4525_, v___x_4591_);
if (lean_obj_tag(v___x_4592_) == 0)
{
lean_object* v_a_4593_; lean_object* v_fst_4594_; lean_object* v_snd_4595_; lean_object* v___x_4597_; uint8_t v_isShared_4598_; uint8_t v_isSharedCheck_4675_; 
v_a_4593_ = lean_ctor_get(v___x_4592_, 0);
lean_inc(v_a_4593_);
lean_dec_ref_known(v___x_4592_, 1);
v_fst_4594_ = lean_ctor_get(v_a_4593_, 0);
v_snd_4595_ = lean_ctor_get(v_a_4593_, 1);
v_isSharedCheck_4675_ = !lean_is_exclusive(v_a_4593_);
if (v_isSharedCheck_4675_ == 0)
{
v___x_4597_ = v_a_4593_;
v_isShared_4598_ = v_isSharedCheck_4675_;
goto v_resetjp_4596_;
}
else
{
lean_inc(v_snd_4595_);
lean_inc(v_fst_4594_);
lean_dec(v_a_4593_);
v___x_4597_ = lean_box(0);
v_isShared_4598_ = v_isSharedCheck_4675_;
goto v_resetjp_4596_;
}
v_resetjp_4596_:
{
lean_object* v___x_4599_; 
v___x_4599_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_4587_, v___y_4525_, v_snd_4595_);
if (lean_obj_tag(v___x_4599_) == 0)
{
lean_object* v_a_4600_; lean_object* v_fst_4601_; lean_object* v_snd_4602_; lean_object* v___x_4604_; uint8_t v_isShared_4605_; uint8_t v_isSharedCheck_4666_; 
v_a_4600_ = lean_ctor_get(v___x_4599_, 0);
lean_inc(v_a_4600_);
lean_dec_ref_known(v___x_4599_, 1);
v_fst_4601_ = lean_ctor_get(v_a_4600_, 0);
v_snd_4602_ = lean_ctor_get(v_a_4600_, 1);
v_isSharedCheck_4666_ = !lean_is_exclusive(v_a_4600_);
if (v_isSharedCheck_4666_ == 0)
{
v___x_4604_ = v_a_4600_;
v_isShared_4605_ = v_isSharedCheck_4666_;
goto v_resetjp_4603_;
}
else
{
lean_inc(v_snd_4602_);
lean_inc(v_fst_4601_);
lean_dec(v_a_4600_);
v___x_4604_ = lean_box(0);
v_isShared_4605_ = v_isSharedCheck_4666_;
goto v_resetjp_4603_;
}
v_resetjp_4603_:
{
lean_object* v___x_4606_; 
v___x_4606_ = l_LeanExport_dumpExpr(v_type_4588_, v___y_4525_, v_snd_4602_);
if (lean_obj_tag(v___x_4606_) == 0)
{
lean_object* v_a_4607_; lean_object* v_fst_4608_; lean_object* v_snd_4609_; lean_object* v___x_4611_; uint8_t v_isShared_4612_; uint8_t v_isSharedCheck_4657_; 
v_a_4607_ = lean_ctor_get(v___x_4606_, 0);
lean_inc(v_a_4607_);
lean_dec_ref_known(v___x_4606_, 1);
v_fst_4608_ = lean_ctor_get(v_a_4607_, 0);
v_snd_4609_ = lean_ctor_get(v_a_4607_, 1);
v_isSharedCheck_4657_ = !lean_is_exclusive(v_a_4607_);
if (v_isSharedCheck_4657_ == 0)
{
v___x_4611_ = v_a_4607_;
v_isShared_4612_ = v_isSharedCheck_4657_;
goto v_resetjp_4610_;
}
else
{
lean_inc(v_snd_4609_);
lean_inc(v_fst_4608_);
lean_dec(v_a_4607_);
v___x_4611_ = lean_box(0);
v_isShared_4612_ = v_isSharedCheck_4657_;
goto v_resetjp_4610_;
}
v_resetjp_4610_:
{
lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4617_; 
v___x_4613_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__5));
v___x_4614_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_4615_ = l_Lean_JsonNumber_fromNat(v_fst_4594_);
if (v_isShared_4571_ == 0)
{
lean_ctor_set_tag(v___x_4570_, 2);
lean_ctor_set(v___x_4570_, 0, v___x_4615_);
v___x_4617_ = v___x_4570_;
goto v_reusejp_4616_;
}
else
{
lean_object* v_reuseFailAlloc_4656_; 
v_reuseFailAlloc_4656_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4656_, 0, v___x_4615_);
v___x_4617_ = v_reuseFailAlloc_4656_;
goto v_reusejp_4616_;
}
v_reusejp_4616_:
{
lean_object* v___x_4619_; 
if (v_isShared_4612_ == 0)
{
lean_ctor_set(v___x_4611_, 1, v___x_4617_);
lean_ctor_set(v___x_4611_, 0, v___x_4614_);
v___x_4619_ = v___x_4611_;
goto v_reusejp_4618_;
}
else
{
lean_object* v_reuseFailAlloc_4655_; 
v_reuseFailAlloc_4655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4655_, 0, v___x_4614_);
lean_ctor_set(v_reuseFailAlloc_4655_, 1, v___x_4617_);
v___x_4619_ = v_reuseFailAlloc_4655_;
goto v_reusejp_4618_;
}
v_reusejp_4618_:
{
lean_object* v___x_4620_; lean_object* v___x_4622_; 
v___x_4620_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_4605_ == 0)
{
lean_ctor_set(v___x_4604_, 1, v_fst_4601_);
lean_ctor_set(v___x_4604_, 0, v___x_4620_);
v___x_4622_ = v___x_4604_;
goto v_reusejp_4621_;
}
else
{
lean_object* v_reuseFailAlloc_4654_; 
v_reuseFailAlloc_4654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4654_, 0, v___x_4620_);
lean_ctor_set(v_reuseFailAlloc_4654_, 1, v_fst_4601_);
v___x_4622_ = v_reuseFailAlloc_4654_;
goto v_reusejp_4621_;
}
v_reusejp_4621_:
{
lean_object* v___x_4623_; lean_object* v___x_4624_; lean_object* v___x_4626_; 
v___x_4623_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_4624_ = l_Lean_JsonNumber_fromNat(v_fst_4608_);
if (v_isShared_4567_ == 0)
{
lean_ctor_set_tag(v___x_4566_, 2);
lean_ctor_set(v___x_4566_, 0, v___x_4624_);
v___x_4626_ = v___x_4566_;
goto v_reusejp_4625_;
}
else
{
lean_object* v_reuseFailAlloc_4653_; 
v_reuseFailAlloc_4653_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4653_, 0, v___x_4624_);
v___x_4626_ = v_reuseFailAlloc_4653_;
goto v_reusejp_4625_;
}
v_reusejp_4625_:
{
lean_object* v___x_4628_; 
if (v_isShared_4598_ == 0)
{
lean_ctor_set(v___x_4597_, 1, v___x_4626_);
lean_ctor_set(v___x_4597_, 0, v___x_4623_);
v___x_4628_ = v___x_4597_;
goto v_reusejp_4627_;
}
else
{
lean_object* v_reuseFailAlloc_4652_; 
v_reuseFailAlloc_4652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4652_, 0, v___x_4623_);
lean_ctor_set(v_reuseFailAlloc_4652_, 1, v___x_4626_);
v___x_4628_ = v_reuseFailAlloc_4652_;
goto v_reusejp_4627_;
}
v_reusejp_4627_:
{
lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; lean_object* v___x_4640_; 
v___x_4629_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__6));
v___x_4630_ = l___private_LeanExport_Basic_0__Lean_QuotKind_toJson(v_kind_4585_);
v___x_4631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4631_, 0, v___x_4629_);
lean_ctor_set(v___x_4631_, 1, v___x_4630_);
v___x_4632_ = lean_box(0);
v___x_4633_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4633_, 0, v___x_4631_);
lean_ctor_set(v___x_4633_, 1, v___x_4632_);
v___x_4634_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4634_, 0, v___x_4628_);
lean_ctor_set(v___x_4634_, 1, v___x_4633_);
v___x_4635_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4635_, 0, v___x_4622_);
lean_ctor_set(v___x_4635_, 1, v___x_4634_);
v___x_4636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4636_, 0, v___x_4619_);
lean_ctor_set(v___x_4636_, 1, v___x_4635_);
v___x_4637_ = l_Lean_Json_mkObj(v___x_4636_);
lean_dec_ref_known(v___x_4636_, 2);
v___x_4638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4638_, 0, v___x_4613_);
lean_ctor_set(v___x_4638_, 1, v___x_4637_);
v___x_4639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4639_, 0, v___x_4638_);
lean_ctor_set(v___x_4639_, 1, v___x_4632_);
v___x_4640_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_4639_, v_snd_4609_);
lean_dec_ref_known(v___x_4639_, 2);
if (lean_obj_tag(v___x_4640_) == 0)
{
lean_object* v_a_4641_; lean_object* v_snd_4642_; 
v_a_4641_ = lean_ctor_get(v___x_4640_, 0);
lean_inc(v_a_4641_);
lean_dec_ref_known(v___x_4640_, 1);
v_snd_4642_ = lean_ctor_get(v_a_4641_, 1);
lean_inc(v_snd_4642_);
lean_dec(v_a_4641_);
v_as_x27_4523_ = v_tail_4531_;
v_b_4524_ = v___x_4532_;
v___y_4526_ = v_snd_4642_;
goto _start;
}
else
{
lean_object* v_a_4644_; lean_object* v___x_4646_; uint8_t v_isShared_4647_; uint8_t v_isSharedCheck_4651_; 
v_a_4644_ = lean_ctor_get(v___x_4640_, 0);
v_isSharedCheck_4651_ = !lean_is_exclusive(v___x_4640_);
if (v_isSharedCheck_4651_ == 0)
{
v___x_4646_ = v___x_4640_;
v_isShared_4647_ = v_isSharedCheck_4651_;
goto v_resetjp_4645_;
}
else
{
lean_inc(v_a_4644_);
lean_dec(v___x_4640_);
v___x_4646_ = lean_box(0);
v_isShared_4647_ = v_isSharedCheck_4651_;
goto v_resetjp_4645_;
}
v_resetjp_4645_:
{
lean_object* v___x_4649_; 
if (v_isShared_4647_ == 0)
{
v___x_4649_ = v___x_4646_;
goto v_reusejp_4648_;
}
else
{
lean_object* v_reuseFailAlloc_4650_; 
v_reuseFailAlloc_4650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4650_, 0, v_a_4644_);
v___x_4649_ = v_reuseFailAlloc_4650_;
goto v_reusejp_4648_;
}
v_reusejp_4648_:
{
return v___x_4649_;
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
lean_object* v_a_4658_; lean_object* v___x_4660_; uint8_t v_isShared_4661_; uint8_t v_isSharedCheck_4665_; 
lean_del_object(v___x_4604_);
lean_dec(v_fst_4601_);
lean_del_object(v___x_4597_);
lean_dec(v_fst_4594_);
lean_del_object(v___x_4570_);
lean_del_object(v___x_4566_);
v_a_4658_ = lean_ctor_get(v___x_4606_, 0);
v_isSharedCheck_4665_ = !lean_is_exclusive(v___x_4606_);
if (v_isSharedCheck_4665_ == 0)
{
v___x_4660_ = v___x_4606_;
v_isShared_4661_ = v_isSharedCheck_4665_;
goto v_resetjp_4659_;
}
else
{
lean_inc(v_a_4658_);
lean_dec(v___x_4606_);
v___x_4660_ = lean_box(0);
v_isShared_4661_ = v_isSharedCheck_4665_;
goto v_resetjp_4659_;
}
v_resetjp_4659_:
{
lean_object* v___x_4663_; 
if (v_isShared_4661_ == 0)
{
v___x_4663_ = v___x_4660_;
goto v_reusejp_4662_;
}
else
{
lean_object* v_reuseFailAlloc_4664_; 
v_reuseFailAlloc_4664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4664_, 0, v_a_4658_);
v___x_4663_ = v_reuseFailAlloc_4664_;
goto v_reusejp_4662_;
}
v_reusejp_4662_:
{
return v___x_4663_;
}
}
}
}
}
else
{
lean_object* v_a_4667_; lean_object* v___x_4669_; uint8_t v_isShared_4670_; uint8_t v_isSharedCheck_4674_; 
lean_del_object(v___x_4597_);
lean_dec(v_fst_4594_);
lean_dec_ref(v_type_4588_);
lean_del_object(v___x_4570_);
lean_del_object(v___x_4566_);
v_a_4667_ = lean_ctor_get(v___x_4599_, 0);
v_isSharedCheck_4674_ = !lean_is_exclusive(v___x_4599_);
if (v_isSharedCheck_4674_ == 0)
{
v___x_4669_ = v___x_4599_;
v_isShared_4670_ = v_isSharedCheck_4674_;
goto v_resetjp_4668_;
}
else
{
lean_inc(v_a_4667_);
lean_dec(v___x_4599_);
v___x_4669_ = lean_box(0);
v_isShared_4670_ = v_isSharedCheck_4674_;
goto v_resetjp_4668_;
}
v_resetjp_4668_:
{
lean_object* v___x_4672_; 
if (v_isShared_4670_ == 0)
{
v___x_4672_ = v___x_4669_;
goto v_reusejp_4671_;
}
else
{
lean_object* v_reuseFailAlloc_4673_; 
v_reuseFailAlloc_4673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4673_, 0, v_a_4667_);
v___x_4672_ = v_reuseFailAlloc_4673_;
goto v_reusejp_4671_;
}
v_reusejp_4671_:
{
return v___x_4672_;
}
}
}
}
}
else
{
lean_object* v_a_4676_; lean_object* v___x_4678_; uint8_t v_isShared_4679_; uint8_t v_isSharedCheck_4683_; 
lean_dec_ref(v_type_4588_);
lean_dec(v_levelParams_4587_);
lean_del_object(v___x_4570_);
lean_del_object(v___x_4566_);
v_a_4676_ = lean_ctor_get(v___x_4592_, 0);
v_isSharedCheck_4683_ = !lean_is_exclusive(v___x_4592_);
if (v_isSharedCheck_4683_ == 0)
{
v___x_4678_ = v___x_4592_;
v_isShared_4679_ = v_isSharedCheck_4683_;
goto v_resetjp_4677_;
}
else
{
lean_inc(v_a_4676_);
lean_dec(v___x_4592_);
v___x_4678_ = lean_box(0);
v_isShared_4679_ = v_isSharedCheck_4683_;
goto v_resetjp_4677_;
}
v_resetjp_4677_:
{
lean_object* v___x_4681_; 
if (v_isShared_4679_ == 0)
{
v___x_4681_ = v___x_4678_;
goto v_reusejp_4680_;
}
else
{
lean_object* v_reuseFailAlloc_4682_; 
v_reuseFailAlloc_4682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4682_, 0, v_a_4676_);
v___x_4681_ = v_reuseFailAlloc_4682_;
goto v_reusejp_4680_;
}
v_reusejp_4680_:
{
return v___x_4681_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_4566_);
lean_dec(v_val_4564_);
v___y_4534_ = v___y_4525_;
v___y_4535_ = v___y_4526_;
goto v___jp_4533_;
}
}
}
else
{
lean_dec(v___x_4563_);
v___y_4534_ = v___y_4525_;
v___y_4535_ = v___y_4526_;
goto v___jp_4533_;
}
v___jp_4533_:
{
uint8_t v_ignoreMissing_4536_; 
v_ignoreMissing_4536_ = lean_ctor_get_uint8(v___y_4535_, sizeof(void*)*6 + 2);
if (v_ignoreMissing_4536_ == 0)
{
lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; uint8_t v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; 
v___x_4537_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_4538_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_4539_ = lean_unsigned_to_nat(313u);
v___x_4540_ = lean_unsigned_to_nat(52u);
v___x_4541_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1));
v___x_4542_ = 1;
lean_inc(v_head_4530_);
v___x_4543_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_4530_, v___x_4542_);
v___x_4544_ = lean_string_append(v___x_4541_, v___x_4543_);
lean_dec_ref(v___x_4543_);
v___x_4545_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2));
v___x_4546_ = lean_string_append(v___x_4544_, v___x_4545_);
v___x_4547_ = l_mkPanicMessageWithDecl(v___x_4537_, v___x_4538_, v___x_4539_, v___x_4540_, v___x_4546_);
lean_dec_ref(v___x_4546_);
v___x_4548_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_4547_, v___y_4534_, v___y_4535_);
if (lean_obj_tag(v___x_4548_) == 0)
{
lean_object* v_a_4549_; lean_object* v_snd_4550_; 
v_a_4549_ = lean_ctor_get(v___x_4548_, 0);
lean_inc(v_a_4549_);
lean_dec_ref_known(v___x_4548_, 1);
v_snd_4550_ = lean_ctor_get(v_a_4549_, 1);
lean_inc(v_snd_4550_);
lean_dec(v_a_4549_);
v_as_x27_4523_ = v_tail_4531_;
v_b_4524_ = v___x_4532_;
v___y_4526_ = v_snd_4550_;
goto _start;
}
else
{
lean_object* v_a_4552_; lean_object* v___x_4554_; uint8_t v_isShared_4555_; uint8_t v_isSharedCheck_4559_; 
v_a_4552_ = lean_ctor_get(v___x_4548_, 0);
v_isSharedCheck_4559_ = !lean_is_exclusive(v___x_4548_);
if (v_isSharedCheck_4559_ == 0)
{
v___x_4554_ = v___x_4548_;
v_isShared_4555_ = v_isSharedCheck_4559_;
goto v_resetjp_4553_;
}
else
{
lean_inc(v_a_4552_);
lean_dec(v___x_4548_);
v___x_4554_ = lean_box(0);
v_isShared_4555_ = v_isSharedCheck_4559_;
goto v_resetjp_4553_;
}
v_resetjp_4553_:
{
lean_object* v___x_4557_; 
if (v_isShared_4555_ == 0)
{
v___x_4557_ = v___x_4554_;
goto v_reusejp_4556_;
}
else
{
lean_object* v_reuseFailAlloc_4558_; 
v_reuseFailAlloc_4558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4558_, 0, v_a_4552_);
v___x_4557_ = v_reuseFailAlloc_4558_;
goto v_reusejp_4556_;
}
v_reusejp_4556_:
{
return v___x_4557_;
}
}
}
}
else
{
lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; 
v___x_4560_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__4));
v___x_4561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4561_, 0, v___x_4560_);
lean_ctor_set(v___x_4561_, 1, v___y_4535_);
v___x_4562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4562_, 0, v___x_4561_);
return v___x_4562_;
}
}
}
}
}
static lean_object* _init_l_LeanExport_dumpConstant___closed__21(void){
_start:
{
lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; 
v___x_4690_ = l_Lean_NameSet_empty;
v___x_4691_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__20));
v___x_4692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4692_, 0, v___x_4691_);
lean_ctor_set(v___x_4692_, 1, v___x_4690_);
return v___x_4692_;
}
}
static lean_object* _init_l_LeanExport_dumpConstant___closed__22(void){
_start:
{
lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; 
v___x_4693_ = lean_obj_once(&l_LeanExport_dumpConstant___closed__21, &l_LeanExport_dumpConstant___closed__21_once, _init_l_LeanExport_dumpConstant___closed__21);
v___x_4694_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__20));
v___x_4695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4695_, 0, v___x_4694_);
lean_ctor_set(v___x_4695_, 1, v___x_4693_);
return v___x_4695_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; 
v___x_4698_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__1));
v___x_4699_ = lean_unsigned_to_nat(11u);
v___x_4700_ = lean_unsigned_to_nat(341u);
v___x_4701_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_4702_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_4703_ = l_mkPanicMessageWithDecl(v___x_4702_, v___x_4701_, v___x_4700_, v___x_4699_, v___x_4698_);
return v___x_4703_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__4(void){
_start:
{
lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; 
v___x_4705_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__3));
v___x_4706_ = lean_unsigned_to_nat(6u);
v___x_4707_ = lean_unsigned_to_nat(329u);
v___x_4708_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_4709_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_4710_ = l_mkPanicMessageWithDecl(v___x_4709_, v___x_4708_, v___x_4707_, v___x_4706_, v___x_4705_);
return v___x_4710_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(uint8_t v___x_4711_, lean_object* v_val_4712_, lean_object* v_as_x27_4713_, lean_object* v_b_4714_, lean_object* v___y_4715_, lean_object* v___y_4716_){
_start:
{
if (lean_obj_tag(v_as_x27_4713_) == 0)
{
lean_object* v___x_4718_; lean_object* v___x_4719_; 
v___x_4718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4718_, 0, v_b_4714_);
lean_ctor_set(v___x_4718_, 1, v___y_4716_);
v___x_4719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4719_, 0, v___x_4718_);
return v___x_4719_;
}
else
{
lean_object* v_head_4720_; lean_object* v_tail_4721_; lean_object* v___y_4723_; lean_object* v_snd_4754_; lean_object* v_fst_4755_; lean_object* v_fst_4756_; lean_object* v_snd_4757_; lean_object* v___y_4759_; lean_object* v_toConstantVal_4760_; lean_object* v_ctors_4761_; uint8_t v___y_4762_; lean_object* v___y_4841_; lean_object* v___x_4852_; 
v_head_4720_ = lean_ctor_get(v_as_x27_4713_, 0);
v_tail_4721_ = lean_ctor_get(v_as_x27_4713_, 1);
v_snd_4754_ = lean_ctor_get(v_b_4714_, 1);
lean_inc(v_snd_4754_);
v_fst_4755_ = lean_ctor_get(v_b_4714_, 0);
lean_inc(v_fst_4755_);
lean_dec_ref(v_b_4714_);
v_fst_4756_ = lean_ctor_get(v_snd_4754_, 0);
lean_inc(v_fst_4756_);
v_snd_4757_ = lean_ctor_get(v_snd_4754_, 1);
lean_inc(v_snd_4757_);
lean_dec(v_snd_4754_);
lean_inc(v_head_4720_);
lean_inc_ref(v___y_4715_);
v___x_4852_ = l_Lean_Environment_find_x3f(v___y_4715_, v_head_4720_, v___x_4711_);
if (lean_obj_tag(v___x_4852_) == 0)
{
lean_object* v___x_4853_; lean_object* v___x_4854_; 
v___x_4853_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__8);
v___x_4854_ = l_panic___at___00LeanExport_dumpConstant_spec__6(v___x_4853_);
v___y_4841_ = v___x_4854_;
goto v___jp_4840_;
}
else
{
lean_object* v_val_4855_; 
v_val_4855_ = lean_ctor_get(v___x_4852_, 0);
lean_inc(v_val_4855_);
lean_dec_ref_known(v___x_4852_, 1);
v___y_4841_ = v_val_4855_;
goto v___jp_4840_;
}
v___jp_4722_:
{
if (lean_obj_tag(v___y_4723_) == 0)
{
lean_object* v_a_4724_; lean_object* v___x_4726_; uint8_t v_isShared_4727_; uint8_t v_isSharedCheck_4745_; 
v_a_4724_ = lean_ctor_get(v___y_4723_, 0);
v_isSharedCheck_4745_ = !lean_is_exclusive(v___y_4723_);
if (v_isSharedCheck_4745_ == 0)
{
v___x_4726_ = v___y_4723_;
v_isShared_4727_ = v_isSharedCheck_4745_;
goto v_resetjp_4725_;
}
else
{
lean_inc(v_a_4724_);
lean_dec(v___y_4723_);
v___x_4726_ = lean_box(0);
v_isShared_4727_ = v_isSharedCheck_4745_;
goto v_resetjp_4725_;
}
v_resetjp_4725_:
{
lean_object* v_fst_4728_; 
v_fst_4728_ = lean_ctor_get(v_a_4724_, 0);
lean_inc(v_fst_4728_);
if (lean_obj_tag(v_fst_4728_) == 0)
{
lean_object* v_snd_4729_; lean_object* v___x_4731_; uint8_t v_isShared_4732_; uint8_t v_isSharedCheck_4740_; 
v_snd_4729_ = lean_ctor_get(v_a_4724_, 1);
v_isSharedCheck_4740_ = !lean_is_exclusive(v_a_4724_);
if (v_isSharedCheck_4740_ == 0)
{
lean_object* v_unused_4741_; 
v_unused_4741_ = lean_ctor_get(v_a_4724_, 0);
lean_dec(v_unused_4741_);
v___x_4731_ = v_a_4724_;
v_isShared_4732_ = v_isSharedCheck_4740_;
goto v_resetjp_4730_;
}
else
{
lean_inc(v_snd_4729_);
lean_dec(v_a_4724_);
v___x_4731_ = lean_box(0);
v_isShared_4732_ = v_isSharedCheck_4740_;
goto v_resetjp_4730_;
}
v_resetjp_4730_:
{
lean_object* v_a_4733_; lean_object* v___x_4735_; 
v_a_4733_ = lean_ctor_get(v_fst_4728_, 0);
lean_inc(v_a_4733_);
lean_dec_ref_known(v_fst_4728_, 1);
if (v_isShared_4732_ == 0)
{
lean_ctor_set(v___x_4731_, 0, v_a_4733_);
v___x_4735_ = v___x_4731_;
goto v_reusejp_4734_;
}
else
{
lean_object* v_reuseFailAlloc_4739_; 
v_reuseFailAlloc_4739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4739_, 0, v_a_4733_);
lean_ctor_set(v_reuseFailAlloc_4739_, 1, v_snd_4729_);
v___x_4735_ = v_reuseFailAlloc_4739_;
goto v_reusejp_4734_;
}
v_reusejp_4734_:
{
lean_object* v___x_4737_; 
if (v_isShared_4727_ == 0)
{
lean_ctor_set(v___x_4726_, 0, v___x_4735_);
v___x_4737_ = v___x_4726_;
goto v_reusejp_4736_;
}
else
{
lean_object* v_reuseFailAlloc_4738_; 
v_reuseFailAlloc_4738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4738_, 0, v___x_4735_);
v___x_4737_ = v_reuseFailAlloc_4738_;
goto v_reusejp_4736_;
}
v_reusejp_4736_:
{
return v___x_4737_;
}
}
}
}
else
{
lean_object* v_snd_4742_; lean_object* v_a_4743_; 
lean_del_object(v___x_4726_);
v_snd_4742_ = lean_ctor_get(v_a_4724_, 1);
lean_inc(v_snd_4742_);
lean_dec(v_a_4724_);
v_a_4743_ = lean_ctor_get(v_fst_4728_, 0);
lean_inc(v_a_4743_);
lean_dec_ref_known(v_fst_4728_, 1);
v_as_x27_4713_ = v_tail_4721_;
v_b_4714_ = v_a_4743_;
v___y_4716_ = v_snd_4742_;
goto _start;
}
}
}
else
{
lean_object* v_a_4746_; lean_object* v___x_4748_; uint8_t v_isShared_4749_; uint8_t v_isSharedCheck_4753_; 
v_a_4746_ = lean_ctor_get(v___y_4723_, 0);
v_isSharedCheck_4753_ = !lean_is_exclusive(v___y_4723_);
if (v_isSharedCheck_4753_ == 0)
{
v___x_4748_ = v___y_4723_;
v_isShared_4749_ = v_isSharedCheck_4753_;
goto v_resetjp_4747_;
}
else
{
lean_inc(v_a_4746_);
lean_dec(v___y_4723_);
v___x_4748_ = lean_box(0);
v_isShared_4749_ = v_isSharedCheck_4753_;
goto v_resetjp_4747_;
}
v_resetjp_4747_:
{
lean_object* v___x_4751_; 
if (v_isShared_4749_ == 0)
{
v___x_4751_ = v___x_4748_;
goto v_reusejp_4750_;
}
else
{
lean_object* v_reuseFailAlloc_4752_; 
v_reuseFailAlloc_4752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4752_, 0, v_a_4746_);
v___x_4751_ = v_reuseFailAlloc_4752_;
goto v_reusejp_4750_;
}
v_reusejp_4750_:
{
return v___x_4751_;
}
}
}
}
v___jp_4758_:
{
lean_object* v___x_4763_; lean_object* v___x_4764_; 
v___x_4763_ = lean_array_push(v_fst_4755_, v___y_4759_);
v___x_4764_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(v___y_4762_, v___x_4711_, v_ctors_4761_, v_fst_4756_, v___y_4715_, v___y_4716_);
lean_dec(v_ctors_4761_);
if (lean_obj_tag(v___x_4764_) == 0)
{
lean_object* v_a_4765_; lean_object* v_snd_4766_; lean_object* v_fst_4767_; lean_object* v___x_4769_; uint8_t v_isShared_4770_; uint8_t v_isSharedCheck_4831_; 
v_a_4765_ = lean_ctor_get(v___x_4764_, 0);
lean_inc(v_a_4765_);
lean_dec_ref_known(v___x_4764_, 1);
v_snd_4766_ = lean_ctor_get(v_a_4765_, 1);
v_fst_4767_ = lean_ctor_get(v_a_4765_, 0);
v_isSharedCheck_4831_ = !lean_is_exclusive(v_a_4765_);
if (v_isSharedCheck_4831_ == 0)
{
v___x_4769_ = v_a_4765_;
v_isShared_4770_ = v_isSharedCheck_4831_;
goto v_resetjp_4768_;
}
else
{
lean_inc(v_snd_4766_);
lean_inc(v_fst_4767_);
lean_dec(v_a_4765_);
v___x_4769_ = lean_box(0);
v_isShared_4770_ = v_isSharedCheck_4831_;
goto v_resetjp_4768_;
}
v_resetjp_4768_:
{
lean_object* v_visitedNames_4771_; lean_object* v_visitedLevels_4772_; lean_object* v_visitedExprs_4773_; lean_object* v_visitedConstants_4774_; lean_object* v_noMDataExprs_4775_; uint8_t v_exportMData_4776_; uint8_t v_exportUnsafe_4777_; uint8_t v_ignoreMissing_4778_; lean_object* v_recursorMap_4779_; lean_object* v___x_4781_; uint8_t v_isShared_4782_; uint8_t v_isSharedCheck_4830_; 
v_visitedNames_4771_ = lean_ctor_get(v_snd_4766_, 0);
v_visitedLevels_4772_ = lean_ctor_get(v_snd_4766_, 1);
v_visitedExprs_4773_ = lean_ctor_get(v_snd_4766_, 2);
v_visitedConstants_4774_ = lean_ctor_get(v_snd_4766_, 3);
v_noMDataExprs_4775_ = lean_ctor_get(v_snd_4766_, 4);
v_exportMData_4776_ = lean_ctor_get_uint8(v_snd_4766_, sizeof(void*)*6);
v_exportUnsafe_4777_ = lean_ctor_get_uint8(v_snd_4766_, sizeof(void*)*6 + 1);
v_ignoreMissing_4778_ = lean_ctor_get_uint8(v_snd_4766_, sizeof(void*)*6 + 2);
v_recursorMap_4779_ = lean_ctor_get(v_snd_4766_, 5);
v_isSharedCheck_4830_ = !lean_is_exclusive(v_snd_4766_);
if (v_isSharedCheck_4830_ == 0)
{
v___x_4781_ = v_snd_4766_;
v_isShared_4782_ = v_isSharedCheck_4830_;
goto v_resetjp_4780_;
}
else
{
lean_inc(v_recursorMap_4779_);
lean_inc(v_noMDataExprs_4775_);
lean_inc(v_visitedConstants_4774_);
lean_inc(v_visitedExprs_4773_);
lean_inc(v_visitedLevels_4772_);
lean_inc(v_visitedNames_4771_);
lean_dec(v_snd_4766_);
v___x_4781_ = lean_box(0);
v_isShared_4782_ = v_isSharedCheck_4830_;
goto v_resetjp_4780_;
}
v_resetjp_4780_:
{
lean_object* v_type_4783_; lean_object* v___x_4784_; lean_object* v___x_4786_; 
v_type_4783_ = lean_ctor_get(v_toConstantVal_4760_, 2);
lean_inc_ref(v_type_4783_);
lean_dec_ref(v_toConstantVal_4760_);
lean_inc(v_head_4720_);
v___x_4784_ = l_Lean_NameHashSet_insert(v_visitedConstants_4774_, v_head_4720_);
if (v_isShared_4782_ == 0)
{
lean_ctor_set(v___x_4781_, 3, v___x_4784_);
v___x_4786_ = v___x_4781_;
goto v_reusejp_4785_;
}
else
{
lean_object* v_reuseFailAlloc_4829_; 
v_reuseFailAlloc_4829_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_4829_, 0, v_visitedNames_4771_);
lean_ctor_set(v_reuseFailAlloc_4829_, 1, v_visitedLevels_4772_);
lean_ctor_set(v_reuseFailAlloc_4829_, 2, v_visitedExprs_4773_);
lean_ctor_set(v_reuseFailAlloc_4829_, 3, v___x_4784_);
lean_ctor_set(v_reuseFailAlloc_4829_, 4, v_noMDataExprs_4775_);
lean_ctor_set(v_reuseFailAlloc_4829_, 5, v_recursorMap_4779_);
lean_ctor_set_uint8(v_reuseFailAlloc_4829_, sizeof(void*)*6, v_exportMData_4776_);
lean_ctor_set_uint8(v_reuseFailAlloc_4829_, sizeof(void*)*6 + 1, v_exportUnsafe_4777_);
lean_ctor_set_uint8(v_reuseFailAlloc_4829_, sizeof(void*)*6 + 2, v_ignoreMissing_4778_);
v___x_4786_ = v_reuseFailAlloc_4829_;
goto v_reusejp_4785_;
}
v_reusejp_4785_:
{
lean_object* v___x_4787_; 
v___x_4787_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_4783_, v___y_4715_, v___x_4786_);
if (lean_obj_tag(v___x_4787_) == 0)
{
lean_object* v_a_4788_; lean_object* v_snd_4789_; lean_object* v___x_4791_; uint8_t v_isShared_4792_; uint8_t v_isSharedCheck_4819_; 
v_a_4788_ = lean_ctor_get(v___x_4787_, 0);
lean_inc(v_a_4788_);
lean_dec_ref_known(v___x_4787_, 1);
v_snd_4789_ = lean_ctor_get(v_a_4788_, 1);
v_isSharedCheck_4819_ = !lean_is_exclusive(v_a_4788_);
if (v_isSharedCheck_4819_ == 0)
{
lean_object* v_unused_4820_; 
v_unused_4820_ = lean_ctor_get(v_a_4788_, 0);
lean_dec(v_unused_4820_);
v___x_4791_ = v_a_4788_;
v_isShared_4792_ = v_isSharedCheck_4819_;
goto v_resetjp_4790_;
}
else
{
lean_inc(v_snd_4789_);
lean_dec(v_a_4788_);
v___x_4791_ = lean_box(0);
v_isShared_4792_ = v_isSharedCheck_4819_;
goto v_resetjp_4790_;
}
v_resetjp_4790_:
{
lean_object* v_toConstantVal_4793_; lean_object* v_recursorMap_4794_; lean_object* v_name_4795_; lean_object* v___x_4796_; 
v_toConstantVal_4793_ = lean_ctor_get(v_val_4712_, 0);
v_recursorMap_4794_ = lean_ctor_get(v_snd_4789_, 5);
v_name_4795_ = lean_ctor_get(v_toConstantVal_4793_, 0);
v___x_4796_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg(v_recursorMap_4794_, v_name_4795_);
if (lean_obj_tag(v___x_4796_) == 1)
{
lean_object* v_val_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4801_; 
v_val_4797_ = lean_ctor_get(v___x_4796_, 0);
lean_inc(v_val_4797_);
lean_dec_ref_known(v___x_4796_, 1);
v___x_4798_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__0));
v___x_4799_ = l_Std_DTreeMap_Internal_Impl_union___at___00Std_DTreeMap_union_spec__0___redArg(v___x_4798_, v_snd_4757_, v_val_4797_);
if (v_isShared_4792_ == 0)
{
lean_ctor_set(v___x_4791_, 1, v___x_4799_);
lean_ctor_set(v___x_4791_, 0, v_fst_4767_);
v___x_4801_ = v___x_4791_;
goto v_reusejp_4800_;
}
else
{
lean_object* v_reuseFailAlloc_4806_; 
v_reuseFailAlloc_4806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4806_, 0, v_fst_4767_);
lean_ctor_set(v_reuseFailAlloc_4806_, 1, v___x_4799_);
v___x_4801_ = v_reuseFailAlloc_4806_;
goto v_reusejp_4800_;
}
v_reusejp_4800_:
{
lean_object* v___x_4803_; 
if (v_isShared_4770_ == 0)
{
lean_ctor_set(v___x_4769_, 1, v___x_4801_);
lean_ctor_set(v___x_4769_, 0, v___x_4763_);
v___x_4803_ = v___x_4769_;
goto v_reusejp_4802_;
}
else
{
lean_object* v_reuseFailAlloc_4805_; 
v_reuseFailAlloc_4805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4805_, 0, v___x_4763_);
lean_ctor_set(v_reuseFailAlloc_4805_, 1, v___x_4801_);
v___x_4803_ = v_reuseFailAlloc_4805_;
goto v_reusejp_4802_;
}
v_reusejp_4802_:
{
v_as_x27_4713_ = v_tail_4721_;
v_b_4714_ = v___x_4803_;
v___y_4716_ = v_snd_4789_;
goto _start;
}
}
}
else
{
lean_object* v___x_4807_; lean_object* v___x_4808_; uint8_t v___x_4809_; 
lean_dec(v___x_4796_);
v___x_4807_ = lean_array_get_size(v_fst_4767_);
v___x_4808_ = lean_unsigned_to_nat(0u);
v___x_4809_ = lean_nat_dec_eq(v___x_4807_, v___x_4808_);
if (v___x_4809_ == 0)
{
lean_object* v___x_4810_; lean_object* v___x_4811_; 
lean_del_object(v___x_4791_);
lean_del_object(v___x_4769_);
lean_dec(v_fst_4767_);
lean_dec_ref(v___x_4763_);
lean_dec(v_snd_4757_);
v___x_4810_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__2, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__2);
v___x_4811_ = l_panic___at___00LeanExport_dumpConstant_spec__11(v___x_4810_, v___y_4715_, v_snd_4789_);
v___y_4723_ = v___x_4811_;
goto v___jp_4722_;
}
else
{
lean_object* v___x_4813_; 
if (v_isShared_4792_ == 0)
{
lean_ctor_set(v___x_4791_, 1, v_snd_4757_);
lean_ctor_set(v___x_4791_, 0, v_fst_4767_);
v___x_4813_ = v___x_4791_;
goto v_reusejp_4812_;
}
else
{
lean_object* v_reuseFailAlloc_4818_; 
v_reuseFailAlloc_4818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4818_, 0, v_fst_4767_);
lean_ctor_set(v_reuseFailAlloc_4818_, 1, v_snd_4757_);
v___x_4813_ = v_reuseFailAlloc_4818_;
goto v_reusejp_4812_;
}
v_reusejp_4812_:
{
lean_object* v___x_4815_; 
if (v_isShared_4770_ == 0)
{
lean_ctor_set(v___x_4769_, 1, v___x_4813_);
lean_ctor_set(v___x_4769_, 0, v___x_4763_);
v___x_4815_ = v___x_4769_;
goto v_reusejp_4814_;
}
else
{
lean_object* v_reuseFailAlloc_4817_; 
v_reuseFailAlloc_4817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4817_, 0, v___x_4763_);
lean_ctor_set(v_reuseFailAlloc_4817_, 1, v___x_4813_);
v___x_4815_ = v_reuseFailAlloc_4817_;
goto v_reusejp_4814_;
}
v_reusejp_4814_:
{
v_as_x27_4713_ = v_tail_4721_;
v_b_4714_ = v___x_4815_;
v___y_4716_ = v_snd_4789_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_4821_; lean_object* v___x_4823_; uint8_t v_isShared_4824_; uint8_t v_isSharedCheck_4828_; 
lean_del_object(v___x_4769_);
lean_dec(v_fst_4767_);
lean_dec_ref(v___x_4763_);
lean_dec(v_snd_4757_);
v_a_4821_ = lean_ctor_get(v___x_4787_, 0);
v_isSharedCheck_4828_ = !lean_is_exclusive(v___x_4787_);
if (v_isSharedCheck_4828_ == 0)
{
v___x_4823_ = v___x_4787_;
v_isShared_4824_ = v_isSharedCheck_4828_;
goto v_resetjp_4822_;
}
else
{
lean_inc(v_a_4821_);
lean_dec(v___x_4787_);
v___x_4823_ = lean_box(0);
v_isShared_4824_ = v_isSharedCheck_4828_;
goto v_resetjp_4822_;
}
v_resetjp_4822_:
{
lean_object* v___x_4826_; 
if (v_isShared_4824_ == 0)
{
v___x_4826_ = v___x_4823_;
goto v_reusejp_4825_;
}
else
{
lean_object* v_reuseFailAlloc_4827_; 
v_reuseFailAlloc_4827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4827_, 0, v_a_4821_);
v___x_4826_ = v_reuseFailAlloc_4827_;
goto v_reusejp_4825_;
}
v_reusejp_4825_:
{
return v___x_4826_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4832_; lean_object* v___x_4834_; uint8_t v_isShared_4835_; uint8_t v_isSharedCheck_4839_; 
lean_dec_ref(v___x_4763_);
lean_dec_ref(v_toConstantVal_4760_);
lean_dec(v_snd_4757_);
v_a_4832_ = lean_ctor_get(v___x_4764_, 0);
v_isSharedCheck_4839_ = !lean_is_exclusive(v___x_4764_);
if (v_isSharedCheck_4839_ == 0)
{
v___x_4834_ = v___x_4764_;
v_isShared_4835_ = v_isSharedCheck_4839_;
goto v_resetjp_4833_;
}
else
{
lean_inc(v_a_4832_);
lean_dec(v___x_4764_);
v___x_4834_ = lean_box(0);
v_isShared_4835_ = v_isSharedCheck_4839_;
goto v_resetjp_4833_;
}
v_resetjp_4833_:
{
lean_object* v___x_4837_; 
if (v_isShared_4835_ == 0)
{
v___x_4837_ = v___x_4834_;
goto v_reusejp_4836_;
}
else
{
lean_object* v_reuseFailAlloc_4838_; 
v_reuseFailAlloc_4838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4838_, 0, v_a_4832_);
v___x_4837_ = v_reuseFailAlloc_4838_;
goto v_reusejp_4836_;
}
v_reusejp_4836_:
{
return v___x_4837_;
}
}
}
}
v___jp_4840_:
{
lean_object* v___x_4842_; uint8_t v_isUnsafe_4843_; 
v___x_4842_ = l_Lean_ConstantInfo_inductiveVal_x21(v___y_4841_);
lean_dec_ref(v___y_4841_);
v_isUnsafe_4843_ = lean_ctor_get_uint8(v___x_4842_, sizeof(void*)*6 + 1);
if (v_isUnsafe_4843_ == 0)
{
lean_object* v_toConstantVal_4844_; lean_object* v_ctors_4845_; uint8_t v___x_4846_; 
v_toConstantVal_4844_ = lean_ctor_get(v___x_4842_, 0);
lean_inc_ref(v_toConstantVal_4844_);
v_ctors_4845_ = lean_ctor_get(v___x_4842_, 4);
lean_inc(v_ctors_4845_);
v___x_4846_ = 1;
v___y_4759_ = v___x_4842_;
v_toConstantVal_4760_ = v_toConstantVal_4844_;
v_ctors_4761_ = v_ctors_4845_;
v___y_4762_ = v___x_4846_;
goto v___jp_4758_;
}
else
{
uint8_t v_exportUnsafe_4847_; 
v_exportUnsafe_4847_ = lean_ctor_get_uint8(v___y_4716_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_4847_ == 0)
{
lean_object* v___x_4848_; lean_object* v___x_4849_; 
lean_dec_ref(v___x_4842_);
lean_dec(v_snd_4757_);
lean_dec(v_fst_4756_);
lean_dec(v_fst_4755_);
v___x_4848_ = lean_obj_once(&l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__4, &l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___closed__4);
v___x_4849_ = l_panic___at___00LeanExport_dumpConstant_spec__11(v___x_4848_, v___y_4715_, v___y_4716_);
v___y_4723_ = v___x_4849_;
goto v___jp_4722_;
}
else
{
lean_object* v_toConstantVal_4850_; lean_object* v_ctors_4851_; 
v_toConstantVal_4850_ = lean_ctor_get(v___x_4842_, 0);
lean_inc_ref(v_toConstantVal_4850_);
v_ctors_4851_ = lean_ctor_get(v___x_4842_, 4);
lean_inc(v_ctors_4851_);
v___y_4759_ = v___x_4842_;
v_toConstantVal_4760_ = v_toConstantVal_4850_;
v_ctors_4761_ = v_ctors_4851_;
v___y_4762_ = v_exportUnsafe_4847_;
goto v___jp_4758_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__20(lean_object* v_as_4856_, size_t v_sz_4857_, size_t v_i_4858_, lean_object* v_b_4859_, lean_object* v___y_4860_, lean_object* v___y_4861_){
_start:
{
uint8_t v___x_4863_; 
v___x_4863_ = lean_usize_dec_lt(v_i_4858_, v_sz_4857_);
if (v___x_4863_ == 0)
{
lean_object* v___x_4864_; lean_object* v___x_4865_; 
v___x_4864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4864_, 0, v_b_4859_);
lean_ctor_set(v___x_4864_, 1, v___y_4861_);
v___x_4865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4865_, 0, v___x_4864_);
return v___x_4865_;
}
else
{
lean_object* v_visitedNames_4866_; lean_object* v_visitedLevels_4867_; lean_object* v_visitedExprs_4868_; lean_object* v_visitedConstants_4869_; lean_object* v_noMDataExprs_4870_; uint8_t v_exportMData_4871_; uint8_t v_exportUnsafe_4872_; uint8_t v_ignoreMissing_4873_; lean_object* v_recursorMap_4874_; lean_object* v___x_4876_; uint8_t v_isShared_4877_; uint8_t v_isSharedCheck_4893_; 
v_visitedNames_4866_ = lean_ctor_get(v___y_4861_, 0);
v_visitedLevels_4867_ = lean_ctor_get(v___y_4861_, 1);
v_visitedExprs_4868_ = lean_ctor_get(v___y_4861_, 2);
v_visitedConstants_4869_ = lean_ctor_get(v___y_4861_, 3);
v_noMDataExprs_4870_ = lean_ctor_get(v___y_4861_, 4);
v_exportMData_4871_ = lean_ctor_get_uint8(v___y_4861_, sizeof(void*)*6);
v_exportUnsafe_4872_ = lean_ctor_get_uint8(v___y_4861_, sizeof(void*)*6 + 1);
v_ignoreMissing_4873_ = lean_ctor_get_uint8(v___y_4861_, sizeof(void*)*6 + 2);
v_recursorMap_4874_ = lean_ctor_get(v___y_4861_, 5);
v_isSharedCheck_4893_ = !lean_is_exclusive(v___y_4861_);
if (v_isSharedCheck_4893_ == 0)
{
v___x_4876_ = v___y_4861_;
v_isShared_4877_ = v_isSharedCheck_4893_;
goto v_resetjp_4875_;
}
else
{
lean_inc(v_recursorMap_4874_);
lean_inc(v_noMDataExprs_4870_);
lean_inc(v_visitedConstants_4869_);
lean_inc(v_visitedExprs_4868_);
lean_inc(v_visitedLevels_4867_);
lean_inc(v_visitedNames_4866_);
lean_dec(v___y_4861_);
v___x_4876_ = lean_box(0);
v_isShared_4877_ = v_isSharedCheck_4893_;
goto v_resetjp_4875_;
}
v_resetjp_4875_:
{
lean_object* v_a_4878_; lean_object* v_toConstantVal_4879_; lean_object* v_name_4880_; lean_object* v_type_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4885_; 
v_a_4878_ = lean_array_uget_borrowed(v_as_4856_, v_i_4858_);
v_toConstantVal_4879_ = lean_ctor_get(v_a_4878_, 0);
v_name_4880_ = lean_ctor_get(v_toConstantVal_4879_, 0);
v_type_4881_ = lean_ctor_get(v_toConstantVal_4879_, 2);
v___x_4882_ = lean_box(0);
lean_inc(v_name_4880_);
v___x_4883_ = l_Lean_NameHashSet_insert(v_visitedConstants_4869_, v_name_4880_);
if (v_isShared_4877_ == 0)
{
lean_ctor_set(v___x_4876_, 3, v___x_4883_);
v___x_4885_ = v___x_4876_;
goto v_reusejp_4884_;
}
else
{
lean_object* v_reuseFailAlloc_4892_; 
v_reuseFailAlloc_4892_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_4892_, 0, v_visitedNames_4866_);
lean_ctor_set(v_reuseFailAlloc_4892_, 1, v_visitedLevels_4867_);
lean_ctor_set(v_reuseFailAlloc_4892_, 2, v_visitedExprs_4868_);
lean_ctor_set(v_reuseFailAlloc_4892_, 3, v___x_4883_);
lean_ctor_set(v_reuseFailAlloc_4892_, 4, v_noMDataExprs_4870_);
lean_ctor_set(v_reuseFailAlloc_4892_, 5, v_recursorMap_4874_);
lean_ctor_set_uint8(v_reuseFailAlloc_4892_, sizeof(void*)*6, v_exportMData_4871_);
lean_ctor_set_uint8(v_reuseFailAlloc_4892_, sizeof(void*)*6 + 1, v_exportUnsafe_4872_);
lean_ctor_set_uint8(v_reuseFailAlloc_4892_, sizeof(void*)*6 + 2, v_ignoreMissing_4873_);
v___x_4885_ = v_reuseFailAlloc_4892_;
goto v_reusejp_4884_;
}
v_reusejp_4884_:
{
lean_object* v___x_4886_; 
lean_inc_ref(v_type_4881_);
v___x_4886_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_4881_, v___y_4860_, v___x_4885_);
if (lean_obj_tag(v___x_4886_) == 0)
{
lean_object* v_a_4887_; lean_object* v_snd_4888_; size_t v___x_4889_; size_t v___x_4890_; 
v_a_4887_ = lean_ctor_get(v___x_4886_, 0);
lean_inc(v_a_4887_);
lean_dec_ref_known(v___x_4886_, 1);
v_snd_4888_ = lean_ctor_get(v_a_4887_, 1);
lean_inc(v_snd_4888_);
lean_dec(v_a_4887_);
v___x_4889_ = ((size_t)1ULL);
v___x_4890_ = lean_usize_add(v_i_4858_, v___x_4889_);
v_i_4858_ = v___x_4890_;
v_b_4859_ = v___x_4882_;
v___y_4861_ = v_snd_4888_;
goto _start;
}
else
{
return v___x_4886_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg(lean_object* v_as_x27_4894_, lean_object* v_b_4895_, lean_object* v___y_4896_, lean_object* v___y_4897_){
_start:
{
if (lean_obj_tag(v_as_x27_4894_) == 0)
{
lean_object* v___x_4899_; lean_object* v___x_4900_; 
v___x_4899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4899_, 0, v_b_4895_);
lean_ctor_set(v___x_4899_, 1, v___y_4897_);
v___x_4900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4900_, 0, v___x_4899_);
return v___x_4900_;
}
else
{
lean_object* v_head_4901_; lean_object* v_tail_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; 
v_head_4901_ = lean_ctor_get(v_as_x27_4894_, 0);
v_tail_4902_ = lean_ctor_get(v_as_x27_4894_, 1);
v___x_4903_ = lean_box(0);
lean_inc(v_head_4901_);
v___x_4904_ = l_LeanExport_dumpConstant(v_head_4901_, v___y_4896_, v___y_4897_);
if (lean_obj_tag(v___x_4904_) == 0)
{
lean_object* v_a_4905_; lean_object* v_snd_4906_; 
v_a_4905_ = lean_ctor_get(v___x_4904_, 0);
lean_inc(v_a_4905_);
lean_dec_ref_known(v___x_4904_, 1);
v_snd_4906_ = lean_ctor_get(v_a_4905_, 1);
lean_inc(v_snd_4906_);
lean_dec(v_a_4905_);
v_as_x27_4894_ = v_tail_4902_;
v_b_4895_ = v___x_4903_;
v___y_4897_ = v_snd_4906_;
goto _start;
}
else
{
return v___x_4904_;
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpConstant(lean_object* v_c_4908_, lean_object* v_a_4909_, lean_object* v_a_4910_){
_start:
{
lean_object* v___y_4917_; lean_object* v___y_4918_; lean_object* v___y_4919_; lean_object* v_fst_4920_; lean_object* v_snd_4921_; uint8_t v___x_5018_; lean_object* v___x_5019_; 
v___x_5018_ = 0;
lean_inc(v_c_4908_);
lean_inc_ref(v_a_4909_);
v___x_5019_ = l_Lean_Environment_find_x3f(v_a_4909_, v_c_4908_, v___x_5018_);
if (lean_obj_tag(v___x_5019_) == 1)
{
lean_object* v_val_5020_; uint8_t v___x_5758_; 
v_val_5020_ = lean_ctor_get(v___x_5019_, 0);
lean_inc(v_val_5020_);
lean_dec_ref_known(v___x_5019_, 1);
v___x_5758_ = l_Lean_ConstantInfo_isUnsafe(v_val_5020_);
if (v___x_5758_ == 0)
{
goto v___jp_5021_;
}
else
{
uint8_t v_exportUnsafe_5759_; 
v_exportUnsafe_5759_ = lean_ctor_get_uint8(v_a_4910_, sizeof(void*)*6 + 1);
if (v_exportUnsafe_5759_ == 0)
{
lean_dec(v_val_5020_);
lean_dec(v_c_4908_);
goto v___jp_4912_;
}
else
{
goto v___jp_5021_;
}
}
v___jp_5021_:
{
lean_object* v_visitedNames_5022_; lean_object* v_visitedLevels_5023_; lean_object* v_visitedExprs_5024_; lean_object* v_visitedConstants_5025_; lean_object* v_noMDataExprs_5026_; uint8_t v_exportMData_5027_; uint8_t v_exportUnsafe_5028_; uint8_t v_ignoreMissing_5029_; lean_object* v_recursorMap_5030_; uint8_t v___x_5031_; 
v_visitedNames_5022_ = lean_ctor_get(v_a_4910_, 0);
v_visitedLevels_5023_ = lean_ctor_get(v_a_4910_, 1);
v_visitedExprs_5024_ = lean_ctor_get(v_a_4910_, 2);
v_visitedConstants_5025_ = lean_ctor_get(v_a_4910_, 3);
v_noMDataExprs_5026_ = lean_ctor_get(v_a_4910_, 4);
v_exportMData_5027_ = lean_ctor_get_uint8(v_a_4910_, sizeof(void*)*6);
v_exportUnsafe_5028_ = lean_ctor_get_uint8(v_a_4910_, sizeof(void*)*6 + 1);
v_ignoreMissing_5029_ = lean_ctor_get_uint8(v_a_4910_, sizeof(void*)*6 + 2);
v_recursorMap_5030_ = lean_ctor_get(v_a_4910_, 5);
v___x_5031_ = l_Lean_NameHashSet_contains(v_visitedConstants_5025_, v_c_4908_);
if (v___x_5031_ == 0)
{
lean_object* v___x_5033_; uint8_t v_isShared_5034_; uint8_t v_isSharedCheck_5751_; 
lean_inc(v_recursorMap_5030_);
lean_inc_ref(v_noMDataExprs_5026_);
lean_inc_ref(v_visitedConstants_5025_);
lean_inc_ref(v_visitedExprs_5024_);
lean_inc_ref(v_visitedLevels_5023_);
lean_inc_ref(v_visitedNames_5022_);
v_isSharedCheck_5751_ = !lean_is_exclusive(v_a_4910_);
if (v_isSharedCheck_5751_ == 0)
{
lean_object* v_unused_5752_; lean_object* v_unused_5753_; lean_object* v_unused_5754_; lean_object* v_unused_5755_; lean_object* v_unused_5756_; lean_object* v_unused_5757_; 
v_unused_5752_ = lean_ctor_get(v_a_4910_, 5);
lean_dec(v_unused_5752_);
v_unused_5753_ = lean_ctor_get(v_a_4910_, 4);
lean_dec(v_unused_5753_);
v_unused_5754_ = lean_ctor_get(v_a_4910_, 3);
lean_dec(v_unused_5754_);
v_unused_5755_ = lean_ctor_get(v_a_4910_, 2);
lean_dec(v_unused_5755_);
v_unused_5756_ = lean_ctor_get(v_a_4910_, 1);
lean_dec(v_unused_5756_);
v_unused_5757_ = lean_ctor_get(v_a_4910_, 0);
lean_dec(v_unused_5757_);
v___x_5033_ = v_a_4910_;
v_isShared_5034_ = v_isSharedCheck_5751_;
goto v_resetjp_5032_;
}
else
{
lean_dec(v_a_4910_);
v___x_5033_ = lean_box(0);
v_isShared_5034_ = v_isSharedCheck_5751_;
goto v_resetjp_5032_;
}
v_resetjp_5032_:
{
lean_object* v___x_5035_; lean_object* v___x_5037_; 
v___x_5035_ = l_Lean_NameHashSet_insert(v_visitedConstants_5025_, v_c_4908_);
if (v_isShared_5034_ == 0)
{
lean_ctor_set(v___x_5033_, 3, v___x_5035_);
v___x_5037_ = v___x_5033_;
goto v_reusejp_5036_;
}
else
{
lean_object* v_reuseFailAlloc_5750_; 
v_reuseFailAlloc_5750_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_5750_, 0, v_visitedNames_5022_);
lean_ctor_set(v_reuseFailAlloc_5750_, 1, v_visitedLevels_5023_);
lean_ctor_set(v_reuseFailAlloc_5750_, 2, v_visitedExprs_5024_);
lean_ctor_set(v_reuseFailAlloc_5750_, 3, v___x_5035_);
lean_ctor_set(v_reuseFailAlloc_5750_, 4, v_noMDataExprs_5026_);
lean_ctor_set(v_reuseFailAlloc_5750_, 5, v_recursorMap_5030_);
lean_ctor_set_uint8(v_reuseFailAlloc_5750_, sizeof(void*)*6, v_exportMData_5027_);
lean_ctor_set_uint8(v_reuseFailAlloc_5750_, sizeof(void*)*6 + 1, v_exportUnsafe_5028_);
lean_ctor_set_uint8(v_reuseFailAlloc_5750_, sizeof(void*)*6 + 2, v_ignoreMissing_5029_);
v___x_5037_ = v_reuseFailAlloc_5750_;
goto v_reusejp_5036_;
}
v_reusejp_5036_:
{
switch(lean_obj_tag(v_val_5020_))
{
case 0:
{
lean_object* v_val_5038_; lean_object* v___x_5040_; uint8_t v_isShared_5041_; uint8_t v_isSharedCheck_5142_; 
v_val_5038_ = lean_ctor_get(v_val_5020_, 0);
v_isSharedCheck_5142_ = !lean_is_exclusive(v_val_5020_);
if (v_isSharedCheck_5142_ == 0)
{
v___x_5040_ = v_val_5020_;
v_isShared_5041_ = v_isSharedCheck_5142_;
goto v_resetjp_5039_;
}
else
{
lean_inc(v_val_5038_);
lean_dec(v_val_5020_);
v___x_5040_ = lean_box(0);
v_isShared_5041_ = v_isSharedCheck_5142_;
goto v_resetjp_5039_;
}
v_resetjp_5039_:
{
lean_object* v_toConstantVal_5042_; uint8_t v_isUnsafe_5043_; lean_object* v_name_5044_; lean_object* v_levelParams_5045_; lean_object* v_type_5046_; lean_object* v___x_5047_; 
v_toConstantVal_5042_ = lean_ctor_get(v_val_5038_, 0);
lean_inc_ref(v_toConstantVal_5042_);
v_isUnsafe_5043_ = lean_ctor_get_uint8(v_val_5038_, sizeof(void*)*1);
lean_dec_ref(v_val_5038_);
v_name_5044_ = lean_ctor_get(v_toConstantVal_5042_, 0);
lean_inc(v_name_5044_);
v_levelParams_5045_ = lean_ctor_get(v_toConstantVal_5042_, 1);
lean_inc(v_levelParams_5045_);
v_type_5046_ = lean_ctor_get(v_toConstantVal_5042_, 2);
lean_inc_ref_n(v_type_5046_, 2);
lean_dec_ref(v_toConstantVal_5042_);
v___x_5047_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_5046_, v_a_4909_, v___x_5037_);
if (lean_obj_tag(v___x_5047_) == 0)
{
lean_object* v_a_5048_; lean_object* v___x_5050_; uint8_t v_isShared_5051_; uint8_t v_isSharedCheck_5141_; 
v_a_5048_ = lean_ctor_get(v___x_5047_, 0);
v_isSharedCheck_5141_ = !lean_is_exclusive(v___x_5047_);
if (v_isSharedCheck_5141_ == 0)
{
v___x_5050_ = v___x_5047_;
v_isShared_5051_ = v_isSharedCheck_5141_;
goto v_resetjp_5049_;
}
else
{
lean_inc(v_a_5048_);
lean_dec(v___x_5047_);
v___x_5050_ = lean_box(0);
v_isShared_5051_ = v_isSharedCheck_5141_;
goto v_resetjp_5049_;
}
v_resetjp_5049_:
{
lean_object* v_snd_5052_; lean_object* v___x_5054_; uint8_t v_isShared_5055_; uint8_t v_isSharedCheck_5139_; 
v_snd_5052_ = lean_ctor_get(v_a_5048_, 1);
v_isSharedCheck_5139_ = !lean_is_exclusive(v_a_5048_);
if (v_isSharedCheck_5139_ == 0)
{
lean_object* v_unused_5140_; 
v_unused_5140_ = lean_ctor_get(v_a_5048_, 0);
lean_dec(v_unused_5140_);
v___x_5054_ = v_a_5048_;
v_isShared_5055_ = v_isSharedCheck_5139_;
goto v_resetjp_5053_;
}
else
{
lean_inc(v_snd_5052_);
lean_dec(v_a_5048_);
v___x_5054_ = lean_box(0);
v_isShared_5055_ = v_isSharedCheck_5139_;
goto v_resetjp_5053_;
}
v_resetjp_5053_:
{
lean_object* v___x_5056_; 
v___x_5056_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_5044_, v_a_4909_, v_snd_5052_);
if (lean_obj_tag(v___x_5056_) == 0)
{
lean_object* v_a_5057_; lean_object* v_fst_5058_; lean_object* v_snd_5059_; lean_object* v___x_5061_; uint8_t v_isShared_5062_; uint8_t v_isSharedCheck_5130_; 
v_a_5057_ = lean_ctor_get(v___x_5056_, 0);
lean_inc(v_a_5057_);
lean_dec_ref_known(v___x_5056_, 1);
v_fst_5058_ = lean_ctor_get(v_a_5057_, 0);
v_snd_5059_ = lean_ctor_get(v_a_5057_, 1);
v_isSharedCheck_5130_ = !lean_is_exclusive(v_a_5057_);
if (v_isSharedCheck_5130_ == 0)
{
v___x_5061_ = v_a_5057_;
v_isShared_5062_ = v_isSharedCheck_5130_;
goto v_resetjp_5060_;
}
else
{
lean_inc(v_snd_5059_);
lean_inc(v_fst_5058_);
lean_dec(v_a_5057_);
v___x_5061_ = lean_box(0);
v_isShared_5062_ = v_isSharedCheck_5130_;
goto v_resetjp_5060_;
}
v_resetjp_5060_:
{
lean_object* v___x_5063_; 
v___x_5063_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_5045_, v_a_4909_, v_snd_5059_);
if (lean_obj_tag(v___x_5063_) == 0)
{
lean_object* v_a_5064_; lean_object* v_fst_5065_; lean_object* v_snd_5066_; lean_object* v___x_5068_; uint8_t v_isShared_5069_; uint8_t v_isSharedCheck_5121_; 
v_a_5064_ = lean_ctor_get(v___x_5063_, 0);
lean_inc(v_a_5064_);
lean_dec_ref_known(v___x_5063_, 1);
v_fst_5065_ = lean_ctor_get(v_a_5064_, 0);
v_snd_5066_ = lean_ctor_get(v_a_5064_, 1);
v_isSharedCheck_5121_ = !lean_is_exclusive(v_a_5064_);
if (v_isSharedCheck_5121_ == 0)
{
v___x_5068_ = v_a_5064_;
v_isShared_5069_ = v_isSharedCheck_5121_;
goto v_resetjp_5067_;
}
else
{
lean_inc(v_snd_5066_);
lean_inc(v_fst_5065_);
lean_dec(v_a_5064_);
v___x_5068_ = lean_box(0);
v_isShared_5069_ = v_isSharedCheck_5121_;
goto v_resetjp_5067_;
}
v_resetjp_5067_:
{
lean_object* v___x_5070_; 
v___x_5070_ = l_LeanExport_dumpExpr(v_type_5046_, v_a_4909_, v_snd_5066_);
if (lean_obj_tag(v___x_5070_) == 0)
{
lean_object* v_a_5071_; lean_object* v_fst_5072_; lean_object* v_snd_5073_; lean_object* v___x_5075_; uint8_t v_isShared_5076_; uint8_t v_isSharedCheck_5112_; 
v_a_5071_ = lean_ctor_get(v___x_5070_, 0);
lean_inc(v_a_5071_);
lean_dec_ref_known(v___x_5070_, 1);
v_fst_5072_ = lean_ctor_get(v_a_5071_, 0);
v_snd_5073_ = lean_ctor_get(v_a_5071_, 1);
v_isSharedCheck_5112_ = !lean_is_exclusive(v_a_5071_);
if (v_isSharedCheck_5112_ == 0)
{
v___x_5075_ = v_a_5071_;
v_isShared_5076_ = v_isSharedCheck_5112_;
goto v_resetjp_5074_;
}
else
{
lean_inc(v_snd_5073_);
lean_inc(v_fst_5072_);
lean_dec(v_a_5071_);
v___x_5075_ = lean_box(0);
v_isShared_5076_ = v_isSharedCheck_5112_;
goto v_resetjp_5074_;
}
v_resetjp_5074_:
{
lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5081_; 
v___x_5077_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__3));
v___x_5078_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_5079_ = l_Lean_JsonNumber_fromNat(v_fst_5058_);
if (v_isShared_5051_ == 0)
{
lean_ctor_set_tag(v___x_5050_, 2);
lean_ctor_set(v___x_5050_, 0, v___x_5079_);
v___x_5081_ = v___x_5050_;
goto v_reusejp_5080_;
}
else
{
lean_object* v_reuseFailAlloc_5111_; 
v_reuseFailAlloc_5111_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5111_, 0, v___x_5079_);
v___x_5081_ = v_reuseFailAlloc_5111_;
goto v_reusejp_5080_;
}
v_reusejp_5080_:
{
lean_object* v___x_5083_; 
if (v_isShared_5076_ == 0)
{
lean_ctor_set(v___x_5075_, 1, v___x_5081_);
lean_ctor_set(v___x_5075_, 0, v___x_5078_);
v___x_5083_ = v___x_5075_;
goto v_reusejp_5082_;
}
else
{
lean_object* v_reuseFailAlloc_5110_; 
v_reuseFailAlloc_5110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5110_, 0, v___x_5078_);
lean_ctor_set(v_reuseFailAlloc_5110_, 1, v___x_5081_);
v___x_5083_ = v_reuseFailAlloc_5110_;
goto v_reusejp_5082_;
}
v_reusejp_5082_:
{
lean_object* v___x_5084_; lean_object* v___x_5086_; 
v___x_5084_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_5069_ == 0)
{
lean_ctor_set(v___x_5068_, 1, v_fst_5065_);
lean_ctor_set(v___x_5068_, 0, v___x_5084_);
v___x_5086_ = v___x_5068_;
goto v_reusejp_5085_;
}
else
{
lean_object* v_reuseFailAlloc_5109_; 
v_reuseFailAlloc_5109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5109_, 0, v___x_5084_);
lean_ctor_set(v_reuseFailAlloc_5109_, 1, v_fst_5065_);
v___x_5086_ = v_reuseFailAlloc_5109_;
goto v_reusejp_5085_;
}
v_reusejp_5085_:
{
lean_object* v___x_5087_; lean_object* v___x_5088_; lean_object* v___x_5090_; 
v___x_5087_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_5088_ = l_Lean_JsonNumber_fromNat(v_fst_5072_);
if (v_isShared_5041_ == 0)
{
lean_ctor_set_tag(v___x_5040_, 2);
lean_ctor_set(v___x_5040_, 0, v___x_5088_);
v___x_5090_ = v___x_5040_;
goto v_reusejp_5089_;
}
else
{
lean_object* v_reuseFailAlloc_5108_; 
v_reuseFailAlloc_5108_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5108_, 0, v___x_5088_);
v___x_5090_ = v_reuseFailAlloc_5108_;
goto v_reusejp_5089_;
}
v_reusejp_5089_:
{
lean_object* v___x_5092_; 
if (v_isShared_5062_ == 0)
{
lean_ctor_set(v___x_5061_, 1, v___x_5090_);
lean_ctor_set(v___x_5061_, 0, v___x_5087_);
v___x_5092_ = v___x_5061_;
goto v_reusejp_5091_;
}
else
{
lean_object* v_reuseFailAlloc_5107_; 
v_reuseFailAlloc_5107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5107_, 0, v___x_5087_);
lean_ctor_set(v_reuseFailAlloc_5107_, 1, v___x_5090_);
v___x_5092_ = v_reuseFailAlloc_5107_;
goto v_reusejp_5091_;
}
v_reusejp_5091_:
{
lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5096_; 
v___x_5093_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6));
v___x_5094_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_5094_, 0, v_isUnsafe_5043_);
if (v_isShared_5055_ == 0)
{
lean_ctor_set(v___x_5054_, 1, v___x_5094_);
lean_ctor_set(v___x_5054_, 0, v___x_5093_);
v___x_5096_ = v___x_5054_;
goto v_reusejp_5095_;
}
else
{
lean_object* v_reuseFailAlloc_5106_; 
v_reuseFailAlloc_5106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5106_, 0, v___x_5093_);
lean_ctor_set(v_reuseFailAlloc_5106_, 1, v___x_5094_);
v___x_5096_ = v_reuseFailAlloc_5106_;
goto v_reusejp_5095_;
}
v_reusejp_5095_:
{
lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; 
v___x_5097_ = lean_box(0);
v___x_5098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5098_, 0, v___x_5096_);
lean_ctor_set(v___x_5098_, 1, v___x_5097_);
v___x_5099_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5099_, 0, v___x_5092_);
lean_ctor_set(v___x_5099_, 1, v___x_5098_);
v___x_5100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5100_, 0, v___x_5086_);
lean_ctor_set(v___x_5100_, 1, v___x_5099_);
v___x_5101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5101_, 0, v___x_5083_);
lean_ctor_set(v___x_5101_, 1, v___x_5100_);
v___x_5102_ = l_Lean_Json_mkObj(v___x_5101_);
lean_dec_ref_known(v___x_5101_, 2);
v___x_5103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5103_, 0, v___x_5077_);
lean_ctor_set(v___x_5103_, 1, v___x_5102_);
v___x_5104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5104_, 0, v___x_5103_);
lean_ctor_set(v___x_5104_, 1, v___x_5097_);
v___x_5105_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_5104_, v_snd_5073_);
lean_dec_ref_known(v___x_5104_, 2);
return v___x_5105_;
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
lean_object* v_a_5113_; lean_object* v___x_5115_; uint8_t v_isShared_5116_; uint8_t v_isSharedCheck_5120_; 
lean_del_object(v___x_5068_);
lean_dec(v_fst_5065_);
lean_del_object(v___x_5061_);
lean_dec(v_fst_5058_);
lean_del_object(v___x_5054_);
lean_del_object(v___x_5050_);
lean_del_object(v___x_5040_);
v_a_5113_ = lean_ctor_get(v___x_5070_, 0);
v_isSharedCheck_5120_ = !lean_is_exclusive(v___x_5070_);
if (v_isSharedCheck_5120_ == 0)
{
v___x_5115_ = v___x_5070_;
v_isShared_5116_ = v_isSharedCheck_5120_;
goto v_resetjp_5114_;
}
else
{
lean_inc(v_a_5113_);
lean_dec(v___x_5070_);
v___x_5115_ = lean_box(0);
v_isShared_5116_ = v_isSharedCheck_5120_;
goto v_resetjp_5114_;
}
v_resetjp_5114_:
{
lean_object* v___x_5118_; 
if (v_isShared_5116_ == 0)
{
v___x_5118_ = v___x_5115_;
goto v_reusejp_5117_;
}
else
{
lean_object* v_reuseFailAlloc_5119_; 
v_reuseFailAlloc_5119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5119_, 0, v_a_5113_);
v___x_5118_ = v_reuseFailAlloc_5119_;
goto v_reusejp_5117_;
}
v_reusejp_5117_:
{
return v___x_5118_;
}
}
}
}
}
else
{
lean_object* v_a_5122_; lean_object* v___x_5124_; uint8_t v_isShared_5125_; uint8_t v_isSharedCheck_5129_; 
lean_del_object(v___x_5061_);
lean_dec(v_fst_5058_);
lean_del_object(v___x_5054_);
lean_del_object(v___x_5050_);
lean_dec_ref(v_type_5046_);
lean_del_object(v___x_5040_);
v_a_5122_ = lean_ctor_get(v___x_5063_, 0);
v_isSharedCheck_5129_ = !lean_is_exclusive(v___x_5063_);
if (v_isSharedCheck_5129_ == 0)
{
v___x_5124_ = v___x_5063_;
v_isShared_5125_ = v_isSharedCheck_5129_;
goto v_resetjp_5123_;
}
else
{
lean_inc(v_a_5122_);
lean_dec(v___x_5063_);
v___x_5124_ = lean_box(0);
v_isShared_5125_ = v_isSharedCheck_5129_;
goto v_resetjp_5123_;
}
v_resetjp_5123_:
{
lean_object* v___x_5127_; 
if (v_isShared_5125_ == 0)
{
v___x_5127_ = v___x_5124_;
goto v_reusejp_5126_;
}
else
{
lean_object* v_reuseFailAlloc_5128_; 
v_reuseFailAlloc_5128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5128_, 0, v_a_5122_);
v___x_5127_ = v_reuseFailAlloc_5128_;
goto v_reusejp_5126_;
}
v_reusejp_5126_:
{
return v___x_5127_;
}
}
}
}
}
else
{
lean_object* v_a_5131_; lean_object* v___x_5133_; uint8_t v_isShared_5134_; uint8_t v_isSharedCheck_5138_; 
lean_del_object(v___x_5054_);
lean_del_object(v___x_5050_);
lean_dec_ref(v_type_5046_);
lean_dec(v_levelParams_5045_);
lean_del_object(v___x_5040_);
v_a_5131_ = lean_ctor_get(v___x_5056_, 0);
v_isSharedCheck_5138_ = !lean_is_exclusive(v___x_5056_);
if (v_isSharedCheck_5138_ == 0)
{
v___x_5133_ = v___x_5056_;
v_isShared_5134_ = v_isSharedCheck_5138_;
goto v_resetjp_5132_;
}
else
{
lean_inc(v_a_5131_);
lean_dec(v___x_5056_);
v___x_5133_ = lean_box(0);
v_isShared_5134_ = v_isSharedCheck_5138_;
goto v_resetjp_5132_;
}
v_resetjp_5132_:
{
lean_object* v___x_5136_; 
if (v_isShared_5134_ == 0)
{
v___x_5136_ = v___x_5133_;
goto v_reusejp_5135_;
}
else
{
lean_object* v_reuseFailAlloc_5137_; 
v_reuseFailAlloc_5137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5137_, 0, v_a_5131_);
v___x_5136_ = v_reuseFailAlloc_5137_;
goto v_reusejp_5135_;
}
v_reusejp_5135_:
{
return v___x_5136_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_type_5046_);
lean_dec(v_levelParams_5045_);
lean_dec(v_name_5044_);
lean_del_object(v___x_5040_);
return v___x_5047_;
}
}
}
case 1:
{
lean_object* v_val_5143_; lean_object* v___x_5145_; uint8_t v_isShared_5146_; uint8_t v_isSharedCheck_5314_; 
v_val_5143_ = lean_ctor_get(v_val_5020_, 0);
v_isSharedCheck_5314_ = !lean_is_exclusive(v_val_5020_);
if (v_isSharedCheck_5314_ == 0)
{
v___x_5145_ = v_val_5020_;
v_isShared_5146_ = v_isSharedCheck_5314_;
goto v_resetjp_5144_;
}
else
{
lean_inc(v_val_5143_);
lean_dec(v_val_5020_);
v___x_5145_ = lean_box(0);
v_isShared_5146_ = v_isSharedCheck_5314_;
goto v_resetjp_5144_;
}
v_resetjp_5144_:
{
lean_object* v_toConstantVal_5147_; lean_object* v_value_5148_; lean_object* v_hints_5149_; uint8_t v_safety_5150_; lean_object* v_all_5151_; lean_object* v_name_5152_; lean_object* v_levelParams_5153_; lean_object* v_type_5154_; lean_object* v___x_5155_; 
v_toConstantVal_5147_ = lean_ctor_get(v_val_5143_, 0);
lean_inc_ref(v_toConstantVal_5147_);
v_value_5148_ = lean_ctor_get(v_val_5143_, 1);
lean_inc_ref(v_value_5148_);
v_hints_5149_ = lean_ctor_get(v_val_5143_, 2);
lean_inc(v_hints_5149_);
v_safety_5150_ = lean_ctor_get_uint8(v_val_5143_, sizeof(void*)*4);
v_all_5151_ = lean_ctor_get(v_val_5143_, 3);
lean_inc(v_all_5151_);
lean_dec_ref(v_val_5143_);
v_name_5152_ = lean_ctor_get(v_toConstantVal_5147_, 0);
lean_inc(v_name_5152_);
v_levelParams_5153_ = lean_ctor_get(v_toConstantVal_5147_, 1);
lean_inc(v_levelParams_5153_);
v_type_5154_ = lean_ctor_get(v_toConstantVal_5147_, 2);
lean_inc_ref_n(v_type_5154_, 2);
lean_dec_ref(v_toConstantVal_5147_);
v___x_5155_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_5154_, v_a_4909_, v___x_5037_);
if (lean_obj_tag(v___x_5155_) == 0)
{
lean_object* v_a_5156_; lean_object* v___x_5158_; uint8_t v_isShared_5159_; uint8_t v_isSharedCheck_5313_; 
v_a_5156_ = lean_ctor_get(v___x_5155_, 0);
v_isSharedCheck_5313_ = !lean_is_exclusive(v___x_5155_);
if (v_isSharedCheck_5313_ == 0)
{
v___x_5158_ = v___x_5155_;
v_isShared_5159_ = v_isSharedCheck_5313_;
goto v_resetjp_5157_;
}
else
{
lean_inc(v_a_5156_);
lean_dec(v___x_5155_);
v___x_5158_ = lean_box(0);
v_isShared_5159_ = v_isSharedCheck_5313_;
goto v_resetjp_5157_;
}
v_resetjp_5157_:
{
lean_object* v_snd_5160_; lean_object* v___x_5162_; uint8_t v_isShared_5163_; uint8_t v_isSharedCheck_5311_; 
v_snd_5160_ = lean_ctor_get(v_a_5156_, 1);
v_isSharedCheck_5311_ = !lean_is_exclusive(v_a_5156_);
if (v_isSharedCheck_5311_ == 0)
{
lean_object* v_unused_5312_; 
v_unused_5312_ = lean_ctor_get(v_a_5156_, 0);
lean_dec(v_unused_5312_);
v___x_5162_ = v_a_5156_;
v_isShared_5163_ = v_isSharedCheck_5311_;
goto v_resetjp_5161_;
}
else
{
lean_inc(v_snd_5160_);
lean_dec(v_a_5156_);
v___x_5162_ = lean_box(0);
v_isShared_5163_ = v_isSharedCheck_5311_;
goto v_resetjp_5161_;
}
v_resetjp_5161_:
{
lean_object* v___x_5164_; 
lean_inc_ref(v_value_5148_);
v___x_5164_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_value_5148_, v_a_4909_, v_snd_5160_);
if (lean_obj_tag(v___x_5164_) == 0)
{
lean_object* v_a_5165_; lean_object* v___x_5167_; uint8_t v_isShared_5168_; uint8_t v_isSharedCheck_5310_; 
v_a_5165_ = lean_ctor_get(v___x_5164_, 0);
v_isSharedCheck_5310_ = !lean_is_exclusive(v___x_5164_);
if (v_isSharedCheck_5310_ == 0)
{
v___x_5167_ = v___x_5164_;
v_isShared_5168_ = v_isSharedCheck_5310_;
goto v_resetjp_5166_;
}
else
{
lean_inc(v_a_5165_);
lean_dec(v___x_5164_);
v___x_5167_ = lean_box(0);
v_isShared_5168_ = v_isSharedCheck_5310_;
goto v_resetjp_5166_;
}
v_resetjp_5166_:
{
lean_object* v_snd_5169_; lean_object* v___x_5171_; uint8_t v_isShared_5172_; uint8_t v_isSharedCheck_5308_; 
v_snd_5169_ = lean_ctor_get(v_a_5165_, 1);
v_isSharedCheck_5308_ = !lean_is_exclusive(v_a_5165_);
if (v_isSharedCheck_5308_ == 0)
{
lean_object* v_unused_5309_; 
v_unused_5309_ = lean_ctor_get(v_a_5165_, 0);
lean_dec(v_unused_5309_);
v___x_5171_ = v_a_5165_;
v_isShared_5172_ = v_isSharedCheck_5308_;
goto v_resetjp_5170_;
}
else
{
lean_inc(v_snd_5169_);
lean_dec(v_a_5165_);
v___x_5171_ = lean_box(0);
v_isShared_5172_ = v_isSharedCheck_5308_;
goto v_resetjp_5170_;
}
v_resetjp_5170_:
{
lean_object* v___x_5173_; 
v___x_5173_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_5152_, v_a_4909_, v_snd_5169_);
if (lean_obj_tag(v___x_5173_) == 0)
{
lean_object* v_a_5174_; lean_object* v_fst_5175_; lean_object* v_snd_5176_; lean_object* v___x_5178_; uint8_t v_isShared_5179_; uint8_t v_isSharedCheck_5299_; 
v_a_5174_ = lean_ctor_get(v___x_5173_, 0);
lean_inc(v_a_5174_);
lean_dec_ref_known(v___x_5173_, 1);
v_fst_5175_ = lean_ctor_get(v_a_5174_, 0);
v_snd_5176_ = lean_ctor_get(v_a_5174_, 1);
v_isSharedCheck_5299_ = !lean_is_exclusive(v_a_5174_);
if (v_isSharedCheck_5299_ == 0)
{
v___x_5178_ = v_a_5174_;
v_isShared_5179_ = v_isSharedCheck_5299_;
goto v_resetjp_5177_;
}
else
{
lean_inc(v_snd_5176_);
lean_inc(v_fst_5175_);
lean_dec(v_a_5174_);
v___x_5178_ = lean_box(0);
v_isShared_5179_ = v_isSharedCheck_5299_;
goto v_resetjp_5177_;
}
v_resetjp_5177_:
{
lean_object* v___x_5180_; 
v___x_5180_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_5153_, v_a_4909_, v_snd_5176_);
if (lean_obj_tag(v___x_5180_) == 0)
{
lean_object* v_a_5181_; lean_object* v_fst_5182_; lean_object* v_snd_5183_; lean_object* v___x_5185_; uint8_t v_isShared_5186_; uint8_t v_isSharedCheck_5290_; 
v_a_5181_ = lean_ctor_get(v___x_5180_, 0);
lean_inc(v_a_5181_);
lean_dec_ref_known(v___x_5180_, 1);
v_fst_5182_ = lean_ctor_get(v_a_5181_, 0);
v_snd_5183_ = lean_ctor_get(v_a_5181_, 1);
v_isSharedCheck_5290_ = !lean_is_exclusive(v_a_5181_);
if (v_isSharedCheck_5290_ == 0)
{
v___x_5185_ = v_a_5181_;
v_isShared_5186_ = v_isSharedCheck_5290_;
goto v_resetjp_5184_;
}
else
{
lean_inc(v_snd_5183_);
lean_inc(v_fst_5182_);
lean_dec(v_a_5181_);
v___x_5185_ = lean_box(0);
v_isShared_5186_ = v_isSharedCheck_5290_;
goto v_resetjp_5184_;
}
v_resetjp_5184_:
{
lean_object* v___x_5187_; 
v___x_5187_ = l_LeanExport_dumpExpr(v_type_5154_, v_a_4909_, v_snd_5183_);
if (lean_obj_tag(v___x_5187_) == 0)
{
lean_object* v_a_5188_; lean_object* v_fst_5189_; lean_object* v_snd_5190_; lean_object* v___x_5192_; uint8_t v_isShared_5193_; uint8_t v_isSharedCheck_5281_; 
v_a_5188_ = lean_ctor_get(v___x_5187_, 0);
lean_inc(v_a_5188_);
lean_dec_ref_known(v___x_5187_, 1);
v_fst_5189_ = lean_ctor_get(v_a_5188_, 0);
v_snd_5190_ = lean_ctor_get(v_a_5188_, 1);
v_isSharedCheck_5281_ = !lean_is_exclusive(v_a_5188_);
if (v_isSharedCheck_5281_ == 0)
{
v___x_5192_ = v_a_5188_;
v_isShared_5193_ = v_isSharedCheck_5281_;
goto v_resetjp_5191_;
}
else
{
lean_inc(v_snd_5190_);
lean_inc(v_fst_5189_);
lean_dec(v_a_5188_);
v___x_5192_ = lean_box(0);
v_isShared_5193_ = v_isSharedCheck_5281_;
goto v_resetjp_5191_;
}
v_resetjp_5191_:
{
lean_object* v___x_5194_; 
v___x_5194_ = l_LeanExport_dumpExpr(v_value_5148_, v_a_4909_, v_snd_5190_);
if (lean_obj_tag(v___x_5194_) == 0)
{
lean_object* v_a_5195_; lean_object* v_fst_5196_; lean_object* v_snd_5197_; lean_object* v___x_5199_; uint8_t v_isShared_5200_; uint8_t v_isSharedCheck_5272_; 
v_a_5195_ = lean_ctor_get(v___x_5194_, 0);
lean_inc(v_a_5195_);
lean_dec_ref_known(v___x_5194_, 1);
v_fst_5196_ = lean_ctor_get(v_a_5195_, 0);
v_snd_5197_ = lean_ctor_get(v_a_5195_, 1);
v_isSharedCheck_5272_ = !lean_is_exclusive(v_a_5195_);
if (v_isSharedCheck_5272_ == 0)
{
v___x_5199_ = v_a_5195_;
v_isShared_5200_ = v_isSharedCheck_5272_;
goto v_resetjp_5198_;
}
else
{
lean_inc(v_snd_5197_);
lean_inc(v_fst_5196_);
lean_dec(v_a_5195_);
v___x_5199_ = lean_box(0);
v_isShared_5200_ = v_isSharedCheck_5272_;
goto v_resetjp_5198_;
}
v_resetjp_5198_:
{
lean_object* v___x_5201_; 
v___x_5201_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_5151_, v_a_4909_, v_snd_5197_);
if (lean_obj_tag(v___x_5201_) == 0)
{
lean_object* v_a_5202_; lean_object* v_fst_5203_; lean_object* v_snd_5204_; lean_object* v___x_5206_; uint8_t v_isShared_5207_; uint8_t v_isSharedCheck_5263_; 
v_a_5202_ = lean_ctor_get(v___x_5201_, 0);
lean_inc(v_a_5202_);
lean_dec_ref_known(v___x_5201_, 1);
v_fst_5203_ = lean_ctor_get(v_a_5202_, 0);
v_snd_5204_ = lean_ctor_get(v_a_5202_, 1);
v_isSharedCheck_5263_ = !lean_is_exclusive(v_a_5202_);
if (v_isSharedCheck_5263_ == 0)
{
v___x_5206_ = v_a_5202_;
v_isShared_5207_ = v_isSharedCheck_5263_;
goto v_resetjp_5205_;
}
else
{
lean_inc(v_snd_5204_);
lean_inc(v_fst_5203_);
lean_dec(v_a_5202_);
v___x_5206_ = lean_box(0);
v_isShared_5207_ = v_isSharedCheck_5263_;
goto v_resetjp_5205_;
}
v_resetjp_5205_:
{
lean_object* v___x_5208_; lean_object* v___x_5209_; lean_object* v___x_5210_; lean_object* v___x_5212_; 
v___x_5208_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__4));
v___x_5209_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_5210_ = l_Lean_JsonNumber_fromNat(v_fst_5175_);
if (v_isShared_5168_ == 0)
{
lean_ctor_set_tag(v___x_5167_, 2);
lean_ctor_set(v___x_5167_, 0, v___x_5210_);
v___x_5212_ = v___x_5167_;
goto v_reusejp_5211_;
}
else
{
lean_object* v_reuseFailAlloc_5262_; 
v_reuseFailAlloc_5262_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5262_, 0, v___x_5210_);
v___x_5212_ = v_reuseFailAlloc_5262_;
goto v_reusejp_5211_;
}
v_reusejp_5211_:
{
lean_object* v___x_5214_; 
if (v_isShared_5207_ == 0)
{
lean_ctor_set(v___x_5206_, 1, v___x_5212_);
lean_ctor_set(v___x_5206_, 0, v___x_5209_);
v___x_5214_ = v___x_5206_;
goto v_reusejp_5213_;
}
else
{
lean_object* v_reuseFailAlloc_5261_; 
v_reuseFailAlloc_5261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5261_, 0, v___x_5209_);
lean_ctor_set(v_reuseFailAlloc_5261_, 1, v___x_5212_);
v___x_5214_ = v_reuseFailAlloc_5261_;
goto v_reusejp_5213_;
}
v_reusejp_5213_:
{
lean_object* v___x_5215_; lean_object* v___x_5217_; 
v___x_5215_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_5200_ == 0)
{
lean_ctor_set(v___x_5199_, 1, v_fst_5182_);
lean_ctor_set(v___x_5199_, 0, v___x_5215_);
v___x_5217_ = v___x_5199_;
goto v_reusejp_5216_;
}
else
{
lean_object* v_reuseFailAlloc_5260_; 
v_reuseFailAlloc_5260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5260_, 0, v___x_5215_);
lean_ctor_set(v_reuseFailAlloc_5260_, 1, v_fst_5182_);
v___x_5217_ = v_reuseFailAlloc_5260_;
goto v_reusejp_5216_;
}
v_reusejp_5216_:
{
lean_object* v___x_5218_; lean_object* v___x_5219_; lean_object* v___x_5221_; 
v___x_5218_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_5219_ = l_Lean_JsonNumber_fromNat(v_fst_5189_);
if (v_isShared_5159_ == 0)
{
lean_ctor_set_tag(v___x_5158_, 2);
lean_ctor_set(v___x_5158_, 0, v___x_5219_);
v___x_5221_ = v___x_5158_;
goto v_reusejp_5220_;
}
else
{
lean_object* v_reuseFailAlloc_5259_; 
v_reuseFailAlloc_5259_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5259_, 0, v___x_5219_);
v___x_5221_ = v_reuseFailAlloc_5259_;
goto v_reusejp_5220_;
}
v_reusejp_5220_:
{
lean_object* v___x_5223_; 
if (v_isShared_5193_ == 0)
{
lean_ctor_set(v___x_5192_, 1, v___x_5221_);
lean_ctor_set(v___x_5192_, 0, v___x_5218_);
v___x_5223_ = v___x_5192_;
goto v_reusejp_5222_;
}
else
{
lean_object* v_reuseFailAlloc_5258_; 
v_reuseFailAlloc_5258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5258_, 0, v___x_5218_);
lean_ctor_set(v_reuseFailAlloc_5258_, 1, v___x_5221_);
v___x_5223_ = v_reuseFailAlloc_5258_;
goto v_reusejp_5222_;
}
v_reusejp_5222_:
{
lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5227_; 
v___x_5224_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_5225_ = l_Lean_JsonNumber_fromNat(v_fst_5196_);
if (v_isShared_5146_ == 0)
{
lean_ctor_set_tag(v___x_5145_, 2);
lean_ctor_set(v___x_5145_, 0, v___x_5225_);
v___x_5227_ = v___x_5145_;
goto v_reusejp_5226_;
}
else
{
lean_object* v_reuseFailAlloc_5257_; 
v_reuseFailAlloc_5257_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5257_, 0, v___x_5225_);
v___x_5227_ = v_reuseFailAlloc_5257_;
goto v_reusejp_5226_;
}
v_reusejp_5226_:
{
lean_object* v___x_5229_; 
if (v_isShared_5186_ == 0)
{
lean_ctor_set(v___x_5185_, 1, v___x_5227_);
lean_ctor_set(v___x_5185_, 0, v___x_5224_);
v___x_5229_ = v___x_5185_;
goto v_reusejp_5228_;
}
else
{
lean_object* v_reuseFailAlloc_5256_; 
v_reuseFailAlloc_5256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5256_, 0, v___x_5224_);
lean_ctor_set(v_reuseFailAlloc_5256_, 1, v___x_5227_);
v___x_5229_ = v_reuseFailAlloc_5256_;
goto v_reusejp_5228_;
}
v_reusejp_5228_:
{
lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5233_; 
v___x_5230_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__5));
v___x_5231_ = l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson(v_hints_5149_);
lean_dec(v_hints_5149_);
if (v_isShared_5179_ == 0)
{
lean_ctor_set(v___x_5178_, 1, v___x_5231_);
lean_ctor_set(v___x_5178_, 0, v___x_5230_);
v___x_5233_ = v___x_5178_;
goto v_reusejp_5232_;
}
else
{
lean_object* v_reuseFailAlloc_5255_; 
v_reuseFailAlloc_5255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5255_, 0, v___x_5230_);
lean_ctor_set(v_reuseFailAlloc_5255_, 1, v___x_5231_);
v___x_5233_ = v_reuseFailAlloc_5255_;
goto v_reusejp_5232_;
}
v_reusejp_5232_:
{
lean_object* v___x_5234_; lean_object* v___x_5235_; lean_object* v___x_5237_; 
v___x_5234_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__6));
v___x_5235_ = l___private_LeanExport_Basic_0__Lean_DefinitionSafety_toJson(v_safety_5150_);
if (v_isShared_5172_ == 0)
{
lean_ctor_set(v___x_5171_, 1, v___x_5235_);
lean_ctor_set(v___x_5171_, 0, v___x_5234_);
v___x_5237_ = v___x_5171_;
goto v_reusejp_5236_;
}
else
{
lean_object* v_reuseFailAlloc_5254_; 
v_reuseFailAlloc_5254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5254_, 0, v___x_5234_);
lean_ctor_set(v_reuseFailAlloc_5254_, 1, v___x_5235_);
v___x_5237_ = v_reuseFailAlloc_5254_;
goto v_reusejp_5236_;
}
v_reusejp_5236_:
{
lean_object* v___x_5238_; lean_object* v___x_5240_; 
v___x_5238_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_5163_ == 0)
{
lean_ctor_set(v___x_5162_, 1, v_fst_5203_);
lean_ctor_set(v___x_5162_, 0, v___x_5238_);
v___x_5240_ = v___x_5162_;
goto v_reusejp_5239_;
}
else
{
lean_object* v_reuseFailAlloc_5253_; 
v_reuseFailAlloc_5253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5253_, 0, v___x_5238_);
lean_ctor_set(v_reuseFailAlloc_5253_, 1, v_fst_5203_);
v___x_5240_ = v_reuseFailAlloc_5253_;
goto v_reusejp_5239_;
}
v_reusejp_5239_:
{
lean_object* v___x_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; lean_object* v___x_5246_; lean_object* v___x_5247_; lean_object* v___x_5248_; lean_object* v___x_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; lean_object* v___x_5252_; 
v___x_5241_ = lean_box(0);
v___x_5242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5242_, 0, v___x_5240_);
lean_ctor_set(v___x_5242_, 1, v___x_5241_);
v___x_5243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5243_, 0, v___x_5237_);
lean_ctor_set(v___x_5243_, 1, v___x_5242_);
v___x_5244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5244_, 0, v___x_5233_);
lean_ctor_set(v___x_5244_, 1, v___x_5243_);
v___x_5245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5245_, 0, v___x_5229_);
lean_ctor_set(v___x_5245_, 1, v___x_5244_);
v___x_5246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5246_, 0, v___x_5223_);
lean_ctor_set(v___x_5246_, 1, v___x_5245_);
v___x_5247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5247_, 0, v___x_5217_);
lean_ctor_set(v___x_5247_, 1, v___x_5246_);
v___x_5248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5248_, 0, v___x_5214_);
lean_ctor_set(v___x_5248_, 1, v___x_5247_);
v___x_5249_ = l_Lean_Json_mkObj(v___x_5248_);
lean_dec_ref_known(v___x_5248_, 2);
v___x_5250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5250_, 0, v___x_5208_);
lean_ctor_set(v___x_5250_, 1, v___x_5249_);
v___x_5251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5251_, 0, v___x_5250_);
lean_ctor_set(v___x_5251_, 1, v___x_5241_);
v___x_5252_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_5251_, v_snd_5204_);
lean_dec_ref_known(v___x_5251_, 2);
return v___x_5252_;
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
lean_object* v_a_5264_; lean_object* v___x_5266_; uint8_t v_isShared_5267_; uint8_t v_isSharedCheck_5271_; 
lean_del_object(v___x_5199_);
lean_dec(v_fst_5196_);
lean_del_object(v___x_5192_);
lean_dec(v_fst_5189_);
lean_del_object(v___x_5185_);
lean_dec(v_fst_5182_);
lean_del_object(v___x_5178_);
lean_dec(v_fst_5175_);
lean_del_object(v___x_5171_);
lean_del_object(v___x_5167_);
lean_del_object(v___x_5162_);
lean_del_object(v___x_5158_);
lean_dec(v_hints_5149_);
lean_del_object(v___x_5145_);
v_a_5264_ = lean_ctor_get(v___x_5201_, 0);
v_isSharedCheck_5271_ = !lean_is_exclusive(v___x_5201_);
if (v_isSharedCheck_5271_ == 0)
{
v___x_5266_ = v___x_5201_;
v_isShared_5267_ = v_isSharedCheck_5271_;
goto v_resetjp_5265_;
}
else
{
lean_inc(v_a_5264_);
lean_dec(v___x_5201_);
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
else
{
lean_object* v_a_5273_; lean_object* v___x_5275_; uint8_t v_isShared_5276_; uint8_t v_isSharedCheck_5280_; 
lean_del_object(v___x_5192_);
lean_dec(v_fst_5189_);
lean_del_object(v___x_5185_);
lean_dec(v_fst_5182_);
lean_del_object(v___x_5178_);
lean_dec(v_fst_5175_);
lean_del_object(v___x_5171_);
lean_del_object(v___x_5167_);
lean_del_object(v___x_5162_);
lean_del_object(v___x_5158_);
lean_dec(v_all_5151_);
lean_dec(v_hints_5149_);
lean_del_object(v___x_5145_);
v_a_5273_ = lean_ctor_get(v___x_5194_, 0);
v_isSharedCheck_5280_ = !lean_is_exclusive(v___x_5194_);
if (v_isSharedCheck_5280_ == 0)
{
v___x_5275_ = v___x_5194_;
v_isShared_5276_ = v_isSharedCheck_5280_;
goto v_resetjp_5274_;
}
else
{
lean_inc(v_a_5273_);
lean_dec(v___x_5194_);
v___x_5275_ = lean_box(0);
v_isShared_5276_ = v_isSharedCheck_5280_;
goto v_resetjp_5274_;
}
v_resetjp_5274_:
{
lean_object* v___x_5278_; 
if (v_isShared_5276_ == 0)
{
v___x_5278_ = v___x_5275_;
goto v_reusejp_5277_;
}
else
{
lean_object* v_reuseFailAlloc_5279_; 
v_reuseFailAlloc_5279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5279_, 0, v_a_5273_);
v___x_5278_ = v_reuseFailAlloc_5279_;
goto v_reusejp_5277_;
}
v_reusejp_5277_:
{
return v___x_5278_;
}
}
}
}
}
else
{
lean_object* v_a_5282_; lean_object* v___x_5284_; uint8_t v_isShared_5285_; uint8_t v_isSharedCheck_5289_; 
lean_del_object(v___x_5185_);
lean_dec(v_fst_5182_);
lean_del_object(v___x_5178_);
lean_dec(v_fst_5175_);
lean_del_object(v___x_5171_);
lean_del_object(v___x_5167_);
lean_del_object(v___x_5162_);
lean_del_object(v___x_5158_);
lean_dec(v_all_5151_);
lean_dec(v_hints_5149_);
lean_dec_ref(v_value_5148_);
lean_del_object(v___x_5145_);
v_a_5282_ = lean_ctor_get(v___x_5187_, 0);
v_isSharedCheck_5289_ = !lean_is_exclusive(v___x_5187_);
if (v_isSharedCheck_5289_ == 0)
{
v___x_5284_ = v___x_5187_;
v_isShared_5285_ = v_isSharedCheck_5289_;
goto v_resetjp_5283_;
}
else
{
lean_inc(v_a_5282_);
lean_dec(v___x_5187_);
v___x_5284_ = lean_box(0);
v_isShared_5285_ = v_isSharedCheck_5289_;
goto v_resetjp_5283_;
}
v_resetjp_5283_:
{
lean_object* v___x_5287_; 
if (v_isShared_5285_ == 0)
{
v___x_5287_ = v___x_5284_;
goto v_reusejp_5286_;
}
else
{
lean_object* v_reuseFailAlloc_5288_; 
v_reuseFailAlloc_5288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5288_, 0, v_a_5282_);
v___x_5287_ = v_reuseFailAlloc_5288_;
goto v_reusejp_5286_;
}
v_reusejp_5286_:
{
return v___x_5287_;
}
}
}
}
}
else
{
lean_object* v_a_5291_; lean_object* v___x_5293_; uint8_t v_isShared_5294_; uint8_t v_isSharedCheck_5298_; 
lean_del_object(v___x_5178_);
lean_dec(v_fst_5175_);
lean_del_object(v___x_5171_);
lean_del_object(v___x_5167_);
lean_del_object(v___x_5162_);
lean_del_object(v___x_5158_);
lean_dec_ref(v_type_5154_);
lean_dec(v_all_5151_);
lean_dec(v_hints_5149_);
lean_dec_ref(v_value_5148_);
lean_del_object(v___x_5145_);
v_a_5291_ = lean_ctor_get(v___x_5180_, 0);
v_isSharedCheck_5298_ = !lean_is_exclusive(v___x_5180_);
if (v_isSharedCheck_5298_ == 0)
{
v___x_5293_ = v___x_5180_;
v_isShared_5294_ = v_isSharedCheck_5298_;
goto v_resetjp_5292_;
}
else
{
lean_inc(v_a_5291_);
lean_dec(v___x_5180_);
v___x_5293_ = lean_box(0);
v_isShared_5294_ = v_isSharedCheck_5298_;
goto v_resetjp_5292_;
}
v_resetjp_5292_:
{
lean_object* v___x_5296_; 
if (v_isShared_5294_ == 0)
{
v___x_5296_ = v___x_5293_;
goto v_reusejp_5295_;
}
else
{
lean_object* v_reuseFailAlloc_5297_; 
v_reuseFailAlloc_5297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5297_, 0, v_a_5291_);
v___x_5296_ = v_reuseFailAlloc_5297_;
goto v_reusejp_5295_;
}
v_reusejp_5295_:
{
return v___x_5296_;
}
}
}
}
}
else
{
lean_object* v_a_5300_; lean_object* v___x_5302_; uint8_t v_isShared_5303_; uint8_t v_isSharedCheck_5307_; 
lean_del_object(v___x_5171_);
lean_del_object(v___x_5167_);
lean_del_object(v___x_5162_);
lean_del_object(v___x_5158_);
lean_dec_ref(v_type_5154_);
lean_dec(v_levelParams_5153_);
lean_dec(v_all_5151_);
lean_dec(v_hints_5149_);
lean_dec_ref(v_value_5148_);
lean_del_object(v___x_5145_);
v_a_5300_ = lean_ctor_get(v___x_5173_, 0);
v_isSharedCheck_5307_ = !lean_is_exclusive(v___x_5173_);
if (v_isSharedCheck_5307_ == 0)
{
v___x_5302_ = v___x_5173_;
v_isShared_5303_ = v_isSharedCheck_5307_;
goto v_resetjp_5301_;
}
else
{
lean_inc(v_a_5300_);
lean_dec(v___x_5173_);
v___x_5302_ = lean_box(0);
v_isShared_5303_ = v_isSharedCheck_5307_;
goto v_resetjp_5301_;
}
v_resetjp_5301_:
{
lean_object* v___x_5305_; 
if (v_isShared_5303_ == 0)
{
v___x_5305_ = v___x_5302_;
goto v_reusejp_5304_;
}
else
{
lean_object* v_reuseFailAlloc_5306_; 
v_reuseFailAlloc_5306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5306_, 0, v_a_5300_);
v___x_5305_ = v_reuseFailAlloc_5306_;
goto v_reusejp_5304_;
}
v_reusejp_5304_:
{
return v___x_5305_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_5162_);
lean_del_object(v___x_5158_);
lean_dec_ref(v_type_5154_);
lean_dec(v_levelParams_5153_);
lean_dec(v_name_5152_);
lean_dec(v_all_5151_);
lean_dec(v_hints_5149_);
lean_dec_ref(v_value_5148_);
lean_del_object(v___x_5145_);
return v___x_5164_;
}
}
}
}
else
{
lean_dec_ref(v_type_5154_);
lean_dec(v_levelParams_5153_);
lean_dec(v_name_5152_);
lean_dec(v_all_5151_);
lean_dec(v_hints_5149_);
lean_dec_ref(v_value_5148_);
lean_del_object(v___x_5145_);
return v___x_5155_;
}
}
}
case 2:
{
lean_object* v_val_5315_; lean_object* v___x_5317_; uint8_t v_isShared_5318_; uint8_t v_isSharedCheck_5476_; 
v_val_5315_ = lean_ctor_get(v_val_5020_, 0);
v_isSharedCheck_5476_ = !lean_is_exclusive(v_val_5020_);
if (v_isSharedCheck_5476_ == 0)
{
v___x_5317_ = v_val_5020_;
v_isShared_5318_ = v_isSharedCheck_5476_;
goto v_resetjp_5316_;
}
else
{
lean_inc(v_val_5315_);
lean_dec(v_val_5020_);
v___x_5317_ = lean_box(0);
v_isShared_5318_ = v_isSharedCheck_5476_;
goto v_resetjp_5316_;
}
v_resetjp_5316_:
{
lean_object* v_toConstantVal_5319_; lean_object* v_value_5320_; lean_object* v_all_5321_; lean_object* v_name_5322_; lean_object* v_levelParams_5323_; lean_object* v_type_5324_; lean_object* v___x_5325_; 
v_toConstantVal_5319_ = lean_ctor_get(v_val_5315_, 0);
lean_inc_ref(v_toConstantVal_5319_);
v_value_5320_ = lean_ctor_get(v_val_5315_, 1);
lean_inc_ref(v_value_5320_);
v_all_5321_ = lean_ctor_get(v_val_5315_, 2);
lean_inc(v_all_5321_);
lean_dec_ref(v_val_5315_);
v_name_5322_ = lean_ctor_get(v_toConstantVal_5319_, 0);
lean_inc(v_name_5322_);
v_levelParams_5323_ = lean_ctor_get(v_toConstantVal_5319_, 1);
lean_inc(v_levelParams_5323_);
v_type_5324_ = lean_ctor_get(v_toConstantVal_5319_, 2);
lean_inc_ref_n(v_type_5324_, 2);
lean_dec_ref(v_toConstantVal_5319_);
v___x_5325_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_5324_, v_a_4909_, v___x_5037_);
if (lean_obj_tag(v___x_5325_) == 0)
{
lean_object* v_a_5326_; lean_object* v___x_5328_; uint8_t v_isShared_5329_; uint8_t v_isSharedCheck_5475_; 
v_a_5326_ = lean_ctor_get(v___x_5325_, 0);
v_isSharedCheck_5475_ = !lean_is_exclusive(v___x_5325_);
if (v_isSharedCheck_5475_ == 0)
{
v___x_5328_ = v___x_5325_;
v_isShared_5329_ = v_isSharedCheck_5475_;
goto v_resetjp_5327_;
}
else
{
lean_inc(v_a_5326_);
lean_dec(v___x_5325_);
v___x_5328_ = lean_box(0);
v_isShared_5329_ = v_isSharedCheck_5475_;
goto v_resetjp_5327_;
}
v_resetjp_5327_:
{
lean_object* v_snd_5330_; lean_object* v___x_5332_; uint8_t v_isShared_5333_; uint8_t v_isSharedCheck_5473_; 
v_snd_5330_ = lean_ctor_get(v_a_5326_, 1);
v_isSharedCheck_5473_ = !lean_is_exclusive(v_a_5326_);
if (v_isSharedCheck_5473_ == 0)
{
lean_object* v_unused_5474_; 
v_unused_5474_ = lean_ctor_get(v_a_5326_, 0);
lean_dec(v_unused_5474_);
v___x_5332_ = v_a_5326_;
v_isShared_5333_ = v_isSharedCheck_5473_;
goto v_resetjp_5331_;
}
else
{
lean_inc(v_snd_5330_);
lean_dec(v_a_5326_);
v___x_5332_ = lean_box(0);
v_isShared_5333_ = v_isSharedCheck_5473_;
goto v_resetjp_5331_;
}
v_resetjp_5331_:
{
lean_object* v___x_5334_; 
lean_inc_ref(v_value_5320_);
v___x_5334_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_value_5320_, v_a_4909_, v_snd_5330_);
if (lean_obj_tag(v___x_5334_) == 0)
{
lean_object* v_a_5335_; lean_object* v___x_5337_; uint8_t v_isShared_5338_; uint8_t v_isSharedCheck_5472_; 
v_a_5335_ = lean_ctor_get(v___x_5334_, 0);
v_isSharedCheck_5472_ = !lean_is_exclusive(v___x_5334_);
if (v_isSharedCheck_5472_ == 0)
{
v___x_5337_ = v___x_5334_;
v_isShared_5338_ = v_isSharedCheck_5472_;
goto v_resetjp_5336_;
}
else
{
lean_inc(v_a_5335_);
lean_dec(v___x_5334_);
v___x_5337_ = lean_box(0);
v_isShared_5338_ = v_isSharedCheck_5472_;
goto v_resetjp_5336_;
}
v_resetjp_5336_:
{
lean_object* v_snd_5339_; lean_object* v___x_5341_; uint8_t v_isShared_5342_; uint8_t v_isSharedCheck_5470_; 
v_snd_5339_ = lean_ctor_get(v_a_5335_, 1);
v_isSharedCheck_5470_ = !lean_is_exclusive(v_a_5335_);
if (v_isSharedCheck_5470_ == 0)
{
lean_object* v_unused_5471_; 
v_unused_5471_ = lean_ctor_get(v_a_5335_, 0);
lean_dec(v_unused_5471_);
v___x_5341_ = v_a_5335_;
v_isShared_5342_ = v_isSharedCheck_5470_;
goto v_resetjp_5340_;
}
else
{
lean_inc(v_snd_5339_);
lean_dec(v_a_5335_);
v___x_5341_ = lean_box(0);
v_isShared_5342_ = v_isSharedCheck_5470_;
goto v_resetjp_5340_;
}
v_resetjp_5340_:
{
lean_object* v___x_5343_; 
v___x_5343_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_5322_, v_a_4909_, v_snd_5339_);
if (lean_obj_tag(v___x_5343_) == 0)
{
lean_object* v_a_5344_; lean_object* v_fst_5345_; lean_object* v_snd_5346_; lean_object* v___x_5348_; uint8_t v_isShared_5349_; uint8_t v_isSharedCheck_5461_; 
v_a_5344_ = lean_ctor_get(v___x_5343_, 0);
lean_inc(v_a_5344_);
lean_dec_ref_known(v___x_5343_, 1);
v_fst_5345_ = lean_ctor_get(v_a_5344_, 0);
v_snd_5346_ = lean_ctor_get(v_a_5344_, 1);
v_isSharedCheck_5461_ = !lean_is_exclusive(v_a_5344_);
if (v_isSharedCheck_5461_ == 0)
{
v___x_5348_ = v_a_5344_;
v_isShared_5349_ = v_isSharedCheck_5461_;
goto v_resetjp_5347_;
}
else
{
lean_inc(v_snd_5346_);
lean_inc(v_fst_5345_);
lean_dec(v_a_5344_);
v___x_5348_ = lean_box(0);
v_isShared_5349_ = v_isSharedCheck_5461_;
goto v_resetjp_5347_;
}
v_resetjp_5347_:
{
lean_object* v___x_5350_; 
v___x_5350_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_5323_, v_a_4909_, v_snd_5346_);
if (lean_obj_tag(v___x_5350_) == 0)
{
lean_object* v_a_5351_; lean_object* v_fst_5352_; lean_object* v_snd_5353_; lean_object* v___x_5355_; uint8_t v_isShared_5356_; uint8_t v_isSharedCheck_5452_; 
v_a_5351_ = lean_ctor_get(v___x_5350_, 0);
lean_inc(v_a_5351_);
lean_dec_ref_known(v___x_5350_, 1);
v_fst_5352_ = lean_ctor_get(v_a_5351_, 0);
v_snd_5353_ = lean_ctor_get(v_a_5351_, 1);
v_isSharedCheck_5452_ = !lean_is_exclusive(v_a_5351_);
if (v_isSharedCheck_5452_ == 0)
{
v___x_5355_ = v_a_5351_;
v_isShared_5356_ = v_isSharedCheck_5452_;
goto v_resetjp_5354_;
}
else
{
lean_inc(v_snd_5353_);
lean_inc(v_fst_5352_);
lean_dec(v_a_5351_);
v___x_5355_ = lean_box(0);
v_isShared_5356_ = v_isSharedCheck_5452_;
goto v_resetjp_5354_;
}
v_resetjp_5354_:
{
lean_object* v___x_5357_; 
v___x_5357_ = l_LeanExport_dumpExpr(v_type_5324_, v_a_4909_, v_snd_5353_);
if (lean_obj_tag(v___x_5357_) == 0)
{
lean_object* v_a_5358_; lean_object* v_fst_5359_; lean_object* v_snd_5360_; lean_object* v___x_5362_; uint8_t v_isShared_5363_; uint8_t v_isSharedCheck_5443_; 
v_a_5358_ = lean_ctor_get(v___x_5357_, 0);
lean_inc(v_a_5358_);
lean_dec_ref_known(v___x_5357_, 1);
v_fst_5359_ = lean_ctor_get(v_a_5358_, 0);
v_snd_5360_ = lean_ctor_get(v_a_5358_, 1);
v_isSharedCheck_5443_ = !lean_is_exclusive(v_a_5358_);
if (v_isSharedCheck_5443_ == 0)
{
v___x_5362_ = v_a_5358_;
v_isShared_5363_ = v_isSharedCheck_5443_;
goto v_resetjp_5361_;
}
else
{
lean_inc(v_snd_5360_);
lean_inc(v_fst_5359_);
lean_dec(v_a_5358_);
v___x_5362_ = lean_box(0);
v_isShared_5363_ = v_isSharedCheck_5443_;
goto v_resetjp_5361_;
}
v_resetjp_5361_:
{
lean_object* v___x_5364_; 
v___x_5364_ = l_LeanExport_dumpExpr(v_value_5320_, v_a_4909_, v_snd_5360_);
if (lean_obj_tag(v___x_5364_) == 0)
{
lean_object* v_a_5365_; lean_object* v_fst_5366_; lean_object* v_snd_5367_; lean_object* v___x_5369_; uint8_t v_isShared_5370_; uint8_t v_isSharedCheck_5434_; 
v_a_5365_ = lean_ctor_get(v___x_5364_, 0);
lean_inc(v_a_5365_);
lean_dec_ref_known(v___x_5364_, 1);
v_fst_5366_ = lean_ctor_get(v_a_5365_, 0);
v_snd_5367_ = lean_ctor_get(v_a_5365_, 1);
v_isSharedCheck_5434_ = !lean_is_exclusive(v_a_5365_);
if (v_isSharedCheck_5434_ == 0)
{
v___x_5369_ = v_a_5365_;
v_isShared_5370_ = v_isSharedCheck_5434_;
goto v_resetjp_5368_;
}
else
{
lean_inc(v_snd_5367_);
lean_inc(v_fst_5366_);
lean_dec(v_a_5365_);
v___x_5369_ = lean_box(0);
v_isShared_5370_ = v_isSharedCheck_5434_;
goto v_resetjp_5368_;
}
v_resetjp_5368_:
{
lean_object* v___x_5371_; 
v___x_5371_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_5321_, v_a_4909_, v_snd_5367_);
if (lean_obj_tag(v___x_5371_) == 0)
{
lean_object* v_a_5372_; lean_object* v_fst_5373_; lean_object* v_snd_5374_; lean_object* v___x_5376_; uint8_t v_isShared_5377_; uint8_t v_isSharedCheck_5425_; 
v_a_5372_ = lean_ctor_get(v___x_5371_, 0);
lean_inc(v_a_5372_);
lean_dec_ref_known(v___x_5371_, 1);
v_fst_5373_ = lean_ctor_get(v_a_5372_, 0);
v_snd_5374_ = lean_ctor_get(v_a_5372_, 1);
v_isSharedCheck_5425_ = !lean_is_exclusive(v_a_5372_);
if (v_isSharedCheck_5425_ == 0)
{
v___x_5376_ = v_a_5372_;
v_isShared_5377_ = v_isSharedCheck_5425_;
goto v_resetjp_5375_;
}
else
{
lean_inc(v_snd_5374_);
lean_inc(v_fst_5373_);
lean_dec(v_a_5372_);
v___x_5376_ = lean_box(0);
v_isShared_5377_ = v_isSharedCheck_5425_;
goto v_resetjp_5375_;
}
v_resetjp_5375_:
{
lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5382_; 
v___x_5378_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__7));
v___x_5379_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_5380_ = l_Lean_JsonNumber_fromNat(v_fst_5345_);
if (v_isShared_5338_ == 0)
{
lean_ctor_set_tag(v___x_5337_, 2);
lean_ctor_set(v___x_5337_, 0, v___x_5380_);
v___x_5382_ = v___x_5337_;
goto v_reusejp_5381_;
}
else
{
lean_object* v_reuseFailAlloc_5424_; 
v_reuseFailAlloc_5424_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5424_, 0, v___x_5380_);
v___x_5382_ = v_reuseFailAlloc_5424_;
goto v_reusejp_5381_;
}
v_reusejp_5381_:
{
lean_object* v___x_5384_; 
if (v_isShared_5377_ == 0)
{
lean_ctor_set(v___x_5376_, 1, v___x_5382_);
lean_ctor_set(v___x_5376_, 0, v___x_5379_);
v___x_5384_ = v___x_5376_;
goto v_reusejp_5383_;
}
else
{
lean_object* v_reuseFailAlloc_5423_; 
v_reuseFailAlloc_5423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5423_, 0, v___x_5379_);
lean_ctor_set(v_reuseFailAlloc_5423_, 1, v___x_5382_);
v___x_5384_ = v_reuseFailAlloc_5423_;
goto v_reusejp_5383_;
}
v_reusejp_5383_:
{
lean_object* v___x_5385_; lean_object* v___x_5387_; 
v___x_5385_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_5370_ == 0)
{
lean_ctor_set(v___x_5369_, 1, v_fst_5352_);
lean_ctor_set(v___x_5369_, 0, v___x_5385_);
v___x_5387_ = v___x_5369_;
goto v_reusejp_5386_;
}
else
{
lean_object* v_reuseFailAlloc_5422_; 
v_reuseFailAlloc_5422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5422_, 0, v___x_5385_);
lean_ctor_set(v_reuseFailAlloc_5422_, 1, v_fst_5352_);
v___x_5387_ = v_reuseFailAlloc_5422_;
goto v_reusejp_5386_;
}
v_reusejp_5386_:
{
lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5391_; 
v___x_5388_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_5389_ = l_Lean_JsonNumber_fromNat(v_fst_5359_);
if (v_isShared_5329_ == 0)
{
lean_ctor_set_tag(v___x_5328_, 2);
lean_ctor_set(v___x_5328_, 0, v___x_5389_);
v___x_5391_ = v___x_5328_;
goto v_reusejp_5390_;
}
else
{
lean_object* v_reuseFailAlloc_5421_; 
v_reuseFailAlloc_5421_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5421_, 0, v___x_5389_);
v___x_5391_ = v_reuseFailAlloc_5421_;
goto v_reusejp_5390_;
}
v_reusejp_5390_:
{
lean_object* v___x_5393_; 
if (v_isShared_5363_ == 0)
{
lean_ctor_set(v___x_5362_, 1, v___x_5391_);
lean_ctor_set(v___x_5362_, 0, v___x_5388_);
v___x_5393_ = v___x_5362_;
goto v_reusejp_5392_;
}
else
{
lean_object* v_reuseFailAlloc_5420_; 
v_reuseFailAlloc_5420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5420_, 0, v___x_5388_);
lean_ctor_set(v_reuseFailAlloc_5420_, 1, v___x_5391_);
v___x_5393_ = v_reuseFailAlloc_5420_;
goto v_reusejp_5392_;
}
v_reusejp_5392_:
{
lean_object* v___x_5394_; lean_object* v___x_5395_; lean_object* v___x_5397_; 
v___x_5394_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_5395_ = l_Lean_JsonNumber_fromNat(v_fst_5366_);
if (v_isShared_5318_ == 0)
{
lean_ctor_set(v___x_5317_, 0, v___x_5395_);
v___x_5397_ = v___x_5317_;
goto v_reusejp_5396_;
}
else
{
lean_object* v_reuseFailAlloc_5419_; 
v_reuseFailAlloc_5419_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5419_, 0, v___x_5395_);
v___x_5397_ = v_reuseFailAlloc_5419_;
goto v_reusejp_5396_;
}
v_reusejp_5396_:
{
lean_object* v___x_5399_; 
if (v_isShared_5356_ == 0)
{
lean_ctor_set(v___x_5355_, 1, v___x_5397_);
lean_ctor_set(v___x_5355_, 0, v___x_5394_);
v___x_5399_ = v___x_5355_;
goto v_reusejp_5398_;
}
else
{
lean_object* v_reuseFailAlloc_5418_; 
v_reuseFailAlloc_5418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5418_, 0, v___x_5394_);
lean_ctor_set(v_reuseFailAlloc_5418_, 1, v___x_5397_);
v___x_5399_ = v_reuseFailAlloc_5418_;
goto v_reusejp_5398_;
}
v_reusejp_5398_:
{
lean_object* v___x_5400_; lean_object* v___x_5402_; 
v___x_5400_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_5349_ == 0)
{
lean_ctor_set(v___x_5348_, 1, v_fst_5373_);
lean_ctor_set(v___x_5348_, 0, v___x_5400_);
v___x_5402_ = v___x_5348_;
goto v_reusejp_5401_;
}
else
{
lean_object* v_reuseFailAlloc_5417_; 
v_reuseFailAlloc_5417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5417_, 0, v___x_5400_);
lean_ctor_set(v_reuseFailAlloc_5417_, 1, v_fst_5373_);
v___x_5402_ = v_reuseFailAlloc_5417_;
goto v_reusejp_5401_;
}
v_reusejp_5401_:
{
lean_object* v___x_5403_; lean_object* v___x_5405_; 
v___x_5403_ = lean_box(0);
if (v_isShared_5333_ == 0)
{
lean_ctor_set_tag(v___x_5332_, 1);
lean_ctor_set(v___x_5332_, 1, v___x_5403_);
lean_ctor_set(v___x_5332_, 0, v___x_5402_);
v___x_5405_ = v___x_5332_;
goto v_reusejp_5404_;
}
else
{
lean_object* v_reuseFailAlloc_5416_; 
v_reuseFailAlloc_5416_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5416_, 0, v___x_5402_);
lean_ctor_set(v_reuseFailAlloc_5416_, 1, v___x_5403_);
v___x_5405_ = v_reuseFailAlloc_5416_;
goto v_reusejp_5404_;
}
v_reusejp_5404_:
{
lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; lean_object* v___x_5412_; 
v___x_5406_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5406_, 0, v___x_5399_);
lean_ctor_set(v___x_5406_, 1, v___x_5405_);
v___x_5407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5407_, 0, v___x_5393_);
lean_ctor_set(v___x_5407_, 1, v___x_5406_);
v___x_5408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5408_, 0, v___x_5387_);
lean_ctor_set(v___x_5408_, 1, v___x_5407_);
v___x_5409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5409_, 0, v___x_5384_);
lean_ctor_set(v___x_5409_, 1, v___x_5408_);
v___x_5410_ = l_Lean_Json_mkObj(v___x_5409_);
lean_dec_ref_known(v___x_5409_, 2);
if (v_isShared_5342_ == 0)
{
lean_ctor_set(v___x_5341_, 1, v___x_5410_);
lean_ctor_set(v___x_5341_, 0, v___x_5378_);
v___x_5412_ = v___x_5341_;
goto v_reusejp_5411_;
}
else
{
lean_object* v_reuseFailAlloc_5415_; 
v_reuseFailAlloc_5415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5415_, 0, v___x_5378_);
lean_ctor_set(v_reuseFailAlloc_5415_, 1, v___x_5410_);
v___x_5412_ = v_reuseFailAlloc_5415_;
goto v_reusejp_5411_;
}
v_reusejp_5411_:
{
lean_object* v___x_5413_; lean_object* v___x_5414_; 
v___x_5413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5413_, 0, v___x_5412_);
lean_ctor_set(v___x_5413_, 1, v___x_5403_);
v___x_5414_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_5413_, v_snd_5374_);
lean_dec_ref_known(v___x_5413_, 2);
return v___x_5414_;
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
lean_object* v_a_5426_; lean_object* v___x_5428_; uint8_t v_isShared_5429_; uint8_t v_isSharedCheck_5433_; 
lean_del_object(v___x_5369_);
lean_dec(v_fst_5366_);
lean_del_object(v___x_5362_);
lean_dec(v_fst_5359_);
lean_del_object(v___x_5355_);
lean_dec(v_fst_5352_);
lean_del_object(v___x_5348_);
lean_dec(v_fst_5345_);
lean_del_object(v___x_5341_);
lean_del_object(v___x_5337_);
lean_del_object(v___x_5332_);
lean_del_object(v___x_5328_);
lean_del_object(v___x_5317_);
v_a_5426_ = lean_ctor_get(v___x_5371_, 0);
v_isSharedCheck_5433_ = !lean_is_exclusive(v___x_5371_);
if (v_isSharedCheck_5433_ == 0)
{
v___x_5428_ = v___x_5371_;
v_isShared_5429_ = v_isSharedCheck_5433_;
goto v_resetjp_5427_;
}
else
{
lean_inc(v_a_5426_);
lean_dec(v___x_5371_);
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
else
{
lean_object* v_a_5435_; lean_object* v___x_5437_; uint8_t v_isShared_5438_; uint8_t v_isSharedCheck_5442_; 
lean_del_object(v___x_5362_);
lean_dec(v_fst_5359_);
lean_del_object(v___x_5355_);
lean_dec(v_fst_5352_);
lean_del_object(v___x_5348_);
lean_dec(v_fst_5345_);
lean_del_object(v___x_5341_);
lean_del_object(v___x_5337_);
lean_del_object(v___x_5332_);
lean_del_object(v___x_5328_);
lean_dec(v_all_5321_);
lean_del_object(v___x_5317_);
v_a_5435_ = lean_ctor_get(v___x_5364_, 0);
v_isSharedCheck_5442_ = !lean_is_exclusive(v___x_5364_);
if (v_isSharedCheck_5442_ == 0)
{
v___x_5437_ = v___x_5364_;
v_isShared_5438_ = v_isSharedCheck_5442_;
goto v_resetjp_5436_;
}
else
{
lean_inc(v_a_5435_);
lean_dec(v___x_5364_);
v___x_5437_ = lean_box(0);
v_isShared_5438_ = v_isSharedCheck_5442_;
goto v_resetjp_5436_;
}
v_resetjp_5436_:
{
lean_object* v___x_5440_; 
if (v_isShared_5438_ == 0)
{
v___x_5440_ = v___x_5437_;
goto v_reusejp_5439_;
}
else
{
lean_object* v_reuseFailAlloc_5441_; 
v_reuseFailAlloc_5441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5441_, 0, v_a_5435_);
v___x_5440_ = v_reuseFailAlloc_5441_;
goto v_reusejp_5439_;
}
v_reusejp_5439_:
{
return v___x_5440_;
}
}
}
}
}
else
{
lean_object* v_a_5444_; lean_object* v___x_5446_; uint8_t v_isShared_5447_; uint8_t v_isSharedCheck_5451_; 
lean_del_object(v___x_5355_);
lean_dec(v_fst_5352_);
lean_del_object(v___x_5348_);
lean_dec(v_fst_5345_);
lean_del_object(v___x_5341_);
lean_del_object(v___x_5337_);
lean_del_object(v___x_5332_);
lean_del_object(v___x_5328_);
lean_dec(v_all_5321_);
lean_dec_ref(v_value_5320_);
lean_del_object(v___x_5317_);
v_a_5444_ = lean_ctor_get(v___x_5357_, 0);
v_isSharedCheck_5451_ = !lean_is_exclusive(v___x_5357_);
if (v_isSharedCheck_5451_ == 0)
{
v___x_5446_ = v___x_5357_;
v_isShared_5447_ = v_isSharedCheck_5451_;
goto v_resetjp_5445_;
}
else
{
lean_inc(v_a_5444_);
lean_dec(v___x_5357_);
v___x_5446_ = lean_box(0);
v_isShared_5447_ = v_isSharedCheck_5451_;
goto v_resetjp_5445_;
}
v_resetjp_5445_:
{
lean_object* v___x_5449_; 
if (v_isShared_5447_ == 0)
{
v___x_5449_ = v___x_5446_;
goto v_reusejp_5448_;
}
else
{
lean_object* v_reuseFailAlloc_5450_; 
v_reuseFailAlloc_5450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5450_, 0, v_a_5444_);
v___x_5449_ = v_reuseFailAlloc_5450_;
goto v_reusejp_5448_;
}
v_reusejp_5448_:
{
return v___x_5449_;
}
}
}
}
}
else
{
lean_object* v_a_5453_; lean_object* v___x_5455_; uint8_t v_isShared_5456_; uint8_t v_isSharedCheck_5460_; 
lean_del_object(v___x_5348_);
lean_dec(v_fst_5345_);
lean_del_object(v___x_5341_);
lean_del_object(v___x_5337_);
lean_del_object(v___x_5332_);
lean_del_object(v___x_5328_);
lean_dec_ref(v_type_5324_);
lean_dec(v_all_5321_);
lean_dec_ref(v_value_5320_);
lean_del_object(v___x_5317_);
v_a_5453_ = lean_ctor_get(v___x_5350_, 0);
v_isSharedCheck_5460_ = !lean_is_exclusive(v___x_5350_);
if (v_isSharedCheck_5460_ == 0)
{
v___x_5455_ = v___x_5350_;
v_isShared_5456_ = v_isSharedCheck_5460_;
goto v_resetjp_5454_;
}
else
{
lean_inc(v_a_5453_);
lean_dec(v___x_5350_);
v___x_5455_ = lean_box(0);
v_isShared_5456_ = v_isSharedCheck_5460_;
goto v_resetjp_5454_;
}
v_resetjp_5454_:
{
lean_object* v___x_5458_; 
if (v_isShared_5456_ == 0)
{
v___x_5458_ = v___x_5455_;
goto v_reusejp_5457_;
}
else
{
lean_object* v_reuseFailAlloc_5459_; 
v_reuseFailAlloc_5459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5459_, 0, v_a_5453_);
v___x_5458_ = v_reuseFailAlloc_5459_;
goto v_reusejp_5457_;
}
v_reusejp_5457_:
{
return v___x_5458_;
}
}
}
}
}
else
{
lean_object* v_a_5462_; lean_object* v___x_5464_; uint8_t v_isShared_5465_; uint8_t v_isSharedCheck_5469_; 
lean_del_object(v___x_5341_);
lean_del_object(v___x_5337_);
lean_del_object(v___x_5332_);
lean_del_object(v___x_5328_);
lean_dec_ref(v_type_5324_);
lean_dec(v_levelParams_5323_);
lean_dec(v_all_5321_);
lean_dec_ref(v_value_5320_);
lean_del_object(v___x_5317_);
v_a_5462_ = lean_ctor_get(v___x_5343_, 0);
v_isSharedCheck_5469_ = !lean_is_exclusive(v___x_5343_);
if (v_isSharedCheck_5469_ == 0)
{
v___x_5464_ = v___x_5343_;
v_isShared_5465_ = v_isSharedCheck_5469_;
goto v_resetjp_5463_;
}
else
{
lean_inc(v_a_5462_);
lean_dec(v___x_5343_);
v___x_5464_ = lean_box(0);
v_isShared_5465_ = v_isSharedCheck_5469_;
goto v_resetjp_5463_;
}
v_resetjp_5463_:
{
lean_object* v___x_5467_; 
if (v_isShared_5465_ == 0)
{
v___x_5467_ = v___x_5464_;
goto v_reusejp_5466_;
}
else
{
lean_object* v_reuseFailAlloc_5468_; 
v_reuseFailAlloc_5468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5468_, 0, v_a_5462_);
v___x_5467_ = v_reuseFailAlloc_5468_;
goto v_reusejp_5466_;
}
v_reusejp_5466_:
{
return v___x_5467_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_5332_);
lean_del_object(v___x_5328_);
lean_dec_ref(v_type_5324_);
lean_dec(v_levelParams_5323_);
lean_dec(v_name_5322_);
lean_dec(v_all_5321_);
lean_dec_ref(v_value_5320_);
lean_del_object(v___x_5317_);
return v___x_5334_;
}
}
}
}
else
{
lean_dec_ref(v_type_5324_);
lean_dec(v_levelParams_5323_);
lean_dec(v_name_5322_);
lean_dec(v_all_5321_);
lean_dec_ref(v_value_5320_);
lean_del_object(v___x_5317_);
return v___x_5325_;
}
}
}
case 3:
{
lean_object* v_val_5477_; lean_object* v___x_5479_; uint8_t v_isShared_5480_; uint8_t v_isSharedCheck_5643_; 
v_val_5477_ = lean_ctor_get(v_val_5020_, 0);
v_isSharedCheck_5643_ = !lean_is_exclusive(v_val_5020_);
if (v_isSharedCheck_5643_ == 0)
{
v___x_5479_ = v_val_5020_;
v_isShared_5480_ = v_isSharedCheck_5643_;
goto v_resetjp_5478_;
}
else
{
lean_inc(v_val_5477_);
lean_dec(v_val_5020_);
v___x_5479_ = lean_box(0);
v_isShared_5480_ = v_isSharedCheck_5643_;
goto v_resetjp_5478_;
}
v_resetjp_5478_:
{
lean_object* v_toConstantVal_5481_; lean_object* v_value_5482_; uint8_t v_isUnsafe_5483_; lean_object* v_all_5484_; lean_object* v_name_5485_; lean_object* v_levelParams_5486_; lean_object* v_type_5487_; lean_object* v___x_5488_; 
v_toConstantVal_5481_ = lean_ctor_get(v_val_5477_, 0);
lean_inc_ref(v_toConstantVal_5481_);
v_value_5482_ = lean_ctor_get(v_val_5477_, 1);
lean_inc_ref(v_value_5482_);
v_isUnsafe_5483_ = lean_ctor_get_uint8(v_val_5477_, sizeof(void*)*3);
v_all_5484_ = lean_ctor_get(v_val_5477_, 2);
lean_inc(v_all_5484_);
lean_dec_ref(v_val_5477_);
v_name_5485_ = lean_ctor_get(v_toConstantVal_5481_, 0);
lean_inc(v_name_5485_);
v_levelParams_5486_ = lean_ctor_get(v_toConstantVal_5481_, 1);
lean_inc(v_levelParams_5486_);
v_type_5487_ = lean_ctor_get(v_toConstantVal_5481_, 2);
lean_inc_ref_n(v_type_5487_, 2);
lean_dec_ref(v_toConstantVal_5481_);
v___x_5488_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_type_5487_, v_a_4909_, v___x_5037_);
if (lean_obj_tag(v___x_5488_) == 0)
{
lean_object* v_a_5489_; lean_object* v___x_5491_; uint8_t v_isShared_5492_; uint8_t v_isSharedCheck_5642_; 
v_a_5489_ = lean_ctor_get(v___x_5488_, 0);
v_isSharedCheck_5642_ = !lean_is_exclusive(v___x_5488_);
if (v_isSharedCheck_5642_ == 0)
{
v___x_5491_ = v___x_5488_;
v_isShared_5492_ = v_isSharedCheck_5642_;
goto v_resetjp_5490_;
}
else
{
lean_inc(v_a_5489_);
lean_dec(v___x_5488_);
v___x_5491_ = lean_box(0);
v_isShared_5492_ = v_isSharedCheck_5642_;
goto v_resetjp_5490_;
}
v_resetjp_5490_:
{
lean_object* v_snd_5493_; lean_object* v___x_5495_; uint8_t v_isShared_5496_; uint8_t v_isSharedCheck_5640_; 
v_snd_5493_ = lean_ctor_get(v_a_5489_, 1);
v_isSharedCheck_5640_ = !lean_is_exclusive(v_a_5489_);
if (v_isSharedCheck_5640_ == 0)
{
lean_object* v_unused_5641_; 
v_unused_5641_ = lean_ctor_get(v_a_5489_, 0);
lean_dec(v_unused_5641_);
v___x_5495_ = v_a_5489_;
v_isShared_5496_ = v_isSharedCheck_5640_;
goto v_resetjp_5494_;
}
else
{
lean_inc(v_snd_5493_);
lean_dec(v_a_5489_);
v___x_5495_ = lean_box(0);
v_isShared_5496_ = v_isSharedCheck_5640_;
goto v_resetjp_5494_;
}
v_resetjp_5494_:
{
lean_object* v___x_5497_; 
lean_inc_ref(v_value_5482_);
v___x_5497_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_value_5482_, v_a_4909_, v_snd_5493_);
if (lean_obj_tag(v___x_5497_) == 0)
{
lean_object* v_a_5498_; lean_object* v___x_5500_; uint8_t v_isShared_5501_; uint8_t v_isSharedCheck_5639_; 
v_a_5498_ = lean_ctor_get(v___x_5497_, 0);
v_isSharedCheck_5639_ = !lean_is_exclusive(v___x_5497_);
if (v_isSharedCheck_5639_ == 0)
{
v___x_5500_ = v___x_5497_;
v_isShared_5501_ = v_isSharedCheck_5639_;
goto v_resetjp_5499_;
}
else
{
lean_inc(v_a_5498_);
lean_dec(v___x_5497_);
v___x_5500_ = lean_box(0);
v_isShared_5501_ = v_isSharedCheck_5639_;
goto v_resetjp_5499_;
}
v_resetjp_5499_:
{
lean_object* v_snd_5502_; lean_object* v___x_5504_; uint8_t v_isShared_5505_; uint8_t v_isSharedCheck_5637_; 
v_snd_5502_ = lean_ctor_get(v_a_5498_, 1);
v_isSharedCheck_5637_ = !lean_is_exclusive(v_a_5498_);
if (v_isSharedCheck_5637_ == 0)
{
lean_object* v_unused_5638_; 
v_unused_5638_ = lean_ctor_get(v_a_5498_, 0);
lean_dec(v_unused_5638_);
v___x_5504_ = v_a_5498_;
v_isShared_5505_ = v_isSharedCheck_5637_;
goto v_resetjp_5503_;
}
else
{
lean_inc(v_snd_5502_);
lean_dec(v_a_5498_);
v___x_5504_ = lean_box(0);
v_isShared_5505_ = v_isSharedCheck_5637_;
goto v_resetjp_5503_;
}
v_resetjp_5503_:
{
lean_object* v___x_5506_; 
v___x_5506_ = l___private_LeanExport_Basic_0__LeanExport_dumpName(v_name_5485_, v_a_4909_, v_snd_5502_);
if (lean_obj_tag(v___x_5506_) == 0)
{
lean_object* v_a_5507_; lean_object* v_fst_5508_; lean_object* v_snd_5509_; lean_object* v___x_5511_; uint8_t v_isShared_5512_; uint8_t v_isSharedCheck_5628_; 
v_a_5507_ = lean_ctor_get(v___x_5506_, 0);
lean_inc(v_a_5507_);
lean_dec_ref_known(v___x_5506_, 1);
v_fst_5508_ = lean_ctor_get(v_a_5507_, 0);
v_snd_5509_ = lean_ctor_get(v_a_5507_, 1);
v_isSharedCheck_5628_ = !lean_is_exclusive(v_a_5507_);
if (v_isSharedCheck_5628_ == 0)
{
v___x_5511_ = v_a_5507_;
v_isShared_5512_ = v_isSharedCheck_5628_;
goto v_resetjp_5510_;
}
else
{
lean_inc(v_snd_5509_);
lean_inc(v_fst_5508_);
lean_dec(v_a_5507_);
v___x_5511_ = lean_box(0);
v_isShared_5512_ = v_isSharedCheck_5628_;
goto v_resetjp_5510_;
}
v_resetjp_5510_:
{
lean_object* v___x_5513_; 
v___x_5513_ = l___private_LeanExport_Basic_0__LeanExport_dumpUparams(v_levelParams_5486_, v_a_4909_, v_snd_5509_);
if (lean_obj_tag(v___x_5513_) == 0)
{
lean_object* v_a_5514_; lean_object* v_fst_5515_; lean_object* v_snd_5516_; lean_object* v___x_5518_; uint8_t v_isShared_5519_; uint8_t v_isSharedCheck_5619_; 
v_a_5514_ = lean_ctor_get(v___x_5513_, 0);
lean_inc(v_a_5514_);
lean_dec_ref_known(v___x_5513_, 1);
v_fst_5515_ = lean_ctor_get(v_a_5514_, 0);
v_snd_5516_ = lean_ctor_get(v_a_5514_, 1);
v_isSharedCheck_5619_ = !lean_is_exclusive(v_a_5514_);
if (v_isSharedCheck_5619_ == 0)
{
v___x_5518_ = v_a_5514_;
v_isShared_5519_ = v_isSharedCheck_5619_;
goto v_resetjp_5517_;
}
else
{
lean_inc(v_snd_5516_);
lean_inc(v_fst_5515_);
lean_dec(v_a_5514_);
v___x_5518_ = lean_box(0);
v_isShared_5519_ = v_isSharedCheck_5619_;
goto v_resetjp_5517_;
}
v_resetjp_5517_:
{
lean_object* v___x_5520_; 
v___x_5520_ = l_LeanExport_dumpExpr(v_type_5487_, v_a_4909_, v_snd_5516_);
if (lean_obj_tag(v___x_5520_) == 0)
{
lean_object* v_a_5521_; lean_object* v_fst_5522_; lean_object* v_snd_5523_; lean_object* v___x_5525_; uint8_t v_isShared_5526_; uint8_t v_isSharedCheck_5610_; 
v_a_5521_ = lean_ctor_get(v___x_5520_, 0);
lean_inc(v_a_5521_);
lean_dec_ref_known(v___x_5520_, 1);
v_fst_5522_ = lean_ctor_get(v_a_5521_, 0);
v_snd_5523_ = lean_ctor_get(v_a_5521_, 1);
v_isSharedCheck_5610_ = !lean_is_exclusive(v_a_5521_);
if (v_isSharedCheck_5610_ == 0)
{
v___x_5525_ = v_a_5521_;
v_isShared_5526_ = v_isSharedCheck_5610_;
goto v_resetjp_5524_;
}
else
{
lean_inc(v_snd_5523_);
lean_inc(v_fst_5522_);
lean_dec(v_a_5521_);
v___x_5525_ = lean_box(0);
v_isShared_5526_ = v_isSharedCheck_5610_;
goto v_resetjp_5524_;
}
v_resetjp_5524_:
{
lean_object* v___x_5527_; 
v___x_5527_ = l_LeanExport_dumpExpr(v_value_5482_, v_a_4909_, v_snd_5523_);
if (lean_obj_tag(v___x_5527_) == 0)
{
lean_object* v_a_5528_; lean_object* v_fst_5529_; lean_object* v_snd_5530_; lean_object* v___x_5532_; uint8_t v_isShared_5533_; uint8_t v_isSharedCheck_5601_; 
v_a_5528_ = lean_ctor_get(v___x_5527_, 0);
lean_inc(v_a_5528_);
lean_dec_ref_known(v___x_5527_, 1);
v_fst_5529_ = lean_ctor_get(v_a_5528_, 0);
v_snd_5530_ = lean_ctor_get(v_a_5528_, 1);
v_isSharedCheck_5601_ = !lean_is_exclusive(v_a_5528_);
if (v_isSharedCheck_5601_ == 0)
{
v___x_5532_ = v_a_5528_;
v_isShared_5533_ = v_isSharedCheck_5601_;
goto v_resetjp_5531_;
}
else
{
lean_inc(v_snd_5530_);
lean_inc(v_fst_5529_);
lean_dec(v_a_5528_);
v___x_5532_ = lean_box(0);
v_isShared_5533_ = v_isSharedCheck_5601_;
goto v_resetjp_5531_;
}
v_resetjp_5531_:
{
lean_object* v___x_5534_; 
v___x_5534_ = l___private_LeanExport_Basic_0__LeanExport_dumpNames(v_all_5484_, v_a_4909_, v_snd_5530_);
if (lean_obj_tag(v___x_5534_) == 0)
{
lean_object* v_a_5535_; lean_object* v_fst_5536_; lean_object* v_snd_5537_; lean_object* v___x_5539_; uint8_t v_isShared_5540_; uint8_t v_isSharedCheck_5592_; 
v_a_5535_ = lean_ctor_get(v___x_5534_, 0);
lean_inc(v_a_5535_);
lean_dec_ref_known(v___x_5534_, 1);
v_fst_5536_ = lean_ctor_get(v_a_5535_, 0);
v_snd_5537_ = lean_ctor_get(v_a_5535_, 1);
v_isSharedCheck_5592_ = !lean_is_exclusive(v_a_5535_);
if (v_isSharedCheck_5592_ == 0)
{
v___x_5539_ = v_a_5535_;
v_isShared_5540_ = v_isSharedCheck_5592_;
goto v_resetjp_5538_;
}
else
{
lean_inc(v_snd_5537_);
lean_inc(v_fst_5536_);
lean_dec(v_a_5535_);
v___x_5539_ = lean_box(0);
v_isShared_5540_ = v_isSharedCheck_5592_;
goto v_resetjp_5538_;
}
v_resetjp_5538_:
{
lean_object* v___x_5541_; lean_object* v___x_5542_; lean_object* v___x_5543_; lean_object* v___x_5545_; 
v___x_5541_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_ReducibilityHints_toJson___closed__0));
v___x_5542_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__0));
v___x_5543_ = l_Lean_JsonNumber_fromNat(v_fst_5508_);
if (v_isShared_5501_ == 0)
{
lean_ctor_set_tag(v___x_5500_, 2);
lean_ctor_set(v___x_5500_, 0, v___x_5543_);
v___x_5545_ = v___x_5500_;
goto v_reusejp_5544_;
}
else
{
lean_object* v_reuseFailAlloc_5591_; 
v_reuseFailAlloc_5591_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5591_, 0, v___x_5543_);
v___x_5545_ = v_reuseFailAlloc_5591_;
goto v_reusejp_5544_;
}
v_reusejp_5544_:
{
lean_object* v___x_5547_; 
if (v_isShared_5540_ == 0)
{
lean_ctor_set(v___x_5539_, 1, v___x_5545_);
lean_ctor_set(v___x_5539_, 0, v___x_5542_);
v___x_5547_ = v___x_5539_;
goto v_reusejp_5546_;
}
else
{
lean_object* v_reuseFailAlloc_5590_; 
v_reuseFailAlloc_5590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5590_, 0, v___x_5542_);
lean_ctor_set(v_reuseFailAlloc_5590_, 1, v___x_5545_);
v___x_5547_ = v_reuseFailAlloc_5590_;
goto v_reusejp_5546_;
}
v_reusejp_5546_:
{
lean_object* v___x_5548_; lean_object* v___x_5550_; 
v___x_5548_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__1));
if (v_isShared_5533_ == 0)
{
lean_ctor_set(v___x_5532_, 1, v_fst_5515_);
lean_ctor_set(v___x_5532_, 0, v___x_5548_);
v___x_5550_ = v___x_5532_;
goto v_reusejp_5549_;
}
else
{
lean_object* v_reuseFailAlloc_5589_; 
v_reuseFailAlloc_5589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5589_, 0, v___x_5548_);
lean_ctor_set(v_reuseFailAlloc_5589_, 1, v_fst_5515_);
v___x_5550_ = v_reuseFailAlloc_5589_;
goto v_reusejp_5549_;
}
v_reusejp_5549_:
{
lean_object* v___x_5551_; lean_object* v___x_5552_; lean_object* v___x_5554_; 
v___x_5551_ = ((lean_object*)(l___private_LeanExport_Basic_0__Lean_QuotKind_toJson___closed__0));
v___x_5552_ = l_Lean_JsonNumber_fromNat(v_fst_5522_);
if (v_isShared_5492_ == 0)
{
lean_ctor_set_tag(v___x_5491_, 2);
lean_ctor_set(v___x_5491_, 0, v___x_5552_);
v___x_5554_ = v___x_5491_;
goto v_reusejp_5553_;
}
else
{
lean_object* v_reuseFailAlloc_5588_; 
v_reuseFailAlloc_5588_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5588_, 0, v___x_5552_);
v___x_5554_ = v_reuseFailAlloc_5588_;
goto v_reusejp_5553_;
}
v_reusejp_5553_:
{
lean_object* v___x_5556_; 
if (v_isShared_5526_ == 0)
{
lean_ctor_set(v___x_5525_, 1, v___x_5554_);
lean_ctor_set(v___x_5525_, 0, v___x_5551_);
v___x_5556_ = v___x_5525_;
goto v_reusejp_5555_;
}
else
{
lean_object* v_reuseFailAlloc_5587_; 
v_reuseFailAlloc_5587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5587_, 0, v___x_5551_);
lean_ctor_set(v_reuseFailAlloc_5587_, 1, v___x_5554_);
v___x_5556_ = v_reuseFailAlloc_5587_;
goto v_reusejp_5555_;
}
v_reusejp_5555_:
{
lean_object* v___x_5557_; lean_object* v___x_5558_; lean_object* v___x_5560_; 
v___x_5557_ = ((lean_object*)(l_LeanExport_dumpExprAux___closed__13));
v___x_5558_ = l_Lean_JsonNumber_fromNat(v_fst_5529_);
if (v_isShared_5480_ == 0)
{
lean_ctor_set_tag(v___x_5479_, 2);
lean_ctor_set(v___x_5479_, 0, v___x_5558_);
v___x_5560_ = v___x_5479_;
goto v_reusejp_5559_;
}
else
{
lean_object* v_reuseFailAlloc_5586_; 
v_reuseFailAlloc_5586_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5586_, 0, v___x_5558_);
v___x_5560_ = v_reuseFailAlloc_5586_;
goto v_reusejp_5559_;
}
v_reusejp_5559_:
{
lean_object* v___x_5562_; 
if (v_isShared_5519_ == 0)
{
lean_ctor_set(v___x_5518_, 1, v___x_5560_);
lean_ctor_set(v___x_5518_, 0, v___x_5557_);
v___x_5562_ = v___x_5518_;
goto v_reusejp_5561_;
}
else
{
lean_object* v_reuseFailAlloc_5585_; 
v_reuseFailAlloc_5585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5585_, 0, v___x_5557_);
lean_ctor_set(v_reuseFailAlloc_5585_, 1, v___x_5560_);
v___x_5562_ = v_reuseFailAlloc_5585_;
goto v_reusejp_5561_;
}
v_reusejp_5561_:
{
lean_object* v___x_5563_; lean_object* v___x_5565_; 
v___x_5563_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__1));
if (v_isShared_5512_ == 0)
{
lean_ctor_set(v___x_5511_, 1, v_fst_5536_);
lean_ctor_set(v___x_5511_, 0, v___x_5563_);
v___x_5565_ = v___x_5511_;
goto v_reusejp_5564_;
}
else
{
lean_object* v_reuseFailAlloc_5584_; 
v_reuseFailAlloc_5584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5584_, 0, v___x_5563_);
lean_ctor_set(v_reuseFailAlloc_5584_, 1, v_fst_5536_);
v___x_5565_ = v_reuseFailAlloc_5584_;
goto v_reusejp_5564_;
}
v_reusejp_5564_:
{
lean_object* v___x_5566_; lean_object* v___x_5567_; lean_object* v___x_5569_; 
v___x_5566_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___closed__6));
v___x_5567_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_5567_, 0, v_isUnsafe_5483_);
if (v_isShared_5505_ == 0)
{
lean_ctor_set(v___x_5504_, 1, v___x_5567_);
lean_ctor_set(v___x_5504_, 0, v___x_5566_);
v___x_5569_ = v___x_5504_;
goto v_reusejp_5568_;
}
else
{
lean_object* v_reuseFailAlloc_5583_; 
v_reuseFailAlloc_5583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5583_, 0, v___x_5566_);
lean_ctor_set(v_reuseFailAlloc_5583_, 1, v___x_5567_);
v___x_5569_ = v_reuseFailAlloc_5583_;
goto v_reusejp_5568_;
}
v_reusejp_5568_:
{
lean_object* v___x_5570_; lean_object* v___x_5571_; lean_object* v___x_5572_; lean_object* v___x_5573_; lean_object* v___x_5574_; lean_object* v___x_5575_; lean_object* v___x_5576_; lean_object* v___x_5577_; lean_object* v___x_5579_; 
v___x_5570_ = lean_box(0);
v___x_5571_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5571_, 0, v___x_5569_);
lean_ctor_set(v___x_5571_, 1, v___x_5570_);
v___x_5572_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5572_, 0, v___x_5565_);
lean_ctor_set(v___x_5572_, 1, v___x_5571_);
v___x_5573_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5573_, 0, v___x_5562_);
lean_ctor_set(v___x_5573_, 1, v___x_5572_);
v___x_5574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5574_, 0, v___x_5556_);
lean_ctor_set(v___x_5574_, 1, v___x_5573_);
v___x_5575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5575_, 0, v___x_5550_);
lean_ctor_set(v___x_5575_, 1, v___x_5574_);
v___x_5576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5576_, 0, v___x_5547_);
lean_ctor_set(v___x_5576_, 1, v___x_5575_);
v___x_5577_ = l_Lean_Json_mkObj(v___x_5576_);
lean_dec_ref_known(v___x_5576_, 2);
if (v_isShared_5496_ == 0)
{
lean_ctor_set(v___x_5495_, 1, v___x_5577_);
lean_ctor_set(v___x_5495_, 0, v___x_5541_);
v___x_5579_ = v___x_5495_;
goto v_reusejp_5578_;
}
else
{
lean_object* v_reuseFailAlloc_5582_; 
v_reuseFailAlloc_5582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5582_, 0, v___x_5541_);
lean_ctor_set(v_reuseFailAlloc_5582_, 1, v___x_5577_);
v___x_5579_ = v_reuseFailAlloc_5582_;
goto v_reusejp_5578_;
}
v_reusejp_5578_:
{
lean_object* v___x_5580_; lean_object* v___x_5581_; 
v___x_5580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5580_, 0, v___x_5579_);
lean_ctor_set(v___x_5580_, 1, v___x_5570_);
v___x_5581_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_5580_, v_snd_5537_);
lean_dec_ref_known(v___x_5580_, 2);
return v___x_5581_;
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
lean_object* v_a_5593_; lean_object* v___x_5595_; uint8_t v_isShared_5596_; uint8_t v_isSharedCheck_5600_; 
lean_del_object(v___x_5532_);
lean_dec(v_fst_5529_);
lean_del_object(v___x_5525_);
lean_dec(v_fst_5522_);
lean_del_object(v___x_5518_);
lean_dec(v_fst_5515_);
lean_del_object(v___x_5511_);
lean_dec(v_fst_5508_);
lean_del_object(v___x_5504_);
lean_del_object(v___x_5500_);
lean_del_object(v___x_5495_);
lean_del_object(v___x_5491_);
lean_del_object(v___x_5479_);
v_a_5593_ = lean_ctor_get(v___x_5534_, 0);
v_isSharedCheck_5600_ = !lean_is_exclusive(v___x_5534_);
if (v_isSharedCheck_5600_ == 0)
{
v___x_5595_ = v___x_5534_;
v_isShared_5596_ = v_isSharedCheck_5600_;
goto v_resetjp_5594_;
}
else
{
lean_inc(v_a_5593_);
lean_dec(v___x_5534_);
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
else
{
lean_object* v_a_5602_; lean_object* v___x_5604_; uint8_t v_isShared_5605_; uint8_t v_isSharedCheck_5609_; 
lean_del_object(v___x_5525_);
lean_dec(v_fst_5522_);
lean_del_object(v___x_5518_);
lean_dec(v_fst_5515_);
lean_del_object(v___x_5511_);
lean_dec(v_fst_5508_);
lean_del_object(v___x_5504_);
lean_del_object(v___x_5500_);
lean_del_object(v___x_5495_);
lean_del_object(v___x_5491_);
lean_dec(v_all_5484_);
lean_del_object(v___x_5479_);
v_a_5602_ = lean_ctor_get(v___x_5527_, 0);
v_isSharedCheck_5609_ = !lean_is_exclusive(v___x_5527_);
if (v_isSharedCheck_5609_ == 0)
{
v___x_5604_ = v___x_5527_;
v_isShared_5605_ = v_isSharedCheck_5609_;
goto v_resetjp_5603_;
}
else
{
lean_inc(v_a_5602_);
lean_dec(v___x_5527_);
v___x_5604_ = lean_box(0);
v_isShared_5605_ = v_isSharedCheck_5609_;
goto v_resetjp_5603_;
}
v_resetjp_5603_:
{
lean_object* v___x_5607_; 
if (v_isShared_5605_ == 0)
{
v___x_5607_ = v___x_5604_;
goto v_reusejp_5606_;
}
else
{
lean_object* v_reuseFailAlloc_5608_; 
v_reuseFailAlloc_5608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5608_, 0, v_a_5602_);
v___x_5607_ = v_reuseFailAlloc_5608_;
goto v_reusejp_5606_;
}
v_reusejp_5606_:
{
return v___x_5607_;
}
}
}
}
}
else
{
lean_object* v_a_5611_; lean_object* v___x_5613_; uint8_t v_isShared_5614_; uint8_t v_isSharedCheck_5618_; 
lean_del_object(v___x_5518_);
lean_dec(v_fst_5515_);
lean_del_object(v___x_5511_);
lean_dec(v_fst_5508_);
lean_del_object(v___x_5504_);
lean_del_object(v___x_5500_);
lean_del_object(v___x_5495_);
lean_del_object(v___x_5491_);
lean_dec(v_all_5484_);
lean_dec_ref(v_value_5482_);
lean_del_object(v___x_5479_);
v_a_5611_ = lean_ctor_get(v___x_5520_, 0);
v_isSharedCheck_5618_ = !lean_is_exclusive(v___x_5520_);
if (v_isSharedCheck_5618_ == 0)
{
v___x_5613_ = v___x_5520_;
v_isShared_5614_ = v_isSharedCheck_5618_;
goto v_resetjp_5612_;
}
else
{
lean_inc(v_a_5611_);
lean_dec(v___x_5520_);
v___x_5613_ = lean_box(0);
v_isShared_5614_ = v_isSharedCheck_5618_;
goto v_resetjp_5612_;
}
v_resetjp_5612_:
{
lean_object* v___x_5616_; 
if (v_isShared_5614_ == 0)
{
v___x_5616_ = v___x_5613_;
goto v_reusejp_5615_;
}
else
{
lean_object* v_reuseFailAlloc_5617_; 
v_reuseFailAlloc_5617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5617_, 0, v_a_5611_);
v___x_5616_ = v_reuseFailAlloc_5617_;
goto v_reusejp_5615_;
}
v_reusejp_5615_:
{
return v___x_5616_;
}
}
}
}
}
else
{
lean_object* v_a_5620_; lean_object* v___x_5622_; uint8_t v_isShared_5623_; uint8_t v_isSharedCheck_5627_; 
lean_del_object(v___x_5511_);
lean_dec(v_fst_5508_);
lean_del_object(v___x_5504_);
lean_del_object(v___x_5500_);
lean_del_object(v___x_5495_);
lean_del_object(v___x_5491_);
lean_dec_ref(v_type_5487_);
lean_dec(v_all_5484_);
lean_dec_ref(v_value_5482_);
lean_del_object(v___x_5479_);
v_a_5620_ = lean_ctor_get(v___x_5513_, 0);
v_isSharedCheck_5627_ = !lean_is_exclusive(v___x_5513_);
if (v_isSharedCheck_5627_ == 0)
{
v___x_5622_ = v___x_5513_;
v_isShared_5623_ = v_isSharedCheck_5627_;
goto v_resetjp_5621_;
}
else
{
lean_inc(v_a_5620_);
lean_dec(v___x_5513_);
v___x_5622_ = lean_box(0);
v_isShared_5623_ = v_isSharedCheck_5627_;
goto v_resetjp_5621_;
}
v_resetjp_5621_:
{
lean_object* v___x_5625_; 
if (v_isShared_5623_ == 0)
{
v___x_5625_ = v___x_5622_;
goto v_reusejp_5624_;
}
else
{
lean_object* v_reuseFailAlloc_5626_; 
v_reuseFailAlloc_5626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5626_, 0, v_a_5620_);
v___x_5625_ = v_reuseFailAlloc_5626_;
goto v_reusejp_5624_;
}
v_reusejp_5624_:
{
return v___x_5625_;
}
}
}
}
}
else
{
lean_object* v_a_5629_; lean_object* v___x_5631_; uint8_t v_isShared_5632_; uint8_t v_isSharedCheck_5636_; 
lean_del_object(v___x_5504_);
lean_del_object(v___x_5500_);
lean_del_object(v___x_5495_);
lean_del_object(v___x_5491_);
lean_dec_ref(v_type_5487_);
lean_dec(v_levelParams_5486_);
lean_dec(v_all_5484_);
lean_dec_ref(v_value_5482_);
lean_del_object(v___x_5479_);
v_a_5629_ = lean_ctor_get(v___x_5506_, 0);
v_isSharedCheck_5636_ = !lean_is_exclusive(v___x_5506_);
if (v_isSharedCheck_5636_ == 0)
{
v___x_5631_ = v___x_5506_;
v_isShared_5632_ = v_isSharedCheck_5636_;
goto v_resetjp_5630_;
}
else
{
lean_inc(v_a_5629_);
lean_dec(v___x_5506_);
v___x_5631_ = lean_box(0);
v_isShared_5632_ = v_isSharedCheck_5636_;
goto v_resetjp_5630_;
}
v_resetjp_5630_:
{
lean_object* v___x_5634_; 
if (v_isShared_5632_ == 0)
{
v___x_5634_ = v___x_5631_;
goto v_reusejp_5633_;
}
else
{
lean_object* v_reuseFailAlloc_5635_; 
v_reuseFailAlloc_5635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5635_, 0, v_a_5629_);
v___x_5634_ = v_reuseFailAlloc_5635_;
goto v_reusejp_5633_;
}
v_reusejp_5633_:
{
return v___x_5634_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_5495_);
lean_del_object(v___x_5491_);
lean_dec_ref(v_type_5487_);
lean_dec(v_levelParams_5486_);
lean_dec(v_name_5485_);
lean_dec(v_all_5484_);
lean_dec_ref(v_value_5482_);
lean_del_object(v___x_5479_);
return v___x_5497_;
}
}
}
}
else
{
lean_dec_ref(v_type_5487_);
lean_dec(v_levelParams_5486_);
lean_dec(v_name_5485_);
lean_dec(v_all_5484_);
lean_dec_ref(v_value_5482_);
lean_del_object(v___x_5479_);
return v___x_5488_;
}
}
}
case 4:
{
lean_object* v___x_5644_; lean_object* v___x_5645_; 
lean_dec_ref_known(v_val_5020_, 1);
v___x_5644_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__9));
v___x_5645_ = l_LeanExport_dumpConstant(v___x_5644_, v_a_4909_, v___x_5037_);
if (lean_obj_tag(v___x_5645_) == 0)
{
lean_object* v_a_5646_; lean_object* v_snd_5647_; lean_object* v___x_5648_; lean_object* v___x_5649_; lean_object* v___x_5650_; lean_object* v___x_5651_; 
v_a_5646_ = lean_ctor_get(v___x_5645_, 0);
lean_inc(v_a_5646_);
lean_dec_ref_known(v___x_5645_, 1);
v_snd_5647_ = lean_ctor_get(v_a_5646_, 1);
lean_inc(v_snd_5647_);
lean_dec(v_a_5646_);
v___x_5648_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__19));
v___x_5649_ = lean_box(0);
v___x_5650_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__0));
v___x_5651_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(v___x_5031_, v___x_5648_, v___x_5650_, v_a_4909_, v_snd_5647_);
if (lean_obj_tag(v___x_5651_) == 0)
{
lean_object* v_a_5652_; lean_object* v___x_5654_; uint8_t v_isShared_5655_; uint8_t v_isSharedCheck_5678_; 
v_a_5652_ = lean_ctor_get(v___x_5651_, 0);
v_isSharedCheck_5678_ = !lean_is_exclusive(v___x_5651_);
if (v_isSharedCheck_5678_ == 0)
{
v___x_5654_ = v___x_5651_;
v_isShared_5655_ = v_isSharedCheck_5678_;
goto v_resetjp_5653_;
}
else
{
lean_inc(v_a_5652_);
lean_dec(v___x_5651_);
v___x_5654_ = lean_box(0);
v_isShared_5655_ = v_isSharedCheck_5678_;
goto v_resetjp_5653_;
}
v_resetjp_5653_:
{
lean_object* v_fst_5656_; lean_object* v_fst_5657_; lean_object* v___x_5659_; uint8_t v_isShared_5660_; uint8_t v_isSharedCheck_5676_; 
v_fst_5656_ = lean_ctor_get(v_a_5652_, 0);
lean_inc(v_fst_5656_);
v_fst_5657_ = lean_ctor_get(v_fst_5656_, 0);
v_isSharedCheck_5676_ = !lean_is_exclusive(v_fst_5656_);
if (v_isSharedCheck_5676_ == 0)
{
lean_object* v_unused_5677_; 
v_unused_5677_ = lean_ctor_get(v_fst_5656_, 1);
lean_dec(v_unused_5677_);
v___x_5659_ = v_fst_5656_;
v_isShared_5660_ = v_isSharedCheck_5676_;
goto v_resetjp_5658_;
}
else
{
lean_inc(v_fst_5657_);
lean_dec(v_fst_5656_);
v___x_5659_ = lean_box(0);
v_isShared_5660_ = v_isSharedCheck_5676_;
goto v_resetjp_5658_;
}
v_resetjp_5658_:
{
if (lean_obj_tag(v_fst_5657_) == 0)
{
lean_object* v_snd_5661_; lean_object* v___x_5663_; 
v_snd_5661_ = lean_ctor_get(v_a_5652_, 1);
lean_inc(v_snd_5661_);
lean_dec(v_a_5652_);
if (v_isShared_5660_ == 0)
{
lean_ctor_set(v___x_5659_, 1, v_snd_5661_);
lean_ctor_set(v___x_5659_, 0, v___x_5649_);
v___x_5663_ = v___x_5659_;
goto v_reusejp_5662_;
}
else
{
lean_object* v_reuseFailAlloc_5667_; 
v_reuseFailAlloc_5667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5667_, 0, v___x_5649_);
lean_ctor_set(v_reuseFailAlloc_5667_, 1, v_snd_5661_);
v___x_5663_ = v_reuseFailAlloc_5667_;
goto v_reusejp_5662_;
}
v_reusejp_5662_:
{
lean_object* v___x_5665_; 
if (v_isShared_5655_ == 0)
{
lean_ctor_set(v___x_5654_, 0, v___x_5663_);
v___x_5665_ = v___x_5654_;
goto v_reusejp_5664_;
}
else
{
lean_object* v_reuseFailAlloc_5666_; 
v_reuseFailAlloc_5666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5666_, 0, v___x_5663_);
v___x_5665_ = v_reuseFailAlloc_5666_;
goto v_reusejp_5664_;
}
v_reusejp_5664_:
{
return v___x_5665_;
}
}
}
else
{
lean_object* v_snd_5668_; lean_object* v_val_5669_; lean_object* v___x_5671_; 
v_snd_5668_ = lean_ctor_get(v_a_5652_, 1);
lean_inc(v_snd_5668_);
lean_dec(v_a_5652_);
v_val_5669_ = lean_ctor_get(v_fst_5657_, 0);
lean_inc(v_val_5669_);
lean_dec_ref_known(v_fst_5657_, 1);
if (v_isShared_5660_ == 0)
{
lean_ctor_set(v___x_5659_, 1, v_snd_5668_);
lean_ctor_set(v___x_5659_, 0, v_val_5669_);
v___x_5671_ = v___x_5659_;
goto v_reusejp_5670_;
}
else
{
lean_object* v_reuseFailAlloc_5675_; 
v_reuseFailAlloc_5675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5675_, 0, v_val_5669_);
lean_ctor_set(v_reuseFailAlloc_5675_, 1, v_snd_5668_);
v___x_5671_ = v_reuseFailAlloc_5675_;
goto v_reusejp_5670_;
}
v_reusejp_5670_:
{
lean_object* v___x_5673_; 
if (v_isShared_5655_ == 0)
{
lean_ctor_set(v___x_5654_, 0, v___x_5671_);
v___x_5673_ = v___x_5654_;
goto v_reusejp_5672_;
}
else
{
lean_object* v_reuseFailAlloc_5674_; 
v_reuseFailAlloc_5674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5674_, 0, v___x_5671_);
v___x_5673_ = v_reuseFailAlloc_5674_;
goto v_reusejp_5672_;
}
v_reusejp_5672_:
{
return v___x_5673_;
}
}
}
}
}
}
else
{
lean_object* v_a_5679_; lean_object* v___x_5681_; uint8_t v_isShared_5682_; uint8_t v_isSharedCheck_5686_; 
v_a_5679_ = lean_ctor_get(v___x_5651_, 0);
v_isSharedCheck_5686_ = !lean_is_exclusive(v___x_5651_);
if (v_isSharedCheck_5686_ == 0)
{
v___x_5681_ = v___x_5651_;
v_isShared_5682_ = v_isSharedCheck_5686_;
goto v_resetjp_5680_;
}
else
{
lean_inc(v_a_5679_);
lean_dec(v___x_5651_);
v___x_5681_ = lean_box(0);
v_isShared_5682_ = v_isSharedCheck_5686_;
goto v_resetjp_5680_;
}
v_resetjp_5680_:
{
lean_object* v___x_5684_; 
if (v_isShared_5682_ == 0)
{
v___x_5684_ = v___x_5681_;
goto v_reusejp_5683_;
}
else
{
lean_object* v_reuseFailAlloc_5685_; 
v_reuseFailAlloc_5685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5685_, 0, v_a_5679_);
v___x_5684_ = v_reuseFailAlloc_5685_;
goto v_reusejp_5683_;
}
v_reusejp_5683_:
{
return v___x_5684_;
}
}
}
}
else
{
return v___x_5645_;
}
}
case 5:
{
lean_object* v_val_5687_; lean_object* v_all_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___x_5691_; 
v_val_5687_ = lean_ctor_get(v_val_5020_, 0);
lean_inc_ref(v_val_5687_);
lean_dec_ref_known(v_val_5020_, 1);
v_all_5688_ = lean_ctor_get(v_val_5687_, 3);
lean_inc(v_all_5688_);
v___x_5689_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__20));
v___x_5690_ = lean_obj_once(&l_LeanExport_dumpConstant___closed__22, &l_LeanExport_dumpConstant___closed__22_once, _init_l_LeanExport_dumpConstant___closed__22);
v___x_5691_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(v___x_5031_, v_val_5687_, v_all_5688_, v___x_5690_, v_a_4909_, v___x_5037_);
lean_dec(v_all_5688_);
lean_dec_ref(v_val_5687_);
if (lean_obj_tag(v___x_5691_) == 0)
{
lean_object* v_a_5692_; lean_object* v_fst_5693_; lean_object* v_snd_5694_; lean_object* v_snd_5695_; lean_object* v_fst_5696_; lean_object* v_fst_5697_; lean_object* v_snd_5698_; lean_object* v___x_5699_; size_t v_sz_5700_; size_t v___x_5701_; lean_object* v___x_5702_; 
v_a_5692_ = lean_ctor_get(v___x_5691_, 0);
lean_inc(v_a_5692_);
lean_dec_ref_known(v___x_5691_, 1);
v_fst_5693_ = lean_ctor_get(v_a_5692_, 0);
lean_inc(v_fst_5693_);
v_snd_5694_ = lean_ctor_get(v_fst_5693_, 1);
lean_inc(v_snd_5694_);
v_snd_5695_ = lean_ctor_get(v_a_5692_, 1);
lean_inc(v_snd_5695_);
lean_dec(v_a_5692_);
v_fst_5696_ = lean_ctor_get(v_fst_5693_, 0);
lean_inc(v_fst_5696_);
lean_dec(v_fst_5693_);
v_fst_5697_ = lean_ctor_get(v_snd_5694_, 0);
lean_inc(v_fst_5697_);
v_snd_5698_ = lean_ctor_get(v_snd_5694_, 1);
lean_inc(v_snd_5698_);
lean_dec(v_snd_5694_);
v___x_5699_ = lean_box(0);
v_sz_5700_ = lean_array_size(v_fst_5697_);
v___x_5701_ = ((size_t)0ULL);
v___x_5702_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__20(v_fst_5697_, v_sz_5700_, v___x_5701_, v___x_5699_, v_a_4909_, v_snd_5695_);
if (lean_obj_tag(v___x_5702_) == 0)
{
lean_object* v_a_5703_; lean_object* v_snd_5704_; lean_object* v___x_5705_; 
v_a_5703_ = lean_ctor_get(v___x_5702_, 0);
lean_inc(v_a_5703_);
lean_dec_ref_known(v___x_5702_, 1);
v_snd_5704_ = lean_ctor_get(v_a_5703_, 1);
lean_inc(v_snd_5704_);
lean_dec(v_a_5703_);
v___x_5705_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00LeanExport_dumpConstant_spec__21(v___x_5031_, v___x_5689_, v_snd_5698_, v_a_4909_, v_snd_5704_);
if (lean_obj_tag(v___x_5705_) == 0)
{
lean_object* v_a_5706_; lean_object* v_fst_5707_; lean_object* v_snd_5708_; lean_object* v_a_5709_; 
v_a_5706_ = lean_ctor_get(v___x_5705_, 0);
lean_inc(v_a_5706_);
lean_dec_ref_known(v___x_5705_, 1);
v_fst_5707_ = lean_ctor_get(v_a_5706_, 0);
lean_inc(v_fst_5707_);
v_snd_5708_ = lean_ctor_get(v_a_5706_, 1);
lean_inc(v_snd_5708_);
lean_dec(v_a_5706_);
v_a_5709_ = lean_ctor_get(v_fst_5707_, 0);
lean_inc(v_a_5709_);
lean_dec(v_fst_5707_);
v___y_4917_ = v___x_5699_;
v___y_4918_ = v_fst_5696_;
v___y_4919_ = v_fst_5697_;
v_fst_4920_ = v_a_5709_;
v_snd_4921_ = v_snd_5708_;
goto v___jp_4916_;
}
else
{
lean_object* v_a_5710_; lean_object* v___x_5712_; uint8_t v_isShared_5713_; uint8_t v_isSharedCheck_5717_; 
lean_dec(v_fst_5697_);
lean_dec(v_fst_5696_);
v_a_5710_ = lean_ctor_get(v___x_5705_, 0);
v_isSharedCheck_5717_ = !lean_is_exclusive(v___x_5705_);
if (v_isSharedCheck_5717_ == 0)
{
v___x_5712_ = v___x_5705_;
v_isShared_5713_ = v_isSharedCheck_5717_;
goto v_resetjp_5711_;
}
else
{
lean_inc(v_a_5710_);
lean_dec(v___x_5705_);
v___x_5712_ = lean_box(0);
v_isShared_5713_ = v_isSharedCheck_5717_;
goto v_resetjp_5711_;
}
v_resetjp_5711_:
{
lean_object* v___x_5715_; 
if (v_isShared_5713_ == 0)
{
v___x_5715_ = v___x_5712_;
goto v_reusejp_5714_;
}
else
{
lean_object* v_reuseFailAlloc_5716_; 
v_reuseFailAlloc_5716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5716_, 0, v_a_5710_);
v___x_5715_ = v_reuseFailAlloc_5716_;
goto v_reusejp_5714_;
}
v_reusejp_5714_:
{
return v___x_5715_;
}
}
}
}
else
{
lean_dec(v_snd_5698_);
lean_dec(v_fst_5697_);
lean_dec(v_fst_5696_);
return v___x_5702_;
}
}
else
{
lean_object* v_a_5718_; lean_object* v___x_5720_; uint8_t v_isShared_5721_; uint8_t v_isSharedCheck_5725_; 
v_a_5718_ = lean_ctor_get(v___x_5691_, 0);
v_isSharedCheck_5725_ = !lean_is_exclusive(v___x_5691_);
if (v_isSharedCheck_5725_ == 0)
{
v___x_5720_ = v___x_5691_;
v_isShared_5721_ = v_isSharedCheck_5725_;
goto v_resetjp_5719_;
}
else
{
lean_inc(v_a_5718_);
lean_dec(v___x_5691_);
v___x_5720_ = lean_box(0);
v_isShared_5721_ = v_isSharedCheck_5725_;
goto v_resetjp_5719_;
}
v_resetjp_5719_:
{
lean_object* v___x_5723_; 
if (v_isShared_5721_ == 0)
{
v___x_5723_ = v___x_5720_;
goto v_reusejp_5722_;
}
else
{
lean_object* v_reuseFailAlloc_5724_; 
v_reuseFailAlloc_5724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5724_, 0, v_a_5718_);
v___x_5723_ = v_reuseFailAlloc_5724_;
goto v_reusejp_5722_;
}
v_reusejp_5722_:
{
return v___x_5723_;
}
}
}
}
case 6:
{
lean_object* v_val_5726_; lean_object* v_induct_5727_; 
v_val_5726_ = lean_ctor_get(v_val_5020_, 0);
lean_inc_ref(v_val_5726_);
lean_dec_ref_known(v_val_5020_, 1);
v_induct_5727_ = lean_ctor_get(v_val_5726_, 1);
lean_inc(v_induct_5727_);
lean_dec_ref(v_val_5726_);
v_c_4908_ = v_induct_5727_;
v_a_4910_ = v___x_5037_;
goto _start;
}
default: 
{
lean_object* v_val_5729_; lean_object* v_all_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; 
v_val_5729_ = lean_ctor_get(v_val_5020_, 0);
lean_inc_ref(v_val_5729_);
lean_dec_ref_known(v_val_5020_, 1);
v_all_5730_ = lean_ctor_get(v_val_5729_, 1);
lean_inc(v_all_5730_);
lean_dec_ref(v_val_5729_);
v___x_5731_ = lean_box(0);
v___x_5732_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg(v_all_5730_, v___x_5731_, v_a_4909_, v___x_5037_);
lean_dec(v_all_5730_);
if (lean_obj_tag(v___x_5732_) == 0)
{
lean_object* v_a_5733_; lean_object* v___x_5735_; uint8_t v_isShared_5736_; uint8_t v_isSharedCheck_5749_; 
v_a_5733_ = lean_ctor_get(v___x_5732_, 0);
v_isSharedCheck_5749_ = !lean_is_exclusive(v___x_5732_);
if (v_isSharedCheck_5749_ == 0)
{
v___x_5735_ = v___x_5732_;
v_isShared_5736_ = v_isSharedCheck_5749_;
goto v_resetjp_5734_;
}
else
{
lean_inc(v_a_5733_);
lean_dec(v___x_5732_);
v___x_5735_ = lean_box(0);
v_isShared_5736_ = v_isSharedCheck_5749_;
goto v_resetjp_5734_;
}
v_resetjp_5734_:
{
lean_object* v_snd_5737_; lean_object* v___x_5739_; uint8_t v_isShared_5740_; uint8_t v_isSharedCheck_5747_; 
v_snd_5737_ = lean_ctor_get(v_a_5733_, 1);
v_isSharedCheck_5747_ = !lean_is_exclusive(v_a_5733_);
if (v_isSharedCheck_5747_ == 0)
{
lean_object* v_unused_5748_; 
v_unused_5748_ = lean_ctor_get(v_a_5733_, 0);
lean_dec(v_unused_5748_);
v___x_5739_ = v_a_5733_;
v_isShared_5740_ = v_isSharedCheck_5747_;
goto v_resetjp_5738_;
}
else
{
lean_inc(v_snd_5737_);
lean_dec(v_a_5733_);
v___x_5739_ = lean_box(0);
v_isShared_5740_ = v_isSharedCheck_5747_;
goto v_resetjp_5738_;
}
v_resetjp_5738_:
{
lean_object* v___x_5742_; 
if (v_isShared_5740_ == 0)
{
lean_ctor_set(v___x_5739_, 0, v___x_5731_);
v___x_5742_ = v___x_5739_;
goto v_reusejp_5741_;
}
else
{
lean_object* v_reuseFailAlloc_5746_; 
v_reuseFailAlloc_5746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5746_, 0, v___x_5731_);
lean_ctor_set(v_reuseFailAlloc_5746_, 1, v_snd_5737_);
v___x_5742_ = v_reuseFailAlloc_5746_;
goto v_reusejp_5741_;
}
v_reusejp_5741_:
{
lean_object* v___x_5744_; 
if (v_isShared_5736_ == 0)
{
lean_ctor_set(v___x_5735_, 0, v___x_5742_);
v___x_5744_ = v___x_5735_;
goto v_reusejp_5743_;
}
else
{
lean_object* v_reuseFailAlloc_5745_; 
v_reuseFailAlloc_5745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5745_, 0, v___x_5742_);
v___x_5744_ = v_reuseFailAlloc_5745_;
goto v_reusejp_5743_;
}
v_reusejp_5743_:
{
return v___x_5744_;
}
}
}
}
}
else
{
return v___x_5732_;
}
}
}
}
}
}
else
{
lean_dec(v_val_5020_);
lean_dec(v_c_4908_);
goto v___jp_4912_;
}
}
}
else
{
uint8_t v_ignoreMissing_5760_; 
lean_dec(v___x_5019_);
v_ignoreMissing_5760_ = lean_ctor_get_uint8(v_a_4910_, sizeof(void*)*6 + 2);
if (v_ignoreMissing_5760_ == 0)
{
lean_object* v___x_5761_; lean_object* v___x_5762_; lean_object* v___x_5763_; lean_object* v___x_5764_; lean_object* v___x_5765_; uint8_t v___x_5766_; lean_object* v___x_5767_; lean_object* v___x_5768_; lean_object* v___x_5769_; lean_object* v___x_5770_; lean_object* v___x_5771_; lean_object* v___x_5772_; 
v___x_5761_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_dumpName___closed__1));
v___x_5762_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg___closed__0));
v___x_5763_ = lean_unsigned_to_nat(254u);
v___x_5764_ = lean_unsigned_to_nat(48u);
v___x_5765_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__1));
v___x_5766_ = 1;
v___x_5767_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_c_4908_, v___x_5766_);
v___x_5768_ = lean_string_append(v___x_5765_, v___x_5767_);
lean_dec_ref(v___x_5767_);
v___x_5769_ = ((lean_object*)(l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___closed__2));
v___x_5770_ = lean_string_append(v___x_5768_, v___x_5769_);
v___x_5771_ = l_mkPanicMessageWithDecl(v___x_5761_, v___x_5762_, v___x_5763_, v___x_5764_, v___x_5770_);
lean_dec_ref(v___x_5770_);
v___x_5772_ = l_panic___at___00LeanExport_dumpConstant_spec__5(v___x_5771_, v_a_4909_, v_a_4910_);
return v___x_5772_;
}
else
{
lean_object* v___x_5773_; lean_object* v___x_5774_; lean_object* v___x_5775_; 
lean_dec(v_c_4908_);
v___x_5773_ = lean_box(0);
v___x_5774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5774_, 0, v___x_5773_);
lean_ctor_set(v___x_5774_, 1, v_a_4910_);
v___x_5775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5775_, 0, v___x_5774_);
return v___x_5775_;
}
}
v___jp_4912_:
{
lean_object* v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; 
v___x_4913_ = lean_box(0);
v___x_4914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4914_, 0, v___x_4913_);
lean_ctor_set(v___x_4914_, 1, v_a_4910_);
v___x_4915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4915_, 0, v___x_4914_);
return v___x_4915_;
}
v___jp_4916_:
{
size_t v_sz_4922_; size_t v___x_4923_; lean_object* v___x_4924_; 
v_sz_4922_ = lean_array_size(v_fst_4920_);
v___x_4923_ = ((size_t)0ULL);
v___x_4924_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(v_fst_4920_, v_sz_4922_, v___x_4923_, v___y_4917_, v_a_4909_, v_snd_4921_);
if (lean_obj_tag(v___x_4924_) == 0)
{
lean_object* v_a_4925_; lean_object* v_snd_4926_; lean_object* v___x_4928_; uint8_t v_isShared_4929_; uint8_t v_isSharedCheck_5016_; 
v_a_4925_ = lean_ctor_get(v___x_4924_, 0);
lean_inc(v_a_4925_);
lean_dec_ref_known(v___x_4924_, 1);
v_snd_4926_ = lean_ctor_get(v_a_4925_, 1);
v_isSharedCheck_5016_ = !lean_is_exclusive(v_a_4925_);
if (v_isSharedCheck_5016_ == 0)
{
lean_object* v_unused_5017_; 
v_unused_5017_ = lean_ctor_get(v_a_4925_, 0);
lean_dec(v_unused_5017_);
v___x_4928_ = v_a_4925_;
v_isShared_4929_ = v_isSharedCheck_5016_;
goto v_resetjp_4927_;
}
else
{
lean_inc(v_snd_4926_);
lean_dec(v_a_4925_);
v___x_4928_ = lean_box(0);
v_isShared_4929_ = v_isSharedCheck_5016_;
goto v_resetjp_4927_;
}
v_resetjp_4927_:
{
lean_object* v___x_4930_; 
v___x_4930_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__15(v_fst_4920_, v_sz_4922_, v___x_4923_, v___y_4917_, v_a_4909_, v_snd_4926_);
if (lean_obj_tag(v___x_4930_) == 0)
{
lean_object* v_a_4931_; lean_object* v_snd_4932_; lean_object* v___x_4934_; uint8_t v_isShared_4935_; uint8_t v_isSharedCheck_5014_; 
v_a_4931_ = lean_ctor_get(v___x_4930_, 0);
lean_inc(v_a_4931_);
lean_dec_ref_known(v___x_4930_, 1);
v_snd_4932_ = lean_ctor_get(v_a_4931_, 1);
v_isSharedCheck_5014_ = !lean_is_exclusive(v_a_4931_);
if (v_isSharedCheck_5014_ == 0)
{
lean_object* v_unused_5015_; 
v_unused_5015_ = lean_ctor_get(v_a_4931_, 0);
lean_dec(v_unused_5015_);
v___x_4934_ = v_a_4931_;
v_isShared_4935_ = v_isSharedCheck_5014_;
goto v_resetjp_4933_;
}
else
{
lean_inc(v_snd_4932_);
lean_dec(v_a_4931_);
v___x_4934_ = lean_box(0);
v_isShared_4935_ = v_isSharedCheck_5014_;
goto v_resetjp_4933_;
}
v_resetjp_4933_:
{
size_t v_sz_4936_; lean_object* v___x_4937_; 
v_sz_4936_ = lean_array_size(v___y_4918_);
v___x_4937_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(v_sz_4936_, v___x_4923_, v___y_4918_, v_a_4909_, v_snd_4932_);
if (lean_obj_tag(v___x_4937_) == 0)
{
lean_object* v_a_4938_; lean_object* v_fst_4939_; lean_object* v_snd_4940_; lean_object* v___x_4942_; uint8_t v_isShared_4943_; uint8_t v_isSharedCheck_5005_; 
v_a_4938_ = lean_ctor_get(v___x_4937_, 0);
lean_inc(v_a_4938_);
lean_dec_ref_known(v___x_4937_, 1);
v_fst_4939_ = lean_ctor_get(v_a_4938_, 0);
v_snd_4940_ = lean_ctor_get(v_a_4938_, 1);
v_isSharedCheck_5005_ = !lean_is_exclusive(v_a_4938_);
if (v_isSharedCheck_5005_ == 0)
{
v___x_4942_ = v_a_4938_;
v_isShared_4943_ = v_isSharedCheck_5005_;
goto v_resetjp_4941_;
}
else
{
lean_inc(v_snd_4940_);
lean_inc(v_fst_4939_);
lean_dec(v_a_4938_);
v___x_4942_ = lean_box(0);
v_isShared_4943_ = v_isSharedCheck_5005_;
goto v_resetjp_4941_;
}
v_resetjp_4941_:
{
size_t v_sz_4944_; lean_object* v___x_4945_; 
v_sz_4944_ = lean_array_size(v___y_4919_);
v___x_4945_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(v_sz_4944_, v___x_4923_, v___y_4919_, v_a_4909_, v_snd_4940_);
if (lean_obj_tag(v___x_4945_) == 0)
{
lean_object* v_a_4946_; lean_object* v_fst_4947_; lean_object* v_snd_4948_; lean_object* v___x_4950_; uint8_t v_isShared_4951_; uint8_t v_isSharedCheck_4996_; 
v_a_4946_ = lean_ctor_get(v___x_4945_, 0);
lean_inc(v_a_4946_);
lean_dec_ref_known(v___x_4945_, 1);
v_fst_4947_ = lean_ctor_get(v_a_4946_, 0);
v_snd_4948_ = lean_ctor_get(v_a_4946_, 1);
v_isSharedCheck_4996_ = !lean_is_exclusive(v_a_4946_);
if (v_isSharedCheck_4996_ == 0)
{
v___x_4950_ = v_a_4946_;
v_isShared_4951_ = v_isSharedCheck_4996_;
goto v_resetjp_4949_;
}
else
{
lean_inc(v_snd_4948_);
lean_inc(v_fst_4947_);
lean_dec(v_a_4946_);
v___x_4950_ = lean_box(0);
v_isShared_4951_ = v_isSharedCheck_4996_;
goto v_resetjp_4949_;
}
v_resetjp_4949_:
{
lean_object* v___x_4952_; 
v___x_4952_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18(v_sz_4922_, v___x_4923_, v_fst_4920_, v_a_4909_, v_snd_4948_);
if (lean_obj_tag(v___x_4952_) == 0)
{
lean_object* v_a_4953_; lean_object* v_fst_4954_; lean_object* v_snd_4955_; lean_object* v___x_4957_; uint8_t v_isShared_4958_; uint8_t v_isSharedCheck_4987_; 
v_a_4953_ = lean_ctor_get(v___x_4952_, 0);
lean_inc(v_a_4953_);
lean_dec_ref_known(v___x_4952_, 1);
v_fst_4954_ = lean_ctor_get(v_a_4953_, 0);
v_snd_4955_ = lean_ctor_get(v_a_4953_, 1);
v_isSharedCheck_4987_ = !lean_is_exclusive(v_a_4953_);
if (v_isSharedCheck_4987_ == 0)
{
v___x_4957_ = v_a_4953_;
v_isShared_4958_ = v_isSharedCheck_4987_;
goto v_resetjp_4956_;
}
else
{
lean_inc(v_snd_4955_);
lean_inc(v_fst_4954_);
lean_dec(v_a_4953_);
v___x_4957_ = lean_box(0);
v_isShared_4958_ = v_isSharedCheck_4987_;
goto v_resetjp_4956_;
}
v_resetjp_4956_:
{
lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4963_; 
v___x_4959_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__0));
v___x_4960_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__1));
v___x_4961_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(v_fst_4939_);
if (v_isShared_4958_ == 0)
{
lean_ctor_set(v___x_4957_, 1, v___x_4961_);
lean_ctor_set(v___x_4957_, 0, v___x_4960_);
v___x_4963_ = v___x_4957_;
goto v_reusejp_4962_;
}
else
{
lean_object* v_reuseFailAlloc_4986_; 
v_reuseFailAlloc_4986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4986_, 0, v___x_4960_);
lean_ctor_set(v_reuseFailAlloc_4986_, 1, v___x_4961_);
v___x_4963_ = v_reuseFailAlloc_4986_;
goto v_reusejp_4962_;
}
v_reusejp_4962_:
{
lean_object* v___x_4964_; lean_object* v___x_4965_; lean_object* v___x_4967_; 
v___x_4964_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___closed__2));
v___x_4965_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(v_fst_4947_);
if (v_isShared_4951_ == 0)
{
lean_ctor_set(v___x_4950_, 1, v___x_4965_);
lean_ctor_set(v___x_4950_, 0, v___x_4964_);
v___x_4967_ = v___x_4950_;
goto v_reusejp_4966_;
}
else
{
lean_object* v_reuseFailAlloc_4985_; 
v_reuseFailAlloc_4985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4985_, 0, v___x_4964_);
lean_ctor_set(v_reuseFailAlloc_4985_, 1, v___x_4965_);
v___x_4967_ = v_reuseFailAlloc_4985_;
goto v_reusejp_4966_;
}
v_reusejp_4966_:
{
lean_object* v___x_4968_; lean_object* v___x_4969_; lean_object* v___x_4971_; 
v___x_4968_ = ((lean_object*)(l_LeanExport_dumpConstant___closed__2));
v___x_4969_ = l_Lean_Array_toJson___at___00LeanExport_dumpConstant_spec__19(v_fst_4954_);
if (v_isShared_4943_ == 0)
{
lean_ctor_set(v___x_4942_, 1, v___x_4969_);
lean_ctor_set(v___x_4942_, 0, v___x_4968_);
v___x_4971_ = v___x_4942_;
goto v_reusejp_4970_;
}
else
{
lean_object* v_reuseFailAlloc_4984_; 
v_reuseFailAlloc_4984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4984_, 0, v___x_4968_);
lean_ctor_set(v_reuseFailAlloc_4984_, 1, v___x_4969_);
v___x_4971_ = v_reuseFailAlloc_4984_;
goto v_reusejp_4970_;
}
v_reusejp_4970_:
{
lean_object* v___x_4972_; lean_object* v___x_4974_; 
v___x_4972_ = lean_box(0);
if (v_isShared_4929_ == 0)
{
lean_ctor_set_tag(v___x_4928_, 1);
lean_ctor_set(v___x_4928_, 1, v___x_4972_);
lean_ctor_set(v___x_4928_, 0, v___x_4971_);
v___x_4974_ = v___x_4928_;
goto v_reusejp_4973_;
}
else
{
lean_object* v_reuseFailAlloc_4983_; 
v_reuseFailAlloc_4983_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4983_, 0, v___x_4971_);
lean_ctor_set(v_reuseFailAlloc_4983_, 1, v___x_4972_);
v___x_4974_ = v_reuseFailAlloc_4983_;
goto v_reusejp_4973_;
}
v_reusejp_4973_:
{
lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4979_; 
v___x_4975_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4975_, 0, v___x_4967_);
lean_ctor_set(v___x_4975_, 1, v___x_4974_);
v___x_4976_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4976_, 0, v___x_4963_);
lean_ctor_set(v___x_4976_, 1, v___x_4975_);
v___x_4977_ = l_Lean_Json_mkObj(v___x_4976_);
lean_dec_ref_known(v___x_4976_, 2);
if (v_isShared_4935_ == 0)
{
lean_ctor_set(v___x_4934_, 1, v___x_4977_);
lean_ctor_set(v___x_4934_, 0, v___x_4959_);
v___x_4979_ = v___x_4934_;
goto v_reusejp_4978_;
}
else
{
lean_object* v_reuseFailAlloc_4982_; 
v_reuseFailAlloc_4982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4982_, 0, v___x_4959_);
lean_ctor_set(v_reuseFailAlloc_4982_, 1, v___x_4977_);
v___x_4979_ = v_reuseFailAlloc_4982_;
goto v_reusejp_4978_;
}
v_reusejp_4978_:
{
lean_object* v___x_4980_; lean_object* v___x_4981_; 
v___x_4980_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4980_, 0, v___x_4979_);
lean_ctor_set(v___x_4980_, 1, v___x_4972_);
v___x_4981_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpObj___redArg(v___x_4980_, v_snd_4955_);
lean_dec_ref_known(v___x_4980_, 2);
return v___x_4981_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4988_; lean_object* v___x_4990_; uint8_t v_isShared_4991_; uint8_t v_isSharedCheck_4995_; 
lean_del_object(v___x_4950_);
lean_dec(v_fst_4947_);
lean_del_object(v___x_4942_);
lean_dec(v_fst_4939_);
lean_del_object(v___x_4934_);
lean_del_object(v___x_4928_);
v_a_4988_ = lean_ctor_get(v___x_4952_, 0);
v_isSharedCheck_4995_ = !lean_is_exclusive(v___x_4952_);
if (v_isSharedCheck_4995_ == 0)
{
v___x_4990_ = v___x_4952_;
v_isShared_4991_ = v_isSharedCheck_4995_;
goto v_resetjp_4989_;
}
else
{
lean_inc(v_a_4988_);
lean_dec(v___x_4952_);
v___x_4990_ = lean_box(0);
v_isShared_4991_ = v_isSharedCheck_4995_;
goto v_resetjp_4989_;
}
v_resetjp_4989_:
{
lean_object* v___x_4993_; 
if (v_isShared_4991_ == 0)
{
v___x_4993_ = v___x_4990_;
goto v_reusejp_4992_;
}
else
{
lean_object* v_reuseFailAlloc_4994_; 
v_reuseFailAlloc_4994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4994_, 0, v_a_4988_);
v___x_4993_ = v_reuseFailAlloc_4994_;
goto v_reusejp_4992_;
}
v_reusejp_4992_:
{
return v___x_4993_;
}
}
}
}
}
else
{
lean_object* v_a_4997_; lean_object* v___x_4999_; uint8_t v_isShared_5000_; uint8_t v_isSharedCheck_5004_; 
lean_del_object(v___x_4942_);
lean_dec(v_fst_4939_);
lean_del_object(v___x_4934_);
lean_del_object(v___x_4928_);
lean_dec_ref(v_fst_4920_);
v_a_4997_ = lean_ctor_get(v___x_4945_, 0);
v_isSharedCheck_5004_ = !lean_is_exclusive(v___x_4945_);
if (v_isSharedCheck_5004_ == 0)
{
v___x_4999_ = v___x_4945_;
v_isShared_5000_ = v_isSharedCheck_5004_;
goto v_resetjp_4998_;
}
else
{
lean_inc(v_a_4997_);
lean_dec(v___x_4945_);
v___x_4999_ = lean_box(0);
v_isShared_5000_ = v_isSharedCheck_5004_;
goto v_resetjp_4998_;
}
v_resetjp_4998_:
{
lean_object* v___x_5002_; 
if (v_isShared_5000_ == 0)
{
v___x_5002_ = v___x_4999_;
goto v_reusejp_5001_;
}
else
{
lean_object* v_reuseFailAlloc_5003_; 
v_reuseFailAlloc_5003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5003_, 0, v_a_4997_);
v___x_5002_ = v_reuseFailAlloc_5003_;
goto v_reusejp_5001_;
}
v_reusejp_5001_:
{
return v___x_5002_;
}
}
}
}
}
else
{
lean_object* v_a_5006_; lean_object* v___x_5008_; uint8_t v_isShared_5009_; uint8_t v_isSharedCheck_5013_; 
lean_del_object(v___x_4934_);
lean_del_object(v___x_4928_);
lean_dec_ref(v_fst_4920_);
lean_dec(v___y_4919_);
v_a_5006_ = lean_ctor_get(v___x_4937_, 0);
v_isSharedCheck_5013_ = !lean_is_exclusive(v___x_4937_);
if (v_isSharedCheck_5013_ == 0)
{
v___x_5008_ = v___x_4937_;
v_isShared_5009_ = v_isSharedCheck_5013_;
goto v_resetjp_5007_;
}
else
{
lean_inc(v_a_5006_);
lean_dec(v___x_4937_);
v___x_5008_ = lean_box(0);
v_isShared_5009_ = v_isSharedCheck_5013_;
goto v_resetjp_5007_;
}
v_resetjp_5007_:
{
lean_object* v___x_5011_; 
if (v_isShared_5009_ == 0)
{
v___x_5011_ = v___x_5008_;
goto v_reusejp_5010_;
}
else
{
lean_object* v_reuseFailAlloc_5012_; 
v_reuseFailAlloc_5012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5012_, 0, v_a_5006_);
v___x_5011_ = v_reuseFailAlloc_5012_;
goto v_reusejp_5010_;
}
v_reusejp_5010_:
{
return v___x_5011_;
}
}
}
}
}
else
{
lean_del_object(v___x_4928_);
lean_dec_ref(v_fst_4920_);
lean_dec(v___y_4919_);
lean_dec(v___y_4918_);
return v___x_4930_;
}
}
}
else
{
lean_dec_ref(v_fst_4920_);
lean_dec(v___y_4919_);
lean_dec(v___y_4918_);
return v___x_4924_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(lean_object* v_as_5776_, size_t v_sz_5777_, size_t v_i_5778_, lean_object* v_b_5779_, lean_object* v___y_5780_, lean_object* v___y_5781_){
_start:
{
uint8_t v___x_5783_; 
v___x_5783_ = lean_usize_dec_lt(v_i_5778_, v_sz_5777_);
if (v___x_5783_ == 0)
{
lean_object* v___x_5784_; lean_object* v___x_5785_; 
v___x_5784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5784_, 0, v_b_5779_);
lean_ctor_set(v___x_5784_, 1, v___y_5781_);
v___x_5785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5785_, 0, v___x_5784_);
return v___x_5785_;
}
else
{
lean_object* v___x_5786_; lean_object* v_a_5787_; lean_object* v___x_5788_; 
v___x_5786_ = lean_box(0);
v_a_5787_ = lean_array_uget_borrowed(v_as_5776_, v_i_5778_);
lean_inc(v_a_5787_);
v___x_5788_ = l_LeanExport_dumpConstant(v_a_5787_, v___y_5780_, v___y_5781_);
if (lean_obj_tag(v___x_5788_) == 0)
{
lean_object* v_a_5789_; lean_object* v_snd_5790_; size_t v___x_5791_; size_t v___x_5792_; 
v_a_5789_ = lean_ctor_get(v___x_5788_, 0);
lean_inc(v_a_5789_);
lean_dec_ref_known(v___x_5788_, 1);
v_snd_5790_ = lean_ctor_get(v_a_5789_, 1);
lean_inc(v_snd_5790_);
lean_dec(v_a_5789_);
v___x_5791_ = ((size_t)1ULL);
v___x_5792_ = lean_usize_add(v_i_5778_, v___x_5791_);
v_i_5778_ = v___x_5792_;
v_b_5779_ = v___x_5786_;
v___y_5781_ = v_snd_5790_;
goto _start;
}
else
{
return v___x_5788_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(lean_object* v_e_5794_, lean_object* v_a_5795_, lean_object* v_a_5796_){
_start:
{
lean_object* v___x_5798_; lean_object* v___x_5799_; size_t v_sz_5800_; size_t v___x_5801_; lean_object* v___x_5802_; 
v___x_5798_ = l_Lean_Expr_getUsedConstants(v_e_5794_);
v___x_5799_ = lean_box(0);
v_sz_5800_ = lean_array_size(v___x_5798_);
v___x_5801_ = ((size_t)0ULL);
v___x_5802_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(v___x_5798_, v_sz_5800_, v___x_5801_, v___x_5799_, v_a_5795_, v_a_5796_);
lean_dec_ref(v___x_5798_);
if (lean_obj_tag(v___x_5802_) == 0)
{
lean_object* v_a_5803_; lean_object* v___x_5805_; uint8_t v_isShared_5806_; uint8_t v_isSharedCheck_5819_; 
v_a_5803_ = lean_ctor_get(v___x_5802_, 0);
v_isSharedCheck_5819_ = !lean_is_exclusive(v___x_5802_);
if (v_isSharedCheck_5819_ == 0)
{
v___x_5805_ = v___x_5802_;
v_isShared_5806_ = v_isSharedCheck_5819_;
goto v_resetjp_5804_;
}
else
{
lean_inc(v_a_5803_);
lean_dec(v___x_5802_);
v___x_5805_ = lean_box(0);
v_isShared_5806_ = v_isSharedCheck_5819_;
goto v_resetjp_5804_;
}
v_resetjp_5804_:
{
lean_object* v_snd_5807_; lean_object* v___x_5809_; uint8_t v_isShared_5810_; uint8_t v_isSharedCheck_5817_; 
v_snd_5807_ = lean_ctor_get(v_a_5803_, 1);
v_isSharedCheck_5817_ = !lean_is_exclusive(v_a_5803_);
if (v_isSharedCheck_5817_ == 0)
{
lean_object* v_unused_5818_; 
v_unused_5818_ = lean_ctor_get(v_a_5803_, 0);
lean_dec(v_unused_5818_);
v___x_5809_ = v_a_5803_;
v_isShared_5810_ = v_isSharedCheck_5817_;
goto v_resetjp_5808_;
}
else
{
lean_inc(v_snd_5807_);
lean_dec(v_a_5803_);
v___x_5809_ = lean_box(0);
v_isShared_5810_ = v_isSharedCheck_5817_;
goto v_resetjp_5808_;
}
v_resetjp_5808_:
{
lean_object* v___x_5812_; 
if (v_isShared_5810_ == 0)
{
lean_ctor_set(v___x_5809_, 0, v___x_5799_);
v___x_5812_ = v___x_5809_;
goto v_reusejp_5811_;
}
else
{
lean_object* v_reuseFailAlloc_5816_; 
v_reuseFailAlloc_5816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5816_, 0, v___x_5799_);
lean_ctor_set(v_reuseFailAlloc_5816_, 1, v_snd_5807_);
v___x_5812_ = v_reuseFailAlloc_5816_;
goto v_reusejp_5811_;
}
v_reusejp_5811_:
{
lean_object* v___x_5814_; 
if (v_isShared_5806_ == 0)
{
lean_ctor_set(v___x_5805_, 0, v___x_5812_);
v___x_5814_ = v___x_5805_;
goto v_reusejp_5813_;
}
else
{
lean_object* v_reuseFailAlloc_5815_; 
v_reuseFailAlloc_5815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5815_, 0, v___x_5812_);
v___x_5814_ = v_reuseFailAlloc_5815_;
goto v_reusejp_5813_;
}
v_reusejp_5813_:
{
return v___x_5814_;
}
}
}
}
}
else
{
return v___x_5802_;
}
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps___boxed(lean_object* v_e_5820_, lean_object* v_a_5821_, lean_object* v_a_5822_, lean_object* v_a_5823_){
_start:
{
lean_object* v_res_5824_; 
v_res_5824_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps(v_e_5820_, v_a_5821_, v_a_5822_);
lean_dec_ref(v_a_5821_);
return v_res_5824_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg___boxed(lean_object* v_as_x27_5825_, lean_object* v_b_5826_, lean_object* v___y_5827_, lean_object* v___y_5828_, lean_object* v___y_5829_){
_start:
{
lean_object* v_res_5830_; 
v_res_5830_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg(v_as_x27_5825_, v_b_5826_, v___y_5827_, v___y_5828_);
lean_dec_ref(v___y_5827_);
lean_dec(v_as_x27_5825_);
return v_res_5830_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg___boxed(lean_object* v_as_x27_5831_, lean_object* v_b_5832_, lean_object* v___y_5833_, lean_object* v___y_5834_, lean_object* v___y_5835_){
_start:
{
lean_object* v_res_5836_; 
v_res_5836_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg(v_as_x27_5831_, v_b_5832_, v___y_5833_, v___y_5834_);
lean_dec_ref(v___y_5833_);
lean_dec(v_as_x27_5831_);
return v_res_5836_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2___boxed(lean_object* v_x_5837_, lean_object* v_x_5838_, lean_object* v___y_5839_, lean_object* v___y_5840_, lean_object* v___y_5841_){
_start:
{
lean_object* v_res_5842_; 
v_res_5842_ = l_List_mapM_loop___at___00LeanExport_dumpConstant_spec__2(v_x_5837_, v_x_5838_, v___y_5839_, v___y_5840_);
lean_dec_ref(v___y_5839_);
return v_res_5842_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0___boxed(lean_object* v_as_5843_, lean_object* v_sz_5844_, lean_object* v_i_5845_, lean_object* v_b_5846_, lean_object* v___y_5847_, lean_object* v___y_5848_, lean_object* v___y_5849_){
_start:
{
size_t v_sz_boxed_5850_; size_t v_i_boxed_5851_; lean_object* v_res_5852_; 
v_sz_boxed_5850_ = lean_unbox_usize(v_sz_5844_);
lean_dec(v_sz_5844_);
v_i_boxed_5851_ = lean_unbox_usize(v_i_5845_);
lean_dec(v_i_5845_);
v_res_5852_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpDeps_spec__0(v_as_5843_, v_sz_boxed_5850_, v_i_boxed_5851_, v_b_5846_, v___y_5847_, v___y_5848_);
lean_dec_ref(v___y_5847_);
lean_dec_ref(v_as_5843_);
return v_res_5852_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps___boxed(lean_object* v_a_5853_, lean_object* v_a_5854_, lean_object* v_a_5855_){
_start:
{
lean_object* v_res_5856_; 
v_res_5856_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpNatDeps(v_a_5853_, v_a_5854_);
lean_dec_ref(v_a_5853_);
return v_res_5856_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__15___boxed(lean_object* v_as_5857_, lean_object* v_sz_5858_, lean_object* v_i_5859_, lean_object* v_b_5860_, lean_object* v___y_5861_, lean_object* v___y_5862_, lean_object* v___y_5863_){
_start:
{
size_t v_sz_boxed_5864_; size_t v_i_boxed_5865_; lean_object* v_res_5866_; 
v_sz_boxed_5864_ = lean_unbox_usize(v_sz_5858_);
lean_dec(v_sz_5858_);
v_i_boxed_5865_ = lean_unbox_usize(v_i_5859_);
lean_dec(v_i_5859_);
v_res_5866_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__15(v_as_5857_, v_sz_boxed_5864_, v_i_boxed_5865_, v_b_5860_, v___y_5861_, v___y_5862_);
lean_dec_ref(v___y_5861_);
lean_dec_ref(v_as_5857_);
return v_res_5866_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExpr___boxed(lean_object* v_e_5867_, lean_object* v_a_5868_, lean_object* v_a_5869_, lean_object* v_a_5870_){
_start:
{
lean_object* v_res_5871_; 
v_res_5871_ = l_LeanExport_dumpExpr(v_e_5867_, v_a_5868_, v_a_5869_);
lean_dec_ref(v_a_5868_);
return v_res_5871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14___boxed(lean_object* v_as_5872_, lean_object* v_sz_5873_, lean_object* v_i_5874_, lean_object* v_b_5875_, lean_object* v___y_5876_, lean_object* v___y_5877_, lean_object* v___y_5878_){
_start:
{
size_t v_sz_boxed_5879_; size_t v_i_boxed_5880_; lean_object* v_res_5881_; 
v_sz_boxed_5879_ = lean_unbox_usize(v_sz_5873_);
lean_dec(v_sz_5873_);
v_i_boxed_5880_ = lean_unbox_usize(v_i_5874_);
lean_dec(v_i_5874_);
v_res_5881_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__14(v_as_5872_, v_sz_boxed_5879_, v_i_boxed_5880_, v_b_5875_, v___y_5876_, v___y_5877_);
lean_dec_ref(v___y_5876_);
lean_dec_ref(v_as_5872_);
return v_res_5881_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__20___boxed(lean_object* v_as_5882_, lean_object* v_sz_5883_, lean_object* v_i_5884_, lean_object* v_b_5885_, lean_object* v___y_5886_, lean_object* v___y_5887_, lean_object* v___y_5888_){
_start:
{
size_t v_sz_boxed_5889_; size_t v_i_boxed_5890_; lean_object* v_res_5891_; 
v_sz_boxed_5889_ = lean_unbox_usize(v_sz_5883_);
lean_dec(v_sz_5883_);
v_i_boxed_5890_ = lean_unbox_usize(v_i_5884_);
lean_dec(v_i_5884_);
v_res_5891_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00LeanExport_dumpConstant_spec__20(v_as_5882_, v_sz_boxed_5889_, v_i_boxed_5890_, v_b_5885_, v___y_5886_, v___y_5887_);
lean_dec_ref(v___y_5886_);
lean_dec_ref(v_as_5882_);
return v_res_5891_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule___boxed(lean_object* v_rule_5892_, lean_object* v_a_5893_, lean_object* v_a_5894_, lean_object* v_a_5895_){
_start:
{
lean_object* v_res_5896_; 
v_res_5896_ = l___private_LeanExport_Basic_0__LeanExport_dumpConstant_dumpRecRule(v_rule_5892_, v_a_5893_, v_a_5894_);
lean_dec_ref(v_a_5893_);
return v_res_5896_;
}
}
LEAN_EXPORT lean_object* l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps___boxed(lean_object* v_a_5897_, lean_object* v_a_5898_, lean_object* v_a_5899_){
_start:
{
lean_object* v_res_5900_; 
v_res_5900_ = l___private_LeanExport_Basic_0__LeanExport_dumpExprAux_dumpStrDeps(v_a_5897_, v_a_5898_);
lean_dec_ref(v_a_5897_);
return v_res_5900_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17___boxed(lean_object* v_sz_5901_, lean_object* v_i_5902_, lean_object* v_bs_5903_, lean_object* v___y_5904_, lean_object* v___y_5905_, lean_object* v___y_5906_){
_start:
{
size_t v_sz_boxed_5907_; size_t v_i_boxed_5908_; lean_object* v_res_5909_; 
v_sz_boxed_5907_ = lean_unbox_usize(v_sz_5901_);
lean_dec(v_sz_5901_);
v_i_boxed_5908_ = lean_unbox_usize(v_i_5902_);
lean_dec(v_i_5902_);
v_res_5909_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__17(v_sz_boxed_5907_, v_i_boxed_5908_, v_bs_5903_, v___y_5904_, v___y_5905_);
lean_dec_ref(v___y_5904_);
return v_res_5909_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16___boxed(lean_object* v_sz_5910_, lean_object* v_i_5911_, lean_object* v_bs_5912_, lean_object* v___y_5913_, lean_object* v___y_5914_, lean_object* v___y_5915_){
_start:
{
size_t v_sz_boxed_5916_; size_t v_i_boxed_5917_; lean_object* v_res_5918_; 
v_sz_boxed_5916_ = lean_unbox_usize(v_sz_5910_);
lean_dec(v_sz_5910_);
v_i_boxed_5917_ = lean_unbox_usize(v_i_5911_);
lean_dec(v_i_5911_);
v_res_5918_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__16(v_sz_boxed_5916_, v_i_boxed_5917_, v_bs_5912_, v___y_5913_, v___y_5914_);
lean_dec_ref(v___y_5913_);
return v_res_5918_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18___boxed(lean_object* v_sz_5919_, lean_object* v_i_5920_, lean_object* v_bs_5921_, lean_object* v___y_5922_, lean_object* v___y_5923_, lean_object* v___y_5924_){
_start:
{
size_t v_sz_boxed_5925_; size_t v_i_boxed_5926_; lean_object* v_res_5927_; 
v_sz_boxed_5925_ = lean_unbox_usize(v_sz_5919_);
lean_dec(v_sz_5919_);
v_i_boxed_5926_ = lean_unbox_usize(v_i_5920_);
lean_dec(v_i_5920_);
v_res_5927_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00LeanExport_dumpConstant_spec__18(v_sz_boxed_5925_, v_i_boxed_5926_, v_bs_5921_, v___y_5922_, v___y_5923_);
lean_dec_ref(v___y_5922_);
return v_res_5927_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg___boxed(lean_object* v___x_5928_, lean_object* v_as_x27_5929_, lean_object* v_b_5930_, lean_object* v___y_5931_, lean_object* v___y_5932_, lean_object* v___y_5933_){
_start:
{
uint8_t v___x_173317__boxed_5934_; lean_object* v_res_5935_; 
v___x_173317__boxed_5934_ = lean_unbox(v___x_5928_);
v_res_5935_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(v___x_173317__boxed_5934_, v_as_x27_5929_, v_b_5930_, v___y_5931_, v___y_5932_);
lean_dec_ref(v___y_5931_);
lean_dec(v_as_x27_5929_);
return v_res_5935_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg___boxed(lean_object* v___x_5936_, lean_object* v_val_5937_, lean_object* v_as_x27_5938_, lean_object* v_b_5939_, lean_object* v___y_5940_, lean_object* v___y_5941_, lean_object* v___y_5942_){
_start:
{
uint8_t v___x_173417__boxed_5943_; lean_object* v_res_5944_; 
v___x_173417__boxed_5943_ = lean_unbox(v___x_5936_);
v_res_5944_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(v___x_173417__boxed_5943_, v_val_5937_, v_as_x27_5938_, v_b_5939_, v___y_5940_, v___y_5941_);
lean_dec_ref(v___y_5940_);
lean_dec(v_as_x27_5938_);
lean_dec_ref(v_val_5937_);
return v_res_5944_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpExprAux___boxed(lean_object* v_e_5945_, lean_object* v_a_5946_, lean_object* v_a_5947_, lean_object* v_a_5948_){
_start:
{
lean_object* v_res_5949_; 
v_res_5949_ = l_LeanExport_dumpExprAux(v_e_5945_, v_a_5946_, v_a_5947_);
lean_dec_ref(v_a_5946_);
return v_res_5949_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpConstant___boxed(lean_object* v_c_5950_, lean_object* v_a_5951_, lean_object* v_a_5952_, lean_object* v_a_5953_){
_start:
{
lean_object* v_res_5954_; 
v_res_5954_ = l_LeanExport_dumpConstant(v_c_5950_, v_a_5951_, v_a_5952_);
lean_dec_ref(v_a_5951_);
return v_res_5954_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7(uint8_t v___x_5955_, lean_object* v_as_5956_, lean_object* v_as_x27_5957_, lean_object* v_b_5958_, lean_object* v_a_5959_, lean_object* v___y_5960_, lean_object* v___y_5961_){
_start:
{
lean_object* v___x_5963_; 
v___x_5963_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___redArg(v___x_5955_, v_as_x27_5957_, v_b_5958_, v___y_5960_, v___y_5961_);
return v___x_5963_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7___boxed(lean_object* v___x_5964_, lean_object* v_as_5965_, lean_object* v_as_x27_5966_, lean_object* v_b_5967_, lean_object* v_a_5968_, lean_object* v___y_5969_, lean_object* v___y_5970_, lean_object* v___y_5971_){
_start:
{
uint8_t v___x_177938__boxed_5972_; lean_object* v_res_5973_; 
v___x_177938__boxed_5972_ = lean_unbox(v___x_5964_);
v_res_5973_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__7(v___x_177938__boxed_5972_, v_as_5965_, v_as_x27_5966_, v_b_5967_, v_a_5968_, v___y_5969_, v___y_5970_);
lean_dec_ref(v___y_5969_);
lean_dec(v_as_x27_5966_);
lean_dec(v_as_5965_);
return v_res_5973_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9(uint8_t v___y_5974_, uint8_t v___x_5975_, lean_object* v_as_5976_, lean_object* v_as_x27_5977_, lean_object* v_b_5978_, lean_object* v_a_5979_, lean_object* v___y_5980_, lean_object* v___y_5981_){
_start:
{
lean_object* v___x_5983_; 
v___x_5983_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___redArg(v___y_5974_, v___x_5975_, v_as_x27_5977_, v_b_5978_, v___y_5980_, v___y_5981_);
return v___x_5983_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9___boxed(lean_object* v___y_5984_, lean_object* v___x_5985_, lean_object* v_as_5986_, lean_object* v_as_x27_5987_, lean_object* v_b_5988_, lean_object* v_a_5989_, lean_object* v___y_5990_, lean_object* v___y_5991_, lean_object* v___y_5992_){
_start:
{
uint8_t v___y_177955__boxed_5993_; uint8_t v___x_177956__boxed_5994_; lean_object* v_res_5995_; 
v___y_177955__boxed_5993_ = lean_unbox(v___y_5984_);
v___x_177956__boxed_5994_ = lean_unbox(v___x_5985_);
v_res_5995_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__9(v___y_177955__boxed_5993_, v___x_177956__boxed_5994_, v_as_5986_, v_as_x27_5987_, v_b_5988_, v_a_5989_, v___y_5990_, v___y_5991_);
lean_dec_ref(v___y_5990_);
lean_dec(v_as_x27_5987_);
lean_dec(v_as_5986_);
return v_res_5995_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10(lean_object* v_00_u03b4_5996_, lean_object* v_t_5997_, lean_object* v_k_5998_){
_start:
{
lean_object* v___x_5999_; 
v___x_5999_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___redArg(v_t_5997_, v_k_5998_);
return v___x_5999_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10___boxed(lean_object* v_00_u03b4_6000_, lean_object* v_t_6001_, lean_object* v_k_6002_){
_start:
{
lean_object* v_res_6003_; 
v_res_6003_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00LeanExport_dumpConstant_spec__10(v_00_u03b4_6000_, v_t_6001_, v_k_6002_);
lean_dec(v_k_6002_);
lean_dec(v_t_6001_);
return v_res_6003_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12(uint8_t v___x_6004_, lean_object* v_val_6005_, lean_object* v_as_6006_, lean_object* v_as_x27_6007_, lean_object* v_b_6008_, lean_object* v_a_6009_, lean_object* v___y_6010_, lean_object* v___y_6011_){
_start:
{
lean_object* v___x_6013_; 
v___x_6013_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___redArg(v___x_6004_, v_val_6005_, v_as_x27_6007_, v_b_6008_, v___y_6010_, v___y_6011_);
return v___x_6013_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12___boxed(lean_object* v___x_6014_, lean_object* v_val_6015_, lean_object* v_as_6016_, lean_object* v_as_x27_6017_, lean_object* v_b_6018_, lean_object* v_a_6019_, lean_object* v___y_6020_, lean_object* v___y_6021_, lean_object* v___y_6022_){
_start:
{
uint8_t v___x_177977__boxed_6023_; lean_object* v_res_6024_; 
v___x_177977__boxed_6023_ = lean_unbox(v___x_6014_);
v_res_6024_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__12(v___x_177977__boxed_6023_, v_val_6015_, v_as_6016_, v_as_x27_6017_, v_b_6018_, v_a_6019_, v___y_6020_, v___y_6021_);
lean_dec_ref(v___y_6020_);
lean_dec(v_as_x27_6017_);
lean_dec(v_as_6016_);
lean_dec_ref(v_val_6015_);
return v_res_6024_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13(lean_object* v_as_6025_, lean_object* v_as_x27_6026_, lean_object* v_b_6027_, lean_object* v_a_6028_, lean_object* v___y_6029_, lean_object* v___y_6030_){
_start:
{
lean_object* v___x_6032_; 
v___x_6032_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___redArg(v_as_x27_6026_, v_b_6027_, v___y_6029_, v___y_6030_);
return v___x_6032_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13___boxed(lean_object* v_as_6033_, lean_object* v_as_x27_6034_, lean_object* v_b_6035_, lean_object* v_a_6036_, lean_object* v___y_6037_, lean_object* v___y_6038_, lean_object* v___y_6039_){
_start:
{
lean_object* v_res_6040_; 
v_res_6040_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__13(v_as_6033_, v_as_x27_6034_, v_b_6035_, v_a_6036_, v___y_6037_, v___y_6038_);
lean_dec_ref(v___y_6037_);
lean_dec(v_as_x27_6034_);
lean_dec(v_as_6033_);
return v_res_6040_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22(lean_object* v_as_6041_, lean_object* v_as_x27_6042_, lean_object* v_b_6043_, lean_object* v_a_6044_, lean_object* v___y_6045_, lean_object* v___y_6046_){
_start:
{
lean_object* v___x_6048_; 
v___x_6048_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___redArg(v_as_x27_6042_, v_b_6043_, v___y_6045_, v___y_6046_);
return v___x_6048_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22___boxed(lean_object* v_as_6049_, lean_object* v_as_x27_6050_, lean_object* v_b_6051_, lean_object* v_a_6052_, lean_object* v___y_6053_, lean_object* v___y_6054_, lean_object* v___y_6055_){
_start:
{
lean_object* v_res_6056_; 
v_res_6056_ = l_List_forIn_x27_loop___at___00LeanExport_dumpConstant_spec__22(v_as_6049_, v_as_x27_6050_, v_b_6051_, v_a_6052_, v___y_6053_, v___y_6054_);
lean_dec_ref(v___y_6053_);
lean_dec(v_as_x27_6050_);
lean_dec(v_as_6049_);
return v_res_6056_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1(void){
_start:
{
lean_object* v___x_6058_; lean_object* v___x_6059_; 
v___x_6058_ = l_Lean_versionString;
v___x_6059_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6059_, 0, v___x_6058_);
return v___x_6059_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2(void){
_start:
{
lean_object* v___x_6060_; lean_object* v___x_6061_; lean_object* v___x_6062_; 
v___x_6060_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__1);
v___x_6061_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__0));
v___x_6062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6062_, 0, v___x_6061_);
lean_ctor_set(v___x_6062_, 1, v___x_6060_);
return v___x_6062_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4(void){
_start:
{
lean_object* v___x_6064_; lean_object* v___x_6065_; 
v___x_6064_ = l_Lean_githash;
v___x_6065_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6065_, 0, v___x_6064_);
return v___x_6065_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5(void){
_start:
{
lean_object* v___x_6066_; lean_object* v___x_6067_; lean_object* v___x_6068_; 
v___x_6066_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__4);
v___x_6067_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__3));
v___x_6068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6068_, 0, v___x_6067_);
lean_ctor_set(v___x_6068_, 1, v___x_6066_);
return v___x_6068_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6(void){
_start:
{
lean_object* v___x_6069_; lean_object* v___x_6070_; lean_object* v___x_6071_; 
v___x_6069_ = lean_box(0);
v___x_6070_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__5);
v___x_6071_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6071_, 0, v___x_6070_);
lean_ctor_set(v___x_6071_, 1, v___x_6069_);
return v___x_6071_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7(void){
_start:
{
lean_object* v___x_6072_; lean_object* v___x_6073_; lean_object* v___x_6074_; 
v___x_6072_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__6);
v___x_6073_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__2);
v___x_6074_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6074_, 0, v___x_6073_);
lean_ctor_set(v___x_6074_, 1, v___x_6072_);
return v___x_6074_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8(void){
_start:
{
lean_object* v___x_6075_; lean_object* v_leanMeta_6076_; 
v___x_6075_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__7);
v_leanMeta_6076_ = l_Lean_Json_mkObj(v___x_6075_);
return v_leanMeta_6076_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17(void){
_start:
{
lean_object* v___x_6095_; lean_object* v_exporterMeta_6096_; 
v___x_6095_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__16));
v_exporterMeta_6096_ = l_Lean_Json_mkObj(v___x_6095_);
return v_exporterMeta_6096_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18(void){
_start:
{
lean_object* v___x_6097_; lean_object* v_formatMeta_6098_; 
v___x_6097_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__15));
v_formatMeta_6098_ = l_Lean_Json_mkObj(v___x_6097_);
return v_formatMeta_6098_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21(void){
_start:
{
lean_object* v_exporterMeta_6101_; lean_object* v___x_6102_; lean_object* v___x_6103_; 
v_exporterMeta_6101_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__17);
v___x_6102_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__20));
v___x_6103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6103_, 0, v___x_6102_);
lean_ctor_set(v___x_6103_, 1, v_exporterMeta_6101_);
return v___x_6103_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23(void){
_start:
{
lean_object* v_leanMeta_6105_; lean_object* v___x_6106_; lean_object* v___x_6107_; 
v_leanMeta_6105_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__8);
v___x_6106_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__22));
v___x_6107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6107_, 0, v___x_6106_);
lean_ctor_set(v___x_6107_, 1, v_leanMeta_6105_);
return v___x_6107_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25(void){
_start:
{
lean_object* v_formatMeta_6109_; lean_object* v___x_6110_; lean_object* v___x_6111_; 
v_formatMeta_6109_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__18);
v___x_6110_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__24));
v___x_6111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6111_, 0, v___x_6110_);
lean_ctor_set(v___x_6111_, 1, v_formatMeta_6109_);
return v___x_6111_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26(void){
_start:
{
lean_object* v___x_6112_; lean_object* v___x_6113_; lean_object* v___x_6114_; 
v___x_6112_ = lean_box(0);
v___x_6113_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__25);
v___x_6114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6114_, 0, v___x_6113_);
lean_ctor_set(v___x_6114_, 1, v___x_6112_);
return v___x_6114_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27(void){
_start:
{
lean_object* v___x_6115_; lean_object* v___x_6116_; lean_object* v___x_6117_; 
v___x_6115_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__26);
v___x_6116_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__23);
v___x_6117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6117_, 0, v___x_6116_);
lean_ctor_set(v___x_6117_, 1, v___x_6115_);
return v___x_6117_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28(void){
_start:
{
lean_object* v___x_6118_; lean_object* v___x_6119_; lean_object* v___x_6120_; 
v___x_6118_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__27);
v___x_6119_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__21);
v___x_6120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6120_, 0, v___x_6119_);
lean_ctor_set(v___x_6120_, 1, v___x_6118_);
return v___x_6120_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29(void){
_start:
{
lean_object* v___x_6121_; lean_object* v___x_6122_; 
v___x_6121_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__28);
v___x_6122_ = l_Lean_Json_mkObj(v___x_6121_);
return v___x_6122_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30(void){
_start:
{
lean_object* v___x_6123_; lean_object* v___x_6124_; lean_object* v___x_6125_; 
v___x_6123_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__29);
v___x_6124_ = ((lean_object*)(l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__19));
v___x_6125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6125_, 0, v___x_6124_);
lean_ctor_set(v___x_6125_, 1, v___x_6123_);
return v___x_6125_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31(void){
_start:
{
lean_object* v___x_6126_; lean_object* v___x_6127_; lean_object* v___x_6128_; 
v___x_6126_ = lean_box(0);
v___x_6127_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__30);
v___x_6128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6128_, 0, v___x_6127_);
lean_ctor_set(v___x_6128_, 1, v___x_6126_);
return v___x_6128_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32(void){
_start:
{
lean_object* v___x_6129_; lean_object* v___x_6130_; 
v___x_6129_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__31);
v___x_6130_ = l_Lean_Json_mkObj(v___x_6129_);
return v___x_6130_;
}
}
static lean_object* _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata(void){
_start:
{
lean_object* v___x_6131_; 
v___x_6131_ = lean_obj_once(&l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32, &l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32_once, _init_l___private_LeanExport_Basic_0__LeanExport_exportMetadata___closed__32);
return v___x_6131_;
}
}
static lean_object* _init_l_LeanExport_dumpMetadata___redArg___closed__0(void){
_start:
{
lean_object* v___x_6132_; lean_object* v___x_6133_; 
v___x_6132_ = l___private_LeanExport_Basic_0__LeanExport_exportMetadata;
v___x_6133_ = l_Lean_Json_compress(v___x_6132_);
return v___x_6133_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___redArg(lean_object* v_a_6134_){
_start:
{
lean_object* v___x_6136_; lean_object* v___x_6137_; 
v___x_6136_ = lean_obj_once(&l_LeanExport_dumpMetadata___redArg___closed__0, &l_LeanExport_dumpMetadata___redArg___closed__0_once, _init_l_LeanExport_dumpMetadata___redArg___closed__0);
v___x_6137_ = l_IO_println___at___00__private_LeanExport_Basic_0__LeanExport_dumpName_spec__1(v___x_6136_);
if (lean_obj_tag(v___x_6137_) == 0)
{
lean_object* v_a_6138_; lean_object* v___x_6140_; uint8_t v_isShared_6141_; uint8_t v_isSharedCheck_6146_; 
v_a_6138_ = lean_ctor_get(v___x_6137_, 0);
v_isSharedCheck_6146_ = !lean_is_exclusive(v___x_6137_);
if (v_isSharedCheck_6146_ == 0)
{
v___x_6140_ = v___x_6137_;
v_isShared_6141_ = v_isSharedCheck_6146_;
goto v_resetjp_6139_;
}
else
{
lean_inc(v_a_6138_);
lean_dec(v___x_6137_);
v___x_6140_ = lean_box(0);
v_isShared_6141_ = v_isSharedCheck_6146_;
goto v_resetjp_6139_;
}
v_resetjp_6139_:
{
lean_object* v___x_6142_; lean_object* v___x_6144_; 
v___x_6142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6142_, 0, v_a_6138_);
lean_ctor_set(v___x_6142_, 1, v_a_6134_);
if (v_isShared_6141_ == 0)
{
lean_ctor_set(v___x_6140_, 0, v___x_6142_);
v___x_6144_ = v___x_6140_;
goto v_reusejp_6143_;
}
else
{
lean_object* v_reuseFailAlloc_6145_; 
v_reuseFailAlloc_6145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6145_, 0, v___x_6142_);
v___x_6144_ = v_reuseFailAlloc_6145_;
goto v_reusejp_6143_;
}
v_reusejp_6143_:
{
return v___x_6144_;
}
}
}
else
{
lean_object* v_a_6147_; lean_object* v___x_6149_; uint8_t v_isShared_6150_; uint8_t v_isSharedCheck_6154_; 
lean_dec_ref(v_a_6134_);
v_a_6147_ = lean_ctor_get(v___x_6137_, 0);
v_isSharedCheck_6154_ = !lean_is_exclusive(v___x_6137_);
if (v_isSharedCheck_6154_ == 0)
{
v___x_6149_ = v___x_6137_;
v_isShared_6150_ = v_isSharedCheck_6154_;
goto v_resetjp_6148_;
}
else
{
lean_inc(v_a_6147_);
lean_dec(v___x_6137_);
v___x_6149_ = lean_box(0);
v_isShared_6150_ = v_isSharedCheck_6154_;
goto v_resetjp_6148_;
}
v_resetjp_6148_:
{
lean_object* v___x_6152_; 
if (v_isShared_6150_ == 0)
{
v___x_6152_ = v___x_6149_;
goto v_reusejp_6151_;
}
else
{
lean_object* v_reuseFailAlloc_6153_; 
v_reuseFailAlloc_6153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6153_, 0, v_a_6147_);
v___x_6152_ = v_reuseFailAlloc_6153_;
goto v_reusejp_6151_;
}
v_reusejp_6151_:
{
return v___x_6152_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___redArg___boxed(lean_object* v_a_6155_, lean_object* v_a_6156_){
_start:
{
lean_object* v_res_6157_; 
v_res_6157_ = l_LeanExport_dumpMetadata___redArg(v_a_6155_);
return v_res_6157_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata(lean_object* v_a_6158_, lean_object* v_a_6159_){
_start:
{
lean_object* v___x_6161_; 
v___x_6161_ = l_LeanExport_dumpMetadata___redArg(v_a_6159_);
return v___x_6161_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpMetadata___boxed(lean_object* v_a_6162_, lean_object* v_a_6163_, lean_object* v_a_6164_){
_start:
{
lean_object* v_res_6165_; 
v_res_6165_ = l_LeanExport_dumpMetadata(v_a_6162_, v_a_6163_);
lean_dec_ref(v_a_6162_);
return v_res_6165_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(lean_object* v_as_x27_6166_, lean_object* v_b_6167_, lean_object* v___y_6168_, lean_object* v___y_6169_){
_start:
{
if (lean_obj_tag(v_as_x27_6166_) == 0)
{
lean_object* v___x_6171_; lean_object* v___x_6172_; 
v___x_6171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6171_, 0, v_b_6167_);
lean_ctor_set(v___x_6171_, 1, v___y_6169_);
v___x_6172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6172_, 0, v___x_6171_);
return v___x_6172_;
}
else
{
lean_object* v_head_6173_; lean_object* v_tail_6174_; lean_object* v_visitedNames_6175_; lean_object* v_visitedLevels_6176_; lean_object* v_visitedExprs_6177_; lean_object* v_visitedConstants_6178_; uint8_t v_exportMData_6179_; uint8_t v_exportUnsafe_6180_; uint8_t v_ignoreMissing_6181_; lean_object* v_recursorMap_6182_; lean_object* v___x_6184_; uint8_t v_isShared_6185_; uint8_t v_isSharedCheck_6195_; 
v_head_6173_ = lean_ctor_get(v_as_x27_6166_, 0);
v_tail_6174_ = lean_ctor_get(v_as_x27_6166_, 1);
v_visitedNames_6175_ = lean_ctor_get(v___y_6169_, 0);
v_visitedLevels_6176_ = lean_ctor_get(v___y_6169_, 1);
v_visitedExprs_6177_ = lean_ctor_get(v___y_6169_, 2);
v_visitedConstants_6178_ = lean_ctor_get(v___y_6169_, 3);
v_exportMData_6179_ = lean_ctor_get_uint8(v___y_6169_, sizeof(void*)*6);
v_exportUnsafe_6180_ = lean_ctor_get_uint8(v___y_6169_, sizeof(void*)*6 + 1);
v_ignoreMissing_6181_ = lean_ctor_get_uint8(v___y_6169_, sizeof(void*)*6 + 2);
v_recursorMap_6182_ = lean_ctor_get(v___y_6169_, 5);
v_isSharedCheck_6195_ = !lean_is_exclusive(v___y_6169_);
if (v_isSharedCheck_6195_ == 0)
{
lean_object* v_unused_6196_; 
v_unused_6196_ = lean_ctor_get(v___y_6169_, 4);
lean_dec(v_unused_6196_);
v___x_6184_ = v___y_6169_;
v_isShared_6185_ = v_isSharedCheck_6195_;
goto v_resetjp_6183_;
}
else
{
lean_inc(v_recursorMap_6182_);
lean_inc(v_visitedConstants_6178_);
lean_inc(v_visitedExprs_6177_);
lean_inc(v_visitedLevels_6176_);
lean_inc(v_visitedNames_6175_);
lean_dec(v___y_6169_);
v___x_6184_ = lean_box(0);
v_isShared_6185_ = v_isSharedCheck_6195_;
goto v_resetjp_6183_;
}
v_resetjp_6183_:
{
lean_object* v___x_6186_; lean_object* v___x_6187_; lean_object* v___x_6189_; 
v___x_6186_ = lean_box(0);
v___x_6187_ = lean_obj_once(&l_LeanExport_dumpExpr___closed__1, &l_LeanExport_dumpExpr___closed__1_once, _init_l_LeanExport_dumpExpr___closed__1);
if (v_isShared_6185_ == 0)
{
lean_ctor_set(v___x_6184_, 4, v___x_6187_);
v___x_6189_ = v___x_6184_;
goto v_reusejp_6188_;
}
else
{
lean_object* v_reuseFailAlloc_6194_; 
v_reuseFailAlloc_6194_ = lean_alloc_ctor(0, 6, 3);
lean_ctor_set(v_reuseFailAlloc_6194_, 0, v_visitedNames_6175_);
lean_ctor_set(v_reuseFailAlloc_6194_, 1, v_visitedLevels_6176_);
lean_ctor_set(v_reuseFailAlloc_6194_, 2, v_visitedExprs_6177_);
lean_ctor_set(v_reuseFailAlloc_6194_, 3, v_visitedConstants_6178_);
lean_ctor_set(v_reuseFailAlloc_6194_, 4, v___x_6187_);
lean_ctor_set(v_reuseFailAlloc_6194_, 5, v_recursorMap_6182_);
lean_ctor_set_uint8(v_reuseFailAlloc_6194_, sizeof(void*)*6, v_exportMData_6179_);
lean_ctor_set_uint8(v_reuseFailAlloc_6194_, sizeof(void*)*6 + 1, v_exportUnsafe_6180_);
lean_ctor_set_uint8(v_reuseFailAlloc_6194_, sizeof(void*)*6 + 2, v_ignoreMissing_6181_);
v___x_6189_ = v_reuseFailAlloc_6194_;
goto v_reusejp_6188_;
}
v_reusejp_6188_:
{
lean_object* v___x_6190_; 
lean_inc(v_head_6173_);
v___x_6190_ = l_LeanExport_dumpConstant(v_head_6173_, v___y_6168_, v___x_6189_);
if (lean_obj_tag(v___x_6190_) == 0)
{
lean_object* v_a_6191_; lean_object* v_snd_6192_; 
v_a_6191_ = lean_ctor_get(v___x_6190_, 0);
lean_inc(v_a_6191_);
lean_dec_ref_known(v___x_6190_, 1);
v_snd_6192_ = lean_ctor_get(v_a_6191_, 1);
lean_inc(v_snd_6192_);
lean_dec(v_a_6191_);
v_as_x27_6166_ = v_tail_6174_;
v_b_6167_ = v___x_6186_;
v___y_6169_ = v_snd_6192_;
goto _start;
}
else
{
return v___x_6190_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg___boxed(lean_object* v_as_x27_6197_, lean_object* v_b_6198_, lean_object* v___y_6199_, lean_object* v___y_6200_, lean_object* v___y_6201_){
_start:
{
lean_object* v_res_6202_; 
v_res_6202_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(v_as_x27_6197_, v_b_6198_, v___y_6199_, v___y_6200_);
lean_dec_ref(v___y_6199_);
lean_dec(v_as_x27_6197_);
return v_res_6202_;
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___lam__0(lean_object* v_env_6203_, lean_object* v_cliOptions_6204_, lean_object* v___y_6205_, lean_object* v___y_6206_, lean_object* v___y_6207_){
_start:
{
lean_object* v___x_6209_; 
v___x_6209_ = l_LeanExport_initState(v_env_6203_, v_cliOptions_6204_, v___y_6206_, v___y_6207_);
if (lean_obj_tag(v___x_6209_) == 0)
{
lean_object* v_a_6210_; lean_object* v_snd_6211_; lean_object* v___x_6212_; 
v_a_6210_ = lean_ctor_get(v___x_6209_, 0);
lean_inc(v_a_6210_);
lean_dec_ref_known(v___x_6209_, 1);
v_snd_6211_ = lean_ctor_get(v_a_6210_, 1);
lean_inc(v_snd_6211_);
lean_dec(v_a_6210_);
v___x_6212_ = l_LeanExport_dumpMetadata___redArg(v_snd_6211_);
if (lean_obj_tag(v___x_6212_) == 0)
{
lean_object* v_a_6213_; lean_object* v_snd_6214_; lean_object* v___x_6215_; lean_object* v___x_6216_; 
v_a_6213_ = lean_ctor_get(v___x_6212_, 0);
lean_inc(v_a_6213_);
lean_dec_ref_known(v___x_6212_, 1);
v_snd_6214_ = lean_ctor_get(v_a_6213_, 1);
lean_inc(v_snd_6214_);
lean_dec(v_a_6213_);
v___x_6215_ = lean_box(0);
v___x_6216_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(v___y_6205_, v___x_6215_, v___y_6206_, v_snd_6214_);
if (lean_obj_tag(v___x_6216_) == 0)
{
lean_object* v_a_6217_; lean_object* v___x_6219_; uint8_t v_isShared_6220_; uint8_t v_isSharedCheck_6233_; 
v_a_6217_ = lean_ctor_get(v___x_6216_, 0);
v_isSharedCheck_6233_ = !lean_is_exclusive(v___x_6216_);
if (v_isSharedCheck_6233_ == 0)
{
v___x_6219_ = v___x_6216_;
v_isShared_6220_ = v_isSharedCheck_6233_;
goto v_resetjp_6218_;
}
else
{
lean_inc(v_a_6217_);
lean_dec(v___x_6216_);
v___x_6219_ = lean_box(0);
v_isShared_6220_ = v_isSharedCheck_6233_;
goto v_resetjp_6218_;
}
v_resetjp_6218_:
{
lean_object* v_snd_6221_; lean_object* v___x_6223_; uint8_t v_isShared_6224_; uint8_t v_isSharedCheck_6231_; 
v_snd_6221_ = lean_ctor_get(v_a_6217_, 1);
v_isSharedCheck_6231_ = !lean_is_exclusive(v_a_6217_);
if (v_isSharedCheck_6231_ == 0)
{
lean_object* v_unused_6232_; 
v_unused_6232_ = lean_ctor_get(v_a_6217_, 0);
lean_dec(v_unused_6232_);
v___x_6223_ = v_a_6217_;
v_isShared_6224_ = v_isSharedCheck_6231_;
goto v_resetjp_6222_;
}
else
{
lean_inc(v_snd_6221_);
lean_dec(v_a_6217_);
v___x_6223_ = lean_box(0);
v_isShared_6224_ = v_isSharedCheck_6231_;
goto v_resetjp_6222_;
}
v_resetjp_6222_:
{
lean_object* v___x_6226_; 
if (v_isShared_6224_ == 0)
{
lean_ctor_set(v___x_6223_, 0, v___x_6215_);
v___x_6226_ = v___x_6223_;
goto v_reusejp_6225_;
}
else
{
lean_object* v_reuseFailAlloc_6230_; 
v_reuseFailAlloc_6230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6230_, 0, v___x_6215_);
lean_ctor_set(v_reuseFailAlloc_6230_, 1, v_snd_6221_);
v___x_6226_ = v_reuseFailAlloc_6230_;
goto v_reusejp_6225_;
}
v_reusejp_6225_:
{
lean_object* v___x_6228_; 
if (v_isShared_6220_ == 0)
{
lean_ctor_set(v___x_6219_, 0, v___x_6226_);
v___x_6228_ = v___x_6219_;
goto v_reusejp_6227_;
}
else
{
lean_object* v_reuseFailAlloc_6229_; 
v_reuseFailAlloc_6229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6229_, 0, v___x_6226_);
v___x_6228_ = v_reuseFailAlloc_6229_;
goto v_reusejp_6227_;
}
v_reusejp_6227_:
{
return v___x_6228_;
}
}
}
}
}
else
{
return v___x_6216_;
}
}
else
{
return v___x_6212_;
}
}
else
{
return v___x_6209_;
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___lam__0___boxed(lean_object* v_env_6234_, lean_object* v_cliOptions_6235_, lean_object* v___y_6236_, lean_object* v___y_6237_, lean_object* v___y_6238_, lean_object* v___y_6239_){
_start:
{
lean_object* v_res_6240_; 
v_res_6240_ = l_LeanExport_dumpEnv___lam__0(v_env_6234_, v_cliOptions_6235_, v___y_6236_, v___y_6237_, v___y_6238_);
lean_dec_ref(v___y_6237_);
lean_dec(v___y_6236_);
lean_dec(v_cliOptions_6235_);
return v_res_6240_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00LeanExport_dumpEnv_spec__2(lean_object* v_a_6241_, lean_object* v_a_6242_){
_start:
{
if (lean_obj_tag(v_a_6241_) == 0)
{
lean_object* v___x_6243_; 
v___x_6243_ = l_List_reverse___redArg(v_a_6242_);
return v___x_6243_;
}
else
{
lean_object* v_head_6244_; lean_object* v_tail_6245_; lean_object* v___x_6247_; uint8_t v_isShared_6248_; uint8_t v_isSharedCheck_6255_; 
v_head_6244_ = lean_ctor_get(v_a_6241_, 0);
v_tail_6245_ = lean_ctor_get(v_a_6241_, 1);
v_isSharedCheck_6255_ = !lean_is_exclusive(v_a_6241_);
if (v_isSharedCheck_6255_ == 0)
{
v___x_6247_ = v_a_6241_;
v_isShared_6248_ = v_isSharedCheck_6255_;
goto v_resetjp_6246_;
}
else
{
lean_inc(v_tail_6245_);
lean_inc(v_head_6244_);
lean_dec(v_a_6241_);
v___x_6247_ = lean_box(0);
v_isShared_6248_ = v_isSharedCheck_6255_;
goto v_resetjp_6246_;
}
v_resetjp_6246_:
{
uint8_t v___x_6249_; 
v___x_6249_ = l_Lean_Name_isInternal(v_head_6244_);
if (v___x_6249_ == 0)
{
lean_object* v___x_6251_; 
if (v_isShared_6248_ == 0)
{
lean_ctor_set(v___x_6247_, 1, v_a_6242_);
v___x_6251_ = v___x_6247_;
goto v_reusejp_6250_;
}
else
{
lean_object* v_reuseFailAlloc_6253_; 
v_reuseFailAlloc_6253_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6253_, 0, v_head_6244_);
lean_ctor_set(v_reuseFailAlloc_6253_, 1, v_a_6242_);
v___x_6251_ = v_reuseFailAlloc_6253_;
goto v_reusejp_6250_;
}
v_reusejp_6250_:
{
v_a_6241_ = v_tail_6245_;
v_a_6242_ = v___x_6251_;
goto _start;
}
}
else
{
lean_del_object(v___x_6247_);
lean_dec(v_head_6244_);
v_a_6241_ = v_tail_6245_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00LeanExport_dumpEnv_spec__1(lean_object* v_a_6256_, lean_object* v_a_6257_){
_start:
{
if (lean_obj_tag(v_a_6256_) == 0)
{
lean_object* v___x_6258_; 
v___x_6258_ = l_List_reverse___redArg(v_a_6257_);
return v___x_6258_;
}
else
{
lean_object* v_head_6259_; lean_object* v_tail_6260_; lean_object* v___x_6262_; uint8_t v_isShared_6263_; uint8_t v_isSharedCheck_6269_; 
v_head_6259_ = lean_ctor_get(v_a_6256_, 0);
v_tail_6260_ = lean_ctor_get(v_a_6256_, 1);
v_isSharedCheck_6269_ = !lean_is_exclusive(v_a_6256_);
if (v_isSharedCheck_6269_ == 0)
{
v___x_6262_ = v_a_6256_;
v_isShared_6263_ = v_isSharedCheck_6269_;
goto v_resetjp_6261_;
}
else
{
lean_inc(v_tail_6260_);
lean_inc(v_head_6259_);
lean_dec(v_a_6256_);
v___x_6262_ = lean_box(0);
v_isShared_6263_ = v_isSharedCheck_6269_;
goto v_resetjp_6261_;
}
v_resetjp_6261_:
{
lean_object* v_fst_6264_; lean_object* v___x_6266_; 
v_fst_6264_ = lean_ctor_get(v_head_6259_, 0);
lean_inc(v_fst_6264_);
lean_dec(v_head_6259_);
if (v_isShared_6263_ == 0)
{
lean_ctor_set(v___x_6262_, 1, v_a_6257_);
lean_ctor_set(v___x_6262_, 0, v_fst_6264_);
v___x_6266_ = v___x_6262_;
goto v_reusejp_6265_;
}
else
{
lean_object* v_reuseFailAlloc_6268_; 
v_reuseFailAlloc_6268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6268_, 0, v_fst_6264_);
lean_ctor_set(v_reuseFailAlloc_6268_, 1, v_a_6257_);
v___x_6266_ = v_reuseFailAlloc_6268_;
goto v_reusejp_6265_;
}
v_reusejp_6265_:
{
v_a_6256_ = v_tail_6260_;
v_a_6257_ = v___x_6266_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv(lean_object* v_env_6270_, lean_object* v_constants_x3f_6271_, lean_object* v_cliOptions_6272_){
_start:
{
lean_object* v___y_6275_; 
if (lean_obj_tag(v_constants_x3f_6271_) == 0)
{
lean_object* v___x_6278_; lean_object* v___x_6279_; lean_object* v___x_6280_; lean_object* v___x_6281_; lean_object* v___x_6282_; 
lean_inc_ref(v_env_6270_);
v___x_6278_ = l_Lean_Environment_constants(v_env_6270_);
v___x_6279_ = l_Lean_ConstMap_toList(v___x_6278_);
v___x_6280_ = lean_box(0);
v___x_6281_ = l_List_mapTR_loop___at___00LeanExport_dumpEnv_spec__1(v___x_6279_, v___x_6280_);
v___x_6282_ = l_List_filterTR_loop___at___00LeanExport_dumpEnv_spec__2(v___x_6281_, v___x_6280_);
v___y_6275_ = v___x_6282_;
goto v___jp_6274_;
}
else
{
lean_object* v_val_6283_; 
v_val_6283_ = lean_ctor_get(v_constants_x3f_6271_, 0);
lean_inc(v_val_6283_);
lean_dec_ref_known(v_constants_x3f_6271_, 1);
v___y_6275_ = v_val_6283_;
goto v___jp_6274_;
}
v___jp_6274_:
{
lean_object* v___f_6276_; lean_object* v___x_6277_; 
lean_inc_ref(v_env_6270_);
v___f_6276_ = lean_alloc_closure((void*)(l_LeanExport_dumpEnv___lam__0___boxed), 6, 3);
lean_closure_set(v___f_6276_, 0, v_env_6270_);
lean_closure_set(v___f_6276_, 1, v_cliOptions_6272_);
lean_closure_set(v___f_6276_, 2, v___y_6275_);
v___x_6277_ = l_LeanExport_M_run___redArg(v_env_6270_, v___f_6276_);
return v___x_6277_;
}
}
}
LEAN_EXPORT lean_object* l_LeanExport_dumpEnv___boxed(lean_object* v_env_6284_, lean_object* v_constants_x3f_6285_, lean_object* v_cliOptions_6286_, lean_object* v_a_6287_){
_start:
{
lean_object* v_res_6288_; 
v_res_6288_ = l_LeanExport_dumpEnv(v_env_6284_, v_constants_x3f_6285_, v_cliOptions_6286_);
return v_res_6288_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0(lean_object* v_as_6289_, lean_object* v_as_x27_6290_, lean_object* v_b_6291_, lean_object* v_a_6292_, lean_object* v___y_6293_, lean_object* v___y_6294_){
_start:
{
lean_object* v___x_6296_; 
v___x_6296_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___redArg(v_as_x27_6290_, v_b_6291_, v___y_6293_, v___y_6294_);
return v___x_6296_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0___boxed(lean_object* v_as_6297_, lean_object* v_as_x27_6298_, lean_object* v_b_6299_, lean_object* v_a_6300_, lean_object* v___y_6301_, lean_object* v___y_6302_, lean_object* v___y_6303_){
_start:
{
lean_object* v_res_6304_; 
v_res_6304_ = l_List_forIn_x27_loop___at___00LeanExport_dumpEnv_spec__0(v_as_6297_, v_as_x27_6298_, v_b_6299_, v_a_6300_, v___y_6301_, v___y_6302_);
lean_dec_ref(v___y_6301_);
lean_dec(v_as_x27_6298_);
lean_dec(v_as_6297_);
return v_res_6304_;
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
