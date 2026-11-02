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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
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
lean_object* lean_obj_tag_nat(lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_mod_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_mod_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_merged_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_merged_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_lazy_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_lazy_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_cached_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_cached_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg___closed__0 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg();
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty___redArg();
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_ImportedConsts_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ImportedConsts_empty___closed__0;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instInhabited___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instInhabited(lean_object*);
lean_object* lean_imported_consts_force_shared(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceShared___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__1___redArg(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2___redArg(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mkMerged___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mkMerged(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_mkMerged_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_mkMerged_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__1(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntry_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntry_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_imported_consts_find_entry_core(lean_object*, lean_object*);
lean_object* lean_imported_consts_find_entry_cached(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryCached_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstCached_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstCached_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_imported_consts_mod_idx_core(lean_object*, lean_object*, lean_object*);
lean_object* lean_imported_consts_find_mod_idx_cached(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modIdxCached_x3f___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_imported_consts_cache_reset();
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_resetCache___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f(lean_object*, lean_object*, lean_object*);
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
static const lean_array_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDuplicates___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDuplicates___redArg___closed__0 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDuplicates___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDuplicates___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDuplicates___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDuplicates(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDuplicates___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
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
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux_modifyChild___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux_modifyChild___redArg___closed__0 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux_modifyChild___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux_modifyChild___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux_modifyChild___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux_modifyChild(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux_modifyChild___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceExpanded___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceExpanded(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesMAux___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_ImportedConsts_toArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ImportedConsts_toArray___redArg___closed__0 = (const lean_object*)&l_Lean_ImportedConsts_toArray___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorIdx___impl___redArg(lean_object* v_x_1912_){
_start:
{
lean_object* v___x_1913_; 
v___x_1913_ = lean_obj_tag_nat(v_x_1912_);
return v___x_1913_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorIdx___impl___redArg___boxed(lean_object* v_x_1914_){
_start:
{
lean_object* v_res_1915_; 
v_res_1915_ = l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorIdx___impl___redArg(v_x_1914_);
lean_dec_ref(v_x_1914_);
return v_res_1915_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorIdx___impl(lean_object* v_00_u03b1_1916_, lean_object* v_x_1917_){
_start:
{
lean_object* v___x_1918_; 
v___x_1918_ = lean_obj_tag_nat(v_x_1917_);
return v___x_1918_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorIdx___impl___boxed(lean_object* v_00_u03b1_1919_, lean_object* v_x_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorIdx___impl(v_00_u03b1_1919_, v_x_1920_);
lean_dec_ref(v_x_1920_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorElim___redArg(lean_object* v_t_1922_, lean_object* v_k_1923_){
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
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorElim(lean_object* v_00_u03b1_1936_, lean_object* v_motive__1_1937_, lean_object* v_ctorIdx_1938_, lean_object* v_t_1939_, lean_object* v_h_1940_, lean_object* v_k_1941_){
_start:
{
lean_object* v___x_1942_; 
v___x_1942_ = l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorElim___redArg(v_t_1939_, v_k_1941_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorElim___boxed(lean_object* v_00_u03b1_1943_, lean_object* v_motive__1_1944_, lean_object* v_ctorIdx_1945_, lean_object* v_t_1946_, lean_object* v_h_1947_, lean_object* v_k_1948_){
_start:
{
lean_object* v_res_1949_; 
v_res_1949_ = l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorElim(v_00_u03b1_1943_, v_motive__1_1944_, v_ctorIdx_1945_, v_t_1946_, v_h_1947_, v_k_1948_);
lean_dec(v_ctorIdx_1945_);
return v_res_1949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_mod_elim___redArg(lean_object* v_t_1950_, lean_object* v_mod_1951_){
_start:
{
lean_object* v___x_1952_; 
v___x_1952_ = l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorElim___redArg(v_t_1950_, v_mod_1951_);
return v___x_1952_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_mod_elim(lean_object* v_00_u03b1_1953_, lean_object* v_motive__1_1954_, lean_object* v_t_1955_, lean_object* v_h_1956_, lean_object* v_mod_1957_){
_start:
{
lean_object* v___x_1958_; 
v___x_1958_ = l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorElim___redArg(v_t_1955_, v_mod_1957_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_merged_elim___redArg(lean_object* v_t_1959_, lean_object* v_merged_1960_){
_start:
{
lean_object* v___x_1961_; 
v___x_1961_ = l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorElim___redArg(v_t_1959_, v_merged_1960_);
return v___x_1961_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_merged_elim(lean_object* v_00_u03b1_1962_, lean_object* v_motive__1_1963_, lean_object* v_t_1964_, lean_object* v_h_1965_, lean_object* v_merged_1966_){
_start:
{
lean_object* v___x_1967_; 
v___x_1967_ = l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorElim___redArg(v_t_1964_, v_merged_1966_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_lazy_elim___redArg(lean_object* v_t_1968_, lean_object* v_lazy_1969_){
_start:
{
lean_object* v___x_1970_; 
v___x_1970_ = l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorElim___redArg(v_t_1968_, v_lazy_1969_);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_lazy_elim(lean_object* v_00_u03b1_1971_, lean_object* v_motive__1_1972_, lean_object* v_t_1973_, lean_object* v_h_1974_, lean_object* v_lazy_1975_){
_start:
{
lean_object* v___x_1976_; 
v___x_1976_ = l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorElim___redArg(v_t_1973_, v_lazy_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_cached_elim___redArg(lean_object* v_t_1977_, lean_object* v_cached_1978_){
_start:
{
lean_object* v___x_1979_; 
v___x_1979_ = l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorElim___redArg(v_t_1977_, v_cached_1978_);
return v___x_1979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedNode_cached_elim(lean_object* v_00_u03b1_1980_, lean_object* v_motive__1_1981_, lean_object* v_t_1982_, lean_object* v_h_1983_, lean_object* v_cached_1984_){
_start:
{
lean_object* v___x_1985_; 
v___x_1985_ = l___private_Lean_ConstTrie_0__Lean_ImportedNode_ctorElim___redArg(v_t_1982_, v_cached_1984_);
return v___x_1985_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg___closed__1(void){
_start:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1988_ = l_ByteArray_empty;
v___x_1989_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg___closed__0));
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
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg(){
_start:
{
lean_object* v___x_1994_; 
v___x_1994_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg___closed__1, &l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg___closed__1_once, _init_l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg___closed__1);
return v___x_1994_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg___boxed(lean_object* v___dummy_1995_){
_start:
{
lean_object* v_res_1996_; 
v_res_1996_ = l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg();
return v_res_1996_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0(void){
_start:
{
lean_object* v___x_1997_; 
v___x_1997_ = l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg();
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode(lean_object* v_00_u03b1_1998_){
_start:
{
lean_object* v___x_1999_; 
v___x_1999_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0, &l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty___redArg(){
_start:
{
lean_object* v___x_2001_; 
v___x_2001_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg___closed__1, &l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg___closed__1_once, _init_l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___redArg___closed__1);
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
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instInhabited___redArg(){
_start:
{
lean_object* v___x_2008_; 
v___x_2008_ = lean_obj_once(&l_Lean_ImportedConsts_empty___closed__0, &l_Lean_ImportedConsts_empty___closed__0_once, _init_l_Lean_ImportedConsts_empty___closed__0);
return v___x_2008_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instInhabited___redArg___boxed(lean_object* v___dummy_2009_){
_start:
{
lean_object* v_res_2010_; 
v_res_2010_ = l_Lean_ImportedConsts_instInhabited___redArg();
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instInhabited(lean_object* v_00_u03b1_2011_){
_start:
{
lean_object* v___x_2012_; 
v___x_2012_ = lean_obj_once(&l_Lean_ImportedConsts_empty___closed__0, &l_Lean_ImportedConsts_empty___closed__0_once, _init_l_Lean_ImportedConsts_empty___closed__0);
return v___x_2012_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceShared___boxed(lean_object* v_00_u03b2_2015_, lean_object* v_t_2016_){
_start:
{
lean_object* v_res_2017_; 
v_res_2017_ = lean_imported_consts_force_shared(v_t_2016_);
lean_dec_ref(v_t_2016_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(lean_object* v_x_2018_){
_start:
{
switch(lean_obj_tag(v_x_2018_))
{
case 0:
{
lean_object* v_tree_2019_; lean_object* v_key_2020_; 
v_tree_2019_ = lean_ctor_get(v_x_2018_, 1);
v_key_2020_ = lean_ctor_get(v_tree_2019_, 0);
lean_inc(v_key_2020_);
return v_key_2020_;
}
case 3:
{
lean_object* v_tree_2021_; 
v_tree_2021_ = lean_ctor_get(v_x_2018_, 1);
v_x_2018_ = v_tree_2021_;
goto _start;
}
default: 
{
lean_object* v_key_2023_; 
v_key_2023_ = lean_ctor_get(v_x_2018_, 0);
lean_inc(v_key_2023_);
return v_key_2023_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg___boxed(lean_object* v_x_2024_){
_start:
{
lean_object* v_res_2025_; 
v_res_2025_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v_x_2024_);
lean_dec_ref(v_x_2024_);
return v_res_2025_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key(lean_object* v_00_u03b1_2026_, lean_object* v_x_2027_){
_start:
{
lean_object* v___x_2028_; 
v___x_2028_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v_x_2027_);
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___boxed(lean_object* v_00_u03b1_2029_, lean_object* v_x_2030_){
_start:
{
lean_object* v_res_2031_; 
v_res_2031_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key(v_00_u03b1_2029_, v_x_2030_);
lean_dec_ref(v_x_2030_);
return v_res_2031_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__3___redArg(lean_object* v_as_2032_, size_t v_sz_2033_, size_t v_i_2034_, lean_object* v_b_2035_){
_start:
{
uint64_t v___y_2037_; uint8_t v___x_2045_; 
v___x_2045_ = lean_usize_dec_lt(v_i_2034_, v_sz_2033_);
if (v___x_2045_ == 0)
{
return v_b_2035_;
}
else
{
lean_object* v_a_2046_; lean_object* v___x_2047_; 
v_a_2046_ = lean_array_uget_borrowed(v_as_2032_, v_i_2034_);
v___x_2047_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v_a_2046_);
if (lean_obj_tag(v___x_2047_) == 0)
{
uint64_t v___x_2048_; 
v___x_2048_ = 1723ULL;
v___y_2037_ = v___x_2048_;
goto v___jp_2036_;
}
else
{
uint64_t v_hash_2049_; 
v_hash_2049_ = lean_ctor_get_uint64(v___x_2047_, sizeof(void*)*2);
lean_dec(v___x_2047_);
v___y_2037_ = v_hash_2049_;
goto v___jp_2036_;
}
}
v___jp_2036_:
{
uint64_t v___x_2038_; uint64_t v___x_2039_; uint8_t v___x_2040_; lean_object* v___x_2041_; size_t v___x_2042_; size_t v___x_2043_; 
v___x_2038_ = 32ULL;
v___x_2039_ = lean_uint64_shift_right(v___y_2037_, v___x_2038_);
v___x_2040_ = lean_uint64_to_uint8(v___x_2039_);
v___x_2041_ = lean_byte_array_push(v_b_2035_, v___x_2040_);
v___x_2042_ = ((size_t)1ULL);
v___x_2043_ = lean_usize_add(v_i_2034_, v___x_2042_);
v_i_2034_ = v___x_2043_;
v_b_2035_ = v___x_2041_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__3___redArg___boxed(lean_object* v_as_2050_, lean_object* v_sz_2051_, lean_object* v_i_2052_, lean_object* v_b_2053_){
_start:
{
size_t v_sz_boxed_2054_; size_t v_i_boxed_2055_; lean_object* v_res_2056_; 
v_sz_boxed_2054_ = lean_unbox_usize(v_sz_2051_);
lean_dec(v_sz_2051_);
v_i_boxed_2055_ = lean_unbox_usize(v_i_2052_);
lean_dec(v_i_2052_);
v_res_2056_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__3___redArg(v_as_2050_, v_sz_boxed_2054_, v_i_boxed_2055_, v_b_2053_);
lean_dec_ref(v_as_2050_);
return v_res_2056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__1___redArg(lean_object* v_n_2057_, lean_object* v_cs_2058_, uint64_t v___x_2059_, lean_object* v___x_2060_, lean_object* v_a_2061_){
_start:
{
uint8_t v___x_2062_; 
v___x_2062_ = lean_nat_dec_lt(v_a_2061_, v_n_2057_);
if (v___x_2062_ == 0)
{
return v_a_2061_;
}
else
{
lean_object* v___x_2063_; lean_object* v___x_2064_; uint64_t v___y_2066_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2063_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0, &l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0);
v___x_2064_ = lean_unsigned_to_nat(1u);
v___x_2074_ = lean_array_get_borrowed(v___x_2063_, v_cs_2058_, v_a_2061_);
v___x_2075_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v___x_2074_);
if (lean_obj_tag(v___x_2075_) == 0)
{
uint64_t v___x_2076_; 
v___x_2076_ = 1723ULL;
v___y_2066_ = v___x_2076_;
goto v___jp_2065_;
}
else
{
uint64_t v_hash_2077_; 
v_hash_2077_ = lean_ctor_get_uint64(v___x_2075_, sizeof(void*)*2);
lean_dec(v___x_2075_);
v___y_2066_ = v_hash_2077_;
goto v___jp_2065_;
}
v___jp_2065_:
{
uint64_t v___x_2067_; uint64_t v___x_2068_; uint64_t v___x_2069_; lean_object* v___x_2070_; uint8_t v___x_2071_; 
v___x_2067_ = 64ULL;
v___x_2068_ = lean_uint64_sub(v___x_2067_, v___x_2059_);
v___x_2069_ = lean_uint64_shift_right(v___y_2066_, v___x_2068_);
v___x_2070_ = lean_uint64_to_nat(v___x_2069_);
v___x_2071_ = lean_nat_dec_lt(v___x_2070_, v___x_2060_);
lean_dec(v___x_2070_);
if (v___x_2071_ == 0)
{
return v_a_2061_;
}
else
{
lean_object* v___x_2072_; 
v___x_2072_ = lean_nat_add(v_a_2061_, v___x_2064_);
lean_dec(v_a_2061_);
v_a_2061_ = v___x_2072_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__1___redArg___boxed(lean_object* v_n_2078_, lean_object* v_cs_2079_, lean_object* v___x_2080_, lean_object* v___x_2081_, lean_object* v_a_2082_){
_start:
{
uint64_t v___x_1049__boxed_2083_; lean_object* v_res_2084_; 
v___x_1049__boxed_2083_ = lean_unbox_uint64(v___x_2080_);
lean_dec_ref(v___x_2080_);
v_res_2084_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__1___redArg(v_n_2078_, v_cs_2079_, v___x_1049__boxed_2083_, v___x_2081_, v_a_2082_);
lean_dec(v___x_2081_);
lean_dec_ref(v_cs_2079_);
lean_dec(v_n_2078_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2_spec__3___redArg(lean_object* v___x_2085_, lean_object* v_n_2086_, lean_object* v_cs_2087_, uint64_t v___x_2088_, lean_object* v_a_2089_){
_start:
{
lean_object* v_snd_2090_; lean_object* v_fst_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2124_; 
v_snd_2090_ = lean_ctor_get(v_a_2089_, 1);
v_fst_2091_ = lean_ctor_get(v_a_2089_, 0);
v_isSharedCheck_2124_ = !lean_is_exclusive(v_a_2089_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2093_ = v_a_2089_;
v_isShared_2094_ = v_isSharedCheck_2124_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_snd_2090_);
lean_inc(v_fst_2091_);
lean_dec(v_a_2089_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2124_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v_fst_2095_; lean_object* v_snd_2096_; lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2123_; 
v_fst_2095_ = lean_ctor_get(v_snd_2090_, 0);
v_snd_2096_ = lean_ctor_get(v_snd_2090_, 1);
v_isSharedCheck_2123_ = !lean_is_exclusive(v_snd_2090_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2098_ = v_snd_2090_;
v_isShared_2099_ = v_isSharedCheck_2123_;
goto v_resetjp_2097_;
}
else
{
lean_inc(v_snd_2096_);
lean_inc(v_fst_2095_);
lean_dec(v_snd_2090_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2123_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
uint8_t v___x_2100_; 
v___x_2100_ = lean_nat_dec_lt(v_snd_2096_, v___x_2085_);
if (v___x_2100_ == 0)
{
lean_object* v___x_2102_; 
if (v_isShared_2099_ == 0)
{
v___x_2102_ = v___x_2098_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v_fst_2095_);
lean_ctor_set(v_reuseFailAlloc_2106_, 1, v_snd_2096_);
v___x_2102_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
lean_object* v___x_2104_; 
if (v_isShared_2094_ == 0)
{
lean_ctor_set(v___x_2093_, 1, v___x_2102_);
v___x_2104_ = v___x_2093_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v_fst_2091_);
lean_ctor_set(v_reuseFailAlloc_2105_, 1, v___x_2102_);
v___x_2104_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
return v___x_2104_;
}
}
}
else
{
lean_object* v___x_2107_; lean_object* v___x_2108_; uint8_t v___x_2109_; lean_object* v___x_2110_; lean_object* v___y_2112_; 
v___x_2107_ = lean_unsigned_to_nat(1u);
v___x_2108_ = lean_unsigned_to_nat(65535u);
v___x_2109_ = lean_nat_dec_le(v___x_2108_, v_n_2086_);
v___x_2110_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__1___redArg(v_n_2086_, v_cs_2087_, v___x_2088_, v_snd_2096_, v_fst_2095_);
if (v___x_2109_ == 0)
{
lean_object* v___x_2121_; 
v___x_2121_ = l___private_Lean_ConstTrie_0__Lean_pushU16(v_fst_2091_, v___x_2110_);
v___y_2112_ = v___x_2121_;
goto v___jp_2111_;
}
else
{
lean_object* v___x_2122_; 
v___x_2122_ = l___private_Lean_ConstTrie_0__Lean_pushU32(v_fst_2091_, v___x_2110_);
v___y_2112_ = v___x_2122_;
goto v___jp_2111_;
}
v___jp_2111_:
{
lean_object* v___x_2113_; lean_object* v___x_2115_; 
v___x_2113_ = lean_nat_add(v_snd_2096_, v___x_2107_);
lean_dec(v_snd_2096_);
if (v_isShared_2099_ == 0)
{
lean_ctor_set(v___x_2098_, 1, v___x_2113_);
lean_ctor_set(v___x_2098_, 0, v___x_2110_);
v___x_2115_ = v___x_2098_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v___x_2110_);
lean_ctor_set(v_reuseFailAlloc_2120_, 1, v___x_2113_);
v___x_2115_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
lean_object* v___x_2117_; 
if (v_isShared_2094_ == 0)
{
lean_ctor_set(v___x_2093_, 1, v___x_2115_);
lean_ctor_set(v___x_2093_, 0, v___y_2112_);
v___x_2117_ = v___x_2093_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v___y_2112_);
lean_ctor_set(v_reuseFailAlloc_2119_, 1, v___x_2115_);
v___x_2117_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
v_a_2089_ = v___x_2117_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v___x_2125_, lean_object* v_n_2126_, lean_object* v_cs_2127_, lean_object* v___x_2128_, lean_object* v_a_2129_){
_start:
{
uint64_t v___x_1086__boxed_2130_; lean_object* v_res_2131_; 
v___x_1086__boxed_2130_ = lean_unbox_uint64(v___x_2128_);
lean_dec_ref(v___x_2128_);
v_res_2131_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2_spec__3___redArg(v___x_2125_, v_n_2126_, v_cs_2127_, v___x_1086__boxed_2130_, v_a_2129_);
lean_dec_ref(v_cs_2127_);
lean_dec(v_n_2126_);
lean_dec(v___x_2125_);
return v_res_2131_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2___redArg(lean_object* v_n_2132_, lean_object* v_cs_2133_, uint64_t v___x_2134_, lean_object* v___x_2135_, lean_object* v_a_2136_){
_start:
{
lean_object* v_snd_2137_; lean_object* v_fst_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2171_; 
v_snd_2137_ = lean_ctor_get(v_a_2136_, 1);
v_fst_2138_ = lean_ctor_get(v_a_2136_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v_a_2136_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2140_ = v_a_2136_;
v_isShared_2141_ = v_isSharedCheck_2171_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_snd_2137_);
lean_inc(v_fst_2138_);
lean_dec(v_a_2136_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2171_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v_fst_2142_; lean_object* v_snd_2143_; lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2170_; 
v_fst_2142_ = lean_ctor_get(v_snd_2137_, 0);
v_snd_2143_ = lean_ctor_get(v_snd_2137_, 1);
v_isSharedCheck_2170_ = !lean_is_exclusive(v_snd_2137_);
if (v_isSharedCheck_2170_ == 0)
{
v___x_2145_ = v_snd_2137_;
v_isShared_2146_ = v_isSharedCheck_2170_;
goto v_resetjp_2144_;
}
else
{
lean_inc(v_snd_2143_);
lean_inc(v_fst_2142_);
lean_dec(v_snd_2137_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2170_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
uint8_t v___x_2147_; 
v___x_2147_ = lean_nat_dec_lt(v_snd_2143_, v___x_2135_);
if (v___x_2147_ == 0)
{
lean_object* v___x_2149_; 
if (v_isShared_2146_ == 0)
{
v___x_2149_ = v___x_2145_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_fst_2142_);
lean_ctor_set(v_reuseFailAlloc_2153_, 1, v_snd_2143_);
v___x_2149_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
lean_object* v___x_2151_; 
if (v_isShared_2141_ == 0)
{
lean_ctor_set(v___x_2140_, 1, v___x_2149_);
v___x_2151_ = v___x_2140_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_fst_2138_);
lean_ctor_set(v_reuseFailAlloc_2152_, 1, v___x_2149_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
return v___x_2151_;
}
}
}
else
{
lean_object* v___x_2154_; lean_object* v___x_2155_; uint8_t v___x_2156_; lean_object* v___x_2157_; lean_object* v___y_2159_; 
v___x_2154_ = lean_unsigned_to_nat(1u);
v___x_2155_ = lean_unsigned_to_nat(65535u);
v___x_2156_ = lean_nat_dec_le(v___x_2155_, v_n_2132_);
v___x_2157_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__1___redArg(v_n_2132_, v_cs_2133_, v___x_2134_, v_snd_2143_, v_fst_2142_);
if (v___x_2156_ == 0)
{
lean_object* v___x_2168_; 
v___x_2168_ = l___private_Lean_ConstTrie_0__Lean_pushU16(v_fst_2138_, v___x_2157_);
v___y_2159_ = v___x_2168_;
goto v___jp_2158_;
}
else
{
lean_object* v___x_2169_; 
v___x_2169_ = l___private_Lean_ConstTrie_0__Lean_pushU32(v_fst_2138_, v___x_2157_);
v___y_2159_ = v___x_2169_;
goto v___jp_2158_;
}
v___jp_2158_:
{
lean_object* v___x_2160_; lean_object* v___x_2162_; 
v___x_2160_ = lean_nat_add(v_snd_2143_, v___x_2154_);
lean_dec(v_snd_2143_);
if (v_isShared_2146_ == 0)
{
lean_ctor_set(v___x_2145_, 1, v___x_2160_);
lean_ctor_set(v___x_2145_, 0, v___x_2157_);
v___x_2162_ = v___x_2145_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v___x_2157_);
lean_ctor_set(v_reuseFailAlloc_2167_, 1, v___x_2160_);
v___x_2162_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
lean_object* v___x_2164_; 
if (v_isShared_2141_ == 0)
{
lean_ctor_set(v___x_2140_, 1, v___x_2162_);
lean_ctor_set(v___x_2140_, 0, v___y_2159_);
v___x_2164_ = v___x_2140_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v___y_2159_);
lean_ctor_set(v_reuseFailAlloc_2166_, 1, v___x_2162_);
v___x_2164_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
lean_object* v___x_2165_; 
v___x_2165_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2_spec__3___redArg(v___x_2135_, v_n_2132_, v_cs_2133_, v___x_2134_, v___x_2164_);
return v___x_2165_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2___redArg___boxed(lean_object* v_n_2172_, lean_object* v_cs_2173_, lean_object* v___x_2174_, lean_object* v___x_2175_, lean_object* v_a_2176_){
_start:
{
uint64_t v___x_1153__boxed_2177_; lean_object* v_res_2178_; 
v___x_1153__boxed_2177_ = lean_unbox_uint64(v___x_2174_);
lean_dec_ref(v___x_2174_);
v_res_2178_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2___redArg(v_n_2172_, v_cs_2173_, v___x_1153__boxed_2177_, v___x_2175_, v_a_2176_);
lean_dec(v___x_2175_);
lean_dec_ref(v_cs_2173_);
lean_dec(v_n_2172_);
return v_res_2178_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1___redArg(lean_object* v_cs_2179_){
_start:
{
lean_object* v_n_2180_; lean_object* v_j_2181_; uint8_t v___x_2182_; 
v_n_2180_ = lean_array_get_size(v_cs_2179_);
v_j_2181_ = lean_unsigned_to_nat(0u);
v___x_2182_ = lean_nat_dec_eq(v_n_2180_, v_j_2181_);
if (v___x_2182_ == 0)
{
lean_object* v___x_2183_; uint64_t v_bits_2184_; uint64_t v___x_2185_; uint64_t v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___y_2190_; uint8_t v___y_2191_; lean_object* v___x_2200_; uint8_t v___x_2201_; lean_object* v___y_2203_; 
v___x_2183_ = lean_unsigned_to_nat(1u);
v_bits_2184_ = 1ULL;
v___x_2185_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1_spec__2___redArg(v_n_2180_, v_bits_2184_);
v___x_2186_ = lean_uint64_shift_left(v_bits_2184_, v___x_2185_);
v___x_2187_ = lean_uint64_to_nat(v___x_2186_);
v___x_2188_ = lean_nat_add(v___x_2187_, v___x_2183_);
lean_dec(v___x_2187_);
v___x_2200_ = lean_unsigned_to_nat(65535u);
v___x_2201_ = lean_nat_dec_le(v___x_2200_, v_n_2180_);
if (v___x_2201_ == 0)
{
lean_object* v___x_2212_; 
v___x_2212_ = lean_unsigned_to_nat(2u);
v___y_2203_ = v___x_2212_;
goto v___jp_2202_;
}
else
{
lean_object* v___x_2213_; 
v___x_2213_ = lean_unsigned_to_nat(4u);
v___y_2203_ = v___x_2213_;
goto v___jp_2202_;
}
v___jp_2189_:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v_fst_2196_; size_t v_sz_2197_; size_t v___x_2198_; lean_object* v___x_2199_; 
v___x_2192_ = lean_byte_array_push(v___y_2190_, v___y_2191_);
v___x_2193_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__10));
v___x_2194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2194_, 0, v___x_2192_);
lean_ctor_set(v___x_2194_, 1, v___x_2193_);
v___x_2195_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2___redArg(v_n_2180_, v_cs_2179_, v___x_2185_, v___x_2188_, v___x_2194_);
lean_dec(v___x_2188_);
v_fst_2196_ = lean_ctor_get(v___x_2195_, 0);
lean_inc(v_fst_2196_);
lean_dec_ref(v___x_2195_);
v_sz_2197_ = lean_array_size(v_cs_2179_);
v___x_2198_ = ((size_t)0ULL);
v___x_2199_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__3___redArg(v_cs_2179_, v_sz_2197_, v___x_2198_, v_fst_2196_);
return v___x_2199_;
}
v___jp_2202_:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v___x_2204_ = lean_nat_mul(v___y_2203_, v___x_2188_);
v___x_2205_ = lean_nat_add(v___x_2183_, v___x_2204_);
lean_dec(v___x_2204_);
v___x_2206_ = lean_nat_add(v___x_2205_, v_n_2180_);
lean_dec(v___x_2205_);
v___x_2207_ = lean_mk_empty_byte_array(v___x_2206_);
lean_dec(v___x_2206_);
if (v___x_2201_ == 0)
{
uint8_t v___x_2208_; 
v___x_2208_ = lean_uint64_to_uint8(v___x_2185_);
v___y_2190_ = v___x_2207_;
v___y_2191_ = v___x_2208_;
goto v___jp_2189_;
}
else
{
uint8_t v___x_2209_; uint8_t v___x_2210_; uint8_t v___x_2211_; 
v___x_2209_ = lean_uint64_to_uint8(v___x_2185_);
v___x_2210_ = 128;
v___x_2211_ = lean_uint8_lor(v___x_2209_, v___x_2210_);
v___y_2190_ = v___x_2207_;
v___y_2191_ = v___x_2211_;
goto v___jp_2189_;
}
}
}
else
{
lean_object* v___x_2214_; 
v___x_2214_ = l_ByteArray_empty;
return v___x_2214_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1___redArg___boxed(lean_object* v_cs_2215_){
_start:
{
lean_object* v_res_2216_; 
v_res_2216_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1___redArg(v_cs_2215_);
lean_dec_ref(v_cs_2215_);
return v_res_2216_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(size_t v_sz_2217_, size_t v_i_2218_, lean_object* v_bs_2219_){
_start:
{
uint8_t v___x_2220_; 
v___x_2220_ = lean_usize_dec_lt(v_i_2218_, v_sz_2217_);
if (v___x_2220_ == 0)
{
return v_bs_2219_;
}
else
{
lean_object* v_v_2221_; lean_object* v___x_2222_; lean_object* v_bs_x27_2223_; size_t v___x_2224_; size_t v___x_2225_; lean_object* v___x_2226_; 
v_v_2221_ = lean_array_uget(v_bs_2219_, v_i_2218_);
v___x_2222_ = lean_unsigned_to_nat(0u);
v_bs_x27_2223_ = lean_array_uset(v_bs_2219_, v_i_2218_, v___x_2222_);
v___x_2224_ = ((size_t)1ULL);
v___x_2225_ = lean_usize_add(v_i_2218_, v___x_2224_);
v___x_2226_ = lean_array_uset(v_bs_x27_2223_, v_i_2218_, v_v_2221_);
v_i_2218_ = v___x_2225_;
v_bs_2219_ = v___x_2226_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg___boxed(lean_object* v_sz_2228_, lean_object* v_i_2229_, lean_object* v_bs_2230_){
_start:
{
size_t v_sz_boxed_2231_; size_t v_i_boxed_2232_; lean_object* v_res_2233_; 
v_sz_boxed_2231_ = lean_unbox_usize(v_sz_2228_);
lean_dec(v_sz_2228_);
v_i_boxed_2232_ = lean_unbox_usize(v_i_2229_);
lean_dec(v_i_2229_);
v_res_2233_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v_sz_boxed_2231_, v_i_boxed_2232_, v_bs_2230_);
return v_res_2233_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mkMerged___redArg(lean_object* v_key_2234_, lean_object* v_entry_x3f_2235_, lean_object* v_children_2236_){
_start:
{
size_t v_sz_2237_; size_t v___x_2238_; lean_object* v_children_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; 
v_sz_2237_ = lean_array_size(v_children_2236_);
v___x_2238_ = ((size_t)0ULL);
v_children_2239_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v_sz_2237_, v___x_2238_, v_children_2236_);
v___x_2240_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1___redArg(v_children_2239_);
v___x_2241_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2241_, 0, v_key_2234_);
lean_ctor_set(v___x_2241_, 1, v_entry_x3f_2235_);
lean_ctor_set(v___x_2241_, 2, v_children_2239_);
lean_ctor_set(v___x_2241_, 3, v___x_2240_);
return v___x_2241_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mkMerged(lean_object* v_00_u03b1_2242_, lean_object* v_key_2243_, lean_object* v_entry_x3f_2244_, lean_object* v_children_2245_){
_start:
{
lean_object* v___x_2246_; 
v___x_2246_ = l_Lean_ImportedConsts_mkMerged___redArg(v_key_2243_, v_entry_x3f_2244_, v_children_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_mkMerged_spec__0(lean_object* v_00_u03b1_2247_, size_t v_sz_2248_, size_t v_i_2249_, lean_object* v_bs_2250_){
_start:
{
lean_object* v___x_2251_; 
v___x_2251_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v_sz_2248_, v_i_2249_, v_bs_2250_);
return v___x_2251_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_mkMerged_spec__0___boxed(lean_object* v_00_u03b1_2252_, lean_object* v_sz_2253_, lean_object* v_i_2254_, lean_object* v_bs_2255_){
_start:
{
size_t v_sz_boxed_2256_; size_t v_i_boxed_2257_; lean_object* v_res_2258_; 
v_sz_boxed_2256_ = lean_unbox_usize(v_sz_2253_);
lean_dec(v_sz_2253_);
v_i_boxed_2257_ = lean_unbox_usize(v_i_2254_);
lean_dec(v_i_2254_);
v_res_2258_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_mkMerged_spec__0(v_00_u03b1_2252_, v_sz_boxed_2256_, v_i_boxed_2257_, v_bs_2255_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1(lean_object* v_00_u03b1_2259_, lean_object* v_cs_2260_){
_start:
{
lean_object* v___x_2261_; 
v___x_2261_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1___redArg(v_cs_2260_);
return v___x_2261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1___boxed(lean_object* v_00_u03b1_2262_, lean_object* v_cs_2263_){
_start:
{
lean_object* v_res_2264_; 
v_res_2264_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1(v_00_u03b1_2262_, v_cs_2263_);
lean_dec_ref(v_cs_2263_);
return v_res_2264_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__1(lean_object* v_n_2265_, lean_object* v_00_u03b1_2266_, lean_object* v_cs_2267_, uint64_t v___x_2268_, lean_object* v___x_2269_, lean_object* v_inst_2270_, lean_object* v_a_2271_){
_start:
{
lean_object* v___x_2272_; 
v___x_2272_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__1___redArg(v_n_2265_, v_cs_2267_, v___x_2268_, v___x_2269_, v_a_2271_);
return v___x_2272_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__1___boxed(lean_object* v_n_2273_, lean_object* v_00_u03b1_2274_, lean_object* v_cs_2275_, lean_object* v___x_2276_, lean_object* v___x_2277_, lean_object* v_inst_2278_, lean_object* v_a_2279_){
_start:
{
uint64_t v___x_1306__boxed_2280_; lean_object* v_res_2281_; 
v___x_1306__boxed_2280_ = lean_unbox_uint64(v___x_2276_);
lean_dec_ref(v___x_2276_);
v_res_2281_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__1(v_n_2273_, v_00_u03b1_2274_, v_cs_2275_, v___x_1306__boxed_2280_, v___x_2277_, v_inst_2278_, v_a_2279_);
lean_dec(v___x_2277_);
lean_dec_ref(v_cs_2275_);
lean_dec(v_n_2273_);
return v_res_2281_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2(lean_object* v_n_2282_, lean_object* v_00_u03b1_2283_, lean_object* v_cs_2284_, uint64_t v___x_2285_, lean_object* v___x_2286_, lean_object* v_inst_2287_, lean_object* v_a_2288_){
_start:
{
lean_object* v___x_2289_; 
v___x_2289_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2___redArg(v_n_2282_, v_cs_2284_, v___x_2285_, v___x_2286_, v_a_2288_);
return v___x_2289_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2___boxed(lean_object* v_n_2290_, lean_object* v_00_u03b1_2291_, lean_object* v_cs_2292_, lean_object* v___x_2293_, lean_object* v___x_2294_, lean_object* v_inst_2295_, lean_object* v_a_2296_){
_start:
{
uint64_t v___x_1317__boxed_2297_; lean_object* v_res_2298_; 
v___x_1317__boxed_2297_ = lean_unbox_uint64(v___x_2293_);
lean_dec_ref(v___x_2293_);
v_res_2298_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2(v_n_2290_, v_00_u03b1_2291_, v_cs_2292_, v___x_1317__boxed_2297_, v___x_2294_, v_inst_2295_, v_a_2296_);
lean_dec(v___x_2294_);
lean_dec_ref(v_cs_2292_);
lean_dec(v_n_2290_);
return v_res_2298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__3(lean_object* v_00_u03b1_2299_, lean_object* v_as_2300_, size_t v_sz_2301_, size_t v_i_2302_, lean_object* v_b_2303_){
_start:
{
lean_object* v___x_2304_; 
v___x_2304_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__3___redArg(v_as_2300_, v_sz_2301_, v_i_2302_, v_b_2303_);
return v___x_2304_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__3___boxed(lean_object* v_00_u03b1_2305_, lean_object* v_as_2306_, lean_object* v_sz_2307_, lean_object* v_i_2308_, lean_object* v_b_2309_){
_start:
{
size_t v_sz_boxed_2310_; size_t v_i_boxed_2311_; lean_object* v_res_2312_; 
v_sz_boxed_2310_ = lean_unbox_usize(v_sz_2307_);
lean_dec(v_sz_2307_);
v_i_boxed_2311_ = lean_unbox_usize(v_i_2308_);
lean_dec(v_i_2308_);
v_res_2312_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__3(v_00_u03b1_2305_, v_as_2306_, v_sz_boxed_2310_, v_i_boxed_2311_, v_b_2309_);
lean_dec_ref(v_as_2306_);
return v_res_2312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2_spec__3(lean_object* v___x_2313_, lean_object* v_n_2314_, lean_object* v_00_u03b1_2315_, lean_object* v_cs_2316_, uint64_t v___x_2317_, lean_object* v_inst_2318_, lean_object* v_a_2319_){
_start:
{
lean_object* v___x_2320_; 
v___x_2320_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2_spec__3___redArg(v___x_2313_, v_n_2314_, v_cs_2316_, v___x_2317_, v_a_2319_);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2_spec__3___boxed(lean_object* v___x_2321_, lean_object* v_n_2322_, lean_object* v_00_u03b1_2323_, lean_object* v_cs_2324_, lean_object* v___x_2325_, lean_object* v_inst_2326_, lean_object* v_a_2327_){
_start:
{
uint64_t v___x_1331__boxed_2328_; lean_object* v_res_2329_; 
v___x_1331__boxed_2328_ = lean_unbox_uint64(v___x_2325_);
lean_dec_ref(v___x_2325_);
v_res_2329_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1_spec__2_spec__3(v___x_2321_, v_n_2322_, v_00_u03b1_2323_, v_cs_2324_, v___x_1331__boxed_2328_, v_inst_2326_, v_a_2327_);
lean_dec_ref(v_cs_2324_);
lean_dec(v_n_2322_);
lean_dec(v___x_2321_);
return v_res_2329_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___redArg(lean_object* v_t_2330_){
_start:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2332_ = lean_imported_consts_cache_new();
v___x_2333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2332_);
v___x_2334_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2333_);
lean_ctor_set(v___x_2334_, 1, v_t_2330_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___redArg___boxed(lean_object* v_t_2335_, lean_object* v_a_2336_){
_start:
{
lean_object* v_res_2337_; 
v_res_2337_ = l_Lean_ImportedConsts_withCache___redArg(v_t_2335_);
return v_res_2337_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache(lean_object* v_00_u03b1_2338_, lean_object* v_t_2339_){
_start:
{
lean_object* v___x_2341_; 
v___x_2341_ = l_Lean_ImportedConsts_withCache___redArg(v_t_2339_);
return v___x_2341_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___boxed(lean_object* v_00_u03b1_2342_, lean_object* v_t_2343_, lean_object* v_a_2344_){
_start:
{
lean_object* v_res_2345_; 
v_res_2345_ = l_Lean_ImportedConsts_withCache(v_00_u03b1_2342_, v_t_2343_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_dropCache___boxed(lean_object* v_00_u03b1_2349_, lean_object* v_t_2350_, lean_object* v_a_00___x40___internal___hyg_2351_){
_start:
{
lean_object* v_res_2352_; 
v_res_2352_ = lean_imported_consts_drop_cache(v_t_2350_);
lean_dec_ref(v_t_2350_);
return v_res_2352_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(lean_object* v_index_2353_, lean_object* v_cs_2354_, lean_object* v_k_2355_, uint8_t v_fp_2356_, lean_object* v_fpOff_2357_, lean_object* v_j_2358_, lean_object* v_hi_2359_){
_start:
{
uint8_t v___y_2365_; uint8_t v___x_2367_; 
v___x_2367_ = lean_nat_dec_lt(v_j_2358_, v_hi_2359_);
if (v___x_2367_ == 0)
{
lean_object* v___x_2368_; 
lean_dec(v_j_2358_);
v___x_2368_ = lean_box(0);
return v___x_2368_;
}
else
{
lean_object* v___x_2369_; uint8_t v___x_2370_; uint8_t v___x_2371_; 
v___x_2369_ = lean_nat_add(v_fpOff_2357_, v_j_2358_);
v___x_2370_ = lean_byte_array_get(v_index_2353_, v___x_2369_);
lean_dec(v___x_2369_);
v___x_2371_ = lean_uint8_dec_eq(v___x_2370_, v_fp_2356_);
if (v___x_2371_ == 0)
{
goto v___jp_2360_;
}
else
{
lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; 
v___x_2372_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0, &l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0);
v___x_2373_ = lean_array_get_borrowed(v___x_2372_, v_cs_2354_, v_j_2358_);
v___x_2374_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_key___redArg(v___x_2373_);
switch(lean_obj_tag(v___x_2374_))
{
case 0:
{
if (lean_obj_tag(v_k_2355_) == 0)
{
lean_object* v___x_2375_; 
v___x_2375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2375_, 0, v_j_2358_);
return v___x_2375_;
}
else
{
goto v___jp_2360_;
}
}
case 1:
{
if (lean_obj_tag(v_k_2355_) == 1)
{
lean_object* v_str_2376_; lean_object* v_str_2377_; uint8_t v___x_2378_; 
v_str_2376_ = lean_ctor_get(v___x_2374_, 1);
lean_inc_ref(v_str_2376_);
lean_dec_ref_known(v___x_2374_, 2);
v_str_2377_ = lean_ctor_get(v_k_2355_, 1);
v___x_2378_ = lean_string_dec_eq(v_str_2376_, v_str_2377_);
lean_dec_ref(v_str_2376_);
v___y_2365_ = v___x_2378_;
goto v___jp_2364_;
}
else
{
lean_dec_ref_known(v___x_2374_, 2);
goto v___jp_2360_;
}
}
default: 
{
if (lean_obj_tag(v_k_2355_) == 2)
{
lean_object* v_i_2379_; lean_object* v_i_2380_; uint8_t v___x_2381_; 
v_i_2379_ = lean_ctor_get(v___x_2374_, 1);
lean_inc(v_i_2379_);
lean_dec_ref_known(v___x_2374_, 2);
v_i_2380_ = lean_ctor_get(v_k_2355_, 1);
v___x_2381_ = lean_nat_dec_eq(v_i_2379_, v_i_2380_);
lean_dec(v_i_2379_);
v___y_2365_ = v___x_2381_;
goto v___jp_2364_;
}
else
{
lean_dec_ref_known(v___x_2374_, 2);
goto v___jp_2360_;
}
}
}
}
}
v___jp_2360_:
{
lean_object* v___x_2361_; lean_object* v___x_2362_; 
v___x_2361_ = lean_unsigned_to_nat(1u);
v___x_2362_ = lean_nat_add(v_j_2358_, v___x_2361_);
lean_dec(v_j_2358_);
v_j_2358_ = v___x_2362_;
goto _start;
}
v___jp_2364_:
{
if (v___y_2365_ == 0)
{
goto v___jp_2360_;
}
else
{
lean_object* v___x_2366_; 
v___x_2366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2366_, 0, v_j_2358_);
return v___x_2366_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg___boxed(lean_object* v_index_2382_, lean_object* v_cs_2383_, lean_object* v_k_2384_, lean_object* v_fp_2385_, lean_object* v_fpOff_2386_, lean_object* v_j_2387_, lean_object* v_hi_2388_){
_start:
{
uint8_t v_fp_boxed_2389_; lean_object* v_res_2390_; 
v_fp_boxed_2389_ = lean_unbox(v_fp_2385_);
v_res_2390_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(v_index_2382_, v_cs_2383_, v_k_2384_, v_fp_boxed_2389_, v_fpOff_2386_, v_j_2387_, v_hi_2388_);
lean_dec(v_hi_2388_);
lean_dec(v_fpOff_2386_);
lean_dec(v_k_2384_);
lean_dec_ref(v_cs_2383_);
lean_dec_ref(v_index_2382_);
return v_res_2390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(lean_object* v_index_2391_, lean_object* v_cs_2392_, lean_object* v_k_2393_){
_start:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; uint64_t v___y_2397_; uint8_t v___x_2501_; 
v___x_2394_ = lean_byte_array_size(v_index_2391_);
v___x_2395_ = lean_unsigned_to_nat(0u);
v___x_2501_ = lean_nat_dec_eq(v___x_2394_, v___x_2395_);
if (v___x_2501_ == 0)
{
if (lean_obj_tag(v_k_2393_) == 0)
{
uint64_t v___x_2502_; 
v___x_2502_ = 1723ULL;
v___y_2397_ = v___x_2502_;
goto v___jp_2396_;
}
else
{
uint64_t v_hash_2503_; 
v_hash_2503_ = lean_ctor_get_uint64(v_k_2393_, sizeof(void*)*2);
v___y_2397_ = v_hash_2503_;
goto v___jp_2396_;
}
}
else
{
lean_object* v___x_2504_; 
v___x_2504_ = lean_box(0);
return v___x_2504_;
}
v___jp_2396_:
{
uint8_t v_header_2398_; uint8_t v___x_2399_; uint8_t v___x_2400_; uint64_t v_bits_2401_; uint64_t v___x_2402_; uint64_t v___x_2403_; uint64_t v___x_2404_; lean_object* v_slot_2405_; uint8_t v___x_2406_; uint8_t v___x_2407_; uint8_t v___x_2408_; uint8_t v___x_2409_; 
v_header_2398_ = lean_byte_array_get(v_index_2391_, v___x_2395_);
v___x_2399_ = 31;
v___x_2400_ = lean_uint8_land(v_header_2398_, v___x_2399_);
v_bits_2401_ = lean_uint8_to_uint64(v___x_2400_);
v___x_2402_ = 64ULL;
v___x_2403_ = lean_uint64_sub(v___x_2402_, v_bits_2401_);
v___x_2404_ = lean_uint64_shift_right(v___y_2397_, v___x_2403_);
v_slot_2405_ = lean_uint64_to_nat(v___x_2404_);
v___x_2406_ = 128;
v___x_2407_ = lean_uint8_land(v_header_2398_, v___x_2406_);
v___x_2408_ = 0;
v___x_2409_ = lean_uint8_dec_eq(v___x_2407_, v___x_2408_);
if (v___x_2409_ == 0)
{
lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; uint8_t v___x_2414_; uint32_t v___x_2415_; lean_object* v___x_2416_; uint8_t v___x_2417_; uint32_t v___x_2418_; uint32_t v___x_2419_; uint32_t v___x_2420_; uint32_t v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; uint8_t v___x_2424_; uint32_t v___x_2425_; uint32_t v___x_2426_; uint32_t v___x_2427_; uint32_t v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; uint8_t v___x_2431_; uint32_t v___x_2432_; uint32_t v___x_2433_; uint32_t v___x_2434_; uint32_t v___x_2435_; lean_object* v_lo_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; uint8_t v___x_2439_; uint32_t v___x_2440_; lean_object* v___x_2441_; uint8_t v___x_2442_; uint32_t v___x_2443_; uint32_t v___x_2444_; uint32_t v___x_2445_; lean_object* v___x_2446_; uint8_t v___x_2447_; uint32_t v___x_2448_; uint32_t v___x_2449_; uint32_t v___x_2450_; lean_object* v___x_2451_; uint8_t v___x_2452_; uint32_t v___x_2453_; uint32_t v___x_2454_; uint32_t v___x_2455_; lean_object* v_hi_2456_; uint64_t v___x_2457_; uint64_t v___x_2458_; uint64_t v___x_2459_; uint64_t v___x_2460_; uint64_t v___x_2461_; uint64_t v___x_2462_; lean_object* v_fpOff_2463_; uint64_t v___x_2464_; uint64_t v___x_2465_; uint8_t v___x_2466_; lean_object* v___x_2467_; 
v___x_2410_ = lean_unsigned_to_nat(1u);
v___x_2411_ = lean_unsigned_to_nat(4u);
v___x_2412_ = lean_nat_mul(v___x_2411_, v_slot_2405_);
lean_dec(v_slot_2405_);
v___x_2413_ = lean_nat_add(v___x_2410_, v___x_2412_);
v___x_2414_ = lean_byte_array_get(v_index_2391_, v___x_2413_);
v___x_2415_ = lean_uint8_to_uint32(v___x_2414_);
v___x_2416_ = lean_nat_add(v___x_2413_, v___x_2410_);
v___x_2417_ = lean_byte_array_get(v_index_2391_, v___x_2416_);
lean_dec(v___x_2416_);
v___x_2418_ = lean_uint8_to_uint32(v___x_2417_);
v___x_2419_ = 8;
v___x_2420_ = lean_uint32_shift_left(v___x_2418_, v___x_2419_);
v___x_2421_ = lean_uint32_lor(v___x_2415_, v___x_2420_);
v___x_2422_ = lean_unsigned_to_nat(2u);
v___x_2423_ = lean_nat_add(v___x_2413_, v___x_2422_);
v___x_2424_ = lean_byte_array_get(v_index_2391_, v___x_2423_);
lean_dec(v___x_2423_);
v___x_2425_ = lean_uint8_to_uint32(v___x_2424_);
v___x_2426_ = 16;
v___x_2427_ = lean_uint32_shift_left(v___x_2425_, v___x_2426_);
v___x_2428_ = lean_uint32_lor(v___x_2421_, v___x_2427_);
v___x_2429_ = lean_unsigned_to_nat(3u);
v___x_2430_ = lean_nat_add(v___x_2413_, v___x_2429_);
lean_dec(v___x_2413_);
v___x_2431_ = lean_byte_array_get(v_index_2391_, v___x_2430_);
lean_dec(v___x_2430_);
v___x_2432_ = lean_uint8_to_uint32(v___x_2431_);
v___x_2433_ = 24;
v___x_2434_ = lean_uint32_shift_left(v___x_2432_, v___x_2433_);
v___x_2435_ = lean_uint32_lor(v___x_2428_, v___x_2434_);
v_lo_2436_ = lean_uint32_to_nat(v___x_2435_);
v___x_2437_ = lean_unsigned_to_nat(5u);
v___x_2438_ = lean_nat_add(v___x_2437_, v___x_2412_);
lean_dec(v___x_2412_);
v___x_2439_ = lean_byte_array_get(v_index_2391_, v___x_2438_);
v___x_2440_ = lean_uint8_to_uint32(v___x_2439_);
v___x_2441_ = lean_nat_add(v___x_2438_, v___x_2410_);
v___x_2442_ = lean_byte_array_get(v_index_2391_, v___x_2441_);
lean_dec(v___x_2441_);
v___x_2443_ = lean_uint8_to_uint32(v___x_2442_);
v___x_2444_ = lean_uint32_shift_left(v___x_2443_, v___x_2419_);
v___x_2445_ = lean_uint32_lor(v___x_2440_, v___x_2444_);
v___x_2446_ = lean_nat_add(v___x_2438_, v___x_2422_);
v___x_2447_ = lean_byte_array_get(v_index_2391_, v___x_2446_);
lean_dec(v___x_2446_);
v___x_2448_ = lean_uint8_to_uint32(v___x_2447_);
v___x_2449_ = lean_uint32_shift_left(v___x_2448_, v___x_2426_);
v___x_2450_ = lean_uint32_lor(v___x_2445_, v___x_2449_);
v___x_2451_ = lean_nat_add(v___x_2438_, v___x_2429_);
lean_dec(v___x_2438_);
v___x_2452_ = lean_byte_array_get(v_index_2391_, v___x_2451_);
lean_dec(v___x_2451_);
v___x_2453_ = lean_uint8_to_uint32(v___x_2452_);
v___x_2454_ = lean_uint32_shift_left(v___x_2453_, v___x_2433_);
v___x_2455_ = lean_uint32_lor(v___x_2450_, v___x_2454_);
v_hi_2456_ = lean_uint32_to_nat(v___x_2455_);
v___x_2457_ = 5ULL;
v___x_2458_ = 1ULL;
v___x_2459_ = lean_uint64_shift_left(v___x_2458_, v_bits_2401_);
v___x_2460_ = 2ULL;
v___x_2461_ = lean_uint64_shift_left(v___x_2459_, v___x_2460_);
v___x_2462_ = lean_uint64_add(v___x_2457_, v___x_2461_);
v_fpOff_2463_ = lean_uint64_to_nat(v___x_2462_);
v___x_2464_ = 32ULL;
v___x_2465_ = lean_uint64_shift_right(v___y_2397_, v___x_2464_);
v___x_2466_ = lean_uint64_to_uint8(v___x_2465_);
v___x_2467_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(v_index_2391_, v_cs_2392_, v_k_2393_, v___x_2466_, v_fpOff_2463_, v_lo_2436_, v_hi_2456_);
lean_dec(v_hi_2456_);
lean_dec(v_fpOff_2463_);
return v___x_2467_;
}
else
{
lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; uint8_t v___x_2472_; uint32_t v___x_2473_; lean_object* v___x_2474_; uint8_t v___x_2475_; uint32_t v___x_2476_; uint32_t v___x_2477_; uint32_t v___x_2478_; uint32_t v___x_2479_; lean_object* v_lo_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; uint8_t v___x_2483_; uint32_t v___x_2484_; lean_object* v___x_2485_; uint8_t v___x_2486_; uint32_t v___x_2487_; uint32_t v___x_2488_; uint32_t v___x_2489_; lean_object* v_hi_2490_; uint64_t v___x_2491_; uint64_t v___x_2492_; uint64_t v___x_2493_; uint64_t v___x_2494_; uint64_t v___x_2495_; lean_object* v_fpOff_2496_; uint64_t v___x_2497_; uint64_t v___x_2498_; uint8_t v___x_2499_; lean_object* v___x_2500_; 
v___x_2468_ = lean_unsigned_to_nat(1u);
v___x_2469_ = lean_unsigned_to_nat(2u);
v___x_2470_ = lean_nat_mul(v___x_2469_, v_slot_2405_);
lean_dec(v_slot_2405_);
v___x_2471_ = lean_nat_add(v___x_2468_, v___x_2470_);
v___x_2472_ = lean_byte_array_get(v_index_2391_, v___x_2471_);
v___x_2473_ = lean_uint8_to_uint32(v___x_2472_);
v___x_2474_ = lean_nat_add(v___x_2471_, v___x_2468_);
lean_dec(v___x_2471_);
v___x_2475_ = lean_byte_array_get(v_index_2391_, v___x_2474_);
lean_dec(v___x_2474_);
v___x_2476_ = lean_uint8_to_uint32(v___x_2475_);
v___x_2477_ = 8;
v___x_2478_ = lean_uint32_shift_left(v___x_2476_, v___x_2477_);
v___x_2479_ = lean_uint32_lor(v___x_2473_, v___x_2478_);
v_lo_2480_ = lean_uint32_to_nat(v___x_2479_);
v___x_2481_ = lean_unsigned_to_nat(3u);
v___x_2482_ = lean_nat_add(v___x_2481_, v___x_2470_);
lean_dec(v___x_2470_);
v___x_2483_ = lean_byte_array_get(v_index_2391_, v___x_2482_);
v___x_2484_ = lean_uint8_to_uint32(v___x_2483_);
v___x_2485_ = lean_nat_add(v___x_2482_, v___x_2468_);
lean_dec(v___x_2482_);
v___x_2486_ = lean_byte_array_get(v_index_2391_, v___x_2485_);
lean_dec(v___x_2485_);
v___x_2487_ = lean_uint8_to_uint32(v___x_2486_);
v___x_2488_ = lean_uint32_shift_left(v___x_2487_, v___x_2477_);
v___x_2489_ = lean_uint32_lor(v___x_2484_, v___x_2488_);
v_hi_2490_ = lean_uint32_to_nat(v___x_2489_);
v___x_2491_ = 3ULL;
v___x_2492_ = 1ULL;
v___x_2493_ = lean_uint64_shift_left(v___x_2492_, v_bits_2401_);
v___x_2494_ = lean_uint64_shift_left(v___x_2493_, v___x_2492_);
v___x_2495_ = lean_uint64_add(v___x_2491_, v___x_2494_);
v_fpOff_2496_ = lean_uint64_to_nat(v___x_2495_);
v___x_2497_ = 32ULL;
v___x_2498_ = lean_uint64_shift_right(v___y_2397_, v___x_2497_);
v___x_2499_ = lean_uint64_to_uint8(v___x_2498_);
v___x_2500_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(v_index_2391_, v_cs_2392_, v_k_2393_, v___x_2499_, v_fpOff_2496_, v_lo_2480_, v_hi_2490_);
lean_dec(v_hi_2490_);
lean_dec(v_fpOff_2496_);
return v___x_2500_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg___boxed(lean_object* v_index_2505_, lean_object* v_cs_2506_, lean_object* v_k_2507_){
_start:
{
lean_object* v_res_2508_; 
v_res_2508_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_index_2505_, v_cs_2506_, v_k_2507_);
lean_dec(v_k_2507_);
lean_dec_ref(v_cs_2506_);
lean_dec_ref(v_index_2505_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(lean_object* v_x_2509_, lean_object* v_x_2510_, lean_object* v_x_2511_){
_start:
{
lean_object* v___x_2512_; lean_object* v___x_2513_; 
v___x_2512_ = lean_box(0);
v___x_2513_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0, &l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0);
switch(lean_obj_tag(v_x_2509_))
{
case 0:
{
lean_object* v_tree_2514_; lean_object* v___x_2515_; 
v_tree_2514_ = lean_ctor_get(v_x_2509_, 1);
lean_inc_ref(v_tree_2514_);
lean_dec_ref_known(v_x_2509_, 2);
v___x_2515_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_2514_, v_x_2510_, v_x_2511_);
lean_dec_ref(v_tree_2514_);
return v___x_2515_;
}
case 1:
{
lean_object* v_entry_x3f_2516_; lean_object* v_children_2517_; lean_object* v_childIndex_2518_; lean_object* v___x_2519_; uint8_t v___x_2520_; 
v_entry_x3f_2516_ = lean_ctor_get(v_x_2509_, 1);
lean_inc(v_entry_x3f_2516_);
v_children_2517_ = lean_ctor_get(v_x_2509_, 2);
lean_inc_ref(v_children_2517_);
v_childIndex_2518_ = lean_ctor_get(v_x_2509_, 3);
lean_inc_ref(v_childIndex_2518_);
lean_dec_ref_known(v_x_2509_, 4);
v___x_2519_ = lean_unsigned_to_nat(0u);
v___x_2520_ = lean_nat_dec_eq(v_x_2511_, v___x_2519_);
if (v___x_2520_ == 0)
{
lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; 
lean_dec(v_entry_x3f_2516_);
v___x_2521_ = lean_unsigned_to_nat(1u);
v___x_2522_ = lean_nat_sub(v_x_2511_, v___x_2521_);
lean_dec(v_x_2511_);
v___x_2523_ = lean_array_get_borrowed(v___x_2512_, v_x_2510_, v___x_2522_);
v___x_2524_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_childIndex_2518_, v_children_2517_, v___x_2523_);
lean_dec_ref(v_childIndex_2518_);
if (lean_obj_tag(v___x_2524_) == 0)
{
lean_object* v___x_2525_; 
lean_dec(v___x_2522_);
lean_dec_ref(v_children_2517_);
v___x_2525_ = lean_box(0);
return v___x_2525_;
}
else
{
lean_object* v_val_2526_; lean_object* v___x_2527_; 
v_val_2526_ = lean_ctor_get(v___x_2524_, 0);
lean_inc(v_val_2526_);
lean_dec_ref_known(v___x_2524_, 1);
v___x_2527_ = lean_array_get(v___x_2513_, v_children_2517_, v_val_2526_);
lean_dec(v_val_2526_);
lean_dec_ref(v_children_2517_);
v_x_2509_ = v___x_2527_;
v_x_2511_ = v___x_2522_;
goto _start;
}
}
else
{
lean_dec_ref(v_childIndex_2518_);
lean_dec_ref(v_children_2517_);
lean_dec(v_x_2511_);
if (lean_obj_tag(v_entry_x3f_2516_) == 0)
{
lean_object* v___x_2529_; 
v___x_2529_ = lean_box(0);
return v___x_2529_;
}
else
{
lean_object* v_val_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2538_; 
v_val_2530_ = lean_ctor_get(v_entry_x3f_2516_, 0);
v_isSharedCheck_2538_ = !lean_is_exclusive(v_entry_x3f_2516_);
if (v_isSharedCheck_2538_ == 0)
{
v___x_2532_ = v_entry_x3f_2516_;
v_isShared_2533_ = v_isSharedCheck_2538_;
goto v_resetjp_2531_;
}
else
{
lean_inc(v_val_2530_);
lean_dec(v_entry_x3f_2516_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2538_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v_fst_2534_; lean_object* v___x_2536_; 
v_fst_2534_ = lean_ctor_get(v_val_2530_, 0);
lean_inc(v_fst_2534_);
lean_dec(v_val_2530_);
if (v_isShared_2533_ == 0)
{
lean_ctor_set(v___x_2532_, 0, v_fst_2534_);
v___x_2536_ = v___x_2532_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_fst_2534_);
v___x_2536_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
return v___x_2536_;
}
}
}
}
}
case 2:
{
lean_object* v_entry_2539_; lean_object* v_expanded_2540_; lean_object* v___x_2541_; uint8_t v___x_2542_; 
v_entry_2539_ = lean_ctor_get(v_x_2509_, 1);
lean_inc_ref(v_entry_2539_);
v_expanded_2540_ = lean_ctor_get(v_x_2509_, 2);
lean_inc_ref(v_expanded_2540_);
lean_dec_ref_known(v_x_2509_, 3);
v___x_2541_ = lean_unsigned_to_nat(0u);
v___x_2542_ = lean_nat_dec_eq(v_x_2511_, v___x_2541_);
if (v___x_2542_ == 0)
{
lean_object* v___x_2543_; lean_object* v_fst_2544_; lean_object* v_snd_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; 
lean_dec_ref(v_entry_2539_);
v___x_2543_ = lean_imported_consts_force_shared(v_expanded_2540_);
lean_dec_ref(v_expanded_2540_);
v_fst_2544_ = lean_ctor_get(v___x_2543_, 0);
lean_inc(v_fst_2544_);
v_snd_2545_ = lean_ctor_get(v___x_2543_, 1);
lean_inc(v_snd_2545_);
lean_dec(v___x_2543_);
v___x_2546_ = lean_unsigned_to_nat(1u);
v___x_2547_ = lean_nat_sub(v_x_2511_, v___x_2546_);
lean_dec(v_x_2511_);
v___x_2548_ = lean_array_get_borrowed(v___x_2512_, v_x_2510_, v___x_2547_);
v___x_2549_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_snd_2545_, v_fst_2544_, v___x_2548_);
lean_dec(v_snd_2545_);
if (lean_obj_tag(v___x_2549_) == 0)
{
lean_object* v___x_2550_; 
lean_dec(v___x_2547_);
lean_dec(v_fst_2544_);
v___x_2550_ = lean_box(0);
return v___x_2550_;
}
else
{
lean_object* v_val_2551_; lean_object* v___x_2552_; 
v_val_2551_ = lean_ctor_get(v___x_2549_, 0);
lean_inc(v_val_2551_);
lean_dec_ref_known(v___x_2549_, 1);
v___x_2552_ = lean_array_get(v___x_2513_, v_fst_2544_, v_val_2551_);
lean_dec(v_val_2551_);
lean_dec(v_fst_2544_);
v_x_2509_ = v___x_2552_;
v_x_2511_ = v___x_2547_;
goto _start;
}
}
else
{
lean_object* v___x_2554_; 
lean_dec_ref(v_expanded_2540_);
lean_dec(v_x_2511_);
v___x_2554_ = lean_imported_consts_force_shared(v_entry_2539_);
lean_dec_ref(v_entry_2539_);
if (lean_obj_tag(v___x_2554_) == 0)
{
lean_object* v___x_2555_; 
v___x_2555_ = lean_box(0);
return v___x_2555_;
}
else
{
lean_object* v_val_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2564_; 
v_val_2556_ = lean_ctor_get(v___x_2554_, 0);
v_isSharedCheck_2564_ = !lean_is_exclusive(v___x_2554_);
if (v_isSharedCheck_2564_ == 0)
{
v___x_2558_ = v___x_2554_;
v_isShared_2559_ = v_isSharedCheck_2564_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_val_2556_);
lean_dec(v___x_2554_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2564_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v_fst_2560_; lean_object* v___x_2562_; 
v_fst_2560_ = lean_ctor_get(v_val_2556_, 0);
lean_inc(v_fst_2560_);
lean_dec(v_val_2556_);
if (v_isShared_2559_ == 0)
{
lean_ctor_set(v___x_2558_, 0, v_fst_2560_);
v___x_2562_ = v___x_2558_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v_fst_2560_);
v___x_2562_ = v_reuseFailAlloc_2563_;
goto v_reusejp_2561_;
}
v_reusejp_2561_:
{
return v___x_2562_;
}
}
}
}
}
default: 
{
lean_object* v_tree_2565_; 
v_tree_2565_ = lean_ctor_get(v_x_2509_, 1);
lean_inc_ref(v_tree_2565_);
lean_dec_ref_known(v_x_2509_, 2);
v_x_2509_ = v_tree_2565_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg___boxed(lean_object* v_x_2567_, lean_object* v_x_2568_, lean_object* v_x_2569_){
_start:
{
lean_object* v_res_2570_; 
v_res_2570_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(v_x_2567_, v_x_2568_, v_x_2569_);
lean_dec_ref(v_x_2568_);
return v_res_2570_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux(lean_object* v_00_u03b1_2571_, lean_object* v_x_2572_, lean_object* v_x_2573_, lean_object* v_x_2574_){
_start:
{
lean_object* v___x_2575_; 
v___x_2575_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(v_x_2572_, v_x_2573_, v_x_2574_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___boxed(lean_object* v_00_u03b1_2576_, lean_object* v_x_2577_, lean_object* v_x_2578_, lean_object* v_x_2579_){
_start:
{
lean_object* v_res_2580_; 
v_res_2580_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux(v_00_u03b1_2576_, v_x_2577_, v_x_2578_, v_x_2579_);
lean_dec_ref(v_x_2578_);
return v_res_2580_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0(lean_object* v_00_u03b1_2581_, lean_object* v_index_2582_, lean_object* v_cs_2583_, lean_object* v_k_2584_){
_start:
{
lean_object* v___x_2585_; 
v___x_2585_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_index_2582_, v_cs_2583_, v_k_2584_);
return v___x_2585_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___boxed(lean_object* v_00_u03b1_2586_, lean_object* v_index_2587_, lean_object* v_cs_2588_, lean_object* v_k_2589_){
_start:
{
lean_object* v_res_2590_; 
v_res_2590_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0(v_00_u03b1_2586_, v_index_2587_, v_cs_2588_, v_k_2589_);
lean_dec(v_k_2589_);
lean_dec_ref(v_cs_2588_);
lean_dec_ref(v_index_2587_);
return v_res_2590_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0(lean_object* v_00_u03b1_2591_, lean_object* v_index_2592_, lean_object* v_cs_2593_, lean_object* v_k_2594_, uint8_t v_fp_2595_, lean_object* v_fpOff_2596_, lean_object* v_j_2597_, lean_object* v_hi_2598_){
_start:
{
lean_object* v___x_2599_; 
v___x_2599_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___redArg(v_index_2592_, v_cs_2593_, v_k_2594_, v_fp_2595_, v_fpOff_2596_, v_j_2597_, v_hi_2598_);
return v___x_2599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2600_, lean_object* v_index_2601_, lean_object* v_cs_2602_, lean_object* v_k_2603_, lean_object* v_fp_2604_, lean_object* v_fpOff_2605_, lean_object* v_j_2606_, lean_object* v_hi_2607_){
_start:
{
uint8_t v_fp_boxed_2608_; lean_object* v_res_2609_; 
v_fp_boxed_2608_ = lean_unbox(v_fp_2604_);
v_res_2609_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f_scanWindow___at___00__private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0_spec__0(v_00_u03b1_2600_, v_index_2601_, v_cs_2602_, v_k_2603_, v_fp_boxed_2608_, v_fpOff_2605_, v_j_2606_, v_hi_2607_);
lean_dec(v_hi_2607_);
lean_dec(v_fpOff_2605_);
lean_dec(v_k_2603_);
lean_dec_ref(v_cs_2602_);
lean_dec_ref(v_index_2601_);
return v_res_2609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(lean_object* v_x_2610_, lean_object* v_x_2611_, lean_object* v_x_2612_){
_start:
{
lean_object* v___x_2613_; lean_object* v___x_2614_; 
v___x_2613_ = lean_box(0);
v___x_2614_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0, &l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0);
switch(lean_obj_tag(v_x_2610_))
{
case 0:
{
lean_object* v_modIdx_2615_; lean_object* v_tree_2616_; lean_object* v___x_2617_; 
v_modIdx_2615_ = lean_ctor_get(v_x_2610_, 0);
lean_inc(v_modIdx_2615_);
v_tree_2616_ = lean_ctor_get(v_x_2610_, 1);
lean_inc_ref(v_tree_2616_);
lean_dec_ref_known(v_x_2610_, 2);
v___x_2617_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_2616_, v_x_2611_, v_x_2612_);
lean_dec_ref(v_tree_2616_);
if (lean_obj_tag(v___x_2617_) == 0)
{
lean_object* v___x_2618_; 
lean_dec(v_modIdx_2615_);
v___x_2618_ = lean_box(0);
return v___x_2618_;
}
else
{
lean_object* v___x_2620_; uint8_t v_isShared_2621_; uint8_t v_isSharedCheck_2625_; 
v_isSharedCheck_2625_ = !lean_is_exclusive(v___x_2617_);
if (v_isSharedCheck_2625_ == 0)
{
lean_object* v_unused_2626_; 
v_unused_2626_ = lean_ctor_get(v___x_2617_, 0);
lean_dec(v_unused_2626_);
v___x_2620_ = v___x_2617_;
v_isShared_2621_ = v_isSharedCheck_2625_;
goto v_resetjp_2619_;
}
else
{
lean_dec(v___x_2617_);
v___x_2620_ = lean_box(0);
v_isShared_2621_ = v_isSharedCheck_2625_;
goto v_resetjp_2619_;
}
v_resetjp_2619_:
{
lean_object* v___x_2623_; 
if (v_isShared_2621_ == 0)
{
lean_ctor_set(v___x_2620_, 0, v_modIdx_2615_);
v___x_2623_ = v___x_2620_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v_modIdx_2615_);
v___x_2623_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
return v___x_2623_;
}
}
}
}
case 1:
{
lean_object* v_entry_x3f_2627_; lean_object* v_children_2628_; lean_object* v_childIndex_2629_; lean_object* v___x_2630_; uint8_t v___x_2631_; 
v_entry_x3f_2627_ = lean_ctor_get(v_x_2610_, 1);
lean_inc(v_entry_x3f_2627_);
v_children_2628_ = lean_ctor_get(v_x_2610_, 2);
lean_inc_ref(v_children_2628_);
v_childIndex_2629_ = lean_ctor_get(v_x_2610_, 3);
lean_inc_ref(v_childIndex_2629_);
lean_dec_ref_known(v_x_2610_, 4);
v___x_2630_ = lean_unsigned_to_nat(0u);
v___x_2631_ = lean_nat_dec_eq(v_x_2612_, v___x_2630_);
if (v___x_2631_ == 0)
{
lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; 
lean_dec(v_entry_x3f_2627_);
v___x_2632_ = lean_unsigned_to_nat(1u);
v___x_2633_ = lean_nat_sub(v_x_2612_, v___x_2632_);
lean_dec(v_x_2612_);
v___x_2634_ = lean_array_get_borrowed(v___x_2613_, v_x_2611_, v___x_2633_);
v___x_2635_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_childIndex_2629_, v_children_2628_, v___x_2634_);
lean_dec_ref(v_childIndex_2629_);
if (lean_obj_tag(v___x_2635_) == 0)
{
lean_dec(v___x_2633_);
lean_dec_ref(v_children_2628_);
return v___x_2635_;
}
else
{
lean_object* v_val_2636_; lean_object* v___x_2637_; 
v_val_2636_ = lean_ctor_get(v___x_2635_, 0);
lean_inc(v_val_2636_);
lean_dec_ref_known(v___x_2635_, 1);
v___x_2637_ = lean_array_get(v___x_2614_, v_children_2628_, v_val_2636_);
lean_dec(v_val_2636_);
lean_dec_ref(v_children_2628_);
v_x_2610_ = v___x_2637_;
v_x_2612_ = v___x_2633_;
goto _start;
}
}
else
{
lean_dec_ref(v_childIndex_2629_);
lean_dec_ref(v_children_2628_);
lean_dec(v_x_2612_);
if (lean_obj_tag(v_entry_x3f_2627_) == 0)
{
lean_object* v___x_2639_; 
v___x_2639_ = lean_box(0);
return v___x_2639_;
}
else
{
lean_object* v_val_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2648_; 
v_val_2640_ = lean_ctor_get(v_entry_x3f_2627_, 0);
v_isSharedCheck_2648_ = !lean_is_exclusive(v_entry_x3f_2627_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2642_ = v_entry_x3f_2627_;
v_isShared_2643_ = v_isSharedCheck_2648_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_val_2640_);
lean_dec(v_entry_x3f_2627_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2648_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v_snd_2644_; lean_object* v___x_2646_; 
v_snd_2644_ = lean_ctor_get(v_val_2640_, 1);
lean_inc(v_snd_2644_);
lean_dec(v_val_2640_);
if (v_isShared_2643_ == 0)
{
lean_ctor_set(v___x_2642_, 0, v_snd_2644_);
v___x_2646_ = v___x_2642_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v_snd_2644_);
v___x_2646_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
return v___x_2646_;
}
}
}
}
}
case 2:
{
lean_object* v_entry_2649_; lean_object* v_expanded_2650_; lean_object* v___x_2651_; uint8_t v___x_2652_; 
v_entry_2649_ = lean_ctor_get(v_x_2610_, 1);
lean_inc_ref(v_entry_2649_);
v_expanded_2650_ = lean_ctor_get(v_x_2610_, 2);
lean_inc_ref(v_expanded_2650_);
lean_dec_ref_known(v_x_2610_, 3);
v___x_2651_ = lean_unsigned_to_nat(0u);
v___x_2652_ = lean_nat_dec_eq(v_x_2612_, v___x_2651_);
if (v___x_2652_ == 0)
{
lean_object* v___x_2653_; lean_object* v_fst_2654_; lean_object* v_snd_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; 
lean_dec_ref(v_entry_2649_);
v___x_2653_ = lean_imported_consts_force_shared(v_expanded_2650_);
lean_dec_ref(v_expanded_2650_);
v_fst_2654_ = lean_ctor_get(v___x_2653_, 0);
lean_inc(v_fst_2654_);
v_snd_2655_ = lean_ctor_get(v___x_2653_, 1);
lean_inc(v_snd_2655_);
lean_dec(v___x_2653_);
v___x_2656_ = lean_unsigned_to_nat(1u);
v___x_2657_ = lean_nat_sub(v_x_2612_, v___x_2656_);
lean_dec(v_x_2612_);
v___x_2658_ = lean_array_get_borrowed(v___x_2613_, v_x_2611_, v___x_2657_);
v___x_2659_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_snd_2655_, v_fst_2654_, v___x_2658_);
lean_dec(v_snd_2655_);
if (lean_obj_tag(v___x_2659_) == 0)
{
lean_dec(v___x_2657_);
lean_dec(v_fst_2654_);
return v___x_2659_;
}
else
{
lean_object* v_val_2660_; lean_object* v___x_2661_; 
v_val_2660_ = lean_ctor_get(v___x_2659_, 0);
lean_inc(v_val_2660_);
lean_dec_ref_known(v___x_2659_, 1);
v___x_2661_ = lean_array_get(v___x_2614_, v_fst_2654_, v_val_2660_);
lean_dec(v_val_2660_);
lean_dec(v_fst_2654_);
v_x_2610_ = v___x_2661_;
v_x_2612_ = v___x_2657_;
goto _start;
}
}
else
{
lean_object* v___x_2663_; 
lean_dec_ref(v_expanded_2650_);
lean_dec(v_x_2612_);
v___x_2663_ = lean_imported_consts_force_shared(v_entry_2649_);
lean_dec_ref(v_entry_2649_);
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v___x_2664_; 
v___x_2664_ = lean_box(0);
return v___x_2664_;
}
else
{
lean_object* v_val_2665_; lean_object* v___x_2667_; uint8_t v_isShared_2668_; uint8_t v_isSharedCheck_2673_; 
v_val_2665_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2673_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2673_ == 0)
{
v___x_2667_ = v___x_2663_;
v_isShared_2668_ = v_isSharedCheck_2673_;
goto v_resetjp_2666_;
}
else
{
lean_inc(v_val_2665_);
lean_dec(v___x_2663_);
v___x_2667_ = lean_box(0);
v_isShared_2668_ = v_isSharedCheck_2673_;
goto v_resetjp_2666_;
}
v_resetjp_2666_:
{
lean_object* v_snd_2669_; lean_object* v___x_2671_; 
v_snd_2669_ = lean_ctor_get(v_val_2665_, 1);
lean_inc(v_snd_2669_);
lean_dec(v_val_2665_);
if (v_isShared_2668_ == 0)
{
lean_ctor_set(v___x_2667_, 0, v_snd_2669_);
v___x_2671_ = v___x_2667_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v_snd_2669_);
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
default: 
{
lean_object* v_tree_2674_; 
v_tree_2674_ = lean_ctor_get(v_x_2610_, 1);
lean_inc_ref(v_tree_2674_);
lean_dec_ref_known(v_x_2610_, 2);
v_x_2610_ = v_tree_2674_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg___boxed(lean_object* v_x_2676_, lean_object* v_x_2677_, lean_object* v_x_2678_){
_start:
{
lean_object* v_res_2679_; 
v_res_2679_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(v_x_2676_, v_x_2677_, v_x_2678_);
lean_dec_ref(v_x_2677_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux(lean_object* v_00_u03b1_2680_, lean_object* v_x_2681_, lean_object* v_x_2682_, lean_object* v_x_2683_){
_start:
{
lean_object* v___x_2684_; 
v___x_2684_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(v_x_2681_, v_x_2682_, v_x_2683_);
return v___x_2684_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___boxed(lean_object* v_00_u03b1_2685_, lean_object* v_x_2686_, lean_object* v_x_2687_, lean_object* v_x_2688_){
_start:
{
lean_object* v_res_2689_; 
v_res_2689_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux(v_00_u03b1_2685_, v_x_2686_, v_x_2687_, v_x_2688_);
lean_dec_ref(v_x_2687_);
return v_res_2689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(lean_object* v_x_2690_, lean_object* v_x_2691_, lean_object* v_x_2692_){
_start:
{
lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2693_ = lean_box(0);
v___x_2694_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0, &l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0);
switch(lean_obj_tag(v_x_2690_))
{
case 0:
{
lean_object* v_modIdx_2695_; lean_object* v_tree_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2713_; 
v_modIdx_2695_ = lean_ctor_get(v_x_2690_, 0);
v_tree_2696_ = lean_ctor_get(v_x_2690_, 1);
v_isSharedCheck_2713_ = !lean_is_exclusive(v_x_2690_);
if (v_isSharedCheck_2713_ == 0)
{
v___x_2698_ = v_x_2690_;
v_isShared_2699_ = v_isSharedCheck_2713_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_tree_2696_);
lean_inc(v_modIdx_2695_);
lean_dec(v_x_2690_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2713_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___x_2700_; 
v___x_2700_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_2696_, v_x_2691_, v_x_2692_);
lean_dec_ref(v_tree_2696_);
if (lean_obj_tag(v___x_2700_) == 0)
{
lean_object* v___x_2701_; 
lean_del_object(v___x_2698_);
lean_dec(v_modIdx_2695_);
v___x_2701_ = lean_box(0);
return v___x_2701_;
}
else
{
lean_object* v_val_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2712_; 
v_val_2702_ = lean_ctor_get(v___x_2700_, 0);
v_isSharedCheck_2712_ = !lean_is_exclusive(v___x_2700_);
if (v_isSharedCheck_2712_ == 0)
{
v___x_2704_ = v___x_2700_;
v_isShared_2705_ = v_isSharedCheck_2712_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_val_2702_);
lean_dec(v___x_2700_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2712_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2707_; 
if (v_isShared_2699_ == 0)
{
lean_ctor_set(v___x_2698_, 1, v_modIdx_2695_);
lean_ctor_set(v___x_2698_, 0, v_val_2702_);
v___x_2707_ = v___x_2698_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2711_; 
v_reuseFailAlloc_2711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2711_, 0, v_val_2702_);
lean_ctor_set(v_reuseFailAlloc_2711_, 1, v_modIdx_2695_);
v___x_2707_ = v_reuseFailAlloc_2711_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
lean_object* v___x_2709_; 
if (v_isShared_2705_ == 0)
{
lean_ctor_set(v___x_2704_, 0, v___x_2707_);
v___x_2709_ = v___x_2704_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v___x_2707_);
v___x_2709_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
return v___x_2709_;
}
}
}
}
}
}
case 1:
{
lean_object* v_entry_x3f_2714_; lean_object* v_children_2715_; lean_object* v_childIndex_2716_; lean_object* v___x_2717_; uint8_t v___x_2718_; 
v_entry_x3f_2714_ = lean_ctor_get(v_x_2690_, 1);
lean_inc(v_entry_x3f_2714_);
v_children_2715_ = lean_ctor_get(v_x_2690_, 2);
lean_inc_ref(v_children_2715_);
v_childIndex_2716_ = lean_ctor_get(v_x_2690_, 3);
lean_inc_ref(v_childIndex_2716_);
lean_dec_ref_known(v_x_2690_, 4);
v___x_2717_ = lean_unsigned_to_nat(0u);
v___x_2718_ = lean_nat_dec_eq(v_x_2692_, v___x_2717_);
if (v___x_2718_ == 0)
{
lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; 
lean_dec(v_entry_x3f_2714_);
v___x_2719_ = lean_unsigned_to_nat(1u);
v___x_2720_ = lean_nat_sub(v_x_2692_, v___x_2719_);
lean_dec(v_x_2692_);
v___x_2721_ = lean_array_get_borrowed(v___x_2693_, v_x_2691_, v___x_2720_);
v___x_2722_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_childIndex_2716_, v_children_2715_, v___x_2721_);
lean_dec_ref(v_childIndex_2716_);
if (lean_obj_tag(v___x_2722_) == 0)
{
lean_object* v___x_2723_; 
lean_dec(v___x_2720_);
lean_dec_ref(v_children_2715_);
v___x_2723_ = lean_box(0);
return v___x_2723_;
}
else
{
lean_object* v_val_2724_; lean_object* v___x_2725_; 
v_val_2724_ = lean_ctor_get(v___x_2722_, 0);
lean_inc(v_val_2724_);
lean_dec_ref_known(v___x_2722_, 1);
v___x_2725_ = lean_array_get(v___x_2694_, v_children_2715_, v_val_2724_);
lean_dec(v_val_2724_);
lean_dec_ref(v_children_2715_);
v_x_2690_ = v___x_2725_;
v_x_2692_ = v___x_2720_;
goto _start;
}
}
else
{
lean_dec_ref(v_childIndex_2716_);
lean_dec_ref(v_children_2715_);
lean_dec(v_x_2692_);
return v_entry_x3f_2714_;
}
}
case 2:
{
lean_object* v_entry_2727_; lean_object* v_expanded_2728_; lean_object* v___x_2729_; uint8_t v___x_2730_; 
v_entry_2727_ = lean_ctor_get(v_x_2690_, 1);
lean_inc_ref(v_entry_2727_);
v_expanded_2728_ = lean_ctor_get(v_x_2690_, 2);
lean_inc_ref(v_expanded_2728_);
lean_dec_ref_known(v_x_2690_, 3);
v___x_2729_ = lean_unsigned_to_nat(0u);
v___x_2730_ = lean_nat_dec_eq(v_x_2692_, v___x_2729_);
if (v___x_2730_ == 0)
{
lean_object* v___x_2731_; lean_object* v_fst_2732_; lean_object* v_snd_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; 
lean_dec_ref(v_entry_2727_);
v___x_2731_ = lean_imported_consts_force_shared(v_expanded_2728_);
lean_dec_ref(v_expanded_2728_);
v_fst_2732_ = lean_ctor_get(v___x_2731_, 0);
lean_inc(v_fst_2732_);
v_snd_2733_ = lean_ctor_get(v___x_2731_, 1);
lean_inc(v_snd_2733_);
lean_dec(v___x_2731_);
v___x_2734_ = lean_unsigned_to_nat(1u);
v___x_2735_ = lean_nat_sub(v_x_2692_, v___x_2734_);
lean_dec(v_x_2692_);
v___x_2736_ = lean_array_get_borrowed(v___x_2693_, v_x_2691_, v___x_2735_);
v___x_2737_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_snd_2733_, v_fst_2732_, v___x_2736_);
lean_dec(v_snd_2733_);
if (lean_obj_tag(v___x_2737_) == 0)
{
lean_object* v___x_2738_; 
lean_dec(v___x_2735_);
lean_dec(v_fst_2732_);
v___x_2738_ = lean_box(0);
return v___x_2738_;
}
else
{
lean_object* v_val_2739_; lean_object* v___x_2740_; 
v_val_2739_ = lean_ctor_get(v___x_2737_, 0);
lean_inc(v_val_2739_);
lean_dec_ref_known(v___x_2737_, 1);
v___x_2740_ = lean_array_get(v___x_2694_, v_fst_2732_, v_val_2739_);
lean_dec(v_val_2739_);
lean_dec(v_fst_2732_);
v_x_2690_ = v___x_2740_;
v_x_2692_ = v___x_2735_;
goto _start;
}
}
else
{
lean_object* v___x_2742_; 
lean_dec_ref(v_expanded_2728_);
lean_dec(v_x_2692_);
v___x_2742_ = lean_imported_consts_force_shared(v_entry_2727_);
lean_dec_ref(v_entry_2727_);
return v___x_2742_;
}
}
default: 
{
lean_object* v_tree_2743_; 
v_tree_2743_ = lean_ctor_get(v_x_2690_, 1);
lean_inc_ref(v_tree_2743_);
lean_dec_ref_known(v_x_2690_, 2);
v_x_2690_ = v_tree_2743_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg___boxed(lean_object* v_x_2745_, lean_object* v_x_2746_, lean_object* v_x_2747_){
_start:
{
lean_object* v_res_2748_; 
v_res_2748_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(v_x_2745_, v_x_2746_, v_x_2747_);
lean_dec_ref(v_x_2746_);
return v_res_2748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux(lean_object* v_00_u03b1_2749_, lean_object* v_x_2750_, lean_object* v_x_2751_, lean_object* v_x_2752_){
_start:
{
lean_object* v___x_2753_; 
v___x_2753_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(v_x_2750_, v_x_2751_, v_x_2752_);
return v___x_2753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___boxed(lean_object* v_00_u03b1_2754_, lean_object* v_x_2755_, lean_object* v_x_2756_, lean_object* v_x_2757_){
_start:
{
lean_object* v_res_2758_; 
v_res_2758_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux(v_00_u03b1_2754_, v_x_2755_, v_x_2756_, v_x_2757_);
lean_dec_ref(v_x_2756_);
return v_res_2758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntry_x3f___redArg(lean_object* v_t_2759_, lean_object* v_n_2760_){
_start:
{
lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v_path_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2761_ = lean_unsigned_to_nat(8u);
v___x_2762_ = lean_mk_empty_array_with_capacity(v___x_2761_);
v_path_2763_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_2760_, v___x_2762_);
v___x_2764_ = lean_array_get_size(v_path_2763_);
v___x_2765_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryAux___redArg(v_t_2759_, v_path_2763_, v___x_2764_);
lean_dec_ref(v_path_2763_);
return v___x_2765_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntry_x3f(lean_object* v_00_u03b1_2766_, lean_object* v_t_2767_, lean_object* v_n_2768_){
_start:
{
lean_object* v___x_2769_; 
v___x_2769_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntry_x3f___redArg(v_t_2767_, v_n_2768_);
return v___x_2769_;
}
}
LEAN_EXPORT lean_object* lean_imported_consts_find_entry_core(lean_object* v_t_2770_, lean_object* v_n_2771_){
_start:
{
lean_object* v___x_2772_; 
v___x_2772_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntry_x3f___redArg(v_t_2770_, v_n_2771_);
return v___x_2772_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryCached_x3f___boxed(lean_object* v_t_2775_, lean_object* v_n_2776_){
_start:
{
lean_object* v_res_2777_; 
v_res_2777_ = lean_imported_consts_find_entry_cached(v_t_2775_, v_n_2776_);
lean_dec(v_n_2776_);
lean_dec_ref(v_t_2775_);
return v_res_2777_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstCached_x3f(lean_object* v_t_2778_, lean_object* v_n_2779_){
_start:
{
lean_object* v___x_2780_; 
v___x_2780_ = lean_imported_consts_find_entry_cached(v_t_2778_, v_n_2779_);
if (lean_obj_tag(v___x_2780_) == 0)
{
lean_object* v___x_2781_; 
v___x_2781_ = lean_box(0);
return v___x_2781_;
}
else
{
lean_object* v_val_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2790_; 
v_val_2782_ = lean_ctor_get(v___x_2780_, 0);
v_isSharedCheck_2790_ = !lean_is_exclusive(v___x_2780_);
if (v_isSharedCheck_2790_ == 0)
{
v___x_2784_ = v___x_2780_;
v_isShared_2785_ = v_isSharedCheck_2790_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_val_2782_);
lean_dec(v___x_2780_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2790_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v_fst_2786_; lean_object* v___x_2788_; 
v_fst_2786_ = lean_ctor_get(v_val_2782_, 0);
lean_inc(v_fst_2786_);
lean_dec(v_val_2782_);
if (v_isShared_2785_ == 0)
{
lean_ctor_set(v___x_2784_, 0, v_fst_2786_);
v___x_2788_ = v___x_2784_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v_fst_2786_);
v___x_2788_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
return v___x_2788_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findConstCached_x3f___boxed(lean_object* v_t_2791_, lean_object* v_n_2792_){
_start:
{
lean_object* v_res_2793_; 
v_res_2793_ = l_Lean_ImportedConsts_findConstCached_x3f(v_t_2791_, v_n_2792_);
lean_dec(v_n_2792_);
lean_dec_ref(v_t_2791_);
return v_res_2793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg(lean_object* v_bound_2794_, lean_object* v_x_2795_, lean_object* v_x_2796_, lean_object* v_x_2797_){
_start:
{
lean_object* v___x_2798_; lean_object* v___x_2799_; 
v___x_2798_ = lean_box(0);
v___x_2799_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0, &l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0);
switch(lean_obj_tag(v_x_2795_))
{
case 0:
{
lean_object* v_modIdx_2800_; lean_object* v_tree_2801_; uint8_t v___x_2802_; 
v_modIdx_2800_ = lean_ctor_get(v_x_2795_, 0);
lean_inc(v_modIdx_2800_);
v_tree_2801_ = lean_ctor_get(v_x_2795_, 1);
lean_inc_ref(v_tree_2801_);
lean_dec_ref_known(v_x_2795_, 2);
v___x_2802_ = lean_nat_dec_lt(v_modIdx_2800_, v_bound_2794_);
if (v___x_2802_ == 0)
{
lean_object* v___x_2803_; 
lean_dec_ref(v_tree_2801_);
lean_dec(v_modIdx_2800_);
lean_dec(v_x_2797_);
v___x_2803_ = lean_box(0);
return v___x_2803_;
}
else
{
lean_object* v___x_2804_; 
v___x_2804_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_2801_, v_x_2796_, v_x_2797_);
lean_dec_ref(v_tree_2801_);
if (lean_obj_tag(v___x_2804_) == 0)
{
lean_object* v___x_2805_; 
lean_dec(v_modIdx_2800_);
v___x_2805_ = lean_box(0);
return v___x_2805_;
}
else
{
lean_object* v___x_2807_; uint8_t v_isShared_2808_; uint8_t v_isSharedCheck_2812_; 
v_isSharedCheck_2812_ = !lean_is_exclusive(v___x_2804_);
if (v_isSharedCheck_2812_ == 0)
{
lean_object* v_unused_2813_; 
v_unused_2813_ = lean_ctor_get(v___x_2804_, 0);
lean_dec(v_unused_2813_);
v___x_2807_ = v___x_2804_;
v_isShared_2808_ = v_isSharedCheck_2812_;
goto v_resetjp_2806_;
}
else
{
lean_dec(v___x_2804_);
v___x_2807_ = lean_box(0);
v_isShared_2808_ = v_isSharedCheck_2812_;
goto v_resetjp_2806_;
}
v_resetjp_2806_:
{
lean_object* v___x_2810_; 
if (v_isShared_2808_ == 0)
{
lean_ctor_set(v___x_2807_, 0, v_modIdx_2800_);
v___x_2810_ = v___x_2807_;
goto v_reusejp_2809_;
}
else
{
lean_object* v_reuseFailAlloc_2811_; 
v_reuseFailAlloc_2811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2811_, 0, v_modIdx_2800_);
v___x_2810_ = v_reuseFailAlloc_2811_;
goto v_reusejp_2809_;
}
v_reusejp_2809_:
{
return v___x_2810_;
}
}
}
}
}
case 1:
{
lean_object* v_entry_x3f_2814_; lean_object* v_children_2815_; lean_object* v_childIndex_2816_; lean_object* v___x_2817_; uint8_t v___x_2818_; 
v_entry_x3f_2814_ = lean_ctor_get(v_x_2795_, 1);
lean_inc(v_entry_x3f_2814_);
v_children_2815_ = lean_ctor_get(v_x_2795_, 2);
lean_inc_ref(v_children_2815_);
v_childIndex_2816_ = lean_ctor_get(v_x_2795_, 3);
lean_inc_ref(v_childIndex_2816_);
lean_dec_ref_known(v_x_2795_, 4);
v___x_2817_ = lean_unsigned_to_nat(0u);
v___x_2818_ = lean_nat_dec_eq(v_x_2797_, v___x_2817_);
if (v___x_2818_ == 0)
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; 
lean_dec(v_entry_x3f_2814_);
v___x_2819_ = lean_unsigned_to_nat(1u);
v___x_2820_ = lean_nat_sub(v_x_2797_, v___x_2819_);
lean_dec(v_x_2797_);
v___x_2821_ = lean_array_get_borrowed(v___x_2798_, v_x_2796_, v___x_2820_);
v___x_2822_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_childIndex_2816_, v_children_2815_, v___x_2821_);
lean_dec_ref(v_childIndex_2816_);
if (lean_obj_tag(v___x_2822_) == 0)
{
lean_dec(v___x_2820_);
lean_dec_ref(v_children_2815_);
return v___x_2822_;
}
else
{
lean_object* v_val_2823_; lean_object* v___x_2824_; 
v_val_2823_ = lean_ctor_get(v___x_2822_, 0);
lean_inc(v_val_2823_);
lean_dec_ref_known(v___x_2822_, 1);
v___x_2824_ = lean_array_get(v___x_2799_, v_children_2815_, v_val_2823_);
lean_dec(v_val_2823_);
lean_dec_ref(v_children_2815_);
v_x_2795_ = v___x_2824_;
v_x_2797_ = v___x_2820_;
goto _start;
}
}
else
{
lean_dec_ref(v_childIndex_2816_);
lean_dec_ref(v_children_2815_);
lean_dec(v_x_2797_);
if (lean_obj_tag(v_entry_x3f_2814_) == 0)
{
lean_object* v___x_2826_; 
v___x_2826_ = lean_box(0);
return v___x_2826_;
}
else
{
lean_object* v_val_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2837_; 
v_val_2827_ = lean_ctor_get(v_entry_x3f_2814_, 0);
v_isSharedCheck_2837_ = !lean_is_exclusive(v_entry_x3f_2814_);
if (v_isSharedCheck_2837_ == 0)
{
v___x_2829_ = v_entry_x3f_2814_;
v_isShared_2830_ = v_isSharedCheck_2837_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_val_2827_);
lean_dec(v_entry_x3f_2814_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2837_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v_snd_2831_; uint8_t v___x_2832_; 
v_snd_2831_ = lean_ctor_get(v_val_2827_, 1);
lean_inc(v_snd_2831_);
lean_dec(v_val_2827_);
v___x_2832_ = lean_nat_dec_lt(v_snd_2831_, v_bound_2794_);
if (v___x_2832_ == 0)
{
lean_object* v___x_2833_; 
lean_dec(v_snd_2831_);
lean_del_object(v___x_2829_);
v___x_2833_ = lean_box(0);
return v___x_2833_;
}
else
{
lean_object* v___x_2835_; 
if (v_isShared_2830_ == 0)
{
lean_ctor_set(v___x_2829_, 0, v_snd_2831_);
v___x_2835_ = v___x_2829_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v_snd_2831_);
v___x_2835_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
return v___x_2835_;
}
}
}
}
}
}
case 2:
{
lean_object* v_entry_2838_; lean_object* v_expanded_2839_; lean_object* v___x_2840_; uint8_t v___x_2841_; 
v_entry_2838_ = lean_ctor_get(v_x_2795_, 1);
lean_inc_ref(v_entry_2838_);
v_expanded_2839_ = lean_ctor_get(v_x_2795_, 2);
lean_inc_ref(v_expanded_2839_);
lean_dec_ref_known(v_x_2795_, 3);
v___x_2840_ = lean_unsigned_to_nat(0u);
v___x_2841_ = lean_nat_dec_eq(v_x_2797_, v___x_2840_);
if (v___x_2841_ == 0)
{
lean_object* v___x_2842_; lean_object* v_fst_2843_; lean_object* v_snd_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; 
lean_dec_ref(v_entry_2838_);
v___x_2842_ = lean_imported_consts_force_shared(v_expanded_2839_);
lean_dec_ref(v_expanded_2839_);
v_fst_2843_ = lean_ctor_get(v___x_2842_, 0);
lean_inc(v_fst_2843_);
v_snd_2844_ = lean_ctor_get(v___x_2842_, 1);
lean_inc(v_snd_2844_);
lean_dec(v___x_2842_);
v___x_2845_ = lean_unsigned_to_nat(1u);
v___x_2846_ = lean_nat_sub(v_x_2797_, v___x_2845_);
lean_dec(v_x_2797_);
v___x_2847_ = lean_array_get_borrowed(v___x_2798_, v_x_2796_, v___x_2846_);
v___x_2848_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_snd_2844_, v_fst_2843_, v___x_2847_);
lean_dec(v_snd_2844_);
if (lean_obj_tag(v___x_2848_) == 0)
{
lean_dec(v___x_2846_);
lean_dec(v_fst_2843_);
return v___x_2848_;
}
else
{
lean_object* v_val_2849_; lean_object* v___x_2850_; 
v_val_2849_ = lean_ctor_get(v___x_2848_, 0);
lean_inc(v_val_2849_);
lean_dec_ref_known(v___x_2848_, 1);
v___x_2850_ = lean_array_get(v___x_2799_, v_fst_2843_, v_val_2849_);
lean_dec(v_val_2849_);
lean_dec(v_fst_2843_);
v_x_2795_ = v___x_2850_;
v_x_2797_ = v___x_2846_;
goto _start;
}
}
else
{
lean_object* v___x_2852_; 
lean_dec_ref(v_expanded_2839_);
lean_dec(v_x_2797_);
v___x_2852_ = lean_imported_consts_force_shared(v_entry_2838_);
lean_dec_ref(v_entry_2838_);
if (lean_obj_tag(v___x_2852_) == 0)
{
lean_object* v___x_2853_; 
v___x_2853_ = lean_box(0);
return v___x_2853_;
}
else
{
lean_object* v_val_2854_; lean_object* v___x_2856_; uint8_t v_isShared_2857_; uint8_t v_isSharedCheck_2864_; 
v_val_2854_ = lean_ctor_get(v___x_2852_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v___x_2852_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2856_ = v___x_2852_;
v_isShared_2857_ = v_isSharedCheck_2864_;
goto v_resetjp_2855_;
}
else
{
lean_inc(v_val_2854_);
lean_dec(v___x_2852_);
v___x_2856_ = lean_box(0);
v_isShared_2857_ = v_isSharedCheck_2864_;
goto v_resetjp_2855_;
}
v_resetjp_2855_:
{
lean_object* v_snd_2858_; uint8_t v___x_2859_; 
v_snd_2858_ = lean_ctor_get(v_val_2854_, 1);
lean_inc(v_snd_2858_);
lean_dec(v_val_2854_);
v___x_2859_ = lean_nat_dec_lt(v_snd_2858_, v_bound_2794_);
if (v___x_2859_ == 0)
{
lean_object* v___x_2860_; 
lean_dec(v_snd_2858_);
lean_del_object(v___x_2856_);
v___x_2860_ = lean_box(0);
return v___x_2860_;
}
else
{
lean_object* v___x_2862_; 
if (v_isShared_2857_ == 0)
{
lean_ctor_set(v___x_2856_, 0, v_snd_2858_);
v___x_2862_ = v___x_2856_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v_snd_2858_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
return v___x_2862_;
}
}
}
}
}
}
default: 
{
lean_object* v_tree_2865_; 
v_tree_2865_ = lean_ctor_get(v_x_2795_, 1);
lean_inc_ref(v_tree_2865_);
lean_dec_ref_known(v_x_2795_, 2);
v_x_2795_ = v_tree_2865_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg___boxed(lean_object* v_bound_2867_, lean_object* v_x_2868_, lean_object* v_x_2869_, lean_object* v_x_2870_){
_start:
{
lean_object* v_res_2871_; 
v_res_2871_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg(v_bound_2867_, v_x_2868_, v_x_2869_, v_x_2870_);
lean_dec_ref(v_x_2869_);
lean_dec(v_bound_2867_);
return v_res_2871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux(lean_object* v_00_u03b1_2872_, lean_object* v_bound_2873_, lean_object* v_x_2874_, lean_object* v_x_2875_, lean_object* v_x_2876_){
_start:
{
lean_object* v___x_2877_; 
v___x_2877_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg(v_bound_2873_, v_x_2874_, v_x_2875_, v_x_2876_);
return v___x_2877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___boxed(lean_object* v_00_u03b1_2878_, lean_object* v_bound_2879_, lean_object* v_x_2880_, lean_object* v_x_2881_, lean_object* v_x_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux(v_00_u03b1_2878_, v_bound_2879_, v_x_2880_, v_x_2881_, v_x_2882_);
lean_dec_ref(v_x_2881_);
lean_dec(v_bound_2879_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* lean_imported_consts_mod_idx_core(lean_object* v_entry_2884_, lean_object* v_extras_2885_, lean_object* v_n_2886_){
_start:
{
lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v_path_2889_; 
v___x_2887_ = lean_unsigned_to_nat(8u);
v___x_2888_ = lean_mk_empty_array_with_capacity(v___x_2887_);
v_path_2889_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_2886_, v___x_2888_);
if (lean_obj_tag(v_entry_2884_) == 0)
{
lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2890_ = lean_array_get_size(v_path_2889_);
v___x_2891_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(v_extras_2885_, v_path_2889_, v___x_2890_);
lean_dec_ref(v_path_2889_);
return v___x_2891_;
}
else
{
lean_object* v_val_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2902_; 
v_val_2892_ = lean_ctor_get(v_entry_2884_, 0);
v_isSharedCheck_2902_ = !lean_is_exclusive(v_entry_2884_);
if (v_isSharedCheck_2902_ == 0)
{
v___x_2894_ = v_entry_2884_;
v_isShared_2895_ = v_isSharedCheck_2902_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_val_2892_);
lean_dec(v_entry_2884_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2902_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
lean_object* v_snd_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; 
v_snd_2896_ = lean_ctor_get(v_val_2892_, 1);
lean_inc(v_snd_2896_);
lean_dec(v_val_2892_);
v___x_2897_ = lean_array_get_size(v_path_2889_);
v___x_2898_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg(v_snd_2896_, v_extras_2885_, v_path_2889_, v___x_2897_);
lean_dec_ref(v_path_2889_);
if (lean_obj_tag(v___x_2898_) == 0)
{
lean_object* v___x_2900_; 
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 0, v_snd_2896_);
v___x_2900_ = v___x_2894_;
goto v_reusejp_2899_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v_snd_2896_);
v___x_2900_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2899_;
}
v_reusejp_2899_:
{
return v___x_2900_;
}
}
else
{
lean_dec(v_snd_2896_);
lean_del_object(v___x_2894_);
return v___x_2898_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modIdxCached_x3f___boxed(lean_object* v_consts_2906_, lean_object* v_extras_2907_, lean_object* v_n_2908_){
_start:
{
lean_object* v_res_2909_; 
v_res_2909_ = lean_imported_consts_find_mod_idx_cached(v_consts_2906_, v_extras_2907_, v_n_2908_);
lean_dec(v_n_2908_);
lean_dec_ref(v_extras_2907_);
lean_dec_ref(v_consts_2906_);
return v_res_2909_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_resetCache___boxed(lean_object* v_a_00___x40___internal___hyg_2911_){
_start:
{
lean_object* v_res_2912_; 
v_res_2912_ = lean_imported_consts_cache_reset();
return v_res_2912_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f___redArg(lean_object* v_t_2913_, lean_object* v_n_2914_){
_start:
{
lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v_path_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; 
v___x_2915_ = lean_unsigned_to_nat(8u);
v___x_2916_ = lean_mk_empty_array_with_capacity(v___x_2915_);
v_path_2917_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_2914_, v___x_2916_);
v___x_2918_ = lean_array_get_size(v_path_2917_);
v___x_2919_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(v_t_2913_, v_path_2917_, v___x_2918_);
lean_dec_ref(v_path_2917_);
return v___x_2919_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f(lean_object* v_00_u03b1_2920_, lean_object* v_t_2921_, lean_object* v_n_2922_){
_start:
{
lean_object* v___x_2923_; 
v___x_2923_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_2921_, v_n_2922_);
return v___x_2923_;
}
}
LEAN_EXPORT uint8_t l_Lean_ImportedConsts_contains___redArg(lean_object* v_t_2924_, lean_object* v_n_2925_){
_start:
{
lean_object* v___x_2926_; 
v___x_2926_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_2924_, v_n_2925_);
if (lean_obj_tag(v___x_2926_) == 0)
{
uint8_t v___x_2927_; 
v___x_2927_ = 0;
return v___x_2927_;
}
else
{
uint8_t v___x_2928_; 
lean_dec_ref_known(v___x_2926_, 1);
v___x_2928_ = 1;
return v___x_2928_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_contains___redArg___boxed(lean_object* v_t_2929_, lean_object* v_n_2930_){
_start:
{
uint8_t v_res_2931_; lean_object* v_r_2932_; 
v_res_2931_ = l_Lean_ImportedConsts_contains___redArg(v_t_2929_, v_n_2930_);
v_r_2932_ = lean_box(v_res_2931_);
return v_r_2932_;
}
}
LEAN_EXPORT uint8_t l_Lean_ImportedConsts_contains(lean_object* v_00_u03b1_2933_, lean_object* v_t_2934_, lean_object* v_n_2935_){
_start:
{
uint8_t v___x_2936_; 
v___x_2936_ = l_Lean_ImportedConsts_contains___redArg(v_t_2934_, v_n_2935_);
return v___x_2936_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_contains___boxed(lean_object* v_00_u03b1_2937_, lean_object* v_t_2938_, lean_object* v_n_2939_){
_start:
{
uint8_t v_res_2940_; lean_object* v_r_2941_; 
v_res_2940_ = l_Lean_ImportedConsts_contains(v_00_u03b1_2937_, v_t_2938_, v_n_2939_);
v_r_2941_ = lean_box(v_res_2940_);
return v_r_2941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0(lean_object* v_a_2942_, lean_object* v_x_2943_, lean_object* v___y_2944_){
_start:
{
lean_object* v_snd_2945_; lean_object* v_children_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; 
v_snd_2945_ = lean_ctor_get(v_a_2942_, 1);
v_children_2946_ = lean_ctor_get(v_snd_2945_, 2);
v___x_2947_ = lean_array_get_size(v_children_2946_);
v___x_2948_ = lean_nat_add(v___y_2944_, v___x_2947_);
v___x_2949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2948_);
return v___x_2949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0___boxed(lean_object* v_a_2950_, lean_object* v_x_2951_, lean_object* v___y_2952_){
_start:
{
lean_object* v_res_2953_; 
v_res_2953_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0(v_a_2950_, v_x_2951_, v___y_2952_);
lean_dec(v___y_2952_);
lean_dec_ref(v_a_2950_);
return v_res_2953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__1(lean_object* v_fst_2954_, lean_object* v_a_2955_, lean_object* v_x_2956_, lean_object* v___y_2957_){
_start:
{
uint64_t v___y_2959_; lean_object* v_key_2965_; 
v_key_2965_ = lean_ctor_get(v_a_2955_, 0);
if (lean_obj_tag(v_key_2965_) == 0)
{
uint64_t v___x_2966_; 
v___x_2966_ = 1723ULL;
v___y_2959_ = v___x_2966_;
goto v___jp_2958_;
}
else
{
uint64_t v_hash_2967_; 
v_hash_2967_ = lean_ctor_get_uint64(v_key_2965_, sizeof(void*)*2);
v___y_2959_ = v_hash_2967_;
goto v___jp_2958_;
}
v___jp_2958_:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; 
v___x_2960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2960_, 0, v_fst_2954_);
lean_ctor_set(v___x_2960_, 1, v_a_2955_);
v___x_2961_ = lean_box_uint64(v___y_2959_);
v___x_2962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2961_);
lean_ctor_set(v___x_2962_, 1, v___x_2960_);
v___x_2963_ = lean_array_push(v___y_2957_, v___x_2962_);
v___x_2964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2964_, 0, v___x_2963_);
return v___x_2964_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__2(lean_object* v___x_2968_, lean_object* v_a_2969_, lean_object* v_x_2970_, lean_object* v___y_2971_){
_start:
{
lean_object* v_snd_2972_; lean_object* v_fst_2973_; lean_object* v_children_2974_; lean_object* v___f_2975_; size_t v_sz_2976_; size_t v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; 
v_snd_2972_ = lean_ctor_get(v_a_2969_, 1);
lean_inc(v_snd_2972_);
v_fst_2973_ = lean_ctor_get(v_a_2969_, 0);
lean_inc(v_fst_2973_);
lean_dec_ref(v_a_2969_);
v_children_2974_ = lean_ctor_get(v_snd_2972_, 2);
lean_inc_ref(v_children_2974_);
lean_dec(v_snd_2972_);
v___f_2975_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__1), 4, 1);
lean_closure_set(v___f_2975_, 0, v_fst_2973_);
v_sz_2976_ = lean_array_size(v_children_2974_);
v___x_2977_ = ((size_t)0ULL);
v___x_2978_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2968_, v_children_2974_, v___f_2975_, v_sz_2976_, v___x_2977_, v___y_2971_);
v___x_2979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2979_, 0, v___x_2978_);
return v___x_2979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(lean_object* v___x_2980_, lean_object* v_multi_2981_, lean_object* v___x_2982_, lean_object* v_total_2983_, lean_object* v_single_2984_, lean_object* v_a_2985_, lean_object* v_x_2986_, lean_object* v___y_2987_){
_start:
{
lean_object* v___x_2988_; uint8_t v___x_2989_; 
v___x_2988_ = lean_array_get_size(v_a_2985_);
v___x_2989_ = lean_nat_dec_eq(v___x_2988_, v___x_2980_);
if (v___x_2989_ == 0)
{
lean_object* v___x_2990_; lean_object* v___x_2991_; 
lean_dec(v_single_2984_);
v___x_2990_ = lean_apply_2(v_multi_2981_, v___y_2987_, v_a_2985_);
v___x_2991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2991_, 0, v___x_2990_);
return v___x_2991_;
}
else
{
lean_object* v___x_2992_; lean_object* v_fst_2993_; lean_object* v_snd_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; 
lean_dec(v_multi_2981_);
v___x_2992_ = lean_array_get(v___x_2982_, v_a_2985_, v_total_2983_);
lean_dec_ref(v_a_2985_);
v_fst_2993_ = lean_ctor_get(v___x_2992_, 0);
lean_inc(v_fst_2993_);
v_snd_2994_ = lean_ctor_get(v___x_2992_, 1);
lean_inc(v_snd_2994_);
lean_dec(v___x_2992_);
v___x_2995_ = lean_apply_3(v_single_2984_, v___y_2987_, v_fst_2993_, v_snd_2994_);
v___x_2996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2996_, 0, v___x_2995_);
return v___x_2996_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed(lean_object* v___x_2997_, lean_object* v_multi_2998_, lean_object* v___x_2999_, lean_object* v_total_3000_, lean_object* v_single_3001_, lean_object* v_a_3002_, lean_object* v_x_3003_, lean_object* v___y_3004_){
_start:
{
lean_object* v_res_3005_; 
v_res_3005_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(v___x_2997_, v_multi_2998_, v___x_2999_, v_total_3000_, v_single_3001_, v_a_3002_, v_x_3003_, v___y_3004_);
lean_dec(v_total_3000_);
lean_dec_ref(v___x_2999_);
lean_dec(v___x_2997_);
return v_res_3005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(lean_object* v_fst_3006_, lean_object* v___x_3007_, lean_object* v_____r_3008_, lean_object* v_groups_3009_){
_start:
{
lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; 
v___x_3010_ = lean_nat_add(v_fst_3006_, v___x_3007_);
v___x_3011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3011_, 0, v___x_3010_);
lean_ctor_set(v___x_3011_, 1, v_groups_3009_);
v___x_3012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3012_, 0, v___x_3011_);
return v___x_3012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4___boxed(lean_object* v_fst_3013_, lean_object* v___x_3014_, lean_object* v_____r_3015_, lean_object* v_groups_3016_){
_start:
{
lean_object* v_res_3017_; 
v_res_3017_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(v_fst_3013_, v___x_3014_, v_____r_3015_, v_groups_3016_);
lean_dec(v___x_3014_);
lean_dec(v_fst_3013_);
return v_res_3017_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5(lean_object* v___x_3018_, lean_object* v_total_3019_, lean_object* v_snd_3020_, uint8_t v___x_3021_, uint8_t v___x_3022_, lean_object* v_g_3023_){
_start:
{
lean_object* v___x_3024_; lean_object* v_snd_3025_; lean_object* v_key_3026_; 
v___x_3024_ = lean_array_get_borrowed(v___x_3018_, v_g_3023_, v_total_3019_);
v_snd_3025_ = lean_ctor_get(v___x_3024_, 1);
v_key_3026_ = lean_ctor_get(v_snd_3025_, 0);
switch(lean_obj_tag(v_key_3026_))
{
case 0:
{
lean_object* v_key_3027_; 
v_key_3027_ = lean_ctor_get(v_snd_3020_, 0);
if (lean_obj_tag(v_key_3027_) == 0)
{
return v___x_3021_;
}
else
{
return v___x_3022_;
}
}
case 1:
{
lean_object* v_key_3028_; 
v_key_3028_ = lean_ctor_get(v_snd_3020_, 0);
if (lean_obj_tag(v_key_3028_) == 1)
{
lean_object* v_str_3029_; lean_object* v_str_3030_; uint8_t v___x_3031_; 
v_str_3029_ = lean_ctor_get(v_key_3026_, 1);
v_str_3030_ = lean_ctor_get(v_key_3028_, 1);
v___x_3031_ = lean_string_dec_eq(v_str_3029_, v_str_3030_);
return v___x_3031_;
}
else
{
return v___x_3022_;
}
}
default: 
{
lean_object* v_key_3032_; 
v_key_3032_ = lean_ctor_get(v_snd_3020_, 0);
if (lean_obj_tag(v_key_3032_) == 2)
{
lean_object* v_i_3033_; lean_object* v_i_3034_; uint8_t v___x_3035_; 
v_i_3033_ = lean_ctor_get(v_key_3026_, 1);
v_i_3034_ = lean_ctor_get(v_key_3032_, 1);
v___x_3035_ = lean_nat_dec_eq(v_i_3033_, v_i_3034_);
return v___x_3035_;
}
else
{
return v___x_3022_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5___boxed(lean_object* v___x_3036_, lean_object* v_total_3037_, lean_object* v_snd_3038_, lean_object* v___x_3039_, lean_object* v___x_3040_, lean_object* v_g_3041_){
_start:
{
uint8_t v___x_3289__boxed_3042_; uint8_t v___x_3290__boxed_3043_; uint8_t v_res_3044_; lean_object* v_r_3045_; 
v___x_3289__boxed_3042_ = lean_unbox(v___x_3039_);
v___x_3290__boxed_3043_ = lean_unbox(v___x_3040_);
v_res_3044_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5(v___x_3036_, v_total_3037_, v_snd_3038_, v___x_3289__boxed_3042_, v___x_3290__boxed_3043_, v_g_3041_);
lean_dec_ref(v_g_3041_);
lean_dec_ref(v_snd_3038_);
lean_dec(v_total_3037_);
lean_dec_ref(v___x_3036_);
v_r_3045_ = lean_box(v_res_3044_);
return v_r_3045_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6(lean_object* v___x_3046_, lean_object* v___x_3047_, lean_object* v___y_3048_, uint64_t v_fst_3049_, lean_object* v___x_3050_, lean_object* v___x_3051_, lean_object* v_total_3052_, uint8_t v___x_3053_, lean_object* v_b_3054_){
_start:
{
lean_object* v___y_3056_; lean_object* v_fst_3065_; lean_object* v_snd_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3103_; 
v_fst_3065_ = lean_ctor_get(v_b_3054_, 0);
v_snd_3066_ = lean_ctor_get(v_b_3054_, 1);
v_isSharedCheck_3103_ = !lean_is_exclusive(v_b_3054_);
if (v_isSharedCheck_3103_ == 0)
{
v___x_3068_ = v_b_3054_;
v_isShared_3069_ = v_isSharedCheck_3103_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_snd_3066_);
lean_inc(v_fst_3065_);
lean_dec(v_b_3054_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3103_;
goto v_resetjp_3067_;
}
v___jp_3055_:
{
lean_object* v_a_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3064_; 
v_a_3057_ = lean_ctor_get(v___y_3056_, 0);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___y_3056_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3059_ = v___y_3056_;
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_a_3057_);
lean_dec(v___y_3056_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3062_; 
if (v_isShared_3060_ == 0)
{
lean_ctor_set_tag(v___x_3059_, 0);
v___x_3062_ = v___x_3059_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v_a_3057_);
v___x_3062_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
return v___x_3062_;
}
}
}
v_resetjp_3067_:
{
uint8_t v___x_3075_; 
v___x_3075_ = lean_nat_dec_lt(v_fst_3065_, v___x_3046_);
if (v___x_3075_ == 0)
{
lean_dec(v_total_3052_);
lean_dec_ref(v___x_3051_);
goto v___jp_3070_;
}
else
{
lean_object* v___x_3076_; lean_object* v_fst_3077_; lean_object* v_snd_3078_; uint64_t v___x_3079_; uint8_t v___x_3080_; 
v___x_3076_ = lean_array_get_borrowed(v___x_3047_, v___y_3048_, v_fst_3065_);
v_fst_3077_ = lean_ctor_get(v___x_3076_, 0);
v_snd_3078_ = lean_ctor_get(v___x_3076_, 1);
v___x_3079_ = lean_unbox_uint64(v_fst_3077_);
v___x_3080_ = lean_uint64_dec_eq(v___x_3079_, v_fst_3049_);
if (v___x_3080_ == 0)
{
lean_dec(v_total_3052_);
lean_dec_ref(v___x_3051_);
goto v___jp_3070_;
}
else
{
lean_object* v_snd_3081_; lean_object* v___y_3083_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___f_3088_; lean_object* v___x_3089_; 
lean_del_object(v___x_3068_);
v_snd_3081_ = lean_ctor_get(v_snd_3078_, 1);
v___x_3086_ = lean_box(v___x_3080_);
v___x_3087_ = lean_box(v___x_3053_);
lean_inc(v_snd_3081_);
lean_inc(v_total_3052_);
v___f_3088_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5___boxed), 6, 5);
lean_closure_set(v___f_3088_, 0, v___x_3051_);
lean_closure_set(v___f_3088_, 1, v_total_3052_);
lean_closure_set(v___f_3088_, 2, v_snd_3081_);
lean_closure_set(v___f_3088_, 3, v___x_3086_);
lean_closure_set(v___f_3088_, 4, v___x_3087_);
v___x_3089_ = l_Array_findIdx_x3f_loop___redArg(v___f_3088_, v_snd_3066_, v_total_3052_);
if (lean_obj_tag(v___x_3089_) == 0)
{
lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; 
v___x_3090_ = lean_mk_empty_array_with_capacity(v___x_3050_);
lean_inc(v_snd_3078_);
v___x_3091_ = lean_array_push(v___x_3090_, v_snd_3078_);
v___x_3092_ = lean_array_push(v_snd_3066_, v___x_3091_);
v___x_3093_ = lean_box(0);
v___x_3094_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(v_fst_3065_, v___x_3050_, v___x_3093_, v___x_3092_);
lean_dec(v_fst_3065_);
v___y_3056_ = v___x_3094_;
goto v___jp_3055_;
}
else
{
lean_object* v_val_3095_; lean_object* v___x_3096_; uint8_t v___x_3097_; 
v_val_3095_ = lean_ctor_get(v___x_3089_, 0);
lean_inc(v_val_3095_);
lean_dec_ref_known(v___x_3089_, 1);
v___x_3096_ = lean_array_get_size(v_snd_3066_);
v___x_3097_ = lean_nat_dec_lt(v_val_3095_, v___x_3096_);
if (v___x_3097_ == 0)
{
lean_dec(v_val_3095_);
v___y_3083_ = v_snd_3066_;
goto v___jp_3082_;
}
else
{
lean_object* v_v_3098_; lean_object* v___x_3099_; lean_object* v_xs_x27_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
v_v_3098_ = lean_array_fget(v_snd_3066_, v_val_3095_);
v___x_3099_ = lean_box(0);
v_xs_x27_3100_ = lean_array_fset(v_snd_3066_, v_val_3095_, v___x_3099_);
lean_inc(v_snd_3078_);
v___x_3101_ = lean_array_push(v_v_3098_, v_snd_3078_);
v___x_3102_ = lean_array_fset(v_xs_x27_3100_, v_val_3095_, v___x_3101_);
lean_dec(v_val_3095_);
v___y_3083_ = v___x_3102_;
goto v___jp_3082_;
}
}
v___jp_3082_:
{
lean_object* v___x_3084_; lean_object* v___x_3085_; 
v___x_3084_ = lean_box(0);
v___x_3085_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(v_fst_3065_, v___x_3050_, v___x_3084_, v___y_3083_);
lean_dec(v_fst_3065_);
v___y_3056_ = v___x_3085_;
goto v___jp_3055_;
}
}
}
v___jp_3070_:
{
lean_object* v___x_3072_; 
if (v_isShared_3069_ == 0)
{
v___x_3072_ = v___x_3068_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v_fst_3065_);
lean_ctor_set(v_reuseFailAlloc_3074_, 1, v_snd_3066_);
v___x_3072_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
lean_object* v___x_3073_; 
v___x_3073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3073_, 0, v___x_3072_);
return v___x_3073_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6___boxed(lean_object* v___x_3104_, lean_object* v___x_3105_, lean_object* v___y_3106_, lean_object* v_fst_3107_, lean_object* v___x_3108_, lean_object* v___x_3109_, lean_object* v_total_3110_, lean_object* v___x_3111_, lean_object* v_b_3112_){
_start:
{
uint64_t v_fst_3318__boxed_3113_; uint8_t v___x_3321__boxed_3114_; lean_object* v_res_3115_; 
v_fst_3318__boxed_3113_ = lean_unbox_uint64(v_fst_3107_);
lean_dec_ref(v_fst_3107_);
v___x_3321__boxed_3114_ = lean_unbox(v___x_3111_);
v_res_3115_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6(v___x_3104_, v___x_3105_, v___y_3106_, v_fst_3318__boxed_3113_, v___x_3108_, v___x_3109_, v_total_3110_, v___x_3321__boxed_3114_, v_b_3112_);
lean_dec(v___x_3108_);
lean_dec_ref(v___y_3106_);
lean_dec_ref(v___x_3105_);
lean_dec(v___x_3104_);
return v_res_3115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7(lean_object* v___y_3116_, lean_object* v___x_3117_, lean_object* v___x_3118_, lean_object* v_single_3119_, lean_object* v___x_3120_, lean_object* v_total_3121_, lean_object* v___x_3122_, lean_object* v___f_3123_, size_t v___x_3124_, lean_object* v_b_3125_){
_start:
{
lean_object* v_fst_3126_; lean_object* v_snd_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3185_; 
v_fst_3126_ = lean_ctor_get(v_b_3125_, 0);
v_snd_3127_ = lean_ctor_get(v_b_3125_, 1);
v_isSharedCheck_3185_ = !lean_is_exclusive(v_b_3125_);
if (v_isSharedCheck_3185_ == 0)
{
v___x_3129_ = v_b_3125_;
v_isShared_3130_ = v_isSharedCheck_3185_;
goto v_resetjp_3128_;
}
else
{
lean_inc(v_snd_3127_);
lean_inc(v_fst_3126_);
lean_dec(v_b_3125_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3185_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
lean_object* v___x_3131_; uint8_t v___x_3132_; 
v___x_3131_ = lean_array_get_size(v___y_3116_);
v___x_3132_ = lean_nat_dec_lt(v_snd_3127_, v___x_3131_);
if (v___x_3132_ == 0)
{
lean_object* v___x_3134_; 
lean_dec_ref(v___f_3123_);
lean_dec_ref(v___x_3122_);
lean_dec(v_total_3121_);
lean_dec_ref(v___x_3120_);
lean_dec(v_single_3119_);
lean_dec(v___x_3118_);
lean_dec_ref(v___x_3117_);
lean_dec_ref(v___y_3116_);
if (v_isShared_3130_ == 0)
{
v___x_3134_ = v___x_3129_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v_fst_3126_);
lean_ctor_set(v_reuseFailAlloc_3136_, 1, v_snd_3127_);
v___x_3134_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
lean_object* v___x_3135_; 
v___x_3135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3134_);
return v___x_3135_;
}
}
else
{
lean_object* v___x_3137_; lean_object* v_snd_3138_; lean_object* v_fst_3139_; lean_object* v___x_3141_; uint8_t v_isShared_3142_; uint8_t v_isSharedCheck_3184_; 
lean_del_object(v___x_3129_);
v___x_3137_ = lean_array_get(v___x_3117_, v___y_3116_, v_snd_3127_);
v_snd_3138_ = lean_ctor_get(v___x_3137_, 1);
v_fst_3139_ = lean_ctor_get(v___x_3137_, 0);
v_isSharedCheck_3184_ = !lean_is_exclusive(v___x_3137_);
if (v_isSharedCheck_3184_ == 0)
{
v___x_3141_ = v___x_3137_;
v_isShared_3142_ = v_isSharedCheck_3184_;
goto v_resetjp_3140_;
}
else
{
lean_inc(v_snd_3138_);
lean_inc(v_fst_3139_);
lean_dec(v___x_3137_);
v___x_3141_ = lean_box(0);
v_isShared_3142_ = v_isSharedCheck_3184_;
goto v_resetjp_3140_;
}
v_resetjp_3140_:
{
lean_object* v_fst_3143_; lean_object* v_snd_3144_; lean_object* v___x_3145_; uint8_t v___x_3152_; 
v_fst_3143_ = lean_ctor_get(v_snd_3138_, 0);
v_snd_3144_ = lean_ctor_get(v_snd_3138_, 1);
v___x_3145_ = lean_nat_add(v_snd_3127_, v___x_3118_);
lean_dec(v_snd_3127_);
v___x_3152_ = lean_nat_dec_eq(v___x_3145_, v___x_3131_);
if (v___x_3152_ == 0)
{
lean_object* v___x_3153_; lean_object* v_fst_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3182_; 
v___x_3153_ = lean_array_get(v___x_3117_, v___y_3116_, v___x_3145_);
v_fst_3154_ = lean_ctor_get(v___x_3153_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3153_);
if (v_isSharedCheck_3182_ == 0)
{
lean_object* v_unused_3183_; 
v_unused_3183_ = lean_ctor_get(v___x_3153_, 1);
lean_dec(v_unused_3183_);
v___x_3156_ = v___x_3153_;
v_isShared_3157_ = v_isSharedCheck_3182_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_fst_3154_);
lean_dec(v___x_3153_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3182_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
uint64_t v___x_3158_; uint64_t v___x_3159_; uint8_t v___x_3160_; 
v___x_3158_ = lean_unbox_uint64(v_fst_3154_);
lean_dec(v_fst_3154_);
v___x_3159_ = lean_unbox_uint64(v_fst_3139_);
v___x_3160_ = lean_uint64_dec_eq(v___x_3158_, v___x_3159_);
if (v___x_3160_ == 0)
{
lean_inc(v_snd_3144_);
lean_inc(v_fst_3143_);
lean_del_object(v___x_3156_);
lean_dec(v_fst_3139_);
lean_dec(v_snd_3138_);
lean_dec_ref(v___f_3123_);
lean_dec_ref(v___x_3122_);
lean_dec(v_total_3121_);
lean_dec_ref(v___x_3120_);
lean_dec(v___x_3118_);
lean_dec_ref(v___x_3117_);
lean_dec_ref(v___y_3116_);
goto v___jp_3146_;
}
else
{
lean_object* v___x_3161_; lean_object* v___f_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3167_; 
lean_del_object(v___x_3141_);
lean_dec(v_single_3119_);
v___x_3161_ = lean_box(v___x_3152_);
lean_inc(v___x_3118_);
v___f_3162_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6___boxed), 9, 8);
lean_closure_set(v___f_3162_, 0, v___x_3131_);
lean_closure_set(v___f_3162_, 1, v___x_3117_);
lean_closure_set(v___f_3162_, 2, v___y_3116_);
lean_closure_set(v___f_3162_, 3, v_fst_3139_);
lean_closure_set(v___f_3162_, 4, v___x_3118_);
lean_closure_set(v___f_3162_, 5, v___x_3120_);
lean_closure_set(v___f_3162_, 6, v_total_3121_);
lean_closure_set(v___f_3162_, 7, v___x_3161_);
v___x_3163_ = lean_mk_empty_array_with_capacity(v___x_3118_);
lean_dec(v___x_3118_);
lean_inc_ref(v___x_3163_);
v___x_3164_ = lean_array_push(v___x_3163_, v_snd_3138_);
v___x_3165_ = lean_array_push(v___x_3163_, v___x_3164_);
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 1, v___x_3165_);
lean_ctor_set(v___x_3156_, 0, v___x_3145_);
v___x_3167_ = v___x_3156_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v___x_3145_);
lean_ctor_set(v_reuseFailAlloc_3181_, 1, v___x_3165_);
v___x_3167_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
lean_object* v___x_3168_; lean_object* v_fst_3169_; lean_object* v_snd_3170_; lean_object* v___x_3172_; uint8_t v_isShared_3173_; uint8_t v_isSharedCheck_3180_; 
lean_inc_ref(v___x_3122_);
v___x_3168_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_3122_, v___f_3162_, v___x_3167_);
v_fst_3169_ = lean_ctor_get(v___x_3168_, 0);
v_snd_3170_ = lean_ctor_get(v___x_3168_, 1);
v_isSharedCheck_3180_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3172_ = v___x_3168_;
v_isShared_3173_ = v_isSharedCheck_3180_;
goto v_resetjp_3171_;
}
else
{
lean_inc(v_snd_3170_);
lean_inc(v_fst_3169_);
lean_dec(v___x_3168_);
v___x_3172_ = lean_box(0);
v_isShared_3173_ = v_isSharedCheck_3180_;
goto v_resetjp_3171_;
}
v_resetjp_3171_:
{
size_t v_sz_3174_; lean_object* v___x_3175_; lean_object* v___x_3177_; 
v_sz_3174_ = lean_array_size(v_snd_3170_);
v___x_3175_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3122_, v_snd_3170_, v___f_3123_, v_sz_3174_, v___x_3124_, v_fst_3126_);
if (v_isShared_3173_ == 0)
{
lean_ctor_set(v___x_3172_, 1, v_fst_3169_);
lean_ctor_set(v___x_3172_, 0, v___x_3175_);
v___x_3177_ = v___x_3172_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v___x_3175_);
lean_ctor_set(v_reuseFailAlloc_3179_, 1, v_fst_3169_);
v___x_3177_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
lean_object* v___x_3178_; 
v___x_3178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3177_);
return v___x_3178_;
}
}
}
}
}
}
else
{
lean_inc(v_snd_3144_);
lean_inc(v_fst_3143_);
lean_dec(v_fst_3139_);
lean_dec(v_snd_3138_);
lean_dec_ref(v___f_3123_);
lean_dec_ref(v___x_3122_);
lean_dec(v_total_3121_);
lean_dec_ref(v___x_3120_);
lean_dec(v___x_3118_);
lean_dec_ref(v___x_3117_);
lean_dec_ref(v___y_3116_);
goto v___jp_3146_;
}
v___jp_3146_:
{
lean_object* v___x_3147_; lean_object* v___x_3149_; 
v___x_3147_ = lean_apply_3(v_single_3119_, v_fst_3126_, v_fst_3143_, v_snd_3144_);
if (v_isShared_3142_ == 0)
{
lean_ctor_set(v___x_3141_, 1, v___x_3145_);
lean_ctor_set(v___x_3141_, 0, v___x_3147_);
v___x_3149_ = v___x_3141_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v___x_3147_);
lean_ctor_set(v_reuseFailAlloc_3151_, 1, v___x_3145_);
v___x_3149_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
lean_object* v___x_3150_; 
v___x_3150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3150_, 0, v___x_3149_);
return v___x_3150_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7___boxed(lean_object* v___y_3186_, lean_object* v___x_3187_, lean_object* v___x_3188_, lean_object* v_single_3189_, lean_object* v___x_3190_, lean_object* v_total_3191_, lean_object* v___x_3192_, lean_object* v___f_3193_, lean_object* v___x_3194_, lean_object* v_b_3195_){
_start:
{
size_t v___x_3430__boxed_3196_; lean_object* v_res_3197_; 
v___x_3430__boxed_3196_ = lean_unbox_usize(v___x_3194_);
lean_dec(v___x_3194_);
v_res_3197_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7(v___y_3186_, v___x_3187_, v___x_3188_, v_single_3189_, v___x_3190_, v_total_3191_, v___x_3192_, v___f_3193_, v___x_3430__boxed_3196_, v_b_3195_);
return v_res_3197_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(lean_object* v_x_3198_, lean_object* v_x_3199_){
_start:
{
lean_object* v_snd_3200_; lean_object* v_snd_3201_; lean_object* v_fst_3202_; lean_object* v_fst_3203_; lean_object* v_fst_3204_; lean_object* v_fst_3205_; uint64_t v___x_3206_; uint64_t v___x_3207_; uint8_t v___x_3208_; 
v_snd_3200_ = lean_ctor_get(v_x_3198_, 1);
v_snd_3201_ = lean_ctor_get(v_x_3199_, 1);
v_fst_3202_ = lean_ctor_get(v_x_3198_, 0);
v_fst_3203_ = lean_ctor_get(v_snd_3200_, 0);
v_fst_3204_ = lean_ctor_get(v_x_3199_, 0);
v_fst_3205_ = lean_ctor_get(v_snd_3201_, 0);
v___x_3206_ = lean_unbox_uint64(v_fst_3202_);
v___x_3207_ = lean_unbox_uint64(v_fst_3204_);
v___x_3208_ = lean_uint64_dec_lt(v___x_3206_, v___x_3207_);
if (v___x_3208_ == 0)
{
uint64_t v___x_3209_; uint64_t v___x_3210_; uint8_t v___x_3211_; 
v___x_3209_ = lean_unbox_uint64(v_fst_3202_);
v___x_3210_ = lean_unbox_uint64(v_fst_3204_);
v___x_3211_ = lean_uint64_dec_eq(v___x_3209_, v___x_3210_);
if (v___x_3211_ == 0)
{
return v___x_3211_;
}
else
{
uint8_t v___x_3212_; 
v___x_3212_ = lean_nat_dec_lt(v_fst_3203_, v_fst_3205_);
return v___x_3212_;
}
}
else
{
return v___x_3208_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8___boxed(lean_object* v_x_3213_, lean_object* v_x_3214_){
_start:
{
uint8_t v_res_3215_; lean_object* v_r_3216_; 
v_res_3215_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(v_x_3213_, v_x_3214_);
lean_dec_ref(v_x_3214_);
lean_dec_ref(v_x_3213_);
v_r_3216_ = lean_box(v_res_3215_);
return v_r_3216_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2(void){
_start:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3220_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
v___x_3221_ = lean_unsigned_to_nat(0u);
v___x_3222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3221_);
lean_ctor_set(v___x_3222_, 1, v___x_3220_);
return v___x_3222_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3(void){
_start:
{
lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; 
v___x_3225_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3226_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3___boxed__const__1));
v___x_3227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3227_, 0, v___x_3226_);
lean_ctor_set(v___x_3227_, 1, v___x_3225_);
return v___x_3227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg(lean_object* v_cands_3231_, lean_object* v_init_3232_, lean_object* v_single_3233_, lean_object* v_multi_3234_){
_start:
{
lean_object* v___f_3235_; lean_object* v___x_3236_; lean_object* v___f_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; size_t v_sz_3241_; size_t v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___f_3247_; lean_object* v___y_3249_; lean_object* v___x_3255_; uint8_t v___x_3256_; 
v___f_3235_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0));
v___x_3236_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__9));
v___f_3237_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1));
v___x_3238_ = lean_unsigned_to_nat(0u);
v___x_3239_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3240_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v_sz_3241_ = lean_array_size(v_cands_3231_);
v___x_3242_ = ((size_t)0ULL);
lean_inc_ref(v_cands_3231_);
v___x_3243_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3236_, v_cands_3231_, v___f_3235_, v_sz_3241_, v___x_3242_, v___x_3238_);
v___x_3244_ = lean_mk_empty_array_with_capacity(v___x_3243_);
lean_dec(v___x_3243_);
v___x_3245_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3236_, v_cands_3231_, v___f_3237_, v_sz_3241_, v___x_3242_, v___x_3244_);
v___x_3246_ = lean_unsigned_to_nat(1u);
lean_inc(v_single_3233_);
v___f_3247_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed), 8, 5);
lean_closure_set(v___f_3247_, 0, v___x_3246_);
lean_closure_set(v___f_3247_, 1, v_multi_3234_);
lean_closure_set(v___f_3247_, 2, v___x_3239_);
lean_closure_set(v___f_3247_, 3, v___x_3238_);
lean_closure_set(v___f_3247_, 4, v_single_3233_);
v___x_3255_ = lean_array_get_size(v___x_3245_);
v___x_3256_ = lean_nat_dec_eq(v___x_3255_, v___x_3238_);
if (v___x_3256_ == 0)
{
lean_object* v___f_3257_; lean_object* v___y_3259_; lean_object* v___y_3260_; lean_object* v___x_3262_; lean_object* v___y_3264_; uint8_t v___x_3266_; 
v___f_3257_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4));
v___x_3262_ = lean_nat_sub(v___x_3255_, v___x_3246_);
v___x_3266_ = lean_nat_dec_le(v___x_3238_, v___x_3262_);
if (v___x_3266_ == 0)
{
lean_inc(v___x_3262_);
v___y_3264_ = v___x_3262_;
goto v___jp_3263_;
}
else
{
v___y_3264_ = v___x_3238_;
goto v___jp_3263_;
}
v___jp_3258_:
{
lean_object* v___x_3261_; 
v___x_3261_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_3257_, v___x_3255_, v___x_3245_, v___y_3259_, v___y_3260_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_3260_);
v___y_3249_ = v___x_3261_;
goto v___jp_3248_;
}
v___jp_3263_:
{
uint8_t v___x_3265_; 
v___x_3265_ = lean_nat_dec_le(v___y_3264_, v___x_3262_);
if (v___x_3265_ == 0)
{
lean_dec(v___x_3262_);
lean_inc(v___y_3264_);
v___y_3259_ = v___y_3264_;
v___y_3260_ = v___y_3264_;
goto v___jp_3258_;
}
else
{
v___y_3259_ = v___y_3264_;
v___y_3260_ = v___x_3262_;
goto v___jp_3258_;
}
}
}
else
{
v___y_3249_ = v___x_3245_;
goto v___jp_3248_;
}
v___jp_3248_:
{
lean_object* v___x_3250_; lean_object* v___f_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v_fst_3254_; 
v___x_3250_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___boxed__const__1));
v___f_3251_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7___boxed), 10, 9);
lean_closure_set(v___f_3251_, 0, v___y_3249_);
lean_closure_set(v___f_3251_, 1, v___x_3240_);
lean_closure_set(v___f_3251_, 2, v___x_3246_);
lean_closure_set(v___f_3251_, 3, v_single_3233_);
lean_closure_set(v___f_3251_, 4, v___x_3239_);
lean_closure_set(v___f_3251_, 5, v___x_3238_);
lean_closure_set(v___f_3251_, 6, v___x_3236_);
lean_closure_set(v___f_3251_, 7, v___f_3247_);
lean_closure_set(v___f_3251_, 8, v___x_3250_);
v___x_3252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3252_, 0, v_init_3232_);
lean_ctor_set(v___x_3252_, 1, v___x_3238_);
v___x_3253_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_3236_, v___f_3251_, v___x_3252_);
v_fst_3254_ = lean_ctor_get(v___x_3253_, 0);
lean_inc(v_fst_3254_);
lean_dec(v___x_3253_);
return v_fst_3254_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups(lean_object* v_00_u03b1_3267_, lean_object* v_00_u03c3_3268_, lean_object* v_cands_3269_, lean_object* v_init_3270_, lean_object* v_single_3271_, lean_object* v_multi_3272_){
_start:
{
lean_object* v___f_3273_; lean_object* v___x_3274_; lean_object* v___f_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; size_t v_sz_3279_; size_t v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___f_3285_; lean_object* v___y_3287_; lean_object* v___x_3293_; uint8_t v___x_3294_; 
v___f_3273_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0));
v___x_3274_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__9));
v___f_3275_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1));
v___x_3276_ = lean_unsigned_to_nat(0u);
v___x_3277_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3278_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v_sz_3279_ = lean_array_size(v_cands_3269_);
v___x_3280_ = ((size_t)0ULL);
lean_inc_ref(v_cands_3269_);
v___x_3281_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3274_, v_cands_3269_, v___f_3273_, v_sz_3279_, v___x_3280_, v___x_3276_);
v___x_3282_ = lean_mk_empty_array_with_capacity(v___x_3281_);
lean_dec(v___x_3281_);
v___x_3283_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3274_, v_cands_3269_, v___f_3275_, v_sz_3279_, v___x_3280_, v___x_3282_);
v___x_3284_ = lean_unsigned_to_nat(1u);
lean_inc(v_single_3271_);
v___f_3285_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed), 8, 5);
lean_closure_set(v___f_3285_, 0, v___x_3284_);
lean_closure_set(v___f_3285_, 1, v_multi_3272_);
lean_closure_set(v___f_3285_, 2, v___x_3277_);
lean_closure_set(v___f_3285_, 3, v___x_3276_);
lean_closure_set(v___f_3285_, 4, v_single_3271_);
v___x_3293_ = lean_array_get_size(v___x_3283_);
v___x_3294_ = lean_nat_dec_eq(v___x_3293_, v___x_3276_);
if (v___x_3294_ == 0)
{
lean_object* v___f_3295_; lean_object* v___y_3297_; lean_object* v___y_3298_; lean_object* v___x_3300_; lean_object* v___y_3302_; uint8_t v___x_3304_; 
v___f_3295_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4));
v___x_3300_ = lean_nat_sub(v___x_3293_, v___x_3284_);
v___x_3304_ = lean_nat_dec_le(v___x_3276_, v___x_3300_);
if (v___x_3304_ == 0)
{
lean_inc(v___x_3300_);
v___y_3302_ = v___x_3300_;
goto v___jp_3301_;
}
else
{
v___y_3302_ = v___x_3276_;
goto v___jp_3301_;
}
v___jp_3296_:
{
lean_object* v___x_3299_; 
v___x_3299_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_3295_, v___x_3293_, v___x_3283_, v___y_3297_, v___y_3298_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_3298_);
v___y_3287_ = v___x_3299_;
goto v___jp_3286_;
}
v___jp_3301_:
{
uint8_t v___x_3303_; 
v___x_3303_ = lean_nat_dec_le(v___y_3302_, v___x_3300_);
if (v___x_3303_ == 0)
{
lean_dec(v___x_3300_);
lean_inc(v___y_3302_);
v___y_3297_ = v___y_3302_;
v___y_3298_ = v___y_3302_;
goto v___jp_3296_;
}
else
{
v___y_3297_ = v___y_3302_;
v___y_3298_ = v___x_3300_;
goto v___jp_3296_;
}
}
}
else
{
v___y_3287_ = v___x_3283_;
goto v___jp_3286_;
}
v___jp_3286_:
{
lean_object* v___x_3288_; lean_object* v___f_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v_fst_3292_; 
v___x_3288_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___boxed__const__1));
v___f_3289_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7___boxed), 10, 9);
lean_closure_set(v___f_3289_, 0, v___y_3287_);
lean_closure_set(v___f_3289_, 1, v___x_3278_);
lean_closure_set(v___f_3289_, 2, v___x_3284_);
lean_closure_set(v___f_3289_, 3, v_single_3271_);
lean_closure_set(v___f_3289_, 4, v___x_3277_);
lean_closure_set(v___f_3289_, 5, v___x_3276_);
lean_closure_set(v___f_3289_, 6, v___x_3274_);
lean_closure_set(v___f_3289_, 7, v___f_3285_);
lean_closure_set(v___f_3289_, 8, v___x_3288_);
v___x_3290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3290_, 0, v_init_3270_);
lean_ctor_set(v___x_3290_, 1, v___x_3276_);
v___x_3291_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_3274_, v___f_3289_, v___x_3290_);
v_fst_3292_ = lean_ctor_get(v___x_3291_, 0);
lean_inc(v_fst_3292_);
lean_dec(v___x_3291_);
return v_fst_3292_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(lean_object* v_as_3305_, size_t v_i_3306_, size_t v_stop_3307_, lean_object* v_b_3308_){
_start:
{
lean_object* v___y_3310_; uint8_t v___x_3314_; 
v___x_3314_ = lean_usize_dec_eq(v_i_3306_, v_stop_3307_);
if (v___x_3314_ == 0)
{
lean_object* v___x_3315_; lean_object* v_snd_3316_; lean_object* v_val_x3f_3317_; 
v___x_3315_ = lean_array_uget(v_as_3305_, v_i_3306_);
v_snd_3316_ = lean_ctor_get(v___x_3315_, 1);
v_val_x3f_3317_ = lean_ctor_get(v_snd_3316_, 1);
lean_inc(v_val_x3f_3317_);
if (lean_obj_tag(v_val_x3f_3317_) == 0)
{
lean_dec(v___x_3315_);
v___y_3310_ = v_b_3308_;
goto v___jp_3309_;
}
else
{
lean_object* v_fst_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3327_; 
v_fst_3318_ = lean_ctor_get(v___x_3315_, 0);
v_isSharedCheck_3327_ = !lean_is_exclusive(v___x_3315_);
if (v_isSharedCheck_3327_ == 0)
{
lean_object* v_unused_3328_; 
v_unused_3328_ = lean_ctor_get(v___x_3315_, 1);
lean_dec(v_unused_3328_);
v___x_3320_ = v___x_3315_;
v_isShared_3321_ = v_isSharedCheck_3327_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_fst_3318_);
lean_dec(v___x_3315_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3327_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v_val_3322_; lean_object* v___x_3324_; 
v_val_3322_ = lean_ctor_get(v_val_x3f_3317_, 0);
lean_inc(v_val_3322_);
lean_dec_ref_known(v_val_x3f_3317_, 1);
if (v_isShared_3321_ == 0)
{
lean_ctor_set(v___x_3320_, 1, v_fst_3318_);
lean_ctor_set(v___x_3320_, 0, v_val_3322_);
v___x_3324_ = v___x_3320_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3326_; 
v_reuseFailAlloc_3326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3326_, 0, v_val_3322_);
lean_ctor_set(v_reuseFailAlloc_3326_, 1, v_fst_3318_);
v___x_3324_ = v_reuseFailAlloc_3326_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
lean_object* v___x_3325_; 
v___x_3325_ = lean_array_push(v_b_3308_, v___x_3324_);
v___y_3310_ = v___x_3325_;
goto v___jp_3309_;
}
}
}
}
else
{
return v_b_3308_;
}
v___jp_3309_:
{
size_t v___x_3311_; size_t v___x_3312_; 
v___x_3311_ = ((size_t)1ULL);
v___x_3312_ = lean_usize_add(v_i_3306_, v___x_3311_);
v_i_3306_ = v___x_3312_;
v_b_3308_ = v___y_3310_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg___boxed(lean_object* v_as_3329_, lean_object* v_i_3330_, lean_object* v_stop_3331_, lean_object* v_b_3332_){
_start:
{
size_t v_i_boxed_3333_; size_t v_stop_boxed_3334_; lean_object* v_res_3335_; 
v_i_boxed_3333_ = lean_unbox_usize(v_i_3330_);
lean_dec(v_i_3330_);
v_stop_boxed_3334_ = lean_unbox_usize(v_stop_3331_);
lean_dec(v_stop_3331_);
v_res_3335_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(v_as_3329_, v_i_boxed_3333_, v_stop_boxed_3334_, v_b_3332_);
lean_dec_ref(v_as_3329_);
return v_res_3335_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(lean_object* v_as_3338_, lean_object* v_start_3339_, lean_object* v_stop_3340_){
_start:
{
lean_object* v___x_3341_; uint8_t v___x_3342_; 
v___x_3341_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg___closed__0));
v___x_3342_ = lean_nat_dec_lt(v_start_3339_, v_stop_3340_);
if (v___x_3342_ == 0)
{
return v___x_3341_;
}
else
{
lean_object* v___x_3343_; uint8_t v___x_3344_; 
v___x_3343_ = lean_array_get_size(v_as_3338_);
v___x_3344_ = lean_nat_dec_le(v_stop_3340_, v___x_3343_);
if (v___x_3344_ == 0)
{
uint8_t v___x_3345_; 
v___x_3345_ = lean_nat_dec_lt(v_start_3339_, v___x_3343_);
if (v___x_3345_ == 0)
{
return v___x_3341_;
}
else
{
size_t v___x_3346_; size_t v___x_3347_; lean_object* v___x_3348_; 
v___x_3346_ = lean_usize_of_nat(v_start_3339_);
v___x_3347_ = lean_usize_of_nat(v___x_3343_);
v___x_3348_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(v_as_3338_, v___x_3346_, v___x_3347_, v___x_3341_);
return v___x_3348_;
}
}
else
{
size_t v___x_3349_; size_t v___x_3350_; lean_object* v___x_3351_; 
v___x_3349_ = lean_usize_of_nat(v_start_3339_);
v___x_3350_ = lean_usize_of_nat(v_stop_3340_);
v___x_3351_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(v_as_3338_, v___x_3349_, v___x_3350_, v___x_3341_);
return v___x_3351_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg___boxed(lean_object* v_as_3352_, lean_object* v_start_3353_, lean_object* v_stop_3354_){
_start:
{
lean_object* v_res_3355_; 
v_res_3355_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_as_3352_, v_start_3353_, v_stop_3354_);
lean_dec(v_stop_3354_);
lean_dec(v_start_3353_);
lean_dec_ref(v_as_3352_);
return v_res_3355_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(lean_object* v_fst_3356_, lean_object* v_as_3357_, size_t v_sz_3358_, size_t v_i_3359_, lean_object* v_b_3360_){
_start:
{
uint8_t v___x_3361_; 
v___x_3361_ = lean_usize_dec_lt(v_i_3359_, v_sz_3358_);
if (v___x_3361_ == 0)
{
lean_dec(v_fst_3356_);
return v_b_3360_;
}
else
{
lean_object* v_a_3362_; uint64_t v___y_3364_; lean_object* v_key_3372_; 
v_a_3362_ = lean_array_uget_borrowed(v_as_3357_, v_i_3359_);
v_key_3372_ = lean_ctor_get(v_a_3362_, 0);
if (lean_obj_tag(v_key_3372_) == 0)
{
uint64_t v___x_3373_; 
v___x_3373_ = 1723ULL;
v___y_3364_ = v___x_3373_;
goto v___jp_3363_;
}
else
{
uint64_t v_hash_3374_; 
v_hash_3374_ = lean_ctor_get_uint64(v_key_3372_, sizeof(void*)*2);
v___y_3364_ = v_hash_3374_;
goto v___jp_3363_;
}
v___jp_3363_:
{
lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; size_t v___x_3369_; size_t v___x_3370_; 
lean_inc(v_a_3362_);
lean_inc(v_fst_3356_);
v___x_3365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3365_, 0, v_fst_3356_);
lean_ctor_set(v___x_3365_, 1, v_a_3362_);
v___x_3366_ = lean_box_uint64(v___y_3364_);
v___x_3367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3367_, 0, v___x_3366_);
lean_ctor_set(v___x_3367_, 1, v___x_3365_);
v___x_3368_ = lean_array_push(v_b_3360_, v___x_3367_);
v___x_3369_ = ((size_t)1ULL);
v___x_3370_ = lean_usize_add(v_i_3359_, v___x_3369_);
v_i_3359_ = v___x_3370_;
v_b_3360_ = v___x_3368_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg___boxed(lean_object* v_fst_3375_, lean_object* v_as_3376_, lean_object* v_sz_3377_, lean_object* v_i_3378_, lean_object* v_b_3379_){
_start:
{
size_t v_sz_boxed_3380_; size_t v_i_boxed_3381_; lean_object* v_res_3382_; 
v_sz_boxed_3380_ = lean_unbox_usize(v_sz_3377_);
lean_dec(v_sz_3377_);
v_i_boxed_3381_ = lean_unbox_usize(v_i_3378_);
lean_dec(v_i_3378_);
v_res_3382_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_fst_3375_, v_as_3376_, v_sz_boxed_3380_, v_i_boxed_3381_, v_b_3379_);
lean_dec_ref(v_as_3376_);
return v_res_3382_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(lean_object* v_as_3383_, size_t v_sz_3384_, size_t v_i_3385_, lean_object* v_b_3386_){
_start:
{
uint8_t v___x_3387_; 
v___x_3387_ = lean_usize_dec_lt(v_i_3385_, v_sz_3384_);
if (v___x_3387_ == 0)
{
return v_b_3386_;
}
else
{
lean_object* v_a_3388_; lean_object* v_snd_3389_; lean_object* v_fst_3390_; lean_object* v_children_3391_; size_t v_sz_3392_; size_t v___x_3393_; lean_object* v___x_3394_; size_t v___x_3395_; size_t v___x_3396_; 
v_a_3388_ = lean_array_uget_borrowed(v_as_3383_, v_i_3385_);
v_snd_3389_ = lean_ctor_get(v_a_3388_, 1);
v_fst_3390_ = lean_ctor_get(v_a_3388_, 0);
v_children_3391_ = lean_ctor_get(v_snd_3389_, 2);
v_sz_3392_ = lean_array_size(v_children_3391_);
v___x_3393_ = ((size_t)0ULL);
lean_inc(v_fst_3390_);
v___x_3394_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_fst_3390_, v_children_3391_, v_sz_3392_, v___x_3393_, v_b_3386_);
v___x_3395_ = ((size_t)1ULL);
v___x_3396_ = lean_usize_add(v_i_3385_, v___x_3395_);
v_i_3385_ = v___x_3396_;
v_b_3386_ = v___x_3394_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg___boxed(lean_object* v_as_3398_, lean_object* v_sz_3399_, lean_object* v_i_3400_, lean_object* v_b_3401_){
_start:
{
size_t v_sz_boxed_3402_; size_t v_i_boxed_3403_; lean_object* v_res_3404_; 
v_sz_boxed_3402_ = lean_unbox_usize(v_sz_3399_);
lean_dec(v_sz_3399_);
v_i_boxed_3403_ = lean_unbox_usize(v_i_3400_);
lean_dec(v_i_3400_);
v_res_3404_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_as_3398_, v_sz_boxed_3402_, v_i_boxed_3403_, v_b_3401_);
lean_dec_ref(v_as_3398_);
return v_res_3404_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(lean_object* v_covered_3405_, lean_object* v_as_3406_, size_t v_sz_3407_, size_t v_i_3408_, uint64_t v_b_3409_){
_start:
{
uint8_t v___x_3410_; 
v___x_3410_ = lean_usize_dec_lt(v_i_3408_, v_sz_3407_);
if (v___x_3410_ == 0)
{
return v_b_3409_;
}
else
{
lean_object* v_a_3411_; lean_object* v_fst_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; uint64_t v___x_3415_; uint64_t v___x_3416_; size_t v___x_3417_; size_t v___x_3418_; 
v_a_3411_ = lean_array_uget_borrowed(v_as_3406_, v_i_3408_);
v_fst_3412_ = lean_ctor_get(v_a_3411_, 0);
v___x_3413_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3___boxed__const__1));
v___x_3414_ = lean_array_get_borrowed(v___x_3413_, v_covered_3405_, v_fst_3412_);
v___x_3415_ = lean_unbox_uint64(v___x_3414_);
v___x_3416_ = lean_uint64_land(v_b_3409_, v___x_3415_);
v___x_3417_ = ((size_t)1ULL);
v___x_3418_ = lean_usize_add(v_i_3408_, v___x_3417_);
v_i_3408_ = v___x_3418_;
v_b_3409_ = v___x_3416_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg___boxed(lean_object* v_covered_3420_, lean_object* v_as_3421_, lean_object* v_sz_3422_, lean_object* v_i_3423_, lean_object* v_b_3424_){
_start:
{
size_t v_sz_boxed_3425_; size_t v_i_boxed_3426_; uint64_t v_b_boxed_3427_; uint64_t v_res_3428_; lean_object* v_r_3429_; 
v_sz_boxed_3425_ = lean_unbox_usize(v_sz_3422_);
lean_dec(v_sz_3422_);
v_i_boxed_3426_ = lean_unbox_usize(v_i_3423_);
lean_dec(v_i_3423_);
v_b_boxed_3427_ = lean_unbox_uint64(v_b_3424_);
lean_dec_ref(v_b_3424_);
v_res_3428_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(v_covered_3420_, v_as_3421_, v_sz_boxed_3425_, v_i_boxed_3426_, v_b_boxed_3427_);
lean_dec_ref(v_as_3421_);
lean_dec_ref(v_covered_3420_);
v_r_3429_ = lean_box_uint64(v_res_3428_);
return v_r_3429_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(lean_object* v_fst_3430_, lean_object* v___x_3431_, lean_object* v_____r_3432_, lean_object* v_groups_3433_){
_start:
{
lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; 
v___x_3434_ = lean_nat_add(v_fst_3430_, v___x_3431_);
v___x_3435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3435_, 0, v___x_3434_);
lean_ctor_set(v___x_3435_, 1, v_groups_3433_);
v___x_3436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3436_, 0, v___x_3435_);
return v___x_3436_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0___boxed(lean_object* v_fst_3437_, lean_object* v___x_3438_, lean_object* v_____r_3439_, lean_object* v_groups_3440_){
_start:
{
lean_object* v_res_3441_; 
v_res_3441_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_3437_, v___x_3438_, v_____r_3439_, v_groups_3440_);
lean_dec(v___x_3438_);
lean_dec(v_fst_3437_);
return v_res_3441_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(lean_object* v_snd_3442_, uint64_t v___x_3443_, uint64_t v_fst_3444_, lean_object* v___x_3445_, lean_object* v___x_3446_, lean_object* v_as_3447_, lean_object* v_j_3448_){
_start:
{
uint8_t v___y_3450_; lean_object* v___x_3455_; uint8_t v___x_3456_; 
v___x_3455_ = lean_array_get_size(v_as_3447_);
v___x_3456_ = lean_nat_dec_lt(v_j_3448_, v___x_3455_);
if (v___x_3456_ == 0)
{
lean_object* v___x_3457_; 
lean_dec(v_j_3448_);
v___x_3457_ = lean_box(0);
return v___x_3457_;
}
else
{
lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v_snd_3462_; lean_object* v_key_3463_; lean_object* v_key_3464_; uint8_t v___x_3465_; 
v___x_3458_ = lean_unsigned_to_nat(0u);
v___x_3459_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3460_ = lean_array_fget_borrowed(v_as_3447_, v_j_3448_);
v___x_3461_ = lean_array_get_borrowed(v___x_3459_, v___x_3460_, v___x_3458_);
v_snd_3462_ = lean_ctor_get(v___x_3461_, 1);
v_key_3463_ = lean_ctor_get(v_snd_3462_, 0);
v_key_3464_ = lean_ctor_get(v_snd_3442_, 0);
v___x_3465_ = lean_nat_dec_eq(v___x_3445_, v___x_3446_);
switch(lean_obj_tag(v_key_3463_))
{
case 0:
{
if (lean_obj_tag(v_key_3464_) == 0)
{
uint8_t v___x_3466_; 
v___x_3466_ = lean_uint64_dec_eq(v___x_3443_, v_fst_3444_);
v___y_3450_ = v___x_3466_;
goto v___jp_3449_;
}
else
{
v___y_3450_ = v___x_3465_;
goto v___jp_3449_;
}
}
case 1:
{
if (lean_obj_tag(v_key_3464_) == 1)
{
lean_object* v_str_3467_; lean_object* v_str_3468_; uint8_t v___x_3469_; 
v_str_3467_ = lean_ctor_get(v_key_3463_, 1);
v_str_3468_ = lean_ctor_get(v_key_3464_, 1);
v___x_3469_ = lean_string_dec_eq(v_str_3467_, v_str_3468_);
v___y_3450_ = v___x_3469_;
goto v___jp_3449_;
}
else
{
v___y_3450_ = v___x_3465_;
goto v___jp_3449_;
}
}
default: 
{
if (lean_obj_tag(v_key_3464_) == 2)
{
lean_object* v_i_3470_; lean_object* v_i_3471_; uint8_t v___x_3472_; 
v_i_3470_ = lean_ctor_get(v_key_3463_, 1);
v_i_3471_ = lean_ctor_get(v_key_3464_, 1);
v___x_3472_ = lean_nat_dec_eq(v_i_3470_, v_i_3471_);
v___y_3450_ = v___x_3472_;
goto v___jp_3449_;
}
else
{
v___y_3450_ = v___x_3465_;
goto v___jp_3449_;
}
}
}
}
v___jp_3449_:
{
if (v___y_3450_ == 0)
{
lean_object* v___x_3451_; lean_object* v___x_3452_; 
v___x_3451_ = lean_unsigned_to_nat(1u);
v___x_3452_ = lean_nat_add(v_j_3448_, v___x_3451_);
lean_dec(v_j_3448_);
v_j_3448_ = v___x_3452_;
goto _start;
}
else
{
lean_object* v___x_3454_; 
v___x_3454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3454_, 0, v_j_3448_);
return v___x_3454_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg___boxed(lean_object* v_snd_3473_, lean_object* v___x_3474_, lean_object* v_fst_3475_, lean_object* v___x_3476_, lean_object* v___x_3477_, lean_object* v_as_3478_, lean_object* v_j_3479_){
_start:
{
uint64_t v___x_3060__boxed_3480_; uint64_t v_fst_3061__boxed_3481_; lean_object* v_res_3482_; 
v___x_3060__boxed_3480_ = lean_unbox_uint64(v___x_3474_);
lean_dec_ref(v___x_3474_);
v_fst_3061__boxed_3481_ = lean_unbox_uint64(v_fst_3475_);
lean_dec_ref(v_fst_3475_);
v_res_3482_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_snd_3473_, v___x_3060__boxed_3480_, v_fst_3061__boxed_3481_, v___x_3476_, v___x_3477_, v_as_3478_, v_j_3479_);
lean_dec_ref(v_as_3478_);
lean_dec(v___x_3477_);
lean_dec(v___x_3476_);
lean_dec_ref(v_snd_3473_);
return v_res_3482_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(lean_object* v___x_3483_, lean_object* v___y_3484_, uint64_t v_fst_3485_, lean_object* v___x_3486_, lean_object* v_a_3487_){
_start:
{
lean_object* v___y_3489_; lean_object* v_fst_3493_; lean_object* v_snd_3494_; lean_object* v___x_3496_; uint8_t v_isShared_3497_; uint8_t v_isSharedCheck_3537_; 
v_fst_3493_ = lean_ctor_get(v_a_3487_, 0);
v_snd_3494_ = lean_ctor_get(v_a_3487_, 1);
v_isSharedCheck_3537_ = !lean_is_exclusive(v_a_3487_);
if (v_isSharedCheck_3537_ == 0)
{
v___x_3496_ = v_a_3487_;
v_isShared_3497_ = v_isSharedCheck_3537_;
goto v_resetjp_3495_;
}
else
{
lean_inc(v_snd_3494_);
lean_inc(v_fst_3493_);
lean_dec(v_a_3487_);
v___x_3496_ = lean_box(0);
v_isShared_3497_ = v_isSharedCheck_3537_;
goto v_resetjp_3495_;
}
v___jp_3488_:
{
if (lean_obj_tag(v___y_3489_) == 0)
{
lean_object* v_a_3490_; 
v_a_3490_ = lean_ctor_get(v___y_3489_, 0);
lean_inc(v_a_3490_);
lean_dec_ref_known(v___y_3489_, 1);
return v_a_3490_;
}
else
{
lean_object* v_a_3491_; 
v_a_3491_ = lean_ctor_get(v___y_3489_, 0);
lean_inc(v_a_3491_);
lean_dec_ref_known(v___y_3489_, 1);
v_a_3487_ = v_a_3491_;
goto _start;
}
}
v_resetjp_3495_:
{
uint8_t v___x_3498_; 
v___x_3498_ = lean_nat_dec_lt(v_fst_3493_, v___x_3483_);
if (v___x_3498_ == 0)
{
lean_object* v___x_3500_; 
if (v_isShared_3497_ == 0)
{
v___x_3500_ = v___x_3496_;
goto v_reusejp_3499_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v_fst_3493_);
lean_ctor_set(v_reuseFailAlloc_3501_, 1, v_snd_3494_);
v___x_3500_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3499_;
}
v_reusejp_3499_:
{
return v___x_3500_;
}
}
else
{
lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v_fst_3505_; lean_object* v_snd_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3536_; 
lean_del_object(v___x_3496_);
v___x_3502_ = lean_unsigned_to_nat(0u);
v___x_3503_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v___x_3504_ = lean_array_get(v___x_3503_, v___y_3484_, v_fst_3493_);
v_fst_3505_ = lean_ctor_get(v___x_3504_, 0);
v_snd_3506_ = lean_ctor_get(v___x_3504_, 1);
v_isSharedCheck_3536_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3536_ == 0)
{
v___x_3508_ = v___x_3504_;
v_isShared_3509_ = v_isSharedCheck_3536_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_snd_3506_);
lean_inc(v_fst_3505_);
lean_dec(v___x_3504_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3536_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
uint64_t v___x_3510_; uint8_t v___x_3511_; 
v___x_3510_ = lean_unbox_uint64(v_fst_3505_);
v___x_3511_ = lean_uint64_dec_eq(v___x_3510_, v_fst_3485_);
if (v___x_3511_ == 0)
{
lean_object* v___x_3513_; 
lean_dec(v_snd_3506_);
lean_dec(v_fst_3505_);
if (v_isShared_3509_ == 0)
{
lean_ctor_set(v___x_3508_, 1, v_snd_3494_);
lean_ctor_set(v___x_3508_, 0, v_fst_3493_);
v___x_3513_ = v___x_3508_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v_fst_3493_);
lean_ctor_set(v_reuseFailAlloc_3514_, 1, v_snd_3494_);
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
lean_object* v_snd_3515_; lean_object* v___x_3516_; lean_object* v___y_3518_; uint64_t v___x_3521_; lean_object* v___x_3522_; 
lean_del_object(v___x_3508_);
v_snd_3515_ = lean_ctor_get(v_snd_3506_, 1);
v___x_3516_ = lean_unsigned_to_nat(1u);
v___x_3521_ = lean_unbox_uint64(v_fst_3505_);
lean_dec(v_fst_3505_);
v___x_3522_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_snd_3515_, v___x_3521_, v_fst_3485_, v___x_3486_, v___x_3483_, v_snd_3494_, v___x_3502_);
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; 
v___x_3523_ = lean_mk_empty_array_with_capacity(v___x_3516_);
v___x_3524_ = lean_array_push(v___x_3523_, v_snd_3506_);
v___x_3525_ = lean_array_push(v_snd_3494_, v___x_3524_);
v___x_3526_ = lean_box(0);
v___x_3527_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_3493_, v___x_3516_, v___x_3526_, v___x_3525_);
lean_dec(v_fst_3493_);
v___y_3489_ = v___x_3527_;
goto v___jp_3488_;
}
else
{
lean_object* v_val_3528_; lean_object* v___x_3529_; uint8_t v___x_3530_; 
v_val_3528_ = lean_ctor_get(v___x_3522_, 0);
lean_inc(v_val_3528_);
lean_dec_ref_known(v___x_3522_, 1);
v___x_3529_ = lean_array_get_size(v_snd_3494_);
v___x_3530_ = lean_nat_dec_lt(v_val_3528_, v___x_3529_);
if (v___x_3530_ == 0)
{
lean_dec(v_val_3528_);
lean_dec(v_snd_3506_);
v___y_3518_ = v_snd_3494_;
goto v___jp_3517_;
}
else
{
lean_object* v_v_3531_; lean_object* v___x_3532_; lean_object* v_xs_x27_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; 
v_v_3531_ = lean_array_fget(v_snd_3494_, v_val_3528_);
v___x_3532_ = lean_box(0);
v_xs_x27_3533_ = lean_array_fset(v_snd_3494_, v_val_3528_, v___x_3532_);
v___x_3534_ = lean_array_push(v_v_3531_, v_snd_3506_);
v___x_3535_ = lean_array_fset(v_xs_x27_3533_, v_val_3528_, v___x_3534_);
lean_dec(v_val_3528_);
v___y_3518_ = v___x_3535_;
goto v___jp_3517_;
}
}
v___jp_3517_:
{
lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3519_ = lean_box(0);
v___x_3520_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_3493_, v___x_3516_, v___x_3519_, v___y_3518_);
lean_dec(v_fst_3493_);
v___y_3489_ = v___x_3520_;
goto v___jp_3488_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___boxed(lean_object* v___x_3538_, lean_object* v___y_3539_, lean_object* v_fst_3540_, lean_object* v___x_3541_, lean_object* v_a_3542_){
_start:
{
uint64_t v_fst_3128__boxed_3543_; lean_object* v_res_3544_; 
v_fst_3128__boxed_3543_ = lean_unbox_uint64(v_fst_3540_);
lean_dec_ref(v_fst_3540_);
v_res_3544_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_3538_, v___y_3539_, v_fst_3128__boxed_3543_, v___x_3541_, v_a_3542_);
lean_dec(v___x_3541_);
lean_dec_ref(v___y_3539_);
lean_dec(v___x_3538_);
return v_res_3544_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(lean_object* v_hi_3545_, lean_object* v_pivot_3546_, lean_object* v_as_3547_, lean_object* v_i_3548_, lean_object* v_k_3549_){
_start:
{
uint8_t v___x_3560_; 
v___x_3560_ = lean_nat_dec_lt(v_k_3549_, v_hi_3545_);
if (v___x_3560_ == 0)
{
lean_object* v___x_3561_; lean_object* v___x_3562_; 
lean_dec(v_k_3549_);
v___x_3561_ = lean_array_fswap(v_as_3547_, v_i_3548_, v_hi_3545_);
v___x_3562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3562_, 0, v_i_3548_);
lean_ctor_set(v___x_3562_, 1, v___x_3561_);
return v___x_3562_;
}
else
{
lean_object* v___x_3563_; lean_object* v_snd_3564_; lean_object* v_snd_3565_; lean_object* v_fst_3566_; lean_object* v_fst_3567_; lean_object* v_fst_3568_; lean_object* v_fst_3569_; uint64_t v___x_3570_; uint64_t v___x_3571_; uint8_t v___x_3572_; 
v___x_3563_ = lean_array_fget_borrowed(v_as_3547_, v_k_3549_);
v_snd_3564_ = lean_ctor_get(v___x_3563_, 1);
v_snd_3565_ = lean_ctor_get(v_pivot_3546_, 1);
v_fst_3566_ = lean_ctor_get(v___x_3563_, 0);
v_fst_3567_ = lean_ctor_get(v_snd_3564_, 0);
v_fst_3568_ = lean_ctor_get(v_pivot_3546_, 0);
v_fst_3569_ = lean_ctor_get(v_snd_3565_, 0);
v___x_3570_ = lean_unbox_uint64(v_fst_3566_);
v___x_3571_ = lean_unbox_uint64(v_fst_3568_);
v___x_3572_ = lean_uint64_dec_lt(v___x_3570_, v___x_3571_);
if (v___x_3572_ == 0)
{
uint64_t v___x_3573_; uint64_t v___x_3574_; uint8_t v___x_3575_; 
v___x_3573_ = lean_unbox_uint64(v_fst_3566_);
v___x_3574_ = lean_unbox_uint64(v_fst_3568_);
v___x_3575_ = lean_uint64_dec_eq(v___x_3573_, v___x_3574_);
if (v___x_3575_ == 0)
{
goto v___jp_3556_;
}
else
{
uint8_t v___x_3576_; 
v___x_3576_ = lean_nat_dec_lt(v_fst_3567_, v_fst_3569_);
if (v___x_3576_ == 0)
{
goto v___jp_3556_;
}
else
{
goto v___jp_3550_;
}
}
}
else
{
goto v___jp_3550_;
}
}
v___jp_3550_:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3551_ = lean_array_fswap(v_as_3547_, v_i_3548_, v_k_3549_);
v___x_3552_ = lean_unsigned_to_nat(1u);
v___x_3553_ = lean_nat_add(v_i_3548_, v___x_3552_);
lean_dec(v_i_3548_);
v___x_3554_ = lean_nat_add(v_k_3549_, v___x_3552_);
lean_dec(v_k_3549_);
v_as_3547_ = v___x_3551_;
v_i_3548_ = v___x_3553_;
v_k_3549_ = v___x_3554_;
goto _start;
}
v___jp_3556_:
{
lean_object* v___x_3557_; lean_object* v___x_3558_; 
v___x_3557_ = lean_unsigned_to_nat(1u);
v___x_3558_ = lean_nat_add(v_k_3549_, v___x_3557_);
lean_dec(v_k_3549_);
v_k_3549_ = v___x_3558_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg___boxed(lean_object* v_hi_3577_, lean_object* v_pivot_3578_, lean_object* v_as_3579_, lean_object* v_i_3580_, lean_object* v_k_3581_){
_start:
{
lean_object* v_res_3582_; 
v_res_3582_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(v_hi_3577_, v_pivot_3578_, v_as_3579_, v_i_3580_, v_k_3581_);
lean_dec_ref(v_pivot_3578_);
lean_dec(v_hi_3577_);
return v_res_3582_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(lean_object* v_n_3583_, lean_object* v_as_3584_, lean_object* v_lo_3585_, lean_object* v_hi_3586_){
_start:
{
lean_object* v___y_3588_; uint8_t v___x_3598_; 
v___x_3598_ = lean_nat_dec_lt(v_lo_3585_, v_hi_3586_);
if (v___x_3598_ == 0)
{
lean_dec(v_lo_3585_);
return v_as_3584_;
}
else
{
lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v_mid_3601_; lean_object* v___y_3603_; lean_object* v___y_3609_; lean_object* v___x_3614_; lean_object* v___x_3615_; uint8_t v___x_3616_; 
v___x_3599_ = lean_nat_add(v_lo_3585_, v_hi_3586_);
v___x_3600_ = lean_unsigned_to_nat(1u);
v_mid_3601_ = lean_nat_shiftr(v___x_3599_, v___x_3600_);
lean_dec(v___x_3599_);
v___x_3614_ = lean_array_fget_borrowed(v_as_3584_, v_mid_3601_);
v___x_3615_ = lean_array_fget_borrowed(v_as_3584_, v_lo_3585_);
v___x_3616_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(v___x_3614_, v___x_3615_);
if (v___x_3616_ == 0)
{
v___y_3609_ = v_as_3584_;
goto v___jp_3608_;
}
else
{
lean_object* v___x_3617_; 
v___x_3617_ = lean_array_fswap(v_as_3584_, v_lo_3585_, v_mid_3601_);
v___y_3609_ = v___x_3617_;
goto v___jp_3608_;
}
v___jp_3602_:
{
lean_object* v___x_3604_; lean_object* v___x_3605_; uint8_t v___x_3606_; 
v___x_3604_ = lean_array_fget_borrowed(v___y_3603_, v_mid_3601_);
v___x_3605_ = lean_array_fget_borrowed(v___y_3603_, v_hi_3586_);
v___x_3606_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(v___x_3604_, v___x_3605_);
if (v___x_3606_ == 0)
{
lean_dec(v_mid_3601_);
v___y_3588_ = v___y_3603_;
goto v___jp_3587_;
}
else
{
lean_object* v___x_3607_; 
v___x_3607_ = lean_array_fswap(v___y_3603_, v_mid_3601_, v_hi_3586_);
lean_dec(v_mid_3601_);
v___y_3588_ = v___x_3607_;
goto v___jp_3587_;
}
}
v___jp_3608_:
{
lean_object* v___x_3610_; lean_object* v___x_3611_; uint8_t v___x_3612_; 
v___x_3610_ = lean_array_fget_borrowed(v___y_3609_, v_hi_3586_);
v___x_3611_ = lean_array_fget_borrowed(v___y_3609_, v_lo_3585_);
v___x_3612_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(v___x_3610_, v___x_3611_);
if (v___x_3612_ == 0)
{
v___y_3603_ = v___y_3609_;
goto v___jp_3602_;
}
else
{
lean_object* v___x_3613_; 
v___x_3613_ = lean_array_fswap(v___y_3609_, v_lo_3585_, v_hi_3586_);
v___y_3603_ = v___x_3613_;
goto v___jp_3602_;
}
}
}
v___jp_3587_:
{
lean_object* v_pivot_3589_; lean_object* v___x_3590_; lean_object* v_fst_3591_; lean_object* v_snd_3592_; uint8_t v___x_3593_; 
v_pivot_3589_ = lean_array_fget(v___y_3588_, v_hi_3586_);
lean_inc_n(v_lo_3585_, 2);
v___x_3590_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(v_hi_3586_, v_pivot_3589_, v___y_3588_, v_lo_3585_, v_lo_3585_);
lean_dec(v_pivot_3589_);
v_fst_3591_ = lean_ctor_get(v___x_3590_, 0);
lean_inc(v_fst_3591_);
v_snd_3592_ = lean_ctor_get(v___x_3590_, 1);
lean_inc(v_snd_3592_);
lean_dec_ref(v___x_3590_);
v___x_3593_ = lean_nat_dec_le(v_hi_3586_, v_fst_3591_);
if (v___x_3593_ == 0)
{
lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; 
v___x_3594_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v_n_3583_, v_snd_3592_, v_lo_3585_, v_fst_3591_);
v___x_3595_ = lean_unsigned_to_nat(1u);
v___x_3596_ = lean_nat_add(v_fst_3591_, v___x_3595_);
lean_dec(v_fst_3591_);
v_as_3584_ = v___x_3594_;
v_lo_3585_ = v___x_3596_;
goto _start;
}
else
{
lean_dec(v_fst_3591_);
lean_dec(v_lo_3585_);
return v_snd_3592_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg___boxed(lean_object* v_n_3618_, lean_object* v_as_3619_, lean_object* v_lo_3620_, lean_object* v_hi_3621_){
_start:
{
lean_object* v_res_3622_; 
v_res_3622_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v_n_3618_, v_as_3619_, v_lo_3620_, v_hi_3621_);
lean_dec(v_hi_3621_);
lean_dec(v_n_3618_);
return v_res_3622_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(lean_object* v_as_3623_, size_t v_sz_3624_, size_t v_i_3625_, lean_object* v_b_3626_){
_start:
{
uint8_t v___x_3627_; 
v___x_3627_ = lean_usize_dec_lt(v_i_3625_, v_sz_3624_);
if (v___x_3627_ == 0)
{
return v_b_3626_;
}
else
{
lean_object* v_a_3628_; lean_object* v_snd_3629_; lean_object* v_children_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; size_t v___x_3633_; size_t v___x_3634_; 
v_a_3628_ = lean_array_uget_borrowed(v_as_3623_, v_i_3625_);
v_snd_3629_ = lean_ctor_get(v_a_3628_, 1);
v_children_3630_ = lean_ctor_get(v_snd_3629_, 2);
v___x_3631_ = lean_array_get_size(v_children_3630_);
v___x_3632_ = lean_nat_add(v_b_3626_, v___x_3631_);
lean_dec(v_b_3626_);
v___x_3633_ = ((size_t)1ULL);
v___x_3634_ = lean_usize_add(v_i_3625_, v___x_3633_);
v_i_3625_ = v___x_3634_;
v_b_3626_ = v___x_3632_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg___boxed(lean_object* v_as_3636_, lean_object* v_sz_3637_, lean_object* v_i_3638_, lean_object* v_b_3639_){
_start:
{
size_t v_sz_boxed_3640_; size_t v_i_boxed_3641_; lean_object* v_res_3642_; 
v_sz_boxed_3640_ = lean_unbox_usize(v_sz_3637_);
lean_dec(v_sz_3637_);
v_i_boxed_3641_ = lean_unbox_usize(v_i_3638_);
lean_dec(v_i_3638_);
v_res_3642_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_as_3636_, v_sz_boxed_3640_, v_i_boxed_3641_, v_b_3639_);
lean_dec_ref(v_as_3636_);
return v_res_3642_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(lean_object* v___y_3643_, lean_object* v_covered_3644_, lean_object* v_a_3645_){
_start:
{
lean_object* v_fst_3646_; lean_object* v_snd_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3703_; 
v_fst_3646_ = lean_ctor_get(v_a_3645_, 0);
v_snd_3647_ = lean_ctor_get(v_a_3645_, 1);
v_isSharedCheck_3703_ = !lean_is_exclusive(v_a_3645_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3649_ = v_a_3645_;
v_isShared_3650_ = v_isSharedCheck_3703_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_snd_3647_);
lean_inc(v_fst_3646_);
lean_dec(v_a_3645_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3703_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
lean_object* v___x_3651_; uint8_t v___x_3652_; 
v___x_3651_ = lean_array_get_size(v___y_3643_);
v___x_3652_ = lean_nat_dec_lt(v_snd_3647_, v___x_3651_);
if (v___x_3652_ == 0)
{
lean_object* v___x_3654_; 
if (v_isShared_3650_ == 0)
{
v___x_3654_ = v___x_3649_;
goto v_reusejp_3653_;
}
else
{
lean_object* v_reuseFailAlloc_3655_; 
v_reuseFailAlloc_3655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3655_, 0, v_fst_3646_);
lean_ctor_set(v_reuseFailAlloc_3655_, 1, v_snd_3647_);
v___x_3654_ = v_reuseFailAlloc_3655_;
goto v_reusejp_3653_;
}
v_reusejp_3653_:
{
return v___x_3654_;
}
}
else
{
lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v_fst_3658_; lean_object* v_snd_3659_; lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3702_; 
lean_del_object(v___x_3649_);
v___x_3656_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v___x_3657_ = lean_array_get(v___x_3656_, v___y_3643_, v_snd_3647_);
v_fst_3658_ = lean_ctor_get(v___x_3657_, 0);
v_snd_3659_ = lean_ctor_get(v___x_3657_, 1);
v_isSharedCheck_3702_ = !lean_is_exclusive(v___x_3657_);
if (v_isSharedCheck_3702_ == 0)
{
v___x_3661_ = v___x_3657_;
v_isShared_3662_ = v_isSharedCheck_3702_;
goto v_resetjp_3660_;
}
else
{
lean_inc(v_snd_3659_);
lean_inc(v_fst_3658_);
lean_dec(v___x_3657_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3702_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v___x_3663_; lean_object* v___x_3664_; uint8_t v___x_3670_; 
v___x_3663_ = lean_unsigned_to_nat(1u);
v___x_3664_ = lean_nat_add(v_snd_3647_, v___x_3663_);
lean_dec(v_snd_3647_);
v___x_3670_ = lean_nat_dec_eq(v___x_3664_, v___x_3651_);
if (v___x_3670_ == 0)
{
lean_object* v___x_3671_; lean_object* v_fst_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3700_; 
v___x_3671_ = lean_array_get(v___x_3656_, v___y_3643_, v___x_3664_);
v_fst_3672_ = lean_ctor_get(v___x_3671_, 0);
v_isSharedCheck_3700_ = !lean_is_exclusive(v___x_3671_);
if (v_isSharedCheck_3700_ == 0)
{
lean_object* v_unused_3701_; 
v_unused_3701_ = lean_ctor_get(v___x_3671_, 1);
lean_dec(v_unused_3701_);
v___x_3674_ = v___x_3671_;
v_isShared_3675_ = v_isSharedCheck_3700_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_fst_3672_);
lean_dec(v___x_3671_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3700_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
uint64_t v___x_3676_; uint64_t v___x_3677_; uint8_t v___x_3678_; 
v___x_3676_ = lean_unbox_uint64(v_fst_3672_);
lean_dec(v_fst_3672_);
v___x_3677_ = lean_unbox_uint64(v_fst_3658_);
v___x_3678_ = lean_uint64_dec_eq(v___x_3676_, v___x_3677_);
if (v___x_3678_ == 0)
{
lean_del_object(v___x_3674_);
lean_dec(v_snd_3659_);
lean_dec(v_fst_3658_);
goto v___jp_3665_;
}
else
{
lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3683_; 
lean_del_object(v___x_3661_);
v___x_3679_ = lean_mk_empty_array_with_capacity(v___x_3663_);
lean_inc_ref(v___x_3679_);
v___x_3680_ = lean_array_push(v___x_3679_, v_snd_3659_);
v___x_3681_ = lean_array_push(v___x_3679_, v___x_3680_);
lean_inc(v___x_3664_);
if (v_isShared_3675_ == 0)
{
lean_ctor_set(v___x_3674_, 1, v___x_3681_);
lean_ctor_set(v___x_3674_, 0, v___x_3664_);
v___x_3683_ = v___x_3674_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v___x_3664_);
lean_ctor_set(v_reuseFailAlloc_3699_, 1, v___x_3681_);
v___x_3683_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3682_;
}
v_reusejp_3682_:
{
uint64_t v___x_3684_; lean_object* v___x_3685_; lean_object* v_fst_3686_; lean_object* v_snd_3687_; lean_object* v___x_3689_; uint8_t v_isShared_3690_; uint8_t v_isSharedCheck_3698_; 
v___x_3684_ = lean_unbox_uint64(v_fst_3658_);
lean_dec(v_fst_3658_);
v___x_3685_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_3651_, v___y_3643_, v___x_3684_, v___x_3664_, v___x_3683_);
lean_dec(v___x_3664_);
v_fst_3686_ = lean_ctor_get(v___x_3685_, 0);
v_snd_3687_ = lean_ctor_get(v___x_3685_, 1);
v_isSharedCheck_3698_ = !lean_is_exclusive(v___x_3685_);
if (v_isSharedCheck_3698_ == 0)
{
v___x_3689_ = v___x_3685_;
v_isShared_3690_ = v_isSharedCheck_3698_;
goto v_resetjp_3688_;
}
else
{
lean_inc(v_snd_3687_);
lean_inc(v_fst_3686_);
lean_dec(v___x_3685_);
v___x_3689_ = lean_box(0);
v_isShared_3690_ = v_isSharedCheck_3698_;
goto v_resetjp_3688_;
}
v_resetjp_3688_:
{
size_t v___x_3691_; size_t v_sz_3692_; lean_object* v___x_3693_; lean_object* v___x_3695_; 
v___x_3691_ = ((size_t)0ULL);
v_sz_3692_ = lean_array_size(v_snd_3687_);
v___x_3693_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_covered_3644_, v_snd_3687_, v_sz_3692_, v___x_3691_, v_fst_3646_);
lean_dec(v_snd_3687_);
if (v_isShared_3690_ == 0)
{
lean_ctor_set(v___x_3689_, 1, v_fst_3686_);
lean_ctor_set(v___x_3689_, 0, v___x_3693_);
v___x_3695_ = v___x_3689_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v___x_3693_);
lean_ctor_set(v_reuseFailAlloc_3697_, 1, v_fst_3686_);
v___x_3695_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
v_a_3645_ = v___x_3695_;
goto _start;
}
}
}
}
}
}
else
{
lean_dec(v_snd_3659_);
lean_dec(v_fst_3658_);
goto v___jp_3665_;
}
v___jp_3665_:
{
lean_object* v___x_3667_; 
if (v_isShared_3662_ == 0)
{
lean_ctor_set(v___x_3661_, 1, v___x_3664_);
lean_ctor_set(v___x_3661_, 0, v_fst_3646_);
v___x_3667_ = v___x_3661_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v_fst_3646_);
lean_ctor_set(v_reuseFailAlloc_3669_, 1, v___x_3664_);
v___x_3667_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
v_a_3645_ = v___x_3667_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(lean_object* v_covered_3704_, lean_object* v_key_3705_, lean_object* v_cands_3706_, lean_object* v_acc_3707_){
_start:
{
lean_object* v___y_3709_; lean_object* v___y_3710_; lean_object* v___y_3711_; lean_object* v___y_3716_; lean_object* v___y_3717_; lean_object* v___y_3718_; lean_object* v___y_3719_; lean_object* v___y_3720_; lean_object* v___y_3721_; lean_object* v___y_3724_; lean_object* v___y_3725_; lean_object* v___y_3726_; lean_object* v___y_3727_; lean_object* v___y_3728_; lean_object* v___y_3729_; lean_object* v___y_3732_; lean_object* v_acc_3733_; lean_object* v___x_3753_; lean_object* v___x_3754_; uint8_t v___x_3755_; 
v___x_3753_ = lean_array_get_size(v_covered_3704_);
v___x_3754_ = lean_unsigned_to_nat(0u);
v___x_3755_ = lean_nat_dec_eq(v___x_3753_, v___x_3754_);
if (v___x_3755_ == 0)
{
uint64_t v_common_3756_; size_t v_sz_3757_; size_t v___x_3758_; uint64_t v___x_3759_; uint64_t v___x_3760_; uint8_t v___x_3761_; 
v_common_3756_ = 18446744073709551615ULL;
v_sz_3757_ = lean_array_size(v_cands_3706_);
v___x_3758_ = ((size_t)0ULL);
v___x_3759_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(v_covered_3704_, v_cands_3706_, v_sz_3757_, v___x_3758_, v_common_3756_);
v___x_3760_ = 0ULL;
v___x_3761_ = lean_uint64_dec_eq(v___x_3759_, v___x_3760_);
if (v___x_3761_ == 0)
{
lean_dec(v_key_3705_);
return v_acc_3707_;
}
else
{
goto v___jp_3744_;
}
}
else
{
goto v___jp_3744_;
}
v___jp_3708_:
{
lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v_fst_3714_; 
v___x_3712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3712_, 0, v___y_3709_);
lean_ctor_set(v___x_3712_, 1, v___y_3710_);
v___x_3713_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v___y_3711_, v_covered_3704_, v___x_3712_);
lean_dec_ref(v___y_3711_);
v_fst_3714_ = lean_ctor_get(v___x_3713_, 0);
lean_inc(v_fst_3714_);
lean_dec_ref(v___x_3713_);
return v_fst_3714_;
}
v___jp_3715_:
{
lean_object* v___x_3722_; 
v___x_3722_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v___y_3718_, v___y_3720_, v___y_3717_, v___y_3721_);
lean_dec(v___y_3721_);
lean_dec(v___y_3718_);
v___y_3709_ = v___y_3716_;
v___y_3710_ = v___y_3719_;
v___y_3711_ = v___x_3722_;
goto v___jp_3708_;
}
v___jp_3723_:
{
uint8_t v___x_3730_; 
v___x_3730_ = lean_nat_dec_le(v___y_3729_, v___y_3724_);
if (v___x_3730_ == 0)
{
lean_dec(v___y_3724_);
lean_inc(v___y_3729_);
v___y_3716_ = v___y_3725_;
v___y_3717_ = v___y_3729_;
v___y_3718_ = v___y_3726_;
v___y_3719_ = v___y_3727_;
v___y_3720_ = v___y_3728_;
v___y_3721_ = v___y_3729_;
goto v___jp_3715_;
}
else
{
v___y_3716_ = v___y_3725_;
v___y_3717_ = v___y_3729_;
v___y_3718_ = v___y_3726_;
v___y_3719_ = v___y_3727_;
v___y_3720_ = v___y_3728_;
v___y_3721_ = v___y_3724_;
goto v___jp_3715_;
}
}
v___jp_3731_:
{
size_t v_sz_3734_; size_t v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; uint8_t v___x_3740_; 
v_sz_3734_ = lean_array_size(v_cands_3706_);
v___x_3735_ = ((size_t)0ULL);
lean_inc(v___y_3732_);
v___x_3736_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_cands_3706_, v_sz_3734_, v___x_3735_, v___y_3732_);
v___x_3737_ = lean_mk_empty_array_with_capacity(v___x_3736_);
lean_dec(v___x_3736_);
v___x_3738_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_cands_3706_, v_sz_3734_, v___x_3735_, v___x_3737_);
v___x_3739_ = lean_array_get_size(v___x_3738_);
v___x_3740_ = lean_nat_dec_eq(v___x_3739_, v___y_3732_);
if (v___x_3740_ == 0)
{
lean_object* v___x_3741_; lean_object* v___x_3742_; uint8_t v___x_3743_; 
v___x_3741_ = lean_unsigned_to_nat(1u);
v___x_3742_ = lean_nat_sub(v___x_3739_, v___x_3741_);
v___x_3743_ = lean_nat_dec_le(v___y_3732_, v___x_3742_);
if (v___x_3743_ == 0)
{
lean_inc(v___x_3742_);
v___y_3724_ = v___x_3742_;
v___y_3725_ = v_acc_3733_;
v___y_3726_ = v___x_3739_;
v___y_3727_ = v___y_3732_;
v___y_3728_ = v___x_3738_;
v___y_3729_ = v___x_3742_;
goto v___jp_3723_;
}
else
{
lean_inc(v___y_3732_);
v___y_3724_ = v___x_3742_;
v___y_3725_ = v_acc_3733_;
v___y_3726_ = v___x_3739_;
v___y_3727_ = v___y_3732_;
v___y_3728_ = v___x_3738_;
v___y_3729_ = v___y_3732_;
goto v___jp_3723_;
}
}
else
{
v___y_3709_ = v_acc_3733_;
v___y_3710_ = v___y_3732_;
v___y_3711_ = v___x_3738_;
goto v___jp_3708_;
}
}
v___jp_3744_:
{
lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v_entries_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; uint8_t v___x_3750_; 
v___x_3745_ = lean_unsigned_to_nat(0u);
v___x_3746_ = lean_array_get_size(v_cands_3706_);
v_entries_3747_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_cands_3706_, v___x_3745_, v___x_3746_);
v___x_3748_ = lean_unsigned_to_nat(1u);
v___x_3749_ = lean_array_get_size(v_entries_3747_);
v___x_3750_ = lean_nat_dec_lt(v___x_3748_, v___x_3749_);
if (v___x_3750_ == 0)
{
lean_dec_ref(v_entries_3747_);
lean_dec(v_key_3705_);
v___y_3732_ = v___x_3745_;
v_acc_3733_ = v_acc_3707_;
goto v___jp_3731_;
}
else
{
lean_object* v___x_3751_; lean_object* v_acc_3752_; 
v___x_3751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3751_, 0, v_key_3705_);
lean_ctor_set(v___x_3751_, 1, v_entries_3747_);
v_acc_3752_ = lean_array_push(v_acc_3707_, v___x_3751_);
v___y_3732_ = v___x_3745_;
v_acc_3733_ = v_acc_3752_;
goto v___jp_3731_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(lean_object* v_covered_3762_, lean_object* v_as_3763_, size_t v_sz_3764_, size_t v_i_3765_, lean_object* v_b_3766_){
_start:
{
lean_object* v_a_3768_; uint8_t v___x_3772_; 
v___x_3772_ = lean_usize_dec_lt(v_i_3765_, v_sz_3764_);
if (v___x_3772_ == 0)
{
return v_b_3766_;
}
else
{
lean_object* v___x_3773_; lean_object* v_a_3774_; lean_object* v___x_3775_; uint8_t v___x_3776_; 
v___x_3773_ = lean_unsigned_to_nat(1u);
v_a_3774_ = lean_array_uget_borrowed(v_as_3763_, v_i_3765_);
v___x_3775_ = lean_array_get_size(v_a_3774_);
v___x_3776_ = lean_nat_dec_eq(v___x_3775_, v___x_3773_);
if (v___x_3776_ == 0)
{
lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v_snd_3780_; lean_object* v_key_3781_; lean_object* v___x_3782_; 
v___x_3777_ = lean_unsigned_to_nat(0u);
v___x_3778_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3779_ = lean_array_get_borrowed(v___x_3778_, v_a_3774_, v___x_3777_);
v_snd_3780_ = lean_ctor_get(v___x_3779_, 1);
v_key_3781_ = lean_ctor_get(v_snd_3780_, 0);
lean_inc(v_key_3781_);
v___x_3782_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3762_, v_key_3781_, v_a_3774_, v_b_3766_);
v_a_3768_ = v___x_3782_;
goto v___jp_3767_;
}
else
{
v_a_3768_ = v_b_3766_;
goto v___jp_3767_;
}
}
v___jp_3767_:
{
size_t v___x_3769_; size_t v___x_3770_; 
v___x_3769_ = ((size_t)1ULL);
v___x_3770_ = lean_usize_add(v_i_3765_, v___x_3769_);
v_i_3765_ = v___x_3770_;
v_b_3766_ = v_a_3768_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___boxed(lean_object* v_covered_3783_, lean_object* v_as_3784_, lean_object* v_sz_3785_, lean_object* v_i_3786_, lean_object* v_b_3787_){
_start:
{
size_t v_sz_boxed_3788_; size_t v_i_boxed_3789_; lean_object* v_res_3790_; 
v_sz_boxed_3788_ = lean_unbox_usize(v_sz_3785_);
lean_dec(v_sz_3785_);
v_i_boxed_3789_ = lean_unbox_usize(v_i_3786_);
lean_dec(v_i_3786_);
v_res_3790_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_covered_3783_, v_as_3784_, v_sz_boxed_3788_, v_i_boxed_3789_, v_b_3787_);
lean_dec_ref(v_as_3784_);
lean_dec_ref(v_covered_3783_);
return v_res_3790_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed(lean_object* v___y_3791_, lean_object* v_covered_3792_, lean_object* v_a_3793_){
_start:
{
lean_object* v_res_3794_; 
v_res_3794_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v___y_3791_, v_covered_3792_, v_a_3793_);
lean_dec_ref(v_covered_3792_);
lean_dec_ref(v___y_3791_);
return v_res_3794_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg___boxed(lean_object* v_covered_3795_, lean_object* v_key_3796_, lean_object* v_cands_3797_, lean_object* v_acc_3798_){
_start:
{
lean_object* v_res_3799_; 
v_res_3799_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3795_, v_key_3796_, v_cands_3797_, v_acc_3798_);
lean_dec_ref(v_cands_3797_);
lean_dec_ref(v_covered_3795_);
return v_res_3799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(lean_object* v_00_u03b1_3800_, lean_object* v_covered_3801_, lean_object* v_key_3802_, lean_object* v_cands_3803_, lean_object* v_acc_3804_){
_start:
{
lean_object* v___x_3805_; 
v___x_3805_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3801_, v_key_3802_, v_cands_3803_, v_acc_3804_);
return v___x_3805_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___boxed(lean_object* v_00_u03b1_3806_, lean_object* v_covered_3807_, lean_object* v_key_3808_, lean_object* v_cands_3809_, lean_object* v_acc_3810_){
_start:
{
lean_object* v_res_3811_; 
v_res_3811_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(v_00_u03b1_3806_, v_covered_3807_, v_key_3808_, v_cands_3809_, v_acc_3810_);
lean_dec_ref(v_cands_3809_);
lean_dec_ref(v_covered_3807_);
return v_res_3811_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(lean_object* v_00_u03b1_3812_, lean_object* v_fst_3813_, lean_object* v_as_3814_, size_t v_sz_3815_, size_t v_i_3816_, lean_object* v_b_3817_){
_start:
{
lean_object* v___x_3818_; 
v___x_3818_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_fst_3813_, v_as_3814_, v_sz_3815_, v_i_3816_, v_b_3817_);
return v___x_3818_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___boxed(lean_object* v_00_u03b1_3819_, lean_object* v_fst_3820_, lean_object* v_as_3821_, lean_object* v_sz_3822_, lean_object* v_i_3823_, lean_object* v_b_3824_){
_start:
{
size_t v_sz_boxed_3825_; size_t v_i_boxed_3826_; lean_object* v_res_3827_; 
v_sz_boxed_3825_ = lean_unbox_usize(v_sz_3822_);
lean_dec(v_sz_3822_);
v_i_boxed_3826_ = lean_unbox_usize(v_i_3823_);
lean_dec(v_i_3823_);
v_res_3827_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(v_00_u03b1_3819_, v_fst_3820_, v_as_3821_, v_sz_boxed_3825_, v_i_boxed_3826_, v_b_3824_);
lean_dec_ref(v_as_3821_);
return v_res_3827_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(lean_object* v_00_u03b1_3828_, lean_object* v_as_3829_, size_t v_sz_3830_, size_t v_i_3831_, lean_object* v_b_3832_){
_start:
{
lean_object* v___x_3833_; 
v___x_3833_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_as_3829_, v_sz_3830_, v_i_3831_, v_b_3832_);
return v___x_3833_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___boxed(lean_object* v_00_u03b1_3834_, lean_object* v_as_3835_, lean_object* v_sz_3836_, lean_object* v_i_3837_, lean_object* v_b_3838_){
_start:
{
size_t v_sz_boxed_3839_; size_t v_i_boxed_3840_; lean_object* v_res_3841_; 
v_sz_boxed_3839_ = lean_unbox_usize(v_sz_3836_);
lean_dec(v_sz_3836_);
v_i_boxed_3840_ = lean_unbox_usize(v_i_3837_);
lean_dec(v_i_3837_);
v_res_3841_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(v_00_u03b1_3834_, v_as_3835_, v_sz_boxed_3839_, v_i_boxed_3840_, v_b_3838_);
lean_dec_ref(v_as_3835_);
return v_res_3841_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(lean_object* v_00_u03b1_3842_, lean_object* v_as_3843_, size_t v_sz_3844_, size_t v_i_3845_, lean_object* v_b_3846_){
_start:
{
lean_object* v___x_3847_; 
v___x_3847_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_as_3843_, v_sz_3844_, v_i_3845_, v_b_3846_);
return v___x_3847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___boxed(lean_object* v_00_u03b1_3848_, lean_object* v_as_3849_, lean_object* v_sz_3850_, lean_object* v_i_3851_, lean_object* v_b_3852_){
_start:
{
size_t v_sz_boxed_3853_; size_t v_i_boxed_3854_; lean_object* v_res_3855_; 
v_sz_boxed_3853_ = lean_unbox_usize(v_sz_3850_);
lean_dec(v_sz_3850_);
v_i_boxed_3854_ = lean_unbox_usize(v_i_3851_);
lean_dec(v_i_3851_);
v_res_3855_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(v_00_u03b1_3848_, v_as_3849_, v_sz_boxed_3853_, v_i_boxed_3854_, v_b_3852_);
lean_dec_ref(v_as_3849_);
return v_res_3855_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(lean_object* v_00_u03b1_3856_, lean_object* v_snd_3857_, uint64_t v___x_3858_, uint64_t v_fst_3859_, lean_object* v___x_3860_, lean_object* v___x_3861_, lean_object* v_as_3862_, lean_object* v_j_3863_){
_start:
{
lean_object* v___x_3864_; 
v___x_3864_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_snd_3857_, v___x_3858_, v_fst_3859_, v___x_3860_, v___x_3861_, v_as_3862_, v_j_3863_);
return v___x_3864_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___boxed(lean_object* v_00_u03b1_3865_, lean_object* v_snd_3866_, lean_object* v___x_3867_, lean_object* v_fst_3868_, lean_object* v___x_3869_, lean_object* v___x_3870_, lean_object* v_as_3871_, lean_object* v_j_3872_){
_start:
{
uint64_t v___x_3612__boxed_3873_; uint64_t v_fst_3613__boxed_3874_; lean_object* v_res_3875_; 
v___x_3612__boxed_3873_ = lean_unbox_uint64(v___x_3867_);
lean_dec_ref(v___x_3867_);
v_fst_3613__boxed_3874_ = lean_unbox_uint64(v_fst_3868_);
lean_dec_ref(v_fst_3868_);
v_res_3875_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(v_00_u03b1_3865_, v_snd_3866_, v___x_3612__boxed_3873_, v_fst_3613__boxed_3874_, v___x_3869_, v___x_3870_, v_as_3871_, v_j_3872_);
lean_dec_ref(v_as_3871_);
lean_dec(v___x_3870_);
lean_dec(v___x_3869_);
lean_dec_ref(v_snd_3866_);
return v_res_3875_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(lean_object* v_00_u03b1_3876_, lean_object* v___x_3877_, lean_object* v___y_3878_, uint64_t v_fst_3879_, lean_object* v___x_3880_, lean_object* v_inst_3881_, lean_object* v_a_3882_){
_start:
{
lean_object* v___x_3883_; 
v___x_3883_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_3877_, v___y_3878_, v_fst_3879_, v___x_3880_, v_a_3882_);
return v___x_3883_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___boxed(lean_object* v_00_u03b1_3884_, lean_object* v___x_3885_, lean_object* v___y_3886_, lean_object* v_fst_3887_, lean_object* v___x_3888_, lean_object* v_inst_3889_, lean_object* v_a_3890_){
_start:
{
uint64_t v_fst_3630__boxed_3891_; lean_object* v_res_3892_; 
v_fst_3630__boxed_3891_ = lean_unbox_uint64(v_fst_3887_);
lean_dec_ref(v_fst_3887_);
v_res_3892_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(v_00_u03b1_3884_, v___x_3885_, v___y_3886_, v_fst_3630__boxed_3891_, v___x_3888_, v_inst_3889_, v_a_3890_);
lean_dec(v___x_3888_);
lean_dec_ref(v___y_3886_);
lean_dec(v___x_3885_);
return v_res_3892_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(lean_object* v_00_u03b1_3893_, lean_object* v_covered_3894_, lean_object* v_as_3895_, size_t v_sz_3896_, size_t v_i_3897_, lean_object* v_b_3898_){
_start:
{
lean_object* v___x_3899_; 
v___x_3899_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_covered_3894_, v_as_3895_, v_sz_3896_, v_i_3897_, v_b_3898_);
return v___x_3899_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___boxed(lean_object* v_00_u03b1_3900_, lean_object* v_covered_3901_, lean_object* v_as_3902_, lean_object* v_sz_3903_, lean_object* v_i_3904_, lean_object* v_b_3905_){
_start:
{
size_t v_sz_boxed_3906_; size_t v_i_boxed_3907_; lean_object* v_res_3908_; 
v_sz_boxed_3906_ = lean_unbox_usize(v_sz_3903_);
lean_dec(v_sz_3903_);
v_i_boxed_3907_ = lean_unbox_usize(v_i_3904_);
lean_dec(v_i_3904_);
v_res_3908_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(v_00_u03b1_3900_, v_covered_3901_, v_as_3902_, v_sz_boxed_3906_, v_i_boxed_3907_, v_b_3905_);
lean_dec_ref(v_as_3902_);
lean_dec_ref(v_covered_3901_);
return v_res_3908_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(lean_object* v_00_u03b1_3909_, lean_object* v___y_3910_, lean_object* v_covered_3911_, lean_object* v_inst_3912_, lean_object* v_a_3913_){
_start:
{
lean_object* v___x_3914_; 
v___x_3914_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v___y_3910_, v_covered_3911_, v_a_3913_);
return v___x_3914_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___boxed(lean_object* v_00_u03b1_3915_, lean_object* v___y_3916_, lean_object* v_covered_3917_, lean_object* v_inst_3918_, lean_object* v_a_3919_){
_start:
{
lean_object* v_res_3920_; 
v_res_3920_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(v_00_u03b1_3915_, v___y_3916_, v_covered_3917_, v_inst_3918_, v_a_3919_);
lean_dec_ref(v_covered_3917_);
lean_dec_ref(v___y_3916_);
return v_res_3920_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7(lean_object* v_00_u03b1_3921_, lean_object* v_n_3922_, lean_object* v_as_3923_, lean_object* v_lo_3924_, lean_object* v_hi_3925_, lean_object* v_w_3926_, lean_object* v_hlo_3927_, lean_object* v_hhi_3928_){
_start:
{
lean_object* v___x_3929_; 
v___x_3929_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v_n_3922_, v_as_3923_, v_lo_3924_, v_hi_3925_);
return v___x_3929_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___boxed(lean_object* v_00_u03b1_3930_, lean_object* v_n_3931_, lean_object* v_as_3932_, lean_object* v_lo_3933_, lean_object* v_hi_3934_, lean_object* v_w_3935_, lean_object* v_hlo_3936_, lean_object* v_hhi_3937_){
_start:
{
lean_object* v_res_3938_; 
v_res_3938_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7(v_00_u03b1_3930_, v_n_3931_, v_as_3932_, v_lo_3933_, v_hi_3934_, v_w_3935_, v_hlo_3936_, v_hhi_3937_);
lean_dec(v_hi_3934_);
lean_dec(v_n_3931_);
return v_res_3938_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8(lean_object* v_00_u03b1_3939_, lean_object* v_as_3940_, lean_object* v_start_3941_, lean_object* v_stop_3942_){
_start:
{
lean_object* v___x_3943_; 
v___x_3943_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_as_3940_, v_start_3941_, v_stop_3942_);
return v___x_3943_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___boxed(lean_object* v_00_u03b1_3944_, lean_object* v_as_3945_, lean_object* v_start_3946_, lean_object* v_stop_3947_){
_start:
{
lean_object* v_res_3948_; 
v_res_3948_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8(v_00_u03b1_3944_, v_as_3945_, v_start_3946_, v_stop_3947_);
lean_dec(v_stop_3947_);
lean_dec(v_start_3946_);
lean_dec_ref(v_as_3945_);
return v_res_3948_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9(lean_object* v_00_u03b1_3949_, lean_object* v_covered_3950_, lean_object* v_as_3951_, size_t v_sz_3952_, size_t v_i_3953_, uint64_t v_b_3954_){
_start:
{
uint64_t v___x_3955_; 
v___x_3955_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(v_covered_3950_, v_as_3951_, v_sz_3952_, v_i_3953_, v_b_3954_);
return v___x_3955_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___boxed(lean_object* v_00_u03b1_3956_, lean_object* v_covered_3957_, lean_object* v_as_3958_, lean_object* v_sz_3959_, lean_object* v_i_3960_, lean_object* v_b_3961_){
_start:
{
size_t v_sz_boxed_3962_; size_t v_i_boxed_3963_; uint64_t v_b_boxed_3964_; uint64_t v_res_3965_; lean_object* v_r_3966_; 
v_sz_boxed_3962_ = lean_unbox_usize(v_sz_3959_);
lean_dec(v_sz_3959_);
v_i_boxed_3963_ = lean_unbox_usize(v_i_3960_);
lean_dec(v_i_3960_);
v_b_boxed_3964_ = lean_unbox_uint64(v_b_3961_);
lean_dec_ref(v_b_3961_);
v_res_3965_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9(v_00_u03b1_3956_, v_covered_3957_, v_as_3958_, v_sz_boxed_3962_, v_i_boxed_3963_, v_b_boxed_3964_);
lean_dec_ref(v_as_3958_);
lean_dec_ref(v_covered_3957_);
v_r_3966_ = lean_box_uint64(v_res_3965_);
return v_r_3966_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7(lean_object* v_00_u03b1_3967_, lean_object* v_n_3968_, lean_object* v_lo_3969_, lean_object* v_hi_3970_, lean_object* v_hhi_3971_, lean_object* v_pivot_3972_, lean_object* v_as_3973_, lean_object* v_i_3974_, lean_object* v_k_3975_, lean_object* v_ilo_3976_, lean_object* v_ik_3977_, lean_object* v_w_3978_){
_start:
{
lean_object* v___x_3979_; 
v___x_3979_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(v_hi_3970_, v_pivot_3972_, v_as_3973_, v_i_3974_, v_k_3975_);
return v___x_3979_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___boxed(lean_object* v_00_u03b1_3980_, lean_object* v_n_3981_, lean_object* v_lo_3982_, lean_object* v_hi_3983_, lean_object* v_hhi_3984_, lean_object* v_pivot_3985_, lean_object* v_as_3986_, lean_object* v_i_3987_, lean_object* v_k_3988_, lean_object* v_ilo_3989_, lean_object* v_ik_3990_, lean_object* v_w_3991_){
_start:
{
lean_object* v_res_3992_; 
v_res_3992_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7(v_00_u03b1_3980_, v_n_3981_, v_lo_3982_, v_hi_3983_, v_hhi_3984_, v_pivot_3985_, v_as_3986_, v_i_3987_, v_k_3988_, v_ilo_3989_, v_ik_3990_, v_w_3991_);
lean_dec_ref(v_pivot_3985_);
lean_dec(v_hi_3983_);
lean_dec(v_lo_3982_);
lean_dec(v_n_3981_);
return v_res_3992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9(lean_object* v_00_u03b1_3993_, lean_object* v_as_3994_, size_t v_i_3995_, size_t v_stop_3996_, lean_object* v_b_3997_){
_start:
{
lean_object* v___x_3998_; 
v___x_3998_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(v_as_3994_, v_i_3995_, v_stop_3996_, v_b_3997_);
return v___x_3998_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___boxed(lean_object* v_00_u03b1_3999_, lean_object* v_as_4000_, lean_object* v_i_4001_, lean_object* v_stop_4002_, lean_object* v_b_4003_){
_start:
{
size_t v_i_boxed_4004_; size_t v_stop_boxed_4005_; lean_object* v_res_4006_; 
v_i_boxed_4004_ = lean_unbox_usize(v_i_4001_);
lean_dec(v_i_4001_);
v_stop_boxed_4005_ = lean_unbox_usize(v_stop_4002_);
lean_dec(v_stop_4002_);
v_res_4006_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9(v_00_u03b1_3999_, v_as_4000_, v_i_boxed_4004_, v_stop_boxed_4005_, v_b_4003_);
lean_dec_ref(v_as_4000_);
return v_res_4006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDuplicates___redArg(lean_object* v_trees_4009_, lean_object* v_covered_4010_){
_start:
{
lean_object* v___x_4011_; lean_object* v___x_4012_; uint8_t v___x_4013_; 
v___x_4011_ = lean_array_get_size(v_trees_4009_);
v___x_4012_ = lean_unsigned_to_nat(2u);
v___x_4013_ = lean_nat_dec_lt(v___x_4011_, v___x_4012_);
if (v___x_4013_ == 0)
{
lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; 
v___x_4014_ = lean_box(0);
v___x_4015_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDuplicates___redArg___closed__0));
v___x_4016_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_4010_, v___x_4014_, v_trees_4009_, v___x_4015_);
return v___x_4016_;
}
else
{
lean_object* v___x_4017_; 
v___x_4017_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDuplicates___redArg___closed__0));
return v___x_4017_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDuplicates___redArg___boxed(lean_object* v_trees_4018_, lean_object* v_covered_4019_){
_start:
{
lean_object* v_res_4020_; 
v_res_4020_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDuplicates___redArg(v_trees_4018_, v_covered_4019_);
lean_dec_ref(v_covered_4019_);
lean_dec_ref(v_trees_4018_);
return v_res_4020_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDuplicates(lean_object* v_00_u03b1_4021_, lean_object* v_trees_4022_, lean_object* v_covered_4023_){
_start:
{
lean_object* v___x_4024_; 
v___x_4024_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDuplicates___redArg(v_trees_4022_, v_covered_4023_);
return v___x_4024_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDuplicates___boxed(lean_object* v_00_u03b1_4025_, lean_object* v_trees_4026_, lean_object* v_covered_4027_){
_start:
{
lean_object* v_res_4028_; 
v_res_4028_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDuplicates(v_00_u03b1_4025_, v_trees_4026_, v_covered_4027_);
lean_dec_ref(v_covered_4027_);
lean_dec_ref(v_trees_4026_);
return v_res_4028_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1(lean_object* v_cands_4029_, lean_object* v___x_4030_, lean_object* v_resolve_4031_, lean_object* v_x_4032_){
_start:
{
lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; 
v___x_4033_ = lean_unsigned_to_nat(0u);
v___x_4034_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_cands_4029_, v___x_4033_, v___x_4030_);
v___x_4035_ = lean_apply_1(v_resolve_4031_, v___x_4034_);
return v___x_4035_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1___boxed(lean_object* v_cands_4036_, lean_object* v___x_4037_, lean_object* v_resolve_4038_, lean_object* v_x_4039_){
_start:
{
lean_object* v_res_4040_; 
v_res_4040_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1(v_cands_4036_, v___x_4037_, v_resolve_4038_, v_x_4039_);
lean_dec(v___x_4037_);
lean_dec_ref(v_cands_4036_);
return v_res_4040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed(lean_object* v_resolve_4044_, lean_object* v_cands_4045_, lean_object* v_x_4046_){
_start:
{
lean_object* v_res_4047_; 
v_res_4047_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(v_resolve_4044_, v_cands_4045_, v_x_4046_);
lean_dec_ref(v_cands_4045_);
return v_res_4047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(lean_object* v_resolve_4048_, lean_object* v_key_4049_, lean_object* v_cands_4050_){
_start:
{
lean_object* v___x_4051_; lean_object* v___x_4052_; uint8_t v___x_4053_; 
v___x_4051_ = lean_array_get_size(v_cands_4050_);
v___x_4052_ = lean_unsigned_to_nat(1u);
v___x_4053_ = lean_nat_dec_eq(v___x_4051_, v___x_4052_);
if (v___x_4053_ == 0)
{
lean_object* v___f_4054_; lean_object* v___f_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; 
lean_inc_ref(v_cands_4050_);
lean_inc_ref(v_resolve_4048_);
v___f_4054_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4054_, 0, v_resolve_4048_);
lean_closure_set(v___f_4054_, 1, v_cands_4050_);
v___f_4055_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_4055_, 0, v_cands_4050_);
lean_closure_set(v___f_4055_, 1, v___x_4051_);
lean_closure_set(v___f_4055_, 2, v_resolve_4048_);
v___x_4056_ = lean_mk_thunk(v___f_4055_);
v___x_4057_ = lean_mk_thunk(v___f_4054_);
v___x_4058_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_4058_, 0, v_key_4049_);
lean_ctor_set(v___x_4058_, 1, v___x_4056_);
lean_ctor_set(v___x_4058_, 2, v___x_4057_);
return v___x_4058_;
}
else
{
lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v_fst_4062_; lean_object* v_snd_4063_; lean_object* v___x_4065_; uint8_t v_isShared_4066_; uint8_t v_isSharedCheck_4070_; 
lean_dec(v_key_4049_);
lean_dec_ref(v_resolve_4048_);
v___x_4059_ = lean_unsigned_to_nat(0u);
v___x_4060_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_4061_ = lean_array_get(v___x_4060_, v_cands_4050_, v___x_4059_);
lean_dec_ref(v_cands_4050_);
v_fst_4062_ = lean_ctor_get(v___x_4061_, 0);
v_snd_4063_ = lean_ctor_get(v___x_4061_, 1);
v_isSharedCheck_4070_ = !lean_is_exclusive(v___x_4061_);
if (v_isSharedCheck_4070_ == 0)
{
v___x_4065_ = v___x_4061_;
v_isShared_4066_ = v_isSharedCheck_4070_;
goto v_resetjp_4064_;
}
else
{
lean_inc(v_snd_4063_);
lean_inc(v_fst_4062_);
lean_dec(v___x_4061_);
v___x_4065_ = lean_box(0);
v_isShared_4066_ = v_isSharedCheck_4070_;
goto v_resetjp_4064_;
}
v_resetjp_4064_:
{
lean_object* v___x_4068_; 
if (v_isShared_4066_ == 0)
{
v___x_4068_ = v___x_4065_;
goto v_reusejp_4067_;
}
else
{
lean_object* v_reuseFailAlloc_4069_; 
v_reuseFailAlloc_4069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4069_, 0, v_fst_4062_);
lean_ctor_set(v_reuseFailAlloc_4069_, 1, v_snd_4063_);
v___x_4068_ = v_reuseFailAlloc_4069_;
goto v_reusejp_4067_;
}
v_reusejp_4067_:
{
return v___x_4068_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(lean_object* v_resolve_4071_, lean_object* v_as_4072_, size_t v_sz_4073_, size_t v_i_4074_, lean_object* v_b_4075_){
_start:
{
lean_object* v_a_4077_; uint8_t v___x_4081_; 
v___x_4081_ = lean_usize_dec_lt(v_i_4074_, v_sz_4073_);
if (v___x_4081_ == 0)
{
lean_dec_ref(v_resolve_4071_);
return v_b_4075_;
}
else
{
lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v_a_4085_; lean_object* v___x_4086_; uint8_t v___x_4087_; 
v___x_4082_ = lean_unsigned_to_nat(1u);
v___x_4083_ = lean_unsigned_to_nat(0u);
v___x_4084_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v_a_4085_ = lean_array_uget_borrowed(v_as_4072_, v_i_4074_);
v___x_4086_ = lean_array_get_size(v_a_4085_);
v___x_4087_ = lean_nat_dec_eq(v___x_4086_, v___x_4082_);
if (v___x_4087_ == 0)
{
lean_object* v___x_4088_; lean_object* v_snd_4089_; lean_object* v_key_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; 
v___x_4088_ = lean_array_get_borrowed(v___x_4084_, v_a_4085_, v___x_4083_);
v_snd_4089_ = lean_ctor_get(v___x_4088_, 1);
v_key_4090_ = lean_ctor_get(v_snd_4089_, 0);
lean_inc(v_a_4085_);
lean_inc(v_key_4090_);
lean_inc_ref(v_resolve_4071_);
v___x_4091_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4071_, v_key_4090_, v_a_4085_);
v___x_4092_ = lean_array_push(v_b_4075_, v___x_4091_);
v_a_4077_ = v___x_4092_;
goto v___jp_4076_;
}
else
{
lean_object* v___x_4093_; lean_object* v_fst_4094_; lean_object* v_snd_4095_; lean_object* v___x_4097_; uint8_t v_isShared_4098_; uint8_t v_isSharedCheck_4103_; 
v___x_4093_ = lean_array_get(v___x_4084_, v_a_4085_, v___x_4083_);
v_fst_4094_ = lean_ctor_get(v___x_4093_, 0);
v_snd_4095_ = lean_ctor_get(v___x_4093_, 1);
v_isSharedCheck_4103_ = !lean_is_exclusive(v___x_4093_);
if (v_isSharedCheck_4103_ == 0)
{
v___x_4097_ = v___x_4093_;
v_isShared_4098_ = v_isSharedCheck_4103_;
goto v_resetjp_4096_;
}
else
{
lean_inc(v_snd_4095_);
lean_inc(v_fst_4094_);
lean_dec(v___x_4093_);
v___x_4097_ = lean_box(0);
v_isShared_4098_ = v_isSharedCheck_4103_;
goto v_resetjp_4096_;
}
v_resetjp_4096_:
{
lean_object* v___x_4100_; 
if (v_isShared_4098_ == 0)
{
v___x_4100_ = v___x_4097_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4102_; 
v_reuseFailAlloc_4102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4102_, 0, v_fst_4094_);
lean_ctor_set(v_reuseFailAlloc_4102_, 1, v_snd_4095_);
v___x_4100_ = v_reuseFailAlloc_4102_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
lean_object* v___x_4101_; 
v___x_4101_ = lean_array_push(v_b_4075_, v___x_4100_);
v_a_4077_ = v___x_4101_;
goto v___jp_4076_;
}
}
}
}
v___jp_4076_:
{
size_t v___x_4078_; size_t v___x_4079_; 
v___x_4078_ = ((size_t)1ULL);
v___x_4079_ = lean_usize_add(v_i_4074_, v___x_4078_);
v_i_4074_ = v___x_4079_;
v_b_4075_ = v_a_4077_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(lean_object* v_resolve_4104_, lean_object* v_as_4105_, size_t v_sz_4106_, size_t v_i_4107_, lean_object* v_b_4108_){
_start:
{
lean_object* v_a_4110_; uint8_t v___x_4114_; 
v___x_4114_ = lean_usize_dec_lt(v_i_4107_, v_sz_4106_);
if (v___x_4114_ == 0)
{
lean_dec_ref(v_resolve_4104_);
return v_b_4108_;
}
else
{
lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v_a_4118_; lean_object* v___x_4119_; uint8_t v___x_4120_; 
v___x_4115_ = lean_unsigned_to_nat(1u);
v___x_4116_ = lean_unsigned_to_nat(0u);
v___x_4117_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v_a_4118_ = lean_array_uget_borrowed(v_as_4105_, v_i_4107_);
v___x_4119_ = lean_array_get_size(v_a_4118_);
v___x_4120_ = lean_nat_dec_eq(v___x_4119_, v___x_4115_);
if (v___x_4120_ == 0)
{
lean_object* v___x_4121_; lean_object* v_snd_4122_; lean_object* v_key_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; 
v___x_4121_ = lean_array_get_borrowed(v___x_4117_, v_a_4118_, v___x_4116_);
v_snd_4122_ = lean_ctor_get(v___x_4121_, 1);
v_key_4123_ = lean_ctor_get(v_snd_4122_, 0);
lean_inc(v_a_4118_);
lean_inc(v_key_4123_);
lean_inc_ref(v_resolve_4104_);
v___x_4124_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4104_, v_key_4123_, v_a_4118_);
v___x_4125_ = lean_array_push(v_b_4108_, v___x_4124_);
v_a_4110_ = v___x_4125_;
goto v___jp_4109_;
}
else
{
lean_object* v___x_4126_; lean_object* v_fst_4127_; lean_object* v_snd_4128_; lean_object* v___x_4130_; uint8_t v_isShared_4131_; uint8_t v_isSharedCheck_4136_; 
v___x_4126_ = lean_array_get(v___x_4117_, v_a_4118_, v___x_4116_);
v_fst_4127_ = lean_ctor_get(v___x_4126_, 0);
v_snd_4128_ = lean_ctor_get(v___x_4126_, 1);
v_isSharedCheck_4136_ = !lean_is_exclusive(v___x_4126_);
if (v_isSharedCheck_4136_ == 0)
{
v___x_4130_ = v___x_4126_;
v_isShared_4131_ = v_isSharedCheck_4136_;
goto v_resetjp_4129_;
}
else
{
lean_inc(v_snd_4128_);
lean_inc(v_fst_4127_);
lean_dec(v___x_4126_);
v___x_4130_ = lean_box(0);
v_isShared_4131_ = v_isSharedCheck_4136_;
goto v_resetjp_4129_;
}
v_resetjp_4129_:
{
lean_object* v___x_4133_; 
if (v_isShared_4131_ == 0)
{
v___x_4133_ = v___x_4130_;
goto v_reusejp_4132_;
}
else
{
lean_object* v_reuseFailAlloc_4135_; 
v_reuseFailAlloc_4135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4135_, 0, v_fst_4127_);
lean_ctor_set(v_reuseFailAlloc_4135_, 1, v_snd_4128_);
v___x_4133_ = v_reuseFailAlloc_4135_;
goto v_reusejp_4132_;
}
v_reusejp_4132_:
{
lean_object* v___x_4134_; 
v___x_4134_ = lean_array_push(v_b_4108_, v___x_4133_);
v_a_4110_ = v___x_4134_;
goto v___jp_4109_;
}
}
}
}
v___jp_4109_:
{
size_t v___x_4111_; size_t v___x_4112_; lean_object* v___x_4113_; 
v___x_4111_ = ((size_t)1ULL);
v___x_4112_ = lean_usize_add(v_i_4107_, v___x_4111_);
v___x_4113_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_4104_, v_as_4105_, v_sz_4106_, v___x_4112_, v_a_4110_);
return v___x_4113_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(lean_object* v___y_4137_, lean_object* v_resolve_4138_, lean_object* v_a_4139_){
_start:
{
lean_object* v_fst_4140_; lean_object* v_snd_4141_; lean_object* v___x_4143_; uint8_t v_isShared_4144_; uint8_t v_isSharedCheck_4201_; 
v_fst_4140_ = lean_ctor_get(v_a_4139_, 0);
v_snd_4141_ = lean_ctor_get(v_a_4139_, 1);
v_isSharedCheck_4201_ = !lean_is_exclusive(v_a_4139_);
if (v_isSharedCheck_4201_ == 0)
{
v___x_4143_ = v_a_4139_;
v_isShared_4144_ = v_isSharedCheck_4201_;
goto v_resetjp_4142_;
}
else
{
lean_inc(v_snd_4141_);
lean_inc(v_fst_4140_);
lean_dec(v_a_4139_);
v___x_4143_ = lean_box(0);
v_isShared_4144_ = v_isSharedCheck_4201_;
goto v_resetjp_4142_;
}
v_resetjp_4142_:
{
lean_object* v___x_4145_; uint8_t v___x_4146_; 
v___x_4145_ = lean_array_get_size(v___y_4137_);
v___x_4146_ = lean_nat_dec_lt(v_snd_4141_, v___x_4145_);
if (v___x_4146_ == 0)
{
lean_object* v___x_4148_; 
lean_dec_ref(v_resolve_4138_);
if (v_isShared_4144_ == 0)
{
v___x_4148_ = v___x_4143_;
goto v_reusejp_4147_;
}
else
{
lean_object* v_reuseFailAlloc_4149_; 
v_reuseFailAlloc_4149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4149_, 0, v_fst_4140_);
lean_ctor_set(v_reuseFailAlloc_4149_, 1, v_snd_4141_);
v___x_4148_ = v_reuseFailAlloc_4149_;
goto v_reusejp_4147_;
}
v_reusejp_4147_:
{
return v___x_4148_;
}
}
else
{
lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v_snd_4152_; lean_object* v_fst_4153_; lean_object* v___x_4155_; uint8_t v_isShared_4156_; uint8_t v_isSharedCheck_4200_; 
lean_del_object(v___x_4143_);
v___x_4150_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v___x_4151_ = lean_array_get(v___x_4150_, v___y_4137_, v_snd_4141_);
v_snd_4152_ = lean_ctor_get(v___x_4151_, 1);
v_fst_4153_ = lean_ctor_get(v___x_4151_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v___x_4151_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4155_ = v___x_4151_;
v_isShared_4156_ = v_isSharedCheck_4200_;
goto v_resetjp_4154_;
}
else
{
lean_inc(v_snd_4152_);
lean_inc(v_fst_4153_);
lean_dec(v___x_4151_);
v___x_4155_ = lean_box(0);
v_isShared_4156_ = v_isSharedCheck_4200_;
goto v_resetjp_4154_;
}
v_resetjp_4154_:
{
lean_object* v_fst_4157_; lean_object* v_snd_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; uint8_t v___x_4168_; 
v_fst_4157_ = lean_ctor_get(v_snd_4152_, 0);
v_snd_4158_ = lean_ctor_get(v_snd_4152_, 1);
v___x_4159_ = lean_unsigned_to_nat(1u);
v___x_4160_ = lean_nat_add(v_snd_4141_, v___x_4159_);
lean_dec(v_snd_4141_);
v___x_4168_ = lean_nat_dec_eq(v___x_4160_, v___x_4145_);
if (v___x_4168_ == 0)
{
lean_object* v___x_4169_; lean_object* v_fst_4170_; lean_object* v___x_4172_; uint8_t v_isShared_4173_; uint8_t v_isSharedCheck_4198_; 
v___x_4169_ = lean_array_get(v___x_4150_, v___y_4137_, v___x_4160_);
v_fst_4170_ = lean_ctor_get(v___x_4169_, 0);
v_isSharedCheck_4198_ = !lean_is_exclusive(v___x_4169_);
if (v_isSharedCheck_4198_ == 0)
{
lean_object* v_unused_4199_; 
v_unused_4199_ = lean_ctor_get(v___x_4169_, 1);
lean_dec(v_unused_4199_);
v___x_4172_ = v___x_4169_;
v_isShared_4173_ = v_isSharedCheck_4198_;
goto v_resetjp_4171_;
}
else
{
lean_inc(v_fst_4170_);
lean_dec(v___x_4169_);
v___x_4172_ = lean_box(0);
v_isShared_4173_ = v_isSharedCheck_4198_;
goto v_resetjp_4171_;
}
v_resetjp_4171_:
{
uint64_t v___x_4174_; uint64_t v___x_4175_; uint8_t v___x_4176_; 
v___x_4174_ = lean_unbox_uint64(v_fst_4170_);
lean_dec(v_fst_4170_);
v___x_4175_ = lean_unbox_uint64(v_fst_4153_);
v___x_4176_ = lean_uint64_dec_eq(v___x_4174_, v___x_4175_);
if (v___x_4176_ == 0)
{
lean_inc(v_snd_4158_);
lean_inc(v_fst_4157_);
lean_del_object(v___x_4172_);
lean_dec(v_fst_4153_);
lean_dec(v_snd_4152_);
goto v___jp_4161_;
}
else
{
lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4181_; 
lean_del_object(v___x_4155_);
v___x_4177_ = lean_mk_empty_array_with_capacity(v___x_4159_);
lean_inc_ref(v___x_4177_);
v___x_4178_ = lean_array_push(v___x_4177_, v_snd_4152_);
v___x_4179_ = lean_array_push(v___x_4177_, v___x_4178_);
lean_inc(v___x_4160_);
if (v_isShared_4173_ == 0)
{
lean_ctor_set(v___x_4172_, 1, v___x_4179_);
lean_ctor_set(v___x_4172_, 0, v___x_4160_);
v___x_4181_ = v___x_4172_;
goto v_reusejp_4180_;
}
else
{
lean_object* v_reuseFailAlloc_4197_; 
v_reuseFailAlloc_4197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4197_, 0, v___x_4160_);
lean_ctor_set(v_reuseFailAlloc_4197_, 1, v___x_4179_);
v___x_4181_ = v_reuseFailAlloc_4197_;
goto v_reusejp_4180_;
}
v_reusejp_4180_:
{
uint64_t v___x_4182_; lean_object* v___x_4183_; lean_object* v_fst_4184_; lean_object* v_snd_4185_; lean_object* v___x_4187_; uint8_t v_isShared_4188_; uint8_t v_isSharedCheck_4196_; 
v___x_4182_ = lean_unbox_uint64(v_fst_4153_);
lean_dec(v_fst_4153_);
v___x_4183_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_4145_, v___y_4137_, v___x_4182_, v___x_4160_, v___x_4181_);
lean_dec(v___x_4160_);
v_fst_4184_ = lean_ctor_get(v___x_4183_, 0);
v_snd_4185_ = lean_ctor_get(v___x_4183_, 1);
v_isSharedCheck_4196_ = !lean_is_exclusive(v___x_4183_);
if (v_isSharedCheck_4196_ == 0)
{
v___x_4187_ = v___x_4183_;
v_isShared_4188_ = v_isSharedCheck_4196_;
goto v_resetjp_4186_;
}
else
{
lean_inc(v_snd_4185_);
lean_inc(v_fst_4184_);
lean_dec(v___x_4183_);
v___x_4187_ = lean_box(0);
v_isShared_4188_ = v_isSharedCheck_4196_;
goto v_resetjp_4186_;
}
v_resetjp_4186_:
{
size_t v___x_4189_; size_t v_sz_4190_; lean_object* v___x_4191_; lean_object* v___x_4193_; 
v___x_4189_ = ((size_t)0ULL);
v_sz_4190_ = lean_array_size(v_snd_4185_);
lean_inc_ref(v_resolve_4138_);
v___x_4191_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_4138_, v_snd_4185_, v_sz_4190_, v___x_4189_, v_fst_4140_);
lean_dec(v_snd_4185_);
if (v_isShared_4188_ == 0)
{
lean_ctor_set(v___x_4187_, 1, v_fst_4184_);
lean_ctor_set(v___x_4187_, 0, v___x_4191_);
v___x_4193_ = v___x_4187_;
goto v_reusejp_4192_;
}
else
{
lean_object* v_reuseFailAlloc_4195_; 
v_reuseFailAlloc_4195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4195_, 0, v___x_4191_);
lean_ctor_set(v_reuseFailAlloc_4195_, 1, v_fst_4184_);
v___x_4193_ = v_reuseFailAlloc_4195_;
goto v_reusejp_4192_;
}
v_reusejp_4192_:
{
v_a_4139_ = v___x_4193_;
goto _start;
}
}
}
}
}
}
else
{
lean_inc(v_snd_4158_);
lean_inc(v_fst_4157_);
lean_dec(v_fst_4153_);
lean_dec(v_snd_4152_);
goto v___jp_4161_;
}
v___jp_4161_:
{
lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4165_; 
v___x_4162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4162_, 0, v_fst_4157_);
lean_ctor_set(v___x_4162_, 1, v_snd_4158_);
v___x_4163_ = lean_array_push(v_fst_4140_, v___x_4162_);
if (v_isShared_4156_ == 0)
{
lean_ctor_set(v___x_4155_, 1, v___x_4160_);
lean_ctor_set(v___x_4155_, 0, v___x_4163_);
v___x_4165_ = v___x_4155_;
goto v_reusejp_4164_;
}
else
{
lean_object* v_reuseFailAlloc_4167_; 
v_reuseFailAlloc_4167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4167_, 0, v___x_4163_);
lean_ctor_set(v_reuseFailAlloc_4167_, 1, v___x_4160_);
v___x_4165_ = v_reuseFailAlloc_4167_;
goto v_reusejp_4164_;
}
v_reusejp_4164_:
{
v_a_4139_ = v___x_4165_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(lean_object* v___y_4202_, lean_object* v_resolve_4203_, lean_object* v_a_4204_){
_start:
{
lean_object* v_fst_4205_; lean_object* v_snd_4206_; lean_object* v___x_4208_; uint8_t v_isShared_4209_; uint8_t v_isSharedCheck_4266_; 
v_fst_4205_ = lean_ctor_get(v_a_4204_, 0);
v_snd_4206_ = lean_ctor_get(v_a_4204_, 1);
v_isSharedCheck_4266_ = !lean_is_exclusive(v_a_4204_);
if (v_isSharedCheck_4266_ == 0)
{
v___x_4208_ = v_a_4204_;
v_isShared_4209_ = v_isSharedCheck_4266_;
goto v_resetjp_4207_;
}
else
{
lean_inc(v_snd_4206_);
lean_inc(v_fst_4205_);
lean_dec(v_a_4204_);
v___x_4208_ = lean_box(0);
v_isShared_4209_ = v_isSharedCheck_4266_;
goto v_resetjp_4207_;
}
v_resetjp_4207_:
{
lean_object* v___x_4210_; uint8_t v___x_4211_; 
v___x_4210_ = lean_array_get_size(v___y_4202_);
v___x_4211_ = lean_nat_dec_lt(v_snd_4206_, v___x_4210_);
if (v___x_4211_ == 0)
{
lean_object* v___x_4213_; 
lean_dec_ref(v_resolve_4203_);
if (v_isShared_4209_ == 0)
{
v___x_4213_ = v___x_4208_;
goto v_reusejp_4212_;
}
else
{
lean_object* v_reuseFailAlloc_4214_; 
v_reuseFailAlloc_4214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4214_, 0, v_fst_4205_);
lean_ctor_set(v_reuseFailAlloc_4214_, 1, v_snd_4206_);
v___x_4213_ = v_reuseFailAlloc_4214_;
goto v_reusejp_4212_;
}
v_reusejp_4212_:
{
return v___x_4213_;
}
}
else
{
lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v_snd_4217_; lean_object* v_fst_4218_; lean_object* v___x_4220_; uint8_t v_isShared_4221_; uint8_t v_isSharedCheck_4265_; 
lean_del_object(v___x_4208_);
v___x_4215_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v___x_4216_ = lean_array_get(v___x_4215_, v___y_4202_, v_snd_4206_);
v_snd_4217_ = lean_ctor_get(v___x_4216_, 1);
v_fst_4218_ = lean_ctor_get(v___x_4216_, 0);
v_isSharedCheck_4265_ = !lean_is_exclusive(v___x_4216_);
if (v_isSharedCheck_4265_ == 0)
{
v___x_4220_ = v___x_4216_;
v_isShared_4221_ = v_isSharedCheck_4265_;
goto v_resetjp_4219_;
}
else
{
lean_inc(v_snd_4217_);
lean_inc(v_fst_4218_);
lean_dec(v___x_4216_);
v___x_4220_ = lean_box(0);
v_isShared_4221_ = v_isSharedCheck_4265_;
goto v_resetjp_4219_;
}
v_resetjp_4219_:
{
lean_object* v_fst_4222_; lean_object* v_snd_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; uint8_t v___x_4233_; 
v_fst_4222_ = lean_ctor_get(v_snd_4217_, 0);
v_snd_4223_ = lean_ctor_get(v_snd_4217_, 1);
v___x_4224_ = lean_unsigned_to_nat(1u);
v___x_4225_ = lean_nat_add(v_snd_4206_, v___x_4224_);
lean_dec(v_snd_4206_);
v___x_4233_ = lean_nat_dec_eq(v___x_4225_, v___x_4210_);
if (v___x_4233_ == 0)
{
lean_object* v___x_4234_; lean_object* v_fst_4235_; lean_object* v___x_4237_; uint8_t v_isShared_4238_; uint8_t v_isSharedCheck_4263_; 
v___x_4234_ = lean_array_get(v___x_4215_, v___y_4202_, v___x_4225_);
v_fst_4235_ = lean_ctor_get(v___x_4234_, 0);
v_isSharedCheck_4263_ = !lean_is_exclusive(v___x_4234_);
if (v_isSharedCheck_4263_ == 0)
{
lean_object* v_unused_4264_; 
v_unused_4264_ = lean_ctor_get(v___x_4234_, 1);
lean_dec(v_unused_4264_);
v___x_4237_ = v___x_4234_;
v_isShared_4238_ = v_isSharedCheck_4263_;
goto v_resetjp_4236_;
}
else
{
lean_inc(v_fst_4235_);
lean_dec(v___x_4234_);
v___x_4237_ = lean_box(0);
v_isShared_4238_ = v_isSharedCheck_4263_;
goto v_resetjp_4236_;
}
v_resetjp_4236_:
{
uint64_t v___x_4239_; uint64_t v___x_4240_; uint8_t v___x_4241_; 
v___x_4239_ = lean_unbox_uint64(v_fst_4235_);
lean_dec(v_fst_4235_);
v___x_4240_ = lean_unbox_uint64(v_fst_4218_);
v___x_4241_ = lean_uint64_dec_eq(v___x_4239_, v___x_4240_);
if (v___x_4241_ == 0)
{
lean_inc(v_snd_4223_);
lean_inc(v_fst_4222_);
lean_del_object(v___x_4237_);
lean_dec(v_fst_4218_);
lean_dec(v_snd_4217_);
goto v___jp_4226_;
}
else
{
lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4246_; 
lean_del_object(v___x_4220_);
v___x_4242_ = lean_mk_empty_array_with_capacity(v___x_4224_);
lean_inc_ref(v___x_4242_);
v___x_4243_ = lean_array_push(v___x_4242_, v_snd_4217_);
v___x_4244_ = lean_array_push(v___x_4242_, v___x_4243_);
lean_inc(v___x_4225_);
if (v_isShared_4238_ == 0)
{
lean_ctor_set(v___x_4237_, 1, v___x_4244_);
lean_ctor_set(v___x_4237_, 0, v___x_4225_);
v___x_4246_ = v___x_4237_;
goto v_reusejp_4245_;
}
else
{
lean_object* v_reuseFailAlloc_4262_; 
v_reuseFailAlloc_4262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4262_, 0, v___x_4225_);
lean_ctor_set(v_reuseFailAlloc_4262_, 1, v___x_4244_);
v___x_4246_ = v_reuseFailAlloc_4262_;
goto v_reusejp_4245_;
}
v_reusejp_4245_:
{
uint64_t v___x_4247_; lean_object* v___x_4248_; lean_object* v_fst_4249_; lean_object* v_snd_4250_; lean_object* v___x_4252_; uint8_t v_isShared_4253_; uint8_t v_isSharedCheck_4261_; 
v___x_4247_ = lean_unbox_uint64(v_fst_4218_);
lean_dec(v_fst_4218_);
v___x_4248_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_4210_, v___y_4202_, v___x_4247_, v___x_4225_, v___x_4246_);
lean_dec(v___x_4225_);
v_fst_4249_ = lean_ctor_get(v___x_4248_, 0);
v_snd_4250_ = lean_ctor_get(v___x_4248_, 1);
v_isSharedCheck_4261_ = !lean_is_exclusive(v___x_4248_);
if (v_isSharedCheck_4261_ == 0)
{
v___x_4252_ = v___x_4248_;
v_isShared_4253_ = v_isSharedCheck_4261_;
goto v_resetjp_4251_;
}
else
{
lean_inc(v_snd_4250_);
lean_inc(v_fst_4249_);
lean_dec(v___x_4248_);
v___x_4252_ = lean_box(0);
v_isShared_4253_ = v_isSharedCheck_4261_;
goto v_resetjp_4251_;
}
v_resetjp_4251_:
{
size_t v___x_4254_; size_t v_sz_4255_; lean_object* v___x_4256_; lean_object* v___x_4258_; 
v___x_4254_ = ((size_t)0ULL);
v_sz_4255_ = lean_array_size(v_snd_4250_);
lean_inc_ref(v_resolve_4203_);
v___x_4256_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_4203_, v_snd_4250_, v_sz_4255_, v___x_4254_, v_fst_4205_);
lean_dec(v_snd_4250_);
if (v_isShared_4253_ == 0)
{
lean_ctor_set(v___x_4252_, 1, v_fst_4249_);
lean_ctor_set(v___x_4252_, 0, v___x_4256_);
v___x_4258_ = v___x_4252_;
goto v_reusejp_4257_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v___x_4256_);
lean_ctor_set(v_reuseFailAlloc_4260_, 1, v_fst_4249_);
v___x_4258_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4257_;
}
v_reusejp_4257_:
{
lean_object* v___x_4259_; 
v___x_4259_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(v___y_4202_, v_resolve_4203_, v___x_4258_);
return v___x_4259_;
}
}
}
}
}
}
else
{
lean_inc(v_snd_4223_);
lean_inc(v_fst_4222_);
lean_dec(v_fst_4218_);
lean_dec(v_snd_4217_);
goto v___jp_4226_;
}
v___jp_4226_:
{
lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4230_; 
v___x_4227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4227_, 0, v_fst_4222_);
lean_ctor_set(v___x_4227_, 1, v_snd_4223_);
v___x_4228_ = lean_array_push(v_fst_4205_, v___x_4227_);
if (v_isShared_4221_ == 0)
{
lean_ctor_set(v___x_4220_, 1, v___x_4225_);
lean_ctor_set(v___x_4220_, 0, v___x_4228_);
v___x_4230_ = v___x_4220_;
goto v_reusejp_4229_;
}
else
{
lean_object* v_reuseFailAlloc_4232_; 
v_reuseFailAlloc_4232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4232_, 0, v___x_4228_);
lean_ctor_set(v_reuseFailAlloc_4232_, 1, v___x_4225_);
v___x_4230_ = v_reuseFailAlloc_4232_;
goto v_reusejp_4229_;
}
v_reusejp_4229_:
{
lean_object* v___x_4231_; 
v___x_4231_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(v___y_4202_, v_resolve_4203_, v___x_4230_);
return v___x_4231_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(lean_object* v_resolve_4267_, lean_object* v_cands_4268_){
_start:
{
lean_object* v___x_4269_; lean_object* v___y_4271_; size_t v_sz_4284_; size_t v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___y_4291_; lean_object* v___y_4292_; uint8_t v___x_4294_; 
v___x_4269_ = lean_unsigned_to_nat(0u);
v_sz_4284_ = lean_array_size(v_cands_4268_);
v___x_4285_ = ((size_t)0ULL);
v___x_4286_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_cands_4268_, v_sz_4284_, v___x_4285_, v___x_4269_);
v___x_4287_ = lean_mk_empty_array_with_capacity(v___x_4286_);
lean_dec(v___x_4286_);
v___x_4288_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_cands_4268_, v_sz_4284_, v___x_4285_, v___x_4287_);
v___x_4289_ = lean_array_get_size(v___x_4288_);
v___x_4294_ = lean_nat_dec_eq(v___x_4289_, v___x_4269_);
if (v___x_4294_ == 0)
{
lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___y_4298_; uint8_t v___x_4300_; 
v___x_4295_ = lean_unsigned_to_nat(1u);
v___x_4296_ = lean_nat_sub(v___x_4289_, v___x_4295_);
v___x_4300_ = lean_nat_dec_le(v___x_4269_, v___x_4296_);
if (v___x_4300_ == 0)
{
lean_inc(v___x_4296_);
v___y_4298_ = v___x_4296_;
goto v___jp_4297_;
}
else
{
v___y_4298_ = v___x_4269_;
goto v___jp_4297_;
}
v___jp_4297_:
{
uint8_t v___x_4299_; 
v___x_4299_ = lean_nat_dec_le(v___y_4298_, v___x_4296_);
if (v___x_4299_ == 0)
{
lean_dec(v___x_4296_);
lean_inc(v___y_4298_);
v___y_4291_ = v___y_4298_;
v___y_4292_ = v___y_4298_;
goto v___jp_4290_;
}
else
{
v___y_4291_ = v___y_4298_;
v___y_4292_ = v___x_4296_;
goto v___jp_4290_;
}
}
}
else
{
v___y_4271_ = v___x_4288_;
goto v___jp_4270_;
}
v___jp_4270_:
{
lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v_fst_4274_; lean_object* v___x_4276_; uint8_t v_isShared_4277_; uint8_t v_isSharedCheck_4282_; 
v___x_4272_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___closed__0));
v___x_4273_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(v___y_4271_, v_resolve_4267_, v___x_4272_);
lean_dec_ref(v___y_4271_);
v_fst_4274_ = lean_ctor_get(v___x_4273_, 0);
v_isSharedCheck_4282_ = !lean_is_exclusive(v___x_4273_);
if (v_isSharedCheck_4282_ == 0)
{
lean_object* v_unused_4283_; 
v_unused_4283_ = lean_ctor_get(v___x_4273_, 1);
lean_dec(v_unused_4283_);
v___x_4276_ = v___x_4273_;
v_isShared_4277_ = v_isSharedCheck_4282_;
goto v_resetjp_4275_;
}
else
{
lean_inc(v_fst_4274_);
lean_dec(v___x_4273_);
v___x_4276_ = lean_box(0);
v_isShared_4277_ = v_isSharedCheck_4282_;
goto v_resetjp_4275_;
}
v_resetjp_4275_:
{
lean_object* v___x_4278_; lean_object* v___x_4280_; 
v___x_4278_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__1___redArg(v_fst_4274_);
if (v_isShared_4277_ == 0)
{
lean_ctor_set(v___x_4276_, 1, v___x_4278_);
v___x_4280_ = v___x_4276_;
goto v_reusejp_4279_;
}
else
{
lean_object* v_reuseFailAlloc_4281_; 
v_reuseFailAlloc_4281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4281_, 0, v_fst_4274_);
lean_ctor_set(v_reuseFailAlloc_4281_, 1, v___x_4278_);
v___x_4280_ = v_reuseFailAlloc_4281_;
goto v_reusejp_4279_;
}
v_reusejp_4279_:
{
return v___x_4280_;
}
}
}
v___jp_4290_:
{
lean_object* v___x_4293_; 
v___x_4293_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v___x_4289_, v___x_4288_, v___y_4291_, v___y_4292_);
lean_dec(v___y_4292_);
v___y_4271_ = v___x_4293_;
goto v___jp_4270_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(lean_object* v_resolve_4301_, lean_object* v_cands_4302_, lean_object* v_x_4303_){
_start:
{
lean_object* v___x_4304_; 
v___x_4304_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_4301_, v_cands_4302_);
return v___x_4304_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg___boxed(lean_object* v_resolve_4305_, lean_object* v_as_4306_, lean_object* v_sz_4307_, lean_object* v_i_4308_, lean_object* v_b_4309_){
_start:
{
size_t v_sz_boxed_4310_; size_t v_i_boxed_4311_; lean_object* v_res_4312_; 
v_sz_boxed_4310_ = lean_unbox_usize(v_sz_4307_);
lean_dec(v_sz_4307_);
v_i_boxed_4311_ = lean_unbox_usize(v_i_4308_);
lean_dec(v_i_4308_);
v_res_4312_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_4305_, v_as_4306_, v_sz_boxed_4310_, v_i_boxed_4311_, v_b_4309_);
lean_dec_ref(v_as_4306_);
return v_res_4312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___boxed(lean_object* v_resolve_4313_, lean_object* v_as_4314_, lean_object* v_sz_4315_, lean_object* v_i_4316_, lean_object* v_b_4317_){
_start:
{
size_t v_sz_boxed_4318_; size_t v_i_boxed_4319_; lean_object* v_res_4320_; 
v_sz_boxed_4318_ = lean_unbox_usize(v_sz_4315_);
lean_dec(v_sz_4315_);
v_i_boxed_4319_ = lean_unbox_usize(v_i_4316_);
lean_dec(v_i_4316_);
v_res_4320_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_4313_, v_as_4314_, v_sz_boxed_4318_, v_i_boxed_4319_, v_b_4317_);
lean_dec_ref(v_as_4314_);
return v_res_4320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___boxed(lean_object* v_resolve_4321_, lean_object* v_cands_4322_){
_start:
{
lean_object* v_res_4323_; 
v_res_4323_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_4321_, v_cands_4322_);
lean_dec_ref(v_cands_4322_);
return v_res_4323_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg___boxed(lean_object* v___y_4324_, lean_object* v_resolve_4325_, lean_object* v_a_4326_){
_start:
{
lean_object* v_res_4327_; 
v_res_4327_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(v___y_4324_, v_resolve_4325_, v_a_4326_);
lean_dec_ref(v___y_4324_);
return v_res_4327_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg___boxed(lean_object* v___y_4328_, lean_object* v_resolve_4329_, lean_object* v_a_4330_){
_start:
{
lean_object* v_res_4331_; 
v_res_4331_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(v___y_4328_, v_resolve_4329_, v_a_4330_);
lean_dec_ref(v___y_4328_);
return v_res_4331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(lean_object* v_00_u03b1_4332_, lean_object* v_resolve_4333_, lean_object* v_cands_4334_){
_start:
{
lean_object* v___x_4335_; 
v___x_4335_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_4333_, v_cands_4334_);
return v___x_4335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___boxed(lean_object* v_00_u03b1_4336_, lean_object* v_resolve_4337_, lean_object* v_cands_4338_){
_start:
{
lean_object* v_res_4339_; 
v_res_4339_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(v_00_u03b1_4336_, v_resolve_4337_, v_cands_4338_);
lean_dec_ref(v_cands_4338_);
return v_res_4339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy(lean_object* v_00_u03b1_4340_, lean_object* v_resolve_4341_, lean_object* v_key_4342_, lean_object* v_cands_4343_){
_start:
{
lean_object* v___x_4344_; 
v___x_4344_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4341_, v_key_4342_, v_cands_4343_);
return v___x_4344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(lean_object* v_00_u03b1_4345_, lean_object* v_resolve_4346_, lean_object* v_as_4347_, size_t v_sz_4348_, size_t v_i_4349_, lean_object* v_b_4350_){
_start:
{
lean_object* v___x_4351_; 
v___x_4351_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_4346_, v_as_4347_, v_sz_4348_, v_i_4349_, v_b_4350_);
return v___x_4351_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___boxed(lean_object* v_00_u03b1_4352_, lean_object* v_resolve_4353_, lean_object* v_as_4354_, lean_object* v_sz_4355_, lean_object* v_i_4356_, lean_object* v_b_4357_){
_start:
{
size_t v_sz_boxed_4358_; size_t v_i_boxed_4359_; lean_object* v_res_4360_; 
v_sz_boxed_4358_ = lean_unbox_usize(v_sz_4355_);
lean_dec(v_sz_4355_);
v_i_boxed_4359_ = lean_unbox_usize(v_i_4356_);
lean_dec(v_i_4356_);
v_res_4360_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(v_00_u03b1_4352_, v_resolve_4353_, v_as_4354_, v_sz_boxed_4358_, v_i_boxed_4359_, v_b_4357_);
lean_dec_ref(v_as_4354_);
return v_res_4360_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1(lean_object* v_00_u03b1_4361_, lean_object* v___y_4362_, lean_object* v_resolve_4363_, lean_object* v_inst_4364_, lean_object* v_a_4365_){
_start:
{
lean_object* v___x_4366_; 
v___x_4366_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(v___y_4362_, v_resolve_4363_, v_a_4365_);
return v___x_4366_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___boxed(lean_object* v_00_u03b1_4367_, lean_object* v___y_4368_, lean_object* v_resolve_4369_, lean_object* v_inst_4370_, lean_object* v_a_4371_){
_start:
{
lean_object* v_res_4372_; 
v_res_4372_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1(v_00_u03b1_4367_, v___y_4368_, v_resolve_4369_, v_inst_4370_, v_a_4371_);
lean_dec_ref(v___y_4368_);
return v_res_4372_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0(lean_object* v_00_u03b1_4373_, lean_object* v_resolve_4374_, lean_object* v_as_4375_, size_t v_sz_4376_, size_t v_i_4377_, lean_object* v_b_4378_){
_start:
{
lean_object* v___x_4379_; 
v___x_4379_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_4374_, v_as_4375_, v_sz_4376_, v_i_4377_, v_b_4378_);
return v___x_4379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___boxed(lean_object* v_00_u03b1_4380_, lean_object* v_resolve_4381_, lean_object* v_as_4382_, lean_object* v_sz_4383_, lean_object* v_i_4384_, lean_object* v_b_4385_){
_start:
{
size_t v_sz_boxed_4386_; size_t v_i_boxed_4387_; lean_object* v_res_4388_; 
v_sz_boxed_4386_ = lean_unbox_usize(v_sz_4383_);
lean_dec(v_sz_4383_);
v_i_boxed_4387_ = lean_unbox_usize(v_i_4384_);
lean_dec(v_i_4384_);
v_res_4388_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0(v_00_u03b1_4380_, v_resolve_4381_, v_as_4382_, v_sz_boxed_4386_, v_i_boxed_4387_, v_b_4385_);
lean_dec_ref(v_as_4382_);
return v_res_4388_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2(lean_object* v_00_u03b1_4389_, lean_object* v___y_4390_, lean_object* v_resolve_4391_, lean_object* v_inst_4392_, lean_object* v_a_4393_){
_start:
{
lean_object* v___x_4394_; 
v___x_4394_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(v___y_4390_, v_resolve_4391_, v_a_4393_);
return v___x_4394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___boxed(lean_object* v_00_u03b1_4395_, lean_object* v___y_4396_, lean_object* v_resolve_4397_, lean_object* v_inst_4398_, lean_object* v_a_4399_){
_start:
{
lean_object* v_res_4400_; 
v_res_4400_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2(v_00_u03b1_4395_, v___y_4396_, v_resolve_4397_, v_inst_4398_, v_a_4399_);
lean_dec_ref(v___y_4396_);
return v_res_4400_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(lean_object* v_trees_4401_, lean_object* v_resolve_4402_){
_start:
{
lean_object* v___x_4403_; lean_object* v___x_4404_; 
v___x_4403_ = lean_box(0);
v___x_4404_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4402_, v___x_4403_, v_trees_4401_);
return v___x_4404_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy(lean_object* v_00_u03b1_4405_, lean_object* v_trees_4406_, lean_object* v_resolve_4407_){
_start:
{
lean_object* v___x_4408_; 
v___x_4408_ = l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(v_trees_4406_, v_resolve_4407_);
return v___x_4408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux_modifyChild___redArg(lean_object* v_n_4410_, lean_object* v_f_4411_, lean_object* v_a_4412_){
_start:
{
switch(lean_obj_tag(v_a_4412_))
{
case 0:
{
lean_dec_ref(v_f_4411_);
return v_a_4412_;
}
case 1:
{
lean_object* v_key_4413_; lean_object* v_entry_x3f_4414_; lean_object* v_children_4415_; lean_object* v_childIndex_4416_; lean_object* v___x_4417_; lean_object* v___x_4418_; lean_object* v___x_4419_; 
v_key_4413_ = lean_ctor_get(v_a_4412_, 0);
v_entry_x3f_4414_ = lean_ctor_get(v_a_4412_, 1);
v_children_4415_ = lean_ctor_get(v_a_4412_, 2);
v_childIndex_4416_ = lean_ctor_get(v_a_4412_, 3);
v___x_4417_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0, &l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_instInhabitedImportedNode___closed__0);
v___x_4418_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux_modifyChild___redArg___closed__0));
v___x_4419_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___redArg(v___x_4417_, v_childIndex_4416_, v_children_4415_, v___x_4418_, v_n_4410_);
if (lean_obj_tag(v___x_4419_) == 0)
{
lean_dec_ref(v_f_4411_);
return v_a_4412_;
}
else
{
lean_object* v_val_4420_; lean_object* v___x_4421_; uint8_t v___x_4422_; 
v_val_4420_ = lean_ctor_get(v___x_4419_, 0);
lean_inc(v_val_4420_);
lean_dec_ref_known(v___x_4419_, 1);
v___x_4421_ = lean_array_get_size(v_children_4415_);
v___x_4422_ = lean_nat_dec_lt(v_val_4420_, v___x_4421_);
if (v___x_4422_ == 0)
{
lean_dec(v_val_4420_);
lean_dec_ref(v_f_4411_);
return v_a_4412_;
}
else
{
lean_object* v___x_4424_; uint8_t v_isShared_4425_; uint8_t v_isSharedCheck_4434_; 
lean_inc_ref(v_childIndex_4416_);
lean_inc_ref(v_children_4415_);
lean_inc(v_entry_x3f_4414_);
lean_inc(v_key_4413_);
v_isSharedCheck_4434_ = !lean_is_exclusive(v_a_4412_);
if (v_isSharedCheck_4434_ == 0)
{
lean_object* v_unused_4435_; lean_object* v_unused_4436_; lean_object* v_unused_4437_; lean_object* v_unused_4438_; 
v_unused_4435_ = lean_ctor_get(v_a_4412_, 3);
lean_dec(v_unused_4435_);
v_unused_4436_ = lean_ctor_get(v_a_4412_, 2);
lean_dec(v_unused_4436_);
v_unused_4437_ = lean_ctor_get(v_a_4412_, 1);
lean_dec(v_unused_4437_);
v_unused_4438_ = lean_ctor_get(v_a_4412_, 0);
lean_dec(v_unused_4438_);
v___x_4424_ = v_a_4412_;
v_isShared_4425_ = v_isSharedCheck_4434_;
goto v_resetjp_4423_;
}
else
{
lean_dec(v_a_4412_);
v___x_4424_ = lean_box(0);
v_isShared_4425_ = v_isSharedCheck_4434_;
goto v_resetjp_4423_;
}
v_resetjp_4423_:
{
lean_object* v_v_4426_; lean_object* v___x_4427_; lean_object* v_xs_x27_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4432_; 
v_v_4426_ = lean_array_fget(v_children_4415_, v_val_4420_);
v___x_4427_ = lean_box(0);
v_xs_x27_4428_ = lean_array_fset(v_children_4415_, v_val_4420_, v___x_4427_);
v___x_4429_ = lean_apply_1(v_f_4411_, v_v_4426_);
v___x_4430_ = lean_array_fset(v_xs_x27_4428_, v_val_4420_, v___x_4429_);
lean_dec(v_val_4420_);
if (v_isShared_4425_ == 0)
{
lean_ctor_set(v___x_4424_, 2, v___x_4430_);
v___x_4432_ = v___x_4424_;
goto v_reusejp_4431_;
}
else
{
lean_object* v_reuseFailAlloc_4433_; 
v_reuseFailAlloc_4433_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4433_, 0, v_key_4413_);
lean_ctor_set(v_reuseFailAlloc_4433_, 1, v_entry_x3f_4414_);
lean_ctor_set(v_reuseFailAlloc_4433_, 2, v___x_4430_);
lean_ctor_set(v_reuseFailAlloc_4433_, 3, v_childIndex_4416_);
v___x_4432_ = v_reuseFailAlloc_4433_;
goto v_reusejp_4431_;
}
v_reusejp_4431_:
{
return v___x_4432_;
}
}
}
}
}
case 2:
{
lean_object* v_key_4439_; lean_object* v_entry_4440_; lean_object* v_expanded_4441_; lean_object* v___x_4442_; lean_object* v_fst_4443_; lean_object* v_snd_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; 
v_key_4439_ = lean_ctor_get(v_a_4412_, 0);
lean_inc(v_key_4439_);
v_entry_4440_ = lean_ctor_get(v_a_4412_, 1);
lean_inc_ref(v_entry_4440_);
v_expanded_4441_ = lean_ctor_get(v_a_4412_, 2);
lean_inc_ref(v_expanded_4441_);
lean_dec_ref_known(v_a_4412_, 3);
v___x_4442_ = lean_imported_consts_force_shared(v_expanded_4441_);
lean_dec_ref(v_expanded_4441_);
v_fst_4443_ = lean_ctor_get(v___x_4442_, 0);
lean_inc(v_fst_4443_);
v_snd_4444_ = lean_ctor_get(v___x_4442_, 1);
lean_inc(v_snd_4444_);
lean_dec(v___x_4442_);
v___x_4445_ = lean_imported_consts_force_shared(v_entry_4440_);
lean_dec_ref(v_entry_4440_);
v___x_4446_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_4446_, 0, v_key_4439_);
lean_ctor_set(v___x_4446_, 1, v___x_4445_);
lean_ctor_set(v___x_4446_, 2, v_fst_4443_);
lean_ctor_set(v___x_4446_, 3, v_snd_4444_);
v_a_4412_ = v___x_4446_;
goto _start;
}
default: 
{
lean_object* v_tree_4448_; 
v_tree_4448_ = lean_ctor_get(v_a_4412_, 1);
lean_inc_ref(v_tree_4448_);
lean_dec_ref_known(v_a_4412_, 2);
v_a_4412_ = v_tree_4448_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux_modifyChild___redArg___boxed(lean_object* v_n_4450_, lean_object* v_f_4451_, lean_object* v_a_4452_){
_start:
{
lean_object* v_res_4453_; 
v_res_4453_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux_modifyChild___redArg(v_n_4450_, v_f_4451_, v_a_4452_);
lean_dec(v_n_4450_);
return v_res_4453_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux_modifyChild(lean_object* v_00_u03b1_4454_, lean_object* v_n_4455_, lean_object* v_f_4456_, lean_object* v_a_4457_){
_start:
{
lean_object* v___x_4458_; 
v___x_4458_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux_modifyChild___redArg(v_n_4455_, v_f_4456_, v_a_4457_);
return v___x_4458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux_modifyChild___boxed(lean_object* v_00_u03b1_4459_, lean_object* v_n_4460_, lean_object* v_f_4461_, lean_object* v_a_4462_){
_start:
{
lean_object* v_res_4463_; 
v_res_4463_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux_modifyChild(v_00_u03b1_4459_, v_n_4460_, v_f_4461_, v_a_4462_);
lean_dec(v_n_4460_);
return v_res_4463_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux___redArg(lean_object* v_t_4464_, lean_object* v_n_4465_, lean_object* v_f_4466_){
_start:
{
if (lean_obj_tag(v_n_4465_) == 0)
{
lean_object* v___x_4467_; 
v___x_4467_ = lean_apply_1(v_f_4466_, v_t_4464_);
return v___x_4467_;
}
else
{
lean_object* v_pre_4468_; lean_object* v___x_4469_; 
v_pre_4468_ = lean_ctor_get(v_n_4465_, 0);
lean_inc(v_pre_4468_);
v___x_4469_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux_modifyChild___boxed), 4, 3);
lean_closure_set(v___x_4469_, 0, lean_box(0));
lean_closure_set(v___x_4469_, 1, v_n_4465_);
lean_closure_set(v___x_4469_, 2, v_f_4466_);
v_n_4465_ = v_pre_4468_;
v_f_4466_ = v___x_4469_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux(lean_object* v_00_u03b1_4471_, lean_object* v_t_4472_, lean_object* v_n_4473_, lean_object* v_f_4474_){
_start:
{
lean_object* v___x_4475_; 
v___x_4475_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux___redArg(v_t_4472_, v_n_4473_, v_f_4474_);
return v___x_4475_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt___redArg___lam__0(lean_object* v_f_4476_, lean_object* v_node_4477_){
_start:
{
lean_object* v___x_4478_; 
v___x_4478_ = lean_apply_1(v_f_4476_, v_node_4477_);
return v___x_4478_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt___redArg(lean_object* v_t_4479_, lean_object* v_n_4480_, lean_object* v_f_4481_){
_start:
{
lean_object* v___f_4482_; lean_object* v___x_4483_; 
v___f_4482_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_modifyAt___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4482_, 0, v_f_4481_);
v___x_4483_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAtAux___redArg(v_t_4479_, v_n_4480_, v___f_4482_);
return v___x_4483_;
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
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux___redArg(lean_object* v_x_4489_){
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
v___x_4499_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux_spec__0___redArg(v_sz_4497_, v___x_4498_, v_fst_4494_);
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
v___x_4510_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux_spec__0___redArg(v_sz_4508_, v___x_4509_, v_children_4503_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux_spec__0___redArg(size_t v_sz_4517_, size_t v_i_4518_, lean_object* v_bs_4519_){
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
v___x_4524_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux___redArg(v_v_4521_);
v___x_4525_ = ((size_t)1ULL);
v___x_4526_ = lean_usize_add(v_i_4518_, v___x_4525_);
v___x_4527_ = lean_array_uset(v_bs_x27_4523_, v_i_4518_, v___x_4524_);
v_i_4518_ = v___x_4526_;
v_bs_4519_ = v___x_4527_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux_spec__0___redArg___boxed(lean_object* v_sz_4529_, lean_object* v_i_4530_, lean_object* v_bs_4531_){
_start:
{
size_t v_sz_boxed_4532_; size_t v_i_boxed_4533_; lean_object* v_res_4534_; 
v_sz_boxed_4532_ = lean_unbox_usize(v_sz_4529_);
lean_dec(v_sz_4529_);
v_i_boxed_4533_ = lean_unbox_usize(v_i_4530_);
lean_dec(v_i_4530_);
v_res_4534_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux_spec__0___redArg(v_sz_boxed_4532_, v_i_boxed_4533_, v_bs_4531_);
return v_res_4534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux(lean_object* v_00_u03b1_4535_, lean_object* v_x_4536_){
_start:
{
lean_object* v___x_4537_; 
v___x_4537_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux___redArg(v_x_4536_);
return v___x_4537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux_spec__0(lean_object* v_00_u03b1_4538_, size_t v_sz_4539_, size_t v_i_4540_, lean_object* v_bs_4541_){
_start:
{
lean_object* v___x_4542_; 
v___x_4542_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux_spec__0___redArg(v_sz_4539_, v_i_4540_, v_bs_4541_);
return v___x_4542_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux_spec__0___boxed(lean_object* v_00_u03b1_4543_, lean_object* v_sz_4544_, lean_object* v_i_4545_, lean_object* v_bs_4546_){
_start:
{
size_t v_sz_boxed_4547_; size_t v_i_boxed_4548_; lean_object* v_res_4549_; 
v_sz_boxed_4547_ = lean_unbox_usize(v_sz_4544_);
lean_dec(v_sz_4544_);
v_i_boxed_4548_ = lean_unbox_usize(v_i_4545_);
lean_dec(v_i_4545_);
v_res_4549_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux_spec__0(v_00_u03b1_4543_, v_sz_boxed_4547_, v_i_boxed_4548_, v_bs_4546_);
return v_res_4549_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceExpanded___redArg(lean_object* v_t_4550_){
_start:
{
lean_object* v___x_4551_; 
v___x_4551_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux___redArg(v_t_4550_);
return v___x_4551_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceExpanded(lean_object* v_00_u03b1_4552_, lean_object* v_t_4553_){
_start:
{
lean_object* v___x_4554_; 
v___x_4554_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_forceExpandedAux___redArg(v_t_4553_);
return v___x_4554_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__4(lean_object* v_expanded_4555_, lean_object* v_toApplicative_4556_, lean_object* v_inst_4557_, lean_object* v___f_4558_, lean_object* v_____r_4559_, lean_object* v_s_4560_){
_start:
{
lean_object* v___x_4561_; lean_object* v_fst_4562_; lean_object* v_toPure_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; uint8_t v___x_4566_; 
v___x_4561_ = lean_imported_consts_force_shared(v_expanded_4555_);
v_fst_4562_ = lean_ctor_get(v___x_4561_, 0);
lean_inc(v_fst_4562_);
lean_dec(v___x_4561_);
v_toPure_4563_ = lean_ctor_get(v_toApplicative_4556_, 1);
lean_inc(v_toPure_4563_);
lean_dec_ref(v_toApplicative_4556_);
v___x_4564_ = lean_unsigned_to_nat(0u);
v___x_4565_ = lean_array_get_size(v_fst_4562_);
v___x_4566_ = lean_nat_dec_lt(v___x_4564_, v___x_4565_);
if (v___x_4566_ == 0)
{
lean_object* v___x_4567_; 
lean_dec(v_fst_4562_);
lean_dec(v___f_4558_);
lean_dec_ref(v_inst_4557_);
v___x_4567_ = lean_apply_2(v_toPure_4563_, lean_box(0), v_s_4560_);
return v___x_4567_;
}
else
{
size_t v___x_4568_; size_t v___x_4569_; lean_object* v___x_4570_; 
lean_dec(v_toPure_4563_);
v___x_4568_ = ((size_t)0ULL);
v___x_4569_ = lean_usize_of_nat(v___x_4565_);
v___x_4570_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_4557_, v___f_4558_, v_fst_4562_, v___x_4568_, v___x_4569_, v_s_4560_);
return v___x_4570_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__4___boxed(lean_object* v_expanded_4571_, lean_object* v_toApplicative_4572_, lean_object* v_inst_4573_, lean_object* v___f_4574_, lean_object* v_____r_4575_, lean_object* v_s_4576_){
_start:
{
lean_object* v_res_4577_; 
v_res_4577_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__4(v_expanded_4571_, v_toApplicative_4572_, v_inst_4573_, v___f_4574_, v_____r_4575_, v_s_4576_);
lean_dec_ref(v_expanded_4571_);
return v_res_4577_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__1(lean_object* v_toApplicative_4578_, lean_object* v_children_4579_, lean_object* v_inst_4580_, lean_object* v___f_4581_, lean_object* v_____r_4582_, lean_object* v_s_4583_){
_start:
{
lean_object* v_toPure_4584_; lean_object* v___x_4585_; lean_object* v___x_4586_; uint8_t v___x_4587_; 
v_toPure_4584_ = lean_ctor_get(v_toApplicative_4578_, 1);
lean_inc(v_toPure_4584_);
lean_dec_ref(v_toApplicative_4578_);
v___x_4585_ = lean_unsigned_to_nat(0u);
v___x_4586_ = lean_array_get_size(v_children_4579_);
v___x_4587_ = lean_nat_dec_lt(v___x_4585_, v___x_4586_);
if (v___x_4587_ == 0)
{
lean_object* v___x_4588_; 
lean_dec(v___f_4581_);
lean_dec_ref(v_inst_4580_);
lean_dec_ref(v_children_4579_);
v___x_4588_ = lean_apply_2(v_toPure_4584_, lean_box(0), v_s_4583_);
return v___x_4588_;
}
else
{
size_t v___x_4589_; size_t v___x_4590_; lean_object* v___x_4591_; 
lean_dec(v_toPure_4584_);
v___x_4589_ = ((size_t)0ULL);
v___x_4590_ = lean_usize_of_nat(v___x_4586_);
v___x_4591_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_4580_, v___f_4581_, v_children_4579_, v___x_4589_, v___x_4590_, v_s_4583_);
return v___x_4591_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg(lean_object* v_inst_4592_, lean_object* v_t_4593_, lean_object* v_f_4594_, lean_object* v_init_4595_){
_start:
{
switch(lean_obj_tag(v_t_4593_))
{
case 0:
{
lean_object* v_tree_4596_; lean_object* v___x_4597_; 
v_tree_4596_ = lean_ctor_get(v_t_4593_, 1);
lean_inc_ref(v_tree_4596_);
lean_dec_ref_known(v_t_4593_, 2);
v___x_4597_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_4592_, v_tree_4596_, v_f_4594_, v_init_4595_);
return v___x_4597_;
}
case 1:
{
lean_object* v_toApplicative_4598_; lean_object* v_toBind_4599_; lean_object* v_key_4600_; lean_object* v_entry_x3f_4601_; lean_object* v_children_4602_; lean_object* v___f_4603_; lean_object* v___f_4604_; 
v_toApplicative_4598_ = lean_ctor_get(v_inst_4592_, 0);
lean_inc_ref_n(v_toApplicative_4598_, 2);
v_toBind_4599_ = lean_ctor_get(v_inst_4592_, 1);
v_key_4600_ = lean_ctor_get(v_t_4593_, 0);
lean_inc(v_key_4600_);
v_entry_x3f_4601_ = lean_ctor_get(v_t_4593_, 1);
lean_inc(v_entry_x3f_4601_);
v_children_4602_ = lean_ctor_get(v_t_4593_, 2);
lean_inc_ref_n(v_children_4602_, 2);
lean_dec_ref_known(v_t_4593_, 4);
lean_inc(v_f_4594_);
lean_inc_ref_n(v_inst_4592_, 2);
v___f_4603_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__0), 4, 2);
lean_closure_set(v___f_4603_, 0, v_inst_4592_);
lean_closure_set(v___f_4603_, 1, v_f_4594_);
lean_inc_ref(v___f_4603_);
v___f_4604_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__1), 6, 4);
lean_closure_set(v___f_4604_, 0, v_toApplicative_4598_);
lean_closure_set(v___f_4604_, 1, v_children_4602_);
lean_closure_set(v___f_4604_, 2, v_inst_4592_);
lean_closure_set(v___f_4604_, 3, v___f_4603_);
if (lean_obj_tag(v_entry_x3f_4601_) == 1)
{
lean_object* v_val_4605_; lean_object* v_fst_4606_; lean_object* v___f_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; 
lean_inc(v_toBind_4599_);
lean_dec_ref(v___f_4603_);
lean_dec_ref(v_children_4602_);
lean_dec_ref(v_toApplicative_4598_);
lean_dec_ref(v_inst_4592_);
v_val_4605_ = lean_ctor_get(v_entry_x3f_4601_, 0);
lean_inc(v_val_4605_);
lean_dec_ref_known(v_entry_x3f_4601_, 1);
v_fst_4606_ = lean_ctor_get(v_val_4605_, 0);
lean_inc(v_fst_4606_);
lean_dec(v_val_4605_);
v___f_4607_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4607_, 0, v___f_4604_);
v___x_4608_ = lean_apply_3(v_f_4594_, v_init_4595_, v_key_4600_, v_fst_4606_);
v___x_4609_ = lean_apply_4(v_toBind_4599_, lean_box(0), lean_box(0), v___x_4608_, v___f_4607_);
return v___x_4609_;
}
else
{
lean_object* v___x_4610_; lean_object* v___x_4611_; 
lean_dec_ref(v___f_4604_);
lean_dec(v_entry_x3f_4601_);
lean_dec(v_key_4600_);
lean_dec(v_f_4594_);
v___x_4610_ = lean_box(0);
v___x_4611_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__1(v_toApplicative_4598_, v_children_4602_, v_inst_4592_, v___f_4603_, v___x_4610_, v_init_4595_);
return v___x_4611_;
}
}
case 2:
{
lean_object* v_toApplicative_4612_; lean_object* v_toBind_4613_; lean_object* v_key_4614_; lean_object* v_entry_4615_; lean_object* v_expanded_4616_; lean_object* v___f_4617_; lean_object* v___f_4618_; lean_object* v___x_4619_; 
v_toApplicative_4612_ = lean_ctor_get(v_inst_4592_, 0);
lean_inc_ref_n(v_toApplicative_4612_, 2);
v_toBind_4613_ = lean_ctor_get(v_inst_4592_, 1);
v_key_4614_ = lean_ctor_get(v_t_4593_, 0);
lean_inc(v_key_4614_);
v_entry_4615_ = lean_ctor_get(v_t_4593_, 1);
lean_inc_ref(v_entry_4615_);
v_expanded_4616_ = lean_ctor_get(v_t_4593_, 2);
lean_inc_ref_n(v_expanded_4616_, 2);
lean_dec_ref_known(v_t_4593_, 3);
lean_inc(v_f_4594_);
lean_inc_ref_n(v_inst_4592_, 2);
v___f_4617_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__0), 4, 2);
lean_closure_set(v___f_4617_, 0, v_inst_4592_);
lean_closure_set(v___f_4617_, 1, v_f_4594_);
lean_inc_ref(v___f_4617_);
v___f_4618_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_4618_, 0, v_expanded_4616_);
lean_closure_set(v___f_4618_, 1, v_toApplicative_4612_);
lean_closure_set(v___f_4618_, 2, v_inst_4592_);
lean_closure_set(v___f_4618_, 3, v___f_4617_);
v___x_4619_ = lean_imported_consts_force_shared(v_entry_4615_);
lean_dec_ref(v_entry_4615_);
if (lean_obj_tag(v___x_4619_) == 1)
{
lean_object* v_val_4620_; lean_object* v_fst_4621_; lean_object* v___f_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; 
lean_inc(v_toBind_4613_);
lean_dec_ref(v___f_4617_);
lean_dec_ref(v_expanded_4616_);
lean_dec_ref(v_toApplicative_4612_);
lean_dec_ref(v_inst_4592_);
v_val_4620_ = lean_ctor_get(v___x_4619_, 0);
lean_inc(v_val_4620_);
lean_dec_ref_known(v___x_4619_, 1);
v_fst_4621_ = lean_ctor_get(v_val_4620_, 0);
lean_inc(v_fst_4621_);
lean_dec(v_val_4620_);
v___f_4622_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4622_, 0, v___f_4618_);
v___x_4623_ = lean_apply_3(v_f_4594_, v_init_4595_, v_key_4614_, v_fst_4621_);
v___x_4624_ = lean_apply_4(v_toBind_4613_, lean_box(0), lean_box(0), v___x_4623_, v___f_4622_);
return v___x_4624_;
}
else
{
lean_object* v___x_4625_; lean_object* v___x_4626_; 
lean_dec(v___x_4619_);
lean_dec_ref(v___f_4618_);
lean_dec(v_key_4614_);
lean_dec(v_f_4594_);
v___x_4625_ = lean_box(0);
v___x_4626_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__4(v_expanded_4616_, v_toApplicative_4612_, v_inst_4592_, v___f_4617_, v___x_4625_, v_init_4595_);
lean_dec_ref(v_expanded_4616_);
return v___x_4626_;
}
}
default: 
{
lean_object* v_tree_4627_; 
v_tree_4627_ = lean_ctor_get(v_t_4593_, 1);
lean_inc_ref(v_tree_4627_);
lean_dec_ref_known(v_t_4593_, 2);
v_t_4593_ = v_tree_4627_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__0(lean_object* v_inst_4629_, lean_object* v_f_4630_, lean_object* v_s_4631_, lean_object* v_c_4632_){
_start:
{
lean_object* v___x_4633_; 
v___x_4633_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg(v_inst_4629_, v_c_4632_, v_f_4630_, v_s_4631_);
return v___x_4633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux(lean_object* v_m_4634_, lean_object* v_00_u03b1_4635_, lean_object* v_00_u03c3_4636_, lean_object* v_inst_4637_, lean_object* v_t_4638_, lean_object* v_f_4639_, lean_object* v_init_4640_){
_start:
{
lean_object* v___x_4641_; 
v___x_4641_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg(v_inst_4637_, v_t_4638_, v_f_4639_, v_init_4640_);
return v___x_4641_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg(lean_object* v_inst_4642_, lean_object* v_t_4643_, lean_object* v_f_4644_, lean_object* v_init_4645_){
_start:
{
lean_object* v___x_4646_; 
v___x_4646_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg(v_inst_4642_, v_t_4643_, v_f_4644_, v_init_4645_);
return v___x_4646_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM(lean_object* v_m_4647_, lean_object* v_00_u03b1_4648_, lean_object* v_00_u03c3_4649_, lean_object* v_inst_4650_, lean_object* v_t_4651_, lean_object* v_f_4652_, lean_object* v_init_4653_){
_start:
{
lean_object* v___x_4654_; 
v___x_4654_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg(v_inst_4650_, v_t_4651_, v_f_4652_, v_init_4653_);
return v___x_4654_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(lean_object* v_t_4655_, lean_object* v_f_4656_, lean_object* v_init_4657_){
_start:
{
lean_object* v_key_4658_; lean_object* v_val_x3f_4659_; lean_object* v_children_4660_; lean_object* v_s_4662_; 
v_key_4658_ = lean_ctor_get(v_t_4655_, 0);
lean_inc(v_key_4658_);
v_val_x3f_4659_ = lean_ctor_get(v_t_4655_, 1);
lean_inc(v_val_x3f_4659_);
v_children_4660_ = lean_ctor_get(v_t_4655_, 2);
lean_inc_ref(v_children_4660_);
lean_dec_ref(v_t_4655_);
if (lean_obj_tag(v_val_x3f_4659_) == 1)
{
lean_object* v_val_4669_; lean_object* v___x_4670_; 
v_val_4669_ = lean_ctor_get(v_val_x3f_4659_, 0);
lean_inc(v_val_4669_);
lean_dec_ref_known(v_val_x3f_4659_, 1);
lean_inc(v_f_4656_);
v___x_4670_ = lean_apply_3(v_f_4656_, v_init_4657_, v_key_4658_, v_val_4669_);
v_s_4662_ = v___x_4670_;
goto v___jp_4661_;
}
else
{
lean_dec(v_val_x3f_4659_);
lean_dec(v_key_4658_);
v_s_4662_ = v_init_4657_;
goto v___jp_4661_;
}
v___jp_4661_:
{
lean_object* v___x_4663_; lean_object* v___x_4664_; uint8_t v___x_4665_; 
v___x_4663_ = lean_unsigned_to_nat(0u);
v___x_4664_ = lean_array_get_size(v_children_4660_);
v___x_4665_ = lean_nat_dec_lt(v___x_4663_, v___x_4664_);
if (v___x_4665_ == 0)
{
lean_dec_ref(v_children_4660_);
lean_dec(v_f_4656_);
return v_s_4662_;
}
else
{
size_t v___x_4666_; size_t v___x_4667_; lean_object* v___x_4668_; 
v___x_4666_ = ((size_t)0ULL);
v___x_4667_ = lean_usize_of_nat(v___x_4664_);
v___x_4668_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(v_f_4656_, v_children_4660_, v___x_4666_, v___x_4667_, v_s_4662_);
lean_dec_ref(v_children_4660_);
return v___x_4668_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_f_4671_, lean_object* v_as_4672_, size_t v_i_4673_, size_t v_stop_4674_, lean_object* v_b_4675_){
_start:
{
uint8_t v___x_4676_; 
v___x_4676_ = lean_usize_dec_eq(v_i_4673_, v_stop_4674_);
if (v___x_4676_ == 0)
{
lean_object* v___x_4677_; lean_object* v___x_4678_; size_t v___x_4679_; size_t v___x_4680_; 
v___x_4677_ = lean_array_uget_borrowed(v_as_4672_, v_i_4673_);
lean_inc(v_f_4671_);
lean_inc(v___x_4677_);
v___x_4678_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v___x_4677_, v_f_4671_, v_b_4675_);
v___x_4679_ = ((size_t)1ULL);
v___x_4680_ = lean_usize_add(v_i_4673_, v___x_4679_);
v_i_4673_ = v___x_4680_;
v_b_4675_ = v___x_4678_;
goto _start;
}
else
{
lean_dec(v_f_4671_);
return v_b_4675_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_f_4682_, lean_object* v_as_4683_, lean_object* v_i_4684_, lean_object* v_stop_4685_, lean_object* v_b_4686_){
_start:
{
size_t v_i_boxed_4687_; size_t v_stop_boxed_4688_; lean_object* v_res_4689_; 
v_i_boxed_4687_ = lean_unbox_usize(v_i_4684_);
lean_dec(v_i_4684_);
v_stop_boxed_4688_ = lean_unbox_usize(v_stop_4685_);
lean_dec(v_stop_4685_);
v_res_4689_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(v_f_4682_, v_as_4683_, v_i_boxed_4687_, v_stop_boxed_4688_, v_b_4686_);
lean_dec_ref(v_as_4683_);
return v_res_4689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(lean_object* v_t_4690_, lean_object* v_f_4691_, lean_object* v_init_4692_){
_start:
{
switch(lean_obj_tag(v_t_4690_))
{
case 0:
{
lean_object* v_tree_4693_; lean_object* v___x_4694_; 
v_tree_4693_ = lean_ctor_get(v_t_4690_, 1);
lean_inc_ref(v_tree_4693_);
lean_dec_ref_known(v_t_4690_, 2);
v___x_4694_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_tree_4693_, v_f_4691_, v_init_4692_);
return v___x_4694_;
}
case 1:
{
lean_object* v_key_4695_; lean_object* v_entry_x3f_4696_; lean_object* v_children_4697_; lean_object* v_s_4699_; 
v_key_4695_ = lean_ctor_get(v_t_4690_, 0);
lean_inc(v_key_4695_);
v_entry_x3f_4696_ = lean_ctor_get(v_t_4690_, 1);
lean_inc(v_entry_x3f_4696_);
v_children_4697_ = lean_ctor_get(v_t_4690_, 2);
lean_inc_ref(v_children_4697_);
lean_dec_ref_known(v_t_4690_, 4);
if (lean_obj_tag(v_entry_x3f_4696_) == 1)
{
lean_object* v_val_4706_; lean_object* v_fst_4707_; lean_object* v___x_4708_; 
v_val_4706_ = lean_ctor_get(v_entry_x3f_4696_, 0);
lean_inc(v_val_4706_);
lean_dec_ref_known(v_entry_x3f_4696_, 1);
v_fst_4707_ = lean_ctor_get(v_val_4706_, 0);
lean_inc(v_fst_4707_);
lean_dec(v_val_4706_);
lean_inc(v_f_4691_);
v___x_4708_ = lean_apply_3(v_f_4691_, v_init_4692_, v_key_4695_, v_fst_4707_);
v_s_4699_ = v___x_4708_;
goto v___jp_4698_;
}
else
{
lean_dec(v_entry_x3f_4696_);
lean_dec(v_key_4695_);
v_s_4699_ = v_init_4692_;
goto v___jp_4698_;
}
v___jp_4698_:
{
lean_object* v___x_4700_; lean_object* v___x_4701_; uint8_t v___x_4702_; 
v___x_4700_ = lean_unsigned_to_nat(0u);
v___x_4701_ = lean_array_get_size(v_children_4697_);
v___x_4702_ = lean_nat_dec_lt(v___x_4700_, v___x_4701_);
if (v___x_4702_ == 0)
{
lean_dec_ref(v_children_4697_);
lean_dec(v_f_4691_);
return v_s_4699_;
}
else
{
size_t v___x_4703_; size_t v___x_4704_; lean_object* v___x_4705_; 
v___x_4703_ = ((size_t)0ULL);
v___x_4704_ = lean_usize_of_nat(v___x_4701_);
v___x_4705_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(v_f_4691_, v_children_4697_, v___x_4703_, v___x_4704_, v_s_4699_);
lean_dec_ref(v_children_4697_);
return v___x_4705_;
}
}
}
case 2:
{
lean_object* v_key_4709_; lean_object* v_entry_4710_; lean_object* v_expanded_4711_; lean_object* v_s_4713_; lean_object* v___x_4722_; 
v_key_4709_ = lean_ctor_get(v_t_4690_, 0);
lean_inc(v_key_4709_);
v_entry_4710_ = lean_ctor_get(v_t_4690_, 1);
lean_inc_ref(v_entry_4710_);
v_expanded_4711_ = lean_ctor_get(v_t_4690_, 2);
lean_inc_ref(v_expanded_4711_);
lean_dec_ref_known(v_t_4690_, 3);
v___x_4722_ = lean_imported_consts_force_shared(v_entry_4710_);
lean_dec_ref(v_entry_4710_);
if (lean_obj_tag(v___x_4722_) == 1)
{
lean_object* v_val_4723_; lean_object* v_fst_4724_; lean_object* v___x_4725_; 
v_val_4723_ = lean_ctor_get(v___x_4722_, 0);
lean_inc(v_val_4723_);
lean_dec_ref_known(v___x_4722_, 1);
v_fst_4724_ = lean_ctor_get(v_val_4723_, 0);
lean_inc(v_fst_4724_);
lean_dec(v_val_4723_);
lean_inc(v_f_4691_);
v___x_4725_ = lean_apply_3(v_f_4691_, v_init_4692_, v_key_4709_, v_fst_4724_);
v_s_4713_ = v___x_4725_;
goto v___jp_4712_;
}
else
{
lean_dec(v___x_4722_);
lean_dec(v_key_4709_);
v_s_4713_ = v_init_4692_;
goto v___jp_4712_;
}
v___jp_4712_:
{
lean_object* v___x_4714_; lean_object* v_fst_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; uint8_t v___x_4718_; 
v___x_4714_ = lean_imported_consts_force_shared(v_expanded_4711_);
lean_dec_ref(v_expanded_4711_);
v_fst_4715_ = lean_ctor_get(v___x_4714_, 0);
lean_inc(v_fst_4715_);
lean_dec(v___x_4714_);
v___x_4716_ = lean_unsigned_to_nat(0u);
v___x_4717_ = lean_array_get_size(v_fst_4715_);
v___x_4718_ = lean_nat_dec_lt(v___x_4716_, v___x_4717_);
if (v___x_4718_ == 0)
{
lean_dec(v_fst_4715_);
lean_dec(v_f_4691_);
return v_s_4713_;
}
else
{
size_t v___x_4719_; size_t v___x_4720_; lean_object* v___x_4721_; 
v___x_4719_ = ((size_t)0ULL);
v___x_4720_ = lean_usize_of_nat(v___x_4717_);
v___x_4721_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(v_f_4691_, v_fst_4715_, v___x_4719_, v___x_4720_, v_s_4713_);
lean_dec(v_fst_4715_);
return v___x_4721_;
}
}
}
default: 
{
lean_object* v_tree_4726_; 
v_tree_4726_ = lean_ctor_get(v_t_4690_, 1);
lean_inc_ref(v_tree_4726_);
lean_dec_ref_known(v_t_4690_, 2);
v_t_4690_ = v_tree_4726_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(lean_object* v_f_4728_, lean_object* v_as_4729_, size_t v_i_4730_, size_t v_stop_4731_, lean_object* v_b_4732_){
_start:
{
uint8_t v___x_4733_; 
v___x_4733_ = lean_usize_dec_eq(v_i_4730_, v_stop_4731_);
if (v___x_4733_ == 0)
{
lean_object* v___x_4734_; lean_object* v___x_4735_; size_t v___x_4736_; size_t v___x_4737_; 
v___x_4734_ = lean_array_uget_borrowed(v_as_4729_, v_i_4730_);
lean_inc(v_f_4728_);
lean_inc(v___x_4734_);
v___x_4735_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v___x_4734_, v_f_4728_, v_b_4732_);
v___x_4736_ = ((size_t)1ULL);
v___x_4737_ = lean_usize_add(v_i_4730_, v___x_4736_);
v_i_4730_ = v___x_4737_;
v_b_4732_ = v___x_4735_;
goto _start;
}
else
{
lean_dec(v_f_4728_);
return v_b_4732_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_f_4739_, lean_object* v_as_4740_, lean_object* v_i_4741_, lean_object* v_stop_4742_, lean_object* v_b_4743_){
_start:
{
size_t v_i_boxed_4744_; size_t v_stop_boxed_4745_; lean_object* v_res_4746_; 
v_i_boxed_4744_ = lean_unbox_usize(v_i_4741_);
lean_dec(v_i_4741_);
v_stop_boxed_4745_ = lean_unbox_usize(v_stop_4742_);
lean_dec(v_stop_4742_);
v_res_4746_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(v_f_4739_, v_as_4740_, v_i_boxed_4744_, v_stop_boxed_4745_, v_b_4743_);
lean_dec_ref(v_as_4740_);
return v_res_4746_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl___redArg(lean_object* v_t_4747_, lean_object* v_f_4748_, lean_object* v_init_4749_){
_start:
{
lean_object* v___x_4750_; 
v___x_4750_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_t_4747_, v_f_4748_, v_init_4749_);
return v___x_4750_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl(lean_object* v_00_u03b1_4751_, lean_object* v_00_u03c3_4752_, lean_object* v_t_4753_, lean_object* v_f_4754_, lean_object* v_init_4755_){
_start:
{
lean_object* v___x_4756_; 
v___x_4756_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_t_4753_, v_f_4754_, v_init_4755_);
return v___x_4756_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(lean_object* v_t_4757_, lean_object* v_f_4758_, lean_object* v_init_4759_){
_start:
{
lean_object* v___x_4760_; 
v___x_4760_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_t_4757_, v_f_4758_, v_init_4759_);
return v___x_4760_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0(lean_object* v_00_u03b1_4761_, lean_object* v_00_u03c3_4762_, lean_object* v_t_4763_, lean_object* v_f_4764_, lean_object* v_init_4765_){
_start:
{
lean_object* v___x_4766_; 
v___x_4766_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_t_4763_, v_f_4764_, v_init_4765_);
return v___x_4766_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0(lean_object* v_00_u03b1_4767_, lean_object* v_00_u03c3_4768_, lean_object* v_t_4769_, lean_object* v_f_4770_, lean_object* v_init_4771_){
_start:
{
lean_object* v___x_4772_; 
v___x_4772_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_t_4769_, v_f_4770_, v_init_4771_);
return v___x_4772_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_4773_, lean_object* v_00_u03c3_4774_, lean_object* v_t_4775_, lean_object* v_f_4776_, lean_object* v_init_4777_){
_start:
{
lean_object* v___x_4778_; 
v___x_4778_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_t_4775_, v_f_4776_, v_init_4777_);
return v___x_4778_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_4779_, lean_object* v_00_u03c3_4780_, lean_object* v_f_4781_, lean_object* v_as_4782_, size_t v_i_4783_, size_t v_stop_4784_, lean_object* v_b_4785_){
_start:
{
lean_object* v___x_4786_; 
v___x_4786_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(v_f_4781_, v_as_4782_, v_i_4783_, v_stop_4784_, v_b_4785_);
return v___x_4786_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_4787_, lean_object* v_00_u03c3_4788_, lean_object* v_f_4789_, lean_object* v_as_4790_, lean_object* v_i_4791_, lean_object* v_stop_4792_, lean_object* v_b_4793_){
_start:
{
size_t v_i_boxed_4794_; size_t v_stop_boxed_4795_; lean_object* v_res_4796_; 
v_i_boxed_4794_ = lean_unbox_usize(v_i_4791_);
lean_dec(v_i_4791_);
v_stop_boxed_4795_ = lean_unbox_usize(v_stop_4792_);
lean_dec(v_stop_4792_);
v_res_4796_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2(v_00_u03b1_4787_, v_00_u03c3_4788_, v_f_4789_, v_as_4790_, v_i_boxed_4794_, v_stop_boxed_4795_, v_b_4793_);
lean_dec_ref(v_as_4790_);
return v_res_4796_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_4797_, lean_object* v_00_u03c3_4798_, lean_object* v_f_4799_, lean_object* v_as_4800_, size_t v_i_4801_, size_t v_stop_4802_, lean_object* v_b_4803_){
_start:
{
lean_object* v___x_4804_; 
v___x_4804_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(v_f_4799_, v_as_4800_, v_i_4801_, v_stop_4802_, v_b_4803_);
return v___x_4804_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_4805_, lean_object* v_00_u03c3_4806_, lean_object* v_f_4807_, lean_object* v_as_4808_, lean_object* v_i_4809_, lean_object* v_stop_4810_, lean_object* v_b_4811_){
_start:
{
size_t v_i_boxed_4812_; size_t v_stop_boxed_4813_; lean_object* v_res_4814_; 
v_i_boxed_4812_ = lean_unbox_usize(v_i_4809_);
lean_dec(v_i_4809_);
v_stop_boxed_4813_ = lean_unbox_usize(v_stop_4810_);
lean_dec(v_stop_4810_);
v_res_4814_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_4805_, v_00_u03c3_4806_, v_f_4807_, v_as_4808_, v_i_boxed_4812_, v_stop_boxed_4813_, v_b_4811_);
lean_dec_ref(v_as_4808_);
return v_res_4814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesMAux___redArg___lam__0(lean_object* v_modIdx_4815_, lean_object* v_f_4816_, lean_object* v_s_4817_, lean_object* v_n_4818_, lean_object* v_v_4819_){
_start:
{
lean_object* v___x_4820_; lean_object* v___x_4821_; 
v___x_4820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4820_, 0, v_v_4819_);
lean_ctor_set(v___x_4820_, 1, v_modIdx_4815_);
v___x_4821_ = lean_apply_3(v_f_4816_, v_s_4817_, v_n_4818_, v___x_4820_);
return v___x_4821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesMAux___redArg(lean_object* v_inst_4822_, lean_object* v_t_4823_, lean_object* v_f_4824_, lean_object* v_init_4825_){
_start:
{
switch(lean_obj_tag(v_t_4823_))
{
case 0:
{
lean_object* v_modIdx_4826_; lean_object* v_tree_4827_; lean_object* v___f_4828_; lean_object* v___x_4829_; 
v_modIdx_4826_ = lean_ctor_get(v_t_4823_, 0);
lean_inc(v_modIdx_4826_);
v_tree_4827_ = lean_ctor_get(v_t_4823_, 1);
lean_inc_ref(v_tree_4827_);
lean_dec_ref_known(v_t_4823_, 2);
v___f_4828_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesMAux___redArg___lam__0), 5, 2);
lean_closure_set(v___f_4828_, 0, v_modIdx_4826_);
lean_closure_set(v___f_4828_, 1, v_f_4824_);
v___x_4829_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_4822_, v_tree_4827_, v___f_4828_, v_init_4825_);
return v___x_4829_;
}
case 1:
{
lean_object* v_toApplicative_4830_; lean_object* v_toBind_4831_; lean_object* v_key_4832_; lean_object* v_entry_x3f_4833_; lean_object* v_children_4834_; lean_object* v___f_4835_; lean_object* v___f_4836_; 
v_toApplicative_4830_ = lean_ctor_get(v_inst_4822_, 0);
lean_inc_ref_n(v_toApplicative_4830_, 2);
v_toBind_4831_ = lean_ctor_get(v_inst_4822_, 1);
v_key_4832_ = lean_ctor_get(v_t_4823_, 0);
lean_inc(v_key_4832_);
v_entry_x3f_4833_ = lean_ctor_get(v_t_4823_, 1);
lean_inc(v_entry_x3f_4833_);
v_children_4834_ = lean_ctor_get(v_t_4823_, 2);
lean_inc_ref_n(v_children_4834_, 2);
lean_dec_ref_known(v_t_4823_, 4);
lean_inc(v_f_4824_);
lean_inc_ref_n(v_inst_4822_, 2);
v___f_4835_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesMAux___redArg___lam__1), 4, 2);
lean_closure_set(v___f_4835_, 0, v_inst_4822_);
lean_closure_set(v___f_4835_, 1, v_f_4824_);
lean_inc_ref(v___f_4835_);
v___f_4836_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__1), 6, 4);
lean_closure_set(v___f_4836_, 0, v_toApplicative_4830_);
lean_closure_set(v___f_4836_, 1, v_children_4834_);
lean_closure_set(v___f_4836_, 2, v_inst_4822_);
lean_closure_set(v___f_4836_, 3, v___f_4835_);
if (lean_obj_tag(v_entry_x3f_4833_) == 1)
{
lean_object* v_val_4837_; lean_object* v___f_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; 
lean_inc(v_toBind_4831_);
lean_dec_ref(v___f_4835_);
lean_dec_ref(v_children_4834_);
lean_dec_ref(v_toApplicative_4830_);
lean_dec_ref(v_inst_4822_);
v_val_4837_ = lean_ctor_get(v_entry_x3f_4833_, 0);
lean_inc(v_val_4837_);
lean_dec_ref_known(v_entry_x3f_4833_, 1);
v___f_4838_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4838_, 0, v___f_4836_);
v___x_4839_ = lean_apply_3(v_f_4824_, v_init_4825_, v_key_4832_, v_val_4837_);
v___x_4840_ = lean_apply_4(v_toBind_4831_, lean_box(0), lean_box(0), v___x_4839_, v___f_4838_);
return v___x_4840_;
}
else
{
lean_object* v___x_4841_; lean_object* v___x_4842_; 
lean_dec_ref(v___f_4836_);
lean_dec(v_entry_x3f_4833_);
lean_dec(v_key_4832_);
lean_dec(v_f_4824_);
v___x_4841_ = lean_box(0);
v___x_4842_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__1(v_toApplicative_4830_, v_children_4834_, v_inst_4822_, v___f_4835_, v___x_4841_, v_init_4825_);
return v___x_4842_;
}
}
case 2:
{
lean_object* v_toApplicative_4843_; lean_object* v_toBind_4844_; lean_object* v_key_4845_; lean_object* v_entry_4846_; lean_object* v_expanded_4847_; lean_object* v___f_4848_; lean_object* v___f_4849_; lean_object* v___x_4850_; 
v_toApplicative_4843_ = lean_ctor_get(v_inst_4822_, 0);
lean_inc_ref_n(v_toApplicative_4843_, 2);
v_toBind_4844_ = lean_ctor_get(v_inst_4822_, 1);
v_key_4845_ = lean_ctor_get(v_t_4823_, 0);
lean_inc(v_key_4845_);
v_entry_4846_ = lean_ctor_get(v_t_4823_, 1);
lean_inc_ref(v_entry_4846_);
v_expanded_4847_ = lean_ctor_get(v_t_4823_, 2);
lean_inc_ref_n(v_expanded_4847_, 2);
lean_dec_ref_known(v_t_4823_, 3);
lean_inc(v_f_4824_);
lean_inc_ref_n(v_inst_4822_, 2);
v___f_4848_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesMAux___redArg___lam__1), 4, 2);
lean_closure_set(v___f_4848_, 0, v_inst_4822_);
lean_closure_set(v___f_4848_, 1, v_f_4824_);
lean_inc_ref(v___f_4848_);
v___f_4849_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_4849_, 0, v_expanded_4847_);
lean_closure_set(v___f_4849_, 1, v_toApplicative_4843_);
lean_closure_set(v___f_4849_, 2, v_inst_4822_);
lean_closure_set(v___f_4849_, 3, v___f_4848_);
v___x_4850_ = lean_imported_consts_force_shared(v_entry_4846_);
lean_dec_ref(v_entry_4846_);
if (lean_obj_tag(v___x_4850_) == 1)
{
lean_object* v_val_4851_; lean_object* v___f_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; 
lean_inc(v_toBind_4844_);
lean_dec_ref(v___f_4848_);
lean_dec_ref(v_expanded_4847_);
lean_dec_ref(v_toApplicative_4843_);
lean_dec_ref(v_inst_4822_);
v_val_4851_ = lean_ctor_get(v___x_4850_, 0);
lean_inc(v_val_4851_);
lean_dec_ref_known(v___x_4850_, 1);
v___f_4852_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4852_, 0, v___f_4849_);
v___x_4853_ = lean_apply_3(v_f_4824_, v_init_4825_, v_key_4845_, v_val_4851_);
v___x_4854_ = lean_apply_4(v_toBind_4844_, lean_box(0), lean_box(0), v___x_4853_, v___f_4852_);
return v___x_4854_;
}
else
{
lean_object* v___x_4855_; lean_object* v___x_4856_; 
lean_dec(v___x_4850_);
lean_dec_ref(v___f_4849_);
lean_dec(v_key_4845_);
lean_dec(v_f_4824_);
v___x_4855_ = lean_box(0);
v___x_4856_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg___lam__4(v_expanded_4847_, v_toApplicative_4843_, v_inst_4822_, v___f_4848_, v___x_4855_, v_init_4825_);
lean_dec_ref(v_expanded_4847_);
return v___x_4856_;
}
}
default: 
{
lean_object* v_tree_4857_; 
v_tree_4857_ = lean_ctor_get(v_t_4823_, 1);
lean_inc_ref(v_tree_4857_);
lean_dec_ref_known(v_t_4823_, 2);
v_t_4823_ = v_tree_4857_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesMAux___redArg___lam__1(lean_object* v_inst_4859_, lean_object* v_f_4860_, lean_object* v_s_4861_, lean_object* v_c_4862_){
_start:
{
lean_object* v___x_4863_; 
v___x_4863_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesMAux___redArg(v_inst_4859_, v_c_4862_, v_f_4860_, v_s_4861_);
return v___x_4863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesMAux(lean_object* v_m_4864_, lean_object* v_00_u03b1_4865_, lean_object* v_00_u03c3_4866_, lean_object* v_inst_4867_, lean_object* v_t_4868_, lean_object* v_f_4869_, lean_object* v_init_4870_){
_start:
{
lean_object* v___x_4871_; 
v___x_4871_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesMAux___redArg(v_inst_4867_, v_t_4868_, v_f_4869_, v_init_4870_);
return v___x_4871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesM___redArg(lean_object* v_inst_4872_, lean_object* v_t_4873_, lean_object* v_f_4874_, lean_object* v_init_4875_){
_start:
{
lean_object* v___x_4876_; 
v___x_4876_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesMAux___redArg(v_inst_4872_, v_t_4873_, v_f_4874_, v_init_4875_);
return v___x_4876_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesM(lean_object* v_m_4877_, lean_object* v_00_u03b1_4878_, lean_object* v_00_u03c3_4879_, lean_object* v_inst_4880_, lean_object* v_t_4881_, lean_object* v_f_4882_, lean_object* v_init_4883_){
_start:
{
lean_object* v___x_4884_; 
v___x_4884_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlEntriesMAux___redArg(v_inst_4880_, v_t_4881_, v_f_4882_, v_init_4883_);
return v___x_4884_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg___lam__0(lean_object* v_f_4885_, lean_object* v_x_4886_, lean_object* v_n_4887_, lean_object* v_v_4888_){
_start:
{
lean_object* v___x_4889_; 
v___x_4889_ = lean_apply_2(v_f_4885_, v_n_4887_, v_v_4888_);
return v___x_4889_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg(lean_object* v_inst_4890_, lean_object* v_t_4891_, lean_object* v_f_4892_){
_start:
{
lean_object* v___f_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; 
v___f_4893_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_forM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_4893_, 0, v_f_4892_);
v___x_4894_ = lean_box(0);
v___x_4895_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg(v_inst_4890_, v_t_4891_, v___f_4893_, v___x_4894_);
return v___x_4895_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM(lean_object* v_m_4896_, lean_object* v_00_u03b1_4897_, lean_object* v_inst_4898_, lean_object* v_t_4899_, lean_object* v_f_4900_){
_start:
{
lean_object* v___x_4901_; 
v___x_4901_ = l_Lean_ImportedConsts_forM___redArg(v_inst_4898_, v_t_4899_, v_f_4900_);
return v___x_4901_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0(lean_object* v_n_4902_, lean_object* v_x_4903_, lean_object* v_x_4904_){
_start:
{
lean_object* v___x_4905_; lean_object* v___x_4906_; 
v___x_4905_ = lean_unsigned_to_nat(1u);
v___x_4906_ = lean_nat_add(v_n_4902_, v___x_4905_);
return v___x_4906_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_n_4907_, lean_object* v_x_4908_, lean_object* v_x_4909_){
_start:
{
lean_object* v_res_4910_; 
v_res_4910_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0(v_n_4907_, v_x_4908_, v_x_4909_);
lean_dec(v_x_4909_);
lean_dec(v_x_4908_);
lean_dec(v_n_4907_);
return v_res_4910_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(lean_object* v_t_4911_, lean_object* v_init_4912_){
_start:
{
lean_object* v_val_x3f_4913_; lean_object* v_children_4914_; lean_object* v_s_4916_; 
v_val_x3f_4913_ = lean_ctor_get(v_t_4911_, 1);
v_children_4914_ = lean_ctor_get(v_t_4911_, 2);
if (lean_obj_tag(v_val_x3f_4913_) == 1)
{
lean_object* v___x_4923_; lean_object* v___x_4924_; 
v___x_4923_ = lean_unsigned_to_nat(1u);
v___x_4924_ = lean_nat_add(v_init_4912_, v___x_4923_);
lean_dec(v_init_4912_);
v_s_4916_ = v___x_4924_;
goto v___jp_4915_;
}
else
{
v_s_4916_ = v_init_4912_;
goto v___jp_4915_;
}
v___jp_4915_:
{
lean_object* v___x_4917_; lean_object* v___x_4918_; uint8_t v___x_4919_; 
v___x_4917_ = lean_unsigned_to_nat(0u);
v___x_4918_ = lean_array_get_size(v_children_4914_);
v___x_4919_ = lean_nat_dec_lt(v___x_4917_, v___x_4918_);
if (v___x_4919_ == 0)
{
return v_s_4916_;
}
else
{
size_t v___x_4920_; size_t v___x_4921_; lean_object* v___x_4922_; 
v___x_4920_ = ((size_t)0ULL);
v___x_4921_ = lean_usize_of_nat(v___x_4918_);
v___x_4922_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(v_children_4914_, v___x_4920_, v___x_4921_, v_s_4916_);
return v___x_4922_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_as_4925_, size_t v_i_4926_, size_t v_stop_4927_, lean_object* v_b_4928_){
_start:
{
uint8_t v___x_4929_; 
v___x_4929_ = lean_usize_dec_eq(v_i_4926_, v_stop_4927_);
if (v___x_4929_ == 0)
{
lean_object* v___x_4930_; lean_object* v___x_4931_; size_t v___x_4932_; size_t v___x_4933_; 
v___x_4930_ = lean_array_uget_borrowed(v_as_4925_, v_i_4926_);
v___x_4931_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v___x_4930_, v_b_4928_);
v___x_4932_ = ((size_t)1ULL);
v___x_4933_ = lean_usize_add(v_i_4926_, v___x_4932_);
v_i_4926_ = v___x_4933_;
v_b_4928_ = v___x_4931_;
goto _start;
}
else
{
return v_b_4928_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_as_4935_, lean_object* v_i_4936_, lean_object* v_stop_4937_, lean_object* v_b_4938_){
_start:
{
size_t v_i_boxed_4939_; size_t v_stop_boxed_4940_; lean_object* v_res_4941_; 
v_i_boxed_4939_ = lean_unbox_usize(v_i_4936_);
lean_dec(v_i_4936_);
v_stop_boxed_4940_ = lean_unbox_usize(v_stop_4937_);
lean_dec(v_stop_4937_);
v_res_4941_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(v_as_4935_, v_i_boxed_4939_, v_stop_boxed_4940_, v_b_4938_);
lean_dec_ref(v_as_4935_);
return v_res_4941_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_t_4942_, lean_object* v_init_4943_){
_start:
{
lean_object* v_res_4944_; 
v_res_4944_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_t_4942_, v_init_4943_);
lean_dec_ref(v_t_4942_);
return v_res_4944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(lean_object* v_t_4945_, lean_object* v_init_4946_){
_start:
{
switch(lean_obj_tag(v_t_4945_))
{
case 0:
{
lean_object* v_tree_4947_; lean_object* v___x_4948_; 
v_tree_4947_ = lean_ctor_get(v_t_4945_, 1);
v___x_4948_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_tree_4947_, v_init_4946_);
return v___x_4948_;
}
case 1:
{
lean_object* v_key_4949_; lean_object* v_entry_x3f_4950_; lean_object* v_children_4951_; lean_object* v_s_4953_; 
v_key_4949_ = lean_ctor_get(v_t_4945_, 0);
v_entry_x3f_4950_ = lean_ctor_get(v_t_4945_, 1);
v_children_4951_ = lean_ctor_get(v_t_4945_, 2);
if (lean_obj_tag(v_entry_x3f_4950_) == 1)
{
lean_object* v_val_4960_; lean_object* v_fst_4961_; lean_object* v___x_4962_; 
v_val_4960_ = lean_ctor_get(v_entry_x3f_4950_, 0);
v_fst_4961_ = lean_ctor_get(v_val_4960_, 0);
v___x_4962_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0(v_init_4946_, v_key_4949_, v_fst_4961_);
lean_dec(v_init_4946_);
v_s_4953_ = v___x_4962_;
goto v___jp_4952_;
}
else
{
v_s_4953_ = v_init_4946_;
goto v___jp_4952_;
}
v___jp_4952_:
{
lean_object* v___x_4954_; lean_object* v___x_4955_; uint8_t v___x_4956_; 
v___x_4954_ = lean_unsigned_to_nat(0u);
v___x_4955_ = lean_array_get_size(v_children_4951_);
v___x_4956_ = lean_nat_dec_lt(v___x_4954_, v___x_4955_);
if (v___x_4956_ == 0)
{
return v_s_4953_;
}
else
{
size_t v___x_4957_; size_t v___x_4958_; lean_object* v___x_4959_; 
v___x_4957_ = ((size_t)0ULL);
v___x_4958_ = lean_usize_of_nat(v___x_4955_);
v___x_4959_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(v_children_4951_, v___x_4957_, v___x_4958_, v_s_4953_);
return v___x_4959_;
}
}
}
case 2:
{
lean_object* v_key_4963_; lean_object* v_entry_4964_; lean_object* v_expanded_4965_; lean_object* v_s_4967_; lean_object* v___x_4976_; 
v_key_4963_ = lean_ctor_get(v_t_4945_, 0);
v_entry_4964_ = lean_ctor_get(v_t_4945_, 1);
v_expanded_4965_ = lean_ctor_get(v_t_4945_, 2);
v___x_4976_ = lean_imported_consts_force_shared(v_entry_4964_);
if (lean_obj_tag(v___x_4976_) == 1)
{
lean_object* v_val_4977_; lean_object* v_fst_4978_; lean_object* v___x_4979_; 
v_val_4977_ = lean_ctor_get(v___x_4976_, 0);
lean_inc(v_val_4977_);
lean_dec_ref_known(v___x_4976_, 1);
v_fst_4978_ = lean_ctor_get(v_val_4977_, 0);
lean_inc(v_fst_4978_);
lean_dec(v_val_4977_);
v___x_4979_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0(v_init_4946_, v_key_4963_, v_fst_4978_);
lean_dec(v_fst_4978_);
lean_dec(v_init_4946_);
v_s_4967_ = v___x_4979_;
goto v___jp_4966_;
}
else
{
lean_dec(v___x_4976_);
v_s_4967_ = v_init_4946_;
goto v___jp_4966_;
}
v___jp_4966_:
{
lean_object* v___x_4968_; lean_object* v_fst_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; uint8_t v___x_4972_; 
v___x_4968_ = lean_imported_consts_force_shared(v_expanded_4965_);
v_fst_4969_ = lean_ctor_get(v___x_4968_, 0);
lean_inc(v_fst_4969_);
lean_dec(v___x_4968_);
v___x_4970_ = lean_unsigned_to_nat(0u);
v___x_4971_ = lean_array_get_size(v_fst_4969_);
v___x_4972_ = lean_nat_dec_lt(v___x_4970_, v___x_4971_);
if (v___x_4972_ == 0)
{
lean_dec(v_fst_4969_);
return v_s_4967_;
}
else
{
size_t v___x_4973_; size_t v___x_4974_; lean_object* v___x_4975_; 
v___x_4973_ = ((size_t)0ULL);
v___x_4974_ = lean_usize_of_nat(v___x_4971_);
v___x_4975_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(v_fst_4969_, v___x_4973_, v___x_4974_, v_s_4967_);
lean_dec(v_fst_4969_);
return v___x_4975_;
}
}
}
default: 
{
lean_object* v_tree_4980_; 
v_tree_4980_ = lean_ctor_get(v_t_4945_, 1);
v_t_4945_ = v_tree_4980_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(lean_object* v_as_4982_, size_t v_i_4983_, size_t v_stop_4984_, lean_object* v_b_4985_){
_start:
{
uint8_t v___x_4986_; 
v___x_4986_ = lean_usize_dec_eq(v_i_4983_, v_stop_4984_);
if (v___x_4986_ == 0)
{
lean_object* v___x_4987_; lean_object* v___x_4988_; size_t v___x_4989_; size_t v___x_4990_; 
v___x_4987_ = lean_array_uget_borrowed(v_as_4982_, v_i_4983_);
v___x_4988_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v___x_4987_, v_b_4985_);
v___x_4989_ = ((size_t)1ULL);
v___x_4990_ = lean_usize_add(v_i_4983_, v___x_4989_);
v_i_4983_ = v___x_4990_;
v_b_4985_ = v___x_4988_;
goto _start;
}
else
{
return v_b_4985_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_as_4992_, lean_object* v_i_4993_, lean_object* v_stop_4994_, lean_object* v_b_4995_){
_start:
{
size_t v_i_boxed_4996_; size_t v_stop_boxed_4997_; lean_object* v_res_4998_; 
v_i_boxed_4996_ = lean_unbox_usize(v_i_4993_);
lean_dec(v_i_4993_);
v_stop_boxed_4997_ = lean_unbox_usize(v_stop_4994_);
lean_dec(v_stop_4994_);
v_res_4998_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(v_as_4992_, v_i_boxed_4996_, v_stop_boxed_4997_, v_b_4995_);
lean_dec_ref(v_as_4992_);
return v_res_4998_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___boxed(lean_object* v_t_4999_, lean_object* v_init_5000_){
_start:
{
lean_object* v_res_5001_; 
v_res_5001_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_4999_, v_init_5000_);
lean_dec_ref(v_t_4999_);
return v_res_5001_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg(lean_object* v_t_5002_){
_start:
{
lean_object* v___x_5003_; lean_object* v___x_5004_; 
v___x_5003_ = lean_unsigned_to_nat(0u);
v___x_5004_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_5002_, v___x_5003_);
return v___x_5004_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg___boxed(lean_object* v_t_5005_){
_start:
{
lean_object* v_res_5006_; 
v_res_5006_ = l_Lean_ImportedConsts_size___redArg(v_t_5005_);
lean_dec_ref(v_t_5005_);
return v_res_5006_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size(lean_object* v_00_u03b1_5007_, lean_object* v_t_5008_){
_start:
{
lean_object* v___x_5009_; 
v___x_5009_ = l_Lean_ImportedConsts_size___redArg(v_t_5008_);
return v___x_5009_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___boxed(lean_object* v_00_u03b1_5010_, lean_object* v_t_5011_){
_start:
{
lean_object* v_res_5012_; 
v_res_5012_ = l_Lean_ImportedConsts_size(v_00_u03b1_5010_, v_t_5011_);
lean_dec_ref(v_t_5011_);
return v_res_5012_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(lean_object* v_t_5013_, lean_object* v_init_5014_){
_start:
{
lean_object* v___x_5015_; 
v___x_5015_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_5013_, v_init_5014_);
return v___x_5015_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___boxed(lean_object* v_t_5016_, lean_object* v_init_5017_){
_start:
{
lean_object* v_res_5018_; 
v_res_5018_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_5016_, v_init_5017_);
lean_dec_ref(v_t_5016_);
return v_res_5018_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(lean_object* v_00_u03b1_5019_, lean_object* v_t_5020_, lean_object* v_init_5021_){
_start:
{
lean_object* v___x_5022_; 
v___x_5022_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_5020_, v_init_5021_);
return v___x_5022_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___boxed(lean_object* v_00_u03b1_5023_, lean_object* v_t_5024_, lean_object* v_init_5025_){
_start:
{
lean_object* v_res_5026_; 
v_res_5026_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(v_00_u03b1_5023_, v_t_5024_, v_init_5025_);
lean_dec_ref(v_t_5024_);
return v_res_5026_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(lean_object* v_00_u03b1_5027_, lean_object* v_t_5028_, lean_object* v_init_5029_){
_start:
{
lean_object* v___x_5030_; 
v___x_5030_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_5028_, v_init_5029_);
return v___x_5030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5031_, lean_object* v_t_5032_, lean_object* v_init_5033_){
_start:
{
lean_object* v_res_5034_; 
v_res_5034_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(v_00_u03b1_5031_, v_t_5032_, v_init_5033_);
lean_dec_ref(v_t_5032_);
return v_res_5034_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5035_, lean_object* v_t_5036_, lean_object* v_init_5037_){
_start:
{
lean_object* v___x_5038_; 
v___x_5038_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_t_5036_, v_init_5037_);
return v___x_5038_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5039_, lean_object* v_t_5040_, lean_object* v_init_5041_){
_start:
{
lean_object* v_res_5042_; 
v_res_5042_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(v_00_u03b1_5039_, v_t_5040_, v_init_5041_);
lean_dec_ref(v_t_5040_);
return v_res_5042_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_5043_, lean_object* v_as_5044_, size_t v_i_5045_, size_t v_stop_5046_, lean_object* v_b_5047_){
_start:
{
lean_object* v___x_5048_; 
v___x_5048_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(v_as_5044_, v_i_5045_, v_stop_5046_, v_b_5047_);
return v___x_5048_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_5049_, lean_object* v_as_5050_, lean_object* v_i_5051_, lean_object* v_stop_5052_, lean_object* v_b_5053_){
_start:
{
size_t v_i_boxed_5054_; size_t v_stop_boxed_5055_; lean_object* v_res_5056_; 
v_i_boxed_5054_ = lean_unbox_usize(v_i_5051_);
lean_dec(v_i_5051_);
v_stop_boxed_5055_ = lean_unbox_usize(v_stop_5052_);
lean_dec(v_stop_5052_);
v_res_5056_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2(v_00_u03b1_5049_, v_as_5050_, v_i_boxed_5054_, v_stop_boxed_5055_, v_b_5053_);
lean_dec_ref(v_as_5050_);
return v_res_5056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_5057_, lean_object* v_as_5058_, size_t v_i_5059_, size_t v_stop_5060_, lean_object* v_b_5061_){
_start:
{
lean_object* v___x_5062_; 
v___x_5062_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(v_as_5058_, v_i_5059_, v_stop_5060_, v_b_5061_);
return v___x_5062_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_5063_, lean_object* v_as_5064_, lean_object* v_i_5065_, lean_object* v_stop_5066_, lean_object* v_b_5067_){
_start:
{
size_t v_i_boxed_5068_; size_t v_stop_boxed_5069_; lean_object* v_res_5070_; 
v_i_boxed_5068_ = lean_unbox_usize(v_i_5065_);
lean_dec(v_i_5065_);
v_stop_boxed_5069_ = lean_unbox_usize(v_stop_5066_);
lean_dec(v_stop_5066_);
v_res_5070_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_5063_, v_as_5064_, v_i_boxed_5068_, v_stop_boxed_5069_, v_b_5067_);
lean_dec_ref(v_as_5064_);
return v_res_5070_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold___redArg(lean_object* v_t_5071_, lean_object* v_f_5072_, lean_object* v_init_5073_){
_start:
{
lean_object* v___x_5074_; 
v___x_5074_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_t_5071_, v_f_5072_, v_init_5073_);
return v___x_5074_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold(lean_object* v_00_u03b1_5075_, lean_object* v_00_u03c3_5076_, lean_object* v_t_5077_, lean_object* v_f_5078_, lean_object* v_init_5079_){
_start:
{
lean_object* v___x_5080_; 
v___x_5080_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_t_5077_, v_f_5078_, v_init_5079_);
return v___x_5080_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM___redArg(lean_object* v_inst_5081_, lean_object* v_t_5082_, lean_object* v_f_5083_, lean_object* v_init_5084_){
_start:
{
lean_object* v___x_5085_; 
v___x_5085_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg(v_inst_5081_, v_t_5082_, v_f_5083_, v_init_5084_);
return v___x_5085_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM(lean_object* v_m_5086_, lean_object* v_00_u03b1_5087_, lean_object* v_00_u03c3_5088_, lean_object* v_inst_5089_, lean_object* v_t_5090_, lean_object* v_f_5091_, lean_object* v_init_5092_){
_start:
{
lean_object* v___x_5093_; 
v___x_5093_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg(v_inst_5089_, v_t_5090_, v_f_5091_, v_init_5092_);
return v___x_5093_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(lean_object* v_t_5094_, lean_object* v_init_5095_){
_start:
{
lean_object* v_key_5096_; lean_object* v_val_x3f_5097_; lean_object* v_children_5098_; lean_object* v_s_5100_; 
v_key_5096_ = lean_ctor_get(v_t_5094_, 0);
v_val_x3f_5097_ = lean_ctor_get(v_t_5094_, 1);
v_children_5098_ = lean_ctor_get(v_t_5094_, 2);
if (lean_obj_tag(v_val_x3f_5097_) == 1)
{
lean_object* v_val_5107_; lean_object* v___x_5108_; lean_object* v___x_5109_; 
v_val_5107_ = lean_ctor_get(v_val_x3f_5097_, 0);
lean_inc(v_val_5107_);
lean_inc(v_key_5096_);
v___x_5108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5108_, 0, v_key_5096_);
lean_ctor_set(v___x_5108_, 1, v_val_5107_);
v___x_5109_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5109_, 0, v___x_5108_);
lean_ctor_set(v___x_5109_, 1, v_init_5095_);
v_s_5100_ = v___x_5109_;
goto v___jp_5099_;
}
else
{
v_s_5100_ = v_init_5095_;
goto v___jp_5099_;
}
v___jp_5099_:
{
lean_object* v___x_5101_; lean_object* v___x_5102_; uint8_t v___x_5103_; 
v___x_5101_ = lean_unsigned_to_nat(0u);
v___x_5102_ = lean_array_get_size(v_children_5098_);
v___x_5103_ = lean_nat_dec_lt(v___x_5101_, v___x_5102_);
if (v___x_5103_ == 0)
{
return v_s_5100_;
}
else
{
size_t v___x_5104_; size_t v___x_5105_; lean_object* v___x_5106_; 
v___x_5104_ = ((size_t)0ULL);
v___x_5105_ = lean_usize_of_nat(v___x_5102_);
v___x_5106_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1_spec__2___redArg(v_children_5098_, v___x_5104_, v___x_5105_, v_s_5100_);
return v___x_5106_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_as_5110_, size_t v_i_5111_, size_t v_stop_5112_, lean_object* v_b_5113_){
_start:
{
uint8_t v___x_5114_; 
v___x_5114_ = lean_usize_dec_eq(v_i_5111_, v_stop_5112_);
if (v___x_5114_ == 0)
{
lean_object* v___x_5115_; lean_object* v___x_5116_; size_t v___x_5117_; size_t v___x_5118_; 
v___x_5115_ = lean_array_uget_borrowed(v_as_5110_, v_i_5111_);
v___x_5116_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v___x_5115_, v_b_5113_);
v___x_5117_ = ((size_t)1ULL);
v___x_5118_ = lean_usize_add(v_i_5111_, v___x_5117_);
v_i_5111_ = v___x_5118_;
v_b_5113_ = v___x_5116_;
goto _start;
}
else
{
return v_b_5113_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_as_5120_, lean_object* v_i_5121_, lean_object* v_stop_5122_, lean_object* v_b_5123_){
_start:
{
size_t v_i_boxed_5124_; size_t v_stop_boxed_5125_; lean_object* v_res_5126_; 
v_i_boxed_5124_ = lean_unbox_usize(v_i_5121_);
lean_dec(v_i_5121_);
v_stop_boxed_5125_ = lean_unbox_usize(v_stop_5122_);
lean_dec(v_stop_5122_);
v_res_5126_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1_spec__2___redArg(v_as_5120_, v_i_boxed_5124_, v_stop_boxed_5125_, v_b_5123_);
lean_dec_ref(v_as_5120_);
return v_res_5126_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_t_5127_, lean_object* v_init_5128_){
_start:
{
lean_object* v_res_5129_; 
v_res_5129_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v_t_5127_, v_init_5128_);
lean_dec_ref(v_t_5127_);
return v_res_5129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg___lam__0(lean_object* v_l_5130_, lean_object* v_n_5131_, lean_object* v_v_5132_){
_start:
{
lean_object* v___x_5133_; lean_object* v___x_5134_; 
v___x_5133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5133_, 0, v_n_5131_);
lean_ctor_set(v___x_5133_, 1, v_v_5132_);
v___x_5134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5134_, 0, v___x_5133_);
lean_ctor_set(v___x_5134_, 1, v_l_5130_);
return v___x_5134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(lean_object* v_t_5135_, lean_object* v_init_5136_){
_start:
{
switch(lean_obj_tag(v_t_5135_))
{
case 0:
{
lean_object* v_tree_5137_; lean_object* v___x_5138_; 
v_tree_5137_ = lean_ctor_get(v_t_5135_, 1);
lean_inc_ref(v_tree_5137_);
lean_dec_ref_known(v_t_5135_, 2);
v___x_5138_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v_tree_5137_, v_init_5136_);
lean_dec_ref(v_tree_5137_);
return v___x_5138_;
}
case 1:
{
lean_object* v_key_5139_; lean_object* v_entry_x3f_5140_; lean_object* v_children_5141_; lean_object* v_s_5143_; 
v_key_5139_ = lean_ctor_get(v_t_5135_, 0);
lean_inc(v_key_5139_);
v_entry_x3f_5140_ = lean_ctor_get(v_t_5135_, 1);
lean_inc(v_entry_x3f_5140_);
v_children_5141_ = lean_ctor_get(v_t_5135_, 2);
lean_inc_ref(v_children_5141_);
lean_dec_ref_known(v_t_5135_, 4);
if (lean_obj_tag(v_entry_x3f_5140_) == 1)
{
lean_object* v_val_5150_; lean_object* v_fst_5151_; lean_object* v___x_5152_; 
v_val_5150_ = lean_ctor_get(v_entry_x3f_5140_, 0);
lean_inc(v_val_5150_);
lean_dec_ref_known(v_entry_x3f_5140_, 1);
v_fst_5151_ = lean_ctor_get(v_val_5150_, 0);
lean_inc(v_fst_5151_);
lean_dec(v_val_5150_);
v___x_5152_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg___lam__0(v_init_5136_, v_key_5139_, v_fst_5151_);
v_s_5143_ = v___x_5152_;
goto v___jp_5142_;
}
else
{
lean_dec(v_entry_x3f_5140_);
lean_dec(v_key_5139_);
v_s_5143_ = v_init_5136_;
goto v___jp_5142_;
}
v___jp_5142_:
{
lean_object* v___x_5144_; lean_object* v___x_5145_; uint8_t v___x_5146_; 
v___x_5144_ = lean_unsigned_to_nat(0u);
v___x_5145_ = lean_array_get_size(v_children_5141_);
v___x_5146_ = lean_nat_dec_lt(v___x_5144_, v___x_5145_);
if (v___x_5146_ == 0)
{
lean_dec_ref(v_children_5141_);
return v_s_5143_;
}
else
{
size_t v___x_5147_; size_t v___x_5148_; lean_object* v___x_5149_; 
v___x_5147_ = ((size_t)0ULL);
v___x_5148_ = lean_usize_of_nat(v___x_5145_);
v___x_5149_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__2___redArg(v_children_5141_, v___x_5147_, v___x_5148_, v_s_5143_);
lean_dec_ref(v_children_5141_);
return v___x_5149_;
}
}
}
case 2:
{
lean_object* v_key_5153_; lean_object* v_entry_5154_; lean_object* v_expanded_5155_; lean_object* v_s_5157_; lean_object* v___x_5166_; 
v_key_5153_ = lean_ctor_get(v_t_5135_, 0);
lean_inc(v_key_5153_);
v_entry_5154_ = lean_ctor_get(v_t_5135_, 1);
lean_inc_ref(v_entry_5154_);
v_expanded_5155_ = lean_ctor_get(v_t_5135_, 2);
lean_inc_ref(v_expanded_5155_);
lean_dec_ref_known(v_t_5135_, 3);
v___x_5166_ = lean_imported_consts_force_shared(v_entry_5154_);
lean_dec_ref(v_entry_5154_);
if (lean_obj_tag(v___x_5166_) == 1)
{
lean_object* v_val_5167_; lean_object* v_fst_5168_; lean_object* v___x_5169_; 
v_val_5167_ = lean_ctor_get(v___x_5166_, 0);
lean_inc(v_val_5167_);
lean_dec_ref_known(v___x_5166_, 1);
v_fst_5168_ = lean_ctor_get(v_val_5167_, 0);
lean_inc(v_fst_5168_);
lean_dec(v_val_5167_);
v___x_5169_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg___lam__0(v_init_5136_, v_key_5153_, v_fst_5168_);
v_s_5157_ = v___x_5169_;
goto v___jp_5156_;
}
else
{
lean_dec(v___x_5166_);
lean_dec(v_key_5153_);
v_s_5157_ = v_init_5136_;
goto v___jp_5156_;
}
v___jp_5156_:
{
lean_object* v___x_5158_; lean_object* v_fst_5159_; lean_object* v___x_5160_; lean_object* v___x_5161_; uint8_t v___x_5162_; 
v___x_5158_ = lean_imported_consts_force_shared(v_expanded_5155_);
lean_dec_ref(v_expanded_5155_);
v_fst_5159_ = lean_ctor_get(v___x_5158_, 0);
lean_inc(v_fst_5159_);
lean_dec(v___x_5158_);
v___x_5160_ = lean_unsigned_to_nat(0u);
v___x_5161_ = lean_array_get_size(v_fst_5159_);
v___x_5162_ = lean_nat_dec_lt(v___x_5160_, v___x_5161_);
if (v___x_5162_ == 0)
{
lean_dec(v_fst_5159_);
return v_s_5157_;
}
else
{
size_t v___x_5163_; size_t v___x_5164_; lean_object* v___x_5165_; 
v___x_5163_ = ((size_t)0ULL);
v___x_5164_ = lean_usize_of_nat(v___x_5161_);
v___x_5165_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__2___redArg(v_fst_5159_, v___x_5163_, v___x_5164_, v_s_5157_);
lean_dec(v_fst_5159_);
return v___x_5165_;
}
}
}
default: 
{
lean_object* v_tree_5170_; 
v_tree_5170_ = lean_ctor_get(v_t_5135_, 1);
lean_inc_ref(v_tree_5170_);
lean_dec_ref_known(v_t_5135_, 2);
v_t_5135_ = v_tree_5170_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__2___redArg(lean_object* v_as_5172_, size_t v_i_5173_, size_t v_stop_5174_, lean_object* v_b_5175_){
_start:
{
uint8_t v___x_5176_; 
v___x_5176_ = lean_usize_dec_eq(v_i_5173_, v_stop_5174_);
if (v___x_5176_ == 0)
{
lean_object* v___x_5177_; lean_object* v___x_5178_; size_t v___x_5179_; size_t v___x_5180_; 
v___x_5177_ = lean_array_uget_borrowed(v_as_5172_, v_i_5173_);
lean_inc(v___x_5177_);
v___x_5178_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v___x_5177_, v_b_5175_);
v___x_5179_ = ((size_t)1ULL);
v___x_5180_ = lean_usize_add(v_i_5173_, v___x_5179_);
v_i_5173_ = v___x_5180_;
v_b_5175_ = v___x_5178_;
goto _start;
}
else
{
return v_b_5175_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_as_5182_, lean_object* v_i_5183_, lean_object* v_stop_5184_, lean_object* v_b_5185_){
_start:
{
size_t v_i_boxed_5186_; size_t v_stop_boxed_5187_; lean_object* v_res_5188_; 
v_i_boxed_5186_ = lean_unbox_usize(v_i_5183_);
lean_dec(v_i_5183_);
v_stop_boxed_5187_ = lean_unbox_usize(v_stop_5184_);
lean_dec(v_stop_5184_);
v_res_5188_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__2___redArg(v_as_5182_, v_i_boxed_5186_, v_stop_boxed_5187_, v_b_5185_);
lean_dec_ref(v_as_5182_);
return v_res_5188_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toList___redArg(lean_object* v_t_5189_){
_start:
{
lean_object* v___x_5190_; lean_object* v___x_5191_; 
v___x_5190_ = lean_box(0);
v___x_5191_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v_t_5189_, v___x_5190_);
return v___x_5191_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toList(lean_object* v_00_u03b1_5192_, lean_object* v_t_5193_){
_start:
{
lean_object* v___x_5194_; 
v___x_5194_ = l_Lean_ImportedConsts_toList___redArg(v_t_5193_);
return v___x_5194_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(lean_object* v_t_5195_, lean_object* v_init_5196_){
_start:
{
lean_object* v___x_5197_; 
v___x_5197_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v_t_5195_, v_init_5196_);
return v___x_5197_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0(lean_object* v_00_u03b1_5198_, lean_object* v_t_5199_, lean_object* v_init_5200_){
_start:
{
lean_object* v___x_5201_; 
v___x_5201_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v_t_5199_, v_init_5200_);
return v___x_5201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0(lean_object* v_00_u03b1_5202_, lean_object* v_t_5203_, lean_object* v_init_5204_){
_start:
{
lean_object* v___x_5205_; 
v___x_5205_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v_t_5203_, v_init_5204_);
return v___x_5205_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5206_, lean_object* v_t_5207_, lean_object* v_init_5208_){
_start:
{
lean_object* v___x_5209_; 
v___x_5209_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v_t_5207_, v_init_5208_);
return v___x_5209_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5210_, lean_object* v_t_5211_, lean_object* v_init_5212_){
_start:
{
lean_object* v_res_5213_; 
v_res_5213_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1(v_00_u03b1_5210_, v_t_5211_, v_init_5212_);
lean_dec_ref(v_t_5211_);
return v_res_5213_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_5214_, lean_object* v_as_5215_, size_t v_i_5216_, size_t v_stop_5217_, lean_object* v_b_5218_){
_start:
{
lean_object* v___x_5219_; 
v___x_5219_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__2___redArg(v_as_5215_, v_i_5216_, v_stop_5217_, v_b_5218_);
return v___x_5219_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_5220_, lean_object* v_as_5221_, lean_object* v_i_5222_, lean_object* v_stop_5223_, lean_object* v_b_5224_){
_start:
{
size_t v_i_boxed_5225_; size_t v_stop_boxed_5226_; lean_object* v_res_5227_; 
v_i_boxed_5225_ = lean_unbox_usize(v_i_5222_);
lean_dec(v_i_5222_);
v_stop_boxed_5226_ = lean_unbox_usize(v_stop_5223_);
lean_dec(v_stop_5223_);
v_res_5227_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__2(v_00_u03b1_5220_, v_as_5221_, v_i_boxed_5225_, v_stop_boxed_5226_, v_b_5224_);
lean_dec_ref(v_as_5221_);
return v_res_5227_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_5228_, lean_object* v_as_5229_, size_t v_i_5230_, size_t v_stop_5231_, lean_object* v_b_5232_){
_start:
{
lean_object* v___x_5233_; 
v___x_5233_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1_spec__2___redArg(v_as_5229_, v_i_5230_, v_stop_5231_, v_b_5232_);
return v___x_5233_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_5234_, lean_object* v_as_5235_, lean_object* v_i_5236_, lean_object* v_stop_5237_, lean_object* v_b_5238_){
_start:
{
size_t v_i_boxed_5239_; size_t v_stop_boxed_5240_; lean_object* v_res_5241_; 
v_i_boxed_5239_ = lean_unbox_usize(v_i_5236_);
lean_dec(v_i_5236_);
v_stop_boxed_5240_ = lean_unbox_usize(v_stop_5237_);
lean_dec(v_stop_5237_);
v_res_5241_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_5234_, v_as_5235_, v_i_boxed_5239_, v_stop_boxed_5240_, v_b_5238_);
lean_dec_ref(v_as_5235_);
return v_res_5241_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___lam__0(lean_object* v_l_5242_, lean_object* v_n_5243_, lean_object* v_v_5244_){
_start:
{
lean_object* v___x_5245_; lean_object* v___x_5246_; 
v___x_5245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5245_, 0, v_n_5243_);
lean_ctor_set(v___x_5245_, 1, v_v_5244_);
v___x_5246_ = lean_array_push(v_l_5242_, v___x_5245_);
return v___x_5246_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(lean_object* v_t_5247_, lean_object* v_init_5248_){
_start:
{
lean_object* v_key_5249_; lean_object* v_val_x3f_5250_; lean_object* v_children_5251_; lean_object* v_s_5253_; 
v_key_5249_ = lean_ctor_get(v_t_5247_, 0);
v_val_x3f_5250_ = lean_ctor_get(v_t_5247_, 1);
v_children_5251_ = lean_ctor_get(v_t_5247_, 2);
if (lean_obj_tag(v_val_x3f_5250_) == 1)
{
lean_object* v_val_5260_; lean_object* v___x_5261_; lean_object* v___x_5262_; 
v_val_5260_ = lean_ctor_get(v_val_x3f_5250_, 0);
lean_inc(v_val_5260_);
lean_inc(v_key_5249_);
v___x_5261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5261_, 0, v_key_5249_);
lean_ctor_set(v___x_5261_, 1, v_val_5260_);
v___x_5262_ = lean_array_push(v_init_5248_, v___x_5261_);
v_s_5253_ = v___x_5262_;
goto v___jp_5252_;
}
else
{
v_s_5253_ = v_init_5248_;
goto v___jp_5252_;
}
v___jp_5252_:
{
lean_object* v___x_5254_; lean_object* v___x_5255_; uint8_t v___x_5256_; 
v___x_5254_ = lean_unsigned_to_nat(0u);
v___x_5255_ = lean_array_get_size(v_children_5251_);
v___x_5256_ = lean_nat_dec_lt(v___x_5254_, v___x_5255_);
if (v___x_5256_ == 0)
{
return v_s_5253_;
}
else
{
size_t v___x_5257_; size_t v___x_5258_; lean_object* v___x_5259_; 
v___x_5257_ = ((size_t)0ULL);
v___x_5258_ = lean_usize_of_nat(v___x_5255_);
v___x_5259_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(v_children_5251_, v___x_5257_, v___x_5258_, v_s_5253_);
return v___x_5259_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_as_5263_, size_t v_i_5264_, size_t v_stop_5265_, lean_object* v_b_5266_){
_start:
{
uint8_t v___x_5267_; 
v___x_5267_ = lean_usize_dec_eq(v_i_5264_, v_stop_5265_);
if (v___x_5267_ == 0)
{
lean_object* v___x_5268_; lean_object* v___x_5269_; size_t v___x_5270_; size_t v___x_5271_; 
v___x_5268_ = lean_array_uget_borrowed(v_as_5263_, v_i_5264_);
v___x_5269_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v___x_5268_, v_b_5266_);
v___x_5270_ = ((size_t)1ULL);
v___x_5271_ = lean_usize_add(v_i_5264_, v___x_5270_);
v_i_5264_ = v___x_5271_;
v_b_5266_ = v___x_5269_;
goto _start;
}
else
{
return v_b_5266_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_as_5273_, lean_object* v_i_5274_, lean_object* v_stop_5275_, lean_object* v_b_5276_){
_start:
{
size_t v_i_boxed_5277_; size_t v_stop_boxed_5278_; lean_object* v_res_5279_; 
v_i_boxed_5277_ = lean_unbox_usize(v_i_5274_);
lean_dec(v_i_5274_);
v_stop_boxed_5278_ = lean_unbox_usize(v_stop_5275_);
lean_dec(v_stop_5275_);
v_res_5279_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(v_as_5273_, v_i_boxed_5277_, v_stop_boxed_5278_, v_b_5276_);
lean_dec_ref(v_as_5273_);
return v_res_5279_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_t_5280_, lean_object* v_init_5281_){
_start:
{
lean_object* v_res_5282_; 
v_res_5282_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_t_5280_, v_init_5281_);
lean_dec_ref(v_t_5280_);
return v_res_5282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(lean_object* v_t_5283_, lean_object* v_init_5284_){
_start:
{
switch(lean_obj_tag(v_t_5283_))
{
case 0:
{
lean_object* v_tree_5285_; lean_object* v___x_5286_; 
v_tree_5285_ = lean_ctor_get(v_t_5283_, 1);
lean_inc_ref(v_tree_5285_);
lean_dec_ref_known(v_t_5283_, 2);
v___x_5286_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_tree_5285_, v_init_5284_);
lean_dec_ref(v_tree_5285_);
return v___x_5286_;
}
case 1:
{
lean_object* v_key_5287_; lean_object* v_entry_x3f_5288_; lean_object* v_children_5289_; lean_object* v_s_5291_; 
v_key_5287_ = lean_ctor_get(v_t_5283_, 0);
lean_inc(v_key_5287_);
v_entry_x3f_5288_ = lean_ctor_get(v_t_5283_, 1);
lean_inc(v_entry_x3f_5288_);
v_children_5289_ = lean_ctor_get(v_t_5283_, 2);
lean_inc_ref(v_children_5289_);
lean_dec_ref_known(v_t_5283_, 4);
if (lean_obj_tag(v_entry_x3f_5288_) == 1)
{
lean_object* v_val_5298_; lean_object* v_fst_5299_; lean_object* v___x_5300_; 
v_val_5298_ = lean_ctor_get(v_entry_x3f_5288_, 0);
lean_inc(v_val_5298_);
lean_dec_ref_known(v_entry_x3f_5288_, 1);
v_fst_5299_ = lean_ctor_get(v_val_5298_, 0);
lean_inc(v_fst_5299_);
lean_dec(v_val_5298_);
v___x_5300_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___lam__0(v_init_5284_, v_key_5287_, v_fst_5299_);
v_s_5291_ = v___x_5300_;
goto v___jp_5290_;
}
else
{
lean_dec(v_entry_x3f_5288_);
lean_dec(v_key_5287_);
v_s_5291_ = v_init_5284_;
goto v___jp_5290_;
}
v___jp_5290_:
{
lean_object* v___x_5292_; lean_object* v___x_5293_; uint8_t v___x_5294_; 
v___x_5292_ = lean_unsigned_to_nat(0u);
v___x_5293_ = lean_array_get_size(v_children_5289_);
v___x_5294_ = lean_nat_dec_lt(v___x_5292_, v___x_5293_);
if (v___x_5294_ == 0)
{
lean_dec_ref(v_children_5289_);
return v_s_5291_;
}
else
{
size_t v___x_5295_; size_t v___x_5296_; lean_object* v___x_5297_; 
v___x_5295_ = ((size_t)0ULL);
v___x_5296_ = lean_usize_of_nat(v___x_5293_);
v___x_5297_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(v_children_5289_, v___x_5295_, v___x_5296_, v_s_5291_);
lean_dec_ref(v_children_5289_);
return v___x_5297_;
}
}
}
case 2:
{
lean_object* v_key_5301_; lean_object* v_entry_5302_; lean_object* v_expanded_5303_; lean_object* v_s_5305_; lean_object* v___x_5314_; 
v_key_5301_ = lean_ctor_get(v_t_5283_, 0);
lean_inc(v_key_5301_);
v_entry_5302_ = lean_ctor_get(v_t_5283_, 1);
lean_inc_ref(v_entry_5302_);
v_expanded_5303_ = lean_ctor_get(v_t_5283_, 2);
lean_inc_ref(v_expanded_5303_);
lean_dec_ref_known(v_t_5283_, 3);
v___x_5314_ = lean_imported_consts_force_shared(v_entry_5302_);
lean_dec_ref(v_entry_5302_);
if (lean_obj_tag(v___x_5314_) == 1)
{
lean_object* v_val_5315_; lean_object* v_fst_5316_; lean_object* v___x_5317_; 
v_val_5315_ = lean_ctor_get(v___x_5314_, 0);
lean_inc(v_val_5315_);
lean_dec_ref_known(v___x_5314_, 1);
v_fst_5316_ = lean_ctor_get(v_val_5315_, 0);
lean_inc(v_fst_5316_);
lean_dec(v_val_5315_);
v___x_5317_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___lam__0(v_init_5284_, v_key_5301_, v_fst_5316_);
v_s_5305_ = v___x_5317_;
goto v___jp_5304_;
}
else
{
lean_dec(v___x_5314_);
lean_dec(v_key_5301_);
v_s_5305_ = v_init_5284_;
goto v___jp_5304_;
}
v___jp_5304_:
{
lean_object* v___x_5306_; lean_object* v_fst_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; uint8_t v___x_5310_; 
v___x_5306_ = lean_imported_consts_force_shared(v_expanded_5303_);
lean_dec_ref(v_expanded_5303_);
v_fst_5307_ = lean_ctor_get(v___x_5306_, 0);
lean_inc(v_fst_5307_);
lean_dec(v___x_5306_);
v___x_5308_ = lean_unsigned_to_nat(0u);
v___x_5309_ = lean_array_get_size(v_fst_5307_);
v___x_5310_ = lean_nat_dec_lt(v___x_5308_, v___x_5309_);
if (v___x_5310_ == 0)
{
lean_dec(v_fst_5307_);
return v_s_5305_;
}
else
{
size_t v___x_5311_; size_t v___x_5312_; lean_object* v___x_5313_; 
v___x_5311_ = ((size_t)0ULL);
v___x_5312_ = lean_usize_of_nat(v___x_5309_);
v___x_5313_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(v_fst_5307_, v___x_5311_, v___x_5312_, v_s_5305_);
lean_dec(v_fst_5307_);
return v___x_5313_;
}
}
}
default: 
{
lean_object* v_tree_5318_; 
v_tree_5318_ = lean_ctor_get(v_t_5283_, 1);
lean_inc_ref(v_tree_5318_);
lean_dec_ref_known(v_t_5283_, 2);
v_t_5283_ = v_tree_5318_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(lean_object* v_as_5320_, size_t v_i_5321_, size_t v_stop_5322_, lean_object* v_b_5323_){
_start:
{
uint8_t v___x_5324_; 
v___x_5324_ = lean_usize_dec_eq(v_i_5321_, v_stop_5322_);
if (v___x_5324_ == 0)
{
lean_object* v___x_5325_; lean_object* v___x_5326_; size_t v___x_5327_; size_t v___x_5328_; 
v___x_5325_ = lean_array_uget_borrowed(v_as_5320_, v_i_5321_);
lean_inc(v___x_5325_);
v___x_5326_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v___x_5325_, v_b_5323_);
v___x_5327_ = ((size_t)1ULL);
v___x_5328_ = lean_usize_add(v_i_5321_, v___x_5327_);
v_i_5321_ = v___x_5328_;
v_b_5323_ = v___x_5326_;
goto _start;
}
else
{
return v_b_5323_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_as_5330_, lean_object* v_i_5331_, lean_object* v_stop_5332_, lean_object* v_b_5333_){
_start:
{
size_t v_i_boxed_5334_; size_t v_stop_boxed_5335_; lean_object* v_res_5336_; 
v_i_boxed_5334_ = lean_unbox_usize(v_i_5331_);
lean_dec(v_i_5331_);
v_stop_boxed_5335_ = lean_unbox_usize(v_stop_5332_);
lean_dec(v_stop_5332_);
v_res_5336_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(v_as_5330_, v_i_boxed_5334_, v_stop_boxed_5335_, v_b_5333_);
lean_dec_ref(v_as_5330_);
return v_res_5336_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray___redArg(lean_object* v_t_5339_){
_start:
{
lean_object* v___x_5340_; lean_object* v___x_5341_; 
v___x_5340_ = ((lean_object*)(l_Lean_ImportedConsts_toArray___redArg___closed__0));
v___x_5341_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_t_5339_, v___x_5340_);
return v___x_5341_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray(lean_object* v_00_u03b1_5342_, lean_object* v_t_5343_){
_start:
{
lean_object* v___x_5344_; 
v___x_5344_ = l_Lean_ImportedConsts_toArray___redArg(v_t_5343_);
return v___x_5344_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(lean_object* v_t_5345_, lean_object* v_init_5346_){
_start:
{
lean_object* v___x_5347_; 
v___x_5347_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_t_5345_, v_init_5346_);
return v___x_5347_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0(lean_object* v_00_u03b1_5348_, lean_object* v_t_5349_, lean_object* v_init_5350_){
_start:
{
lean_object* v___x_5351_; 
v___x_5351_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_t_5349_, v_init_5350_);
return v___x_5351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0(lean_object* v_00_u03b1_5352_, lean_object* v_t_5353_, lean_object* v_init_5354_){
_start:
{
lean_object* v___x_5355_; 
v___x_5355_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_t_5353_, v_init_5354_);
return v___x_5355_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5356_, lean_object* v_t_5357_, lean_object* v_init_5358_){
_start:
{
lean_object* v___x_5359_; 
v___x_5359_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_t_5357_, v_init_5358_);
return v___x_5359_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5360_, lean_object* v_t_5361_, lean_object* v_init_5362_){
_start:
{
lean_object* v_res_5363_; 
v_res_5363_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1(v_00_u03b1_5360_, v_t_5361_, v_init_5362_);
lean_dec_ref(v_t_5361_);
return v_res_5363_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_5364_, lean_object* v_as_5365_, size_t v_i_5366_, size_t v_stop_5367_, lean_object* v_b_5368_){
_start:
{
lean_object* v___x_5369_; 
v___x_5369_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(v_as_5365_, v_i_5366_, v_stop_5367_, v_b_5368_);
return v___x_5369_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_5370_, lean_object* v_as_5371_, lean_object* v_i_5372_, lean_object* v_stop_5373_, lean_object* v_b_5374_){
_start:
{
size_t v_i_boxed_5375_; size_t v_stop_boxed_5376_; lean_object* v_res_5377_; 
v_i_boxed_5375_ = lean_unbox_usize(v_i_5372_);
lean_dec(v_i_5372_);
v_stop_boxed_5376_ = lean_unbox_usize(v_stop_5373_);
lean_dec(v_stop_5373_);
v_res_5377_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2(v_00_u03b1_5370_, v_as_5371_, v_i_boxed_5375_, v_stop_boxed_5376_, v_b_5374_);
lean_dec_ref(v_as_5371_);
return v_res_5377_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_5378_, lean_object* v_as_5379_, size_t v_i_5380_, size_t v_stop_5381_, lean_object* v_b_5382_){
_start:
{
lean_object* v___x_5383_; 
v___x_5383_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(v_as_5379_, v_i_5380_, v_stop_5381_, v_b_5382_);
return v___x_5383_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_5384_, lean_object* v_as_5385_, lean_object* v_i_5386_, lean_object* v_stop_5387_, lean_object* v_b_5388_){
_start:
{
size_t v_i_boxed_5389_; size_t v_stop_boxed_5390_; lean_object* v_res_5391_; 
v_i_boxed_5389_ = lean_unbox_usize(v_i_5386_);
lean_dec(v_i_5386_);
v_stop_boxed_5390_ = lean_unbox_usize(v_stop_5387_);
lean_dec(v_stop_5387_);
v_res_5391_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_5384_, v_as_5385_, v_i_boxed_5389_, v_stop_boxed_5390_, v_b_5388_);
lean_dec_ref(v_as_5385_);
return v_res_5391_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(lean_object* v_t_5392_, lean_object* v_init_5393_){
_start:
{
lean_object* v_key_5394_; lean_object* v_val_x3f_5395_; lean_object* v_children_5396_; lean_object* v_s_5398_; 
v_key_5394_ = lean_ctor_get(v_t_5392_, 0);
v_val_x3f_5395_ = lean_ctor_get(v_t_5392_, 1);
v_children_5396_ = lean_ctor_get(v_t_5392_, 2);
if (lean_obj_tag(v_val_x3f_5395_) == 1)
{
lean_object* v___x_5405_; 
lean_inc(v_key_5394_);
v___x_5405_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5405_, 0, v_key_5394_);
lean_ctor_set(v___x_5405_, 1, v_init_5393_);
v_s_5398_ = v___x_5405_;
goto v___jp_5397_;
}
else
{
v_s_5398_ = v_init_5393_;
goto v___jp_5397_;
}
v___jp_5397_:
{
lean_object* v___x_5399_; lean_object* v___x_5400_; uint8_t v___x_5401_; 
v___x_5399_ = lean_unsigned_to_nat(0u);
v___x_5400_ = lean_array_get_size(v_children_5396_);
v___x_5401_ = lean_nat_dec_lt(v___x_5399_, v___x_5400_);
if (v___x_5401_ == 0)
{
return v_s_5398_;
}
else
{
size_t v___x_5402_; size_t v___x_5403_; lean_object* v___x_5404_; 
v___x_5402_ = ((size_t)0ULL);
v___x_5403_ = lean_usize_of_nat(v___x_5400_);
v___x_5404_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1_spec__2___redArg(v_children_5396_, v___x_5402_, v___x_5403_, v_s_5398_);
return v___x_5404_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_as_5406_, size_t v_i_5407_, size_t v_stop_5408_, lean_object* v_b_5409_){
_start:
{
uint8_t v___x_5410_; 
v___x_5410_ = lean_usize_dec_eq(v_i_5407_, v_stop_5408_);
if (v___x_5410_ == 0)
{
lean_object* v___x_5411_; lean_object* v___x_5412_; size_t v___x_5413_; size_t v___x_5414_; 
v___x_5411_ = lean_array_uget_borrowed(v_as_5406_, v_i_5407_);
v___x_5412_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v___x_5411_, v_b_5409_);
v___x_5413_ = ((size_t)1ULL);
v___x_5414_ = lean_usize_add(v_i_5407_, v___x_5413_);
v_i_5407_ = v___x_5414_;
v_b_5409_ = v___x_5412_;
goto _start;
}
else
{
return v_b_5409_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_as_5416_, lean_object* v_i_5417_, lean_object* v_stop_5418_, lean_object* v_b_5419_){
_start:
{
size_t v_i_boxed_5420_; size_t v_stop_boxed_5421_; lean_object* v_res_5422_; 
v_i_boxed_5420_ = lean_unbox_usize(v_i_5417_);
lean_dec(v_i_5417_);
v_stop_boxed_5421_ = lean_unbox_usize(v_stop_5418_);
lean_dec(v_stop_5418_);
v_res_5422_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1_spec__2___redArg(v_as_5416_, v_i_boxed_5420_, v_stop_boxed_5421_, v_b_5419_);
lean_dec_ref(v_as_5416_);
return v_res_5422_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_t_5423_, lean_object* v_init_5424_){
_start:
{
lean_object* v_res_5425_; 
v_res_5425_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v_t_5423_, v_init_5424_);
lean_dec_ref(v_t_5423_);
return v_res_5425_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(lean_object* v_t_5426_, lean_object* v_init_5427_){
_start:
{
switch(lean_obj_tag(v_t_5426_))
{
case 0:
{
lean_object* v_tree_5428_; lean_object* v___x_5429_; 
v_tree_5428_ = lean_ctor_get(v_t_5426_, 1);
v___x_5429_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v_tree_5428_, v_init_5427_);
return v___x_5429_;
}
case 1:
{
lean_object* v_key_5430_; lean_object* v_entry_x3f_5431_; lean_object* v_children_5432_; lean_object* v_s_5434_; 
v_key_5430_ = lean_ctor_get(v_t_5426_, 0);
v_entry_x3f_5431_ = lean_ctor_get(v_t_5426_, 1);
v_children_5432_ = lean_ctor_get(v_t_5426_, 2);
if (lean_obj_tag(v_entry_x3f_5431_) == 1)
{
lean_object* v___x_5441_; 
lean_inc(v_key_5430_);
v___x_5441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5441_, 0, v_key_5430_);
lean_ctor_set(v___x_5441_, 1, v_init_5427_);
v_s_5434_ = v___x_5441_;
goto v___jp_5433_;
}
else
{
v_s_5434_ = v_init_5427_;
goto v___jp_5433_;
}
v___jp_5433_:
{
lean_object* v___x_5435_; lean_object* v___x_5436_; uint8_t v___x_5437_; 
v___x_5435_ = lean_unsigned_to_nat(0u);
v___x_5436_ = lean_array_get_size(v_children_5432_);
v___x_5437_ = lean_nat_dec_lt(v___x_5435_, v___x_5436_);
if (v___x_5437_ == 0)
{
return v_s_5434_;
}
else
{
size_t v___x_5438_; size_t v___x_5439_; lean_object* v___x_5440_; 
v___x_5438_ = ((size_t)0ULL);
v___x_5439_ = lean_usize_of_nat(v___x_5436_);
v___x_5440_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__2___redArg(v_children_5432_, v___x_5438_, v___x_5439_, v_s_5434_);
return v___x_5440_;
}
}
}
case 2:
{
lean_object* v_key_5442_; lean_object* v_entry_5443_; lean_object* v_expanded_5444_; lean_object* v_s_5446_; lean_object* v___x_5455_; 
v_key_5442_ = lean_ctor_get(v_t_5426_, 0);
v_entry_5443_ = lean_ctor_get(v_t_5426_, 1);
v_expanded_5444_ = lean_ctor_get(v_t_5426_, 2);
v___x_5455_ = lean_imported_consts_force_shared(v_entry_5443_);
if (lean_obj_tag(v___x_5455_) == 1)
{
lean_object* v___x_5456_; 
lean_dec_ref_known(v___x_5455_, 1);
lean_inc(v_key_5442_);
v___x_5456_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5456_, 0, v_key_5442_);
lean_ctor_set(v___x_5456_, 1, v_init_5427_);
v_s_5446_ = v___x_5456_;
goto v___jp_5445_;
}
else
{
lean_dec(v___x_5455_);
v_s_5446_ = v_init_5427_;
goto v___jp_5445_;
}
v___jp_5445_:
{
lean_object* v___x_5447_; lean_object* v_fst_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; uint8_t v___x_5451_; 
v___x_5447_ = lean_imported_consts_force_shared(v_expanded_5444_);
v_fst_5448_ = lean_ctor_get(v___x_5447_, 0);
lean_inc(v_fst_5448_);
lean_dec(v___x_5447_);
v___x_5449_ = lean_unsigned_to_nat(0u);
v___x_5450_ = lean_array_get_size(v_fst_5448_);
v___x_5451_ = lean_nat_dec_lt(v___x_5449_, v___x_5450_);
if (v___x_5451_ == 0)
{
lean_dec(v_fst_5448_);
return v_s_5446_;
}
else
{
size_t v___x_5452_; size_t v___x_5453_; lean_object* v___x_5454_; 
v___x_5452_ = ((size_t)0ULL);
v___x_5453_ = lean_usize_of_nat(v___x_5450_);
v___x_5454_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__2___redArg(v_fst_5448_, v___x_5452_, v___x_5453_, v_s_5446_);
lean_dec(v_fst_5448_);
return v___x_5454_;
}
}
}
default: 
{
lean_object* v_tree_5457_; 
v_tree_5457_ = lean_ctor_get(v_t_5426_, 1);
v_t_5426_ = v_tree_5457_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__2___redArg(lean_object* v_as_5459_, size_t v_i_5460_, size_t v_stop_5461_, lean_object* v_b_5462_){
_start:
{
uint8_t v___x_5463_; 
v___x_5463_ = lean_usize_dec_eq(v_i_5460_, v_stop_5461_);
if (v___x_5463_ == 0)
{
lean_object* v___x_5464_; lean_object* v___x_5465_; size_t v___x_5466_; size_t v___x_5467_; 
v___x_5464_ = lean_array_uget_borrowed(v_as_5459_, v_i_5460_);
v___x_5465_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v___x_5464_, v_b_5462_);
v___x_5466_ = ((size_t)1ULL);
v___x_5467_ = lean_usize_add(v_i_5460_, v___x_5466_);
v_i_5460_ = v___x_5467_;
v_b_5462_ = v___x_5465_;
goto _start;
}
else
{
return v_b_5462_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_as_5469_, lean_object* v_i_5470_, lean_object* v_stop_5471_, lean_object* v_b_5472_){
_start:
{
size_t v_i_boxed_5473_; size_t v_stop_boxed_5474_; lean_object* v_res_5475_; 
v_i_boxed_5473_ = lean_unbox_usize(v_i_5470_);
lean_dec(v_i_5470_);
v_stop_boxed_5474_ = lean_unbox_usize(v_stop_5471_);
lean_dec(v_stop_5471_);
v_res_5475_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__2___redArg(v_as_5469_, v_i_boxed_5473_, v_stop_boxed_5474_, v_b_5472_);
lean_dec_ref(v_as_5469_);
return v_res_5475_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg___boxed(lean_object* v_t_5476_, lean_object* v_init_5477_){
_start:
{
lean_object* v_res_5478_; 
v_res_5478_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_t_5476_, v_init_5477_);
lean_dec_ref(v_t_5476_);
return v_res_5478_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___redArg(lean_object* v_t_5479_){
_start:
{
lean_object* v___x_5480_; lean_object* v___x_5481_; 
v___x_5480_ = lean_box(0);
v___x_5481_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_t_5479_, v___x_5480_);
return v___x_5481_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___redArg___boxed(lean_object* v_t_5482_){
_start:
{
lean_object* v_res_5483_; 
v_res_5483_ = l_Lean_ImportedConsts_keys___redArg(v_t_5482_);
lean_dec_ref(v_t_5482_);
return v_res_5483_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys(lean_object* v_00_u03b1_5484_, lean_object* v_t_5485_){
_start:
{
lean_object* v___x_5486_; 
v___x_5486_ = l_Lean_ImportedConsts_keys___redArg(v_t_5485_);
return v___x_5486_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___boxed(lean_object* v_00_u03b1_5487_, lean_object* v_t_5488_){
_start:
{
lean_object* v_res_5489_; 
v_res_5489_ = l_Lean_ImportedConsts_keys(v_00_u03b1_5487_, v_t_5488_);
lean_dec_ref(v_t_5488_);
return v_res_5489_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(lean_object* v_t_5490_, lean_object* v_init_5491_){
_start:
{
lean_object* v___x_5492_; 
v___x_5492_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_t_5490_, v_init_5491_);
return v___x_5492_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg___boxed(lean_object* v_t_5493_, lean_object* v_init_5494_){
_start:
{
lean_object* v_res_5495_; 
v_res_5495_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v_t_5493_, v_init_5494_);
lean_dec_ref(v_t_5493_);
return v_res_5495_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0(lean_object* v_00_u03b1_5496_, lean_object* v_t_5497_, lean_object* v_init_5498_){
_start:
{
lean_object* v___x_5499_; 
v___x_5499_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_t_5497_, v_init_5498_);
return v___x_5499_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___boxed(lean_object* v_00_u03b1_5500_, lean_object* v_t_5501_, lean_object* v_init_5502_){
_start:
{
lean_object* v_res_5503_; 
v_res_5503_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0(v_00_u03b1_5500_, v_t_5501_, v_init_5502_);
lean_dec_ref(v_t_5501_);
return v_res_5503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0(lean_object* v_00_u03b1_5504_, lean_object* v_t_5505_, lean_object* v_init_5506_){
_start:
{
lean_object* v___x_5507_; 
v___x_5507_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_t_5505_, v_init_5506_);
return v___x_5507_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5508_, lean_object* v_t_5509_, lean_object* v_init_5510_){
_start:
{
lean_object* v_res_5511_; 
v_res_5511_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0(v_00_u03b1_5508_, v_t_5509_, v_init_5510_);
lean_dec_ref(v_t_5509_);
return v_res_5511_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5512_, lean_object* v_t_5513_, lean_object* v_init_5514_){
_start:
{
lean_object* v___x_5515_; 
v___x_5515_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v_t_5513_, v_init_5514_);
return v___x_5515_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5516_, lean_object* v_t_5517_, lean_object* v_init_5518_){
_start:
{
lean_object* v_res_5519_; 
v_res_5519_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1(v_00_u03b1_5516_, v_t_5517_, v_init_5518_);
lean_dec_ref(v_t_5517_);
return v_res_5519_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_5520_, lean_object* v_as_5521_, size_t v_i_5522_, size_t v_stop_5523_, lean_object* v_b_5524_){
_start:
{
lean_object* v___x_5525_; 
v___x_5525_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__2___redArg(v_as_5521_, v_i_5522_, v_stop_5523_, v_b_5524_);
return v___x_5525_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_5526_, lean_object* v_as_5527_, lean_object* v_i_5528_, lean_object* v_stop_5529_, lean_object* v_b_5530_){
_start:
{
size_t v_i_boxed_5531_; size_t v_stop_boxed_5532_; lean_object* v_res_5533_; 
v_i_boxed_5531_ = lean_unbox_usize(v_i_5528_);
lean_dec(v_i_5528_);
v_stop_boxed_5532_ = lean_unbox_usize(v_stop_5529_);
lean_dec(v_stop_5529_);
v_res_5533_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__2(v_00_u03b1_5526_, v_as_5527_, v_i_boxed_5531_, v_stop_boxed_5532_, v_b_5530_);
lean_dec_ref(v_as_5527_);
return v_res_5533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_5534_, lean_object* v_as_5535_, size_t v_i_5536_, size_t v_stop_5537_, lean_object* v_b_5538_){
_start:
{
lean_object* v___x_5539_; 
v___x_5539_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1_spec__2___redArg(v_as_5535_, v_i_5536_, v_stop_5537_, v_b_5538_);
return v___x_5539_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_5540_, lean_object* v_as_5541_, lean_object* v_i_5542_, lean_object* v_stop_5543_, lean_object* v_b_5544_){
_start:
{
size_t v_i_boxed_5545_; size_t v_stop_boxed_5546_; lean_object* v_res_5547_; 
v_i_boxed_5545_ = lean_unbox_usize(v_i_5542_);
lean_dec(v_i_5542_);
v_stop_boxed_5546_ = lean_unbox_usize(v_stop_5543_);
lean_dec(v_stop_5543_);
v_res_5547_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_5540_, v_as_5541_, v_i_boxed_5545_, v_stop_boxed_5546_, v_b_5544_);
lean_dec_ref(v_as_5541_);
return v_res_5547_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(lean_object* v_t_5548_, lean_object* v_init_5549_){
_start:
{
lean_object* v_val_x3f_5550_; lean_object* v_children_5551_; lean_object* v_s_5553_; 
v_val_x3f_5550_ = lean_ctor_get(v_t_5548_, 1);
v_children_5551_ = lean_ctor_get(v_t_5548_, 2);
if (lean_obj_tag(v_val_x3f_5550_) == 1)
{
lean_object* v_val_5560_; lean_object* v___x_5561_; 
v_val_5560_ = lean_ctor_get(v_val_x3f_5550_, 0);
lean_inc(v_val_5560_);
v___x_5561_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5561_, 0, v_val_5560_);
lean_ctor_set(v___x_5561_, 1, v_init_5549_);
v_s_5553_ = v___x_5561_;
goto v___jp_5552_;
}
else
{
v_s_5553_ = v_init_5549_;
goto v___jp_5552_;
}
v___jp_5552_:
{
lean_object* v___x_5554_; lean_object* v___x_5555_; uint8_t v___x_5556_; 
v___x_5554_ = lean_unsigned_to_nat(0u);
v___x_5555_ = lean_array_get_size(v_children_5551_);
v___x_5556_ = lean_nat_dec_lt(v___x_5554_, v___x_5555_);
if (v___x_5556_ == 0)
{
return v_s_5553_;
}
else
{
size_t v___x_5557_; size_t v___x_5558_; lean_object* v___x_5559_; 
v___x_5557_ = ((size_t)0ULL);
v___x_5558_ = lean_usize_of_nat(v___x_5555_);
v___x_5559_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(v_children_5551_, v___x_5557_, v___x_5558_, v_s_5553_);
return v___x_5559_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_as_5562_, size_t v_i_5563_, size_t v_stop_5564_, lean_object* v_b_5565_){
_start:
{
uint8_t v___x_5566_; 
v___x_5566_ = lean_usize_dec_eq(v_i_5563_, v_stop_5564_);
if (v___x_5566_ == 0)
{
lean_object* v___x_5567_; lean_object* v___x_5568_; size_t v___x_5569_; size_t v___x_5570_; 
v___x_5567_ = lean_array_uget_borrowed(v_as_5562_, v_i_5563_);
v___x_5568_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v___x_5567_, v_b_5565_);
v___x_5569_ = ((size_t)1ULL);
v___x_5570_ = lean_usize_add(v_i_5563_, v___x_5569_);
v_i_5563_ = v___x_5570_;
v_b_5565_ = v___x_5568_;
goto _start;
}
else
{
return v_b_5565_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_as_5572_, lean_object* v_i_5573_, lean_object* v_stop_5574_, lean_object* v_b_5575_){
_start:
{
size_t v_i_boxed_5576_; size_t v_stop_boxed_5577_; lean_object* v_res_5578_; 
v_i_boxed_5576_ = lean_unbox_usize(v_i_5573_);
lean_dec(v_i_5573_);
v_stop_boxed_5577_ = lean_unbox_usize(v_stop_5574_);
lean_dec(v_stop_5574_);
v_res_5578_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(v_as_5572_, v_i_boxed_5576_, v_stop_boxed_5577_, v_b_5575_);
lean_dec_ref(v_as_5572_);
return v_res_5578_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_t_5579_, lean_object* v_init_5580_){
_start:
{
lean_object* v_res_5581_; 
v_res_5581_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_t_5579_, v_init_5580_);
lean_dec_ref(v_t_5579_);
return v_res_5581_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(lean_object* v_t_5582_, lean_object* v_init_5583_){
_start:
{
switch(lean_obj_tag(v_t_5582_))
{
case 0:
{
lean_object* v_tree_5584_; lean_object* v___x_5585_; 
v_tree_5584_ = lean_ctor_get(v_t_5582_, 1);
lean_inc_ref(v_tree_5584_);
lean_dec_ref_known(v_t_5582_, 2);
v___x_5585_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_tree_5584_, v_init_5583_);
lean_dec_ref(v_tree_5584_);
return v___x_5585_;
}
case 1:
{
lean_object* v_entry_x3f_5586_; lean_object* v_children_5587_; lean_object* v_s_5589_; 
v_entry_x3f_5586_ = lean_ctor_get(v_t_5582_, 1);
lean_inc(v_entry_x3f_5586_);
v_children_5587_ = lean_ctor_get(v_t_5582_, 2);
lean_inc_ref(v_children_5587_);
lean_dec_ref_known(v_t_5582_, 4);
if (lean_obj_tag(v_entry_x3f_5586_) == 1)
{
lean_object* v_val_5596_; lean_object* v_fst_5597_; lean_object* v___x_5599_; uint8_t v_isShared_5600_; uint8_t v_isSharedCheck_5604_; 
v_val_5596_ = lean_ctor_get(v_entry_x3f_5586_, 0);
lean_inc(v_val_5596_);
lean_dec_ref_known(v_entry_x3f_5586_, 1);
v_fst_5597_ = lean_ctor_get(v_val_5596_, 0);
v_isSharedCheck_5604_ = !lean_is_exclusive(v_val_5596_);
if (v_isSharedCheck_5604_ == 0)
{
lean_object* v_unused_5605_; 
v_unused_5605_ = lean_ctor_get(v_val_5596_, 1);
lean_dec(v_unused_5605_);
v___x_5599_ = v_val_5596_;
v_isShared_5600_ = v_isSharedCheck_5604_;
goto v_resetjp_5598_;
}
else
{
lean_inc(v_fst_5597_);
lean_dec(v_val_5596_);
v___x_5599_ = lean_box(0);
v_isShared_5600_ = v_isSharedCheck_5604_;
goto v_resetjp_5598_;
}
v_resetjp_5598_:
{
lean_object* v___x_5602_; 
if (v_isShared_5600_ == 0)
{
lean_ctor_set_tag(v___x_5599_, 1);
lean_ctor_set(v___x_5599_, 1, v_init_5583_);
v___x_5602_ = v___x_5599_;
goto v_reusejp_5601_;
}
else
{
lean_object* v_reuseFailAlloc_5603_; 
v_reuseFailAlloc_5603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5603_, 0, v_fst_5597_);
lean_ctor_set(v_reuseFailAlloc_5603_, 1, v_init_5583_);
v___x_5602_ = v_reuseFailAlloc_5603_;
goto v_reusejp_5601_;
}
v_reusejp_5601_:
{
v_s_5589_ = v___x_5602_;
goto v___jp_5588_;
}
}
}
else
{
lean_dec(v_entry_x3f_5586_);
v_s_5589_ = v_init_5583_;
goto v___jp_5588_;
}
v___jp_5588_:
{
lean_object* v___x_5590_; lean_object* v___x_5591_; uint8_t v___x_5592_; 
v___x_5590_ = lean_unsigned_to_nat(0u);
v___x_5591_ = lean_array_get_size(v_children_5587_);
v___x_5592_ = lean_nat_dec_lt(v___x_5590_, v___x_5591_);
if (v___x_5592_ == 0)
{
lean_dec_ref(v_children_5587_);
return v_s_5589_;
}
else
{
size_t v___x_5593_; size_t v___x_5594_; lean_object* v___x_5595_; 
v___x_5593_ = ((size_t)0ULL);
v___x_5594_ = lean_usize_of_nat(v___x_5591_);
v___x_5595_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(v_children_5587_, v___x_5593_, v___x_5594_, v_s_5589_);
lean_dec_ref(v_children_5587_);
return v___x_5595_;
}
}
}
case 2:
{
lean_object* v_entry_5606_; lean_object* v_expanded_5607_; lean_object* v_s_5609_; lean_object* v___x_5618_; 
v_entry_5606_ = lean_ctor_get(v_t_5582_, 1);
lean_inc_ref(v_entry_5606_);
v_expanded_5607_ = lean_ctor_get(v_t_5582_, 2);
lean_inc_ref(v_expanded_5607_);
lean_dec_ref_known(v_t_5582_, 3);
v___x_5618_ = lean_imported_consts_force_shared(v_entry_5606_);
lean_dec_ref(v_entry_5606_);
if (lean_obj_tag(v___x_5618_) == 1)
{
lean_object* v_val_5619_; lean_object* v_fst_5620_; lean_object* v___x_5622_; uint8_t v_isShared_5623_; uint8_t v_isSharedCheck_5627_; 
v_val_5619_ = lean_ctor_get(v___x_5618_, 0);
lean_inc(v_val_5619_);
lean_dec_ref_known(v___x_5618_, 1);
v_fst_5620_ = lean_ctor_get(v_val_5619_, 0);
v_isSharedCheck_5627_ = !lean_is_exclusive(v_val_5619_);
if (v_isSharedCheck_5627_ == 0)
{
lean_object* v_unused_5628_; 
v_unused_5628_ = lean_ctor_get(v_val_5619_, 1);
lean_dec(v_unused_5628_);
v___x_5622_ = v_val_5619_;
v_isShared_5623_ = v_isSharedCheck_5627_;
goto v_resetjp_5621_;
}
else
{
lean_inc(v_fst_5620_);
lean_dec(v_val_5619_);
v___x_5622_ = lean_box(0);
v_isShared_5623_ = v_isSharedCheck_5627_;
goto v_resetjp_5621_;
}
v_resetjp_5621_:
{
lean_object* v___x_5625_; 
if (v_isShared_5623_ == 0)
{
lean_ctor_set_tag(v___x_5622_, 1);
lean_ctor_set(v___x_5622_, 1, v_init_5583_);
v___x_5625_ = v___x_5622_;
goto v_reusejp_5624_;
}
else
{
lean_object* v_reuseFailAlloc_5626_; 
v_reuseFailAlloc_5626_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5626_, 0, v_fst_5620_);
lean_ctor_set(v_reuseFailAlloc_5626_, 1, v_init_5583_);
v___x_5625_ = v_reuseFailAlloc_5626_;
goto v_reusejp_5624_;
}
v_reusejp_5624_:
{
v_s_5609_ = v___x_5625_;
goto v___jp_5608_;
}
}
}
else
{
lean_dec(v___x_5618_);
v_s_5609_ = v_init_5583_;
goto v___jp_5608_;
}
v___jp_5608_:
{
lean_object* v___x_5610_; lean_object* v_fst_5611_; lean_object* v___x_5612_; lean_object* v___x_5613_; uint8_t v___x_5614_; 
v___x_5610_ = lean_imported_consts_force_shared(v_expanded_5607_);
lean_dec_ref(v_expanded_5607_);
v_fst_5611_ = lean_ctor_get(v___x_5610_, 0);
lean_inc(v_fst_5611_);
lean_dec(v___x_5610_);
v___x_5612_ = lean_unsigned_to_nat(0u);
v___x_5613_ = lean_array_get_size(v_fst_5611_);
v___x_5614_ = lean_nat_dec_lt(v___x_5612_, v___x_5613_);
if (v___x_5614_ == 0)
{
lean_dec(v_fst_5611_);
return v_s_5609_;
}
else
{
size_t v___x_5615_; size_t v___x_5616_; lean_object* v___x_5617_; 
v___x_5615_ = ((size_t)0ULL);
v___x_5616_ = lean_usize_of_nat(v___x_5613_);
v___x_5617_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(v_fst_5611_, v___x_5615_, v___x_5616_, v_s_5609_);
lean_dec(v_fst_5611_);
return v___x_5617_;
}
}
}
default: 
{
lean_object* v_tree_5629_; 
v_tree_5629_ = lean_ctor_get(v_t_5582_, 1);
lean_inc_ref(v_tree_5629_);
lean_dec_ref_known(v_t_5582_, 2);
v_t_5582_ = v_tree_5629_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(lean_object* v_as_5631_, size_t v_i_5632_, size_t v_stop_5633_, lean_object* v_b_5634_){
_start:
{
uint8_t v___x_5635_; 
v___x_5635_ = lean_usize_dec_eq(v_i_5632_, v_stop_5633_);
if (v___x_5635_ == 0)
{
lean_object* v___x_5636_; lean_object* v___x_5637_; size_t v___x_5638_; size_t v___x_5639_; 
v___x_5636_ = lean_array_uget_borrowed(v_as_5631_, v_i_5632_);
lean_inc(v___x_5636_);
v___x_5637_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v___x_5636_, v_b_5634_);
v___x_5638_ = ((size_t)1ULL);
v___x_5639_ = lean_usize_add(v_i_5632_, v___x_5638_);
v_i_5632_ = v___x_5639_;
v_b_5634_ = v___x_5637_;
goto _start;
}
else
{
return v_b_5634_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_as_5641_, lean_object* v_i_5642_, lean_object* v_stop_5643_, lean_object* v_b_5644_){
_start:
{
size_t v_i_boxed_5645_; size_t v_stop_boxed_5646_; lean_object* v_res_5647_; 
v_i_boxed_5645_ = lean_unbox_usize(v_i_5642_);
lean_dec(v_i_5642_);
v_stop_boxed_5646_ = lean_unbox_usize(v_stop_5643_);
lean_dec(v_stop_5643_);
v_res_5647_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(v_as_5641_, v_i_boxed_5645_, v_stop_boxed_5646_, v_b_5644_);
lean_dec_ref(v_as_5641_);
return v_res_5647_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values___redArg(lean_object* v_t_5648_){
_start:
{
lean_object* v___x_5649_; lean_object* v___x_5650_; 
v___x_5649_ = lean_box(0);
v___x_5650_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_t_5648_, v___x_5649_);
return v___x_5650_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values(lean_object* v_00_u03b1_5651_, lean_object* v_t_5652_){
_start:
{
lean_object* v___x_5653_; 
v___x_5653_ = l_Lean_ImportedConsts_values___redArg(v_t_5652_);
return v___x_5653_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(lean_object* v_t_5654_, lean_object* v_init_5655_){
_start:
{
lean_object* v___x_5656_; 
v___x_5656_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_t_5654_, v_init_5655_);
return v___x_5656_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0(lean_object* v_00_u03b1_5657_, lean_object* v_t_5658_, lean_object* v_init_5659_){
_start:
{
lean_object* v___x_5660_; 
v___x_5660_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_t_5658_, v_init_5659_);
return v___x_5660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0(lean_object* v_00_u03b1_5661_, lean_object* v_t_5662_, lean_object* v_init_5663_){
_start:
{
lean_object* v___x_5664_; 
v___x_5664_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_t_5662_, v_init_5663_);
return v___x_5664_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5665_, lean_object* v_t_5666_, lean_object* v_init_5667_){
_start:
{
lean_object* v___x_5668_; 
v___x_5668_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_t_5666_, v_init_5667_);
return v___x_5668_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5669_, lean_object* v_t_5670_, lean_object* v_init_5671_){
_start:
{
lean_object* v_res_5672_; 
v_res_5672_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1(v_00_u03b1_5669_, v_t_5670_, v_init_5671_);
lean_dec_ref(v_t_5670_);
return v_res_5672_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_5673_, lean_object* v_as_5674_, size_t v_i_5675_, size_t v_stop_5676_, lean_object* v_b_5677_){
_start:
{
lean_object* v___x_5678_; 
v___x_5678_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(v_as_5674_, v_i_5675_, v_stop_5676_, v_b_5677_);
return v___x_5678_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_5679_, lean_object* v_as_5680_, lean_object* v_i_5681_, lean_object* v_stop_5682_, lean_object* v_b_5683_){
_start:
{
size_t v_i_boxed_5684_; size_t v_stop_boxed_5685_; lean_object* v_res_5686_; 
v_i_boxed_5684_ = lean_unbox_usize(v_i_5681_);
lean_dec(v_i_5681_);
v_stop_boxed_5685_ = lean_unbox_usize(v_stop_5682_);
lean_dec(v_stop_5682_);
v_res_5686_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2(v_00_u03b1_5679_, v_as_5680_, v_i_boxed_5684_, v_stop_boxed_5685_, v_b_5683_);
lean_dec_ref(v_as_5680_);
return v_res_5686_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_5687_, lean_object* v_as_5688_, size_t v_i_5689_, size_t v_stop_5690_, lean_object* v_b_5691_){
_start:
{
lean_object* v___x_5692_; 
v___x_5692_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(v_as_5688_, v_i_5689_, v_stop_5690_, v_b_5691_);
return v___x_5692_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_5693_, lean_object* v_as_5694_, lean_object* v_i_5695_, lean_object* v_stop_5696_, lean_object* v_b_5697_){
_start:
{
size_t v_i_boxed_5698_; size_t v_stop_boxed_5699_; lean_object* v_res_5700_; 
v_i_boxed_5698_ = lean_unbox_usize(v_i_5695_);
lean_dec(v_i_5695_);
v_stop_boxed_5699_ = lean_unbox_usize(v_stop_5696_);
lean_dec(v_stop_5696_);
v_res_5700_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_5693_, v_as_5694_, v_i_boxed_5698_, v_stop_boxed_5699_, v_b_5697_);
lean_dec_ref(v_as_5694_);
return v_res_5700_;
}
}
static lean_object* _init_l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_5704_; lean_object* v___x_5705_; lean_object* v___x_5706_; lean_object* v___x_5707_; lean_object* v___x_5708_; lean_object* v___x_5709_; 
v___x_5704_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__2));
v___x_5705_ = lean_unsigned_to_nat(14u);
v___x_5706_ = lean_unsigned_to_nat(22u);
v___x_5707_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__1));
v___x_5708_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__0));
v___x_5709_ = l_mkPanicMessageWithDecl(v___x_5708_, v___x_5707_, v___x_5706_, v___x_5705_, v___x_5704_);
return v___x_5709_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0(lean_object* v_inst_5710_, lean_object* v_t_5711_, lean_object* v_n_5712_, lean_object* v_x_5713_){
_start:
{
lean_object* v___x_5714_; 
v___x_5714_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_5711_, v_n_5712_);
if (lean_obj_tag(v___x_5714_) == 0)
{
lean_object* v___x_5715_; lean_object* v___x_5716_; 
v___x_5715_ = lean_obj_once(&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3, &l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3_once, _init_l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3);
v___x_5716_ = l_panic___redArg(v_inst_5710_, v___x_5715_);
return v___x_5716_;
}
else
{
lean_object* v_val_5717_; 
v_val_5717_ = lean_ctor_get(v___x_5714_, 0);
lean_inc(v_val_5717_);
lean_dec_ref_known(v___x_5714_, 1);
return v_val_5717_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___boxed(lean_object* v_inst_5718_, lean_object* v_t_5719_, lean_object* v_n_5720_, lean_object* v_x_5721_){
_start:
{
lean_object* v_res_5722_; 
v_res_5722_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0(v_inst_5718_, v_t_5719_, v_n_5720_, v_x_5721_);
lean_dec(v_inst_5718_);
return v_res_5722_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1(lean_object* v_inst_5723_, lean_object* v_xs_5724_, lean_object* v_i_5725_){
_start:
{
lean_object* v___x_5726_; 
v___x_5726_ = l_Lean_ImportedConsts_find_x3f___redArg(v_xs_5724_, v_i_5725_);
if (lean_obj_tag(v___x_5726_) == 0)
{
lean_object* v___x_5727_; 
v___x_5727_ = l_outOfBounds___redArg(v_inst_5723_);
return v___x_5727_;
}
else
{
lean_object* v_val_5728_; 
v_val_5728_ = lean_ctor_get(v___x_5726_, 0);
lean_inc(v_val_5728_);
lean_dec_ref_known(v___x_5726_, 1);
return v_val_5728_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1___boxed(lean_object* v_inst_5729_, lean_object* v_xs_5730_, lean_object* v_i_5731_){
_start:
{
lean_object* v_res_5732_; 
v_res_5732_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1(v_inst_5729_, v_xs_5730_, v_i_5731_);
lean_dec(v_inst_5729_);
return v_res_5732_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg(lean_object* v_inst_5735_){
_start:
{
lean_object* v___f_5736_; lean_object* v___f_5737_; lean_object* v___f_5738_; lean_object* v___x_5739_; 
v___f_5736_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_5736_, 0, v_inst_5735_);
v___f_5737_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__0));
v___f_5738_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__1));
v___x_5739_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5739_, 0, v___f_5736_);
lean_ctor_set(v___x_5739_, 1, v___f_5737_);
lean_ctor_set(v___x_5739_, 2, v___f_5738_);
return v___x_5739_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited(lean_object* v_00_u03b1_5740_, lean_object* v_inst_5741_){
_start:
{
lean_object* v___x_5742_; 
v___x_5742_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg(v_inst_5741_);
return v___x_5742_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__0(lean_object* v_f_5743_, lean_object* v_n_5744_, lean_object* v_v_5745_){
_start:
{
lean_object* v___x_5746_; lean_object* v___x_5747_; 
v___x_5746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5746_, 0, v_n_5744_);
lean_ctor_set(v___x_5746_, 1, v_v_5745_);
v___x_5747_ = lean_apply_1(v_f_5743_, v___x_5746_);
return v___x_5747_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1(lean_object* v_inst_5748_, lean_object* v_t_5749_, lean_object* v_f_5750_){
_start:
{
lean_object* v___f_5751_; lean_object* v___x_5752_; 
v___f_5751_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__0), 3, 1);
lean_closure_set(v___f_5751_, 0, v_f_5750_);
v___x_5752_ = l_Lean_ImportedConsts_forM___redArg(v_inst_5748_, v_t_5749_, v___f_5751_);
return v___x_5752_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg(lean_object* v_inst_5753_){
_start:
{
lean_object* v___f_5754_; 
v___f_5754_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_5754_, 0, v_inst_5753_);
return v___f_5754_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad(lean_object* v_m_5755_, lean_object* v_00_u03b1_5756_, lean_object* v_inst_5757_){
_start:
{
lean_object* v___f_5758_; 
v___f_5758_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_5758_, 0, v_inst_5757_);
return v___f_5758_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0(lean_object* v_toPure_5759_, lean_object* v_____do__lift_5760_){
_start:
{
if (lean_obj_tag(v_____do__lift_5760_) == 0)
{
lean_object* v_a_5761_; lean_object* v___x_5762_; 
v_a_5761_ = lean_ctor_get(v_____do__lift_5760_, 0);
lean_inc(v_a_5761_);
lean_dec_ref_known(v_____do__lift_5760_, 1);
v___x_5762_ = lean_apply_2(v_toPure_5759_, lean_box(0), v_a_5761_);
return v___x_5762_;
}
else
{
lean_object* v_a_5763_; lean_object* v_snd_5764_; lean_object* v___x_5765_; 
v_a_5763_ = lean_ctor_get(v_____do__lift_5760_, 0);
lean_inc(v_a_5763_);
lean_dec_ref_known(v_____do__lift_5760_, 1);
v_snd_5764_ = lean_ctor_get(v_a_5763_, 1);
lean_inc(v_snd_5764_);
lean_dec(v_a_5763_);
v___x_5765_ = lean_apply_2(v_toPure_5759_, lean_box(0), v_snd_5764_);
return v___x_5765_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1(lean_object* v_toPure_5766_, lean_object* v_____do__lift_5767_){
_start:
{
if (lean_obj_tag(v_____do__lift_5767_) == 0)
{
lean_object* v_a_5768_; lean_object* v___x_5770_; uint8_t v_isShared_5771_; uint8_t v_isSharedCheck_5776_; 
v_a_5768_ = lean_ctor_get(v_____do__lift_5767_, 0);
v_isSharedCheck_5776_ = !lean_is_exclusive(v_____do__lift_5767_);
if (v_isSharedCheck_5776_ == 0)
{
v___x_5770_ = v_____do__lift_5767_;
v_isShared_5771_ = v_isSharedCheck_5776_;
goto v_resetjp_5769_;
}
else
{
lean_inc(v_a_5768_);
lean_dec(v_____do__lift_5767_);
v___x_5770_ = lean_box(0);
v_isShared_5771_ = v_isSharedCheck_5776_;
goto v_resetjp_5769_;
}
v_resetjp_5769_:
{
lean_object* v___x_5773_; 
if (v_isShared_5771_ == 0)
{
v___x_5773_ = v___x_5770_;
goto v_reusejp_5772_;
}
else
{
lean_object* v_reuseFailAlloc_5775_; 
v_reuseFailAlloc_5775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5775_, 0, v_a_5768_);
v___x_5773_ = v_reuseFailAlloc_5775_;
goto v_reusejp_5772_;
}
v_reusejp_5772_:
{
lean_object* v___x_5774_; 
v___x_5774_ = lean_apply_2(v_toPure_5766_, lean_box(0), v___x_5773_);
return v___x_5774_;
}
}
}
else
{
lean_object* v_a_5777_; lean_object* v___x_5779_; uint8_t v_isShared_5780_; uint8_t v_isSharedCheck_5787_; 
v_a_5777_ = lean_ctor_get(v_____do__lift_5767_, 0);
v_isSharedCheck_5787_ = !lean_is_exclusive(v_____do__lift_5767_);
if (v_isSharedCheck_5787_ == 0)
{
v___x_5779_ = v_____do__lift_5767_;
v_isShared_5780_ = v_isSharedCheck_5787_;
goto v_resetjp_5778_;
}
else
{
lean_inc(v_a_5777_);
lean_dec(v_____do__lift_5767_);
v___x_5779_ = lean_box(0);
v_isShared_5780_ = v_isSharedCheck_5787_;
goto v_resetjp_5778_;
}
v_resetjp_5778_:
{
lean_object* v___x_5781_; lean_object* v___x_5782_; lean_object* v___x_5784_; 
v___x_5781_ = lean_box(0);
v___x_5782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5782_, 0, v___x_5781_);
lean_ctor_set(v___x_5782_, 1, v_a_5777_);
if (v_isShared_5780_ == 0)
{
lean_ctor_set(v___x_5779_, 0, v___x_5782_);
v___x_5784_ = v___x_5779_;
goto v_reusejp_5783_;
}
else
{
lean_object* v_reuseFailAlloc_5786_; 
v_reuseFailAlloc_5786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5786_, 0, v___x_5782_);
v___x_5784_ = v_reuseFailAlloc_5786_;
goto v_reusejp_5783_;
}
v_reusejp_5783_:
{
lean_object* v___x_5785_; 
v___x_5785_ = lean_apply_2(v_toPure_5766_, lean_box(0), v___x_5784_);
return v___x_5785_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__2(lean_object* v___y_5788_, lean_object* v_toBind_5789_, lean_object* v___f_5790_, lean_object* v_n_5791_, lean_object* v_v_5792_, lean_object* v___y_5793_){
_start:
{
lean_object* v___x_5794_; lean_object* v___x_5795_; lean_object* v___x_5796_; 
v___x_5794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5794_, 0, v_n_5791_);
lean_ctor_set(v___x_5794_, 1, v_v_5792_);
v___x_5795_ = lean_apply_2(v___y_5788_, v___x_5794_, v___y_5793_);
v___x_5796_ = lean_apply_4(v_toBind_5789_, lean_box(0), lean_box(0), v___x_5795_, v___f_5790_);
return v___x_5796_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3(lean_object* v_inst_5797_, lean_object* v_00_u03b2_5798_, lean_object* v___y_5799_, lean_object* v___y_5800_, lean_object* v___y_5801_){
_start:
{
lean_object* v___f_5802_; lean_object* v___f_5803_; lean_object* v___f_5804_; lean_object* v___f_5805_; lean_object* v___x_5806_; lean_object* v___x_5807_; lean_object* v___x_5808_; lean_object* v___x_5809_; lean_object* v___x_5810_; lean_object* v___x_5811_; lean_object* v___f_5812_; lean_object* v___f_5813_; lean_object* v___f_5814_; lean_object* v___f_5815_; lean_object* v___x_5816_; lean_object* v___x_5817_; lean_object* v___x_5818_; lean_object* v___x_5819_; lean_object* v___x_5820_; lean_object* v___x_5821_; lean_object* v_toApplicative_5822_; lean_object* v_toBind_5823_; lean_object* v_toPure_5824_; lean_object* v___f_5825_; lean_object* v___f_5826_; lean_object* v___f_5827_; lean_object* v___x_138__overap_5828_; lean_object* v___x_5829_; lean_object* v___x_5830_; 
lean_inc_ref_n(v_inst_5797_, 7);
v___f_5802_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_5802_, 0, v_inst_5797_);
v___f_5803_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_5803_, 0, v_inst_5797_);
v___f_5804_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_5804_, 0, v_inst_5797_);
v___f_5805_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_5805_, 0, v_inst_5797_);
v___x_5806_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_5806_, 0, lean_box(0));
lean_closure_set(v___x_5806_, 1, lean_box(0));
lean_closure_set(v___x_5806_, 2, v_inst_5797_);
v___x_5807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5807_, 0, v___x_5806_);
lean_ctor_set(v___x_5807_, 1, v___f_5802_);
v___x_5808_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_5808_, 0, lean_box(0));
lean_closure_set(v___x_5808_, 1, lean_box(0));
lean_closure_set(v___x_5808_, 2, v_inst_5797_);
v___x_5809_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5809_, 0, v___x_5807_);
lean_ctor_set(v___x_5809_, 1, v___x_5808_);
lean_ctor_set(v___x_5809_, 2, v___f_5803_);
lean_ctor_set(v___x_5809_, 3, v___f_5804_);
lean_ctor_set(v___x_5809_, 4, v___f_5805_);
v___x_5810_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_5810_, 0, lean_box(0));
lean_closure_set(v___x_5810_, 1, lean_box(0));
lean_closure_set(v___x_5810_, 2, v_inst_5797_);
v___x_5811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5811_, 0, v___x_5809_);
lean_ctor_set(v___x_5811_, 1, v___x_5810_);
lean_inc_ref_n(v___x_5811_, 6);
v___f_5812_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5812_, 0, v___x_5811_);
v___f_5813_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5813_, 0, v___x_5811_);
v___f_5814_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_5814_, 0, v___x_5811_);
v___f_5815_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_5815_, 0, v___x_5811_);
v___x_5816_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_5816_, 0, lean_box(0));
lean_closure_set(v___x_5816_, 1, lean_box(0));
lean_closure_set(v___x_5816_, 2, v___x_5811_);
v___x_5817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5817_, 0, v___x_5816_);
lean_ctor_set(v___x_5817_, 1, v___f_5812_);
v___x_5818_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_5818_, 0, lean_box(0));
lean_closure_set(v___x_5818_, 1, lean_box(0));
lean_closure_set(v___x_5818_, 2, v___x_5811_);
v___x_5819_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5819_, 0, v___x_5817_);
lean_ctor_set(v___x_5819_, 1, v___x_5818_);
lean_ctor_set(v___x_5819_, 2, v___f_5813_);
lean_ctor_set(v___x_5819_, 3, v___f_5814_);
lean_ctor_set(v___x_5819_, 4, v___f_5815_);
v___x_5820_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_5820_, 0, lean_box(0));
lean_closure_set(v___x_5820_, 1, lean_box(0));
lean_closure_set(v___x_5820_, 2, v___x_5811_);
v___x_5821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5821_, 0, v___x_5819_);
lean_ctor_set(v___x_5821_, 1, v___x_5820_);
v_toApplicative_5822_ = lean_ctor_get(v_inst_5797_, 0);
lean_inc_ref(v_toApplicative_5822_);
v_toBind_5823_ = lean_ctor_get(v_inst_5797_, 1);
lean_inc_n(v_toBind_5823_, 2);
lean_dec_ref(v_inst_5797_);
v_toPure_5824_ = lean_ctor_get(v_toApplicative_5822_, 1);
lean_inc_n(v_toPure_5824_, 2);
lean_dec_ref(v_toApplicative_5822_);
v___f_5825_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0), 2, 1);
lean_closure_set(v___f_5825_, 0, v_toPure_5824_);
v___f_5826_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_5826_, 0, v_toPure_5824_);
v___f_5827_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__2), 6, 3);
lean_closure_set(v___f_5827_, 0, v___y_5801_);
lean_closure_set(v___f_5827_, 1, v_toBind_5823_);
lean_closure_set(v___f_5827_, 2, v___f_5826_);
v___x_138__overap_5828_ = l_Lean_ImportedConsts_forM___redArg(v___x_5821_, v___y_5799_, v___f_5827_);
v___x_5829_ = lean_apply_1(v___x_138__overap_5828_, v___y_5800_);
v___x_5830_ = lean_apply_4(v_toBind_5823_, lean_box(0), lean_box(0), v___x_5829_, v___f_5825_);
return v___x_5830_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg(lean_object* v_inst_5831_){
_start:
{
lean_object* v___f_5832_; 
v___f_5832_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_5832_, 0, v_inst_5831_);
return v___f_5832_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad(lean_object* v_m_5833_, lean_object* v_00_u03b1_5834_, lean_object* v_inst_5835_){
_start:
{
lean_object* v___f_5836_; 
v___f_5836_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_5836_, 0, v_inst_5835_);
return v___f_5836_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap___closed__0(void){
_start:
{
lean_object* v___x_5837_; 
v___x_5837_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_5837_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap___closed__1(void){
_start:
{
lean_object* v___x_5838_; lean_object* v___x_5839_; 
v___x_5838_ = lean_obj_once(&l_Lean_instInhabitedConstMap___closed__0, &l_Lean_instInhabitedConstMap___closed__0_once, _init_l_Lean_instInhabitedConstMap___closed__0);
v___x_5839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5839_, 0, v___x_5838_);
return v___x_5839_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap___closed__2(void){
_start:
{
lean_object* v___x_5840_; lean_object* v___x_5841_; lean_object* v___x_5842_; 
v___x_5840_ = lean_obj_once(&l_Lean_instInhabitedConstMap___closed__1, &l_Lean_instInhabitedConstMap___closed__1_once, _init_l_Lean_instInhabitedConstMap___closed__1);
v___x_5841_ = lean_obj_once(&l_Lean_ImportedConsts_empty___closed__0, &l_Lean_ImportedConsts_empty___closed__0_once, _init_l_Lean_ImportedConsts_empty___closed__0);
v___x_5842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5842_, 0, v___x_5841_);
lean_ctor_set(v___x_5842_, 1, v___x_5840_);
return v___x_5842_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap(void){
_start:
{
lean_object* v___x_5843_; 
v___x_5843_ = lean_obj_once(&l_Lean_instInhabitedConstMap___closed__2, &l_Lean_instInhabitedConstMap___closed__2_once, _init_l_Lean_instInhabitedConstMap___closed__2);
return v___x_5843_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_5844_, lean_object* v_vals_5845_, lean_object* v_i_5846_, lean_object* v_k_5847_){
_start:
{
lean_object* v___x_5848_; uint8_t v___x_5849_; 
v___x_5848_ = lean_array_get_size(v_keys_5844_);
v___x_5849_ = lean_nat_dec_lt(v_i_5846_, v___x_5848_);
if (v___x_5849_ == 0)
{
lean_object* v___x_5850_; 
lean_dec(v_i_5846_);
v___x_5850_ = lean_box(0);
return v___x_5850_;
}
else
{
lean_object* v_k_x27_5851_; uint8_t v___x_5852_; 
v_k_x27_5851_ = lean_array_fget_borrowed(v_keys_5844_, v_i_5846_);
v___x_5852_ = lean_name_eq(v_k_5847_, v_k_x27_5851_);
if (v___x_5852_ == 0)
{
lean_object* v___x_5853_; lean_object* v___x_5854_; 
v___x_5853_ = lean_unsigned_to_nat(1u);
v___x_5854_ = lean_nat_add(v_i_5846_, v___x_5853_);
lean_dec(v_i_5846_);
v_i_5846_ = v___x_5854_;
goto _start;
}
else
{
lean_object* v___x_5856_; lean_object* v___x_5857_; 
v___x_5856_ = lean_array_fget_borrowed(v_vals_5845_, v_i_5846_);
lean_dec(v_i_5846_);
lean_inc(v___x_5856_);
v___x_5857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5857_, 0, v___x_5856_);
return v___x_5857_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_5858_, lean_object* v_vals_5859_, lean_object* v_i_5860_, lean_object* v_k_5861_){
_start:
{
lean_object* v_res_5862_; 
v_res_5862_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_5858_, v_vals_5859_, v_i_5860_, v_k_5861_);
lean_dec(v_k_5861_);
lean_dec_ref(v_vals_5859_);
lean_dec_ref(v_keys_5858_);
return v_res_5862_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(lean_object* v_x_5863_, size_t v_x_5864_, lean_object* v_x_5865_){
_start:
{
if (lean_obj_tag(v_x_5863_) == 0)
{
lean_object* v_es_5866_; lean_object* v___x_5867_; size_t v___x_5868_; size_t v___x_5869_; lean_object* v_j_5870_; lean_object* v___x_5871_; 
v_es_5866_ = lean_ctor_get(v_x_5863_, 0);
v___x_5867_ = lean_box(2);
v___x_5868_ = ((size_t)31ULL);
v___x_5869_ = lean_usize_land(v_x_5864_, v___x_5868_);
v_j_5870_ = lean_usize_to_nat(v___x_5869_);
v___x_5871_ = lean_array_get_borrowed(v___x_5867_, v_es_5866_, v_j_5870_);
lean_dec(v_j_5870_);
switch(lean_obj_tag(v___x_5871_))
{
case 0:
{
lean_object* v_key_5872_; lean_object* v_val_5873_; uint8_t v___x_5874_; 
v_key_5872_ = lean_ctor_get(v___x_5871_, 0);
v_val_5873_ = lean_ctor_get(v___x_5871_, 1);
v___x_5874_ = lean_name_eq(v_x_5865_, v_key_5872_);
if (v___x_5874_ == 0)
{
lean_object* v___x_5875_; 
v___x_5875_ = lean_box(0);
return v___x_5875_;
}
else
{
lean_object* v___x_5876_; 
lean_inc(v_val_5873_);
v___x_5876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5876_, 0, v_val_5873_);
return v___x_5876_;
}
}
case 1:
{
lean_object* v_node_5877_; size_t v___x_5878_; size_t v___x_5879_; 
v_node_5877_ = lean_ctor_get(v___x_5871_, 0);
v___x_5878_ = ((size_t)5ULL);
v___x_5879_ = lean_usize_shift_right(v_x_5864_, v___x_5878_);
v_x_5863_ = v_node_5877_;
v_x_5864_ = v___x_5879_;
goto _start;
}
default: 
{
lean_object* v___x_5881_; 
v___x_5881_ = lean_box(0);
return v___x_5881_;
}
}
}
else
{
lean_object* v_ks_5882_; lean_object* v_vs_5883_; lean_object* v___x_5884_; lean_object* v___x_5885_; 
v_ks_5882_ = lean_ctor_get(v_x_5863_, 0);
v_vs_5883_ = lean_ctor_get(v_x_5863_, 1);
v___x_5884_ = lean_unsigned_to_nat(0u);
v___x_5885_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_ks_5882_, v_vs_5883_, v___x_5884_, v_x_5865_);
return v___x_5885_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_5886_, lean_object* v_x_5887_, lean_object* v_x_5888_){
_start:
{
size_t v_x_166__boxed_5889_; lean_object* v_res_5890_; 
v_x_166__boxed_5889_ = lean_unbox_usize(v_x_5887_);
lean_dec(v_x_5887_);
v_res_5890_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(v_x_5886_, v_x_166__boxed_5889_, v_x_5888_);
lean_dec(v_x_5888_);
lean_dec_ref(v_x_5886_);
return v_res_5890_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(lean_object* v_x_5891_, lean_object* v_x_5892_){
_start:
{
uint64_t v___y_5894_; 
if (lean_obj_tag(v_x_5892_) == 0)
{
uint64_t v___x_5897_; 
v___x_5897_ = 1723ULL;
v___y_5894_ = v___x_5897_;
goto v___jp_5893_;
}
else
{
uint64_t v_hash_5898_; 
v_hash_5898_ = lean_ctor_get_uint64(v_x_5892_, sizeof(void*)*2);
v___y_5894_ = v_hash_5898_;
goto v___jp_5893_;
}
v___jp_5893_:
{
size_t v___x_5895_; lean_object* v___x_5896_; 
v___x_5895_ = lean_uint64_to_usize(v___y_5894_);
v___x_5896_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(v_x_5891_, v___x_5895_, v_x_5892_);
return v___x_5896_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg___boxed(lean_object* v_x_5899_, lean_object* v_x_5900_){
_start:
{
lean_object* v_res_5901_; 
v_res_5901_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_x_5899_, v_x_5900_);
lean_dec(v_x_5900_);
lean_dec_ref(v_x_5899_);
return v_res_5901_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f(lean_object* v_m_5902_, lean_object* v_n_5903_){
_start:
{
lean_object* v_map_u2081_5904_; lean_object* v_map_u2082_5905_; lean_object* v___x_5906_; 
v_map_u2081_5904_ = lean_ctor_get(v_m_5902_, 0);
v_map_u2082_5905_ = lean_ctor_get(v_m_5902_, 1);
v___x_5906_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_map_u2082_5905_, v_n_5903_);
if (lean_obj_tag(v___x_5906_) == 0)
{
lean_object* v___x_5907_; 
v___x_5907_ = lean_imported_consts_find_entry_cached(v_map_u2081_5904_, v_n_5903_);
if (lean_obj_tag(v___x_5907_) == 0)
{
return v___x_5906_;
}
else
{
lean_object* v_val_5908_; lean_object* v___x_5910_; uint8_t v_isShared_5911_; uint8_t v_isSharedCheck_5916_; 
v_val_5908_ = lean_ctor_get(v___x_5907_, 0);
v_isSharedCheck_5916_ = !lean_is_exclusive(v___x_5907_);
if (v_isSharedCheck_5916_ == 0)
{
v___x_5910_ = v___x_5907_;
v_isShared_5911_ = v_isSharedCheck_5916_;
goto v_resetjp_5909_;
}
else
{
lean_inc(v_val_5908_);
lean_dec(v___x_5907_);
v___x_5910_ = lean_box(0);
v_isShared_5911_ = v_isSharedCheck_5916_;
goto v_resetjp_5909_;
}
v_resetjp_5909_:
{
lean_object* v_fst_5912_; lean_object* v___x_5914_; 
v_fst_5912_ = lean_ctor_get(v_val_5908_, 0);
lean_inc(v_fst_5912_);
lean_dec(v_val_5908_);
if (v_isShared_5911_ == 0)
{
lean_ctor_set(v___x_5910_, 0, v_fst_5912_);
v___x_5914_ = v___x_5910_;
goto v_reusejp_5913_;
}
else
{
lean_object* v_reuseFailAlloc_5915_; 
v_reuseFailAlloc_5915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5915_, 0, v_fst_5912_);
v___x_5914_ = v_reuseFailAlloc_5915_;
goto v_reusejp_5913_;
}
v_reusejp_5913_:
{
return v___x_5914_;
}
}
}
}
else
{
return v___x_5906_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f___boxed(lean_object* v_m_5917_, lean_object* v_n_5918_){
_start:
{
lean_object* v_res_5919_; 
v_res_5919_ = l_Lean_ConstMap_find_x3f(v_m_5917_, v_n_5918_);
lean_dec(v_n_5918_);
lean_dec_ref(v_m_5917_);
return v_res_5919_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0(lean_object* v_00_u03b2_5920_, lean_object* v_x_5921_, lean_object* v_x_5922_){
_start:
{
lean_object* v___x_5923_; 
v___x_5923_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_x_5921_, v_x_5922_);
return v___x_5923_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___boxed(lean_object* v_00_u03b2_5924_, lean_object* v_x_5925_, lean_object* v_x_5926_){
_start:
{
lean_object* v_res_5927_; 
v_res_5927_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0(v_00_u03b2_5924_, v_x_5925_, v_x_5926_);
lean_dec(v_x_5926_);
lean_dec_ref(v_x_5925_);
return v_res_5927_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0(lean_object* v_00_u03b2_5928_, lean_object* v_x_5929_, size_t v_x_5930_, lean_object* v_x_5931_){
_start:
{
lean_object* v___x_5932_; 
v___x_5932_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(v_x_5929_, v_x_5930_, v_x_5931_);
return v___x_5932_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5933_, lean_object* v_x_5934_, lean_object* v_x_5935_, lean_object* v_x_5936_){
_start:
{
size_t v_x_261__boxed_5937_; lean_object* v_res_5938_; 
v_x_261__boxed_5937_ = lean_unbox_usize(v_x_5935_);
lean_dec(v_x_5935_);
v_res_5938_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0(v_00_u03b2_5933_, v_x_5934_, v_x_261__boxed_5937_, v_x_5936_);
lean_dec(v_x_5936_);
lean_dec_ref(v_x_5934_);
return v_res_5938_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5939_, lean_object* v_keys_5940_, lean_object* v_vals_5941_, lean_object* v_heq_5942_, lean_object* v_i_5943_, lean_object* v_k_5944_){
_start:
{
lean_object* v___x_5945_; 
v___x_5945_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_5940_, v_vals_5941_, v_i_5943_, v_k_5944_);
return v___x_5945_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5946_, lean_object* v_keys_5947_, lean_object* v_vals_5948_, lean_object* v_heq_5949_, lean_object* v_i_5950_, lean_object* v_k_5951_){
_start:
{
lean_object* v_res_5952_; 
v_res_5952_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1(v_00_u03b2_5946_, v_keys_5947_, v_vals_5948_, v_heq_5949_, v_i_5950_, v_k_5951_);
lean_dec(v_k_5951_);
lean_dec_ref(v_vals_5948_);
lean_dec_ref(v_keys_5947_);
return v_res_5952_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f_x27(lean_object* v_m_5953_, lean_object* v_n_5954_){
_start:
{
lean_object* v_map_u2081_5955_; lean_object* v_map_u2082_5956_; lean_object* v___x_5957_; 
v_map_u2081_5955_ = lean_ctor_get(v_m_5953_, 0);
v_map_u2082_5956_ = lean_ctor_get(v_m_5953_, 1);
v___x_5957_ = lean_imported_consts_find_entry_cached(v_map_u2081_5955_, v_n_5954_);
if (lean_obj_tag(v___x_5957_) == 0)
{
lean_object* v___x_5958_; 
v___x_5958_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_map_u2082_5956_, v_n_5954_);
return v___x_5958_;
}
else
{
lean_object* v_val_5959_; lean_object* v___x_5961_; uint8_t v_isShared_5962_; uint8_t v_isSharedCheck_5967_; 
v_val_5959_ = lean_ctor_get(v___x_5957_, 0);
v_isSharedCheck_5967_ = !lean_is_exclusive(v___x_5957_);
if (v_isSharedCheck_5967_ == 0)
{
v___x_5961_ = v___x_5957_;
v_isShared_5962_ = v_isSharedCheck_5967_;
goto v_resetjp_5960_;
}
else
{
lean_inc(v_val_5959_);
lean_dec(v___x_5957_);
v___x_5961_ = lean_box(0);
v_isShared_5962_ = v_isSharedCheck_5967_;
goto v_resetjp_5960_;
}
v_resetjp_5960_:
{
lean_object* v_fst_5963_; lean_object* v___x_5965_; 
v_fst_5963_ = lean_ctor_get(v_val_5959_, 0);
lean_inc(v_fst_5963_);
lean_dec(v_val_5959_);
if (v_isShared_5962_ == 0)
{
lean_ctor_set(v___x_5961_, 0, v_fst_5963_);
v___x_5965_ = v___x_5961_;
goto v_reusejp_5964_;
}
else
{
lean_object* v_reuseFailAlloc_5966_; 
v_reuseFailAlloc_5966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5966_, 0, v_fst_5963_);
v___x_5965_ = v_reuseFailAlloc_5966_;
goto v_reusejp_5964_;
}
v_reusejp_5964_:
{
return v___x_5965_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f_x27___boxed(lean_object* v_m_5968_, lean_object* v_n_5969_){
_start:
{
lean_object* v_res_5970_; 
v_res_5970_ = l_Lean_ConstMap_find_x3f_x27(v_m_5968_, v_n_5969_);
lean_dec(v_n_5969_);
lean_dec_ref(v_m_5968_);
return v_res_5970_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_5971_, lean_object* v_i_5972_, lean_object* v_k_5973_){
_start:
{
lean_object* v___x_5974_; uint8_t v___x_5975_; 
v___x_5974_ = lean_array_get_size(v_keys_5971_);
v___x_5975_ = lean_nat_dec_lt(v_i_5972_, v___x_5974_);
if (v___x_5975_ == 0)
{
lean_dec(v_i_5972_);
return v___x_5975_;
}
else
{
lean_object* v_k_x27_5976_; uint8_t v___x_5977_; 
v_k_x27_5976_ = lean_array_fget_borrowed(v_keys_5971_, v_i_5972_);
v___x_5977_ = lean_name_eq(v_k_5973_, v_k_x27_5976_);
if (v___x_5977_ == 0)
{
lean_object* v___x_5978_; lean_object* v___x_5979_; 
v___x_5978_ = lean_unsigned_to_nat(1u);
v___x_5979_ = lean_nat_add(v_i_5972_, v___x_5978_);
lean_dec(v_i_5972_);
v_i_5972_ = v___x_5979_;
goto _start;
}
else
{
lean_dec(v_i_5972_);
return v___x_5975_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_5981_, lean_object* v_i_5982_, lean_object* v_k_5983_){
_start:
{
uint8_t v_res_5984_; lean_object* v_r_5985_; 
v_res_5984_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(v_keys_5981_, v_i_5982_, v_k_5983_);
lean_dec(v_k_5983_);
lean_dec_ref(v_keys_5981_);
v_r_5985_ = lean_box(v_res_5984_);
return v_r_5985_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(lean_object* v_x_5986_, size_t v_x_5987_, lean_object* v_x_5988_){
_start:
{
if (lean_obj_tag(v_x_5986_) == 0)
{
lean_object* v_es_5989_; lean_object* v___x_5990_; size_t v___x_5991_; size_t v___x_5992_; lean_object* v_j_5993_; lean_object* v___x_5994_; 
v_es_5989_ = lean_ctor_get(v_x_5986_, 0);
v___x_5990_ = lean_box(2);
v___x_5991_ = ((size_t)31ULL);
v___x_5992_ = lean_usize_land(v_x_5987_, v___x_5991_);
v_j_5993_ = lean_usize_to_nat(v___x_5992_);
v___x_5994_ = lean_array_get_borrowed(v___x_5990_, v_es_5989_, v_j_5993_);
lean_dec(v_j_5993_);
switch(lean_obj_tag(v___x_5994_))
{
case 0:
{
lean_object* v_key_5995_; uint8_t v___x_5996_; 
v_key_5995_ = lean_ctor_get(v___x_5994_, 0);
v___x_5996_ = lean_name_eq(v_x_5988_, v_key_5995_);
return v___x_5996_;
}
case 1:
{
lean_object* v_node_5997_; size_t v___x_5998_; size_t v___x_5999_; 
v_node_5997_ = lean_ctor_get(v___x_5994_, 0);
v___x_5998_ = ((size_t)5ULL);
v___x_5999_ = lean_usize_shift_right(v_x_5987_, v___x_5998_);
v_x_5986_ = v_node_5997_;
v_x_5987_ = v___x_5999_;
goto _start;
}
default: 
{
uint8_t v___x_6001_; 
v___x_6001_ = 0;
return v___x_6001_;
}
}
}
else
{
lean_object* v_ks_6002_; lean_object* v___x_6003_; uint8_t v___x_6004_; 
v_ks_6002_ = lean_ctor_get(v_x_5986_, 0);
v___x_6003_ = lean_unsigned_to_nat(0u);
v___x_6004_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(v_ks_6002_, v___x_6003_, v_x_5988_);
return v___x_6004_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg___boxed(lean_object* v_x_6005_, lean_object* v_x_6006_, lean_object* v_x_6007_){
_start:
{
size_t v_x_170__boxed_6008_; uint8_t v_res_6009_; lean_object* v_r_6010_; 
v_x_170__boxed_6008_ = lean_unbox_usize(v_x_6006_);
lean_dec(v_x_6006_);
v_res_6009_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(v_x_6005_, v_x_170__boxed_6008_, v_x_6007_);
lean_dec(v_x_6007_);
lean_dec_ref(v_x_6005_);
v_r_6010_ = lean_box(v_res_6009_);
return v_r_6010_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(lean_object* v_x_6011_, lean_object* v_x_6012_){
_start:
{
uint64_t v___y_6014_; 
if (lean_obj_tag(v_x_6012_) == 0)
{
uint64_t v___x_6017_; 
v___x_6017_ = 1723ULL;
v___y_6014_ = v___x_6017_;
goto v___jp_6013_;
}
else
{
uint64_t v_hash_6018_; 
v_hash_6018_ = lean_ctor_get_uint64(v_x_6012_, sizeof(void*)*2);
v___y_6014_ = v_hash_6018_;
goto v___jp_6013_;
}
v___jp_6013_:
{
size_t v___x_6015_; uint8_t v___x_6016_; 
v___x_6015_ = lean_uint64_to_usize(v___y_6014_);
v___x_6016_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(v_x_6011_, v___x_6015_, v_x_6012_);
return v___x_6016_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg___boxed(lean_object* v_x_6019_, lean_object* v_x_6020_){
_start:
{
uint8_t v_res_6021_; lean_object* v_r_6022_; 
v_res_6021_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(v_x_6019_, v_x_6020_);
lean_dec(v_x_6020_);
lean_dec_ref(v_x_6019_);
v_r_6022_ = lean_box(v_res_6021_);
return v_r_6022_;
}
}
LEAN_EXPORT uint8_t l_Lean_ConstMap_contains(lean_object* v_m_6023_, lean_object* v_n_6024_){
_start:
{
lean_object* v_map_u2081_6025_; lean_object* v_map_u2082_6026_; uint8_t v___x_6027_; 
v_map_u2081_6025_ = lean_ctor_get(v_m_6023_, 0);
v_map_u2082_6026_ = lean_ctor_get(v_m_6023_, 1);
v___x_6027_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(v_map_u2082_6026_, v_n_6024_);
if (v___x_6027_ == 0)
{
lean_object* v___x_6028_; 
v___x_6028_ = lean_imported_consts_find_entry_cached(v_map_u2081_6025_, v_n_6024_);
if (lean_obj_tag(v___x_6028_) == 0)
{
return v___x_6027_;
}
else
{
uint8_t v___x_6029_; 
lean_dec_ref_known(v___x_6028_, 1);
v___x_6029_ = 1;
return v___x_6029_;
}
}
else
{
return v___x_6027_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_contains___boxed(lean_object* v_m_6030_, lean_object* v_n_6031_){
_start:
{
uint8_t v_res_6032_; lean_object* v_r_6033_; 
v_res_6032_ = l_Lean_ConstMap_contains(v_m_6030_, v_n_6031_);
lean_dec(v_n_6031_);
lean_dec_ref(v_m_6030_);
v_r_6033_ = lean_box(v_res_6032_);
return v_r_6033_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0(lean_object* v_00_u03b2_6034_, lean_object* v_x_6035_, lean_object* v_x_6036_){
_start:
{
uint8_t v___x_6037_; 
v___x_6037_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(v_x_6035_, v_x_6036_);
return v___x_6037_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___boxed(lean_object* v_00_u03b2_6038_, lean_object* v_x_6039_, lean_object* v_x_6040_){
_start:
{
uint8_t v_res_6041_; lean_object* v_r_6042_; 
v_res_6041_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0(v_00_u03b2_6038_, v_x_6039_, v_x_6040_);
lean_dec(v_x_6040_);
lean_dec_ref(v_x_6039_);
v_r_6042_ = lean_box(v_res_6041_);
return v_r_6042_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0(lean_object* v_00_u03b2_6043_, lean_object* v_x_6044_, size_t v_x_6045_, lean_object* v_x_6046_){
_start:
{
uint8_t v___x_6047_; 
v___x_6047_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(v_x_6044_, v_x_6045_, v_x_6046_);
return v___x_6047_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___boxed(lean_object* v_00_u03b2_6048_, lean_object* v_x_6049_, lean_object* v_x_6050_, lean_object* v_x_6051_){
_start:
{
size_t v_x_242__boxed_6052_; uint8_t v_res_6053_; lean_object* v_r_6054_; 
v_x_242__boxed_6052_ = lean_unbox_usize(v_x_6050_);
lean_dec(v_x_6050_);
v_res_6053_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0(v_00_u03b2_6048_, v_x_6049_, v_x_242__boxed_6052_, v_x_6051_);
lean_dec(v_x_6051_);
lean_dec_ref(v_x_6049_);
v_r_6054_ = lean_box(v_res_6053_);
return v_r_6054_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_6055_, lean_object* v_keys_6056_, lean_object* v_vals_6057_, lean_object* v_heq_6058_, lean_object* v_i_6059_, lean_object* v_k_6060_){
_start:
{
uint8_t v___x_6061_; 
v___x_6061_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(v_keys_6056_, v_i_6059_, v_k_6060_);
return v___x_6061_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_6062_, lean_object* v_keys_6063_, lean_object* v_vals_6064_, lean_object* v_heq_6065_, lean_object* v_i_6066_, lean_object* v_k_6067_){
_start:
{
uint8_t v_res_6068_; lean_object* v_r_6069_; 
v_res_6068_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1(v_00_u03b2_6062_, v_keys_6063_, v_vals_6064_, v_heq_6065_, v_i_6066_, v_k_6067_);
lean_dec(v_k_6067_);
lean_dec_ref(v_vals_6064_);
lean_dec_ref(v_keys_6063_);
v_r_6069_ = lean_box(v_res_6068_);
return v_r_6069_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_6070_, lean_object* v_x_6071_, lean_object* v_x_6072_, lean_object* v_x_6073_){
_start:
{
lean_object* v_ks_6074_; lean_object* v_vs_6075_; lean_object* v___x_6077_; uint8_t v_isShared_6078_; uint8_t v_isSharedCheck_6099_; 
v_ks_6074_ = lean_ctor_get(v_x_6070_, 0);
v_vs_6075_ = lean_ctor_get(v_x_6070_, 1);
v_isSharedCheck_6099_ = !lean_is_exclusive(v_x_6070_);
if (v_isSharedCheck_6099_ == 0)
{
v___x_6077_ = v_x_6070_;
v_isShared_6078_ = v_isSharedCheck_6099_;
goto v_resetjp_6076_;
}
else
{
lean_inc(v_vs_6075_);
lean_inc(v_ks_6074_);
lean_dec(v_x_6070_);
v___x_6077_ = lean_box(0);
v_isShared_6078_ = v_isSharedCheck_6099_;
goto v_resetjp_6076_;
}
v_resetjp_6076_:
{
lean_object* v___x_6079_; uint8_t v___x_6080_; 
v___x_6079_ = lean_array_get_size(v_ks_6074_);
v___x_6080_ = lean_nat_dec_lt(v_x_6071_, v___x_6079_);
if (v___x_6080_ == 0)
{
lean_object* v___x_6081_; lean_object* v___x_6082_; lean_object* v___x_6084_; 
lean_dec(v_x_6071_);
v___x_6081_ = lean_array_push(v_ks_6074_, v_x_6072_);
v___x_6082_ = lean_array_push(v_vs_6075_, v_x_6073_);
if (v_isShared_6078_ == 0)
{
lean_ctor_set(v___x_6077_, 1, v___x_6082_);
lean_ctor_set(v___x_6077_, 0, v___x_6081_);
v___x_6084_ = v___x_6077_;
goto v_reusejp_6083_;
}
else
{
lean_object* v_reuseFailAlloc_6085_; 
v_reuseFailAlloc_6085_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6085_, 0, v___x_6081_);
lean_ctor_set(v_reuseFailAlloc_6085_, 1, v___x_6082_);
v___x_6084_ = v_reuseFailAlloc_6085_;
goto v_reusejp_6083_;
}
v_reusejp_6083_:
{
return v___x_6084_;
}
}
else
{
lean_object* v_k_x27_6086_; uint8_t v___x_6087_; 
v_k_x27_6086_ = lean_array_fget_borrowed(v_ks_6074_, v_x_6071_);
v___x_6087_ = lean_name_eq(v_x_6072_, v_k_x27_6086_);
if (v___x_6087_ == 0)
{
lean_object* v___x_6089_; 
if (v_isShared_6078_ == 0)
{
v___x_6089_ = v___x_6077_;
goto v_reusejp_6088_;
}
else
{
lean_object* v_reuseFailAlloc_6093_; 
v_reuseFailAlloc_6093_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6093_, 0, v_ks_6074_);
lean_ctor_set(v_reuseFailAlloc_6093_, 1, v_vs_6075_);
v___x_6089_ = v_reuseFailAlloc_6093_;
goto v_reusejp_6088_;
}
v_reusejp_6088_:
{
lean_object* v___x_6090_; lean_object* v___x_6091_; 
v___x_6090_ = lean_unsigned_to_nat(1u);
v___x_6091_ = lean_nat_add(v_x_6071_, v___x_6090_);
lean_dec(v_x_6071_);
v_x_6070_ = v___x_6089_;
v_x_6071_ = v___x_6091_;
goto _start;
}
}
else
{
lean_object* v___x_6094_; lean_object* v___x_6095_; lean_object* v___x_6097_; 
v___x_6094_ = lean_array_fset(v_ks_6074_, v_x_6071_, v_x_6072_);
v___x_6095_ = lean_array_fset(v_vs_6075_, v_x_6071_, v_x_6073_);
lean_dec(v_x_6071_);
if (v_isShared_6078_ == 0)
{
lean_ctor_set(v___x_6077_, 1, v___x_6095_);
lean_ctor_set(v___x_6077_, 0, v___x_6094_);
v___x_6097_ = v___x_6077_;
goto v_reusejp_6096_;
}
else
{
lean_object* v_reuseFailAlloc_6098_; 
v_reuseFailAlloc_6098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6098_, 0, v___x_6094_);
lean_ctor_set(v_reuseFailAlloc_6098_, 1, v___x_6095_);
v___x_6097_ = v_reuseFailAlloc_6098_;
goto v_reusejp_6096_;
}
v_reusejp_6096_:
{
return v___x_6097_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1___redArg(lean_object* v_n_6100_, lean_object* v_k_6101_, lean_object* v_v_6102_){
_start:
{
lean_object* v___x_6103_; lean_object* v___x_6104_; 
v___x_6103_ = lean_unsigned_to_nat(0u);
v___x_6104_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_n_6100_, v___x_6103_, v_k_6101_, v_v_6102_);
return v___x_6104_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_6105_; 
v___x_6105_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_6105_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(lean_object* v_x_6106_, size_t v_x_6107_, size_t v_x_6108_, lean_object* v_x_6109_, lean_object* v_x_6110_){
_start:
{
if (lean_obj_tag(v_x_6106_) == 0)
{
lean_object* v_es_6111_; size_t v___x_6112_; size_t v___x_6113_; lean_object* v_j_6114_; lean_object* v___x_6115_; uint8_t v___x_6116_; 
v_es_6111_ = lean_ctor_get(v_x_6106_, 0);
v___x_6112_ = ((size_t)31ULL);
v___x_6113_ = lean_usize_land(v_x_6107_, v___x_6112_);
v_j_6114_ = lean_usize_to_nat(v___x_6113_);
v___x_6115_ = lean_array_get_size(v_es_6111_);
v___x_6116_ = lean_nat_dec_lt(v_j_6114_, v___x_6115_);
if (v___x_6116_ == 0)
{
lean_dec(v_j_6114_);
lean_dec(v_x_6110_);
lean_dec(v_x_6109_);
return v_x_6106_;
}
else
{
lean_object* v___x_6118_; uint8_t v_isShared_6119_; uint8_t v_isSharedCheck_6155_; 
lean_inc_ref(v_es_6111_);
v_isSharedCheck_6155_ = !lean_is_exclusive(v_x_6106_);
if (v_isSharedCheck_6155_ == 0)
{
lean_object* v_unused_6156_; 
v_unused_6156_ = lean_ctor_get(v_x_6106_, 0);
lean_dec(v_unused_6156_);
v___x_6118_ = v_x_6106_;
v_isShared_6119_ = v_isSharedCheck_6155_;
goto v_resetjp_6117_;
}
else
{
lean_dec(v_x_6106_);
v___x_6118_ = lean_box(0);
v_isShared_6119_ = v_isSharedCheck_6155_;
goto v_resetjp_6117_;
}
v_resetjp_6117_:
{
lean_object* v_v_6120_; lean_object* v___x_6121_; lean_object* v_xs_x27_6122_; lean_object* v___y_6124_; 
v_v_6120_ = lean_array_fget(v_es_6111_, v_j_6114_);
v___x_6121_ = lean_box(0);
v_xs_x27_6122_ = lean_array_fset(v_es_6111_, v_j_6114_, v___x_6121_);
switch(lean_obj_tag(v_v_6120_))
{
case 0:
{
lean_object* v_key_6129_; lean_object* v_val_6130_; lean_object* v___x_6132_; uint8_t v_isShared_6133_; uint8_t v_isSharedCheck_6140_; 
v_key_6129_ = lean_ctor_get(v_v_6120_, 0);
v_val_6130_ = lean_ctor_get(v_v_6120_, 1);
v_isSharedCheck_6140_ = !lean_is_exclusive(v_v_6120_);
if (v_isSharedCheck_6140_ == 0)
{
v___x_6132_ = v_v_6120_;
v_isShared_6133_ = v_isSharedCheck_6140_;
goto v_resetjp_6131_;
}
else
{
lean_inc(v_val_6130_);
lean_inc(v_key_6129_);
lean_dec(v_v_6120_);
v___x_6132_ = lean_box(0);
v_isShared_6133_ = v_isSharedCheck_6140_;
goto v_resetjp_6131_;
}
v_resetjp_6131_:
{
uint8_t v___x_6134_; 
v___x_6134_ = lean_name_eq(v_x_6109_, v_key_6129_);
if (v___x_6134_ == 0)
{
lean_object* v___x_6135_; lean_object* v___x_6136_; 
lean_del_object(v___x_6132_);
v___x_6135_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_6129_, v_val_6130_, v_x_6109_, v_x_6110_);
v___x_6136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6136_, 0, v___x_6135_);
v___y_6124_ = v___x_6136_;
goto v___jp_6123_;
}
else
{
lean_object* v___x_6138_; 
lean_dec(v_val_6130_);
lean_dec(v_key_6129_);
if (v_isShared_6133_ == 0)
{
lean_ctor_set(v___x_6132_, 1, v_x_6110_);
lean_ctor_set(v___x_6132_, 0, v_x_6109_);
v___x_6138_ = v___x_6132_;
goto v_reusejp_6137_;
}
else
{
lean_object* v_reuseFailAlloc_6139_; 
v_reuseFailAlloc_6139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6139_, 0, v_x_6109_);
lean_ctor_set(v_reuseFailAlloc_6139_, 1, v_x_6110_);
v___x_6138_ = v_reuseFailAlloc_6139_;
goto v_reusejp_6137_;
}
v_reusejp_6137_:
{
v___y_6124_ = v___x_6138_;
goto v___jp_6123_;
}
}
}
}
case 1:
{
lean_object* v_node_6141_; lean_object* v___x_6143_; uint8_t v_isShared_6144_; uint8_t v_isSharedCheck_6153_; 
v_node_6141_ = lean_ctor_get(v_v_6120_, 0);
v_isSharedCheck_6153_ = !lean_is_exclusive(v_v_6120_);
if (v_isSharedCheck_6153_ == 0)
{
v___x_6143_ = v_v_6120_;
v_isShared_6144_ = v_isSharedCheck_6153_;
goto v_resetjp_6142_;
}
else
{
lean_inc(v_node_6141_);
lean_dec(v_v_6120_);
v___x_6143_ = lean_box(0);
v_isShared_6144_ = v_isSharedCheck_6153_;
goto v_resetjp_6142_;
}
v_resetjp_6142_:
{
size_t v___x_6145_; size_t v___x_6146_; size_t v___x_6147_; size_t v___x_6148_; lean_object* v___x_6149_; lean_object* v___x_6151_; 
v___x_6145_ = ((size_t)5ULL);
v___x_6146_ = lean_usize_shift_right(v_x_6107_, v___x_6145_);
v___x_6147_ = ((size_t)1ULL);
v___x_6148_ = lean_usize_add(v_x_6108_, v___x_6147_);
v___x_6149_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_node_6141_, v___x_6146_, v___x_6148_, v_x_6109_, v_x_6110_);
if (v_isShared_6144_ == 0)
{
lean_ctor_set(v___x_6143_, 0, v___x_6149_);
v___x_6151_ = v___x_6143_;
goto v_reusejp_6150_;
}
else
{
lean_object* v_reuseFailAlloc_6152_; 
v_reuseFailAlloc_6152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6152_, 0, v___x_6149_);
v___x_6151_ = v_reuseFailAlloc_6152_;
goto v_reusejp_6150_;
}
v_reusejp_6150_:
{
v___y_6124_ = v___x_6151_;
goto v___jp_6123_;
}
}
}
default: 
{
lean_object* v___x_6154_; 
v___x_6154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6154_, 0, v_x_6109_);
lean_ctor_set(v___x_6154_, 1, v_x_6110_);
v___y_6124_ = v___x_6154_;
goto v___jp_6123_;
}
}
v___jp_6123_:
{
lean_object* v___x_6125_; lean_object* v___x_6127_; 
v___x_6125_ = lean_array_fset(v_xs_x27_6122_, v_j_6114_, v___y_6124_);
lean_dec(v_j_6114_);
if (v_isShared_6119_ == 0)
{
lean_ctor_set(v___x_6118_, 0, v___x_6125_);
v___x_6127_ = v___x_6118_;
goto v_reusejp_6126_;
}
else
{
lean_object* v_reuseFailAlloc_6128_; 
v_reuseFailAlloc_6128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6128_, 0, v___x_6125_);
v___x_6127_ = v_reuseFailAlloc_6128_;
goto v_reusejp_6126_;
}
v_reusejp_6126_:
{
return v___x_6127_;
}
}
}
}
}
else
{
lean_object* v_ks_6157_; lean_object* v_vs_6158_; lean_object* v___x_6160_; uint8_t v_isShared_6161_; uint8_t v_isSharedCheck_6176_; 
v_ks_6157_ = lean_ctor_get(v_x_6106_, 0);
v_vs_6158_ = lean_ctor_get(v_x_6106_, 1);
v_isSharedCheck_6176_ = !lean_is_exclusive(v_x_6106_);
if (v_isSharedCheck_6176_ == 0)
{
v___x_6160_ = v_x_6106_;
v_isShared_6161_ = v_isSharedCheck_6176_;
goto v_resetjp_6159_;
}
else
{
lean_inc(v_vs_6158_);
lean_inc(v_ks_6157_);
lean_dec(v_x_6106_);
v___x_6160_ = lean_box(0);
v_isShared_6161_ = v_isSharedCheck_6176_;
goto v_resetjp_6159_;
}
v_resetjp_6159_:
{
lean_object* v___x_6163_; 
if (v_isShared_6161_ == 0)
{
v___x_6163_ = v___x_6160_;
goto v_reusejp_6162_;
}
else
{
lean_object* v_reuseFailAlloc_6175_; 
v_reuseFailAlloc_6175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6175_, 0, v_ks_6157_);
lean_ctor_set(v_reuseFailAlloc_6175_, 1, v_vs_6158_);
v___x_6163_ = v_reuseFailAlloc_6175_;
goto v_reusejp_6162_;
}
v_reusejp_6162_:
{
lean_object* v_newNode_6164_; size_t v___x_6165_; uint8_t v___x_6166_; 
v_newNode_6164_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1___redArg(v___x_6163_, v_x_6109_, v_x_6110_);
v___x_6165_ = ((size_t)7ULL);
v___x_6166_ = lean_usize_dec_le(v___x_6165_, v_x_6108_);
if (v___x_6166_ == 0)
{
lean_object* v___x_6167_; lean_object* v___x_6168_; uint8_t v___x_6169_; 
v___x_6167_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_6164_);
v___x_6168_ = lean_unsigned_to_nat(4u);
v___x_6169_ = lean_nat_dec_lt(v___x_6167_, v___x_6168_);
lean_dec(v___x_6167_);
if (v___x_6169_ == 0)
{
lean_object* v_ks_6170_; lean_object* v_vs_6171_; lean_object* v___x_6172_; lean_object* v___x_6173_; lean_object* v___x_6174_; 
v_ks_6170_ = lean_ctor_get(v_newNode_6164_, 0);
lean_inc_ref(v_ks_6170_);
v_vs_6171_ = lean_ctor_get(v_newNode_6164_, 1);
lean_inc_ref(v_vs_6171_);
lean_dec_ref(v_newNode_6164_);
v___x_6172_ = lean_unsigned_to_nat(0u);
v___x_6173_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0);
v___x_6174_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(v_x_6108_, v_ks_6170_, v_vs_6171_, v___x_6172_, v___x_6173_);
lean_dec_ref(v_vs_6171_);
lean_dec_ref(v_ks_6170_);
return v___x_6174_;
}
else
{
return v_newNode_6164_;
}
}
else
{
return v_newNode_6164_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(size_t v_depth_6177_, lean_object* v_keys_6178_, lean_object* v_vals_6179_, lean_object* v_i_6180_, lean_object* v_entries_6181_){
_start:
{
lean_object* v___x_6182_; uint8_t v___x_6183_; 
v___x_6182_ = lean_array_get_size(v_keys_6178_);
v___x_6183_ = lean_nat_dec_lt(v_i_6180_, v___x_6182_);
if (v___x_6183_ == 0)
{
lean_dec(v_i_6180_);
return v_entries_6181_;
}
else
{
lean_object* v_k_6184_; lean_object* v_v_6185_; uint64_t v___y_6187_; 
v_k_6184_ = lean_array_fget_borrowed(v_keys_6178_, v_i_6180_);
v_v_6185_ = lean_array_fget_borrowed(v_vals_6179_, v_i_6180_);
if (lean_obj_tag(v_k_6184_) == 0)
{
uint64_t v___x_6198_; 
v___x_6198_ = 1723ULL;
v___y_6187_ = v___x_6198_;
goto v___jp_6186_;
}
else
{
uint64_t v_hash_6199_; 
v_hash_6199_ = lean_ctor_get_uint64(v_k_6184_, sizeof(void*)*2);
v___y_6187_ = v_hash_6199_;
goto v___jp_6186_;
}
v___jp_6186_:
{
size_t v_h_6188_; size_t v___x_6189_; lean_object* v___x_6190_; size_t v___x_6191_; size_t v___x_6192_; size_t v___x_6193_; size_t v_h_6194_; lean_object* v___x_6195_; lean_object* v___x_6196_; 
v_h_6188_ = lean_uint64_to_usize(v___y_6187_);
v___x_6189_ = ((size_t)5ULL);
v___x_6190_ = lean_unsigned_to_nat(1u);
v___x_6191_ = ((size_t)1ULL);
v___x_6192_ = lean_usize_sub(v_depth_6177_, v___x_6191_);
v___x_6193_ = lean_usize_mul(v___x_6189_, v___x_6192_);
v_h_6194_ = lean_usize_shift_right(v_h_6188_, v___x_6193_);
v___x_6195_ = lean_nat_add(v_i_6180_, v___x_6190_);
lean_dec(v_i_6180_);
lean_inc(v_v_6185_);
lean_inc(v_k_6184_);
v___x_6196_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_entries_6181_, v_h_6194_, v_depth_6177_, v_k_6184_, v_v_6185_);
v_i_6180_ = v___x_6195_;
v_entries_6181_ = v___x_6196_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_6200_, lean_object* v_keys_6201_, lean_object* v_vals_6202_, lean_object* v_i_6203_, lean_object* v_entries_6204_){
_start:
{
size_t v_depth_boxed_6205_; lean_object* v_res_6206_; 
v_depth_boxed_6205_ = lean_unbox_usize(v_depth_6200_);
lean_dec(v_depth_6200_);
v_res_6206_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(v_depth_boxed_6205_, v_keys_6201_, v_vals_6202_, v_i_6203_, v_entries_6204_);
lean_dec_ref(v_vals_6202_);
lean_dec_ref(v_keys_6201_);
return v_res_6206_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___boxed(lean_object* v_x_6207_, lean_object* v_x_6208_, lean_object* v_x_6209_, lean_object* v_x_6210_, lean_object* v_x_6211_){
_start:
{
size_t v_x_359__boxed_6212_; size_t v_x_360__boxed_6213_; lean_object* v_res_6214_; 
v_x_359__boxed_6212_ = lean_unbox_usize(v_x_6208_);
lean_dec(v_x_6208_);
v_x_360__boxed_6213_ = lean_unbox_usize(v_x_6209_);
lean_dec(v_x_6209_);
v_res_6214_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_x_6207_, v_x_359__boxed_6212_, v_x_360__boxed_6213_, v_x_6210_, v_x_6211_);
return v_res_6214_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0___redArg(lean_object* v_x_6215_, lean_object* v_x_6216_, lean_object* v_x_6217_){
_start:
{
uint64_t v___y_6219_; 
if (lean_obj_tag(v_x_6216_) == 0)
{
uint64_t v___x_6223_; 
v___x_6223_ = 1723ULL;
v___y_6219_ = v___x_6223_;
goto v___jp_6218_;
}
else
{
uint64_t v_hash_6224_; 
v_hash_6224_ = lean_ctor_get_uint64(v_x_6216_, sizeof(void*)*2);
v___y_6219_ = v_hash_6224_;
goto v___jp_6218_;
}
v___jp_6218_:
{
size_t v___x_6220_; size_t v___x_6221_; lean_object* v___x_6222_; 
v___x_6220_ = lean_uint64_to_usize(v___y_6219_);
v___x_6221_ = ((size_t)1ULL);
v___x_6222_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_x_6215_, v___x_6220_, v___x_6221_, v_x_6216_, v_x_6217_);
return v___x_6222_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_insert(lean_object* v_m_6225_, lean_object* v_n_6226_, lean_object* v_v_6227_){
_start:
{
lean_object* v_map_u2081_6228_; lean_object* v_map_u2082_6229_; lean_object* v___x_6231_; uint8_t v_isShared_6232_; uint8_t v_isSharedCheck_6237_; 
v_map_u2081_6228_ = lean_ctor_get(v_m_6225_, 0);
v_map_u2082_6229_ = lean_ctor_get(v_m_6225_, 1);
v_isSharedCheck_6237_ = !lean_is_exclusive(v_m_6225_);
if (v_isSharedCheck_6237_ == 0)
{
v___x_6231_ = v_m_6225_;
v_isShared_6232_ = v_isSharedCheck_6237_;
goto v_resetjp_6230_;
}
else
{
lean_inc(v_map_u2082_6229_);
lean_inc(v_map_u2081_6228_);
lean_dec(v_m_6225_);
v___x_6231_ = lean_box(0);
v_isShared_6232_ = v_isSharedCheck_6237_;
goto v_resetjp_6230_;
}
v_resetjp_6230_:
{
lean_object* v___x_6233_; lean_object* v___x_6235_; 
v___x_6233_ = l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0___redArg(v_map_u2082_6229_, v_n_6226_, v_v_6227_);
if (v_isShared_6232_ == 0)
{
lean_ctor_set(v___x_6231_, 1, v___x_6233_);
v___x_6235_ = v___x_6231_;
goto v_reusejp_6234_;
}
else
{
lean_object* v_reuseFailAlloc_6236_; 
v_reuseFailAlloc_6236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6236_, 0, v_map_u2081_6228_);
lean_ctor_set(v_reuseFailAlloc_6236_, 1, v___x_6233_);
v___x_6235_ = v_reuseFailAlloc_6236_;
goto v_reusejp_6234_;
}
v_reusejp_6234_:
{
return v___x_6235_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0(lean_object* v_00_u03b2_6238_, lean_object* v_x_6239_, lean_object* v_x_6240_, lean_object* v_x_6241_){
_start:
{
lean_object* v___x_6242_; 
v___x_6242_ = l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0___redArg(v_x_6239_, v_x_6240_, v_x_6241_);
return v___x_6242_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0(lean_object* v_00_u03b2_6243_, lean_object* v_x_6244_, size_t v_x_6245_, size_t v_x_6246_, lean_object* v_x_6247_, lean_object* v_x_6248_){
_start:
{
lean_object* v___x_6249_; 
v___x_6249_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_x_6244_, v_x_6245_, v_x_6246_, v_x_6247_, v_x_6248_);
return v___x_6249_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___boxed(lean_object* v_00_u03b2_6250_, lean_object* v_x_6251_, lean_object* v_x_6252_, lean_object* v_x_6253_, lean_object* v_x_6254_, lean_object* v_x_6255_){
_start:
{
size_t v_x_555__boxed_6256_; size_t v_x_556__boxed_6257_; lean_object* v_res_6258_; 
v_x_555__boxed_6256_ = lean_unbox_usize(v_x_6252_);
lean_dec(v_x_6252_);
v_x_556__boxed_6257_ = lean_unbox_usize(v_x_6253_);
lean_dec(v_x_6253_);
v_res_6258_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0(v_00_u03b2_6250_, v_x_6251_, v_x_555__boxed_6256_, v_x_556__boxed_6257_, v_x_6254_, v_x_6255_);
return v_res_6258_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_6259_, lean_object* v_n_6260_, lean_object* v_k_6261_, lean_object* v_v_6262_){
_start:
{
lean_object* v___x_6263_; 
v___x_6263_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1___redArg(v_n_6260_, v_k_6261_, v_v_6262_);
return v___x_6263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_6264_, size_t v_depth_6265_, lean_object* v_keys_6266_, lean_object* v_vals_6267_, lean_object* v_heq_6268_, lean_object* v_i_6269_, lean_object* v_entries_6270_){
_start:
{
lean_object* v___x_6271_; 
v___x_6271_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(v_depth_6265_, v_keys_6266_, v_vals_6267_, v_i_6269_, v_entries_6270_);
return v___x_6271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_6272_, lean_object* v_depth_6273_, lean_object* v_keys_6274_, lean_object* v_vals_6275_, lean_object* v_heq_6276_, lean_object* v_i_6277_, lean_object* v_entries_6278_){
_start:
{
size_t v_depth_boxed_6279_; lean_object* v_res_6280_; 
v_depth_boxed_6279_ = lean_unbox_usize(v_depth_6273_);
lean_dec(v_depth_6273_);
v_res_6280_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2(v_00_u03b2_6272_, v_depth_boxed_6279_, v_keys_6274_, v_vals_6275_, v_heq_6276_, v_i_6277_, v_entries_6278_);
lean_dec_ref(v_vals_6275_);
lean_dec_ref(v_keys_6274_);
return v_res_6280_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_6281_, lean_object* v_x_6282_, lean_object* v_x_6283_, lean_object* v_x_6284_, lean_object* v_x_6285_){
_start:
{
lean_object* v___x_6286_; 
v___x_6286_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_x_6282_, v_x_6283_, v_x_6284_, v_x_6285_);
return v___x_6286_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldStage2___redArg(lean_object* v_f_6287_, lean_object* v_s_6288_, lean_object* v_m_6289_){
_start:
{
lean_object* v_map_u2082_6290_; lean_object* v___x_6291_; 
v_map_u2082_6290_ = lean_ctor_get(v_m_6289_, 1);
lean_inc_ref(v_map_u2082_6290_);
lean_dec_ref(v_m_6289_);
v___x_6291_ = l_Lean_PersistentHashMap_foldl___redArg(v_map_u2082_6290_, v_f_6287_, v_s_6288_);
return v___x_6291_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldStage2(lean_object* v_00_u03c3_6292_, lean_object* v_f_6293_, lean_object* v_s_6294_, lean_object* v_m_6295_){
_start:
{
lean_object* v_map_u2082_6296_; lean_object* v___x_6297_; 
v_map_u2082_6296_ = lean_ctor_get(v_m_6295_, 1);
lean_inc_ref(v_map_u2082_6296_);
lean_dec_ref(v_m_6295_);
v___x_6297_ = l_Lean_PersistentHashMap_foldl___redArg(v_map_u2082_6296_, v_f_6293_, v_s_6294_);
return v___x_6297_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM___redArg___lam__0(lean_object* v_inst_6298_, lean_object* v_f_6299_, lean_object* v_map_u2082_6300_, lean_object* v_____do__lift_6301_){
_start:
{
lean_object* v___x_6302_; 
v___x_6302_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v_inst_6298_, v_f_6299_, v_map_u2082_6300_, v_____do__lift_6301_);
return v___x_6302_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM___redArg(lean_object* v_inst_6303_, lean_object* v_f_6304_, lean_object* v_init_6305_, lean_object* v_map_6306_){
_start:
{
lean_object* v_toBind_6307_; lean_object* v_map_u2081_6308_; lean_object* v_map_u2082_6309_; lean_object* v___f_6310_; lean_object* v___x_6311_; lean_object* v___x_6312_; 
v_toBind_6307_ = lean_ctor_get(v_inst_6303_, 1);
lean_inc(v_toBind_6307_);
v_map_u2081_6308_ = lean_ctor_get(v_map_6306_, 0);
lean_inc_ref(v_map_u2081_6308_);
v_map_u2082_6309_ = lean_ctor_get(v_map_6306_, 1);
lean_inc_ref(v_map_u2082_6309_);
lean_dec_ref(v_map_6306_);
lean_inc(v_f_6304_);
lean_inc_ref(v_inst_6303_);
v___f_6310_ = lean_alloc_closure((void*)(l_Lean_ConstMap_foldM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_6310_, 0, v_inst_6303_);
lean_closure_set(v___f_6310_, 1, v_f_6304_);
lean_closure_set(v___f_6310_, 2, v_map_u2082_6309_);
v___x_6311_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___redArg(v_inst_6303_, v_map_u2081_6308_, v_f_6304_, v_init_6305_);
v___x_6312_ = lean_apply_4(v_toBind_6307_, lean_box(0), lean_box(0), v___x_6311_, v___f_6310_);
return v___x_6312_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM(lean_object* v_00_u03c3_6313_, lean_object* v_m_6314_, lean_object* v_inst_6315_, lean_object* v_f_6316_, lean_object* v_init_6317_, lean_object* v_map_6318_){
_start:
{
lean_object* v___x_6319_; 
v___x_6319_ = l_Lean_ConstMap_foldM___redArg(v_inst_6315_, v_f_6316_, v_init_6317_, v_map_6318_);
return v___x_6319_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___lam__0(lean_object* v_f_6320_, lean_object* v_x1_6321_, lean_object* v_x2_6322_, lean_object* v_x3_6323_){
_start:
{
lean_object* v___x_6324_; 
v___x_6324_ = lean_apply_3(v_f_6320_, v_x1_6321_, v_x2_6322_, v_x3_6323_);
return v___x_6324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_f_6325_, lean_object* v_keys_6326_, lean_object* v_vals_6327_, lean_object* v_i_6328_, lean_object* v_acc_6329_){
_start:
{
lean_object* v___x_6330_; uint8_t v___x_6331_; 
v___x_6330_ = lean_array_get_size(v_keys_6326_);
v___x_6331_ = lean_nat_dec_lt(v_i_6328_, v___x_6330_);
if (v___x_6331_ == 0)
{
lean_dec(v_i_6328_);
lean_dec(v_f_6325_);
return v_acc_6329_;
}
else
{
lean_object* v_k_6332_; lean_object* v_v_6333_; lean_object* v___x_6334_; lean_object* v___x_6335_; lean_object* v___x_6336_; 
v_k_6332_ = lean_array_fget_borrowed(v_keys_6326_, v_i_6328_);
v_v_6333_ = lean_array_fget_borrowed(v_vals_6327_, v_i_6328_);
lean_inc(v_f_6325_);
lean_inc(v_v_6333_);
lean_inc(v_k_6332_);
v___x_6334_ = lean_apply_3(v_f_6325_, v_acc_6329_, v_k_6332_, v_v_6333_);
v___x_6335_ = lean_unsigned_to_nat(1u);
v___x_6336_ = lean_nat_add(v_i_6328_, v___x_6335_);
lean_dec(v_i_6328_);
v_i_6328_ = v___x_6336_;
v_acc_6329_ = v___x_6334_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_f_6338_, lean_object* v_keys_6339_, lean_object* v_vals_6340_, lean_object* v_i_6341_, lean_object* v_acc_6342_){
_start:
{
lean_object* v_res_6343_; 
v_res_6343_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(v_f_6338_, v_keys_6339_, v_vals_6340_, v_i_6341_, v_acc_6342_);
lean_dec_ref(v_vals_6340_);
lean_dec_ref(v_keys_6339_);
return v_res_6343_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_f_6344_, lean_object* v_as_6345_, size_t v_i_6346_, size_t v_stop_6347_, lean_object* v_b_6348_){
_start:
{
lean_object* v___y_6350_; uint8_t v___x_6354_; 
v___x_6354_ = lean_usize_dec_eq(v_i_6346_, v_stop_6347_);
if (v___x_6354_ == 0)
{
lean_object* v___x_6355_; 
v___x_6355_ = lean_array_uget_borrowed(v_as_6345_, v_i_6346_);
switch(lean_obj_tag(v___x_6355_))
{
case 0:
{
lean_object* v_key_6356_; lean_object* v_val_6357_; lean_object* v___x_6358_; 
v_key_6356_ = lean_ctor_get(v___x_6355_, 0);
v_val_6357_ = lean_ctor_get(v___x_6355_, 1);
lean_inc(v_f_6344_);
lean_inc(v_val_6357_);
lean_inc(v_key_6356_);
v___x_6358_ = lean_apply_3(v_f_6344_, v_b_6348_, v_key_6356_, v_val_6357_);
v___y_6350_ = v___x_6358_;
goto v___jp_6349_;
}
case 1:
{
lean_object* v_node_6359_; lean_object* v___x_6360_; 
v_node_6359_ = lean_ctor_get(v___x_6355_, 0);
lean_inc(v_f_6344_);
v___x_6360_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6344_, v_node_6359_, v_b_6348_);
v___y_6350_ = v___x_6360_;
goto v___jp_6349_;
}
default: 
{
v___y_6350_ = v_b_6348_;
goto v___jp_6349_;
}
}
}
else
{
lean_dec(v_f_6344_);
return v_b_6348_;
}
v___jp_6349_:
{
size_t v___x_6351_; size_t v___x_6352_; 
v___x_6351_ = ((size_t)1ULL);
v___x_6352_ = lean_usize_add(v_i_6346_, v___x_6351_);
v_i_6346_ = v___x_6352_;
v_b_6348_ = v___y_6350_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(lean_object* v_f_6361_, lean_object* v_x_6362_, lean_object* v_x_6363_){
_start:
{
if (lean_obj_tag(v_x_6362_) == 0)
{
lean_object* v_es_6364_; lean_object* v___x_6365_; lean_object* v___x_6366_; uint8_t v___x_6367_; 
v_es_6364_ = lean_ctor_get(v_x_6362_, 0);
v___x_6365_ = lean_unsigned_to_nat(0u);
v___x_6366_ = lean_array_get_size(v_es_6364_);
v___x_6367_ = lean_nat_dec_lt(v___x_6365_, v___x_6366_);
if (v___x_6367_ == 0)
{
lean_dec(v_f_6361_);
return v_x_6363_;
}
else
{
size_t v___x_6368_; size_t v___x_6369_; lean_object* v___x_6370_; 
v___x_6368_ = ((size_t)0ULL);
v___x_6369_ = lean_usize_of_nat(v___x_6366_);
v___x_6370_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(v_f_6361_, v_es_6364_, v___x_6368_, v___x_6369_, v_x_6363_);
return v___x_6370_;
}
}
else
{
lean_object* v_ks_6371_; lean_object* v_vs_6372_; lean_object* v___x_6373_; lean_object* v___x_6374_; 
v_ks_6371_ = lean_ctor_get(v_x_6362_, 0);
v_vs_6372_ = lean_ctor_get(v_x_6362_, 1);
v___x_6373_ = lean_unsigned_to_nat(0u);
v___x_6374_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(v_f_6361_, v_ks_6371_, v_vs_6372_, v___x_6373_, v_x_6363_);
return v___x_6374_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_6375_, lean_object* v_x_6376_, lean_object* v_x_6377_){
_start:
{
lean_object* v_res_6378_; 
v_res_6378_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6375_, v_x_6376_, v_x_6377_);
lean_dec_ref(v_x_6376_);
return v_res_6378_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_f_6379_, lean_object* v_as_6380_, lean_object* v_i_6381_, lean_object* v_stop_6382_, lean_object* v_b_6383_){
_start:
{
size_t v_i_boxed_6384_; size_t v_stop_boxed_6385_; lean_object* v_res_6386_; 
v_i_boxed_6384_ = lean_unbox_usize(v_i_6381_);
lean_dec(v_i_6381_);
v_stop_boxed_6385_ = lean_unbox_usize(v_stop_6382_);
lean_dec(v_stop_6382_);
v_res_6386_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(v_f_6379_, v_as_6380_, v_i_boxed_6384_, v_stop_boxed_6385_, v_b_6383_);
lean_dec_ref(v_as_6380_);
return v_res_6386_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(lean_object* v_map_6387_, lean_object* v_f_6388_, lean_object* v_init_6389_){
_start:
{
lean_object* v___f_6390_; lean_object* v___x_6391_; 
v___f_6390_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___lam__0), 4, 1);
lean_closure_set(v___f_6390_, 0, v_f_6388_);
v___x_6391_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v___f_6390_, v_map_6387_, v_init_6389_);
return v___x_6391_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___boxed(lean_object* v_map_6392_, lean_object* v_f_6393_, lean_object* v_init_6394_){
_start:
{
lean_object* v_res_6395_; 
v_res_6395_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(v_map_6392_, v_f_6393_, v_init_6394_);
lean_dec_ref(v_map_6392_);
return v_res_6395_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_fold___redArg(lean_object* v_f_6396_, lean_object* v_init_6397_, lean_object* v_m_6398_){
_start:
{
lean_object* v_map_u2081_6399_; lean_object* v_map_u2082_6400_; lean_object* v___x_6401_; lean_object* v___x_6402_; 
v_map_u2081_6399_ = lean_ctor_get(v_m_6398_, 0);
lean_inc_ref(v_map_u2081_6399_);
v_map_u2082_6400_ = lean_ctor_get(v_m_6398_, 1);
lean_inc_ref(v_map_u2082_6400_);
lean_dec_ref(v_m_6398_);
lean_inc(v_f_6396_);
v___x_6401_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldlMAux___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_map_u2081_6399_, v_f_6396_, v_init_6397_);
v___x_6402_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(v_map_u2082_6400_, v_f_6396_, v___x_6401_);
lean_dec_ref(v_map_u2082_6400_);
return v___x_6402_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_fold(lean_object* v_00_u03c3_6403_, lean_object* v_f_6404_, lean_object* v_init_6405_, lean_object* v_m_6406_){
_start:
{
lean_object* v___x_6407_; 
v___x_6407_ = l_Lean_ConstMap_fold___redArg(v_f_6404_, v_init_6405_, v_m_6406_);
return v___x_6407_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0(lean_object* v_00_u03c3_6408_, lean_object* v_00_u03b2_6409_, lean_object* v_map_6410_, lean_object* v_f_6411_, lean_object* v_init_6412_){
_start:
{
lean_object* v___x_6413_; 
v___x_6413_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(v_map_6410_, v_f_6411_, v_init_6412_);
return v___x_6413_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___boxed(lean_object* v_00_u03c3_6414_, lean_object* v_00_u03b2_6415_, lean_object* v_map_6416_, lean_object* v_f_6417_, lean_object* v_init_6418_){
_start:
{
lean_object* v_res_6419_; 
v_res_6419_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0(v_00_u03c3_6414_, v_00_u03b2_6415_, v_map_6416_, v_f_6417_, v_init_6418_);
lean_dec_ref(v_map_6416_);
return v_res_6419_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg(lean_object* v_map_6420_, lean_object* v_f_6421_, lean_object* v_init_6422_){
_start:
{
lean_object* v___x_6423_; 
v___x_6423_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6421_, v_map_6420_, v_init_6422_);
return v___x_6423_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg___boxed(lean_object* v_map_6424_, lean_object* v_f_6425_, lean_object* v_init_6426_){
_start:
{
lean_object* v_res_6427_; 
v_res_6427_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg(v_map_6424_, v_f_6425_, v_init_6426_);
lean_dec_ref(v_map_6424_);
return v_res_6427_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0(lean_object* v_00_u03c3_6428_, lean_object* v_00_u03b2_6429_, lean_object* v_map_6430_, lean_object* v_f_6431_, lean_object* v_init_6432_){
_start:
{
lean_object* v___x_6433_; 
v___x_6433_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6431_, v_map_6430_, v_init_6432_);
return v___x_6433_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___boxed(lean_object* v_00_u03c3_6434_, lean_object* v_00_u03b2_6435_, lean_object* v_map_6436_, lean_object* v_f_6437_, lean_object* v_init_6438_){
_start:
{
lean_object* v_res_6439_; 
v_res_6439_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0(v_00_u03c3_6434_, v_00_u03b2_6435_, v_map_6436_, v_f_6437_, v_init_6438_);
lean_dec_ref(v_map_6436_);
return v_res_6439_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1(lean_object* v_00_u03c3_6440_, lean_object* v_00_u03b1_6441_, lean_object* v_00_u03b2_6442_, lean_object* v_f_6443_, lean_object* v_x_6444_, lean_object* v_x_6445_){
_start:
{
lean_object* v___x_6446_; 
v___x_6446_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6443_, v_x_6444_, v_x_6445_);
return v___x_6446_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_6447_, lean_object* v_00_u03b1_6448_, lean_object* v_00_u03b2_6449_, lean_object* v_f_6450_, lean_object* v_x_6451_, lean_object* v_x_6452_){
_start:
{
lean_object* v_res_6453_; 
v_res_6453_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1(v_00_u03c3_6447_, v_00_u03b1_6448_, v_00_u03b2_6449_, v_f_6450_, v_x_6451_, v_x_6452_);
lean_dec_ref(v_x_6451_);
return v_res_6453_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_6454_, lean_object* v_00_u03b2_6455_, lean_object* v_00_u03c3_6456_, lean_object* v_f_6457_, lean_object* v_as_6458_, size_t v_i_6459_, size_t v_stop_6460_, lean_object* v_b_6461_){
_start:
{
lean_object* v___x_6462_; 
v___x_6462_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(v_f_6457_, v_as_6458_, v_i_6459_, v_stop_6460_, v_b_6461_);
return v___x_6462_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_6463_, lean_object* v_00_u03b2_6464_, lean_object* v_00_u03c3_6465_, lean_object* v_f_6466_, lean_object* v_as_6467_, lean_object* v_i_6468_, lean_object* v_stop_6469_, lean_object* v_b_6470_){
_start:
{
size_t v_i_boxed_6471_; size_t v_stop_boxed_6472_; lean_object* v_res_6473_; 
v_i_boxed_6471_ = lean_unbox_usize(v_i_6468_);
lean_dec(v_i_6468_);
v_stop_boxed_6472_ = lean_unbox_usize(v_stop_6469_);
lean_dec(v_stop_6469_);
v_res_6473_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_6463_, v_00_u03b2_6464_, v_00_u03c3_6465_, v_f_6466_, v_as_6467_, v_i_boxed_6471_, v_stop_boxed_6472_, v_b_6470_);
lean_dec_ref(v_as_6467_);
return v_res_6473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03c3_6474_, lean_object* v_00_u03b1_6475_, lean_object* v_00_u03b2_6476_, lean_object* v_f_6477_, lean_object* v_keys_6478_, lean_object* v_vals_6479_, lean_object* v_heq_6480_, lean_object* v_i_6481_, lean_object* v_acc_6482_){
_start:
{
lean_object* v___x_6483_; 
v___x_6483_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(v_f_6477_, v_keys_6478_, v_vals_6479_, v_i_6481_, v_acc_6482_);
return v___x_6483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03c3_6484_, lean_object* v_00_u03b1_6485_, lean_object* v_00_u03b2_6486_, lean_object* v_f_6487_, lean_object* v_keys_6488_, lean_object* v_vals_6489_, lean_object* v_heq_6490_, lean_object* v_i_6491_, lean_object* v_acc_6492_){
_start:
{
lean_object* v_res_6493_; 
v_res_6493_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3(v_00_u03c3_6484_, v_00_u03b1_6485_, v_00_u03b2_6486_, v_f_6487_, v_keys_6488_, v_vals_6489_, v_heq_6490_, v_i_6491_, v_acc_6492_);
lean_dec_ref(v_vals_6489_);
lean_dec_ref(v_keys_6488_);
return v_res_6493_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM___redArg___lam__0(lean_object* v_inst_6494_, lean_object* v_map_u2082_6495_, lean_object* v_f_6496_, lean_object* v_____r_6497_){
_start:
{
lean_object* v___x_6498_; 
v___x_6498_ = l_Lean_PersistentHashMap_forM___redArg(v_inst_6494_, v_map_u2082_6495_, v_f_6496_);
return v___x_6498_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM___redArg(lean_object* v_inst_6499_, lean_object* v_map_6500_, lean_object* v_f_6501_){
_start:
{
lean_object* v_toBind_6502_; lean_object* v_map_u2081_6503_; lean_object* v_map_u2082_6504_; lean_object* v___f_6505_; lean_object* v___x_6506_; lean_object* v___x_6507_; 
v_toBind_6502_ = lean_ctor_get(v_inst_6499_, 1);
lean_inc(v_toBind_6502_);
v_map_u2081_6503_ = lean_ctor_get(v_map_6500_, 0);
lean_inc_ref(v_map_u2081_6503_);
v_map_u2082_6504_ = lean_ctor_get(v_map_6500_, 1);
lean_inc_ref(v_map_u2082_6504_);
lean_dec_ref(v_map_6500_);
lean_inc(v_f_6501_);
lean_inc_ref(v_inst_6499_);
v___f_6505_ = lean_alloc_closure((void*)(l_Lean_ConstMap_forM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_6505_, 0, v_inst_6499_);
lean_closure_set(v___f_6505_, 1, v_map_u2082_6504_);
lean_closure_set(v___f_6505_, 2, v_f_6501_);
v___x_6506_ = l_Lean_ImportedConsts_forM___redArg(v_inst_6499_, v_map_u2081_6503_, v_f_6501_);
v___x_6507_ = lean_apply_4(v_toBind_6502_, lean_box(0), lean_box(0), v___x_6506_, v___f_6505_);
return v___x_6507_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM(lean_object* v_m_6508_, lean_object* v_inst_6509_, lean_object* v_map_6510_, lean_object* v_f_6511_){
_start:
{
lean_object* v___x_6512_; 
v___x_6512_ = l_Lean_ConstMap_forM___redArg(v_inst_6509_, v_map_6510_, v_f_6511_);
return v___x_6512_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__0(lean_object* v_f_6513_, lean_object* v_n_6514_, lean_object* v_v_6515_){
_start:
{
lean_object* v___x_6516_; lean_object* v___x_6517_; 
v___x_6516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6516_, 0, v_n_6514_);
lean_ctor_set(v___x_6516_, 1, v_v_6515_);
v___x_6517_ = lean_apply_1(v_f_6513_, v___x_6516_);
return v___x_6517_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__1(lean_object* v_inst_6518_, lean_object* v_map_6519_, lean_object* v_f_6520_){
_start:
{
lean_object* v___f_6521_; lean_object* v___x_6522_; 
v___f_6521_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__0), 3, 1);
lean_closure_set(v___f_6521_, 0, v_f_6520_);
v___x_6522_ = l_Lean_ConstMap_forM___redArg(v_inst_6518_, v_map_6519_, v___f_6521_);
return v___x_6522_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg(lean_object* v_inst_6523_){
_start:
{
lean_object* v___f_6524_; 
v___f_6524_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_6524_, 0, v_inst_6523_);
return v___f_6524_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad(lean_object* v_m_6525_, lean_object* v_inst_6526_){
_start:
{
lean_object* v___f_6527_; 
v___f_6527_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_6527_, 0, v_inst_6526_);
return v___f_6527_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__2(lean_object* v___y_6528_, lean_object* v_toBind_6529_, lean_object* v___f_6530_, lean_object* v_n_6531_, lean_object* v_v_6532_, lean_object* v___y_6533_){
_start:
{
lean_object* v___x_6534_; lean_object* v___x_6535_; lean_object* v___x_6536_; 
v___x_6534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6534_, 0, v_n_6531_);
lean_ctor_set(v___x_6534_, 1, v_v_6532_);
v___x_6535_ = lean_apply_2(v___y_6528_, v___x_6534_, v___y_6533_);
v___x_6536_ = lean_apply_4(v_toBind_6529_, lean_box(0), lean_box(0), v___x_6535_, v___f_6530_);
return v___x_6536_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__0(lean_object* v_inst_6537_, lean_object* v_00_u03b2_6538_, lean_object* v___y_6539_, lean_object* v___y_6540_, lean_object* v___y_6541_){
_start:
{
lean_object* v___f_6542_; lean_object* v___f_6543_; lean_object* v___f_6544_; lean_object* v___f_6545_; lean_object* v___x_6546_; lean_object* v___x_6547_; lean_object* v___x_6548_; lean_object* v___x_6549_; lean_object* v___x_6550_; lean_object* v___x_6551_; lean_object* v___f_6552_; lean_object* v___f_6553_; lean_object* v___f_6554_; lean_object* v___f_6555_; lean_object* v___x_6556_; lean_object* v___x_6557_; lean_object* v___x_6558_; lean_object* v___x_6559_; lean_object* v___x_6560_; lean_object* v___x_6561_; lean_object* v_toApplicative_6562_; lean_object* v_toBind_6563_; lean_object* v_toPure_6564_; lean_object* v___f_6565_; lean_object* v___f_6566_; lean_object* v___f_6567_; lean_object* v___x_138__overap_6568_; lean_object* v___x_6569_; lean_object* v___x_6570_; 
lean_inc_ref_n(v_inst_6537_, 7);
v___f_6542_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_6542_, 0, v_inst_6537_);
v___f_6543_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_6543_, 0, v_inst_6537_);
v___f_6544_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_6544_, 0, v_inst_6537_);
v___f_6545_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_6545_, 0, v_inst_6537_);
v___x_6546_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_6546_, 0, lean_box(0));
lean_closure_set(v___x_6546_, 1, lean_box(0));
lean_closure_set(v___x_6546_, 2, v_inst_6537_);
v___x_6547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6547_, 0, v___x_6546_);
lean_ctor_set(v___x_6547_, 1, v___f_6542_);
v___x_6548_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_6548_, 0, lean_box(0));
lean_closure_set(v___x_6548_, 1, lean_box(0));
lean_closure_set(v___x_6548_, 2, v_inst_6537_);
v___x_6549_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6549_, 0, v___x_6547_);
lean_ctor_set(v___x_6549_, 1, v___x_6548_);
lean_ctor_set(v___x_6549_, 2, v___f_6543_);
lean_ctor_set(v___x_6549_, 3, v___f_6544_);
lean_ctor_set(v___x_6549_, 4, v___f_6545_);
v___x_6550_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_6550_, 0, lean_box(0));
lean_closure_set(v___x_6550_, 1, lean_box(0));
lean_closure_set(v___x_6550_, 2, v_inst_6537_);
v___x_6551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6551_, 0, v___x_6549_);
lean_ctor_set(v___x_6551_, 1, v___x_6550_);
lean_inc_ref_n(v___x_6551_, 6);
v___f_6552_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_6552_, 0, v___x_6551_);
v___f_6553_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_6553_, 0, v___x_6551_);
v___f_6554_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_6554_, 0, v___x_6551_);
v___f_6555_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_6555_, 0, v___x_6551_);
v___x_6556_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_6556_, 0, lean_box(0));
lean_closure_set(v___x_6556_, 1, lean_box(0));
lean_closure_set(v___x_6556_, 2, v___x_6551_);
v___x_6557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6557_, 0, v___x_6556_);
lean_ctor_set(v___x_6557_, 1, v___f_6552_);
v___x_6558_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_6558_, 0, lean_box(0));
lean_closure_set(v___x_6558_, 1, lean_box(0));
lean_closure_set(v___x_6558_, 2, v___x_6551_);
v___x_6559_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6559_, 0, v___x_6557_);
lean_ctor_set(v___x_6559_, 1, v___x_6558_);
lean_ctor_set(v___x_6559_, 2, v___f_6553_);
lean_ctor_set(v___x_6559_, 3, v___f_6554_);
lean_ctor_set(v___x_6559_, 4, v___f_6555_);
v___x_6560_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_6560_, 0, lean_box(0));
lean_closure_set(v___x_6560_, 1, lean_box(0));
lean_closure_set(v___x_6560_, 2, v___x_6551_);
v___x_6561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6561_, 0, v___x_6559_);
lean_ctor_set(v___x_6561_, 1, v___x_6560_);
v_toApplicative_6562_ = lean_ctor_get(v_inst_6537_, 0);
lean_inc_ref(v_toApplicative_6562_);
v_toBind_6563_ = lean_ctor_get(v_inst_6537_, 1);
lean_inc_n(v_toBind_6563_, 2);
lean_dec_ref(v_inst_6537_);
v_toPure_6564_ = lean_ctor_get(v_toApplicative_6562_, 1);
lean_inc_n(v_toPure_6564_, 2);
lean_dec_ref(v_toApplicative_6562_);
v___f_6565_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0), 2, 1);
lean_closure_set(v___f_6565_, 0, v_toPure_6564_);
v___f_6566_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_6566_, 0, v_toPure_6564_);
v___f_6567_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__2), 6, 3);
lean_closure_set(v___f_6567_, 0, v___y_6541_);
lean_closure_set(v___f_6567_, 1, v_toBind_6563_);
lean_closure_set(v___f_6567_, 2, v___f_6566_);
v___x_138__overap_6568_ = l_Lean_ConstMap_forM___redArg(v___x_6561_, v___y_6539_, v___f_6567_);
v___x_6569_ = lean_apply_1(v___x_138__overap_6568_, v___y_6540_);
v___x_6570_ = lean_apply_4(v_toBind_6563_, lean_box(0), lean_box(0), v___x_6569_, v___f_6565_);
return v___x_6570_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg(lean_object* v_inst_6571_){
_start:
{
lean_object* v___f_6572_; 
v___f_6572_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__0), 5, 1);
lean_closure_set(v___f_6572_, 0, v_inst_6571_);
return v___f_6572_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad(lean_object* v_m_6573_, lean_object* v_inst_6574_){
_start:
{
lean_object* v___f_6575_; 
v___f_6575_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__0), 5, 1);
lean_closure_set(v___f_6575_, 0, v_inst_6574_);
return v___f_6575_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_toList___lam__0(lean_object* v_es_6576_, lean_object* v_n_6577_, lean_object* v_v_6578_){
_start:
{
lean_object* v___x_6579_; lean_object* v___x_6580_; 
v___x_6579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6579_, 0, v_n_6577_);
lean_ctor_set(v___x_6579_, 1, v_v_6578_);
v___x_6580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6580_, 0, v___x_6579_);
lean_ctor_set(v___x_6580_, 1, v_es_6576_);
return v___x_6580_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_toList(lean_object* v_m_6582_){
_start:
{
lean_object* v___f_6583_; lean_object* v___x_6584_; lean_object* v___x_6585_; 
v___f_6583_ = ((lean_object*)(l_Lean_ConstMap_toList___closed__0));
v___x_6584_ = lean_box(0);
v___x_6585_ = l_Lean_ConstMap_fold___redArg(v___f_6583_, v___x_6584_, v_m_6582_);
return v___x_6585_;
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
