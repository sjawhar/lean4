// Lean compiler output
// Module: Lean.ConstTrie
// Imports: public import Lean.Declaration public import Lean.Data.PersistentHashMap import Std.Data.HashMap.Basic import Std.Data.HashSet.Basic import Init.Data.Array.QSort import Init.While
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
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_thunk_get_own(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint8_t lean_uint64_to_uint8(uint64_t);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
extern lean_object* l_ByteArray_empty;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint64_t lean_uint64_land(uint64_t, uint64_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint64_t lean_uint64_add(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_empty_byte_array(lean_object*);
uint64_t lean_uint64_sub(uint64_t, uint64_t);
uint32_t lean_uint32_of_nat(lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
uint32_t lean_uint32_shift_right(uint32_t, uint32_t);
lean_object* lean_mk_thunk(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_byte_array_get(lean_object*, lean_object*);
uint64_t lean_uint8_to_uint64(uint8_t);
uint32_t lean_uint8_to_uint32(uint8_t);
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
uint32_t lean_uint32_lor(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_While_0__repeatM_erased___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_foldlMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_forM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_foldl___redArg(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedConstTrie___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedConstTrie___closed__0 = (const lean_object*)&l_Lean_instInhabitedConstTrie___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedConstTrie___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedConstTrie___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_lastPartEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_lastPartEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_getU16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_getU16___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_topBits(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_topBits___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_fingerprint(uint64_t);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_fingerprint___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_pushU16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_pushU16___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__0(uint64_t, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__1(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__0 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__1 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__1_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__2 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__3 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__4 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__4_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__5 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__5_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__6 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__6_value;
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__0_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__1_value)}};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__7 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__7_value;
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__7_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__2_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__3_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__4_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__5_value)}};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__8 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__8_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__6_value)}};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__9 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__9_value;
static lean_once_cell_t l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10;
static const lean_string_object l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.ConstTrie"};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__11 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__11_value;
static const lean_string_object l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "_private.Lean.ConstTrie.0.Lean.buildChildIndex"};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__12 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__12_value;
static const lean_string_object l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "assertion violation: n < 0xFFFF\n  "};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__13 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__13_value;
static lean_once_cell_t l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__14;
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__15 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__15_value;
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___boxed__const__1 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_prefixesOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___redArg(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___redArg(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__6___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2(lean_object*);
LEAN_EXPORT uint64_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___redArg(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3(lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ConstTrie_ofArrays___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ConstTrie_ofArrays___redArg___closed__0;
static lean_once_cell_t l_Lean_ConstTrie_ofArrays___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ConstTrie_ofArrays___redArg___closed__1;
static lean_once_cell_t l_Lean_ConstTrie_ofArrays___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ConstTrie_ofArrays___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ConstTrie_ofNames___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ConstTrie_ofNames___closed__0;
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofNames(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofNames___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorIdx(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorIdx___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mod_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mod_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_merged_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_merged_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_lazy_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_lazy_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedImportedConsts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedImportedConsts___closed__0 = (const lean_object*)&l_Lean_instInhabitedImportedConsts___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedImportedConsts___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedImportedConsts___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mkMerged___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mkMerged(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findEntry_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findEntry_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_imported_consts_find_entry_core(lean_object*, lean_object*);
lean_object* lean_imported_consts_find_entry_cached(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstEntryCached_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstCached_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstCached_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstModIdxCached_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstModIdxCached_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_imported_extra_consts_find_entry_core(lean_object*, lean_object*);
lean_object* lean_imported_extra_consts_find_entry_cached(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraEntryCached_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraModIdxCached_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraModIdxCached_x3f___boxed(lean_object*, lean_object*);
lean_object* lean_imported_consts_cache_reset();
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_resetCache___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findModIdx_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findModIdx_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ImportedConsts_contains___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_contains___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ImportedConsts_contains(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_contains___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0___redArg___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0___boxed__const__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0___boxed__const__1_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedImportedConsts___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands___redArg___closed__0 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_ImportedConsts_mergeModuleTrees___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ImportedConsts_mergeModuleTrees___redArg___closed__0 = (const lean_object*)&l_Lean_ImportedConsts_mergeModuleTrees___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTrees___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTrees___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTrees(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTrees___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(lean_object*, lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8(lean_object*, lean_object*, lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(lean_object*, uint8_t, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg___closed__0 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceExpanded___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceExpanded(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_setEntry___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_setEntry___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_setEntry(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_ImportedConsts_toArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ImportedConsts_toArray___redArg___closed__0 = (const lean_object*)&l_Lean_ImportedConsts_toArray___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ImportedConsts_find_x3f___redArg, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__0 = (const lean_object*)&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__0_value;
static const lean_closure_object l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__1 = (const lean_object*)&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedConstMap___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedConstMap___closed__0;
static lean_once_cell_t l_Lean_instInhabitedConstMap___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedConstMap___closed__1;
static lean_once_cell_t l_Lean_instInhabitedConstMap___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedConstMap___closed__2;
static lean_once_cell_t l_Lean_instInhabitedConstMap___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedConstMap___closed__3;
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstMap;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f_x27___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ConstMap_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldStage2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldStage2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_fold___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_fold(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstMap_toList___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_ConstMap_toList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ConstMap_toList___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ConstMap_toList___closed__0 = (const lean_object*)&l_Lean_ConstMap_toList___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ConstMap_toList(lean_object*);
static lean_object* _init_l_Lean_instInhabitedConstTrie___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_3_ = l_ByteArray_empty;
v___x_4_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___closed__0));
v___x_5_ = lean_box(0);
v___x_6_ = lean_box(0);
v___x_7_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
lean_ctor_set(v___x_7_, 1, v___x_5_);
lean_ctor_set(v___x_7_, 2, v___x_4_);
lean_ctor_set(v___x_7_, 3, v___x_3_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie(lean_object* v_00_u03b1_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__1, &l_Lean_instInhabitedConstTrie___closed__1_once, _init_l_Lean_instInhabitedConstTrie___closed__1);
return v___x_9_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_lastPartEq(lean_object* v_x_10_, lean_object* v_x_11_){
_start:
{
switch(lean_obj_tag(v_x_10_))
{
case 0:
{
if (lean_obj_tag(v_x_11_) == 0)
{
uint8_t v___x_12_; 
v___x_12_ = 1;
return v___x_12_;
}
else
{
uint8_t v___x_13_; 
v___x_13_ = 0;
return v___x_13_;
}
}
case 1:
{
if (lean_obj_tag(v_x_11_) == 1)
{
lean_object* v_str_14_; lean_object* v_str_15_; uint8_t v___x_16_; 
v_str_14_ = lean_ctor_get(v_x_10_, 1);
v_str_15_ = lean_ctor_get(v_x_11_, 1);
v___x_16_ = lean_string_dec_eq(v_str_14_, v_str_15_);
return v___x_16_;
}
else
{
uint8_t v___x_17_; 
v___x_17_ = 0;
return v___x_17_;
}
}
default: 
{
if (lean_obj_tag(v_x_11_) == 2)
{
lean_object* v_i_18_; lean_object* v_i_19_; uint8_t v___x_20_; 
v_i_18_ = lean_ctor_get(v_x_10_, 1);
v_i_19_ = lean_ctor_get(v_x_11_, 1);
v___x_20_ = lean_nat_dec_eq(v_i_18_, v_i_19_);
return v___x_20_;
}
else
{
uint8_t v___x_21_; 
v___x_21_ = 0;
return v___x_21_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_lastPartEq___boxed(lean_object* v_x_22_, lean_object* v_x_23_){
_start:
{
uint8_t v_res_24_; lean_object* v_r_25_; 
v_res_24_ = l___private_Lean_ConstTrie_0__Lean_lastPartEq(v_x_22_, v_x_23_);
lean_dec(v_x_23_);
lean_dec(v_x_22_);
v_r_25_ = lean_box(v_res_24_);
return v_r_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_getU16(lean_object* v_bs_26_, lean_object* v_o_27_){
_start:
{
uint8_t v___x_28_; uint32_t v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; uint8_t v___x_32_; uint32_t v___x_33_; uint32_t v___x_34_; uint32_t v___x_35_; uint32_t v___x_36_; lean_object* v___x_37_; 
v___x_28_ = lean_byte_array_get(v_bs_26_, v_o_27_);
v___x_29_ = lean_uint8_to_uint32(v___x_28_);
v___x_30_ = lean_unsigned_to_nat(1u);
v___x_31_ = lean_nat_add(v_o_27_, v___x_30_);
v___x_32_ = lean_byte_array_get(v_bs_26_, v___x_31_);
lean_dec(v___x_31_);
v___x_33_ = lean_uint8_to_uint32(v___x_32_);
v___x_34_ = 8;
v___x_35_ = lean_uint32_shift_left(v___x_33_, v___x_34_);
v___x_36_ = lean_uint32_lor(v___x_29_, v___x_35_);
v___x_37_ = lean_uint32_to_nat(v___x_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_getU16___boxed(lean_object* v_bs_38_, lean_object* v_o_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l___private_Lean_ConstTrie_0__Lean_getU16(v_bs_38_, v_o_39_);
lean_dec(v_o_39_);
lean_dec_ref(v_bs_38_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_topBits(uint64_t v_h_41_, uint64_t v_bits_42_){
_start:
{
uint64_t v___x_43_; uint64_t v___x_44_; uint64_t v___x_45_; uint64_t v___x_46_; uint64_t v___x_47_; lean_object* v___x_48_; 
v___x_43_ = 48ULL;
v___x_44_ = lean_uint64_shift_right(v_h_41_, v___x_43_);
v___x_45_ = 16ULL;
v___x_46_ = lean_uint64_sub(v___x_45_, v_bits_42_);
v___x_47_ = lean_uint64_shift_right(v___x_44_, v___x_46_);
v___x_48_ = lean_uint64_to_nat(v___x_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_topBits___boxed(lean_object* v_h_49_, lean_object* v_bits_50_){
_start:
{
uint64_t v_h_boxed_51_; uint64_t v_bits_boxed_52_; lean_object* v_res_53_; 
v_h_boxed_51_ = lean_unbox_uint64(v_h_49_);
lean_dec_ref(v_h_49_);
v_bits_boxed_52_ = lean_unbox_uint64(v_bits_50_);
lean_dec_ref(v_bits_50_);
v_res_53_ = l___private_Lean_ConstTrie_0__Lean_topBits(v_h_boxed_51_, v_bits_boxed_52_);
return v_res_53_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_fingerprint(uint64_t v_h_54_){
_start:
{
uint64_t v___x_55_; uint64_t v___x_56_; uint8_t v___x_57_; 
v___x_55_ = 40ULL;
v___x_56_ = lean_uint64_shift_right(v_h_54_, v___x_55_);
v___x_57_ = lean_uint64_to_uint8(v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_fingerprint___boxed(lean_object* v_h_58_){
_start:
{
uint64_t v_h_boxed_59_; uint8_t v_res_60_; lean_object* v_r_61_; 
v_h_boxed_59_ = lean_unbox_uint64(v_h_58_);
lean_dec_ref(v_h_58_);
v_res_60_ = l___private_Lean_ConstTrie_0__Lean_fingerprint(v_h_boxed_59_);
v_r_61_ = lean_box(v_res_60_);
return v_r_61_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_pushU16(lean_object* v_bs_62_, lean_object* v_v_63_){
_start:
{
uint32_t v_v_64_; uint8_t v___x_65_; lean_object* v___x_66_; uint32_t v___x_67_; uint32_t v___x_68_; uint8_t v___x_69_; lean_object* v___x_70_; 
v_v_64_ = lean_uint32_of_nat(v_v_63_);
v___x_65_ = lean_uint32_to_uint8(v_v_64_);
v___x_66_ = lean_byte_array_push(v_bs_62_, v___x_65_);
v___x_67_ = 8;
v___x_68_ = lean_uint32_shift_right(v_v_64_, v___x_67_);
v___x_69_ = lean_uint32_to_uint8(v___x_68_);
v___x_70_ = lean_byte_array_push(v___x_66_, v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_pushU16___boxed(lean_object* v_bs_71_, lean_object* v_v_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l___private_Lean_ConstTrie_0__Lean_pushU16(v_bs_71_, v_v_72_);
lean_dec(v_v_72_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__0(uint64_t v_bits_74_, lean_object* v_n_75_, uint64_t v_b_76_){
_start:
{
uint8_t v___y_78_; uint64_t v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v___x_84_ = lean_uint64_shift_left(v_bits_74_, v_b_76_);
v___x_85_ = lean_uint64_to_nat(v___x_84_);
v___x_86_ = lean_nat_dec_lt(v___x_85_, v_n_75_);
lean_dec(v___x_85_);
if (v___x_86_ == 0)
{
v___y_78_ = v___x_86_;
goto v___jp_77_;
}
else
{
uint64_t v___x_87_; uint8_t v___x_88_; 
v___x_87_ = 16ULL;
v___x_88_ = lean_uint64_dec_lt(v_b_76_, v___x_87_);
v___y_78_ = v___x_88_;
goto v___jp_77_;
}
v___jp_77_:
{
if (v___y_78_ == 0)
{
lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_79_ = lean_box_uint64(v_b_76_);
v___x_80_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
return v___x_80_;
}
else
{
uint64_t v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = lean_uint64_add(v_b_76_, v_bits_74_);
v___x_82_ = lean_box_uint64(v___x_81_);
v___x_83_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
return v___x_83_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__0___boxed(lean_object* v_bits_89_, lean_object* v_n_90_, lean_object* v_b_91_){
_start:
{
uint64_t v_bits_boxed_92_; uint64_t v_b_boxed_93_; lean_object* v_res_94_; 
v_bits_boxed_92_ = lean_unbox_uint64(v_bits_89_);
lean_dec_ref(v_bits_89_);
v_b_boxed_93_ = lean_unbox_uint64(v_b_91_);
lean_dec_ref(v_b_91_);
v_res_94_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__0(v_bits_boxed_92_, v_n_90_, v_b_boxed_93_);
lean_dec(v_n_90_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__1(lean_object* v___x_95_, lean_object* v_n_96_, uint64_t v___x_97_, lean_object* v_snd_98_, lean_object* v_inst_99_, lean_object* v_cs_100_, lean_object* v_keyOf_101_, lean_object* v_b_102_){
_start:
{
uint8_t v___y_104_; uint64_t v___y_109_; uint8_t v___x_117_; 
v___x_117_ = lean_nat_dec_lt(v_b_102_, v_n_96_);
if (v___x_117_ == 0)
{
lean_dec_ref(v_keyOf_101_);
v___y_104_ = v___x_117_;
goto v___jp_103_;
}
else
{
lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_118_ = lean_array_get_borrowed(v_inst_99_, v_cs_100_, v_b_102_);
lean_inc(v___x_118_);
v___x_119_ = lean_apply_1(v_keyOf_101_, v___x_118_);
if (lean_obj_tag(v___x_119_) == 0)
{
uint64_t v___x_120_; 
v___x_120_ = 1723ULL;
v___y_109_ = v___x_120_;
goto v___jp_108_;
}
else
{
uint64_t v_hash_121_; 
v_hash_121_ = lean_ctor_get_uint64(v___x_119_, sizeof(void*)*2);
lean_dec(v___x_119_);
v___y_109_ = v_hash_121_;
goto v___jp_108_;
}
}
v___jp_103_:
{
if (v___y_104_ == 0)
{
lean_object* v___x_105_; 
v___x_105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_105_, 0, v_b_102_);
return v___x_105_;
}
else
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = lean_nat_add(v_b_102_, v___x_95_);
lean_dec(v_b_102_);
v___x_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
return v___x_107_;
}
}
v___jp_108_:
{
uint64_t v___x_110_; uint64_t v___x_111_; uint64_t v___x_112_; uint64_t v___x_113_; uint64_t v___x_114_; lean_object* v___x_115_; uint8_t v___x_116_; 
v___x_110_ = 48ULL;
v___x_111_ = lean_uint64_shift_right(v___y_109_, v___x_110_);
v___x_112_ = 16ULL;
v___x_113_ = lean_uint64_sub(v___x_112_, v___x_97_);
v___x_114_ = lean_uint64_shift_right(v___x_111_, v___x_113_);
v___x_115_ = lean_uint64_to_nat(v___x_114_);
v___x_116_ = lean_nat_dec_lt(v___x_115_, v_snd_98_);
lean_dec(v___x_115_);
v___y_104_ = v___x_116_;
goto v___jp_103_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__1___boxed(lean_object* v___x_122_, lean_object* v_n_123_, lean_object* v___x_124_, lean_object* v_snd_125_, lean_object* v_inst_126_, lean_object* v_cs_127_, lean_object* v_keyOf_128_, lean_object* v_b_129_){
_start:
{
uint64_t v___x_1842__boxed_130_; lean_object* v_res_131_; 
v___x_1842__boxed_130_ = lean_unbox_uint64(v___x_124_);
lean_dec_ref(v___x_124_);
v_res_131_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__1(v___x_122_, v_n_123_, v___x_1842__boxed_130_, v_snd_125_, v_inst_126_, v_cs_127_, v_keyOf_128_, v_b_129_);
lean_dec_ref(v_cs_127_);
lean_dec(v_inst_126_);
lean_dec(v_snd_125_);
lean_dec(v_n_123_);
lean_dec(v___x_122_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__2(lean_object* v___x_132_, lean_object* v___x_133_, lean_object* v_n_134_, uint64_t v___x_135_, lean_object* v_inst_136_, lean_object* v_cs_137_, lean_object* v_keyOf_138_, lean_object* v___x_139_, lean_object* v_b_140_){
_start:
{
lean_object* v_snd_141_; lean_object* v_fst_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_172_; 
v_snd_141_ = lean_ctor_get(v_b_140_, 1);
v_fst_142_ = lean_ctor_get(v_b_140_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v_b_140_);
if (v_isSharedCheck_172_ == 0)
{
v___x_144_ = v_b_140_;
v_isShared_145_ = v_isSharedCheck_172_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_snd_141_);
lean_inc(v_fst_142_);
lean_dec(v_b_140_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_172_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v_fst_146_; lean_object* v_snd_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_171_; 
v_fst_146_ = lean_ctor_get(v_snd_141_, 0);
v_snd_147_ = lean_ctor_get(v_snd_141_, 1);
v_isSharedCheck_171_ = !lean_is_exclusive(v_snd_141_);
if (v_isSharedCheck_171_ == 0)
{
v___x_149_ = v_snd_141_;
v_isShared_150_ = v_isSharedCheck_171_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_snd_147_);
lean_inc(v_fst_146_);
lean_dec(v_snd_141_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_171_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
uint8_t v___x_151_; 
v___x_151_ = lean_nat_dec_lt(v_snd_147_, v___x_132_);
if (v___x_151_ == 0)
{
lean_object* v___x_153_; 
lean_dec_ref(v___x_139_);
lean_dec_ref(v_keyOf_138_);
lean_dec_ref(v_cs_137_);
lean_dec(v_inst_136_);
lean_dec(v_n_134_);
lean_dec(v___x_133_);
if (v_isShared_150_ == 0)
{
v___x_153_ = v___x_149_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_fst_146_);
lean_ctor_set(v_reuseFailAlloc_158_, 1, v_snd_147_);
v___x_153_ = v_reuseFailAlloc_158_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
lean_object* v___x_155_; 
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 1, v___x_153_);
v___x_155_ = v___x_144_;
goto v_reusejp_154_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_fst_142_);
lean_ctor_set(v_reuseFailAlloc_157_, 1, v___x_153_);
v___x_155_ = v_reuseFailAlloc_157_;
goto v_reusejp_154_;
}
v_reusejp_154_:
{
lean_object* v___x_156_; 
v___x_156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
return v___x_156_;
}
}
}
else
{
lean_object* v___x_159_; lean_object* v___f_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_165_; 
v___x_159_ = lean_box_uint64(v___x_135_);
lean_inc(v_snd_147_);
lean_inc(v___x_133_);
v___f_160_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_160_, 0, v___x_133_);
lean_closure_set(v___f_160_, 1, v_n_134_);
lean_closure_set(v___f_160_, 2, v___x_159_);
lean_closure_set(v___f_160_, 3, v_snd_147_);
lean_closure_set(v___f_160_, 4, v_inst_136_);
lean_closure_set(v___f_160_, 5, v_cs_137_);
lean_closure_set(v___f_160_, 6, v_keyOf_138_);
v___x_161_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_139_, v___f_160_, v_fst_146_);
v___x_162_ = l___private_Lean_ConstTrie_0__Lean_pushU16(v_fst_142_, v___x_161_);
v___x_163_ = lean_nat_add(v_snd_147_, v___x_133_);
lean_dec(v___x_133_);
lean_dec(v_snd_147_);
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 1, v___x_163_);
lean_ctor_set(v___x_149_, 0, v___x_161_);
v___x_165_ = v___x_149_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_161_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v___x_163_);
v___x_165_ = v_reuseFailAlloc_170_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
lean_object* v___x_167_; 
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 1, v___x_165_);
lean_ctor_set(v___x_144_, 0, v___x_162_);
v___x_167_ = v___x_144_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v___x_162_);
lean_ctor_set(v_reuseFailAlloc_169_, 1, v___x_165_);
v___x_167_ = v_reuseFailAlloc_169_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
lean_object* v___x_168_; 
v___x_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
return v___x_168_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__2___boxed(lean_object* v___x_173_, lean_object* v___x_174_, lean_object* v_n_175_, lean_object* v___x_176_, lean_object* v_inst_177_, lean_object* v_cs_178_, lean_object* v_keyOf_179_, lean_object* v___x_180_, lean_object* v_b_181_){
_start:
{
uint64_t v___x_1888__boxed_182_; lean_object* v_res_183_; 
v___x_1888__boxed_182_ = lean_unbox_uint64(v___x_176_);
lean_dec_ref(v___x_176_);
v_res_183_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__2(v___x_173_, v___x_174_, v_n_175_, v___x_1888__boxed_182_, v_inst_177_, v_cs_178_, v_keyOf_179_, v___x_180_, v_b_181_);
lean_dec(v___x_173_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__3(lean_object* v_keyOf_184_, lean_object* v_a_185_, lean_object* v_x_186_, lean_object* v___y_187_){
_start:
{
uint64_t v___y_189_; lean_object* v___x_195_; 
v___x_195_ = lean_apply_1(v_keyOf_184_, v_a_185_);
if (lean_obj_tag(v___x_195_) == 0)
{
uint64_t v___x_196_; 
v___x_196_ = 1723ULL;
v___y_189_ = v___x_196_;
goto v___jp_188_;
}
else
{
uint64_t v_hash_197_; 
v_hash_197_ = lean_ctor_get_uint64(v___x_195_, sizeof(void*)*2);
lean_dec(v___x_195_);
v___y_189_ = v_hash_197_;
goto v___jp_188_;
}
v___jp_188_:
{
uint64_t v___x_190_; uint64_t v___x_191_; uint8_t v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_190_ = 40ULL;
v___x_191_ = lean_uint64_shift_right(v___y_189_, v___x_190_);
v___x_192_ = lean_uint64_to_uint8(v___x_191_);
v___x_193_ = lean_byte_array_push(v___y_187_, v___x_192_);
v___x_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
return v___x_194_;
}
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_217_ = l_ByteArray_empty;
v___x_218_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__9));
v___x_219_ = l_instInhabitedOfMonad___redArg(v___x_218_, v___x_217_);
return v___x_219_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__14(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_223_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__13));
v___x_224_ = lean_unsigned_to_nat(2u);
v___x_225_ = lean_unsigned_to_nat(82u);
v___x_226_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__12));
v___x_227_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__11));
v___x_228_ = l_mkPanicMessageWithDecl(v___x_227_, v___x_226_, v___x_225_, v___x_224_, v___x_223_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg(lean_object* v_inst_233_, lean_object* v_cs_234_, lean_object* v_keyOf_235_){
_start:
{
lean_object* v_n_236_; lean_object* v_j_237_; uint8_t v___x_238_; 
v_n_236_ = lean_array_get_size(v_cs_234_);
v_j_237_ = lean_unsigned_to_nat(0u);
v___x_238_ = lean_nat_dec_eq(v_n_236_, v_j_237_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; uint8_t v___x_240_; 
v___x_239_ = lean_unsigned_to_nat(65535u);
v___x_240_ = lean_nat_dec_lt(v_n_236_, v___x_239_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
lean_dec_ref(v_keyOf_235_);
lean_dec_ref(v_cs_234_);
lean_dec(v_inst_233_);
v___x_241_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10, &l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10_once, _init_l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10);
v___x_242_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__14, &l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__14_once, _init_l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__14);
v___x_243_ = l_panic___redArg(v___x_241_, v___x_242_);
return v___x_243_;
}
else
{
lean_object* v___x_244_; uint64_t v_bits_245_; lean_object* v___x_246_; lean_object* v___f_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; uint64_t v___x_251_; uint64_t v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___f_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; uint64_t v___x_261_; uint8_t v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v_fst_267_; lean_object* v___f_268_; size_t v_sz_269_; size_t v___x_270_; lean_object* v___x_271_; 
v___x_244_ = lean_unsigned_to_nat(1u);
v_bits_245_ = 1ULL;
v___x_246_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___boxed__const__1));
v___f_247_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_247_, 0, v___x_246_);
lean_closure_set(v___f_247_, 1, v_n_236_);
v___x_248_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__9));
v___x_249_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___boxed__const__1));
v___x_250_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_248_, v___f_247_, v___x_249_);
v___x_251_ = lean_unbox_uint64(v___x_250_);
v___x_252_ = lean_uint64_shift_left(v_bits_245_, v___x_251_);
v___x_253_ = lean_uint64_to_nat(v___x_252_);
v___x_254_ = lean_nat_add(v___x_253_, v___x_244_);
lean_dec(v___x_253_);
lean_inc_ref(v_keyOf_235_);
lean_inc_ref(v_cs_234_);
lean_inc(v___x_250_);
lean_inc(v___x_254_);
v___f_255_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_255_, 0, v___x_254_);
lean_closure_set(v___f_255_, 1, v___x_244_);
lean_closure_set(v___f_255_, 2, v_n_236_);
lean_closure_set(v___f_255_, 3, v___x_250_);
lean_closure_set(v___f_255_, 4, v_inst_233_);
lean_closure_set(v___f_255_, 5, v_cs_234_);
lean_closure_set(v___f_255_, 6, v_keyOf_235_);
lean_closure_set(v___f_255_, 7, v___x_248_);
v___x_256_ = lean_unsigned_to_nat(2u);
v___x_257_ = lean_nat_mul(v___x_256_, v___x_254_);
lean_dec(v___x_254_);
v___x_258_ = lean_nat_add(v___x_244_, v___x_257_);
lean_dec(v___x_257_);
v___x_259_ = lean_nat_add(v___x_258_, v_n_236_);
lean_dec(v___x_258_);
v___x_260_ = lean_mk_empty_byte_array(v___x_259_);
lean_dec(v___x_259_);
v___x_261_ = lean_unbox_uint64(v___x_250_);
lean_dec(v___x_250_);
v___x_262_ = lean_uint64_to_uint8(v___x_261_);
v___x_263_ = lean_byte_array_push(v___x_260_, v___x_262_);
v___x_264_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__15));
v___x_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_263_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
v___x_266_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_248_, v___f_255_, v___x_265_);
v_fst_267_ = lean_ctor_get(v___x_266_, 0);
lean_inc(v_fst_267_);
lean_dec(v___x_266_);
v___f_268_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__3), 4, 1);
lean_closure_set(v___f_268_, 0, v_keyOf_235_);
v_sz_269_ = lean_array_size(v_cs_234_);
v___x_270_ = ((size_t)0ULL);
v___x_271_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_248_, v_cs_234_, v___f_268_, v_sz_269_, v___x_270_, v_fst_267_);
return v___x_271_;
}
}
else
{
lean_object* v___x_272_; 
lean_dec_ref(v_keyOf_235_);
lean_dec_ref(v_cs_234_);
lean_dec(v_inst_233_);
v___x_272_ = l_ByteArray_empty;
return v___x_272_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex(lean_object* v_00_u03b2_273_, lean_object* v_inst_274_, lean_object* v_cs_275_, lean_object* v_keyOf_276_){
_start:
{
lean_object* v___x_277_; 
v___x_277_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg(v_inst_274_, v_cs_275_, v_keyOf_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___redArg(lean_object* v_inst_278_, lean_object* v_index_279_, lean_object* v_cs_280_, lean_object* v_keyOf_281_, lean_object* v_k_282_, uint8_t v_fp_283_, lean_object* v_fpOff_284_, lean_object* v_j_285_, lean_object* v_hi_286_){
_start:
{
uint8_t v___y_292_; uint8_t v___x_294_; 
v___x_294_ = lean_nat_dec_lt(v_j_285_, v_hi_286_);
if (v___x_294_ == 0)
{
lean_object* v___x_295_; 
lean_dec(v_j_285_);
lean_dec_ref(v_keyOf_281_);
v___x_295_ = lean_box(0);
return v___x_295_;
}
else
{
lean_object* v___x_296_; uint8_t v___x_297_; uint8_t v___x_298_; 
v___x_296_ = lean_nat_add(v_fpOff_284_, v_j_285_);
v___x_297_ = lean_byte_array_get(v_index_279_, v___x_296_);
lean_dec(v___x_296_);
v___x_298_ = lean_uint8_dec_eq(v___x_297_, v_fp_283_);
if (v___x_298_ == 0)
{
v___y_292_ = v___x_298_;
goto v___jp_291_;
}
else
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = lean_array_get_borrowed(v_inst_278_, v_cs_280_, v_j_285_);
lean_inc_ref(v_keyOf_281_);
lean_inc(v___x_299_);
v___x_300_ = lean_apply_1(v_keyOf_281_, v___x_299_);
switch(lean_obj_tag(v___x_300_))
{
case 0:
{
if (lean_obj_tag(v_k_282_) == 0)
{
v___y_292_ = v___x_298_;
goto v___jp_291_;
}
else
{
goto v___jp_287_;
}
}
case 1:
{
if (lean_obj_tag(v_k_282_) == 1)
{
lean_object* v_str_301_; lean_object* v_str_302_; uint8_t v___x_303_; 
v_str_301_ = lean_ctor_get(v___x_300_, 1);
lean_inc_ref(v_str_301_);
lean_dec_ref_known(v___x_300_, 2);
v_str_302_ = lean_ctor_get(v_k_282_, 1);
v___x_303_ = lean_string_dec_eq(v_str_301_, v_str_302_);
lean_dec_ref(v_str_301_);
v___y_292_ = v___x_303_;
goto v___jp_291_;
}
else
{
lean_dec_ref_known(v___x_300_, 2);
goto v___jp_287_;
}
}
default: 
{
if (lean_obj_tag(v_k_282_) == 2)
{
lean_object* v_i_304_; lean_object* v_i_305_; uint8_t v___x_306_; 
v_i_304_ = lean_ctor_get(v___x_300_, 1);
lean_inc(v_i_304_);
lean_dec_ref_known(v___x_300_, 2);
v_i_305_ = lean_ctor_get(v_k_282_, 1);
v___x_306_ = lean_nat_dec_eq(v_i_304_, v_i_305_);
lean_dec(v_i_304_);
v___y_292_ = v___x_306_;
goto v___jp_291_;
}
else
{
lean_dec_ref_known(v___x_300_, 2);
goto v___jp_287_;
}
}
}
}
}
v___jp_287_:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = lean_unsigned_to_nat(1u);
v___x_289_ = lean_nat_add(v_j_285_, v___x_288_);
lean_dec(v_j_285_);
v_j_285_ = v___x_289_;
goto _start;
}
v___jp_291_:
{
if (v___y_292_ == 0)
{
goto v___jp_287_;
}
else
{
lean_object* v___x_293_; 
lean_dec_ref(v_keyOf_281_);
v___x_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_293_, 0, v_j_285_);
return v___x_293_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___redArg___boxed(lean_object* v_inst_307_, lean_object* v_index_308_, lean_object* v_cs_309_, lean_object* v_keyOf_310_, lean_object* v_k_311_, lean_object* v_fp_312_, lean_object* v_fpOff_313_, lean_object* v_j_314_, lean_object* v_hi_315_){
_start:
{
uint8_t v_fp_boxed_316_; lean_object* v_res_317_; 
v_fp_boxed_316_ = lean_unbox(v_fp_312_);
v_res_317_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___redArg(v_inst_307_, v_index_308_, v_cs_309_, v_keyOf_310_, v_k_311_, v_fp_boxed_316_, v_fpOff_313_, v_j_314_, v_hi_315_);
lean_dec(v_hi_315_);
lean_dec(v_fpOff_313_);
lean_dec(v_k_311_);
lean_dec_ref(v_cs_309_);
lean_dec_ref(v_index_308_);
lean_dec(v_inst_307_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow(lean_object* v_00_u03b2_318_, lean_object* v_inst_319_, lean_object* v_index_320_, lean_object* v_cs_321_, lean_object* v_keyOf_322_, lean_object* v_k_323_, uint8_t v_fp_324_, lean_object* v_fpOff_325_, lean_object* v_j_326_, lean_object* v_hi_327_){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___redArg(v_inst_319_, v_index_320_, v_cs_321_, v_keyOf_322_, v_k_323_, v_fp_324_, v_fpOff_325_, v_j_326_, v_hi_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___boxed(lean_object* v_00_u03b2_329_, lean_object* v_inst_330_, lean_object* v_index_331_, lean_object* v_cs_332_, lean_object* v_keyOf_333_, lean_object* v_k_334_, lean_object* v_fp_335_, lean_object* v_fpOff_336_, lean_object* v_j_337_, lean_object* v_hi_338_){
_start:
{
uint8_t v_fp_boxed_339_; lean_object* v_res_340_; 
v_fp_boxed_339_ = lean_unbox(v_fp_335_);
v_res_340_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow(v_00_u03b2_329_, v_inst_330_, v_index_331_, v_cs_332_, v_keyOf_333_, v_k_334_, v_fp_boxed_339_, v_fpOff_336_, v_j_337_, v_hi_338_);
lean_dec(v_hi_338_);
lean_dec(v_fpOff_336_);
lean_dec(v_k_334_);
lean_dec_ref(v_cs_332_);
lean_dec_ref(v_index_331_);
lean_dec(v_inst_330_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___redArg(lean_object* v_inst_341_, lean_object* v_index_342_, lean_object* v_cs_343_, lean_object* v_keyOf_344_, lean_object* v_k_345_){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; uint64_t v___y_349_; uint8_t v___x_391_; 
v___x_346_ = lean_byte_array_size(v_index_342_);
v___x_347_ = lean_unsigned_to_nat(0u);
v___x_391_ = lean_nat_dec_eq(v___x_346_, v___x_347_);
if (v___x_391_ == 0)
{
if (lean_obj_tag(v_k_345_) == 0)
{
uint64_t v___x_392_; 
v___x_392_ = 1723ULL;
v___y_349_ = v___x_392_;
goto v___jp_348_;
}
else
{
uint64_t v_hash_393_; 
v_hash_393_ = lean_ctor_get_uint64(v_k_345_, sizeof(void*)*2);
v___y_349_ = v_hash_393_;
goto v___jp_348_;
}
}
else
{
lean_object* v___x_394_; 
lean_dec_ref(v_keyOf_344_);
v___x_394_ = lean_box(0);
return v___x_394_;
}
v___jp_348_:
{
uint8_t v___x_350_; uint64_t v_bits_351_; uint64_t v___x_352_; uint64_t v___x_353_; uint64_t v___x_354_; uint64_t v___x_355_; uint64_t v___x_356_; lean_object* v_slot_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; uint8_t v___x_362_; uint32_t v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; uint32_t v___x_366_; uint32_t v___x_367_; uint32_t v___x_368_; uint32_t v___x_369_; lean_object* v_lo_370_; lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; uint32_t v___x_374_; lean_object* v___x_375_; uint8_t v___x_376_; uint32_t v___x_377_; uint32_t v___x_378_; uint32_t v___x_379_; lean_object* v_hi_380_; uint64_t v___x_381_; uint64_t v___x_382_; uint64_t v___x_383_; uint64_t v___x_384_; uint64_t v___x_385_; lean_object* v_fpOff_386_; uint64_t v___x_387_; uint64_t v___x_388_; uint8_t v___x_389_; lean_object* v___x_390_; 
v___x_350_ = lean_byte_array_get(v_index_342_, v___x_347_);
v_bits_351_ = lean_uint8_to_uint64(v___x_350_);
v___x_352_ = 48ULL;
v___x_353_ = lean_uint64_shift_right(v___y_349_, v___x_352_);
v___x_354_ = 16ULL;
v___x_355_ = lean_uint64_sub(v___x_354_, v_bits_351_);
v___x_356_ = lean_uint64_shift_right(v___x_353_, v___x_355_);
v_slot_357_ = lean_uint64_to_nat(v___x_356_);
v___x_358_ = lean_unsigned_to_nat(1u);
v___x_359_ = lean_unsigned_to_nat(2u);
v___x_360_ = lean_nat_mul(v___x_359_, v_slot_357_);
lean_dec(v_slot_357_);
v___x_361_ = lean_nat_add(v___x_358_, v___x_360_);
v___x_362_ = lean_byte_array_get(v_index_342_, v___x_361_);
v___x_363_ = lean_uint8_to_uint32(v___x_362_);
v___x_364_ = lean_nat_add(v___x_361_, v___x_358_);
lean_dec(v___x_361_);
v___x_365_ = lean_byte_array_get(v_index_342_, v___x_364_);
lean_dec(v___x_364_);
v___x_366_ = lean_uint8_to_uint32(v___x_365_);
v___x_367_ = 8;
v___x_368_ = lean_uint32_shift_left(v___x_366_, v___x_367_);
v___x_369_ = lean_uint32_lor(v___x_363_, v___x_368_);
v_lo_370_ = lean_uint32_to_nat(v___x_369_);
v___x_371_ = lean_unsigned_to_nat(3u);
v___x_372_ = lean_nat_add(v___x_371_, v___x_360_);
lean_dec(v___x_360_);
v___x_373_ = lean_byte_array_get(v_index_342_, v___x_372_);
v___x_374_ = lean_uint8_to_uint32(v___x_373_);
v___x_375_ = lean_nat_add(v___x_372_, v___x_358_);
lean_dec(v___x_372_);
v___x_376_ = lean_byte_array_get(v_index_342_, v___x_375_);
lean_dec(v___x_375_);
v___x_377_ = lean_uint8_to_uint32(v___x_376_);
v___x_378_ = lean_uint32_shift_left(v___x_377_, v___x_367_);
v___x_379_ = lean_uint32_lor(v___x_374_, v___x_378_);
v_hi_380_ = lean_uint32_to_nat(v___x_379_);
v___x_381_ = 3ULL;
v___x_382_ = 1ULL;
v___x_383_ = lean_uint64_shift_left(v___x_382_, v_bits_351_);
v___x_384_ = lean_uint64_shift_left(v___x_383_, v___x_382_);
v___x_385_ = lean_uint64_add(v___x_381_, v___x_384_);
v_fpOff_386_ = lean_uint64_to_nat(v___x_385_);
v___x_387_ = 40ULL;
v___x_388_ = lean_uint64_shift_right(v___y_349_, v___x_387_);
v___x_389_ = lean_uint64_to_uint8(v___x_388_);
v___x_390_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___redArg(v_inst_341_, v_index_342_, v_cs_343_, v_keyOf_344_, v_k_345_, v___x_389_, v_fpOff_386_, v_lo_370_, v_hi_380_);
lean_dec(v_hi_380_);
lean_dec(v_fpOff_386_);
return v___x_390_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___redArg___boxed(lean_object* v_inst_395_, lean_object* v_index_396_, lean_object* v_cs_397_, lean_object* v_keyOf_398_, lean_object* v_k_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___redArg(v_inst_395_, v_index_396_, v_cs_397_, v_keyOf_398_, v_k_399_);
lean_dec(v_k_399_);
lean_dec_ref(v_cs_397_);
lean_dec_ref(v_index_396_);
lean_dec(v_inst_395_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f(lean_object* v_00_u03b2_401_, lean_object* v_inst_402_, lean_object* v_index_403_, lean_object* v_cs_404_, lean_object* v_keyOf_405_, lean_object* v_k_406_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___redArg(v_inst_402_, v_index_403_, v_cs_404_, v_keyOf_405_, v_k_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___boxed(lean_object* v_00_u03b2_408_, lean_object* v_inst_409_, lean_object* v_index_410_, lean_object* v_cs_411_, lean_object* v_keyOf_412_, lean_object* v_k_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f(v_00_u03b2_408_, v_inst_409_, v_index_410_, v_cs_411_, v_keyOf_412_, v_k_413_);
lean_dec(v_k_413_);
lean_dec_ref(v_cs_411_);
lean_dec_ref(v_index_410_);
lean_dec(v_inst_409_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_prefixesOf(lean_object* v_n_415_, lean_object* v_acc_416_){
_start:
{
if (lean_obj_tag(v_n_415_) == 0)
{
return v_acc_416_;
}
else
{
lean_object* v_pre_417_; lean_object* v___x_418_; 
v_pre_417_ = lean_ctor_get(v_n_415_, 0);
lean_inc(v_pre_417_);
v___x_418_ = lean_array_push(v_acc_416_, v_n_415_);
v_n_415_ = v_pre_417_;
v_acc_416_ = v___x_418_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___redArg(lean_object* v_x_420_){
_start:
{
lean_object* v_key_421_; 
v_key_421_ = lean_ctor_get(v_x_420_, 0);
lean_inc(v_key_421_);
return v_key_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___redArg___boxed(lean_object* v_x_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lean_ConstTrie_key___redArg(v_x_422_);
lean_dec_ref(v_x_422_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key(lean_object* v_00_u03b1_424_, lean_object* v_x_425_){
_start:
{
lean_object* v_key_426_; 
v_key_426_ = lean_ctor_get(v_x_425_, 0);
lean_inc(v_key_426_);
return v_key_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___boxed(lean_object* v_00_u03b1_427_, lean_object* v_x_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Lean_ConstTrie_key(v_00_u03b1_427_, v_x_428_);
lean_dec_ref(v_x_428_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___redArg(lean_object* v_x_430_){
_start:
{
lean_object* v_val_x3f_431_; 
v_val_x3f_431_ = lean_ctor_get(v_x_430_, 1);
lean_inc(v_val_x3f_431_);
return v_val_x3f_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___redArg___boxed(lean_object* v_x_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lean_ConstTrie_val_x3f___redArg(v_x_432_);
lean_dec_ref(v_x_432_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f(lean_object* v_00_u03b1_434_, lean_object* v_x_435_){
_start:
{
lean_object* v_val_x3f_436_; 
v_val_x3f_436_ = lean_ctor_get(v_x_435_, 1);
lean_inc(v_val_x3f_436_);
return v_val_x3f_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___boxed(lean_object* v_00_u03b1_437_, lean_object* v_x_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Lean_ConstTrie_val_x3f(v_00_u03b1_437_, v_x_438_);
lean_dec_ref(v_x_438_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___redArg(lean_object* v_x_440_){
_start:
{
lean_object* v_children_441_; 
v_children_441_ = lean_ctor_get(v_x_440_, 2);
lean_inc_ref(v_children_441_);
return v_children_441_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___redArg___boxed(lean_object* v_x_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Lean_ConstTrie_children___redArg(v_x_442_);
lean_dec_ref(v_x_442_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children(lean_object* v_00_u03b1_444_, lean_object* v_x_445_){
_start:
{
lean_object* v_children_446_; 
v_children_446_ = lean_ctor_get(v_x_445_, 2);
lean_inc_ref(v_children_446_);
return v_children_446_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___boxed(lean_object* v_00_u03b1_447_, lean_object* v_x_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_Lean_ConstTrie_children(v_00_u03b1_447_, v_x_448_);
lean_dec_ref(v_x_448_);
return v_res_449_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_Lean_instInhabitedConstTrie(lean_box(0));
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(lean_object* v_index_451_, lean_object* v_cs_452_, lean_object* v_k_453_, uint8_t v_fp_454_, lean_object* v_fpOff_455_, lean_object* v_j_456_, lean_object* v_hi_457_){
_start:
{
uint8_t v___y_463_; uint8_t v___x_465_; 
v___x_465_ = lean_nat_dec_lt(v_j_456_, v_hi_457_);
if (v___x_465_ == 0)
{
lean_object* v___x_466_; 
lean_dec(v_j_456_);
v___x_466_ = lean_box(0);
return v___x_466_;
}
else
{
lean_object* v___x_467_; uint8_t v___x_468_; uint8_t v___x_469_; 
v___x_467_ = lean_nat_add(v_fpOff_455_, v_j_456_);
v___x_468_ = lean_byte_array_get(v_index_451_, v___x_467_);
lean_dec(v___x_467_);
v___x_469_ = lean_uint8_dec_eq(v___x_468_, v_fp_454_);
if (v___x_469_ == 0)
{
v___y_463_ = v___x_469_;
goto v___jp_462_;
}
else
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v_key_472_; 
v___x_470_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___closed__0, &l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___closed__0);
v___x_471_ = lean_array_get_borrowed(v___x_470_, v_cs_452_, v_j_456_);
v_key_472_ = lean_ctor_get(v___x_471_, 0);
switch(lean_obj_tag(v_key_472_))
{
case 0:
{
if (lean_obj_tag(v_k_453_) == 0)
{
v___y_463_ = v___x_469_;
goto v___jp_462_;
}
else
{
goto v___jp_458_;
}
}
case 1:
{
if (lean_obj_tag(v_k_453_) == 1)
{
lean_object* v_str_473_; lean_object* v_str_474_; uint8_t v___x_475_; 
v_str_473_ = lean_ctor_get(v_key_472_, 1);
v_str_474_ = lean_ctor_get(v_k_453_, 1);
v___x_475_ = lean_string_dec_eq(v_str_473_, v_str_474_);
v___y_463_ = v___x_475_;
goto v___jp_462_;
}
else
{
goto v___jp_458_;
}
}
default: 
{
if (lean_obj_tag(v_k_453_) == 2)
{
lean_object* v_i_476_; lean_object* v_i_477_; uint8_t v___x_478_; 
v_i_476_ = lean_ctor_get(v_key_472_, 1);
v_i_477_ = lean_ctor_get(v_k_453_, 1);
v___x_478_ = lean_nat_dec_eq(v_i_476_, v_i_477_);
v___y_463_ = v___x_478_;
goto v___jp_462_;
}
else
{
goto v___jp_458_;
}
}
}
}
}
v___jp_458_:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = lean_unsigned_to_nat(1u);
v___x_460_ = lean_nat_add(v_j_456_, v___x_459_);
lean_dec(v_j_456_);
v_j_456_ = v___x_460_;
goto _start;
}
v___jp_462_:
{
if (v___y_463_ == 0)
{
goto v___jp_458_;
}
else
{
lean_object* v___x_464_; 
v___x_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_464_, 0, v_j_456_);
return v___x_464_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___boxed(lean_object* v_index_479_, lean_object* v_cs_480_, lean_object* v_k_481_, lean_object* v_fp_482_, lean_object* v_fpOff_483_, lean_object* v_j_484_, lean_object* v_hi_485_){
_start:
{
uint8_t v_fp_boxed_486_; lean_object* v_res_487_; 
v_fp_boxed_486_ = lean_unbox(v_fp_482_);
v_res_487_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(v_index_479_, v_cs_480_, v_k_481_, v_fp_boxed_486_, v_fpOff_483_, v_j_484_, v_hi_485_);
lean_dec(v_hi_485_);
lean_dec(v_fpOff_483_);
lean_dec(v_k_481_);
lean_dec_ref(v_cs_480_);
lean_dec_ref(v_index_479_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(lean_object* v_index_488_, lean_object* v_cs_489_, lean_object* v_k_490_){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; uint64_t v___y_494_; uint8_t v___x_536_; 
v___x_491_ = lean_byte_array_size(v_index_488_);
v___x_492_ = lean_unsigned_to_nat(0u);
v___x_536_ = lean_nat_dec_eq(v___x_491_, v___x_492_);
if (v___x_536_ == 0)
{
if (lean_obj_tag(v_k_490_) == 0)
{
uint64_t v___x_537_; 
v___x_537_ = 1723ULL;
v___y_494_ = v___x_537_;
goto v___jp_493_;
}
else
{
uint64_t v_hash_538_; 
v_hash_538_ = lean_ctor_get_uint64(v_k_490_, sizeof(void*)*2);
v___y_494_ = v_hash_538_;
goto v___jp_493_;
}
}
else
{
lean_object* v___x_539_; 
v___x_539_ = lean_box(0);
return v___x_539_;
}
v___jp_493_:
{
uint8_t v___x_495_; uint64_t v_bits_496_; uint64_t v___x_497_; uint64_t v___x_498_; uint64_t v___x_499_; uint64_t v___x_500_; uint64_t v___x_501_; lean_object* v_slot_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; uint8_t v___x_507_; uint32_t v___x_508_; lean_object* v___x_509_; uint8_t v___x_510_; uint32_t v___x_511_; uint32_t v___x_512_; uint32_t v___x_513_; uint32_t v___x_514_; lean_object* v_lo_515_; lean_object* v___x_516_; lean_object* v___x_517_; uint8_t v___x_518_; uint32_t v___x_519_; lean_object* v___x_520_; uint8_t v___x_521_; uint32_t v___x_522_; uint32_t v___x_523_; uint32_t v___x_524_; lean_object* v_hi_525_; uint64_t v___x_526_; uint64_t v___x_527_; uint64_t v___x_528_; uint64_t v___x_529_; uint64_t v___x_530_; lean_object* v_fpOff_531_; uint64_t v___x_532_; uint64_t v___x_533_; uint8_t v___x_534_; lean_object* v___x_535_; 
v___x_495_ = lean_byte_array_get(v_index_488_, v___x_492_);
v_bits_496_ = lean_uint8_to_uint64(v___x_495_);
v___x_497_ = 48ULL;
v___x_498_ = lean_uint64_shift_right(v___y_494_, v___x_497_);
v___x_499_ = 16ULL;
v___x_500_ = lean_uint64_sub(v___x_499_, v_bits_496_);
v___x_501_ = lean_uint64_shift_right(v___x_498_, v___x_500_);
v_slot_502_ = lean_uint64_to_nat(v___x_501_);
v___x_503_ = lean_unsigned_to_nat(1u);
v___x_504_ = lean_unsigned_to_nat(2u);
v___x_505_ = lean_nat_mul(v___x_504_, v_slot_502_);
lean_dec(v_slot_502_);
v___x_506_ = lean_nat_add(v___x_503_, v___x_505_);
v___x_507_ = lean_byte_array_get(v_index_488_, v___x_506_);
v___x_508_ = lean_uint8_to_uint32(v___x_507_);
v___x_509_ = lean_nat_add(v___x_506_, v___x_503_);
lean_dec(v___x_506_);
v___x_510_ = lean_byte_array_get(v_index_488_, v___x_509_);
lean_dec(v___x_509_);
v___x_511_ = lean_uint8_to_uint32(v___x_510_);
v___x_512_ = 8;
v___x_513_ = lean_uint32_shift_left(v___x_511_, v___x_512_);
v___x_514_ = lean_uint32_lor(v___x_508_, v___x_513_);
v_lo_515_ = lean_uint32_to_nat(v___x_514_);
v___x_516_ = lean_unsigned_to_nat(3u);
v___x_517_ = lean_nat_add(v___x_516_, v___x_505_);
lean_dec(v___x_505_);
v___x_518_ = lean_byte_array_get(v_index_488_, v___x_517_);
v___x_519_ = lean_uint8_to_uint32(v___x_518_);
v___x_520_ = lean_nat_add(v___x_517_, v___x_503_);
lean_dec(v___x_517_);
v___x_521_ = lean_byte_array_get(v_index_488_, v___x_520_);
lean_dec(v___x_520_);
v___x_522_ = lean_uint8_to_uint32(v___x_521_);
v___x_523_ = lean_uint32_shift_left(v___x_522_, v___x_512_);
v___x_524_ = lean_uint32_lor(v___x_519_, v___x_523_);
v_hi_525_ = lean_uint32_to_nat(v___x_524_);
v___x_526_ = 3ULL;
v___x_527_ = 1ULL;
v___x_528_ = lean_uint64_shift_left(v___x_527_, v_bits_496_);
v___x_529_ = lean_uint64_shift_left(v___x_528_, v___x_527_);
v___x_530_ = lean_uint64_add(v___x_526_, v___x_529_);
v_fpOff_531_ = lean_uint64_to_nat(v___x_530_);
v___x_532_ = 40ULL;
v___x_533_ = lean_uint64_shift_right(v___y_494_, v___x_532_);
v___x_534_ = lean_uint64_to_uint8(v___x_533_);
v___x_535_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(v_index_488_, v_cs_489_, v_k_490_, v___x_534_, v_fpOff_531_, v_lo_515_, v_hi_525_);
lean_dec(v_hi_525_);
lean_dec(v_fpOff_531_);
return v___x_535_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg___boxed(lean_object* v_index_540_, lean_object* v_cs_541_, lean_object* v_k_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(v_index_540_, v_cs_541_, v_k_542_);
lean_dec(v_k_542_);
lean_dec_ref(v_cs_541_);
lean_dec_ref(v_index_540_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(lean_object* v_t_544_, lean_object* v_path_545_, lean_object* v_i_546_){
_start:
{
lean_object* v_val_x3f_547_; lean_object* v_children_548_; lean_object* v_childIndex_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v_val_x3f_547_ = lean_ctor_get(v_t_544_, 1);
v_children_548_ = lean_ctor_get(v_t_544_, 2);
v_childIndex_549_ = lean_ctor_get(v_t_544_, 3);
v___x_550_ = lean_unsigned_to_nat(0u);
v___x_551_ = lean_nat_dec_eq(v_i_546_, v___x_550_);
if (v___x_551_ == 0)
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_552_ = lean_box(0);
v___x_553_ = lean_unsigned_to_nat(1u);
v___x_554_ = lean_nat_sub(v_i_546_, v___x_553_);
lean_dec(v_i_546_);
v___x_555_ = lean_array_get_borrowed(v___x_552_, v_path_545_, v___x_554_);
v___x_556_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(v_childIndex_549_, v_children_548_, v___x_555_);
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v___x_557_; 
lean_dec(v___x_554_);
v___x_557_ = lean_box(0);
return v___x_557_;
}
else
{
lean_object* v_val_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v_val_558_ = lean_ctor_get(v___x_556_, 0);
lean_inc(v_val_558_);
lean_dec_ref_known(v___x_556_, 1);
v___x_559_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___closed__0, &l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___closed__0);
v___x_560_ = lean_array_get_borrowed(v___x_559_, v_children_548_, v_val_558_);
lean_dec(v_val_558_);
v_t_544_ = v___x_560_;
v_i_546_ = v___x_554_;
goto _start;
}
}
else
{
lean_dec(v_i_546_);
lean_inc(v_val_x3f_547_);
return v_val_x3f_547_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg___boxed(lean_object* v_t_562_, lean_object* v_path_563_, lean_object* v_i_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_t_562_, v_path_563_, v_i_564_);
lean_dec_ref(v_path_563_);
lean_dec_ref(v_t_562_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux(lean_object* v_00_u03b1_566_, lean_object* v_t_567_, lean_object* v_path_568_, lean_object* v_i_569_){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_t_567_, v_path_568_, v_i_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___boxed(lean_object* v_00_u03b1_571_, lean_object* v_t_572_, lean_object* v_path_573_, lean_object* v_i_574_){
_start:
{
lean_object* v_res_575_; 
v_res_575_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux(v_00_u03b1_571_, v_t_572_, v_path_573_, v_i_574_);
lean_dec_ref(v_path_573_);
lean_dec_ref(v_t_572_);
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0(lean_object* v_00_u03b1_576_, lean_object* v_index_577_, lean_object* v_cs_578_, lean_object* v_k_579_){
_start:
{
lean_object* v___x_580_; 
v___x_580_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(v_index_577_, v_cs_578_, v_k_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___boxed(lean_object* v_00_u03b1_581_, lean_object* v_index_582_, lean_object* v_cs_583_, lean_object* v_k_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0(v_00_u03b1_581_, v_index_582_, v_cs_583_, v_k_584_);
lean_dec(v_k_584_);
lean_dec_ref(v_cs_583_);
lean_dec_ref(v_index_582_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0(lean_object* v_00_u03b1_586_, lean_object* v_index_587_, lean_object* v_cs_588_, lean_object* v_k_589_, uint8_t v_fp_590_, lean_object* v_fpOff_591_, lean_object* v_j_592_, lean_object* v_hi_593_){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(v_index_587_, v_cs_588_, v_k_589_, v_fp_590_, v_fpOff_591_, v_j_592_, v_hi_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___boxed(lean_object* v_00_u03b1_595_, lean_object* v_index_596_, lean_object* v_cs_597_, lean_object* v_k_598_, lean_object* v_fp_599_, lean_object* v_fpOff_600_, lean_object* v_j_601_, lean_object* v_hi_602_){
_start:
{
uint8_t v_fp_boxed_603_; lean_object* v_res_604_; 
v_fp_boxed_603_ = lean_unbox(v_fp_599_);
v_res_604_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0(v_00_u03b1_595_, v_index_596_, v_cs_597_, v_k_598_, v_fp_boxed_603_, v_fpOff_600_, v_j_601_, v_hi_602_);
lean_dec(v_hi_602_);
lean_dec(v_fpOff_600_);
lean_dec(v_k_598_);
lean_dec_ref(v_cs_597_);
lean_dec_ref(v_index_596_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___redArg(lean_object* v_t_605_, lean_object* v_n_606_){
_start:
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v_path_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_607_ = lean_unsigned_to_nat(8u);
v___x_608_ = lean_mk_empty_array_with_capacity(v___x_607_);
v_path_609_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_606_, v___x_608_);
v___x_610_ = lean_array_get_size(v_path_609_);
v___x_611_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_t_605_, v_path_609_, v___x_610_);
lean_dec_ref(v_path_609_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___redArg___boxed(lean_object* v_t_612_, lean_object* v_n_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Lean_ConstTrie_find_x3f___redArg(v_t_612_, v_n_613_);
lean_dec_ref(v_t_612_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f(lean_object* v_00_u03b1_615_, lean_object* v_t_616_, lean_object* v_n_617_){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = l_Lean_ConstTrie_find_x3f___redArg(v_t_616_, v_n_617_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___boxed(lean_object* v_00_u03b1_619_, lean_object* v_t_620_, lean_object* v_n_621_){
_start:
{
lean_object* v_res_622_; 
v_res_622_ = l_Lean_ConstTrie_find_x3f(v_00_u03b1_619_, v_t_620_, v_n_621_);
lean_dec_ref(v_t_620_);
return v_res_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__1(lean_object* v_children_623_, lean_object* v_toApplicative_624_, lean_object* v_inst_625_, lean_object* v___f_626_, lean_object* v_____r_627_, lean_object* v_s_628_){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; uint8_t v___x_631_; 
v___x_629_ = lean_unsigned_to_nat(0u);
v___x_630_ = lean_array_get_size(v_children_623_);
v___x_631_ = lean_nat_dec_lt(v___x_629_, v___x_630_);
if (v___x_631_ == 0)
{
lean_object* v_toPure_632_; lean_object* v___x_633_; 
lean_dec(v___f_626_);
lean_dec_ref(v_inst_625_);
lean_dec_ref(v_children_623_);
v_toPure_632_ = lean_ctor_get(v_toApplicative_624_, 1);
lean_inc(v_toPure_632_);
lean_dec_ref(v_toApplicative_624_);
v___x_633_ = lean_apply_2(v_toPure_632_, lean_box(0), v_s_628_);
return v___x_633_;
}
else
{
uint8_t v___x_634_; 
v___x_634_ = lean_nat_dec_le(v___x_630_, v___x_630_);
if (v___x_634_ == 0)
{
if (v___x_631_ == 0)
{
lean_object* v_toPure_635_; lean_object* v___x_636_; 
lean_dec(v___f_626_);
lean_dec_ref(v_inst_625_);
lean_dec_ref(v_children_623_);
v_toPure_635_ = lean_ctor_get(v_toApplicative_624_, 1);
lean_inc(v_toPure_635_);
lean_dec_ref(v_toApplicative_624_);
v___x_636_ = lean_apply_2(v_toPure_635_, lean_box(0), v_s_628_);
return v___x_636_;
}
else
{
size_t v___x_637_; size_t v___x_638_; lean_object* v___x_639_; 
lean_dec_ref(v_toApplicative_624_);
v___x_637_ = ((size_t)0ULL);
v___x_638_ = lean_usize_of_nat(v___x_630_);
v___x_639_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_625_, v___f_626_, v_children_623_, v___x_637_, v___x_638_, v_s_628_);
return v___x_639_;
}
}
else
{
size_t v___x_640_; size_t v___x_641_; lean_object* v___x_642_; 
lean_dec_ref(v_toApplicative_624_);
v___x_640_ = ((size_t)0ULL);
v___x_641_ = lean_usize_of_nat(v___x_630_);
v___x_642_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_625_, v___f_626_, v_children_623_, v___x_640_, v___x_641_, v_s_628_);
return v___x_642_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__2(lean_object* v___f_643_, lean_object* v_s_644_){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = lean_box(0);
v___x_646_ = lean_apply_2(v___f_643_, v___x_645_, v_s_644_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg(lean_object* v_inst_647_, lean_object* v_t_648_, lean_object* v_f_649_, lean_object* v_init_650_){
_start:
{
lean_object* v_toApplicative_651_; lean_object* v_toBind_652_; lean_object* v_key_653_; lean_object* v_val_x3f_654_; lean_object* v_children_655_; lean_object* v___f_656_; lean_object* v___f_657_; 
v_toApplicative_651_ = lean_ctor_get(v_inst_647_, 0);
lean_inc_ref_n(v_toApplicative_651_, 2);
v_toBind_652_ = lean_ctor_get(v_inst_647_, 1);
v_key_653_ = lean_ctor_get(v_t_648_, 0);
lean_inc(v_key_653_);
v_val_x3f_654_ = lean_ctor_get(v_t_648_, 1);
lean_inc(v_val_x3f_654_);
v_children_655_ = lean_ctor_get(v_t_648_, 2);
lean_inc_ref_n(v_children_655_, 2);
lean_dec_ref(v_t_648_);
lean_inc(v_f_649_);
lean_inc_ref_n(v_inst_647_, 2);
v___f_656_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_656_, 0, v_inst_647_);
lean_closure_set(v___f_656_, 1, v_f_649_);
lean_inc_ref(v___f_656_);
v___f_657_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__1), 6, 4);
lean_closure_set(v___f_657_, 0, v_children_655_);
lean_closure_set(v___f_657_, 1, v_toApplicative_651_);
lean_closure_set(v___f_657_, 2, v_inst_647_);
lean_closure_set(v___f_657_, 3, v___f_656_);
if (lean_obj_tag(v_val_x3f_654_) == 1)
{
lean_object* v_val_658_; lean_object* v___f_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
lean_inc(v_toBind_652_);
lean_dec_ref(v___f_656_);
lean_dec_ref(v_children_655_);
lean_dec_ref(v_toApplicative_651_);
lean_dec_ref(v_inst_647_);
v_val_658_ = lean_ctor_get(v_val_x3f_654_, 0);
lean_inc(v_val_658_);
lean_dec_ref_known(v_val_x3f_654_, 1);
v___f_659_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_659_, 0, v___f_657_);
v___x_660_ = lean_apply_3(v_f_649_, v_init_650_, v_key_653_, v_val_658_);
v___x_661_ = lean_apply_4(v_toBind_652_, lean_box(0), lean_box(0), v___x_660_, v___f_659_);
return v___x_661_;
}
else
{
lean_object* v___x_662_; lean_object* v___x_663_; 
lean_dec_ref(v___f_657_);
lean_dec(v_val_x3f_654_);
lean_dec(v_key_653_);
lean_dec(v_f_649_);
v___x_662_ = lean_box(0);
v___x_663_ = l_Lean_ConstTrie_foldlM___redArg___lam__1(v_children_655_, v_toApplicative_651_, v_inst_647_, v___f_656_, v___x_662_, v_init_650_);
return v___x_663_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__0(lean_object* v_inst_664_, lean_object* v_f_665_, lean_object* v_s_666_, lean_object* v_c_667_){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_664_, v_c_667_, v_f_665_, v_s_666_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM(lean_object* v_m_669_, lean_object* v_00_u03b1_670_, lean_object* v_00_u03c3_671_, lean_object* v_inst_672_, lean_object* v_t_673_, lean_object* v_f_674_, lean_object* v_init_675_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_672_, v_t_673_, v_f_674_, v_init_675_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf(lean_object* v_x_677_){
_start:
{
if (lean_obj_tag(v_x_677_) == 0)
{
return v_x_677_;
}
else
{
lean_object* v_pre_678_; 
v_pre_678_ = lean_ctor_get(v_x_677_, 0);
lean_inc(v_pre_678_);
return v_pre_678_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf___boxed(lean_object* v_x_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf(v_x_679_);
lean_dec(v_x_679_);
return v_res_680_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(lean_object* v_a_681_, lean_object* v_x_682_){
_start:
{
if (lean_obj_tag(v_x_682_) == 0)
{
uint8_t v___x_683_; 
v___x_683_ = 0;
return v___x_683_;
}
else
{
lean_object* v_key_684_; lean_object* v_tail_685_; uint8_t v___x_686_; 
v_key_684_ = lean_ctor_get(v_x_682_, 0);
v_tail_685_ = lean_ctor_get(v_x_682_, 2);
v___x_686_ = lean_name_eq(v_key_684_, v_a_681_);
if (v___x_686_ == 0)
{
v_x_682_ = v_tail_685_;
goto _start;
}
else
{
return v___x_686_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg___boxed(lean_object* v_a_688_, lean_object* v_x_689_){
_start:
{
uint8_t v_res_690_; lean_object* v_r_691_; 
v_res_690_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_688_, v_x_689_);
lean_dec(v_x_689_);
lean_dec(v_a_688_);
v_r_691_ = lean_box(v_res_690_);
return v_r_691_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(lean_object* v_m_692_, lean_object* v_a_693_){
_start:
{
lean_object* v_buckets_694_; lean_object* v___x_695_; uint64_t v___y_697_; 
v_buckets_694_ = lean_ctor_get(v_m_692_, 1);
v___x_695_ = lean_array_get_size(v_buckets_694_);
if (lean_obj_tag(v_a_693_) == 0)
{
uint64_t v___x_711_; 
v___x_711_ = 1723ULL;
v___y_697_ = v___x_711_;
goto v___jp_696_;
}
else
{
uint64_t v_hash_712_; 
v_hash_712_ = lean_ctor_get_uint64(v_a_693_, sizeof(void*)*2);
v___y_697_ = v_hash_712_;
goto v___jp_696_;
}
v___jp_696_:
{
uint64_t v___x_698_; uint64_t v___x_699_; uint64_t v_fold_700_; uint64_t v___x_701_; uint64_t v___x_702_; uint64_t v___x_703_; size_t v___x_704_; size_t v___x_705_; size_t v___x_706_; size_t v___x_707_; size_t v___x_708_; lean_object* v___x_709_; uint8_t v___x_710_; 
v___x_698_ = 32ULL;
v___x_699_ = lean_uint64_shift_right(v___y_697_, v___x_698_);
v_fold_700_ = lean_uint64_xor(v___y_697_, v___x_699_);
v___x_701_ = 16ULL;
v___x_702_ = lean_uint64_shift_right(v_fold_700_, v___x_701_);
v___x_703_ = lean_uint64_xor(v_fold_700_, v___x_702_);
v___x_704_ = lean_uint64_to_usize(v___x_703_);
v___x_705_ = lean_usize_of_nat(v___x_695_);
v___x_706_ = ((size_t)1ULL);
v___x_707_ = lean_usize_sub(v___x_705_, v___x_706_);
v___x_708_ = lean_usize_land(v___x_704_, v___x_707_);
v___x_709_ = lean_array_uget_borrowed(v_buckets_694_, v___x_708_);
v___x_710_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_693_, v___x_709_);
return v___x_710_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg___boxed(lean_object* v_m_713_, lean_object* v_a_714_){
_start:
{
uint8_t v_res_715_; lean_object* v_r_716_; 
v_res_715_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(v_m_713_, v_a_714_);
lean_dec(v_a_714_);
lean_dec_ref(v_m_713_);
v_r_716_ = lean_box(v_res_715_);
return v_r_716_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__6___redArg(lean_object* v_x_717_, lean_object* v_x_718_){
_start:
{
if (lean_obj_tag(v_x_718_) == 0)
{
return v_x_717_;
}
else
{
lean_object* v_key_719_; lean_object* v_value_720_; lean_object* v_tail_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_747_; 
v_key_719_ = lean_ctor_get(v_x_718_, 0);
v_value_720_ = lean_ctor_get(v_x_718_, 1);
v_tail_721_ = lean_ctor_get(v_x_718_, 2);
v_isSharedCheck_747_ = !lean_is_exclusive(v_x_718_);
if (v_isSharedCheck_747_ == 0)
{
v___x_723_ = v_x_718_;
v_isShared_724_ = v_isSharedCheck_747_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_tail_721_);
lean_inc(v_value_720_);
lean_inc(v_key_719_);
lean_dec(v_x_718_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_747_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_725_; uint64_t v___y_727_; 
v___x_725_ = lean_array_get_size(v_x_717_);
if (lean_obj_tag(v_key_719_) == 0)
{
uint64_t v___x_745_; 
v___x_745_ = 1723ULL;
v___y_727_ = v___x_745_;
goto v___jp_726_;
}
else
{
uint64_t v_hash_746_; 
v_hash_746_ = lean_ctor_get_uint64(v_key_719_, sizeof(void*)*2);
v___y_727_ = v_hash_746_;
goto v___jp_726_;
}
v___jp_726_:
{
uint64_t v___x_728_; uint64_t v___x_729_; uint64_t v_fold_730_; uint64_t v___x_731_; uint64_t v___x_732_; uint64_t v___x_733_; size_t v___x_734_; size_t v___x_735_; size_t v___x_736_; size_t v___x_737_; size_t v___x_738_; lean_object* v___x_739_; lean_object* v___x_741_; 
v___x_728_ = 32ULL;
v___x_729_ = lean_uint64_shift_right(v___y_727_, v___x_728_);
v_fold_730_ = lean_uint64_xor(v___y_727_, v___x_729_);
v___x_731_ = 16ULL;
v___x_732_ = lean_uint64_shift_right(v_fold_730_, v___x_731_);
v___x_733_ = lean_uint64_xor(v_fold_730_, v___x_732_);
v___x_734_ = lean_uint64_to_usize(v___x_733_);
v___x_735_ = lean_usize_of_nat(v___x_725_);
v___x_736_ = ((size_t)1ULL);
v___x_737_ = lean_usize_sub(v___x_735_, v___x_736_);
v___x_738_ = lean_usize_land(v___x_734_, v___x_737_);
v___x_739_ = lean_array_uget_borrowed(v_x_717_, v___x_738_);
lean_inc(v___x_739_);
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 2, v___x_739_);
v___x_741_ = v___x_723_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_key_719_);
lean_ctor_set(v_reuseFailAlloc_744_, 1, v_value_720_);
lean_ctor_set(v_reuseFailAlloc_744_, 2, v___x_739_);
v___x_741_ = v_reuseFailAlloc_744_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_742_; 
v___x_742_ = lean_array_uset(v_x_717_, v___x_738_, v___x_741_);
v_x_717_ = v___x_742_;
v_x_718_ = v_tail_721_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3___redArg(lean_object* v_i_748_, lean_object* v_source_749_, lean_object* v_target_750_){
_start:
{
lean_object* v___x_751_; uint8_t v___x_752_; 
v___x_751_ = lean_array_get_size(v_source_749_);
v___x_752_ = lean_nat_dec_lt(v_i_748_, v___x_751_);
if (v___x_752_ == 0)
{
lean_dec_ref(v_source_749_);
lean_dec(v_i_748_);
return v_target_750_;
}
else
{
lean_object* v_es_753_; lean_object* v___x_754_; lean_object* v_source_755_; lean_object* v_target_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
v_es_753_ = lean_array_fget(v_source_749_, v_i_748_);
v___x_754_ = lean_box(0);
v_source_755_ = lean_array_fset(v_source_749_, v_i_748_, v___x_754_);
v_target_756_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__6___redArg(v_target_750_, v_es_753_);
v___x_757_ = lean_unsigned_to_nat(1u);
v___x_758_ = lean_nat_add(v_i_748_, v___x_757_);
lean_dec(v_i_748_);
v_i_748_ = v___x_758_;
v_source_749_ = v_source_755_;
v_target_750_ = v_target_756_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(lean_object* v_data_760_){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v_nbuckets_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_761_ = lean_array_get_size(v_data_760_);
v___x_762_ = lean_unsigned_to_nat(2u);
v_nbuckets_763_ = lean_nat_mul(v___x_761_, v___x_762_);
v___x_764_ = lean_unsigned_to_nat(0u);
v___x_765_ = lean_box(0);
v___x_766_ = lean_mk_array(v_nbuckets_763_, v___x_765_);
v___x_767_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3___redArg(v___x_764_, v_data_760_, v___x_766_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1___redArg(lean_object* v_m_768_, lean_object* v_a_769_, lean_object* v_b_770_){
_start:
{
lean_object* v_size_771_; lean_object* v_buckets_772_; lean_object* v___x_773_; uint64_t v___y_775_; 
v_size_771_ = lean_ctor_get(v_m_768_, 0);
v_buckets_772_ = lean_ctor_get(v_m_768_, 1);
v___x_773_ = lean_array_get_size(v_buckets_772_);
if (lean_obj_tag(v_a_769_) == 0)
{
uint64_t v___x_812_; 
v___x_812_ = 1723ULL;
v___y_775_ = v___x_812_;
goto v___jp_774_;
}
else
{
uint64_t v_hash_813_; 
v_hash_813_ = lean_ctor_get_uint64(v_a_769_, sizeof(void*)*2);
v___y_775_ = v_hash_813_;
goto v___jp_774_;
}
v___jp_774_:
{
uint64_t v___x_776_; uint64_t v___x_777_; uint64_t v_fold_778_; uint64_t v___x_779_; uint64_t v___x_780_; uint64_t v___x_781_; size_t v___x_782_; size_t v___x_783_; size_t v___x_784_; size_t v___x_785_; size_t v___x_786_; lean_object* v_bkt_787_; uint8_t v___x_788_; 
v___x_776_ = 32ULL;
v___x_777_ = lean_uint64_shift_right(v___y_775_, v___x_776_);
v_fold_778_ = lean_uint64_xor(v___y_775_, v___x_777_);
v___x_779_ = 16ULL;
v___x_780_ = lean_uint64_shift_right(v_fold_778_, v___x_779_);
v___x_781_ = lean_uint64_xor(v_fold_778_, v___x_780_);
v___x_782_ = lean_uint64_to_usize(v___x_781_);
v___x_783_ = lean_usize_of_nat(v___x_773_);
v___x_784_ = ((size_t)1ULL);
v___x_785_ = lean_usize_sub(v___x_783_, v___x_784_);
v___x_786_ = lean_usize_land(v___x_782_, v___x_785_);
v_bkt_787_ = lean_array_uget_borrowed(v_buckets_772_, v___x_786_);
v___x_788_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_769_, v_bkt_787_);
if (v___x_788_ == 0)
{
lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_809_; 
lean_inc_ref(v_buckets_772_);
lean_inc(v_size_771_);
v_isSharedCheck_809_ = !lean_is_exclusive(v_m_768_);
if (v_isSharedCheck_809_ == 0)
{
lean_object* v_unused_810_; lean_object* v_unused_811_; 
v_unused_810_ = lean_ctor_get(v_m_768_, 1);
lean_dec(v_unused_810_);
v_unused_811_ = lean_ctor_get(v_m_768_, 0);
lean_dec(v_unused_811_);
v___x_790_ = v_m_768_;
v_isShared_791_ = v_isSharedCheck_809_;
goto v_resetjp_789_;
}
else
{
lean_dec(v_m_768_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_809_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_792_; lean_object* v_size_x27_793_; lean_object* v___x_794_; lean_object* v_buckets_x27_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; uint8_t v___x_801_; 
v___x_792_ = lean_unsigned_to_nat(1u);
v_size_x27_793_ = lean_nat_add(v_size_771_, v___x_792_);
lean_dec(v_size_771_);
lean_inc(v_bkt_787_);
v___x_794_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_794_, 0, v_a_769_);
lean_ctor_set(v___x_794_, 1, v_b_770_);
lean_ctor_set(v___x_794_, 2, v_bkt_787_);
v_buckets_x27_795_ = lean_array_uset(v_buckets_772_, v___x_786_, v___x_794_);
v___x_796_ = lean_unsigned_to_nat(4u);
v___x_797_ = lean_nat_mul(v_size_x27_793_, v___x_796_);
v___x_798_ = lean_unsigned_to_nat(3u);
v___x_799_ = lean_nat_div(v___x_797_, v___x_798_);
lean_dec(v___x_797_);
v___x_800_ = lean_array_get_size(v_buckets_x27_795_);
v___x_801_ = lean_nat_dec_le(v___x_799_, v___x_800_);
lean_dec(v___x_799_);
if (v___x_801_ == 0)
{
lean_object* v_val_802_; lean_object* v___x_804_; 
v_val_802_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(v_buckets_x27_795_);
if (v_isShared_791_ == 0)
{
lean_ctor_set(v___x_790_, 1, v_val_802_);
lean_ctor_set(v___x_790_, 0, v_size_x27_793_);
v___x_804_ = v___x_790_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_size_x27_793_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v_val_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
else
{
lean_object* v___x_807_; 
if (v_isShared_791_ == 0)
{
lean_ctor_set(v___x_790_, 1, v_buckets_x27_795_);
lean_ctor_set(v___x_790_, 0, v_size_x27_793_);
v___x_807_ = v___x_790_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_size_x27_793_);
lean_ctor_set(v_reuseFailAlloc_808_, 1, v_buckets_x27_795_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
}
else
{
lean_dec(v_b_770_);
lean_dec(v_a_769_);
return v_m_768_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0(lean_object* v___x_816_, lean_object* v_cs_x3f_817_){
_start:
{
lean_object* v___y_819_; 
if (lean_obj_tag(v_cs_x3f_817_) == 0)
{
lean_object* v___x_822_; 
v___x_822_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0));
v___y_819_ = v___x_822_;
goto v___jp_818_;
}
else
{
lean_object* v_val_823_; 
v_val_823_ = lean_ctor_get(v_cs_x3f_817_, 0);
lean_inc(v_val_823_);
lean_dec_ref_known(v_cs_x3f_817_, 1);
v___y_819_ = v_val_823_;
goto v___jp_818_;
}
v___jp_818_:
{
lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_820_ = lean_array_push(v___y_819_, v___x_816_);
v___x_821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_821_, 0, v___x_820_);
return v___x_821_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4(lean_object* v___x_824_, lean_object* v_a_825_, lean_object* v_x_826_){
_start:
{
if (lean_obj_tag(v_x_826_) == 0)
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v_val_829_; lean_object* v___x_830_; 
v___x_827_ = lean_box(0);
v___x_828_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0(v___x_824_, v___x_827_);
v_val_829_ = lean_ctor_get(v___x_828_, 0);
lean_inc(v_val_829_);
lean_dec(v___x_828_);
v___x_830_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_830_, 0, v_a_825_);
lean_ctor_set(v___x_830_, 1, v_val_829_);
lean_ctor_set(v___x_830_, 2, v_x_826_);
return v___x_830_;
}
else
{
lean_object* v_key_831_; lean_object* v_value_832_; lean_object* v_tail_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_848_; 
v_key_831_ = lean_ctor_get(v_x_826_, 0);
v_value_832_ = lean_ctor_get(v_x_826_, 1);
v_tail_833_ = lean_ctor_get(v_x_826_, 2);
v_isSharedCheck_848_ = !lean_is_exclusive(v_x_826_);
if (v_isSharedCheck_848_ == 0)
{
v___x_835_ = v_x_826_;
v_isShared_836_ = v_isSharedCheck_848_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_tail_833_);
lean_inc(v_value_832_);
lean_inc(v_key_831_);
lean_dec(v_x_826_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_848_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
uint8_t v___x_837_; 
v___x_837_ = lean_name_eq(v_key_831_, v_a_825_);
if (v___x_837_ == 0)
{
lean_object* v_tail_838_; lean_object* v___x_840_; 
v_tail_838_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4(v___x_824_, v_a_825_, v_tail_833_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 2, v_tail_838_);
v___x_840_ = v___x_835_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_key_831_);
lean_ctor_set(v_reuseFailAlloc_841_, 1, v_value_832_);
lean_ctor_set(v_reuseFailAlloc_841_, 2, v_tail_838_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
return v___x_840_;
}
}
else
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v_val_844_; lean_object* v___x_846_; 
lean_dec(v_key_831_);
v___x_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_842_, 0, v_value_832_);
v___x_843_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0(v___x_824_, v___x_842_);
v_val_844_ = lean_ctor_get(v___x_843_, 0);
lean_inc(v_val_844_);
lean_dec(v___x_843_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 1, v_val_844_);
lean_ctor_set(v___x_835_, 0, v_a_825_);
v___x_846_ = v___x_835_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_a_825_);
lean_ctor_set(v_reuseFailAlloc_847_, 1, v_val_844_);
lean_ctor_set(v_reuseFailAlloc_847_, 2, v_tail_833_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2(lean_object* v___x_849_, lean_object* v_m_850_, lean_object* v_a_851_){
_start:
{
lean_object* v___y_853_; lean_object* v___y_854_; size_t v___y_855_; lean_object* v___y_856_; lean_object* v_size_859_; lean_object* v_buckets_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_907_; 
v_size_859_ = lean_ctor_get(v_m_850_, 0);
v_buckets_860_ = lean_ctor_get(v_m_850_, 1);
v_isSharedCheck_907_ = !lean_is_exclusive(v_m_850_);
if (v_isSharedCheck_907_ == 0)
{
v___x_862_ = v_m_850_;
v_isShared_863_ = v_isSharedCheck_907_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_buckets_860_);
lean_inc(v_size_859_);
lean_dec(v_m_850_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_907_;
goto v_resetjp_861_;
}
v___jp_852_:
{
lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_857_ = lean_array_uset(v___y_854_, v___y_855_, v___y_853_);
v___x_858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_858_, 0, v___y_856_);
lean_ctor_set(v___x_858_, 1, v___x_857_);
return v___x_858_;
}
v_resetjp_861_:
{
lean_object* v___x_864_; uint64_t v___y_866_; 
v___x_864_ = lean_array_get_size(v_buckets_860_);
if (lean_obj_tag(v_a_851_) == 0)
{
uint64_t v___x_905_; 
v___x_905_ = 1723ULL;
v___y_866_ = v___x_905_;
goto v___jp_865_;
}
else
{
uint64_t v_hash_906_; 
v_hash_906_ = lean_ctor_get_uint64(v_a_851_, sizeof(void*)*2);
v___y_866_ = v_hash_906_;
goto v___jp_865_;
}
v___jp_865_:
{
uint64_t v___x_867_; uint64_t v___x_868_; uint64_t v_fold_869_; uint64_t v___x_870_; uint64_t v___x_871_; uint64_t v___x_872_; size_t v___x_873_; size_t v___x_874_; size_t v___x_875_; size_t v___x_876_; size_t v___x_877_; lean_object* v_bkt_878_; uint8_t v___x_879_; 
v___x_867_ = 32ULL;
v___x_868_ = lean_uint64_shift_right(v___y_866_, v___x_867_);
v_fold_869_ = lean_uint64_xor(v___y_866_, v___x_868_);
v___x_870_ = 16ULL;
v___x_871_ = lean_uint64_shift_right(v_fold_869_, v___x_870_);
v___x_872_ = lean_uint64_xor(v_fold_869_, v___x_871_);
v___x_873_ = lean_uint64_to_usize(v___x_872_);
v___x_874_ = lean_usize_of_nat(v___x_864_);
v___x_875_ = ((size_t)1ULL);
v___x_876_ = lean_usize_sub(v___x_874_, v___x_875_);
v___x_877_ = lean_usize_land(v___x_873_, v___x_876_);
v_bkt_878_ = lean_array_uget_borrowed(v_buckets_860_, v___x_877_);
v___x_879_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_851_, v_bkt_878_);
if (v___x_879_ == 0)
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v_size_x27_883_; lean_object* v___x_884_; lean_object* v_buckets_x27_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; uint8_t v___x_891_; 
v___x_880_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0));
v___x_881_ = lean_array_push(v___x_880_, v___x_849_);
v___x_882_ = lean_unsigned_to_nat(1u);
v_size_x27_883_ = lean_nat_add(v_size_859_, v___x_882_);
lean_dec(v_size_859_);
lean_inc(v_bkt_878_);
v___x_884_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_884_, 0, v_a_851_);
lean_ctor_set(v___x_884_, 1, v___x_881_);
lean_ctor_set(v___x_884_, 2, v_bkt_878_);
v_buckets_x27_885_ = lean_array_uset(v_buckets_860_, v___x_877_, v___x_884_);
v___x_886_ = lean_unsigned_to_nat(4u);
v___x_887_ = lean_nat_mul(v_size_x27_883_, v___x_886_);
v___x_888_ = lean_unsigned_to_nat(3u);
v___x_889_ = lean_nat_div(v___x_887_, v___x_888_);
lean_dec(v___x_887_);
v___x_890_ = lean_array_get_size(v_buckets_x27_885_);
v___x_891_ = lean_nat_dec_le(v___x_889_, v___x_890_);
lean_dec(v___x_889_);
if (v___x_891_ == 0)
{
lean_object* v_val_892_; lean_object* v___x_894_; 
v_val_892_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(v_buckets_x27_885_);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 1, v_val_892_);
lean_ctor_set(v___x_862_, 0, v_size_x27_883_);
v___x_894_ = v___x_862_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_size_x27_883_);
lean_ctor_set(v_reuseFailAlloc_895_, 1, v_val_892_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
else
{
lean_object* v___x_897_; 
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 1, v_buckets_x27_885_);
lean_ctor_set(v___x_862_, 0, v_size_x27_883_);
v___x_897_ = v___x_862_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_size_x27_883_);
lean_ctor_set(v_reuseFailAlloc_898_, 1, v_buckets_x27_885_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
else
{
lean_object* v___x_899_; lean_object* v_buckets_x27_900_; lean_object* v_bkt_x27_901_; uint8_t v___x_902_; 
lean_inc(v_bkt_878_);
lean_del_object(v___x_862_);
v___x_899_ = lean_box(0);
v_buckets_x27_900_ = lean_array_uset(v_buckets_860_, v___x_877_, v___x_899_);
lean_inc(v_a_851_);
v_bkt_x27_901_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4(v___x_849_, v_a_851_, v_bkt_878_);
v___x_902_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_851_, v_bkt_x27_901_);
lean_dec(v_a_851_);
if (v___x_902_ == 0)
{
lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_903_ = lean_unsigned_to_nat(1u);
v___x_904_ = lean_nat_sub(v_size_859_, v___x_903_);
lean_dec(v_size_859_);
v___y_853_ = v_bkt_x27_901_;
v___y_854_ = v_buckets_x27_900_;
v___y_855_ = v___x_877_;
v___y_856_ = v___x_904_;
goto v___jp_852_;
}
else
{
v___y_853_ = v_bkt_x27_901_;
v___y_854_ = v_buckets_x27_900_;
v___y_855_ = v___x_877_;
v___y_856_ = v_size_859_;
goto v___jp_852_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__3___redArg(lean_object* v_a_908_){
_start:
{
lean_object* v_fst_909_; lean_object* v_snd_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_946_; 
v_fst_909_ = lean_ctor_get(v_a_908_, 0);
v_snd_910_ = lean_ctor_get(v_a_908_, 1);
v_isSharedCheck_946_ = !lean_is_exclusive(v_a_908_);
if (v_isSharedCheck_946_ == 0)
{
v___x_912_ = v_a_908_;
v_isShared_913_ = v_isSharedCheck_946_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_snd_910_);
lean_inc(v_fst_909_);
lean_dec(v_a_908_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_946_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_914_; uint8_t v___x_915_; 
v___x_914_ = lean_box(0);
v___x_915_ = lean_name_eq(v_snd_910_, v___x_914_);
if (v___x_915_ == 0)
{
lean_object* v_values_916_; lean_object* v_seen_917_; lean_object* v_children_918_; uint8_t v___x_919_; 
v_values_916_ = lean_ctor_get(v_fst_909_, 0);
v_seen_917_ = lean_ctor_get(v_fst_909_, 1);
v_children_918_ = lean_ctor_get(v_fst_909_, 2);
v___x_919_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(v_seen_917_, v_snd_910_);
if (v___x_919_ == 0)
{
lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_936_; 
lean_inc_ref(v_children_918_);
lean_inc_ref(v_seen_917_);
lean_inc_ref(v_values_916_);
v_isSharedCheck_936_ = !lean_is_exclusive(v_fst_909_);
if (v_isSharedCheck_936_ == 0)
{
lean_object* v_unused_937_; lean_object* v_unused_938_; lean_object* v_unused_939_; 
v_unused_937_ = lean_ctor_get(v_fst_909_, 2);
lean_dec(v_unused_937_);
v_unused_938_ = lean_ctor_get(v_fst_909_, 1);
lean_dec(v_unused_938_);
v_unused_939_ = lean_ctor_get(v_fst_909_, 0);
lean_dec(v_unused_939_);
v___x_921_ = v_fst_909_;
v_isShared_922_ = v_isSharedCheck_936_;
goto v_resetjp_920_;
}
else
{
lean_dec(v_fst_909_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_936_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___y_926_; 
v___x_923_ = lean_box(0);
lean_inc(v_snd_910_);
v___x_924_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1___redArg(v_seen_917_, v_snd_910_, v___x_923_);
if (lean_obj_tag(v_snd_910_) == 0)
{
v___y_926_ = v_snd_910_;
goto v___jp_925_;
}
else
{
lean_object* v_pre_935_; 
v_pre_935_ = lean_ctor_get(v_snd_910_, 0);
lean_inc(v_pre_935_);
v___y_926_ = v_pre_935_;
goto v___jp_925_;
}
v___jp_925_:
{
lean_object* v___x_927_; lean_object* v___x_929_; 
lean_inc(v___y_926_);
v___x_927_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2(v_snd_910_, v_children_918_, v___y_926_);
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 2, v___x_927_);
lean_ctor_set(v___x_921_, 1, v___x_924_);
v___x_929_ = v___x_921_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_values_916_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v___x_924_);
lean_ctor_set(v_reuseFailAlloc_934_, 2, v___x_927_);
v___x_929_ = v_reuseFailAlloc_934_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
lean_object* v___x_931_; 
if (v_isShared_913_ == 0)
{
lean_ctor_set(v___x_912_, 1, v___y_926_);
lean_ctor_set(v___x_912_, 0, v___x_929_);
v___x_931_ = v___x_912_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_929_);
lean_ctor_set(v_reuseFailAlloc_933_, 1, v___y_926_);
v___x_931_ = v_reuseFailAlloc_933_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
v_a_908_ = v___x_931_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_941_; 
if (v_isShared_913_ == 0)
{
v___x_941_ = v___x_912_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_fst_909_);
lean_ctor_set(v_reuseFailAlloc_942_, 1, v_snd_910_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
else
{
lean_object* v___x_944_; 
if (v_isShared_913_ == 0)
{
v___x_944_ = v___x_912_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_fst_909_);
lean_ctor_set(v_reuseFailAlloc_945_, 1, v_snd_910_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(lean_object* v_b_947_, lean_object* v_n_948_){
_start:
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v_fst_951_; 
v___x_949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_949_, 0, v_b_947_);
lean_ctor_set(v___x_949_, 1, v_n_948_);
v___x_950_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__3___redArg(v___x_949_);
v_fst_951_ = lean_ctor_get(v___x_950_, 0);
lean_inc(v_fst_951_);
lean_dec_ref(v___x_950_);
return v_fst_951_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName(lean_object* v_00_u03b1_952_, lean_object* v_b_953_, lean_object* v_n_954_){
_start:
{
lean_object* v___x_955_; 
v___x_955_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(v_b_953_, v_n_954_);
return v___x_955_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0(lean_object* v_00_u03b2_956_, lean_object* v_m_957_, lean_object* v_a_958_){
_start:
{
uint8_t v___x_959_; 
v___x_959_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(v_m_957_, v_a_958_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___boxed(lean_object* v_00_u03b2_960_, lean_object* v_m_961_, lean_object* v_a_962_){
_start:
{
uint8_t v_res_963_; lean_object* v_r_964_; 
v_res_963_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0(v_00_u03b2_960_, v_m_961_, v_a_962_);
lean_dec(v_a_962_);
lean_dec_ref(v_m_961_);
v_r_964_ = lean_box(v_res_963_);
return v_r_964_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1(lean_object* v_00_u03b2_965_, lean_object* v_m_966_, lean_object* v_a_967_, lean_object* v_b_968_){
_start:
{
lean_object* v___x_969_; 
v___x_969_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1___redArg(v_m_966_, v_a_967_, v_b_968_);
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__3(lean_object* v_00_u03b1_970_, lean_object* v_inst_971_, lean_object* v_a_972_){
_start:
{
lean_object* v___x_973_; 
v___x_973_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__3___redArg(v_a_972_);
return v___x_973_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0(lean_object* v_00_u03b2_974_, lean_object* v_a_975_, lean_object* v_x_976_){
_start:
{
uint8_t v___x_977_; 
v___x_977_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_975_, v_x_976_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___boxed(lean_object* v_00_u03b2_978_, lean_object* v_a_979_, lean_object* v_x_980_){
_start:
{
uint8_t v_res_981_; lean_object* v_r_982_; 
v_res_981_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0(v_00_u03b2_978_, v_a_979_, v_x_980_);
lean_dec(v_x_980_);
lean_dec(v_a_979_);
v_r_982_ = lean_box(v_res_981_);
return v_r_982_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2(lean_object* v_00_u03b2_983_, lean_object* v_data_984_){
_start:
{
lean_object* v___x_985_; 
v___x_985_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(v_data_984_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_986_, lean_object* v_i_987_, lean_object* v_source_988_, lean_object* v_target_989_){
_start:
{
lean_object* v___x_990_; 
v___x_990_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3___redArg(v_i_987_, v_source_988_, v_target_989_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_991_, lean_object* v_x_992_, lean_object* v_x_993_){
_start:
{
lean_object* v___x_994_; 
v___x_994_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__6___redArg(v_x_992_, v_x_993_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(lean_object* v_a_995_, lean_object* v_x_996_){
_start:
{
if (lean_obj_tag(v_x_996_) == 0)
{
lean_object* v___x_997_; 
v___x_997_ = lean_box(0);
return v___x_997_;
}
else
{
lean_object* v_key_998_; lean_object* v_value_999_; lean_object* v_tail_1000_; uint8_t v___x_1001_; 
v_key_998_ = lean_ctor_get(v_x_996_, 0);
v_value_999_ = lean_ctor_get(v_x_996_, 1);
v_tail_1000_ = lean_ctor_get(v_x_996_, 2);
v___x_1001_ = lean_name_eq(v_key_998_, v_a_995_);
if (v___x_1001_ == 0)
{
v_x_996_ = v_tail_1000_;
goto _start;
}
else
{
lean_object* v___x_1003_; 
lean_inc(v_value_999_);
v___x_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1003_, 0, v_value_999_);
return v___x_1003_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg___boxed(lean_object* v_a_1004_, lean_object* v_x_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(v_a_1004_, v_x_1005_);
lean_dec(v_x_1005_);
lean_dec(v_a_1004_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(lean_object* v_m_1007_, lean_object* v_a_1008_){
_start:
{
lean_object* v_buckets_1009_; lean_object* v___x_1010_; uint64_t v___y_1012_; 
v_buckets_1009_ = lean_ctor_get(v_m_1007_, 1);
v___x_1010_ = lean_array_get_size(v_buckets_1009_);
if (lean_obj_tag(v_a_1008_) == 0)
{
uint64_t v___x_1026_; 
v___x_1026_ = 1723ULL;
v___y_1012_ = v___x_1026_;
goto v___jp_1011_;
}
else
{
uint64_t v_hash_1027_; 
v_hash_1027_ = lean_ctor_get_uint64(v_a_1008_, sizeof(void*)*2);
v___y_1012_ = v_hash_1027_;
goto v___jp_1011_;
}
v___jp_1011_:
{
uint64_t v___x_1013_; uint64_t v___x_1014_; uint64_t v_fold_1015_; uint64_t v___x_1016_; uint64_t v___x_1017_; uint64_t v___x_1018_; size_t v___x_1019_; size_t v___x_1020_; size_t v___x_1021_; size_t v___x_1022_; size_t v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1013_ = 32ULL;
v___x_1014_ = lean_uint64_shift_right(v___y_1012_, v___x_1013_);
v_fold_1015_ = lean_uint64_xor(v___y_1012_, v___x_1014_);
v___x_1016_ = 16ULL;
v___x_1017_ = lean_uint64_shift_right(v_fold_1015_, v___x_1016_);
v___x_1018_ = lean_uint64_xor(v_fold_1015_, v___x_1017_);
v___x_1019_ = lean_uint64_to_usize(v___x_1018_);
v___x_1020_ = lean_usize_of_nat(v___x_1010_);
v___x_1021_ = ((size_t)1ULL);
v___x_1022_ = lean_usize_sub(v___x_1020_, v___x_1021_);
v___x_1023_ = lean_usize_land(v___x_1019_, v___x_1022_);
v___x_1024_ = lean_array_uget_borrowed(v_buckets_1009_, v___x_1023_);
v___x_1025_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(v_a_1008_, v___x_1024_);
return v___x_1025_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg___boxed(lean_object* v_m_1028_, lean_object* v_a_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_m_1028_, v_a_1029_);
lean_dec(v_a_1029_);
lean_dec_ref(v_m_1028_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___redArg(lean_object* v_n_1031_, lean_object* v_cs_1032_, uint64_t v___x_1033_, lean_object* v___x_1034_, lean_object* v_a_1035_){
_start:
{
lean_object* v___x_1036_; uint8_t v___y_1038_; uint64_t v___y_1042_; uint8_t v___x_1050_; 
v___x_1036_ = lean_unsigned_to_nat(1u);
v___x_1050_ = lean_nat_dec_lt(v_a_1035_, v_n_1031_);
if (v___x_1050_ == 0)
{
v___y_1038_ = v___x_1050_;
goto v___jp_1037_;
}
else
{
lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v_key_1053_; 
v___x_1051_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___closed__0, &l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___closed__0);
v___x_1052_ = lean_array_get_borrowed(v___x_1051_, v_cs_1032_, v_a_1035_);
v_key_1053_ = lean_ctor_get(v___x_1052_, 0);
if (lean_obj_tag(v_key_1053_) == 0)
{
uint64_t v___x_1054_; 
v___x_1054_ = 1723ULL;
v___y_1042_ = v___x_1054_;
goto v___jp_1041_;
}
else
{
uint64_t v_hash_1055_; 
v_hash_1055_ = lean_ctor_get_uint64(v_key_1053_, sizeof(void*)*2);
v___y_1042_ = v_hash_1055_;
goto v___jp_1041_;
}
}
v___jp_1037_:
{
if (v___y_1038_ == 0)
{
return v_a_1035_;
}
else
{
lean_object* v___x_1039_; 
v___x_1039_ = lean_nat_add(v_a_1035_, v___x_1036_);
lean_dec(v_a_1035_);
v_a_1035_ = v___x_1039_;
goto _start;
}
}
v___jp_1041_:
{
uint64_t v___x_1043_; uint64_t v___x_1044_; uint64_t v___x_1045_; uint64_t v___x_1046_; uint64_t v___x_1047_; lean_object* v___x_1048_; uint8_t v___x_1049_; 
v___x_1043_ = 48ULL;
v___x_1044_ = lean_uint64_shift_right(v___y_1042_, v___x_1043_);
v___x_1045_ = 16ULL;
v___x_1046_ = lean_uint64_sub(v___x_1045_, v___x_1033_);
v___x_1047_ = lean_uint64_shift_right(v___x_1044_, v___x_1046_);
v___x_1048_ = lean_uint64_to_nat(v___x_1047_);
v___x_1049_ = lean_nat_dec_lt(v___x_1048_, v___x_1034_);
lean_dec(v___x_1048_);
v___y_1038_ = v___x_1049_;
goto v___jp_1037_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___redArg___boxed(lean_object* v_n_1056_, lean_object* v_cs_1057_, lean_object* v___x_1058_, lean_object* v___x_1059_, lean_object* v_a_1060_){
_start:
{
uint64_t v___x_1684__boxed_1061_; lean_object* v_res_1062_; 
v___x_1684__boxed_1061_ = lean_unbox_uint64(v___x_1058_);
lean_dec_ref(v___x_1058_);
v_res_1062_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___redArg(v_n_1056_, v_cs_1057_, v___x_1684__boxed_1061_, v___x_1059_, v_a_1060_);
lean_dec(v___x_1059_);
lean_dec_ref(v_cs_1057_);
lean_dec(v_n_1056_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5_spec__6___redArg(lean_object* v___x_1063_, lean_object* v_n_1064_, lean_object* v_cs_1065_, uint64_t v___x_1066_, lean_object* v_a_1067_){
_start:
{
lean_object* v_snd_1068_; lean_object* v_fst_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1097_; 
v_snd_1068_ = lean_ctor_get(v_a_1067_, 1);
v_fst_1069_ = lean_ctor_get(v_a_1067_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v_a_1067_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1071_ = v_a_1067_;
v_isShared_1072_ = v_isSharedCheck_1097_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_snd_1068_);
lean_inc(v_fst_1069_);
lean_dec(v_a_1067_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1097_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v_fst_1073_; lean_object* v_snd_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1096_; 
v_fst_1073_ = lean_ctor_get(v_snd_1068_, 0);
v_snd_1074_ = lean_ctor_get(v_snd_1068_, 1);
v_isSharedCheck_1096_ = !lean_is_exclusive(v_snd_1068_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1076_ = v_snd_1068_;
v_isShared_1077_ = v_isSharedCheck_1096_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_snd_1074_);
lean_inc(v_fst_1073_);
lean_dec(v_snd_1068_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1096_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
uint8_t v___x_1078_; 
v___x_1078_ = lean_nat_dec_lt(v_snd_1074_, v___x_1063_);
if (v___x_1078_ == 0)
{
lean_object* v___x_1080_; 
if (v_isShared_1077_ == 0)
{
v___x_1080_ = v___x_1076_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v_fst_1073_);
lean_ctor_set(v_reuseFailAlloc_1084_, 1, v_snd_1074_);
v___x_1080_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
lean_object* v___x_1082_; 
if (v_isShared_1072_ == 0)
{
lean_ctor_set(v___x_1071_, 1, v___x_1080_);
v___x_1082_ = v___x_1071_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_fst_1069_);
lean_ctor_set(v_reuseFailAlloc_1083_, 1, v___x_1080_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
}
else
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1090_; 
v___x_1085_ = lean_unsigned_to_nat(1u);
v___x_1086_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___redArg(v_n_1064_, v_cs_1065_, v___x_1066_, v_snd_1074_, v_fst_1073_);
v___x_1087_ = l___private_Lean_ConstTrie_0__Lean_pushU16(v_fst_1069_, v___x_1086_);
v___x_1088_ = lean_nat_add(v_snd_1074_, v___x_1085_);
lean_dec(v_snd_1074_);
if (v_isShared_1077_ == 0)
{
lean_ctor_set(v___x_1076_, 1, v___x_1088_);
lean_ctor_set(v___x_1076_, 0, v___x_1086_);
v___x_1090_ = v___x_1076_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v___x_1086_);
lean_ctor_set(v_reuseFailAlloc_1095_, 1, v___x_1088_);
v___x_1090_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
lean_object* v___x_1092_; 
if (v_isShared_1072_ == 0)
{
lean_ctor_set(v___x_1071_, 1, v___x_1090_);
lean_ctor_set(v___x_1071_, 0, v___x_1087_);
v___x_1092_ = v___x_1071_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1087_);
lean_ctor_set(v_reuseFailAlloc_1094_, 1, v___x_1090_);
v___x_1092_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
v_a_1067_ = v___x_1092_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5_spec__6___redArg___boxed(lean_object* v___x_1098_, lean_object* v_n_1099_, lean_object* v_cs_1100_, lean_object* v___x_1101_, lean_object* v_a_1102_){
_start:
{
uint64_t v___x_1729__boxed_1103_; lean_object* v_res_1104_; 
v___x_1729__boxed_1103_ = lean_unbox_uint64(v___x_1101_);
lean_dec_ref(v___x_1101_);
v_res_1104_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5_spec__6___redArg(v___x_1098_, v_n_1099_, v_cs_1100_, v___x_1729__boxed_1103_, v_a_1102_);
lean_dec_ref(v_cs_1100_);
lean_dec(v_n_1099_);
lean_dec(v___x_1098_);
return v_res_1104_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___redArg(lean_object* v_n_1105_, lean_object* v_cs_1106_, uint64_t v___x_1107_, lean_object* v___x_1108_, lean_object* v_a_1109_){
_start:
{
lean_object* v_snd_1110_; lean_object* v_fst_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1139_; 
v_snd_1110_ = lean_ctor_get(v_a_1109_, 1);
v_fst_1111_ = lean_ctor_get(v_a_1109_, 0);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_a_1109_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1113_ = v_a_1109_;
v_isShared_1114_ = v_isSharedCheck_1139_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_snd_1110_);
lean_inc(v_fst_1111_);
lean_dec(v_a_1109_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1139_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v_fst_1115_; lean_object* v_snd_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1138_; 
v_fst_1115_ = lean_ctor_get(v_snd_1110_, 0);
v_snd_1116_ = lean_ctor_get(v_snd_1110_, 1);
v_isSharedCheck_1138_ = !lean_is_exclusive(v_snd_1110_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1118_ = v_snd_1110_;
v_isShared_1119_ = v_isSharedCheck_1138_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_snd_1116_);
lean_inc(v_fst_1115_);
lean_dec(v_snd_1110_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1138_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
uint8_t v___x_1120_; 
v___x_1120_ = lean_nat_dec_lt(v_snd_1116_, v___x_1108_);
if (v___x_1120_ == 0)
{
lean_object* v___x_1122_; 
if (v_isShared_1119_ == 0)
{
v___x_1122_ = v___x_1118_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_fst_1115_);
lean_ctor_set(v_reuseFailAlloc_1126_, 1, v_snd_1116_);
v___x_1122_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
lean_object* v___x_1124_; 
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 1, v___x_1122_);
v___x_1124_ = v___x_1113_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_fst_1111_);
lean_ctor_set(v_reuseFailAlloc_1125_, 1, v___x_1122_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
else
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1132_; 
v___x_1127_ = lean_unsigned_to_nat(1u);
v___x_1128_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___redArg(v_n_1105_, v_cs_1106_, v___x_1107_, v_snd_1116_, v_fst_1115_);
v___x_1129_ = l___private_Lean_ConstTrie_0__Lean_pushU16(v_fst_1111_, v___x_1128_);
v___x_1130_ = lean_nat_add(v_snd_1116_, v___x_1127_);
lean_dec(v_snd_1116_);
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 1, v___x_1130_);
lean_ctor_set(v___x_1118_, 0, v___x_1128_);
v___x_1132_ = v___x_1118_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___x_1128_);
lean_ctor_set(v_reuseFailAlloc_1137_, 1, v___x_1130_);
v___x_1132_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
lean_object* v___x_1134_; 
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 1, v___x_1132_);
lean_ctor_set(v___x_1113_, 0, v___x_1129_);
v___x_1134_ = v___x_1113_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v___x_1129_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v___x_1132_);
v___x_1134_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
lean_object* v___x_1135_; 
v___x_1135_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5_spec__6___redArg(v___x_1108_, v_n_1105_, v_cs_1106_, v___x_1107_, v___x_1134_);
return v___x_1135_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___redArg___boxed(lean_object* v_n_1140_, lean_object* v_cs_1141_, lean_object* v___x_1142_, lean_object* v___x_1143_, lean_object* v_a_1144_){
_start:
{
uint64_t v___x_1786__boxed_1145_; lean_object* v_res_1146_; 
v___x_1786__boxed_1145_ = lean_unbox_uint64(v___x_1142_);
lean_dec_ref(v___x_1142_);
v_res_1146_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___redArg(v_n_1140_, v_cs_1141_, v___x_1786__boxed_1145_, v___x_1143_, v_a_1144_);
lean_dec(v___x_1143_);
lean_dec_ref(v_cs_1141_);
lean_dec(v_n_1140_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__6___redArg(lean_object* v_as_1147_, size_t v_sz_1148_, size_t v_i_1149_, lean_object* v_b_1150_){
_start:
{
uint64_t v___y_1152_; uint8_t v___x_1160_; 
v___x_1160_ = lean_usize_dec_lt(v_i_1149_, v_sz_1148_);
if (v___x_1160_ == 0)
{
return v_b_1150_;
}
else
{
lean_object* v_a_1161_; lean_object* v_key_1162_; 
v_a_1161_ = lean_array_uget_borrowed(v_as_1147_, v_i_1149_);
v_key_1162_ = lean_ctor_get(v_a_1161_, 0);
if (lean_obj_tag(v_key_1162_) == 0)
{
uint64_t v___x_1163_; 
v___x_1163_ = 1723ULL;
v___y_1152_ = v___x_1163_;
goto v___jp_1151_;
}
else
{
uint64_t v_hash_1164_; 
v_hash_1164_ = lean_ctor_get_uint64(v_key_1162_, sizeof(void*)*2);
v___y_1152_ = v_hash_1164_;
goto v___jp_1151_;
}
}
v___jp_1151_:
{
uint64_t v___x_1153_; uint64_t v___x_1154_; uint8_t v___x_1155_; lean_object* v___x_1156_; size_t v___x_1157_; size_t v___x_1158_; 
v___x_1153_ = 40ULL;
v___x_1154_ = lean_uint64_shift_right(v___y_1152_, v___x_1153_);
v___x_1155_ = lean_uint64_to_uint8(v___x_1154_);
v___x_1156_ = lean_byte_array_push(v_b_1150_, v___x_1155_);
v___x_1157_ = ((size_t)1ULL);
v___x_1158_ = lean_usize_add(v_i_1149_, v___x_1157_);
v_i_1149_ = v___x_1158_;
v_b_1150_ = v___x_1156_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__6___redArg___boxed(lean_object* v_as_1165_, lean_object* v_sz_1166_, lean_object* v_i_1167_, lean_object* v_b_1168_){
_start:
{
size_t v_sz_boxed_1169_; size_t v_i_boxed_1170_; lean_object* v_res_1171_; 
v_sz_boxed_1169_ = lean_unbox_usize(v_sz_1166_);
lean_dec(v_sz_1166_);
v_i_boxed_1170_ = lean_unbox_usize(v_i_1167_);
lean_dec(v_i_1167_);
v_res_1171_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__6___redArg(v_as_1165_, v_sz_boxed_1169_, v_i_boxed_1170_, v_b_1168_);
lean_dec_ref(v_as_1165_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2(lean_object* v_msg_1172_){
_start:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
v___x_1173_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10, &l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10_once, _init_l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10);
v___x_1174_ = lean_panic_fn_borrowed(v___x_1173_, v_msg_1172_);
return v___x_1174_;
}
}
LEAN_EXPORT uint64_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___redArg(lean_object* v_n_1175_, uint64_t v_a_1176_){
_start:
{
uint64_t v_bits_1177_; uint8_t v___y_1179_; uint64_t v___x_1182_; lean_object* v___x_1183_; uint8_t v___x_1184_; 
v_bits_1177_ = 1ULL;
v___x_1182_ = lean_uint64_shift_left(v_bits_1177_, v_a_1176_);
v___x_1183_ = lean_uint64_to_nat(v___x_1182_);
v___x_1184_ = lean_nat_dec_lt(v___x_1183_, v_n_1175_);
lean_dec(v___x_1183_);
if (v___x_1184_ == 0)
{
v___y_1179_ = v___x_1184_;
goto v___jp_1178_;
}
else
{
uint64_t v___x_1185_; uint8_t v___x_1186_; 
v___x_1185_ = 16ULL;
v___x_1186_ = lean_uint64_dec_lt(v_a_1176_, v___x_1185_);
v___y_1179_ = v___x_1186_;
goto v___jp_1178_;
}
v___jp_1178_:
{
if (v___y_1179_ == 0)
{
return v_a_1176_;
}
else
{
uint64_t v___x_1180_; 
v___x_1180_ = lean_uint64_add(v_a_1176_, v_bits_1177_);
v_a_1176_ = v___x_1180_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___redArg___boxed(lean_object* v_n_1187_, lean_object* v_a_1188_){
_start:
{
uint64_t v_a_boxed_1189_; uint64_t v_res_1190_; lean_object* v_r_1191_; 
v_a_boxed_1189_ = lean_unbox_uint64(v_a_1188_);
lean_dec_ref(v_a_1188_);
v_res_1190_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___redArg(v_n_1187_, v_a_boxed_1189_);
lean_dec(v_n_1187_);
v_r_1191_ = lean_box_uint64(v_res_1190_);
return v_r_1191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(lean_object* v_cs_1192_){
_start:
{
lean_object* v_n_1193_; lean_object* v_j_1194_; uint8_t v___x_1195_; 
v_n_1193_ = lean_array_get_size(v_cs_1192_);
v_j_1194_ = lean_unsigned_to_nat(0u);
v___x_1195_ = lean_nat_dec_eq(v_n_1193_, v_j_1194_);
if (v___x_1195_ == 0)
{
lean_object* v___x_1196_; uint8_t v___x_1197_; 
v___x_1196_ = lean_unsigned_to_nat(65535u);
v___x_1197_ = lean_nat_dec_lt(v_n_1193_, v___x_1196_);
if (v___x_1197_ == 0)
{
lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1198_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__14, &l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__14_once, _init_l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__14);
v___x_1199_ = l_panic___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2(v___x_1198_);
return v___x_1199_;
}
else
{
lean_object* v___x_1200_; uint64_t v_bits_1201_; uint64_t v___x_1202_; uint64_t v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; uint8_t v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v_fst_1216_; size_t v_sz_1217_; size_t v___x_1218_; lean_object* v___x_1219_; 
v___x_1200_ = lean_unsigned_to_nat(1u);
v_bits_1201_ = 1ULL;
v___x_1202_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___redArg(v_n_1193_, v_bits_1201_);
v___x_1203_ = lean_uint64_shift_left(v_bits_1201_, v___x_1202_);
v___x_1204_ = lean_uint64_to_nat(v___x_1203_);
v___x_1205_ = lean_nat_add(v___x_1204_, v___x_1200_);
lean_dec(v___x_1204_);
v___x_1206_ = lean_unsigned_to_nat(2u);
v___x_1207_ = lean_nat_mul(v___x_1206_, v___x_1205_);
v___x_1208_ = lean_nat_add(v___x_1200_, v___x_1207_);
lean_dec(v___x_1207_);
v___x_1209_ = lean_nat_add(v___x_1208_, v_n_1193_);
lean_dec(v___x_1208_);
v___x_1210_ = lean_mk_empty_byte_array(v___x_1209_);
lean_dec(v___x_1209_);
v___x_1211_ = lean_uint64_to_uint8(v___x_1202_);
v___x_1212_ = lean_byte_array_push(v___x_1210_, v___x_1211_);
v___x_1213_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__15));
v___x_1214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1212_);
lean_ctor_set(v___x_1214_, 1, v___x_1213_);
v___x_1215_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___redArg(v_n_1193_, v_cs_1192_, v___x_1202_, v___x_1205_, v___x_1214_);
lean_dec(v___x_1205_);
v_fst_1216_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_fst_1216_);
lean_dec_ref(v___x_1215_);
v_sz_1217_ = lean_array_size(v_cs_1192_);
v___x_1218_ = ((size_t)0ULL);
v___x_1219_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__6___redArg(v_cs_1192_, v_sz_1217_, v___x_1218_, v_fst_1216_);
return v___x_1219_;
}
}
else
{
lean_object* v___x_1220_; 
v___x_1220_ = l_ByteArray_empty;
return v___x_1220_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg___boxed(lean_object* v_cs_1221_){
_start:
{
lean_object* v_res_1222_; 
v_res_1222_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(v_cs_1221_);
lean_dec_ref(v_cs_1221_);
return v_res_1222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__9___redArg(lean_object* v_hi_1223_, lean_object* v_pivot_1224_, lean_object* v_as_1225_, lean_object* v_i_1226_, lean_object* v_k_1227_){
_start:
{
uint64_t v___y_1229_; uint64_t v___y_1230_; uint8_t v___x_1240_; 
v___x_1240_ = lean_nat_dec_lt(v_k_1227_, v_hi_1223_);
if (v___x_1240_ == 0)
{
lean_object* v___x_1241_; lean_object* v___x_1242_; 
lean_dec(v_k_1227_);
v___x_1241_ = lean_array_fswap(v_as_1225_, v_i_1226_, v_hi_1223_);
v___x_1242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1242_, 0, v_i_1226_);
lean_ctor_set(v___x_1242_, 1, v___x_1241_);
return v___x_1242_;
}
else
{
lean_object* v___x_1243_; lean_object* v_key_1244_; lean_object* v_key_1245_; uint64_t v___y_1247_; 
v___x_1243_ = lean_array_fget_borrowed(v_as_1225_, v_k_1227_);
v_key_1244_ = lean_ctor_get(v___x_1243_, 0);
v_key_1245_ = lean_ctor_get(v_pivot_1224_, 0);
if (lean_obj_tag(v_key_1244_) == 0)
{
uint64_t v___x_1250_; 
v___x_1250_ = 1723ULL;
v___y_1247_ = v___x_1250_;
goto v___jp_1246_;
}
else
{
uint64_t v_hash_1251_; 
v_hash_1251_ = lean_ctor_get_uint64(v_key_1244_, sizeof(void*)*2);
v___y_1247_ = v_hash_1251_;
goto v___jp_1246_;
}
v___jp_1246_:
{
if (lean_obj_tag(v_key_1245_) == 0)
{
uint64_t v___x_1248_; 
v___x_1248_ = 1723ULL;
v___y_1229_ = v___y_1247_;
v___y_1230_ = v___x_1248_;
goto v___jp_1228_;
}
else
{
uint64_t v_hash_1249_; 
v_hash_1249_ = lean_ctor_get_uint64(v_key_1245_, sizeof(void*)*2);
v___y_1229_ = v___y_1247_;
v___y_1230_ = v_hash_1249_;
goto v___jp_1228_;
}
}
}
v___jp_1228_:
{
uint8_t v___x_1231_; 
v___x_1231_ = lean_uint64_dec_lt(v___y_1229_, v___y_1230_);
if (v___x_1231_ == 0)
{
lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1232_ = lean_unsigned_to_nat(1u);
v___x_1233_ = lean_nat_add(v_k_1227_, v___x_1232_);
lean_dec(v_k_1227_);
v_k_1227_ = v___x_1233_;
goto _start;
}
else
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1235_ = lean_array_fswap(v_as_1225_, v_i_1226_, v_k_1227_);
v___x_1236_ = lean_unsigned_to_nat(1u);
v___x_1237_ = lean_nat_add(v_i_1226_, v___x_1236_);
lean_dec(v_i_1226_);
v___x_1238_ = lean_nat_add(v_k_1227_, v___x_1236_);
lean_dec(v_k_1227_);
v_as_1225_ = v___x_1235_;
v_i_1226_ = v___x_1237_;
v_k_1227_ = v___x_1238_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__9___redArg___boxed(lean_object* v_hi_1252_, lean_object* v_pivot_1253_, lean_object* v_as_1254_, lean_object* v_i_1255_, lean_object* v_k_1256_){
_start:
{
lean_object* v_res_1257_; 
v_res_1257_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__9___redArg(v_hi_1252_, v_pivot_1253_, v_as_1254_, v_i_1255_, v_k_1256_);
lean_dec_ref(v_pivot_1253_);
lean_dec(v_hi_1252_);
return v_res_1257_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___lam__0(lean_object* v_c_u2081_1258_, lean_object* v_c_u2082_1259_){
_start:
{
lean_object* v_key_1260_; lean_object* v_key_1261_; uint64_t v___y_1263_; 
v_key_1260_ = lean_ctor_get(v_c_u2081_1258_, 0);
v_key_1261_ = lean_ctor_get(v_c_u2082_1259_, 0);
if (lean_obj_tag(v_key_1260_) == 0)
{
uint64_t v___x_1268_; 
v___x_1268_ = 1723ULL;
v___y_1263_ = v___x_1268_;
goto v___jp_1262_;
}
else
{
uint64_t v_hash_1269_; 
v_hash_1269_ = lean_ctor_get_uint64(v_key_1260_, sizeof(void*)*2);
v___y_1263_ = v_hash_1269_;
goto v___jp_1262_;
}
v___jp_1262_:
{
if (lean_obj_tag(v_key_1261_) == 0)
{
uint64_t v___x_1264_; uint8_t v___x_1265_; 
v___x_1264_ = 1723ULL;
v___x_1265_ = lean_uint64_dec_lt(v___y_1263_, v___x_1264_);
return v___x_1265_;
}
else
{
uint64_t v_hash_1266_; uint8_t v___x_1267_; 
v_hash_1266_ = lean_ctor_get_uint64(v_key_1261_, sizeof(void*)*2);
v___x_1267_ = lean_uint64_dec_lt(v___y_1263_, v_hash_1266_);
return v___x_1267_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___lam__0___boxed(lean_object* v_c_u2081_1270_, lean_object* v_c_u2082_1271_){
_start:
{
uint8_t v_res_1272_; lean_object* v_r_1273_; 
v_res_1272_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___lam__0(v_c_u2081_1270_, v_c_u2082_1271_);
lean_dec_ref(v_c_u2082_1271_);
lean_dec_ref(v_c_u2081_1270_);
v_r_1273_ = lean_box(v_res_1272_);
return v_r_1273_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg(lean_object* v_n_1274_, lean_object* v_as_1275_, lean_object* v_lo_1276_, lean_object* v_hi_1277_){
_start:
{
lean_object* v___y_1279_; uint8_t v___x_1289_; 
v___x_1289_ = lean_nat_dec_lt(v_lo_1276_, v_hi_1277_);
if (v___x_1289_ == 0)
{
lean_dec(v_lo_1276_);
return v_as_1275_;
}
else
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v_mid_1292_; lean_object* v___y_1294_; lean_object* v___y_1300_; lean_object* v___x_1305_; lean_object* v___x_1306_; uint8_t v___x_1307_; 
v___x_1290_ = lean_nat_add(v_lo_1276_, v_hi_1277_);
v___x_1291_ = lean_unsigned_to_nat(1u);
v_mid_1292_ = lean_nat_shiftr(v___x_1290_, v___x_1291_);
lean_dec(v___x_1290_);
v___x_1305_ = lean_array_fget_borrowed(v_as_1275_, v_mid_1292_);
v___x_1306_ = lean_array_fget_borrowed(v_as_1275_, v_lo_1276_);
v___x_1307_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___lam__0(v___x_1305_, v___x_1306_);
if (v___x_1307_ == 0)
{
v___y_1300_ = v_as_1275_;
goto v___jp_1299_;
}
else
{
lean_object* v___x_1308_; 
v___x_1308_ = lean_array_fswap(v_as_1275_, v_lo_1276_, v_mid_1292_);
v___y_1300_ = v___x_1308_;
goto v___jp_1299_;
}
v___jp_1293_:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; uint8_t v___x_1297_; 
v___x_1295_ = lean_array_fget_borrowed(v___y_1294_, v_mid_1292_);
v___x_1296_ = lean_array_fget_borrowed(v___y_1294_, v_hi_1277_);
v___x_1297_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___lam__0(v___x_1295_, v___x_1296_);
if (v___x_1297_ == 0)
{
lean_dec(v_mid_1292_);
v___y_1279_ = v___y_1294_;
goto v___jp_1278_;
}
else
{
lean_object* v___x_1298_; 
v___x_1298_ = lean_array_fswap(v___y_1294_, v_mid_1292_, v_hi_1277_);
lean_dec(v_mid_1292_);
v___y_1279_ = v___x_1298_;
goto v___jp_1278_;
}
}
v___jp_1299_:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; uint8_t v___x_1303_; 
v___x_1301_ = lean_array_fget_borrowed(v___y_1300_, v_hi_1277_);
v___x_1302_ = lean_array_fget_borrowed(v___y_1300_, v_lo_1276_);
v___x_1303_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___lam__0(v___x_1301_, v___x_1302_);
if (v___x_1303_ == 0)
{
v___y_1294_ = v___y_1300_;
goto v___jp_1293_;
}
else
{
lean_object* v___x_1304_; 
v___x_1304_ = lean_array_fswap(v___y_1300_, v_lo_1276_, v_hi_1277_);
v___y_1294_ = v___x_1304_;
goto v___jp_1293_;
}
}
}
v___jp_1278_:
{
lean_object* v_pivot_1280_; lean_object* v___x_1281_; lean_object* v_fst_1282_; lean_object* v_snd_1283_; uint8_t v___x_1284_; 
v_pivot_1280_ = lean_array_fget(v___y_1279_, v_hi_1277_);
lean_inc_n(v_lo_1276_, 2);
v___x_1281_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__9___redArg(v_hi_1277_, v_pivot_1280_, v___y_1279_, v_lo_1276_, v_lo_1276_);
lean_dec(v_pivot_1280_);
v_fst_1282_ = lean_ctor_get(v___x_1281_, 0);
lean_inc(v_fst_1282_);
v_snd_1283_ = lean_ctor_get(v___x_1281_, 1);
lean_inc(v_snd_1283_);
lean_dec_ref(v___x_1281_);
v___x_1284_ = lean_nat_dec_le(v_hi_1277_, v_fst_1282_);
if (v___x_1284_ == 0)
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1285_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg(v_n_1274_, v_snd_1283_, v_lo_1276_, v_fst_1282_);
v___x_1286_ = lean_unsigned_to_nat(1u);
v___x_1287_ = lean_nat_add(v_fst_1282_, v___x_1286_);
lean_dec(v_fst_1282_);
v_as_1275_ = v___x_1285_;
v_lo_1276_ = v___x_1287_;
goto _start;
}
else
{
lean_dec(v_fst_1282_);
lean_dec(v_lo_1276_);
return v_snd_1283_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___boxed(lean_object* v_n_1309_, lean_object* v_as_1310_, lean_object* v_lo_1311_, lean_object* v_hi_1312_){
_start:
{
lean_object* v_res_1313_; 
v_res_1313_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg(v_n_1309_, v_as_1310_, v_lo_1311_, v_hi_1312_);
lean_dec(v_hi_1312_);
lean_dec(v_n_1309_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(lean_object* v_b_1314_, lean_object* v_key_1315_){
_start:
{
lean_object* v_values_1316_; lean_object* v_children_1317_; lean_object* v___y_1319_; lean_object* v___y_1324_; lean_object* v___y_1325_; lean_object* v___y_1326_; lean_object* v___y_1327_; lean_object* v___y_1330_; lean_object* v___y_1331_; lean_object* v___y_1332_; lean_object* v___y_1333_; lean_object* v___y_1336_; lean_object* v___x_1346_; 
v_values_1316_ = lean_ctor_get(v_b_1314_, 0);
v_children_1317_ = lean_ctor_get(v_b_1314_, 2);
v___x_1346_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_children_1317_, v_key_1315_);
if (lean_obj_tag(v___x_1346_) == 0)
{
lean_object* v___x_1347_; 
v___x_1347_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0));
v___y_1336_ = v___x_1347_;
goto v___jp_1335_;
}
else
{
lean_object* v_val_1348_; 
v_val_1348_ = lean_ctor_get(v___x_1346_, 0);
lean_inc(v_val_1348_);
lean_dec_ref_known(v___x_1346_, 1);
v___y_1336_ = v_val_1348_;
goto v___jp_1335_;
}
v___jp_1318_:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1320_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_values_1316_, v_key_1315_);
v___x_1321_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(v___y_1319_);
v___x_1322_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1322_, 0, v_key_1315_);
lean_ctor_set(v___x_1322_, 1, v___x_1320_);
lean_ctor_set(v___x_1322_, 2, v___y_1319_);
lean_ctor_set(v___x_1322_, 3, v___x_1321_);
return v___x_1322_;
}
v___jp_1323_:
{
lean_object* v___x_1328_; 
v___x_1328_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg(v___y_1326_, v___y_1324_, v___y_1325_, v___y_1327_);
lean_dec(v___y_1327_);
lean_dec(v___y_1326_);
v___y_1319_ = v___x_1328_;
goto v___jp_1318_;
}
v___jp_1329_:
{
uint8_t v___x_1334_; 
v___x_1334_ = lean_nat_dec_le(v___y_1333_, v___y_1332_);
if (v___x_1334_ == 0)
{
lean_dec(v___y_1332_);
lean_inc(v___y_1333_);
v___y_1324_ = v___y_1330_;
v___y_1325_ = v___y_1333_;
v___y_1326_ = v___y_1331_;
v___y_1327_ = v___y_1333_;
goto v___jp_1323_;
}
else
{
v___y_1324_ = v___y_1330_;
v___y_1325_ = v___y_1333_;
v___y_1326_ = v___y_1331_;
v___y_1327_ = v___y_1332_;
goto v___jp_1323_;
}
}
v___jp_1335_:
{
size_t v_sz_1337_; size_t v___x_1338_; lean_object* v_children_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; 
v_sz_1337_ = lean_array_size(v___y_1336_);
v___x_1338_ = ((size_t)0ULL);
v_children_1339_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(v_b_1314_, v_sz_1337_, v___x_1338_, v___y_1336_);
v___x_1340_ = lean_array_get_size(v_children_1339_);
v___x_1341_ = lean_unsigned_to_nat(0u);
v___x_1342_ = lean_nat_dec_eq(v___x_1340_, v___x_1341_);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; lean_object* v___x_1344_; uint8_t v___x_1345_; 
v___x_1343_ = lean_unsigned_to_nat(1u);
v___x_1344_ = lean_nat_sub(v___x_1340_, v___x_1343_);
v___x_1345_ = lean_nat_dec_le(v___x_1341_, v___x_1344_);
if (v___x_1345_ == 0)
{
lean_inc(v___x_1344_);
v___y_1330_ = v_children_1339_;
v___y_1331_ = v___x_1340_;
v___y_1332_ = v___x_1344_;
v___y_1333_ = v___x_1344_;
goto v___jp_1329_;
}
else
{
v___y_1330_ = v_children_1339_;
v___y_1331_ = v___x_1340_;
v___y_1332_ = v___x_1344_;
v___y_1333_ = v___x_1341_;
goto v___jp_1329_;
}
}
else
{
v___y_1319_ = v_children_1339_;
goto v___jp_1318_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(lean_object* v_b_1349_, size_t v_sz_1350_, size_t v_i_1351_, lean_object* v_bs_1352_){
_start:
{
uint8_t v___x_1353_; 
v___x_1353_ = lean_usize_dec_lt(v_i_1351_, v_sz_1350_);
if (v___x_1353_ == 0)
{
return v_bs_1352_;
}
else
{
lean_object* v_v_1354_; lean_object* v___x_1355_; lean_object* v_bs_x27_1356_; lean_object* v___x_1357_; size_t v___x_1358_; size_t v___x_1359_; lean_object* v___x_1360_; 
v_v_1354_ = lean_array_uget(v_bs_1352_, v_i_1351_);
v___x_1355_ = lean_unsigned_to_nat(0u);
v_bs_x27_1356_ = lean_array_uset(v_bs_1352_, v_i_1351_, v___x_1355_);
v___x_1357_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v_b_1349_, v_v_1354_);
v___x_1358_ = ((size_t)1ULL);
v___x_1359_ = lean_usize_add(v_i_1351_, v___x_1358_);
v___x_1360_ = lean_array_uset(v_bs_x27_1356_, v_i_1351_, v___x_1357_);
v_i_1351_ = v___x_1359_;
v_bs_1352_ = v___x_1360_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___boxed(lean_object* v_b_1362_, lean_object* v_sz_1363_, lean_object* v_i_1364_, lean_object* v_bs_1365_){
_start:
{
size_t v_sz_boxed_1366_; size_t v_i_boxed_1367_; lean_object* v_res_1368_; 
v_sz_boxed_1366_ = lean_unbox_usize(v_sz_1363_);
lean_dec(v_sz_1363_);
v_i_boxed_1367_ = lean_unbox_usize(v_i_1364_);
lean_dec(v_i_1364_);
v_res_1368_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(v_b_1362_, v_sz_boxed_1366_, v_i_boxed_1367_, v_bs_1365_);
lean_dec_ref(v_b_1362_);
return v_res_1368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg___boxed(lean_object* v_b_1369_, lean_object* v_key_1370_){
_start:
{
lean_object* v_res_1371_; 
v_res_1371_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v_b_1369_, v_key_1370_);
lean_dec_ref(v_b_1369_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie(lean_object* v_00_u03b1_1372_, lean_object* v_b_1373_, lean_object* v_key_1374_){
_start:
{
lean_object* v___x_1375_; 
v___x_1375_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v_b_1373_, v_key_1374_);
return v___x_1375_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___boxed(lean_object* v_00_u03b1_1376_, lean_object* v_b_1377_, lean_object* v_key_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie(v_00_u03b1_1376_, v_b_1377_, v_key_1378_);
lean_dec_ref(v_b_1377_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0(lean_object* v_00_u03b2_1380_, lean_object* v_m_1381_, lean_object* v_a_1382_){
_start:
{
lean_object* v___x_1383_; 
v___x_1383_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_m_1381_, v_a_1382_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___boxed(lean_object* v_00_u03b2_1384_, lean_object* v_m_1385_, lean_object* v_a_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0(v_00_u03b2_1384_, v_m_1385_, v_a_1386_);
lean_dec(v_a_1386_);
lean_dec_ref(v_m_1385_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1(lean_object* v_00_u03b1_1388_, lean_object* v_cs_1389_){
_start:
{
lean_object* v___x_1390_; 
v___x_1390_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(v_cs_1389_);
return v___x_1390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___boxed(lean_object* v_00_u03b1_1391_, lean_object* v_cs_1392_){
_start:
{
lean_object* v_res_1393_; 
v_res_1393_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1(v_00_u03b1_1391_, v_cs_1392_);
lean_dec_ref(v_cs_1392_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2(lean_object* v_00_u03b1_1394_, lean_object* v_b_1395_, size_t v_sz_1396_, size_t v_i_1397_, lean_object* v_bs_1398_){
_start:
{
lean_object* v___x_1399_; 
v___x_1399_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(v_b_1395_, v_sz_1396_, v_i_1397_, v_bs_1398_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___boxed(lean_object* v_00_u03b1_1400_, lean_object* v_b_1401_, lean_object* v_sz_1402_, lean_object* v_i_1403_, lean_object* v_bs_1404_){
_start:
{
size_t v_sz_boxed_1405_; size_t v_i_boxed_1406_; lean_object* v_res_1407_; 
v_sz_boxed_1405_ = lean_unbox_usize(v_sz_1402_);
lean_dec(v_sz_1402_);
v_i_boxed_1406_ = lean_unbox_usize(v_i_1403_);
lean_dec(v_i_1403_);
v_res_1407_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2(v_00_u03b1_1400_, v_b_1401_, v_sz_boxed_1405_, v_i_boxed_1406_, v_bs_1404_);
lean_dec_ref(v_b_1401_);
return v_res_1407_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3(lean_object* v_00_u03b1_1408_, lean_object* v_n_1409_, lean_object* v_as_1410_, lean_object* v_lo_1411_, lean_object* v_hi_1412_, lean_object* v_w_1413_, lean_object* v_hlo_1414_, lean_object* v_hhi_1415_){
_start:
{
lean_object* v___x_1416_; 
v___x_1416_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg(v_n_1409_, v_as_1410_, v_lo_1411_, v_hi_1412_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___boxed(lean_object* v_00_u03b1_1417_, lean_object* v_n_1418_, lean_object* v_as_1419_, lean_object* v_lo_1420_, lean_object* v_hi_1421_, lean_object* v_w_1422_, lean_object* v_hlo_1423_, lean_object* v_hhi_1424_){
_start:
{
lean_object* v_res_1425_; 
v_res_1425_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3(v_00_u03b1_1417_, v_n_1418_, v_as_1419_, v_lo_1420_, v_hi_1421_, v_w_1422_, v_hlo_1423_, v_hhi_1424_);
lean_dec(v_hi_1421_);
lean_dec(v_n_1418_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0(lean_object* v_00_u03b2_1426_, lean_object* v_a_1427_, lean_object* v_x_1428_){
_start:
{
lean_object* v___x_1429_; 
v___x_1429_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(v_a_1427_, v_x_1428_);
return v___x_1429_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1430_, lean_object* v_a_1431_, lean_object* v_x_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0(v_00_u03b2_1430_, v_a_1431_, v_x_1432_);
lean_dec(v_x_1432_);
lean_dec(v_a_1431_);
return v_res_1433_;
}
}
LEAN_EXPORT uint64_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3(lean_object* v_n_1434_, lean_object* v_inst_1435_, uint64_t v_a_1436_){
_start:
{
uint64_t v___x_1437_; 
v___x_1437_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___redArg(v_n_1434_, v_a_1436_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___boxed(lean_object* v_n_1438_, lean_object* v_inst_1439_, lean_object* v_a_1440_){
_start:
{
uint64_t v_a_boxed_1441_; uint64_t v_res_1442_; lean_object* v_r_1443_; 
v_a_boxed_1441_ = lean_unbox_uint64(v_a_1440_);
lean_dec_ref(v_a_1440_);
v_res_1442_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3(v_n_1438_, v_inst_1439_, v_a_boxed_1441_);
lean_dec(v_n_1438_);
v_r_1443_ = lean_box_uint64(v_res_1442_);
return v_r_1443_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4(lean_object* v_n_1444_, lean_object* v_00_u03b1_1445_, lean_object* v_cs_1446_, uint64_t v___x_1447_, lean_object* v___x_1448_, lean_object* v_inst_1449_, lean_object* v_a_1450_){
_start:
{
lean_object* v___x_1451_; 
v___x_1451_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___redArg(v_n_1444_, v_cs_1446_, v___x_1447_, v___x_1448_, v_a_1450_);
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___boxed(lean_object* v_n_1452_, lean_object* v_00_u03b1_1453_, lean_object* v_cs_1454_, lean_object* v___x_1455_, lean_object* v___x_1456_, lean_object* v_inst_1457_, lean_object* v_a_1458_){
_start:
{
uint64_t v___x_2204__boxed_1459_; lean_object* v_res_1460_; 
v___x_2204__boxed_1459_ = lean_unbox_uint64(v___x_1455_);
lean_dec_ref(v___x_1455_);
v_res_1460_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4(v_n_1452_, v_00_u03b1_1453_, v_cs_1454_, v___x_2204__boxed_1459_, v___x_1456_, v_inst_1457_, v_a_1458_);
lean_dec(v___x_1456_);
lean_dec_ref(v_cs_1454_);
lean_dec(v_n_1452_);
return v_res_1460_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5(lean_object* v_n_1461_, lean_object* v_00_u03b1_1462_, lean_object* v_cs_1463_, uint64_t v___x_1464_, lean_object* v___x_1465_, lean_object* v_inst_1466_, lean_object* v_a_1467_){
_start:
{
lean_object* v___x_1468_; 
v___x_1468_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___redArg(v_n_1461_, v_cs_1463_, v___x_1464_, v___x_1465_, v_a_1467_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___boxed(lean_object* v_n_1469_, lean_object* v_00_u03b1_1470_, lean_object* v_cs_1471_, lean_object* v___x_1472_, lean_object* v___x_1473_, lean_object* v_inst_1474_, lean_object* v_a_1475_){
_start:
{
uint64_t v___x_2215__boxed_1476_; lean_object* v_res_1477_; 
v___x_2215__boxed_1476_ = lean_unbox_uint64(v___x_1472_);
lean_dec_ref(v___x_1472_);
v_res_1477_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5(v_n_1469_, v_00_u03b1_1470_, v_cs_1471_, v___x_2215__boxed_1476_, v___x_1473_, v_inst_1474_, v_a_1475_);
lean_dec(v___x_1473_);
lean_dec_ref(v_cs_1471_);
lean_dec(v_n_1469_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__6(lean_object* v_00_u03b1_1478_, lean_object* v_as_1479_, size_t v_sz_1480_, size_t v_i_1481_, lean_object* v_b_1482_){
_start:
{
lean_object* v___x_1483_; 
v___x_1483_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__6___redArg(v_as_1479_, v_sz_1480_, v_i_1481_, v_b_1482_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__6___boxed(lean_object* v_00_u03b1_1484_, lean_object* v_as_1485_, lean_object* v_sz_1486_, lean_object* v_i_1487_, lean_object* v_b_1488_){
_start:
{
size_t v_sz_boxed_1489_; size_t v_i_boxed_1490_; lean_object* v_res_1491_; 
v_sz_boxed_1489_ = lean_unbox_usize(v_sz_1486_);
lean_dec(v_sz_1486_);
v_i_boxed_1490_ = lean_unbox_usize(v_i_1487_);
lean_dec(v_i_1487_);
v_res_1491_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__6(v_00_u03b1_1484_, v_as_1485_, v_sz_boxed_1489_, v_i_boxed_1490_, v_b_1488_);
lean_dec_ref(v_as_1485_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__9(lean_object* v_00_u03b1_1492_, lean_object* v_n_1493_, lean_object* v_lo_1494_, lean_object* v_hi_1495_, lean_object* v_hhi_1496_, lean_object* v_pivot_1497_, lean_object* v_as_1498_, lean_object* v_i_1499_, lean_object* v_k_1500_, lean_object* v_ilo_1501_, lean_object* v_ik_1502_, lean_object* v_w_1503_){
_start:
{
lean_object* v___x_1504_; 
v___x_1504_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__9___redArg(v_hi_1495_, v_pivot_1497_, v_as_1498_, v_i_1499_, v_k_1500_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__9___boxed(lean_object* v_00_u03b1_1505_, lean_object* v_n_1506_, lean_object* v_lo_1507_, lean_object* v_hi_1508_, lean_object* v_hhi_1509_, lean_object* v_pivot_1510_, lean_object* v_as_1511_, lean_object* v_i_1512_, lean_object* v_k_1513_, lean_object* v_ilo_1514_, lean_object* v_ik_1515_, lean_object* v_w_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__9(v_00_u03b1_1505_, v_n_1506_, v_lo_1507_, v_hi_1508_, v_hhi_1509_, v_pivot_1510_, v_as_1511_, v_i_1512_, v_k_1513_, v_ilo_1514_, v_ik_1515_, v_w_1516_);
lean_dec_ref(v_pivot_1510_);
lean_dec(v_hi_1508_);
lean_dec(v_lo_1507_);
lean_dec(v_n_1506_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5_spec__6(lean_object* v___x_1518_, lean_object* v_n_1519_, lean_object* v_00_u03b1_1520_, lean_object* v_cs_1521_, uint64_t v___x_1522_, lean_object* v_inst_1523_, lean_object* v_a_1524_){
_start:
{
lean_object* v___x_1525_; 
v___x_1525_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5_spec__6___redArg(v___x_1518_, v_n_1519_, v_cs_1521_, v___x_1522_, v_a_1524_);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5_spec__6___boxed(lean_object* v___x_1526_, lean_object* v_n_1527_, lean_object* v_00_u03b1_1528_, lean_object* v_cs_1529_, lean_object* v___x_1530_, lean_object* v_inst_1531_, lean_object* v_a_1532_){
_start:
{
uint64_t v___x_2231__boxed_1533_; lean_object* v_res_1534_; 
v___x_2231__boxed_1533_ = lean_unbox_uint64(v___x_1530_);
lean_dec_ref(v___x_1530_);
v_res_1534_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5_spec__6(v___x_1526_, v_n_1527_, v_00_u03b1_1528_, v_cs_1529_, v___x_2231__boxed_1533_, v_inst_1531_, v_a_1532_);
lean_dec_ref(v_cs_1529_);
lean_dec(v_n_1527_);
lean_dec(v___x_1526_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0_spec__0___redArg(lean_object* v_a_1535_, lean_object* v_b_1536_, lean_object* v_x_1537_){
_start:
{
if (lean_obj_tag(v_x_1537_) == 0)
{
lean_dec(v_b_1536_);
lean_dec(v_a_1535_);
return v_x_1537_;
}
else
{
lean_object* v_key_1538_; lean_object* v_value_1539_; lean_object* v_tail_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1552_; 
v_key_1538_ = lean_ctor_get(v_x_1537_, 0);
v_value_1539_ = lean_ctor_get(v_x_1537_, 1);
v_tail_1540_ = lean_ctor_get(v_x_1537_, 2);
v_isSharedCheck_1552_ = !lean_is_exclusive(v_x_1537_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1542_ = v_x_1537_;
v_isShared_1543_ = v_isSharedCheck_1552_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_tail_1540_);
lean_inc(v_value_1539_);
lean_inc(v_key_1538_);
lean_dec(v_x_1537_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1552_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
uint8_t v___x_1544_; 
v___x_1544_ = lean_name_eq(v_key_1538_, v_a_1535_);
if (v___x_1544_ == 0)
{
lean_object* v___x_1545_; lean_object* v___x_1547_; 
v___x_1545_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0_spec__0___redArg(v_a_1535_, v_b_1536_, v_tail_1540_);
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 2, v___x_1545_);
v___x_1547_ = v___x_1542_;
goto v_reusejp_1546_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v_key_1538_);
lean_ctor_set(v_reuseFailAlloc_1548_, 1, v_value_1539_);
lean_ctor_set(v_reuseFailAlloc_1548_, 2, v___x_1545_);
v___x_1547_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1546_;
}
v_reusejp_1546_:
{
return v___x_1547_;
}
}
else
{
lean_object* v___x_1550_; 
lean_dec(v_value_1539_);
lean_dec(v_key_1538_);
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 1, v_b_1536_);
lean_ctor_set(v___x_1542_, 0, v_a_1535_);
v___x_1550_ = v___x_1542_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v_a_1535_);
lean_ctor_set(v_reuseFailAlloc_1551_, 1, v_b_1536_);
lean_ctor_set(v_reuseFailAlloc_1551_, 2, v_tail_1540_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0___redArg(lean_object* v_m_1553_, lean_object* v_a_1554_, lean_object* v_b_1555_){
_start:
{
lean_object* v_size_1556_; lean_object* v_buckets_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1603_; 
v_size_1556_ = lean_ctor_get(v_m_1553_, 0);
v_buckets_1557_ = lean_ctor_get(v_m_1553_, 1);
v_isSharedCheck_1603_ = !lean_is_exclusive(v_m_1553_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1559_ = v_m_1553_;
v_isShared_1560_ = v_isSharedCheck_1603_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_buckets_1557_);
lean_inc(v_size_1556_);
lean_dec(v_m_1553_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1603_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1561_; uint64_t v___y_1563_; 
v___x_1561_ = lean_array_get_size(v_buckets_1557_);
if (lean_obj_tag(v_a_1554_) == 0)
{
uint64_t v___x_1601_; 
v___x_1601_ = 1723ULL;
v___y_1563_ = v___x_1601_;
goto v___jp_1562_;
}
else
{
uint64_t v_hash_1602_; 
v_hash_1602_ = lean_ctor_get_uint64(v_a_1554_, sizeof(void*)*2);
v___y_1563_ = v_hash_1602_;
goto v___jp_1562_;
}
v___jp_1562_:
{
uint64_t v___x_1564_; uint64_t v___x_1565_; uint64_t v_fold_1566_; uint64_t v___x_1567_; uint64_t v___x_1568_; uint64_t v___x_1569_; size_t v___x_1570_; size_t v___x_1571_; size_t v___x_1572_; size_t v___x_1573_; size_t v___x_1574_; lean_object* v_bkt_1575_; uint8_t v___x_1576_; 
v___x_1564_ = 32ULL;
v___x_1565_ = lean_uint64_shift_right(v___y_1563_, v___x_1564_);
v_fold_1566_ = lean_uint64_xor(v___y_1563_, v___x_1565_);
v___x_1567_ = 16ULL;
v___x_1568_ = lean_uint64_shift_right(v_fold_1566_, v___x_1567_);
v___x_1569_ = lean_uint64_xor(v_fold_1566_, v___x_1568_);
v___x_1570_ = lean_uint64_to_usize(v___x_1569_);
v___x_1571_ = lean_usize_of_nat(v___x_1561_);
v___x_1572_ = ((size_t)1ULL);
v___x_1573_ = lean_usize_sub(v___x_1571_, v___x_1572_);
v___x_1574_ = lean_usize_land(v___x_1570_, v___x_1573_);
v_bkt_1575_ = lean_array_uget_borrowed(v_buckets_1557_, v___x_1574_);
v___x_1576_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_1554_, v_bkt_1575_);
if (v___x_1576_ == 0)
{
lean_object* v___x_1577_; lean_object* v_size_x27_1578_; lean_object* v___x_1579_; lean_object* v_buckets_x27_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; uint8_t v___x_1586_; 
v___x_1577_ = lean_unsigned_to_nat(1u);
v_size_x27_1578_ = lean_nat_add(v_size_1556_, v___x_1577_);
lean_dec(v_size_1556_);
lean_inc(v_bkt_1575_);
v___x_1579_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1579_, 0, v_a_1554_);
lean_ctor_set(v___x_1579_, 1, v_b_1555_);
lean_ctor_set(v___x_1579_, 2, v_bkt_1575_);
v_buckets_x27_1580_ = lean_array_uset(v_buckets_1557_, v___x_1574_, v___x_1579_);
v___x_1581_ = lean_unsigned_to_nat(4u);
v___x_1582_ = lean_nat_mul(v_size_x27_1578_, v___x_1581_);
v___x_1583_ = lean_unsigned_to_nat(3u);
v___x_1584_ = lean_nat_div(v___x_1582_, v___x_1583_);
lean_dec(v___x_1582_);
v___x_1585_ = lean_array_get_size(v_buckets_x27_1580_);
v___x_1586_ = lean_nat_dec_le(v___x_1584_, v___x_1585_);
lean_dec(v___x_1584_);
if (v___x_1586_ == 0)
{
lean_object* v_val_1587_; lean_object* v___x_1589_; 
v_val_1587_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(v_buckets_x27_1580_);
if (v_isShared_1560_ == 0)
{
lean_ctor_set(v___x_1559_, 1, v_val_1587_);
lean_ctor_set(v___x_1559_, 0, v_size_x27_1578_);
v___x_1589_ = v___x_1559_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v_size_x27_1578_);
lean_ctor_set(v_reuseFailAlloc_1590_, 1, v_val_1587_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
else
{
lean_object* v___x_1592_; 
if (v_isShared_1560_ == 0)
{
lean_ctor_set(v___x_1559_, 1, v_buckets_x27_1580_);
lean_ctor_set(v___x_1559_, 0, v_size_x27_1578_);
v___x_1592_ = v___x_1559_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_size_x27_1578_);
lean_ctor_set(v_reuseFailAlloc_1593_, 1, v_buckets_x27_1580_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
return v___x_1592_;
}
}
}
else
{
lean_object* v___x_1594_; lean_object* v_buckets_x27_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1599_; 
lean_inc(v_bkt_1575_);
v___x_1594_ = lean_box(0);
v_buckets_x27_1595_ = lean_array_uset(v_buckets_1557_, v___x_1574_, v___x_1594_);
v___x_1596_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0_spec__0___redArg(v_a_1554_, v_b_1555_, v_bkt_1575_);
v___x_1597_ = lean_array_uset(v_buckets_x27_1595_, v___x_1574_, v___x_1596_);
if (v_isShared_1560_ == 0)
{
lean_ctor_set(v___x_1559_, 1, v___x_1597_);
v___x_1599_ = v___x_1559_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_size_1556_);
lean_ctor_set(v_reuseFailAlloc_1600_, 1, v___x_1597_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
return v___x_1599_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1___redArg(lean_object* v_as_1604_, size_t v_sz_1605_, size_t v_i_1606_, lean_object* v_b_1607_){
_start:
{
uint8_t v___x_1608_; 
v___x_1608_ = lean_usize_dec_lt(v_i_1606_, v_sz_1605_);
if (v___x_1608_ == 0)
{
return v_b_1607_;
}
else
{
lean_object* v_snd_1609_; lean_object* v_fst_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1653_; 
v_snd_1609_ = lean_ctor_get(v_b_1607_, 1);
v_fst_1610_ = lean_ctor_get(v_b_1607_, 0);
v_isSharedCheck_1653_ = !lean_is_exclusive(v_b_1607_);
if (v_isSharedCheck_1653_ == 0)
{
v___x_1612_ = v_b_1607_;
v_isShared_1613_ = v_isSharedCheck_1653_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_snd_1609_);
lean_inc(v_fst_1610_);
lean_dec(v_b_1607_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1653_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v_array_1614_; lean_object* v_start_1615_; lean_object* v_stop_1616_; uint8_t v___x_1617_; 
v_array_1614_ = lean_ctor_get(v_snd_1609_, 0);
v_start_1615_ = lean_ctor_get(v_snd_1609_, 1);
v_stop_1616_ = lean_ctor_get(v_snd_1609_, 2);
v___x_1617_ = lean_nat_dec_lt(v_start_1615_, v_stop_1616_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1619_; 
if (v_isShared_1613_ == 0)
{
v___x_1619_ = v___x_1612_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_fst_1610_);
lean_ctor_set(v_reuseFailAlloc_1620_, 1, v_snd_1609_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
else
{
lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1649_; 
lean_inc(v_stop_1616_);
lean_inc(v_start_1615_);
lean_inc_ref(v_array_1614_);
v_isSharedCheck_1649_ = !lean_is_exclusive(v_snd_1609_);
if (v_isSharedCheck_1649_ == 0)
{
lean_object* v_unused_1650_; lean_object* v_unused_1651_; lean_object* v_unused_1652_; 
v_unused_1650_ = lean_ctor_get(v_snd_1609_, 2);
lean_dec(v_unused_1650_);
v_unused_1651_ = lean_ctor_get(v_snd_1609_, 1);
lean_dec(v_unused_1651_);
v_unused_1652_ = lean_ctor_get(v_snd_1609_, 0);
lean_dec(v_unused_1652_);
v___x_1622_ = v_snd_1609_;
v_isShared_1623_ = v_isSharedCheck_1649_;
goto v_resetjp_1621_;
}
else
{
lean_dec(v_snd_1609_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1649_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v_values_1624_; lean_object* v_seen_1625_; lean_object* v_children_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1648_; 
v_values_1624_ = lean_ctor_get(v_fst_1610_, 0);
v_seen_1625_ = lean_ctor_get(v_fst_1610_, 1);
v_children_1626_ = lean_ctor_get(v_fst_1610_, 2);
v_isSharedCheck_1648_ = !lean_is_exclusive(v_fst_1610_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1628_ = v_fst_1610_;
v_isShared_1629_ = v_isSharedCheck_1648_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_children_1626_);
lean_inc(v_seen_1625_);
lean_inc(v_values_1624_);
lean_dec(v_fst_1610_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1648_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1630_; lean_object* v_a_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1635_; 
v___x_1630_ = lean_array_fget(v_array_1614_, v_start_1615_);
v_a_1631_ = lean_array_uget_borrowed(v_as_1604_, v_i_1606_);
v___x_1632_ = lean_unsigned_to_nat(1u);
v___x_1633_ = lean_nat_add(v_start_1615_, v___x_1632_);
lean_dec(v_start_1615_);
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 1, v___x_1633_);
v___x_1635_ = v___x_1622_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_array_1614_);
lean_ctor_set(v_reuseFailAlloc_1647_, 1, v___x_1633_);
lean_ctor_set(v_reuseFailAlloc_1647_, 2, v_stop_1616_);
v___x_1635_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
lean_object* v___x_1636_; lean_object* v___x_1638_; 
lean_inc(v_a_1631_);
v___x_1636_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0___redArg(v_values_1624_, v_a_1631_, v___x_1630_);
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 0, v___x_1636_);
v___x_1638_ = v___x_1628_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v___x_1636_);
lean_ctor_set(v_reuseFailAlloc_1646_, 1, v_seen_1625_);
lean_ctor_set(v_reuseFailAlloc_1646_, 2, v_children_1626_);
v___x_1638_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
lean_object* v___x_1639_; lean_object* v___x_1641_; 
lean_inc(v_a_1631_);
v___x_1639_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(v___x_1638_, v_a_1631_);
if (v_isShared_1613_ == 0)
{
lean_ctor_set(v___x_1612_, 1, v___x_1635_);
lean_ctor_set(v___x_1612_, 0, v___x_1639_);
v___x_1641_ = v___x_1612_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v___x_1639_);
lean_ctor_set(v_reuseFailAlloc_1645_, 1, v___x_1635_);
v___x_1641_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
size_t v___x_1642_; size_t v___x_1643_; 
v___x_1642_ = ((size_t)1ULL);
v___x_1643_ = lean_usize_add(v_i_1606_, v___x_1642_);
v_i_1606_ = v___x_1643_;
v_b_1607_ = v___x_1641_;
goto _start;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1___redArg___boxed(lean_object* v_as_1654_, lean_object* v_sz_1655_, lean_object* v_i_1656_, lean_object* v_b_1657_){
_start:
{
size_t v_sz_boxed_1658_; size_t v_i_boxed_1659_; lean_object* v_res_1660_; 
v_sz_boxed_1658_ = lean_unbox_usize(v_sz_1655_);
lean_dec(v_sz_1655_);
v_i_boxed_1659_ = lean_unbox_usize(v_i_1656_);
lean_dec(v_i_1656_);
v_res_1660_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1___redArg(v_as_1654_, v_sz_boxed_1658_, v_i_boxed_1659_, v_b_1657_);
lean_dec_ref(v_as_1654_);
return v_res_1660_;
}
}
static lean_object* _init_l_Lean_ConstTrie_ofArrays___redArg___closed__0(void){
_start:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1661_ = lean_box(0);
v___x_1662_ = lean_unsigned_to_nat(16u);
v___x_1663_ = lean_mk_array(v___x_1662_, v___x_1661_);
return v___x_1663_;
}
}
static lean_object* _init_l_Lean_ConstTrie_ofArrays___redArg___closed__1(void){
_start:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___x_1664_ = lean_obj_once(&l_Lean_ConstTrie_ofArrays___redArg___closed__0, &l_Lean_ConstTrie_ofArrays___redArg___closed__0_once, _init_l_Lean_ConstTrie_ofArrays___redArg___closed__0);
v___x_1665_ = lean_unsigned_to_nat(0u);
v___x_1666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1665_);
lean_ctor_set(v___x_1666_, 1, v___x_1664_);
return v___x_1666_;
}
}
static lean_object* _init_l_Lean_ConstTrie_ofArrays___redArg___closed__2(void){
_start:
{
lean_object* v___x_1667_; lean_object* v_b_1668_; 
v___x_1667_ = lean_obj_once(&l_Lean_ConstTrie_ofArrays___redArg___closed__1, &l_Lean_ConstTrie_ofArrays___redArg___closed__1_once, _init_l_Lean_ConstTrie_ofArrays___redArg___closed__1);
v_b_1668_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_b_1668_, 0, v___x_1667_);
lean_ctor_set(v_b_1668_, 1, v___x_1667_);
lean_ctor_set(v_b_1668_, 2, v___x_1667_);
return v_b_1668_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___redArg(lean_object* v_names_1669_, lean_object* v_vals_1670_){
_start:
{
lean_object* v___x_1671_; lean_object* v_b_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; size_t v_sz_1676_; size_t v___x_1677_; lean_object* v___x_1678_; lean_object* v_fst_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; 
v___x_1671_ = lean_unsigned_to_nat(0u);
v_b_1672_ = lean_obj_once(&l_Lean_ConstTrie_ofArrays___redArg___closed__2, &l_Lean_ConstTrie_ofArrays___redArg___closed__2_once, _init_l_Lean_ConstTrie_ofArrays___redArg___closed__2);
v___x_1673_ = lean_array_get_size(v_vals_1670_);
v___x_1674_ = l_Array_toSubarray___redArg(v_vals_1670_, v___x_1671_, v___x_1673_);
v___x_1675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1675_, 0, v_b_1672_);
lean_ctor_set(v___x_1675_, 1, v___x_1674_);
v_sz_1676_ = lean_array_size(v_names_1669_);
v___x_1677_ = ((size_t)0ULL);
v___x_1678_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1___redArg(v_names_1669_, v_sz_1676_, v___x_1677_, v___x_1675_);
v_fst_1679_ = lean_ctor_get(v___x_1678_, 0);
lean_inc(v_fst_1679_);
lean_dec_ref(v___x_1678_);
v___x_1680_ = lean_box(0);
v___x_1681_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v_fst_1679_, v___x_1680_);
lean_dec(v_fst_1679_);
return v___x_1681_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___redArg___boxed(lean_object* v_names_1682_, lean_object* v_vals_1683_){
_start:
{
lean_object* v_res_1684_; 
v_res_1684_ = l_Lean_ConstTrie_ofArrays___redArg(v_names_1682_, v_vals_1683_);
lean_dec_ref(v_names_1682_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays(lean_object* v_00_u03b1_1685_, lean_object* v_names_1686_, lean_object* v_vals_1687_){
_start:
{
lean_object* v___x_1688_; 
v___x_1688_ = l_Lean_ConstTrie_ofArrays___redArg(v_names_1686_, v_vals_1687_);
return v___x_1688_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___boxed(lean_object* v_00_u03b1_1689_, lean_object* v_names_1690_, lean_object* v_vals_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l_Lean_ConstTrie_ofArrays(v_00_u03b1_1689_, v_names_1690_, v_vals_1691_);
lean_dec_ref(v_names_1690_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0(lean_object* v_00_u03b2_1693_, lean_object* v_m_1694_, lean_object* v_a_1695_, lean_object* v_b_1696_){
_start:
{
lean_object* v___x_1697_; 
v___x_1697_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0___redArg(v_m_1694_, v_a_1695_, v_b_1696_);
return v___x_1697_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1(lean_object* v_00_u03b1_1698_, lean_object* v_as_1699_, size_t v_sz_1700_, size_t v_i_1701_, lean_object* v_b_1702_){
_start:
{
lean_object* v___x_1703_; 
v___x_1703_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1___redArg(v_as_1699_, v_sz_1700_, v_i_1701_, v_b_1702_);
return v___x_1703_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1___boxed(lean_object* v_00_u03b1_1704_, lean_object* v_as_1705_, lean_object* v_sz_1706_, lean_object* v_i_1707_, lean_object* v_b_1708_){
_start:
{
size_t v_sz_boxed_1709_; size_t v_i_boxed_1710_; lean_object* v_res_1711_; 
v_sz_boxed_1709_ = lean_unbox_usize(v_sz_1706_);
lean_dec(v_sz_1706_);
v_i_boxed_1710_ = lean_unbox_usize(v_i_1707_);
lean_dec(v_i_1707_);
v_res_1711_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1(v_00_u03b1_1704_, v_as_1705_, v_sz_boxed_1709_, v_i_boxed_1710_, v_b_1708_);
lean_dec_ref(v_as_1705_);
return v_res_1711_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0_spec__0(lean_object* v_00_u03b2_1712_, lean_object* v_a_1713_, lean_object* v_b_1714_, lean_object* v_x_1715_){
_start:
{
lean_object* v___x_1716_; 
v___x_1716_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0_spec__0___redArg(v_a_1713_, v_b_1714_, v_x_1715_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0(lean_object* v_as_1717_, size_t v_sz_1718_, size_t v_i_1719_, lean_object* v_b_1720_){
_start:
{
uint8_t v___x_1721_; 
v___x_1721_ = lean_usize_dec_lt(v_i_1719_, v_sz_1718_);
if (v___x_1721_ == 0)
{
return v_b_1720_;
}
else
{
lean_object* v_values_1722_; lean_object* v_seen_1723_; lean_object* v_children_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1738_; 
v_values_1722_ = lean_ctor_get(v_b_1720_, 0);
v_seen_1723_ = lean_ctor_get(v_b_1720_, 1);
v_children_1724_ = lean_ctor_get(v_b_1720_, 2);
v_isSharedCheck_1738_ = !lean_is_exclusive(v_b_1720_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1726_ = v_b_1720_;
v_isShared_1727_ = v_isSharedCheck_1738_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_children_1724_);
lean_inc(v_seen_1723_);
lean_inc(v_values_1722_);
lean_dec(v_b_1720_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1738_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v_a_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1732_; 
v_a_1728_ = lean_array_uget_borrowed(v_as_1717_, v_i_1719_);
v___x_1729_ = lean_box(0);
lean_inc(v_a_1728_);
v___x_1730_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0___redArg(v_values_1722_, v_a_1728_, v___x_1729_);
if (v_isShared_1727_ == 0)
{
lean_ctor_set(v___x_1726_, 0, v___x_1730_);
v___x_1732_ = v___x_1726_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v___x_1730_);
lean_ctor_set(v_reuseFailAlloc_1737_, 1, v_seen_1723_);
lean_ctor_set(v_reuseFailAlloc_1737_, 2, v_children_1724_);
v___x_1732_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
lean_object* v___x_1733_; size_t v___x_1734_; size_t v___x_1735_; 
lean_inc(v_a_1728_);
v___x_1733_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(v___x_1732_, v_a_1728_);
v___x_1734_ = ((size_t)1ULL);
v___x_1735_ = lean_usize_add(v_i_1719_, v___x_1734_);
v_i_1719_ = v___x_1735_;
v_b_1720_ = v___x_1733_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0___boxed(lean_object* v_as_1739_, lean_object* v_sz_1740_, lean_object* v_i_1741_, lean_object* v_b_1742_){
_start:
{
size_t v_sz_boxed_1743_; size_t v_i_boxed_1744_; lean_object* v_res_1745_; 
v_sz_boxed_1743_ = lean_unbox_usize(v_sz_1740_);
lean_dec(v_sz_1740_);
v_i_boxed_1744_ = lean_unbox_usize(v_i_1741_);
lean_dec(v_i_1741_);
v_res_1745_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0(v_as_1739_, v_sz_boxed_1743_, v_i_boxed_1744_, v_b_1742_);
lean_dec_ref(v_as_1739_);
return v_res_1745_;
}
}
static lean_object* _init_l_Lean_ConstTrie_ofNames___closed__0(void){
_start:
{
lean_object* v___x_1746_; lean_object* v_b_1747_; 
v___x_1746_ = lean_obj_once(&l_Lean_ConstTrie_ofArrays___redArg___closed__1, &l_Lean_ConstTrie_ofArrays___redArg___closed__1_once, _init_l_Lean_ConstTrie_ofArrays___redArg___closed__1);
v_b_1747_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_b_1747_, 0, v___x_1746_);
lean_ctor_set(v_b_1747_, 1, v___x_1746_);
lean_ctor_set(v_b_1747_, 2, v___x_1746_);
return v_b_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofNames(lean_object* v_names_1748_){
_start:
{
lean_object* v_b_1749_; size_t v_sz_1750_; size_t v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; 
v_b_1749_ = lean_obj_once(&l_Lean_ConstTrie_ofNames___closed__0, &l_Lean_ConstTrie_ofNames___closed__0_once, _init_l_Lean_ConstTrie_ofNames___closed__0);
v_sz_1750_ = lean_array_size(v_names_1748_);
v___x_1751_ = ((size_t)0ULL);
v___x_1752_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0(v_names_1748_, v_sz_1750_, v___x_1751_, v_b_1749_);
v___x_1753_ = lean_box(0);
v___x_1754_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v___x_1752_, v___x_1753_);
lean_dec_ref(v___x_1752_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofNames___boxed(lean_object* v_names_1755_){
_start:
{
lean_object* v_res_1756_; 
v_res_1756_ = l_Lean_ConstTrie_ofNames(v_names_1755_);
lean_dec_ref(v_names_1755_);
return v_res_1756_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorIdx___redArg(lean_object* v_x_1757_){
_start:
{
switch(lean_obj_tag(v_x_1757_))
{
case 0:
{
lean_object* v___x_1758_; 
v___x_1758_ = lean_unsigned_to_nat(0u);
return v___x_1758_;
}
case 1:
{
lean_object* v___x_1759_; 
v___x_1759_ = lean_unsigned_to_nat(1u);
return v___x_1759_;
}
default: 
{
lean_object* v___x_1760_; 
v___x_1760_ = lean_unsigned_to_nat(2u);
return v___x_1760_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorIdx___redArg___boxed(lean_object* v_x_1761_){
_start:
{
lean_object* v_res_1762_; 
v_res_1762_ = l_Lean_ImportedConsts_ctorIdx___redArg(v_x_1761_);
lean_dec_ref(v_x_1761_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorIdx(lean_object* v_00_u03b1_1763_, lean_object* v_x_1764_){
_start:
{
lean_object* v___x_1765_; 
v___x_1765_ = l_Lean_ImportedConsts_ctorIdx___redArg(v_x_1764_);
return v___x_1765_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorIdx___boxed(lean_object* v_00_u03b1_1766_, lean_object* v_x_1767_){
_start:
{
lean_object* v_res_1768_; 
v_res_1768_ = l_Lean_ImportedConsts_ctorIdx(v_00_u03b1_1766_, v_x_1767_);
lean_dec_ref(v_x_1767_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorElim___redArg(lean_object* v_t_1769_, lean_object* v_k_1770_){
_start:
{
switch(lean_obj_tag(v_t_1769_))
{
case 0:
{
lean_object* v_modIdx_1771_; lean_object* v_tree_1772_; lean_object* v___x_1773_; 
v_modIdx_1771_ = lean_ctor_get(v_t_1769_, 0);
lean_inc(v_modIdx_1771_);
v_tree_1772_ = lean_ctor_get(v_t_1769_, 1);
lean_inc_ref(v_tree_1772_);
lean_dec_ref_known(v_t_1769_, 2);
v___x_1773_ = lean_apply_2(v_k_1770_, v_modIdx_1771_, v_tree_1772_);
return v___x_1773_;
}
case 1:
{
lean_object* v_key_1774_; lean_object* v_entry_x3f_1775_; lean_object* v_children_1776_; lean_object* v_childIndex_1777_; lean_object* v___x_1778_; 
v_key_1774_ = lean_ctor_get(v_t_1769_, 0);
lean_inc(v_key_1774_);
v_entry_x3f_1775_ = lean_ctor_get(v_t_1769_, 1);
lean_inc(v_entry_x3f_1775_);
v_children_1776_ = lean_ctor_get(v_t_1769_, 2);
lean_inc_ref(v_children_1776_);
v_childIndex_1777_ = lean_ctor_get(v_t_1769_, 3);
lean_inc_ref(v_childIndex_1777_);
lean_dec_ref_known(v_t_1769_, 4);
v___x_1778_ = lean_apply_4(v_k_1770_, v_key_1774_, v_entry_x3f_1775_, v_children_1776_, v_childIndex_1777_);
return v___x_1778_;
}
default: 
{
lean_object* v_key_1779_; lean_object* v_entry_1780_; lean_object* v_expanded_1781_; lean_object* v___x_1782_; 
v_key_1779_ = lean_ctor_get(v_t_1769_, 0);
lean_inc(v_key_1779_);
v_entry_1780_ = lean_ctor_get(v_t_1769_, 1);
lean_inc_ref(v_entry_1780_);
v_expanded_1781_ = lean_ctor_get(v_t_1769_, 2);
lean_inc_ref(v_expanded_1781_);
lean_dec_ref_known(v_t_1769_, 3);
v___x_1782_ = lean_apply_3(v_k_1770_, v_key_1779_, v_entry_1780_, v_expanded_1781_);
return v___x_1782_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorElim(lean_object* v_00_u03b1_1783_, lean_object* v_motive__1_1784_, lean_object* v_ctorIdx_1785_, lean_object* v_t_1786_, lean_object* v_h_1787_, lean_object* v_k_1788_){
_start:
{
lean_object* v___x_1789_; 
v___x_1789_ = l_Lean_ImportedConsts_ctorElim___redArg(v_t_1786_, v_k_1788_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorElim___boxed(lean_object* v_00_u03b1_1790_, lean_object* v_motive__1_1791_, lean_object* v_ctorIdx_1792_, lean_object* v_t_1793_, lean_object* v_h_1794_, lean_object* v_k_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = l_Lean_ImportedConsts_ctorElim(v_00_u03b1_1790_, v_motive__1_1791_, v_ctorIdx_1792_, v_t_1793_, v_h_1794_, v_k_1795_);
lean_dec(v_ctorIdx_1792_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mod_elim___redArg(lean_object* v_t_1797_, lean_object* v_mod_1798_){
_start:
{
lean_object* v___x_1799_; 
v___x_1799_ = l_Lean_ImportedConsts_ctorElim___redArg(v_t_1797_, v_mod_1798_);
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mod_elim(lean_object* v_00_u03b1_1800_, lean_object* v_motive__1_1801_, lean_object* v_t_1802_, lean_object* v_h_1803_, lean_object* v_mod_1804_){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = l_Lean_ImportedConsts_ctorElim___redArg(v_t_1802_, v_mod_1804_);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_merged_elim___redArg(lean_object* v_t_1806_, lean_object* v_merged_1807_){
_start:
{
lean_object* v___x_1808_; 
v___x_1808_ = l_Lean_ImportedConsts_ctorElim___redArg(v_t_1806_, v_merged_1807_);
return v___x_1808_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_merged_elim(lean_object* v_00_u03b1_1809_, lean_object* v_motive__1_1810_, lean_object* v_t_1811_, lean_object* v_h_1812_, lean_object* v_merged_1813_){
_start:
{
lean_object* v___x_1814_; 
v___x_1814_ = l_Lean_ImportedConsts_ctorElim___redArg(v_t_1811_, v_merged_1813_);
return v___x_1814_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_lazy_elim___redArg(lean_object* v_t_1815_, lean_object* v_lazy_1816_){
_start:
{
lean_object* v___x_1817_; 
v___x_1817_ = l_Lean_ImportedConsts_ctorElim___redArg(v_t_1815_, v_lazy_1816_);
return v___x_1817_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_lazy_elim(lean_object* v_00_u03b1_1818_, lean_object* v_motive__1_1819_, lean_object* v_t_1820_, lean_object* v_h_1821_, lean_object* v_lazy_1822_){
_start:
{
lean_object* v___x_1823_; 
v___x_1823_ = l_Lean_ImportedConsts_ctorElim___redArg(v_t_1820_, v_lazy_1822_);
return v___x_1823_;
}
}
static lean_object* _init_l_Lean_instInhabitedImportedConsts___closed__1(void){
_start:
{
lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
v___x_1826_ = l_ByteArray_empty;
v___x_1827_ = ((lean_object*)(l_Lean_instInhabitedImportedConsts___closed__0));
v___x_1828_ = lean_box(0);
v___x_1829_ = lean_box(0);
v___x_1830_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1830_, 0, v___x_1829_);
lean_ctor_set(v___x_1830_, 1, v___x_1828_);
lean_ctor_set(v___x_1830_, 2, v___x_1827_);
lean_ctor_set(v___x_1830_, 3, v___x_1826_);
return v___x_1830_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts(lean_object* v_00_u03b1_1831_){
_start:
{
lean_object* v___x_1832_; 
v___x_1832_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__1, &l_Lean_instInhabitedImportedConsts___closed__1_once, _init_l_Lean_instInhabitedImportedConsts___closed__1);
return v___x_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty(lean_object* v_00_u03b1_1833_){
_start:
{
lean_object* v___x_1834_; 
v___x_1834_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__1, &l_Lean_instInhabitedImportedConsts___closed__1_once, _init_l_Lean_instInhabitedImportedConsts___closed__1);
return v___x_1834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(lean_object* v_x_1835_){
_start:
{
if (lean_obj_tag(v_x_1835_) == 0)
{
lean_object* v_tree_1836_; lean_object* v_key_1837_; 
v_tree_1836_ = lean_ctor_get(v_x_1835_, 1);
v_key_1837_ = lean_ctor_get(v_tree_1836_, 0);
lean_inc(v_key_1837_);
return v_key_1837_;
}
else
{
lean_object* v_key_1838_; 
v_key_1838_ = lean_ctor_get(v_x_1835_, 0);
lean_inc(v_key_1838_);
return v_key_1838_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg___boxed(lean_object* v_x_1839_){
_start:
{
lean_object* v_res_1840_; 
v_res_1840_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v_x_1839_);
lean_dec_ref(v_x_1839_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key(lean_object* v_00_u03b1_1841_, lean_object* v_x_1842_){
_start:
{
lean_object* v___x_1843_; 
v___x_1843_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v_x_1842_);
return v___x_1843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___boxed(lean_object* v_00_u03b1_1844_, lean_object* v_x_1845_){
_start:
{
lean_object* v_res_1846_; 
v_res_1846_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key(v_00_u03b1_1844_, v_x_1845_);
lean_dec_ref(v_x_1845_);
return v_res_1846_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1847_; 
v___x_1847_ = l_Lean_instInhabitedImportedConsts(lean_box(0));
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg(lean_object* v_n_1848_, lean_object* v_cs_1849_, uint64_t v___x_1850_, lean_object* v___x_1851_, lean_object* v_a_1852_){
_start:
{
lean_object* v___x_1853_; uint8_t v___y_1855_; uint64_t v___y_1859_; uint8_t v___x_1867_; 
v___x_1853_ = lean_unsigned_to_nat(1u);
v___x_1867_ = lean_nat_dec_lt(v_a_1852_, v_n_1848_);
if (v___x_1867_ == 0)
{
v___y_1855_ = v___x_1867_;
goto v___jp_1854_;
}
else
{
lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; 
v___x_1868_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0);
v___x_1869_ = lean_array_get_borrowed(v___x_1868_, v_cs_1849_, v_a_1852_);
v___x_1870_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v___x_1869_);
if (lean_obj_tag(v___x_1870_) == 0)
{
uint64_t v___x_1871_; 
v___x_1871_ = 1723ULL;
v___y_1859_ = v___x_1871_;
goto v___jp_1858_;
}
else
{
uint64_t v_hash_1872_; 
v_hash_1872_ = lean_ctor_get_uint64(v___x_1870_, sizeof(void*)*2);
lean_dec(v___x_1870_);
v___y_1859_ = v_hash_1872_;
goto v___jp_1858_;
}
}
v___jp_1854_:
{
if (v___y_1855_ == 0)
{
return v_a_1852_;
}
else
{
lean_object* v___x_1856_; 
v___x_1856_ = lean_nat_add(v_a_1852_, v___x_1853_);
lean_dec(v_a_1852_);
v_a_1852_ = v___x_1856_;
goto _start;
}
}
v___jp_1858_:
{
uint64_t v___x_1860_; uint64_t v___x_1861_; uint64_t v___x_1862_; uint64_t v___x_1863_; uint64_t v___x_1864_; lean_object* v___x_1865_; uint8_t v___x_1866_; 
v___x_1860_ = 48ULL;
v___x_1861_ = lean_uint64_shift_right(v___y_1859_, v___x_1860_);
v___x_1862_ = 16ULL;
v___x_1863_ = lean_uint64_sub(v___x_1862_, v___x_1850_);
v___x_1864_ = lean_uint64_shift_right(v___x_1861_, v___x_1863_);
v___x_1865_ = lean_uint64_to_nat(v___x_1864_);
v___x_1866_ = lean_nat_dec_lt(v___x_1865_, v___x_1851_);
lean_dec(v___x_1865_);
v___y_1855_ = v___x_1866_;
goto v___jp_1854_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___boxed(lean_object* v_n_1873_, lean_object* v_cs_1874_, lean_object* v___x_1875_, lean_object* v___x_1876_, lean_object* v_a_1877_){
_start:
{
uint64_t v___x_893__boxed_1878_; lean_object* v_res_1879_; 
v___x_893__boxed_1878_ = lean_unbox_uint64(v___x_1875_);
lean_dec_ref(v___x_1875_);
v_res_1879_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg(v_n_1873_, v_cs_1874_, v___x_893__boxed_1878_, v___x_1876_, v_a_1877_);
lean_dec(v___x_1876_);
lean_dec_ref(v_cs_1874_);
lean_dec(v_n_1873_);
return v_res_1879_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg(lean_object* v___x_1880_, lean_object* v_n_1881_, lean_object* v_cs_1882_, uint64_t v___x_1883_, lean_object* v_a_1884_){
_start:
{
lean_object* v_snd_1885_; lean_object* v_fst_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1914_; 
v_snd_1885_ = lean_ctor_get(v_a_1884_, 1);
v_fst_1886_ = lean_ctor_get(v_a_1884_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v_a_1884_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1888_ = v_a_1884_;
v_isShared_1889_ = v_isSharedCheck_1914_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_snd_1885_);
lean_inc(v_fst_1886_);
lean_dec(v_a_1884_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1914_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v_fst_1890_; lean_object* v_snd_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1913_; 
v_fst_1890_ = lean_ctor_get(v_snd_1885_, 0);
v_snd_1891_ = lean_ctor_get(v_snd_1885_, 1);
v_isSharedCheck_1913_ = !lean_is_exclusive(v_snd_1885_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1893_ = v_snd_1885_;
v_isShared_1894_ = v_isSharedCheck_1913_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_snd_1891_);
lean_inc(v_fst_1890_);
lean_dec(v_snd_1885_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1913_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
uint8_t v___x_1895_; 
v___x_1895_ = lean_nat_dec_lt(v_snd_1891_, v___x_1880_);
if (v___x_1895_ == 0)
{
lean_object* v___x_1897_; 
if (v_isShared_1894_ == 0)
{
v___x_1897_ = v___x_1893_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_fst_1890_);
lean_ctor_set(v_reuseFailAlloc_1901_, 1, v_snd_1891_);
v___x_1897_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
lean_object* v___x_1899_; 
if (v_isShared_1889_ == 0)
{
lean_ctor_set(v___x_1888_, 1, v___x_1897_);
v___x_1899_ = v___x_1888_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v_fst_1886_);
lean_ctor_set(v_reuseFailAlloc_1900_, 1, v___x_1897_);
v___x_1899_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
return v___x_1899_;
}
}
}
else
{
lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1907_; 
v___x_1902_ = lean_unsigned_to_nat(1u);
v___x_1903_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg(v_n_1881_, v_cs_1882_, v___x_1883_, v_snd_1891_, v_fst_1890_);
v___x_1904_ = l___private_Lean_ConstTrie_0__Lean_pushU16(v_fst_1886_, v___x_1903_);
v___x_1905_ = lean_nat_add(v_snd_1891_, v___x_1902_);
lean_dec(v_snd_1891_);
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 1, v___x_1905_);
lean_ctor_set(v___x_1893_, 0, v___x_1903_);
v___x_1907_ = v___x_1893_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v___x_1903_);
lean_ctor_set(v_reuseFailAlloc_1912_, 1, v___x_1905_);
v___x_1907_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
lean_object* v___x_1909_; 
if (v_isShared_1889_ == 0)
{
lean_ctor_set(v___x_1888_, 1, v___x_1907_);
lean_ctor_set(v___x_1888_, 0, v___x_1904_);
v___x_1909_ = v___x_1888_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v___x_1904_);
lean_ctor_set(v_reuseFailAlloc_1911_, 1, v___x_1907_);
v___x_1909_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
v_a_1884_ = v___x_1909_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v___x_1915_, lean_object* v_n_1916_, lean_object* v_cs_1917_, lean_object* v___x_1918_, lean_object* v_a_1919_){
_start:
{
uint64_t v___x_939__boxed_1920_; lean_object* v_res_1921_; 
v___x_939__boxed_1920_ = lean_unbox_uint64(v___x_1918_);
lean_dec_ref(v___x_1918_);
v_res_1921_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg(v___x_1915_, v_n_1916_, v_cs_1917_, v___x_939__boxed_1920_, v_a_1919_);
lean_dec_ref(v_cs_1917_);
lean_dec(v_n_1916_);
lean_dec(v___x_1915_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg(lean_object* v_n_1922_, lean_object* v_cs_1923_, uint64_t v___x_1924_, lean_object* v___x_1925_, lean_object* v_a_1926_){
_start:
{
lean_object* v_snd_1927_; lean_object* v_fst_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1956_; 
v_snd_1927_ = lean_ctor_get(v_a_1926_, 1);
v_fst_1928_ = lean_ctor_get(v_a_1926_, 0);
v_isSharedCheck_1956_ = !lean_is_exclusive(v_a_1926_);
if (v_isSharedCheck_1956_ == 0)
{
v___x_1930_ = v_a_1926_;
v_isShared_1931_ = v_isSharedCheck_1956_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_snd_1927_);
lean_inc(v_fst_1928_);
lean_dec(v_a_1926_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1956_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v_fst_1932_; lean_object* v_snd_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1955_; 
v_fst_1932_ = lean_ctor_get(v_snd_1927_, 0);
v_snd_1933_ = lean_ctor_get(v_snd_1927_, 1);
v_isSharedCheck_1955_ = !lean_is_exclusive(v_snd_1927_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1935_ = v_snd_1927_;
v_isShared_1936_ = v_isSharedCheck_1955_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_snd_1933_);
lean_inc(v_fst_1932_);
lean_dec(v_snd_1927_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1955_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
uint8_t v___x_1937_; 
v___x_1937_ = lean_nat_dec_lt(v_snd_1933_, v___x_1925_);
if (v___x_1937_ == 0)
{
lean_object* v___x_1939_; 
if (v_isShared_1936_ == 0)
{
v___x_1939_ = v___x_1935_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_fst_1932_);
lean_ctor_set(v_reuseFailAlloc_1943_, 1, v_snd_1933_);
v___x_1939_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
lean_object* v___x_1941_; 
if (v_isShared_1931_ == 0)
{
lean_ctor_set(v___x_1930_, 1, v___x_1939_);
v___x_1941_ = v___x_1930_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_fst_1928_);
lean_ctor_set(v_reuseFailAlloc_1942_, 1, v___x_1939_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
}
else
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1949_; 
v___x_1944_ = lean_unsigned_to_nat(1u);
v___x_1945_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg(v_n_1922_, v_cs_1923_, v___x_1924_, v_snd_1933_, v_fst_1932_);
v___x_1946_ = l___private_Lean_ConstTrie_0__Lean_pushU16(v_fst_1928_, v___x_1945_);
v___x_1947_ = lean_nat_add(v_snd_1933_, v___x_1944_);
lean_dec(v_snd_1933_);
if (v_isShared_1936_ == 0)
{
lean_ctor_set(v___x_1935_, 1, v___x_1947_);
lean_ctor_set(v___x_1935_, 0, v___x_1945_);
v___x_1949_ = v___x_1935_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v___x_1945_);
lean_ctor_set(v_reuseFailAlloc_1954_, 1, v___x_1947_);
v___x_1949_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
lean_object* v___x_1951_; 
if (v_isShared_1931_ == 0)
{
lean_ctor_set(v___x_1930_, 1, v___x_1949_);
lean_ctor_set(v___x_1930_, 0, v___x_1946_);
v___x_1951_ = v___x_1930_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v___x_1946_);
lean_ctor_set(v_reuseFailAlloc_1953_, 1, v___x_1949_);
v___x_1951_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
lean_object* v___x_1952_; 
v___x_1952_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg(v___x_1925_, v_n_1922_, v_cs_1923_, v___x_1924_, v___x_1951_);
return v___x_1952_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg___boxed(lean_object* v_n_1957_, lean_object* v_cs_1958_, lean_object* v___x_1959_, lean_object* v___x_1960_, lean_object* v_a_1961_){
_start:
{
uint64_t v___x_996__boxed_1962_; lean_object* v_res_1963_; 
v___x_996__boxed_1962_ = lean_unbox_uint64(v___x_1959_);
lean_dec_ref(v___x_1959_);
v_res_1963_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg(v_n_1957_, v_cs_1958_, v___x_996__boxed_1962_, v___x_1960_, v_a_1961_);
lean_dec(v___x_1960_);
lean_dec_ref(v_cs_1958_);
lean_dec(v_n_1957_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg(lean_object* v_as_1964_, size_t v_sz_1965_, size_t v_i_1966_, lean_object* v_b_1967_){
_start:
{
uint64_t v___y_1969_; uint8_t v___x_1977_; 
v___x_1977_ = lean_usize_dec_lt(v_i_1966_, v_sz_1965_);
if (v___x_1977_ == 0)
{
return v_b_1967_;
}
else
{
lean_object* v_a_1978_; lean_object* v___x_1979_; 
v_a_1978_ = lean_array_uget_borrowed(v_as_1964_, v_i_1966_);
v___x_1979_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v_a_1978_);
if (lean_obj_tag(v___x_1979_) == 0)
{
uint64_t v___x_1980_; 
v___x_1980_ = 1723ULL;
v___y_1969_ = v___x_1980_;
goto v___jp_1968_;
}
else
{
uint64_t v_hash_1981_; 
v_hash_1981_ = lean_ctor_get_uint64(v___x_1979_, sizeof(void*)*2);
lean_dec(v___x_1979_);
v___y_1969_ = v_hash_1981_;
goto v___jp_1968_;
}
}
v___jp_1968_:
{
uint64_t v___x_1970_; uint64_t v___x_1971_; uint8_t v___x_1972_; lean_object* v___x_1973_; size_t v___x_1974_; size_t v___x_1975_; 
v___x_1970_ = 40ULL;
v___x_1971_ = lean_uint64_shift_right(v___y_1969_, v___x_1970_);
v___x_1972_ = lean_uint64_to_uint8(v___x_1971_);
v___x_1973_ = lean_byte_array_push(v_b_1967_, v___x_1972_);
v___x_1974_ = ((size_t)1ULL);
v___x_1975_ = lean_usize_add(v_i_1966_, v___x_1974_);
v_i_1966_ = v___x_1975_;
v_b_1967_ = v___x_1973_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg___boxed(lean_object* v_as_1982_, lean_object* v_sz_1983_, lean_object* v_i_1984_, lean_object* v_b_1985_){
_start:
{
size_t v_sz_boxed_1986_; size_t v_i_boxed_1987_; lean_object* v_res_1988_; 
v_sz_boxed_1986_ = lean_unbox_usize(v_sz_1983_);
lean_dec(v_sz_1983_);
v_i_boxed_1987_ = lean_unbox_usize(v_i_1984_);
lean_dec(v_i_1984_);
v_res_1988_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg(v_as_1982_, v_sz_boxed_1986_, v_i_boxed_1987_, v_b_1985_);
lean_dec_ref(v_as_1982_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(lean_object* v_cs_1989_){
_start:
{
lean_object* v_n_1990_; lean_object* v_j_1991_; uint8_t v___x_1992_; 
v_n_1990_ = lean_array_get_size(v_cs_1989_);
v_j_1991_ = lean_unsigned_to_nat(0u);
v___x_1992_ = lean_nat_dec_eq(v_n_1990_, v_j_1991_);
if (v___x_1992_ == 0)
{
lean_object* v___x_1993_; uint8_t v___x_1994_; 
v___x_1993_ = lean_unsigned_to_nat(65535u);
v___x_1994_ = lean_nat_dec_lt(v_n_1990_, v___x_1993_);
if (v___x_1994_ == 0)
{
lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1995_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__14, &l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__14_once, _init_l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__14);
v___x_1996_ = l_panic___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2(v___x_1995_);
return v___x_1996_;
}
else
{
lean_object* v___x_1997_; uint64_t v_bits_1998_; uint64_t v___x_1999_; uint64_t v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; uint8_t v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v_fst_2013_; size_t v_sz_2014_; size_t v___x_2015_; lean_object* v___x_2016_; 
v___x_1997_ = lean_unsigned_to_nat(1u);
v_bits_1998_ = 1ULL;
v___x_1999_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___redArg(v_n_1990_, v_bits_1998_);
v___x_2000_ = lean_uint64_shift_left(v_bits_1998_, v___x_1999_);
v___x_2001_ = lean_uint64_to_nat(v___x_2000_);
v___x_2002_ = lean_nat_add(v___x_2001_, v___x_1997_);
lean_dec(v___x_2001_);
v___x_2003_ = lean_unsigned_to_nat(2u);
v___x_2004_ = lean_nat_mul(v___x_2003_, v___x_2002_);
v___x_2005_ = lean_nat_add(v___x_1997_, v___x_2004_);
lean_dec(v___x_2004_);
v___x_2006_ = lean_nat_add(v___x_2005_, v_n_1990_);
lean_dec(v___x_2005_);
v___x_2007_ = lean_mk_empty_byte_array(v___x_2006_);
lean_dec(v___x_2006_);
v___x_2008_ = lean_uint64_to_uint8(v___x_1999_);
v___x_2009_ = lean_byte_array_push(v___x_2007_, v___x_2008_);
v___x_2010_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__15));
v___x_2011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2011_, 0, v___x_2009_);
lean_ctor_set(v___x_2011_, 1, v___x_2010_);
v___x_2012_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg(v_n_1990_, v_cs_1989_, v___x_1999_, v___x_2002_, v___x_2011_);
lean_dec(v___x_2002_);
v_fst_2013_ = lean_ctor_get(v___x_2012_, 0);
lean_inc(v_fst_2013_);
lean_dec_ref(v___x_2012_);
v_sz_2014_ = lean_array_size(v_cs_1989_);
v___x_2015_ = ((size_t)0ULL);
v___x_2016_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg(v_cs_1989_, v_sz_2014_, v___x_2015_, v_fst_2013_);
return v___x_2016_;
}
}
else
{
lean_object* v___x_2017_; 
v___x_2017_ = l_ByteArray_empty;
return v___x_2017_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg___boxed(lean_object* v_cs_2018_){
_start:
{
lean_object* v_res_2019_; 
v_res_2019_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v_cs_2018_);
lean_dec_ref(v_cs_2018_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mkMerged___redArg(lean_object* v_key_2020_, lean_object* v_entry_x3f_2021_, lean_object* v_children_2022_){
_start:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; 
v___x_2023_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v_children_2022_);
v___x_2024_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2024_, 0, v_key_2020_);
lean_ctor_set(v___x_2024_, 1, v_entry_x3f_2021_);
lean_ctor_set(v___x_2024_, 2, v_children_2022_);
lean_ctor_set(v___x_2024_, 3, v___x_2023_);
return v___x_2024_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mkMerged(lean_object* v_00_u03b1_2025_, lean_object* v_key_2026_, lean_object* v_entry_x3f_2027_, lean_object* v_children_2028_){
_start:
{
lean_object* v___x_2029_; 
v___x_2029_ = l_Lean_ImportedConsts_mkMerged___redArg(v_key_2026_, v_entry_x3f_2027_, v_children_2028_);
return v___x_2029_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0(lean_object* v_00_u03b1_2030_, lean_object* v_cs_2031_){
_start:
{
lean_object* v___x_2032_; 
v___x_2032_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v_cs_2031_);
return v___x_2032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___boxed(lean_object* v_00_u03b1_2033_, lean_object* v_cs_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0(v_00_u03b1_2033_, v_cs_2034_);
lean_dec_ref(v_cs_2034_);
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0(lean_object* v_n_2036_, lean_object* v_00_u03b1_2037_, lean_object* v_cs_2038_, uint64_t v___x_2039_, lean_object* v___x_2040_, lean_object* v_inst_2041_, lean_object* v_a_2042_){
_start:
{
lean_object* v___x_2043_; 
v___x_2043_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg(v_n_2036_, v_cs_2038_, v___x_2039_, v___x_2040_, v_a_2042_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___boxed(lean_object* v_n_2044_, lean_object* v_00_u03b1_2045_, lean_object* v_cs_2046_, lean_object* v___x_2047_, lean_object* v___x_2048_, lean_object* v_inst_2049_, lean_object* v_a_2050_){
_start:
{
uint64_t v___x_1147__boxed_2051_; lean_object* v_res_2052_; 
v___x_1147__boxed_2051_ = lean_unbox_uint64(v___x_2047_);
lean_dec_ref(v___x_2047_);
v_res_2052_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0(v_n_2044_, v_00_u03b1_2045_, v_cs_2046_, v___x_1147__boxed_2051_, v___x_2048_, v_inst_2049_, v_a_2050_);
lean_dec(v___x_2048_);
lean_dec_ref(v_cs_2046_);
lean_dec(v_n_2044_);
return v_res_2052_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1(lean_object* v_n_2053_, lean_object* v_00_u03b1_2054_, lean_object* v_cs_2055_, uint64_t v___x_2056_, lean_object* v___x_2057_, lean_object* v_inst_2058_, lean_object* v_a_2059_){
_start:
{
lean_object* v___x_2060_; 
v___x_2060_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg(v_n_2053_, v_cs_2055_, v___x_2056_, v___x_2057_, v_a_2059_);
return v___x_2060_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___boxed(lean_object* v_n_2061_, lean_object* v_00_u03b1_2062_, lean_object* v_cs_2063_, lean_object* v___x_2064_, lean_object* v___x_2065_, lean_object* v_inst_2066_, lean_object* v_a_2067_){
_start:
{
uint64_t v___x_1158__boxed_2068_; lean_object* v_res_2069_; 
v___x_1158__boxed_2068_ = lean_unbox_uint64(v___x_2064_);
lean_dec_ref(v___x_2064_);
v_res_2069_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1(v_n_2061_, v_00_u03b1_2062_, v_cs_2063_, v___x_1158__boxed_2068_, v___x_2065_, v_inst_2066_, v_a_2067_);
lean_dec(v___x_2065_);
lean_dec_ref(v_cs_2063_);
lean_dec(v_n_2061_);
return v_res_2069_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2(lean_object* v_00_u03b1_2070_, lean_object* v_as_2071_, size_t v_sz_2072_, size_t v_i_2073_, lean_object* v_b_2074_){
_start:
{
lean_object* v___x_2075_; 
v___x_2075_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg(v_as_2071_, v_sz_2072_, v_i_2073_, v_b_2074_);
return v___x_2075_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___boxed(lean_object* v_00_u03b1_2076_, lean_object* v_as_2077_, lean_object* v_sz_2078_, lean_object* v_i_2079_, lean_object* v_b_2080_){
_start:
{
size_t v_sz_boxed_2081_; size_t v_i_boxed_2082_; lean_object* v_res_2083_; 
v_sz_boxed_2081_ = lean_unbox_usize(v_sz_2078_);
lean_dec(v_sz_2078_);
v_i_boxed_2082_ = lean_unbox_usize(v_i_2079_);
lean_dec(v_i_2079_);
v_res_2083_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2(v_00_u03b1_2076_, v_as_2077_, v_sz_boxed_2081_, v_i_boxed_2082_, v_b_2080_);
lean_dec_ref(v_as_2077_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2(lean_object* v___x_2084_, lean_object* v_n_2085_, lean_object* v_00_u03b1_2086_, lean_object* v_cs_2087_, uint64_t v___x_2088_, lean_object* v_inst_2089_, lean_object* v_a_2090_){
_start:
{
lean_object* v___x_2091_; 
v___x_2091_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg(v___x_2084_, v_n_2085_, v_cs_2087_, v___x_2088_, v_a_2090_);
return v___x_2091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___boxed(lean_object* v___x_2092_, lean_object* v_n_2093_, lean_object* v_00_u03b1_2094_, lean_object* v_cs_2095_, lean_object* v___x_2096_, lean_object* v_inst_2097_, lean_object* v_a_2098_){
_start:
{
uint64_t v___x_1172__boxed_2099_; lean_object* v_res_2100_; 
v___x_1172__boxed_2099_ = lean_unbox_uint64(v___x_2096_);
lean_dec_ref(v___x_2096_);
v_res_2100_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2(v___x_2092_, v_n_2093_, v_00_u03b1_2094_, v_cs_2095_, v___x_1172__boxed_2099_, v_inst_2097_, v_a_2098_);
lean_dec_ref(v_cs_2095_);
lean_dec(v_n_2093_);
lean_dec(v___x_2092_);
return v_res_2100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(lean_object* v_index_2101_, lean_object* v_cs_2102_, lean_object* v_k_2103_, uint8_t v_fp_2104_, lean_object* v_fpOff_2105_, lean_object* v_j_2106_, lean_object* v_hi_2107_){
_start:
{
uint8_t v___y_2113_; uint8_t v___x_2115_; 
v___x_2115_ = lean_nat_dec_lt(v_j_2106_, v_hi_2107_);
if (v___x_2115_ == 0)
{
lean_object* v___x_2116_; 
lean_dec(v_j_2106_);
v___x_2116_ = lean_box(0);
return v___x_2116_;
}
else
{
lean_object* v___x_2117_; uint8_t v___x_2118_; uint8_t v___x_2119_; 
v___x_2117_ = lean_nat_add(v_fpOff_2105_, v_j_2106_);
v___x_2118_ = lean_byte_array_get(v_index_2101_, v___x_2117_);
lean_dec(v___x_2117_);
v___x_2119_ = lean_uint8_dec_eq(v___x_2118_, v_fp_2104_);
if (v___x_2119_ == 0)
{
v___y_2113_ = v___x_2119_;
goto v___jp_2112_;
}
else
{
lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
v___x_2120_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0);
v___x_2121_ = lean_array_get_borrowed(v___x_2120_, v_cs_2102_, v_j_2106_);
v___x_2122_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v___x_2121_);
switch(lean_obj_tag(v___x_2122_))
{
case 0:
{
if (lean_obj_tag(v_k_2103_) == 0)
{
v___y_2113_ = v___x_2119_;
goto v___jp_2112_;
}
else
{
goto v___jp_2108_;
}
}
case 1:
{
if (lean_obj_tag(v_k_2103_) == 1)
{
lean_object* v_str_2123_; lean_object* v_str_2124_; uint8_t v___x_2125_; 
v_str_2123_ = lean_ctor_get(v___x_2122_, 1);
lean_inc_ref(v_str_2123_);
lean_dec_ref_known(v___x_2122_, 2);
v_str_2124_ = lean_ctor_get(v_k_2103_, 1);
v___x_2125_ = lean_string_dec_eq(v_str_2123_, v_str_2124_);
lean_dec_ref(v_str_2123_);
v___y_2113_ = v___x_2125_;
goto v___jp_2112_;
}
else
{
lean_dec_ref_known(v___x_2122_, 2);
goto v___jp_2108_;
}
}
default: 
{
if (lean_obj_tag(v_k_2103_) == 2)
{
lean_object* v_i_2126_; lean_object* v_i_2127_; uint8_t v___x_2128_; 
v_i_2126_ = lean_ctor_get(v___x_2122_, 1);
lean_inc(v_i_2126_);
lean_dec_ref_known(v___x_2122_, 2);
v_i_2127_ = lean_ctor_get(v_k_2103_, 1);
v___x_2128_ = lean_nat_dec_eq(v_i_2126_, v_i_2127_);
lean_dec(v_i_2126_);
v___y_2113_ = v___x_2128_;
goto v___jp_2112_;
}
else
{
lean_dec_ref_known(v___x_2122_, 2);
goto v___jp_2108_;
}
}
}
}
}
v___jp_2108_:
{
lean_object* v___x_2109_; lean_object* v___x_2110_; 
v___x_2109_ = lean_unsigned_to_nat(1u);
v___x_2110_ = lean_nat_add(v_j_2106_, v___x_2109_);
lean_dec(v_j_2106_);
v_j_2106_ = v___x_2110_;
goto _start;
}
v___jp_2112_:
{
if (v___y_2113_ == 0)
{
goto v___jp_2108_;
}
else
{
lean_object* v___x_2114_; 
v___x_2114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2114_, 0, v_j_2106_);
return v___x_2114_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg___boxed(lean_object* v_index_2129_, lean_object* v_cs_2130_, lean_object* v_k_2131_, lean_object* v_fp_2132_, lean_object* v_fpOff_2133_, lean_object* v_j_2134_, lean_object* v_hi_2135_){
_start:
{
uint8_t v_fp_boxed_2136_; lean_object* v_res_2137_; 
v_fp_boxed_2136_ = lean_unbox(v_fp_2132_);
v_res_2137_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(v_index_2129_, v_cs_2130_, v_k_2131_, v_fp_boxed_2136_, v_fpOff_2133_, v_j_2134_, v_hi_2135_);
lean_dec(v_hi_2135_);
lean_dec(v_fpOff_2133_);
lean_dec(v_k_2131_);
lean_dec_ref(v_cs_2130_);
lean_dec_ref(v_index_2129_);
return v_res_2137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(lean_object* v_index_2138_, lean_object* v_cs_2139_, lean_object* v_k_2140_){
_start:
{
lean_object* v___x_2141_; lean_object* v___x_2142_; uint64_t v___y_2144_; uint8_t v___x_2186_; 
v___x_2141_ = lean_byte_array_size(v_index_2138_);
v___x_2142_ = lean_unsigned_to_nat(0u);
v___x_2186_ = lean_nat_dec_eq(v___x_2141_, v___x_2142_);
if (v___x_2186_ == 0)
{
if (lean_obj_tag(v_k_2140_) == 0)
{
uint64_t v___x_2187_; 
v___x_2187_ = 1723ULL;
v___y_2144_ = v___x_2187_;
goto v___jp_2143_;
}
else
{
uint64_t v_hash_2188_; 
v_hash_2188_ = lean_ctor_get_uint64(v_k_2140_, sizeof(void*)*2);
v___y_2144_ = v_hash_2188_;
goto v___jp_2143_;
}
}
else
{
lean_object* v___x_2189_; 
v___x_2189_ = lean_box(0);
return v___x_2189_;
}
v___jp_2143_:
{
uint8_t v___x_2145_; uint64_t v_bits_2146_; uint64_t v___x_2147_; uint64_t v___x_2148_; uint64_t v___x_2149_; uint64_t v___x_2150_; uint64_t v___x_2151_; lean_object* v_slot_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; uint8_t v___x_2157_; uint32_t v___x_2158_; lean_object* v___x_2159_; uint8_t v___x_2160_; uint32_t v___x_2161_; uint32_t v___x_2162_; uint32_t v___x_2163_; uint32_t v___x_2164_; lean_object* v_lo_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; uint8_t v___x_2168_; uint32_t v___x_2169_; lean_object* v___x_2170_; uint8_t v___x_2171_; uint32_t v___x_2172_; uint32_t v___x_2173_; uint32_t v___x_2174_; lean_object* v_hi_2175_; uint64_t v___x_2176_; uint64_t v___x_2177_; uint64_t v___x_2178_; uint64_t v___x_2179_; uint64_t v___x_2180_; lean_object* v_fpOff_2181_; uint64_t v___x_2182_; uint64_t v___x_2183_; uint8_t v___x_2184_; lean_object* v___x_2185_; 
v___x_2145_ = lean_byte_array_get(v_index_2138_, v___x_2142_);
v_bits_2146_ = lean_uint8_to_uint64(v___x_2145_);
v___x_2147_ = 48ULL;
v___x_2148_ = lean_uint64_shift_right(v___y_2144_, v___x_2147_);
v___x_2149_ = 16ULL;
v___x_2150_ = lean_uint64_sub(v___x_2149_, v_bits_2146_);
v___x_2151_ = lean_uint64_shift_right(v___x_2148_, v___x_2150_);
v_slot_2152_ = lean_uint64_to_nat(v___x_2151_);
v___x_2153_ = lean_unsigned_to_nat(1u);
v___x_2154_ = lean_unsigned_to_nat(2u);
v___x_2155_ = lean_nat_mul(v___x_2154_, v_slot_2152_);
lean_dec(v_slot_2152_);
v___x_2156_ = lean_nat_add(v___x_2153_, v___x_2155_);
v___x_2157_ = lean_byte_array_get(v_index_2138_, v___x_2156_);
v___x_2158_ = lean_uint8_to_uint32(v___x_2157_);
v___x_2159_ = lean_nat_add(v___x_2156_, v___x_2153_);
lean_dec(v___x_2156_);
v___x_2160_ = lean_byte_array_get(v_index_2138_, v___x_2159_);
lean_dec(v___x_2159_);
v___x_2161_ = lean_uint8_to_uint32(v___x_2160_);
v___x_2162_ = 8;
v___x_2163_ = lean_uint32_shift_left(v___x_2161_, v___x_2162_);
v___x_2164_ = lean_uint32_lor(v___x_2158_, v___x_2163_);
v_lo_2165_ = lean_uint32_to_nat(v___x_2164_);
v___x_2166_ = lean_unsigned_to_nat(3u);
v___x_2167_ = lean_nat_add(v___x_2166_, v___x_2155_);
lean_dec(v___x_2155_);
v___x_2168_ = lean_byte_array_get(v_index_2138_, v___x_2167_);
v___x_2169_ = lean_uint8_to_uint32(v___x_2168_);
v___x_2170_ = lean_nat_add(v___x_2167_, v___x_2153_);
lean_dec(v___x_2167_);
v___x_2171_ = lean_byte_array_get(v_index_2138_, v___x_2170_);
lean_dec(v___x_2170_);
v___x_2172_ = lean_uint8_to_uint32(v___x_2171_);
v___x_2173_ = lean_uint32_shift_left(v___x_2172_, v___x_2162_);
v___x_2174_ = lean_uint32_lor(v___x_2169_, v___x_2173_);
v_hi_2175_ = lean_uint32_to_nat(v___x_2174_);
v___x_2176_ = 3ULL;
v___x_2177_ = 1ULL;
v___x_2178_ = lean_uint64_shift_left(v___x_2177_, v_bits_2146_);
v___x_2179_ = lean_uint64_shift_left(v___x_2178_, v___x_2177_);
v___x_2180_ = lean_uint64_add(v___x_2176_, v___x_2179_);
v_fpOff_2181_ = lean_uint64_to_nat(v___x_2180_);
v___x_2182_ = 40ULL;
v___x_2183_ = lean_uint64_shift_right(v___y_2144_, v___x_2182_);
v___x_2184_ = lean_uint64_to_uint8(v___x_2183_);
v___x_2185_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(v_index_2138_, v_cs_2139_, v_k_2140_, v___x_2184_, v_fpOff_2181_, v_lo_2165_, v_hi_2175_);
lean_dec(v_hi_2175_);
lean_dec(v_fpOff_2181_);
return v___x_2185_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg___boxed(lean_object* v_index_2190_, lean_object* v_cs_2191_, lean_object* v_k_2192_){
_start:
{
lean_object* v_res_2193_; 
v_res_2193_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_index_2190_, v_cs_2191_, v_k_2192_);
lean_dec(v_k_2192_);
lean_dec_ref(v_cs_2191_);
lean_dec_ref(v_index_2190_);
return v_res_2193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(lean_object* v_x_2194_, lean_object* v_x_2195_, lean_object* v_x_2196_){
_start:
{
switch(lean_obj_tag(v_x_2194_))
{
case 0:
{
lean_object* v_tree_2197_; lean_object* v___x_2198_; 
v_tree_2197_ = lean_ctor_get(v_x_2194_, 1);
lean_inc_ref(v_tree_2197_);
lean_dec_ref_known(v_x_2194_, 2);
v___x_2198_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_2197_, v_x_2195_, v_x_2196_);
lean_dec_ref(v_tree_2197_);
return v___x_2198_;
}
case 1:
{
lean_object* v_entry_x3f_2199_; lean_object* v_children_2200_; lean_object* v_childIndex_2201_; lean_object* v___x_2202_; uint8_t v___x_2203_; 
v_entry_x3f_2199_ = lean_ctor_get(v_x_2194_, 1);
lean_inc(v_entry_x3f_2199_);
v_children_2200_ = lean_ctor_get(v_x_2194_, 2);
lean_inc_ref(v_children_2200_);
v_childIndex_2201_ = lean_ctor_get(v_x_2194_, 3);
lean_inc_ref(v_childIndex_2201_);
lean_dec_ref_known(v_x_2194_, 4);
v___x_2202_ = lean_unsigned_to_nat(0u);
v___x_2203_ = lean_nat_dec_eq(v_x_2196_, v___x_2202_);
if (v___x_2203_ == 0)
{
lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
lean_dec(v_entry_x3f_2199_);
v___x_2204_ = lean_box(0);
v___x_2205_ = lean_unsigned_to_nat(1u);
v___x_2206_ = lean_nat_sub(v_x_2196_, v___x_2205_);
lean_dec(v_x_2196_);
v___x_2207_ = lean_array_get_borrowed(v___x_2204_, v_x_2195_, v___x_2206_);
v___x_2208_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_childIndex_2201_, v_children_2200_, v___x_2207_);
lean_dec_ref(v_childIndex_2201_);
if (lean_obj_tag(v___x_2208_) == 0)
{
lean_object* v___x_2209_; 
lean_dec(v___x_2206_);
lean_dec_ref(v_children_2200_);
v___x_2209_ = lean_box(0);
return v___x_2209_;
}
else
{
lean_object* v_val_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
v_val_2210_ = lean_ctor_get(v___x_2208_, 0);
lean_inc(v_val_2210_);
lean_dec_ref_known(v___x_2208_, 1);
v___x_2211_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0);
v___x_2212_ = lean_array_get(v___x_2211_, v_children_2200_, v_val_2210_);
lean_dec(v_val_2210_);
lean_dec_ref(v_children_2200_);
v_x_2194_ = v___x_2212_;
v_x_2196_ = v___x_2206_;
goto _start;
}
}
else
{
lean_dec_ref(v_childIndex_2201_);
lean_dec_ref(v_children_2200_);
lean_dec(v_x_2196_);
if (lean_obj_tag(v_entry_x3f_2199_) == 0)
{
lean_object* v___x_2214_; 
v___x_2214_ = lean_box(0);
return v___x_2214_;
}
else
{
lean_object* v_val_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2223_; 
v_val_2215_ = lean_ctor_get(v_entry_x3f_2199_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v_entry_x3f_2199_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2217_ = v_entry_x3f_2199_;
v_isShared_2218_ = v_isSharedCheck_2223_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_val_2215_);
lean_dec(v_entry_x3f_2199_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2223_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v_fst_2219_; lean_object* v___x_2221_; 
v_fst_2219_ = lean_ctor_get(v_val_2215_, 0);
lean_inc(v_fst_2219_);
lean_dec(v_val_2215_);
if (v_isShared_2218_ == 0)
{
lean_ctor_set(v___x_2217_, 0, v_fst_2219_);
v___x_2221_ = v___x_2217_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v_fst_2219_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
}
}
}
default: 
{
lean_object* v_entry_2224_; lean_object* v_expanded_2225_; lean_object* v___x_2226_; uint8_t v___x_2227_; 
v_entry_2224_ = lean_ctor_get(v_x_2194_, 1);
lean_inc_ref(v_entry_2224_);
v_expanded_2225_ = lean_ctor_get(v_x_2194_, 2);
lean_inc_ref(v_expanded_2225_);
lean_dec_ref_known(v_x_2194_, 3);
v___x_2226_ = lean_unsigned_to_nat(0u);
v___x_2227_ = lean_nat_dec_eq(v_x_2196_, v___x_2226_);
if (v___x_2227_ == 0)
{
lean_object* v___x_2228_; lean_object* v_fst_2229_; lean_object* v_snd_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; 
lean_dec_ref(v_entry_2224_);
v___x_2228_ = lean_thunk_get_own(v_expanded_2225_);
lean_dec_ref(v_expanded_2225_);
v_fst_2229_ = lean_ctor_get(v___x_2228_, 0);
lean_inc(v_fst_2229_);
v_snd_2230_ = lean_ctor_get(v___x_2228_, 1);
lean_inc(v_snd_2230_);
lean_dec(v___x_2228_);
v___x_2231_ = lean_box(0);
v___x_2232_ = lean_unsigned_to_nat(1u);
v___x_2233_ = lean_nat_sub(v_x_2196_, v___x_2232_);
lean_dec(v_x_2196_);
v___x_2234_ = lean_array_get_borrowed(v___x_2231_, v_x_2195_, v___x_2233_);
v___x_2235_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_snd_2230_, v_fst_2229_, v___x_2234_);
lean_dec(v_snd_2230_);
if (lean_obj_tag(v___x_2235_) == 0)
{
lean_object* v___x_2236_; 
lean_dec(v___x_2233_);
lean_dec(v_fst_2229_);
v___x_2236_ = lean_box(0);
return v___x_2236_;
}
else
{
lean_object* v_val_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
v_val_2237_ = lean_ctor_get(v___x_2235_, 0);
lean_inc(v_val_2237_);
lean_dec_ref_known(v___x_2235_, 1);
v___x_2238_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0);
v___x_2239_ = lean_array_get(v___x_2238_, v_fst_2229_, v_val_2237_);
lean_dec(v_val_2237_);
lean_dec(v_fst_2229_);
v_x_2194_ = v___x_2239_;
v_x_2196_ = v___x_2233_;
goto _start;
}
}
else
{
lean_object* v___x_2241_; 
lean_dec_ref(v_expanded_2225_);
lean_dec(v_x_2196_);
v___x_2241_ = lean_thunk_get_own(v_entry_2224_);
lean_dec_ref(v_entry_2224_);
if (lean_obj_tag(v___x_2241_) == 0)
{
lean_object* v___x_2242_; 
v___x_2242_ = lean_box(0);
return v___x_2242_;
}
else
{
lean_object* v_val_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2251_; 
v_val_2243_ = lean_ctor_get(v___x_2241_, 0);
v_isSharedCheck_2251_ = !lean_is_exclusive(v___x_2241_);
if (v_isSharedCheck_2251_ == 0)
{
v___x_2245_ = v___x_2241_;
v_isShared_2246_ = v_isSharedCheck_2251_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_val_2243_);
lean_dec(v___x_2241_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2251_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v_fst_2247_; lean_object* v___x_2249_; 
v_fst_2247_ = lean_ctor_get(v_val_2243_, 0);
lean_inc(v_fst_2247_);
lean_dec(v_val_2243_);
if (v_isShared_2246_ == 0)
{
lean_ctor_set(v___x_2245_, 0, v_fst_2247_);
v___x_2249_ = v___x_2245_;
goto v_reusejp_2248_;
}
else
{
lean_object* v_reuseFailAlloc_2250_; 
v_reuseFailAlloc_2250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2250_, 0, v_fst_2247_);
v___x_2249_ = v_reuseFailAlloc_2250_;
goto v_reusejp_2248_;
}
v_reusejp_2248_:
{
return v___x_2249_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg___boxed(lean_object* v_x_2252_, lean_object* v_x_2253_, lean_object* v_x_2254_){
_start:
{
lean_object* v_res_2255_; 
v_res_2255_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(v_x_2252_, v_x_2253_, v_x_2254_);
lean_dec_ref(v_x_2253_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux(lean_object* v_00_u03b1_2256_, lean_object* v_x_2257_, lean_object* v_x_2258_, lean_object* v_x_2259_){
_start:
{
lean_object* v___x_2260_; 
v___x_2260_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(v_x_2257_, v_x_2258_, v_x_2259_);
return v___x_2260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___boxed(lean_object* v_00_u03b1_2261_, lean_object* v_x_2262_, lean_object* v_x_2263_, lean_object* v_x_2264_){
_start:
{
lean_object* v_res_2265_; 
v_res_2265_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux(v_00_u03b1_2261_, v_x_2262_, v_x_2263_, v_x_2264_);
lean_dec_ref(v_x_2263_);
return v_res_2265_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0(lean_object* v_00_u03b1_2266_, lean_object* v_index_2267_, lean_object* v_cs_2268_, lean_object* v_k_2269_){
_start:
{
lean_object* v___x_2270_; 
v___x_2270_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_index_2267_, v_cs_2268_, v_k_2269_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___boxed(lean_object* v_00_u03b1_2271_, lean_object* v_index_2272_, lean_object* v_cs_2273_, lean_object* v_k_2274_){
_start:
{
lean_object* v_res_2275_; 
v_res_2275_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0(v_00_u03b1_2271_, v_index_2272_, v_cs_2273_, v_k_2274_);
lean_dec(v_k_2274_);
lean_dec_ref(v_cs_2273_);
lean_dec_ref(v_index_2272_);
return v_res_2275_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0(lean_object* v_00_u03b1_2276_, lean_object* v_index_2277_, lean_object* v_cs_2278_, lean_object* v_k_2279_, uint8_t v_fp_2280_, lean_object* v_fpOff_2281_, lean_object* v_j_2282_, lean_object* v_hi_2283_){
_start:
{
lean_object* v___x_2284_; 
v___x_2284_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(v_index_2277_, v_cs_2278_, v_k_2279_, v_fp_2280_, v_fpOff_2281_, v_j_2282_, v_hi_2283_);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2285_, lean_object* v_index_2286_, lean_object* v_cs_2287_, lean_object* v_k_2288_, lean_object* v_fp_2289_, lean_object* v_fpOff_2290_, lean_object* v_j_2291_, lean_object* v_hi_2292_){
_start:
{
uint8_t v_fp_boxed_2293_; lean_object* v_res_2294_; 
v_fp_boxed_2293_ = lean_unbox(v_fp_2289_);
v_res_2294_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0(v_00_u03b1_2285_, v_index_2286_, v_cs_2287_, v_k_2288_, v_fp_boxed_2293_, v_fpOff_2290_, v_j_2291_, v_hi_2292_);
lean_dec(v_hi_2292_);
lean_dec(v_fpOff_2290_);
lean_dec(v_k_2288_);
lean_dec_ref(v_cs_2287_);
lean_dec_ref(v_index_2286_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(lean_object* v_x_2295_, lean_object* v_x_2296_, lean_object* v_x_2297_){
_start:
{
switch(lean_obj_tag(v_x_2295_))
{
case 0:
{
lean_object* v_modIdx_2298_; lean_object* v_tree_2299_; lean_object* v___x_2300_; 
v_modIdx_2298_ = lean_ctor_get(v_x_2295_, 0);
lean_inc(v_modIdx_2298_);
v_tree_2299_ = lean_ctor_get(v_x_2295_, 1);
lean_inc_ref(v_tree_2299_);
lean_dec_ref_known(v_x_2295_, 2);
v___x_2300_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_2299_, v_x_2296_, v_x_2297_);
lean_dec_ref(v_tree_2299_);
if (lean_obj_tag(v___x_2300_) == 0)
{
lean_object* v___x_2301_; 
lean_dec(v_modIdx_2298_);
v___x_2301_ = lean_box(0);
return v___x_2301_;
}
else
{
lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2308_; 
v_isSharedCheck_2308_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2308_ == 0)
{
lean_object* v_unused_2309_; 
v_unused_2309_ = lean_ctor_get(v___x_2300_, 0);
lean_dec(v_unused_2309_);
v___x_2303_ = v___x_2300_;
v_isShared_2304_ = v_isSharedCheck_2308_;
goto v_resetjp_2302_;
}
else
{
lean_dec(v___x_2300_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2308_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
lean_object* v___x_2306_; 
if (v_isShared_2304_ == 0)
{
lean_ctor_set(v___x_2303_, 0, v_modIdx_2298_);
v___x_2306_ = v___x_2303_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v_modIdx_2298_);
v___x_2306_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
return v___x_2306_;
}
}
}
}
case 1:
{
lean_object* v_entry_x3f_2310_; lean_object* v_children_2311_; lean_object* v_childIndex_2312_; lean_object* v___x_2313_; uint8_t v___x_2314_; 
v_entry_x3f_2310_ = lean_ctor_get(v_x_2295_, 1);
lean_inc(v_entry_x3f_2310_);
v_children_2311_ = lean_ctor_get(v_x_2295_, 2);
lean_inc_ref(v_children_2311_);
v_childIndex_2312_ = lean_ctor_get(v_x_2295_, 3);
lean_inc_ref(v_childIndex_2312_);
lean_dec_ref_known(v_x_2295_, 4);
v___x_2313_ = lean_unsigned_to_nat(0u);
v___x_2314_ = lean_nat_dec_eq(v_x_2297_, v___x_2313_);
if (v___x_2314_ == 0)
{
lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
lean_dec(v_entry_x3f_2310_);
v___x_2315_ = lean_box(0);
v___x_2316_ = lean_unsigned_to_nat(1u);
v___x_2317_ = lean_nat_sub(v_x_2297_, v___x_2316_);
lean_dec(v_x_2297_);
v___x_2318_ = lean_array_get_borrowed(v___x_2315_, v_x_2296_, v___x_2317_);
v___x_2319_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_childIndex_2312_, v_children_2311_, v___x_2318_);
lean_dec_ref(v_childIndex_2312_);
if (lean_obj_tag(v___x_2319_) == 0)
{
lean_dec(v___x_2317_);
lean_dec_ref(v_children_2311_);
return v___x_2319_;
}
else
{
lean_object* v_val_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; 
v_val_2320_ = lean_ctor_get(v___x_2319_, 0);
lean_inc(v_val_2320_);
lean_dec_ref_known(v___x_2319_, 1);
v___x_2321_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0);
v___x_2322_ = lean_array_get(v___x_2321_, v_children_2311_, v_val_2320_);
lean_dec(v_val_2320_);
lean_dec_ref(v_children_2311_);
v_x_2295_ = v___x_2322_;
v_x_2297_ = v___x_2317_;
goto _start;
}
}
else
{
lean_dec_ref(v_childIndex_2312_);
lean_dec_ref(v_children_2311_);
lean_dec(v_x_2297_);
if (lean_obj_tag(v_entry_x3f_2310_) == 0)
{
lean_object* v___x_2324_; 
v___x_2324_ = lean_box(0);
return v___x_2324_;
}
else
{
lean_object* v_val_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2333_; 
v_val_2325_ = lean_ctor_get(v_entry_x3f_2310_, 0);
v_isSharedCheck_2333_ = !lean_is_exclusive(v_entry_x3f_2310_);
if (v_isSharedCheck_2333_ == 0)
{
v___x_2327_ = v_entry_x3f_2310_;
v_isShared_2328_ = v_isSharedCheck_2333_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_val_2325_);
lean_dec(v_entry_x3f_2310_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2333_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v_snd_2329_; lean_object* v___x_2331_; 
v_snd_2329_ = lean_ctor_get(v_val_2325_, 1);
lean_inc(v_snd_2329_);
lean_dec(v_val_2325_);
if (v_isShared_2328_ == 0)
{
lean_ctor_set(v___x_2327_, 0, v_snd_2329_);
v___x_2331_ = v___x_2327_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v_snd_2329_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
return v___x_2331_;
}
}
}
}
}
default: 
{
lean_object* v_entry_2334_; lean_object* v_expanded_2335_; lean_object* v___x_2336_; uint8_t v___x_2337_; 
v_entry_2334_ = lean_ctor_get(v_x_2295_, 1);
lean_inc_ref(v_entry_2334_);
v_expanded_2335_ = lean_ctor_get(v_x_2295_, 2);
lean_inc_ref(v_expanded_2335_);
lean_dec_ref_known(v_x_2295_, 3);
v___x_2336_ = lean_unsigned_to_nat(0u);
v___x_2337_ = lean_nat_dec_eq(v_x_2297_, v___x_2336_);
if (v___x_2337_ == 0)
{
lean_object* v___x_2338_; lean_object* v_fst_2339_; lean_object* v_snd_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; 
lean_dec_ref(v_entry_2334_);
v___x_2338_ = lean_thunk_get_own(v_expanded_2335_);
lean_dec_ref(v_expanded_2335_);
v_fst_2339_ = lean_ctor_get(v___x_2338_, 0);
lean_inc(v_fst_2339_);
v_snd_2340_ = lean_ctor_get(v___x_2338_, 1);
lean_inc(v_snd_2340_);
lean_dec(v___x_2338_);
v___x_2341_ = lean_box(0);
v___x_2342_ = lean_unsigned_to_nat(1u);
v___x_2343_ = lean_nat_sub(v_x_2297_, v___x_2342_);
lean_dec(v_x_2297_);
v___x_2344_ = lean_array_get_borrowed(v___x_2341_, v_x_2296_, v___x_2343_);
v___x_2345_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_snd_2340_, v_fst_2339_, v___x_2344_);
lean_dec(v_snd_2340_);
if (lean_obj_tag(v___x_2345_) == 0)
{
lean_dec(v___x_2343_);
lean_dec(v_fst_2339_);
return v___x_2345_;
}
else
{
lean_object* v_val_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; 
v_val_2346_ = lean_ctor_get(v___x_2345_, 0);
lean_inc(v_val_2346_);
lean_dec_ref_known(v___x_2345_, 1);
v___x_2347_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0);
v___x_2348_ = lean_array_get(v___x_2347_, v_fst_2339_, v_val_2346_);
lean_dec(v_val_2346_);
lean_dec(v_fst_2339_);
v_x_2295_ = v___x_2348_;
v_x_2297_ = v___x_2343_;
goto _start;
}
}
else
{
lean_object* v___x_2350_; 
lean_dec_ref(v_expanded_2335_);
lean_dec(v_x_2297_);
v___x_2350_ = lean_thunk_get_own(v_entry_2334_);
lean_dec_ref(v_entry_2334_);
if (lean_obj_tag(v___x_2350_) == 0)
{
lean_object* v___x_2351_; 
v___x_2351_ = lean_box(0);
return v___x_2351_;
}
else
{
lean_object* v_val_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2360_; 
v_val_2352_ = lean_ctor_get(v___x_2350_, 0);
v_isSharedCheck_2360_ = !lean_is_exclusive(v___x_2350_);
if (v_isSharedCheck_2360_ == 0)
{
v___x_2354_ = v___x_2350_;
v_isShared_2355_ = v_isSharedCheck_2360_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_val_2352_);
lean_dec(v___x_2350_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2360_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v_snd_2356_; lean_object* v___x_2358_; 
v_snd_2356_ = lean_ctor_get(v_val_2352_, 1);
lean_inc(v_snd_2356_);
lean_dec(v_val_2352_);
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 0, v_snd_2356_);
v___x_2358_ = v___x_2354_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v_snd_2356_);
v___x_2358_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
return v___x_2358_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg___boxed(lean_object* v_x_2361_, lean_object* v_x_2362_, lean_object* v_x_2363_){
_start:
{
lean_object* v_res_2364_; 
v_res_2364_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(v_x_2361_, v_x_2362_, v_x_2363_);
lean_dec_ref(v_x_2362_);
return v_res_2364_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux(lean_object* v_00_u03b1_2365_, lean_object* v_x_2366_, lean_object* v_x_2367_, lean_object* v_x_2368_){
_start:
{
lean_object* v___x_2369_; 
v___x_2369_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(v_x_2366_, v_x_2367_, v_x_2368_);
return v___x_2369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___boxed(lean_object* v_00_u03b1_2370_, lean_object* v_x_2371_, lean_object* v_x_2372_, lean_object* v_x_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux(v_00_u03b1_2370_, v_x_2371_, v_x_2372_, v_x_2373_);
lean_dec_ref(v_x_2372_);
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(lean_object* v_x_2375_, lean_object* v_x_2376_, lean_object* v_x_2377_){
_start:
{
switch(lean_obj_tag(v_x_2375_))
{
case 0:
{
lean_object* v_modIdx_2378_; lean_object* v_tree_2379_; lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2396_; 
v_modIdx_2378_ = lean_ctor_get(v_x_2375_, 0);
v_tree_2379_ = lean_ctor_get(v_x_2375_, 1);
v_isSharedCheck_2396_ = !lean_is_exclusive(v_x_2375_);
if (v_isSharedCheck_2396_ == 0)
{
v___x_2381_ = v_x_2375_;
v_isShared_2382_ = v_isSharedCheck_2396_;
goto v_resetjp_2380_;
}
else
{
lean_inc(v_tree_2379_);
lean_inc(v_modIdx_2378_);
lean_dec(v_x_2375_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2396_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___x_2383_; 
v___x_2383_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_2379_, v_x_2376_, v_x_2377_);
lean_dec_ref(v_tree_2379_);
if (lean_obj_tag(v___x_2383_) == 0)
{
lean_object* v___x_2384_; 
lean_del_object(v___x_2381_);
lean_dec(v_modIdx_2378_);
v___x_2384_ = lean_box(0);
return v___x_2384_;
}
else
{
lean_object* v_val_2385_; lean_object* v___x_2387_; uint8_t v_isShared_2388_; uint8_t v_isSharedCheck_2395_; 
v_val_2385_ = lean_ctor_get(v___x_2383_, 0);
v_isSharedCheck_2395_ = !lean_is_exclusive(v___x_2383_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2387_ = v___x_2383_;
v_isShared_2388_ = v_isSharedCheck_2395_;
goto v_resetjp_2386_;
}
else
{
lean_inc(v_val_2385_);
lean_dec(v___x_2383_);
v___x_2387_ = lean_box(0);
v_isShared_2388_ = v_isSharedCheck_2395_;
goto v_resetjp_2386_;
}
v_resetjp_2386_:
{
lean_object* v___x_2390_; 
if (v_isShared_2382_ == 0)
{
lean_ctor_set(v___x_2381_, 1, v_modIdx_2378_);
lean_ctor_set(v___x_2381_, 0, v_val_2385_);
v___x_2390_ = v___x_2381_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_val_2385_);
lean_ctor_set(v_reuseFailAlloc_2394_, 1, v_modIdx_2378_);
v___x_2390_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
lean_object* v___x_2392_; 
if (v_isShared_2388_ == 0)
{
lean_ctor_set(v___x_2387_, 0, v___x_2390_);
v___x_2392_ = v___x_2387_;
goto v_reusejp_2391_;
}
else
{
lean_object* v_reuseFailAlloc_2393_; 
v_reuseFailAlloc_2393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2393_, 0, v___x_2390_);
v___x_2392_ = v_reuseFailAlloc_2393_;
goto v_reusejp_2391_;
}
v_reusejp_2391_:
{
return v___x_2392_;
}
}
}
}
}
}
case 1:
{
lean_object* v_entry_x3f_2397_; lean_object* v_children_2398_; lean_object* v_childIndex_2399_; lean_object* v___x_2400_; uint8_t v___x_2401_; 
v_entry_x3f_2397_ = lean_ctor_get(v_x_2375_, 1);
lean_inc(v_entry_x3f_2397_);
v_children_2398_ = lean_ctor_get(v_x_2375_, 2);
lean_inc_ref(v_children_2398_);
v_childIndex_2399_ = lean_ctor_get(v_x_2375_, 3);
lean_inc_ref(v_childIndex_2399_);
lean_dec_ref_known(v_x_2375_, 4);
v___x_2400_ = lean_unsigned_to_nat(0u);
v___x_2401_ = lean_nat_dec_eq(v_x_2377_, v___x_2400_);
if (v___x_2401_ == 0)
{
lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; 
lean_dec(v_entry_x3f_2397_);
v___x_2402_ = lean_box(0);
v___x_2403_ = lean_unsigned_to_nat(1u);
v___x_2404_ = lean_nat_sub(v_x_2377_, v___x_2403_);
lean_dec(v_x_2377_);
v___x_2405_ = lean_array_get_borrowed(v___x_2402_, v_x_2376_, v___x_2404_);
v___x_2406_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_childIndex_2399_, v_children_2398_, v___x_2405_);
lean_dec_ref(v_childIndex_2399_);
if (lean_obj_tag(v___x_2406_) == 0)
{
lean_object* v___x_2407_; 
lean_dec(v___x_2404_);
lean_dec_ref(v_children_2398_);
v___x_2407_ = lean_box(0);
return v___x_2407_;
}
else
{
lean_object* v_val_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v_val_2408_ = lean_ctor_get(v___x_2406_, 0);
lean_inc(v_val_2408_);
lean_dec_ref_known(v___x_2406_, 1);
v___x_2409_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0);
v___x_2410_ = lean_array_get(v___x_2409_, v_children_2398_, v_val_2408_);
lean_dec(v_val_2408_);
lean_dec_ref(v_children_2398_);
v_x_2375_ = v___x_2410_;
v_x_2377_ = v___x_2404_;
goto _start;
}
}
else
{
lean_dec_ref(v_childIndex_2399_);
lean_dec_ref(v_children_2398_);
lean_dec(v_x_2377_);
return v_entry_x3f_2397_;
}
}
default: 
{
lean_object* v_entry_2412_; lean_object* v_expanded_2413_; lean_object* v___x_2414_; uint8_t v___x_2415_; 
v_entry_2412_ = lean_ctor_get(v_x_2375_, 1);
lean_inc_ref(v_entry_2412_);
v_expanded_2413_ = lean_ctor_get(v_x_2375_, 2);
lean_inc_ref(v_expanded_2413_);
lean_dec_ref_known(v_x_2375_, 3);
v___x_2414_ = lean_unsigned_to_nat(0u);
v___x_2415_ = lean_nat_dec_eq(v_x_2377_, v___x_2414_);
if (v___x_2415_ == 0)
{
lean_object* v___x_2416_; lean_object* v_fst_2417_; lean_object* v_snd_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; 
lean_dec_ref(v_entry_2412_);
v___x_2416_ = lean_thunk_get_own(v_expanded_2413_);
lean_dec_ref(v_expanded_2413_);
v_fst_2417_ = lean_ctor_get(v___x_2416_, 0);
lean_inc(v_fst_2417_);
v_snd_2418_ = lean_ctor_get(v___x_2416_, 1);
lean_inc(v_snd_2418_);
lean_dec(v___x_2416_);
v___x_2419_ = lean_box(0);
v___x_2420_ = lean_unsigned_to_nat(1u);
v___x_2421_ = lean_nat_sub(v_x_2377_, v___x_2420_);
lean_dec(v_x_2377_);
v___x_2422_ = lean_array_get_borrowed(v___x_2419_, v_x_2376_, v___x_2421_);
v___x_2423_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_snd_2418_, v_fst_2417_, v___x_2422_);
lean_dec(v_snd_2418_);
if (lean_obj_tag(v___x_2423_) == 0)
{
lean_object* v___x_2424_; 
lean_dec(v___x_2421_);
lean_dec(v_fst_2417_);
v___x_2424_ = lean_box(0);
return v___x_2424_;
}
else
{
lean_object* v_val_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; 
v_val_2425_ = lean_ctor_get(v___x_2423_, 0);
lean_inc(v_val_2425_);
lean_dec_ref_known(v___x_2423_, 1);
v___x_2426_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0);
v___x_2427_ = lean_array_get(v___x_2426_, v_fst_2417_, v_val_2425_);
lean_dec(v_val_2425_);
lean_dec(v_fst_2417_);
v_x_2375_ = v___x_2427_;
v_x_2377_ = v___x_2421_;
goto _start;
}
}
else
{
lean_object* v___x_2429_; 
lean_dec_ref(v_expanded_2413_);
lean_dec(v_x_2377_);
v___x_2429_ = lean_thunk_get_own(v_entry_2412_);
lean_dec_ref(v_entry_2412_);
return v___x_2429_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg___boxed(lean_object* v_x_2430_, lean_object* v_x_2431_, lean_object* v_x_2432_){
_start:
{
lean_object* v_res_2433_; 
v_res_2433_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(v_x_2430_, v_x_2431_, v_x_2432_);
lean_dec_ref(v_x_2431_);
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux(lean_object* v_00_u03b1_2434_, lean_object* v_x_2435_, lean_object* v_x_2436_, lean_object* v_x_2437_){
_start:
{
lean_object* v___x_2438_; 
v___x_2438_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(v_x_2435_, v_x_2436_, v_x_2437_);
return v___x_2438_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___boxed(lean_object* v_00_u03b1_2439_, lean_object* v_x_2440_, lean_object* v_x_2441_, lean_object* v_x_2442_){
_start:
{
lean_object* v_res_2443_; 
v_res_2443_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux(v_00_u03b1_2439_, v_x_2440_, v_x_2441_, v_x_2442_);
lean_dec_ref(v_x_2441_);
return v_res_2443_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findEntry_x3f___redArg(lean_object* v_t_2444_, lean_object* v_n_2445_){
_start:
{
lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v_path_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; 
v___x_2446_ = lean_unsigned_to_nat(8u);
v___x_2447_ = lean_mk_empty_array_with_capacity(v___x_2446_);
v_path_2448_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_2445_, v___x_2447_);
v___x_2449_ = lean_array_get_size(v_path_2448_);
v___x_2450_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(v_t_2444_, v_path_2448_, v___x_2449_);
lean_dec_ref(v_path_2448_);
return v___x_2450_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findEntry_x3f(lean_object* v_00_u03b1_2451_, lean_object* v_t_2452_, lean_object* v_n_2453_){
_start:
{
lean_object* v___x_2454_; 
v___x_2454_ = l_Lean_ImportedConsts_findEntry_x3f___redArg(v_t_2452_, v_n_2453_);
return v___x_2454_;
}
}
LEAN_EXPORT lean_object* lean_imported_consts_find_entry_core(lean_object* v_t_2455_, lean_object* v_n_2456_){
_start:
{
lean_object* v___x_2457_; 
v___x_2457_ = l_Lean_ImportedConsts_findEntry_x3f___redArg(v_t_2455_, v_n_2456_);
return v___x_2457_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstEntryCached_x3f___boxed(lean_object* v_t_2460_, lean_object* v_n_2461_){
_start:
{
lean_object* v_res_2462_; 
v_res_2462_ = lean_imported_consts_find_entry_cached(v_t_2460_, v_n_2461_);
lean_dec(v_n_2461_);
lean_dec_ref(v_t_2460_);
return v_res_2462_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstCached_x3f(lean_object* v_t_2463_, lean_object* v_n_2464_){
_start:
{
lean_object* v___x_2465_; 
v___x_2465_ = lean_imported_consts_find_entry_cached(v_t_2463_, v_n_2464_);
if (lean_obj_tag(v___x_2465_) == 0)
{
lean_object* v___x_2466_; 
v___x_2466_ = lean_box(0);
return v___x_2466_;
}
else
{
lean_object* v_val_2467_; lean_object* v___x_2469_; uint8_t v_isShared_2470_; uint8_t v_isSharedCheck_2475_; 
v_val_2467_ = lean_ctor_get(v___x_2465_, 0);
v_isSharedCheck_2475_ = !lean_is_exclusive(v___x_2465_);
if (v_isSharedCheck_2475_ == 0)
{
v___x_2469_ = v___x_2465_;
v_isShared_2470_ = v_isSharedCheck_2475_;
goto v_resetjp_2468_;
}
else
{
lean_inc(v_val_2467_);
lean_dec(v___x_2465_);
v___x_2469_ = lean_box(0);
v_isShared_2470_ = v_isSharedCheck_2475_;
goto v_resetjp_2468_;
}
v_resetjp_2468_:
{
lean_object* v_fst_2471_; lean_object* v___x_2473_; 
v_fst_2471_ = lean_ctor_get(v_val_2467_, 0);
lean_inc(v_fst_2471_);
lean_dec(v_val_2467_);
if (v_isShared_2470_ == 0)
{
lean_ctor_set(v___x_2469_, 0, v_fst_2471_);
v___x_2473_ = v___x_2469_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v_fst_2471_);
v___x_2473_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
return v___x_2473_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstCached_x3f___boxed(lean_object* v_t_2476_, lean_object* v_n_2477_){
_start:
{
lean_object* v_res_2478_; 
v_res_2478_ = l_Lean_ImportedConsts_findConstCached_x3f(v_t_2476_, v_n_2477_);
lean_dec(v_n_2477_);
lean_dec_ref(v_t_2476_);
return v_res_2478_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstModIdxCached_x3f(lean_object* v_t_2479_, lean_object* v_n_2480_){
_start:
{
lean_object* v___x_2481_; 
v___x_2481_ = lean_imported_consts_find_entry_cached(v_t_2479_, v_n_2480_);
if (lean_obj_tag(v___x_2481_) == 0)
{
lean_object* v___x_2482_; 
v___x_2482_ = lean_box(0);
return v___x_2482_;
}
else
{
lean_object* v_val_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2491_; 
v_val_2483_ = lean_ctor_get(v___x_2481_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v___x_2481_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2485_ = v___x_2481_;
v_isShared_2486_ = v_isSharedCheck_2491_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_val_2483_);
lean_dec(v___x_2481_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2491_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v_snd_2487_; lean_object* v___x_2489_; 
v_snd_2487_ = lean_ctor_get(v_val_2483_, 1);
lean_inc(v_snd_2487_);
lean_dec(v_val_2483_);
if (v_isShared_2486_ == 0)
{
lean_ctor_set(v___x_2485_, 0, v_snd_2487_);
v___x_2489_ = v___x_2485_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v_snd_2487_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
return v___x_2489_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstModIdxCached_x3f___boxed(lean_object* v_t_2492_, lean_object* v_n_2493_){
_start:
{
lean_object* v_res_2494_; 
v_res_2494_ = l_Lean_ImportedConsts_findConstModIdxCached_x3f(v_t_2492_, v_n_2493_);
lean_dec(v_n_2493_);
lean_dec_ref(v_t_2492_);
return v_res_2494_;
}
}
LEAN_EXPORT lean_object* lean_imported_extra_consts_find_entry_core(lean_object* v_t_2495_, lean_object* v_n_2496_){
_start:
{
lean_object* v___x_2497_; 
v___x_2497_ = l_Lean_ImportedConsts_findEntry_x3f___redArg(v_t_2495_, v_n_2496_);
return v___x_2497_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraEntryCached_x3f___boxed(lean_object* v_t_2500_, lean_object* v_n_2501_){
_start:
{
lean_object* v_res_2502_; 
v_res_2502_ = lean_imported_extra_consts_find_entry_cached(v_t_2500_, v_n_2501_);
lean_dec(v_n_2501_);
lean_dec_ref(v_t_2500_);
return v_res_2502_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraModIdxCached_x3f(lean_object* v_t_2503_, lean_object* v_n_2504_){
_start:
{
lean_object* v___x_2505_; 
v___x_2505_ = lean_imported_extra_consts_find_entry_cached(v_t_2503_, v_n_2504_);
if (lean_obj_tag(v___x_2505_) == 0)
{
lean_object* v___x_2506_; 
v___x_2506_ = lean_box(0);
return v___x_2506_;
}
else
{
lean_object* v_val_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2515_; 
v_val_2507_ = lean_ctor_get(v___x_2505_, 0);
v_isSharedCheck_2515_ = !lean_is_exclusive(v___x_2505_);
if (v_isSharedCheck_2515_ == 0)
{
v___x_2509_ = v___x_2505_;
v_isShared_2510_ = v_isSharedCheck_2515_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_val_2507_);
lean_dec(v___x_2505_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2515_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v_snd_2511_; lean_object* v___x_2513_; 
v_snd_2511_ = lean_ctor_get(v_val_2507_, 1);
lean_inc(v_snd_2511_);
lean_dec(v_val_2507_);
if (v_isShared_2510_ == 0)
{
lean_ctor_set(v___x_2509_, 0, v_snd_2511_);
v___x_2513_ = v___x_2509_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v_snd_2511_);
v___x_2513_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
return v___x_2513_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraModIdxCached_x3f___boxed(lean_object* v_t_2516_, lean_object* v_n_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l_Lean_ImportedConsts_findExtraModIdxCached_x3f(v_t_2516_, v_n_2517_);
lean_dec(v_n_2517_);
lean_dec_ref(v_t_2516_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_resetCache___boxed(lean_object* v_a_00___x40___internal___hyg_2520_){
_start:
{
lean_object* v_res_2521_; 
v_res_2521_ = lean_imported_consts_cache_reset();
return v_res_2521_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f___redArg(lean_object* v_t_2522_, lean_object* v_n_2523_){
_start:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v_path_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2524_ = lean_unsigned_to_nat(8u);
v___x_2525_ = lean_mk_empty_array_with_capacity(v___x_2524_);
v_path_2526_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_2523_, v___x_2525_);
v___x_2527_ = lean_array_get_size(v_path_2526_);
v___x_2528_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(v_t_2522_, v_path_2526_, v___x_2527_);
lean_dec_ref(v_path_2526_);
return v___x_2528_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f(lean_object* v_00_u03b1_2529_, lean_object* v_t_2530_, lean_object* v_n_2531_){
_start:
{
lean_object* v___x_2532_; 
v___x_2532_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_2530_, v_n_2531_);
return v___x_2532_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findModIdx_x3f___redArg(lean_object* v_t_2533_, lean_object* v_n_2534_){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v_path_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; 
v___x_2535_ = lean_unsigned_to_nat(8u);
v___x_2536_ = lean_mk_empty_array_with_capacity(v___x_2535_);
v_path_2537_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_2534_, v___x_2536_);
v___x_2538_ = lean_array_get_size(v_path_2537_);
v___x_2539_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(v_t_2533_, v_path_2537_, v___x_2538_);
lean_dec_ref(v_path_2537_);
return v___x_2539_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findModIdx_x3f(lean_object* v_00_u03b1_2540_, lean_object* v_t_2541_, lean_object* v_n_2542_){
_start:
{
lean_object* v___x_2543_; 
v___x_2543_ = l_Lean_ImportedConsts_findModIdx_x3f___redArg(v_t_2541_, v_n_2542_);
return v___x_2543_;
}
}
LEAN_EXPORT uint8_t l_Lean_ImportedConsts_contains___redArg(lean_object* v_t_2544_, lean_object* v_n_2545_){
_start:
{
lean_object* v___x_2546_; 
v___x_2546_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_2544_, v_n_2545_);
if (lean_obj_tag(v___x_2546_) == 0)
{
uint8_t v___x_2547_; 
v___x_2547_ = 0;
return v___x_2547_;
}
else
{
uint8_t v___x_2548_; 
lean_dec_ref_known(v___x_2546_, 1);
v___x_2548_ = 1;
return v___x_2548_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_contains___redArg___boxed(lean_object* v_t_2549_, lean_object* v_n_2550_){
_start:
{
uint8_t v_res_2551_; lean_object* v_r_2552_; 
v_res_2551_ = l_Lean_ImportedConsts_contains___redArg(v_t_2549_, v_n_2550_);
v_r_2552_ = lean_box(v_res_2551_);
return v_r_2552_;
}
}
LEAN_EXPORT uint8_t l_Lean_ImportedConsts_contains(lean_object* v_00_u03b1_2553_, lean_object* v_t_2554_, lean_object* v_n_2555_){
_start:
{
uint8_t v___x_2556_; 
v___x_2556_ = l_Lean_ImportedConsts_contains___redArg(v_t_2554_, v_n_2555_);
return v___x_2556_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_contains___boxed(lean_object* v_00_u03b1_2557_, lean_object* v_t_2558_, lean_object* v_n_2559_){
_start:
{
uint8_t v_res_2560_; lean_object* v_r_2561_; 
v_res_2560_ = l_Lean_ImportedConsts_contains(v_00_u03b1_2557_, v_t_2558_, v_n_2559_);
v_r_2561_ = lean_box(v_res_2560_);
return v_r_2561_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__1___redArg(lean_object* v_fst_2562_, lean_object* v_as_2563_, size_t v_sz_2564_, size_t v_i_2565_, lean_object* v_b_2566_, lean_object* v___y_2567_){
_start:
{
uint8_t v___x_2568_; 
v___x_2568_ = lean_usize_dec_lt(v_i_2565_, v_sz_2564_);
if (v___x_2568_ == 0)
{
lean_object* v___x_2569_; 
lean_dec(v_fst_2562_);
v___x_2569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2569_, 0, v_b_2566_);
lean_ctor_set(v___x_2569_, 1, v___y_2567_);
return v___x_2569_;
}
else
{
lean_object* v_a_2570_; uint64_t v___y_2572_; lean_object* v_key_2580_; 
v_a_2570_ = lean_array_uget_borrowed(v_as_2563_, v_i_2565_);
v_key_2580_ = lean_ctor_get(v_a_2570_, 0);
if (lean_obj_tag(v_key_2580_) == 0)
{
uint64_t v___x_2581_; 
v___x_2581_ = 1723ULL;
v___y_2572_ = v___x_2581_;
goto v___jp_2571_;
}
else
{
uint64_t v_hash_2582_; 
v_hash_2582_ = lean_ctor_get_uint64(v_key_2580_, sizeof(void*)*2);
v___y_2572_ = v_hash_2582_;
goto v___jp_2571_;
}
v___jp_2571_:
{
lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; size_t v___x_2577_; size_t v___x_2578_; 
lean_inc(v_a_2570_);
lean_inc(v_fst_2562_);
v___x_2573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2573_, 0, v_fst_2562_);
lean_ctor_set(v___x_2573_, 1, v_a_2570_);
v___x_2574_ = lean_box_uint64(v___y_2572_);
v___x_2575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2575_, 0, v___x_2574_);
lean_ctor_set(v___x_2575_, 1, v___x_2573_);
v___x_2576_ = lean_array_push(v_b_2566_, v___x_2575_);
v___x_2577_ = ((size_t)1ULL);
v___x_2578_ = lean_usize_add(v_i_2565_, v___x_2577_);
v_i_2565_ = v___x_2578_;
v_b_2566_ = v___x_2576_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__1___redArg___boxed(lean_object* v_fst_2583_, lean_object* v_as_2584_, lean_object* v_sz_2585_, lean_object* v_i_2586_, lean_object* v_b_2587_, lean_object* v___y_2588_){
_start:
{
size_t v_sz_boxed_2589_; size_t v_i_boxed_2590_; lean_object* v_res_2591_; 
v_sz_boxed_2589_ = lean_unbox_usize(v_sz_2585_);
lean_dec(v_sz_2585_);
v_i_boxed_2590_ = lean_unbox_usize(v_i_2586_);
lean_dec(v_i_2586_);
v_res_2591_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__1___redArg(v_fst_2583_, v_as_2584_, v_sz_boxed_2589_, v_i_boxed_2590_, v_b_2587_, v___y_2588_);
lean_dec_ref(v_as_2584_);
return v_res_2591_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__3___redArg(lean_object* v_as_2592_, size_t v_sz_2593_, size_t v_i_2594_, lean_object* v_b_2595_, lean_object* v___y_2596_){
_start:
{
uint8_t v___x_2597_; 
v___x_2597_ = lean_usize_dec_lt(v_i_2594_, v_sz_2593_);
if (v___x_2597_ == 0)
{
lean_object* v___x_2598_; 
v___x_2598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2598_, 0, v_b_2595_);
lean_ctor_set(v___x_2598_, 1, v___y_2596_);
return v___x_2598_;
}
else
{
lean_object* v_a_2599_; lean_object* v_snd_2600_; lean_object* v_fst_2601_; lean_object* v_children_2602_; size_t v_sz_2603_; size_t v___x_2604_; lean_object* v___x_2605_; lean_object* v_fst_2606_; lean_object* v_snd_2607_; size_t v___x_2608_; size_t v___x_2609_; 
v_a_2599_ = lean_array_uget_borrowed(v_as_2592_, v_i_2594_);
v_snd_2600_ = lean_ctor_get(v_a_2599_, 1);
v_fst_2601_ = lean_ctor_get(v_a_2599_, 0);
v_children_2602_ = lean_ctor_get(v_snd_2600_, 2);
v_sz_2603_ = lean_array_size(v_children_2602_);
v___x_2604_ = ((size_t)0ULL);
lean_inc(v_fst_2601_);
v___x_2605_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__1___redArg(v_fst_2601_, v_children_2602_, v_sz_2603_, v___x_2604_, v_b_2595_, v___y_2596_);
v_fst_2606_ = lean_ctor_get(v___x_2605_, 0);
lean_inc(v_fst_2606_);
v_snd_2607_ = lean_ctor_get(v___x_2605_, 1);
lean_inc(v_snd_2607_);
lean_dec_ref(v___x_2605_);
v___x_2608_ = ((size_t)1ULL);
v___x_2609_ = lean_usize_add(v_i_2594_, v___x_2608_);
v_i_2594_ = v___x_2609_;
v_b_2595_ = v_fst_2606_;
v___y_2596_ = v_snd_2607_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__3___redArg___boxed(lean_object* v_as_2611_, lean_object* v_sz_2612_, lean_object* v_i_2613_, lean_object* v_b_2614_, lean_object* v___y_2615_){
_start:
{
size_t v_sz_boxed_2616_; size_t v_i_boxed_2617_; lean_object* v_res_2618_; 
v_sz_boxed_2616_ = lean_unbox_usize(v_sz_2612_);
lean_dec(v_sz_2612_);
v_i_boxed_2617_ = lean_unbox_usize(v_i_2613_);
lean_dec(v_i_2613_);
v_res_2618_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__3___redArg(v_as_2611_, v_sz_boxed_2616_, v_i_boxed_2617_, v_b_2614_, v___y_2615_);
lean_dec_ref(v_as_2611_);
return v_res_2618_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0_spec__0___redArg(lean_object* v_as_2619_, size_t v_i_2620_, size_t v_stop_2621_, lean_object* v_b_2622_){
_start:
{
lean_object* v___y_2624_; uint8_t v___x_2628_; 
v___x_2628_ = lean_usize_dec_eq(v_i_2620_, v_stop_2621_);
if (v___x_2628_ == 0)
{
lean_object* v___x_2629_; lean_object* v_snd_2630_; lean_object* v_val_x3f_2631_; 
v___x_2629_ = lean_array_uget(v_as_2619_, v_i_2620_);
v_snd_2630_ = lean_ctor_get(v___x_2629_, 1);
v_val_x3f_2631_ = lean_ctor_get(v_snd_2630_, 1);
lean_inc(v_val_x3f_2631_);
if (lean_obj_tag(v_val_x3f_2631_) == 0)
{
lean_dec(v___x_2629_);
v___y_2624_ = v_b_2622_;
goto v___jp_2623_;
}
else
{
lean_object* v_fst_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2641_; 
v_fst_2632_ = lean_ctor_get(v___x_2629_, 0);
v_isSharedCheck_2641_ = !lean_is_exclusive(v___x_2629_);
if (v_isSharedCheck_2641_ == 0)
{
lean_object* v_unused_2642_; 
v_unused_2642_ = lean_ctor_get(v___x_2629_, 1);
lean_dec(v_unused_2642_);
v___x_2634_ = v___x_2629_;
v_isShared_2635_ = v_isSharedCheck_2641_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_fst_2632_);
lean_dec(v___x_2629_);
v___x_2634_ = lean_box(0);
v_isShared_2635_ = v_isSharedCheck_2641_;
goto v_resetjp_2633_;
}
v_resetjp_2633_:
{
lean_object* v_val_2636_; lean_object* v___x_2638_; 
v_val_2636_ = lean_ctor_get(v_val_x3f_2631_, 0);
lean_inc(v_val_2636_);
lean_dec_ref_known(v_val_x3f_2631_, 1);
if (v_isShared_2635_ == 0)
{
lean_ctor_set(v___x_2634_, 1, v_fst_2632_);
lean_ctor_set(v___x_2634_, 0, v_val_2636_);
v___x_2638_ = v___x_2634_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2640_; 
v_reuseFailAlloc_2640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2640_, 0, v_val_2636_);
lean_ctor_set(v_reuseFailAlloc_2640_, 1, v_fst_2632_);
v___x_2638_ = v_reuseFailAlloc_2640_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
lean_object* v___x_2639_; 
v___x_2639_ = lean_array_push(v_b_2622_, v___x_2638_);
v___y_2624_ = v___x_2639_;
goto v___jp_2623_;
}
}
}
}
else
{
return v_b_2622_;
}
v___jp_2623_:
{
size_t v___x_2625_; size_t v___x_2626_; 
v___x_2625_ = ((size_t)1ULL);
v___x_2626_ = lean_usize_add(v_i_2620_, v___x_2625_);
v_i_2620_ = v___x_2626_;
v_b_2622_ = v___y_2624_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0_spec__0___redArg___boxed(lean_object* v_as_2643_, lean_object* v_i_2644_, lean_object* v_stop_2645_, lean_object* v_b_2646_){
_start:
{
size_t v_i_boxed_2647_; size_t v_stop_boxed_2648_; lean_object* v_res_2649_; 
v_i_boxed_2647_ = lean_unbox_usize(v_i_2644_);
lean_dec(v_i_2644_);
v_stop_boxed_2648_ = lean_unbox_usize(v_stop_2645_);
lean_dec(v_stop_2645_);
v_res_2649_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0_spec__0___redArg(v_as_2643_, v_i_boxed_2647_, v_stop_boxed_2648_, v_b_2646_);
lean_dec_ref(v_as_2643_);
return v_res_2649_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0___redArg(lean_object* v_as_2652_, lean_object* v_start_2653_, lean_object* v_stop_2654_){
_start:
{
lean_object* v___x_2655_; uint8_t v___x_2656_; 
v___x_2655_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0___redArg___closed__0));
v___x_2656_ = lean_nat_dec_lt(v_start_2653_, v_stop_2654_);
if (v___x_2656_ == 0)
{
return v___x_2655_;
}
else
{
lean_object* v___x_2657_; uint8_t v___x_2658_; 
v___x_2657_ = lean_array_get_size(v_as_2652_);
v___x_2658_ = lean_nat_dec_le(v_stop_2654_, v___x_2657_);
if (v___x_2658_ == 0)
{
uint8_t v___x_2659_; 
v___x_2659_ = lean_nat_dec_lt(v_start_2653_, v___x_2657_);
if (v___x_2659_ == 0)
{
return v___x_2655_;
}
else
{
size_t v___x_2660_; size_t v___x_2661_; lean_object* v___x_2662_; 
v___x_2660_ = lean_usize_of_nat(v_start_2653_);
v___x_2661_ = lean_usize_of_nat(v___x_2657_);
v___x_2662_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0_spec__0___redArg(v_as_2652_, v___x_2660_, v___x_2661_, v___x_2655_);
return v___x_2662_;
}
}
else
{
size_t v___x_2663_; size_t v___x_2664_; lean_object* v___x_2665_; 
v___x_2663_ = lean_usize_of_nat(v_start_2653_);
v___x_2664_ = lean_usize_of_nat(v_stop_2654_);
v___x_2665_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0_spec__0___redArg(v_as_2652_, v___x_2663_, v___x_2664_, v___x_2655_);
return v___x_2665_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0___redArg___boxed(lean_object* v_as_2666_, lean_object* v_start_2667_, lean_object* v_stop_2668_){
_start:
{
lean_object* v_res_2669_; 
v_res_2669_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0___redArg(v_as_2666_, v_start_2667_, v_stop_2668_);
lean_dec(v_stop_2668_);
lean_dec(v_start_2667_);
lean_dec_ref(v_as_2666_);
return v_res_2669_;
}
}
static lean_object* _init_l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_2670_; lean_object* v_total_2671_; lean_object* v___x_2672_; 
v___x_2670_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___closed__0, &l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___closed__0);
v_total_2671_ = lean_unsigned_to_nat(0u);
v___x_2672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2672_, 0, v_total_2671_);
lean_ctor_set(v___x_2672_, 1, v___x_2670_);
return v___x_2672_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg(lean_object* v_snd_2673_, uint8_t v___y_2674_, lean_object* v___x_2675_, lean_object* v___x_2676_, lean_object* v_as_2677_, lean_object* v_j_2678_){
_start:
{
uint8_t v___y_2680_; lean_object* v___x_2685_; uint8_t v___x_2686_; 
v___x_2685_ = lean_array_get_size(v_as_2677_);
v___x_2686_ = lean_nat_dec_lt(v_j_2678_, v___x_2685_);
if (v___x_2686_ == 0)
{
lean_object* v___x_2687_; 
lean_dec(v_j_2678_);
v___x_2687_ = lean_box(0);
return v___x_2687_;
}
else
{
lean_object* v_total_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v_snd_2692_; lean_object* v_key_2693_; lean_object* v_key_2694_; uint8_t v___x_2695_; 
v_total_2688_ = lean_unsigned_to_nat(0u);
v___x_2689_ = lean_array_fget_borrowed(v_as_2677_, v_j_2678_);
v___x_2690_ = lean_obj_once(&l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0, &l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0_once, _init_l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0);
v___x_2691_ = lean_array_get_borrowed(v___x_2690_, v___x_2689_, v_total_2688_);
v_snd_2692_ = lean_ctor_get(v___x_2691_, 1);
v_key_2693_ = lean_ctor_get(v_snd_2692_, 0);
v_key_2694_ = lean_ctor_get(v_snd_2673_, 0);
v___x_2695_ = lean_nat_dec_eq(v___x_2675_, v___x_2676_);
switch(lean_obj_tag(v_key_2693_))
{
case 0:
{
if (lean_obj_tag(v_key_2694_) == 0)
{
v___y_2680_ = v___y_2674_;
goto v___jp_2679_;
}
else
{
v___y_2680_ = v___x_2695_;
goto v___jp_2679_;
}
}
case 1:
{
if (lean_obj_tag(v_key_2694_) == 1)
{
lean_object* v_str_2696_; lean_object* v_str_2697_; uint8_t v___x_2698_; 
v_str_2696_ = lean_ctor_get(v_key_2693_, 1);
v_str_2697_ = lean_ctor_get(v_key_2694_, 1);
v___x_2698_ = lean_string_dec_eq(v_str_2696_, v_str_2697_);
v___y_2680_ = v___x_2698_;
goto v___jp_2679_;
}
else
{
v___y_2680_ = v___x_2695_;
goto v___jp_2679_;
}
}
default: 
{
if (lean_obj_tag(v_key_2694_) == 2)
{
lean_object* v_i_2699_; lean_object* v_i_2700_; uint8_t v___x_2701_; 
v_i_2699_ = lean_ctor_get(v_key_2693_, 1);
v_i_2700_ = lean_ctor_get(v_key_2694_, 1);
v___x_2701_ = lean_nat_dec_eq(v_i_2699_, v_i_2700_);
v___y_2680_ = v___x_2701_;
goto v___jp_2679_;
}
else
{
v___y_2680_ = v___x_2695_;
goto v___jp_2679_;
}
}
}
}
v___jp_2679_:
{
if (v___y_2680_ == 0)
{
lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___x_2681_ = lean_unsigned_to_nat(1u);
v___x_2682_ = lean_nat_add(v_j_2678_, v___x_2681_);
lean_dec(v_j_2678_);
v_j_2678_ = v___x_2682_;
goto _start;
}
else
{
lean_object* v___x_2684_; 
v___x_2684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2684_, 0, v_j_2678_);
return v___x_2684_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___boxed(lean_object* v_snd_2702_, lean_object* v___y_2703_, lean_object* v___x_2704_, lean_object* v___x_2705_, lean_object* v_as_2706_, lean_object* v_j_2707_){
_start:
{
uint8_t v___y_12270__boxed_2708_; lean_object* v_res_2709_; 
v___y_12270__boxed_2708_ = lean_unbox(v___y_2703_);
v_res_2709_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg(v_snd_2702_, v___y_12270__boxed_2708_, v___x_2704_, v___x_2705_, v_as_2706_, v_j_2707_);
lean_dec_ref(v_as_2706_);
lean_dec(v___x_2705_);
lean_dec(v___x_2704_);
lean_dec_ref(v_snd_2702_);
return v_res_2709_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___lam__0(lean_object* v_fst_2710_, lean_object* v___x_2711_, lean_object* v_____r_2712_, lean_object* v_groups_2713_, lean_object* v___y_2714_){
_start:
{
lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2715_ = lean_nat_add(v_fst_2710_, v___x_2711_);
v___x_2716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2716_, 0, v___x_2715_);
lean_ctor_set(v___x_2716_, 1, v_groups_2713_);
v___x_2717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2717_, 0, v___x_2716_);
v___x_2718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2718_, 0, v___x_2717_);
lean_ctor_set(v___x_2718_, 1, v___y_2714_);
return v___x_2718_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___lam__0___boxed(lean_object* v_fst_2719_, lean_object* v___x_2720_, lean_object* v_____r_2721_, lean_object* v_groups_2722_, lean_object* v___y_2723_){
_start:
{
lean_object* v_res_2724_; 
v_res_2724_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___lam__0(v_fst_2719_, v___x_2720_, v_____r_2721_, v_groups_2722_, v___y_2723_);
lean_dec(v___x_2720_);
lean_dec(v_fst_2719_);
return v_res_2724_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; 
v___x_2727_ = lean_obj_once(&l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0, &l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0_once, _init_l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0);
v___x_2728_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0___boxed__const__1));
v___x_2729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2729_, 0, v___x_2728_);
lean_ctor_set(v___x_2729_, 1, v___x_2727_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg(lean_object* v___y_2730_, lean_object* v___x_2731_, lean_object* v___x_2732_, uint64_t v_fst_2733_, lean_object* v_a_2734_, lean_object* v___y_2735_){
_start:
{
lean_object* v___y_2737_; lean_object* v_fst_2752_; lean_object* v_snd_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2793_; 
v_fst_2752_ = lean_ctor_get(v_a_2734_, 0);
v_snd_2753_ = lean_ctor_get(v_a_2734_, 1);
v_isSharedCheck_2793_ = !lean_is_exclusive(v_a_2734_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2755_ = v_a_2734_;
v_isShared_2756_ = v_isSharedCheck_2793_;
goto v_resetjp_2754_;
}
else
{
lean_inc(v_snd_2753_);
lean_inc(v_fst_2752_);
lean_dec(v_a_2734_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2793_;
goto v_resetjp_2754_;
}
v___jp_2736_:
{
lean_object* v_fst_2738_; 
v_fst_2738_ = lean_ctor_get(v___y_2737_, 0);
lean_inc(v_fst_2738_);
if (lean_obj_tag(v_fst_2738_) == 0)
{
lean_object* v_snd_2739_; lean_object* v___x_2741_; uint8_t v_isShared_2742_; uint8_t v_isSharedCheck_2747_; 
v_snd_2739_ = lean_ctor_get(v___y_2737_, 1);
v_isSharedCheck_2747_ = !lean_is_exclusive(v___y_2737_);
if (v_isSharedCheck_2747_ == 0)
{
lean_object* v_unused_2748_; 
v_unused_2748_ = lean_ctor_get(v___y_2737_, 0);
lean_dec(v_unused_2748_);
v___x_2741_ = v___y_2737_;
v_isShared_2742_ = v_isSharedCheck_2747_;
goto v_resetjp_2740_;
}
else
{
lean_inc(v_snd_2739_);
lean_dec(v___y_2737_);
v___x_2741_ = lean_box(0);
v_isShared_2742_ = v_isSharedCheck_2747_;
goto v_resetjp_2740_;
}
v_resetjp_2740_:
{
lean_object* v_a_2743_; lean_object* v___x_2745_; 
v_a_2743_ = lean_ctor_get(v_fst_2738_, 0);
lean_inc(v_a_2743_);
lean_dec_ref_known(v_fst_2738_, 1);
if (v_isShared_2742_ == 0)
{
lean_ctor_set(v___x_2741_, 0, v_a_2743_);
v___x_2745_ = v___x_2741_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v_a_2743_);
lean_ctor_set(v_reuseFailAlloc_2746_, 1, v_snd_2739_);
v___x_2745_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
return v___x_2745_;
}
}
}
else
{
lean_object* v_snd_2749_; lean_object* v_a_2750_; 
v_snd_2749_ = lean_ctor_get(v___y_2737_, 1);
lean_inc(v_snd_2749_);
lean_dec_ref(v___y_2737_);
v_a_2750_ = lean_ctor_get(v_fst_2738_, 0);
lean_inc(v_a_2750_);
lean_dec_ref_known(v_fst_2738_, 1);
v_a_2734_ = v_a_2750_;
v___y_2735_ = v_snd_2749_;
goto _start;
}
}
v_resetjp_2754_:
{
lean_object* v___x_2757_; lean_object* v___y_2759_; uint8_t v___y_2763_; uint8_t v___x_2787_; 
v___x_2757_ = lean_unsigned_to_nat(1u);
v___x_2787_ = lean_nat_dec_lt(v_fst_2752_, v___x_2732_);
if (v___x_2787_ == 0)
{
v___y_2763_ = v___x_2787_;
goto v___jp_2762_;
}
else
{
lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v_fst_2790_; uint64_t v___x_2791_; uint8_t v___x_2792_; 
v___x_2788_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0);
v___x_2789_ = lean_array_get_borrowed(v___x_2788_, v___y_2730_, v_fst_2752_);
v_fst_2790_ = lean_ctor_get(v___x_2789_, 0);
v___x_2791_ = lean_unbox_uint64(v_fst_2790_);
v___x_2792_ = lean_uint64_dec_eq(v___x_2791_, v_fst_2733_);
v___y_2763_ = v___x_2792_;
goto v___jp_2762_;
}
v___jp_2758_:
{
lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2760_ = lean_box(0);
v___x_2761_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___lam__0(v_fst_2752_, v___x_2757_, v___x_2760_, v___y_2759_, v___y_2735_);
lean_dec(v_fst_2752_);
v___y_2737_ = v___x_2761_;
goto v___jp_2736_;
}
v___jp_2762_:
{
if (v___y_2763_ == 0)
{
lean_object* v___x_2765_; 
if (v_isShared_2756_ == 0)
{
v___x_2765_ = v___x_2755_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v_fst_2752_);
lean_ctor_set(v_reuseFailAlloc_2767_, 1, v_snd_2753_);
v___x_2765_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
lean_object* v___x_2766_; 
v___x_2766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2766_, 0, v___x_2765_);
lean_ctor_set(v___x_2766_, 1, v___y_2735_);
return v___x_2766_;
}
}
else
{
lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v_snd_2771_; lean_object* v_snd_2772_; lean_object* v___x_2773_; 
lean_del_object(v___x_2755_);
v___x_2768_ = lean_unsigned_to_nat(0u);
v___x_2769_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0);
v___x_2770_ = lean_array_get_borrowed(v___x_2769_, v___y_2730_, v_fst_2752_);
v_snd_2771_ = lean_ctor_get(v___x_2770_, 1);
v_snd_2772_ = lean_ctor_get(v_snd_2771_, 1);
v___x_2773_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg(v_snd_2772_, v___y_2763_, v___x_2731_, v___x_2732_, v_snd_2753_, v___x_2768_);
if (lean_obj_tag(v___x_2773_) == 0)
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; 
v___x_2774_ = lean_mk_empty_array_with_capacity(v___x_2757_);
lean_inc(v_snd_2771_);
v___x_2775_ = lean_array_push(v___x_2774_, v_snd_2771_);
v___x_2776_ = lean_array_push(v_snd_2753_, v___x_2775_);
v___x_2777_ = lean_box(0);
v___x_2778_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___lam__0(v_fst_2752_, v___x_2757_, v___x_2777_, v___x_2776_, v___y_2735_);
lean_dec(v_fst_2752_);
v___y_2737_ = v___x_2778_;
goto v___jp_2736_;
}
else
{
lean_object* v_val_2779_; lean_object* v___x_2780_; uint8_t v___x_2781_; 
v_val_2779_ = lean_ctor_get(v___x_2773_, 0);
lean_inc(v_val_2779_);
lean_dec_ref_known(v___x_2773_, 1);
v___x_2780_ = lean_array_get_size(v_snd_2753_);
v___x_2781_ = lean_nat_dec_lt(v_val_2779_, v___x_2780_);
if (v___x_2781_ == 0)
{
lean_dec(v_val_2779_);
v___y_2759_ = v_snd_2753_;
goto v___jp_2758_;
}
else
{
lean_object* v_v_2782_; lean_object* v___x_2783_; lean_object* v_xs_x27_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
v_v_2782_ = lean_array_fget(v_snd_2753_, v_val_2779_);
v___x_2783_ = lean_box(0);
v_xs_x27_2784_ = lean_array_fset(v_snd_2753_, v_val_2779_, v___x_2783_);
lean_inc(v_snd_2771_);
v___x_2785_ = lean_array_push(v_v_2782_, v_snd_2771_);
v___x_2786_ = lean_array_fset(v_xs_x27_2784_, v_val_2779_, v___x_2785_);
lean_dec(v_val_2779_);
v___y_2759_ = v___x_2786_;
goto v___jp_2758_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___boxed(lean_object* v___y_2794_, lean_object* v___x_2795_, lean_object* v___x_2796_, lean_object* v_fst_2797_, lean_object* v_a_2798_, lean_object* v___y_2799_){
_start:
{
uint64_t v_fst_12367__boxed_2800_; lean_object* v_res_2801_; 
v_fst_12367__boxed_2800_ = lean_unbox_uint64(v_fst_2797_);
lean_dec_ref(v_fst_2797_);
v_res_2801_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg(v___y_2794_, v___x_2795_, v___x_2796_, v_fst_12367__boxed_2800_, v_a_2798_, v___y_2799_);
lean_dec(v___x_2796_);
lean_dec(v___x_2795_);
lean_dec_ref(v___y_2794_);
return v_res_2801_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8_spec__9___redArg(lean_object* v_hi_2802_, lean_object* v_pivot_2803_, lean_object* v_as_2804_, lean_object* v_i_2805_, lean_object* v_k_2806_){
_start:
{
uint8_t v___y_2814_; uint8_t v___x_2818_; 
v___x_2818_ = lean_nat_dec_lt(v_k_2806_, v_hi_2802_);
if (v___x_2818_ == 0)
{
lean_object* v___x_2819_; lean_object* v___x_2820_; 
lean_dec(v_k_2806_);
v___x_2819_ = lean_array_fswap(v_as_2804_, v_i_2805_, v_hi_2802_);
v___x_2820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2820_, 0, v_i_2805_);
lean_ctor_set(v___x_2820_, 1, v___x_2819_);
return v___x_2820_;
}
else
{
lean_object* v___x_2821_; lean_object* v_snd_2822_; lean_object* v_snd_2823_; lean_object* v_fst_2824_; lean_object* v_fst_2825_; lean_object* v_fst_2826_; lean_object* v_fst_2827_; uint64_t v___x_2828_; uint64_t v___x_2829_; uint8_t v___x_2830_; 
v___x_2821_ = lean_array_fget_borrowed(v_as_2804_, v_k_2806_);
v_snd_2822_ = lean_ctor_get(v___x_2821_, 1);
v_snd_2823_ = lean_ctor_get(v_pivot_2803_, 1);
v_fst_2824_ = lean_ctor_get(v___x_2821_, 0);
v_fst_2825_ = lean_ctor_get(v_snd_2822_, 0);
v_fst_2826_ = lean_ctor_get(v_pivot_2803_, 0);
v_fst_2827_ = lean_ctor_get(v_snd_2823_, 0);
v___x_2828_ = lean_unbox_uint64(v_fst_2824_);
v___x_2829_ = lean_unbox_uint64(v_fst_2826_);
v___x_2830_ = lean_uint64_dec_lt(v___x_2828_, v___x_2829_);
if (v___x_2830_ == 0)
{
uint64_t v___x_2831_; uint64_t v___x_2832_; uint8_t v___x_2833_; 
v___x_2831_ = lean_unbox_uint64(v_fst_2824_);
v___x_2832_ = lean_unbox_uint64(v_fst_2826_);
v___x_2833_ = lean_uint64_dec_eq(v___x_2831_, v___x_2832_);
if (v___x_2833_ == 0)
{
v___y_2814_ = v___x_2833_;
goto v___jp_2813_;
}
else
{
uint8_t v___x_2834_; 
v___x_2834_ = lean_nat_dec_lt(v_fst_2825_, v_fst_2827_);
v___y_2814_ = v___x_2834_;
goto v___jp_2813_;
}
}
else
{
goto v___jp_2807_;
}
}
v___jp_2807_:
{
lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; 
v___x_2808_ = lean_array_fswap(v_as_2804_, v_i_2805_, v_k_2806_);
v___x_2809_ = lean_unsigned_to_nat(1u);
v___x_2810_ = lean_nat_add(v_i_2805_, v___x_2809_);
lean_dec(v_i_2805_);
v___x_2811_ = lean_nat_add(v_k_2806_, v___x_2809_);
lean_dec(v_k_2806_);
v_as_2804_ = v___x_2808_;
v_i_2805_ = v___x_2810_;
v_k_2806_ = v___x_2811_;
goto _start;
}
v___jp_2813_:
{
if (v___y_2814_ == 0)
{
lean_object* v___x_2815_; lean_object* v___x_2816_; 
v___x_2815_ = lean_unsigned_to_nat(1u);
v___x_2816_ = lean_nat_add(v_k_2806_, v___x_2815_);
lean_dec(v_k_2806_);
v_k_2806_ = v___x_2816_;
goto _start;
}
else
{
goto v___jp_2807_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8_spec__9___redArg___boxed(lean_object* v_hi_2835_, lean_object* v_pivot_2836_, lean_object* v_as_2837_, lean_object* v_i_2838_, lean_object* v_k_2839_){
_start:
{
lean_object* v_res_2840_; 
v_res_2840_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8_spec__9___redArg(v_hi_2835_, v_pivot_2836_, v_as_2837_, v_i_2838_, v_k_2839_);
lean_dec_ref(v_pivot_2836_);
lean_dec(v_hi_2835_);
return v_res_2840_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___redArg___lam__0(uint8_t v___x_2841_, lean_object* v_x_2842_, lean_object* v_x_2843_){
_start:
{
lean_object* v_snd_2844_; lean_object* v_snd_2845_; lean_object* v_fst_2846_; lean_object* v_fst_2847_; lean_object* v_fst_2848_; lean_object* v_fst_2849_; uint64_t v___x_2850_; uint64_t v___x_2851_; uint8_t v___x_2852_; 
v_snd_2844_ = lean_ctor_get(v_x_2842_, 1);
v_snd_2845_ = lean_ctor_get(v_x_2843_, 1);
v_fst_2846_ = lean_ctor_get(v_x_2842_, 0);
v_fst_2847_ = lean_ctor_get(v_snd_2844_, 0);
v_fst_2848_ = lean_ctor_get(v_x_2843_, 0);
v_fst_2849_ = lean_ctor_get(v_snd_2845_, 0);
v___x_2850_ = lean_unbox_uint64(v_fst_2846_);
v___x_2851_ = lean_unbox_uint64(v_fst_2848_);
v___x_2852_ = lean_uint64_dec_lt(v___x_2850_, v___x_2851_);
if (v___x_2852_ == 0)
{
uint64_t v___x_2853_; uint64_t v___x_2854_; uint8_t v___x_2855_; 
v___x_2853_ = lean_unbox_uint64(v_fst_2846_);
v___x_2854_ = lean_unbox_uint64(v_fst_2848_);
v___x_2855_ = lean_uint64_dec_eq(v___x_2853_, v___x_2854_);
if (v___x_2855_ == 0)
{
return v___x_2855_;
}
else
{
uint8_t v___x_2856_; 
v___x_2856_ = lean_nat_dec_lt(v_fst_2847_, v_fst_2849_);
return v___x_2856_;
}
}
else
{
return v___x_2841_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___redArg___lam__0___boxed(lean_object* v___x_2857_, lean_object* v_x_2858_, lean_object* v_x_2859_){
_start:
{
uint8_t v___x_12551__boxed_2860_; uint8_t v_res_2861_; lean_object* v_r_2862_; 
v___x_12551__boxed_2860_ = lean_unbox(v___x_2857_);
v_res_2861_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___redArg___lam__0(v___x_12551__boxed_2860_, v_x_2858_, v_x_2859_);
lean_dec_ref(v_x_2859_);
lean_dec_ref(v_x_2858_);
v_r_2862_ = lean_box(v_res_2861_);
return v_r_2862_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___redArg(lean_object* v_n_2863_, lean_object* v_as_2864_, lean_object* v_lo_2865_, lean_object* v_hi_2866_){
_start:
{
lean_object* v___y_2868_; uint8_t v___x_2878_; 
v___x_2878_ = lean_nat_dec_lt(v_lo_2865_, v_hi_2866_);
if (v___x_2878_ == 0)
{
lean_dec(v_lo_2865_);
return v_as_2864_;
}
else
{
lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v_mid_2881_; lean_object* v___y_2883_; lean_object* v___y_2889_; lean_object* v___x_2894_; lean_object* v___x_2895_; uint8_t v___x_2896_; 
v___x_2879_ = lean_nat_add(v_lo_2865_, v_hi_2866_);
v___x_2880_ = lean_unsigned_to_nat(1u);
v_mid_2881_ = lean_nat_shiftr(v___x_2879_, v___x_2880_);
lean_dec(v___x_2879_);
v___x_2894_ = lean_array_fget_borrowed(v_as_2864_, v_mid_2881_);
v___x_2895_ = lean_array_fget_borrowed(v_as_2864_, v_lo_2865_);
v___x_2896_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___redArg___lam__0(v___x_2878_, v___x_2894_, v___x_2895_);
if (v___x_2896_ == 0)
{
v___y_2889_ = v_as_2864_;
goto v___jp_2888_;
}
else
{
lean_object* v___x_2897_; 
v___x_2897_ = lean_array_fswap(v_as_2864_, v_lo_2865_, v_mid_2881_);
v___y_2889_ = v___x_2897_;
goto v___jp_2888_;
}
v___jp_2882_:
{
lean_object* v___x_2884_; lean_object* v___x_2885_; uint8_t v___x_2886_; 
v___x_2884_ = lean_array_fget_borrowed(v___y_2883_, v_mid_2881_);
v___x_2885_ = lean_array_fget_borrowed(v___y_2883_, v_hi_2866_);
v___x_2886_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___redArg___lam__0(v___x_2878_, v___x_2884_, v___x_2885_);
if (v___x_2886_ == 0)
{
lean_dec(v_mid_2881_);
v___y_2868_ = v___y_2883_;
goto v___jp_2867_;
}
else
{
lean_object* v___x_2887_; 
v___x_2887_ = lean_array_fswap(v___y_2883_, v_mid_2881_, v_hi_2866_);
lean_dec(v_mid_2881_);
v___y_2868_ = v___x_2887_;
goto v___jp_2867_;
}
}
v___jp_2888_:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; uint8_t v___x_2892_; 
v___x_2890_ = lean_array_fget_borrowed(v___y_2889_, v_hi_2866_);
v___x_2891_ = lean_array_fget_borrowed(v___y_2889_, v_lo_2865_);
v___x_2892_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___redArg___lam__0(v___x_2878_, v___x_2890_, v___x_2891_);
if (v___x_2892_ == 0)
{
v___y_2883_ = v___y_2889_;
goto v___jp_2882_;
}
else
{
lean_object* v___x_2893_; 
v___x_2893_ = lean_array_fswap(v___y_2889_, v_lo_2865_, v_hi_2866_);
v___y_2883_ = v___x_2893_;
goto v___jp_2882_;
}
}
}
v___jp_2867_:
{
lean_object* v_pivot_2869_; lean_object* v___x_2870_; lean_object* v_fst_2871_; lean_object* v_snd_2872_; uint8_t v___x_2873_; 
v_pivot_2869_ = lean_array_fget(v___y_2868_, v_hi_2866_);
lean_inc_n(v_lo_2865_, 2);
v___x_2870_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8_spec__9___redArg(v_hi_2866_, v_pivot_2869_, v___y_2868_, v_lo_2865_, v_lo_2865_);
lean_dec(v_pivot_2869_);
v_fst_2871_ = lean_ctor_get(v___x_2870_, 0);
lean_inc(v_fst_2871_);
v_snd_2872_ = lean_ctor_get(v___x_2870_, 1);
lean_inc(v_snd_2872_);
lean_dec_ref(v___x_2870_);
v___x_2873_ = lean_nat_dec_le(v_hi_2866_, v_fst_2871_);
if (v___x_2873_ == 0)
{
lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; 
v___x_2874_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___redArg(v_n_2863_, v_snd_2872_, v_lo_2865_, v_fst_2871_);
v___x_2875_ = lean_unsigned_to_nat(1u);
v___x_2876_ = lean_nat_add(v_fst_2871_, v___x_2875_);
lean_dec(v_fst_2871_);
v_as_2864_ = v___x_2874_;
v_lo_2865_ = v___x_2876_;
goto _start;
}
else
{
lean_dec(v_fst_2871_);
lean_dec(v_lo_2865_);
return v_snd_2872_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___redArg___boxed(lean_object* v_n_2898_, lean_object* v_as_2899_, lean_object* v_lo_2900_, lean_object* v_hi_2901_){
_start:
{
lean_object* v_res_2902_; 
v_res_2902_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___redArg(v_n_2898_, v_as_2899_, v_lo_2900_, v_hi_2901_);
lean_dec(v_hi_2901_);
lean_dec(v_n_2898_);
return v_res_2902_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__2___redArg(lean_object* v_as_2903_, size_t v_sz_2904_, size_t v_i_2905_, lean_object* v_b_2906_, lean_object* v___y_2907_){
_start:
{
uint8_t v___x_2908_; 
v___x_2908_ = lean_usize_dec_lt(v_i_2905_, v_sz_2904_);
if (v___x_2908_ == 0)
{
lean_object* v___x_2909_; 
v___x_2909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2909_, 0, v_b_2906_);
lean_ctor_set(v___x_2909_, 1, v___y_2907_);
return v___x_2909_;
}
else
{
lean_object* v_a_2910_; lean_object* v_snd_2911_; lean_object* v_children_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; size_t v___x_2915_; size_t v___x_2916_; 
v_a_2910_ = lean_array_uget_borrowed(v_as_2903_, v_i_2905_);
v_snd_2911_ = lean_ctor_get(v_a_2910_, 1);
v_children_2912_ = lean_ctor_get(v_snd_2911_, 2);
v___x_2913_ = lean_array_get_size(v_children_2912_);
v___x_2914_ = lean_nat_add(v_b_2906_, v___x_2913_);
lean_dec(v_b_2906_);
v___x_2915_ = ((size_t)1ULL);
v___x_2916_ = lean_usize_add(v_i_2905_, v___x_2915_);
v_i_2905_ = v___x_2916_;
v_b_2906_ = v___x_2914_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__2___redArg___boxed(lean_object* v_as_2918_, lean_object* v_sz_2919_, lean_object* v_i_2920_, lean_object* v_b_2921_, lean_object* v___y_2922_){
_start:
{
size_t v_sz_boxed_2923_; size_t v_i_boxed_2924_; lean_object* v_res_2925_; 
v_sz_boxed_2923_ = lean_unbox_usize(v_sz_2919_);
lean_dec(v_sz_2919_);
v_i_boxed_2924_ = lean_unbox_usize(v_i_2920_);
lean_dec(v_i_2920_);
v_res_2925_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__2___redArg(v_as_2918_, v_sz_boxed_2923_, v_i_boxed_2924_, v_b_2921_, v___y_2922_);
lean_dec_ref(v_as_2918_);
return v_res_2925_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__7___redArg(lean_object* v___y_2929_, lean_object* v_a_2930_, lean_object* v___y_2931_){
_start:
{
lean_object* v_fst_2932_; lean_object* v_snd_2933_; lean_object* v___x_2935_; uint8_t v_isShared_2936_; uint8_t v_isSharedCheck_2998_; 
v_fst_2932_ = lean_ctor_get(v_a_2930_, 0);
v_snd_2933_ = lean_ctor_get(v_a_2930_, 1);
v_isSharedCheck_2998_ = !lean_is_exclusive(v_a_2930_);
if (v_isSharedCheck_2998_ == 0)
{
v___x_2935_ = v_a_2930_;
v_isShared_2936_ = v_isSharedCheck_2998_;
goto v_resetjp_2934_;
}
else
{
lean_inc(v_snd_2933_);
lean_inc(v_fst_2932_);
lean_dec(v_a_2930_);
v___x_2935_ = lean_box(0);
v_isShared_2936_ = v_isSharedCheck_2998_;
goto v_resetjp_2934_;
}
v_resetjp_2934_:
{
lean_object* v___x_2937_; uint8_t v___x_2938_; 
v___x_2937_ = lean_array_get_size(v___y_2929_);
v___x_2938_ = lean_nat_dec_lt(v_snd_2933_, v___x_2937_);
if (v___x_2938_ == 0)
{
lean_object* v___x_2940_; 
if (v_isShared_2936_ == 0)
{
v___x_2940_ = v___x_2935_;
goto v_reusejp_2939_;
}
else
{
lean_object* v_reuseFailAlloc_2942_; 
v_reuseFailAlloc_2942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2942_, 0, v_fst_2932_);
lean_ctor_set(v_reuseFailAlloc_2942_, 1, v_snd_2933_);
v___x_2940_ = v_reuseFailAlloc_2942_;
goto v_reusejp_2939_;
}
v_reusejp_2939_:
{
lean_object* v___x_2941_; 
v___x_2941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2941_, 0, v___x_2940_);
lean_ctor_set(v___x_2941_, 1, v___y_2931_);
return v___x_2941_;
}
}
else
{
lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v_snd_2945_; lean_object* v_fst_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2997_; 
lean_del_object(v___x_2935_);
v___x_2943_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0);
v___x_2944_ = lean_array_get(v___x_2943_, v___y_2929_, v_snd_2933_);
v_snd_2945_ = lean_ctor_get(v___x_2944_, 1);
v_fst_2946_ = lean_ctor_get(v___x_2944_, 0);
v_isSharedCheck_2997_ = !lean_is_exclusive(v___x_2944_);
if (v_isSharedCheck_2997_ == 0)
{
v___x_2948_ = v___x_2944_;
v_isShared_2949_ = v_isSharedCheck_2997_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_snd_2945_);
lean_inc(v_fst_2946_);
lean_dec(v___x_2944_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2997_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v_fst_2950_; lean_object* v_snd_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; uint8_t v___x_2961_; 
v_fst_2950_ = lean_ctor_get(v_snd_2945_, 0);
v_snd_2951_ = lean_ctor_get(v_snd_2945_, 1);
v___x_2952_ = lean_unsigned_to_nat(1u);
v___x_2953_ = lean_nat_add(v_snd_2933_, v___x_2952_);
lean_dec(v_snd_2933_);
v___x_2961_ = lean_nat_dec_eq(v___x_2953_, v___x_2937_);
if (v___x_2961_ == 0)
{
lean_object* v___x_2962_; lean_object* v_fst_2963_; lean_object* v___x_2965_; uint8_t v_isShared_2966_; uint8_t v_isSharedCheck_2995_; 
v___x_2962_ = lean_array_get(v___x_2943_, v___y_2929_, v___x_2953_);
v_fst_2963_ = lean_ctor_get(v___x_2962_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v___x_2962_);
if (v_isSharedCheck_2995_ == 0)
{
lean_object* v_unused_2996_; 
v_unused_2996_ = lean_ctor_get(v___x_2962_, 1);
lean_dec(v_unused_2996_);
v___x_2965_ = v___x_2962_;
v_isShared_2966_ = v_isSharedCheck_2995_;
goto v_resetjp_2964_;
}
else
{
lean_inc(v_fst_2963_);
lean_dec(v___x_2962_);
v___x_2965_ = lean_box(0);
v_isShared_2966_ = v_isSharedCheck_2995_;
goto v_resetjp_2964_;
}
v_resetjp_2964_:
{
uint64_t v___x_2967_; uint64_t v___x_2968_; uint8_t v___x_2969_; 
v___x_2967_ = lean_unbox_uint64(v_fst_2963_);
lean_dec(v_fst_2963_);
v___x_2968_ = lean_unbox_uint64(v_fst_2946_);
v___x_2969_ = lean_uint64_dec_eq(v___x_2967_, v___x_2968_);
if (v___x_2969_ == 0)
{
lean_inc(v_snd_2951_);
lean_inc(v_fst_2950_);
lean_del_object(v___x_2965_);
lean_dec(v_fst_2946_);
lean_dec(v_snd_2945_);
goto v___jp_2954_;
}
else
{
if (v___x_2961_ == 0)
{
lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2974_; 
lean_del_object(v___x_2948_);
v___x_2970_ = lean_mk_empty_array_with_capacity(v___x_2952_);
lean_inc_ref(v___x_2970_);
v___x_2971_ = lean_array_push(v___x_2970_, v_snd_2945_);
v___x_2972_ = lean_array_push(v___x_2970_, v___x_2971_);
lean_inc(v___x_2953_);
if (v_isShared_2966_ == 0)
{
lean_ctor_set(v___x_2965_, 1, v___x_2972_);
lean_ctor_set(v___x_2965_, 0, v___x_2953_);
v___x_2974_ = v___x_2965_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v___x_2953_);
lean_ctor_set(v_reuseFailAlloc_2994_, 1, v___x_2972_);
v___x_2974_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
uint64_t v___x_2975_; lean_object* v___x_2976_; lean_object* v_fst_2977_; lean_object* v_snd_2978_; lean_object* v_fst_2979_; lean_object* v_snd_2980_; size_t v_sz_2981_; size_t v___x_2982_; lean_object* v___x_2983_; lean_object* v_fst_2984_; lean_object* v_snd_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_2993_; 
v___x_2975_ = lean_unbox_uint64(v_fst_2946_);
lean_dec(v_fst_2946_);
v___x_2976_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg(v___y_2929_, v___x_2953_, v___x_2937_, v___x_2975_, v___x_2974_, v___y_2931_);
lean_dec(v___x_2953_);
v_fst_2977_ = lean_ctor_get(v___x_2976_, 0);
lean_inc(v_fst_2977_);
v_snd_2978_ = lean_ctor_get(v___x_2976_, 1);
lean_inc(v_snd_2978_);
lean_dec_ref(v___x_2976_);
v_fst_2979_ = lean_ctor_get(v_fst_2977_, 0);
lean_inc(v_fst_2979_);
v_snd_2980_ = lean_ctor_get(v_fst_2977_, 1);
lean_inc(v_snd_2980_);
lean_dec(v_fst_2977_);
v_sz_2981_ = lean_array_size(v_snd_2980_);
v___x_2982_ = ((size_t)0ULL);
v___x_2983_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__6___redArg(v_snd_2980_, v_sz_2981_, v___x_2982_, v_fst_2932_, v_snd_2978_);
lean_dec(v_snd_2980_);
v_fst_2984_ = lean_ctor_get(v___x_2983_, 0);
v_snd_2985_ = lean_ctor_get(v___x_2983_, 1);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2983_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2987_ = v___x_2983_;
v_isShared_2988_ = v_isSharedCheck_2993_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_snd_2985_);
lean_inc(v_fst_2984_);
lean_dec(v___x_2983_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_2993_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2990_; 
if (v_isShared_2988_ == 0)
{
lean_ctor_set(v___x_2987_, 1, v_fst_2979_);
v___x_2990_ = v___x_2987_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v_fst_2984_);
lean_ctor_set(v_reuseFailAlloc_2992_, 1, v_fst_2979_);
v___x_2990_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
v_a_2930_ = v___x_2990_;
v___y_2931_ = v_snd_2985_;
goto _start;
}
}
}
}
else
{
lean_inc(v_snd_2951_);
lean_inc(v_fst_2950_);
lean_del_object(v___x_2965_);
lean_dec(v_fst_2946_);
lean_dec(v_snd_2945_);
goto v___jp_2954_;
}
}
}
}
else
{
lean_inc(v_snd_2951_);
lean_inc(v_fst_2950_);
lean_dec(v_fst_2946_);
lean_dec(v_snd_2945_);
goto v___jp_2954_;
}
v___jp_2954_:
{
lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2958_; 
v___x_2955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2955_, 0, v_fst_2950_);
lean_ctor_set(v___x_2955_, 1, v_snd_2951_);
v___x_2956_ = lean_array_push(v_fst_2932_, v___x_2955_);
if (v_isShared_2949_ == 0)
{
lean_ctor_set(v___x_2948_, 1, v___x_2953_);
lean_ctor_set(v___x_2948_, 0, v___x_2956_);
v___x_2958_ = v___x_2948_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v___x_2956_);
lean_ctor_set(v_reuseFailAlloc_2960_, 1, v___x_2953_);
v___x_2958_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
v_a_2930_ = v___x_2958_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands___redArg(lean_object* v_key_2999_, lean_object* v_cands_3000_, lean_object* v_a_3001_){
_start:
{
lean_object* v___y_3003_; lean_object* v___y_3004_; lean_object* v___y_3005_; lean_object* v___x_3009_; lean_object* v___x_3010_; uint8_t v___x_3011_; 
v___x_3009_ = lean_array_get_size(v_cands_3000_);
v___x_3010_ = lean_unsigned_to_nat(1u);
v___x_3011_ = lean_nat_dec_eq(v___x_3009_, v___x_3010_);
if (v___x_3011_ == 0)
{
lean_object* v_total_3012_; lean_object* v_entries_3013_; lean_object* v___y_3015_; lean_object* v___y_3016_; lean_object* v___y_3028_; lean_object* v___y_3029_; lean_object* v___y_3030_; lean_object* v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3035_; lean_object* v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3042_; lean_object* v___x_3056_; uint8_t v___x_3057_; 
v_total_3012_ = lean_unsigned_to_nat(0u);
v_entries_3013_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0___redArg(v_cands_3000_, v_total_3012_, v___x_3009_);
v___x_3056_ = lean_array_get_size(v_entries_3013_);
v___x_3057_ = lean_nat_dec_lt(v___x_3010_, v___x_3056_);
if (v___x_3057_ == 0)
{
v___y_3042_ = v_a_3001_;
goto v___jp_3041_;
}
else
{
lean_object* v___x_3058_; lean_object* v___x_3059_; 
lean_inc_ref(v_entries_3013_);
lean_inc(v_key_2999_);
v___x_3058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3058_, 0, v_key_2999_);
lean_ctor_set(v___x_3058_, 1, v_entries_3013_);
v___x_3059_ = lean_array_push(v_a_3001_, v___x_3058_);
v___y_3042_ = v___x_3059_;
goto v___jp_3041_;
}
v___jp_3014_:
{
lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v_fst_3019_; lean_object* v_snd_3020_; lean_object* v_fst_3021_; lean_object* v___x_3022_; uint8_t v___x_3023_; 
v___x_3017_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands___redArg___closed__0));
v___x_3018_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__7___redArg(v___y_3016_, v___x_3017_, v___y_3015_);
lean_dec_ref(v___y_3016_);
v_fst_3019_ = lean_ctor_get(v___x_3018_, 0);
lean_inc(v_fst_3019_);
v_snd_3020_ = lean_ctor_get(v___x_3018_, 1);
lean_inc(v_snd_3020_);
lean_dec_ref(v___x_3018_);
v_fst_3021_ = lean_ctor_get(v_fst_3019_, 0);
lean_inc(v_fst_3021_);
lean_dec(v_fst_3019_);
v___x_3022_ = lean_array_get_size(v_entries_3013_);
v___x_3023_ = lean_nat_dec_lt(v_total_3012_, v___x_3022_);
if (v___x_3023_ == 0)
{
lean_object* v___x_3024_; 
lean_dec_ref(v_entries_3013_);
v___x_3024_ = lean_box(0);
v___y_3003_ = v_snd_3020_;
v___y_3004_ = v_fst_3021_;
v___y_3005_ = v___x_3024_;
goto v___jp_3002_;
}
else
{
lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3025_ = lean_array_fget(v_entries_3013_, v_total_3012_);
lean_dec_ref(v_entries_3013_);
v___x_3026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3026_, 0, v___x_3025_);
v___y_3003_ = v_snd_3020_;
v___y_3004_ = v_fst_3021_;
v___y_3005_ = v___x_3026_;
goto v___jp_3002_;
}
}
v___jp_3027_:
{
lean_object* v___x_3033_; 
v___x_3033_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___redArg(v___y_3031_, v___y_3030_, v___y_3029_, v___y_3032_);
lean_dec(v___y_3032_);
lean_dec(v___y_3031_);
v___y_3015_ = v___y_3028_;
v___y_3016_ = v___x_3033_;
goto v___jp_3014_;
}
v___jp_3034_:
{
uint8_t v___x_3040_; 
v___x_3040_ = lean_nat_dec_le(v___y_3039_, v___y_3036_);
if (v___x_3040_ == 0)
{
lean_dec(v___y_3036_);
lean_inc(v___y_3039_);
v___y_3028_ = v___y_3035_;
v___y_3029_ = v___y_3039_;
v___y_3030_ = v___y_3037_;
v___y_3031_ = v___y_3038_;
v___y_3032_ = v___y_3039_;
goto v___jp_3027_;
}
else
{
v___y_3028_ = v___y_3035_;
v___y_3029_ = v___y_3039_;
v___y_3030_ = v___y_3037_;
v___y_3031_ = v___y_3038_;
v___y_3032_ = v___y_3036_;
goto v___jp_3027_;
}
}
v___jp_3041_:
{
size_t v_sz_3043_; size_t v___x_3044_; lean_object* v___x_3045_; lean_object* v_fst_3046_; lean_object* v_snd_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v_fst_3050_; lean_object* v_snd_3051_; lean_object* v___x_3052_; uint8_t v___x_3053_; 
v_sz_3043_ = lean_array_size(v_cands_3000_);
v___x_3044_ = ((size_t)0ULL);
v___x_3045_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__2___redArg(v_cands_3000_, v_sz_3043_, v___x_3044_, v_total_3012_, v___y_3042_);
v_fst_3046_ = lean_ctor_get(v___x_3045_, 0);
lean_inc(v_fst_3046_);
v_snd_3047_ = lean_ctor_get(v___x_3045_, 1);
lean_inc(v_snd_3047_);
lean_dec_ref(v___x_3045_);
v___x_3048_ = lean_mk_empty_array_with_capacity(v_fst_3046_);
lean_dec(v_fst_3046_);
v___x_3049_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__3___redArg(v_cands_3000_, v_sz_3043_, v___x_3044_, v___x_3048_, v_snd_3047_);
v_fst_3050_ = lean_ctor_get(v___x_3049_, 0);
lean_inc(v_fst_3050_);
v_snd_3051_ = lean_ctor_get(v___x_3049_, 1);
lean_inc(v_snd_3051_);
lean_dec_ref(v___x_3049_);
v___x_3052_ = lean_array_get_size(v_fst_3050_);
v___x_3053_ = lean_nat_dec_eq(v___x_3052_, v_total_3012_);
if (v___x_3053_ == 0)
{
lean_object* v___x_3054_; uint8_t v___x_3055_; 
v___x_3054_ = lean_nat_sub(v___x_3052_, v___x_3010_);
v___x_3055_ = lean_nat_dec_le(v_total_3012_, v___x_3054_);
if (v___x_3055_ == 0)
{
lean_inc(v___x_3054_);
v___y_3035_ = v_snd_3051_;
v___y_3036_ = v___x_3054_;
v___y_3037_ = v_fst_3050_;
v___y_3038_ = v___x_3052_;
v___y_3039_ = v___x_3054_;
goto v___jp_3034_;
}
else
{
v___y_3035_ = v_snd_3051_;
v___y_3036_ = v___x_3054_;
v___y_3037_ = v_fst_3050_;
v___y_3038_ = v___x_3052_;
v___y_3039_ = v_total_3012_;
goto v___jp_3034_;
}
}
else
{
v___y_3015_ = v_snd_3051_;
v___y_3016_ = v_fst_3050_;
goto v___jp_3014_;
}
}
}
else
{
lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v_fst_3063_; lean_object* v_snd_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3072_; 
lean_dec(v_key_2999_);
v___x_3060_ = lean_unsigned_to_nat(0u);
v___x_3061_ = lean_obj_once(&l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0, &l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0_once, _init_l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0);
v___x_3062_ = lean_array_get(v___x_3061_, v_cands_3000_, v___x_3060_);
v_fst_3063_ = lean_ctor_get(v___x_3062_, 0);
v_snd_3064_ = lean_ctor_get(v___x_3062_, 1);
v_isSharedCheck_3072_ = !lean_is_exclusive(v___x_3062_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3066_ = v___x_3062_;
v_isShared_3067_ = v_isSharedCheck_3072_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_snd_3064_);
lean_inc(v_fst_3063_);
lean_dec(v___x_3062_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3072_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v___x_3068_; lean_object* v___x_3070_; 
v___x_3068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3068_, 0, v_fst_3063_);
lean_ctor_set(v___x_3068_, 1, v_snd_3064_);
if (v_isShared_3067_ == 0)
{
lean_ctor_set(v___x_3066_, 1, v_a_3001_);
lean_ctor_set(v___x_3066_, 0, v___x_3068_);
v___x_3070_ = v___x_3066_;
goto v_reusejp_3069_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v___x_3068_);
lean_ctor_set(v_reuseFailAlloc_3071_, 1, v_a_3001_);
v___x_3070_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3069_;
}
v_reusejp_3069_:
{
return v___x_3070_;
}
}
}
v___jp_3002_:
{
lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; 
v___x_3006_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v___y_3004_);
v___x_3007_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3007_, 0, v_key_2999_);
lean_ctor_set(v___x_3007_, 1, v___y_3005_);
lean_ctor_set(v___x_3007_, 2, v___y_3004_);
lean_ctor_set(v___x_3007_, 3, v___x_3006_);
v___x_3008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3008_, 0, v___x_3007_);
lean_ctor_set(v___x_3008_, 1, v___y_3003_);
return v___x_3008_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__6___redArg(lean_object* v_as_3073_, size_t v_sz_3074_, size_t v_i_3075_, lean_object* v_b_3076_, lean_object* v___y_3077_){
_start:
{
uint8_t v___x_3078_; 
v___x_3078_ = lean_usize_dec_lt(v_i_3075_, v_sz_3074_);
if (v___x_3078_ == 0)
{
lean_object* v___x_3079_; 
v___x_3079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3079_, 0, v_b_3076_);
lean_ctor_set(v___x_3079_, 1, v___y_3077_);
return v___x_3079_;
}
else
{
lean_object* v_total_3080_; lean_object* v_a_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v_snd_3084_; lean_object* v_key_3085_; lean_object* v___x_3086_; lean_object* v_fst_3087_; lean_object* v_snd_3088_; lean_object* v___x_3089_; size_t v___x_3090_; size_t v___x_3091_; 
v_total_3080_ = lean_unsigned_to_nat(0u);
v_a_3081_ = lean_array_uget_borrowed(v_as_3073_, v_i_3075_);
v___x_3082_ = lean_obj_once(&l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0, &l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0_once, _init_l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0);
v___x_3083_ = lean_array_get_borrowed(v___x_3082_, v_a_3081_, v_total_3080_);
v_snd_3084_ = lean_ctor_get(v___x_3083_, 1);
v_key_3085_ = lean_ctor_get(v_snd_3084_, 0);
lean_inc(v_key_3085_);
v___x_3086_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands___redArg(v_key_3085_, v_a_3081_, v___y_3077_);
v_fst_3087_ = lean_ctor_get(v___x_3086_, 0);
lean_inc(v_fst_3087_);
v_snd_3088_ = lean_ctor_get(v___x_3086_, 1);
lean_inc(v_snd_3088_);
lean_dec_ref(v___x_3086_);
v___x_3089_ = lean_array_push(v_b_3076_, v_fst_3087_);
v___x_3090_ = ((size_t)1ULL);
v___x_3091_ = lean_usize_add(v_i_3075_, v___x_3090_);
v_i_3075_ = v___x_3091_;
v_b_3076_ = v___x_3089_;
v___y_3077_ = v_snd_3088_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__6___redArg___boxed(lean_object* v_as_3093_, lean_object* v_sz_3094_, lean_object* v_i_3095_, lean_object* v_b_3096_, lean_object* v___y_3097_){
_start:
{
size_t v_sz_boxed_3098_; size_t v_i_boxed_3099_; lean_object* v_res_3100_; 
v_sz_boxed_3098_ = lean_unbox_usize(v_sz_3094_);
lean_dec(v_sz_3094_);
v_i_boxed_3099_ = lean_unbox_usize(v_i_3095_);
lean_dec(v_i_3095_);
v_res_3100_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__6___redArg(v_as_3093_, v_sz_boxed_3098_, v_i_boxed_3099_, v_b_3096_, v___y_3097_);
lean_dec_ref(v_as_3093_);
return v_res_3100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__7___redArg___boxed(lean_object* v___y_3101_, lean_object* v_a_3102_, lean_object* v___y_3103_){
_start:
{
lean_object* v_res_3104_; 
v_res_3104_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__7___redArg(v___y_3101_, v_a_3102_, v___y_3103_);
lean_dec_ref(v___y_3101_);
return v_res_3104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands___redArg___boxed(lean_object* v_key_3105_, lean_object* v_cands_3106_, lean_object* v_a_3107_){
_start:
{
lean_object* v_res_3108_; 
v_res_3108_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands___redArg(v_key_3105_, v_cands_3106_, v_a_3107_);
lean_dec_ref(v_cands_3106_);
return v_res_3108_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands(lean_object* v_00_u03b1_3109_, lean_object* v_key_3110_, lean_object* v_cands_3111_, lean_object* v_a_3112_){
_start:
{
lean_object* v___x_3113_; 
v___x_3113_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands___redArg(v_key_3110_, v_cands_3111_, v_a_3112_);
return v___x_3113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands___boxed(lean_object* v_00_u03b1_3114_, lean_object* v_key_3115_, lean_object* v_cands_3116_, lean_object* v_a_3117_){
_start:
{
lean_object* v_res_3118_; 
v_res_3118_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands(v_00_u03b1_3114_, v_key_3115_, v_cands_3116_, v_a_3117_);
lean_dec_ref(v_cands_3116_);
return v_res_3118_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0(lean_object* v_00_u03b1_3119_, lean_object* v_as_3120_, lean_object* v_start_3121_, lean_object* v_stop_3122_){
_start:
{
lean_object* v___x_3123_; 
v___x_3123_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0___redArg(v_as_3120_, v_start_3121_, v_stop_3122_);
return v___x_3123_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0___boxed(lean_object* v_00_u03b1_3124_, lean_object* v_as_3125_, lean_object* v_start_3126_, lean_object* v_stop_3127_){
_start:
{
lean_object* v_res_3128_; 
v_res_3128_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0(v_00_u03b1_3124_, v_as_3125_, v_start_3126_, v_stop_3127_);
lean_dec(v_stop_3127_);
lean_dec(v_start_3126_);
lean_dec_ref(v_as_3125_);
return v_res_3128_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__1(lean_object* v_00_u03b1_3129_, lean_object* v_fst_3130_, lean_object* v_as_3131_, size_t v_sz_3132_, size_t v_i_3133_, lean_object* v_b_3134_, lean_object* v___y_3135_){
_start:
{
lean_object* v___x_3136_; 
v___x_3136_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__1___redArg(v_fst_3130_, v_as_3131_, v_sz_3132_, v_i_3133_, v_b_3134_, v___y_3135_);
return v___x_3136_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__1___boxed(lean_object* v_00_u03b1_3137_, lean_object* v_fst_3138_, lean_object* v_as_3139_, lean_object* v_sz_3140_, lean_object* v_i_3141_, lean_object* v_b_3142_, lean_object* v___y_3143_){
_start:
{
size_t v_sz_boxed_3144_; size_t v_i_boxed_3145_; lean_object* v_res_3146_; 
v_sz_boxed_3144_ = lean_unbox_usize(v_sz_3140_);
lean_dec(v_sz_3140_);
v_i_boxed_3145_ = lean_unbox_usize(v_i_3141_);
lean_dec(v_i_3141_);
v_res_3146_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__1(v_00_u03b1_3137_, v_fst_3138_, v_as_3139_, v_sz_boxed_3144_, v_i_boxed_3145_, v_b_3142_, v___y_3143_);
lean_dec_ref(v_as_3139_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__2(lean_object* v_00_u03b1_3147_, lean_object* v_as_3148_, size_t v_sz_3149_, size_t v_i_3150_, lean_object* v_b_3151_, lean_object* v___y_3152_){
_start:
{
lean_object* v___x_3153_; 
v___x_3153_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__2___redArg(v_as_3148_, v_sz_3149_, v_i_3150_, v_b_3151_, v___y_3152_);
return v___x_3153_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__2___boxed(lean_object* v_00_u03b1_3154_, lean_object* v_as_3155_, lean_object* v_sz_3156_, lean_object* v_i_3157_, lean_object* v_b_3158_, lean_object* v___y_3159_){
_start:
{
size_t v_sz_boxed_3160_; size_t v_i_boxed_3161_; lean_object* v_res_3162_; 
v_sz_boxed_3160_ = lean_unbox_usize(v_sz_3156_);
lean_dec(v_sz_3156_);
v_i_boxed_3161_ = lean_unbox_usize(v_i_3157_);
lean_dec(v_i_3157_);
v_res_3162_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__2(v_00_u03b1_3154_, v_as_3155_, v_sz_boxed_3160_, v_i_boxed_3161_, v_b_3158_, v___y_3159_);
lean_dec_ref(v_as_3155_);
return v_res_3162_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__3(lean_object* v_00_u03b1_3163_, lean_object* v_as_3164_, size_t v_sz_3165_, size_t v_i_3166_, lean_object* v_b_3167_, lean_object* v___y_3168_){
_start:
{
lean_object* v___x_3169_; 
v___x_3169_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__3___redArg(v_as_3164_, v_sz_3165_, v_i_3166_, v_b_3167_, v___y_3168_);
return v___x_3169_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__3___boxed(lean_object* v_00_u03b1_3170_, lean_object* v_as_3171_, lean_object* v_sz_3172_, lean_object* v_i_3173_, lean_object* v_b_3174_, lean_object* v___y_3175_){
_start:
{
size_t v_sz_boxed_3176_; size_t v_i_boxed_3177_; lean_object* v_res_3178_; 
v_sz_boxed_3176_ = lean_unbox_usize(v_sz_3172_);
lean_dec(v_sz_3172_);
v_i_boxed_3177_ = lean_unbox_usize(v_i_3173_);
lean_dec(v_i_3173_);
v_res_3178_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__3(v_00_u03b1_3170_, v_as_3171_, v_sz_boxed_3176_, v_i_boxed_3177_, v_b_3174_, v___y_3175_);
lean_dec_ref(v_as_3171_);
return v_res_3178_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4(lean_object* v_00_u03b1_3179_, lean_object* v_snd_3180_, uint8_t v___y_3181_, lean_object* v___x_3182_, lean_object* v___x_3183_, lean_object* v_as_3184_, lean_object* v_j_3185_){
_start:
{
lean_object* v___x_3186_; 
v___x_3186_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg(v_snd_3180_, v___y_3181_, v___x_3182_, v___x_3183_, v_as_3184_, v_j_3185_);
return v___x_3186_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___boxed(lean_object* v_00_u03b1_3187_, lean_object* v_snd_3188_, lean_object* v___y_3189_, lean_object* v___x_3190_, lean_object* v___x_3191_, lean_object* v_as_3192_, lean_object* v_j_3193_){
_start:
{
uint8_t v___y_13016__boxed_3194_; lean_object* v_res_3195_; 
v___y_13016__boxed_3194_ = lean_unbox(v___y_3189_);
v_res_3195_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4(v_00_u03b1_3187_, v_snd_3188_, v___y_13016__boxed_3194_, v___x_3190_, v___x_3191_, v_as_3192_, v_j_3193_);
lean_dec_ref(v_as_3192_);
lean_dec(v___x_3191_);
lean_dec(v___x_3190_);
lean_dec_ref(v_snd_3188_);
return v_res_3195_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5(lean_object* v_00_u03b1_3196_, lean_object* v___y_3197_, lean_object* v___x_3198_, lean_object* v___x_3199_, uint64_t v_fst_3200_, lean_object* v_inst_3201_, lean_object* v_a_3202_, lean_object* v___y_3203_){
_start:
{
lean_object* v___x_3204_; 
v___x_3204_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg(v___y_3197_, v___x_3198_, v___x_3199_, v_fst_3200_, v_a_3202_, v___y_3203_);
return v___x_3204_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___boxed(lean_object* v_00_u03b1_3205_, lean_object* v___y_3206_, lean_object* v___x_3207_, lean_object* v___x_3208_, lean_object* v_fst_3209_, lean_object* v_inst_3210_, lean_object* v_a_3211_, lean_object* v___y_3212_){
_start:
{
uint64_t v_fst_13032__boxed_3213_; lean_object* v_res_3214_; 
v_fst_13032__boxed_3213_ = lean_unbox_uint64(v_fst_3209_);
lean_dec_ref(v_fst_3209_);
v_res_3214_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5(v_00_u03b1_3205_, v___y_3206_, v___x_3207_, v___x_3208_, v_fst_13032__boxed_3213_, v_inst_3210_, v_a_3211_, v___y_3212_);
lean_dec(v___x_3208_);
lean_dec(v___x_3207_);
lean_dec_ref(v___y_3206_);
return v_res_3214_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__6(lean_object* v_00_u03b1_3215_, lean_object* v_as_3216_, size_t v_sz_3217_, size_t v_i_3218_, lean_object* v_b_3219_, lean_object* v___y_3220_){
_start:
{
lean_object* v___x_3221_; 
v___x_3221_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__6___redArg(v_as_3216_, v_sz_3217_, v_i_3218_, v_b_3219_, v___y_3220_);
return v___x_3221_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__6___boxed(lean_object* v_00_u03b1_3222_, lean_object* v_as_3223_, lean_object* v_sz_3224_, lean_object* v_i_3225_, lean_object* v_b_3226_, lean_object* v___y_3227_){
_start:
{
size_t v_sz_boxed_3228_; size_t v_i_boxed_3229_; lean_object* v_res_3230_; 
v_sz_boxed_3228_ = lean_unbox_usize(v_sz_3224_);
lean_dec(v_sz_3224_);
v_i_boxed_3229_ = lean_unbox_usize(v_i_3225_);
lean_dec(v_i_3225_);
v_res_3230_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__6(v_00_u03b1_3222_, v_as_3223_, v_sz_boxed_3228_, v_i_boxed_3229_, v_b_3226_, v___y_3227_);
lean_dec_ref(v_as_3223_);
return v_res_3230_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__7(lean_object* v_00_u03b1_3231_, lean_object* v___y_3232_, lean_object* v_inst_3233_, lean_object* v_a_3234_, lean_object* v___y_3235_){
_start:
{
lean_object* v___x_3236_; 
v___x_3236_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__7___redArg(v___y_3232_, v_a_3234_, v___y_3235_);
return v___x_3236_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__7___boxed(lean_object* v_00_u03b1_3237_, lean_object* v___y_3238_, lean_object* v_inst_3239_, lean_object* v_a_3240_, lean_object* v___y_3241_){
_start:
{
lean_object* v_res_3242_; 
v_res_3242_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__7(v_00_u03b1_3237_, v___y_3238_, v_inst_3239_, v_a_3240_, v___y_3241_);
lean_dec_ref(v___y_3238_);
return v_res_3242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8(lean_object* v_00_u03b1_3243_, lean_object* v_n_3244_, lean_object* v_as_3245_, lean_object* v_lo_3246_, lean_object* v_hi_3247_, lean_object* v_w_3248_, lean_object* v_hlo_3249_, lean_object* v_hhi_3250_){
_start:
{
lean_object* v___x_3251_; 
v___x_3251_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___redArg(v_n_3244_, v_as_3245_, v_lo_3246_, v_hi_3247_);
return v___x_3251_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8___boxed(lean_object* v_00_u03b1_3252_, lean_object* v_n_3253_, lean_object* v_as_3254_, lean_object* v_lo_3255_, lean_object* v_hi_3256_, lean_object* v_w_3257_, lean_object* v_hlo_3258_, lean_object* v_hhi_3259_){
_start:
{
lean_object* v_res_3260_; 
v_res_3260_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8(v_00_u03b1_3252_, v_n_3253_, v_as_3254_, v_lo_3255_, v_hi_3256_, v_w_3257_, v_hlo_3258_, v_hhi_3259_);
lean_dec(v_hi_3256_);
lean_dec(v_n_3253_);
return v_res_3260_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0_spec__0(lean_object* v_00_u03b1_3261_, lean_object* v_as_3262_, size_t v_i_3263_, size_t v_stop_3264_, lean_object* v_b_3265_){
_start:
{
lean_object* v___x_3266_; 
v___x_3266_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0_spec__0___redArg(v_as_3262_, v_i_3263_, v_stop_3264_, v_b_3265_);
return v___x_3266_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3267_, lean_object* v_as_3268_, lean_object* v_i_3269_, lean_object* v_stop_3270_, lean_object* v_b_3271_){
_start:
{
size_t v_i_boxed_3272_; size_t v_stop_boxed_3273_; lean_object* v_res_3274_; 
v_i_boxed_3272_ = lean_unbox_usize(v_i_3269_);
lean_dec(v_i_3269_);
v_stop_boxed_3273_ = lean_unbox_usize(v_stop_3270_);
lean_dec(v_stop_3270_);
v_res_3274_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0_spec__0(v_00_u03b1_3267_, v_as_3268_, v_i_boxed_3272_, v_stop_boxed_3273_, v_b_3271_);
lean_dec_ref(v_as_3268_);
return v_res_3274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8_spec__9(lean_object* v_00_u03b1_3275_, lean_object* v_n_3276_, lean_object* v_lo_3277_, lean_object* v_hi_3278_, lean_object* v_hhi_3279_, lean_object* v_pivot_3280_, lean_object* v_as_3281_, lean_object* v_i_3282_, lean_object* v_k_3283_, lean_object* v_ilo_3284_, lean_object* v_ik_3285_, lean_object* v_w_3286_){
_start:
{
lean_object* v___x_3287_; 
v___x_3287_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8_spec__9___redArg(v_hi_3278_, v_pivot_3280_, v_as_3281_, v_i_3282_, v_k_3283_);
return v___x_3287_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8_spec__9___boxed(lean_object* v_00_u03b1_3288_, lean_object* v_n_3289_, lean_object* v_lo_3290_, lean_object* v_hi_3291_, lean_object* v_hhi_3292_, lean_object* v_pivot_3293_, lean_object* v_as_3294_, lean_object* v_i_3295_, lean_object* v_k_3296_, lean_object* v_ilo_3297_, lean_object* v_ik_3298_, lean_object* v_w_3299_){
_start:
{
lean_object* v_res_3300_; 
v_res_3300_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__8_spec__9(v_00_u03b1_3288_, v_n_3289_, v_lo_3290_, v_hi_3291_, v_hhi_3292_, v_pivot_3293_, v_as_3294_, v_i_3295_, v_k_3296_, v_ilo_3297_, v_ik_3298_, v_w_3299_);
lean_dec_ref(v_pivot_3293_);
lean_dec(v_hi_3291_);
lean_dec(v_lo_3290_);
lean_dec(v_n_3289_);
return v_res_3300_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTrees___redArg(lean_object* v_trees_3303_){
_start:
{
lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; 
v___x_3304_ = lean_box(0);
v___x_3305_ = ((lean_object*)(l_Lean_ImportedConsts_mergeModuleTrees___redArg___closed__0));
v___x_3306_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands___redArg(v___x_3304_, v_trees_3303_, v___x_3305_);
return v___x_3306_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTrees___redArg___boxed(lean_object* v_trees_3307_){
_start:
{
lean_object* v_res_3308_; 
v_res_3308_ = l_Lean_ImportedConsts_mergeModuleTrees___redArg(v_trees_3307_);
lean_dec_ref(v_trees_3307_);
return v_res_3308_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTrees(lean_object* v_00_u03b1_3309_, lean_object* v_trees_3310_){
_start:
{
lean_object* v___x_3311_; 
v___x_3311_ = l_Lean_ImportedConsts_mergeModuleTrees___redArg(v_trees_3310_);
return v___x_3311_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTrees___boxed(lean_object* v_00_u03b1_3312_, lean_object* v_trees_3313_){
_start:
{
lean_object* v_res_3314_; 
v_res_3314_ = l_Lean_ImportedConsts_mergeModuleTrees(v_00_u03b1_3312_, v_trees_3313_);
lean_dec_ref(v_trees_3313_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(lean_object* v_fst_3315_, lean_object* v_as_3316_, size_t v_sz_3317_, size_t v_i_3318_, lean_object* v_b_3319_){
_start:
{
uint8_t v___x_3320_; 
v___x_3320_ = lean_usize_dec_lt(v_i_3318_, v_sz_3317_);
if (v___x_3320_ == 0)
{
lean_dec(v_fst_3315_);
return v_b_3319_;
}
else
{
lean_object* v_a_3321_; uint64_t v___y_3323_; lean_object* v_key_3331_; 
v_a_3321_ = lean_array_uget_borrowed(v_as_3316_, v_i_3318_);
v_key_3331_ = lean_ctor_get(v_a_3321_, 0);
if (lean_obj_tag(v_key_3331_) == 0)
{
uint64_t v___x_3332_; 
v___x_3332_ = 1723ULL;
v___y_3323_ = v___x_3332_;
goto v___jp_3322_;
}
else
{
uint64_t v_hash_3333_; 
v_hash_3333_ = lean_ctor_get_uint64(v_key_3331_, sizeof(void*)*2);
v___y_3323_ = v_hash_3333_;
goto v___jp_3322_;
}
v___jp_3322_:
{
lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; size_t v___x_3328_; size_t v___x_3329_; 
lean_inc(v_a_3321_);
lean_inc(v_fst_3315_);
v___x_3324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3324_, 0, v_fst_3315_);
lean_ctor_set(v___x_3324_, 1, v_a_3321_);
v___x_3325_ = lean_box_uint64(v___y_3323_);
v___x_3326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3326_, 0, v___x_3325_);
lean_ctor_set(v___x_3326_, 1, v___x_3324_);
v___x_3327_ = lean_array_push(v_b_3319_, v___x_3326_);
v___x_3328_ = ((size_t)1ULL);
v___x_3329_ = lean_usize_add(v_i_3318_, v___x_3328_);
v_i_3318_ = v___x_3329_;
v_b_3319_ = v___x_3327_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg___boxed(lean_object* v_fst_3334_, lean_object* v_as_3335_, lean_object* v_sz_3336_, lean_object* v_i_3337_, lean_object* v_b_3338_){
_start:
{
size_t v_sz_boxed_3339_; size_t v_i_boxed_3340_; lean_object* v_res_3341_; 
v_sz_boxed_3339_ = lean_unbox_usize(v_sz_3336_);
lean_dec(v_sz_3336_);
v_i_boxed_3340_ = lean_unbox_usize(v_i_3337_);
lean_dec(v_i_3337_);
v_res_3341_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_fst_3334_, v_as_3335_, v_sz_boxed_3339_, v_i_boxed_3340_, v_b_3338_);
lean_dec_ref(v_as_3335_);
return v_res_3341_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(lean_object* v_as_3342_, size_t v_sz_3343_, size_t v_i_3344_, lean_object* v_b_3345_){
_start:
{
uint8_t v___x_3346_; 
v___x_3346_ = lean_usize_dec_lt(v_i_3344_, v_sz_3343_);
if (v___x_3346_ == 0)
{
return v_b_3345_;
}
else
{
lean_object* v_a_3347_; lean_object* v_snd_3348_; lean_object* v_fst_3349_; lean_object* v_children_3350_; size_t v_sz_3351_; size_t v___x_3352_; lean_object* v___x_3353_; size_t v___x_3354_; size_t v___x_3355_; 
v_a_3347_ = lean_array_uget_borrowed(v_as_3342_, v_i_3344_);
v_snd_3348_ = lean_ctor_get(v_a_3347_, 1);
v_fst_3349_ = lean_ctor_get(v_a_3347_, 0);
v_children_3350_ = lean_ctor_get(v_snd_3348_, 2);
v_sz_3351_ = lean_array_size(v_children_3350_);
v___x_3352_ = ((size_t)0ULL);
lean_inc(v_fst_3349_);
v___x_3353_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_fst_3349_, v_children_3350_, v_sz_3351_, v___x_3352_, v_b_3345_);
v___x_3354_ = ((size_t)1ULL);
v___x_3355_ = lean_usize_add(v_i_3344_, v___x_3354_);
v_i_3344_ = v___x_3355_;
v_b_3345_ = v___x_3353_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg___boxed(lean_object* v_as_3357_, lean_object* v_sz_3358_, lean_object* v_i_3359_, lean_object* v_b_3360_){
_start:
{
size_t v_sz_boxed_3361_; size_t v_i_boxed_3362_; lean_object* v_res_3363_; 
v_sz_boxed_3361_ = lean_unbox_usize(v_sz_3358_);
lean_dec(v_sz_3358_);
v_i_boxed_3362_ = lean_unbox_usize(v_i_3359_);
lean_dec(v_i_3359_);
v_res_3363_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_as_3357_, v_sz_boxed_3361_, v_i_boxed_3362_, v_b_3360_);
lean_dec_ref(v_as_3357_);
return v_res_3363_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(lean_object* v_fst_3364_, lean_object* v___x_3365_, lean_object* v_____r_3366_, lean_object* v_groups_3367_){
_start:
{
lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; 
v___x_3368_ = lean_nat_add(v_fst_3364_, v___x_3365_);
v___x_3369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3369_, 0, v___x_3368_);
lean_ctor_set(v___x_3369_, 1, v_groups_3367_);
v___x_3370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3370_, 0, v___x_3369_);
return v___x_3370_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0___boxed(lean_object* v_fst_3371_, lean_object* v___x_3372_, lean_object* v_____r_3373_, lean_object* v_groups_3374_){
_start:
{
lean_object* v_res_3375_; 
v_res_3375_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_3371_, v___x_3372_, v_____r_3373_, v_groups_3374_);
lean_dec(v___x_3372_);
lean_dec(v_fst_3371_);
return v_res_3375_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(lean_object* v_snd_3376_, uint8_t v___y_3377_, lean_object* v_as_3378_, lean_object* v_j_3379_){
_start:
{
uint8_t v___y_3385_; lean_object* v___x_3387_; uint8_t v___x_3388_; 
v___x_3387_ = lean_array_get_size(v_as_3378_);
v___x_3388_ = lean_nat_dec_lt(v_j_3379_, v___x_3387_);
if (v___x_3388_ == 0)
{
lean_object* v___x_3389_; 
lean_dec(v_j_3379_);
v___x_3389_ = lean_box(0);
return v___x_3389_;
}
else
{
lean_object* v_total_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v_snd_3394_; lean_object* v_key_3395_; 
v_total_3390_ = lean_unsigned_to_nat(0u);
v___x_3391_ = lean_array_fget_borrowed(v_as_3378_, v_j_3379_);
v___x_3392_ = lean_obj_once(&l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0, &l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0_once, _init_l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0);
v___x_3393_ = lean_array_get_borrowed(v___x_3392_, v___x_3391_, v_total_3390_);
v_snd_3394_ = lean_ctor_get(v___x_3393_, 1);
v_key_3395_ = lean_ctor_get(v_snd_3394_, 0);
switch(lean_obj_tag(v_key_3395_))
{
case 0:
{
lean_object* v_key_3396_; 
v_key_3396_ = lean_ctor_get(v_snd_3376_, 0);
if (lean_obj_tag(v_key_3396_) == 0)
{
v___y_3385_ = v___y_3377_;
goto v___jp_3384_;
}
else
{
goto v___jp_3380_;
}
}
case 1:
{
lean_object* v_key_3397_; 
v_key_3397_ = lean_ctor_get(v_snd_3376_, 0);
if (lean_obj_tag(v_key_3397_) == 1)
{
lean_object* v_str_3398_; lean_object* v_str_3399_; uint8_t v___x_3400_; 
v_str_3398_ = lean_ctor_get(v_key_3395_, 1);
v_str_3399_ = lean_ctor_get(v_key_3397_, 1);
v___x_3400_ = lean_string_dec_eq(v_str_3398_, v_str_3399_);
v___y_3385_ = v___x_3400_;
goto v___jp_3384_;
}
else
{
goto v___jp_3380_;
}
}
default: 
{
lean_object* v_key_3401_; 
v_key_3401_ = lean_ctor_get(v_snd_3376_, 0);
if (lean_obj_tag(v_key_3401_) == 2)
{
lean_object* v_i_3402_; lean_object* v_i_3403_; uint8_t v___x_3404_; 
v_i_3402_ = lean_ctor_get(v_key_3395_, 1);
v_i_3403_ = lean_ctor_get(v_key_3401_, 1);
v___x_3404_ = lean_nat_dec_eq(v_i_3402_, v_i_3403_);
v___y_3385_ = v___x_3404_;
goto v___jp_3384_;
}
else
{
goto v___jp_3380_;
}
}
}
}
v___jp_3380_:
{
lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3381_ = lean_unsigned_to_nat(1u);
v___x_3382_ = lean_nat_add(v_j_3379_, v___x_3381_);
lean_dec(v_j_3379_);
v_j_3379_ = v___x_3382_;
goto _start;
}
v___jp_3384_:
{
if (v___y_3385_ == 0)
{
goto v___jp_3380_;
}
else
{
lean_object* v___x_3386_; 
v___x_3386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3386_, 0, v_j_3379_);
return v___x_3386_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg___boxed(lean_object* v_snd_3405_, lean_object* v___y_3406_, lean_object* v_as_3407_, lean_object* v_j_3408_){
_start:
{
uint8_t v___y_5400__boxed_3409_; lean_object* v_res_3410_; 
v___y_5400__boxed_3409_ = lean_unbox(v___y_3406_);
v_res_3410_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_snd_3405_, v___y_5400__boxed_3409_, v_as_3407_, v_j_3408_);
lean_dec_ref(v_as_3407_);
lean_dec_ref(v_snd_3405_);
return v_res_3410_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(lean_object* v___y_3411_, lean_object* v___x_3412_, uint64_t v_fst_3413_, lean_object* v_a_3414_){
_start:
{
lean_object* v___y_3416_; lean_object* v_fst_3420_; lean_object* v_snd_3421_; lean_object* v___x_3423_; uint8_t v_isShared_3424_; uint8_t v_isSharedCheck_3460_; 
v_fst_3420_ = lean_ctor_get(v_a_3414_, 0);
v_snd_3421_ = lean_ctor_get(v_a_3414_, 1);
v_isSharedCheck_3460_ = !lean_is_exclusive(v_a_3414_);
if (v_isSharedCheck_3460_ == 0)
{
v___x_3423_ = v_a_3414_;
v_isShared_3424_ = v_isSharedCheck_3460_;
goto v_resetjp_3422_;
}
else
{
lean_inc(v_snd_3421_);
lean_inc(v_fst_3420_);
lean_dec(v_a_3414_);
v___x_3423_ = lean_box(0);
v_isShared_3424_ = v_isSharedCheck_3460_;
goto v_resetjp_3422_;
}
v___jp_3415_:
{
if (lean_obj_tag(v___y_3416_) == 0)
{
lean_object* v_a_3417_; 
v_a_3417_ = lean_ctor_get(v___y_3416_, 0);
lean_inc(v_a_3417_);
lean_dec_ref_known(v___y_3416_, 1);
return v_a_3417_;
}
else
{
lean_object* v_a_3418_; 
v_a_3418_ = lean_ctor_get(v___y_3416_, 0);
lean_inc(v_a_3418_);
lean_dec_ref_known(v___y_3416_, 1);
v_a_3414_ = v_a_3418_;
goto _start;
}
}
v_resetjp_3422_:
{
lean_object* v___x_3425_; lean_object* v___y_3427_; uint8_t v___y_3431_; uint8_t v___x_3454_; 
v___x_3425_ = lean_unsigned_to_nat(1u);
v___x_3454_ = lean_nat_dec_lt(v_fst_3420_, v___x_3412_);
if (v___x_3454_ == 0)
{
v___y_3431_ = v___x_3454_;
goto v___jp_3430_;
}
else
{
lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v_fst_3457_; uint64_t v___x_3458_; uint8_t v___x_3459_; 
v___x_3455_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0);
v___x_3456_ = lean_array_get_borrowed(v___x_3455_, v___y_3411_, v_fst_3420_);
v_fst_3457_ = lean_ctor_get(v___x_3456_, 0);
v___x_3458_ = lean_unbox_uint64(v_fst_3457_);
v___x_3459_ = lean_uint64_dec_eq(v___x_3458_, v_fst_3413_);
v___y_3431_ = v___x_3459_;
goto v___jp_3430_;
}
v___jp_3426_:
{
lean_object* v___x_3428_; lean_object* v___x_3429_; 
v___x_3428_ = lean_box(0);
v___x_3429_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_3420_, v___x_3425_, v___x_3428_, v___y_3427_);
lean_dec(v_fst_3420_);
v___y_3416_ = v___x_3429_;
goto v___jp_3415_;
}
v___jp_3430_:
{
if (v___y_3431_ == 0)
{
lean_object* v___x_3433_; 
if (v_isShared_3424_ == 0)
{
v___x_3433_ = v___x_3423_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3434_; 
v_reuseFailAlloc_3434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3434_, 0, v_fst_3420_);
lean_ctor_set(v_reuseFailAlloc_3434_, 1, v_snd_3421_);
v___x_3433_ = v_reuseFailAlloc_3434_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
return v___x_3433_;
}
}
else
{
lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v_snd_3438_; lean_object* v_snd_3439_; lean_object* v___x_3440_; 
lean_del_object(v___x_3423_);
v___x_3435_ = lean_unsigned_to_nat(0u);
v___x_3436_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0);
v___x_3437_ = lean_array_get_borrowed(v___x_3436_, v___y_3411_, v_fst_3420_);
v_snd_3438_ = lean_ctor_get(v___x_3437_, 1);
v_snd_3439_ = lean_ctor_get(v_snd_3438_, 1);
v___x_3440_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_snd_3439_, v___y_3431_, v_snd_3421_, v___x_3435_);
if (lean_obj_tag(v___x_3440_) == 0)
{
lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
v___x_3441_ = lean_mk_empty_array_with_capacity(v___x_3425_);
lean_inc(v_snd_3438_);
v___x_3442_ = lean_array_push(v___x_3441_, v_snd_3438_);
v___x_3443_ = lean_array_push(v_snd_3421_, v___x_3442_);
v___x_3444_ = lean_box(0);
v___x_3445_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_3420_, v___x_3425_, v___x_3444_, v___x_3443_);
lean_dec(v_fst_3420_);
v___y_3416_ = v___x_3445_;
goto v___jp_3415_;
}
else
{
lean_object* v_val_3446_; lean_object* v___x_3447_; uint8_t v___x_3448_; 
v_val_3446_ = lean_ctor_get(v___x_3440_, 0);
lean_inc(v_val_3446_);
lean_dec_ref_known(v___x_3440_, 1);
v___x_3447_ = lean_array_get_size(v_snd_3421_);
v___x_3448_ = lean_nat_dec_lt(v_val_3446_, v___x_3447_);
if (v___x_3448_ == 0)
{
lean_dec(v_val_3446_);
v___y_3427_ = v_snd_3421_;
goto v___jp_3426_;
}
else
{
lean_object* v_v_3449_; lean_object* v___x_3450_; lean_object* v_xs_x27_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; 
v_v_3449_ = lean_array_fget(v_snd_3421_, v_val_3446_);
v___x_3450_ = lean_box(0);
v_xs_x27_3451_ = lean_array_fset(v_snd_3421_, v_val_3446_, v___x_3450_);
lean_inc(v_snd_3438_);
v___x_3452_ = lean_array_push(v_v_3449_, v_snd_3438_);
v___x_3453_ = lean_array_fset(v_xs_x27_3451_, v_val_3446_, v___x_3452_);
lean_dec(v_val_3446_);
v___y_3427_ = v___x_3453_;
goto v___jp_3426_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___boxed(lean_object* v___y_3461_, lean_object* v___x_3462_, lean_object* v_fst_3463_, lean_object* v_a_3464_){
_start:
{
uint64_t v_fst_5470__boxed_3465_; lean_object* v_res_3466_; 
v_fst_5470__boxed_3465_ = lean_unbox_uint64(v_fst_3463_);
lean_dec_ref(v_fst_3463_);
v_res_3466_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___y_3461_, v___x_3462_, v_fst_5470__boxed_3465_, v_a_3464_);
lean_dec(v___x_3462_);
lean_dec_ref(v___y_3461_);
return v_res_3466_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(lean_object* v_hi_3467_, lean_object* v_pivot_3468_, lean_object* v_as_3469_, lean_object* v_i_3470_, lean_object* v_k_3471_){
_start:
{
uint8_t v___y_3473_; uint8_t v___x_3482_; 
v___x_3482_ = lean_nat_dec_lt(v_k_3471_, v_hi_3467_);
if (v___x_3482_ == 0)
{
lean_object* v___x_3483_; lean_object* v___x_3484_; 
lean_dec(v_k_3471_);
v___x_3483_ = lean_array_fswap(v_as_3469_, v_i_3470_, v_hi_3467_);
v___x_3484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3484_, 0, v_i_3470_);
lean_ctor_set(v___x_3484_, 1, v___x_3483_);
return v___x_3484_;
}
else
{
lean_object* v___x_3485_; lean_object* v_snd_3486_; lean_object* v_snd_3487_; lean_object* v_fst_3488_; lean_object* v_fst_3489_; lean_object* v_fst_3490_; lean_object* v_fst_3491_; uint64_t v___x_3492_; uint64_t v___x_3493_; uint8_t v___x_3494_; 
v___x_3485_ = lean_array_fget_borrowed(v_as_3469_, v_k_3471_);
v_snd_3486_ = lean_ctor_get(v___x_3485_, 1);
v_snd_3487_ = lean_ctor_get(v_pivot_3468_, 1);
v_fst_3488_ = lean_ctor_get(v___x_3485_, 0);
v_fst_3489_ = lean_ctor_get(v_snd_3486_, 0);
v_fst_3490_ = lean_ctor_get(v_pivot_3468_, 0);
v_fst_3491_ = lean_ctor_get(v_snd_3487_, 0);
v___x_3492_ = lean_unbox_uint64(v_fst_3488_);
v___x_3493_ = lean_unbox_uint64(v_fst_3490_);
v___x_3494_ = lean_uint64_dec_lt(v___x_3492_, v___x_3493_);
if (v___x_3494_ == 0)
{
uint64_t v___x_3495_; uint64_t v___x_3496_; uint8_t v___x_3497_; 
v___x_3495_ = lean_unbox_uint64(v_fst_3488_);
v___x_3496_ = lean_unbox_uint64(v_fst_3490_);
v___x_3497_ = lean_uint64_dec_eq(v___x_3495_, v___x_3496_);
if (v___x_3497_ == 0)
{
v___y_3473_ = v___x_3497_;
goto v___jp_3472_;
}
else
{
uint8_t v___x_3498_; 
v___x_3498_ = lean_nat_dec_lt(v_fst_3489_, v_fst_3491_);
v___y_3473_ = v___x_3498_;
goto v___jp_3472_;
}
}
else
{
v___y_3473_ = v___x_3494_;
goto v___jp_3472_;
}
}
v___jp_3472_:
{
if (v___y_3473_ == 0)
{
lean_object* v___x_3474_; lean_object* v___x_3475_; 
v___x_3474_ = lean_unsigned_to_nat(1u);
v___x_3475_ = lean_nat_add(v_k_3471_, v___x_3474_);
lean_dec(v_k_3471_);
v_k_3471_ = v___x_3475_;
goto _start;
}
else
{
lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; 
v___x_3477_ = lean_array_fswap(v_as_3469_, v_i_3470_, v_k_3471_);
v___x_3478_ = lean_unsigned_to_nat(1u);
v___x_3479_ = lean_nat_add(v_i_3470_, v___x_3478_);
lean_dec(v_i_3470_);
v___x_3480_ = lean_nat_add(v_k_3471_, v___x_3478_);
lean_dec(v_k_3471_);
v_as_3469_ = v___x_3477_;
v_i_3470_ = v___x_3479_;
v_k_3471_ = v___x_3480_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg___boxed(lean_object* v_hi_3499_, lean_object* v_pivot_3500_, lean_object* v_as_3501_, lean_object* v_i_3502_, lean_object* v_k_3503_){
_start:
{
lean_object* v_res_3504_; 
v_res_3504_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(v_hi_3499_, v_pivot_3500_, v_as_3501_, v_i_3502_, v_k_3503_);
lean_dec_ref(v_pivot_3500_);
lean_dec(v_hi_3499_);
return v_res_3504_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg___lam__0(lean_object* v_x_3505_, lean_object* v_x_3506_){
_start:
{
lean_object* v_snd_3507_; lean_object* v_snd_3508_; lean_object* v_fst_3509_; lean_object* v_fst_3510_; lean_object* v_fst_3511_; lean_object* v_fst_3512_; uint64_t v___x_3513_; uint64_t v___x_3514_; uint8_t v___x_3515_; 
v_snd_3507_ = lean_ctor_get(v_x_3505_, 1);
v_snd_3508_ = lean_ctor_get(v_x_3506_, 1);
v_fst_3509_ = lean_ctor_get(v_x_3505_, 0);
v_fst_3510_ = lean_ctor_get(v_snd_3507_, 0);
v_fst_3511_ = lean_ctor_get(v_x_3506_, 0);
v_fst_3512_ = lean_ctor_get(v_snd_3508_, 0);
v___x_3513_ = lean_unbox_uint64(v_fst_3509_);
v___x_3514_ = lean_unbox_uint64(v_fst_3511_);
v___x_3515_ = lean_uint64_dec_lt(v___x_3513_, v___x_3514_);
if (v___x_3515_ == 0)
{
uint64_t v___x_3516_; uint64_t v___x_3517_; uint8_t v___x_3518_; 
v___x_3516_ = lean_unbox_uint64(v_fst_3509_);
v___x_3517_ = lean_unbox_uint64(v_fst_3511_);
v___x_3518_ = lean_uint64_dec_eq(v___x_3516_, v___x_3517_);
if (v___x_3518_ == 0)
{
return v___x_3518_;
}
else
{
uint8_t v___x_3519_; 
v___x_3519_ = lean_nat_dec_lt(v_fst_3510_, v_fst_3512_);
return v___x_3519_;
}
}
else
{
return v___x_3515_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg___lam__0___boxed(lean_object* v_x_3520_, lean_object* v_x_3521_){
_start:
{
uint8_t v_res_3522_; lean_object* v_r_3523_; 
v_res_3522_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg___lam__0(v_x_3520_, v_x_3521_);
lean_dec_ref(v_x_3521_);
lean_dec_ref(v_x_3520_);
v_r_3523_ = lean_box(v_res_3522_);
return v_r_3523_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(lean_object* v_n_3524_, lean_object* v_as_3525_, lean_object* v_lo_3526_, lean_object* v_hi_3527_){
_start:
{
lean_object* v___y_3529_; uint8_t v___x_3539_; 
v___x_3539_ = lean_nat_dec_lt(v_lo_3526_, v_hi_3527_);
if (v___x_3539_ == 0)
{
lean_dec(v_lo_3526_);
return v_as_3525_;
}
else
{
lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v_mid_3542_; lean_object* v___y_3544_; lean_object* v___y_3550_; lean_object* v___x_3555_; lean_object* v___x_3556_; uint8_t v___x_3557_; 
v___x_3540_ = lean_nat_add(v_lo_3526_, v_hi_3527_);
v___x_3541_ = lean_unsigned_to_nat(1u);
v_mid_3542_ = lean_nat_shiftr(v___x_3540_, v___x_3541_);
lean_dec(v___x_3540_);
v___x_3555_ = lean_array_fget_borrowed(v_as_3525_, v_mid_3542_);
v___x_3556_ = lean_array_fget_borrowed(v_as_3525_, v_lo_3526_);
v___x_3557_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg___lam__0(v___x_3555_, v___x_3556_);
if (v___x_3557_ == 0)
{
v___y_3550_ = v_as_3525_;
goto v___jp_3549_;
}
else
{
lean_object* v___x_3558_; 
v___x_3558_ = lean_array_fswap(v_as_3525_, v_lo_3526_, v_mid_3542_);
v___y_3550_ = v___x_3558_;
goto v___jp_3549_;
}
v___jp_3543_:
{
lean_object* v___x_3545_; lean_object* v___x_3546_; uint8_t v___x_3547_; 
v___x_3545_ = lean_array_fget_borrowed(v___y_3544_, v_mid_3542_);
v___x_3546_ = lean_array_fget_borrowed(v___y_3544_, v_hi_3527_);
v___x_3547_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg___lam__0(v___x_3545_, v___x_3546_);
if (v___x_3547_ == 0)
{
lean_dec(v_mid_3542_);
v___y_3529_ = v___y_3544_;
goto v___jp_3528_;
}
else
{
lean_object* v___x_3548_; 
v___x_3548_ = lean_array_fswap(v___y_3544_, v_mid_3542_, v_hi_3527_);
lean_dec(v_mid_3542_);
v___y_3529_ = v___x_3548_;
goto v___jp_3528_;
}
}
v___jp_3549_:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; uint8_t v___x_3553_; 
v___x_3551_ = lean_array_fget_borrowed(v___y_3550_, v_hi_3527_);
v___x_3552_ = lean_array_fget_borrowed(v___y_3550_, v_lo_3526_);
v___x_3553_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg___lam__0(v___x_3551_, v___x_3552_);
if (v___x_3553_ == 0)
{
v___y_3544_ = v___y_3550_;
goto v___jp_3543_;
}
else
{
lean_object* v___x_3554_; 
v___x_3554_ = lean_array_fswap(v___y_3550_, v_lo_3526_, v_hi_3527_);
v___y_3544_ = v___x_3554_;
goto v___jp_3543_;
}
}
}
v___jp_3528_:
{
lean_object* v_pivot_3530_; lean_object* v___x_3531_; lean_object* v_fst_3532_; lean_object* v_snd_3533_; uint8_t v___x_3534_; 
v_pivot_3530_ = lean_array_fget(v___y_3529_, v_hi_3527_);
lean_inc_n(v_lo_3526_, 2);
v___x_3531_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(v_hi_3527_, v_pivot_3530_, v___y_3529_, v_lo_3526_, v_lo_3526_);
lean_dec(v_pivot_3530_);
v_fst_3532_ = lean_ctor_get(v___x_3531_, 0);
lean_inc(v_fst_3532_);
v_snd_3533_ = lean_ctor_get(v___x_3531_, 1);
lean_inc(v_snd_3533_);
lean_dec_ref(v___x_3531_);
v___x_3534_ = lean_nat_dec_le(v_hi_3527_, v_fst_3532_);
if (v___x_3534_ == 0)
{
lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; 
v___x_3535_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v_n_3524_, v_snd_3533_, v_lo_3526_, v_fst_3532_);
v___x_3536_ = lean_unsigned_to_nat(1u);
v___x_3537_ = lean_nat_add(v_fst_3532_, v___x_3536_);
lean_dec(v_fst_3532_);
v_as_3525_ = v___x_3535_;
v_lo_3526_ = v___x_3537_;
goto _start;
}
else
{
lean_dec(v_fst_3532_);
lean_dec(v_lo_3526_);
return v_snd_3533_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg___boxed(lean_object* v_n_3559_, lean_object* v_as_3560_, lean_object* v_lo_3561_, lean_object* v_hi_3562_){
_start:
{
lean_object* v_res_3563_; 
v_res_3563_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v_n_3559_, v_as_3560_, v_lo_3561_, v_hi_3562_);
lean_dec(v_hi_3562_);
lean_dec(v_n_3559_);
return v_res_3563_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(lean_object* v_covered_3564_, lean_object* v_as_3565_, size_t v_sz_3566_, size_t v_i_3567_, uint64_t v_b_3568_){
_start:
{
uint8_t v___x_3569_; 
v___x_3569_ = lean_usize_dec_lt(v_i_3567_, v_sz_3566_);
if (v___x_3569_ == 0)
{
return v_b_3568_;
}
else
{
lean_object* v_a_3570_; lean_object* v_fst_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; uint64_t v___x_3574_; uint64_t v___x_3575_; size_t v___x_3576_; size_t v___x_3577_; 
v_a_3570_ = lean_array_uget_borrowed(v_as_3565_, v_i_3567_);
v_fst_3571_ = lean_ctor_get(v_a_3570_, 0);
v___x_3572_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0___boxed__const__1));
v___x_3573_ = lean_array_get_borrowed(v___x_3572_, v_covered_3564_, v_fst_3571_);
v___x_3574_ = lean_unbox_uint64(v___x_3573_);
v___x_3575_ = lean_uint64_land(v_b_3568_, v___x_3574_);
v___x_3576_ = ((size_t)1ULL);
v___x_3577_ = lean_usize_add(v_i_3567_, v___x_3576_);
v_i_3567_ = v___x_3577_;
v_b_3568_ = v___x_3575_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg___boxed(lean_object* v_covered_3579_, lean_object* v_as_3580_, lean_object* v_sz_3581_, lean_object* v_i_3582_, lean_object* v_b_3583_){
_start:
{
size_t v_sz_boxed_3584_; size_t v_i_boxed_3585_; uint64_t v_b_boxed_3586_; uint64_t v_res_3587_; lean_object* v_r_3588_; 
v_sz_boxed_3584_ = lean_unbox_usize(v_sz_3581_);
lean_dec(v_sz_3581_);
v_i_boxed_3585_ = lean_unbox_usize(v_i_3582_);
lean_dec(v_i_3582_);
v_b_boxed_3586_ = lean_unbox_uint64(v_b_3583_);
lean_dec_ref(v_b_3583_);
v_res_3587_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_covered_3579_, v_as_3580_, v_sz_boxed_3584_, v_i_boxed_3585_, v_b_boxed_3586_);
lean_dec_ref(v_as_3580_);
lean_dec_ref(v_covered_3579_);
v_r_3588_ = lean_box_uint64(v_res_3587_);
return v_r_3588_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(lean_object* v_as_3589_, size_t v_sz_3590_, size_t v_i_3591_, lean_object* v_b_3592_){
_start:
{
uint8_t v___x_3593_; 
v___x_3593_ = lean_usize_dec_lt(v_i_3591_, v_sz_3590_);
if (v___x_3593_ == 0)
{
return v_b_3592_;
}
else
{
lean_object* v_a_3594_; lean_object* v_snd_3595_; lean_object* v_children_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; size_t v___x_3599_; size_t v___x_3600_; 
v_a_3594_ = lean_array_uget_borrowed(v_as_3589_, v_i_3591_);
v_snd_3595_ = lean_ctor_get(v_a_3594_, 1);
v_children_3596_ = lean_ctor_get(v_snd_3595_, 2);
v___x_3597_ = lean_array_get_size(v_children_3596_);
v___x_3598_ = lean_nat_add(v_b_3592_, v___x_3597_);
lean_dec(v_b_3592_);
v___x_3599_ = ((size_t)1ULL);
v___x_3600_ = lean_usize_add(v_i_3591_, v___x_3599_);
v_i_3591_ = v___x_3600_;
v_b_3592_ = v___x_3598_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg___boxed(lean_object* v_as_3602_, lean_object* v_sz_3603_, lean_object* v_i_3604_, lean_object* v_b_3605_){
_start:
{
size_t v_sz_boxed_3606_; size_t v_i_boxed_3607_; lean_object* v_res_3608_; 
v_sz_boxed_3606_ = lean_unbox_usize(v_sz_3603_);
lean_dec(v_sz_3603_);
v_i_boxed_3607_ = lean_unbox_usize(v_i_3604_);
lean_dec(v_i_3604_);
v_res_3608_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_as_3602_, v_sz_boxed_3606_, v_i_boxed_3607_, v_b_3605_);
lean_dec_ref(v_as_3602_);
return v_res_3608_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(lean_object* v___y_3609_, lean_object* v_covered_3610_, lean_object* v_a_3611_){
_start:
{
lean_object* v_fst_3612_; lean_object* v_snd_3613_; lean_object* v___x_3615_; uint8_t v_isShared_3616_; uint8_t v_isSharedCheck_3665_; 
v_fst_3612_ = lean_ctor_get(v_a_3611_, 0);
v_snd_3613_ = lean_ctor_get(v_a_3611_, 1);
v_isSharedCheck_3665_ = !lean_is_exclusive(v_a_3611_);
if (v_isSharedCheck_3665_ == 0)
{
v___x_3615_ = v_a_3611_;
v_isShared_3616_ = v_isSharedCheck_3665_;
goto v_resetjp_3614_;
}
else
{
lean_inc(v_snd_3613_);
lean_inc(v_fst_3612_);
lean_dec(v_a_3611_);
v___x_3615_ = lean_box(0);
v_isShared_3616_ = v_isSharedCheck_3665_;
goto v_resetjp_3614_;
}
v_resetjp_3614_:
{
lean_object* v___x_3617_; uint8_t v___x_3618_; 
v___x_3617_ = lean_array_get_size(v___y_3609_);
v___x_3618_ = lean_nat_dec_lt(v_snd_3613_, v___x_3617_);
if (v___x_3618_ == 0)
{
lean_object* v___x_3620_; 
if (v_isShared_3616_ == 0)
{
v___x_3620_ = v___x_3615_;
goto v_reusejp_3619_;
}
else
{
lean_object* v_reuseFailAlloc_3621_; 
v_reuseFailAlloc_3621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3621_, 0, v_fst_3612_);
lean_ctor_set(v_reuseFailAlloc_3621_, 1, v_snd_3613_);
v___x_3620_ = v_reuseFailAlloc_3621_;
goto v_reusejp_3619_;
}
v_reusejp_3619_:
{
return v___x_3620_;
}
}
else
{
lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v_fst_3624_; lean_object* v_snd_3625_; lean_object* v___x_3627_; uint8_t v_isShared_3628_; uint8_t v_isSharedCheck_3664_; 
lean_del_object(v___x_3615_);
v___x_3622_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0);
v___x_3623_ = lean_array_get(v___x_3622_, v___y_3609_, v_snd_3613_);
v_fst_3624_ = lean_ctor_get(v___x_3623_, 0);
v_snd_3625_ = lean_ctor_get(v___x_3623_, 1);
v_isSharedCheck_3664_ = !lean_is_exclusive(v___x_3623_);
if (v_isSharedCheck_3664_ == 0)
{
v___x_3627_ = v___x_3623_;
v_isShared_3628_ = v_isSharedCheck_3664_;
goto v_resetjp_3626_;
}
else
{
lean_inc(v_snd_3625_);
lean_inc(v_fst_3624_);
lean_dec(v___x_3623_);
v___x_3627_ = lean_box(0);
v_isShared_3628_ = v_isSharedCheck_3664_;
goto v_resetjp_3626_;
}
v_resetjp_3626_:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; uint8_t v___y_3632_; uint8_t v___x_3658_; 
v___x_3629_ = lean_unsigned_to_nat(1u);
v___x_3630_ = lean_nat_add(v_snd_3613_, v___x_3629_);
lean_dec(v_snd_3613_);
v___x_3658_ = lean_nat_dec_lt(v___x_3630_, v___x_3617_);
if (v___x_3658_ == 0)
{
v___y_3632_ = v___x_3658_;
goto v___jp_3631_;
}
else
{
lean_object* v___x_3659_; lean_object* v_fst_3660_; uint64_t v___x_3661_; uint64_t v___x_3662_; uint8_t v___x_3663_; 
v___x_3659_ = lean_array_get_borrowed(v___x_3622_, v___y_3609_, v___x_3630_);
v_fst_3660_ = lean_ctor_get(v___x_3659_, 0);
v___x_3661_ = lean_unbox_uint64(v_fst_3660_);
v___x_3662_ = lean_unbox_uint64(v_fst_3624_);
v___x_3663_ = lean_uint64_dec_eq(v___x_3661_, v___x_3662_);
v___y_3632_ = v___x_3663_;
goto v___jp_3631_;
}
v___jp_3631_:
{
if (v___y_3632_ == 0)
{
lean_object* v___x_3634_; 
lean_dec(v_snd_3625_);
lean_dec(v_fst_3624_);
if (v_isShared_3628_ == 0)
{
lean_ctor_set(v___x_3627_, 1, v___x_3630_);
lean_ctor_set(v___x_3627_, 0, v_fst_3612_);
v___x_3634_ = v___x_3627_;
goto v_reusejp_3633_;
}
else
{
lean_object* v_reuseFailAlloc_3636_; 
v_reuseFailAlloc_3636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3636_, 0, v_fst_3612_);
lean_ctor_set(v_reuseFailAlloc_3636_, 1, v___x_3630_);
v___x_3634_ = v_reuseFailAlloc_3636_;
goto v_reusejp_3633_;
}
v_reusejp_3633_:
{
v_a_3611_ = v___x_3634_;
goto _start;
}
}
else
{
lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3641_; 
v___x_3637_ = lean_mk_empty_array_with_capacity(v___x_3629_);
lean_inc_ref(v___x_3637_);
v___x_3638_ = lean_array_push(v___x_3637_, v_snd_3625_);
v___x_3639_ = lean_array_push(v___x_3637_, v___x_3638_);
if (v_isShared_3628_ == 0)
{
lean_ctor_set(v___x_3627_, 1, v___x_3639_);
lean_ctor_set(v___x_3627_, 0, v___x_3630_);
v___x_3641_ = v___x_3627_;
goto v_reusejp_3640_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v___x_3630_);
lean_ctor_set(v_reuseFailAlloc_3657_, 1, v___x_3639_);
v___x_3641_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3640_;
}
v_reusejp_3640_:
{
uint64_t v___x_3642_; lean_object* v___x_3643_; lean_object* v_fst_3644_; lean_object* v_snd_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3656_; 
v___x_3642_ = lean_unbox_uint64(v_fst_3624_);
lean_dec(v_fst_3624_);
v___x_3643_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___y_3609_, v___x_3617_, v___x_3642_, v___x_3641_);
v_fst_3644_ = lean_ctor_get(v___x_3643_, 0);
v_snd_3645_ = lean_ctor_get(v___x_3643_, 1);
v_isSharedCheck_3656_ = !lean_is_exclusive(v___x_3643_);
if (v_isSharedCheck_3656_ == 0)
{
v___x_3647_ = v___x_3643_;
v_isShared_3648_ = v_isSharedCheck_3656_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_snd_3645_);
lean_inc(v_fst_3644_);
lean_dec(v___x_3643_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3656_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
size_t v_sz_3649_; size_t v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3653_; 
v_sz_3649_ = lean_array_size(v_snd_3645_);
v___x_3650_ = ((size_t)0ULL);
v___x_3651_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_covered_3610_, v_snd_3645_, v_sz_3649_, v___x_3650_, v_fst_3612_);
lean_dec(v_snd_3645_);
if (v_isShared_3648_ == 0)
{
lean_ctor_set(v___x_3647_, 1, v_fst_3644_);
lean_ctor_set(v___x_3647_, 0, v___x_3651_);
v___x_3653_ = v___x_3647_;
goto v_reusejp_3652_;
}
else
{
lean_object* v_reuseFailAlloc_3655_; 
v_reuseFailAlloc_3655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3655_, 0, v___x_3651_);
lean_ctor_set(v_reuseFailAlloc_3655_, 1, v_fst_3644_);
v___x_3653_ = v_reuseFailAlloc_3655_;
goto v_reusejp_3652_;
}
v_reusejp_3652_:
{
v_a_3611_ = v___x_3653_;
goto _start;
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
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(lean_object* v_covered_3666_, lean_object* v_key_3667_, lean_object* v_cands_3668_, lean_object* v_acc_3669_){
_start:
{
lean_object* v___y_3671_; lean_object* v___y_3672_; lean_object* v___y_3673_; lean_object* v___y_3678_; lean_object* v___y_3679_; lean_object* v___y_3680_; lean_object* v___y_3681_; lean_object* v___y_3682_; lean_object* v___y_3683_; lean_object* v___y_3686_; lean_object* v___y_3687_; lean_object* v___y_3688_; lean_object* v___y_3689_; lean_object* v___y_3690_; lean_object* v___y_3691_; lean_object* v___y_3694_; lean_object* v_acc_3695_; lean_object* v___x_3715_; lean_object* v___x_3716_; uint8_t v___x_3717_; 
v___x_3715_ = lean_array_get_size(v_covered_3666_);
v___x_3716_ = lean_unsigned_to_nat(0u);
v___x_3717_ = lean_nat_dec_eq(v___x_3715_, v___x_3716_);
if (v___x_3717_ == 0)
{
uint64_t v_common_3718_; size_t v_sz_3719_; size_t v___x_3720_; uint64_t v___x_3721_; uint64_t v___x_3722_; uint8_t v___x_3723_; 
v_common_3718_ = 18446744073709551615ULL;
v_sz_3719_ = lean_array_size(v_cands_3668_);
v___x_3720_ = ((size_t)0ULL);
v___x_3721_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_covered_3666_, v_cands_3668_, v_sz_3719_, v___x_3720_, v_common_3718_);
v___x_3722_ = 0ULL;
v___x_3723_ = lean_uint64_dec_eq(v___x_3721_, v___x_3722_);
if (v___x_3723_ == 0)
{
lean_dec(v_key_3667_);
return v_acc_3669_;
}
else
{
if (v___x_3717_ == 0)
{
goto v___jp_3706_;
}
else
{
lean_dec(v_key_3667_);
return v_acc_3669_;
}
}
}
else
{
goto v___jp_3706_;
}
v___jp_3670_:
{
lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v_fst_3676_; 
v___x_3674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3674_, 0, v___y_3672_);
lean_ctor_set(v___x_3674_, 1, v___y_3671_);
v___x_3675_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v___y_3673_, v_covered_3666_, v___x_3674_);
lean_dec_ref(v___y_3673_);
v_fst_3676_ = lean_ctor_get(v___x_3675_, 0);
lean_inc(v_fst_3676_);
lean_dec_ref(v___x_3675_);
return v_fst_3676_;
}
v___jp_3677_:
{
lean_object* v___x_3684_; 
v___x_3684_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v___y_3682_, v___y_3678_, v___y_3680_, v___y_3683_);
lean_dec(v___y_3683_);
lean_dec(v___y_3682_);
v___y_3671_ = v___y_3679_;
v___y_3672_ = v___y_3681_;
v___y_3673_ = v___x_3684_;
goto v___jp_3670_;
}
v___jp_3685_:
{
uint8_t v___x_3692_; 
v___x_3692_ = lean_nat_dec_le(v___y_3691_, v___y_3688_);
if (v___x_3692_ == 0)
{
lean_dec(v___y_3688_);
lean_inc(v___y_3691_);
v___y_3678_ = v___y_3686_;
v___y_3679_ = v___y_3687_;
v___y_3680_ = v___y_3691_;
v___y_3681_ = v___y_3690_;
v___y_3682_ = v___y_3689_;
v___y_3683_ = v___y_3691_;
goto v___jp_3677_;
}
else
{
v___y_3678_ = v___y_3686_;
v___y_3679_ = v___y_3687_;
v___y_3680_ = v___y_3691_;
v___y_3681_ = v___y_3690_;
v___y_3682_ = v___y_3689_;
v___y_3683_ = v___y_3688_;
goto v___jp_3677_;
}
}
v___jp_3693_:
{
size_t v_sz_3696_; size_t v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; uint8_t v___x_3702_; 
v_sz_3696_ = lean_array_size(v_cands_3668_);
v___x_3697_ = ((size_t)0ULL);
lean_inc(v___y_3694_);
v___x_3698_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_cands_3668_, v_sz_3696_, v___x_3697_, v___y_3694_);
v___x_3699_ = lean_mk_empty_array_with_capacity(v___x_3698_);
lean_dec(v___x_3698_);
v___x_3700_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_cands_3668_, v_sz_3696_, v___x_3697_, v___x_3699_);
v___x_3701_ = lean_array_get_size(v___x_3700_);
v___x_3702_ = lean_nat_dec_eq(v___x_3701_, v___y_3694_);
if (v___x_3702_ == 0)
{
lean_object* v___x_3703_; lean_object* v___x_3704_; uint8_t v___x_3705_; 
v___x_3703_ = lean_unsigned_to_nat(1u);
v___x_3704_ = lean_nat_sub(v___x_3701_, v___x_3703_);
v___x_3705_ = lean_nat_dec_le(v___y_3694_, v___x_3704_);
if (v___x_3705_ == 0)
{
lean_inc(v___x_3704_);
v___y_3686_ = v___x_3700_;
v___y_3687_ = v___y_3694_;
v___y_3688_ = v___x_3704_;
v___y_3689_ = v___x_3701_;
v___y_3690_ = v_acc_3695_;
v___y_3691_ = v___x_3704_;
goto v___jp_3685_;
}
else
{
lean_inc(v___y_3694_);
v___y_3686_ = v___x_3700_;
v___y_3687_ = v___y_3694_;
v___y_3688_ = v___x_3704_;
v___y_3689_ = v___x_3701_;
v___y_3690_ = v_acc_3695_;
v___y_3691_ = v___y_3694_;
goto v___jp_3685_;
}
}
else
{
v___y_3671_ = v___y_3694_;
v___y_3672_ = v_acc_3695_;
v___y_3673_ = v___x_3700_;
goto v___jp_3670_;
}
}
v___jp_3706_:
{
lean_object* v_total_3707_; lean_object* v___x_3708_; lean_object* v_entries_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; uint8_t v___x_3712_; 
v_total_3707_ = lean_unsigned_to_nat(0u);
v___x_3708_ = lean_array_get_size(v_cands_3668_);
v_entries_3709_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0___redArg(v_cands_3668_, v_total_3707_, v___x_3708_);
v___x_3710_ = lean_unsigned_to_nat(1u);
v___x_3711_ = lean_array_get_size(v_entries_3709_);
v___x_3712_ = lean_nat_dec_lt(v___x_3710_, v___x_3711_);
if (v___x_3712_ == 0)
{
lean_dec_ref(v_entries_3709_);
lean_dec(v_key_3667_);
v___y_3694_ = v_total_3707_;
v_acc_3695_ = v_acc_3669_;
goto v___jp_3693_;
}
else
{
lean_object* v___x_3713_; lean_object* v_acc_3714_; 
v___x_3713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3713_, 0, v_key_3667_);
lean_ctor_set(v___x_3713_, 1, v_entries_3709_);
v_acc_3714_ = lean_array_push(v_acc_3669_, v___x_3713_);
v___y_3694_ = v_total_3707_;
v_acc_3695_ = v_acc_3714_;
goto v___jp_3693_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(lean_object* v_covered_3724_, lean_object* v_as_3725_, size_t v_sz_3726_, size_t v_i_3727_, lean_object* v_b_3728_){
_start:
{
lean_object* v_a_3730_; uint8_t v___x_3734_; 
v___x_3734_ = lean_usize_dec_lt(v_i_3727_, v_sz_3726_);
if (v___x_3734_ == 0)
{
return v_b_3728_;
}
else
{
lean_object* v___x_3735_; lean_object* v_a_3736_; lean_object* v___x_3737_; uint8_t v___x_3738_; 
v___x_3735_ = lean_unsigned_to_nat(1u);
v_a_3736_ = lean_array_uget_borrowed(v_as_3725_, v_i_3727_);
v___x_3737_ = lean_array_get_size(v_a_3736_);
v___x_3738_ = lean_nat_dec_lt(v___x_3735_, v___x_3737_);
if (v___x_3738_ == 0)
{
v_a_3730_ = v_b_3728_;
goto v___jp_3729_;
}
else
{
lean_object* v_total_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v_snd_3742_; lean_object* v_key_3743_; lean_object* v___x_3744_; 
v_total_3739_ = lean_unsigned_to_nat(0u);
v___x_3740_ = lean_obj_once(&l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0, &l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0_once, _init_l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0);
v___x_3741_ = lean_array_get_borrowed(v___x_3740_, v_a_3736_, v_total_3739_);
v_snd_3742_ = lean_ctor_get(v___x_3741_, 1);
v_key_3743_ = lean_ctor_get(v_snd_3742_, 0);
lean_inc(v_key_3743_);
v___x_3744_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3724_, v_key_3743_, v_a_3736_, v_b_3728_);
v_a_3730_ = v___x_3744_;
goto v___jp_3729_;
}
}
v___jp_3729_:
{
size_t v___x_3731_; size_t v___x_3732_; 
v___x_3731_ = ((size_t)1ULL);
v___x_3732_ = lean_usize_add(v_i_3727_, v___x_3731_);
v_i_3727_ = v___x_3732_;
v_b_3728_ = v_a_3730_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___boxed(lean_object* v_covered_3745_, lean_object* v_as_3746_, lean_object* v_sz_3747_, lean_object* v_i_3748_, lean_object* v_b_3749_){
_start:
{
size_t v_sz_boxed_3750_; size_t v_i_boxed_3751_; lean_object* v_res_3752_; 
v_sz_boxed_3750_ = lean_unbox_usize(v_sz_3747_);
lean_dec(v_sz_3747_);
v_i_boxed_3751_ = lean_unbox_usize(v_i_3748_);
lean_dec(v_i_3748_);
v_res_3752_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_covered_3745_, v_as_3746_, v_sz_boxed_3750_, v_i_boxed_3751_, v_b_3749_);
lean_dec_ref(v_as_3746_);
lean_dec_ref(v_covered_3745_);
return v_res_3752_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed(lean_object* v___y_3753_, lean_object* v_covered_3754_, lean_object* v_a_3755_){
_start:
{
lean_object* v_res_3756_; 
v_res_3756_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v___y_3753_, v_covered_3754_, v_a_3755_);
lean_dec_ref(v_covered_3754_);
lean_dec_ref(v___y_3753_);
return v_res_3756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg___boxed(lean_object* v_covered_3757_, lean_object* v_key_3758_, lean_object* v_cands_3759_, lean_object* v_acc_3760_){
_start:
{
lean_object* v_res_3761_; 
v_res_3761_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3757_, v_key_3758_, v_cands_3759_, v_acc_3760_);
lean_dec_ref(v_cands_3759_);
lean_dec_ref(v_covered_3757_);
return v_res_3761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(lean_object* v_00_u03b1_3762_, lean_object* v_covered_3763_, lean_object* v_key_3764_, lean_object* v_cands_3765_, lean_object* v_acc_3766_){
_start:
{
lean_object* v___x_3767_; 
v___x_3767_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3763_, v_key_3764_, v_cands_3765_, v_acc_3766_);
return v___x_3767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___boxed(lean_object* v_00_u03b1_3768_, lean_object* v_covered_3769_, lean_object* v_key_3770_, lean_object* v_cands_3771_, lean_object* v_acc_3772_){
_start:
{
lean_object* v_res_3773_; 
v_res_3773_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(v_00_u03b1_3768_, v_covered_3769_, v_key_3770_, v_cands_3771_, v_acc_3772_);
lean_dec_ref(v_cands_3771_);
lean_dec_ref(v_covered_3769_);
return v_res_3773_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(lean_object* v_00_u03b1_3774_, lean_object* v_fst_3775_, lean_object* v_as_3776_, size_t v_sz_3777_, size_t v_i_3778_, lean_object* v_b_3779_){
_start:
{
lean_object* v___x_3780_; 
v___x_3780_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_fst_3775_, v_as_3776_, v_sz_3777_, v_i_3778_, v_b_3779_);
return v___x_3780_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___boxed(lean_object* v_00_u03b1_3781_, lean_object* v_fst_3782_, lean_object* v_as_3783_, lean_object* v_sz_3784_, lean_object* v_i_3785_, lean_object* v_b_3786_){
_start:
{
size_t v_sz_boxed_3787_; size_t v_i_boxed_3788_; lean_object* v_res_3789_; 
v_sz_boxed_3787_ = lean_unbox_usize(v_sz_3784_);
lean_dec(v_sz_3784_);
v_i_boxed_3788_ = lean_unbox_usize(v_i_3785_);
lean_dec(v_i_3785_);
v_res_3789_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(v_00_u03b1_3781_, v_fst_3782_, v_as_3783_, v_sz_boxed_3787_, v_i_boxed_3788_, v_b_3786_);
lean_dec_ref(v_as_3783_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(lean_object* v_00_u03b1_3790_, lean_object* v_as_3791_, size_t v_sz_3792_, size_t v_i_3793_, lean_object* v_b_3794_){
_start:
{
lean_object* v___x_3795_; 
v___x_3795_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_as_3791_, v_sz_3792_, v_i_3793_, v_b_3794_);
return v___x_3795_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___boxed(lean_object* v_00_u03b1_3796_, lean_object* v_as_3797_, lean_object* v_sz_3798_, lean_object* v_i_3799_, lean_object* v_b_3800_){
_start:
{
size_t v_sz_boxed_3801_; size_t v_i_boxed_3802_; lean_object* v_res_3803_; 
v_sz_boxed_3801_ = lean_unbox_usize(v_sz_3798_);
lean_dec(v_sz_3798_);
v_i_boxed_3802_ = lean_unbox_usize(v_i_3799_);
lean_dec(v_i_3799_);
v_res_3803_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(v_00_u03b1_3796_, v_as_3797_, v_sz_boxed_3801_, v_i_boxed_3802_, v_b_3800_);
lean_dec_ref(v_as_3797_);
return v_res_3803_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(lean_object* v_00_u03b1_3804_, lean_object* v_as_3805_, size_t v_sz_3806_, size_t v_i_3807_, lean_object* v_b_3808_){
_start:
{
lean_object* v___x_3809_; 
v___x_3809_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_as_3805_, v_sz_3806_, v_i_3807_, v_b_3808_);
return v___x_3809_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___boxed(lean_object* v_00_u03b1_3810_, lean_object* v_as_3811_, lean_object* v_sz_3812_, lean_object* v_i_3813_, lean_object* v_b_3814_){
_start:
{
size_t v_sz_boxed_3815_; size_t v_i_boxed_3816_; lean_object* v_res_3817_; 
v_sz_boxed_3815_ = lean_unbox_usize(v_sz_3812_);
lean_dec(v_sz_3812_);
v_i_boxed_3816_ = lean_unbox_usize(v_i_3813_);
lean_dec(v_i_3813_);
v_res_3817_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(v_00_u03b1_3810_, v_as_3811_, v_sz_boxed_3815_, v_i_boxed_3816_, v_b_3814_);
lean_dec_ref(v_as_3811_);
return v_res_3817_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(lean_object* v_00_u03b1_3818_, lean_object* v_snd_3819_, uint8_t v___y_3820_, lean_object* v_as_3821_, lean_object* v_j_3822_){
_start:
{
lean_object* v___x_3823_; 
v___x_3823_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_snd_3819_, v___y_3820_, v_as_3821_, v_j_3822_);
return v___x_3823_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___boxed(lean_object* v_00_u03b1_3824_, lean_object* v_snd_3825_, lean_object* v___y_3826_, lean_object* v_as_3827_, lean_object* v_j_3828_){
_start:
{
uint8_t v___y_6001__boxed_3829_; lean_object* v_res_3830_; 
v___y_6001__boxed_3829_ = lean_unbox(v___y_3826_);
v_res_3830_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(v_00_u03b1_3824_, v_snd_3825_, v___y_6001__boxed_3829_, v_as_3827_, v_j_3828_);
lean_dec_ref(v_as_3827_);
lean_dec_ref(v_snd_3825_);
return v_res_3830_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(lean_object* v_00_u03b1_3831_, lean_object* v___y_3832_, lean_object* v___x_3833_, uint64_t v_fst_3834_, lean_object* v_inst_3835_, lean_object* v_a_3836_){
_start:
{
lean_object* v___x_3837_; 
v___x_3837_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___y_3832_, v___x_3833_, v_fst_3834_, v_a_3836_);
return v___x_3837_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___boxed(lean_object* v_00_u03b1_3838_, lean_object* v___y_3839_, lean_object* v___x_3840_, lean_object* v_fst_3841_, lean_object* v_inst_3842_, lean_object* v_a_3843_){
_start:
{
uint64_t v_fst_6010__boxed_3844_; lean_object* v_res_3845_; 
v_fst_6010__boxed_3844_ = lean_unbox_uint64(v_fst_3841_);
lean_dec_ref(v_fst_3841_);
v_res_3845_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(v_00_u03b1_3838_, v___y_3839_, v___x_3840_, v_fst_6010__boxed_3844_, v_inst_3842_, v_a_3843_);
lean_dec(v___x_3840_);
lean_dec_ref(v___y_3839_);
return v_res_3845_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(lean_object* v_00_u03b1_3846_, lean_object* v_covered_3847_, lean_object* v_as_3848_, size_t v_sz_3849_, size_t v_i_3850_, lean_object* v_b_3851_){
_start:
{
lean_object* v___x_3852_; 
v___x_3852_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_covered_3847_, v_as_3848_, v_sz_3849_, v_i_3850_, v_b_3851_);
return v___x_3852_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___boxed(lean_object* v_00_u03b1_3853_, lean_object* v_covered_3854_, lean_object* v_as_3855_, lean_object* v_sz_3856_, lean_object* v_i_3857_, lean_object* v_b_3858_){
_start:
{
size_t v_sz_boxed_3859_; size_t v_i_boxed_3860_; lean_object* v_res_3861_; 
v_sz_boxed_3859_ = lean_unbox_usize(v_sz_3856_);
lean_dec(v_sz_3856_);
v_i_boxed_3860_ = lean_unbox_usize(v_i_3857_);
lean_dec(v_i_3857_);
v_res_3861_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(v_00_u03b1_3853_, v_covered_3854_, v_as_3855_, v_sz_boxed_3859_, v_i_boxed_3860_, v_b_3858_);
lean_dec_ref(v_as_3855_);
lean_dec_ref(v_covered_3854_);
return v_res_3861_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(lean_object* v_00_u03b1_3862_, lean_object* v___y_3863_, lean_object* v_covered_3864_, lean_object* v_inst_3865_, lean_object* v_a_3866_){
_start:
{
lean_object* v___x_3867_; 
v___x_3867_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v___y_3863_, v_covered_3864_, v_a_3866_);
return v___x_3867_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___boxed(lean_object* v_00_u03b1_3868_, lean_object* v___y_3869_, lean_object* v_covered_3870_, lean_object* v_inst_3871_, lean_object* v_a_3872_){
_start:
{
lean_object* v_res_3873_; 
v_res_3873_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(v_00_u03b1_3868_, v___y_3869_, v_covered_3870_, v_inst_3871_, v_a_3872_);
lean_dec_ref(v_covered_3870_);
lean_dec_ref(v___y_3869_);
return v_res_3873_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7(lean_object* v_00_u03b1_3874_, lean_object* v_n_3875_, lean_object* v_as_3876_, lean_object* v_lo_3877_, lean_object* v_hi_3878_, lean_object* v_w_3879_, lean_object* v_hlo_3880_, lean_object* v_hhi_3881_){
_start:
{
lean_object* v___x_3882_; 
v___x_3882_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v_n_3875_, v_as_3876_, v_lo_3877_, v_hi_3878_);
return v___x_3882_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___boxed(lean_object* v_00_u03b1_3883_, lean_object* v_n_3884_, lean_object* v_as_3885_, lean_object* v_lo_3886_, lean_object* v_hi_3887_, lean_object* v_w_3888_, lean_object* v_hlo_3889_, lean_object* v_hhi_3890_){
_start:
{
lean_object* v_res_3891_; 
v_res_3891_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7(v_00_u03b1_3883_, v_n_3884_, v_as_3885_, v_lo_3886_, v_hi_3887_, v_w_3888_, v_hlo_3889_, v_hhi_3890_);
lean_dec(v_hi_3887_);
lean_dec(v_n_3884_);
return v_res_3891_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8(lean_object* v_00_u03b1_3892_, lean_object* v_covered_3893_, lean_object* v_as_3894_, size_t v_sz_3895_, size_t v_i_3896_, uint64_t v_b_3897_){
_start:
{
uint64_t v___x_3898_; 
v___x_3898_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_covered_3893_, v_as_3894_, v_sz_3895_, v_i_3896_, v_b_3897_);
return v___x_3898_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___boxed(lean_object* v_00_u03b1_3899_, lean_object* v_covered_3900_, lean_object* v_as_3901_, lean_object* v_sz_3902_, lean_object* v_i_3903_, lean_object* v_b_3904_){
_start:
{
size_t v_sz_boxed_3905_; size_t v_i_boxed_3906_; uint64_t v_b_boxed_3907_; uint64_t v_res_3908_; lean_object* v_r_3909_; 
v_sz_boxed_3905_ = lean_unbox_usize(v_sz_3902_);
lean_dec(v_sz_3902_);
v_i_boxed_3906_ = lean_unbox_usize(v_i_3903_);
lean_dec(v_i_3903_);
v_b_boxed_3907_ = lean_unbox_uint64(v_b_3904_);
lean_dec_ref(v_b_3904_);
v_res_3908_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8(v_00_u03b1_3899_, v_covered_3900_, v_as_3901_, v_sz_boxed_3905_, v_i_boxed_3906_, v_b_boxed_3907_);
lean_dec_ref(v_as_3901_);
lean_dec_ref(v_covered_3900_);
v_r_3909_ = lean_box_uint64(v_res_3908_);
return v_r_3909_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7(lean_object* v_00_u03b1_3910_, lean_object* v_n_3911_, lean_object* v_lo_3912_, lean_object* v_hi_3913_, lean_object* v_hhi_3914_, lean_object* v_pivot_3915_, lean_object* v_as_3916_, lean_object* v_i_3917_, lean_object* v_k_3918_, lean_object* v_ilo_3919_, lean_object* v_ik_3920_, lean_object* v_w_3921_){
_start:
{
lean_object* v___x_3922_; 
v___x_3922_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(v_hi_3913_, v_pivot_3915_, v_as_3916_, v_i_3917_, v_k_3918_);
return v___x_3922_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___boxed(lean_object* v_00_u03b1_3923_, lean_object* v_n_3924_, lean_object* v_lo_3925_, lean_object* v_hi_3926_, lean_object* v_hhi_3927_, lean_object* v_pivot_3928_, lean_object* v_as_3929_, lean_object* v_i_3930_, lean_object* v_k_3931_, lean_object* v_ilo_3932_, lean_object* v_ik_3933_, lean_object* v_w_3934_){
_start:
{
lean_object* v_res_3935_; 
v_res_3935_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7(v_00_u03b1_3923_, v_n_3924_, v_lo_3925_, v_hi_3926_, v_hhi_3927_, v_pivot_3928_, v_as_3929_, v_i_3930_, v_k_3931_, v_ilo_3932_, v_ik_3933_, v_w_3934_);
lean_dec_ref(v_pivot_3928_);
lean_dec(v_hi_3926_);
lean_dec(v_lo_3925_);
lean_dec(v_n_3924_);
return v_res_3935_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg(lean_object* v_trees_3936_, lean_object* v_covered_3937_){
_start:
{
lean_object* v___x_3938_; lean_object* v___x_3939_; uint8_t v___x_3940_; 
v___x_3938_ = lean_array_get_size(v_trees_3936_);
v___x_3939_ = lean_unsigned_to_nat(2u);
v___x_3940_ = lean_nat_dec_lt(v___x_3938_, v___x_3939_);
if (v___x_3940_ == 0)
{
lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; 
v___x_3941_ = lean_box(0);
v___x_3942_ = ((lean_object*)(l_Lean_ImportedConsts_mergeModuleTrees___redArg___closed__0));
v___x_3943_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3937_, v___x_3941_, v_trees_3936_, v___x_3942_);
return v___x_3943_;
}
else
{
lean_object* v___x_3944_; 
v___x_3944_ = ((lean_object*)(l_Lean_ImportedConsts_mergeModuleTrees___redArg___closed__0));
return v___x_3944_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg___boxed(lean_object* v_trees_3945_, lean_object* v_covered_3946_){
_start:
{
lean_object* v_res_3947_; 
v_res_3947_ = l_Lean_ImportedConsts_collectDuplicates___redArg(v_trees_3945_, v_covered_3946_);
lean_dec_ref(v_covered_3946_);
lean_dec_ref(v_trees_3945_);
return v_res_3947_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates(lean_object* v_00_u03b1_3948_, lean_object* v_trees_3949_, lean_object* v_covered_3950_){
_start:
{
lean_object* v___x_3951_; 
v___x_3951_ = l_Lean_ImportedConsts_collectDuplicates___redArg(v_trees_3949_, v_covered_3950_);
return v___x_3951_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___boxed(lean_object* v_00_u03b1_3952_, lean_object* v_trees_3953_, lean_object* v_covered_3954_){
_start:
{
lean_object* v_res_3955_; 
v_res_3955_ = l_Lean_ImportedConsts_collectDuplicates(v_00_u03b1_3952_, v_trees_3953_, v_covered_3954_);
lean_dec_ref(v_covered_3954_);
lean_dec_ref(v_trees_3953_);
return v_res_3955_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(lean_object* v_snd_3956_, uint8_t v___y_3957_, uint8_t v___y_3958_, lean_object* v_as_3959_, lean_object* v_j_3960_){
_start:
{
uint8_t v___y_3962_; lean_object* v___x_3967_; uint8_t v___x_3968_; 
v___x_3967_ = lean_array_get_size(v_as_3959_);
v___x_3968_ = lean_nat_dec_lt(v_j_3960_, v___x_3967_);
if (v___x_3968_ == 0)
{
lean_object* v___x_3969_; 
lean_dec(v_j_3960_);
v___x_3969_ = lean_box(0);
return v___x_3969_;
}
else
{
lean_object* v_total_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v_snd_3974_; lean_object* v_key_3975_; 
v_total_3970_ = lean_unsigned_to_nat(0u);
v___x_3971_ = lean_array_fget_borrowed(v_as_3959_, v_j_3960_);
v___x_3972_ = lean_obj_once(&l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0, &l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0_once, _init_l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0);
v___x_3973_ = lean_array_get_borrowed(v___x_3972_, v___x_3971_, v_total_3970_);
v_snd_3974_ = lean_ctor_get(v___x_3973_, 1);
v_key_3975_ = lean_ctor_get(v_snd_3974_, 0);
switch(lean_obj_tag(v_key_3975_))
{
case 0:
{
lean_object* v_key_3976_; 
v_key_3976_ = lean_ctor_get(v_snd_3956_, 0);
if (lean_obj_tag(v_key_3976_) == 0)
{
v___y_3962_ = v___y_3957_;
goto v___jp_3961_;
}
else
{
v___y_3962_ = v___y_3958_;
goto v___jp_3961_;
}
}
case 1:
{
lean_object* v_key_3977_; 
v_key_3977_ = lean_ctor_get(v_snd_3956_, 0);
if (lean_obj_tag(v_key_3977_) == 1)
{
lean_object* v_str_3978_; lean_object* v_str_3979_; uint8_t v___x_3980_; 
v_str_3978_ = lean_ctor_get(v_key_3975_, 1);
v_str_3979_ = lean_ctor_get(v_key_3977_, 1);
v___x_3980_ = lean_string_dec_eq(v_str_3978_, v_str_3979_);
v___y_3962_ = v___x_3980_;
goto v___jp_3961_;
}
else
{
v___y_3962_ = v___y_3958_;
goto v___jp_3961_;
}
}
default: 
{
lean_object* v_key_3981_; 
v_key_3981_ = lean_ctor_get(v_snd_3956_, 0);
if (lean_obj_tag(v_key_3981_) == 2)
{
lean_object* v_i_3982_; lean_object* v_i_3983_; uint8_t v___x_3984_; 
v_i_3982_ = lean_ctor_get(v_key_3975_, 1);
v_i_3983_ = lean_ctor_get(v_key_3981_, 1);
v___x_3984_ = lean_nat_dec_eq(v_i_3982_, v_i_3983_);
v___y_3962_ = v___x_3984_;
goto v___jp_3961_;
}
else
{
v___y_3962_ = v___y_3958_;
goto v___jp_3961_;
}
}
}
}
v___jp_3961_:
{
if (v___y_3962_ == 0)
{
lean_object* v___x_3963_; lean_object* v___x_3964_; 
v___x_3963_ = lean_unsigned_to_nat(1u);
v___x_3964_ = lean_nat_add(v_j_3960_, v___x_3963_);
lean_dec(v_j_3960_);
v_j_3960_ = v___x_3964_;
goto _start;
}
else
{
lean_object* v___x_3966_; 
v___x_3966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3966_, 0, v_j_3960_);
return v___x_3966_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___boxed(lean_object* v_snd_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v_as_3988_, lean_object* v_j_3989_){
_start:
{
uint8_t v___y_4136__boxed_3990_; uint8_t v___y_4137__boxed_3991_; lean_object* v_res_3992_; 
v___y_4136__boxed_3990_ = lean_unbox(v___y_3986_);
v___y_4137__boxed_3991_ = lean_unbox(v___y_3987_);
v_res_3992_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_snd_3985_, v___y_4136__boxed_3990_, v___y_4137__boxed_3991_, v_as_3988_, v_j_3989_);
lean_dec_ref(v_as_3988_);
lean_dec_ref(v_snd_3985_);
return v_res_3992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(lean_object* v___y_3993_, uint8_t v___y_3994_, lean_object* v___x_3995_, uint64_t v_fst_3996_, lean_object* v_a_3997_){
_start:
{
lean_object* v___y_3999_; lean_object* v_fst_4003_; lean_object* v_snd_4004_; lean_object* v___x_4006_; uint8_t v_isShared_4007_; uint8_t v_isSharedCheck_4043_; 
v_fst_4003_ = lean_ctor_get(v_a_3997_, 0);
v_snd_4004_ = lean_ctor_get(v_a_3997_, 1);
v_isSharedCheck_4043_ = !lean_is_exclusive(v_a_3997_);
if (v_isSharedCheck_4043_ == 0)
{
v___x_4006_ = v_a_3997_;
v_isShared_4007_ = v_isSharedCheck_4043_;
goto v_resetjp_4005_;
}
else
{
lean_inc(v_snd_4004_);
lean_inc(v_fst_4003_);
lean_dec(v_a_3997_);
v___x_4006_ = lean_box(0);
v_isShared_4007_ = v_isSharedCheck_4043_;
goto v_resetjp_4005_;
}
v___jp_3998_:
{
if (lean_obj_tag(v___y_3999_) == 0)
{
lean_object* v_a_4000_; 
v_a_4000_ = lean_ctor_get(v___y_3999_, 0);
lean_inc(v_a_4000_);
lean_dec_ref_known(v___y_3999_, 1);
return v_a_4000_;
}
else
{
lean_object* v_a_4001_; 
v_a_4001_ = lean_ctor_get(v___y_3999_, 0);
lean_inc(v_a_4001_);
lean_dec_ref_known(v___y_3999_, 1);
v_a_3997_ = v_a_4001_;
goto _start;
}
}
v_resetjp_4005_:
{
lean_object* v___x_4008_; lean_object* v___y_4010_; uint8_t v___y_4014_; uint8_t v___x_4037_; 
v___x_4008_ = lean_unsigned_to_nat(1u);
v___x_4037_ = lean_nat_dec_lt(v_fst_4003_, v___x_3995_);
if (v___x_4037_ == 0)
{
v___y_4014_ = v___x_4037_;
goto v___jp_4013_;
}
else
{
lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v_fst_4040_; uint64_t v___x_4041_; uint8_t v___x_4042_; 
v___x_4038_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0);
v___x_4039_ = lean_array_get_borrowed(v___x_4038_, v___y_3993_, v_fst_4003_);
v_fst_4040_ = lean_ctor_get(v___x_4039_, 0);
v___x_4041_ = lean_unbox_uint64(v_fst_4040_);
v___x_4042_ = lean_uint64_dec_eq(v___x_4041_, v_fst_3996_);
v___y_4014_ = v___x_4042_;
goto v___jp_4013_;
}
v___jp_4009_:
{
lean_object* v___x_4011_; lean_object* v___x_4012_; 
v___x_4011_ = lean_box(0);
v___x_4012_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_4003_, v___x_4008_, v___x_4011_, v___y_4010_);
lean_dec(v_fst_4003_);
v___y_3999_ = v___x_4012_;
goto v___jp_3998_;
}
v___jp_4013_:
{
if (v___y_4014_ == 0)
{
lean_object* v___x_4016_; 
if (v_isShared_4007_ == 0)
{
v___x_4016_ = v___x_4006_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4017_; 
v_reuseFailAlloc_4017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4017_, 0, v_fst_4003_);
lean_ctor_set(v_reuseFailAlloc_4017_, 1, v_snd_4004_);
v___x_4016_ = v_reuseFailAlloc_4017_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
return v___x_4016_;
}
}
else
{
lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v_snd_4021_; lean_object* v_snd_4022_; lean_object* v___x_4023_; 
lean_del_object(v___x_4006_);
v___x_4018_ = lean_unsigned_to_nat(0u);
v___x_4019_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0);
v___x_4020_ = lean_array_get_borrowed(v___x_4019_, v___y_3993_, v_fst_4003_);
v_snd_4021_ = lean_ctor_get(v___x_4020_, 1);
v_snd_4022_ = lean_ctor_get(v_snd_4021_, 1);
v___x_4023_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_snd_4022_, v___y_4014_, v___y_3994_, v_snd_4004_, v___x_4018_);
if (lean_obj_tag(v___x_4023_) == 0)
{
lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; 
v___x_4024_ = lean_mk_empty_array_with_capacity(v___x_4008_);
lean_inc(v_snd_4021_);
v___x_4025_ = lean_array_push(v___x_4024_, v_snd_4021_);
v___x_4026_ = lean_array_push(v_snd_4004_, v___x_4025_);
v___x_4027_ = lean_box(0);
v___x_4028_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_4003_, v___x_4008_, v___x_4027_, v___x_4026_);
lean_dec(v_fst_4003_);
v___y_3999_ = v___x_4028_;
goto v___jp_3998_;
}
else
{
lean_object* v_val_4029_; lean_object* v___x_4030_; uint8_t v___x_4031_; 
v_val_4029_ = lean_ctor_get(v___x_4023_, 0);
lean_inc(v_val_4029_);
lean_dec_ref_known(v___x_4023_, 1);
v___x_4030_ = lean_array_get_size(v_snd_4004_);
v___x_4031_ = lean_nat_dec_lt(v_val_4029_, v___x_4030_);
if (v___x_4031_ == 0)
{
lean_dec(v_val_4029_);
v___y_4010_ = v_snd_4004_;
goto v___jp_4009_;
}
else
{
lean_object* v_v_4032_; lean_object* v___x_4033_; lean_object* v_xs_x27_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; 
v_v_4032_ = lean_array_fget(v_snd_4004_, v_val_4029_);
v___x_4033_ = lean_box(0);
v_xs_x27_4034_ = lean_array_fset(v_snd_4004_, v_val_4029_, v___x_4033_);
lean_inc(v_snd_4021_);
v___x_4035_ = lean_array_push(v_v_4032_, v_snd_4021_);
v___x_4036_ = lean_array_fset(v_xs_x27_4034_, v_val_4029_, v___x_4035_);
lean_dec(v_val_4029_);
v___y_4010_ = v___x_4036_;
goto v___jp_4009_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg___boxed(lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___x_4046_, lean_object* v_fst_4047_, lean_object* v_a_4048_){
_start:
{
uint8_t v___y_4206__boxed_4049_; uint64_t v_fst_4208__boxed_4050_; lean_object* v_res_4051_; 
v___y_4206__boxed_4049_ = lean_unbox(v___y_4045_);
v_fst_4208__boxed_4050_ = lean_unbox_uint64(v_fst_4047_);
lean_dec_ref(v_fst_4047_);
v_res_4051_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(v___y_4044_, v___y_4206__boxed_4049_, v___x_4046_, v_fst_4208__boxed_4050_, v_a_4048_);
lean_dec(v___x_4046_);
lean_dec_ref(v___y_4044_);
return v_res_4051_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1(lean_object* v_cands_4052_, lean_object* v___x_4053_, lean_object* v_resolve_4054_, lean_object* v_x_4055_){
_start:
{
lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; 
v___x_4056_ = lean_unsigned_to_nat(0u);
v___x_4057_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__0___redArg(v_cands_4052_, v___x_4056_, v___x_4053_);
v___x_4058_ = lean_apply_1(v_resolve_4054_, v___x_4057_);
return v___x_4058_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1___boxed(lean_object* v_cands_4059_, lean_object* v___x_4060_, lean_object* v_resolve_4061_, lean_object* v_x_4062_){
_start:
{
lean_object* v_res_4063_; 
v_res_4063_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1(v_cands_4059_, v___x_4060_, v_resolve_4061_, v_x_4062_);
lean_dec(v___x_4060_);
lean_dec_ref(v_cands_4059_);
return v_res_4063_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed(lean_object* v_resolve_4064_, lean_object* v_cands_4065_, lean_object* v_x_4066_){
_start:
{
lean_object* v_res_4067_; 
v_res_4067_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(v_resolve_4064_, v_cands_4065_, v_x_4066_);
lean_dec_ref(v_cands_4065_);
return v_res_4067_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(lean_object* v_resolve_4068_, lean_object* v_key_4069_, lean_object* v_cands_4070_){
_start:
{
lean_object* v___x_4071_; lean_object* v___x_4072_; uint8_t v___x_4073_; 
v___x_4071_ = lean_array_get_size(v_cands_4070_);
v___x_4072_ = lean_unsigned_to_nat(1u);
v___x_4073_ = lean_nat_dec_eq(v___x_4071_, v___x_4072_);
if (v___x_4073_ == 0)
{
lean_object* v___f_4074_; lean_object* v___f_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; 
lean_inc_ref(v_cands_4070_);
lean_inc_ref(v_resolve_4068_);
v___f_4074_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4074_, 0, v_resolve_4068_);
lean_closure_set(v___f_4074_, 1, v_cands_4070_);
v___f_4075_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_4075_, 0, v_cands_4070_);
lean_closure_set(v___f_4075_, 1, v___x_4071_);
lean_closure_set(v___f_4075_, 2, v_resolve_4068_);
v___x_4076_ = lean_mk_thunk(v___f_4075_);
v___x_4077_ = lean_mk_thunk(v___f_4074_);
v___x_4078_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_4078_, 0, v_key_4069_);
lean_ctor_set(v___x_4078_, 1, v___x_4076_);
lean_ctor_set(v___x_4078_, 2, v___x_4077_);
return v___x_4078_;
}
else
{
lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v_fst_4082_; lean_object* v_snd_4083_; lean_object* v___x_4085_; uint8_t v_isShared_4086_; uint8_t v_isSharedCheck_4090_; 
lean_dec(v_key_4069_);
lean_dec_ref(v_resolve_4068_);
v___x_4079_ = lean_unsigned_to_nat(0u);
v___x_4080_ = lean_obj_once(&l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0, &l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0_once, _init_l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0);
v___x_4081_ = lean_array_get(v___x_4080_, v_cands_4070_, v___x_4079_);
lean_dec_ref(v_cands_4070_);
v_fst_4082_ = lean_ctor_get(v___x_4081_, 0);
v_snd_4083_ = lean_ctor_get(v___x_4081_, 1);
v_isSharedCheck_4090_ = !lean_is_exclusive(v___x_4081_);
if (v_isSharedCheck_4090_ == 0)
{
v___x_4085_ = v___x_4081_;
v_isShared_4086_ = v_isSharedCheck_4090_;
goto v_resetjp_4084_;
}
else
{
lean_inc(v_snd_4083_);
lean_inc(v_fst_4082_);
lean_dec(v___x_4081_);
v___x_4085_ = lean_box(0);
v_isShared_4086_ = v_isSharedCheck_4090_;
goto v_resetjp_4084_;
}
v_resetjp_4084_:
{
lean_object* v___x_4088_; 
if (v_isShared_4086_ == 0)
{
v___x_4088_ = v___x_4085_;
goto v_reusejp_4087_;
}
else
{
lean_object* v_reuseFailAlloc_4089_; 
v_reuseFailAlloc_4089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4089_, 0, v_fst_4082_);
lean_ctor_set(v_reuseFailAlloc_4089_, 1, v_snd_4083_);
v___x_4088_ = v_reuseFailAlloc_4089_;
goto v_reusejp_4087_;
}
v_reusejp_4087_:
{
return v___x_4088_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__2___redArg(lean_object* v_resolve_4091_, lean_object* v_as_4092_, size_t v_sz_4093_, size_t v_i_4094_, lean_object* v_b_4095_){
_start:
{
uint8_t v___x_4096_; 
v___x_4096_ = lean_usize_dec_lt(v_i_4094_, v_sz_4093_);
if (v___x_4096_ == 0)
{
lean_dec_ref(v_resolve_4091_);
return v_b_4095_;
}
else
{
lean_object* v_total_4097_; lean_object* v_a_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v_snd_4101_; lean_object* v_key_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; size_t v___x_4105_; size_t v___x_4106_; 
v_total_4097_ = lean_unsigned_to_nat(0u);
v_a_4098_ = lean_array_uget_borrowed(v_as_4092_, v_i_4094_);
v___x_4099_ = lean_obj_once(&l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0, &l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0_once, _init_l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__4___redArg___closed__0);
v___x_4100_ = lean_array_get_borrowed(v___x_4099_, v_a_4098_, v_total_4097_);
v_snd_4101_ = lean_ctor_get(v___x_4100_, 1);
v_key_4102_ = lean_ctor_get(v_snd_4101_, 0);
lean_inc(v_a_4098_);
lean_inc(v_key_4102_);
lean_inc_ref(v_resolve_4091_);
v___x_4103_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4091_, v_key_4102_, v_a_4098_);
v___x_4104_ = lean_array_push(v_b_4095_, v___x_4103_);
v___x_4105_ = ((size_t)1ULL);
v___x_4106_ = lean_usize_add(v_i_4094_, v___x_4105_);
v_i_4094_ = v___x_4106_;
v_b_4095_ = v___x_4104_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__3___redArg(lean_object* v___y_4108_, lean_object* v_resolve_4109_, lean_object* v_a_4110_){
_start:
{
lean_object* v_fst_4111_; lean_object* v_snd_4112_; lean_object* v___x_4114_; uint8_t v_isShared_4115_; uint8_t v_isSharedCheck_4169_; 
v_fst_4111_ = lean_ctor_get(v_a_4110_, 0);
v_snd_4112_ = lean_ctor_get(v_a_4110_, 1);
v_isSharedCheck_4169_ = !lean_is_exclusive(v_a_4110_);
if (v_isSharedCheck_4169_ == 0)
{
v___x_4114_ = v_a_4110_;
v_isShared_4115_ = v_isSharedCheck_4169_;
goto v_resetjp_4113_;
}
else
{
lean_inc(v_snd_4112_);
lean_inc(v_fst_4111_);
lean_dec(v_a_4110_);
v___x_4114_ = lean_box(0);
v_isShared_4115_ = v_isSharedCheck_4169_;
goto v_resetjp_4113_;
}
v_resetjp_4113_:
{
lean_object* v___x_4116_; uint8_t v___x_4117_; 
v___x_4116_ = lean_array_get_size(v___y_4108_);
v___x_4117_ = lean_nat_dec_lt(v_snd_4112_, v___x_4116_);
if (v___x_4117_ == 0)
{
lean_object* v___x_4119_; 
lean_dec_ref(v_resolve_4109_);
if (v_isShared_4115_ == 0)
{
v___x_4119_ = v___x_4114_;
goto v_reusejp_4118_;
}
else
{
lean_object* v_reuseFailAlloc_4120_; 
v_reuseFailAlloc_4120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4120_, 0, v_fst_4111_);
lean_ctor_set(v_reuseFailAlloc_4120_, 1, v_snd_4112_);
v___x_4119_ = v_reuseFailAlloc_4120_;
goto v_reusejp_4118_;
}
v_reusejp_4118_:
{
return v___x_4119_;
}
}
else
{
lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v_snd_4123_; lean_object* v_fst_4124_; lean_object* v___x_4126_; uint8_t v_isShared_4127_; uint8_t v_isSharedCheck_4168_; 
v___x_4121_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands_spec__5___redArg___closed__0);
v___x_4122_ = lean_array_get(v___x_4121_, v___y_4108_, v_snd_4112_);
v_snd_4123_ = lean_ctor_get(v___x_4122_, 1);
v_fst_4124_ = lean_ctor_get(v___x_4122_, 0);
v_isSharedCheck_4168_ = !lean_is_exclusive(v___x_4122_);
if (v_isSharedCheck_4168_ == 0)
{
v___x_4126_ = v___x_4122_;
v_isShared_4127_ = v_isSharedCheck_4168_;
goto v_resetjp_4125_;
}
else
{
lean_inc(v_snd_4123_);
lean_inc(v_fst_4124_);
lean_dec(v___x_4122_);
v___x_4126_ = lean_box(0);
v_isShared_4127_ = v_isSharedCheck_4168_;
goto v_resetjp_4125_;
}
v_resetjp_4125_:
{
lean_object* v_fst_4128_; lean_object* v_snd_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; uint8_t v___y_4140_; uint8_t v___x_4162_; 
v_fst_4128_ = lean_ctor_get(v_snd_4123_, 0);
v_snd_4129_ = lean_ctor_get(v_snd_4123_, 1);
v___x_4130_ = lean_unsigned_to_nat(1u);
v___x_4131_ = lean_nat_add(v_snd_4112_, v___x_4130_);
lean_dec(v_snd_4112_);
v___x_4162_ = lean_nat_dec_eq(v___x_4131_, v___x_4116_);
if (v___x_4162_ == 0)
{
lean_object* v___x_4163_; lean_object* v_fst_4164_; uint64_t v___x_4165_; uint64_t v___x_4166_; uint8_t v___x_4167_; 
v___x_4163_ = lean_array_get_borrowed(v___x_4121_, v___y_4108_, v___x_4131_);
v_fst_4164_ = lean_ctor_get(v___x_4163_, 0);
v___x_4165_ = lean_unbox_uint64(v_fst_4164_);
v___x_4166_ = lean_unbox_uint64(v_fst_4124_);
v___x_4167_ = lean_uint64_dec_eq(v___x_4165_, v___x_4166_);
if (v___x_4167_ == 0)
{
lean_inc(v_snd_4129_);
lean_inc(v_fst_4128_);
lean_dec(v_fst_4124_);
lean_dec(v_snd_4123_);
lean_del_object(v___x_4114_);
goto v___jp_4132_;
}
else
{
v___y_4140_ = v___x_4162_;
goto v___jp_4139_;
}
}
else
{
v___y_4140_ = v___x_4162_;
goto v___jp_4139_;
}
v___jp_4132_:
{
lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4136_; 
v___x_4133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4133_, 0, v_fst_4128_);
lean_ctor_set(v___x_4133_, 1, v_snd_4129_);
v___x_4134_ = lean_array_push(v_fst_4111_, v___x_4133_);
if (v_isShared_4127_ == 0)
{
lean_ctor_set(v___x_4126_, 1, v___x_4131_);
lean_ctor_set(v___x_4126_, 0, v___x_4134_);
v___x_4136_ = v___x_4126_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4138_; 
v_reuseFailAlloc_4138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4138_, 0, v___x_4134_);
lean_ctor_set(v_reuseFailAlloc_4138_, 1, v___x_4131_);
v___x_4136_ = v_reuseFailAlloc_4138_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
v_a_4110_ = v___x_4136_;
goto _start;
}
}
v___jp_4139_:
{
if (v___y_4140_ == 0)
{
lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4145_; 
lean_del_object(v___x_4126_);
v___x_4141_ = lean_mk_empty_array_with_capacity(v___x_4130_);
lean_inc_ref(v___x_4141_);
v___x_4142_ = lean_array_push(v___x_4141_, v_snd_4123_);
v___x_4143_ = lean_array_push(v___x_4141_, v___x_4142_);
if (v_isShared_4115_ == 0)
{
lean_ctor_set(v___x_4114_, 1, v___x_4143_);
lean_ctor_set(v___x_4114_, 0, v___x_4131_);
v___x_4145_ = v___x_4114_;
goto v_reusejp_4144_;
}
else
{
lean_object* v_reuseFailAlloc_4161_; 
v_reuseFailAlloc_4161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4161_, 0, v___x_4131_);
lean_ctor_set(v_reuseFailAlloc_4161_, 1, v___x_4143_);
v___x_4145_ = v_reuseFailAlloc_4161_;
goto v_reusejp_4144_;
}
v_reusejp_4144_:
{
uint64_t v___x_4146_; lean_object* v___x_4147_; lean_object* v_fst_4148_; lean_object* v_snd_4149_; lean_object* v___x_4151_; uint8_t v_isShared_4152_; uint8_t v_isSharedCheck_4160_; 
v___x_4146_ = lean_unbox_uint64(v_fst_4124_);
lean_dec(v_fst_4124_);
v___x_4147_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(v___y_4108_, v___y_4140_, v___x_4116_, v___x_4146_, v___x_4145_);
v_fst_4148_ = lean_ctor_get(v___x_4147_, 0);
v_snd_4149_ = lean_ctor_get(v___x_4147_, 1);
v_isSharedCheck_4160_ = !lean_is_exclusive(v___x_4147_);
if (v_isSharedCheck_4160_ == 0)
{
v___x_4151_ = v___x_4147_;
v_isShared_4152_ = v_isSharedCheck_4160_;
goto v_resetjp_4150_;
}
else
{
lean_inc(v_snd_4149_);
lean_inc(v_fst_4148_);
lean_dec(v___x_4147_);
v___x_4151_ = lean_box(0);
v_isShared_4152_ = v_isSharedCheck_4160_;
goto v_resetjp_4150_;
}
v_resetjp_4150_:
{
size_t v_sz_4153_; size_t v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4157_; 
v_sz_4153_ = lean_array_size(v_snd_4149_);
v___x_4154_ = ((size_t)0ULL);
lean_inc_ref(v_resolve_4109_);
v___x_4155_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__2___redArg(v_resolve_4109_, v_snd_4149_, v_sz_4153_, v___x_4154_, v_fst_4111_);
lean_dec(v_snd_4149_);
if (v_isShared_4152_ == 0)
{
lean_ctor_set(v___x_4151_, 1, v_fst_4148_);
lean_ctor_set(v___x_4151_, 0, v___x_4155_);
v___x_4157_ = v___x_4151_;
goto v_reusejp_4156_;
}
else
{
lean_object* v_reuseFailAlloc_4159_; 
v_reuseFailAlloc_4159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4159_, 0, v___x_4155_);
lean_ctor_set(v_reuseFailAlloc_4159_, 1, v_fst_4148_);
v___x_4157_ = v_reuseFailAlloc_4159_;
goto v_reusejp_4156_;
}
v_reusejp_4156_:
{
v_a_4110_ = v___x_4157_;
goto _start;
}
}
}
}
else
{
lean_inc(v_snd_4129_);
lean_inc(v_fst_4128_);
lean_dec(v_fst_4124_);
lean_dec(v_snd_4123_);
lean_del_object(v___x_4114_);
goto v___jp_4132_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(lean_object* v_resolve_4170_, lean_object* v_cands_4171_){
_start:
{
lean_object* v_total_4172_; lean_object* v___y_4174_; size_t v_sz_4187_; size_t v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___y_4194_; lean_object* v___y_4195_; uint8_t v___x_4197_; 
v_total_4172_ = lean_unsigned_to_nat(0u);
v_sz_4187_ = lean_array_size(v_cands_4171_);
v___x_4188_ = ((size_t)0ULL);
v___x_4189_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_cands_4171_, v_sz_4187_, v___x_4188_, v_total_4172_);
v___x_4190_ = lean_mk_empty_array_with_capacity(v___x_4189_);
lean_dec(v___x_4189_);
v___x_4191_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_cands_4171_, v_sz_4187_, v___x_4188_, v___x_4190_);
v___x_4192_ = lean_array_get_size(v___x_4191_);
v___x_4197_ = lean_nat_dec_eq(v___x_4192_, v_total_4172_);
if (v___x_4197_ == 0)
{
lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___y_4201_; uint8_t v___x_4203_; 
v___x_4198_ = lean_unsigned_to_nat(1u);
v___x_4199_ = lean_nat_sub(v___x_4192_, v___x_4198_);
v___x_4203_ = lean_nat_dec_le(v_total_4172_, v___x_4199_);
if (v___x_4203_ == 0)
{
lean_inc(v___x_4199_);
v___y_4201_ = v___x_4199_;
goto v___jp_4200_;
}
else
{
v___y_4201_ = v_total_4172_;
goto v___jp_4200_;
}
v___jp_4200_:
{
uint8_t v___x_4202_; 
v___x_4202_ = lean_nat_dec_le(v___y_4201_, v___x_4199_);
if (v___x_4202_ == 0)
{
lean_dec(v___x_4199_);
lean_inc(v___y_4201_);
v___y_4194_ = v___y_4201_;
v___y_4195_ = v___y_4201_;
goto v___jp_4193_;
}
else
{
v___y_4194_ = v___y_4201_;
v___y_4195_ = v___x_4199_;
goto v___jp_4193_;
}
}
}
else
{
v___y_4174_ = v___x_4191_;
goto v___jp_4173_;
}
v___jp_4173_:
{
lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v_fst_4177_; lean_object* v___x_4179_; uint8_t v_isShared_4180_; uint8_t v_isSharedCheck_4185_; 
v___x_4175_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeCands___redArg___closed__0));
v___x_4176_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__3___redArg(v___y_4174_, v_resolve_4170_, v___x_4175_);
lean_dec_ref(v___y_4174_);
v_fst_4177_ = lean_ctor_get(v___x_4176_, 0);
v_isSharedCheck_4185_ = !lean_is_exclusive(v___x_4176_);
if (v_isSharedCheck_4185_ == 0)
{
lean_object* v_unused_4186_; 
v_unused_4186_ = lean_ctor_get(v___x_4176_, 1);
lean_dec(v_unused_4186_);
v___x_4179_ = v___x_4176_;
v_isShared_4180_ = v_isSharedCheck_4185_;
goto v_resetjp_4178_;
}
else
{
lean_inc(v_fst_4177_);
lean_dec(v___x_4176_);
v___x_4179_ = lean_box(0);
v_isShared_4180_ = v_isSharedCheck_4185_;
goto v_resetjp_4178_;
}
v_resetjp_4178_:
{
lean_object* v___x_4181_; lean_object* v___x_4183_; 
v___x_4181_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v_fst_4177_);
if (v_isShared_4180_ == 0)
{
lean_ctor_set(v___x_4179_, 1, v___x_4181_);
v___x_4183_ = v___x_4179_;
goto v_reusejp_4182_;
}
else
{
lean_object* v_reuseFailAlloc_4184_; 
v_reuseFailAlloc_4184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4184_, 0, v_fst_4177_);
lean_ctor_set(v_reuseFailAlloc_4184_, 1, v___x_4181_);
v___x_4183_ = v_reuseFailAlloc_4184_;
goto v_reusejp_4182_;
}
v_reusejp_4182_:
{
return v___x_4183_;
}
}
}
v___jp_4193_:
{
lean_object* v___x_4196_; 
v___x_4196_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v___x_4192_, v___x_4191_, v___y_4194_, v___y_4195_);
lean_dec(v___y_4195_);
v___y_4174_ = v___x_4196_;
goto v___jp_4173_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(lean_object* v_resolve_4204_, lean_object* v_cands_4205_, lean_object* v_x_4206_){
_start:
{
lean_object* v___x_4207_; 
v___x_4207_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_4204_, v_cands_4205_);
return v___x_4207_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__2___redArg___boxed(lean_object* v_resolve_4208_, lean_object* v_as_4209_, lean_object* v_sz_4210_, lean_object* v_i_4211_, lean_object* v_b_4212_){
_start:
{
size_t v_sz_boxed_4213_; size_t v_i_boxed_4214_; lean_object* v_res_4215_; 
v_sz_boxed_4213_ = lean_unbox_usize(v_sz_4210_);
lean_dec(v_sz_4210_);
v_i_boxed_4214_ = lean_unbox_usize(v_i_4211_);
lean_dec(v_i_4211_);
v_res_4215_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__2___redArg(v_resolve_4208_, v_as_4209_, v_sz_boxed_4213_, v_i_boxed_4214_, v_b_4212_);
lean_dec_ref(v_as_4209_);
return v_res_4215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___boxed(lean_object* v_resolve_4216_, lean_object* v_cands_4217_){
_start:
{
lean_object* v_res_4218_; 
v_res_4218_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_4216_, v_cands_4217_);
lean_dec_ref(v_cands_4217_);
return v_res_4218_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__3___redArg___boxed(lean_object* v___y_4219_, lean_object* v_resolve_4220_, lean_object* v_a_4221_){
_start:
{
lean_object* v_res_4222_; 
v_res_4222_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__3___redArg(v___y_4219_, v_resolve_4220_, v_a_4221_);
lean_dec_ref(v___y_4219_);
return v_res_4222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(lean_object* v_00_u03b1_4223_, lean_object* v_resolve_4224_, lean_object* v_cands_4225_){
_start:
{
lean_object* v___x_4226_; 
v___x_4226_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_4224_, v_cands_4225_);
return v___x_4226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___boxed(lean_object* v_00_u03b1_4227_, lean_object* v_resolve_4228_, lean_object* v_cands_4229_){
_start:
{
lean_object* v_res_4230_; 
v_res_4230_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(v_00_u03b1_4227_, v_resolve_4228_, v_cands_4229_);
lean_dec_ref(v_cands_4229_);
return v_res_4230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy(lean_object* v_00_u03b1_4231_, lean_object* v_resolve_4232_, lean_object* v_key_4233_, lean_object* v_cands_4234_){
_start:
{
lean_object* v___x_4235_; 
v___x_4235_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4232_, v_key_4233_, v_cands_4234_);
return v___x_4235_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(lean_object* v_00_u03b1_4236_, lean_object* v_snd_4237_, uint8_t v___y_4238_, uint8_t v___y_4239_, lean_object* v_as_4240_, lean_object* v_j_4241_){
_start:
{
lean_object* v___x_4242_; 
v___x_4242_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_snd_4237_, v___y_4238_, v___y_4239_, v_as_4240_, v_j_4241_);
return v___x_4242_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___boxed(lean_object* v_00_u03b1_4243_, lean_object* v_snd_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v_as_4247_, lean_object* v_j_4248_){
_start:
{
uint8_t v___y_4581__boxed_4249_; uint8_t v___y_4582__boxed_4250_; lean_object* v_res_4251_; 
v___y_4581__boxed_4249_ = lean_unbox(v___y_4245_);
v___y_4582__boxed_4250_ = lean_unbox(v___y_4246_);
v_res_4251_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(v_00_u03b1_4243_, v_snd_4244_, v___y_4581__boxed_4249_, v___y_4582__boxed_4250_, v_as_4247_, v_j_4248_);
lean_dec_ref(v_as_4247_);
lean_dec_ref(v_snd_4244_);
return v_res_4251_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1(lean_object* v_00_u03b1_4252_, lean_object* v___y_4253_, uint8_t v___y_4254_, lean_object* v___x_4255_, uint64_t v_fst_4256_, lean_object* v_inst_4257_, lean_object* v_a_4258_){
_start:
{
lean_object* v___x_4259_; 
v___x_4259_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(v___y_4253_, v___y_4254_, v___x_4255_, v_fst_4256_, v_a_4258_);
return v___x_4259_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___boxed(lean_object* v_00_u03b1_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_, lean_object* v___x_4263_, lean_object* v_fst_4264_, lean_object* v_inst_4265_, lean_object* v_a_4266_){
_start:
{
uint8_t v___y_4592__boxed_4267_; uint64_t v_fst_4594__boxed_4268_; lean_object* v_res_4269_; 
v___y_4592__boxed_4267_ = lean_unbox(v___y_4262_);
v_fst_4594__boxed_4268_ = lean_unbox_uint64(v_fst_4264_);
lean_dec_ref(v_fst_4264_);
v_res_4269_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1(v_00_u03b1_4260_, v___y_4261_, v___y_4592__boxed_4267_, v___x_4263_, v_fst_4594__boxed_4268_, v_inst_4265_, v_a_4266_);
lean_dec(v___x_4263_);
lean_dec_ref(v___y_4261_);
return v_res_4269_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__2(lean_object* v_00_u03b1_4270_, lean_object* v_resolve_4271_, lean_object* v_as_4272_, size_t v_sz_4273_, size_t v_i_4274_, lean_object* v_b_4275_){
_start:
{
lean_object* v___x_4276_; 
v___x_4276_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__2___redArg(v_resolve_4271_, v_as_4272_, v_sz_4273_, v_i_4274_, v_b_4275_);
return v___x_4276_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__2___boxed(lean_object* v_00_u03b1_4277_, lean_object* v_resolve_4278_, lean_object* v_as_4279_, lean_object* v_sz_4280_, lean_object* v_i_4281_, lean_object* v_b_4282_){
_start:
{
size_t v_sz_boxed_4283_; size_t v_i_boxed_4284_; lean_object* v_res_4285_; 
v_sz_boxed_4283_ = lean_unbox_usize(v_sz_4280_);
lean_dec(v_sz_4280_);
v_i_boxed_4284_ = lean_unbox_usize(v_i_4281_);
lean_dec(v_i_4281_);
v_res_4285_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__2(v_00_u03b1_4277_, v_resolve_4278_, v_as_4279_, v_sz_boxed_4283_, v_i_boxed_4284_, v_b_4282_);
lean_dec_ref(v_as_4279_);
return v_res_4285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__3(lean_object* v_00_u03b1_4286_, lean_object* v___y_4287_, lean_object* v_resolve_4288_, lean_object* v_inst_4289_, lean_object* v_a_4290_){
_start:
{
lean_object* v___x_4291_; 
v___x_4291_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__3___redArg(v___y_4287_, v_resolve_4288_, v_a_4290_);
return v___x_4291_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__3___boxed(lean_object* v_00_u03b1_4292_, lean_object* v___y_4293_, lean_object* v_resolve_4294_, lean_object* v_inst_4295_, lean_object* v_a_4296_){
_start:
{
lean_object* v_res_4297_; 
v_res_4297_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__3(v_00_u03b1_4292_, v___y_4293_, v_resolve_4294_, v_inst_4295_, v_a_4296_);
lean_dec_ref(v___y_4293_);
return v_res_4297_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(lean_object* v_trees_4298_, lean_object* v_resolve_4299_){
_start:
{
lean_object* v___x_4300_; lean_object* v___x_4301_; 
v___x_4300_ = lean_box(0);
v___x_4301_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4299_, v___x_4300_, v_trees_4298_);
return v___x_4301_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy(lean_object* v_00_u03b1_4302_, lean_object* v_trees_4303_, lean_object* v_resolve_4304_){
_start:
{
lean_object* v___x_4305_; 
v___x_4305_ = l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(v_trees_4303_, v_resolve_4304_);
return v___x_4305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg(lean_object* v_n_4307_, lean_object* v_f_4308_, lean_object* v_a_4309_){
_start:
{
switch(lean_obj_tag(v_a_4309_))
{
case 0:
{
lean_dec_ref(v_f_4308_);
return v_a_4309_;
}
case 1:
{
lean_object* v_key_4310_; lean_object* v_entry_x3f_4311_; lean_object* v_children_4312_; lean_object* v_childIndex_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; 
v_key_4310_ = lean_ctor_get(v_a_4309_, 0);
v_entry_x3f_4311_ = lean_ctor_get(v_a_4309_, 1);
v_children_4312_ = lean_ctor_get(v_a_4309_, 2);
v_childIndex_4313_ = lean_ctor_get(v_a_4309_, 3);
v___x_4314_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___closed__0);
v___x_4315_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg___closed__0));
v___x_4316_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___redArg(v___x_4314_, v_childIndex_4313_, v_children_4312_, v___x_4315_, v_n_4307_);
if (lean_obj_tag(v___x_4316_) == 0)
{
lean_dec_ref(v_f_4308_);
return v_a_4309_;
}
else
{
lean_object* v_val_4317_; lean_object* v___x_4318_; uint8_t v___x_4319_; 
v_val_4317_ = lean_ctor_get(v___x_4316_, 0);
lean_inc(v_val_4317_);
lean_dec_ref_known(v___x_4316_, 1);
v___x_4318_ = lean_array_get_size(v_children_4312_);
v___x_4319_ = lean_nat_dec_lt(v_val_4317_, v___x_4318_);
if (v___x_4319_ == 0)
{
lean_dec(v_val_4317_);
lean_dec_ref(v_f_4308_);
return v_a_4309_;
}
else
{
lean_object* v___x_4321_; uint8_t v_isShared_4322_; uint8_t v_isSharedCheck_4331_; 
lean_inc_ref(v_childIndex_4313_);
lean_inc_ref(v_children_4312_);
lean_inc(v_entry_x3f_4311_);
lean_inc(v_key_4310_);
v_isSharedCheck_4331_ = !lean_is_exclusive(v_a_4309_);
if (v_isSharedCheck_4331_ == 0)
{
lean_object* v_unused_4332_; lean_object* v_unused_4333_; lean_object* v_unused_4334_; lean_object* v_unused_4335_; 
v_unused_4332_ = lean_ctor_get(v_a_4309_, 3);
lean_dec(v_unused_4332_);
v_unused_4333_ = lean_ctor_get(v_a_4309_, 2);
lean_dec(v_unused_4333_);
v_unused_4334_ = lean_ctor_get(v_a_4309_, 1);
lean_dec(v_unused_4334_);
v_unused_4335_ = lean_ctor_get(v_a_4309_, 0);
lean_dec(v_unused_4335_);
v___x_4321_ = v_a_4309_;
v_isShared_4322_ = v_isSharedCheck_4331_;
goto v_resetjp_4320_;
}
else
{
lean_dec(v_a_4309_);
v___x_4321_ = lean_box(0);
v_isShared_4322_ = v_isSharedCheck_4331_;
goto v_resetjp_4320_;
}
v_resetjp_4320_:
{
lean_object* v_v_4323_; lean_object* v___x_4324_; lean_object* v_xs_x27_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4329_; 
v_v_4323_ = lean_array_fget(v_children_4312_, v_val_4317_);
v___x_4324_ = lean_box(0);
v_xs_x27_4325_ = lean_array_fset(v_children_4312_, v_val_4317_, v___x_4324_);
v___x_4326_ = lean_apply_1(v_f_4308_, v_v_4323_);
v___x_4327_ = lean_array_fset(v_xs_x27_4325_, v_val_4317_, v___x_4326_);
lean_dec(v_val_4317_);
if (v_isShared_4322_ == 0)
{
lean_ctor_set(v___x_4321_, 2, v___x_4327_);
v___x_4329_ = v___x_4321_;
goto v_reusejp_4328_;
}
else
{
lean_object* v_reuseFailAlloc_4330_; 
v_reuseFailAlloc_4330_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4330_, 0, v_key_4310_);
lean_ctor_set(v_reuseFailAlloc_4330_, 1, v_entry_x3f_4311_);
lean_ctor_set(v_reuseFailAlloc_4330_, 2, v___x_4327_);
lean_ctor_set(v_reuseFailAlloc_4330_, 3, v_childIndex_4313_);
v___x_4329_ = v_reuseFailAlloc_4330_;
goto v_reusejp_4328_;
}
v_reusejp_4328_:
{
return v___x_4329_;
}
}
}
}
}
default: 
{
lean_object* v_key_4336_; lean_object* v_entry_4337_; lean_object* v_expanded_4338_; lean_object* v___x_4339_; lean_object* v_fst_4340_; lean_object* v_snd_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; 
v_key_4336_ = lean_ctor_get(v_a_4309_, 0);
lean_inc(v_key_4336_);
v_entry_4337_ = lean_ctor_get(v_a_4309_, 1);
lean_inc_ref(v_entry_4337_);
v_expanded_4338_ = lean_ctor_get(v_a_4309_, 2);
lean_inc_ref(v_expanded_4338_);
lean_dec_ref_known(v_a_4309_, 3);
v___x_4339_ = lean_thunk_get_own(v_expanded_4338_);
lean_dec_ref(v_expanded_4338_);
v_fst_4340_ = lean_ctor_get(v___x_4339_, 0);
lean_inc(v_fst_4340_);
v_snd_4341_ = lean_ctor_get(v___x_4339_, 1);
lean_inc(v_snd_4341_);
lean_dec(v___x_4339_);
v___x_4342_ = lean_thunk_get_own(v_entry_4337_);
lean_dec_ref(v_entry_4337_);
v___x_4343_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_4343_, 0, v_key_4336_);
lean_ctor_set(v___x_4343_, 1, v___x_4342_);
lean_ctor_set(v___x_4343_, 2, v_fst_4340_);
lean_ctor_set(v___x_4343_, 3, v_snd_4341_);
v_a_4309_ = v___x_4343_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg___boxed(lean_object* v_n_4345_, lean_object* v_f_4346_, lean_object* v_a_4347_){
_start:
{
lean_object* v_res_4348_; 
v_res_4348_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg(v_n_4345_, v_f_4346_, v_a_4347_);
lean_dec(v_n_4345_);
return v_res_4348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild(lean_object* v_00_u03b1_4349_, lean_object* v_n_4350_, lean_object* v_f_4351_, lean_object* v_a_4352_){
_start:
{
lean_object* v___x_4353_; 
v___x_4353_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg(v_n_4350_, v_f_4351_, v_a_4352_);
return v___x_4353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___boxed(lean_object* v_00_u03b1_4354_, lean_object* v_n_4355_, lean_object* v_f_4356_, lean_object* v_a_4357_){
_start:
{
lean_object* v_res_4358_; 
v_res_4358_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild(v_00_u03b1_4354_, v_n_4355_, v_f_4356_, v_a_4357_);
lean_dec(v_n_4355_);
return v_res_4358_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt___redArg(lean_object* v_t_4359_, lean_object* v_n_4360_, lean_object* v_f_4361_){
_start:
{
if (lean_obj_tag(v_n_4360_) == 0)
{
lean_object* v___x_4362_; 
v___x_4362_ = lean_apply_1(v_f_4361_, v_t_4359_);
return v___x_4362_;
}
else
{
lean_object* v_pre_4363_; lean_object* v___x_4364_; 
v_pre_4363_ = lean_ctor_get(v_n_4360_, 0);
lean_inc(v_pre_4363_);
v___x_4364_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___boxed), 4, 3);
lean_closure_set(v___x_4364_, 0, lean_box(0));
lean_closure_set(v___x_4364_, 1, v_n_4360_);
lean_closure_set(v___x_4364_, 2, v_f_4361_);
v_n_4360_ = v_pre_4363_;
v_f_4361_ = v___x_4364_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt(lean_object* v_00_u03b1_4366_, lean_object* v_t_4367_, lean_object* v_n_4368_, lean_object* v_f_4369_){
_start:
{
lean_object* v___x_4370_; 
v___x_4370_ = l_Lean_ImportedConsts_modifyAt___redArg(v_t_4367_, v_n_4368_, v_f_4369_);
return v___x_4370_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceExpanded___redArg(lean_object* v_x_4371_){
_start:
{
switch(lean_obj_tag(v_x_4371_))
{
case 2:
{
lean_object* v_key_4372_; lean_object* v_entry_4373_; lean_object* v_expanded_4374_; lean_object* v___x_4375_; lean_object* v_fst_4376_; lean_object* v_snd_4377_; lean_object* v___x_4378_; size_t v_sz_4379_; size_t v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; 
v_key_4372_ = lean_ctor_get(v_x_4371_, 0);
lean_inc(v_key_4372_);
v_entry_4373_ = lean_ctor_get(v_x_4371_, 1);
lean_inc_ref(v_entry_4373_);
v_expanded_4374_ = lean_ctor_get(v_x_4371_, 2);
lean_inc_ref(v_expanded_4374_);
lean_dec_ref_known(v_x_4371_, 3);
v___x_4375_ = lean_thunk_get_own(v_expanded_4374_);
lean_dec_ref(v_expanded_4374_);
v_fst_4376_ = lean_ctor_get(v___x_4375_, 0);
lean_inc(v_fst_4376_);
v_snd_4377_ = lean_ctor_get(v___x_4375_, 1);
lean_inc(v_snd_4377_);
lean_dec(v___x_4375_);
v___x_4378_ = lean_thunk_get_own(v_entry_4373_);
lean_dec_ref(v_entry_4373_);
v_sz_4379_ = lean_array_size(v_fst_4376_);
v___x_4380_ = ((size_t)0ULL);
v___x_4381_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(v_sz_4379_, v___x_4380_, v_fst_4376_);
v___x_4382_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_4382_, 0, v_key_4372_);
lean_ctor_set(v___x_4382_, 1, v___x_4378_);
lean_ctor_set(v___x_4382_, 2, v___x_4381_);
lean_ctor_set(v___x_4382_, 3, v_snd_4377_);
return v___x_4382_;
}
case 1:
{
lean_object* v_key_4383_; lean_object* v_entry_x3f_4384_; lean_object* v_children_4385_; lean_object* v_childIndex_4386_; lean_object* v___x_4388_; uint8_t v_isShared_4389_; uint8_t v_isSharedCheck_4396_; 
v_key_4383_ = lean_ctor_get(v_x_4371_, 0);
v_entry_x3f_4384_ = lean_ctor_get(v_x_4371_, 1);
v_children_4385_ = lean_ctor_get(v_x_4371_, 2);
v_childIndex_4386_ = lean_ctor_get(v_x_4371_, 3);
v_isSharedCheck_4396_ = !lean_is_exclusive(v_x_4371_);
if (v_isSharedCheck_4396_ == 0)
{
v___x_4388_ = v_x_4371_;
v_isShared_4389_ = v_isSharedCheck_4396_;
goto v_resetjp_4387_;
}
else
{
lean_inc(v_childIndex_4386_);
lean_inc(v_children_4385_);
lean_inc(v_entry_x3f_4384_);
lean_inc(v_key_4383_);
lean_dec(v_x_4371_);
v___x_4388_ = lean_box(0);
v_isShared_4389_ = v_isSharedCheck_4396_;
goto v_resetjp_4387_;
}
v_resetjp_4387_:
{
size_t v_sz_4390_; size_t v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4394_; 
v_sz_4390_ = lean_array_size(v_children_4385_);
v___x_4391_ = ((size_t)0ULL);
v___x_4392_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(v_sz_4390_, v___x_4391_, v_children_4385_);
if (v_isShared_4389_ == 0)
{
lean_ctor_set(v___x_4388_, 2, v___x_4392_);
v___x_4394_ = v___x_4388_;
goto v_reusejp_4393_;
}
else
{
lean_object* v_reuseFailAlloc_4395_; 
v_reuseFailAlloc_4395_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4395_, 0, v_key_4383_);
lean_ctor_set(v_reuseFailAlloc_4395_, 1, v_entry_x3f_4384_);
lean_ctor_set(v_reuseFailAlloc_4395_, 2, v___x_4392_);
lean_ctor_set(v_reuseFailAlloc_4395_, 3, v_childIndex_4386_);
v___x_4394_ = v_reuseFailAlloc_4395_;
goto v_reusejp_4393_;
}
v_reusejp_4393_:
{
return v___x_4394_;
}
}
}
default: 
{
return v_x_4371_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(size_t v_sz_4397_, size_t v_i_4398_, lean_object* v_bs_4399_){
_start:
{
uint8_t v___x_4400_; 
v___x_4400_ = lean_usize_dec_lt(v_i_4398_, v_sz_4397_);
if (v___x_4400_ == 0)
{
return v_bs_4399_;
}
else
{
lean_object* v_v_4401_; lean_object* v___x_4402_; lean_object* v_bs_x27_4403_; lean_object* v___x_4404_; size_t v___x_4405_; size_t v___x_4406_; lean_object* v___x_4407_; 
v_v_4401_ = lean_array_uget(v_bs_4399_, v_i_4398_);
v___x_4402_ = lean_unsigned_to_nat(0u);
v_bs_x27_4403_ = lean_array_uset(v_bs_4399_, v_i_4398_, v___x_4402_);
v___x_4404_ = l_Lean_ImportedConsts_forceExpanded___redArg(v_v_4401_);
v___x_4405_ = ((size_t)1ULL);
v___x_4406_ = lean_usize_add(v_i_4398_, v___x_4405_);
v___x_4407_ = lean_array_uset(v_bs_x27_4403_, v_i_4398_, v___x_4404_);
v_i_4398_ = v___x_4406_;
v_bs_4399_ = v___x_4407_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg___boxed(lean_object* v_sz_4409_, lean_object* v_i_4410_, lean_object* v_bs_4411_){
_start:
{
size_t v_sz_boxed_4412_; size_t v_i_boxed_4413_; lean_object* v_res_4414_; 
v_sz_boxed_4412_ = lean_unbox_usize(v_sz_4409_);
lean_dec(v_sz_4409_);
v_i_boxed_4413_ = lean_unbox_usize(v_i_4410_);
lean_dec(v_i_4410_);
v_res_4414_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(v_sz_boxed_4412_, v_i_boxed_4413_, v_bs_4411_);
return v_res_4414_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceExpanded(lean_object* v_00_u03b1_4415_, lean_object* v_x_4416_){
_start:
{
lean_object* v___x_4417_; 
v___x_4417_ = l_Lean_ImportedConsts_forceExpanded___redArg(v_x_4416_);
return v___x_4417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0(lean_object* v_00_u03b1_4418_, size_t v_sz_4419_, size_t v_i_4420_, lean_object* v_bs_4421_){
_start:
{
lean_object* v___x_4422_; 
v___x_4422_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(v_sz_4419_, v_i_4420_, v_bs_4421_);
return v___x_4422_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___boxed(lean_object* v_00_u03b1_4423_, lean_object* v_sz_4424_, lean_object* v_i_4425_, lean_object* v_bs_4426_){
_start:
{
size_t v_sz_boxed_4427_; size_t v_i_boxed_4428_; lean_object* v_res_4429_; 
v_sz_boxed_4427_ = lean_unbox_usize(v_sz_4424_);
lean_dec(v_sz_4424_);
v_i_boxed_4428_ = lean_unbox_usize(v_i_4425_);
lean_dec(v_i_4425_);
v_res_4429_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0(v_00_u03b1_4423_, v_sz_boxed_4427_, v_i_boxed_4428_, v_bs_4426_);
return v_res_4429_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_setEntry___redArg___lam__0(lean_object* v_e_4430_, lean_object* v_x_4431_){
_start:
{
if (lean_obj_tag(v_x_4431_) == 1)
{
lean_object* v_key_4432_; lean_object* v_children_4433_; lean_object* v_childIndex_4434_; lean_object* v___x_4436_; uint8_t v_isShared_4437_; uint8_t v_isSharedCheck_4442_; 
v_key_4432_ = lean_ctor_get(v_x_4431_, 0);
v_children_4433_ = lean_ctor_get(v_x_4431_, 2);
v_childIndex_4434_ = lean_ctor_get(v_x_4431_, 3);
v_isSharedCheck_4442_ = !lean_is_exclusive(v_x_4431_);
if (v_isSharedCheck_4442_ == 0)
{
lean_object* v_unused_4443_; 
v_unused_4443_ = lean_ctor_get(v_x_4431_, 1);
lean_dec(v_unused_4443_);
v___x_4436_ = v_x_4431_;
v_isShared_4437_ = v_isSharedCheck_4442_;
goto v_resetjp_4435_;
}
else
{
lean_inc(v_childIndex_4434_);
lean_inc(v_children_4433_);
lean_inc(v_key_4432_);
lean_dec(v_x_4431_);
v___x_4436_ = lean_box(0);
v_isShared_4437_ = v_isSharedCheck_4442_;
goto v_resetjp_4435_;
}
v_resetjp_4435_:
{
lean_object* v___x_4438_; lean_object* v___x_4440_; 
v___x_4438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4438_, 0, v_e_4430_);
if (v_isShared_4437_ == 0)
{
lean_ctor_set(v___x_4436_, 1, v___x_4438_);
v___x_4440_ = v___x_4436_;
goto v_reusejp_4439_;
}
else
{
lean_object* v_reuseFailAlloc_4441_; 
v_reuseFailAlloc_4441_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4441_, 0, v_key_4432_);
lean_ctor_set(v_reuseFailAlloc_4441_, 1, v___x_4438_);
lean_ctor_set(v_reuseFailAlloc_4441_, 2, v_children_4433_);
lean_ctor_set(v_reuseFailAlloc_4441_, 3, v_childIndex_4434_);
v___x_4440_ = v_reuseFailAlloc_4441_;
goto v_reusejp_4439_;
}
v_reusejp_4439_:
{
return v___x_4440_;
}
}
}
else
{
lean_dec_ref(v_e_4430_);
return v_x_4431_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_setEntry___redArg(lean_object* v_t_4444_, lean_object* v_n_4445_, lean_object* v_e_4446_){
_start:
{
lean_object* v___f_4447_; lean_object* v___x_4448_; 
v___f_4447_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_setEntry___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4447_, 0, v_e_4446_);
v___x_4448_ = l_Lean_ImportedConsts_modifyAt___redArg(v_t_4444_, v_n_4445_, v___f_4447_);
return v___x_4448_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_setEntry(lean_object* v_00_u03b1_4449_, lean_object* v_t_4450_, lean_object* v_n_4451_, lean_object* v_e_4452_){
_start:
{
lean_object* v___x_4453_; 
v___x_4453_ = l_Lean_ImportedConsts_setEntry___redArg(v_t_4450_, v_n_4451_, v_e_4452_);
return v___x_4453_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__1(lean_object* v_children_4454_, lean_object* v_toApplicative_4455_, lean_object* v_inst_4456_, lean_object* v___f_4457_, lean_object* v_____r_4458_, lean_object* v_s_4459_){
_start:
{
lean_object* v___x_4460_; lean_object* v___x_4461_; uint8_t v___x_4462_; 
v___x_4460_ = lean_unsigned_to_nat(0u);
v___x_4461_ = lean_array_get_size(v_children_4454_);
v___x_4462_ = lean_nat_dec_lt(v___x_4460_, v___x_4461_);
if (v___x_4462_ == 0)
{
lean_object* v_toPure_4463_; lean_object* v___x_4464_; 
lean_dec(v___f_4457_);
lean_dec_ref(v_inst_4456_);
lean_dec_ref(v_children_4454_);
v_toPure_4463_ = lean_ctor_get(v_toApplicative_4455_, 1);
lean_inc(v_toPure_4463_);
lean_dec_ref(v_toApplicative_4455_);
v___x_4464_ = lean_apply_2(v_toPure_4463_, lean_box(0), v_s_4459_);
return v___x_4464_;
}
else
{
uint8_t v___x_4465_; 
v___x_4465_ = lean_nat_dec_le(v___x_4461_, v___x_4461_);
if (v___x_4465_ == 0)
{
if (v___x_4462_ == 0)
{
lean_object* v_toPure_4466_; lean_object* v___x_4467_; 
lean_dec(v___f_4457_);
lean_dec_ref(v_inst_4456_);
lean_dec_ref(v_children_4454_);
v_toPure_4466_ = lean_ctor_get(v_toApplicative_4455_, 1);
lean_inc(v_toPure_4466_);
lean_dec_ref(v_toApplicative_4455_);
v___x_4467_ = lean_apply_2(v_toPure_4466_, lean_box(0), v_s_4459_);
return v___x_4467_;
}
else
{
size_t v___x_4468_; size_t v___x_4469_; lean_object* v___x_4470_; 
lean_dec_ref(v_toApplicative_4455_);
v___x_4468_ = ((size_t)0ULL);
v___x_4469_ = lean_usize_of_nat(v___x_4461_);
v___x_4470_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_4456_, v___f_4457_, v_children_4454_, v___x_4468_, v___x_4469_, v_s_4459_);
return v___x_4470_;
}
}
else
{
size_t v___x_4471_; size_t v___x_4472_; lean_object* v___x_4473_; 
lean_dec_ref(v_toApplicative_4455_);
v___x_4471_ = ((size_t)0ULL);
v___x_4472_ = lean_usize_of_nat(v___x_4461_);
v___x_4473_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_4456_, v___f_4457_, v_children_4454_, v___x_4471_, v___x_4472_, v_s_4459_);
return v___x_4473_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__4(lean_object* v_expanded_4474_, lean_object* v_toApplicative_4475_, lean_object* v_inst_4476_, lean_object* v___f_4477_, lean_object* v_____r_4478_, lean_object* v_s_4479_){
_start:
{
lean_object* v___x_4480_; lean_object* v_fst_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; uint8_t v___x_4484_; 
v___x_4480_ = lean_thunk_get_own(v_expanded_4474_);
v_fst_4481_ = lean_ctor_get(v___x_4480_, 0);
lean_inc(v_fst_4481_);
lean_dec(v___x_4480_);
v___x_4482_ = lean_unsigned_to_nat(0u);
v___x_4483_ = lean_array_get_size(v_fst_4481_);
v___x_4484_ = lean_nat_dec_lt(v___x_4482_, v___x_4483_);
if (v___x_4484_ == 0)
{
lean_object* v_toPure_4485_; lean_object* v___x_4486_; 
lean_dec(v_fst_4481_);
lean_dec(v___f_4477_);
lean_dec_ref(v_inst_4476_);
v_toPure_4485_ = lean_ctor_get(v_toApplicative_4475_, 1);
lean_inc(v_toPure_4485_);
lean_dec_ref(v_toApplicative_4475_);
v___x_4486_ = lean_apply_2(v_toPure_4485_, lean_box(0), v_s_4479_);
return v___x_4486_;
}
else
{
uint8_t v___x_4487_; 
v___x_4487_ = lean_nat_dec_le(v___x_4483_, v___x_4483_);
if (v___x_4487_ == 0)
{
if (v___x_4484_ == 0)
{
lean_object* v_toPure_4488_; lean_object* v___x_4489_; 
lean_dec(v_fst_4481_);
lean_dec(v___f_4477_);
lean_dec_ref(v_inst_4476_);
v_toPure_4488_ = lean_ctor_get(v_toApplicative_4475_, 1);
lean_inc(v_toPure_4488_);
lean_dec_ref(v_toApplicative_4475_);
v___x_4489_ = lean_apply_2(v_toPure_4488_, lean_box(0), v_s_4479_);
return v___x_4489_;
}
else
{
size_t v___x_4490_; size_t v___x_4491_; lean_object* v___x_4492_; 
lean_dec_ref(v_toApplicative_4475_);
v___x_4490_ = ((size_t)0ULL);
v___x_4491_ = lean_usize_of_nat(v___x_4483_);
v___x_4492_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_4476_, v___f_4477_, v_fst_4481_, v___x_4490_, v___x_4491_, v_s_4479_);
return v___x_4492_;
}
}
else
{
size_t v___x_4493_; size_t v___x_4494_; lean_object* v___x_4495_; 
lean_dec_ref(v_toApplicative_4475_);
v___x_4493_ = ((size_t)0ULL);
v___x_4494_ = lean_usize_of_nat(v___x_4483_);
v___x_4495_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_4476_, v___f_4477_, v_fst_4481_, v___x_4493_, v___x_4494_, v_s_4479_);
return v___x_4495_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__4___boxed(lean_object* v_expanded_4496_, lean_object* v_toApplicative_4497_, lean_object* v_inst_4498_, lean_object* v___f_4499_, lean_object* v_____r_4500_, lean_object* v_s_4501_){
_start:
{
lean_object* v_res_4502_; 
v_res_4502_ = l_Lean_ImportedConsts_foldlM___redArg___lam__4(v_expanded_4496_, v_toApplicative_4497_, v_inst_4498_, v___f_4499_, v_____r_4500_, v_s_4501_);
lean_dec_ref(v_expanded_4496_);
return v_res_4502_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg(lean_object* v_inst_4503_, lean_object* v_t_4504_, lean_object* v_f_4505_, lean_object* v_init_4506_){
_start:
{
switch(lean_obj_tag(v_t_4504_))
{
case 0:
{
lean_object* v_tree_4507_; lean_object* v___x_4508_; 
v_tree_4507_ = lean_ctor_get(v_t_4504_, 1);
lean_inc_ref(v_tree_4507_);
lean_dec_ref_known(v_t_4504_, 2);
v___x_4508_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_4503_, v_tree_4507_, v_f_4505_, v_init_4506_);
return v___x_4508_;
}
case 1:
{
lean_object* v_toApplicative_4509_; lean_object* v_toBind_4510_; lean_object* v_key_4511_; lean_object* v_entry_x3f_4512_; lean_object* v_children_4513_; lean_object* v___f_4514_; lean_object* v___f_4515_; 
v_toApplicative_4509_ = lean_ctor_get(v_inst_4503_, 0);
lean_inc_ref_n(v_toApplicative_4509_, 2);
v_toBind_4510_ = lean_ctor_get(v_inst_4503_, 1);
v_key_4511_ = lean_ctor_get(v_t_4504_, 0);
lean_inc(v_key_4511_);
v_entry_x3f_4512_ = lean_ctor_get(v_t_4504_, 1);
lean_inc(v_entry_x3f_4512_);
v_children_4513_ = lean_ctor_get(v_t_4504_, 2);
lean_inc_ref_n(v_children_4513_, 2);
lean_dec_ref_known(v_t_4504_, 4);
lean_inc(v_f_4505_);
lean_inc_ref_n(v_inst_4503_, 2);
v___f_4514_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_4514_, 0, v_inst_4503_);
lean_closure_set(v___f_4514_, 1, v_f_4505_);
lean_inc_ref(v___f_4514_);
v___f_4515_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__1), 6, 4);
lean_closure_set(v___f_4515_, 0, v_children_4513_);
lean_closure_set(v___f_4515_, 1, v_toApplicative_4509_);
lean_closure_set(v___f_4515_, 2, v_inst_4503_);
lean_closure_set(v___f_4515_, 3, v___f_4514_);
if (lean_obj_tag(v_entry_x3f_4512_) == 1)
{
lean_object* v_val_4516_; lean_object* v_fst_4517_; lean_object* v___f_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; 
lean_inc(v_toBind_4510_);
lean_dec_ref(v___f_4514_);
lean_dec_ref(v_children_4513_);
lean_dec_ref(v_toApplicative_4509_);
lean_dec_ref(v_inst_4503_);
v_val_4516_ = lean_ctor_get(v_entry_x3f_4512_, 0);
lean_inc(v_val_4516_);
lean_dec_ref_known(v_entry_x3f_4512_, 1);
v_fst_4517_ = lean_ctor_get(v_val_4516_, 0);
lean_inc(v_fst_4517_);
lean_dec(v_val_4516_);
v___f_4518_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4518_, 0, v___f_4515_);
v___x_4519_ = lean_apply_3(v_f_4505_, v_init_4506_, v_key_4511_, v_fst_4517_);
v___x_4520_ = lean_apply_4(v_toBind_4510_, lean_box(0), lean_box(0), v___x_4519_, v___f_4518_);
return v___x_4520_;
}
else
{
lean_object* v___x_4521_; lean_object* v___x_4522_; 
lean_dec_ref(v___f_4515_);
lean_dec(v_entry_x3f_4512_);
lean_dec(v_key_4511_);
lean_dec(v_f_4505_);
v___x_4521_ = lean_box(0);
v___x_4522_ = l_Lean_ImportedConsts_foldlM___redArg___lam__1(v_children_4513_, v_toApplicative_4509_, v_inst_4503_, v___f_4514_, v___x_4521_, v_init_4506_);
return v___x_4522_;
}
}
default: 
{
lean_object* v_toApplicative_4523_; lean_object* v_toBind_4524_; lean_object* v_key_4525_; lean_object* v_entry_4526_; lean_object* v_expanded_4527_; lean_object* v___f_4528_; lean_object* v___f_4529_; lean_object* v___x_4530_; 
v_toApplicative_4523_ = lean_ctor_get(v_inst_4503_, 0);
lean_inc_ref_n(v_toApplicative_4523_, 2);
v_toBind_4524_ = lean_ctor_get(v_inst_4503_, 1);
v_key_4525_ = lean_ctor_get(v_t_4504_, 0);
lean_inc(v_key_4525_);
v_entry_4526_ = lean_ctor_get(v_t_4504_, 1);
lean_inc_ref(v_entry_4526_);
v_expanded_4527_ = lean_ctor_get(v_t_4504_, 2);
lean_inc_ref_n(v_expanded_4527_, 2);
lean_dec_ref_known(v_t_4504_, 3);
lean_inc(v_f_4505_);
lean_inc_ref_n(v_inst_4503_, 2);
v___f_4528_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_4528_, 0, v_inst_4503_);
lean_closure_set(v___f_4528_, 1, v_f_4505_);
lean_inc_ref(v___f_4528_);
v___f_4529_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_4529_, 0, v_expanded_4527_);
lean_closure_set(v___f_4529_, 1, v_toApplicative_4523_);
lean_closure_set(v___f_4529_, 2, v_inst_4503_);
lean_closure_set(v___f_4529_, 3, v___f_4528_);
v___x_4530_ = lean_thunk_get_own(v_entry_4526_);
lean_dec_ref(v_entry_4526_);
if (lean_obj_tag(v___x_4530_) == 1)
{
lean_object* v_val_4531_; lean_object* v_fst_4532_; lean_object* v___f_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; 
lean_inc(v_toBind_4524_);
lean_dec_ref(v___f_4528_);
lean_dec_ref(v_expanded_4527_);
lean_dec_ref(v_toApplicative_4523_);
lean_dec_ref(v_inst_4503_);
v_val_4531_ = lean_ctor_get(v___x_4530_, 0);
lean_inc(v_val_4531_);
lean_dec_ref_known(v___x_4530_, 1);
v_fst_4532_ = lean_ctor_get(v_val_4531_, 0);
lean_inc(v_fst_4532_);
lean_dec(v_val_4531_);
v___f_4533_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4533_, 0, v___f_4529_);
v___x_4534_ = lean_apply_3(v_f_4505_, v_init_4506_, v_key_4525_, v_fst_4532_);
v___x_4535_ = lean_apply_4(v_toBind_4524_, lean_box(0), lean_box(0), v___x_4534_, v___f_4533_);
return v___x_4535_;
}
else
{
lean_object* v___x_4536_; lean_object* v___x_4537_; 
lean_dec(v___x_4530_);
lean_dec_ref(v___f_4529_);
lean_dec(v_key_4525_);
lean_dec(v_f_4505_);
v___x_4536_ = lean_box(0);
v___x_4537_ = l_Lean_ImportedConsts_foldlM___redArg___lam__4(v_expanded_4527_, v_toApplicative_4523_, v_inst_4503_, v___f_4528_, v___x_4536_, v_init_4506_);
lean_dec_ref(v_expanded_4527_);
return v___x_4537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__0(lean_object* v_inst_4538_, lean_object* v_f_4539_, lean_object* v_s_4540_, lean_object* v_c_4541_){
_start:
{
lean_object* v___x_4542_; 
v___x_4542_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4538_, v_c_4541_, v_f_4539_, v_s_4540_);
return v___x_4542_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM(lean_object* v_m_4543_, lean_object* v_00_u03b1_4544_, lean_object* v_00_u03c3_4545_, lean_object* v_inst_4546_, lean_object* v_t_4547_, lean_object* v_f_4548_, lean_object* v_init_4549_){
_start:
{
lean_object* v___x_4550_; 
v___x_4550_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4546_, v_t_4547_, v_f_4548_, v_init_4549_);
return v___x_4550_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(lean_object* v_t_4551_, lean_object* v_f_4552_, lean_object* v_init_4553_){
_start:
{
lean_object* v_key_4554_; lean_object* v_val_x3f_4555_; lean_object* v_children_4556_; lean_object* v_s_4558_; 
v_key_4554_ = lean_ctor_get(v_t_4551_, 0);
lean_inc(v_key_4554_);
v_val_x3f_4555_ = lean_ctor_get(v_t_4551_, 1);
lean_inc(v_val_x3f_4555_);
v_children_4556_ = lean_ctor_get(v_t_4551_, 2);
lean_inc_ref(v_children_4556_);
lean_dec_ref(v_t_4551_);
if (lean_obj_tag(v_val_x3f_4555_) == 1)
{
lean_object* v_val_4569_; lean_object* v___x_4570_; 
v_val_4569_ = lean_ctor_get(v_val_x3f_4555_, 0);
lean_inc(v_val_4569_);
lean_dec_ref_known(v_val_x3f_4555_, 1);
lean_inc(v_f_4552_);
v___x_4570_ = lean_apply_3(v_f_4552_, v_init_4553_, v_key_4554_, v_val_4569_);
v_s_4558_ = v___x_4570_;
goto v___jp_4557_;
}
else
{
lean_dec(v_val_x3f_4555_);
lean_dec(v_key_4554_);
v_s_4558_ = v_init_4553_;
goto v___jp_4557_;
}
v___jp_4557_:
{
lean_object* v___x_4559_; lean_object* v___x_4560_; uint8_t v___x_4561_; 
v___x_4559_ = lean_unsigned_to_nat(0u);
v___x_4560_ = lean_array_get_size(v_children_4556_);
v___x_4561_ = lean_nat_dec_lt(v___x_4559_, v___x_4560_);
if (v___x_4561_ == 0)
{
lean_dec_ref(v_children_4556_);
lean_dec(v_f_4552_);
return v_s_4558_;
}
else
{
uint8_t v___x_4562_; 
v___x_4562_ = lean_nat_dec_le(v___x_4560_, v___x_4560_);
if (v___x_4562_ == 0)
{
if (v___x_4561_ == 0)
{
lean_dec_ref(v_children_4556_);
lean_dec(v_f_4552_);
return v_s_4558_;
}
else
{
size_t v___x_4563_; size_t v___x_4564_; lean_object* v___x_4565_; 
v___x_4563_ = ((size_t)0ULL);
v___x_4564_ = lean_usize_of_nat(v___x_4560_);
v___x_4565_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_f_4552_, v_children_4556_, v___x_4563_, v___x_4564_, v_s_4558_);
lean_dec_ref(v_children_4556_);
return v___x_4565_;
}
}
else
{
size_t v___x_4566_; size_t v___x_4567_; lean_object* v___x_4568_; 
v___x_4566_ = ((size_t)0ULL);
v___x_4567_ = lean_usize_of_nat(v___x_4560_);
v___x_4568_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_f_4552_, v_children_4556_, v___x_4566_, v___x_4567_, v_s_4558_);
lean_dec_ref(v_children_4556_);
return v___x_4568_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(lean_object* v_f_4571_, lean_object* v_as_4572_, size_t v_i_4573_, size_t v_stop_4574_, lean_object* v_b_4575_){
_start:
{
uint8_t v___x_4576_; 
v___x_4576_ = lean_usize_dec_eq(v_i_4573_, v_stop_4574_);
if (v___x_4576_ == 0)
{
lean_object* v___x_4577_; lean_object* v___x_4578_; size_t v___x_4579_; size_t v___x_4580_; 
v___x_4577_ = lean_array_uget_borrowed(v_as_4572_, v_i_4573_);
lean_inc(v_f_4571_);
lean_inc(v___x_4577_);
v___x_4578_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v___x_4577_, v_f_4571_, v_b_4575_);
v___x_4579_ = ((size_t)1ULL);
v___x_4580_ = lean_usize_add(v_i_4573_, v___x_4579_);
v_i_4573_ = v___x_4580_;
v_b_4575_ = v___x_4578_;
goto _start;
}
else
{
lean_dec(v_f_4571_);
return v_b_4575_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_4582_, lean_object* v_as_4583_, lean_object* v_i_4584_, lean_object* v_stop_4585_, lean_object* v_b_4586_){
_start:
{
size_t v_i_boxed_4587_; size_t v_stop_boxed_4588_; lean_object* v_res_4589_; 
v_i_boxed_4587_ = lean_unbox_usize(v_i_4584_);
lean_dec(v_i_4584_);
v_stop_boxed_4588_ = lean_unbox_usize(v_stop_4585_);
lean_dec(v_stop_4585_);
v_res_4589_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_f_4582_, v_as_4583_, v_i_boxed_4587_, v_stop_boxed_4588_, v_b_4586_);
lean_dec_ref(v_as_4583_);
return v_res_4589_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(lean_object* v_t_4590_, lean_object* v_f_4591_, lean_object* v_init_4592_){
_start:
{
switch(lean_obj_tag(v_t_4590_))
{
case 0:
{
lean_object* v_tree_4593_; lean_object* v___x_4594_; 
v_tree_4593_ = lean_ctor_get(v_t_4590_, 1);
lean_inc_ref(v_tree_4593_);
lean_dec_ref_known(v_t_4590_, 2);
v___x_4594_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_tree_4593_, v_f_4591_, v_init_4592_);
return v___x_4594_;
}
case 1:
{
lean_object* v_key_4595_; lean_object* v_entry_x3f_4596_; lean_object* v_children_4597_; lean_object* v_s_4599_; 
v_key_4595_ = lean_ctor_get(v_t_4590_, 0);
lean_inc(v_key_4595_);
v_entry_x3f_4596_ = lean_ctor_get(v_t_4590_, 1);
lean_inc(v_entry_x3f_4596_);
v_children_4597_ = lean_ctor_get(v_t_4590_, 2);
lean_inc_ref(v_children_4597_);
lean_dec_ref_known(v_t_4590_, 4);
if (lean_obj_tag(v_entry_x3f_4596_) == 1)
{
lean_object* v_val_4610_; lean_object* v_fst_4611_; lean_object* v___x_4612_; 
v_val_4610_ = lean_ctor_get(v_entry_x3f_4596_, 0);
lean_inc(v_val_4610_);
lean_dec_ref_known(v_entry_x3f_4596_, 1);
v_fst_4611_ = lean_ctor_get(v_val_4610_, 0);
lean_inc(v_fst_4611_);
lean_dec(v_val_4610_);
lean_inc(v_f_4591_);
v___x_4612_ = lean_apply_3(v_f_4591_, v_init_4592_, v_key_4595_, v_fst_4611_);
v_s_4599_ = v___x_4612_;
goto v___jp_4598_;
}
else
{
lean_dec(v_entry_x3f_4596_);
lean_dec(v_key_4595_);
v_s_4599_ = v_init_4592_;
goto v___jp_4598_;
}
v___jp_4598_:
{
lean_object* v___x_4600_; lean_object* v___x_4601_; uint8_t v___x_4602_; 
v___x_4600_ = lean_unsigned_to_nat(0u);
v___x_4601_ = lean_array_get_size(v_children_4597_);
v___x_4602_ = lean_nat_dec_lt(v___x_4600_, v___x_4601_);
if (v___x_4602_ == 0)
{
lean_dec_ref(v_children_4597_);
lean_dec(v_f_4591_);
return v_s_4599_;
}
else
{
uint8_t v___x_4603_; 
v___x_4603_ = lean_nat_dec_le(v___x_4601_, v___x_4601_);
if (v___x_4603_ == 0)
{
if (v___x_4602_ == 0)
{
lean_dec_ref(v_children_4597_);
lean_dec(v_f_4591_);
return v_s_4599_;
}
else
{
size_t v___x_4604_; size_t v___x_4605_; lean_object* v___x_4606_; 
v___x_4604_ = ((size_t)0ULL);
v___x_4605_ = lean_usize_of_nat(v___x_4601_);
v___x_4606_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4591_, v_children_4597_, v___x_4604_, v___x_4605_, v_s_4599_);
lean_dec_ref(v_children_4597_);
return v___x_4606_;
}
}
else
{
size_t v___x_4607_; size_t v___x_4608_; lean_object* v___x_4609_; 
v___x_4607_ = ((size_t)0ULL);
v___x_4608_ = lean_usize_of_nat(v___x_4601_);
v___x_4609_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4591_, v_children_4597_, v___x_4607_, v___x_4608_, v_s_4599_);
lean_dec_ref(v_children_4597_);
return v___x_4609_;
}
}
}
}
default: 
{
lean_object* v_key_4613_; lean_object* v_entry_4614_; lean_object* v_expanded_4615_; lean_object* v_s_4617_; lean_object* v___x_4630_; 
v_key_4613_ = lean_ctor_get(v_t_4590_, 0);
lean_inc(v_key_4613_);
v_entry_4614_ = lean_ctor_get(v_t_4590_, 1);
lean_inc_ref(v_entry_4614_);
v_expanded_4615_ = lean_ctor_get(v_t_4590_, 2);
lean_inc_ref(v_expanded_4615_);
lean_dec_ref_known(v_t_4590_, 3);
v___x_4630_ = lean_thunk_get_own(v_entry_4614_);
lean_dec_ref(v_entry_4614_);
if (lean_obj_tag(v___x_4630_) == 1)
{
lean_object* v_val_4631_; lean_object* v_fst_4632_; lean_object* v___x_4633_; 
v_val_4631_ = lean_ctor_get(v___x_4630_, 0);
lean_inc(v_val_4631_);
lean_dec_ref_known(v___x_4630_, 1);
v_fst_4632_ = lean_ctor_get(v_val_4631_, 0);
lean_inc(v_fst_4632_);
lean_dec(v_val_4631_);
lean_inc(v_f_4591_);
v___x_4633_ = lean_apply_3(v_f_4591_, v_init_4592_, v_key_4613_, v_fst_4632_);
v_s_4617_ = v___x_4633_;
goto v___jp_4616_;
}
else
{
lean_dec(v___x_4630_);
lean_dec(v_key_4613_);
v_s_4617_ = v_init_4592_;
goto v___jp_4616_;
}
v___jp_4616_:
{
lean_object* v___x_4618_; lean_object* v_fst_4619_; lean_object* v___x_4620_; lean_object* v___x_4621_; uint8_t v___x_4622_; 
v___x_4618_ = lean_thunk_get_own(v_expanded_4615_);
lean_dec_ref(v_expanded_4615_);
v_fst_4619_ = lean_ctor_get(v___x_4618_, 0);
lean_inc(v_fst_4619_);
lean_dec(v___x_4618_);
v___x_4620_ = lean_unsigned_to_nat(0u);
v___x_4621_ = lean_array_get_size(v_fst_4619_);
v___x_4622_ = lean_nat_dec_lt(v___x_4620_, v___x_4621_);
if (v___x_4622_ == 0)
{
lean_dec(v_fst_4619_);
lean_dec(v_f_4591_);
return v_s_4617_;
}
else
{
uint8_t v___x_4623_; 
v___x_4623_ = lean_nat_dec_le(v___x_4621_, v___x_4621_);
if (v___x_4623_ == 0)
{
if (v___x_4622_ == 0)
{
lean_dec(v_fst_4619_);
lean_dec(v_f_4591_);
return v_s_4617_;
}
else
{
size_t v___x_4624_; size_t v___x_4625_; lean_object* v___x_4626_; 
v___x_4624_ = ((size_t)0ULL);
v___x_4625_ = lean_usize_of_nat(v___x_4621_);
v___x_4626_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4591_, v_fst_4619_, v___x_4624_, v___x_4625_, v_s_4617_);
lean_dec(v_fst_4619_);
return v___x_4626_;
}
}
else
{
size_t v___x_4627_; size_t v___x_4628_; lean_object* v___x_4629_; 
v___x_4627_ = ((size_t)0ULL);
v___x_4628_ = lean_usize_of_nat(v___x_4621_);
v___x_4629_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4591_, v_fst_4619_, v___x_4627_, v___x_4628_, v_s_4617_);
lean_dec(v_fst_4619_);
return v___x_4629_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(lean_object* v_f_4634_, lean_object* v_as_4635_, size_t v_i_4636_, size_t v_stop_4637_, lean_object* v_b_4638_){
_start:
{
uint8_t v___x_4639_; 
v___x_4639_ = lean_usize_dec_eq(v_i_4636_, v_stop_4637_);
if (v___x_4639_ == 0)
{
lean_object* v___x_4640_; lean_object* v___x_4641_; size_t v___x_4642_; size_t v___x_4643_; 
v___x_4640_ = lean_array_uget_borrowed(v_as_4635_, v_i_4636_);
lean_inc(v_f_4634_);
lean_inc(v___x_4640_);
v___x_4641_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v___x_4640_, v_f_4634_, v_b_4638_);
v___x_4642_ = ((size_t)1ULL);
v___x_4643_ = lean_usize_add(v_i_4636_, v___x_4642_);
v_i_4636_ = v___x_4643_;
v_b_4638_ = v___x_4641_;
goto _start;
}
else
{
lean_dec(v_f_4634_);
return v_b_4638_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg___boxed(lean_object* v_f_4645_, lean_object* v_as_4646_, lean_object* v_i_4647_, lean_object* v_stop_4648_, lean_object* v_b_4649_){
_start:
{
size_t v_i_boxed_4650_; size_t v_stop_boxed_4651_; lean_object* v_res_4652_; 
v_i_boxed_4650_ = lean_unbox_usize(v_i_4647_);
lean_dec(v_i_4647_);
v_stop_boxed_4651_ = lean_unbox_usize(v_stop_4648_);
lean_dec(v_stop_4648_);
v_res_4652_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4645_, v_as_4646_, v_i_boxed_4650_, v_stop_boxed_4651_, v_b_4649_);
lean_dec_ref(v_as_4646_);
return v_res_4652_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl___redArg(lean_object* v_t_4653_, lean_object* v_f_4654_, lean_object* v_init_4655_){
_start:
{
lean_object* v___x_4656_; 
v___x_4656_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4653_, v_f_4654_, v_init_4655_);
return v___x_4656_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl(lean_object* v_00_u03b1_4657_, lean_object* v_00_u03c3_4658_, lean_object* v_t_4659_, lean_object* v_f_4660_, lean_object* v_init_4661_){
_start:
{
lean_object* v___x_4662_; 
v___x_4662_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4659_, v_f_4660_, v_init_4661_);
return v___x_4662_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0(lean_object* v_00_u03b1_4663_, lean_object* v_00_u03c3_4664_, lean_object* v_t_4665_, lean_object* v_f_4666_, lean_object* v_init_4667_){
_start:
{
lean_object* v___x_4668_; 
v___x_4668_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4665_, v_f_4666_, v_init_4667_);
return v___x_4668_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0(lean_object* v_00_u03b1_4669_, lean_object* v_00_u03c3_4670_, lean_object* v_t_4671_, lean_object* v_f_4672_, lean_object* v_init_4673_){
_start:
{
lean_object* v___x_4674_; 
v___x_4674_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_t_4671_, v_f_4672_, v_init_4673_);
return v___x_4674_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1(lean_object* v_00_u03b1_4675_, lean_object* v_00_u03c3_4676_, lean_object* v_f_4677_, lean_object* v_as_4678_, size_t v_i_4679_, size_t v_stop_4680_, lean_object* v_b_4681_){
_start:
{
lean_object* v___x_4682_; 
v___x_4682_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4677_, v_as_4678_, v_i_4679_, v_stop_4680_, v_b_4681_);
return v___x_4682_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4683_, lean_object* v_00_u03c3_4684_, lean_object* v_f_4685_, lean_object* v_as_4686_, lean_object* v_i_4687_, lean_object* v_stop_4688_, lean_object* v_b_4689_){
_start:
{
size_t v_i_boxed_4690_; size_t v_stop_boxed_4691_; lean_object* v_res_4692_; 
v_i_boxed_4690_ = lean_unbox_usize(v_i_4687_);
lean_dec(v_i_4687_);
v_stop_boxed_4691_ = lean_unbox_usize(v_stop_4688_);
lean_dec(v_stop_4688_);
v_res_4692_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1(v_00_u03b1_4683_, v_00_u03c3_4684_, v_f_4685_, v_as_4686_, v_i_boxed_4690_, v_stop_boxed_4691_, v_b_4689_);
lean_dec_ref(v_as_4686_);
return v_res_4692_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_4693_, lean_object* v_00_u03c3_4694_, lean_object* v_f_4695_, lean_object* v_as_4696_, size_t v_i_4697_, size_t v_stop_4698_, lean_object* v_b_4699_){
_start:
{
lean_object* v___x_4700_; 
v___x_4700_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_f_4695_, v_as_4696_, v_i_4697_, v_stop_4698_, v_b_4699_);
return v___x_4700_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4701_, lean_object* v_00_u03c3_4702_, lean_object* v_f_4703_, lean_object* v_as_4704_, lean_object* v_i_4705_, lean_object* v_stop_4706_, lean_object* v_b_4707_){
_start:
{
size_t v_i_boxed_4708_; size_t v_stop_boxed_4709_; lean_object* v_res_4710_; 
v_i_boxed_4708_ = lean_unbox_usize(v_i_4705_);
lean_dec(v_i_4705_);
v_stop_boxed_4709_ = lean_unbox_usize(v_stop_4706_);
lean_dec(v_stop_4706_);
v_res_4710_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1(v_00_u03b1_4701_, v_00_u03c3_4702_, v_f_4703_, v_as_4704_, v_i_boxed_4708_, v_stop_boxed_4709_, v_b_4707_);
lean_dec_ref(v_as_4704_);
return v_res_4710_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__0(lean_object* v_modIdx_4711_, lean_object* v_f_4712_, lean_object* v_s_4713_, lean_object* v_n_4714_, lean_object* v_v_4715_){
_start:
{
lean_object* v___x_4716_; lean_object* v___x_4717_; 
v___x_4716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4716_, 0, v_v_4715_);
lean_ctor_set(v___x_4716_, 1, v_modIdx_4711_);
v___x_4717_ = lean_apply_3(v_f_4712_, v_s_4713_, v_n_4714_, v___x_4716_);
return v___x_4717_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg(lean_object* v_inst_4718_, lean_object* v_t_4719_, lean_object* v_f_4720_, lean_object* v_init_4721_){
_start:
{
switch(lean_obj_tag(v_t_4719_))
{
case 0:
{
lean_object* v_modIdx_4722_; lean_object* v_tree_4723_; lean_object* v___f_4724_; lean_object* v___x_4725_; 
v_modIdx_4722_ = lean_ctor_get(v_t_4719_, 0);
lean_inc(v_modIdx_4722_);
v_tree_4723_ = lean_ctor_get(v_t_4719_, 1);
lean_inc_ref(v_tree_4723_);
lean_dec_ref_known(v_t_4719_, 2);
v___f_4724_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__0), 5, 2);
lean_closure_set(v___f_4724_, 0, v_modIdx_4722_);
lean_closure_set(v___f_4724_, 1, v_f_4720_);
v___x_4725_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_4718_, v_tree_4723_, v___f_4724_, v_init_4721_);
return v___x_4725_;
}
case 1:
{
lean_object* v_toApplicative_4726_; lean_object* v_toBind_4727_; lean_object* v_key_4728_; lean_object* v_entry_x3f_4729_; lean_object* v_children_4730_; lean_object* v___f_4731_; lean_object* v___f_4732_; 
v_toApplicative_4726_ = lean_ctor_get(v_inst_4718_, 0);
lean_inc_ref_n(v_toApplicative_4726_, 2);
v_toBind_4727_ = lean_ctor_get(v_inst_4718_, 1);
v_key_4728_ = lean_ctor_get(v_t_4719_, 0);
lean_inc(v_key_4728_);
v_entry_x3f_4729_ = lean_ctor_get(v_t_4719_, 1);
lean_inc(v_entry_x3f_4729_);
v_children_4730_ = lean_ctor_get(v_t_4719_, 2);
lean_inc_ref_n(v_children_4730_, 2);
lean_dec_ref_known(v_t_4719_, 4);
lean_inc(v_f_4720_);
lean_inc_ref_n(v_inst_4718_, 2);
v___f_4731_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__1), 4, 2);
lean_closure_set(v___f_4731_, 0, v_inst_4718_);
lean_closure_set(v___f_4731_, 1, v_f_4720_);
lean_inc_ref(v___f_4731_);
v___f_4732_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__1), 6, 4);
lean_closure_set(v___f_4732_, 0, v_children_4730_);
lean_closure_set(v___f_4732_, 1, v_toApplicative_4726_);
lean_closure_set(v___f_4732_, 2, v_inst_4718_);
lean_closure_set(v___f_4732_, 3, v___f_4731_);
if (lean_obj_tag(v_entry_x3f_4729_) == 1)
{
lean_object* v_val_4733_; lean_object* v___f_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; 
lean_inc(v_toBind_4727_);
lean_dec_ref(v___f_4731_);
lean_dec_ref(v_children_4730_);
lean_dec_ref(v_toApplicative_4726_);
lean_dec_ref(v_inst_4718_);
v_val_4733_ = lean_ctor_get(v_entry_x3f_4729_, 0);
lean_inc(v_val_4733_);
lean_dec_ref_known(v_entry_x3f_4729_, 1);
v___f_4734_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4734_, 0, v___f_4732_);
v___x_4735_ = lean_apply_3(v_f_4720_, v_init_4721_, v_key_4728_, v_val_4733_);
v___x_4736_ = lean_apply_4(v_toBind_4727_, lean_box(0), lean_box(0), v___x_4735_, v___f_4734_);
return v___x_4736_;
}
else
{
lean_object* v___x_4737_; lean_object* v___x_4738_; 
lean_dec_ref(v___f_4732_);
lean_dec(v_entry_x3f_4729_);
lean_dec(v_key_4728_);
lean_dec(v_f_4720_);
v___x_4737_ = lean_box(0);
v___x_4738_ = l_Lean_ImportedConsts_foldlM___redArg___lam__1(v_children_4730_, v_toApplicative_4726_, v_inst_4718_, v___f_4731_, v___x_4737_, v_init_4721_);
return v___x_4738_;
}
}
default: 
{
lean_object* v_toApplicative_4739_; lean_object* v_toBind_4740_; lean_object* v_key_4741_; lean_object* v_entry_4742_; lean_object* v_expanded_4743_; lean_object* v___f_4744_; lean_object* v___f_4745_; lean_object* v___x_4746_; 
v_toApplicative_4739_ = lean_ctor_get(v_inst_4718_, 0);
lean_inc_ref_n(v_toApplicative_4739_, 2);
v_toBind_4740_ = lean_ctor_get(v_inst_4718_, 1);
v_key_4741_ = lean_ctor_get(v_t_4719_, 0);
lean_inc(v_key_4741_);
v_entry_4742_ = lean_ctor_get(v_t_4719_, 1);
lean_inc_ref(v_entry_4742_);
v_expanded_4743_ = lean_ctor_get(v_t_4719_, 2);
lean_inc_ref_n(v_expanded_4743_, 2);
lean_dec_ref_known(v_t_4719_, 3);
lean_inc(v_f_4720_);
lean_inc_ref_n(v_inst_4718_, 2);
v___f_4744_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__1), 4, 2);
lean_closure_set(v___f_4744_, 0, v_inst_4718_);
lean_closure_set(v___f_4744_, 1, v_f_4720_);
lean_inc_ref(v___f_4744_);
v___f_4745_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_4745_, 0, v_expanded_4743_);
lean_closure_set(v___f_4745_, 1, v_toApplicative_4739_);
lean_closure_set(v___f_4745_, 2, v_inst_4718_);
lean_closure_set(v___f_4745_, 3, v___f_4744_);
v___x_4746_ = lean_thunk_get_own(v_entry_4742_);
lean_dec_ref(v_entry_4742_);
if (lean_obj_tag(v___x_4746_) == 1)
{
lean_object* v_val_4747_; lean_object* v___f_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; 
lean_inc(v_toBind_4740_);
lean_dec_ref(v___f_4744_);
lean_dec_ref(v_expanded_4743_);
lean_dec_ref(v_toApplicative_4739_);
lean_dec_ref(v_inst_4718_);
v_val_4747_ = lean_ctor_get(v___x_4746_, 0);
lean_inc(v_val_4747_);
lean_dec_ref_known(v___x_4746_, 1);
v___f_4748_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4748_, 0, v___f_4745_);
v___x_4749_ = lean_apply_3(v_f_4720_, v_init_4721_, v_key_4741_, v_val_4747_);
v___x_4750_ = lean_apply_4(v_toBind_4740_, lean_box(0), lean_box(0), v___x_4749_, v___f_4748_);
return v___x_4750_;
}
else
{
lean_object* v___x_4751_; lean_object* v___x_4752_; 
lean_dec(v___x_4746_);
lean_dec_ref(v___f_4745_);
lean_dec(v_key_4741_);
lean_dec(v_f_4720_);
v___x_4751_ = lean_box(0);
v___x_4752_ = l_Lean_ImportedConsts_foldlM___redArg___lam__4(v_expanded_4743_, v_toApplicative_4739_, v_inst_4718_, v___f_4744_, v___x_4751_, v_init_4721_);
lean_dec_ref(v_expanded_4743_);
return v___x_4752_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__1(lean_object* v_inst_4753_, lean_object* v_f_4754_, lean_object* v_s_4755_, lean_object* v_c_4756_){
_start:
{
lean_object* v___x_4757_; 
v___x_4757_ = l_Lean_ImportedConsts_foldlEntriesM___redArg(v_inst_4753_, v_c_4756_, v_f_4754_, v_s_4755_);
return v___x_4757_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM(lean_object* v_m_4758_, lean_object* v_00_u03b1_4759_, lean_object* v_00_u03c3_4760_, lean_object* v_inst_4761_, lean_object* v_t_4762_, lean_object* v_f_4763_, lean_object* v_init_4764_){
_start:
{
lean_object* v___x_4765_; 
v___x_4765_ = l_Lean_ImportedConsts_foldlEntriesM___redArg(v_inst_4761_, v_t_4762_, v_f_4763_, v_init_4764_);
return v___x_4765_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg___lam__0(lean_object* v_f_4766_, lean_object* v_x_4767_, lean_object* v_n_4768_, lean_object* v_v_4769_){
_start:
{
lean_object* v___x_4770_; 
v___x_4770_ = lean_apply_2(v_f_4766_, v_n_4768_, v_v_4769_);
return v___x_4770_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg(lean_object* v_inst_4771_, lean_object* v_t_4772_, lean_object* v_f_4773_){
_start:
{
lean_object* v___f_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; 
v___f_4774_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_forM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_4774_, 0, v_f_4773_);
v___x_4775_ = lean_box(0);
v___x_4776_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4771_, v_t_4772_, v___f_4774_, v___x_4775_);
return v___x_4776_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM(lean_object* v_m_4777_, lean_object* v_00_u03b1_4778_, lean_object* v_inst_4779_, lean_object* v_t_4780_, lean_object* v_f_4781_){
_start:
{
lean_object* v___x_4782_; 
v___x_4782_ = l_Lean_ImportedConsts_forM___redArg(v_inst_4779_, v_t_4780_, v_f_4781_);
return v___x_4782_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(lean_object* v_n_4783_, lean_object* v_x_4784_, lean_object* v_x_4785_){
_start:
{
lean_object* v___x_4786_; lean_object* v___x_4787_; 
v___x_4786_ = lean_unsigned_to_nat(1u);
v___x_4787_ = lean_nat_add(v_n_4783_, v___x_4786_);
return v___x_4787_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0___boxed(lean_object* v_n_4788_, lean_object* v_x_4789_, lean_object* v_x_4790_){
_start:
{
lean_object* v_res_4791_; 
v_res_4791_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(v_n_4788_, v_x_4789_, v_x_4790_);
lean_dec(v_x_4790_);
lean_dec(v_x_4789_);
lean_dec(v_n_4788_);
return v_res_4791_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(lean_object* v_t_4792_, lean_object* v_init_4793_){
_start:
{
lean_object* v_val_x3f_4794_; lean_object* v_children_4795_; lean_object* v_s_4797_; 
v_val_x3f_4794_ = lean_ctor_get(v_t_4792_, 1);
v_children_4795_ = lean_ctor_get(v_t_4792_, 2);
if (lean_obj_tag(v_val_x3f_4794_) == 1)
{
lean_object* v___x_4808_; lean_object* v___x_4809_; 
v___x_4808_ = lean_unsigned_to_nat(1u);
v___x_4809_ = lean_nat_add(v_init_4793_, v___x_4808_);
lean_dec(v_init_4793_);
v_s_4797_ = v___x_4809_;
goto v___jp_4796_;
}
else
{
v_s_4797_ = v_init_4793_;
goto v___jp_4796_;
}
v___jp_4796_:
{
lean_object* v___x_4798_; lean_object* v___x_4799_; uint8_t v___x_4800_; 
v___x_4798_ = lean_unsigned_to_nat(0u);
v___x_4799_ = lean_array_get_size(v_children_4795_);
v___x_4800_ = lean_nat_dec_lt(v___x_4798_, v___x_4799_);
if (v___x_4800_ == 0)
{
return v_s_4797_;
}
else
{
uint8_t v___x_4801_; 
v___x_4801_ = lean_nat_dec_le(v___x_4799_, v___x_4799_);
if (v___x_4801_ == 0)
{
if (v___x_4800_ == 0)
{
return v_s_4797_;
}
else
{
size_t v___x_4802_; size_t v___x_4803_; lean_object* v___x_4804_; 
v___x_4802_ = ((size_t)0ULL);
v___x_4803_ = lean_usize_of_nat(v___x_4799_);
v___x_4804_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_children_4795_, v___x_4802_, v___x_4803_, v_s_4797_);
return v___x_4804_;
}
}
else
{
size_t v___x_4805_; size_t v___x_4806_; lean_object* v___x_4807_; 
v___x_4805_ = ((size_t)0ULL);
v___x_4806_ = lean_usize_of_nat(v___x_4799_);
v___x_4807_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_children_4795_, v___x_4805_, v___x_4806_, v_s_4797_);
return v___x_4807_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(lean_object* v_as_4810_, size_t v_i_4811_, size_t v_stop_4812_, lean_object* v_b_4813_){
_start:
{
uint8_t v___x_4814_; 
v___x_4814_ = lean_usize_dec_eq(v_i_4811_, v_stop_4812_);
if (v___x_4814_ == 0)
{
lean_object* v___x_4815_; lean_object* v___x_4816_; size_t v___x_4817_; size_t v___x_4818_; 
v___x_4815_ = lean_array_uget_borrowed(v_as_4810_, v_i_4811_);
v___x_4816_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v___x_4815_, v_b_4813_);
v___x_4817_ = ((size_t)1ULL);
v___x_4818_ = lean_usize_add(v_i_4811_, v___x_4817_);
v_i_4811_ = v___x_4818_;
v_b_4813_ = v___x_4816_;
goto _start;
}
else
{
return v_b_4813_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_4820_, lean_object* v_i_4821_, lean_object* v_stop_4822_, lean_object* v_b_4823_){
_start:
{
size_t v_i_boxed_4824_; size_t v_stop_boxed_4825_; lean_object* v_res_4826_; 
v_i_boxed_4824_ = lean_unbox_usize(v_i_4821_);
lean_dec(v_i_4821_);
v_stop_boxed_4825_ = lean_unbox_usize(v_stop_4822_);
lean_dec(v_stop_4822_);
v_res_4826_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_as_4820_, v_i_boxed_4824_, v_stop_boxed_4825_, v_b_4823_);
lean_dec_ref(v_as_4820_);
return v_res_4826_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___boxed(lean_object* v_t_4827_, lean_object* v_init_4828_){
_start:
{
lean_object* v_res_4829_; 
v_res_4829_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_4827_, v_init_4828_);
lean_dec_ref(v_t_4827_);
return v_res_4829_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(lean_object* v_t_4830_, lean_object* v_init_4831_){
_start:
{
switch(lean_obj_tag(v_t_4830_))
{
case 0:
{
lean_object* v_tree_4832_; lean_object* v___x_4833_; 
v_tree_4832_ = lean_ctor_get(v_t_4830_, 1);
v___x_4833_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_tree_4832_, v_init_4831_);
return v___x_4833_;
}
case 1:
{
lean_object* v_key_4834_; lean_object* v_entry_x3f_4835_; lean_object* v_children_4836_; lean_object* v_s_4838_; 
v_key_4834_ = lean_ctor_get(v_t_4830_, 0);
v_entry_x3f_4835_ = lean_ctor_get(v_t_4830_, 1);
v_children_4836_ = lean_ctor_get(v_t_4830_, 2);
if (lean_obj_tag(v_entry_x3f_4835_) == 1)
{
lean_object* v_val_4849_; lean_object* v_fst_4850_; lean_object* v___x_4851_; 
v_val_4849_ = lean_ctor_get(v_entry_x3f_4835_, 0);
v_fst_4850_ = lean_ctor_get(v_val_4849_, 0);
v___x_4851_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(v_init_4831_, v_key_4834_, v_fst_4850_);
lean_dec(v_init_4831_);
v_s_4838_ = v___x_4851_;
goto v___jp_4837_;
}
else
{
v_s_4838_ = v_init_4831_;
goto v___jp_4837_;
}
v___jp_4837_:
{
lean_object* v___x_4839_; lean_object* v___x_4840_; uint8_t v___x_4841_; 
v___x_4839_ = lean_unsigned_to_nat(0u);
v___x_4840_ = lean_array_get_size(v_children_4836_);
v___x_4841_ = lean_nat_dec_lt(v___x_4839_, v___x_4840_);
if (v___x_4841_ == 0)
{
return v_s_4838_;
}
else
{
uint8_t v___x_4842_; 
v___x_4842_ = lean_nat_dec_le(v___x_4840_, v___x_4840_);
if (v___x_4842_ == 0)
{
if (v___x_4841_ == 0)
{
return v_s_4838_;
}
else
{
size_t v___x_4843_; size_t v___x_4844_; lean_object* v___x_4845_; 
v___x_4843_ = ((size_t)0ULL);
v___x_4844_ = lean_usize_of_nat(v___x_4840_);
v___x_4845_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_children_4836_, v___x_4843_, v___x_4844_, v_s_4838_);
return v___x_4845_;
}
}
else
{
size_t v___x_4846_; size_t v___x_4847_; lean_object* v___x_4848_; 
v___x_4846_ = ((size_t)0ULL);
v___x_4847_ = lean_usize_of_nat(v___x_4840_);
v___x_4848_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_children_4836_, v___x_4846_, v___x_4847_, v_s_4838_);
return v___x_4848_;
}
}
}
}
default: 
{
lean_object* v_key_4852_; lean_object* v_entry_4853_; lean_object* v_expanded_4854_; lean_object* v_s_4856_; lean_object* v___x_4869_; 
v_key_4852_ = lean_ctor_get(v_t_4830_, 0);
v_entry_4853_ = lean_ctor_get(v_t_4830_, 1);
v_expanded_4854_ = lean_ctor_get(v_t_4830_, 2);
v___x_4869_ = lean_thunk_get_own(v_entry_4853_);
if (lean_obj_tag(v___x_4869_) == 1)
{
lean_object* v_val_4870_; lean_object* v_fst_4871_; lean_object* v___x_4872_; 
v_val_4870_ = lean_ctor_get(v___x_4869_, 0);
lean_inc(v_val_4870_);
lean_dec_ref_known(v___x_4869_, 1);
v_fst_4871_ = lean_ctor_get(v_val_4870_, 0);
lean_inc(v_fst_4871_);
lean_dec(v_val_4870_);
v___x_4872_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(v_init_4831_, v_key_4852_, v_fst_4871_);
lean_dec(v_fst_4871_);
lean_dec(v_init_4831_);
v_s_4856_ = v___x_4872_;
goto v___jp_4855_;
}
else
{
lean_dec(v___x_4869_);
v_s_4856_ = v_init_4831_;
goto v___jp_4855_;
}
v___jp_4855_:
{
lean_object* v___x_4857_; lean_object* v_fst_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; uint8_t v___x_4861_; 
v___x_4857_ = lean_thunk_get_own(v_expanded_4854_);
v_fst_4858_ = lean_ctor_get(v___x_4857_, 0);
lean_inc(v_fst_4858_);
lean_dec(v___x_4857_);
v___x_4859_ = lean_unsigned_to_nat(0u);
v___x_4860_ = lean_array_get_size(v_fst_4858_);
v___x_4861_ = lean_nat_dec_lt(v___x_4859_, v___x_4860_);
if (v___x_4861_ == 0)
{
lean_dec(v_fst_4858_);
return v_s_4856_;
}
else
{
uint8_t v___x_4862_; 
v___x_4862_ = lean_nat_dec_le(v___x_4860_, v___x_4860_);
if (v___x_4862_ == 0)
{
if (v___x_4861_ == 0)
{
lean_dec(v_fst_4858_);
return v_s_4856_;
}
else
{
size_t v___x_4863_; size_t v___x_4864_; lean_object* v___x_4865_; 
v___x_4863_ = ((size_t)0ULL);
v___x_4864_ = lean_usize_of_nat(v___x_4860_);
v___x_4865_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_fst_4858_, v___x_4863_, v___x_4864_, v_s_4856_);
lean_dec(v_fst_4858_);
return v___x_4865_;
}
}
else
{
size_t v___x_4866_; size_t v___x_4867_; lean_object* v___x_4868_; 
v___x_4866_ = ((size_t)0ULL);
v___x_4867_ = lean_usize_of_nat(v___x_4860_);
v___x_4868_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_fst_4858_, v___x_4866_, v___x_4867_, v_s_4856_);
lean_dec(v_fst_4858_);
return v___x_4868_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(lean_object* v_as_4873_, size_t v_i_4874_, size_t v_stop_4875_, lean_object* v_b_4876_){
_start:
{
uint8_t v___x_4877_; 
v___x_4877_ = lean_usize_dec_eq(v_i_4874_, v_stop_4875_);
if (v___x_4877_ == 0)
{
lean_object* v___x_4878_; lean_object* v___x_4879_; size_t v___x_4880_; size_t v___x_4881_; 
v___x_4878_ = lean_array_uget_borrowed(v_as_4873_, v_i_4874_);
v___x_4879_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v___x_4878_, v_b_4876_);
v___x_4880_ = ((size_t)1ULL);
v___x_4881_ = lean_usize_add(v_i_4874_, v___x_4880_);
v_i_4874_ = v___x_4881_;
v_b_4876_ = v___x_4879_;
goto _start;
}
else
{
return v_b_4876_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg___boxed(lean_object* v_as_4883_, lean_object* v_i_4884_, lean_object* v_stop_4885_, lean_object* v_b_4886_){
_start:
{
size_t v_i_boxed_4887_; size_t v_stop_boxed_4888_; lean_object* v_res_4889_; 
v_i_boxed_4887_ = lean_unbox_usize(v_i_4884_);
lean_dec(v_i_4884_);
v_stop_boxed_4888_ = lean_unbox_usize(v_stop_4885_);
lean_dec(v_stop_4885_);
v_res_4889_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_as_4883_, v_i_boxed_4887_, v_stop_boxed_4888_, v_b_4886_);
lean_dec_ref(v_as_4883_);
return v_res_4889_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___boxed(lean_object* v_t_4890_, lean_object* v_init_4891_){
_start:
{
lean_object* v_res_4892_; 
v_res_4892_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_4890_, v_init_4891_);
lean_dec_ref(v_t_4890_);
return v_res_4892_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg(lean_object* v_t_4893_){
_start:
{
lean_object* v___x_4894_; lean_object* v___x_4895_; 
v___x_4894_ = lean_unsigned_to_nat(0u);
v___x_4895_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_4893_, v___x_4894_);
return v___x_4895_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg___boxed(lean_object* v_t_4896_){
_start:
{
lean_object* v_res_4897_; 
v_res_4897_ = l_Lean_ImportedConsts_size___redArg(v_t_4896_);
lean_dec_ref(v_t_4896_);
return v_res_4897_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size(lean_object* v_00_u03b1_4898_, lean_object* v_t_4899_){
_start:
{
lean_object* v___x_4900_; 
v___x_4900_ = l_Lean_ImportedConsts_size___redArg(v_t_4899_);
return v___x_4900_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___boxed(lean_object* v_00_u03b1_4901_, lean_object* v_t_4902_){
_start:
{
lean_object* v_res_4903_; 
v_res_4903_ = l_Lean_ImportedConsts_size(v_00_u03b1_4901_, v_t_4902_);
lean_dec_ref(v_t_4902_);
return v_res_4903_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(lean_object* v_00_u03b1_4904_, lean_object* v_t_4905_, lean_object* v_init_4906_){
_start:
{
lean_object* v___x_4907_; 
v___x_4907_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_4905_, v_init_4906_);
return v___x_4907_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___boxed(lean_object* v_00_u03b1_4908_, lean_object* v_t_4909_, lean_object* v_init_4910_){
_start:
{
lean_object* v_res_4911_; 
v_res_4911_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(v_00_u03b1_4908_, v_t_4909_, v_init_4910_);
lean_dec_ref(v_t_4909_);
return v_res_4911_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(lean_object* v_00_u03b1_4912_, lean_object* v_t_4913_, lean_object* v_init_4914_){
_start:
{
lean_object* v___x_4915_; 
v___x_4915_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_4913_, v_init_4914_);
return v___x_4915_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___boxed(lean_object* v_00_u03b1_4916_, lean_object* v_t_4917_, lean_object* v_init_4918_){
_start:
{
lean_object* v_res_4919_; 
v_res_4919_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(v_00_u03b1_4916_, v_t_4917_, v_init_4918_);
lean_dec_ref(v_t_4917_);
return v_res_4919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1(lean_object* v_00_u03b1_4920_, lean_object* v_as_4921_, size_t v_i_4922_, size_t v_stop_4923_, lean_object* v_b_4924_){
_start:
{
lean_object* v___x_4925_; 
v___x_4925_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_as_4921_, v_i_4922_, v_stop_4923_, v_b_4924_);
return v___x_4925_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4926_, lean_object* v_as_4927_, lean_object* v_i_4928_, lean_object* v_stop_4929_, lean_object* v_b_4930_){
_start:
{
size_t v_i_boxed_4931_; size_t v_stop_boxed_4932_; lean_object* v_res_4933_; 
v_i_boxed_4931_ = lean_unbox_usize(v_i_4928_);
lean_dec(v_i_4928_);
v_stop_boxed_4932_ = lean_unbox_usize(v_stop_4929_);
lean_dec(v_stop_4929_);
v_res_4933_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1(v_00_u03b1_4926_, v_as_4927_, v_i_boxed_4931_, v_stop_boxed_4932_, v_b_4930_);
lean_dec_ref(v_as_4927_);
return v_res_4933_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_4934_, lean_object* v_as_4935_, size_t v_i_4936_, size_t v_stop_4937_, lean_object* v_b_4938_){
_start:
{
lean_object* v___x_4939_; 
v___x_4939_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_as_4935_, v_i_4936_, v_stop_4937_, v_b_4938_);
return v___x_4939_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4940_, lean_object* v_as_4941_, lean_object* v_i_4942_, lean_object* v_stop_4943_, lean_object* v_b_4944_){
_start:
{
size_t v_i_boxed_4945_; size_t v_stop_boxed_4946_; lean_object* v_res_4947_; 
v_i_boxed_4945_ = lean_unbox_usize(v_i_4942_);
lean_dec(v_i_4942_);
v_stop_boxed_4946_ = lean_unbox_usize(v_stop_4943_);
lean_dec(v_stop_4943_);
v_res_4947_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(v_00_u03b1_4940_, v_as_4941_, v_i_boxed_4945_, v_stop_boxed_4946_, v_b_4944_);
lean_dec_ref(v_as_4941_);
return v_res_4947_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold___redArg(lean_object* v_t_4948_, lean_object* v_f_4949_, lean_object* v_init_4950_){
_start:
{
lean_object* v___x_4951_; 
v___x_4951_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4948_, v_f_4949_, v_init_4950_);
return v___x_4951_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold(lean_object* v_00_u03b1_4952_, lean_object* v_00_u03c3_4953_, lean_object* v_t_4954_, lean_object* v_f_4955_, lean_object* v_init_4956_){
_start:
{
lean_object* v___x_4957_; 
v___x_4957_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4954_, v_f_4955_, v_init_4956_);
return v___x_4957_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM___redArg(lean_object* v_inst_4958_, lean_object* v_t_4959_, lean_object* v_f_4960_, lean_object* v_init_4961_){
_start:
{
lean_object* v___x_4962_; 
v___x_4962_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4958_, v_t_4959_, v_f_4960_, v_init_4961_);
return v___x_4962_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM(lean_object* v_m_4963_, lean_object* v_00_u03b1_4964_, lean_object* v_00_u03c3_4965_, lean_object* v_inst_4966_, lean_object* v_t_4967_, lean_object* v_f_4968_, lean_object* v_init_4969_){
_start:
{
lean_object* v___x_4970_; 
v___x_4970_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4966_, v_t_4967_, v_f_4968_, v_init_4969_);
return v___x_4970_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(lean_object* v_t_4971_, lean_object* v_init_4972_){
_start:
{
lean_object* v_key_4973_; lean_object* v_val_x3f_4974_; lean_object* v_children_4975_; lean_object* v_s_4977_; 
v_key_4973_ = lean_ctor_get(v_t_4971_, 0);
v_val_x3f_4974_ = lean_ctor_get(v_t_4971_, 1);
v_children_4975_ = lean_ctor_get(v_t_4971_, 2);
if (lean_obj_tag(v_val_x3f_4974_) == 1)
{
lean_object* v_val_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; 
v_val_4988_ = lean_ctor_get(v_val_x3f_4974_, 0);
lean_inc(v_val_4988_);
lean_inc(v_key_4973_);
v___x_4989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4989_, 0, v_key_4973_);
lean_ctor_set(v___x_4989_, 1, v_val_4988_);
v___x_4990_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4990_, 0, v___x_4989_);
lean_ctor_set(v___x_4990_, 1, v_init_4972_);
v_s_4977_ = v___x_4990_;
goto v___jp_4976_;
}
else
{
v_s_4977_ = v_init_4972_;
goto v___jp_4976_;
}
v___jp_4976_:
{
lean_object* v___x_4978_; lean_object* v___x_4979_; uint8_t v___x_4980_; 
v___x_4978_ = lean_unsigned_to_nat(0u);
v___x_4979_ = lean_array_get_size(v_children_4975_);
v___x_4980_ = lean_nat_dec_lt(v___x_4978_, v___x_4979_);
if (v___x_4980_ == 0)
{
return v_s_4977_;
}
else
{
uint8_t v___x_4981_; 
v___x_4981_ = lean_nat_dec_le(v___x_4979_, v___x_4979_);
if (v___x_4981_ == 0)
{
if (v___x_4980_ == 0)
{
return v_s_4977_;
}
else
{
size_t v___x_4982_; size_t v___x_4983_; lean_object* v___x_4984_; 
v___x_4982_ = ((size_t)0ULL);
v___x_4983_ = lean_usize_of_nat(v___x_4979_);
v___x_4984_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v_children_4975_, v___x_4982_, v___x_4983_, v_s_4977_);
return v___x_4984_;
}
}
else
{
size_t v___x_4985_; size_t v___x_4986_; lean_object* v___x_4987_; 
v___x_4985_ = ((size_t)0ULL);
v___x_4986_ = lean_usize_of_nat(v___x_4979_);
v___x_4987_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v_children_4975_, v___x_4985_, v___x_4986_, v_s_4977_);
return v___x_4987_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(lean_object* v_as_4991_, size_t v_i_4992_, size_t v_stop_4993_, lean_object* v_b_4994_){
_start:
{
uint8_t v___x_4995_; 
v___x_4995_ = lean_usize_dec_eq(v_i_4992_, v_stop_4993_);
if (v___x_4995_ == 0)
{
lean_object* v___x_4996_; lean_object* v___x_4997_; size_t v___x_4998_; size_t v___x_4999_; 
v___x_4996_ = lean_array_uget_borrowed(v_as_4991_, v_i_4992_);
v___x_4997_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v___x_4996_, v_b_4994_);
v___x_4998_ = ((size_t)1ULL);
v___x_4999_ = lean_usize_add(v_i_4992_, v___x_4998_);
v_i_4992_ = v___x_4999_;
v_b_4994_ = v___x_4997_;
goto _start;
}
else
{
return v_b_4994_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_5001_, lean_object* v_i_5002_, lean_object* v_stop_5003_, lean_object* v_b_5004_){
_start:
{
size_t v_i_boxed_5005_; size_t v_stop_boxed_5006_; lean_object* v_res_5007_; 
v_i_boxed_5005_ = lean_unbox_usize(v_i_5002_);
lean_dec(v_i_5002_);
v_stop_boxed_5006_ = lean_unbox_usize(v_stop_5003_);
lean_dec(v_stop_5003_);
v_res_5007_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v_as_5001_, v_i_boxed_5005_, v_stop_boxed_5006_, v_b_5004_);
lean_dec_ref(v_as_5001_);
return v_res_5007_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg___boxed(lean_object* v_t_5008_, lean_object* v_init_5009_){
_start:
{
lean_object* v_res_5010_; 
v_res_5010_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v_t_5008_, v_init_5009_);
lean_dec_ref(v_t_5008_);
return v_res_5010_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg___lam__0(lean_object* v_l_5011_, lean_object* v_n_5012_, lean_object* v_v_5013_){
_start:
{
lean_object* v___x_5014_; lean_object* v___x_5015_; 
v___x_5014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5014_, 0, v_n_5012_);
lean_ctor_set(v___x_5014_, 1, v_v_5013_);
v___x_5015_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5015_, 0, v___x_5014_);
lean_ctor_set(v___x_5015_, 1, v_l_5011_);
return v___x_5015_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(lean_object* v_t_5016_, lean_object* v_init_5017_){
_start:
{
switch(lean_obj_tag(v_t_5016_))
{
case 0:
{
lean_object* v_tree_5018_; lean_object* v___x_5019_; 
v_tree_5018_ = lean_ctor_get(v_t_5016_, 1);
lean_inc_ref(v_tree_5018_);
lean_dec_ref_known(v_t_5016_, 2);
v___x_5019_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v_tree_5018_, v_init_5017_);
lean_dec_ref(v_tree_5018_);
return v___x_5019_;
}
case 1:
{
lean_object* v_key_5020_; lean_object* v_entry_x3f_5021_; lean_object* v_children_5022_; lean_object* v_s_5024_; 
v_key_5020_ = lean_ctor_get(v_t_5016_, 0);
lean_inc(v_key_5020_);
v_entry_x3f_5021_ = lean_ctor_get(v_t_5016_, 1);
lean_inc(v_entry_x3f_5021_);
v_children_5022_ = lean_ctor_get(v_t_5016_, 2);
lean_inc_ref(v_children_5022_);
lean_dec_ref_known(v_t_5016_, 4);
if (lean_obj_tag(v_entry_x3f_5021_) == 1)
{
lean_object* v_val_5035_; lean_object* v_fst_5036_; lean_object* v___x_5037_; 
v_val_5035_ = lean_ctor_get(v_entry_x3f_5021_, 0);
lean_inc(v_val_5035_);
lean_dec_ref_known(v_entry_x3f_5021_, 1);
v_fst_5036_ = lean_ctor_get(v_val_5035_, 0);
lean_inc(v_fst_5036_);
lean_dec(v_val_5035_);
v___x_5037_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg___lam__0(v_init_5017_, v_key_5020_, v_fst_5036_);
v_s_5024_ = v___x_5037_;
goto v___jp_5023_;
}
else
{
lean_dec(v_entry_x3f_5021_);
lean_dec(v_key_5020_);
v_s_5024_ = v_init_5017_;
goto v___jp_5023_;
}
v___jp_5023_:
{
lean_object* v___x_5025_; lean_object* v___x_5026_; uint8_t v___x_5027_; 
v___x_5025_ = lean_unsigned_to_nat(0u);
v___x_5026_ = lean_array_get_size(v_children_5022_);
v___x_5027_ = lean_nat_dec_lt(v___x_5025_, v___x_5026_);
if (v___x_5027_ == 0)
{
lean_dec_ref(v_children_5022_);
return v_s_5024_;
}
else
{
uint8_t v___x_5028_; 
v___x_5028_ = lean_nat_dec_le(v___x_5026_, v___x_5026_);
if (v___x_5028_ == 0)
{
if (v___x_5027_ == 0)
{
lean_dec_ref(v_children_5022_);
return v_s_5024_;
}
else
{
size_t v___x_5029_; size_t v___x_5030_; lean_object* v___x_5031_; 
v___x_5029_ = ((size_t)0ULL);
v___x_5030_ = lean_usize_of_nat(v___x_5026_);
v___x_5031_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_children_5022_, v___x_5029_, v___x_5030_, v_s_5024_);
lean_dec_ref(v_children_5022_);
return v___x_5031_;
}
}
else
{
size_t v___x_5032_; size_t v___x_5033_; lean_object* v___x_5034_; 
v___x_5032_ = ((size_t)0ULL);
v___x_5033_ = lean_usize_of_nat(v___x_5026_);
v___x_5034_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_children_5022_, v___x_5032_, v___x_5033_, v_s_5024_);
lean_dec_ref(v_children_5022_);
return v___x_5034_;
}
}
}
}
default: 
{
lean_object* v_key_5038_; lean_object* v_entry_5039_; lean_object* v_expanded_5040_; lean_object* v_s_5042_; lean_object* v___x_5055_; 
v_key_5038_ = lean_ctor_get(v_t_5016_, 0);
lean_inc(v_key_5038_);
v_entry_5039_ = lean_ctor_get(v_t_5016_, 1);
lean_inc_ref(v_entry_5039_);
v_expanded_5040_ = lean_ctor_get(v_t_5016_, 2);
lean_inc_ref(v_expanded_5040_);
lean_dec_ref_known(v_t_5016_, 3);
v___x_5055_ = lean_thunk_get_own(v_entry_5039_);
lean_dec_ref(v_entry_5039_);
if (lean_obj_tag(v___x_5055_) == 1)
{
lean_object* v_val_5056_; lean_object* v_fst_5057_; lean_object* v___x_5058_; 
v_val_5056_ = lean_ctor_get(v___x_5055_, 0);
lean_inc(v_val_5056_);
lean_dec_ref_known(v___x_5055_, 1);
v_fst_5057_ = lean_ctor_get(v_val_5056_, 0);
lean_inc(v_fst_5057_);
lean_dec(v_val_5056_);
v___x_5058_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg___lam__0(v_init_5017_, v_key_5038_, v_fst_5057_);
v_s_5042_ = v___x_5058_;
goto v___jp_5041_;
}
else
{
lean_dec(v___x_5055_);
lean_dec(v_key_5038_);
v_s_5042_ = v_init_5017_;
goto v___jp_5041_;
}
v___jp_5041_:
{
lean_object* v___x_5043_; lean_object* v_fst_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; uint8_t v___x_5047_; 
v___x_5043_ = lean_thunk_get_own(v_expanded_5040_);
lean_dec_ref(v_expanded_5040_);
v_fst_5044_ = lean_ctor_get(v___x_5043_, 0);
lean_inc(v_fst_5044_);
lean_dec(v___x_5043_);
v___x_5045_ = lean_unsigned_to_nat(0u);
v___x_5046_ = lean_array_get_size(v_fst_5044_);
v___x_5047_ = lean_nat_dec_lt(v___x_5045_, v___x_5046_);
if (v___x_5047_ == 0)
{
lean_dec(v_fst_5044_);
return v_s_5042_;
}
else
{
uint8_t v___x_5048_; 
v___x_5048_ = lean_nat_dec_le(v___x_5046_, v___x_5046_);
if (v___x_5048_ == 0)
{
if (v___x_5047_ == 0)
{
lean_dec(v_fst_5044_);
return v_s_5042_;
}
else
{
size_t v___x_5049_; size_t v___x_5050_; lean_object* v___x_5051_; 
v___x_5049_ = ((size_t)0ULL);
v___x_5050_ = lean_usize_of_nat(v___x_5046_);
v___x_5051_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_fst_5044_, v___x_5049_, v___x_5050_, v_s_5042_);
lean_dec(v_fst_5044_);
return v___x_5051_;
}
}
else
{
size_t v___x_5052_; size_t v___x_5053_; lean_object* v___x_5054_; 
v___x_5052_ = ((size_t)0ULL);
v___x_5053_ = lean_usize_of_nat(v___x_5046_);
v___x_5054_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_fst_5044_, v___x_5052_, v___x_5053_, v_s_5042_);
lean_dec(v_fst_5044_);
return v___x_5054_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(lean_object* v_as_5059_, size_t v_i_5060_, size_t v_stop_5061_, lean_object* v_b_5062_){
_start:
{
uint8_t v___x_5063_; 
v___x_5063_ = lean_usize_dec_eq(v_i_5060_, v_stop_5061_);
if (v___x_5063_ == 0)
{
lean_object* v___x_5064_; lean_object* v___x_5065_; size_t v___x_5066_; size_t v___x_5067_; 
v___x_5064_ = lean_array_uget_borrowed(v_as_5059_, v_i_5060_);
lean_inc(v___x_5064_);
v___x_5065_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(v___x_5064_, v_b_5062_);
v___x_5066_ = ((size_t)1ULL);
v___x_5067_ = lean_usize_add(v_i_5060_, v___x_5066_);
v_i_5060_ = v___x_5067_;
v_b_5062_ = v___x_5065_;
goto _start;
}
else
{
return v_b_5062_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg___boxed(lean_object* v_as_5069_, lean_object* v_i_5070_, lean_object* v_stop_5071_, lean_object* v_b_5072_){
_start:
{
size_t v_i_boxed_5073_; size_t v_stop_boxed_5074_; lean_object* v_res_5075_; 
v_i_boxed_5073_ = lean_unbox_usize(v_i_5070_);
lean_dec(v_i_5070_);
v_stop_boxed_5074_ = lean_unbox_usize(v_stop_5071_);
lean_dec(v_stop_5071_);
v_res_5075_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_as_5069_, v_i_boxed_5073_, v_stop_boxed_5074_, v_b_5072_);
lean_dec_ref(v_as_5069_);
return v_res_5075_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toList___redArg(lean_object* v_t_5076_){
_start:
{
lean_object* v___x_5077_; lean_object* v___x_5078_; 
v___x_5077_ = lean_box(0);
v___x_5078_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(v_t_5076_, v___x_5077_);
return v___x_5078_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toList(lean_object* v_00_u03b1_5079_, lean_object* v_t_5080_){
_start:
{
lean_object* v___x_5081_; 
v___x_5081_ = l_Lean_ImportedConsts_toList___redArg(v_t_5080_);
return v___x_5081_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0(lean_object* v_00_u03b1_5082_, lean_object* v_t_5083_, lean_object* v_init_5084_){
_start:
{
lean_object* v___x_5085_; 
v___x_5085_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(v_t_5083_, v_init_5084_);
return v___x_5085_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0(lean_object* v_00_u03b1_5086_, lean_object* v_t_5087_, lean_object* v_init_5088_){
_start:
{
lean_object* v___x_5089_; 
v___x_5089_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v_t_5087_, v_init_5088_);
return v___x_5089_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5090_, lean_object* v_t_5091_, lean_object* v_init_5092_){
_start:
{
lean_object* v_res_5093_; 
v_res_5093_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0(v_00_u03b1_5090_, v_t_5091_, v_init_5092_);
lean_dec_ref(v_t_5091_);
return v_res_5093_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1(lean_object* v_00_u03b1_5094_, lean_object* v_as_5095_, size_t v_i_5096_, size_t v_stop_5097_, lean_object* v_b_5098_){
_start:
{
lean_object* v___x_5099_; 
v___x_5099_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_as_5095_, v_i_5096_, v_stop_5097_, v_b_5098_);
return v___x_5099_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5100_, lean_object* v_as_5101_, lean_object* v_i_5102_, lean_object* v_stop_5103_, lean_object* v_b_5104_){
_start:
{
size_t v_i_boxed_5105_; size_t v_stop_boxed_5106_; lean_object* v_res_5107_; 
v_i_boxed_5105_ = lean_unbox_usize(v_i_5102_);
lean_dec(v_i_5102_);
v_stop_boxed_5106_ = lean_unbox_usize(v_stop_5103_);
lean_dec(v_stop_5103_);
v_res_5107_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1(v_00_u03b1_5100_, v_as_5101_, v_i_boxed_5105_, v_stop_boxed_5106_, v_b_5104_);
lean_dec_ref(v_as_5101_);
return v_res_5107_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5108_, lean_object* v_as_5109_, size_t v_i_5110_, size_t v_stop_5111_, lean_object* v_b_5112_){
_start:
{
lean_object* v___x_5113_; 
v___x_5113_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v_as_5109_, v_i_5110_, v_stop_5111_, v_b_5112_);
return v___x_5113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5114_, lean_object* v_as_5115_, lean_object* v_i_5116_, lean_object* v_stop_5117_, lean_object* v_b_5118_){
_start:
{
size_t v_i_boxed_5119_; size_t v_stop_boxed_5120_; lean_object* v_res_5121_; 
v_i_boxed_5119_ = lean_unbox_usize(v_i_5116_);
lean_dec(v_i_5116_);
v_stop_boxed_5120_ = lean_unbox_usize(v_stop_5117_);
lean_dec(v_stop_5117_);
v_res_5121_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1(v_00_u03b1_5114_, v_as_5115_, v_i_boxed_5119_, v_stop_boxed_5120_, v_b_5118_);
lean_dec_ref(v_as_5115_);
return v_res_5121_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg___lam__0(lean_object* v_l_5122_, lean_object* v_n_5123_, lean_object* v_v_5124_){
_start:
{
lean_object* v___x_5125_; lean_object* v___x_5126_; 
v___x_5125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5125_, 0, v_n_5123_);
lean_ctor_set(v___x_5125_, 1, v_v_5124_);
v___x_5126_ = lean_array_push(v_l_5122_, v___x_5125_);
return v___x_5126_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(lean_object* v_t_5127_, lean_object* v_init_5128_){
_start:
{
lean_object* v_key_5129_; lean_object* v_val_x3f_5130_; lean_object* v_children_5131_; lean_object* v_s_5133_; 
v_key_5129_ = lean_ctor_get(v_t_5127_, 0);
v_val_x3f_5130_ = lean_ctor_get(v_t_5127_, 1);
v_children_5131_ = lean_ctor_get(v_t_5127_, 2);
if (lean_obj_tag(v_val_x3f_5130_) == 1)
{
lean_object* v_val_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; 
v_val_5144_ = lean_ctor_get(v_val_x3f_5130_, 0);
lean_inc(v_val_5144_);
lean_inc(v_key_5129_);
v___x_5145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5145_, 0, v_key_5129_);
lean_ctor_set(v___x_5145_, 1, v_val_5144_);
v___x_5146_ = lean_array_push(v_init_5128_, v___x_5145_);
v_s_5133_ = v___x_5146_;
goto v___jp_5132_;
}
else
{
v_s_5133_ = v_init_5128_;
goto v___jp_5132_;
}
v___jp_5132_:
{
lean_object* v___x_5134_; lean_object* v___x_5135_; uint8_t v___x_5136_; 
v___x_5134_ = lean_unsigned_to_nat(0u);
v___x_5135_ = lean_array_get_size(v_children_5131_);
v___x_5136_ = lean_nat_dec_lt(v___x_5134_, v___x_5135_);
if (v___x_5136_ == 0)
{
return v_s_5133_;
}
else
{
uint8_t v___x_5137_; 
v___x_5137_ = lean_nat_dec_le(v___x_5135_, v___x_5135_);
if (v___x_5137_ == 0)
{
if (v___x_5136_ == 0)
{
return v_s_5133_;
}
else
{
size_t v___x_5138_; size_t v___x_5139_; lean_object* v___x_5140_; 
v___x_5138_ = ((size_t)0ULL);
v___x_5139_ = lean_usize_of_nat(v___x_5135_);
v___x_5140_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_children_5131_, v___x_5138_, v___x_5139_, v_s_5133_);
return v___x_5140_;
}
}
else
{
size_t v___x_5141_; size_t v___x_5142_; lean_object* v___x_5143_; 
v___x_5141_ = ((size_t)0ULL);
v___x_5142_ = lean_usize_of_nat(v___x_5135_);
v___x_5143_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_children_5131_, v___x_5141_, v___x_5142_, v_s_5133_);
return v___x_5143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(lean_object* v_as_5147_, size_t v_i_5148_, size_t v_stop_5149_, lean_object* v_b_5150_){
_start:
{
uint8_t v___x_5151_; 
v___x_5151_ = lean_usize_dec_eq(v_i_5148_, v_stop_5149_);
if (v___x_5151_ == 0)
{
lean_object* v___x_5152_; lean_object* v___x_5153_; size_t v___x_5154_; size_t v___x_5155_; 
v___x_5152_ = lean_array_uget_borrowed(v_as_5147_, v_i_5148_);
v___x_5153_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v___x_5152_, v_b_5150_);
v___x_5154_ = ((size_t)1ULL);
v___x_5155_ = lean_usize_add(v_i_5148_, v___x_5154_);
v_i_5148_ = v___x_5155_;
v_b_5150_ = v___x_5153_;
goto _start;
}
else
{
return v_b_5150_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_5157_, lean_object* v_i_5158_, lean_object* v_stop_5159_, lean_object* v_b_5160_){
_start:
{
size_t v_i_boxed_5161_; size_t v_stop_boxed_5162_; lean_object* v_res_5163_; 
v_i_boxed_5161_ = lean_unbox_usize(v_i_5158_);
lean_dec(v_i_5158_);
v_stop_boxed_5162_ = lean_unbox_usize(v_stop_5159_);
lean_dec(v_stop_5159_);
v_res_5163_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_as_5157_, v_i_boxed_5161_, v_stop_boxed_5162_, v_b_5160_);
lean_dec_ref(v_as_5157_);
return v_res_5163_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___boxed(lean_object* v_t_5164_, lean_object* v_init_5165_){
_start:
{
lean_object* v_res_5166_; 
v_res_5166_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_t_5164_, v_init_5165_);
lean_dec_ref(v_t_5164_);
return v_res_5166_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(lean_object* v_t_5167_, lean_object* v_init_5168_){
_start:
{
switch(lean_obj_tag(v_t_5167_))
{
case 0:
{
lean_object* v_tree_5169_; lean_object* v___x_5170_; 
v_tree_5169_ = lean_ctor_get(v_t_5167_, 1);
lean_inc_ref(v_tree_5169_);
lean_dec_ref_known(v_t_5167_, 2);
v___x_5170_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_tree_5169_, v_init_5168_);
lean_dec_ref(v_tree_5169_);
return v___x_5170_;
}
case 1:
{
lean_object* v_key_5171_; lean_object* v_entry_x3f_5172_; lean_object* v_children_5173_; lean_object* v_s_5175_; 
v_key_5171_ = lean_ctor_get(v_t_5167_, 0);
lean_inc(v_key_5171_);
v_entry_x3f_5172_ = lean_ctor_get(v_t_5167_, 1);
lean_inc(v_entry_x3f_5172_);
v_children_5173_ = lean_ctor_get(v_t_5167_, 2);
lean_inc_ref(v_children_5173_);
lean_dec_ref_known(v_t_5167_, 4);
if (lean_obj_tag(v_entry_x3f_5172_) == 1)
{
lean_object* v_val_5186_; lean_object* v_fst_5187_; lean_object* v___x_5188_; 
v_val_5186_ = lean_ctor_get(v_entry_x3f_5172_, 0);
lean_inc(v_val_5186_);
lean_dec_ref_known(v_entry_x3f_5172_, 1);
v_fst_5187_ = lean_ctor_get(v_val_5186_, 0);
lean_inc(v_fst_5187_);
lean_dec(v_val_5186_);
v___x_5188_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg___lam__0(v_init_5168_, v_key_5171_, v_fst_5187_);
v_s_5175_ = v___x_5188_;
goto v___jp_5174_;
}
else
{
lean_dec(v_entry_x3f_5172_);
lean_dec(v_key_5171_);
v_s_5175_ = v_init_5168_;
goto v___jp_5174_;
}
v___jp_5174_:
{
lean_object* v___x_5176_; lean_object* v___x_5177_; uint8_t v___x_5178_; 
v___x_5176_ = lean_unsigned_to_nat(0u);
v___x_5177_ = lean_array_get_size(v_children_5173_);
v___x_5178_ = lean_nat_dec_lt(v___x_5176_, v___x_5177_);
if (v___x_5178_ == 0)
{
lean_dec_ref(v_children_5173_);
return v_s_5175_;
}
else
{
uint8_t v___x_5179_; 
v___x_5179_ = lean_nat_dec_le(v___x_5177_, v___x_5177_);
if (v___x_5179_ == 0)
{
if (v___x_5178_ == 0)
{
lean_dec_ref(v_children_5173_);
return v_s_5175_;
}
else
{
size_t v___x_5180_; size_t v___x_5181_; lean_object* v___x_5182_; 
v___x_5180_ = ((size_t)0ULL);
v___x_5181_ = lean_usize_of_nat(v___x_5177_);
v___x_5182_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_children_5173_, v___x_5180_, v___x_5181_, v_s_5175_);
lean_dec_ref(v_children_5173_);
return v___x_5182_;
}
}
else
{
size_t v___x_5183_; size_t v___x_5184_; lean_object* v___x_5185_; 
v___x_5183_ = ((size_t)0ULL);
v___x_5184_ = lean_usize_of_nat(v___x_5177_);
v___x_5185_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_children_5173_, v___x_5183_, v___x_5184_, v_s_5175_);
lean_dec_ref(v_children_5173_);
return v___x_5185_;
}
}
}
}
default: 
{
lean_object* v_key_5189_; lean_object* v_entry_5190_; lean_object* v_expanded_5191_; lean_object* v_s_5193_; lean_object* v___x_5206_; 
v_key_5189_ = lean_ctor_get(v_t_5167_, 0);
lean_inc(v_key_5189_);
v_entry_5190_ = lean_ctor_get(v_t_5167_, 1);
lean_inc_ref(v_entry_5190_);
v_expanded_5191_ = lean_ctor_get(v_t_5167_, 2);
lean_inc_ref(v_expanded_5191_);
lean_dec_ref_known(v_t_5167_, 3);
v___x_5206_ = lean_thunk_get_own(v_entry_5190_);
lean_dec_ref(v_entry_5190_);
if (lean_obj_tag(v___x_5206_) == 1)
{
lean_object* v_val_5207_; lean_object* v_fst_5208_; lean_object* v___x_5209_; 
v_val_5207_ = lean_ctor_get(v___x_5206_, 0);
lean_inc(v_val_5207_);
lean_dec_ref_known(v___x_5206_, 1);
v_fst_5208_ = lean_ctor_get(v_val_5207_, 0);
lean_inc(v_fst_5208_);
lean_dec(v_val_5207_);
v___x_5209_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg___lam__0(v_init_5168_, v_key_5189_, v_fst_5208_);
v_s_5193_ = v___x_5209_;
goto v___jp_5192_;
}
else
{
lean_dec(v___x_5206_);
lean_dec(v_key_5189_);
v_s_5193_ = v_init_5168_;
goto v___jp_5192_;
}
v___jp_5192_:
{
lean_object* v___x_5194_; lean_object* v_fst_5195_; lean_object* v___x_5196_; lean_object* v___x_5197_; uint8_t v___x_5198_; 
v___x_5194_ = lean_thunk_get_own(v_expanded_5191_);
lean_dec_ref(v_expanded_5191_);
v_fst_5195_ = lean_ctor_get(v___x_5194_, 0);
lean_inc(v_fst_5195_);
lean_dec(v___x_5194_);
v___x_5196_ = lean_unsigned_to_nat(0u);
v___x_5197_ = lean_array_get_size(v_fst_5195_);
v___x_5198_ = lean_nat_dec_lt(v___x_5196_, v___x_5197_);
if (v___x_5198_ == 0)
{
lean_dec(v_fst_5195_);
return v_s_5193_;
}
else
{
uint8_t v___x_5199_; 
v___x_5199_ = lean_nat_dec_le(v___x_5197_, v___x_5197_);
if (v___x_5199_ == 0)
{
if (v___x_5198_ == 0)
{
lean_dec(v_fst_5195_);
return v_s_5193_;
}
else
{
size_t v___x_5200_; size_t v___x_5201_; lean_object* v___x_5202_; 
v___x_5200_ = ((size_t)0ULL);
v___x_5201_ = lean_usize_of_nat(v___x_5197_);
v___x_5202_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_fst_5195_, v___x_5200_, v___x_5201_, v_s_5193_);
lean_dec(v_fst_5195_);
return v___x_5202_;
}
}
else
{
size_t v___x_5203_; size_t v___x_5204_; lean_object* v___x_5205_; 
v___x_5203_ = ((size_t)0ULL);
v___x_5204_ = lean_usize_of_nat(v___x_5197_);
v___x_5205_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_fst_5195_, v___x_5203_, v___x_5204_, v_s_5193_);
lean_dec(v_fst_5195_);
return v___x_5205_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(lean_object* v_as_5210_, size_t v_i_5211_, size_t v_stop_5212_, lean_object* v_b_5213_){
_start:
{
uint8_t v___x_5214_; 
v___x_5214_ = lean_usize_dec_eq(v_i_5211_, v_stop_5212_);
if (v___x_5214_ == 0)
{
lean_object* v___x_5215_; lean_object* v___x_5216_; size_t v___x_5217_; size_t v___x_5218_; 
v___x_5215_ = lean_array_uget_borrowed(v_as_5210_, v_i_5211_);
lean_inc(v___x_5215_);
v___x_5216_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(v___x_5215_, v_b_5213_);
v___x_5217_ = ((size_t)1ULL);
v___x_5218_ = lean_usize_add(v_i_5211_, v___x_5217_);
v_i_5211_ = v___x_5218_;
v_b_5213_ = v___x_5216_;
goto _start;
}
else
{
return v_b_5213_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg___boxed(lean_object* v_as_5220_, lean_object* v_i_5221_, lean_object* v_stop_5222_, lean_object* v_b_5223_){
_start:
{
size_t v_i_boxed_5224_; size_t v_stop_boxed_5225_; lean_object* v_res_5226_; 
v_i_boxed_5224_ = lean_unbox_usize(v_i_5221_);
lean_dec(v_i_5221_);
v_stop_boxed_5225_ = lean_unbox_usize(v_stop_5222_);
lean_dec(v_stop_5222_);
v_res_5226_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_as_5220_, v_i_boxed_5224_, v_stop_boxed_5225_, v_b_5223_);
lean_dec_ref(v_as_5220_);
return v_res_5226_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray___redArg(lean_object* v_t_5229_){
_start:
{
lean_object* v___x_5230_; lean_object* v___x_5231_; 
v___x_5230_ = ((lean_object*)(l_Lean_ImportedConsts_toArray___redArg___closed__0));
v___x_5231_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(v_t_5229_, v___x_5230_);
return v___x_5231_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray(lean_object* v_00_u03b1_5232_, lean_object* v_t_5233_){
_start:
{
lean_object* v___x_5234_; 
v___x_5234_ = l_Lean_ImportedConsts_toArray___redArg(v_t_5233_);
return v___x_5234_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0(lean_object* v_00_u03b1_5235_, lean_object* v_t_5236_, lean_object* v_init_5237_){
_start:
{
lean_object* v___x_5238_; 
v___x_5238_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(v_t_5236_, v_init_5237_);
return v___x_5238_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0(lean_object* v_00_u03b1_5239_, lean_object* v_t_5240_, lean_object* v_init_5241_){
_start:
{
lean_object* v___x_5242_; 
v___x_5242_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_t_5240_, v_init_5241_);
return v___x_5242_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5243_, lean_object* v_t_5244_, lean_object* v_init_5245_){
_start:
{
lean_object* v_res_5246_; 
v_res_5246_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0(v_00_u03b1_5243_, v_t_5244_, v_init_5245_);
lean_dec_ref(v_t_5244_);
return v_res_5246_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1(lean_object* v_00_u03b1_5247_, lean_object* v_as_5248_, size_t v_i_5249_, size_t v_stop_5250_, lean_object* v_b_5251_){
_start:
{
lean_object* v___x_5252_; 
v___x_5252_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_as_5248_, v_i_5249_, v_stop_5250_, v_b_5251_);
return v___x_5252_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5253_, lean_object* v_as_5254_, lean_object* v_i_5255_, lean_object* v_stop_5256_, lean_object* v_b_5257_){
_start:
{
size_t v_i_boxed_5258_; size_t v_stop_boxed_5259_; lean_object* v_res_5260_; 
v_i_boxed_5258_ = lean_unbox_usize(v_i_5255_);
lean_dec(v_i_5255_);
v_stop_boxed_5259_ = lean_unbox_usize(v_stop_5256_);
lean_dec(v_stop_5256_);
v_res_5260_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1(v_00_u03b1_5253_, v_as_5254_, v_i_boxed_5258_, v_stop_boxed_5259_, v_b_5257_);
lean_dec_ref(v_as_5254_);
return v_res_5260_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5261_, lean_object* v_as_5262_, size_t v_i_5263_, size_t v_stop_5264_, lean_object* v_b_5265_){
_start:
{
lean_object* v___x_5266_; 
v___x_5266_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_as_5262_, v_i_5263_, v_stop_5264_, v_b_5265_);
return v___x_5266_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5267_, lean_object* v_as_5268_, lean_object* v_i_5269_, lean_object* v_stop_5270_, lean_object* v_b_5271_){
_start:
{
size_t v_i_boxed_5272_; size_t v_stop_boxed_5273_; lean_object* v_res_5274_; 
v_i_boxed_5272_ = lean_unbox_usize(v_i_5269_);
lean_dec(v_i_5269_);
v_stop_boxed_5273_ = lean_unbox_usize(v_stop_5270_);
lean_dec(v_stop_5270_);
v_res_5274_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1(v_00_u03b1_5267_, v_as_5268_, v_i_boxed_5272_, v_stop_boxed_5273_, v_b_5271_);
lean_dec_ref(v_as_5268_);
return v_res_5274_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(lean_object* v_t_5275_, lean_object* v_init_5276_){
_start:
{
lean_object* v_key_5277_; lean_object* v_val_x3f_5278_; lean_object* v_children_5279_; lean_object* v_s_5281_; 
v_key_5277_ = lean_ctor_get(v_t_5275_, 0);
v_val_x3f_5278_ = lean_ctor_get(v_t_5275_, 1);
v_children_5279_ = lean_ctor_get(v_t_5275_, 2);
if (lean_obj_tag(v_val_x3f_5278_) == 1)
{
lean_object* v___x_5292_; 
lean_inc(v_key_5277_);
v___x_5292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5292_, 0, v_key_5277_);
lean_ctor_set(v___x_5292_, 1, v_init_5276_);
v_s_5281_ = v___x_5292_;
goto v___jp_5280_;
}
else
{
v_s_5281_ = v_init_5276_;
goto v___jp_5280_;
}
v___jp_5280_:
{
lean_object* v___x_5282_; lean_object* v___x_5283_; uint8_t v___x_5284_; 
v___x_5282_ = lean_unsigned_to_nat(0u);
v___x_5283_ = lean_array_get_size(v_children_5279_);
v___x_5284_ = lean_nat_dec_lt(v___x_5282_, v___x_5283_);
if (v___x_5284_ == 0)
{
return v_s_5281_;
}
else
{
uint8_t v___x_5285_; 
v___x_5285_ = lean_nat_dec_le(v___x_5283_, v___x_5283_);
if (v___x_5285_ == 0)
{
if (v___x_5284_ == 0)
{
return v_s_5281_;
}
else
{
size_t v___x_5286_; size_t v___x_5287_; lean_object* v___x_5288_; 
v___x_5286_ = ((size_t)0ULL);
v___x_5287_ = lean_usize_of_nat(v___x_5283_);
v___x_5288_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v_children_5279_, v___x_5286_, v___x_5287_, v_s_5281_);
return v___x_5288_;
}
}
else
{
size_t v___x_5289_; size_t v___x_5290_; lean_object* v___x_5291_; 
v___x_5289_ = ((size_t)0ULL);
v___x_5290_ = lean_usize_of_nat(v___x_5283_);
v___x_5291_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v_children_5279_, v___x_5289_, v___x_5290_, v_s_5281_);
return v___x_5291_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(lean_object* v_as_5293_, size_t v_i_5294_, size_t v_stop_5295_, lean_object* v_b_5296_){
_start:
{
uint8_t v___x_5297_; 
v___x_5297_ = lean_usize_dec_eq(v_i_5294_, v_stop_5295_);
if (v___x_5297_ == 0)
{
lean_object* v___x_5298_; lean_object* v___x_5299_; size_t v___x_5300_; size_t v___x_5301_; 
v___x_5298_ = lean_array_uget_borrowed(v_as_5293_, v_i_5294_);
v___x_5299_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v___x_5298_, v_b_5296_);
v___x_5300_ = ((size_t)1ULL);
v___x_5301_ = lean_usize_add(v_i_5294_, v___x_5300_);
v_i_5294_ = v___x_5301_;
v_b_5296_ = v___x_5299_;
goto _start;
}
else
{
return v_b_5296_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_5303_, lean_object* v_i_5304_, lean_object* v_stop_5305_, lean_object* v_b_5306_){
_start:
{
size_t v_i_boxed_5307_; size_t v_stop_boxed_5308_; lean_object* v_res_5309_; 
v_i_boxed_5307_ = lean_unbox_usize(v_i_5304_);
lean_dec(v_i_5304_);
v_stop_boxed_5308_ = lean_unbox_usize(v_stop_5305_);
lean_dec(v_stop_5305_);
v_res_5309_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v_as_5303_, v_i_boxed_5307_, v_stop_boxed_5308_, v_b_5306_);
lean_dec_ref(v_as_5303_);
return v_res_5309_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg___boxed(lean_object* v_t_5310_, lean_object* v_init_5311_){
_start:
{
lean_object* v_res_5312_; 
v_res_5312_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_t_5310_, v_init_5311_);
lean_dec_ref(v_t_5310_);
return v_res_5312_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(lean_object* v_t_5313_, lean_object* v_init_5314_){
_start:
{
switch(lean_obj_tag(v_t_5313_))
{
case 0:
{
lean_object* v_tree_5315_; lean_object* v___x_5316_; 
v_tree_5315_ = lean_ctor_get(v_t_5313_, 1);
v___x_5316_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_tree_5315_, v_init_5314_);
return v___x_5316_;
}
case 1:
{
lean_object* v_key_5317_; lean_object* v_entry_x3f_5318_; lean_object* v_children_5319_; lean_object* v_s_5321_; 
v_key_5317_ = lean_ctor_get(v_t_5313_, 0);
v_entry_x3f_5318_ = lean_ctor_get(v_t_5313_, 1);
v_children_5319_ = lean_ctor_get(v_t_5313_, 2);
if (lean_obj_tag(v_entry_x3f_5318_) == 1)
{
lean_object* v___x_5332_; 
lean_inc(v_key_5317_);
v___x_5332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5332_, 0, v_key_5317_);
lean_ctor_set(v___x_5332_, 1, v_init_5314_);
v_s_5321_ = v___x_5332_;
goto v___jp_5320_;
}
else
{
v_s_5321_ = v_init_5314_;
goto v___jp_5320_;
}
v___jp_5320_:
{
lean_object* v___x_5322_; lean_object* v___x_5323_; uint8_t v___x_5324_; 
v___x_5322_ = lean_unsigned_to_nat(0u);
v___x_5323_ = lean_array_get_size(v_children_5319_);
v___x_5324_ = lean_nat_dec_lt(v___x_5322_, v___x_5323_);
if (v___x_5324_ == 0)
{
return v_s_5321_;
}
else
{
uint8_t v___x_5325_; 
v___x_5325_ = lean_nat_dec_le(v___x_5323_, v___x_5323_);
if (v___x_5325_ == 0)
{
if (v___x_5324_ == 0)
{
return v_s_5321_;
}
else
{
size_t v___x_5326_; size_t v___x_5327_; lean_object* v___x_5328_; 
v___x_5326_ = ((size_t)0ULL);
v___x_5327_ = lean_usize_of_nat(v___x_5323_);
v___x_5328_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_children_5319_, v___x_5326_, v___x_5327_, v_s_5321_);
return v___x_5328_;
}
}
else
{
size_t v___x_5329_; size_t v___x_5330_; lean_object* v___x_5331_; 
v___x_5329_ = ((size_t)0ULL);
v___x_5330_ = lean_usize_of_nat(v___x_5323_);
v___x_5331_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_children_5319_, v___x_5329_, v___x_5330_, v_s_5321_);
return v___x_5331_;
}
}
}
}
default: 
{
lean_object* v_key_5333_; lean_object* v_entry_5334_; lean_object* v_expanded_5335_; lean_object* v_s_5337_; lean_object* v___x_5350_; 
v_key_5333_ = lean_ctor_get(v_t_5313_, 0);
v_entry_5334_ = lean_ctor_get(v_t_5313_, 1);
v_expanded_5335_ = lean_ctor_get(v_t_5313_, 2);
v___x_5350_ = lean_thunk_get_own(v_entry_5334_);
if (lean_obj_tag(v___x_5350_) == 1)
{
lean_object* v___x_5351_; 
lean_dec_ref_known(v___x_5350_, 1);
lean_inc(v_key_5333_);
v___x_5351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5351_, 0, v_key_5333_);
lean_ctor_set(v___x_5351_, 1, v_init_5314_);
v_s_5337_ = v___x_5351_;
goto v___jp_5336_;
}
else
{
lean_dec(v___x_5350_);
v_s_5337_ = v_init_5314_;
goto v___jp_5336_;
}
v___jp_5336_:
{
lean_object* v___x_5338_; lean_object* v_fst_5339_; lean_object* v___x_5340_; lean_object* v___x_5341_; uint8_t v___x_5342_; 
v___x_5338_ = lean_thunk_get_own(v_expanded_5335_);
v_fst_5339_ = lean_ctor_get(v___x_5338_, 0);
lean_inc(v_fst_5339_);
lean_dec(v___x_5338_);
v___x_5340_ = lean_unsigned_to_nat(0u);
v___x_5341_ = lean_array_get_size(v_fst_5339_);
v___x_5342_ = lean_nat_dec_lt(v___x_5340_, v___x_5341_);
if (v___x_5342_ == 0)
{
lean_dec(v_fst_5339_);
return v_s_5337_;
}
else
{
uint8_t v___x_5343_; 
v___x_5343_ = lean_nat_dec_le(v___x_5341_, v___x_5341_);
if (v___x_5343_ == 0)
{
if (v___x_5342_ == 0)
{
lean_dec(v_fst_5339_);
return v_s_5337_;
}
else
{
size_t v___x_5344_; size_t v___x_5345_; lean_object* v___x_5346_; 
v___x_5344_ = ((size_t)0ULL);
v___x_5345_ = lean_usize_of_nat(v___x_5341_);
v___x_5346_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_fst_5339_, v___x_5344_, v___x_5345_, v_s_5337_);
lean_dec(v_fst_5339_);
return v___x_5346_;
}
}
else
{
size_t v___x_5347_; size_t v___x_5348_; lean_object* v___x_5349_; 
v___x_5347_ = ((size_t)0ULL);
v___x_5348_ = lean_usize_of_nat(v___x_5341_);
v___x_5349_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_fst_5339_, v___x_5347_, v___x_5348_, v_s_5337_);
lean_dec(v_fst_5339_);
return v___x_5349_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(lean_object* v_as_5352_, size_t v_i_5353_, size_t v_stop_5354_, lean_object* v_b_5355_){
_start:
{
uint8_t v___x_5356_; 
v___x_5356_ = lean_usize_dec_eq(v_i_5353_, v_stop_5354_);
if (v___x_5356_ == 0)
{
lean_object* v___x_5357_; lean_object* v___x_5358_; size_t v___x_5359_; size_t v___x_5360_; 
v___x_5357_ = lean_array_uget_borrowed(v_as_5352_, v_i_5353_);
v___x_5358_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v___x_5357_, v_b_5355_);
v___x_5359_ = ((size_t)1ULL);
v___x_5360_ = lean_usize_add(v_i_5353_, v___x_5359_);
v_i_5353_ = v___x_5360_;
v_b_5355_ = v___x_5358_;
goto _start;
}
else
{
return v_b_5355_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg___boxed(lean_object* v_as_5362_, lean_object* v_i_5363_, lean_object* v_stop_5364_, lean_object* v_b_5365_){
_start:
{
size_t v_i_boxed_5366_; size_t v_stop_boxed_5367_; lean_object* v_res_5368_; 
v_i_boxed_5366_ = lean_unbox_usize(v_i_5363_);
lean_dec(v_i_5363_);
v_stop_boxed_5367_ = lean_unbox_usize(v_stop_5364_);
lean_dec(v_stop_5364_);
v_res_5368_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_as_5362_, v_i_boxed_5366_, v_stop_boxed_5367_, v_b_5365_);
lean_dec_ref(v_as_5362_);
return v_res_5368_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg___boxed(lean_object* v_t_5369_, lean_object* v_init_5370_){
_start:
{
lean_object* v_res_5371_; 
v_res_5371_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v_t_5369_, v_init_5370_);
lean_dec_ref(v_t_5369_);
return v_res_5371_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___redArg(lean_object* v_t_5372_){
_start:
{
lean_object* v___x_5373_; lean_object* v___x_5374_; 
v___x_5373_ = lean_box(0);
v___x_5374_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v_t_5372_, v___x_5373_);
return v___x_5374_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___redArg___boxed(lean_object* v_t_5375_){
_start:
{
lean_object* v_res_5376_; 
v_res_5376_ = l_Lean_ImportedConsts_keys___redArg(v_t_5375_);
lean_dec_ref(v_t_5375_);
return v_res_5376_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys(lean_object* v_00_u03b1_5377_, lean_object* v_t_5378_){
_start:
{
lean_object* v___x_5379_; 
v___x_5379_ = l_Lean_ImportedConsts_keys___redArg(v_t_5378_);
return v___x_5379_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___boxed(lean_object* v_00_u03b1_5380_, lean_object* v_t_5381_){
_start:
{
lean_object* v_res_5382_; 
v_res_5382_ = l_Lean_ImportedConsts_keys(v_00_u03b1_5380_, v_t_5381_);
lean_dec_ref(v_t_5381_);
return v_res_5382_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0(lean_object* v_00_u03b1_5383_, lean_object* v_t_5384_, lean_object* v_init_5385_){
_start:
{
lean_object* v___x_5386_; 
v___x_5386_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v_t_5384_, v_init_5385_);
return v___x_5386_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___boxed(lean_object* v_00_u03b1_5387_, lean_object* v_t_5388_, lean_object* v_init_5389_){
_start:
{
lean_object* v_res_5390_; 
v_res_5390_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0(v_00_u03b1_5387_, v_t_5388_, v_init_5389_);
lean_dec_ref(v_t_5388_);
return v_res_5390_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0(lean_object* v_00_u03b1_5391_, lean_object* v_t_5392_, lean_object* v_init_5393_){
_start:
{
lean_object* v___x_5394_; 
v___x_5394_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_t_5392_, v_init_5393_);
return v___x_5394_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5395_, lean_object* v_t_5396_, lean_object* v_init_5397_){
_start:
{
lean_object* v_res_5398_; 
v_res_5398_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0(v_00_u03b1_5395_, v_t_5396_, v_init_5397_);
lean_dec_ref(v_t_5396_);
return v_res_5398_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1(lean_object* v_00_u03b1_5399_, lean_object* v_as_5400_, size_t v_i_5401_, size_t v_stop_5402_, lean_object* v_b_5403_){
_start:
{
lean_object* v___x_5404_; 
v___x_5404_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_as_5400_, v_i_5401_, v_stop_5402_, v_b_5403_);
return v___x_5404_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5405_, lean_object* v_as_5406_, lean_object* v_i_5407_, lean_object* v_stop_5408_, lean_object* v_b_5409_){
_start:
{
size_t v_i_boxed_5410_; size_t v_stop_boxed_5411_; lean_object* v_res_5412_; 
v_i_boxed_5410_ = lean_unbox_usize(v_i_5407_);
lean_dec(v_i_5407_);
v_stop_boxed_5411_ = lean_unbox_usize(v_stop_5408_);
lean_dec(v_stop_5408_);
v_res_5412_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1(v_00_u03b1_5405_, v_as_5406_, v_i_boxed_5410_, v_stop_boxed_5411_, v_b_5409_);
lean_dec_ref(v_as_5406_);
return v_res_5412_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5413_, lean_object* v_as_5414_, size_t v_i_5415_, size_t v_stop_5416_, lean_object* v_b_5417_){
_start:
{
lean_object* v___x_5418_; 
v___x_5418_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v_as_5414_, v_i_5415_, v_stop_5416_, v_b_5417_);
return v___x_5418_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5419_, lean_object* v_as_5420_, lean_object* v_i_5421_, lean_object* v_stop_5422_, lean_object* v_b_5423_){
_start:
{
size_t v_i_boxed_5424_; size_t v_stop_boxed_5425_; lean_object* v_res_5426_; 
v_i_boxed_5424_ = lean_unbox_usize(v_i_5421_);
lean_dec(v_i_5421_);
v_stop_boxed_5425_ = lean_unbox_usize(v_stop_5422_);
lean_dec(v_stop_5422_);
v_res_5426_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1(v_00_u03b1_5419_, v_as_5420_, v_i_boxed_5424_, v_stop_boxed_5425_, v_b_5423_);
lean_dec_ref(v_as_5420_);
return v_res_5426_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(lean_object* v_t_5427_, lean_object* v_init_5428_){
_start:
{
lean_object* v_val_x3f_5429_; lean_object* v_children_5430_; lean_object* v_s_5432_; 
v_val_x3f_5429_ = lean_ctor_get(v_t_5427_, 1);
v_children_5430_ = lean_ctor_get(v_t_5427_, 2);
if (lean_obj_tag(v_val_x3f_5429_) == 1)
{
lean_object* v_val_5443_; lean_object* v___x_5444_; 
v_val_5443_ = lean_ctor_get(v_val_x3f_5429_, 0);
lean_inc(v_val_5443_);
v___x_5444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5444_, 0, v_val_5443_);
lean_ctor_set(v___x_5444_, 1, v_init_5428_);
v_s_5432_ = v___x_5444_;
goto v___jp_5431_;
}
else
{
v_s_5432_ = v_init_5428_;
goto v___jp_5431_;
}
v___jp_5431_:
{
lean_object* v___x_5433_; lean_object* v___x_5434_; uint8_t v___x_5435_; 
v___x_5433_ = lean_unsigned_to_nat(0u);
v___x_5434_ = lean_array_get_size(v_children_5430_);
v___x_5435_ = lean_nat_dec_lt(v___x_5433_, v___x_5434_);
if (v___x_5435_ == 0)
{
return v_s_5432_;
}
else
{
uint8_t v___x_5436_; 
v___x_5436_ = lean_nat_dec_le(v___x_5434_, v___x_5434_);
if (v___x_5436_ == 0)
{
if (v___x_5435_ == 0)
{
return v_s_5432_;
}
else
{
size_t v___x_5437_; size_t v___x_5438_; lean_object* v___x_5439_; 
v___x_5437_ = ((size_t)0ULL);
v___x_5438_ = lean_usize_of_nat(v___x_5434_);
v___x_5439_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_children_5430_, v___x_5437_, v___x_5438_, v_s_5432_);
return v___x_5439_;
}
}
else
{
size_t v___x_5440_; size_t v___x_5441_; lean_object* v___x_5442_; 
v___x_5440_ = ((size_t)0ULL);
v___x_5441_ = lean_usize_of_nat(v___x_5434_);
v___x_5442_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_children_5430_, v___x_5440_, v___x_5441_, v_s_5432_);
return v___x_5442_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(lean_object* v_as_5445_, size_t v_i_5446_, size_t v_stop_5447_, lean_object* v_b_5448_){
_start:
{
uint8_t v___x_5449_; 
v___x_5449_ = lean_usize_dec_eq(v_i_5446_, v_stop_5447_);
if (v___x_5449_ == 0)
{
lean_object* v___x_5450_; lean_object* v___x_5451_; size_t v___x_5452_; size_t v___x_5453_; 
v___x_5450_ = lean_array_uget_borrowed(v_as_5445_, v_i_5446_);
v___x_5451_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v___x_5450_, v_b_5448_);
v___x_5452_ = ((size_t)1ULL);
v___x_5453_ = lean_usize_add(v_i_5446_, v___x_5452_);
v_i_5446_ = v___x_5453_;
v_b_5448_ = v___x_5451_;
goto _start;
}
else
{
return v_b_5448_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_5455_, lean_object* v_i_5456_, lean_object* v_stop_5457_, lean_object* v_b_5458_){
_start:
{
size_t v_i_boxed_5459_; size_t v_stop_boxed_5460_; lean_object* v_res_5461_; 
v_i_boxed_5459_ = lean_unbox_usize(v_i_5456_);
lean_dec(v_i_5456_);
v_stop_boxed_5460_ = lean_unbox_usize(v_stop_5457_);
lean_dec(v_stop_5457_);
v_res_5461_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_as_5455_, v_i_boxed_5459_, v_stop_boxed_5460_, v_b_5458_);
lean_dec_ref(v_as_5455_);
return v_res_5461_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg___boxed(lean_object* v_t_5462_, lean_object* v_init_5463_){
_start:
{
lean_object* v_res_5464_; 
v_res_5464_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_t_5462_, v_init_5463_);
lean_dec_ref(v_t_5462_);
return v_res_5464_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(lean_object* v_t_5465_, lean_object* v_init_5466_){
_start:
{
switch(lean_obj_tag(v_t_5465_))
{
case 0:
{
lean_object* v_tree_5467_; lean_object* v___x_5468_; 
v_tree_5467_ = lean_ctor_get(v_t_5465_, 1);
lean_inc_ref(v_tree_5467_);
lean_dec_ref_known(v_t_5465_, 2);
v___x_5468_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_tree_5467_, v_init_5466_);
lean_dec_ref(v_tree_5467_);
return v___x_5468_;
}
case 1:
{
lean_object* v_entry_x3f_5469_; lean_object* v_children_5470_; lean_object* v_s_5472_; 
v_entry_x3f_5469_ = lean_ctor_get(v_t_5465_, 1);
lean_inc(v_entry_x3f_5469_);
v_children_5470_ = lean_ctor_get(v_t_5465_, 2);
lean_inc_ref(v_children_5470_);
lean_dec_ref_known(v_t_5465_, 4);
if (lean_obj_tag(v_entry_x3f_5469_) == 1)
{
lean_object* v_val_5483_; lean_object* v_fst_5484_; lean_object* v___x_5486_; uint8_t v_isShared_5487_; uint8_t v_isSharedCheck_5491_; 
v_val_5483_ = lean_ctor_get(v_entry_x3f_5469_, 0);
lean_inc(v_val_5483_);
lean_dec_ref_known(v_entry_x3f_5469_, 1);
v_fst_5484_ = lean_ctor_get(v_val_5483_, 0);
v_isSharedCheck_5491_ = !lean_is_exclusive(v_val_5483_);
if (v_isSharedCheck_5491_ == 0)
{
lean_object* v_unused_5492_; 
v_unused_5492_ = lean_ctor_get(v_val_5483_, 1);
lean_dec(v_unused_5492_);
v___x_5486_ = v_val_5483_;
v_isShared_5487_ = v_isSharedCheck_5491_;
goto v_resetjp_5485_;
}
else
{
lean_inc(v_fst_5484_);
lean_dec(v_val_5483_);
v___x_5486_ = lean_box(0);
v_isShared_5487_ = v_isSharedCheck_5491_;
goto v_resetjp_5485_;
}
v_resetjp_5485_:
{
lean_object* v___x_5489_; 
if (v_isShared_5487_ == 0)
{
lean_ctor_set_tag(v___x_5486_, 1);
lean_ctor_set(v___x_5486_, 1, v_init_5466_);
v___x_5489_ = v___x_5486_;
goto v_reusejp_5488_;
}
else
{
lean_object* v_reuseFailAlloc_5490_; 
v_reuseFailAlloc_5490_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5490_, 0, v_fst_5484_);
lean_ctor_set(v_reuseFailAlloc_5490_, 1, v_init_5466_);
v___x_5489_ = v_reuseFailAlloc_5490_;
goto v_reusejp_5488_;
}
v_reusejp_5488_:
{
v_s_5472_ = v___x_5489_;
goto v___jp_5471_;
}
}
}
else
{
lean_dec(v_entry_x3f_5469_);
v_s_5472_ = v_init_5466_;
goto v___jp_5471_;
}
v___jp_5471_:
{
lean_object* v___x_5473_; lean_object* v___x_5474_; uint8_t v___x_5475_; 
v___x_5473_ = lean_unsigned_to_nat(0u);
v___x_5474_ = lean_array_get_size(v_children_5470_);
v___x_5475_ = lean_nat_dec_lt(v___x_5473_, v___x_5474_);
if (v___x_5475_ == 0)
{
lean_dec_ref(v_children_5470_);
return v_s_5472_;
}
else
{
uint8_t v___x_5476_; 
v___x_5476_ = lean_nat_dec_le(v___x_5474_, v___x_5474_);
if (v___x_5476_ == 0)
{
if (v___x_5475_ == 0)
{
lean_dec_ref(v_children_5470_);
return v_s_5472_;
}
else
{
size_t v___x_5477_; size_t v___x_5478_; lean_object* v___x_5479_; 
v___x_5477_ = ((size_t)0ULL);
v___x_5478_ = lean_usize_of_nat(v___x_5474_);
v___x_5479_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(v_children_5470_, v___x_5477_, v___x_5478_, v_s_5472_);
lean_dec_ref(v_children_5470_);
return v___x_5479_;
}
}
else
{
size_t v___x_5480_; size_t v___x_5481_; lean_object* v___x_5482_; 
v___x_5480_ = ((size_t)0ULL);
v___x_5481_ = lean_usize_of_nat(v___x_5474_);
v___x_5482_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(v_children_5470_, v___x_5480_, v___x_5481_, v_s_5472_);
lean_dec_ref(v_children_5470_);
return v___x_5482_;
}
}
}
}
default: 
{
lean_object* v_entry_5493_; lean_object* v_expanded_5494_; lean_object* v_s_5496_; lean_object* v___x_5509_; 
v_entry_5493_ = lean_ctor_get(v_t_5465_, 1);
lean_inc_ref(v_entry_5493_);
v_expanded_5494_ = lean_ctor_get(v_t_5465_, 2);
lean_inc_ref(v_expanded_5494_);
lean_dec_ref_known(v_t_5465_, 3);
v___x_5509_ = lean_thunk_get_own(v_entry_5493_);
lean_dec_ref(v_entry_5493_);
if (lean_obj_tag(v___x_5509_) == 1)
{
lean_object* v_val_5510_; lean_object* v_fst_5511_; lean_object* v___x_5513_; uint8_t v_isShared_5514_; uint8_t v_isSharedCheck_5518_; 
v_val_5510_ = lean_ctor_get(v___x_5509_, 0);
lean_inc(v_val_5510_);
lean_dec_ref_known(v___x_5509_, 1);
v_fst_5511_ = lean_ctor_get(v_val_5510_, 0);
v_isSharedCheck_5518_ = !lean_is_exclusive(v_val_5510_);
if (v_isSharedCheck_5518_ == 0)
{
lean_object* v_unused_5519_; 
v_unused_5519_ = lean_ctor_get(v_val_5510_, 1);
lean_dec(v_unused_5519_);
v___x_5513_ = v_val_5510_;
v_isShared_5514_ = v_isSharedCheck_5518_;
goto v_resetjp_5512_;
}
else
{
lean_inc(v_fst_5511_);
lean_dec(v_val_5510_);
v___x_5513_ = lean_box(0);
v_isShared_5514_ = v_isSharedCheck_5518_;
goto v_resetjp_5512_;
}
v_resetjp_5512_:
{
lean_object* v___x_5516_; 
if (v_isShared_5514_ == 0)
{
lean_ctor_set_tag(v___x_5513_, 1);
lean_ctor_set(v___x_5513_, 1, v_init_5466_);
v___x_5516_ = v___x_5513_;
goto v_reusejp_5515_;
}
else
{
lean_object* v_reuseFailAlloc_5517_; 
v_reuseFailAlloc_5517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5517_, 0, v_fst_5511_);
lean_ctor_set(v_reuseFailAlloc_5517_, 1, v_init_5466_);
v___x_5516_ = v_reuseFailAlloc_5517_;
goto v_reusejp_5515_;
}
v_reusejp_5515_:
{
v_s_5496_ = v___x_5516_;
goto v___jp_5495_;
}
}
}
else
{
lean_dec(v___x_5509_);
v_s_5496_ = v_init_5466_;
goto v___jp_5495_;
}
v___jp_5495_:
{
lean_object* v___x_5497_; lean_object* v_fst_5498_; lean_object* v___x_5499_; lean_object* v___x_5500_; uint8_t v___x_5501_; 
v___x_5497_ = lean_thunk_get_own(v_expanded_5494_);
lean_dec_ref(v_expanded_5494_);
v_fst_5498_ = lean_ctor_get(v___x_5497_, 0);
lean_inc(v_fst_5498_);
lean_dec(v___x_5497_);
v___x_5499_ = lean_unsigned_to_nat(0u);
v___x_5500_ = lean_array_get_size(v_fst_5498_);
v___x_5501_ = lean_nat_dec_lt(v___x_5499_, v___x_5500_);
if (v___x_5501_ == 0)
{
lean_dec(v_fst_5498_);
return v_s_5496_;
}
else
{
uint8_t v___x_5502_; 
v___x_5502_ = lean_nat_dec_le(v___x_5500_, v___x_5500_);
if (v___x_5502_ == 0)
{
if (v___x_5501_ == 0)
{
lean_dec(v_fst_5498_);
return v_s_5496_;
}
else
{
size_t v___x_5503_; size_t v___x_5504_; lean_object* v___x_5505_; 
v___x_5503_ = ((size_t)0ULL);
v___x_5504_ = lean_usize_of_nat(v___x_5500_);
v___x_5505_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(v_fst_5498_, v___x_5503_, v___x_5504_, v_s_5496_);
lean_dec(v_fst_5498_);
return v___x_5505_;
}
}
else
{
size_t v___x_5506_; size_t v___x_5507_; lean_object* v___x_5508_; 
v___x_5506_ = ((size_t)0ULL);
v___x_5507_ = lean_usize_of_nat(v___x_5500_);
v___x_5508_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(v_fst_5498_, v___x_5506_, v___x_5507_, v_s_5496_);
lean_dec(v_fst_5498_);
return v___x_5508_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(lean_object* v_as_5520_, size_t v_i_5521_, size_t v_stop_5522_, lean_object* v_b_5523_){
_start:
{
uint8_t v___x_5524_; 
v___x_5524_ = lean_usize_dec_eq(v_i_5521_, v_stop_5522_);
if (v___x_5524_ == 0)
{
lean_object* v___x_5525_; lean_object* v___x_5526_; size_t v___x_5527_; size_t v___x_5528_; 
v___x_5525_ = lean_array_uget_borrowed(v_as_5520_, v_i_5521_);
lean_inc(v___x_5525_);
v___x_5526_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(v___x_5525_, v_b_5523_);
v___x_5527_ = ((size_t)1ULL);
v___x_5528_ = lean_usize_add(v_i_5521_, v___x_5527_);
v_i_5521_ = v___x_5528_;
v_b_5523_ = v___x_5526_;
goto _start;
}
else
{
return v_b_5523_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg___boxed(lean_object* v_as_5530_, lean_object* v_i_5531_, lean_object* v_stop_5532_, lean_object* v_b_5533_){
_start:
{
size_t v_i_boxed_5534_; size_t v_stop_boxed_5535_; lean_object* v_res_5536_; 
v_i_boxed_5534_ = lean_unbox_usize(v_i_5531_);
lean_dec(v_i_5531_);
v_stop_boxed_5535_ = lean_unbox_usize(v_stop_5532_);
lean_dec(v_stop_5532_);
v_res_5536_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(v_as_5530_, v_i_boxed_5534_, v_stop_boxed_5535_, v_b_5533_);
lean_dec_ref(v_as_5530_);
return v_res_5536_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values___redArg(lean_object* v_t_5537_){
_start:
{
lean_object* v___x_5538_; lean_object* v___x_5539_; 
v___x_5538_ = lean_box(0);
v___x_5539_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(v_t_5537_, v___x_5538_);
return v___x_5539_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values(lean_object* v_00_u03b1_5540_, lean_object* v_t_5541_){
_start:
{
lean_object* v___x_5542_; 
v___x_5542_ = l_Lean_ImportedConsts_values___redArg(v_t_5541_);
return v___x_5542_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0(lean_object* v_00_u03b1_5543_, lean_object* v_t_5544_, lean_object* v_init_5545_){
_start:
{
lean_object* v___x_5546_; 
v___x_5546_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(v_t_5544_, v_init_5545_);
return v___x_5546_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0(lean_object* v_00_u03b1_5547_, lean_object* v_t_5548_, lean_object* v_init_5549_){
_start:
{
lean_object* v___x_5550_; 
v___x_5550_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_t_5548_, v_init_5549_);
return v___x_5550_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5551_, lean_object* v_t_5552_, lean_object* v_init_5553_){
_start:
{
lean_object* v_res_5554_; 
v_res_5554_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0(v_00_u03b1_5551_, v_t_5552_, v_init_5553_);
lean_dec_ref(v_t_5552_);
return v_res_5554_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1(lean_object* v_00_u03b1_5555_, lean_object* v_as_5556_, size_t v_i_5557_, size_t v_stop_5558_, lean_object* v_b_5559_){
_start:
{
lean_object* v___x_5560_; 
v___x_5560_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(v_as_5556_, v_i_5557_, v_stop_5558_, v_b_5559_);
return v___x_5560_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5561_, lean_object* v_as_5562_, lean_object* v_i_5563_, lean_object* v_stop_5564_, lean_object* v_b_5565_){
_start:
{
size_t v_i_boxed_5566_; size_t v_stop_boxed_5567_; lean_object* v_res_5568_; 
v_i_boxed_5566_ = lean_unbox_usize(v_i_5563_);
lean_dec(v_i_5563_);
v_stop_boxed_5567_ = lean_unbox_usize(v_stop_5564_);
lean_dec(v_stop_5564_);
v_res_5568_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1(v_00_u03b1_5561_, v_as_5562_, v_i_boxed_5566_, v_stop_boxed_5567_, v_b_5565_);
lean_dec_ref(v_as_5562_);
return v_res_5568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5569_, lean_object* v_as_5570_, size_t v_i_5571_, size_t v_stop_5572_, lean_object* v_b_5573_){
_start:
{
lean_object* v___x_5574_; 
v___x_5574_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_as_5570_, v_i_5571_, v_stop_5572_, v_b_5573_);
return v___x_5574_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5575_, lean_object* v_as_5576_, lean_object* v_i_5577_, lean_object* v_stop_5578_, lean_object* v_b_5579_){
_start:
{
size_t v_i_boxed_5580_; size_t v_stop_boxed_5581_; lean_object* v_res_5582_; 
v_i_boxed_5580_ = lean_unbox_usize(v_i_5577_);
lean_dec(v_i_5577_);
v_stop_boxed_5581_ = lean_unbox_usize(v_stop_5578_);
lean_dec(v_stop_5578_);
v_res_5582_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1(v_00_u03b1_5575_, v_as_5576_, v_i_boxed_5580_, v_stop_boxed_5581_, v_b_5579_);
lean_dec_ref(v_as_5576_);
return v_res_5582_;
}
}
static lean_object* _init_l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_5586_; lean_object* v___x_5587_; lean_object* v___x_5588_; lean_object* v___x_5589_; lean_object* v___x_5590_; lean_object* v___x_5591_; 
v___x_5586_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__2));
v___x_5587_ = lean_unsigned_to_nat(14u);
v___x_5588_ = lean_unsigned_to_nat(22u);
v___x_5589_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__1));
v___x_5590_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__0));
v___x_5591_ = l_mkPanicMessageWithDecl(v___x_5590_, v___x_5589_, v___x_5588_, v___x_5587_, v___x_5586_);
return v___x_5591_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0(lean_object* v_inst_5592_, lean_object* v_t_5593_, lean_object* v_n_5594_, lean_object* v_x_5595_){
_start:
{
lean_object* v___x_5596_; 
v___x_5596_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_5593_, v_n_5594_);
if (lean_obj_tag(v___x_5596_) == 0)
{
lean_object* v___x_5597_; lean_object* v___x_5598_; 
v___x_5597_ = lean_obj_once(&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3, &l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3_once, _init_l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3);
v___x_5598_ = l_panic___redArg(v_inst_5592_, v___x_5597_);
return v___x_5598_;
}
else
{
lean_object* v_val_5599_; 
v_val_5599_ = lean_ctor_get(v___x_5596_, 0);
lean_inc(v_val_5599_);
lean_dec_ref_known(v___x_5596_, 1);
return v_val_5599_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___boxed(lean_object* v_inst_5600_, lean_object* v_t_5601_, lean_object* v_n_5602_, lean_object* v_x_5603_){
_start:
{
lean_object* v_res_5604_; 
v_res_5604_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0(v_inst_5600_, v_t_5601_, v_n_5602_, v_x_5603_);
lean_dec(v_inst_5600_);
return v_res_5604_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1(lean_object* v_inst_5605_, lean_object* v_xs_5606_, lean_object* v_i_5607_){
_start:
{
lean_object* v___x_5608_; 
v___x_5608_ = l_Lean_ImportedConsts_find_x3f___redArg(v_xs_5606_, v_i_5607_);
if (lean_obj_tag(v___x_5608_) == 0)
{
lean_object* v___x_5609_; 
v___x_5609_ = l_outOfBounds___redArg(v_inst_5605_);
return v___x_5609_;
}
else
{
lean_object* v_val_5610_; 
v_val_5610_ = lean_ctor_get(v___x_5608_, 0);
lean_inc(v_val_5610_);
lean_dec_ref_known(v___x_5608_, 1);
return v_val_5610_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1___boxed(lean_object* v_inst_5611_, lean_object* v_xs_5612_, lean_object* v_i_5613_){
_start:
{
lean_object* v_res_5614_; 
v_res_5614_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1(v_inst_5611_, v_xs_5612_, v_i_5613_);
lean_dec(v_inst_5611_);
return v_res_5614_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg(lean_object* v_inst_5617_){
_start:
{
lean_object* v___f_5618_; lean_object* v___f_5619_; lean_object* v___f_5620_; lean_object* v___x_5621_; 
v___f_5618_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_5618_, 0, v_inst_5617_);
v___f_5619_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__0));
v___f_5620_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__1));
v___x_5621_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5621_, 0, v___f_5618_);
lean_ctor_set(v___x_5621_, 1, v___f_5619_);
lean_ctor_set(v___x_5621_, 2, v___f_5620_);
return v___x_5621_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited(lean_object* v_00_u03b1_5622_, lean_object* v_inst_5623_){
_start:
{
lean_object* v___x_5624_; 
v___x_5624_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg(v_inst_5623_);
return v___x_5624_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__0(lean_object* v_f_5625_, lean_object* v_n_5626_, lean_object* v_v_5627_){
_start:
{
lean_object* v___x_5628_; lean_object* v___x_5629_; 
v___x_5628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5628_, 0, v_n_5626_);
lean_ctor_set(v___x_5628_, 1, v_v_5627_);
v___x_5629_ = lean_apply_1(v_f_5625_, v___x_5628_);
return v___x_5629_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1(lean_object* v_inst_5630_, lean_object* v_t_5631_, lean_object* v_f_5632_){
_start:
{
lean_object* v___f_5633_; lean_object* v___x_5634_; 
v___f_5633_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__0), 3, 1);
lean_closure_set(v___f_5633_, 0, v_f_5632_);
v___x_5634_ = l_Lean_ImportedConsts_forM___redArg(v_inst_5630_, v_t_5631_, v___f_5633_);
return v___x_5634_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg(lean_object* v_inst_5635_){
_start:
{
lean_object* v___f_5636_; 
v___f_5636_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_5636_, 0, v_inst_5635_);
return v___f_5636_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad(lean_object* v_m_5637_, lean_object* v_00_u03b1_5638_, lean_object* v_inst_5639_){
_start:
{
lean_object* v___f_5640_; 
v___f_5640_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_5640_, 0, v_inst_5639_);
return v___f_5640_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0(lean_object* v_toPure_5641_, lean_object* v_____do__lift_5642_){
_start:
{
if (lean_obj_tag(v_____do__lift_5642_) == 0)
{
lean_object* v_a_5643_; lean_object* v___x_5644_; 
v_a_5643_ = lean_ctor_get(v_____do__lift_5642_, 0);
lean_inc(v_a_5643_);
lean_dec_ref_known(v_____do__lift_5642_, 1);
v___x_5644_ = lean_apply_2(v_toPure_5641_, lean_box(0), v_a_5643_);
return v___x_5644_;
}
else
{
lean_object* v_a_5645_; lean_object* v_snd_5646_; lean_object* v___x_5647_; 
v_a_5645_ = lean_ctor_get(v_____do__lift_5642_, 0);
lean_inc(v_a_5645_);
lean_dec_ref_known(v_____do__lift_5642_, 1);
v_snd_5646_ = lean_ctor_get(v_a_5645_, 1);
lean_inc(v_snd_5646_);
lean_dec(v_a_5645_);
v___x_5647_ = lean_apply_2(v_toPure_5641_, lean_box(0), v_snd_5646_);
return v___x_5647_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1(lean_object* v_toPure_5648_, lean_object* v_____do__lift_5649_){
_start:
{
if (lean_obj_tag(v_____do__lift_5649_) == 0)
{
lean_object* v_a_5650_; lean_object* v___x_5652_; uint8_t v_isShared_5653_; uint8_t v_isSharedCheck_5658_; 
v_a_5650_ = lean_ctor_get(v_____do__lift_5649_, 0);
v_isSharedCheck_5658_ = !lean_is_exclusive(v_____do__lift_5649_);
if (v_isSharedCheck_5658_ == 0)
{
v___x_5652_ = v_____do__lift_5649_;
v_isShared_5653_ = v_isSharedCheck_5658_;
goto v_resetjp_5651_;
}
else
{
lean_inc(v_a_5650_);
lean_dec(v_____do__lift_5649_);
v___x_5652_ = lean_box(0);
v_isShared_5653_ = v_isSharedCheck_5658_;
goto v_resetjp_5651_;
}
v_resetjp_5651_:
{
lean_object* v___x_5655_; 
if (v_isShared_5653_ == 0)
{
v___x_5655_ = v___x_5652_;
goto v_reusejp_5654_;
}
else
{
lean_object* v_reuseFailAlloc_5657_; 
v_reuseFailAlloc_5657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5657_, 0, v_a_5650_);
v___x_5655_ = v_reuseFailAlloc_5657_;
goto v_reusejp_5654_;
}
v_reusejp_5654_:
{
lean_object* v___x_5656_; 
v___x_5656_ = lean_apply_2(v_toPure_5648_, lean_box(0), v___x_5655_);
return v___x_5656_;
}
}
}
else
{
lean_object* v_a_5659_; lean_object* v___x_5661_; uint8_t v_isShared_5662_; uint8_t v_isSharedCheck_5669_; 
v_a_5659_ = lean_ctor_get(v_____do__lift_5649_, 0);
v_isSharedCheck_5669_ = !lean_is_exclusive(v_____do__lift_5649_);
if (v_isSharedCheck_5669_ == 0)
{
v___x_5661_ = v_____do__lift_5649_;
v_isShared_5662_ = v_isSharedCheck_5669_;
goto v_resetjp_5660_;
}
else
{
lean_inc(v_a_5659_);
lean_dec(v_____do__lift_5649_);
v___x_5661_ = lean_box(0);
v_isShared_5662_ = v_isSharedCheck_5669_;
goto v_resetjp_5660_;
}
v_resetjp_5660_:
{
lean_object* v___x_5663_; lean_object* v___x_5664_; lean_object* v___x_5666_; 
v___x_5663_ = lean_box(0);
v___x_5664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5664_, 0, v___x_5663_);
lean_ctor_set(v___x_5664_, 1, v_a_5659_);
if (v_isShared_5662_ == 0)
{
lean_ctor_set(v___x_5661_, 0, v___x_5664_);
v___x_5666_ = v___x_5661_;
goto v_reusejp_5665_;
}
else
{
lean_object* v_reuseFailAlloc_5668_; 
v_reuseFailAlloc_5668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5668_, 0, v___x_5664_);
v___x_5666_ = v_reuseFailAlloc_5668_;
goto v_reusejp_5665_;
}
v_reusejp_5665_:
{
lean_object* v___x_5667_; 
v___x_5667_ = lean_apply_2(v_toPure_5648_, lean_box(0), v___x_5666_);
return v___x_5667_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__2(lean_object* v___y_5670_, lean_object* v_toBind_5671_, lean_object* v___f_5672_, lean_object* v_n_5673_, lean_object* v_v_5674_, lean_object* v___y_5675_){
_start:
{
lean_object* v___x_5676_; lean_object* v___x_5677_; lean_object* v___x_5678_; 
v___x_5676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5676_, 0, v_n_5673_);
lean_ctor_set(v___x_5676_, 1, v_v_5674_);
v___x_5677_ = lean_apply_2(v___y_5670_, v___x_5676_, v___y_5675_);
v___x_5678_ = lean_apply_4(v_toBind_5671_, lean_box(0), lean_box(0), v___x_5677_, v___f_5672_);
return v___x_5678_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3(lean_object* v_inst_5679_, lean_object* v_00_u03b2_5680_, lean_object* v___y_5681_, lean_object* v___y_5682_, lean_object* v___y_5683_){
_start:
{
lean_object* v___f_5684_; lean_object* v___f_5685_; lean_object* v___f_5686_; lean_object* v___f_5687_; lean_object* v___x_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___x_5691_; lean_object* v___x_5692_; lean_object* v___x_5693_; lean_object* v___f_5694_; lean_object* v___f_5695_; lean_object* v___f_5696_; lean_object* v___f_5697_; lean_object* v___x_5698_; lean_object* v___x_5699_; lean_object* v___x_5700_; lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; lean_object* v_toApplicative_5704_; lean_object* v_toBind_5705_; lean_object* v_toPure_5706_; lean_object* v___f_5707_; lean_object* v___f_5708_; lean_object* v___f_5709_; lean_object* v___x_136__overap_5710_; lean_object* v___x_5711_; lean_object* v___x_5712_; 
lean_inc_ref_n(v_inst_5679_, 7);
v___f_5684_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_5684_, 0, v_inst_5679_);
v___f_5685_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_5685_, 0, v_inst_5679_);
v___f_5686_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_5686_, 0, v_inst_5679_);
v___f_5687_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_5687_, 0, v_inst_5679_);
v___x_5688_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_5688_, 0, lean_box(0));
lean_closure_set(v___x_5688_, 1, lean_box(0));
lean_closure_set(v___x_5688_, 2, v_inst_5679_);
v___x_5689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5689_, 0, v___x_5688_);
lean_ctor_set(v___x_5689_, 1, v___f_5684_);
v___x_5690_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_5690_, 0, lean_box(0));
lean_closure_set(v___x_5690_, 1, lean_box(0));
lean_closure_set(v___x_5690_, 2, v_inst_5679_);
v___x_5691_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5691_, 0, v___x_5689_);
lean_ctor_set(v___x_5691_, 1, v___x_5690_);
lean_ctor_set(v___x_5691_, 2, v___f_5685_);
lean_ctor_set(v___x_5691_, 3, v___f_5686_);
lean_ctor_set(v___x_5691_, 4, v___f_5687_);
v___x_5692_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_5692_, 0, lean_box(0));
lean_closure_set(v___x_5692_, 1, lean_box(0));
lean_closure_set(v___x_5692_, 2, v_inst_5679_);
v___x_5693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5693_, 0, v___x_5691_);
lean_ctor_set(v___x_5693_, 1, v___x_5692_);
lean_inc_ref_n(v___x_5693_, 6);
v___f_5694_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5694_, 0, v___x_5693_);
v___f_5695_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5695_, 0, v___x_5693_);
v___f_5696_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_5696_, 0, v___x_5693_);
v___f_5697_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_5697_, 0, v___x_5693_);
v___x_5698_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_5698_, 0, lean_box(0));
lean_closure_set(v___x_5698_, 1, lean_box(0));
lean_closure_set(v___x_5698_, 2, v___x_5693_);
v___x_5699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5699_, 0, v___x_5698_);
lean_ctor_set(v___x_5699_, 1, v___f_5694_);
v___x_5700_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_5700_, 0, lean_box(0));
lean_closure_set(v___x_5700_, 1, lean_box(0));
lean_closure_set(v___x_5700_, 2, v___x_5693_);
v___x_5701_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5701_, 0, v___x_5699_);
lean_ctor_set(v___x_5701_, 1, v___x_5700_);
lean_ctor_set(v___x_5701_, 2, v___f_5695_);
lean_ctor_set(v___x_5701_, 3, v___f_5696_);
lean_ctor_set(v___x_5701_, 4, v___f_5697_);
v___x_5702_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_5702_, 0, lean_box(0));
lean_closure_set(v___x_5702_, 1, lean_box(0));
lean_closure_set(v___x_5702_, 2, v___x_5693_);
v___x_5703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5703_, 0, v___x_5701_);
lean_ctor_set(v___x_5703_, 1, v___x_5702_);
v_toApplicative_5704_ = lean_ctor_get(v_inst_5679_, 0);
lean_inc_ref(v_toApplicative_5704_);
v_toBind_5705_ = lean_ctor_get(v_inst_5679_, 1);
lean_inc_n(v_toBind_5705_, 2);
lean_dec_ref(v_inst_5679_);
v_toPure_5706_ = lean_ctor_get(v_toApplicative_5704_, 1);
lean_inc_n(v_toPure_5706_, 2);
lean_dec_ref(v_toApplicative_5704_);
v___f_5707_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0), 2, 1);
lean_closure_set(v___f_5707_, 0, v_toPure_5706_);
v___f_5708_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_5708_, 0, v_toPure_5706_);
v___f_5709_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__2), 6, 3);
lean_closure_set(v___f_5709_, 0, v___y_5683_);
lean_closure_set(v___f_5709_, 1, v_toBind_5705_);
lean_closure_set(v___f_5709_, 2, v___f_5708_);
v___x_136__overap_5710_ = l_Lean_ImportedConsts_forM___redArg(v___x_5703_, v___y_5681_, v___f_5709_);
v___x_5711_ = lean_apply_1(v___x_136__overap_5710_, v___y_5682_);
v___x_5712_ = lean_apply_4(v_toBind_5705_, lean_box(0), lean_box(0), v___x_5711_, v___f_5707_);
return v___x_5712_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg(lean_object* v_inst_5713_){
_start:
{
lean_object* v___f_5714_; 
v___f_5714_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_5714_, 0, v_inst_5713_);
return v___f_5714_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad(lean_object* v_m_5715_, lean_object* v_00_u03b1_5716_, lean_object* v_inst_5717_){
_start:
{
lean_object* v___f_5718_; 
v___f_5718_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_5718_, 0, v_inst_5717_);
return v___f_5718_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap___closed__0(void){
_start:
{
lean_object* v___x_5719_; 
v___x_5719_ = l_Lean_ImportedConsts_empty(lean_box(0));
return v___x_5719_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap___closed__1(void){
_start:
{
lean_object* v___x_5720_; 
v___x_5720_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_5720_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap___closed__2(void){
_start:
{
lean_object* v___x_5721_; lean_object* v___x_5722_; 
v___x_5721_ = lean_obj_once(&l_Lean_instInhabitedConstMap___closed__1, &l_Lean_instInhabitedConstMap___closed__1_once, _init_l_Lean_instInhabitedConstMap___closed__1);
v___x_5722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5722_, 0, v___x_5721_);
return v___x_5722_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap___closed__3(void){
_start:
{
lean_object* v___x_5723_; lean_object* v___x_5724_; lean_object* v___x_5725_; 
v___x_5723_ = lean_obj_once(&l_Lean_instInhabitedConstMap___closed__2, &l_Lean_instInhabitedConstMap___closed__2_once, _init_l_Lean_instInhabitedConstMap___closed__2);
v___x_5724_ = lean_obj_once(&l_Lean_instInhabitedConstMap___closed__0, &l_Lean_instInhabitedConstMap___closed__0_once, _init_l_Lean_instInhabitedConstMap___closed__0);
v___x_5725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5725_, 0, v___x_5724_);
lean_ctor_set(v___x_5725_, 1, v___x_5723_);
return v___x_5725_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap(void){
_start:
{
lean_object* v___x_5726_; 
v___x_5726_ = lean_obj_once(&l_Lean_instInhabitedConstMap___closed__3, &l_Lean_instInhabitedConstMap___closed__3_once, _init_l_Lean_instInhabitedConstMap___closed__3);
return v___x_5726_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_5727_, lean_object* v_vals_5728_, lean_object* v_i_5729_, lean_object* v_k_5730_){
_start:
{
lean_object* v___x_5731_; uint8_t v___x_5732_; 
v___x_5731_ = lean_array_get_size(v_keys_5727_);
v___x_5732_ = lean_nat_dec_lt(v_i_5729_, v___x_5731_);
if (v___x_5732_ == 0)
{
lean_object* v___x_5733_; 
lean_dec(v_i_5729_);
v___x_5733_ = lean_box(0);
return v___x_5733_;
}
else
{
lean_object* v_k_x27_5734_; uint8_t v___x_5735_; 
v_k_x27_5734_ = lean_array_fget_borrowed(v_keys_5727_, v_i_5729_);
v___x_5735_ = lean_name_eq(v_k_5730_, v_k_x27_5734_);
if (v___x_5735_ == 0)
{
lean_object* v___x_5736_; lean_object* v___x_5737_; 
v___x_5736_ = lean_unsigned_to_nat(1u);
v___x_5737_ = lean_nat_add(v_i_5729_, v___x_5736_);
lean_dec(v_i_5729_);
v_i_5729_ = v___x_5737_;
goto _start;
}
else
{
lean_object* v___x_5739_; lean_object* v___x_5740_; 
v___x_5739_ = lean_array_fget_borrowed(v_vals_5728_, v_i_5729_);
lean_dec(v_i_5729_);
lean_inc(v___x_5739_);
v___x_5740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5740_, 0, v___x_5739_);
return v___x_5740_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_5741_, lean_object* v_vals_5742_, lean_object* v_i_5743_, lean_object* v_k_5744_){
_start:
{
lean_object* v_res_5745_; 
v_res_5745_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_5741_, v_vals_5742_, v_i_5743_, v_k_5744_);
lean_dec(v_k_5744_);
lean_dec_ref(v_vals_5742_);
lean_dec_ref(v_keys_5741_);
return v_res_5745_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(lean_object* v_x_5746_, size_t v_x_5747_, lean_object* v_x_5748_){
_start:
{
if (lean_obj_tag(v_x_5746_) == 0)
{
lean_object* v_es_5749_; lean_object* v___x_5750_; size_t v___x_5751_; size_t v___x_5752_; lean_object* v_j_5753_; lean_object* v___x_5754_; 
v_es_5749_ = lean_ctor_get(v_x_5746_, 0);
v___x_5750_ = lean_box(2);
v___x_5751_ = ((size_t)31ULL);
v___x_5752_ = lean_usize_land(v_x_5747_, v___x_5751_);
v_j_5753_ = lean_usize_to_nat(v___x_5752_);
v___x_5754_ = lean_array_get_borrowed(v___x_5750_, v_es_5749_, v_j_5753_);
lean_dec(v_j_5753_);
switch(lean_obj_tag(v___x_5754_))
{
case 0:
{
lean_object* v_key_5755_; lean_object* v_val_5756_; uint8_t v___x_5757_; 
v_key_5755_ = lean_ctor_get(v___x_5754_, 0);
v_val_5756_ = lean_ctor_get(v___x_5754_, 1);
v___x_5757_ = lean_name_eq(v_x_5748_, v_key_5755_);
if (v___x_5757_ == 0)
{
lean_object* v___x_5758_; 
v___x_5758_ = lean_box(0);
return v___x_5758_;
}
else
{
lean_object* v___x_5759_; 
lean_inc(v_val_5756_);
v___x_5759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5759_, 0, v_val_5756_);
return v___x_5759_;
}
}
case 1:
{
lean_object* v_node_5760_; size_t v___x_5761_; size_t v___x_5762_; 
v_node_5760_ = lean_ctor_get(v___x_5754_, 0);
v___x_5761_ = ((size_t)5ULL);
v___x_5762_ = lean_usize_shift_right(v_x_5747_, v___x_5761_);
v_x_5746_ = v_node_5760_;
v_x_5747_ = v___x_5762_;
goto _start;
}
default: 
{
lean_object* v___x_5764_; 
v___x_5764_ = lean_box(0);
return v___x_5764_;
}
}
}
else
{
lean_object* v_ks_5765_; lean_object* v_vs_5766_; lean_object* v___x_5767_; lean_object* v___x_5768_; 
v_ks_5765_ = lean_ctor_get(v_x_5746_, 0);
v_vs_5766_ = lean_ctor_get(v_x_5746_, 1);
v___x_5767_ = lean_unsigned_to_nat(0u);
v___x_5768_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_ks_5765_, v_vs_5766_, v___x_5767_, v_x_5748_);
return v___x_5768_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_5769_, lean_object* v_x_5770_, lean_object* v_x_5771_){
_start:
{
size_t v_x_164__boxed_5772_; lean_object* v_res_5773_; 
v_x_164__boxed_5772_ = lean_unbox_usize(v_x_5770_);
lean_dec(v_x_5770_);
v_res_5773_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(v_x_5769_, v_x_164__boxed_5772_, v_x_5771_);
lean_dec(v_x_5771_);
lean_dec_ref(v_x_5769_);
return v_res_5773_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(lean_object* v_x_5774_, lean_object* v_x_5775_){
_start:
{
uint64_t v___y_5777_; 
if (lean_obj_tag(v_x_5775_) == 0)
{
uint64_t v___x_5780_; 
v___x_5780_ = 1723ULL;
v___y_5777_ = v___x_5780_;
goto v___jp_5776_;
}
else
{
uint64_t v_hash_5781_; 
v_hash_5781_ = lean_ctor_get_uint64(v_x_5775_, sizeof(void*)*2);
v___y_5777_ = v_hash_5781_;
goto v___jp_5776_;
}
v___jp_5776_:
{
size_t v___x_5778_; lean_object* v___x_5779_; 
v___x_5778_ = lean_uint64_to_usize(v___y_5777_);
v___x_5779_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(v_x_5774_, v___x_5778_, v_x_5775_);
return v___x_5779_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg___boxed(lean_object* v_x_5782_, lean_object* v_x_5783_){
_start:
{
lean_object* v_res_5784_; 
v_res_5784_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_x_5782_, v_x_5783_);
lean_dec(v_x_5783_);
lean_dec_ref(v_x_5782_);
return v_res_5784_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f(lean_object* v_m_5785_, lean_object* v_n_5786_){
_start:
{
lean_object* v_map_u2081_5787_; lean_object* v_map_u2082_5788_; lean_object* v___x_5789_; 
v_map_u2081_5787_ = lean_ctor_get(v_m_5785_, 0);
v_map_u2082_5788_ = lean_ctor_get(v_m_5785_, 1);
v___x_5789_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_map_u2082_5788_, v_n_5786_);
if (lean_obj_tag(v___x_5789_) == 0)
{
lean_object* v___x_5790_; 
v___x_5790_ = lean_imported_consts_find_entry_cached(v_map_u2081_5787_, v_n_5786_);
if (lean_obj_tag(v___x_5790_) == 0)
{
return v___x_5789_;
}
else
{
lean_object* v_val_5791_; lean_object* v___x_5793_; uint8_t v_isShared_5794_; uint8_t v_isSharedCheck_5799_; 
v_val_5791_ = lean_ctor_get(v___x_5790_, 0);
v_isSharedCheck_5799_ = !lean_is_exclusive(v___x_5790_);
if (v_isSharedCheck_5799_ == 0)
{
v___x_5793_ = v___x_5790_;
v_isShared_5794_ = v_isSharedCheck_5799_;
goto v_resetjp_5792_;
}
else
{
lean_inc(v_val_5791_);
lean_dec(v___x_5790_);
v___x_5793_ = lean_box(0);
v_isShared_5794_ = v_isSharedCheck_5799_;
goto v_resetjp_5792_;
}
v_resetjp_5792_:
{
lean_object* v_fst_5795_; lean_object* v___x_5797_; 
v_fst_5795_ = lean_ctor_get(v_val_5791_, 0);
lean_inc(v_fst_5795_);
lean_dec(v_val_5791_);
if (v_isShared_5794_ == 0)
{
lean_ctor_set(v___x_5793_, 0, v_fst_5795_);
v___x_5797_ = v___x_5793_;
goto v_reusejp_5796_;
}
else
{
lean_object* v_reuseFailAlloc_5798_; 
v_reuseFailAlloc_5798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5798_, 0, v_fst_5795_);
v___x_5797_ = v_reuseFailAlloc_5798_;
goto v_reusejp_5796_;
}
v_reusejp_5796_:
{
return v___x_5797_;
}
}
}
}
else
{
return v___x_5789_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f___boxed(lean_object* v_m_5800_, lean_object* v_n_5801_){
_start:
{
lean_object* v_res_5802_; 
v_res_5802_ = l_Lean_ConstMap_find_x3f(v_m_5800_, v_n_5801_);
lean_dec(v_n_5801_);
lean_dec_ref(v_m_5800_);
return v_res_5802_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0(lean_object* v_00_u03b2_5803_, lean_object* v_x_5804_, lean_object* v_x_5805_){
_start:
{
lean_object* v___x_5806_; 
v___x_5806_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_x_5804_, v_x_5805_);
return v___x_5806_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___boxed(lean_object* v_00_u03b2_5807_, lean_object* v_x_5808_, lean_object* v_x_5809_){
_start:
{
lean_object* v_res_5810_; 
v_res_5810_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0(v_00_u03b2_5807_, v_x_5808_, v_x_5809_);
lean_dec(v_x_5809_);
lean_dec_ref(v_x_5808_);
return v_res_5810_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0(lean_object* v_00_u03b2_5811_, lean_object* v_x_5812_, size_t v_x_5813_, lean_object* v_x_5814_){
_start:
{
lean_object* v___x_5815_; 
v___x_5815_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(v_x_5812_, v_x_5813_, v_x_5814_);
return v___x_5815_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5816_, lean_object* v_x_5817_, lean_object* v_x_5818_, lean_object* v_x_5819_){
_start:
{
size_t v_x_259__boxed_5820_; lean_object* v_res_5821_; 
v_x_259__boxed_5820_ = lean_unbox_usize(v_x_5818_);
lean_dec(v_x_5818_);
v_res_5821_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0(v_00_u03b2_5816_, v_x_5817_, v_x_259__boxed_5820_, v_x_5819_);
lean_dec(v_x_5819_);
lean_dec_ref(v_x_5817_);
return v_res_5821_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5822_, lean_object* v_keys_5823_, lean_object* v_vals_5824_, lean_object* v_heq_5825_, lean_object* v_i_5826_, lean_object* v_k_5827_){
_start:
{
lean_object* v___x_5828_; 
v___x_5828_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_5823_, v_vals_5824_, v_i_5826_, v_k_5827_);
return v___x_5828_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5829_, lean_object* v_keys_5830_, lean_object* v_vals_5831_, lean_object* v_heq_5832_, lean_object* v_i_5833_, lean_object* v_k_5834_){
_start:
{
lean_object* v_res_5835_; 
v_res_5835_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1(v_00_u03b2_5829_, v_keys_5830_, v_vals_5831_, v_heq_5832_, v_i_5833_, v_k_5834_);
lean_dec(v_k_5834_);
lean_dec_ref(v_vals_5831_);
lean_dec_ref(v_keys_5830_);
return v_res_5835_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f_x27(lean_object* v_m_5836_, lean_object* v_n_5837_){
_start:
{
lean_object* v_map_u2081_5838_; lean_object* v_map_u2082_5839_; lean_object* v___x_5840_; 
v_map_u2081_5838_ = lean_ctor_get(v_m_5836_, 0);
v_map_u2082_5839_ = lean_ctor_get(v_m_5836_, 1);
v___x_5840_ = lean_imported_consts_find_entry_cached(v_map_u2081_5838_, v_n_5837_);
if (lean_obj_tag(v___x_5840_) == 0)
{
lean_object* v___x_5841_; 
v___x_5841_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_map_u2082_5839_, v_n_5837_);
return v___x_5841_;
}
else
{
lean_object* v_val_5842_; lean_object* v___x_5844_; uint8_t v_isShared_5845_; uint8_t v_isSharedCheck_5850_; 
v_val_5842_ = lean_ctor_get(v___x_5840_, 0);
v_isSharedCheck_5850_ = !lean_is_exclusive(v___x_5840_);
if (v_isSharedCheck_5850_ == 0)
{
v___x_5844_ = v___x_5840_;
v_isShared_5845_ = v_isSharedCheck_5850_;
goto v_resetjp_5843_;
}
else
{
lean_inc(v_val_5842_);
lean_dec(v___x_5840_);
v___x_5844_ = lean_box(0);
v_isShared_5845_ = v_isSharedCheck_5850_;
goto v_resetjp_5843_;
}
v_resetjp_5843_:
{
lean_object* v_fst_5846_; lean_object* v___x_5848_; 
v_fst_5846_ = lean_ctor_get(v_val_5842_, 0);
lean_inc(v_fst_5846_);
lean_dec(v_val_5842_);
if (v_isShared_5845_ == 0)
{
lean_ctor_set(v___x_5844_, 0, v_fst_5846_);
v___x_5848_ = v___x_5844_;
goto v_reusejp_5847_;
}
else
{
lean_object* v_reuseFailAlloc_5849_; 
v_reuseFailAlloc_5849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5849_, 0, v_fst_5846_);
v___x_5848_ = v_reuseFailAlloc_5849_;
goto v_reusejp_5847_;
}
v_reusejp_5847_:
{
return v___x_5848_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f_x27___boxed(lean_object* v_m_5851_, lean_object* v_n_5852_){
_start:
{
lean_object* v_res_5853_; 
v_res_5853_ = l_Lean_ConstMap_find_x3f_x27(v_m_5851_, v_n_5852_);
lean_dec(v_n_5852_);
lean_dec_ref(v_m_5851_);
return v_res_5853_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_5854_, lean_object* v_i_5855_, lean_object* v_k_5856_){
_start:
{
lean_object* v___x_5857_; uint8_t v___x_5858_; 
v___x_5857_ = lean_array_get_size(v_keys_5854_);
v___x_5858_ = lean_nat_dec_lt(v_i_5855_, v___x_5857_);
if (v___x_5858_ == 0)
{
lean_dec(v_i_5855_);
return v___x_5858_;
}
else
{
lean_object* v_k_x27_5859_; uint8_t v___x_5860_; 
v_k_x27_5859_ = lean_array_fget_borrowed(v_keys_5854_, v_i_5855_);
v___x_5860_ = lean_name_eq(v_k_5856_, v_k_x27_5859_);
if (v___x_5860_ == 0)
{
lean_object* v___x_5861_; lean_object* v___x_5862_; 
v___x_5861_ = lean_unsigned_to_nat(1u);
v___x_5862_ = lean_nat_add(v_i_5855_, v___x_5861_);
lean_dec(v_i_5855_);
v_i_5855_ = v___x_5862_;
goto _start;
}
else
{
lean_dec(v_i_5855_);
return v___x_5860_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_5864_, lean_object* v_i_5865_, lean_object* v_k_5866_){
_start:
{
uint8_t v_res_5867_; lean_object* v_r_5868_; 
v_res_5867_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(v_keys_5864_, v_i_5865_, v_k_5866_);
lean_dec(v_k_5866_);
lean_dec_ref(v_keys_5864_);
v_r_5868_ = lean_box(v_res_5867_);
return v_r_5868_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(lean_object* v_x_5869_, size_t v_x_5870_, lean_object* v_x_5871_){
_start:
{
if (lean_obj_tag(v_x_5869_) == 0)
{
lean_object* v_es_5872_; lean_object* v___x_5873_; size_t v___x_5874_; size_t v___x_5875_; lean_object* v_j_5876_; lean_object* v___x_5877_; 
v_es_5872_ = lean_ctor_get(v_x_5869_, 0);
v___x_5873_ = lean_box(2);
v___x_5874_ = ((size_t)31ULL);
v___x_5875_ = lean_usize_land(v_x_5870_, v___x_5874_);
v_j_5876_ = lean_usize_to_nat(v___x_5875_);
v___x_5877_ = lean_array_get_borrowed(v___x_5873_, v_es_5872_, v_j_5876_);
lean_dec(v_j_5876_);
switch(lean_obj_tag(v___x_5877_))
{
case 0:
{
lean_object* v_key_5878_; uint8_t v___x_5879_; 
v_key_5878_ = lean_ctor_get(v___x_5877_, 0);
v___x_5879_ = lean_name_eq(v_x_5871_, v_key_5878_);
return v___x_5879_;
}
case 1:
{
lean_object* v_node_5880_; size_t v___x_5881_; size_t v___x_5882_; 
v_node_5880_ = lean_ctor_get(v___x_5877_, 0);
v___x_5881_ = ((size_t)5ULL);
v___x_5882_ = lean_usize_shift_right(v_x_5870_, v___x_5881_);
v_x_5869_ = v_node_5880_;
v_x_5870_ = v___x_5882_;
goto _start;
}
default: 
{
uint8_t v___x_5884_; 
v___x_5884_ = 0;
return v___x_5884_;
}
}
}
else
{
lean_object* v_ks_5885_; lean_object* v___x_5886_; uint8_t v___x_5887_; 
v_ks_5885_ = lean_ctor_get(v_x_5869_, 0);
v___x_5886_ = lean_unsigned_to_nat(0u);
v___x_5887_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(v_ks_5885_, v___x_5886_, v_x_5871_);
return v___x_5887_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg___boxed(lean_object* v_x_5888_, lean_object* v_x_5889_, lean_object* v_x_5890_){
_start:
{
size_t v_x_170__boxed_5891_; uint8_t v_res_5892_; lean_object* v_r_5893_; 
v_x_170__boxed_5891_ = lean_unbox_usize(v_x_5889_);
lean_dec(v_x_5889_);
v_res_5892_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(v_x_5888_, v_x_170__boxed_5891_, v_x_5890_);
lean_dec(v_x_5890_);
lean_dec_ref(v_x_5888_);
v_r_5893_ = lean_box(v_res_5892_);
return v_r_5893_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(lean_object* v_x_5894_, lean_object* v_x_5895_){
_start:
{
uint64_t v___y_5897_; 
if (lean_obj_tag(v_x_5895_) == 0)
{
uint64_t v___x_5900_; 
v___x_5900_ = 1723ULL;
v___y_5897_ = v___x_5900_;
goto v___jp_5896_;
}
else
{
uint64_t v_hash_5901_; 
v_hash_5901_ = lean_ctor_get_uint64(v_x_5895_, sizeof(void*)*2);
v___y_5897_ = v_hash_5901_;
goto v___jp_5896_;
}
v___jp_5896_:
{
size_t v___x_5898_; uint8_t v___x_5899_; 
v___x_5898_ = lean_uint64_to_usize(v___y_5897_);
v___x_5899_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(v_x_5894_, v___x_5898_, v_x_5895_);
return v___x_5899_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg___boxed(lean_object* v_x_5902_, lean_object* v_x_5903_){
_start:
{
uint8_t v_res_5904_; lean_object* v_r_5905_; 
v_res_5904_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(v_x_5902_, v_x_5903_);
lean_dec(v_x_5903_);
lean_dec_ref(v_x_5902_);
v_r_5905_ = lean_box(v_res_5904_);
return v_r_5905_;
}
}
LEAN_EXPORT uint8_t l_Lean_ConstMap_contains(lean_object* v_m_5906_, lean_object* v_n_5907_){
_start:
{
lean_object* v_map_u2081_5908_; lean_object* v_map_u2082_5909_; uint8_t v___x_5910_; 
v_map_u2081_5908_ = lean_ctor_get(v_m_5906_, 0);
v_map_u2082_5909_ = lean_ctor_get(v_m_5906_, 1);
v___x_5910_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(v_map_u2082_5909_, v_n_5907_);
if (v___x_5910_ == 0)
{
lean_object* v___x_5911_; 
v___x_5911_ = lean_imported_consts_find_entry_cached(v_map_u2081_5908_, v_n_5907_);
if (lean_obj_tag(v___x_5911_) == 0)
{
return v___x_5910_;
}
else
{
uint8_t v___x_5912_; 
lean_dec_ref_known(v___x_5911_, 1);
v___x_5912_ = 1;
return v___x_5912_;
}
}
else
{
return v___x_5910_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_contains___boxed(lean_object* v_m_5913_, lean_object* v_n_5914_){
_start:
{
uint8_t v_res_5915_; lean_object* v_r_5916_; 
v_res_5915_ = l_Lean_ConstMap_contains(v_m_5913_, v_n_5914_);
lean_dec(v_n_5914_);
lean_dec_ref(v_m_5913_);
v_r_5916_ = lean_box(v_res_5915_);
return v_r_5916_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0(lean_object* v_00_u03b2_5917_, lean_object* v_x_5918_, lean_object* v_x_5919_){
_start:
{
uint8_t v___x_5920_; 
v___x_5920_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(v_x_5918_, v_x_5919_);
return v___x_5920_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___boxed(lean_object* v_00_u03b2_5921_, lean_object* v_x_5922_, lean_object* v_x_5923_){
_start:
{
uint8_t v_res_5924_; lean_object* v_r_5925_; 
v_res_5924_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0(v_00_u03b2_5921_, v_x_5922_, v_x_5923_);
lean_dec(v_x_5923_);
lean_dec_ref(v_x_5922_);
v_r_5925_ = lean_box(v_res_5924_);
return v_r_5925_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0(lean_object* v_00_u03b2_5926_, lean_object* v_x_5927_, size_t v_x_5928_, lean_object* v_x_5929_){
_start:
{
uint8_t v___x_5930_; 
v___x_5930_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(v_x_5927_, v_x_5928_, v_x_5929_);
return v___x_5930_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5931_, lean_object* v_x_5932_, lean_object* v_x_5933_, lean_object* v_x_5934_){
_start:
{
size_t v_x_242__boxed_5935_; uint8_t v_res_5936_; lean_object* v_r_5937_; 
v_x_242__boxed_5935_ = lean_unbox_usize(v_x_5933_);
lean_dec(v_x_5933_);
v_res_5936_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0(v_00_u03b2_5931_, v_x_5932_, v_x_242__boxed_5935_, v_x_5934_);
lean_dec(v_x_5934_);
lean_dec_ref(v_x_5932_);
v_r_5937_ = lean_box(v_res_5936_);
return v_r_5937_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5938_, lean_object* v_keys_5939_, lean_object* v_vals_5940_, lean_object* v_heq_5941_, lean_object* v_i_5942_, lean_object* v_k_5943_){
_start:
{
uint8_t v___x_5944_; 
v___x_5944_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(v_keys_5939_, v_i_5942_, v_k_5943_);
return v___x_5944_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5945_, lean_object* v_keys_5946_, lean_object* v_vals_5947_, lean_object* v_heq_5948_, lean_object* v_i_5949_, lean_object* v_k_5950_){
_start:
{
uint8_t v_res_5951_; lean_object* v_r_5952_; 
v_res_5951_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1(v_00_u03b2_5945_, v_keys_5946_, v_vals_5947_, v_heq_5948_, v_i_5949_, v_k_5950_);
lean_dec(v_k_5950_);
lean_dec_ref(v_vals_5947_);
lean_dec_ref(v_keys_5946_);
v_r_5952_ = lean_box(v_res_5951_);
return v_r_5952_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_5953_, lean_object* v_x_5954_, lean_object* v_x_5955_, lean_object* v_x_5956_){
_start:
{
lean_object* v_ks_5957_; lean_object* v_vs_5958_; lean_object* v___x_5960_; uint8_t v_isShared_5961_; uint8_t v_isSharedCheck_5982_; 
v_ks_5957_ = lean_ctor_get(v_x_5953_, 0);
v_vs_5958_ = lean_ctor_get(v_x_5953_, 1);
v_isSharedCheck_5982_ = !lean_is_exclusive(v_x_5953_);
if (v_isSharedCheck_5982_ == 0)
{
v___x_5960_ = v_x_5953_;
v_isShared_5961_ = v_isSharedCheck_5982_;
goto v_resetjp_5959_;
}
else
{
lean_inc(v_vs_5958_);
lean_inc(v_ks_5957_);
lean_dec(v_x_5953_);
v___x_5960_ = lean_box(0);
v_isShared_5961_ = v_isSharedCheck_5982_;
goto v_resetjp_5959_;
}
v_resetjp_5959_:
{
lean_object* v___x_5962_; uint8_t v___x_5963_; 
v___x_5962_ = lean_array_get_size(v_ks_5957_);
v___x_5963_ = lean_nat_dec_lt(v_x_5954_, v___x_5962_);
if (v___x_5963_ == 0)
{
lean_object* v___x_5964_; lean_object* v___x_5965_; lean_object* v___x_5967_; 
lean_dec(v_x_5954_);
v___x_5964_ = lean_array_push(v_ks_5957_, v_x_5955_);
v___x_5965_ = lean_array_push(v_vs_5958_, v_x_5956_);
if (v_isShared_5961_ == 0)
{
lean_ctor_set(v___x_5960_, 1, v___x_5965_);
lean_ctor_set(v___x_5960_, 0, v___x_5964_);
v___x_5967_ = v___x_5960_;
goto v_reusejp_5966_;
}
else
{
lean_object* v_reuseFailAlloc_5968_; 
v_reuseFailAlloc_5968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5968_, 0, v___x_5964_);
lean_ctor_set(v_reuseFailAlloc_5968_, 1, v___x_5965_);
v___x_5967_ = v_reuseFailAlloc_5968_;
goto v_reusejp_5966_;
}
v_reusejp_5966_:
{
return v___x_5967_;
}
}
else
{
lean_object* v_k_x27_5969_; uint8_t v___x_5970_; 
v_k_x27_5969_ = lean_array_fget_borrowed(v_ks_5957_, v_x_5954_);
v___x_5970_ = lean_name_eq(v_x_5955_, v_k_x27_5969_);
if (v___x_5970_ == 0)
{
lean_object* v___x_5972_; 
if (v_isShared_5961_ == 0)
{
v___x_5972_ = v___x_5960_;
goto v_reusejp_5971_;
}
else
{
lean_object* v_reuseFailAlloc_5976_; 
v_reuseFailAlloc_5976_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5976_, 0, v_ks_5957_);
lean_ctor_set(v_reuseFailAlloc_5976_, 1, v_vs_5958_);
v___x_5972_ = v_reuseFailAlloc_5976_;
goto v_reusejp_5971_;
}
v_reusejp_5971_:
{
lean_object* v___x_5973_; lean_object* v___x_5974_; 
v___x_5973_ = lean_unsigned_to_nat(1u);
v___x_5974_ = lean_nat_add(v_x_5954_, v___x_5973_);
lean_dec(v_x_5954_);
v_x_5953_ = v___x_5972_;
v_x_5954_ = v___x_5974_;
goto _start;
}
}
else
{
lean_object* v___x_5977_; lean_object* v___x_5978_; lean_object* v___x_5980_; 
v___x_5977_ = lean_array_fset(v_ks_5957_, v_x_5954_, v_x_5955_);
v___x_5978_ = lean_array_fset(v_vs_5958_, v_x_5954_, v_x_5956_);
lean_dec(v_x_5954_);
if (v_isShared_5961_ == 0)
{
lean_ctor_set(v___x_5960_, 1, v___x_5978_);
lean_ctor_set(v___x_5960_, 0, v___x_5977_);
v___x_5980_ = v___x_5960_;
goto v_reusejp_5979_;
}
else
{
lean_object* v_reuseFailAlloc_5981_; 
v_reuseFailAlloc_5981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5981_, 0, v___x_5977_);
lean_ctor_set(v_reuseFailAlloc_5981_, 1, v___x_5978_);
v___x_5980_ = v_reuseFailAlloc_5981_;
goto v_reusejp_5979_;
}
v_reusejp_5979_:
{
return v___x_5980_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1___redArg(lean_object* v_n_5983_, lean_object* v_k_5984_, lean_object* v_v_5985_){
_start:
{
lean_object* v___x_5986_; lean_object* v___x_5987_; 
v___x_5986_ = lean_unsigned_to_nat(0u);
v___x_5987_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_n_5983_, v___x_5986_, v_k_5984_, v_v_5985_);
return v___x_5987_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_5988_; 
v___x_5988_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_5988_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(lean_object* v_x_5989_, size_t v_x_5990_, size_t v_x_5991_, lean_object* v_x_5992_, lean_object* v_x_5993_){
_start:
{
if (lean_obj_tag(v_x_5989_) == 0)
{
lean_object* v_es_5994_; size_t v___x_5995_; size_t v___x_5996_; lean_object* v_j_5997_; lean_object* v___x_5998_; uint8_t v___x_5999_; 
v_es_5994_ = lean_ctor_get(v_x_5989_, 0);
v___x_5995_ = ((size_t)31ULL);
v___x_5996_ = lean_usize_land(v_x_5990_, v___x_5995_);
v_j_5997_ = lean_usize_to_nat(v___x_5996_);
v___x_5998_ = lean_array_get_size(v_es_5994_);
v___x_5999_ = lean_nat_dec_lt(v_j_5997_, v___x_5998_);
if (v___x_5999_ == 0)
{
lean_dec(v_j_5997_);
lean_dec(v_x_5993_);
lean_dec(v_x_5992_);
return v_x_5989_;
}
else
{
lean_object* v___x_6001_; uint8_t v_isShared_6002_; uint8_t v_isSharedCheck_6038_; 
lean_inc_ref(v_es_5994_);
v_isSharedCheck_6038_ = !lean_is_exclusive(v_x_5989_);
if (v_isSharedCheck_6038_ == 0)
{
lean_object* v_unused_6039_; 
v_unused_6039_ = lean_ctor_get(v_x_5989_, 0);
lean_dec(v_unused_6039_);
v___x_6001_ = v_x_5989_;
v_isShared_6002_ = v_isSharedCheck_6038_;
goto v_resetjp_6000_;
}
else
{
lean_dec(v_x_5989_);
v___x_6001_ = lean_box(0);
v_isShared_6002_ = v_isSharedCheck_6038_;
goto v_resetjp_6000_;
}
v_resetjp_6000_:
{
lean_object* v_v_6003_; lean_object* v___x_6004_; lean_object* v_xs_x27_6005_; lean_object* v___y_6007_; 
v_v_6003_ = lean_array_fget(v_es_5994_, v_j_5997_);
v___x_6004_ = lean_box(0);
v_xs_x27_6005_ = lean_array_fset(v_es_5994_, v_j_5997_, v___x_6004_);
switch(lean_obj_tag(v_v_6003_))
{
case 0:
{
lean_object* v_key_6012_; lean_object* v_val_6013_; lean_object* v___x_6015_; uint8_t v_isShared_6016_; uint8_t v_isSharedCheck_6023_; 
v_key_6012_ = lean_ctor_get(v_v_6003_, 0);
v_val_6013_ = lean_ctor_get(v_v_6003_, 1);
v_isSharedCheck_6023_ = !lean_is_exclusive(v_v_6003_);
if (v_isSharedCheck_6023_ == 0)
{
v___x_6015_ = v_v_6003_;
v_isShared_6016_ = v_isSharedCheck_6023_;
goto v_resetjp_6014_;
}
else
{
lean_inc(v_val_6013_);
lean_inc(v_key_6012_);
lean_dec(v_v_6003_);
v___x_6015_ = lean_box(0);
v_isShared_6016_ = v_isSharedCheck_6023_;
goto v_resetjp_6014_;
}
v_resetjp_6014_:
{
uint8_t v___x_6017_; 
v___x_6017_ = lean_name_eq(v_x_5992_, v_key_6012_);
if (v___x_6017_ == 0)
{
lean_object* v___x_6018_; lean_object* v___x_6019_; 
lean_del_object(v___x_6015_);
v___x_6018_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_6012_, v_val_6013_, v_x_5992_, v_x_5993_);
v___x_6019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6019_, 0, v___x_6018_);
v___y_6007_ = v___x_6019_;
goto v___jp_6006_;
}
else
{
lean_object* v___x_6021_; 
lean_dec(v_val_6013_);
lean_dec(v_key_6012_);
if (v_isShared_6016_ == 0)
{
lean_ctor_set(v___x_6015_, 1, v_x_5993_);
lean_ctor_set(v___x_6015_, 0, v_x_5992_);
v___x_6021_ = v___x_6015_;
goto v_reusejp_6020_;
}
else
{
lean_object* v_reuseFailAlloc_6022_; 
v_reuseFailAlloc_6022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6022_, 0, v_x_5992_);
lean_ctor_set(v_reuseFailAlloc_6022_, 1, v_x_5993_);
v___x_6021_ = v_reuseFailAlloc_6022_;
goto v_reusejp_6020_;
}
v_reusejp_6020_:
{
v___y_6007_ = v___x_6021_;
goto v___jp_6006_;
}
}
}
}
case 1:
{
lean_object* v_node_6024_; lean_object* v___x_6026_; uint8_t v_isShared_6027_; uint8_t v_isSharedCheck_6036_; 
v_node_6024_ = lean_ctor_get(v_v_6003_, 0);
v_isSharedCheck_6036_ = !lean_is_exclusive(v_v_6003_);
if (v_isSharedCheck_6036_ == 0)
{
v___x_6026_ = v_v_6003_;
v_isShared_6027_ = v_isSharedCheck_6036_;
goto v_resetjp_6025_;
}
else
{
lean_inc(v_node_6024_);
lean_dec(v_v_6003_);
v___x_6026_ = lean_box(0);
v_isShared_6027_ = v_isSharedCheck_6036_;
goto v_resetjp_6025_;
}
v_resetjp_6025_:
{
size_t v___x_6028_; size_t v___x_6029_; size_t v___x_6030_; size_t v___x_6031_; lean_object* v___x_6032_; lean_object* v___x_6034_; 
v___x_6028_ = ((size_t)5ULL);
v___x_6029_ = lean_usize_shift_right(v_x_5990_, v___x_6028_);
v___x_6030_ = ((size_t)1ULL);
v___x_6031_ = lean_usize_add(v_x_5991_, v___x_6030_);
v___x_6032_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_node_6024_, v___x_6029_, v___x_6031_, v_x_5992_, v_x_5993_);
if (v_isShared_6027_ == 0)
{
lean_ctor_set(v___x_6026_, 0, v___x_6032_);
v___x_6034_ = v___x_6026_;
goto v_reusejp_6033_;
}
else
{
lean_object* v_reuseFailAlloc_6035_; 
v_reuseFailAlloc_6035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6035_, 0, v___x_6032_);
v___x_6034_ = v_reuseFailAlloc_6035_;
goto v_reusejp_6033_;
}
v_reusejp_6033_:
{
v___y_6007_ = v___x_6034_;
goto v___jp_6006_;
}
}
}
default: 
{
lean_object* v___x_6037_; 
v___x_6037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6037_, 0, v_x_5992_);
lean_ctor_set(v___x_6037_, 1, v_x_5993_);
v___y_6007_ = v___x_6037_;
goto v___jp_6006_;
}
}
v___jp_6006_:
{
lean_object* v___x_6008_; lean_object* v___x_6010_; 
v___x_6008_ = lean_array_fset(v_xs_x27_6005_, v_j_5997_, v___y_6007_);
lean_dec(v_j_5997_);
if (v_isShared_6002_ == 0)
{
lean_ctor_set(v___x_6001_, 0, v___x_6008_);
v___x_6010_ = v___x_6001_;
goto v_reusejp_6009_;
}
else
{
lean_object* v_reuseFailAlloc_6011_; 
v_reuseFailAlloc_6011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6011_, 0, v___x_6008_);
v___x_6010_ = v_reuseFailAlloc_6011_;
goto v_reusejp_6009_;
}
v_reusejp_6009_:
{
return v___x_6010_;
}
}
}
}
}
else
{
lean_object* v_ks_6040_; lean_object* v_vs_6041_; lean_object* v___x_6043_; uint8_t v_isShared_6044_; uint8_t v_isSharedCheck_6061_; 
v_ks_6040_ = lean_ctor_get(v_x_5989_, 0);
v_vs_6041_ = lean_ctor_get(v_x_5989_, 1);
v_isSharedCheck_6061_ = !lean_is_exclusive(v_x_5989_);
if (v_isSharedCheck_6061_ == 0)
{
v___x_6043_ = v_x_5989_;
v_isShared_6044_ = v_isSharedCheck_6061_;
goto v_resetjp_6042_;
}
else
{
lean_inc(v_vs_6041_);
lean_inc(v_ks_6040_);
lean_dec(v_x_5989_);
v___x_6043_ = lean_box(0);
v_isShared_6044_ = v_isSharedCheck_6061_;
goto v_resetjp_6042_;
}
v_resetjp_6042_:
{
lean_object* v___x_6046_; 
if (v_isShared_6044_ == 0)
{
v___x_6046_ = v___x_6043_;
goto v_reusejp_6045_;
}
else
{
lean_object* v_reuseFailAlloc_6060_; 
v_reuseFailAlloc_6060_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6060_, 0, v_ks_6040_);
lean_ctor_set(v_reuseFailAlloc_6060_, 1, v_vs_6041_);
v___x_6046_ = v_reuseFailAlloc_6060_;
goto v_reusejp_6045_;
}
v_reusejp_6045_:
{
lean_object* v_newNode_6047_; uint8_t v___y_6049_; size_t v___x_6055_; uint8_t v___x_6056_; 
v_newNode_6047_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1___redArg(v___x_6046_, v_x_5992_, v_x_5993_);
v___x_6055_ = ((size_t)7ULL);
v___x_6056_ = lean_usize_dec_le(v___x_6055_, v_x_5991_);
if (v___x_6056_ == 0)
{
lean_object* v___x_6057_; lean_object* v___x_6058_; uint8_t v___x_6059_; 
v___x_6057_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_6047_);
v___x_6058_ = lean_unsigned_to_nat(4u);
v___x_6059_ = lean_nat_dec_lt(v___x_6057_, v___x_6058_);
lean_dec(v___x_6057_);
v___y_6049_ = v___x_6059_;
goto v___jp_6048_;
}
else
{
v___y_6049_ = v___x_6056_;
goto v___jp_6048_;
}
v___jp_6048_:
{
if (v___y_6049_ == 0)
{
lean_object* v_ks_6050_; lean_object* v_vs_6051_; lean_object* v___x_6052_; lean_object* v___x_6053_; lean_object* v___x_6054_; 
v_ks_6050_ = lean_ctor_get(v_newNode_6047_, 0);
lean_inc_ref(v_ks_6050_);
v_vs_6051_ = lean_ctor_get(v_newNode_6047_, 1);
lean_inc_ref(v_vs_6051_);
lean_dec_ref(v_newNode_6047_);
v___x_6052_ = lean_unsigned_to_nat(0u);
v___x_6053_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0);
v___x_6054_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(v_x_5991_, v_ks_6050_, v_vs_6051_, v___x_6052_, v___x_6053_);
lean_dec_ref(v_vs_6051_);
lean_dec_ref(v_ks_6050_);
return v___x_6054_;
}
else
{
return v_newNode_6047_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(size_t v_depth_6062_, lean_object* v_keys_6063_, lean_object* v_vals_6064_, lean_object* v_i_6065_, lean_object* v_entries_6066_){
_start:
{
lean_object* v___x_6067_; uint8_t v___x_6068_; 
v___x_6067_ = lean_array_get_size(v_keys_6063_);
v___x_6068_ = lean_nat_dec_lt(v_i_6065_, v___x_6067_);
if (v___x_6068_ == 0)
{
lean_dec(v_i_6065_);
return v_entries_6066_;
}
else
{
lean_object* v_k_6069_; lean_object* v_v_6070_; uint64_t v___y_6072_; 
v_k_6069_ = lean_array_fget_borrowed(v_keys_6063_, v_i_6065_);
v_v_6070_ = lean_array_fget_borrowed(v_vals_6064_, v_i_6065_);
if (lean_obj_tag(v_k_6069_) == 0)
{
uint64_t v___x_6083_; 
v___x_6083_ = 1723ULL;
v___y_6072_ = v___x_6083_;
goto v___jp_6071_;
}
else
{
uint64_t v_hash_6084_; 
v_hash_6084_ = lean_ctor_get_uint64(v_k_6069_, sizeof(void*)*2);
v___y_6072_ = v_hash_6084_;
goto v___jp_6071_;
}
v___jp_6071_:
{
size_t v_h_6073_; size_t v___x_6074_; lean_object* v___x_6075_; size_t v___x_6076_; size_t v___x_6077_; size_t v___x_6078_; size_t v_h_6079_; lean_object* v___x_6080_; lean_object* v___x_6081_; 
v_h_6073_ = lean_uint64_to_usize(v___y_6072_);
v___x_6074_ = ((size_t)5ULL);
v___x_6075_ = lean_unsigned_to_nat(1u);
v___x_6076_ = ((size_t)1ULL);
v___x_6077_ = lean_usize_sub(v_depth_6062_, v___x_6076_);
v___x_6078_ = lean_usize_mul(v___x_6074_, v___x_6077_);
v_h_6079_ = lean_usize_shift_right(v_h_6073_, v___x_6078_);
v___x_6080_ = lean_nat_add(v_i_6065_, v___x_6075_);
lean_dec(v_i_6065_);
lean_inc(v_v_6070_);
lean_inc(v_k_6069_);
v___x_6081_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_entries_6066_, v_h_6079_, v_depth_6062_, v_k_6069_, v_v_6070_);
v_i_6065_ = v___x_6080_;
v_entries_6066_ = v___x_6081_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_6085_, lean_object* v_keys_6086_, lean_object* v_vals_6087_, lean_object* v_i_6088_, lean_object* v_entries_6089_){
_start:
{
size_t v_depth_boxed_6090_; lean_object* v_res_6091_; 
v_depth_boxed_6090_ = lean_unbox_usize(v_depth_6085_);
lean_dec(v_depth_6085_);
v_res_6091_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(v_depth_boxed_6090_, v_keys_6086_, v_vals_6087_, v_i_6088_, v_entries_6089_);
lean_dec_ref(v_vals_6087_);
lean_dec_ref(v_keys_6086_);
return v_res_6091_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___boxed(lean_object* v_x_6092_, lean_object* v_x_6093_, lean_object* v_x_6094_, lean_object* v_x_6095_, lean_object* v_x_6096_){
_start:
{
size_t v_x_352__boxed_6097_; size_t v_x_353__boxed_6098_; lean_object* v_res_6099_; 
v_x_352__boxed_6097_ = lean_unbox_usize(v_x_6093_);
lean_dec(v_x_6093_);
v_x_353__boxed_6098_ = lean_unbox_usize(v_x_6094_);
lean_dec(v_x_6094_);
v_res_6099_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_x_6092_, v_x_352__boxed_6097_, v_x_353__boxed_6098_, v_x_6095_, v_x_6096_);
return v_res_6099_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0___redArg(lean_object* v_x_6100_, lean_object* v_x_6101_, lean_object* v_x_6102_){
_start:
{
uint64_t v___y_6104_; 
if (lean_obj_tag(v_x_6101_) == 0)
{
uint64_t v___x_6108_; 
v___x_6108_ = 1723ULL;
v___y_6104_ = v___x_6108_;
goto v___jp_6103_;
}
else
{
uint64_t v_hash_6109_; 
v_hash_6109_ = lean_ctor_get_uint64(v_x_6101_, sizeof(void*)*2);
v___y_6104_ = v_hash_6109_;
goto v___jp_6103_;
}
v___jp_6103_:
{
size_t v___x_6105_; size_t v___x_6106_; lean_object* v___x_6107_; 
v___x_6105_ = lean_uint64_to_usize(v___y_6104_);
v___x_6106_ = ((size_t)1ULL);
v___x_6107_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_x_6100_, v___x_6105_, v___x_6106_, v_x_6101_, v_x_6102_);
return v___x_6107_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_insert(lean_object* v_m_6110_, lean_object* v_n_6111_, lean_object* v_v_6112_){
_start:
{
lean_object* v_map_u2081_6113_; lean_object* v_map_u2082_6114_; lean_object* v___x_6116_; uint8_t v_isShared_6117_; uint8_t v_isSharedCheck_6122_; 
v_map_u2081_6113_ = lean_ctor_get(v_m_6110_, 0);
v_map_u2082_6114_ = lean_ctor_get(v_m_6110_, 1);
v_isSharedCheck_6122_ = !lean_is_exclusive(v_m_6110_);
if (v_isSharedCheck_6122_ == 0)
{
v___x_6116_ = v_m_6110_;
v_isShared_6117_ = v_isSharedCheck_6122_;
goto v_resetjp_6115_;
}
else
{
lean_inc(v_map_u2082_6114_);
lean_inc(v_map_u2081_6113_);
lean_dec(v_m_6110_);
v___x_6116_ = lean_box(0);
v_isShared_6117_ = v_isSharedCheck_6122_;
goto v_resetjp_6115_;
}
v_resetjp_6115_:
{
lean_object* v___x_6118_; lean_object* v___x_6120_; 
v___x_6118_ = l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0___redArg(v_map_u2082_6114_, v_n_6111_, v_v_6112_);
if (v_isShared_6117_ == 0)
{
lean_ctor_set(v___x_6116_, 1, v___x_6118_);
v___x_6120_ = v___x_6116_;
goto v_reusejp_6119_;
}
else
{
lean_object* v_reuseFailAlloc_6121_; 
v_reuseFailAlloc_6121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6121_, 0, v_map_u2081_6113_);
lean_ctor_set(v_reuseFailAlloc_6121_, 1, v___x_6118_);
v___x_6120_ = v_reuseFailAlloc_6121_;
goto v_reusejp_6119_;
}
v_reusejp_6119_:
{
return v___x_6120_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0(lean_object* v_00_u03b2_6123_, lean_object* v_x_6124_, lean_object* v_x_6125_, lean_object* v_x_6126_){
_start:
{
lean_object* v___x_6127_; 
v___x_6127_ = l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0___redArg(v_x_6124_, v_x_6125_, v_x_6126_);
return v___x_6127_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0(lean_object* v_00_u03b2_6128_, lean_object* v_x_6129_, size_t v_x_6130_, size_t v_x_6131_, lean_object* v_x_6132_, lean_object* v_x_6133_){
_start:
{
lean_object* v___x_6134_; 
v___x_6134_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_x_6129_, v_x_6130_, v_x_6131_, v_x_6132_, v_x_6133_);
return v___x_6134_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___boxed(lean_object* v_00_u03b2_6135_, lean_object* v_x_6136_, lean_object* v_x_6137_, lean_object* v_x_6138_, lean_object* v_x_6139_, lean_object* v_x_6140_){
_start:
{
size_t v_x_552__boxed_6141_; size_t v_x_553__boxed_6142_; lean_object* v_res_6143_; 
v_x_552__boxed_6141_ = lean_unbox_usize(v_x_6137_);
lean_dec(v_x_6137_);
v_x_553__boxed_6142_ = lean_unbox_usize(v_x_6138_);
lean_dec(v_x_6138_);
v_res_6143_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0(v_00_u03b2_6135_, v_x_6136_, v_x_552__boxed_6141_, v_x_553__boxed_6142_, v_x_6139_, v_x_6140_);
return v_res_6143_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_6144_, lean_object* v_n_6145_, lean_object* v_k_6146_, lean_object* v_v_6147_){
_start:
{
lean_object* v___x_6148_; 
v___x_6148_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1___redArg(v_n_6145_, v_k_6146_, v_v_6147_);
return v___x_6148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_6149_, size_t v_depth_6150_, lean_object* v_keys_6151_, lean_object* v_vals_6152_, lean_object* v_heq_6153_, lean_object* v_i_6154_, lean_object* v_entries_6155_){
_start:
{
lean_object* v___x_6156_; 
v___x_6156_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(v_depth_6150_, v_keys_6151_, v_vals_6152_, v_i_6154_, v_entries_6155_);
return v___x_6156_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_6157_, lean_object* v_depth_6158_, lean_object* v_keys_6159_, lean_object* v_vals_6160_, lean_object* v_heq_6161_, lean_object* v_i_6162_, lean_object* v_entries_6163_){
_start:
{
size_t v_depth_boxed_6164_; lean_object* v_res_6165_; 
v_depth_boxed_6164_ = lean_unbox_usize(v_depth_6158_);
lean_dec(v_depth_6158_);
v_res_6165_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2(v_00_u03b2_6157_, v_depth_boxed_6164_, v_keys_6159_, v_vals_6160_, v_heq_6161_, v_i_6162_, v_entries_6163_);
lean_dec_ref(v_vals_6160_);
lean_dec_ref(v_keys_6159_);
return v_res_6165_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_6166_, lean_object* v_x_6167_, lean_object* v_x_6168_, lean_object* v_x_6169_, lean_object* v_x_6170_){
_start:
{
lean_object* v___x_6171_; 
v___x_6171_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_x_6167_, v_x_6168_, v_x_6169_, v_x_6170_);
return v___x_6171_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldStage2___redArg(lean_object* v_f_6172_, lean_object* v_s_6173_, lean_object* v_m_6174_){
_start:
{
lean_object* v_map_u2082_6175_; lean_object* v___x_6176_; 
v_map_u2082_6175_ = lean_ctor_get(v_m_6174_, 1);
lean_inc_ref(v_map_u2082_6175_);
lean_dec_ref(v_m_6174_);
v___x_6176_ = l_Lean_PersistentHashMap_foldl___redArg(v_map_u2082_6175_, v_f_6172_, v_s_6173_);
return v___x_6176_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldStage2(lean_object* v_00_u03c3_6177_, lean_object* v_f_6178_, lean_object* v_s_6179_, lean_object* v_m_6180_){
_start:
{
lean_object* v_map_u2082_6181_; lean_object* v___x_6182_; 
v_map_u2082_6181_ = lean_ctor_get(v_m_6180_, 1);
lean_inc_ref(v_map_u2082_6181_);
lean_dec_ref(v_m_6180_);
v___x_6182_ = l_Lean_PersistentHashMap_foldl___redArg(v_map_u2082_6181_, v_f_6178_, v_s_6179_);
return v___x_6182_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM___redArg___lam__0(lean_object* v_inst_6183_, lean_object* v_f_6184_, lean_object* v_map_u2082_6185_, lean_object* v_____do__lift_6186_){
_start:
{
lean_object* v___x_6187_; 
v___x_6187_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v_inst_6183_, v_f_6184_, v_map_u2082_6185_, v_____do__lift_6186_);
return v___x_6187_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM___redArg(lean_object* v_inst_6188_, lean_object* v_f_6189_, lean_object* v_init_6190_, lean_object* v_map_6191_){
_start:
{
lean_object* v_toBind_6192_; lean_object* v_map_u2081_6193_; lean_object* v_map_u2082_6194_; lean_object* v___f_6195_; lean_object* v___x_6196_; lean_object* v___x_6197_; 
v_toBind_6192_ = lean_ctor_get(v_inst_6188_, 1);
lean_inc(v_toBind_6192_);
v_map_u2081_6193_ = lean_ctor_get(v_map_6191_, 0);
lean_inc_ref(v_map_u2081_6193_);
v_map_u2082_6194_ = lean_ctor_get(v_map_6191_, 1);
lean_inc_ref(v_map_u2082_6194_);
lean_dec_ref(v_map_6191_);
lean_inc(v_f_6189_);
lean_inc_ref(v_inst_6188_);
v___f_6195_ = lean_alloc_closure((void*)(l_Lean_ConstMap_foldM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_6195_, 0, v_inst_6188_);
lean_closure_set(v___f_6195_, 1, v_f_6189_);
lean_closure_set(v___f_6195_, 2, v_map_u2082_6194_);
v___x_6196_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_6188_, v_map_u2081_6193_, v_f_6189_, v_init_6190_);
v___x_6197_ = lean_apply_4(v_toBind_6192_, lean_box(0), lean_box(0), v___x_6196_, v___f_6195_);
return v___x_6197_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM(lean_object* v_00_u03c3_6198_, lean_object* v_m_6199_, lean_object* v_inst_6200_, lean_object* v_f_6201_, lean_object* v_init_6202_, lean_object* v_map_6203_){
_start:
{
lean_object* v___x_6204_; 
v___x_6204_ = l_Lean_ConstMap_foldM___redArg(v_inst_6200_, v_f_6201_, v_init_6202_, v_map_6203_);
return v___x_6204_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___lam__0(lean_object* v_f_6205_, lean_object* v_x1_6206_, lean_object* v_x2_6207_, lean_object* v_x3_6208_){
_start:
{
lean_object* v___x_6209_; 
v___x_6209_ = lean_apply_3(v_f_6205_, v_x1_6206_, v_x2_6207_, v_x3_6208_);
return v___x_6209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_f_6210_, lean_object* v_keys_6211_, lean_object* v_vals_6212_, lean_object* v_i_6213_, lean_object* v_acc_6214_){
_start:
{
lean_object* v___x_6215_; uint8_t v___x_6216_; 
v___x_6215_ = lean_array_get_size(v_keys_6211_);
v___x_6216_ = lean_nat_dec_lt(v_i_6213_, v___x_6215_);
if (v___x_6216_ == 0)
{
lean_dec(v_i_6213_);
lean_dec(v_f_6210_);
return v_acc_6214_;
}
else
{
lean_object* v_k_6217_; lean_object* v_v_6218_; lean_object* v___x_6219_; lean_object* v___x_6220_; lean_object* v___x_6221_; 
v_k_6217_ = lean_array_fget_borrowed(v_keys_6211_, v_i_6213_);
v_v_6218_ = lean_array_fget_borrowed(v_vals_6212_, v_i_6213_);
lean_inc(v_f_6210_);
lean_inc(v_v_6218_);
lean_inc(v_k_6217_);
v___x_6219_ = lean_apply_3(v_f_6210_, v_acc_6214_, v_k_6217_, v_v_6218_);
v___x_6220_ = lean_unsigned_to_nat(1u);
v___x_6221_ = lean_nat_add(v_i_6213_, v___x_6220_);
lean_dec(v_i_6213_);
v_i_6213_ = v___x_6221_;
v_acc_6214_ = v___x_6219_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_f_6223_, lean_object* v_keys_6224_, lean_object* v_vals_6225_, lean_object* v_i_6226_, lean_object* v_acc_6227_){
_start:
{
lean_object* v_res_6228_; 
v_res_6228_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(v_f_6223_, v_keys_6224_, v_vals_6225_, v_i_6226_, v_acc_6227_);
lean_dec_ref(v_vals_6225_);
lean_dec_ref(v_keys_6224_);
return v_res_6228_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(lean_object* v_f_6229_, lean_object* v_x_6230_, lean_object* v_x_6231_){
_start:
{
if (lean_obj_tag(v_x_6230_) == 0)
{
lean_object* v_es_6232_; lean_object* v___x_6233_; lean_object* v___x_6234_; uint8_t v___x_6235_; 
v_es_6232_ = lean_ctor_get(v_x_6230_, 0);
v___x_6233_ = lean_unsigned_to_nat(0u);
v___x_6234_ = lean_array_get_size(v_es_6232_);
v___x_6235_ = lean_nat_dec_lt(v___x_6233_, v___x_6234_);
if (v___x_6235_ == 0)
{
lean_dec(v_f_6229_);
return v_x_6231_;
}
else
{
uint8_t v___x_6236_; 
v___x_6236_ = lean_nat_dec_le(v___x_6234_, v___x_6234_);
if (v___x_6236_ == 0)
{
if (v___x_6235_ == 0)
{
lean_dec(v_f_6229_);
return v_x_6231_;
}
else
{
size_t v___x_6237_; size_t v___x_6238_; lean_object* v___x_6239_; 
v___x_6237_ = ((size_t)0ULL);
v___x_6238_ = lean_usize_of_nat(v___x_6234_);
v___x_6239_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(v_f_6229_, v_es_6232_, v___x_6237_, v___x_6238_, v_x_6231_);
return v___x_6239_;
}
}
else
{
size_t v___x_6240_; size_t v___x_6241_; lean_object* v___x_6242_; 
v___x_6240_ = ((size_t)0ULL);
v___x_6241_ = lean_usize_of_nat(v___x_6234_);
v___x_6242_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(v_f_6229_, v_es_6232_, v___x_6240_, v___x_6241_, v_x_6231_);
return v___x_6242_;
}
}
}
else
{
lean_object* v_ks_6243_; lean_object* v_vs_6244_; lean_object* v___x_6245_; lean_object* v___x_6246_; 
v_ks_6243_ = lean_ctor_get(v_x_6230_, 0);
v_vs_6244_ = lean_ctor_get(v_x_6230_, 1);
v___x_6245_ = lean_unsigned_to_nat(0u);
v___x_6246_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(v_f_6229_, v_ks_6243_, v_vs_6244_, v___x_6245_, v_x_6231_);
return v___x_6246_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_f_6247_, lean_object* v_as_6248_, size_t v_i_6249_, size_t v_stop_6250_, lean_object* v_b_6251_){
_start:
{
lean_object* v___y_6253_; uint8_t v___x_6257_; 
v___x_6257_ = lean_usize_dec_eq(v_i_6249_, v_stop_6250_);
if (v___x_6257_ == 0)
{
lean_object* v___x_6258_; 
v___x_6258_ = lean_array_uget_borrowed(v_as_6248_, v_i_6249_);
switch(lean_obj_tag(v___x_6258_))
{
case 0:
{
lean_object* v_key_6259_; lean_object* v_val_6260_; lean_object* v___x_6261_; 
v_key_6259_ = lean_ctor_get(v___x_6258_, 0);
v_val_6260_ = lean_ctor_get(v___x_6258_, 1);
lean_inc(v_f_6247_);
lean_inc(v_val_6260_);
lean_inc(v_key_6259_);
v___x_6261_ = lean_apply_3(v_f_6247_, v_b_6251_, v_key_6259_, v_val_6260_);
v___y_6253_ = v___x_6261_;
goto v___jp_6252_;
}
case 1:
{
lean_object* v_node_6262_; lean_object* v___x_6263_; 
v_node_6262_ = lean_ctor_get(v___x_6258_, 0);
lean_inc(v_f_6247_);
v___x_6263_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6247_, v_node_6262_, v_b_6251_);
v___y_6253_ = v___x_6263_;
goto v___jp_6252_;
}
default: 
{
v___y_6253_ = v_b_6251_;
goto v___jp_6252_;
}
}
}
else
{
lean_dec(v_f_6247_);
return v_b_6251_;
}
v___jp_6252_:
{
size_t v___x_6254_; size_t v___x_6255_; 
v___x_6254_ = ((size_t)1ULL);
v___x_6255_ = lean_usize_add(v_i_6249_, v___x_6254_);
v_i_6249_ = v___x_6255_;
v_b_6251_ = v___y_6253_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_f_6264_, lean_object* v_as_6265_, lean_object* v_i_6266_, lean_object* v_stop_6267_, lean_object* v_b_6268_){
_start:
{
size_t v_i_boxed_6269_; size_t v_stop_boxed_6270_; lean_object* v_res_6271_; 
v_i_boxed_6269_ = lean_unbox_usize(v_i_6266_);
lean_dec(v_i_6266_);
v_stop_boxed_6270_ = lean_unbox_usize(v_stop_6267_);
lean_dec(v_stop_6267_);
v_res_6271_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(v_f_6264_, v_as_6265_, v_i_boxed_6269_, v_stop_boxed_6270_, v_b_6268_);
lean_dec_ref(v_as_6265_);
return v_res_6271_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_6272_, lean_object* v_x_6273_, lean_object* v_x_6274_){
_start:
{
lean_object* v_res_6275_; 
v_res_6275_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6272_, v_x_6273_, v_x_6274_);
lean_dec_ref(v_x_6273_);
return v_res_6275_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(lean_object* v_map_6276_, lean_object* v_f_6277_, lean_object* v_init_6278_){
_start:
{
lean_object* v___f_6279_; lean_object* v___x_6280_; 
v___f_6279_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___lam__0), 4, 1);
lean_closure_set(v___f_6279_, 0, v_f_6277_);
v___x_6280_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v___f_6279_, v_map_6276_, v_init_6278_);
return v___x_6280_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___boxed(lean_object* v_map_6281_, lean_object* v_f_6282_, lean_object* v_init_6283_){
_start:
{
lean_object* v_res_6284_; 
v_res_6284_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(v_map_6281_, v_f_6282_, v_init_6283_);
lean_dec_ref(v_map_6281_);
return v_res_6284_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_fold___redArg(lean_object* v_f_6285_, lean_object* v_init_6286_, lean_object* v_m_6287_){
_start:
{
lean_object* v_map_u2081_6288_; lean_object* v_map_u2082_6289_; lean_object* v___x_6290_; lean_object* v___x_6291_; 
v_map_u2081_6288_ = lean_ctor_get(v_m_6287_, 0);
lean_inc_ref(v_map_u2081_6288_);
v_map_u2082_6289_ = lean_ctor_get(v_m_6287_, 1);
lean_inc_ref(v_map_u2082_6289_);
lean_dec_ref(v_m_6287_);
lean_inc(v_f_6285_);
v___x_6290_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_map_u2081_6288_, v_f_6285_, v_init_6286_);
v___x_6291_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(v_map_u2082_6289_, v_f_6285_, v___x_6290_);
lean_dec_ref(v_map_u2082_6289_);
return v___x_6291_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_fold(lean_object* v_00_u03c3_6292_, lean_object* v_f_6293_, lean_object* v_init_6294_, lean_object* v_m_6295_){
_start:
{
lean_object* v___x_6296_; 
v___x_6296_ = l_Lean_ConstMap_fold___redArg(v_f_6293_, v_init_6294_, v_m_6295_);
return v___x_6296_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0(lean_object* v_00_u03c3_6297_, lean_object* v_00_u03b2_6298_, lean_object* v_map_6299_, lean_object* v_f_6300_, lean_object* v_init_6301_){
_start:
{
lean_object* v___x_6302_; 
v___x_6302_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(v_map_6299_, v_f_6300_, v_init_6301_);
return v___x_6302_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___boxed(lean_object* v_00_u03c3_6303_, lean_object* v_00_u03b2_6304_, lean_object* v_map_6305_, lean_object* v_f_6306_, lean_object* v_init_6307_){
_start:
{
lean_object* v_res_6308_; 
v_res_6308_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0(v_00_u03c3_6303_, v_00_u03b2_6304_, v_map_6305_, v_f_6306_, v_init_6307_);
lean_dec_ref(v_map_6305_);
return v_res_6308_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg(lean_object* v_map_6309_, lean_object* v_f_6310_, lean_object* v_init_6311_){
_start:
{
lean_object* v___x_6312_; 
v___x_6312_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6310_, v_map_6309_, v_init_6311_);
return v___x_6312_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg___boxed(lean_object* v_map_6313_, lean_object* v_f_6314_, lean_object* v_init_6315_){
_start:
{
lean_object* v_res_6316_; 
v_res_6316_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg(v_map_6313_, v_f_6314_, v_init_6315_);
lean_dec_ref(v_map_6313_);
return v_res_6316_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0(lean_object* v_00_u03c3_6317_, lean_object* v_00_u03b2_6318_, lean_object* v_map_6319_, lean_object* v_f_6320_, lean_object* v_init_6321_){
_start:
{
lean_object* v___x_6322_; 
v___x_6322_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6320_, v_map_6319_, v_init_6321_);
return v___x_6322_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___boxed(lean_object* v_00_u03c3_6323_, lean_object* v_00_u03b2_6324_, lean_object* v_map_6325_, lean_object* v_f_6326_, lean_object* v_init_6327_){
_start:
{
lean_object* v_res_6328_; 
v_res_6328_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0(v_00_u03c3_6323_, v_00_u03b2_6324_, v_map_6325_, v_f_6326_, v_init_6327_);
lean_dec_ref(v_map_6325_);
return v_res_6328_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1(lean_object* v_00_u03c3_6329_, lean_object* v_00_u03b1_6330_, lean_object* v_00_u03b2_6331_, lean_object* v_f_6332_, lean_object* v_x_6333_, lean_object* v_x_6334_){
_start:
{
lean_object* v___x_6335_; 
v___x_6335_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6332_, v_x_6333_, v_x_6334_);
return v___x_6335_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_6336_, lean_object* v_00_u03b1_6337_, lean_object* v_00_u03b2_6338_, lean_object* v_f_6339_, lean_object* v_x_6340_, lean_object* v_x_6341_){
_start:
{
lean_object* v_res_6342_; 
v_res_6342_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1(v_00_u03c3_6336_, v_00_u03b1_6337_, v_00_u03b2_6338_, v_f_6339_, v_x_6340_, v_x_6341_);
lean_dec_ref(v_x_6340_);
return v_res_6342_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_6343_, lean_object* v_00_u03b2_6344_, lean_object* v_00_u03c3_6345_, lean_object* v_f_6346_, lean_object* v_as_6347_, size_t v_i_6348_, size_t v_stop_6349_, lean_object* v_b_6350_){
_start:
{
lean_object* v___x_6351_; 
v___x_6351_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(v_f_6346_, v_as_6347_, v_i_6348_, v_stop_6349_, v_b_6350_);
return v___x_6351_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_6352_, lean_object* v_00_u03b2_6353_, lean_object* v_00_u03c3_6354_, lean_object* v_f_6355_, lean_object* v_as_6356_, lean_object* v_i_6357_, lean_object* v_stop_6358_, lean_object* v_b_6359_){
_start:
{
size_t v_i_boxed_6360_; size_t v_stop_boxed_6361_; lean_object* v_res_6362_; 
v_i_boxed_6360_ = lean_unbox_usize(v_i_6357_);
lean_dec(v_i_6357_);
v_stop_boxed_6361_ = lean_unbox_usize(v_stop_6358_);
lean_dec(v_stop_6358_);
v_res_6362_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_6352_, v_00_u03b2_6353_, v_00_u03c3_6354_, v_f_6355_, v_as_6356_, v_i_boxed_6360_, v_stop_boxed_6361_, v_b_6359_);
lean_dec_ref(v_as_6356_);
return v_res_6362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03c3_6363_, lean_object* v_00_u03b1_6364_, lean_object* v_00_u03b2_6365_, lean_object* v_f_6366_, lean_object* v_keys_6367_, lean_object* v_vals_6368_, lean_object* v_heq_6369_, lean_object* v_i_6370_, lean_object* v_acc_6371_){
_start:
{
lean_object* v___x_6372_; 
v___x_6372_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(v_f_6366_, v_keys_6367_, v_vals_6368_, v_i_6370_, v_acc_6371_);
return v___x_6372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03c3_6373_, lean_object* v_00_u03b1_6374_, lean_object* v_00_u03b2_6375_, lean_object* v_f_6376_, lean_object* v_keys_6377_, lean_object* v_vals_6378_, lean_object* v_heq_6379_, lean_object* v_i_6380_, lean_object* v_acc_6381_){
_start:
{
lean_object* v_res_6382_; 
v_res_6382_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3(v_00_u03c3_6373_, v_00_u03b1_6374_, v_00_u03b2_6375_, v_f_6376_, v_keys_6377_, v_vals_6378_, v_heq_6379_, v_i_6380_, v_acc_6381_);
lean_dec_ref(v_vals_6378_);
lean_dec_ref(v_keys_6377_);
return v_res_6382_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM___redArg___lam__0(lean_object* v_inst_6383_, lean_object* v_map_u2082_6384_, lean_object* v_f_6385_, lean_object* v_____r_6386_){
_start:
{
lean_object* v___x_6387_; 
v___x_6387_ = l_Lean_PersistentHashMap_forM___redArg(v_inst_6383_, v_map_u2082_6384_, v_f_6385_);
return v___x_6387_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM___redArg(lean_object* v_inst_6388_, lean_object* v_map_6389_, lean_object* v_f_6390_){
_start:
{
lean_object* v_toBind_6391_; lean_object* v_map_u2081_6392_; lean_object* v_map_u2082_6393_; lean_object* v___f_6394_; lean_object* v___x_6395_; lean_object* v___x_6396_; 
v_toBind_6391_ = lean_ctor_get(v_inst_6388_, 1);
lean_inc(v_toBind_6391_);
v_map_u2081_6392_ = lean_ctor_get(v_map_6389_, 0);
lean_inc_ref(v_map_u2081_6392_);
v_map_u2082_6393_ = lean_ctor_get(v_map_6389_, 1);
lean_inc_ref(v_map_u2082_6393_);
lean_dec_ref(v_map_6389_);
lean_inc(v_f_6390_);
lean_inc_ref(v_inst_6388_);
v___f_6394_ = lean_alloc_closure((void*)(l_Lean_ConstMap_forM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_6394_, 0, v_inst_6388_);
lean_closure_set(v___f_6394_, 1, v_map_u2082_6393_);
lean_closure_set(v___f_6394_, 2, v_f_6390_);
v___x_6395_ = l_Lean_ImportedConsts_forM___redArg(v_inst_6388_, v_map_u2081_6392_, v_f_6390_);
v___x_6396_ = lean_apply_4(v_toBind_6391_, lean_box(0), lean_box(0), v___x_6395_, v___f_6394_);
return v___x_6396_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM(lean_object* v_m_6397_, lean_object* v_inst_6398_, lean_object* v_map_6399_, lean_object* v_f_6400_){
_start:
{
lean_object* v___x_6401_; 
v___x_6401_ = l_Lean_ConstMap_forM___redArg(v_inst_6398_, v_map_6399_, v_f_6400_);
return v___x_6401_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__0(lean_object* v_f_6402_, lean_object* v_n_6403_, lean_object* v_v_6404_){
_start:
{
lean_object* v___x_6405_; lean_object* v___x_6406_; 
v___x_6405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6405_, 0, v_n_6403_);
lean_ctor_set(v___x_6405_, 1, v_v_6404_);
v___x_6406_ = lean_apply_1(v_f_6402_, v___x_6405_);
return v___x_6406_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__1(lean_object* v_inst_6407_, lean_object* v_map_6408_, lean_object* v_f_6409_){
_start:
{
lean_object* v___f_6410_; lean_object* v___x_6411_; 
v___f_6410_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__0), 3, 1);
lean_closure_set(v___f_6410_, 0, v_f_6409_);
v___x_6411_ = l_Lean_ConstMap_forM___redArg(v_inst_6407_, v_map_6408_, v___f_6410_);
return v___x_6411_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg(lean_object* v_inst_6412_){
_start:
{
lean_object* v___f_6413_; 
v___f_6413_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_6413_, 0, v_inst_6412_);
return v___f_6413_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad(lean_object* v_m_6414_, lean_object* v_inst_6415_){
_start:
{
lean_object* v___f_6416_; 
v___f_6416_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_6416_, 0, v_inst_6415_);
return v___f_6416_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__2(lean_object* v___y_6417_, lean_object* v_toBind_6418_, lean_object* v___f_6419_, lean_object* v_n_6420_, lean_object* v_v_6421_, lean_object* v___y_6422_){
_start:
{
lean_object* v___x_6423_; lean_object* v___x_6424_; lean_object* v___x_6425_; 
v___x_6423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6423_, 0, v_n_6420_);
lean_ctor_set(v___x_6423_, 1, v_v_6421_);
v___x_6424_ = lean_apply_2(v___y_6417_, v___x_6423_, v___y_6422_);
v___x_6425_ = lean_apply_4(v_toBind_6418_, lean_box(0), lean_box(0), v___x_6424_, v___f_6419_);
return v___x_6425_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__0(lean_object* v_inst_6426_, lean_object* v_00_u03b2_6427_, lean_object* v___y_6428_, lean_object* v___y_6429_, lean_object* v___y_6430_){
_start:
{
lean_object* v___f_6431_; lean_object* v___f_6432_; lean_object* v___f_6433_; lean_object* v___f_6434_; lean_object* v___x_6435_; lean_object* v___x_6436_; lean_object* v___x_6437_; lean_object* v___x_6438_; lean_object* v___x_6439_; lean_object* v___x_6440_; lean_object* v___f_6441_; lean_object* v___f_6442_; lean_object* v___f_6443_; lean_object* v___f_6444_; lean_object* v___x_6445_; lean_object* v___x_6446_; lean_object* v___x_6447_; lean_object* v___x_6448_; lean_object* v___x_6449_; lean_object* v___x_6450_; lean_object* v_toApplicative_6451_; lean_object* v_toBind_6452_; lean_object* v_toPure_6453_; lean_object* v___f_6454_; lean_object* v___f_6455_; lean_object* v___f_6456_; lean_object* v___x_136__overap_6457_; lean_object* v___x_6458_; lean_object* v___x_6459_; 
lean_inc_ref_n(v_inst_6426_, 7);
v___f_6431_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_6431_, 0, v_inst_6426_);
v___f_6432_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_6432_, 0, v_inst_6426_);
v___f_6433_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_6433_, 0, v_inst_6426_);
v___f_6434_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_6434_, 0, v_inst_6426_);
v___x_6435_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_6435_, 0, lean_box(0));
lean_closure_set(v___x_6435_, 1, lean_box(0));
lean_closure_set(v___x_6435_, 2, v_inst_6426_);
v___x_6436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6436_, 0, v___x_6435_);
lean_ctor_set(v___x_6436_, 1, v___f_6431_);
v___x_6437_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_6437_, 0, lean_box(0));
lean_closure_set(v___x_6437_, 1, lean_box(0));
lean_closure_set(v___x_6437_, 2, v_inst_6426_);
v___x_6438_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6438_, 0, v___x_6436_);
lean_ctor_set(v___x_6438_, 1, v___x_6437_);
lean_ctor_set(v___x_6438_, 2, v___f_6432_);
lean_ctor_set(v___x_6438_, 3, v___f_6433_);
lean_ctor_set(v___x_6438_, 4, v___f_6434_);
v___x_6439_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_6439_, 0, lean_box(0));
lean_closure_set(v___x_6439_, 1, lean_box(0));
lean_closure_set(v___x_6439_, 2, v_inst_6426_);
v___x_6440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6440_, 0, v___x_6438_);
lean_ctor_set(v___x_6440_, 1, v___x_6439_);
lean_inc_ref_n(v___x_6440_, 6);
v___f_6441_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_6441_, 0, v___x_6440_);
v___f_6442_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_6442_, 0, v___x_6440_);
v___f_6443_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_6443_, 0, v___x_6440_);
v___f_6444_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_6444_, 0, v___x_6440_);
v___x_6445_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_6445_, 0, lean_box(0));
lean_closure_set(v___x_6445_, 1, lean_box(0));
lean_closure_set(v___x_6445_, 2, v___x_6440_);
v___x_6446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6446_, 0, v___x_6445_);
lean_ctor_set(v___x_6446_, 1, v___f_6441_);
v___x_6447_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_6447_, 0, lean_box(0));
lean_closure_set(v___x_6447_, 1, lean_box(0));
lean_closure_set(v___x_6447_, 2, v___x_6440_);
v___x_6448_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6448_, 0, v___x_6446_);
lean_ctor_set(v___x_6448_, 1, v___x_6447_);
lean_ctor_set(v___x_6448_, 2, v___f_6442_);
lean_ctor_set(v___x_6448_, 3, v___f_6443_);
lean_ctor_set(v___x_6448_, 4, v___f_6444_);
v___x_6449_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_6449_, 0, lean_box(0));
lean_closure_set(v___x_6449_, 1, lean_box(0));
lean_closure_set(v___x_6449_, 2, v___x_6440_);
v___x_6450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6450_, 0, v___x_6448_);
lean_ctor_set(v___x_6450_, 1, v___x_6449_);
v_toApplicative_6451_ = lean_ctor_get(v_inst_6426_, 0);
lean_inc_ref(v_toApplicative_6451_);
v_toBind_6452_ = lean_ctor_get(v_inst_6426_, 1);
lean_inc_n(v_toBind_6452_, 2);
lean_dec_ref(v_inst_6426_);
v_toPure_6453_ = lean_ctor_get(v_toApplicative_6451_, 1);
lean_inc_n(v_toPure_6453_, 2);
lean_dec_ref(v_toApplicative_6451_);
v___f_6454_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0), 2, 1);
lean_closure_set(v___f_6454_, 0, v_toPure_6453_);
v___f_6455_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_6455_, 0, v_toPure_6453_);
v___f_6456_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__2), 6, 3);
lean_closure_set(v___f_6456_, 0, v___y_6430_);
lean_closure_set(v___f_6456_, 1, v_toBind_6452_);
lean_closure_set(v___f_6456_, 2, v___f_6455_);
v___x_136__overap_6457_ = l_Lean_ConstMap_forM___redArg(v___x_6450_, v___y_6428_, v___f_6456_);
v___x_6458_ = lean_apply_1(v___x_136__overap_6457_, v___y_6429_);
v___x_6459_ = lean_apply_4(v_toBind_6452_, lean_box(0), lean_box(0), v___x_6458_, v___f_6454_);
return v___x_6459_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg(lean_object* v_inst_6460_){
_start:
{
lean_object* v___f_6461_; 
v___f_6461_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__0), 5, 1);
lean_closure_set(v___f_6461_, 0, v_inst_6460_);
return v___f_6461_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad(lean_object* v_m_6462_, lean_object* v_inst_6463_){
_start:
{
lean_object* v___f_6464_; 
v___f_6464_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__0), 5, 1);
lean_closure_set(v___f_6464_, 0, v_inst_6463_);
return v___f_6464_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_toList___lam__0(lean_object* v_es_6465_, lean_object* v_n_6466_, lean_object* v_v_6467_){
_start:
{
lean_object* v___x_6468_; lean_object* v___x_6469_; 
v___x_6468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6468_, 0, v_n_6466_);
lean_ctor_set(v___x_6468_, 1, v_v_6467_);
v___x_6469_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6469_, 0, v___x_6468_);
lean_ctor_set(v___x_6469_, 1, v_es_6465_);
return v___x_6469_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_toList(lean_object* v_m_6471_){
_start:
{
lean_object* v___f_6472_; lean_object* v___x_6473_; lean_object* v___x_6474_; 
v___f_6472_ = ((lean_object*)(l_Lean_ConstMap_toList___closed__0));
v___x_6473_ = lean_box(0);
v___x_6474_ = l_Lean_ConstMap_fold___redArg(v___f_6472_, v___x_6473_, v_m_6471_);
return v___x_6474_;
}
}
lean_object* runtime_initialize_Lean_Declaration(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_PersistentHashMap(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashMap_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashSet_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_QSort(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ConstTrie(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Declaration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_PersistentHashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashSet_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_QSort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedConstMap = _init_l_Lean_instInhabitedConstMap();
lean_mark_persistent(l_Lean_instInhabitedConstMap);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ConstTrie(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Declaration(uint8_t builtin);
lean_object* initialize_Lean_Data_PersistentHashMap(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap_Basic(uint8_t builtin);
lean_object* initialize_Std_Data_HashSet_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Array_QSort(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ConstTrie(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Declaration(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_PersistentHashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashSet_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_QSort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ConstTrie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ConstTrie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ConstTrie(builtin);
}
#ifdef __cplusplus
}
#endif
