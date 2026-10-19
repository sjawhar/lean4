// Lean compiler output
// Module: Lake.Build.ModuleArtifacts
// Imports: public import Lake.Config.Artifact import Lake.Util.JsonObject
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
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lake_ArtifactDescr_fromJson_x3f(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lake_lowerHexUInt64(uint64_t);
lean_object* l_Lean_Json_getObj_x3f(lean_object*);
lean_object* l_Lake_JsonObject_getJson_x3f(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lake_JsonObject_insertJson(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleOutputDescrs_oleanParts(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0(lean_object*);
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "k"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__0 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__0_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "u"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__1 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__1_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "l"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__2 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__2_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__3 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__3_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__4 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__4_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "r"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__5 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__5_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__6 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__6_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "o"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__7 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__7_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__8 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__8_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_toJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "rs"};
static const lean_object* l_Lake_ModuleOutputDescrs_toJson___closed__9 = (const lean_object*)&l_Lake_ModuleOutputDescrs_toJson___closed__9_value;
LEAN_EXPORT lean_object* l_Lake_ModuleOutputDescrs_toJson(lean_object*);
static const lean_closure_object l_Lake_instToJsonModuleOutputDescrs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_ModuleOutputDescrs_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToJsonModuleOutputDescrs___closed__0 = (const lean_object*)&l_Lake_instToJsonModuleOutputDescrs___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToJsonModuleOutputDescrs = (const lean_object*)&l_Lake_instToJsonModuleOutputDescrs___closed__0_value;
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0(lean_object*);
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "property not found: o"};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__0 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__0_value;
static const lean_ctor_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__0_value)}};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__1 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__1_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "o: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__2 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__2_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "expected at least one 'o' (.olean) hash"};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__3 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__3_value;
static const lean_ctor_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__3_value)}};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__4 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__4_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "k: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__5 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__5_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "u: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__6 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__6_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "l: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__7 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__7_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "b: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__8 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__8_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "c: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__9 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__9_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "r: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__10 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__10_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "property not found: i"};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__11 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__11_value;
static const lean_ctor_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__11_value)}};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__12 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__12_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "i: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__13 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__13_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "rs: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__14 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__14_value;
static const lean_string_object l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "m: "};
static const lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__15 = (const lean_object*)&l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__15_value;
LEAN_EXPORT lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f(lean_object*);
static const lean_closure_object l_Lake_instFromJsonModuleOutputDescrs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_ModuleOutputDescrs_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instFromJsonModuleOutputDescrs___closed__0 = (const lean_object*)&l_Lake_instFromJsonModuleOutputDescrs___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instFromJsonModuleOutputDescrs = (const lean_object*)&l_Lake_instFromJsonModuleOutputDescrs___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ModuleOutputArtifacts_descrs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleOutputDescrs_oleanParts(lean_object* v_self_1_){
_start:
{
lean_object* v_olean_2_; lean_object* v_oleanServer_x3f_3_; lean_object* v_oleanPrivate_x3f_4_; lean_object* v_descrs_6_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v_descrs_11_; 
v_olean_2_ = lean_ctor_get(v_self_1_, 0);
lean_inc_ref(v_olean_2_);
v_oleanServer_x3f_3_ = lean_ctor_get(v_self_1_, 1);
lean_inc(v_oleanServer_x3f_3_);
v_oleanPrivate_x3f_4_ = lean_ctor_get(v_self_1_, 2);
lean_inc(v_oleanPrivate_x3f_4_);
lean_dec_ref(v_self_1_);
v___x_9_ = lean_unsigned_to_nat(1u);
v___x_10_ = lean_mk_empty_array_with_capacity(v___x_9_);
v_descrs_11_ = lean_array_push(v___x_10_, v_olean_2_);
if (lean_obj_tag(v_oleanServer_x3f_3_) == 1)
{
lean_object* v_val_12_; lean_object* v_descrs_13_; 
v_val_12_ = lean_ctor_get(v_oleanServer_x3f_3_, 0);
lean_inc(v_val_12_);
lean_dec_ref_known(v_oleanServer_x3f_3_, 1);
v_descrs_13_ = lean_array_push(v_descrs_11_, v_val_12_);
v_descrs_6_ = v_descrs_13_;
goto v___jp_5_;
}
else
{
lean_dec(v_oleanServer_x3f_3_);
v_descrs_6_ = v_descrs_11_;
goto v___jp_5_;
}
v___jp_5_:
{
if (lean_obj_tag(v_oleanPrivate_x3f_4_) == 1)
{
lean_object* v_val_7_; lean_object* v_descrs_8_; 
v_val_7_ = lean_ctor_get(v_oleanPrivate_x3f_4_, 0);
lean_inc(v_val_7_);
lean_dec_ref_known(v_oleanPrivate_x3f_4_, 1);
v_descrs_8_ = lean_array_push(v_descrs_6_, v_val_7_);
return v_descrs_8_;
}
else
{
lean_dec(v_oleanPrivate_x3f_4_);
return v_descrs_6_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0(size_t v_sz_15_, size_t v_i_16_, lean_object* v_bs_17_){
_start:
{
uint8_t v___x_18_; 
v___x_18_ = lean_usize_dec_lt(v_i_16_, v_sz_15_);
if (v___x_18_ == 0)
{
return v_bs_17_;
}
else
{
lean_object* v_v_19_; uint64_t v_hash_20_; lean_object* v_ext_21_; lean_object* v___x_22_; lean_object* v_bs_x27_23_; lean_object* v___y_25_; lean_object* v___x_31_; uint8_t v___x_32_; 
v_v_19_ = lean_array_uget_borrowed(v_bs_17_, v_i_16_);
v_hash_20_ = lean_ctor_get_uint64(v_v_19_, sizeof(void*)*1);
v_ext_21_ = lean_ctor_get(v_v_19_, 0);
lean_inc_ref(v_ext_21_);
v___x_22_ = lean_unsigned_to_nat(0u);
v_bs_x27_23_ = lean_array_uset(v_bs_17_, v_i_16_, v___x_22_);
v___x_31_ = lean_string_utf8_byte_size(v_ext_21_);
v___x_32_ = lean_nat_dec_eq(v___x_31_, v___x_22_);
if (v___x_32_ == 0)
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_33_ = l_Lake_lowerHexUInt64(v_hash_20_);
v___x_34_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0));
v___x_35_ = lean_string_append(v___x_33_, v___x_34_);
v___x_36_ = lean_string_append(v___x_35_, v_ext_21_);
lean_dec_ref(v_ext_21_);
v___y_25_ = v___x_36_;
goto v___jp_24_;
}
else
{
lean_object* v___x_37_; 
lean_dec_ref(v_ext_21_);
v___x_37_ = l_Lake_lowerHexUInt64(v_hash_20_);
v___y_25_ = v___x_37_;
goto v___jp_24_;
}
v___jp_24_:
{
lean_object* v___x_26_; size_t v___x_27_; size_t v___x_28_; lean_object* v___x_29_; 
v___x_26_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_26_, 0, v___y_25_);
v___x_27_ = ((size_t)1ULL);
v___x_28_ = lean_usize_add(v_i_16_, v___x_27_);
v___x_29_ = lean_array_uset(v_bs_x27_23_, v_i_16_, v___x_26_);
v_i_16_ = v___x_28_;
v_bs_17_ = v___x_29_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___boxed(lean_object* v_sz_38_, lean_object* v_i_39_, lean_object* v_bs_40_){
_start:
{
size_t v_sz_boxed_41_; size_t v_i_boxed_42_; lean_object* v_res_43_; 
v_sz_boxed_41_ = lean_unbox_usize(v_sz_38_);
lean_dec(v_sz_38_);
v_i_boxed_42_ = lean_unbox_usize(v_i_39_);
lean_dec(v_i_39_);
v_res_43_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0(v_sz_boxed_41_, v_i_boxed_42_, v_bs_40_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0(lean_object* v_a_44_){
_start:
{
size_t v_sz_45_; size_t v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v_sz_45_ = lean_array_size(v_a_44_);
v___x_46_ = ((size_t)0ULL);
v___x_47_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0(v_sz_45_, v___x_46_, v_a_44_);
v___x_48_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleOutputDescrs_toJson(lean_object* v_self_59_){
_start:
{
lean_object* v___y_61_; lean_object* v___y_62_; lean_object* v___y_63_; uint8_t v_isModule_67_; lean_object* v_ilean_68_; lean_object* v_irSig_x3f_69_; lean_object* v_ir_x3f_70_; lean_object* v_c_x3f_71_; lean_object* v_bc_x3f_72_; lean_object* v_ltar_x3f_73_; lean_object* v_usage_x3f_74_; lean_object* v_usekey_x3f_75_; lean_object* v_obj_77_; lean_object* v___y_92_; lean_object* v___y_93_; lean_object* v___y_94_; lean_object* v_obj_98_; lean_object* v___y_112_; lean_object* v___y_113_; lean_object* v___y_114_; lean_object* v_obj_118_; lean_object* v___y_132_; lean_object* v___y_133_; lean_object* v___y_134_; lean_object* v_obj_138_; lean_object* v___y_152_; lean_object* v___y_153_; lean_object* v___y_154_; lean_object* v_obj_158_; lean_object* v___y_172_; lean_object* v___y_173_; lean_object* v___y_174_; lean_object* v_obj_178_; lean_object* v___y_192_; lean_object* v___y_193_; lean_object* v___y_194_; uint64_t v_hash_197_; lean_object* v_ext_198_; lean_object* v_obj_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v_obj_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v_obj_206_; lean_object* v___x_207_; lean_object* v___y_209_; lean_object* v___x_224_; lean_object* v___x_225_; uint8_t v___x_226_; 
v_isModule_67_ = lean_ctor_get_uint8(v_self_59_, sizeof(void*)*11);
v_ilean_68_ = lean_ctor_get(v_self_59_, 3);
v_irSig_x3f_69_ = lean_ctor_get(v_self_59_, 4);
lean_inc(v_irSig_x3f_69_);
v_ir_x3f_70_ = lean_ctor_get(v_self_59_, 5);
lean_inc(v_ir_x3f_70_);
v_c_x3f_71_ = lean_ctor_get(v_self_59_, 6);
lean_inc(v_c_x3f_71_);
v_bc_x3f_72_ = lean_ctor_get(v_self_59_, 7);
lean_inc(v_bc_x3f_72_);
v_ltar_x3f_73_ = lean_ctor_get(v_self_59_, 8);
lean_inc(v_ltar_x3f_73_);
v_usage_x3f_74_ = lean_ctor_get(v_self_59_, 9);
lean_inc(v_usage_x3f_74_);
v_usekey_x3f_75_ = lean_ctor_get(v_self_59_, 10);
lean_inc(v_usekey_x3f_75_);
v_hash_197_ = lean_ctor_get_uint64(v_ilean_68_, sizeof(void*)*1);
v_ext_198_ = lean_ctor_get(v_ilean_68_, 0);
lean_inc_ref(v_ext_198_);
v_obj_199_ = lean_box(1);
v___x_200_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__6));
v___x_201_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_201_, 0, v_isModule_67_);
v_obj_202_ = l_Lake_JsonObject_insertJson(v_obj_199_, v___x_200_, v___x_201_);
v___x_203_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__7));
v___x_204_ = l_Lake_ModuleOutputDescrs_oleanParts(v_self_59_);
v___x_205_ = l_Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0(v___x_204_);
v_obj_206_ = l_Lake_JsonObject_insertJson(v_obj_202_, v___x_203_, v___x_205_);
v___x_207_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__8));
v___x_224_ = lean_string_utf8_byte_size(v_ext_198_);
v___x_225_ = lean_unsigned_to_nat(0u);
v___x_226_ = lean_nat_dec_eq(v___x_224_, v___x_225_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_227_ = l_Lake_lowerHexUInt64(v_hash_197_);
v___x_228_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0));
v___x_229_ = lean_string_append(v___x_227_, v___x_228_);
v___x_230_ = lean_string_append(v___x_229_, v_ext_198_);
lean_dec_ref(v_ext_198_);
v___y_209_ = v___x_230_;
goto v___jp_208_;
}
else
{
lean_object* v___x_231_; 
lean_dec_ref(v_ext_198_);
v___x_231_ = l_Lake_lowerHexUInt64(v_hash_197_);
v___y_209_ = v___x_231_;
goto v___jp_208_;
}
v___jp_60_:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_64_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_64_, 0, v___y_63_);
lean_inc_ref(v___y_62_);
v___x_65_ = l_Lake_JsonObject_insertJson(v___y_61_, v___y_62_, v___x_64_);
v___x_66_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
return v___x_66_;
}
v___jp_76_:
{
if (lean_obj_tag(v_usekey_x3f_75_) == 1)
{
lean_object* v_val_78_; uint64_t v_hash_79_; lean_object* v_ext_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; uint8_t v___x_84_; 
v_val_78_ = lean_ctor_get(v_usekey_x3f_75_, 0);
lean_inc(v_val_78_);
lean_dec_ref_known(v_usekey_x3f_75_, 1);
v_hash_79_ = lean_ctor_get_uint64(v_val_78_, sizeof(void*)*1);
v_ext_80_ = lean_ctor_get(v_val_78_, 0);
lean_inc_ref(v_ext_80_);
lean_dec(v_val_78_);
v___x_81_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__0));
v___x_82_ = lean_string_utf8_byte_size(v_ext_80_);
v___x_83_ = lean_unsigned_to_nat(0u);
v___x_84_ = lean_nat_dec_eq(v___x_82_, v___x_83_);
if (v___x_84_ == 0)
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_85_ = l_Lake_lowerHexUInt64(v_hash_79_);
v___x_86_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0));
v___x_87_ = lean_string_append(v___x_85_, v___x_86_);
v___x_88_ = lean_string_append(v___x_87_, v_ext_80_);
lean_dec_ref(v_ext_80_);
v___y_61_ = v_obj_77_;
v___y_62_ = v___x_81_;
v___y_63_ = v___x_88_;
goto v___jp_60_;
}
else
{
lean_object* v___x_89_; 
lean_dec_ref(v_ext_80_);
v___x_89_ = l_Lake_lowerHexUInt64(v_hash_79_);
v___y_61_ = v_obj_77_;
v___y_62_ = v___x_81_;
v___y_63_ = v___x_89_;
goto v___jp_60_;
}
}
else
{
lean_object* v___x_90_; 
lean_dec(v_usekey_x3f_75_);
v___x_90_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_90_, 0, v_obj_77_);
return v___x_90_;
}
}
v___jp_91_:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_95_, 0, v___y_94_);
lean_inc_ref(v___y_92_);
v___x_96_ = l_Lake_JsonObject_insertJson(v___y_93_, v___y_92_, v___x_95_);
v_obj_77_ = v___x_96_;
goto v___jp_76_;
}
v___jp_97_:
{
if (lean_obj_tag(v_usage_x3f_74_) == 1)
{
lean_object* v_val_99_; uint64_t v_hash_100_; lean_object* v_ext_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v_val_99_ = lean_ctor_get(v_usage_x3f_74_, 0);
lean_inc(v_val_99_);
lean_dec_ref_known(v_usage_x3f_74_, 1);
v_hash_100_ = lean_ctor_get_uint64(v_val_99_, sizeof(void*)*1);
v_ext_101_ = lean_ctor_get(v_val_99_, 0);
lean_inc_ref(v_ext_101_);
lean_dec(v_val_99_);
v___x_102_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__1));
v___x_103_ = lean_string_utf8_byte_size(v_ext_101_);
v___x_104_ = lean_unsigned_to_nat(0u);
v___x_105_ = lean_nat_dec_eq(v___x_103_, v___x_104_);
if (v___x_105_ == 0)
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_106_ = l_Lake_lowerHexUInt64(v_hash_100_);
v___x_107_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0));
v___x_108_ = lean_string_append(v___x_106_, v___x_107_);
v___x_109_ = lean_string_append(v___x_108_, v_ext_101_);
lean_dec_ref(v_ext_101_);
v___y_92_ = v___x_102_;
v___y_93_ = v_obj_98_;
v___y_94_ = v___x_109_;
goto v___jp_91_;
}
else
{
lean_object* v___x_110_; 
lean_dec_ref(v_ext_101_);
v___x_110_ = l_Lake_lowerHexUInt64(v_hash_100_);
v___y_92_ = v___x_102_;
v___y_93_ = v_obj_98_;
v___y_94_ = v___x_110_;
goto v___jp_91_;
}
}
else
{
lean_dec(v_usage_x3f_74_);
v_obj_77_ = v_obj_98_;
goto v___jp_76_;
}
}
v___jp_111_:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_115_, 0, v___y_114_);
lean_inc_ref(v___y_112_);
v___x_116_ = l_Lake_JsonObject_insertJson(v___y_113_, v___y_112_, v___x_115_);
v_obj_98_ = v___x_116_;
goto v___jp_97_;
}
v___jp_117_:
{
if (lean_obj_tag(v_ltar_x3f_73_) == 1)
{
lean_object* v_val_119_; uint64_t v_hash_120_; lean_object* v_ext_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v_val_119_ = lean_ctor_get(v_ltar_x3f_73_, 0);
lean_inc(v_val_119_);
lean_dec_ref_known(v_ltar_x3f_73_, 1);
v_hash_120_ = lean_ctor_get_uint64(v_val_119_, sizeof(void*)*1);
v_ext_121_ = lean_ctor_get(v_val_119_, 0);
lean_inc_ref(v_ext_121_);
lean_dec(v_val_119_);
v___x_122_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__2));
v___x_123_ = lean_string_utf8_byte_size(v_ext_121_);
v___x_124_ = lean_unsigned_to_nat(0u);
v___x_125_ = lean_nat_dec_eq(v___x_123_, v___x_124_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_126_ = l_Lake_lowerHexUInt64(v_hash_120_);
v___x_127_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0));
v___x_128_ = lean_string_append(v___x_126_, v___x_127_);
v___x_129_ = lean_string_append(v___x_128_, v_ext_121_);
lean_dec_ref(v_ext_121_);
v___y_112_ = v___x_122_;
v___y_113_ = v_obj_118_;
v___y_114_ = v___x_129_;
goto v___jp_111_;
}
else
{
lean_object* v___x_130_; 
lean_dec_ref(v_ext_121_);
v___x_130_ = l_Lake_lowerHexUInt64(v_hash_120_);
v___y_112_ = v___x_122_;
v___y_113_ = v_obj_118_;
v___y_114_ = v___x_130_;
goto v___jp_111_;
}
}
else
{
lean_dec(v_ltar_x3f_73_);
v_obj_98_ = v_obj_118_;
goto v___jp_97_;
}
}
v___jp_131_:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_135_, 0, v___y_134_);
lean_inc_ref(v___y_133_);
v___x_136_ = l_Lake_JsonObject_insertJson(v___y_132_, v___y_133_, v___x_135_);
v_obj_118_ = v___x_136_;
goto v___jp_117_;
}
v___jp_137_:
{
if (lean_obj_tag(v_bc_x3f_72_) == 1)
{
lean_object* v_val_139_; uint64_t v_hash_140_; lean_object* v_ext_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v_val_139_ = lean_ctor_get(v_bc_x3f_72_, 0);
lean_inc(v_val_139_);
lean_dec_ref_known(v_bc_x3f_72_, 1);
v_hash_140_ = lean_ctor_get_uint64(v_val_139_, sizeof(void*)*1);
v_ext_141_ = lean_ctor_get(v_val_139_, 0);
lean_inc_ref(v_ext_141_);
lean_dec(v_val_139_);
v___x_142_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__3));
v___x_143_ = lean_string_utf8_byte_size(v_ext_141_);
v___x_144_ = lean_unsigned_to_nat(0u);
v___x_145_ = lean_nat_dec_eq(v___x_143_, v___x_144_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_146_ = l_Lake_lowerHexUInt64(v_hash_140_);
v___x_147_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0));
v___x_148_ = lean_string_append(v___x_146_, v___x_147_);
v___x_149_ = lean_string_append(v___x_148_, v_ext_141_);
lean_dec_ref(v_ext_141_);
v___y_132_ = v_obj_138_;
v___y_133_ = v___x_142_;
v___y_134_ = v___x_149_;
goto v___jp_131_;
}
else
{
lean_object* v___x_150_; 
lean_dec_ref(v_ext_141_);
v___x_150_ = l_Lake_lowerHexUInt64(v_hash_140_);
v___y_132_ = v_obj_138_;
v___y_133_ = v___x_142_;
v___y_134_ = v___x_150_;
goto v___jp_131_;
}
}
else
{
lean_dec(v_bc_x3f_72_);
v_obj_118_ = v_obj_138_;
goto v___jp_117_;
}
}
v___jp_151_:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_155_, 0, v___y_154_);
lean_inc_ref(v___y_152_);
v___x_156_ = l_Lake_JsonObject_insertJson(v___y_153_, v___y_152_, v___x_155_);
v_obj_138_ = v___x_156_;
goto v___jp_137_;
}
v___jp_157_:
{
if (lean_obj_tag(v_c_x3f_71_) == 1)
{
lean_object* v_val_159_; uint64_t v_hash_160_; lean_object* v_ext_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; uint8_t v___x_165_; 
v_val_159_ = lean_ctor_get(v_c_x3f_71_, 0);
lean_inc(v_val_159_);
lean_dec_ref_known(v_c_x3f_71_, 1);
v_hash_160_ = lean_ctor_get_uint64(v_val_159_, sizeof(void*)*1);
v_ext_161_ = lean_ctor_get(v_val_159_, 0);
lean_inc_ref(v_ext_161_);
lean_dec(v_val_159_);
v___x_162_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__4));
v___x_163_ = lean_string_utf8_byte_size(v_ext_161_);
v___x_164_ = lean_unsigned_to_nat(0u);
v___x_165_ = lean_nat_dec_eq(v___x_163_, v___x_164_);
if (v___x_165_ == 0)
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_166_ = l_Lake_lowerHexUInt64(v_hash_160_);
v___x_167_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0));
v___x_168_ = lean_string_append(v___x_166_, v___x_167_);
v___x_169_ = lean_string_append(v___x_168_, v_ext_161_);
lean_dec_ref(v_ext_161_);
v___y_152_ = v___x_162_;
v___y_153_ = v_obj_158_;
v___y_154_ = v___x_169_;
goto v___jp_151_;
}
else
{
lean_object* v___x_170_; 
lean_dec_ref(v_ext_161_);
v___x_170_ = l_Lake_lowerHexUInt64(v_hash_160_);
v___y_152_ = v___x_162_;
v___y_153_ = v_obj_158_;
v___y_154_ = v___x_170_;
goto v___jp_151_;
}
}
else
{
lean_dec(v_c_x3f_71_);
v_obj_138_ = v_obj_158_;
goto v___jp_137_;
}
}
v___jp_171_:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_175_, 0, v___y_174_);
lean_inc_ref(v___y_173_);
v___x_176_ = l_Lake_JsonObject_insertJson(v___y_172_, v___y_173_, v___x_175_);
v_obj_158_ = v___x_176_;
goto v___jp_157_;
}
v___jp_177_:
{
if (lean_obj_tag(v_ir_x3f_70_) == 1)
{
lean_object* v_val_179_; uint64_t v_hash_180_; lean_object* v_ext_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; uint8_t v___x_185_; 
v_val_179_ = lean_ctor_get(v_ir_x3f_70_, 0);
lean_inc(v_val_179_);
lean_dec_ref_known(v_ir_x3f_70_, 1);
v_hash_180_ = lean_ctor_get_uint64(v_val_179_, sizeof(void*)*1);
v_ext_181_ = lean_ctor_get(v_val_179_, 0);
lean_inc_ref(v_ext_181_);
lean_dec(v_val_179_);
v___x_182_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__5));
v___x_183_ = lean_string_utf8_byte_size(v_ext_181_);
v___x_184_ = lean_unsigned_to_nat(0u);
v___x_185_ = lean_nat_dec_eq(v___x_183_, v___x_184_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_186_ = l_Lake_lowerHexUInt64(v_hash_180_);
v___x_187_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0));
v___x_188_ = lean_string_append(v___x_186_, v___x_187_);
v___x_189_ = lean_string_append(v___x_188_, v_ext_181_);
lean_dec_ref(v_ext_181_);
v___y_172_ = v_obj_178_;
v___y_173_ = v___x_182_;
v___y_174_ = v___x_189_;
goto v___jp_171_;
}
else
{
lean_object* v___x_190_; 
lean_dec_ref(v_ext_181_);
v___x_190_ = l_Lake_lowerHexUInt64(v_hash_180_);
v___y_172_ = v_obj_178_;
v___y_173_ = v___x_182_;
v___y_174_ = v___x_190_;
goto v___jp_171_;
}
}
else
{
lean_dec(v_ir_x3f_70_);
v_obj_158_ = v_obj_178_;
goto v___jp_157_;
}
}
v___jp_191_:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_195_, 0, v___y_194_);
lean_inc_ref(v___y_192_);
v___x_196_ = l_Lake_JsonObject_insertJson(v___y_193_, v___y_192_, v___x_195_);
v_obj_178_ = v___x_196_;
goto v___jp_177_;
}
v___jp_208_:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_210_, 0, v___y_209_);
v___x_211_ = l_Lake_JsonObject_insertJson(v_obj_206_, v___x_207_, v___x_210_);
if (lean_obj_tag(v_irSig_x3f_69_) == 1)
{
lean_object* v_val_212_; uint64_t v_hash_213_; lean_object* v_ext_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; uint8_t v___x_218_; 
v_val_212_ = lean_ctor_get(v_irSig_x3f_69_, 0);
lean_inc(v_val_212_);
lean_dec_ref_known(v_irSig_x3f_69_, 1);
v_hash_213_ = lean_ctor_get_uint64(v_val_212_, sizeof(void*)*1);
v_ext_214_ = lean_ctor_get(v_val_212_, 0);
lean_inc_ref(v_ext_214_);
lean_dec(v_val_212_);
v___x_215_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__9));
v___x_216_ = lean_string_utf8_byte_size(v_ext_214_);
v___x_217_ = lean_unsigned_to_nat(0u);
v___x_218_ = lean_nat_dec_eq(v___x_216_, v___x_217_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_219_ = l_Lake_lowerHexUInt64(v_hash_213_);
v___x_220_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_ModuleOutputDescrs_toJson_spec__0_spec__0___closed__0));
v___x_221_ = lean_string_append(v___x_219_, v___x_220_);
v___x_222_ = lean_string_append(v___x_221_, v_ext_214_);
lean_dec_ref(v_ext_214_);
v___y_192_ = v___x_215_;
v___y_193_ = v___x_211_;
v___y_194_ = v___x_222_;
goto v___jp_191_;
}
else
{
lean_object* v___x_223_; 
lean_dec_ref(v_ext_214_);
v___x_223_ = l_Lake_lowerHexUInt64(v_hash_213_);
v___y_192_ = v___x_215_;
v___y_193_ = v___x_211_;
v___y_194_ = v___x_223_;
goto v___jp_191_;
}
}
else
{
lean_dec(v_irSig_x3f_69_);
v_obj_178_ = v___x_211_;
goto v___jp_177_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1(lean_object* v_x_236_){
_start:
{
if (lean_obj_tag(v_x_236_) == 0)
{
lean_object* v___x_237_; 
v___x_237_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1___closed__0));
return v___x_237_;
}
else
{
lean_object* v___x_238_; 
v___x_238_ = l_Lake_ArtifactDescr_fromJson_x3f(v_x_236_);
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v_a_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_246_; 
v_a_239_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_246_ == 0)
{
v___x_241_ = v___x_238_;
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_a_239_);
lean_dec(v___x_238_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_244_; 
if (v_isShared_242_ == 0)
{
v___x_244_ = v___x_241_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_a_239_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
else
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_255_; 
v_a_247_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_255_ == 0)
{
v___x_249_ = v___x_238_;
v_isShared_250_ = v_isSharedCheck_255_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_238_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_255_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_251_; lean_object* v___x_253_; 
v___x_251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_251_, 0, v_a_247_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 0, v___x_251_);
v___x_253_ = v___x_249_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v___x_251_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2(lean_object* v_x_258_){
_start:
{
if (lean_obj_tag(v_x_258_) == 0)
{
lean_object* v___x_259_; 
v___x_259_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2___closed__0));
return v___x_259_;
}
else
{
lean_object* v___x_260_; 
v___x_260_ = l_Lean_Json_getBool_x3f(v_x_258_);
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_268_; 
v_a_261_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_268_ == 0)
{
v___x_263_ = v___x_260_;
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v___x_260_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_261_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
else
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_277_; 
v_a_269_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_277_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_277_ == 0)
{
v___x_271_ = v___x_260_;
v_isShared_272_ = v_isSharedCheck_277_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_260_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_277_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_273_; lean_object* v___x_275_; 
v___x_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_273_, 0, v_a_269_);
if (v_isShared_272_ == 0)
{
lean_ctor_set(v___x_271_, 0, v___x_273_);
v___x_275_ = v___x_271_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v___x_273_);
v___x_275_ = v_reuseFailAlloc_276_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
return v___x_275_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2___boxed(lean_object* v_x_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2(v_x_278_);
lean_dec(v_x_278_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0_spec__0(size_t v_sz_280_, size_t v_i_281_, lean_object* v_bs_282_){
_start:
{
uint8_t v___x_283_; 
v___x_283_ = lean_usize_dec_lt(v_i_281_, v_sz_280_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; 
v___x_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_284_, 0, v_bs_282_);
return v___x_284_;
}
else
{
lean_object* v_v_285_; lean_object* v___x_286_; 
v_v_285_ = lean_array_uget_borrowed(v_bs_282_, v_i_281_);
lean_inc(v_v_285_);
v___x_286_ = l_Lake_ArtifactDescr_fromJson_x3f(v_v_285_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
lean_dec_ref(v_bs_282_);
v_a_287_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_294_ == 0)
{
v___x_289_ = v___x_286_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_286_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_287_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
else
{
lean_object* v_a_295_; lean_object* v___x_296_; lean_object* v_bs_x27_297_; size_t v___x_298_; size_t v___x_299_; lean_object* v___x_300_; 
v_a_295_ = lean_ctor_get(v___x_286_, 0);
lean_inc(v_a_295_);
lean_dec_ref_known(v___x_286_, 1);
v___x_296_ = lean_unsigned_to_nat(0u);
v_bs_x27_297_ = lean_array_uset(v_bs_282_, v_i_281_, v___x_296_);
v___x_298_ = ((size_t)1ULL);
v___x_299_ = lean_usize_add(v_i_281_, v___x_298_);
v___x_300_ = lean_array_uset(v_bs_x27_297_, v_i_281_, v_a_295_);
v_i_281_ = v___x_299_;
v_bs_282_ = v___x_300_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0_spec__0___boxed(lean_object* v_sz_302_, lean_object* v_i_303_, lean_object* v_bs_304_){
_start:
{
size_t v_sz_boxed_305_; size_t v_i_boxed_306_; lean_object* v_res_307_; 
v_sz_boxed_305_ = lean_unbox_usize(v_sz_302_);
lean_dec(v_sz_302_);
v_i_boxed_306_ = lean_unbox_usize(v_i_303_);
lean_dec(v_i_303_);
v_res_307_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0_spec__0(v_sz_boxed_305_, v_i_boxed_306_, v_bs_304_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0(lean_object* v_x_310_){
_start:
{
if (lean_obj_tag(v_x_310_) == 4)
{
lean_object* v_elems_311_; size_t v_sz_312_; size_t v___x_313_; lean_object* v___x_314_; 
v_elems_311_ = lean_ctor_get(v_x_310_, 0);
lean_inc_ref(v_elems_311_);
lean_dec_ref_known(v_x_310_, 1);
v_sz_312_ = lean_array_size(v_elems_311_);
v___x_313_ = ((size_t)0ULL);
v___x_314_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0_spec__0(v_sz_312_, v___x_313_, v_elems_311_);
return v___x_314_;
}
else
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_315_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0___closed__0));
v___x_316_ = lean_unsigned_to_nat(80u);
v___x_317_ = l_Lean_Json_pretty(v_x_310_, v___x_316_);
v___x_318_ = lean_string_append(v___x_315_, v___x_317_);
lean_dec_ref(v___x_317_);
v___x_319_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0___closed__1));
v___x_320_ = lean_string_append(v___x_318_, v___x_319_);
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
return v___x_321_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleOutputDescrs_fromJson_x3f(lean_object* v_val_341_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = l_Lean_Json_getObj_x3f(v_val_341_);
if (lean_obj_tag(v___x_342_) == 0)
{
lean_object* v_a_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_350_; 
v_a_343_ = lean_ctor_get(v___x_342_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_342_);
if (v_isSharedCheck_350_ == 0)
{
v___x_345_ = v___x_342_;
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_a_343_);
lean_dec(v___x_342_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_348_; 
if (v_isShared_346_ == 0)
{
v___x_348_ = v___x_345_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v_a_343_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
return v___x_348_;
}
}
}
else
{
lean_object* v_a_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v_a_351_ = lean_ctor_get(v___x_342_, 0);
lean_inc(v_a_351_);
lean_dec_ref_known(v___x_342_, 1);
v___x_352_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__7));
v___x_353_ = l_Lake_JsonObject_getJson_x3f(v_a_351_, v___x_352_);
if (lean_obj_tag(v___x_353_) == 0)
{
lean_object* v___x_354_; 
lean_dec(v_a_351_);
v___x_354_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__1));
return v___x_354_;
}
else
{
lean_object* v_val_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_628_; 
v_val_355_ = lean_ctor_get(v___x_353_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_628_ == 0)
{
v___x_357_ = v___x_353_;
v_isShared_358_ = v_isSharedCheck_628_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_val_355_);
lean_dec(v___x_353_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_628_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_359_; 
v___x_359_ = l_Lean_Array_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__0(v_val_355_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_369_; 
lean_del_object(v___x_357_);
lean_dec(v_a_351_);
v_a_360_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_369_ == 0)
{
v___x_362_ = v___x_359_;
v_isShared_363_ = v_isSharedCheck_369_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_369_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_367_; 
v___x_364_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__2));
v___x_365_ = lean_string_append(v___x_364_, v_a_360_);
lean_dec(v_a_360_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v___x_365_);
v___x_367_ = v___x_362_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v___x_365_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
else
{
lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_627_; 
v_a_370_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_627_ == 0)
{
v___x_372_ = v___x_359_;
v_isShared_373_ = v_isSharedCheck_627_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_359_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_627_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_374_; lean_object* v___x_375_; uint8_t v___x_376_; 
v___x_374_ = lean_unsigned_to_nat(0u);
v___x_375_ = lean_array_get_size(v_a_370_);
v___x_376_ = lean_nat_dec_lt(v___x_374_, v___x_375_);
if (v___x_376_ == 0)
{
lean_object* v___x_377_; 
lean_del_object(v___x_372_);
lean_dec(v_a_370_);
lean_del_object(v___x_357_);
lean_dec(v_a_351_);
v___x_377_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__4));
return v___x_377_;
}
else
{
lean_object* v___x_378_; lean_object* v___y_380_; lean_object* v___y_381_; lean_object* v___y_382_; lean_object* v___y_383_; uint8_t v___y_384_; lean_object* v___y_385_; lean_object* v___y_386_; lean_object* v___y_387_; lean_object* v___y_388_; lean_object* v___y_389_; lean_object* v___y_390_; lean_object* v___y_396_; lean_object* v___y_397_; lean_object* v___y_398_; uint8_t v___y_399_; lean_object* v___y_400_; lean_object* v___y_401_; lean_object* v___y_402_; lean_object* v___y_403_; lean_object* v___y_404_; lean_object* v___y_405_; lean_object* v___y_414_; lean_object* v___y_415_; lean_object* v___y_416_; lean_object* v___y_417_; lean_object* v___y_418_; lean_object* v___y_419_; lean_object* v___y_420_; lean_object* v___y_421_; uint8_t v___y_422_; lean_object* v___y_429_; lean_object* v___y_430_; lean_object* v___y_431_; lean_object* v___y_432_; lean_object* v___y_433_; lean_object* v___y_434_; lean_object* v___y_435_; lean_object* v___y_436_; lean_object* v_a_437_; lean_object* v___y_443_; lean_object* v___y_444_; lean_object* v___y_445_; lean_object* v___y_446_; lean_object* v___y_447_; lean_object* v___y_448_; lean_object* v___y_449_; lean_object* v_a_450_; lean_object* v___y_468_; lean_object* v___y_469_; lean_object* v___y_470_; lean_object* v___y_471_; lean_object* v___y_472_; lean_object* v___y_473_; lean_object* v_a_474_; lean_object* v___y_492_; lean_object* v___y_493_; lean_object* v___y_494_; lean_object* v___y_495_; lean_object* v___y_496_; lean_object* v_a_497_; lean_object* v___y_515_; lean_object* v___y_516_; lean_object* v___y_517_; lean_object* v___y_518_; lean_object* v_a_519_; lean_object* v___y_537_; lean_object* v___y_538_; lean_object* v___y_539_; lean_object* v_a_540_; lean_object* v___y_558_; lean_object* v___y_559_; lean_object* v_a_560_; lean_object* v_a_578_; lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_378_ = lean_array_fget(v_a_370_, v___x_374_);
v___x_611_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__6));
v___x_612_ = l_Lake_JsonObject_getJson_x3f(v_a_351_, v___x_611_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v___x_613_; 
v___x_613_ = lean_box(0);
v_a_578_ = v___x_613_;
goto v___jp_577_;
}
else
{
lean_object* v_val_614_; lean_object* v___x_615_; 
v_val_614_ = lean_ctor_get(v___x_612_, 0);
lean_inc(v_val_614_);
lean_dec_ref_known(v___x_612_, 1);
v___x_615_ = l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__2(v_val_614_);
lean_dec(v_val_614_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_625_; 
lean_dec(v___x_378_);
lean_del_object(v___x_372_);
lean_dec(v_a_370_);
lean_del_object(v___x_357_);
lean_dec(v_a_351_);
v_a_616_ = lean_ctor_get(v___x_615_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_625_ == 0)
{
v___x_618_ = v___x_615_;
v_isShared_619_ = v_isSharedCheck_625_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_615_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_625_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_623_; 
v___x_620_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__15));
v___x_621_ = lean_string_append(v___x_620_, v_a_616_);
lean_dec(v_a_616_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v___x_621_);
v___x_623_ = v___x_618_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_621_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
else
{
lean_object* v_a_626_; 
v_a_626_ = lean_ctor_get(v___x_615_, 0);
lean_inc(v_a_626_);
lean_dec_ref_known(v___x_615_, 1);
v_a_578_ = v_a_626_;
goto v___jp_577_;
}
}
v___jp_379_:
{
lean_object* v___x_391_; lean_object* v___x_393_; 
v___x_391_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v___x_391_, 0, v___x_378_);
lean_ctor_set(v___x_391_, 1, v___y_386_);
lean_ctor_set(v___x_391_, 2, v___y_390_);
lean_ctor_set(v___x_391_, 3, v___y_383_);
lean_ctor_set(v___x_391_, 4, v___y_381_);
lean_ctor_set(v___x_391_, 5, v___y_382_);
lean_ctor_set(v___x_391_, 6, v___y_388_);
lean_ctor_set(v___x_391_, 7, v___y_380_);
lean_ctor_set(v___x_391_, 8, v___y_385_);
lean_ctor_set(v___x_391_, 9, v___y_389_);
lean_ctor_set(v___x_391_, 10, v___y_387_);
lean_ctor_set_uint8(v___x_391_, sizeof(void*)*11, v___y_384_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 0, v___x_391_);
v___x_393_ = v___x_372_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v___x_391_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
v___jp_395_:
{
lean_object* v___x_406_; uint8_t v___x_407_; 
v___x_406_ = lean_unsigned_to_nat(2u);
v___x_407_ = lean_nat_dec_lt(v___x_406_, v___x_375_);
if (v___x_407_ == 0)
{
lean_object* v___x_408_; 
lean_dec(v_a_370_);
lean_del_object(v___x_357_);
v___x_408_ = lean_box(0);
v___y_380_ = v___y_397_;
v___y_381_ = v___y_396_;
v___y_382_ = v___y_398_;
v___y_383_ = v___y_400_;
v___y_384_ = v___y_399_;
v___y_385_ = v___y_401_;
v___y_386_ = v___y_405_;
v___y_387_ = v___y_403_;
v___y_388_ = v___y_402_;
v___y_389_ = v___y_404_;
v___y_390_ = v___x_408_;
goto v___jp_379_;
}
else
{
lean_object* v___x_409_; lean_object* v___x_411_; 
v___x_409_ = lean_array_fget(v_a_370_, v___x_406_);
lean_dec(v_a_370_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 0, v___x_409_);
v___x_411_ = v___x_357_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_409_);
v___x_411_ = v_reuseFailAlloc_412_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
v___y_380_ = v___y_397_;
v___y_381_ = v___y_396_;
v___y_382_ = v___y_398_;
v___y_383_ = v___y_400_;
v___y_384_ = v___y_399_;
v___y_385_ = v___y_401_;
v___y_386_ = v___y_405_;
v___y_387_ = v___y_403_;
v___y_388_ = v___y_402_;
v___y_389_ = v___y_404_;
v___y_390_ = v___x_411_;
goto v___jp_379_;
}
}
}
v___jp_413_:
{
lean_object* v___x_423_; uint8_t v___x_424_; 
v___x_423_ = lean_unsigned_to_nat(1u);
v___x_424_ = lean_nat_dec_lt(v___x_423_, v___x_375_);
if (v___x_424_ == 0)
{
lean_object* v___x_425_; 
v___x_425_ = lean_box(0);
v___y_396_ = v___y_415_;
v___y_397_ = v___y_414_;
v___y_398_ = v___y_416_;
v___y_399_ = v___y_422_;
v___y_400_ = v___y_417_;
v___y_401_ = v___y_418_;
v___y_402_ = v___y_420_;
v___y_403_ = v___y_419_;
v___y_404_ = v___y_421_;
v___y_405_ = v___x_425_;
goto v___jp_395_;
}
else
{
lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_426_ = lean_array_fget_borrowed(v_a_370_, v___x_423_);
lean_inc(v___x_426_);
v___x_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_427_, 0, v___x_426_);
v___y_396_ = v___y_415_;
v___y_397_ = v___y_414_;
v___y_398_ = v___y_416_;
v___y_399_ = v___y_422_;
v___y_400_ = v___y_417_;
v___y_401_ = v___y_418_;
v___y_402_ = v___y_420_;
v___y_403_ = v___y_419_;
v___y_404_ = v___y_421_;
v___y_405_ = v___x_427_;
goto v___jp_395_;
}
}
v___jp_428_:
{
if (lean_obj_tag(v___y_431_) == 0)
{
lean_object* v___x_438_; uint8_t v___x_439_; 
v___x_438_ = lean_unsigned_to_nat(1u);
v___x_439_ = lean_nat_dec_lt(v___x_438_, v___x_375_);
v___y_414_ = v___y_430_;
v___y_415_ = v___y_429_;
v___y_416_ = v___y_432_;
v___y_417_ = v___y_433_;
v___y_418_ = v___y_434_;
v___y_419_ = v_a_437_;
v___y_420_ = v___y_435_;
v___y_421_ = v___y_436_;
v___y_422_ = v___x_439_;
goto v___jp_413_;
}
else
{
lean_object* v_val_440_; uint8_t v___x_441_; 
v_val_440_ = lean_ctor_get(v___y_431_, 0);
lean_inc(v_val_440_);
lean_dec_ref_known(v___y_431_, 1);
v___x_441_ = lean_unbox(v_val_440_);
lean_dec(v_val_440_);
v___y_414_ = v___y_430_;
v___y_415_ = v___y_429_;
v___y_416_ = v___y_432_;
v___y_417_ = v___y_433_;
v___y_418_ = v___y_434_;
v___y_419_ = v_a_437_;
v___y_420_ = v___y_435_;
v___y_421_ = v___y_436_;
v___y_422_ = v___x_441_;
goto v___jp_413_;
}
}
v___jp_442_:
{
lean_object* v___x_451_; lean_object* v___x_452_; 
v___x_451_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__0));
v___x_452_ = l_Lake_JsonObject_getJson_x3f(v_a_351_, v___x_451_);
lean_dec(v_a_351_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v___x_453_; 
v___x_453_ = lean_box(0);
v___y_429_ = v___y_444_;
v___y_430_ = v___y_443_;
v___y_431_ = v___y_445_;
v___y_432_ = v___y_446_;
v___y_433_ = v___y_447_;
v___y_434_ = v___y_448_;
v___y_435_ = v___y_449_;
v___y_436_ = v_a_450_;
v_a_437_ = v___x_453_;
goto v___jp_428_;
}
else
{
lean_object* v_val_454_; lean_object* v___x_455_; 
v_val_454_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_val_454_);
lean_dec_ref_known(v___x_452_, 1);
v___x_455_ = l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1(v_val_454_);
if (lean_obj_tag(v___x_455_) == 0)
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_465_; 
lean_dec(v_a_450_);
lean_dec(v___y_449_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec(v___y_446_);
lean_dec(v___y_445_);
lean_dec(v___y_444_);
lean_dec(v___y_443_);
lean_dec(v___x_378_);
lean_del_object(v___x_372_);
lean_dec(v_a_370_);
lean_del_object(v___x_357_);
v_a_456_ = lean_ctor_get(v___x_455_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_465_ == 0)
{
v___x_458_ = v___x_455_;
v_isShared_459_ = v_isSharedCheck_465_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_455_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_465_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_463_; 
v___x_460_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__5));
v___x_461_ = lean_string_append(v___x_460_, v_a_456_);
lean_dec(v_a_456_);
if (v_isShared_459_ == 0)
{
lean_ctor_set(v___x_458_, 0, v___x_461_);
v___x_463_ = v___x_458_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v___x_461_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
else
{
lean_object* v_a_466_; 
v_a_466_ = lean_ctor_get(v___x_455_, 0);
lean_inc(v_a_466_);
lean_dec_ref_known(v___x_455_, 1);
v___y_429_ = v___y_444_;
v___y_430_ = v___y_443_;
v___y_431_ = v___y_445_;
v___y_432_ = v___y_446_;
v___y_433_ = v___y_447_;
v___y_434_ = v___y_448_;
v___y_435_ = v___y_449_;
v___y_436_ = v_a_450_;
v_a_437_ = v_a_466_;
goto v___jp_428_;
}
}
}
v___jp_467_:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__1));
v___x_476_ = l_Lake_JsonObject_getJson_x3f(v_a_351_, v___x_475_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v___x_477_; 
v___x_477_ = lean_box(0);
v___y_443_ = v___y_469_;
v___y_444_ = v___y_468_;
v___y_445_ = v___y_470_;
v___y_446_ = v___y_471_;
v___y_447_ = v___y_472_;
v___y_448_ = v_a_474_;
v___y_449_ = v___y_473_;
v_a_450_ = v___x_477_;
goto v___jp_442_;
}
else
{
lean_object* v_val_478_; lean_object* v___x_479_; 
v_val_478_ = lean_ctor_get(v___x_476_, 0);
lean_inc(v_val_478_);
lean_dec_ref_known(v___x_476_, 1);
v___x_479_ = l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1(v_val_478_);
if (lean_obj_tag(v___x_479_) == 0)
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_489_; 
lean_dec(v_a_474_);
lean_dec(v___y_473_);
lean_dec_ref(v___y_472_);
lean_dec(v___y_471_);
lean_dec(v___y_470_);
lean_dec(v___y_469_);
lean_dec(v___y_468_);
lean_dec(v___x_378_);
lean_del_object(v___x_372_);
lean_dec(v_a_370_);
lean_del_object(v___x_357_);
lean_dec(v_a_351_);
v_a_480_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_489_ == 0)
{
v___x_482_ = v___x_479_;
v_isShared_483_ = v_isSharedCheck_489_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_479_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_489_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_487_; 
v___x_484_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__6));
v___x_485_ = lean_string_append(v___x_484_, v_a_480_);
lean_dec(v_a_480_);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 0, v___x_485_);
v___x_487_ = v___x_482_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v___x_485_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
else
{
lean_object* v_a_490_; 
v_a_490_ = lean_ctor_get(v___x_479_, 0);
lean_inc(v_a_490_);
lean_dec_ref_known(v___x_479_, 1);
v___y_443_ = v___y_469_;
v___y_444_ = v___y_468_;
v___y_445_ = v___y_470_;
v___y_446_ = v___y_471_;
v___y_447_ = v___y_472_;
v___y_448_ = v_a_474_;
v___y_449_ = v___y_473_;
v_a_450_ = v_a_490_;
goto v___jp_442_;
}
}
}
v___jp_491_:
{
lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_498_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__2));
v___x_499_ = l_Lake_JsonObject_getJson_x3f(v_a_351_, v___x_498_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v___x_500_; 
v___x_500_ = lean_box(0);
v___y_468_ = v___y_492_;
v___y_469_ = v_a_497_;
v___y_470_ = v___y_493_;
v___y_471_ = v___y_494_;
v___y_472_ = v___y_495_;
v___y_473_ = v___y_496_;
v_a_474_ = v___x_500_;
goto v___jp_467_;
}
else
{
lean_object* v_val_501_; lean_object* v___x_502_; 
v_val_501_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_val_501_);
lean_dec_ref_known(v___x_499_, 1);
v___x_502_ = l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1(v_val_501_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_512_; 
lean_dec(v_a_497_);
lean_dec(v___y_496_);
lean_dec_ref(v___y_495_);
lean_dec(v___y_494_);
lean_dec(v___y_493_);
lean_dec(v___y_492_);
lean_dec(v___x_378_);
lean_del_object(v___x_372_);
lean_dec(v_a_370_);
lean_del_object(v___x_357_);
lean_dec(v_a_351_);
v_a_503_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_512_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_512_ == 0)
{
v___x_505_ = v___x_502_;
v_isShared_506_ = v_isSharedCheck_512_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v___x_502_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_512_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_510_; 
v___x_507_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__7));
v___x_508_ = lean_string_append(v___x_507_, v_a_503_);
lean_dec(v_a_503_);
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 0, v___x_508_);
v___x_510_ = v___x_505_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v___x_508_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
else
{
lean_object* v_a_513_; 
v_a_513_ = lean_ctor_get(v___x_502_, 0);
lean_inc(v_a_513_);
lean_dec_ref_known(v___x_502_, 1);
v___y_468_ = v___y_492_;
v___y_469_ = v_a_497_;
v___y_470_ = v___y_493_;
v___y_471_ = v___y_494_;
v___y_472_ = v___y_495_;
v___y_473_ = v___y_496_;
v_a_474_ = v_a_513_;
goto v___jp_467_;
}
}
}
v___jp_514_:
{
lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_520_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__3));
v___x_521_ = l_Lake_JsonObject_getJson_x3f(v_a_351_, v___x_520_);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v___x_522_; 
v___x_522_ = lean_box(0);
v___y_492_ = v___y_515_;
v___y_493_ = v___y_516_;
v___y_494_ = v___y_517_;
v___y_495_ = v___y_518_;
v___y_496_ = v_a_519_;
v_a_497_ = v___x_522_;
goto v___jp_491_;
}
else
{
lean_object* v_val_523_; lean_object* v___x_524_; 
v_val_523_ = lean_ctor_get(v___x_521_, 0);
lean_inc(v_val_523_);
lean_dec_ref_known(v___x_521_, 1);
v___x_524_ = l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1(v_val_523_);
if (lean_obj_tag(v___x_524_) == 0)
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_534_; 
lean_dec(v_a_519_);
lean_dec_ref(v___y_518_);
lean_dec(v___y_517_);
lean_dec(v___y_516_);
lean_dec(v___y_515_);
lean_dec(v___x_378_);
lean_del_object(v___x_372_);
lean_dec(v_a_370_);
lean_del_object(v___x_357_);
lean_dec(v_a_351_);
v_a_525_ = lean_ctor_get(v___x_524_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_524_);
if (v_isSharedCheck_534_ == 0)
{
v___x_527_ = v___x_524_;
v_isShared_528_ = v_isSharedCheck_534_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_524_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_534_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_532_; 
v___x_529_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__8));
v___x_530_ = lean_string_append(v___x_529_, v_a_525_);
lean_dec(v_a_525_);
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 0, v___x_530_);
v___x_532_ = v___x_527_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_530_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
else
{
lean_object* v_a_535_; 
v_a_535_ = lean_ctor_get(v___x_524_, 0);
lean_inc(v_a_535_);
lean_dec_ref_known(v___x_524_, 1);
v___y_492_ = v___y_515_;
v___y_493_ = v___y_516_;
v___y_494_ = v___y_517_;
v___y_495_ = v___y_518_;
v___y_496_ = v_a_519_;
v_a_497_ = v_a_535_;
goto v___jp_491_;
}
}
}
v___jp_536_:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_541_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__4));
v___x_542_ = l_Lake_JsonObject_getJson_x3f(v_a_351_, v___x_541_);
if (lean_obj_tag(v___x_542_) == 0)
{
lean_object* v___x_543_; 
v___x_543_ = lean_box(0);
v___y_515_ = v___y_537_;
v___y_516_ = v___y_538_;
v___y_517_ = v_a_540_;
v___y_518_ = v___y_539_;
v_a_519_ = v___x_543_;
goto v___jp_514_;
}
else
{
lean_object* v_val_544_; lean_object* v___x_545_; 
v_val_544_ = lean_ctor_get(v___x_542_, 0);
lean_inc(v_val_544_);
lean_dec_ref_known(v___x_542_, 1);
v___x_545_ = l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1(v_val_544_);
if (lean_obj_tag(v___x_545_) == 0)
{
lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_555_; 
lean_dec(v_a_540_);
lean_dec_ref(v___y_539_);
lean_dec(v___y_538_);
lean_dec(v___y_537_);
lean_dec(v___x_378_);
lean_del_object(v___x_372_);
lean_dec(v_a_370_);
lean_del_object(v___x_357_);
lean_dec(v_a_351_);
v_a_546_ = lean_ctor_get(v___x_545_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_555_ == 0)
{
v___x_548_ = v___x_545_;
v_isShared_549_ = v_isSharedCheck_555_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_545_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_555_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_553_; 
v___x_550_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__9));
v___x_551_ = lean_string_append(v___x_550_, v_a_546_);
lean_dec(v_a_546_);
if (v_isShared_549_ == 0)
{
lean_ctor_set(v___x_548_, 0, v___x_551_);
v___x_553_ = v___x_548_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_551_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
else
{
lean_object* v_a_556_; 
v_a_556_ = lean_ctor_get(v___x_545_, 0);
lean_inc(v_a_556_);
lean_dec_ref_known(v___x_545_, 1);
v___y_515_ = v___y_537_;
v___y_516_ = v___y_538_;
v___y_517_ = v_a_540_;
v___y_518_ = v___y_539_;
v_a_519_ = v_a_556_;
goto v___jp_514_;
}
}
}
v___jp_557_:
{
lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_561_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__5));
v___x_562_ = l_Lake_JsonObject_getJson_x3f(v_a_351_, v___x_561_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v___x_563_; 
v___x_563_ = lean_box(0);
v___y_537_ = v_a_560_;
v___y_538_ = v___y_558_;
v___y_539_ = v___y_559_;
v_a_540_ = v___x_563_;
goto v___jp_536_;
}
else
{
lean_object* v_val_564_; lean_object* v___x_565_; 
v_val_564_ = lean_ctor_get(v___x_562_, 0);
lean_inc(v_val_564_);
lean_dec_ref_known(v___x_562_, 1);
v___x_565_ = l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1(v_val_564_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_575_; 
lean_dec(v_a_560_);
lean_dec_ref(v___y_559_);
lean_dec(v___y_558_);
lean_dec(v___x_378_);
lean_del_object(v___x_372_);
lean_dec(v_a_370_);
lean_del_object(v___x_357_);
lean_dec(v_a_351_);
v_a_566_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_575_ == 0)
{
v___x_568_ = v___x_565_;
v_isShared_569_ = v_isSharedCheck_575_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_565_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_575_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_573_; 
v___x_570_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__10));
v___x_571_ = lean_string_append(v___x_570_, v_a_566_);
lean_dec(v_a_566_);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 0, v___x_571_);
v___x_573_ = v___x_568_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v___x_571_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
else
{
lean_object* v_a_576_; 
v_a_576_ = lean_ctor_get(v___x_565_, 0);
lean_inc(v_a_576_);
lean_dec_ref_known(v___x_565_, 1);
v___y_537_ = v_a_560_;
v___y_538_ = v___y_558_;
v___y_539_ = v___y_559_;
v_a_540_ = v_a_576_;
goto v___jp_536_;
}
}
}
v___jp_577_:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__8));
v___x_580_ = l_Lake_JsonObject_getJson_x3f(v_a_351_, v___x_579_);
if (lean_obj_tag(v___x_580_) == 0)
{
lean_object* v___x_581_; 
lean_dec(v_a_578_);
lean_dec(v___x_378_);
lean_del_object(v___x_372_);
lean_dec(v_a_370_);
lean_del_object(v___x_357_);
lean_dec(v_a_351_);
v___x_581_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__12));
return v___x_581_;
}
else
{
lean_object* v_val_582_; lean_object* v___x_583_; 
v_val_582_ = lean_ctor_get(v___x_580_, 0);
lean_inc(v_val_582_);
lean_dec_ref_known(v___x_580_, 1);
v___x_583_ = l_Lake_ArtifactDescr_fromJson_x3f(v_val_582_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_593_; 
lean_dec(v_a_578_);
lean_dec(v___x_378_);
lean_del_object(v___x_372_);
lean_dec(v_a_370_);
lean_del_object(v___x_357_);
lean_dec(v_a_351_);
v_a_584_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_593_ == 0)
{
v___x_586_ = v___x_583_;
v_isShared_587_ = v_isSharedCheck_593_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_583_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_593_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_591_; 
v___x_588_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__13));
v___x_589_ = lean_string_append(v___x_588_, v_a_584_);
lean_dec(v_a_584_);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 0, v___x_589_);
v___x_591_ = v___x_586_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v___x_589_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
else
{
lean_object* v_a_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v_a_594_ = lean_ctor_get(v___x_583_, 0);
lean_inc(v_a_594_);
lean_dec_ref_known(v___x_583_, 1);
v___x_595_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_toJson___closed__9));
v___x_596_ = l_Lake_JsonObject_getJson_x3f(v_a_351_, v___x_595_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_object* v___x_597_; 
v___x_597_ = lean_box(0);
v___y_558_ = v_a_578_;
v___y_559_ = v_a_594_;
v_a_560_ = v___x_597_;
goto v___jp_557_;
}
else
{
lean_object* v_val_598_; lean_object* v___x_599_; 
v_val_598_ = lean_ctor_get(v___x_596_, 0);
lean_inc(v_val_598_);
lean_dec_ref_known(v___x_596_, 1);
v___x_599_ = l_Lean_Option_fromJson_x3f___at___00Lake_ModuleOutputDescrs_fromJson_x3f_spec__1(v_val_598_);
if (lean_obj_tag(v___x_599_) == 0)
{
lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_609_; 
lean_dec(v_a_594_);
lean_dec(v_a_578_);
lean_dec(v___x_378_);
lean_del_object(v___x_372_);
lean_dec(v_a_370_);
lean_del_object(v___x_357_);
lean_dec(v_a_351_);
v_a_600_ = lean_ctor_get(v___x_599_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_609_ == 0)
{
v___x_602_ = v___x_599_;
v_isShared_603_ = v_isSharedCheck_609_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v___x_599_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_609_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_607_; 
v___x_604_ = ((lean_object*)(l_Lake_ModuleOutputDescrs_fromJson_x3f___closed__14));
v___x_605_ = lean_string_append(v___x_604_, v_a_600_);
lean_dec(v_a_600_);
if (v_isShared_603_ == 0)
{
lean_ctor_set(v___x_602_, 0, v___x_605_);
v___x_607_ = v___x_602_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___x_605_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
else
{
lean_object* v_a_610_; 
v_a_610_ = lean_ctor_get(v___x_599_, 0);
lean_inc(v_a_610_);
lean_dec_ref_known(v___x_599_, 1);
v___y_558_ = v_a_578_;
v___y_559_ = v_a_594_;
v_a_560_ = v_a_610_;
goto v___jp_557_;
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
}
LEAN_EXPORT lean_object* l_Lake_ModuleOutputArtifacts_descrs(lean_object* v_arts_631_){
_start:
{
lean_object* v_olean_632_; uint8_t v_isModule_633_; lean_object* v_oleanServer_x3f_634_; lean_object* v_oleanPrivate_x3f_635_; lean_object* v_ilean_636_; lean_object* v_irSig_x3f_637_; lean_object* v_ir_x3f_638_; lean_object* v_c_x3f_639_; lean_object* v_bc_x3f_640_; lean_object* v_ltar_x3f_641_; lean_object* v_usage_x3f_642_; lean_object* v_usekey_x3f_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_796_; 
v_olean_632_ = lean_ctor_get(v_arts_631_, 0);
v_isModule_633_ = lean_ctor_get_uint8(v_arts_631_, sizeof(void*)*11);
v_oleanServer_x3f_634_ = lean_ctor_get(v_arts_631_, 1);
v_oleanPrivate_x3f_635_ = lean_ctor_get(v_arts_631_, 2);
v_ilean_636_ = lean_ctor_get(v_arts_631_, 3);
v_irSig_x3f_637_ = lean_ctor_get(v_arts_631_, 4);
v_ir_x3f_638_ = lean_ctor_get(v_arts_631_, 5);
v_c_x3f_639_ = lean_ctor_get(v_arts_631_, 6);
v_bc_x3f_640_ = lean_ctor_get(v_arts_631_, 7);
v_ltar_x3f_641_ = lean_ctor_get(v_arts_631_, 8);
v_usage_x3f_642_ = lean_ctor_get(v_arts_631_, 9);
v_usekey_x3f_643_ = lean_ctor_get(v_arts_631_, 10);
v_isSharedCheck_796_ = !lean_is_exclusive(v_arts_631_);
if (v_isSharedCheck_796_ == 0)
{
v___x_645_ = v_arts_631_;
v_isShared_646_ = v_isSharedCheck_796_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_usekey_x3f_643_);
lean_inc(v_usage_x3f_642_);
lean_inc(v_ltar_x3f_641_);
lean_inc(v_bc_x3f_640_);
lean_inc(v_c_x3f_639_);
lean_inc(v_ir_x3f_638_);
lean_inc(v_irSig_x3f_637_);
lean_inc(v_ilean_636_);
lean_inc(v_oleanPrivate_x3f_635_);
lean_inc(v_oleanServer_x3f_634_);
lean_inc(v_olean_632_);
lean_dec(v_arts_631_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_796_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v_descr_647_; lean_object* v___y_649_; lean_object* v___y_650_; lean_object* v___y_651_; lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; lean_object* v___y_656_; lean_object* v___y_657_; lean_object* v___y_675_; lean_object* v___y_676_; lean_object* v___y_677_; lean_object* v___y_678_; lean_object* v___y_679_; lean_object* v___y_680_; lean_object* v___y_681_; lean_object* v___y_682_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___y_699_; lean_object* v___y_700_; lean_object* v___y_712_; lean_object* v___y_713_; lean_object* v___y_714_; lean_object* v___y_715_; lean_object* v___y_716_; lean_object* v___y_717_; lean_object* v___y_729_; lean_object* v___y_730_; lean_object* v___y_731_; lean_object* v___y_732_; lean_object* v___y_733_; lean_object* v___y_745_; lean_object* v___y_746_; lean_object* v___y_747_; lean_object* v___y_748_; lean_object* v___y_760_; lean_object* v___y_761_; lean_object* v___y_775_; 
v_descr_647_ = lean_ctor_get(v_olean_632_, 0);
lean_inc_ref(v_descr_647_);
lean_dec_ref(v_olean_632_);
if (lean_obj_tag(v_oleanServer_x3f_634_) == 0)
{
lean_object* v___x_786_; 
v___x_786_ = lean_box(0);
v___y_775_ = v___x_786_;
goto v___jp_774_;
}
else
{
lean_object* v_val_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_795_; 
v_val_787_ = lean_ctor_get(v_oleanServer_x3f_634_, 0);
v_isSharedCheck_795_ = !lean_is_exclusive(v_oleanServer_x3f_634_);
if (v_isSharedCheck_795_ == 0)
{
v___x_789_ = v_oleanServer_x3f_634_;
v_isShared_790_ = v_isSharedCheck_795_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_val_787_);
lean_dec(v_oleanServer_x3f_634_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_795_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v_descr_791_; lean_object* v___x_793_; 
v_descr_791_ = lean_ctor_get(v_val_787_, 0);
lean_inc_ref(v_descr_791_);
lean_dec(v_val_787_);
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 0, v_descr_791_);
v___x_793_ = v___x_789_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_descr_791_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
v___y_775_ = v___x_793_;
goto v___jp_774_;
}
}
}
v___jp_648_:
{
if (lean_obj_tag(v_usekey_x3f_643_) == 0)
{
lean_object* v___x_658_; lean_object* v___x_660_; 
v___x_658_ = lean_box(0);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 10, v___x_658_);
lean_ctor_set(v___x_645_, 9, v___y_657_);
lean_ctor_set(v___x_645_, 8, v___y_654_);
lean_ctor_set(v___x_645_, 7, v___y_650_);
lean_ctor_set(v___x_645_, 6, v___y_651_);
lean_ctor_set(v___x_645_, 5, v___y_649_);
lean_ctor_set(v___x_645_, 4, v___y_653_);
lean_ctor_set(v___x_645_, 3, v___y_656_);
lean_ctor_set(v___x_645_, 2, v___y_652_);
lean_ctor_set(v___x_645_, 1, v___y_655_);
lean_ctor_set(v___x_645_, 0, v_descr_647_);
v___x_660_ = v___x_645_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_descr_647_);
lean_ctor_set(v_reuseFailAlloc_661_, 1, v___y_655_);
lean_ctor_set(v_reuseFailAlloc_661_, 2, v___y_652_);
lean_ctor_set(v_reuseFailAlloc_661_, 3, v___y_656_);
lean_ctor_set(v_reuseFailAlloc_661_, 4, v___y_653_);
lean_ctor_set(v_reuseFailAlloc_661_, 5, v___y_649_);
lean_ctor_set(v_reuseFailAlloc_661_, 6, v___y_651_);
lean_ctor_set(v_reuseFailAlloc_661_, 7, v___y_650_);
lean_ctor_set(v_reuseFailAlloc_661_, 8, v___y_654_);
lean_ctor_set(v_reuseFailAlloc_661_, 9, v___y_657_);
lean_ctor_set(v_reuseFailAlloc_661_, 10, v___x_658_);
lean_ctor_set_uint8(v_reuseFailAlloc_661_, sizeof(void*)*11, v_isModule_633_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
else
{
lean_object* v_val_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_673_; 
v_val_662_ = lean_ctor_get(v_usekey_x3f_643_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v_usekey_x3f_643_);
if (v_isSharedCheck_673_ == 0)
{
v___x_664_ = v_usekey_x3f_643_;
v_isShared_665_ = v_isSharedCheck_673_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_val_662_);
lean_dec(v_usekey_x3f_643_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_673_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v_descr_666_; lean_object* v___x_668_; 
v_descr_666_ = lean_ctor_get(v_val_662_, 0);
lean_inc_ref(v_descr_666_);
lean_dec(v_val_662_);
if (v_isShared_665_ == 0)
{
lean_ctor_set(v___x_664_, 0, v_descr_666_);
v___x_668_ = v___x_664_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_descr_666_);
v___x_668_ = v_reuseFailAlloc_672_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
lean_object* v___x_670_; 
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 10, v___x_668_);
lean_ctor_set(v___x_645_, 9, v___y_657_);
lean_ctor_set(v___x_645_, 8, v___y_654_);
lean_ctor_set(v___x_645_, 7, v___y_650_);
lean_ctor_set(v___x_645_, 6, v___y_651_);
lean_ctor_set(v___x_645_, 5, v___y_649_);
lean_ctor_set(v___x_645_, 4, v___y_653_);
lean_ctor_set(v___x_645_, 3, v___y_656_);
lean_ctor_set(v___x_645_, 2, v___y_652_);
lean_ctor_set(v___x_645_, 1, v___y_655_);
lean_ctor_set(v___x_645_, 0, v_descr_647_);
v___x_670_ = v___x_645_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_descr_647_);
lean_ctor_set(v_reuseFailAlloc_671_, 1, v___y_655_);
lean_ctor_set(v_reuseFailAlloc_671_, 2, v___y_652_);
lean_ctor_set(v_reuseFailAlloc_671_, 3, v___y_656_);
lean_ctor_set(v_reuseFailAlloc_671_, 4, v___y_653_);
lean_ctor_set(v_reuseFailAlloc_671_, 5, v___y_649_);
lean_ctor_set(v_reuseFailAlloc_671_, 6, v___y_651_);
lean_ctor_set(v_reuseFailAlloc_671_, 7, v___y_650_);
lean_ctor_set(v_reuseFailAlloc_671_, 8, v___y_654_);
lean_ctor_set(v_reuseFailAlloc_671_, 9, v___y_657_);
lean_ctor_set(v_reuseFailAlloc_671_, 10, v___x_668_);
lean_ctor_set_uint8(v_reuseFailAlloc_671_, sizeof(void*)*11, v_isModule_633_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
}
}
}
v___jp_674_:
{
if (lean_obj_tag(v_usage_x3f_642_) == 0)
{
lean_object* v___x_683_; 
v___x_683_ = lean_box(0);
v___y_649_ = v___y_675_;
v___y_650_ = v___y_676_;
v___y_651_ = v___y_678_;
v___y_652_ = v___y_677_;
v___y_653_ = v___y_679_;
v___y_654_ = v___y_682_;
v___y_655_ = v___y_680_;
v___y_656_ = v___y_681_;
v___y_657_ = v___x_683_;
goto v___jp_648_;
}
else
{
lean_object* v_val_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_692_; 
v_val_684_ = lean_ctor_get(v_usage_x3f_642_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v_usage_x3f_642_);
if (v_isSharedCheck_692_ == 0)
{
v___x_686_ = v_usage_x3f_642_;
v_isShared_687_ = v_isSharedCheck_692_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_val_684_);
lean_dec(v_usage_x3f_642_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_692_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v_descr_688_; lean_object* v___x_690_; 
v_descr_688_ = lean_ctor_get(v_val_684_, 0);
lean_inc_ref(v_descr_688_);
lean_dec(v_val_684_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 0, v_descr_688_);
v___x_690_ = v___x_686_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_descr_688_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
v___y_649_ = v___y_675_;
v___y_650_ = v___y_676_;
v___y_651_ = v___y_678_;
v___y_652_ = v___y_677_;
v___y_653_ = v___y_679_;
v___y_654_ = v___y_682_;
v___y_655_ = v___y_680_;
v___y_656_ = v___y_681_;
v___y_657_ = v___x_690_;
goto v___jp_648_;
}
}
}
}
v___jp_693_:
{
if (lean_obj_tag(v_ltar_x3f_641_) == 0)
{
lean_object* v___x_701_; 
v___x_701_ = lean_box(0);
v___y_675_ = v___y_694_;
v___y_676_ = v___y_700_;
v___y_677_ = v___y_696_;
v___y_678_ = v___y_695_;
v___y_679_ = v___y_697_;
v___y_680_ = v___y_698_;
v___y_681_ = v___y_699_;
v___y_682_ = v___x_701_;
goto v___jp_674_;
}
else
{
lean_object* v_val_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_710_; 
v_val_702_ = lean_ctor_get(v_ltar_x3f_641_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v_ltar_x3f_641_);
if (v_isSharedCheck_710_ == 0)
{
v___x_704_ = v_ltar_x3f_641_;
v_isShared_705_ = v_isSharedCheck_710_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_val_702_);
lean_dec(v_ltar_x3f_641_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_710_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v_descr_706_; lean_object* v___x_708_; 
v_descr_706_ = lean_ctor_get(v_val_702_, 0);
lean_inc_ref(v_descr_706_);
lean_dec(v_val_702_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 0, v_descr_706_);
v___x_708_ = v___x_704_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_descr_706_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
v___y_675_ = v___y_694_;
v___y_676_ = v___y_700_;
v___y_677_ = v___y_696_;
v___y_678_ = v___y_695_;
v___y_679_ = v___y_697_;
v___y_680_ = v___y_698_;
v___y_681_ = v___y_699_;
v___y_682_ = v___x_708_;
goto v___jp_674_;
}
}
}
}
v___jp_711_:
{
if (lean_obj_tag(v_bc_x3f_640_) == 0)
{
lean_object* v___x_718_; 
v___x_718_ = lean_box(0);
v___y_694_ = v___y_712_;
v___y_695_ = v___y_717_;
v___y_696_ = v___y_713_;
v___y_697_ = v___y_714_;
v___y_698_ = v___y_715_;
v___y_699_ = v___y_716_;
v___y_700_ = v___x_718_;
goto v___jp_693_;
}
else
{
lean_object* v_val_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_727_; 
v_val_719_ = lean_ctor_get(v_bc_x3f_640_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v_bc_x3f_640_);
if (v_isSharedCheck_727_ == 0)
{
v___x_721_ = v_bc_x3f_640_;
v_isShared_722_ = v_isSharedCheck_727_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_val_719_);
lean_dec(v_bc_x3f_640_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_727_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v_descr_723_; lean_object* v___x_725_; 
v_descr_723_ = lean_ctor_get(v_val_719_, 0);
lean_inc_ref(v_descr_723_);
lean_dec(v_val_719_);
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 0, v_descr_723_);
v___x_725_ = v___x_721_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_descr_723_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
v___y_694_ = v___y_712_;
v___y_695_ = v___y_717_;
v___y_696_ = v___y_713_;
v___y_697_ = v___y_714_;
v___y_698_ = v___y_715_;
v___y_699_ = v___y_716_;
v___y_700_ = v___x_725_;
goto v___jp_693_;
}
}
}
}
v___jp_728_:
{
if (lean_obj_tag(v_c_x3f_639_) == 0)
{
lean_object* v___x_734_; 
v___x_734_ = lean_box(0);
v___y_712_ = v___y_733_;
v___y_713_ = v___y_729_;
v___y_714_ = v___y_730_;
v___y_715_ = v___y_731_;
v___y_716_ = v___y_732_;
v___y_717_ = v___x_734_;
goto v___jp_711_;
}
else
{
lean_object* v_val_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_743_; 
v_val_735_ = lean_ctor_get(v_c_x3f_639_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v_c_x3f_639_);
if (v_isSharedCheck_743_ == 0)
{
v___x_737_ = v_c_x3f_639_;
v_isShared_738_ = v_isSharedCheck_743_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_val_735_);
lean_dec(v_c_x3f_639_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_743_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v_descr_739_; lean_object* v___x_741_; 
v_descr_739_ = lean_ctor_get(v_val_735_, 0);
lean_inc_ref(v_descr_739_);
lean_dec(v_val_735_);
if (v_isShared_738_ == 0)
{
lean_ctor_set(v___x_737_, 0, v_descr_739_);
v___x_741_ = v___x_737_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_descr_739_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
v___y_712_ = v___y_733_;
v___y_713_ = v___y_729_;
v___y_714_ = v___y_730_;
v___y_715_ = v___y_731_;
v___y_716_ = v___y_732_;
v___y_717_ = v___x_741_;
goto v___jp_711_;
}
}
}
}
v___jp_744_:
{
if (lean_obj_tag(v_ir_x3f_638_) == 0)
{
lean_object* v___x_749_; 
v___x_749_ = lean_box(0);
v___y_729_ = v___y_745_;
v___y_730_ = v___y_748_;
v___y_731_ = v___y_746_;
v___y_732_ = v___y_747_;
v___y_733_ = v___x_749_;
goto v___jp_728_;
}
else
{
lean_object* v_val_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_758_; 
v_val_750_ = lean_ctor_get(v_ir_x3f_638_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v_ir_x3f_638_);
if (v_isSharedCheck_758_ == 0)
{
v___x_752_ = v_ir_x3f_638_;
v_isShared_753_ = v_isSharedCheck_758_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_val_750_);
lean_dec(v_ir_x3f_638_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_758_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v_descr_754_; lean_object* v___x_756_; 
v_descr_754_ = lean_ctor_get(v_val_750_, 0);
lean_inc_ref(v_descr_754_);
lean_dec(v_val_750_);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 0, v_descr_754_);
v___x_756_ = v___x_752_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_descr_754_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
v___y_729_ = v___y_745_;
v___y_730_ = v___y_748_;
v___y_731_ = v___y_746_;
v___y_732_ = v___y_747_;
v___y_733_ = v___x_756_;
goto v___jp_728_;
}
}
}
}
v___jp_759_:
{
if (lean_obj_tag(v_irSig_x3f_637_) == 0)
{
lean_object* v_descr_762_; lean_object* v___x_763_; 
v_descr_762_ = lean_ctor_get(v_ilean_636_, 0);
lean_inc_ref(v_descr_762_);
lean_dec_ref(v_ilean_636_);
v___x_763_ = lean_box(0);
v___y_745_ = v___y_761_;
v___y_746_ = v___y_760_;
v___y_747_ = v_descr_762_;
v___y_748_ = v___x_763_;
goto v___jp_744_;
}
else
{
lean_object* v_val_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_773_; 
v_val_764_ = lean_ctor_get(v_irSig_x3f_637_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v_irSig_x3f_637_);
if (v_isSharedCheck_773_ == 0)
{
v___x_766_ = v_irSig_x3f_637_;
v_isShared_767_ = v_isSharedCheck_773_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_val_764_);
lean_dec(v_irSig_x3f_637_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_773_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v_descr_768_; lean_object* v_descr_769_; lean_object* v___x_771_; 
v_descr_768_ = lean_ctor_get(v_ilean_636_, 0);
lean_inc_ref(v_descr_768_);
lean_dec_ref(v_ilean_636_);
v_descr_769_ = lean_ctor_get(v_val_764_, 0);
lean_inc_ref(v_descr_769_);
lean_dec(v_val_764_);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v_descr_769_);
v___x_771_ = v___x_766_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_descr_769_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
v___y_745_ = v___y_761_;
v___y_746_ = v___y_760_;
v___y_747_ = v_descr_768_;
v___y_748_ = v___x_771_;
goto v___jp_744_;
}
}
}
}
v___jp_774_:
{
if (lean_obj_tag(v_oleanPrivate_x3f_635_) == 0)
{
lean_object* v___x_776_; 
v___x_776_ = lean_box(0);
v___y_760_ = v___y_775_;
v___y_761_ = v___x_776_;
goto v___jp_759_;
}
else
{
lean_object* v_val_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_785_; 
v_val_777_ = lean_ctor_get(v_oleanPrivate_x3f_635_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v_oleanPrivate_x3f_635_);
if (v_isSharedCheck_785_ == 0)
{
v___x_779_ = v_oleanPrivate_x3f_635_;
v_isShared_780_ = v_isSharedCheck_785_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_val_777_);
lean_dec(v_oleanPrivate_x3f_635_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_785_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v_descr_781_; lean_object* v___x_783_; 
v_descr_781_ = lean_ctor_get(v_val_777_, 0);
lean_inc_ref(v_descr_781_);
lean_dec(v_val_777_);
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 0, v_descr_781_);
v___x_783_ = v___x_779_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_descr_781_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
v___y_760_ = v___y_775_;
v___y_761_ = v___x_783_;
goto v___jp_759_;
}
}
}
}
}
}
}
lean_object* runtime_initialize_Lake_Config_Artifact(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_JsonObject(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_ModuleArtifacts(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Artifact(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_ModuleArtifacts(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Artifact(uint8_t builtin);
lean_object* initialize_Lake_Util_JsonObject(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_ModuleArtifacts(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Artifact(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_JsonObject(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_ModuleArtifacts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_ModuleArtifacts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_ModuleArtifacts(builtin);
}
#ifdef __cplusplus
}
#endif
