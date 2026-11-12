// Lean compiler output
// Module: Lean.Util.ModuleUsage.Basic
// Imports: public import Lean.Expr public import Lean.Data.Json.FromToJson public import Lean.Compiler.ExternAttr import Lean.Compiler.BorrowedAnnotation
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
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_byte_array_uget(lean_object*, size_t);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_toDigits(lean_object*, lean_object*);
lean_object* lean_string_mk(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_uint64_to_uint8(uint64_t);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_getNumParts(lean_object*);
lean_object* l_Substring_Raw_repair(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_mk_empty_byte_array(lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lean_obj_tag_nat(lean_object*);
uint64_t lean_uint32_to_uint64(uint32_t);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedBorrowed(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
LEAN_EXPORT uint8_t l_Lean_ModuleUsage_instBEqDigest_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_instBEqDigest_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_ModuleUsage_instBEqDigest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_instBEqDigest_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_instBEqDigest___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_instBEqDigest___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ModuleUsage_instBEqDigest = (const lean_object*)&l_Lean_ModuleUsage_instBEqDigest___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_ModuleUsage_instHashableDigest_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_instHashableDigest_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_ModuleUsage_instHashableDigest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_instHashableDigest_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_instHashableDigest___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_instHashableDigest___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ModuleUsage_instHashableDigest = (const lean_object*)&l_Lean_ModuleUsage_instHashableDigest___closed__0_value;
static const lean_ctor_object l_Lean_ModuleUsage_instInhabitedDigest_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 16, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_ModuleUsage_instInhabitedDigest_default___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_instInhabitedDigest_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ModuleUsage_instInhabitedDigest_default = (const lean_object*)&l_Lean_ModuleUsage_instInhabitedDigest_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ModuleUsage_instInhabitedDigest = (const lean_object*)&l_Lean_ModuleUsage_instInhabitedDigest_default___closed__0_value;
lean_object* lean_usage_digest_bytes(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Digest_ofBytes___boxed(lean_object*);
lean_object* lean_usage_file_digest(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_fileDigest___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ModuleUsage_instBEqFileStamp_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_instBEqFileStamp_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_ModuleUsage_instBEqFileStamp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_instBEqFileStamp_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_instBEqFileStamp___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_instBEqFileStamp___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ModuleUsage_instBEqFileStamp = (const lean_object*)&l_Lean_ModuleUsage_instBEqFileStamp___closed__0_value;
static const lean_ctor_object l_Lean_ModuleUsage_instInhabitedFileStamp_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 56, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_ModuleUsage_instInhabitedFileStamp_default___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_instInhabitedFileStamp_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ModuleUsage_instInhabitedFileStamp_default = (const lean_object*)&l_Lean_ModuleUsage_instInhabitedFileStamp_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ModuleUsage_instInhabitedFileStamp = (const lean_object*)&l_Lean_ModuleUsage_instInhabitedFileStamp_default___closed__0_value;
lean_object* lean_usage_file_stamp(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_fileStamp___boxed(lean_object*, lean_object*);
lean_object* lean_usage_file_digest_stamped(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_fileDigestStamped___boxed(lean_object*, lean_object*);
lean_object* lean_usage_read_file_stamped(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_readFileStamped___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_hex16_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_hex16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_hex16___closed__0 = (const lean_object*)&l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_hex16___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_hex16(uint64_t);
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_hex16___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Digest_hex(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Digest_hex___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_ModuleUsage_Digest_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Digest_lt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lean_ModuleUsage_Digest_ofHex_x3f_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lean_ModuleUsage_Digest_ofHex_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Digest_ofHex_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_instToJsonDigest___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_instToJsonDigest___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_ModuleUsage_instToJsonDigest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_instToJsonDigest___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_instToJsonDigest___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_instToJsonDigest___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ModuleUsage_instToJsonDigest = (const lean_object*)&l_Lean_ModuleUsage_instToJsonDigest___closed__0_value;
static const lean_string_object l_Lean_ModuleUsage_instFromJsonDigest___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "expected a digest of 32 hex digits, got "};
static const lean_object* l_Lean_ModuleUsage_instFromJsonDigest___lam__0___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_instFromJsonDigest___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_instFromJsonDigest___lam__0(lean_object*);
static const lean_closure_object l_Lean_ModuleUsage_instFromJsonDigest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ModuleUsage_instFromJsonDigest___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_instFromJsonDigest___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_instFromJsonDigest___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ModuleUsage_instFromJsonDigest = (const lean_object*)&l_Lean_ModuleUsage_instFromJsonDigest___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_u8(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_u8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_u64(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_u64___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_bool(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_bool___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_str(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_nat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_digest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_digest___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_Enc_name_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_Enc_name_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_name(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_ModuleUsage_Enc_names_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_names(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_array___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_ModuleUsage_Enc_array___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_Enc_array___redArg___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__0_value;
static const lean_closure_object l_Lean_ModuleUsage_Enc_array___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_Enc_array___redArg___closed__1 = (const lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__1_value;
static const lean_closure_object l_Lean_ModuleUsage_Enc_array___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_Enc_array___redArg___closed__2 = (const lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__2_value;
static const lean_closure_object l_Lean_ModuleUsage_Enc_array___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_Enc_array___redArg___closed__3 = (const lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__3_value;
static const lean_closure_object l_Lean_ModuleUsage_Enc_array___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_Enc_array___redArg___closed__4 = (const lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__4_value;
static const lean_closure_object l_Lean_ModuleUsage_Enc_array___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_Enc_array___redArg___closed__5 = (const lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__5_value;
static const lean_closure_object l_Lean_ModuleUsage_Enc_array___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ModuleUsage_Enc_array___redArg___closed__6 = (const lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__6_value;
static const lean_ctor_object l_Lean_ModuleUsage_Enc_array___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__0_value),((lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__1_value)}};
static const lean_object* l_Lean_ModuleUsage_Enc_array___redArg___closed__7 = (const lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__7_value;
static const lean_ctor_object l_Lean_ModuleUsage_Enc_array___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__7_value),((lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__2_value),((lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__3_value),((lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__4_value),((lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__5_value)}};
static const lean_object* l_Lean_ModuleUsage_Enc_array___redArg___closed__8 = (const lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__8_value;
static const lean_ctor_object l_Lean_ModuleUsage_Enc_array___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__8_value),((lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__6_value)}};
static const lean_object* l_Lean_ModuleUsage_Enc_array___redArg___closed__9 = (const lean_object*)&l_Lean_ModuleUsage_Enc_array___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_array___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_array(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_Enc_nats_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_Enc_nats_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_nats(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_nats___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_opt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_opt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_finish(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_finish___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_infos_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_infos_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_infos_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_infos_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_namesInfos_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_namesInfos_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_namesInfos_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_namesInfos_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_compilerRead_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_compilerRead_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_compilerRead_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_compilerRead_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_eqv_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_eqv_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_eqv_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_eqv_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_syntaxEnc_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_syntaxEnc_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_syntaxEnc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_syntaxEnc_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_syntaxEnc_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes_valueEnc___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes_valueEnc___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes_valueEnc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes___closed__0;
LEAN_EXPORT lean_object* lean_usage_mdata_bytes(lean_object*);
static lean_once_cell_t l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBorrowed___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBorrowed___closed__0;
LEAN_EXPORT uint8_t lean_usage_mdata_borrowed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBorrowed___boxed(lean_object*);
lean_object* lean_usage_expr_digest(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_exprDigest___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_usage_exprs_digest(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_exprsDigest___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_ModuleUsage_externEnc_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_externEnc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_hintsEnc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_hintsEnc___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_safetyEnc(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_safetyEnc___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_nameToJson_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_nameToJson_go___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_ModuleUsage_nameToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ModuleUsage_nameToJson___closed__0 = (const lean_object*)&l_Lean_ModuleUsage_nameToJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_nameToJson(lean_object*);
LEAN_EXPORT uint8_t l_Lean_ModuleUsage_instBEqDigest_beq(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
uint64_t v_hi_3_; uint64_t v_lo_4_; uint64_t v_hi_5_; uint64_t v_lo_6_; uint8_t v___x_7_; 
v_hi_3_ = lean_ctor_get_uint64(v_x_1_, 0);
v_lo_4_ = lean_ctor_get_uint64(v_x_1_, 8);
v_hi_5_ = lean_ctor_get_uint64(v_x_2_, 0);
v_lo_6_ = lean_ctor_get_uint64(v_x_2_, 8);
v___x_7_ = lean_uint64_dec_eq(v_hi_3_, v_hi_5_);
if (v___x_7_ == 0)
{
return v___x_7_;
}
else
{
uint8_t v___x_8_; 
v___x_8_ = lean_uint64_dec_eq(v_lo_4_, v_lo_6_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_instBEqDigest_beq___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = l_Lean_ModuleUsage_instBEqDigest_beq(v_x_9_, v_x_10_);
lean_dec_ref(v_x_10_);
lean_dec_ref(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint64_t l_Lean_ModuleUsage_instHashableDigest_hash(lean_object* v_x_15_){
_start:
{
uint64_t v_hi_16_; uint64_t v_lo_17_; uint64_t v___x_18_; uint64_t v___x_19_; uint64_t v___x_20_; 
v_hi_16_ = lean_ctor_get_uint64(v_x_15_, 0);
v_lo_17_ = lean_ctor_get_uint64(v_x_15_, 8);
v___x_18_ = 0ULL;
v___x_19_ = lean_uint64_mix_hash(v___x_18_, v_hi_16_);
v___x_20_ = lean_uint64_mix_hash(v___x_19_, v_lo_17_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_instHashableDigest_hash___boxed(lean_object* v_x_21_){
_start:
{
uint64_t v_res_22_; lean_object* v_r_23_; 
v_res_22_ = l_Lean_ModuleUsage_instHashableDigest_hash(v_x_21_);
lean_dec_ref(v_x_21_);
v_r_23_ = lean_box_uint64(v_res_22_);
return v_r_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Digest_ofBytes___boxed(lean_object* v_bytes_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = lean_usage_digest_bytes(v_bytes_31_);
lean_dec_ref(v_bytes_31_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_fileDigest___boxed(lean_object* v_path_35_, lean_object* v_a_00___x40___internal___hyg_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = lean_usage_file_digest(v_path_35_);
lean_dec_ref(v_path_35_);
return v_res_37_;
}
}
LEAN_EXPORT uint8_t l_Lean_ModuleUsage_instBEqFileStamp_beq(lean_object* v_x_38_, lean_object* v_x_39_){
_start:
{
uint64_t v_dev_40_; uint64_t v_ino_41_; uint64_t v_size_42_; uint64_t v_mtimeSec_43_; uint64_t v_mtimeNsec_44_; uint64_t v_ctimeSec_45_; uint64_t v_ctimeNsec_46_; uint64_t v_dev_47_; uint64_t v_ino_48_; uint64_t v_size_49_; uint64_t v_mtimeSec_50_; uint64_t v_mtimeNsec_51_; uint64_t v_ctimeSec_52_; uint64_t v_ctimeNsec_53_; uint8_t v___x_54_; 
v_dev_40_ = lean_ctor_get_uint64(v_x_38_, 0);
v_ino_41_ = lean_ctor_get_uint64(v_x_38_, 8);
v_size_42_ = lean_ctor_get_uint64(v_x_38_, 16);
v_mtimeSec_43_ = lean_ctor_get_uint64(v_x_38_, 24);
v_mtimeNsec_44_ = lean_ctor_get_uint64(v_x_38_, 32);
v_ctimeSec_45_ = lean_ctor_get_uint64(v_x_38_, 40);
v_ctimeNsec_46_ = lean_ctor_get_uint64(v_x_38_, 48);
v_dev_47_ = lean_ctor_get_uint64(v_x_39_, 0);
v_ino_48_ = lean_ctor_get_uint64(v_x_39_, 8);
v_size_49_ = lean_ctor_get_uint64(v_x_39_, 16);
v_mtimeSec_50_ = lean_ctor_get_uint64(v_x_39_, 24);
v_mtimeNsec_51_ = lean_ctor_get_uint64(v_x_39_, 32);
v_ctimeSec_52_ = lean_ctor_get_uint64(v_x_39_, 40);
v_ctimeNsec_53_ = lean_ctor_get_uint64(v_x_39_, 48);
v___x_54_ = lean_uint64_dec_eq(v_dev_40_, v_dev_47_);
if (v___x_54_ == 0)
{
return v___x_54_;
}
else
{
uint8_t v___x_55_; 
v___x_55_ = lean_uint64_dec_eq(v_ino_41_, v_ino_48_);
if (v___x_55_ == 0)
{
return v___x_55_;
}
else
{
uint8_t v___x_56_; 
v___x_56_ = lean_uint64_dec_eq(v_size_42_, v_size_49_);
if (v___x_56_ == 0)
{
return v___x_56_;
}
else
{
uint8_t v___x_57_; 
v___x_57_ = lean_uint64_dec_eq(v_mtimeSec_43_, v_mtimeSec_50_);
if (v___x_57_ == 0)
{
return v___x_57_;
}
else
{
uint8_t v___x_58_; 
v___x_58_ = lean_uint64_dec_eq(v_mtimeNsec_44_, v_mtimeNsec_51_);
if (v___x_58_ == 0)
{
return v___x_58_;
}
else
{
uint8_t v___x_59_; 
v___x_59_ = lean_uint64_dec_eq(v_ctimeSec_45_, v_ctimeSec_52_);
if (v___x_59_ == 0)
{
return v___x_59_;
}
else
{
uint8_t v___x_60_; 
v___x_60_ = lean_uint64_dec_eq(v_ctimeNsec_46_, v_ctimeNsec_53_);
return v___x_60_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_instBEqFileStamp_beq___boxed(lean_object* v_x_61_, lean_object* v_x_62_){
_start:
{
uint8_t v_res_63_; lean_object* v_r_64_; 
v_res_63_ = l_Lean_ModuleUsage_instBEqFileStamp_beq(v_x_61_, v_x_62_);
lean_dec_ref(v_x_62_);
lean_dec_ref(v_x_61_);
v_r_64_ = lean_box(v_res_63_);
return v_r_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_fileStamp___boxed(lean_object* v_path_73_, lean_object* v_a_00___x40___internal___hyg_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = lean_usage_file_stamp(v_path_73_);
lean_dec_ref(v_path_73_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_fileDigestStamped___boxed(lean_object* v_path_78_, lean_object* v_a_00___x40___internal___hyg_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = lean_usage_file_digest_stamped(v_path_78_);
lean_dec_ref(v_path_78_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_readFileStamped___boxed(lean_object* v_path_83_, lean_object* v_a_00___x40___internal___hyg_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = lean_usage_read_file_stamped(v_path_83_);
lean_dec_ref(v_path_83_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_hex16_spec__0(lean_object* v_x_86_, lean_object* v_x_87_){
_start:
{
lean_object* v_zero_88_; uint8_t v_isZero_89_; 
v_zero_88_ = lean_unsigned_to_nat(0u);
v_isZero_89_ = lean_nat_dec_eq(v_x_86_, v_zero_88_);
if (v_isZero_89_ == 1)
{
lean_dec(v_x_86_);
return v_x_87_;
}
else
{
uint32_t v___x_90_; lean_object* v_one_91_; lean_object* v_n_92_; lean_object* v___x_93_; 
v___x_90_ = 48;
v_one_91_ = lean_unsigned_to_nat(1u);
v_n_92_ = lean_nat_sub(v_x_86_, v_one_91_);
lean_dec(v_x_86_);
v___x_93_ = lean_string_push(v_x_87_, v___x_90_);
v_x_86_ = v_n_92_;
v_x_87_ = v___x_93_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_hex16(uint64_t v_v_96_){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v_s_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_97_ = lean_unsigned_to_nat(16u);
v___x_98_ = lean_uint64_to_nat(v_v_96_);
v___x_99_ = l_Nat_toDigits(v___x_97_, v___x_98_);
v_s_100_ = lean_string_mk(v___x_99_);
v___x_101_ = ((lean_object*)(l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_hex16___closed__0));
v___x_102_ = lean_string_length(v_s_100_);
v___x_103_ = lean_nat_sub(v___x_97_, v___x_102_);
v___x_104_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_hex16_spec__0(v___x_103_, v___x_101_);
v___x_105_ = lean_string_append(v___x_104_, v_s_100_);
lean_dec_ref(v_s_100_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_hex16___boxed(lean_object* v_v_106_){
_start:
{
uint64_t v_v_boxed_107_; lean_object* v_res_108_; 
v_v_boxed_107_ = lean_unbox_uint64(v_v_106_);
lean_dec_ref(v_v_106_);
v_res_108_ = l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_hex16(v_v_boxed_107_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Digest_hex(lean_object* v_d_109_){
_start:
{
uint64_t v_hi_110_; uint64_t v_lo_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v_hi_110_ = lean_ctor_get_uint64(v_d_109_, 0);
v_lo_111_ = lean_ctor_get_uint64(v_d_109_, 8);
v___x_112_ = l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_hex16(v_hi_110_);
v___x_113_ = l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_hex16(v_lo_111_);
v___x_114_ = lean_string_append(v___x_112_, v___x_113_);
lean_dec_ref(v___x_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Digest_hex___boxed(lean_object* v_d_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lean_ModuleUsage_Digest_hex(v_d_115_);
lean_dec_ref(v_d_115_);
return v_res_116_;
}
}
LEAN_EXPORT uint8_t l_Lean_ModuleUsage_Digest_lt(lean_object* v_a_117_, lean_object* v_b_118_){
_start:
{
uint64_t v_hi_119_; uint64_t v_lo_120_; uint64_t v_hi_121_; uint64_t v_lo_122_; uint8_t v___x_123_; 
v_hi_119_ = lean_ctor_get_uint64(v_a_117_, 0);
v_lo_120_ = lean_ctor_get_uint64(v_a_117_, 8);
v_hi_121_ = lean_ctor_get_uint64(v_b_118_, 0);
v_lo_122_ = lean_ctor_get_uint64(v_b_118_, 8);
v___x_123_ = lean_uint64_dec_lt(v_hi_119_, v_hi_121_);
if (v___x_123_ == 0)
{
uint8_t v___x_124_; 
v___x_124_ = lean_uint64_dec_eq(v_hi_119_, v_hi_121_);
if (v___x_124_ == 0)
{
return v___x_124_;
}
else
{
uint8_t v___x_125_; 
v___x_125_ = lean_uint64_dec_lt(v_lo_120_, v_lo_122_);
return v___x_125_;
}
}
else
{
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Digest_lt___boxed(lean_object* v_a_126_, lean_object* v_b_127_){
_start:
{
uint8_t v_res_128_; lean_object* v_r_129_; 
v_res_128_ = l_Lean_ModuleUsage_Digest_lt(v_a_126_, v_b_127_);
lean_dec_ref(v_b_127_);
lean_dec_ref(v_a_126_);
v_r_129_ = lean_box(v_res_128_);
return v_r_129_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lean_ModuleUsage_Digest_ofHex_x3f_spec__0(lean_object* v_as_130_, size_t v_i_131_, size_t v_stop_132_, lean_object* v_b_133_){
_start:
{
lean_object* v_val_135_; uint8_t v___x_139_; 
v___x_139_ = lean_usize_dec_eq(v_i_131_, v_stop_132_);
if (v___x_139_ == 0)
{
uint8_t v___x_140_; uint8_t v___x_156_; uint8_t v___x_157_; 
v___x_140_ = lean_byte_array_uget(v_as_130_, v_i_131_);
v___x_156_ = 48;
v___x_157_ = lean_uint8_dec_le(v___x_156_, v___x_140_);
if (v___x_157_ == 0)
{
goto v___jp_141_;
}
else
{
uint8_t v___x_158_; uint8_t v___x_159_; 
v___x_158_ = 57;
v___x_159_ = lean_uint8_dec_le(v___x_140_, v___x_158_);
if (v___x_159_ == 0)
{
goto v___jp_141_;
}
else
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_160_ = lean_unsigned_to_nat(16u);
v___x_161_ = lean_nat_mul(v___x_160_, v_b_133_);
lean_dec(v_b_133_);
v___x_162_ = lean_uint8_to_nat(v___x_140_);
v___x_163_ = lean_unsigned_to_nat(48u);
v___x_164_ = lean_nat_sub(v___x_162_, v___x_163_);
v___x_165_ = lean_nat_add(v___x_161_, v___x_164_);
lean_dec(v___x_164_);
lean_dec(v___x_161_);
v_val_135_ = v___x_165_;
goto v___jp_134_;
}
}
v___jp_141_:
{
uint8_t v___x_142_; uint8_t v___x_143_; 
v___x_142_ = 97;
v___x_143_ = lean_uint8_dec_le(v___x_142_, v___x_140_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; 
lean_dec(v_b_133_);
v___x_144_ = lean_box(0);
return v___x_144_;
}
else
{
uint8_t v___x_145_; uint8_t v___x_146_; 
v___x_145_ = 102;
v___x_146_ = lean_uint8_dec_le(v___x_140_, v___x_145_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; 
lean_dec(v_b_133_);
v___x_147_ = lean_box(0);
return v___x_147_;
}
else
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_148_ = lean_unsigned_to_nat(16u);
v___x_149_ = lean_nat_mul(v___x_148_, v_b_133_);
lean_dec(v_b_133_);
v___x_150_ = lean_uint8_to_nat(v___x_140_);
v___x_151_ = lean_unsigned_to_nat(97u);
v___x_152_ = lean_nat_sub(v___x_150_, v___x_151_);
v___x_153_ = lean_unsigned_to_nat(10u);
v___x_154_ = lean_nat_add(v___x_152_, v___x_153_);
lean_dec(v___x_152_);
v___x_155_ = lean_nat_add(v___x_149_, v___x_154_);
lean_dec(v___x_154_);
lean_dec(v___x_149_);
v_val_135_ = v___x_155_;
goto v___jp_134_;
}
}
}
}
else
{
lean_object* v___x_166_; 
v___x_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_166_, 0, v_b_133_);
return v___x_166_;
}
v___jp_134_:
{
size_t v___x_136_; size_t v___x_137_; 
v___x_136_ = ((size_t)1ULL);
v___x_137_ = lean_usize_add(v_i_131_, v___x_136_);
v_i_131_ = v___x_137_;
v_b_133_ = v_val_135_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_foldlMUnsafe_fold___at___00Lean_ModuleUsage_Digest_ofHex_x3f_spec__0___boxed(lean_object* v_as_167_, lean_object* v_i_168_, lean_object* v_stop_169_, lean_object* v_b_170_){
_start:
{
size_t v_i_boxed_171_; size_t v_stop_boxed_172_; lean_object* v_res_173_; 
v_i_boxed_171_ = lean_unbox_usize(v_i_168_);
lean_dec(v_i_168_);
v_stop_boxed_172_ = lean_unbox_usize(v_stop_169_);
lean_dec(v_stop_169_);
v_res_173_ = l_ByteArray_foldlMUnsafe_fold___at___00Lean_ModuleUsage_Digest_ofHex_x3f_spec__0(v_as_167_, v_i_boxed_171_, v_stop_boxed_172_, v_b_170_);
lean_dec_ref(v_as_167_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Digest_ofHex_x3f(lean_object* v_s_174_){
_start:
{
lean_object* v_val_176_; lean_object* v_bs_183_; lean_object* v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; 
v_bs_183_ = lean_string_to_utf8(v_s_174_);
v___x_184_ = lean_byte_array_size(v_bs_183_);
v___x_185_ = lean_unsigned_to_nat(32u);
v___x_186_ = lean_nat_dec_eq(v___x_184_, v___x_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; 
lean_dec_ref(v_bs_183_);
v___x_187_ = lean_box(0);
return v___x_187_;
}
else
{
lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_188_ = lean_unsigned_to_nat(0u);
v___x_189_ = lean_nat_dec_lt(v___x_188_, v___x_184_);
if (v___x_189_ == 0)
{
lean_dec_ref(v_bs_183_);
v_val_176_ = v___x_188_;
goto v___jp_175_;
}
else
{
size_t v___x_190_; size_t v___x_191_; lean_object* v___x_192_; 
v___x_190_ = ((size_t)0ULL);
v___x_191_ = lean_usize_of_nat(v___x_184_);
v___x_192_ = l_ByteArray_foldlMUnsafe_fold___at___00Lean_ModuleUsage_Digest_ofHex_x3f_spec__0(v_bs_183_, v___x_190_, v___x_191_, v___x_188_);
lean_dec_ref(v_bs_183_);
if (lean_obj_tag(v___x_192_) == 0)
{
lean_object* v___x_193_; 
v___x_193_ = lean_box(0);
return v___x_193_;
}
else
{
lean_object* v_val_194_; 
v_val_194_ = lean_ctor_get(v___x_192_, 0);
lean_inc(v_val_194_);
lean_dec_ref_known(v___x_192_, 1);
v_val_176_ = v_val_194_;
goto v___jp_175_;
}
}
}
v___jp_175_:
{
lean_object* v___x_177_; lean_object* v___x_178_; uint64_t v___x_179_; uint64_t v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_177_ = lean_unsigned_to_nat(64u);
v___x_178_ = lean_nat_shiftr(v_val_176_, v___x_177_);
v___x_179_ = lean_uint64_of_nat(v___x_178_);
lean_dec(v___x_178_);
v___x_180_ = lean_uint64_of_nat(v_val_176_);
lean_dec(v_val_176_);
v___x_181_ = lean_alloc_ctor(0, 0, 16);
lean_ctor_set_uint64(v___x_181_, 0, v___x_179_);
lean_ctor_set_uint64(v___x_181_, 8, v___x_180_);
v___x_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
return v___x_182_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_instToJsonDigest___lam__0(lean_object* v_d_195_){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = l_Lean_ModuleUsage_Digest_hex(v_d_195_);
v___x_197_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_197_, 0, v___x_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_instToJsonDigest___lam__0___boxed(lean_object* v_d_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Lean_ModuleUsage_instToJsonDigest___lam__0(v_d_198_);
lean_dec_ref(v_d_198_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_instFromJsonDigest___lam__0(lean_object* v_j_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_Lean_Json_getStr_x3f(v_j_203_);
if (lean_obj_tag(v___x_204_) == 0)
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_212_; 
v_a_205_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_212_ == 0)
{
v___x_207_ = v___x_204_;
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_204_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_210_; 
if (v_isShared_208_ == 0)
{
v___x_210_ = v___x_207_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_a_205_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
else
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_227_; 
v_a_213_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_227_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_227_ == 0)
{
v___x_215_ = v___x_204_;
v_isShared_216_ = v_isSharedCheck_227_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_204_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_227_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_217_; 
lean_inc(v_a_213_);
v___x_217_ = l_Lean_ModuleUsage_Digest_ofHex_x3f(v_a_213_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_221_; 
v___x_218_ = ((lean_object*)(l_Lean_ModuleUsage_instFromJsonDigest___lam__0___closed__0));
v___x_219_ = lean_string_append(v___x_218_, v_a_213_);
lean_dec(v_a_213_);
if (v_isShared_216_ == 0)
{
lean_ctor_set_tag(v___x_215_, 0);
lean_ctor_set(v___x_215_, 0, v___x_219_);
v___x_221_ = v___x_215_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_219_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
else
{
lean_object* v_val_223_; lean_object* v___x_225_; 
lean_dec(v_a_213_);
v_val_223_ = lean_ctor_get(v___x_217_, 0);
lean_inc(v_val_223_);
lean_dec_ref_known(v___x_217_, 1);
if (v_isShared_216_ == 0)
{
lean_ctor_set(v___x_215_, 0, v_val_223_);
v___x_225_ = v___x_215_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v_val_223_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_u8(lean_object* v_e_230_, uint8_t v_v_231_){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = lean_byte_array_push(v_e_230_, v_v_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_u8___boxed(lean_object* v_e_233_, lean_object* v_v_234_){
_start:
{
uint8_t v_v_boxed_235_; lean_object* v_res_236_; 
v_v_boxed_235_ = lean_unbox(v_v_234_);
v_res_236_ = l_Lean_ModuleUsage_Enc_u8(v_e_233_, v_v_boxed_235_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_u64(lean_object* v_e_237_, uint64_t v_v_238_){
_start:
{
uint8_t v___x_239_; lean_object* v___x_240_; uint64_t v___x_241_; uint64_t v___x_242_; uint8_t v___x_243_; lean_object* v___x_244_; uint64_t v___x_245_; uint64_t v___x_246_; uint8_t v___x_247_; lean_object* v___x_248_; uint64_t v___x_249_; uint64_t v___x_250_; uint8_t v___x_251_; lean_object* v___x_252_; uint64_t v___x_253_; uint64_t v___x_254_; uint8_t v___x_255_; lean_object* v___x_256_; uint64_t v___x_257_; uint64_t v___x_258_; uint8_t v___x_259_; lean_object* v___x_260_; uint64_t v___x_261_; uint64_t v___x_262_; uint8_t v___x_263_; lean_object* v___x_264_; uint64_t v___x_265_; uint64_t v___x_266_; uint8_t v___x_267_; lean_object* v___x_268_; 
v___x_239_ = lean_uint64_to_uint8(v_v_238_);
v___x_240_ = lean_byte_array_push(v_e_237_, v___x_239_);
v___x_241_ = 8ULL;
v___x_242_ = lean_uint64_shift_right(v_v_238_, v___x_241_);
v___x_243_ = lean_uint64_to_uint8(v___x_242_);
v___x_244_ = lean_byte_array_push(v___x_240_, v___x_243_);
v___x_245_ = 16ULL;
v___x_246_ = lean_uint64_shift_right(v_v_238_, v___x_245_);
v___x_247_ = lean_uint64_to_uint8(v___x_246_);
v___x_248_ = lean_byte_array_push(v___x_244_, v___x_247_);
v___x_249_ = 24ULL;
v___x_250_ = lean_uint64_shift_right(v_v_238_, v___x_249_);
v___x_251_ = lean_uint64_to_uint8(v___x_250_);
v___x_252_ = lean_byte_array_push(v___x_248_, v___x_251_);
v___x_253_ = 32ULL;
v___x_254_ = lean_uint64_shift_right(v_v_238_, v___x_253_);
v___x_255_ = lean_uint64_to_uint8(v___x_254_);
v___x_256_ = lean_byte_array_push(v___x_252_, v___x_255_);
v___x_257_ = 40ULL;
v___x_258_ = lean_uint64_shift_right(v_v_238_, v___x_257_);
v___x_259_ = lean_uint64_to_uint8(v___x_258_);
v___x_260_ = lean_byte_array_push(v___x_256_, v___x_259_);
v___x_261_ = 48ULL;
v___x_262_ = lean_uint64_shift_right(v_v_238_, v___x_261_);
v___x_263_ = lean_uint64_to_uint8(v___x_262_);
v___x_264_ = lean_byte_array_push(v___x_260_, v___x_263_);
v___x_265_ = 56ULL;
v___x_266_ = lean_uint64_shift_right(v_v_238_, v___x_265_);
v___x_267_ = lean_uint64_to_uint8(v___x_266_);
v___x_268_ = lean_byte_array_push(v___x_264_, v___x_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_u64___boxed(lean_object* v_e_269_, lean_object* v_v_270_){
_start:
{
uint64_t v_v_boxed_271_; lean_object* v_res_272_; 
v_v_boxed_271_ = lean_unbox_uint64(v_v_270_);
lean_dec_ref(v_v_270_);
v_res_272_ = l_Lean_ModuleUsage_Enc_u64(v_e_269_, v_v_boxed_271_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_bool(lean_object* v_e_273_, uint8_t v_v_274_){
_start:
{
if (v_v_274_ == 0)
{
uint8_t v___x_275_; lean_object* v___x_276_; 
v___x_275_ = 0;
v___x_276_ = lean_byte_array_push(v_e_273_, v___x_275_);
return v___x_276_;
}
else
{
uint8_t v___x_277_; lean_object* v___x_278_; 
v___x_277_ = 1;
v___x_278_ = lean_byte_array_push(v_e_273_, v___x_277_);
return v___x_278_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_bool___boxed(lean_object* v_e_279_, lean_object* v_v_280_){
_start:
{
uint8_t v_v_boxed_281_; lean_object* v_res_282_; 
v_v_boxed_281_ = lean_unbox(v_v_280_);
v_res_282_ = l_Lean_ModuleUsage_Enc_bool(v_e_279_, v_v_boxed_281_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_str(lean_object* v_e_283_, lean_object* v_s_284_){
_start:
{
lean_object* v_b_285_; lean_object* v___x_286_; uint64_t v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; uint8_t v___x_291_; lean_object* v___x_292_; 
v_b_285_ = lean_string_to_utf8(v_s_284_);
v___x_286_ = lean_byte_array_size(v_b_285_);
v___x_287_ = lean_uint64_of_nat(v___x_286_);
v___x_288_ = l_Lean_ModuleUsage_Enc_u64(v_e_283_, v___x_287_);
v___x_289_ = lean_unsigned_to_nat(0u);
v___x_290_ = lean_byte_array_size(v___x_288_);
v___x_291_ = 0;
v___x_292_ = lean_byte_array_copy_slice(v_b_285_, v___x_289_, v___x_288_, v___x_290_, v___x_286_, v___x_291_);
lean_dec_ref(v_b_285_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_nat(lean_object* v_e_293_, lean_object* v_n_294_){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = l_Nat_reprFast(v_n_294_);
v___x_296_ = l_Lean_ModuleUsage_Enc_str(v_e_293_, v___x_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_digest(lean_object* v_e_297_, lean_object* v_d_298_){
_start:
{
uint64_t v_hi_299_; uint64_t v_lo_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v_hi_299_ = lean_ctor_get_uint64(v_d_298_, 0);
v_lo_300_ = lean_ctor_get_uint64(v_d_298_, 8);
v___x_301_ = l_Lean_ModuleUsage_Enc_u64(v_e_297_, v_hi_299_);
v___x_302_ = l_Lean_ModuleUsage_Enc_u64(v___x_301_, v_lo_300_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_digest___boxed(lean_object* v_e_303_, lean_object* v_d_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_ModuleUsage_Enc_digest(v_e_303_, v_d_304_);
lean_dec_ref(v_d_304_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_Enc_name_go(lean_object* v_a_306_, lean_object* v_a_307_){
_start:
{
switch(lean_obj_tag(v_a_306_))
{
case 0:
{
lean_inc_ref(v_a_307_);
return v_a_307_;
}
case 1:
{
lean_object* v_pre_308_; lean_object* v_str_309_; lean_object* v___x_310_; uint8_t v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v_pre_308_ = lean_ctor_get(v_a_306_, 0);
lean_inc(v_pre_308_);
v_str_309_ = lean_ctor_get(v_a_306_, 1);
lean_inc_ref(v_str_309_);
lean_dec_ref_known(v_a_306_, 2);
v___x_310_ = l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_Enc_name_go(v_pre_308_, v_a_307_);
v___x_311_ = 1;
v___x_312_ = lean_byte_array_push(v___x_310_, v___x_311_);
v___x_313_ = l_Lean_ModuleUsage_Enc_str(v___x_312_, v_str_309_);
return v___x_313_;
}
default: 
{
lean_object* v_pre_314_; lean_object* v_i_315_; lean_object* v___x_316_; uint8_t v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v_pre_314_ = lean_ctor_get(v_a_306_, 0);
lean_inc(v_pre_314_);
v_i_315_ = lean_ctor_get(v_a_306_, 1);
lean_inc(v_i_315_);
lean_dec_ref_known(v_a_306_, 2);
v___x_316_ = l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_Enc_name_go(v_pre_314_, v_a_307_);
v___x_317_ = 2;
v___x_318_ = lean_byte_array_push(v___x_316_, v___x_317_);
v___x_319_ = l_Lean_ModuleUsage_Enc_nat(v___x_318_, v_i_315_);
return v___x_319_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_Enc_name_go___boxed(lean_object* v_a_320_, lean_object* v_a_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_Enc_name_go(v_a_320_, v_a_321_);
lean_dec_ref(v_a_321_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_name(lean_object* v_e_323_, lean_object* v_n_324_){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_325_ = l_Lean_Name_getNumParts(v_n_324_);
v___x_326_ = l_Lean_ModuleUsage_Enc_nat(v_e_323_, v___x_325_);
v___x_327_ = l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_Enc_name_go(v_n_324_, v___x_326_);
lean_dec_ref(v___x_326_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_ModuleUsage_Enc_names_spec__0(lean_object* v_x_328_, lean_object* v_x_329_){
_start:
{
if (lean_obj_tag(v_x_329_) == 0)
{
return v_x_328_;
}
else
{
lean_object* v_head_330_; lean_object* v_tail_331_; lean_object* v___x_332_; 
v_head_330_ = lean_ctor_get(v_x_329_, 0);
lean_inc(v_head_330_);
v_tail_331_ = lean_ctor_get(v_x_329_, 1);
lean_inc(v_tail_331_);
lean_dec_ref_known(v_x_329_, 2);
v___x_332_ = l_Lean_ModuleUsage_Enc_name(v_x_328_, v_head_330_);
v_x_328_ = v___x_332_;
v_x_329_ = v_tail_331_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_names(lean_object* v_e_334_, lean_object* v_ns_335_){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_336_ = l_List_lengthTR___redArg(v_ns_335_);
v___x_337_ = l_Lean_ModuleUsage_Enc_nat(v_e_334_, v___x_336_);
v___x_338_ = l_List_foldl___at___00Lean_ModuleUsage_Enc_names_spec__0(v___x_337_, v_ns_335_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_array___redArg___lam__0(lean_object* v_f_339_, lean_object* v_x1_340_, lean_object* v_x2_341_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = lean_apply_2(v_f_339_, v_x1_340_, v_x2_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_array___redArg(lean_object* v_e_362_, lean_object* v_xs_363_, lean_object* v_f_364_){
_start:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_365_ = lean_array_get_size(v_xs_363_);
v___x_366_ = l_Lean_ModuleUsage_Enc_nat(v_e_362_, v___x_365_);
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = ((lean_object*)(l_Lean_ModuleUsage_Enc_array___redArg___closed__9));
v___x_369_ = lean_nat_dec_lt(v___x_367_, v___x_365_);
if (v___x_369_ == 0)
{
lean_dec_ref(v_f_364_);
lean_dec_ref(v_xs_363_);
return v___x_366_;
}
else
{
lean_object* v___f_370_; size_t v___x_371_; size_t v___x_372_; lean_object* v___x_373_; 
v___f_370_ = lean_alloc_closure((void*)(l_Lean_ModuleUsage_Enc_array___redArg___lam__0), 3, 1);
lean_closure_set(v___f_370_, 0, v_f_364_);
v___x_371_ = ((size_t)0ULL);
v___x_372_ = lean_usize_of_nat(v___x_365_);
v___x_373_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_368_, v___f_370_, v_xs_363_, v___x_371_, v___x_372_, v___x_366_);
return v___x_373_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_array(lean_object* v_00_u03b1_374_, lean_object* v_e_375_, lean_object* v_xs_376_, lean_object* v_f_377_){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; uint8_t v___x_382_; 
v___x_378_ = lean_array_get_size(v_xs_376_);
v___x_379_ = l_Lean_ModuleUsage_Enc_nat(v_e_375_, v___x_378_);
v___x_380_ = lean_unsigned_to_nat(0u);
v___x_381_ = ((lean_object*)(l_Lean_ModuleUsage_Enc_array___redArg___closed__9));
v___x_382_ = lean_nat_dec_lt(v___x_380_, v___x_378_);
if (v___x_382_ == 0)
{
lean_dec_ref(v_f_377_);
lean_dec_ref(v_xs_376_);
return v___x_379_;
}
else
{
lean_object* v___f_383_; size_t v___x_384_; size_t v___x_385_; lean_object* v___x_386_; 
v___f_383_ = lean_alloc_closure((void*)(l_Lean_ModuleUsage_Enc_array___redArg___lam__0), 3, 1);
lean_closure_set(v___f_383_, 0, v_f_377_);
v___x_384_ = ((size_t)0ULL);
v___x_385_ = lean_usize_of_nat(v___x_378_);
v___x_386_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_381_, v___f_383_, v_xs_376_, v___x_384_, v___x_385_, v___x_379_);
return v___x_386_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_Enc_nats_spec__0(lean_object* v_as_387_, size_t v_i_388_, size_t v_stop_389_, lean_object* v_b_390_){
_start:
{
uint8_t v___x_391_; 
v___x_391_ = lean_usize_dec_eq(v_i_388_, v_stop_389_);
if (v___x_391_ == 0)
{
lean_object* v___x_392_; lean_object* v___x_393_; size_t v___x_394_; size_t v___x_395_; 
v___x_392_ = lean_array_uget_borrowed(v_as_387_, v_i_388_);
lean_inc(v___x_392_);
v___x_393_ = l_Lean_ModuleUsage_Enc_nat(v_b_390_, v___x_392_);
v___x_394_ = ((size_t)1ULL);
v___x_395_ = lean_usize_add(v_i_388_, v___x_394_);
v_i_388_ = v___x_395_;
v_b_390_ = v___x_393_;
goto _start;
}
else
{
return v_b_390_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_Enc_nats_spec__0___boxed(lean_object* v_as_397_, lean_object* v_i_398_, lean_object* v_stop_399_, lean_object* v_b_400_){
_start:
{
size_t v_i_boxed_401_; size_t v_stop_boxed_402_; lean_object* v_res_403_; 
v_i_boxed_401_ = lean_unbox_usize(v_i_398_);
lean_dec(v_i_398_);
v_stop_boxed_402_ = lean_unbox_usize(v_stop_399_);
lean_dec(v_stop_399_);
v_res_403_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_Enc_nats_spec__0(v_as_397_, v_i_boxed_401_, v_stop_boxed_402_, v_b_400_);
lean_dec_ref(v_as_397_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_nats(lean_object* v_e_404_, lean_object* v_ns_405_){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_406_ = lean_array_get_size(v_ns_405_);
v___x_407_ = l_Lean_ModuleUsage_Enc_nat(v_e_404_, v___x_406_);
v___x_408_ = lean_unsigned_to_nat(0u);
v___x_409_ = lean_nat_dec_lt(v___x_408_, v___x_406_);
if (v___x_409_ == 0)
{
return v___x_407_;
}
else
{
size_t v___x_410_; size_t v___x_411_; lean_object* v___x_412_; 
v___x_410_ = ((size_t)0ULL);
v___x_411_ = lean_usize_of_nat(v___x_406_);
v___x_412_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ModuleUsage_Enc_nats_spec__0(v_ns_405_, v___x_410_, v___x_411_, v___x_407_);
return v___x_412_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_nats___boxed(lean_object* v_e_413_, lean_object* v_ns_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Lean_ModuleUsage_Enc_nats(v_e_413_, v_ns_414_);
lean_dec_ref(v_ns_414_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_opt___redArg(lean_object* v_e_416_, lean_object* v_o_417_, lean_object* v_f_418_){
_start:
{
if (lean_obj_tag(v_o_417_) == 0)
{
uint8_t v___x_419_; lean_object* v___x_420_; 
lean_dec_ref(v_f_418_);
v___x_419_ = 0;
v___x_420_ = lean_byte_array_push(v_e_416_, v___x_419_);
return v___x_420_;
}
else
{
lean_object* v_val_421_; uint8_t v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v_val_421_ = lean_ctor_get(v_o_417_, 0);
lean_inc(v_val_421_);
lean_dec_ref_known(v_o_417_, 1);
v___x_422_ = 1;
v___x_423_ = lean_byte_array_push(v_e_416_, v___x_422_);
v___x_424_ = lean_apply_2(v_f_418_, v___x_423_, v_val_421_);
return v___x_424_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_opt(lean_object* v_00_u03b1_425_, lean_object* v_e_426_, lean_object* v_o_427_, lean_object* v_f_428_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = l_Lean_ModuleUsage_Enc_opt___redArg(v_e_426_, v_o_427_, v_f_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_finish(lean_object* v_e_430_){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = lean_usage_digest_bytes(v_e_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_Enc_finish___boxed(lean_object* v_e_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lean_ModuleUsage_Enc_finish(v_e_432_);
lean_dec_ref(v_e_432_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_ctorIdx___impl(uint8_t v_x_434_){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_435_ = lean_box(v_x_434_);
v___x_436_ = lean_obj_tag_nat(v___x_435_);
lean_dec(v___x_435_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_ctorIdx___impl___boxed(lean_object* v_x_437_){
_start:
{
uint8_t v_x_4__boxed_438_; lean_object* v_res_439_; 
v_x_4__boxed_438_ = lean_unbox(v_x_437_);
v_res_439_ = l_Lean_ModuleUsage_BinderMode_ctorIdx___impl(v_x_4__boxed_438_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_ctorElim___redArg(lean_object* v_k_440_){
_start:
{
lean_inc(v_k_440_);
return v_k_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_ctorElim___redArg___boxed(lean_object* v_k_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Lean_ModuleUsage_BinderMode_ctorElim___redArg(v_k_441_);
lean_dec(v_k_441_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_ctorElim(lean_object* v_motive_443_, lean_object* v_ctorIdx_444_, uint8_t v_t_445_, lean_object* v_h_446_, lean_object* v_k_447_){
_start:
{
lean_inc(v_k_447_);
return v_k_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_ctorElim___boxed(lean_object* v_motive_448_, lean_object* v_ctorIdx_449_, lean_object* v_t_450_, lean_object* v_h_451_, lean_object* v_k_452_){
_start:
{
uint8_t v_t_boxed_453_; lean_object* v_res_454_; 
v_t_boxed_453_ = lean_unbox(v_t_450_);
v_res_454_ = l_Lean_ModuleUsage_BinderMode_ctorElim(v_motive_448_, v_ctorIdx_449_, v_t_boxed_453_, v_h_451_, v_k_452_);
lean_dec(v_k_452_);
lean_dec(v_ctorIdx_449_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_none_elim___redArg(lean_object* v_none_455_){
_start:
{
lean_inc(v_none_455_);
return v_none_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_none_elim___redArg___boxed(lean_object* v_none_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Lean_ModuleUsage_BinderMode_none_elim___redArg(v_none_456_);
lean_dec(v_none_456_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_none_elim(lean_object* v_motive_458_, uint8_t v_t_459_, lean_object* v_h_460_, lean_object* v_none_461_){
_start:
{
lean_inc(v_none_461_);
return v_none_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_none_elim___boxed(lean_object* v_motive_462_, lean_object* v_t_463_, lean_object* v_h_464_, lean_object* v_none_465_){
_start:
{
uint8_t v_t_boxed_466_; lean_object* v_res_467_; 
v_t_boxed_466_ = lean_unbox(v_t_463_);
v_res_467_ = l_Lean_ModuleUsage_BinderMode_none_elim(v_motive_462_, v_t_boxed_466_, v_h_464_, v_none_465_);
lean_dec(v_none_465_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_infos_elim___redArg(lean_object* v_infos_468_){
_start:
{
lean_inc(v_infos_468_);
return v_infos_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_infos_elim___redArg___boxed(lean_object* v_infos_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Lean_ModuleUsage_BinderMode_infos_elim___redArg(v_infos_469_);
lean_dec(v_infos_469_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_infos_elim(lean_object* v_motive_471_, uint8_t v_t_472_, lean_object* v_h_473_, lean_object* v_infos_474_){
_start:
{
lean_inc(v_infos_474_);
return v_infos_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_infos_elim___boxed(lean_object* v_motive_475_, lean_object* v_t_476_, lean_object* v_h_477_, lean_object* v_infos_478_){
_start:
{
uint8_t v_t_boxed_479_; lean_object* v_res_480_; 
v_t_boxed_479_ = lean_unbox(v_t_476_);
v_res_480_ = l_Lean_ModuleUsage_BinderMode_infos_elim(v_motive_475_, v_t_boxed_479_, v_h_477_, v_infos_478_);
lean_dec(v_infos_478_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_namesInfos_elim___redArg(lean_object* v_namesInfos_481_){
_start:
{
lean_inc(v_namesInfos_481_);
return v_namesInfos_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_namesInfos_elim___redArg___boxed(lean_object* v_namesInfos_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l_Lean_ModuleUsage_BinderMode_namesInfos_elim___redArg(v_namesInfos_482_);
lean_dec(v_namesInfos_482_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_namesInfos_elim(lean_object* v_motive_484_, uint8_t v_t_485_, lean_object* v_h_486_, lean_object* v_namesInfos_487_){
_start:
{
lean_inc(v_namesInfos_487_);
return v_namesInfos_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_BinderMode_namesInfos_elim___boxed(lean_object* v_motive_488_, lean_object* v_t_489_, lean_object* v_h_490_, lean_object* v_namesInfos_491_){
_start:
{
uint8_t v_t_boxed_492_; lean_object* v_res_493_; 
v_t_boxed_492_ = lean_unbox(v_t_489_);
v_res_493_ = l_Lean_ModuleUsage_BinderMode_namesInfos_elim(v_motive_488_, v_t_boxed_492_, v_h_490_, v_namesInfos_491_);
lean_dec(v_namesInfos_491_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_ctorIdx___impl(uint8_t v_x_494_){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = lean_box(v_x_494_);
v___x_496_ = lean_obj_tag_nat(v___x_495_);
lean_dec(v___x_495_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_ctorIdx___impl___boxed(lean_object* v_x_497_){
_start:
{
uint8_t v_x_4__boxed_498_; lean_object* v_res_499_; 
v_x_4__boxed_498_ = lean_unbox(v_x_497_);
v_res_499_ = l_Lean_ModuleUsage_MDataMode_ctorIdx___impl(v_x_4__boxed_498_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_ctorElim___redArg(lean_object* v_k_500_){
_start:
{
lean_inc(v_k_500_);
return v_k_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_ctorElim___redArg___boxed(lean_object* v_k_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Lean_ModuleUsage_MDataMode_ctorElim___redArg(v_k_501_);
lean_dec(v_k_501_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_ctorElim(lean_object* v_motive_503_, lean_object* v_ctorIdx_504_, uint8_t v_t_505_, lean_object* v_h_506_, lean_object* v_k_507_){
_start:
{
lean_inc(v_k_507_);
return v_k_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_ctorElim___boxed(lean_object* v_motive_508_, lean_object* v_ctorIdx_509_, lean_object* v_t_510_, lean_object* v_h_511_, lean_object* v_k_512_){
_start:
{
uint8_t v_t_boxed_513_; lean_object* v_res_514_; 
v_t_boxed_513_ = lean_unbox(v_t_510_);
v_res_514_ = l_Lean_ModuleUsage_MDataMode_ctorElim(v_motive_508_, v_ctorIdx_509_, v_t_boxed_513_, v_h_511_, v_k_512_);
lean_dec(v_k_512_);
lean_dec(v_ctorIdx_509_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_none_elim___redArg(lean_object* v_none_515_){
_start:
{
lean_inc(v_none_515_);
return v_none_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_none_elim___redArg___boxed(lean_object* v_none_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lean_ModuleUsage_MDataMode_none_elim___redArg(v_none_516_);
lean_dec(v_none_516_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_none_elim(lean_object* v_motive_518_, uint8_t v_t_519_, lean_object* v_h_520_, lean_object* v_none_521_){
_start:
{
lean_inc(v_none_521_);
return v_none_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_none_elim___boxed(lean_object* v_motive_522_, lean_object* v_t_523_, lean_object* v_h_524_, lean_object* v_none_525_){
_start:
{
uint8_t v_t_boxed_526_; lean_object* v_res_527_; 
v_t_boxed_526_ = lean_unbox(v_t_523_);
v_res_527_ = l_Lean_ModuleUsage_MDataMode_none_elim(v_motive_522_, v_t_boxed_526_, v_h_524_, v_none_525_);
lean_dec(v_none_525_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_compilerRead_elim___redArg(lean_object* v_compilerRead_528_){
_start:
{
lean_inc(v_compilerRead_528_);
return v_compilerRead_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_compilerRead_elim___redArg___boxed(lean_object* v_compilerRead_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l_Lean_ModuleUsage_MDataMode_compilerRead_elim___redArg(v_compilerRead_529_);
lean_dec(v_compilerRead_529_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_compilerRead_elim(lean_object* v_motive_531_, uint8_t v_t_532_, lean_object* v_h_533_, lean_object* v_compilerRead_534_){
_start:
{
lean_inc(v_compilerRead_534_);
return v_compilerRead_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_compilerRead_elim___boxed(lean_object* v_motive_535_, lean_object* v_t_536_, lean_object* v_h_537_, lean_object* v_compilerRead_538_){
_start:
{
uint8_t v_t_boxed_539_; lean_object* v_res_540_; 
v_t_boxed_539_ = lean_unbox(v_t_536_);
v_res_540_ = l_Lean_ModuleUsage_MDataMode_compilerRead_elim(v_motive_535_, v_t_boxed_539_, v_h_537_, v_compilerRead_538_);
lean_dec(v_compilerRead_538_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_eqv_elim___redArg(lean_object* v_eqv_541_){
_start:
{
lean_inc(v_eqv_541_);
return v_eqv_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_eqv_elim___redArg___boxed(lean_object* v_eqv_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l_Lean_ModuleUsage_MDataMode_eqv_elim___redArg(v_eqv_542_);
lean_dec(v_eqv_542_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_eqv_elim(lean_object* v_motive_544_, uint8_t v_t_545_, lean_object* v_h_546_, lean_object* v_eqv_547_){
_start:
{
lean_inc(v_eqv_547_);
return v_eqv_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_MDataMode_eqv_elim___boxed(lean_object* v_motive_548_, lean_object* v_t_549_, lean_object* v_h_550_, lean_object* v_eqv_551_){
_start:
{
uint8_t v_t_boxed_552_; lean_object* v_res_553_; 
v_t_boxed_552_ = lean_unbox(v_t_549_);
v_res_553_ = l_Lean_ModuleUsage_MDataMode_eqv_elim(v_motive_548_, v_t_boxed_552_, v_h_550_, v_eqv_551_);
lean_dec(v_eqv_551_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_syntaxEnc_spec__0(lean_object* v_x_554_, lean_object* v_x_555_){
_start:
{
if (lean_obj_tag(v_x_555_) == 0)
{
return v_x_554_;
}
else
{
lean_object* v_head_556_; lean_object* v_tail_557_; lean_object* v___x_558_; 
v_head_556_ = lean_ctor_get(v_x_555_, 0);
lean_inc(v_head_556_);
v_tail_557_ = lean_ctor_get(v_x_555_, 1);
lean_inc(v_tail_557_);
lean_dec_ref_known(v_x_555_, 2);
v___x_558_ = l_Lean_ModuleUsage_Enc_str(v_x_554_, v_head_556_);
v_x_554_ = v___x_558_;
v_x_555_ = v_tail_557_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_syntaxEnc_spec__2(lean_object* v_x_560_, lean_object* v_x_561_){
_start:
{
if (lean_obj_tag(v_x_561_) == 0)
{
return v_x_560_;
}
else
{
lean_object* v_head_562_; 
v_head_562_ = lean_ctor_get(v_x_561_, 0);
lean_inc(v_head_562_);
if (lean_obj_tag(v_head_562_) == 0)
{
lean_object* v_tail_563_; lean_object* v_ns_564_; uint8_t v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v_tail_563_ = lean_ctor_get(v_x_561_, 1);
lean_inc(v_tail_563_);
lean_dec_ref_known(v_x_561_, 2);
v_ns_564_ = lean_ctor_get(v_head_562_, 0);
lean_inc(v_ns_564_);
lean_dec_ref_known(v_head_562_, 1);
v___x_565_ = 0;
v___x_566_ = lean_byte_array_push(v_x_560_, v___x_565_);
v___x_567_ = l_Lean_ModuleUsage_Enc_name(v___x_566_, v_ns_564_);
v_x_560_ = v___x_567_;
v_x_561_ = v_tail_563_;
goto _start;
}
else
{
lean_object* v_tail_569_; lean_object* v_n_570_; lean_object* v_fields_571_; uint8_t v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v_tail_569_ = lean_ctor_get(v_x_561_, 1);
lean_inc(v_tail_569_);
lean_dec_ref_known(v_x_561_, 2);
v_n_570_ = lean_ctor_get(v_head_562_, 0);
lean_inc(v_n_570_);
v_fields_571_ = lean_ctor_get(v_head_562_, 1);
lean_inc(v_fields_571_);
lean_dec_ref_known(v_head_562_, 2);
v___x_572_ = 1;
v___x_573_ = lean_byte_array_push(v_x_560_, v___x_572_);
v___x_574_ = l_Lean_ModuleUsage_Enc_name(v___x_573_, v_n_570_);
v___x_575_ = l_List_lengthTR___redArg(v_fields_571_);
v___x_576_ = l_Lean_ModuleUsage_Enc_nat(v___x_574_, v___x_575_);
v___x_577_ = l_List_foldl___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_syntaxEnc_spec__0(v___x_576_, v_fields_571_);
v_x_560_ = v___x_577_;
v_x_561_ = v_tail_569_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_syntaxEnc(lean_object* v_e_579_, lean_object* v_x_580_){
_start:
{
switch(lean_obj_tag(v_x_580_))
{
case 0:
{
uint8_t v___x_581_; lean_object* v___x_582_; 
v___x_581_ = 0;
v___x_582_ = lean_byte_array_push(v_e_579_, v___x_581_);
return v___x_582_;
}
case 1:
{
lean_object* v_kind_583_; lean_object* v_args_584_; uint8_t v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; uint8_t v___x_591_; 
v_kind_583_ = lean_ctor_get(v_x_580_, 1);
lean_inc(v_kind_583_);
v_args_584_ = lean_ctor_get(v_x_580_, 2);
lean_inc_ref(v_args_584_);
lean_dec_ref_known(v_x_580_, 3);
v___x_585_ = 1;
v___x_586_ = lean_byte_array_push(v_e_579_, v___x_585_);
v___x_587_ = l_Lean_ModuleUsage_Enc_name(v___x_586_, v_kind_583_);
v___x_588_ = lean_array_get_size(v_args_584_);
v___x_589_ = l_Lean_ModuleUsage_Enc_nat(v___x_587_, v___x_588_);
v___x_590_ = lean_unsigned_to_nat(0u);
v___x_591_ = lean_nat_dec_lt(v___x_590_, v___x_588_);
if (v___x_591_ == 0)
{
lean_dec_ref(v_args_584_);
return v___x_589_;
}
else
{
size_t v___x_592_; size_t v___x_593_; lean_object* v___x_594_; 
v___x_592_ = ((size_t)0ULL);
v___x_593_ = lean_usize_of_nat(v___x_588_);
v___x_594_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_syntaxEnc_spec__1(v_args_584_, v___x_592_, v___x_593_, v___x_589_);
lean_dec_ref(v_args_584_);
return v___x_594_;
}
}
case 2:
{
lean_object* v_val_595_; uint8_t v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v_val_595_ = lean_ctor_get(v_x_580_, 1);
lean_inc_ref(v_val_595_);
lean_dec_ref_known(v_x_580_, 2);
v___x_596_ = 2;
v___x_597_ = lean_byte_array_push(v_e_579_, v___x_596_);
v___x_598_ = l_Lean_ModuleUsage_Enc_str(v___x_597_, v_val_595_);
return v___x_598_;
}
default: 
{
lean_object* v_rawVal_599_; lean_object* v_val_600_; lean_object* v_preresolved_601_; lean_object* v___x_602_; lean_object* v_str_603_; lean_object* v_startPos_604_; lean_object* v_stopPos_605_; uint8_t v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v_rawVal_599_ = lean_ctor_get(v_x_580_, 1);
lean_inc_ref(v_rawVal_599_);
v_val_600_ = lean_ctor_get(v_x_580_, 2);
lean_inc(v_val_600_);
v_preresolved_601_ = lean_ctor_get(v_x_580_, 3);
lean_inc(v_preresolved_601_);
lean_dec_ref_known(v_x_580_, 4);
v___x_602_ = l_Substring_Raw_repair(v_rawVal_599_);
v_str_603_ = lean_ctor_get(v___x_602_, 0);
lean_inc_ref(v_str_603_);
v_startPos_604_ = lean_ctor_get(v___x_602_, 1);
lean_inc(v_startPos_604_);
v_stopPos_605_ = lean_ctor_get(v___x_602_, 2);
lean_inc(v_stopPos_605_);
lean_dec_ref(v___x_602_);
v___x_606_ = 3;
v___x_607_ = lean_byte_array_push(v_e_579_, v___x_606_);
v___x_608_ = lean_string_utf8_extract(v_str_603_, v_startPos_604_, v_stopPos_605_);
lean_dec(v_stopPos_605_);
lean_dec(v_startPos_604_);
lean_dec_ref(v_str_603_);
v___x_609_ = l_Lean_ModuleUsage_Enc_str(v___x_607_, v___x_608_);
v___x_610_ = l_Lean_ModuleUsage_Enc_name(v___x_609_, v_val_600_);
v___x_611_ = l_List_lengthTR___redArg(v_preresolved_601_);
v___x_612_ = l_Lean_ModuleUsage_Enc_nat(v___x_610_, v___x_611_);
v___x_613_ = l_List_foldl___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_syntaxEnc_spec__2(v___x_612_, v_preresolved_601_);
return v___x_613_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_syntaxEnc_spec__1(lean_object* v_as_614_, size_t v_i_615_, size_t v_stop_616_, lean_object* v_b_617_){
_start:
{
uint8_t v___x_618_; 
v___x_618_ = lean_usize_dec_eq(v_i_615_, v_stop_616_);
if (v___x_618_ == 0)
{
lean_object* v___x_619_; lean_object* v___x_620_; size_t v___x_621_; size_t v___x_622_; 
v___x_619_ = lean_array_uget_borrowed(v_as_614_, v_i_615_);
lean_inc(v___x_619_);
v___x_620_ = l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_syntaxEnc(v_b_617_, v___x_619_);
v___x_621_ = ((size_t)1ULL);
v___x_622_ = lean_usize_add(v_i_615_, v___x_621_);
v_i_615_ = v___x_622_;
v_b_617_ = v___x_620_;
goto _start;
}
else
{
return v_b_617_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_syntaxEnc_spec__1___boxed(lean_object* v_as_624_, lean_object* v_i_625_, lean_object* v_stop_626_, lean_object* v_b_627_){
_start:
{
size_t v_i_boxed_628_; size_t v_stop_boxed_629_; lean_object* v_res_630_; 
v_i_boxed_628_ = lean_unbox_usize(v_i_625_);
lean_dec(v_i_625_);
v_stop_boxed_629_ = lean_unbox_usize(v_stop_626_);
lean_dec(v_stop_626_);
v_res_630_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_syntaxEnc_spec__1(v_as_624_, v_i_boxed_628_, v_stop_boxed_629_, v_b_627_);
lean_dec_ref(v_as_624_);
return v_res_630_;
}
}
static lean_object* _init_l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes_valueEnc___closed__0(void){
_start:
{
lean_object* v_natZero_631_; lean_object* v_intZero_632_; 
v_natZero_631_ = lean_unsigned_to_nat(0u);
v_intZero_632_ = lean_nat_to_int(v_natZero_631_);
return v_intZero_632_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes_valueEnc(lean_object* v_e_633_, lean_object* v_a_634_){
_start:
{
switch(lean_obj_tag(v_a_634_))
{
case 0:
{
lean_object* v_v_635_; uint8_t v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v_v_635_ = lean_ctor_get(v_a_634_, 0);
lean_inc_ref(v_v_635_);
lean_dec_ref_known(v_a_634_, 1);
v___x_636_ = 0;
v___x_637_ = lean_byte_array_push(v_e_633_, v___x_636_);
v___x_638_ = l_Lean_ModuleUsage_Enc_str(v___x_637_, v_v_635_);
return v___x_638_;
}
case 1:
{
uint8_t v_v_639_; uint8_t v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v_v_639_ = lean_ctor_get_uint8(v_a_634_, 0);
lean_dec_ref_known(v_a_634_, 0);
v___x_640_ = 1;
v___x_641_ = lean_byte_array_push(v_e_633_, v___x_640_);
v___x_642_ = l_Lean_ModuleUsage_Enc_bool(v___x_641_, v_v_639_);
return v___x_642_;
}
case 2:
{
lean_object* v_v_643_; uint8_t v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v_v_643_ = lean_ctor_get(v_a_634_, 0);
lean_inc(v_v_643_);
lean_dec_ref_known(v_a_634_, 1);
v___x_644_ = 2;
v___x_645_ = lean_byte_array_push(v_e_633_, v___x_644_);
v___x_646_ = l_Lean_ModuleUsage_Enc_name(v___x_645_, v_v_643_);
return v___x_646_;
}
case 3:
{
lean_object* v_v_647_; uint8_t v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v_v_647_ = lean_ctor_get(v_a_634_, 0);
lean_inc(v_v_647_);
lean_dec_ref_known(v_a_634_, 1);
v___x_648_ = 3;
v___x_649_ = lean_byte_array_push(v_e_633_, v___x_648_);
v___x_650_ = l_Lean_ModuleUsage_Enc_nat(v___x_649_, v_v_647_);
return v___x_650_;
}
case 4:
{
lean_object* v_v_651_; lean_object* v_intZero_652_; uint8_t v_isNeg_653_; 
v_v_651_ = lean_ctor_get(v_a_634_, 0);
lean_inc(v_v_651_);
lean_dec_ref_known(v_a_634_, 1);
v_intZero_652_ = lean_obj_once(&l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes_valueEnc___closed__0, &l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes_valueEnc___closed__0_once, _init_l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes_valueEnc___closed__0);
v_isNeg_653_ = lean_int_dec_lt(v_v_651_, v_intZero_652_);
if (v_isNeg_653_ == 0)
{
lean_object* v_a_654_; uint8_t v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v_a_654_ = lean_nat_abs(v_v_651_);
lean_dec(v_v_651_);
v___x_655_ = 4;
v___x_656_ = lean_byte_array_push(v_e_633_, v___x_655_);
v___x_657_ = l_Lean_ModuleUsage_Enc_nat(v___x_656_, v_a_654_);
return v___x_657_;
}
else
{
lean_object* v_abs_658_; lean_object* v_one_659_; lean_object* v_a_660_; uint8_t v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
v_abs_658_ = lean_nat_abs(v_v_651_);
lean_dec(v_v_651_);
v_one_659_ = lean_unsigned_to_nat(1u);
v_a_660_ = lean_nat_sub(v_abs_658_, v_one_659_);
lean_dec(v_abs_658_);
v___x_661_ = 5;
v___x_662_ = lean_byte_array_push(v_e_633_, v___x_661_);
v___x_663_ = l_Lean_ModuleUsage_Enc_nat(v___x_662_, v_a_660_);
return v___x_663_;
}
}
default: 
{
lean_object* v_v_664_; uint8_t v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
v_v_664_ = lean_ctor_get(v_a_634_, 0);
lean_inc(v_v_664_);
lean_dec_ref_known(v_a_634_, 1);
v___x_665_ = 6;
v___x_666_ = lean_byte_array_push(v_e_633_, v___x_665_);
v___x_667_ = l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_syntaxEnc(v___x_666_, v_v_664_);
return v___x_667_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes_spec__0(lean_object* v_x_668_, lean_object* v_x_669_){
_start:
{
if (lean_obj_tag(v_x_669_) == 0)
{
return v_x_668_;
}
else
{
lean_object* v_head_670_; lean_object* v_tail_671_; lean_object* v_fst_672_; lean_object* v_snd_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v_head_670_ = lean_ctor_get(v_x_669_, 0);
lean_inc(v_head_670_);
v_tail_671_ = lean_ctor_get(v_x_669_, 1);
lean_inc(v_tail_671_);
lean_dec_ref_known(v_x_669_, 2);
v_fst_672_ = lean_ctor_get(v_head_670_, 0);
lean_inc(v_fst_672_);
v_snd_673_ = lean_ctor_get(v_head_670_, 1);
lean_inc(v_snd_673_);
lean_dec(v_head_670_);
v___x_674_ = l_Lean_ModuleUsage_Enc_name(v_x_668_, v_fst_672_);
v___x_675_ = l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes_valueEnc(v___x_674_, v_snd_673_);
v_x_668_ = v___x_675_;
v_x_669_ = v_tail_671_;
goto _start;
}
}
}
static lean_object* _init_l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes___closed__0(void){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = lean_unsigned_to_nat(256u);
v___x_678_ = lean_mk_empty_byte_array(v___x_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* lean_usage_mdata_bytes(lean_object* v_m_679_){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_680_ = lean_obj_once(&l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes___closed__0, &l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes___closed__0_once, _init_l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes___closed__0);
v___x_681_ = l_List_lengthTR___redArg(v_m_679_);
v___x_682_ = l_Lean_ModuleUsage_Enc_nat(v___x_680_, v___x_681_);
v___x_683_ = l_List_foldl___at___00__private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBytes_spec__0(v___x_682_, v_m_679_);
return v___x_683_;
}
}
static lean_object* _init_l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBorrowed___closed__0(void){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_684_ = lean_unsigned_to_nat(0u);
v___x_685_ = l_Lean_Expr_bvar___override(v___x_684_);
return v___x_685_;
}
}
LEAN_EXPORT uint8_t lean_usage_mdata_borrowed(lean_object* v_m_686_){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; uint8_t v___x_689_; 
v___x_687_ = lean_obj_once(&l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBorrowed___closed__0, &l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBorrowed___closed__0_once, _init_l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBorrowed___closed__0);
v___x_688_ = l_Lean_Expr_mdata___override(v_m_686_, v___x_687_);
v___x_689_ = l_Lean_isMarkedBorrowed(v___x_688_);
lean_dec_ref(v___x_688_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_mdataBorrowed___boxed(lean_object* v_m_690_){
_start:
{
uint8_t v_res_691_; lean_object* v_r_692_; 
v_res_691_ = lean_usage_mdata_borrowed(v_m_690_);
v_r_692_ = lean_box(v_res_691_);
return v_r_692_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_exprDigest___boxed(lean_object* v_mode_696_, lean_object* v_mdata_697_, lean_object* v_e_698_){
_start:
{
uint8_t v_mode_boxed_699_; uint8_t v_mdata_boxed_700_; lean_object* v_res_701_; 
v_mode_boxed_699_ = lean_unbox(v_mode_696_);
v_mdata_boxed_700_ = lean_unbox(v_mdata_697_);
v_res_701_ = lean_usage_expr_digest(v_mode_boxed_699_, v_mdata_boxed_700_, v_e_698_);
lean_dec_ref(v_e_698_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_exprsDigest___boxed(lean_object* v_mode_705_, lean_object* v_mdata_706_, lean_object* v_es_707_){
_start:
{
uint8_t v_mode_boxed_708_; uint8_t v_mdata_boxed_709_; lean_object* v_res_710_; 
v_mode_boxed_708_ = lean_unbox(v_mode_705_);
v_mdata_boxed_709_ = lean_unbox(v_mdata_706_);
v_res_710_ = lean_usage_exprs_digest(v_mode_boxed_708_, v_mdata_boxed_709_, v_es_707_);
lean_dec_ref(v_es_707_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_ModuleUsage_externEnc_spec__0(lean_object* v_x_711_, lean_object* v_x_712_){
_start:
{
if (lean_obj_tag(v_x_712_) == 0)
{
return v_x_711_;
}
else
{
lean_object* v_head_713_; 
v_head_713_ = lean_ctor_get(v_x_712_, 0);
switch(lean_obj_tag(v_head_713_))
{
case 0:
{
lean_object* v_tail_714_; lean_object* v_backend_715_; uint8_t v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
lean_inc_ref(v_head_713_);
v_tail_714_ = lean_ctor_get(v_x_712_, 1);
lean_inc(v_tail_714_);
lean_dec_ref_known(v_x_712_, 2);
v_backend_715_ = lean_ctor_get(v_head_713_, 0);
lean_inc(v_backend_715_);
lean_dec_ref_known(v_head_713_, 1);
v___x_716_ = 1;
v___x_717_ = lean_byte_array_push(v_x_711_, v___x_716_);
v___x_718_ = l_Lean_ModuleUsage_Enc_name(v___x_717_, v_backend_715_);
v_x_711_ = v___x_718_;
v_x_712_ = v_tail_714_;
goto _start;
}
case 1:
{
lean_object* v_tail_720_; lean_object* v_backend_721_; lean_object* v_pattern_722_; uint8_t v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
lean_inc_ref(v_head_713_);
v_tail_720_ = lean_ctor_get(v_x_712_, 1);
lean_inc(v_tail_720_);
lean_dec_ref_known(v_x_712_, 2);
v_backend_721_ = lean_ctor_get(v_head_713_, 0);
lean_inc(v_backend_721_);
v_pattern_722_ = lean_ctor_get(v_head_713_, 1);
lean_inc_ref(v_pattern_722_);
lean_dec_ref_known(v_head_713_, 2);
v___x_723_ = 2;
v___x_724_ = lean_byte_array_push(v_x_711_, v___x_723_);
v___x_725_ = l_Lean_ModuleUsage_Enc_name(v___x_724_, v_backend_721_);
v___x_726_ = l_Lean_ModuleUsage_Enc_str(v___x_725_, v_pattern_722_);
v_x_711_ = v___x_726_;
v_x_712_ = v_tail_720_;
goto _start;
}
case 2:
{
lean_object* v_tail_728_; lean_object* v_backend_729_; lean_object* v_fn_730_; uint8_t v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
lean_inc_ref(v_head_713_);
v_tail_728_ = lean_ctor_get(v_x_712_, 1);
lean_inc(v_tail_728_);
lean_dec_ref_known(v_x_712_, 2);
v_backend_729_ = lean_ctor_get(v_head_713_, 0);
lean_inc(v_backend_729_);
v_fn_730_ = lean_ctor_get(v_head_713_, 1);
lean_inc_ref(v_fn_730_);
lean_dec_ref_known(v_head_713_, 2);
v___x_731_ = 3;
v___x_732_ = lean_byte_array_push(v_x_711_, v___x_731_);
v___x_733_ = l_Lean_ModuleUsage_Enc_name(v___x_732_, v_backend_729_);
v___x_734_ = l_Lean_ModuleUsage_Enc_str(v___x_733_, v_fn_730_);
v_x_711_ = v___x_734_;
v_x_712_ = v_tail_728_;
goto _start;
}
default: 
{
lean_object* v_tail_736_; uint8_t v___x_737_; lean_object* v___x_738_; 
v_tail_736_ = lean_ctor_get(v_x_712_, 1);
lean_inc(v_tail_736_);
lean_dec_ref_known(v_x_712_, 2);
v___x_737_ = 4;
v___x_738_ = lean_byte_array_push(v_x_711_, v___x_737_);
v_x_711_ = v___x_738_;
v_x_712_ = v_tail_736_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_externEnc(lean_object* v_e_740_, lean_object* v_d_741_){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_742_ = l_List_lengthTR___redArg(v_d_741_);
v___x_743_ = l_Lean_ModuleUsage_Enc_nat(v_e_740_, v___x_742_);
v___x_744_ = l_List_foldl___at___00Lean_ModuleUsage_externEnc_spec__0(v___x_743_, v_d_741_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_hintsEnc(lean_object* v_e_745_, lean_object* v_x_746_){
_start:
{
switch(lean_obj_tag(v_x_746_))
{
case 0:
{
uint8_t v___x_747_; lean_object* v___x_748_; 
v___x_747_ = 0;
v___x_748_ = lean_byte_array_push(v_e_745_, v___x_747_);
return v___x_748_;
}
case 1:
{
uint8_t v___x_749_; lean_object* v___x_750_; 
v___x_749_ = 1;
v___x_750_ = lean_byte_array_push(v_e_745_, v___x_749_);
return v___x_750_;
}
default: 
{
uint32_t v_a_751_; uint8_t v___x_752_; lean_object* v___x_753_; uint64_t v___x_754_; lean_object* v___x_755_; 
v_a_751_ = lean_ctor_get_uint32(v_x_746_, 0);
v___x_752_ = 2;
v___x_753_ = lean_byte_array_push(v_e_745_, v___x_752_);
v___x_754_ = lean_uint32_to_uint64(v_a_751_);
v___x_755_ = l_Lean_ModuleUsage_Enc_u64(v___x_753_, v___x_754_);
return v___x_755_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_hintsEnc___boxed(lean_object* v_e_756_, lean_object* v_x_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lean_ModuleUsage_hintsEnc(v_e_756_, v_x_757_);
lean_dec(v_x_757_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_safetyEnc(lean_object* v_e_759_, uint8_t v_x_760_){
_start:
{
switch(v_x_760_)
{
case 0:
{
uint8_t v___x_761_; lean_object* v___x_762_; 
v___x_761_ = 1;
v___x_762_ = lean_byte_array_push(v_e_759_, v___x_761_);
return v___x_762_;
}
case 1:
{
uint8_t v___x_763_; lean_object* v___x_764_; 
v___x_763_ = 0;
v___x_764_ = lean_byte_array_push(v_e_759_, v___x_763_);
return v___x_764_;
}
default: 
{
uint8_t v___x_765_; lean_object* v___x_766_; 
v___x_765_ = 2;
v___x_766_ = lean_byte_array_push(v_e_759_, v___x_765_);
return v___x_766_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_safetyEnc___boxed(lean_object* v_e_767_, lean_object* v_x_768_){
_start:
{
uint8_t v_x_61__boxed_769_; lean_object* v_res_770_; 
v_x_61__boxed_769_ = lean_unbox(v_x_768_);
v_res_770_ = l_Lean_ModuleUsage_safetyEnc(v_e_767_, v_x_61__boxed_769_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_nameToJson_go(lean_object* v_a_771_, lean_object* v_a_772_){
_start:
{
switch(lean_obj_tag(v_a_771_))
{
case 0:
{
lean_inc_ref(v_a_772_);
return v_a_772_;
}
case 1:
{
lean_object* v_pre_773_; lean_object* v_str_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v_pre_773_ = lean_ctor_get(v_a_771_, 0);
lean_inc(v_pre_773_);
v_str_774_ = lean_ctor_get(v_a_771_, 1);
lean_inc_ref(v_str_774_);
lean_dec_ref_known(v_a_771_, 2);
v___x_775_ = l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_nameToJson_go(v_pre_773_, v_a_772_);
v___x_776_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_776_, 0, v_str_774_);
v___x_777_ = lean_array_push(v___x_775_, v___x_776_);
return v___x_777_;
}
default: 
{
lean_object* v_pre_778_; lean_object* v_i_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v_pre_778_ = lean_ctor_get(v_a_771_, 0);
lean_inc(v_pre_778_);
v_i_779_ = lean_ctor_get(v_a_771_, 1);
lean_inc(v_i_779_);
lean_dec_ref_known(v_a_771_, 2);
v___x_780_ = l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_nameToJson_go(v_pre_778_, v_a_772_);
v___x_781_ = l_Lean_JsonNumber_fromNat(v_i_779_);
v___x_782_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_782_, 0, v___x_781_);
v___x_783_ = lean_array_push(v___x_780_, v___x_782_);
return v___x_783_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_nameToJson_go___boxed(lean_object* v_a_784_, lean_object* v_a_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_nameToJson_go(v_a_784_, v_a_785_);
lean_dec_ref(v_a_785_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_ModuleUsage_nameToJson(lean_object* v_n_789_){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_790_ = ((lean_object*)(l_Lean_ModuleUsage_nameToJson___closed__0));
v___x_791_ = l___private_Lean_Util_ModuleUsage_Basic_0__Lean_ModuleUsage_nameToJson_go(v_n_789_, v___x_790_);
v___x_792_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_792_, 0, v___x_791_);
return v___x_792_;
}
}
lean_object* runtime_initialize_Lean_Expr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Json_FromToJson(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ExternAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_BorrowedAnnotation(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_ModuleUsage_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Json_FromToJson(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ExternAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_BorrowedAnnotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_ModuleUsage_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Expr(uint8_t builtin);
lean_object* initialize_Lean_Data_Json_FromToJson(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ExternAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_BorrowedAnnotation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_ModuleUsage_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Expr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json_FromToJson(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ExternAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_BorrowedAnnotation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ModuleUsage_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_ModuleUsage_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_ModuleUsage_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
