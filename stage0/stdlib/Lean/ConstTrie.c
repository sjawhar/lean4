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
lean_object* lean_imported_consts_force_shared(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceShared___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_imported_consts_mod_idx_core(lean_object*, lean_object*, lean_object*);
lean_object* lean_imported_consts_find_mod_idx_cached(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findModIdxCached_x3f___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceShared___boxed(lean_object* v_00_u03b2_2009_, lean_object* v_t_2010_){
_start:
{
lean_object* v_res_2011_; 
v_res_2011_ = lean_imported_consts_force_shared(v_t_2010_);
lean_dec_ref(v_t_2010_);
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(lean_object* v_x_2012_){
_start:
{
switch(lean_obj_tag(v_x_2012_))
{
case 0:
{
lean_object* v_tree_2013_; lean_object* v_key_2014_; 
v_tree_2013_ = lean_ctor_get(v_x_2012_, 1);
v_key_2014_ = lean_ctor_get(v_tree_2013_, 0);
lean_inc(v_key_2014_);
return v_key_2014_;
}
case 3:
{
lean_object* v_tree_2015_; 
v_tree_2015_ = lean_ctor_get(v_x_2012_, 1);
v_x_2012_ = v_tree_2015_;
goto _start;
}
default: 
{
lean_object* v_key_2017_; 
v_key_2017_ = lean_ctor_get(v_x_2012_, 0);
lean_inc(v_key_2017_);
return v_key_2017_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg___boxed(lean_object* v_x_2018_){
_start:
{
lean_object* v_res_2019_; 
v_res_2019_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v_x_2018_);
lean_dec_ref(v_x_2018_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key(lean_object* v_00_u03b1_2020_, lean_object* v_x_2021_){
_start:
{
lean_object* v___x_2022_; 
v___x_2022_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v_x_2021_);
return v___x_2022_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___boxed(lean_object* v_00_u03b1_2023_, lean_object* v_x_2024_){
_start:
{
lean_object* v_res_2025_; 
v_res_2025_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key(v_00_u03b1_2023_, v_x_2024_);
lean_dec_ref(v_x_2024_);
return v_res_2025_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg(lean_object* v_n_2026_, lean_object* v_cs_2027_, uint64_t v___x_2028_, lean_object* v___x_2029_, lean_object* v_a_2030_){
_start:
{
uint8_t v___x_2031_; 
v___x_2031_ = lean_nat_dec_lt(v_a_2030_, v_n_2026_);
if (v___x_2031_ == 0)
{
return v_a_2030_;
}
else
{
lean_object* v___x_2032_; lean_object* v___x_2033_; uint64_t v___y_2035_; lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2032_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
v___x_2033_ = lean_unsigned_to_nat(1u);
v___x_2043_ = lean_array_get_borrowed(v___x_2032_, v_cs_2027_, v_a_2030_);
v___x_2044_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v___x_2043_);
if (lean_obj_tag(v___x_2044_) == 0)
{
uint64_t v___x_2045_; 
v___x_2045_ = 1723ULL;
v___y_2035_ = v___x_2045_;
goto v___jp_2034_;
}
else
{
uint64_t v_hash_2046_; 
v_hash_2046_ = lean_ctor_get_uint64(v___x_2044_, sizeof(void*)*2);
lean_dec(v___x_2044_);
v___y_2035_ = v_hash_2046_;
goto v___jp_2034_;
}
v___jp_2034_:
{
uint64_t v___x_2036_; uint64_t v___x_2037_; uint64_t v___x_2038_; lean_object* v___x_2039_; uint8_t v___x_2040_; 
v___x_2036_ = 64ULL;
v___x_2037_ = lean_uint64_sub(v___x_2036_, v___x_2028_);
v___x_2038_ = lean_uint64_shift_right(v___y_2035_, v___x_2037_);
v___x_2039_ = lean_uint64_to_nat(v___x_2038_);
v___x_2040_ = lean_nat_dec_lt(v___x_2039_, v___x_2029_);
lean_dec(v___x_2039_);
if (v___x_2040_ == 0)
{
return v_a_2030_;
}
else
{
lean_object* v___x_2041_; 
v___x_2041_ = lean_nat_add(v_a_2030_, v___x_2033_);
lean_dec(v_a_2030_);
v_a_2030_ = v___x_2041_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg___boxed(lean_object* v_n_2047_, lean_object* v_cs_2048_, lean_object* v___x_2049_, lean_object* v___x_2050_, lean_object* v_a_2051_){
_start:
{
uint64_t v___x_893__boxed_2052_; lean_object* v_res_2053_; 
v___x_893__boxed_2052_ = lean_unbox_uint64(v___x_2049_);
lean_dec_ref(v___x_2049_);
v_res_2053_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg(v_n_2047_, v_cs_2048_, v___x_893__boxed_2052_, v___x_2050_, v_a_2051_);
lean_dec(v___x_2050_);
lean_dec_ref(v_cs_2048_);
lean_dec(v_n_2047_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg(lean_object* v___x_2054_, lean_object* v_n_2055_, lean_object* v_cs_2056_, uint64_t v___x_2057_, lean_object* v_a_2058_){
_start:
{
lean_object* v_snd_2059_; lean_object* v_fst_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2093_; 
v_snd_2059_ = lean_ctor_get(v_a_2058_, 1);
v_fst_2060_ = lean_ctor_get(v_a_2058_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v_a_2058_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2062_ = v_a_2058_;
v_isShared_2063_ = v_isSharedCheck_2093_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_snd_2059_);
lean_inc(v_fst_2060_);
lean_dec(v_a_2058_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2093_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v_fst_2064_; lean_object* v_snd_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2092_; 
v_fst_2064_ = lean_ctor_get(v_snd_2059_, 0);
v_snd_2065_ = lean_ctor_get(v_snd_2059_, 1);
v_isSharedCheck_2092_ = !lean_is_exclusive(v_snd_2059_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2067_ = v_snd_2059_;
v_isShared_2068_ = v_isSharedCheck_2092_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_snd_2065_);
lean_inc(v_fst_2064_);
lean_dec(v_snd_2059_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2092_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
uint8_t v___x_2069_; 
v___x_2069_ = lean_nat_dec_lt(v_snd_2065_, v___x_2054_);
if (v___x_2069_ == 0)
{
lean_object* v___x_2071_; 
if (v_isShared_2068_ == 0)
{
v___x_2071_ = v___x_2067_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_fst_2064_);
lean_ctor_set(v_reuseFailAlloc_2075_, 1, v_snd_2065_);
v___x_2071_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
lean_object* v___x_2073_; 
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 1, v___x_2071_);
v___x_2073_ = v___x_2062_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v_fst_2060_);
lean_ctor_set(v_reuseFailAlloc_2074_, 1, v___x_2071_);
v___x_2073_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
return v___x_2073_;
}
}
}
else
{
lean_object* v___x_2076_; lean_object* v___x_2077_; uint8_t v___x_2078_; lean_object* v___x_2079_; lean_object* v___y_2081_; 
v___x_2076_ = lean_unsigned_to_nat(1u);
v___x_2077_ = lean_unsigned_to_nat(65535u);
v___x_2078_ = lean_nat_dec_le(v___x_2077_, v_n_2055_);
v___x_2079_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg(v_n_2055_, v_cs_2056_, v___x_2057_, v_snd_2065_, v_fst_2064_);
if (v___x_2078_ == 0)
{
lean_object* v___x_2090_; 
v___x_2090_ = l___private_Lean_ConstTrie_0__Lean_pushU16(v_fst_2060_, v___x_2079_);
v___y_2081_ = v___x_2090_;
goto v___jp_2080_;
}
else
{
lean_object* v___x_2091_; 
v___x_2091_ = l___private_Lean_ConstTrie_0__Lean_pushU32(v_fst_2060_, v___x_2079_);
v___y_2081_ = v___x_2091_;
goto v___jp_2080_;
}
v___jp_2080_:
{
lean_object* v___x_2082_; lean_object* v___x_2084_; 
v___x_2082_ = lean_nat_add(v_snd_2065_, v___x_2076_);
lean_dec(v_snd_2065_);
if (v_isShared_2068_ == 0)
{
lean_ctor_set(v___x_2067_, 1, v___x_2082_);
lean_ctor_set(v___x_2067_, 0, v___x_2079_);
v___x_2084_ = v___x_2067_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v___x_2079_);
lean_ctor_set(v_reuseFailAlloc_2089_, 1, v___x_2082_);
v___x_2084_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
lean_object* v___x_2086_; 
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 1, v___x_2084_);
lean_ctor_set(v___x_2062_, 0, v___y_2081_);
v___x_2086_ = v___x_2062_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v___y_2081_);
lean_ctor_set(v_reuseFailAlloc_2088_, 1, v___x_2084_);
v___x_2086_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
v_a_2058_ = v___x_2086_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v___x_2094_, lean_object* v_n_2095_, lean_object* v_cs_2096_, lean_object* v___x_2097_, lean_object* v_a_2098_){
_start:
{
uint64_t v___x_930__boxed_2099_; lean_object* v_res_2100_; 
v___x_930__boxed_2099_ = lean_unbox_uint64(v___x_2097_);
lean_dec_ref(v___x_2097_);
v_res_2100_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg(v___x_2094_, v_n_2095_, v_cs_2096_, v___x_930__boxed_2099_, v_a_2098_);
lean_dec_ref(v_cs_2096_);
lean_dec(v_n_2095_);
lean_dec(v___x_2094_);
return v_res_2100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg(lean_object* v_n_2101_, lean_object* v_cs_2102_, uint64_t v___x_2103_, lean_object* v___x_2104_, lean_object* v_a_2105_){
_start:
{
lean_object* v_snd_2106_; lean_object* v_fst_2107_; lean_object* v___x_2109_; uint8_t v_isShared_2110_; uint8_t v_isSharedCheck_2140_; 
v_snd_2106_ = lean_ctor_get(v_a_2105_, 1);
v_fst_2107_ = lean_ctor_get(v_a_2105_, 0);
v_isSharedCheck_2140_ = !lean_is_exclusive(v_a_2105_);
if (v_isSharedCheck_2140_ == 0)
{
v___x_2109_ = v_a_2105_;
v_isShared_2110_ = v_isSharedCheck_2140_;
goto v_resetjp_2108_;
}
else
{
lean_inc(v_snd_2106_);
lean_inc(v_fst_2107_);
lean_dec(v_a_2105_);
v___x_2109_ = lean_box(0);
v_isShared_2110_ = v_isSharedCheck_2140_;
goto v_resetjp_2108_;
}
v_resetjp_2108_:
{
lean_object* v_fst_2111_; lean_object* v_snd_2112_; lean_object* v___x_2114_; uint8_t v_isShared_2115_; uint8_t v_isSharedCheck_2139_; 
v_fst_2111_ = lean_ctor_get(v_snd_2106_, 0);
v_snd_2112_ = lean_ctor_get(v_snd_2106_, 1);
v_isSharedCheck_2139_ = !lean_is_exclusive(v_snd_2106_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2114_ = v_snd_2106_;
v_isShared_2115_ = v_isSharedCheck_2139_;
goto v_resetjp_2113_;
}
else
{
lean_inc(v_snd_2112_);
lean_inc(v_fst_2111_);
lean_dec(v_snd_2106_);
v___x_2114_ = lean_box(0);
v_isShared_2115_ = v_isSharedCheck_2139_;
goto v_resetjp_2113_;
}
v_resetjp_2113_:
{
uint8_t v___x_2116_; 
v___x_2116_ = lean_nat_dec_lt(v_snd_2112_, v___x_2104_);
if (v___x_2116_ == 0)
{
lean_object* v___x_2118_; 
if (v_isShared_2115_ == 0)
{
v___x_2118_ = v___x_2114_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v_fst_2111_);
lean_ctor_set(v_reuseFailAlloc_2122_, 1, v_snd_2112_);
v___x_2118_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
lean_object* v___x_2120_; 
if (v_isShared_2110_ == 0)
{
lean_ctor_set(v___x_2109_, 1, v___x_2118_);
v___x_2120_ = v___x_2109_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v_fst_2107_);
lean_ctor_set(v_reuseFailAlloc_2121_, 1, v___x_2118_);
v___x_2120_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
return v___x_2120_;
}
}
}
else
{
lean_object* v___x_2123_; lean_object* v___x_2124_; uint8_t v___x_2125_; lean_object* v___x_2126_; lean_object* v___y_2128_; 
v___x_2123_ = lean_unsigned_to_nat(1u);
v___x_2124_ = lean_unsigned_to_nat(65535u);
v___x_2125_ = lean_nat_dec_le(v___x_2124_, v_n_2101_);
v___x_2126_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg(v_n_2101_, v_cs_2102_, v___x_2103_, v_snd_2112_, v_fst_2111_);
if (v___x_2125_ == 0)
{
lean_object* v___x_2137_; 
v___x_2137_ = l___private_Lean_ConstTrie_0__Lean_pushU16(v_fst_2107_, v___x_2126_);
v___y_2128_ = v___x_2137_;
goto v___jp_2127_;
}
else
{
lean_object* v___x_2138_; 
v___x_2138_ = l___private_Lean_ConstTrie_0__Lean_pushU32(v_fst_2107_, v___x_2126_);
v___y_2128_ = v___x_2138_;
goto v___jp_2127_;
}
v___jp_2127_:
{
lean_object* v___x_2129_; lean_object* v___x_2131_; 
v___x_2129_ = lean_nat_add(v_snd_2112_, v___x_2123_);
lean_dec(v_snd_2112_);
if (v_isShared_2115_ == 0)
{
lean_ctor_set(v___x_2114_, 1, v___x_2129_);
lean_ctor_set(v___x_2114_, 0, v___x_2126_);
v___x_2131_ = v___x_2114_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v___x_2126_);
lean_ctor_set(v_reuseFailAlloc_2136_, 1, v___x_2129_);
v___x_2131_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
lean_object* v___x_2133_; 
if (v_isShared_2110_ == 0)
{
lean_ctor_set(v___x_2109_, 1, v___x_2131_);
lean_ctor_set(v___x_2109_, 0, v___y_2128_);
v___x_2133_ = v___x_2109_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v___y_2128_);
lean_ctor_set(v_reuseFailAlloc_2135_, 1, v___x_2131_);
v___x_2133_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
lean_object* v___x_2134_; 
v___x_2134_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg(v___x_2104_, v_n_2101_, v_cs_2102_, v___x_2103_, v___x_2133_);
return v___x_2134_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg___boxed(lean_object* v_n_2141_, lean_object* v_cs_2142_, lean_object* v___x_2143_, lean_object* v___x_2144_, lean_object* v_a_2145_){
_start:
{
uint64_t v___x_997__boxed_2146_; lean_object* v_res_2147_; 
v___x_997__boxed_2146_ = lean_unbox_uint64(v___x_2143_);
lean_dec_ref(v___x_2143_);
v_res_2147_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg(v_n_2141_, v_cs_2142_, v___x_997__boxed_2146_, v___x_2144_, v_a_2145_);
lean_dec(v___x_2144_);
lean_dec_ref(v_cs_2142_);
lean_dec(v_n_2141_);
return v_res_2147_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg(lean_object* v_as_2148_, size_t v_sz_2149_, size_t v_i_2150_, lean_object* v_b_2151_){
_start:
{
uint64_t v___y_2153_; uint8_t v___x_2161_; 
v___x_2161_ = lean_usize_dec_lt(v_i_2150_, v_sz_2149_);
if (v___x_2161_ == 0)
{
return v_b_2151_;
}
else
{
lean_object* v_a_2162_; lean_object* v___x_2163_; 
v_a_2162_ = lean_array_uget_borrowed(v_as_2148_, v_i_2150_);
v___x_2163_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v_a_2162_);
if (lean_obj_tag(v___x_2163_) == 0)
{
uint64_t v___x_2164_; 
v___x_2164_ = 1723ULL;
v___y_2153_ = v___x_2164_;
goto v___jp_2152_;
}
else
{
uint64_t v_hash_2165_; 
v_hash_2165_ = lean_ctor_get_uint64(v___x_2163_, sizeof(void*)*2);
lean_dec(v___x_2163_);
v___y_2153_ = v_hash_2165_;
goto v___jp_2152_;
}
}
v___jp_2152_:
{
uint64_t v___x_2154_; uint64_t v___x_2155_; uint8_t v___x_2156_; lean_object* v___x_2157_; size_t v___x_2158_; size_t v___x_2159_; 
v___x_2154_ = 32ULL;
v___x_2155_ = lean_uint64_shift_right(v___y_2153_, v___x_2154_);
v___x_2156_ = lean_uint64_to_uint8(v___x_2155_);
v___x_2157_ = lean_byte_array_push(v_b_2151_, v___x_2156_);
v___x_2158_ = ((size_t)1ULL);
v___x_2159_ = lean_usize_add(v_i_2150_, v___x_2158_);
v_i_2150_ = v___x_2159_;
v_b_2151_ = v___x_2157_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg___boxed(lean_object* v_as_2166_, lean_object* v_sz_2167_, lean_object* v_i_2168_, lean_object* v_b_2169_){
_start:
{
size_t v_sz_boxed_2170_; size_t v_i_boxed_2171_; lean_object* v_res_2172_; 
v_sz_boxed_2170_ = lean_unbox_usize(v_sz_2167_);
lean_dec(v_sz_2167_);
v_i_boxed_2171_ = lean_unbox_usize(v_i_2168_);
lean_dec(v_i_2168_);
v_res_2172_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg(v_as_2166_, v_sz_boxed_2170_, v_i_boxed_2171_, v_b_2169_);
lean_dec_ref(v_as_2166_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(lean_object* v_cs_2173_){
_start:
{
lean_object* v_n_2174_; lean_object* v_j_2175_; uint8_t v___x_2176_; 
v_n_2174_ = lean_array_get_size(v_cs_2173_);
v_j_2175_ = lean_unsigned_to_nat(0u);
v___x_2176_ = lean_nat_dec_eq(v_n_2174_, v_j_2175_);
if (v___x_2176_ == 0)
{
lean_object* v___x_2177_; uint64_t v_bits_2178_; uint64_t v___x_2179_; uint64_t v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___y_2184_; uint8_t v___y_2185_; lean_object* v___x_2194_; uint8_t v___x_2195_; lean_object* v___y_2197_; 
v___x_2177_ = lean_unsigned_to_nat(1u);
v_bits_2178_ = 1ULL;
v___x_2179_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2___redArg(v_n_2174_, v_bits_2178_);
v___x_2180_ = lean_uint64_shift_left(v_bits_2178_, v___x_2179_);
v___x_2181_ = lean_uint64_to_nat(v___x_2180_);
v___x_2182_ = lean_nat_add(v___x_2181_, v___x_2177_);
lean_dec(v___x_2181_);
v___x_2194_ = lean_unsigned_to_nat(65535u);
v___x_2195_ = lean_nat_dec_le(v___x_2194_, v_n_2174_);
if (v___x_2195_ == 0)
{
lean_object* v___x_2206_; 
v___x_2206_ = lean_unsigned_to_nat(2u);
v___y_2197_ = v___x_2206_;
goto v___jp_2196_;
}
else
{
lean_object* v___x_2207_; 
v___x_2207_ = lean_unsigned_to_nat(4u);
v___y_2197_ = v___x_2207_;
goto v___jp_2196_;
}
v___jp_2183_:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v_fst_2190_; size_t v_sz_2191_; size_t v___x_2192_; lean_object* v___x_2193_; 
v___x_2186_ = lean_byte_array_push(v___y_2184_, v___y_2185_);
v___x_2187_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10));
v___x_2188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2188_, 0, v___x_2186_);
lean_ctor_set(v___x_2188_, 1, v___x_2187_);
v___x_2189_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg(v_n_2174_, v_cs_2173_, v___x_2179_, v___x_2182_, v___x_2188_);
lean_dec(v___x_2182_);
v_fst_2190_ = lean_ctor_get(v___x_2189_, 0);
lean_inc(v_fst_2190_);
lean_dec_ref(v___x_2189_);
v_sz_2191_ = lean_array_size(v_cs_2173_);
v___x_2192_ = ((size_t)0ULL);
v___x_2193_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg(v_cs_2173_, v_sz_2191_, v___x_2192_, v_fst_2190_);
return v___x_2193_;
}
v___jp_2196_:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2198_ = lean_nat_mul(v___y_2197_, v___x_2182_);
v___x_2199_ = lean_nat_add(v___x_2177_, v___x_2198_);
lean_dec(v___x_2198_);
v___x_2200_ = lean_nat_add(v___x_2199_, v_n_2174_);
lean_dec(v___x_2199_);
v___x_2201_ = lean_mk_empty_byte_array(v___x_2200_);
lean_dec(v___x_2200_);
if (v___x_2195_ == 0)
{
uint8_t v___x_2202_; 
v___x_2202_ = lean_uint64_to_uint8(v___x_2179_);
v___y_2184_ = v___x_2201_;
v___y_2185_ = v___x_2202_;
goto v___jp_2183_;
}
else
{
uint8_t v___x_2203_; uint8_t v___x_2204_; uint8_t v___x_2205_; 
v___x_2203_ = lean_uint64_to_uint8(v___x_2179_);
v___x_2204_ = 128;
v___x_2205_ = lean_uint8_lor(v___x_2203_, v___x_2204_);
v___y_2184_ = v___x_2201_;
v___y_2185_ = v___x_2205_;
goto v___jp_2183_;
}
}
}
else
{
lean_object* v___x_2208_; 
v___x_2208_ = l_ByteArray_empty;
return v___x_2208_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg___boxed(lean_object* v_cs_2209_){
_start:
{
lean_object* v_res_2210_; 
v_res_2210_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v_cs_2209_);
lean_dec_ref(v_cs_2209_);
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mkMerged___redArg(lean_object* v_key_2211_, lean_object* v_entry_x3f_2212_, lean_object* v_children_2213_){
_start:
{
lean_object* v___x_2214_; lean_object* v___x_2215_; 
v___x_2214_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v_children_2213_);
v___x_2215_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2215_, 0, v_key_2211_);
lean_ctor_set(v___x_2215_, 1, v_entry_x3f_2212_);
lean_ctor_set(v___x_2215_, 2, v_children_2213_);
lean_ctor_set(v___x_2215_, 3, v___x_2214_);
return v___x_2215_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mkMerged(lean_object* v_00_u03b1_2216_, lean_object* v_key_2217_, lean_object* v_entry_x3f_2218_, lean_object* v_children_2219_){
_start:
{
lean_object* v___x_2220_; 
v___x_2220_ = l_Lean_ImportedConsts_mkMerged___redArg(v_key_2217_, v_entry_x3f_2218_, v_children_2219_);
return v___x_2220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0(lean_object* v_00_u03b1_2221_, lean_object* v_cs_2222_){
_start:
{
lean_object* v___x_2223_; 
v___x_2223_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v_cs_2222_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___boxed(lean_object* v_00_u03b1_2224_, lean_object* v_cs_2225_){
_start:
{
lean_object* v_res_2226_; 
v_res_2226_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0(v_00_u03b1_2224_, v_cs_2225_);
lean_dec_ref(v_cs_2225_);
return v_res_2226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0(lean_object* v_n_2227_, lean_object* v_00_u03b1_2228_, lean_object* v_cs_2229_, uint64_t v___x_2230_, lean_object* v___x_2231_, lean_object* v_inst_2232_, lean_object* v_a_2233_){
_start:
{
lean_object* v___x_2234_; 
v___x_2234_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___redArg(v_n_2227_, v_cs_2229_, v___x_2230_, v___x_2231_, v_a_2233_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0___boxed(lean_object* v_n_2235_, lean_object* v_00_u03b1_2236_, lean_object* v_cs_2237_, lean_object* v___x_2238_, lean_object* v___x_2239_, lean_object* v_inst_2240_, lean_object* v_a_2241_){
_start:
{
uint64_t v___x_1158__boxed_2242_; lean_object* v_res_2243_; 
v___x_1158__boxed_2242_ = lean_unbox_uint64(v___x_2238_);
lean_dec_ref(v___x_2238_);
v_res_2243_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__0(v_n_2235_, v_00_u03b1_2236_, v_cs_2237_, v___x_1158__boxed_2242_, v___x_2239_, v_inst_2240_, v_a_2241_);
lean_dec(v___x_2239_);
lean_dec_ref(v_cs_2237_);
lean_dec(v_n_2235_);
return v_res_2243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1(lean_object* v_n_2244_, lean_object* v_00_u03b1_2245_, lean_object* v_cs_2246_, uint64_t v___x_2247_, lean_object* v___x_2248_, lean_object* v_inst_2249_, lean_object* v_a_2250_){
_start:
{
lean_object* v___x_2251_; 
v___x_2251_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___redArg(v_n_2244_, v_cs_2246_, v___x_2247_, v___x_2248_, v_a_2250_);
return v___x_2251_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1___boxed(lean_object* v_n_2252_, lean_object* v_00_u03b1_2253_, lean_object* v_cs_2254_, lean_object* v___x_2255_, lean_object* v___x_2256_, lean_object* v_inst_2257_, lean_object* v_a_2258_){
_start:
{
uint64_t v___x_1169__boxed_2259_; lean_object* v_res_2260_; 
v___x_1169__boxed_2259_ = lean_unbox_uint64(v___x_2255_);
lean_dec_ref(v___x_2255_);
v_res_2260_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1(v_n_2252_, v_00_u03b1_2253_, v_cs_2254_, v___x_1169__boxed_2259_, v___x_2256_, v_inst_2257_, v_a_2258_);
lean_dec(v___x_2256_);
lean_dec_ref(v_cs_2254_);
lean_dec(v_n_2252_);
return v_res_2260_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2(lean_object* v_00_u03b1_2261_, lean_object* v_as_2262_, size_t v_sz_2263_, size_t v_i_2264_, lean_object* v_b_2265_){
_start:
{
lean_object* v___x_2266_; 
v___x_2266_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___redArg(v_as_2262_, v_sz_2263_, v_i_2264_, v_b_2265_);
return v___x_2266_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2___boxed(lean_object* v_00_u03b1_2267_, lean_object* v_as_2268_, lean_object* v_sz_2269_, lean_object* v_i_2270_, lean_object* v_b_2271_){
_start:
{
size_t v_sz_boxed_2272_; size_t v_i_boxed_2273_; lean_object* v_res_2274_; 
v_sz_boxed_2272_ = lean_unbox_usize(v_sz_2269_);
lean_dec(v_sz_2269_);
v_i_boxed_2273_ = lean_unbox_usize(v_i_2270_);
lean_dec(v_i_2270_);
v_res_2274_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__2(v_00_u03b1_2267_, v_as_2268_, v_sz_boxed_2272_, v_i_boxed_2273_, v_b_2271_);
lean_dec_ref(v_as_2268_);
return v_res_2274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2(lean_object* v___x_2275_, lean_object* v_n_2276_, lean_object* v_00_u03b1_2277_, lean_object* v_cs_2278_, uint64_t v___x_2279_, lean_object* v_inst_2280_, lean_object* v_a_2281_){
_start:
{
lean_object* v___x_2282_; 
v___x_2282_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___redArg(v___x_2275_, v_n_2276_, v_cs_2278_, v___x_2279_, v_a_2281_);
return v___x_2282_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2___boxed(lean_object* v___x_2283_, lean_object* v_n_2284_, lean_object* v_00_u03b1_2285_, lean_object* v_cs_2286_, lean_object* v___x_2287_, lean_object* v_inst_2288_, lean_object* v_a_2289_){
_start:
{
uint64_t v___x_1183__boxed_2290_; lean_object* v_res_2291_; 
v___x_1183__boxed_2290_ = lean_unbox_uint64(v___x_2287_);
lean_dec_ref(v___x_2287_);
v_res_2291_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0_spec__1_spec__2(v___x_2283_, v_n_2284_, v_00_u03b1_2285_, v_cs_2286_, v___x_1183__boxed_2290_, v_inst_2288_, v_a_2289_);
lean_dec_ref(v_cs_2286_);
lean_dec(v_n_2284_);
lean_dec(v___x_2283_);
return v_res_2291_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___redArg(lean_object* v_t_2292_){
_start:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; 
v___x_2294_ = lean_imported_consts_cache_new();
v___x_2295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2294_);
v___x_2296_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2296_, 0, v___x_2295_);
lean_ctor_set(v___x_2296_, 1, v_t_2292_);
return v___x_2296_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___redArg___boxed(lean_object* v_t_2297_, lean_object* v_a_2298_){
_start:
{
lean_object* v_res_2299_; 
v_res_2299_ = l_Lean_ImportedConsts_withCache___redArg(v_t_2297_);
return v_res_2299_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache(lean_object* v_00_u03b1_2300_, lean_object* v_t_2301_){
_start:
{
lean_object* v___x_2303_; 
v___x_2303_ = l_Lean_ImportedConsts_withCache___redArg(v_t_2301_);
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___boxed(lean_object* v_00_u03b1_2304_, lean_object* v_t_2305_, lean_object* v_a_2306_){
_start:
{
lean_object* v_res_2307_; 
v_res_2307_ = l_Lean_ImportedConsts_withCache(v_00_u03b1_2304_, v_t_2305_);
return v_res_2307_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_dropCache___boxed(lean_object* v_00_u03b1_2311_, lean_object* v_t_2312_, lean_object* v_a_00___x40___internal___hyg_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = lean_imported_consts_drop_cache(v_t_2312_);
lean_dec_ref(v_t_2312_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(lean_object* v_index_2315_, lean_object* v_cs_2316_, lean_object* v_k_2317_, uint8_t v_fp_2318_, lean_object* v_fpOff_2319_, lean_object* v_j_2320_, lean_object* v_hi_2321_){
_start:
{
uint8_t v___y_2327_; uint8_t v___x_2329_; 
v___x_2329_ = lean_nat_dec_lt(v_j_2320_, v_hi_2321_);
if (v___x_2329_ == 0)
{
lean_object* v___x_2330_; 
lean_dec(v_j_2320_);
v___x_2330_ = lean_box(0);
return v___x_2330_;
}
else
{
lean_object* v___x_2331_; uint8_t v___x_2332_; uint8_t v___x_2333_; 
v___x_2331_ = lean_nat_add(v_fpOff_2319_, v_j_2320_);
v___x_2332_ = lean_byte_array_get(v_index_2315_, v___x_2331_);
lean_dec(v___x_2331_);
v___x_2333_ = lean_uint8_dec_eq(v___x_2332_, v_fp_2318_);
if (v___x_2333_ == 0)
{
goto v___jp_2322_;
}
else
{
lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; 
v___x_2334_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
v___x_2335_ = lean_array_get_borrowed(v___x_2334_, v_cs_2316_, v_j_2320_);
v___x_2336_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v___x_2335_);
switch(lean_obj_tag(v___x_2336_))
{
case 0:
{
if (lean_obj_tag(v_k_2317_) == 0)
{
lean_object* v___x_2337_; 
v___x_2337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2337_, 0, v_j_2320_);
return v___x_2337_;
}
else
{
goto v___jp_2322_;
}
}
case 1:
{
if (lean_obj_tag(v_k_2317_) == 1)
{
lean_object* v_str_2338_; lean_object* v_str_2339_; uint8_t v___x_2340_; 
v_str_2338_ = lean_ctor_get(v___x_2336_, 1);
lean_inc_ref(v_str_2338_);
lean_dec_ref_known(v___x_2336_, 2);
v_str_2339_ = lean_ctor_get(v_k_2317_, 1);
v___x_2340_ = lean_string_dec_eq(v_str_2338_, v_str_2339_);
lean_dec_ref(v_str_2338_);
v___y_2327_ = v___x_2340_;
goto v___jp_2326_;
}
else
{
lean_dec_ref_known(v___x_2336_, 2);
goto v___jp_2322_;
}
}
default: 
{
if (lean_obj_tag(v_k_2317_) == 2)
{
lean_object* v_i_2341_; lean_object* v_i_2342_; uint8_t v___x_2343_; 
v_i_2341_ = lean_ctor_get(v___x_2336_, 1);
lean_inc(v_i_2341_);
lean_dec_ref_known(v___x_2336_, 2);
v_i_2342_ = lean_ctor_get(v_k_2317_, 1);
v___x_2343_ = lean_nat_dec_eq(v_i_2341_, v_i_2342_);
lean_dec(v_i_2341_);
v___y_2327_ = v___x_2343_;
goto v___jp_2326_;
}
else
{
lean_dec_ref_known(v___x_2336_, 2);
goto v___jp_2322_;
}
}
}
}
}
v___jp_2322_:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2323_ = lean_unsigned_to_nat(1u);
v___x_2324_ = lean_nat_add(v_j_2320_, v___x_2323_);
lean_dec(v_j_2320_);
v_j_2320_ = v___x_2324_;
goto _start;
}
v___jp_2326_:
{
if (v___y_2327_ == 0)
{
goto v___jp_2322_;
}
else
{
lean_object* v___x_2328_; 
v___x_2328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2328_, 0, v_j_2320_);
return v___x_2328_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg___boxed(lean_object* v_index_2344_, lean_object* v_cs_2345_, lean_object* v_k_2346_, lean_object* v_fp_2347_, lean_object* v_fpOff_2348_, lean_object* v_j_2349_, lean_object* v_hi_2350_){
_start:
{
uint8_t v_fp_boxed_2351_; lean_object* v_res_2352_; 
v_fp_boxed_2351_ = lean_unbox(v_fp_2347_);
v_res_2352_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(v_index_2344_, v_cs_2345_, v_k_2346_, v_fp_boxed_2351_, v_fpOff_2348_, v_j_2349_, v_hi_2350_);
lean_dec(v_hi_2350_);
lean_dec(v_fpOff_2348_);
lean_dec(v_k_2346_);
lean_dec_ref(v_cs_2345_);
lean_dec_ref(v_index_2344_);
return v_res_2352_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(lean_object* v_index_2353_, lean_object* v_cs_2354_, lean_object* v_k_2355_){
_start:
{
lean_object* v___x_2356_; lean_object* v___x_2357_; uint64_t v___y_2359_; uint8_t v___x_2463_; 
v___x_2356_ = lean_byte_array_size(v_index_2353_);
v___x_2357_ = lean_unsigned_to_nat(0u);
v___x_2463_ = lean_nat_dec_eq(v___x_2356_, v___x_2357_);
if (v___x_2463_ == 0)
{
if (lean_obj_tag(v_k_2355_) == 0)
{
uint64_t v___x_2464_; 
v___x_2464_ = 1723ULL;
v___y_2359_ = v___x_2464_;
goto v___jp_2358_;
}
else
{
uint64_t v_hash_2465_; 
v_hash_2465_ = lean_ctor_get_uint64(v_k_2355_, sizeof(void*)*2);
v___y_2359_ = v_hash_2465_;
goto v___jp_2358_;
}
}
else
{
lean_object* v___x_2466_; 
v___x_2466_ = lean_box(0);
return v___x_2466_;
}
v___jp_2358_:
{
uint8_t v_header_2360_; uint8_t v___x_2361_; uint8_t v___x_2362_; uint64_t v_bits_2363_; uint64_t v___x_2364_; uint64_t v___x_2365_; uint64_t v___x_2366_; lean_object* v_slot_2367_; uint8_t v___x_2368_; uint8_t v___x_2369_; uint8_t v___x_2370_; uint8_t v___x_2371_; 
v_header_2360_ = lean_byte_array_get(v_index_2353_, v___x_2357_);
v___x_2361_ = 31;
v___x_2362_ = lean_uint8_land(v_header_2360_, v___x_2361_);
v_bits_2363_ = lean_uint8_to_uint64(v___x_2362_);
v___x_2364_ = 64ULL;
v___x_2365_ = lean_uint64_sub(v___x_2364_, v_bits_2363_);
v___x_2366_ = lean_uint64_shift_right(v___y_2359_, v___x_2365_);
v_slot_2367_ = lean_uint64_to_nat(v___x_2366_);
v___x_2368_ = 128;
v___x_2369_ = lean_uint8_land(v_header_2360_, v___x_2368_);
v___x_2370_ = 0;
v___x_2371_ = lean_uint8_dec_eq(v___x_2369_, v___x_2370_);
if (v___x_2371_ == 0)
{
lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; uint8_t v___x_2376_; uint32_t v___x_2377_; lean_object* v___x_2378_; uint8_t v___x_2379_; uint32_t v___x_2380_; uint32_t v___x_2381_; uint32_t v___x_2382_; uint32_t v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; uint8_t v___x_2386_; uint32_t v___x_2387_; uint32_t v___x_2388_; uint32_t v___x_2389_; uint32_t v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; uint8_t v___x_2393_; uint32_t v___x_2394_; uint32_t v___x_2395_; uint32_t v___x_2396_; uint32_t v___x_2397_; lean_object* v_lo_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; uint8_t v___x_2401_; uint32_t v___x_2402_; lean_object* v___x_2403_; uint8_t v___x_2404_; uint32_t v___x_2405_; uint32_t v___x_2406_; uint32_t v___x_2407_; lean_object* v___x_2408_; uint8_t v___x_2409_; uint32_t v___x_2410_; uint32_t v___x_2411_; uint32_t v___x_2412_; lean_object* v___x_2413_; uint8_t v___x_2414_; uint32_t v___x_2415_; uint32_t v___x_2416_; uint32_t v___x_2417_; lean_object* v_hi_2418_; uint64_t v___x_2419_; uint64_t v___x_2420_; uint64_t v___x_2421_; uint64_t v___x_2422_; uint64_t v___x_2423_; uint64_t v___x_2424_; lean_object* v_fpOff_2425_; uint64_t v___x_2426_; uint64_t v___x_2427_; uint8_t v___x_2428_; lean_object* v___x_2429_; 
v___x_2372_ = lean_unsigned_to_nat(1u);
v___x_2373_ = lean_unsigned_to_nat(4u);
v___x_2374_ = lean_nat_mul(v___x_2373_, v_slot_2367_);
lean_dec(v_slot_2367_);
v___x_2375_ = lean_nat_add(v___x_2372_, v___x_2374_);
v___x_2376_ = lean_byte_array_get(v_index_2353_, v___x_2375_);
v___x_2377_ = lean_uint8_to_uint32(v___x_2376_);
v___x_2378_ = lean_nat_add(v___x_2375_, v___x_2372_);
v___x_2379_ = lean_byte_array_get(v_index_2353_, v___x_2378_);
lean_dec(v___x_2378_);
v___x_2380_ = lean_uint8_to_uint32(v___x_2379_);
v___x_2381_ = 8;
v___x_2382_ = lean_uint32_shift_left(v___x_2380_, v___x_2381_);
v___x_2383_ = lean_uint32_lor(v___x_2377_, v___x_2382_);
v___x_2384_ = lean_unsigned_to_nat(2u);
v___x_2385_ = lean_nat_add(v___x_2375_, v___x_2384_);
v___x_2386_ = lean_byte_array_get(v_index_2353_, v___x_2385_);
lean_dec(v___x_2385_);
v___x_2387_ = lean_uint8_to_uint32(v___x_2386_);
v___x_2388_ = 16;
v___x_2389_ = lean_uint32_shift_left(v___x_2387_, v___x_2388_);
v___x_2390_ = lean_uint32_lor(v___x_2383_, v___x_2389_);
v___x_2391_ = lean_unsigned_to_nat(3u);
v___x_2392_ = lean_nat_add(v___x_2375_, v___x_2391_);
lean_dec(v___x_2375_);
v___x_2393_ = lean_byte_array_get(v_index_2353_, v___x_2392_);
lean_dec(v___x_2392_);
v___x_2394_ = lean_uint8_to_uint32(v___x_2393_);
v___x_2395_ = 24;
v___x_2396_ = lean_uint32_shift_left(v___x_2394_, v___x_2395_);
v___x_2397_ = lean_uint32_lor(v___x_2390_, v___x_2396_);
v_lo_2398_ = lean_uint32_to_nat(v___x_2397_);
v___x_2399_ = lean_unsigned_to_nat(5u);
v___x_2400_ = lean_nat_add(v___x_2399_, v___x_2374_);
lean_dec(v___x_2374_);
v___x_2401_ = lean_byte_array_get(v_index_2353_, v___x_2400_);
v___x_2402_ = lean_uint8_to_uint32(v___x_2401_);
v___x_2403_ = lean_nat_add(v___x_2400_, v___x_2372_);
v___x_2404_ = lean_byte_array_get(v_index_2353_, v___x_2403_);
lean_dec(v___x_2403_);
v___x_2405_ = lean_uint8_to_uint32(v___x_2404_);
v___x_2406_ = lean_uint32_shift_left(v___x_2405_, v___x_2381_);
v___x_2407_ = lean_uint32_lor(v___x_2402_, v___x_2406_);
v___x_2408_ = lean_nat_add(v___x_2400_, v___x_2384_);
v___x_2409_ = lean_byte_array_get(v_index_2353_, v___x_2408_);
lean_dec(v___x_2408_);
v___x_2410_ = lean_uint8_to_uint32(v___x_2409_);
v___x_2411_ = lean_uint32_shift_left(v___x_2410_, v___x_2388_);
v___x_2412_ = lean_uint32_lor(v___x_2407_, v___x_2411_);
v___x_2413_ = lean_nat_add(v___x_2400_, v___x_2391_);
lean_dec(v___x_2400_);
v___x_2414_ = lean_byte_array_get(v_index_2353_, v___x_2413_);
lean_dec(v___x_2413_);
v___x_2415_ = lean_uint8_to_uint32(v___x_2414_);
v___x_2416_ = lean_uint32_shift_left(v___x_2415_, v___x_2395_);
v___x_2417_ = lean_uint32_lor(v___x_2412_, v___x_2416_);
v_hi_2418_ = lean_uint32_to_nat(v___x_2417_);
v___x_2419_ = 5ULL;
v___x_2420_ = 1ULL;
v___x_2421_ = lean_uint64_shift_left(v___x_2420_, v_bits_2363_);
v___x_2422_ = 2ULL;
v___x_2423_ = lean_uint64_shift_left(v___x_2421_, v___x_2422_);
v___x_2424_ = lean_uint64_add(v___x_2419_, v___x_2423_);
v_fpOff_2425_ = lean_uint64_to_nat(v___x_2424_);
v___x_2426_ = 32ULL;
v___x_2427_ = lean_uint64_shift_right(v___y_2359_, v___x_2426_);
v___x_2428_ = lean_uint64_to_uint8(v___x_2427_);
v___x_2429_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(v_index_2353_, v_cs_2354_, v_k_2355_, v___x_2428_, v_fpOff_2425_, v_lo_2398_, v_hi_2418_);
lean_dec(v_hi_2418_);
lean_dec(v_fpOff_2425_);
return v___x_2429_;
}
else
{
lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; uint8_t v___x_2434_; uint32_t v___x_2435_; lean_object* v___x_2436_; uint8_t v___x_2437_; uint32_t v___x_2438_; uint32_t v___x_2439_; uint32_t v___x_2440_; uint32_t v___x_2441_; lean_object* v_lo_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; uint8_t v___x_2445_; uint32_t v___x_2446_; lean_object* v___x_2447_; uint8_t v___x_2448_; uint32_t v___x_2449_; uint32_t v___x_2450_; uint32_t v___x_2451_; lean_object* v_hi_2452_; uint64_t v___x_2453_; uint64_t v___x_2454_; uint64_t v___x_2455_; uint64_t v___x_2456_; uint64_t v___x_2457_; lean_object* v_fpOff_2458_; uint64_t v___x_2459_; uint64_t v___x_2460_; uint8_t v___x_2461_; lean_object* v___x_2462_; 
v___x_2430_ = lean_unsigned_to_nat(1u);
v___x_2431_ = lean_unsigned_to_nat(2u);
v___x_2432_ = lean_nat_mul(v___x_2431_, v_slot_2367_);
lean_dec(v_slot_2367_);
v___x_2433_ = lean_nat_add(v___x_2430_, v___x_2432_);
v___x_2434_ = lean_byte_array_get(v_index_2353_, v___x_2433_);
v___x_2435_ = lean_uint8_to_uint32(v___x_2434_);
v___x_2436_ = lean_nat_add(v___x_2433_, v___x_2430_);
lean_dec(v___x_2433_);
v___x_2437_ = lean_byte_array_get(v_index_2353_, v___x_2436_);
lean_dec(v___x_2436_);
v___x_2438_ = lean_uint8_to_uint32(v___x_2437_);
v___x_2439_ = 8;
v___x_2440_ = lean_uint32_shift_left(v___x_2438_, v___x_2439_);
v___x_2441_ = lean_uint32_lor(v___x_2435_, v___x_2440_);
v_lo_2442_ = lean_uint32_to_nat(v___x_2441_);
v___x_2443_ = lean_unsigned_to_nat(3u);
v___x_2444_ = lean_nat_add(v___x_2443_, v___x_2432_);
lean_dec(v___x_2432_);
v___x_2445_ = lean_byte_array_get(v_index_2353_, v___x_2444_);
v___x_2446_ = lean_uint8_to_uint32(v___x_2445_);
v___x_2447_ = lean_nat_add(v___x_2444_, v___x_2430_);
lean_dec(v___x_2444_);
v___x_2448_ = lean_byte_array_get(v_index_2353_, v___x_2447_);
lean_dec(v___x_2447_);
v___x_2449_ = lean_uint8_to_uint32(v___x_2448_);
v___x_2450_ = lean_uint32_shift_left(v___x_2449_, v___x_2439_);
v___x_2451_ = lean_uint32_lor(v___x_2446_, v___x_2450_);
v_hi_2452_ = lean_uint32_to_nat(v___x_2451_);
v___x_2453_ = 3ULL;
v___x_2454_ = 1ULL;
v___x_2455_ = lean_uint64_shift_left(v___x_2454_, v_bits_2363_);
v___x_2456_ = lean_uint64_shift_left(v___x_2455_, v___x_2454_);
v___x_2457_ = lean_uint64_add(v___x_2453_, v___x_2456_);
v_fpOff_2458_ = lean_uint64_to_nat(v___x_2457_);
v___x_2459_ = 32ULL;
v___x_2460_ = lean_uint64_shift_right(v___y_2359_, v___x_2459_);
v___x_2461_ = lean_uint64_to_uint8(v___x_2460_);
v___x_2462_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(v_index_2353_, v_cs_2354_, v_k_2355_, v___x_2461_, v_fpOff_2458_, v_lo_2442_, v_hi_2452_);
lean_dec(v_hi_2452_);
lean_dec(v_fpOff_2458_);
return v___x_2462_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg___boxed(lean_object* v_index_2467_, lean_object* v_cs_2468_, lean_object* v_k_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_index_2467_, v_cs_2468_, v_k_2469_);
lean_dec(v_k_2469_);
lean_dec_ref(v_cs_2468_);
lean_dec_ref(v_index_2467_);
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(lean_object* v_x_2471_, lean_object* v_x_2472_, lean_object* v_x_2473_){
_start:
{
lean_object* v___x_2474_; lean_object* v___x_2475_; 
v___x_2474_ = lean_box(0);
v___x_2475_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
switch(lean_obj_tag(v_x_2471_))
{
case 0:
{
lean_object* v_tree_2476_; lean_object* v___x_2477_; 
v_tree_2476_ = lean_ctor_get(v_x_2471_, 1);
lean_inc_ref(v_tree_2476_);
lean_dec_ref_known(v_x_2471_, 2);
v___x_2477_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_2476_, v_x_2472_, v_x_2473_);
lean_dec_ref(v_tree_2476_);
return v___x_2477_;
}
case 1:
{
lean_object* v_entry_x3f_2478_; lean_object* v_children_2479_; lean_object* v_childIndex_2480_; lean_object* v___x_2481_; uint8_t v___x_2482_; 
v_entry_x3f_2478_ = lean_ctor_get(v_x_2471_, 1);
lean_inc(v_entry_x3f_2478_);
v_children_2479_ = lean_ctor_get(v_x_2471_, 2);
lean_inc_ref(v_children_2479_);
v_childIndex_2480_ = lean_ctor_get(v_x_2471_, 3);
lean_inc_ref(v_childIndex_2480_);
lean_dec_ref_known(v_x_2471_, 4);
v___x_2481_ = lean_unsigned_to_nat(0u);
v___x_2482_ = lean_nat_dec_eq(v_x_2473_, v___x_2481_);
if (v___x_2482_ == 0)
{
lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; 
lean_dec(v_entry_x3f_2478_);
v___x_2483_ = lean_unsigned_to_nat(1u);
v___x_2484_ = lean_nat_sub(v_x_2473_, v___x_2483_);
lean_dec(v_x_2473_);
v___x_2485_ = lean_array_get_borrowed(v___x_2474_, v_x_2472_, v___x_2484_);
v___x_2486_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_childIndex_2480_, v_children_2479_, v___x_2485_);
lean_dec_ref(v_childIndex_2480_);
if (lean_obj_tag(v___x_2486_) == 0)
{
lean_object* v___x_2487_; 
lean_dec(v___x_2484_);
lean_dec_ref(v_children_2479_);
v___x_2487_ = lean_box(0);
return v___x_2487_;
}
else
{
lean_object* v_val_2488_; lean_object* v___x_2489_; 
v_val_2488_ = lean_ctor_get(v___x_2486_, 0);
lean_inc(v_val_2488_);
lean_dec_ref_known(v___x_2486_, 1);
v___x_2489_ = lean_array_get(v___x_2475_, v_children_2479_, v_val_2488_);
lean_dec(v_val_2488_);
lean_dec_ref(v_children_2479_);
v_x_2471_ = v___x_2489_;
v_x_2473_ = v___x_2484_;
goto _start;
}
}
else
{
lean_dec_ref(v_childIndex_2480_);
lean_dec_ref(v_children_2479_);
lean_dec(v_x_2473_);
if (lean_obj_tag(v_entry_x3f_2478_) == 0)
{
lean_object* v___x_2491_; 
v___x_2491_ = lean_box(0);
return v___x_2491_;
}
else
{
lean_object* v_val_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2500_; 
v_val_2492_ = lean_ctor_get(v_entry_x3f_2478_, 0);
v_isSharedCheck_2500_ = !lean_is_exclusive(v_entry_x3f_2478_);
if (v_isSharedCheck_2500_ == 0)
{
v___x_2494_ = v_entry_x3f_2478_;
v_isShared_2495_ = v_isSharedCheck_2500_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_val_2492_);
lean_dec(v_entry_x3f_2478_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2500_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v_fst_2496_; lean_object* v___x_2498_; 
v_fst_2496_ = lean_ctor_get(v_val_2492_, 0);
lean_inc(v_fst_2496_);
lean_dec(v_val_2492_);
if (v_isShared_2495_ == 0)
{
lean_ctor_set(v___x_2494_, 0, v_fst_2496_);
v___x_2498_ = v___x_2494_;
goto v_reusejp_2497_;
}
else
{
lean_object* v_reuseFailAlloc_2499_; 
v_reuseFailAlloc_2499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2499_, 0, v_fst_2496_);
v___x_2498_ = v_reuseFailAlloc_2499_;
goto v_reusejp_2497_;
}
v_reusejp_2497_:
{
return v___x_2498_;
}
}
}
}
}
case 2:
{
lean_object* v_entry_2501_; lean_object* v_expanded_2502_; lean_object* v___x_2503_; uint8_t v___x_2504_; 
v_entry_2501_ = lean_ctor_get(v_x_2471_, 1);
lean_inc_ref(v_entry_2501_);
v_expanded_2502_ = lean_ctor_get(v_x_2471_, 2);
lean_inc_ref(v_expanded_2502_);
lean_dec_ref_known(v_x_2471_, 3);
v___x_2503_ = lean_unsigned_to_nat(0u);
v___x_2504_ = lean_nat_dec_eq(v_x_2473_, v___x_2503_);
if (v___x_2504_ == 0)
{
lean_object* v___x_2505_; lean_object* v_fst_2506_; lean_object* v_snd_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
lean_dec_ref(v_entry_2501_);
v___x_2505_ = lean_imported_consts_force_shared(v_expanded_2502_);
lean_dec_ref(v_expanded_2502_);
v_fst_2506_ = lean_ctor_get(v___x_2505_, 0);
lean_inc(v_fst_2506_);
v_snd_2507_ = lean_ctor_get(v___x_2505_, 1);
lean_inc(v_snd_2507_);
lean_dec(v___x_2505_);
v___x_2508_ = lean_unsigned_to_nat(1u);
v___x_2509_ = lean_nat_sub(v_x_2473_, v___x_2508_);
lean_dec(v_x_2473_);
v___x_2510_ = lean_array_get_borrowed(v___x_2474_, v_x_2472_, v___x_2509_);
v___x_2511_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_snd_2507_, v_fst_2506_, v___x_2510_);
lean_dec(v_snd_2507_);
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v___x_2512_; 
lean_dec(v___x_2509_);
lean_dec(v_fst_2506_);
v___x_2512_ = lean_box(0);
return v___x_2512_;
}
else
{
lean_object* v_val_2513_; lean_object* v___x_2514_; 
v_val_2513_ = lean_ctor_get(v___x_2511_, 0);
lean_inc(v_val_2513_);
lean_dec_ref_known(v___x_2511_, 1);
v___x_2514_ = lean_array_get(v___x_2475_, v_fst_2506_, v_val_2513_);
lean_dec(v_val_2513_);
lean_dec(v_fst_2506_);
v_x_2471_ = v___x_2514_;
v_x_2473_ = v___x_2509_;
goto _start;
}
}
else
{
lean_object* v___x_2516_; 
lean_dec_ref(v_expanded_2502_);
lean_dec(v_x_2473_);
v___x_2516_ = lean_imported_consts_force_shared(v_entry_2501_);
lean_dec_ref(v_entry_2501_);
if (lean_obj_tag(v___x_2516_) == 0)
{
lean_object* v___x_2517_; 
v___x_2517_ = lean_box(0);
return v___x_2517_;
}
else
{
lean_object* v_val_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2526_; 
v_val_2518_ = lean_ctor_get(v___x_2516_, 0);
v_isSharedCheck_2526_ = !lean_is_exclusive(v___x_2516_);
if (v_isSharedCheck_2526_ == 0)
{
v___x_2520_ = v___x_2516_;
v_isShared_2521_ = v_isSharedCheck_2526_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_val_2518_);
lean_dec(v___x_2516_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2526_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v_fst_2522_; lean_object* v___x_2524_; 
v_fst_2522_ = lean_ctor_get(v_val_2518_, 0);
lean_inc(v_fst_2522_);
lean_dec(v_val_2518_);
if (v_isShared_2521_ == 0)
{
lean_ctor_set(v___x_2520_, 0, v_fst_2522_);
v___x_2524_ = v___x_2520_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2525_; 
v_reuseFailAlloc_2525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2525_, 0, v_fst_2522_);
v___x_2524_ = v_reuseFailAlloc_2525_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
return v___x_2524_;
}
}
}
}
}
default: 
{
lean_object* v_tree_2527_; 
v_tree_2527_ = lean_ctor_get(v_x_2471_, 1);
lean_inc_ref(v_tree_2527_);
lean_dec_ref_known(v_x_2471_, 2);
v_x_2471_ = v_tree_2527_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg___boxed(lean_object* v_x_2529_, lean_object* v_x_2530_, lean_object* v_x_2531_){
_start:
{
lean_object* v_res_2532_; 
v_res_2532_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(v_x_2529_, v_x_2530_, v_x_2531_);
lean_dec_ref(v_x_2530_);
return v_res_2532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux(lean_object* v_00_u03b1_2533_, lean_object* v_x_2534_, lean_object* v_x_2535_, lean_object* v_x_2536_){
_start:
{
lean_object* v___x_2537_; 
v___x_2537_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(v_x_2534_, v_x_2535_, v_x_2536_);
return v___x_2537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___boxed(lean_object* v_00_u03b1_2538_, lean_object* v_x_2539_, lean_object* v_x_2540_, lean_object* v_x_2541_){
_start:
{
lean_object* v_res_2542_; 
v_res_2542_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux(v_00_u03b1_2538_, v_x_2539_, v_x_2540_, v_x_2541_);
lean_dec_ref(v_x_2540_);
return v_res_2542_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0(lean_object* v_00_u03b1_2543_, lean_object* v_index_2544_, lean_object* v_cs_2545_, lean_object* v_k_2546_){
_start:
{
lean_object* v___x_2547_; 
v___x_2547_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_index_2544_, v_cs_2545_, v_k_2546_);
return v___x_2547_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___boxed(lean_object* v_00_u03b1_2548_, lean_object* v_index_2549_, lean_object* v_cs_2550_, lean_object* v_k_2551_){
_start:
{
lean_object* v_res_2552_; 
v_res_2552_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0(v_00_u03b1_2548_, v_index_2549_, v_cs_2550_, v_k_2551_);
lean_dec(v_k_2551_);
lean_dec_ref(v_cs_2550_);
lean_dec_ref(v_index_2549_);
return v_res_2552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0(lean_object* v_00_u03b1_2553_, lean_object* v_index_2554_, lean_object* v_cs_2555_, lean_object* v_k_2556_, uint8_t v_fp_2557_, lean_object* v_fpOff_2558_, lean_object* v_j_2559_, lean_object* v_hi_2560_){
_start:
{
lean_object* v___x_2561_; 
v___x_2561_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(v_index_2554_, v_cs_2555_, v_k_2556_, v_fp_2557_, v_fpOff_2558_, v_j_2559_, v_hi_2560_);
return v___x_2561_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2562_, lean_object* v_index_2563_, lean_object* v_cs_2564_, lean_object* v_k_2565_, lean_object* v_fp_2566_, lean_object* v_fpOff_2567_, lean_object* v_j_2568_, lean_object* v_hi_2569_){
_start:
{
uint8_t v_fp_boxed_2570_; lean_object* v_res_2571_; 
v_fp_boxed_2570_ = lean_unbox(v_fp_2566_);
v_res_2571_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0(v_00_u03b1_2562_, v_index_2563_, v_cs_2564_, v_k_2565_, v_fp_boxed_2570_, v_fpOff_2567_, v_j_2568_, v_hi_2569_);
lean_dec(v_hi_2569_);
lean_dec(v_fpOff_2567_);
lean_dec(v_k_2565_);
lean_dec_ref(v_cs_2564_);
lean_dec_ref(v_index_2563_);
return v_res_2571_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(lean_object* v_x_2572_, lean_object* v_x_2573_, lean_object* v_x_2574_){
_start:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2575_ = lean_box(0);
v___x_2576_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
switch(lean_obj_tag(v_x_2572_))
{
case 0:
{
lean_object* v_modIdx_2577_; lean_object* v_tree_2578_; lean_object* v___x_2579_; 
v_modIdx_2577_ = lean_ctor_get(v_x_2572_, 0);
lean_inc(v_modIdx_2577_);
v_tree_2578_ = lean_ctor_get(v_x_2572_, 1);
lean_inc_ref(v_tree_2578_);
lean_dec_ref_known(v_x_2572_, 2);
v___x_2579_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_2578_, v_x_2573_, v_x_2574_);
lean_dec_ref(v_tree_2578_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_object* v___x_2580_; 
lean_dec(v_modIdx_2577_);
v___x_2580_ = lean_box(0);
return v___x_2580_;
}
else
{
lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2587_; 
v_isSharedCheck_2587_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2587_ == 0)
{
lean_object* v_unused_2588_; 
v_unused_2588_ = lean_ctor_get(v___x_2579_, 0);
lean_dec(v_unused_2588_);
v___x_2582_ = v___x_2579_;
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
else
{
lean_dec(v___x_2579_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2585_; 
if (v_isShared_2583_ == 0)
{
lean_ctor_set(v___x_2582_, 0, v_modIdx_2577_);
v___x_2585_ = v___x_2582_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v_modIdx_2577_);
v___x_2585_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
return v___x_2585_;
}
}
}
}
case 1:
{
lean_object* v_entry_x3f_2589_; lean_object* v_children_2590_; lean_object* v_childIndex_2591_; lean_object* v___x_2592_; uint8_t v___x_2593_; 
v_entry_x3f_2589_ = lean_ctor_get(v_x_2572_, 1);
lean_inc(v_entry_x3f_2589_);
v_children_2590_ = lean_ctor_get(v_x_2572_, 2);
lean_inc_ref(v_children_2590_);
v_childIndex_2591_ = lean_ctor_get(v_x_2572_, 3);
lean_inc_ref(v_childIndex_2591_);
lean_dec_ref_known(v_x_2572_, 4);
v___x_2592_ = lean_unsigned_to_nat(0u);
v___x_2593_ = lean_nat_dec_eq(v_x_2574_, v___x_2592_);
if (v___x_2593_ == 0)
{
lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
lean_dec(v_entry_x3f_2589_);
v___x_2594_ = lean_unsigned_to_nat(1u);
v___x_2595_ = lean_nat_sub(v_x_2574_, v___x_2594_);
lean_dec(v_x_2574_);
v___x_2596_ = lean_array_get_borrowed(v___x_2575_, v_x_2573_, v___x_2595_);
v___x_2597_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_childIndex_2591_, v_children_2590_, v___x_2596_);
lean_dec_ref(v_childIndex_2591_);
if (lean_obj_tag(v___x_2597_) == 0)
{
lean_dec(v___x_2595_);
lean_dec_ref(v_children_2590_);
return v___x_2597_;
}
else
{
lean_object* v_val_2598_; lean_object* v___x_2599_; 
v_val_2598_ = lean_ctor_get(v___x_2597_, 0);
lean_inc(v_val_2598_);
lean_dec_ref_known(v___x_2597_, 1);
v___x_2599_ = lean_array_get(v___x_2576_, v_children_2590_, v_val_2598_);
lean_dec(v_val_2598_);
lean_dec_ref(v_children_2590_);
v_x_2572_ = v___x_2599_;
v_x_2574_ = v___x_2595_;
goto _start;
}
}
else
{
lean_dec_ref(v_childIndex_2591_);
lean_dec_ref(v_children_2590_);
lean_dec(v_x_2574_);
if (lean_obj_tag(v_entry_x3f_2589_) == 0)
{
lean_object* v___x_2601_; 
v___x_2601_ = lean_box(0);
return v___x_2601_;
}
else
{
lean_object* v_val_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2610_; 
v_val_2602_ = lean_ctor_get(v_entry_x3f_2589_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v_entry_x3f_2589_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2604_ = v_entry_x3f_2589_;
v_isShared_2605_ = v_isSharedCheck_2610_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_val_2602_);
lean_dec(v_entry_x3f_2589_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2610_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
lean_object* v_snd_2606_; lean_object* v___x_2608_; 
v_snd_2606_ = lean_ctor_get(v_val_2602_, 1);
lean_inc(v_snd_2606_);
lean_dec(v_val_2602_);
if (v_isShared_2605_ == 0)
{
lean_ctor_set(v___x_2604_, 0, v_snd_2606_);
v___x_2608_ = v___x_2604_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_snd_2606_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
}
}
}
case 2:
{
lean_object* v_entry_2611_; lean_object* v_expanded_2612_; lean_object* v___x_2613_; uint8_t v___x_2614_; 
v_entry_2611_ = lean_ctor_get(v_x_2572_, 1);
lean_inc_ref(v_entry_2611_);
v_expanded_2612_ = lean_ctor_get(v_x_2572_, 2);
lean_inc_ref(v_expanded_2612_);
lean_dec_ref_known(v_x_2572_, 3);
v___x_2613_ = lean_unsigned_to_nat(0u);
v___x_2614_ = lean_nat_dec_eq(v_x_2574_, v___x_2613_);
if (v___x_2614_ == 0)
{
lean_object* v___x_2615_; lean_object* v_fst_2616_; lean_object* v_snd_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; 
lean_dec_ref(v_entry_2611_);
v___x_2615_ = lean_imported_consts_force_shared(v_expanded_2612_);
lean_dec_ref(v_expanded_2612_);
v_fst_2616_ = lean_ctor_get(v___x_2615_, 0);
lean_inc(v_fst_2616_);
v_snd_2617_ = lean_ctor_get(v___x_2615_, 1);
lean_inc(v_snd_2617_);
lean_dec(v___x_2615_);
v___x_2618_ = lean_unsigned_to_nat(1u);
v___x_2619_ = lean_nat_sub(v_x_2574_, v___x_2618_);
lean_dec(v_x_2574_);
v___x_2620_ = lean_array_get_borrowed(v___x_2575_, v_x_2573_, v___x_2619_);
v___x_2621_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_snd_2617_, v_fst_2616_, v___x_2620_);
lean_dec(v_snd_2617_);
if (lean_obj_tag(v___x_2621_) == 0)
{
lean_dec(v___x_2619_);
lean_dec(v_fst_2616_);
return v___x_2621_;
}
else
{
lean_object* v_val_2622_; lean_object* v___x_2623_; 
v_val_2622_ = lean_ctor_get(v___x_2621_, 0);
lean_inc(v_val_2622_);
lean_dec_ref_known(v___x_2621_, 1);
v___x_2623_ = lean_array_get(v___x_2576_, v_fst_2616_, v_val_2622_);
lean_dec(v_val_2622_);
lean_dec(v_fst_2616_);
v_x_2572_ = v___x_2623_;
v_x_2574_ = v___x_2619_;
goto _start;
}
}
else
{
lean_object* v___x_2625_; 
lean_dec_ref(v_expanded_2612_);
lean_dec(v_x_2574_);
v___x_2625_ = lean_imported_consts_force_shared(v_entry_2611_);
lean_dec_ref(v_entry_2611_);
if (lean_obj_tag(v___x_2625_) == 0)
{
lean_object* v___x_2626_; 
v___x_2626_ = lean_box(0);
return v___x_2626_;
}
else
{
lean_object* v_val_2627_; lean_object* v___x_2629_; uint8_t v_isShared_2630_; uint8_t v_isSharedCheck_2635_; 
v_val_2627_ = lean_ctor_get(v___x_2625_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2625_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2629_ = v___x_2625_;
v_isShared_2630_ = v_isSharedCheck_2635_;
goto v_resetjp_2628_;
}
else
{
lean_inc(v_val_2627_);
lean_dec(v___x_2625_);
v___x_2629_ = lean_box(0);
v_isShared_2630_ = v_isSharedCheck_2635_;
goto v_resetjp_2628_;
}
v_resetjp_2628_:
{
lean_object* v_snd_2631_; lean_object* v___x_2633_; 
v_snd_2631_ = lean_ctor_get(v_val_2627_, 1);
lean_inc(v_snd_2631_);
lean_dec(v_val_2627_);
if (v_isShared_2630_ == 0)
{
lean_ctor_set(v___x_2629_, 0, v_snd_2631_);
v___x_2633_ = v___x_2629_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_snd_2631_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
}
}
default: 
{
lean_object* v_tree_2636_; 
v_tree_2636_ = lean_ctor_get(v_x_2572_, 1);
lean_inc_ref(v_tree_2636_);
lean_dec_ref_known(v_x_2572_, 2);
v_x_2572_ = v_tree_2636_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg___boxed(lean_object* v_x_2638_, lean_object* v_x_2639_, lean_object* v_x_2640_){
_start:
{
lean_object* v_res_2641_; 
v_res_2641_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(v_x_2638_, v_x_2639_, v_x_2640_);
lean_dec_ref(v_x_2639_);
return v_res_2641_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux(lean_object* v_00_u03b1_2642_, lean_object* v_x_2643_, lean_object* v_x_2644_, lean_object* v_x_2645_){
_start:
{
lean_object* v___x_2646_; 
v___x_2646_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(v_x_2643_, v_x_2644_, v_x_2645_);
return v___x_2646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___boxed(lean_object* v_00_u03b1_2647_, lean_object* v_x_2648_, lean_object* v_x_2649_, lean_object* v_x_2650_){
_start:
{
lean_object* v_res_2651_; 
v_res_2651_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux(v_00_u03b1_2647_, v_x_2648_, v_x_2649_, v_x_2650_);
lean_dec_ref(v_x_2649_);
return v_res_2651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(lean_object* v_x_2652_, lean_object* v_x_2653_, lean_object* v_x_2654_){
_start:
{
lean_object* v___x_2655_; lean_object* v___x_2656_; 
v___x_2655_ = lean_box(0);
v___x_2656_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
switch(lean_obj_tag(v_x_2652_))
{
case 0:
{
lean_object* v_modIdx_2657_; lean_object* v_tree_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2675_; 
v_modIdx_2657_ = lean_ctor_get(v_x_2652_, 0);
v_tree_2658_ = lean_ctor_get(v_x_2652_, 1);
v_isSharedCheck_2675_ = !lean_is_exclusive(v_x_2652_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2660_ = v_x_2652_;
v_isShared_2661_ = v_isSharedCheck_2675_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_tree_2658_);
lean_inc(v_modIdx_2657_);
lean_dec(v_x_2652_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2675_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___x_2662_; 
v___x_2662_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_2658_, v_x_2653_, v_x_2654_);
lean_dec_ref(v_tree_2658_);
if (lean_obj_tag(v___x_2662_) == 0)
{
lean_object* v___x_2663_; 
lean_del_object(v___x_2660_);
lean_dec(v_modIdx_2657_);
v___x_2663_ = lean_box(0);
return v___x_2663_;
}
else
{
lean_object* v_val_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2674_; 
v_val_2664_ = lean_ctor_get(v___x_2662_, 0);
v_isSharedCheck_2674_ = !lean_is_exclusive(v___x_2662_);
if (v_isSharedCheck_2674_ == 0)
{
v___x_2666_ = v___x_2662_;
v_isShared_2667_ = v_isSharedCheck_2674_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_val_2664_);
lean_dec(v___x_2662_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2674_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v___x_2669_; 
if (v_isShared_2661_ == 0)
{
lean_ctor_set(v___x_2660_, 1, v_modIdx_2657_);
lean_ctor_set(v___x_2660_, 0, v_val_2664_);
v___x_2669_ = v___x_2660_;
goto v_reusejp_2668_;
}
else
{
lean_object* v_reuseFailAlloc_2673_; 
v_reuseFailAlloc_2673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2673_, 0, v_val_2664_);
lean_ctor_set(v_reuseFailAlloc_2673_, 1, v_modIdx_2657_);
v___x_2669_ = v_reuseFailAlloc_2673_;
goto v_reusejp_2668_;
}
v_reusejp_2668_:
{
lean_object* v___x_2671_; 
if (v_isShared_2667_ == 0)
{
lean_ctor_set(v___x_2666_, 0, v___x_2669_);
v___x_2671_ = v___x_2666_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v___x_2669_);
v___x_2671_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
return v___x_2671_;
}
}
}
}
}
}
case 1:
{
lean_object* v_entry_x3f_2676_; lean_object* v_children_2677_; lean_object* v_childIndex_2678_; lean_object* v___x_2679_; uint8_t v___x_2680_; 
v_entry_x3f_2676_ = lean_ctor_get(v_x_2652_, 1);
lean_inc(v_entry_x3f_2676_);
v_children_2677_ = lean_ctor_get(v_x_2652_, 2);
lean_inc_ref(v_children_2677_);
v_childIndex_2678_ = lean_ctor_get(v_x_2652_, 3);
lean_inc_ref(v_childIndex_2678_);
lean_dec_ref_known(v_x_2652_, 4);
v___x_2679_ = lean_unsigned_to_nat(0u);
v___x_2680_ = lean_nat_dec_eq(v_x_2654_, v___x_2679_);
if (v___x_2680_ == 0)
{
lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; 
lean_dec(v_entry_x3f_2676_);
v___x_2681_ = lean_unsigned_to_nat(1u);
v___x_2682_ = lean_nat_sub(v_x_2654_, v___x_2681_);
lean_dec(v_x_2654_);
v___x_2683_ = lean_array_get_borrowed(v___x_2655_, v_x_2653_, v___x_2682_);
v___x_2684_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_childIndex_2678_, v_children_2677_, v___x_2683_);
lean_dec_ref(v_childIndex_2678_);
if (lean_obj_tag(v___x_2684_) == 0)
{
lean_object* v___x_2685_; 
lean_dec(v___x_2682_);
lean_dec_ref(v_children_2677_);
v___x_2685_ = lean_box(0);
return v___x_2685_;
}
else
{
lean_object* v_val_2686_; lean_object* v___x_2687_; 
v_val_2686_ = lean_ctor_get(v___x_2684_, 0);
lean_inc(v_val_2686_);
lean_dec_ref_known(v___x_2684_, 1);
v___x_2687_ = lean_array_get(v___x_2656_, v_children_2677_, v_val_2686_);
lean_dec(v_val_2686_);
lean_dec_ref(v_children_2677_);
v_x_2652_ = v___x_2687_;
v_x_2654_ = v___x_2682_;
goto _start;
}
}
else
{
lean_dec_ref(v_childIndex_2678_);
lean_dec_ref(v_children_2677_);
lean_dec(v_x_2654_);
return v_entry_x3f_2676_;
}
}
case 2:
{
lean_object* v_entry_2689_; lean_object* v_expanded_2690_; lean_object* v___x_2691_; uint8_t v___x_2692_; 
v_entry_2689_ = lean_ctor_get(v_x_2652_, 1);
lean_inc_ref(v_entry_2689_);
v_expanded_2690_ = lean_ctor_get(v_x_2652_, 2);
lean_inc_ref(v_expanded_2690_);
lean_dec_ref_known(v_x_2652_, 3);
v___x_2691_ = lean_unsigned_to_nat(0u);
v___x_2692_ = lean_nat_dec_eq(v_x_2654_, v___x_2691_);
if (v___x_2692_ == 0)
{
lean_object* v___x_2693_; lean_object* v_fst_2694_; lean_object* v_snd_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; 
lean_dec_ref(v_entry_2689_);
v___x_2693_ = lean_imported_consts_force_shared(v_expanded_2690_);
lean_dec_ref(v_expanded_2690_);
v_fst_2694_ = lean_ctor_get(v___x_2693_, 0);
lean_inc(v_fst_2694_);
v_snd_2695_ = lean_ctor_get(v___x_2693_, 1);
lean_inc(v_snd_2695_);
lean_dec(v___x_2693_);
v___x_2696_ = lean_unsigned_to_nat(1u);
v___x_2697_ = lean_nat_sub(v_x_2654_, v___x_2696_);
lean_dec(v_x_2654_);
v___x_2698_ = lean_array_get_borrowed(v___x_2655_, v_x_2653_, v___x_2697_);
v___x_2699_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_snd_2695_, v_fst_2694_, v___x_2698_);
lean_dec(v_snd_2695_);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v___x_2700_; 
lean_dec(v___x_2697_);
lean_dec(v_fst_2694_);
v___x_2700_ = lean_box(0);
return v___x_2700_;
}
else
{
lean_object* v_val_2701_; lean_object* v___x_2702_; 
v_val_2701_ = lean_ctor_get(v___x_2699_, 0);
lean_inc(v_val_2701_);
lean_dec_ref_known(v___x_2699_, 1);
v___x_2702_ = lean_array_get(v___x_2656_, v_fst_2694_, v_val_2701_);
lean_dec(v_val_2701_);
lean_dec(v_fst_2694_);
v_x_2652_ = v___x_2702_;
v_x_2654_ = v___x_2697_;
goto _start;
}
}
else
{
lean_object* v___x_2704_; 
lean_dec_ref(v_expanded_2690_);
lean_dec(v_x_2654_);
v___x_2704_ = lean_imported_consts_force_shared(v_entry_2689_);
lean_dec_ref(v_entry_2689_);
return v___x_2704_;
}
}
default: 
{
lean_object* v_tree_2705_; 
v_tree_2705_ = lean_ctor_get(v_x_2652_, 1);
lean_inc_ref(v_tree_2705_);
lean_dec_ref_known(v_x_2652_, 2);
v_x_2652_ = v_tree_2705_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg___boxed(lean_object* v_x_2707_, lean_object* v_x_2708_, lean_object* v_x_2709_){
_start:
{
lean_object* v_res_2710_; 
v_res_2710_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(v_x_2707_, v_x_2708_, v_x_2709_);
lean_dec_ref(v_x_2708_);
return v_res_2710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux(lean_object* v_00_u03b1_2711_, lean_object* v_x_2712_, lean_object* v_x_2713_, lean_object* v_x_2714_){
_start:
{
lean_object* v___x_2715_; 
v___x_2715_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(v_x_2712_, v_x_2713_, v_x_2714_);
return v___x_2715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___boxed(lean_object* v_00_u03b1_2716_, lean_object* v_x_2717_, lean_object* v_x_2718_, lean_object* v_x_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux(v_00_u03b1_2716_, v_x_2717_, v_x_2718_, v_x_2719_);
lean_dec_ref(v_x_2718_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findEntry_x3f___redArg(lean_object* v_t_2721_, lean_object* v_n_2722_){
_start:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v_path_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; 
v___x_2723_ = lean_unsigned_to_nat(8u);
v___x_2724_ = lean_mk_empty_array_with_capacity(v___x_2723_);
v_path_2725_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_2722_, v___x_2724_);
v___x_2726_ = lean_array_get_size(v_path_2725_);
v___x_2727_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(v_t_2721_, v_path_2725_, v___x_2726_);
lean_dec_ref(v_path_2725_);
return v___x_2727_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findEntry_x3f(lean_object* v_00_u03b1_2728_, lean_object* v_t_2729_, lean_object* v_n_2730_){
_start:
{
lean_object* v___x_2731_; 
v___x_2731_ = l_Lean_ImportedConsts_findEntry_x3f___redArg(v_t_2729_, v_n_2730_);
return v___x_2731_;
}
}
LEAN_EXPORT lean_object* lean_imported_consts_find_entry_core(lean_object* v_t_2732_, lean_object* v_n_2733_){
_start:
{
lean_object* v___x_2734_; 
v___x_2734_ = l_Lean_ImportedConsts_findEntry_x3f___redArg(v_t_2732_, v_n_2733_);
return v___x_2734_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstEntryCached_x3f___boxed(lean_object* v_t_2737_, lean_object* v_n_2738_){
_start:
{
lean_object* v_res_2739_; 
v_res_2739_ = lean_imported_consts_find_entry_cached(v_t_2737_, v_n_2738_);
lean_dec(v_n_2738_);
lean_dec_ref(v_t_2737_);
return v_res_2739_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstCached_x3f(lean_object* v_t_2740_, lean_object* v_n_2741_){
_start:
{
lean_object* v___x_2742_; 
v___x_2742_ = lean_imported_consts_find_entry_cached(v_t_2740_, v_n_2741_);
if (lean_obj_tag(v___x_2742_) == 0)
{
lean_object* v___x_2743_; 
v___x_2743_ = lean_box(0);
return v___x_2743_;
}
else
{
lean_object* v_val_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2752_; 
v_val_2744_ = lean_ctor_get(v___x_2742_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2742_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2746_ = v___x_2742_;
v_isShared_2747_ = v_isSharedCheck_2752_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_val_2744_);
lean_dec(v___x_2742_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2752_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v_fst_2748_; lean_object* v___x_2750_; 
v_fst_2748_ = lean_ctor_get(v_val_2744_, 0);
lean_inc(v_fst_2748_);
lean_dec(v_val_2744_);
if (v_isShared_2747_ == 0)
{
lean_ctor_set(v___x_2746_, 0, v_fst_2748_);
v___x_2750_ = v___x_2746_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v_fst_2748_);
v___x_2750_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
return v___x_2750_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstCached_x3f___boxed(lean_object* v_t_2753_, lean_object* v_n_2754_){
_start:
{
lean_object* v_res_2755_; 
v_res_2755_ = l_Lean_ImportedConsts_findConstCached_x3f(v_t_2753_, v_n_2754_);
lean_dec(v_n_2754_);
lean_dec_ref(v_t_2753_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstModIdxCached_x3f(lean_object* v_t_2756_, lean_object* v_n_2757_){
_start:
{
lean_object* v___x_2758_; 
v___x_2758_ = lean_imported_consts_find_entry_cached(v_t_2756_, v_n_2757_);
if (lean_obj_tag(v___x_2758_) == 0)
{
lean_object* v___x_2759_; 
v___x_2759_ = lean_box(0);
return v___x_2759_;
}
else
{
lean_object* v_val_2760_; lean_object* v___x_2762_; uint8_t v_isShared_2763_; uint8_t v_isSharedCheck_2768_; 
v_val_2760_ = lean_ctor_get(v___x_2758_, 0);
v_isSharedCheck_2768_ = !lean_is_exclusive(v___x_2758_);
if (v_isSharedCheck_2768_ == 0)
{
v___x_2762_ = v___x_2758_;
v_isShared_2763_ = v_isSharedCheck_2768_;
goto v_resetjp_2761_;
}
else
{
lean_inc(v_val_2760_);
lean_dec(v___x_2758_);
v___x_2762_ = lean_box(0);
v_isShared_2763_ = v_isSharedCheck_2768_;
goto v_resetjp_2761_;
}
v_resetjp_2761_:
{
lean_object* v_snd_2764_; lean_object* v___x_2766_; 
v_snd_2764_ = lean_ctor_get(v_val_2760_, 1);
lean_inc(v_snd_2764_);
lean_dec(v_val_2760_);
if (v_isShared_2763_ == 0)
{
lean_ctor_set(v___x_2762_, 0, v_snd_2764_);
v___x_2766_ = v___x_2762_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v_snd_2764_);
v___x_2766_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
return v___x_2766_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstModIdxCached_x3f___boxed(lean_object* v_t_2769_, lean_object* v_n_2770_){
_start:
{
lean_object* v_res_2771_; 
v_res_2771_ = l_Lean_ImportedConsts_findConstModIdxCached_x3f(v_t_2769_, v_n_2770_);
lean_dec(v_n_2770_);
lean_dec_ref(v_t_2769_);
return v_res_2771_;
}
}
LEAN_EXPORT lean_object* lean_imported_extra_consts_find_entry_core(lean_object* v_t_2772_, lean_object* v_n_2773_){
_start:
{
lean_object* v___x_2774_; 
v___x_2774_ = l_Lean_ImportedConsts_findEntry_x3f___redArg(v_t_2772_, v_n_2773_);
return v___x_2774_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraEntryCached_x3f___boxed(lean_object* v_t_2777_, lean_object* v_n_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = lean_imported_extra_consts_find_entry_cached(v_t_2777_, v_n_2778_);
lean_dec(v_n_2778_);
lean_dec_ref(v_t_2777_);
return v_res_2779_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraModIdxCached_x3f(lean_object* v_t_2780_, lean_object* v_n_2781_){
_start:
{
lean_object* v___x_2782_; 
v___x_2782_ = lean_imported_extra_consts_find_entry_cached(v_t_2780_, v_n_2781_);
if (lean_obj_tag(v___x_2782_) == 0)
{
lean_object* v___x_2783_; 
v___x_2783_ = lean_box(0);
return v___x_2783_;
}
else
{
lean_object* v_val_2784_; lean_object* v___x_2786_; uint8_t v_isShared_2787_; uint8_t v_isSharedCheck_2792_; 
v_val_2784_ = lean_ctor_get(v___x_2782_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2786_ = v___x_2782_;
v_isShared_2787_ = v_isSharedCheck_2792_;
goto v_resetjp_2785_;
}
else
{
lean_inc(v_val_2784_);
lean_dec(v___x_2782_);
v___x_2786_ = lean_box(0);
v_isShared_2787_ = v_isSharedCheck_2792_;
goto v_resetjp_2785_;
}
v_resetjp_2785_:
{
lean_object* v_snd_2788_; lean_object* v___x_2790_; 
v_snd_2788_ = lean_ctor_get(v_val_2784_, 1);
lean_inc(v_snd_2788_);
lean_dec(v_val_2784_);
if (v_isShared_2787_ == 0)
{
lean_ctor_set(v___x_2786_, 0, v_snd_2788_);
v___x_2790_ = v___x_2786_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v_snd_2788_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraModIdxCached_x3f___boxed(lean_object* v_t_2793_, lean_object* v_n_2794_){
_start:
{
lean_object* v_res_2795_; 
v_res_2795_ = l_Lean_ImportedConsts_findExtraModIdxCached_x3f(v_t_2793_, v_n_2794_);
lean_dec(v_n_2794_);
lean_dec_ref(v_t_2793_);
return v_res_2795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg(lean_object* v_bound_2796_, lean_object* v_x_2797_, lean_object* v_x_2798_, lean_object* v_x_2799_){
_start:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; 
v___x_2800_ = lean_box(0);
v___x_2801_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
switch(lean_obj_tag(v_x_2797_))
{
case 0:
{
lean_object* v_modIdx_2802_; lean_object* v_tree_2803_; uint8_t v___x_2804_; 
v_modIdx_2802_ = lean_ctor_get(v_x_2797_, 0);
lean_inc(v_modIdx_2802_);
v_tree_2803_ = lean_ctor_get(v_x_2797_, 1);
lean_inc_ref(v_tree_2803_);
lean_dec_ref_known(v_x_2797_, 2);
v___x_2804_ = lean_nat_dec_lt(v_modIdx_2802_, v_bound_2796_);
if (v___x_2804_ == 0)
{
lean_object* v___x_2805_; 
lean_dec_ref(v_tree_2803_);
lean_dec(v_modIdx_2802_);
lean_dec(v_x_2799_);
v___x_2805_ = lean_box(0);
return v___x_2805_;
}
else
{
lean_object* v___x_2806_; 
v___x_2806_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_2803_, v_x_2798_, v_x_2799_);
lean_dec_ref(v_tree_2803_);
if (lean_obj_tag(v___x_2806_) == 0)
{
lean_object* v___x_2807_; 
lean_dec(v_modIdx_2802_);
v___x_2807_ = lean_box(0);
return v___x_2807_;
}
else
{
lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2814_; 
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2806_);
if (v_isSharedCheck_2814_ == 0)
{
lean_object* v_unused_2815_; 
v_unused_2815_ = lean_ctor_get(v___x_2806_, 0);
lean_dec(v_unused_2815_);
v___x_2809_ = v___x_2806_;
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
else
{
lean_dec(v___x_2806_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2812_; 
if (v_isShared_2810_ == 0)
{
lean_ctor_set(v___x_2809_, 0, v_modIdx_2802_);
v___x_2812_ = v___x_2809_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_modIdx_2802_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
}
}
}
case 1:
{
lean_object* v_entry_x3f_2816_; lean_object* v_children_2817_; lean_object* v_childIndex_2818_; lean_object* v___x_2819_; uint8_t v___x_2820_; 
v_entry_x3f_2816_ = lean_ctor_get(v_x_2797_, 1);
lean_inc(v_entry_x3f_2816_);
v_children_2817_ = lean_ctor_get(v_x_2797_, 2);
lean_inc_ref(v_children_2817_);
v_childIndex_2818_ = lean_ctor_get(v_x_2797_, 3);
lean_inc_ref(v_childIndex_2818_);
lean_dec_ref_known(v_x_2797_, 4);
v___x_2819_ = lean_unsigned_to_nat(0u);
v___x_2820_ = lean_nat_dec_eq(v_x_2799_, v___x_2819_);
if (v___x_2820_ == 0)
{
lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; 
lean_dec(v_entry_x3f_2816_);
v___x_2821_ = lean_unsigned_to_nat(1u);
v___x_2822_ = lean_nat_sub(v_x_2799_, v___x_2821_);
lean_dec(v_x_2799_);
v___x_2823_ = lean_array_get_borrowed(v___x_2800_, v_x_2798_, v___x_2822_);
v___x_2824_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_childIndex_2818_, v_children_2817_, v___x_2823_);
lean_dec_ref(v_childIndex_2818_);
if (lean_obj_tag(v___x_2824_) == 0)
{
lean_dec(v___x_2822_);
lean_dec_ref(v_children_2817_);
return v___x_2824_;
}
else
{
lean_object* v_val_2825_; lean_object* v___x_2826_; 
v_val_2825_ = lean_ctor_get(v___x_2824_, 0);
lean_inc(v_val_2825_);
lean_dec_ref_known(v___x_2824_, 1);
v___x_2826_ = lean_array_get(v___x_2801_, v_children_2817_, v_val_2825_);
lean_dec(v_val_2825_);
lean_dec_ref(v_children_2817_);
v_x_2797_ = v___x_2826_;
v_x_2799_ = v___x_2822_;
goto _start;
}
}
else
{
lean_dec_ref(v_childIndex_2818_);
lean_dec_ref(v_children_2817_);
lean_dec(v_x_2799_);
if (lean_obj_tag(v_entry_x3f_2816_) == 0)
{
lean_object* v___x_2828_; 
v___x_2828_ = lean_box(0);
return v___x_2828_;
}
else
{
lean_object* v_val_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2839_; 
v_val_2829_ = lean_ctor_get(v_entry_x3f_2816_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v_entry_x3f_2816_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2831_ = v_entry_x3f_2816_;
v_isShared_2832_ = v_isSharedCheck_2839_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_val_2829_);
lean_dec(v_entry_x3f_2816_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2839_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
lean_object* v_snd_2833_; uint8_t v___x_2834_; 
v_snd_2833_ = lean_ctor_get(v_val_2829_, 1);
lean_inc(v_snd_2833_);
lean_dec(v_val_2829_);
v___x_2834_ = lean_nat_dec_lt(v_snd_2833_, v_bound_2796_);
if (v___x_2834_ == 0)
{
lean_object* v___x_2835_; 
lean_dec(v_snd_2833_);
lean_del_object(v___x_2831_);
v___x_2835_ = lean_box(0);
return v___x_2835_;
}
else
{
lean_object* v___x_2837_; 
if (v_isShared_2832_ == 0)
{
lean_ctor_set(v___x_2831_, 0, v_snd_2833_);
v___x_2837_ = v___x_2831_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v_snd_2833_);
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
}
}
case 2:
{
lean_object* v_entry_2840_; lean_object* v_expanded_2841_; lean_object* v___x_2842_; uint8_t v___x_2843_; 
v_entry_2840_ = lean_ctor_get(v_x_2797_, 1);
lean_inc_ref(v_entry_2840_);
v_expanded_2841_ = lean_ctor_get(v_x_2797_, 2);
lean_inc_ref(v_expanded_2841_);
lean_dec_ref_known(v_x_2797_, 3);
v___x_2842_ = lean_unsigned_to_nat(0u);
v___x_2843_ = lean_nat_dec_eq(v_x_2799_, v___x_2842_);
if (v___x_2843_ == 0)
{
lean_object* v___x_2844_; lean_object* v_fst_2845_; lean_object* v_snd_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; 
lean_dec_ref(v_entry_2840_);
v___x_2844_ = lean_imported_consts_force_shared(v_expanded_2841_);
lean_dec_ref(v_expanded_2841_);
v_fst_2845_ = lean_ctor_get(v___x_2844_, 0);
lean_inc(v_fst_2845_);
v_snd_2846_ = lean_ctor_get(v___x_2844_, 1);
lean_inc(v_snd_2846_);
lean_dec(v___x_2844_);
v___x_2847_ = lean_unsigned_to_nat(1u);
v___x_2848_ = lean_nat_sub(v_x_2799_, v___x_2847_);
lean_dec(v_x_2799_);
v___x_2849_ = lean_array_get_borrowed(v___x_2800_, v_x_2798_, v___x_2848_);
v___x_2850_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_snd_2846_, v_fst_2845_, v___x_2849_);
lean_dec(v_snd_2846_);
if (lean_obj_tag(v___x_2850_) == 0)
{
lean_dec(v___x_2848_);
lean_dec(v_fst_2845_);
return v___x_2850_;
}
else
{
lean_object* v_val_2851_; lean_object* v___x_2852_; 
v_val_2851_ = lean_ctor_get(v___x_2850_, 0);
lean_inc(v_val_2851_);
lean_dec_ref_known(v___x_2850_, 1);
v___x_2852_ = lean_array_get(v___x_2801_, v_fst_2845_, v_val_2851_);
lean_dec(v_val_2851_);
lean_dec(v_fst_2845_);
v_x_2797_ = v___x_2852_;
v_x_2799_ = v___x_2848_;
goto _start;
}
}
else
{
lean_object* v___x_2854_; 
lean_dec_ref(v_expanded_2841_);
lean_dec(v_x_2799_);
v___x_2854_ = lean_imported_consts_force_shared(v_entry_2840_);
lean_dec_ref(v_entry_2840_);
if (lean_obj_tag(v___x_2854_) == 0)
{
lean_object* v___x_2855_; 
v___x_2855_ = lean_box(0);
return v___x_2855_;
}
else
{
lean_object* v_val_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2866_; 
v_val_2856_ = lean_ctor_get(v___x_2854_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2854_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2858_ = v___x_2854_;
v_isShared_2859_ = v_isSharedCheck_2866_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_val_2856_);
lean_dec(v___x_2854_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2866_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v_snd_2860_; uint8_t v___x_2861_; 
v_snd_2860_ = lean_ctor_get(v_val_2856_, 1);
lean_inc(v_snd_2860_);
lean_dec(v_val_2856_);
v___x_2861_ = lean_nat_dec_lt(v_snd_2860_, v_bound_2796_);
if (v___x_2861_ == 0)
{
lean_object* v___x_2862_; 
lean_dec(v_snd_2860_);
lean_del_object(v___x_2858_);
v___x_2862_ = lean_box(0);
return v___x_2862_;
}
else
{
lean_object* v___x_2864_; 
if (v_isShared_2859_ == 0)
{
lean_ctor_set(v___x_2858_, 0, v_snd_2860_);
v___x_2864_ = v___x_2858_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v_snd_2860_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
return v___x_2864_;
}
}
}
}
}
}
default: 
{
lean_object* v_tree_2867_; 
v_tree_2867_ = lean_ctor_get(v_x_2797_, 1);
lean_inc_ref(v_tree_2867_);
lean_dec_ref_known(v_x_2797_, 2);
v_x_2797_ = v_tree_2867_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg___boxed(lean_object* v_bound_2869_, lean_object* v_x_2870_, lean_object* v_x_2871_, lean_object* v_x_2872_){
_start:
{
lean_object* v_res_2873_; 
v_res_2873_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg(v_bound_2869_, v_x_2870_, v_x_2871_, v_x_2872_);
lean_dec_ref(v_x_2871_);
lean_dec(v_bound_2869_);
return v_res_2873_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux(lean_object* v_00_u03b1_2874_, lean_object* v_bound_2875_, lean_object* v_x_2876_, lean_object* v_x_2877_, lean_object* v_x_2878_){
_start:
{
lean_object* v___x_2879_; 
v___x_2879_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg(v_bound_2875_, v_x_2876_, v_x_2877_, v_x_2878_);
return v___x_2879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___boxed(lean_object* v_00_u03b1_2880_, lean_object* v_bound_2881_, lean_object* v_x_2882_, lean_object* v_x_2883_, lean_object* v_x_2884_){
_start:
{
lean_object* v_res_2885_; 
v_res_2885_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux(v_00_u03b1_2880_, v_bound_2881_, v_x_2882_, v_x_2883_, v_x_2884_);
lean_dec_ref(v_x_2883_);
lean_dec(v_bound_2881_);
return v_res_2885_;
}
}
LEAN_EXPORT lean_object* lean_imported_consts_mod_idx_core(lean_object* v_entry_2886_, lean_object* v_extras_2887_, lean_object* v_n_2888_){
_start:
{
lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v_path_2891_; 
v___x_2889_ = lean_unsigned_to_nat(8u);
v___x_2890_ = lean_mk_empty_array_with_capacity(v___x_2889_);
v_path_2891_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_2888_, v___x_2890_);
if (lean_obj_tag(v_entry_2886_) == 0)
{
lean_object* v___x_2892_; lean_object* v___x_2893_; 
v___x_2892_ = lean_array_get_size(v_path_2891_);
v___x_2893_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(v_extras_2887_, v_path_2891_, v___x_2892_);
lean_dec_ref(v_path_2891_);
return v___x_2893_;
}
else
{
lean_object* v_val_2894_; lean_object* v___x_2896_; uint8_t v_isShared_2897_; uint8_t v_isSharedCheck_2904_; 
v_val_2894_ = lean_ctor_get(v_entry_2886_, 0);
v_isSharedCheck_2904_ = !lean_is_exclusive(v_entry_2886_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2896_ = v_entry_2886_;
v_isShared_2897_ = v_isSharedCheck_2904_;
goto v_resetjp_2895_;
}
else
{
lean_inc(v_val_2894_);
lean_dec(v_entry_2886_);
v___x_2896_ = lean_box(0);
v_isShared_2897_ = v_isSharedCheck_2904_;
goto v_resetjp_2895_;
}
v_resetjp_2895_:
{
lean_object* v_snd_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; 
v_snd_2898_ = lean_ctor_get(v_val_2894_, 1);
lean_inc(v_snd_2898_);
lean_dec(v_val_2894_);
v___x_2899_ = lean_array_get_size(v_path_2891_);
v___x_2900_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg(v_snd_2898_, v_extras_2887_, v_path_2891_, v___x_2899_);
lean_dec_ref(v_path_2891_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v___x_2902_; 
if (v_isShared_2897_ == 0)
{
lean_ctor_set(v___x_2896_, 0, v_snd_2898_);
v___x_2902_ = v___x_2896_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_snd_2898_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
return v___x_2902_;
}
}
else
{
lean_dec(v_snd_2898_);
lean_del_object(v___x_2896_);
return v___x_2900_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findModIdxCached_x3f___boxed(lean_object* v_consts_2908_, lean_object* v_extras_2909_, lean_object* v_n_2910_){
_start:
{
lean_object* v_res_2911_; 
v_res_2911_ = lean_imported_consts_find_mod_idx_cached(v_consts_2908_, v_extras_2909_, v_n_2910_);
lean_dec(v_n_2910_);
lean_dec_ref(v_extras_2909_);
lean_dec_ref(v_consts_2908_);
return v_res_2911_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_resetCache___boxed(lean_object* v_a_00___x40___internal___hyg_2913_){
_start:
{
lean_object* v_res_2914_; 
v_res_2914_ = lean_imported_consts_cache_reset();
return v_res_2914_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f___redArg(lean_object* v_t_2915_, lean_object* v_n_2916_){
_start:
{
lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v_path_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; 
v___x_2917_ = lean_unsigned_to_nat(8u);
v___x_2918_ = lean_mk_empty_array_with_capacity(v___x_2917_);
v_path_2919_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_2916_, v___x_2918_);
v___x_2920_ = lean_array_get_size(v_path_2919_);
v___x_2921_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(v_t_2915_, v_path_2919_, v___x_2920_);
lean_dec_ref(v_path_2919_);
return v___x_2921_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f(lean_object* v_00_u03b1_2922_, lean_object* v_t_2923_, lean_object* v_n_2924_){
_start:
{
lean_object* v___x_2925_; 
v___x_2925_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_2923_, v_n_2924_);
return v___x_2925_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findModIdx_x3f___redArg(lean_object* v_t_2926_, lean_object* v_n_2927_){
_start:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v_path_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; 
v___x_2928_ = lean_unsigned_to_nat(8u);
v___x_2929_ = lean_mk_empty_array_with_capacity(v___x_2928_);
v_path_2930_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_2927_, v___x_2929_);
v___x_2931_ = lean_array_get_size(v_path_2930_);
v___x_2932_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(v_t_2926_, v_path_2930_, v___x_2931_);
lean_dec_ref(v_path_2930_);
return v___x_2932_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findModIdx_x3f(lean_object* v_00_u03b1_2933_, lean_object* v_t_2934_, lean_object* v_n_2935_){
_start:
{
lean_object* v___x_2936_; 
v___x_2936_ = l_Lean_ImportedConsts_findModIdx_x3f___redArg(v_t_2934_, v_n_2935_);
return v___x_2936_;
}
}
LEAN_EXPORT uint8_t l_Lean_ImportedConsts_contains___redArg(lean_object* v_t_2937_, lean_object* v_n_2938_){
_start:
{
lean_object* v___x_2939_; 
v___x_2939_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_2937_, v_n_2938_);
if (lean_obj_tag(v___x_2939_) == 0)
{
uint8_t v___x_2940_; 
v___x_2940_ = 0;
return v___x_2940_;
}
else
{
uint8_t v___x_2941_; 
lean_dec_ref_known(v___x_2939_, 1);
v___x_2941_ = 1;
return v___x_2941_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_contains___redArg___boxed(lean_object* v_t_2942_, lean_object* v_n_2943_){
_start:
{
uint8_t v_res_2944_; lean_object* v_r_2945_; 
v_res_2944_ = l_Lean_ImportedConsts_contains___redArg(v_t_2942_, v_n_2943_);
v_r_2945_ = lean_box(v_res_2944_);
return v_r_2945_;
}
}
LEAN_EXPORT uint8_t l_Lean_ImportedConsts_contains(lean_object* v_00_u03b1_2946_, lean_object* v_t_2947_, lean_object* v_n_2948_){
_start:
{
uint8_t v___x_2949_; 
v___x_2949_ = l_Lean_ImportedConsts_contains___redArg(v_t_2947_, v_n_2948_);
return v___x_2949_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_contains___boxed(lean_object* v_00_u03b1_2950_, lean_object* v_t_2951_, lean_object* v_n_2952_){
_start:
{
uint8_t v_res_2953_; lean_object* v_r_2954_; 
v_res_2953_ = l_Lean_ImportedConsts_contains(v_00_u03b1_2950_, v_t_2951_, v_n_2952_);
v_r_2954_ = lean_box(v_res_2953_);
return v_r_2954_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0(lean_object* v_a_2955_, lean_object* v_x_2956_, lean_object* v___y_2957_){
_start:
{
lean_object* v_snd_2958_; lean_object* v_children_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; 
v_snd_2958_ = lean_ctor_get(v_a_2955_, 1);
v_children_2959_ = lean_ctor_get(v_snd_2958_, 2);
v___x_2960_ = lean_array_get_size(v_children_2959_);
v___x_2961_ = lean_nat_add(v___y_2957_, v___x_2960_);
v___x_2962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2961_);
return v___x_2962_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0___boxed(lean_object* v_a_2963_, lean_object* v_x_2964_, lean_object* v___y_2965_){
_start:
{
lean_object* v_res_2966_; 
v_res_2966_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0(v_a_2963_, v_x_2964_, v___y_2965_);
lean_dec(v___y_2965_);
lean_dec_ref(v_a_2963_);
return v_res_2966_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__1(lean_object* v_fst_2967_, lean_object* v_a_2968_, lean_object* v_x_2969_, lean_object* v___y_2970_){
_start:
{
uint64_t v___y_2972_; lean_object* v_key_2978_; 
v_key_2978_ = lean_ctor_get(v_a_2968_, 0);
if (lean_obj_tag(v_key_2978_) == 0)
{
uint64_t v___x_2979_; 
v___x_2979_ = 1723ULL;
v___y_2972_ = v___x_2979_;
goto v___jp_2971_;
}
else
{
uint64_t v_hash_2980_; 
v_hash_2980_ = lean_ctor_get_uint64(v_key_2978_, sizeof(void*)*2);
v___y_2972_ = v_hash_2980_;
goto v___jp_2971_;
}
v___jp_2971_:
{
lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; 
v___x_2973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2973_, 0, v_fst_2967_);
lean_ctor_set(v___x_2973_, 1, v_a_2968_);
v___x_2974_ = lean_box_uint64(v___y_2972_);
v___x_2975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2975_, 0, v___x_2974_);
lean_ctor_set(v___x_2975_, 1, v___x_2973_);
v___x_2976_ = lean_array_push(v___y_2970_, v___x_2975_);
v___x_2977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2977_, 0, v___x_2976_);
return v___x_2977_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__2(lean_object* v___x_2981_, lean_object* v_a_2982_, lean_object* v_x_2983_, lean_object* v___y_2984_){
_start:
{
lean_object* v_snd_2985_; lean_object* v_fst_2986_; lean_object* v_children_2987_; lean_object* v___f_2988_; size_t v_sz_2989_; size_t v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; 
v_snd_2985_ = lean_ctor_get(v_a_2982_, 1);
lean_inc(v_snd_2985_);
v_fst_2986_ = lean_ctor_get(v_a_2982_, 0);
lean_inc(v_fst_2986_);
lean_dec_ref(v_a_2982_);
v_children_2987_ = lean_ctor_get(v_snd_2985_, 2);
lean_inc_ref(v_children_2987_);
lean_dec(v_snd_2985_);
v___f_2988_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__1), 4, 1);
lean_closure_set(v___f_2988_, 0, v_fst_2986_);
v_sz_2989_ = lean_array_size(v_children_2987_);
v___x_2990_ = ((size_t)0ULL);
v___x_2991_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2981_, v_children_2987_, v___f_2988_, v_sz_2989_, v___x_2990_, v___y_2984_);
v___x_2992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2992_, 0, v___x_2991_);
return v___x_2992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(lean_object* v___x_2993_, lean_object* v_multi_2994_, lean_object* v___x_2995_, lean_object* v_total_2996_, lean_object* v_single_2997_, lean_object* v_a_2998_, lean_object* v_x_2999_, lean_object* v___y_3000_){
_start:
{
lean_object* v___x_3001_; uint8_t v___x_3002_; 
v___x_3001_ = lean_array_get_size(v_a_2998_);
v___x_3002_ = lean_nat_dec_eq(v___x_3001_, v___x_2993_);
if (v___x_3002_ == 0)
{
lean_object* v___x_3003_; lean_object* v___x_3004_; 
lean_dec(v_single_2997_);
v___x_3003_ = lean_apply_2(v_multi_2994_, v___y_3000_, v_a_2998_);
v___x_3004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3004_, 0, v___x_3003_);
return v___x_3004_;
}
else
{
lean_object* v___x_3005_; lean_object* v_fst_3006_; lean_object* v_snd_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; 
lean_dec(v_multi_2994_);
v___x_3005_ = lean_array_get(v___x_2995_, v_a_2998_, v_total_2996_);
lean_dec_ref(v_a_2998_);
v_fst_3006_ = lean_ctor_get(v___x_3005_, 0);
lean_inc(v_fst_3006_);
v_snd_3007_ = lean_ctor_get(v___x_3005_, 1);
lean_inc(v_snd_3007_);
lean_dec(v___x_3005_);
v___x_3008_ = lean_apply_3(v_single_2997_, v___y_3000_, v_fst_3006_, v_snd_3007_);
v___x_3009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3009_, 0, v___x_3008_);
return v___x_3009_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed(lean_object* v___x_3010_, lean_object* v_multi_3011_, lean_object* v___x_3012_, lean_object* v_total_3013_, lean_object* v_single_3014_, lean_object* v_a_3015_, lean_object* v_x_3016_, lean_object* v___y_3017_){
_start:
{
lean_object* v_res_3018_; 
v_res_3018_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(v___x_3010_, v_multi_3011_, v___x_3012_, v_total_3013_, v_single_3014_, v_a_3015_, v_x_3016_, v___y_3017_);
lean_dec(v_total_3013_);
lean_dec_ref(v___x_3012_);
lean_dec(v___x_3010_);
return v_res_3018_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(lean_object* v_fst_3019_, lean_object* v___x_3020_, lean_object* v_____r_3021_, lean_object* v_groups_3022_){
_start:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3023_ = lean_nat_add(v_fst_3019_, v___x_3020_);
v___x_3024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3024_, 0, v___x_3023_);
lean_ctor_set(v___x_3024_, 1, v_groups_3022_);
v___x_3025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3024_);
return v___x_3025_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4___boxed(lean_object* v_fst_3026_, lean_object* v___x_3027_, lean_object* v_____r_3028_, lean_object* v_groups_3029_){
_start:
{
lean_object* v_res_3030_; 
v_res_3030_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(v_fst_3026_, v___x_3027_, v_____r_3028_, v_groups_3029_);
lean_dec(v___x_3027_);
lean_dec(v_fst_3026_);
return v_res_3030_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5(lean_object* v___x_3031_, lean_object* v_total_3032_, lean_object* v_snd_3033_, uint8_t v___x_3034_, uint8_t v___x_3035_, lean_object* v_g_3036_){
_start:
{
lean_object* v___x_3037_; lean_object* v_snd_3038_; lean_object* v_key_3039_; 
v___x_3037_ = lean_array_get_borrowed(v___x_3031_, v_g_3036_, v_total_3032_);
v_snd_3038_ = lean_ctor_get(v___x_3037_, 1);
v_key_3039_ = lean_ctor_get(v_snd_3038_, 0);
switch(lean_obj_tag(v_key_3039_))
{
case 0:
{
lean_object* v_key_3040_; 
v_key_3040_ = lean_ctor_get(v_snd_3033_, 0);
if (lean_obj_tag(v_key_3040_) == 0)
{
return v___x_3034_;
}
else
{
return v___x_3035_;
}
}
case 1:
{
lean_object* v_key_3041_; 
v_key_3041_ = lean_ctor_get(v_snd_3033_, 0);
if (lean_obj_tag(v_key_3041_) == 1)
{
lean_object* v_str_3042_; lean_object* v_str_3043_; uint8_t v___x_3044_; 
v_str_3042_ = lean_ctor_get(v_key_3039_, 1);
v_str_3043_ = lean_ctor_get(v_key_3041_, 1);
v___x_3044_ = lean_string_dec_eq(v_str_3042_, v_str_3043_);
return v___x_3044_;
}
else
{
return v___x_3035_;
}
}
default: 
{
lean_object* v_key_3045_; 
v_key_3045_ = lean_ctor_get(v_snd_3033_, 0);
if (lean_obj_tag(v_key_3045_) == 2)
{
lean_object* v_i_3046_; lean_object* v_i_3047_; uint8_t v___x_3048_; 
v_i_3046_ = lean_ctor_get(v_key_3039_, 1);
v_i_3047_ = lean_ctor_get(v_key_3045_, 1);
v___x_3048_ = lean_nat_dec_eq(v_i_3046_, v_i_3047_);
return v___x_3048_;
}
else
{
return v___x_3035_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5___boxed(lean_object* v___x_3049_, lean_object* v_total_3050_, lean_object* v_snd_3051_, lean_object* v___x_3052_, lean_object* v___x_3053_, lean_object* v_g_3054_){
_start:
{
uint8_t v___x_3289__boxed_3055_; uint8_t v___x_3290__boxed_3056_; uint8_t v_res_3057_; lean_object* v_r_3058_; 
v___x_3289__boxed_3055_ = lean_unbox(v___x_3052_);
v___x_3290__boxed_3056_ = lean_unbox(v___x_3053_);
v_res_3057_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5(v___x_3049_, v_total_3050_, v_snd_3051_, v___x_3289__boxed_3055_, v___x_3290__boxed_3056_, v_g_3054_);
lean_dec_ref(v_g_3054_);
lean_dec_ref(v_snd_3051_);
lean_dec(v_total_3050_);
lean_dec_ref(v___x_3049_);
v_r_3058_ = lean_box(v_res_3057_);
return v_r_3058_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6(lean_object* v___x_3059_, lean_object* v___x_3060_, lean_object* v___y_3061_, uint64_t v_fst_3062_, lean_object* v___x_3063_, lean_object* v___x_3064_, lean_object* v_total_3065_, uint8_t v___x_3066_, lean_object* v_b_3067_){
_start:
{
lean_object* v___y_3069_; lean_object* v_fst_3078_; lean_object* v_snd_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3116_; 
v_fst_3078_ = lean_ctor_get(v_b_3067_, 0);
v_snd_3079_ = lean_ctor_get(v_b_3067_, 1);
v_isSharedCheck_3116_ = !lean_is_exclusive(v_b_3067_);
if (v_isSharedCheck_3116_ == 0)
{
v___x_3081_ = v_b_3067_;
v_isShared_3082_ = v_isSharedCheck_3116_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_snd_3079_);
lean_inc(v_fst_3078_);
lean_dec(v_b_3067_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3116_;
goto v_resetjp_3080_;
}
v___jp_3068_:
{
lean_object* v_a_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3077_; 
v_a_3070_ = lean_ctor_get(v___y_3069_, 0);
v_isSharedCheck_3077_ = !lean_is_exclusive(v___y_3069_);
if (v_isSharedCheck_3077_ == 0)
{
v___x_3072_ = v___y_3069_;
v_isShared_3073_ = v_isSharedCheck_3077_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_a_3070_);
lean_dec(v___y_3069_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3077_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v___x_3075_; 
if (v_isShared_3073_ == 0)
{
lean_ctor_set_tag(v___x_3072_, 0);
v___x_3075_ = v___x_3072_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v_a_3070_);
v___x_3075_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
return v___x_3075_;
}
}
}
v_resetjp_3080_:
{
uint8_t v___x_3088_; 
v___x_3088_ = lean_nat_dec_lt(v_fst_3078_, v___x_3059_);
if (v___x_3088_ == 0)
{
lean_dec(v_total_3065_);
lean_dec_ref(v___x_3064_);
goto v___jp_3083_;
}
else
{
lean_object* v___x_3089_; lean_object* v_fst_3090_; lean_object* v_snd_3091_; uint64_t v___x_3092_; uint8_t v___x_3093_; 
v___x_3089_ = lean_array_get_borrowed(v___x_3060_, v___y_3061_, v_fst_3078_);
v_fst_3090_ = lean_ctor_get(v___x_3089_, 0);
v_snd_3091_ = lean_ctor_get(v___x_3089_, 1);
v___x_3092_ = lean_unbox_uint64(v_fst_3090_);
v___x_3093_ = lean_uint64_dec_eq(v___x_3092_, v_fst_3062_);
if (v___x_3093_ == 0)
{
lean_dec(v_total_3065_);
lean_dec_ref(v___x_3064_);
goto v___jp_3083_;
}
else
{
lean_object* v_snd_3094_; lean_object* v___y_3096_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___f_3101_; lean_object* v___x_3102_; 
lean_del_object(v___x_3081_);
v_snd_3094_ = lean_ctor_get(v_snd_3091_, 1);
v___x_3099_ = lean_box(v___x_3093_);
v___x_3100_ = lean_box(v___x_3066_);
lean_inc(v_snd_3094_);
lean_inc(v_total_3065_);
v___f_3101_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5___boxed), 6, 5);
lean_closure_set(v___f_3101_, 0, v___x_3064_);
lean_closure_set(v___f_3101_, 1, v_total_3065_);
lean_closure_set(v___f_3101_, 2, v_snd_3094_);
lean_closure_set(v___f_3101_, 3, v___x_3099_);
lean_closure_set(v___f_3101_, 4, v___x_3100_);
v___x_3102_ = l_Array_findIdx_x3f_loop___redArg(v___f_3101_, v_snd_3079_, v_total_3065_);
if (lean_obj_tag(v___x_3102_) == 0)
{
lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; 
v___x_3103_ = lean_mk_empty_array_with_capacity(v___x_3063_);
lean_inc(v_snd_3091_);
v___x_3104_ = lean_array_push(v___x_3103_, v_snd_3091_);
v___x_3105_ = lean_array_push(v_snd_3079_, v___x_3104_);
v___x_3106_ = lean_box(0);
v___x_3107_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(v_fst_3078_, v___x_3063_, v___x_3106_, v___x_3105_);
lean_dec(v_fst_3078_);
v___y_3069_ = v___x_3107_;
goto v___jp_3068_;
}
else
{
lean_object* v_val_3108_; lean_object* v___x_3109_; uint8_t v___x_3110_; 
v_val_3108_ = lean_ctor_get(v___x_3102_, 0);
lean_inc(v_val_3108_);
lean_dec_ref_known(v___x_3102_, 1);
v___x_3109_ = lean_array_get_size(v_snd_3079_);
v___x_3110_ = lean_nat_dec_lt(v_val_3108_, v___x_3109_);
if (v___x_3110_ == 0)
{
lean_dec(v_val_3108_);
v___y_3096_ = v_snd_3079_;
goto v___jp_3095_;
}
else
{
lean_object* v_v_3111_; lean_object* v___x_3112_; lean_object* v_xs_x27_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; 
v_v_3111_ = lean_array_fget(v_snd_3079_, v_val_3108_);
v___x_3112_ = lean_box(0);
v_xs_x27_3113_ = lean_array_fset(v_snd_3079_, v_val_3108_, v___x_3112_);
lean_inc(v_snd_3091_);
v___x_3114_ = lean_array_push(v_v_3111_, v_snd_3091_);
v___x_3115_ = lean_array_fset(v_xs_x27_3113_, v_val_3108_, v___x_3114_);
lean_dec(v_val_3108_);
v___y_3096_ = v___x_3115_;
goto v___jp_3095_;
}
}
v___jp_3095_:
{
lean_object* v___x_3097_; lean_object* v___x_3098_; 
v___x_3097_ = lean_box(0);
v___x_3098_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(v_fst_3078_, v___x_3063_, v___x_3097_, v___y_3096_);
lean_dec(v_fst_3078_);
v___y_3069_ = v___x_3098_;
goto v___jp_3068_;
}
}
}
v___jp_3083_:
{
lean_object* v___x_3085_; 
if (v_isShared_3082_ == 0)
{
v___x_3085_ = v___x_3081_;
goto v_reusejp_3084_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v_fst_3078_);
lean_ctor_set(v_reuseFailAlloc_3087_, 1, v_snd_3079_);
v___x_3085_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3084_;
}
v_reusejp_3084_:
{
lean_object* v___x_3086_; 
v___x_3086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3086_, 0, v___x_3085_);
return v___x_3086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6___boxed(lean_object* v___x_3117_, lean_object* v___x_3118_, lean_object* v___y_3119_, lean_object* v_fst_3120_, lean_object* v___x_3121_, lean_object* v___x_3122_, lean_object* v_total_3123_, lean_object* v___x_3124_, lean_object* v_b_3125_){
_start:
{
uint64_t v_fst_3318__boxed_3126_; uint8_t v___x_3321__boxed_3127_; lean_object* v_res_3128_; 
v_fst_3318__boxed_3126_ = lean_unbox_uint64(v_fst_3120_);
lean_dec_ref(v_fst_3120_);
v___x_3321__boxed_3127_ = lean_unbox(v___x_3124_);
v_res_3128_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6(v___x_3117_, v___x_3118_, v___y_3119_, v_fst_3318__boxed_3126_, v___x_3121_, v___x_3122_, v_total_3123_, v___x_3321__boxed_3127_, v_b_3125_);
lean_dec(v___x_3121_);
lean_dec_ref(v___y_3119_);
lean_dec_ref(v___x_3118_);
lean_dec(v___x_3117_);
return v_res_3128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7(lean_object* v___y_3129_, lean_object* v___x_3130_, lean_object* v___x_3131_, lean_object* v_single_3132_, lean_object* v___x_3133_, lean_object* v_total_3134_, lean_object* v___x_3135_, lean_object* v___f_3136_, size_t v___x_3137_, lean_object* v_b_3138_){
_start:
{
lean_object* v_fst_3139_; lean_object* v_snd_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3198_; 
v_fst_3139_ = lean_ctor_get(v_b_3138_, 0);
v_snd_3140_ = lean_ctor_get(v_b_3138_, 1);
v_isSharedCheck_3198_ = !lean_is_exclusive(v_b_3138_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3142_ = v_b_3138_;
v_isShared_3143_ = v_isSharedCheck_3198_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_snd_3140_);
lean_inc(v_fst_3139_);
lean_dec(v_b_3138_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3198_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___x_3144_; uint8_t v___x_3145_; 
v___x_3144_ = lean_array_get_size(v___y_3129_);
v___x_3145_ = lean_nat_dec_lt(v_snd_3140_, v___x_3144_);
if (v___x_3145_ == 0)
{
lean_object* v___x_3147_; 
lean_dec_ref(v___f_3136_);
lean_dec_ref(v___x_3135_);
lean_dec(v_total_3134_);
lean_dec_ref(v___x_3133_);
lean_dec(v_single_3132_);
lean_dec(v___x_3131_);
lean_dec_ref(v___x_3130_);
lean_dec_ref(v___y_3129_);
if (v_isShared_3143_ == 0)
{
v___x_3147_ = v___x_3142_;
goto v_reusejp_3146_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v_fst_3139_);
lean_ctor_set(v_reuseFailAlloc_3149_, 1, v_snd_3140_);
v___x_3147_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3146_;
}
v_reusejp_3146_:
{
lean_object* v___x_3148_; 
v___x_3148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3147_);
return v___x_3148_;
}
}
else
{
lean_object* v___x_3150_; lean_object* v_snd_3151_; lean_object* v_fst_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3197_; 
lean_del_object(v___x_3142_);
v___x_3150_ = lean_array_get(v___x_3130_, v___y_3129_, v_snd_3140_);
v_snd_3151_ = lean_ctor_get(v___x_3150_, 1);
v_fst_3152_ = lean_ctor_get(v___x_3150_, 0);
v_isSharedCheck_3197_ = !lean_is_exclusive(v___x_3150_);
if (v_isSharedCheck_3197_ == 0)
{
v___x_3154_ = v___x_3150_;
v_isShared_3155_ = v_isSharedCheck_3197_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_snd_3151_);
lean_inc(v_fst_3152_);
lean_dec(v___x_3150_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3197_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v_fst_3156_; lean_object* v_snd_3157_; lean_object* v___x_3158_; uint8_t v___x_3165_; 
v_fst_3156_ = lean_ctor_get(v_snd_3151_, 0);
v_snd_3157_ = lean_ctor_get(v_snd_3151_, 1);
v___x_3158_ = lean_nat_add(v_snd_3140_, v___x_3131_);
lean_dec(v_snd_3140_);
v___x_3165_ = lean_nat_dec_eq(v___x_3158_, v___x_3144_);
if (v___x_3165_ == 0)
{
lean_object* v___x_3166_; lean_object* v_fst_3167_; lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3195_; 
v___x_3166_ = lean_array_get(v___x_3130_, v___y_3129_, v___x_3158_);
v_fst_3167_ = lean_ctor_get(v___x_3166_, 0);
v_isSharedCheck_3195_ = !lean_is_exclusive(v___x_3166_);
if (v_isSharedCheck_3195_ == 0)
{
lean_object* v_unused_3196_; 
v_unused_3196_ = lean_ctor_get(v___x_3166_, 1);
lean_dec(v_unused_3196_);
v___x_3169_ = v___x_3166_;
v_isShared_3170_ = v_isSharedCheck_3195_;
goto v_resetjp_3168_;
}
else
{
lean_inc(v_fst_3167_);
lean_dec(v___x_3166_);
v___x_3169_ = lean_box(0);
v_isShared_3170_ = v_isSharedCheck_3195_;
goto v_resetjp_3168_;
}
v_resetjp_3168_:
{
uint64_t v___x_3171_; uint64_t v___x_3172_; uint8_t v___x_3173_; 
v___x_3171_ = lean_unbox_uint64(v_fst_3167_);
lean_dec(v_fst_3167_);
v___x_3172_ = lean_unbox_uint64(v_fst_3152_);
v___x_3173_ = lean_uint64_dec_eq(v___x_3171_, v___x_3172_);
if (v___x_3173_ == 0)
{
lean_inc(v_snd_3157_);
lean_inc(v_fst_3156_);
lean_del_object(v___x_3169_);
lean_dec(v_fst_3152_);
lean_dec(v_snd_3151_);
lean_dec_ref(v___f_3136_);
lean_dec_ref(v___x_3135_);
lean_dec(v_total_3134_);
lean_dec_ref(v___x_3133_);
lean_dec(v___x_3131_);
lean_dec_ref(v___x_3130_);
lean_dec_ref(v___y_3129_);
goto v___jp_3159_;
}
else
{
lean_object* v___x_3174_; lean_object* v___f_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3180_; 
lean_del_object(v___x_3154_);
lean_dec(v_single_3132_);
v___x_3174_ = lean_box(v___x_3165_);
lean_inc(v___x_3131_);
v___f_3175_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6___boxed), 9, 8);
lean_closure_set(v___f_3175_, 0, v___x_3144_);
lean_closure_set(v___f_3175_, 1, v___x_3130_);
lean_closure_set(v___f_3175_, 2, v___y_3129_);
lean_closure_set(v___f_3175_, 3, v_fst_3152_);
lean_closure_set(v___f_3175_, 4, v___x_3131_);
lean_closure_set(v___f_3175_, 5, v___x_3133_);
lean_closure_set(v___f_3175_, 6, v_total_3134_);
lean_closure_set(v___f_3175_, 7, v___x_3174_);
v___x_3176_ = lean_mk_empty_array_with_capacity(v___x_3131_);
lean_dec(v___x_3131_);
lean_inc_ref(v___x_3176_);
v___x_3177_ = lean_array_push(v___x_3176_, v_snd_3151_);
v___x_3178_ = lean_array_push(v___x_3176_, v___x_3177_);
if (v_isShared_3170_ == 0)
{
lean_ctor_set(v___x_3169_, 1, v___x_3178_);
lean_ctor_set(v___x_3169_, 0, v___x_3158_);
v___x_3180_ = v___x_3169_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3194_; 
v_reuseFailAlloc_3194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3194_, 0, v___x_3158_);
lean_ctor_set(v_reuseFailAlloc_3194_, 1, v___x_3178_);
v___x_3180_ = v_reuseFailAlloc_3194_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
lean_object* v___x_3181_; lean_object* v_fst_3182_; lean_object* v_snd_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3193_; 
lean_inc_ref(v___x_3135_);
v___x_3181_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_3135_, v___f_3175_, v___x_3180_);
v_fst_3182_ = lean_ctor_get(v___x_3181_, 0);
v_snd_3183_ = lean_ctor_get(v___x_3181_, 1);
v_isSharedCheck_3193_ = !lean_is_exclusive(v___x_3181_);
if (v_isSharedCheck_3193_ == 0)
{
v___x_3185_ = v___x_3181_;
v_isShared_3186_ = v_isSharedCheck_3193_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_snd_3183_);
lean_inc(v_fst_3182_);
lean_dec(v___x_3181_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3193_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
size_t v_sz_3187_; lean_object* v___x_3188_; lean_object* v___x_3190_; 
v_sz_3187_ = lean_array_size(v_snd_3183_);
v___x_3188_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3135_, v_snd_3183_, v___f_3136_, v_sz_3187_, v___x_3137_, v_fst_3139_);
if (v_isShared_3186_ == 0)
{
lean_ctor_set(v___x_3185_, 1, v_fst_3182_);
lean_ctor_set(v___x_3185_, 0, v___x_3188_);
v___x_3190_ = v___x_3185_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3192_; 
v_reuseFailAlloc_3192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3192_, 0, v___x_3188_);
lean_ctor_set(v_reuseFailAlloc_3192_, 1, v_fst_3182_);
v___x_3190_ = v_reuseFailAlloc_3192_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
lean_object* v___x_3191_; 
v___x_3191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3191_, 0, v___x_3190_);
return v___x_3191_;
}
}
}
}
}
}
else
{
lean_inc(v_snd_3157_);
lean_inc(v_fst_3156_);
lean_dec(v_fst_3152_);
lean_dec(v_snd_3151_);
lean_dec_ref(v___f_3136_);
lean_dec_ref(v___x_3135_);
lean_dec(v_total_3134_);
lean_dec_ref(v___x_3133_);
lean_dec(v___x_3131_);
lean_dec_ref(v___x_3130_);
lean_dec_ref(v___y_3129_);
goto v___jp_3159_;
}
v___jp_3159_:
{
lean_object* v___x_3160_; lean_object* v___x_3162_; 
v___x_3160_ = lean_apply_3(v_single_3132_, v_fst_3139_, v_fst_3156_, v_snd_3157_);
if (v_isShared_3155_ == 0)
{
lean_ctor_set(v___x_3154_, 1, v___x_3158_);
lean_ctor_set(v___x_3154_, 0, v___x_3160_);
v___x_3162_ = v___x_3154_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v___x_3160_);
lean_ctor_set(v_reuseFailAlloc_3164_, 1, v___x_3158_);
v___x_3162_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
lean_object* v___x_3163_; 
v___x_3163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3163_, 0, v___x_3162_);
return v___x_3163_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7___boxed(lean_object* v___y_3199_, lean_object* v___x_3200_, lean_object* v___x_3201_, lean_object* v_single_3202_, lean_object* v___x_3203_, lean_object* v_total_3204_, lean_object* v___x_3205_, lean_object* v___f_3206_, lean_object* v___x_3207_, lean_object* v_b_3208_){
_start:
{
size_t v___x_3430__boxed_3209_; lean_object* v_res_3210_; 
v___x_3430__boxed_3209_ = lean_unbox_usize(v___x_3207_);
lean_dec(v___x_3207_);
v_res_3210_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7(v___y_3199_, v___x_3200_, v___x_3201_, v_single_3202_, v___x_3203_, v_total_3204_, v___x_3205_, v___f_3206_, v___x_3430__boxed_3209_, v_b_3208_);
return v_res_3210_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(lean_object* v_x_3211_, lean_object* v_x_3212_){
_start:
{
lean_object* v_snd_3213_; lean_object* v_snd_3214_; lean_object* v_fst_3215_; lean_object* v_fst_3216_; lean_object* v_fst_3217_; lean_object* v_fst_3218_; uint64_t v___x_3219_; uint64_t v___x_3220_; uint8_t v___x_3221_; 
v_snd_3213_ = lean_ctor_get(v_x_3211_, 1);
v_snd_3214_ = lean_ctor_get(v_x_3212_, 1);
v_fst_3215_ = lean_ctor_get(v_x_3211_, 0);
v_fst_3216_ = lean_ctor_get(v_snd_3213_, 0);
v_fst_3217_ = lean_ctor_get(v_x_3212_, 0);
v_fst_3218_ = lean_ctor_get(v_snd_3214_, 0);
v___x_3219_ = lean_unbox_uint64(v_fst_3215_);
v___x_3220_ = lean_unbox_uint64(v_fst_3217_);
v___x_3221_ = lean_uint64_dec_lt(v___x_3219_, v___x_3220_);
if (v___x_3221_ == 0)
{
uint64_t v___x_3222_; uint64_t v___x_3223_; uint8_t v___x_3224_; 
v___x_3222_ = lean_unbox_uint64(v_fst_3215_);
v___x_3223_ = lean_unbox_uint64(v_fst_3217_);
v___x_3224_ = lean_uint64_dec_eq(v___x_3222_, v___x_3223_);
if (v___x_3224_ == 0)
{
return v___x_3224_;
}
else
{
uint8_t v___x_3225_; 
v___x_3225_ = lean_nat_dec_lt(v_fst_3216_, v_fst_3218_);
return v___x_3225_;
}
}
else
{
return v___x_3221_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8___boxed(lean_object* v_x_3226_, lean_object* v_x_3227_){
_start:
{
uint8_t v_res_3228_; lean_object* v_r_3229_; 
v_res_3228_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(v_x_3226_, v_x_3227_);
lean_dec_ref(v_x_3227_);
lean_dec_ref(v_x_3226_);
v_r_3229_ = lean_box(v_res_3228_);
return v_r_3229_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2(void){
_start:
{
lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3233_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
v___x_3234_ = lean_unsigned_to_nat(0u);
v___x_3235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3235_, 0, v___x_3234_);
lean_ctor_set(v___x_3235_, 1, v___x_3233_);
return v___x_3235_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3(void){
_start:
{
lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; 
v___x_3238_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3239_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3___boxed__const__1));
v___x_3240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3239_);
lean_ctor_set(v___x_3240_, 1, v___x_3238_);
return v___x_3240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg(lean_object* v_cands_3244_, lean_object* v_init_3245_, lean_object* v_single_3246_, lean_object* v_multi_3247_){
_start:
{
lean_object* v___f_3248_; lean_object* v___x_3249_; lean_object* v___f_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; size_t v_sz_3254_; size_t v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___f_3260_; lean_object* v___y_3262_; lean_object* v___x_3268_; uint8_t v___x_3269_; 
v___f_3248_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0));
v___x_3249_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__9));
v___f_3250_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1));
v___x_3251_ = lean_unsigned_to_nat(0u);
v___x_3252_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3253_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v_sz_3254_ = lean_array_size(v_cands_3244_);
v___x_3255_ = ((size_t)0ULL);
lean_inc_ref(v_cands_3244_);
v___x_3256_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3249_, v_cands_3244_, v___f_3248_, v_sz_3254_, v___x_3255_, v___x_3251_);
v___x_3257_ = lean_mk_empty_array_with_capacity(v___x_3256_);
lean_dec(v___x_3256_);
v___x_3258_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3249_, v_cands_3244_, v___f_3250_, v_sz_3254_, v___x_3255_, v___x_3257_);
v___x_3259_ = lean_unsigned_to_nat(1u);
lean_inc(v_single_3246_);
v___f_3260_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed), 8, 5);
lean_closure_set(v___f_3260_, 0, v___x_3259_);
lean_closure_set(v___f_3260_, 1, v_multi_3247_);
lean_closure_set(v___f_3260_, 2, v___x_3252_);
lean_closure_set(v___f_3260_, 3, v___x_3251_);
lean_closure_set(v___f_3260_, 4, v_single_3246_);
v___x_3268_ = lean_array_get_size(v___x_3258_);
v___x_3269_ = lean_nat_dec_eq(v___x_3268_, v___x_3251_);
if (v___x_3269_ == 0)
{
lean_object* v___f_3270_; lean_object* v___y_3272_; lean_object* v___y_3273_; lean_object* v___x_3275_; lean_object* v___y_3277_; uint8_t v___x_3279_; 
v___f_3270_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4));
v___x_3275_ = lean_nat_sub(v___x_3268_, v___x_3259_);
v___x_3279_ = lean_nat_dec_le(v___x_3251_, v___x_3275_);
if (v___x_3279_ == 0)
{
lean_inc(v___x_3275_);
v___y_3277_ = v___x_3275_;
goto v___jp_3276_;
}
else
{
v___y_3277_ = v___x_3251_;
goto v___jp_3276_;
}
v___jp_3271_:
{
lean_object* v___x_3274_; 
v___x_3274_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_3270_, v___x_3268_, v___x_3258_, v___y_3272_, v___y_3273_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_3273_);
v___y_3262_ = v___x_3274_;
goto v___jp_3261_;
}
v___jp_3276_:
{
uint8_t v___x_3278_; 
v___x_3278_ = lean_nat_dec_le(v___y_3277_, v___x_3275_);
if (v___x_3278_ == 0)
{
lean_dec(v___x_3275_);
lean_inc(v___y_3277_);
v___y_3272_ = v___y_3277_;
v___y_3273_ = v___y_3277_;
goto v___jp_3271_;
}
else
{
v___y_3272_ = v___y_3277_;
v___y_3273_ = v___x_3275_;
goto v___jp_3271_;
}
}
}
else
{
v___y_3262_ = v___x_3258_;
goto v___jp_3261_;
}
v___jp_3261_:
{
lean_object* v___x_3263_; lean_object* v___f_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v_fst_3267_; 
v___x_3263_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___boxed__const__1));
v___f_3264_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7___boxed), 10, 9);
lean_closure_set(v___f_3264_, 0, v___y_3262_);
lean_closure_set(v___f_3264_, 1, v___x_3253_);
lean_closure_set(v___f_3264_, 2, v___x_3259_);
lean_closure_set(v___f_3264_, 3, v_single_3246_);
lean_closure_set(v___f_3264_, 4, v___x_3252_);
lean_closure_set(v___f_3264_, 5, v___x_3251_);
lean_closure_set(v___f_3264_, 6, v___x_3249_);
lean_closure_set(v___f_3264_, 7, v___f_3260_);
lean_closure_set(v___f_3264_, 8, v___x_3263_);
v___x_3265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3265_, 0, v_init_3245_);
lean_ctor_set(v___x_3265_, 1, v___x_3251_);
v___x_3266_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_3249_, v___f_3264_, v___x_3265_);
v_fst_3267_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_fst_3267_);
lean_dec(v___x_3266_);
return v_fst_3267_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups(lean_object* v_00_u03b1_3280_, lean_object* v_00_u03c3_3281_, lean_object* v_cands_3282_, lean_object* v_init_3283_, lean_object* v_single_3284_, lean_object* v_multi_3285_){
_start:
{
lean_object* v___f_3286_; lean_object* v___x_3287_; lean_object* v___f_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; size_t v_sz_3292_; size_t v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___f_3298_; lean_object* v___y_3300_; lean_object* v___x_3306_; uint8_t v___x_3307_; 
v___f_3286_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0));
v___x_3287_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__9));
v___f_3288_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1));
v___x_3289_ = lean_unsigned_to_nat(0u);
v___x_3290_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3291_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v_sz_3292_ = lean_array_size(v_cands_3282_);
v___x_3293_ = ((size_t)0ULL);
lean_inc_ref(v_cands_3282_);
v___x_3294_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3287_, v_cands_3282_, v___f_3286_, v_sz_3292_, v___x_3293_, v___x_3289_);
v___x_3295_ = lean_mk_empty_array_with_capacity(v___x_3294_);
lean_dec(v___x_3294_);
v___x_3296_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3287_, v_cands_3282_, v___f_3288_, v_sz_3292_, v___x_3293_, v___x_3295_);
v___x_3297_ = lean_unsigned_to_nat(1u);
lean_inc(v_single_3284_);
v___f_3298_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed), 8, 5);
lean_closure_set(v___f_3298_, 0, v___x_3297_);
lean_closure_set(v___f_3298_, 1, v_multi_3285_);
lean_closure_set(v___f_3298_, 2, v___x_3290_);
lean_closure_set(v___f_3298_, 3, v___x_3289_);
lean_closure_set(v___f_3298_, 4, v_single_3284_);
v___x_3306_ = lean_array_get_size(v___x_3296_);
v___x_3307_ = lean_nat_dec_eq(v___x_3306_, v___x_3289_);
if (v___x_3307_ == 0)
{
lean_object* v___f_3308_; lean_object* v___y_3310_; lean_object* v___y_3311_; lean_object* v___x_3313_; lean_object* v___y_3315_; uint8_t v___x_3317_; 
v___f_3308_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4));
v___x_3313_ = lean_nat_sub(v___x_3306_, v___x_3297_);
v___x_3317_ = lean_nat_dec_le(v___x_3289_, v___x_3313_);
if (v___x_3317_ == 0)
{
lean_inc(v___x_3313_);
v___y_3315_ = v___x_3313_;
goto v___jp_3314_;
}
else
{
v___y_3315_ = v___x_3289_;
goto v___jp_3314_;
}
v___jp_3309_:
{
lean_object* v___x_3312_; 
v___x_3312_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_3308_, v___x_3306_, v___x_3296_, v___y_3310_, v___y_3311_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_3311_);
v___y_3300_ = v___x_3312_;
goto v___jp_3299_;
}
v___jp_3314_:
{
uint8_t v___x_3316_; 
v___x_3316_ = lean_nat_dec_le(v___y_3315_, v___x_3313_);
if (v___x_3316_ == 0)
{
lean_dec(v___x_3313_);
lean_inc(v___y_3315_);
v___y_3310_ = v___y_3315_;
v___y_3311_ = v___y_3315_;
goto v___jp_3309_;
}
else
{
v___y_3310_ = v___y_3315_;
v___y_3311_ = v___x_3313_;
goto v___jp_3309_;
}
}
}
else
{
v___y_3300_ = v___x_3296_;
goto v___jp_3299_;
}
v___jp_3299_:
{
lean_object* v___x_3301_; lean_object* v___f_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v_fst_3305_; 
v___x_3301_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___boxed__const__1));
v___f_3302_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7___boxed), 10, 9);
lean_closure_set(v___f_3302_, 0, v___y_3300_);
lean_closure_set(v___f_3302_, 1, v___x_3291_);
lean_closure_set(v___f_3302_, 2, v___x_3297_);
lean_closure_set(v___f_3302_, 3, v_single_3284_);
lean_closure_set(v___f_3302_, 4, v___x_3290_);
lean_closure_set(v___f_3302_, 5, v___x_3289_);
lean_closure_set(v___f_3302_, 6, v___x_3287_);
lean_closure_set(v___f_3302_, 7, v___f_3298_);
lean_closure_set(v___f_3302_, 8, v___x_3301_);
v___x_3303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3303_, 0, v_init_3283_);
lean_ctor_set(v___x_3303_, 1, v___x_3289_);
v___x_3304_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_3287_, v___f_3302_, v___x_3303_);
v_fst_3305_ = lean_ctor_get(v___x_3304_, 0);
lean_inc(v_fst_3305_);
lean_dec(v___x_3304_);
return v_fst_3305_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(lean_object* v_as_3318_, size_t v_i_3319_, size_t v_stop_3320_, lean_object* v_b_3321_){
_start:
{
lean_object* v___y_3323_; uint8_t v___x_3327_; 
v___x_3327_ = lean_usize_dec_eq(v_i_3319_, v_stop_3320_);
if (v___x_3327_ == 0)
{
lean_object* v___x_3328_; lean_object* v_snd_3329_; lean_object* v_val_x3f_3330_; 
v___x_3328_ = lean_array_uget(v_as_3318_, v_i_3319_);
v_snd_3329_ = lean_ctor_get(v___x_3328_, 1);
v_val_x3f_3330_ = lean_ctor_get(v_snd_3329_, 1);
lean_inc(v_val_x3f_3330_);
if (lean_obj_tag(v_val_x3f_3330_) == 0)
{
lean_dec(v___x_3328_);
v___y_3323_ = v_b_3321_;
goto v___jp_3322_;
}
else
{
lean_object* v_fst_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3340_; 
v_fst_3331_ = lean_ctor_get(v___x_3328_, 0);
v_isSharedCheck_3340_ = !lean_is_exclusive(v___x_3328_);
if (v_isSharedCheck_3340_ == 0)
{
lean_object* v_unused_3341_; 
v_unused_3341_ = lean_ctor_get(v___x_3328_, 1);
lean_dec(v_unused_3341_);
v___x_3333_ = v___x_3328_;
v_isShared_3334_ = v_isSharedCheck_3340_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_fst_3331_);
lean_dec(v___x_3328_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3340_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v_val_3335_; lean_object* v___x_3337_; 
v_val_3335_ = lean_ctor_get(v_val_x3f_3330_, 0);
lean_inc(v_val_3335_);
lean_dec_ref_known(v_val_x3f_3330_, 1);
if (v_isShared_3334_ == 0)
{
lean_ctor_set(v___x_3333_, 1, v_fst_3331_);
lean_ctor_set(v___x_3333_, 0, v_val_3335_);
v___x_3337_ = v___x_3333_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v_val_3335_);
lean_ctor_set(v_reuseFailAlloc_3339_, 1, v_fst_3331_);
v___x_3337_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
lean_object* v___x_3338_; 
v___x_3338_ = lean_array_push(v_b_3321_, v___x_3337_);
v___y_3323_ = v___x_3338_;
goto v___jp_3322_;
}
}
}
}
else
{
return v_b_3321_;
}
v___jp_3322_:
{
size_t v___x_3324_; size_t v___x_3325_; 
v___x_3324_ = ((size_t)1ULL);
v___x_3325_ = lean_usize_add(v_i_3319_, v___x_3324_);
v_i_3319_ = v___x_3325_;
v_b_3321_ = v___y_3323_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg___boxed(lean_object* v_as_3342_, lean_object* v_i_3343_, lean_object* v_stop_3344_, lean_object* v_b_3345_){
_start:
{
size_t v_i_boxed_3346_; size_t v_stop_boxed_3347_; lean_object* v_res_3348_; 
v_i_boxed_3346_ = lean_unbox_usize(v_i_3343_);
lean_dec(v_i_3343_);
v_stop_boxed_3347_ = lean_unbox_usize(v_stop_3344_);
lean_dec(v_stop_3344_);
v_res_3348_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(v_as_3342_, v_i_boxed_3346_, v_stop_boxed_3347_, v_b_3345_);
lean_dec_ref(v_as_3342_);
return v_res_3348_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(lean_object* v_as_3351_, lean_object* v_start_3352_, lean_object* v_stop_3353_){
_start:
{
lean_object* v___x_3354_; uint8_t v___x_3355_; 
v___x_3354_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg___closed__0));
v___x_3355_ = lean_nat_dec_lt(v_start_3352_, v_stop_3353_);
if (v___x_3355_ == 0)
{
return v___x_3354_;
}
else
{
lean_object* v___x_3356_; uint8_t v___x_3357_; 
v___x_3356_ = lean_array_get_size(v_as_3351_);
v___x_3357_ = lean_nat_dec_le(v_stop_3353_, v___x_3356_);
if (v___x_3357_ == 0)
{
uint8_t v___x_3358_; 
v___x_3358_ = lean_nat_dec_lt(v_start_3352_, v___x_3356_);
if (v___x_3358_ == 0)
{
return v___x_3354_;
}
else
{
size_t v___x_3359_; size_t v___x_3360_; lean_object* v___x_3361_; 
v___x_3359_ = lean_usize_of_nat(v_start_3352_);
v___x_3360_ = lean_usize_of_nat(v___x_3356_);
v___x_3361_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(v_as_3351_, v___x_3359_, v___x_3360_, v___x_3354_);
return v___x_3361_;
}
}
else
{
size_t v___x_3362_; size_t v___x_3363_; lean_object* v___x_3364_; 
v___x_3362_ = lean_usize_of_nat(v_start_3352_);
v___x_3363_ = lean_usize_of_nat(v_stop_3353_);
v___x_3364_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(v_as_3351_, v___x_3362_, v___x_3363_, v___x_3354_);
return v___x_3364_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg___boxed(lean_object* v_as_3365_, lean_object* v_start_3366_, lean_object* v_stop_3367_){
_start:
{
lean_object* v_res_3368_; 
v_res_3368_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_as_3365_, v_start_3366_, v_stop_3367_);
lean_dec(v_stop_3367_);
lean_dec(v_start_3366_);
lean_dec_ref(v_as_3365_);
return v_res_3368_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(lean_object* v_fst_3369_, lean_object* v_as_3370_, size_t v_sz_3371_, size_t v_i_3372_, lean_object* v_b_3373_){
_start:
{
uint8_t v___x_3374_; 
v___x_3374_ = lean_usize_dec_lt(v_i_3372_, v_sz_3371_);
if (v___x_3374_ == 0)
{
lean_dec(v_fst_3369_);
return v_b_3373_;
}
else
{
lean_object* v_a_3375_; uint64_t v___y_3377_; lean_object* v_key_3385_; 
v_a_3375_ = lean_array_uget_borrowed(v_as_3370_, v_i_3372_);
v_key_3385_ = lean_ctor_get(v_a_3375_, 0);
if (lean_obj_tag(v_key_3385_) == 0)
{
uint64_t v___x_3386_; 
v___x_3386_ = 1723ULL;
v___y_3377_ = v___x_3386_;
goto v___jp_3376_;
}
else
{
uint64_t v_hash_3387_; 
v_hash_3387_ = lean_ctor_get_uint64(v_key_3385_, sizeof(void*)*2);
v___y_3377_ = v_hash_3387_;
goto v___jp_3376_;
}
v___jp_3376_:
{
lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; size_t v___x_3382_; size_t v___x_3383_; 
lean_inc(v_a_3375_);
lean_inc(v_fst_3369_);
v___x_3378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3378_, 0, v_fst_3369_);
lean_ctor_set(v___x_3378_, 1, v_a_3375_);
v___x_3379_ = lean_box_uint64(v___y_3377_);
v___x_3380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3380_, 0, v___x_3379_);
lean_ctor_set(v___x_3380_, 1, v___x_3378_);
v___x_3381_ = lean_array_push(v_b_3373_, v___x_3380_);
v___x_3382_ = ((size_t)1ULL);
v___x_3383_ = lean_usize_add(v_i_3372_, v___x_3382_);
v_i_3372_ = v___x_3383_;
v_b_3373_ = v___x_3381_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg___boxed(lean_object* v_fst_3388_, lean_object* v_as_3389_, lean_object* v_sz_3390_, lean_object* v_i_3391_, lean_object* v_b_3392_){
_start:
{
size_t v_sz_boxed_3393_; size_t v_i_boxed_3394_; lean_object* v_res_3395_; 
v_sz_boxed_3393_ = lean_unbox_usize(v_sz_3390_);
lean_dec(v_sz_3390_);
v_i_boxed_3394_ = lean_unbox_usize(v_i_3391_);
lean_dec(v_i_3391_);
v_res_3395_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_fst_3388_, v_as_3389_, v_sz_boxed_3393_, v_i_boxed_3394_, v_b_3392_);
lean_dec_ref(v_as_3389_);
return v_res_3395_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(lean_object* v_as_3396_, size_t v_sz_3397_, size_t v_i_3398_, lean_object* v_b_3399_){
_start:
{
uint8_t v___x_3400_; 
v___x_3400_ = lean_usize_dec_lt(v_i_3398_, v_sz_3397_);
if (v___x_3400_ == 0)
{
return v_b_3399_;
}
else
{
lean_object* v_a_3401_; lean_object* v_snd_3402_; lean_object* v_fst_3403_; lean_object* v_children_3404_; size_t v_sz_3405_; size_t v___x_3406_; lean_object* v___x_3407_; size_t v___x_3408_; size_t v___x_3409_; 
v_a_3401_ = lean_array_uget_borrowed(v_as_3396_, v_i_3398_);
v_snd_3402_ = lean_ctor_get(v_a_3401_, 1);
v_fst_3403_ = lean_ctor_get(v_a_3401_, 0);
v_children_3404_ = lean_ctor_get(v_snd_3402_, 2);
v_sz_3405_ = lean_array_size(v_children_3404_);
v___x_3406_ = ((size_t)0ULL);
lean_inc(v_fst_3403_);
v___x_3407_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_fst_3403_, v_children_3404_, v_sz_3405_, v___x_3406_, v_b_3399_);
v___x_3408_ = ((size_t)1ULL);
v___x_3409_ = lean_usize_add(v_i_3398_, v___x_3408_);
v_i_3398_ = v___x_3409_;
v_b_3399_ = v___x_3407_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg___boxed(lean_object* v_as_3411_, lean_object* v_sz_3412_, lean_object* v_i_3413_, lean_object* v_b_3414_){
_start:
{
size_t v_sz_boxed_3415_; size_t v_i_boxed_3416_; lean_object* v_res_3417_; 
v_sz_boxed_3415_ = lean_unbox_usize(v_sz_3412_);
lean_dec(v_sz_3412_);
v_i_boxed_3416_ = lean_unbox_usize(v_i_3413_);
lean_dec(v_i_3413_);
v_res_3417_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_as_3411_, v_sz_boxed_3415_, v_i_boxed_3416_, v_b_3414_);
lean_dec_ref(v_as_3411_);
return v_res_3417_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(lean_object* v_covered_3418_, lean_object* v_as_3419_, size_t v_sz_3420_, size_t v_i_3421_, uint64_t v_b_3422_){
_start:
{
uint8_t v___x_3423_; 
v___x_3423_ = lean_usize_dec_lt(v_i_3421_, v_sz_3420_);
if (v___x_3423_ == 0)
{
return v_b_3422_;
}
else
{
lean_object* v_a_3424_; lean_object* v_fst_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; uint64_t v___x_3428_; uint64_t v___x_3429_; size_t v___x_3430_; size_t v___x_3431_; 
v_a_3424_ = lean_array_uget_borrowed(v_as_3419_, v_i_3421_);
v_fst_3425_ = lean_ctor_get(v_a_3424_, 0);
v___x_3426_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3___boxed__const__1));
v___x_3427_ = lean_array_get_borrowed(v___x_3426_, v_covered_3418_, v_fst_3425_);
v___x_3428_ = lean_unbox_uint64(v___x_3427_);
v___x_3429_ = lean_uint64_land(v_b_3422_, v___x_3428_);
v___x_3430_ = ((size_t)1ULL);
v___x_3431_ = lean_usize_add(v_i_3421_, v___x_3430_);
v_i_3421_ = v___x_3431_;
v_b_3422_ = v___x_3429_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg___boxed(lean_object* v_covered_3433_, lean_object* v_as_3434_, lean_object* v_sz_3435_, lean_object* v_i_3436_, lean_object* v_b_3437_){
_start:
{
size_t v_sz_boxed_3438_; size_t v_i_boxed_3439_; uint64_t v_b_boxed_3440_; uint64_t v_res_3441_; lean_object* v_r_3442_; 
v_sz_boxed_3438_ = lean_unbox_usize(v_sz_3435_);
lean_dec(v_sz_3435_);
v_i_boxed_3439_ = lean_unbox_usize(v_i_3436_);
lean_dec(v_i_3436_);
v_b_boxed_3440_ = lean_unbox_uint64(v_b_3437_);
lean_dec_ref(v_b_3437_);
v_res_3441_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(v_covered_3433_, v_as_3434_, v_sz_boxed_3438_, v_i_boxed_3439_, v_b_boxed_3440_);
lean_dec_ref(v_as_3434_);
lean_dec_ref(v_covered_3433_);
v_r_3442_ = lean_box_uint64(v_res_3441_);
return v_r_3442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(lean_object* v_fst_3443_, lean_object* v___x_3444_, lean_object* v_____r_3445_, lean_object* v_groups_3446_){
_start:
{
lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; 
v___x_3447_ = lean_nat_add(v_fst_3443_, v___x_3444_);
v___x_3448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3447_);
lean_ctor_set(v___x_3448_, 1, v_groups_3446_);
v___x_3449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3449_, 0, v___x_3448_);
return v___x_3449_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0___boxed(lean_object* v_fst_3450_, lean_object* v___x_3451_, lean_object* v_____r_3452_, lean_object* v_groups_3453_){
_start:
{
lean_object* v_res_3454_; 
v_res_3454_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_3450_, v___x_3451_, v_____r_3452_, v_groups_3453_);
lean_dec(v___x_3451_);
lean_dec(v_fst_3450_);
return v_res_3454_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(lean_object* v_snd_3455_, uint64_t v___x_3456_, uint64_t v_fst_3457_, lean_object* v___x_3458_, lean_object* v___x_3459_, lean_object* v_as_3460_, lean_object* v_j_3461_){
_start:
{
uint8_t v___y_3463_; lean_object* v___x_3468_; uint8_t v___x_3469_; 
v___x_3468_ = lean_array_get_size(v_as_3460_);
v___x_3469_ = lean_nat_dec_lt(v_j_3461_, v___x_3468_);
if (v___x_3469_ == 0)
{
lean_object* v___x_3470_; 
lean_dec(v_j_3461_);
v___x_3470_ = lean_box(0);
return v___x_3470_;
}
else
{
lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v_snd_3475_; lean_object* v_key_3476_; lean_object* v_key_3477_; uint8_t v___x_3478_; 
v___x_3471_ = lean_unsigned_to_nat(0u);
v___x_3472_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3473_ = lean_array_fget_borrowed(v_as_3460_, v_j_3461_);
v___x_3474_ = lean_array_get_borrowed(v___x_3472_, v___x_3473_, v___x_3471_);
v_snd_3475_ = lean_ctor_get(v___x_3474_, 1);
v_key_3476_ = lean_ctor_get(v_snd_3475_, 0);
v_key_3477_ = lean_ctor_get(v_snd_3455_, 0);
v___x_3478_ = lean_nat_dec_eq(v___x_3458_, v___x_3459_);
switch(lean_obj_tag(v_key_3476_))
{
case 0:
{
if (lean_obj_tag(v_key_3477_) == 0)
{
uint8_t v___x_3479_; 
v___x_3479_ = lean_uint64_dec_eq(v___x_3456_, v_fst_3457_);
v___y_3463_ = v___x_3479_;
goto v___jp_3462_;
}
else
{
v___y_3463_ = v___x_3478_;
goto v___jp_3462_;
}
}
case 1:
{
if (lean_obj_tag(v_key_3477_) == 1)
{
lean_object* v_str_3480_; lean_object* v_str_3481_; uint8_t v___x_3482_; 
v_str_3480_ = lean_ctor_get(v_key_3476_, 1);
v_str_3481_ = lean_ctor_get(v_key_3477_, 1);
v___x_3482_ = lean_string_dec_eq(v_str_3480_, v_str_3481_);
v___y_3463_ = v___x_3482_;
goto v___jp_3462_;
}
else
{
v___y_3463_ = v___x_3478_;
goto v___jp_3462_;
}
}
default: 
{
if (lean_obj_tag(v_key_3477_) == 2)
{
lean_object* v_i_3483_; lean_object* v_i_3484_; uint8_t v___x_3485_; 
v_i_3483_ = lean_ctor_get(v_key_3476_, 1);
v_i_3484_ = lean_ctor_get(v_key_3477_, 1);
v___x_3485_ = lean_nat_dec_eq(v_i_3483_, v_i_3484_);
v___y_3463_ = v___x_3485_;
goto v___jp_3462_;
}
else
{
v___y_3463_ = v___x_3478_;
goto v___jp_3462_;
}
}
}
}
v___jp_3462_:
{
if (v___y_3463_ == 0)
{
lean_object* v___x_3464_; lean_object* v___x_3465_; 
v___x_3464_ = lean_unsigned_to_nat(1u);
v___x_3465_ = lean_nat_add(v_j_3461_, v___x_3464_);
lean_dec(v_j_3461_);
v_j_3461_ = v___x_3465_;
goto _start;
}
else
{
lean_object* v___x_3467_; 
v___x_3467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3467_, 0, v_j_3461_);
return v___x_3467_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg___boxed(lean_object* v_snd_3486_, lean_object* v___x_3487_, lean_object* v_fst_3488_, lean_object* v___x_3489_, lean_object* v___x_3490_, lean_object* v_as_3491_, lean_object* v_j_3492_){
_start:
{
uint64_t v___x_3060__boxed_3493_; uint64_t v_fst_3061__boxed_3494_; lean_object* v_res_3495_; 
v___x_3060__boxed_3493_ = lean_unbox_uint64(v___x_3487_);
lean_dec_ref(v___x_3487_);
v_fst_3061__boxed_3494_ = lean_unbox_uint64(v_fst_3488_);
lean_dec_ref(v_fst_3488_);
v_res_3495_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_snd_3486_, v___x_3060__boxed_3493_, v_fst_3061__boxed_3494_, v___x_3489_, v___x_3490_, v_as_3491_, v_j_3492_);
lean_dec_ref(v_as_3491_);
lean_dec(v___x_3490_);
lean_dec(v___x_3489_);
lean_dec_ref(v_snd_3486_);
return v_res_3495_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(lean_object* v___x_3496_, lean_object* v___y_3497_, uint64_t v_fst_3498_, lean_object* v___x_3499_, lean_object* v_a_3500_){
_start:
{
lean_object* v___y_3502_; lean_object* v_fst_3506_; lean_object* v_snd_3507_; lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3550_; 
v_fst_3506_ = lean_ctor_get(v_a_3500_, 0);
v_snd_3507_ = lean_ctor_get(v_a_3500_, 1);
v_isSharedCheck_3550_ = !lean_is_exclusive(v_a_3500_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3509_ = v_a_3500_;
v_isShared_3510_ = v_isSharedCheck_3550_;
goto v_resetjp_3508_;
}
else
{
lean_inc(v_snd_3507_);
lean_inc(v_fst_3506_);
lean_dec(v_a_3500_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3550_;
goto v_resetjp_3508_;
}
v___jp_3501_:
{
if (lean_obj_tag(v___y_3502_) == 0)
{
lean_object* v_a_3503_; 
v_a_3503_ = lean_ctor_get(v___y_3502_, 0);
lean_inc(v_a_3503_);
lean_dec_ref_known(v___y_3502_, 1);
return v_a_3503_;
}
else
{
lean_object* v_a_3504_; 
v_a_3504_ = lean_ctor_get(v___y_3502_, 0);
lean_inc(v_a_3504_);
lean_dec_ref_known(v___y_3502_, 1);
v_a_3500_ = v_a_3504_;
goto _start;
}
}
v_resetjp_3508_:
{
uint8_t v___x_3511_; 
v___x_3511_ = lean_nat_dec_lt(v_fst_3506_, v___x_3496_);
if (v___x_3511_ == 0)
{
lean_object* v___x_3513_; 
if (v_isShared_3510_ == 0)
{
v___x_3513_ = v___x_3509_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v_fst_3506_);
lean_ctor_set(v_reuseFailAlloc_3514_, 1, v_snd_3507_);
v___x_3513_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
return v___x_3513_;
}
}
else
{
lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v_fst_3518_; lean_object* v_snd_3519_; lean_object* v___x_3521_; uint8_t v_isShared_3522_; uint8_t v_isSharedCheck_3549_; 
lean_del_object(v___x_3509_);
v___x_3515_ = lean_unsigned_to_nat(0u);
v___x_3516_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v___x_3517_ = lean_array_get(v___x_3516_, v___y_3497_, v_fst_3506_);
v_fst_3518_ = lean_ctor_get(v___x_3517_, 0);
v_snd_3519_ = lean_ctor_get(v___x_3517_, 1);
v_isSharedCheck_3549_ = !lean_is_exclusive(v___x_3517_);
if (v_isSharedCheck_3549_ == 0)
{
v___x_3521_ = v___x_3517_;
v_isShared_3522_ = v_isSharedCheck_3549_;
goto v_resetjp_3520_;
}
else
{
lean_inc(v_snd_3519_);
lean_inc(v_fst_3518_);
lean_dec(v___x_3517_);
v___x_3521_ = lean_box(0);
v_isShared_3522_ = v_isSharedCheck_3549_;
goto v_resetjp_3520_;
}
v_resetjp_3520_:
{
uint64_t v___x_3523_; uint8_t v___x_3524_; 
v___x_3523_ = lean_unbox_uint64(v_fst_3518_);
v___x_3524_ = lean_uint64_dec_eq(v___x_3523_, v_fst_3498_);
if (v___x_3524_ == 0)
{
lean_object* v___x_3526_; 
lean_dec(v_snd_3519_);
lean_dec(v_fst_3518_);
if (v_isShared_3522_ == 0)
{
lean_ctor_set(v___x_3521_, 1, v_snd_3507_);
lean_ctor_set(v___x_3521_, 0, v_fst_3506_);
v___x_3526_ = v___x_3521_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_fst_3506_);
lean_ctor_set(v_reuseFailAlloc_3527_, 1, v_snd_3507_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
return v___x_3526_;
}
}
else
{
lean_object* v_snd_3528_; lean_object* v___x_3529_; lean_object* v___y_3531_; uint64_t v___x_3534_; lean_object* v___x_3535_; 
lean_del_object(v___x_3521_);
v_snd_3528_ = lean_ctor_get(v_snd_3519_, 1);
v___x_3529_ = lean_unsigned_to_nat(1u);
v___x_3534_ = lean_unbox_uint64(v_fst_3518_);
lean_dec(v_fst_3518_);
v___x_3535_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_snd_3528_, v___x_3534_, v_fst_3498_, v___x_3499_, v___x_3496_, v_snd_3507_, v___x_3515_);
if (lean_obj_tag(v___x_3535_) == 0)
{
lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; 
v___x_3536_ = lean_mk_empty_array_with_capacity(v___x_3529_);
v___x_3537_ = lean_array_push(v___x_3536_, v_snd_3519_);
v___x_3538_ = lean_array_push(v_snd_3507_, v___x_3537_);
v___x_3539_ = lean_box(0);
v___x_3540_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_3506_, v___x_3529_, v___x_3539_, v___x_3538_);
lean_dec(v_fst_3506_);
v___y_3502_ = v___x_3540_;
goto v___jp_3501_;
}
else
{
lean_object* v_val_3541_; lean_object* v___x_3542_; uint8_t v___x_3543_; 
v_val_3541_ = lean_ctor_get(v___x_3535_, 0);
lean_inc(v_val_3541_);
lean_dec_ref_known(v___x_3535_, 1);
v___x_3542_ = lean_array_get_size(v_snd_3507_);
v___x_3543_ = lean_nat_dec_lt(v_val_3541_, v___x_3542_);
if (v___x_3543_ == 0)
{
lean_dec(v_val_3541_);
lean_dec(v_snd_3519_);
v___y_3531_ = v_snd_3507_;
goto v___jp_3530_;
}
else
{
lean_object* v_v_3544_; lean_object* v___x_3545_; lean_object* v_xs_x27_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; 
v_v_3544_ = lean_array_fget(v_snd_3507_, v_val_3541_);
v___x_3545_ = lean_box(0);
v_xs_x27_3546_ = lean_array_fset(v_snd_3507_, v_val_3541_, v___x_3545_);
v___x_3547_ = lean_array_push(v_v_3544_, v_snd_3519_);
v___x_3548_ = lean_array_fset(v_xs_x27_3546_, v_val_3541_, v___x_3547_);
lean_dec(v_val_3541_);
v___y_3531_ = v___x_3548_;
goto v___jp_3530_;
}
}
v___jp_3530_:
{
lean_object* v___x_3532_; lean_object* v___x_3533_; 
v___x_3532_ = lean_box(0);
v___x_3533_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_3506_, v___x_3529_, v___x_3532_, v___y_3531_);
lean_dec(v_fst_3506_);
v___y_3502_ = v___x_3533_;
goto v___jp_3501_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___boxed(lean_object* v___x_3551_, lean_object* v___y_3552_, lean_object* v_fst_3553_, lean_object* v___x_3554_, lean_object* v_a_3555_){
_start:
{
uint64_t v_fst_3128__boxed_3556_; lean_object* v_res_3557_; 
v_fst_3128__boxed_3556_ = lean_unbox_uint64(v_fst_3553_);
lean_dec_ref(v_fst_3553_);
v_res_3557_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_3551_, v___y_3552_, v_fst_3128__boxed_3556_, v___x_3554_, v_a_3555_);
lean_dec(v___x_3554_);
lean_dec_ref(v___y_3552_);
lean_dec(v___x_3551_);
return v_res_3557_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(lean_object* v_hi_3558_, lean_object* v_pivot_3559_, lean_object* v_as_3560_, lean_object* v_i_3561_, lean_object* v_k_3562_){
_start:
{
uint8_t v___x_3573_; 
v___x_3573_ = lean_nat_dec_lt(v_k_3562_, v_hi_3558_);
if (v___x_3573_ == 0)
{
lean_object* v___x_3574_; lean_object* v___x_3575_; 
lean_dec(v_k_3562_);
v___x_3574_ = lean_array_fswap(v_as_3560_, v_i_3561_, v_hi_3558_);
v___x_3575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3575_, 0, v_i_3561_);
lean_ctor_set(v___x_3575_, 1, v___x_3574_);
return v___x_3575_;
}
else
{
lean_object* v___x_3576_; lean_object* v_snd_3577_; lean_object* v_snd_3578_; lean_object* v_fst_3579_; lean_object* v_fst_3580_; lean_object* v_fst_3581_; lean_object* v_fst_3582_; uint64_t v___x_3583_; uint64_t v___x_3584_; uint8_t v___x_3585_; 
v___x_3576_ = lean_array_fget_borrowed(v_as_3560_, v_k_3562_);
v_snd_3577_ = lean_ctor_get(v___x_3576_, 1);
v_snd_3578_ = lean_ctor_get(v_pivot_3559_, 1);
v_fst_3579_ = lean_ctor_get(v___x_3576_, 0);
v_fst_3580_ = lean_ctor_get(v_snd_3577_, 0);
v_fst_3581_ = lean_ctor_get(v_pivot_3559_, 0);
v_fst_3582_ = lean_ctor_get(v_snd_3578_, 0);
v___x_3583_ = lean_unbox_uint64(v_fst_3579_);
v___x_3584_ = lean_unbox_uint64(v_fst_3581_);
v___x_3585_ = lean_uint64_dec_lt(v___x_3583_, v___x_3584_);
if (v___x_3585_ == 0)
{
uint64_t v___x_3586_; uint64_t v___x_3587_; uint8_t v___x_3588_; 
v___x_3586_ = lean_unbox_uint64(v_fst_3579_);
v___x_3587_ = lean_unbox_uint64(v_fst_3581_);
v___x_3588_ = lean_uint64_dec_eq(v___x_3586_, v___x_3587_);
if (v___x_3588_ == 0)
{
goto v___jp_3569_;
}
else
{
uint8_t v___x_3589_; 
v___x_3589_ = lean_nat_dec_lt(v_fst_3580_, v_fst_3582_);
if (v___x_3589_ == 0)
{
goto v___jp_3569_;
}
else
{
goto v___jp_3563_;
}
}
}
else
{
goto v___jp_3563_;
}
}
v___jp_3563_:
{
lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; 
v___x_3564_ = lean_array_fswap(v_as_3560_, v_i_3561_, v_k_3562_);
v___x_3565_ = lean_unsigned_to_nat(1u);
v___x_3566_ = lean_nat_add(v_i_3561_, v___x_3565_);
lean_dec(v_i_3561_);
v___x_3567_ = lean_nat_add(v_k_3562_, v___x_3565_);
lean_dec(v_k_3562_);
v_as_3560_ = v___x_3564_;
v_i_3561_ = v___x_3566_;
v_k_3562_ = v___x_3567_;
goto _start;
}
v___jp_3569_:
{
lean_object* v___x_3570_; lean_object* v___x_3571_; 
v___x_3570_ = lean_unsigned_to_nat(1u);
v___x_3571_ = lean_nat_add(v_k_3562_, v___x_3570_);
lean_dec(v_k_3562_);
v_k_3562_ = v___x_3571_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg___boxed(lean_object* v_hi_3590_, lean_object* v_pivot_3591_, lean_object* v_as_3592_, lean_object* v_i_3593_, lean_object* v_k_3594_){
_start:
{
lean_object* v_res_3595_; 
v_res_3595_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(v_hi_3590_, v_pivot_3591_, v_as_3592_, v_i_3593_, v_k_3594_);
lean_dec_ref(v_pivot_3591_);
lean_dec(v_hi_3590_);
return v_res_3595_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(lean_object* v_n_3596_, lean_object* v_as_3597_, lean_object* v_lo_3598_, lean_object* v_hi_3599_){
_start:
{
lean_object* v___y_3601_; uint8_t v___x_3611_; 
v___x_3611_ = lean_nat_dec_lt(v_lo_3598_, v_hi_3599_);
if (v___x_3611_ == 0)
{
lean_dec(v_lo_3598_);
return v_as_3597_;
}
else
{
lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v_mid_3614_; lean_object* v___y_3616_; lean_object* v___y_3622_; lean_object* v___x_3627_; lean_object* v___x_3628_; uint8_t v___x_3629_; 
v___x_3612_ = lean_nat_add(v_lo_3598_, v_hi_3599_);
v___x_3613_ = lean_unsigned_to_nat(1u);
v_mid_3614_ = lean_nat_shiftr(v___x_3612_, v___x_3613_);
lean_dec(v___x_3612_);
v___x_3627_ = lean_array_fget_borrowed(v_as_3597_, v_mid_3614_);
v___x_3628_ = lean_array_fget_borrowed(v_as_3597_, v_lo_3598_);
v___x_3629_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(v___x_3627_, v___x_3628_);
if (v___x_3629_ == 0)
{
v___y_3622_ = v_as_3597_;
goto v___jp_3621_;
}
else
{
lean_object* v___x_3630_; 
v___x_3630_ = lean_array_fswap(v_as_3597_, v_lo_3598_, v_mid_3614_);
v___y_3622_ = v___x_3630_;
goto v___jp_3621_;
}
v___jp_3615_:
{
lean_object* v___x_3617_; lean_object* v___x_3618_; uint8_t v___x_3619_; 
v___x_3617_ = lean_array_fget_borrowed(v___y_3616_, v_mid_3614_);
v___x_3618_ = lean_array_fget_borrowed(v___y_3616_, v_hi_3599_);
v___x_3619_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(v___x_3617_, v___x_3618_);
if (v___x_3619_ == 0)
{
lean_dec(v_mid_3614_);
v___y_3601_ = v___y_3616_;
goto v___jp_3600_;
}
else
{
lean_object* v___x_3620_; 
v___x_3620_ = lean_array_fswap(v___y_3616_, v_mid_3614_, v_hi_3599_);
lean_dec(v_mid_3614_);
v___y_3601_ = v___x_3620_;
goto v___jp_3600_;
}
}
v___jp_3621_:
{
lean_object* v___x_3623_; lean_object* v___x_3624_; uint8_t v___x_3625_; 
v___x_3623_ = lean_array_fget_borrowed(v___y_3622_, v_hi_3599_);
v___x_3624_ = lean_array_fget_borrowed(v___y_3622_, v_lo_3598_);
v___x_3625_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(v___x_3623_, v___x_3624_);
if (v___x_3625_ == 0)
{
v___y_3616_ = v___y_3622_;
goto v___jp_3615_;
}
else
{
lean_object* v___x_3626_; 
v___x_3626_ = lean_array_fswap(v___y_3622_, v_lo_3598_, v_hi_3599_);
v___y_3616_ = v___x_3626_;
goto v___jp_3615_;
}
}
}
v___jp_3600_:
{
lean_object* v_pivot_3602_; lean_object* v___x_3603_; lean_object* v_fst_3604_; lean_object* v_snd_3605_; uint8_t v___x_3606_; 
v_pivot_3602_ = lean_array_fget(v___y_3601_, v_hi_3599_);
lean_inc_n(v_lo_3598_, 2);
v___x_3603_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(v_hi_3599_, v_pivot_3602_, v___y_3601_, v_lo_3598_, v_lo_3598_);
lean_dec(v_pivot_3602_);
v_fst_3604_ = lean_ctor_get(v___x_3603_, 0);
lean_inc(v_fst_3604_);
v_snd_3605_ = lean_ctor_get(v___x_3603_, 1);
lean_inc(v_snd_3605_);
lean_dec_ref(v___x_3603_);
v___x_3606_ = lean_nat_dec_le(v_hi_3599_, v_fst_3604_);
if (v___x_3606_ == 0)
{
lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; 
v___x_3607_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v_n_3596_, v_snd_3605_, v_lo_3598_, v_fst_3604_);
v___x_3608_ = lean_unsigned_to_nat(1u);
v___x_3609_ = lean_nat_add(v_fst_3604_, v___x_3608_);
lean_dec(v_fst_3604_);
v_as_3597_ = v___x_3607_;
v_lo_3598_ = v___x_3609_;
goto _start;
}
else
{
lean_dec(v_fst_3604_);
lean_dec(v_lo_3598_);
return v_snd_3605_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg___boxed(lean_object* v_n_3631_, lean_object* v_as_3632_, lean_object* v_lo_3633_, lean_object* v_hi_3634_){
_start:
{
lean_object* v_res_3635_; 
v_res_3635_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v_n_3631_, v_as_3632_, v_lo_3633_, v_hi_3634_);
lean_dec(v_hi_3634_);
lean_dec(v_n_3631_);
return v_res_3635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(lean_object* v_as_3636_, size_t v_sz_3637_, size_t v_i_3638_, lean_object* v_b_3639_){
_start:
{
uint8_t v___x_3640_; 
v___x_3640_ = lean_usize_dec_lt(v_i_3638_, v_sz_3637_);
if (v___x_3640_ == 0)
{
return v_b_3639_;
}
else
{
lean_object* v_a_3641_; lean_object* v_snd_3642_; lean_object* v_children_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; size_t v___x_3646_; size_t v___x_3647_; 
v_a_3641_ = lean_array_uget_borrowed(v_as_3636_, v_i_3638_);
v_snd_3642_ = lean_ctor_get(v_a_3641_, 1);
v_children_3643_ = lean_ctor_get(v_snd_3642_, 2);
v___x_3644_ = lean_array_get_size(v_children_3643_);
v___x_3645_ = lean_nat_add(v_b_3639_, v___x_3644_);
lean_dec(v_b_3639_);
v___x_3646_ = ((size_t)1ULL);
v___x_3647_ = lean_usize_add(v_i_3638_, v___x_3646_);
v_i_3638_ = v___x_3647_;
v_b_3639_ = v___x_3645_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg___boxed(lean_object* v_as_3649_, lean_object* v_sz_3650_, lean_object* v_i_3651_, lean_object* v_b_3652_){
_start:
{
size_t v_sz_boxed_3653_; size_t v_i_boxed_3654_; lean_object* v_res_3655_; 
v_sz_boxed_3653_ = lean_unbox_usize(v_sz_3650_);
lean_dec(v_sz_3650_);
v_i_boxed_3654_ = lean_unbox_usize(v_i_3651_);
lean_dec(v_i_3651_);
v_res_3655_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_as_3649_, v_sz_boxed_3653_, v_i_boxed_3654_, v_b_3652_);
lean_dec_ref(v_as_3649_);
return v_res_3655_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(lean_object* v___y_3656_, lean_object* v_covered_3657_, lean_object* v_a_3658_){
_start:
{
lean_object* v_fst_3659_; lean_object* v_snd_3660_; lean_object* v___x_3662_; uint8_t v_isShared_3663_; uint8_t v_isSharedCheck_3716_; 
v_fst_3659_ = lean_ctor_get(v_a_3658_, 0);
v_snd_3660_ = lean_ctor_get(v_a_3658_, 1);
v_isSharedCheck_3716_ = !lean_is_exclusive(v_a_3658_);
if (v_isSharedCheck_3716_ == 0)
{
v___x_3662_ = v_a_3658_;
v_isShared_3663_ = v_isSharedCheck_3716_;
goto v_resetjp_3661_;
}
else
{
lean_inc(v_snd_3660_);
lean_inc(v_fst_3659_);
lean_dec(v_a_3658_);
v___x_3662_ = lean_box(0);
v_isShared_3663_ = v_isSharedCheck_3716_;
goto v_resetjp_3661_;
}
v_resetjp_3661_:
{
lean_object* v___x_3664_; uint8_t v___x_3665_; 
v___x_3664_ = lean_array_get_size(v___y_3656_);
v___x_3665_ = lean_nat_dec_lt(v_snd_3660_, v___x_3664_);
if (v___x_3665_ == 0)
{
lean_object* v___x_3667_; 
if (v_isShared_3663_ == 0)
{
v___x_3667_ = v___x_3662_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v_fst_3659_);
lean_ctor_set(v_reuseFailAlloc_3668_, 1, v_snd_3660_);
v___x_3667_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
return v___x_3667_;
}
}
else
{
lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v_fst_3671_; lean_object* v_snd_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3715_; 
lean_del_object(v___x_3662_);
v___x_3669_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v___x_3670_ = lean_array_get(v___x_3669_, v___y_3656_, v_snd_3660_);
v_fst_3671_ = lean_ctor_get(v___x_3670_, 0);
v_snd_3672_ = lean_ctor_get(v___x_3670_, 1);
v_isSharedCheck_3715_ = !lean_is_exclusive(v___x_3670_);
if (v_isSharedCheck_3715_ == 0)
{
v___x_3674_ = v___x_3670_;
v_isShared_3675_ = v_isSharedCheck_3715_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_snd_3672_);
lean_inc(v_fst_3671_);
lean_dec(v___x_3670_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3715_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___x_3676_; lean_object* v___x_3677_; uint8_t v___x_3683_; 
v___x_3676_ = lean_unsigned_to_nat(1u);
v___x_3677_ = lean_nat_add(v_snd_3660_, v___x_3676_);
lean_dec(v_snd_3660_);
v___x_3683_ = lean_nat_dec_eq(v___x_3677_, v___x_3664_);
if (v___x_3683_ == 0)
{
lean_object* v___x_3684_; lean_object* v_fst_3685_; lean_object* v___x_3687_; uint8_t v_isShared_3688_; uint8_t v_isSharedCheck_3713_; 
v___x_3684_ = lean_array_get(v___x_3669_, v___y_3656_, v___x_3677_);
v_fst_3685_ = lean_ctor_get(v___x_3684_, 0);
v_isSharedCheck_3713_ = !lean_is_exclusive(v___x_3684_);
if (v_isSharedCheck_3713_ == 0)
{
lean_object* v_unused_3714_; 
v_unused_3714_ = lean_ctor_get(v___x_3684_, 1);
lean_dec(v_unused_3714_);
v___x_3687_ = v___x_3684_;
v_isShared_3688_ = v_isSharedCheck_3713_;
goto v_resetjp_3686_;
}
else
{
lean_inc(v_fst_3685_);
lean_dec(v___x_3684_);
v___x_3687_ = lean_box(0);
v_isShared_3688_ = v_isSharedCheck_3713_;
goto v_resetjp_3686_;
}
v_resetjp_3686_:
{
uint64_t v___x_3689_; uint64_t v___x_3690_; uint8_t v___x_3691_; 
v___x_3689_ = lean_unbox_uint64(v_fst_3685_);
lean_dec(v_fst_3685_);
v___x_3690_ = lean_unbox_uint64(v_fst_3671_);
v___x_3691_ = lean_uint64_dec_eq(v___x_3689_, v___x_3690_);
if (v___x_3691_ == 0)
{
lean_del_object(v___x_3687_);
lean_dec(v_snd_3672_);
lean_dec(v_fst_3671_);
goto v___jp_3678_;
}
else
{
lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3696_; 
lean_del_object(v___x_3674_);
v___x_3692_ = lean_mk_empty_array_with_capacity(v___x_3676_);
lean_inc_ref(v___x_3692_);
v___x_3693_ = lean_array_push(v___x_3692_, v_snd_3672_);
v___x_3694_ = lean_array_push(v___x_3692_, v___x_3693_);
lean_inc(v___x_3677_);
if (v_isShared_3688_ == 0)
{
lean_ctor_set(v___x_3687_, 1, v___x_3694_);
lean_ctor_set(v___x_3687_, 0, v___x_3677_);
v___x_3696_ = v___x_3687_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v___x_3677_);
lean_ctor_set(v_reuseFailAlloc_3712_, 1, v___x_3694_);
v___x_3696_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
uint64_t v___x_3697_; lean_object* v___x_3698_; lean_object* v_fst_3699_; lean_object* v_snd_3700_; lean_object* v___x_3702_; uint8_t v_isShared_3703_; uint8_t v_isSharedCheck_3711_; 
v___x_3697_ = lean_unbox_uint64(v_fst_3671_);
lean_dec(v_fst_3671_);
v___x_3698_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_3664_, v___y_3656_, v___x_3697_, v___x_3677_, v___x_3696_);
lean_dec(v___x_3677_);
v_fst_3699_ = lean_ctor_get(v___x_3698_, 0);
v_snd_3700_ = lean_ctor_get(v___x_3698_, 1);
v_isSharedCheck_3711_ = !lean_is_exclusive(v___x_3698_);
if (v_isSharedCheck_3711_ == 0)
{
v___x_3702_ = v___x_3698_;
v_isShared_3703_ = v_isSharedCheck_3711_;
goto v_resetjp_3701_;
}
else
{
lean_inc(v_snd_3700_);
lean_inc(v_fst_3699_);
lean_dec(v___x_3698_);
v___x_3702_ = lean_box(0);
v_isShared_3703_ = v_isSharedCheck_3711_;
goto v_resetjp_3701_;
}
v_resetjp_3701_:
{
size_t v___x_3704_; size_t v_sz_3705_; lean_object* v___x_3706_; lean_object* v___x_3708_; 
v___x_3704_ = ((size_t)0ULL);
v_sz_3705_ = lean_array_size(v_snd_3700_);
v___x_3706_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_covered_3657_, v_snd_3700_, v_sz_3705_, v___x_3704_, v_fst_3659_);
lean_dec(v_snd_3700_);
if (v_isShared_3703_ == 0)
{
lean_ctor_set(v___x_3702_, 1, v_fst_3699_);
lean_ctor_set(v___x_3702_, 0, v___x_3706_);
v___x_3708_ = v___x_3702_;
goto v_reusejp_3707_;
}
else
{
lean_object* v_reuseFailAlloc_3710_; 
v_reuseFailAlloc_3710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3710_, 0, v___x_3706_);
lean_ctor_set(v_reuseFailAlloc_3710_, 1, v_fst_3699_);
v___x_3708_ = v_reuseFailAlloc_3710_;
goto v_reusejp_3707_;
}
v_reusejp_3707_:
{
v_a_3658_ = v___x_3708_;
goto _start;
}
}
}
}
}
}
else
{
lean_dec(v_snd_3672_);
lean_dec(v_fst_3671_);
goto v___jp_3678_;
}
v___jp_3678_:
{
lean_object* v___x_3680_; 
if (v_isShared_3675_ == 0)
{
lean_ctor_set(v___x_3674_, 1, v___x_3677_);
lean_ctor_set(v___x_3674_, 0, v_fst_3659_);
v___x_3680_ = v___x_3674_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3682_; 
v_reuseFailAlloc_3682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3682_, 0, v_fst_3659_);
lean_ctor_set(v_reuseFailAlloc_3682_, 1, v___x_3677_);
v___x_3680_ = v_reuseFailAlloc_3682_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
v_a_3658_ = v___x_3680_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(lean_object* v_covered_3717_, lean_object* v_key_3718_, lean_object* v_cands_3719_, lean_object* v_acc_3720_){
_start:
{
lean_object* v___y_3722_; lean_object* v___y_3723_; lean_object* v___y_3724_; lean_object* v___y_3729_; lean_object* v___y_3730_; lean_object* v___y_3731_; lean_object* v___y_3732_; lean_object* v___y_3733_; lean_object* v___y_3734_; lean_object* v___y_3737_; lean_object* v___y_3738_; lean_object* v___y_3739_; lean_object* v___y_3740_; lean_object* v___y_3741_; lean_object* v___y_3742_; lean_object* v___y_3745_; lean_object* v_acc_3746_; lean_object* v___x_3766_; lean_object* v___x_3767_; uint8_t v___x_3768_; 
v___x_3766_ = lean_array_get_size(v_covered_3717_);
v___x_3767_ = lean_unsigned_to_nat(0u);
v___x_3768_ = lean_nat_dec_eq(v___x_3766_, v___x_3767_);
if (v___x_3768_ == 0)
{
uint64_t v_common_3769_; size_t v_sz_3770_; size_t v___x_3771_; uint64_t v___x_3772_; uint64_t v___x_3773_; uint8_t v___x_3774_; 
v_common_3769_ = 18446744073709551615ULL;
v_sz_3770_ = lean_array_size(v_cands_3719_);
v___x_3771_ = ((size_t)0ULL);
v___x_3772_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(v_covered_3717_, v_cands_3719_, v_sz_3770_, v___x_3771_, v_common_3769_);
v___x_3773_ = 0ULL;
v___x_3774_ = lean_uint64_dec_eq(v___x_3772_, v___x_3773_);
if (v___x_3774_ == 0)
{
lean_dec(v_key_3718_);
return v_acc_3720_;
}
else
{
goto v___jp_3757_;
}
}
else
{
goto v___jp_3757_;
}
v___jp_3721_:
{
lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v_fst_3727_; 
v___x_3725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3725_, 0, v___y_3723_);
lean_ctor_set(v___x_3725_, 1, v___y_3722_);
v___x_3726_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v___y_3724_, v_covered_3717_, v___x_3725_);
lean_dec_ref(v___y_3724_);
v_fst_3727_ = lean_ctor_get(v___x_3726_, 0);
lean_inc(v_fst_3727_);
lean_dec_ref(v___x_3726_);
return v_fst_3727_;
}
v___jp_3728_:
{
lean_object* v___x_3735_; 
v___x_3735_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v___y_3730_, v___y_3733_, v___y_3732_, v___y_3734_);
lean_dec(v___y_3734_);
lean_dec(v___y_3730_);
v___y_3722_ = v___y_3729_;
v___y_3723_ = v___y_3731_;
v___y_3724_ = v___x_3735_;
goto v___jp_3721_;
}
v___jp_3736_:
{
uint8_t v___x_3743_; 
v___x_3743_ = lean_nat_dec_le(v___y_3742_, v___y_3741_);
if (v___x_3743_ == 0)
{
lean_dec(v___y_3741_);
lean_inc(v___y_3742_);
v___y_3729_ = v___y_3737_;
v___y_3730_ = v___y_3738_;
v___y_3731_ = v___y_3739_;
v___y_3732_ = v___y_3742_;
v___y_3733_ = v___y_3740_;
v___y_3734_ = v___y_3742_;
goto v___jp_3728_;
}
else
{
v___y_3729_ = v___y_3737_;
v___y_3730_ = v___y_3738_;
v___y_3731_ = v___y_3739_;
v___y_3732_ = v___y_3742_;
v___y_3733_ = v___y_3740_;
v___y_3734_ = v___y_3741_;
goto v___jp_3728_;
}
}
v___jp_3744_:
{
size_t v_sz_3747_; size_t v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; uint8_t v___x_3753_; 
v_sz_3747_ = lean_array_size(v_cands_3719_);
v___x_3748_ = ((size_t)0ULL);
lean_inc(v___y_3745_);
v___x_3749_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_cands_3719_, v_sz_3747_, v___x_3748_, v___y_3745_);
v___x_3750_ = lean_mk_empty_array_with_capacity(v___x_3749_);
lean_dec(v___x_3749_);
v___x_3751_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_cands_3719_, v_sz_3747_, v___x_3748_, v___x_3750_);
v___x_3752_ = lean_array_get_size(v___x_3751_);
v___x_3753_ = lean_nat_dec_eq(v___x_3752_, v___y_3745_);
if (v___x_3753_ == 0)
{
lean_object* v___x_3754_; lean_object* v___x_3755_; uint8_t v___x_3756_; 
v___x_3754_ = lean_unsigned_to_nat(1u);
v___x_3755_ = lean_nat_sub(v___x_3752_, v___x_3754_);
v___x_3756_ = lean_nat_dec_le(v___y_3745_, v___x_3755_);
if (v___x_3756_ == 0)
{
lean_inc(v___x_3755_);
v___y_3737_ = v___y_3745_;
v___y_3738_ = v___x_3752_;
v___y_3739_ = v_acc_3746_;
v___y_3740_ = v___x_3751_;
v___y_3741_ = v___x_3755_;
v___y_3742_ = v___x_3755_;
goto v___jp_3736_;
}
else
{
lean_inc(v___y_3745_);
v___y_3737_ = v___y_3745_;
v___y_3738_ = v___x_3752_;
v___y_3739_ = v_acc_3746_;
v___y_3740_ = v___x_3751_;
v___y_3741_ = v___x_3755_;
v___y_3742_ = v___y_3745_;
goto v___jp_3736_;
}
}
else
{
v___y_3722_ = v___y_3745_;
v___y_3723_ = v_acc_3746_;
v___y_3724_ = v___x_3751_;
goto v___jp_3721_;
}
}
v___jp_3757_:
{
lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v_entries_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; uint8_t v___x_3763_; 
v___x_3758_ = lean_unsigned_to_nat(0u);
v___x_3759_ = lean_array_get_size(v_cands_3719_);
v_entries_3760_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_cands_3719_, v___x_3758_, v___x_3759_);
v___x_3761_ = lean_unsigned_to_nat(1u);
v___x_3762_ = lean_array_get_size(v_entries_3760_);
v___x_3763_ = lean_nat_dec_lt(v___x_3761_, v___x_3762_);
if (v___x_3763_ == 0)
{
lean_dec_ref(v_entries_3760_);
lean_dec(v_key_3718_);
v___y_3745_ = v___x_3758_;
v_acc_3746_ = v_acc_3720_;
goto v___jp_3744_;
}
else
{
lean_object* v___x_3764_; lean_object* v_acc_3765_; 
v___x_3764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3764_, 0, v_key_3718_);
lean_ctor_set(v___x_3764_, 1, v_entries_3760_);
v_acc_3765_ = lean_array_push(v_acc_3720_, v___x_3764_);
v___y_3745_ = v___x_3758_;
v_acc_3746_ = v_acc_3765_;
goto v___jp_3744_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(lean_object* v_covered_3775_, lean_object* v_as_3776_, size_t v_sz_3777_, size_t v_i_3778_, lean_object* v_b_3779_){
_start:
{
lean_object* v_a_3781_; uint8_t v___x_3785_; 
v___x_3785_ = lean_usize_dec_lt(v_i_3778_, v_sz_3777_);
if (v___x_3785_ == 0)
{
return v_b_3779_;
}
else
{
lean_object* v___x_3786_; lean_object* v_a_3787_; lean_object* v___x_3788_; uint8_t v___x_3789_; 
v___x_3786_ = lean_unsigned_to_nat(1u);
v_a_3787_ = lean_array_uget_borrowed(v_as_3776_, v_i_3778_);
v___x_3788_ = lean_array_get_size(v_a_3787_);
v___x_3789_ = lean_nat_dec_eq(v___x_3788_, v___x_3786_);
if (v___x_3789_ == 0)
{
lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v_snd_3793_; lean_object* v_key_3794_; lean_object* v___x_3795_; 
v___x_3790_ = lean_unsigned_to_nat(0u);
v___x_3791_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3792_ = lean_array_get_borrowed(v___x_3791_, v_a_3787_, v___x_3790_);
v_snd_3793_ = lean_ctor_get(v___x_3792_, 1);
v_key_3794_ = lean_ctor_get(v_snd_3793_, 0);
lean_inc(v_key_3794_);
v___x_3795_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3775_, v_key_3794_, v_a_3787_, v_b_3779_);
v_a_3781_ = v___x_3795_;
goto v___jp_3780_;
}
else
{
v_a_3781_ = v_b_3779_;
goto v___jp_3780_;
}
}
v___jp_3780_:
{
size_t v___x_3782_; size_t v___x_3783_; 
v___x_3782_ = ((size_t)1ULL);
v___x_3783_ = lean_usize_add(v_i_3778_, v___x_3782_);
v_i_3778_ = v___x_3783_;
v_b_3779_ = v_a_3781_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___boxed(lean_object* v_covered_3796_, lean_object* v_as_3797_, lean_object* v_sz_3798_, lean_object* v_i_3799_, lean_object* v_b_3800_){
_start:
{
size_t v_sz_boxed_3801_; size_t v_i_boxed_3802_; lean_object* v_res_3803_; 
v_sz_boxed_3801_ = lean_unbox_usize(v_sz_3798_);
lean_dec(v_sz_3798_);
v_i_boxed_3802_ = lean_unbox_usize(v_i_3799_);
lean_dec(v_i_3799_);
v_res_3803_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_covered_3796_, v_as_3797_, v_sz_boxed_3801_, v_i_boxed_3802_, v_b_3800_);
lean_dec_ref(v_as_3797_);
lean_dec_ref(v_covered_3796_);
return v_res_3803_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed(lean_object* v___y_3804_, lean_object* v_covered_3805_, lean_object* v_a_3806_){
_start:
{
lean_object* v_res_3807_; 
v_res_3807_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v___y_3804_, v_covered_3805_, v_a_3806_);
lean_dec_ref(v_covered_3805_);
lean_dec_ref(v___y_3804_);
return v_res_3807_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg___boxed(lean_object* v_covered_3808_, lean_object* v_key_3809_, lean_object* v_cands_3810_, lean_object* v_acc_3811_){
_start:
{
lean_object* v_res_3812_; 
v_res_3812_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3808_, v_key_3809_, v_cands_3810_, v_acc_3811_);
lean_dec_ref(v_cands_3810_);
lean_dec_ref(v_covered_3808_);
return v_res_3812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(lean_object* v_00_u03b1_3813_, lean_object* v_covered_3814_, lean_object* v_key_3815_, lean_object* v_cands_3816_, lean_object* v_acc_3817_){
_start:
{
lean_object* v___x_3818_; 
v___x_3818_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3814_, v_key_3815_, v_cands_3816_, v_acc_3817_);
return v___x_3818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___boxed(lean_object* v_00_u03b1_3819_, lean_object* v_covered_3820_, lean_object* v_key_3821_, lean_object* v_cands_3822_, lean_object* v_acc_3823_){
_start:
{
lean_object* v_res_3824_; 
v_res_3824_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(v_00_u03b1_3819_, v_covered_3820_, v_key_3821_, v_cands_3822_, v_acc_3823_);
lean_dec_ref(v_cands_3822_);
lean_dec_ref(v_covered_3820_);
return v_res_3824_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(lean_object* v_00_u03b1_3825_, lean_object* v_fst_3826_, lean_object* v_as_3827_, size_t v_sz_3828_, size_t v_i_3829_, lean_object* v_b_3830_){
_start:
{
lean_object* v___x_3831_; 
v___x_3831_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_fst_3826_, v_as_3827_, v_sz_3828_, v_i_3829_, v_b_3830_);
return v___x_3831_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___boxed(lean_object* v_00_u03b1_3832_, lean_object* v_fst_3833_, lean_object* v_as_3834_, lean_object* v_sz_3835_, lean_object* v_i_3836_, lean_object* v_b_3837_){
_start:
{
size_t v_sz_boxed_3838_; size_t v_i_boxed_3839_; lean_object* v_res_3840_; 
v_sz_boxed_3838_ = lean_unbox_usize(v_sz_3835_);
lean_dec(v_sz_3835_);
v_i_boxed_3839_ = lean_unbox_usize(v_i_3836_);
lean_dec(v_i_3836_);
v_res_3840_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(v_00_u03b1_3832_, v_fst_3833_, v_as_3834_, v_sz_boxed_3838_, v_i_boxed_3839_, v_b_3837_);
lean_dec_ref(v_as_3834_);
return v_res_3840_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(lean_object* v_00_u03b1_3841_, lean_object* v_as_3842_, size_t v_sz_3843_, size_t v_i_3844_, lean_object* v_b_3845_){
_start:
{
lean_object* v___x_3846_; 
v___x_3846_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_as_3842_, v_sz_3843_, v_i_3844_, v_b_3845_);
return v___x_3846_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___boxed(lean_object* v_00_u03b1_3847_, lean_object* v_as_3848_, lean_object* v_sz_3849_, lean_object* v_i_3850_, lean_object* v_b_3851_){
_start:
{
size_t v_sz_boxed_3852_; size_t v_i_boxed_3853_; lean_object* v_res_3854_; 
v_sz_boxed_3852_ = lean_unbox_usize(v_sz_3849_);
lean_dec(v_sz_3849_);
v_i_boxed_3853_ = lean_unbox_usize(v_i_3850_);
lean_dec(v_i_3850_);
v_res_3854_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(v_00_u03b1_3847_, v_as_3848_, v_sz_boxed_3852_, v_i_boxed_3853_, v_b_3851_);
lean_dec_ref(v_as_3848_);
return v_res_3854_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(lean_object* v_00_u03b1_3855_, lean_object* v_as_3856_, size_t v_sz_3857_, size_t v_i_3858_, lean_object* v_b_3859_){
_start:
{
lean_object* v___x_3860_; 
v___x_3860_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_as_3856_, v_sz_3857_, v_i_3858_, v_b_3859_);
return v___x_3860_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___boxed(lean_object* v_00_u03b1_3861_, lean_object* v_as_3862_, lean_object* v_sz_3863_, lean_object* v_i_3864_, lean_object* v_b_3865_){
_start:
{
size_t v_sz_boxed_3866_; size_t v_i_boxed_3867_; lean_object* v_res_3868_; 
v_sz_boxed_3866_ = lean_unbox_usize(v_sz_3863_);
lean_dec(v_sz_3863_);
v_i_boxed_3867_ = lean_unbox_usize(v_i_3864_);
lean_dec(v_i_3864_);
v_res_3868_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(v_00_u03b1_3861_, v_as_3862_, v_sz_boxed_3866_, v_i_boxed_3867_, v_b_3865_);
lean_dec_ref(v_as_3862_);
return v_res_3868_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(lean_object* v_00_u03b1_3869_, lean_object* v_snd_3870_, uint64_t v___x_3871_, uint64_t v_fst_3872_, lean_object* v___x_3873_, lean_object* v___x_3874_, lean_object* v_as_3875_, lean_object* v_j_3876_){
_start:
{
lean_object* v___x_3877_; 
v___x_3877_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_snd_3870_, v___x_3871_, v_fst_3872_, v___x_3873_, v___x_3874_, v_as_3875_, v_j_3876_);
return v___x_3877_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___boxed(lean_object* v_00_u03b1_3878_, lean_object* v_snd_3879_, lean_object* v___x_3880_, lean_object* v_fst_3881_, lean_object* v___x_3882_, lean_object* v___x_3883_, lean_object* v_as_3884_, lean_object* v_j_3885_){
_start:
{
uint64_t v___x_3612__boxed_3886_; uint64_t v_fst_3613__boxed_3887_; lean_object* v_res_3888_; 
v___x_3612__boxed_3886_ = lean_unbox_uint64(v___x_3880_);
lean_dec_ref(v___x_3880_);
v_fst_3613__boxed_3887_ = lean_unbox_uint64(v_fst_3881_);
lean_dec_ref(v_fst_3881_);
v_res_3888_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(v_00_u03b1_3878_, v_snd_3879_, v___x_3612__boxed_3886_, v_fst_3613__boxed_3887_, v___x_3882_, v___x_3883_, v_as_3884_, v_j_3885_);
lean_dec_ref(v_as_3884_);
lean_dec(v___x_3883_);
lean_dec(v___x_3882_);
lean_dec_ref(v_snd_3879_);
return v_res_3888_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(lean_object* v_00_u03b1_3889_, lean_object* v___x_3890_, lean_object* v___y_3891_, uint64_t v_fst_3892_, lean_object* v___x_3893_, lean_object* v_inst_3894_, lean_object* v_a_3895_){
_start:
{
lean_object* v___x_3896_; 
v___x_3896_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_3890_, v___y_3891_, v_fst_3892_, v___x_3893_, v_a_3895_);
return v___x_3896_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___boxed(lean_object* v_00_u03b1_3897_, lean_object* v___x_3898_, lean_object* v___y_3899_, lean_object* v_fst_3900_, lean_object* v___x_3901_, lean_object* v_inst_3902_, lean_object* v_a_3903_){
_start:
{
uint64_t v_fst_3630__boxed_3904_; lean_object* v_res_3905_; 
v_fst_3630__boxed_3904_ = lean_unbox_uint64(v_fst_3900_);
lean_dec_ref(v_fst_3900_);
v_res_3905_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(v_00_u03b1_3897_, v___x_3898_, v___y_3899_, v_fst_3630__boxed_3904_, v___x_3901_, v_inst_3902_, v_a_3903_);
lean_dec(v___x_3901_);
lean_dec_ref(v___y_3899_);
lean_dec(v___x_3898_);
return v_res_3905_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(lean_object* v_00_u03b1_3906_, lean_object* v_covered_3907_, lean_object* v_as_3908_, size_t v_sz_3909_, size_t v_i_3910_, lean_object* v_b_3911_){
_start:
{
lean_object* v___x_3912_; 
v___x_3912_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_covered_3907_, v_as_3908_, v_sz_3909_, v_i_3910_, v_b_3911_);
return v___x_3912_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___boxed(lean_object* v_00_u03b1_3913_, lean_object* v_covered_3914_, lean_object* v_as_3915_, lean_object* v_sz_3916_, lean_object* v_i_3917_, lean_object* v_b_3918_){
_start:
{
size_t v_sz_boxed_3919_; size_t v_i_boxed_3920_; lean_object* v_res_3921_; 
v_sz_boxed_3919_ = lean_unbox_usize(v_sz_3916_);
lean_dec(v_sz_3916_);
v_i_boxed_3920_ = lean_unbox_usize(v_i_3917_);
lean_dec(v_i_3917_);
v_res_3921_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(v_00_u03b1_3913_, v_covered_3914_, v_as_3915_, v_sz_boxed_3919_, v_i_boxed_3920_, v_b_3918_);
lean_dec_ref(v_as_3915_);
lean_dec_ref(v_covered_3914_);
return v_res_3921_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(lean_object* v_00_u03b1_3922_, lean_object* v___y_3923_, lean_object* v_covered_3924_, lean_object* v_inst_3925_, lean_object* v_a_3926_){
_start:
{
lean_object* v___x_3927_; 
v___x_3927_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v___y_3923_, v_covered_3924_, v_a_3926_);
return v___x_3927_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___boxed(lean_object* v_00_u03b1_3928_, lean_object* v___y_3929_, lean_object* v_covered_3930_, lean_object* v_inst_3931_, lean_object* v_a_3932_){
_start:
{
lean_object* v_res_3933_; 
v_res_3933_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(v_00_u03b1_3928_, v___y_3929_, v_covered_3930_, v_inst_3931_, v_a_3932_);
lean_dec_ref(v_covered_3930_);
lean_dec_ref(v___y_3929_);
return v_res_3933_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7(lean_object* v_00_u03b1_3934_, lean_object* v_n_3935_, lean_object* v_as_3936_, lean_object* v_lo_3937_, lean_object* v_hi_3938_, lean_object* v_w_3939_, lean_object* v_hlo_3940_, lean_object* v_hhi_3941_){
_start:
{
lean_object* v___x_3942_; 
v___x_3942_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v_n_3935_, v_as_3936_, v_lo_3937_, v_hi_3938_);
return v___x_3942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___boxed(lean_object* v_00_u03b1_3943_, lean_object* v_n_3944_, lean_object* v_as_3945_, lean_object* v_lo_3946_, lean_object* v_hi_3947_, lean_object* v_w_3948_, lean_object* v_hlo_3949_, lean_object* v_hhi_3950_){
_start:
{
lean_object* v_res_3951_; 
v_res_3951_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7(v_00_u03b1_3943_, v_n_3944_, v_as_3945_, v_lo_3946_, v_hi_3947_, v_w_3948_, v_hlo_3949_, v_hhi_3950_);
lean_dec(v_hi_3947_);
lean_dec(v_n_3944_);
return v_res_3951_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8(lean_object* v_00_u03b1_3952_, lean_object* v_as_3953_, lean_object* v_start_3954_, lean_object* v_stop_3955_){
_start:
{
lean_object* v___x_3956_; 
v___x_3956_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_as_3953_, v_start_3954_, v_stop_3955_);
return v___x_3956_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___boxed(lean_object* v_00_u03b1_3957_, lean_object* v_as_3958_, lean_object* v_start_3959_, lean_object* v_stop_3960_){
_start:
{
lean_object* v_res_3961_; 
v_res_3961_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8(v_00_u03b1_3957_, v_as_3958_, v_start_3959_, v_stop_3960_);
lean_dec(v_stop_3960_);
lean_dec(v_start_3959_);
lean_dec_ref(v_as_3958_);
return v_res_3961_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9(lean_object* v_00_u03b1_3962_, lean_object* v_covered_3963_, lean_object* v_as_3964_, size_t v_sz_3965_, size_t v_i_3966_, uint64_t v_b_3967_){
_start:
{
uint64_t v___x_3968_; 
v___x_3968_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(v_covered_3963_, v_as_3964_, v_sz_3965_, v_i_3966_, v_b_3967_);
return v___x_3968_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___boxed(lean_object* v_00_u03b1_3969_, lean_object* v_covered_3970_, lean_object* v_as_3971_, lean_object* v_sz_3972_, lean_object* v_i_3973_, lean_object* v_b_3974_){
_start:
{
size_t v_sz_boxed_3975_; size_t v_i_boxed_3976_; uint64_t v_b_boxed_3977_; uint64_t v_res_3978_; lean_object* v_r_3979_; 
v_sz_boxed_3975_ = lean_unbox_usize(v_sz_3972_);
lean_dec(v_sz_3972_);
v_i_boxed_3976_ = lean_unbox_usize(v_i_3973_);
lean_dec(v_i_3973_);
v_b_boxed_3977_ = lean_unbox_uint64(v_b_3974_);
lean_dec_ref(v_b_3974_);
v_res_3978_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9(v_00_u03b1_3969_, v_covered_3970_, v_as_3971_, v_sz_boxed_3975_, v_i_boxed_3976_, v_b_boxed_3977_);
lean_dec_ref(v_as_3971_);
lean_dec_ref(v_covered_3970_);
v_r_3979_ = lean_box_uint64(v_res_3978_);
return v_r_3979_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7(lean_object* v_00_u03b1_3980_, lean_object* v_n_3981_, lean_object* v_lo_3982_, lean_object* v_hi_3983_, lean_object* v_hhi_3984_, lean_object* v_pivot_3985_, lean_object* v_as_3986_, lean_object* v_i_3987_, lean_object* v_k_3988_, lean_object* v_ilo_3989_, lean_object* v_ik_3990_, lean_object* v_w_3991_){
_start:
{
lean_object* v___x_3992_; 
v___x_3992_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(v_hi_3983_, v_pivot_3985_, v_as_3986_, v_i_3987_, v_k_3988_);
return v___x_3992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___boxed(lean_object* v_00_u03b1_3993_, lean_object* v_n_3994_, lean_object* v_lo_3995_, lean_object* v_hi_3996_, lean_object* v_hhi_3997_, lean_object* v_pivot_3998_, lean_object* v_as_3999_, lean_object* v_i_4000_, lean_object* v_k_4001_, lean_object* v_ilo_4002_, lean_object* v_ik_4003_, lean_object* v_w_4004_){
_start:
{
lean_object* v_res_4005_; 
v_res_4005_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7(v_00_u03b1_3993_, v_n_3994_, v_lo_3995_, v_hi_3996_, v_hhi_3997_, v_pivot_3998_, v_as_3999_, v_i_4000_, v_k_4001_, v_ilo_4002_, v_ik_4003_, v_w_4004_);
lean_dec_ref(v_pivot_3998_);
lean_dec(v_hi_3996_);
lean_dec(v_lo_3995_);
lean_dec(v_n_3994_);
return v_res_4005_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9(lean_object* v_00_u03b1_4006_, lean_object* v_as_4007_, size_t v_i_4008_, size_t v_stop_4009_, lean_object* v_b_4010_){
_start:
{
lean_object* v___x_4011_; 
v___x_4011_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(v_as_4007_, v_i_4008_, v_stop_4009_, v_b_4010_);
return v___x_4011_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___boxed(lean_object* v_00_u03b1_4012_, lean_object* v_as_4013_, lean_object* v_i_4014_, lean_object* v_stop_4015_, lean_object* v_b_4016_){
_start:
{
size_t v_i_boxed_4017_; size_t v_stop_boxed_4018_; lean_object* v_res_4019_; 
v_i_boxed_4017_ = lean_unbox_usize(v_i_4014_);
lean_dec(v_i_4014_);
v_stop_boxed_4018_ = lean_unbox_usize(v_stop_4015_);
lean_dec(v_stop_4015_);
v_res_4019_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9(v_00_u03b1_4012_, v_as_4013_, v_i_boxed_4017_, v_stop_boxed_4018_, v_b_4016_);
lean_dec_ref(v_as_4013_);
return v_res_4019_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg(lean_object* v_trees_4022_, lean_object* v_covered_4023_){
_start:
{
lean_object* v___x_4024_; lean_object* v___x_4025_; uint8_t v___x_4026_; 
v___x_4024_ = lean_array_get_size(v_trees_4022_);
v___x_4025_ = lean_unsigned_to_nat(2u);
v___x_4026_ = lean_nat_dec_lt(v___x_4024_, v___x_4025_);
if (v___x_4026_ == 0)
{
lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; 
v___x_4027_ = lean_box(0);
v___x_4028_ = ((lean_object*)(l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0));
v___x_4029_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_4023_, v___x_4027_, v_trees_4022_, v___x_4028_);
return v___x_4029_;
}
else
{
lean_object* v___x_4030_; 
v___x_4030_ = ((lean_object*)(l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0));
return v___x_4030_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg___boxed(lean_object* v_trees_4031_, lean_object* v_covered_4032_){
_start:
{
lean_object* v_res_4033_; 
v_res_4033_ = l_Lean_ImportedConsts_collectDuplicates___redArg(v_trees_4031_, v_covered_4032_);
lean_dec_ref(v_covered_4032_);
lean_dec_ref(v_trees_4031_);
return v_res_4033_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates(lean_object* v_00_u03b1_4034_, lean_object* v_trees_4035_, lean_object* v_covered_4036_){
_start:
{
lean_object* v___x_4037_; 
v___x_4037_ = l_Lean_ImportedConsts_collectDuplicates___redArg(v_trees_4035_, v_covered_4036_);
return v___x_4037_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___boxed(lean_object* v_00_u03b1_4038_, lean_object* v_trees_4039_, lean_object* v_covered_4040_){
_start:
{
lean_object* v_res_4041_; 
v_res_4041_ = l_Lean_ImportedConsts_collectDuplicates(v_00_u03b1_4038_, v_trees_4039_, v_covered_4040_);
lean_dec_ref(v_covered_4040_);
lean_dec_ref(v_trees_4039_);
return v_res_4041_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1(lean_object* v_cands_4042_, lean_object* v___x_4043_, lean_object* v_resolve_4044_, lean_object* v_x_4045_){
_start:
{
lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; 
v___x_4046_ = lean_unsigned_to_nat(0u);
v___x_4047_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_cands_4042_, v___x_4046_, v___x_4043_);
v___x_4048_ = lean_apply_1(v_resolve_4044_, v___x_4047_);
return v___x_4048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1___boxed(lean_object* v_cands_4049_, lean_object* v___x_4050_, lean_object* v_resolve_4051_, lean_object* v_x_4052_){
_start:
{
lean_object* v_res_4053_; 
v_res_4053_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1(v_cands_4049_, v___x_4050_, v_resolve_4051_, v_x_4052_);
lean_dec(v___x_4050_);
lean_dec_ref(v_cands_4049_);
return v_res_4053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed(lean_object* v_resolve_4057_, lean_object* v_cands_4058_, lean_object* v_x_4059_){
_start:
{
lean_object* v_res_4060_; 
v_res_4060_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(v_resolve_4057_, v_cands_4058_, v_x_4059_);
lean_dec_ref(v_cands_4058_);
return v_res_4060_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(lean_object* v_resolve_4061_, lean_object* v_key_4062_, lean_object* v_cands_4063_){
_start:
{
lean_object* v___x_4064_; lean_object* v___x_4065_; uint8_t v___x_4066_; 
v___x_4064_ = lean_array_get_size(v_cands_4063_);
v___x_4065_ = lean_unsigned_to_nat(1u);
v___x_4066_ = lean_nat_dec_eq(v___x_4064_, v___x_4065_);
if (v___x_4066_ == 0)
{
lean_object* v___f_4067_; lean_object* v___f_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; 
lean_inc_ref(v_cands_4063_);
lean_inc_ref(v_resolve_4061_);
v___f_4067_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4067_, 0, v_resolve_4061_);
lean_closure_set(v___f_4067_, 1, v_cands_4063_);
v___f_4068_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_4068_, 0, v_cands_4063_);
lean_closure_set(v___f_4068_, 1, v___x_4064_);
lean_closure_set(v___f_4068_, 2, v_resolve_4061_);
v___x_4069_ = lean_mk_thunk(v___f_4068_);
v___x_4070_ = lean_mk_thunk(v___f_4067_);
v___x_4071_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_4071_, 0, v_key_4062_);
lean_ctor_set(v___x_4071_, 1, v___x_4069_);
lean_ctor_set(v___x_4071_, 2, v___x_4070_);
return v___x_4071_;
}
else
{
lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v_fst_4075_; lean_object* v_snd_4076_; lean_object* v___x_4078_; uint8_t v_isShared_4079_; uint8_t v_isSharedCheck_4083_; 
lean_dec(v_key_4062_);
lean_dec_ref(v_resolve_4061_);
v___x_4072_ = lean_unsigned_to_nat(0u);
v___x_4073_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_4074_ = lean_array_get(v___x_4073_, v_cands_4063_, v___x_4072_);
lean_dec_ref(v_cands_4063_);
v_fst_4075_ = lean_ctor_get(v___x_4074_, 0);
v_snd_4076_ = lean_ctor_get(v___x_4074_, 1);
v_isSharedCheck_4083_ = !lean_is_exclusive(v___x_4074_);
if (v_isSharedCheck_4083_ == 0)
{
v___x_4078_ = v___x_4074_;
v_isShared_4079_ = v_isSharedCheck_4083_;
goto v_resetjp_4077_;
}
else
{
lean_inc(v_snd_4076_);
lean_inc(v_fst_4075_);
lean_dec(v___x_4074_);
v___x_4078_ = lean_box(0);
v_isShared_4079_ = v_isSharedCheck_4083_;
goto v_resetjp_4077_;
}
v_resetjp_4077_:
{
lean_object* v___x_4081_; 
if (v_isShared_4079_ == 0)
{
v___x_4081_ = v___x_4078_;
goto v_reusejp_4080_;
}
else
{
lean_object* v_reuseFailAlloc_4082_; 
v_reuseFailAlloc_4082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4082_, 0, v_fst_4075_);
lean_ctor_set(v_reuseFailAlloc_4082_, 1, v_snd_4076_);
v___x_4081_ = v_reuseFailAlloc_4082_;
goto v_reusejp_4080_;
}
v_reusejp_4080_:
{
return v___x_4081_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(lean_object* v_resolve_4084_, lean_object* v_as_4085_, size_t v_sz_4086_, size_t v_i_4087_, lean_object* v_b_4088_){
_start:
{
lean_object* v_a_4090_; uint8_t v___x_4094_; 
v___x_4094_ = lean_usize_dec_lt(v_i_4087_, v_sz_4086_);
if (v___x_4094_ == 0)
{
lean_dec_ref(v_resolve_4084_);
return v_b_4088_;
}
else
{
lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v_a_4098_; lean_object* v___x_4099_; uint8_t v___x_4100_; 
v___x_4095_ = lean_unsigned_to_nat(1u);
v___x_4096_ = lean_unsigned_to_nat(0u);
v___x_4097_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v_a_4098_ = lean_array_uget_borrowed(v_as_4085_, v_i_4087_);
v___x_4099_ = lean_array_get_size(v_a_4098_);
v___x_4100_ = lean_nat_dec_eq(v___x_4099_, v___x_4095_);
if (v___x_4100_ == 0)
{
lean_object* v___x_4101_; lean_object* v_snd_4102_; lean_object* v_key_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; 
v___x_4101_ = lean_array_get_borrowed(v___x_4097_, v_a_4098_, v___x_4096_);
v_snd_4102_ = lean_ctor_get(v___x_4101_, 1);
v_key_4103_ = lean_ctor_get(v_snd_4102_, 0);
lean_inc(v_a_4098_);
lean_inc(v_key_4103_);
lean_inc_ref(v_resolve_4084_);
v___x_4104_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4084_, v_key_4103_, v_a_4098_);
v___x_4105_ = lean_array_push(v_b_4088_, v___x_4104_);
v_a_4090_ = v___x_4105_;
goto v___jp_4089_;
}
else
{
lean_object* v___x_4106_; lean_object* v_fst_4107_; lean_object* v_snd_4108_; lean_object* v___x_4110_; uint8_t v_isShared_4111_; uint8_t v_isSharedCheck_4116_; 
v___x_4106_ = lean_array_get(v___x_4097_, v_a_4098_, v___x_4096_);
v_fst_4107_ = lean_ctor_get(v___x_4106_, 0);
v_snd_4108_ = lean_ctor_get(v___x_4106_, 1);
v_isSharedCheck_4116_ = !lean_is_exclusive(v___x_4106_);
if (v_isSharedCheck_4116_ == 0)
{
v___x_4110_ = v___x_4106_;
v_isShared_4111_ = v_isSharedCheck_4116_;
goto v_resetjp_4109_;
}
else
{
lean_inc(v_snd_4108_);
lean_inc(v_fst_4107_);
lean_dec(v___x_4106_);
v___x_4110_ = lean_box(0);
v_isShared_4111_ = v_isSharedCheck_4116_;
goto v_resetjp_4109_;
}
v_resetjp_4109_:
{
lean_object* v___x_4113_; 
if (v_isShared_4111_ == 0)
{
v___x_4113_ = v___x_4110_;
goto v_reusejp_4112_;
}
else
{
lean_object* v_reuseFailAlloc_4115_; 
v_reuseFailAlloc_4115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4115_, 0, v_fst_4107_);
lean_ctor_set(v_reuseFailAlloc_4115_, 1, v_snd_4108_);
v___x_4113_ = v_reuseFailAlloc_4115_;
goto v_reusejp_4112_;
}
v_reusejp_4112_:
{
lean_object* v___x_4114_; 
v___x_4114_ = lean_array_push(v_b_4088_, v___x_4113_);
v_a_4090_ = v___x_4114_;
goto v___jp_4089_;
}
}
}
}
v___jp_4089_:
{
size_t v___x_4091_; size_t v___x_4092_; 
v___x_4091_ = ((size_t)1ULL);
v___x_4092_ = lean_usize_add(v_i_4087_, v___x_4091_);
v_i_4087_ = v___x_4092_;
v_b_4088_ = v_a_4090_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(lean_object* v_resolve_4117_, lean_object* v_as_4118_, size_t v_sz_4119_, size_t v_i_4120_, lean_object* v_b_4121_){
_start:
{
lean_object* v_a_4123_; uint8_t v___x_4127_; 
v___x_4127_ = lean_usize_dec_lt(v_i_4120_, v_sz_4119_);
if (v___x_4127_ == 0)
{
lean_dec_ref(v_resolve_4117_);
return v_b_4121_;
}
else
{
lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v_a_4131_; lean_object* v___x_4132_; uint8_t v___x_4133_; 
v___x_4128_ = lean_unsigned_to_nat(1u);
v___x_4129_ = lean_unsigned_to_nat(0u);
v___x_4130_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v_a_4131_ = lean_array_uget_borrowed(v_as_4118_, v_i_4120_);
v___x_4132_ = lean_array_get_size(v_a_4131_);
v___x_4133_ = lean_nat_dec_eq(v___x_4132_, v___x_4128_);
if (v___x_4133_ == 0)
{
lean_object* v___x_4134_; lean_object* v_snd_4135_; lean_object* v_key_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; 
v___x_4134_ = lean_array_get_borrowed(v___x_4130_, v_a_4131_, v___x_4129_);
v_snd_4135_ = lean_ctor_get(v___x_4134_, 1);
v_key_4136_ = lean_ctor_get(v_snd_4135_, 0);
lean_inc(v_a_4131_);
lean_inc(v_key_4136_);
lean_inc_ref(v_resolve_4117_);
v___x_4137_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4117_, v_key_4136_, v_a_4131_);
v___x_4138_ = lean_array_push(v_b_4121_, v___x_4137_);
v_a_4123_ = v___x_4138_;
goto v___jp_4122_;
}
else
{
lean_object* v___x_4139_; lean_object* v_fst_4140_; lean_object* v_snd_4141_; lean_object* v___x_4143_; uint8_t v_isShared_4144_; uint8_t v_isSharedCheck_4149_; 
v___x_4139_ = lean_array_get(v___x_4130_, v_a_4131_, v___x_4129_);
v_fst_4140_ = lean_ctor_get(v___x_4139_, 0);
v_snd_4141_ = lean_ctor_get(v___x_4139_, 1);
v_isSharedCheck_4149_ = !lean_is_exclusive(v___x_4139_);
if (v_isSharedCheck_4149_ == 0)
{
v___x_4143_ = v___x_4139_;
v_isShared_4144_ = v_isSharedCheck_4149_;
goto v_resetjp_4142_;
}
else
{
lean_inc(v_snd_4141_);
lean_inc(v_fst_4140_);
lean_dec(v___x_4139_);
v___x_4143_ = lean_box(0);
v_isShared_4144_ = v_isSharedCheck_4149_;
goto v_resetjp_4142_;
}
v_resetjp_4142_:
{
lean_object* v___x_4146_; 
if (v_isShared_4144_ == 0)
{
v___x_4146_ = v___x_4143_;
goto v_reusejp_4145_;
}
else
{
lean_object* v_reuseFailAlloc_4148_; 
v_reuseFailAlloc_4148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4148_, 0, v_fst_4140_);
lean_ctor_set(v_reuseFailAlloc_4148_, 1, v_snd_4141_);
v___x_4146_ = v_reuseFailAlloc_4148_;
goto v_reusejp_4145_;
}
v_reusejp_4145_:
{
lean_object* v___x_4147_; 
v___x_4147_ = lean_array_push(v_b_4121_, v___x_4146_);
v_a_4123_ = v___x_4147_;
goto v___jp_4122_;
}
}
}
}
v___jp_4122_:
{
size_t v___x_4124_; size_t v___x_4125_; lean_object* v___x_4126_; 
v___x_4124_ = ((size_t)1ULL);
v___x_4125_ = lean_usize_add(v_i_4120_, v___x_4124_);
v___x_4126_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_4117_, v_as_4118_, v_sz_4119_, v___x_4125_, v_a_4123_);
return v___x_4126_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(lean_object* v___y_4150_, lean_object* v_resolve_4151_, lean_object* v_a_4152_){
_start:
{
lean_object* v_fst_4153_; lean_object* v_snd_4154_; lean_object* v___x_4156_; uint8_t v_isShared_4157_; uint8_t v_isSharedCheck_4214_; 
v_fst_4153_ = lean_ctor_get(v_a_4152_, 0);
v_snd_4154_ = lean_ctor_get(v_a_4152_, 1);
v_isSharedCheck_4214_ = !lean_is_exclusive(v_a_4152_);
if (v_isSharedCheck_4214_ == 0)
{
v___x_4156_ = v_a_4152_;
v_isShared_4157_ = v_isSharedCheck_4214_;
goto v_resetjp_4155_;
}
else
{
lean_inc(v_snd_4154_);
lean_inc(v_fst_4153_);
lean_dec(v_a_4152_);
v___x_4156_ = lean_box(0);
v_isShared_4157_ = v_isSharedCheck_4214_;
goto v_resetjp_4155_;
}
v_resetjp_4155_:
{
lean_object* v___x_4158_; uint8_t v___x_4159_; 
v___x_4158_ = lean_array_get_size(v___y_4150_);
v___x_4159_ = lean_nat_dec_lt(v_snd_4154_, v___x_4158_);
if (v___x_4159_ == 0)
{
lean_object* v___x_4161_; 
lean_dec_ref(v_resolve_4151_);
if (v_isShared_4157_ == 0)
{
v___x_4161_ = v___x_4156_;
goto v_reusejp_4160_;
}
else
{
lean_object* v_reuseFailAlloc_4162_; 
v_reuseFailAlloc_4162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4162_, 0, v_fst_4153_);
lean_ctor_set(v_reuseFailAlloc_4162_, 1, v_snd_4154_);
v___x_4161_ = v_reuseFailAlloc_4162_;
goto v_reusejp_4160_;
}
v_reusejp_4160_:
{
return v___x_4161_;
}
}
else
{
lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v_snd_4165_; lean_object* v_fst_4166_; lean_object* v___x_4168_; uint8_t v_isShared_4169_; uint8_t v_isSharedCheck_4213_; 
lean_del_object(v___x_4156_);
v___x_4163_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v___x_4164_ = lean_array_get(v___x_4163_, v___y_4150_, v_snd_4154_);
v_snd_4165_ = lean_ctor_get(v___x_4164_, 1);
v_fst_4166_ = lean_ctor_get(v___x_4164_, 0);
v_isSharedCheck_4213_ = !lean_is_exclusive(v___x_4164_);
if (v_isSharedCheck_4213_ == 0)
{
v___x_4168_ = v___x_4164_;
v_isShared_4169_ = v_isSharedCheck_4213_;
goto v_resetjp_4167_;
}
else
{
lean_inc(v_snd_4165_);
lean_inc(v_fst_4166_);
lean_dec(v___x_4164_);
v___x_4168_ = lean_box(0);
v_isShared_4169_ = v_isSharedCheck_4213_;
goto v_resetjp_4167_;
}
v_resetjp_4167_:
{
lean_object* v_fst_4170_; lean_object* v_snd_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; uint8_t v___x_4181_; 
v_fst_4170_ = lean_ctor_get(v_snd_4165_, 0);
v_snd_4171_ = lean_ctor_get(v_snd_4165_, 1);
v___x_4172_ = lean_unsigned_to_nat(1u);
v___x_4173_ = lean_nat_add(v_snd_4154_, v___x_4172_);
lean_dec(v_snd_4154_);
v___x_4181_ = lean_nat_dec_eq(v___x_4173_, v___x_4158_);
if (v___x_4181_ == 0)
{
lean_object* v___x_4182_; lean_object* v_fst_4183_; lean_object* v___x_4185_; uint8_t v_isShared_4186_; uint8_t v_isSharedCheck_4211_; 
v___x_4182_ = lean_array_get(v___x_4163_, v___y_4150_, v___x_4173_);
v_fst_4183_ = lean_ctor_get(v___x_4182_, 0);
v_isSharedCheck_4211_ = !lean_is_exclusive(v___x_4182_);
if (v_isSharedCheck_4211_ == 0)
{
lean_object* v_unused_4212_; 
v_unused_4212_ = lean_ctor_get(v___x_4182_, 1);
lean_dec(v_unused_4212_);
v___x_4185_ = v___x_4182_;
v_isShared_4186_ = v_isSharedCheck_4211_;
goto v_resetjp_4184_;
}
else
{
lean_inc(v_fst_4183_);
lean_dec(v___x_4182_);
v___x_4185_ = lean_box(0);
v_isShared_4186_ = v_isSharedCheck_4211_;
goto v_resetjp_4184_;
}
v_resetjp_4184_:
{
uint64_t v___x_4187_; uint64_t v___x_4188_; uint8_t v___x_4189_; 
v___x_4187_ = lean_unbox_uint64(v_fst_4183_);
lean_dec(v_fst_4183_);
v___x_4188_ = lean_unbox_uint64(v_fst_4166_);
v___x_4189_ = lean_uint64_dec_eq(v___x_4187_, v___x_4188_);
if (v___x_4189_ == 0)
{
lean_inc(v_snd_4171_);
lean_inc(v_fst_4170_);
lean_del_object(v___x_4185_);
lean_dec(v_fst_4166_);
lean_dec(v_snd_4165_);
goto v___jp_4174_;
}
else
{
lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4194_; 
lean_del_object(v___x_4168_);
v___x_4190_ = lean_mk_empty_array_with_capacity(v___x_4172_);
lean_inc_ref(v___x_4190_);
v___x_4191_ = lean_array_push(v___x_4190_, v_snd_4165_);
v___x_4192_ = lean_array_push(v___x_4190_, v___x_4191_);
lean_inc(v___x_4173_);
if (v_isShared_4186_ == 0)
{
lean_ctor_set(v___x_4185_, 1, v___x_4192_);
lean_ctor_set(v___x_4185_, 0, v___x_4173_);
v___x_4194_ = v___x_4185_;
goto v_reusejp_4193_;
}
else
{
lean_object* v_reuseFailAlloc_4210_; 
v_reuseFailAlloc_4210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4210_, 0, v___x_4173_);
lean_ctor_set(v_reuseFailAlloc_4210_, 1, v___x_4192_);
v___x_4194_ = v_reuseFailAlloc_4210_;
goto v_reusejp_4193_;
}
v_reusejp_4193_:
{
uint64_t v___x_4195_; lean_object* v___x_4196_; lean_object* v_fst_4197_; lean_object* v_snd_4198_; lean_object* v___x_4200_; uint8_t v_isShared_4201_; uint8_t v_isSharedCheck_4209_; 
v___x_4195_ = lean_unbox_uint64(v_fst_4166_);
lean_dec(v_fst_4166_);
v___x_4196_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_4158_, v___y_4150_, v___x_4195_, v___x_4173_, v___x_4194_);
lean_dec(v___x_4173_);
v_fst_4197_ = lean_ctor_get(v___x_4196_, 0);
v_snd_4198_ = lean_ctor_get(v___x_4196_, 1);
v_isSharedCheck_4209_ = !lean_is_exclusive(v___x_4196_);
if (v_isSharedCheck_4209_ == 0)
{
v___x_4200_ = v___x_4196_;
v_isShared_4201_ = v_isSharedCheck_4209_;
goto v_resetjp_4199_;
}
else
{
lean_inc(v_snd_4198_);
lean_inc(v_fst_4197_);
lean_dec(v___x_4196_);
v___x_4200_ = lean_box(0);
v_isShared_4201_ = v_isSharedCheck_4209_;
goto v_resetjp_4199_;
}
v_resetjp_4199_:
{
size_t v___x_4202_; size_t v_sz_4203_; lean_object* v___x_4204_; lean_object* v___x_4206_; 
v___x_4202_ = ((size_t)0ULL);
v_sz_4203_ = lean_array_size(v_snd_4198_);
lean_inc_ref(v_resolve_4151_);
v___x_4204_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_4151_, v_snd_4198_, v_sz_4203_, v___x_4202_, v_fst_4153_);
lean_dec(v_snd_4198_);
if (v_isShared_4201_ == 0)
{
lean_ctor_set(v___x_4200_, 1, v_fst_4197_);
lean_ctor_set(v___x_4200_, 0, v___x_4204_);
v___x_4206_ = v___x_4200_;
goto v_reusejp_4205_;
}
else
{
lean_object* v_reuseFailAlloc_4208_; 
v_reuseFailAlloc_4208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4208_, 0, v___x_4204_);
lean_ctor_set(v_reuseFailAlloc_4208_, 1, v_fst_4197_);
v___x_4206_ = v_reuseFailAlloc_4208_;
goto v_reusejp_4205_;
}
v_reusejp_4205_:
{
v_a_4152_ = v___x_4206_;
goto _start;
}
}
}
}
}
}
else
{
lean_inc(v_snd_4171_);
lean_inc(v_fst_4170_);
lean_dec(v_fst_4166_);
lean_dec(v_snd_4165_);
goto v___jp_4174_;
}
v___jp_4174_:
{
lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4178_; 
v___x_4175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4175_, 0, v_fst_4170_);
lean_ctor_set(v___x_4175_, 1, v_snd_4171_);
v___x_4176_ = lean_array_push(v_fst_4153_, v___x_4175_);
if (v_isShared_4169_ == 0)
{
lean_ctor_set(v___x_4168_, 1, v___x_4173_);
lean_ctor_set(v___x_4168_, 0, v___x_4176_);
v___x_4178_ = v___x_4168_;
goto v_reusejp_4177_;
}
else
{
lean_object* v_reuseFailAlloc_4180_; 
v_reuseFailAlloc_4180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4180_, 0, v___x_4176_);
lean_ctor_set(v_reuseFailAlloc_4180_, 1, v___x_4173_);
v___x_4178_ = v_reuseFailAlloc_4180_;
goto v_reusejp_4177_;
}
v_reusejp_4177_:
{
v_a_4152_ = v___x_4178_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(lean_object* v___y_4215_, lean_object* v_resolve_4216_, lean_object* v_a_4217_){
_start:
{
lean_object* v_fst_4218_; lean_object* v_snd_4219_; lean_object* v___x_4221_; uint8_t v_isShared_4222_; uint8_t v_isSharedCheck_4279_; 
v_fst_4218_ = lean_ctor_get(v_a_4217_, 0);
v_snd_4219_ = lean_ctor_get(v_a_4217_, 1);
v_isSharedCheck_4279_ = !lean_is_exclusive(v_a_4217_);
if (v_isSharedCheck_4279_ == 0)
{
v___x_4221_ = v_a_4217_;
v_isShared_4222_ = v_isSharedCheck_4279_;
goto v_resetjp_4220_;
}
else
{
lean_inc(v_snd_4219_);
lean_inc(v_fst_4218_);
lean_dec(v_a_4217_);
v___x_4221_ = lean_box(0);
v_isShared_4222_ = v_isSharedCheck_4279_;
goto v_resetjp_4220_;
}
v_resetjp_4220_:
{
lean_object* v___x_4223_; uint8_t v___x_4224_; 
v___x_4223_ = lean_array_get_size(v___y_4215_);
v___x_4224_ = lean_nat_dec_lt(v_snd_4219_, v___x_4223_);
if (v___x_4224_ == 0)
{
lean_object* v___x_4226_; 
lean_dec_ref(v_resolve_4216_);
if (v_isShared_4222_ == 0)
{
v___x_4226_ = v___x_4221_;
goto v_reusejp_4225_;
}
else
{
lean_object* v_reuseFailAlloc_4227_; 
v_reuseFailAlloc_4227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4227_, 0, v_fst_4218_);
lean_ctor_set(v_reuseFailAlloc_4227_, 1, v_snd_4219_);
v___x_4226_ = v_reuseFailAlloc_4227_;
goto v_reusejp_4225_;
}
v_reusejp_4225_:
{
return v___x_4226_;
}
}
else
{
lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v_snd_4230_; lean_object* v_fst_4231_; lean_object* v___x_4233_; uint8_t v_isShared_4234_; uint8_t v_isSharedCheck_4278_; 
lean_del_object(v___x_4221_);
v___x_4228_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v___x_4229_ = lean_array_get(v___x_4228_, v___y_4215_, v_snd_4219_);
v_snd_4230_ = lean_ctor_get(v___x_4229_, 1);
v_fst_4231_ = lean_ctor_get(v___x_4229_, 0);
v_isSharedCheck_4278_ = !lean_is_exclusive(v___x_4229_);
if (v_isSharedCheck_4278_ == 0)
{
v___x_4233_ = v___x_4229_;
v_isShared_4234_ = v_isSharedCheck_4278_;
goto v_resetjp_4232_;
}
else
{
lean_inc(v_snd_4230_);
lean_inc(v_fst_4231_);
lean_dec(v___x_4229_);
v___x_4233_ = lean_box(0);
v_isShared_4234_ = v_isSharedCheck_4278_;
goto v_resetjp_4232_;
}
v_resetjp_4232_:
{
lean_object* v_fst_4235_; lean_object* v_snd_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; uint8_t v___x_4246_; 
v_fst_4235_ = lean_ctor_get(v_snd_4230_, 0);
v_snd_4236_ = lean_ctor_get(v_snd_4230_, 1);
v___x_4237_ = lean_unsigned_to_nat(1u);
v___x_4238_ = lean_nat_add(v_snd_4219_, v___x_4237_);
lean_dec(v_snd_4219_);
v___x_4246_ = lean_nat_dec_eq(v___x_4238_, v___x_4223_);
if (v___x_4246_ == 0)
{
lean_object* v___x_4247_; lean_object* v_fst_4248_; lean_object* v___x_4250_; uint8_t v_isShared_4251_; uint8_t v_isSharedCheck_4276_; 
v___x_4247_ = lean_array_get(v___x_4228_, v___y_4215_, v___x_4238_);
v_fst_4248_ = lean_ctor_get(v___x_4247_, 0);
v_isSharedCheck_4276_ = !lean_is_exclusive(v___x_4247_);
if (v_isSharedCheck_4276_ == 0)
{
lean_object* v_unused_4277_; 
v_unused_4277_ = lean_ctor_get(v___x_4247_, 1);
lean_dec(v_unused_4277_);
v___x_4250_ = v___x_4247_;
v_isShared_4251_ = v_isSharedCheck_4276_;
goto v_resetjp_4249_;
}
else
{
lean_inc(v_fst_4248_);
lean_dec(v___x_4247_);
v___x_4250_ = lean_box(0);
v_isShared_4251_ = v_isSharedCheck_4276_;
goto v_resetjp_4249_;
}
v_resetjp_4249_:
{
uint64_t v___x_4252_; uint64_t v___x_4253_; uint8_t v___x_4254_; 
v___x_4252_ = lean_unbox_uint64(v_fst_4248_);
lean_dec(v_fst_4248_);
v___x_4253_ = lean_unbox_uint64(v_fst_4231_);
v___x_4254_ = lean_uint64_dec_eq(v___x_4252_, v___x_4253_);
if (v___x_4254_ == 0)
{
lean_inc(v_snd_4236_);
lean_inc(v_fst_4235_);
lean_del_object(v___x_4250_);
lean_dec(v_fst_4231_);
lean_dec(v_snd_4230_);
goto v___jp_4239_;
}
else
{
lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4259_; 
lean_del_object(v___x_4233_);
v___x_4255_ = lean_mk_empty_array_with_capacity(v___x_4237_);
lean_inc_ref(v___x_4255_);
v___x_4256_ = lean_array_push(v___x_4255_, v_snd_4230_);
v___x_4257_ = lean_array_push(v___x_4255_, v___x_4256_);
lean_inc(v___x_4238_);
if (v_isShared_4251_ == 0)
{
lean_ctor_set(v___x_4250_, 1, v___x_4257_);
lean_ctor_set(v___x_4250_, 0, v___x_4238_);
v___x_4259_ = v___x_4250_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4275_; 
v_reuseFailAlloc_4275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4275_, 0, v___x_4238_);
lean_ctor_set(v_reuseFailAlloc_4275_, 1, v___x_4257_);
v___x_4259_ = v_reuseFailAlloc_4275_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
uint64_t v___x_4260_; lean_object* v___x_4261_; lean_object* v_fst_4262_; lean_object* v_snd_4263_; lean_object* v___x_4265_; uint8_t v_isShared_4266_; uint8_t v_isSharedCheck_4274_; 
v___x_4260_ = lean_unbox_uint64(v_fst_4231_);
lean_dec(v_fst_4231_);
v___x_4261_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_4223_, v___y_4215_, v___x_4260_, v___x_4238_, v___x_4259_);
lean_dec(v___x_4238_);
v_fst_4262_ = lean_ctor_get(v___x_4261_, 0);
v_snd_4263_ = lean_ctor_get(v___x_4261_, 1);
v_isSharedCheck_4274_ = !lean_is_exclusive(v___x_4261_);
if (v_isSharedCheck_4274_ == 0)
{
v___x_4265_ = v___x_4261_;
v_isShared_4266_ = v_isSharedCheck_4274_;
goto v_resetjp_4264_;
}
else
{
lean_inc(v_snd_4263_);
lean_inc(v_fst_4262_);
lean_dec(v___x_4261_);
v___x_4265_ = lean_box(0);
v_isShared_4266_ = v_isSharedCheck_4274_;
goto v_resetjp_4264_;
}
v_resetjp_4264_:
{
size_t v___x_4267_; size_t v_sz_4268_; lean_object* v___x_4269_; lean_object* v___x_4271_; 
v___x_4267_ = ((size_t)0ULL);
v_sz_4268_ = lean_array_size(v_snd_4263_);
lean_inc_ref(v_resolve_4216_);
v___x_4269_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_4216_, v_snd_4263_, v_sz_4268_, v___x_4267_, v_fst_4218_);
lean_dec(v_snd_4263_);
if (v_isShared_4266_ == 0)
{
lean_ctor_set(v___x_4265_, 1, v_fst_4262_);
lean_ctor_set(v___x_4265_, 0, v___x_4269_);
v___x_4271_ = v___x_4265_;
goto v_reusejp_4270_;
}
else
{
lean_object* v_reuseFailAlloc_4273_; 
v_reuseFailAlloc_4273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4273_, 0, v___x_4269_);
lean_ctor_set(v_reuseFailAlloc_4273_, 1, v_fst_4262_);
v___x_4271_ = v_reuseFailAlloc_4273_;
goto v_reusejp_4270_;
}
v_reusejp_4270_:
{
lean_object* v___x_4272_; 
v___x_4272_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(v___y_4215_, v_resolve_4216_, v___x_4271_);
return v___x_4272_;
}
}
}
}
}
}
else
{
lean_inc(v_snd_4236_);
lean_inc(v_fst_4235_);
lean_dec(v_fst_4231_);
lean_dec(v_snd_4230_);
goto v___jp_4239_;
}
v___jp_4239_:
{
lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4243_; 
v___x_4240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4240_, 0, v_fst_4235_);
lean_ctor_set(v___x_4240_, 1, v_snd_4236_);
v___x_4241_ = lean_array_push(v_fst_4218_, v___x_4240_);
if (v_isShared_4234_ == 0)
{
lean_ctor_set(v___x_4233_, 1, v___x_4238_);
lean_ctor_set(v___x_4233_, 0, v___x_4241_);
v___x_4243_ = v___x_4233_;
goto v_reusejp_4242_;
}
else
{
lean_object* v_reuseFailAlloc_4245_; 
v_reuseFailAlloc_4245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4245_, 0, v___x_4241_);
lean_ctor_set(v_reuseFailAlloc_4245_, 1, v___x_4238_);
v___x_4243_ = v_reuseFailAlloc_4245_;
goto v_reusejp_4242_;
}
v_reusejp_4242_:
{
lean_object* v___x_4244_; 
v___x_4244_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(v___y_4215_, v_resolve_4216_, v___x_4243_);
return v___x_4244_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(lean_object* v_resolve_4280_, lean_object* v_cands_4281_){
_start:
{
lean_object* v___x_4282_; lean_object* v___y_4284_; size_t v_sz_4297_; size_t v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___y_4304_; lean_object* v___y_4305_; uint8_t v___x_4307_; 
v___x_4282_ = lean_unsigned_to_nat(0u);
v_sz_4297_ = lean_array_size(v_cands_4281_);
v___x_4298_ = ((size_t)0ULL);
v___x_4299_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_cands_4281_, v_sz_4297_, v___x_4298_, v___x_4282_);
v___x_4300_ = lean_mk_empty_array_with_capacity(v___x_4299_);
lean_dec(v___x_4299_);
v___x_4301_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_cands_4281_, v_sz_4297_, v___x_4298_, v___x_4300_);
v___x_4302_ = lean_array_get_size(v___x_4301_);
v___x_4307_ = lean_nat_dec_eq(v___x_4302_, v___x_4282_);
if (v___x_4307_ == 0)
{
lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___y_4311_; uint8_t v___x_4313_; 
v___x_4308_ = lean_unsigned_to_nat(1u);
v___x_4309_ = lean_nat_sub(v___x_4302_, v___x_4308_);
v___x_4313_ = lean_nat_dec_le(v___x_4282_, v___x_4309_);
if (v___x_4313_ == 0)
{
lean_inc(v___x_4309_);
v___y_4311_ = v___x_4309_;
goto v___jp_4310_;
}
else
{
v___y_4311_ = v___x_4282_;
goto v___jp_4310_;
}
v___jp_4310_:
{
uint8_t v___x_4312_; 
v___x_4312_ = lean_nat_dec_le(v___y_4311_, v___x_4309_);
if (v___x_4312_ == 0)
{
lean_dec(v___x_4309_);
lean_inc(v___y_4311_);
v___y_4304_ = v___y_4311_;
v___y_4305_ = v___y_4311_;
goto v___jp_4303_;
}
else
{
v___y_4304_ = v___y_4311_;
v___y_4305_ = v___x_4309_;
goto v___jp_4303_;
}
}
}
else
{
v___y_4284_ = v___x_4301_;
goto v___jp_4283_;
}
v___jp_4283_:
{
lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v_fst_4287_; lean_object* v___x_4289_; uint8_t v_isShared_4290_; uint8_t v_isSharedCheck_4295_; 
v___x_4285_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___closed__0));
v___x_4286_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(v___y_4284_, v_resolve_4280_, v___x_4285_);
lean_dec_ref(v___y_4284_);
v_fst_4287_ = lean_ctor_get(v___x_4286_, 0);
v_isSharedCheck_4295_ = !lean_is_exclusive(v___x_4286_);
if (v_isSharedCheck_4295_ == 0)
{
lean_object* v_unused_4296_; 
v_unused_4296_ = lean_ctor_get(v___x_4286_, 1);
lean_dec(v_unused_4296_);
v___x_4289_ = v___x_4286_;
v_isShared_4290_ = v_isSharedCheck_4295_;
goto v_resetjp_4288_;
}
else
{
lean_inc(v_fst_4287_);
lean_dec(v___x_4286_);
v___x_4289_ = lean_box(0);
v_isShared_4290_ = v_isSharedCheck_4295_;
goto v_resetjp_4288_;
}
v_resetjp_4288_:
{
lean_object* v___x_4291_; lean_object* v___x_4293_; 
v___x_4291_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v_fst_4287_);
if (v_isShared_4290_ == 0)
{
lean_ctor_set(v___x_4289_, 1, v___x_4291_);
v___x_4293_ = v___x_4289_;
goto v_reusejp_4292_;
}
else
{
lean_object* v_reuseFailAlloc_4294_; 
v_reuseFailAlloc_4294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4294_, 0, v_fst_4287_);
lean_ctor_set(v_reuseFailAlloc_4294_, 1, v___x_4291_);
v___x_4293_ = v_reuseFailAlloc_4294_;
goto v_reusejp_4292_;
}
v_reusejp_4292_:
{
return v___x_4293_;
}
}
}
v___jp_4303_:
{
lean_object* v___x_4306_; 
v___x_4306_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v___x_4302_, v___x_4301_, v___y_4304_, v___y_4305_);
lean_dec(v___y_4305_);
v___y_4284_ = v___x_4306_;
goto v___jp_4283_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(lean_object* v_resolve_4314_, lean_object* v_cands_4315_, lean_object* v_x_4316_){
_start:
{
lean_object* v___x_4317_; 
v___x_4317_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_4314_, v_cands_4315_);
return v___x_4317_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg___boxed(lean_object* v_resolve_4318_, lean_object* v_as_4319_, lean_object* v_sz_4320_, lean_object* v_i_4321_, lean_object* v_b_4322_){
_start:
{
size_t v_sz_boxed_4323_; size_t v_i_boxed_4324_; lean_object* v_res_4325_; 
v_sz_boxed_4323_ = lean_unbox_usize(v_sz_4320_);
lean_dec(v_sz_4320_);
v_i_boxed_4324_ = lean_unbox_usize(v_i_4321_);
lean_dec(v_i_4321_);
v_res_4325_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_4318_, v_as_4319_, v_sz_boxed_4323_, v_i_boxed_4324_, v_b_4322_);
lean_dec_ref(v_as_4319_);
return v_res_4325_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___boxed(lean_object* v_resolve_4326_, lean_object* v_as_4327_, lean_object* v_sz_4328_, lean_object* v_i_4329_, lean_object* v_b_4330_){
_start:
{
size_t v_sz_boxed_4331_; size_t v_i_boxed_4332_; lean_object* v_res_4333_; 
v_sz_boxed_4331_ = lean_unbox_usize(v_sz_4328_);
lean_dec(v_sz_4328_);
v_i_boxed_4332_ = lean_unbox_usize(v_i_4329_);
lean_dec(v_i_4329_);
v_res_4333_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_4326_, v_as_4327_, v_sz_boxed_4331_, v_i_boxed_4332_, v_b_4330_);
lean_dec_ref(v_as_4327_);
return v_res_4333_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___boxed(lean_object* v_resolve_4334_, lean_object* v_cands_4335_){
_start:
{
lean_object* v_res_4336_; 
v_res_4336_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_4334_, v_cands_4335_);
lean_dec_ref(v_cands_4335_);
return v_res_4336_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg___boxed(lean_object* v___y_4337_, lean_object* v_resolve_4338_, lean_object* v_a_4339_){
_start:
{
lean_object* v_res_4340_; 
v_res_4340_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(v___y_4337_, v_resolve_4338_, v_a_4339_);
lean_dec_ref(v___y_4337_);
return v_res_4340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg___boxed(lean_object* v___y_4341_, lean_object* v_resolve_4342_, lean_object* v_a_4343_){
_start:
{
lean_object* v_res_4344_; 
v_res_4344_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(v___y_4341_, v_resolve_4342_, v_a_4343_);
lean_dec_ref(v___y_4341_);
return v_res_4344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(lean_object* v_00_u03b1_4345_, lean_object* v_resolve_4346_, lean_object* v_cands_4347_){
_start:
{
lean_object* v___x_4348_; 
v___x_4348_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_4346_, v_cands_4347_);
return v___x_4348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___boxed(lean_object* v_00_u03b1_4349_, lean_object* v_resolve_4350_, lean_object* v_cands_4351_){
_start:
{
lean_object* v_res_4352_; 
v_res_4352_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(v_00_u03b1_4349_, v_resolve_4350_, v_cands_4351_);
lean_dec_ref(v_cands_4351_);
return v_res_4352_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy(lean_object* v_00_u03b1_4353_, lean_object* v_resolve_4354_, lean_object* v_key_4355_, lean_object* v_cands_4356_){
_start:
{
lean_object* v___x_4357_; 
v___x_4357_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4354_, v_key_4355_, v_cands_4356_);
return v___x_4357_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(lean_object* v_00_u03b1_4358_, lean_object* v_resolve_4359_, lean_object* v_as_4360_, size_t v_sz_4361_, size_t v_i_4362_, lean_object* v_b_4363_){
_start:
{
lean_object* v___x_4364_; 
v___x_4364_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_4359_, v_as_4360_, v_sz_4361_, v_i_4362_, v_b_4363_);
return v___x_4364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___boxed(lean_object* v_00_u03b1_4365_, lean_object* v_resolve_4366_, lean_object* v_as_4367_, lean_object* v_sz_4368_, lean_object* v_i_4369_, lean_object* v_b_4370_){
_start:
{
size_t v_sz_boxed_4371_; size_t v_i_boxed_4372_; lean_object* v_res_4373_; 
v_sz_boxed_4371_ = lean_unbox_usize(v_sz_4368_);
lean_dec(v_sz_4368_);
v_i_boxed_4372_ = lean_unbox_usize(v_i_4369_);
lean_dec(v_i_4369_);
v_res_4373_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(v_00_u03b1_4365_, v_resolve_4366_, v_as_4367_, v_sz_boxed_4371_, v_i_boxed_4372_, v_b_4370_);
lean_dec_ref(v_as_4367_);
return v_res_4373_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1(lean_object* v_00_u03b1_4374_, lean_object* v___y_4375_, lean_object* v_resolve_4376_, lean_object* v_inst_4377_, lean_object* v_a_4378_){
_start:
{
lean_object* v___x_4379_; 
v___x_4379_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(v___y_4375_, v_resolve_4376_, v_a_4378_);
return v___x_4379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___boxed(lean_object* v_00_u03b1_4380_, lean_object* v___y_4381_, lean_object* v_resolve_4382_, lean_object* v_inst_4383_, lean_object* v_a_4384_){
_start:
{
lean_object* v_res_4385_; 
v_res_4385_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1(v_00_u03b1_4380_, v___y_4381_, v_resolve_4382_, v_inst_4383_, v_a_4384_);
lean_dec_ref(v___y_4381_);
return v_res_4385_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0(lean_object* v_00_u03b1_4386_, lean_object* v_resolve_4387_, lean_object* v_as_4388_, size_t v_sz_4389_, size_t v_i_4390_, lean_object* v_b_4391_){
_start:
{
lean_object* v___x_4392_; 
v___x_4392_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_4387_, v_as_4388_, v_sz_4389_, v_i_4390_, v_b_4391_);
return v___x_4392_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___boxed(lean_object* v_00_u03b1_4393_, lean_object* v_resolve_4394_, lean_object* v_as_4395_, lean_object* v_sz_4396_, lean_object* v_i_4397_, lean_object* v_b_4398_){
_start:
{
size_t v_sz_boxed_4399_; size_t v_i_boxed_4400_; lean_object* v_res_4401_; 
v_sz_boxed_4399_ = lean_unbox_usize(v_sz_4396_);
lean_dec(v_sz_4396_);
v_i_boxed_4400_ = lean_unbox_usize(v_i_4397_);
lean_dec(v_i_4397_);
v_res_4401_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0(v_00_u03b1_4393_, v_resolve_4394_, v_as_4395_, v_sz_boxed_4399_, v_i_boxed_4400_, v_b_4398_);
lean_dec_ref(v_as_4395_);
return v_res_4401_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2(lean_object* v_00_u03b1_4402_, lean_object* v___y_4403_, lean_object* v_resolve_4404_, lean_object* v_inst_4405_, lean_object* v_a_4406_){
_start:
{
lean_object* v___x_4407_; 
v___x_4407_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(v___y_4403_, v_resolve_4404_, v_a_4406_);
return v___x_4407_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___boxed(lean_object* v_00_u03b1_4408_, lean_object* v___y_4409_, lean_object* v_resolve_4410_, lean_object* v_inst_4411_, lean_object* v_a_4412_){
_start:
{
lean_object* v_res_4413_; 
v_res_4413_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2(v_00_u03b1_4408_, v___y_4409_, v_resolve_4410_, v_inst_4411_, v_a_4412_);
lean_dec_ref(v___y_4409_);
return v_res_4413_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(lean_object* v_trees_4414_, lean_object* v_resolve_4415_){
_start:
{
lean_object* v___x_4416_; lean_object* v___x_4417_; 
v___x_4416_ = lean_box(0);
v___x_4417_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4415_, v___x_4416_, v_trees_4414_);
return v___x_4417_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy(lean_object* v_00_u03b1_4418_, lean_object* v_trees_4419_, lean_object* v_resolve_4420_){
_start:
{
lean_object* v___x_4421_; 
v___x_4421_ = l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(v_trees_4419_, v_resolve_4420_);
return v___x_4421_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg(lean_object* v_n_4423_, lean_object* v_f_4424_, lean_object* v_a_4425_){
_start:
{
switch(lean_obj_tag(v_a_4425_))
{
case 0:
{
lean_dec_ref(v_f_4424_);
return v_a_4425_;
}
case 1:
{
lean_object* v_key_4426_; lean_object* v_entry_x3f_4427_; lean_object* v_children_4428_; lean_object* v_childIndex_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; 
v_key_4426_ = lean_ctor_get(v_a_4425_, 0);
v_entry_x3f_4427_ = lean_ctor_get(v_a_4425_, 1);
v_children_4428_ = lean_ctor_get(v_a_4425_, 2);
v_childIndex_4429_ = lean_ctor_get(v_a_4425_, 3);
v___x_4430_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
v___x_4431_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg___closed__0));
v___x_4432_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___redArg(v___x_4430_, v_childIndex_4429_, v_children_4428_, v___x_4431_, v_n_4423_);
if (lean_obj_tag(v___x_4432_) == 0)
{
lean_dec_ref(v_f_4424_);
return v_a_4425_;
}
else
{
lean_object* v_val_4433_; lean_object* v___x_4434_; uint8_t v___x_4435_; 
v_val_4433_ = lean_ctor_get(v___x_4432_, 0);
lean_inc(v_val_4433_);
lean_dec_ref_known(v___x_4432_, 1);
v___x_4434_ = lean_array_get_size(v_children_4428_);
v___x_4435_ = lean_nat_dec_lt(v_val_4433_, v___x_4434_);
if (v___x_4435_ == 0)
{
lean_dec(v_val_4433_);
lean_dec_ref(v_f_4424_);
return v_a_4425_;
}
else
{
lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4447_; 
lean_inc_ref(v_childIndex_4429_);
lean_inc_ref(v_children_4428_);
lean_inc(v_entry_x3f_4427_);
lean_inc(v_key_4426_);
v_isSharedCheck_4447_ = !lean_is_exclusive(v_a_4425_);
if (v_isSharedCheck_4447_ == 0)
{
lean_object* v_unused_4448_; lean_object* v_unused_4449_; lean_object* v_unused_4450_; lean_object* v_unused_4451_; 
v_unused_4448_ = lean_ctor_get(v_a_4425_, 3);
lean_dec(v_unused_4448_);
v_unused_4449_ = lean_ctor_get(v_a_4425_, 2);
lean_dec(v_unused_4449_);
v_unused_4450_ = lean_ctor_get(v_a_4425_, 1);
lean_dec(v_unused_4450_);
v_unused_4451_ = lean_ctor_get(v_a_4425_, 0);
lean_dec(v_unused_4451_);
v___x_4437_ = v_a_4425_;
v_isShared_4438_ = v_isSharedCheck_4447_;
goto v_resetjp_4436_;
}
else
{
lean_dec(v_a_4425_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4447_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
lean_object* v_v_4439_; lean_object* v___x_4440_; lean_object* v_xs_x27_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4445_; 
v_v_4439_ = lean_array_fget(v_children_4428_, v_val_4433_);
v___x_4440_ = lean_box(0);
v_xs_x27_4441_ = lean_array_fset(v_children_4428_, v_val_4433_, v___x_4440_);
v___x_4442_ = lean_apply_1(v_f_4424_, v_v_4439_);
v___x_4443_ = lean_array_fset(v_xs_x27_4441_, v_val_4433_, v___x_4442_);
lean_dec(v_val_4433_);
if (v_isShared_4438_ == 0)
{
lean_ctor_set(v___x_4437_, 2, v___x_4443_);
v___x_4445_ = v___x_4437_;
goto v_reusejp_4444_;
}
else
{
lean_object* v_reuseFailAlloc_4446_; 
v_reuseFailAlloc_4446_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4446_, 0, v_key_4426_);
lean_ctor_set(v_reuseFailAlloc_4446_, 1, v_entry_x3f_4427_);
lean_ctor_set(v_reuseFailAlloc_4446_, 2, v___x_4443_);
lean_ctor_set(v_reuseFailAlloc_4446_, 3, v_childIndex_4429_);
v___x_4445_ = v_reuseFailAlloc_4446_;
goto v_reusejp_4444_;
}
v_reusejp_4444_:
{
return v___x_4445_;
}
}
}
}
}
case 2:
{
lean_object* v_key_4452_; lean_object* v_entry_4453_; lean_object* v_expanded_4454_; lean_object* v___x_4455_; lean_object* v_fst_4456_; lean_object* v_snd_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; 
v_key_4452_ = lean_ctor_get(v_a_4425_, 0);
lean_inc(v_key_4452_);
v_entry_4453_ = lean_ctor_get(v_a_4425_, 1);
lean_inc_ref(v_entry_4453_);
v_expanded_4454_ = lean_ctor_get(v_a_4425_, 2);
lean_inc_ref(v_expanded_4454_);
lean_dec_ref_known(v_a_4425_, 3);
v___x_4455_ = lean_imported_consts_force_shared(v_expanded_4454_);
lean_dec_ref(v_expanded_4454_);
v_fst_4456_ = lean_ctor_get(v___x_4455_, 0);
lean_inc(v_fst_4456_);
v_snd_4457_ = lean_ctor_get(v___x_4455_, 1);
lean_inc(v_snd_4457_);
lean_dec(v___x_4455_);
v___x_4458_ = lean_imported_consts_force_shared(v_entry_4453_);
lean_dec_ref(v_entry_4453_);
v___x_4459_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_4459_, 0, v_key_4452_);
lean_ctor_set(v___x_4459_, 1, v___x_4458_);
lean_ctor_set(v___x_4459_, 2, v_fst_4456_);
lean_ctor_set(v___x_4459_, 3, v_snd_4457_);
v_a_4425_ = v___x_4459_;
goto _start;
}
default: 
{
lean_object* v_tree_4461_; 
v_tree_4461_ = lean_ctor_get(v_a_4425_, 1);
lean_inc_ref(v_tree_4461_);
lean_dec_ref_known(v_a_4425_, 2);
v_a_4425_ = v_tree_4461_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg___boxed(lean_object* v_n_4463_, lean_object* v_f_4464_, lean_object* v_a_4465_){
_start:
{
lean_object* v_res_4466_; 
v_res_4466_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg(v_n_4463_, v_f_4464_, v_a_4465_);
lean_dec(v_n_4463_);
return v_res_4466_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild(lean_object* v_00_u03b1_4467_, lean_object* v_n_4468_, lean_object* v_f_4469_, lean_object* v_a_4470_){
_start:
{
lean_object* v___x_4471_; 
v___x_4471_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg(v_n_4468_, v_f_4469_, v_a_4470_);
return v___x_4471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___boxed(lean_object* v_00_u03b1_4472_, lean_object* v_n_4473_, lean_object* v_f_4474_, lean_object* v_a_4475_){
_start:
{
lean_object* v_res_4476_; 
v_res_4476_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild(v_00_u03b1_4472_, v_n_4473_, v_f_4474_, v_a_4475_);
lean_dec(v_n_4473_);
return v_res_4476_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt___redArg(lean_object* v_t_4477_, lean_object* v_n_4478_, lean_object* v_f_4479_){
_start:
{
if (lean_obj_tag(v_n_4478_) == 0)
{
lean_object* v___x_4480_; 
v___x_4480_ = lean_apply_1(v_f_4479_, v_t_4477_);
return v___x_4480_;
}
else
{
lean_object* v_pre_4481_; lean_object* v___x_4482_; 
v_pre_4481_ = lean_ctor_get(v_n_4478_, 0);
lean_inc(v_pre_4481_);
v___x_4482_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___boxed), 4, 3);
lean_closure_set(v___x_4482_, 0, lean_box(0));
lean_closure_set(v___x_4482_, 1, v_n_4478_);
lean_closure_set(v___x_4482_, 2, v_f_4479_);
v_n_4478_ = v_pre_4481_;
v_f_4479_ = v___x_4482_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt(lean_object* v_00_u03b1_4484_, lean_object* v_t_4485_, lean_object* v_n_4486_, lean_object* v_f_4487_){
_start:
{
lean_object* v___x_4488_; 
v___x_4488_ = l_Lean_ImportedConsts_modifyAt___redArg(v_t_4485_, v_n_4486_, v_f_4487_);
return v___x_4488_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceExpanded___redArg(lean_object* v_x_4489_){
_start:
{
switch(lean_obj_tag(v_x_4489_))
{
case 2:
{
lean_object* v_key_4490_; lean_object* v_entry_4491_; lean_object* v_expanded_4492_; lean_object* v___x_4493_; lean_object* v_fst_4494_; lean_object* v_snd_4495_; lean_object* v___x_4496_; size_t v_sz_4497_; size_t v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; 
v_key_4490_ = lean_ctor_get(v_x_4489_, 0);
lean_inc(v_key_4490_);
v_entry_4491_ = lean_ctor_get(v_x_4489_, 1);
lean_inc_ref(v_entry_4491_);
v_expanded_4492_ = lean_ctor_get(v_x_4489_, 2);
lean_inc_ref(v_expanded_4492_);
lean_dec_ref_known(v_x_4489_, 3);
v___x_4493_ = lean_imported_consts_force_shared(v_expanded_4492_);
lean_dec_ref(v_expanded_4492_);
v_fst_4494_ = lean_ctor_get(v___x_4493_, 0);
lean_inc(v_fst_4494_);
v_snd_4495_ = lean_ctor_get(v___x_4493_, 1);
lean_inc(v_snd_4495_);
lean_dec(v___x_4493_);
v___x_4496_ = lean_imported_consts_force_shared(v_entry_4491_);
lean_dec_ref(v_entry_4491_);
v_sz_4497_ = lean_array_size(v_fst_4494_);
v___x_4498_ = ((size_t)0ULL);
v___x_4499_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(v_sz_4497_, v___x_4498_, v_fst_4494_);
v___x_4500_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_4500_, 0, v_key_4490_);
lean_ctor_set(v___x_4500_, 1, v___x_4496_);
lean_ctor_set(v___x_4500_, 2, v___x_4499_);
lean_ctor_set(v___x_4500_, 3, v_snd_4495_);
return v___x_4500_;
}
case 1:
{
lean_object* v_key_4501_; lean_object* v_entry_x3f_4502_; lean_object* v_children_4503_; lean_object* v_childIndex_4504_; lean_object* v___x_4506_; uint8_t v_isShared_4507_; uint8_t v_isSharedCheck_4514_; 
v_key_4501_ = lean_ctor_get(v_x_4489_, 0);
v_entry_x3f_4502_ = lean_ctor_get(v_x_4489_, 1);
v_children_4503_ = lean_ctor_get(v_x_4489_, 2);
v_childIndex_4504_ = lean_ctor_get(v_x_4489_, 3);
v_isSharedCheck_4514_ = !lean_is_exclusive(v_x_4489_);
if (v_isSharedCheck_4514_ == 0)
{
v___x_4506_ = v_x_4489_;
v_isShared_4507_ = v_isSharedCheck_4514_;
goto v_resetjp_4505_;
}
else
{
lean_inc(v_childIndex_4504_);
lean_inc(v_children_4503_);
lean_inc(v_entry_x3f_4502_);
lean_inc(v_key_4501_);
lean_dec(v_x_4489_);
v___x_4506_ = lean_box(0);
v_isShared_4507_ = v_isSharedCheck_4514_;
goto v_resetjp_4505_;
}
v_resetjp_4505_:
{
size_t v_sz_4508_; size_t v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4512_; 
v_sz_4508_ = lean_array_size(v_children_4503_);
v___x_4509_ = ((size_t)0ULL);
v___x_4510_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(v_sz_4508_, v___x_4509_, v_children_4503_);
if (v_isShared_4507_ == 0)
{
lean_ctor_set(v___x_4506_, 2, v___x_4510_);
v___x_4512_ = v___x_4506_;
goto v_reusejp_4511_;
}
else
{
lean_object* v_reuseFailAlloc_4513_; 
v_reuseFailAlloc_4513_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4513_, 0, v_key_4501_);
lean_ctor_set(v_reuseFailAlloc_4513_, 1, v_entry_x3f_4502_);
lean_ctor_set(v_reuseFailAlloc_4513_, 2, v___x_4510_);
lean_ctor_set(v_reuseFailAlloc_4513_, 3, v_childIndex_4504_);
v___x_4512_ = v_reuseFailAlloc_4513_;
goto v_reusejp_4511_;
}
v_reusejp_4511_:
{
return v___x_4512_;
}
}
}
case 3:
{
lean_object* v_tree_4515_; 
v_tree_4515_ = lean_ctor_get(v_x_4489_, 1);
lean_inc_ref(v_tree_4515_);
lean_dec_ref_known(v_x_4489_, 2);
v_x_4489_ = v_tree_4515_;
goto _start;
}
default: 
{
return v_x_4489_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(size_t v_sz_4517_, size_t v_i_4518_, lean_object* v_bs_4519_){
_start:
{
uint8_t v___x_4520_; 
v___x_4520_ = lean_usize_dec_lt(v_i_4518_, v_sz_4517_);
if (v___x_4520_ == 0)
{
return v_bs_4519_;
}
else
{
lean_object* v_v_4521_; lean_object* v___x_4522_; lean_object* v_bs_x27_4523_; lean_object* v___x_4524_; size_t v___x_4525_; size_t v___x_4526_; lean_object* v___x_4527_; 
v_v_4521_ = lean_array_uget(v_bs_4519_, v_i_4518_);
v___x_4522_ = lean_unsigned_to_nat(0u);
v_bs_x27_4523_ = lean_array_uset(v_bs_4519_, v_i_4518_, v___x_4522_);
v___x_4524_ = l_Lean_ImportedConsts_forceExpanded___redArg(v_v_4521_);
v___x_4525_ = ((size_t)1ULL);
v___x_4526_ = lean_usize_add(v_i_4518_, v___x_4525_);
v___x_4527_ = lean_array_uset(v_bs_x27_4523_, v_i_4518_, v___x_4524_);
v_i_4518_ = v___x_4526_;
v_bs_4519_ = v___x_4527_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg___boxed(lean_object* v_sz_4529_, lean_object* v_i_4530_, lean_object* v_bs_4531_){
_start:
{
size_t v_sz_boxed_4532_; size_t v_i_boxed_4533_; lean_object* v_res_4534_; 
v_sz_boxed_4532_ = lean_unbox_usize(v_sz_4529_);
lean_dec(v_sz_4529_);
v_i_boxed_4533_ = lean_unbox_usize(v_i_4530_);
lean_dec(v_i_4530_);
v_res_4534_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(v_sz_boxed_4532_, v_i_boxed_4533_, v_bs_4531_);
return v_res_4534_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceExpanded(lean_object* v_00_u03b1_4535_, lean_object* v_x_4536_){
_start:
{
lean_object* v___x_4537_; 
v___x_4537_ = l_Lean_ImportedConsts_forceExpanded___redArg(v_x_4536_);
return v___x_4537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0(lean_object* v_00_u03b1_4538_, size_t v_sz_4539_, size_t v_i_4540_, lean_object* v_bs_4541_){
_start:
{
lean_object* v___x_4542_; 
v___x_4542_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(v_sz_4539_, v_i_4540_, v_bs_4541_);
return v___x_4542_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___boxed(lean_object* v_00_u03b1_4543_, lean_object* v_sz_4544_, lean_object* v_i_4545_, lean_object* v_bs_4546_){
_start:
{
size_t v_sz_boxed_4547_; size_t v_i_boxed_4548_; lean_object* v_res_4549_; 
v_sz_boxed_4547_ = lean_unbox_usize(v_sz_4544_);
lean_dec(v_sz_4544_);
v_i_boxed_4548_ = lean_unbox_usize(v_i_4545_);
lean_dec(v_i_4545_);
v_res_4549_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0(v_00_u03b1_4543_, v_sz_boxed_4547_, v_i_boxed_4548_, v_bs_4546_);
return v_res_4549_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__1(lean_object* v_toApplicative_4550_, lean_object* v_children_4551_, lean_object* v_inst_4552_, lean_object* v___f_4553_, lean_object* v_____r_4554_, lean_object* v_s_4555_){
_start:
{
lean_object* v_toPure_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; uint8_t v___x_4559_; 
v_toPure_4556_ = lean_ctor_get(v_toApplicative_4550_, 1);
lean_inc(v_toPure_4556_);
lean_dec_ref(v_toApplicative_4550_);
v___x_4557_ = lean_unsigned_to_nat(0u);
v___x_4558_ = lean_array_get_size(v_children_4551_);
v___x_4559_ = lean_nat_dec_lt(v___x_4557_, v___x_4558_);
if (v___x_4559_ == 0)
{
lean_object* v___x_4560_; 
lean_dec(v___f_4553_);
lean_dec_ref(v_inst_4552_);
lean_dec_ref(v_children_4551_);
v___x_4560_ = lean_apply_2(v_toPure_4556_, lean_box(0), v_s_4555_);
return v___x_4560_;
}
else
{
size_t v___x_4561_; size_t v___x_4562_; lean_object* v___x_4563_; 
lean_dec(v_toPure_4556_);
v___x_4561_ = ((size_t)0ULL);
v___x_4562_ = lean_usize_of_nat(v___x_4558_);
v___x_4563_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_4552_, v___f_4553_, v_children_4551_, v___x_4561_, v___x_4562_, v_s_4555_);
return v___x_4563_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__4(lean_object* v_expanded_4564_, lean_object* v_toApplicative_4565_, lean_object* v_inst_4566_, lean_object* v___f_4567_, lean_object* v_____r_4568_, lean_object* v_s_4569_){
_start:
{
lean_object* v___x_4570_; lean_object* v_fst_4571_; lean_object* v_toPure_4572_; lean_object* v___x_4573_; lean_object* v___x_4574_; uint8_t v___x_4575_; 
v___x_4570_ = lean_imported_consts_force_shared(v_expanded_4564_);
v_fst_4571_ = lean_ctor_get(v___x_4570_, 0);
lean_inc(v_fst_4571_);
lean_dec(v___x_4570_);
v_toPure_4572_ = lean_ctor_get(v_toApplicative_4565_, 1);
lean_inc(v_toPure_4572_);
lean_dec_ref(v_toApplicative_4565_);
v___x_4573_ = lean_unsigned_to_nat(0u);
v___x_4574_ = lean_array_get_size(v_fst_4571_);
v___x_4575_ = lean_nat_dec_lt(v___x_4573_, v___x_4574_);
if (v___x_4575_ == 0)
{
lean_object* v___x_4576_; 
lean_dec(v_fst_4571_);
lean_dec(v___f_4567_);
lean_dec_ref(v_inst_4566_);
v___x_4576_ = lean_apply_2(v_toPure_4572_, lean_box(0), v_s_4569_);
return v___x_4576_;
}
else
{
size_t v___x_4577_; size_t v___x_4578_; lean_object* v___x_4579_; 
lean_dec(v_toPure_4572_);
v___x_4577_ = ((size_t)0ULL);
v___x_4578_ = lean_usize_of_nat(v___x_4574_);
v___x_4579_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_4566_, v___f_4567_, v_fst_4571_, v___x_4577_, v___x_4578_, v_s_4569_);
return v___x_4579_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__4___boxed(lean_object* v_expanded_4580_, lean_object* v_toApplicative_4581_, lean_object* v_inst_4582_, lean_object* v___f_4583_, lean_object* v_____r_4584_, lean_object* v_s_4585_){
_start:
{
lean_object* v_res_4586_; 
v_res_4586_ = l_Lean_ImportedConsts_foldlM___redArg___lam__4(v_expanded_4580_, v_toApplicative_4581_, v_inst_4582_, v___f_4583_, v_____r_4584_, v_s_4585_);
lean_dec_ref(v_expanded_4580_);
return v_res_4586_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg(lean_object* v_inst_4587_, lean_object* v_t_4588_, lean_object* v_f_4589_, lean_object* v_init_4590_){
_start:
{
switch(lean_obj_tag(v_t_4588_))
{
case 0:
{
lean_object* v_tree_4591_; lean_object* v___x_4592_; 
v_tree_4591_ = lean_ctor_get(v_t_4588_, 1);
lean_inc_ref(v_tree_4591_);
lean_dec_ref_known(v_t_4588_, 2);
v___x_4592_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_4587_, v_tree_4591_, v_f_4589_, v_init_4590_);
return v___x_4592_;
}
case 1:
{
lean_object* v_toApplicative_4593_; lean_object* v_toBind_4594_; lean_object* v_key_4595_; lean_object* v_entry_x3f_4596_; lean_object* v_children_4597_; lean_object* v___f_4598_; lean_object* v___f_4599_; 
v_toApplicative_4593_ = lean_ctor_get(v_inst_4587_, 0);
lean_inc_ref_n(v_toApplicative_4593_, 2);
v_toBind_4594_ = lean_ctor_get(v_inst_4587_, 1);
v_key_4595_ = lean_ctor_get(v_t_4588_, 0);
lean_inc(v_key_4595_);
v_entry_x3f_4596_ = lean_ctor_get(v_t_4588_, 1);
lean_inc(v_entry_x3f_4596_);
v_children_4597_ = lean_ctor_get(v_t_4588_, 2);
lean_inc_ref_n(v_children_4597_, 2);
lean_dec_ref_known(v_t_4588_, 4);
lean_inc(v_f_4589_);
lean_inc_ref_n(v_inst_4587_, 2);
v___f_4598_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_4598_, 0, v_inst_4587_);
lean_closure_set(v___f_4598_, 1, v_f_4589_);
lean_inc_ref(v___f_4598_);
v___f_4599_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__1), 6, 4);
lean_closure_set(v___f_4599_, 0, v_toApplicative_4593_);
lean_closure_set(v___f_4599_, 1, v_children_4597_);
lean_closure_set(v___f_4599_, 2, v_inst_4587_);
lean_closure_set(v___f_4599_, 3, v___f_4598_);
if (lean_obj_tag(v_entry_x3f_4596_) == 1)
{
lean_object* v_val_4600_; lean_object* v_fst_4601_; lean_object* v___f_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; 
lean_inc(v_toBind_4594_);
lean_dec_ref(v___f_4598_);
lean_dec_ref(v_children_4597_);
lean_dec_ref(v_toApplicative_4593_);
lean_dec_ref(v_inst_4587_);
v_val_4600_ = lean_ctor_get(v_entry_x3f_4596_, 0);
lean_inc(v_val_4600_);
lean_dec_ref_known(v_entry_x3f_4596_, 1);
v_fst_4601_ = lean_ctor_get(v_val_4600_, 0);
lean_inc(v_fst_4601_);
lean_dec(v_val_4600_);
v___f_4602_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4602_, 0, v___f_4599_);
v___x_4603_ = lean_apply_3(v_f_4589_, v_init_4590_, v_key_4595_, v_fst_4601_);
v___x_4604_ = lean_apply_4(v_toBind_4594_, lean_box(0), lean_box(0), v___x_4603_, v___f_4602_);
return v___x_4604_;
}
else
{
lean_object* v___x_4605_; lean_object* v___x_4606_; 
lean_dec_ref(v___f_4599_);
lean_dec(v_entry_x3f_4596_);
lean_dec(v_key_4595_);
lean_dec(v_f_4589_);
v___x_4605_ = lean_box(0);
v___x_4606_ = l_Lean_ImportedConsts_foldlM___redArg___lam__1(v_toApplicative_4593_, v_children_4597_, v_inst_4587_, v___f_4598_, v___x_4605_, v_init_4590_);
return v___x_4606_;
}
}
case 2:
{
lean_object* v_toApplicative_4607_; lean_object* v_toBind_4608_; lean_object* v_key_4609_; lean_object* v_entry_4610_; lean_object* v_expanded_4611_; lean_object* v___f_4612_; lean_object* v___f_4613_; lean_object* v___x_4614_; 
v_toApplicative_4607_ = lean_ctor_get(v_inst_4587_, 0);
lean_inc_ref_n(v_toApplicative_4607_, 2);
v_toBind_4608_ = lean_ctor_get(v_inst_4587_, 1);
v_key_4609_ = lean_ctor_get(v_t_4588_, 0);
lean_inc(v_key_4609_);
v_entry_4610_ = lean_ctor_get(v_t_4588_, 1);
lean_inc_ref(v_entry_4610_);
v_expanded_4611_ = lean_ctor_get(v_t_4588_, 2);
lean_inc_ref_n(v_expanded_4611_, 2);
lean_dec_ref_known(v_t_4588_, 3);
lean_inc(v_f_4589_);
lean_inc_ref_n(v_inst_4587_, 2);
v___f_4612_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_4612_, 0, v_inst_4587_);
lean_closure_set(v___f_4612_, 1, v_f_4589_);
lean_inc_ref(v___f_4612_);
v___f_4613_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_4613_, 0, v_expanded_4611_);
lean_closure_set(v___f_4613_, 1, v_toApplicative_4607_);
lean_closure_set(v___f_4613_, 2, v_inst_4587_);
lean_closure_set(v___f_4613_, 3, v___f_4612_);
v___x_4614_ = lean_imported_consts_force_shared(v_entry_4610_);
lean_dec_ref(v_entry_4610_);
if (lean_obj_tag(v___x_4614_) == 1)
{
lean_object* v_val_4615_; lean_object* v_fst_4616_; lean_object* v___f_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; 
lean_inc(v_toBind_4608_);
lean_dec_ref(v___f_4612_);
lean_dec_ref(v_expanded_4611_);
lean_dec_ref(v_toApplicative_4607_);
lean_dec_ref(v_inst_4587_);
v_val_4615_ = lean_ctor_get(v___x_4614_, 0);
lean_inc(v_val_4615_);
lean_dec_ref_known(v___x_4614_, 1);
v_fst_4616_ = lean_ctor_get(v_val_4615_, 0);
lean_inc(v_fst_4616_);
lean_dec(v_val_4615_);
v___f_4617_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4617_, 0, v___f_4613_);
v___x_4618_ = lean_apply_3(v_f_4589_, v_init_4590_, v_key_4609_, v_fst_4616_);
v___x_4619_ = lean_apply_4(v_toBind_4608_, lean_box(0), lean_box(0), v___x_4618_, v___f_4617_);
return v___x_4619_;
}
else
{
lean_object* v___x_4620_; lean_object* v___x_4621_; 
lean_dec(v___x_4614_);
lean_dec_ref(v___f_4613_);
lean_dec(v_key_4609_);
lean_dec(v_f_4589_);
v___x_4620_ = lean_box(0);
v___x_4621_ = l_Lean_ImportedConsts_foldlM___redArg___lam__4(v_expanded_4611_, v_toApplicative_4607_, v_inst_4587_, v___f_4612_, v___x_4620_, v_init_4590_);
lean_dec_ref(v_expanded_4611_);
return v___x_4621_;
}
}
default: 
{
lean_object* v_tree_4622_; 
v_tree_4622_ = lean_ctor_get(v_t_4588_, 1);
lean_inc_ref(v_tree_4622_);
lean_dec_ref_known(v_t_4588_, 2);
v_t_4588_ = v_tree_4622_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__0(lean_object* v_inst_4624_, lean_object* v_f_4625_, lean_object* v_s_4626_, lean_object* v_c_4627_){
_start:
{
lean_object* v___x_4628_; 
v___x_4628_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4624_, v_c_4627_, v_f_4625_, v_s_4626_);
return v___x_4628_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM(lean_object* v_m_4629_, lean_object* v_00_u03b1_4630_, lean_object* v_00_u03c3_4631_, lean_object* v_inst_4632_, lean_object* v_t_4633_, lean_object* v_f_4634_, lean_object* v_init_4635_){
_start:
{
lean_object* v___x_4636_; 
v___x_4636_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4632_, v_t_4633_, v_f_4634_, v_init_4635_);
return v___x_4636_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(lean_object* v_t_4637_, lean_object* v_f_4638_, lean_object* v_init_4639_){
_start:
{
lean_object* v_key_4640_; lean_object* v_val_x3f_4641_; lean_object* v_children_4642_; lean_object* v_s_4644_; 
v_key_4640_ = lean_ctor_get(v_t_4637_, 0);
lean_inc(v_key_4640_);
v_val_x3f_4641_ = lean_ctor_get(v_t_4637_, 1);
lean_inc(v_val_x3f_4641_);
v_children_4642_ = lean_ctor_get(v_t_4637_, 2);
lean_inc_ref(v_children_4642_);
lean_dec_ref(v_t_4637_);
if (lean_obj_tag(v_val_x3f_4641_) == 1)
{
lean_object* v_val_4651_; lean_object* v___x_4652_; 
v_val_4651_ = lean_ctor_get(v_val_x3f_4641_, 0);
lean_inc(v_val_4651_);
lean_dec_ref_known(v_val_x3f_4641_, 1);
lean_inc(v_f_4638_);
v___x_4652_ = lean_apply_3(v_f_4638_, v_init_4639_, v_key_4640_, v_val_4651_);
v_s_4644_ = v___x_4652_;
goto v___jp_4643_;
}
else
{
lean_dec(v_val_x3f_4641_);
lean_dec(v_key_4640_);
v_s_4644_ = v_init_4639_;
goto v___jp_4643_;
}
v___jp_4643_:
{
lean_object* v___x_4645_; lean_object* v___x_4646_; uint8_t v___x_4647_; 
v___x_4645_ = lean_unsigned_to_nat(0u);
v___x_4646_ = lean_array_get_size(v_children_4642_);
v___x_4647_ = lean_nat_dec_lt(v___x_4645_, v___x_4646_);
if (v___x_4647_ == 0)
{
lean_dec_ref(v_children_4642_);
lean_dec(v_f_4638_);
return v_s_4644_;
}
else
{
size_t v___x_4648_; size_t v___x_4649_; lean_object* v___x_4650_; 
v___x_4648_ = ((size_t)0ULL);
v___x_4649_ = lean_usize_of_nat(v___x_4646_);
v___x_4650_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_f_4638_, v_children_4642_, v___x_4648_, v___x_4649_, v_s_4644_);
lean_dec_ref(v_children_4642_);
return v___x_4650_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(lean_object* v_f_4653_, lean_object* v_as_4654_, size_t v_i_4655_, size_t v_stop_4656_, lean_object* v_b_4657_){
_start:
{
uint8_t v___x_4658_; 
v___x_4658_ = lean_usize_dec_eq(v_i_4655_, v_stop_4656_);
if (v___x_4658_ == 0)
{
lean_object* v___x_4659_; lean_object* v___x_4660_; size_t v___x_4661_; size_t v___x_4662_; 
v___x_4659_ = lean_array_uget_borrowed(v_as_4654_, v_i_4655_);
lean_inc(v_f_4653_);
lean_inc(v___x_4659_);
v___x_4660_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v___x_4659_, v_f_4653_, v_b_4657_);
v___x_4661_ = ((size_t)1ULL);
v___x_4662_ = lean_usize_add(v_i_4655_, v___x_4661_);
v_i_4655_ = v___x_4662_;
v_b_4657_ = v___x_4660_;
goto _start;
}
else
{
lean_dec(v_f_4653_);
return v_b_4657_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_4664_, lean_object* v_as_4665_, lean_object* v_i_4666_, lean_object* v_stop_4667_, lean_object* v_b_4668_){
_start:
{
size_t v_i_boxed_4669_; size_t v_stop_boxed_4670_; lean_object* v_res_4671_; 
v_i_boxed_4669_ = lean_unbox_usize(v_i_4666_);
lean_dec(v_i_4666_);
v_stop_boxed_4670_ = lean_unbox_usize(v_stop_4667_);
lean_dec(v_stop_4667_);
v_res_4671_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_f_4664_, v_as_4665_, v_i_boxed_4669_, v_stop_boxed_4670_, v_b_4668_);
lean_dec_ref(v_as_4665_);
return v_res_4671_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(lean_object* v_t_4672_, lean_object* v_f_4673_, lean_object* v_init_4674_){
_start:
{
switch(lean_obj_tag(v_t_4672_))
{
case 0:
{
lean_object* v_tree_4675_; lean_object* v___x_4676_; 
v_tree_4675_ = lean_ctor_get(v_t_4672_, 1);
lean_inc_ref(v_tree_4675_);
lean_dec_ref_known(v_t_4672_, 2);
v___x_4676_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_tree_4675_, v_f_4673_, v_init_4674_);
return v___x_4676_;
}
case 1:
{
lean_object* v_key_4677_; lean_object* v_entry_x3f_4678_; lean_object* v_children_4679_; lean_object* v_s_4681_; 
v_key_4677_ = lean_ctor_get(v_t_4672_, 0);
lean_inc(v_key_4677_);
v_entry_x3f_4678_ = lean_ctor_get(v_t_4672_, 1);
lean_inc(v_entry_x3f_4678_);
v_children_4679_ = lean_ctor_get(v_t_4672_, 2);
lean_inc_ref(v_children_4679_);
lean_dec_ref_known(v_t_4672_, 4);
if (lean_obj_tag(v_entry_x3f_4678_) == 1)
{
lean_object* v_val_4688_; lean_object* v_fst_4689_; lean_object* v___x_4690_; 
v_val_4688_ = lean_ctor_get(v_entry_x3f_4678_, 0);
lean_inc(v_val_4688_);
lean_dec_ref_known(v_entry_x3f_4678_, 1);
v_fst_4689_ = lean_ctor_get(v_val_4688_, 0);
lean_inc(v_fst_4689_);
lean_dec(v_val_4688_);
lean_inc(v_f_4673_);
v___x_4690_ = lean_apply_3(v_f_4673_, v_init_4674_, v_key_4677_, v_fst_4689_);
v_s_4681_ = v___x_4690_;
goto v___jp_4680_;
}
else
{
lean_dec(v_entry_x3f_4678_);
lean_dec(v_key_4677_);
v_s_4681_ = v_init_4674_;
goto v___jp_4680_;
}
v___jp_4680_:
{
lean_object* v___x_4682_; lean_object* v___x_4683_; uint8_t v___x_4684_; 
v___x_4682_ = lean_unsigned_to_nat(0u);
v___x_4683_ = lean_array_get_size(v_children_4679_);
v___x_4684_ = lean_nat_dec_lt(v___x_4682_, v___x_4683_);
if (v___x_4684_ == 0)
{
lean_dec_ref(v_children_4679_);
lean_dec(v_f_4673_);
return v_s_4681_;
}
else
{
size_t v___x_4685_; size_t v___x_4686_; lean_object* v___x_4687_; 
v___x_4685_ = ((size_t)0ULL);
v___x_4686_ = lean_usize_of_nat(v___x_4683_);
v___x_4687_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4673_, v_children_4679_, v___x_4685_, v___x_4686_, v_s_4681_);
lean_dec_ref(v_children_4679_);
return v___x_4687_;
}
}
}
case 2:
{
lean_object* v_key_4691_; lean_object* v_entry_4692_; lean_object* v_expanded_4693_; lean_object* v_s_4695_; lean_object* v___x_4704_; 
v_key_4691_ = lean_ctor_get(v_t_4672_, 0);
lean_inc(v_key_4691_);
v_entry_4692_ = lean_ctor_get(v_t_4672_, 1);
lean_inc_ref(v_entry_4692_);
v_expanded_4693_ = lean_ctor_get(v_t_4672_, 2);
lean_inc_ref(v_expanded_4693_);
lean_dec_ref_known(v_t_4672_, 3);
v___x_4704_ = lean_imported_consts_force_shared(v_entry_4692_);
lean_dec_ref(v_entry_4692_);
if (lean_obj_tag(v___x_4704_) == 1)
{
lean_object* v_val_4705_; lean_object* v_fst_4706_; lean_object* v___x_4707_; 
v_val_4705_ = lean_ctor_get(v___x_4704_, 0);
lean_inc(v_val_4705_);
lean_dec_ref_known(v___x_4704_, 1);
v_fst_4706_ = lean_ctor_get(v_val_4705_, 0);
lean_inc(v_fst_4706_);
lean_dec(v_val_4705_);
lean_inc(v_f_4673_);
v___x_4707_ = lean_apply_3(v_f_4673_, v_init_4674_, v_key_4691_, v_fst_4706_);
v_s_4695_ = v___x_4707_;
goto v___jp_4694_;
}
else
{
lean_dec(v___x_4704_);
lean_dec(v_key_4691_);
v_s_4695_ = v_init_4674_;
goto v___jp_4694_;
}
v___jp_4694_:
{
lean_object* v___x_4696_; lean_object* v_fst_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; uint8_t v___x_4700_; 
v___x_4696_ = lean_imported_consts_force_shared(v_expanded_4693_);
lean_dec_ref(v_expanded_4693_);
v_fst_4697_ = lean_ctor_get(v___x_4696_, 0);
lean_inc(v_fst_4697_);
lean_dec(v___x_4696_);
v___x_4698_ = lean_unsigned_to_nat(0u);
v___x_4699_ = lean_array_get_size(v_fst_4697_);
v___x_4700_ = lean_nat_dec_lt(v___x_4698_, v___x_4699_);
if (v___x_4700_ == 0)
{
lean_dec(v_fst_4697_);
lean_dec(v_f_4673_);
return v_s_4695_;
}
else
{
size_t v___x_4701_; size_t v___x_4702_; lean_object* v___x_4703_; 
v___x_4701_ = ((size_t)0ULL);
v___x_4702_ = lean_usize_of_nat(v___x_4699_);
v___x_4703_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4673_, v_fst_4697_, v___x_4701_, v___x_4702_, v_s_4695_);
lean_dec(v_fst_4697_);
return v___x_4703_;
}
}
}
default: 
{
lean_object* v_tree_4708_; 
v_tree_4708_ = lean_ctor_get(v_t_4672_, 1);
lean_inc_ref(v_tree_4708_);
lean_dec_ref_known(v_t_4672_, 2);
v_t_4672_ = v_tree_4708_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(lean_object* v_f_4710_, lean_object* v_as_4711_, size_t v_i_4712_, size_t v_stop_4713_, lean_object* v_b_4714_){
_start:
{
uint8_t v___x_4715_; 
v___x_4715_ = lean_usize_dec_eq(v_i_4712_, v_stop_4713_);
if (v___x_4715_ == 0)
{
lean_object* v___x_4716_; lean_object* v___x_4717_; size_t v___x_4718_; size_t v___x_4719_; 
v___x_4716_ = lean_array_uget_borrowed(v_as_4711_, v_i_4712_);
lean_inc(v_f_4710_);
lean_inc(v___x_4716_);
v___x_4717_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v___x_4716_, v_f_4710_, v_b_4714_);
v___x_4718_ = ((size_t)1ULL);
v___x_4719_ = lean_usize_add(v_i_4712_, v___x_4718_);
v_i_4712_ = v___x_4719_;
v_b_4714_ = v___x_4717_;
goto _start;
}
else
{
lean_dec(v_f_4710_);
return v_b_4714_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg___boxed(lean_object* v_f_4721_, lean_object* v_as_4722_, lean_object* v_i_4723_, lean_object* v_stop_4724_, lean_object* v_b_4725_){
_start:
{
size_t v_i_boxed_4726_; size_t v_stop_boxed_4727_; lean_object* v_res_4728_; 
v_i_boxed_4726_ = lean_unbox_usize(v_i_4723_);
lean_dec(v_i_4723_);
v_stop_boxed_4727_ = lean_unbox_usize(v_stop_4724_);
lean_dec(v_stop_4724_);
v_res_4728_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4721_, v_as_4722_, v_i_boxed_4726_, v_stop_boxed_4727_, v_b_4725_);
lean_dec_ref(v_as_4722_);
return v_res_4728_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl___redArg(lean_object* v_t_4729_, lean_object* v_f_4730_, lean_object* v_init_4731_){
_start:
{
lean_object* v___x_4732_; 
v___x_4732_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4729_, v_f_4730_, v_init_4731_);
return v___x_4732_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl(lean_object* v_00_u03b1_4733_, lean_object* v_00_u03c3_4734_, lean_object* v_t_4735_, lean_object* v_f_4736_, lean_object* v_init_4737_){
_start:
{
lean_object* v___x_4738_; 
v___x_4738_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4735_, v_f_4736_, v_init_4737_);
return v___x_4738_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0(lean_object* v_00_u03b1_4739_, lean_object* v_00_u03c3_4740_, lean_object* v_t_4741_, lean_object* v_f_4742_, lean_object* v_init_4743_){
_start:
{
lean_object* v___x_4744_; 
v___x_4744_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4741_, v_f_4742_, v_init_4743_);
return v___x_4744_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0(lean_object* v_00_u03b1_4745_, lean_object* v_00_u03c3_4746_, lean_object* v_t_4747_, lean_object* v_f_4748_, lean_object* v_init_4749_){
_start:
{
lean_object* v___x_4750_; 
v___x_4750_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_t_4747_, v_f_4748_, v_init_4749_);
return v___x_4750_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1(lean_object* v_00_u03b1_4751_, lean_object* v_00_u03c3_4752_, lean_object* v_f_4753_, lean_object* v_as_4754_, size_t v_i_4755_, size_t v_stop_4756_, lean_object* v_b_4757_){
_start:
{
lean_object* v___x_4758_; 
v___x_4758_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4753_, v_as_4754_, v_i_4755_, v_stop_4756_, v_b_4757_);
return v___x_4758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4759_, lean_object* v_00_u03c3_4760_, lean_object* v_f_4761_, lean_object* v_as_4762_, lean_object* v_i_4763_, lean_object* v_stop_4764_, lean_object* v_b_4765_){
_start:
{
size_t v_i_boxed_4766_; size_t v_stop_boxed_4767_; lean_object* v_res_4768_; 
v_i_boxed_4766_ = lean_unbox_usize(v_i_4763_);
lean_dec(v_i_4763_);
v_stop_boxed_4767_ = lean_unbox_usize(v_stop_4764_);
lean_dec(v_stop_4764_);
v_res_4768_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1(v_00_u03b1_4759_, v_00_u03c3_4760_, v_f_4761_, v_as_4762_, v_i_boxed_4766_, v_stop_boxed_4767_, v_b_4765_);
lean_dec_ref(v_as_4762_);
return v_res_4768_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_4769_, lean_object* v_00_u03c3_4770_, lean_object* v_f_4771_, lean_object* v_as_4772_, size_t v_i_4773_, size_t v_stop_4774_, lean_object* v_b_4775_){
_start:
{
lean_object* v___x_4776_; 
v___x_4776_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_f_4771_, v_as_4772_, v_i_4773_, v_stop_4774_, v_b_4775_);
return v___x_4776_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4777_, lean_object* v_00_u03c3_4778_, lean_object* v_f_4779_, lean_object* v_as_4780_, lean_object* v_i_4781_, lean_object* v_stop_4782_, lean_object* v_b_4783_){
_start:
{
size_t v_i_boxed_4784_; size_t v_stop_boxed_4785_; lean_object* v_res_4786_; 
v_i_boxed_4784_ = lean_unbox_usize(v_i_4781_);
lean_dec(v_i_4781_);
v_stop_boxed_4785_ = lean_unbox_usize(v_stop_4782_);
lean_dec(v_stop_4782_);
v_res_4786_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1(v_00_u03b1_4777_, v_00_u03c3_4778_, v_f_4779_, v_as_4780_, v_i_boxed_4784_, v_stop_boxed_4785_, v_b_4783_);
lean_dec_ref(v_as_4780_);
return v_res_4786_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__0(lean_object* v_modIdx_4787_, lean_object* v_f_4788_, lean_object* v_s_4789_, lean_object* v_n_4790_, lean_object* v_v_4791_){
_start:
{
lean_object* v___x_4792_; lean_object* v___x_4793_; 
v___x_4792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4792_, 0, v_v_4791_);
lean_ctor_set(v___x_4792_, 1, v_modIdx_4787_);
v___x_4793_ = lean_apply_3(v_f_4788_, v_s_4789_, v_n_4790_, v___x_4792_);
return v___x_4793_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg(lean_object* v_inst_4794_, lean_object* v_t_4795_, lean_object* v_f_4796_, lean_object* v_init_4797_){
_start:
{
switch(lean_obj_tag(v_t_4795_))
{
case 0:
{
lean_object* v_modIdx_4798_; lean_object* v_tree_4799_; lean_object* v___f_4800_; lean_object* v___x_4801_; 
v_modIdx_4798_ = lean_ctor_get(v_t_4795_, 0);
lean_inc(v_modIdx_4798_);
v_tree_4799_ = lean_ctor_get(v_t_4795_, 1);
lean_inc_ref(v_tree_4799_);
lean_dec_ref_known(v_t_4795_, 2);
v___f_4800_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__0), 5, 2);
lean_closure_set(v___f_4800_, 0, v_modIdx_4798_);
lean_closure_set(v___f_4800_, 1, v_f_4796_);
v___x_4801_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_4794_, v_tree_4799_, v___f_4800_, v_init_4797_);
return v___x_4801_;
}
case 1:
{
lean_object* v_toApplicative_4802_; lean_object* v_toBind_4803_; lean_object* v_key_4804_; lean_object* v_entry_x3f_4805_; lean_object* v_children_4806_; lean_object* v___f_4807_; lean_object* v___f_4808_; 
v_toApplicative_4802_ = lean_ctor_get(v_inst_4794_, 0);
lean_inc_ref_n(v_toApplicative_4802_, 2);
v_toBind_4803_ = lean_ctor_get(v_inst_4794_, 1);
v_key_4804_ = lean_ctor_get(v_t_4795_, 0);
lean_inc(v_key_4804_);
v_entry_x3f_4805_ = lean_ctor_get(v_t_4795_, 1);
lean_inc(v_entry_x3f_4805_);
v_children_4806_ = lean_ctor_get(v_t_4795_, 2);
lean_inc_ref_n(v_children_4806_, 2);
lean_dec_ref_known(v_t_4795_, 4);
lean_inc(v_f_4796_);
lean_inc_ref_n(v_inst_4794_, 2);
v___f_4807_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__1), 4, 2);
lean_closure_set(v___f_4807_, 0, v_inst_4794_);
lean_closure_set(v___f_4807_, 1, v_f_4796_);
lean_inc_ref(v___f_4807_);
v___f_4808_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__1), 6, 4);
lean_closure_set(v___f_4808_, 0, v_toApplicative_4802_);
lean_closure_set(v___f_4808_, 1, v_children_4806_);
lean_closure_set(v___f_4808_, 2, v_inst_4794_);
lean_closure_set(v___f_4808_, 3, v___f_4807_);
if (lean_obj_tag(v_entry_x3f_4805_) == 1)
{
lean_object* v_val_4809_; lean_object* v___f_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; 
lean_inc(v_toBind_4803_);
lean_dec_ref(v___f_4807_);
lean_dec_ref(v_children_4806_);
lean_dec_ref(v_toApplicative_4802_);
lean_dec_ref(v_inst_4794_);
v_val_4809_ = lean_ctor_get(v_entry_x3f_4805_, 0);
lean_inc(v_val_4809_);
lean_dec_ref_known(v_entry_x3f_4805_, 1);
v___f_4810_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4810_, 0, v___f_4808_);
v___x_4811_ = lean_apply_3(v_f_4796_, v_init_4797_, v_key_4804_, v_val_4809_);
v___x_4812_ = lean_apply_4(v_toBind_4803_, lean_box(0), lean_box(0), v___x_4811_, v___f_4810_);
return v___x_4812_;
}
else
{
lean_object* v___x_4813_; lean_object* v___x_4814_; 
lean_dec_ref(v___f_4808_);
lean_dec(v_entry_x3f_4805_);
lean_dec(v_key_4804_);
lean_dec(v_f_4796_);
v___x_4813_ = lean_box(0);
v___x_4814_ = l_Lean_ImportedConsts_foldlM___redArg___lam__1(v_toApplicative_4802_, v_children_4806_, v_inst_4794_, v___f_4807_, v___x_4813_, v_init_4797_);
return v___x_4814_;
}
}
case 2:
{
lean_object* v_toApplicative_4815_; lean_object* v_toBind_4816_; lean_object* v_key_4817_; lean_object* v_entry_4818_; lean_object* v_expanded_4819_; lean_object* v___f_4820_; lean_object* v___f_4821_; lean_object* v___x_4822_; 
v_toApplicative_4815_ = lean_ctor_get(v_inst_4794_, 0);
lean_inc_ref_n(v_toApplicative_4815_, 2);
v_toBind_4816_ = lean_ctor_get(v_inst_4794_, 1);
v_key_4817_ = lean_ctor_get(v_t_4795_, 0);
lean_inc(v_key_4817_);
v_entry_4818_ = lean_ctor_get(v_t_4795_, 1);
lean_inc_ref(v_entry_4818_);
v_expanded_4819_ = lean_ctor_get(v_t_4795_, 2);
lean_inc_ref_n(v_expanded_4819_, 2);
lean_dec_ref_known(v_t_4795_, 3);
lean_inc(v_f_4796_);
lean_inc_ref_n(v_inst_4794_, 2);
v___f_4820_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__1), 4, 2);
lean_closure_set(v___f_4820_, 0, v_inst_4794_);
lean_closure_set(v___f_4820_, 1, v_f_4796_);
lean_inc_ref(v___f_4820_);
v___f_4821_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_4821_, 0, v_expanded_4819_);
lean_closure_set(v___f_4821_, 1, v_toApplicative_4815_);
lean_closure_set(v___f_4821_, 2, v_inst_4794_);
lean_closure_set(v___f_4821_, 3, v___f_4820_);
v___x_4822_ = lean_imported_consts_force_shared(v_entry_4818_);
lean_dec_ref(v_entry_4818_);
if (lean_obj_tag(v___x_4822_) == 1)
{
lean_object* v_val_4823_; lean_object* v___f_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; 
lean_inc(v_toBind_4816_);
lean_dec_ref(v___f_4820_);
lean_dec_ref(v_expanded_4819_);
lean_dec_ref(v_toApplicative_4815_);
lean_dec_ref(v_inst_4794_);
v_val_4823_ = lean_ctor_get(v___x_4822_, 0);
lean_inc(v_val_4823_);
lean_dec_ref_known(v___x_4822_, 1);
v___f_4824_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4824_, 0, v___f_4821_);
v___x_4825_ = lean_apply_3(v_f_4796_, v_init_4797_, v_key_4817_, v_val_4823_);
v___x_4826_ = lean_apply_4(v_toBind_4816_, lean_box(0), lean_box(0), v___x_4825_, v___f_4824_);
return v___x_4826_;
}
else
{
lean_object* v___x_4827_; lean_object* v___x_4828_; 
lean_dec(v___x_4822_);
lean_dec_ref(v___f_4821_);
lean_dec(v_key_4817_);
lean_dec(v_f_4796_);
v___x_4827_ = lean_box(0);
v___x_4828_ = l_Lean_ImportedConsts_foldlM___redArg___lam__4(v_expanded_4819_, v_toApplicative_4815_, v_inst_4794_, v___f_4820_, v___x_4827_, v_init_4797_);
lean_dec_ref(v_expanded_4819_);
return v___x_4828_;
}
}
default: 
{
lean_object* v_tree_4829_; 
v_tree_4829_ = lean_ctor_get(v_t_4795_, 1);
lean_inc_ref(v_tree_4829_);
lean_dec_ref_known(v_t_4795_, 2);
v_t_4795_ = v_tree_4829_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__1(lean_object* v_inst_4831_, lean_object* v_f_4832_, lean_object* v_s_4833_, lean_object* v_c_4834_){
_start:
{
lean_object* v___x_4835_; 
v___x_4835_ = l_Lean_ImportedConsts_foldlEntriesM___redArg(v_inst_4831_, v_c_4834_, v_f_4832_, v_s_4833_);
return v___x_4835_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM(lean_object* v_m_4836_, lean_object* v_00_u03b1_4837_, lean_object* v_00_u03c3_4838_, lean_object* v_inst_4839_, lean_object* v_t_4840_, lean_object* v_f_4841_, lean_object* v_init_4842_){
_start:
{
lean_object* v___x_4843_; 
v___x_4843_ = l_Lean_ImportedConsts_foldlEntriesM___redArg(v_inst_4839_, v_t_4840_, v_f_4841_, v_init_4842_);
return v___x_4843_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg___lam__0(lean_object* v_f_4844_, lean_object* v_x_4845_, lean_object* v_n_4846_, lean_object* v_v_4847_){
_start:
{
lean_object* v___x_4848_; 
v___x_4848_ = lean_apply_2(v_f_4844_, v_n_4846_, v_v_4847_);
return v___x_4848_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg(lean_object* v_inst_4849_, lean_object* v_t_4850_, lean_object* v_f_4851_){
_start:
{
lean_object* v___f_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; 
v___f_4852_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_forM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_4852_, 0, v_f_4851_);
v___x_4853_ = lean_box(0);
v___x_4854_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4849_, v_t_4850_, v___f_4852_, v___x_4853_);
return v___x_4854_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM(lean_object* v_m_4855_, lean_object* v_00_u03b1_4856_, lean_object* v_inst_4857_, lean_object* v_t_4858_, lean_object* v_f_4859_){
_start:
{
lean_object* v___x_4860_; 
v___x_4860_ = l_Lean_ImportedConsts_forM___redArg(v_inst_4857_, v_t_4858_, v_f_4859_);
return v___x_4860_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(lean_object* v_n_4861_, lean_object* v_x_4862_, lean_object* v_x_4863_){
_start:
{
lean_object* v___x_4864_; lean_object* v___x_4865_; 
v___x_4864_ = lean_unsigned_to_nat(1u);
v___x_4865_ = lean_nat_add(v_n_4861_, v___x_4864_);
return v___x_4865_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0___boxed(lean_object* v_n_4866_, lean_object* v_x_4867_, lean_object* v_x_4868_){
_start:
{
lean_object* v_res_4869_; 
v_res_4869_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(v_n_4866_, v_x_4867_, v_x_4868_);
lean_dec(v_x_4868_);
lean_dec(v_x_4867_);
lean_dec(v_n_4866_);
return v_res_4869_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(lean_object* v_t_4870_, lean_object* v_init_4871_){
_start:
{
lean_object* v_val_x3f_4872_; lean_object* v_children_4873_; lean_object* v_s_4875_; 
v_val_x3f_4872_ = lean_ctor_get(v_t_4870_, 1);
v_children_4873_ = lean_ctor_get(v_t_4870_, 2);
if (lean_obj_tag(v_val_x3f_4872_) == 1)
{
lean_object* v___x_4882_; lean_object* v___x_4883_; 
v___x_4882_ = lean_unsigned_to_nat(1u);
v___x_4883_ = lean_nat_add(v_init_4871_, v___x_4882_);
lean_dec(v_init_4871_);
v_s_4875_ = v___x_4883_;
goto v___jp_4874_;
}
else
{
v_s_4875_ = v_init_4871_;
goto v___jp_4874_;
}
v___jp_4874_:
{
lean_object* v___x_4876_; lean_object* v___x_4877_; uint8_t v___x_4878_; 
v___x_4876_ = lean_unsigned_to_nat(0u);
v___x_4877_ = lean_array_get_size(v_children_4873_);
v___x_4878_ = lean_nat_dec_lt(v___x_4876_, v___x_4877_);
if (v___x_4878_ == 0)
{
return v_s_4875_;
}
else
{
size_t v___x_4879_; size_t v___x_4880_; lean_object* v___x_4881_; 
v___x_4879_ = ((size_t)0ULL);
v___x_4880_ = lean_usize_of_nat(v___x_4877_);
v___x_4881_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_children_4873_, v___x_4879_, v___x_4880_, v_s_4875_);
return v___x_4881_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(lean_object* v_as_4884_, size_t v_i_4885_, size_t v_stop_4886_, lean_object* v_b_4887_){
_start:
{
uint8_t v___x_4888_; 
v___x_4888_ = lean_usize_dec_eq(v_i_4885_, v_stop_4886_);
if (v___x_4888_ == 0)
{
lean_object* v___x_4889_; lean_object* v___x_4890_; size_t v___x_4891_; size_t v___x_4892_; 
v___x_4889_ = lean_array_uget_borrowed(v_as_4884_, v_i_4885_);
v___x_4890_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v___x_4889_, v_b_4887_);
v___x_4891_ = ((size_t)1ULL);
v___x_4892_ = lean_usize_add(v_i_4885_, v___x_4891_);
v_i_4885_ = v___x_4892_;
v_b_4887_ = v___x_4890_;
goto _start;
}
else
{
return v_b_4887_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_4894_, lean_object* v_i_4895_, lean_object* v_stop_4896_, lean_object* v_b_4897_){
_start:
{
size_t v_i_boxed_4898_; size_t v_stop_boxed_4899_; lean_object* v_res_4900_; 
v_i_boxed_4898_ = lean_unbox_usize(v_i_4895_);
lean_dec(v_i_4895_);
v_stop_boxed_4899_ = lean_unbox_usize(v_stop_4896_);
lean_dec(v_stop_4896_);
v_res_4900_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_as_4894_, v_i_boxed_4898_, v_stop_boxed_4899_, v_b_4897_);
lean_dec_ref(v_as_4894_);
return v_res_4900_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___boxed(lean_object* v_t_4901_, lean_object* v_init_4902_){
_start:
{
lean_object* v_res_4903_; 
v_res_4903_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_4901_, v_init_4902_);
lean_dec_ref(v_t_4901_);
return v_res_4903_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(lean_object* v_t_4904_, lean_object* v_init_4905_){
_start:
{
switch(lean_obj_tag(v_t_4904_))
{
case 0:
{
lean_object* v_tree_4906_; lean_object* v___x_4907_; 
v_tree_4906_ = lean_ctor_get(v_t_4904_, 1);
v___x_4907_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_tree_4906_, v_init_4905_);
return v___x_4907_;
}
case 1:
{
lean_object* v_key_4908_; lean_object* v_entry_x3f_4909_; lean_object* v_children_4910_; lean_object* v_s_4912_; 
v_key_4908_ = lean_ctor_get(v_t_4904_, 0);
v_entry_x3f_4909_ = lean_ctor_get(v_t_4904_, 1);
v_children_4910_ = lean_ctor_get(v_t_4904_, 2);
if (lean_obj_tag(v_entry_x3f_4909_) == 1)
{
lean_object* v_val_4919_; lean_object* v_fst_4920_; lean_object* v___x_4921_; 
v_val_4919_ = lean_ctor_get(v_entry_x3f_4909_, 0);
v_fst_4920_ = lean_ctor_get(v_val_4919_, 0);
v___x_4921_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(v_init_4905_, v_key_4908_, v_fst_4920_);
lean_dec(v_init_4905_);
v_s_4912_ = v___x_4921_;
goto v___jp_4911_;
}
else
{
v_s_4912_ = v_init_4905_;
goto v___jp_4911_;
}
v___jp_4911_:
{
lean_object* v___x_4913_; lean_object* v___x_4914_; uint8_t v___x_4915_; 
v___x_4913_ = lean_unsigned_to_nat(0u);
v___x_4914_ = lean_array_get_size(v_children_4910_);
v___x_4915_ = lean_nat_dec_lt(v___x_4913_, v___x_4914_);
if (v___x_4915_ == 0)
{
return v_s_4912_;
}
else
{
size_t v___x_4916_; size_t v___x_4917_; lean_object* v___x_4918_; 
v___x_4916_ = ((size_t)0ULL);
v___x_4917_ = lean_usize_of_nat(v___x_4914_);
v___x_4918_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_children_4910_, v___x_4916_, v___x_4917_, v_s_4912_);
return v___x_4918_;
}
}
}
case 2:
{
lean_object* v_key_4922_; lean_object* v_entry_4923_; lean_object* v_expanded_4924_; lean_object* v_s_4926_; lean_object* v___x_4935_; 
v_key_4922_ = lean_ctor_get(v_t_4904_, 0);
v_entry_4923_ = lean_ctor_get(v_t_4904_, 1);
v_expanded_4924_ = lean_ctor_get(v_t_4904_, 2);
v___x_4935_ = lean_imported_consts_force_shared(v_entry_4923_);
if (lean_obj_tag(v___x_4935_) == 1)
{
lean_object* v_val_4936_; lean_object* v_fst_4937_; lean_object* v___x_4938_; 
v_val_4936_ = lean_ctor_get(v___x_4935_, 0);
lean_inc(v_val_4936_);
lean_dec_ref_known(v___x_4935_, 1);
v_fst_4937_ = lean_ctor_get(v_val_4936_, 0);
lean_inc(v_fst_4937_);
lean_dec(v_val_4936_);
v___x_4938_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(v_init_4905_, v_key_4922_, v_fst_4937_);
lean_dec(v_fst_4937_);
lean_dec(v_init_4905_);
v_s_4926_ = v___x_4938_;
goto v___jp_4925_;
}
else
{
lean_dec(v___x_4935_);
v_s_4926_ = v_init_4905_;
goto v___jp_4925_;
}
v___jp_4925_:
{
lean_object* v___x_4927_; lean_object* v_fst_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; uint8_t v___x_4931_; 
v___x_4927_ = lean_imported_consts_force_shared(v_expanded_4924_);
v_fst_4928_ = lean_ctor_get(v___x_4927_, 0);
lean_inc(v_fst_4928_);
lean_dec(v___x_4927_);
v___x_4929_ = lean_unsigned_to_nat(0u);
v___x_4930_ = lean_array_get_size(v_fst_4928_);
v___x_4931_ = lean_nat_dec_lt(v___x_4929_, v___x_4930_);
if (v___x_4931_ == 0)
{
lean_dec(v_fst_4928_);
return v_s_4926_;
}
else
{
size_t v___x_4932_; size_t v___x_4933_; lean_object* v___x_4934_; 
v___x_4932_ = ((size_t)0ULL);
v___x_4933_ = lean_usize_of_nat(v___x_4930_);
v___x_4934_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_fst_4928_, v___x_4932_, v___x_4933_, v_s_4926_);
lean_dec(v_fst_4928_);
return v___x_4934_;
}
}
}
default: 
{
lean_object* v_tree_4939_; 
v_tree_4939_ = lean_ctor_get(v_t_4904_, 1);
v_t_4904_ = v_tree_4939_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(lean_object* v_as_4941_, size_t v_i_4942_, size_t v_stop_4943_, lean_object* v_b_4944_){
_start:
{
uint8_t v___x_4945_; 
v___x_4945_ = lean_usize_dec_eq(v_i_4942_, v_stop_4943_);
if (v___x_4945_ == 0)
{
lean_object* v___x_4946_; lean_object* v___x_4947_; size_t v___x_4948_; size_t v___x_4949_; 
v___x_4946_ = lean_array_uget_borrowed(v_as_4941_, v_i_4942_);
v___x_4947_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v___x_4946_, v_b_4944_);
v___x_4948_ = ((size_t)1ULL);
v___x_4949_ = lean_usize_add(v_i_4942_, v___x_4948_);
v_i_4942_ = v___x_4949_;
v_b_4944_ = v___x_4947_;
goto _start;
}
else
{
return v_b_4944_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg___boxed(lean_object* v_as_4951_, lean_object* v_i_4952_, lean_object* v_stop_4953_, lean_object* v_b_4954_){
_start:
{
size_t v_i_boxed_4955_; size_t v_stop_boxed_4956_; lean_object* v_res_4957_; 
v_i_boxed_4955_ = lean_unbox_usize(v_i_4952_);
lean_dec(v_i_4952_);
v_stop_boxed_4956_ = lean_unbox_usize(v_stop_4953_);
lean_dec(v_stop_4953_);
v_res_4957_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_as_4951_, v_i_boxed_4955_, v_stop_boxed_4956_, v_b_4954_);
lean_dec_ref(v_as_4951_);
return v_res_4957_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___boxed(lean_object* v_t_4958_, lean_object* v_init_4959_){
_start:
{
lean_object* v_res_4960_; 
v_res_4960_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_4958_, v_init_4959_);
lean_dec_ref(v_t_4958_);
return v_res_4960_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg(lean_object* v_t_4961_){
_start:
{
lean_object* v___x_4962_; lean_object* v___x_4963_; 
v___x_4962_ = lean_unsigned_to_nat(0u);
v___x_4963_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_4961_, v___x_4962_);
return v___x_4963_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg___boxed(lean_object* v_t_4964_){
_start:
{
lean_object* v_res_4965_; 
v_res_4965_ = l_Lean_ImportedConsts_size___redArg(v_t_4964_);
lean_dec_ref(v_t_4964_);
return v_res_4965_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size(lean_object* v_00_u03b1_4966_, lean_object* v_t_4967_){
_start:
{
lean_object* v___x_4968_; 
v___x_4968_ = l_Lean_ImportedConsts_size___redArg(v_t_4967_);
return v___x_4968_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___boxed(lean_object* v_00_u03b1_4969_, lean_object* v_t_4970_){
_start:
{
lean_object* v_res_4971_; 
v_res_4971_ = l_Lean_ImportedConsts_size(v_00_u03b1_4969_, v_t_4970_);
lean_dec_ref(v_t_4970_);
return v_res_4971_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(lean_object* v_00_u03b1_4972_, lean_object* v_t_4973_, lean_object* v_init_4974_){
_start:
{
lean_object* v___x_4975_; 
v___x_4975_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_4973_, v_init_4974_);
return v___x_4975_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___boxed(lean_object* v_00_u03b1_4976_, lean_object* v_t_4977_, lean_object* v_init_4978_){
_start:
{
lean_object* v_res_4979_; 
v_res_4979_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(v_00_u03b1_4976_, v_t_4977_, v_init_4978_);
lean_dec_ref(v_t_4977_);
return v_res_4979_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(lean_object* v_00_u03b1_4980_, lean_object* v_t_4981_, lean_object* v_init_4982_){
_start:
{
lean_object* v___x_4983_; 
v___x_4983_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_4981_, v_init_4982_);
return v___x_4983_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___boxed(lean_object* v_00_u03b1_4984_, lean_object* v_t_4985_, lean_object* v_init_4986_){
_start:
{
lean_object* v_res_4987_; 
v_res_4987_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(v_00_u03b1_4984_, v_t_4985_, v_init_4986_);
lean_dec_ref(v_t_4985_);
return v_res_4987_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1(lean_object* v_00_u03b1_4988_, lean_object* v_as_4989_, size_t v_i_4990_, size_t v_stop_4991_, lean_object* v_b_4992_){
_start:
{
lean_object* v___x_4993_; 
v___x_4993_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_as_4989_, v_i_4990_, v_stop_4991_, v_b_4992_);
return v___x_4993_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4994_, lean_object* v_as_4995_, lean_object* v_i_4996_, lean_object* v_stop_4997_, lean_object* v_b_4998_){
_start:
{
size_t v_i_boxed_4999_; size_t v_stop_boxed_5000_; lean_object* v_res_5001_; 
v_i_boxed_4999_ = lean_unbox_usize(v_i_4996_);
lean_dec(v_i_4996_);
v_stop_boxed_5000_ = lean_unbox_usize(v_stop_4997_);
lean_dec(v_stop_4997_);
v_res_5001_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1(v_00_u03b1_4994_, v_as_4995_, v_i_boxed_4999_, v_stop_boxed_5000_, v_b_4998_);
lean_dec_ref(v_as_4995_);
return v_res_5001_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5002_, lean_object* v_as_5003_, size_t v_i_5004_, size_t v_stop_5005_, lean_object* v_b_5006_){
_start:
{
lean_object* v___x_5007_; 
v___x_5007_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_as_5003_, v_i_5004_, v_stop_5005_, v_b_5006_);
return v___x_5007_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5008_, lean_object* v_as_5009_, lean_object* v_i_5010_, lean_object* v_stop_5011_, lean_object* v_b_5012_){
_start:
{
size_t v_i_boxed_5013_; size_t v_stop_boxed_5014_; lean_object* v_res_5015_; 
v_i_boxed_5013_ = lean_unbox_usize(v_i_5010_);
lean_dec(v_i_5010_);
v_stop_boxed_5014_ = lean_unbox_usize(v_stop_5011_);
lean_dec(v_stop_5011_);
v_res_5015_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(v_00_u03b1_5008_, v_as_5009_, v_i_boxed_5013_, v_stop_boxed_5014_, v_b_5012_);
lean_dec_ref(v_as_5009_);
return v_res_5015_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold___redArg(lean_object* v_t_5016_, lean_object* v_f_5017_, lean_object* v_init_5018_){
_start:
{
lean_object* v___x_5019_; 
v___x_5019_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_5016_, v_f_5017_, v_init_5018_);
return v___x_5019_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold(lean_object* v_00_u03b1_5020_, lean_object* v_00_u03c3_5021_, lean_object* v_t_5022_, lean_object* v_f_5023_, lean_object* v_init_5024_){
_start:
{
lean_object* v___x_5025_; 
v___x_5025_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_5022_, v_f_5023_, v_init_5024_);
return v___x_5025_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM___redArg(lean_object* v_inst_5026_, lean_object* v_t_5027_, lean_object* v_f_5028_, lean_object* v_init_5029_){
_start:
{
lean_object* v___x_5030_; 
v___x_5030_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_5026_, v_t_5027_, v_f_5028_, v_init_5029_);
return v___x_5030_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM(lean_object* v_m_5031_, lean_object* v_00_u03b1_5032_, lean_object* v_00_u03c3_5033_, lean_object* v_inst_5034_, lean_object* v_t_5035_, lean_object* v_f_5036_, lean_object* v_init_5037_){
_start:
{
lean_object* v___x_5038_; 
v___x_5038_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_5034_, v_t_5035_, v_f_5036_, v_init_5037_);
return v___x_5038_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(lean_object* v_t_5039_, lean_object* v_init_5040_){
_start:
{
lean_object* v_key_5041_; lean_object* v_val_x3f_5042_; lean_object* v_children_5043_; lean_object* v_s_5045_; 
v_key_5041_ = lean_ctor_get(v_t_5039_, 0);
v_val_x3f_5042_ = lean_ctor_get(v_t_5039_, 1);
v_children_5043_ = lean_ctor_get(v_t_5039_, 2);
if (lean_obj_tag(v_val_x3f_5042_) == 1)
{
lean_object* v_val_5052_; lean_object* v___x_5053_; lean_object* v___x_5054_; 
v_val_5052_ = lean_ctor_get(v_val_x3f_5042_, 0);
lean_inc(v_val_5052_);
lean_inc(v_key_5041_);
v___x_5053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5053_, 0, v_key_5041_);
lean_ctor_set(v___x_5053_, 1, v_val_5052_);
v___x_5054_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5054_, 0, v___x_5053_);
lean_ctor_set(v___x_5054_, 1, v_init_5040_);
v_s_5045_ = v___x_5054_;
goto v___jp_5044_;
}
else
{
v_s_5045_ = v_init_5040_;
goto v___jp_5044_;
}
v___jp_5044_:
{
lean_object* v___x_5046_; lean_object* v___x_5047_; uint8_t v___x_5048_; 
v___x_5046_ = lean_unsigned_to_nat(0u);
v___x_5047_ = lean_array_get_size(v_children_5043_);
v___x_5048_ = lean_nat_dec_lt(v___x_5046_, v___x_5047_);
if (v___x_5048_ == 0)
{
return v_s_5045_;
}
else
{
size_t v___x_5049_; size_t v___x_5050_; lean_object* v___x_5051_; 
v___x_5049_ = ((size_t)0ULL);
v___x_5050_ = lean_usize_of_nat(v___x_5047_);
v___x_5051_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v_children_5043_, v___x_5049_, v___x_5050_, v_s_5045_);
return v___x_5051_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(lean_object* v_as_5055_, size_t v_i_5056_, size_t v_stop_5057_, lean_object* v_b_5058_){
_start:
{
uint8_t v___x_5059_; 
v___x_5059_ = lean_usize_dec_eq(v_i_5056_, v_stop_5057_);
if (v___x_5059_ == 0)
{
lean_object* v___x_5060_; lean_object* v___x_5061_; size_t v___x_5062_; size_t v___x_5063_; 
v___x_5060_ = lean_array_uget_borrowed(v_as_5055_, v_i_5056_);
v___x_5061_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v___x_5060_, v_b_5058_);
v___x_5062_ = ((size_t)1ULL);
v___x_5063_ = lean_usize_add(v_i_5056_, v___x_5062_);
v_i_5056_ = v___x_5063_;
v_b_5058_ = v___x_5061_;
goto _start;
}
else
{
return v_b_5058_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_5065_, lean_object* v_i_5066_, lean_object* v_stop_5067_, lean_object* v_b_5068_){
_start:
{
size_t v_i_boxed_5069_; size_t v_stop_boxed_5070_; lean_object* v_res_5071_; 
v_i_boxed_5069_ = lean_unbox_usize(v_i_5066_);
lean_dec(v_i_5066_);
v_stop_boxed_5070_ = lean_unbox_usize(v_stop_5067_);
lean_dec(v_stop_5067_);
v_res_5071_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v_as_5065_, v_i_boxed_5069_, v_stop_boxed_5070_, v_b_5068_);
lean_dec_ref(v_as_5065_);
return v_res_5071_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg___boxed(lean_object* v_t_5072_, lean_object* v_init_5073_){
_start:
{
lean_object* v_res_5074_; 
v_res_5074_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v_t_5072_, v_init_5073_);
lean_dec_ref(v_t_5072_);
return v_res_5074_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg___lam__0(lean_object* v_l_5075_, lean_object* v_n_5076_, lean_object* v_v_5077_){
_start:
{
lean_object* v___x_5078_; lean_object* v___x_5079_; 
v___x_5078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5078_, 0, v_n_5076_);
lean_ctor_set(v___x_5078_, 1, v_v_5077_);
v___x_5079_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5079_, 0, v___x_5078_);
lean_ctor_set(v___x_5079_, 1, v_l_5075_);
return v___x_5079_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(lean_object* v_t_5080_, lean_object* v_init_5081_){
_start:
{
switch(lean_obj_tag(v_t_5080_))
{
case 0:
{
lean_object* v_tree_5082_; lean_object* v___x_5083_; 
v_tree_5082_ = lean_ctor_get(v_t_5080_, 1);
lean_inc_ref(v_tree_5082_);
lean_dec_ref_known(v_t_5080_, 2);
v___x_5083_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v_tree_5082_, v_init_5081_);
lean_dec_ref(v_tree_5082_);
return v___x_5083_;
}
case 1:
{
lean_object* v_key_5084_; lean_object* v_entry_x3f_5085_; lean_object* v_children_5086_; lean_object* v_s_5088_; 
v_key_5084_ = lean_ctor_get(v_t_5080_, 0);
lean_inc(v_key_5084_);
v_entry_x3f_5085_ = lean_ctor_get(v_t_5080_, 1);
lean_inc(v_entry_x3f_5085_);
v_children_5086_ = lean_ctor_get(v_t_5080_, 2);
lean_inc_ref(v_children_5086_);
lean_dec_ref_known(v_t_5080_, 4);
if (lean_obj_tag(v_entry_x3f_5085_) == 1)
{
lean_object* v_val_5095_; lean_object* v_fst_5096_; lean_object* v___x_5097_; 
v_val_5095_ = lean_ctor_get(v_entry_x3f_5085_, 0);
lean_inc(v_val_5095_);
lean_dec_ref_known(v_entry_x3f_5085_, 1);
v_fst_5096_ = lean_ctor_get(v_val_5095_, 0);
lean_inc(v_fst_5096_);
lean_dec(v_val_5095_);
v___x_5097_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg___lam__0(v_init_5081_, v_key_5084_, v_fst_5096_);
v_s_5088_ = v___x_5097_;
goto v___jp_5087_;
}
else
{
lean_dec(v_entry_x3f_5085_);
lean_dec(v_key_5084_);
v_s_5088_ = v_init_5081_;
goto v___jp_5087_;
}
v___jp_5087_:
{
lean_object* v___x_5089_; lean_object* v___x_5090_; uint8_t v___x_5091_; 
v___x_5089_ = lean_unsigned_to_nat(0u);
v___x_5090_ = lean_array_get_size(v_children_5086_);
v___x_5091_ = lean_nat_dec_lt(v___x_5089_, v___x_5090_);
if (v___x_5091_ == 0)
{
lean_dec_ref(v_children_5086_);
return v_s_5088_;
}
else
{
size_t v___x_5092_; size_t v___x_5093_; lean_object* v___x_5094_; 
v___x_5092_ = ((size_t)0ULL);
v___x_5093_ = lean_usize_of_nat(v___x_5090_);
v___x_5094_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_children_5086_, v___x_5092_, v___x_5093_, v_s_5088_);
lean_dec_ref(v_children_5086_);
return v___x_5094_;
}
}
}
case 2:
{
lean_object* v_key_5098_; lean_object* v_entry_5099_; lean_object* v_expanded_5100_; lean_object* v_s_5102_; lean_object* v___x_5111_; 
v_key_5098_ = lean_ctor_get(v_t_5080_, 0);
lean_inc(v_key_5098_);
v_entry_5099_ = lean_ctor_get(v_t_5080_, 1);
lean_inc_ref(v_entry_5099_);
v_expanded_5100_ = lean_ctor_get(v_t_5080_, 2);
lean_inc_ref(v_expanded_5100_);
lean_dec_ref_known(v_t_5080_, 3);
v___x_5111_ = lean_imported_consts_force_shared(v_entry_5099_);
lean_dec_ref(v_entry_5099_);
if (lean_obj_tag(v___x_5111_) == 1)
{
lean_object* v_val_5112_; lean_object* v_fst_5113_; lean_object* v___x_5114_; 
v_val_5112_ = lean_ctor_get(v___x_5111_, 0);
lean_inc(v_val_5112_);
lean_dec_ref_known(v___x_5111_, 1);
v_fst_5113_ = lean_ctor_get(v_val_5112_, 0);
lean_inc(v_fst_5113_);
lean_dec(v_val_5112_);
v___x_5114_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg___lam__0(v_init_5081_, v_key_5098_, v_fst_5113_);
v_s_5102_ = v___x_5114_;
goto v___jp_5101_;
}
else
{
lean_dec(v___x_5111_);
lean_dec(v_key_5098_);
v_s_5102_ = v_init_5081_;
goto v___jp_5101_;
}
v___jp_5101_:
{
lean_object* v___x_5103_; lean_object* v_fst_5104_; lean_object* v___x_5105_; lean_object* v___x_5106_; uint8_t v___x_5107_; 
v___x_5103_ = lean_imported_consts_force_shared(v_expanded_5100_);
lean_dec_ref(v_expanded_5100_);
v_fst_5104_ = lean_ctor_get(v___x_5103_, 0);
lean_inc(v_fst_5104_);
lean_dec(v___x_5103_);
v___x_5105_ = lean_unsigned_to_nat(0u);
v___x_5106_ = lean_array_get_size(v_fst_5104_);
v___x_5107_ = lean_nat_dec_lt(v___x_5105_, v___x_5106_);
if (v___x_5107_ == 0)
{
lean_dec(v_fst_5104_);
return v_s_5102_;
}
else
{
size_t v___x_5108_; size_t v___x_5109_; lean_object* v___x_5110_; 
v___x_5108_ = ((size_t)0ULL);
v___x_5109_ = lean_usize_of_nat(v___x_5106_);
v___x_5110_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_fst_5104_, v___x_5108_, v___x_5109_, v_s_5102_);
lean_dec(v_fst_5104_);
return v___x_5110_;
}
}
}
default: 
{
lean_object* v_tree_5115_; 
v_tree_5115_ = lean_ctor_get(v_t_5080_, 1);
lean_inc_ref(v_tree_5115_);
lean_dec_ref_known(v_t_5080_, 2);
v_t_5080_ = v_tree_5115_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(lean_object* v_as_5117_, size_t v_i_5118_, size_t v_stop_5119_, lean_object* v_b_5120_){
_start:
{
uint8_t v___x_5121_; 
v___x_5121_ = lean_usize_dec_eq(v_i_5118_, v_stop_5119_);
if (v___x_5121_ == 0)
{
lean_object* v___x_5122_; lean_object* v___x_5123_; size_t v___x_5124_; size_t v___x_5125_; 
v___x_5122_ = lean_array_uget_borrowed(v_as_5117_, v_i_5118_);
lean_inc(v___x_5122_);
v___x_5123_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(v___x_5122_, v_b_5120_);
v___x_5124_ = ((size_t)1ULL);
v___x_5125_ = lean_usize_add(v_i_5118_, v___x_5124_);
v_i_5118_ = v___x_5125_;
v_b_5120_ = v___x_5123_;
goto _start;
}
else
{
return v_b_5120_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg___boxed(lean_object* v_as_5127_, lean_object* v_i_5128_, lean_object* v_stop_5129_, lean_object* v_b_5130_){
_start:
{
size_t v_i_boxed_5131_; size_t v_stop_boxed_5132_; lean_object* v_res_5133_; 
v_i_boxed_5131_ = lean_unbox_usize(v_i_5128_);
lean_dec(v_i_5128_);
v_stop_boxed_5132_ = lean_unbox_usize(v_stop_5129_);
lean_dec(v_stop_5129_);
v_res_5133_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_as_5127_, v_i_boxed_5131_, v_stop_boxed_5132_, v_b_5130_);
lean_dec_ref(v_as_5127_);
return v_res_5133_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toList___redArg(lean_object* v_t_5134_){
_start:
{
lean_object* v___x_5135_; lean_object* v___x_5136_; 
v___x_5135_ = lean_box(0);
v___x_5136_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(v_t_5134_, v___x_5135_);
return v___x_5136_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toList(lean_object* v_00_u03b1_5137_, lean_object* v_t_5138_){
_start:
{
lean_object* v___x_5139_; 
v___x_5139_ = l_Lean_ImportedConsts_toList___redArg(v_t_5138_);
return v___x_5139_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0(lean_object* v_00_u03b1_5140_, lean_object* v_t_5141_, lean_object* v_init_5142_){
_start:
{
lean_object* v___x_5143_; 
v___x_5143_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(v_t_5141_, v_init_5142_);
return v___x_5143_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0(lean_object* v_00_u03b1_5144_, lean_object* v_t_5145_, lean_object* v_init_5146_){
_start:
{
lean_object* v___x_5147_; 
v___x_5147_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v_t_5145_, v_init_5146_);
return v___x_5147_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5148_, lean_object* v_t_5149_, lean_object* v_init_5150_){
_start:
{
lean_object* v_res_5151_; 
v_res_5151_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0(v_00_u03b1_5148_, v_t_5149_, v_init_5150_);
lean_dec_ref(v_t_5149_);
return v_res_5151_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1(lean_object* v_00_u03b1_5152_, lean_object* v_as_5153_, size_t v_i_5154_, size_t v_stop_5155_, lean_object* v_b_5156_){
_start:
{
lean_object* v___x_5157_; 
v___x_5157_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_as_5153_, v_i_5154_, v_stop_5155_, v_b_5156_);
return v___x_5157_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5158_, lean_object* v_as_5159_, lean_object* v_i_5160_, lean_object* v_stop_5161_, lean_object* v_b_5162_){
_start:
{
size_t v_i_boxed_5163_; size_t v_stop_boxed_5164_; lean_object* v_res_5165_; 
v_i_boxed_5163_ = lean_unbox_usize(v_i_5160_);
lean_dec(v_i_5160_);
v_stop_boxed_5164_ = lean_unbox_usize(v_stop_5161_);
lean_dec(v_stop_5161_);
v_res_5165_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1(v_00_u03b1_5158_, v_as_5159_, v_i_boxed_5163_, v_stop_boxed_5164_, v_b_5162_);
lean_dec_ref(v_as_5159_);
return v_res_5165_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5166_, lean_object* v_as_5167_, size_t v_i_5168_, size_t v_stop_5169_, lean_object* v_b_5170_){
_start:
{
lean_object* v___x_5171_; 
v___x_5171_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v_as_5167_, v_i_5168_, v_stop_5169_, v_b_5170_);
return v___x_5171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5172_, lean_object* v_as_5173_, lean_object* v_i_5174_, lean_object* v_stop_5175_, lean_object* v_b_5176_){
_start:
{
size_t v_i_boxed_5177_; size_t v_stop_boxed_5178_; lean_object* v_res_5179_; 
v_i_boxed_5177_ = lean_unbox_usize(v_i_5174_);
lean_dec(v_i_5174_);
v_stop_boxed_5178_ = lean_unbox_usize(v_stop_5175_);
lean_dec(v_stop_5175_);
v_res_5179_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1(v_00_u03b1_5172_, v_as_5173_, v_i_boxed_5177_, v_stop_boxed_5178_, v_b_5176_);
lean_dec_ref(v_as_5173_);
return v_res_5179_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg___lam__0(lean_object* v_l_5180_, lean_object* v_n_5181_, lean_object* v_v_5182_){
_start:
{
lean_object* v___x_5183_; lean_object* v___x_5184_; 
v___x_5183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5183_, 0, v_n_5181_);
lean_ctor_set(v___x_5183_, 1, v_v_5182_);
v___x_5184_ = lean_array_push(v_l_5180_, v___x_5183_);
return v___x_5184_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(lean_object* v_t_5185_, lean_object* v_init_5186_){
_start:
{
lean_object* v_key_5187_; lean_object* v_val_x3f_5188_; lean_object* v_children_5189_; lean_object* v_s_5191_; 
v_key_5187_ = lean_ctor_get(v_t_5185_, 0);
v_val_x3f_5188_ = lean_ctor_get(v_t_5185_, 1);
v_children_5189_ = lean_ctor_get(v_t_5185_, 2);
if (lean_obj_tag(v_val_x3f_5188_) == 1)
{
lean_object* v_val_5198_; lean_object* v___x_5199_; lean_object* v___x_5200_; 
v_val_5198_ = lean_ctor_get(v_val_x3f_5188_, 0);
lean_inc(v_val_5198_);
lean_inc(v_key_5187_);
v___x_5199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5199_, 0, v_key_5187_);
lean_ctor_set(v___x_5199_, 1, v_val_5198_);
v___x_5200_ = lean_array_push(v_init_5186_, v___x_5199_);
v_s_5191_ = v___x_5200_;
goto v___jp_5190_;
}
else
{
v_s_5191_ = v_init_5186_;
goto v___jp_5190_;
}
v___jp_5190_:
{
lean_object* v___x_5192_; lean_object* v___x_5193_; uint8_t v___x_5194_; 
v___x_5192_ = lean_unsigned_to_nat(0u);
v___x_5193_ = lean_array_get_size(v_children_5189_);
v___x_5194_ = lean_nat_dec_lt(v___x_5192_, v___x_5193_);
if (v___x_5194_ == 0)
{
return v_s_5191_;
}
else
{
size_t v___x_5195_; size_t v___x_5196_; lean_object* v___x_5197_; 
v___x_5195_ = ((size_t)0ULL);
v___x_5196_ = lean_usize_of_nat(v___x_5193_);
v___x_5197_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_children_5189_, v___x_5195_, v___x_5196_, v_s_5191_);
return v___x_5197_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(lean_object* v_as_5201_, size_t v_i_5202_, size_t v_stop_5203_, lean_object* v_b_5204_){
_start:
{
uint8_t v___x_5205_; 
v___x_5205_ = lean_usize_dec_eq(v_i_5202_, v_stop_5203_);
if (v___x_5205_ == 0)
{
lean_object* v___x_5206_; lean_object* v___x_5207_; size_t v___x_5208_; size_t v___x_5209_; 
v___x_5206_ = lean_array_uget_borrowed(v_as_5201_, v_i_5202_);
v___x_5207_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v___x_5206_, v_b_5204_);
v___x_5208_ = ((size_t)1ULL);
v___x_5209_ = lean_usize_add(v_i_5202_, v___x_5208_);
v_i_5202_ = v___x_5209_;
v_b_5204_ = v___x_5207_;
goto _start;
}
else
{
return v_b_5204_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_5211_, lean_object* v_i_5212_, lean_object* v_stop_5213_, lean_object* v_b_5214_){
_start:
{
size_t v_i_boxed_5215_; size_t v_stop_boxed_5216_; lean_object* v_res_5217_; 
v_i_boxed_5215_ = lean_unbox_usize(v_i_5212_);
lean_dec(v_i_5212_);
v_stop_boxed_5216_ = lean_unbox_usize(v_stop_5213_);
lean_dec(v_stop_5213_);
v_res_5217_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_as_5211_, v_i_boxed_5215_, v_stop_boxed_5216_, v_b_5214_);
lean_dec_ref(v_as_5211_);
return v_res_5217_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___boxed(lean_object* v_t_5218_, lean_object* v_init_5219_){
_start:
{
lean_object* v_res_5220_; 
v_res_5220_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_t_5218_, v_init_5219_);
lean_dec_ref(v_t_5218_);
return v_res_5220_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(lean_object* v_t_5221_, lean_object* v_init_5222_){
_start:
{
switch(lean_obj_tag(v_t_5221_))
{
case 0:
{
lean_object* v_tree_5223_; lean_object* v___x_5224_; 
v_tree_5223_ = lean_ctor_get(v_t_5221_, 1);
lean_inc_ref(v_tree_5223_);
lean_dec_ref_known(v_t_5221_, 2);
v___x_5224_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_tree_5223_, v_init_5222_);
lean_dec_ref(v_tree_5223_);
return v___x_5224_;
}
case 1:
{
lean_object* v_key_5225_; lean_object* v_entry_x3f_5226_; lean_object* v_children_5227_; lean_object* v_s_5229_; 
v_key_5225_ = lean_ctor_get(v_t_5221_, 0);
lean_inc(v_key_5225_);
v_entry_x3f_5226_ = lean_ctor_get(v_t_5221_, 1);
lean_inc(v_entry_x3f_5226_);
v_children_5227_ = lean_ctor_get(v_t_5221_, 2);
lean_inc_ref(v_children_5227_);
lean_dec_ref_known(v_t_5221_, 4);
if (lean_obj_tag(v_entry_x3f_5226_) == 1)
{
lean_object* v_val_5236_; lean_object* v_fst_5237_; lean_object* v___x_5238_; 
v_val_5236_ = lean_ctor_get(v_entry_x3f_5226_, 0);
lean_inc(v_val_5236_);
lean_dec_ref_known(v_entry_x3f_5226_, 1);
v_fst_5237_ = lean_ctor_get(v_val_5236_, 0);
lean_inc(v_fst_5237_);
lean_dec(v_val_5236_);
v___x_5238_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg___lam__0(v_init_5222_, v_key_5225_, v_fst_5237_);
v_s_5229_ = v___x_5238_;
goto v___jp_5228_;
}
else
{
lean_dec(v_entry_x3f_5226_);
lean_dec(v_key_5225_);
v_s_5229_ = v_init_5222_;
goto v___jp_5228_;
}
v___jp_5228_:
{
lean_object* v___x_5230_; lean_object* v___x_5231_; uint8_t v___x_5232_; 
v___x_5230_ = lean_unsigned_to_nat(0u);
v___x_5231_ = lean_array_get_size(v_children_5227_);
v___x_5232_ = lean_nat_dec_lt(v___x_5230_, v___x_5231_);
if (v___x_5232_ == 0)
{
lean_dec_ref(v_children_5227_);
return v_s_5229_;
}
else
{
size_t v___x_5233_; size_t v___x_5234_; lean_object* v___x_5235_; 
v___x_5233_ = ((size_t)0ULL);
v___x_5234_ = lean_usize_of_nat(v___x_5231_);
v___x_5235_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_children_5227_, v___x_5233_, v___x_5234_, v_s_5229_);
lean_dec_ref(v_children_5227_);
return v___x_5235_;
}
}
}
case 2:
{
lean_object* v_key_5239_; lean_object* v_entry_5240_; lean_object* v_expanded_5241_; lean_object* v_s_5243_; lean_object* v___x_5252_; 
v_key_5239_ = lean_ctor_get(v_t_5221_, 0);
lean_inc(v_key_5239_);
v_entry_5240_ = lean_ctor_get(v_t_5221_, 1);
lean_inc_ref(v_entry_5240_);
v_expanded_5241_ = lean_ctor_get(v_t_5221_, 2);
lean_inc_ref(v_expanded_5241_);
lean_dec_ref_known(v_t_5221_, 3);
v___x_5252_ = lean_imported_consts_force_shared(v_entry_5240_);
lean_dec_ref(v_entry_5240_);
if (lean_obj_tag(v___x_5252_) == 1)
{
lean_object* v_val_5253_; lean_object* v_fst_5254_; lean_object* v___x_5255_; 
v_val_5253_ = lean_ctor_get(v___x_5252_, 0);
lean_inc(v_val_5253_);
lean_dec_ref_known(v___x_5252_, 1);
v_fst_5254_ = lean_ctor_get(v_val_5253_, 0);
lean_inc(v_fst_5254_);
lean_dec(v_val_5253_);
v___x_5255_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg___lam__0(v_init_5222_, v_key_5239_, v_fst_5254_);
v_s_5243_ = v___x_5255_;
goto v___jp_5242_;
}
else
{
lean_dec(v___x_5252_);
lean_dec(v_key_5239_);
v_s_5243_ = v_init_5222_;
goto v___jp_5242_;
}
v___jp_5242_:
{
lean_object* v___x_5244_; lean_object* v_fst_5245_; lean_object* v___x_5246_; lean_object* v___x_5247_; uint8_t v___x_5248_; 
v___x_5244_ = lean_imported_consts_force_shared(v_expanded_5241_);
lean_dec_ref(v_expanded_5241_);
v_fst_5245_ = lean_ctor_get(v___x_5244_, 0);
lean_inc(v_fst_5245_);
lean_dec(v___x_5244_);
v___x_5246_ = lean_unsigned_to_nat(0u);
v___x_5247_ = lean_array_get_size(v_fst_5245_);
v___x_5248_ = lean_nat_dec_lt(v___x_5246_, v___x_5247_);
if (v___x_5248_ == 0)
{
lean_dec(v_fst_5245_);
return v_s_5243_;
}
else
{
size_t v___x_5249_; size_t v___x_5250_; lean_object* v___x_5251_; 
v___x_5249_ = ((size_t)0ULL);
v___x_5250_ = lean_usize_of_nat(v___x_5247_);
v___x_5251_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_fst_5245_, v___x_5249_, v___x_5250_, v_s_5243_);
lean_dec(v_fst_5245_);
return v___x_5251_;
}
}
}
default: 
{
lean_object* v_tree_5256_; 
v_tree_5256_ = lean_ctor_get(v_t_5221_, 1);
lean_inc_ref(v_tree_5256_);
lean_dec_ref_known(v_t_5221_, 2);
v_t_5221_ = v_tree_5256_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(lean_object* v_as_5258_, size_t v_i_5259_, size_t v_stop_5260_, lean_object* v_b_5261_){
_start:
{
uint8_t v___x_5262_; 
v___x_5262_ = lean_usize_dec_eq(v_i_5259_, v_stop_5260_);
if (v___x_5262_ == 0)
{
lean_object* v___x_5263_; lean_object* v___x_5264_; size_t v___x_5265_; size_t v___x_5266_; 
v___x_5263_ = lean_array_uget_borrowed(v_as_5258_, v_i_5259_);
lean_inc(v___x_5263_);
v___x_5264_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(v___x_5263_, v_b_5261_);
v___x_5265_ = ((size_t)1ULL);
v___x_5266_ = lean_usize_add(v_i_5259_, v___x_5265_);
v_i_5259_ = v___x_5266_;
v_b_5261_ = v___x_5264_;
goto _start;
}
else
{
return v_b_5261_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg___boxed(lean_object* v_as_5268_, lean_object* v_i_5269_, lean_object* v_stop_5270_, lean_object* v_b_5271_){
_start:
{
size_t v_i_boxed_5272_; size_t v_stop_boxed_5273_; lean_object* v_res_5274_; 
v_i_boxed_5272_ = lean_unbox_usize(v_i_5269_);
lean_dec(v_i_5269_);
v_stop_boxed_5273_ = lean_unbox_usize(v_stop_5270_);
lean_dec(v_stop_5270_);
v_res_5274_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_as_5268_, v_i_boxed_5272_, v_stop_boxed_5273_, v_b_5271_);
lean_dec_ref(v_as_5268_);
return v_res_5274_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray___redArg(lean_object* v_t_5277_){
_start:
{
lean_object* v___x_5278_; lean_object* v___x_5279_; 
v___x_5278_ = ((lean_object*)(l_Lean_ImportedConsts_toArray___redArg___closed__0));
v___x_5279_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(v_t_5277_, v___x_5278_);
return v___x_5279_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray(lean_object* v_00_u03b1_5280_, lean_object* v_t_5281_){
_start:
{
lean_object* v___x_5282_; 
v___x_5282_ = l_Lean_ImportedConsts_toArray___redArg(v_t_5281_);
return v___x_5282_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0(lean_object* v_00_u03b1_5283_, lean_object* v_t_5284_, lean_object* v_init_5285_){
_start:
{
lean_object* v___x_5286_; 
v___x_5286_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(v_t_5284_, v_init_5285_);
return v___x_5286_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0(lean_object* v_00_u03b1_5287_, lean_object* v_t_5288_, lean_object* v_init_5289_){
_start:
{
lean_object* v___x_5290_; 
v___x_5290_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_t_5288_, v_init_5289_);
return v___x_5290_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5291_, lean_object* v_t_5292_, lean_object* v_init_5293_){
_start:
{
lean_object* v_res_5294_; 
v_res_5294_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0(v_00_u03b1_5291_, v_t_5292_, v_init_5293_);
lean_dec_ref(v_t_5292_);
return v_res_5294_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1(lean_object* v_00_u03b1_5295_, lean_object* v_as_5296_, size_t v_i_5297_, size_t v_stop_5298_, lean_object* v_b_5299_){
_start:
{
lean_object* v___x_5300_; 
v___x_5300_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_as_5296_, v_i_5297_, v_stop_5298_, v_b_5299_);
return v___x_5300_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5301_, lean_object* v_as_5302_, lean_object* v_i_5303_, lean_object* v_stop_5304_, lean_object* v_b_5305_){
_start:
{
size_t v_i_boxed_5306_; size_t v_stop_boxed_5307_; lean_object* v_res_5308_; 
v_i_boxed_5306_ = lean_unbox_usize(v_i_5303_);
lean_dec(v_i_5303_);
v_stop_boxed_5307_ = lean_unbox_usize(v_stop_5304_);
lean_dec(v_stop_5304_);
v_res_5308_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1(v_00_u03b1_5301_, v_as_5302_, v_i_boxed_5306_, v_stop_boxed_5307_, v_b_5305_);
lean_dec_ref(v_as_5302_);
return v_res_5308_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5309_, lean_object* v_as_5310_, size_t v_i_5311_, size_t v_stop_5312_, lean_object* v_b_5313_){
_start:
{
lean_object* v___x_5314_; 
v___x_5314_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_as_5310_, v_i_5311_, v_stop_5312_, v_b_5313_);
return v___x_5314_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5315_, lean_object* v_as_5316_, lean_object* v_i_5317_, lean_object* v_stop_5318_, lean_object* v_b_5319_){
_start:
{
size_t v_i_boxed_5320_; size_t v_stop_boxed_5321_; lean_object* v_res_5322_; 
v_i_boxed_5320_ = lean_unbox_usize(v_i_5317_);
lean_dec(v_i_5317_);
v_stop_boxed_5321_ = lean_unbox_usize(v_stop_5318_);
lean_dec(v_stop_5318_);
v_res_5322_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1(v_00_u03b1_5315_, v_as_5316_, v_i_boxed_5320_, v_stop_boxed_5321_, v_b_5319_);
lean_dec_ref(v_as_5316_);
return v_res_5322_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(lean_object* v_t_5323_, lean_object* v_init_5324_){
_start:
{
lean_object* v_key_5325_; lean_object* v_val_x3f_5326_; lean_object* v_children_5327_; lean_object* v_s_5329_; 
v_key_5325_ = lean_ctor_get(v_t_5323_, 0);
v_val_x3f_5326_ = lean_ctor_get(v_t_5323_, 1);
v_children_5327_ = lean_ctor_get(v_t_5323_, 2);
if (lean_obj_tag(v_val_x3f_5326_) == 1)
{
lean_object* v___x_5336_; 
lean_inc(v_key_5325_);
v___x_5336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5336_, 0, v_key_5325_);
lean_ctor_set(v___x_5336_, 1, v_init_5324_);
v_s_5329_ = v___x_5336_;
goto v___jp_5328_;
}
else
{
v_s_5329_ = v_init_5324_;
goto v___jp_5328_;
}
v___jp_5328_:
{
lean_object* v___x_5330_; lean_object* v___x_5331_; uint8_t v___x_5332_; 
v___x_5330_ = lean_unsigned_to_nat(0u);
v___x_5331_ = lean_array_get_size(v_children_5327_);
v___x_5332_ = lean_nat_dec_lt(v___x_5330_, v___x_5331_);
if (v___x_5332_ == 0)
{
return v_s_5329_;
}
else
{
size_t v___x_5333_; size_t v___x_5334_; lean_object* v___x_5335_; 
v___x_5333_ = ((size_t)0ULL);
v___x_5334_ = lean_usize_of_nat(v___x_5331_);
v___x_5335_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v_children_5327_, v___x_5333_, v___x_5334_, v_s_5329_);
return v___x_5335_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(lean_object* v_as_5337_, size_t v_i_5338_, size_t v_stop_5339_, lean_object* v_b_5340_){
_start:
{
uint8_t v___x_5341_; 
v___x_5341_ = lean_usize_dec_eq(v_i_5338_, v_stop_5339_);
if (v___x_5341_ == 0)
{
lean_object* v___x_5342_; lean_object* v___x_5343_; size_t v___x_5344_; size_t v___x_5345_; 
v___x_5342_ = lean_array_uget_borrowed(v_as_5337_, v_i_5338_);
v___x_5343_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v___x_5342_, v_b_5340_);
v___x_5344_ = ((size_t)1ULL);
v___x_5345_ = lean_usize_add(v_i_5338_, v___x_5344_);
v_i_5338_ = v___x_5345_;
v_b_5340_ = v___x_5343_;
goto _start;
}
else
{
return v_b_5340_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_5347_, lean_object* v_i_5348_, lean_object* v_stop_5349_, lean_object* v_b_5350_){
_start:
{
size_t v_i_boxed_5351_; size_t v_stop_boxed_5352_; lean_object* v_res_5353_; 
v_i_boxed_5351_ = lean_unbox_usize(v_i_5348_);
lean_dec(v_i_5348_);
v_stop_boxed_5352_ = lean_unbox_usize(v_stop_5349_);
lean_dec(v_stop_5349_);
v_res_5353_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v_as_5347_, v_i_boxed_5351_, v_stop_boxed_5352_, v_b_5350_);
lean_dec_ref(v_as_5347_);
return v_res_5353_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg___boxed(lean_object* v_t_5354_, lean_object* v_init_5355_){
_start:
{
lean_object* v_res_5356_; 
v_res_5356_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_t_5354_, v_init_5355_);
lean_dec_ref(v_t_5354_);
return v_res_5356_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(lean_object* v_t_5357_, lean_object* v_init_5358_){
_start:
{
switch(lean_obj_tag(v_t_5357_))
{
case 0:
{
lean_object* v_tree_5359_; lean_object* v___x_5360_; 
v_tree_5359_ = lean_ctor_get(v_t_5357_, 1);
v___x_5360_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_tree_5359_, v_init_5358_);
return v___x_5360_;
}
case 1:
{
lean_object* v_key_5361_; lean_object* v_entry_x3f_5362_; lean_object* v_children_5363_; lean_object* v_s_5365_; 
v_key_5361_ = lean_ctor_get(v_t_5357_, 0);
v_entry_x3f_5362_ = lean_ctor_get(v_t_5357_, 1);
v_children_5363_ = lean_ctor_get(v_t_5357_, 2);
if (lean_obj_tag(v_entry_x3f_5362_) == 1)
{
lean_object* v___x_5372_; 
lean_inc(v_key_5361_);
v___x_5372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5372_, 0, v_key_5361_);
lean_ctor_set(v___x_5372_, 1, v_init_5358_);
v_s_5365_ = v___x_5372_;
goto v___jp_5364_;
}
else
{
v_s_5365_ = v_init_5358_;
goto v___jp_5364_;
}
v___jp_5364_:
{
lean_object* v___x_5366_; lean_object* v___x_5367_; uint8_t v___x_5368_; 
v___x_5366_ = lean_unsigned_to_nat(0u);
v___x_5367_ = lean_array_get_size(v_children_5363_);
v___x_5368_ = lean_nat_dec_lt(v___x_5366_, v___x_5367_);
if (v___x_5368_ == 0)
{
return v_s_5365_;
}
else
{
size_t v___x_5369_; size_t v___x_5370_; lean_object* v___x_5371_; 
v___x_5369_ = ((size_t)0ULL);
v___x_5370_ = lean_usize_of_nat(v___x_5367_);
v___x_5371_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_children_5363_, v___x_5369_, v___x_5370_, v_s_5365_);
return v___x_5371_;
}
}
}
case 2:
{
lean_object* v_key_5373_; lean_object* v_entry_5374_; lean_object* v_expanded_5375_; lean_object* v_s_5377_; lean_object* v___x_5386_; 
v_key_5373_ = lean_ctor_get(v_t_5357_, 0);
v_entry_5374_ = lean_ctor_get(v_t_5357_, 1);
v_expanded_5375_ = lean_ctor_get(v_t_5357_, 2);
v___x_5386_ = lean_imported_consts_force_shared(v_entry_5374_);
if (lean_obj_tag(v___x_5386_) == 1)
{
lean_object* v___x_5387_; 
lean_dec_ref_known(v___x_5386_, 1);
lean_inc(v_key_5373_);
v___x_5387_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5387_, 0, v_key_5373_);
lean_ctor_set(v___x_5387_, 1, v_init_5358_);
v_s_5377_ = v___x_5387_;
goto v___jp_5376_;
}
else
{
lean_dec(v___x_5386_);
v_s_5377_ = v_init_5358_;
goto v___jp_5376_;
}
v___jp_5376_:
{
lean_object* v___x_5378_; lean_object* v_fst_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; uint8_t v___x_5382_; 
v___x_5378_ = lean_imported_consts_force_shared(v_expanded_5375_);
v_fst_5379_ = lean_ctor_get(v___x_5378_, 0);
lean_inc(v_fst_5379_);
lean_dec(v___x_5378_);
v___x_5380_ = lean_unsigned_to_nat(0u);
v___x_5381_ = lean_array_get_size(v_fst_5379_);
v___x_5382_ = lean_nat_dec_lt(v___x_5380_, v___x_5381_);
if (v___x_5382_ == 0)
{
lean_dec(v_fst_5379_);
return v_s_5377_;
}
else
{
size_t v___x_5383_; size_t v___x_5384_; lean_object* v___x_5385_; 
v___x_5383_ = ((size_t)0ULL);
v___x_5384_ = lean_usize_of_nat(v___x_5381_);
v___x_5385_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_fst_5379_, v___x_5383_, v___x_5384_, v_s_5377_);
lean_dec(v_fst_5379_);
return v___x_5385_;
}
}
}
default: 
{
lean_object* v_tree_5388_; 
v_tree_5388_ = lean_ctor_get(v_t_5357_, 1);
v_t_5357_ = v_tree_5388_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(lean_object* v_as_5390_, size_t v_i_5391_, size_t v_stop_5392_, lean_object* v_b_5393_){
_start:
{
uint8_t v___x_5394_; 
v___x_5394_ = lean_usize_dec_eq(v_i_5391_, v_stop_5392_);
if (v___x_5394_ == 0)
{
lean_object* v___x_5395_; lean_object* v___x_5396_; size_t v___x_5397_; size_t v___x_5398_; 
v___x_5395_ = lean_array_uget_borrowed(v_as_5390_, v_i_5391_);
v___x_5396_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v___x_5395_, v_b_5393_);
v___x_5397_ = ((size_t)1ULL);
v___x_5398_ = lean_usize_add(v_i_5391_, v___x_5397_);
v_i_5391_ = v___x_5398_;
v_b_5393_ = v___x_5396_;
goto _start;
}
else
{
return v_b_5393_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg___boxed(lean_object* v_as_5400_, lean_object* v_i_5401_, lean_object* v_stop_5402_, lean_object* v_b_5403_){
_start:
{
size_t v_i_boxed_5404_; size_t v_stop_boxed_5405_; lean_object* v_res_5406_; 
v_i_boxed_5404_ = lean_unbox_usize(v_i_5401_);
lean_dec(v_i_5401_);
v_stop_boxed_5405_ = lean_unbox_usize(v_stop_5402_);
lean_dec(v_stop_5402_);
v_res_5406_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_as_5400_, v_i_boxed_5404_, v_stop_boxed_5405_, v_b_5403_);
lean_dec_ref(v_as_5400_);
return v_res_5406_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg___boxed(lean_object* v_t_5407_, lean_object* v_init_5408_){
_start:
{
lean_object* v_res_5409_; 
v_res_5409_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v_t_5407_, v_init_5408_);
lean_dec_ref(v_t_5407_);
return v_res_5409_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___redArg(lean_object* v_t_5410_){
_start:
{
lean_object* v___x_5411_; lean_object* v___x_5412_; 
v___x_5411_ = lean_box(0);
v___x_5412_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v_t_5410_, v___x_5411_);
return v___x_5412_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___redArg___boxed(lean_object* v_t_5413_){
_start:
{
lean_object* v_res_5414_; 
v_res_5414_ = l_Lean_ImportedConsts_keys___redArg(v_t_5413_);
lean_dec_ref(v_t_5413_);
return v_res_5414_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys(lean_object* v_00_u03b1_5415_, lean_object* v_t_5416_){
_start:
{
lean_object* v___x_5417_; 
v___x_5417_ = l_Lean_ImportedConsts_keys___redArg(v_t_5416_);
return v___x_5417_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___boxed(lean_object* v_00_u03b1_5418_, lean_object* v_t_5419_){
_start:
{
lean_object* v_res_5420_; 
v_res_5420_ = l_Lean_ImportedConsts_keys(v_00_u03b1_5418_, v_t_5419_);
lean_dec_ref(v_t_5419_);
return v_res_5420_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0(lean_object* v_00_u03b1_5421_, lean_object* v_t_5422_, lean_object* v_init_5423_){
_start:
{
lean_object* v___x_5424_; 
v___x_5424_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v_t_5422_, v_init_5423_);
return v___x_5424_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___boxed(lean_object* v_00_u03b1_5425_, lean_object* v_t_5426_, lean_object* v_init_5427_){
_start:
{
lean_object* v_res_5428_; 
v_res_5428_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0(v_00_u03b1_5425_, v_t_5426_, v_init_5427_);
lean_dec_ref(v_t_5426_);
return v_res_5428_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0(lean_object* v_00_u03b1_5429_, lean_object* v_t_5430_, lean_object* v_init_5431_){
_start:
{
lean_object* v___x_5432_; 
v___x_5432_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_t_5430_, v_init_5431_);
return v___x_5432_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5433_, lean_object* v_t_5434_, lean_object* v_init_5435_){
_start:
{
lean_object* v_res_5436_; 
v_res_5436_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0(v_00_u03b1_5433_, v_t_5434_, v_init_5435_);
lean_dec_ref(v_t_5434_);
return v_res_5436_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1(lean_object* v_00_u03b1_5437_, lean_object* v_as_5438_, size_t v_i_5439_, size_t v_stop_5440_, lean_object* v_b_5441_){
_start:
{
lean_object* v___x_5442_; 
v___x_5442_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_as_5438_, v_i_5439_, v_stop_5440_, v_b_5441_);
return v___x_5442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5443_, lean_object* v_as_5444_, lean_object* v_i_5445_, lean_object* v_stop_5446_, lean_object* v_b_5447_){
_start:
{
size_t v_i_boxed_5448_; size_t v_stop_boxed_5449_; lean_object* v_res_5450_; 
v_i_boxed_5448_ = lean_unbox_usize(v_i_5445_);
lean_dec(v_i_5445_);
v_stop_boxed_5449_ = lean_unbox_usize(v_stop_5446_);
lean_dec(v_stop_5446_);
v_res_5450_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1(v_00_u03b1_5443_, v_as_5444_, v_i_boxed_5448_, v_stop_boxed_5449_, v_b_5447_);
lean_dec_ref(v_as_5444_);
return v_res_5450_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5451_, lean_object* v_as_5452_, size_t v_i_5453_, size_t v_stop_5454_, lean_object* v_b_5455_){
_start:
{
lean_object* v___x_5456_; 
v___x_5456_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v_as_5452_, v_i_5453_, v_stop_5454_, v_b_5455_);
return v___x_5456_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5457_, lean_object* v_as_5458_, lean_object* v_i_5459_, lean_object* v_stop_5460_, lean_object* v_b_5461_){
_start:
{
size_t v_i_boxed_5462_; size_t v_stop_boxed_5463_; lean_object* v_res_5464_; 
v_i_boxed_5462_ = lean_unbox_usize(v_i_5459_);
lean_dec(v_i_5459_);
v_stop_boxed_5463_ = lean_unbox_usize(v_stop_5460_);
lean_dec(v_stop_5460_);
v_res_5464_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1(v_00_u03b1_5457_, v_as_5458_, v_i_boxed_5462_, v_stop_boxed_5463_, v_b_5461_);
lean_dec_ref(v_as_5458_);
return v_res_5464_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(lean_object* v_t_5465_, lean_object* v_init_5466_){
_start:
{
lean_object* v_val_x3f_5467_; lean_object* v_children_5468_; lean_object* v_s_5470_; 
v_val_x3f_5467_ = lean_ctor_get(v_t_5465_, 1);
v_children_5468_ = lean_ctor_get(v_t_5465_, 2);
if (lean_obj_tag(v_val_x3f_5467_) == 1)
{
lean_object* v_val_5477_; lean_object* v___x_5478_; 
v_val_5477_ = lean_ctor_get(v_val_x3f_5467_, 0);
lean_inc(v_val_5477_);
v___x_5478_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5478_, 0, v_val_5477_);
lean_ctor_set(v___x_5478_, 1, v_init_5466_);
v_s_5470_ = v___x_5478_;
goto v___jp_5469_;
}
else
{
v_s_5470_ = v_init_5466_;
goto v___jp_5469_;
}
v___jp_5469_:
{
lean_object* v___x_5471_; lean_object* v___x_5472_; uint8_t v___x_5473_; 
v___x_5471_ = lean_unsigned_to_nat(0u);
v___x_5472_ = lean_array_get_size(v_children_5468_);
v___x_5473_ = lean_nat_dec_lt(v___x_5471_, v___x_5472_);
if (v___x_5473_ == 0)
{
return v_s_5470_;
}
else
{
size_t v___x_5474_; size_t v___x_5475_; lean_object* v___x_5476_; 
v___x_5474_ = ((size_t)0ULL);
v___x_5475_ = lean_usize_of_nat(v___x_5472_);
v___x_5476_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_children_5468_, v___x_5474_, v___x_5475_, v_s_5470_);
return v___x_5476_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(lean_object* v_as_5479_, size_t v_i_5480_, size_t v_stop_5481_, lean_object* v_b_5482_){
_start:
{
uint8_t v___x_5483_; 
v___x_5483_ = lean_usize_dec_eq(v_i_5480_, v_stop_5481_);
if (v___x_5483_ == 0)
{
lean_object* v___x_5484_; lean_object* v___x_5485_; size_t v___x_5486_; size_t v___x_5487_; 
v___x_5484_ = lean_array_uget_borrowed(v_as_5479_, v_i_5480_);
v___x_5485_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v___x_5484_, v_b_5482_);
v___x_5486_ = ((size_t)1ULL);
v___x_5487_ = lean_usize_add(v_i_5480_, v___x_5486_);
v_i_5480_ = v___x_5487_;
v_b_5482_ = v___x_5485_;
goto _start;
}
else
{
return v_b_5482_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_5489_, lean_object* v_i_5490_, lean_object* v_stop_5491_, lean_object* v_b_5492_){
_start:
{
size_t v_i_boxed_5493_; size_t v_stop_boxed_5494_; lean_object* v_res_5495_; 
v_i_boxed_5493_ = lean_unbox_usize(v_i_5490_);
lean_dec(v_i_5490_);
v_stop_boxed_5494_ = lean_unbox_usize(v_stop_5491_);
lean_dec(v_stop_5491_);
v_res_5495_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_as_5489_, v_i_boxed_5493_, v_stop_boxed_5494_, v_b_5492_);
lean_dec_ref(v_as_5489_);
return v_res_5495_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg___boxed(lean_object* v_t_5496_, lean_object* v_init_5497_){
_start:
{
lean_object* v_res_5498_; 
v_res_5498_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_t_5496_, v_init_5497_);
lean_dec_ref(v_t_5496_);
return v_res_5498_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(lean_object* v_t_5499_, lean_object* v_init_5500_){
_start:
{
switch(lean_obj_tag(v_t_5499_))
{
case 0:
{
lean_object* v_tree_5501_; lean_object* v___x_5502_; 
v_tree_5501_ = lean_ctor_get(v_t_5499_, 1);
lean_inc_ref(v_tree_5501_);
lean_dec_ref_known(v_t_5499_, 2);
v___x_5502_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_tree_5501_, v_init_5500_);
lean_dec_ref(v_tree_5501_);
return v___x_5502_;
}
case 1:
{
lean_object* v_entry_x3f_5503_; lean_object* v_children_5504_; lean_object* v_s_5506_; 
v_entry_x3f_5503_ = lean_ctor_get(v_t_5499_, 1);
lean_inc(v_entry_x3f_5503_);
v_children_5504_ = lean_ctor_get(v_t_5499_, 2);
lean_inc_ref(v_children_5504_);
lean_dec_ref_known(v_t_5499_, 4);
if (lean_obj_tag(v_entry_x3f_5503_) == 1)
{
lean_object* v_val_5513_; lean_object* v_fst_5514_; lean_object* v___x_5516_; uint8_t v_isShared_5517_; uint8_t v_isSharedCheck_5521_; 
v_val_5513_ = lean_ctor_get(v_entry_x3f_5503_, 0);
lean_inc(v_val_5513_);
lean_dec_ref_known(v_entry_x3f_5503_, 1);
v_fst_5514_ = lean_ctor_get(v_val_5513_, 0);
v_isSharedCheck_5521_ = !lean_is_exclusive(v_val_5513_);
if (v_isSharedCheck_5521_ == 0)
{
lean_object* v_unused_5522_; 
v_unused_5522_ = lean_ctor_get(v_val_5513_, 1);
lean_dec(v_unused_5522_);
v___x_5516_ = v_val_5513_;
v_isShared_5517_ = v_isSharedCheck_5521_;
goto v_resetjp_5515_;
}
else
{
lean_inc(v_fst_5514_);
lean_dec(v_val_5513_);
v___x_5516_ = lean_box(0);
v_isShared_5517_ = v_isSharedCheck_5521_;
goto v_resetjp_5515_;
}
v_resetjp_5515_:
{
lean_object* v___x_5519_; 
if (v_isShared_5517_ == 0)
{
lean_ctor_set_tag(v___x_5516_, 1);
lean_ctor_set(v___x_5516_, 1, v_init_5500_);
v___x_5519_ = v___x_5516_;
goto v_reusejp_5518_;
}
else
{
lean_object* v_reuseFailAlloc_5520_; 
v_reuseFailAlloc_5520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5520_, 0, v_fst_5514_);
lean_ctor_set(v_reuseFailAlloc_5520_, 1, v_init_5500_);
v___x_5519_ = v_reuseFailAlloc_5520_;
goto v_reusejp_5518_;
}
v_reusejp_5518_:
{
v_s_5506_ = v___x_5519_;
goto v___jp_5505_;
}
}
}
else
{
lean_dec(v_entry_x3f_5503_);
v_s_5506_ = v_init_5500_;
goto v___jp_5505_;
}
v___jp_5505_:
{
lean_object* v___x_5507_; lean_object* v___x_5508_; uint8_t v___x_5509_; 
v___x_5507_ = lean_unsigned_to_nat(0u);
v___x_5508_ = lean_array_get_size(v_children_5504_);
v___x_5509_ = lean_nat_dec_lt(v___x_5507_, v___x_5508_);
if (v___x_5509_ == 0)
{
lean_dec_ref(v_children_5504_);
return v_s_5506_;
}
else
{
size_t v___x_5510_; size_t v___x_5511_; lean_object* v___x_5512_; 
v___x_5510_ = ((size_t)0ULL);
v___x_5511_ = lean_usize_of_nat(v___x_5508_);
v___x_5512_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(v_children_5504_, v___x_5510_, v___x_5511_, v_s_5506_);
lean_dec_ref(v_children_5504_);
return v___x_5512_;
}
}
}
case 2:
{
lean_object* v_entry_5523_; lean_object* v_expanded_5524_; lean_object* v_s_5526_; lean_object* v___x_5535_; 
v_entry_5523_ = lean_ctor_get(v_t_5499_, 1);
lean_inc_ref(v_entry_5523_);
v_expanded_5524_ = lean_ctor_get(v_t_5499_, 2);
lean_inc_ref(v_expanded_5524_);
lean_dec_ref_known(v_t_5499_, 3);
v___x_5535_ = lean_imported_consts_force_shared(v_entry_5523_);
lean_dec_ref(v_entry_5523_);
if (lean_obj_tag(v___x_5535_) == 1)
{
lean_object* v_val_5536_; lean_object* v_fst_5537_; lean_object* v___x_5539_; uint8_t v_isShared_5540_; uint8_t v_isSharedCheck_5544_; 
v_val_5536_ = lean_ctor_get(v___x_5535_, 0);
lean_inc(v_val_5536_);
lean_dec_ref_known(v___x_5535_, 1);
v_fst_5537_ = lean_ctor_get(v_val_5536_, 0);
v_isSharedCheck_5544_ = !lean_is_exclusive(v_val_5536_);
if (v_isSharedCheck_5544_ == 0)
{
lean_object* v_unused_5545_; 
v_unused_5545_ = lean_ctor_get(v_val_5536_, 1);
lean_dec(v_unused_5545_);
v___x_5539_ = v_val_5536_;
v_isShared_5540_ = v_isSharedCheck_5544_;
goto v_resetjp_5538_;
}
else
{
lean_inc(v_fst_5537_);
lean_dec(v_val_5536_);
v___x_5539_ = lean_box(0);
v_isShared_5540_ = v_isSharedCheck_5544_;
goto v_resetjp_5538_;
}
v_resetjp_5538_:
{
lean_object* v___x_5542_; 
if (v_isShared_5540_ == 0)
{
lean_ctor_set_tag(v___x_5539_, 1);
lean_ctor_set(v___x_5539_, 1, v_init_5500_);
v___x_5542_ = v___x_5539_;
goto v_reusejp_5541_;
}
else
{
lean_object* v_reuseFailAlloc_5543_; 
v_reuseFailAlloc_5543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5543_, 0, v_fst_5537_);
lean_ctor_set(v_reuseFailAlloc_5543_, 1, v_init_5500_);
v___x_5542_ = v_reuseFailAlloc_5543_;
goto v_reusejp_5541_;
}
v_reusejp_5541_:
{
v_s_5526_ = v___x_5542_;
goto v___jp_5525_;
}
}
}
else
{
lean_dec(v___x_5535_);
v_s_5526_ = v_init_5500_;
goto v___jp_5525_;
}
v___jp_5525_:
{
lean_object* v___x_5527_; lean_object* v_fst_5528_; lean_object* v___x_5529_; lean_object* v___x_5530_; uint8_t v___x_5531_; 
v___x_5527_ = lean_imported_consts_force_shared(v_expanded_5524_);
lean_dec_ref(v_expanded_5524_);
v_fst_5528_ = lean_ctor_get(v___x_5527_, 0);
lean_inc(v_fst_5528_);
lean_dec(v___x_5527_);
v___x_5529_ = lean_unsigned_to_nat(0u);
v___x_5530_ = lean_array_get_size(v_fst_5528_);
v___x_5531_ = lean_nat_dec_lt(v___x_5529_, v___x_5530_);
if (v___x_5531_ == 0)
{
lean_dec(v_fst_5528_);
return v_s_5526_;
}
else
{
size_t v___x_5532_; size_t v___x_5533_; lean_object* v___x_5534_; 
v___x_5532_ = ((size_t)0ULL);
v___x_5533_ = lean_usize_of_nat(v___x_5530_);
v___x_5534_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(v_fst_5528_, v___x_5532_, v___x_5533_, v_s_5526_);
lean_dec(v_fst_5528_);
return v___x_5534_;
}
}
}
default: 
{
lean_object* v_tree_5546_; 
v_tree_5546_ = lean_ctor_get(v_t_5499_, 1);
lean_inc_ref(v_tree_5546_);
lean_dec_ref_known(v_t_5499_, 2);
v_t_5499_ = v_tree_5546_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(lean_object* v_as_5548_, size_t v_i_5549_, size_t v_stop_5550_, lean_object* v_b_5551_){
_start:
{
uint8_t v___x_5552_; 
v___x_5552_ = lean_usize_dec_eq(v_i_5549_, v_stop_5550_);
if (v___x_5552_ == 0)
{
lean_object* v___x_5553_; lean_object* v___x_5554_; size_t v___x_5555_; size_t v___x_5556_; 
v___x_5553_ = lean_array_uget_borrowed(v_as_5548_, v_i_5549_);
lean_inc(v___x_5553_);
v___x_5554_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(v___x_5553_, v_b_5551_);
v___x_5555_ = ((size_t)1ULL);
v___x_5556_ = lean_usize_add(v_i_5549_, v___x_5555_);
v_i_5549_ = v___x_5556_;
v_b_5551_ = v___x_5554_;
goto _start;
}
else
{
return v_b_5551_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg___boxed(lean_object* v_as_5558_, lean_object* v_i_5559_, lean_object* v_stop_5560_, lean_object* v_b_5561_){
_start:
{
size_t v_i_boxed_5562_; size_t v_stop_boxed_5563_; lean_object* v_res_5564_; 
v_i_boxed_5562_ = lean_unbox_usize(v_i_5559_);
lean_dec(v_i_5559_);
v_stop_boxed_5563_ = lean_unbox_usize(v_stop_5560_);
lean_dec(v_stop_5560_);
v_res_5564_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(v_as_5558_, v_i_boxed_5562_, v_stop_boxed_5563_, v_b_5561_);
lean_dec_ref(v_as_5558_);
return v_res_5564_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values___redArg(lean_object* v_t_5565_){
_start:
{
lean_object* v___x_5566_; lean_object* v___x_5567_; 
v___x_5566_ = lean_box(0);
v___x_5567_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(v_t_5565_, v___x_5566_);
return v___x_5567_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values(lean_object* v_00_u03b1_5568_, lean_object* v_t_5569_){
_start:
{
lean_object* v___x_5570_; 
v___x_5570_ = l_Lean_ImportedConsts_values___redArg(v_t_5569_);
return v___x_5570_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0(lean_object* v_00_u03b1_5571_, lean_object* v_t_5572_, lean_object* v_init_5573_){
_start:
{
lean_object* v___x_5574_; 
v___x_5574_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(v_t_5572_, v_init_5573_);
return v___x_5574_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0(lean_object* v_00_u03b1_5575_, lean_object* v_t_5576_, lean_object* v_init_5577_){
_start:
{
lean_object* v___x_5578_; 
v___x_5578_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_t_5576_, v_init_5577_);
return v___x_5578_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5579_, lean_object* v_t_5580_, lean_object* v_init_5581_){
_start:
{
lean_object* v_res_5582_; 
v_res_5582_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0(v_00_u03b1_5579_, v_t_5580_, v_init_5581_);
lean_dec_ref(v_t_5580_);
return v_res_5582_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1(lean_object* v_00_u03b1_5583_, lean_object* v_as_5584_, size_t v_i_5585_, size_t v_stop_5586_, lean_object* v_b_5587_){
_start:
{
lean_object* v___x_5588_; 
v___x_5588_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(v_as_5584_, v_i_5585_, v_stop_5586_, v_b_5587_);
return v___x_5588_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5589_, lean_object* v_as_5590_, lean_object* v_i_5591_, lean_object* v_stop_5592_, lean_object* v_b_5593_){
_start:
{
size_t v_i_boxed_5594_; size_t v_stop_boxed_5595_; lean_object* v_res_5596_; 
v_i_boxed_5594_ = lean_unbox_usize(v_i_5591_);
lean_dec(v_i_5591_);
v_stop_boxed_5595_ = lean_unbox_usize(v_stop_5592_);
lean_dec(v_stop_5592_);
v_res_5596_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1(v_00_u03b1_5589_, v_as_5590_, v_i_boxed_5594_, v_stop_boxed_5595_, v_b_5593_);
lean_dec_ref(v_as_5590_);
return v_res_5596_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5597_, lean_object* v_as_5598_, size_t v_i_5599_, size_t v_stop_5600_, lean_object* v_b_5601_){
_start:
{
lean_object* v___x_5602_; 
v___x_5602_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_as_5598_, v_i_5599_, v_stop_5600_, v_b_5601_);
return v___x_5602_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5603_, lean_object* v_as_5604_, lean_object* v_i_5605_, lean_object* v_stop_5606_, lean_object* v_b_5607_){
_start:
{
size_t v_i_boxed_5608_; size_t v_stop_boxed_5609_; lean_object* v_res_5610_; 
v_i_boxed_5608_ = lean_unbox_usize(v_i_5605_);
lean_dec(v_i_5605_);
v_stop_boxed_5609_ = lean_unbox_usize(v_stop_5606_);
lean_dec(v_stop_5606_);
v_res_5610_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1(v_00_u03b1_5603_, v_as_5604_, v_i_boxed_5608_, v_stop_boxed_5609_, v_b_5607_);
lean_dec_ref(v_as_5604_);
return v_res_5610_;
}
}
static lean_object* _init_l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_5614_; lean_object* v___x_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; lean_object* v___x_5618_; lean_object* v___x_5619_; 
v___x_5614_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__2));
v___x_5615_ = lean_unsigned_to_nat(14u);
v___x_5616_ = lean_unsigned_to_nat(22u);
v___x_5617_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__1));
v___x_5618_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__0));
v___x_5619_ = l_mkPanicMessageWithDecl(v___x_5618_, v___x_5617_, v___x_5616_, v___x_5615_, v___x_5614_);
return v___x_5619_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0(lean_object* v_inst_5620_, lean_object* v_t_5621_, lean_object* v_n_5622_, lean_object* v_x_5623_){
_start:
{
lean_object* v___x_5624_; 
v___x_5624_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_5621_, v_n_5622_);
if (lean_obj_tag(v___x_5624_) == 0)
{
lean_object* v___x_5625_; lean_object* v___x_5626_; 
v___x_5625_ = lean_obj_once(&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3, &l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3_once, _init_l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3);
v___x_5626_ = l_panic___redArg(v_inst_5620_, v___x_5625_);
return v___x_5626_;
}
else
{
lean_object* v_val_5627_; 
v_val_5627_ = lean_ctor_get(v___x_5624_, 0);
lean_inc(v_val_5627_);
lean_dec_ref_known(v___x_5624_, 1);
return v_val_5627_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___boxed(lean_object* v_inst_5628_, lean_object* v_t_5629_, lean_object* v_n_5630_, lean_object* v_x_5631_){
_start:
{
lean_object* v_res_5632_; 
v_res_5632_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0(v_inst_5628_, v_t_5629_, v_n_5630_, v_x_5631_);
lean_dec(v_inst_5628_);
return v_res_5632_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1(lean_object* v_inst_5633_, lean_object* v_xs_5634_, lean_object* v_i_5635_){
_start:
{
lean_object* v___x_5636_; 
v___x_5636_ = l_Lean_ImportedConsts_find_x3f___redArg(v_xs_5634_, v_i_5635_);
if (lean_obj_tag(v___x_5636_) == 0)
{
lean_object* v___x_5637_; 
v___x_5637_ = l_outOfBounds___redArg(v_inst_5633_);
return v___x_5637_;
}
else
{
lean_object* v_val_5638_; 
v_val_5638_ = lean_ctor_get(v___x_5636_, 0);
lean_inc(v_val_5638_);
lean_dec_ref_known(v___x_5636_, 1);
return v_val_5638_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1___boxed(lean_object* v_inst_5639_, lean_object* v_xs_5640_, lean_object* v_i_5641_){
_start:
{
lean_object* v_res_5642_; 
v_res_5642_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1(v_inst_5639_, v_xs_5640_, v_i_5641_);
lean_dec(v_inst_5639_);
return v_res_5642_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg(lean_object* v_inst_5645_){
_start:
{
lean_object* v___f_5646_; lean_object* v___f_5647_; lean_object* v___f_5648_; lean_object* v___x_5649_; 
v___f_5646_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_5646_, 0, v_inst_5645_);
v___f_5647_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__0));
v___f_5648_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__1));
v___x_5649_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5649_, 0, v___f_5646_);
lean_ctor_set(v___x_5649_, 1, v___f_5647_);
lean_ctor_set(v___x_5649_, 2, v___f_5648_);
return v___x_5649_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited(lean_object* v_00_u03b1_5650_, lean_object* v_inst_5651_){
_start:
{
lean_object* v___x_5652_; 
v___x_5652_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg(v_inst_5651_);
return v___x_5652_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__0(lean_object* v_f_5653_, lean_object* v_n_5654_, lean_object* v_v_5655_){
_start:
{
lean_object* v___x_5656_; lean_object* v___x_5657_; 
v___x_5656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5656_, 0, v_n_5654_);
lean_ctor_set(v___x_5656_, 1, v_v_5655_);
v___x_5657_ = lean_apply_1(v_f_5653_, v___x_5656_);
return v___x_5657_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1(lean_object* v_inst_5658_, lean_object* v_t_5659_, lean_object* v_f_5660_){
_start:
{
lean_object* v___f_5661_; lean_object* v___x_5662_; 
v___f_5661_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__0), 3, 1);
lean_closure_set(v___f_5661_, 0, v_f_5660_);
v___x_5662_ = l_Lean_ImportedConsts_forM___redArg(v_inst_5658_, v_t_5659_, v___f_5661_);
return v___x_5662_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg(lean_object* v_inst_5663_){
_start:
{
lean_object* v___f_5664_; 
v___f_5664_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_5664_, 0, v_inst_5663_);
return v___f_5664_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad(lean_object* v_m_5665_, lean_object* v_00_u03b1_5666_, lean_object* v_inst_5667_){
_start:
{
lean_object* v___f_5668_; 
v___f_5668_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_5668_, 0, v_inst_5667_);
return v___f_5668_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0(lean_object* v_toPure_5669_, lean_object* v_____do__lift_5670_){
_start:
{
if (lean_obj_tag(v_____do__lift_5670_) == 0)
{
lean_object* v_a_5671_; lean_object* v___x_5672_; 
v_a_5671_ = lean_ctor_get(v_____do__lift_5670_, 0);
lean_inc(v_a_5671_);
lean_dec_ref_known(v_____do__lift_5670_, 1);
v___x_5672_ = lean_apply_2(v_toPure_5669_, lean_box(0), v_a_5671_);
return v___x_5672_;
}
else
{
lean_object* v_a_5673_; lean_object* v_snd_5674_; lean_object* v___x_5675_; 
v_a_5673_ = lean_ctor_get(v_____do__lift_5670_, 0);
lean_inc(v_a_5673_);
lean_dec_ref_known(v_____do__lift_5670_, 1);
v_snd_5674_ = lean_ctor_get(v_a_5673_, 1);
lean_inc(v_snd_5674_);
lean_dec(v_a_5673_);
v___x_5675_ = lean_apply_2(v_toPure_5669_, lean_box(0), v_snd_5674_);
return v___x_5675_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1(lean_object* v_toPure_5676_, lean_object* v_____do__lift_5677_){
_start:
{
if (lean_obj_tag(v_____do__lift_5677_) == 0)
{
lean_object* v_a_5678_; lean_object* v___x_5680_; uint8_t v_isShared_5681_; uint8_t v_isSharedCheck_5686_; 
v_a_5678_ = lean_ctor_get(v_____do__lift_5677_, 0);
v_isSharedCheck_5686_ = !lean_is_exclusive(v_____do__lift_5677_);
if (v_isSharedCheck_5686_ == 0)
{
v___x_5680_ = v_____do__lift_5677_;
v_isShared_5681_ = v_isSharedCheck_5686_;
goto v_resetjp_5679_;
}
else
{
lean_inc(v_a_5678_);
lean_dec(v_____do__lift_5677_);
v___x_5680_ = lean_box(0);
v_isShared_5681_ = v_isSharedCheck_5686_;
goto v_resetjp_5679_;
}
v_resetjp_5679_:
{
lean_object* v___x_5683_; 
if (v_isShared_5681_ == 0)
{
v___x_5683_ = v___x_5680_;
goto v_reusejp_5682_;
}
else
{
lean_object* v_reuseFailAlloc_5685_; 
v_reuseFailAlloc_5685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5685_, 0, v_a_5678_);
v___x_5683_ = v_reuseFailAlloc_5685_;
goto v_reusejp_5682_;
}
v_reusejp_5682_:
{
lean_object* v___x_5684_; 
v___x_5684_ = lean_apply_2(v_toPure_5676_, lean_box(0), v___x_5683_);
return v___x_5684_;
}
}
}
else
{
lean_object* v_a_5687_; lean_object* v___x_5689_; uint8_t v_isShared_5690_; uint8_t v_isSharedCheck_5697_; 
v_a_5687_ = lean_ctor_get(v_____do__lift_5677_, 0);
v_isSharedCheck_5697_ = !lean_is_exclusive(v_____do__lift_5677_);
if (v_isSharedCheck_5697_ == 0)
{
v___x_5689_ = v_____do__lift_5677_;
v_isShared_5690_ = v_isSharedCheck_5697_;
goto v_resetjp_5688_;
}
else
{
lean_inc(v_a_5687_);
lean_dec(v_____do__lift_5677_);
v___x_5689_ = lean_box(0);
v_isShared_5690_ = v_isSharedCheck_5697_;
goto v_resetjp_5688_;
}
v_resetjp_5688_:
{
lean_object* v___x_5691_; lean_object* v___x_5692_; lean_object* v___x_5694_; 
v___x_5691_ = lean_box(0);
v___x_5692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5692_, 0, v___x_5691_);
lean_ctor_set(v___x_5692_, 1, v_a_5687_);
if (v_isShared_5690_ == 0)
{
lean_ctor_set(v___x_5689_, 0, v___x_5692_);
v___x_5694_ = v___x_5689_;
goto v_reusejp_5693_;
}
else
{
lean_object* v_reuseFailAlloc_5696_; 
v_reuseFailAlloc_5696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5696_, 0, v___x_5692_);
v___x_5694_ = v_reuseFailAlloc_5696_;
goto v_reusejp_5693_;
}
v_reusejp_5693_:
{
lean_object* v___x_5695_; 
v___x_5695_ = lean_apply_2(v_toPure_5676_, lean_box(0), v___x_5694_);
return v___x_5695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__2(lean_object* v___y_5698_, lean_object* v_toBind_5699_, lean_object* v___f_5700_, lean_object* v_n_5701_, lean_object* v_v_5702_, lean_object* v___y_5703_){
_start:
{
lean_object* v___x_5704_; lean_object* v___x_5705_; lean_object* v___x_5706_; 
v___x_5704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5704_, 0, v_n_5701_);
lean_ctor_set(v___x_5704_, 1, v_v_5702_);
v___x_5705_ = lean_apply_2(v___y_5698_, v___x_5704_, v___y_5703_);
v___x_5706_ = lean_apply_4(v_toBind_5699_, lean_box(0), lean_box(0), v___x_5705_, v___f_5700_);
return v___x_5706_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3(lean_object* v_inst_5707_, lean_object* v_00_u03b2_5708_, lean_object* v___y_5709_, lean_object* v___y_5710_, lean_object* v___y_5711_){
_start:
{
lean_object* v___f_5712_; lean_object* v___f_5713_; lean_object* v___f_5714_; lean_object* v___f_5715_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; lean_object* v___f_5722_; lean_object* v___f_5723_; lean_object* v___f_5724_; lean_object* v___f_5725_; lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; lean_object* v___x_5730_; lean_object* v___x_5731_; lean_object* v_toApplicative_5732_; lean_object* v_toBind_5733_; lean_object* v_toPure_5734_; lean_object* v___f_5735_; lean_object* v___f_5736_; lean_object* v___f_5737_; lean_object* v___x_138__overap_5738_; lean_object* v___x_5739_; lean_object* v___x_5740_; 
lean_inc_ref_n(v_inst_5707_, 7);
v___f_5712_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_5712_, 0, v_inst_5707_);
v___f_5713_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_5713_, 0, v_inst_5707_);
v___f_5714_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_5714_, 0, v_inst_5707_);
v___f_5715_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_5715_, 0, v_inst_5707_);
v___x_5716_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_5716_, 0, lean_box(0));
lean_closure_set(v___x_5716_, 1, lean_box(0));
lean_closure_set(v___x_5716_, 2, v_inst_5707_);
v___x_5717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5717_, 0, v___x_5716_);
lean_ctor_set(v___x_5717_, 1, v___f_5712_);
v___x_5718_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_5718_, 0, lean_box(0));
lean_closure_set(v___x_5718_, 1, lean_box(0));
lean_closure_set(v___x_5718_, 2, v_inst_5707_);
v___x_5719_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5719_, 0, v___x_5717_);
lean_ctor_set(v___x_5719_, 1, v___x_5718_);
lean_ctor_set(v___x_5719_, 2, v___f_5713_);
lean_ctor_set(v___x_5719_, 3, v___f_5714_);
lean_ctor_set(v___x_5719_, 4, v___f_5715_);
v___x_5720_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_5720_, 0, lean_box(0));
lean_closure_set(v___x_5720_, 1, lean_box(0));
lean_closure_set(v___x_5720_, 2, v_inst_5707_);
v___x_5721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5721_, 0, v___x_5719_);
lean_ctor_set(v___x_5721_, 1, v___x_5720_);
lean_inc_ref_n(v___x_5721_, 6);
v___f_5722_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5722_, 0, v___x_5721_);
v___f_5723_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5723_, 0, v___x_5721_);
v___f_5724_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_5724_, 0, v___x_5721_);
v___f_5725_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_5725_, 0, v___x_5721_);
v___x_5726_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_5726_, 0, lean_box(0));
lean_closure_set(v___x_5726_, 1, lean_box(0));
lean_closure_set(v___x_5726_, 2, v___x_5721_);
v___x_5727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5727_, 0, v___x_5726_);
lean_ctor_set(v___x_5727_, 1, v___f_5722_);
v___x_5728_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_5728_, 0, lean_box(0));
lean_closure_set(v___x_5728_, 1, lean_box(0));
lean_closure_set(v___x_5728_, 2, v___x_5721_);
v___x_5729_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5729_, 0, v___x_5727_);
lean_ctor_set(v___x_5729_, 1, v___x_5728_);
lean_ctor_set(v___x_5729_, 2, v___f_5723_);
lean_ctor_set(v___x_5729_, 3, v___f_5724_);
lean_ctor_set(v___x_5729_, 4, v___f_5725_);
v___x_5730_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_5730_, 0, lean_box(0));
lean_closure_set(v___x_5730_, 1, lean_box(0));
lean_closure_set(v___x_5730_, 2, v___x_5721_);
v___x_5731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5731_, 0, v___x_5729_);
lean_ctor_set(v___x_5731_, 1, v___x_5730_);
v_toApplicative_5732_ = lean_ctor_get(v_inst_5707_, 0);
lean_inc_ref(v_toApplicative_5732_);
v_toBind_5733_ = lean_ctor_get(v_inst_5707_, 1);
lean_inc_n(v_toBind_5733_, 2);
lean_dec_ref(v_inst_5707_);
v_toPure_5734_ = lean_ctor_get(v_toApplicative_5732_, 1);
lean_inc_n(v_toPure_5734_, 2);
lean_dec_ref(v_toApplicative_5732_);
v___f_5735_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0), 2, 1);
lean_closure_set(v___f_5735_, 0, v_toPure_5734_);
v___f_5736_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_5736_, 0, v_toPure_5734_);
v___f_5737_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__2), 6, 3);
lean_closure_set(v___f_5737_, 0, v___y_5711_);
lean_closure_set(v___f_5737_, 1, v_toBind_5733_);
lean_closure_set(v___f_5737_, 2, v___f_5736_);
v___x_138__overap_5738_ = l_Lean_ImportedConsts_forM___redArg(v___x_5731_, v___y_5709_, v___f_5737_);
v___x_5739_ = lean_apply_1(v___x_138__overap_5738_, v___y_5710_);
v___x_5740_ = lean_apply_4(v_toBind_5733_, lean_box(0), lean_box(0), v___x_5739_, v___f_5735_);
return v___x_5740_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg(lean_object* v_inst_5741_){
_start:
{
lean_object* v___f_5742_; 
v___f_5742_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_5742_, 0, v_inst_5741_);
return v___f_5742_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad(lean_object* v_m_5743_, lean_object* v_00_u03b1_5744_, lean_object* v_inst_5745_){
_start:
{
lean_object* v___f_5746_; 
v___f_5746_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_5746_, 0, v_inst_5745_);
return v___f_5746_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap___closed__0(void){
_start:
{
lean_object* v___x_5747_; 
v___x_5747_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_5747_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap___closed__1(void){
_start:
{
lean_object* v___x_5748_; lean_object* v___x_5749_; 
v___x_5748_ = lean_obj_once(&l_Lean_instInhabitedConstMap___closed__0, &l_Lean_instInhabitedConstMap___closed__0_once, _init_l_Lean_instInhabitedConstMap___closed__0);
v___x_5749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5749_, 0, v___x_5748_);
return v___x_5749_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap___closed__2(void){
_start:
{
lean_object* v___x_5750_; lean_object* v___x_5751_; lean_object* v___x_5752_; 
v___x_5750_ = lean_obj_once(&l_Lean_instInhabitedConstMap___closed__1, &l_Lean_instInhabitedConstMap___closed__1_once, _init_l_Lean_instInhabitedConstMap___closed__1);
v___x_5751_ = lean_obj_once(&l_Lean_ImportedConsts_empty___closed__0, &l_Lean_ImportedConsts_empty___closed__0_once, _init_l_Lean_ImportedConsts_empty___closed__0);
v___x_5752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5752_, 0, v___x_5751_);
lean_ctor_set(v___x_5752_, 1, v___x_5750_);
return v___x_5752_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap(void){
_start:
{
lean_object* v___x_5753_; 
v___x_5753_ = lean_obj_once(&l_Lean_instInhabitedConstMap___closed__2, &l_Lean_instInhabitedConstMap___closed__2_once, _init_l_Lean_instInhabitedConstMap___closed__2);
return v___x_5753_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_5754_, lean_object* v_vals_5755_, lean_object* v_i_5756_, lean_object* v_k_5757_){
_start:
{
lean_object* v___x_5758_; uint8_t v___x_5759_; 
v___x_5758_ = lean_array_get_size(v_keys_5754_);
v___x_5759_ = lean_nat_dec_lt(v_i_5756_, v___x_5758_);
if (v___x_5759_ == 0)
{
lean_object* v___x_5760_; 
lean_dec(v_i_5756_);
v___x_5760_ = lean_box(0);
return v___x_5760_;
}
else
{
lean_object* v_k_x27_5761_; uint8_t v___x_5762_; 
v_k_x27_5761_ = lean_array_fget_borrowed(v_keys_5754_, v_i_5756_);
v___x_5762_ = lean_name_eq(v_k_5757_, v_k_x27_5761_);
if (v___x_5762_ == 0)
{
lean_object* v___x_5763_; lean_object* v___x_5764_; 
v___x_5763_ = lean_unsigned_to_nat(1u);
v___x_5764_ = lean_nat_add(v_i_5756_, v___x_5763_);
lean_dec(v_i_5756_);
v_i_5756_ = v___x_5764_;
goto _start;
}
else
{
lean_object* v___x_5766_; lean_object* v___x_5767_; 
v___x_5766_ = lean_array_fget_borrowed(v_vals_5755_, v_i_5756_);
lean_dec(v_i_5756_);
lean_inc(v___x_5766_);
v___x_5767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5767_, 0, v___x_5766_);
return v___x_5767_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_5768_, lean_object* v_vals_5769_, lean_object* v_i_5770_, lean_object* v_k_5771_){
_start:
{
lean_object* v_res_5772_; 
v_res_5772_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_5768_, v_vals_5769_, v_i_5770_, v_k_5771_);
lean_dec(v_k_5771_);
lean_dec_ref(v_vals_5769_);
lean_dec_ref(v_keys_5768_);
return v_res_5772_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(lean_object* v_x_5773_, size_t v_x_5774_, lean_object* v_x_5775_){
_start:
{
if (lean_obj_tag(v_x_5773_) == 0)
{
lean_object* v_es_5776_; lean_object* v___x_5777_; size_t v___x_5778_; size_t v___x_5779_; lean_object* v_j_5780_; lean_object* v___x_5781_; 
v_es_5776_ = lean_ctor_get(v_x_5773_, 0);
v___x_5777_ = lean_box(2);
v___x_5778_ = ((size_t)31ULL);
v___x_5779_ = lean_usize_land(v_x_5774_, v___x_5778_);
v_j_5780_ = lean_usize_to_nat(v___x_5779_);
v___x_5781_ = lean_array_get_borrowed(v___x_5777_, v_es_5776_, v_j_5780_);
lean_dec(v_j_5780_);
switch(lean_obj_tag(v___x_5781_))
{
case 0:
{
lean_object* v_key_5782_; lean_object* v_val_5783_; uint8_t v___x_5784_; 
v_key_5782_ = lean_ctor_get(v___x_5781_, 0);
v_val_5783_ = lean_ctor_get(v___x_5781_, 1);
v___x_5784_ = lean_name_eq(v_x_5775_, v_key_5782_);
if (v___x_5784_ == 0)
{
lean_object* v___x_5785_; 
v___x_5785_ = lean_box(0);
return v___x_5785_;
}
else
{
lean_object* v___x_5786_; 
lean_inc(v_val_5783_);
v___x_5786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5786_, 0, v_val_5783_);
return v___x_5786_;
}
}
case 1:
{
lean_object* v_node_5787_; size_t v___x_5788_; size_t v___x_5789_; 
v_node_5787_ = lean_ctor_get(v___x_5781_, 0);
v___x_5788_ = ((size_t)5ULL);
v___x_5789_ = lean_usize_shift_right(v_x_5774_, v___x_5788_);
v_x_5773_ = v_node_5787_;
v_x_5774_ = v___x_5789_;
goto _start;
}
default: 
{
lean_object* v___x_5791_; 
v___x_5791_ = lean_box(0);
return v___x_5791_;
}
}
}
else
{
lean_object* v_ks_5792_; lean_object* v_vs_5793_; lean_object* v___x_5794_; lean_object* v___x_5795_; 
v_ks_5792_ = lean_ctor_get(v_x_5773_, 0);
v_vs_5793_ = lean_ctor_get(v_x_5773_, 1);
v___x_5794_ = lean_unsigned_to_nat(0u);
v___x_5795_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_ks_5792_, v_vs_5793_, v___x_5794_, v_x_5775_);
return v___x_5795_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_5796_, lean_object* v_x_5797_, lean_object* v_x_5798_){
_start:
{
size_t v_x_166__boxed_5799_; lean_object* v_res_5800_; 
v_x_166__boxed_5799_ = lean_unbox_usize(v_x_5797_);
lean_dec(v_x_5797_);
v_res_5800_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(v_x_5796_, v_x_166__boxed_5799_, v_x_5798_);
lean_dec(v_x_5798_);
lean_dec_ref(v_x_5796_);
return v_res_5800_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(lean_object* v_x_5801_, lean_object* v_x_5802_){
_start:
{
uint64_t v___y_5804_; 
if (lean_obj_tag(v_x_5802_) == 0)
{
uint64_t v___x_5807_; 
v___x_5807_ = 1723ULL;
v___y_5804_ = v___x_5807_;
goto v___jp_5803_;
}
else
{
uint64_t v_hash_5808_; 
v_hash_5808_ = lean_ctor_get_uint64(v_x_5802_, sizeof(void*)*2);
v___y_5804_ = v_hash_5808_;
goto v___jp_5803_;
}
v___jp_5803_:
{
size_t v___x_5805_; lean_object* v___x_5806_; 
v___x_5805_ = lean_uint64_to_usize(v___y_5804_);
v___x_5806_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(v_x_5801_, v___x_5805_, v_x_5802_);
return v___x_5806_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg___boxed(lean_object* v_x_5809_, lean_object* v_x_5810_){
_start:
{
lean_object* v_res_5811_; 
v_res_5811_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_x_5809_, v_x_5810_);
lean_dec(v_x_5810_);
lean_dec_ref(v_x_5809_);
return v_res_5811_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f(lean_object* v_m_5812_, lean_object* v_n_5813_){
_start:
{
lean_object* v_map_u2081_5814_; lean_object* v_map_u2082_5815_; lean_object* v___x_5816_; 
v_map_u2081_5814_ = lean_ctor_get(v_m_5812_, 0);
v_map_u2082_5815_ = lean_ctor_get(v_m_5812_, 1);
v___x_5816_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_map_u2082_5815_, v_n_5813_);
if (lean_obj_tag(v___x_5816_) == 0)
{
lean_object* v___x_5817_; 
v___x_5817_ = lean_imported_consts_find_entry_cached(v_map_u2081_5814_, v_n_5813_);
if (lean_obj_tag(v___x_5817_) == 0)
{
return v___x_5816_;
}
else
{
lean_object* v_val_5818_; lean_object* v___x_5820_; uint8_t v_isShared_5821_; uint8_t v_isSharedCheck_5826_; 
v_val_5818_ = lean_ctor_get(v___x_5817_, 0);
v_isSharedCheck_5826_ = !lean_is_exclusive(v___x_5817_);
if (v_isSharedCheck_5826_ == 0)
{
v___x_5820_ = v___x_5817_;
v_isShared_5821_ = v_isSharedCheck_5826_;
goto v_resetjp_5819_;
}
else
{
lean_inc(v_val_5818_);
lean_dec(v___x_5817_);
v___x_5820_ = lean_box(0);
v_isShared_5821_ = v_isSharedCheck_5826_;
goto v_resetjp_5819_;
}
v_resetjp_5819_:
{
lean_object* v_fst_5822_; lean_object* v___x_5824_; 
v_fst_5822_ = lean_ctor_get(v_val_5818_, 0);
lean_inc(v_fst_5822_);
lean_dec(v_val_5818_);
if (v_isShared_5821_ == 0)
{
lean_ctor_set(v___x_5820_, 0, v_fst_5822_);
v___x_5824_ = v___x_5820_;
goto v_reusejp_5823_;
}
else
{
lean_object* v_reuseFailAlloc_5825_; 
v_reuseFailAlloc_5825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5825_, 0, v_fst_5822_);
v___x_5824_ = v_reuseFailAlloc_5825_;
goto v_reusejp_5823_;
}
v_reusejp_5823_:
{
return v___x_5824_;
}
}
}
}
else
{
return v___x_5816_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f___boxed(lean_object* v_m_5827_, lean_object* v_n_5828_){
_start:
{
lean_object* v_res_5829_; 
v_res_5829_ = l_Lean_ConstMap_find_x3f(v_m_5827_, v_n_5828_);
lean_dec(v_n_5828_);
lean_dec_ref(v_m_5827_);
return v_res_5829_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0(lean_object* v_00_u03b2_5830_, lean_object* v_x_5831_, lean_object* v_x_5832_){
_start:
{
lean_object* v___x_5833_; 
v___x_5833_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_x_5831_, v_x_5832_);
return v___x_5833_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___boxed(lean_object* v_00_u03b2_5834_, lean_object* v_x_5835_, lean_object* v_x_5836_){
_start:
{
lean_object* v_res_5837_; 
v_res_5837_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0(v_00_u03b2_5834_, v_x_5835_, v_x_5836_);
lean_dec(v_x_5836_);
lean_dec_ref(v_x_5835_);
return v_res_5837_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0(lean_object* v_00_u03b2_5838_, lean_object* v_x_5839_, size_t v_x_5840_, lean_object* v_x_5841_){
_start:
{
lean_object* v___x_5842_; 
v___x_5842_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(v_x_5839_, v_x_5840_, v_x_5841_);
return v___x_5842_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5843_, lean_object* v_x_5844_, lean_object* v_x_5845_, lean_object* v_x_5846_){
_start:
{
size_t v_x_261__boxed_5847_; lean_object* v_res_5848_; 
v_x_261__boxed_5847_ = lean_unbox_usize(v_x_5845_);
lean_dec(v_x_5845_);
v_res_5848_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0(v_00_u03b2_5843_, v_x_5844_, v_x_261__boxed_5847_, v_x_5846_);
lean_dec(v_x_5846_);
lean_dec_ref(v_x_5844_);
return v_res_5848_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5849_, lean_object* v_keys_5850_, lean_object* v_vals_5851_, lean_object* v_heq_5852_, lean_object* v_i_5853_, lean_object* v_k_5854_){
_start:
{
lean_object* v___x_5855_; 
v___x_5855_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_5850_, v_vals_5851_, v_i_5853_, v_k_5854_);
return v___x_5855_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5856_, lean_object* v_keys_5857_, lean_object* v_vals_5858_, lean_object* v_heq_5859_, lean_object* v_i_5860_, lean_object* v_k_5861_){
_start:
{
lean_object* v_res_5862_; 
v_res_5862_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1(v_00_u03b2_5856_, v_keys_5857_, v_vals_5858_, v_heq_5859_, v_i_5860_, v_k_5861_);
lean_dec(v_k_5861_);
lean_dec_ref(v_vals_5858_);
lean_dec_ref(v_keys_5857_);
return v_res_5862_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f_x27(lean_object* v_m_5863_, lean_object* v_n_5864_){
_start:
{
lean_object* v_map_u2081_5865_; lean_object* v_map_u2082_5866_; lean_object* v___x_5867_; 
v_map_u2081_5865_ = lean_ctor_get(v_m_5863_, 0);
v_map_u2082_5866_ = lean_ctor_get(v_m_5863_, 1);
v___x_5867_ = lean_imported_consts_find_entry_cached(v_map_u2081_5865_, v_n_5864_);
if (lean_obj_tag(v___x_5867_) == 0)
{
lean_object* v___x_5868_; 
v___x_5868_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_map_u2082_5866_, v_n_5864_);
return v___x_5868_;
}
else
{
lean_object* v_val_5869_; lean_object* v___x_5871_; uint8_t v_isShared_5872_; uint8_t v_isSharedCheck_5877_; 
v_val_5869_ = lean_ctor_get(v___x_5867_, 0);
v_isSharedCheck_5877_ = !lean_is_exclusive(v___x_5867_);
if (v_isSharedCheck_5877_ == 0)
{
v___x_5871_ = v___x_5867_;
v_isShared_5872_ = v_isSharedCheck_5877_;
goto v_resetjp_5870_;
}
else
{
lean_inc(v_val_5869_);
lean_dec(v___x_5867_);
v___x_5871_ = lean_box(0);
v_isShared_5872_ = v_isSharedCheck_5877_;
goto v_resetjp_5870_;
}
v_resetjp_5870_:
{
lean_object* v_fst_5873_; lean_object* v___x_5875_; 
v_fst_5873_ = lean_ctor_get(v_val_5869_, 0);
lean_inc(v_fst_5873_);
lean_dec(v_val_5869_);
if (v_isShared_5872_ == 0)
{
lean_ctor_set(v___x_5871_, 0, v_fst_5873_);
v___x_5875_ = v___x_5871_;
goto v_reusejp_5874_;
}
else
{
lean_object* v_reuseFailAlloc_5876_; 
v_reuseFailAlloc_5876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5876_, 0, v_fst_5873_);
v___x_5875_ = v_reuseFailAlloc_5876_;
goto v_reusejp_5874_;
}
v_reusejp_5874_:
{
return v___x_5875_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f_x27___boxed(lean_object* v_m_5878_, lean_object* v_n_5879_){
_start:
{
lean_object* v_res_5880_; 
v_res_5880_ = l_Lean_ConstMap_find_x3f_x27(v_m_5878_, v_n_5879_);
lean_dec(v_n_5879_);
lean_dec_ref(v_m_5878_);
return v_res_5880_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_5881_, lean_object* v_i_5882_, lean_object* v_k_5883_){
_start:
{
lean_object* v___x_5884_; uint8_t v___x_5885_; 
v___x_5884_ = lean_array_get_size(v_keys_5881_);
v___x_5885_ = lean_nat_dec_lt(v_i_5882_, v___x_5884_);
if (v___x_5885_ == 0)
{
lean_dec(v_i_5882_);
return v___x_5885_;
}
else
{
lean_object* v_k_x27_5886_; uint8_t v___x_5887_; 
v_k_x27_5886_ = lean_array_fget_borrowed(v_keys_5881_, v_i_5882_);
v___x_5887_ = lean_name_eq(v_k_5883_, v_k_x27_5886_);
if (v___x_5887_ == 0)
{
lean_object* v___x_5888_; lean_object* v___x_5889_; 
v___x_5888_ = lean_unsigned_to_nat(1u);
v___x_5889_ = lean_nat_add(v_i_5882_, v___x_5888_);
lean_dec(v_i_5882_);
v_i_5882_ = v___x_5889_;
goto _start;
}
else
{
lean_dec(v_i_5882_);
return v___x_5885_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_5891_, lean_object* v_i_5892_, lean_object* v_k_5893_){
_start:
{
uint8_t v_res_5894_; lean_object* v_r_5895_; 
v_res_5894_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(v_keys_5891_, v_i_5892_, v_k_5893_);
lean_dec(v_k_5893_);
lean_dec_ref(v_keys_5891_);
v_r_5895_ = lean_box(v_res_5894_);
return v_r_5895_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(lean_object* v_x_5896_, size_t v_x_5897_, lean_object* v_x_5898_){
_start:
{
if (lean_obj_tag(v_x_5896_) == 0)
{
lean_object* v_es_5899_; lean_object* v___x_5900_; size_t v___x_5901_; size_t v___x_5902_; lean_object* v_j_5903_; lean_object* v___x_5904_; 
v_es_5899_ = lean_ctor_get(v_x_5896_, 0);
v___x_5900_ = lean_box(2);
v___x_5901_ = ((size_t)31ULL);
v___x_5902_ = lean_usize_land(v_x_5897_, v___x_5901_);
v_j_5903_ = lean_usize_to_nat(v___x_5902_);
v___x_5904_ = lean_array_get_borrowed(v___x_5900_, v_es_5899_, v_j_5903_);
lean_dec(v_j_5903_);
switch(lean_obj_tag(v___x_5904_))
{
case 0:
{
lean_object* v_key_5905_; uint8_t v___x_5906_; 
v_key_5905_ = lean_ctor_get(v___x_5904_, 0);
v___x_5906_ = lean_name_eq(v_x_5898_, v_key_5905_);
return v___x_5906_;
}
case 1:
{
lean_object* v_node_5907_; size_t v___x_5908_; size_t v___x_5909_; 
v_node_5907_ = lean_ctor_get(v___x_5904_, 0);
v___x_5908_ = ((size_t)5ULL);
v___x_5909_ = lean_usize_shift_right(v_x_5897_, v___x_5908_);
v_x_5896_ = v_node_5907_;
v_x_5897_ = v___x_5909_;
goto _start;
}
default: 
{
uint8_t v___x_5911_; 
v___x_5911_ = 0;
return v___x_5911_;
}
}
}
else
{
lean_object* v_ks_5912_; lean_object* v___x_5913_; uint8_t v___x_5914_; 
v_ks_5912_ = lean_ctor_get(v_x_5896_, 0);
v___x_5913_ = lean_unsigned_to_nat(0u);
v___x_5914_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(v_ks_5912_, v___x_5913_, v_x_5898_);
return v___x_5914_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg___boxed(lean_object* v_x_5915_, lean_object* v_x_5916_, lean_object* v_x_5917_){
_start:
{
size_t v_x_170__boxed_5918_; uint8_t v_res_5919_; lean_object* v_r_5920_; 
v_x_170__boxed_5918_ = lean_unbox_usize(v_x_5916_);
lean_dec(v_x_5916_);
v_res_5919_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(v_x_5915_, v_x_170__boxed_5918_, v_x_5917_);
lean_dec(v_x_5917_);
lean_dec_ref(v_x_5915_);
v_r_5920_ = lean_box(v_res_5919_);
return v_r_5920_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(lean_object* v_x_5921_, lean_object* v_x_5922_){
_start:
{
uint64_t v___y_5924_; 
if (lean_obj_tag(v_x_5922_) == 0)
{
uint64_t v___x_5927_; 
v___x_5927_ = 1723ULL;
v___y_5924_ = v___x_5927_;
goto v___jp_5923_;
}
else
{
uint64_t v_hash_5928_; 
v_hash_5928_ = lean_ctor_get_uint64(v_x_5922_, sizeof(void*)*2);
v___y_5924_ = v_hash_5928_;
goto v___jp_5923_;
}
v___jp_5923_:
{
size_t v___x_5925_; uint8_t v___x_5926_; 
v___x_5925_ = lean_uint64_to_usize(v___y_5924_);
v___x_5926_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(v_x_5921_, v___x_5925_, v_x_5922_);
return v___x_5926_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg___boxed(lean_object* v_x_5929_, lean_object* v_x_5930_){
_start:
{
uint8_t v_res_5931_; lean_object* v_r_5932_; 
v_res_5931_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(v_x_5929_, v_x_5930_);
lean_dec(v_x_5930_);
lean_dec_ref(v_x_5929_);
v_r_5932_ = lean_box(v_res_5931_);
return v_r_5932_;
}
}
LEAN_EXPORT uint8_t l_Lean_ConstMap_contains(lean_object* v_m_5933_, lean_object* v_n_5934_){
_start:
{
lean_object* v_map_u2081_5935_; lean_object* v_map_u2082_5936_; uint8_t v___x_5937_; 
v_map_u2081_5935_ = lean_ctor_get(v_m_5933_, 0);
v_map_u2082_5936_ = lean_ctor_get(v_m_5933_, 1);
v___x_5937_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(v_map_u2082_5936_, v_n_5934_);
if (v___x_5937_ == 0)
{
lean_object* v___x_5938_; 
v___x_5938_ = lean_imported_consts_find_entry_cached(v_map_u2081_5935_, v_n_5934_);
if (lean_obj_tag(v___x_5938_) == 0)
{
return v___x_5937_;
}
else
{
uint8_t v___x_5939_; 
lean_dec_ref_known(v___x_5938_, 1);
v___x_5939_ = 1;
return v___x_5939_;
}
}
else
{
return v___x_5937_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_contains___boxed(lean_object* v_m_5940_, lean_object* v_n_5941_){
_start:
{
uint8_t v_res_5942_; lean_object* v_r_5943_; 
v_res_5942_ = l_Lean_ConstMap_contains(v_m_5940_, v_n_5941_);
lean_dec(v_n_5941_);
lean_dec_ref(v_m_5940_);
v_r_5943_ = lean_box(v_res_5942_);
return v_r_5943_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0(lean_object* v_00_u03b2_5944_, lean_object* v_x_5945_, lean_object* v_x_5946_){
_start:
{
uint8_t v___x_5947_; 
v___x_5947_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(v_x_5945_, v_x_5946_);
return v___x_5947_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___boxed(lean_object* v_00_u03b2_5948_, lean_object* v_x_5949_, lean_object* v_x_5950_){
_start:
{
uint8_t v_res_5951_; lean_object* v_r_5952_; 
v_res_5951_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0(v_00_u03b2_5948_, v_x_5949_, v_x_5950_);
lean_dec(v_x_5950_);
lean_dec_ref(v_x_5949_);
v_r_5952_ = lean_box(v_res_5951_);
return v_r_5952_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0(lean_object* v_00_u03b2_5953_, lean_object* v_x_5954_, size_t v_x_5955_, lean_object* v_x_5956_){
_start:
{
uint8_t v___x_5957_; 
v___x_5957_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(v_x_5954_, v_x_5955_, v_x_5956_);
return v___x_5957_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5958_, lean_object* v_x_5959_, lean_object* v_x_5960_, lean_object* v_x_5961_){
_start:
{
size_t v_x_242__boxed_5962_; uint8_t v_res_5963_; lean_object* v_r_5964_; 
v_x_242__boxed_5962_ = lean_unbox_usize(v_x_5960_);
lean_dec(v_x_5960_);
v_res_5963_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0(v_00_u03b2_5958_, v_x_5959_, v_x_242__boxed_5962_, v_x_5961_);
lean_dec(v_x_5961_);
lean_dec_ref(v_x_5959_);
v_r_5964_ = lean_box(v_res_5963_);
return v_r_5964_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5965_, lean_object* v_keys_5966_, lean_object* v_vals_5967_, lean_object* v_heq_5968_, lean_object* v_i_5969_, lean_object* v_k_5970_){
_start:
{
uint8_t v___x_5971_; 
v___x_5971_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(v_keys_5966_, v_i_5969_, v_k_5970_);
return v___x_5971_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5972_, lean_object* v_keys_5973_, lean_object* v_vals_5974_, lean_object* v_heq_5975_, lean_object* v_i_5976_, lean_object* v_k_5977_){
_start:
{
uint8_t v_res_5978_; lean_object* v_r_5979_; 
v_res_5978_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1(v_00_u03b2_5972_, v_keys_5973_, v_vals_5974_, v_heq_5975_, v_i_5976_, v_k_5977_);
lean_dec(v_k_5977_);
lean_dec_ref(v_vals_5974_);
lean_dec_ref(v_keys_5973_);
v_r_5979_ = lean_box(v_res_5978_);
return v_r_5979_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_5980_, lean_object* v_x_5981_, lean_object* v_x_5982_, lean_object* v_x_5983_){
_start:
{
lean_object* v_ks_5984_; lean_object* v_vs_5985_; lean_object* v___x_5987_; uint8_t v_isShared_5988_; uint8_t v_isSharedCheck_6009_; 
v_ks_5984_ = lean_ctor_get(v_x_5980_, 0);
v_vs_5985_ = lean_ctor_get(v_x_5980_, 1);
v_isSharedCheck_6009_ = !lean_is_exclusive(v_x_5980_);
if (v_isSharedCheck_6009_ == 0)
{
v___x_5987_ = v_x_5980_;
v_isShared_5988_ = v_isSharedCheck_6009_;
goto v_resetjp_5986_;
}
else
{
lean_inc(v_vs_5985_);
lean_inc(v_ks_5984_);
lean_dec(v_x_5980_);
v___x_5987_ = lean_box(0);
v_isShared_5988_ = v_isSharedCheck_6009_;
goto v_resetjp_5986_;
}
v_resetjp_5986_:
{
lean_object* v___x_5989_; uint8_t v___x_5990_; 
v___x_5989_ = lean_array_get_size(v_ks_5984_);
v___x_5990_ = lean_nat_dec_lt(v_x_5981_, v___x_5989_);
if (v___x_5990_ == 0)
{
lean_object* v___x_5991_; lean_object* v___x_5992_; lean_object* v___x_5994_; 
lean_dec(v_x_5981_);
v___x_5991_ = lean_array_push(v_ks_5984_, v_x_5982_);
v___x_5992_ = lean_array_push(v_vs_5985_, v_x_5983_);
if (v_isShared_5988_ == 0)
{
lean_ctor_set(v___x_5987_, 1, v___x_5992_);
lean_ctor_set(v___x_5987_, 0, v___x_5991_);
v___x_5994_ = v___x_5987_;
goto v_reusejp_5993_;
}
else
{
lean_object* v_reuseFailAlloc_5995_; 
v_reuseFailAlloc_5995_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5995_, 0, v___x_5991_);
lean_ctor_set(v_reuseFailAlloc_5995_, 1, v___x_5992_);
v___x_5994_ = v_reuseFailAlloc_5995_;
goto v_reusejp_5993_;
}
v_reusejp_5993_:
{
return v___x_5994_;
}
}
else
{
lean_object* v_k_x27_5996_; uint8_t v___x_5997_; 
v_k_x27_5996_ = lean_array_fget_borrowed(v_ks_5984_, v_x_5981_);
v___x_5997_ = lean_name_eq(v_x_5982_, v_k_x27_5996_);
if (v___x_5997_ == 0)
{
lean_object* v___x_5999_; 
if (v_isShared_5988_ == 0)
{
v___x_5999_ = v___x_5987_;
goto v_reusejp_5998_;
}
else
{
lean_object* v_reuseFailAlloc_6003_; 
v_reuseFailAlloc_6003_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6003_, 0, v_ks_5984_);
lean_ctor_set(v_reuseFailAlloc_6003_, 1, v_vs_5985_);
v___x_5999_ = v_reuseFailAlloc_6003_;
goto v_reusejp_5998_;
}
v_reusejp_5998_:
{
lean_object* v___x_6000_; lean_object* v___x_6001_; 
v___x_6000_ = lean_unsigned_to_nat(1u);
v___x_6001_ = lean_nat_add(v_x_5981_, v___x_6000_);
lean_dec(v_x_5981_);
v_x_5980_ = v___x_5999_;
v_x_5981_ = v___x_6001_;
goto _start;
}
}
else
{
lean_object* v___x_6004_; lean_object* v___x_6005_; lean_object* v___x_6007_; 
v___x_6004_ = lean_array_fset(v_ks_5984_, v_x_5981_, v_x_5982_);
v___x_6005_ = lean_array_fset(v_vs_5985_, v_x_5981_, v_x_5983_);
lean_dec(v_x_5981_);
if (v_isShared_5988_ == 0)
{
lean_ctor_set(v___x_5987_, 1, v___x_6005_);
lean_ctor_set(v___x_5987_, 0, v___x_6004_);
v___x_6007_ = v___x_5987_;
goto v_reusejp_6006_;
}
else
{
lean_object* v_reuseFailAlloc_6008_; 
v_reuseFailAlloc_6008_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6008_, 0, v___x_6004_);
lean_ctor_set(v_reuseFailAlloc_6008_, 1, v___x_6005_);
v___x_6007_ = v_reuseFailAlloc_6008_;
goto v_reusejp_6006_;
}
v_reusejp_6006_:
{
return v___x_6007_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1___redArg(lean_object* v_n_6010_, lean_object* v_k_6011_, lean_object* v_v_6012_){
_start:
{
lean_object* v___x_6013_; lean_object* v___x_6014_; 
v___x_6013_ = lean_unsigned_to_nat(0u);
v___x_6014_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_n_6010_, v___x_6013_, v_k_6011_, v_v_6012_);
return v___x_6014_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_6015_; 
v___x_6015_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_6015_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(lean_object* v_x_6016_, size_t v_x_6017_, size_t v_x_6018_, lean_object* v_x_6019_, lean_object* v_x_6020_){
_start:
{
if (lean_obj_tag(v_x_6016_) == 0)
{
lean_object* v_es_6021_; size_t v___x_6022_; size_t v___x_6023_; lean_object* v_j_6024_; lean_object* v___x_6025_; uint8_t v___x_6026_; 
v_es_6021_ = lean_ctor_get(v_x_6016_, 0);
v___x_6022_ = ((size_t)31ULL);
v___x_6023_ = lean_usize_land(v_x_6017_, v___x_6022_);
v_j_6024_ = lean_usize_to_nat(v___x_6023_);
v___x_6025_ = lean_array_get_size(v_es_6021_);
v___x_6026_ = lean_nat_dec_lt(v_j_6024_, v___x_6025_);
if (v___x_6026_ == 0)
{
lean_dec(v_j_6024_);
lean_dec(v_x_6020_);
lean_dec(v_x_6019_);
return v_x_6016_;
}
else
{
lean_object* v___x_6028_; uint8_t v_isShared_6029_; uint8_t v_isSharedCheck_6065_; 
lean_inc_ref(v_es_6021_);
v_isSharedCheck_6065_ = !lean_is_exclusive(v_x_6016_);
if (v_isSharedCheck_6065_ == 0)
{
lean_object* v_unused_6066_; 
v_unused_6066_ = lean_ctor_get(v_x_6016_, 0);
lean_dec(v_unused_6066_);
v___x_6028_ = v_x_6016_;
v_isShared_6029_ = v_isSharedCheck_6065_;
goto v_resetjp_6027_;
}
else
{
lean_dec(v_x_6016_);
v___x_6028_ = lean_box(0);
v_isShared_6029_ = v_isSharedCheck_6065_;
goto v_resetjp_6027_;
}
v_resetjp_6027_:
{
lean_object* v_v_6030_; lean_object* v___x_6031_; lean_object* v_xs_x27_6032_; lean_object* v___y_6034_; 
v_v_6030_ = lean_array_fget(v_es_6021_, v_j_6024_);
v___x_6031_ = lean_box(0);
v_xs_x27_6032_ = lean_array_fset(v_es_6021_, v_j_6024_, v___x_6031_);
switch(lean_obj_tag(v_v_6030_))
{
case 0:
{
lean_object* v_key_6039_; lean_object* v_val_6040_; lean_object* v___x_6042_; uint8_t v_isShared_6043_; uint8_t v_isSharedCheck_6050_; 
v_key_6039_ = lean_ctor_get(v_v_6030_, 0);
v_val_6040_ = lean_ctor_get(v_v_6030_, 1);
v_isSharedCheck_6050_ = !lean_is_exclusive(v_v_6030_);
if (v_isSharedCheck_6050_ == 0)
{
v___x_6042_ = v_v_6030_;
v_isShared_6043_ = v_isSharedCheck_6050_;
goto v_resetjp_6041_;
}
else
{
lean_inc(v_val_6040_);
lean_inc(v_key_6039_);
lean_dec(v_v_6030_);
v___x_6042_ = lean_box(0);
v_isShared_6043_ = v_isSharedCheck_6050_;
goto v_resetjp_6041_;
}
v_resetjp_6041_:
{
uint8_t v___x_6044_; 
v___x_6044_ = lean_name_eq(v_x_6019_, v_key_6039_);
if (v___x_6044_ == 0)
{
lean_object* v___x_6045_; lean_object* v___x_6046_; 
lean_del_object(v___x_6042_);
v___x_6045_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_6039_, v_val_6040_, v_x_6019_, v_x_6020_);
v___x_6046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6046_, 0, v___x_6045_);
v___y_6034_ = v___x_6046_;
goto v___jp_6033_;
}
else
{
lean_object* v___x_6048_; 
lean_dec(v_val_6040_);
lean_dec(v_key_6039_);
if (v_isShared_6043_ == 0)
{
lean_ctor_set(v___x_6042_, 1, v_x_6020_);
lean_ctor_set(v___x_6042_, 0, v_x_6019_);
v___x_6048_ = v___x_6042_;
goto v_reusejp_6047_;
}
else
{
lean_object* v_reuseFailAlloc_6049_; 
v_reuseFailAlloc_6049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6049_, 0, v_x_6019_);
lean_ctor_set(v_reuseFailAlloc_6049_, 1, v_x_6020_);
v___x_6048_ = v_reuseFailAlloc_6049_;
goto v_reusejp_6047_;
}
v_reusejp_6047_:
{
v___y_6034_ = v___x_6048_;
goto v___jp_6033_;
}
}
}
}
case 1:
{
lean_object* v_node_6051_; lean_object* v___x_6053_; uint8_t v_isShared_6054_; uint8_t v_isSharedCheck_6063_; 
v_node_6051_ = lean_ctor_get(v_v_6030_, 0);
v_isSharedCheck_6063_ = !lean_is_exclusive(v_v_6030_);
if (v_isSharedCheck_6063_ == 0)
{
v___x_6053_ = v_v_6030_;
v_isShared_6054_ = v_isSharedCheck_6063_;
goto v_resetjp_6052_;
}
else
{
lean_inc(v_node_6051_);
lean_dec(v_v_6030_);
v___x_6053_ = lean_box(0);
v_isShared_6054_ = v_isSharedCheck_6063_;
goto v_resetjp_6052_;
}
v_resetjp_6052_:
{
size_t v___x_6055_; size_t v___x_6056_; size_t v___x_6057_; size_t v___x_6058_; lean_object* v___x_6059_; lean_object* v___x_6061_; 
v___x_6055_ = ((size_t)5ULL);
v___x_6056_ = lean_usize_shift_right(v_x_6017_, v___x_6055_);
v___x_6057_ = ((size_t)1ULL);
v___x_6058_ = lean_usize_add(v_x_6018_, v___x_6057_);
v___x_6059_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_node_6051_, v___x_6056_, v___x_6058_, v_x_6019_, v_x_6020_);
if (v_isShared_6054_ == 0)
{
lean_ctor_set(v___x_6053_, 0, v___x_6059_);
v___x_6061_ = v___x_6053_;
goto v_reusejp_6060_;
}
else
{
lean_object* v_reuseFailAlloc_6062_; 
v_reuseFailAlloc_6062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6062_, 0, v___x_6059_);
v___x_6061_ = v_reuseFailAlloc_6062_;
goto v_reusejp_6060_;
}
v_reusejp_6060_:
{
v___y_6034_ = v___x_6061_;
goto v___jp_6033_;
}
}
}
default: 
{
lean_object* v___x_6064_; 
v___x_6064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6064_, 0, v_x_6019_);
lean_ctor_set(v___x_6064_, 1, v_x_6020_);
v___y_6034_ = v___x_6064_;
goto v___jp_6033_;
}
}
v___jp_6033_:
{
lean_object* v___x_6035_; lean_object* v___x_6037_; 
v___x_6035_ = lean_array_fset(v_xs_x27_6032_, v_j_6024_, v___y_6034_);
lean_dec(v_j_6024_);
if (v_isShared_6029_ == 0)
{
lean_ctor_set(v___x_6028_, 0, v___x_6035_);
v___x_6037_ = v___x_6028_;
goto v_reusejp_6036_;
}
else
{
lean_object* v_reuseFailAlloc_6038_; 
v_reuseFailAlloc_6038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6038_, 0, v___x_6035_);
v___x_6037_ = v_reuseFailAlloc_6038_;
goto v_reusejp_6036_;
}
v_reusejp_6036_:
{
return v___x_6037_;
}
}
}
}
}
else
{
lean_object* v_ks_6067_; lean_object* v_vs_6068_; lean_object* v___x_6070_; uint8_t v_isShared_6071_; uint8_t v_isSharedCheck_6086_; 
v_ks_6067_ = lean_ctor_get(v_x_6016_, 0);
v_vs_6068_ = lean_ctor_get(v_x_6016_, 1);
v_isSharedCheck_6086_ = !lean_is_exclusive(v_x_6016_);
if (v_isSharedCheck_6086_ == 0)
{
v___x_6070_ = v_x_6016_;
v_isShared_6071_ = v_isSharedCheck_6086_;
goto v_resetjp_6069_;
}
else
{
lean_inc(v_vs_6068_);
lean_inc(v_ks_6067_);
lean_dec(v_x_6016_);
v___x_6070_ = lean_box(0);
v_isShared_6071_ = v_isSharedCheck_6086_;
goto v_resetjp_6069_;
}
v_resetjp_6069_:
{
lean_object* v___x_6073_; 
if (v_isShared_6071_ == 0)
{
v___x_6073_ = v___x_6070_;
goto v_reusejp_6072_;
}
else
{
lean_object* v_reuseFailAlloc_6085_; 
v_reuseFailAlloc_6085_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6085_, 0, v_ks_6067_);
lean_ctor_set(v_reuseFailAlloc_6085_, 1, v_vs_6068_);
v___x_6073_ = v_reuseFailAlloc_6085_;
goto v_reusejp_6072_;
}
v_reusejp_6072_:
{
lean_object* v_newNode_6074_; size_t v___x_6075_; uint8_t v___x_6076_; 
v_newNode_6074_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1___redArg(v___x_6073_, v_x_6019_, v_x_6020_);
v___x_6075_ = ((size_t)7ULL);
v___x_6076_ = lean_usize_dec_le(v___x_6075_, v_x_6018_);
if (v___x_6076_ == 0)
{
lean_object* v___x_6077_; lean_object* v___x_6078_; uint8_t v___x_6079_; 
v___x_6077_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_6074_);
v___x_6078_ = lean_unsigned_to_nat(4u);
v___x_6079_ = lean_nat_dec_lt(v___x_6077_, v___x_6078_);
lean_dec(v___x_6077_);
if (v___x_6079_ == 0)
{
lean_object* v_ks_6080_; lean_object* v_vs_6081_; lean_object* v___x_6082_; lean_object* v___x_6083_; lean_object* v___x_6084_; 
v_ks_6080_ = lean_ctor_get(v_newNode_6074_, 0);
lean_inc_ref(v_ks_6080_);
v_vs_6081_ = lean_ctor_get(v_newNode_6074_, 1);
lean_inc_ref(v_vs_6081_);
lean_dec_ref(v_newNode_6074_);
v___x_6082_ = lean_unsigned_to_nat(0u);
v___x_6083_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0);
v___x_6084_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(v_x_6018_, v_ks_6080_, v_vs_6081_, v___x_6082_, v___x_6083_);
lean_dec_ref(v_vs_6081_);
lean_dec_ref(v_ks_6080_);
return v___x_6084_;
}
else
{
return v_newNode_6074_;
}
}
else
{
return v_newNode_6074_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(size_t v_depth_6087_, lean_object* v_keys_6088_, lean_object* v_vals_6089_, lean_object* v_i_6090_, lean_object* v_entries_6091_){
_start:
{
lean_object* v___x_6092_; uint8_t v___x_6093_; 
v___x_6092_ = lean_array_get_size(v_keys_6088_);
v___x_6093_ = lean_nat_dec_lt(v_i_6090_, v___x_6092_);
if (v___x_6093_ == 0)
{
lean_dec(v_i_6090_);
return v_entries_6091_;
}
else
{
lean_object* v_k_6094_; lean_object* v_v_6095_; uint64_t v___y_6097_; 
v_k_6094_ = lean_array_fget_borrowed(v_keys_6088_, v_i_6090_);
v_v_6095_ = lean_array_fget_borrowed(v_vals_6089_, v_i_6090_);
if (lean_obj_tag(v_k_6094_) == 0)
{
uint64_t v___x_6108_; 
v___x_6108_ = 1723ULL;
v___y_6097_ = v___x_6108_;
goto v___jp_6096_;
}
else
{
uint64_t v_hash_6109_; 
v_hash_6109_ = lean_ctor_get_uint64(v_k_6094_, sizeof(void*)*2);
v___y_6097_ = v_hash_6109_;
goto v___jp_6096_;
}
v___jp_6096_:
{
size_t v_h_6098_; size_t v___x_6099_; lean_object* v___x_6100_; size_t v___x_6101_; size_t v___x_6102_; size_t v___x_6103_; size_t v_h_6104_; lean_object* v___x_6105_; lean_object* v___x_6106_; 
v_h_6098_ = lean_uint64_to_usize(v___y_6097_);
v___x_6099_ = ((size_t)5ULL);
v___x_6100_ = lean_unsigned_to_nat(1u);
v___x_6101_ = ((size_t)1ULL);
v___x_6102_ = lean_usize_sub(v_depth_6087_, v___x_6101_);
v___x_6103_ = lean_usize_mul(v___x_6099_, v___x_6102_);
v_h_6104_ = lean_usize_shift_right(v_h_6098_, v___x_6103_);
v___x_6105_ = lean_nat_add(v_i_6090_, v___x_6100_);
lean_dec(v_i_6090_);
lean_inc(v_v_6095_);
lean_inc(v_k_6094_);
v___x_6106_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_entries_6091_, v_h_6104_, v_depth_6087_, v_k_6094_, v_v_6095_);
v_i_6090_ = v___x_6105_;
v_entries_6091_ = v___x_6106_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_6110_, lean_object* v_keys_6111_, lean_object* v_vals_6112_, lean_object* v_i_6113_, lean_object* v_entries_6114_){
_start:
{
size_t v_depth_boxed_6115_; lean_object* v_res_6116_; 
v_depth_boxed_6115_ = lean_unbox_usize(v_depth_6110_);
lean_dec(v_depth_6110_);
v_res_6116_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(v_depth_boxed_6115_, v_keys_6111_, v_vals_6112_, v_i_6113_, v_entries_6114_);
lean_dec_ref(v_vals_6112_);
lean_dec_ref(v_keys_6111_);
return v_res_6116_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___boxed(lean_object* v_x_6117_, lean_object* v_x_6118_, lean_object* v_x_6119_, lean_object* v_x_6120_, lean_object* v_x_6121_){
_start:
{
size_t v_x_359__boxed_6122_; size_t v_x_360__boxed_6123_; lean_object* v_res_6124_; 
v_x_359__boxed_6122_ = lean_unbox_usize(v_x_6118_);
lean_dec(v_x_6118_);
v_x_360__boxed_6123_ = lean_unbox_usize(v_x_6119_);
lean_dec(v_x_6119_);
v_res_6124_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_x_6117_, v_x_359__boxed_6122_, v_x_360__boxed_6123_, v_x_6120_, v_x_6121_);
return v_res_6124_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0___redArg(lean_object* v_x_6125_, lean_object* v_x_6126_, lean_object* v_x_6127_){
_start:
{
uint64_t v___y_6129_; 
if (lean_obj_tag(v_x_6126_) == 0)
{
uint64_t v___x_6133_; 
v___x_6133_ = 1723ULL;
v___y_6129_ = v___x_6133_;
goto v___jp_6128_;
}
else
{
uint64_t v_hash_6134_; 
v_hash_6134_ = lean_ctor_get_uint64(v_x_6126_, sizeof(void*)*2);
v___y_6129_ = v_hash_6134_;
goto v___jp_6128_;
}
v___jp_6128_:
{
size_t v___x_6130_; size_t v___x_6131_; lean_object* v___x_6132_; 
v___x_6130_ = lean_uint64_to_usize(v___y_6129_);
v___x_6131_ = ((size_t)1ULL);
v___x_6132_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_x_6125_, v___x_6130_, v___x_6131_, v_x_6126_, v_x_6127_);
return v___x_6132_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_insert(lean_object* v_m_6135_, lean_object* v_n_6136_, lean_object* v_v_6137_){
_start:
{
lean_object* v_map_u2081_6138_; lean_object* v_map_u2082_6139_; lean_object* v___x_6141_; uint8_t v_isShared_6142_; uint8_t v_isSharedCheck_6147_; 
v_map_u2081_6138_ = lean_ctor_get(v_m_6135_, 0);
v_map_u2082_6139_ = lean_ctor_get(v_m_6135_, 1);
v_isSharedCheck_6147_ = !lean_is_exclusive(v_m_6135_);
if (v_isSharedCheck_6147_ == 0)
{
v___x_6141_ = v_m_6135_;
v_isShared_6142_ = v_isSharedCheck_6147_;
goto v_resetjp_6140_;
}
else
{
lean_inc(v_map_u2082_6139_);
lean_inc(v_map_u2081_6138_);
lean_dec(v_m_6135_);
v___x_6141_ = lean_box(0);
v_isShared_6142_ = v_isSharedCheck_6147_;
goto v_resetjp_6140_;
}
v_resetjp_6140_:
{
lean_object* v___x_6143_; lean_object* v___x_6145_; 
v___x_6143_ = l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0___redArg(v_map_u2082_6139_, v_n_6136_, v_v_6137_);
if (v_isShared_6142_ == 0)
{
lean_ctor_set(v___x_6141_, 1, v___x_6143_);
v___x_6145_ = v___x_6141_;
goto v_reusejp_6144_;
}
else
{
lean_object* v_reuseFailAlloc_6146_; 
v_reuseFailAlloc_6146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6146_, 0, v_map_u2081_6138_);
lean_ctor_set(v_reuseFailAlloc_6146_, 1, v___x_6143_);
v___x_6145_ = v_reuseFailAlloc_6146_;
goto v_reusejp_6144_;
}
v_reusejp_6144_:
{
return v___x_6145_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0(lean_object* v_00_u03b2_6148_, lean_object* v_x_6149_, lean_object* v_x_6150_, lean_object* v_x_6151_){
_start:
{
lean_object* v___x_6152_; 
v___x_6152_ = l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0___redArg(v_x_6149_, v_x_6150_, v_x_6151_);
return v___x_6152_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0(lean_object* v_00_u03b2_6153_, lean_object* v_x_6154_, size_t v_x_6155_, size_t v_x_6156_, lean_object* v_x_6157_, lean_object* v_x_6158_){
_start:
{
lean_object* v___x_6159_; 
v___x_6159_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_x_6154_, v_x_6155_, v_x_6156_, v_x_6157_, v_x_6158_);
return v___x_6159_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___boxed(lean_object* v_00_u03b2_6160_, lean_object* v_x_6161_, lean_object* v_x_6162_, lean_object* v_x_6163_, lean_object* v_x_6164_, lean_object* v_x_6165_){
_start:
{
size_t v_x_555__boxed_6166_; size_t v_x_556__boxed_6167_; lean_object* v_res_6168_; 
v_x_555__boxed_6166_ = lean_unbox_usize(v_x_6162_);
lean_dec(v_x_6162_);
v_x_556__boxed_6167_ = lean_unbox_usize(v_x_6163_);
lean_dec(v_x_6163_);
v_res_6168_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0(v_00_u03b2_6160_, v_x_6161_, v_x_555__boxed_6166_, v_x_556__boxed_6167_, v_x_6164_, v_x_6165_);
return v_res_6168_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_6169_, lean_object* v_n_6170_, lean_object* v_k_6171_, lean_object* v_v_6172_){
_start:
{
lean_object* v___x_6173_; 
v___x_6173_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1___redArg(v_n_6170_, v_k_6171_, v_v_6172_);
return v___x_6173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_6174_, size_t v_depth_6175_, lean_object* v_keys_6176_, lean_object* v_vals_6177_, lean_object* v_heq_6178_, lean_object* v_i_6179_, lean_object* v_entries_6180_){
_start:
{
lean_object* v___x_6181_; 
v___x_6181_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(v_depth_6175_, v_keys_6176_, v_vals_6177_, v_i_6179_, v_entries_6180_);
return v___x_6181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_6182_, lean_object* v_depth_6183_, lean_object* v_keys_6184_, lean_object* v_vals_6185_, lean_object* v_heq_6186_, lean_object* v_i_6187_, lean_object* v_entries_6188_){
_start:
{
size_t v_depth_boxed_6189_; lean_object* v_res_6190_; 
v_depth_boxed_6189_ = lean_unbox_usize(v_depth_6183_);
lean_dec(v_depth_6183_);
v_res_6190_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2(v_00_u03b2_6182_, v_depth_boxed_6189_, v_keys_6184_, v_vals_6185_, v_heq_6186_, v_i_6187_, v_entries_6188_);
lean_dec_ref(v_vals_6185_);
lean_dec_ref(v_keys_6184_);
return v_res_6190_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_6191_, lean_object* v_x_6192_, lean_object* v_x_6193_, lean_object* v_x_6194_, lean_object* v_x_6195_){
_start:
{
lean_object* v___x_6196_; 
v___x_6196_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_x_6192_, v_x_6193_, v_x_6194_, v_x_6195_);
return v___x_6196_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldStage2___redArg(lean_object* v_f_6197_, lean_object* v_s_6198_, lean_object* v_m_6199_){
_start:
{
lean_object* v_map_u2082_6200_; lean_object* v___x_6201_; 
v_map_u2082_6200_ = lean_ctor_get(v_m_6199_, 1);
lean_inc_ref(v_map_u2082_6200_);
lean_dec_ref(v_m_6199_);
v___x_6201_ = l_Lean_PersistentHashMap_foldl___redArg(v_map_u2082_6200_, v_f_6197_, v_s_6198_);
return v___x_6201_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldStage2(lean_object* v_00_u03c3_6202_, lean_object* v_f_6203_, lean_object* v_s_6204_, lean_object* v_m_6205_){
_start:
{
lean_object* v_map_u2082_6206_; lean_object* v___x_6207_; 
v_map_u2082_6206_ = lean_ctor_get(v_m_6205_, 1);
lean_inc_ref(v_map_u2082_6206_);
lean_dec_ref(v_m_6205_);
v___x_6207_ = l_Lean_PersistentHashMap_foldl___redArg(v_map_u2082_6206_, v_f_6203_, v_s_6204_);
return v___x_6207_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM___redArg___lam__0(lean_object* v_inst_6208_, lean_object* v_f_6209_, lean_object* v_map_u2082_6210_, lean_object* v_____do__lift_6211_){
_start:
{
lean_object* v___x_6212_; 
v___x_6212_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v_inst_6208_, v_f_6209_, v_map_u2082_6210_, v_____do__lift_6211_);
return v___x_6212_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM___redArg(lean_object* v_inst_6213_, lean_object* v_f_6214_, lean_object* v_init_6215_, lean_object* v_map_6216_){
_start:
{
lean_object* v_toBind_6217_; lean_object* v_map_u2081_6218_; lean_object* v_map_u2082_6219_; lean_object* v___f_6220_; lean_object* v___x_6221_; lean_object* v___x_6222_; 
v_toBind_6217_ = lean_ctor_get(v_inst_6213_, 1);
lean_inc(v_toBind_6217_);
v_map_u2081_6218_ = lean_ctor_get(v_map_6216_, 0);
lean_inc_ref(v_map_u2081_6218_);
v_map_u2082_6219_ = lean_ctor_get(v_map_6216_, 1);
lean_inc_ref(v_map_u2082_6219_);
lean_dec_ref(v_map_6216_);
lean_inc(v_f_6214_);
lean_inc_ref(v_inst_6213_);
v___f_6220_ = lean_alloc_closure((void*)(l_Lean_ConstMap_foldM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_6220_, 0, v_inst_6213_);
lean_closure_set(v___f_6220_, 1, v_f_6214_);
lean_closure_set(v___f_6220_, 2, v_map_u2082_6219_);
v___x_6221_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_6213_, v_map_u2081_6218_, v_f_6214_, v_init_6215_);
v___x_6222_ = lean_apply_4(v_toBind_6217_, lean_box(0), lean_box(0), v___x_6221_, v___f_6220_);
return v___x_6222_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM(lean_object* v_00_u03c3_6223_, lean_object* v_m_6224_, lean_object* v_inst_6225_, lean_object* v_f_6226_, lean_object* v_init_6227_, lean_object* v_map_6228_){
_start:
{
lean_object* v___x_6229_; 
v___x_6229_ = l_Lean_ConstMap_foldM___redArg(v_inst_6225_, v_f_6226_, v_init_6227_, v_map_6228_);
return v___x_6229_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___lam__0(lean_object* v_f_6230_, lean_object* v_x1_6231_, lean_object* v_x2_6232_, lean_object* v_x3_6233_){
_start:
{
lean_object* v___x_6234_; 
v___x_6234_ = lean_apply_3(v_f_6230_, v_x1_6231_, v_x2_6232_, v_x3_6233_);
return v___x_6234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_f_6235_, lean_object* v_keys_6236_, lean_object* v_vals_6237_, lean_object* v_i_6238_, lean_object* v_acc_6239_){
_start:
{
lean_object* v___x_6240_; uint8_t v___x_6241_; 
v___x_6240_ = lean_array_get_size(v_keys_6236_);
v___x_6241_ = lean_nat_dec_lt(v_i_6238_, v___x_6240_);
if (v___x_6241_ == 0)
{
lean_dec(v_i_6238_);
lean_dec(v_f_6235_);
return v_acc_6239_;
}
else
{
lean_object* v_k_6242_; lean_object* v_v_6243_; lean_object* v___x_6244_; lean_object* v___x_6245_; lean_object* v___x_6246_; 
v_k_6242_ = lean_array_fget_borrowed(v_keys_6236_, v_i_6238_);
v_v_6243_ = lean_array_fget_borrowed(v_vals_6237_, v_i_6238_);
lean_inc(v_f_6235_);
lean_inc(v_v_6243_);
lean_inc(v_k_6242_);
v___x_6244_ = lean_apply_3(v_f_6235_, v_acc_6239_, v_k_6242_, v_v_6243_);
v___x_6245_ = lean_unsigned_to_nat(1u);
v___x_6246_ = lean_nat_add(v_i_6238_, v___x_6245_);
lean_dec(v_i_6238_);
v_i_6238_ = v___x_6246_;
v_acc_6239_ = v___x_6244_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_f_6248_, lean_object* v_keys_6249_, lean_object* v_vals_6250_, lean_object* v_i_6251_, lean_object* v_acc_6252_){
_start:
{
lean_object* v_res_6253_; 
v_res_6253_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(v_f_6248_, v_keys_6249_, v_vals_6250_, v_i_6251_, v_acc_6252_);
lean_dec_ref(v_vals_6250_);
lean_dec_ref(v_keys_6249_);
return v_res_6253_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_f_6254_, lean_object* v_as_6255_, size_t v_i_6256_, size_t v_stop_6257_, lean_object* v_b_6258_){
_start:
{
lean_object* v___y_6260_; uint8_t v___x_6264_; 
v___x_6264_ = lean_usize_dec_eq(v_i_6256_, v_stop_6257_);
if (v___x_6264_ == 0)
{
lean_object* v___x_6265_; 
v___x_6265_ = lean_array_uget_borrowed(v_as_6255_, v_i_6256_);
switch(lean_obj_tag(v___x_6265_))
{
case 0:
{
lean_object* v_key_6266_; lean_object* v_val_6267_; lean_object* v___x_6268_; 
v_key_6266_ = lean_ctor_get(v___x_6265_, 0);
v_val_6267_ = lean_ctor_get(v___x_6265_, 1);
lean_inc(v_f_6254_);
lean_inc(v_val_6267_);
lean_inc(v_key_6266_);
v___x_6268_ = lean_apply_3(v_f_6254_, v_b_6258_, v_key_6266_, v_val_6267_);
v___y_6260_ = v___x_6268_;
goto v___jp_6259_;
}
case 1:
{
lean_object* v_node_6269_; lean_object* v___x_6270_; 
v_node_6269_ = lean_ctor_get(v___x_6265_, 0);
lean_inc(v_f_6254_);
v___x_6270_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6254_, v_node_6269_, v_b_6258_);
v___y_6260_ = v___x_6270_;
goto v___jp_6259_;
}
default: 
{
v___y_6260_ = v_b_6258_;
goto v___jp_6259_;
}
}
}
else
{
lean_dec(v_f_6254_);
return v_b_6258_;
}
v___jp_6259_:
{
size_t v___x_6261_; size_t v___x_6262_; 
v___x_6261_ = ((size_t)1ULL);
v___x_6262_ = lean_usize_add(v_i_6256_, v___x_6261_);
v_i_6256_ = v___x_6262_;
v_b_6258_ = v___y_6260_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(lean_object* v_f_6271_, lean_object* v_x_6272_, lean_object* v_x_6273_){
_start:
{
if (lean_obj_tag(v_x_6272_) == 0)
{
lean_object* v_es_6274_; lean_object* v___x_6275_; lean_object* v___x_6276_; uint8_t v___x_6277_; 
v_es_6274_ = lean_ctor_get(v_x_6272_, 0);
v___x_6275_ = lean_unsigned_to_nat(0u);
v___x_6276_ = lean_array_get_size(v_es_6274_);
v___x_6277_ = lean_nat_dec_lt(v___x_6275_, v___x_6276_);
if (v___x_6277_ == 0)
{
lean_dec(v_f_6271_);
return v_x_6273_;
}
else
{
size_t v___x_6278_; size_t v___x_6279_; lean_object* v___x_6280_; 
v___x_6278_ = ((size_t)0ULL);
v___x_6279_ = lean_usize_of_nat(v___x_6276_);
v___x_6280_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(v_f_6271_, v_es_6274_, v___x_6278_, v___x_6279_, v_x_6273_);
return v___x_6280_;
}
}
else
{
lean_object* v_ks_6281_; lean_object* v_vs_6282_; lean_object* v___x_6283_; lean_object* v___x_6284_; 
v_ks_6281_ = lean_ctor_get(v_x_6272_, 0);
v_vs_6282_ = lean_ctor_get(v_x_6272_, 1);
v___x_6283_ = lean_unsigned_to_nat(0u);
v___x_6284_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(v_f_6271_, v_ks_6281_, v_vs_6282_, v___x_6283_, v_x_6273_);
return v___x_6284_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_6285_, lean_object* v_x_6286_, lean_object* v_x_6287_){
_start:
{
lean_object* v_res_6288_; 
v_res_6288_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6285_, v_x_6286_, v_x_6287_);
lean_dec_ref(v_x_6286_);
return v_res_6288_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_f_6289_, lean_object* v_as_6290_, lean_object* v_i_6291_, lean_object* v_stop_6292_, lean_object* v_b_6293_){
_start:
{
size_t v_i_boxed_6294_; size_t v_stop_boxed_6295_; lean_object* v_res_6296_; 
v_i_boxed_6294_ = lean_unbox_usize(v_i_6291_);
lean_dec(v_i_6291_);
v_stop_boxed_6295_ = lean_unbox_usize(v_stop_6292_);
lean_dec(v_stop_6292_);
v_res_6296_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(v_f_6289_, v_as_6290_, v_i_boxed_6294_, v_stop_boxed_6295_, v_b_6293_);
lean_dec_ref(v_as_6290_);
return v_res_6296_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(lean_object* v_map_6297_, lean_object* v_f_6298_, lean_object* v_init_6299_){
_start:
{
lean_object* v___f_6300_; lean_object* v___x_6301_; 
v___f_6300_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___lam__0), 4, 1);
lean_closure_set(v___f_6300_, 0, v_f_6298_);
v___x_6301_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v___f_6300_, v_map_6297_, v_init_6299_);
return v___x_6301_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___boxed(lean_object* v_map_6302_, lean_object* v_f_6303_, lean_object* v_init_6304_){
_start:
{
lean_object* v_res_6305_; 
v_res_6305_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(v_map_6302_, v_f_6303_, v_init_6304_);
lean_dec_ref(v_map_6302_);
return v_res_6305_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_fold___redArg(lean_object* v_f_6306_, lean_object* v_init_6307_, lean_object* v_m_6308_){
_start:
{
lean_object* v_map_u2081_6309_; lean_object* v_map_u2082_6310_; lean_object* v___x_6311_; lean_object* v___x_6312_; 
v_map_u2081_6309_ = lean_ctor_get(v_m_6308_, 0);
lean_inc_ref(v_map_u2081_6309_);
v_map_u2082_6310_ = lean_ctor_get(v_m_6308_, 1);
lean_inc_ref(v_map_u2082_6310_);
lean_dec_ref(v_m_6308_);
lean_inc(v_f_6306_);
v___x_6311_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_map_u2081_6309_, v_f_6306_, v_init_6307_);
v___x_6312_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(v_map_u2082_6310_, v_f_6306_, v___x_6311_);
lean_dec_ref(v_map_u2082_6310_);
return v___x_6312_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_fold(lean_object* v_00_u03c3_6313_, lean_object* v_f_6314_, lean_object* v_init_6315_, lean_object* v_m_6316_){
_start:
{
lean_object* v___x_6317_; 
v___x_6317_ = l_Lean_ConstMap_fold___redArg(v_f_6314_, v_init_6315_, v_m_6316_);
return v___x_6317_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0(lean_object* v_00_u03c3_6318_, lean_object* v_00_u03b2_6319_, lean_object* v_map_6320_, lean_object* v_f_6321_, lean_object* v_init_6322_){
_start:
{
lean_object* v___x_6323_; 
v___x_6323_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(v_map_6320_, v_f_6321_, v_init_6322_);
return v___x_6323_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___boxed(lean_object* v_00_u03c3_6324_, lean_object* v_00_u03b2_6325_, lean_object* v_map_6326_, lean_object* v_f_6327_, lean_object* v_init_6328_){
_start:
{
lean_object* v_res_6329_; 
v_res_6329_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0(v_00_u03c3_6324_, v_00_u03b2_6325_, v_map_6326_, v_f_6327_, v_init_6328_);
lean_dec_ref(v_map_6326_);
return v_res_6329_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg(lean_object* v_map_6330_, lean_object* v_f_6331_, lean_object* v_init_6332_){
_start:
{
lean_object* v___x_6333_; 
v___x_6333_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6331_, v_map_6330_, v_init_6332_);
return v___x_6333_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg___boxed(lean_object* v_map_6334_, lean_object* v_f_6335_, lean_object* v_init_6336_){
_start:
{
lean_object* v_res_6337_; 
v_res_6337_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg(v_map_6334_, v_f_6335_, v_init_6336_);
lean_dec_ref(v_map_6334_);
return v_res_6337_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0(lean_object* v_00_u03c3_6338_, lean_object* v_00_u03b2_6339_, lean_object* v_map_6340_, lean_object* v_f_6341_, lean_object* v_init_6342_){
_start:
{
lean_object* v___x_6343_; 
v___x_6343_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6341_, v_map_6340_, v_init_6342_);
return v___x_6343_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___boxed(lean_object* v_00_u03c3_6344_, lean_object* v_00_u03b2_6345_, lean_object* v_map_6346_, lean_object* v_f_6347_, lean_object* v_init_6348_){
_start:
{
lean_object* v_res_6349_; 
v_res_6349_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0(v_00_u03c3_6344_, v_00_u03b2_6345_, v_map_6346_, v_f_6347_, v_init_6348_);
lean_dec_ref(v_map_6346_);
return v_res_6349_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1(lean_object* v_00_u03c3_6350_, lean_object* v_00_u03b1_6351_, lean_object* v_00_u03b2_6352_, lean_object* v_f_6353_, lean_object* v_x_6354_, lean_object* v_x_6355_){
_start:
{
lean_object* v___x_6356_; 
v___x_6356_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6353_, v_x_6354_, v_x_6355_);
return v___x_6356_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_6357_, lean_object* v_00_u03b1_6358_, lean_object* v_00_u03b2_6359_, lean_object* v_f_6360_, lean_object* v_x_6361_, lean_object* v_x_6362_){
_start:
{
lean_object* v_res_6363_; 
v_res_6363_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1(v_00_u03c3_6357_, v_00_u03b1_6358_, v_00_u03b2_6359_, v_f_6360_, v_x_6361_, v_x_6362_);
lean_dec_ref(v_x_6361_);
return v_res_6363_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_6364_, lean_object* v_00_u03b2_6365_, lean_object* v_00_u03c3_6366_, lean_object* v_f_6367_, lean_object* v_as_6368_, size_t v_i_6369_, size_t v_stop_6370_, lean_object* v_b_6371_){
_start:
{
lean_object* v___x_6372_; 
v___x_6372_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(v_f_6367_, v_as_6368_, v_i_6369_, v_stop_6370_, v_b_6371_);
return v___x_6372_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_6373_, lean_object* v_00_u03b2_6374_, lean_object* v_00_u03c3_6375_, lean_object* v_f_6376_, lean_object* v_as_6377_, lean_object* v_i_6378_, lean_object* v_stop_6379_, lean_object* v_b_6380_){
_start:
{
size_t v_i_boxed_6381_; size_t v_stop_boxed_6382_; lean_object* v_res_6383_; 
v_i_boxed_6381_ = lean_unbox_usize(v_i_6378_);
lean_dec(v_i_6378_);
v_stop_boxed_6382_ = lean_unbox_usize(v_stop_6379_);
lean_dec(v_stop_6379_);
v_res_6383_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_6373_, v_00_u03b2_6374_, v_00_u03c3_6375_, v_f_6376_, v_as_6377_, v_i_boxed_6381_, v_stop_boxed_6382_, v_b_6380_);
lean_dec_ref(v_as_6377_);
return v_res_6383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03c3_6384_, lean_object* v_00_u03b1_6385_, lean_object* v_00_u03b2_6386_, lean_object* v_f_6387_, lean_object* v_keys_6388_, lean_object* v_vals_6389_, lean_object* v_heq_6390_, lean_object* v_i_6391_, lean_object* v_acc_6392_){
_start:
{
lean_object* v___x_6393_; 
v___x_6393_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(v_f_6387_, v_keys_6388_, v_vals_6389_, v_i_6391_, v_acc_6392_);
return v___x_6393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03c3_6394_, lean_object* v_00_u03b1_6395_, lean_object* v_00_u03b2_6396_, lean_object* v_f_6397_, lean_object* v_keys_6398_, lean_object* v_vals_6399_, lean_object* v_heq_6400_, lean_object* v_i_6401_, lean_object* v_acc_6402_){
_start:
{
lean_object* v_res_6403_; 
v_res_6403_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3(v_00_u03c3_6394_, v_00_u03b1_6395_, v_00_u03b2_6396_, v_f_6397_, v_keys_6398_, v_vals_6399_, v_heq_6400_, v_i_6401_, v_acc_6402_);
lean_dec_ref(v_vals_6399_);
lean_dec_ref(v_keys_6398_);
return v_res_6403_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM___redArg___lam__0(lean_object* v_inst_6404_, lean_object* v_map_u2082_6405_, lean_object* v_f_6406_, lean_object* v_____r_6407_){
_start:
{
lean_object* v___x_6408_; 
v___x_6408_ = l_Lean_PersistentHashMap_forM___redArg(v_inst_6404_, v_map_u2082_6405_, v_f_6406_);
return v___x_6408_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM___redArg(lean_object* v_inst_6409_, lean_object* v_map_6410_, lean_object* v_f_6411_){
_start:
{
lean_object* v_toBind_6412_; lean_object* v_map_u2081_6413_; lean_object* v_map_u2082_6414_; lean_object* v___f_6415_; lean_object* v___x_6416_; lean_object* v___x_6417_; 
v_toBind_6412_ = lean_ctor_get(v_inst_6409_, 1);
lean_inc(v_toBind_6412_);
v_map_u2081_6413_ = lean_ctor_get(v_map_6410_, 0);
lean_inc_ref(v_map_u2081_6413_);
v_map_u2082_6414_ = lean_ctor_get(v_map_6410_, 1);
lean_inc_ref(v_map_u2082_6414_);
lean_dec_ref(v_map_6410_);
lean_inc(v_f_6411_);
lean_inc_ref(v_inst_6409_);
v___f_6415_ = lean_alloc_closure((void*)(l_Lean_ConstMap_forM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_6415_, 0, v_inst_6409_);
lean_closure_set(v___f_6415_, 1, v_map_u2082_6414_);
lean_closure_set(v___f_6415_, 2, v_f_6411_);
v___x_6416_ = l_Lean_ImportedConsts_forM___redArg(v_inst_6409_, v_map_u2081_6413_, v_f_6411_);
v___x_6417_ = lean_apply_4(v_toBind_6412_, lean_box(0), lean_box(0), v___x_6416_, v___f_6415_);
return v___x_6417_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM(lean_object* v_m_6418_, lean_object* v_inst_6419_, lean_object* v_map_6420_, lean_object* v_f_6421_){
_start:
{
lean_object* v___x_6422_; 
v___x_6422_ = l_Lean_ConstMap_forM___redArg(v_inst_6419_, v_map_6420_, v_f_6421_);
return v___x_6422_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__0(lean_object* v_f_6423_, lean_object* v_n_6424_, lean_object* v_v_6425_){
_start:
{
lean_object* v___x_6426_; lean_object* v___x_6427_; 
v___x_6426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6426_, 0, v_n_6424_);
lean_ctor_set(v___x_6426_, 1, v_v_6425_);
v___x_6427_ = lean_apply_1(v_f_6423_, v___x_6426_);
return v___x_6427_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__1(lean_object* v_inst_6428_, lean_object* v_map_6429_, lean_object* v_f_6430_){
_start:
{
lean_object* v___f_6431_; lean_object* v___x_6432_; 
v___f_6431_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__0), 3, 1);
lean_closure_set(v___f_6431_, 0, v_f_6430_);
v___x_6432_ = l_Lean_ConstMap_forM___redArg(v_inst_6428_, v_map_6429_, v___f_6431_);
return v___x_6432_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg(lean_object* v_inst_6433_){
_start:
{
lean_object* v___f_6434_; 
v___f_6434_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_6434_, 0, v_inst_6433_);
return v___f_6434_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad(lean_object* v_m_6435_, lean_object* v_inst_6436_){
_start:
{
lean_object* v___f_6437_; 
v___f_6437_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_6437_, 0, v_inst_6436_);
return v___f_6437_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__2(lean_object* v___y_6438_, lean_object* v_toBind_6439_, lean_object* v___f_6440_, lean_object* v_n_6441_, lean_object* v_v_6442_, lean_object* v___y_6443_){
_start:
{
lean_object* v___x_6444_; lean_object* v___x_6445_; lean_object* v___x_6446_; 
v___x_6444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6444_, 0, v_n_6441_);
lean_ctor_set(v___x_6444_, 1, v_v_6442_);
v___x_6445_ = lean_apply_2(v___y_6438_, v___x_6444_, v___y_6443_);
v___x_6446_ = lean_apply_4(v_toBind_6439_, lean_box(0), lean_box(0), v___x_6445_, v___f_6440_);
return v___x_6446_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__0(lean_object* v_inst_6447_, lean_object* v_00_u03b2_6448_, lean_object* v___y_6449_, lean_object* v___y_6450_, lean_object* v___y_6451_){
_start:
{
lean_object* v___f_6452_; lean_object* v___f_6453_; lean_object* v___f_6454_; lean_object* v___f_6455_; lean_object* v___x_6456_; lean_object* v___x_6457_; lean_object* v___x_6458_; lean_object* v___x_6459_; lean_object* v___x_6460_; lean_object* v___x_6461_; lean_object* v___f_6462_; lean_object* v___f_6463_; lean_object* v___f_6464_; lean_object* v___f_6465_; lean_object* v___x_6466_; lean_object* v___x_6467_; lean_object* v___x_6468_; lean_object* v___x_6469_; lean_object* v___x_6470_; lean_object* v___x_6471_; lean_object* v_toApplicative_6472_; lean_object* v_toBind_6473_; lean_object* v_toPure_6474_; lean_object* v___f_6475_; lean_object* v___f_6476_; lean_object* v___f_6477_; lean_object* v___x_138__overap_6478_; lean_object* v___x_6479_; lean_object* v___x_6480_; 
lean_inc_ref_n(v_inst_6447_, 7);
v___f_6452_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_6452_, 0, v_inst_6447_);
v___f_6453_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_6453_, 0, v_inst_6447_);
v___f_6454_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_6454_, 0, v_inst_6447_);
v___f_6455_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_6455_, 0, v_inst_6447_);
v___x_6456_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_6456_, 0, lean_box(0));
lean_closure_set(v___x_6456_, 1, lean_box(0));
lean_closure_set(v___x_6456_, 2, v_inst_6447_);
v___x_6457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6457_, 0, v___x_6456_);
lean_ctor_set(v___x_6457_, 1, v___f_6452_);
v___x_6458_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_6458_, 0, lean_box(0));
lean_closure_set(v___x_6458_, 1, lean_box(0));
lean_closure_set(v___x_6458_, 2, v_inst_6447_);
v___x_6459_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6459_, 0, v___x_6457_);
lean_ctor_set(v___x_6459_, 1, v___x_6458_);
lean_ctor_set(v___x_6459_, 2, v___f_6453_);
lean_ctor_set(v___x_6459_, 3, v___f_6454_);
lean_ctor_set(v___x_6459_, 4, v___f_6455_);
v___x_6460_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_6460_, 0, lean_box(0));
lean_closure_set(v___x_6460_, 1, lean_box(0));
lean_closure_set(v___x_6460_, 2, v_inst_6447_);
v___x_6461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6461_, 0, v___x_6459_);
lean_ctor_set(v___x_6461_, 1, v___x_6460_);
lean_inc_ref_n(v___x_6461_, 6);
v___f_6462_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_6462_, 0, v___x_6461_);
v___f_6463_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_6463_, 0, v___x_6461_);
v___f_6464_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_6464_, 0, v___x_6461_);
v___f_6465_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_6465_, 0, v___x_6461_);
v___x_6466_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_6466_, 0, lean_box(0));
lean_closure_set(v___x_6466_, 1, lean_box(0));
lean_closure_set(v___x_6466_, 2, v___x_6461_);
v___x_6467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6467_, 0, v___x_6466_);
lean_ctor_set(v___x_6467_, 1, v___f_6462_);
v___x_6468_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_6468_, 0, lean_box(0));
lean_closure_set(v___x_6468_, 1, lean_box(0));
lean_closure_set(v___x_6468_, 2, v___x_6461_);
v___x_6469_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6469_, 0, v___x_6467_);
lean_ctor_set(v___x_6469_, 1, v___x_6468_);
lean_ctor_set(v___x_6469_, 2, v___f_6463_);
lean_ctor_set(v___x_6469_, 3, v___f_6464_);
lean_ctor_set(v___x_6469_, 4, v___f_6465_);
v___x_6470_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_6470_, 0, lean_box(0));
lean_closure_set(v___x_6470_, 1, lean_box(0));
lean_closure_set(v___x_6470_, 2, v___x_6461_);
v___x_6471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6471_, 0, v___x_6469_);
lean_ctor_set(v___x_6471_, 1, v___x_6470_);
v_toApplicative_6472_ = lean_ctor_get(v_inst_6447_, 0);
lean_inc_ref(v_toApplicative_6472_);
v_toBind_6473_ = lean_ctor_get(v_inst_6447_, 1);
lean_inc_n(v_toBind_6473_, 2);
lean_dec_ref(v_inst_6447_);
v_toPure_6474_ = lean_ctor_get(v_toApplicative_6472_, 1);
lean_inc_n(v_toPure_6474_, 2);
lean_dec_ref(v_toApplicative_6472_);
v___f_6475_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0), 2, 1);
lean_closure_set(v___f_6475_, 0, v_toPure_6474_);
v___f_6476_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_6476_, 0, v_toPure_6474_);
v___f_6477_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__2), 6, 3);
lean_closure_set(v___f_6477_, 0, v___y_6451_);
lean_closure_set(v___f_6477_, 1, v_toBind_6473_);
lean_closure_set(v___f_6477_, 2, v___f_6476_);
v___x_138__overap_6478_ = l_Lean_ConstMap_forM___redArg(v___x_6471_, v___y_6449_, v___f_6477_);
v___x_6479_ = lean_apply_1(v___x_138__overap_6478_, v___y_6450_);
v___x_6480_ = lean_apply_4(v_toBind_6473_, lean_box(0), lean_box(0), v___x_6479_, v___f_6475_);
return v___x_6480_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg(lean_object* v_inst_6481_){
_start:
{
lean_object* v___f_6482_; 
v___f_6482_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__0), 5, 1);
lean_closure_set(v___f_6482_, 0, v_inst_6481_);
return v___f_6482_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad(lean_object* v_m_6483_, lean_object* v_inst_6484_){
_start:
{
lean_object* v___f_6485_; 
v___f_6485_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__0), 5, 1);
lean_closure_set(v___f_6485_, 0, v_inst_6484_);
return v___f_6485_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_toList___lam__0(lean_object* v_es_6486_, lean_object* v_n_6487_, lean_object* v_v_6488_){
_start:
{
lean_object* v___x_6489_; lean_object* v___x_6490_; 
v___x_6489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6489_, 0, v_n_6487_);
lean_ctor_set(v___x_6489_, 1, v_v_6488_);
v___x_6490_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6490_, 0, v___x_6489_);
lean_ctor_set(v___x_6490_, 1, v_es_6486_);
return v___x_6490_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_toList(lean_object* v_m_6492_){
_start:
{
lean_object* v___f_6493_; lean_object* v___x_6494_; lean_object* v___x_6495_; 
v___f_6493_ = ((lean_object*)(l_Lean_ConstMap_toList___closed__0));
v___x_6494_ = lean_box(0);
v___x_6495_ = l_Lean_ConstMap_fold___redArg(v___f_6493_, v___x_6494_, v_m_6492_);
return v___x_6495_;
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
