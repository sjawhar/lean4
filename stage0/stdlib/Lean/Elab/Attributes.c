// Lean compiler output
// Module: Lean.Elab.Attributes
// Imports: public import Lean.Elab.Util public import Lean.Compiler.InitAttr import Lean.Parser.Term public import Init.Data.Format.Macro
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
extern lean_object* l_Lean_regularInitAttr;
lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_recordExtraModUseFromDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Macro_getCurrNamespace(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Elab_liftMacroM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getAttributeImpl(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_expandMacros(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_withoutExporting___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_logException___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
static const lean_ctor_object l_Lean_Elab_instInhabitedAttribute_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_instInhabitedAttribute_default___closed__0 = (const lean_object*)&l_Lean_Elab_instInhabitedAttribute_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedAttribute_default = (const lean_object*)&l_Lean_Elab_instInhabitedAttribute_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedAttribute = (const lean_object*)&l_Lean_Elab_instInhabitedAttribute_default___closed__0_value;
static const lean_string_object l_Lean_Elab_instToFormatAttribute___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_instToFormatAttribute___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Elab_instToFormatAttribute___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_instToFormatAttribute___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__3;
static const lean_ctor_object l_Lean_Elab_instToFormatAttribute___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Elab_instToFormatAttribute___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__1_value)}};
static const lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_instToFormatAttribute___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__6_value;
static const lean_string_object l_Lean_Elab_instToFormatAttribute___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "local "};
static const lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__7_value;
static const lean_string_object l_Lean_Elab_instToFormatAttribute___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "scoped "};
static const lean_object* l_Lean_Elab_instToFormatAttribute___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___lam__0___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instToFormatAttribute___lam__0(lean_object*);
static const lean_closure_object l_Lean_Elab_instToFormatAttribute___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instToFormatAttribute___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToFormatAttribute___closed__0 = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instToFormatAttribute = (const lean_object*)&l_Lean_Elab_instToFormatAttribute___closed__0_value;
static const lean_string_object l_Lean_Elab_toAttributeKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_toAttributeKind___closed__0 = (const lean_object*)&l_Lean_Elab_toAttributeKind___closed__0_value;
static const lean_string_object l_Lean_Elab_toAttributeKind___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_toAttributeKind___closed__1 = (const lean_object*)&l_Lean_Elab_toAttributeKind___closed__1_value;
static const lean_string_object l_Lean_Elab_toAttributeKind___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_toAttributeKind___closed__2 = (const lean_object*)&l_Lean_Elab_toAttributeKind___closed__2_value;
static const lean_string_object l_Lean_Elab_toAttributeKind___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_Elab_toAttributeKind___closed__3 = (const lean_object*)&l_Lean_Elab_toAttributeKind___closed__3_value;
static const lean_ctor_object l_Lean_Elab_toAttributeKind___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_toAttributeKind___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_toAttributeKind___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_toAttributeKind___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_toAttributeKind___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_toAttributeKind___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_toAttributeKind___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__3_value),LEAN_SCALAR_PTR_LITERAL(199, 36, 31, 135, 78, 131, 139, 152)}};
static const lean_object* l_Lean_Elab_toAttributeKind___closed__4 = (const lean_object*)&l_Lean_Elab_toAttributeKind___closed__4_value;
static const lean_string_object l_Lean_Elab_toAttributeKind___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Scoped attributes must be used inside namespaces"};
static const lean_object* l_Lean_Elab_toAttributeKind___closed__5 = (const lean_object*)&l_Lean_Elab_toAttributeKind___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_toAttributeKind(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_toAttributeKind___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_mkAttrKindGlobal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lean_Elab_mkAttrKindGlobal___closed__0 = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__0_value;
static const lean_ctor_object l_Lean_Elab_mkAttrKindGlobal___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_mkAttrKindGlobal___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_mkAttrKindGlobal___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_mkAttrKindGlobal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__0_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lean_Elab_mkAttrKindGlobal___closed__1 = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__1_value;
static const lean_array_object l_Lean_Elab_mkAttrKindGlobal___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_mkAttrKindGlobal___closed__2 = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__2_value;
static const lean_string_object l_Lean_Elab_mkAttrKindGlobal___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_mkAttrKindGlobal___closed__3 = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__3_value;
static const lean_ctor_object l_Lean_Elab_mkAttrKindGlobal___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__3_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_mkAttrKindGlobal___closed__4 = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__4_value;
static const lean_ctor_object l_Lean_Elab_mkAttrKindGlobal___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__4_value),((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__2_value)}};
static const lean_object* l_Lean_Elab_mkAttrKindGlobal___closed__5 = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__5_value;
static const lean_array_object l_Lean_Elab_mkAttrKindGlobal___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__5_value)}};
static const lean_object* l_Lean_Elab_mkAttrKindGlobal___closed__6 = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__6_value;
static const lean_ctor_object l_Lean_Elab_mkAttrKindGlobal___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__1_value),((lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__6_value)}};
static const lean_object* l_Lean_Elab_mkAttrKindGlobal___closed__7 = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__7_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_mkAttrKindGlobal = (const lean_object*)&l_Lean_Elab_mkAttrKindGlobal___closed__7_value;
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_elabAttr___redArg___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___redArg___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___redArg___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__0___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Elab_elabAttr___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot use attribute `["};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___closed__1;
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "]`: module `"};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___closed__2 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__5___closed__2_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___closed__3;
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "` is loaded for IR only (reached as a private `meta` dependency). Add an import of `"};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___closed__4 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__5___closed__4_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___redArg___lam__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___closed__5;
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___closed__6 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__5___closed__6_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___redArg___lam__5___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Unknown attribute `["};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__8___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__8___closed__0_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___redArg___lam__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___redArg___lam__8___closed__1;
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]`"};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__8___closed__2 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__8___closed__2_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___redArg___lam__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___redArg___lam__8___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__10(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__13___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__0_value;
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__13___closed__1 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__1_value;
static const lean_ctor_object l_Lean_Elab_elabAttr___redArg___lam__13___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___redArg___lam__13___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_toAttributeKind___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___redArg___lam__13___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___redArg___lam__13___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__1_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__13___closed__2 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__2_value;
static const lean_string_object l_Lean_Elab_elabAttr___redArg___lam__13___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Unknown attribute"};
static const lean_object* l_Lean_Elab_elabAttr___redArg___lam__13___closed__3 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___lam__13___closed__3_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___redArg___lam__13___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___redArg___lam__13___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__13(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__11___boxed(lean_object**);
static const lean_closure_object l_Lean_Elab_elabAttr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_elabAttr___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_elabAttr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__6(lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_elabAttrs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_elabAttrs___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttrs___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_instToFormatAttribute___lam__0___closed__2(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = ((lean_object*)(l_Lean_Elab_instToFormatAttribute___lam__0___closed__0));
v___x_10_ = lean_string_length(v___x_9_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Elab_instToFormatAttribute___lam__0___closed__3(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lean_obj_once(&l_Lean_Elab_instToFormatAttribute___lam__0___closed__2, &l_Lean_Elab_instToFormatAttribute___lam__0___closed__2_once, _init_l_Lean_Elab_instToFormatAttribute___lam__0___closed__2);
v___x_12_ = lean_nat_to_int(v___x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToFormatAttribute___lam__0(lean_object* v_attr_20_){
_start:
{
uint8_t v_kind_21_; lean_object* v_name_22_; lean_object* v_stx_23_; lean_object* v___y_25_; 
v_kind_21_ = lean_ctor_get_uint8(v_attr_20_, sizeof(void*)*2);
v_name_22_ = lean_ctor_get(v_attr_20_, 0);
lean_inc(v_name_22_);
v_stx_23_ = lean_ctor_get(v_attr_20_, 1);
lean_inc(v_stx_23_);
lean_dec_ref(v_attr_20_);
switch(v_kind_21_)
{
case 0:
{
lean_object* v___x_47_; 
v___x_47_ = ((lean_object*)(l_Lean_Elab_instToFormatAttribute___lam__0___closed__6));
v___y_25_ = v___x_47_;
goto v___jp_24_;
}
case 1:
{
lean_object* v___x_48_; 
v___x_48_ = ((lean_object*)(l_Lean_Elab_instToFormatAttribute___lam__0___closed__7));
v___y_25_ = v___x_48_;
goto v___jp_24_;
}
default: 
{
lean_object* v___x_49_; 
v___x_49_ = ((lean_object*)(l_Lean_Elab_instToFormatAttribute___lam__0___closed__8));
v___y_25_ = v___x_49_;
goto v___jp_24_;
}
}
v___jp_24_:
{
lean_object* v___x_26_; uint8_t v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; uint8_t v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; uint8_t v___x_45_; lean_object* v___x_46_; 
lean_inc_ref(v___y_25_);
v___x_26_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_26_, 0, v___y_25_);
v___x_27_ = 1;
v___x_28_ = l_Lean_Name_toString(v_name_22_, v___x_27_);
v___x_29_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
v___x_30_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_26_);
lean_ctor_set(v___x_30_, 1, v___x_29_);
v___x_31_ = lean_box(0);
v___x_32_ = 0;
v___x_33_ = l_Lean_Syntax_formatStx(v_stx_23_, v___x_31_, v___x_32_);
v___x_34_ = l_Std_Format_defWidth;
v___x_35_ = lean_unsigned_to_nat(0u);
v___x_36_ = l_Std_Format_pretty(v___x_33_, v___x_34_, v___x_35_, v___x_35_);
v___x_37_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
v___x_38_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_30_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
v___x_39_ = lean_obj_once(&l_Lean_Elab_instToFormatAttribute___lam__0___closed__3, &l_Lean_Elab_instToFormatAttribute___lam__0___closed__3_once, _init_l_Lean_Elab_instToFormatAttribute___lam__0___closed__3);
v___x_40_ = ((lean_object*)(l_Lean_Elab_instToFormatAttribute___lam__0___closed__4));
v___x_41_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
lean_ctor_set(v___x_41_, 1, v___x_38_);
v___x_42_ = ((lean_object*)(l_Lean_Elab_instToFormatAttribute___lam__0___closed__5));
v___x_43_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_43_, 0, v___x_41_);
lean_ctor_set(v___x_43_, 1, v___x_42_);
v___x_44_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_39_);
lean_ctor_set(v___x_44_, 1, v___x_43_);
v___x_45_ = 0;
v___x_46_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_46_, 0, v___x_44_);
lean_ctor_set_uint8(v___x_46_, sizeof(void*)*1, v___x_45_);
return v___x_46_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_toAttributeKind(lean_object* v_attrKindStx_62_, lean_object* v_a_63_, lean_object* v_a_64_){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_65_ = lean_unsigned_to_nat(0u);
v___x_66_ = l_Lean_Syntax_getArg(v_attrKindStx_62_, v___x_65_);
v___x_67_ = l_Lean_Syntax_isNone(v___x_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; uint8_t v___x_71_; 
v___x_68_ = l_Lean_Syntax_getArg(v___x_66_, v___x_65_);
lean_dec(v___x_66_);
v___x_69_ = l_Lean_Syntax_getKind(v___x_68_);
v___x_70_ = ((lean_object*)(l_Lean_Elab_toAttributeKind___closed__4));
v___x_71_ = lean_name_eq(v___x_69_, v___x_70_);
lean_dec(v___x_69_);
if (v___x_71_ == 0)
{
uint8_t v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_72_ = 1;
v___x_73_ = lean_box(v___x_72_);
v___x_74_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
lean_ctor_set(v___x_74_, 1, v_a_64_);
return v___x_74_;
}
else
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Macro_getCurrNamespace(v_a_63_, v_a_64_);
if (lean_obj_tag(v___x_75_) == 0)
{
lean_object* v_a_76_; lean_object* v_a_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_93_; 
v_a_76_ = lean_ctor_get(v___x_75_, 0);
v_a_77_ = lean_ctor_get(v___x_75_, 1);
v_isSharedCheck_93_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_93_ == 0)
{
v___x_79_ = v___x_75_;
v_isShared_80_ = v_isSharedCheck_93_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_a_77_);
lean_inc(v_a_76_);
lean_dec(v___x_75_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_93_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
uint8_t v___x_81_; 
v___x_81_ = l_Lean_Name_isAnonymous(v_a_76_);
lean_dec(v_a_76_);
if (v___x_81_ == 0)
{
uint8_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_85_; 
v___x_82_ = 2;
v___x_83_ = lean_box(v___x_82_);
if (v_isShared_80_ == 0)
{
lean_ctor_set(v___x_79_, 0, v___x_83_);
v___x_85_ = v___x_79_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_83_);
lean_ctor_set(v_reuseFailAlloc_86_, 1, v_a_77_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
}
}
else
{
lean_object* v_ref_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_91_; 
v_ref_87_ = lean_ctor_get(v_a_63_, 5);
v___x_88_ = ((lean_object*)(l_Lean_Elab_toAttributeKind___closed__5));
lean_inc(v_ref_87_);
v___x_89_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_89_, 0, v_ref_87_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
if (v_isShared_80_ == 0)
{
lean_ctor_set_tag(v___x_79_, 1);
lean_ctor_set(v___x_79_, 0, v___x_89_);
v___x_91_ = v___x_79_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v___x_89_);
lean_ctor_set(v_reuseFailAlloc_92_, 1, v_a_77_);
v___x_91_ = v_reuseFailAlloc_92_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
return v___x_91_;
}
}
}
}
else
{
lean_object* v_a_94_; lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_102_; 
v_a_94_ = lean_ctor_get(v___x_75_, 0);
v_a_95_ = lean_ctor_get(v___x_75_, 1);
v_isSharedCheck_102_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_102_ == 0)
{
v___x_97_ = v___x_75_;
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_inc(v_a_94_);
lean_dec(v___x_75_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_102_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_100_; 
if (v_isShared_98_ == 0)
{
v___x_100_ = v___x_97_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v_a_94_);
lean_ctor_set(v_reuseFailAlloc_101_, 1, v_a_95_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
return v___x_100_;
}
}
}
}
}
else
{
uint8_t v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
lean_dec(v___x_66_);
v___x_103_ = 0;
v___x_104_ = lean_box(v___x_103_);
v___x_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v_a_64_);
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_toAttributeKind___boxed(lean_object* v_attrKindStx_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l_Lean_Elab_toAttributeKind(v_attrKindStx_106_, v_a_107_, v_a_108_);
lean_dec_ref(v_a_107_);
lean_dec(v_attrKindStx_106_);
return v_res_109_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_elabAttr___redArg___lam__0(lean_object* v_k_140_){
_start:
{
lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_141_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__0___closed__1));
v___x_142_ = lean_name_eq(v_k_140_, v___x_141_);
if (v___x_142_ == 0)
{
uint8_t v___x_143_; 
v___x_143_ = 1;
return v___x_143_;
}
else
{
uint8_t v___x_144_; 
v___x_144_ = 0;
return v___x_144_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__0___boxed(lean_object* v_k_145_){
_start:
{
uint8_t v_res_146_; lean_object* v_r_147_; 
v_res_146_ = l_Lean_Elab_elabAttr___redArg___lam__0(v_k_145_);
lean_dec(v_k_145_);
v_r_147_ = lean_box(v_res_146_);
return v_r_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__1(uint8_t v_attrKind_148_, lean_object* v_attrName_149_, lean_object* v_attr_150_, lean_object* v_toPure_151_, lean_object* v_____r_152_){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_153_, 0, v_attrName_149_);
lean_ctor_set(v___x_153_, 1, v_attr_150_);
lean_ctor_set_uint8(v___x_153_, sizeof(void*)*2, v_attrKind_148_);
v___x_154_ = lean_apply_2(v_toPure_151_, lean_box(0), v___x_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__1___boxed(lean_object* v_attrKind_155_, lean_object* v_attrName_156_, lean_object* v_attr_157_, lean_object* v_toPure_158_, lean_object* v_____r_159_){
_start:
{
uint8_t v_attrKind_boxed_160_; lean_object* v_res_161_; 
v_attrKind_boxed_160_ = lean_unbox(v_attrKind_155_);
v_res_161_ = l_Lean_Elab_elabAttr___redArg___lam__1(v_attrKind_boxed_160_, v_attrName_156_, v_attr_157_, v_toPure_158_, v_____r_159_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__2(lean_object* v___f_162_, lean_object* v_____r_163_){
_start:
{
lean_object* v___x_164_; 
v___x_164_ = lean_apply_1(v___f_162_, v_____r_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__3(lean_object* v_inst_165_, lean_object* v_inst_166_, lean_object* v_inst_167_, lean_object* v_inst_168_, lean_object* v_toMonadRef_169_, lean_object* v_inst_170_, lean_object* v_inst_171_, lean_object* v_ref_172_, uint8_t v___x_173_, lean_object* v_toBind_174_, lean_object* v___f_175_, lean_object* v_____r_176_){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_177_ = l_Lean_recordExtraModUseFromDecl___redArg(v_inst_165_, v_inst_166_, v_inst_167_, v_inst_168_, v_toMonadRef_169_, v_inst_170_, v_inst_171_, v_ref_172_, v___x_173_);
v___x_178_ = lean_apply_4(v_toBind_174_, lean_box(0), lean_box(0), v___x_177_, v___f_175_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__3___boxed(lean_object* v_inst_179_, lean_object* v_inst_180_, lean_object* v_inst_181_, lean_object* v_inst_182_, lean_object* v_toMonadRef_183_, lean_object* v_inst_184_, lean_object* v_inst_185_, lean_object* v_ref_186_, lean_object* v___x_187_, lean_object* v_toBind_188_, lean_object* v___f_189_, lean_object* v_____r_190_){
_start:
{
uint8_t v___x_1187__boxed_191_; lean_object* v_res_192_; 
v___x_1187__boxed_191_ = lean_unbox(v___x_187_);
v_res_192_ = l_Lean_Elab_elabAttr___redArg___lam__3(v_inst_179_, v_inst_180_, v_inst_181_, v_inst_182_, v_toMonadRef_183_, v_inst_184_, v_inst_185_, v_ref_186_, v___x_1187__boxed_191_, v_toBind_188_, v___f_189_, v_____r_190_);
return v_res_192_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__5___closed__0));
v___x_195_ = l_Lean_stringToMessageData(v___x_194_);
return v___x_195_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__5___closed__2));
v___x_198_ = l_Lean_stringToMessageData(v___x_197_);
return v___x_198_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___redArg___lam__5___closed__5(void){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__5___closed__4));
v___x_201_ = l_Lean_stringToMessageData(v___x_200_);
return v___x_201_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___redArg___lam__5___closed__7(void){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_203_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__5___closed__6));
v___x_204_ = l_Lean_stringToMessageData(v___x_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__5(lean_object* v___f_205_, lean_object* v_val_206_, lean_object* v___x_207_, lean_object* v_attrName_208_, lean_object* v_inst_209_, lean_object* v_inst_210_, lean_object* v_toBind_211_, lean_object* v___f_212_, lean_object* v_env_213_){
_start:
{
lean_object* v___x_217_; lean_object* v_modules_218_; lean_object* v___x_219_; uint8_t v___x_220_; 
v___x_217_ = l_Lean_Environment_header(v_env_213_);
v_modules_218_ = lean_ctor_get(v___x_217_, 3);
lean_inc_ref(v_modules_218_);
lean_dec_ref(v___x_217_);
v___x_219_ = lean_array_get_size(v_modules_218_);
v___x_220_ = lean_nat_dec_lt(v_val_206_, v___x_219_);
if (v___x_220_ == 0)
{
lean_dec_ref(v_modules_218_);
lean_dec(v___f_212_);
lean_dec(v_toBind_211_);
lean_dec_ref(v_inst_210_);
lean_dec_ref(v_inst_209_);
lean_dec(v_attrName_208_);
goto v___jp_214_;
}
else
{
lean_object* v___x_221_; uint8_t v_hasData_222_; 
v___x_221_ = lean_array_fget_borrowed(v_modules_218_, v_val_206_);
v_hasData_222_ = lean_ctor_get_uint8(v___x_221_, sizeof(void*)*1 + 1);
if (v_hasData_222_ == 0)
{
lean_object* v___x_223_; lean_object* v_toImport_224_; lean_object* v_module_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
lean_dec(v___f_205_);
v___x_223_ = lean_array_get(v___x_207_, v_modules_218_, v_val_206_);
lean_dec_ref(v_modules_218_);
v_toImport_224_ = lean_ctor_get(v___x_223_, 0);
lean_inc_ref(v_toImport_224_);
lean_dec(v___x_223_);
v_module_225_ = lean_ctor_get(v_toImport_224_, 0);
lean_inc(v_module_225_);
lean_dec_ref(v_toImport_224_);
v___x_226_ = lean_obj_once(&l_Lean_Elab_elabAttr___redArg___lam__5___closed__1, &l_Lean_Elab_elabAttr___redArg___lam__5___closed__1_once, _init_l_Lean_Elab_elabAttr___redArg___lam__5___closed__1);
v___x_227_ = l_Lean_MessageData_ofName(v_attrName_208_);
v___x_228_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_228_, 0, v___x_226_);
lean_ctor_set(v___x_228_, 1, v___x_227_);
v___x_229_ = lean_obj_once(&l_Lean_Elab_elabAttr___redArg___lam__5___closed__3, &l_Lean_Elab_elabAttr___redArg___lam__5___closed__3_once, _init_l_Lean_Elab_elabAttr___redArg___lam__5___closed__3);
v___x_230_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_228_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
v___x_231_ = l_Lean_MessageData_ofName(v_module_225_);
lean_inc_ref(v___x_231_);
v___x_232_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_230_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = lean_obj_once(&l_Lean_Elab_elabAttr___redArg___lam__5___closed__5, &l_Lean_Elab_elabAttr___redArg___lam__5___closed__5_once, _init_l_Lean_Elab_elabAttr___redArg___lam__5___closed__5);
v___x_234_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_232_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
v___x_235_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
lean_ctor_set(v___x_235_, 1, v___x_231_);
v___x_236_ = lean_obj_once(&l_Lean_Elab_elabAttr___redArg___lam__5___closed__7, &l_Lean_Elab_elabAttr___redArg___lam__5___closed__7_once, _init_l_Lean_Elab_elabAttr___redArg___lam__5___closed__7);
v___x_237_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_235_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = l_Lean_throwError___redArg(v_inst_209_, v_inst_210_, v___x_237_);
v___x_239_ = lean_apply_4(v_toBind_211_, lean_box(0), lean_box(0), v___x_238_, v___f_212_);
return v___x_239_;
}
else
{
lean_dec_ref(v_modules_218_);
lean_dec(v___f_212_);
lean_dec(v_toBind_211_);
lean_dec_ref(v_inst_210_);
lean_dec_ref(v_inst_209_);
lean_dec(v_attrName_208_);
goto v___jp_214_;
}
}
v___jp_214_:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = lean_box(0);
v___x_216_ = lean_apply_1(v___f_205_, v___x_215_);
return v___x_216_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__5___boxed(lean_object* v___f_240_, lean_object* v_val_241_, lean_object* v___x_242_, lean_object* v_attrName_243_, lean_object* v_inst_244_, lean_object* v_inst_245_, lean_object* v_toBind_246_, lean_object* v___f_247_, lean_object* v_env_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_Lean_Elab_elabAttr___redArg___lam__5(v___f_240_, v_val_241_, v___x_242_, v_attrName_243_, v_inst_244_, v_inst_245_, v_toBind_246_, v___f_247_, v_env_248_);
lean_dec_ref(v_env_248_);
lean_dec_ref(v___x_242_);
lean_dec(v_val_241_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__4(lean_object* v_ref_250_, lean_object* v___f_251_, lean_object* v___x_252_, lean_object* v_attrName_253_, lean_object* v_inst_254_, lean_object* v_inst_255_, lean_object* v_toBind_256_, lean_object* v___f_257_, lean_object* v_getEnv_258_, lean_object* v_____do__lift_259_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_259_, v_ref_250_);
if (lean_obj_tag(v___x_260_) == 1)
{
lean_object* v_val_261_; lean_object* v___f_262_; lean_object* v___x_263_; 
v_val_261_ = lean_ctor_get(v___x_260_, 0);
lean_inc(v_val_261_);
lean_dec_ref_known(v___x_260_, 1);
lean_inc(v_toBind_256_);
v___f_262_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__5___boxed), 9, 8);
lean_closure_set(v___f_262_, 0, v___f_251_);
lean_closure_set(v___f_262_, 1, v_val_261_);
lean_closure_set(v___f_262_, 2, v___x_252_);
lean_closure_set(v___f_262_, 3, v_attrName_253_);
lean_closure_set(v___f_262_, 4, v_inst_254_);
lean_closure_set(v___f_262_, 5, v_inst_255_);
lean_closure_set(v___f_262_, 6, v_toBind_256_);
lean_closure_set(v___f_262_, 7, v___f_257_);
v___x_263_ = lean_apply_4(v_toBind_256_, lean_box(0), lean_box(0), v_getEnv_258_, v___f_262_);
return v___x_263_;
}
else
{
lean_object* v___x_264_; lean_object* v___x_265_; 
lean_dec(v___x_260_);
lean_dec(v_getEnv_258_);
lean_dec(v___f_257_);
lean_dec(v_toBind_256_);
lean_dec_ref(v_inst_255_);
lean_dec_ref(v_inst_254_);
lean_dec(v_attrName_253_);
lean_dec_ref(v___x_252_);
v___x_264_ = lean_box(0);
v___x_265_ = lean_apply_1(v___f_251_, v___x_264_);
return v___x_265_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__4___boxed(lean_object* v_ref_266_, lean_object* v___f_267_, lean_object* v___x_268_, lean_object* v_attrName_269_, lean_object* v_inst_270_, lean_object* v_inst_271_, lean_object* v_toBind_272_, lean_object* v___f_273_, lean_object* v_getEnv_274_, lean_object* v_____do__lift_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Lean_Elab_elabAttr___redArg___lam__4(v_ref_266_, v___f_267_, v___x_268_, v_attrName_269_, v_inst_270_, v_inst_271_, v_toBind_272_, v___f_273_, v_getEnv_274_, v_____do__lift_275_);
lean_dec_ref(v_____do__lift_275_);
lean_dec(v_ref_266_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__6(lean_object* v_a_277_, lean_object* v___x_278_, lean_object* v___f_279_, lean_object* v_inst_280_, lean_object* v_inst_281_, lean_object* v_inst_282_, lean_object* v_inst_283_, lean_object* v_toMonadRef_284_, lean_object* v_inst_285_, lean_object* v_inst_286_, lean_object* v_toBind_287_, lean_object* v___f_288_, lean_object* v___x_289_, lean_object* v_attrName_290_, lean_object* v_inst_291_, lean_object* v_getEnv_292_, lean_object* v_____do__lift_293_){
_start:
{
lean_object* v_toAttributeImplCore_294_; lean_object* v_ref_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v_toAttributeImplCore_294_ = lean_ctor_get(v_a_277_, 0);
lean_inc_ref(v_toAttributeImplCore_294_);
lean_dec_ref(v_a_277_);
v_ref_295_ = lean_ctor_get(v_toAttributeImplCore_294_, 0);
lean_inc_n(v_ref_295_, 2);
lean_dec_ref(v_toAttributeImplCore_294_);
v___x_296_ = l_Lean_regularInitAttr;
v___x_297_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_278_, v___x_296_, v_____do__lift_293_, v_ref_295_);
if (lean_obj_tag(v___x_297_) == 0)
{
lean_object* v___x_298_; lean_object* v___x_299_; 
lean_dec(v_ref_295_);
lean_dec(v_getEnv_292_);
lean_dec_ref(v_inst_291_);
lean_dec(v_attrName_290_);
lean_dec_ref(v___x_289_);
lean_dec(v___f_288_);
lean_dec(v_toBind_287_);
lean_dec(v_inst_286_);
lean_dec(v_inst_285_);
lean_dec_ref(v_toMonadRef_284_);
lean_dec_ref(v_inst_283_);
lean_dec_ref(v_inst_282_);
lean_dec_ref(v_inst_281_);
lean_dec_ref(v_inst_280_);
v___x_298_ = lean_box(0);
v___x_299_ = lean_apply_1(v___f_279_, v___x_298_);
return v___x_299_;
}
else
{
uint8_t v___x_300_; lean_object* v___x_301_; lean_object* v___f_302_; lean_object* v___f_303_; lean_object* v___f_304_; lean_object* v___x_305_; 
lean_dec_ref_known(v___x_297_, 1);
lean_dec(v___f_279_);
v___x_300_ = 1;
v___x_301_ = lean_box(v___x_300_);
lean_inc_n(v_toBind_287_, 2);
lean_inc(v_ref_295_);
lean_inc_ref(v_inst_280_);
v___f_302_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_302_, 0, v_inst_280_);
lean_closure_set(v___f_302_, 1, v_inst_281_);
lean_closure_set(v___f_302_, 2, v_inst_282_);
lean_closure_set(v___f_302_, 3, v_inst_283_);
lean_closure_set(v___f_302_, 4, v_toMonadRef_284_);
lean_closure_set(v___f_302_, 5, v_inst_285_);
lean_closure_set(v___f_302_, 6, v_inst_286_);
lean_closure_set(v___f_302_, 7, v_ref_295_);
lean_closure_set(v___f_302_, 8, v___x_301_);
lean_closure_set(v___f_302_, 9, v_toBind_287_);
lean_closure_set(v___f_302_, 10, v___f_288_);
lean_inc_ref(v___f_302_);
v___f_303_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__2), 2, 1);
lean_closure_set(v___f_303_, 0, v___f_302_);
lean_inc(v_getEnv_292_);
v___f_304_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__4___boxed), 10, 9);
lean_closure_set(v___f_304_, 0, v_ref_295_);
lean_closure_set(v___f_304_, 1, v___f_302_);
lean_closure_set(v___f_304_, 2, v___x_289_);
lean_closure_set(v___f_304_, 3, v_attrName_290_);
lean_closure_set(v___f_304_, 4, v_inst_280_);
lean_closure_set(v___f_304_, 5, v_inst_291_);
lean_closure_set(v___f_304_, 6, v_toBind_287_);
lean_closure_set(v___f_304_, 7, v___f_303_);
lean_closure_set(v___f_304_, 8, v_getEnv_292_);
v___x_305_ = lean_apply_4(v_toBind_287_, lean_box(0), lean_box(0), v_getEnv_292_, v___f_304_);
return v___x_305_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_a_306_ = _args[0];
lean_object* v___x_307_ = _args[1];
lean_object* v___f_308_ = _args[2];
lean_object* v_inst_309_ = _args[3];
lean_object* v_inst_310_ = _args[4];
lean_object* v_inst_311_ = _args[5];
lean_object* v_inst_312_ = _args[6];
lean_object* v_toMonadRef_313_ = _args[7];
lean_object* v_inst_314_ = _args[8];
lean_object* v_inst_315_ = _args[9];
lean_object* v_toBind_316_ = _args[10];
lean_object* v___f_317_ = _args[11];
lean_object* v___x_318_ = _args[12];
lean_object* v_attrName_319_ = _args[13];
lean_object* v_inst_320_ = _args[14];
lean_object* v_getEnv_321_ = _args[15];
lean_object* v_____do__lift_322_ = _args[16];
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lean_Elab_elabAttr___redArg___lam__6(v_a_306_, v___x_307_, v___f_308_, v_inst_309_, v_inst_310_, v_inst_311_, v_inst_312_, v_toMonadRef_313_, v_inst_314_, v_inst_315_, v_toBind_316_, v___f_317_, v___x_318_, v_attrName_319_, v_inst_320_, v_getEnv_321_, v_____do__lift_322_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__7(lean_object* v_attrName_324_, lean_object* v___x_325_, lean_object* v___f_326_, lean_object* v_inst_327_, lean_object* v_inst_328_, lean_object* v_inst_329_, lean_object* v_inst_330_, lean_object* v_toMonadRef_331_, lean_object* v_inst_332_, lean_object* v_inst_333_, lean_object* v_toBind_334_, lean_object* v___f_335_, lean_object* v___x_336_, lean_object* v_inst_337_, lean_object* v_getEnv_338_, lean_object* v_____do__lift_339_){
_start:
{
lean_object* v___x_340_; 
lean_inc(v_attrName_324_);
v___x_340_ = l_Lean_getAttributeImpl(v_____do__lift_339_, v_attrName_324_);
if (lean_obj_tag(v___x_340_) == 1)
{
lean_object* v_a_341_; lean_object* v___f_342_; lean_object* v___x_343_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
lean_inc(v_a_341_);
lean_dec_ref_known(v___x_340_, 1);
lean_inc(v_getEnv_338_);
lean_inc(v_toBind_334_);
v___f_342_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__6___boxed), 17, 16);
lean_closure_set(v___f_342_, 0, v_a_341_);
lean_closure_set(v___f_342_, 1, v___x_325_);
lean_closure_set(v___f_342_, 2, v___f_326_);
lean_closure_set(v___f_342_, 3, v_inst_327_);
lean_closure_set(v___f_342_, 4, v_inst_328_);
lean_closure_set(v___f_342_, 5, v_inst_329_);
lean_closure_set(v___f_342_, 6, v_inst_330_);
lean_closure_set(v___f_342_, 7, v_toMonadRef_331_);
lean_closure_set(v___f_342_, 8, v_inst_332_);
lean_closure_set(v___f_342_, 9, v_inst_333_);
lean_closure_set(v___f_342_, 10, v_toBind_334_);
lean_closure_set(v___f_342_, 11, v___f_335_);
lean_closure_set(v___f_342_, 12, v___x_336_);
lean_closure_set(v___f_342_, 13, v_attrName_324_);
lean_closure_set(v___f_342_, 14, v_inst_337_);
lean_closure_set(v___f_342_, 15, v_getEnv_338_);
v___x_343_ = lean_apply_4(v_toBind_334_, lean_box(0), lean_box(0), v_getEnv_338_, v___f_342_);
return v___x_343_;
}
else
{
lean_object* v___x_344_; lean_object* v___x_345_; 
lean_dec_ref(v___x_340_);
lean_dec(v_getEnv_338_);
lean_dec_ref(v_inst_337_);
lean_dec_ref(v___x_336_);
lean_dec(v___f_335_);
lean_dec(v_toBind_334_);
lean_dec(v_inst_333_);
lean_dec(v_inst_332_);
lean_dec_ref(v_toMonadRef_331_);
lean_dec_ref(v_inst_330_);
lean_dec_ref(v_inst_329_);
lean_dec_ref(v_inst_328_);
lean_dec_ref(v_inst_327_);
lean_dec(v___x_325_);
lean_dec(v_attrName_324_);
v___x_344_ = lean_box(0);
v___x_345_ = lean_apply_1(v___f_326_, v___x_344_);
return v___x_345_;
}
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___redArg___lam__8___closed__1(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__8___closed__0));
v___x_348_ = l_Lean_stringToMessageData(v___x_347_);
return v___x_348_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___redArg___lam__8___closed__3(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__8___closed__2));
v___x_351_ = l_Lean_stringToMessageData(v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__8(lean_object* v_attrName_352_, lean_object* v_toBind_353_, lean_object* v_getEnv_354_, lean_object* v___f_355_, lean_object* v_inst_356_, lean_object* v_inst_357_, lean_object* v_____do__lift_358_){
_start:
{
lean_object* v___x_359_; 
lean_inc(v_attrName_352_);
v___x_359_ = l_Lean_getAttributeImpl(v_____do__lift_358_, v_attrName_352_);
if (lean_obj_tag(v___x_359_) == 1)
{
lean_object* v___x_360_; 
lean_dec_ref_known(v___x_359_, 1);
lean_dec_ref(v_inst_357_);
lean_dec_ref(v_inst_356_);
lean_dec(v_attrName_352_);
v___x_360_ = lean_apply_4(v_toBind_353_, lean_box(0), lean_box(0), v_getEnv_354_, v___f_355_);
return v___x_360_;
}
else
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
lean_dec_ref(v___x_359_);
lean_dec(v___f_355_);
lean_dec(v_getEnv_354_);
lean_dec(v_toBind_353_);
v___x_361_ = lean_obj_once(&l_Lean_Elab_elabAttr___redArg___lam__8___closed__1, &l_Lean_Elab_elabAttr___redArg___lam__8___closed__1_once, _init_l_Lean_Elab_elabAttr___redArg___lam__8___closed__1);
v___x_362_ = l_Lean_MessageData_ofName(v_attrName_352_);
v___x_363_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_363_, 0, v___x_361_);
lean_ctor_set(v___x_363_, 1, v___x_362_);
v___x_364_ = lean_obj_once(&l_Lean_Elab_elabAttr___redArg___lam__8___closed__3, &l_Lean_Elab_elabAttr___redArg___lam__8___closed__3_once, _init_l_Lean_Elab_elabAttr___redArg___lam__8___closed__3);
v___x_365_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_363_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
v___x_366_ = l_Lean_throwError___redArg(v_inst_356_, v_inst_357_, v___x_365_);
return v___x_366_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__9(lean_object* v_inst_367_, uint8_t v_attrKind_368_, lean_object* v_attr_369_, lean_object* v_toPure_370_, lean_object* v___x_371_, lean_object* v_inst_372_, lean_object* v_inst_373_, lean_object* v_inst_374_, lean_object* v_toMonadRef_375_, lean_object* v_inst_376_, lean_object* v_inst_377_, lean_object* v_toBind_378_, lean_object* v___x_379_, lean_object* v_inst_380_, lean_object* v_attrName_381_){
_start:
{
lean_object* v_getEnv_382_; lean_object* v___x_383_; lean_object* v___f_384_; lean_object* v___f_385_; lean_object* v___f_386_; lean_object* v___f_387_; lean_object* v___x_388_; 
v_getEnv_382_ = lean_ctor_get(v_inst_367_, 0);
lean_inc_n(v_getEnv_382_, 3);
v___x_383_ = lean_box(v_attrKind_368_);
lean_inc_n(v_attrName_381_, 2);
v___f_384_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_384_, 0, v___x_383_);
lean_closure_set(v___f_384_, 1, v_attrName_381_);
lean_closure_set(v___f_384_, 2, v_attr_369_);
lean_closure_set(v___f_384_, 3, v_toPure_370_);
lean_inc_ref(v___f_384_);
v___f_385_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__2), 2, 1);
lean_closure_set(v___f_385_, 0, v___f_384_);
lean_inc_ref(v_inst_380_);
lean_inc_n(v_toBind_378_, 2);
lean_inc_ref(v_inst_372_);
v___f_386_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__7), 16, 15);
lean_closure_set(v___f_386_, 0, v_attrName_381_);
lean_closure_set(v___f_386_, 1, v___x_371_);
lean_closure_set(v___f_386_, 2, v___f_384_);
lean_closure_set(v___f_386_, 3, v_inst_372_);
lean_closure_set(v___f_386_, 4, v_inst_367_);
lean_closure_set(v___f_386_, 5, v_inst_373_);
lean_closure_set(v___f_386_, 6, v_inst_374_);
lean_closure_set(v___f_386_, 7, v_toMonadRef_375_);
lean_closure_set(v___f_386_, 8, v_inst_376_);
lean_closure_set(v___f_386_, 9, v_inst_377_);
lean_closure_set(v___f_386_, 10, v_toBind_378_);
lean_closure_set(v___f_386_, 11, v___f_385_);
lean_closure_set(v___f_386_, 12, v___x_379_);
lean_closure_set(v___f_386_, 13, v_inst_380_);
lean_closure_set(v___f_386_, 14, v_getEnv_382_);
v___f_387_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__8), 7, 6);
lean_closure_set(v___f_387_, 0, v_attrName_381_);
lean_closure_set(v___f_387_, 1, v_toBind_378_);
lean_closure_set(v___f_387_, 2, v_getEnv_382_);
lean_closure_set(v___f_387_, 3, v___f_386_);
lean_closure_set(v___f_387_, 4, v_inst_372_);
lean_closure_set(v___f_387_, 5, v_inst_380_);
v___x_388_ = lean_apply_4(v_toBind_378_, lean_box(0), lean_box(0), v_getEnv_382_, v___f_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__9___boxed(lean_object* v_inst_389_, lean_object* v_attrKind_390_, lean_object* v_attr_391_, lean_object* v_toPure_392_, lean_object* v___x_393_, lean_object* v_inst_394_, lean_object* v_inst_395_, lean_object* v_inst_396_, lean_object* v_toMonadRef_397_, lean_object* v_inst_398_, lean_object* v_inst_399_, lean_object* v_toBind_400_, lean_object* v___x_401_, lean_object* v_inst_402_, lean_object* v_attrName_403_){
_start:
{
uint8_t v_attrKind_boxed_404_; lean_object* v_res_405_; 
v_attrKind_boxed_404_ = lean_unbox(v_attrKind_390_);
v_res_405_ = l_Lean_Elab_elabAttr___redArg___lam__9(v_inst_389_, v_attrKind_boxed_404_, v_attr_391_, v_toPure_392_, v___x_393_, v_inst_394_, v_inst_395_, v_inst_396_, v_toMonadRef_397_, v_inst_398_, v_inst_399_, v_toBind_400_, v___x_401_, v_inst_402_, v_attrName_403_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__10(lean_object* v___f_406_, lean_object* v_attrName_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = lean_apply_1(v___f_406_, v_attrName_407_);
return v___x_408_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___redArg___lam__13___closed__4(void){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_417_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__13___closed__3));
v___x_418_ = l_Lean_stringToMessageData(v___x_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__13(lean_object* v_inst_419_, uint8_t v_attrKind_420_, lean_object* v_toPure_421_, lean_object* v___x_422_, lean_object* v_inst_423_, lean_object* v_inst_424_, lean_object* v_inst_425_, lean_object* v_toMonadRef_426_, lean_object* v_inst_427_, lean_object* v_inst_428_, lean_object* v_toBind_429_, lean_object* v___x_430_, lean_object* v_inst_431_, lean_object* v___x_432_, lean_object* v_attr_433_){
_start:
{
lean_object* v___x_434_; lean_object* v___f_435_; lean_object* v___x_436_; lean_object* v___x_437_; uint8_t v___x_438_; 
v___x_434_ = lean_box(v_attrKind_420_);
lean_inc_ref(v_inst_431_);
lean_inc(v_toBind_429_);
lean_inc_ref(v_inst_423_);
lean_inc(v_toPure_421_);
lean_inc_n(v_attr_433_, 2);
v___f_435_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__9___boxed), 15, 14);
lean_closure_set(v___f_435_, 0, v_inst_419_);
lean_closure_set(v___f_435_, 1, v___x_434_);
lean_closure_set(v___f_435_, 2, v_attr_433_);
lean_closure_set(v___f_435_, 3, v_toPure_421_);
lean_closure_set(v___f_435_, 4, v___x_422_);
lean_closure_set(v___f_435_, 5, v_inst_423_);
lean_closure_set(v___f_435_, 6, v_inst_424_);
lean_closure_set(v___f_435_, 7, v_inst_425_);
lean_closure_set(v___f_435_, 8, v_toMonadRef_426_);
lean_closure_set(v___f_435_, 9, v_inst_427_);
lean_closure_set(v___f_435_, 10, v_inst_428_);
lean_closure_set(v___f_435_, 11, v_toBind_429_);
lean_closure_set(v___f_435_, 12, v___x_430_);
lean_closure_set(v___f_435_, 13, v_inst_431_);
v___x_436_ = l_Lean_Syntax_getKind(v_attr_433_);
v___x_437_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___lam__13___closed__2));
v___x_438_ = lean_name_eq(v___x_436_, v___x_437_);
if (v___x_438_ == 0)
{
if (lean_obj_tag(v___x_436_) == 1)
{
lean_object* v_str_439_; lean_object* v___f_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
lean_dec(v_attr_433_);
lean_dec_ref(v_inst_431_);
lean_dec_ref(v_inst_423_);
v_str_439_ = lean_ctor_get(v___x_436_, 1);
lean_inc_ref(v_str_439_);
lean_dec_ref_known(v___x_436_, 2);
v___f_440_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__10), 2, 1);
lean_closure_set(v___f_440_, 0, v___f_435_);
v___x_441_ = lean_box(0);
v___x_442_ = l_Lean_Name_str___override(v___x_441_, v_str_439_);
v___x_443_ = lean_apply_2(v_toPure_421_, lean_box(0), v___x_442_);
v___x_444_ = lean_apply_4(v_toBind_429_, lean_box(0), lean_box(0), v___x_443_, v___f_440_);
return v___x_444_;
}
else
{
lean_object* v___f_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
lean_dec(v___x_436_);
lean_dec(v_toPure_421_);
v___f_445_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__10), 2, 1);
lean_closure_set(v___f_445_, 0, v___f_435_);
v___x_446_ = lean_obj_once(&l_Lean_Elab_elabAttr___redArg___lam__13___closed__4, &l_Lean_Elab_elabAttr___redArg___lam__13___closed__4_once, _init_l_Lean_Elab_elabAttr___redArg___lam__13___closed__4);
v___x_447_ = l_Lean_throwErrorAt___redArg(v_inst_423_, v_inst_431_, v_attr_433_, v___x_446_);
v___x_448_ = lean_apply_4(v_toBind_429_, lean_box(0), lean_box(0), v___x_447_, v___f_445_);
return v___x_448_;
}
}
else
{
lean_object* v___f_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
lean_dec(v___x_436_);
lean_dec_ref(v_inst_431_);
lean_dec_ref(v_inst_423_);
v___f_449_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__10), 2, 1);
lean_closure_set(v___f_449_, 0, v___f_435_);
v___x_450_ = l_Lean_Syntax_getArg(v_attr_433_, v___x_432_);
lean_dec(v_attr_433_);
v___x_451_ = l_Lean_Syntax_getId(v___x_450_);
lean_dec(v___x_450_);
v___x_452_ = l_Lean_Name_eraseMacroScopes(v___x_451_);
lean_dec(v___x_451_);
v___x_453_ = lean_apply_2(v_toPure_421_, lean_box(0), v___x_452_);
v___x_454_ = lean_apply_4(v_toBind_429_, lean_box(0), lean_box(0), v___x_453_, v___f_449_);
return v___x_454_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__13___boxed(lean_object* v_inst_455_, lean_object* v_attrKind_456_, lean_object* v_toPure_457_, lean_object* v___x_458_, lean_object* v_inst_459_, lean_object* v_inst_460_, lean_object* v_inst_461_, lean_object* v_toMonadRef_462_, lean_object* v_inst_463_, lean_object* v_inst_464_, lean_object* v_toBind_465_, lean_object* v___x_466_, lean_object* v_inst_467_, lean_object* v___x_468_, lean_object* v_attr_469_){
_start:
{
uint8_t v_attrKind_boxed_470_; lean_object* v_res_471_; 
v_attrKind_boxed_470_ = lean_unbox(v_attrKind_456_);
v_res_471_ = l_Lean_Elab_elabAttr___redArg___lam__13(v_inst_455_, v_attrKind_boxed_470_, v_toPure_457_, v___x_458_, v_inst_459_, v_inst_460_, v_inst_461_, v_toMonadRef_462_, v_inst_463_, v_inst_464_, v_toBind_465_, v___x_466_, v_inst_467_, v___x_468_, v_attr_469_);
lean_dec(v___x_468_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__11(lean_object* v_inst_472_, lean_object* v_toPure_473_, lean_object* v___x_474_, lean_object* v_inst_475_, lean_object* v_inst_476_, lean_object* v_inst_477_, lean_object* v_toMonadRef_478_, lean_object* v_inst_479_, lean_object* v_inst_480_, lean_object* v_toBind_481_, lean_object* v___x_482_, lean_object* v_inst_483_, lean_object* v___x_484_, lean_object* v_attrInstance_485_, lean_object* v___f_486_, lean_object* v_inst_487_, lean_object* v_inst_488_, lean_object* v_inst_489_, uint8_t v_attrKind_490_){
_start:
{
lean_object* v___x_491_; lean_object* v___f_492_; lean_object* v___x_493_; lean_object* v_attr_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_491_ = lean_box(v_attrKind_490_);
lean_inc_ref(v_inst_483_);
lean_inc(v_toBind_481_);
lean_inc(v_inst_480_);
lean_inc(v_inst_479_);
lean_inc_ref(v_inst_477_);
lean_inc_ref(v_inst_476_);
lean_inc_ref(v_inst_475_);
lean_inc_ref(v_inst_472_);
v___f_492_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__13___boxed), 15, 14);
lean_closure_set(v___f_492_, 0, v_inst_472_);
lean_closure_set(v___f_492_, 1, v___x_491_);
lean_closure_set(v___f_492_, 2, v_toPure_473_);
lean_closure_set(v___f_492_, 3, v___x_474_);
lean_closure_set(v___f_492_, 4, v_inst_475_);
lean_closure_set(v___f_492_, 5, v_inst_476_);
lean_closure_set(v___f_492_, 6, v_inst_477_);
lean_closure_set(v___f_492_, 7, v_toMonadRef_478_);
lean_closure_set(v___f_492_, 8, v_inst_479_);
lean_closure_set(v___f_492_, 9, v_inst_480_);
lean_closure_set(v___f_492_, 10, v_toBind_481_);
lean_closure_set(v___f_492_, 11, v___x_482_);
lean_closure_set(v___f_492_, 12, v_inst_483_);
lean_closure_set(v___f_492_, 13, v___x_484_);
v___x_493_ = lean_unsigned_to_nat(1u);
v_attr_494_ = l_Lean_Syntax_getArg(v_attrInstance_485_, v___x_493_);
v___x_495_ = lean_alloc_closure((void*)(l_Lean_expandMacros), 4, 2);
lean_closure_set(v___x_495_, 0, v_attr_494_);
lean_closure_set(v___x_495_, 1, v___f_486_);
v___x_496_ = l_Lean_Elab_liftMacroM___redArg(v_inst_475_, v_inst_487_, v_inst_472_, v_inst_488_, v_inst_483_, v_inst_489_, v_inst_476_, v_inst_477_, v_inst_479_, v_inst_480_, v___x_495_);
v___x_497_ = lean_apply_4(v_toBind_481_, lean_box(0), lean_box(0), v___x_496_, v___f_492_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg___lam__11___boxed(lean_object** _args){
lean_object* v_inst_498_ = _args[0];
lean_object* v_toPure_499_ = _args[1];
lean_object* v___x_500_ = _args[2];
lean_object* v_inst_501_ = _args[3];
lean_object* v_inst_502_ = _args[4];
lean_object* v_inst_503_ = _args[5];
lean_object* v_toMonadRef_504_ = _args[6];
lean_object* v_inst_505_ = _args[7];
lean_object* v_inst_506_ = _args[8];
lean_object* v_toBind_507_ = _args[9];
lean_object* v___x_508_ = _args[10];
lean_object* v_inst_509_ = _args[11];
lean_object* v___x_510_ = _args[12];
lean_object* v_attrInstance_511_ = _args[13];
lean_object* v___f_512_ = _args[14];
lean_object* v_inst_513_ = _args[15];
lean_object* v_inst_514_ = _args[16];
lean_object* v_inst_515_ = _args[17];
lean_object* v_attrKind_516_ = _args[18];
_start:
{
uint8_t v_attrKind_boxed_517_; lean_object* v_res_518_; 
v_attrKind_boxed_517_ = lean_unbox(v_attrKind_516_);
v_res_518_ = l_Lean_Elab_elabAttr___redArg___lam__11(v_inst_498_, v_toPure_499_, v___x_500_, v_inst_501_, v_inst_502_, v_inst_503_, v_toMonadRef_504_, v_inst_505_, v_inst_506_, v_toBind_507_, v___x_508_, v_inst_509_, v___x_510_, v_attrInstance_511_, v___f_512_, v_inst_513_, v_inst_514_, v_inst_515_, v_attrKind_boxed_517_);
lean_dec(v_attrInstance_511_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___redArg(lean_object* v_inst_520_, lean_object* v_inst_521_, lean_object* v_inst_522_, lean_object* v_inst_523_, lean_object* v_inst_524_, lean_object* v_inst_525_, lean_object* v_inst_526_, lean_object* v_inst_527_, lean_object* v_inst_528_, lean_object* v_inst_529_, lean_object* v_inst_530_, lean_object* v_attrInstance_531_){
_start:
{
lean_object* v_toApplicative_532_; lean_object* v_toBind_533_; lean_object* v_toPure_534_; lean_object* v_toMonadRef_535_; lean_object* v___f_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___f_543_; lean_object* v___x_544_; uint8_t v___x_545_; lean_object* v___x_546_; 
v_toApplicative_532_ = lean_ctor_get(v_inst_520_, 0);
v_toBind_533_ = lean_ctor_get(v_inst_520_, 1);
v_toPure_534_ = lean_ctor_get(v_toApplicative_532_, 1);
v_toMonadRef_535_ = lean_ctor_get(v_inst_523_, 1);
lean_inc_ref(v_toMonadRef_535_);
v___f_536_ = ((lean_object*)(l_Lean_Elab_elabAttr___redArg___closed__0));
v___x_537_ = lean_box(0);
v___x_538_ = l_Lean_instInhabitedEffectiveImport_default;
v___x_539_ = lean_unsigned_to_nat(0u);
v___x_540_ = l_Lean_Syntax_getArg(v_attrInstance_531_, v___x_539_);
v___x_541_ = lean_alloc_closure((void*)(l_Lean_Elab_toAttributeKind___boxed), 3, 1);
lean_closure_set(v___x_541_, 0, v___x_540_);
lean_inc(v_inst_529_);
lean_inc(v_inst_528_);
lean_inc_ref(v_inst_527_);
lean_inc_ref(v_inst_526_);
lean_inc_ref(v_inst_522_);
lean_inc_ref(v_inst_523_);
lean_inc_ref(v_inst_525_);
lean_inc_ref_n(v_inst_521_, 2);
lean_inc_ref(v_inst_524_);
lean_inc_ref_n(v_inst_520_, 2);
v___x_542_ = l_Lean_Elab_liftMacroM___redArg(v_inst_520_, v_inst_524_, v_inst_521_, v_inst_525_, v_inst_523_, v_inst_522_, v_inst_526_, v_inst_527_, v_inst_528_, v_inst_529_, v___x_541_);
lean_inc_n(v_toBind_533_, 2);
lean_inc(v_toPure_534_);
v___f_543_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___redArg___lam__11___boxed), 19, 18);
lean_closure_set(v___f_543_, 0, v_inst_521_);
lean_closure_set(v___f_543_, 1, v_toPure_534_);
lean_closure_set(v___f_543_, 2, v___x_537_);
lean_closure_set(v___f_543_, 3, v_inst_520_);
lean_closure_set(v___f_543_, 4, v_inst_526_);
lean_closure_set(v___f_543_, 5, v_inst_527_);
lean_closure_set(v___f_543_, 6, v_toMonadRef_535_);
lean_closure_set(v___f_543_, 7, v_inst_528_);
lean_closure_set(v___f_543_, 8, v_inst_529_);
lean_closure_set(v___f_543_, 9, v_toBind_533_);
lean_closure_set(v___f_543_, 10, v___x_538_);
lean_closure_set(v___f_543_, 11, v_inst_523_);
lean_closure_set(v___f_543_, 12, v___x_539_);
lean_closure_set(v___f_543_, 13, v_attrInstance_531_);
lean_closure_set(v___f_543_, 14, v___f_536_);
lean_closure_set(v___f_543_, 15, v_inst_524_);
lean_closure_set(v___f_543_, 16, v_inst_525_);
lean_closure_set(v___f_543_, 17, v_inst_522_);
v___x_544_ = lean_apply_4(v_toBind_533_, lean_box(0), lean_box(0), v___x_542_, v___f_543_);
v___x_545_ = 1;
v___x_546_ = l_Lean_withoutExporting___redArg(v_inst_520_, v_inst_521_, v_inst_530_, v___x_544_, v___x_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr(lean_object* v_m_547_, lean_object* v_inst_548_, lean_object* v_inst_549_, lean_object* v_inst_550_, lean_object* v_inst_551_, lean_object* v_inst_552_, lean_object* v_inst_553_, lean_object* v_inst_554_, lean_object* v_inst_555_, lean_object* v_inst_556_, lean_object* v_inst_557_, lean_object* v_inst_558_, lean_object* v_attrInstance_559_){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = l_Lean_Elab_elabAttr___redArg(v_inst_548_, v_inst_549_, v_inst_550_, v_inst_551_, v_inst_552_, v_inst_553_, v_inst_554_, v_inst_555_, v_inst_556_, v_inst_557_, v_inst_558_, v_attrInstance_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__0(lean_object* v_toPure_561_, lean_object* v_p_562_){
_start:
{
lean_object* v_snd_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v_snd_563_ = lean_ctor_get(v_p_562_, 1);
lean_inc(v_snd_563_);
v___x_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_564_, 0, v_snd_563_);
v___x_565_ = lean_apply_2(v_toPure_561_, lean_box(0), v___x_564_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__0___boxed(lean_object* v_toPure_566_, lean_object* v_p_567_){
_start:
{
lean_object* v_res_568_; 
v_res_568_ = l_Lean_Elab_elabAttrs___redArg___lam__0(v_toPure_566_, v_p_567_);
lean_dec_ref(v_p_567_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__1(lean_object* v_a_569_, lean_object* v_withRef_570_, lean_object* v___x_571_, lean_object* v_oldRef_572_){
_start:
{
lean_object* v_ref_573_; lean_object* v___x_574_; 
v_ref_573_ = l_Lean_replaceRef(v_a_569_, v_oldRef_572_);
v___x_574_ = lean_apply_3(v_withRef_570_, lean_box(0), v_ref_573_, v___x_571_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__1___boxed(lean_object* v_a_575_, lean_object* v_withRef_576_, lean_object* v___x_577_, lean_object* v_oldRef_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lean_Elab_elabAttrs___redArg___lam__1(v_a_575_, v_withRef_576_, v___x_577_, v_oldRef_578_);
lean_dec(v_oldRef_578_);
lean_dec(v_a_575_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__2(lean_object* v___y_580_, lean_object* v_toPure_581_, lean_object* v_____do__lift_582_){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_583_ = lean_array_push(v___y_580_, v_____do__lift_582_);
v___x_584_ = lean_box(0);
v___x_585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
lean_ctor_set(v___x_585_, 1, v___x_583_);
v___x_586_ = lean_apply_2(v_toPure_581_, lean_box(0), v___x_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__3(lean_object* v___y_587_, lean_object* v_toPure_588_, lean_object* v_____r_589_){
_start:
{
lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_590_, 0, v_____r_589_);
lean_ctor_set(v___x_590_, 1, v___y_587_);
v___x_591_ = lean_apply_2(v_toPure_588_, lean_box(0), v___x_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__4(lean_object* v_inst_592_, lean_object* v_inst_593_, lean_object* v_inst_594_, lean_object* v_inst_595_, lean_object* v_inst_596_, lean_object* v_toBind_597_, lean_object* v___f_598_, lean_object* v_ex_599_){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_600_ = l_Lean_Elab_logException___redArg(v_inst_592_, v_inst_593_, v_inst_594_, v_inst_595_, v_inst_596_, v_ex_599_);
v___x_601_ = lean_apply_4(v_toBind_597_, lean_box(0), lean_box(0), v___x_600_, v___f_598_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__5(lean_object* v_toMonadRef_602_, lean_object* v_toMonadExceptOf_603_, lean_object* v_inst_604_, lean_object* v_inst_605_, lean_object* v_inst_606_, lean_object* v_inst_607_, lean_object* v_inst_608_, lean_object* v_inst_609_, lean_object* v_inst_610_, lean_object* v_inst_611_, lean_object* v_inst_612_, lean_object* v_inst_613_, lean_object* v_inst_614_, lean_object* v_toBind_615_, lean_object* v_toPure_616_, lean_object* v_inst_617_, lean_object* v___f_618_, lean_object* v_a_619_, lean_object* v_x_620_, lean_object* v___y_621_){
_start:
{
lean_object* v_getRef_622_; lean_object* v_withRef_623_; lean_object* v_tryCatch_624_; lean_object* v___x_625_; lean_object* v___f_626_; lean_object* v___x_627_; lean_object* v___f_628_; lean_object* v___f_629_; lean_object* v___f_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v_getRef_622_ = lean_ctor_get(v_toMonadRef_602_, 0);
lean_inc(v_getRef_622_);
v_withRef_623_ = lean_ctor_get(v_toMonadRef_602_, 1);
lean_inc(v_withRef_623_);
lean_dec_ref(v_toMonadRef_602_);
v_tryCatch_624_ = lean_ctor_get(v_toMonadExceptOf_603_, 1);
lean_inc(v_tryCatch_624_);
lean_dec_ref(v_toMonadExceptOf_603_);
lean_inc(v_a_619_);
lean_inc(v_inst_613_);
lean_inc(v_inst_612_);
lean_inc_ref(v_inst_611_);
lean_inc_ref(v_inst_604_);
v___x_625_ = l_Lean_Elab_elabAttr___redArg(v_inst_604_, v_inst_605_, v_inst_606_, v_inst_607_, v_inst_608_, v_inst_609_, v_inst_610_, v_inst_611_, v_inst_612_, v_inst_613_, v_inst_614_, v_a_619_);
v___f_626_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttrs___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_626_, 0, v_a_619_);
lean_closure_set(v___f_626_, 1, v_withRef_623_);
lean_closure_set(v___f_626_, 2, v___x_625_);
lean_inc_n(v_toBind_615_, 3);
v___x_627_ = lean_apply_4(v_toBind_615_, lean_box(0), lean_box(0), v_getRef_622_, v___f_626_);
lean_inc(v_toPure_616_);
lean_inc_ref(v___y_621_);
v___f_628_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttrs___redArg___lam__2), 3, 2);
lean_closure_set(v___f_628_, 0, v___y_621_);
lean_closure_set(v___f_628_, 1, v_toPure_616_);
v___f_629_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttrs___redArg___lam__3), 3, 2);
lean_closure_set(v___f_629_, 0, v___y_621_);
lean_closure_set(v___f_629_, 1, v_toPure_616_);
v___f_630_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttrs___redArg___lam__4), 8, 7);
lean_closure_set(v___f_630_, 0, v_inst_604_);
lean_closure_set(v___f_630_, 1, v_inst_617_);
lean_closure_set(v___f_630_, 2, v_inst_612_);
lean_closure_set(v___f_630_, 3, v_inst_611_);
lean_closure_set(v___f_630_, 4, v_inst_613_);
lean_closure_set(v___f_630_, 5, v_toBind_615_);
lean_closure_set(v___f_630_, 6, v___f_629_);
v___x_631_ = lean_apply_4(v_toBind_615_, lean_box(0), lean_box(0), v___x_627_, v___f_628_);
v___x_632_ = lean_apply_3(v_tryCatch_624_, lean_box(0), v___x_631_, v___f_630_);
v___x_633_ = lean_apply_4(v_toBind_615_, lean_box(0), lean_box(0), v___x_632_, v___f_618_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__5___boxed(lean_object** _args){
lean_object* v_toMonadRef_634_ = _args[0];
lean_object* v_toMonadExceptOf_635_ = _args[1];
lean_object* v_inst_636_ = _args[2];
lean_object* v_inst_637_ = _args[3];
lean_object* v_inst_638_ = _args[4];
lean_object* v_inst_639_ = _args[5];
lean_object* v_inst_640_ = _args[6];
lean_object* v_inst_641_ = _args[7];
lean_object* v_inst_642_ = _args[8];
lean_object* v_inst_643_ = _args[9];
lean_object* v_inst_644_ = _args[10];
lean_object* v_inst_645_ = _args[11];
lean_object* v_inst_646_ = _args[12];
lean_object* v_toBind_647_ = _args[13];
lean_object* v_toPure_648_ = _args[14];
lean_object* v_inst_649_ = _args[15];
lean_object* v___f_650_ = _args[16];
lean_object* v_a_651_ = _args[17];
lean_object* v_x_652_ = _args[18];
lean_object* v___y_653_ = _args[19];
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lean_Elab_elabAttrs___redArg___lam__5(v_toMonadRef_634_, v_toMonadExceptOf_635_, v_inst_636_, v_inst_637_, v_inst_638_, v_inst_639_, v_inst_640_, v_inst_641_, v_inst_642_, v_inst_643_, v_inst_644_, v_inst_645_, v_inst_646_, v_toBind_647_, v_toPure_648_, v_inst_649_, v___f_650_, v_a_651_, v_x_652_, v___y_653_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg___lam__6(lean_object* v_toPure_655_, lean_object* v_____s_656_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = lean_apply_2(v_toPure_655_, lean_box(0), v_____s_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___redArg(lean_object* v_inst_660_, lean_object* v_inst_661_, lean_object* v_inst_662_, lean_object* v_inst_663_, lean_object* v_inst_664_, lean_object* v_inst_665_, lean_object* v_inst_666_, lean_object* v_inst_667_, lean_object* v_inst_668_, lean_object* v_inst_669_, lean_object* v_inst_670_, lean_object* v_inst_671_, lean_object* v_attrInstances_672_){
_start:
{
lean_object* v_toApplicative_673_; lean_object* v_toBind_674_; lean_object* v_toMonadExceptOf_675_; lean_object* v_toMonadRef_676_; lean_object* v_toPure_677_; lean_object* v_attrs_678_; lean_object* v___f_679_; lean_object* v___f_680_; lean_object* v___f_681_; size_t v_sz_682_; size_t v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v_toApplicative_673_ = lean_ctor_get(v_inst_660_, 0);
v_toBind_674_ = lean_ctor_get(v_inst_660_, 1);
lean_inc_n(v_toBind_674_, 2);
v_toMonadExceptOf_675_ = lean_ctor_get(v_inst_663_, 0);
lean_inc_ref(v_toMonadExceptOf_675_);
v_toMonadRef_676_ = lean_ctor_get(v_inst_663_, 1);
lean_inc_ref(v_toMonadRef_676_);
v_toPure_677_ = lean_ctor_get(v_toApplicative_673_, 1);
v_attrs_678_ = ((lean_object*)(l_Lean_Elab_elabAttrs___redArg___closed__0));
lean_inc_n(v_toPure_677_, 3);
v___f_679_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttrs___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_679_, 0, v_toPure_677_);
lean_inc_ref(v_inst_660_);
v___f_680_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttrs___redArg___lam__5___boxed), 20, 17);
lean_closure_set(v___f_680_, 0, v_toMonadRef_676_);
lean_closure_set(v___f_680_, 1, v_toMonadExceptOf_675_);
lean_closure_set(v___f_680_, 2, v_inst_660_);
lean_closure_set(v___f_680_, 3, v_inst_661_);
lean_closure_set(v___f_680_, 4, v_inst_662_);
lean_closure_set(v___f_680_, 5, v_inst_663_);
lean_closure_set(v___f_680_, 6, v_inst_664_);
lean_closure_set(v___f_680_, 7, v_inst_665_);
lean_closure_set(v___f_680_, 8, v_inst_666_);
lean_closure_set(v___f_680_, 9, v_inst_667_);
lean_closure_set(v___f_680_, 10, v_inst_668_);
lean_closure_set(v___f_680_, 11, v_inst_670_);
lean_closure_set(v___f_680_, 12, v_inst_671_);
lean_closure_set(v___f_680_, 13, v_toBind_674_);
lean_closure_set(v___f_680_, 14, v_toPure_677_);
lean_closure_set(v___f_680_, 15, v_inst_669_);
lean_closure_set(v___f_680_, 16, v___f_679_);
v___f_681_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttrs___redArg___lam__6), 2, 1);
lean_closure_set(v___f_681_, 0, v_toPure_677_);
v_sz_682_ = lean_array_size(v_attrInstances_672_);
v___x_683_ = ((size_t)0ULL);
v___x_684_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_660_, v_attrInstances_672_, v___f_680_, v_sz_682_, v___x_683_, v_attrs_678_);
v___x_685_ = lean_apply_4(v_toBind_674_, lean_box(0), lean_box(0), v___x_684_, v___f_681_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs(lean_object* v_m_686_, lean_object* v_inst_687_, lean_object* v_inst_688_, lean_object* v_inst_689_, lean_object* v_inst_690_, lean_object* v_inst_691_, lean_object* v_inst_692_, lean_object* v_inst_693_, lean_object* v_inst_694_, lean_object* v_inst_695_, lean_object* v_inst_696_, lean_object* v_inst_697_, lean_object* v_inst_698_, lean_object* v_attrInstances_699_){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = l_Lean_Elab_elabAttrs___redArg(v_inst_687_, v_inst_688_, v_inst_689_, v_inst_690_, v_inst_691_, v_inst_692_, v_inst_693_, v_inst_694_, v_inst_695_, v_inst_696_, v_inst_697_, v_inst_698_, v_attrInstances_699_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___redArg(lean_object* v_inst_701_, lean_object* v_inst_702_, lean_object* v_inst_703_, lean_object* v_inst_704_, lean_object* v_inst_705_, lean_object* v_inst_706_, lean_object* v_inst_707_, lean_object* v_inst_708_, lean_object* v_inst_709_, lean_object* v_inst_710_, lean_object* v_inst_711_, lean_object* v_inst_712_, lean_object* v_stx_713_){
_start:
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_714_ = lean_unsigned_to_nat(1u);
v___x_715_ = l_Lean_Syntax_getArg(v_stx_713_, v___x_714_);
v___x_716_ = l_Lean_Syntax_getSepArgs(v___x_715_);
lean_dec(v___x_715_);
v___x_717_ = l_Lean_Elab_elabAttrs___redArg(v_inst_701_, v_inst_702_, v_inst_703_, v_inst_704_, v_inst_705_, v_inst_706_, v_inst_707_, v_inst_708_, v_inst_709_, v_inst_710_, v_inst_711_, v_inst_712_, v___x_716_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___redArg___boxed(lean_object* v_inst_718_, lean_object* v_inst_719_, lean_object* v_inst_720_, lean_object* v_inst_721_, lean_object* v_inst_722_, lean_object* v_inst_723_, lean_object* v_inst_724_, lean_object* v_inst_725_, lean_object* v_inst_726_, lean_object* v_inst_727_, lean_object* v_inst_728_, lean_object* v_inst_729_, lean_object* v_stx_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l_Lean_Elab_elabDeclAttrs___redArg(v_inst_718_, v_inst_719_, v_inst_720_, v_inst_721_, v_inst_722_, v_inst_723_, v_inst_724_, v_inst_725_, v_inst_726_, v_inst_727_, v_inst_728_, v_inst_729_, v_stx_730_);
lean_dec(v_stx_730_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs(lean_object* v_m_732_, lean_object* v_inst_733_, lean_object* v_inst_734_, lean_object* v_inst_735_, lean_object* v_inst_736_, lean_object* v_inst_737_, lean_object* v_inst_738_, lean_object* v_inst_739_, lean_object* v_inst_740_, lean_object* v_inst_741_, lean_object* v_inst_742_, lean_object* v_inst_743_, lean_object* v_inst_744_, lean_object* v_stx_745_){
_start:
{
lean_object* v___x_746_; 
v___x_746_ = l_Lean_Elab_elabDeclAttrs___redArg(v_inst_733_, v_inst_734_, v_inst_735_, v_inst_736_, v_inst_737_, v_inst_738_, v_inst_739_, v_inst_740_, v_inst_741_, v_inst_742_, v_inst_743_, v_inst_744_, v_stx_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___boxed(lean_object* v_m_747_, lean_object* v_inst_748_, lean_object* v_inst_749_, lean_object* v_inst_750_, lean_object* v_inst_751_, lean_object* v_inst_752_, lean_object* v_inst_753_, lean_object* v_inst_754_, lean_object* v_inst_755_, lean_object* v_inst_756_, lean_object* v_inst_757_, lean_object* v_inst_758_, lean_object* v_inst_759_, lean_object* v_stx_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l_Lean_Elab_elabDeclAttrs(v_m_747_, v_inst_748_, v_inst_749_, v_inst_750_, v_inst_751_, v_inst_752_, v_inst_753_, v_inst_754_, v_inst_755_, v_inst_756_, v_inst_757_, v_inst_758_, v_inst_759_, v_stx_760_);
lean_dec(v_stx_760_);
return v_res_761_;
}
}
lean_object* runtime_initialize_Lean_Elab_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Format_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Attributes(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Attributes(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Util(uint8_t builtin);
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* initialize_Lean_Parser_Term(uint8_t builtin);
lean_object* initialize_Init_Data_Format_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Attributes(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Term(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Attributes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Attributes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Attributes(builtin);
}
#ifdef __cplusplus
}
#endif
