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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_thunk_get_own(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint64_t lean_uint64_sub(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_While_0__repeatM_erased___redArg(lean_object*, lean_object*, lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
uint32_t lean_uint32_shift_right(uint32_t, uint32_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint64_t lean_uint64_land(uint64_t, uint64_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t lean_uint64_add(uint64_t, uint64_t);
uint8_t lean_uint64_to_uint8(uint64_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_empty_byte_array(lean_object*);
uint8_t lean_uint8_lor(uint8_t, uint8_t);
lean_object* lean_mk_thunk(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_byte_array_get(lean_object*, lean_object*);
uint8_t lean_uint8_land(uint8_t, uint8_t);
uint64_t lean_uint8_to_uint64(uint8_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint32_t lean_uint8_to_uint32(uint8_t);
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
uint32_t lean_uint32_lor(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_foldlMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Array_findIdx_x3f_loop___redArg(lean_object*, lean_object*, lean_object*);
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
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_foldl___redArg(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedConstTrie___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedConstTrie___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedConstTrie___redArg___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedConstTrie___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedConstTrie___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedConstTrie___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedConstTrie___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_lastPartEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_lastPartEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_ConstTrie_0__Lean_maxSlotBits;
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_getU16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_getU16___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_getU32(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_getU32___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_topBits(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_topBits___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_fingerprint(uint64_t);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_fingerprint___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_pushU16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_pushU16___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_pushU32(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_pushU32___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__1(uint64_t, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10_value;
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
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___redArg(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___redArg(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2___redArg(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT uint64_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2(lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_LookupCacheImpl;
lean_object* lean_imported_consts_cache_new();
LEAN_EXPORT lean_object* l_Lean_LookupCache_new___boxed(lean_object*);
lean_object* lean_imported_consts_cache_num_live();
LEAN_EXPORT lean_object* l_Lean_LookupCache_numLive___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mod_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mod_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_merged_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_merged_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_lazy_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_lazy_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_cached_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_cached_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedImportedConsts___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedImportedConsts___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedImportedConsts___redArg___closed__0_value;
static lean_once_cell_t l_Lean_instInhabitedImportedConsts___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedImportedConsts___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedImportedConsts___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedImportedConsts___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty___redArg();
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_ImportedConsts_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ImportedConsts_empty___closed__0;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_imported_consts_drop_cache(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_dropCache___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__2, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__9_value)} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2;
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3___boxed__const__1 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3___boxed__const__1_value;
static lean_once_cell_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___boxed__const__1 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(lean_object*, lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(lean_object*, uint64_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(lean_object*, lean_object*, uint64_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0 = (const lean_object*)&l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedImportedConsts___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___closed__0 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_object* _init_l_Lean_instInhabitedConstTrie___redArg___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_3_ = l_ByteArray_empty;
v___x_4_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__0));
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
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie___redArg(){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___redArg___closed__1, &l_Lean_instInhabitedConstTrie___redArg___closed__1_once, _init_l_Lean_instInhabitedConstTrie___redArg___closed__1);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie___redArg___boxed(lean_object* v___dummy_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_instInhabitedConstTrie___redArg();
return v_res_11_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstTrie___closed__0(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = l_Lean_instInhabitedConstTrie___redArg();
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie(lean_object* v_00_u03b1_13_){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
return v___x_14_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_lastPartEq(lean_object* v_x_15_, lean_object* v_x_16_){
_start:
{
switch(lean_obj_tag(v_x_15_))
{
case 0:
{
if (lean_obj_tag(v_x_16_) == 0)
{
uint8_t v___x_17_; 
v___x_17_ = 1;
return v___x_17_;
}
else
{
uint8_t v___x_18_; 
v___x_18_ = 0;
return v___x_18_;
}
}
case 1:
{
if (lean_obj_tag(v_x_16_) == 1)
{
lean_object* v_str_19_; lean_object* v_str_20_; uint8_t v___x_21_; 
v_str_19_ = lean_ctor_get(v_x_15_, 1);
v_str_20_ = lean_ctor_get(v_x_16_, 1);
v___x_21_ = lean_string_dec_eq(v_str_19_, v_str_20_);
return v___x_21_;
}
else
{
uint8_t v___x_22_; 
v___x_22_ = 0;
return v___x_22_;
}
}
default: 
{
if (lean_obj_tag(v_x_16_) == 2)
{
lean_object* v_i_23_; lean_object* v_i_24_; uint8_t v___x_25_; 
v_i_23_ = lean_ctor_get(v_x_15_, 1);
v_i_24_ = lean_ctor_get(v_x_16_, 1);
v___x_25_ = lean_nat_dec_eq(v_i_23_, v_i_24_);
return v___x_25_;
}
else
{
uint8_t v___x_26_; 
v___x_26_ = 0;
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_lastPartEq___boxed(lean_object* v_x_27_, lean_object* v_x_28_){
_start:
{
uint8_t v_res_29_; lean_object* v_r_30_; 
v_res_29_ = l___private_Lean_ConstTrie_0__Lean_lastPartEq(v_x_27_, v_x_28_);
lean_dec(v_x_28_);
lean_dec(v_x_27_);
v_r_30_ = lean_box(v_res_29_);
return v_r_30_;
}
}
static uint64_t _init_l___private_Lean_ConstTrie_0__Lean_maxSlotBits(void){
_start:
{
uint64_t v___x_31_; 
v___x_31_ = 24ULL;
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_getU16(lean_object* v_bs_32_, lean_object* v_o_33_){
_start:
{
uint8_t v___x_34_; uint32_t v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; uint8_t v___x_38_; uint32_t v___x_39_; uint32_t v___x_40_; uint32_t v___x_41_; uint32_t v___x_42_; lean_object* v___x_43_; 
v___x_34_ = lean_byte_array_get(v_bs_32_, v_o_33_);
v___x_35_ = lean_uint8_to_uint32(v___x_34_);
v___x_36_ = lean_unsigned_to_nat(1u);
v___x_37_ = lean_nat_add(v_o_33_, v___x_36_);
v___x_38_ = lean_byte_array_get(v_bs_32_, v___x_37_);
lean_dec(v___x_37_);
v___x_39_ = lean_uint8_to_uint32(v___x_38_);
v___x_40_ = 8;
v___x_41_ = lean_uint32_shift_left(v___x_39_, v___x_40_);
v___x_42_ = lean_uint32_lor(v___x_35_, v___x_41_);
v___x_43_ = lean_uint32_to_nat(v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_getU16___boxed(lean_object* v_bs_44_, lean_object* v_o_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l___private_Lean_ConstTrie_0__Lean_getU16(v_bs_44_, v_o_45_);
lean_dec(v_o_45_);
lean_dec_ref(v_bs_44_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_getU32(lean_object* v_bs_47_, lean_object* v_o_48_){
_start:
{
uint8_t v___x_49_; uint32_t v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; uint8_t v___x_53_; uint32_t v___x_54_; uint32_t v___x_55_; uint32_t v___x_56_; uint32_t v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; uint32_t v___x_61_; uint32_t v___x_62_; uint32_t v___x_63_; uint32_t v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; uint8_t v___x_67_; uint32_t v___x_68_; uint32_t v___x_69_; uint32_t v___x_70_; uint32_t v___x_71_; lean_object* v___x_72_; 
v___x_49_ = lean_byte_array_get(v_bs_47_, v_o_48_);
v___x_50_ = lean_uint8_to_uint32(v___x_49_);
v___x_51_ = lean_unsigned_to_nat(1u);
v___x_52_ = lean_nat_add(v_o_48_, v___x_51_);
v___x_53_ = lean_byte_array_get(v_bs_47_, v___x_52_);
lean_dec(v___x_52_);
v___x_54_ = lean_uint8_to_uint32(v___x_53_);
v___x_55_ = 8;
v___x_56_ = lean_uint32_shift_left(v___x_54_, v___x_55_);
v___x_57_ = lean_uint32_lor(v___x_50_, v___x_56_);
v___x_58_ = lean_unsigned_to_nat(2u);
v___x_59_ = lean_nat_add(v_o_48_, v___x_58_);
v___x_60_ = lean_byte_array_get(v_bs_47_, v___x_59_);
lean_dec(v___x_59_);
v___x_61_ = lean_uint8_to_uint32(v___x_60_);
v___x_62_ = 16;
v___x_63_ = lean_uint32_shift_left(v___x_61_, v___x_62_);
v___x_64_ = lean_uint32_lor(v___x_57_, v___x_63_);
v___x_65_ = lean_unsigned_to_nat(3u);
v___x_66_ = lean_nat_add(v_o_48_, v___x_65_);
v___x_67_ = lean_byte_array_get(v_bs_47_, v___x_66_);
lean_dec(v___x_66_);
v___x_68_ = lean_uint8_to_uint32(v___x_67_);
v___x_69_ = 24;
v___x_70_ = lean_uint32_shift_left(v___x_68_, v___x_69_);
v___x_71_ = lean_uint32_lor(v___x_64_, v___x_70_);
v___x_72_ = lean_uint32_to_nat(v___x_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_getU32___boxed(lean_object* v_bs_73_, lean_object* v_o_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l___private_Lean_ConstTrie_0__Lean_getU32(v_bs_73_, v_o_74_);
lean_dec(v_o_74_);
lean_dec_ref(v_bs_73_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_topBits(uint64_t v_h_76_, uint64_t v_bits_77_){
_start:
{
uint64_t v___x_78_; uint64_t v___x_79_; uint64_t v___x_80_; lean_object* v___x_81_; 
v___x_78_ = 64ULL;
v___x_79_ = lean_uint64_sub(v___x_78_, v_bits_77_);
v___x_80_ = lean_uint64_shift_right(v_h_76_, v___x_79_);
v___x_81_ = lean_uint64_to_nat(v___x_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_topBits___boxed(lean_object* v_h_82_, lean_object* v_bits_83_){
_start:
{
uint64_t v_h_boxed_84_; uint64_t v_bits_boxed_85_; lean_object* v_res_86_; 
v_h_boxed_84_ = lean_unbox_uint64(v_h_82_);
lean_dec_ref(v_h_82_);
v_bits_boxed_85_ = lean_unbox_uint64(v_bits_83_);
lean_dec_ref(v_bits_83_);
v_res_86_ = l___private_Lean_ConstTrie_0__Lean_topBits(v_h_boxed_84_, v_bits_boxed_85_);
return v_res_86_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_fingerprint(uint64_t v_h_87_){
_start:
{
uint64_t v___x_88_; uint64_t v___x_89_; uint8_t v___x_90_; 
v___x_88_ = 32ULL;
v___x_89_ = lean_uint64_shift_right(v_h_87_, v___x_88_);
v___x_90_ = lean_uint64_to_uint8(v___x_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_fingerprint___boxed(lean_object* v_h_91_){
_start:
{
uint64_t v_h_boxed_92_; uint8_t v_res_93_; lean_object* v_r_94_; 
v_h_boxed_92_ = lean_unbox_uint64(v_h_91_);
lean_dec_ref(v_h_91_);
v_res_93_ = l___private_Lean_ConstTrie_0__Lean_fingerprint(v_h_boxed_92_);
v_r_94_ = lean_box(v_res_93_);
return v_r_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_pushU16(lean_object* v_bs_95_, lean_object* v_v_96_){
_start:
{
uint32_t v_v_97_; uint8_t v___x_98_; lean_object* v___x_99_; uint32_t v___x_100_; uint32_t v___x_101_; uint8_t v___x_102_; lean_object* v___x_103_; 
v_v_97_ = lean_uint32_of_nat(v_v_96_);
v___x_98_ = lean_uint32_to_uint8(v_v_97_);
v___x_99_ = lean_byte_array_push(v_bs_95_, v___x_98_);
v___x_100_ = 8;
v___x_101_ = lean_uint32_shift_right(v_v_97_, v___x_100_);
v___x_102_ = lean_uint32_to_uint8(v___x_101_);
v___x_103_ = lean_byte_array_push(v___x_99_, v___x_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_pushU16___boxed(lean_object* v_bs_104_, lean_object* v_v_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l___private_Lean_ConstTrie_0__Lean_pushU16(v_bs_104_, v_v_105_);
lean_dec(v_v_105_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_pushU32(lean_object* v_bs_107_, lean_object* v_v_108_){
_start:
{
uint32_t v_v_109_; uint8_t v___x_110_; lean_object* v___x_111_; uint32_t v___x_112_; uint32_t v___x_113_; uint8_t v___x_114_; lean_object* v___x_115_; uint32_t v___x_116_; uint32_t v___x_117_; uint8_t v___x_118_; lean_object* v___x_119_; uint32_t v___x_120_; uint32_t v___x_121_; uint8_t v___x_122_; lean_object* v___x_123_; 
v_v_109_ = lean_uint32_of_nat(v_v_108_);
v___x_110_ = lean_uint32_to_uint8(v_v_109_);
v___x_111_ = lean_byte_array_push(v_bs_107_, v___x_110_);
v___x_112_ = 8;
v___x_113_ = lean_uint32_shift_right(v_v_109_, v___x_112_);
v___x_114_ = lean_uint32_to_uint8(v___x_113_);
v___x_115_ = lean_byte_array_push(v___x_111_, v___x_114_);
v___x_116_ = 16;
v___x_117_ = lean_uint32_shift_right(v_v_109_, v___x_116_);
v___x_118_ = lean_uint32_to_uint8(v___x_117_);
v___x_119_ = lean_byte_array_push(v___x_115_, v___x_118_);
v___x_120_ = 24;
v___x_121_ = lean_uint32_shift_right(v_v_109_, v___x_120_);
v___x_122_ = lean_uint32_to_uint8(v___x_121_);
v___x_123_ = lean_byte_array_push(v___x_119_, v___x_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_pushU32___boxed(lean_object* v_bs_124_, lean_object* v_v_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l___private_Lean_ConstTrie_0__Lean_pushU32(v_bs_124_, v_v_125_);
lean_dec(v_v_125_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__0(lean_object* v_keyOf_127_, lean_object* v_a_128_, lean_object* v_x_129_, lean_object* v___y_130_){
_start:
{
uint64_t v___y_132_; lean_object* v___x_138_; 
v___x_138_ = lean_apply_1(v_keyOf_127_, v_a_128_);
if (lean_obj_tag(v___x_138_) == 0)
{
uint64_t v___x_139_; 
v___x_139_ = 1723ULL;
v___y_132_ = v___x_139_;
goto v___jp_131_;
}
else
{
uint64_t v_hash_140_; 
v_hash_140_ = lean_ctor_get_uint64(v___x_138_, sizeof(void*)*2);
lean_dec(v___x_138_);
v___y_132_ = v_hash_140_;
goto v___jp_131_;
}
v___jp_131_:
{
uint64_t v___x_133_; uint64_t v___x_134_; uint8_t v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_133_ = 32ULL;
v___x_134_ = lean_uint64_shift_right(v___y_132_, v___x_133_);
v___x_135_ = lean_uint64_to_uint8(v___x_134_);
v___x_136_ = lean_byte_array_push(v___y_130_, v___x_135_);
v___x_137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_137_, 0, v___x_136_);
return v___x_137_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__1(uint64_t v_bits_141_, lean_object* v_n_142_, uint64_t v_b_143_){
_start:
{
uint64_t v___x_144_; lean_object* v___x_145_; uint8_t v___x_146_; 
v___x_144_ = lean_uint64_shift_left(v_bits_141_, v_b_143_);
v___x_145_ = lean_uint64_to_nat(v___x_144_);
v___x_146_ = lean_nat_dec_lt(v___x_145_, v_n_142_);
lean_dec(v___x_145_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = lean_box_uint64(v_b_143_);
v___x_148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_148_, 0, v___x_147_);
return v___x_148_;
}
else
{
uint64_t v___x_149_; uint8_t v___x_150_; 
v___x_149_ = 24ULL;
v___x_150_ = lean_uint64_dec_lt(v_b_143_, v___x_149_);
if (v___x_150_ == 0)
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = lean_box_uint64(v_b_143_);
v___x_152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_152_, 0, v___x_151_);
return v___x_152_;
}
else
{
uint64_t v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_153_ = lean_uint64_add(v_b_143_, v_bits_141_);
v___x_154_ = lean_box_uint64(v___x_153_);
v___x_155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
return v___x_155_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__1___boxed(lean_object* v_bits_156_, lean_object* v_n_157_, lean_object* v_b_158_){
_start:
{
uint64_t v_bits_boxed_159_; uint64_t v_b_boxed_160_; lean_object* v_res_161_; 
v_bits_boxed_159_ = lean_unbox_uint64(v_bits_156_);
lean_dec_ref(v_bits_156_);
v_b_boxed_160_ = lean_unbox_uint64(v_b_158_);
lean_dec_ref(v_b_158_);
v_res_161_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__1(v_bits_boxed_159_, v_n_157_, v_b_boxed_160_);
lean_dec(v_n_157_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__2(lean_object* v_n_162_, lean_object* v___x_163_, lean_object* v_snd_164_, lean_object* v___x_165_, lean_object* v_inst_166_, lean_object* v_cs_167_, lean_object* v_keyOf_168_, lean_object* v_b_169_){
_start:
{
uint64_t v___y_171_; uint8_t v___x_181_; 
v___x_181_ = lean_nat_dec_lt(v_b_169_, v_n_162_);
if (v___x_181_ == 0)
{
lean_object* v___x_182_; 
lean_dec_ref(v_keyOf_168_);
v___x_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_182_, 0, v_b_169_);
return v___x_182_;
}
else
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_array_get_borrowed(v_inst_166_, v_cs_167_, v_b_169_);
lean_inc(v___x_183_);
v___x_184_ = lean_apply_1(v_keyOf_168_, v___x_183_);
if (lean_obj_tag(v___x_184_) == 0)
{
uint64_t v___x_185_; 
v___x_185_ = 1723ULL;
v___y_171_ = v___x_185_;
goto v___jp_170_;
}
else
{
uint64_t v_hash_186_; 
v_hash_186_ = lean_ctor_get_uint64(v___x_184_, sizeof(void*)*2);
lean_dec(v___x_184_);
v___y_171_ = v_hash_186_;
goto v___jp_170_;
}
}
v___jp_170_:
{
uint64_t v___x_172_; uint64_t v___x_173_; uint64_t v___x_174_; uint64_t v___x_175_; lean_object* v___x_176_; uint8_t v___x_177_; 
v___x_172_ = 64ULL;
v___x_173_ = lean_unbox_uint64(v___x_163_);
v___x_174_ = lean_uint64_sub(v___x_172_, v___x_173_);
v___x_175_ = lean_uint64_shift_right(v___y_171_, v___x_174_);
v___x_176_ = lean_uint64_to_nat(v___x_175_);
v___x_177_ = lean_nat_dec_lt(v___x_176_, v_snd_164_);
lean_dec(v___x_176_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; 
v___x_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_178_, 0, v_b_169_);
return v___x_178_;
}
else
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = lean_nat_add(v_b_169_, v___x_165_);
lean_dec(v_b_169_);
v___x_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
return v___x_180_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__2___boxed(lean_object* v_n_187_, lean_object* v___x_188_, lean_object* v_snd_189_, lean_object* v___x_190_, lean_object* v_inst_191_, lean_object* v_cs_192_, lean_object* v_keyOf_193_, lean_object* v_b_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__2(v_n_187_, v___x_188_, v_snd_189_, v___x_190_, v_inst_191_, v_cs_192_, v_keyOf_193_, v_b_194_);
lean_dec_ref(v_cs_192_);
lean_dec(v_inst_191_);
lean_dec(v___x_190_);
lean_dec(v_snd_189_);
lean_dec(v___x_188_);
lean_dec(v_n_187_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__3(lean_object* v___x_196_, lean_object* v_n_197_, lean_object* v___x_198_, lean_object* v___x_199_, lean_object* v_inst_200_, lean_object* v_cs_201_, lean_object* v_keyOf_202_, lean_object* v___x_203_, uint8_t v___x_204_, lean_object* v_b_205_){
_start:
{
lean_object* v_snd_206_; lean_object* v_fst_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_239_; 
v_snd_206_ = lean_ctor_get(v_b_205_, 1);
v_fst_207_ = lean_ctor_get(v_b_205_, 0);
v_isSharedCheck_239_ = !lean_is_exclusive(v_b_205_);
if (v_isSharedCheck_239_ == 0)
{
v___x_209_ = v_b_205_;
v_isShared_210_ = v_isSharedCheck_239_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_snd_206_);
lean_inc(v_fst_207_);
lean_dec(v_b_205_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_239_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v_fst_211_; lean_object* v_snd_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_238_; 
v_fst_211_ = lean_ctor_get(v_snd_206_, 0);
v_snd_212_ = lean_ctor_get(v_snd_206_, 1);
v_isSharedCheck_238_ = !lean_is_exclusive(v_snd_206_);
if (v_isSharedCheck_238_ == 0)
{
v___x_214_ = v_snd_206_;
v_isShared_215_ = v_isSharedCheck_238_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_snd_212_);
lean_inc(v_fst_211_);
lean_dec(v_snd_206_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_238_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
uint8_t v___x_216_; 
v___x_216_ = lean_nat_dec_lt(v_snd_212_, v___x_196_);
if (v___x_216_ == 0)
{
lean_object* v___x_218_; 
lean_dec_ref(v___x_203_);
lean_dec_ref(v_keyOf_202_);
lean_dec_ref(v_cs_201_);
lean_dec(v_inst_200_);
lean_dec(v___x_199_);
lean_dec(v___x_198_);
lean_dec(v_n_197_);
if (v_isShared_215_ == 0)
{
v___x_218_ = v___x_214_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v_fst_211_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v_snd_212_);
v___x_218_ = v_reuseFailAlloc_223_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
lean_object* v___x_220_; 
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 1, v___x_218_);
v___x_220_ = v___x_209_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_fst_207_);
lean_ctor_set(v_reuseFailAlloc_222_, 1, v___x_218_);
v___x_220_ = v_reuseFailAlloc_222_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
lean_object* v___x_221_; 
v___x_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
return v___x_221_;
}
}
}
else
{
lean_object* v___f_224_; lean_object* v___x_225_; lean_object* v___y_227_; 
lean_inc(v___x_199_);
lean_inc(v_snd_212_);
v___f_224_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_224_, 0, v_n_197_);
lean_closure_set(v___f_224_, 1, v___x_198_);
lean_closure_set(v___f_224_, 2, v_snd_212_);
lean_closure_set(v___f_224_, 3, v___x_199_);
lean_closure_set(v___f_224_, 4, v_inst_200_);
lean_closure_set(v___f_224_, 5, v_cs_201_);
lean_closure_set(v___f_224_, 6, v_keyOf_202_);
v___x_225_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_203_, v___f_224_, v_fst_211_);
if (v___x_204_ == 0)
{
lean_object* v___x_236_; 
v___x_236_ = l___private_Lean_ConstTrie_0__Lean_pushU16(v_fst_207_, v___x_225_);
v___y_227_ = v___x_236_;
goto v___jp_226_;
}
else
{
lean_object* v___x_237_; 
v___x_237_ = l___private_Lean_ConstTrie_0__Lean_pushU32(v_fst_207_, v___x_225_);
v___y_227_ = v___x_237_;
goto v___jp_226_;
}
v___jp_226_:
{
lean_object* v___x_228_; lean_object* v___x_230_; 
v___x_228_ = lean_nat_add(v_snd_212_, v___x_199_);
lean_dec(v___x_199_);
lean_dec(v_snd_212_);
if (v_isShared_215_ == 0)
{
lean_ctor_set(v___x_214_, 1, v___x_228_);
lean_ctor_set(v___x_214_, 0, v___x_225_);
v___x_230_ = v___x_214_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_225_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v___x_228_);
v___x_230_ = v_reuseFailAlloc_235_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
lean_object* v___x_232_; 
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 1, v___x_230_);
lean_ctor_set(v___x_209_, 0, v___y_227_);
v___x_232_ = v___x_209_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___y_227_);
lean_ctor_set(v_reuseFailAlloc_234_, 1, v___x_230_);
v___x_232_ = v_reuseFailAlloc_234_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
lean_object* v___x_233_; 
v___x_233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
return v___x_233_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__3___boxed(lean_object* v___x_240_, lean_object* v_n_241_, lean_object* v___x_242_, lean_object* v___x_243_, lean_object* v_inst_244_, lean_object* v_cs_245_, lean_object* v_keyOf_246_, lean_object* v___x_247_, lean_object* v___x_248_, lean_object* v_b_249_){
_start:
{
uint8_t v___x_1622__boxed_250_; lean_object* v_res_251_; 
v___x_1622__boxed_250_ = lean_unbox(v___x_248_);
v_res_251_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__3(v___x_240_, v_n_241_, v___x_242_, v___x_243_, v_inst_244_, v_cs_245_, v_keyOf_246_, v___x_247_, v___x_1622__boxed_250_, v_b_249_);
lean_dec(v___x_240_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg(lean_object* v_inst_275_, lean_object* v_cs_276_, lean_object* v_keyOf_277_){
_start:
{
lean_object* v___x_278_; lean_object* v_n_279_; lean_object* v_j_280_; uint8_t v___x_281_; 
v___x_278_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__9));
v_n_279_ = lean_array_get_size(v_cs_276_);
v_j_280_ = lean_unsigned_to_nat(0u);
v___x_281_ = lean_nat_dec_eq(v_n_279_, v_j_280_);
if (v___x_281_ == 0)
{
lean_object* v___f_282_; lean_object* v___x_283_; uint64_t v_bits_284_; lean_object* v___x_285_; lean_object* v___f_286_; lean_object* v___x_287_; lean_object* v___x_288_; uint64_t v___x_289_; uint64_t v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; uint8_t v___x_294_; lean_object* v___x_295_; lean_object* v___f_296_; lean_object* v___y_298_; uint8_t v___y_299_; lean_object* v___y_309_; 
lean_inc_ref(v_keyOf_277_);
v___f_282_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__0), 4, 1);
lean_closure_set(v___f_282_, 0, v_keyOf_277_);
v___x_283_ = lean_unsigned_to_nat(1u);
v_bits_284_ = 1ULL;
v___x_285_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___boxed__const__1));
v___f_286_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_286_, 0, v___x_285_);
lean_closure_set(v___f_286_, 1, v_n_279_);
v___x_287_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___boxed__const__1));
v___x_288_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_278_, v___f_286_, v___x_287_);
v___x_289_ = lean_unbox_uint64(v___x_288_);
v___x_290_ = lean_uint64_shift_left(v_bits_284_, v___x_289_);
v___x_291_ = lean_uint64_to_nat(v___x_290_);
v___x_292_ = lean_nat_add(v___x_291_, v___x_283_);
lean_dec(v___x_291_);
v___x_293_ = lean_unsigned_to_nat(65535u);
v___x_294_ = lean_nat_dec_le(v___x_293_, v_n_279_);
v___x_295_ = lean_box(v___x_294_);
lean_inc_ref(v_cs_276_);
lean_inc(v___x_288_);
lean_inc(v___x_292_);
v___f_296_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___lam__3___boxed), 10, 9);
lean_closure_set(v___f_296_, 0, v___x_292_);
lean_closure_set(v___f_296_, 1, v_n_279_);
lean_closure_set(v___f_296_, 2, v___x_288_);
lean_closure_set(v___f_296_, 3, v___x_283_);
lean_closure_set(v___f_296_, 4, v_inst_275_);
lean_closure_set(v___f_296_, 5, v_cs_276_);
lean_closure_set(v___f_296_, 6, v_keyOf_277_);
lean_closure_set(v___f_296_, 7, v___x_278_);
lean_closure_set(v___f_296_, 8, v___x_295_);
if (v___x_294_ == 0)
{
lean_object* v___x_320_; 
v___x_320_ = lean_unsigned_to_nat(2u);
v___y_309_ = v___x_320_;
goto v___jp_308_;
}
else
{
lean_object* v___x_321_; 
v___x_321_ = lean_unsigned_to_nat(4u);
v___y_309_ = v___x_321_;
goto v___jp_308_;
}
v___jp_297_:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v_fst_304_; size_t v_sz_305_; size_t v___x_306_; lean_object* v___x_307_; 
v___x_300_ = lean_byte_array_push(v___y_298_, v___y_299_);
v___x_301_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10));
v___x_302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_300_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_278_, v___f_296_, v___x_302_);
v_fst_304_ = lean_ctor_get(v___x_303_, 0);
lean_inc(v_fst_304_);
lean_dec(v___x_303_);
v_sz_305_ = lean_array_size(v_cs_276_);
v___x_306_ = ((size_t)0ULL);
v___x_307_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_278_, v_cs_276_, v___f_282_, v_sz_305_, v___x_306_, v_fst_304_);
return v___x_307_;
}
v___jp_308_:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_310_ = lean_nat_mul(v___y_309_, v___x_292_);
lean_dec(v___x_292_);
v___x_311_ = lean_nat_add(v___x_283_, v___x_310_);
lean_dec(v___x_310_);
v___x_312_ = lean_nat_add(v___x_311_, v_n_279_);
lean_dec(v___x_311_);
v___x_313_ = lean_mk_empty_byte_array(v___x_312_);
lean_dec(v___x_312_);
if (v___x_294_ == 0)
{
uint64_t v___x_314_; uint8_t v___x_315_; 
v___x_314_ = lean_unbox_uint64(v___x_288_);
lean_dec(v___x_288_);
v___x_315_ = lean_uint64_to_uint8(v___x_314_);
v___y_298_ = v___x_313_;
v___y_299_ = v___x_315_;
goto v___jp_297_;
}
else
{
uint64_t v___x_316_; uint8_t v___x_317_; uint8_t v___x_318_; uint8_t v___x_319_; 
v___x_316_ = lean_unbox_uint64(v___x_288_);
lean_dec(v___x_288_);
v___x_317_ = lean_uint64_to_uint8(v___x_316_);
v___x_318_ = 128;
v___x_319_ = lean_uint8_lor(v___x_317_, v___x_318_);
v___y_298_ = v___x_313_;
v___y_299_ = v___x_319_;
goto v___jp_297_;
}
}
}
else
{
lean_object* v___x_322_; 
lean_dec_ref(v_keyOf_277_);
lean_dec_ref(v_cs_276_);
lean_dec(v_inst_275_);
v___x_322_ = l_ByteArray_empty;
return v___x_322_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex(lean_object* v_00_u03b2_323_, lean_object* v_inst_324_, lean_object* v_cs_325_, lean_object* v_keyOf_326_){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg(v_inst_324_, v_cs_325_, v_keyOf_326_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___redArg(lean_object* v_inst_328_, lean_object* v_index_329_, lean_object* v_cs_330_, lean_object* v_keyOf_331_, lean_object* v_k_332_, uint8_t v_fp_333_, lean_object* v_fpOff_334_, lean_object* v_j_335_, lean_object* v_hi_336_){
_start:
{
uint8_t v___y_342_; uint8_t v___x_344_; 
v___x_344_ = lean_nat_dec_lt(v_j_335_, v_hi_336_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; 
lean_dec(v_j_335_);
lean_dec_ref(v_keyOf_331_);
v___x_345_ = lean_box(0);
return v___x_345_;
}
else
{
lean_object* v___x_346_; uint8_t v___x_347_; uint8_t v___x_348_; 
v___x_346_ = lean_nat_add(v_fpOff_334_, v_j_335_);
v___x_347_ = lean_byte_array_get(v_index_329_, v___x_346_);
lean_dec(v___x_346_);
v___x_348_ = lean_uint8_dec_eq(v___x_347_, v_fp_333_);
if (v___x_348_ == 0)
{
goto v___jp_337_;
}
else
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = lean_array_get_borrowed(v_inst_328_, v_cs_330_, v_j_335_);
lean_inc_ref(v_keyOf_331_);
lean_inc(v___x_349_);
v___x_350_ = lean_apply_1(v_keyOf_331_, v___x_349_);
switch(lean_obj_tag(v___x_350_))
{
case 0:
{
if (lean_obj_tag(v_k_332_) == 0)
{
lean_object* v___x_351_; 
lean_dec_ref(v_keyOf_331_);
v___x_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_351_, 0, v_j_335_);
return v___x_351_;
}
else
{
goto v___jp_337_;
}
}
case 1:
{
if (lean_obj_tag(v_k_332_) == 1)
{
lean_object* v_str_352_; lean_object* v_str_353_; uint8_t v___x_354_; 
v_str_352_ = lean_ctor_get(v___x_350_, 1);
lean_inc_ref(v_str_352_);
lean_dec_ref_known(v___x_350_, 2);
v_str_353_ = lean_ctor_get(v_k_332_, 1);
v___x_354_ = lean_string_dec_eq(v_str_352_, v_str_353_);
lean_dec_ref(v_str_352_);
v___y_342_ = v___x_354_;
goto v___jp_341_;
}
else
{
lean_dec_ref_known(v___x_350_, 2);
goto v___jp_337_;
}
}
default: 
{
if (lean_obj_tag(v_k_332_) == 2)
{
lean_object* v_i_355_; lean_object* v_i_356_; uint8_t v___x_357_; 
v_i_355_ = lean_ctor_get(v___x_350_, 1);
lean_inc(v_i_355_);
lean_dec_ref_known(v___x_350_, 2);
v_i_356_ = lean_ctor_get(v_k_332_, 1);
v___x_357_ = lean_nat_dec_eq(v_i_355_, v_i_356_);
lean_dec(v_i_355_);
v___y_342_ = v___x_357_;
goto v___jp_341_;
}
else
{
lean_dec_ref_known(v___x_350_, 2);
goto v___jp_337_;
}
}
}
}
}
v___jp_337_:
{
lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_338_ = lean_unsigned_to_nat(1u);
v___x_339_ = lean_nat_add(v_j_335_, v___x_338_);
lean_dec(v_j_335_);
v_j_335_ = v___x_339_;
goto _start;
}
v___jp_341_:
{
if (v___y_342_ == 0)
{
goto v___jp_337_;
}
else
{
lean_object* v___x_343_; 
lean_dec_ref(v_keyOf_331_);
v___x_343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_343_, 0, v_j_335_);
return v___x_343_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___redArg___boxed(lean_object* v_inst_358_, lean_object* v_index_359_, lean_object* v_cs_360_, lean_object* v_keyOf_361_, lean_object* v_k_362_, lean_object* v_fp_363_, lean_object* v_fpOff_364_, lean_object* v_j_365_, lean_object* v_hi_366_){
_start:
{
uint8_t v_fp_boxed_367_; lean_object* v_res_368_; 
v_fp_boxed_367_ = lean_unbox(v_fp_363_);
v_res_368_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___redArg(v_inst_358_, v_index_359_, v_cs_360_, v_keyOf_361_, v_k_362_, v_fp_boxed_367_, v_fpOff_364_, v_j_365_, v_hi_366_);
lean_dec(v_hi_366_);
lean_dec(v_fpOff_364_);
lean_dec(v_k_362_);
lean_dec_ref(v_cs_360_);
lean_dec_ref(v_index_359_);
lean_dec(v_inst_358_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow(lean_object* v_00_u03b2_369_, lean_object* v_inst_370_, lean_object* v_index_371_, lean_object* v_cs_372_, lean_object* v_keyOf_373_, lean_object* v_k_374_, uint8_t v_fp_375_, lean_object* v_fpOff_376_, lean_object* v_j_377_, lean_object* v_hi_378_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___redArg(v_inst_370_, v_index_371_, v_cs_372_, v_keyOf_373_, v_k_374_, v_fp_375_, v_fpOff_376_, v_j_377_, v_hi_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___boxed(lean_object* v_00_u03b2_380_, lean_object* v_inst_381_, lean_object* v_index_382_, lean_object* v_cs_383_, lean_object* v_keyOf_384_, lean_object* v_k_385_, lean_object* v_fp_386_, lean_object* v_fpOff_387_, lean_object* v_j_388_, lean_object* v_hi_389_){
_start:
{
uint8_t v_fp_boxed_390_; lean_object* v_res_391_; 
v_fp_boxed_390_ = lean_unbox(v_fp_386_);
v_res_391_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow(v_00_u03b2_380_, v_inst_381_, v_index_382_, v_cs_383_, v_keyOf_384_, v_k_385_, v_fp_boxed_390_, v_fpOff_387_, v_j_388_, v_hi_389_);
lean_dec(v_hi_389_);
lean_dec(v_fpOff_387_);
lean_dec(v_k_385_);
lean_dec_ref(v_cs_383_);
lean_dec_ref(v_index_382_);
lean_dec(v_inst_381_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___redArg(lean_object* v_inst_392_, lean_object* v_index_393_, lean_object* v_cs_394_, lean_object* v_keyOf_395_, lean_object* v_k_396_){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; uint64_t v___y_400_; uint8_t v___x_504_; 
v___x_397_ = lean_byte_array_size(v_index_393_);
v___x_398_ = lean_unsigned_to_nat(0u);
v___x_504_ = lean_nat_dec_eq(v___x_397_, v___x_398_);
if (v___x_504_ == 0)
{
if (lean_obj_tag(v_k_396_) == 0)
{
uint64_t v___x_505_; 
v___x_505_ = 1723ULL;
v___y_400_ = v___x_505_;
goto v___jp_399_;
}
else
{
uint64_t v_hash_506_; 
v_hash_506_ = lean_ctor_get_uint64(v_k_396_, sizeof(void*)*2);
v___y_400_ = v_hash_506_;
goto v___jp_399_;
}
}
else
{
lean_object* v___x_507_; 
lean_dec_ref(v_keyOf_395_);
v___x_507_ = lean_box(0);
return v___x_507_;
}
v___jp_399_:
{
uint8_t v_header_401_; uint8_t v___x_402_; uint8_t v___x_403_; uint64_t v_bits_404_; uint64_t v___x_405_; uint64_t v___x_406_; uint64_t v___x_407_; lean_object* v_slot_408_; uint8_t v___x_409_; uint8_t v___x_410_; uint8_t v___x_411_; uint8_t v___x_412_; 
v_header_401_ = lean_byte_array_get(v_index_393_, v___x_398_);
v___x_402_ = 31;
v___x_403_ = lean_uint8_land(v_header_401_, v___x_402_);
v_bits_404_ = lean_uint8_to_uint64(v___x_403_);
v___x_405_ = 64ULL;
v___x_406_ = lean_uint64_sub(v___x_405_, v_bits_404_);
v___x_407_ = lean_uint64_shift_right(v___y_400_, v___x_406_);
v_slot_408_ = lean_uint64_to_nat(v___x_407_);
v___x_409_ = 128;
v___x_410_ = lean_uint8_land(v_header_401_, v___x_409_);
v___x_411_ = 0;
v___x_412_ = lean_uint8_dec_eq(v___x_410_, v___x_411_);
if (v___x_412_ == 0)
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; uint8_t v___x_417_; uint32_t v___x_418_; lean_object* v___x_419_; uint8_t v___x_420_; uint32_t v___x_421_; uint32_t v___x_422_; uint32_t v___x_423_; uint32_t v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; uint8_t v___x_427_; uint32_t v___x_428_; uint32_t v___x_429_; uint32_t v___x_430_; uint32_t v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; uint8_t v___x_434_; uint32_t v___x_435_; uint32_t v___x_436_; uint32_t v___x_437_; uint32_t v___x_438_; lean_object* v_lo_439_; lean_object* v___x_440_; lean_object* v___x_441_; uint8_t v___x_442_; uint32_t v___x_443_; lean_object* v___x_444_; uint8_t v___x_445_; uint32_t v___x_446_; uint32_t v___x_447_; uint32_t v___x_448_; lean_object* v___x_449_; uint8_t v___x_450_; uint32_t v___x_451_; uint32_t v___x_452_; uint32_t v___x_453_; lean_object* v___x_454_; uint8_t v___x_455_; uint32_t v___x_456_; uint32_t v___x_457_; uint32_t v___x_458_; lean_object* v_hi_459_; uint64_t v___x_460_; uint64_t v___x_461_; uint64_t v___x_462_; uint64_t v___x_463_; uint64_t v___x_464_; uint64_t v___x_465_; lean_object* v_fpOff_466_; uint64_t v___x_467_; uint64_t v___x_468_; uint8_t v___x_469_; lean_object* v___x_470_; 
v___x_413_ = lean_unsigned_to_nat(1u);
v___x_414_ = lean_unsigned_to_nat(4u);
v___x_415_ = lean_nat_mul(v___x_414_, v_slot_408_);
lean_dec(v_slot_408_);
v___x_416_ = lean_nat_add(v___x_413_, v___x_415_);
v___x_417_ = lean_byte_array_get(v_index_393_, v___x_416_);
v___x_418_ = lean_uint8_to_uint32(v___x_417_);
v___x_419_ = lean_nat_add(v___x_416_, v___x_413_);
v___x_420_ = lean_byte_array_get(v_index_393_, v___x_419_);
lean_dec(v___x_419_);
v___x_421_ = lean_uint8_to_uint32(v___x_420_);
v___x_422_ = 8;
v___x_423_ = lean_uint32_shift_left(v___x_421_, v___x_422_);
v___x_424_ = lean_uint32_lor(v___x_418_, v___x_423_);
v___x_425_ = lean_unsigned_to_nat(2u);
v___x_426_ = lean_nat_add(v___x_416_, v___x_425_);
v___x_427_ = lean_byte_array_get(v_index_393_, v___x_426_);
lean_dec(v___x_426_);
v___x_428_ = lean_uint8_to_uint32(v___x_427_);
v___x_429_ = 16;
v___x_430_ = lean_uint32_shift_left(v___x_428_, v___x_429_);
v___x_431_ = lean_uint32_lor(v___x_424_, v___x_430_);
v___x_432_ = lean_unsigned_to_nat(3u);
v___x_433_ = lean_nat_add(v___x_416_, v___x_432_);
lean_dec(v___x_416_);
v___x_434_ = lean_byte_array_get(v_index_393_, v___x_433_);
lean_dec(v___x_433_);
v___x_435_ = lean_uint8_to_uint32(v___x_434_);
v___x_436_ = 24;
v___x_437_ = lean_uint32_shift_left(v___x_435_, v___x_436_);
v___x_438_ = lean_uint32_lor(v___x_431_, v___x_437_);
v_lo_439_ = lean_uint32_to_nat(v___x_438_);
v___x_440_ = lean_unsigned_to_nat(5u);
v___x_441_ = lean_nat_add(v___x_440_, v___x_415_);
lean_dec(v___x_415_);
v___x_442_ = lean_byte_array_get(v_index_393_, v___x_441_);
v___x_443_ = lean_uint8_to_uint32(v___x_442_);
v___x_444_ = lean_nat_add(v___x_441_, v___x_413_);
v___x_445_ = lean_byte_array_get(v_index_393_, v___x_444_);
lean_dec(v___x_444_);
v___x_446_ = lean_uint8_to_uint32(v___x_445_);
v___x_447_ = lean_uint32_shift_left(v___x_446_, v___x_422_);
v___x_448_ = lean_uint32_lor(v___x_443_, v___x_447_);
v___x_449_ = lean_nat_add(v___x_441_, v___x_425_);
v___x_450_ = lean_byte_array_get(v_index_393_, v___x_449_);
lean_dec(v___x_449_);
v___x_451_ = lean_uint8_to_uint32(v___x_450_);
v___x_452_ = lean_uint32_shift_left(v___x_451_, v___x_429_);
v___x_453_ = lean_uint32_lor(v___x_448_, v___x_452_);
v___x_454_ = lean_nat_add(v___x_441_, v___x_432_);
lean_dec(v___x_441_);
v___x_455_ = lean_byte_array_get(v_index_393_, v___x_454_);
lean_dec(v___x_454_);
v___x_456_ = lean_uint8_to_uint32(v___x_455_);
v___x_457_ = lean_uint32_shift_left(v___x_456_, v___x_436_);
v___x_458_ = lean_uint32_lor(v___x_453_, v___x_457_);
v_hi_459_ = lean_uint32_to_nat(v___x_458_);
v___x_460_ = 5ULL;
v___x_461_ = 1ULL;
v___x_462_ = lean_uint64_shift_left(v___x_461_, v_bits_404_);
v___x_463_ = 2ULL;
v___x_464_ = lean_uint64_shift_left(v___x_462_, v___x_463_);
v___x_465_ = lean_uint64_add(v___x_460_, v___x_464_);
v_fpOff_466_ = lean_uint64_to_nat(v___x_465_);
v___x_467_ = 32ULL;
v___x_468_ = lean_uint64_shift_right(v___y_400_, v___x_467_);
v___x_469_ = lean_uint64_to_uint8(v___x_468_);
v___x_470_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___redArg(v_inst_392_, v_index_393_, v_cs_394_, v_keyOf_395_, v_k_396_, v___x_469_, v_fpOff_466_, v_lo_439_, v_hi_459_);
lean_dec(v_hi_459_);
lean_dec(v_fpOff_466_);
return v___x_470_;
}
else
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; uint8_t v___x_475_; uint32_t v___x_476_; lean_object* v___x_477_; uint8_t v___x_478_; uint32_t v___x_479_; uint32_t v___x_480_; uint32_t v___x_481_; uint32_t v___x_482_; lean_object* v_lo_483_; lean_object* v___x_484_; lean_object* v___x_485_; uint8_t v___x_486_; uint32_t v___x_487_; lean_object* v___x_488_; uint8_t v___x_489_; uint32_t v___x_490_; uint32_t v___x_491_; uint32_t v___x_492_; lean_object* v_hi_493_; uint64_t v___x_494_; uint64_t v___x_495_; uint64_t v___x_496_; uint64_t v___x_497_; uint64_t v___x_498_; lean_object* v_fpOff_499_; uint64_t v___x_500_; uint64_t v___x_501_; uint8_t v___x_502_; lean_object* v___x_503_; 
v___x_471_ = lean_unsigned_to_nat(1u);
v___x_472_ = lean_unsigned_to_nat(2u);
v___x_473_ = lean_nat_mul(v___x_472_, v_slot_408_);
lean_dec(v_slot_408_);
v___x_474_ = lean_nat_add(v___x_471_, v___x_473_);
v___x_475_ = lean_byte_array_get(v_index_393_, v___x_474_);
v___x_476_ = lean_uint8_to_uint32(v___x_475_);
v___x_477_ = lean_nat_add(v___x_474_, v___x_471_);
lean_dec(v___x_474_);
v___x_478_ = lean_byte_array_get(v_index_393_, v___x_477_);
lean_dec(v___x_477_);
v___x_479_ = lean_uint8_to_uint32(v___x_478_);
v___x_480_ = 8;
v___x_481_ = lean_uint32_shift_left(v___x_479_, v___x_480_);
v___x_482_ = lean_uint32_lor(v___x_476_, v___x_481_);
v_lo_483_ = lean_uint32_to_nat(v___x_482_);
v___x_484_ = lean_unsigned_to_nat(3u);
v___x_485_ = lean_nat_add(v___x_484_, v___x_473_);
lean_dec(v___x_473_);
v___x_486_ = lean_byte_array_get(v_index_393_, v___x_485_);
v___x_487_ = lean_uint8_to_uint32(v___x_486_);
v___x_488_ = lean_nat_add(v___x_485_, v___x_471_);
lean_dec(v___x_485_);
v___x_489_ = lean_byte_array_get(v_index_393_, v___x_488_);
lean_dec(v___x_488_);
v___x_490_ = lean_uint8_to_uint32(v___x_489_);
v___x_491_ = lean_uint32_shift_left(v___x_490_, v___x_480_);
v___x_492_ = lean_uint32_lor(v___x_487_, v___x_491_);
v_hi_493_ = lean_uint32_to_nat(v___x_492_);
v___x_494_ = 3ULL;
v___x_495_ = 1ULL;
v___x_496_ = lean_uint64_shift_left(v___x_495_, v_bits_404_);
v___x_497_ = lean_uint64_shift_left(v___x_496_, v___x_495_);
v___x_498_ = lean_uint64_add(v___x_494_, v___x_497_);
v_fpOff_499_ = lean_uint64_to_nat(v___x_498_);
v___x_500_ = 32ULL;
v___x_501_ = lean_uint64_shift_right(v___y_400_, v___x_500_);
v___x_502_ = lean_uint64_to_uint8(v___x_501_);
v___x_503_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___redArg(v_inst_392_, v_index_393_, v_cs_394_, v_keyOf_395_, v_k_396_, v___x_502_, v_fpOff_499_, v_lo_483_, v_hi_493_);
lean_dec(v_hi_493_);
lean_dec(v_fpOff_499_);
return v___x_503_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___redArg___boxed(lean_object* v_inst_508_, lean_object* v_index_509_, lean_object* v_cs_510_, lean_object* v_keyOf_511_, lean_object* v_k_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___redArg(v_inst_508_, v_index_509_, v_cs_510_, v_keyOf_511_, v_k_512_);
lean_dec(v_k_512_);
lean_dec_ref(v_cs_510_);
lean_dec_ref(v_index_509_);
lean_dec(v_inst_508_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f(lean_object* v_00_u03b2_514_, lean_object* v_inst_515_, lean_object* v_index_516_, lean_object* v_cs_517_, lean_object* v_keyOf_518_, lean_object* v_k_519_){
_start:
{
lean_object* v___x_520_; 
v___x_520_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___redArg(v_inst_515_, v_index_516_, v_cs_517_, v_keyOf_518_, v_k_519_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___boxed(lean_object* v_00_u03b2_521_, lean_object* v_inst_522_, lean_object* v_index_523_, lean_object* v_cs_524_, lean_object* v_keyOf_525_, lean_object* v_k_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f(v_00_u03b2_521_, v_inst_522_, v_index_523_, v_cs_524_, v_keyOf_525_, v_k_526_);
lean_dec(v_k_526_);
lean_dec_ref(v_cs_524_);
lean_dec_ref(v_index_523_);
lean_dec(v_inst_522_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_prefixesOf(lean_object* v_n_528_, lean_object* v_acc_529_){
_start:
{
if (lean_obj_tag(v_n_528_) == 0)
{
return v_acc_529_;
}
else
{
lean_object* v_pre_530_; lean_object* v___x_531_; 
v_pre_530_ = lean_ctor_get(v_n_528_, 0);
lean_inc(v_pre_530_);
v___x_531_ = lean_array_push(v_acc_529_, v_n_528_);
v_n_528_ = v_pre_530_;
v_acc_529_ = v___x_531_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(lean_object* v_index_533_, lean_object* v_cs_534_, lean_object* v_k_535_, uint8_t v_fp_536_, lean_object* v_fpOff_537_, lean_object* v_j_538_, lean_object* v_hi_539_){
_start:
{
uint8_t v___y_545_; uint8_t v___x_547_; 
v___x_547_ = lean_nat_dec_lt(v_j_538_, v_hi_539_);
if (v___x_547_ == 0)
{
lean_object* v___x_548_; 
lean_dec(v_j_538_);
v___x_548_ = lean_box(0);
return v___x_548_;
}
else
{
lean_object* v___x_549_; uint8_t v___x_550_; uint8_t v___x_551_; 
v___x_549_ = lean_nat_add(v_fpOff_537_, v_j_538_);
v___x_550_ = lean_byte_array_get(v_index_533_, v___x_549_);
lean_dec(v___x_549_);
v___x_551_ = lean_uint8_dec_eq(v___x_550_, v_fp_536_);
if (v___x_551_ == 0)
{
goto v___jp_540_;
}
else
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v_key_554_; 
v___x_552_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
v___x_553_ = lean_array_get_borrowed(v___x_552_, v_cs_534_, v_j_538_);
v_key_554_ = lean_ctor_get(v___x_553_, 0);
switch(lean_obj_tag(v_key_554_))
{
case 0:
{
if (lean_obj_tag(v_k_535_) == 0)
{
lean_object* v___x_555_; 
v___x_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_555_, 0, v_j_538_);
return v___x_555_;
}
else
{
goto v___jp_540_;
}
}
case 1:
{
if (lean_obj_tag(v_k_535_) == 1)
{
lean_object* v_str_556_; lean_object* v_str_557_; uint8_t v___x_558_; 
v_str_556_ = lean_ctor_get(v_key_554_, 1);
v_str_557_ = lean_ctor_get(v_k_535_, 1);
v___x_558_ = lean_string_dec_eq(v_str_556_, v_str_557_);
v___y_545_ = v___x_558_;
goto v___jp_544_;
}
else
{
goto v___jp_540_;
}
}
default: 
{
if (lean_obj_tag(v_k_535_) == 2)
{
lean_object* v_i_559_; lean_object* v_i_560_; uint8_t v___x_561_; 
v_i_559_ = lean_ctor_get(v_key_554_, 1);
v_i_560_ = lean_ctor_get(v_k_535_, 1);
v___x_561_ = lean_nat_dec_eq(v_i_559_, v_i_560_);
v___y_545_ = v___x_561_;
goto v___jp_544_;
}
else
{
goto v___jp_540_;
}
}
}
}
}
v___jp_540_:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_541_ = lean_unsigned_to_nat(1u);
v___x_542_ = lean_nat_add(v_j_538_, v___x_541_);
lean_dec(v_j_538_);
v_j_538_ = v___x_542_;
goto _start;
}
v___jp_544_:
{
if (v___y_545_ == 0)
{
goto v___jp_540_;
}
else
{
lean_object* v___x_546_; 
v___x_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_546_, 0, v_j_538_);
return v___x_546_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___boxed(lean_object* v_index_562_, lean_object* v_cs_563_, lean_object* v_k_564_, lean_object* v_fp_565_, lean_object* v_fpOff_566_, lean_object* v_j_567_, lean_object* v_hi_568_){
_start:
{
uint8_t v_fp_boxed_569_; lean_object* v_res_570_; 
v_fp_boxed_569_ = lean_unbox(v_fp_565_);
v_res_570_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(v_index_562_, v_cs_563_, v_k_564_, v_fp_boxed_569_, v_fpOff_566_, v_j_567_, v_hi_568_);
lean_dec(v_hi_568_);
lean_dec(v_fpOff_566_);
lean_dec(v_k_564_);
lean_dec_ref(v_cs_563_);
lean_dec_ref(v_index_562_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(lean_object* v_index_571_, lean_object* v_cs_572_, lean_object* v_k_573_){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; uint64_t v___y_577_; uint8_t v___x_681_; 
v___x_574_ = lean_byte_array_size(v_index_571_);
v___x_575_ = lean_unsigned_to_nat(0u);
v___x_681_ = lean_nat_dec_eq(v___x_574_, v___x_575_);
if (v___x_681_ == 0)
{
if (lean_obj_tag(v_k_573_) == 0)
{
uint64_t v___x_682_; 
v___x_682_ = 1723ULL;
v___y_577_ = v___x_682_;
goto v___jp_576_;
}
else
{
uint64_t v_hash_683_; 
v_hash_683_ = lean_ctor_get_uint64(v_k_573_, sizeof(void*)*2);
v___y_577_ = v_hash_683_;
goto v___jp_576_;
}
}
else
{
lean_object* v___x_684_; 
v___x_684_ = lean_box(0);
return v___x_684_;
}
v___jp_576_:
{
uint8_t v_header_578_; uint8_t v___x_579_; uint8_t v___x_580_; uint64_t v_bits_581_; uint64_t v___x_582_; uint64_t v___x_583_; uint64_t v___x_584_; lean_object* v_slot_585_; uint8_t v___x_586_; uint8_t v___x_587_; uint8_t v___x_588_; uint8_t v___x_589_; 
v_header_578_ = lean_byte_array_get(v_index_571_, v___x_575_);
v___x_579_ = 31;
v___x_580_ = lean_uint8_land(v_header_578_, v___x_579_);
v_bits_581_ = lean_uint8_to_uint64(v___x_580_);
v___x_582_ = 64ULL;
v___x_583_ = lean_uint64_sub(v___x_582_, v_bits_581_);
v___x_584_ = lean_uint64_shift_right(v___y_577_, v___x_583_);
v_slot_585_ = lean_uint64_to_nat(v___x_584_);
v___x_586_ = 128;
v___x_587_ = lean_uint8_land(v_header_578_, v___x_586_);
v___x_588_ = 0;
v___x_589_ = lean_uint8_dec_eq(v___x_587_, v___x_588_);
if (v___x_589_ == 0)
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; uint8_t v___x_594_; uint32_t v___x_595_; lean_object* v___x_596_; uint8_t v___x_597_; uint32_t v___x_598_; uint32_t v___x_599_; uint32_t v___x_600_; uint32_t v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; uint8_t v___x_604_; uint32_t v___x_605_; uint32_t v___x_606_; uint32_t v___x_607_; uint32_t v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; uint8_t v___x_611_; uint32_t v___x_612_; uint32_t v___x_613_; uint32_t v___x_614_; uint32_t v___x_615_; lean_object* v_lo_616_; lean_object* v___x_617_; lean_object* v___x_618_; uint8_t v___x_619_; uint32_t v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; uint32_t v___x_623_; uint32_t v___x_624_; uint32_t v___x_625_; lean_object* v___x_626_; uint8_t v___x_627_; uint32_t v___x_628_; uint32_t v___x_629_; uint32_t v___x_630_; lean_object* v___x_631_; uint8_t v___x_632_; uint32_t v___x_633_; uint32_t v___x_634_; uint32_t v___x_635_; lean_object* v_hi_636_; uint64_t v___x_637_; uint64_t v___x_638_; uint64_t v___x_639_; uint64_t v___x_640_; uint64_t v___x_641_; uint64_t v___x_642_; lean_object* v_fpOff_643_; uint64_t v___x_644_; uint64_t v___x_645_; uint8_t v___x_646_; lean_object* v___x_647_; 
v___x_590_ = lean_unsigned_to_nat(1u);
v___x_591_ = lean_unsigned_to_nat(4u);
v___x_592_ = lean_nat_mul(v___x_591_, v_slot_585_);
lean_dec(v_slot_585_);
v___x_593_ = lean_nat_add(v___x_590_, v___x_592_);
v___x_594_ = lean_byte_array_get(v_index_571_, v___x_593_);
v___x_595_ = lean_uint8_to_uint32(v___x_594_);
v___x_596_ = lean_nat_add(v___x_593_, v___x_590_);
v___x_597_ = lean_byte_array_get(v_index_571_, v___x_596_);
lean_dec(v___x_596_);
v___x_598_ = lean_uint8_to_uint32(v___x_597_);
v___x_599_ = 8;
v___x_600_ = lean_uint32_shift_left(v___x_598_, v___x_599_);
v___x_601_ = lean_uint32_lor(v___x_595_, v___x_600_);
v___x_602_ = lean_unsigned_to_nat(2u);
v___x_603_ = lean_nat_add(v___x_593_, v___x_602_);
v___x_604_ = lean_byte_array_get(v_index_571_, v___x_603_);
lean_dec(v___x_603_);
v___x_605_ = lean_uint8_to_uint32(v___x_604_);
v___x_606_ = 16;
v___x_607_ = lean_uint32_shift_left(v___x_605_, v___x_606_);
v___x_608_ = lean_uint32_lor(v___x_601_, v___x_607_);
v___x_609_ = lean_unsigned_to_nat(3u);
v___x_610_ = lean_nat_add(v___x_593_, v___x_609_);
lean_dec(v___x_593_);
v___x_611_ = lean_byte_array_get(v_index_571_, v___x_610_);
lean_dec(v___x_610_);
v___x_612_ = lean_uint8_to_uint32(v___x_611_);
v___x_613_ = 24;
v___x_614_ = lean_uint32_shift_left(v___x_612_, v___x_613_);
v___x_615_ = lean_uint32_lor(v___x_608_, v___x_614_);
v_lo_616_ = lean_uint32_to_nat(v___x_615_);
v___x_617_ = lean_unsigned_to_nat(5u);
v___x_618_ = lean_nat_add(v___x_617_, v___x_592_);
lean_dec(v___x_592_);
v___x_619_ = lean_byte_array_get(v_index_571_, v___x_618_);
v___x_620_ = lean_uint8_to_uint32(v___x_619_);
v___x_621_ = lean_nat_add(v___x_618_, v___x_590_);
v___x_622_ = lean_byte_array_get(v_index_571_, v___x_621_);
lean_dec(v___x_621_);
v___x_623_ = lean_uint8_to_uint32(v___x_622_);
v___x_624_ = lean_uint32_shift_left(v___x_623_, v___x_599_);
v___x_625_ = lean_uint32_lor(v___x_620_, v___x_624_);
v___x_626_ = lean_nat_add(v___x_618_, v___x_602_);
v___x_627_ = lean_byte_array_get(v_index_571_, v___x_626_);
lean_dec(v___x_626_);
v___x_628_ = lean_uint8_to_uint32(v___x_627_);
v___x_629_ = lean_uint32_shift_left(v___x_628_, v___x_606_);
v___x_630_ = lean_uint32_lor(v___x_625_, v___x_629_);
v___x_631_ = lean_nat_add(v___x_618_, v___x_609_);
lean_dec(v___x_618_);
v___x_632_ = lean_byte_array_get(v_index_571_, v___x_631_);
lean_dec(v___x_631_);
v___x_633_ = lean_uint8_to_uint32(v___x_632_);
v___x_634_ = lean_uint32_shift_left(v___x_633_, v___x_613_);
v___x_635_ = lean_uint32_lor(v___x_630_, v___x_634_);
v_hi_636_ = lean_uint32_to_nat(v___x_635_);
v___x_637_ = 5ULL;
v___x_638_ = 1ULL;
v___x_639_ = lean_uint64_shift_left(v___x_638_, v_bits_581_);
v___x_640_ = 2ULL;
v___x_641_ = lean_uint64_shift_left(v___x_639_, v___x_640_);
v___x_642_ = lean_uint64_add(v___x_637_, v___x_641_);
v_fpOff_643_ = lean_uint64_to_nat(v___x_642_);
v___x_644_ = 32ULL;
v___x_645_ = lean_uint64_shift_right(v___y_577_, v___x_644_);
v___x_646_ = lean_uint64_to_uint8(v___x_645_);
v___x_647_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(v_index_571_, v_cs_572_, v_k_573_, v___x_646_, v_fpOff_643_, v_lo_616_, v_hi_636_);
lean_dec(v_hi_636_);
lean_dec(v_fpOff_643_);
return v___x_647_;
}
else
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; uint8_t v___x_652_; uint32_t v___x_653_; lean_object* v___x_654_; uint8_t v___x_655_; uint32_t v___x_656_; uint32_t v___x_657_; uint32_t v___x_658_; uint32_t v___x_659_; lean_object* v_lo_660_; lean_object* v___x_661_; lean_object* v___x_662_; uint8_t v___x_663_; uint32_t v___x_664_; lean_object* v___x_665_; uint8_t v___x_666_; uint32_t v___x_667_; uint32_t v___x_668_; uint32_t v___x_669_; lean_object* v_hi_670_; uint64_t v___x_671_; uint64_t v___x_672_; uint64_t v___x_673_; uint64_t v___x_674_; uint64_t v___x_675_; lean_object* v_fpOff_676_; uint64_t v___x_677_; uint64_t v___x_678_; uint8_t v___x_679_; lean_object* v___x_680_; 
v___x_648_ = lean_unsigned_to_nat(1u);
v___x_649_ = lean_unsigned_to_nat(2u);
v___x_650_ = lean_nat_mul(v___x_649_, v_slot_585_);
lean_dec(v_slot_585_);
v___x_651_ = lean_nat_add(v___x_648_, v___x_650_);
v___x_652_ = lean_byte_array_get(v_index_571_, v___x_651_);
v___x_653_ = lean_uint8_to_uint32(v___x_652_);
v___x_654_ = lean_nat_add(v___x_651_, v___x_648_);
lean_dec(v___x_651_);
v___x_655_ = lean_byte_array_get(v_index_571_, v___x_654_);
lean_dec(v___x_654_);
v___x_656_ = lean_uint8_to_uint32(v___x_655_);
v___x_657_ = 8;
v___x_658_ = lean_uint32_shift_left(v___x_656_, v___x_657_);
v___x_659_ = lean_uint32_lor(v___x_653_, v___x_658_);
v_lo_660_ = lean_uint32_to_nat(v___x_659_);
v___x_661_ = lean_unsigned_to_nat(3u);
v___x_662_ = lean_nat_add(v___x_661_, v___x_650_);
lean_dec(v___x_650_);
v___x_663_ = lean_byte_array_get(v_index_571_, v___x_662_);
v___x_664_ = lean_uint8_to_uint32(v___x_663_);
v___x_665_ = lean_nat_add(v___x_662_, v___x_648_);
lean_dec(v___x_662_);
v___x_666_ = lean_byte_array_get(v_index_571_, v___x_665_);
lean_dec(v___x_665_);
v___x_667_ = lean_uint8_to_uint32(v___x_666_);
v___x_668_ = lean_uint32_shift_left(v___x_667_, v___x_657_);
v___x_669_ = lean_uint32_lor(v___x_664_, v___x_668_);
v_hi_670_ = lean_uint32_to_nat(v___x_669_);
v___x_671_ = 3ULL;
v___x_672_ = 1ULL;
v___x_673_ = lean_uint64_shift_left(v___x_672_, v_bits_581_);
v___x_674_ = lean_uint64_shift_left(v___x_673_, v___x_672_);
v___x_675_ = lean_uint64_add(v___x_671_, v___x_674_);
v_fpOff_676_ = lean_uint64_to_nat(v___x_675_);
v___x_677_ = 32ULL;
v___x_678_ = lean_uint64_shift_right(v___y_577_, v___x_677_);
v___x_679_ = lean_uint64_to_uint8(v___x_678_);
v___x_680_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(v_index_571_, v_cs_572_, v_k_573_, v___x_679_, v_fpOff_676_, v_lo_660_, v_hi_670_);
lean_dec(v_hi_670_);
lean_dec(v_fpOff_676_);
return v___x_680_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg___boxed(lean_object* v_index_685_, lean_object* v_cs_686_, lean_object* v_k_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(v_index_685_, v_cs_686_, v_k_687_);
lean_dec(v_k_687_);
lean_dec_ref(v_cs_686_);
lean_dec_ref(v_index_685_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(lean_object* v_t_689_, lean_object* v_path_690_, lean_object* v_i_691_){
_start:
{
lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_692_ = lean_unsigned_to_nat(0u);
v___x_693_ = lean_nat_dec_eq(v_i_691_, v___x_692_);
if (v___x_693_ == 0)
{
lean_object* v_children_694_; lean_object* v_childIndex_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v_children_694_ = lean_ctor_get(v_t_689_, 2);
v_childIndex_695_ = lean_ctor_get(v_t_689_, 3);
v___x_696_ = lean_box(0);
v___x_697_ = lean_unsigned_to_nat(1u);
v___x_698_ = lean_nat_sub(v_i_691_, v___x_697_);
lean_dec(v_i_691_);
v___x_699_ = lean_array_get_borrowed(v___x_696_, v_path_690_, v___x_698_);
v___x_700_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(v_childIndex_695_, v_children_694_, v___x_699_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v___x_701_; 
lean_dec(v___x_698_);
v___x_701_ = lean_box(0);
return v___x_701_;
}
else
{
lean_object* v_val_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v_val_702_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_val_702_);
lean_dec_ref_known(v___x_700_, 1);
v___x_703_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
v___x_704_ = lean_array_get_borrowed(v___x_703_, v_children_694_, v_val_702_);
lean_dec(v_val_702_);
v_t_689_ = v___x_704_;
v_i_691_ = v___x_698_;
goto _start;
}
}
else
{
lean_object* v_val_x3f_706_; 
lean_dec(v_i_691_);
v_val_x3f_706_ = lean_ctor_get(v_t_689_, 1);
lean_inc(v_val_x3f_706_);
return v_val_x3f_706_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg___boxed(lean_object* v_t_707_, lean_object* v_path_708_, lean_object* v_i_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_t_707_, v_path_708_, v_i_709_);
lean_dec_ref(v_path_708_);
lean_dec_ref(v_t_707_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux(lean_object* v_00_u03b1_711_, lean_object* v_t_712_, lean_object* v_path_713_, lean_object* v_i_714_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_t_712_, v_path_713_, v_i_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___boxed(lean_object* v_00_u03b1_716_, lean_object* v_t_717_, lean_object* v_path_718_, lean_object* v_i_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux(v_00_u03b1_716_, v_t_717_, v_path_718_, v_i_719_);
lean_dec_ref(v_path_718_);
lean_dec_ref(v_t_717_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0(lean_object* v_00_u03b1_721_, lean_object* v_index_722_, lean_object* v_cs_723_, lean_object* v_k_724_){
_start:
{
lean_object* v___x_725_; 
v___x_725_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(v_index_722_, v_cs_723_, v_k_724_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___boxed(lean_object* v_00_u03b1_726_, lean_object* v_index_727_, lean_object* v_cs_728_, lean_object* v_k_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0(v_00_u03b1_726_, v_index_727_, v_cs_728_, v_k_729_);
lean_dec(v_k_729_);
lean_dec_ref(v_cs_728_);
lean_dec_ref(v_index_727_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0(lean_object* v_00_u03b1_731_, lean_object* v_index_732_, lean_object* v_cs_733_, lean_object* v_k_734_, uint8_t v_fp_735_, lean_object* v_fpOff_736_, lean_object* v_j_737_, lean_object* v_hi_738_){
_start:
{
lean_object* v___x_739_; 
v___x_739_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(v_index_732_, v_cs_733_, v_k_734_, v_fp_735_, v_fpOff_736_, v_j_737_, v_hi_738_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___boxed(lean_object* v_00_u03b1_740_, lean_object* v_index_741_, lean_object* v_cs_742_, lean_object* v_k_743_, lean_object* v_fp_744_, lean_object* v_fpOff_745_, lean_object* v_j_746_, lean_object* v_hi_747_){
_start:
{
uint8_t v_fp_boxed_748_; lean_object* v_res_749_; 
v_fp_boxed_748_ = lean_unbox(v_fp_744_);
v_res_749_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0(v_00_u03b1_740_, v_index_741_, v_cs_742_, v_k_743_, v_fp_boxed_748_, v_fpOff_745_, v_j_746_, v_hi_747_);
lean_dec(v_hi_747_);
lean_dec(v_fpOff_745_);
lean_dec(v_k_743_);
lean_dec_ref(v_cs_742_);
lean_dec_ref(v_index_741_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___redArg(lean_object* v_t_750_, lean_object* v_n_751_){
_start:
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v_path_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_752_ = lean_unsigned_to_nat(8u);
v___x_753_ = lean_mk_empty_array_with_capacity(v___x_752_);
v_path_754_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_751_, v___x_753_);
v___x_755_ = lean_array_get_size(v_path_754_);
v___x_756_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_t_750_, v_path_754_, v___x_755_);
lean_dec_ref(v_path_754_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___redArg___boxed(lean_object* v_t_757_, lean_object* v_n_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = l_Lean_ConstTrie_find_x3f___redArg(v_t_757_, v_n_758_);
lean_dec_ref(v_t_757_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f(lean_object* v_00_u03b1_760_, lean_object* v_t_761_, lean_object* v_n_762_){
_start:
{
lean_object* v___x_763_; 
v___x_763_ = l_Lean_ConstTrie_find_x3f___redArg(v_t_761_, v_n_762_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___boxed(lean_object* v_00_u03b1_764_, lean_object* v_t_765_, lean_object* v_n_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l_Lean_ConstTrie_find_x3f(v_00_u03b1_764_, v_t_765_, v_n_766_);
lean_dec_ref(v_t_765_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__1(lean_object* v_toApplicative_768_, lean_object* v_children_769_, lean_object* v_inst_770_, lean_object* v___f_771_, lean_object* v_____r_772_, lean_object* v_s_773_){
_start:
{
lean_object* v_toPure_774_; lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; 
v_toPure_774_ = lean_ctor_get(v_toApplicative_768_, 1);
lean_inc(v_toPure_774_);
lean_dec_ref(v_toApplicative_768_);
v___x_775_ = lean_unsigned_to_nat(0u);
v___x_776_ = lean_array_get_size(v_children_769_);
v___x_777_ = lean_nat_dec_lt(v___x_775_, v___x_776_);
if (v___x_777_ == 0)
{
lean_object* v___x_778_; 
lean_dec(v___f_771_);
lean_dec_ref(v_inst_770_);
lean_dec_ref(v_children_769_);
v___x_778_ = lean_apply_2(v_toPure_774_, lean_box(0), v_s_773_);
return v___x_778_;
}
else
{
size_t v___x_779_; size_t v___x_780_; lean_object* v___x_781_; 
lean_dec(v_toPure_774_);
v___x_779_ = ((size_t)0ULL);
v___x_780_ = lean_usize_of_nat(v___x_776_);
v___x_781_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_770_, v___f_771_, v_children_769_, v___x_779_, v___x_780_, v_s_773_);
return v___x_781_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__2(lean_object* v___f_782_, lean_object* v_____x_783_){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_784_ = lean_box(0);
v___x_785_ = lean_apply_2(v___f_782_, v___x_784_, v_____x_783_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg(lean_object* v_inst_786_, lean_object* v_t_787_, lean_object* v_f_788_, lean_object* v_init_789_){
_start:
{
lean_object* v_toApplicative_790_; lean_object* v_toBind_791_; lean_object* v_key_792_; lean_object* v_val_x3f_793_; lean_object* v_children_794_; lean_object* v___f_795_; lean_object* v___f_796_; 
v_toApplicative_790_ = lean_ctor_get(v_inst_786_, 0);
lean_inc_ref_n(v_toApplicative_790_, 2);
v_toBind_791_ = lean_ctor_get(v_inst_786_, 1);
v_key_792_ = lean_ctor_get(v_t_787_, 0);
lean_inc(v_key_792_);
v_val_x3f_793_ = lean_ctor_get(v_t_787_, 1);
lean_inc(v_val_x3f_793_);
v_children_794_ = lean_ctor_get(v_t_787_, 2);
lean_inc_ref_n(v_children_794_, 2);
lean_dec_ref(v_t_787_);
lean_inc(v_f_788_);
lean_inc_ref_n(v_inst_786_, 2);
v___f_795_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_795_, 0, v_inst_786_);
lean_closure_set(v___f_795_, 1, v_f_788_);
lean_inc_ref(v___f_795_);
v___f_796_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__1), 6, 4);
lean_closure_set(v___f_796_, 0, v_toApplicative_790_);
lean_closure_set(v___f_796_, 1, v_children_794_);
lean_closure_set(v___f_796_, 2, v_inst_786_);
lean_closure_set(v___f_796_, 3, v___f_795_);
if (lean_obj_tag(v_val_x3f_793_) == 1)
{
lean_object* v_val_797_; lean_object* v___f_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
lean_inc(v_toBind_791_);
lean_dec_ref(v___f_795_);
lean_dec_ref(v_children_794_);
lean_dec_ref(v_toApplicative_790_);
lean_dec_ref(v_inst_786_);
v_val_797_ = lean_ctor_get(v_val_x3f_793_, 0);
lean_inc(v_val_797_);
lean_dec_ref_known(v_val_x3f_793_, 1);
v___f_798_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_798_, 0, v___f_796_);
v___x_799_ = lean_apply_3(v_f_788_, v_init_789_, v_key_792_, v_val_797_);
v___x_800_ = lean_apply_4(v_toBind_791_, lean_box(0), lean_box(0), v___x_799_, v___f_798_);
return v___x_800_;
}
else
{
lean_object* v___x_801_; lean_object* v___x_802_; 
lean_dec_ref(v___f_796_);
lean_dec(v_val_x3f_793_);
lean_dec(v_key_792_);
lean_dec(v_f_788_);
v___x_801_ = lean_box(0);
v___x_802_ = l_Lean_ConstTrie_foldlM___redArg___lam__1(v_toApplicative_790_, v_children_794_, v_inst_786_, v___f_795_, v___x_801_, v_init_789_);
return v___x_802_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__0(lean_object* v_inst_803_, lean_object* v_f_804_, lean_object* v_s_805_, lean_object* v_c_806_){
_start:
{
lean_object* v___x_807_; 
v___x_807_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_803_, v_c_806_, v_f_804_, v_s_805_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM(lean_object* v_m_808_, lean_object* v_00_u03b1_809_, lean_object* v_00_u03c3_810_, lean_object* v_inst_811_, lean_object* v_t_812_, lean_object* v_f_813_, lean_object* v_init_814_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_811_, v_t_812_, v_f_813_, v_init_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf(lean_object* v_x_816_){
_start:
{
if (lean_obj_tag(v_x_816_) == 0)
{
return v_x_816_;
}
else
{
lean_object* v_pre_817_; 
v_pre_817_ = lean_ctor_get(v_x_816_, 0);
lean_inc(v_pre_817_);
return v_pre_817_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf___boxed(lean_object* v_x_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf(v_x_818_);
lean_dec(v_x_818_);
return v_res_819_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(lean_object* v_a_820_, lean_object* v_x_821_){
_start:
{
if (lean_obj_tag(v_x_821_) == 0)
{
uint8_t v___x_822_; 
v___x_822_ = 0;
return v___x_822_;
}
else
{
lean_object* v_key_823_; lean_object* v_tail_824_; uint8_t v___x_825_; 
v_key_823_ = lean_ctor_get(v_x_821_, 0);
v_tail_824_ = lean_ctor_get(v_x_821_, 2);
v___x_825_ = lean_name_eq(v_key_823_, v_a_820_);
if (v___x_825_ == 0)
{
v_x_821_ = v_tail_824_;
goto _start;
}
else
{
return v___x_825_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg___boxed(lean_object* v_a_827_, lean_object* v_x_828_){
_start:
{
uint8_t v_res_829_; lean_object* v_r_830_; 
v_res_829_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_827_, v_x_828_);
lean_dec(v_x_828_);
lean_dec(v_a_827_);
v_r_830_ = lean_box(v_res_829_);
return v_r_830_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(lean_object* v_m_831_, lean_object* v_a_832_){
_start:
{
lean_object* v_buckets_833_; lean_object* v___x_834_; uint64_t v___y_836_; 
v_buckets_833_ = lean_ctor_get(v_m_831_, 1);
v___x_834_ = lean_array_get_size(v_buckets_833_);
if (lean_obj_tag(v_a_832_) == 0)
{
uint64_t v___x_850_; 
v___x_850_ = 1723ULL;
v___y_836_ = v___x_850_;
goto v___jp_835_;
}
else
{
uint64_t v_hash_851_; 
v_hash_851_ = lean_ctor_get_uint64(v_a_832_, sizeof(void*)*2);
v___y_836_ = v_hash_851_;
goto v___jp_835_;
}
v___jp_835_:
{
uint64_t v___x_837_; uint64_t v___x_838_; uint64_t v_fold_839_; uint64_t v___x_840_; uint64_t v___x_841_; uint64_t v___x_842_; size_t v___x_843_; size_t v___x_844_; size_t v___x_845_; size_t v___x_846_; size_t v___x_847_; lean_object* v___x_848_; uint8_t v___x_849_; 
v___x_837_ = 32ULL;
v___x_838_ = lean_uint64_shift_right(v___y_836_, v___x_837_);
v_fold_839_ = lean_uint64_xor(v___y_836_, v___x_838_);
v___x_840_ = 16ULL;
v___x_841_ = lean_uint64_shift_right(v_fold_839_, v___x_840_);
v___x_842_ = lean_uint64_xor(v_fold_839_, v___x_841_);
v___x_843_ = lean_uint64_to_usize(v___x_842_);
v___x_844_ = lean_usize_of_nat(v___x_834_);
v___x_845_ = ((size_t)1ULL);
v___x_846_ = lean_usize_sub(v___x_844_, v___x_845_);
v___x_847_ = lean_usize_land(v___x_843_, v___x_846_);
v___x_848_ = lean_array_uget_borrowed(v_buckets_833_, v___x_847_);
v___x_849_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_832_, v___x_848_);
return v___x_849_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg___boxed(lean_object* v_m_852_, lean_object* v_a_853_){
_start:
{
uint8_t v_res_854_; lean_object* v_r_855_; 
v_res_854_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(v_m_852_, v_a_853_);
lean_dec(v_a_853_);
lean_dec_ref(v_m_852_);
v_r_855_ = lean_box(v_res_854_);
return v_r_855_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__6___redArg(lean_object* v_x_856_, lean_object* v_x_857_){
_start:
{
if (lean_obj_tag(v_x_857_) == 0)
{
return v_x_856_;
}
else
{
lean_object* v_key_858_; lean_object* v_value_859_; lean_object* v_tail_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_886_; 
v_key_858_ = lean_ctor_get(v_x_857_, 0);
v_value_859_ = lean_ctor_get(v_x_857_, 1);
v_tail_860_ = lean_ctor_get(v_x_857_, 2);
v_isSharedCheck_886_ = !lean_is_exclusive(v_x_857_);
if (v_isSharedCheck_886_ == 0)
{
v___x_862_ = v_x_857_;
v_isShared_863_ = v_isSharedCheck_886_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_tail_860_);
lean_inc(v_value_859_);
lean_inc(v_key_858_);
lean_dec(v_x_857_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_886_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_864_; uint64_t v___y_866_; 
v___x_864_ = lean_array_get_size(v_x_856_);
if (lean_obj_tag(v_key_858_) == 0)
{
uint64_t v___x_884_; 
v___x_884_ = 1723ULL;
v___y_866_ = v___x_884_;
goto v___jp_865_;
}
else
{
uint64_t v_hash_885_; 
v_hash_885_ = lean_ctor_get_uint64(v_key_858_, sizeof(void*)*2);
v___y_866_ = v_hash_885_;
goto v___jp_865_;
}
v___jp_865_:
{
uint64_t v___x_867_; uint64_t v___x_868_; uint64_t v_fold_869_; uint64_t v___x_870_; uint64_t v___x_871_; uint64_t v___x_872_; size_t v___x_873_; size_t v___x_874_; size_t v___x_875_; size_t v___x_876_; size_t v___x_877_; lean_object* v___x_878_; lean_object* v___x_880_; 
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
v___x_878_ = lean_array_uget_borrowed(v_x_856_, v___x_877_);
lean_inc(v___x_878_);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 2, v___x_878_);
v___x_880_ = v___x_862_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_key_858_);
lean_ctor_set(v_reuseFailAlloc_883_, 1, v_value_859_);
lean_ctor_set(v_reuseFailAlloc_883_, 2, v___x_878_);
v___x_880_ = v_reuseFailAlloc_883_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
lean_object* v___x_881_; 
v___x_881_ = lean_array_uset(v_x_856_, v___x_877_, v___x_880_);
v_x_856_ = v___x_881_;
v_x_857_ = v_tail_860_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3___redArg(lean_object* v_i_887_, lean_object* v_source_888_, lean_object* v_target_889_){
_start:
{
lean_object* v___x_890_; uint8_t v___x_891_; 
v___x_890_ = lean_array_get_size(v_source_888_);
v___x_891_ = lean_nat_dec_lt(v_i_887_, v___x_890_);
if (v___x_891_ == 0)
{
lean_dec_ref(v_source_888_);
lean_dec(v_i_887_);
return v_target_889_;
}
else
{
lean_object* v_es_892_; lean_object* v___x_893_; lean_object* v_source_894_; lean_object* v_target_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v_es_892_ = lean_array_fget(v_source_888_, v_i_887_);
v___x_893_ = lean_box(0);
v_source_894_ = lean_array_fset(v_source_888_, v_i_887_, v___x_893_);
v_target_895_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__6___redArg(v_target_889_, v_es_892_);
v___x_896_ = lean_unsigned_to_nat(1u);
v___x_897_ = lean_nat_add(v_i_887_, v___x_896_);
lean_dec(v_i_887_);
v_i_887_ = v___x_897_;
v_source_888_ = v_source_894_;
v_target_889_ = v_target_895_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(lean_object* v_data_899_){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v_nbuckets_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_900_ = lean_array_get_size(v_data_899_);
v___x_901_ = lean_unsigned_to_nat(2u);
v_nbuckets_902_ = lean_nat_mul(v___x_900_, v___x_901_);
v___x_903_ = lean_unsigned_to_nat(0u);
v___x_904_ = lean_box(0);
v___x_905_ = lean_mk_array(v_nbuckets_902_, v___x_904_);
v___x_906_ = lean_array_propagate_mark(v_data_899_, v___x_905_);
v___x_907_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3___redArg(v___x_903_, v_data_899_, v___x_906_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1___redArg(lean_object* v_m_908_, lean_object* v_a_909_, lean_object* v_b_910_){
_start:
{
lean_object* v_size_911_; lean_object* v_buckets_912_; lean_object* v___x_913_; uint64_t v___y_915_; 
v_size_911_ = lean_ctor_get(v_m_908_, 0);
v_buckets_912_ = lean_ctor_get(v_m_908_, 1);
v___x_913_ = lean_array_get_size(v_buckets_912_);
if (lean_obj_tag(v_a_909_) == 0)
{
uint64_t v___x_952_; 
v___x_952_ = 1723ULL;
v___y_915_ = v___x_952_;
goto v___jp_914_;
}
else
{
uint64_t v_hash_953_; 
v_hash_953_ = lean_ctor_get_uint64(v_a_909_, sizeof(void*)*2);
v___y_915_ = v_hash_953_;
goto v___jp_914_;
}
v___jp_914_:
{
uint64_t v___x_916_; uint64_t v___x_917_; uint64_t v_fold_918_; uint64_t v___x_919_; uint64_t v___x_920_; uint64_t v___x_921_; size_t v___x_922_; size_t v___x_923_; size_t v___x_924_; size_t v___x_925_; size_t v___x_926_; lean_object* v_bkt_927_; uint8_t v___x_928_; 
v___x_916_ = 32ULL;
v___x_917_ = lean_uint64_shift_right(v___y_915_, v___x_916_);
v_fold_918_ = lean_uint64_xor(v___y_915_, v___x_917_);
v___x_919_ = 16ULL;
v___x_920_ = lean_uint64_shift_right(v_fold_918_, v___x_919_);
v___x_921_ = lean_uint64_xor(v_fold_918_, v___x_920_);
v___x_922_ = lean_uint64_to_usize(v___x_921_);
v___x_923_ = lean_usize_of_nat(v___x_913_);
v___x_924_ = ((size_t)1ULL);
v___x_925_ = lean_usize_sub(v___x_923_, v___x_924_);
v___x_926_ = lean_usize_land(v___x_922_, v___x_925_);
v_bkt_927_ = lean_array_uget_borrowed(v_buckets_912_, v___x_926_);
v___x_928_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_909_, v_bkt_927_);
if (v___x_928_ == 0)
{
lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_949_; 
lean_inc_ref(v_buckets_912_);
lean_inc(v_size_911_);
v_isSharedCheck_949_ = !lean_is_exclusive(v_m_908_);
if (v_isSharedCheck_949_ == 0)
{
lean_object* v_unused_950_; lean_object* v_unused_951_; 
v_unused_950_ = lean_ctor_get(v_m_908_, 1);
lean_dec(v_unused_950_);
v_unused_951_ = lean_ctor_get(v_m_908_, 0);
lean_dec(v_unused_951_);
v___x_930_ = v_m_908_;
v_isShared_931_ = v_isSharedCheck_949_;
goto v_resetjp_929_;
}
else
{
lean_dec(v_m_908_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_949_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_932_; lean_object* v_size_x27_933_; lean_object* v___x_934_; lean_object* v_buckets_x27_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; uint8_t v___x_941_; 
v___x_932_ = lean_unsigned_to_nat(1u);
v_size_x27_933_ = lean_nat_add(v_size_911_, v___x_932_);
lean_dec(v_size_911_);
lean_inc(v_bkt_927_);
v___x_934_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_934_, 0, v_a_909_);
lean_ctor_set(v___x_934_, 1, v_b_910_);
lean_ctor_set(v___x_934_, 2, v_bkt_927_);
v_buckets_x27_935_ = lean_array_uset(v_buckets_912_, v___x_926_, v___x_934_);
v___x_936_ = lean_unsigned_to_nat(4u);
v___x_937_ = lean_nat_mul(v_size_x27_933_, v___x_936_);
v___x_938_ = lean_unsigned_to_nat(3u);
v___x_939_ = lean_nat_div(v___x_937_, v___x_938_);
lean_dec(v___x_937_);
v___x_940_ = lean_array_get_size(v_buckets_x27_935_);
v___x_941_ = lean_nat_dec_le(v___x_939_, v___x_940_);
lean_dec(v___x_939_);
if (v___x_941_ == 0)
{
lean_object* v_val_942_; lean_object* v___x_944_; 
v_val_942_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(v_buckets_x27_935_);
if (v_isShared_931_ == 0)
{
lean_ctor_set(v___x_930_, 1, v_val_942_);
lean_ctor_set(v___x_930_, 0, v_size_x27_933_);
v___x_944_ = v___x_930_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_size_x27_933_);
lean_ctor_set(v_reuseFailAlloc_945_, 1, v_val_942_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
else
{
lean_object* v___x_947_; 
if (v_isShared_931_ == 0)
{
lean_ctor_set(v___x_930_, 1, v_buckets_x27_935_);
lean_ctor_set(v___x_930_, 0, v_size_x27_933_);
v___x_947_ = v___x_930_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_size_x27_933_);
lean_ctor_set(v_reuseFailAlloc_948_, 1, v_buckets_x27_935_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
else
{
lean_dec(v_b_910_);
lean_dec(v_a_909_);
return v_m_908_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0(lean_object* v___x_956_, lean_object* v_cs_x3f_957_){
_start:
{
lean_object* v___y_959_; 
if (lean_obj_tag(v_cs_x3f_957_) == 0)
{
lean_object* v___x_962_; 
v___x_962_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0));
v___y_959_ = v___x_962_;
goto v___jp_958_;
}
else
{
lean_object* v_val_963_; 
v_val_963_ = lean_ctor_get(v_cs_x3f_957_, 0);
lean_inc(v_val_963_);
lean_dec_ref_known(v_cs_x3f_957_, 1);
v___y_959_ = v_val_963_;
goto v___jp_958_;
}
v___jp_958_:
{
lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_960_ = lean_array_push(v___y_959_, v___x_956_);
v___x_961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_961_, 0, v___x_960_);
return v___x_961_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4(lean_object* v___x_964_, lean_object* v_a_965_, lean_object* v_x_966_){
_start:
{
if (lean_obj_tag(v_x_966_) == 0)
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v_val_969_; lean_object* v___x_970_; 
v___x_967_ = lean_box(0);
v___x_968_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0(v___x_964_, v___x_967_);
v_val_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc(v_val_969_);
lean_dec(v___x_968_);
v___x_970_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_970_, 0, v_a_965_);
lean_ctor_set(v___x_970_, 1, v_val_969_);
lean_ctor_set(v___x_970_, 2, v_x_966_);
return v___x_970_;
}
else
{
lean_object* v_key_971_; lean_object* v_value_972_; lean_object* v_tail_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_988_; 
v_key_971_ = lean_ctor_get(v_x_966_, 0);
v_value_972_ = lean_ctor_get(v_x_966_, 1);
v_tail_973_ = lean_ctor_get(v_x_966_, 2);
v_isSharedCheck_988_ = !lean_is_exclusive(v_x_966_);
if (v_isSharedCheck_988_ == 0)
{
v___x_975_ = v_x_966_;
v_isShared_976_ = v_isSharedCheck_988_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_tail_973_);
lean_inc(v_value_972_);
lean_inc(v_key_971_);
lean_dec(v_x_966_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_988_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
uint8_t v___x_977_; 
v___x_977_ = lean_name_eq(v_key_971_, v_a_965_);
if (v___x_977_ == 0)
{
lean_object* v_tail_978_; lean_object* v___x_980_; 
v_tail_978_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4(v___x_964_, v_a_965_, v_tail_973_);
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 2, v_tail_978_);
v___x_980_ = v___x_975_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_key_971_);
lean_ctor_set(v_reuseFailAlloc_981_, 1, v_value_972_);
lean_ctor_set(v_reuseFailAlloc_981_, 2, v_tail_978_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
else
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v_val_984_; lean_object* v___x_986_; 
lean_dec(v_key_971_);
v___x_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_982_, 0, v_value_972_);
v___x_983_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0(v___x_964_, v___x_982_);
v_val_984_ = lean_ctor_get(v___x_983_, 0);
lean_inc(v_val_984_);
lean_dec(v___x_983_);
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 1, v_val_984_);
lean_ctor_set(v___x_975_, 0, v_a_965_);
v___x_986_ = v___x_975_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_a_965_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v_val_984_);
lean_ctor_set(v_reuseFailAlloc_987_, 2, v_tail_973_);
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
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2(lean_object* v___x_989_, lean_object* v_m_990_, lean_object* v_a_991_){
_start:
{
size_t v___y_993_; lean_object* v___y_994_; lean_object* v___y_995_; lean_object* v___y_996_; lean_object* v_size_999_; lean_object* v_buckets_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1047_; 
v_size_999_ = lean_ctor_get(v_m_990_, 0);
v_buckets_1000_ = lean_ctor_get(v_m_990_, 1);
v_isSharedCheck_1047_ = !lean_is_exclusive(v_m_990_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1002_ = v_m_990_;
v_isShared_1003_ = v_isSharedCheck_1047_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_buckets_1000_);
lean_inc(v_size_999_);
lean_dec(v_m_990_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1047_;
goto v_resetjp_1001_;
}
v___jp_992_:
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = lean_array_uset(v___y_994_, v___y_993_, v___y_995_);
v___x_998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_998_, 0, v___y_996_);
lean_ctor_set(v___x_998_, 1, v___x_997_);
return v___x_998_;
}
v_resetjp_1001_:
{
lean_object* v___x_1004_; uint64_t v___y_1006_; 
v___x_1004_ = lean_array_get_size(v_buckets_1000_);
if (lean_obj_tag(v_a_991_) == 0)
{
uint64_t v___x_1045_; 
v___x_1045_ = 1723ULL;
v___y_1006_ = v___x_1045_;
goto v___jp_1005_;
}
else
{
uint64_t v_hash_1046_; 
v_hash_1046_ = lean_ctor_get_uint64(v_a_991_, sizeof(void*)*2);
v___y_1006_ = v_hash_1046_;
goto v___jp_1005_;
}
v___jp_1005_:
{
uint64_t v___x_1007_; uint64_t v___x_1008_; uint64_t v_fold_1009_; uint64_t v___x_1010_; uint64_t v___x_1011_; uint64_t v___x_1012_; size_t v___x_1013_; size_t v___x_1014_; size_t v___x_1015_; size_t v___x_1016_; size_t v___x_1017_; lean_object* v_bkt_1018_; uint8_t v___x_1019_; 
v___x_1007_ = 32ULL;
v___x_1008_ = lean_uint64_shift_right(v___y_1006_, v___x_1007_);
v_fold_1009_ = lean_uint64_xor(v___y_1006_, v___x_1008_);
v___x_1010_ = 16ULL;
v___x_1011_ = lean_uint64_shift_right(v_fold_1009_, v___x_1010_);
v___x_1012_ = lean_uint64_xor(v_fold_1009_, v___x_1011_);
v___x_1013_ = lean_uint64_to_usize(v___x_1012_);
v___x_1014_ = lean_usize_of_nat(v___x_1004_);
v___x_1015_ = ((size_t)1ULL);
v___x_1016_ = lean_usize_sub(v___x_1014_, v___x_1015_);
v___x_1017_ = lean_usize_land(v___x_1013_, v___x_1016_);
v_bkt_1018_ = lean_array_uget_borrowed(v_buckets_1000_, v___x_1017_);
v___x_1019_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_991_, v_bkt_1018_);
if (v___x_1019_ == 0)
{
lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v_size_x27_1023_; lean_object* v___x_1024_; lean_object* v_buckets_x27_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; uint8_t v___x_1031_; 
v___x_1020_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0));
v___x_1021_ = lean_array_push(v___x_1020_, v___x_989_);
v___x_1022_ = lean_unsigned_to_nat(1u);
v_size_x27_1023_ = lean_nat_add(v_size_999_, v___x_1022_);
lean_dec(v_size_999_);
lean_inc(v_bkt_1018_);
v___x_1024_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1024_, 0, v_a_991_);
lean_ctor_set(v___x_1024_, 1, v___x_1021_);
lean_ctor_set(v___x_1024_, 2, v_bkt_1018_);
v_buckets_x27_1025_ = lean_array_uset(v_buckets_1000_, v___x_1017_, v___x_1024_);
v___x_1026_ = lean_unsigned_to_nat(4u);
v___x_1027_ = lean_nat_mul(v_size_x27_1023_, v___x_1026_);
v___x_1028_ = lean_unsigned_to_nat(3u);
v___x_1029_ = lean_nat_div(v___x_1027_, v___x_1028_);
lean_dec(v___x_1027_);
v___x_1030_ = lean_array_get_size(v_buckets_x27_1025_);
v___x_1031_ = lean_nat_dec_le(v___x_1029_, v___x_1030_);
lean_dec(v___x_1029_);
if (v___x_1031_ == 0)
{
lean_object* v_val_1032_; lean_object* v___x_1034_; 
v_val_1032_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(v_buckets_x27_1025_);
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 1, v_val_1032_);
lean_ctor_set(v___x_1002_, 0, v_size_x27_1023_);
v___x_1034_ = v___x_1002_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v_size_x27_1023_);
lean_ctor_set(v_reuseFailAlloc_1035_, 1, v_val_1032_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
return v___x_1034_;
}
}
else
{
lean_object* v___x_1037_; 
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 1, v_buckets_x27_1025_);
lean_ctor_set(v___x_1002_, 0, v_size_x27_1023_);
v___x_1037_ = v___x_1002_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_size_x27_1023_);
lean_ctor_set(v_reuseFailAlloc_1038_, 1, v_buckets_x27_1025_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
else
{
lean_object* v___x_1039_; lean_object* v_buckets_x27_1040_; lean_object* v_bkt_x27_1041_; uint8_t v___x_1042_; 
lean_inc(v_bkt_1018_);
lean_del_object(v___x_1002_);
v___x_1039_ = lean_box(0);
v_buckets_x27_1040_ = lean_array_uset(v_buckets_1000_, v___x_1017_, v___x_1039_);
lean_inc(v_a_991_);
v_bkt_x27_1041_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4(v___x_989_, v_a_991_, v_bkt_1018_);
v___x_1042_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_991_, v_bkt_x27_1041_);
lean_dec(v_a_991_);
if (v___x_1042_ == 0)
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = lean_unsigned_to_nat(1u);
v___x_1044_ = lean_nat_sub(v_size_999_, v___x_1043_);
lean_dec(v_size_999_);
v___y_993_ = v___x_1017_;
v___y_994_ = v_buckets_x27_1040_;
v___y_995_ = v_bkt_x27_1041_;
v___y_996_ = v___x_1044_;
goto v___jp_992_;
}
else
{
v___y_993_ = v___x_1017_;
v___y_994_ = v_buckets_x27_1040_;
v___y_995_ = v_bkt_x27_1041_;
v___y_996_ = v_size_999_;
goto v___jp_992_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__3___redArg(lean_object* v_a_1048_){
_start:
{
lean_object* v_fst_1049_; lean_object* v_snd_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1086_; 
v_fst_1049_ = lean_ctor_get(v_a_1048_, 0);
v_snd_1050_ = lean_ctor_get(v_a_1048_, 1);
v_isSharedCheck_1086_ = !lean_is_exclusive(v_a_1048_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1052_ = v_a_1048_;
v_isShared_1053_ = v_isSharedCheck_1086_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_snd_1050_);
lean_inc(v_fst_1049_);
lean_dec(v_a_1048_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1086_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1054_; uint8_t v___x_1055_; 
v___x_1054_ = lean_box(0);
v___x_1055_ = lean_name_eq(v_snd_1050_, v___x_1054_);
if (v___x_1055_ == 0)
{
lean_object* v_values_1056_; lean_object* v_seen_1057_; lean_object* v_children_1058_; uint8_t v___x_1059_; 
v_values_1056_ = lean_ctor_get(v_fst_1049_, 0);
v_seen_1057_ = lean_ctor_get(v_fst_1049_, 1);
v_children_1058_ = lean_ctor_get(v_fst_1049_, 2);
v___x_1059_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(v_seen_1057_, v_snd_1050_);
if (v___x_1059_ == 0)
{
lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1076_; 
lean_inc_ref(v_children_1058_);
lean_inc_ref(v_seen_1057_);
lean_inc_ref(v_values_1056_);
v_isSharedCheck_1076_ = !lean_is_exclusive(v_fst_1049_);
if (v_isSharedCheck_1076_ == 0)
{
lean_object* v_unused_1077_; lean_object* v_unused_1078_; lean_object* v_unused_1079_; 
v_unused_1077_ = lean_ctor_get(v_fst_1049_, 2);
lean_dec(v_unused_1077_);
v_unused_1078_ = lean_ctor_get(v_fst_1049_, 1);
lean_dec(v_unused_1078_);
v_unused_1079_ = lean_ctor_get(v_fst_1049_, 0);
lean_dec(v_unused_1079_);
v___x_1061_ = v_fst_1049_;
v_isShared_1062_ = v_isSharedCheck_1076_;
goto v_resetjp_1060_;
}
else
{
lean_dec(v_fst_1049_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1076_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___y_1066_; 
v___x_1063_ = lean_box(0);
lean_inc(v_snd_1050_);
v___x_1064_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1___redArg(v_seen_1057_, v_snd_1050_, v___x_1063_);
if (lean_obj_tag(v_snd_1050_) == 0)
{
v___y_1066_ = v_snd_1050_;
goto v___jp_1065_;
}
else
{
lean_object* v_pre_1075_; 
v_pre_1075_ = lean_ctor_get(v_snd_1050_, 0);
lean_inc(v_pre_1075_);
v___y_1066_ = v_pre_1075_;
goto v___jp_1065_;
}
v___jp_1065_:
{
lean_object* v___x_1067_; lean_object* v___x_1069_; 
lean_inc(v___y_1066_);
v___x_1067_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2(v_snd_1050_, v_children_1058_, v___y_1066_);
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 2, v___x_1067_);
lean_ctor_set(v___x_1061_, 1, v___x_1064_);
v___x_1069_ = v___x_1061_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_values_1056_);
lean_ctor_set(v_reuseFailAlloc_1074_, 1, v___x_1064_);
lean_ctor_set(v_reuseFailAlloc_1074_, 2, v___x_1067_);
v___x_1069_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
lean_object* v___x_1071_; 
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 1, v___y_1066_);
lean_ctor_set(v___x_1052_, 0, v___x_1069_);
v___x_1071_ = v___x_1052_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v___x_1069_);
lean_ctor_set(v_reuseFailAlloc_1073_, 1, v___y_1066_);
v___x_1071_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
v_a_1048_ = v___x_1071_;
goto _start;
}
}
}
}
}
else
{
lean_object* v___x_1081_; 
if (v_isShared_1053_ == 0)
{
v___x_1081_ = v___x_1052_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v_fst_1049_);
lean_ctor_set(v_reuseFailAlloc_1082_, 1, v_snd_1050_);
v___x_1081_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
return v___x_1081_;
}
}
}
else
{
lean_object* v___x_1084_; 
if (v_isShared_1053_ == 0)
{
v___x_1084_ = v___x_1052_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_fst_1049_);
lean_ctor_set(v_reuseFailAlloc_1085_, 1, v_snd_1050_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(lean_object* v_b_1087_, lean_object* v_n_1088_){
_start:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v_fst_1091_; 
v___x_1089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1089_, 0, v_b_1087_);
lean_ctor_set(v___x_1089_, 1, v_n_1088_);
v___x_1090_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__3___redArg(v___x_1089_);
v_fst_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_fst_1091_);
lean_dec_ref(v___x_1090_);
return v_fst_1091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName(lean_object* v_00_u03b1_1092_, lean_object* v_b_1093_, lean_object* v_n_1094_){
_start:
{
lean_object* v___x_1095_; 
v___x_1095_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(v_b_1093_, v_n_1094_);
return v___x_1095_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0(lean_object* v_00_u03b2_1096_, lean_object* v_m_1097_, lean_object* v_a_1098_){
_start:
{
uint8_t v___x_1099_; 
v___x_1099_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(v_m_1097_, v_a_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___boxed(lean_object* v_00_u03b2_1100_, lean_object* v_m_1101_, lean_object* v_a_1102_){
_start:
{
uint8_t v_res_1103_; lean_object* v_r_1104_; 
v_res_1103_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0(v_00_u03b2_1100_, v_m_1101_, v_a_1102_);
lean_dec(v_a_1102_);
lean_dec_ref(v_m_1101_);
v_r_1104_ = lean_box(v_res_1103_);
return v_r_1104_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1(lean_object* v_00_u03b2_1105_, lean_object* v_m_1106_, lean_object* v_a_1107_, lean_object* v_b_1108_){
_start:
{
lean_object* v___x_1109_; 
v___x_1109_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1___redArg(v_m_1106_, v_a_1107_, v_b_1108_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__3(lean_object* v_00_u03b1_1110_, lean_object* v_inst_1111_, lean_object* v_a_1112_){
_start:
{
lean_object* v___x_1113_; 
v___x_1113_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__3___redArg(v_a_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0(lean_object* v_00_u03b2_1114_, lean_object* v_a_1115_, lean_object* v_x_1116_){
_start:
{
uint8_t v___x_1117_; 
v___x_1117_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_1115_, v_x_1116_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1118_, lean_object* v_a_1119_, lean_object* v_x_1120_){
_start:
{
uint8_t v_res_1121_; lean_object* v_r_1122_; 
v_res_1121_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0(v_00_u03b2_1118_, v_a_1119_, v_x_1120_);
lean_dec(v_x_1120_);
lean_dec(v_a_1119_);
v_r_1122_ = lean_box(v_res_1121_);
return v_r_1122_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2(lean_object* v_00_u03b2_1123_, lean_object* v_data_1124_){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(v_data_1124_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1126_, lean_object* v_i_1127_, lean_object* v_source_1128_, lean_object* v_target_1129_){
_start:
{
lean_object* v___x_1130_; 
v___x_1130_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3___redArg(v_i_1127_, v_source_1128_, v_target_1129_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_1131_, lean_object* v_x_1132_, lean_object* v_x_1133_){
_start:
{
lean_object* v___x_1134_; 
v___x_1134_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__6___redArg(v_x_1132_, v_x_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(lean_object* v_a_1135_, lean_object* v_x_1136_){
_start:
{
if (lean_obj_tag(v_x_1136_) == 0)
{
lean_object* v___x_1137_; 
v___x_1137_ = lean_box(0);
return v___x_1137_;
}
else
{
lean_object* v_key_1138_; lean_object* v_value_1139_; lean_object* v_tail_1140_; uint8_t v___x_1141_; 
v_key_1138_ = lean_ctor_get(v_x_1136_, 0);
v_value_1139_ = lean_ctor_get(v_x_1136_, 1);
v_tail_1140_ = lean_ctor_get(v_x_1136_, 2);
v___x_1141_ = lean_name_eq(v_key_1138_, v_a_1135_);
if (v___x_1141_ == 0)
{
v_x_1136_ = v_tail_1140_;
goto _start;
}
else
{
lean_object* v___x_1143_; 
lean_inc(v_value_1139_);
v___x_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1143_, 0, v_value_1139_);
return v___x_1143_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg___boxed(lean_object* v_a_1144_, lean_object* v_x_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(v_a_1144_, v_x_1145_);
lean_dec(v_x_1145_);
lean_dec(v_a_1144_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(lean_object* v_m_1147_, lean_object* v_a_1148_){
_start:
{
lean_object* v_buckets_1149_; lean_object* v___x_1150_; uint64_t v___y_1152_; 
v_buckets_1149_ = lean_ctor_get(v_m_1147_, 1);
v___x_1150_ = lean_array_get_size(v_buckets_1149_);
if (lean_obj_tag(v_a_1148_) == 0)
{
uint64_t v___x_1166_; 
v___x_1166_ = 1723ULL;
v___y_1152_ = v___x_1166_;
goto v___jp_1151_;
}
else
{
uint64_t v_hash_1167_; 
v_hash_1167_ = lean_ctor_get_uint64(v_a_1148_, sizeof(void*)*2);
v___y_1152_ = v_hash_1167_;
goto v___jp_1151_;
}
v___jp_1151_:
{
uint64_t v___x_1153_; uint64_t v___x_1154_; uint64_t v_fold_1155_; uint64_t v___x_1156_; uint64_t v___x_1157_; uint64_t v___x_1158_; size_t v___x_1159_; size_t v___x_1160_; size_t v___x_1161_; size_t v___x_1162_; size_t v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1153_ = 32ULL;
v___x_1154_ = lean_uint64_shift_right(v___y_1152_, v___x_1153_);
v_fold_1155_ = lean_uint64_xor(v___y_1152_, v___x_1154_);
v___x_1156_ = 16ULL;
v___x_1157_ = lean_uint64_shift_right(v_fold_1155_, v___x_1156_);
v___x_1158_ = lean_uint64_xor(v_fold_1155_, v___x_1157_);
v___x_1159_ = lean_uint64_to_usize(v___x_1158_);
v___x_1160_ = lean_usize_of_nat(v___x_1150_);
v___x_1161_ = ((size_t)1ULL);
v___x_1162_ = lean_usize_sub(v___x_1160_, v___x_1161_);
v___x_1163_ = lean_usize_land(v___x_1159_, v___x_1162_);
v___x_1164_ = lean_array_uget_borrowed(v_buckets_1149_, v___x_1163_);
v___x_1165_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(v_a_1148_, v___x_1164_);
return v___x_1165_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg___boxed(lean_object* v_m_1168_, lean_object* v_a_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_m_1168_, v_a_1169_);
lean_dec(v_a_1169_);
lean_dec_ref(v_m_1168_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___redArg(lean_object* v_n_1171_, lean_object* v_cs_1172_, uint64_t v___x_1173_, lean_object* v___x_1174_, lean_object* v_a_1175_){
_start:
{
uint8_t v___x_1176_; 
v___x_1176_ = lean_nat_dec_lt(v_a_1175_, v_n_1171_);
if (v___x_1176_ == 0)
{
return v_a_1175_;
}
else
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v_key_1179_; lean_object* v___x_1180_; uint64_t v___y_1182_; 
v___x_1177_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
v___x_1178_ = lean_array_get_borrowed(v___x_1177_, v_cs_1172_, v_a_1175_);
v_key_1179_ = lean_ctor_get(v___x_1178_, 0);
v___x_1180_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_key_1179_) == 0)
{
uint64_t v___x_1190_; 
v___x_1190_ = 1723ULL;
v___y_1182_ = v___x_1190_;
goto v___jp_1181_;
}
else
{
uint64_t v_hash_1191_; 
v_hash_1191_ = lean_ctor_get_uint64(v_key_1179_, sizeof(void*)*2);
v___y_1182_ = v_hash_1191_;
goto v___jp_1181_;
}
v___jp_1181_:
{
uint64_t v___x_1183_; uint64_t v___x_1184_; uint64_t v___x_1185_; lean_object* v___x_1186_; uint8_t v___x_1187_; 
v___x_1183_ = 64ULL;
v___x_1184_ = lean_uint64_sub(v___x_1183_, v___x_1173_);
v___x_1185_ = lean_uint64_shift_right(v___y_1182_, v___x_1184_);
v___x_1186_ = lean_uint64_to_nat(v___x_1185_);
v___x_1187_ = lean_nat_dec_lt(v___x_1186_, v___x_1174_);
lean_dec(v___x_1186_);
if (v___x_1187_ == 0)
{
return v_a_1175_;
}
else
{
lean_object* v___x_1188_; 
v___x_1188_ = lean_nat_add(v_a_1175_, v___x_1180_);
lean_dec(v_a_1175_);
v_a_1175_ = v___x_1188_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___redArg___boxed(lean_object* v_n_1192_, lean_object* v_cs_1193_, lean_object* v___x_1194_, lean_object* v___x_1195_, lean_object* v_a_1196_){
_start:
{
uint64_t v___x_1609__boxed_1197_; lean_object* v_res_1198_; 
v___x_1609__boxed_1197_ = lean_unbox_uint64(v___x_1194_);
lean_dec_ref(v___x_1194_);
v_res_1198_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___redArg(v_n_1192_, v_cs_1193_, v___x_1609__boxed_1197_, v___x_1195_, v_a_1196_);
lean_dec(v___x_1195_);
lean_dec_ref(v_cs_1193_);
lean_dec(v_n_1192_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4_spec__5___redArg(lean_object* v___x_1199_, lean_object* v_n_1200_, lean_object* v_cs_1201_, uint64_t v___x_1202_, lean_object* v_a_1203_){
_start:
{
lean_object* v_snd_1204_; lean_object* v_fst_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1238_; 
v_snd_1204_ = lean_ctor_get(v_a_1203_, 1);
v_fst_1205_ = lean_ctor_get(v_a_1203_, 0);
v_isSharedCheck_1238_ = !lean_is_exclusive(v_a_1203_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1207_ = v_a_1203_;
v_isShared_1208_ = v_isSharedCheck_1238_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_snd_1204_);
lean_inc(v_fst_1205_);
lean_dec(v_a_1203_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1238_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v_fst_1209_; lean_object* v_snd_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1237_; 
v_fst_1209_ = lean_ctor_get(v_snd_1204_, 0);
v_snd_1210_ = lean_ctor_get(v_snd_1204_, 1);
v_isSharedCheck_1237_ = !lean_is_exclusive(v_snd_1204_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1212_ = v_snd_1204_;
v_isShared_1213_ = v_isSharedCheck_1237_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_snd_1210_);
lean_inc(v_fst_1209_);
lean_dec(v_snd_1204_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1237_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
uint8_t v___x_1214_; 
v___x_1214_ = lean_nat_dec_lt(v_snd_1210_, v___x_1199_);
if (v___x_1214_ == 0)
{
lean_object* v___x_1216_; 
if (v_isShared_1213_ == 0)
{
v___x_1216_ = v___x_1212_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_fst_1209_);
lean_ctor_set(v_reuseFailAlloc_1220_, 1, v_snd_1210_);
v___x_1216_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
lean_object* v___x_1218_; 
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 1, v___x_1216_);
v___x_1218_ = v___x_1207_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_fst_1205_);
lean_ctor_set(v_reuseFailAlloc_1219_, 1, v___x_1216_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
else
{
lean_object* v___x_1221_; lean_object* v___x_1222_; uint8_t v___x_1223_; lean_object* v___x_1224_; lean_object* v___y_1226_; 
v___x_1221_ = lean_unsigned_to_nat(1u);
v___x_1222_ = lean_unsigned_to_nat(65535u);
v___x_1223_ = lean_nat_dec_le(v___x_1222_, v_n_1200_);
v___x_1224_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___redArg(v_n_1200_, v_cs_1201_, v___x_1202_, v_snd_1210_, v_fst_1209_);
if (v___x_1223_ == 0)
{
lean_object* v___x_1235_; 
v___x_1235_ = l___private_Lean_ConstTrie_0__Lean_pushU16(v_fst_1205_, v___x_1224_);
v___y_1226_ = v___x_1235_;
goto v___jp_1225_;
}
else
{
lean_object* v___x_1236_; 
v___x_1236_ = l___private_Lean_ConstTrie_0__Lean_pushU32(v_fst_1205_, v___x_1224_);
v___y_1226_ = v___x_1236_;
goto v___jp_1225_;
}
v___jp_1225_:
{
lean_object* v___x_1227_; lean_object* v___x_1229_; 
v___x_1227_ = lean_nat_add(v_snd_1210_, v___x_1221_);
lean_dec(v_snd_1210_);
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 1, v___x_1227_);
lean_ctor_set(v___x_1212_, 0, v___x_1224_);
v___x_1229_ = v___x_1212_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v___x_1224_);
lean_ctor_set(v_reuseFailAlloc_1234_, 1, v___x_1227_);
v___x_1229_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
lean_object* v___x_1231_; 
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 1, v___x_1229_);
lean_ctor_set(v___x_1207_, 0, v___y_1226_);
v___x_1231_ = v___x_1207_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v___y_1226_);
lean_ctor_set(v_reuseFailAlloc_1233_, 1, v___x_1229_);
v___x_1231_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
v_a_1203_ = v___x_1231_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4_spec__5___redArg___boxed(lean_object* v___x_1239_, lean_object* v_n_1240_, lean_object* v_cs_1241_, lean_object* v___x_1242_, lean_object* v_a_1243_){
_start:
{
uint64_t v___x_1644__boxed_1244_; lean_object* v_res_1245_; 
v___x_1644__boxed_1244_ = lean_unbox_uint64(v___x_1242_);
lean_dec_ref(v___x_1242_);
v_res_1245_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4_spec__5___redArg(v___x_1239_, v_n_1240_, v_cs_1241_, v___x_1644__boxed_1244_, v_a_1243_);
lean_dec_ref(v_cs_1241_);
lean_dec(v_n_1240_);
lean_dec(v___x_1239_);
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___redArg(lean_object* v_n_1246_, lean_object* v_cs_1247_, uint64_t v___x_1248_, lean_object* v___x_1249_, lean_object* v_a_1250_){
_start:
{
lean_object* v_snd_1251_; lean_object* v_fst_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1285_; 
v_snd_1251_ = lean_ctor_get(v_a_1250_, 1);
v_fst_1252_ = lean_ctor_get(v_a_1250_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v_a_1250_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1254_ = v_a_1250_;
v_isShared_1255_ = v_isSharedCheck_1285_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_snd_1251_);
lean_inc(v_fst_1252_);
lean_dec(v_a_1250_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1285_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v_fst_1256_; lean_object* v_snd_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1284_; 
v_fst_1256_ = lean_ctor_get(v_snd_1251_, 0);
v_snd_1257_ = lean_ctor_get(v_snd_1251_, 1);
v_isSharedCheck_1284_ = !lean_is_exclusive(v_snd_1251_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1259_ = v_snd_1251_;
v_isShared_1260_ = v_isSharedCheck_1284_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_snd_1257_);
lean_inc(v_fst_1256_);
lean_dec(v_snd_1251_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1284_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
uint8_t v___x_1261_; 
v___x_1261_ = lean_nat_dec_lt(v_snd_1257_, v___x_1249_);
if (v___x_1261_ == 0)
{
lean_object* v___x_1263_; 
if (v_isShared_1260_ == 0)
{
v___x_1263_ = v___x_1259_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_fst_1256_);
lean_ctor_set(v_reuseFailAlloc_1267_, 1, v_snd_1257_);
v___x_1263_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
lean_object* v___x_1265_; 
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 1, v___x_1263_);
v___x_1265_ = v___x_1254_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_fst_1252_);
lean_ctor_set(v_reuseFailAlloc_1266_, 1, v___x_1263_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
return v___x_1265_;
}
}
}
else
{
lean_object* v___x_1268_; lean_object* v___x_1269_; uint8_t v___x_1270_; lean_object* v___x_1271_; lean_object* v___y_1273_; 
v___x_1268_ = lean_unsigned_to_nat(1u);
v___x_1269_ = lean_unsigned_to_nat(65535u);
v___x_1270_ = lean_nat_dec_le(v___x_1269_, v_n_1246_);
v___x_1271_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___redArg(v_n_1246_, v_cs_1247_, v___x_1248_, v_snd_1257_, v_fst_1256_);
if (v___x_1270_ == 0)
{
lean_object* v___x_1282_; 
v___x_1282_ = l___private_Lean_ConstTrie_0__Lean_pushU16(v_fst_1252_, v___x_1271_);
v___y_1273_ = v___x_1282_;
goto v___jp_1272_;
}
else
{
lean_object* v___x_1283_; 
v___x_1283_ = l___private_Lean_ConstTrie_0__Lean_pushU32(v_fst_1252_, v___x_1271_);
v___y_1273_ = v___x_1283_;
goto v___jp_1272_;
}
v___jp_1272_:
{
lean_object* v___x_1274_; lean_object* v___x_1276_; 
v___x_1274_ = lean_nat_add(v_snd_1257_, v___x_1268_);
lean_dec(v_snd_1257_);
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 1, v___x_1274_);
lean_ctor_set(v___x_1259_, 0, v___x_1271_);
v___x_1276_ = v___x_1259_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1271_);
lean_ctor_set(v_reuseFailAlloc_1281_, 1, v___x_1274_);
v___x_1276_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
lean_object* v___x_1278_; 
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 1, v___x_1276_);
lean_ctor_set(v___x_1254_, 0, v___y_1273_);
v___x_1278_ = v___x_1254_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v___y_1273_);
lean_ctor_set(v_reuseFailAlloc_1280_, 1, v___x_1276_);
v___x_1278_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
lean_object* v___x_1279_; 
v___x_1279_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4_spec__5___redArg(v___x_1249_, v_n_1246_, v_cs_1247_, v___x_1248_, v___x_1278_);
return v___x_1279_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___redArg___boxed(lean_object* v_n_1286_, lean_object* v_cs_1287_, lean_object* v___x_1288_, lean_object* v___x_1289_, lean_object* v_a_1290_){
_start:
{
uint64_t v___x_1711__boxed_1291_; lean_object* v_res_1292_; 
v___x_1711__boxed_1291_ = lean_unbox_uint64(v___x_1288_);
lean_dec_ref(v___x_1288_);
v_res_1292_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___redArg(v_n_1286_, v_cs_1287_, v___x_1711__boxed_1291_, v___x_1289_, v_a_1290_);
lean_dec(v___x_1289_);
lean_dec_ref(v_cs_1287_);
lean_dec(v_n_1286_);
return v_res_1292_;
}
}
LEAN_EXPORT uint64_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2___redArg(lean_object* v_n_1293_, uint64_t v_a_1294_){
_start:
{
uint64_t v_bits_1295_; uint64_t v___x_1296_; lean_object* v___x_1297_; uint8_t v___x_1298_; 
v_bits_1295_ = 1ULL;
v___x_1296_ = lean_uint64_shift_left(v_bits_1295_, v_a_1294_);
v___x_1297_ = lean_uint64_to_nat(v___x_1296_);
v___x_1298_ = lean_nat_dec_lt(v___x_1297_, v_n_1293_);
lean_dec(v___x_1297_);
if (v___x_1298_ == 0)
{
return v_a_1294_;
}
else
{
uint64_t v___x_1299_; uint8_t v___x_1300_; 
v___x_1299_ = 24ULL;
v___x_1300_ = lean_uint64_dec_lt(v_a_1294_, v___x_1299_);
if (v___x_1300_ == 0)
{
return v_a_1294_;
}
else
{
uint64_t v___x_1301_; 
v___x_1301_ = lean_uint64_add(v_a_1294_, v_bits_1295_);
v_a_1294_ = v___x_1301_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2___redArg___boxed(lean_object* v_n_1303_, lean_object* v_a_1304_){
_start:
{
uint64_t v_a_boxed_1305_; uint64_t v_res_1306_; lean_object* v_r_1307_; 
v_a_boxed_1305_ = lean_unbox_uint64(v_a_1304_);
lean_dec_ref(v_a_1304_);
v_res_1306_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2___redArg(v_n_1303_, v_a_boxed_1305_);
lean_dec(v_n_1303_);
v_r_1307_ = lean_box_uint64(v_res_1306_);
return v_r_1307_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___redArg(lean_object* v_as_1308_, size_t v_sz_1309_, size_t v_i_1310_, lean_object* v_b_1311_){
_start:
{
uint64_t v___y_1313_; uint8_t v___x_1321_; 
v___x_1321_ = lean_usize_dec_lt(v_i_1310_, v_sz_1309_);
if (v___x_1321_ == 0)
{
return v_b_1311_;
}
else
{
lean_object* v_a_1322_; lean_object* v_key_1323_; 
v_a_1322_ = lean_array_uget_borrowed(v_as_1308_, v_i_1310_);
v_key_1323_ = lean_ctor_get(v_a_1322_, 0);
if (lean_obj_tag(v_key_1323_) == 0)
{
uint64_t v___x_1324_; 
v___x_1324_ = 1723ULL;
v___y_1313_ = v___x_1324_;
goto v___jp_1312_;
}
else
{
uint64_t v_hash_1325_; 
v_hash_1325_ = lean_ctor_get_uint64(v_key_1323_, sizeof(void*)*2);
v___y_1313_ = v_hash_1325_;
goto v___jp_1312_;
}
}
v___jp_1312_:
{
uint64_t v___x_1314_; uint64_t v___x_1315_; uint8_t v___x_1316_; lean_object* v___x_1317_; size_t v___x_1318_; size_t v___x_1319_; 
v___x_1314_ = 32ULL;
v___x_1315_ = lean_uint64_shift_right(v___y_1313_, v___x_1314_);
v___x_1316_ = lean_uint64_to_uint8(v___x_1315_);
v___x_1317_ = lean_byte_array_push(v_b_1311_, v___x_1316_);
v___x_1318_ = ((size_t)1ULL);
v___x_1319_ = lean_usize_add(v_i_1310_, v___x_1318_);
v_i_1310_ = v___x_1319_;
v_b_1311_ = v___x_1317_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___redArg___boxed(lean_object* v_as_1326_, lean_object* v_sz_1327_, lean_object* v_i_1328_, lean_object* v_b_1329_){
_start:
{
size_t v_sz_boxed_1330_; size_t v_i_boxed_1331_; lean_object* v_res_1332_; 
v_sz_boxed_1330_ = lean_unbox_usize(v_sz_1327_);
lean_dec(v_sz_1327_);
v_i_boxed_1331_ = lean_unbox_usize(v_i_1328_);
lean_dec(v_i_1328_);
v_res_1332_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___redArg(v_as_1326_, v_sz_boxed_1330_, v_i_boxed_1331_, v_b_1329_);
lean_dec_ref(v_as_1326_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(lean_object* v_cs_1333_){
_start:
{
lean_object* v_n_1334_; lean_object* v_j_1335_; uint8_t v___x_1336_; 
v_n_1334_ = lean_array_get_size(v_cs_1333_);
v_j_1335_ = lean_unsigned_to_nat(0u);
v___x_1336_ = lean_nat_dec_eq(v_n_1334_, v_j_1335_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1337_; uint64_t v_bits_1338_; uint64_t v___x_1339_; uint64_t v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___y_1344_; uint8_t v___y_1345_; lean_object* v___x_1354_; uint8_t v___x_1355_; lean_object* v___y_1357_; 
v___x_1337_ = lean_unsigned_to_nat(1u);
v_bits_1338_ = 1ULL;
v___x_1339_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2___redArg(v_n_1334_, v_bits_1338_);
v___x_1340_ = lean_uint64_shift_left(v_bits_1338_, v___x_1339_);
v___x_1341_ = lean_uint64_to_nat(v___x_1340_);
v___x_1342_ = lean_nat_add(v___x_1341_, v___x_1337_);
lean_dec(v___x_1341_);
v___x_1354_ = lean_unsigned_to_nat(65535u);
v___x_1355_ = lean_nat_dec_le(v___x_1354_, v_n_1334_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1366_; 
v___x_1366_ = lean_unsigned_to_nat(2u);
v___y_1357_ = v___x_1366_;
goto v___jp_1356_;
}
else
{
lean_object* v___x_1367_; 
v___x_1367_ = lean_unsigned_to_nat(4u);
v___y_1357_ = v___x_1367_;
goto v___jp_1356_;
}
v___jp_1343_:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v_fst_1350_; size_t v_sz_1351_; size_t v___x_1352_; lean_object* v___x_1353_; 
v___x_1346_ = lean_byte_array_push(v___y_1344_, v___y_1345_);
v___x_1347_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10));
v___x_1348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1346_);
lean_ctor_set(v___x_1348_, 1, v___x_1347_);
v___x_1349_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___redArg(v_n_1334_, v_cs_1333_, v___x_1339_, v___x_1342_, v___x_1348_);
lean_dec(v___x_1342_);
v_fst_1350_ = lean_ctor_get(v___x_1349_, 0);
lean_inc(v_fst_1350_);
lean_dec_ref(v___x_1349_);
v_sz_1351_ = lean_array_size(v_cs_1333_);
v___x_1352_ = ((size_t)0ULL);
v___x_1353_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___redArg(v_cs_1333_, v_sz_1351_, v___x_1352_, v_fst_1350_);
return v___x_1353_;
}
v___jp_1356_:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1358_ = lean_nat_mul(v___y_1357_, v___x_1342_);
v___x_1359_ = lean_nat_add(v___x_1337_, v___x_1358_);
lean_dec(v___x_1358_);
v___x_1360_ = lean_nat_add(v___x_1359_, v_n_1334_);
lean_dec(v___x_1359_);
v___x_1361_ = lean_mk_empty_byte_array(v___x_1360_);
lean_dec(v___x_1360_);
if (v___x_1355_ == 0)
{
uint8_t v___x_1362_; 
v___x_1362_ = lean_uint64_to_uint8(v___x_1339_);
v___y_1344_ = v___x_1361_;
v___y_1345_ = v___x_1362_;
goto v___jp_1343_;
}
else
{
uint8_t v___x_1363_; uint8_t v___x_1364_; uint8_t v___x_1365_; 
v___x_1363_ = lean_uint64_to_uint8(v___x_1339_);
v___x_1364_ = 128;
v___x_1365_ = lean_uint8_lor(v___x_1363_, v___x_1364_);
v___y_1344_ = v___x_1361_;
v___y_1345_ = v___x_1365_;
goto v___jp_1343_;
}
}
}
else
{
lean_object* v___x_1368_; 
v___x_1368_ = l_ByteArray_empty;
return v___x_1368_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg___boxed(lean_object* v_cs_1369_){
_start:
{
lean_object* v_res_1370_; 
v_res_1370_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(v_cs_1369_);
lean_dec_ref(v_cs_1369_);
return v_res_1370_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___lam__0(lean_object* v_c_u2081_1371_, lean_object* v_c_u2082_1372_){
_start:
{
uint64_t v___y_1374_; lean_object* v_key_1380_; 
v_key_1380_ = lean_ctor_get(v_c_u2081_1371_, 0);
if (lean_obj_tag(v_key_1380_) == 0)
{
uint64_t v___x_1381_; 
v___x_1381_ = 1723ULL;
v___y_1374_ = v___x_1381_;
goto v___jp_1373_;
}
else
{
uint64_t v_hash_1382_; 
v_hash_1382_ = lean_ctor_get_uint64(v_key_1380_, sizeof(void*)*2);
v___y_1374_ = v_hash_1382_;
goto v___jp_1373_;
}
v___jp_1373_:
{
lean_object* v_key_1375_; 
v_key_1375_ = lean_ctor_get(v_c_u2082_1372_, 0);
if (lean_obj_tag(v_key_1375_) == 0)
{
uint64_t v___x_1376_; uint8_t v___x_1377_; 
v___x_1376_ = 1723ULL;
v___x_1377_ = lean_uint64_dec_lt(v___y_1374_, v___x_1376_);
return v___x_1377_;
}
else
{
uint64_t v_hash_1378_; uint8_t v___x_1379_; 
v_hash_1378_ = lean_ctor_get_uint64(v_key_1375_, sizeof(void*)*2);
v___x_1379_ = lean_uint64_dec_lt(v___y_1374_, v_hash_1378_);
return v___x_1379_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___lam__0___boxed(lean_object* v_c_u2081_1383_, lean_object* v_c_u2082_1384_){
_start:
{
uint8_t v_res_1385_; lean_object* v_r_1386_; 
v_res_1385_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___lam__0(v_c_u2081_1383_, v_c_u2082_1384_);
lean_dec_ref(v_c_u2082_1384_);
lean_dec_ref(v_c_u2081_1383_);
v_r_1386_ = lean_box(v_res_1385_);
return v_r_1386_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__8___redArg(lean_object* v_hi_1387_, lean_object* v_pivot_1388_, lean_object* v_as_1389_, lean_object* v_i_1390_, lean_object* v_k_1391_){
_start:
{
uint64_t v___y_1393_; uint64_t v___y_1394_; uint64_t v___y_1405_; uint8_t v___x_1409_; 
v___x_1409_ = lean_nat_dec_lt(v_k_1391_, v_hi_1387_);
if (v___x_1409_ == 0)
{
lean_object* v___x_1410_; lean_object* v___x_1411_; 
lean_dec(v_k_1391_);
v___x_1410_ = lean_array_fswap(v_as_1389_, v_i_1390_, v_hi_1387_);
v___x_1411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1411_, 0, v_i_1390_);
lean_ctor_set(v___x_1411_, 1, v___x_1410_);
return v___x_1411_;
}
else
{
lean_object* v___x_1412_; lean_object* v_key_1413_; 
v___x_1412_ = lean_array_fget_borrowed(v_as_1389_, v_k_1391_);
v_key_1413_ = lean_ctor_get(v___x_1412_, 0);
if (lean_obj_tag(v_key_1413_) == 0)
{
uint64_t v___x_1414_; 
v___x_1414_ = 1723ULL;
v___y_1405_ = v___x_1414_;
goto v___jp_1404_;
}
else
{
uint64_t v_hash_1415_; 
v_hash_1415_ = lean_ctor_get_uint64(v_key_1413_, sizeof(void*)*2);
v___y_1405_ = v_hash_1415_;
goto v___jp_1404_;
}
}
v___jp_1392_:
{
uint8_t v___x_1395_; 
v___x_1395_ = lean_uint64_dec_lt(v___y_1393_, v___y_1394_);
if (v___x_1395_ == 0)
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1396_ = lean_unsigned_to_nat(1u);
v___x_1397_ = lean_nat_add(v_k_1391_, v___x_1396_);
lean_dec(v_k_1391_);
v_k_1391_ = v___x_1397_;
goto _start;
}
else
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1399_ = lean_array_fswap(v_as_1389_, v_i_1390_, v_k_1391_);
v___x_1400_ = lean_unsigned_to_nat(1u);
v___x_1401_ = lean_nat_add(v_i_1390_, v___x_1400_);
lean_dec(v_i_1390_);
v___x_1402_ = lean_nat_add(v_k_1391_, v___x_1400_);
lean_dec(v_k_1391_);
v_as_1389_ = v___x_1399_;
v_i_1390_ = v___x_1401_;
v_k_1391_ = v___x_1402_;
goto _start;
}
}
v___jp_1404_:
{
lean_object* v_key_1406_; 
v_key_1406_ = lean_ctor_get(v_pivot_1388_, 0);
if (lean_obj_tag(v_key_1406_) == 0)
{
uint64_t v___x_1407_; 
v___x_1407_ = 1723ULL;
v___y_1393_ = v___y_1405_;
v___y_1394_ = v___x_1407_;
goto v___jp_1392_;
}
else
{
uint64_t v_hash_1408_; 
v_hash_1408_ = lean_ctor_get_uint64(v_key_1406_, sizeof(void*)*2);
v___y_1393_ = v___y_1405_;
v___y_1394_ = v_hash_1408_;
goto v___jp_1392_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__8___redArg___boxed(lean_object* v_hi_1416_, lean_object* v_pivot_1417_, lean_object* v_as_1418_, lean_object* v_i_1419_, lean_object* v_k_1420_){
_start:
{
lean_object* v_res_1421_; 
v_res_1421_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__8___redArg(v_hi_1416_, v_pivot_1417_, v_as_1418_, v_i_1419_, v_k_1420_);
lean_dec_ref(v_pivot_1417_);
lean_dec(v_hi_1416_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg(lean_object* v_n_1422_, lean_object* v_as_1423_, lean_object* v_lo_1424_, lean_object* v_hi_1425_){
_start:
{
lean_object* v___y_1427_; uint8_t v___x_1437_; 
v___x_1437_ = lean_nat_dec_lt(v_lo_1424_, v_hi_1425_);
if (v___x_1437_ == 0)
{
lean_dec(v_lo_1424_);
return v_as_1423_;
}
else
{
lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v_mid_1440_; lean_object* v___y_1442_; lean_object* v___y_1448_; lean_object* v___x_1453_; lean_object* v___x_1454_; uint8_t v___x_1455_; 
v___x_1438_ = lean_nat_add(v_lo_1424_, v_hi_1425_);
v___x_1439_ = lean_unsigned_to_nat(1u);
v_mid_1440_ = lean_nat_shiftr(v___x_1438_, v___x_1439_);
lean_dec(v___x_1438_);
v___x_1453_ = lean_array_fget_borrowed(v_as_1423_, v_mid_1440_);
v___x_1454_ = lean_array_fget_borrowed(v_as_1423_, v_lo_1424_);
v___x_1455_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___lam__0(v___x_1453_, v___x_1454_);
if (v___x_1455_ == 0)
{
v___y_1448_ = v_as_1423_;
goto v___jp_1447_;
}
else
{
lean_object* v___x_1456_; 
v___x_1456_ = lean_array_fswap(v_as_1423_, v_lo_1424_, v_mid_1440_);
v___y_1448_ = v___x_1456_;
goto v___jp_1447_;
}
v___jp_1441_:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; uint8_t v___x_1445_; 
v___x_1443_ = lean_array_fget_borrowed(v___y_1442_, v_mid_1440_);
v___x_1444_ = lean_array_fget_borrowed(v___y_1442_, v_hi_1425_);
v___x_1445_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___lam__0(v___x_1443_, v___x_1444_);
if (v___x_1445_ == 0)
{
lean_dec(v_mid_1440_);
v___y_1427_ = v___y_1442_;
goto v___jp_1426_;
}
else
{
lean_object* v___x_1446_; 
v___x_1446_ = lean_array_fswap(v___y_1442_, v_mid_1440_, v_hi_1425_);
lean_dec(v_mid_1440_);
v___y_1427_ = v___x_1446_;
goto v___jp_1426_;
}
}
v___jp_1447_:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; uint8_t v___x_1451_; 
v___x_1449_ = lean_array_fget_borrowed(v___y_1448_, v_hi_1425_);
v___x_1450_ = lean_array_fget_borrowed(v___y_1448_, v_lo_1424_);
v___x_1451_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___lam__0(v___x_1449_, v___x_1450_);
if (v___x_1451_ == 0)
{
v___y_1442_ = v___y_1448_;
goto v___jp_1441_;
}
else
{
lean_object* v___x_1452_; 
v___x_1452_ = lean_array_fswap(v___y_1448_, v_lo_1424_, v_hi_1425_);
v___y_1442_ = v___x_1452_;
goto v___jp_1441_;
}
}
}
v___jp_1426_:
{
lean_object* v_pivot_1428_; lean_object* v___x_1429_; lean_object* v_fst_1430_; lean_object* v_snd_1431_; uint8_t v___x_1432_; 
v_pivot_1428_ = lean_array_fget(v___y_1427_, v_hi_1425_);
lean_inc_n(v_lo_1424_, 2);
v___x_1429_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__8___redArg(v_hi_1425_, v_pivot_1428_, v___y_1427_, v_lo_1424_, v_lo_1424_);
lean_dec(v_pivot_1428_);
v_fst_1430_ = lean_ctor_get(v___x_1429_, 0);
lean_inc(v_fst_1430_);
v_snd_1431_ = lean_ctor_get(v___x_1429_, 1);
lean_inc(v_snd_1431_);
lean_dec_ref(v___x_1429_);
v___x_1432_ = lean_nat_dec_le(v_hi_1425_, v_fst_1430_);
if (v___x_1432_ == 0)
{
lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1433_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg(v_n_1422_, v_snd_1431_, v_lo_1424_, v_fst_1430_);
v___x_1434_ = lean_unsigned_to_nat(1u);
v___x_1435_ = lean_nat_add(v_fst_1430_, v___x_1434_);
lean_dec(v_fst_1430_);
v_as_1423_ = v___x_1433_;
v_lo_1424_ = v___x_1435_;
goto _start;
}
else
{
lean_dec(v_fst_1430_);
lean_dec(v_lo_1424_);
return v_snd_1431_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg___boxed(lean_object* v_n_1457_, lean_object* v_as_1458_, lean_object* v_lo_1459_, lean_object* v_hi_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg(v_n_1457_, v_as_1458_, v_lo_1459_, v_hi_1460_);
lean_dec(v_hi_1460_);
lean_dec(v_n_1457_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(lean_object* v_b_1462_, lean_object* v_key_1463_){
_start:
{
lean_object* v_values_1464_; lean_object* v_children_1465_; lean_object* v___y_1467_; lean_object* v___y_1472_; lean_object* v___y_1473_; lean_object* v___y_1474_; lean_object* v___y_1475_; lean_object* v___y_1478_; lean_object* v___y_1479_; lean_object* v___y_1480_; lean_object* v___y_1481_; lean_object* v___y_1484_; lean_object* v___x_1494_; 
v_values_1464_ = lean_ctor_get(v_b_1462_, 0);
v_children_1465_ = lean_ctor_get(v_b_1462_, 2);
v___x_1494_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_children_1465_, v_key_1463_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v___x_1495_; 
v___x_1495_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0));
v___y_1484_ = v___x_1495_;
goto v___jp_1483_;
}
else
{
lean_object* v_val_1496_; 
v_val_1496_ = lean_ctor_get(v___x_1494_, 0);
lean_inc(v_val_1496_);
lean_dec_ref_known(v___x_1494_, 1);
v___y_1484_ = v_val_1496_;
goto v___jp_1483_;
}
v___jp_1466_:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1468_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_values_1464_, v_key_1463_);
v___x_1469_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(v___y_1467_);
v___x_1470_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1470_, 0, v_key_1463_);
lean_ctor_set(v___x_1470_, 1, v___x_1468_);
lean_ctor_set(v___x_1470_, 2, v___y_1467_);
lean_ctor_set(v___x_1470_, 3, v___x_1469_);
return v___x_1470_;
}
v___jp_1471_:
{
lean_object* v___x_1476_; 
v___x_1476_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg(v___y_1474_, v___y_1473_, v___y_1472_, v___y_1475_);
lean_dec(v___y_1475_);
lean_dec(v___y_1474_);
v___y_1467_ = v___x_1476_;
goto v___jp_1466_;
}
v___jp_1477_:
{
uint8_t v___x_1482_; 
v___x_1482_ = lean_nat_dec_le(v___y_1481_, v___y_1480_);
if (v___x_1482_ == 0)
{
lean_dec(v___y_1480_);
lean_inc(v___y_1481_);
v___y_1472_ = v___y_1481_;
v___y_1473_ = v___y_1478_;
v___y_1474_ = v___y_1479_;
v___y_1475_ = v___y_1481_;
goto v___jp_1471_;
}
else
{
v___y_1472_ = v___y_1481_;
v___y_1473_ = v___y_1478_;
v___y_1474_ = v___y_1479_;
v___y_1475_ = v___y_1480_;
goto v___jp_1471_;
}
}
v___jp_1483_:
{
size_t v_sz_1485_; size_t v___x_1486_; lean_object* v_children_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; uint8_t v___x_1490_; 
v_sz_1485_ = lean_array_size(v___y_1484_);
v___x_1486_ = ((size_t)0ULL);
v_children_1487_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(v_b_1462_, v_sz_1485_, v___x_1486_, v___y_1484_);
v___x_1488_ = lean_array_get_size(v_children_1487_);
v___x_1489_ = lean_unsigned_to_nat(0u);
v___x_1490_ = lean_nat_dec_eq(v___x_1488_, v___x_1489_);
if (v___x_1490_ == 0)
{
lean_object* v___x_1491_; lean_object* v___x_1492_; uint8_t v___x_1493_; 
v___x_1491_ = lean_unsigned_to_nat(1u);
v___x_1492_ = lean_nat_sub(v___x_1488_, v___x_1491_);
v___x_1493_ = lean_nat_dec_le(v___x_1489_, v___x_1492_);
if (v___x_1493_ == 0)
{
lean_inc(v___x_1492_);
v___y_1478_ = v_children_1487_;
v___y_1479_ = v___x_1488_;
v___y_1480_ = v___x_1492_;
v___y_1481_ = v___x_1492_;
goto v___jp_1477_;
}
else
{
v___y_1478_ = v_children_1487_;
v___y_1479_ = v___x_1488_;
v___y_1480_ = v___x_1492_;
v___y_1481_ = v___x_1489_;
goto v___jp_1477_;
}
}
else
{
v___y_1467_ = v_children_1487_;
goto v___jp_1466_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(lean_object* v_b_1497_, size_t v_sz_1498_, size_t v_i_1499_, lean_object* v_bs_1500_){
_start:
{
uint8_t v___x_1501_; 
v___x_1501_ = lean_usize_dec_lt(v_i_1499_, v_sz_1498_);
if (v___x_1501_ == 0)
{
return v_bs_1500_;
}
else
{
lean_object* v_v_1502_; lean_object* v___x_1503_; lean_object* v_bs_x27_1504_; lean_object* v___x_1505_; size_t v___x_1506_; size_t v___x_1507_; lean_object* v___x_1508_; 
v_v_1502_ = lean_array_uget(v_bs_1500_, v_i_1499_);
v___x_1503_ = lean_unsigned_to_nat(0u);
v_bs_x27_1504_ = lean_array_uset(v_bs_1500_, v_i_1499_, v___x_1503_);
v___x_1505_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v_b_1497_, v_v_1502_);
v___x_1506_ = ((size_t)1ULL);
v___x_1507_ = lean_usize_add(v_i_1499_, v___x_1506_);
v___x_1508_ = lean_array_uset(v_bs_x27_1504_, v_i_1499_, v___x_1505_);
v_i_1499_ = v___x_1507_;
v_bs_1500_ = v___x_1508_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___boxed(lean_object* v_b_1510_, lean_object* v_sz_1511_, lean_object* v_i_1512_, lean_object* v_bs_1513_){
_start:
{
size_t v_sz_boxed_1514_; size_t v_i_boxed_1515_; lean_object* v_res_1516_; 
v_sz_boxed_1514_ = lean_unbox_usize(v_sz_1511_);
lean_dec(v_sz_1511_);
v_i_boxed_1515_ = lean_unbox_usize(v_i_1512_);
lean_dec(v_i_1512_);
v_res_1516_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(v_b_1510_, v_sz_boxed_1514_, v_i_boxed_1515_, v_bs_1513_);
lean_dec_ref(v_b_1510_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg___boxed(lean_object* v_b_1517_, lean_object* v_key_1518_){
_start:
{
lean_object* v_res_1519_; 
v_res_1519_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v_b_1517_, v_key_1518_);
lean_dec_ref(v_b_1517_);
return v_res_1519_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie(lean_object* v_00_u03b1_1520_, lean_object* v_b_1521_, lean_object* v_key_1522_){
_start:
{
lean_object* v___x_1523_; 
v___x_1523_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v_b_1521_, v_key_1522_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___boxed(lean_object* v_00_u03b1_1524_, lean_object* v_b_1525_, lean_object* v_key_1526_){
_start:
{
lean_object* v_res_1527_; 
v_res_1527_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie(v_00_u03b1_1524_, v_b_1525_, v_key_1526_);
lean_dec_ref(v_b_1525_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0(lean_object* v_00_u03b2_1528_, lean_object* v_m_1529_, lean_object* v_a_1530_){
_start:
{
lean_object* v___x_1531_; 
v___x_1531_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_m_1529_, v_a_1530_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___boxed(lean_object* v_00_u03b2_1532_, lean_object* v_m_1533_, lean_object* v_a_1534_){
_start:
{
lean_object* v_res_1535_; 
v_res_1535_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0(v_00_u03b2_1532_, v_m_1533_, v_a_1534_);
lean_dec(v_a_1534_);
lean_dec_ref(v_m_1533_);
return v_res_1535_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1(lean_object* v_00_u03b1_1536_, lean_object* v_cs_1537_){
_start:
{
lean_object* v___x_1538_; 
v___x_1538_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(v_cs_1537_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___boxed(lean_object* v_00_u03b1_1539_, lean_object* v_cs_1540_){
_start:
{
lean_object* v_res_1541_; 
v_res_1541_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1(v_00_u03b1_1539_, v_cs_1540_);
lean_dec_ref(v_cs_1540_);
return v_res_1541_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2(lean_object* v_00_u03b1_1542_, lean_object* v_b_1543_, size_t v_sz_1544_, size_t v_i_1545_, lean_object* v_bs_1546_){
_start:
{
lean_object* v___x_1547_; 
v___x_1547_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(v_b_1543_, v_sz_1544_, v_i_1545_, v_bs_1546_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___boxed(lean_object* v_00_u03b1_1548_, lean_object* v_b_1549_, lean_object* v_sz_1550_, lean_object* v_i_1551_, lean_object* v_bs_1552_){
_start:
{
size_t v_sz_boxed_1553_; size_t v_i_boxed_1554_; lean_object* v_res_1555_; 
v_sz_boxed_1553_ = lean_unbox_usize(v_sz_1550_);
lean_dec(v_sz_1550_);
v_i_boxed_1554_ = lean_unbox_usize(v_i_1551_);
lean_dec(v_i_1551_);
v_res_1555_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2(v_00_u03b1_1548_, v_b_1549_, v_sz_boxed_1553_, v_i_boxed_1554_, v_bs_1552_);
lean_dec_ref(v_b_1549_);
return v_res_1555_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3(lean_object* v_00_u03b1_1556_, lean_object* v_n_1557_, lean_object* v_as_1558_, lean_object* v_lo_1559_, lean_object* v_hi_1560_, lean_object* v_w_1561_, lean_object* v_hlo_1562_, lean_object* v_hhi_1563_){
_start:
{
lean_object* v___x_1564_; 
v___x_1564_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___redArg(v_n_1557_, v_as_1558_, v_lo_1559_, v_hi_1560_);
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3___boxed(lean_object* v_00_u03b1_1565_, lean_object* v_n_1566_, lean_object* v_as_1567_, lean_object* v_lo_1568_, lean_object* v_hi_1569_, lean_object* v_w_1570_, lean_object* v_hlo_1571_, lean_object* v_hhi_1572_){
_start:
{
lean_object* v_res_1573_; 
v_res_1573_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3(v_00_u03b1_1565_, v_n_1566_, v_as_1567_, v_lo_1568_, v_hi_1569_, v_w_1570_, v_hlo_1571_, v_hhi_1572_);
lean_dec(v_hi_1569_);
lean_dec(v_n_1566_);
return v_res_1573_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0(lean_object* v_00_u03b2_1574_, lean_object* v_a_1575_, lean_object* v_x_1576_){
_start:
{
lean_object* v___x_1577_; 
v___x_1577_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(v_a_1575_, v_x_1576_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1578_, lean_object* v_a_1579_, lean_object* v_x_1580_){
_start:
{
lean_object* v_res_1581_; 
v_res_1581_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0(v_00_u03b2_1578_, v_a_1579_, v_x_1580_);
lean_dec(v_x_1580_);
lean_dec(v_a_1579_);
return v_res_1581_;
}
}
LEAN_EXPORT uint64_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2(lean_object* v_n_1582_, lean_object* v_inst_1583_, uint64_t v_a_1584_){
_start:
{
uint64_t v___x_1585_; 
v___x_1585_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2___redArg(v_n_1582_, v_a_1584_);
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2___boxed(lean_object* v_n_1586_, lean_object* v_inst_1587_, lean_object* v_a_1588_){
_start:
{
uint64_t v_a_boxed_1589_; uint64_t v_res_1590_; lean_object* v_r_1591_; 
v_a_boxed_1589_ = lean_unbox_uint64(v_a_1588_);
lean_dec_ref(v_a_1588_);
v_res_1590_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2(v_n_1586_, v_inst_1587_, v_a_boxed_1589_);
lean_dec(v_n_1586_);
v_r_1591_ = lean_box_uint64(v_res_1590_);
return v_r_1591_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3(lean_object* v_n_1592_, lean_object* v_00_u03b1_1593_, lean_object* v_cs_1594_, uint64_t v___x_1595_, lean_object* v___x_1596_, lean_object* v_inst_1597_, lean_object* v_a_1598_){
_start:
{
lean_object* v___x_1599_; 
v___x_1599_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___redArg(v_n_1592_, v_cs_1594_, v___x_1595_, v___x_1596_, v_a_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3___boxed(lean_object* v_n_1600_, lean_object* v_00_u03b1_1601_, lean_object* v_cs_1602_, lean_object* v___x_1603_, lean_object* v___x_1604_, lean_object* v_inst_1605_, lean_object* v_a_1606_){
_start:
{
uint64_t v___x_2082__boxed_1607_; lean_object* v_res_1608_; 
v___x_2082__boxed_1607_ = lean_unbox_uint64(v___x_1603_);
lean_dec_ref(v___x_1603_);
v_res_1608_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__3(v_n_1600_, v_00_u03b1_1601_, v_cs_1602_, v___x_2082__boxed_1607_, v___x_1604_, v_inst_1605_, v_a_1606_);
lean_dec(v___x_1604_);
lean_dec_ref(v_cs_1602_);
lean_dec(v_n_1600_);
return v_res_1608_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4(lean_object* v_n_1609_, lean_object* v_00_u03b1_1610_, lean_object* v_cs_1611_, uint64_t v___x_1612_, lean_object* v___x_1613_, lean_object* v_inst_1614_, lean_object* v_a_1615_){
_start:
{
lean_object* v___x_1616_; 
v___x_1616_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___redArg(v_n_1609_, v_cs_1611_, v___x_1612_, v___x_1613_, v_a_1615_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4___boxed(lean_object* v_n_1617_, lean_object* v_00_u03b1_1618_, lean_object* v_cs_1619_, lean_object* v___x_1620_, lean_object* v___x_1621_, lean_object* v_inst_1622_, lean_object* v_a_1623_){
_start:
{
uint64_t v___x_2093__boxed_1624_; lean_object* v_res_1625_; 
v___x_2093__boxed_1624_ = lean_unbox_uint64(v___x_1620_);
lean_dec_ref(v___x_1620_);
v_res_1625_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4(v_n_1617_, v_00_u03b1_1618_, v_cs_1619_, v___x_2093__boxed_1624_, v___x_1621_, v_inst_1622_, v_a_1623_);
lean_dec(v___x_1621_);
lean_dec_ref(v_cs_1619_);
lean_dec(v_n_1617_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5(lean_object* v_00_u03b1_1626_, lean_object* v_as_1627_, size_t v_sz_1628_, size_t v_i_1629_, lean_object* v_b_1630_){
_start:
{
lean_object* v___x_1631_; 
v___x_1631_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___redArg(v_as_1627_, v_sz_1628_, v_i_1629_, v_b_1630_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5___boxed(lean_object* v_00_u03b1_1632_, lean_object* v_as_1633_, lean_object* v_sz_1634_, lean_object* v_i_1635_, lean_object* v_b_1636_){
_start:
{
size_t v_sz_boxed_1637_; size_t v_i_boxed_1638_; lean_object* v_res_1639_; 
v_sz_boxed_1637_ = lean_unbox_usize(v_sz_1634_);
lean_dec(v_sz_1634_);
v_i_boxed_1638_ = lean_unbox_usize(v_i_1635_);
lean_dec(v_i_1635_);
v_res_1639_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__5(v_00_u03b1_1632_, v_as_1633_, v_sz_boxed_1637_, v_i_boxed_1638_, v_b_1636_);
lean_dec_ref(v_as_1633_);
return v_res_1639_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__8(lean_object* v_00_u03b1_1640_, lean_object* v_n_1641_, lean_object* v_lo_1642_, lean_object* v_hi_1643_, lean_object* v_hhi_1644_, lean_object* v_pivot_1645_, lean_object* v_as_1646_, lean_object* v_i_1647_, lean_object* v_k_1648_, lean_object* v_ilo_1649_, lean_object* v_ik_1650_, lean_object* v_w_1651_){
_start:
{
lean_object* v___x_1652_; 
v___x_1652_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__8___redArg(v_hi_1643_, v_pivot_1645_, v_as_1646_, v_i_1647_, v_k_1648_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__8___boxed(lean_object* v_00_u03b1_1653_, lean_object* v_n_1654_, lean_object* v_lo_1655_, lean_object* v_hi_1656_, lean_object* v_hhi_1657_, lean_object* v_pivot_1658_, lean_object* v_as_1659_, lean_object* v_i_1660_, lean_object* v_k_1661_, lean_object* v_ilo_1662_, lean_object* v_ik_1663_, lean_object* v_w_1664_){
_start:
{
lean_object* v_res_1665_; 
v_res_1665_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__3_spec__8(v_00_u03b1_1653_, v_n_1654_, v_lo_1655_, v_hi_1656_, v_hhi_1657_, v_pivot_1658_, v_as_1659_, v_i_1660_, v_k_1661_, v_ilo_1662_, v_ik_1663_, v_w_1664_);
lean_dec_ref(v_pivot_1658_);
lean_dec(v_hi_1656_);
lean_dec(v_lo_1655_);
lean_dec(v_n_1654_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4_spec__5(lean_object* v___x_1666_, lean_object* v_n_1667_, lean_object* v_00_u03b1_1668_, lean_object* v_cs_1669_, uint64_t v___x_1670_, lean_object* v_inst_1671_, lean_object* v_a_1672_){
_start:
{
lean_object* v___x_1673_; 
v___x_1673_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4_spec__5___redArg(v___x_1666_, v_n_1667_, v_cs_1669_, v___x_1670_, v_a_1672_);
return v___x_1673_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4_spec__5___boxed(lean_object* v___x_1674_, lean_object* v_n_1675_, lean_object* v_00_u03b1_1676_, lean_object* v_cs_1677_, lean_object* v___x_1678_, lean_object* v_inst_1679_, lean_object* v_a_1680_){
_start:
{
uint64_t v___x_2109__boxed_1681_; lean_object* v_res_1682_; 
v___x_2109__boxed_1681_ = lean_unbox_uint64(v___x_1678_);
lean_dec_ref(v___x_1678_);
v_res_1682_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__4_spec__5(v___x_1674_, v_n_1675_, v_00_u03b1_1676_, v_cs_1677_, v___x_2109__boxed_1681_, v_inst_1679_, v_a_1680_);
lean_dec_ref(v_cs_1677_);
lean_dec(v_n_1675_);
lean_dec(v___x_1674_);
return v_res_1682_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0_spec__0___redArg(lean_object* v_a_1683_, lean_object* v_b_1684_, lean_object* v_x_1685_){
_start:
{
if (lean_obj_tag(v_x_1685_) == 0)
{
lean_dec(v_b_1684_);
lean_dec(v_a_1683_);
return v_x_1685_;
}
else
{
lean_object* v_key_1686_; lean_object* v_value_1687_; lean_object* v_tail_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1700_; 
v_key_1686_ = lean_ctor_get(v_x_1685_, 0);
v_value_1687_ = lean_ctor_get(v_x_1685_, 1);
v_tail_1688_ = lean_ctor_get(v_x_1685_, 2);
v_isSharedCheck_1700_ = !lean_is_exclusive(v_x_1685_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1690_ = v_x_1685_;
v_isShared_1691_ = v_isSharedCheck_1700_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_tail_1688_);
lean_inc(v_value_1687_);
lean_inc(v_key_1686_);
lean_dec(v_x_1685_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1700_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
uint8_t v___x_1692_; 
v___x_1692_ = lean_name_eq(v_key_1686_, v_a_1683_);
if (v___x_1692_ == 0)
{
lean_object* v___x_1693_; lean_object* v___x_1695_; 
v___x_1693_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0_spec__0___redArg(v_a_1683_, v_b_1684_, v_tail_1688_);
if (v_isShared_1691_ == 0)
{
lean_ctor_set(v___x_1690_, 2, v___x_1693_);
v___x_1695_ = v___x_1690_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_key_1686_);
lean_ctor_set(v_reuseFailAlloc_1696_, 1, v_value_1687_);
lean_ctor_set(v_reuseFailAlloc_1696_, 2, v___x_1693_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
else
{
lean_object* v___x_1698_; 
lean_dec(v_value_1687_);
lean_dec(v_key_1686_);
if (v_isShared_1691_ == 0)
{
lean_ctor_set(v___x_1690_, 1, v_b_1684_);
lean_ctor_set(v___x_1690_, 0, v_a_1683_);
v___x_1698_ = v___x_1690_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_a_1683_);
lean_ctor_set(v_reuseFailAlloc_1699_, 1, v_b_1684_);
lean_ctor_set(v_reuseFailAlloc_1699_, 2, v_tail_1688_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0___redArg(lean_object* v_m_1701_, lean_object* v_a_1702_, lean_object* v_b_1703_){
_start:
{
lean_object* v_size_1704_; lean_object* v_buckets_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1751_; 
v_size_1704_ = lean_ctor_get(v_m_1701_, 0);
v_buckets_1705_ = lean_ctor_get(v_m_1701_, 1);
v_isSharedCheck_1751_ = !lean_is_exclusive(v_m_1701_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1707_ = v_m_1701_;
v_isShared_1708_ = v_isSharedCheck_1751_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_buckets_1705_);
lean_inc(v_size_1704_);
lean_dec(v_m_1701_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1751_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1709_; uint64_t v___y_1711_; 
v___x_1709_ = lean_array_get_size(v_buckets_1705_);
if (lean_obj_tag(v_a_1702_) == 0)
{
uint64_t v___x_1749_; 
v___x_1749_ = 1723ULL;
v___y_1711_ = v___x_1749_;
goto v___jp_1710_;
}
else
{
uint64_t v_hash_1750_; 
v_hash_1750_ = lean_ctor_get_uint64(v_a_1702_, sizeof(void*)*2);
v___y_1711_ = v_hash_1750_;
goto v___jp_1710_;
}
v___jp_1710_:
{
uint64_t v___x_1712_; uint64_t v___x_1713_; uint64_t v_fold_1714_; uint64_t v___x_1715_; uint64_t v___x_1716_; uint64_t v___x_1717_; size_t v___x_1718_; size_t v___x_1719_; size_t v___x_1720_; size_t v___x_1721_; size_t v___x_1722_; lean_object* v_bkt_1723_; uint8_t v___x_1724_; 
v___x_1712_ = 32ULL;
v___x_1713_ = lean_uint64_shift_right(v___y_1711_, v___x_1712_);
v_fold_1714_ = lean_uint64_xor(v___y_1711_, v___x_1713_);
v___x_1715_ = 16ULL;
v___x_1716_ = lean_uint64_shift_right(v_fold_1714_, v___x_1715_);
v___x_1717_ = lean_uint64_xor(v_fold_1714_, v___x_1716_);
v___x_1718_ = lean_uint64_to_usize(v___x_1717_);
v___x_1719_ = lean_usize_of_nat(v___x_1709_);
v___x_1720_ = ((size_t)1ULL);
v___x_1721_ = lean_usize_sub(v___x_1719_, v___x_1720_);
v___x_1722_ = lean_usize_land(v___x_1718_, v___x_1721_);
v_bkt_1723_ = lean_array_uget_borrowed(v_buckets_1705_, v___x_1722_);
v___x_1724_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_1702_, v_bkt_1723_);
if (v___x_1724_ == 0)
{
lean_object* v___x_1725_; lean_object* v_size_x27_1726_; lean_object* v___x_1727_; lean_object* v_buckets_x27_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; uint8_t v___x_1734_; 
v___x_1725_ = lean_unsigned_to_nat(1u);
v_size_x27_1726_ = lean_nat_add(v_size_1704_, v___x_1725_);
lean_dec(v_size_1704_);
lean_inc(v_bkt_1723_);
v___x_1727_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1727_, 0, v_a_1702_);
lean_ctor_set(v___x_1727_, 1, v_b_1703_);
lean_ctor_set(v___x_1727_, 2, v_bkt_1723_);
v_buckets_x27_1728_ = lean_array_uset(v_buckets_1705_, v___x_1722_, v___x_1727_);
v___x_1729_ = lean_unsigned_to_nat(4u);
v___x_1730_ = lean_nat_mul(v_size_x27_1726_, v___x_1729_);
v___x_1731_ = lean_unsigned_to_nat(3u);
v___x_1732_ = lean_nat_div(v___x_1730_, v___x_1731_);
lean_dec(v___x_1730_);
v___x_1733_ = lean_array_get_size(v_buckets_x27_1728_);
v___x_1734_ = lean_nat_dec_le(v___x_1732_, v___x_1733_);
lean_dec(v___x_1732_);
if (v___x_1734_ == 0)
{
lean_object* v_val_1735_; lean_object* v___x_1737_; 
v_val_1735_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(v_buckets_x27_1728_);
if (v_isShared_1708_ == 0)
{
lean_ctor_set(v___x_1707_, 1, v_val_1735_);
lean_ctor_set(v___x_1707_, 0, v_size_x27_1726_);
v___x_1737_ = v___x_1707_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_size_x27_1726_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v_val_1735_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
return v___x_1737_;
}
}
else
{
lean_object* v___x_1740_; 
if (v_isShared_1708_ == 0)
{
lean_ctor_set(v___x_1707_, 1, v_buckets_x27_1728_);
lean_ctor_set(v___x_1707_, 0, v_size_x27_1726_);
v___x_1740_ = v___x_1707_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v_size_x27_1726_);
lean_ctor_set(v_reuseFailAlloc_1741_, 1, v_buckets_x27_1728_);
v___x_1740_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
return v___x_1740_;
}
}
}
else
{
lean_object* v___x_1742_; lean_object* v_buckets_x27_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1747_; 
lean_inc(v_bkt_1723_);
v___x_1742_ = lean_box(0);
v_buckets_x27_1743_ = lean_array_uset(v_buckets_1705_, v___x_1722_, v___x_1742_);
v___x_1744_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0_spec__0___redArg(v_a_1702_, v_b_1703_, v_bkt_1723_);
v___x_1745_ = lean_array_uset(v_buckets_x27_1743_, v___x_1722_, v___x_1744_);
if (v_isShared_1708_ == 0)
{
lean_ctor_set(v___x_1707_, 1, v___x_1745_);
v___x_1747_ = v___x_1707_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_size_1704_);
lean_ctor_set(v_reuseFailAlloc_1748_, 1, v___x_1745_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1___redArg(lean_object* v_as_1752_, size_t v_sz_1753_, size_t v_i_1754_, lean_object* v_b_1755_){
_start:
{
uint8_t v___x_1756_; 
v___x_1756_ = lean_usize_dec_lt(v_i_1754_, v_sz_1753_);
if (v___x_1756_ == 0)
{
return v_b_1755_;
}
else
{
lean_object* v_snd_1757_; lean_object* v_fst_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1801_; 
v_snd_1757_ = lean_ctor_get(v_b_1755_, 1);
v_fst_1758_ = lean_ctor_get(v_b_1755_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v_b_1755_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1760_ = v_b_1755_;
v_isShared_1761_ = v_isSharedCheck_1801_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_snd_1757_);
lean_inc(v_fst_1758_);
lean_dec(v_b_1755_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1801_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v_array_1762_; lean_object* v_start_1763_; lean_object* v_stop_1764_; uint8_t v___x_1765_; 
v_array_1762_ = lean_ctor_get(v_snd_1757_, 0);
v_start_1763_ = lean_ctor_get(v_snd_1757_, 1);
v_stop_1764_ = lean_ctor_get(v_snd_1757_, 2);
v___x_1765_ = lean_nat_dec_lt(v_start_1763_, v_stop_1764_);
if (v___x_1765_ == 0)
{
lean_object* v___x_1767_; 
if (v_isShared_1761_ == 0)
{
v___x_1767_ = v___x_1760_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_fst_1758_);
lean_ctor_set(v_reuseFailAlloc_1768_, 1, v_snd_1757_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
else
{
lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1797_; 
lean_inc(v_stop_1764_);
lean_inc(v_start_1763_);
lean_inc_ref(v_array_1762_);
v_isSharedCheck_1797_ = !lean_is_exclusive(v_snd_1757_);
if (v_isSharedCheck_1797_ == 0)
{
lean_object* v_unused_1798_; lean_object* v_unused_1799_; lean_object* v_unused_1800_; 
v_unused_1798_ = lean_ctor_get(v_snd_1757_, 2);
lean_dec(v_unused_1798_);
v_unused_1799_ = lean_ctor_get(v_snd_1757_, 1);
lean_dec(v_unused_1799_);
v_unused_1800_ = lean_ctor_get(v_snd_1757_, 0);
lean_dec(v_unused_1800_);
v___x_1770_ = v_snd_1757_;
v_isShared_1771_ = v_isSharedCheck_1797_;
goto v_resetjp_1769_;
}
else
{
lean_dec(v_snd_1757_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1797_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v_values_1772_; lean_object* v_seen_1773_; lean_object* v_children_1774_; lean_object* v___x_1776_; uint8_t v_isShared_1777_; uint8_t v_isSharedCheck_1796_; 
v_values_1772_ = lean_ctor_get(v_fst_1758_, 0);
v_seen_1773_ = lean_ctor_get(v_fst_1758_, 1);
v_children_1774_ = lean_ctor_get(v_fst_1758_, 2);
v_isSharedCheck_1796_ = !lean_is_exclusive(v_fst_1758_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1776_ = v_fst_1758_;
v_isShared_1777_ = v_isSharedCheck_1796_;
goto v_resetjp_1775_;
}
else
{
lean_inc(v_children_1774_);
lean_inc(v_seen_1773_);
lean_inc(v_values_1772_);
lean_dec(v_fst_1758_);
v___x_1776_ = lean_box(0);
v_isShared_1777_ = v_isSharedCheck_1796_;
goto v_resetjp_1775_;
}
v_resetjp_1775_:
{
lean_object* v___x_1778_; lean_object* v_a_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1783_; 
v___x_1778_ = lean_array_fget(v_array_1762_, v_start_1763_);
v_a_1779_ = lean_array_uget_borrowed(v_as_1752_, v_i_1754_);
v___x_1780_ = lean_unsigned_to_nat(1u);
v___x_1781_ = lean_nat_add(v_start_1763_, v___x_1780_);
lean_dec(v_start_1763_);
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 1, v___x_1781_);
v___x_1783_ = v___x_1770_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v_array_1762_);
lean_ctor_set(v_reuseFailAlloc_1795_, 1, v___x_1781_);
lean_ctor_set(v_reuseFailAlloc_1795_, 2, v_stop_1764_);
v___x_1783_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
lean_object* v___x_1784_; lean_object* v___x_1786_; 
lean_inc(v_a_1779_);
v___x_1784_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0___redArg(v_values_1772_, v_a_1779_, v___x_1778_);
if (v_isShared_1777_ == 0)
{
lean_ctor_set(v___x_1776_, 0, v___x_1784_);
v___x_1786_ = v___x_1776_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v___x_1784_);
lean_ctor_set(v_reuseFailAlloc_1794_, 1, v_seen_1773_);
lean_ctor_set(v_reuseFailAlloc_1794_, 2, v_children_1774_);
v___x_1786_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
lean_object* v___x_1787_; lean_object* v___x_1789_; 
lean_inc(v_a_1779_);
v___x_1787_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(v___x_1786_, v_a_1779_);
if (v_isShared_1761_ == 0)
{
lean_ctor_set(v___x_1760_, 1, v___x_1783_);
lean_ctor_set(v___x_1760_, 0, v___x_1787_);
v___x_1789_ = v___x_1760_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v___x_1787_);
lean_ctor_set(v_reuseFailAlloc_1793_, 1, v___x_1783_);
v___x_1789_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
size_t v___x_1790_; size_t v___x_1791_; 
v___x_1790_ = ((size_t)1ULL);
v___x_1791_ = lean_usize_add(v_i_1754_, v___x_1790_);
v_i_1754_ = v___x_1791_;
v_b_1755_ = v___x_1789_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1___redArg___boxed(lean_object* v_as_1802_, lean_object* v_sz_1803_, lean_object* v_i_1804_, lean_object* v_b_1805_){
_start:
{
size_t v_sz_boxed_1806_; size_t v_i_boxed_1807_; lean_object* v_res_1808_; 
v_sz_boxed_1806_ = lean_unbox_usize(v_sz_1803_);
lean_dec(v_sz_1803_);
v_i_boxed_1807_ = lean_unbox_usize(v_i_1804_);
lean_dec(v_i_1804_);
v_res_1808_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1___redArg(v_as_1802_, v_sz_boxed_1806_, v_i_boxed_1807_, v_b_1805_);
lean_dec_ref(v_as_1802_);
return v_res_1808_;
}
}
static lean_object* _init_l_Lean_ConstTrie_ofArrays___redArg___closed__0(void){
_start:
{
lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1809_ = lean_box(0);
v___x_1810_ = lean_unsigned_to_nat(16u);
v___x_1811_ = lean_mk_array(v___x_1810_, v___x_1809_);
return v___x_1811_;
}
}
static lean_object* _init_l_Lean_ConstTrie_ofArrays___redArg___closed__1(void){
_start:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; 
v___x_1812_ = lean_obj_once(&l_Lean_ConstTrie_ofArrays___redArg___closed__0, &l_Lean_ConstTrie_ofArrays___redArg___closed__0_once, _init_l_Lean_ConstTrie_ofArrays___redArg___closed__0);
v___x_1813_ = lean_unsigned_to_nat(0u);
v___x_1814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1813_);
lean_ctor_set(v___x_1814_, 1, v___x_1812_);
return v___x_1814_;
}
}
static lean_object* _init_l_Lean_ConstTrie_ofArrays___redArg___closed__2(void){
_start:
{
lean_object* v___x_1815_; lean_object* v_b_1816_; 
v___x_1815_ = lean_obj_once(&l_Lean_ConstTrie_ofArrays___redArg___closed__1, &l_Lean_ConstTrie_ofArrays___redArg___closed__1_once, _init_l_Lean_ConstTrie_ofArrays___redArg___closed__1);
v_b_1816_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_b_1816_, 0, v___x_1815_);
lean_ctor_set(v_b_1816_, 1, v___x_1815_);
lean_ctor_set(v_b_1816_, 2, v___x_1815_);
return v_b_1816_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___redArg(lean_object* v_names_1817_, lean_object* v_vals_1818_){
_start:
{
lean_object* v___x_1819_; lean_object* v_b_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; size_t v_sz_1824_; size_t v___x_1825_; lean_object* v___x_1826_; lean_object* v_fst_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1819_ = lean_unsigned_to_nat(0u);
v_b_1820_ = lean_obj_once(&l_Lean_ConstTrie_ofArrays___redArg___closed__2, &l_Lean_ConstTrie_ofArrays___redArg___closed__2_once, _init_l_Lean_ConstTrie_ofArrays___redArg___closed__2);
v___x_1821_ = lean_array_get_size(v_vals_1818_);
v___x_1822_ = l_Array_toSubarray___redArg(v_vals_1818_, v___x_1819_, v___x_1821_);
v___x_1823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1823_, 0, v_b_1820_);
lean_ctor_set(v___x_1823_, 1, v___x_1822_);
v_sz_1824_ = lean_array_size(v_names_1817_);
v___x_1825_ = ((size_t)0ULL);
v___x_1826_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1___redArg(v_names_1817_, v_sz_1824_, v___x_1825_, v___x_1823_);
v_fst_1827_ = lean_ctor_get(v___x_1826_, 0);
lean_inc(v_fst_1827_);
lean_dec_ref(v___x_1826_);
v___x_1828_ = lean_box(0);
v___x_1829_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v_fst_1827_, v___x_1828_);
lean_dec(v_fst_1827_);
return v___x_1829_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___redArg___boxed(lean_object* v_names_1830_, lean_object* v_vals_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = l_Lean_ConstTrie_ofArrays___redArg(v_names_1830_, v_vals_1831_);
lean_dec_ref(v_names_1830_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays(lean_object* v_00_u03b1_1833_, lean_object* v_names_1834_, lean_object* v_vals_1835_){
_start:
{
lean_object* v___x_1836_; 
v___x_1836_ = l_Lean_ConstTrie_ofArrays___redArg(v_names_1834_, v_vals_1835_);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___boxed(lean_object* v_00_u03b1_1837_, lean_object* v_names_1838_, lean_object* v_vals_1839_){
_start:
{
lean_object* v_res_1840_; 
v_res_1840_ = l_Lean_ConstTrie_ofArrays(v_00_u03b1_1837_, v_names_1838_, v_vals_1839_);
lean_dec_ref(v_names_1838_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0(lean_object* v_00_u03b2_1841_, lean_object* v_m_1842_, lean_object* v_a_1843_, lean_object* v_b_1844_){
_start:
{
lean_object* v___x_1845_; 
v___x_1845_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0___redArg(v_m_1842_, v_a_1843_, v_b_1844_);
return v___x_1845_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1(lean_object* v_00_u03b1_1846_, lean_object* v_as_1847_, size_t v_sz_1848_, size_t v_i_1849_, lean_object* v_b_1850_){
_start:
{
lean_object* v___x_1851_; 
v___x_1851_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1___redArg(v_as_1847_, v_sz_1848_, v_i_1849_, v_b_1850_);
return v___x_1851_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1___boxed(lean_object* v_00_u03b1_1852_, lean_object* v_as_1853_, lean_object* v_sz_1854_, lean_object* v_i_1855_, lean_object* v_b_1856_){
_start:
{
size_t v_sz_boxed_1857_; size_t v_i_boxed_1858_; lean_object* v_res_1859_; 
v_sz_boxed_1857_ = lean_unbox_usize(v_sz_1854_);
lean_dec(v_sz_1854_);
v_i_boxed_1858_ = lean_unbox_usize(v_i_1855_);
lean_dec(v_i_1855_);
v_res_1859_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofArrays_spec__1(v_00_u03b1_1852_, v_as_1853_, v_sz_boxed_1857_, v_i_boxed_1858_, v_b_1856_);
lean_dec_ref(v_as_1853_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0_spec__0(lean_object* v_00_u03b2_1860_, lean_object* v_a_1861_, lean_object* v_b_1862_, lean_object* v_x_1863_){
_start:
{
lean_object* v___x_1864_; 
v___x_1864_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0_spec__0___redArg(v_a_1861_, v_b_1862_, v_x_1863_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0(lean_object* v_as_1865_, size_t v_sz_1866_, size_t v_i_1867_, lean_object* v_b_1868_){
_start:
{
uint8_t v___x_1869_; 
v___x_1869_ = lean_usize_dec_lt(v_i_1867_, v_sz_1866_);
if (v___x_1869_ == 0)
{
return v_b_1868_;
}
else
{
lean_object* v_values_1870_; lean_object* v_seen_1871_; lean_object* v_children_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1886_; 
v_values_1870_ = lean_ctor_get(v_b_1868_, 0);
v_seen_1871_ = lean_ctor_get(v_b_1868_, 1);
v_children_1872_ = lean_ctor_get(v_b_1868_, 2);
v_isSharedCheck_1886_ = !lean_is_exclusive(v_b_1868_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1874_ = v_b_1868_;
v_isShared_1875_ = v_isSharedCheck_1886_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_children_1872_);
lean_inc(v_seen_1871_);
lean_inc(v_values_1870_);
lean_dec(v_b_1868_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1886_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v_a_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1880_; 
v_a_1876_ = lean_array_uget_borrowed(v_as_1865_, v_i_1867_);
v___x_1877_ = lean_box(0);
lean_inc(v_a_1876_);
v___x_1878_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ConstTrie_ofArrays_spec__0___redArg(v_values_1870_, v_a_1876_, v___x_1877_);
if (v_isShared_1875_ == 0)
{
lean_ctor_set(v___x_1874_, 0, v___x_1878_);
v___x_1880_ = v___x_1874_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v___x_1878_);
lean_ctor_set(v_reuseFailAlloc_1885_, 1, v_seen_1871_);
lean_ctor_set(v_reuseFailAlloc_1885_, 2, v_children_1872_);
v___x_1880_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
lean_object* v___x_1881_; size_t v___x_1882_; size_t v___x_1883_; 
lean_inc(v_a_1876_);
v___x_1881_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(v___x_1880_, v_a_1876_);
v___x_1882_ = ((size_t)1ULL);
v___x_1883_ = lean_usize_add(v_i_1867_, v___x_1882_);
v_i_1867_ = v___x_1883_;
v_b_1868_ = v___x_1881_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0___boxed(lean_object* v_as_1887_, lean_object* v_sz_1888_, lean_object* v_i_1889_, lean_object* v_b_1890_){
_start:
{
size_t v_sz_boxed_1891_; size_t v_i_boxed_1892_; lean_object* v_res_1893_; 
v_sz_boxed_1891_ = lean_unbox_usize(v_sz_1888_);
lean_dec(v_sz_1888_);
v_i_boxed_1892_ = lean_unbox_usize(v_i_1889_);
lean_dec(v_i_1889_);
v_res_1893_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0(v_as_1887_, v_sz_boxed_1891_, v_i_boxed_1892_, v_b_1890_);
lean_dec_ref(v_as_1887_);
return v_res_1893_;
}
}
static lean_object* _init_l_Lean_ConstTrie_ofNames___closed__0(void){
_start:
{
lean_object* v___x_1894_; lean_object* v_b_1895_; 
v___x_1894_ = lean_obj_once(&l_Lean_ConstTrie_ofArrays___redArg___closed__1, &l_Lean_ConstTrie_ofArrays___redArg___closed__1_once, _init_l_Lean_ConstTrie_ofArrays___redArg___closed__1);
v_b_1895_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_b_1895_, 0, v___x_1894_);
lean_ctor_set(v_b_1895_, 1, v___x_1894_);
lean_ctor_set(v_b_1895_, 2, v___x_1894_);
return v_b_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofNames(lean_object* v_names_1896_){
_start:
{
lean_object* v_b_1897_; size_t v_sz_1898_; size_t v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; 
v_b_1897_ = lean_obj_once(&l_Lean_ConstTrie_ofNames___closed__0, &l_Lean_ConstTrie_ofNames___closed__0_once, _init_l_Lean_ConstTrie_ofNames___closed__0);
v_sz_1898_ = lean_array_size(v_names_1896_);
v___x_1899_ = ((size_t)0ULL);
v___x_1900_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0(v_names_1896_, v_sz_1898_, v___x_1899_, v_b_1897_);
v___x_1901_ = lean_box(0);
v___x_1902_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v___x_1900_, v___x_1901_);
lean_dec_ref(v___x_1900_);
return v___x_1902_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofNames___boxed(lean_object* v_names_1903_){
_start:
{
lean_object* v_res_1904_; 
v_res_1904_ = l_Lean_ConstTrie_ofNames(v_names_1903_);
lean_dec_ref(v_names_1903_);
return v_res_1904_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_LookupCacheImpl(void){
_start:
{
lean_object* v___x_1905_; 
v___x_1905_ = lean_box(0);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_LookupCache_new___boxed(lean_object* v_a_00___x40___internal___hyg_1907_){
_start:
{
lean_object* v_res_1908_; 
v_res_1908_ = lean_imported_consts_cache_new();
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_LookupCache_numLive___boxed(lean_object* v_a_00___x40___internal___hyg_1910_){
_start:
{
lean_object* v_res_1911_; 
v_res_1911_ = lean_imported_consts_cache_num_live();
return v_res_1911_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorIdx___impl___redArg(lean_object* v_x_1912_){
_start:
{
lean_object* v___x_1913_; 
v___x_1913_ = lean_obj_tag_nat(v_x_1912_);
return v___x_1913_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorIdx___impl___redArg___boxed(lean_object* v_x_1914_){
_start:
{
lean_object* v_res_1915_; 
v_res_1915_ = l_Lean_ImportedConsts_ctorIdx___impl___redArg(v_x_1914_);
lean_dec_ref(v_x_1914_);
return v_res_1915_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorIdx___impl(lean_object* v_00_u03b1_1916_, lean_object* v_x_1917_){
_start:
{
lean_object* v___x_1918_; 
v___x_1918_ = lean_obj_tag_nat(v_x_1917_);
return v___x_1918_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorIdx___impl___boxed(lean_object* v_00_u03b1_1919_, lean_object* v_x_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l_Lean_ImportedConsts_ctorIdx___impl(v_00_u03b1_1919_, v_x_1920_);
lean_dec_ref(v_x_1920_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorElim___redArg(lean_object* v_t_1922_, lean_object* v_k_1923_){
_start:
{
switch(lean_obj_tag(v_t_1922_))
{
case 1:
{
lean_object* v_key_1924_; lean_object* v_entry_x3f_1925_; lean_object* v_children_1926_; lean_object* v_childIndex_1927_; lean_object* v___x_1928_; 
v_key_1924_ = lean_ctor_get(v_t_1922_, 0);
lean_inc(v_key_1924_);
v_entry_x3f_1925_ = lean_ctor_get(v_t_1922_, 1);
lean_inc(v_entry_x3f_1925_);
v_children_1926_ = lean_ctor_get(v_t_1922_, 2);
lean_inc_ref(v_children_1926_);
v_childIndex_1927_ = lean_ctor_get(v_t_1922_, 3);
lean_inc_ref(v_childIndex_1927_);
lean_dec_ref_known(v_t_1922_, 4);
v___x_1928_ = lean_apply_4(v_k_1923_, v_key_1924_, v_entry_x3f_1925_, v_children_1926_, v_childIndex_1927_);
return v___x_1928_;
}
case 2:
{
lean_object* v_key_1929_; lean_object* v_entry_1930_; lean_object* v_expanded_1931_; lean_object* v___x_1932_; 
v_key_1929_ = lean_ctor_get(v_t_1922_, 0);
lean_inc(v_key_1929_);
v_entry_1930_ = lean_ctor_get(v_t_1922_, 1);
lean_inc_ref(v_entry_1930_);
v_expanded_1931_ = lean_ctor_get(v_t_1922_, 2);
lean_inc_ref(v_expanded_1931_);
lean_dec_ref_known(v_t_1922_, 3);
v___x_1932_ = lean_apply_3(v_k_1923_, v_key_1929_, v_entry_1930_, v_expanded_1931_);
return v___x_1932_;
}
default: 
{
lean_object* v_modIdx_1933_; lean_object* v_tree_1934_; lean_object* v___x_1935_; 
v_modIdx_1933_ = lean_ctor_get(v_t_1922_, 0);
lean_inc(v_modIdx_1933_);
v_tree_1934_ = lean_ctor_get(v_t_1922_, 1);
lean_inc_ref(v_tree_1934_);
lean_dec_ref(v_t_1922_);
v___x_1935_ = lean_apply_2(v_k_1923_, v_modIdx_1933_, v_tree_1934_);
return v___x_1935_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorElim(lean_object* v_00_u03b1_1936_, lean_object* v_motive__1_1937_, lean_object* v_ctorIdx_1938_, lean_object* v_t_1939_, lean_object* v_h_1940_, lean_object* v_k_1941_){
_start:
{
lean_object* v___x_1942_; 
v___x_1942_ = l_Lean_ImportedConsts_ctorElim___redArg(v_t_1939_, v_k_1941_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_ctorElim___boxed(lean_object* v_00_u03b1_1943_, lean_object* v_motive__1_1944_, lean_object* v_ctorIdx_1945_, lean_object* v_t_1946_, lean_object* v_h_1947_, lean_object* v_k_1948_){
_start:
{
lean_object* v_res_1949_; 
v_res_1949_ = l_Lean_ImportedConsts_ctorElim(v_00_u03b1_1943_, v_motive__1_1944_, v_ctorIdx_1945_, v_t_1946_, v_h_1947_, v_k_1948_);
lean_dec(v_ctorIdx_1945_);
return v_res_1949_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mod_elim___redArg(lean_object* v_t_1950_, lean_object* v_mod_1951_){
_start:
{
lean_object* v___x_1952_; 
v___x_1952_ = l_Lean_ImportedConsts_ctorElim___redArg(v_t_1950_, v_mod_1951_);
return v___x_1952_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mod_elim(lean_object* v_00_u03b1_1953_, lean_object* v_motive__1_1954_, lean_object* v_t_1955_, lean_object* v_h_1956_, lean_object* v_mod_1957_){
_start:
{
lean_object* v___x_1958_; 
v___x_1958_ = l_Lean_ImportedConsts_ctorElim___redArg(v_t_1955_, v_mod_1957_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_merged_elim___redArg(lean_object* v_t_1959_, lean_object* v_merged_1960_){
_start:
{
lean_object* v___x_1961_; 
v___x_1961_ = l_Lean_ImportedConsts_ctorElim___redArg(v_t_1959_, v_merged_1960_);
return v___x_1961_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_merged_elim(lean_object* v_00_u03b1_1962_, lean_object* v_motive__1_1963_, lean_object* v_t_1964_, lean_object* v_h_1965_, lean_object* v_merged_1966_){
_start:
{
lean_object* v___x_1967_; 
v___x_1967_ = l_Lean_ImportedConsts_ctorElim___redArg(v_t_1964_, v_merged_1966_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_lazy_elim___redArg(lean_object* v_t_1968_, lean_object* v_lazy_1969_){
_start:
{
lean_object* v___x_1970_; 
v___x_1970_ = l_Lean_ImportedConsts_ctorElim___redArg(v_t_1968_, v_lazy_1969_);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_lazy_elim(lean_object* v_00_u03b1_1971_, lean_object* v_motive__1_1972_, lean_object* v_t_1973_, lean_object* v_h_1974_, lean_object* v_lazy_1975_){
_start:
{
lean_object* v___x_1976_; 
v___x_1976_ = l_Lean_ImportedConsts_ctorElim___redArg(v_t_1973_, v_lazy_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_cached_elim___redArg(lean_object* v_t_1977_, lean_object* v_cached_1978_){
_start:
{
lean_object* v___x_1979_; 
v___x_1979_ = l_Lean_ImportedConsts_ctorElim___redArg(v_t_1977_, v_cached_1978_);
return v___x_1979_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_cached_elim(lean_object* v_00_u03b1_1980_, lean_object* v_motive__1_1981_, lean_object* v_t_1982_, lean_object* v_h_1983_, lean_object* v_cached_1984_){
_start:
{
lean_object* v___x_1985_; 
v___x_1985_ = l_Lean_ImportedConsts_ctorElim___redArg(v_t_1982_, v_cached_1984_);
return v___x_1985_;
}
}
static lean_object* _init_l_Lean_instInhabitedImportedConsts___redArg___closed__1(void){
_start:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1988_ = l_ByteArray_empty;
v___x_1989_ = ((lean_object*)(l_Lean_instInhabitedImportedConsts___redArg___closed__0));
v___x_1990_ = lean_box(0);
v___x_1991_ = lean_box(0);
v___x_1992_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1992_, 0, v___x_1991_);
lean_ctor_set(v___x_1992_, 1, v___x_1990_);
lean_ctor_set(v___x_1992_, 2, v___x_1989_);
lean_ctor_set(v___x_1992_, 3, v___x_1988_);
return v___x_1992_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts___redArg(){
_start:
{
lean_object* v___x_1994_; 
v___x_1994_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___redArg___closed__1, &l_Lean_instInhabitedImportedConsts___redArg___closed__1_once, _init_l_Lean_instInhabitedImportedConsts___redArg___closed__1);
return v___x_1994_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts___redArg___boxed(lean_object* v___dummy_1995_){
_start:
{
lean_object* v_res_1996_; 
v_res_1996_ = l_Lean_instInhabitedImportedConsts___redArg();
return v_res_1996_;
}
}
static lean_object* _init_l_Lean_instInhabitedImportedConsts___closed__0(void){
_start:
{
lean_object* v___x_1997_; 
v___x_1997_ = l_Lean_instInhabitedImportedConsts___redArg();
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts(lean_object* v_00_u03b1_1998_){
_start:
{
lean_object* v___x_1999_; 
v___x_1999_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty___redArg(){
_start:
{
lean_object* v___x_2001_; 
v___x_2001_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___redArg___closed__1, &l_Lean_instInhabitedImportedConsts___redArg___closed__1_once, _init_l_Lean_instInhabitedImportedConsts___redArg___closed__1);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty___redArg___boxed(lean_object* v___dummy_2002_){
_start:
{
lean_object* v_res_2003_; 
v_res_2003_ = l_Lean_ImportedConsts_empty___redArg();
return v_res_2003_;
}
}
static lean_object* _init_l_Lean_ImportedConsts_empty___closed__0(void){
_start:
{
lean_object* v___x_2004_; 
v___x_2004_ = l_Lean_ImportedConsts_empty___redArg();
return v___x_2004_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty(lean_object* v_00_u03b1_2005_){
_start:
{
lean_object* v___x_2006_; 
v___x_2006_ = lean_obj_once(&l_Lean_ImportedConsts_empty___closed__0, &l_Lean_ImportedConsts_empty___closed__0_once, _init_l_Lean_ImportedConsts_empty___closed__0);
return v___x_2006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(lean_object* v_x_2007_){
_start:
{
switch(lean_obj_tag(v_x_2007_))
{
case 0:
{
lean_object* v_tree_2008_; lean_object* v_key_2009_; 
v_tree_2008_ = lean_ctor_get(v_x_2007_, 1);
v_key_2009_ = lean_ctor_get(v_tree_2008_, 0);
lean_inc(v_key_2009_);
return v_key_2009_;
}
case 3:
{
lean_object* v_tree_2010_; 
v_tree_2010_ = lean_ctor_get(v_x_2007_, 1);
v_x_2007_ = v_tree_2010_;
goto _start;
}
default: 
{
lean_object* v_key_2012_; 
v_key_2012_ = lean_ctor_get(v_x_2007_, 0);
lean_inc(v_key_2012_);
return v_key_2012_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg___boxed(lean_object* v_x_2013_){
_start:
{
lean_object* v_res_2014_; 
v_res_2014_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v_x_2013_);
lean_dec_ref(v_x_2013_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key(lean_object* v_00_u03b1_2015_, lean_object* v_x_2016_){
_start:
{
lean_object* v___x_2017_; 
v___x_2017_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v_x_2016_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___boxed(lean_object* v_00_u03b1_2018_, lean_object* v_x_2019_){
_start:
{
lean_object* v_res_2020_; 
v_res_2020_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key(v_00_u03b1_2018_, v_x_2019_);
lean_dec_ref(v_x_2019_);
return v_res_2020_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg(lean_object* v_n_2021_, lean_object* v_cs_2022_, uint64_t v___x_2023_, lean_object* v___x_2024_, lean_object* v_a_2025_){
_start:
{
uint8_t v___x_2026_; 
v___x_2026_ = lean_nat_dec_lt(v_a_2025_, v_n_2021_);
if (v___x_2026_ == 0)
{
return v_a_2025_;
}
else
{
lean_object* v___x_2027_; lean_object* v___x_2028_; uint64_t v___y_2030_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2027_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
v___x_2028_ = lean_unsigned_to_nat(1u);
v___x_2038_ = lean_array_get_borrowed(v___x_2027_, v_cs_2022_, v_a_2025_);
v___x_2039_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v___x_2038_);
if (lean_obj_tag(v___x_2039_) == 0)
{
uint64_t v___x_2040_; 
v___x_2040_ = 1723ULL;
v___y_2030_ = v___x_2040_;
goto v___jp_2029_;
}
else
{
uint64_t v_hash_2041_; 
v_hash_2041_ = lean_ctor_get_uint64(v___x_2039_, sizeof(void*)*2);
lean_dec(v___x_2039_);
v___y_2030_ = v_hash_2041_;
goto v___jp_2029_;
}
v___jp_2029_:
{
uint64_t v___x_2031_; uint64_t v___x_2032_; uint64_t v___x_2033_; lean_object* v___x_2034_; uint8_t v___x_2035_; 
v___x_2031_ = 64ULL;
v___x_2032_ = lean_uint64_sub(v___x_2031_, v___x_2023_);
v___x_2033_ = lean_uint64_shift_right(v___y_2030_, v___x_2032_);
v___x_2034_ = lean_uint64_to_nat(v___x_2033_);
v___x_2035_ = lean_nat_dec_lt(v___x_2034_, v___x_2024_);
lean_dec(v___x_2034_);
if (v___x_2035_ == 0)
{
return v_a_2025_;
}
else
{
lean_object* v___x_2036_; 
v___x_2036_ = lean_nat_add(v_a_2025_, v___x_2028_);
lean_dec(v_a_2025_);
v_a_2025_ = v___x_2036_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___boxed(lean_object* v_n_2042_, lean_object* v_cs_2043_, lean_object* v___x_2044_, lean_object* v___x_2045_, lean_object* v_a_2046_){
_start:
{
uint64_t v___x_893__boxed_2047_; lean_object* v_res_2048_; 
v___x_893__boxed_2047_ = lean_unbox_uint64(v___x_2044_);
lean_dec_ref(v___x_2044_);
v_res_2048_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg(v_n_2042_, v_cs_2043_, v___x_893__boxed_2047_, v___x_2045_, v_a_2046_);
lean_dec(v___x_2045_);
lean_dec_ref(v_cs_2043_);
lean_dec(v_n_2042_);
return v_res_2048_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg(lean_object* v___x_2049_, lean_object* v_n_2050_, lean_object* v_cs_2051_, uint64_t v___x_2052_, lean_object* v_a_2053_){
_start:
{
lean_object* v_snd_2054_; lean_object* v_fst_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2088_; 
v_snd_2054_ = lean_ctor_get(v_a_2053_, 1);
v_fst_2055_ = lean_ctor_get(v_a_2053_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v_a_2053_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2057_ = v_a_2053_;
v_isShared_2058_ = v_isSharedCheck_2088_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_snd_2054_);
lean_inc(v_fst_2055_);
lean_dec(v_a_2053_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2088_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v_fst_2059_; lean_object* v_snd_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2087_; 
v_fst_2059_ = lean_ctor_get(v_snd_2054_, 0);
v_snd_2060_ = lean_ctor_get(v_snd_2054_, 1);
v_isSharedCheck_2087_ = !lean_is_exclusive(v_snd_2054_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2062_ = v_snd_2054_;
v_isShared_2063_ = v_isSharedCheck_2087_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_snd_2060_);
lean_inc(v_fst_2059_);
lean_dec(v_snd_2054_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2087_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
uint8_t v___x_2064_; 
v___x_2064_ = lean_nat_dec_lt(v_snd_2060_, v___x_2049_);
if (v___x_2064_ == 0)
{
lean_object* v___x_2066_; 
if (v_isShared_2063_ == 0)
{
v___x_2066_ = v___x_2062_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_fst_2059_);
lean_ctor_set(v_reuseFailAlloc_2070_, 1, v_snd_2060_);
v___x_2066_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
lean_object* v___x_2068_; 
if (v_isShared_2058_ == 0)
{
lean_ctor_set(v___x_2057_, 1, v___x_2066_);
v___x_2068_ = v___x_2057_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_fst_2055_);
lean_ctor_set(v_reuseFailAlloc_2069_, 1, v___x_2066_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
else
{
lean_object* v___x_2071_; lean_object* v___x_2072_; uint8_t v___x_2073_; lean_object* v___x_2074_; lean_object* v___y_2076_; 
v___x_2071_ = lean_unsigned_to_nat(1u);
v___x_2072_ = lean_unsigned_to_nat(65535u);
v___x_2073_ = lean_nat_dec_le(v___x_2072_, v_n_2050_);
v___x_2074_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg(v_n_2050_, v_cs_2051_, v___x_2052_, v_snd_2060_, v_fst_2059_);
if (v___x_2073_ == 0)
{
lean_object* v___x_2085_; 
v___x_2085_ = l___private_Lean_ConstTrie_0__Lean_pushU16(v_fst_2055_, v___x_2074_);
v___y_2076_ = v___x_2085_;
goto v___jp_2075_;
}
else
{
lean_object* v___x_2086_; 
v___x_2086_ = l___private_Lean_ConstTrie_0__Lean_pushU32(v_fst_2055_, v___x_2074_);
v___y_2076_ = v___x_2086_;
goto v___jp_2075_;
}
v___jp_2075_:
{
lean_object* v___x_2077_; lean_object* v___x_2079_; 
v___x_2077_ = lean_nat_add(v_snd_2060_, v___x_2071_);
lean_dec(v_snd_2060_);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 1, v___x_2077_);
lean_ctor_set(v___x_2062_, 0, v___x_2074_);
v___x_2079_ = v___x_2062_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v___x_2074_);
lean_ctor_set(v_reuseFailAlloc_2084_, 1, v___x_2077_);
v___x_2079_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
lean_object* v___x_2081_; 
if (v_isShared_2058_ == 0)
{
lean_ctor_set(v___x_2057_, 1, v___x_2079_);
lean_ctor_set(v___x_2057_, 0, v___y_2076_);
v___x_2081_ = v___x_2057_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v___y_2076_);
lean_ctor_set(v_reuseFailAlloc_2083_, 1, v___x_2079_);
v___x_2081_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
v_a_2053_ = v___x_2081_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v___x_2089_, lean_object* v_n_2090_, lean_object* v_cs_2091_, lean_object* v___x_2092_, lean_object* v_a_2093_){
_start:
{
uint64_t v___x_930__boxed_2094_; lean_object* v_res_2095_; 
v___x_930__boxed_2094_ = lean_unbox_uint64(v___x_2092_);
lean_dec_ref(v___x_2092_);
v_res_2095_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg(v___x_2089_, v_n_2090_, v_cs_2091_, v___x_930__boxed_2094_, v_a_2093_);
lean_dec_ref(v_cs_2091_);
lean_dec(v_n_2090_);
lean_dec(v___x_2089_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg(lean_object* v_n_2096_, lean_object* v_cs_2097_, uint64_t v___x_2098_, lean_object* v___x_2099_, lean_object* v_a_2100_){
_start:
{
lean_object* v_snd_2101_; lean_object* v_fst_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2135_; 
v_snd_2101_ = lean_ctor_get(v_a_2100_, 1);
v_fst_2102_ = lean_ctor_get(v_a_2100_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v_a_2100_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2104_ = v_a_2100_;
v_isShared_2105_ = v_isSharedCheck_2135_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_snd_2101_);
lean_inc(v_fst_2102_);
lean_dec(v_a_2100_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2135_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v_fst_2106_; lean_object* v_snd_2107_; lean_object* v___x_2109_; uint8_t v_isShared_2110_; uint8_t v_isSharedCheck_2134_; 
v_fst_2106_ = lean_ctor_get(v_snd_2101_, 0);
v_snd_2107_ = lean_ctor_get(v_snd_2101_, 1);
v_isSharedCheck_2134_ = !lean_is_exclusive(v_snd_2101_);
if (v_isSharedCheck_2134_ == 0)
{
v___x_2109_ = v_snd_2101_;
v_isShared_2110_ = v_isSharedCheck_2134_;
goto v_resetjp_2108_;
}
else
{
lean_inc(v_snd_2107_);
lean_inc(v_fst_2106_);
lean_dec(v_snd_2101_);
v___x_2109_ = lean_box(0);
v_isShared_2110_ = v_isSharedCheck_2134_;
goto v_resetjp_2108_;
}
v_resetjp_2108_:
{
uint8_t v___x_2111_; 
v___x_2111_ = lean_nat_dec_lt(v_snd_2107_, v___x_2099_);
if (v___x_2111_ == 0)
{
lean_object* v___x_2113_; 
if (v_isShared_2110_ == 0)
{
v___x_2113_ = v___x_2109_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_fst_2106_);
lean_ctor_set(v_reuseFailAlloc_2117_, 1, v_snd_2107_);
v___x_2113_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
lean_object* v___x_2115_; 
if (v_isShared_2105_ == 0)
{
lean_ctor_set(v___x_2104_, 1, v___x_2113_);
v___x_2115_ = v___x_2104_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v_fst_2102_);
lean_ctor_set(v_reuseFailAlloc_2116_, 1, v___x_2113_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
else
{
lean_object* v___x_2118_; lean_object* v___x_2119_; uint8_t v___x_2120_; lean_object* v___x_2121_; lean_object* v___y_2123_; 
v___x_2118_ = lean_unsigned_to_nat(1u);
v___x_2119_ = lean_unsigned_to_nat(65535u);
v___x_2120_ = lean_nat_dec_le(v___x_2119_, v_n_2096_);
v___x_2121_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg(v_n_2096_, v_cs_2097_, v___x_2098_, v_snd_2107_, v_fst_2106_);
if (v___x_2120_ == 0)
{
lean_object* v___x_2132_; 
v___x_2132_ = l___private_Lean_ConstTrie_0__Lean_pushU16(v_fst_2102_, v___x_2121_);
v___y_2123_ = v___x_2132_;
goto v___jp_2122_;
}
else
{
lean_object* v___x_2133_; 
v___x_2133_ = l___private_Lean_ConstTrie_0__Lean_pushU32(v_fst_2102_, v___x_2121_);
v___y_2123_ = v___x_2133_;
goto v___jp_2122_;
}
v___jp_2122_:
{
lean_object* v___x_2124_; lean_object* v___x_2126_; 
v___x_2124_ = lean_nat_add(v_snd_2107_, v___x_2118_);
lean_dec(v_snd_2107_);
if (v_isShared_2110_ == 0)
{
lean_ctor_set(v___x_2109_, 1, v___x_2124_);
lean_ctor_set(v___x_2109_, 0, v___x_2121_);
v___x_2126_ = v___x_2109_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v___x_2121_);
lean_ctor_set(v_reuseFailAlloc_2131_, 1, v___x_2124_);
v___x_2126_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
lean_object* v___x_2128_; 
if (v_isShared_2105_ == 0)
{
lean_ctor_set(v___x_2104_, 1, v___x_2126_);
lean_ctor_set(v___x_2104_, 0, v___y_2123_);
v___x_2128_ = v___x_2104_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v___y_2123_);
lean_ctor_set(v_reuseFailAlloc_2130_, 1, v___x_2126_);
v___x_2128_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
lean_object* v___x_2129_; 
v___x_2129_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg(v___x_2099_, v_n_2096_, v_cs_2097_, v___x_2098_, v___x_2128_);
return v___x_2129_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg___boxed(lean_object* v_n_2136_, lean_object* v_cs_2137_, lean_object* v___x_2138_, lean_object* v___x_2139_, lean_object* v_a_2140_){
_start:
{
uint64_t v___x_997__boxed_2141_; lean_object* v_res_2142_; 
v___x_997__boxed_2141_ = lean_unbox_uint64(v___x_2138_);
lean_dec_ref(v___x_2138_);
v_res_2142_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg(v_n_2136_, v_cs_2137_, v___x_997__boxed_2141_, v___x_2139_, v_a_2140_);
lean_dec(v___x_2139_);
lean_dec_ref(v_cs_2137_);
lean_dec(v_n_2136_);
return v_res_2142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg(lean_object* v_as_2143_, size_t v_sz_2144_, size_t v_i_2145_, lean_object* v_b_2146_){
_start:
{
uint64_t v___y_2148_; uint8_t v___x_2156_; 
v___x_2156_ = lean_usize_dec_lt(v_i_2145_, v_sz_2144_);
if (v___x_2156_ == 0)
{
return v_b_2146_;
}
else
{
lean_object* v_a_2157_; lean_object* v___x_2158_; 
v_a_2157_ = lean_array_uget_borrowed(v_as_2143_, v_i_2145_);
v___x_2158_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v_a_2157_);
if (lean_obj_tag(v___x_2158_) == 0)
{
uint64_t v___x_2159_; 
v___x_2159_ = 1723ULL;
v___y_2148_ = v___x_2159_;
goto v___jp_2147_;
}
else
{
uint64_t v_hash_2160_; 
v_hash_2160_ = lean_ctor_get_uint64(v___x_2158_, sizeof(void*)*2);
lean_dec(v___x_2158_);
v___y_2148_ = v_hash_2160_;
goto v___jp_2147_;
}
}
v___jp_2147_:
{
uint64_t v___x_2149_; uint64_t v___x_2150_; uint8_t v___x_2151_; lean_object* v___x_2152_; size_t v___x_2153_; size_t v___x_2154_; 
v___x_2149_ = 32ULL;
v___x_2150_ = lean_uint64_shift_right(v___y_2148_, v___x_2149_);
v___x_2151_ = lean_uint64_to_uint8(v___x_2150_);
v___x_2152_ = lean_byte_array_push(v_b_2146_, v___x_2151_);
v___x_2153_ = ((size_t)1ULL);
v___x_2154_ = lean_usize_add(v_i_2145_, v___x_2153_);
v_i_2145_ = v___x_2154_;
v_b_2146_ = v___x_2152_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg___boxed(lean_object* v_as_2161_, lean_object* v_sz_2162_, lean_object* v_i_2163_, lean_object* v_b_2164_){
_start:
{
size_t v_sz_boxed_2165_; size_t v_i_boxed_2166_; lean_object* v_res_2167_; 
v_sz_boxed_2165_ = lean_unbox_usize(v_sz_2162_);
lean_dec(v_sz_2162_);
v_i_boxed_2166_ = lean_unbox_usize(v_i_2163_);
lean_dec(v_i_2163_);
v_res_2167_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg(v_as_2161_, v_sz_boxed_2165_, v_i_boxed_2166_, v_b_2164_);
lean_dec_ref(v_as_2161_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(lean_object* v_cs_2168_){
_start:
{
lean_object* v_n_2169_; lean_object* v_j_2170_; uint8_t v___x_2171_; 
v_n_2169_ = lean_array_get_size(v_cs_2168_);
v_j_2170_ = lean_unsigned_to_nat(0u);
v___x_2171_ = lean_nat_dec_eq(v_n_2169_, v_j_2170_);
if (v___x_2171_ == 0)
{
lean_object* v___x_2172_; uint64_t v_bits_2173_; uint64_t v___x_2174_; uint64_t v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___y_2179_; uint8_t v___y_2180_; lean_object* v___x_2189_; uint8_t v___x_2190_; lean_object* v___y_2192_; 
v___x_2172_ = lean_unsigned_to_nat(1u);
v_bits_2173_ = 1ULL;
v___x_2174_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2___redArg(v_n_2169_, v_bits_2173_);
v___x_2175_ = lean_uint64_shift_left(v_bits_2173_, v___x_2174_);
v___x_2176_ = lean_uint64_to_nat(v___x_2175_);
v___x_2177_ = lean_nat_add(v___x_2176_, v___x_2172_);
lean_dec(v___x_2176_);
v___x_2189_ = lean_unsigned_to_nat(65535u);
v___x_2190_ = lean_nat_dec_le(v___x_2189_, v_n_2169_);
if (v___x_2190_ == 0)
{
lean_object* v___x_2201_; 
v___x_2201_ = lean_unsigned_to_nat(2u);
v___y_2192_ = v___x_2201_;
goto v___jp_2191_;
}
else
{
lean_object* v___x_2202_; 
v___x_2202_ = lean_unsigned_to_nat(4u);
v___y_2192_ = v___x_2202_;
goto v___jp_2191_;
}
v___jp_2178_:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v_fst_2185_; size_t v_sz_2186_; size_t v___x_2187_; lean_object* v___x_2188_; 
v___x_2181_ = lean_byte_array_push(v___y_2179_, v___y_2180_);
v___x_2182_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10));
v___x_2183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2183_, 0, v___x_2181_);
lean_ctor_set(v___x_2183_, 1, v___x_2182_);
v___x_2184_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg(v_n_2169_, v_cs_2168_, v___x_2174_, v___x_2177_, v___x_2183_);
lean_dec(v___x_2177_);
v_fst_2185_ = lean_ctor_get(v___x_2184_, 0);
lean_inc(v_fst_2185_);
lean_dec_ref(v___x_2184_);
v_sz_2186_ = lean_array_size(v_cs_2168_);
v___x_2187_ = ((size_t)0ULL);
v___x_2188_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg(v_cs_2168_, v_sz_2186_, v___x_2187_, v_fst_2185_);
return v___x_2188_;
}
v___jp_2191_:
{
lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
v___x_2193_ = lean_nat_mul(v___y_2192_, v___x_2177_);
v___x_2194_ = lean_nat_add(v___x_2172_, v___x_2193_);
lean_dec(v___x_2193_);
v___x_2195_ = lean_nat_add(v___x_2194_, v_n_2169_);
lean_dec(v___x_2194_);
v___x_2196_ = lean_mk_empty_byte_array(v___x_2195_);
lean_dec(v___x_2195_);
if (v___x_2190_ == 0)
{
uint8_t v___x_2197_; 
v___x_2197_ = lean_uint64_to_uint8(v___x_2174_);
v___y_2179_ = v___x_2196_;
v___y_2180_ = v___x_2197_;
goto v___jp_2178_;
}
else
{
uint8_t v___x_2198_; uint8_t v___x_2199_; uint8_t v___x_2200_; 
v___x_2198_ = lean_uint64_to_uint8(v___x_2174_);
v___x_2199_ = 128;
v___x_2200_ = lean_uint8_lor(v___x_2198_, v___x_2199_);
v___y_2179_ = v___x_2196_;
v___y_2180_ = v___x_2200_;
goto v___jp_2178_;
}
}
}
else
{
lean_object* v___x_2203_; 
v___x_2203_ = l_ByteArray_empty;
return v___x_2203_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg___boxed(lean_object* v_cs_2204_){
_start:
{
lean_object* v_res_2205_; 
v_res_2205_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v_cs_2204_);
lean_dec_ref(v_cs_2204_);
return v_res_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mkMerged___redArg(lean_object* v_key_2206_, lean_object* v_entry_x3f_2207_, lean_object* v_children_2208_){
_start:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2209_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v_children_2208_);
v___x_2210_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2210_, 0, v_key_2206_);
lean_ctor_set(v___x_2210_, 1, v_entry_x3f_2207_);
lean_ctor_set(v___x_2210_, 2, v_children_2208_);
lean_ctor_set(v___x_2210_, 3, v___x_2209_);
return v___x_2210_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mkMerged(lean_object* v_00_u03b1_2211_, lean_object* v_key_2212_, lean_object* v_entry_x3f_2213_, lean_object* v_children_2214_){
_start:
{
lean_object* v___x_2215_; 
v___x_2215_ = l_Lean_ImportedConsts_mkMerged___redArg(v_key_2212_, v_entry_x3f_2213_, v_children_2214_);
return v___x_2215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0(lean_object* v_00_u03b1_2216_, lean_object* v_cs_2217_){
_start:
{
lean_object* v___x_2218_; 
v___x_2218_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v_cs_2217_);
return v___x_2218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___boxed(lean_object* v_00_u03b1_2219_, lean_object* v_cs_2220_){
_start:
{
lean_object* v_res_2221_; 
v_res_2221_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0(v_00_u03b1_2219_, v_cs_2220_);
lean_dec_ref(v_cs_2220_);
return v_res_2221_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0(lean_object* v_n_2222_, lean_object* v_00_u03b1_2223_, lean_object* v_cs_2224_, uint64_t v___x_2225_, lean_object* v___x_2226_, lean_object* v_inst_2227_, lean_object* v_a_2228_){
_start:
{
lean_object* v___x_2229_; 
v___x_2229_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg(v_n_2222_, v_cs_2224_, v___x_2225_, v___x_2226_, v_a_2228_);
return v___x_2229_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___boxed(lean_object* v_n_2230_, lean_object* v_00_u03b1_2231_, lean_object* v_cs_2232_, lean_object* v___x_2233_, lean_object* v___x_2234_, lean_object* v_inst_2235_, lean_object* v_a_2236_){
_start:
{
uint64_t v___x_1158__boxed_2237_; lean_object* v_res_2238_; 
v___x_1158__boxed_2237_ = lean_unbox_uint64(v___x_2233_);
lean_dec_ref(v___x_2233_);
v_res_2238_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0(v_n_2230_, v_00_u03b1_2231_, v_cs_2232_, v___x_1158__boxed_2237_, v___x_2234_, v_inst_2235_, v_a_2236_);
lean_dec(v___x_2234_);
lean_dec_ref(v_cs_2232_);
lean_dec(v_n_2230_);
return v_res_2238_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1(lean_object* v_n_2239_, lean_object* v_00_u03b1_2240_, lean_object* v_cs_2241_, uint64_t v___x_2242_, lean_object* v___x_2243_, lean_object* v_inst_2244_, lean_object* v_a_2245_){
_start:
{
lean_object* v___x_2246_; 
v___x_2246_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg(v_n_2239_, v_cs_2241_, v___x_2242_, v___x_2243_, v_a_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___boxed(lean_object* v_n_2247_, lean_object* v_00_u03b1_2248_, lean_object* v_cs_2249_, lean_object* v___x_2250_, lean_object* v___x_2251_, lean_object* v_inst_2252_, lean_object* v_a_2253_){
_start:
{
uint64_t v___x_1169__boxed_2254_; lean_object* v_res_2255_; 
v___x_1169__boxed_2254_ = lean_unbox_uint64(v___x_2250_);
lean_dec_ref(v___x_2250_);
v_res_2255_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1(v_n_2247_, v_00_u03b1_2248_, v_cs_2249_, v___x_1169__boxed_2254_, v___x_2251_, v_inst_2252_, v_a_2253_);
lean_dec(v___x_2251_);
lean_dec_ref(v_cs_2249_);
lean_dec(v_n_2247_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2(lean_object* v_00_u03b1_2256_, lean_object* v_as_2257_, size_t v_sz_2258_, size_t v_i_2259_, lean_object* v_b_2260_){
_start:
{
lean_object* v___x_2261_; 
v___x_2261_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg(v_as_2257_, v_sz_2258_, v_i_2259_, v_b_2260_);
return v___x_2261_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___boxed(lean_object* v_00_u03b1_2262_, lean_object* v_as_2263_, lean_object* v_sz_2264_, lean_object* v_i_2265_, lean_object* v_b_2266_){
_start:
{
size_t v_sz_boxed_2267_; size_t v_i_boxed_2268_; lean_object* v_res_2269_; 
v_sz_boxed_2267_ = lean_unbox_usize(v_sz_2264_);
lean_dec(v_sz_2264_);
v_i_boxed_2268_ = lean_unbox_usize(v_i_2265_);
lean_dec(v_i_2265_);
v_res_2269_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2(v_00_u03b1_2262_, v_as_2263_, v_sz_boxed_2267_, v_i_boxed_2268_, v_b_2266_);
lean_dec_ref(v_as_2263_);
return v_res_2269_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2(lean_object* v___x_2270_, lean_object* v_n_2271_, lean_object* v_00_u03b1_2272_, lean_object* v_cs_2273_, uint64_t v___x_2274_, lean_object* v_inst_2275_, lean_object* v_a_2276_){
_start:
{
lean_object* v___x_2277_; 
v___x_2277_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg(v___x_2270_, v_n_2271_, v_cs_2273_, v___x_2274_, v_a_2276_);
return v___x_2277_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___boxed(lean_object* v___x_2278_, lean_object* v_n_2279_, lean_object* v_00_u03b1_2280_, lean_object* v_cs_2281_, lean_object* v___x_2282_, lean_object* v_inst_2283_, lean_object* v_a_2284_){
_start:
{
uint64_t v___x_1183__boxed_2285_; lean_object* v_res_2286_; 
v___x_1183__boxed_2285_ = lean_unbox_uint64(v___x_2282_);
lean_dec_ref(v___x_2282_);
v_res_2286_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2(v___x_2278_, v_n_2279_, v_00_u03b1_2280_, v_cs_2281_, v___x_1183__boxed_2285_, v_inst_2283_, v_a_2284_);
lean_dec_ref(v_cs_2281_);
lean_dec(v_n_2279_);
lean_dec(v___x_2278_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___redArg(lean_object* v_t_2287_){
_start:
{
lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; 
v___x_2289_ = lean_imported_consts_cache_new();
v___x_2290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2290_, 0, v___x_2289_);
v___x_2291_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2291_, 0, v___x_2290_);
lean_ctor_set(v___x_2291_, 1, v_t_2287_);
return v___x_2291_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___redArg___boxed(lean_object* v_t_2292_, lean_object* v_a_2293_){
_start:
{
lean_object* v_res_2294_; 
v_res_2294_ = l_Lean_ImportedConsts_withCache___redArg(v_t_2292_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache(lean_object* v_00_u03b1_2295_, lean_object* v_t_2296_){
_start:
{
lean_object* v___x_2298_; 
v___x_2298_ = l_Lean_ImportedConsts_withCache___redArg(v_t_2296_);
return v___x_2298_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___boxed(lean_object* v_00_u03b1_2299_, lean_object* v_t_2300_, lean_object* v_a_2301_){
_start:
{
lean_object* v_res_2302_; 
v_res_2302_ = l_Lean_ImportedConsts_withCache(v_00_u03b1_2299_, v_t_2300_);
return v_res_2302_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_dropCache___boxed(lean_object* v_00_u03b1_2306_, lean_object* v_t_2307_, lean_object* v_a_00___x40___internal___hyg_2308_){
_start:
{
lean_object* v_res_2309_; 
v_res_2309_ = lean_imported_consts_drop_cache(v_t_2307_);
lean_dec_ref(v_t_2307_);
return v_res_2309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(lean_object* v_index_2310_, lean_object* v_cs_2311_, lean_object* v_k_2312_, uint8_t v_fp_2313_, lean_object* v_fpOff_2314_, lean_object* v_j_2315_, lean_object* v_hi_2316_){
_start:
{
uint8_t v___y_2322_; uint8_t v___x_2324_; 
v___x_2324_ = lean_nat_dec_lt(v_j_2315_, v_hi_2316_);
if (v___x_2324_ == 0)
{
lean_object* v___x_2325_; 
lean_dec(v_j_2315_);
v___x_2325_ = lean_box(0);
return v___x_2325_;
}
else
{
lean_object* v___x_2326_; uint8_t v___x_2327_; uint8_t v___x_2328_; 
v___x_2326_ = lean_nat_add(v_fpOff_2314_, v_j_2315_);
v___x_2327_ = lean_byte_array_get(v_index_2310_, v___x_2326_);
lean_dec(v___x_2326_);
v___x_2328_ = lean_uint8_dec_eq(v___x_2327_, v_fp_2313_);
if (v___x_2328_ == 0)
{
goto v___jp_2317_;
}
else
{
lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2329_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
v___x_2330_ = lean_array_get_borrowed(v___x_2329_, v_cs_2311_, v_j_2315_);
v___x_2331_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v___x_2330_);
switch(lean_obj_tag(v___x_2331_))
{
case 0:
{
if (lean_obj_tag(v_k_2312_) == 0)
{
lean_object* v___x_2332_; 
v___x_2332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2332_, 0, v_j_2315_);
return v___x_2332_;
}
else
{
goto v___jp_2317_;
}
}
case 1:
{
if (lean_obj_tag(v_k_2312_) == 1)
{
lean_object* v_str_2333_; lean_object* v_str_2334_; uint8_t v___x_2335_; 
v_str_2333_ = lean_ctor_get(v___x_2331_, 1);
lean_inc_ref(v_str_2333_);
lean_dec_ref_known(v___x_2331_, 2);
v_str_2334_ = lean_ctor_get(v_k_2312_, 1);
v___x_2335_ = lean_string_dec_eq(v_str_2333_, v_str_2334_);
lean_dec_ref(v_str_2333_);
v___y_2322_ = v___x_2335_;
goto v___jp_2321_;
}
else
{
lean_dec_ref_known(v___x_2331_, 2);
goto v___jp_2317_;
}
}
default: 
{
if (lean_obj_tag(v_k_2312_) == 2)
{
lean_object* v_i_2336_; lean_object* v_i_2337_; uint8_t v___x_2338_; 
v_i_2336_ = lean_ctor_get(v___x_2331_, 1);
lean_inc(v_i_2336_);
lean_dec_ref_known(v___x_2331_, 2);
v_i_2337_ = lean_ctor_get(v_k_2312_, 1);
v___x_2338_ = lean_nat_dec_eq(v_i_2336_, v_i_2337_);
lean_dec(v_i_2336_);
v___y_2322_ = v___x_2338_;
goto v___jp_2321_;
}
else
{
lean_dec_ref_known(v___x_2331_, 2);
goto v___jp_2317_;
}
}
}
}
}
v___jp_2317_:
{
lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2318_ = lean_unsigned_to_nat(1u);
v___x_2319_ = lean_nat_add(v_j_2315_, v___x_2318_);
lean_dec(v_j_2315_);
v_j_2315_ = v___x_2319_;
goto _start;
}
v___jp_2321_:
{
if (v___y_2322_ == 0)
{
goto v___jp_2317_;
}
else
{
lean_object* v___x_2323_; 
v___x_2323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2323_, 0, v_j_2315_);
return v___x_2323_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg___boxed(lean_object* v_index_2339_, lean_object* v_cs_2340_, lean_object* v_k_2341_, lean_object* v_fp_2342_, lean_object* v_fpOff_2343_, lean_object* v_j_2344_, lean_object* v_hi_2345_){
_start:
{
uint8_t v_fp_boxed_2346_; lean_object* v_res_2347_; 
v_fp_boxed_2346_ = lean_unbox(v_fp_2342_);
v_res_2347_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(v_index_2339_, v_cs_2340_, v_k_2341_, v_fp_boxed_2346_, v_fpOff_2343_, v_j_2344_, v_hi_2345_);
lean_dec(v_hi_2345_);
lean_dec(v_fpOff_2343_);
lean_dec(v_k_2341_);
lean_dec_ref(v_cs_2340_);
lean_dec_ref(v_index_2339_);
return v_res_2347_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(lean_object* v_index_2348_, lean_object* v_cs_2349_, lean_object* v_k_2350_){
_start:
{
lean_object* v___x_2351_; lean_object* v___x_2352_; uint64_t v___y_2354_; uint8_t v___x_2458_; 
v___x_2351_ = lean_byte_array_size(v_index_2348_);
v___x_2352_ = lean_unsigned_to_nat(0u);
v___x_2458_ = lean_nat_dec_eq(v___x_2351_, v___x_2352_);
if (v___x_2458_ == 0)
{
if (lean_obj_tag(v_k_2350_) == 0)
{
uint64_t v___x_2459_; 
v___x_2459_ = 1723ULL;
v___y_2354_ = v___x_2459_;
goto v___jp_2353_;
}
else
{
uint64_t v_hash_2460_; 
v_hash_2460_ = lean_ctor_get_uint64(v_k_2350_, sizeof(void*)*2);
v___y_2354_ = v_hash_2460_;
goto v___jp_2353_;
}
}
else
{
lean_object* v___x_2461_; 
v___x_2461_ = lean_box(0);
return v___x_2461_;
}
v___jp_2353_:
{
uint8_t v_header_2355_; uint8_t v___x_2356_; uint8_t v___x_2357_; uint64_t v_bits_2358_; uint64_t v___x_2359_; uint64_t v___x_2360_; uint64_t v___x_2361_; lean_object* v_slot_2362_; uint8_t v___x_2363_; uint8_t v___x_2364_; uint8_t v___x_2365_; uint8_t v___x_2366_; 
v_header_2355_ = lean_byte_array_get(v_index_2348_, v___x_2352_);
v___x_2356_ = 31;
v___x_2357_ = lean_uint8_land(v_header_2355_, v___x_2356_);
v_bits_2358_ = lean_uint8_to_uint64(v___x_2357_);
v___x_2359_ = 64ULL;
v___x_2360_ = lean_uint64_sub(v___x_2359_, v_bits_2358_);
v___x_2361_ = lean_uint64_shift_right(v___y_2354_, v___x_2360_);
v_slot_2362_ = lean_uint64_to_nat(v___x_2361_);
v___x_2363_ = 128;
v___x_2364_ = lean_uint8_land(v_header_2355_, v___x_2363_);
v___x_2365_ = 0;
v___x_2366_ = lean_uint8_dec_eq(v___x_2364_, v___x_2365_);
if (v___x_2366_ == 0)
{
lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; uint8_t v___x_2371_; uint32_t v___x_2372_; lean_object* v___x_2373_; uint8_t v___x_2374_; uint32_t v___x_2375_; uint32_t v___x_2376_; uint32_t v___x_2377_; uint32_t v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; uint8_t v___x_2381_; uint32_t v___x_2382_; uint32_t v___x_2383_; uint32_t v___x_2384_; uint32_t v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; uint8_t v___x_2388_; uint32_t v___x_2389_; uint32_t v___x_2390_; uint32_t v___x_2391_; uint32_t v___x_2392_; lean_object* v_lo_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; uint8_t v___x_2396_; uint32_t v___x_2397_; lean_object* v___x_2398_; uint8_t v___x_2399_; uint32_t v___x_2400_; uint32_t v___x_2401_; uint32_t v___x_2402_; lean_object* v___x_2403_; uint8_t v___x_2404_; uint32_t v___x_2405_; uint32_t v___x_2406_; uint32_t v___x_2407_; lean_object* v___x_2408_; uint8_t v___x_2409_; uint32_t v___x_2410_; uint32_t v___x_2411_; uint32_t v___x_2412_; lean_object* v_hi_2413_; uint64_t v___x_2414_; uint64_t v___x_2415_; uint64_t v___x_2416_; uint64_t v___x_2417_; uint64_t v___x_2418_; uint64_t v___x_2419_; lean_object* v_fpOff_2420_; uint64_t v___x_2421_; uint64_t v___x_2422_; uint8_t v___x_2423_; lean_object* v___x_2424_; 
v___x_2367_ = lean_unsigned_to_nat(1u);
v___x_2368_ = lean_unsigned_to_nat(4u);
v___x_2369_ = lean_nat_mul(v___x_2368_, v_slot_2362_);
lean_dec(v_slot_2362_);
v___x_2370_ = lean_nat_add(v___x_2367_, v___x_2369_);
v___x_2371_ = lean_byte_array_get(v_index_2348_, v___x_2370_);
v___x_2372_ = lean_uint8_to_uint32(v___x_2371_);
v___x_2373_ = lean_nat_add(v___x_2370_, v___x_2367_);
v___x_2374_ = lean_byte_array_get(v_index_2348_, v___x_2373_);
lean_dec(v___x_2373_);
v___x_2375_ = lean_uint8_to_uint32(v___x_2374_);
v___x_2376_ = 8;
v___x_2377_ = lean_uint32_shift_left(v___x_2375_, v___x_2376_);
v___x_2378_ = lean_uint32_lor(v___x_2372_, v___x_2377_);
v___x_2379_ = lean_unsigned_to_nat(2u);
v___x_2380_ = lean_nat_add(v___x_2370_, v___x_2379_);
v___x_2381_ = lean_byte_array_get(v_index_2348_, v___x_2380_);
lean_dec(v___x_2380_);
v___x_2382_ = lean_uint8_to_uint32(v___x_2381_);
v___x_2383_ = 16;
v___x_2384_ = lean_uint32_shift_left(v___x_2382_, v___x_2383_);
v___x_2385_ = lean_uint32_lor(v___x_2378_, v___x_2384_);
v___x_2386_ = lean_unsigned_to_nat(3u);
v___x_2387_ = lean_nat_add(v___x_2370_, v___x_2386_);
lean_dec(v___x_2370_);
v___x_2388_ = lean_byte_array_get(v_index_2348_, v___x_2387_);
lean_dec(v___x_2387_);
v___x_2389_ = lean_uint8_to_uint32(v___x_2388_);
v___x_2390_ = 24;
v___x_2391_ = lean_uint32_shift_left(v___x_2389_, v___x_2390_);
v___x_2392_ = lean_uint32_lor(v___x_2385_, v___x_2391_);
v_lo_2393_ = lean_uint32_to_nat(v___x_2392_);
v___x_2394_ = lean_unsigned_to_nat(5u);
v___x_2395_ = lean_nat_add(v___x_2394_, v___x_2369_);
lean_dec(v___x_2369_);
v___x_2396_ = lean_byte_array_get(v_index_2348_, v___x_2395_);
v___x_2397_ = lean_uint8_to_uint32(v___x_2396_);
v___x_2398_ = lean_nat_add(v___x_2395_, v___x_2367_);
v___x_2399_ = lean_byte_array_get(v_index_2348_, v___x_2398_);
lean_dec(v___x_2398_);
v___x_2400_ = lean_uint8_to_uint32(v___x_2399_);
v___x_2401_ = lean_uint32_shift_left(v___x_2400_, v___x_2376_);
v___x_2402_ = lean_uint32_lor(v___x_2397_, v___x_2401_);
v___x_2403_ = lean_nat_add(v___x_2395_, v___x_2379_);
v___x_2404_ = lean_byte_array_get(v_index_2348_, v___x_2403_);
lean_dec(v___x_2403_);
v___x_2405_ = lean_uint8_to_uint32(v___x_2404_);
v___x_2406_ = lean_uint32_shift_left(v___x_2405_, v___x_2383_);
v___x_2407_ = lean_uint32_lor(v___x_2402_, v___x_2406_);
v___x_2408_ = lean_nat_add(v___x_2395_, v___x_2386_);
lean_dec(v___x_2395_);
v___x_2409_ = lean_byte_array_get(v_index_2348_, v___x_2408_);
lean_dec(v___x_2408_);
v___x_2410_ = lean_uint8_to_uint32(v___x_2409_);
v___x_2411_ = lean_uint32_shift_left(v___x_2410_, v___x_2390_);
v___x_2412_ = lean_uint32_lor(v___x_2407_, v___x_2411_);
v_hi_2413_ = lean_uint32_to_nat(v___x_2412_);
v___x_2414_ = 5ULL;
v___x_2415_ = 1ULL;
v___x_2416_ = lean_uint64_shift_left(v___x_2415_, v_bits_2358_);
v___x_2417_ = 2ULL;
v___x_2418_ = lean_uint64_shift_left(v___x_2416_, v___x_2417_);
v___x_2419_ = lean_uint64_add(v___x_2414_, v___x_2418_);
v_fpOff_2420_ = lean_uint64_to_nat(v___x_2419_);
v___x_2421_ = 32ULL;
v___x_2422_ = lean_uint64_shift_right(v___y_2354_, v___x_2421_);
v___x_2423_ = lean_uint64_to_uint8(v___x_2422_);
v___x_2424_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(v_index_2348_, v_cs_2349_, v_k_2350_, v___x_2423_, v_fpOff_2420_, v_lo_2393_, v_hi_2413_);
lean_dec(v_hi_2413_);
lean_dec(v_fpOff_2420_);
return v___x_2424_;
}
else
{
lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; uint8_t v___x_2429_; uint32_t v___x_2430_; lean_object* v___x_2431_; uint8_t v___x_2432_; uint32_t v___x_2433_; uint32_t v___x_2434_; uint32_t v___x_2435_; uint32_t v___x_2436_; lean_object* v_lo_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; uint8_t v___x_2440_; uint32_t v___x_2441_; lean_object* v___x_2442_; uint8_t v___x_2443_; uint32_t v___x_2444_; uint32_t v___x_2445_; uint32_t v___x_2446_; lean_object* v_hi_2447_; uint64_t v___x_2448_; uint64_t v___x_2449_; uint64_t v___x_2450_; uint64_t v___x_2451_; uint64_t v___x_2452_; lean_object* v_fpOff_2453_; uint64_t v___x_2454_; uint64_t v___x_2455_; uint8_t v___x_2456_; lean_object* v___x_2457_; 
v___x_2425_ = lean_unsigned_to_nat(1u);
v___x_2426_ = lean_unsigned_to_nat(2u);
v___x_2427_ = lean_nat_mul(v___x_2426_, v_slot_2362_);
lean_dec(v_slot_2362_);
v___x_2428_ = lean_nat_add(v___x_2425_, v___x_2427_);
v___x_2429_ = lean_byte_array_get(v_index_2348_, v___x_2428_);
v___x_2430_ = lean_uint8_to_uint32(v___x_2429_);
v___x_2431_ = lean_nat_add(v___x_2428_, v___x_2425_);
lean_dec(v___x_2428_);
v___x_2432_ = lean_byte_array_get(v_index_2348_, v___x_2431_);
lean_dec(v___x_2431_);
v___x_2433_ = lean_uint8_to_uint32(v___x_2432_);
v___x_2434_ = 8;
v___x_2435_ = lean_uint32_shift_left(v___x_2433_, v___x_2434_);
v___x_2436_ = lean_uint32_lor(v___x_2430_, v___x_2435_);
v_lo_2437_ = lean_uint32_to_nat(v___x_2436_);
v___x_2438_ = lean_unsigned_to_nat(3u);
v___x_2439_ = lean_nat_add(v___x_2438_, v___x_2427_);
lean_dec(v___x_2427_);
v___x_2440_ = lean_byte_array_get(v_index_2348_, v___x_2439_);
v___x_2441_ = lean_uint8_to_uint32(v___x_2440_);
v___x_2442_ = lean_nat_add(v___x_2439_, v___x_2425_);
lean_dec(v___x_2439_);
v___x_2443_ = lean_byte_array_get(v_index_2348_, v___x_2442_);
lean_dec(v___x_2442_);
v___x_2444_ = lean_uint8_to_uint32(v___x_2443_);
v___x_2445_ = lean_uint32_shift_left(v___x_2444_, v___x_2434_);
v___x_2446_ = lean_uint32_lor(v___x_2441_, v___x_2445_);
v_hi_2447_ = lean_uint32_to_nat(v___x_2446_);
v___x_2448_ = 3ULL;
v___x_2449_ = 1ULL;
v___x_2450_ = lean_uint64_shift_left(v___x_2449_, v_bits_2358_);
v___x_2451_ = lean_uint64_shift_left(v___x_2450_, v___x_2449_);
v___x_2452_ = lean_uint64_add(v___x_2448_, v___x_2451_);
v_fpOff_2453_ = lean_uint64_to_nat(v___x_2452_);
v___x_2454_ = 32ULL;
v___x_2455_ = lean_uint64_shift_right(v___y_2354_, v___x_2454_);
v___x_2456_ = lean_uint64_to_uint8(v___x_2455_);
v___x_2457_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(v_index_2348_, v_cs_2349_, v_k_2350_, v___x_2456_, v_fpOff_2453_, v_lo_2437_, v_hi_2447_);
lean_dec(v_hi_2447_);
lean_dec(v_fpOff_2453_);
return v___x_2457_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg___boxed(lean_object* v_index_2462_, lean_object* v_cs_2463_, lean_object* v_k_2464_){
_start:
{
lean_object* v_res_2465_; 
v_res_2465_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_index_2462_, v_cs_2463_, v_k_2464_);
lean_dec(v_k_2464_);
lean_dec_ref(v_cs_2463_);
lean_dec_ref(v_index_2462_);
return v_res_2465_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(lean_object* v_x_2466_, lean_object* v_x_2467_, lean_object* v_x_2468_){
_start:
{
lean_object* v___x_2469_; lean_object* v___x_2470_; 
v___x_2469_ = lean_box(0);
v___x_2470_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
switch(lean_obj_tag(v_x_2466_))
{
case 0:
{
lean_object* v_tree_2471_; lean_object* v___x_2472_; 
v_tree_2471_ = lean_ctor_get(v_x_2466_, 1);
lean_inc_ref(v_tree_2471_);
lean_dec_ref_known(v_x_2466_, 2);
v___x_2472_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_2471_, v_x_2467_, v_x_2468_);
lean_dec_ref(v_tree_2471_);
return v___x_2472_;
}
case 1:
{
lean_object* v_entry_x3f_2473_; lean_object* v_children_2474_; lean_object* v_childIndex_2475_; lean_object* v___x_2476_; uint8_t v___x_2477_; 
v_entry_x3f_2473_ = lean_ctor_get(v_x_2466_, 1);
lean_inc(v_entry_x3f_2473_);
v_children_2474_ = lean_ctor_get(v_x_2466_, 2);
lean_inc_ref(v_children_2474_);
v_childIndex_2475_ = lean_ctor_get(v_x_2466_, 3);
lean_inc_ref(v_childIndex_2475_);
lean_dec_ref_known(v_x_2466_, 4);
v___x_2476_ = lean_unsigned_to_nat(0u);
v___x_2477_ = lean_nat_dec_eq(v_x_2468_, v___x_2476_);
if (v___x_2477_ == 0)
{
lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; 
lean_dec(v_entry_x3f_2473_);
v___x_2478_ = lean_unsigned_to_nat(1u);
v___x_2479_ = lean_nat_sub(v_x_2468_, v___x_2478_);
lean_dec(v_x_2468_);
v___x_2480_ = lean_array_get_borrowed(v___x_2469_, v_x_2467_, v___x_2479_);
v___x_2481_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_childIndex_2475_, v_children_2474_, v___x_2480_);
lean_dec_ref(v_childIndex_2475_);
if (lean_obj_tag(v___x_2481_) == 0)
{
lean_object* v___x_2482_; 
lean_dec(v___x_2479_);
lean_dec_ref(v_children_2474_);
v___x_2482_ = lean_box(0);
return v___x_2482_;
}
else
{
lean_object* v_val_2483_; lean_object* v___x_2484_; 
v_val_2483_ = lean_ctor_get(v___x_2481_, 0);
lean_inc(v_val_2483_);
lean_dec_ref_known(v___x_2481_, 1);
v___x_2484_ = lean_array_get(v___x_2470_, v_children_2474_, v_val_2483_);
lean_dec(v_val_2483_);
lean_dec_ref(v_children_2474_);
v_x_2466_ = v___x_2484_;
v_x_2468_ = v___x_2479_;
goto _start;
}
}
else
{
lean_dec_ref(v_childIndex_2475_);
lean_dec_ref(v_children_2474_);
lean_dec(v_x_2468_);
if (lean_obj_tag(v_entry_x3f_2473_) == 0)
{
lean_object* v___x_2486_; 
v___x_2486_ = lean_box(0);
return v___x_2486_;
}
else
{
lean_object* v_val_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2495_; 
v_val_2487_ = lean_ctor_get(v_entry_x3f_2473_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v_entry_x3f_2473_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2489_ = v_entry_x3f_2473_;
v_isShared_2490_ = v_isSharedCheck_2495_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_val_2487_);
lean_dec(v_entry_x3f_2473_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2495_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v_fst_2491_; lean_object* v___x_2493_; 
v_fst_2491_ = lean_ctor_get(v_val_2487_, 0);
lean_inc(v_fst_2491_);
lean_dec(v_val_2487_);
if (v_isShared_2490_ == 0)
{
lean_ctor_set(v___x_2489_, 0, v_fst_2491_);
v___x_2493_ = v___x_2489_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v_fst_2491_);
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
}
case 2:
{
lean_object* v_entry_2496_; lean_object* v_expanded_2497_; lean_object* v___x_2498_; uint8_t v___x_2499_; 
v_entry_2496_ = lean_ctor_get(v_x_2466_, 1);
lean_inc_ref(v_entry_2496_);
v_expanded_2497_ = lean_ctor_get(v_x_2466_, 2);
lean_inc_ref(v_expanded_2497_);
lean_dec_ref_known(v_x_2466_, 3);
v___x_2498_ = lean_unsigned_to_nat(0u);
v___x_2499_ = lean_nat_dec_eq(v_x_2468_, v___x_2498_);
if (v___x_2499_ == 0)
{
lean_object* v___x_2500_; lean_object* v_fst_2501_; lean_object* v_snd_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; 
lean_dec_ref(v_entry_2496_);
v___x_2500_ = lean_thunk_get_own(v_expanded_2497_);
lean_dec_ref(v_expanded_2497_);
v_fst_2501_ = lean_ctor_get(v___x_2500_, 0);
lean_inc(v_fst_2501_);
v_snd_2502_ = lean_ctor_get(v___x_2500_, 1);
lean_inc(v_snd_2502_);
lean_dec(v___x_2500_);
v___x_2503_ = lean_unsigned_to_nat(1u);
v___x_2504_ = lean_nat_sub(v_x_2468_, v___x_2503_);
lean_dec(v_x_2468_);
v___x_2505_ = lean_array_get_borrowed(v___x_2469_, v_x_2467_, v___x_2504_);
v___x_2506_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_snd_2502_, v_fst_2501_, v___x_2505_);
lean_dec(v_snd_2502_);
if (lean_obj_tag(v___x_2506_) == 0)
{
lean_object* v___x_2507_; 
lean_dec(v___x_2504_);
lean_dec(v_fst_2501_);
v___x_2507_ = lean_box(0);
return v___x_2507_;
}
else
{
lean_object* v_val_2508_; lean_object* v___x_2509_; 
v_val_2508_ = lean_ctor_get(v___x_2506_, 0);
lean_inc(v_val_2508_);
lean_dec_ref_known(v___x_2506_, 1);
v___x_2509_ = lean_array_get(v___x_2470_, v_fst_2501_, v_val_2508_);
lean_dec(v_val_2508_);
lean_dec(v_fst_2501_);
v_x_2466_ = v___x_2509_;
v_x_2468_ = v___x_2504_;
goto _start;
}
}
else
{
lean_object* v___x_2511_; 
lean_dec_ref(v_expanded_2497_);
lean_dec(v_x_2468_);
v___x_2511_ = lean_thunk_get_own(v_entry_2496_);
lean_dec_ref(v_entry_2496_);
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v___x_2512_; 
v___x_2512_ = lean_box(0);
return v___x_2512_;
}
else
{
lean_object* v_val_2513_; lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2521_; 
v_val_2513_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2521_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2521_ == 0)
{
v___x_2515_ = v___x_2511_;
v_isShared_2516_ = v_isSharedCheck_2521_;
goto v_resetjp_2514_;
}
else
{
lean_inc(v_val_2513_);
lean_dec(v___x_2511_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2521_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
lean_object* v_fst_2517_; lean_object* v___x_2519_; 
v_fst_2517_ = lean_ctor_get(v_val_2513_, 0);
lean_inc(v_fst_2517_);
lean_dec(v_val_2513_);
if (v_isShared_2516_ == 0)
{
lean_ctor_set(v___x_2515_, 0, v_fst_2517_);
v___x_2519_ = v___x_2515_;
goto v_reusejp_2518_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v_fst_2517_);
v___x_2519_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
return v___x_2519_;
}
}
}
}
}
default: 
{
lean_object* v_tree_2522_; 
v_tree_2522_ = lean_ctor_get(v_x_2466_, 1);
lean_inc_ref(v_tree_2522_);
lean_dec_ref_known(v_x_2466_, 2);
v_x_2466_ = v_tree_2522_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg___boxed(lean_object* v_x_2524_, lean_object* v_x_2525_, lean_object* v_x_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(v_x_2524_, v_x_2525_, v_x_2526_);
lean_dec_ref(v_x_2525_);
return v_res_2527_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux(lean_object* v_00_u03b1_2528_, lean_object* v_x_2529_, lean_object* v_x_2530_, lean_object* v_x_2531_){
_start:
{
lean_object* v___x_2532_; 
v___x_2532_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(v_x_2529_, v_x_2530_, v_x_2531_);
return v___x_2532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___boxed(lean_object* v_00_u03b1_2533_, lean_object* v_x_2534_, lean_object* v_x_2535_, lean_object* v_x_2536_){
_start:
{
lean_object* v_res_2537_; 
v_res_2537_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux(v_00_u03b1_2533_, v_x_2534_, v_x_2535_, v_x_2536_);
lean_dec_ref(v_x_2535_);
return v_res_2537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0(lean_object* v_00_u03b1_2538_, lean_object* v_index_2539_, lean_object* v_cs_2540_, lean_object* v_k_2541_){
_start:
{
lean_object* v___x_2542_; 
v___x_2542_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_index_2539_, v_cs_2540_, v_k_2541_);
return v___x_2542_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___boxed(lean_object* v_00_u03b1_2543_, lean_object* v_index_2544_, lean_object* v_cs_2545_, lean_object* v_k_2546_){
_start:
{
lean_object* v_res_2547_; 
v_res_2547_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0(v_00_u03b1_2543_, v_index_2544_, v_cs_2545_, v_k_2546_);
lean_dec(v_k_2546_);
lean_dec_ref(v_cs_2545_);
lean_dec_ref(v_index_2544_);
return v_res_2547_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0(lean_object* v_00_u03b1_2548_, lean_object* v_index_2549_, lean_object* v_cs_2550_, lean_object* v_k_2551_, uint8_t v_fp_2552_, lean_object* v_fpOff_2553_, lean_object* v_j_2554_, lean_object* v_hi_2555_){
_start:
{
lean_object* v___x_2556_; 
v___x_2556_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(v_index_2549_, v_cs_2550_, v_k_2551_, v_fp_2552_, v_fpOff_2553_, v_j_2554_, v_hi_2555_);
return v___x_2556_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2557_, lean_object* v_index_2558_, lean_object* v_cs_2559_, lean_object* v_k_2560_, lean_object* v_fp_2561_, lean_object* v_fpOff_2562_, lean_object* v_j_2563_, lean_object* v_hi_2564_){
_start:
{
uint8_t v_fp_boxed_2565_; lean_object* v_res_2566_; 
v_fp_boxed_2565_ = lean_unbox(v_fp_2561_);
v_res_2566_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0(v_00_u03b1_2557_, v_index_2558_, v_cs_2559_, v_k_2560_, v_fp_boxed_2565_, v_fpOff_2562_, v_j_2563_, v_hi_2564_);
lean_dec(v_hi_2564_);
lean_dec(v_fpOff_2562_);
lean_dec(v_k_2560_);
lean_dec_ref(v_cs_2559_);
lean_dec_ref(v_index_2558_);
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(lean_object* v_x_2567_, lean_object* v_x_2568_, lean_object* v_x_2569_){
_start:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; 
v___x_2570_ = lean_box(0);
v___x_2571_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
switch(lean_obj_tag(v_x_2567_))
{
case 0:
{
lean_object* v_modIdx_2572_; lean_object* v_tree_2573_; lean_object* v___x_2574_; 
v_modIdx_2572_ = lean_ctor_get(v_x_2567_, 0);
lean_inc(v_modIdx_2572_);
v_tree_2573_ = lean_ctor_get(v_x_2567_, 1);
lean_inc_ref(v_tree_2573_);
lean_dec_ref_known(v_x_2567_, 2);
v___x_2574_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_2573_, v_x_2568_, v_x_2569_);
lean_dec_ref(v_tree_2573_);
if (lean_obj_tag(v___x_2574_) == 0)
{
lean_object* v___x_2575_; 
lean_dec(v_modIdx_2572_);
v___x_2575_ = lean_box(0);
return v___x_2575_;
}
else
{
lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2582_; 
v_isSharedCheck_2582_ = !lean_is_exclusive(v___x_2574_);
if (v_isSharedCheck_2582_ == 0)
{
lean_object* v_unused_2583_; 
v_unused_2583_ = lean_ctor_get(v___x_2574_, 0);
lean_dec(v_unused_2583_);
v___x_2577_ = v___x_2574_;
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
else
{
lean_dec(v___x_2574_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2580_; 
if (v_isShared_2578_ == 0)
{
lean_ctor_set(v___x_2577_, 0, v_modIdx_2572_);
v___x_2580_ = v___x_2577_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_modIdx_2572_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
return v___x_2580_;
}
}
}
}
case 1:
{
lean_object* v_entry_x3f_2584_; lean_object* v_children_2585_; lean_object* v_childIndex_2586_; lean_object* v___x_2587_; uint8_t v___x_2588_; 
v_entry_x3f_2584_ = lean_ctor_get(v_x_2567_, 1);
lean_inc(v_entry_x3f_2584_);
v_children_2585_ = lean_ctor_get(v_x_2567_, 2);
lean_inc_ref(v_children_2585_);
v_childIndex_2586_ = lean_ctor_get(v_x_2567_, 3);
lean_inc_ref(v_childIndex_2586_);
lean_dec_ref_known(v_x_2567_, 4);
v___x_2587_ = lean_unsigned_to_nat(0u);
v___x_2588_ = lean_nat_dec_eq(v_x_2569_, v___x_2587_);
if (v___x_2588_ == 0)
{
lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; 
lean_dec(v_entry_x3f_2584_);
v___x_2589_ = lean_unsigned_to_nat(1u);
v___x_2590_ = lean_nat_sub(v_x_2569_, v___x_2589_);
lean_dec(v_x_2569_);
v___x_2591_ = lean_array_get_borrowed(v___x_2570_, v_x_2568_, v___x_2590_);
v___x_2592_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_childIndex_2586_, v_children_2585_, v___x_2591_);
lean_dec_ref(v_childIndex_2586_);
if (lean_obj_tag(v___x_2592_) == 0)
{
lean_dec(v___x_2590_);
lean_dec_ref(v_children_2585_);
return v___x_2592_;
}
else
{
lean_object* v_val_2593_; lean_object* v___x_2594_; 
v_val_2593_ = lean_ctor_get(v___x_2592_, 0);
lean_inc(v_val_2593_);
lean_dec_ref_known(v___x_2592_, 1);
v___x_2594_ = lean_array_get(v___x_2571_, v_children_2585_, v_val_2593_);
lean_dec(v_val_2593_);
lean_dec_ref(v_children_2585_);
v_x_2567_ = v___x_2594_;
v_x_2569_ = v___x_2590_;
goto _start;
}
}
else
{
lean_dec_ref(v_childIndex_2586_);
lean_dec_ref(v_children_2585_);
lean_dec(v_x_2569_);
if (lean_obj_tag(v_entry_x3f_2584_) == 0)
{
lean_object* v___x_2596_; 
v___x_2596_ = lean_box(0);
return v___x_2596_;
}
else
{
lean_object* v_val_2597_; lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2605_; 
v_val_2597_ = lean_ctor_get(v_entry_x3f_2584_, 0);
v_isSharedCheck_2605_ = !lean_is_exclusive(v_entry_x3f_2584_);
if (v_isSharedCheck_2605_ == 0)
{
v___x_2599_ = v_entry_x3f_2584_;
v_isShared_2600_ = v_isSharedCheck_2605_;
goto v_resetjp_2598_;
}
else
{
lean_inc(v_val_2597_);
lean_dec(v_entry_x3f_2584_);
v___x_2599_ = lean_box(0);
v_isShared_2600_ = v_isSharedCheck_2605_;
goto v_resetjp_2598_;
}
v_resetjp_2598_:
{
lean_object* v_snd_2601_; lean_object* v___x_2603_; 
v_snd_2601_ = lean_ctor_get(v_val_2597_, 1);
lean_inc(v_snd_2601_);
lean_dec(v_val_2597_);
if (v_isShared_2600_ == 0)
{
lean_ctor_set(v___x_2599_, 0, v_snd_2601_);
v___x_2603_ = v___x_2599_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v_snd_2601_);
v___x_2603_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
return v___x_2603_;
}
}
}
}
}
case 2:
{
lean_object* v_entry_2606_; lean_object* v_expanded_2607_; lean_object* v___x_2608_; uint8_t v___x_2609_; 
v_entry_2606_ = lean_ctor_get(v_x_2567_, 1);
lean_inc_ref(v_entry_2606_);
v_expanded_2607_ = lean_ctor_get(v_x_2567_, 2);
lean_inc_ref(v_expanded_2607_);
lean_dec_ref_known(v_x_2567_, 3);
v___x_2608_ = lean_unsigned_to_nat(0u);
v___x_2609_ = lean_nat_dec_eq(v_x_2569_, v___x_2608_);
if (v___x_2609_ == 0)
{
lean_object* v___x_2610_; lean_object* v_fst_2611_; lean_object* v_snd_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; 
lean_dec_ref(v_entry_2606_);
v___x_2610_ = lean_thunk_get_own(v_expanded_2607_);
lean_dec_ref(v_expanded_2607_);
v_fst_2611_ = lean_ctor_get(v___x_2610_, 0);
lean_inc(v_fst_2611_);
v_snd_2612_ = lean_ctor_get(v___x_2610_, 1);
lean_inc(v_snd_2612_);
lean_dec(v___x_2610_);
v___x_2613_ = lean_unsigned_to_nat(1u);
v___x_2614_ = lean_nat_sub(v_x_2569_, v___x_2613_);
lean_dec(v_x_2569_);
v___x_2615_ = lean_array_get_borrowed(v___x_2570_, v_x_2568_, v___x_2614_);
v___x_2616_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_snd_2612_, v_fst_2611_, v___x_2615_);
lean_dec(v_snd_2612_);
if (lean_obj_tag(v___x_2616_) == 0)
{
lean_dec(v___x_2614_);
lean_dec(v_fst_2611_);
return v___x_2616_;
}
else
{
lean_object* v_val_2617_; lean_object* v___x_2618_; 
v_val_2617_ = lean_ctor_get(v___x_2616_, 0);
lean_inc(v_val_2617_);
lean_dec_ref_known(v___x_2616_, 1);
v___x_2618_ = lean_array_get(v___x_2571_, v_fst_2611_, v_val_2617_);
lean_dec(v_val_2617_);
lean_dec(v_fst_2611_);
v_x_2567_ = v___x_2618_;
v_x_2569_ = v___x_2614_;
goto _start;
}
}
else
{
lean_object* v___x_2620_; 
lean_dec_ref(v_expanded_2607_);
lean_dec(v_x_2569_);
v___x_2620_ = lean_thunk_get_own(v_entry_2606_);
lean_dec_ref(v_entry_2606_);
if (lean_obj_tag(v___x_2620_) == 0)
{
lean_object* v___x_2621_; 
v___x_2621_ = lean_box(0);
return v___x_2621_;
}
else
{
lean_object* v_val_2622_; lean_object* v___x_2624_; uint8_t v_isShared_2625_; uint8_t v_isSharedCheck_2630_; 
v_val_2622_ = lean_ctor_get(v___x_2620_, 0);
v_isSharedCheck_2630_ = !lean_is_exclusive(v___x_2620_);
if (v_isSharedCheck_2630_ == 0)
{
v___x_2624_ = v___x_2620_;
v_isShared_2625_ = v_isSharedCheck_2630_;
goto v_resetjp_2623_;
}
else
{
lean_inc(v_val_2622_);
lean_dec(v___x_2620_);
v___x_2624_ = lean_box(0);
v_isShared_2625_ = v_isSharedCheck_2630_;
goto v_resetjp_2623_;
}
v_resetjp_2623_:
{
lean_object* v_snd_2626_; lean_object* v___x_2628_; 
v_snd_2626_ = lean_ctor_get(v_val_2622_, 1);
lean_inc(v_snd_2626_);
lean_dec(v_val_2622_);
if (v_isShared_2625_ == 0)
{
lean_ctor_set(v___x_2624_, 0, v_snd_2626_);
v___x_2628_ = v___x_2624_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v_snd_2626_);
v___x_2628_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
return v___x_2628_;
}
}
}
}
}
default: 
{
lean_object* v_tree_2631_; 
v_tree_2631_ = lean_ctor_get(v_x_2567_, 1);
lean_inc_ref(v_tree_2631_);
lean_dec_ref_known(v_x_2567_, 2);
v_x_2567_ = v_tree_2631_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg___boxed(lean_object* v_x_2633_, lean_object* v_x_2634_, lean_object* v_x_2635_){
_start:
{
lean_object* v_res_2636_; 
v_res_2636_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(v_x_2633_, v_x_2634_, v_x_2635_);
lean_dec_ref(v_x_2634_);
return v_res_2636_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux(lean_object* v_00_u03b1_2637_, lean_object* v_x_2638_, lean_object* v_x_2639_, lean_object* v_x_2640_){
_start:
{
lean_object* v___x_2641_; 
v___x_2641_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(v_x_2638_, v_x_2639_, v_x_2640_);
return v___x_2641_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___boxed(lean_object* v_00_u03b1_2642_, lean_object* v_x_2643_, lean_object* v_x_2644_, lean_object* v_x_2645_){
_start:
{
lean_object* v_res_2646_; 
v_res_2646_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux(v_00_u03b1_2642_, v_x_2643_, v_x_2644_, v_x_2645_);
lean_dec_ref(v_x_2644_);
return v_res_2646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(lean_object* v_x_2647_, lean_object* v_x_2648_, lean_object* v_x_2649_){
_start:
{
lean_object* v___x_2650_; lean_object* v___x_2651_; 
v___x_2650_ = lean_box(0);
v___x_2651_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
switch(lean_obj_tag(v_x_2647_))
{
case 0:
{
lean_object* v_modIdx_2652_; lean_object* v_tree_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2670_; 
v_modIdx_2652_ = lean_ctor_get(v_x_2647_, 0);
v_tree_2653_ = lean_ctor_get(v_x_2647_, 1);
v_isSharedCheck_2670_ = !lean_is_exclusive(v_x_2647_);
if (v_isSharedCheck_2670_ == 0)
{
v___x_2655_ = v_x_2647_;
v_isShared_2656_ = v_isSharedCheck_2670_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_tree_2653_);
lean_inc(v_modIdx_2652_);
lean_dec(v_x_2647_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2670_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2657_; 
v___x_2657_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_2653_, v_x_2648_, v_x_2649_);
lean_dec_ref(v_tree_2653_);
if (lean_obj_tag(v___x_2657_) == 0)
{
lean_object* v___x_2658_; 
lean_del_object(v___x_2655_);
lean_dec(v_modIdx_2652_);
v___x_2658_ = lean_box(0);
return v___x_2658_;
}
else
{
lean_object* v_val_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2669_; 
v_val_2659_ = lean_ctor_get(v___x_2657_, 0);
v_isSharedCheck_2669_ = !lean_is_exclusive(v___x_2657_);
if (v_isSharedCheck_2669_ == 0)
{
v___x_2661_ = v___x_2657_;
v_isShared_2662_ = v_isSharedCheck_2669_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_val_2659_);
lean_dec(v___x_2657_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2669_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2664_; 
if (v_isShared_2656_ == 0)
{
lean_ctor_set(v___x_2655_, 1, v_modIdx_2652_);
lean_ctor_set(v___x_2655_, 0, v_val_2659_);
v___x_2664_ = v___x_2655_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v_val_2659_);
lean_ctor_set(v_reuseFailAlloc_2668_, 1, v_modIdx_2652_);
v___x_2664_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
lean_object* v___x_2666_; 
if (v_isShared_2662_ == 0)
{
lean_ctor_set(v___x_2661_, 0, v___x_2664_);
v___x_2666_ = v___x_2661_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v___x_2664_);
v___x_2666_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
return v___x_2666_;
}
}
}
}
}
}
case 1:
{
lean_object* v_entry_x3f_2671_; lean_object* v_children_2672_; lean_object* v_childIndex_2673_; lean_object* v___x_2674_; uint8_t v___x_2675_; 
v_entry_x3f_2671_ = lean_ctor_get(v_x_2647_, 1);
lean_inc(v_entry_x3f_2671_);
v_children_2672_ = lean_ctor_get(v_x_2647_, 2);
lean_inc_ref(v_children_2672_);
v_childIndex_2673_ = lean_ctor_get(v_x_2647_, 3);
lean_inc_ref(v_childIndex_2673_);
lean_dec_ref_known(v_x_2647_, 4);
v___x_2674_ = lean_unsigned_to_nat(0u);
v___x_2675_ = lean_nat_dec_eq(v_x_2649_, v___x_2674_);
if (v___x_2675_ == 0)
{
lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; 
lean_dec(v_entry_x3f_2671_);
v___x_2676_ = lean_unsigned_to_nat(1u);
v___x_2677_ = lean_nat_sub(v_x_2649_, v___x_2676_);
lean_dec(v_x_2649_);
v___x_2678_ = lean_array_get_borrowed(v___x_2650_, v_x_2648_, v___x_2677_);
v___x_2679_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_childIndex_2673_, v_children_2672_, v___x_2678_);
lean_dec_ref(v_childIndex_2673_);
if (lean_obj_tag(v___x_2679_) == 0)
{
lean_object* v___x_2680_; 
lean_dec(v___x_2677_);
lean_dec_ref(v_children_2672_);
v___x_2680_ = lean_box(0);
return v___x_2680_;
}
else
{
lean_object* v_val_2681_; lean_object* v___x_2682_; 
v_val_2681_ = lean_ctor_get(v___x_2679_, 0);
lean_inc(v_val_2681_);
lean_dec_ref_known(v___x_2679_, 1);
v___x_2682_ = lean_array_get(v___x_2651_, v_children_2672_, v_val_2681_);
lean_dec(v_val_2681_);
lean_dec_ref(v_children_2672_);
v_x_2647_ = v___x_2682_;
v_x_2649_ = v___x_2677_;
goto _start;
}
}
else
{
lean_dec_ref(v_childIndex_2673_);
lean_dec_ref(v_children_2672_);
lean_dec(v_x_2649_);
return v_entry_x3f_2671_;
}
}
case 2:
{
lean_object* v_entry_2684_; lean_object* v_expanded_2685_; lean_object* v___x_2686_; uint8_t v___x_2687_; 
v_entry_2684_ = lean_ctor_get(v_x_2647_, 1);
lean_inc_ref(v_entry_2684_);
v_expanded_2685_ = lean_ctor_get(v_x_2647_, 2);
lean_inc_ref(v_expanded_2685_);
lean_dec_ref_known(v_x_2647_, 3);
v___x_2686_ = lean_unsigned_to_nat(0u);
v___x_2687_ = lean_nat_dec_eq(v_x_2649_, v___x_2686_);
if (v___x_2687_ == 0)
{
lean_object* v___x_2688_; lean_object* v_fst_2689_; lean_object* v_snd_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
lean_dec_ref(v_entry_2684_);
v___x_2688_ = lean_thunk_get_own(v_expanded_2685_);
lean_dec_ref(v_expanded_2685_);
v_fst_2689_ = lean_ctor_get(v___x_2688_, 0);
lean_inc(v_fst_2689_);
v_snd_2690_ = lean_ctor_get(v___x_2688_, 1);
lean_inc(v_snd_2690_);
lean_dec(v___x_2688_);
v___x_2691_ = lean_unsigned_to_nat(1u);
v___x_2692_ = lean_nat_sub(v_x_2649_, v___x_2691_);
lean_dec(v_x_2649_);
v___x_2693_ = lean_array_get_borrowed(v___x_2650_, v_x_2648_, v___x_2692_);
v___x_2694_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_snd_2690_, v_fst_2689_, v___x_2693_);
lean_dec(v_snd_2690_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v___x_2695_; 
lean_dec(v___x_2692_);
lean_dec(v_fst_2689_);
v___x_2695_ = lean_box(0);
return v___x_2695_;
}
else
{
lean_object* v_val_2696_; lean_object* v___x_2697_; 
v_val_2696_ = lean_ctor_get(v___x_2694_, 0);
lean_inc(v_val_2696_);
lean_dec_ref_known(v___x_2694_, 1);
v___x_2697_ = lean_array_get(v___x_2651_, v_fst_2689_, v_val_2696_);
lean_dec(v_val_2696_);
lean_dec(v_fst_2689_);
v_x_2647_ = v___x_2697_;
v_x_2649_ = v___x_2692_;
goto _start;
}
}
else
{
lean_object* v___x_2699_; 
lean_dec_ref(v_expanded_2685_);
lean_dec(v_x_2649_);
v___x_2699_ = lean_thunk_get_own(v_entry_2684_);
lean_dec_ref(v_entry_2684_);
return v___x_2699_;
}
}
default: 
{
lean_object* v_tree_2700_; 
v_tree_2700_ = lean_ctor_get(v_x_2647_, 1);
lean_inc_ref(v_tree_2700_);
lean_dec_ref_known(v_x_2647_, 2);
v_x_2647_ = v_tree_2700_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg___boxed(lean_object* v_x_2702_, lean_object* v_x_2703_, lean_object* v_x_2704_){
_start:
{
lean_object* v_res_2705_; 
v_res_2705_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(v_x_2702_, v_x_2703_, v_x_2704_);
lean_dec_ref(v_x_2703_);
return v_res_2705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux(lean_object* v_00_u03b1_2706_, lean_object* v_x_2707_, lean_object* v_x_2708_, lean_object* v_x_2709_){
_start:
{
lean_object* v___x_2710_; 
v___x_2710_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(v_x_2707_, v_x_2708_, v_x_2709_);
return v___x_2710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___boxed(lean_object* v_00_u03b1_2711_, lean_object* v_x_2712_, lean_object* v_x_2713_, lean_object* v_x_2714_){
_start:
{
lean_object* v_res_2715_; 
v_res_2715_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux(v_00_u03b1_2711_, v_x_2712_, v_x_2713_, v_x_2714_);
lean_dec_ref(v_x_2713_);
return v_res_2715_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findEntry_x3f___redArg(lean_object* v_t_2716_, lean_object* v_n_2717_){
_start:
{
lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v_path_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; 
v___x_2718_ = lean_unsigned_to_nat(8u);
v___x_2719_ = lean_mk_empty_array_with_capacity(v___x_2718_);
v_path_2720_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_2717_, v___x_2719_);
v___x_2721_ = lean_array_get_size(v_path_2720_);
v___x_2722_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(v_t_2716_, v_path_2720_, v___x_2721_);
lean_dec_ref(v_path_2720_);
return v___x_2722_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findEntry_x3f(lean_object* v_00_u03b1_2723_, lean_object* v_t_2724_, lean_object* v_n_2725_){
_start:
{
lean_object* v___x_2726_; 
v___x_2726_ = l_Lean_ImportedConsts_findEntry_x3f___redArg(v_t_2724_, v_n_2725_);
return v___x_2726_;
}
}
LEAN_EXPORT lean_object* lean_imported_consts_find_entry_core(lean_object* v_t_2727_, lean_object* v_n_2728_){
_start:
{
lean_object* v___x_2729_; 
v___x_2729_ = l_Lean_ImportedConsts_findEntry_x3f___redArg(v_t_2727_, v_n_2728_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstEntryCached_x3f___boxed(lean_object* v_t_2732_, lean_object* v_n_2733_){
_start:
{
lean_object* v_res_2734_; 
v_res_2734_ = lean_imported_consts_find_entry_cached(v_t_2732_, v_n_2733_);
lean_dec(v_n_2733_);
lean_dec_ref(v_t_2732_);
return v_res_2734_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstCached_x3f(lean_object* v_t_2735_, lean_object* v_n_2736_){
_start:
{
lean_object* v___x_2737_; 
v___x_2737_ = lean_imported_consts_find_entry_cached(v_t_2735_, v_n_2736_);
if (lean_obj_tag(v___x_2737_) == 0)
{
lean_object* v___x_2738_; 
v___x_2738_ = lean_box(0);
return v___x_2738_;
}
else
{
lean_object* v_val_2739_; lean_object* v___x_2741_; uint8_t v_isShared_2742_; uint8_t v_isSharedCheck_2747_; 
v_val_2739_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2747_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2747_ == 0)
{
v___x_2741_ = v___x_2737_;
v_isShared_2742_ = v_isSharedCheck_2747_;
goto v_resetjp_2740_;
}
else
{
lean_inc(v_val_2739_);
lean_dec(v___x_2737_);
v___x_2741_ = lean_box(0);
v_isShared_2742_ = v_isSharedCheck_2747_;
goto v_resetjp_2740_;
}
v_resetjp_2740_:
{
lean_object* v_fst_2743_; lean_object* v___x_2745_; 
v_fst_2743_ = lean_ctor_get(v_val_2739_, 0);
lean_inc(v_fst_2743_);
lean_dec(v_val_2739_);
if (v_isShared_2742_ == 0)
{
lean_ctor_set(v___x_2741_, 0, v_fst_2743_);
v___x_2745_ = v___x_2741_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v_fst_2743_);
v___x_2745_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
return v___x_2745_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstCached_x3f___boxed(lean_object* v_t_2748_, lean_object* v_n_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l_Lean_ImportedConsts_findConstCached_x3f(v_t_2748_, v_n_2749_);
lean_dec(v_n_2749_);
lean_dec_ref(v_t_2748_);
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstModIdxCached_x3f(lean_object* v_t_2751_, lean_object* v_n_2752_){
_start:
{
lean_object* v___x_2753_; 
v___x_2753_ = lean_imported_consts_find_entry_cached(v_t_2751_, v_n_2752_);
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v___x_2754_; 
v___x_2754_ = lean_box(0);
return v___x_2754_;
}
else
{
lean_object* v_val_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2763_; 
v_val_2755_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2757_ = v___x_2753_;
v_isShared_2758_ = v_isSharedCheck_2763_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_val_2755_);
lean_dec(v___x_2753_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2763_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v_snd_2759_; lean_object* v___x_2761_; 
v_snd_2759_ = lean_ctor_get(v_val_2755_, 1);
lean_inc(v_snd_2759_);
lean_dec(v_val_2755_);
if (v_isShared_2758_ == 0)
{
lean_ctor_set(v___x_2757_, 0, v_snd_2759_);
v___x_2761_ = v___x_2757_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_snd_2759_);
v___x_2761_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
return v___x_2761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstModIdxCached_x3f___boxed(lean_object* v_t_2764_, lean_object* v_n_2765_){
_start:
{
lean_object* v_res_2766_; 
v_res_2766_ = l_Lean_ImportedConsts_findConstModIdxCached_x3f(v_t_2764_, v_n_2765_);
lean_dec(v_n_2765_);
lean_dec_ref(v_t_2764_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* lean_imported_extra_consts_find_entry_core(lean_object* v_t_2767_, lean_object* v_n_2768_){
_start:
{
lean_object* v___x_2769_; 
v___x_2769_ = l_Lean_ImportedConsts_findEntry_x3f___redArg(v_t_2767_, v_n_2768_);
return v___x_2769_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraEntryCached_x3f___boxed(lean_object* v_t_2772_, lean_object* v_n_2773_){
_start:
{
lean_object* v_res_2774_; 
v_res_2774_ = lean_imported_extra_consts_find_entry_cached(v_t_2772_, v_n_2773_);
lean_dec(v_n_2773_);
lean_dec_ref(v_t_2772_);
return v_res_2774_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraModIdxCached_x3f(lean_object* v_t_2775_, lean_object* v_n_2776_){
_start:
{
lean_object* v___x_2777_; 
v___x_2777_ = lean_imported_extra_consts_find_entry_cached(v_t_2775_, v_n_2776_);
if (lean_obj_tag(v___x_2777_) == 0)
{
lean_object* v___x_2778_; 
v___x_2778_ = lean_box(0);
return v___x_2778_;
}
else
{
lean_object* v_val_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2787_; 
v_val_2779_ = lean_ctor_get(v___x_2777_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2781_ = v___x_2777_;
v_isShared_2782_ = v_isSharedCheck_2787_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_val_2779_);
lean_dec(v___x_2777_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2787_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v_snd_2783_; lean_object* v___x_2785_; 
v_snd_2783_ = lean_ctor_get(v_val_2779_, 1);
lean_inc(v_snd_2783_);
lean_dec(v_val_2779_);
if (v_isShared_2782_ == 0)
{
lean_ctor_set(v___x_2781_, 0, v_snd_2783_);
v___x_2785_ = v___x_2781_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v_snd_2783_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraModIdxCached_x3f___boxed(lean_object* v_t_2788_, lean_object* v_n_2789_){
_start:
{
lean_object* v_res_2790_; 
v_res_2790_ = l_Lean_ImportedConsts_findExtraModIdxCached_x3f(v_t_2788_, v_n_2789_);
lean_dec(v_n_2789_);
lean_dec_ref(v_t_2788_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_resetCache___boxed(lean_object* v_a_00___x40___internal___hyg_2792_){
_start:
{
lean_object* v_res_2793_; 
v_res_2793_ = lean_imported_consts_cache_reset();
return v_res_2793_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f___redArg(lean_object* v_t_2794_, lean_object* v_n_2795_){
_start:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v_path_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; 
v___x_2796_ = lean_unsigned_to_nat(8u);
v___x_2797_ = lean_mk_empty_array_with_capacity(v___x_2796_);
v_path_2798_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_2795_, v___x_2797_);
v___x_2799_ = lean_array_get_size(v_path_2798_);
v___x_2800_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(v_t_2794_, v_path_2798_, v___x_2799_);
lean_dec_ref(v_path_2798_);
return v___x_2800_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f(lean_object* v_00_u03b1_2801_, lean_object* v_t_2802_, lean_object* v_n_2803_){
_start:
{
lean_object* v___x_2804_; 
v___x_2804_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_2802_, v_n_2803_);
return v___x_2804_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findModIdx_x3f___redArg(lean_object* v_t_2805_, lean_object* v_n_2806_){
_start:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v_path_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; 
v___x_2807_ = lean_unsigned_to_nat(8u);
v___x_2808_ = lean_mk_empty_array_with_capacity(v___x_2807_);
v_path_2809_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_2806_, v___x_2808_);
v___x_2810_ = lean_array_get_size(v_path_2809_);
v___x_2811_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(v_t_2805_, v_path_2809_, v___x_2810_);
lean_dec_ref(v_path_2809_);
return v___x_2811_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findModIdx_x3f(lean_object* v_00_u03b1_2812_, lean_object* v_t_2813_, lean_object* v_n_2814_){
_start:
{
lean_object* v___x_2815_; 
v___x_2815_ = l_Lean_ImportedConsts_findModIdx_x3f___redArg(v_t_2813_, v_n_2814_);
return v___x_2815_;
}
}
LEAN_EXPORT uint8_t l_Lean_ImportedConsts_contains___redArg(lean_object* v_t_2816_, lean_object* v_n_2817_){
_start:
{
lean_object* v___x_2818_; 
v___x_2818_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_2816_, v_n_2817_);
if (lean_obj_tag(v___x_2818_) == 0)
{
uint8_t v___x_2819_; 
v___x_2819_ = 0;
return v___x_2819_;
}
else
{
uint8_t v___x_2820_; 
lean_dec_ref_known(v___x_2818_, 1);
v___x_2820_ = 1;
return v___x_2820_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_contains___redArg___boxed(lean_object* v_t_2821_, lean_object* v_n_2822_){
_start:
{
uint8_t v_res_2823_; lean_object* v_r_2824_; 
v_res_2823_ = l_Lean_ImportedConsts_contains___redArg(v_t_2821_, v_n_2822_);
v_r_2824_ = lean_box(v_res_2823_);
return v_r_2824_;
}
}
LEAN_EXPORT uint8_t l_Lean_ImportedConsts_contains(lean_object* v_00_u03b1_2825_, lean_object* v_t_2826_, lean_object* v_n_2827_){
_start:
{
uint8_t v___x_2828_; 
v___x_2828_ = l_Lean_ImportedConsts_contains___redArg(v_t_2826_, v_n_2827_);
return v___x_2828_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_contains___boxed(lean_object* v_00_u03b1_2829_, lean_object* v_t_2830_, lean_object* v_n_2831_){
_start:
{
uint8_t v_res_2832_; lean_object* v_r_2833_; 
v_res_2832_ = l_Lean_ImportedConsts_contains(v_00_u03b1_2829_, v_t_2830_, v_n_2831_);
v_r_2833_ = lean_box(v_res_2832_);
return v_r_2833_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0(lean_object* v_a_2834_, lean_object* v_x_2835_, lean_object* v___y_2836_){
_start:
{
lean_object* v_snd_2837_; lean_object* v_children_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
v_snd_2837_ = lean_ctor_get(v_a_2834_, 1);
v_children_2838_ = lean_ctor_get(v_snd_2837_, 2);
v___x_2839_ = lean_array_get_size(v_children_2838_);
v___x_2840_ = lean_nat_add(v___y_2836_, v___x_2839_);
v___x_2841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2841_, 0, v___x_2840_);
return v___x_2841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0___boxed(lean_object* v_a_2842_, lean_object* v_x_2843_, lean_object* v___y_2844_){
_start:
{
lean_object* v_res_2845_; 
v_res_2845_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0(v_a_2842_, v_x_2843_, v___y_2844_);
lean_dec(v___y_2844_);
lean_dec_ref(v_a_2842_);
return v_res_2845_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__1(lean_object* v_fst_2846_, lean_object* v_a_2847_, lean_object* v_x_2848_, lean_object* v___y_2849_){
_start:
{
uint64_t v___y_2851_; lean_object* v_key_2857_; 
v_key_2857_ = lean_ctor_get(v_a_2847_, 0);
if (lean_obj_tag(v_key_2857_) == 0)
{
uint64_t v___x_2858_; 
v___x_2858_ = 1723ULL;
v___y_2851_ = v___x_2858_;
goto v___jp_2850_;
}
else
{
uint64_t v_hash_2859_; 
v_hash_2859_ = lean_ctor_get_uint64(v_key_2857_, sizeof(void*)*2);
v___y_2851_ = v_hash_2859_;
goto v___jp_2850_;
}
v___jp_2850_:
{
lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; 
v___x_2852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2852_, 0, v_fst_2846_);
lean_ctor_set(v___x_2852_, 1, v_a_2847_);
v___x_2853_ = lean_box_uint64(v___y_2851_);
v___x_2854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2854_, 0, v___x_2853_);
lean_ctor_set(v___x_2854_, 1, v___x_2852_);
v___x_2855_ = lean_array_push(v___y_2849_, v___x_2854_);
v___x_2856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2856_, 0, v___x_2855_);
return v___x_2856_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__2(lean_object* v___x_2860_, lean_object* v_a_2861_, lean_object* v_x_2862_, lean_object* v___y_2863_){
_start:
{
lean_object* v_snd_2864_; lean_object* v_fst_2865_; lean_object* v_children_2866_; lean_object* v___f_2867_; size_t v_sz_2868_; size_t v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; 
v_snd_2864_ = lean_ctor_get(v_a_2861_, 1);
lean_inc(v_snd_2864_);
v_fst_2865_ = lean_ctor_get(v_a_2861_, 0);
lean_inc(v_fst_2865_);
lean_dec_ref(v_a_2861_);
v_children_2866_ = lean_ctor_get(v_snd_2864_, 2);
lean_inc_ref(v_children_2866_);
lean_dec(v_snd_2864_);
v___f_2867_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__1), 4, 1);
lean_closure_set(v___f_2867_, 0, v_fst_2865_);
v_sz_2868_ = lean_array_size(v_children_2866_);
v___x_2869_ = ((size_t)0ULL);
v___x_2870_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2860_, v_children_2866_, v___f_2867_, v_sz_2868_, v___x_2869_, v___y_2863_);
v___x_2871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2871_, 0, v___x_2870_);
return v___x_2871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(lean_object* v___x_2872_, lean_object* v_multi_2873_, lean_object* v___x_2874_, lean_object* v_total_2875_, lean_object* v_single_2876_, lean_object* v_a_2877_, lean_object* v_x_2878_, lean_object* v___y_2879_){
_start:
{
lean_object* v___x_2880_; uint8_t v___x_2881_; 
v___x_2880_ = lean_array_get_size(v_a_2877_);
v___x_2881_ = lean_nat_dec_eq(v___x_2880_, v___x_2872_);
if (v___x_2881_ == 0)
{
lean_object* v___x_2882_; lean_object* v___x_2883_; 
lean_dec(v_single_2876_);
v___x_2882_ = lean_apply_2(v_multi_2873_, v___y_2879_, v_a_2877_);
v___x_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2882_);
return v___x_2883_;
}
else
{
lean_object* v___x_2884_; lean_object* v_fst_2885_; lean_object* v_snd_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; 
lean_dec(v_multi_2873_);
v___x_2884_ = lean_array_get(v___x_2874_, v_a_2877_, v_total_2875_);
lean_dec_ref(v_a_2877_);
v_fst_2885_ = lean_ctor_get(v___x_2884_, 0);
lean_inc(v_fst_2885_);
v_snd_2886_ = lean_ctor_get(v___x_2884_, 1);
lean_inc(v_snd_2886_);
lean_dec(v___x_2884_);
v___x_2887_ = lean_apply_3(v_single_2876_, v___y_2879_, v_fst_2885_, v_snd_2886_);
v___x_2888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2888_, 0, v___x_2887_);
return v___x_2888_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed(lean_object* v___x_2889_, lean_object* v_multi_2890_, lean_object* v___x_2891_, lean_object* v_total_2892_, lean_object* v_single_2893_, lean_object* v_a_2894_, lean_object* v_x_2895_, lean_object* v___y_2896_){
_start:
{
lean_object* v_res_2897_; 
v_res_2897_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(v___x_2889_, v_multi_2890_, v___x_2891_, v_total_2892_, v_single_2893_, v_a_2894_, v_x_2895_, v___y_2896_);
lean_dec(v_total_2892_);
lean_dec_ref(v___x_2891_);
lean_dec(v___x_2889_);
return v_res_2897_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(lean_object* v_fst_2898_, lean_object* v___x_2899_, lean_object* v_____r_2900_, lean_object* v_groups_2901_){
_start:
{
lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; 
v___x_2902_ = lean_nat_add(v_fst_2898_, v___x_2899_);
v___x_2903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2903_, 0, v___x_2902_);
lean_ctor_set(v___x_2903_, 1, v_groups_2901_);
v___x_2904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2904_, 0, v___x_2903_);
return v___x_2904_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4___boxed(lean_object* v_fst_2905_, lean_object* v___x_2906_, lean_object* v_____r_2907_, lean_object* v_groups_2908_){
_start:
{
lean_object* v_res_2909_; 
v_res_2909_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(v_fst_2905_, v___x_2906_, v_____r_2907_, v_groups_2908_);
lean_dec(v___x_2906_);
lean_dec(v_fst_2905_);
return v_res_2909_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5(lean_object* v___x_2910_, lean_object* v_total_2911_, lean_object* v_snd_2912_, uint8_t v___x_2913_, uint8_t v___x_2914_, lean_object* v_g_2915_){
_start:
{
lean_object* v___x_2916_; lean_object* v_snd_2917_; lean_object* v_key_2918_; 
v___x_2916_ = lean_array_get_borrowed(v___x_2910_, v_g_2915_, v_total_2911_);
v_snd_2917_ = lean_ctor_get(v___x_2916_, 1);
v_key_2918_ = lean_ctor_get(v_snd_2917_, 0);
switch(lean_obj_tag(v_key_2918_))
{
case 0:
{
lean_object* v_key_2919_; 
v_key_2919_ = lean_ctor_get(v_snd_2912_, 0);
if (lean_obj_tag(v_key_2919_) == 0)
{
return v___x_2913_;
}
else
{
return v___x_2914_;
}
}
case 1:
{
lean_object* v_key_2920_; 
v_key_2920_ = lean_ctor_get(v_snd_2912_, 0);
if (lean_obj_tag(v_key_2920_) == 1)
{
lean_object* v_str_2921_; lean_object* v_str_2922_; uint8_t v___x_2923_; 
v_str_2921_ = lean_ctor_get(v_key_2918_, 1);
v_str_2922_ = lean_ctor_get(v_key_2920_, 1);
v___x_2923_ = lean_string_dec_eq(v_str_2921_, v_str_2922_);
return v___x_2923_;
}
else
{
return v___x_2914_;
}
}
default: 
{
lean_object* v_key_2924_; 
v_key_2924_ = lean_ctor_get(v_snd_2912_, 0);
if (lean_obj_tag(v_key_2924_) == 2)
{
lean_object* v_i_2925_; lean_object* v_i_2926_; uint8_t v___x_2927_; 
v_i_2925_ = lean_ctor_get(v_key_2918_, 1);
v_i_2926_ = lean_ctor_get(v_key_2924_, 1);
v___x_2927_ = lean_nat_dec_eq(v_i_2925_, v_i_2926_);
return v___x_2927_;
}
else
{
return v___x_2914_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5___boxed(lean_object* v___x_2928_, lean_object* v_total_2929_, lean_object* v_snd_2930_, lean_object* v___x_2931_, lean_object* v___x_2932_, lean_object* v_g_2933_){
_start:
{
uint8_t v___x_3289__boxed_2934_; uint8_t v___x_3290__boxed_2935_; uint8_t v_res_2936_; lean_object* v_r_2937_; 
v___x_3289__boxed_2934_ = lean_unbox(v___x_2931_);
v___x_3290__boxed_2935_ = lean_unbox(v___x_2932_);
v_res_2936_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5(v___x_2928_, v_total_2929_, v_snd_2930_, v___x_3289__boxed_2934_, v___x_3290__boxed_2935_, v_g_2933_);
lean_dec_ref(v_g_2933_);
lean_dec_ref(v_snd_2930_);
lean_dec(v_total_2929_);
lean_dec_ref(v___x_2928_);
v_r_2937_ = lean_box(v_res_2936_);
return v_r_2937_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6(lean_object* v___x_2938_, lean_object* v___x_2939_, lean_object* v___y_2940_, uint64_t v_fst_2941_, lean_object* v___x_2942_, lean_object* v___x_2943_, lean_object* v_total_2944_, uint8_t v___x_2945_, lean_object* v_b_2946_){
_start:
{
lean_object* v___y_2948_; lean_object* v_fst_2957_; lean_object* v_snd_2958_; lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_2995_; 
v_fst_2957_ = lean_ctor_get(v_b_2946_, 0);
v_snd_2958_ = lean_ctor_get(v_b_2946_, 1);
v_isSharedCheck_2995_ = !lean_is_exclusive(v_b_2946_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2960_ = v_b_2946_;
v_isShared_2961_ = v_isSharedCheck_2995_;
goto v_resetjp_2959_;
}
else
{
lean_inc(v_snd_2958_);
lean_inc(v_fst_2957_);
lean_dec(v_b_2946_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_2995_;
goto v_resetjp_2959_;
}
v___jp_2947_:
{
lean_object* v_a_2949_; lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_2956_; 
v_a_2949_ = lean_ctor_get(v___y_2948_, 0);
v_isSharedCheck_2956_ = !lean_is_exclusive(v___y_2948_);
if (v_isSharedCheck_2956_ == 0)
{
v___x_2951_ = v___y_2948_;
v_isShared_2952_ = v_isSharedCheck_2956_;
goto v_resetjp_2950_;
}
else
{
lean_inc(v_a_2949_);
lean_dec(v___y_2948_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_2956_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v___x_2954_; 
if (v_isShared_2952_ == 0)
{
lean_ctor_set_tag(v___x_2951_, 0);
v___x_2954_ = v___x_2951_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2955_; 
v_reuseFailAlloc_2955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2955_, 0, v_a_2949_);
v___x_2954_ = v_reuseFailAlloc_2955_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
return v___x_2954_;
}
}
}
v_resetjp_2959_:
{
uint8_t v___x_2967_; 
v___x_2967_ = lean_nat_dec_lt(v_fst_2957_, v___x_2938_);
if (v___x_2967_ == 0)
{
lean_dec(v_total_2944_);
lean_dec_ref(v___x_2943_);
goto v___jp_2962_;
}
else
{
lean_object* v___x_2968_; lean_object* v_fst_2969_; lean_object* v_snd_2970_; uint64_t v___x_2971_; uint8_t v___x_2972_; 
v___x_2968_ = lean_array_get_borrowed(v___x_2939_, v___y_2940_, v_fst_2957_);
v_fst_2969_ = lean_ctor_get(v___x_2968_, 0);
v_snd_2970_ = lean_ctor_get(v___x_2968_, 1);
v___x_2971_ = lean_unbox_uint64(v_fst_2969_);
v___x_2972_ = lean_uint64_dec_eq(v___x_2971_, v_fst_2941_);
if (v___x_2972_ == 0)
{
lean_dec(v_total_2944_);
lean_dec_ref(v___x_2943_);
goto v___jp_2962_;
}
else
{
lean_object* v_snd_2973_; lean_object* v___y_2975_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___f_2980_; lean_object* v___x_2981_; 
lean_del_object(v___x_2960_);
v_snd_2973_ = lean_ctor_get(v_snd_2970_, 1);
v___x_2978_ = lean_box(v___x_2972_);
v___x_2979_ = lean_box(v___x_2945_);
lean_inc(v_snd_2973_);
lean_inc(v_total_2944_);
v___f_2980_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5___boxed), 6, 5);
lean_closure_set(v___f_2980_, 0, v___x_2943_);
lean_closure_set(v___f_2980_, 1, v_total_2944_);
lean_closure_set(v___f_2980_, 2, v_snd_2973_);
lean_closure_set(v___f_2980_, 3, v___x_2978_);
lean_closure_set(v___f_2980_, 4, v___x_2979_);
v___x_2981_ = l_Array_findIdx_x3f_loop___redArg(v___f_2980_, v_snd_2958_, v_total_2944_);
if (lean_obj_tag(v___x_2981_) == 0)
{
lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; 
v___x_2982_ = lean_mk_empty_array_with_capacity(v___x_2942_);
lean_inc(v_snd_2970_);
v___x_2983_ = lean_array_push(v___x_2982_, v_snd_2970_);
v___x_2984_ = lean_array_push(v_snd_2958_, v___x_2983_);
v___x_2985_ = lean_box(0);
v___x_2986_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(v_fst_2957_, v___x_2942_, v___x_2985_, v___x_2984_);
lean_dec(v_fst_2957_);
v___y_2948_ = v___x_2986_;
goto v___jp_2947_;
}
else
{
lean_object* v_val_2987_; lean_object* v___x_2988_; uint8_t v___x_2989_; 
v_val_2987_ = lean_ctor_get(v___x_2981_, 0);
lean_inc(v_val_2987_);
lean_dec_ref_known(v___x_2981_, 1);
v___x_2988_ = lean_array_get_size(v_snd_2958_);
v___x_2989_ = lean_nat_dec_lt(v_val_2987_, v___x_2988_);
if (v___x_2989_ == 0)
{
lean_dec(v_val_2987_);
v___y_2975_ = v_snd_2958_;
goto v___jp_2974_;
}
else
{
lean_object* v_v_2990_; lean_object* v___x_2991_; lean_object* v_xs_x27_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; 
v_v_2990_ = lean_array_fget(v_snd_2958_, v_val_2987_);
v___x_2991_ = lean_box(0);
v_xs_x27_2992_ = lean_array_fset(v_snd_2958_, v_val_2987_, v___x_2991_);
lean_inc(v_snd_2970_);
v___x_2993_ = lean_array_push(v_v_2990_, v_snd_2970_);
v___x_2994_ = lean_array_fset(v_xs_x27_2992_, v_val_2987_, v___x_2993_);
lean_dec(v_val_2987_);
v___y_2975_ = v___x_2994_;
goto v___jp_2974_;
}
}
v___jp_2974_:
{
lean_object* v___x_2976_; lean_object* v___x_2977_; 
v___x_2976_ = lean_box(0);
v___x_2977_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(v_fst_2957_, v___x_2942_, v___x_2976_, v___y_2975_);
lean_dec(v_fst_2957_);
v___y_2948_ = v___x_2977_;
goto v___jp_2947_;
}
}
}
v___jp_2962_:
{
lean_object* v___x_2964_; 
if (v_isShared_2961_ == 0)
{
v___x_2964_ = v___x_2960_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v_fst_2957_);
lean_ctor_set(v_reuseFailAlloc_2966_, 1, v_snd_2958_);
v___x_2964_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
lean_object* v___x_2965_; 
v___x_2965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2964_);
return v___x_2965_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6___boxed(lean_object* v___x_2996_, lean_object* v___x_2997_, lean_object* v___y_2998_, lean_object* v_fst_2999_, lean_object* v___x_3000_, lean_object* v___x_3001_, lean_object* v_total_3002_, lean_object* v___x_3003_, lean_object* v_b_3004_){
_start:
{
uint64_t v_fst_3318__boxed_3005_; uint8_t v___x_3321__boxed_3006_; lean_object* v_res_3007_; 
v_fst_3318__boxed_3005_ = lean_unbox_uint64(v_fst_2999_);
lean_dec_ref(v_fst_2999_);
v___x_3321__boxed_3006_ = lean_unbox(v___x_3003_);
v_res_3007_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6(v___x_2996_, v___x_2997_, v___y_2998_, v_fst_3318__boxed_3005_, v___x_3000_, v___x_3001_, v_total_3002_, v___x_3321__boxed_3006_, v_b_3004_);
lean_dec(v___x_3000_);
lean_dec_ref(v___y_2998_);
lean_dec_ref(v___x_2997_);
lean_dec(v___x_2996_);
return v_res_3007_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7(lean_object* v___y_3008_, lean_object* v___x_3009_, lean_object* v___x_3010_, lean_object* v_single_3011_, lean_object* v___x_3012_, lean_object* v_total_3013_, lean_object* v___x_3014_, lean_object* v___f_3015_, size_t v___x_3016_, lean_object* v_b_3017_){
_start:
{
lean_object* v_fst_3018_; lean_object* v_snd_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3077_; 
v_fst_3018_ = lean_ctor_get(v_b_3017_, 0);
v_snd_3019_ = lean_ctor_get(v_b_3017_, 1);
v_isSharedCheck_3077_ = !lean_is_exclusive(v_b_3017_);
if (v_isSharedCheck_3077_ == 0)
{
v___x_3021_ = v_b_3017_;
v_isShared_3022_ = v_isSharedCheck_3077_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_snd_3019_);
lean_inc(v_fst_3018_);
lean_dec(v_b_3017_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3077_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3023_; uint8_t v___x_3024_; 
v___x_3023_ = lean_array_get_size(v___y_3008_);
v___x_3024_ = lean_nat_dec_lt(v_snd_3019_, v___x_3023_);
if (v___x_3024_ == 0)
{
lean_object* v___x_3026_; 
lean_dec_ref(v___f_3015_);
lean_dec_ref(v___x_3014_);
lean_dec(v_total_3013_);
lean_dec_ref(v___x_3012_);
lean_dec(v_single_3011_);
lean_dec(v___x_3010_);
lean_dec_ref(v___x_3009_);
lean_dec_ref(v___y_3008_);
if (v_isShared_3022_ == 0)
{
v___x_3026_ = v___x_3021_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v_fst_3018_);
lean_ctor_set(v_reuseFailAlloc_3028_, 1, v_snd_3019_);
v___x_3026_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
lean_object* v___x_3027_; 
v___x_3027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3026_);
return v___x_3027_;
}
}
else
{
lean_object* v___x_3029_; lean_object* v_snd_3030_; lean_object* v_fst_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3076_; 
lean_del_object(v___x_3021_);
v___x_3029_ = lean_array_get(v___x_3009_, v___y_3008_, v_snd_3019_);
v_snd_3030_ = lean_ctor_get(v___x_3029_, 1);
v_fst_3031_ = lean_ctor_get(v___x_3029_, 0);
v_isSharedCheck_3076_ = !lean_is_exclusive(v___x_3029_);
if (v_isSharedCheck_3076_ == 0)
{
v___x_3033_ = v___x_3029_;
v_isShared_3034_ = v_isSharedCheck_3076_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_snd_3030_);
lean_inc(v_fst_3031_);
lean_dec(v___x_3029_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3076_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v_fst_3035_; lean_object* v_snd_3036_; lean_object* v___x_3037_; uint8_t v___x_3044_; 
v_fst_3035_ = lean_ctor_get(v_snd_3030_, 0);
v_snd_3036_ = lean_ctor_get(v_snd_3030_, 1);
v___x_3037_ = lean_nat_add(v_snd_3019_, v___x_3010_);
lean_dec(v_snd_3019_);
v___x_3044_ = lean_nat_dec_eq(v___x_3037_, v___x_3023_);
if (v___x_3044_ == 0)
{
lean_object* v___x_3045_; lean_object* v_fst_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3074_; 
v___x_3045_ = lean_array_get(v___x_3009_, v___y_3008_, v___x_3037_);
v_fst_3046_ = lean_ctor_get(v___x_3045_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_3045_);
if (v_isSharedCheck_3074_ == 0)
{
lean_object* v_unused_3075_; 
v_unused_3075_ = lean_ctor_get(v___x_3045_, 1);
lean_dec(v_unused_3075_);
v___x_3048_ = v___x_3045_;
v_isShared_3049_ = v_isSharedCheck_3074_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_fst_3046_);
lean_dec(v___x_3045_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3074_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
uint64_t v___x_3050_; uint64_t v___x_3051_; uint8_t v___x_3052_; 
v___x_3050_ = lean_unbox_uint64(v_fst_3046_);
lean_dec(v_fst_3046_);
v___x_3051_ = lean_unbox_uint64(v_fst_3031_);
v___x_3052_ = lean_uint64_dec_eq(v___x_3050_, v___x_3051_);
if (v___x_3052_ == 0)
{
lean_inc(v_snd_3036_);
lean_inc(v_fst_3035_);
lean_del_object(v___x_3048_);
lean_dec(v_fst_3031_);
lean_dec(v_snd_3030_);
lean_dec_ref(v___f_3015_);
lean_dec_ref(v___x_3014_);
lean_dec(v_total_3013_);
lean_dec_ref(v___x_3012_);
lean_dec(v___x_3010_);
lean_dec_ref(v___x_3009_);
lean_dec_ref(v___y_3008_);
goto v___jp_3038_;
}
else
{
lean_object* v___x_3053_; lean_object* v___f_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3059_; 
lean_del_object(v___x_3033_);
lean_dec(v_single_3011_);
v___x_3053_ = lean_box(v___x_3044_);
lean_inc(v___x_3010_);
v___f_3054_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6___boxed), 9, 8);
lean_closure_set(v___f_3054_, 0, v___x_3023_);
lean_closure_set(v___f_3054_, 1, v___x_3009_);
lean_closure_set(v___f_3054_, 2, v___y_3008_);
lean_closure_set(v___f_3054_, 3, v_fst_3031_);
lean_closure_set(v___f_3054_, 4, v___x_3010_);
lean_closure_set(v___f_3054_, 5, v___x_3012_);
lean_closure_set(v___f_3054_, 6, v_total_3013_);
lean_closure_set(v___f_3054_, 7, v___x_3053_);
v___x_3055_ = lean_mk_empty_array_with_capacity(v___x_3010_);
lean_dec(v___x_3010_);
lean_inc_ref(v___x_3055_);
v___x_3056_ = lean_array_push(v___x_3055_, v_snd_3030_);
v___x_3057_ = lean_array_push(v___x_3055_, v___x_3056_);
if (v_isShared_3049_ == 0)
{
lean_ctor_set(v___x_3048_, 1, v___x_3057_);
lean_ctor_set(v___x_3048_, 0, v___x_3037_);
v___x_3059_ = v___x_3048_;
goto v_reusejp_3058_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v___x_3037_);
lean_ctor_set(v_reuseFailAlloc_3073_, 1, v___x_3057_);
v___x_3059_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3058_;
}
v_reusejp_3058_:
{
lean_object* v___x_3060_; lean_object* v_fst_3061_; lean_object* v_snd_3062_; lean_object* v___x_3064_; uint8_t v_isShared_3065_; uint8_t v_isSharedCheck_3072_; 
lean_inc_ref(v___x_3014_);
v___x_3060_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_3014_, v___f_3054_, v___x_3059_);
v_fst_3061_ = lean_ctor_get(v___x_3060_, 0);
v_snd_3062_ = lean_ctor_get(v___x_3060_, 1);
v_isSharedCheck_3072_ = !lean_is_exclusive(v___x_3060_);
if (v_isSharedCheck_3072_ == 0)
{
v___x_3064_ = v___x_3060_;
v_isShared_3065_ = v_isSharedCheck_3072_;
goto v_resetjp_3063_;
}
else
{
lean_inc(v_snd_3062_);
lean_inc(v_fst_3061_);
lean_dec(v___x_3060_);
v___x_3064_ = lean_box(0);
v_isShared_3065_ = v_isSharedCheck_3072_;
goto v_resetjp_3063_;
}
v_resetjp_3063_:
{
size_t v_sz_3066_; lean_object* v___x_3067_; lean_object* v___x_3069_; 
v_sz_3066_ = lean_array_size(v_snd_3062_);
v___x_3067_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3014_, v_snd_3062_, v___f_3015_, v_sz_3066_, v___x_3016_, v_fst_3018_);
if (v_isShared_3065_ == 0)
{
lean_ctor_set(v___x_3064_, 1, v_fst_3061_);
lean_ctor_set(v___x_3064_, 0, v___x_3067_);
v___x_3069_ = v___x_3064_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3071_; 
v_reuseFailAlloc_3071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3071_, 0, v___x_3067_);
lean_ctor_set(v_reuseFailAlloc_3071_, 1, v_fst_3061_);
v___x_3069_ = v_reuseFailAlloc_3071_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
lean_object* v___x_3070_; 
v___x_3070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3069_);
return v___x_3070_;
}
}
}
}
}
}
else
{
lean_inc(v_snd_3036_);
lean_inc(v_fst_3035_);
lean_dec(v_fst_3031_);
lean_dec(v_snd_3030_);
lean_dec_ref(v___f_3015_);
lean_dec_ref(v___x_3014_);
lean_dec(v_total_3013_);
lean_dec_ref(v___x_3012_);
lean_dec(v___x_3010_);
lean_dec_ref(v___x_3009_);
lean_dec_ref(v___y_3008_);
goto v___jp_3038_;
}
v___jp_3038_:
{
lean_object* v___x_3039_; lean_object* v___x_3041_; 
v___x_3039_ = lean_apply_3(v_single_3011_, v_fst_3018_, v_fst_3035_, v_snd_3036_);
if (v_isShared_3034_ == 0)
{
lean_ctor_set(v___x_3033_, 1, v___x_3037_);
lean_ctor_set(v___x_3033_, 0, v___x_3039_);
v___x_3041_ = v___x_3033_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3043_; 
v_reuseFailAlloc_3043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3043_, 0, v___x_3039_);
lean_ctor_set(v_reuseFailAlloc_3043_, 1, v___x_3037_);
v___x_3041_ = v_reuseFailAlloc_3043_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
lean_object* v___x_3042_; 
v___x_3042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3042_, 0, v___x_3041_);
return v___x_3042_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7___boxed(lean_object* v___y_3078_, lean_object* v___x_3079_, lean_object* v___x_3080_, lean_object* v_single_3081_, lean_object* v___x_3082_, lean_object* v_total_3083_, lean_object* v___x_3084_, lean_object* v___f_3085_, lean_object* v___x_3086_, lean_object* v_b_3087_){
_start:
{
size_t v___x_3430__boxed_3088_; lean_object* v_res_3089_; 
v___x_3430__boxed_3088_ = lean_unbox_usize(v___x_3086_);
lean_dec(v___x_3086_);
v_res_3089_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7(v___y_3078_, v___x_3079_, v___x_3080_, v_single_3081_, v___x_3082_, v_total_3083_, v___x_3084_, v___f_3085_, v___x_3430__boxed_3088_, v_b_3087_);
return v_res_3089_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(lean_object* v_x_3090_, lean_object* v_x_3091_){
_start:
{
lean_object* v_snd_3092_; lean_object* v_snd_3093_; lean_object* v_fst_3094_; lean_object* v_fst_3095_; lean_object* v_fst_3096_; lean_object* v_fst_3097_; uint64_t v___x_3098_; uint64_t v___x_3099_; uint8_t v___x_3100_; 
v_snd_3092_ = lean_ctor_get(v_x_3090_, 1);
v_snd_3093_ = lean_ctor_get(v_x_3091_, 1);
v_fst_3094_ = lean_ctor_get(v_x_3090_, 0);
v_fst_3095_ = lean_ctor_get(v_snd_3092_, 0);
v_fst_3096_ = lean_ctor_get(v_x_3091_, 0);
v_fst_3097_ = lean_ctor_get(v_snd_3093_, 0);
v___x_3098_ = lean_unbox_uint64(v_fst_3094_);
v___x_3099_ = lean_unbox_uint64(v_fst_3096_);
v___x_3100_ = lean_uint64_dec_lt(v___x_3098_, v___x_3099_);
if (v___x_3100_ == 0)
{
uint64_t v___x_3101_; uint64_t v___x_3102_; uint8_t v___x_3103_; 
v___x_3101_ = lean_unbox_uint64(v_fst_3094_);
v___x_3102_ = lean_unbox_uint64(v_fst_3096_);
v___x_3103_ = lean_uint64_dec_eq(v___x_3101_, v___x_3102_);
if (v___x_3103_ == 0)
{
return v___x_3103_;
}
else
{
uint8_t v___x_3104_; 
v___x_3104_ = lean_nat_dec_lt(v_fst_3095_, v_fst_3097_);
return v___x_3104_;
}
}
else
{
return v___x_3100_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8___boxed(lean_object* v_x_3105_, lean_object* v_x_3106_){
_start:
{
uint8_t v_res_3107_; lean_object* v_r_3108_; 
v_res_3107_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(v_x_3105_, v_x_3106_);
lean_dec_ref(v_x_3106_);
lean_dec_ref(v_x_3105_);
v_r_3108_ = lean_box(v_res_3107_);
return v_r_3108_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2(void){
_start:
{
lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; 
v___x_3112_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
v___x_3113_ = lean_unsigned_to_nat(0u);
v___x_3114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3114_, 0, v___x_3113_);
lean_ctor_set(v___x_3114_, 1, v___x_3112_);
return v___x_3114_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3(void){
_start:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; 
v___x_3117_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3118_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3___boxed__const__1));
v___x_3119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
lean_ctor_set(v___x_3119_, 1, v___x_3117_);
return v___x_3119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg(lean_object* v_cands_3123_, lean_object* v_init_3124_, lean_object* v_single_3125_, lean_object* v_multi_3126_){
_start:
{
lean_object* v___f_3127_; lean_object* v___x_3128_; lean_object* v___f_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; size_t v_sz_3133_; size_t v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___f_3139_; lean_object* v___y_3141_; lean_object* v___x_3147_; uint8_t v___x_3148_; 
v___f_3127_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0));
v___x_3128_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__9));
v___f_3129_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1));
v___x_3130_ = lean_unsigned_to_nat(0u);
v___x_3131_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3132_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v_sz_3133_ = lean_array_size(v_cands_3123_);
v___x_3134_ = ((size_t)0ULL);
lean_inc_ref(v_cands_3123_);
v___x_3135_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3128_, v_cands_3123_, v___f_3127_, v_sz_3133_, v___x_3134_, v___x_3130_);
v___x_3136_ = lean_mk_empty_array_with_capacity(v___x_3135_);
lean_dec(v___x_3135_);
v___x_3137_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3128_, v_cands_3123_, v___f_3129_, v_sz_3133_, v___x_3134_, v___x_3136_);
v___x_3138_ = lean_unsigned_to_nat(1u);
lean_inc(v_single_3125_);
v___f_3139_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed), 8, 5);
lean_closure_set(v___f_3139_, 0, v___x_3138_);
lean_closure_set(v___f_3139_, 1, v_multi_3126_);
lean_closure_set(v___f_3139_, 2, v___x_3131_);
lean_closure_set(v___f_3139_, 3, v___x_3130_);
lean_closure_set(v___f_3139_, 4, v_single_3125_);
v___x_3147_ = lean_array_get_size(v___x_3137_);
v___x_3148_ = lean_nat_dec_eq(v___x_3147_, v___x_3130_);
if (v___x_3148_ == 0)
{
lean_object* v___f_3149_; lean_object* v___y_3151_; lean_object* v___y_3152_; lean_object* v___x_3154_; lean_object* v___y_3156_; uint8_t v___x_3158_; 
v___f_3149_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4));
v___x_3154_ = lean_nat_sub(v___x_3147_, v___x_3138_);
v___x_3158_ = lean_nat_dec_le(v___x_3130_, v___x_3154_);
if (v___x_3158_ == 0)
{
lean_inc(v___x_3154_);
v___y_3156_ = v___x_3154_;
goto v___jp_3155_;
}
else
{
v___y_3156_ = v___x_3130_;
goto v___jp_3155_;
}
v___jp_3150_:
{
lean_object* v___x_3153_; 
v___x_3153_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_3149_, v___x_3147_, v___x_3137_, v___y_3151_, v___y_3152_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_3152_);
v___y_3141_ = v___x_3153_;
goto v___jp_3140_;
}
v___jp_3155_:
{
uint8_t v___x_3157_; 
v___x_3157_ = lean_nat_dec_le(v___y_3156_, v___x_3154_);
if (v___x_3157_ == 0)
{
lean_dec(v___x_3154_);
lean_inc(v___y_3156_);
v___y_3151_ = v___y_3156_;
v___y_3152_ = v___y_3156_;
goto v___jp_3150_;
}
else
{
v___y_3151_ = v___y_3156_;
v___y_3152_ = v___x_3154_;
goto v___jp_3150_;
}
}
}
else
{
v___y_3141_ = v___x_3137_;
goto v___jp_3140_;
}
v___jp_3140_:
{
lean_object* v___x_3142_; lean_object* v___f_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v_fst_3146_; 
v___x_3142_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___boxed__const__1));
v___f_3143_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7___boxed), 10, 9);
lean_closure_set(v___f_3143_, 0, v___y_3141_);
lean_closure_set(v___f_3143_, 1, v___x_3132_);
lean_closure_set(v___f_3143_, 2, v___x_3138_);
lean_closure_set(v___f_3143_, 3, v_single_3125_);
lean_closure_set(v___f_3143_, 4, v___x_3131_);
lean_closure_set(v___f_3143_, 5, v___x_3130_);
lean_closure_set(v___f_3143_, 6, v___x_3128_);
lean_closure_set(v___f_3143_, 7, v___f_3139_);
lean_closure_set(v___f_3143_, 8, v___x_3142_);
v___x_3144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3144_, 0, v_init_3124_);
lean_ctor_set(v___x_3144_, 1, v___x_3130_);
v___x_3145_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_3128_, v___f_3143_, v___x_3144_);
v_fst_3146_ = lean_ctor_get(v___x_3145_, 0);
lean_inc(v_fst_3146_);
lean_dec(v___x_3145_);
return v_fst_3146_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups(lean_object* v_00_u03b1_3159_, lean_object* v_00_u03c3_3160_, lean_object* v_cands_3161_, lean_object* v_init_3162_, lean_object* v_single_3163_, lean_object* v_multi_3164_){
_start:
{
lean_object* v___f_3165_; lean_object* v___x_3166_; lean_object* v___f_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; size_t v_sz_3171_; size_t v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___f_3177_; lean_object* v___y_3179_; lean_object* v___x_3185_; uint8_t v___x_3186_; 
v___f_3165_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0));
v___x_3166_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__9));
v___f_3167_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1));
v___x_3168_ = lean_unsigned_to_nat(0u);
v___x_3169_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3170_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v_sz_3171_ = lean_array_size(v_cands_3161_);
v___x_3172_ = ((size_t)0ULL);
lean_inc_ref(v_cands_3161_);
v___x_3173_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3166_, v_cands_3161_, v___f_3165_, v_sz_3171_, v___x_3172_, v___x_3168_);
v___x_3174_ = lean_mk_empty_array_with_capacity(v___x_3173_);
lean_dec(v___x_3173_);
v___x_3175_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3166_, v_cands_3161_, v___f_3167_, v_sz_3171_, v___x_3172_, v___x_3174_);
v___x_3176_ = lean_unsigned_to_nat(1u);
lean_inc(v_single_3163_);
v___f_3177_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed), 8, 5);
lean_closure_set(v___f_3177_, 0, v___x_3176_);
lean_closure_set(v___f_3177_, 1, v_multi_3164_);
lean_closure_set(v___f_3177_, 2, v___x_3169_);
lean_closure_set(v___f_3177_, 3, v___x_3168_);
lean_closure_set(v___f_3177_, 4, v_single_3163_);
v___x_3185_ = lean_array_get_size(v___x_3175_);
v___x_3186_ = lean_nat_dec_eq(v___x_3185_, v___x_3168_);
if (v___x_3186_ == 0)
{
lean_object* v___f_3187_; lean_object* v___y_3189_; lean_object* v___y_3190_; lean_object* v___x_3192_; lean_object* v___y_3194_; uint8_t v___x_3196_; 
v___f_3187_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4));
v___x_3192_ = lean_nat_sub(v___x_3185_, v___x_3176_);
v___x_3196_ = lean_nat_dec_le(v___x_3168_, v___x_3192_);
if (v___x_3196_ == 0)
{
lean_inc(v___x_3192_);
v___y_3194_ = v___x_3192_;
goto v___jp_3193_;
}
else
{
v___y_3194_ = v___x_3168_;
goto v___jp_3193_;
}
v___jp_3188_:
{
lean_object* v___x_3191_; 
v___x_3191_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_3187_, v___x_3185_, v___x_3175_, v___y_3189_, v___y_3190_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_3190_);
v___y_3179_ = v___x_3191_;
goto v___jp_3178_;
}
v___jp_3193_:
{
uint8_t v___x_3195_; 
v___x_3195_ = lean_nat_dec_le(v___y_3194_, v___x_3192_);
if (v___x_3195_ == 0)
{
lean_dec(v___x_3192_);
lean_inc(v___y_3194_);
v___y_3189_ = v___y_3194_;
v___y_3190_ = v___y_3194_;
goto v___jp_3188_;
}
else
{
v___y_3189_ = v___y_3194_;
v___y_3190_ = v___x_3192_;
goto v___jp_3188_;
}
}
}
else
{
v___y_3179_ = v___x_3175_;
goto v___jp_3178_;
}
v___jp_3178_:
{
lean_object* v___x_3180_; lean_object* v___f_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v_fst_3184_; 
v___x_3180_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___boxed__const__1));
v___f_3181_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7___boxed), 10, 9);
lean_closure_set(v___f_3181_, 0, v___y_3179_);
lean_closure_set(v___f_3181_, 1, v___x_3170_);
lean_closure_set(v___f_3181_, 2, v___x_3176_);
lean_closure_set(v___f_3181_, 3, v_single_3163_);
lean_closure_set(v___f_3181_, 4, v___x_3169_);
lean_closure_set(v___f_3181_, 5, v___x_3168_);
lean_closure_set(v___f_3181_, 6, v___x_3166_);
lean_closure_set(v___f_3181_, 7, v___f_3177_);
lean_closure_set(v___f_3181_, 8, v___x_3180_);
v___x_3182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3182_, 0, v_init_3162_);
lean_ctor_set(v___x_3182_, 1, v___x_3168_);
v___x_3183_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_3166_, v___f_3181_, v___x_3182_);
v_fst_3184_ = lean_ctor_get(v___x_3183_, 0);
lean_inc(v_fst_3184_);
lean_dec(v___x_3183_);
return v_fst_3184_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(lean_object* v_as_3197_, size_t v_i_3198_, size_t v_stop_3199_, lean_object* v_b_3200_){
_start:
{
lean_object* v___y_3202_; uint8_t v___x_3206_; 
v___x_3206_ = lean_usize_dec_eq(v_i_3198_, v_stop_3199_);
if (v___x_3206_ == 0)
{
lean_object* v___x_3207_; lean_object* v_snd_3208_; lean_object* v_val_x3f_3209_; 
v___x_3207_ = lean_array_uget(v_as_3197_, v_i_3198_);
v_snd_3208_ = lean_ctor_get(v___x_3207_, 1);
v_val_x3f_3209_ = lean_ctor_get(v_snd_3208_, 1);
lean_inc(v_val_x3f_3209_);
if (lean_obj_tag(v_val_x3f_3209_) == 0)
{
lean_dec(v___x_3207_);
v___y_3202_ = v_b_3200_;
goto v___jp_3201_;
}
else
{
lean_object* v_fst_3210_; lean_object* v___x_3212_; uint8_t v_isShared_3213_; uint8_t v_isSharedCheck_3219_; 
v_fst_3210_ = lean_ctor_get(v___x_3207_, 0);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3207_);
if (v_isSharedCheck_3219_ == 0)
{
lean_object* v_unused_3220_; 
v_unused_3220_ = lean_ctor_get(v___x_3207_, 1);
lean_dec(v_unused_3220_);
v___x_3212_ = v___x_3207_;
v_isShared_3213_ = v_isSharedCheck_3219_;
goto v_resetjp_3211_;
}
else
{
lean_inc(v_fst_3210_);
lean_dec(v___x_3207_);
v___x_3212_ = lean_box(0);
v_isShared_3213_ = v_isSharedCheck_3219_;
goto v_resetjp_3211_;
}
v_resetjp_3211_:
{
lean_object* v_val_3214_; lean_object* v___x_3216_; 
v_val_3214_ = lean_ctor_get(v_val_x3f_3209_, 0);
lean_inc(v_val_3214_);
lean_dec_ref_known(v_val_x3f_3209_, 1);
if (v_isShared_3213_ == 0)
{
lean_ctor_set(v___x_3212_, 1, v_fst_3210_);
lean_ctor_set(v___x_3212_, 0, v_val_3214_);
v___x_3216_ = v___x_3212_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_val_3214_);
lean_ctor_set(v_reuseFailAlloc_3218_, 1, v_fst_3210_);
v___x_3216_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
lean_object* v___x_3217_; 
v___x_3217_ = lean_array_push(v_b_3200_, v___x_3216_);
v___y_3202_ = v___x_3217_;
goto v___jp_3201_;
}
}
}
}
else
{
return v_b_3200_;
}
v___jp_3201_:
{
size_t v___x_3203_; size_t v___x_3204_; 
v___x_3203_ = ((size_t)1ULL);
v___x_3204_ = lean_usize_add(v_i_3198_, v___x_3203_);
v_i_3198_ = v___x_3204_;
v_b_3200_ = v___y_3202_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg___boxed(lean_object* v_as_3221_, lean_object* v_i_3222_, lean_object* v_stop_3223_, lean_object* v_b_3224_){
_start:
{
size_t v_i_boxed_3225_; size_t v_stop_boxed_3226_; lean_object* v_res_3227_; 
v_i_boxed_3225_ = lean_unbox_usize(v_i_3222_);
lean_dec(v_i_3222_);
v_stop_boxed_3226_ = lean_unbox_usize(v_stop_3223_);
lean_dec(v_stop_3223_);
v_res_3227_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(v_as_3221_, v_i_boxed_3225_, v_stop_boxed_3226_, v_b_3224_);
lean_dec_ref(v_as_3221_);
return v_res_3227_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(lean_object* v_as_3230_, lean_object* v_start_3231_, lean_object* v_stop_3232_){
_start:
{
lean_object* v___x_3233_; uint8_t v___x_3234_; 
v___x_3233_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg___closed__0));
v___x_3234_ = lean_nat_dec_lt(v_start_3231_, v_stop_3232_);
if (v___x_3234_ == 0)
{
return v___x_3233_;
}
else
{
lean_object* v___x_3235_; uint8_t v___x_3236_; 
v___x_3235_ = lean_array_get_size(v_as_3230_);
v___x_3236_ = lean_nat_dec_le(v_stop_3232_, v___x_3235_);
if (v___x_3236_ == 0)
{
uint8_t v___x_3237_; 
v___x_3237_ = lean_nat_dec_lt(v_start_3231_, v___x_3235_);
if (v___x_3237_ == 0)
{
return v___x_3233_;
}
else
{
size_t v___x_3238_; size_t v___x_3239_; lean_object* v___x_3240_; 
v___x_3238_ = lean_usize_of_nat(v_start_3231_);
v___x_3239_ = lean_usize_of_nat(v___x_3235_);
v___x_3240_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(v_as_3230_, v___x_3238_, v___x_3239_, v___x_3233_);
return v___x_3240_;
}
}
else
{
size_t v___x_3241_; size_t v___x_3242_; lean_object* v___x_3243_; 
v___x_3241_ = lean_usize_of_nat(v_start_3231_);
v___x_3242_ = lean_usize_of_nat(v_stop_3232_);
v___x_3243_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(v_as_3230_, v___x_3241_, v___x_3242_, v___x_3233_);
return v___x_3243_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg___boxed(lean_object* v_as_3244_, lean_object* v_start_3245_, lean_object* v_stop_3246_){
_start:
{
lean_object* v_res_3247_; 
v_res_3247_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_as_3244_, v_start_3245_, v_stop_3246_);
lean_dec(v_stop_3246_);
lean_dec(v_start_3245_);
lean_dec_ref(v_as_3244_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(lean_object* v_fst_3248_, lean_object* v_as_3249_, size_t v_sz_3250_, size_t v_i_3251_, lean_object* v_b_3252_){
_start:
{
uint8_t v___x_3253_; 
v___x_3253_ = lean_usize_dec_lt(v_i_3251_, v_sz_3250_);
if (v___x_3253_ == 0)
{
lean_dec(v_fst_3248_);
return v_b_3252_;
}
else
{
lean_object* v_a_3254_; uint64_t v___y_3256_; lean_object* v_key_3264_; 
v_a_3254_ = lean_array_uget_borrowed(v_as_3249_, v_i_3251_);
v_key_3264_ = lean_ctor_get(v_a_3254_, 0);
if (lean_obj_tag(v_key_3264_) == 0)
{
uint64_t v___x_3265_; 
v___x_3265_ = 1723ULL;
v___y_3256_ = v___x_3265_;
goto v___jp_3255_;
}
else
{
uint64_t v_hash_3266_; 
v_hash_3266_ = lean_ctor_get_uint64(v_key_3264_, sizeof(void*)*2);
v___y_3256_ = v_hash_3266_;
goto v___jp_3255_;
}
v___jp_3255_:
{
lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; size_t v___x_3261_; size_t v___x_3262_; 
lean_inc(v_a_3254_);
lean_inc(v_fst_3248_);
v___x_3257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3257_, 0, v_fst_3248_);
lean_ctor_set(v___x_3257_, 1, v_a_3254_);
v___x_3258_ = lean_box_uint64(v___y_3256_);
v___x_3259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3258_);
lean_ctor_set(v___x_3259_, 1, v___x_3257_);
v___x_3260_ = lean_array_push(v_b_3252_, v___x_3259_);
v___x_3261_ = ((size_t)1ULL);
v___x_3262_ = lean_usize_add(v_i_3251_, v___x_3261_);
v_i_3251_ = v___x_3262_;
v_b_3252_ = v___x_3260_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg___boxed(lean_object* v_fst_3267_, lean_object* v_as_3268_, lean_object* v_sz_3269_, lean_object* v_i_3270_, lean_object* v_b_3271_){
_start:
{
size_t v_sz_boxed_3272_; size_t v_i_boxed_3273_; lean_object* v_res_3274_; 
v_sz_boxed_3272_ = lean_unbox_usize(v_sz_3269_);
lean_dec(v_sz_3269_);
v_i_boxed_3273_ = lean_unbox_usize(v_i_3270_);
lean_dec(v_i_3270_);
v_res_3274_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_fst_3267_, v_as_3268_, v_sz_boxed_3272_, v_i_boxed_3273_, v_b_3271_);
lean_dec_ref(v_as_3268_);
return v_res_3274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(lean_object* v_as_3275_, size_t v_sz_3276_, size_t v_i_3277_, lean_object* v_b_3278_){
_start:
{
uint8_t v___x_3279_; 
v___x_3279_ = lean_usize_dec_lt(v_i_3277_, v_sz_3276_);
if (v___x_3279_ == 0)
{
return v_b_3278_;
}
else
{
lean_object* v_a_3280_; lean_object* v_snd_3281_; lean_object* v_fst_3282_; lean_object* v_children_3283_; size_t v_sz_3284_; size_t v___x_3285_; lean_object* v___x_3286_; size_t v___x_3287_; size_t v___x_3288_; 
v_a_3280_ = lean_array_uget_borrowed(v_as_3275_, v_i_3277_);
v_snd_3281_ = lean_ctor_get(v_a_3280_, 1);
v_fst_3282_ = lean_ctor_get(v_a_3280_, 0);
v_children_3283_ = lean_ctor_get(v_snd_3281_, 2);
v_sz_3284_ = lean_array_size(v_children_3283_);
v___x_3285_ = ((size_t)0ULL);
lean_inc(v_fst_3282_);
v___x_3286_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_fst_3282_, v_children_3283_, v_sz_3284_, v___x_3285_, v_b_3278_);
v___x_3287_ = ((size_t)1ULL);
v___x_3288_ = lean_usize_add(v_i_3277_, v___x_3287_);
v_i_3277_ = v___x_3288_;
v_b_3278_ = v___x_3286_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg___boxed(lean_object* v_as_3290_, lean_object* v_sz_3291_, lean_object* v_i_3292_, lean_object* v_b_3293_){
_start:
{
size_t v_sz_boxed_3294_; size_t v_i_boxed_3295_; lean_object* v_res_3296_; 
v_sz_boxed_3294_ = lean_unbox_usize(v_sz_3291_);
lean_dec(v_sz_3291_);
v_i_boxed_3295_ = lean_unbox_usize(v_i_3292_);
lean_dec(v_i_3292_);
v_res_3296_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_as_3290_, v_sz_boxed_3294_, v_i_boxed_3295_, v_b_3293_);
lean_dec_ref(v_as_3290_);
return v_res_3296_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(lean_object* v_covered_3297_, lean_object* v_as_3298_, size_t v_sz_3299_, size_t v_i_3300_, uint64_t v_b_3301_){
_start:
{
uint8_t v___x_3302_; 
v___x_3302_ = lean_usize_dec_lt(v_i_3300_, v_sz_3299_);
if (v___x_3302_ == 0)
{
return v_b_3301_;
}
else
{
lean_object* v_a_3303_; lean_object* v_fst_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; uint64_t v___x_3307_; uint64_t v___x_3308_; size_t v___x_3309_; size_t v___x_3310_; 
v_a_3303_ = lean_array_uget_borrowed(v_as_3298_, v_i_3300_);
v_fst_3304_ = lean_ctor_get(v_a_3303_, 0);
v___x_3305_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3___boxed__const__1));
v___x_3306_ = lean_array_get_borrowed(v___x_3305_, v_covered_3297_, v_fst_3304_);
v___x_3307_ = lean_unbox_uint64(v___x_3306_);
v___x_3308_ = lean_uint64_land(v_b_3301_, v___x_3307_);
v___x_3309_ = ((size_t)1ULL);
v___x_3310_ = lean_usize_add(v_i_3300_, v___x_3309_);
v_i_3300_ = v___x_3310_;
v_b_3301_ = v___x_3308_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg___boxed(lean_object* v_covered_3312_, lean_object* v_as_3313_, lean_object* v_sz_3314_, lean_object* v_i_3315_, lean_object* v_b_3316_){
_start:
{
size_t v_sz_boxed_3317_; size_t v_i_boxed_3318_; uint64_t v_b_boxed_3319_; uint64_t v_res_3320_; lean_object* v_r_3321_; 
v_sz_boxed_3317_ = lean_unbox_usize(v_sz_3314_);
lean_dec(v_sz_3314_);
v_i_boxed_3318_ = lean_unbox_usize(v_i_3315_);
lean_dec(v_i_3315_);
v_b_boxed_3319_ = lean_unbox_uint64(v_b_3316_);
lean_dec_ref(v_b_3316_);
v_res_3320_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(v_covered_3312_, v_as_3313_, v_sz_boxed_3317_, v_i_boxed_3318_, v_b_boxed_3319_);
lean_dec_ref(v_as_3313_);
lean_dec_ref(v_covered_3312_);
v_r_3321_ = lean_box_uint64(v_res_3320_);
return v_r_3321_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(lean_object* v_fst_3322_, lean_object* v___x_3323_, lean_object* v_____r_3324_, lean_object* v_groups_3325_){
_start:
{
lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
v___x_3326_ = lean_nat_add(v_fst_3322_, v___x_3323_);
v___x_3327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3327_, 0, v___x_3326_);
lean_ctor_set(v___x_3327_, 1, v_groups_3325_);
v___x_3328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3328_, 0, v___x_3327_);
return v___x_3328_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0___boxed(lean_object* v_fst_3329_, lean_object* v___x_3330_, lean_object* v_____r_3331_, lean_object* v_groups_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_3329_, v___x_3330_, v_____r_3331_, v_groups_3332_);
lean_dec(v___x_3330_);
lean_dec(v_fst_3329_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(lean_object* v_snd_3334_, uint64_t v___x_3335_, uint64_t v_fst_3336_, lean_object* v___x_3337_, lean_object* v___x_3338_, lean_object* v_as_3339_, lean_object* v_j_3340_){
_start:
{
uint8_t v___y_3342_; lean_object* v___x_3347_; uint8_t v___x_3348_; 
v___x_3347_ = lean_array_get_size(v_as_3339_);
v___x_3348_ = lean_nat_dec_lt(v_j_3340_, v___x_3347_);
if (v___x_3348_ == 0)
{
lean_object* v___x_3349_; 
lean_dec(v_j_3340_);
v___x_3349_ = lean_box(0);
return v___x_3349_;
}
else
{
lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v_snd_3354_; lean_object* v_key_3355_; lean_object* v_key_3356_; uint8_t v___x_3357_; 
v___x_3350_ = lean_unsigned_to_nat(0u);
v___x_3351_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3352_ = lean_array_fget_borrowed(v_as_3339_, v_j_3340_);
v___x_3353_ = lean_array_get_borrowed(v___x_3351_, v___x_3352_, v___x_3350_);
v_snd_3354_ = lean_ctor_get(v___x_3353_, 1);
v_key_3355_ = lean_ctor_get(v_snd_3354_, 0);
v_key_3356_ = lean_ctor_get(v_snd_3334_, 0);
v___x_3357_ = lean_nat_dec_eq(v___x_3337_, v___x_3338_);
switch(lean_obj_tag(v_key_3355_))
{
case 0:
{
if (lean_obj_tag(v_key_3356_) == 0)
{
uint8_t v___x_3358_; 
v___x_3358_ = lean_uint64_dec_eq(v___x_3335_, v_fst_3336_);
v___y_3342_ = v___x_3358_;
goto v___jp_3341_;
}
else
{
v___y_3342_ = v___x_3357_;
goto v___jp_3341_;
}
}
case 1:
{
if (lean_obj_tag(v_key_3356_) == 1)
{
lean_object* v_str_3359_; lean_object* v_str_3360_; uint8_t v___x_3361_; 
v_str_3359_ = lean_ctor_get(v_key_3355_, 1);
v_str_3360_ = lean_ctor_get(v_key_3356_, 1);
v___x_3361_ = lean_string_dec_eq(v_str_3359_, v_str_3360_);
v___y_3342_ = v___x_3361_;
goto v___jp_3341_;
}
else
{
v___y_3342_ = v___x_3357_;
goto v___jp_3341_;
}
}
default: 
{
if (lean_obj_tag(v_key_3356_) == 2)
{
lean_object* v_i_3362_; lean_object* v_i_3363_; uint8_t v___x_3364_; 
v_i_3362_ = lean_ctor_get(v_key_3355_, 1);
v_i_3363_ = lean_ctor_get(v_key_3356_, 1);
v___x_3364_ = lean_nat_dec_eq(v_i_3362_, v_i_3363_);
v___y_3342_ = v___x_3364_;
goto v___jp_3341_;
}
else
{
v___y_3342_ = v___x_3357_;
goto v___jp_3341_;
}
}
}
}
v___jp_3341_:
{
if (v___y_3342_ == 0)
{
lean_object* v___x_3343_; lean_object* v___x_3344_; 
v___x_3343_ = lean_unsigned_to_nat(1u);
v___x_3344_ = lean_nat_add(v_j_3340_, v___x_3343_);
lean_dec(v_j_3340_);
v_j_3340_ = v___x_3344_;
goto _start;
}
else
{
lean_object* v___x_3346_; 
v___x_3346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3346_, 0, v_j_3340_);
return v___x_3346_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg___boxed(lean_object* v_snd_3365_, lean_object* v___x_3366_, lean_object* v_fst_3367_, lean_object* v___x_3368_, lean_object* v___x_3369_, lean_object* v_as_3370_, lean_object* v_j_3371_){
_start:
{
uint64_t v___x_3060__boxed_3372_; uint64_t v_fst_3061__boxed_3373_; lean_object* v_res_3374_; 
v___x_3060__boxed_3372_ = lean_unbox_uint64(v___x_3366_);
lean_dec_ref(v___x_3366_);
v_fst_3061__boxed_3373_ = lean_unbox_uint64(v_fst_3367_);
lean_dec_ref(v_fst_3367_);
v_res_3374_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_snd_3365_, v___x_3060__boxed_3372_, v_fst_3061__boxed_3373_, v___x_3368_, v___x_3369_, v_as_3370_, v_j_3371_);
lean_dec_ref(v_as_3370_);
lean_dec(v___x_3369_);
lean_dec(v___x_3368_);
lean_dec_ref(v_snd_3365_);
return v_res_3374_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(lean_object* v___x_3375_, lean_object* v___y_3376_, uint64_t v_fst_3377_, lean_object* v___x_3378_, lean_object* v_a_3379_){
_start:
{
lean_object* v___y_3381_; lean_object* v_fst_3385_; lean_object* v_snd_3386_; lean_object* v___x_3388_; uint8_t v_isShared_3389_; uint8_t v_isSharedCheck_3429_; 
v_fst_3385_ = lean_ctor_get(v_a_3379_, 0);
v_snd_3386_ = lean_ctor_get(v_a_3379_, 1);
v_isSharedCheck_3429_ = !lean_is_exclusive(v_a_3379_);
if (v_isSharedCheck_3429_ == 0)
{
v___x_3388_ = v_a_3379_;
v_isShared_3389_ = v_isSharedCheck_3429_;
goto v_resetjp_3387_;
}
else
{
lean_inc(v_snd_3386_);
lean_inc(v_fst_3385_);
lean_dec(v_a_3379_);
v___x_3388_ = lean_box(0);
v_isShared_3389_ = v_isSharedCheck_3429_;
goto v_resetjp_3387_;
}
v___jp_3380_:
{
if (lean_obj_tag(v___y_3381_) == 0)
{
lean_object* v_a_3382_; 
v_a_3382_ = lean_ctor_get(v___y_3381_, 0);
lean_inc(v_a_3382_);
lean_dec_ref_known(v___y_3381_, 1);
return v_a_3382_;
}
else
{
lean_object* v_a_3383_; 
v_a_3383_ = lean_ctor_get(v___y_3381_, 0);
lean_inc(v_a_3383_);
lean_dec_ref_known(v___y_3381_, 1);
v_a_3379_ = v_a_3383_;
goto _start;
}
}
v_resetjp_3387_:
{
uint8_t v___x_3390_; 
v___x_3390_ = lean_nat_dec_lt(v_fst_3385_, v___x_3375_);
if (v___x_3390_ == 0)
{
lean_object* v___x_3392_; 
if (v_isShared_3389_ == 0)
{
v___x_3392_ = v___x_3388_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3393_; 
v_reuseFailAlloc_3393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3393_, 0, v_fst_3385_);
lean_ctor_set(v_reuseFailAlloc_3393_, 1, v_snd_3386_);
v___x_3392_ = v_reuseFailAlloc_3393_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
return v___x_3392_;
}
}
else
{
lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v_fst_3397_; lean_object* v_snd_3398_; lean_object* v___x_3400_; uint8_t v_isShared_3401_; uint8_t v_isSharedCheck_3428_; 
lean_del_object(v___x_3388_);
v___x_3394_ = lean_unsigned_to_nat(0u);
v___x_3395_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v___x_3396_ = lean_array_get(v___x_3395_, v___y_3376_, v_fst_3385_);
v_fst_3397_ = lean_ctor_get(v___x_3396_, 0);
v_snd_3398_ = lean_ctor_get(v___x_3396_, 1);
v_isSharedCheck_3428_ = !lean_is_exclusive(v___x_3396_);
if (v_isSharedCheck_3428_ == 0)
{
v___x_3400_ = v___x_3396_;
v_isShared_3401_ = v_isSharedCheck_3428_;
goto v_resetjp_3399_;
}
else
{
lean_inc(v_snd_3398_);
lean_inc(v_fst_3397_);
lean_dec(v___x_3396_);
v___x_3400_ = lean_box(0);
v_isShared_3401_ = v_isSharedCheck_3428_;
goto v_resetjp_3399_;
}
v_resetjp_3399_:
{
uint64_t v___x_3402_; uint8_t v___x_3403_; 
v___x_3402_ = lean_unbox_uint64(v_fst_3397_);
v___x_3403_ = lean_uint64_dec_eq(v___x_3402_, v_fst_3377_);
if (v___x_3403_ == 0)
{
lean_object* v___x_3405_; 
lean_dec(v_snd_3398_);
lean_dec(v_fst_3397_);
if (v_isShared_3401_ == 0)
{
lean_ctor_set(v___x_3400_, 1, v_snd_3386_);
lean_ctor_set(v___x_3400_, 0, v_fst_3385_);
v___x_3405_ = v___x_3400_;
goto v_reusejp_3404_;
}
else
{
lean_object* v_reuseFailAlloc_3406_; 
v_reuseFailAlloc_3406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3406_, 0, v_fst_3385_);
lean_ctor_set(v_reuseFailAlloc_3406_, 1, v_snd_3386_);
v___x_3405_ = v_reuseFailAlloc_3406_;
goto v_reusejp_3404_;
}
v_reusejp_3404_:
{
return v___x_3405_;
}
}
else
{
lean_object* v_snd_3407_; lean_object* v___x_3408_; lean_object* v___y_3410_; uint64_t v___x_3413_; lean_object* v___x_3414_; 
lean_del_object(v___x_3400_);
v_snd_3407_ = lean_ctor_get(v_snd_3398_, 1);
v___x_3408_ = lean_unsigned_to_nat(1u);
v___x_3413_ = lean_unbox_uint64(v_fst_3397_);
lean_dec(v_fst_3397_);
v___x_3414_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_snd_3407_, v___x_3413_, v_fst_3377_, v___x_3378_, v___x_3375_, v_snd_3386_, v___x_3394_);
if (lean_obj_tag(v___x_3414_) == 0)
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; 
v___x_3415_ = lean_mk_empty_array_with_capacity(v___x_3408_);
v___x_3416_ = lean_array_push(v___x_3415_, v_snd_3398_);
v___x_3417_ = lean_array_push(v_snd_3386_, v___x_3416_);
v___x_3418_ = lean_box(0);
v___x_3419_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_3385_, v___x_3408_, v___x_3418_, v___x_3417_);
lean_dec(v_fst_3385_);
v___y_3381_ = v___x_3419_;
goto v___jp_3380_;
}
else
{
lean_object* v_val_3420_; lean_object* v___x_3421_; uint8_t v___x_3422_; 
v_val_3420_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_val_3420_);
lean_dec_ref_known(v___x_3414_, 1);
v___x_3421_ = lean_array_get_size(v_snd_3386_);
v___x_3422_ = lean_nat_dec_lt(v_val_3420_, v___x_3421_);
if (v___x_3422_ == 0)
{
lean_dec(v_val_3420_);
lean_dec(v_snd_3398_);
v___y_3410_ = v_snd_3386_;
goto v___jp_3409_;
}
else
{
lean_object* v_v_3423_; lean_object* v___x_3424_; lean_object* v_xs_x27_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; 
v_v_3423_ = lean_array_fget(v_snd_3386_, v_val_3420_);
v___x_3424_ = lean_box(0);
v_xs_x27_3425_ = lean_array_fset(v_snd_3386_, v_val_3420_, v___x_3424_);
v___x_3426_ = lean_array_push(v_v_3423_, v_snd_3398_);
v___x_3427_ = lean_array_fset(v_xs_x27_3425_, v_val_3420_, v___x_3426_);
lean_dec(v_val_3420_);
v___y_3410_ = v___x_3427_;
goto v___jp_3409_;
}
}
v___jp_3409_:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; 
v___x_3411_ = lean_box(0);
v___x_3412_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_3385_, v___x_3408_, v___x_3411_, v___y_3410_);
lean_dec(v_fst_3385_);
v___y_3381_ = v___x_3412_;
goto v___jp_3380_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___boxed(lean_object* v___x_3430_, lean_object* v___y_3431_, lean_object* v_fst_3432_, lean_object* v___x_3433_, lean_object* v_a_3434_){
_start:
{
uint64_t v_fst_3128__boxed_3435_; lean_object* v_res_3436_; 
v_fst_3128__boxed_3435_ = lean_unbox_uint64(v_fst_3432_);
lean_dec_ref(v_fst_3432_);
v_res_3436_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_3430_, v___y_3431_, v_fst_3128__boxed_3435_, v___x_3433_, v_a_3434_);
lean_dec(v___x_3433_);
lean_dec_ref(v___y_3431_);
lean_dec(v___x_3430_);
return v_res_3436_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(lean_object* v_hi_3437_, lean_object* v_pivot_3438_, lean_object* v_as_3439_, lean_object* v_i_3440_, lean_object* v_k_3441_){
_start:
{
uint8_t v___x_3452_; 
v___x_3452_ = lean_nat_dec_lt(v_k_3441_, v_hi_3437_);
if (v___x_3452_ == 0)
{
lean_object* v___x_3453_; lean_object* v___x_3454_; 
lean_dec(v_k_3441_);
v___x_3453_ = lean_array_fswap(v_as_3439_, v_i_3440_, v_hi_3437_);
v___x_3454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3454_, 0, v_i_3440_);
lean_ctor_set(v___x_3454_, 1, v___x_3453_);
return v___x_3454_;
}
else
{
lean_object* v___x_3455_; lean_object* v_snd_3456_; lean_object* v_snd_3457_; lean_object* v_fst_3458_; lean_object* v_fst_3459_; lean_object* v_fst_3460_; lean_object* v_fst_3461_; uint64_t v___x_3462_; uint64_t v___x_3463_; uint8_t v___x_3464_; 
v___x_3455_ = lean_array_fget_borrowed(v_as_3439_, v_k_3441_);
v_snd_3456_ = lean_ctor_get(v___x_3455_, 1);
v_snd_3457_ = lean_ctor_get(v_pivot_3438_, 1);
v_fst_3458_ = lean_ctor_get(v___x_3455_, 0);
v_fst_3459_ = lean_ctor_get(v_snd_3456_, 0);
v_fst_3460_ = lean_ctor_get(v_pivot_3438_, 0);
v_fst_3461_ = lean_ctor_get(v_snd_3457_, 0);
v___x_3462_ = lean_unbox_uint64(v_fst_3458_);
v___x_3463_ = lean_unbox_uint64(v_fst_3460_);
v___x_3464_ = lean_uint64_dec_lt(v___x_3462_, v___x_3463_);
if (v___x_3464_ == 0)
{
uint64_t v___x_3465_; uint64_t v___x_3466_; uint8_t v___x_3467_; 
v___x_3465_ = lean_unbox_uint64(v_fst_3458_);
v___x_3466_ = lean_unbox_uint64(v_fst_3460_);
v___x_3467_ = lean_uint64_dec_eq(v___x_3465_, v___x_3466_);
if (v___x_3467_ == 0)
{
goto v___jp_3448_;
}
else
{
uint8_t v___x_3468_; 
v___x_3468_ = lean_nat_dec_lt(v_fst_3459_, v_fst_3461_);
if (v___x_3468_ == 0)
{
goto v___jp_3448_;
}
else
{
goto v___jp_3442_;
}
}
}
else
{
goto v___jp_3442_;
}
}
v___jp_3442_:
{
lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; 
v___x_3443_ = lean_array_fswap(v_as_3439_, v_i_3440_, v_k_3441_);
v___x_3444_ = lean_unsigned_to_nat(1u);
v___x_3445_ = lean_nat_add(v_i_3440_, v___x_3444_);
lean_dec(v_i_3440_);
v___x_3446_ = lean_nat_add(v_k_3441_, v___x_3444_);
lean_dec(v_k_3441_);
v_as_3439_ = v___x_3443_;
v_i_3440_ = v___x_3445_;
v_k_3441_ = v___x_3446_;
goto _start;
}
v___jp_3448_:
{
lean_object* v___x_3449_; lean_object* v___x_3450_; 
v___x_3449_ = lean_unsigned_to_nat(1u);
v___x_3450_ = lean_nat_add(v_k_3441_, v___x_3449_);
lean_dec(v_k_3441_);
v_k_3441_ = v___x_3450_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg___boxed(lean_object* v_hi_3469_, lean_object* v_pivot_3470_, lean_object* v_as_3471_, lean_object* v_i_3472_, lean_object* v_k_3473_){
_start:
{
lean_object* v_res_3474_; 
v_res_3474_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(v_hi_3469_, v_pivot_3470_, v_as_3471_, v_i_3472_, v_k_3473_);
lean_dec_ref(v_pivot_3470_);
lean_dec(v_hi_3469_);
return v_res_3474_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(lean_object* v_n_3475_, lean_object* v_as_3476_, lean_object* v_lo_3477_, lean_object* v_hi_3478_){
_start:
{
lean_object* v___y_3480_; uint8_t v___x_3490_; 
v___x_3490_ = lean_nat_dec_lt(v_lo_3477_, v_hi_3478_);
if (v___x_3490_ == 0)
{
lean_dec(v_lo_3477_);
return v_as_3476_;
}
else
{
lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v_mid_3493_; lean_object* v___y_3495_; lean_object* v___y_3501_; lean_object* v___x_3506_; lean_object* v___x_3507_; uint8_t v___x_3508_; 
v___x_3491_ = lean_nat_add(v_lo_3477_, v_hi_3478_);
v___x_3492_ = lean_unsigned_to_nat(1u);
v_mid_3493_ = lean_nat_shiftr(v___x_3491_, v___x_3492_);
lean_dec(v___x_3491_);
v___x_3506_ = lean_array_fget_borrowed(v_as_3476_, v_mid_3493_);
v___x_3507_ = lean_array_fget_borrowed(v_as_3476_, v_lo_3477_);
v___x_3508_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(v___x_3506_, v___x_3507_);
if (v___x_3508_ == 0)
{
v___y_3501_ = v_as_3476_;
goto v___jp_3500_;
}
else
{
lean_object* v___x_3509_; 
v___x_3509_ = lean_array_fswap(v_as_3476_, v_lo_3477_, v_mid_3493_);
v___y_3501_ = v___x_3509_;
goto v___jp_3500_;
}
v___jp_3494_:
{
lean_object* v___x_3496_; lean_object* v___x_3497_; uint8_t v___x_3498_; 
v___x_3496_ = lean_array_fget_borrowed(v___y_3495_, v_mid_3493_);
v___x_3497_ = lean_array_fget_borrowed(v___y_3495_, v_hi_3478_);
v___x_3498_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(v___x_3496_, v___x_3497_);
if (v___x_3498_ == 0)
{
lean_dec(v_mid_3493_);
v___y_3480_ = v___y_3495_;
goto v___jp_3479_;
}
else
{
lean_object* v___x_3499_; 
v___x_3499_ = lean_array_fswap(v___y_3495_, v_mid_3493_, v_hi_3478_);
lean_dec(v_mid_3493_);
v___y_3480_ = v___x_3499_;
goto v___jp_3479_;
}
}
v___jp_3500_:
{
lean_object* v___x_3502_; lean_object* v___x_3503_; uint8_t v___x_3504_; 
v___x_3502_ = lean_array_fget_borrowed(v___y_3501_, v_hi_3478_);
v___x_3503_ = lean_array_fget_borrowed(v___y_3501_, v_lo_3477_);
v___x_3504_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(v___x_3502_, v___x_3503_);
if (v___x_3504_ == 0)
{
v___y_3495_ = v___y_3501_;
goto v___jp_3494_;
}
else
{
lean_object* v___x_3505_; 
v___x_3505_ = lean_array_fswap(v___y_3501_, v_lo_3477_, v_hi_3478_);
v___y_3495_ = v___x_3505_;
goto v___jp_3494_;
}
}
}
v___jp_3479_:
{
lean_object* v_pivot_3481_; lean_object* v___x_3482_; lean_object* v_fst_3483_; lean_object* v_snd_3484_; uint8_t v___x_3485_; 
v_pivot_3481_ = lean_array_fget(v___y_3480_, v_hi_3478_);
lean_inc_n(v_lo_3477_, 2);
v___x_3482_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(v_hi_3478_, v_pivot_3481_, v___y_3480_, v_lo_3477_, v_lo_3477_);
lean_dec(v_pivot_3481_);
v_fst_3483_ = lean_ctor_get(v___x_3482_, 0);
lean_inc(v_fst_3483_);
v_snd_3484_ = lean_ctor_get(v___x_3482_, 1);
lean_inc(v_snd_3484_);
lean_dec_ref(v___x_3482_);
v___x_3485_ = lean_nat_dec_le(v_hi_3478_, v_fst_3483_);
if (v___x_3485_ == 0)
{
lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; 
v___x_3486_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v_n_3475_, v_snd_3484_, v_lo_3477_, v_fst_3483_);
v___x_3487_ = lean_unsigned_to_nat(1u);
v___x_3488_ = lean_nat_add(v_fst_3483_, v___x_3487_);
lean_dec(v_fst_3483_);
v_as_3476_ = v___x_3486_;
v_lo_3477_ = v___x_3488_;
goto _start;
}
else
{
lean_dec(v_fst_3483_);
lean_dec(v_lo_3477_);
return v_snd_3484_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg___boxed(lean_object* v_n_3510_, lean_object* v_as_3511_, lean_object* v_lo_3512_, lean_object* v_hi_3513_){
_start:
{
lean_object* v_res_3514_; 
v_res_3514_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v_n_3510_, v_as_3511_, v_lo_3512_, v_hi_3513_);
lean_dec(v_hi_3513_);
lean_dec(v_n_3510_);
return v_res_3514_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(lean_object* v_as_3515_, size_t v_sz_3516_, size_t v_i_3517_, lean_object* v_b_3518_){
_start:
{
uint8_t v___x_3519_; 
v___x_3519_ = lean_usize_dec_lt(v_i_3517_, v_sz_3516_);
if (v___x_3519_ == 0)
{
return v_b_3518_;
}
else
{
lean_object* v_a_3520_; lean_object* v_snd_3521_; lean_object* v_children_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; size_t v___x_3525_; size_t v___x_3526_; 
v_a_3520_ = lean_array_uget_borrowed(v_as_3515_, v_i_3517_);
v_snd_3521_ = lean_ctor_get(v_a_3520_, 1);
v_children_3522_ = lean_ctor_get(v_snd_3521_, 2);
v___x_3523_ = lean_array_get_size(v_children_3522_);
v___x_3524_ = lean_nat_add(v_b_3518_, v___x_3523_);
lean_dec(v_b_3518_);
v___x_3525_ = ((size_t)1ULL);
v___x_3526_ = lean_usize_add(v_i_3517_, v___x_3525_);
v_i_3517_ = v___x_3526_;
v_b_3518_ = v___x_3524_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg___boxed(lean_object* v_as_3528_, lean_object* v_sz_3529_, lean_object* v_i_3530_, lean_object* v_b_3531_){
_start:
{
size_t v_sz_boxed_3532_; size_t v_i_boxed_3533_; lean_object* v_res_3534_; 
v_sz_boxed_3532_ = lean_unbox_usize(v_sz_3529_);
lean_dec(v_sz_3529_);
v_i_boxed_3533_ = lean_unbox_usize(v_i_3530_);
lean_dec(v_i_3530_);
v_res_3534_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_as_3528_, v_sz_boxed_3532_, v_i_boxed_3533_, v_b_3531_);
lean_dec_ref(v_as_3528_);
return v_res_3534_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(lean_object* v___y_3535_, lean_object* v_covered_3536_, lean_object* v_a_3537_){
_start:
{
lean_object* v_fst_3538_; lean_object* v_snd_3539_; lean_object* v___x_3541_; uint8_t v_isShared_3542_; uint8_t v_isSharedCheck_3595_; 
v_fst_3538_ = lean_ctor_get(v_a_3537_, 0);
v_snd_3539_ = lean_ctor_get(v_a_3537_, 1);
v_isSharedCheck_3595_ = !lean_is_exclusive(v_a_3537_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3541_ = v_a_3537_;
v_isShared_3542_ = v_isSharedCheck_3595_;
goto v_resetjp_3540_;
}
else
{
lean_inc(v_snd_3539_);
lean_inc(v_fst_3538_);
lean_dec(v_a_3537_);
v___x_3541_ = lean_box(0);
v_isShared_3542_ = v_isSharedCheck_3595_;
goto v_resetjp_3540_;
}
v_resetjp_3540_:
{
lean_object* v___x_3543_; uint8_t v___x_3544_; 
v___x_3543_ = lean_array_get_size(v___y_3535_);
v___x_3544_ = lean_nat_dec_lt(v_snd_3539_, v___x_3543_);
if (v___x_3544_ == 0)
{
lean_object* v___x_3546_; 
if (v_isShared_3542_ == 0)
{
v___x_3546_ = v___x_3541_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v_fst_3538_);
lean_ctor_set(v_reuseFailAlloc_3547_, 1, v_snd_3539_);
v___x_3546_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
return v___x_3546_;
}
}
else
{
lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v_fst_3550_; lean_object* v_snd_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3594_; 
lean_del_object(v___x_3541_);
v___x_3548_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v___x_3549_ = lean_array_get(v___x_3548_, v___y_3535_, v_snd_3539_);
v_fst_3550_ = lean_ctor_get(v___x_3549_, 0);
v_snd_3551_ = lean_ctor_get(v___x_3549_, 1);
v_isSharedCheck_3594_ = !lean_is_exclusive(v___x_3549_);
if (v_isSharedCheck_3594_ == 0)
{
v___x_3553_ = v___x_3549_;
v_isShared_3554_ = v_isSharedCheck_3594_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_snd_3551_);
lean_inc(v_fst_3550_);
lean_dec(v___x_3549_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3594_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v___x_3555_; lean_object* v___x_3556_; uint8_t v___x_3562_; 
v___x_3555_ = lean_unsigned_to_nat(1u);
v___x_3556_ = lean_nat_add(v_snd_3539_, v___x_3555_);
lean_dec(v_snd_3539_);
v___x_3562_ = lean_nat_dec_eq(v___x_3556_, v___x_3543_);
if (v___x_3562_ == 0)
{
lean_object* v___x_3563_; lean_object* v_fst_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3592_; 
v___x_3563_ = lean_array_get(v___x_3548_, v___y_3535_, v___x_3556_);
v_fst_3564_ = lean_ctor_get(v___x_3563_, 0);
v_isSharedCheck_3592_ = !lean_is_exclusive(v___x_3563_);
if (v_isSharedCheck_3592_ == 0)
{
lean_object* v_unused_3593_; 
v_unused_3593_ = lean_ctor_get(v___x_3563_, 1);
lean_dec(v_unused_3593_);
v___x_3566_ = v___x_3563_;
v_isShared_3567_ = v_isSharedCheck_3592_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_fst_3564_);
lean_dec(v___x_3563_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3592_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
uint64_t v___x_3568_; uint64_t v___x_3569_; uint8_t v___x_3570_; 
v___x_3568_ = lean_unbox_uint64(v_fst_3564_);
lean_dec(v_fst_3564_);
v___x_3569_ = lean_unbox_uint64(v_fst_3550_);
v___x_3570_ = lean_uint64_dec_eq(v___x_3568_, v___x_3569_);
if (v___x_3570_ == 0)
{
lean_del_object(v___x_3566_);
lean_dec(v_snd_3551_);
lean_dec(v_fst_3550_);
goto v___jp_3557_;
}
else
{
lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3575_; 
lean_del_object(v___x_3553_);
v___x_3571_ = lean_mk_empty_array_with_capacity(v___x_3555_);
lean_inc_ref(v___x_3571_);
v___x_3572_ = lean_array_push(v___x_3571_, v_snd_3551_);
v___x_3573_ = lean_array_push(v___x_3571_, v___x_3572_);
lean_inc(v___x_3556_);
if (v_isShared_3567_ == 0)
{
lean_ctor_set(v___x_3566_, 1, v___x_3573_);
lean_ctor_set(v___x_3566_, 0, v___x_3556_);
v___x_3575_ = v___x_3566_;
goto v_reusejp_3574_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v___x_3556_);
lean_ctor_set(v_reuseFailAlloc_3591_, 1, v___x_3573_);
v___x_3575_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3574_;
}
v_reusejp_3574_:
{
uint64_t v___x_3576_; lean_object* v___x_3577_; lean_object* v_fst_3578_; lean_object* v_snd_3579_; lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3590_; 
v___x_3576_ = lean_unbox_uint64(v_fst_3550_);
lean_dec(v_fst_3550_);
v___x_3577_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_3543_, v___y_3535_, v___x_3576_, v___x_3556_, v___x_3575_);
lean_dec(v___x_3556_);
v_fst_3578_ = lean_ctor_get(v___x_3577_, 0);
v_snd_3579_ = lean_ctor_get(v___x_3577_, 1);
v_isSharedCheck_3590_ = !lean_is_exclusive(v___x_3577_);
if (v_isSharedCheck_3590_ == 0)
{
v___x_3581_ = v___x_3577_;
v_isShared_3582_ = v_isSharedCheck_3590_;
goto v_resetjp_3580_;
}
else
{
lean_inc(v_snd_3579_);
lean_inc(v_fst_3578_);
lean_dec(v___x_3577_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3590_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
size_t v___x_3583_; size_t v_sz_3584_; lean_object* v___x_3585_; lean_object* v___x_3587_; 
v___x_3583_ = ((size_t)0ULL);
v_sz_3584_ = lean_array_size(v_snd_3579_);
v___x_3585_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_covered_3536_, v_snd_3579_, v_sz_3584_, v___x_3583_, v_fst_3538_);
lean_dec(v_snd_3579_);
if (v_isShared_3582_ == 0)
{
lean_ctor_set(v___x_3581_, 1, v_fst_3578_);
lean_ctor_set(v___x_3581_, 0, v___x_3585_);
v___x_3587_ = v___x_3581_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v___x_3585_);
lean_ctor_set(v_reuseFailAlloc_3589_, 1, v_fst_3578_);
v___x_3587_ = v_reuseFailAlloc_3589_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
v_a_3537_ = v___x_3587_;
goto _start;
}
}
}
}
}
}
else
{
lean_dec(v_snd_3551_);
lean_dec(v_fst_3550_);
goto v___jp_3557_;
}
v___jp_3557_:
{
lean_object* v___x_3559_; 
if (v_isShared_3554_ == 0)
{
lean_ctor_set(v___x_3553_, 1, v___x_3556_);
lean_ctor_set(v___x_3553_, 0, v_fst_3538_);
v___x_3559_ = v___x_3553_;
goto v_reusejp_3558_;
}
else
{
lean_object* v_reuseFailAlloc_3561_; 
v_reuseFailAlloc_3561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3561_, 0, v_fst_3538_);
lean_ctor_set(v_reuseFailAlloc_3561_, 1, v___x_3556_);
v___x_3559_ = v_reuseFailAlloc_3561_;
goto v_reusejp_3558_;
}
v_reusejp_3558_:
{
v_a_3537_ = v___x_3559_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(lean_object* v_covered_3596_, lean_object* v_key_3597_, lean_object* v_cands_3598_, lean_object* v_acc_3599_){
_start:
{
lean_object* v___y_3601_; lean_object* v___y_3602_; lean_object* v___y_3603_; lean_object* v___y_3608_; lean_object* v___y_3609_; lean_object* v___y_3610_; lean_object* v___y_3611_; lean_object* v___y_3612_; lean_object* v___y_3613_; lean_object* v___y_3616_; lean_object* v___y_3617_; lean_object* v___y_3618_; lean_object* v___y_3619_; lean_object* v___y_3620_; lean_object* v___y_3621_; lean_object* v___y_3624_; lean_object* v_acc_3625_; lean_object* v___x_3645_; lean_object* v___x_3646_; uint8_t v___x_3647_; 
v___x_3645_ = lean_array_get_size(v_covered_3596_);
v___x_3646_ = lean_unsigned_to_nat(0u);
v___x_3647_ = lean_nat_dec_eq(v___x_3645_, v___x_3646_);
if (v___x_3647_ == 0)
{
uint64_t v_common_3648_; size_t v_sz_3649_; size_t v___x_3650_; uint64_t v___x_3651_; uint64_t v___x_3652_; uint8_t v___x_3653_; 
v_common_3648_ = 18446744073709551615ULL;
v_sz_3649_ = lean_array_size(v_cands_3598_);
v___x_3650_ = ((size_t)0ULL);
v___x_3651_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(v_covered_3596_, v_cands_3598_, v_sz_3649_, v___x_3650_, v_common_3648_);
v___x_3652_ = 0ULL;
v___x_3653_ = lean_uint64_dec_eq(v___x_3651_, v___x_3652_);
if (v___x_3653_ == 0)
{
lean_dec(v_key_3597_);
return v_acc_3599_;
}
else
{
goto v___jp_3636_;
}
}
else
{
goto v___jp_3636_;
}
v___jp_3600_:
{
lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v_fst_3606_; 
v___x_3604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3604_, 0, v___y_3601_);
lean_ctor_set(v___x_3604_, 1, v___y_3602_);
v___x_3605_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v___y_3603_, v_covered_3596_, v___x_3604_);
lean_dec_ref(v___y_3603_);
v_fst_3606_ = lean_ctor_get(v___x_3605_, 0);
lean_inc(v_fst_3606_);
lean_dec_ref(v___x_3605_);
return v_fst_3606_;
}
v___jp_3607_:
{
lean_object* v___x_3614_; 
v___x_3614_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v___y_3611_, v___y_3612_, v___y_3609_, v___y_3613_);
lean_dec(v___y_3613_);
lean_dec(v___y_3611_);
v___y_3601_ = v___y_3608_;
v___y_3602_ = v___y_3610_;
v___y_3603_ = v___x_3614_;
goto v___jp_3600_;
}
v___jp_3615_:
{
uint8_t v___x_3622_; 
v___x_3622_ = lean_nat_dec_le(v___y_3621_, v___y_3619_);
if (v___x_3622_ == 0)
{
lean_dec(v___y_3619_);
lean_inc(v___y_3621_);
v___y_3608_ = v___y_3616_;
v___y_3609_ = v___y_3621_;
v___y_3610_ = v___y_3617_;
v___y_3611_ = v___y_3618_;
v___y_3612_ = v___y_3620_;
v___y_3613_ = v___y_3621_;
goto v___jp_3607_;
}
else
{
v___y_3608_ = v___y_3616_;
v___y_3609_ = v___y_3621_;
v___y_3610_ = v___y_3617_;
v___y_3611_ = v___y_3618_;
v___y_3612_ = v___y_3620_;
v___y_3613_ = v___y_3619_;
goto v___jp_3607_;
}
}
v___jp_3623_:
{
size_t v_sz_3626_; size_t v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; uint8_t v___x_3632_; 
v_sz_3626_ = lean_array_size(v_cands_3598_);
v___x_3627_ = ((size_t)0ULL);
lean_inc(v___y_3624_);
v___x_3628_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_cands_3598_, v_sz_3626_, v___x_3627_, v___y_3624_);
v___x_3629_ = lean_mk_empty_array_with_capacity(v___x_3628_);
lean_dec(v___x_3628_);
v___x_3630_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_cands_3598_, v_sz_3626_, v___x_3627_, v___x_3629_);
v___x_3631_ = lean_array_get_size(v___x_3630_);
v___x_3632_ = lean_nat_dec_eq(v___x_3631_, v___y_3624_);
if (v___x_3632_ == 0)
{
lean_object* v___x_3633_; lean_object* v___x_3634_; uint8_t v___x_3635_; 
v___x_3633_ = lean_unsigned_to_nat(1u);
v___x_3634_ = lean_nat_sub(v___x_3631_, v___x_3633_);
v___x_3635_ = lean_nat_dec_le(v___y_3624_, v___x_3634_);
if (v___x_3635_ == 0)
{
lean_inc(v___x_3634_);
v___y_3616_ = v_acc_3625_;
v___y_3617_ = v___y_3624_;
v___y_3618_ = v___x_3631_;
v___y_3619_ = v___x_3634_;
v___y_3620_ = v___x_3630_;
v___y_3621_ = v___x_3634_;
goto v___jp_3615_;
}
else
{
lean_inc(v___y_3624_);
v___y_3616_ = v_acc_3625_;
v___y_3617_ = v___y_3624_;
v___y_3618_ = v___x_3631_;
v___y_3619_ = v___x_3634_;
v___y_3620_ = v___x_3630_;
v___y_3621_ = v___y_3624_;
goto v___jp_3615_;
}
}
else
{
v___y_3601_ = v_acc_3625_;
v___y_3602_ = v___y_3624_;
v___y_3603_ = v___x_3630_;
goto v___jp_3600_;
}
}
v___jp_3636_:
{
lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v_entries_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; uint8_t v___x_3642_; 
v___x_3637_ = lean_unsigned_to_nat(0u);
v___x_3638_ = lean_array_get_size(v_cands_3598_);
v_entries_3639_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_cands_3598_, v___x_3637_, v___x_3638_);
v___x_3640_ = lean_unsigned_to_nat(1u);
v___x_3641_ = lean_array_get_size(v_entries_3639_);
v___x_3642_ = lean_nat_dec_lt(v___x_3640_, v___x_3641_);
if (v___x_3642_ == 0)
{
lean_dec_ref(v_entries_3639_);
lean_dec(v_key_3597_);
v___y_3624_ = v___x_3637_;
v_acc_3625_ = v_acc_3599_;
goto v___jp_3623_;
}
else
{
lean_object* v___x_3643_; lean_object* v_acc_3644_; 
v___x_3643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3643_, 0, v_key_3597_);
lean_ctor_set(v___x_3643_, 1, v_entries_3639_);
v_acc_3644_ = lean_array_push(v_acc_3599_, v___x_3643_);
v___y_3624_ = v___x_3637_;
v_acc_3625_ = v_acc_3644_;
goto v___jp_3623_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(lean_object* v_covered_3654_, lean_object* v_as_3655_, size_t v_sz_3656_, size_t v_i_3657_, lean_object* v_b_3658_){
_start:
{
lean_object* v_a_3660_; uint8_t v___x_3664_; 
v___x_3664_ = lean_usize_dec_lt(v_i_3657_, v_sz_3656_);
if (v___x_3664_ == 0)
{
return v_b_3658_;
}
else
{
lean_object* v___x_3665_; lean_object* v_a_3666_; lean_object* v___x_3667_; uint8_t v___x_3668_; 
v___x_3665_ = lean_unsigned_to_nat(1u);
v_a_3666_ = lean_array_uget_borrowed(v_as_3655_, v_i_3657_);
v___x_3667_ = lean_array_get_size(v_a_3666_);
v___x_3668_ = lean_nat_dec_eq(v___x_3667_, v___x_3665_);
if (v___x_3668_ == 0)
{
lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v_snd_3672_; lean_object* v_key_3673_; lean_object* v___x_3674_; 
v___x_3669_ = lean_unsigned_to_nat(0u);
v___x_3670_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3671_ = lean_array_get_borrowed(v___x_3670_, v_a_3666_, v___x_3669_);
v_snd_3672_ = lean_ctor_get(v___x_3671_, 1);
v_key_3673_ = lean_ctor_get(v_snd_3672_, 0);
lean_inc(v_key_3673_);
v___x_3674_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3654_, v_key_3673_, v_a_3666_, v_b_3658_);
v_a_3660_ = v___x_3674_;
goto v___jp_3659_;
}
else
{
v_a_3660_ = v_b_3658_;
goto v___jp_3659_;
}
}
v___jp_3659_:
{
size_t v___x_3661_; size_t v___x_3662_; 
v___x_3661_ = ((size_t)1ULL);
v___x_3662_ = lean_usize_add(v_i_3657_, v___x_3661_);
v_i_3657_ = v___x_3662_;
v_b_3658_ = v_a_3660_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___boxed(lean_object* v_covered_3675_, lean_object* v_as_3676_, lean_object* v_sz_3677_, lean_object* v_i_3678_, lean_object* v_b_3679_){
_start:
{
size_t v_sz_boxed_3680_; size_t v_i_boxed_3681_; lean_object* v_res_3682_; 
v_sz_boxed_3680_ = lean_unbox_usize(v_sz_3677_);
lean_dec(v_sz_3677_);
v_i_boxed_3681_ = lean_unbox_usize(v_i_3678_);
lean_dec(v_i_3678_);
v_res_3682_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_covered_3675_, v_as_3676_, v_sz_boxed_3680_, v_i_boxed_3681_, v_b_3679_);
lean_dec_ref(v_as_3676_);
lean_dec_ref(v_covered_3675_);
return v_res_3682_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed(lean_object* v___y_3683_, lean_object* v_covered_3684_, lean_object* v_a_3685_){
_start:
{
lean_object* v_res_3686_; 
v_res_3686_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v___y_3683_, v_covered_3684_, v_a_3685_);
lean_dec_ref(v_covered_3684_);
lean_dec_ref(v___y_3683_);
return v_res_3686_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg___boxed(lean_object* v_covered_3687_, lean_object* v_key_3688_, lean_object* v_cands_3689_, lean_object* v_acc_3690_){
_start:
{
lean_object* v_res_3691_; 
v_res_3691_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3687_, v_key_3688_, v_cands_3689_, v_acc_3690_);
lean_dec_ref(v_cands_3689_);
lean_dec_ref(v_covered_3687_);
return v_res_3691_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(lean_object* v_00_u03b1_3692_, lean_object* v_covered_3693_, lean_object* v_key_3694_, lean_object* v_cands_3695_, lean_object* v_acc_3696_){
_start:
{
lean_object* v___x_3697_; 
v___x_3697_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3693_, v_key_3694_, v_cands_3695_, v_acc_3696_);
return v___x_3697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___boxed(lean_object* v_00_u03b1_3698_, lean_object* v_covered_3699_, lean_object* v_key_3700_, lean_object* v_cands_3701_, lean_object* v_acc_3702_){
_start:
{
lean_object* v_res_3703_; 
v_res_3703_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(v_00_u03b1_3698_, v_covered_3699_, v_key_3700_, v_cands_3701_, v_acc_3702_);
lean_dec_ref(v_cands_3701_);
lean_dec_ref(v_covered_3699_);
return v_res_3703_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(lean_object* v_00_u03b1_3704_, lean_object* v_fst_3705_, lean_object* v_as_3706_, size_t v_sz_3707_, size_t v_i_3708_, lean_object* v_b_3709_){
_start:
{
lean_object* v___x_3710_; 
v___x_3710_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_fst_3705_, v_as_3706_, v_sz_3707_, v_i_3708_, v_b_3709_);
return v___x_3710_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___boxed(lean_object* v_00_u03b1_3711_, lean_object* v_fst_3712_, lean_object* v_as_3713_, lean_object* v_sz_3714_, lean_object* v_i_3715_, lean_object* v_b_3716_){
_start:
{
size_t v_sz_boxed_3717_; size_t v_i_boxed_3718_; lean_object* v_res_3719_; 
v_sz_boxed_3717_ = lean_unbox_usize(v_sz_3714_);
lean_dec(v_sz_3714_);
v_i_boxed_3718_ = lean_unbox_usize(v_i_3715_);
lean_dec(v_i_3715_);
v_res_3719_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(v_00_u03b1_3711_, v_fst_3712_, v_as_3713_, v_sz_boxed_3717_, v_i_boxed_3718_, v_b_3716_);
lean_dec_ref(v_as_3713_);
return v_res_3719_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(lean_object* v_00_u03b1_3720_, lean_object* v_as_3721_, size_t v_sz_3722_, size_t v_i_3723_, lean_object* v_b_3724_){
_start:
{
lean_object* v___x_3725_; 
v___x_3725_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_as_3721_, v_sz_3722_, v_i_3723_, v_b_3724_);
return v___x_3725_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___boxed(lean_object* v_00_u03b1_3726_, lean_object* v_as_3727_, lean_object* v_sz_3728_, lean_object* v_i_3729_, lean_object* v_b_3730_){
_start:
{
size_t v_sz_boxed_3731_; size_t v_i_boxed_3732_; lean_object* v_res_3733_; 
v_sz_boxed_3731_ = lean_unbox_usize(v_sz_3728_);
lean_dec(v_sz_3728_);
v_i_boxed_3732_ = lean_unbox_usize(v_i_3729_);
lean_dec(v_i_3729_);
v_res_3733_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(v_00_u03b1_3726_, v_as_3727_, v_sz_boxed_3731_, v_i_boxed_3732_, v_b_3730_);
lean_dec_ref(v_as_3727_);
return v_res_3733_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(lean_object* v_00_u03b1_3734_, lean_object* v_as_3735_, size_t v_sz_3736_, size_t v_i_3737_, lean_object* v_b_3738_){
_start:
{
lean_object* v___x_3739_; 
v___x_3739_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_as_3735_, v_sz_3736_, v_i_3737_, v_b_3738_);
return v___x_3739_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___boxed(lean_object* v_00_u03b1_3740_, lean_object* v_as_3741_, lean_object* v_sz_3742_, lean_object* v_i_3743_, lean_object* v_b_3744_){
_start:
{
size_t v_sz_boxed_3745_; size_t v_i_boxed_3746_; lean_object* v_res_3747_; 
v_sz_boxed_3745_ = lean_unbox_usize(v_sz_3742_);
lean_dec(v_sz_3742_);
v_i_boxed_3746_ = lean_unbox_usize(v_i_3743_);
lean_dec(v_i_3743_);
v_res_3747_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(v_00_u03b1_3740_, v_as_3741_, v_sz_boxed_3745_, v_i_boxed_3746_, v_b_3744_);
lean_dec_ref(v_as_3741_);
return v_res_3747_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(lean_object* v_00_u03b1_3748_, lean_object* v_snd_3749_, uint64_t v___x_3750_, uint64_t v_fst_3751_, lean_object* v___x_3752_, lean_object* v___x_3753_, lean_object* v_as_3754_, lean_object* v_j_3755_){
_start:
{
lean_object* v___x_3756_; 
v___x_3756_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_snd_3749_, v___x_3750_, v_fst_3751_, v___x_3752_, v___x_3753_, v_as_3754_, v_j_3755_);
return v___x_3756_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___boxed(lean_object* v_00_u03b1_3757_, lean_object* v_snd_3758_, lean_object* v___x_3759_, lean_object* v_fst_3760_, lean_object* v___x_3761_, lean_object* v___x_3762_, lean_object* v_as_3763_, lean_object* v_j_3764_){
_start:
{
uint64_t v___x_3612__boxed_3765_; uint64_t v_fst_3613__boxed_3766_; lean_object* v_res_3767_; 
v___x_3612__boxed_3765_ = lean_unbox_uint64(v___x_3759_);
lean_dec_ref(v___x_3759_);
v_fst_3613__boxed_3766_ = lean_unbox_uint64(v_fst_3760_);
lean_dec_ref(v_fst_3760_);
v_res_3767_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(v_00_u03b1_3757_, v_snd_3758_, v___x_3612__boxed_3765_, v_fst_3613__boxed_3766_, v___x_3761_, v___x_3762_, v_as_3763_, v_j_3764_);
lean_dec_ref(v_as_3763_);
lean_dec(v___x_3762_);
lean_dec(v___x_3761_);
lean_dec_ref(v_snd_3758_);
return v_res_3767_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(lean_object* v_00_u03b1_3768_, lean_object* v___x_3769_, lean_object* v___y_3770_, uint64_t v_fst_3771_, lean_object* v___x_3772_, lean_object* v_inst_3773_, lean_object* v_a_3774_){
_start:
{
lean_object* v___x_3775_; 
v___x_3775_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_3769_, v___y_3770_, v_fst_3771_, v___x_3772_, v_a_3774_);
return v___x_3775_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___boxed(lean_object* v_00_u03b1_3776_, lean_object* v___x_3777_, lean_object* v___y_3778_, lean_object* v_fst_3779_, lean_object* v___x_3780_, lean_object* v_inst_3781_, lean_object* v_a_3782_){
_start:
{
uint64_t v_fst_3630__boxed_3783_; lean_object* v_res_3784_; 
v_fst_3630__boxed_3783_ = lean_unbox_uint64(v_fst_3779_);
lean_dec_ref(v_fst_3779_);
v_res_3784_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(v_00_u03b1_3776_, v___x_3777_, v___y_3778_, v_fst_3630__boxed_3783_, v___x_3780_, v_inst_3781_, v_a_3782_);
lean_dec(v___x_3780_);
lean_dec_ref(v___y_3778_);
lean_dec(v___x_3777_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(lean_object* v_00_u03b1_3785_, lean_object* v_covered_3786_, lean_object* v_as_3787_, size_t v_sz_3788_, size_t v_i_3789_, lean_object* v_b_3790_){
_start:
{
lean_object* v___x_3791_; 
v___x_3791_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_covered_3786_, v_as_3787_, v_sz_3788_, v_i_3789_, v_b_3790_);
return v___x_3791_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___boxed(lean_object* v_00_u03b1_3792_, lean_object* v_covered_3793_, lean_object* v_as_3794_, lean_object* v_sz_3795_, lean_object* v_i_3796_, lean_object* v_b_3797_){
_start:
{
size_t v_sz_boxed_3798_; size_t v_i_boxed_3799_; lean_object* v_res_3800_; 
v_sz_boxed_3798_ = lean_unbox_usize(v_sz_3795_);
lean_dec(v_sz_3795_);
v_i_boxed_3799_ = lean_unbox_usize(v_i_3796_);
lean_dec(v_i_3796_);
v_res_3800_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(v_00_u03b1_3792_, v_covered_3793_, v_as_3794_, v_sz_boxed_3798_, v_i_boxed_3799_, v_b_3797_);
lean_dec_ref(v_as_3794_);
lean_dec_ref(v_covered_3793_);
return v_res_3800_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(lean_object* v_00_u03b1_3801_, lean_object* v___y_3802_, lean_object* v_covered_3803_, lean_object* v_inst_3804_, lean_object* v_a_3805_){
_start:
{
lean_object* v___x_3806_; 
v___x_3806_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v___y_3802_, v_covered_3803_, v_a_3805_);
return v___x_3806_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___boxed(lean_object* v_00_u03b1_3807_, lean_object* v___y_3808_, lean_object* v_covered_3809_, lean_object* v_inst_3810_, lean_object* v_a_3811_){
_start:
{
lean_object* v_res_3812_; 
v_res_3812_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(v_00_u03b1_3807_, v___y_3808_, v_covered_3809_, v_inst_3810_, v_a_3811_);
lean_dec_ref(v_covered_3809_);
lean_dec_ref(v___y_3808_);
return v_res_3812_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7(lean_object* v_00_u03b1_3813_, lean_object* v_n_3814_, lean_object* v_as_3815_, lean_object* v_lo_3816_, lean_object* v_hi_3817_, lean_object* v_w_3818_, lean_object* v_hlo_3819_, lean_object* v_hhi_3820_){
_start:
{
lean_object* v___x_3821_; 
v___x_3821_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v_n_3814_, v_as_3815_, v_lo_3816_, v_hi_3817_);
return v___x_3821_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___boxed(lean_object* v_00_u03b1_3822_, lean_object* v_n_3823_, lean_object* v_as_3824_, lean_object* v_lo_3825_, lean_object* v_hi_3826_, lean_object* v_w_3827_, lean_object* v_hlo_3828_, lean_object* v_hhi_3829_){
_start:
{
lean_object* v_res_3830_; 
v_res_3830_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7(v_00_u03b1_3822_, v_n_3823_, v_as_3824_, v_lo_3825_, v_hi_3826_, v_w_3827_, v_hlo_3828_, v_hhi_3829_);
lean_dec(v_hi_3826_);
lean_dec(v_n_3823_);
return v_res_3830_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8(lean_object* v_00_u03b1_3831_, lean_object* v_as_3832_, lean_object* v_start_3833_, lean_object* v_stop_3834_){
_start:
{
lean_object* v___x_3835_; 
v___x_3835_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_as_3832_, v_start_3833_, v_stop_3834_);
return v___x_3835_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___boxed(lean_object* v_00_u03b1_3836_, lean_object* v_as_3837_, lean_object* v_start_3838_, lean_object* v_stop_3839_){
_start:
{
lean_object* v_res_3840_; 
v_res_3840_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8(v_00_u03b1_3836_, v_as_3837_, v_start_3838_, v_stop_3839_);
lean_dec(v_stop_3839_);
lean_dec(v_start_3838_);
lean_dec_ref(v_as_3837_);
return v_res_3840_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9(lean_object* v_00_u03b1_3841_, lean_object* v_covered_3842_, lean_object* v_as_3843_, size_t v_sz_3844_, size_t v_i_3845_, uint64_t v_b_3846_){
_start:
{
uint64_t v___x_3847_; 
v___x_3847_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(v_covered_3842_, v_as_3843_, v_sz_3844_, v_i_3845_, v_b_3846_);
return v___x_3847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___boxed(lean_object* v_00_u03b1_3848_, lean_object* v_covered_3849_, lean_object* v_as_3850_, lean_object* v_sz_3851_, lean_object* v_i_3852_, lean_object* v_b_3853_){
_start:
{
size_t v_sz_boxed_3854_; size_t v_i_boxed_3855_; uint64_t v_b_boxed_3856_; uint64_t v_res_3857_; lean_object* v_r_3858_; 
v_sz_boxed_3854_ = lean_unbox_usize(v_sz_3851_);
lean_dec(v_sz_3851_);
v_i_boxed_3855_ = lean_unbox_usize(v_i_3852_);
lean_dec(v_i_3852_);
v_b_boxed_3856_ = lean_unbox_uint64(v_b_3853_);
lean_dec_ref(v_b_3853_);
v_res_3857_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9(v_00_u03b1_3848_, v_covered_3849_, v_as_3850_, v_sz_boxed_3854_, v_i_boxed_3855_, v_b_boxed_3856_);
lean_dec_ref(v_as_3850_);
lean_dec_ref(v_covered_3849_);
v_r_3858_ = lean_box_uint64(v_res_3857_);
return v_r_3858_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7(lean_object* v_00_u03b1_3859_, lean_object* v_n_3860_, lean_object* v_lo_3861_, lean_object* v_hi_3862_, lean_object* v_hhi_3863_, lean_object* v_pivot_3864_, lean_object* v_as_3865_, lean_object* v_i_3866_, lean_object* v_k_3867_, lean_object* v_ilo_3868_, lean_object* v_ik_3869_, lean_object* v_w_3870_){
_start:
{
lean_object* v___x_3871_; 
v___x_3871_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(v_hi_3862_, v_pivot_3864_, v_as_3865_, v_i_3866_, v_k_3867_);
return v___x_3871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___boxed(lean_object* v_00_u03b1_3872_, lean_object* v_n_3873_, lean_object* v_lo_3874_, lean_object* v_hi_3875_, lean_object* v_hhi_3876_, lean_object* v_pivot_3877_, lean_object* v_as_3878_, lean_object* v_i_3879_, lean_object* v_k_3880_, lean_object* v_ilo_3881_, lean_object* v_ik_3882_, lean_object* v_w_3883_){
_start:
{
lean_object* v_res_3884_; 
v_res_3884_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7(v_00_u03b1_3872_, v_n_3873_, v_lo_3874_, v_hi_3875_, v_hhi_3876_, v_pivot_3877_, v_as_3878_, v_i_3879_, v_k_3880_, v_ilo_3881_, v_ik_3882_, v_w_3883_);
lean_dec_ref(v_pivot_3877_);
lean_dec(v_hi_3875_);
lean_dec(v_lo_3874_);
lean_dec(v_n_3873_);
return v_res_3884_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9(lean_object* v_00_u03b1_3885_, lean_object* v_as_3886_, size_t v_i_3887_, size_t v_stop_3888_, lean_object* v_b_3889_){
_start:
{
lean_object* v___x_3890_; 
v___x_3890_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(v_as_3886_, v_i_3887_, v_stop_3888_, v_b_3889_);
return v___x_3890_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___boxed(lean_object* v_00_u03b1_3891_, lean_object* v_as_3892_, lean_object* v_i_3893_, lean_object* v_stop_3894_, lean_object* v_b_3895_){
_start:
{
size_t v_i_boxed_3896_; size_t v_stop_boxed_3897_; lean_object* v_res_3898_; 
v_i_boxed_3896_ = lean_unbox_usize(v_i_3893_);
lean_dec(v_i_3893_);
v_stop_boxed_3897_ = lean_unbox_usize(v_stop_3894_);
lean_dec(v_stop_3894_);
v_res_3898_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9(v_00_u03b1_3891_, v_as_3892_, v_i_boxed_3896_, v_stop_boxed_3897_, v_b_3895_);
lean_dec_ref(v_as_3892_);
return v_res_3898_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg(lean_object* v_trees_3901_, lean_object* v_covered_3902_){
_start:
{
lean_object* v___x_3903_; lean_object* v___x_3904_; uint8_t v___x_3905_; 
v___x_3903_ = lean_array_get_size(v_trees_3901_);
v___x_3904_ = lean_unsigned_to_nat(2u);
v___x_3905_ = lean_nat_dec_lt(v___x_3903_, v___x_3904_);
if (v___x_3905_ == 0)
{
lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; 
v___x_3906_ = lean_box(0);
v___x_3907_ = ((lean_object*)(l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0));
v___x_3908_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3902_, v___x_3906_, v_trees_3901_, v___x_3907_);
return v___x_3908_;
}
else
{
lean_object* v___x_3909_; 
v___x_3909_ = ((lean_object*)(l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0));
return v___x_3909_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg___boxed(lean_object* v_trees_3910_, lean_object* v_covered_3911_){
_start:
{
lean_object* v_res_3912_; 
v_res_3912_ = l_Lean_ImportedConsts_collectDuplicates___redArg(v_trees_3910_, v_covered_3911_);
lean_dec_ref(v_covered_3911_);
lean_dec_ref(v_trees_3910_);
return v_res_3912_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates(lean_object* v_00_u03b1_3913_, lean_object* v_trees_3914_, lean_object* v_covered_3915_){
_start:
{
lean_object* v___x_3916_; 
v___x_3916_ = l_Lean_ImportedConsts_collectDuplicates___redArg(v_trees_3914_, v_covered_3915_);
return v___x_3916_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___boxed(lean_object* v_00_u03b1_3917_, lean_object* v_trees_3918_, lean_object* v_covered_3919_){
_start:
{
lean_object* v_res_3920_; 
v_res_3920_ = l_Lean_ImportedConsts_collectDuplicates(v_00_u03b1_3917_, v_trees_3918_, v_covered_3919_);
lean_dec_ref(v_covered_3919_);
lean_dec_ref(v_trees_3918_);
return v_res_3920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1(lean_object* v_cands_3921_, lean_object* v___x_3922_, lean_object* v_resolve_3923_, lean_object* v_x_3924_){
_start:
{
lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; 
v___x_3925_ = lean_unsigned_to_nat(0u);
v___x_3926_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_cands_3921_, v___x_3925_, v___x_3922_);
v___x_3927_ = lean_apply_1(v_resolve_3923_, v___x_3926_);
return v___x_3927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1___boxed(lean_object* v_cands_3928_, lean_object* v___x_3929_, lean_object* v_resolve_3930_, lean_object* v_x_3931_){
_start:
{
lean_object* v_res_3932_; 
v_res_3932_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1(v_cands_3928_, v___x_3929_, v_resolve_3930_, v_x_3931_);
lean_dec(v___x_3929_);
lean_dec_ref(v_cands_3928_);
return v_res_3932_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed(lean_object* v_resolve_3936_, lean_object* v_cands_3937_, lean_object* v_x_3938_){
_start:
{
lean_object* v_res_3939_; 
v_res_3939_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(v_resolve_3936_, v_cands_3937_, v_x_3938_);
lean_dec_ref(v_cands_3937_);
return v_res_3939_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(lean_object* v_resolve_3940_, lean_object* v_key_3941_, lean_object* v_cands_3942_){
_start:
{
lean_object* v___x_3943_; lean_object* v___x_3944_; uint8_t v___x_3945_; 
v___x_3943_ = lean_array_get_size(v_cands_3942_);
v___x_3944_ = lean_unsigned_to_nat(1u);
v___x_3945_ = lean_nat_dec_eq(v___x_3943_, v___x_3944_);
if (v___x_3945_ == 0)
{
lean_object* v___f_3946_; lean_object* v___f_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; 
lean_inc_ref(v_cands_3942_);
lean_inc_ref(v_resolve_3940_);
v___f_3946_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3946_, 0, v_resolve_3940_);
lean_closure_set(v___f_3946_, 1, v_cands_3942_);
v___f_3947_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_3947_, 0, v_cands_3942_);
lean_closure_set(v___f_3947_, 1, v___x_3943_);
lean_closure_set(v___f_3947_, 2, v_resolve_3940_);
v___x_3948_ = lean_mk_thunk(v___f_3947_);
v___x_3949_ = lean_mk_thunk(v___f_3946_);
v___x_3950_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_3950_, 0, v_key_3941_);
lean_ctor_set(v___x_3950_, 1, v___x_3948_);
lean_ctor_set(v___x_3950_, 2, v___x_3949_);
return v___x_3950_;
}
else
{
lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v_fst_3954_; lean_object* v_snd_3955_; lean_object* v___x_3957_; uint8_t v_isShared_3958_; uint8_t v_isSharedCheck_3962_; 
lean_dec(v_key_3941_);
lean_dec_ref(v_resolve_3940_);
v___x_3951_ = lean_unsigned_to_nat(0u);
v___x_3952_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3953_ = lean_array_get(v___x_3952_, v_cands_3942_, v___x_3951_);
lean_dec_ref(v_cands_3942_);
v_fst_3954_ = lean_ctor_get(v___x_3953_, 0);
v_snd_3955_ = lean_ctor_get(v___x_3953_, 1);
v_isSharedCheck_3962_ = !lean_is_exclusive(v___x_3953_);
if (v_isSharedCheck_3962_ == 0)
{
v___x_3957_ = v___x_3953_;
v_isShared_3958_ = v_isSharedCheck_3962_;
goto v_resetjp_3956_;
}
else
{
lean_inc(v_snd_3955_);
lean_inc(v_fst_3954_);
lean_dec(v___x_3953_);
v___x_3957_ = lean_box(0);
v_isShared_3958_ = v_isSharedCheck_3962_;
goto v_resetjp_3956_;
}
v_resetjp_3956_:
{
lean_object* v___x_3960_; 
if (v_isShared_3958_ == 0)
{
v___x_3960_ = v___x_3957_;
goto v_reusejp_3959_;
}
else
{
lean_object* v_reuseFailAlloc_3961_; 
v_reuseFailAlloc_3961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3961_, 0, v_fst_3954_);
lean_ctor_set(v_reuseFailAlloc_3961_, 1, v_snd_3955_);
v___x_3960_ = v_reuseFailAlloc_3961_;
goto v_reusejp_3959_;
}
v_reusejp_3959_:
{
return v___x_3960_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(lean_object* v_resolve_3963_, lean_object* v_as_3964_, size_t v_sz_3965_, size_t v_i_3966_, lean_object* v_b_3967_){
_start:
{
lean_object* v_a_3969_; uint8_t v___x_3973_; 
v___x_3973_ = lean_usize_dec_lt(v_i_3966_, v_sz_3965_);
if (v___x_3973_ == 0)
{
lean_dec_ref(v_resolve_3963_);
return v_b_3967_;
}
else
{
lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v_a_3977_; lean_object* v___x_3978_; uint8_t v___x_3979_; 
v___x_3974_ = lean_unsigned_to_nat(1u);
v___x_3975_ = lean_unsigned_to_nat(0u);
v___x_3976_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v_a_3977_ = lean_array_uget_borrowed(v_as_3964_, v_i_3966_);
v___x_3978_ = lean_array_get_size(v_a_3977_);
v___x_3979_ = lean_nat_dec_eq(v___x_3978_, v___x_3974_);
if (v___x_3979_ == 0)
{
lean_object* v___x_3980_; lean_object* v_snd_3981_; lean_object* v_key_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; 
v___x_3980_ = lean_array_get_borrowed(v___x_3976_, v_a_3977_, v___x_3975_);
v_snd_3981_ = lean_ctor_get(v___x_3980_, 1);
v_key_3982_ = lean_ctor_get(v_snd_3981_, 0);
lean_inc(v_a_3977_);
lean_inc(v_key_3982_);
lean_inc_ref(v_resolve_3963_);
v___x_3983_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_3963_, v_key_3982_, v_a_3977_);
v___x_3984_ = lean_array_push(v_b_3967_, v___x_3983_);
v_a_3969_ = v___x_3984_;
goto v___jp_3968_;
}
else
{
lean_object* v___x_3985_; lean_object* v_fst_3986_; lean_object* v_snd_3987_; lean_object* v___x_3989_; uint8_t v_isShared_3990_; uint8_t v_isSharedCheck_3995_; 
v___x_3985_ = lean_array_get(v___x_3976_, v_a_3977_, v___x_3975_);
v_fst_3986_ = lean_ctor_get(v___x_3985_, 0);
v_snd_3987_ = lean_ctor_get(v___x_3985_, 1);
v_isSharedCheck_3995_ = !lean_is_exclusive(v___x_3985_);
if (v_isSharedCheck_3995_ == 0)
{
v___x_3989_ = v___x_3985_;
v_isShared_3990_ = v_isSharedCheck_3995_;
goto v_resetjp_3988_;
}
else
{
lean_inc(v_snd_3987_);
lean_inc(v_fst_3986_);
lean_dec(v___x_3985_);
v___x_3989_ = lean_box(0);
v_isShared_3990_ = v_isSharedCheck_3995_;
goto v_resetjp_3988_;
}
v_resetjp_3988_:
{
lean_object* v___x_3992_; 
if (v_isShared_3990_ == 0)
{
v___x_3992_ = v___x_3989_;
goto v_reusejp_3991_;
}
else
{
lean_object* v_reuseFailAlloc_3994_; 
v_reuseFailAlloc_3994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3994_, 0, v_fst_3986_);
lean_ctor_set(v_reuseFailAlloc_3994_, 1, v_snd_3987_);
v___x_3992_ = v_reuseFailAlloc_3994_;
goto v_reusejp_3991_;
}
v_reusejp_3991_:
{
lean_object* v___x_3993_; 
v___x_3993_ = lean_array_push(v_b_3967_, v___x_3992_);
v_a_3969_ = v___x_3993_;
goto v___jp_3968_;
}
}
}
}
v___jp_3968_:
{
size_t v___x_3970_; size_t v___x_3971_; 
v___x_3970_ = ((size_t)1ULL);
v___x_3971_ = lean_usize_add(v_i_3966_, v___x_3970_);
v_i_3966_ = v___x_3971_;
v_b_3967_ = v_a_3969_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(lean_object* v_resolve_3996_, lean_object* v_as_3997_, size_t v_sz_3998_, size_t v_i_3999_, lean_object* v_b_4000_){
_start:
{
lean_object* v_a_4002_; uint8_t v___x_4006_; 
v___x_4006_ = lean_usize_dec_lt(v_i_3999_, v_sz_3998_);
if (v___x_4006_ == 0)
{
lean_dec_ref(v_resolve_3996_);
return v_b_4000_;
}
else
{
lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v_a_4010_; lean_object* v___x_4011_; uint8_t v___x_4012_; 
v___x_4007_ = lean_unsigned_to_nat(1u);
v___x_4008_ = lean_unsigned_to_nat(0u);
v___x_4009_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v_a_4010_ = lean_array_uget_borrowed(v_as_3997_, v_i_3999_);
v___x_4011_ = lean_array_get_size(v_a_4010_);
v___x_4012_ = lean_nat_dec_eq(v___x_4011_, v___x_4007_);
if (v___x_4012_ == 0)
{
lean_object* v___x_4013_; lean_object* v_snd_4014_; lean_object* v_key_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; 
v___x_4013_ = lean_array_get_borrowed(v___x_4009_, v_a_4010_, v___x_4008_);
v_snd_4014_ = lean_ctor_get(v___x_4013_, 1);
v_key_4015_ = lean_ctor_get(v_snd_4014_, 0);
lean_inc(v_a_4010_);
lean_inc(v_key_4015_);
lean_inc_ref(v_resolve_3996_);
v___x_4016_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_3996_, v_key_4015_, v_a_4010_);
v___x_4017_ = lean_array_push(v_b_4000_, v___x_4016_);
v_a_4002_ = v___x_4017_;
goto v___jp_4001_;
}
else
{
lean_object* v___x_4018_; lean_object* v_fst_4019_; lean_object* v_snd_4020_; lean_object* v___x_4022_; uint8_t v_isShared_4023_; uint8_t v_isSharedCheck_4028_; 
v___x_4018_ = lean_array_get(v___x_4009_, v_a_4010_, v___x_4008_);
v_fst_4019_ = lean_ctor_get(v___x_4018_, 0);
v_snd_4020_ = lean_ctor_get(v___x_4018_, 1);
v_isSharedCheck_4028_ = !lean_is_exclusive(v___x_4018_);
if (v_isSharedCheck_4028_ == 0)
{
v___x_4022_ = v___x_4018_;
v_isShared_4023_ = v_isSharedCheck_4028_;
goto v_resetjp_4021_;
}
else
{
lean_inc(v_snd_4020_);
lean_inc(v_fst_4019_);
lean_dec(v___x_4018_);
v___x_4022_ = lean_box(0);
v_isShared_4023_ = v_isSharedCheck_4028_;
goto v_resetjp_4021_;
}
v_resetjp_4021_:
{
lean_object* v___x_4025_; 
if (v_isShared_4023_ == 0)
{
v___x_4025_ = v___x_4022_;
goto v_reusejp_4024_;
}
else
{
lean_object* v_reuseFailAlloc_4027_; 
v_reuseFailAlloc_4027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4027_, 0, v_fst_4019_);
lean_ctor_set(v_reuseFailAlloc_4027_, 1, v_snd_4020_);
v___x_4025_ = v_reuseFailAlloc_4027_;
goto v_reusejp_4024_;
}
v_reusejp_4024_:
{
lean_object* v___x_4026_; 
v___x_4026_ = lean_array_push(v_b_4000_, v___x_4025_);
v_a_4002_ = v___x_4026_;
goto v___jp_4001_;
}
}
}
}
v___jp_4001_:
{
size_t v___x_4003_; size_t v___x_4004_; lean_object* v___x_4005_; 
v___x_4003_ = ((size_t)1ULL);
v___x_4004_ = lean_usize_add(v_i_3999_, v___x_4003_);
v___x_4005_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_3996_, v_as_3997_, v_sz_3998_, v___x_4004_, v_a_4002_);
return v___x_4005_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(lean_object* v___y_4029_, lean_object* v_resolve_4030_, lean_object* v_a_4031_){
_start:
{
lean_object* v_fst_4032_; lean_object* v_snd_4033_; lean_object* v___x_4035_; uint8_t v_isShared_4036_; uint8_t v_isSharedCheck_4093_; 
v_fst_4032_ = lean_ctor_get(v_a_4031_, 0);
v_snd_4033_ = lean_ctor_get(v_a_4031_, 1);
v_isSharedCheck_4093_ = !lean_is_exclusive(v_a_4031_);
if (v_isSharedCheck_4093_ == 0)
{
v___x_4035_ = v_a_4031_;
v_isShared_4036_ = v_isSharedCheck_4093_;
goto v_resetjp_4034_;
}
else
{
lean_inc(v_snd_4033_);
lean_inc(v_fst_4032_);
lean_dec(v_a_4031_);
v___x_4035_ = lean_box(0);
v_isShared_4036_ = v_isSharedCheck_4093_;
goto v_resetjp_4034_;
}
v_resetjp_4034_:
{
lean_object* v___x_4037_; uint8_t v___x_4038_; 
v___x_4037_ = lean_array_get_size(v___y_4029_);
v___x_4038_ = lean_nat_dec_lt(v_snd_4033_, v___x_4037_);
if (v___x_4038_ == 0)
{
lean_object* v___x_4040_; 
lean_dec_ref(v_resolve_4030_);
if (v_isShared_4036_ == 0)
{
v___x_4040_ = v___x_4035_;
goto v_reusejp_4039_;
}
else
{
lean_object* v_reuseFailAlloc_4041_; 
v_reuseFailAlloc_4041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4041_, 0, v_fst_4032_);
lean_ctor_set(v_reuseFailAlloc_4041_, 1, v_snd_4033_);
v___x_4040_ = v_reuseFailAlloc_4041_;
goto v_reusejp_4039_;
}
v_reusejp_4039_:
{
return v___x_4040_;
}
}
else
{
lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v_snd_4044_; lean_object* v_fst_4045_; lean_object* v___x_4047_; uint8_t v_isShared_4048_; uint8_t v_isSharedCheck_4092_; 
lean_del_object(v___x_4035_);
v___x_4042_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v___x_4043_ = lean_array_get(v___x_4042_, v___y_4029_, v_snd_4033_);
v_snd_4044_ = lean_ctor_get(v___x_4043_, 1);
v_fst_4045_ = lean_ctor_get(v___x_4043_, 0);
v_isSharedCheck_4092_ = !lean_is_exclusive(v___x_4043_);
if (v_isSharedCheck_4092_ == 0)
{
v___x_4047_ = v___x_4043_;
v_isShared_4048_ = v_isSharedCheck_4092_;
goto v_resetjp_4046_;
}
else
{
lean_inc(v_snd_4044_);
lean_inc(v_fst_4045_);
lean_dec(v___x_4043_);
v___x_4047_ = lean_box(0);
v_isShared_4048_ = v_isSharedCheck_4092_;
goto v_resetjp_4046_;
}
v_resetjp_4046_:
{
lean_object* v_fst_4049_; lean_object* v_snd_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; uint8_t v___x_4060_; 
v_fst_4049_ = lean_ctor_get(v_snd_4044_, 0);
v_snd_4050_ = lean_ctor_get(v_snd_4044_, 1);
v___x_4051_ = lean_unsigned_to_nat(1u);
v___x_4052_ = lean_nat_add(v_snd_4033_, v___x_4051_);
lean_dec(v_snd_4033_);
v___x_4060_ = lean_nat_dec_eq(v___x_4052_, v___x_4037_);
if (v___x_4060_ == 0)
{
lean_object* v___x_4061_; lean_object* v_fst_4062_; lean_object* v___x_4064_; uint8_t v_isShared_4065_; uint8_t v_isSharedCheck_4090_; 
v___x_4061_ = lean_array_get(v___x_4042_, v___y_4029_, v___x_4052_);
v_fst_4062_ = lean_ctor_get(v___x_4061_, 0);
v_isSharedCheck_4090_ = !lean_is_exclusive(v___x_4061_);
if (v_isSharedCheck_4090_ == 0)
{
lean_object* v_unused_4091_; 
v_unused_4091_ = lean_ctor_get(v___x_4061_, 1);
lean_dec(v_unused_4091_);
v___x_4064_ = v___x_4061_;
v_isShared_4065_ = v_isSharedCheck_4090_;
goto v_resetjp_4063_;
}
else
{
lean_inc(v_fst_4062_);
lean_dec(v___x_4061_);
v___x_4064_ = lean_box(0);
v_isShared_4065_ = v_isSharedCheck_4090_;
goto v_resetjp_4063_;
}
v_resetjp_4063_:
{
uint64_t v___x_4066_; uint64_t v___x_4067_; uint8_t v___x_4068_; 
v___x_4066_ = lean_unbox_uint64(v_fst_4062_);
lean_dec(v_fst_4062_);
v___x_4067_ = lean_unbox_uint64(v_fst_4045_);
v___x_4068_ = lean_uint64_dec_eq(v___x_4066_, v___x_4067_);
if (v___x_4068_ == 0)
{
lean_inc(v_snd_4050_);
lean_inc(v_fst_4049_);
lean_del_object(v___x_4064_);
lean_dec(v_fst_4045_);
lean_dec(v_snd_4044_);
goto v___jp_4053_;
}
else
{
lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4073_; 
lean_del_object(v___x_4047_);
v___x_4069_ = lean_mk_empty_array_with_capacity(v___x_4051_);
lean_inc_ref(v___x_4069_);
v___x_4070_ = lean_array_push(v___x_4069_, v_snd_4044_);
v___x_4071_ = lean_array_push(v___x_4069_, v___x_4070_);
lean_inc(v___x_4052_);
if (v_isShared_4065_ == 0)
{
lean_ctor_set(v___x_4064_, 1, v___x_4071_);
lean_ctor_set(v___x_4064_, 0, v___x_4052_);
v___x_4073_ = v___x_4064_;
goto v_reusejp_4072_;
}
else
{
lean_object* v_reuseFailAlloc_4089_; 
v_reuseFailAlloc_4089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4089_, 0, v___x_4052_);
lean_ctor_set(v_reuseFailAlloc_4089_, 1, v___x_4071_);
v___x_4073_ = v_reuseFailAlloc_4089_;
goto v_reusejp_4072_;
}
v_reusejp_4072_:
{
uint64_t v___x_4074_; lean_object* v___x_4075_; lean_object* v_fst_4076_; lean_object* v_snd_4077_; lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4088_; 
v___x_4074_ = lean_unbox_uint64(v_fst_4045_);
lean_dec(v_fst_4045_);
v___x_4075_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_4037_, v___y_4029_, v___x_4074_, v___x_4052_, v___x_4073_);
lean_dec(v___x_4052_);
v_fst_4076_ = lean_ctor_get(v___x_4075_, 0);
v_snd_4077_ = lean_ctor_get(v___x_4075_, 1);
v_isSharedCheck_4088_ = !lean_is_exclusive(v___x_4075_);
if (v_isSharedCheck_4088_ == 0)
{
v___x_4079_ = v___x_4075_;
v_isShared_4080_ = v_isSharedCheck_4088_;
goto v_resetjp_4078_;
}
else
{
lean_inc(v_snd_4077_);
lean_inc(v_fst_4076_);
lean_dec(v___x_4075_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4088_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
size_t v___x_4081_; size_t v_sz_4082_; lean_object* v___x_4083_; lean_object* v___x_4085_; 
v___x_4081_ = ((size_t)0ULL);
v_sz_4082_ = lean_array_size(v_snd_4077_);
lean_inc_ref(v_resolve_4030_);
v___x_4083_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_4030_, v_snd_4077_, v_sz_4082_, v___x_4081_, v_fst_4032_);
lean_dec(v_snd_4077_);
if (v_isShared_4080_ == 0)
{
lean_ctor_set(v___x_4079_, 1, v_fst_4076_);
lean_ctor_set(v___x_4079_, 0, v___x_4083_);
v___x_4085_ = v___x_4079_;
goto v_reusejp_4084_;
}
else
{
lean_object* v_reuseFailAlloc_4087_; 
v_reuseFailAlloc_4087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4087_, 0, v___x_4083_);
lean_ctor_set(v_reuseFailAlloc_4087_, 1, v_fst_4076_);
v___x_4085_ = v_reuseFailAlloc_4087_;
goto v_reusejp_4084_;
}
v_reusejp_4084_:
{
v_a_4031_ = v___x_4085_;
goto _start;
}
}
}
}
}
}
else
{
lean_inc(v_snd_4050_);
lean_inc(v_fst_4049_);
lean_dec(v_fst_4045_);
lean_dec(v_snd_4044_);
goto v___jp_4053_;
}
v___jp_4053_:
{
lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4057_; 
v___x_4054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4054_, 0, v_fst_4049_);
lean_ctor_set(v___x_4054_, 1, v_snd_4050_);
v___x_4055_ = lean_array_push(v_fst_4032_, v___x_4054_);
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 1, v___x_4052_);
lean_ctor_set(v___x_4047_, 0, v___x_4055_);
v___x_4057_ = v___x_4047_;
goto v_reusejp_4056_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v___x_4055_);
lean_ctor_set(v_reuseFailAlloc_4059_, 1, v___x_4052_);
v___x_4057_ = v_reuseFailAlloc_4059_;
goto v_reusejp_4056_;
}
v_reusejp_4056_:
{
v_a_4031_ = v___x_4057_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(lean_object* v___y_4094_, lean_object* v_resolve_4095_, lean_object* v_a_4096_){
_start:
{
lean_object* v_fst_4097_; lean_object* v_snd_4098_; lean_object* v___x_4100_; uint8_t v_isShared_4101_; uint8_t v_isSharedCheck_4158_; 
v_fst_4097_ = lean_ctor_get(v_a_4096_, 0);
v_snd_4098_ = lean_ctor_get(v_a_4096_, 1);
v_isSharedCheck_4158_ = !lean_is_exclusive(v_a_4096_);
if (v_isSharedCheck_4158_ == 0)
{
v___x_4100_ = v_a_4096_;
v_isShared_4101_ = v_isSharedCheck_4158_;
goto v_resetjp_4099_;
}
else
{
lean_inc(v_snd_4098_);
lean_inc(v_fst_4097_);
lean_dec(v_a_4096_);
v___x_4100_ = lean_box(0);
v_isShared_4101_ = v_isSharedCheck_4158_;
goto v_resetjp_4099_;
}
v_resetjp_4099_:
{
lean_object* v___x_4102_; uint8_t v___x_4103_; 
v___x_4102_ = lean_array_get_size(v___y_4094_);
v___x_4103_ = lean_nat_dec_lt(v_snd_4098_, v___x_4102_);
if (v___x_4103_ == 0)
{
lean_object* v___x_4105_; 
lean_dec_ref(v_resolve_4095_);
if (v_isShared_4101_ == 0)
{
v___x_4105_ = v___x_4100_;
goto v_reusejp_4104_;
}
else
{
lean_object* v_reuseFailAlloc_4106_; 
v_reuseFailAlloc_4106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4106_, 0, v_fst_4097_);
lean_ctor_set(v_reuseFailAlloc_4106_, 1, v_snd_4098_);
v___x_4105_ = v_reuseFailAlloc_4106_;
goto v_reusejp_4104_;
}
v_reusejp_4104_:
{
return v___x_4105_;
}
}
else
{
lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v_snd_4109_; lean_object* v_fst_4110_; lean_object* v___x_4112_; uint8_t v_isShared_4113_; uint8_t v_isSharedCheck_4157_; 
lean_del_object(v___x_4100_);
v___x_4107_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v___x_4108_ = lean_array_get(v___x_4107_, v___y_4094_, v_snd_4098_);
v_snd_4109_ = lean_ctor_get(v___x_4108_, 1);
v_fst_4110_ = lean_ctor_get(v___x_4108_, 0);
v_isSharedCheck_4157_ = !lean_is_exclusive(v___x_4108_);
if (v_isSharedCheck_4157_ == 0)
{
v___x_4112_ = v___x_4108_;
v_isShared_4113_ = v_isSharedCheck_4157_;
goto v_resetjp_4111_;
}
else
{
lean_inc(v_snd_4109_);
lean_inc(v_fst_4110_);
lean_dec(v___x_4108_);
v___x_4112_ = lean_box(0);
v_isShared_4113_ = v_isSharedCheck_4157_;
goto v_resetjp_4111_;
}
v_resetjp_4111_:
{
lean_object* v_fst_4114_; lean_object* v_snd_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; uint8_t v___x_4125_; 
v_fst_4114_ = lean_ctor_get(v_snd_4109_, 0);
v_snd_4115_ = lean_ctor_get(v_snd_4109_, 1);
v___x_4116_ = lean_unsigned_to_nat(1u);
v___x_4117_ = lean_nat_add(v_snd_4098_, v___x_4116_);
lean_dec(v_snd_4098_);
v___x_4125_ = lean_nat_dec_eq(v___x_4117_, v___x_4102_);
if (v___x_4125_ == 0)
{
lean_object* v___x_4126_; lean_object* v_fst_4127_; lean_object* v___x_4129_; uint8_t v_isShared_4130_; uint8_t v_isSharedCheck_4155_; 
v___x_4126_ = lean_array_get(v___x_4107_, v___y_4094_, v___x_4117_);
v_fst_4127_ = lean_ctor_get(v___x_4126_, 0);
v_isSharedCheck_4155_ = !lean_is_exclusive(v___x_4126_);
if (v_isSharedCheck_4155_ == 0)
{
lean_object* v_unused_4156_; 
v_unused_4156_ = lean_ctor_get(v___x_4126_, 1);
lean_dec(v_unused_4156_);
v___x_4129_ = v___x_4126_;
v_isShared_4130_ = v_isSharedCheck_4155_;
goto v_resetjp_4128_;
}
else
{
lean_inc(v_fst_4127_);
lean_dec(v___x_4126_);
v___x_4129_ = lean_box(0);
v_isShared_4130_ = v_isSharedCheck_4155_;
goto v_resetjp_4128_;
}
v_resetjp_4128_:
{
uint64_t v___x_4131_; uint64_t v___x_4132_; uint8_t v___x_4133_; 
v___x_4131_ = lean_unbox_uint64(v_fst_4127_);
lean_dec(v_fst_4127_);
v___x_4132_ = lean_unbox_uint64(v_fst_4110_);
v___x_4133_ = lean_uint64_dec_eq(v___x_4131_, v___x_4132_);
if (v___x_4133_ == 0)
{
lean_inc(v_snd_4115_);
lean_inc(v_fst_4114_);
lean_del_object(v___x_4129_);
lean_dec(v_fst_4110_);
lean_dec(v_snd_4109_);
goto v___jp_4118_;
}
else
{
lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4138_; 
lean_del_object(v___x_4112_);
v___x_4134_ = lean_mk_empty_array_with_capacity(v___x_4116_);
lean_inc_ref(v___x_4134_);
v___x_4135_ = lean_array_push(v___x_4134_, v_snd_4109_);
v___x_4136_ = lean_array_push(v___x_4134_, v___x_4135_);
lean_inc(v___x_4117_);
if (v_isShared_4130_ == 0)
{
lean_ctor_set(v___x_4129_, 1, v___x_4136_);
lean_ctor_set(v___x_4129_, 0, v___x_4117_);
v___x_4138_ = v___x_4129_;
goto v_reusejp_4137_;
}
else
{
lean_object* v_reuseFailAlloc_4154_; 
v_reuseFailAlloc_4154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4154_, 0, v___x_4117_);
lean_ctor_set(v_reuseFailAlloc_4154_, 1, v___x_4136_);
v___x_4138_ = v_reuseFailAlloc_4154_;
goto v_reusejp_4137_;
}
v_reusejp_4137_:
{
uint64_t v___x_4139_; lean_object* v___x_4140_; lean_object* v_fst_4141_; lean_object* v_snd_4142_; lean_object* v___x_4144_; uint8_t v_isShared_4145_; uint8_t v_isSharedCheck_4153_; 
v___x_4139_ = lean_unbox_uint64(v_fst_4110_);
lean_dec(v_fst_4110_);
v___x_4140_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_4102_, v___y_4094_, v___x_4139_, v___x_4117_, v___x_4138_);
lean_dec(v___x_4117_);
v_fst_4141_ = lean_ctor_get(v___x_4140_, 0);
v_snd_4142_ = lean_ctor_get(v___x_4140_, 1);
v_isSharedCheck_4153_ = !lean_is_exclusive(v___x_4140_);
if (v_isSharedCheck_4153_ == 0)
{
v___x_4144_ = v___x_4140_;
v_isShared_4145_ = v_isSharedCheck_4153_;
goto v_resetjp_4143_;
}
else
{
lean_inc(v_snd_4142_);
lean_inc(v_fst_4141_);
lean_dec(v___x_4140_);
v___x_4144_ = lean_box(0);
v_isShared_4145_ = v_isSharedCheck_4153_;
goto v_resetjp_4143_;
}
v_resetjp_4143_:
{
size_t v___x_4146_; size_t v_sz_4147_; lean_object* v___x_4148_; lean_object* v___x_4150_; 
v___x_4146_ = ((size_t)0ULL);
v_sz_4147_ = lean_array_size(v_snd_4142_);
lean_inc_ref(v_resolve_4095_);
v___x_4148_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_4095_, v_snd_4142_, v_sz_4147_, v___x_4146_, v_fst_4097_);
lean_dec(v_snd_4142_);
if (v_isShared_4145_ == 0)
{
lean_ctor_set(v___x_4144_, 1, v_fst_4141_);
lean_ctor_set(v___x_4144_, 0, v___x_4148_);
v___x_4150_ = v___x_4144_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4152_; 
v_reuseFailAlloc_4152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4152_, 0, v___x_4148_);
lean_ctor_set(v_reuseFailAlloc_4152_, 1, v_fst_4141_);
v___x_4150_ = v_reuseFailAlloc_4152_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
lean_object* v___x_4151_; 
v___x_4151_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(v___y_4094_, v_resolve_4095_, v___x_4150_);
return v___x_4151_;
}
}
}
}
}
}
else
{
lean_inc(v_snd_4115_);
lean_inc(v_fst_4114_);
lean_dec(v_fst_4110_);
lean_dec(v_snd_4109_);
goto v___jp_4118_;
}
v___jp_4118_:
{
lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4122_; 
v___x_4119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4119_, 0, v_fst_4114_);
lean_ctor_set(v___x_4119_, 1, v_snd_4115_);
v___x_4120_ = lean_array_push(v_fst_4097_, v___x_4119_);
if (v_isShared_4113_ == 0)
{
lean_ctor_set(v___x_4112_, 1, v___x_4117_);
lean_ctor_set(v___x_4112_, 0, v___x_4120_);
v___x_4122_ = v___x_4112_;
goto v_reusejp_4121_;
}
else
{
lean_object* v_reuseFailAlloc_4124_; 
v_reuseFailAlloc_4124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4124_, 0, v___x_4120_);
lean_ctor_set(v_reuseFailAlloc_4124_, 1, v___x_4117_);
v___x_4122_ = v_reuseFailAlloc_4124_;
goto v_reusejp_4121_;
}
v_reusejp_4121_:
{
lean_object* v___x_4123_; 
v___x_4123_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(v___y_4094_, v_resolve_4095_, v___x_4122_);
return v___x_4123_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(lean_object* v_resolve_4159_, lean_object* v_cands_4160_){
_start:
{
lean_object* v___x_4161_; lean_object* v___y_4163_; size_t v_sz_4176_; size_t v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___y_4183_; lean_object* v___y_4184_; uint8_t v___x_4186_; 
v___x_4161_ = lean_unsigned_to_nat(0u);
v_sz_4176_ = lean_array_size(v_cands_4160_);
v___x_4177_ = ((size_t)0ULL);
v___x_4178_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_cands_4160_, v_sz_4176_, v___x_4177_, v___x_4161_);
v___x_4179_ = lean_mk_empty_array_with_capacity(v___x_4178_);
lean_dec(v___x_4178_);
v___x_4180_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_cands_4160_, v_sz_4176_, v___x_4177_, v___x_4179_);
v___x_4181_ = lean_array_get_size(v___x_4180_);
v___x_4186_ = lean_nat_dec_eq(v___x_4181_, v___x_4161_);
if (v___x_4186_ == 0)
{
lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___y_4190_; uint8_t v___x_4192_; 
v___x_4187_ = lean_unsigned_to_nat(1u);
v___x_4188_ = lean_nat_sub(v___x_4181_, v___x_4187_);
v___x_4192_ = lean_nat_dec_le(v___x_4161_, v___x_4188_);
if (v___x_4192_ == 0)
{
lean_inc(v___x_4188_);
v___y_4190_ = v___x_4188_;
goto v___jp_4189_;
}
else
{
v___y_4190_ = v___x_4161_;
goto v___jp_4189_;
}
v___jp_4189_:
{
uint8_t v___x_4191_; 
v___x_4191_ = lean_nat_dec_le(v___y_4190_, v___x_4188_);
if (v___x_4191_ == 0)
{
lean_dec(v___x_4188_);
lean_inc(v___y_4190_);
v___y_4183_ = v___y_4190_;
v___y_4184_ = v___y_4190_;
goto v___jp_4182_;
}
else
{
v___y_4183_ = v___y_4190_;
v___y_4184_ = v___x_4188_;
goto v___jp_4182_;
}
}
}
else
{
v___y_4163_ = v___x_4180_;
goto v___jp_4162_;
}
v___jp_4162_:
{
lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v_fst_4166_; lean_object* v___x_4168_; uint8_t v_isShared_4169_; uint8_t v_isSharedCheck_4174_; 
v___x_4164_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___closed__0));
v___x_4165_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(v___y_4163_, v_resolve_4159_, v___x_4164_);
lean_dec_ref(v___y_4163_);
v_fst_4166_ = lean_ctor_get(v___x_4165_, 0);
v_isSharedCheck_4174_ = !lean_is_exclusive(v___x_4165_);
if (v_isSharedCheck_4174_ == 0)
{
lean_object* v_unused_4175_; 
v_unused_4175_ = lean_ctor_get(v___x_4165_, 1);
lean_dec(v_unused_4175_);
v___x_4168_ = v___x_4165_;
v_isShared_4169_ = v_isSharedCheck_4174_;
goto v_resetjp_4167_;
}
else
{
lean_inc(v_fst_4166_);
lean_dec(v___x_4165_);
v___x_4168_ = lean_box(0);
v_isShared_4169_ = v_isSharedCheck_4174_;
goto v_resetjp_4167_;
}
v_resetjp_4167_:
{
lean_object* v___x_4170_; lean_object* v___x_4172_; 
v___x_4170_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v_fst_4166_);
if (v_isShared_4169_ == 0)
{
lean_ctor_set(v___x_4168_, 1, v___x_4170_);
v___x_4172_ = v___x_4168_;
goto v_reusejp_4171_;
}
else
{
lean_object* v_reuseFailAlloc_4173_; 
v_reuseFailAlloc_4173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4173_, 0, v_fst_4166_);
lean_ctor_set(v_reuseFailAlloc_4173_, 1, v___x_4170_);
v___x_4172_ = v_reuseFailAlloc_4173_;
goto v_reusejp_4171_;
}
v_reusejp_4171_:
{
return v___x_4172_;
}
}
}
v___jp_4182_:
{
lean_object* v___x_4185_; 
v___x_4185_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v___x_4181_, v___x_4180_, v___y_4183_, v___y_4184_);
lean_dec(v___y_4184_);
v___y_4163_ = v___x_4185_;
goto v___jp_4162_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(lean_object* v_resolve_4193_, lean_object* v_cands_4194_, lean_object* v_x_4195_){
_start:
{
lean_object* v___x_4196_; 
v___x_4196_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_4193_, v_cands_4194_);
return v___x_4196_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg___boxed(lean_object* v_resolve_4197_, lean_object* v_as_4198_, lean_object* v_sz_4199_, lean_object* v_i_4200_, lean_object* v_b_4201_){
_start:
{
size_t v_sz_boxed_4202_; size_t v_i_boxed_4203_; lean_object* v_res_4204_; 
v_sz_boxed_4202_ = lean_unbox_usize(v_sz_4199_);
lean_dec(v_sz_4199_);
v_i_boxed_4203_ = lean_unbox_usize(v_i_4200_);
lean_dec(v_i_4200_);
v_res_4204_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_4197_, v_as_4198_, v_sz_boxed_4202_, v_i_boxed_4203_, v_b_4201_);
lean_dec_ref(v_as_4198_);
return v_res_4204_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___boxed(lean_object* v_resolve_4205_, lean_object* v_as_4206_, lean_object* v_sz_4207_, lean_object* v_i_4208_, lean_object* v_b_4209_){
_start:
{
size_t v_sz_boxed_4210_; size_t v_i_boxed_4211_; lean_object* v_res_4212_; 
v_sz_boxed_4210_ = lean_unbox_usize(v_sz_4207_);
lean_dec(v_sz_4207_);
v_i_boxed_4211_ = lean_unbox_usize(v_i_4208_);
lean_dec(v_i_4208_);
v_res_4212_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_4205_, v_as_4206_, v_sz_boxed_4210_, v_i_boxed_4211_, v_b_4209_);
lean_dec_ref(v_as_4206_);
return v_res_4212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___boxed(lean_object* v_resolve_4213_, lean_object* v_cands_4214_){
_start:
{
lean_object* v_res_4215_; 
v_res_4215_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_4213_, v_cands_4214_);
lean_dec_ref(v_cands_4214_);
return v_res_4215_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg___boxed(lean_object* v___y_4216_, lean_object* v_resolve_4217_, lean_object* v_a_4218_){
_start:
{
lean_object* v_res_4219_; 
v_res_4219_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(v___y_4216_, v_resolve_4217_, v_a_4218_);
lean_dec_ref(v___y_4216_);
return v_res_4219_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg___boxed(lean_object* v___y_4220_, lean_object* v_resolve_4221_, lean_object* v_a_4222_){
_start:
{
lean_object* v_res_4223_; 
v_res_4223_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(v___y_4220_, v_resolve_4221_, v_a_4222_);
lean_dec_ref(v___y_4220_);
return v_res_4223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(lean_object* v_00_u03b1_4224_, lean_object* v_resolve_4225_, lean_object* v_cands_4226_){
_start:
{
lean_object* v___x_4227_; 
v___x_4227_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_4225_, v_cands_4226_);
return v___x_4227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___boxed(lean_object* v_00_u03b1_4228_, lean_object* v_resolve_4229_, lean_object* v_cands_4230_){
_start:
{
lean_object* v_res_4231_; 
v_res_4231_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(v_00_u03b1_4228_, v_resolve_4229_, v_cands_4230_);
lean_dec_ref(v_cands_4230_);
return v_res_4231_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy(lean_object* v_00_u03b1_4232_, lean_object* v_resolve_4233_, lean_object* v_key_4234_, lean_object* v_cands_4235_){
_start:
{
lean_object* v___x_4236_; 
v___x_4236_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4233_, v_key_4234_, v_cands_4235_);
return v___x_4236_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(lean_object* v_00_u03b1_4237_, lean_object* v_resolve_4238_, lean_object* v_as_4239_, size_t v_sz_4240_, size_t v_i_4241_, lean_object* v_b_4242_){
_start:
{
lean_object* v___x_4243_; 
v___x_4243_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_4238_, v_as_4239_, v_sz_4240_, v_i_4241_, v_b_4242_);
return v___x_4243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___boxed(lean_object* v_00_u03b1_4244_, lean_object* v_resolve_4245_, lean_object* v_as_4246_, lean_object* v_sz_4247_, lean_object* v_i_4248_, lean_object* v_b_4249_){
_start:
{
size_t v_sz_boxed_4250_; size_t v_i_boxed_4251_; lean_object* v_res_4252_; 
v_sz_boxed_4250_ = lean_unbox_usize(v_sz_4247_);
lean_dec(v_sz_4247_);
v_i_boxed_4251_ = lean_unbox_usize(v_i_4248_);
lean_dec(v_i_4248_);
v_res_4252_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(v_00_u03b1_4244_, v_resolve_4245_, v_as_4246_, v_sz_boxed_4250_, v_i_boxed_4251_, v_b_4249_);
lean_dec_ref(v_as_4246_);
return v_res_4252_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1(lean_object* v_00_u03b1_4253_, lean_object* v___y_4254_, lean_object* v_resolve_4255_, lean_object* v_inst_4256_, lean_object* v_a_4257_){
_start:
{
lean_object* v___x_4258_; 
v___x_4258_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(v___y_4254_, v_resolve_4255_, v_a_4257_);
return v___x_4258_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___boxed(lean_object* v_00_u03b1_4259_, lean_object* v___y_4260_, lean_object* v_resolve_4261_, lean_object* v_inst_4262_, lean_object* v_a_4263_){
_start:
{
lean_object* v_res_4264_; 
v_res_4264_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1(v_00_u03b1_4259_, v___y_4260_, v_resolve_4261_, v_inst_4262_, v_a_4263_);
lean_dec_ref(v___y_4260_);
return v_res_4264_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0(lean_object* v_00_u03b1_4265_, lean_object* v_resolve_4266_, lean_object* v_as_4267_, size_t v_sz_4268_, size_t v_i_4269_, lean_object* v_b_4270_){
_start:
{
lean_object* v___x_4271_; 
v___x_4271_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_4266_, v_as_4267_, v_sz_4268_, v_i_4269_, v_b_4270_);
return v___x_4271_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___boxed(lean_object* v_00_u03b1_4272_, lean_object* v_resolve_4273_, lean_object* v_as_4274_, lean_object* v_sz_4275_, lean_object* v_i_4276_, lean_object* v_b_4277_){
_start:
{
size_t v_sz_boxed_4278_; size_t v_i_boxed_4279_; lean_object* v_res_4280_; 
v_sz_boxed_4278_ = lean_unbox_usize(v_sz_4275_);
lean_dec(v_sz_4275_);
v_i_boxed_4279_ = lean_unbox_usize(v_i_4276_);
lean_dec(v_i_4276_);
v_res_4280_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0(v_00_u03b1_4272_, v_resolve_4273_, v_as_4274_, v_sz_boxed_4278_, v_i_boxed_4279_, v_b_4277_);
lean_dec_ref(v_as_4274_);
return v_res_4280_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2(lean_object* v_00_u03b1_4281_, lean_object* v___y_4282_, lean_object* v_resolve_4283_, lean_object* v_inst_4284_, lean_object* v_a_4285_){
_start:
{
lean_object* v___x_4286_; 
v___x_4286_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(v___y_4282_, v_resolve_4283_, v_a_4285_);
return v___x_4286_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___boxed(lean_object* v_00_u03b1_4287_, lean_object* v___y_4288_, lean_object* v_resolve_4289_, lean_object* v_inst_4290_, lean_object* v_a_4291_){
_start:
{
lean_object* v_res_4292_; 
v_res_4292_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2(v_00_u03b1_4287_, v___y_4288_, v_resolve_4289_, v_inst_4290_, v_a_4291_);
lean_dec_ref(v___y_4288_);
return v_res_4292_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(lean_object* v_trees_4293_, lean_object* v_resolve_4294_){
_start:
{
lean_object* v___x_4295_; lean_object* v___x_4296_; 
v___x_4295_ = lean_box(0);
v___x_4296_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4294_, v___x_4295_, v_trees_4293_);
return v___x_4296_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy(lean_object* v_00_u03b1_4297_, lean_object* v_trees_4298_, lean_object* v_resolve_4299_){
_start:
{
lean_object* v___x_4300_; 
v___x_4300_ = l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(v_trees_4298_, v_resolve_4299_);
return v___x_4300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg(lean_object* v_n_4302_, lean_object* v_f_4303_, lean_object* v_a_4304_){
_start:
{
switch(lean_obj_tag(v_a_4304_))
{
case 0:
{
lean_dec_ref(v_f_4303_);
return v_a_4304_;
}
case 1:
{
lean_object* v_key_4305_; lean_object* v_entry_x3f_4306_; lean_object* v_children_4307_; lean_object* v_childIndex_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; 
v_key_4305_ = lean_ctor_get(v_a_4304_, 0);
v_entry_x3f_4306_ = lean_ctor_get(v_a_4304_, 1);
v_children_4307_ = lean_ctor_get(v_a_4304_, 2);
v_childIndex_4308_ = lean_ctor_get(v_a_4304_, 3);
v___x_4309_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
v___x_4310_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg___closed__0));
v___x_4311_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___redArg(v___x_4309_, v_childIndex_4308_, v_children_4307_, v___x_4310_, v_n_4302_);
if (lean_obj_tag(v___x_4311_) == 0)
{
lean_dec_ref(v_f_4303_);
return v_a_4304_;
}
else
{
lean_object* v_val_4312_; lean_object* v___x_4313_; uint8_t v___x_4314_; 
v_val_4312_ = lean_ctor_get(v___x_4311_, 0);
lean_inc(v_val_4312_);
lean_dec_ref_known(v___x_4311_, 1);
v___x_4313_ = lean_array_get_size(v_children_4307_);
v___x_4314_ = lean_nat_dec_lt(v_val_4312_, v___x_4313_);
if (v___x_4314_ == 0)
{
lean_dec(v_val_4312_);
lean_dec_ref(v_f_4303_);
return v_a_4304_;
}
else
{
lean_object* v___x_4316_; uint8_t v_isShared_4317_; uint8_t v_isSharedCheck_4326_; 
lean_inc_ref(v_childIndex_4308_);
lean_inc_ref(v_children_4307_);
lean_inc(v_entry_x3f_4306_);
lean_inc(v_key_4305_);
v_isSharedCheck_4326_ = !lean_is_exclusive(v_a_4304_);
if (v_isSharedCheck_4326_ == 0)
{
lean_object* v_unused_4327_; lean_object* v_unused_4328_; lean_object* v_unused_4329_; lean_object* v_unused_4330_; 
v_unused_4327_ = lean_ctor_get(v_a_4304_, 3);
lean_dec(v_unused_4327_);
v_unused_4328_ = lean_ctor_get(v_a_4304_, 2);
lean_dec(v_unused_4328_);
v_unused_4329_ = lean_ctor_get(v_a_4304_, 1);
lean_dec(v_unused_4329_);
v_unused_4330_ = lean_ctor_get(v_a_4304_, 0);
lean_dec(v_unused_4330_);
v___x_4316_ = v_a_4304_;
v_isShared_4317_ = v_isSharedCheck_4326_;
goto v_resetjp_4315_;
}
else
{
lean_dec(v_a_4304_);
v___x_4316_ = lean_box(0);
v_isShared_4317_ = v_isSharedCheck_4326_;
goto v_resetjp_4315_;
}
v_resetjp_4315_:
{
lean_object* v_v_4318_; lean_object* v___x_4319_; lean_object* v_xs_x27_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; lean_object* v___x_4324_; 
v_v_4318_ = lean_array_fget(v_children_4307_, v_val_4312_);
v___x_4319_ = lean_box(0);
v_xs_x27_4320_ = lean_array_fset(v_children_4307_, v_val_4312_, v___x_4319_);
v___x_4321_ = lean_apply_1(v_f_4303_, v_v_4318_);
v___x_4322_ = lean_array_fset(v_xs_x27_4320_, v_val_4312_, v___x_4321_);
lean_dec(v_val_4312_);
if (v_isShared_4317_ == 0)
{
lean_ctor_set(v___x_4316_, 2, v___x_4322_);
v___x_4324_ = v___x_4316_;
goto v_reusejp_4323_;
}
else
{
lean_object* v_reuseFailAlloc_4325_; 
v_reuseFailAlloc_4325_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4325_, 0, v_key_4305_);
lean_ctor_set(v_reuseFailAlloc_4325_, 1, v_entry_x3f_4306_);
lean_ctor_set(v_reuseFailAlloc_4325_, 2, v___x_4322_);
lean_ctor_set(v_reuseFailAlloc_4325_, 3, v_childIndex_4308_);
v___x_4324_ = v_reuseFailAlloc_4325_;
goto v_reusejp_4323_;
}
v_reusejp_4323_:
{
return v___x_4324_;
}
}
}
}
}
case 2:
{
lean_object* v_key_4331_; lean_object* v_entry_4332_; lean_object* v_expanded_4333_; lean_object* v___x_4334_; lean_object* v_fst_4335_; lean_object* v_snd_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; 
v_key_4331_ = lean_ctor_get(v_a_4304_, 0);
lean_inc(v_key_4331_);
v_entry_4332_ = lean_ctor_get(v_a_4304_, 1);
lean_inc_ref(v_entry_4332_);
v_expanded_4333_ = lean_ctor_get(v_a_4304_, 2);
lean_inc_ref(v_expanded_4333_);
lean_dec_ref_known(v_a_4304_, 3);
v___x_4334_ = lean_thunk_get_own(v_expanded_4333_);
lean_dec_ref(v_expanded_4333_);
v_fst_4335_ = lean_ctor_get(v___x_4334_, 0);
lean_inc(v_fst_4335_);
v_snd_4336_ = lean_ctor_get(v___x_4334_, 1);
lean_inc(v_snd_4336_);
lean_dec(v___x_4334_);
v___x_4337_ = lean_thunk_get_own(v_entry_4332_);
lean_dec_ref(v_entry_4332_);
v___x_4338_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_4338_, 0, v_key_4331_);
lean_ctor_set(v___x_4338_, 1, v___x_4337_);
lean_ctor_set(v___x_4338_, 2, v_fst_4335_);
lean_ctor_set(v___x_4338_, 3, v_snd_4336_);
v_a_4304_ = v___x_4338_;
goto _start;
}
default: 
{
lean_object* v_tree_4340_; 
v_tree_4340_ = lean_ctor_get(v_a_4304_, 1);
lean_inc_ref(v_tree_4340_);
lean_dec_ref_known(v_a_4304_, 2);
v_a_4304_ = v_tree_4340_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg___boxed(lean_object* v_n_4342_, lean_object* v_f_4343_, lean_object* v_a_4344_){
_start:
{
lean_object* v_res_4345_; 
v_res_4345_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg(v_n_4342_, v_f_4343_, v_a_4344_);
lean_dec(v_n_4342_);
return v_res_4345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild(lean_object* v_00_u03b1_4346_, lean_object* v_n_4347_, lean_object* v_f_4348_, lean_object* v_a_4349_){
_start:
{
lean_object* v___x_4350_; 
v___x_4350_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg(v_n_4347_, v_f_4348_, v_a_4349_);
return v___x_4350_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___boxed(lean_object* v_00_u03b1_4351_, lean_object* v_n_4352_, lean_object* v_f_4353_, lean_object* v_a_4354_){
_start:
{
lean_object* v_res_4355_; 
v_res_4355_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild(v_00_u03b1_4351_, v_n_4352_, v_f_4353_, v_a_4354_);
lean_dec(v_n_4352_);
return v_res_4355_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt___redArg(lean_object* v_t_4356_, lean_object* v_n_4357_, lean_object* v_f_4358_){
_start:
{
if (lean_obj_tag(v_n_4357_) == 0)
{
lean_object* v___x_4359_; 
v___x_4359_ = lean_apply_1(v_f_4358_, v_t_4356_);
return v___x_4359_;
}
else
{
lean_object* v_pre_4360_; lean_object* v___x_4361_; 
v_pre_4360_ = lean_ctor_get(v_n_4357_, 0);
lean_inc(v_pre_4360_);
v___x_4361_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___boxed), 4, 3);
lean_closure_set(v___x_4361_, 0, lean_box(0));
lean_closure_set(v___x_4361_, 1, v_n_4357_);
lean_closure_set(v___x_4361_, 2, v_f_4358_);
v_n_4357_ = v_pre_4360_;
v_f_4358_ = v___x_4361_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt(lean_object* v_00_u03b1_4363_, lean_object* v_t_4364_, lean_object* v_n_4365_, lean_object* v_f_4366_){
_start:
{
lean_object* v___x_4367_; 
v___x_4367_ = l_Lean_ImportedConsts_modifyAt___redArg(v_t_4364_, v_n_4365_, v_f_4366_);
return v___x_4367_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceExpanded___redArg(lean_object* v_x_4368_){
_start:
{
switch(lean_obj_tag(v_x_4368_))
{
case 2:
{
lean_object* v_key_4369_; lean_object* v_entry_4370_; lean_object* v_expanded_4371_; lean_object* v___x_4372_; lean_object* v_fst_4373_; lean_object* v_snd_4374_; lean_object* v___x_4375_; size_t v_sz_4376_; size_t v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; 
v_key_4369_ = lean_ctor_get(v_x_4368_, 0);
lean_inc(v_key_4369_);
v_entry_4370_ = lean_ctor_get(v_x_4368_, 1);
lean_inc_ref(v_entry_4370_);
v_expanded_4371_ = lean_ctor_get(v_x_4368_, 2);
lean_inc_ref(v_expanded_4371_);
lean_dec_ref_known(v_x_4368_, 3);
v___x_4372_ = lean_thunk_get_own(v_expanded_4371_);
lean_dec_ref(v_expanded_4371_);
v_fst_4373_ = lean_ctor_get(v___x_4372_, 0);
lean_inc(v_fst_4373_);
v_snd_4374_ = lean_ctor_get(v___x_4372_, 1);
lean_inc(v_snd_4374_);
lean_dec(v___x_4372_);
v___x_4375_ = lean_thunk_get_own(v_entry_4370_);
lean_dec_ref(v_entry_4370_);
v_sz_4376_ = lean_array_size(v_fst_4373_);
v___x_4377_ = ((size_t)0ULL);
v___x_4378_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(v_sz_4376_, v___x_4377_, v_fst_4373_);
v___x_4379_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_4379_, 0, v_key_4369_);
lean_ctor_set(v___x_4379_, 1, v___x_4375_);
lean_ctor_set(v___x_4379_, 2, v___x_4378_);
lean_ctor_set(v___x_4379_, 3, v_snd_4374_);
return v___x_4379_;
}
case 1:
{
lean_object* v_key_4380_; lean_object* v_entry_x3f_4381_; lean_object* v_children_4382_; lean_object* v_childIndex_4383_; lean_object* v___x_4385_; uint8_t v_isShared_4386_; uint8_t v_isSharedCheck_4393_; 
v_key_4380_ = lean_ctor_get(v_x_4368_, 0);
v_entry_x3f_4381_ = lean_ctor_get(v_x_4368_, 1);
v_children_4382_ = lean_ctor_get(v_x_4368_, 2);
v_childIndex_4383_ = lean_ctor_get(v_x_4368_, 3);
v_isSharedCheck_4393_ = !lean_is_exclusive(v_x_4368_);
if (v_isSharedCheck_4393_ == 0)
{
v___x_4385_ = v_x_4368_;
v_isShared_4386_ = v_isSharedCheck_4393_;
goto v_resetjp_4384_;
}
else
{
lean_inc(v_childIndex_4383_);
lean_inc(v_children_4382_);
lean_inc(v_entry_x3f_4381_);
lean_inc(v_key_4380_);
lean_dec(v_x_4368_);
v___x_4385_ = lean_box(0);
v_isShared_4386_ = v_isSharedCheck_4393_;
goto v_resetjp_4384_;
}
v_resetjp_4384_:
{
size_t v_sz_4387_; size_t v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4391_; 
v_sz_4387_ = lean_array_size(v_children_4382_);
v___x_4388_ = ((size_t)0ULL);
v___x_4389_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(v_sz_4387_, v___x_4388_, v_children_4382_);
if (v_isShared_4386_ == 0)
{
lean_ctor_set(v___x_4385_, 2, v___x_4389_);
v___x_4391_ = v___x_4385_;
goto v_reusejp_4390_;
}
else
{
lean_object* v_reuseFailAlloc_4392_; 
v_reuseFailAlloc_4392_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4392_, 0, v_key_4380_);
lean_ctor_set(v_reuseFailAlloc_4392_, 1, v_entry_x3f_4381_);
lean_ctor_set(v_reuseFailAlloc_4392_, 2, v___x_4389_);
lean_ctor_set(v_reuseFailAlloc_4392_, 3, v_childIndex_4383_);
v___x_4391_ = v_reuseFailAlloc_4392_;
goto v_reusejp_4390_;
}
v_reusejp_4390_:
{
return v___x_4391_;
}
}
}
case 3:
{
lean_object* v_tree_4394_; 
v_tree_4394_ = lean_ctor_get(v_x_4368_, 1);
lean_inc_ref(v_tree_4394_);
lean_dec_ref_known(v_x_4368_, 2);
v_x_4368_ = v_tree_4394_;
goto _start;
}
default: 
{
return v_x_4368_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(size_t v_sz_4396_, size_t v_i_4397_, lean_object* v_bs_4398_){
_start:
{
uint8_t v___x_4399_; 
v___x_4399_ = lean_usize_dec_lt(v_i_4397_, v_sz_4396_);
if (v___x_4399_ == 0)
{
return v_bs_4398_;
}
else
{
lean_object* v_v_4400_; lean_object* v___x_4401_; lean_object* v_bs_x27_4402_; lean_object* v___x_4403_; size_t v___x_4404_; size_t v___x_4405_; lean_object* v___x_4406_; 
v_v_4400_ = lean_array_uget(v_bs_4398_, v_i_4397_);
v___x_4401_ = lean_unsigned_to_nat(0u);
v_bs_x27_4402_ = lean_array_uset(v_bs_4398_, v_i_4397_, v___x_4401_);
v___x_4403_ = l_Lean_ImportedConsts_forceExpanded___redArg(v_v_4400_);
v___x_4404_ = ((size_t)1ULL);
v___x_4405_ = lean_usize_add(v_i_4397_, v___x_4404_);
v___x_4406_ = lean_array_uset(v_bs_x27_4402_, v_i_4397_, v___x_4403_);
v_i_4397_ = v___x_4405_;
v_bs_4398_ = v___x_4406_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg___boxed(lean_object* v_sz_4408_, lean_object* v_i_4409_, lean_object* v_bs_4410_){
_start:
{
size_t v_sz_boxed_4411_; size_t v_i_boxed_4412_; lean_object* v_res_4413_; 
v_sz_boxed_4411_ = lean_unbox_usize(v_sz_4408_);
lean_dec(v_sz_4408_);
v_i_boxed_4412_ = lean_unbox_usize(v_i_4409_);
lean_dec(v_i_4409_);
v_res_4413_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(v_sz_boxed_4411_, v_i_boxed_4412_, v_bs_4410_);
return v_res_4413_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceExpanded(lean_object* v_00_u03b1_4414_, lean_object* v_x_4415_){
_start:
{
lean_object* v___x_4416_; 
v___x_4416_ = l_Lean_ImportedConsts_forceExpanded___redArg(v_x_4415_);
return v___x_4416_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0(lean_object* v_00_u03b1_4417_, size_t v_sz_4418_, size_t v_i_4419_, lean_object* v_bs_4420_){
_start:
{
lean_object* v___x_4421_; 
v___x_4421_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(v_sz_4418_, v_i_4419_, v_bs_4420_);
return v___x_4421_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___boxed(lean_object* v_00_u03b1_4422_, lean_object* v_sz_4423_, lean_object* v_i_4424_, lean_object* v_bs_4425_){
_start:
{
size_t v_sz_boxed_4426_; size_t v_i_boxed_4427_; lean_object* v_res_4428_; 
v_sz_boxed_4426_ = lean_unbox_usize(v_sz_4423_);
lean_dec(v_sz_4423_);
v_i_boxed_4427_ = lean_unbox_usize(v_i_4424_);
lean_dec(v_i_4424_);
v_res_4428_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0(v_00_u03b1_4422_, v_sz_boxed_4426_, v_i_boxed_4427_, v_bs_4425_);
return v_res_4428_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__1(lean_object* v_toApplicative_4429_, lean_object* v_children_4430_, lean_object* v_inst_4431_, lean_object* v___f_4432_, lean_object* v_____r_4433_, lean_object* v_s_4434_){
_start:
{
lean_object* v_toPure_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; uint8_t v___x_4438_; 
v_toPure_4435_ = lean_ctor_get(v_toApplicative_4429_, 1);
lean_inc(v_toPure_4435_);
lean_dec_ref(v_toApplicative_4429_);
v___x_4436_ = lean_unsigned_to_nat(0u);
v___x_4437_ = lean_array_get_size(v_children_4430_);
v___x_4438_ = lean_nat_dec_lt(v___x_4436_, v___x_4437_);
if (v___x_4438_ == 0)
{
lean_object* v___x_4439_; 
lean_dec(v___f_4432_);
lean_dec_ref(v_inst_4431_);
lean_dec_ref(v_children_4430_);
v___x_4439_ = lean_apply_2(v_toPure_4435_, lean_box(0), v_s_4434_);
return v___x_4439_;
}
else
{
size_t v___x_4440_; size_t v___x_4441_; lean_object* v___x_4442_; 
lean_dec(v_toPure_4435_);
v___x_4440_ = ((size_t)0ULL);
v___x_4441_ = lean_usize_of_nat(v___x_4437_);
v___x_4442_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_4431_, v___f_4432_, v_children_4430_, v___x_4440_, v___x_4441_, v_s_4434_);
return v___x_4442_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__4(lean_object* v_expanded_4443_, lean_object* v_toApplicative_4444_, lean_object* v_inst_4445_, lean_object* v___f_4446_, lean_object* v_____r_4447_, lean_object* v_s_4448_){
_start:
{
lean_object* v___x_4449_; lean_object* v_fst_4450_; lean_object* v_toPure_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; uint8_t v___x_4454_; 
v___x_4449_ = lean_thunk_get_own(v_expanded_4443_);
v_fst_4450_ = lean_ctor_get(v___x_4449_, 0);
lean_inc(v_fst_4450_);
lean_dec(v___x_4449_);
v_toPure_4451_ = lean_ctor_get(v_toApplicative_4444_, 1);
lean_inc(v_toPure_4451_);
lean_dec_ref(v_toApplicative_4444_);
v___x_4452_ = lean_unsigned_to_nat(0u);
v___x_4453_ = lean_array_get_size(v_fst_4450_);
v___x_4454_ = lean_nat_dec_lt(v___x_4452_, v___x_4453_);
if (v___x_4454_ == 0)
{
lean_object* v___x_4455_; 
lean_dec(v_fst_4450_);
lean_dec(v___f_4446_);
lean_dec_ref(v_inst_4445_);
v___x_4455_ = lean_apply_2(v_toPure_4451_, lean_box(0), v_s_4448_);
return v___x_4455_;
}
else
{
size_t v___x_4456_; size_t v___x_4457_; lean_object* v___x_4458_; 
lean_dec(v_toPure_4451_);
v___x_4456_ = ((size_t)0ULL);
v___x_4457_ = lean_usize_of_nat(v___x_4453_);
v___x_4458_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_4445_, v___f_4446_, v_fst_4450_, v___x_4456_, v___x_4457_, v_s_4448_);
return v___x_4458_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__4___boxed(lean_object* v_expanded_4459_, lean_object* v_toApplicative_4460_, lean_object* v_inst_4461_, lean_object* v___f_4462_, lean_object* v_____r_4463_, lean_object* v_s_4464_){
_start:
{
lean_object* v_res_4465_; 
v_res_4465_ = l_Lean_ImportedConsts_foldlM___redArg___lam__4(v_expanded_4459_, v_toApplicative_4460_, v_inst_4461_, v___f_4462_, v_____r_4463_, v_s_4464_);
lean_dec_ref(v_expanded_4459_);
return v_res_4465_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg(lean_object* v_inst_4466_, lean_object* v_t_4467_, lean_object* v_f_4468_, lean_object* v_init_4469_){
_start:
{
switch(lean_obj_tag(v_t_4467_))
{
case 0:
{
lean_object* v_tree_4470_; lean_object* v___x_4471_; 
v_tree_4470_ = lean_ctor_get(v_t_4467_, 1);
lean_inc_ref(v_tree_4470_);
lean_dec_ref_known(v_t_4467_, 2);
v___x_4471_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_4466_, v_tree_4470_, v_f_4468_, v_init_4469_);
return v___x_4471_;
}
case 1:
{
lean_object* v_toApplicative_4472_; lean_object* v_toBind_4473_; lean_object* v_key_4474_; lean_object* v_entry_x3f_4475_; lean_object* v_children_4476_; lean_object* v___f_4477_; lean_object* v___f_4478_; 
v_toApplicative_4472_ = lean_ctor_get(v_inst_4466_, 0);
lean_inc_ref_n(v_toApplicative_4472_, 2);
v_toBind_4473_ = lean_ctor_get(v_inst_4466_, 1);
v_key_4474_ = lean_ctor_get(v_t_4467_, 0);
lean_inc(v_key_4474_);
v_entry_x3f_4475_ = lean_ctor_get(v_t_4467_, 1);
lean_inc(v_entry_x3f_4475_);
v_children_4476_ = lean_ctor_get(v_t_4467_, 2);
lean_inc_ref_n(v_children_4476_, 2);
lean_dec_ref_known(v_t_4467_, 4);
lean_inc(v_f_4468_);
lean_inc_ref_n(v_inst_4466_, 2);
v___f_4477_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_4477_, 0, v_inst_4466_);
lean_closure_set(v___f_4477_, 1, v_f_4468_);
lean_inc_ref(v___f_4477_);
v___f_4478_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__1), 6, 4);
lean_closure_set(v___f_4478_, 0, v_toApplicative_4472_);
lean_closure_set(v___f_4478_, 1, v_children_4476_);
lean_closure_set(v___f_4478_, 2, v_inst_4466_);
lean_closure_set(v___f_4478_, 3, v___f_4477_);
if (lean_obj_tag(v_entry_x3f_4475_) == 1)
{
lean_object* v_val_4479_; lean_object* v_fst_4480_; lean_object* v___f_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; 
lean_inc(v_toBind_4473_);
lean_dec_ref(v___f_4477_);
lean_dec_ref(v_children_4476_);
lean_dec_ref(v_toApplicative_4472_);
lean_dec_ref(v_inst_4466_);
v_val_4479_ = lean_ctor_get(v_entry_x3f_4475_, 0);
lean_inc(v_val_4479_);
lean_dec_ref_known(v_entry_x3f_4475_, 1);
v_fst_4480_ = lean_ctor_get(v_val_4479_, 0);
lean_inc(v_fst_4480_);
lean_dec(v_val_4479_);
v___f_4481_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4481_, 0, v___f_4478_);
v___x_4482_ = lean_apply_3(v_f_4468_, v_init_4469_, v_key_4474_, v_fst_4480_);
v___x_4483_ = lean_apply_4(v_toBind_4473_, lean_box(0), lean_box(0), v___x_4482_, v___f_4481_);
return v___x_4483_;
}
else
{
lean_object* v___x_4484_; lean_object* v___x_4485_; 
lean_dec_ref(v___f_4478_);
lean_dec(v_entry_x3f_4475_);
lean_dec(v_key_4474_);
lean_dec(v_f_4468_);
v___x_4484_ = lean_box(0);
v___x_4485_ = l_Lean_ImportedConsts_foldlM___redArg___lam__1(v_toApplicative_4472_, v_children_4476_, v_inst_4466_, v___f_4477_, v___x_4484_, v_init_4469_);
return v___x_4485_;
}
}
case 2:
{
lean_object* v_toApplicative_4486_; lean_object* v_toBind_4487_; lean_object* v_key_4488_; lean_object* v_entry_4489_; lean_object* v_expanded_4490_; lean_object* v___f_4491_; lean_object* v___f_4492_; lean_object* v___x_4493_; 
v_toApplicative_4486_ = lean_ctor_get(v_inst_4466_, 0);
lean_inc_ref_n(v_toApplicative_4486_, 2);
v_toBind_4487_ = lean_ctor_get(v_inst_4466_, 1);
v_key_4488_ = lean_ctor_get(v_t_4467_, 0);
lean_inc(v_key_4488_);
v_entry_4489_ = lean_ctor_get(v_t_4467_, 1);
lean_inc_ref(v_entry_4489_);
v_expanded_4490_ = lean_ctor_get(v_t_4467_, 2);
lean_inc_ref_n(v_expanded_4490_, 2);
lean_dec_ref_known(v_t_4467_, 3);
lean_inc(v_f_4468_);
lean_inc_ref_n(v_inst_4466_, 2);
v___f_4491_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_4491_, 0, v_inst_4466_);
lean_closure_set(v___f_4491_, 1, v_f_4468_);
lean_inc_ref(v___f_4491_);
v___f_4492_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_4492_, 0, v_expanded_4490_);
lean_closure_set(v___f_4492_, 1, v_toApplicative_4486_);
lean_closure_set(v___f_4492_, 2, v_inst_4466_);
lean_closure_set(v___f_4492_, 3, v___f_4491_);
v___x_4493_ = lean_thunk_get_own(v_entry_4489_);
lean_dec_ref(v_entry_4489_);
if (lean_obj_tag(v___x_4493_) == 1)
{
lean_object* v_val_4494_; lean_object* v_fst_4495_; lean_object* v___f_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; 
lean_inc(v_toBind_4487_);
lean_dec_ref(v___f_4491_);
lean_dec_ref(v_expanded_4490_);
lean_dec_ref(v_toApplicative_4486_);
lean_dec_ref(v_inst_4466_);
v_val_4494_ = lean_ctor_get(v___x_4493_, 0);
lean_inc(v_val_4494_);
lean_dec_ref_known(v___x_4493_, 1);
v_fst_4495_ = lean_ctor_get(v_val_4494_, 0);
lean_inc(v_fst_4495_);
lean_dec(v_val_4494_);
v___f_4496_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4496_, 0, v___f_4492_);
v___x_4497_ = lean_apply_3(v_f_4468_, v_init_4469_, v_key_4488_, v_fst_4495_);
v___x_4498_ = lean_apply_4(v_toBind_4487_, lean_box(0), lean_box(0), v___x_4497_, v___f_4496_);
return v___x_4498_;
}
else
{
lean_object* v___x_4499_; lean_object* v___x_4500_; 
lean_dec(v___x_4493_);
lean_dec_ref(v___f_4492_);
lean_dec(v_key_4488_);
lean_dec(v_f_4468_);
v___x_4499_ = lean_box(0);
v___x_4500_ = l_Lean_ImportedConsts_foldlM___redArg___lam__4(v_expanded_4490_, v_toApplicative_4486_, v_inst_4466_, v___f_4491_, v___x_4499_, v_init_4469_);
lean_dec_ref(v_expanded_4490_);
return v___x_4500_;
}
}
default: 
{
lean_object* v_tree_4501_; 
v_tree_4501_ = lean_ctor_get(v_t_4467_, 1);
lean_inc_ref(v_tree_4501_);
lean_dec_ref_known(v_t_4467_, 2);
v_t_4467_ = v_tree_4501_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__0(lean_object* v_inst_4503_, lean_object* v_f_4504_, lean_object* v_s_4505_, lean_object* v_c_4506_){
_start:
{
lean_object* v___x_4507_; 
v___x_4507_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4503_, v_c_4506_, v_f_4504_, v_s_4505_);
return v___x_4507_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM(lean_object* v_m_4508_, lean_object* v_00_u03b1_4509_, lean_object* v_00_u03c3_4510_, lean_object* v_inst_4511_, lean_object* v_t_4512_, lean_object* v_f_4513_, lean_object* v_init_4514_){
_start:
{
lean_object* v___x_4515_; 
v___x_4515_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4511_, v_t_4512_, v_f_4513_, v_init_4514_);
return v___x_4515_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(lean_object* v_t_4516_, lean_object* v_f_4517_, lean_object* v_init_4518_){
_start:
{
lean_object* v_key_4519_; lean_object* v_val_x3f_4520_; lean_object* v_children_4521_; lean_object* v_s_4523_; 
v_key_4519_ = lean_ctor_get(v_t_4516_, 0);
lean_inc(v_key_4519_);
v_val_x3f_4520_ = lean_ctor_get(v_t_4516_, 1);
lean_inc(v_val_x3f_4520_);
v_children_4521_ = lean_ctor_get(v_t_4516_, 2);
lean_inc_ref(v_children_4521_);
lean_dec_ref(v_t_4516_);
if (lean_obj_tag(v_val_x3f_4520_) == 1)
{
lean_object* v_val_4530_; lean_object* v___x_4531_; 
v_val_4530_ = lean_ctor_get(v_val_x3f_4520_, 0);
lean_inc(v_val_4530_);
lean_dec_ref_known(v_val_x3f_4520_, 1);
lean_inc(v_f_4517_);
v___x_4531_ = lean_apply_3(v_f_4517_, v_init_4518_, v_key_4519_, v_val_4530_);
v_s_4523_ = v___x_4531_;
goto v___jp_4522_;
}
else
{
lean_dec(v_val_x3f_4520_);
lean_dec(v_key_4519_);
v_s_4523_ = v_init_4518_;
goto v___jp_4522_;
}
v___jp_4522_:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; uint8_t v___x_4526_; 
v___x_4524_ = lean_unsigned_to_nat(0u);
v___x_4525_ = lean_array_get_size(v_children_4521_);
v___x_4526_ = lean_nat_dec_lt(v___x_4524_, v___x_4525_);
if (v___x_4526_ == 0)
{
lean_dec_ref(v_children_4521_);
lean_dec(v_f_4517_);
return v_s_4523_;
}
else
{
size_t v___x_4527_; size_t v___x_4528_; lean_object* v___x_4529_; 
v___x_4527_ = ((size_t)0ULL);
v___x_4528_ = lean_usize_of_nat(v___x_4525_);
v___x_4529_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_f_4517_, v_children_4521_, v___x_4527_, v___x_4528_, v_s_4523_);
lean_dec_ref(v_children_4521_);
return v___x_4529_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(lean_object* v_f_4532_, lean_object* v_as_4533_, size_t v_i_4534_, size_t v_stop_4535_, lean_object* v_b_4536_){
_start:
{
uint8_t v___x_4537_; 
v___x_4537_ = lean_usize_dec_eq(v_i_4534_, v_stop_4535_);
if (v___x_4537_ == 0)
{
lean_object* v___x_4538_; lean_object* v___x_4539_; size_t v___x_4540_; size_t v___x_4541_; 
v___x_4538_ = lean_array_uget_borrowed(v_as_4533_, v_i_4534_);
lean_inc(v_f_4532_);
lean_inc(v___x_4538_);
v___x_4539_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v___x_4538_, v_f_4532_, v_b_4536_);
v___x_4540_ = ((size_t)1ULL);
v___x_4541_ = lean_usize_add(v_i_4534_, v___x_4540_);
v_i_4534_ = v___x_4541_;
v_b_4536_ = v___x_4539_;
goto _start;
}
else
{
lean_dec(v_f_4532_);
return v_b_4536_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_4543_, lean_object* v_as_4544_, lean_object* v_i_4545_, lean_object* v_stop_4546_, lean_object* v_b_4547_){
_start:
{
size_t v_i_boxed_4548_; size_t v_stop_boxed_4549_; lean_object* v_res_4550_; 
v_i_boxed_4548_ = lean_unbox_usize(v_i_4545_);
lean_dec(v_i_4545_);
v_stop_boxed_4549_ = lean_unbox_usize(v_stop_4546_);
lean_dec(v_stop_4546_);
v_res_4550_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_f_4543_, v_as_4544_, v_i_boxed_4548_, v_stop_boxed_4549_, v_b_4547_);
lean_dec_ref(v_as_4544_);
return v_res_4550_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(lean_object* v_t_4551_, lean_object* v_f_4552_, lean_object* v_init_4553_){
_start:
{
switch(lean_obj_tag(v_t_4551_))
{
case 0:
{
lean_object* v_tree_4554_; lean_object* v___x_4555_; 
v_tree_4554_ = lean_ctor_get(v_t_4551_, 1);
lean_inc_ref(v_tree_4554_);
lean_dec_ref_known(v_t_4551_, 2);
v___x_4555_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_tree_4554_, v_f_4552_, v_init_4553_);
return v___x_4555_;
}
case 1:
{
lean_object* v_key_4556_; lean_object* v_entry_x3f_4557_; lean_object* v_children_4558_; lean_object* v_s_4560_; 
v_key_4556_ = lean_ctor_get(v_t_4551_, 0);
lean_inc(v_key_4556_);
v_entry_x3f_4557_ = lean_ctor_get(v_t_4551_, 1);
lean_inc(v_entry_x3f_4557_);
v_children_4558_ = lean_ctor_get(v_t_4551_, 2);
lean_inc_ref(v_children_4558_);
lean_dec_ref_known(v_t_4551_, 4);
if (lean_obj_tag(v_entry_x3f_4557_) == 1)
{
lean_object* v_val_4567_; lean_object* v_fst_4568_; lean_object* v___x_4569_; 
v_val_4567_ = lean_ctor_get(v_entry_x3f_4557_, 0);
lean_inc(v_val_4567_);
lean_dec_ref_known(v_entry_x3f_4557_, 1);
v_fst_4568_ = lean_ctor_get(v_val_4567_, 0);
lean_inc(v_fst_4568_);
lean_dec(v_val_4567_);
lean_inc(v_f_4552_);
v___x_4569_ = lean_apply_3(v_f_4552_, v_init_4553_, v_key_4556_, v_fst_4568_);
v_s_4560_ = v___x_4569_;
goto v___jp_4559_;
}
else
{
lean_dec(v_entry_x3f_4557_);
lean_dec(v_key_4556_);
v_s_4560_ = v_init_4553_;
goto v___jp_4559_;
}
v___jp_4559_:
{
lean_object* v___x_4561_; lean_object* v___x_4562_; uint8_t v___x_4563_; 
v___x_4561_ = lean_unsigned_to_nat(0u);
v___x_4562_ = lean_array_get_size(v_children_4558_);
v___x_4563_ = lean_nat_dec_lt(v___x_4561_, v___x_4562_);
if (v___x_4563_ == 0)
{
lean_dec_ref(v_children_4558_);
lean_dec(v_f_4552_);
return v_s_4560_;
}
else
{
size_t v___x_4564_; size_t v___x_4565_; lean_object* v___x_4566_; 
v___x_4564_ = ((size_t)0ULL);
v___x_4565_ = lean_usize_of_nat(v___x_4562_);
v___x_4566_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4552_, v_children_4558_, v___x_4564_, v___x_4565_, v_s_4560_);
lean_dec_ref(v_children_4558_);
return v___x_4566_;
}
}
}
case 2:
{
lean_object* v_key_4570_; lean_object* v_entry_4571_; lean_object* v_expanded_4572_; lean_object* v_s_4574_; lean_object* v___x_4583_; 
v_key_4570_ = lean_ctor_get(v_t_4551_, 0);
lean_inc(v_key_4570_);
v_entry_4571_ = lean_ctor_get(v_t_4551_, 1);
lean_inc_ref(v_entry_4571_);
v_expanded_4572_ = lean_ctor_get(v_t_4551_, 2);
lean_inc_ref(v_expanded_4572_);
lean_dec_ref_known(v_t_4551_, 3);
v___x_4583_ = lean_thunk_get_own(v_entry_4571_);
lean_dec_ref(v_entry_4571_);
if (lean_obj_tag(v___x_4583_) == 1)
{
lean_object* v_val_4584_; lean_object* v_fst_4585_; lean_object* v___x_4586_; 
v_val_4584_ = lean_ctor_get(v___x_4583_, 0);
lean_inc(v_val_4584_);
lean_dec_ref_known(v___x_4583_, 1);
v_fst_4585_ = lean_ctor_get(v_val_4584_, 0);
lean_inc(v_fst_4585_);
lean_dec(v_val_4584_);
lean_inc(v_f_4552_);
v___x_4586_ = lean_apply_3(v_f_4552_, v_init_4553_, v_key_4570_, v_fst_4585_);
v_s_4574_ = v___x_4586_;
goto v___jp_4573_;
}
else
{
lean_dec(v___x_4583_);
lean_dec(v_key_4570_);
v_s_4574_ = v_init_4553_;
goto v___jp_4573_;
}
v___jp_4573_:
{
lean_object* v___x_4575_; lean_object* v_fst_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; uint8_t v___x_4579_; 
v___x_4575_ = lean_thunk_get_own(v_expanded_4572_);
lean_dec_ref(v_expanded_4572_);
v_fst_4576_ = lean_ctor_get(v___x_4575_, 0);
lean_inc(v_fst_4576_);
lean_dec(v___x_4575_);
v___x_4577_ = lean_unsigned_to_nat(0u);
v___x_4578_ = lean_array_get_size(v_fst_4576_);
v___x_4579_ = lean_nat_dec_lt(v___x_4577_, v___x_4578_);
if (v___x_4579_ == 0)
{
lean_dec(v_fst_4576_);
lean_dec(v_f_4552_);
return v_s_4574_;
}
else
{
size_t v___x_4580_; size_t v___x_4581_; lean_object* v___x_4582_; 
v___x_4580_ = ((size_t)0ULL);
v___x_4581_ = lean_usize_of_nat(v___x_4578_);
v___x_4582_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4552_, v_fst_4576_, v___x_4580_, v___x_4581_, v_s_4574_);
lean_dec(v_fst_4576_);
return v___x_4582_;
}
}
}
default: 
{
lean_object* v_tree_4587_; 
v_tree_4587_ = lean_ctor_get(v_t_4551_, 1);
lean_inc_ref(v_tree_4587_);
lean_dec_ref_known(v_t_4551_, 2);
v_t_4551_ = v_tree_4587_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(lean_object* v_f_4589_, lean_object* v_as_4590_, size_t v_i_4591_, size_t v_stop_4592_, lean_object* v_b_4593_){
_start:
{
uint8_t v___x_4594_; 
v___x_4594_ = lean_usize_dec_eq(v_i_4591_, v_stop_4592_);
if (v___x_4594_ == 0)
{
lean_object* v___x_4595_; lean_object* v___x_4596_; size_t v___x_4597_; size_t v___x_4598_; 
v___x_4595_ = lean_array_uget_borrowed(v_as_4590_, v_i_4591_);
lean_inc(v_f_4589_);
lean_inc(v___x_4595_);
v___x_4596_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v___x_4595_, v_f_4589_, v_b_4593_);
v___x_4597_ = ((size_t)1ULL);
v___x_4598_ = lean_usize_add(v_i_4591_, v___x_4597_);
v_i_4591_ = v___x_4598_;
v_b_4593_ = v___x_4596_;
goto _start;
}
else
{
lean_dec(v_f_4589_);
return v_b_4593_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg___boxed(lean_object* v_f_4600_, lean_object* v_as_4601_, lean_object* v_i_4602_, lean_object* v_stop_4603_, lean_object* v_b_4604_){
_start:
{
size_t v_i_boxed_4605_; size_t v_stop_boxed_4606_; lean_object* v_res_4607_; 
v_i_boxed_4605_ = lean_unbox_usize(v_i_4602_);
lean_dec(v_i_4602_);
v_stop_boxed_4606_ = lean_unbox_usize(v_stop_4603_);
lean_dec(v_stop_4603_);
v_res_4607_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4600_, v_as_4601_, v_i_boxed_4605_, v_stop_boxed_4606_, v_b_4604_);
lean_dec_ref(v_as_4601_);
return v_res_4607_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl___redArg(lean_object* v_t_4608_, lean_object* v_f_4609_, lean_object* v_init_4610_){
_start:
{
lean_object* v___x_4611_; 
v___x_4611_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4608_, v_f_4609_, v_init_4610_);
return v___x_4611_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl(lean_object* v_00_u03b1_4612_, lean_object* v_00_u03c3_4613_, lean_object* v_t_4614_, lean_object* v_f_4615_, lean_object* v_init_4616_){
_start:
{
lean_object* v___x_4617_; 
v___x_4617_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4614_, v_f_4615_, v_init_4616_);
return v___x_4617_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0(lean_object* v_00_u03b1_4618_, lean_object* v_00_u03c3_4619_, lean_object* v_t_4620_, lean_object* v_f_4621_, lean_object* v_init_4622_){
_start:
{
lean_object* v___x_4623_; 
v___x_4623_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4620_, v_f_4621_, v_init_4622_);
return v___x_4623_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0(lean_object* v_00_u03b1_4624_, lean_object* v_00_u03c3_4625_, lean_object* v_t_4626_, lean_object* v_f_4627_, lean_object* v_init_4628_){
_start:
{
lean_object* v___x_4629_; 
v___x_4629_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_t_4626_, v_f_4627_, v_init_4628_);
return v___x_4629_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1(lean_object* v_00_u03b1_4630_, lean_object* v_00_u03c3_4631_, lean_object* v_f_4632_, lean_object* v_as_4633_, size_t v_i_4634_, size_t v_stop_4635_, lean_object* v_b_4636_){
_start:
{
lean_object* v___x_4637_; 
v___x_4637_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4632_, v_as_4633_, v_i_4634_, v_stop_4635_, v_b_4636_);
return v___x_4637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4638_, lean_object* v_00_u03c3_4639_, lean_object* v_f_4640_, lean_object* v_as_4641_, lean_object* v_i_4642_, lean_object* v_stop_4643_, lean_object* v_b_4644_){
_start:
{
size_t v_i_boxed_4645_; size_t v_stop_boxed_4646_; lean_object* v_res_4647_; 
v_i_boxed_4645_ = lean_unbox_usize(v_i_4642_);
lean_dec(v_i_4642_);
v_stop_boxed_4646_ = lean_unbox_usize(v_stop_4643_);
lean_dec(v_stop_4643_);
v_res_4647_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1(v_00_u03b1_4638_, v_00_u03c3_4639_, v_f_4640_, v_as_4641_, v_i_boxed_4645_, v_stop_boxed_4646_, v_b_4644_);
lean_dec_ref(v_as_4641_);
return v_res_4647_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_4648_, lean_object* v_00_u03c3_4649_, lean_object* v_f_4650_, lean_object* v_as_4651_, size_t v_i_4652_, size_t v_stop_4653_, lean_object* v_b_4654_){
_start:
{
lean_object* v___x_4655_; 
v___x_4655_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_f_4650_, v_as_4651_, v_i_4652_, v_stop_4653_, v_b_4654_);
return v___x_4655_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4656_, lean_object* v_00_u03c3_4657_, lean_object* v_f_4658_, lean_object* v_as_4659_, lean_object* v_i_4660_, lean_object* v_stop_4661_, lean_object* v_b_4662_){
_start:
{
size_t v_i_boxed_4663_; size_t v_stop_boxed_4664_; lean_object* v_res_4665_; 
v_i_boxed_4663_ = lean_unbox_usize(v_i_4660_);
lean_dec(v_i_4660_);
v_stop_boxed_4664_ = lean_unbox_usize(v_stop_4661_);
lean_dec(v_stop_4661_);
v_res_4665_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1(v_00_u03b1_4656_, v_00_u03c3_4657_, v_f_4658_, v_as_4659_, v_i_boxed_4663_, v_stop_boxed_4664_, v_b_4662_);
lean_dec_ref(v_as_4659_);
return v_res_4665_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__0(lean_object* v_modIdx_4666_, lean_object* v_f_4667_, lean_object* v_s_4668_, lean_object* v_n_4669_, lean_object* v_v_4670_){
_start:
{
lean_object* v___x_4671_; lean_object* v___x_4672_; 
v___x_4671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4671_, 0, v_v_4670_);
lean_ctor_set(v___x_4671_, 1, v_modIdx_4666_);
v___x_4672_ = lean_apply_3(v_f_4667_, v_s_4668_, v_n_4669_, v___x_4671_);
return v___x_4672_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg(lean_object* v_inst_4673_, lean_object* v_t_4674_, lean_object* v_f_4675_, lean_object* v_init_4676_){
_start:
{
switch(lean_obj_tag(v_t_4674_))
{
case 0:
{
lean_object* v_modIdx_4677_; lean_object* v_tree_4678_; lean_object* v___f_4679_; lean_object* v___x_4680_; 
v_modIdx_4677_ = lean_ctor_get(v_t_4674_, 0);
lean_inc(v_modIdx_4677_);
v_tree_4678_ = lean_ctor_get(v_t_4674_, 1);
lean_inc_ref(v_tree_4678_);
lean_dec_ref_known(v_t_4674_, 2);
v___f_4679_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__0), 5, 2);
lean_closure_set(v___f_4679_, 0, v_modIdx_4677_);
lean_closure_set(v___f_4679_, 1, v_f_4675_);
v___x_4680_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_4673_, v_tree_4678_, v___f_4679_, v_init_4676_);
return v___x_4680_;
}
case 1:
{
lean_object* v_toApplicative_4681_; lean_object* v_toBind_4682_; lean_object* v_key_4683_; lean_object* v_entry_x3f_4684_; lean_object* v_children_4685_; lean_object* v___f_4686_; lean_object* v___f_4687_; 
v_toApplicative_4681_ = lean_ctor_get(v_inst_4673_, 0);
lean_inc_ref_n(v_toApplicative_4681_, 2);
v_toBind_4682_ = lean_ctor_get(v_inst_4673_, 1);
v_key_4683_ = lean_ctor_get(v_t_4674_, 0);
lean_inc(v_key_4683_);
v_entry_x3f_4684_ = lean_ctor_get(v_t_4674_, 1);
lean_inc(v_entry_x3f_4684_);
v_children_4685_ = lean_ctor_get(v_t_4674_, 2);
lean_inc_ref_n(v_children_4685_, 2);
lean_dec_ref_known(v_t_4674_, 4);
lean_inc(v_f_4675_);
lean_inc_ref_n(v_inst_4673_, 2);
v___f_4686_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__1), 4, 2);
lean_closure_set(v___f_4686_, 0, v_inst_4673_);
lean_closure_set(v___f_4686_, 1, v_f_4675_);
lean_inc_ref(v___f_4686_);
v___f_4687_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__1), 6, 4);
lean_closure_set(v___f_4687_, 0, v_toApplicative_4681_);
lean_closure_set(v___f_4687_, 1, v_children_4685_);
lean_closure_set(v___f_4687_, 2, v_inst_4673_);
lean_closure_set(v___f_4687_, 3, v___f_4686_);
if (lean_obj_tag(v_entry_x3f_4684_) == 1)
{
lean_object* v_val_4688_; lean_object* v___f_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; 
lean_inc(v_toBind_4682_);
lean_dec_ref(v___f_4686_);
lean_dec_ref(v_children_4685_);
lean_dec_ref(v_toApplicative_4681_);
lean_dec_ref(v_inst_4673_);
v_val_4688_ = lean_ctor_get(v_entry_x3f_4684_, 0);
lean_inc(v_val_4688_);
lean_dec_ref_known(v_entry_x3f_4684_, 1);
v___f_4689_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4689_, 0, v___f_4687_);
v___x_4690_ = lean_apply_3(v_f_4675_, v_init_4676_, v_key_4683_, v_val_4688_);
v___x_4691_ = lean_apply_4(v_toBind_4682_, lean_box(0), lean_box(0), v___x_4690_, v___f_4689_);
return v___x_4691_;
}
else
{
lean_object* v___x_4692_; lean_object* v___x_4693_; 
lean_dec_ref(v___f_4687_);
lean_dec(v_entry_x3f_4684_);
lean_dec(v_key_4683_);
lean_dec(v_f_4675_);
v___x_4692_ = lean_box(0);
v___x_4693_ = l_Lean_ImportedConsts_foldlM___redArg___lam__1(v_toApplicative_4681_, v_children_4685_, v_inst_4673_, v___f_4686_, v___x_4692_, v_init_4676_);
return v___x_4693_;
}
}
case 2:
{
lean_object* v_toApplicative_4694_; lean_object* v_toBind_4695_; lean_object* v_key_4696_; lean_object* v_entry_4697_; lean_object* v_expanded_4698_; lean_object* v___f_4699_; lean_object* v___f_4700_; lean_object* v___x_4701_; 
v_toApplicative_4694_ = lean_ctor_get(v_inst_4673_, 0);
lean_inc_ref_n(v_toApplicative_4694_, 2);
v_toBind_4695_ = lean_ctor_get(v_inst_4673_, 1);
v_key_4696_ = lean_ctor_get(v_t_4674_, 0);
lean_inc(v_key_4696_);
v_entry_4697_ = lean_ctor_get(v_t_4674_, 1);
lean_inc_ref(v_entry_4697_);
v_expanded_4698_ = lean_ctor_get(v_t_4674_, 2);
lean_inc_ref_n(v_expanded_4698_, 2);
lean_dec_ref_known(v_t_4674_, 3);
lean_inc(v_f_4675_);
lean_inc_ref_n(v_inst_4673_, 2);
v___f_4699_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__1), 4, 2);
lean_closure_set(v___f_4699_, 0, v_inst_4673_);
lean_closure_set(v___f_4699_, 1, v_f_4675_);
lean_inc_ref(v___f_4699_);
v___f_4700_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_4700_, 0, v_expanded_4698_);
lean_closure_set(v___f_4700_, 1, v_toApplicative_4694_);
lean_closure_set(v___f_4700_, 2, v_inst_4673_);
lean_closure_set(v___f_4700_, 3, v___f_4699_);
v___x_4701_ = lean_thunk_get_own(v_entry_4697_);
lean_dec_ref(v_entry_4697_);
if (lean_obj_tag(v___x_4701_) == 1)
{
lean_object* v_val_4702_; lean_object* v___f_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; 
lean_inc(v_toBind_4695_);
lean_dec_ref(v___f_4699_);
lean_dec_ref(v_expanded_4698_);
lean_dec_ref(v_toApplicative_4694_);
lean_dec_ref(v_inst_4673_);
v_val_4702_ = lean_ctor_get(v___x_4701_, 0);
lean_inc(v_val_4702_);
lean_dec_ref_known(v___x_4701_, 1);
v___f_4703_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4703_, 0, v___f_4700_);
v___x_4704_ = lean_apply_3(v_f_4675_, v_init_4676_, v_key_4696_, v_val_4702_);
v___x_4705_ = lean_apply_4(v_toBind_4695_, lean_box(0), lean_box(0), v___x_4704_, v___f_4703_);
return v___x_4705_;
}
else
{
lean_object* v___x_4706_; lean_object* v___x_4707_; 
lean_dec(v___x_4701_);
lean_dec_ref(v___f_4700_);
lean_dec(v_key_4696_);
lean_dec(v_f_4675_);
v___x_4706_ = lean_box(0);
v___x_4707_ = l_Lean_ImportedConsts_foldlM___redArg___lam__4(v_expanded_4698_, v_toApplicative_4694_, v_inst_4673_, v___f_4699_, v___x_4706_, v_init_4676_);
lean_dec_ref(v_expanded_4698_);
return v___x_4707_;
}
}
default: 
{
lean_object* v_tree_4708_; 
v_tree_4708_ = lean_ctor_get(v_t_4674_, 1);
lean_inc_ref(v_tree_4708_);
lean_dec_ref_known(v_t_4674_, 2);
v_t_4674_ = v_tree_4708_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__1(lean_object* v_inst_4710_, lean_object* v_f_4711_, lean_object* v_s_4712_, lean_object* v_c_4713_){
_start:
{
lean_object* v___x_4714_; 
v___x_4714_ = l_Lean_ImportedConsts_foldlEntriesM___redArg(v_inst_4710_, v_c_4713_, v_f_4711_, v_s_4712_);
return v___x_4714_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM(lean_object* v_m_4715_, lean_object* v_00_u03b1_4716_, lean_object* v_00_u03c3_4717_, lean_object* v_inst_4718_, lean_object* v_t_4719_, lean_object* v_f_4720_, lean_object* v_init_4721_){
_start:
{
lean_object* v___x_4722_; 
v___x_4722_ = l_Lean_ImportedConsts_foldlEntriesM___redArg(v_inst_4718_, v_t_4719_, v_f_4720_, v_init_4721_);
return v___x_4722_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg___lam__0(lean_object* v_f_4723_, lean_object* v_x_4724_, lean_object* v_n_4725_, lean_object* v_v_4726_){
_start:
{
lean_object* v___x_4727_; 
v___x_4727_ = lean_apply_2(v_f_4723_, v_n_4725_, v_v_4726_);
return v___x_4727_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg(lean_object* v_inst_4728_, lean_object* v_t_4729_, lean_object* v_f_4730_){
_start:
{
lean_object* v___f_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; 
v___f_4731_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_forM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_4731_, 0, v_f_4730_);
v___x_4732_ = lean_box(0);
v___x_4733_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4728_, v_t_4729_, v___f_4731_, v___x_4732_);
return v___x_4733_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM(lean_object* v_m_4734_, lean_object* v_00_u03b1_4735_, lean_object* v_inst_4736_, lean_object* v_t_4737_, lean_object* v_f_4738_){
_start:
{
lean_object* v___x_4739_; 
v___x_4739_ = l_Lean_ImportedConsts_forM___redArg(v_inst_4736_, v_t_4737_, v_f_4738_);
return v___x_4739_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(lean_object* v_n_4740_, lean_object* v_x_4741_, lean_object* v_x_4742_){
_start:
{
lean_object* v___x_4743_; lean_object* v___x_4744_; 
v___x_4743_ = lean_unsigned_to_nat(1u);
v___x_4744_ = lean_nat_add(v_n_4740_, v___x_4743_);
return v___x_4744_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0___boxed(lean_object* v_n_4745_, lean_object* v_x_4746_, lean_object* v_x_4747_){
_start:
{
lean_object* v_res_4748_; 
v_res_4748_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(v_n_4745_, v_x_4746_, v_x_4747_);
lean_dec(v_x_4747_);
lean_dec(v_x_4746_);
lean_dec(v_n_4745_);
return v_res_4748_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(lean_object* v_t_4749_, lean_object* v_init_4750_){
_start:
{
lean_object* v_val_x3f_4751_; lean_object* v_children_4752_; lean_object* v_s_4754_; 
v_val_x3f_4751_ = lean_ctor_get(v_t_4749_, 1);
v_children_4752_ = lean_ctor_get(v_t_4749_, 2);
if (lean_obj_tag(v_val_x3f_4751_) == 1)
{
lean_object* v___x_4761_; lean_object* v___x_4762_; 
v___x_4761_ = lean_unsigned_to_nat(1u);
v___x_4762_ = lean_nat_add(v_init_4750_, v___x_4761_);
lean_dec(v_init_4750_);
v_s_4754_ = v___x_4762_;
goto v___jp_4753_;
}
else
{
v_s_4754_ = v_init_4750_;
goto v___jp_4753_;
}
v___jp_4753_:
{
lean_object* v___x_4755_; lean_object* v___x_4756_; uint8_t v___x_4757_; 
v___x_4755_ = lean_unsigned_to_nat(0u);
v___x_4756_ = lean_array_get_size(v_children_4752_);
v___x_4757_ = lean_nat_dec_lt(v___x_4755_, v___x_4756_);
if (v___x_4757_ == 0)
{
return v_s_4754_;
}
else
{
size_t v___x_4758_; size_t v___x_4759_; lean_object* v___x_4760_; 
v___x_4758_ = ((size_t)0ULL);
v___x_4759_ = lean_usize_of_nat(v___x_4756_);
v___x_4760_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_children_4752_, v___x_4758_, v___x_4759_, v_s_4754_);
return v___x_4760_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(lean_object* v_as_4763_, size_t v_i_4764_, size_t v_stop_4765_, lean_object* v_b_4766_){
_start:
{
uint8_t v___x_4767_; 
v___x_4767_ = lean_usize_dec_eq(v_i_4764_, v_stop_4765_);
if (v___x_4767_ == 0)
{
lean_object* v___x_4768_; lean_object* v___x_4769_; size_t v___x_4770_; size_t v___x_4771_; 
v___x_4768_ = lean_array_uget_borrowed(v_as_4763_, v_i_4764_);
v___x_4769_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v___x_4768_, v_b_4766_);
v___x_4770_ = ((size_t)1ULL);
v___x_4771_ = lean_usize_add(v_i_4764_, v___x_4770_);
v_i_4764_ = v___x_4771_;
v_b_4766_ = v___x_4769_;
goto _start;
}
else
{
return v_b_4766_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_4773_, lean_object* v_i_4774_, lean_object* v_stop_4775_, lean_object* v_b_4776_){
_start:
{
size_t v_i_boxed_4777_; size_t v_stop_boxed_4778_; lean_object* v_res_4779_; 
v_i_boxed_4777_ = lean_unbox_usize(v_i_4774_);
lean_dec(v_i_4774_);
v_stop_boxed_4778_ = lean_unbox_usize(v_stop_4775_);
lean_dec(v_stop_4775_);
v_res_4779_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_as_4773_, v_i_boxed_4777_, v_stop_boxed_4778_, v_b_4776_);
lean_dec_ref(v_as_4773_);
return v_res_4779_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___boxed(lean_object* v_t_4780_, lean_object* v_init_4781_){
_start:
{
lean_object* v_res_4782_; 
v_res_4782_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_4780_, v_init_4781_);
lean_dec_ref(v_t_4780_);
return v_res_4782_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(lean_object* v_t_4783_, lean_object* v_init_4784_){
_start:
{
switch(lean_obj_tag(v_t_4783_))
{
case 0:
{
lean_object* v_tree_4785_; lean_object* v___x_4786_; 
v_tree_4785_ = lean_ctor_get(v_t_4783_, 1);
v___x_4786_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_tree_4785_, v_init_4784_);
return v___x_4786_;
}
case 1:
{
lean_object* v_key_4787_; lean_object* v_entry_x3f_4788_; lean_object* v_children_4789_; lean_object* v_s_4791_; 
v_key_4787_ = lean_ctor_get(v_t_4783_, 0);
v_entry_x3f_4788_ = lean_ctor_get(v_t_4783_, 1);
v_children_4789_ = lean_ctor_get(v_t_4783_, 2);
if (lean_obj_tag(v_entry_x3f_4788_) == 1)
{
lean_object* v_val_4798_; lean_object* v_fst_4799_; lean_object* v___x_4800_; 
v_val_4798_ = lean_ctor_get(v_entry_x3f_4788_, 0);
v_fst_4799_ = lean_ctor_get(v_val_4798_, 0);
v___x_4800_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(v_init_4784_, v_key_4787_, v_fst_4799_);
lean_dec(v_init_4784_);
v_s_4791_ = v___x_4800_;
goto v___jp_4790_;
}
else
{
v_s_4791_ = v_init_4784_;
goto v___jp_4790_;
}
v___jp_4790_:
{
lean_object* v___x_4792_; lean_object* v___x_4793_; uint8_t v___x_4794_; 
v___x_4792_ = lean_unsigned_to_nat(0u);
v___x_4793_ = lean_array_get_size(v_children_4789_);
v___x_4794_ = lean_nat_dec_lt(v___x_4792_, v___x_4793_);
if (v___x_4794_ == 0)
{
return v_s_4791_;
}
else
{
size_t v___x_4795_; size_t v___x_4796_; lean_object* v___x_4797_; 
v___x_4795_ = ((size_t)0ULL);
v___x_4796_ = lean_usize_of_nat(v___x_4793_);
v___x_4797_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_children_4789_, v___x_4795_, v___x_4796_, v_s_4791_);
return v___x_4797_;
}
}
}
case 2:
{
lean_object* v_key_4801_; lean_object* v_entry_4802_; lean_object* v_expanded_4803_; lean_object* v_s_4805_; lean_object* v___x_4814_; 
v_key_4801_ = lean_ctor_get(v_t_4783_, 0);
v_entry_4802_ = lean_ctor_get(v_t_4783_, 1);
v_expanded_4803_ = lean_ctor_get(v_t_4783_, 2);
v___x_4814_ = lean_thunk_get_own(v_entry_4802_);
if (lean_obj_tag(v___x_4814_) == 1)
{
lean_object* v_val_4815_; lean_object* v_fst_4816_; lean_object* v___x_4817_; 
v_val_4815_ = lean_ctor_get(v___x_4814_, 0);
lean_inc(v_val_4815_);
lean_dec_ref_known(v___x_4814_, 1);
v_fst_4816_ = lean_ctor_get(v_val_4815_, 0);
lean_inc(v_fst_4816_);
lean_dec(v_val_4815_);
v___x_4817_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(v_init_4784_, v_key_4801_, v_fst_4816_);
lean_dec(v_fst_4816_);
lean_dec(v_init_4784_);
v_s_4805_ = v___x_4817_;
goto v___jp_4804_;
}
else
{
lean_dec(v___x_4814_);
v_s_4805_ = v_init_4784_;
goto v___jp_4804_;
}
v___jp_4804_:
{
lean_object* v___x_4806_; lean_object* v_fst_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; uint8_t v___x_4810_; 
v___x_4806_ = lean_thunk_get_own(v_expanded_4803_);
v_fst_4807_ = lean_ctor_get(v___x_4806_, 0);
lean_inc(v_fst_4807_);
lean_dec(v___x_4806_);
v___x_4808_ = lean_unsigned_to_nat(0u);
v___x_4809_ = lean_array_get_size(v_fst_4807_);
v___x_4810_ = lean_nat_dec_lt(v___x_4808_, v___x_4809_);
if (v___x_4810_ == 0)
{
lean_dec(v_fst_4807_);
return v_s_4805_;
}
else
{
size_t v___x_4811_; size_t v___x_4812_; lean_object* v___x_4813_; 
v___x_4811_ = ((size_t)0ULL);
v___x_4812_ = lean_usize_of_nat(v___x_4809_);
v___x_4813_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_fst_4807_, v___x_4811_, v___x_4812_, v_s_4805_);
lean_dec(v_fst_4807_);
return v___x_4813_;
}
}
}
default: 
{
lean_object* v_tree_4818_; 
v_tree_4818_ = lean_ctor_get(v_t_4783_, 1);
v_t_4783_ = v_tree_4818_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(lean_object* v_as_4820_, size_t v_i_4821_, size_t v_stop_4822_, lean_object* v_b_4823_){
_start:
{
uint8_t v___x_4824_; 
v___x_4824_ = lean_usize_dec_eq(v_i_4821_, v_stop_4822_);
if (v___x_4824_ == 0)
{
lean_object* v___x_4825_; lean_object* v___x_4826_; size_t v___x_4827_; size_t v___x_4828_; 
v___x_4825_ = lean_array_uget_borrowed(v_as_4820_, v_i_4821_);
v___x_4826_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v___x_4825_, v_b_4823_);
v___x_4827_ = ((size_t)1ULL);
v___x_4828_ = lean_usize_add(v_i_4821_, v___x_4827_);
v_i_4821_ = v___x_4828_;
v_b_4823_ = v___x_4826_;
goto _start;
}
else
{
return v_b_4823_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg___boxed(lean_object* v_as_4830_, lean_object* v_i_4831_, lean_object* v_stop_4832_, lean_object* v_b_4833_){
_start:
{
size_t v_i_boxed_4834_; size_t v_stop_boxed_4835_; lean_object* v_res_4836_; 
v_i_boxed_4834_ = lean_unbox_usize(v_i_4831_);
lean_dec(v_i_4831_);
v_stop_boxed_4835_ = lean_unbox_usize(v_stop_4832_);
lean_dec(v_stop_4832_);
v_res_4836_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_as_4830_, v_i_boxed_4834_, v_stop_boxed_4835_, v_b_4833_);
lean_dec_ref(v_as_4830_);
return v_res_4836_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___boxed(lean_object* v_t_4837_, lean_object* v_init_4838_){
_start:
{
lean_object* v_res_4839_; 
v_res_4839_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_4837_, v_init_4838_);
lean_dec_ref(v_t_4837_);
return v_res_4839_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg(lean_object* v_t_4840_){
_start:
{
lean_object* v___x_4841_; lean_object* v___x_4842_; 
v___x_4841_ = lean_unsigned_to_nat(0u);
v___x_4842_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_4840_, v___x_4841_);
return v___x_4842_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg___boxed(lean_object* v_t_4843_){
_start:
{
lean_object* v_res_4844_; 
v_res_4844_ = l_Lean_ImportedConsts_size___redArg(v_t_4843_);
lean_dec_ref(v_t_4843_);
return v_res_4844_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size(lean_object* v_00_u03b1_4845_, lean_object* v_t_4846_){
_start:
{
lean_object* v___x_4847_; 
v___x_4847_ = l_Lean_ImportedConsts_size___redArg(v_t_4846_);
return v___x_4847_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___boxed(lean_object* v_00_u03b1_4848_, lean_object* v_t_4849_){
_start:
{
lean_object* v_res_4850_; 
v_res_4850_ = l_Lean_ImportedConsts_size(v_00_u03b1_4848_, v_t_4849_);
lean_dec_ref(v_t_4849_);
return v_res_4850_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(lean_object* v_00_u03b1_4851_, lean_object* v_t_4852_, lean_object* v_init_4853_){
_start:
{
lean_object* v___x_4854_; 
v___x_4854_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_4852_, v_init_4853_);
return v___x_4854_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___boxed(lean_object* v_00_u03b1_4855_, lean_object* v_t_4856_, lean_object* v_init_4857_){
_start:
{
lean_object* v_res_4858_; 
v_res_4858_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(v_00_u03b1_4855_, v_t_4856_, v_init_4857_);
lean_dec_ref(v_t_4856_);
return v_res_4858_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(lean_object* v_00_u03b1_4859_, lean_object* v_t_4860_, lean_object* v_init_4861_){
_start:
{
lean_object* v___x_4862_; 
v___x_4862_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_4860_, v_init_4861_);
return v___x_4862_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___boxed(lean_object* v_00_u03b1_4863_, lean_object* v_t_4864_, lean_object* v_init_4865_){
_start:
{
lean_object* v_res_4866_; 
v_res_4866_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(v_00_u03b1_4863_, v_t_4864_, v_init_4865_);
lean_dec_ref(v_t_4864_);
return v_res_4866_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1(lean_object* v_00_u03b1_4867_, lean_object* v_as_4868_, size_t v_i_4869_, size_t v_stop_4870_, lean_object* v_b_4871_){
_start:
{
lean_object* v___x_4872_; 
v___x_4872_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_as_4868_, v_i_4869_, v_stop_4870_, v_b_4871_);
return v___x_4872_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4873_, lean_object* v_as_4874_, lean_object* v_i_4875_, lean_object* v_stop_4876_, lean_object* v_b_4877_){
_start:
{
size_t v_i_boxed_4878_; size_t v_stop_boxed_4879_; lean_object* v_res_4880_; 
v_i_boxed_4878_ = lean_unbox_usize(v_i_4875_);
lean_dec(v_i_4875_);
v_stop_boxed_4879_ = lean_unbox_usize(v_stop_4876_);
lean_dec(v_stop_4876_);
v_res_4880_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1(v_00_u03b1_4873_, v_as_4874_, v_i_boxed_4878_, v_stop_boxed_4879_, v_b_4877_);
lean_dec_ref(v_as_4874_);
return v_res_4880_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_4881_, lean_object* v_as_4882_, size_t v_i_4883_, size_t v_stop_4884_, lean_object* v_b_4885_){
_start:
{
lean_object* v___x_4886_; 
v___x_4886_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_as_4882_, v_i_4883_, v_stop_4884_, v_b_4885_);
return v___x_4886_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4887_, lean_object* v_as_4888_, lean_object* v_i_4889_, lean_object* v_stop_4890_, lean_object* v_b_4891_){
_start:
{
size_t v_i_boxed_4892_; size_t v_stop_boxed_4893_; lean_object* v_res_4894_; 
v_i_boxed_4892_ = lean_unbox_usize(v_i_4889_);
lean_dec(v_i_4889_);
v_stop_boxed_4893_ = lean_unbox_usize(v_stop_4890_);
lean_dec(v_stop_4890_);
v_res_4894_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(v_00_u03b1_4887_, v_as_4888_, v_i_boxed_4892_, v_stop_boxed_4893_, v_b_4891_);
lean_dec_ref(v_as_4888_);
return v_res_4894_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold___redArg(lean_object* v_t_4895_, lean_object* v_f_4896_, lean_object* v_init_4897_){
_start:
{
lean_object* v___x_4898_; 
v___x_4898_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4895_, v_f_4896_, v_init_4897_);
return v___x_4898_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold(lean_object* v_00_u03b1_4899_, lean_object* v_00_u03c3_4900_, lean_object* v_t_4901_, lean_object* v_f_4902_, lean_object* v_init_4903_){
_start:
{
lean_object* v___x_4904_; 
v___x_4904_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4901_, v_f_4902_, v_init_4903_);
return v___x_4904_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM___redArg(lean_object* v_inst_4905_, lean_object* v_t_4906_, lean_object* v_f_4907_, lean_object* v_init_4908_){
_start:
{
lean_object* v___x_4909_; 
v___x_4909_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4905_, v_t_4906_, v_f_4907_, v_init_4908_);
return v___x_4909_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM(lean_object* v_m_4910_, lean_object* v_00_u03b1_4911_, lean_object* v_00_u03c3_4912_, lean_object* v_inst_4913_, lean_object* v_t_4914_, lean_object* v_f_4915_, lean_object* v_init_4916_){
_start:
{
lean_object* v___x_4917_; 
v___x_4917_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4913_, v_t_4914_, v_f_4915_, v_init_4916_);
return v___x_4917_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(lean_object* v_t_4918_, lean_object* v_init_4919_){
_start:
{
lean_object* v_key_4920_; lean_object* v_val_x3f_4921_; lean_object* v_children_4922_; lean_object* v_s_4924_; 
v_key_4920_ = lean_ctor_get(v_t_4918_, 0);
v_val_x3f_4921_ = lean_ctor_get(v_t_4918_, 1);
v_children_4922_ = lean_ctor_get(v_t_4918_, 2);
if (lean_obj_tag(v_val_x3f_4921_) == 1)
{
lean_object* v_val_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; 
v_val_4931_ = lean_ctor_get(v_val_x3f_4921_, 0);
lean_inc(v_val_4931_);
lean_inc(v_key_4920_);
v___x_4932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4932_, 0, v_key_4920_);
lean_ctor_set(v___x_4932_, 1, v_val_4931_);
v___x_4933_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4933_, 0, v___x_4932_);
lean_ctor_set(v___x_4933_, 1, v_init_4919_);
v_s_4924_ = v___x_4933_;
goto v___jp_4923_;
}
else
{
v_s_4924_ = v_init_4919_;
goto v___jp_4923_;
}
v___jp_4923_:
{
lean_object* v___x_4925_; lean_object* v___x_4926_; uint8_t v___x_4927_; 
v___x_4925_ = lean_unsigned_to_nat(0u);
v___x_4926_ = lean_array_get_size(v_children_4922_);
v___x_4927_ = lean_nat_dec_lt(v___x_4925_, v___x_4926_);
if (v___x_4927_ == 0)
{
return v_s_4924_;
}
else
{
size_t v___x_4928_; size_t v___x_4929_; lean_object* v___x_4930_; 
v___x_4928_ = ((size_t)0ULL);
v___x_4929_ = lean_usize_of_nat(v___x_4926_);
v___x_4930_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v_children_4922_, v___x_4928_, v___x_4929_, v_s_4924_);
return v___x_4930_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(lean_object* v_as_4934_, size_t v_i_4935_, size_t v_stop_4936_, lean_object* v_b_4937_){
_start:
{
uint8_t v___x_4938_; 
v___x_4938_ = lean_usize_dec_eq(v_i_4935_, v_stop_4936_);
if (v___x_4938_ == 0)
{
lean_object* v___x_4939_; lean_object* v___x_4940_; size_t v___x_4941_; size_t v___x_4942_; 
v___x_4939_ = lean_array_uget_borrowed(v_as_4934_, v_i_4935_);
v___x_4940_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v___x_4939_, v_b_4937_);
v___x_4941_ = ((size_t)1ULL);
v___x_4942_ = lean_usize_add(v_i_4935_, v___x_4941_);
v_i_4935_ = v___x_4942_;
v_b_4937_ = v___x_4940_;
goto _start;
}
else
{
return v_b_4937_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_4944_, lean_object* v_i_4945_, lean_object* v_stop_4946_, lean_object* v_b_4947_){
_start:
{
size_t v_i_boxed_4948_; size_t v_stop_boxed_4949_; lean_object* v_res_4950_; 
v_i_boxed_4948_ = lean_unbox_usize(v_i_4945_);
lean_dec(v_i_4945_);
v_stop_boxed_4949_ = lean_unbox_usize(v_stop_4946_);
lean_dec(v_stop_4946_);
v_res_4950_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v_as_4944_, v_i_boxed_4948_, v_stop_boxed_4949_, v_b_4947_);
lean_dec_ref(v_as_4944_);
return v_res_4950_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg___boxed(lean_object* v_t_4951_, lean_object* v_init_4952_){
_start:
{
lean_object* v_res_4953_; 
v_res_4953_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v_t_4951_, v_init_4952_);
lean_dec_ref(v_t_4951_);
return v_res_4953_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg___lam__0(lean_object* v_l_4954_, lean_object* v_n_4955_, lean_object* v_v_4956_){
_start:
{
lean_object* v___x_4957_; lean_object* v___x_4958_; 
v___x_4957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4957_, 0, v_n_4955_);
lean_ctor_set(v___x_4957_, 1, v_v_4956_);
v___x_4958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4958_, 0, v___x_4957_);
lean_ctor_set(v___x_4958_, 1, v_l_4954_);
return v___x_4958_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(lean_object* v_t_4959_, lean_object* v_init_4960_){
_start:
{
switch(lean_obj_tag(v_t_4959_))
{
case 0:
{
lean_object* v_tree_4961_; lean_object* v___x_4962_; 
v_tree_4961_ = lean_ctor_get(v_t_4959_, 1);
lean_inc_ref(v_tree_4961_);
lean_dec_ref_known(v_t_4959_, 2);
v___x_4962_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v_tree_4961_, v_init_4960_);
lean_dec_ref(v_tree_4961_);
return v___x_4962_;
}
case 1:
{
lean_object* v_key_4963_; lean_object* v_entry_x3f_4964_; lean_object* v_children_4965_; lean_object* v_s_4967_; 
v_key_4963_ = lean_ctor_get(v_t_4959_, 0);
lean_inc(v_key_4963_);
v_entry_x3f_4964_ = lean_ctor_get(v_t_4959_, 1);
lean_inc(v_entry_x3f_4964_);
v_children_4965_ = lean_ctor_get(v_t_4959_, 2);
lean_inc_ref(v_children_4965_);
lean_dec_ref_known(v_t_4959_, 4);
if (lean_obj_tag(v_entry_x3f_4964_) == 1)
{
lean_object* v_val_4974_; lean_object* v_fst_4975_; lean_object* v___x_4976_; 
v_val_4974_ = lean_ctor_get(v_entry_x3f_4964_, 0);
lean_inc(v_val_4974_);
lean_dec_ref_known(v_entry_x3f_4964_, 1);
v_fst_4975_ = lean_ctor_get(v_val_4974_, 0);
lean_inc(v_fst_4975_);
lean_dec(v_val_4974_);
v___x_4976_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg___lam__0(v_init_4960_, v_key_4963_, v_fst_4975_);
v_s_4967_ = v___x_4976_;
goto v___jp_4966_;
}
else
{
lean_dec(v_entry_x3f_4964_);
lean_dec(v_key_4963_);
v_s_4967_ = v_init_4960_;
goto v___jp_4966_;
}
v___jp_4966_:
{
lean_object* v___x_4968_; lean_object* v___x_4969_; uint8_t v___x_4970_; 
v___x_4968_ = lean_unsigned_to_nat(0u);
v___x_4969_ = lean_array_get_size(v_children_4965_);
v___x_4970_ = lean_nat_dec_lt(v___x_4968_, v___x_4969_);
if (v___x_4970_ == 0)
{
lean_dec_ref(v_children_4965_);
return v_s_4967_;
}
else
{
size_t v___x_4971_; size_t v___x_4972_; lean_object* v___x_4973_; 
v___x_4971_ = ((size_t)0ULL);
v___x_4972_ = lean_usize_of_nat(v___x_4969_);
v___x_4973_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_children_4965_, v___x_4971_, v___x_4972_, v_s_4967_);
lean_dec_ref(v_children_4965_);
return v___x_4973_;
}
}
}
case 2:
{
lean_object* v_key_4977_; lean_object* v_entry_4978_; lean_object* v_expanded_4979_; lean_object* v_s_4981_; lean_object* v___x_4990_; 
v_key_4977_ = lean_ctor_get(v_t_4959_, 0);
lean_inc(v_key_4977_);
v_entry_4978_ = lean_ctor_get(v_t_4959_, 1);
lean_inc_ref(v_entry_4978_);
v_expanded_4979_ = lean_ctor_get(v_t_4959_, 2);
lean_inc_ref(v_expanded_4979_);
lean_dec_ref_known(v_t_4959_, 3);
v___x_4990_ = lean_thunk_get_own(v_entry_4978_);
lean_dec_ref(v_entry_4978_);
if (lean_obj_tag(v___x_4990_) == 1)
{
lean_object* v_val_4991_; lean_object* v_fst_4992_; lean_object* v___x_4993_; 
v_val_4991_ = lean_ctor_get(v___x_4990_, 0);
lean_inc(v_val_4991_);
lean_dec_ref_known(v___x_4990_, 1);
v_fst_4992_ = lean_ctor_get(v_val_4991_, 0);
lean_inc(v_fst_4992_);
lean_dec(v_val_4991_);
v___x_4993_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg___lam__0(v_init_4960_, v_key_4977_, v_fst_4992_);
v_s_4981_ = v___x_4993_;
goto v___jp_4980_;
}
else
{
lean_dec(v___x_4990_);
lean_dec(v_key_4977_);
v_s_4981_ = v_init_4960_;
goto v___jp_4980_;
}
v___jp_4980_:
{
lean_object* v___x_4982_; lean_object* v_fst_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; uint8_t v___x_4986_; 
v___x_4982_ = lean_thunk_get_own(v_expanded_4979_);
lean_dec_ref(v_expanded_4979_);
v_fst_4983_ = lean_ctor_get(v___x_4982_, 0);
lean_inc(v_fst_4983_);
lean_dec(v___x_4982_);
v___x_4984_ = lean_unsigned_to_nat(0u);
v___x_4985_ = lean_array_get_size(v_fst_4983_);
v___x_4986_ = lean_nat_dec_lt(v___x_4984_, v___x_4985_);
if (v___x_4986_ == 0)
{
lean_dec(v_fst_4983_);
return v_s_4981_;
}
else
{
size_t v___x_4987_; size_t v___x_4988_; lean_object* v___x_4989_; 
v___x_4987_ = ((size_t)0ULL);
v___x_4988_ = lean_usize_of_nat(v___x_4985_);
v___x_4989_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_fst_4983_, v___x_4987_, v___x_4988_, v_s_4981_);
lean_dec(v_fst_4983_);
return v___x_4989_;
}
}
}
default: 
{
lean_object* v_tree_4994_; 
v_tree_4994_ = lean_ctor_get(v_t_4959_, 1);
lean_inc_ref(v_tree_4994_);
lean_dec_ref_known(v_t_4959_, 2);
v_t_4959_ = v_tree_4994_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(lean_object* v_as_4996_, size_t v_i_4997_, size_t v_stop_4998_, lean_object* v_b_4999_){
_start:
{
uint8_t v___x_5000_; 
v___x_5000_ = lean_usize_dec_eq(v_i_4997_, v_stop_4998_);
if (v___x_5000_ == 0)
{
lean_object* v___x_5001_; lean_object* v___x_5002_; size_t v___x_5003_; size_t v___x_5004_; 
v___x_5001_ = lean_array_uget_borrowed(v_as_4996_, v_i_4997_);
lean_inc(v___x_5001_);
v___x_5002_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(v___x_5001_, v_b_4999_);
v___x_5003_ = ((size_t)1ULL);
v___x_5004_ = lean_usize_add(v_i_4997_, v___x_5003_);
v_i_4997_ = v___x_5004_;
v_b_4999_ = v___x_5002_;
goto _start;
}
else
{
return v_b_4999_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg___boxed(lean_object* v_as_5006_, lean_object* v_i_5007_, lean_object* v_stop_5008_, lean_object* v_b_5009_){
_start:
{
size_t v_i_boxed_5010_; size_t v_stop_boxed_5011_; lean_object* v_res_5012_; 
v_i_boxed_5010_ = lean_unbox_usize(v_i_5007_);
lean_dec(v_i_5007_);
v_stop_boxed_5011_ = lean_unbox_usize(v_stop_5008_);
lean_dec(v_stop_5008_);
v_res_5012_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_as_5006_, v_i_boxed_5010_, v_stop_boxed_5011_, v_b_5009_);
lean_dec_ref(v_as_5006_);
return v_res_5012_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toList___redArg(lean_object* v_t_5013_){
_start:
{
lean_object* v___x_5014_; lean_object* v___x_5015_; 
v___x_5014_ = lean_box(0);
v___x_5015_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(v_t_5013_, v___x_5014_);
return v___x_5015_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toList(lean_object* v_00_u03b1_5016_, lean_object* v_t_5017_){
_start:
{
lean_object* v___x_5018_; 
v___x_5018_ = l_Lean_ImportedConsts_toList___redArg(v_t_5017_);
return v___x_5018_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0(lean_object* v_00_u03b1_5019_, lean_object* v_t_5020_, lean_object* v_init_5021_){
_start:
{
lean_object* v___x_5022_; 
v___x_5022_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(v_t_5020_, v_init_5021_);
return v___x_5022_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0(lean_object* v_00_u03b1_5023_, lean_object* v_t_5024_, lean_object* v_init_5025_){
_start:
{
lean_object* v___x_5026_; 
v___x_5026_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v_t_5024_, v_init_5025_);
return v___x_5026_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5027_, lean_object* v_t_5028_, lean_object* v_init_5029_){
_start:
{
lean_object* v_res_5030_; 
v_res_5030_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0(v_00_u03b1_5027_, v_t_5028_, v_init_5029_);
lean_dec_ref(v_t_5028_);
return v_res_5030_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1(lean_object* v_00_u03b1_5031_, lean_object* v_as_5032_, size_t v_i_5033_, size_t v_stop_5034_, lean_object* v_b_5035_){
_start:
{
lean_object* v___x_5036_; 
v___x_5036_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_as_5032_, v_i_5033_, v_stop_5034_, v_b_5035_);
return v___x_5036_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5037_, lean_object* v_as_5038_, lean_object* v_i_5039_, lean_object* v_stop_5040_, lean_object* v_b_5041_){
_start:
{
size_t v_i_boxed_5042_; size_t v_stop_boxed_5043_; lean_object* v_res_5044_; 
v_i_boxed_5042_ = lean_unbox_usize(v_i_5039_);
lean_dec(v_i_5039_);
v_stop_boxed_5043_ = lean_unbox_usize(v_stop_5040_);
lean_dec(v_stop_5040_);
v_res_5044_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1(v_00_u03b1_5037_, v_as_5038_, v_i_boxed_5042_, v_stop_boxed_5043_, v_b_5041_);
lean_dec_ref(v_as_5038_);
return v_res_5044_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5045_, lean_object* v_as_5046_, size_t v_i_5047_, size_t v_stop_5048_, lean_object* v_b_5049_){
_start:
{
lean_object* v___x_5050_; 
v___x_5050_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v_as_5046_, v_i_5047_, v_stop_5048_, v_b_5049_);
return v___x_5050_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5051_, lean_object* v_as_5052_, lean_object* v_i_5053_, lean_object* v_stop_5054_, lean_object* v_b_5055_){
_start:
{
size_t v_i_boxed_5056_; size_t v_stop_boxed_5057_; lean_object* v_res_5058_; 
v_i_boxed_5056_ = lean_unbox_usize(v_i_5053_);
lean_dec(v_i_5053_);
v_stop_boxed_5057_ = lean_unbox_usize(v_stop_5054_);
lean_dec(v_stop_5054_);
v_res_5058_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1(v_00_u03b1_5051_, v_as_5052_, v_i_boxed_5056_, v_stop_boxed_5057_, v_b_5055_);
lean_dec_ref(v_as_5052_);
return v_res_5058_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg___lam__0(lean_object* v_l_5059_, lean_object* v_n_5060_, lean_object* v_v_5061_){
_start:
{
lean_object* v___x_5062_; lean_object* v___x_5063_; 
v___x_5062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5062_, 0, v_n_5060_);
lean_ctor_set(v___x_5062_, 1, v_v_5061_);
v___x_5063_ = lean_array_push(v_l_5059_, v___x_5062_);
return v___x_5063_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(lean_object* v_t_5064_, lean_object* v_init_5065_){
_start:
{
lean_object* v_key_5066_; lean_object* v_val_x3f_5067_; lean_object* v_children_5068_; lean_object* v_s_5070_; 
v_key_5066_ = lean_ctor_get(v_t_5064_, 0);
v_val_x3f_5067_ = lean_ctor_get(v_t_5064_, 1);
v_children_5068_ = lean_ctor_get(v_t_5064_, 2);
if (lean_obj_tag(v_val_x3f_5067_) == 1)
{
lean_object* v_val_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; 
v_val_5077_ = lean_ctor_get(v_val_x3f_5067_, 0);
lean_inc(v_val_5077_);
lean_inc(v_key_5066_);
v___x_5078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5078_, 0, v_key_5066_);
lean_ctor_set(v___x_5078_, 1, v_val_5077_);
v___x_5079_ = lean_array_push(v_init_5065_, v___x_5078_);
v_s_5070_ = v___x_5079_;
goto v___jp_5069_;
}
else
{
v_s_5070_ = v_init_5065_;
goto v___jp_5069_;
}
v___jp_5069_:
{
lean_object* v___x_5071_; lean_object* v___x_5072_; uint8_t v___x_5073_; 
v___x_5071_ = lean_unsigned_to_nat(0u);
v___x_5072_ = lean_array_get_size(v_children_5068_);
v___x_5073_ = lean_nat_dec_lt(v___x_5071_, v___x_5072_);
if (v___x_5073_ == 0)
{
return v_s_5070_;
}
else
{
size_t v___x_5074_; size_t v___x_5075_; lean_object* v___x_5076_; 
v___x_5074_ = ((size_t)0ULL);
v___x_5075_ = lean_usize_of_nat(v___x_5072_);
v___x_5076_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_children_5068_, v___x_5074_, v___x_5075_, v_s_5070_);
return v___x_5076_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(lean_object* v_as_5080_, size_t v_i_5081_, size_t v_stop_5082_, lean_object* v_b_5083_){
_start:
{
uint8_t v___x_5084_; 
v___x_5084_ = lean_usize_dec_eq(v_i_5081_, v_stop_5082_);
if (v___x_5084_ == 0)
{
lean_object* v___x_5085_; lean_object* v___x_5086_; size_t v___x_5087_; size_t v___x_5088_; 
v___x_5085_ = lean_array_uget_borrowed(v_as_5080_, v_i_5081_);
v___x_5086_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v___x_5085_, v_b_5083_);
v___x_5087_ = ((size_t)1ULL);
v___x_5088_ = lean_usize_add(v_i_5081_, v___x_5087_);
v_i_5081_ = v___x_5088_;
v_b_5083_ = v___x_5086_;
goto _start;
}
else
{
return v_b_5083_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_5090_, lean_object* v_i_5091_, lean_object* v_stop_5092_, lean_object* v_b_5093_){
_start:
{
size_t v_i_boxed_5094_; size_t v_stop_boxed_5095_; lean_object* v_res_5096_; 
v_i_boxed_5094_ = lean_unbox_usize(v_i_5091_);
lean_dec(v_i_5091_);
v_stop_boxed_5095_ = lean_unbox_usize(v_stop_5092_);
lean_dec(v_stop_5092_);
v_res_5096_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_as_5090_, v_i_boxed_5094_, v_stop_boxed_5095_, v_b_5093_);
lean_dec_ref(v_as_5090_);
return v_res_5096_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___boxed(lean_object* v_t_5097_, lean_object* v_init_5098_){
_start:
{
lean_object* v_res_5099_; 
v_res_5099_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_t_5097_, v_init_5098_);
lean_dec_ref(v_t_5097_);
return v_res_5099_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(lean_object* v_t_5100_, lean_object* v_init_5101_){
_start:
{
switch(lean_obj_tag(v_t_5100_))
{
case 0:
{
lean_object* v_tree_5102_; lean_object* v___x_5103_; 
v_tree_5102_ = lean_ctor_get(v_t_5100_, 1);
lean_inc_ref(v_tree_5102_);
lean_dec_ref_known(v_t_5100_, 2);
v___x_5103_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_tree_5102_, v_init_5101_);
lean_dec_ref(v_tree_5102_);
return v___x_5103_;
}
case 1:
{
lean_object* v_key_5104_; lean_object* v_entry_x3f_5105_; lean_object* v_children_5106_; lean_object* v_s_5108_; 
v_key_5104_ = lean_ctor_get(v_t_5100_, 0);
lean_inc(v_key_5104_);
v_entry_x3f_5105_ = lean_ctor_get(v_t_5100_, 1);
lean_inc(v_entry_x3f_5105_);
v_children_5106_ = lean_ctor_get(v_t_5100_, 2);
lean_inc_ref(v_children_5106_);
lean_dec_ref_known(v_t_5100_, 4);
if (lean_obj_tag(v_entry_x3f_5105_) == 1)
{
lean_object* v_val_5115_; lean_object* v_fst_5116_; lean_object* v___x_5117_; 
v_val_5115_ = lean_ctor_get(v_entry_x3f_5105_, 0);
lean_inc(v_val_5115_);
lean_dec_ref_known(v_entry_x3f_5105_, 1);
v_fst_5116_ = lean_ctor_get(v_val_5115_, 0);
lean_inc(v_fst_5116_);
lean_dec(v_val_5115_);
v___x_5117_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg___lam__0(v_init_5101_, v_key_5104_, v_fst_5116_);
v_s_5108_ = v___x_5117_;
goto v___jp_5107_;
}
else
{
lean_dec(v_entry_x3f_5105_);
lean_dec(v_key_5104_);
v_s_5108_ = v_init_5101_;
goto v___jp_5107_;
}
v___jp_5107_:
{
lean_object* v___x_5109_; lean_object* v___x_5110_; uint8_t v___x_5111_; 
v___x_5109_ = lean_unsigned_to_nat(0u);
v___x_5110_ = lean_array_get_size(v_children_5106_);
v___x_5111_ = lean_nat_dec_lt(v___x_5109_, v___x_5110_);
if (v___x_5111_ == 0)
{
lean_dec_ref(v_children_5106_);
return v_s_5108_;
}
else
{
size_t v___x_5112_; size_t v___x_5113_; lean_object* v___x_5114_; 
v___x_5112_ = ((size_t)0ULL);
v___x_5113_ = lean_usize_of_nat(v___x_5110_);
v___x_5114_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_children_5106_, v___x_5112_, v___x_5113_, v_s_5108_);
lean_dec_ref(v_children_5106_);
return v___x_5114_;
}
}
}
case 2:
{
lean_object* v_key_5118_; lean_object* v_entry_5119_; lean_object* v_expanded_5120_; lean_object* v_s_5122_; lean_object* v___x_5131_; 
v_key_5118_ = lean_ctor_get(v_t_5100_, 0);
lean_inc(v_key_5118_);
v_entry_5119_ = lean_ctor_get(v_t_5100_, 1);
lean_inc_ref(v_entry_5119_);
v_expanded_5120_ = lean_ctor_get(v_t_5100_, 2);
lean_inc_ref(v_expanded_5120_);
lean_dec_ref_known(v_t_5100_, 3);
v___x_5131_ = lean_thunk_get_own(v_entry_5119_);
lean_dec_ref(v_entry_5119_);
if (lean_obj_tag(v___x_5131_) == 1)
{
lean_object* v_val_5132_; lean_object* v_fst_5133_; lean_object* v___x_5134_; 
v_val_5132_ = lean_ctor_get(v___x_5131_, 0);
lean_inc(v_val_5132_);
lean_dec_ref_known(v___x_5131_, 1);
v_fst_5133_ = lean_ctor_get(v_val_5132_, 0);
lean_inc(v_fst_5133_);
lean_dec(v_val_5132_);
v___x_5134_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg___lam__0(v_init_5101_, v_key_5118_, v_fst_5133_);
v_s_5122_ = v___x_5134_;
goto v___jp_5121_;
}
else
{
lean_dec(v___x_5131_);
lean_dec(v_key_5118_);
v_s_5122_ = v_init_5101_;
goto v___jp_5121_;
}
v___jp_5121_:
{
lean_object* v___x_5123_; lean_object* v_fst_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; uint8_t v___x_5127_; 
v___x_5123_ = lean_thunk_get_own(v_expanded_5120_);
lean_dec_ref(v_expanded_5120_);
v_fst_5124_ = lean_ctor_get(v___x_5123_, 0);
lean_inc(v_fst_5124_);
lean_dec(v___x_5123_);
v___x_5125_ = lean_unsigned_to_nat(0u);
v___x_5126_ = lean_array_get_size(v_fst_5124_);
v___x_5127_ = lean_nat_dec_lt(v___x_5125_, v___x_5126_);
if (v___x_5127_ == 0)
{
lean_dec(v_fst_5124_);
return v_s_5122_;
}
else
{
size_t v___x_5128_; size_t v___x_5129_; lean_object* v___x_5130_; 
v___x_5128_ = ((size_t)0ULL);
v___x_5129_ = lean_usize_of_nat(v___x_5126_);
v___x_5130_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_fst_5124_, v___x_5128_, v___x_5129_, v_s_5122_);
lean_dec(v_fst_5124_);
return v___x_5130_;
}
}
}
default: 
{
lean_object* v_tree_5135_; 
v_tree_5135_ = lean_ctor_get(v_t_5100_, 1);
lean_inc_ref(v_tree_5135_);
lean_dec_ref_known(v_t_5100_, 2);
v_t_5100_ = v_tree_5135_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(lean_object* v_as_5137_, size_t v_i_5138_, size_t v_stop_5139_, lean_object* v_b_5140_){
_start:
{
uint8_t v___x_5141_; 
v___x_5141_ = lean_usize_dec_eq(v_i_5138_, v_stop_5139_);
if (v___x_5141_ == 0)
{
lean_object* v___x_5142_; lean_object* v___x_5143_; size_t v___x_5144_; size_t v___x_5145_; 
v___x_5142_ = lean_array_uget_borrowed(v_as_5137_, v_i_5138_);
lean_inc(v___x_5142_);
v___x_5143_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(v___x_5142_, v_b_5140_);
v___x_5144_ = ((size_t)1ULL);
v___x_5145_ = lean_usize_add(v_i_5138_, v___x_5144_);
v_i_5138_ = v___x_5145_;
v_b_5140_ = v___x_5143_;
goto _start;
}
else
{
return v_b_5140_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg___boxed(lean_object* v_as_5147_, lean_object* v_i_5148_, lean_object* v_stop_5149_, lean_object* v_b_5150_){
_start:
{
size_t v_i_boxed_5151_; size_t v_stop_boxed_5152_; lean_object* v_res_5153_; 
v_i_boxed_5151_ = lean_unbox_usize(v_i_5148_);
lean_dec(v_i_5148_);
v_stop_boxed_5152_ = lean_unbox_usize(v_stop_5149_);
lean_dec(v_stop_5149_);
v_res_5153_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_as_5147_, v_i_boxed_5151_, v_stop_boxed_5152_, v_b_5150_);
lean_dec_ref(v_as_5147_);
return v_res_5153_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray___redArg(lean_object* v_t_5156_){
_start:
{
lean_object* v___x_5157_; lean_object* v___x_5158_; 
v___x_5157_ = ((lean_object*)(l_Lean_ImportedConsts_toArray___redArg___closed__0));
v___x_5158_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(v_t_5156_, v___x_5157_);
return v___x_5158_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray(lean_object* v_00_u03b1_5159_, lean_object* v_t_5160_){
_start:
{
lean_object* v___x_5161_; 
v___x_5161_ = l_Lean_ImportedConsts_toArray___redArg(v_t_5160_);
return v___x_5161_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0(lean_object* v_00_u03b1_5162_, lean_object* v_t_5163_, lean_object* v_init_5164_){
_start:
{
lean_object* v___x_5165_; 
v___x_5165_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(v_t_5163_, v_init_5164_);
return v___x_5165_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0(lean_object* v_00_u03b1_5166_, lean_object* v_t_5167_, lean_object* v_init_5168_){
_start:
{
lean_object* v___x_5169_; 
v___x_5169_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_t_5167_, v_init_5168_);
return v___x_5169_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5170_, lean_object* v_t_5171_, lean_object* v_init_5172_){
_start:
{
lean_object* v_res_5173_; 
v_res_5173_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0(v_00_u03b1_5170_, v_t_5171_, v_init_5172_);
lean_dec_ref(v_t_5171_);
return v_res_5173_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1(lean_object* v_00_u03b1_5174_, lean_object* v_as_5175_, size_t v_i_5176_, size_t v_stop_5177_, lean_object* v_b_5178_){
_start:
{
lean_object* v___x_5179_; 
v___x_5179_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_as_5175_, v_i_5176_, v_stop_5177_, v_b_5178_);
return v___x_5179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5180_, lean_object* v_as_5181_, lean_object* v_i_5182_, lean_object* v_stop_5183_, lean_object* v_b_5184_){
_start:
{
size_t v_i_boxed_5185_; size_t v_stop_boxed_5186_; lean_object* v_res_5187_; 
v_i_boxed_5185_ = lean_unbox_usize(v_i_5182_);
lean_dec(v_i_5182_);
v_stop_boxed_5186_ = lean_unbox_usize(v_stop_5183_);
lean_dec(v_stop_5183_);
v_res_5187_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1(v_00_u03b1_5180_, v_as_5181_, v_i_boxed_5185_, v_stop_boxed_5186_, v_b_5184_);
lean_dec_ref(v_as_5181_);
return v_res_5187_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5188_, lean_object* v_as_5189_, size_t v_i_5190_, size_t v_stop_5191_, lean_object* v_b_5192_){
_start:
{
lean_object* v___x_5193_; 
v___x_5193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_as_5189_, v_i_5190_, v_stop_5191_, v_b_5192_);
return v___x_5193_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5194_, lean_object* v_as_5195_, lean_object* v_i_5196_, lean_object* v_stop_5197_, lean_object* v_b_5198_){
_start:
{
size_t v_i_boxed_5199_; size_t v_stop_boxed_5200_; lean_object* v_res_5201_; 
v_i_boxed_5199_ = lean_unbox_usize(v_i_5196_);
lean_dec(v_i_5196_);
v_stop_boxed_5200_ = lean_unbox_usize(v_stop_5197_);
lean_dec(v_stop_5197_);
v_res_5201_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1(v_00_u03b1_5194_, v_as_5195_, v_i_boxed_5199_, v_stop_boxed_5200_, v_b_5198_);
lean_dec_ref(v_as_5195_);
return v_res_5201_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(lean_object* v_t_5202_, lean_object* v_init_5203_){
_start:
{
lean_object* v_key_5204_; lean_object* v_val_x3f_5205_; lean_object* v_children_5206_; lean_object* v_s_5208_; 
v_key_5204_ = lean_ctor_get(v_t_5202_, 0);
v_val_x3f_5205_ = lean_ctor_get(v_t_5202_, 1);
v_children_5206_ = lean_ctor_get(v_t_5202_, 2);
if (lean_obj_tag(v_val_x3f_5205_) == 1)
{
lean_object* v___x_5215_; 
lean_inc(v_key_5204_);
v___x_5215_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5215_, 0, v_key_5204_);
lean_ctor_set(v___x_5215_, 1, v_init_5203_);
v_s_5208_ = v___x_5215_;
goto v___jp_5207_;
}
else
{
v_s_5208_ = v_init_5203_;
goto v___jp_5207_;
}
v___jp_5207_:
{
lean_object* v___x_5209_; lean_object* v___x_5210_; uint8_t v___x_5211_; 
v___x_5209_ = lean_unsigned_to_nat(0u);
v___x_5210_ = lean_array_get_size(v_children_5206_);
v___x_5211_ = lean_nat_dec_lt(v___x_5209_, v___x_5210_);
if (v___x_5211_ == 0)
{
return v_s_5208_;
}
else
{
size_t v___x_5212_; size_t v___x_5213_; lean_object* v___x_5214_; 
v___x_5212_ = ((size_t)0ULL);
v___x_5213_ = lean_usize_of_nat(v___x_5210_);
v___x_5214_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v_children_5206_, v___x_5212_, v___x_5213_, v_s_5208_);
return v___x_5214_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(lean_object* v_as_5216_, size_t v_i_5217_, size_t v_stop_5218_, lean_object* v_b_5219_){
_start:
{
uint8_t v___x_5220_; 
v___x_5220_ = lean_usize_dec_eq(v_i_5217_, v_stop_5218_);
if (v___x_5220_ == 0)
{
lean_object* v___x_5221_; lean_object* v___x_5222_; size_t v___x_5223_; size_t v___x_5224_; 
v___x_5221_ = lean_array_uget_borrowed(v_as_5216_, v_i_5217_);
v___x_5222_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v___x_5221_, v_b_5219_);
v___x_5223_ = ((size_t)1ULL);
v___x_5224_ = lean_usize_add(v_i_5217_, v___x_5223_);
v_i_5217_ = v___x_5224_;
v_b_5219_ = v___x_5222_;
goto _start;
}
else
{
return v_b_5219_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_5226_, lean_object* v_i_5227_, lean_object* v_stop_5228_, lean_object* v_b_5229_){
_start:
{
size_t v_i_boxed_5230_; size_t v_stop_boxed_5231_; lean_object* v_res_5232_; 
v_i_boxed_5230_ = lean_unbox_usize(v_i_5227_);
lean_dec(v_i_5227_);
v_stop_boxed_5231_ = lean_unbox_usize(v_stop_5228_);
lean_dec(v_stop_5228_);
v_res_5232_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v_as_5226_, v_i_boxed_5230_, v_stop_boxed_5231_, v_b_5229_);
lean_dec_ref(v_as_5226_);
return v_res_5232_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg___boxed(lean_object* v_t_5233_, lean_object* v_init_5234_){
_start:
{
lean_object* v_res_5235_; 
v_res_5235_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_t_5233_, v_init_5234_);
lean_dec_ref(v_t_5233_);
return v_res_5235_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(lean_object* v_t_5236_, lean_object* v_init_5237_){
_start:
{
switch(lean_obj_tag(v_t_5236_))
{
case 0:
{
lean_object* v_tree_5238_; lean_object* v___x_5239_; 
v_tree_5238_ = lean_ctor_get(v_t_5236_, 1);
v___x_5239_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_tree_5238_, v_init_5237_);
return v___x_5239_;
}
case 1:
{
lean_object* v_key_5240_; lean_object* v_entry_x3f_5241_; lean_object* v_children_5242_; lean_object* v_s_5244_; 
v_key_5240_ = lean_ctor_get(v_t_5236_, 0);
v_entry_x3f_5241_ = lean_ctor_get(v_t_5236_, 1);
v_children_5242_ = lean_ctor_get(v_t_5236_, 2);
if (lean_obj_tag(v_entry_x3f_5241_) == 1)
{
lean_object* v___x_5251_; 
lean_inc(v_key_5240_);
v___x_5251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5251_, 0, v_key_5240_);
lean_ctor_set(v___x_5251_, 1, v_init_5237_);
v_s_5244_ = v___x_5251_;
goto v___jp_5243_;
}
else
{
v_s_5244_ = v_init_5237_;
goto v___jp_5243_;
}
v___jp_5243_:
{
lean_object* v___x_5245_; lean_object* v___x_5246_; uint8_t v___x_5247_; 
v___x_5245_ = lean_unsigned_to_nat(0u);
v___x_5246_ = lean_array_get_size(v_children_5242_);
v___x_5247_ = lean_nat_dec_lt(v___x_5245_, v___x_5246_);
if (v___x_5247_ == 0)
{
return v_s_5244_;
}
else
{
size_t v___x_5248_; size_t v___x_5249_; lean_object* v___x_5250_; 
v___x_5248_ = ((size_t)0ULL);
v___x_5249_ = lean_usize_of_nat(v___x_5246_);
v___x_5250_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_children_5242_, v___x_5248_, v___x_5249_, v_s_5244_);
return v___x_5250_;
}
}
}
case 2:
{
lean_object* v_key_5252_; lean_object* v_entry_5253_; lean_object* v_expanded_5254_; lean_object* v_s_5256_; lean_object* v___x_5265_; 
v_key_5252_ = lean_ctor_get(v_t_5236_, 0);
v_entry_5253_ = lean_ctor_get(v_t_5236_, 1);
v_expanded_5254_ = lean_ctor_get(v_t_5236_, 2);
v___x_5265_ = lean_thunk_get_own(v_entry_5253_);
if (lean_obj_tag(v___x_5265_) == 1)
{
lean_object* v___x_5266_; 
lean_dec_ref_known(v___x_5265_, 1);
lean_inc(v_key_5252_);
v___x_5266_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5266_, 0, v_key_5252_);
lean_ctor_set(v___x_5266_, 1, v_init_5237_);
v_s_5256_ = v___x_5266_;
goto v___jp_5255_;
}
else
{
lean_dec(v___x_5265_);
v_s_5256_ = v_init_5237_;
goto v___jp_5255_;
}
v___jp_5255_:
{
lean_object* v___x_5257_; lean_object* v_fst_5258_; lean_object* v___x_5259_; lean_object* v___x_5260_; uint8_t v___x_5261_; 
v___x_5257_ = lean_thunk_get_own(v_expanded_5254_);
v_fst_5258_ = lean_ctor_get(v___x_5257_, 0);
lean_inc(v_fst_5258_);
lean_dec(v___x_5257_);
v___x_5259_ = lean_unsigned_to_nat(0u);
v___x_5260_ = lean_array_get_size(v_fst_5258_);
v___x_5261_ = lean_nat_dec_lt(v___x_5259_, v___x_5260_);
if (v___x_5261_ == 0)
{
lean_dec(v_fst_5258_);
return v_s_5256_;
}
else
{
size_t v___x_5262_; size_t v___x_5263_; lean_object* v___x_5264_; 
v___x_5262_ = ((size_t)0ULL);
v___x_5263_ = lean_usize_of_nat(v___x_5260_);
v___x_5264_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_fst_5258_, v___x_5262_, v___x_5263_, v_s_5256_);
lean_dec(v_fst_5258_);
return v___x_5264_;
}
}
}
default: 
{
lean_object* v_tree_5267_; 
v_tree_5267_ = lean_ctor_get(v_t_5236_, 1);
v_t_5236_ = v_tree_5267_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(lean_object* v_as_5269_, size_t v_i_5270_, size_t v_stop_5271_, lean_object* v_b_5272_){
_start:
{
uint8_t v___x_5273_; 
v___x_5273_ = lean_usize_dec_eq(v_i_5270_, v_stop_5271_);
if (v___x_5273_ == 0)
{
lean_object* v___x_5274_; lean_object* v___x_5275_; size_t v___x_5276_; size_t v___x_5277_; 
v___x_5274_ = lean_array_uget_borrowed(v_as_5269_, v_i_5270_);
v___x_5275_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v___x_5274_, v_b_5272_);
v___x_5276_ = ((size_t)1ULL);
v___x_5277_ = lean_usize_add(v_i_5270_, v___x_5276_);
v_i_5270_ = v___x_5277_;
v_b_5272_ = v___x_5275_;
goto _start;
}
else
{
return v_b_5272_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg___boxed(lean_object* v_as_5279_, lean_object* v_i_5280_, lean_object* v_stop_5281_, lean_object* v_b_5282_){
_start:
{
size_t v_i_boxed_5283_; size_t v_stop_boxed_5284_; lean_object* v_res_5285_; 
v_i_boxed_5283_ = lean_unbox_usize(v_i_5280_);
lean_dec(v_i_5280_);
v_stop_boxed_5284_ = lean_unbox_usize(v_stop_5281_);
lean_dec(v_stop_5281_);
v_res_5285_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_as_5279_, v_i_boxed_5283_, v_stop_boxed_5284_, v_b_5282_);
lean_dec_ref(v_as_5279_);
return v_res_5285_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg___boxed(lean_object* v_t_5286_, lean_object* v_init_5287_){
_start:
{
lean_object* v_res_5288_; 
v_res_5288_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v_t_5286_, v_init_5287_);
lean_dec_ref(v_t_5286_);
return v_res_5288_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___redArg(lean_object* v_t_5289_){
_start:
{
lean_object* v___x_5290_; lean_object* v___x_5291_; 
v___x_5290_ = lean_box(0);
v___x_5291_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v_t_5289_, v___x_5290_);
return v___x_5291_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___redArg___boxed(lean_object* v_t_5292_){
_start:
{
lean_object* v_res_5293_; 
v_res_5293_ = l_Lean_ImportedConsts_keys___redArg(v_t_5292_);
lean_dec_ref(v_t_5292_);
return v_res_5293_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys(lean_object* v_00_u03b1_5294_, lean_object* v_t_5295_){
_start:
{
lean_object* v___x_5296_; 
v___x_5296_ = l_Lean_ImportedConsts_keys___redArg(v_t_5295_);
return v___x_5296_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___boxed(lean_object* v_00_u03b1_5297_, lean_object* v_t_5298_){
_start:
{
lean_object* v_res_5299_; 
v_res_5299_ = l_Lean_ImportedConsts_keys(v_00_u03b1_5297_, v_t_5298_);
lean_dec_ref(v_t_5298_);
return v_res_5299_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0(lean_object* v_00_u03b1_5300_, lean_object* v_t_5301_, lean_object* v_init_5302_){
_start:
{
lean_object* v___x_5303_; 
v___x_5303_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v_t_5301_, v_init_5302_);
return v___x_5303_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___boxed(lean_object* v_00_u03b1_5304_, lean_object* v_t_5305_, lean_object* v_init_5306_){
_start:
{
lean_object* v_res_5307_; 
v_res_5307_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0(v_00_u03b1_5304_, v_t_5305_, v_init_5306_);
lean_dec_ref(v_t_5305_);
return v_res_5307_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0(lean_object* v_00_u03b1_5308_, lean_object* v_t_5309_, lean_object* v_init_5310_){
_start:
{
lean_object* v___x_5311_; 
v___x_5311_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_t_5309_, v_init_5310_);
return v___x_5311_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5312_, lean_object* v_t_5313_, lean_object* v_init_5314_){
_start:
{
lean_object* v_res_5315_; 
v_res_5315_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0(v_00_u03b1_5312_, v_t_5313_, v_init_5314_);
lean_dec_ref(v_t_5313_);
return v_res_5315_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1(lean_object* v_00_u03b1_5316_, lean_object* v_as_5317_, size_t v_i_5318_, size_t v_stop_5319_, lean_object* v_b_5320_){
_start:
{
lean_object* v___x_5321_; 
v___x_5321_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_as_5317_, v_i_5318_, v_stop_5319_, v_b_5320_);
return v___x_5321_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5322_, lean_object* v_as_5323_, lean_object* v_i_5324_, lean_object* v_stop_5325_, lean_object* v_b_5326_){
_start:
{
size_t v_i_boxed_5327_; size_t v_stop_boxed_5328_; lean_object* v_res_5329_; 
v_i_boxed_5327_ = lean_unbox_usize(v_i_5324_);
lean_dec(v_i_5324_);
v_stop_boxed_5328_ = lean_unbox_usize(v_stop_5325_);
lean_dec(v_stop_5325_);
v_res_5329_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1(v_00_u03b1_5322_, v_as_5323_, v_i_boxed_5327_, v_stop_boxed_5328_, v_b_5326_);
lean_dec_ref(v_as_5323_);
return v_res_5329_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5330_, lean_object* v_as_5331_, size_t v_i_5332_, size_t v_stop_5333_, lean_object* v_b_5334_){
_start:
{
lean_object* v___x_5335_; 
v___x_5335_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v_as_5331_, v_i_5332_, v_stop_5333_, v_b_5334_);
return v___x_5335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5336_, lean_object* v_as_5337_, lean_object* v_i_5338_, lean_object* v_stop_5339_, lean_object* v_b_5340_){
_start:
{
size_t v_i_boxed_5341_; size_t v_stop_boxed_5342_; lean_object* v_res_5343_; 
v_i_boxed_5341_ = lean_unbox_usize(v_i_5338_);
lean_dec(v_i_5338_);
v_stop_boxed_5342_ = lean_unbox_usize(v_stop_5339_);
lean_dec(v_stop_5339_);
v_res_5343_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1(v_00_u03b1_5336_, v_as_5337_, v_i_boxed_5341_, v_stop_boxed_5342_, v_b_5340_);
lean_dec_ref(v_as_5337_);
return v_res_5343_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(lean_object* v_t_5344_, lean_object* v_init_5345_){
_start:
{
lean_object* v_val_x3f_5346_; lean_object* v_children_5347_; lean_object* v_s_5349_; 
v_val_x3f_5346_ = lean_ctor_get(v_t_5344_, 1);
v_children_5347_ = lean_ctor_get(v_t_5344_, 2);
if (lean_obj_tag(v_val_x3f_5346_) == 1)
{
lean_object* v_val_5356_; lean_object* v___x_5357_; 
v_val_5356_ = lean_ctor_get(v_val_x3f_5346_, 0);
lean_inc(v_val_5356_);
v___x_5357_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5357_, 0, v_val_5356_);
lean_ctor_set(v___x_5357_, 1, v_init_5345_);
v_s_5349_ = v___x_5357_;
goto v___jp_5348_;
}
else
{
v_s_5349_ = v_init_5345_;
goto v___jp_5348_;
}
v___jp_5348_:
{
lean_object* v___x_5350_; lean_object* v___x_5351_; uint8_t v___x_5352_; 
v___x_5350_ = lean_unsigned_to_nat(0u);
v___x_5351_ = lean_array_get_size(v_children_5347_);
v___x_5352_ = lean_nat_dec_lt(v___x_5350_, v___x_5351_);
if (v___x_5352_ == 0)
{
return v_s_5349_;
}
else
{
size_t v___x_5353_; size_t v___x_5354_; lean_object* v___x_5355_; 
v___x_5353_ = ((size_t)0ULL);
v___x_5354_ = lean_usize_of_nat(v___x_5351_);
v___x_5355_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_children_5347_, v___x_5353_, v___x_5354_, v_s_5349_);
return v___x_5355_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(lean_object* v_as_5358_, size_t v_i_5359_, size_t v_stop_5360_, lean_object* v_b_5361_){
_start:
{
uint8_t v___x_5362_; 
v___x_5362_ = lean_usize_dec_eq(v_i_5359_, v_stop_5360_);
if (v___x_5362_ == 0)
{
lean_object* v___x_5363_; lean_object* v___x_5364_; size_t v___x_5365_; size_t v___x_5366_; 
v___x_5363_ = lean_array_uget_borrowed(v_as_5358_, v_i_5359_);
v___x_5364_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v___x_5363_, v_b_5361_);
v___x_5365_ = ((size_t)1ULL);
v___x_5366_ = lean_usize_add(v_i_5359_, v___x_5365_);
v_i_5359_ = v___x_5366_;
v_b_5361_ = v___x_5364_;
goto _start;
}
else
{
return v_b_5361_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_5368_, lean_object* v_i_5369_, lean_object* v_stop_5370_, lean_object* v_b_5371_){
_start:
{
size_t v_i_boxed_5372_; size_t v_stop_boxed_5373_; lean_object* v_res_5374_; 
v_i_boxed_5372_ = lean_unbox_usize(v_i_5369_);
lean_dec(v_i_5369_);
v_stop_boxed_5373_ = lean_unbox_usize(v_stop_5370_);
lean_dec(v_stop_5370_);
v_res_5374_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_as_5368_, v_i_boxed_5372_, v_stop_boxed_5373_, v_b_5371_);
lean_dec_ref(v_as_5368_);
return v_res_5374_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg___boxed(lean_object* v_t_5375_, lean_object* v_init_5376_){
_start:
{
lean_object* v_res_5377_; 
v_res_5377_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_t_5375_, v_init_5376_);
lean_dec_ref(v_t_5375_);
return v_res_5377_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(lean_object* v_t_5378_, lean_object* v_init_5379_){
_start:
{
switch(lean_obj_tag(v_t_5378_))
{
case 0:
{
lean_object* v_tree_5380_; lean_object* v___x_5381_; 
v_tree_5380_ = lean_ctor_get(v_t_5378_, 1);
lean_inc_ref(v_tree_5380_);
lean_dec_ref_known(v_t_5378_, 2);
v___x_5381_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_tree_5380_, v_init_5379_);
lean_dec_ref(v_tree_5380_);
return v___x_5381_;
}
case 1:
{
lean_object* v_entry_x3f_5382_; lean_object* v_children_5383_; lean_object* v_s_5385_; 
v_entry_x3f_5382_ = lean_ctor_get(v_t_5378_, 1);
lean_inc(v_entry_x3f_5382_);
v_children_5383_ = lean_ctor_get(v_t_5378_, 2);
lean_inc_ref(v_children_5383_);
lean_dec_ref_known(v_t_5378_, 4);
if (lean_obj_tag(v_entry_x3f_5382_) == 1)
{
lean_object* v_val_5392_; lean_object* v_fst_5393_; lean_object* v___x_5395_; uint8_t v_isShared_5396_; uint8_t v_isSharedCheck_5400_; 
v_val_5392_ = lean_ctor_get(v_entry_x3f_5382_, 0);
lean_inc(v_val_5392_);
lean_dec_ref_known(v_entry_x3f_5382_, 1);
v_fst_5393_ = lean_ctor_get(v_val_5392_, 0);
v_isSharedCheck_5400_ = !lean_is_exclusive(v_val_5392_);
if (v_isSharedCheck_5400_ == 0)
{
lean_object* v_unused_5401_; 
v_unused_5401_ = lean_ctor_get(v_val_5392_, 1);
lean_dec(v_unused_5401_);
v___x_5395_ = v_val_5392_;
v_isShared_5396_ = v_isSharedCheck_5400_;
goto v_resetjp_5394_;
}
else
{
lean_inc(v_fst_5393_);
lean_dec(v_val_5392_);
v___x_5395_ = lean_box(0);
v_isShared_5396_ = v_isSharedCheck_5400_;
goto v_resetjp_5394_;
}
v_resetjp_5394_:
{
lean_object* v___x_5398_; 
if (v_isShared_5396_ == 0)
{
lean_ctor_set_tag(v___x_5395_, 1);
lean_ctor_set(v___x_5395_, 1, v_init_5379_);
v___x_5398_ = v___x_5395_;
goto v_reusejp_5397_;
}
else
{
lean_object* v_reuseFailAlloc_5399_; 
v_reuseFailAlloc_5399_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5399_, 0, v_fst_5393_);
lean_ctor_set(v_reuseFailAlloc_5399_, 1, v_init_5379_);
v___x_5398_ = v_reuseFailAlloc_5399_;
goto v_reusejp_5397_;
}
v_reusejp_5397_:
{
v_s_5385_ = v___x_5398_;
goto v___jp_5384_;
}
}
}
else
{
lean_dec(v_entry_x3f_5382_);
v_s_5385_ = v_init_5379_;
goto v___jp_5384_;
}
v___jp_5384_:
{
lean_object* v___x_5386_; lean_object* v___x_5387_; uint8_t v___x_5388_; 
v___x_5386_ = lean_unsigned_to_nat(0u);
v___x_5387_ = lean_array_get_size(v_children_5383_);
v___x_5388_ = lean_nat_dec_lt(v___x_5386_, v___x_5387_);
if (v___x_5388_ == 0)
{
lean_dec_ref(v_children_5383_);
return v_s_5385_;
}
else
{
size_t v___x_5389_; size_t v___x_5390_; lean_object* v___x_5391_; 
v___x_5389_ = ((size_t)0ULL);
v___x_5390_ = lean_usize_of_nat(v___x_5387_);
v___x_5391_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(v_children_5383_, v___x_5389_, v___x_5390_, v_s_5385_);
lean_dec_ref(v_children_5383_);
return v___x_5391_;
}
}
}
case 2:
{
lean_object* v_entry_5402_; lean_object* v_expanded_5403_; lean_object* v_s_5405_; lean_object* v___x_5414_; 
v_entry_5402_ = lean_ctor_get(v_t_5378_, 1);
lean_inc_ref(v_entry_5402_);
v_expanded_5403_ = lean_ctor_get(v_t_5378_, 2);
lean_inc_ref(v_expanded_5403_);
lean_dec_ref_known(v_t_5378_, 3);
v___x_5414_ = lean_thunk_get_own(v_entry_5402_);
lean_dec_ref(v_entry_5402_);
if (lean_obj_tag(v___x_5414_) == 1)
{
lean_object* v_val_5415_; lean_object* v_fst_5416_; lean_object* v___x_5418_; uint8_t v_isShared_5419_; uint8_t v_isSharedCheck_5423_; 
v_val_5415_ = lean_ctor_get(v___x_5414_, 0);
lean_inc(v_val_5415_);
lean_dec_ref_known(v___x_5414_, 1);
v_fst_5416_ = lean_ctor_get(v_val_5415_, 0);
v_isSharedCheck_5423_ = !lean_is_exclusive(v_val_5415_);
if (v_isSharedCheck_5423_ == 0)
{
lean_object* v_unused_5424_; 
v_unused_5424_ = lean_ctor_get(v_val_5415_, 1);
lean_dec(v_unused_5424_);
v___x_5418_ = v_val_5415_;
v_isShared_5419_ = v_isSharedCheck_5423_;
goto v_resetjp_5417_;
}
else
{
lean_inc(v_fst_5416_);
lean_dec(v_val_5415_);
v___x_5418_ = lean_box(0);
v_isShared_5419_ = v_isSharedCheck_5423_;
goto v_resetjp_5417_;
}
v_resetjp_5417_:
{
lean_object* v___x_5421_; 
if (v_isShared_5419_ == 0)
{
lean_ctor_set_tag(v___x_5418_, 1);
lean_ctor_set(v___x_5418_, 1, v_init_5379_);
v___x_5421_ = v___x_5418_;
goto v_reusejp_5420_;
}
else
{
lean_object* v_reuseFailAlloc_5422_; 
v_reuseFailAlloc_5422_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5422_, 0, v_fst_5416_);
lean_ctor_set(v_reuseFailAlloc_5422_, 1, v_init_5379_);
v___x_5421_ = v_reuseFailAlloc_5422_;
goto v_reusejp_5420_;
}
v_reusejp_5420_:
{
v_s_5405_ = v___x_5421_;
goto v___jp_5404_;
}
}
}
else
{
lean_dec(v___x_5414_);
v_s_5405_ = v_init_5379_;
goto v___jp_5404_;
}
v___jp_5404_:
{
lean_object* v___x_5406_; lean_object* v_fst_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; uint8_t v___x_5410_; 
v___x_5406_ = lean_thunk_get_own(v_expanded_5403_);
lean_dec_ref(v_expanded_5403_);
v_fst_5407_ = lean_ctor_get(v___x_5406_, 0);
lean_inc(v_fst_5407_);
lean_dec(v___x_5406_);
v___x_5408_ = lean_unsigned_to_nat(0u);
v___x_5409_ = lean_array_get_size(v_fst_5407_);
v___x_5410_ = lean_nat_dec_lt(v___x_5408_, v___x_5409_);
if (v___x_5410_ == 0)
{
lean_dec(v_fst_5407_);
return v_s_5405_;
}
else
{
size_t v___x_5411_; size_t v___x_5412_; lean_object* v___x_5413_; 
v___x_5411_ = ((size_t)0ULL);
v___x_5412_ = lean_usize_of_nat(v___x_5409_);
v___x_5413_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(v_fst_5407_, v___x_5411_, v___x_5412_, v_s_5405_);
lean_dec(v_fst_5407_);
return v___x_5413_;
}
}
}
default: 
{
lean_object* v_tree_5425_; 
v_tree_5425_ = lean_ctor_get(v_t_5378_, 1);
lean_inc_ref(v_tree_5425_);
lean_dec_ref_known(v_t_5378_, 2);
v_t_5378_ = v_tree_5425_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(lean_object* v_as_5427_, size_t v_i_5428_, size_t v_stop_5429_, lean_object* v_b_5430_){
_start:
{
uint8_t v___x_5431_; 
v___x_5431_ = lean_usize_dec_eq(v_i_5428_, v_stop_5429_);
if (v___x_5431_ == 0)
{
lean_object* v___x_5432_; lean_object* v___x_5433_; size_t v___x_5434_; size_t v___x_5435_; 
v___x_5432_ = lean_array_uget_borrowed(v_as_5427_, v_i_5428_);
lean_inc(v___x_5432_);
v___x_5433_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(v___x_5432_, v_b_5430_);
v___x_5434_ = ((size_t)1ULL);
v___x_5435_ = lean_usize_add(v_i_5428_, v___x_5434_);
v_i_5428_ = v___x_5435_;
v_b_5430_ = v___x_5433_;
goto _start;
}
else
{
return v_b_5430_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg___boxed(lean_object* v_as_5437_, lean_object* v_i_5438_, lean_object* v_stop_5439_, lean_object* v_b_5440_){
_start:
{
size_t v_i_boxed_5441_; size_t v_stop_boxed_5442_; lean_object* v_res_5443_; 
v_i_boxed_5441_ = lean_unbox_usize(v_i_5438_);
lean_dec(v_i_5438_);
v_stop_boxed_5442_ = lean_unbox_usize(v_stop_5439_);
lean_dec(v_stop_5439_);
v_res_5443_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(v_as_5437_, v_i_boxed_5441_, v_stop_boxed_5442_, v_b_5440_);
lean_dec_ref(v_as_5437_);
return v_res_5443_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values___redArg(lean_object* v_t_5444_){
_start:
{
lean_object* v___x_5445_; lean_object* v___x_5446_; 
v___x_5445_ = lean_box(0);
v___x_5446_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(v_t_5444_, v___x_5445_);
return v___x_5446_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values(lean_object* v_00_u03b1_5447_, lean_object* v_t_5448_){
_start:
{
lean_object* v___x_5449_; 
v___x_5449_ = l_Lean_ImportedConsts_values___redArg(v_t_5448_);
return v___x_5449_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0(lean_object* v_00_u03b1_5450_, lean_object* v_t_5451_, lean_object* v_init_5452_){
_start:
{
lean_object* v___x_5453_; 
v___x_5453_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(v_t_5451_, v_init_5452_);
return v___x_5453_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0(lean_object* v_00_u03b1_5454_, lean_object* v_t_5455_, lean_object* v_init_5456_){
_start:
{
lean_object* v___x_5457_; 
v___x_5457_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_t_5455_, v_init_5456_);
return v___x_5457_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5458_, lean_object* v_t_5459_, lean_object* v_init_5460_){
_start:
{
lean_object* v_res_5461_; 
v_res_5461_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0(v_00_u03b1_5458_, v_t_5459_, v_init_5460_);
lean_dec_ref(v_t_5459_);
return v_res_5461_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1(lean_object* v_00_u03b1_5462_, lean_object* v_as_5463_, size_t v_i_5464_, size_t v_stop_5465_, lean_object* v_b_5466_){
_start:
{
lean_object* v___x_5467_; 
v___x_5467_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(v_as_5463_, v_i_5464_, v_stop_5465_, v_b_5466_);
return v___x_5467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5468_, lean_object* v_as_5469_, lean_object* v_i_5470_, lean_object* v_stop_5471_, lean_object* v_b_5472_){
_start:
{
size_t v_i_boxed_5473_; size_t v_stop_boxed_5474_; lean_object* v_res_5475_; 
v_i_boxed_5473_ = lean_unbox_usize(v_i_5470_);
lean_dec(v_i_5470_);
v_stop_boxed_5474_ = lean_unbox_usize(v_stop_5471_);
lean_dec(v_stop_5471_);
v_res_5475_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1(v_00_u03b1_5468_, v_as_5469_, v_i_boxed_5473_, v_stop_boxed_5474_, v_b_5472_);
lean_dec_ref(v_as_5469_);
return v_res_5475_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5476_, lean_object* v_as_5477_, size_t v_i_5478_, size_t v_stop_5479_, lean_object* v_b_5480_){
_start:
{
lean_object* v___x_5481_; 
v___x_5481_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_as_5477_, v_i_5478_, v_stop_5479_, v_b_5480_);
return v___x_5481_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5482_, lean_object* v_as_5483_, lean_object* v_i_5484_, lean_object* v_stop_5485_, lean_object* v_b_5486_){
_start:
{
size_t v_i_boxed_5487_; size_t v_stop_boxed_5488_; lean_object* v_res_5489_; 
v_i_boxed_5487_ = lean_unbox_usize(v_i_5484_);
lean_dec(v_i_5484_);
v_stop_boxed_5488_ = lean_unbox_usize(v_stop_5485_);
lean_dec(v_stop_5485_);
v_res_5489_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1(v_00_u03b1_5482_, v_as_5483_, v_i_boxed_5487_, v_stop_boxed_5488_, v_b_5486_);
lean_dec_ref(v_as_5483_);
return v_res_5489_;
}
}
static lean_object* _init_l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5495_; lean_object* v___x_5496_; lean_object* v___x_5497_; lean_object* v___x_5498_; 
v___x_5493_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__2));
v___x_5494_ = lean_unsigned_to_nat(14u);
v___x_5495_ = lean_unsigned_to_nat(22u);
v___x_5496_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__1));
v___x_5497_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__0));
v___x_5498_ = l_mkPanicMessageWithDecl(v___x_5497_, v___x_5496_, v___x_5495_, v___x_5494_, v___x_5493_);
return v___x_5498_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0(lean_object* v_inst_5499_, lean_object* v_t_5500_, lean_object* v_n_5501_, lean_object* v_x_5502_){
_start:
{
lean_object* v___x_5503_; 
v___x_5503_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_5500_, v_n_5501_);
if (lean_obj_tag(v___x_5503_) == 0)
{
lean_object* v___x_5504_; lean_object* v___x_5505_; 
v___x_5504_ = lean_obj_once(&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3, &l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3_once, _init_l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3);
v___x_5505_ = l_panic___redArg(v_inst_5499_, v___x_5504_);
return v___x_5505_;
}
else
{
lean_object* v_val_5506_; 
v_val_5506_ = lean_ctor_get(v___x_5503_, 0);
lean_inc(v_val_5506_);
lean_dec_ref_known(v___x_5503_, 1);
return v_val_5506_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___boxed(lean_object* v_inst_5507_, lean_object* v_t_5508_, lean_object* v_n_5509_, lean_object* v_x_5510_){
_start:
{
lean_object* v_res_5511_; 
v_res_5511_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0(v_inst_5507_, v_t_5508_, v_n_5509_, v_x_5510_);
lean_dec(v_inst_5507_);
return v_res_5511_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1(lean_object* v_inst_5512_, lean_object* v_xs_5513_, lean_object* v_i_5514_){
_start:
{
lean_object* v___x_5515_; 
v___x_5515_ = l_Lean_ImportedConsts_find_x3f___redArg(v_xs_5513_, v_i_5514_);
if (lean_obj_tag(v___x_5515_) == 0)
{
lean_object* v___x_5516_; 
v___x_5516_ = l_outOfBounds___redArg(v_inst_5512_);
return v___x_5516_;
}
else
{
lean_object* v_val_5517_; 
v_val_5517_ = lean_ctor_get(v___x_5515_, 0);
lean_inc(v_val_5517_);
lean_dec_ref_known(v___x_5515_, 1);
return v_val_5517_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1___boxed(lean_object* v_inst_5518_, lean_object* v_xs_5519_, lean_object* v_i_5520_){
_start:
{
lean_object* v_res_5521_; 
v_res_5521_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1(v_inst_5518_, v_xs_5519_, v_i_5520_);
lean_dec(v_inst_5518_);
return v_res_5521_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg(lean_object* v_inst_5524_){
_start:
{
lean_object* v___f_5525_; lean_object* v___f_5526_; lean_object* v___f_5527_; lean_object* v___x_5528_; 
v___f_5525_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_5525_, 0, v_inst_5524_);
v___f_5526_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__0));
v___f_5527_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__1));
v___x_5528_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5528_, 0, v___f_5525_);
lean_ctor_set(v___x_5528_, 1, v___f_5526_);
lean_ctor_set(v___x_5528_, 2, v___f_5527_);
return v___x_5528_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited(lean_object* v_00_u03b1_5529_, lean_object* v_inst_5530_){
_start:
{
lean_object* v___x_5531_; 
v___x_5531_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg(v_inst_5530_);
return v___x_5531_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__0(lean_object* v_f_5532_, lean_object* v_n_5533_, lean_object* v_v_5534_){
_start:
{
lean_object* v___x_5535_; lean_object* v___x_5536_; 
v___x_5535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5535_, 0, v_n_5533_);
lean_ctor_set(v___x_5535_, 1, v_v_5534_);
v___x_5536_ = lean_apply_1(v_f_5532_, v___x_5535_);
return v___x_5536_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1(lean_object* v_inst_5537_, lean_object* v_t_5538_, lean_object* v_f_5539_){
_start:
{
lean_object* v___f_5540_; lean_object* v___x_5541_; 
v___f_5540_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__0), 3, 1);
lean_closure_set(v___f_5540_, 0, v_f_5539_);
v___x_5541_ = l_Lean_ImportedConsts_forM___redArg(v_inst_5537_, v_t_5538_, v___f_5540_);
return v___x_5541_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg(lean_object* v_inst_5542_){
_start:
{
lean_object* v___f_5543_; 
v___f_5543_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_5543_, 0, v_inst_5542_);
return v___f_5543_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad(lean_object* v_m_5544_, lean_object* v_00_u03b1_5545_, lean_object* v_inst_5546_){
_start:
{
lean_object* v___f_5547_; 
v___f_5547_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_5547_, 0, v_inst_5546_);
return v___f_5547_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0(lean_object* v_toPure_5548_, lean_object* v_____do__lift_5549_){
_start:
{
if (lean_obj_tag(v_____do__lift_5549_) == 0)
{
lean_object* v_a_5550_; lean_object* v___x_5551_; 
v_a_5550_ = lean_ctor_get(v_____do__lift_5549_, 0);
lean_inc(v_a_5550_);
lean_dec_ref_known(v_____do__lift_5549_, 1);
v___x_5551_ = lean_apply_2(v_toPure_5548_, lean_box(0), v_a_5550_);
return v___x_5551_;
}
else
{
lean_object* v_a_5552_; lean_object* v_snd_5553_; lean_object* v___x_5554_; 
v_a_5552_ = lean_ctor_get(v_____do__lift_5549_, 0);
lean_inc(v_a_5552_);
lean_dec_ref_known(v_____do__lift_5549_, 1);
v_snd_5553_ = lean_ctor_get(v_a_5552_, 1);
lean_inc(v_snd_5553_);
lean_dec(v_a_5552_);
v___x_5554_ = lean_apply_2(v_toPure_5548_, lean_box(0), v_snd_5553_);
return v___x_5554_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1(lean_object* v_toPure_5555_, lean_object* v_____do__lift_5556_){
_start:
{
if (lean_obj_tag(v_____do__lift_5556_) == 0)
{
lean_object* v_a_5557_; lean_object* v___x_5559_; uint8_t v_isShared_5560_; uint8_t v_isSharedCheck_5565_; 
v_a_5557_ = lean_ctor_get(v_____do__lift_5556_, 0);
v_isSharedCheck_5565_ = !lean_is_exclusive(v_____do__lift_5556_);
if (v_isSharedCheck_5565_ == 0)
{
v___x_5559_ = v_____do__lift_5556_;
v_isShared_5560_ = v_isSharedCheck_5565_;
goto v_resetjp_5558_;
}
else
{
lean_inc(v_a_5557_);
lean_dec(v_____do__lift_5556_);
v___x_5559_ = lean_box(0);
v_isShared_5560_ = v_isSharedCheck_5565_;
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
lean_object* v_reuseFailAlloc_5564_; 
v_reuseFailAlloc_5564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5564_, 0, v_a_5557_);
v___x_5562_ = v_reuseFailAlloc_5564_;
goto v_reusejp_5561_;
}
v_reusejp_5561_:
{
lean_object* v___x_5563_; 
v___x_5563_ = lean_apply_2(v_toPure_5555_, lean_box(0), v___x_5562_);
return v___x_5563_;
}
}
}
else
{
lean_object* v_a_5566_; lean_object* v___x_5568_; uint8_t v_isShared_5569_; uint8_t v_isSharedCheck_5576_; 
v_a_5566_ = lean_ctor_get(v_____do__lift_5556_, 0);
v_isSharedCheck_5576_ = !lean_is_exclusive(v_____do__lift_5556_);
if (v_isSharedCheck_5576_ == 0)
{
v___x_5568_ = v_____do__lift_5556_;
v_isShared_5569_ = v_isSharedCheck_5576_;
goto v_resetjp_5567_;
}
else
{
lean_inc(v_a_5566_);
lean_dec(v_____do__lift_5556_);
v___x_5568_ = lean_box(0);
v_isShared_5569_ = v_isSharedCheck_5576_;
goto v_resetjp_5567_;
}
v_resetjp_5567_:
{
lean_object* v___x_5570_; lean_object* v___x_5571_; lean_object* v___x_5573_; 
v___x_5570_ = lean_box(0);
v___x_5571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5571_, 0, v___x_5570_);
lean_ctor_set(v___x_5571_, 1, v_a_5566_);
if (v_isShared_5569_ == 0)
{
lean_ctor_set(v___x_5568_, 0, v___x_5571_);
v___x_5573_ = v___x_5568_;
goto v_reusejp_5572_;
}
else
{
lean_object* v_reuseFailAlloc_5575_; 
v_reuseFailAlloc_5575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5575_, 0, v___x_5571_);
v___x_5573_ = v_reuseFailAlloc_5575_;
goto v_reusejp_5572_;
}
v_reusejp_5572_:
{
lean_object* v___x_5574_; 
v___x_5574_ = lean_apply_2(v_toPure_5555_, lean_box(0), v___x_5573_);
return v___x_5574_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__2(lean_object* v___y_5577_, lean_object* v_toBind_5578_, lean_object* v___f_5579_, lean_object* v_n_5580_, lean_object* v_v_5581_, lean_object* v___y_5582_){
_start:
{
lean_object* v___x_5583_; lean_object* v___x_5584_; lean_object* v___x_5585_; 
v___x_5583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5583_, 0, v_n_5580_);
lean_ctor_set(v___x_5583_, 1, v_v_5581_);
v___x_5584_ = lean_apply_2(v___y_5577_, v___x_5583_, v___y_5582_);
v___x_5585_ = lean_apply_4(v_toBind_5578_, lean_box(0), lean_box(0), v___x_5584_, v___f_5579_);
return v___x_5585_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3(lean_object* v_inst_5586_, lean_object* v_00_u03b2_5587_, lean_object* v___y_5588_, lean_object* v___y_5589_, lean_object* v___y_5590_){
_start:
{
lean_object* v___f_5591_; lean_object* v___f_5592_; lean_object* v___f_5593_; lean_object* v___f_5594_; lean_object* v___x_5595_; lean_object* v___x_5596_; lean_object* v___x_5597_; lean_object* v___x_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___f_5601_; lean_object* v___f_5602_; lean_object* v___f_5603_; lean_object* v___f_5604_; lean_object* v___x_5605_; lean_object* v___x_5606_; lean_object* v___x_5607_; lean_object* v___x_5608_; lean_object* v___x_5609_; lean_object* v___x_5610_; lean_object* v_toApplicative_5611_; lean_object* v_toBind_5612_; lean_object* v_toPure_5613_; lean_object* v___f_5614_; lean_object* v___f_5615_; lean_object* v___f_5616_; lean_object* v___x_138__overap_5617_; lean_object* v___x_5618_; lean_object* v___x_5619_; 
lean_inc_ref_n(v_inst_5586_, 7);
v___f_5591_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_5591_, 0, v_inst_5586_);
v___f_5592_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_5592_, 0, v_inst_5586_);
v___f_5593_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_5593_, 0, v_inst_5586_);
v___f_5594_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_5594_, 0, v_inst_5586_);
v___x_5595_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_5595_, 0, lean_box(0));
lean_closure_set(v___x_5595_, 1, lean_box(0));
lean_closure_set(v___x_5595_, 2, v_inst_5586_);
v___x_5596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5596_, 0, v___x_5595_);
lean_ctor_set(v___x_5596_, 1, v___f_5591_);
v___x_5597_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_5597_, 0, lean_box(0));
lean_closure_set(v___x_5597_, 1, lean_box(0));
lean_closure_set(v___x_5597_, 2, v_inst_5586_);
v___x_5598_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5598_, 0, v___x_5596_);
lean_ctor_set(v___x_5598_, 1, v___x_5597_);
lean_ctor_set(v___x_5598_, 2, v___f_5592_);
lean_ctor_set(v___x_5598_, 3, v___f_5593_);
lean_ctor_set(v___x_5598_, 4, v___f_5594_);
v___x_5599_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_5599_, 0, lean_box(0));
lean_closure_set(v___x_5599_, 1, lean_box(0));
lean_closure_set(v___x_5599_, 2, v_inst_5586_);
v___x_5600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5600_, 0, v___x_5598_);
lean_ctor_set(v___x_5600_, 1, v___x_5599_);
lean_inc_ref_n(v___x_5600_, 6);
v___f_5601_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5601_, 0, v___x_5600_);
v___f_5602_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5602_, 0, v___x_5600_);
v___f_5603_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_5603_, 0, v___x_5600_);
v___f_5604_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_5604_, 0, v___x_5600_);
v___x_5605_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_5605_, 0, lean_box(0));
lean_closure_set(v___x_5605_, 1, lean_box(0));
lean_closure_set(v___x_5605_, 2, v___x_5600_);
v___x_5606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5606_, 0, v___x_5605_);
lean_ctor_set(v___x_5606_, 1, v___f_5601_);
v___x_5607_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_5607_, 0, lean_box(0));
lean_closure_set(v___x_5607_, 1, lean_box(0));
lean_closure_set(v___x_5607_, 2, v___x_5600_);
v___x_5608_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5608_, 0, v___x_5606_);
lean_ctor_set(v___x_5608_, 1, v___x_5607_);
lean_ctor_set(v___x_5608_, 2, v___f_5602_);
lean_ctor_set(v___x_5608_, 3, v___f_5603_);
lean_ctor_set(v___x_5608_, 4, v___f_5604_);
v___x_5609_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_5609_, 0, lean_box(0));
lean_closure_set(v___x_5609_, 1, lean_box(0));
lean_closure_set(v___x_5609_, 2, v___x_5600_);
v___x_5610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5610_, 0, v___x_5608_);
lean_ctor_set(v___x_5610_, 1, v___x_5609_);
v_toApplicative_5611_ = lean_ctor_get(v_inst_5586_, 0);
lean_inc_ref(v_toApplicative_5611_);
v_toBind_5612_ = lean_ctor_get(v_inst_5586_, 1);
lean_inc_n(v_toBind_5612_, 2);
lean_dec_ref(v_inst_5586_);
v_toPure_5613_ = lean_ctor_get(v_toApplicative_5611_, 1);
lean_inc_n(v_toPure_5613_, 2);
lean_dec_ref(v_toApplicative_5611_);
v___f_5614_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0), 2, 1);
lean_closure_set(v___f_5614_, 0, v_toPure_5613_);
v___f_5615_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_5615_, 0, v_toPure_5613_);
v___f_5616_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__2), 6, 3);
lean_closure_set(v___f_5616_, 0, v___y_5590_);
lean_closure_set(v___f_5616_, 1, v_toBind_5612_);
lean_closure_set(v___f_5616_, 2, v___f_5615_);
v___x_138__overap_5617_ = l_Lean_ImportedConsts_forM___redArg(v___x_5610_, v___y_5588_, v___f_5616_);
v___x_5618_ = lean_apply_1(v___x_138__overap_5617_, v___y_5589_);
v___x_5619_ = lean_apply_4(v_toBind_5612_, lean_box(0), lean_box(0), v___x_5618_, v___f_5614_);
return v___x_5619_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg(lean_object* v_inst_5620_){
_start:
{
lean_object* v___f_5621_; 
v___f_5621_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_5621_, 0, v_inst_5620_);
return v___f_5621_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad(lean_object* v_m_5622_, lean_object* v_00_u03b1_5623_, lean_object* v_inst_5624_){
_start:
{
lean_object* v___f_5625_; 
v___f_5625_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_5625_, 0, v_inst_5624_);
return v___f_5625_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap___closed__0(void){
_start:
{
lean_object* v___x_5626_; 
v___x_5626_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_5626_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap___closed__1(void){
_start:
{
lean_object* v___x_5627_; lean_object* v___x_5628_; 
v___x_5627_ = lean_obj_once(&l_Lean_instInhabitedConstMap___closed__0, &l_Lean_instInhabitedConstMap___closed__0_once, _init_l_Lean_instInhabitedConstMap___closed__0);
v___x_5628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5628_, 0, v___x_5627_);
return v___x_5628_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap___closed__2(void){
_start:
{
lean_object* v___x_5629_; lean_object* v___x_5630_; lean_object* v___x_5631_; 
v___x_5629_ = lean_obj_once(&l_Lean_instInhabitedConstMap___closed__1, &l_Lean_instInhabitedConstMap___closed__1_once, _init_l_Lean_instInhabitedConstMap___closed__1);
v___x_5630_ = lean_obj_once(&l_Lean_ImportedConsts_empty___closed__0, &l_Lean_ImportedConsts_empty___closed__0_once, _init_l_Lean_ImportedConsts_empty___closed__0);
v___x_5631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5631_, 0, v___x_5630_);
lean_ctor_set(v___x_5631_, 1, v___x_5629_);
return v___x_5631_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap(void){
_start:
{
lean_object* v___x_5632_; 
v___x_5632_ = lean_obj_once(&l_Lean_instInhabitedConstMap___closed__2, &l_Lean_instInhabitedConstMap___closed__2_once, _init_l_Lean_instInhabitedConstMap___closed__2);
return v___x_5632_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_5633_, lean_object* v_vals_5634_, lean_object* v_i_5635_, lean_object* v_k_5636_){
_start:
{
lean_object* v___x_5637_; uint8_t v___x_5638_; 
v___x_5637_ = lean_array_get_size(v_keys_5633_);
v___x_5638_ = lean_nat_dec_lt(v_i_5635_, v___x_5637_);
if (v___x_5638_ == 0)
{
lean_object* v___x_5639_; 
lean_dec(v_i_5635_);
v___x_5639_ = lean_box(0);
return v___x_5639_;
}
else
{
lean_object* v_k_x27_5640_; uint8_t v___x_5641_; 
v_k_x27_5640_ = lean_array_fget_borrowed(v_keys_5633_, v_i_5635_);
v___x_5641_ = lean_name_eq(v_k_5636_, v_k_x27_5640_);
if (v___x_5641_ == 0)
{
lean_object* v___x_5642_; lean_object* v___x_5643_; 
v___x_5642_ = lean_unsigned_to_nat(1u);
v___x_5643_ = lean_nat_add(v_i_5635_, v___x_5642_);
lean_dec(v_i_5635_);
v_i_5635_ = v___x_5643_;
goto _start;
}
else
{
lean_object* v___x_5645_; lean_object* v___x_5646_; 
v___x_5645_ = lean_array_fget_borrowed(v_vals_5634_, v_i_5635_);
lean_dec(v_i_5635_);
lean_inc(v___x_5645_);
v___x_5646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5646_, 0, v___x_5645_);
return v___x_5646_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_5647_, lean_object* v_vals_5648_, lean_object* v_i_5649_, lean_object* v_k_5650_){
_start:
{
lean_object* v_res_5651_; 
v_res_5651_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_5647_, v_vals_5648_, v_i_5649_, v_k_5650_);
lean_dec(v_k_5650_);
lean_dec_ref(v_vals_5648_);
lean_dec_ref(v_keys_5647_);
return v_res_5651_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(lean_object* v_x_5652_, size_t v_x_5653_, lean_object* v_x_5654_){
_start:
{
if (lean_obj_tag(v_x_5652_) == 0)
{
lean_object* v_es_5655_; lean_object* v___x_5656_; size_t v___x_5657_; size_t v___x_5658_; lean_object* v_j_5659_; lean_object* v___x_5660_; 
v_es_5655_ = lean_ctor_get(v_x_5652_, 0);
v___x_5656_ = lean_box(2);
v___x_5657_ = ((size_t)31ULL);
v___x_5658_ = lean_usize_land(v_x_5653_, v___x_5657_);
v_j_5659_ = lean_usize_to_nat(v___x_5658_);
v___x_5660_ = lean_array_get_borrowed(v___x_5656_, v_es_5655_, v_j_5659_);
lean_dec(v_j_5659_);
switch(lean_obj_tag(v___x_5660_))
{
case 0:
{
lean_object* v_key_5661_; lean_object* v_val_5662_; uint8_t v___x_5663_; 
v_key_5661_ = lean_ctor_get(v___x_5660_, 0);
v_val_5662_ = lean_ctor_get(v___x_5660_, 1);
v___x_5663_ = lean_name_eq(v_x_5654_, v_key_5661_);
if (v___x_5663_ == 0)
{
lean_object* v___x_5664_; 
v___x_5664_ = lean_box(0);
return v___x_5664_;
}
else
{
lean_object* v___x_5665_; 
lean_inc(v_val_5662_);
v___x_5665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5665_, 0, v_val_5662_);
return v___x_5665_;
}
}
case 1:
{
lean_object* v_node_5666_; size_t v___x_5667_; size_t v___x_5668_; 
v_node_5666_ = lean_ctor_get(v___x_5660_, 0);
v___x_5667_ = ((size_t)5ULL);
v___x_5668_ = lean_usize_shift_right(v_x_5653_, v___x_5667_);
v_x_5652_ = v_node_5666_;
v_x_5653_ = v___x_5668_;
goto _start;
}
default: 
{
lean_object* v___x_5670_; 
v___x_5670_ = lean_box(0);
return v___x_5670_;
}
}
}
else
{
lean_object* v_ks_5671_; lean_object* v_vs_5672_; lean_object* v___x_5673_; lean_object* v___x_5674_; 
v_ks_5671_ = lean_ctor_get(v_x_5652_, 0);
v_vs_5672_ = lean_ctor_get(v_x_5652_, 1);
v___x_5673_ = lean_unsigned_to_nat(0u);
v___x_5674_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_ks_5671_, v_vs_5672_, v___x_5673_, v_x_5654_);
return v___x_5674_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_5675_, lean_object* v_x_5676_, lean_object* v_x_5677_){
_start:
{
size_t v_x_166__boxed_5678_; lean_object* v_res_5679_; 
v_x_166__boxed_5678_ = lean_unbox_usize(v_x_5676_);
lean_dec(v_x_5676_);
v_res_5679_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(v_x_5675_, v_x_166__boxed_5678_, v_x_5677_);
lean_dec(v_x_5677_);
lean_dec_ref(v_x_5675_);
return v_res_5679_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(lean_object* v_x_5680_, lean_object* v_x_5681_){
_start:
{
uint64_t v___y_5683_; 
if (lean_obj_tag(v_x_5681_) == 0)
{
uint64_t v___x_5686_; 
v___x_5686_ = 1723ULL;
v___y_5683_ = v___x_5686_;
goto v___jp_5682_;
}
else
{
uint64_t v_hash_5687_; 
v_hash_5687_ = lean_ctor_get_uint64(v_x_5681_, sizeof(void*)*2);
v___y_5683_ = v_hash_5687_;
goto v___jp_5682_;
}
v___jp_5682_:
{
size_t v___x_5684_; lean_object* v___x_5685_; 
v___x_5684_ = lean_uint64_to_usize(v___y_5683_);
v___x_5685_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(v_x_5680_, v___x_5684_, v_x_5681_);
return v___x_5685_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg___boxed(lean_object* v_x_5688_, lean_object* v_x_5689_){
_start:
{
lean_object* v_res_5690_; 
v_res_5690_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_x_5688_, v_x_5689_);
lean_dec(v_x_5689_);
lean_dec_ref(v_x_5688_);
return v_res_5690_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f(lean_object* v_m_5691_, lean_object* v_n_5692_){
_start:
{
lean_object* v_map_u2081_5693_; lean_object* v_map_u2082_5694_; lean_object* v___x_5695_; 
v_map_u2081_5693_ = lean_ctor_get(v_m_5691_, 0);
v_map_u2082_5694_ = lean_ctor_get(v_m_5691_, 1);
v___x_5695_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_map_u2082_5694_, v_n_5692_);
if (lean_obj_tag(v___x_5695_) == 0)
{
lean_object* v___x_5696_; 
v___x_5696_ = lean_imported_consts_find_entry_cached(v_map_u2081_5693_, v_n_5692_);
if (lean_obj_tag(v___x_5696_) == 0)
{
return v___x_5695_;
}
else
{
lean_object* v_val_5697_; lean_object* v___x_5699_; uint8_t v_isShared_5700_; uint8_t v_isSharedCheck_5705_; 
v_val_5697_ = lean_ctor_get(v___x_5696_, 0);
v_isSharedCheck_5705_ = !lean_is_exclusive(v___x_5696_);
if (v_isSharedCheck_5705_ == 0)
{
v___x_5699_ = v___x_5696_;
v_isShared_5700_ = v_isSharedCheck_5705_;
goto v_resetjp_5698_;
}
else
{
lean_inc(v_val_5697_);
lean_dec(v___x_5696_);
v___x_5699_ = lean_box(0);
v_isShared_5700_ = v_isSharedCheck_5705_;
goto v_resetjp_5698_;
}
v_resetjp_5698_:
{
lean_object* v_fst_5701_; lean_object* v___x_5703_; 
v_fst_5701_ = lean_ctor_get(v_val_5697_, 0);
lean_inc(v_fst_5701_);
lean_dec(v_val_5697_);
if (v_isShared_5700_ == 0)
{
lean_ctor_set(v___x_5699_, 0, v_fst_5701_);
v___x_5703_ = v___x_5699_;
goto v_reusejp_5702_;
}
else
{
lean_object* v_reuseFailAlloc_5704_; 
v_reuseFailAlloc_5704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5704_, 0, v_fst_5701_);
v___x_5703_ = v_reuseFailAlloc_5704_;
goto v_reusejp_5702_;
}
v_reusejp_5702_:
{
return v___x_5703_;
}
}
}
}
else
{
return v___x_5695_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f___boxed(lean_object* v_m_5706_, lean_object* v_n_5707_){
_start:
{
lean_object* v_res_5708_; 
v_res_5708_ = l_Lean_ConstMap_find_x3f(v_m_5706_, v_n_5707_);
lean_dec(v_n_5707_);
lean_dec_ref(v_m_5706_);
return v_res_5708_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0(lean_object* v_00_u03b2_5709_, lean_object* v_x_5710_, lean_object* v_x_5711_){
_start:
{
lean_object* v___x_5712_; 
v___x_5712_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_x_5710_, v_x_5711_);
return v___x_5712_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___boxed(lean_object* v_00_u03b2_5713_, lean_object* v_x_5714_, lean_object* v_x_5715_){
_start:
{
lean_object* v_res_5716_; 
v_res_5716_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0(v_00_u03b2_5713_, v_x_5714_, v_x_5715_);
lean_dec(v_x_5715_);
lean_dec_ref(v_x_5714_);
return v_res_5716_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0(lean_object* v_00_u03b2_5717_, lean_object* v_x_5718_, size_t v_x_5719_, lean_object* v_x_5720_){
_start:
{
lean_object* v___x_5721_; 
v___x_5721_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(v_x_5718_, v_x_5719_, v_x_5720_);
return v___x_5721_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5722_, lean_object* v_x_5723_, lean_object* v_x_5724_, lean_object* v_x_5725_){
_start:
{
size_t v_x_261__boxed_5726_; lean_object* v_res_5727_; 
v_x_261__boxed_5726_ = lean_unbox_usize(v_x_5724_);
lean_dec(v_x_5724_);
v_res_5727_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0(v_00_u03b2_5722_, v_x_5723_, v_x_261__boxed_5726_, v_x_5725_);
lean_dec(v_x_5725_);
lean_dec_ref(v_x_5723_);
return v_res_5727_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5728_, lean_object* v_keys_5729_, lean_object* v_vals_5730_, lean_object* v_heq_5731_, lean_object* v_i_5732_, lean_object* v_k_5733_){
_start:
{
lean_object* v___x_5734_; 
v___x_5734_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_5729_, v_vals_5730_, v_i_5732_, v_k_5733_);
return v___x_5734_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5735_, lean_object* v_keys_5736_, lean_object* v_vals_5737_, lean_object* v_heq_5738_, lean_object* v_i_5739_, lean_object* v_k_5740_){
_start:
{
lean_object* v_res_5741_; 
v_res_5741_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1(v_00_u03b2_5735_, v_keys_5736_, v_vals_5737_, v_heq_5738_, v_i_5739_, v_k_5740_);
lean_dec(v_k_5740_);
lean_dec_ref(v_vals_5737_);
lean_dec_ref(v_keys_5736_);
return v_res_5741_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f_x27(lean_object* v_m_5742_, lean_object* v_n_5743_){
_start:
{
lean_object* v_map_u2081_5744_; lean_object* v_map_u2082_5745_; lean_object* v___x_5746_; 
v_map_u2081_5744_ = lean_ctor_get(v_m_5742_, 0);
v_map_u2082_5745_ = lean_ctor_get(v_m_5742_, 1);
v___x_5746_ = lean_imported_consts_find_entry_cached(v_map_u2081_5744_, v_n_5743_);
if (lean_obj_tag(v___x_5746_) == 0)
{
lean_object* v___x_5747_; 
v___x_5747_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_map_u2082_5745_, v_n_5743_);
return v___x_5747_;
}
else
{
lean_object* v_val_5748_; lean_object* v___x_5750_; uint8_t v_isShared_5751_; uint8_t v_isSharedCheck_5756_; 
v_val_5748_ = lean_ctor_get(v___x_5746_, 0);
v_isSharedCheck_5756_ = !lean_is_exclusive(v___x_5746_);
if (v_isSharedCheck_5756_ == 0)
{
v___x_5750_ = v___x_5746_;
v_isShared_5751_ = v_isSharedCheck_5756_;
goto v_resetjp_5749_;
}
else
{
lean_inc(v_val_5748_);
lean_dec(v___x_5746_);
v___x_5750_ = lean_box(0);
v_isShared_5751_ = v_isSharedCheck_5756_;
goto v_resetjp_5749_;
}
v_resetjp_5749_:
{
lean_object* v_fst_5752_; lean_object* v___x_5754_; 
v_fst_5752_ = lean_ctor_get(v_val_5748_, 0);
lean_inc(v_fst_5752_);
lean_dec(v_val_5748_);
if (v_isShared_5751_ == 0)
{
lean_ctor_set(v___x_5750_, 0, v_fst_5752_);
v___x_5754_ = v___x_5750_;
goto v_reusejp_5753_;
}
else
{
lean_object* v_reuseFailAlloc_5755_; 
v_reuseFailAlloc_5755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5755_, 0, v_fst_5752_);
v___x_5754_ = v_reuseFailAlloc_5755_;
goto v_reusejp_5753_;
}
v_reusejp_5753_:
{
return v___x_5754_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f_x27___boxed(lean_object* v_m_5757_, lean_object* v_n_5758_){
_start:
{
lean_object* v_res_5759_; 
v_res_5759_ = l_Lean_ConstMap_find_x3f_x27(v_m_5757_, v_n_5758_);
lean_dec(v_n_5758_);
lean_dec_ref(v_m_5757_);
return v_res_5759_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_5760_, lean_object* v_i_5761_, lean_object* v_k_5762_){
_start:
{
lean_object* v___x_5763_; uint8_t v___x_5764_; 
v___x_5763_ = lean_array_get_size(v_keys_5760_);
v___x_5764_ = lean_nat_dec_lt(v_i_5761_, v___x_5763_);
if (v___x_5764_ == 0)
{
lean_dec(v_i_5761_);
return v___x_5764_;
}
else
{
lean_object* v_k_x27_5765_; uint8_t v___x_5766_; 
v_k_x27_5765_ = lean_array_fget_borrowed(v_keys_5760_, v_i_5761_);
v___x_5766_ = lean_name_eq(v_k_5762_, v_k_x27_5765_);
if (v___x_5766_ == 0)
{
lean_object* v___x_5767_; lean_object* v___x_5768_; 
v___x_5767_ = lean_unsigned_to_nat(1u);
v___x_5768_ = lean_nat_add(v_i_5761_, v___x_5767_);
lean_dec(v_i_5761_);
v_i_5761_ = v___x_5768_;
goto _start;
}
else
{
lean_dec(v_i_5761_);
return v___x_5764_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_5770_, lean_object* v_i_5771_, lean_object* v_k_5772_){
_start:
{
uint8_t v_res_5773_; lean_object* v_r_5774_; 
v_res_5773_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(v_keys_5770_, v_i_5771_, v_k_5772_);
lean_dec(v_k_5772_);
lean_dec_ref(v_keys_5770_);
v_r_5774_ = lean_box(v_res_5773_);
return v_r_5774_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(lean_object* v_x_5775_, size_t v_x_5776_, lean_object* v_x_5777_){
_start:
{
if (lean_obj_tag(v_x_5775_) == 0)
{
lean_object* v_es_5778_; lean_object* v___x_5779_; size_t v___x_5780_; size_t v___x_5781_; lean_object* v_j_5782_; lean_object* v___x_5783_; 
v_es_5778_ = lean_ctor_get(v_x_5775_, 0);
v___x_5779_ = lean_box(2);
v___x_5780_ = ((size_t)31ULL);
v___x_5781_ = lean_usize_land(v_x_5776_, v___x_5780_);
v_j_5782_ = lean_usize_to_nat(v___x_5781_);
v___x_5783_ = lean_array_get_borrowed(v___x_5779_, v_es_5778_, v_j_5782_);
lean_dec(v_j_5782_);
switch(lean_obj_tag(v___x_5783_))
{
case 0:
{
lean_object* v_key_5784_; uint8_t v___x_5785_; 
v_key_5784_ = lean_ctor_get(v___x_5783_, 0);
v___x_5785_ = lean_name_eq(v_x_5777_, v_key_5784_);
return v___x_5785_;
}
case 1:
{
lean_object* v_node_5786_; size_t v___x_5787_; size_t v___x_5788_; 
v_node_5786_ = lean_ctor_get(v___x_5783_, 0);
v___x_5787_ = ((size_t)5ULL);
v___x_5788_ = lean_usize_shift_right(v_x_5776_, v___x_5787_);
v_x_5775_ = v_node_5786_;
v_x_5776_ = v___x_5788_;
goto _start;
}
default: 
{
uint8_t v___x_5790_; 
v___x_5790_ = 0;
return v___x_5790_;
}
}
}
else
{
lean_object* v_ks_5791_; lean_object* v___x_5792_; uint8_t v___x_5793_; 
v_ks_5791_ = lean_ctor_get(v_x_5775_, 0);
v___x_5792_ = lean_unsigned_to_nat(0u);
v___x_5793_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(v_ks_5791_, v___x_5792_, v_x_5777_);
return v___x_5793_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg___boxed(lean_object* v_x_5794_, lean_object* v_x_5795_, lean_object* v_x_5796_){
_start:
{
size_t v_x_170__boxed_5797_; uint8_t v_res_5798_; lean_object* v_r_5799_; 
v_x_170__boxed_5797_ = lean_unbox_usize(v_x_5795_);
lean_dec(v_x_5795_);
v_res_5798_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(v_x_5794_, v_x_170__boxed_5797_, v_x_5796_);
lean_dec(v_x_5796_);
lean_dec_ref(v_x_5794_);
v_r_5799_ = lean_box(v_res_5798_);
return v_r_5799_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(lean_object* v_x_5800_, lean_object* v_x_5801_){
_start:
{
uint64_t v___y_5803_; 
if (lean_obj_tag(v_x_5801_) == 0)
{
uint64_t v___x_5806_; 
v___x_5806_ = 1723ULL;
v___y_5803_ = v___x_5806_;
goto v___jp_5802_;
}
else
{
uint64_t v_hash_5807_; 
v_hash_5807_ = lean_ctor_get_uint64(v_x_5801_, sizeof(void*)*2);
v___y_5803_ = v_hash_5807_;
goto v___jp_5802_;
}
v___jp_5802_:
{
size_t v___x_5804_; uint8_t v___x_5805_; 
v___x_5804_ = lean_uint64_to_usize(v___y_5803_);
v___x_5805_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(v_x_5800_, v___x_5804_, v_x_5801_);
return v___x_5805_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg___boxed(lean_object* v_x_5808_, lean_object* v_x_5809_){
_start:
{
uint8_t v_res_5810_; lean_object* v_r_5811_; 
v_res_5810_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(v_x_5808_, v_x_5809_);
lean_dec(v_x_5809_);
lean_dec_ref(v_x_5808_);
v_r_5811_ = lean_box(v_res_5810_);
return v_r_5811_;
}
}
LEAN_EXPORT uint8_t l_Lean_ConstMap_contains(lean_object* v_m_5812_, lean_object* v_n_5813_){
_start:
{
lean_object* v_map_u2081_5814_; lean_object* v_map_u2082_5815_; uint8_t v___x_5816_; 
v_map_u2081_5814_ = lean_ctor_get(v_m_5812_, 0);
v_map_u2082_5815_ = lean_ctor_get(v_m_5812_, 1);
v___x_5816_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(v_map_u2082_5815_, v_n_5813_);
if (v___x_5816_ == 0)
{
lean_object* v___x_5817_; 
v___x_5817_ = lean_imported_consts_find_entry_cached(v_map_u2081_5814_, v_n_5813_);
if (lean_obj_tag(v___x_5817_) == 0)
{
return v___x_5816_;
}
else
{
uint8_t v___x_5818_; 
lean_dec_ref_known(v___x_5817_, 1);
v___x_5818_ = 1;
return v___x_5818_;
}
}
else
{
return v___x_5816_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_contains___boxed(lean_object* v_m_5819_, lean_object* v_n_5820_){
_start:
{
uint8_t v_res_5821_; lean_object* v_r_5822_; 
v_res_5821_ = l_Lean_ConstMap_contains(v_m_5819_, v_n_5820_);
lean_dec(v_n_5820_);
lean_dec_ref(v_m_5819_);
v_r_5822_ = lean_box(v_res_5821_);
return v_r_5822_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0(lean_object* v_00_u03b2_5823_, lean_object* v_x_5824_, lean_object* v_x_5825_){
_start:
{
uint8_t v___x_5826_; 
v___x_5826_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(v_x_5824_, v_x_5825_);
return v___x_5826_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___boxed(lean_object* v_00_u03b2_5827_, lean_object* v_x_5828_, lean_object* v_x_5829_){
_start:
{
uint8_t v_res_5830_; lean_object* v_r_5831_; 
v_res_5830_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0(v_00_u03b2_5827_, v_x_5828_, v_x_5829_);
lean_dec(v_x_5829_);
lean_dec_ref(v_x_5828_);
v_r_5831_ = lean_box(v_res_5830_);
return v_r_5831_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0(lean_object* v_00_u03b2_5832_, lean_object* v_x_5833_, size_t v_x_5834_, lean_object* v_x_5835_){
_start:
{
uint8_t v___x_5836_; 
v___x_5836_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(v_x_5833_, v_x_5834_, v_x_5835_);
return v___x_5836_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5837_, lean_object* v_x_5838_, lean_object* v_x_5839_, lean_object* v_x_5840_){
_start:
{
size_t v_x_242__boxed_5841_; uint8_t v_res_5842_; lean_object* v_r_5843_; 
v_x_242__boxed_5841_ = lean_unbox_usize(v_x_5839_);
lean_dec(v_x_5839_);
v_res_5842_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0(v_00_u03b2_5837_, v_x_5838_, v_x_242__boxed_5841_, v_x_5840_);
lean_dec(v_x_5840_);
lean_dec_ref(v_x_5838_);
v_r_5843_ = lean_box(v_res_5842_);
return v_r_5843_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5844_, lean_object* v_keys_5845_, lean_object* v_vals_5846_, lean_object* v_heq_5847_, lean_object* v_i_5848_, lean_object* v_k_5849_){
_start:
{
uint8_t v___x_5850_; 
v___x_5850_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(v_keys_5845_, v_i_5848_, v_k_5849_);
return v___x_5850_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5851_, lean_object* v_keys_5852_, lean_object* v_vals_5853_, lean_object* v_heq_5854_, lean_object* v_i_5855_, lean_object* v_k_5856_){
_start:
{
uint8_t v_res_5857_; lean_object* v_r_5858_; 
v_res_5857_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1(v_00_u03b2_5851_, v_keys_5852_, v_vals_5853_, v_heq_5854_, v_i_5855_, v_k_5856_);
lean_dec(v_k_5856_);
lean_dec_ref(v_vals_5853_);
lean_dec_ref(v_keys_5852_);
v_r_5858_ = lean_box(v_res_5857_);
return v_r_5858_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_5859_, lean_object* v_x_5860_, lean_object* v_x_5861_, lean_object* v_x_5862_){
_start:
{
lean_object* v_ks_5863_; lean_object* v_vs_5864_; lean_object* v___x_5866_; uint8_t v_isShared_5867_; uint8_t v_isSharedCheck_5888_; 
v_ks_5863_ = lean_ctor_get(v_x_5859_, 0);
v_vs_5864_ = lean_ctor_get(v_x_5859_, 1);
v_isSharedCheck_5888_ = !lean_is_exclusive(v_x_5859_);
if (v_isSharedCheck_5888_ == 0)
{
v___x_5866_ = v_x_5859_;
v_isShared_5867_ = v_isSharedCheck_5888_;
goto v_resetjp_5865_;
}
else
{
lean_inc(v_vs_5864_);
lean_inc(v_ks_5863_);
lean_dec(v_x_5859_);
v___x_5866_ = lean_box(0);
v_isShared_5867_ = v_isSharedCheck_5888_;
goto v_resetjp_5865_;
}
v_resetjp_5865_:
{
lean_object* v___x_5868_; uint8_t v___x_5869_; 
v___x_5868_ = lean_array_get_size(v_ks_5863_);
v___x_5869_ = lean_nat_dec_lt(v_x_5860_, v___x_5868_);
if (v___x_5869_ == 0)
{
lean_object* v___x_5870_; lean_object* v___x_5871_; lean_object* v___x_5873_; 
lean_dec(v_x_5860_);
v___x_5870_ = lean_array_push(v_ks_5863_, v_x_5861_);
v___x_5871_ = lean_array_push(v_vs_5864_, v_x_5862_);
if (v_isShared_5867_ == 0)
{
lean_ctor_set(v___x_5866_, 1, v___x_5871_);
lean_ctor_set(v___x_5866_, 0, v___x_5870_);
v___x_5873_ = v___x_5866_;
goto v_reusejp_5872_;
}
else
{
lean_object* v_reuseFailAlloc_5874_; 
v_reuseFailAlloc_5874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5874_, 0, v___x_5870_);
lean_ctor_set(v_reuseFailAlloc_5874_, 1, v___x_5871_);
v___x_5873_ = v_reuseFailAlloc_5874_;
goto v_reusejp_5872_;
}
v_reusejp_5872_:
{
return v___x_5873_;
}
}
else
{
lean_object* v_k_x27_5875_; uint8_t v___x_5876_; 
v_k_x27_5875_ = lean_array_fget_borrowed(v_ks_5863_, v_x_5860_);
v___x_5876_ = lean_name_eq(v_x_5861_, v_k_x27_5875_);
if (v___x_5876_ == 0)
{
lean_object* v___x_5878_; 
if (v_isShared_5867_ == 0)
{
v___x_5878_ = v___x_5866_;
goto v_reusejp_5877_;
}
else
{
lean_object* v_reuseFailAlloc_5882_; 
v_reuseFailAlloc_5882_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5882_, 0, v_ks_5863_);
lean_ctor_set(v_reuseFailAlloc_5882_, 1, v_vs_5864_);
v___x_5878_ = v_reuseFailAlloc_5882_;
goto v_reusejp_5877_;
}
v_reusejp_5877_:
{
lean_object* v___x_5879_; lean_object* v___x_5880_; 
v___x_5879_ = lean_unsigned_to_nat(1u);
v___x_5880_ = lean_nat_add(v_x_5860_, v___x_5879_);
lean_dec(v_x_5860_);
v_x_5859_ = v___x_5878_;
v_x_5860_ = v___x_5880_;
goto _start;
}
}
else
{
lean_object* v___x_5883_; lean_object* v___x_5884_; lean_object* v___x_5886_; 
v___x_5883_ = lean_array_fset(v_ks_5863_, v_x_5860_, v_x_5861_);
v___x_5884_ = lean_array_fset(v_vs_5864_, v_x_5860_, v_x_5862_);
lean_dec(v_x_5860_);
if (v_isShared_5867_ == 0)
{
lean_ctor_set(v___x_5866_, 1, v___x_5884_);
lean_ctor_set(v___x_5866_, 0, v___x_5883_);
v___x_5886_ = v___x_5866_;
goto v_reusejp_5885_;
}
else
{
lean_object* v_reuseFailAlloc_5887_; 
v_reuseFailAlloc_5887_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5887_, 0, v___x_5883_);
lean_ctor_set(v_reuseFailAlloc_5887_, 1, v___x_5884_);
v___x_5886_ = v_reuseFailAlloc_5887_;
goto v_reusejp_5885_;
}
v_reusejp_5885_:
{
return v___x_5886_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1___redArg(lean_object* v_n_5889_, lean_object* v_k_5890_, lean_object* v_v_5891_){
_start:
{
lean_object* v___x_5892_; lean_object* v___x_5893_; 
v___x_5892_ = lean_unsigned_to_nat(0u);
v___x_5893_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_n_5889_, v___x_5892_, v_k_5890_, v_v_5891_);
return v___x_5893_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_5894_; 
v___x_5894_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_5894_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(lean_object* v_x_5895_, size_t v_x_5896_, size_t v_x_5897_, lean_object* v_x_5898_, lean_object* v_x_5899_){
_start:
{
if (lean_obj_tag(v_x_5895_) == 0)
{
lean_object* v_es_5900_; size_t v___x_5901_; size_t v___x_5902_; lean_object* v_j_5903_; lean_object* v___x_5904_; uint8_t v___x_5905_; 
v_es_5900_ = lean_ctor_get(v_x_5895_, 0);
v___x_5901_ = ((size_t)31ULL);
v___x_5902_ = lean_usize_land(v_x_5896_, v___x_5901_);
v_j_5903_ = lean_usize_to_nat(v___x_5902_);
v___x_5904_ = lean_array_get_size(v_es_5900_);
v___x_5905_ = lean_nat_dec_lt(v_j_5903_, v___x_5904_);
if (v___x_5905_ == 0)
{
lean_dec(v_j_5903_);
lean_dec(v_x_5899_);
lean_dec(v_x_5898_);
return v_x_5895_;
}
else
{
lean_object* v___x_5907_; uint8_t v_isShared_5908_; uint8_t v_isSharedCheck_5944_; 
lean_inc_ref(v_es_5900_);
v_isSharedCheck_5944_ = !lean_is_exclusive(v_x_5895_);
if (v_isSharedCheck_5944_ == 0)
{
lean_object* v_unused_5945_; 
v_unused_5945_ = lean_ctor_get(v_x_5895_, 0);
lean_dec(v_unused_5945_);
v___x_5907_ = v_x_5895_;
v_isShared_5908_ = v_isSharedCheck_5944_;
goto v_resetjp_5906_;
}
else
{
lean_dec(v_x_5895_);
v___x_5907_ = lean_box(0);
v_isShared_5908_ = v_isSharedCheck_5944_;
goto v_resetjp_5906_;
}
v_resetjp_5906_:
{
lean_object* v_v_5909_; lean_object* v___x_5910_; lean_object* v_xs_x27_5911_; lean_object* v___y_5913_; 
v_v_5909_ = lean_array_fget(v_es_5900_, v_j_5903_);
v___x_5910_ = lean_box(0);
v_xs_x27_5911_ = lean_array_fset(v_es_5900_, v_j_5903_, v___x_5910_);
switch(lean_obj_tag(v_v_5909_))
{
case 0:
{
lean_object* v_key_5918_; lean_object* v_val_5919_; lean_object* v___x_5921_; uint8_t v_isShared_5922_; uint8_t v_isSharedCheck_5929_; 
v_key_5918_ = lean_ctor_get(v_v_5909_, 0);
v_val_5919_ = lean_ctor_get(v_v_5909_, 1);
v_isSharedCheck_5929_ = !lean_is_exclusive(v_v_5909_);
if (v_isSharedCheck_5929_ == 0)
{
v___x_5921_ = v_v_5909_;
v_isShared_5922_ = v_isSharedCheck_5929_;
goto v_resetjp_5920_;
}
else
{
lean_inc(v_val_5919_);
lean_inc(v_key_5918_);
lean_dec(v_v_5909_);
v___x_5921_ = lean_box(0);
v_isShared_5922_ = v_isSharedCheck_5929_;
goto v_resetjp_5920_;
}
v_resetjp_5920_:
{
uint8_t v___x_5923_; 
v___x_5923_ = lean_name_eq(v_x_5898_, v_key_5918_);
if (v___x_5923_ == 0)
{
lean_object* v___x_5924_; lean_object* v___x_5925_; 
lean_del_object(v___x_5921_);
v___x_5924_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_5918_, v_val_5919_, v_x_5898_, v_x_5899_);
v___x_5925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5925_, 0, v___x_5924_);
v___y_5913_ = v___x_5925_;
goto v___jp_5912_;
}
else
{
lean_object* v___x_5927_; 
lean_dec(v_val_5919_);
lean_dec(v_key_5918_);
if (v_isShared_5922_ == 0)
{
lean_ctor_set(v___x_5921_, 1, v_x_5899_);
lean_ctor_set(v___x_5921_, 0, v_x_5898_);
v___x_5927_ = v___x_5921_;
goto v_reusejp_5926_;
}
else
{
lean_object* v_reuseFailAlloc_5928_; 
v_reuseFailAlloc_5928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5928_, 0, v_x_5898_);
lean_ctor_set(v_reuseFailAlloc_5928_, 1, v_x_5899_);
v___x_5927_ = v_reuseFailAlloc_5928_;
goto v_reusejp_5926_;
}
v_reusejp_5926_:
{
v___y_5913_ = v___x_5927_;
goto v___jp_5912_;
}
}
}
}
case 1:
{
lean_object* v_node_5930_; lean_object* v___x_5932_; uint8_t v_isShared_5933_; uint8_t v_isSharedCheck_5942_; 
v_node_5930_ = lean_ctor_get(v_v_5909_, 0);
v_isSharedCheck_5942_ = !lean_is_exclusive(v_v_5909_);
if (v_isSharedCheck_5942_ == 0)
{
v___x_5932_ = v_v_5909_;
v_isShared_5933_ = v_isSharedCheck_5942_;
goto v_resetjp_5931_;
}
else
{
lean_inc(v_node_5930_);
lean_dec(v_v_5909_);
v___x_5932_ = lean_box(0);
v_isShared_5933_ = v_isSharedCheck_5942_;
goto v_resetjp_5931_;
}
v_resetjp_5931_:
{
size_t v___x_5934_; size_t v___x_5935_; size_t v___x_5936_; size_t v___x_5937_; lean_object* v___x_5938_; lean_object* v___x_5940_; 
v___x_5934_ = ((size_t)5ULL);
v___x_5935_ = lean_usize_shift_right(v_x_5896_, v___x_5934_);
v___x_5936_ = ((size_t)1ULL);
v___x_5937_ = lean_usize_add(v_x_5897_, v___x_5936_);
v___x_5938_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_node_5930_, v___x_5935_, v___x_5937_, v_x_5898_, v_x_5899_);
if (v_isShared_5933_ == 0)
{
lean_ctor_set(v___x_5932_, 0, v___x_5938_);
v___x_5940_ = v___x_5932_;
goto v_reusejp_5939_;
}
else
{
lean_object* v_reuseFailAlloc_5941_; 
v_reuseFailAlloc_5941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5941_, 0, v___x_5938_);
v___x_5940_ = v_reuseFailAlloc_5941_;
goto v_reusejp_5939_;
}
v_reusejp_5939_:
{
v___y_5913_ = v___x_5940_;
goto v___jp_5912_;
}
}
}
default: 
{
lean_object* v___x_5943_; 
v___x_5943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5943_, 0, v_x_5898_);
lean_ctor_set(v___x_5943_, 1, v_x_5899_);
v___y_5913_ = v___x_5943_;
goto v___jp_5912_;
}
}
v___jp_5912_:
{
lean_object* v___x_5914_; lean_object* v___x_5916_; 
v___x_5914_ = lean_array_fset(v_xs_x27_5911_, v_j_5903_, v___y_5913_);
lean_dec(v_j_5903_);
if (v_isShared_5908_ == 0)
{
lean_ctor_set(v___x_5907_, 0, v___x_5914_);
v___x_5916_ = v___x_5907_;
goto v_reusejp_5915_;
}
else
{
lean_object* v_reuseFailAlloc_5917_; 
v_reuseFailAlloc_5917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5917_, 0, v___x_5914_);
v___x_5916_ = v_reuseFailAlloc_5917_;
goto v_reusejp_5915_;
}
v_reusejp_5915_:
{
return v___x_5916_;
}
}
}
}
}
else
{
lean_object* v_ks_5946_; lean_object* v_vs_5947_; lean_object* v___x_5949_; uint8_t v_isShared_5950_; uint8_t v_isSharedCheck_5965_; 
v_ks_5946_ = lean_ctor_get(v_x_5895_, 0);
v_vs_5947_ = lean_ctor_get(v_x_5895_, 1);
v_isSharedCheck_5965_ = !lean_is_exclusive(v_x_5895_);
if (v_isSharedCheck_5965_ == 0)
{
v___x_5949_ = v_x_5895_;
v_isShared_5950_ = v_isSharedCheck_5965_;
goto v_resetjp_5948_;
}
else
{
lean_inc(v_vs_5947_);
lean_inc(v_ks_5946_);
lean_dec(v_x_5895_);
v___x_5949_ = lean_box(0);
v_isShared_5950_ = v_isSharedCheck_5965_;
goto v_resetjp_5948_;
}
v_resetjp_5948_:
{
lean_object* v___x_5952_; 
if (v_isShared_5950_ == 0)
{
v___x_5952_ = v___x_5949_;
goto v_reusejp_5951_;
}
else
{
lean_object* v_reuseFailAlloc_5964_; 
v_reuseFailAlloc_5964_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5964_, 0, v_ks_5946_);
lean_ctor_set(v_reuseFailAlloc_5964_, 1, v_vs_5947_);
v___x_5952_ = v_reuseFailAlloc_5964_;
goto v_reusejp_5951_;
}
v_reusejp_5951_:
{
lean_object* v_newNode_5953_; size_t v___x_5954_; uint8_t v___x_5955_; 
v_newNode_5953_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1___redArg(v___x_5952_, v_x_5898_, v_x_5899_);
v___x_5954_ = ((size_t)7ULL);
v___x_5955_ = lean_usize_dec_le(v___x_5954_, v_x_5897_);
if (v___x_5955_ == 0)
{
lean_object* v___x_5956_; lean_object* v___x_5957_; uint8_t v___x_5958_; 
v___x_5956_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_5953_);
v___x_5957_ = lean_unsigned_to_nat(4u);
v___x_5958_ = lean_nat_dec_lt(v___x_5956_, v___x_5957_);
lean_dec(v___x_5956_);
if (v___x_5958_ == 0)
{
lean_object* v_ks_5959_; lean_object* v_vs_5960_; lean_object* v___x_5961_; lean_object* v___x_5962_; lean_object* v___x_5963_; 
v_ks_5959_ = lean_ctor_get(v_newNode_5953_, 0);
lean_inc_ref(v_ks_5959_);
v_vs_5960_ = lean_ctor_get(v_newNode_5953_, 1);
lean_inc_ref(v_vs_5960_);
lean_dec_ref(v_newNode_5953_);
v___x_5961_ = lean_unsigned_to_nat(0u);
v___x_5962_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0);
v___x_5963_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(v_x_5897_, v_ks_5959_, v_vs_5960_, v___x_5961_, v___x_5962_);
lean_dec_ref(v_vs_5960_);
lean_dec_ref(v_ks_5959_);
return v___x_5963_;
}
else
{
return v_newNode_5953_;
}
}
else
{
return v_newNode_5953_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(size_t v_depth_5966_, lean_object* v_keys_5967_, lean_object* v_vals_5968_, lean_object* v_i_5969_, lean_object* v_entries_5970_){
_start:
{
lean_object* v___x_5971_; uint8_t v___x_5972_; 
v___x_5971_ = lean_array_get_size(v_keys_5967_);
v___x_5972_ = lean_nat_dec_lt(v_i_5969_, v___x_5971_);
if (v___x_5972_ == 0)
{
lean_dec(v_i_5969_);
return v_entries_5970_;
}
else
{
lean_object* v_k_5973_; lean_object* v_v_5974_; uint64_t v___y_5976_; 
v_k_5973_ = lean_array_fget_borrowed(v_keys_5967_, v_i_5969_);
v_v_5974_ = lean_array_fget_borrowed(v_vals_5968_, v_i_5969_);
if (lean_obj_tag(v_k_5973_) == 0)
{
uint64_t v___x_5987_; 
v___x_5987_ = 1723ULL;
v___y_5976_ = v___x_5987_;
goto v___jp_5975_;
}
else
{
uint64_t v_hash_5988_; 
v_hash_5988_ = lean_ctor_get_uint64(v_k_5973_, sizeof(void*)*2);
v___y_5976_ = v_hash_5988_;
goto v___jp_5975_;
}
v___jp_5975_:
{
size_t v_h_5977_; size_t v___x_5978_; lean_object* v___x_5979_; size_t v___x_5980_; size_t v___x_5981_; size_t v___x_5982_; size_t v_h_5983_; lean_object* v___x_5984_; lean_object* v___x_5985_; 
v_h_5977_ = lean_uint64_to_usize(v___y_5976_);
v___x_5978_ = ((size_t)5ULL);
v___x_5979_ = lean_unsigned_to_nat(1u);
v___x_5980_ = ((size_t)1ULL);
v___x_5981_ = lean_usize_sub(v_depth_5966_, v___x_5980_);
v___x_5982_ = lean_usize_mul(v___x_5978_, v___x_5981_);
v_h_5983_ = lean_usize_shift_right(v_h_5977_, v___x_5982_);
v___x_5984_ = lean_nat_add(v_i_5969_, v___x_5979_);
lean_dec(v_i_5969_);
lean_inc(v_v_5974_);
lean_inc(v_k_5973_);
v___x_5985_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_entries_5970_, v_h_5983_, v_depth_5966_, v_k_5973_, v_v_5974_);
v_i_5969_ = v___x_5984_;
v_entries_5970_ = v___x_5985_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_5989_, lean_object* v_keys_5990_, lean_object* v_vals_5991_, lean_object* v_i_5992_, lean_object* v_entries_5993_){
_start:
{
size_t v_depth_boxed_5994_; lean_object* v_res_5995_; 
v_depth_boxed_5994_ = lean_unbox_usize(v_depth_5989_);
lean_dec(v_depth_5989_);
v_res_5995_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(v_depth_boxed_5994_, v_keys_5990_, v_vals_5991_, v_i_5992_, v_entries_5993_);
lean_dec_ref(v_vals_5991_);
lean_dec_ref(v_keys_5990_);
return v_res_5995_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___boxed(lean_object* v_x_5996_, lean_object* v_x_5997_, lean_object* v_x_5998_, lean_object* v_x_5999_, lean_object* v_x_6000_){
_start:
{
size_t v_x_359__boxed_6001_; size_t v_x_360__boxed_6002_; lean_object* v_res_6003_; 
v_x_359__boxed_6001_ = lean_unbox_usize(v_x_5997_);
lean_dec(v_x_5997_);
v_x_360__boxed_6002_ = lean_unbox_usize(v_x_5998_);
lean_dec(v_x_5998_);
v_res_6003_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_x_5996_, v_x_359__boxed_6001_, v_x_360__boxed_6002_, v_x_5999_, v_x_6000_);
return v_res_6003_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0___redArg(lean_object* v_x_6004_, lean_object* v_x_6005_, lean_object* v_x_6006_){
_start:
{
uint64_t v___y_6008_; 
if (lean_obj_tag(v_x_6005_) == 0)
{
uint64_t v___x_6012_; 
v___x_6012_ = 1723ULL;
v___y_6008_ = v___x_6012_;
goto v___jp_6007_;
}
else
{
uint64_t v_hash_6013_; 
v_hash_6013_ = lean_ctor_get_uint64(v_x_6005_, sizeof(void*)*2);
v___y_6008_ = v_hash_6013_;
goto v___jp_6007_;
}
v___jp_6007_:
{
size_t v___x_6009_; size_t v___x_6010_; lean_object* v___x_6011_; 
v___x_6009_ = lean_uint64_to_usize(v___y_6008_);
v___x_6010_ = ((size_t)1ULL);
v___x_6011_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_x_6004_, v___x_6009_, v___x_6010_, v_x_6005_, v_x_6006_);
return v___x_6011_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_insert(lean_object* v_m_6014_, lean_object* v_n_6015_, lean_object* v_v_6016_){
_start:
{
lean_object* v_map_u2081_6017_; lean_object* v_map_u2082_6018_; lean_object* v___x_6020_; uint8_t v_isShared_6021_; uint8_t v_isSharedCheck_6026_; 
v_map_u2081_6017_ = lean_ctor_get(v_m_6014_, 0);
v_map_u2082_6018_ = lean_ctor_get(v_m_6014_, 1);
v_isSharedCheck_6026_ = !lean_is_exclusive(v_m_6014_);
if (v_isSharedCheck_6026_ == 0)
{
v___x_6020_ = v_m_6014_;
v_isShared_6021_ = v_isSharedCheck_6026_;
goto v_resetjp_6019_;
}
else
{
lean_inc(v_map_u2082_6018_);
lean_inc(v_map_u2081_6017_);
lean_dec(v_m_6014_);
v___x_6020_ = lean_box(0);
v_isShared_6021_ = v_isSharedCheck_6026_;
goto v_resetjp_6019_;
}
v_resetjp_6019_:
{
lean_object* v___x_6022_; lean_object* v___x_6024_; 
v___x_6022_ = l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0___redArg(v_map_u2082_6018_, v_n_6015_, v_v_6016_);
if (v_isShared_6021_ == 0)
{
lean_ctor_set(v___x_6020_, 1, v___x_6022_);
v___x_6024_ = v___x_6020_;
goto v_reusejp_6023_;
}
else
{
lean_object* v_reuseFailAlloc_6025_; 
v_reuseFailAlloc_6025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6025_, 0, v_map_u2081_6017_);
lean_ctor_set(v_reuseFailAlloc_6025_, 1, v___x_6022_);
v___x_6024_ = v_reuseFailAlloc_6025_;
goto v_reusejp_6023_;
}
v_reusejp_6023_:
{
return v___x_6024_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0(lean_object* v_00_u03b2_6027_, lean_object* v_x_6028_, lean_object* v_x_6029_, lean_object* v_x_6030_){
_start:
{
lean_object* v___x_6031_; 
v___x_6031_ = l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0___redArg(v_x_6028_, v_x_6029_, v_x_6030_);
return v___x_6031_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0(lean_object* v_00_u03b2_6032_, lean_object* v_x_6033_, size_t v_x_6034_, size_t v_x_6035_, lean_object* v_x_6036_, lean_object* v_x_6037_){
_start:
{
lean_object* v___x_6038_; 
v___x_6038_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_x_6033_, v_x_6034_, v_x_6035_, v_x_6036_, v_x_6037_);
return v___x_6038_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___boxed(lean_object* v_00_u03b2_6039_, lean_object* v_x_6040_, lean_object* v_x_6041_, lean_object* v_x_6042_, lean_object* v_x_6043_, lean_object* v_x_6044_){
_start:
{
size_t v_x_555__boxed_6045_; size_t v_x_556__boxed_6046_; lean_object* v_res_6047_; 
v_x_555__boxed_6045_ = lean_unbox_usize(v_x_6041_);
lean_dec(v_x_6041_);
v_x_556__boxed_6046_ = lean_unbox_usize(v_x_6042_);
lean_dec(v_x_6042_);
v_res_6047_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0(v_00_u03b2_6039_, v_x_6040_, v_x_555__boxed_6045_, v_x_556__boxed_6046_, v_x_6043_, v_x_6044_);
return v_res_6047_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_6048_, lean_object* v_n_6049_, lean_object* v_k_6050_, lean_object* v_v_6051_){
_start:
{
lean_object* v___x_6052_; 
v___x_6052_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1___redArg(v_n_6049_, v_k_6050_, v_v_6051_);
return v___x_6052_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_6053_, size_t v_depth_6054_, lean_object* v_keys_6055_, lean_object* v_vals_6056_, lean_object* v_heq_6057_, lean_object* v_i_6058_, lean_object* v_entries_6059_){
_start:
{
lean_object* v___x_6060_; 
v___x_6060_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(v_depth_6054_, v_keys_6055_, v_vals_6056_, v_i_6058_, v_entries_6059_);
return v___x_6060_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_6061_, lean_object* v_depth_6062_, lean_object* v_keys_6063_, lean_object* v_vals_6064_, lean_object* v_heq_6065_, lean_object* v_i_6066_, lean_object* v_entries_6067_){
_start:
{
size_t v_depth_boxed_6068_; lean_object* v_res_6069_; 
v_depth_boxed_6068_ = lean_unbox_usize(v_depth_6062_);
lean_dec(v_depth_6062_);
v_res_6069_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2(v_00_u03b2_6061_, v_depth_boxed_6068_, v_keys_6063_, v_vals_6064_, v_heq_6065_, v_i_6066_, v_entries_6067_);
lean_dec_ref(v_vals_6064_);
lean_dec_ref(v_keys_6063_);
return v_res_6069_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_6070_, lean_object* v_x_6071_, lean_object* v_x_6072_, lean_object* v_x_6073_, lean_object* v_x_6074_){
_start:
{
lean_object* v___x_6075_; 
v___x_6075_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_x_6071_, v_x_6072_, v_x_6073_, v_x_6074_);
return v___x_6075_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldStage2___redArg(lean_object* v_f_6076_, lean_object* v_s_6077_, lean_object* v_m_6078_){
_start:
{
lean_object* v_map_u2082_6079_; lean_object* v___x_6080_; 
v_map_u2082_6079_ = lean_ctor_get(v_m_6078_, 1);
lean_inc_ref(v_map_u2082_6079_);
lean_dec_ref(v_m_6078_);
v___x_6080_ = l_Lean_PersistentHashMap_foldl___redArg(v_map_u2082_6079_, v_f_6076_, v_s_6077_);
return v___x_6080_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldStage2(lean_object* v_00_u03c3_6081_, lean_object* v_f_6082_, lean_object* v_s_6083_, lean_object* v_m_6084_){
_start:
{
lean_object* v_map_u2082_6085_; lean_object* v___x_6086_; 
v_map_u2082_6085_ = lean_ctor_get(v_m_6084_, 1);
lean_inc_ref(v_map_u2082_6085_);
lean_dec_ref(v_m_6084_);
v___x_6086_ = l_Lean_PersistentHashMap_foldl___redArg(v_map_u2082_6085_, v_f_6082_, v_s_6083_);
return v___x_6086_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM___redArg___lam__0(lean_object* v_inst_6087_, lean_object* v_f_6088_, lean_object* v_map_u2082_6089_, lean_object* v_____do__lift_6090_){
_start:
{
lean_object* v___x_6091_; 
v___x_6091_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v_inst_6087_, v_f_6088_, v_map_u2082_6089_, v_____do__lift_6090_);
return v___x_6091_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM___redArg(lean_object* v_inst_6092_, lean_object* v_f_6093_, lean_object* v_init_6094_, lean_object* v_map_6095_){
_start:
{
lean_object* v_toBind_6096_; lean_object* v_map_u2081_6097_; lean_object* v_map_u2082_6098_; lean_object* v___f_6099_; lean_object* v___x_6100_; lean_object* v___x_6101_; 
v_toBind_6096_ = lean_ctor_get(v_inst_6092_, 1);
lean_inc(v_toBind_6096_);
v_map_u2081_6097_ = lean_ctor_get(v_map_6095_, 0);
lean_inc_ref(v_map_u2081_6097_);
v_map_u2082_6098_ = lean_ctor_get(v_map_6095_, 1);
lean_inc_ref(v_map_u2082_6098_);
lean_dec_ref(v_map_6095_);
lean_inc(v_f_6093_);
lean_inc_ref(v_inst_6092_);
v___f_6099_ = lean_alloc_closure((void*)(l_Lean_ConstMap_foldM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_6099_, 0, v_inst_6092_);
lean_closure_set(v___f_6099_, 1, v_f_6093_);
lean_closure_set(v___f_6099_, 2, v_map_u2082_6098_);
v___x_6100_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_6092_, v_map_u2081_6097_, v_f_6093_, v_init_6094_);
v___x_6101_ = lean_apply_4(v_toBind_6096_, lean_box(0), lean_box(0), v___x_6100_, v___f_6099_);
return v___x_6101_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM(lean_object* v_00_u03c3_6102_, lean_object* v_m_6103_, lean_object* v_inst_6104_, lean_object* v_f_6105_, lean_object* v_init_6106_, lean_object* v_map_6107_){
_start:
{
lean_object* v___x_6108_; 
v___x_6108_ = l_Lean_ConstMap_foldM___redArg(v_inst_6104_, v_f_6105_, v_init_6106_, v_map_6107_);
return v___x_6108_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___lam__0(lean_object* v_f_6109_, lean_object* v_x1_6110_, lean_object* v_x2_6111_, lean_object* v_x3_6112_){
_start:
{
lean_object* v___x_6113_; 
v___x_6113_ = lean_apply_3(v_f_6109_, v_x1_6110_, v_x2_6111_, v_x3_6112_);
return v___x_6113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_f_6114_, lean_object* v_keys_6115_, lean_object* v_vals_6116_, lean_object* v_i_6117_, lean_object* v_acc_6118_){
_start:
{
lean_object* v___x_6119_; uint8_t v___x_6120_; 
v___x_6119_ = lean_array_get_size(v_keys_6115_);
v___x_6120_ = lean_nat_dec_lt(v_i_6117_, v___x_6119_);
if (v___x_6120_ == 0)
{
lean_dec(v_i_6117_);
lean_dec(v_f_6114_);
return v_acc_6118_;
}
else
{
lean_object* v_k_6121_; lean_object* v_v_6122_; lean_object* v___x_6123_; lean_object* v___x_6124_; lean_object* v___x_6125_; 
v_k_6121_ = lean_array_fget_borrowed(v_keys_6115_, v_i_6117_);
v_v_6122_ = lean_array_fget_borrowed(v_vals_6116_, v_i_6117_);
lean_inc(v_f_6114_);
lean_inc(v_v_6122_);
lean_inc(v_k_6121_);
v___x_6123_ = lean_apply_3(v_f_6114_, v_acc_6118_, v_k_6121_, v_v_6122_);
v___x_6124_ = lean_unsigned_to_nat(1u);
v___x_6125_ = lean_nat_add(v_i_6117_, v___x_6124_);
lean_dec(v_i_6117_);
v_i_6117_ = v___x_6125_;
v_acc_6118_ = v___x_6123_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_f_6127_, lean_object* v_keys_6128_, lean_object* v_vals_6129_, lean_object* v_i_6130_, lean_object* v_acc_6131_){
_start:
{
lean_object* v_res_6132_; 
v_res_6132_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(v_f_6127_, v_keys_6128_, v_vals_6129_, v_i_6130_, v_acc_6131_);
lean_dec_ref(v_vals_6129_);
lean_dec_ref(v_keys_6128_);
return v_res_6132_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_f_6133_, lean_object* v_as_6134_, size_t v_i_6135_, size_t v_stop_6136_, lean_object* v_b_6137_){
_start:
{
lean_object* v___y_6139_; uint8_t v___x_6143_; 
v___x_6143_ = lean_usize_dec_eq(v_i_6135_, v_stop_6136_);
if (v___x_6143_ == 0)
{
lean_object* v___x_6144_; 
v___x_6144_ = lean_array_uget_borrowed(v_as_6134_, v_i_6135_);
switch(lean_obj_tag(v___x_6144_))
{
case 0:
{
lean_object* v_key_6145_; lean_object* v_val_6146_; lean_object* v___x_6147_; 
v_key_6145_ = lean_ctor_get(v___x_6144_, 0);
v_val_6146_ = lean_ctor_get(v___x_6144_, 1);
lean_inc(v_f_6133_);
lean_inc(v_val_6146_);
lean_inc(v_key_6145_);
v___x_6147_ = lean_apply_3(v_f_6133_, v_b_6137_, v_key_6145_, v_val_6146_);
v___y_6139_ = v___x_6147_;
goto v___jp_6138_;
}
case 1:
{
lean_object* v_node_6148_; lean_object* v___x_6149_; 
v_node_6148_ = lean_ctor_get(v___x_6144_, 0);
lean_inc(v_f_6133_);
v___x_6149_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6133_, v_node_6148_, v_b_6137_);
v___y_6139_ = v___x_6149_;
goto v___jp_6138_;
}
default: 
{
v___y_6139_ = v_b_6137_;
goto v___jp_6138_;
}
}
}
else
{
lean_dec(v_f_6133_);
return v_b_6137_;
}
v___jp_6138_:
{
size_t v___x_6140_; size_t v___x_6141_; 
v___x_6140_ = ((size_t)1ULL);
v___x_6141_ = lean_usize_add(v_i_6135_, v___x_6140_);
v_i_6135_ = v___x_6141_;
v_b_6137_ = v___y_6139_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(lean_object* v_f_6150_, lean_object* v_x_6151_, lean_object* v_x_6152_){
_start:
{
if (lean_obj_tag(v_x_6151_) == 0)
{
lean_object* v_es_6153_; lean_object* v___x_6154_; lean_object* v___x_6155_; uint8_t v___x_6156_; 
v_es_6153_ = lean_ctor_get(v_x_6151_, 0);
v___x_6154_ = lean_unsigned_to_nat(0u);
v___x_6155_ = lean_array_get_size(v_es_6153_);
v___x_6156_ = lean_nat_dec_lt(v___x_6154_, v___x_6155_);
if (v___x_6156_ == 0)
{
lean_dec(v_f_6150_);
return v_x_6152_;
}
else
{
size_t v___x_6157_; size_t v___x_6158_; lean_object* v___x_6159_; 
v___x_6157_ = ((size_t)0ULL);
v___x_6158_ = lean_usize_of_nat(v___x_6155_);
v___x_6159_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(v_f_6150_, v_es_6153_, v___x_6157_, v___x_6158_, v_x_6152_);
return v___x_6159_;
}
}
else
{
lean_object* v_ks_6160_; lean_object* v_vs_6161_; lean_object* v___x_6162_; lean_object* v___x_6163_; 
v_ks_6160_ = lean_ctor_get(v_x_6151_, 0);
v_vs_6161_ = lean_ctor_get(v_x_6151_, 1);
v___x_6162_ = lean_unsigned_to_nat(0u);
v___x_6163_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(v_f_6150_, v_ks_6160_, v_vs_6161_, v___x_6162_, v_x_6152_);
return v___x_6163_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_6164_, lean_object* v_x_6165_, lean_object* v_x_6166_){
_start:
{
lean_object* v_res_6167_; 
v_res_6167_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6164_, v_x_6165_, v_x_6166_);
lean_dec_ref(v_x_6165_);
return v_res_6167_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_f_6168_, lean_object* v_as_6169_, lean_object* v_i_6170_, lean_object* v_stop_6171_, lean_object* v_b_6172_){
_start:
{
size_t v_i_boxed_6173_; size_t v_stop_boxed_6174_; lean_object* v_res_6175_; 
v_i_boxed_6173_ = lean_unbox_usize(v_i_6170_);
lean_dec(v_i_6170_);
v_stop_boxed_6174_ = lean_unbox_usize(v_stop_6171_);
lean_dec(v_stop_6171_);
v_res_6175_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(v_f_6168_, v_as_6169_, v_i_boxed_6173_, v_stop_boxed_6174_, v_b_6172_);
lean_dec_ref(v_as_6169_);
return v_res_6175_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(lean_object* v_map_6176_, lean_object* v_f_6177_, lean_object* v_init_6178_){
_start:
{
lean_object* v___f_6179_; lean_object* v___x_6180_; 
v___f_6179_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___lam__0), 4, 1);
lean_closure_set(v___f_6179_, 0, v_f_6177_);
v___x_6180_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v___f_6179_, v_map_6176_, v_init_6178_);
return v___x_6180_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___boxed(lean_object* v_map_6181_, lean_object* v_f_6182_, lean_object* v_init_6183_){
_start:
{
lean_object* v_res_6184_; 
v_res_6184_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(v_map_6181_, v_f_6182_, v_init_6183_);
lean_dec_ref(v_map_6181_);
return v_res_6184_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_fold___redArg(lean_object* v_f_6185_, lean_object* v_init_6186_, lean_object* v_m_6187_){
_start:
{
lean_object* v_map_u2081_6188_; lean_object* v_map_u2082_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; 
v_map_u2081_6188_ = lean_ctor_get(v_m_6187_, 0);
lean_inc_ref(v_map_u2081_6188_);
v_map_u2082_6189_ = lean_ctor_get(v_m_6187_, 1);
lean_inc_ref(v_map_u2082_6189_);
lean_dec_ref(v_m_6187_);
lean_inc(v_f_6185_);
v___x_6190_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_map_u2081_6188_, v_f_6185_, v_init_6186_);
v___x_6191_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(v_map_u2082_6189_, v_f_6185_, v___x_6190_);
lean_dec_ref(v_map_u2082_6189_);
return v___x_6191_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_fold(lean_object* v_00_u03c3_6192_, lean_object* v_f_6193_, lean_object* v_init_6194_, lean_object* v_m_6195_){
_start:
{
lean_object* v___x_6196_; 
v___x_6196_ = l_Lean_ConstMap_fold___redArg(v_f_6193_, v_init_6194_, v_m_6195_);
return v___x_6196_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0(lean_object* v_00_u03c3_6197_, lean_object* v_00_u03b2_6198_, lean_object* v_map_6199_, lean_object* v_f_6200_, lean_object* v_init_6201_){
_start:
{
lean_object* v___x_6202_; 
v___x_6202_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(v_map_6199_, v_f_6200_, v_init_6201_);
return v___x_6202_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___boxed(lean_object* v_00_u03c3_6203_, lean_object* v_00_u03b2_6204_, lean_object* v_map_6205_, lean_object* v_f_6206_, lean_object* v_init_6207_){
_start:
{
lean_object* v_res_6208_; 
v_res_6208_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0(v_00_u03c3_6203_, v_00_u03b2_6204_, v_map_6205_, v_f_6206_, v_init_6207_);
lean_dec_ref(v_map_6205_);
return v_res_6208_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg(lean_object* v_map_6209_, lean_object* v_f_6210_, lean_object* v_init_6211_){
_start:
{
lean_object* v___x_6212_; 
v___x_6212_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6210_, v_map_6209_, v_init_6211_);
return v___x_6212_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg___boxed(lean_object* v_map_6213_, lean_object* v_f_6214_, lean_object* v_init_6215_){
_start:
{
lean_object* v_res_6216_; 
v_res_6216_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg(v_map_6213_, v_f_6214_, v_init_6215_);
lean_dec_ref(v_map_6213_);
return v_res_6216_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0(lean_object* v_00_u03c3_6217_, lean_object* v_00_u03b2_6218_, lean_object* v_map_6219_, lean_object* v_f_6220_, lean_object* v_init_6221_){
_start:
{
lean_object* v___x_6222_; 
v___x_6222_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6220_, v_map_6219_, v_init_6221_);
return v___x_6222_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___boxed(lean_object* v_00_u03c3_6223_, lean_object* v_00_u03b2_6224_, lean_object* v_map_6225_, lean_object* v_f_6226_, lean_object* v_init_6227_){
_start:
{
lean_object* v_res_6228_; 
v_res_6228_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0(v_00_u03c3_6223_, v_00_u03b2_6224_, v_map_6225_, v_f_6226_, v_init_6227_);
lean_dec_ref(v_map_6225_);
return v_res_6228_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1(lean_object* v_00_u03c3_6229_, lean_object* v_00_u03b1_6230_, lean_object* v_00_u03b2_6231_, lean_object* v_f_6232_, lean_object* v_x_6233_, lean_object* v_x_6234_){
_start:
{
lean_object* v___x_6235_; 
v___x_6235_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6232_, v_x_6233_, v_x_6234_);
return v___x_6235_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_6236_, lean_object* v_00_u03b1_6237_, lean_object* v_00_u03b2_6238_, lean_object* v_f_6239_, lean_object* v_x_6240_, lean_object* v_x_6241_){
_start:
{
lean_object* v_res_6242_; 
v_res_6242_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1(v_00_u03c3_6236_, v_00_u03b1_6237_, v_00_u03b2_6238_, v_f_6239_, v_x_6240_, v_x_6241_);
lean_dec_ref(v_x_6240_);
return v_res_6242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_6243_, lean_object* v_00_u03b2_6244_, lean_object* v_00_u03c3_6245_, lean_object* v_f_6246_, lean_object* v_as_6247_, size_t v_i_6248_, size_t v_stop_6249_, lean_object* v_b_6250_){
_start:
{
lean_object* v___x_6251_; 
v___x_6251_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(v_f_6246_, v_as_6247_, v_i_6248_, v_stop_6249_, v_b_6250_);
return v___x_6251_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_6252_, lean_object* v_00_u03b2_6253_, lean_object* v_00_u03c3_6254_, lean_object* v_f_6255_, lean_object* v_as_6256_, lean_object* v_i_6257_, lean_object* v_stop_6258_, lean_object* v_b_6259_){
_start:
{
size_t v_i_boxed_6260_; size_t v_stop_boxed_6261_; lean_object* v_res_6262_; 
v_i_boxed_6260_ = lean_unbox_usize(v_i_6257_);
lean_dec(v_i_6257_);
v_stop_boxed_6261_ = lean_unbox_usize(v_stop_6258_);
lean_dec(v_stop_6258_);
v_res_6262_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_6252_, v_00_u03b2_6253_, v_00_u03c3_6254_, v_f_6255_, v_as_6256_, v_i_boxed_6260_, v_stop_boxed_6261_, v_b_6259_);
lean_dec_ref(v_as_6256_);
return v_res_6262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03c3_6263_, lean_object* v_00_u03b1_6264_, lean_object* v_00_u03b2_6265_, lean_object* v_f_6266_, lean_object* v_keys_6267_, lean_object* v_vals_6268_, lean_object* v_heq_6269_, lean_object* v_i_6270_, lean_object* v_acc_6271_){
_start:
{
lean_object* v___x_6272_; 
v___x_6272_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(v_f_6266_, v_keys_6267_, v_vals_6268_, v_i_6270_, v_acc_6271_);
return v___x_6272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03c3_6273_, lean_object* v_00_u03b1_6274_, lean_object* v_00_u03b2_6275_, lean_object* v_f_6276_, lean_object* v_keys_6277_, lean_object* v_vals_6278_, lean_object* v_heq_6279_, lean_object* v_i_6280_, lean_object* v_acc_6281_){
_start:
{
lean_object* v_res_6282_; 
v_res_6282_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3(v_00_u03c3_6273_, v_00_u03b1_6274_, v_00_u03b2_6275_, v_f_6276_, v_keys_6277_, v_vals_6278_, v_heq_6279_, v_i_6280_, v_acc_6281_);
lean_dec_ref(v_vals_6278_);
lean_dec_ref(v_keys_6277_);
return v_res_6282_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM___redArg___lam__0(lean_object* v_inst_6283_, lean_object* v_map_u2082_6284_, lean_object* v_f_6285_, lean_object* v_____r_6286_){
_start:
{
lean_object* v___x_6287_; 
v___x_6287_ = l_Lean_PersistentHashMap_forM___redArg(v_inst_6283_, v_map_u2082_6284_, v_f_6285_);
return v___x_6287_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM___redArg(lean_object* v_inst_6288_, lean_object* v_map_6289_, lean_object* v_f_6290_){
_start:
{
lean_object* v_toBind_6291_; lean_object* v_map_u2081_6292_; lean_object* v_map_u2082_6293_; lean_object* v___f_6294_; lean_object* v___x_6295_; lean_object* v___x_6296_; 
v_toBind_6291_ = lean_ctor_get(v_inst_6288_, 1);
lean_inc(v_toBind_6291_);
v_map_u2081_6292_ = lean_ctor_get(v_map_6289_, 0);
lean_inc_ref(v_map_u2081_6292_);
v_map_u2082_6293_ = lean_ctor_get(v_map_6289_, 1);
lean_inc_ref(v_map_u2082_6293_);
lean_dec_ref(v_map_6289_);
lean_inc(v_f_6290_);
lean_inc_ref(v_inst_6288_);
v___f_6294_ = lean_alloc_closure((void*)(l_Lean_ConstMap_forM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_6294_, 0, v_inst_6288_);
lean_closure_set(v___f_6294_, 1, v_map_u2082_6293_);
lean_closure_set(v___f_6294_, 2, v_f_6290_);
v___x_6295_ = l_Lean_ImportedConsts_forM___redArg(v_inst_6288_, v_map_u2081_6292_, v_f_6290_);
v___x_6296_ = lean_apply_4(v_toBind_6291_, lean_box(0), lean_box(0), v___x_6295_, v___f_6294_);
return v___x_6296_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM(lean_object* v_m_6297_, lean_object* v_inst_6298_, lean_object* v_map_6299_, lean_object* v_f_6300_){
_start:
{
lean_object* v___x_6301_; 
v___x_6301_ = l_Lean_ConstMap_forM___redArg(v_inst_6298_, v_map_6299_, v_f_6300_);
return v___x_6301_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__0(lean_object* v_f_6302_, lean_object* v_n_6303_, lean_object* v_v_6304_){
_start:
{
lean_object* v___x_6305_; lean_object* v___x_6306_; 
v___x_6305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6305_, 0, v_n_6303_);
lean_ctor_set(v___x_6305_, 1, v_v_6304_);
v___x_6306_ = lean_apply_1(v_f_6302_, v___x_6305_);
return v___x_6306_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__1(lean_object* v_inst_6307_, lean_object* v_map_6308_, lean_object* v_f_6309_){
_start:
{
lean_object* v___f_6310_; lean_object* v___x_6311_; 
v___f_6310_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__0), 3, 1);
lean_closure_set(v___f_6310_, 0, v_f_6309_);
v___x_6311_ = l_Lean_ConstMap_forM___redArg(v_inst_6307_, v_map_6308_, v___f_6310_);
return v___x_6311_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg(lean_object* v_inst_6312_){
_start:
{
lean_object* v___f_6313_; 
v___f_6313_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_6313_, 0, v_inst_6312_);
return v___f_6313_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad(lean_object* v_m_6314_, lean_object* v_inst_6315_){
_start:
{
lean_object* v___f_6316_; 
v___f_6316_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_6316_, 0, v_inst_6315_);
return v___f_6316_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__2(lean_object* v___y_6317_, lean_object* v_toBind_6318_, lean_object* v___f_6319_, lean_object* v_n_6320_, lean_object* v_v_6321_, lean_object* v___y_6322_){
_start:
{
lean_object* v___x_6323_; lean_object* v___x_6324_; lean_object* v___x_6325_; 
v___x_6323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6323_, 0, v_n_6320_);
lean_ctor_set(v___x_6323_, 1, v_v_6321_);
v___x_6324_ = lean_apply_2(v___y_6317_, v___x_6323_, v___y_6322_);
v___x_6325_ = lean_apply_4(v_toBind_6318_, lean_box(0), lean_box(0), v___x_6324_, v___f_6319_);
return v___x_6325_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__0(lean_object* v_inst_6326_, lean_object* v_00_u03b2_6327_, lean_object* v___y_6328_, lean_object* v___y_6329_, lean_object* v___y_6330_){
_start:
{
lean_object* v___f_6331_; lean_object* v___f_6332_; lean_object* v___f_6333_; lean_object* v___f_6334_; lean_object* v___x_6335_; lean_object* v___x_6336_; lean_object* v___x_6337_; lean_object* v___x_6338_; lean_object* v___x_6339_; lean_object* v___x_6340_; lean_object* v___f_6341_; lean_object* v___f_6342_; lean_object* v___f_6343_; lean_object* v___f_6344_; lean_object* v___x_6345_; lean_object* v___x_6346_; lean_object* v___x_6347_; lean_object* v___x_6348_; lean_object* v___x_6349_; lean_object* v___x_6350_; lean_object* v_toApplicative_6351_; lean_object* v_toBind_6352_; lean_object* v_toPure_6353_; lean_object* v___f_6354_; lean_object* v___f_6355_; lean_object* v___f_6356_; lean_object* v___x_138__overap_6357_; lean_object* v___x_6358_; lean_object* v___x_6359_; 
lean_inc_ref_n(v_inst_6326_, 7);
v___f_6331_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_6331_, 0, v_inst_6326_);
v___f_6332_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_6332_, 0, v_inst_6326_);
v___f_6333_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_6333_, 0, v_inst_6326_);
v___f_6334_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_6334_, 0, v_inst_6326_);
v___x_6335_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_6335_, 0, lean_box(0));
lean_closure_set(v___x_6335_, 1, lean_box(0));
lean_closure_set(v___x_6335_, 2, v_inst_6326_);
v___x_6336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6336_, 0, v___x_6335_);
lean_ctor_set(v___x_6336_, 1, v___f_6331_);
v___x_6337_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_6337_, 0, lean_box(0));
lean_closure_set(v___x_6337_, 1, lean_box(0));
lean_closure_set(v___x_6337_, 2, v_inst_6326_);
v___x_6338_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6338_, 0, v___x_6336_);
lean_ctor_set(v___x_6338_, 1, v___x_6337_);
lean_ctor_set(v___x_6338_, 2, v___f_6332_);
lean_ctor_set(v___x_6338_, 3, v___f_6333_);
lean_ctor_set(v___x_6338_, 4, v___f_6334_);
v___x_6339_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_6339_, 0, lean_box(0));
lean_closure_set(v___x_6339_, 1, lean_box(0));
lean_closure_set(v___x_6339_, 2, v_inst_6326_);
v___x_6340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6340_, 0, v___x_6338_);
lean_ctor_set(v___x_6340_, 1, v___x_6339_);
lean_inc_ref_n(v___x_6340_, 6);
v___f_6341_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_6341_, 0, v___x_6340_);
v___f_6342_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_6342_, 0, v___x_6340_);
v___f_6343_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_6343_, 0, v___x_6340_);
v___f_6344_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_6344_, 0, v___x_6340_);
v___x_6345_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_6345_, 0, lean_box(0));
lean_closure_set(v___x_6345_, 1, lean_box(0));
lean_closure_set(v___x_6345_, 2, v___x_6340_);
v___x_6346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6346_, 0, v___x_6345_);
lean_ctor_set(v___x_6346_, 1, v___f_6341_);
v___x_6347_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_6347_, 0, lean_box(0));
lean_closure_set(v___x_6347_, 1, lean_box(0));
lean_closure_set(v___x_6347_, 2, v___x_6340_);
v___x_6348_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6348_, 0, v___x_6346_);
lean_ctor_set(v___x_6348_, 1, v___x_6347_);
lean_ctor_set(v___x_6348_, 2, v___f_6342_);
lean_ctor_set(v___x_6348_, 3, v___f_6343_);
lean_ctor_set(v___x_6348_, 4, v___f_6344_);
v___x_6349_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_6349_, 0, lean_box(0));
lean_closure_set(v___x_6349_, 1, lean_box(0));
lean_closure_set(v___x_6349_, 2, v___x_6340_);
v___x_6350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6350_, 0, v___x_6348_);
lean_ctor_set(v___x_6350_, 1, v___x_6349_);
v_toApplicative_6351_ = lean_ctor_get(v_inst_6326_, 0);
lean_inc_ref(v_toApplicative_6351_);
v_toBind_6352_ = lean_ctor_get(v_inst_6326_, 1);
lean_inc_n(v_toBind_6352_, 2);
lean_dec_ref(v_inst_6326_);
v_toPure_6353_ = lean_ctor_get(v_toApplicative_6351_, 1);
lean_inc_n(v_toPure_6353_, 2);
lean_dec_ref(v_toApplicative_6351_);
v___f_6354_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0), 2, 1);
lean_closure_set(v___f_6354_, 0, v_toPure_6353_);
v___f_6355_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_6355_, 0, v_toPure_6353_);
v___f_6356_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__2), 6, 3);
lean_closure_set(v___f_6356_, 0, v___y_6330_);
lean_closure_set(v___f_6356_, 1, v_toBind_6352_);
lean_closure_set(v___f_6356_, 2, v___f_6355_);
v___x_138__overap_6357_ = l_Lean_ConstMap_forM___redArg(v___x_6350_, v___y_6328_, v___f_6356_);
v___x_6358_ = lean_apply_1(v___x_138__overap_6357_, v___y_6329_);
v___x_6359_ = lean_apply_4(v_toBind_6352_, lean_box(0), lean_box(0), v___x_6358_, v___f_6354_);
return v___x_6359_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg(lean_object* v_inst_6360_){
_start:
{
lean_object* v___f_6361_; 
v___f_6361_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__0), 5, 1);
lean_closure_set(v___f_6361_, 0, v_inst_6360_);
return v___f_6361_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad(lean_object* v_m_6362_, lean_object* v_inst_6363_){
_start:
{
lean_object* v___f_6364_; 
v___f_6364_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__0), 5, 1);
lean_closure_set(v___f_6364_, 0, v_inst_6363_);
return v___f_6364_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_toList___lam__0(lean_object* v_es_6365_, lean_object* v_n_6366_, lean_object* v_v_6367_){
_start:
{
lean_object* v___x_6368_; lean_object* v___x_6369_; 
v___x_6368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6368_, 0, v_n_6366_);
lean_ctor_set(v___x_6368_, 1, v_v_6367_);
v___x_6369_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6369_, 0, v___x_6368_);
lean_ctor_set(v___x_6369_, 1, v_es_6365_);
return v___x_6369_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_toList(lean_object* v_m_6371_){
_start:
{
lean_object* v___f_6372_; lean_object* v___x_6373_; lean_object* v___x_6374_; 
v___f_6372_ = ((lean_object*)(l_Lean_ConstMap_toList___closed__0));
v___x_6373_ = lean_box(0);
v___x_6374_ = l_Lean_ConstMap_fold___redArg(v___f_6372_, v___x_6373_, v_m_6371_);
return v___x_6374_;
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
l___private_Lean_ConstTrie_0__Lean_maxSlotBits = _init_l___private_Lean_ConstTrie_0__Lean_maxSlotBits();
l___private_Lean_ConstTrie_0__Lean_LookupCacheImpl = _init_l___private_Lean_ConstTrie_0__Lean_LookupCacheImpl();
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
