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
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_byte_array_get(lean_object*, lean_object*);
uint8_t lean_uint8_land(uint8_t, uint8_t);
uint64_t lean_uint8_to_uint64(uint8_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint32_t lean_uint8_to_uint32(uint8_t);
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
uint32_t lean_uint32_lor(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
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
lean_object* lean_imported_consts_find_entry_cached(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryCached_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_imported_consts_mod_idx_core(lean_object*, lean_object*, lean_object*);
lean_object* lean_imported_consts_find_mod_idx_cached(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findModIdxCached_x3f___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_imported_consts_find_mod_idx_cached(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modIdxCached_x3f___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findEntryCached_x3f___boxed(lean_object* v_t_2758_, lean_object* v_n_2759_){
_start:
{
lean_object* v_res_2760_; 
v_res_2760_ = lean_imported_consts_find_entry_cached(v_t_2758_, v_n_2759_);
lean_dec(v_n_2759_);
lean_dec_ref(v_t_2758_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg(lean_object* v_bound_2761_, lean_object* v_x_2762_, lean_object* v_x_2763_, lean_object* v_x_2764_){
_start:
{
lean_object* v___x_2765_; lean_object* v___x_2766_; 
v___x_2765_ = lean_box(0);
v___x_2766_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
switch(lean_obj_tag(v_x_2762_))
{
case 0:
{
lean_object* v_modIdx_2767_; lean_object* v_tree_2768_; uint8_t v___x_2769_; 
v_modIdx_2767_ = lean_ctor_get(v_x_2762_, 0);
lean_inc(v_modIdx_2767_);
v_tree_2768_ = lean_ctor_get(v_x_2762_, 1);
lean_inc_ref(v_tree_2768_);
lean_dec_ref_known(v_x_2762_, 2);
v___x_2769_ = lean_nat_dec_lt(v_modIdx_2767_, v_bound_2761_);
if (v___x_2769_ == 0)
{
lean_object* v___x_2770_; 
lean_dec_ref(v_tree_2768_);
lean_dec(v_modIdx_2767_);
lean_dec(v_x_2764_);
v___x_2770_ = lean_box(0);
return v___x_2770_;
}
else
{
lean_object* v___x_2771_; 
v___x_2771_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_2768_, v_x_2763_, v_x_2764_);
lean_dec_ref(v_tree_2768_);
if (lean_obj_tag(v___x_2771_) == 0)
{
lean_object* v___x_2772_; 
lean_dec(v_modIdx_2767_);
v___x_2772_ = lean_box(0);
return v___x_2772_;
}
else
{
lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2779_; 
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2771_);
if (v_isSharedCheck_2779_ == 0)
{
lean_object* v_unused_2780_; 
v_unused_2780_ = lean_ctor_get(v___x_2771_, 0);
lean_dec(v_unused_2780_);
v___x_2774_ = v___x_2771_;
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
else
{
lean_dec(v___x_2771_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v___x_2777_; 
if (v_isShared_2775_ == 0)
{
lean_ctor_set(v___x_2774_, 0, v_modIdx_2767_);
v___x_2777_ = v___x_2774_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_modIdx_2767_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
}
}
case 1:
{
lean_object* v_entry_x3f_2781_; lean_object* v_children_2782_; lean_object* v_childIndex_2783_; lean_object* v___x_2784_; uint8_t v___x_2785_; 
v_entry_x3f_2781_ = lean_ctor_get(v_x_2762_, 1);
lean_inc(v_entry_x3f_2781_);
v_children_2782_ = lean_ctor_get(v_x_2762_, 2);
lean_inc_ref(v_children_2782_);
v_childIndex_2783_ = lean_ctor_get(v_x_2762_, 3);
lean_inc_ref(v_childIndex_2783_);
lean_dec_ref_known(v_x_2762_, 4);
v___x_2784_ = lean_unsigned_to_nat(0u);
v___x_2785_ = lean_nat_dec_eq(v_x_2764_, v___x_2784_);
if (v___x_2785_ == 0)
{
lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; 
lean_dec(v_entry_x3f_2781_);
v___x_2786_ = lean_unsigned_to_nat(1u);
v___x_2787_ = lean_nat_sub(v_x_2764_, v___x_2786_);
lean_dec(v_x_2764_);
v___x_2788_ = lean_array_get_borrowed(v___x_2765_, v_x_2763_, v___x_2787_);
v___x_2789_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_childIndex_2783_, v_children_2782_, v___x_2788_);
lean_dec_ref(v_childIndex_2783_);
if (lean_obj_tag(v___x_2789_) == 0)
{
lean_dec(v___x_2787_);
lean_dec_ref(v_children_2782_);
return v___x_2789_;
}
else
{
lean_object* v_val_2790_; lean_object* v___x_2791_; 
v_val_2790_ = lean_ctor_get(v___x_2789_, 0);
lean_inc(v_val_2790_);
lean_dec_ref_known(v___x_2789_, 1);
v___x_2791_ = lean_array_get(v___x_2766_, v_children_2782_, v_val_2790_);
lean_dec(v_val_2790_);
lean_dec_ref(v_children_2782_);
v_x_2762_ = v___x_2791_;
v_x_2764_ = v___x_2787_;
goto _start;
}
}
else
{
lean_dec_ref(v_childIndex_2783_);
lean_dec_ref(v_children_2782_);
lean_dec(v_x_2764_);
if (lean_obj_tag(v_entry_x3f_2781_) == 0)
{
lean_object* v___x_2793_; 
v___x_2793_ = lean_box(0);
return v___x_2793_;
}
else
{
lean_object* v_val_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2804_; 
v_val_2794_ = lean_ctor_get(v_entry_x3f_2781_, 0);
v_isSharedCheck_2804_ = !lean_is_exclusive(v_entry_x3f_2781_);
if (v_isSharedCheck_2804_ == 0)
{
v___x_2796_ = v_entry_x3f_2781_;
v_isShared_2797_ = v_isSharedCheck_2804_;
goto v_resetjp_2795_;
}
else
{
lean_inc(v_val_2794_);
lean_dec(v_entry_x3f_2781_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2804_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
lean_object* v_snd_2798_; uint8_t v___x_2799_; 
v_snd_2798_ = lean_ctor_get(v_val_2794_, 1);
lean_inc(v_snd_2798_);
lean_dec(v_val_2794_);
v___x_2799_ = lean_nat_dec_lt(v_snd_2798_, v_bound_2761_);
if (v___x_2799_ == 0)
{
lean_object* v___x_2800_; 
lean_dec(v_snd_2798_);
lean_del_object(v___x_2796_);
v___x_2800_ = lean_box(0);
return v___x_2800_;
}
else
{
lean_object* v___x_2802_; 
if (v_isShared_2797_ == 0)
{
lean_ctor_set(v___x_2796_, 0, v_snd_2798_);
v___x_2802_ = v___x_2796_;
goto v_reusejp_2801_;
}
else
{
lean_object* v_reuseFailAlloc_2803_; 
v_reuseFailAlloc_2803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2803_, 0, v_snd_2798_);
v___x_2802_ = v_reuseFailAlloc_2803_;
goto v_reusejp_2801_;
}
v_reusejp_2801_:
{
return v___x_2802_;
}
}
}
}
}
}
case 2:
{
lean_object* v_entry_2805_; lean_object* v_expanded_2806_; lean_object* v___x_2807_; uint8_t v___x_2808_; 
v_entry_2805_ = lean_ctor_get(v_x_2762_, 1);
lean_inc_ref(v_entry_2805_);
v_expanded_2806_ = lean_ctor_get(v_x_2762_, 2);
lean_inc_ref(v_expanded_2806_);
lean_dec_ref_known(v_x_2762_, 3);
v___x_2807_ = lean_unsigned_to_nat(0u);
v___x_2808_ = lean_nat_dec_eq(v_x_2764_, v___x_2807_);
if (v___x_2808_ == 0)
{
lean_object* v___x_2809_; lean_object* v_fst_2810_; lean_object* v_snd_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; 
lean_dec_ref(v_entry_2805_);
v___x_2809_ = lean_imported_consts_force_shared(v_expanded_2806_);
lean_dec_ref(v_expanded_2806_);
v_fst_2810_ = lean_ctor_get(v___x_2809_, 0);
lean_inc(v_fst_2810_);
v_snd_2811_ = lean_ctor_get(v___x_2809_, 1);
lean_inc(v_snd_2811_);
lean_dec(v___x_2809_);
v___x_2812_ = lean_unsigned_to_nat(1u);
v___x_2813_ = lean_nat_sub(v_x_2764_, v___x_2812_);
lean_dec(v_x_2764_);
v___x_2814_ = lean_array_get_borrowed(v___x_2765_, v_x_2763_, v___x_2813_);
v___x_2815_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux_spec__0___redArg(v_snd_2811_, v_fst_2810_, v___x_2814_);
lean_dec(v_snd_2811_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_dec(v___x_2813_);
lean_dec(v_fst_2810_);
return v___x_2815_;
}
else
{
lean_object* v_val_2816_; lean_object* v___x_2817_; 
v_val_2816_ = lean_ctor_get(v___x_2815_, 0);
lean_inc(v_val_2816_);
lean_dec_ref_known(v___x_2815_, 1);
v___x_2817_ = lean_array_get(v___x_2766_, v_fst_2810_, v_val_2816_);
lean_dec(v_val_2816_);
lean_dec(v_fst_2810_);
v_x_2762_ = v___x_2817_;
v_x_2764_ = v___x_2813_;
goto _start;
}
}
else
{
lean_object* v___x_2819_; 
lean_dec_ref(v_expanded_2806_);
lean_dec(v_x_2764_);
v___x_2819_ = lean_imported_consts_force_shared(v_entry_2805_);
lean_dec_ref(v_entry_2805_);
if (lean_obj_tag(v___x_2819_) == 0)
{
lean_object* v___x_2820_; 
v___x_2820_ = lean_box(0);
return v___x_2820_;
}
else
{
lean_object* v_val_2821_; lean_object* v___x_2823_; uint8_t v_isShared_2824_; uint8_t v_isSharedCheck_2831_; 
v_val_2821_ = lean_ctor_get(v___x_2819_, 0);
v_isSharedCheck_2831_ = !lean_is_exclusive(v___x_2819_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2823_ = v___x_2819_;
v_isShared_2824_ = v_isSharedCheck_2831_;
goto v_resetjp_2822_;
}
else
{
lean_inc(v_val_2821_);
lean_dec(v___x_2819_);
v___x_2823_ = lean_box(0);
v_isShared_2824_ = v_isSharedCheck_2831_;
goto v_resetjp_2822_;
}
v_resetjp_2822_:
{
lean_object* v_snd_2825_; uint8_t v___x_2826_; 
v_snd_2825_ = lean_ctor_get(v_val_2821_, 1);
lean_inc(v_snd_2825_);
lean_dec(v_val_2821_);
v___x_2826_ = lean_nat_dec_lt(v_snd_2825_, v_bound_2761_);
if (v___x_2826_ == 0)
{
lean_object* v___x_2827_; 
lean_dec(v_snd_2825_);
lean_del_object(v___x_2823_);
v___x_2827_ = lean_box(0);
return v___x_2827_;
}
else
{
lean_object* v___x_2829_; 
if (v_isShared_2824_ == 0)
{
lean_ctor_set(v___x_2823_, 0, v_snd_2825_);
v___x_2829_ = v___x_2823_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2830_; 
v_reuseFailAlloc_2830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2830_, 0, v_snd_2825_);
v___x_2829_ = v_reuseFailAlloc_2830_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
return v___x_2829_;
}
}
}
}
}
}
default: 
{
lean_object* v_tree_2832_; 
v_tree_2832_ = lean_ctor_get(v_x_2762_, 1);
lean_inc_ref(v_tree_2832_);
lean_dec_ref_known(v_x_2762_, 2);
v_x_2762_ = v_tree_2832_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg___boxed(lean_object* v_bound_2834_, lean_object* v_x_2835_, lean_object* v_x_2836_, lean_object* v_x_2837_){
_start:
{
lean_object* v_res_2838_; 
v_res_2838_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg(v_bound_2834_, v_x_2835_, v_x_2836_, v_x_2837_);
lean_dec_ref(v_x_2836_);
lean_dec(v_bound_2834_);
return v_res_2838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux(lean_object* v_00_u03b1_2839_, lean_object* v_bound_2840_, lean_object* v_x_2841_, lean_object* v_x_2842_, lean_object* v_x_2843_){
_start:
{
lean_object* v___x_2844_; 
v___x_2844_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg(v_bound_2840_, v_x_2841_, v_x_2842_, v_x_2843_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___boxed(lean_object* v_00_u03b1_2845_, lean_object* v_bound_2846_, lean_object* v_x_2847_, lean_object* v_x_2848_, lean_object* v_x_2849_){
_start:
{
lean_object* v_res_2850_; 
v_res_2850_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux(v_00_u03b1_2845_, v_bound_2846_, v_x_2847_, v_x_2848_, v_x_2849_);
lean_dec_ref(v_x_2848_);
lean_dec(v_bound_2846_);
return v_res_2850_;
}
}
LEAN_EXPORT lean_object* lean_imported_consts_mod_idx_core(lean_object* v_entry_2851_, lean_object* v_extras_2852_, lean_object* v_n_2853_){
_start:
{
lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v_path_2856_; 
v___x_2854_ = lean_unsigned_to_nat(8u);
v___x_2855_ = lean_mk_empty_array_with_capacity(v___x_2854_);
v_path_2856_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_2853_, v___x_2855_);
if (lean_obj_tag(v_entry_2851_) == 0)
{
lean_object* v___x_2857_; lean_object* v___x_2858_; 
v___x_2857_ = lean_array_get_size(v_path_2856_);
v___x_2858_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(v_extras_2852_, v_path_2856_, v___x_2857_);
lean_dec_ref(v_path_2856_);
return v___x_2858_;
}
else
{
lean_object* v_val_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2869_; 
v_val_2859_ = lean_ctor_get(v_entry_2851_, 0);
v_isSharedCheck_2869_ = !lean_is_exclusive(v_entry_2851_);
if (v_isSharedCheck_2869_ == 0)
{
v___x_2861_ = v_entry_2851_;
v_isShared_2862_ = v_isSharedCheck_2869_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_val_2859_);
lean_dec(v_entry_2851_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2869_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v_snd_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; 
v_snd_2863_ = lean_ctor_get(v_val_2859_, 1);
lean_inc(v_snd_2863_);
lean_dec(v_val_2859_);
v___x_2864_ = lean_array_get_size(v_path_2856_);
v___x_2865_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxBelowAux___redArg(v_snd_2863_, v_extras_2852_, v_path_2856_, v___x_2864_);
lean_dec_ref(v_path_2856_);
if (lean_obj_tag(v___x_2865_) == 0)
{
lean_object* v___x_2867_; 
if (v_isShared_2862_ == 0)
{
lean_ctor_set(v___x_2861_, 0, v_snd_2863_);
v___x_2867_ = v___x_2861_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v_snd_2863_);
v___x_2867_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
return v___x_2867_;
}
}
else
{
lean_dec(v_snd_2863_);
lean_del_object(v___x_2861_);
return v___x_2865_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findModIdxCached_x3f___boxed(lean_object* v_consts_2873_, lean_object* v_extras_2874_, lean_object* v_n_2875_){
_start:
{
lean_object* v_res_2876_; 
v_res_2876_ = lean_imported_consts_find_mod_idx_cached(v_consts_2873_, v_extras_2874_, v_n_2875_);
lean_dec(v_n_2875_);
lean_dec_ref(v_extras_2874_);
lean_dec_ref(v_consts_2873_);
return v_res_2876_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modIdxCached_x3f___boxed(lean_object* v_consts_2880_, lean_object* v_extras_2881_, lean_object* v_n_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = lean_imported_consts_find_mod_idx_cached(v_consts_2880_, v_extras_2881_, v_n_2882_);
lean_dec(v_n_2882_);
lean_dec_ref(v_extras_2881_);
lean_dec_ref(v_consts_2880_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_resetCache___boxed(lean_object* v_a_00___x40___internal___hyg_2885_){
_start:
{
lean_object* v_res_2886_; 
v_res_2886_ = lean_imported_consts_cache_reset();
return v_res_2886_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f___redArg(lean_object* v_t_2887_, lean_object* v_n_2888_){
_start:
{
lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v_path_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; 
v___x_2889_ = lean_unsigned_to_nat(8u);
v___x_2890_ = lean_mk_empty_array_with_capacity(v___x_2889_);
v_path_2891_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_2888_, v___x_2890_);
v___x_2892_ = lean_array_get_size(v_path_2891_);
v___x_2893_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findValAux___redArg(v_t_2887_, v_path_2891_, v___x_2892_);
lean_dec_ref(v_path_2891_);
return v___x_2893_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f(lean_object* v_00_u03b1_2894_, lean_object* v_t_2895_, lean_object* v_n_2896_){
_start:
{
lean_object* v___x_2897_; 
v___x_2897_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_2895_, v_n_2896_);
return v___x_2897_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findModIdx_x3f___redArg(lean_object* v_t_2898_, lean_object* v_n_2899_){
_start:
{
lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v_path_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; 
v___x_2900_ = lean_unsigned_to_nat(8u);
v___x_2901_ = lean_mk_empty_array_with_capacity(v___x_2900_);
v_path_2902_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_2899_, v___x_2901_);
v___x_2903_ = lean_array_get_size(v_path_2902_);
v___x_2904_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findModIdxAux___redArg(v_t_2898_, v_path_2902_, v___x_2903_);
lean_dec_ref(v_path_2902_);
return v___x_2904_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findModIdx_x3f(lean_object* v_00_u03b1_2905_, lean_object* v_t_2906_, lean_object* v_n_2907_){
_start:
{
lean_object* v___x_2908_; 
v___x_2908_ = l_Lean_ImportedConsts_findModIdx_x3f___redArg(v_t_2906_, v_n_2907_);
return v___x_2908_;
}
}
LEAN_EXPORT uint8_t l_Lean_ImportedConsts_contains___redArg(lean_object* v_t_2909_, lean_object* v_n_2910_){
_start:
{
lean_object* v___x_2911_; 
v___x_2911_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_2909_, v_n_2910_);
if (lean_obj_tag(v___x_2911_) == 0)
{
uint8_t v___x_2912_; 
v___x_2912_ = 0;
return v___x_2912_;
}
else
{
uint8_t v___x_2913_; 
lean_dec_ref_known(v___x_2911_, 1);
v___x_2913_ = 1;
return v___x_2913_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_contains___redArg___boxed(lean_object* v_t_2914_, lean_object* v_n_2915_){
_start:
{
uint8_t v_res_2916_; lean_object* v_r_2917_; 
v_res_2916_ = l_Lean_ImportedConsts_contains___redArg(v_t_2914_, v_n_2915_);
v_r_2917_ = lean_box(v_res_2916_);
return v_r_2917_;
}
}
LEAN_EXPORT uint8_t l_Lean_ImportedConsts_contains(lean_object* v_00_u03b1_2918_, lean_object* v_t_2919_, lean_object* v_n_2920_){
_start:
{
uint8_t v___x_2921_; 
v___x_2921_ = l_Lean_ImportedConsts_contains___redArg(v_t_2919_, v_n_2920_);
return v___x_2921_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_contains___boxed(lean_object* v_00_u03b1_2922_, lean_object* v_t_2923_, lean_object* v_n_2924_){
_start:
{
uint8_t v_res_2925_; lean_object* v_r_2926_; 
v_res_2925_ = l_Lean_ImportedConsts_contains(v_00_u03b1_2922_, v_t_2923_, v_n_2924_);
v_r_2926_ = lean_box(v_res_2925_);
return v_r_2926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0(lean_object* v_a_2927_, lean_object* v_x_2928_, lean_object* v___y_2929_){
_start:
{
lean_object* v_snd_2930_; lean_object* v_children_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; 
v_snd_2930_ = lean_ctor_get(v_a_2927_, 1);
v_children_2931_ = lean_ctor_get(v_snd_2930_, 2);
v___x_2932_ = lean_array_get_size(v_children_2931_);
v___x_2933_ = lean_nat_add(v___y_2929_, v___x_2932_);
v___x_2934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2934_, 0, v___x_2933_);
return v___x_2934_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0___boxed(lean_object* v_a_2935_, lean_object* v_x_2936_, lean_object* v___y_2937_){
_start:
{
lean_object* v_res_2938_; 
v_res_2938_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0(v_a_2935_, v_x_2936_, v___y_2937_);
lean_dec(v___y_2937_);
lean_dec_ref(v_a_2935_);
return v_res_2938_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__1(lean_object* v_fst_2939_, lean_object* v_a_2940_, lean_object* v_x_2941_, lean_object* v___y_2942_){
_start:
{
uint64_t v___y_2944_; lean_object* v_key_2950_; 
v_key_2950_ = lean_ctor_get(v_a_2940_, 0);
if (lean_obj_tag(v_key_2950_) == 0)
{
uint64_t v___x_2951_; 
v___x_2951_ = 1723ULL;
v___y_2944_ = v___x_2951_;
goto v___jp_2943_;
}
else
{
uint64_t v_hash_2952_; 
v_hash_2952_ = lean_ctor_get_uint64(v_key_2950_, sizeof(void*)*2);
v___y_2944_ = v_hash_2952_;
goto v___jp_2943_;
}
v___jp_2943_:
{
lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; 
v___x_2945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2945_, 0, v_fst_2939_);
lean_ctor_set(v___x_2945_, 1, v_a_2940_);
v___x_2946_ = lean_box_uint64(v___y_2944_);
v___x_2947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2946_);
lean_ctor_set(v___x_2947_, 1, v___x_2945_);
v___x_2948_ = lean_array_push(v___y_2942_, v___x_2947_);
v___x_2949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2948_);
return v___x_2949_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__2(lean_object* v___x_2953_, lean_object* v_a_2954_, lean_object* v_x_2955_, lean_object* v___y_2956_){
_start:
{
lean_object* v_snd_2957_; lean_object* v_fst_2958_; lean_object* v_children_2959_; lean_object* v___f_2960_; size_t v_sz_2961_; size_t v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; 
v_snd_2957_ = lean_ctor_get(v_a_2954_, 1);
lean_inc(v_snd_2957_);
v_fst_2958_ = lean_ctor_get(v_a_2954_, 0);
lean_inc(v_fst_2958_);
lean_dec_ref(v_a_2954_);
v_children_2959_ = lean_ctor_get(v_snd_2957_, 2);
lean_inc_ref(v_children_2959_);
lean_dec(v_snd_2957_);
v___f_2960_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__1), 4, 1);
lean_closure_set(v___f_2960_, 0, v_fst_2958_);
v_sz_2961_ = lean_array_size(v_children_2959_);
v___x_2962_ = ((size_t)0ULL);
v___x_2963_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2953_, v_children_2959_, v___f_2960_, v_sz_2961_, v___x_2962_, v___y_2956_);
v___x_2964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2964_, 0, v___x_2963_);
return v___x_2964_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(lean_object* v___x_2965_, lean_object* v_multi_2966_, lean_object* v___x_2967_, lean_object* v_total_2968_, lean_object* v_single_2969_, lean_object* v_a_2970_, lean_object* v_x_2971_, lean_object* v___y_2972_){
_start:
{
lean_object* v___x_2973_; uint8_t v___x_2974_; 
v___x_2973_ = lean_array_get_size(v_a_2970_);
v___x_2974_ = lean_nat_dec_eq(v___x_2973_, v___x_2965_);
if (v___x_2974_ == 0)
{
lean_object* v___x_2975_; lean_object* v___x_2976_; 
lean_dec(v_single_2969_);
v___x_2975_ = lean_apply_2(v_multi_2966_, v___y_2972_, v_a_2970_);
v___x_2976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2976_, 0, v___x_2975_);
return v___x_2976_;
}
else
{
lean_object* v___x_2977_; lean_object* v_fst_2978_; lean_object* v_snd_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; 
lean_dec(v_multi_2966_);
v___x_2977_ = lean_array_get(v___x_2967_, v_a_2970_, v_total_2968_);
lean_dec_ref(v_a_2970_);
v_fst_2978_ = lean_ctor_get(v___x_2977_, 0);
lean_inc(v_fst_2978_);
v_snd_2979_ = lean_ctor_get(v___x_2977_, 1);
lean_inc(v_snd_2979_);
lean_dec(v___x_2977_);
v___x_2980_ = lean_apply_3(v_single_2969_, v___y_2972_, v_fst_2978_, v_snd_2979_);
v___x_2981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2980_);
return v___x_2981_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed(lean_object* v___x_2982_, lean_object* v_multi_2983_, lean_object* v___x_2984_, lean_object* v_total_2985_, lean_object* v_single_2986_, lean_object* v_a_2987_, lean_object* v_x_2988_, lean_object* v___y_2989_){
_start:
{
lean_object* v_res_2990_; 
v_res_2990_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(v___x_2982_, v_multi_2983_, v___x_2984_, v_total_2985_, v_single_2986_, v_a_2987_, v_x_2988_, v___y_2989_);
lean_dec(v_total_2985_);
lean_dec_ref(v___x_2984_);
lean_dec(v___x_2982_);
return v_res_2990_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(lean_object* v_fst_2991_, lean_object* v___x_2992_, lean_object* v_____r_2993_, lean_object* v_groups_2994_){
_start:
{
lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; 
v___x_2995_ = lean_nat_add(v_fst_2991_, v___x_2992_);
v___x_2996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2996_, 0, v___x_2995_);
lean_ctor_set(v___x_2996_, 1, v_groups_2994_);
v___x_2997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2997_, 0, v___x_2996_);
return v___x_2997_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4___boxed(lean_object* v_fst_2998_, lean_object* v___x_2999_, lean_object* v_____r_3000_, lean_object* v_groups_3001_){
_start:
{
lean_object* v_res_3002_; 
v_res_3002_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(v_fst_2998_, v___x_2999_, v_____r_3000_, v_groups_3001_);
lean_dec(v___x_2999_);
lean_dec(v_fst_2998_);
return v_res_3002_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5(lean_object* v___x_3003_, lean_object* v_total_3004_, lean_object* v_snd_3005_, uint8_t v___x_3006_, uint8_t v___x_3007_, lean_object* v_g_3008_){
_start:
{
lean_object* v___x_3009_; lean_object* v_snd_3010_; lean_object* v_key_3011_; 
v___x_3009_ = lean_array_get_borrowed(v___x_3003_, v_g_3008_, v_total_3004_);
v_snd_3010_ = lean_ctor_get(v___x_3009_, 1);
v_key_3011_ = lean_ctor_get(v_snd_3010_, 0);
switch(lean_obj_tag(v_key_3011_))
{
case 0:
{
lean_object* v_key_3012_; 
v_key_3012_ = lean_ctor_get(v_snd_3005_, 0);
if (lean_obj_tag(v_key_3012_) == 0)
{
return v___x_3006_;
}
else
{
return v___x_3007_;
}
}
case 1:
{
lean_object* v_key_3013_; 
v_key_3013_ = lean_ctor_get(v_snd_3005_, 0);
if (lean_obj_tag(v_key_3013_) == 1)
{
lean_object* v_str_3014_; lean_object* v_str_3015_; uint8_t v___x_3016_; 
v_str_3014_ = lean_ctor_get(v_key_3011_, 1);
v_str_3015_ = lean_ctor_get(v_key_3013_, 1);
v___x_3016_ = lean_string_dec_eq(v_str_3014_, v_str_3015_);
return v___x_3016_;
}
else
{
return v___x_3007_;
}
}
default: 
{
lean_object* v_key_3017_; 
v_key_3017_ = lean_ctor_get(v_snd_3005_, 0);
if (lean_obj_tag(v_key_3017_) == 2)
{
lean_object* v_i_3018_; lean_object* v_i_3019_; uint8_t v___x_3020_; 
v_i_3018_ = lean_ctor_get(v_key_3011_, 1);
v_i_3019_ = lean_ctor_get(v_key_3017_, 1);
v___x_3020_ = lean_nat_dec_eq(v_i_3018_, v_i_3019_);
return v___x_3020_;
}
else
{
return v___x_3007_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5___boxed(lean_object* v___x_3021_, lean_object* v_total_3022_, lean_object* v_snd_3023_, lean_object* v___x_3024_, lean_object* v___x_3025_, lean_object* v_g_3026_){
_start:
{
uint8_t v___x_3289__boxed_3027_; uint8_t v___x_3290__boxed_3028_; uint8_t v_res_3029_; lean_object* v_r_3030_; 
v___x_3289__boxed_3027_ = lean_unbox(v___x_3024_);
v___x_3290__boxed_3028_ = lean_unbox(v___x_3025_);
v_res_3029_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5(v___x_3021_, v_total_3022_, v_snd_3023_, v___x_3289__boxed_3027_, v___x_3290__boxed_3028_, v_g_3026_);
lean_dec_ref(v_g_3026_);
lean_dec_ref(v_snd_3023_);
lean_dec(v_total_3022_);
lean_dec_ref(v___x_3021_);
v_r_3030_ = lean_box(v_res_3029_);
return v_r_3030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6(lean_object* v___x_3031_, lean_object* v___x_3032_, lean_object* v___y_3033_, uint64_t v_fst_3034_, lean_object* v___x_3035_, lean_object* v___x_3036_, lean_object* v_total_3037_, uint8_t v___x_3038_, lean_object* v_b_3039_){
_start:
{
lean_object* v___y_3041_; lean_object* v_fst_3050_; lean_object* v_snd_3051_; lean_object* v___x_3053_; uint8_t v_isShared_3054_; uint8_t v_isSharedCheck_3088_; 
v_fst_3050_ = lean_ctor_get(v_b_3039_, 0);
v_snd_3051_ = lean_ctor_get(v_b_3039_, 1);
v_isSharedCheck_3088_ = !lean_is_exclusive(v_b_3039_);
if (v_isSharedCheck_3088_ == 0)
{
v___x_3053_ = v_b_3039_;
v_isShared_3054_ = v_isSharedCheck_3088_;
goto v_resetjp_3052_;
}
else
{
lean_inc(v_snd_3051_);
lean_inc(v_fst_3050_);
lean_dec(v_b_3039_);
v___x_3053_ = lean_box(0);
v_isShared_3054_ = v_isSharedCheck_3088_;
goto v_resetjp_3052_;
}
v___jp_3040_:
{
lean_object* v_a_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3049_; 
v_a_3042_ = lean_ctor_get(v___y_3041_, 0);
v_isSharedCheck_3049_ = !lean_is_exclusive(v___y_3041_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_3044_ = v___y_3041_;
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_a_3042_);
lean_dec(v___y_3041_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3047_; 
if (v_isShared_3045_ == 0)
{
lean_ctor_set_tag(v___x_3044_, 0);
v___x_3047_ = v___x_3044_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_a_3042_);
v___x_3047_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
return v___x_3047_;
}
}
}
v_resetjp_3052_:
{
uint8_t v___x_3060_; 
v___x_3060_ = lean_nat_dec_lt(v_fst_3050_, v___x_3031_);
if (v___x_3060_ == 0)
{
lean_dec(v_total_3037_);
lean_dec_ref(v___x_3036_);
goto v___jp_3055_;
}
else
{
lean_object* v___x_3061_; lean_object* v_fst_3062_; lean_object* v_snd_3063_; uint64_t v___x_3064_; uint8_t v___x_3065_; 
v___x_3061_ = lean_array_get_borrowed(v___x_3032_, v___y_3033_, v_fst_3050_);
v_fst_3062_ = lean_ctor_get(v___x_3061_, 0);
v_snd_3063_ = lean_ctor_get(v___x_3061_, 1);
v___x_3064_ = lean_unbox_uint64(v_fst_3062_);
v___x_3065_ = lean_uint64_dec_eq(v___x_3064_, v_fst_3034_);
if (v___x_3065_ == 0)
{
lean_dec(v_total_3037_);
lean_dec_ref(v___x_3036_);
goto v___jp_3055_;
}
else
{
lean_object* v_snd_3066_; lean_object* v___y_3068_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___f_3073_; lean_object* v___x_3074_; 
lean_del_object(v___x_3053_);
v_snd_3066_ = lean_ctor_get(v_snd_3063_, 1);
v___x_3071_ = lean_box(v___x_3065_);
v___x_3072_ = lean_box(v___x_3038_);
lean_inc(v_snd_3066_);
lean_inc(v_total_3037_);
v___f_3073_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__5___boxed), 6, 5);
lean_closure_set(v___f_3073_, 0, v___x_3036_);
lean_closure_set(v___f_3073_, 1, v_total_3037_);
lean_closure_set(v___f_3073_, 2, v_snd_3066_);
lean_closure_set(v___f_3073_, 3, v___x_3071_);
lean_closure_set(v___f_3073_, 4, v___x_3072_);
v___x_3074_ = l_Array_findIdx_x3f_loop___redArg(v___f_3073_, v_snd_3051_, v_total_3037_);
if (lean_obj_tag(v___x_3074_) == 0)
{
lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; 
v___x_3075_ = lean_mk_empty_array_with_capacity(v___x_3035_);
lean_inc(v_snd_3063_);
v___x_3076_ = lean_array_push(v___x_3075_, v_snd_3063_);
v___x_3077_ = lean_array_push(v_snd_3051_, v___x_3076_);
v___x_3078_ = lean_box(0);
v___x_3079_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(v_fst_3050_, v___x_3035_, v___x_3078_, v___x_3077_);
lean_dec(v_fst_3050_);
v___y_3041_ = v___x_3079_;
goto v___jp_3040_;
}
else
{
lean_object* v_val_3080_; lean_object* v___x_3081_; uint8_t v___x_3082_; 
v_val_3080_ = lean_ctor_get(v___x_3074_, 0);
lean_inc(v_val_3080_);
lean_dec_ref_known(v___x_3074_, 1);
v___x_3081_ = lean_array_get_size(v_snd_3051_);
v___x_3082_ = lean_nat_dec_lt(v_val_3080_, v___x_3081_);
if (v___x_3082_ == 0)
{
lean_dec(v_val_3080_);
v___y_3068_ = v_snd_3051_;
goto v___jp_3067_;
}
else
{
lean_object* v_v_3083_; lean_object* v___x_3084_; lean_object* v_xs_x27_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; 
v_v_3083_ = lean_array_fget(v_snd_3051_, v_val_3080_);
v___x_3084_ = lean_box(0);
v_xs_x27_3085_ = lean_array_fset(v_snd_3051_, v_val_3080_, v___x_3084_);
lean_inc(v_snd_3063_);
v___x_3086_ = lean_array_push(v_v_3083_, v_snd_3063_);
v___x_3087_ = lean_array_fset(v_xs_x27_3085_, v_val_3080_, v___x_3086_);
lean_dec(v_val_3080_);
v___y_3068_ = v___x_3087_;
goto v___jp_3067_;
}
}
v___jp_3067_:
{
lean_object* v___x_3069_; lean_object* v___x_3070_; 
v___x_3069_ = lean_box(0);
v___x_3070_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__4(v_fst_3050_, v___x_3035_, v___x_3069_, v___y_3068_);
lean_dec(v_fst_3050_);
v___y_3041_ = v___x_3070_;
goto v___jp_3040_;
}
}
}
v___jp_3055_:
{
lean_object* v___x_3057_; 
if (v_isShared_3054_ == 0)
{
v___x_3057_ = v___x_3053_;
goto v_reusejp_3056_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v_fst_3050_);
lean_ctor_set(v_reuseFailAlloc_3059_, 1, v_snd_3051_);
v___x_3057_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3056_;
}
v_reusejp_3056_:
{
lean_object* v___x_3058_; 
v___x_3058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3058_, 0, v___x_3057_);
return v___x_3058_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6___boxed(lean_object* v___x_3089_, lean_object* v___x_3090_, lean_object* v___y_3091_, lean_object* v_fst_3092_, lean_object* v___x_3093_, lean_object* v___x_3094_, lean_object* v_total_3095_, lean_object* v___x_3096_, lean_object* v_b_3097_){
_start:
{
uint64_t v_fst_3318__boxed_3098_; uint8_t v___x_3321__boxed_3099_; lean_object* v_res_3100_; 
v_fst_3318__boxed_3098_ = lean_unbox_uint64(v_fst_3092_);
lean_dec_ref(v_fst_3092_);
v___x_3321__boxed_3099_ = lean_unbox(v___x_3096_);
v_res_3100_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6(v___x_3089_, v___x_3090_, v___y_3091_, v_fst_3318__boxed_3098_, v___x_3093_, v___x_3094_, v_total_3095_, v___x_3321__boxed_3099_, v_b_3097_);
lean_dec(v___x_3093_);
lean_dec_ref(v___y_3091_);
lean_dec_ref(v___x_3090_);
lean_dec(v___x_3089_);
return v_res_3100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7(lean_object* v___y_3101_, lean_object* v___x_3102_, lean_object* v___x_3103_, lean_object* v_single_3104_, lean_object* v___x_3105_, lean_object* v_total_3106_, lean_object* v___x_3107_, lean_object* v___f_3108_, size_t v___x_3109_, lean_object* v_b_3110_){
_start:
{
lean_object* v_fst_3111_; lean_object* v_snd_3112_; lean_object* v___x_3114_; uint8_t v_isShared_3115_; uint8_t v_isSharedCheck_3170_; 
v_fst_3111_ = lean_ctor_get(v_b_3110_, 0);
v_snd_3112_ = lean_ctor_get(v_b_3110_, 1);
v_isSharedCheck_3170_ = !lean_is_exclusive(v_b_3110_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3114_ = v_b_3110_;
v_isShared_3115_ = v_isSharedCheck_3170_;
goto v_resetjp_3113_;
}
else
{
lean_inc(v_snd_3112_);
lean_inc(v_fst_3111_);
lean_dec(v_b_3110_);
v___x_3114_ = lean_box(0);
v_isShared_3115_ = v_isSharedCheck_3170_;
goto v_resetjp_3113_;
}
v_resetjp_3113_:
{
lean_object* v___x_3116_; uint8_t v___x_3117_; 
v___x_3116_ = lean_array_get_size(v___y_3101_);
v___x_3117_ = lean_nat_dec_lt(v_snd_3112_, v___x_3116_);
if (v___x_3117_ == 0)
{
lean_object* v___x_3119_; 
lean_dec_ref(v___f_3108_);
lean_dec_ref(v___x_3107_);
lean_dec(v_total_3106_);
lean_dec_ref(v___x_3105_);
lean_dec(v_single_3104_);
lean_dec(v___x_3103_);
lean_dec_ref(v___x_3102_);
lean_dec_ref(v___y_3101_);
if (v_isShared_3115_ == 0)
{
v___x_3119_ = v___x_3114_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_fst_3111_);
lean_ctor_set(v_reuseFailAlloc_3121_, 1, v_snd_3112_);
v___x_3119_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
lean_object* v___x_3120_; 
v___x_3120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3120_, 0, v___x_3119_);
return v___x_3120_;
}
}
else
{
lean_object* v___x_3122_; lean_object* v_snd_3123_; lean_object* v_fst_3124_; lean_object* v___x_3126_; uint8_t v_isShared_3127_; uint8_t v_isSharedCheck_3169_; 
lean_del_object(v___x_3114_);
v___x_3122_ = lean_array_get(v___x_3102_, v___y_3101_, v_snd_3112_);
v_snd_3123_ = lean_ctor_get(v___x_3122_, 1);
v_fst_3124_ = lean_ctor_get(v___x_3122_, 0);
v_isSharedCheck_3169_ = !lean_is_exclusive(v___x_3122_);
if (v_isSharedCheck_3169_ == 0)
{
v___x_3126_ = v___x_3122_;
v_isShared_3127_ = v_isSharedCheck_3169_;
goto v_resetjp_3125_;
}
else
{
lean_inc(v_snd_3123_);
lean_inc(v_fst_3124_);
lean_dec(v___x_3122_);
v___x_3126_ = lean_box(0);
v_isShared_3127_ = v_isSharedCheck_3169_;
goto v_resetjp_3125_;
}
v_resetjp_3125_:
{
lean_object* v_fst_3128_; lean_object* v_snd_3129_; lean_object* v___x_3130_; uint8_t v___x_3137_; 
v_fst_3128_ = lean_ctor_get(v_snd_3123_, 0);
v_snd_3129_ = lean_ctor_get(v_snd_3123_, 1);
v___x_3130_ = lean_nat_add(v_snd_3112_, v___x_3103_);
lean_dec(v_snd_3112_);
v___x_3137_ = lean_nat_dec_eq(v___x_3130_, v___x_3116_);
if (v___x_3137_ == 0)
{
lean_object* v___x_3138_; lean_object* v_fst_3139_; lean_object* v___x_3141_; uint8_t v_isShared_3142_; uint8_t v_isSharedCheck_3167_; 
v___x_3138_ = lean_array_get(v___x_3102_, v___y_3101_, v___x_3130_);
v_fst_3139_ = lean_ctor_get(v___x_3138_, 0);
v_isSharedCheck_3167_ = !lean_is_exclusive(v___x_3138_);
if (v_isSharedCheck_3167_ == 0)
{
lean_object* v_unused_3168_; 
v_unused_3168_ = lean_ctor_get(v___x_3138_, 1);
lean_dec(v_unused_3168_);
v___x_3141_ = v___x_3138_;
v_isShared_3142_ = v_isSharedCheck_3167_;
goto v_resetjp_3140_;
}
else
{
lean_inc(v_fst_3139_);
lean_dec(v___x_3138_);
v___x_3141_ = lean_box(0);
v_isShared_3142_ = v_isSharedCheck_3167_;
goto v_resetjp_3140_;
}
v_resetjp_3140_:
{
uint64_t v___x_3143_; uint64_t v___x_3144_; uint8_t v___x_3145_; 
v___x_3143_ = lean_unbox_uint64(v_fst_3139_);
lean_dec(v_fst_3139_);
v___x_3144_ = lean_unbox_uint64(v_fst_3124_);
v___x_3145_ = lean_uint64_dec_eq(v___x_3143_, v___x_3144_);
if (v___x_3145_ == 0)
{
lean_inc(v_snd_3129_);
lean_inc(v_fst_3128_);
lean_del_object(v___x_3141_);
lean_dec(v_fst_3124_);
lean_dec(v_snd_3123_);
lean_dec_ref(v___f_3108_);
lean_dec_ref(v___x_3107_);
lean_dec(v_total_3106_);
lean_dec_ref(v___x_3105_);
lean_dec(v___x_3103_);
lean_dec_ref(v___x_3102_);
lean_dec_ref(v___y_3101_);
goto v___jp_3131_;
}
else
{
lean_object* v___x_3146_; lean_object* v___f_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3152_; 
lean_del_object(v___x_3126_);
lean_dec(v_single_3104_);
v___x_3146_ = lean_box(v___x_3137_);
lean_inc(v___x_3103_);
v___f_3147_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__6___boxed), 9, 8);
lean_closure_set(v___f_3147_, 0, v___x_3116_);
lean_closure_set(v___f_3147_, 1, v___x_3102_);
lean_closure_set(v___f_3147_, 2, v___y_3101_);
lean_closure_set(v___f_3147_, 3, v_fst_3124_);
lean_closure_set(v___f_3147_, 4, v___x_3103_);
lean_closure_set(v___f_3147_, 5, v___x_3105_);
lean_closure_set(v___f_3147_, 6, v_total_3106_);
lean_closure_set(v___f_3147_, 7, v___x_3146_);
v___x_3148_ = lean_mk_empty_array_with_capacity(v___x_3103_);
lean_dec(v___x_3103_);
lean_inc_ref(v___x_3148_);
v___x_3149_ = lean_array_push(v___x_3148_, v_snd_3123_);
v___x_3150_ = lean_array_push(v___x_3148_, v___x_3149_);
if (v_isShared_3142_ == 0)
{
lean_ctor_set(v___x_3141_, 1, v___x_3150_);
lean_ctor_set(v___x_3141_, 0, v___x_3130_);
v___x_3152_ = v___x_3141_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3166_; 
v_reuseFailAlloc_3166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3166_, 0, v___x_3130_);
lean_ctor_set(v_reuseFailAlloc_3166_, 1, v___x_3150_);
v___x_3152_ = v_reuseFailAlloc_3166_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
lean_object* v___x_3153_; lean_object* v_fst_3154_; lean_object* v_snd_3155_; lean_object* v___x_3157_; uint8_t v_isShared_3158_; uint8_t v_isSharedCheck_3165_; 
lean_inc_ref(v___x_3107_);
v___x_3153_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_3107_, v___f_3147_, v___x_3152_);
v_fst_3154_ = lean_ctor_get(v___x_3153_, 0);
v_snd_3155_ = lean_ctor_get(v___x_3153_, 1);
v_isSharedCheck_3165_ = !lean_is_exclusive(v___x_3153_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3157_ = v___x_3153_;
v_isShared_3158_ = v_isSharedCheck_3165_;
goto v_resetjp_3156_;
}
else
{
lean_inc(v_snd_3155_);
lean_inc(v_fst_3154_);
lean_dec(v___x_3153_);
v___x_3157_ = lean_box(0);
v_isShared_3158_ = v_isSharedCheck_3165_;
goto v_resetjp_3156_;
}
v_resetjp_3156_:
{
size_t v_sz_3159_; lean_object* v___x_3160_; lean_object* v___x_3162_; 
v_sz_3159_ = lean_array_size(v_snd_3155_);
v___x_3160_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3107_, v_snd_3155_, v___f_3108_, v_sz_3159_, v___x_3109_, v_fst_3111_);
if (v_isShared_3158_ == 0)
{
lean_ctor_set(v___x_3157_, 1, v_fst_3154_);
lean_ctor_set(v___x_3157_, 0, v___x_3160_);
v___x_3162_ = v___x_3157_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v___x_3160_);
lean_ctor_set(v_reuseFailAlloc_3164_, 1, v_fst_3154_);
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
else
{
lean_inc(v_snd_3129_);
lean_inc(v_fst_3128_);
lean_dec(v_fst_3124_);
lean_dec(v_snd_3123_);
lean_dec_ref(v___f_3108_);
lean_dec_ref(v___x_3107_);
lean_dec(v_total_3106_);
lean_dec_ref(v___x_3105_);
lean_dec(v___x_3103_);
lean_dec_ref(v___x_3102_);
lean_dec_ref(v___y_3101_);
goto v___jp_3131_;
}
v___jp_3131_:
{
lean_object* v___x_3132_; lean_object* v___x_3134_; 
v___x_3132_ = lean_apply_3(v_single_3104_, v_fst_3111_, v_fst_3128_, v_snd_3129_);
if (v_isShared_3127_ == 0)
{
lean_ctor_set(v___x_3126_, 1, v___x_3130_);
lean_ctor_set(v___x_3126_, 0, v___x_3132_);
v___x_3134_ = v___x_3126_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v___x_3132_);
lean_ctor_set(v_reuseFailAlloc_3136_, 1, v___x_3130_);
v___x_3134_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
lean_object* v___x_3135_; 
v___x_3135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3134_);
return v___x_3135_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7___boxed(lean_object* v___y_3171_, lean_object* v___x_3172_, lean_object* v___x_3173_, lean_object* v_single_3174_, lean_object* v___x_3175_, lean_object* v_total_3176_, lean_object* v___x_3177_, lean_object* v___f_3178_, lean_object* v___x_3179_, lean_object* v_b_3180_){
_start:
{
size_t v___x_3430__boxed_3181_; lean_object* v_res_3182_; 
v___x_3430__boxed_3181_ = lean_unbox_usize(v___x_3179_);
lean_dec(v___x_3179_);
v_res_3182_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7(v___y_3171_, v___x_3172_, v___x_3173_, v_single_3174_, v___x_3175_, v_total_3176_, v___x_3177_, v___f_3178_, v___x_3430__boxed_3181_, v_b_3180_);
return v_res_3182_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(lean_object* v_x_3183_, lean_object* v_x_3184_){
_start:
{
lean_object* v_snd_3185_; lean_object* v_snd_3186_; lean_object* v_fst_3187_; lean_object* v_fst_3188_; lean_object* v_fst_3189_; lean_object* v_fst_3190_; uint64_t v___x_3191_; uint64_t v___x_3192_; uint8_t v___x_3193_; 
v_snd_3185_ = lean_ctor_get(v_x_3183_, 1);
v_snd_3186_ = lean_ctor_get(v_x_3184_, 1);
v_fst_3187_ = lean_ctor_get(v_x_3183_, 0);
v_fst_3188_ = lean_ctor_get(v_snd_3185_, 0);
v_fst_3189_ = lean_ctor_get(v_x_3184_, 0);
v_fst_3190_ = lean_ctor_get(v_snd_3186_, 0);
v___x_3191_ = lean_unbox_uint64(v_fst_3187_);
v___x_3192_ = lean_unbox_uint64(v_fst_3189_);
v___x_3193_ = lean_uint64_dec_lt(v___x_3191_, v___x_3192_);
if (v___x_3193_ == 0)
{
uint64_t v___x_3194_; uint64_t v___x_3195_; uint8_t v___x_3196_; 
v___x_3194_ = lean_unbox_uint64(v_fst_3187_);
v___x_3195_ = lean_unbox_uint64(v_fst_3189_);
v___x_3196_ = lean_uint64_dec_eq(v___x_3194_, v___x_3195_);
if (v___x_3196_ == 0)
{
return v___x_3196_;
}
else
{
uint8_t v___x_3197_; 
v___x_3197_ = lean_nat_dec_lt(v_fst_3188_, v_fst_3190_);
return v___x_3197_;
}
}
else
{
return v___x_3193_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8___boxed(lean_object* v_x_3198_, lean_object* v_x_3199_){
_start:
{
uint8_t v_res_3200_; lean_object* v_r_3201_; 
v_res_3200_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(v_x_3198_, v_x_3199_);
lean_dec_ref(v_x_3199_);
lean_dec_ref(v_x_3198_);
v_r_3201_ = lean_box(v_res_3200_);
return v_r_3201_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2(void){
_start:
{
lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; 
v___x_3205_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
v___x_3206_ = lean_unsigned_to_nat(0u);
v___x_3207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3207_, 0, v___x_3206_);
lean_ctor_set(v___x_3207_, 1, v___x_3205_);
return v___x_3207_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3(void){
_start:
{
lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; 
v___x_3210_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3211_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3___boxed__const__1));
v___x_3212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3212_, 0, v___x_3211_);
lean_ctor_set(v___x_3212_, 1, v___x_3210_);
return v___x_3212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg(lean_object* v_cands_3216_, lean_object* v_init_3217_, lean_object* v_single_3218_, lean_object* v_multi_3219_){
_start:
{
lean_object* v___f_3220_; lean_object* v___x_3221_; lean_object* v___f_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; size_t v_sz_3226_; size_t v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___f_3232_; lean_object* v___y_3234_; lean_object* v___x_3240_; uint8_t v___x_3241_; 
v___f_3220_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0));
v___x_3221_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__9));
v___f_3222_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1));
v___x_3223_ = lean_unsigned_to_nat(0u);
v___x_3224_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3225_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v_sz_3226_ = lean_array_size(v_cands_3216_);
v___x_3227_ = ((size_t)0ULL);
lean_inc_ref(v_cands_3216_);
v___x_3228_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3221_, v_cands_3216_, v___f_3220_, v_sz_3226_, v___x_3227_, v___x_3223_);
v___x_3229_ = lean_mk_empty_array_with_capacity(v___x_3228_);
lean_dec(v___x_3228_);
v___x_3230_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3221_, v_cands_3216_, v___f_3222_, v_sz_3226_, v___x_3227_, v___x_3229_);
v___x_3231_ = lean_unsigned_to_nat(1u);
lean_inc(v_single_3218_);
v___f_3232_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed), 8, 5);
lean_closure_set(v___f_3232_, 0, v___x_3231_);
lean_closure_set(v___f_3232_, 1, v_multi_3219_);
lean_closure_set(v___f_3232_, 2, v___x_3224_);
lean_closure_set(v___f_3232_, 3, v___x_3223_);
lean_closure_set(v___f_3232_, 4, v_single_3218_);
v___x_3240_ = lean_array_get_size(v___x_3230_);
v___x_3241_ = lean_nat_dec_eq(v___x_3240_, v___x_3223_);
if (v___x_3241_ == 0)
{
lean_object* v___f_3242_; lean_object* v___y_3244_; lean_object* v___y_3245_; lean_object* v___x_3247_; lean_object* v___y_3249_; uint8_t v___x_3251_; 
v___f_3242_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4));
v___x_3247_ = lean_nat_sub(v___x_3240_, v___x_3231_);
v___x_3251_ = lean_nat_dec_le(v___x_3223_, v___x_3247_);
if (v___x_3251_ == 0)
{
lean_inc(v___x_3247_);
v___y_3249_ = v___x_3247_;
goto v___jp_3248_;
}
else
{
v___y_3249_ = v___x_3223_;
goto v___jp_3248_;
}
v___jp_3243_:
{
lean_object* v___x_3246_; 
v___x_3246_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_3242_, v___x_3240_, v___x_3230_, v___y_3244_, v___y_3245_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_3245_);
v___y_3234_ = v___x_3246_;
goto v___jp_3233_;
}
v___jp_3248_:
{
uint8_t v___x_3250_; 
v___x_3250_ = lean_nat_dec_le(v___y_3249_, v___x_3247_);
if (v___x_3250_ == 0)
{
lean_dec(v___x_3247_);
lean_inc(v___y_3249_);
v___y_3244_ = v___y_3249_;
v___y_3245_ = v___y_3249_;
goto v___jp_3243_;
}
else
{
v___y_3244_ = v___y_3249_;
v___y_3245_ = v___x_3247_;
goto v___jp_3243_;
}
}
}
else
{
v___y_3234_ = v___x_3230_;
goto v___jp_3233_;
}
v___jp_3233_:
{
lean_object* v___x_3235_; lean_object* v___f_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v_fst_3239_; 
v___x_3235_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___boxed__const__1));
v___f_3236_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7___boxed), 10, 9);
lean_closure_set(v___f_3236_, 0, v___y_3234_);
lean_closure_set(v___f_3236_, 1, v___x_3225_);
lean_closure_set(v___f_3236_, 2, v___x_3231_);
lean_closure_set(v___f_3236_, 3, v_single_3218_);
lean_closure_set(v___f_3236_, 4, v___x_3224_);
lean_closure_set(v___f_3236_, 5, v___x_3223_);
lean_closure_set(v___f_3236_, 6, v___x_3221_);
lean_closure_set(v___f_3236_, 7, v___f_3232_);
lean_closure_set(v___f_3236_, 8, v___x_3235_);
v___x_3237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3237_, 0, v_init_3217_);
lean_ctor_set(v___x_3237_, 1, v___x_3223_);
v___x_3238_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_3221_, v___f_3236_, v___x_3237_);
v_fst_3239_ = lean_ctor_get(v___x_3238_, 0);
lean_inc(v_fst_3239_);
lean_dec(v___x_3238_);
return v_fst_3239_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups(lean_object* v_00_u03b1_3252_, lean_object* v_00_u03c3_3253_, lean_object* v_cands_3254_, lean_object* v_init_3255_, lean_object* v_single_3256_, lean_object* v_multi_3257_){
_start:
{
lean_object* v___f_3258_; lean_object* v___x_3259_; lean_object* v___f_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; size_t v_sz_3264_; size_t v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___f_3270_; lean_object* v___y_3272_; lean_object* v___x_3278_; uint8_t v___x_3279_; 
v___f_3258_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0));
v___x_3259_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_buildChildIndex___redArg___closed__9));
v___f_3260_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1));
v___x_3261_ = lean_unsigned_to_nat(0u);
v___x_3262_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3263_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v_sz_3264_ = lean_array_size(v_cands_3254_);
v___x_3265_ = ((size_t)0ULL);
lean_inc_ref(v_cands_3254_);
v___x_3266_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3259_, v_cands_3254_, v___f_3258_, v_sz_3264_, v___x_3265_, v___x_3261_);
v___x_3267_ = lean_mk_empty_array_with_capacity(v___x_3266_);
lean_dec(v___x_3266_);
v___x_3268_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_3259_, v_cands_3254_, v___f_3260_, v_sz_3264_, v___x_3265_, v___x_3267_);
v___x_3269_ = lean_unsigned_to_nat(1u);
lean_inc(v_single_3256_);
v___f_3270_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed), 8, 5);
lean_closure_set(v___f_3270_, 0, v___x_3269_);
lean_closure_set(v___f_3270_, 1, v_multi_3257_);
lean_closure_set(v___f_3270_, 2, v___x_3262_);
lean_closure_set(v___f_3270_, 3, v___x_3261_);
lean_closure_set(v___f_3270_, 4, v_single_3256_);
v___x_3278_ = lean_array_get_size(v___x_3268_);
v___x_3279_ = lean_nat_dec_eq(v___x_3278_, v___x_3261_);
if (v___x_3279_ == 0)
{
lean_object* v___f_3280_; lean_object* v___y_3282_; lean_object* v___y_3283_; lean_object* v___x_3285_; lean_object* v___y_3287_; uint8_t v___x_3289_; 
v___f_3280_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4));
v___x_3285_ = lean_nat_sub(v___x_3278_, v___x_3269_);
v___x_3289_ = lean_nat_dec_le(v___x_3261_, v___x_3285_);
if (v___x_3289_ == 0)
{
lean_inc(v___x_3285_);
v___y_3287_ = v___x_3285_;
goto v___jp_3286_;
}
else
{
v___y_3287_ = v___x_3261_;
goto v___jp_3286_;
}
v___jp_3281_:
{
lean_object* v___x_3284_; 
v___x_3284_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_3280_, v___x_3278_, v___x_3268_, v___y_3282_, v___y_3283_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_3283_);
v___y_3272_ = v___x_3284_;
goto v___jp_3271_;
}
v___jp_3286_:
{
uint8_t v___x_3288_; 
v___x_3288_ = lean_nat_dec_le(v___y_3287_, v___x_3285_);
if (v___x_3288_ == 0)
{
lean_dec(v___x_3285_);
lean_inc(v___y_3287_);
v___y_3282_ = v___y_3287_;
v___y_3283_ = v___y_3287_;
goto v___jp_3281_;
}
else
{
v___y_3282_ = v___y_3287_;
v___y_3283_ = v___x_3285_;
goto v___jp_3281_;
}
}
}
else
{
v___y_3272_ = v___x_3268_;
goto v___jp_3271_;
}
v___jp_3271_:
{
lean_object* v___x_3273_; lean_object* v___f_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v_fst_3277_; 
v___x_3273_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___boxed__const__1));
v___f_3274_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__7___boxed), 10, 9);
lean_closure_set(v___f_3274_, 0, v___y_3272_);
lean_closure_set(v___f_3274_, 1, v___x_3263_);
lean_closure_set(v___f_3274_, 2, v___x_3269_);
lean_closure_set(v___f_3274_, 3, v_single_3256_);
lean_closure_set(v___f_3274_, 4, v___x_3262_);
lean_closure_set(v___f_3274_, 5, v___x_3261_);
lean_closure_set(v___f_3274_, 6, v___x_3259_);
lean_closure_set(v___f_3274_, 7, v___f_3270_);
lean_closure_set(v___f_3274_, 8, v___x_3273_);
v___x_3275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3275_, 0, v_init_3255_);
lean_ctor_set(v___x_3275_, 1, v___x_3261_);
v___x_3276_ = l___private_Init_While_0__repeatM_erased___redArg(v___x_3259_, v___f_3274_, v___x_3275_);
v_fst_3277_ = lean_ctor_get(v___x_3276_, 0);
lean_inc(v_fst_3277_);
lean_dec(v___x_3276_);
return v_fst_3277_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(lean_object* v_as_3290_, size_t v_i_3291_, size_t v_stop_3292_, lean_object* v_b_3293_){
_start:
{
lean_object* v___y_3295_; uint8_t v___x_3299_; 
v___x_3299_ = lean_usize_dec_eq(v_i_3291_, v_stop_3292_);
if (v___x_3299_ == 0)
{
lean_object* v___x_3300_; lean_object* v_snd_3301_; lean_object* v_val_x3f_3302_; 
v___x_3300_ = lean_array_uget(v_as_3290_, v_i_3291_);
v_snd_3301_ = lean_ctor_get(v___x_3300_, 1);
v_val_x3f_3302_ = lean_ctor_get(v_snd_3301_, 1);
lean_inc(v_val_x3f_3302_);
if (lean_obj_tag(v_val_x3f_3302_) == 0)
{
lean_dec(v___x_3300_);
v___y_3295_ = v_b_3293_;
goto v___jp_3294_;
}
else
{
lean_object* v_fst_3303_; lean_object* v___x_3305_; uint8_t v_isShared_3306_; uint8_t v_isSharedCheck_3312_; 
v_fst_3303_ = lean_ctor_get(v___x_3300_, 0);
v_isSharedCheck_3312_ = !lean_is_exclusive(v___x_3300_);
if (v_isSharedCheck_3312_ == 0)
{
lean_object* v_unused_3313_; 
v_unused_3313_ = lean_ctor_get(v___x_3300_, 1);
lean_dec(v_unused_3313_);
v___x_3305_ = v___x_3300_;
v_isShared_3306_ = v_isSharedCheck_3312_;
goto v_resetjp_3304_;
}
else
{
lean_inc(v_fst_3303_);
lean_dec(v___x_3300_);
v___x_3305_ = lean_box(0);
v_isShared_3306_ = v_isSharedCheck_3312_;
goto v_resetjp_3304_;
}
v_resetjp_3304_:
{
lean_object* v_val_3307_; lean_object* v___x_3309_; 
v_val_3307_ = lean_ctor_get(v_val_x3f_3302_, 0);
lean_inc(v_val_3307_);
lean_dec_ref_known(v_val_x3f_3302_, 1);
if (v_isShared_3306_ == 0)
{
lean_ctor_set(v___x_3305_, 1, v_fst_3303_);
lean_ctor_set(v___x_3305_, 0, v_val_3307_);
v___x_3309_ = v___x_3305_;
goto v_reusejp_3308_;
}
else
{
lean_object* v_reuseFailAlloc_3311_; 
v_reuseFailAlloc_3311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3311_, 0, v_val_3307_);
lean_ctor_set(v_reuseFailAlloc_3311_, 1, v_fst_3303_);
v___x_3309_ = v_reuseFailAlloc_3311_;
goto v_reusejp_3308_;
}
v_reusejp_3308_:
{
lean_object* v___x_3310_; 
v___x_3310_ = lean_array_push(v_b_3293_, v___x_3309_);
v___y_3295_ = v___x_3310_;
goto v___jp_3294_;
}
}
}
}
else
{
return v_b_3293_;
}
v___jp_3294_:
{
size_t v___x_3296_; size_t v___x_3297_; 
v___x_3296_ = ((size_t)1ULL);
v___x_3297_ = lean_usize_add(v_i_3291_, v___x_3296_);
v_i_3291_ = v___x_3297_;
v_b_3293_ = v___y_3295_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg___boxed(lean_object* v_as_3314_, lean_object* v_i_3315_, lean_object* v_stop_3316_, lean_object* v_b_3317_){
_start:
{
size_t v_i_boxed_3318_; size_t v_stop_boxed_3319_; lean_object* v_res_3320_; 
v_i_boxed_3318_ = lean_unbox_usize(v_i_3315_);
lean_dec(v_i_3315_);
v_stop_boxed_3319_ = lean_unbox_usize(v_stop_3316_);
lean_dec(v_stop_3316_);
v_res_3320_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(v_as_3314_, v_i_boxed_3318_, v_stop_boxed_3319_, v_b_3317_);
lean_dec_ref(v_as_3314_);
return v_res_3320_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(lean_object* v_as_3323_, lean_object* v_start_3324_, lean_object* v_stop_3325_){
_start:
{
lean_object* v___x_3326_; uint8_t v___x_3327_; 
v___x_3326_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg___closed__0));
v___x_3327_ = lean_nat_dec_lt(v_start_3324_, v_stop_3325_);
if (v___x_3327_ == 0)
{
return v___x_3326_;
}
else
{
lean_object* v___x_3328_; uint8_t v___x_3329_; 
v___x_3328_ = lean_array_get_size(v_as_3323_);
v___x_3329_ = lean_nat_dec_le(v_stop_3325_, v___x_3328_);
if (v___x_3329_ == 0)
{
uint8_t v___x_3330_; 
v___x_3330_ = lean_nat_dec_lt(v_start_3324_, v___x_3328_);
if (v___x_3330_ == 0)
{
return v___x_3326_;
}
else
{
size_t v___x_3331_; size_t v___x_3332_; lean_object* v___x_3333_; 
v___x_3331_ = lean_usize_of_nat(v_start_3324_);
v___x_3332_ = lean_usize_of_nat(v___x_3328_);
v___x_3333_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(v_as_3323_, v___x_3331_, v___x_3332_, v___x_3326_);
return v___x_3333_;
}
}
else
{
size_t v___x_3334_; size_t v___x_3335_; lean_object* v___x_3336_; 
v___x_3334_ = lean_usize_of_nat(v_start_3324_);
v___x_3335_ = lean_usize_of_nat(v_stop_3325_);
v___x_3336_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(v_as_3323_, v___x_3334_, v___x_3335_, v___x_3326_);
return v___x_3336_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg___boxed(lean_object* v_as_3337_, lean_object* v_start_3338_, lean_object* v_stop_3339_){
_start:
{
lean_object* v_res_3340_; 
v_res_3340_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_as_3337_, v_start_3338_, v_stop_3339_);
lean_dec(v_stop_3339_);
lean_dec(v_start_3338_);
lean_dec_ref(v_as_3337_);
return v_res_3340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(lean_object* v_fst_3341_, lean_object* v_as_3342_, size_t v_sz_3343_, size_t v_i_3344_, lean_object* v_b_3345_){
_start:
{
uint8_t v___x_3346_; 
v___x_3346_ = lean_usize_dec_lt(v_i_3344_, v_sz_3343_);
if (v___x_3346_ == 0)
{
lean_dec(v_fst_3341_);
return v_b_3345_;
}
else
{
lean_object* v_a_3347_; uint64_t v___y_3349_; lean_object* v_key_3357_; 
v_a_3347_ = lean_array_uget_borrowed(v_as_3342_, v_i_3344_);
v_key_3357_ = lean_ctor_get(v_a_3347_, 0);
if (lean_obj_tag(v_key_3357_) == 0)
{
uint64_t v___x_3358_; 
v___x_3358_ = 1723ULL;
v___y_3349_ = v___x_3358_;
goto v___jp_3348_;
}
else
{
uint64_t v_hash_3359_; 
v_hash_3359_ = lean_ctor_get_uint64(v_key_3357_, sizeof(void*)*2);
v___y_3349_ = v_hash_3359_;
goto v___jp_3348_;
}
v___jp_3348_:
{
lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; size_t v___x_3354_; size_t v___x_3355_; 
lean_inc(v_a_3347_);
lean_inc(v_fst_3341_);
v___x_3350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3350_, 0, v_fst_3341_);
lean_ctor_set(v___x_3350_, 1, v_a_3347_);
v___x_3351_ = lean_box_uint64(v___y_3349_);
v___x_3352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3351_);
lean_ctor_set(v___x_3352_, 1, v___x_3350_);
v___x_3353_ = lean_array_push(v_b_3345_, v___x_3352_);
v___x_3354_ = ((size_t)1ULL);
v___x_3355_ = lean_usize_add(v_i_3344_, v___x_3354_);
v_i_3344_ = v___x_3355_;
v_b_3345_ = v___x_3353_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg___boxed(lean_object* v_fst_3360_, lean_object* v_as_3361_, lean_object* v_sz_3362_, lean_object* v_i_3363_, lean_object* v_b_3364_){
_start:
{
size_t v_sz_boxed_3365_; size_t v_i_boxed_3366_; lean_object* v_res_3367_; 
v_sz_boxed_3365_ = lean_unbox_usize(v_sz_3362_);
lean_dec(v_sz_3362_);
v_i_boxed_3366_ = lean_unbox_usize(v_i_3363_);
lean_dec(v_i_3363_);
v_res_3367_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_fst_3360_, v_as_3361_, v_sz_boxed_3365_, v_i_boxed_3366_, v_b_3364_);
lean_dec_ref(v_as_3361_);
return v_res_3367_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(lean_object* v_as_3368_, size_t v_sz_3369_, size_t v_i_3370_, lean_object* v_b_3371_){
_start:
{
uint8_t v___x_3372_; 
v___x_3372_ = lean_usize_dec_lt(v_i_3370_, v_sz_3369_);
if (v___x_3372_ == 0)
{
return v_b_3371_;
}
else
{
lean_object* v_a_3373_; lean_object* v_snd_3374_; lean_object* v_fst_3375_; lean_object* v_children_3376_; size_t v_sz_3377_; size_t v___x_3378_; lean_object* v___x_3379_; size_t v___x_3380_; size_t v___x_3381_; 
v_a_3373_ = lean_array_uget_borrowed(v_as_3368_, v_i_3370_);
v_snd_3374_ = lean_ctor_get(v_a_3373_, 1);
v_fst_3375_ = lean_ctor_get(v_a_3373_, 0);
v_children_3376_ = lean_ctor_get(v_snd_3374_, 2);
v_sz_3377_ = lean_array_size(v_children_3376_);
v___x_3378_ = ((size_t)0ULL);
lean_inc(v_fst_3375_);
v___x_3379_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_fst_3375_, v_children_3376_, v_sz_3377_, v___x_3378_, v_b_3371_);
v___x_3380_ = ((size_t)1ULL);
v___x_3381_ = lean_usize_add(v_i_3370_, v___x_3380_);
v_i_3370_ = v___x_3381_;
v_b_3371_ = v___x_3379_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg___boxed(lean_object* v_as_3383_, lean_object* v_sz_3384_, lean_object* v_i_3385_, lean_object* v_b_3386_){
_start:
{
size_t v_sz_boxed_3387_; size_t v_i_boxed_3388_; lean_object* v_res_3389_; 
v_sz_boxed_3387_ = lean_unbox_usize(v_sz_3384_);
lean_dec(v_sz_3384_);
v_i_boxed_3388_ = lean_unbox_usize(v_i_3385_);
lean_dec(v_i_3385_);
v_res_3389_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_as_3383_, v_sz_boxed_3387_, v_i_boxed_3388_, v_b_3386_);
lean_dec_ref(v_as_3383_);
return v_res_3389_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(lean_object* v_covered_3390_, lean_object* v_as_3391_, size_t v_sz_3392_, size_t v_i_3393_, uint64_t v_b_3394_){
_start:
{
uint8_t v___x_3395_; 
v___x_3395_ = lean_usize_dec_lt(v_i_3393_, v_sz_3392_);
if (v___x_3395_ == 0)
{
return v_b_3394_;
}
else
{
lean_object* v_a_3396_; lean_object* v_fst_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; uint64_t v___x_3400_; uint64_t v___x_3401_; size_t v___x_3402_; size_t v___x_3403_; 
v_a_3396_ = lean_array_uget_borrowed(v_as_3391_, v_i_3393_);
v_fst_3397_ = lean_ctor_get(v_a_3396_, 0);
v___x_3398_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3___boxed__const__1));
v___x_3399_ = lean_array_get_borrowed(v___x_3398_, v_covered_3390_, v_fst_3397_);
v___x_3400_ = lean_unbox_uint64(v___x_3399_);
v___x_3401_ = lean_uint64_land(v_b_3394_, v___x_3400_);
v___x_3402_ = ((size_t)1ULL);
v___x_3403_ = lean_usize_add(v_i_3393_, v___x_3402_);
v_i_3393_ = v___x_3403_;
v_b_3394_ = v___x_3401_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg___boxed(lean_object* v_covered_3405_, lean_object* v_as_3406_, lean_object* v_sz_3407_, lean_object* v_i_3408_, lean_object* v_b_3409_){
_start:
{
size_t v_sz_boxed_3410_; size_t v_i_boxed_3411_; uint64_t v_b_boxed_3412_; uint64_t v_res_3413_; lean_object* v_r_3414_; 
v_sz_boxed_3410_ = lean_unbox_usize(v_sz_3407_);
lean_dec(v_sz_3407_);
v_i_boxed_3411_ = lean_unbox_usize(v_i_3408_);
lean_dec(v_i_3408_);
v_b_boxed_3412_ = lean_unbox_uint64(v_b_3409_);
lean_dec_ref(v_b_3409_);
v_res_3413_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(v_covered_3405_, v_as_3406_, v_sz_boxed_3410_, v_i_boxed_3411_, v_b_boxed_3412_);
lean_dec_ref(v_as_3406_);
lean_dec_ref(v_covered_3405_);
v_r_3414_ = lean_box_uint64(v_res_3413_);
return v_r_3414_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(lean_object* v_fst_3415_, lean_object* v___x_3416_, lean_object* v_____r_3417_, lean_object* v_groups_3418_){
_start:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; 
v___x_3419_ = lean_nat_add(v_fst_3415_, v___x_3416_);
v___x_3420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3420_, 0, v___x_3419_);
lean_ctor_set(v___x_3420_, 1, v_groups_3418_);
v___x_3421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3421_, 0, v___x_3420_);
return v___x_3421_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0___boxed(lean_object* v_fst_3422_, lean_object* v___x_3423_, lean_object* v_____r_3424_, lean_object* v_groups_3425_){
_start:
{
lean_object* v_res_3426_; 
v_res_3426_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_3422_, v___x_3423_, v_____r_3424_, v_groups_3425_);
lean_dec(v___x_3423_);
lean_dec(v_fst_3422_);
return v_res_3426_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(lean_object* v_snd_3427_, uint64_t v___x_3428_, uint64_t v_fst_3429_, lean_object* v___x_3430_, lean_object* v___x_3431_, lean_object* v_as_3432_, lean_object* v_j_3433_){
_start:
{
uint8_t v___y_3435_; lean_object* v___x_3440_; uint8_t v___x_3441_; 
v___x_3440_ = lean_array_get_size(v_as_3432_);
v___x_3441_ = lean_nat_dec_lt(v_j_3433_, v___x_3440_);
if (v___x_3441_ == 0)
{
lean_object* v___x_3442_; 
lean_dec(v_j_3433_);
v___x_3442_ = lean_box(0);
return v___x_3442_;
}
else
{
lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v_snd_3447_; lean_object* v_key_3448_; lean_object* v_key_3449_; uint8_t v___x_3450_; 
v___x_3443_ = lean_unsigned_to_nat(0u);
v___x_3444_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3445_ = lean_array_fget_borrowed(v_as_3432_, v_j_3433_);
v___x_3446_ = lean_array_get_borrowed(v___x_3444_, v___x_3445_, v___x_3443_);
v_snd_3447_ = lean_ctor_get(v___x_3446_, 1);
v_key_3448_ = lean_ctor_get(v_snd_3447_, 0);
v_key_3449_ = lean_ctor_get(v_snd_3427_, 0);
v___x_3450_ = lean_nat_dec_eq(v___x_3430_, v___x_3431_);
switch(lean_obj_tag(v_key_3448_))
{
case 0:
{
if (lean_obj_tag(v_key_3449_) == 0)
{
uint8_t v___x_3451_; 
v___x_3451_ = lean_uint64_dec_eq(v___x_3428_, v_fst_3429_);
v___y_3435_ = v___x_3451_;
goto v___jp_3434_;
}
else
{
v___y_3435_ = v___x_3450_;
goto v___jp_3434_;
}
}
case 1:
{
if (lean_obj_tag(v_key_3449_) == 1)
{
lean_object* v_str_3452_; lean_object* v_str_3453_; uint8_t v___x_3454_; 
v_str_3452_ = lean_ctor_get(v_key_3448_, 1);
v_str_3453_ = lean_ctor_get(v_key_3449_, 1);
v___x_3454_ = lean_string_dec_eq(v_str_3452_, v_str_3453_);
v___y_3435_ = v___x_3454_;
goto v___jp_3434_;
}
else
{
v___y_3435_ = v___x_3450_;
goto v___jp_3434_;
}
}
default: 
{
if (lean_obj_tag(v_key_3449_) == 2)
{
lean_object* v_i_3455_; lean_object* v_i_3456_; uint8_t v___x_3457_; 
v_i_3455_ = lean_ctor_get(v_key_3448_, 1);
v_i_3456_ = lean_ctor_get(v_key_3449_, 1);
v___x_3457_ = lean_nat_dec_eq(v_i_3455_, v_i_3456_);
v___y_3435_ = v___x_3457_;
goto v___jp_3434_;
}
else
{
v___y_3435_ = v___x_3450_;
goto v___jp_3434_;
}
}
}
}
v___jp_3434_:
{
if (v___y_3435_ == 0)
{
lean_object* v___x_3436_; lean_object* v___x_3437_; 
v___x_3436_ = lean_unsigned_to_nat(1u);
v___x_3437_ = lean_nat_add(v_j_3433_, v___x_3436_);
lean_dec(v_j_3433_);
v_j_3433_ = v___x_3437_;
goto _start;
}
else
{
lean_object* v___x_3439_; 
v___x_3439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3439_, 0, v_j_3433_);
return v___x_3439_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg___boxed(lean_object* v_snd_3458_, lean_object* v___x_3459_, lean_object* v_fst_3460_, lean_object* v___x_3461_, lean_object* v___x_3462_, lean_object* v_as_3463_, lean_object* v_j_3464_){
_start:
{
uint64_t v___x_3060__boxed_3465_; uint64_t v_fst_3061__boxed_3466_; lean_object* v_res_3467_; 
v___x_3060__boxed_3465_ = lean_unbox_uint64(v___x_3459_);
lean_dec_ref(v___x_3459_);
v_fst_3061__boxed_3466_ = lean_unbox_uint64(v_fst_3460_);
lean_dec_ref(v_fst_3460_);
v_res_3467_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_snd_3458_, v___x_3060__boxed_3465_, v_fst_3061__boxed_3466_, v___x_3461_, v___x_3462_, v_as_3463_, v_j_3464_);
lean_dec_ref(v_as_3463_);
lean_dec(v___x_3462_);
lean_dec(v___x_3461_);
lean_dec_ref(v_snd_3458_);
return v_res_3467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(lean_object* v___x_3468_, lean_object* v___y_3469_, uint64_t v_fst_3470_, lean_object* v___x_3471_, lean_object* v_a_3472_){
_start:
{
lean_object* v___y_3474_; lean_object* v_fst_3478_; lean_object* v_snd_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3522_; 
v_fst_3478_ = lean_ctor_get(v_a_3472_, 0);
v_snd_3479_ = lean_ctor_get(v_a_3472_, 1);
v_isSharedCheck_3522_ = !lean_is_exclusive(v_a_3472_);
if (v_isSharedCheck_3522_ == 0)
{
v___x_3481_ = v_a_3472_;
v_isShared_3482_ = v_isSharedCheck_3522_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_snd_3479_);
lean_inc(v_fst_3478_);
lean_dec(v_a_3472_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3522_;
goto v_resetjp_3480_;
}
v___jp_3473_:
{
if (lean_obj_tag(v___y_3474_) == 0)
{
lean_object* v_a_3475_; 
v_a_3475_ = lean_ctor_get(v___y_3474_, 0);
lean_inc(v_a_3475_);
lean_dec_ref_known(v___y_3474_, 1);
return v_a_3475_;
}
else
{
lean_object* v_a_3476_; 
v_a_3476_ = lean_ctor_get(v___y_3474_, 0);
lean_inc(v_a_3476_);
lean_dec_ref_known(v___y_3474_, 1);
v_a_3472_ = v_a_3476_;
goto _start;
}
}
v_resetjp_3480_:
{
uint8_t v___x_3483_; 
v___x_3483_ = lean_nat_dec_lt(v_fst_3478_, v___x_3468_);
if (v___x_3483_ == 0)
{
lean_object* v___x_3485_; 
if (v_isShared_3482_ == 0)
{
v___x_3485_ = v___x_3481_;
goto v_reusejp_3484_;
}
else
{
lean_object* v_reuseFailAlloc_3486_; 
v_reuseFailAlloc_3486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3486_, 0, v_fst_3478_);
lean_ctor_set(v_reuseFailAlloc_3486_, 1, v_snd_3479_);
v___x_3485_ = v_reuseFailAlloc_3486_;
goto v_reusejp_3484_;
}
v_reusejp_3484_:
{
return v___x_3485_;
}
}
else
{
lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v_fst_3490_; lean_object* v_snd_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3521_; 
lean_del_object(v___x_3481_);
v___x_3487_ = lean_unsigned_to_nat(0u);
v___x_3488_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v___x_3489_ = lean_array_get(v___x_3488_, v___y_3469_, v_fst_3478_);
v_fst_3490_ = lean_ctor_get(v___x_3489_, 0);
v_snd_3491_ = lean_ctor_get(v___x_3489_, 1);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3493_ = v___x_3489_;
v_isShared_3494_ = v_isSharedCheck_3521_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_snd_3491_);
lean_inc(v_fst_3490_);
lean_dec(v___x_3489_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3521_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
uint64_t v___x_3495_; uint8_t v___x_3496_; 
v___x_3495_ = lean_unbox_uint64(v_fst_3490_);
v___x_3496_ = lean_uint64_dec_eq(v___x_3495_, v_fst_3470_);
if (v___x_3496_ == 0)
{
lean_object* v___x_3498_; 
lean_dec(v_snd_3491_);
lean_dec(v_fst_3490_);
if (v_isShared_3494_ == 0)
{
lean_ctor_set(v___x_3493_, 1, v_snd_3479_);
lean_ctor_set(v___x_3493_, 0, v_fst_3478_);
v___x_3498_ = v___x_3493_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v_fst_3478_);
lean_ctor_set(v_reuseFailAlloc_3499_, 1, v_snd_3479_);
v___x_3498_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
return v___x_3498_;
}
}
else
{
lean_object* v_snd_3500_; lean_object* v___x_3501_; lean_object* v___y_3503_; uint64_t v___x_3506_; lean_object* v___x_3507_; 
lean_del_object(v___x_3493_);
v_snd_3500_ = lean_ctor_get(v_snd_3491_, 1);
v___x_3501_ = lean_unsigned_to_nat(1u);
v___x_3506_ = lean_unbox_uint64(v_fst_3490_);
lean_dec(v_fst_3490_);
v___x_3507_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_snd_3500_, v___x_3506_, v_fst_3470_, v___x_3471_, v___x_3468_, v_snd_3479_, v___x_3487_);
if (lean_obj_tag(v___x_3507_) == 0)
{
lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; 
v___x_3508_ = lean_mk_empty_array_with_capacity(v___x_3501_);
v___x_3509_ = lean_array_push(v___x_3508_, v_snd_3491_);
v___x_3510_ = lean_array_push(v_snd_3479_, v___x_3509_);
v___x_3511_ = lean_box(0);
v___x_3512_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_3478_, v___x_3501_, v___x_3511_, v___x_3510_);
lean_dec(v_fst_3478_);
v___y_3474_ = v___x_3512_;
goto v___jp_3473_;
}
else
{
lean_object* v_val_3513_; lean_object* v___x_3514_; uint8_t v___x_3515_; 
v_val_3513_ = lean_ctor_get(v___x_3507_, 0);
lean_inc(v_val_3513_);
lean_dec_ref_known(v___x_3507_, 1);
v___x_3514_ = lean_array_get_size(v_snd_3479_);
v___x_3515_ = lean_nat_dec_lt(v_val_3513_, v___x_3514_);
if (v___x_3515_ == 0)
{
lean_dec(v_val_3513_);
lean_dec(v_snd_3491_);
v___y_3503_ = v_snd_3479_;
goto v___jp_3502_;
}
else
{
lean_object* v_v_3516_; lean_object* v___x_3517_; lean_object* v_xs_x27_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; 
v_v_3516_ = lean_array_fget(v_snd_3479_, v_val_3513_);
v___x_3517_ = lean_box(0);
v_xs_x27_3518_ = lean_array_fset(v_snd_3479_, v_val_3513_, v___x_3517_);
v___x_3519_ = lean_array_push(v_v_3516_, v_snd_3491_);
v___x_3520_ = lean_array_fset(v_xs_x27_3518_, v_val_3513_, v___x_3519_);
lean_dec(v_val_3513_);
v___y_3503_ = v___x_3520_;
goto v___jp_3502_;
}
}
v___jp_3502_:
{
lean_object* v___x_3504_; lean_object* v___x_3505_; 
v___x_3504_ = lean_box(0);
v___x_3505_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___lam__0(v_fst_3478_, v___x_3501_, v___x_3504_, v___y_3503_);
lean_dec(v_fst_3478_);
v___y_3474_ = v___x_3505_;
goto v___jp_3473_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___boxed(lean_object* v___x_3523_, lean_object* v___y_3524_, lean_object* v_fst_3525_, lean_object* v___x_3526_, lean_object* v_a_3527_){
_start:
{
uint64_t v_fst_3128__boxed_3528_; lean_object* v_res_3529_; 
v_fst_3128__boxed_3528_ = lean_unbox_uint64(v_fst_3525_);
lean_dec_ref(v_fst_3525_);
v_res_3529_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_3523_, v___y_3524_, v_fst_3128__boxed_3528_, v___x_3526_, v_a_3527_);
lean_dec(v___x_3526_);
lean_dec_ref(v___y_3524_);
lean_dec(v___x_3523_);
return v_res_3529_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(lean_object* v_hi_3530_, lean_object* v_pivot_3531_, lean_object* v_as_3532_, lean_object* v_i_3533_, lean_object* v_k_3534_){
_start:
{
uint8_t v___x_3545_; 
v___x_3545_ = lean_nat_dec_lt(v_k_3534_, v_hi_3530_);
if (v___x_3545_ == 0)
{
lean_object* v___x_3546_; lean_object* v___x_3547_; 
lean_dec(v_k_3534_);
v___x_3546_ = lean_array_fswap(v_as_3532_, v_i_3533_, v_hi_3530_);
v___x_3547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3547_, 0, v_i_3533_);
lean_ctor_set(v___x_3547_, 1, v___x_3546_);
return v___x_3547_;
}
else
{
lean_object* v___x_3548_; lean_object* v_snd_3549_; lean_object* v_snd_3550_; lean_object* v_fst_3551_; lean_object* v_fst_3552_; lean_object* v_fst_3553_; lean_object* v_fst_3554_; uint64_t v___x_3555_; uint64_t v___x_3556_; uint8_t v___x_3557_; 
v___x_3548_ = lean_array_fget_borrowed(v_as_3532_, v_k_3534_);
v_snd_3549_ = lean_ctor_get(v___x_3548_, 1);
v_snd_3550_ = lean_ctor_get(v_pivot_3531_, 1);
v_fst_3551_ = lean_ctor_get(v___x_3548_, 0);
v_fst_3552_ = lean_ctor_get(v_snd_3549_, 0);
v_fst_3553_ = lean_ctor_get(v_pivot_3531_, 0);
v_fst_3554_ = lean_ctor_get(v_snd_3550_, 0);
v___x_3555_ = lean_unbox_uint64(v_fst_3551_);
v___x_3556_ = lean_unbox_uint64(v_fst_3553_);
v___x_3557_ = lean_uint64_dec_lt(v___x_3555_, v___x_3556_);
if (v___x_3557_ == 0)
{
uint64_t v___x_3558_; uint64_t v___x_3559_; uint8_t v___x_3560_; 
v___x_3558_ = lean_unbox_uint64(v_fst_3551_);
v___x_3559_ = lean_unbox_uint64(v_fst_3553_);
v___x_3560_ = lean_uint64_dec_eq(v___x_3558_, v___x_3559_);
if (v___x_3560_ == 0)
{
goto v___jp_3541_;
}
else
{
uint8_t v___x_3561_; 
v___x_3561_ = lean_nat_dec_lt(v_fst_3552_, v_fst_3554_);
if (v___x_3561_ == 0)
{
goto v___jp_3541_;
}
else
{
goto v___jp_3535_;
}
}
}
else
{
goto v___jp_3535_;
}
}
v___jp_3535_:
{
lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; 
v___x_3536_ = lean_array_fswap(v_as_3532_, v_i_3533_, v_k_3534_);
v___x_3537_ = lean_unsigned_to_nat(1u);
v___x_3538_ = lean_nat_add(v_i_3533_, v___x_3537_);
lean_dec(v_i_3533_);
v___x_3539_ = lean_nat_add(v_k_3534_, v___x_3537_);
lean_dec(v_k_3534_);
v_as_3532_ = v___x_3536_;
v_i_3533_ = v___x_3538_;
v_k_3534_ = v___x_3539_;
goto _start;
}
v___jp_3541_:
{
lean_object* v___x_3542_; lean_object* v___x_3543_; 
v___x_3542_ = lean_unsigned_to_nat(1u);
v___x_3543_ = lean_nat_add(v_k_3534_, v___x_3542_);
lean_dec(v_k_3534_);
v_k_3534_ = v___x_3543_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg___boxed(lean_object* v_hi_3562_, lean_object* v_pivot_3563_, lean_object* v_as_3564_, lean_object* v_i_3565_, lean_object* v_k_3566_){
_start:
{
lean_object* v_res_3567_; 
v_res_3567_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(v_hi_3562_, v_pivot_3563_, v_as_3564_, v_i_3565_, v_k_3566_);
lean_dec_ref(v_pivot_3563_);
lean_dec(v_hi_3562_);
return v_res_3567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(lean_object* v_n_3568_, lean_object* v_as_3569_, lean_object* v_lo_3570_, lean_object* v_hi_3571_){
_start:
{
lean_object* v___y_3573_; uint8_t v___x_3583_; 
v___x_3583_ = lean_nat_dec_lt(v_lo_3570_, v_hi_3571_);
if (v___x_3583_ == 0)
{
lean_dec(v_lo_3570_);
return v_as_3569_;
}
else
{
lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v_mid_3586_; lean_object* v___y_3588_; lean_object* v___y_3594_; lean_object* v___x_3599_; lean_object* v___x_3600_; uint8_t v___x_3601_; 
v___x_3584_ = lean_nat_add(v_lo_3570_, v_hi_3571_);
v___x_3585_ = lean_unsigned_to_nat(1u);
v_mid_3586_ = lean_nat_shiftr(v___x_3584_, v___x_3585_);
lean_dec(v___x_3584_);
v___x_3599_ = lean_array_fget_borrowed(v_as_3569_, v_mid_3586_);
v___x_3600_ = lean_array_fget_borrowed(v_as_3569_, v_lo_3570_);
v___x_3601_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(v___x_3599_, v___x_3600_);
if (v___x_3601_ == 0)
{
v___y_3594_ = v_as_3569_;
goto v___jp_3593_;
}
else
{
lean_object* v___x_3602_; 
v___x_3602_ = lean_array_fswap(v_as_3569_, v_lo_3570_, v_mid_3586_);
v___y_3594_ = v___x_3602_;
goto v___jp_3593_;
}
v___jp_3587_:
{
lean_object* v___x_3589_; lean_object* v___x_3590_; uint8_t v___x_3591_; 
v___x_3589_ = lean_array_fget_borrowed(v___y_3588_, v_mid_3586_);
v___x_3590_ = lean_array_fget_borrowed(v___y_3588_, v_hi_3571_);
v___x_3591_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(v___x_3589_, v___x_3590_);
if (v___x_3591_ == 0)
{
lean_dec(v_mid_3586_);
v___y_3573_ = v___y_3588_;
goto v___jp_3572_;
}
else
{
lean_object* v___x_3592_; 
v___x_3592_ = lean_array_fswap(v___y_3588_, v_mid_3586_, v_hi_3571_);
lean_dec(v_mid_3586_);
v___y_3573_ = v___x_3592_;
goto v___jp_3572_;
}
}
v___jp_3593_:
{
lean_object* v___x_3595_; lean_object* v___x_3596_; uint8_t v___x_3597_; 
v___x_3595_ = lean_array_fget_borrowed(v___y_3594_, v_hi_3571_);
v___x_3596_ = lean_array_fget_borrowed(v___y_3594_, v_lo_3570_);
v___x_3597_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__8(v___x_3595_, v___x_3596_);
if (v___x_3597_ == 0)
{
v___y_3588_ = v___y_3594_;
goto v___jp_3587_;
}
else
{
lean_object* v___x_3598_; 
v___x_3598_ = lean_array_fswap(v___y_3594_, v_lo_3570_, v_hi_3571_);
v___y_3588_ = v___x_3598_;
goto v___jp_3587_;
}
}
}
v___jp_3572_:
{
lean_object* v_pivot_3574_; lean_object* v___x_3575_; lean_object* v_fst_3576_; lean_object* v_snd_3577_; uint8_t v___x_3578_; 
v_pivot_3574_ = lean_array_fget(v___y_3573_, v_hi_3571_);
lean_inc_n(v_lo_3570_, 2);
v___x_3575_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(v_hi_3571_, v_pivot_3574_, v___y_3573_, v_lo_3570_, v_lo_3570_);
lean_dec(v_pivot_3574_);
v_fst_3576_ = lean_ctor_get(v___x_3575_, 0);
lean_inc(v_fst_3576_);
v_snd_3577_ = lean_ctor_get(v___x_3575_, 1);
lean_inc(v_snd_3577_);
lean_dec_ref(v___x_3575_);
v___x_3578_ = lean_nat_dec_le(v_hi_3571_, v_fst_3576_);
if (v___x_3578_ == 0)
{
lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; 
v___x_3579_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v_n_3568_, v_snd_3577_, v_lo_3570_, v_fst_3576_);
v___x_3580_ = lean_unsigned_to_nat(1u);
v___x_3581_ = lean_nat_add(v_fst_3576_, v___x_3580_);
lean_dec(v_fst_3576_);
v_as_3569_ = v___x_3579_;
v_lo_3570_ = v___x_3581_;
goto _start;
}
else
{
lean_dec(v_fst_3576_);
lean_dec(v_lo_3570_);
return v_snd_3577_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg___boxed(lean_object* v_n_3603_, lean_object* v_as_3604_, lean_object* v_lo_3605_, lean_object* v_hi_3606_){
_start:
{
lean_object* v_res_3607_; 
v_res_3607_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v_n_3603_, v_as_3604_, v_lo_3605_, v_hi_3606_);
lean_dec(v_hi_3606_);
lean_dec(v_n_3603_);
return v_res_3607_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(lean_object* v_as_3608_, size_t v_sz_3609_, size_t v_i_3610_, lean_object* v_b_3611_){
_start:
{
uint8_t v___x_3612_; 
v___x_3612_ = lean_usize_dec_lt(v_i_3610_, v_sz_3609_);
if (v___x_3612_ == 0)
{
return v_b_3611_;
}
else
{
lean_object* v_a_3613_; lean_object* v_snd_3614_; lean_object* v_children_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; size_t v___x_3618_; size_t v___x_3619_; 
v_a_3613_ = lean_array_uget_borrowed(v_as_3608_, v_i_3610_);
v_snd_3614_ = lean_ctor_get(v_a_3613_, 1);
v_children_3615_ = lean_ctor_get(v_snd_3614_, 2);
v___x_3616_ = lean_array_get_size(v_children_3615_);
v___x_3617_ = lean_nat_add(v_b_3611_, v___x_3616_);
lean_dec(v_b_3611_);
v___x_3618_ = ((size_t)1ULL);
v___x_3619_ = lean_usize_add(v_i_3610_, v___x_3618_);
v_i_3610_ = v___x_3619_;
v_b_3611_ = v___x_3617_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg___boxed(lean_object* v_as_3621_, lean_object* v_sz_3622_, lean_object* v_i_3623_, lean_object* v_b_3624_){
_start:
{
size_t v_sz_boxed_3625_; size_t v_i_boxed_3626_; lean_object* v_res_3627_; 
v_sz_boxed_3625_ = lean_unbox_usize(v_sz_3622_);
lean_dec(v_sz_3622_);
v_i_boxed_3626_ = lean_unbox_usize(v_i_3623_);
lean_dec(v_i_3623_);
v_res_3627_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_as_3621_, v_sz_boxed_3625_, v_i_boxed_3626_, v_b_3624_);
lean_dec_ref(v_as_3621_);
return v_res_3627_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(lean_object* v___y_3628_, lean_object* v_covered_3629_, lean_object* v_a_3630_){
_start:
{
lean_object* v_fst_3631_; lean_object* v_snd_3632_; lean_object* v___x_3634_; uint8_t v_isShared_3635_; uint8_t v_isSharedCheck_3688_; 
v_fst_3631_ = lean_ctor_get(v_a_3630_, 0);
v_snd_3632_ = lean_ctor_get(v_a_3630_, 1);
v_isSharedCheck_3688_ = !lean_is_exclusive(v_a_3630_);
if (v_isSharedCheck_3688_ == 0)
{
v___x_3634_ = v_a_3630_;
v_isShared_3635_ = v_isSharedCheck_3688_;
goto v_resetjp_3633_;
}
else
{
lean_inc(v_snd_3632_);
lean_inc(v_fst_3631_);
lean_dec(v_a_3630_);
v___x_3634_ = lean_box(0);
v_isShared_3635_ = v_isSharedCheck_3688_;
goto v_resetjp_3633_;
}
v_resetjp_3633_:
{
lean_object* v___x_3636_; uint8_t v___x_3637_; 
v___x_3636_ = lean_array_get_size(v___y_3628_);
v___x_3637_ = lean_nat_dec_lt(v_snd_3632_, v___x_3636_);
if (v___x_3637_ == 0)
{
lean_object* v___x_3639_; 
if (v_isShared_3635_ == 0)
{
v___x_3639_ = v___x_3634_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v_fst_3631_);
lean_ctor_set(v_reuseFailAlloc_3640_, 1, v_snd_3632_);
v___x_3639_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
return v___x_3639_;
}
}
else
{
lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v_fst_3643_; lean_object* v_snd_3644_; lean_object* v___x_3646_; uint8_t v_isShared_3647_; uint8_t v_isSharedCheck_3687_; 
lean_del_object(v___x_3634_);
v___x_3641_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v___x_3642_ = lean_array_get(v___x_3641_, v___y_3628_, v_snd_3632_);
v_fst_3643_ = lean_ctor_get(v___x_3642_, 0);
v_snd_3644_ = lean_ctor_get(v___x_3642_, 1);
v_isSharedCheck_3687_ = !lean_is_exclusive(v___x_3642_);
if (v_isSharedCheck_3687_ == 0)
{
v___x_3646_ = v___x_3642_;
v_isShared_3647_ = v_isSharedCheck_3687_;
goto v_resetjp_3645_;
}
else
{
lean_inc(v_snd_3644_);
lean_inc(v_fst_3643_);
lean_dec(v___x_3642_);
v___x_3646_ = lean_box(0);
v_isShared_3647_ = v_isSharedCheck_3687_;
goto v_resetjp_3645_;
}
v_resetjp_3645_:
{
lean_object* v___x_3648_; lean_object* v___x_3649_; uint8_t v___x_3655_; 
v___x_3648_ = lean_unsigned_to_nat(1u);
v___x_3649_ = lean_nat_add(v_snd_3632_, v___x_3648_);
lean_dec(v_snd_3632_);
v___x_3655_ = lean_nat_dec_eq(v___x_3649_, v___x_3636_);
if (v___x_3655_ == 0)
{
lean_object* v___x_3656_; lean_object* v_fst_3657_; lean_object* v___x_3659_; uint8_t v_isShared_3660_; uint8_t v_isSharedCheck_3685_; 
v___x_3656_ = lean_array_get(v___x_3641_, v___y_3628_, v___x_3649_);
v_fst_3657_ = lean_ctor_get(v___x_3656_, 0);
v_isSharedCheck_3685_ = !lean_is_exclusive(v___x_3656_);
if (v_isSharedCheck_3685_ == 0)
{
lean_object* v_unused_3686_; 
v_unused_3686_ = lean_ctor_get(v___x_3656_, 1);
lean_dec(v_unused_3686_);
v___x_3659_ = v___x_3656_;
v_isShared_3660_ = v_isSharedCheck_3685_;
goto v_resetjp_3658_;
}
else
{
lean_inc(v_fst_3657_);
lean_dec(v___x_3656_);
v___x_3659_ = lean_box(0);
v_isShared_3660_ = v_isSharedCheck_3685_;
goto v_resetjp_3658_;
}
v_resetjp_3658_:
{
uint64_t v___x_3661_; uint64_t v___x_3662_; uint8_t v___x_3663_; 
v___x_3661_ = lean_unbox_uint64(v_fst_3657_);
lean_dec(v_fst_3657_);
v___x_3662_ = lean_unbox_uint64(v_fst_3643_);
v___x_3663_ = lean_uint64_dec_eq(v___x_3661_, v___x_3662_);
if (v___x_3663_ == 0)
{
lean_del_object(v___x_3659_);
lean_dec(v_snd_3644_);
lean_dec(v_fst_3643_);
goto v___jp_3650_;
}
else
{
lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3668_; 
lean_del_object(v___x_3646_);
v___x_3664_ = lean_mk_empty_array_with_capacity(v___x_3648_);
lean_inc_ref(v___x_3664_);
v___x_3665_ = lean_array_push(v___x_3664_, v_snd_3644_);
v___x_3666_ = lean_array_push(v___x_3664_, v___x_3665_);
lean_inc(v___x_3649_);
if (v_isShared_3660_ == 0)
{
lean_ctor_set(v___x_3659_, 1, v___x_3666_);
lean_ctor_set(v___x_3659_, 0, v___x_3649_);
v___x_3668_ = v___x_3659_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3684_; 
v_reuseFailAlloc_3684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3684_, 0, v___x_3649_);
lean_ctor_set(v_reuseFailAlloc_3684_, 1, v___x_3666_);
v___x_3668_ = v_reuseFailAlloc_3684_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
uint64_t v___x_3669_; lean_object* v___x_3670_; lean_object* v_fst_3671_; lean_object* v_snd_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3683_; 
v___x_3669_ = lean_unbox_uint64(v_fst_3643_);
lean_dec(v_fst_3643_);
v___x_3670_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_3636_, v___y_3628_, v___x_3669_, v___x_3649_, v___x_3668_);
lean_dec(v___x_3649_);
v_fst_3671_ = lean_ctor_get(v___x_3670_, 0);
v_snd_3672_ = lean_ctor_get(v___x_3670_, 1);
v_isSharedCheck_3683_ = !lean_is_exclusive(v___x_3670_);
if (v_isSharedCheck_3683_ == 0)
{
v___x_3674_ = v___x_3670_;
v_isShared_3675_ = v_isSharedCheck_3683_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_snd_3672_);
lean_inc(v_fst_3671_);
lean_dec(v___x_3670_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3683_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
size_t v___x_3676_; size_t v_sz_3677_; lean_object* v___x_3678_; lean_object* v___x_3680_; 
v___x_3676_ = ((size_t)0ULL);
v_sz_3677_ = lean_array_size(v_snd_3672_);
v___x_3678_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_covered_3629_, v_snd_3672_, v_sz_3677_, v___x_3676_, v_fst_3631_);
lean_dec(v_snd_3672_);
if (v_isShared_3675_ == 0)
{
lean_ctor_set(v___x_3674_, 1, v_fst_3671_);
lean_ctor_set(v___x_3674_, 0, v___x_3678_);
v___x_3680_ = v___x_3674_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3682_; 
v_reuseFailAlloc_3682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3682_, 0, v___x_3678_);
lean_ctor_set(v_reuseFailAlloc_3682_, 1, v_fst_3671_);
v___x_3680_ = v_reuseFailAlloc_3682_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
v_a_3630_ = v___x_3680_;
goto _start;
}
}
}
}
}
}
else
{
lean_dec(v_snd_3644_);
lean_dec(v_fst_3643_);
goto v___jp_3650_;
}
v___jp_3650_:
{
lean_object* v___x_3652_; 
if (v_isShared_3647_ == 0)
{
lean_ctor_set(v___x_3646_, 1, v___x_3649_);
lean_ctor_set(v___x_3646_, 0, v_fst_3631_);
v___x_3652_ = v___x_3646_;
goto v_reusejp_3651_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v_fst_3631_);
lean_ctor_set(v_reuseFailAlloc_3654_, 1, v___x_3649_);
v___x_3652_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3651_;
}
v_reusejp_3651_:
{
v_a_3630_ = v___x_3652_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(lean_object* v_covered_3689_, lean_object* v_key_3690_, lean_object* v_cands_3691_, lean_object* v_acc_3692_){
_start:
{
lean_object* v___y_3694_; lean_object* v___y_3695_; lean_object* v___y_3696_; lean_object* v___y_3701_; lean_object* v___y_3702_; lean_object* v___y_3703_; lean_object* v___y_3704_; lean_object* v___y_3705_; lean_object* v___y_3706_; lean_object* v___y_3709_; lean_object* v___y_3710_; lean_object* v___y_3711_; lean_object* v___y_3712_; lean_object* v___y_3713_; lean_object* v___y_3714_; lean_object* v___y_3717_; lean_object* v_acc_3718_; lean_object* v___x_3738_; lean_object* v___x_3739_; uint8_t v___x_3740_; 
v___x_3738_ = lean_array_get_size(v_covered_3689_);
v___x_3739_ = lean_unsigned_to_nat(0u);
v___x_3740_ = lean_nat_dec_eq(v___x_3738_, v___x_3739_);
if (v___x_3740_ == 0)
{
uint64_t v_common_3741_; size_t v_sz_3742_; size_t v___x_3743_; uint64_t v___x_3744_; uint64_t v___x_3745_; uint8_t v___x_3746_; 
v_common_3741_ = 18446744073709551615ULL;
v_sz_3742_ = lean_array_size(v_cands_3691_);
v___x_3743_ = ((size_t)0ULL);
v___x_3744_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(v_covered_3689_, v_cands_3691_, v_sz_3742_, v___x_3743_, v_common_3741_);
v___x_3745_ = 0ULL;
v___x_3746_ = lean_uint64_dec_eq(v___x_3744_, v___x_3745_);
if (v___x_3746_ == 0)
{
lean_dec(v_key_3690_);
return v_acc_3692_;
}
else
{
goto v___jp_3729_;
}
}
else
{
goto v___jp_3729_;
}
v___jp_3693_:
{
lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v_fst_3699_; 
v___x_3697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3697_, 0, v___y_3694_);
lean_ctor_set(v___x_3697_, 1, v___y_3695_);
v___x_3698_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v___y_3696_, v_covered_3689_, v___x_3697_);
lean_dec_ref(v___y_3696_);
v_fst_3699_ = lean_ctor_get(v___x_3698_, 0);
lean_inc(v_fst_3699_);
lean_dec_ref(v___x_3698_);
return v_fst_3699_;
}
v___jp_3700_:
{
lean_object* v___x_3707_; 
v___x_3707_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v___y_3705_, v___y_3702_, v___y_3701_, v___y_3706_);
lean_dec(v___y_3706_);
lean_dec(v___y_3705_);
v___y_3694_ = v___y_3703_;
v___y_3695_ = v___y_3704_;
v___y_3696_ = v___x_3707_;
goto v___jp_3693_;
}
v___jp_3708_:
{
uint8_t v___x_3715_; 
v___x_3715_ = lean_nat_dec_le(v___y_3714_, v___y_3712_);
if (v___x_3715_ == 0)
{
lean_dec(v___y_3712_);
lean_inc(v___y_3714_);
v___y_3701_ = v___y_3714_;
v___y_3702_ = v___y_3709_;
v___y_3703_ = v___y_3710_;
v___y_3704_ = v___y_3711_;
v___y_3705_ = v___y_3713_;
v___y_3706_ = v___y_3714_;
goto v___jp_3700_;
}
else
{
v___y_3701_ = v___y_3714_;
v___y_3702_ = v___y_3709_;
v___y_3703_ = v___y_3710_;
v___y_3704_ = v___y_3711_;
v___y_3705_ = v___y_3713_;
v___y_3706_ = v___y_3712_;
goto v___jp_3700_;
}
}
v___jp_3716_:
{
size_t v_sz_3719_; size_t v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; uint8_t v___x_3725_; 
v_sz_3719_ = lean_array_size(v_cands_3691_);
v___x_3720_ = ((size_t)0ULL);
lean_inc(v___y_3717_);
v___x_3721_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_cands_3691_, v_sz_3719_, v___x_3720_, v___y_3717_);
v___x_3722_ = lean_mk_empty_array_with_capacity(v___x_3721_);
lean_dec(v___x_3721_);
v___x_3723_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_cands_3691_, v_sz_3719_, v___x_3720_, v___x_3722_);
v___x_3724_ = lean_array_get_size(v___x_3723_);
v___x_3725_ = lean_nat_dec_eq(v___x_3724_, v___y_3717_);
if (v___x_3725_ == 0)
{
lean_object* v___x_3726_; lean_object* v___x_3727_; uint8_t v___x_3728_; 
v___x_3726_ = lean_unsigned_to_nat(1u);
v___x_3727_ = lean_nat_sub(v___x_3724_, v___x_3726_);
v___x_3728_ = lean_nat_dec_le(v___y_3717_, v___x_3727_);
if (v___x_3728_ == 0)
{
lean_inc(v___x_3727_);
v___y_3709_ = v___x_3723_;
v___y_3710_ = v_acc_3718_;
v___y_3711_ = v___y_3717_;
v___y_3712_ = v___x_3727_;
v___y_3713_ = v___x_3724_;
v___y_3714_ = v___x_3727_;
goto v___jp_3708_;
}
else
{
lean_inc(v___y_3717_);
v___y_3709_ = v___x_3723_;
v___y_3710_ = v_acc_3718_;
v___y_3711_ = v___y_3717_;
v___y_3712_ = v___x_3727_;
v___y_3713_ = v___x_3724_;
v___y_3714_ = v___y_3717_;
goto v___jp_3708_;
}
}
else
{
v___y_3694_ = v_acc_3718_;
v___y_3695_ = v___y_3717_;
v___y_3696_ = v___x_3723_;
goto v___jp_3693_;
}
}
v___jp_3729_:
{
lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v_entries_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; uint8_t v___x_3735_; 
v___x_3730_ = lean_unsigned_to_nat(0u);
v___x_3731_ = lean_array_get_size(v_cands_3691_);
v_entries_3732_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_cands_3691_, v___x_3730_, v___x_3731_);
v___x_3733_ = lean_unsigned_to_nat(1u);
v___x_3734_ = lean_array_get_size(v_entries_3732_);
v___x_3735_ = lean_nat_dec_lt(v___x_3733_, v___x_3734_);
if (v___x_3735_ == 0)
{
lean_dec_ref(v_entries_3732_);
lean_dec(v_key_3690_);
v___y_3717_ = v___x_3730_;
v_acc_3718_ = v_acc_3692_;
goto v___jp_3716_;
}
else
{
lean_object* v___x_3736_; lean_object* v_acc_3737_; 
v___x_3736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3736_, 0, v_key_3690_);
lean_ctor_set(v___x_3736_, 1, v_entries_3732_);
v_acc_3737_ = lean_array_push(v_acc_3692_, v___x_3736_);
v___y_3717_ = v___x_3730_;
v_acc_3718_ = v_acc_3737_;
goto v___jp_3716_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(lean_object* v_covered_3747_, lean_object* v_as_3748_, size_t v_sz_3749_, size_t v_i_3750_, lean_object* v_b_3751_){
_start:
{
lean_object* v_a_3753_; uint8_t v___x_3757_; 
v___x_3757_ = lean_usize_dec_lt(v_i_3750_, v_sz_3749_);
if (v___x_3757_ == 0)
{
return v_b_3751_;
}
else
{
lean_object* v___x_3758_; lean_object* v_a_3759_; lean_object* v___x_3760_; uint8_t v___x_3761_; 
v___x_3758_ = lean_unsigned_to_nat(1u);
v_a_3759_ = lean_array_uget_borrowed(v_as_3748_, v_i_3750_);
v___x_3760_ = lean_array_get_size(v_a_3759_);
v___x_3761_ = lean_nat_dec_eq(v___x_3760_, v___x_3758_);
if (v___x_3761_ == 0)
{
lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v_snd_3765_; lean_object* v_key_3766_; lean_object* v___x_3767_; 
v___x_3762_ = lean_unsigned_to_nat(0u);
v___x_3763_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_3764_ = lean_array_get_borrowed(v___x_3763_, v_a_3759_, v___x_3762_);
v_snd_3765_ = lean_ctor_get(v___x_3764_, 1);
v_key_3766_ = lean_ctor_get(v_snd_3765_, 0);
lean_inc(v_key_3766_);
v___x_3767_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3747_, v_key_3766_, v_a_3759_, v_b_3751_);
v_a_3753_ = v___x_3767_;
goto v___jp_3752_;
}
else
{
v_a_3753_ = v_b_3751_;
goto v___jp_3752_;
}
}
v___jp_3752_:
{
size_t v___x_3754_; size_t v___x_3755_; 
v___x_3754_ = ((size_t)1ULL);
v___x_3755_ = lean_usize_add(v_i_3750_, v___x_3754_);
v_i_3750_ = v___x_3755_;
v_b_3751_ = v_a_3753_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___boxed(lean_object* v_covered_3768_, lean_object* v_as_3769_, lean_object* v_sz_3770_, lean_object* v_i_3771_, lean_object* v_b_3772_){
_start:
{
size_t v_sz_boxed_3773_; size_t v_i_boxed_3774_; lean_object* v_res_3775_; 
v_sz_boxed_3773_ = lean_unbox_usize(v_sz_3770_);
lean_dec(v_sz_3770_);
v_i_boxed_3774_ = lean_unbox_usize(v_i_3771_);
lean_dec(v_i_3771_);
v_res_3775_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_covered_3768_, v_as_3769_, v_sz_boxed_3773_, v_i_boxed_3774_, v_b_3772_);
lean_dec_ref(v_as_3769_);
lean_dec_ref(v_covered_3768_);
return v_res_3775_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed(lean_object* v___y_3776_, lean_object* v_covered_3777_, lean_object* v_a_3778_){
_start:
{
lean_object* v_res_3779_; 
v_res_3779_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v___y_3776_, v_covered_3777_, v_a_3778_);
lean_dec_ref(v_covered_3777_);
lean_dec_ref(v___y_3776_);
return v_res_3779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg___boxed(lean_object* v_covered_3780_, lean_object* v_key_3781_, lean_object* v_cands_3782_, lean_object* v_acc_3783_){
_start:
{
lean_object* v_res_3784_; 
v_res_3784_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3780_, v_key_3781_, v_cands_3782_, v_acc_3783_);
lean_dec_ref(v_cands_3782_);
lean_dec_ref(v_covered_3780_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(lean_object* v_00_u03b1_3785_, lean_object* v_covered_3786_, lean_object* v_key_3787_, lean_object* v_cands_3788_, lean_object* v_acc_3789_){
_start:
{
lean_object* v___x_3790_; 
v___x_3790_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3786_, v_key_3787_, v_cands_3788_, v_acc_3789_);
return v___x_3790_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___boxed(lean_object* v_00_u03b1_3791_, lean_object* v_covered_3792_, lean_object* v_key_3793_, lean_object* v_cands_3794_, lean_object* v_acc_3795_){
_start:
{
lean_object* v_res_3796_; 
v_res_3796_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(v_00_u03b1_3791_, v_covered_3792_, v_key_3793_, v_cands_3794_, v_acc_3795_);
lean_dec_ref(v_cands_3794_);
lean_dec_ref(v_covered_3792_);
return v_res_3796_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(lean_object* v_00_u03b1_3797_, lean_object* v_fst_3798_, lean_object* v_as_3799_, size_t v_sz_3800_, size_t v_i_3801_, lean_object* v_b_3802_){
_start:
{
lean_object* v___x_3803_; 
v___x_3803_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_fst_3798_, v_as_3799_, v_sz_3800_, v_i_3801_, v_b_3802_);
return v___x_3803_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___boxed(lean_object* v_00_u03b1_3804_, lean_object* v_fst_3805_, lean_object* v_as_3806_, lean_object* v_sz_3807_, lean_object* v_i_3808_, lean_object* v_b_3809_){
_start:
{
size_t v_sz_boxed_3810_; size_t v_i_boxed_3811_; lean_object* v_res_3812_; 
v_sz_boxed_3810_ = lean_unbox_usize(v_sz_3807_);
lean_dec(v_sz_3807_);
v_i_boxed_3811_ = lean_unbox_usize(v_i_3808_);
lean_dec(v_i_3808_);
v_res_3812_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(v_00_u03b1_3804_, v_fst_3805_, v_as_3806_, v_sz_boxed_3810_, v_i_boxed_3811_, v_b_3809_);
lean_dec_ref(v_as_3806_);
return v_res_3812_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(lean_object* v_00_u03b1_3813_, lean_object* v_as_3814_, size_t v_sz_3815_, size_t v_i_3816_, lean_object* v_b_3817_){
_start:
{
lean_object* v___x_3818_; 
v___x_3818_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_as_3814_, v_sz_3815_, v_i_3816_, v_b_3817_);
return v___x_3818_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___boxed(lean_object* v_00_u03b1_3819_, lean_object* v_as_3820_, lean_object* v_sz_3821_, lean_object* v_i_3822_, lean_object* v_b_3823_){
_start:
{
size_t v_sz_boxed_3824_; size_t v_i_boxed_3825_; lean_object* v_res_3826_; 
v_sz_boxed_3824_ = lean_unbox_usize(v_sz_3821_);
lean_dec(v_sz_3821_);
v_i_boxed_3825_ = lean_unbox_usize(v_i_3822_);
lean_dec(v_i_3822_);
v_res_3826_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(v_00_u03b1_3819_, v_as_3820_, v_sz_boxed_3824_, v_i_boxed_3825_, v_b_3823_);
lean_dec_ref(v_as_3820_);
return v_res_3826_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(lean_object* v_00_u03b1_3827_, lean_object* v_as_3828_, size_t v_sz_3829_, size_t v_i_3830_, lean_object* v_b_3831_){
_start:
{
lean_object* v___x_3832_; 
v___x_3832_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_as_3828_, v_sz_3829_, v_i_3830_, v_b_3831_);
return v___x_3832_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___boxed(lean_object* v_00_u03b1_3833_, lean_object* v_as_3834_, lean_object* v_sz_3835_, lean_object* v_i_3836_, lean_object* v_b_3837_){
_start:
{
size_t v_sz_boxed_3838_; size_t v_i_boxed_3839_; lean_object* v_res_3840_; 
v_sz_boxed_3838_ = lean_unbox_usize(v_sz_3835_);
lean_dec(v_sz_3835_);
v_i_boxed_3839_ = lean_unbox_usize(v_i_3836_);
lean_dec(v_i_3836_);
v_res_3840_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(v_00_u03b1_3833_, v_as_3834_, v_sz_boxed_3838_, v_i_boxed_3839_, v_b_3837_);
lean_dec_ref(v_as_3834_);
return v_res_3840_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(lean_object* v_00_u03b1_3841_, lean_object* v_snd_3842_, uint64_t v___x_3843_, uint64_t v_fst_3844_, lean_object* v___x_3845_, lean_object* v___x_3846_, lean_object* v_as_3847_, lean_object* v_j_3848_){
_start:
{
lean_object* v___x_3849_; 
v___x_3849_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_snd_3842_, v___x_3843_, v_fst_3844_, v___x_3845_, v___x_3846_, v_as_3847_, v_j_3848_);
return v___x_3849_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___boxed(lean_object* v_00_u03b1_3850_, lean_object* v_snd_3851_, lean_object* v___x_3852_, lean_object* v_fst_3853_, lean_object* v___x_3854_, lean_object* v___x_3855_, lean_object* v_as_3856_, lean_object* v_j_3857_){
_start:
{
uint64_t v___x_3612__boxed_3858_; uint64_t v_fst_3613__boxed_3859_; lean_object* v_res_3860_; 
v___x_3612__boxed_3858_ = lean_unbox_uint64(v___x_3852_);
lean_dec_ref(v___x_3852_);
v_fst_3613__boxed_3859_ = lean_unbox_uint64(v_fst_3853_);
lean_dec_ref(v_fst_3853_);
v_res_3860_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(v_00_u03b1_3850_, v_snd_3851_, v___x_3612__boxed_3858_, v_fst_3613__boxed_3859_, v___x_3854_, v___x_3855_, v_as_3856_, v_j_3857_);
lean_dec_ref(v_as_3856_);
lean_dec(v___x_3855_);
lean_dec(v___x_3854_);
lean_dec_ref(v_snd_3851_);
return v_res_3860_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(lean_object* v_00_u03b1_3861_, lean_object* v___x_3862_, lean_object* v___y_3863_, uint64_t v_fst_3864_, lean_object* v___x_3865_, lean_object* v_inst_3866_, lean_object* v_a_3867_){
_start:
{
lean_object* v___x_3868_; 
v___x_3868_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_3862_, v___y_3863_, v_fst_3864_, v___x_3865_, v_a_3867_);
return v___x_3868_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___boxed(lean_object* v_00_u03b1_3869_, lean_object* v___x_3870_, lean_object* v___y_3871_, lean_object* v_fst_3872_, lean_object* v___x_3873_, lean_object* v_inst_3874_, lean_object* v_a_3875_){
_start:
{
uint64_t v_fst_3630__boxed_3876_; lean_object* v_res_3877_; 
v_fst_3630__boxed_3876_ = lean_unbox_uint64(v_fst_3872_);
lean_dec_ref(v_fst_3872_);
v_res_3877_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(v_00_u03b1_3869_, v___x_3870_, v___y_3871_, v_fst_3630__boxed_3876_, v___x_3873_, v_inst_3874_, v_a_3875_);
lean_dec(v___x_3873_);
lean_dec_ref(v___y_3871_);
lean_dec(v___x_3870_);
return v_res_3877_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(lean_object* v_00_u03b1_3878_, lean_object* v_covered_3879_, lean_object* v_as_3880_, size_t v_sz_3881_, size_t v_i_3882_, lean_object* v_b_3883_){
_start:
{
lean_object* v___x_3884_; 
v___x_3884_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_covered_3879_, v_as_3880_, v_sz_3881_, v_i_3882_, v_b_3883_);
return v___x_3884_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___boxed(lean_object* v_00_u03b1_3885_, lean_object* v_covered_3886_, lean_object* v_as_3887_, lean_object* v_sz_3888_, lean_object* v_i_3889_, lean_object* v_b_3890_){
_start:
{
size_t v_sz_boxed_3891_; size_t v_i_boxed_3892_; lean_object* v_res_3893_; 
v_sz_boxed_3891_ = lean_unbox_usize(v_sz_3888_);
lean_dec(v_sz_3888_);
v_i_boxed_3892_ = lean_unbox_usize(v_i_3889_);
lean_dec(v_i_3889_);
v_res_3893_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(v_00_u03b1_3885_, v_covered_3886_, v_as_3887_, v_sz_boxed_3891_, v_i_boxed_3892_, v_b_3890_);
lean_dec_ref(v_as_3887_);
lean_dec_ref(v_covered_3886_);
return v_res_3893_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(lean_object* v_00_u03b1_3894_, lean_object* v___y_3895_, lean_object* v_covered_3896_, lean_object* v_inst_3897_, lean_object* v_a_3898_){
_start:
{
lean_object* v___x_3899_; 
v___x_3899_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v___y_3895_, v_covered_3896_, v_a_3898_);
return v___x_3899_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___boxed(lean_object* v_00_u03b1_3900_, lean_object* v___y_3901_, lean_object* v_covered_3902_, lean_object* v_inst_3903_, lean_object* v_a_3904_){
_start:
{
lean_object* v_res_3905_; 
v_res_3905_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(v_00_u03b1_3900_, v___y_3901_, v_covered_3902_, v_inst_3903_, v_a_3904_);
lean_dec_ref(v_covered_3902_);
lean_dec_ref(v___y_3901_);
return v_res_3905_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7(lean_object* v_00_u03b1_3906_, lean_object* v_n_3907_, lean_object* v_as_3908_, lean_object* v_lo_3909_, lean_object* v_hi_3910_, lean_object* v_w_3911_, lean_object* v_hlo_3912_, lean_object* v_hhi_3913_){
_start:
{
lean_object* v___x_3914_; 
v___x_3914_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v_n_3907_, v_as_3908_, v_lo_3909_, v_hi_3910_);
return v___x_3914_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___boxed(lean_object* v_00_u03b1_3915_, lean_object* v_n_3916_, lean_object* v_as_3917_, lean_object* v_lo_3918_, lean_object* v_hi_3919_, lean_object* v_w_3920_, lean_object* v_hlo_3921_, lean_object* v_hhi_3922_){
_start:
{
lean_object* v_res_3923_; 
v_res_3923_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7(v_00_u03b1_3915_, v_n_3916_, v_as_3917_, v_lo_3918_, v_hi_3919_, v_w_3920_, v_hlo_3921_, v_hhi_3922_);
lean_dec(v_hi_3919_);
lean_dec(v_n_3916_);
return v_res_3923_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8(lean_object* v_00_u03b1_3924_, lean_object* v_as_3925_, lean_object* v_start_3926_, lean_object* v_stop_3927_){
_start:
{
lean_object* v___x_3928_; 
v___x_3928_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_as_3925_, v_start_3926_, v_stop_3927_);
return v___x_3928_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___boxed(lean_object* v_00_u03b1_3929_, lean_object* v_as_3930_, lean_object* v_start_3931_, lean_object* v_stop_3932_){
_start:
{
lean_object* v_res_3933_; 
v_res_3933_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8(v_00_u03b1_3929_, v_as_3930_, v_start_3931_, v_stop_3932_);
lean_dec(v_stop_3932_);
lean_dec(v_start_3931_);
lean_dec_ref(v_as_3930_);
return v_res_3933_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9(lean_object* v_00_u03b1_3934_, lean_object* v_covered_3935_, lean_object* v_as_3936_, size_t v_sz_3937_, size_t v_i_3938_, uint64_t v_b_3939_){
_start:
{
uint64_t v___x_3940_; 
v___x_3940_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___redArg(v_covered_3935_, v_as_3936_, v_sz_3937_, v_i_3938_, v_b_3939_);
return v___x_3940_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9___boxed(lean_object* v_00_u03b1_3941_, lean_object* v_covered_3942_, lean_object* v_as_3943_, lean_object* v_sz_3944_, lean_object* v_i_3945_, lean_object* v_b_3946_){
_start:
{
size_t v_sz_boxed_3947_; size_t v_i_boxed_3948_; uint64_t v_b_boxed_3949_; uint64_t v_res_3950_; lean_object* v_r_3951_; 
v_sz_boxed_3947_ = lean_unbox_usize(v_sz_3944_);
lean_dec(v_sz_3944_);
v_i_boxed_3948_ = lean_unbox_usize(v_i_3945_);
lean_dec(v_i_3945_);
v_b_boxed_3949_ = lean_unbox_uint64(v_b_3946_);
lean_dec_ref(v_b_3946_);
v_res_3950_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__9(v_00_u03b1_3941_, v_covered_3942_, v_as_3943_, v_sz_boxed_3947_, v_i_boxed_3948_, v_b_boxed_3949_);
lean_dec_ref(v_as_3943_);
lean_dec_ref(v_covered_3942_);
v_r_3951_ = lean_box_uint64(v_res_3950_);
return v_r_3951_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7(lean_object* v_00_u03b1_3952_, lean_object* v_n_3953_, lean_object* v_lo_3954_, lean_object* v_hi_3955_, lean_object* v_hhi_3956_, lean_object* v_pivot_3957_, lean_object* v_as_3958_, lean_object* v_i_3959_, lean_object* v_k_3960_, lean_object* v_ilo_3961_, lean_object* v_ik_3962_, lean_object* v_w_3963_){
_start:
{
lean_object* v___x_3964_; 
v___x_3964_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___redArg(v_hi_3955_, v_pivot_3957_, v_as_3958_, v_i_3959_, v_k_3960_);
return v___x_3964_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7___boxed(lean_object* v_00_u03b1_3965_, lean_object* v_n_3966_, lean_object* v_lo_3967_, lean_object* v_hi_3968_, lean_object* v_hhi_3969_, lean_object* v_pivot_3970_, lean_object* v_as_3971_, lean_object* v_i_3972_, lean_object* v_k_3973_, lean_object* v_ilo_3974_, lean_object* v_ik_3975_, lean_object* v_w_3976_){
_start:
{
lean_object* v_res_3977_; 
v_res_3977_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7_spec__7(v_00_u03b1_3965_, v_n_3966_, v_lo_3967_, v_hi_3968_, v_hhi_3969_, v_pivot_3970_, v_as_3971_, v_i_3972_, v_k_3973_, v_ilo_3974_, v_ik_3975_, v_w_3976_);
lean_dec_ref(v_pivot_3970_);
lean_dec(v_hi_3968_);
lean_dec(v_lo_3967_);
lean_dec(v_n_3966_);
return v_res_3977_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9(lean_object* v_00_u03b1_3978_, lean_object* v_as_3979_, size_t v_i_3980_, size_t v_stop_3981_, lean_object* v_b_3982_){
_start:
{
lean_object* v___x_3983_; 
v___x_3983_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___redArg(v_as_3979_, v_i_3980_, v_stop_3981_, v_b_3982_);
return v___x_3983_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9___boxed(lean_object* v_00_u03b1_3984_, lean_object* v_as_3985_, lean_object* v_i_3986_, lean_object* v_stop_3987_, lean_object* v_b_3988_){
_start:
{
size_t v_i_boxed_3989_; size_t v_stop_boxed_3990_; lean_object* v_res_3991_; 
v_i_boxed_3989_ = lean_unbox_usize(v_i_3986_);
lean_dec(v_i_3986_);
v_stop_boxed_3990_ = lean_unbox_usize(v_stop_3987_);
lean_dec(v_stop_3987_);
v_res_3991_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8_spec__9(v_00_u03b1_3984_, v_as_3985_, v_i_boxed_3989_, v_stop_boxed_3990_, v_b_3988_);
lean_dec_ref(v_as_3985_);
return v_res_3991_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg(lean_object* v_trees_3994_, lean_object* v_covered_3995_){
_start:
{
lean_object* v___x_3996_; lean_object* v___x_3997_; uint8_t v___x_3998_; 
v___x_3996_ = lean_array_get_size(v_trees_3994_);
v___x_3997_ = lean_unsigned_to_nat(2u);
v___x_3998_ = lean_nat_dec_lt(v___x_3996_, v___x_3997_);
if (v___x_3998_ == 0)
{
lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; 
v___x_3999_ = lean_box(0);
v___x_4000_ = ((lean_object*)(l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0));
v___x_4001_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_3995_, v___x_3999_, v_trees_3994_, v___x_4000_);
return v___x_4001_;
}
else
{
lean_object* v___x_4002_; 
v___x_4002_ = ((lean_object*)(l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0));
return v___x_4002_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg___boxed(lean_object* v_trees_4003_, lean_object* v_covered_4004_){
_start:
{
lean_object* v_res_4005_; 
v_res_4005_ = l_Lean_ImportedConsts_collectDuplicates___redArg(v_trees_4003_, v_covered_4004_);
lean_dec_ref(v_covered_4004_);
lean_dec_ref(v_trees_4003_);
return v_res_4005_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates(lean_object* v_00_u03b1_4006_, lean_object* v_trees_4007_, lean_object* v_covered_4008_){
_start:
{
lean_object* v___x_4009_; 
v___x_4009_ = l_Lean_ImportedConsts_collectDuplicates___redArg(v_trees_4007_, v_covered_4008_);
return v___x_4009_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___boxed(lean_object* v_00_u03b1_4010_, lean_object* v_trees_4011_, lean_object* v_covered_4012_){
_start:
{
lean_object* v_res_4013_; 
v_res_4013_ = l_Lean_ImportedConsts_collectDuplicates(v_00_u03b1_4010_, v_trees_4011_, v_covered_4012_);
lean_dec_ref(v_covered_4012_);
lean_dec_ref(v_trees_4011_);
return v_res_4013_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1(lean_object* v_cands_4014_, lean_object* v___x_4015_, lean_object* v_resolve_4016_, lean_object* v_x_4017_){
_start:
{
lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; 
v___x_4018_ = lean_unsigned_to_nat(0u);
v___x_4019_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__8___redArg(v_cands_4014_, v___x_4018_, v___x_4015_);
v___x_4020_ = lean_apply_1(v_resolve_4016_, v___x_4019_);
return v___x_4020_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1___boxed(lean_object* v_cands_4021_, lean_object* v___x_4022_, lean_object* v_resolve_4023_, lean_object* v_x_4024_){
_start:
{
lean_object* v_res_4025_; 
v_res_4025_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1(v_cands_4021_, v___x_4022_, v_resolve_4023_, v_x_4024_);
lean_dec(v___x_4022_);
lean_dec_ref(v_cands_4021_);
return v_res_4025_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed(lean_object* v_resolve_4029_, lean_object* v_cands_4030_, lean_object* v_x_4031_){
_start:
{
lean_object* v_res_4032_; 
v_res_4032_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(v_resolve_4029_, v_cands_4030_, v_x_4031_);
lean_dec_ref(v_cands_4030_);
return v_res_4032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(lean_object* v_resolve_4033_, lean_object* v_key_4034_, lean_object* v_cands_4035_){
_start:
{
lean_object* v___x_4036_; lean_object* v___x_4037_; uint8_t v___x_4038_; 
v___x_4036_ = lean_array_get_size(v_cands_4035_);
v___x_4037_ = lean_unsigned_to_nat(1u);
v___x_4038_ = lean_nat_dec_eq(v___x_4036_, v___x_4037_);
if (v___x_4038_ == 0)
{
lean_object* v___f_4039_; lean_object* v___f_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; 
lean_inc_ref(v_cands_4035_);
lean_inc_ref(v_resolve_4033_);
v___f_4039_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4039_, 0, v_resolve_4033_);
lean_closure_set(v___f_4039_, 1, v_cands_4035_);
v___f_4040_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_4040_, 0, v_cands_4035_);
lean_closure_set(v___f_4040_, 1, v___x_4036_);
lean_closure_set(v___f_4040_, 2, v_resolve_4033_);
v___x_4041_ = lean_mk_thunk(v___f_4040_);
v___x_4042_ = lean_mk_thunk(v___f_4039_);
v___x_4043_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_4043_, 0, v_key_4034_);
lean_ctor_set(v___x_4043_, 1, v___x_4041_);
lean_ctor_set(v___x_4043_, 2, v___x_4042_);
return v___x_4043_;
}
else
{
lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v_fst_4047_; lean_object* v_snd_4048_; lean_object* v___x_4050_; uint8_t v_isShared_4051_; uint8_t v_isSharedCheck_4055_; 
lean_dec(v_key_4034_);
lean_dec_ref(v_resolve_4033_);
v___x_4044_ = lean_unsigned_to_nat(0u);
v___x_4045_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v___x_4046_ = lean_array_get(v___x_4045_, v_cands_4035_, v___x_4044_);
lean_dec_ref(v_cands_4035_);
v_fst_4047_ = lean_ctor_get(v___x_4046_, 0);
v_snd_4048_ = lean_ctor_get(v___x_4046_, 1);
v_isSharedCheck_4055_ = !lean_is_exclusive(v___x_4046_);
if (v_isSharedCheck_4055_ == 0)
{
v___x_4050_ = v___x_4046_;
v_isShared_4051_ = v_isSharedCheck_4055_;
goto v_resetjp_4049_;
}
else
{
lean_inc(v_snd_4048_);
lean_inc(v_fst_4047_);
lean_dec(v___x_4046_);
v___x_4050_ = lean_box(0);
v_isShared_4051_ = v_isSharedCheck_4055_;
goto v_resetjp_4049_;
}
v_resetjp_4049_:
{
lean_object* v___x_4053_; 
if (v_isShared_4051_ == 0)
{
v___x_4053_ = v___x_4050_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4054_; 
v_reuseFailAlloc_4054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4054_, 0, v_fst_4047_);
lean_ctor_set(v_reuseFailAlloc_4054_, 1, v_snd_4048_);
v___x_4053_ = v_reuseFailAlloc_4054_;
goto v_reusejp_4052_;
}
v_reusejp_4052_:
{
return v___x_4053_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(lean_object* v_resolve_4056_, lean_object* v_as_4057_, size_t v_sz_4058_, size_t v_i_4059_, lean_object* v_b_4060_){
_start:
{
lean_object* v_a_4062_; uint8_t v___x_4066_; 
v___x_4066_ = lean_usize_dec_lt(v_i_4059_, v_sz_4058_);
if (v___x_4066_ == 0)
{
lean_dec_ref(v_resolve_4056_);
return v_b_4060_;
}
else
{
lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v_a_4070_; lean_object* v___x_4071_; uint8_t v___x_4072_; 
v___x_4067_ = lean_unsigned_to_nat(1u);
v___x_4068_ = lean_unsigned_to_nat(0u);
v___x_4069_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v_a_4070_ = lean_array_uget_borrowed(v_as_4057_, v_i_4059_);
v___x_4071_ = lean_array_get_size(v_a_4070_);
v___x_4072_ = lean_nat_dec_eq(v___x_4071_, v___x_4067_);
if (v___x_4072_ == 0)
{
lean_object* v___x_4073_; lean_object* v_snd_4074_; lean_object* v_key_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; 
v___x_4073_ = lean_array_get_borrowed(v___x_4069_, v_a_4070_, v___x_4068_);
v_snd_4074_ = lean_ctor_get(v___x_4073_, 1);
v_key_4075_ = lean_ctor_get(v_snd_4074_, 0);
lean_inc(v_a_4070_);
lean_inc(v_key_4075_);
lean_inc_ref(v_resolve_4056_);
v___x_4076_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4056_, v_key_4075_, v_a_4070_);
v___x_4077_ = lean_array_push(v_b_4060_, v___x_4076_);
v_a_4062_ = v___x_4077_;
goto v___jp_4061_;
}
else
{
lean_object* v___x_4078_; lean_object* v_fst_4079_; lean_object* v_snd_4080_; lean_object* v___x_4082_; uint8_t v_isShared_4083_; uint8_t v_isSharedCheck_4088_; 
v___x_4078_ = lean_array_get(v___x_4069_, v_a_4070_, v___x_4068_);
v_fst_4079_ = lean_ctor_get(v___x_4078_, 0);
v_snd_4080_ = lean_ctor_get(v___x_4078_, 1);
v_isSharedCheck_4088_ = !lean_is_exclusive(v___x_4078_);
if (v_isSharedCheck_4088_ == 0)
{
v___x_4082_ = v___x_4078_;
v_isShared_4083_ = v_isSharedCheck_4088_;
goto v_resetjp_4081_;
}
else
{
lean_inc(v_snd_4080_);
lean_inc(v_fst_4079_);
lean_dec(v___x_4078_);
v___x_4082_ = lean_box(0);
v_isShared_4083_ = v_isSharedCheck_4088_;
goto v_resetjp_4081_;
}
v_resetjp_4081_:
{
lean_object* v___x_4085_; 
if (v_isShared_4083_ == 0)
{
v___x_4085_ = v___x_4082_;
goto v_reusejp_4084_;
}
else
{
lean_object* v_reuseFailAlloc_4087_; 
v_reuseFailAlloc_4087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4087_, 0, v_fst_4079_);
lean_ctor_set(v_reuseFailAlloc_4087_, 1, v_snd_4080_);
v___x_4085_ = v_reuseFailAlloc_4087_;
goto v_reusejp_4084_;
}
v_reusejp_4084_:
{
lean_object* v___x_4086_; 
v___x_4086_ = lean_array_push(v_b_4060_, v___x_4085_);
v_a_4062_ = v___x_4086_;
goto v___jp_4061_;
}
}
}
}
v___jp_4061_:
{
size_t v___x_4063_; size_t v___x_4064_; 
v___x_4063_ = ((size_t)1ULL);
v___x_4064_ = lean_usize_add(v_i_4059_, v___x_4063_);
v_i_4059_ = v___x_4064_;
v_b_4060_ = v_a_4062_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(lean_object* v_resolve_4089_, lean_object* v_as_4090_, size_t v_sz_4091_, size_t v_i_4092_, lean_object* v_b_4093_){
_start:
{
lean_object* v_a_4095_; uint8_t v___x_4099_; 
v___x_4099_ = lean_usize_dec_lt(v_i_4092_, v_sz_4091_);
if (v___x_4099_ == 0)
{
lean_dec_ref(v_resolve_4089_);
return v_b_4093_;
}
else
{
lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v_a_4103_; lean_object* v___x_4104_; uint8_t v___x_4105_; 
v___x_4100_ = lean_unsigned_to_nat(1u);
v___x_4101_ = lean_unsigned_to_nat(0u);
v___x_4102_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2);
v_a_4103_ = lean_array_uget_borrowed(v_as_4090_, v_i_4092_);
v___x_4104_ = lean_array_get_size(v_a_4103_);
v___x_4105_ = lean_nat_dec_eq(v___x_4104_, v___x_4100_);
if (v___x_4105_ == 0)
{
lean_object* v___x_4106_; lean_object* v_snd_4107_; lean_object* v_key_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; 
v___x_4106_ = lean_array_get_borrowed(v___x_4102_, v_a_4103_, v___x_4101_);
v_snd_4107_ = lean_ctor_get(v___x_4106_, 1);
v_key_4108_ = lean_ctor_get(v_snd_4107_, 0);
lean_inc(v_a_4103_);
lean_inc(v_key_4108_);
lean_inc_ref(v_resolve_4089_);
v___x_4109_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4089_, v_key_4108_, v_a_4103_);
v___x_4110_ = lean_array_push(v_b_4093_, v___x_4109_);
v_a_4095_ = v___x_4110_;
goto v___jp_4094_;
}
else
{
lean_object* v___x_4111_; lean_object* v_fst_4112_; lean_object* v_snd_4113_; lean_object* v___x_4115_; uint8_t v_isShared_4116_; uint8_t v_isSharedCheck_4121_; 
v___x_4111_ = lean_array_get(v___x_4102_, v_a_4103_, v___x_4101_);
v_fst_4112_ = lean_ctor_get(v___x_4111_, 0);
v_snd_4113_ = lean_ctor_get(v___x_4111_, 1);
v_isSharedCheck_4121_ = !lean_is_exclusive(v___x_4111_);
if (v_isSharedCheck_4121_ == 0)
{
v___x_4115_ = v___x_4111_;
v_isShared_4116_ = v_isSharedCheck_4121_;
goto v_resetjp_4114_;
}
else
{
lean_inc(v_snd_4113_);
lean_inc(v_fst_4112_);
lean_dec(v___x_4111_);
v___x_4115_ = lean_box(0);
v_isShared_4116_ = v_isSharedCheck_4121_;
goto v_resetjp_4114_;
}
v_resetjp_4114_:
{
lean_object* v___x_4118_; 
if (v_isShared_4116_ == 0)
{
v___x_4118_ = v___x_4115_;
goto v_reusejp_4117_;
}
else
{
lean_object* v_reuseFailAlloc_4120_; 
v_reuseFailAlloc_4120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4120_, 0, v_fst_4112_);
lean_ctor_set(v_reuseFailAlloc_4120_, 1, v_snd_4113_);
v___x_4118_ = v_reuseFailAlloc_4120_;
goto v_reusejp_4117_;
}
v_reusejp_4117_:
{
lean_object* v___x_4119_; 
v___x_4119_ = lean_array_push(v_b_4093_, v___x_4118_);
v_a_4095_ = v___x_4119_;
goto v___jp_4094_;
}
}
}
}
v___jp_4094_:
{
size_t v___x_4096_; size_t v___x_4097_; lean_object* v___x_4098_; 
v___x_4096_ = ((size_t)1ULL);
v___x_4097_ = lean_usize_add(v_i_4092_, v___x_4096_);
v___x_4098_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_4089_, v_as_4090_, v_sz_4091_, v___x_4097_, v_a_4095_);
return v___x_4098_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(lean_object* v___y_4122_, lean_object* v_resolve_4123_, lean_object* v_a_4124_){
_start:
{
lean_object* v_fst_4125_; lean_object* v_snd_4126_; lean_object* v___x_4128_; uint8_t v_isShared_4129_; uint8_t v_isSharedCheck_4186_; 
v_fst_4125_ = lean_ctor_get(v_a_4124_, 0);
v_snd_4126_ = lean_ctor_get(v_a_4124_, 1);
v_isSharedCheck_4186_ = !lean_is_exclusive(v_a_4124_);
if (v_isSharedCheck_4186_ == 0)
{
v___x_4128_ = v_a_4124_;
v_isShared_4129_ = v_isSharedCheck_4186_;
goto v_resetjp_4127_;
}
else
{
lean_inc(v_snd_4126_);
lean_inc(v_fst_4125_);
lean_dec(v_a_4124_);
v___x_4128_ = lean_box(0);
v_isShared_4129_ = v_isSharedCheck_4186_;
goto v_resetjp_4127_;
}
v_resetjp_4127_:
{
lean_object* v___x_4130_; uint8_t v___x_4131_; 
v___x_4130_ = lean_array_get_size(v___y_4122_);
v___x_4131_ = lean_nat_dec_lt(v_snd_4126_, v___x_4130_);
if (v___x_4131_ == 0)
{
lean_object* v___x_4133_; 
lean_dec_ref(v_resolve_4123_);
if (v_isShared_4129_ == 0)
{
v___x_4133_ = v___x_4128_;
goto v_reusejp_4132_;
}
else
{
lean_object* v_reuseFailAlloc_4134_; 
v_reuseFailAlloc_4134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4134_, 0, v_fst_4125_);
lean_ctor_set(v_reuseFailAlloc_4134_, 1, v_snd_4126_);
v___x_4133_ = v_reuseFailAlloc_4134_;
goto v_reusejp_4132_;
}
v_reusejp_4132_:
{
return v___x_4133_;
}
}
else
{
lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v_snd_4137_; lean_object* v_fst_4138_; lean_object* v___x_4140_; uint8_t v_isShared_4141_; uint8_t v_isSharedCheck_4185_; 
lean_del_object(v___x_4128_);
v___x_4135_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v___x_4136_ = lean_array_get(v___x_4135_, v___y_4122_, v_snd_4126_);
v_snd_4137_ = lean_ctor_get(v___x_4136_, 1);
v_fst_4138_ = lean_ctor_get(v___x_4136_, 0);
v_isSharedCheck_4185_ = !lean_is_exclusive(v___x_4136_);
if (v_isSharedCheck_4185_ == 0)
{
v___x_4140_ = v___x_4136_;
v_isShared_4141_ = v_isSharedCheck_4185_;
goto v_resetjp_4139_;
}
else
{
lean_inc(v_snd_4137_);
lean_inc(v_fst_4138_);
lean_dec(v___x_4136_);
v___x_4140_ = lean_box(0);
v_isShared_4141_ = v_isSharedCheck_4185_;
goto v_resetjp_4139_;
}
v_resetjp_4139_:
{
lean_object* v_fst_4142_; lean_object* v_snd_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; uint8_t v___x_4153_; 
v_fst_4142_ = lean_ctor_get(v_snd_4137_, 0);
v_snd_4143_ = lean_ctor_get(v_snd_4137_, 1);
v___x_4144_ = lean_unsigned_to_nat(1u);
v___x_4145_ = lean_nat_add(v_snd_4126_, v___x_4144_);
lean_dec(v_snd_4126_);
v___x_4153_ = lean_nat_dec_eq(v___x_4145_, v___x_4130_);
if (v___x_4153_ == 0)
{
lean_object* v___x_4154_; lean_object* v_fst_4155_; lean_object* v___x_4157_; uint8_t v_isShared_4158_; uint8_t v_isSharedCheck_4183_; 
v___x_4154_ = lean_array_get(v___x_4135_, v___y_4122_, v___x_4145_);
v_fst_4155_ = lean_ctor_get(v___x_4154_, 0);
v_isSharedCheck_4183_ = !lean_is_exclusive(v___x_4154_);
if (v_isSharedCheck_4183_ == 0)
{
lean_object* v_unused_4184_; 
v_unused_4184_ = lean_ctor_get(v___x_4154_, 1);
lean_dec(v_unused_4184_);
v___x_4157_ = v___x_4154_;
v_isShared_4158_ = v_isSharedCheck_4183_;
goto v_resetjp_4156_;
}
else
{
lean_inc(v_fst_4155_);
lean_dec(v___x_4154_);
v___x_4157_ = lean_box(0);
v_isShared_4158_ = v_isSharedCheck_4183_;
goto v_resetjp_4156_;
}
v_resetjp_4156_:
{
uint64_t v___x_4159_; uint64_t v___x_4160_; uint8_t v___x_4161_; 
v___x_4159_ = lean_unbox_uint64(v_fst_4155_);
lean_dec(v_fst_4155_);
v___x_4160_ = lean_unbox_uint64(v_fst_4138_);
v___x_4161_ = lean_uint64_dec_eq(v___x_4159_, v___x_4160_);
if (v___x_4161_ == 0)
{
lean_inc(v_snd_4143_);
lean_inc(v_fst_4142_);
lean_del_object(v___x_4157_);
lean_dec(v_fst_4138_);
lean_dec(v_snd_4137_);
goto v___jp_4146_;
}
else
{
lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4166_; 
lean_del_object(v___x_4140_);
v___x_4162_ = lean_mk_empty_array_with_capacity(v___x_4144_);
lean_inc_ref(v___x_4162_);
v___x_4163_ = lean_array_push(v___x_4162_, v_snd_4137_);
v___x_4164_ = lean_array_push(v___x_4162_, v___x_4163_);
lean_inc(v___x_4145_);
if (v_isShared_4158_ == 0)
{
lean_ctor_set(v___x_4157_, 1, v___x_4164_);
lean_ctor_set(v___x_4157_, 0, v___x_4145_);
v___x_4166_ = v___x_4157_;
goto v_reusejp_4165_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v___x_4145_);
lean_ctor_set(v_reuseFailAlloc_4182_, 1, v___x_4164_);
v___x_4166_ = v_reuseFailAlloc_4182_;
goto v_reusejp_4165_;
}
v_reusejp_4165_:
{
uint64_t v___x_4167_; lean_object* v___x_4168_; lean_object* v_fst_4169_; lean_object* v_snd_4170_; lean_object* v___x_4172_; uint8_t v_isShared_4173_; uint8_t v_isSharedCheck_4181_; 
v___x_4167_ = lean_unbox_uint64(v_fst_4138_);
lean_dec(v_fst_4138_);
v___x_4168_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_4130_, v___y_4122_, v___x_4167_, v___x_4145_, v___x_4166_);
lean_dec(v___x_4145_);
v_fst_4169_ = lean_ctor_get(v___x_4168_, 0);
v_snd_4170_ = lean_ctor_get(v___x_4168_, 1);
v_isSharedCheck_4181_ = !lean_is_exclusive(v___x_4168_);
if (v_isSharedCheck_4181_ == 0)
{
v___x_4172_ = v___x_4168_;
v_isShared_4173_ = v_isSharedCheck_4181_;
goto v_resetjp_4171_;
}
else
{
lean_inc(v_snd_4170_);
lean_inc(v_fst_4169_);
lean_dec(v___x_4168_);
v___x_4172_ = lean_box(0);
v_isShared_4173_ = v_isSharedCheck_4181_;
goto v_resetjp_4171_;
}
v_resetjp_4171_:
{
size_t v___x_4174_; size_t v_sz_4175_; lean_object* v___x_4176_; lean_object* v___x_4178_; 
v___x_4174_ = ((size_t)0ULL);
v_sz_4175_ = lean_array_size(v_snd_4170_);
lean_inc_ref(v_resolve_4123_);
v___x_4176_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_4123_, v_snd_4170_, v_sz_4175_, v___x_4174_, v_fst_4125_);
lean_dec(v_snd_4170_);
if (v_isShared_4173_ == 0)
{
lean_ctor_set(v___x_4172_, 1, v_fst_4169_);
lean_ctor_set(v___x_4172_, 0, v___x_4176_);
v___x_4178_ = v___x_4172_;
goto v_reusejp_4177_;
}
else
{
lean_object* v_reuseFailAlloc_4180_; 
v_reuseFailAlloc_4180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4180_, 0, v___x_4176_);
lean_ctor_set(v_reuseFailAlloc_4180_, 1, v_fst_4169_);
v___x_4178_ = v_reuseFailAlloc_4180_;
goto v_reusejp_4177_;
}
v_reusejp_4177_:
{
v_a_4124_ = v___x_4178_;
goto _start;
}
}
}
}
}
}
else
{
lean_inc(v_snd_4143_);
lean_inc(v_fst_4142_);
lean_dec(v_fst_4138_);
lean_dec(v_snd_4137_);
goto v___jp_4146_;
}
v___jp_4146_:
{
lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4150_; 
v___x_4147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4147_, 0, v_fst_4142_);
lean_ctor_set(v___x_4147_, 1, v_snd_4143_);
v___x_4148_ = lean_array_push(v_fst_4125_, v___x_4147_);
if (v_isShared_4141_ == 0)
{
lean_ctor_set(v___x_4140_, 1, v___x_4145_);
lean_ctor_set(v___x_4140_, 0, v___x_4148_);
v___x_4150_ = v___x_4140_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4152_; 
v_reuseFailAlloc_4152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4152_, 0, v___x_4148_);
lean_ctor_set(v_reuseFailAlloc_4152_, 1, v___x_4145_);
v___x_4150_ = v_reuseFailAlloc_4152_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
v_a_4124_ = v___x_4150_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(lean_object* v___y_4187_, lean_object* v_resolve_4188_, lean_object* v_a_4189_){
_start:
{
lean_object* v_fst_4190_; lean_object* v_snd_4191_; lean_object* v___x_4193_; uint8_t v_isShared_4194_; uint8_t v_isSharedCheck_4251_; 
v_fst_4190_ = lean_ctor_get(v_a_4189_, 0);
v_snd_4191_ = lean_ctor_get(v_a_4189_, 1);
v_isSharedCheck_4251_ = !lean_is_exclusive(v_a_4189_);
if (v_isSharedCheck_4251_ == 0)
{
v___x_4193_ = v_a_4189_;
v_isShared_4194_ = v_isSharedCheck_4251_;
goto v_resetjp_4192_;
}
else
{
lean_inc(v_snd_4191_);
lean_inc(v_fst_4190_);
lean_dec(v_a_4189_);
v___x_4193_ = lean_box(0);
v_isShared_4194_ = v_isSharedCheck_4251_;
goto v_resetjp_4192_;
}
v_resetjp_4192_:
{
lean_object* v___x_4195_; uint8_t v___x_4196_; 
v___x_4195_ = lean_array_get_size(v___y_4187_);
v___x_4196_ = lean_nat_dec_lt(v_snd_4191_, v___x_4195_);
if (v___x_4196_ == 0)
{
lean_object* v___x_4198_; 
lean_dec_ref(v_resolve_4188_);
if (v_isShared_4194_ == 0)
{
v___x_4198_ = v___x_4193_;
goto v_reusejp_4197_;
}
else
{
lean_object* v_reuseFailAlloc_4199_; 
v_reuseFailAlloc_4199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4199_, 0, v_fst_4190_);
lean_ctor_set(v_reuseFailAlloc_4199_, 1, v_snd_4191_);
v___x_4198_ = v_reuseFailAlloc_4199_;
goto v_reusejp_4197_;
}
v_reusejp_4197_:
{
return v___x_4198_;
}
}
else
{
lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v_snd_4202_; lean_object* v_fst_4203_; lean_object* v___x_4205_; uint8_t v_isShared_4206_; uint8_t v_isSharedCheck_4250_; 
lean_del_object(v___x_4193_);
v___x_4200_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3);
v___x_4201_ = lean_array_get(v___x_4200_, v___y_4187_, v_snd_4191_);
v_snd_4202_ = lean_ctor_get(v___x_4201_, 1);
v_fst_4203_ = lean_ctor_get(v___x_4201_, 0);
v_isSharedCheck_4250_ = !lean_is_exclusive(v___x_4201_);
if (v_isSharedCheck_4250_ == 0)
{
v___x_4205_ = v___x_4201_;
v_isShared_4206_ = v_isSharedCheck_4250_;
goto v_resetjp_4204_;
}
else
{
lean_inc(v_snd_4202_);
lean_inc(v_fst_4203_);
lean_dec(v___x_4201_);
v___x_4205_ = lean_box(0);
v_isShared_4206_ = v_isSharedCheck_4250_;
goto v_resetjp_4204_;
}
v_resetjp_4204_:
{
lean_object* v_fst_4207_; lean_object* v_snd_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; uint8_t v___x_4218_; 
v_fst_4207_ = lean_ctor_get(v_snd_4202_, 0);
v_snd_4208_ = lean_ctor_get(v_snd_4202_, 1);
v___x_4209_ = lean_unsigned_to_nat(1u);
v___x_4210_ = lean_nat_add(v_snd_4191_, v___x_4209_);
lean_dec(v_snd_4191_);
v___x_4218_ = lean_nat_dec_eq(v___x_4210_, v___x_4195_);
if (v___x_4218_ == 0)
{
lean_object* v___x_4219_; lean_object* v_fst_4220_; lean_object* v___x_4222_; uint8_t v_isShared_4223_; uint8_t v_isSharedCheck_4248_; 
v___x_4219_ = lean_array_get(v___x_4200_, v___y_4187_, v___x_4210_);
v_fst_4220_ = lean_ctor_get(v___x_4219_, 0);
v_isSharedCheck_4248_ = !lean_is_exclusive(v___x_4219_);
if (v_isSharedCheck_4248_ == 0)
{
lean_object* v_unused_4249_; 
v_unused_4249_ = lean_ctor_get(v___x_4219_, 1);
lean_dec(v_unused_4249_);
v___x_4222_ = v___x_4219_;
v_isShared_4223_ = v_isSharedCheck_4248_;
goto v_resetjp_4221_;
}
else
{
lean_inc(v_fst_4220_);
lean_dec(v___x_4219_);
v___x_4222_ = lean_box(0);
v_isShared_4223_ = v_isSharedCheck_4248_;
goto v_resetjp_4221_;
}
v_resetjp_4221_:
{
uint64_t v___x_4224_; uint64_t v___x_4225_; uint8_t v___x_4226_; 
v___x_4224_ = lean_unbox_uint64(v_fst_4220_);
lean_dec(v_fst_4220_);
v___x_4225_ = lean_unbox_uint64(v_fst_4203_);
v___x_4226_ = lean_uint64_dec_eq(v___x_4224_, v___x_4225_);
if (v___x_4226_ == 0)
{
lean_inc(v_snd_4208_);
lean_inc(v_fst_4207_);
lean_del_object(v___x_4222_);
lean_dec(v_fst_4203_);
lean_dec(v_snd_4202_);
goto v___jp_4211_;
}
else
{
lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4231_; 
lean_del_object(v___x_4205_);
v___x_4227_ = lean_mk_empty_array_with_capacity(v___x_4209_);
lean_inc_ref(v___x_4227_);
v___x_4228_ = lean_array_push(v___x_4227_, v_snd_4202_);
v___x_4229_ = lean_array_push(v___x_4227_, v___x_4228_);
lean_inc(v___x_4210_);
if (v_isShared_4223_ == 0)
{
lean_ctor_set(v___x_4222_, 1, v___x_4229_);
lean_ctor_set(v___x_4222_, 0, v___x_4210_);
v___x_4231_ = v___x_4222_;
goto v_reusejp_4230_;
}
else
{
lean_object* v_reuseFailAlloc_4247_; 
v_reuseFailAlloc_4247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4247_, 0, v___x_4210_);
lean_ctor_set(v_reuseFailAlloc_4247_, 1, v___x_4229_);
v___x_4231_ = v_reuseFailAlloc_4247_;
goto v_reusejp_4230_;
}
v_reusejp_4230_:
{
uint64_t v___x_4232_; lean_object* v___x_4233_; lean_object* v_fst_4234_; lean_object* v_snd_4235_; lean_object* v___x_4237_; uint8_t v_isShared_4238_; uint8_t v_isSharedCheck_4246_; 
v___x_4232_ = lean_unbox_uint64(v_fst_4203_);
lean_dec(v_fst_4203_);
v___x_4233_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v___x_4195_, v___y_4187_, v___x_4232_, v___x_4210_, v___x_4231_);
lean_dec(v___x_4210_);
v_fst_4234_ = lean_ctor_get(v___x_4233_, 0);
v_snd_4235_ = lean_ctor_get(v___x_4233_, 1);
v_isSharedCheck_4246_ = !lean_is_exclusive(v___x_4233_);
if (v_isSharedCheck_4246_ == 0)
{
v___x_4237_ = v___x_4233_;
v_isShared_4238_ = v_isSharedCheck_4246_;
goto v_resetjp_4236_;
}
else
{
lean_inc(v_snd_4235_);
lean_inc(v_fst_4234_);
lean_dec(v___x_4233_);
v___x_4237_ = lean_box(0);
v_isShared_4238_ = v_isSharedCheck_4246_;
goto v_resetjp_4236_;
}
v_resetjp_4236_:
{
size_t v___x_4239_; size_t v_sz_4240_; lean_object* v___x_4241_; lean_object* v___x_4243_; 
v___x_4239_ = ((size_t)0ULL);
v_sz_4240_ = lean_array_size(v_snd_4235_);
lean_inc_ref(v_resolve_4188_);
v___x_4241_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_4188_, v_snd_4235_, v_sz_4240_, v___x_4239_, v_fst_4190_);
lean_dec(v_snd_4235_);
if (v_isShared_4238_ == 0)
{
lean_ctor_set(v___x_4237_, 1, v_fst_4234_);
lean_ctor_set(v___x_4237_, 0, v___x_4241_);
v___x_4243_ = v___x_4237_;
goto v_reusejp_4242_;
}
else
{
lean_object* v_reuseFailAlloc_4245_; 
v_reuseFailAlloc_4245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4245_, 0, v___x_4241_);
lean_ctor_set(v_reuseFailAlloc_4245_, 1, v_fst_4234_);
v___x_4243_ = v_reuseFailAlloc_4245_;
goto v_reusejp_4242_;
}
v_reusejp_4242_:
{
lean_object* v___x_4244_; 
v___x_4244_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(v___y_4187_, v_resolve_4188_, v___x_4243_);
return v___x_4244_;
}
}
}
}
}
}
else
{
lean_inc(v_snd_4208_);
lean_inc(v_fst_4207_);
lean_dec(v_fst_4203_);
lean_dec(v_snd_4202_);
goto v___jp_4211_;
}
v___jp_4211_:
{
lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4215_; 
v___x_4212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4212_, 0, v_fst_4207_);
lean_ctor_set(v___x_4212_, 1, v_snd_4208_);
v___x_4213_ = lean_array_push(v_fst_4190_, v___x_4212_);
if (v_isShared_4206_ == 0)
{
lean_ctor_set(v___x_4205_, 1, v___x_4210_);
lean_ctor_set(v___x_4205_, 0, v___x_4213_);
v___x_4215_ = v___x_4205_;
goto v_reusejp_4214_;
}
else
{
lean_object* v_reuseFailAlloc_4217_; 
v_reuseFailAlloc_4217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4217_, 0, v___x_4213_);
lean_ctor_set(v_reuseFailAlloc_4217_, 1, v___x_4210_);
v___x_4215_ = v_reuseFailAlloc_4217_;
goto v_reusejp_4214_;
}
v_reusejp_4214_:
{
lean_object* v___x_4216_; 
v___x_4216_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(v___y_4187_, v_resolve_4188_, v___x_4215_);
return v___x_4216_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(lean_object* v_resolve_4252_, lean_object* v_cands_4253_){
_start:
{
lean_object* v___x_4254_; lean_object* v___y_4256_; size_t v_sz_4269_; size_t v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___y_4276_; lean_object* v___y_4277_; uint8_t v___x_4279_; 
v___x_4254_ = lean_unsigned_to_nat(0u);
v_sz_4269_ = lean_array_size(v_cands_4253_);
v___x_4270_ = ((size_t)0ULL);
v___x_4271_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_cands_4253_, v_sz_4269_, v___x_4270_, v___x_4254_);
v___x_4272_ = lean_mk_empty_array_with_capacity(v___x_4271_);
lean_dec(v___x_4271_);
v___x_4273_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_cands_4253_, v_sz_4269_, v___x_4270_, v___x_4272_);
v___x_4274_ = lean_array_get_size(v___x_4273_);
v___x_4279_ = lean_nat_dec_eq(v___x_4274_, v___x_4254_);
if (v___x_4279_ == 0)
{
lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___y_4283_; uint8_t v___x_4285_; 
v___x_4280_ = lean_unsigned_to_nat(1u);
v___x_4281_ = lean_nat_sub(v___x_4274_, v___x_4280_);
v___x_4285_ = lean_nat_dec_le(v___x_4254_, v___x_4281_);
if (v___x_4285_ == 0)
{
lean_inc(v___x_4281_);
v___y_4283_ = v___x_4281_;
goto v___jp_4282_;
}
else
{
v___y_4283_ = v___x_4254_;
goto v___jp_4282_;
}
v___jp_4282_:
{
uint8_t v___x_4284_; 
v___x_4284_ = lean_nat_dec_le(v___y_4283_, v___x_4281_);
if (v___x_4284_ == 0)
{
lean_dec(v___x_4281_);
lean_inc(v___y_4283_);
v___y_4276_ = v___y_4283_;
v___y_4277_ = v___y_4283_;
goto v___jp_4275_;
}
else
{
v___y_4276_ = v___y_4283_;
v___y_4277_ = v___x_4281_;
goto v___jp_4275_;
}
}
}
else
{
v___y_4256_ = v___x_4273_;
goto v___jp_4255_;
}
v___jp_4255_:
{
lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v_fst_4259_; lean_object* v___x_4261_; uint8_t v_isShared_4262_; uint8_t v_isSharedCheck_4267_; 
v___x_4257_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___closed__0));
v___x_4258_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(v___y_4256_, v_resolve_4252_, v___x_4257_);
lean_dec_ref(v___y_4256_);
v_fst_4259_ = lean_ctor_get(v___x_4258_, 0);
v_isSharedCheck_4267_ = !lean_is_exclusive(v___x_4258_);
if (v_isSharedCheck_4267_ == 0)
{
lean_object* v_unused_4268_; 
v_unused_4268_ = lean_ctor_get(v___x_4258_, 1);
lean_dec(v_unused_4268_);
v___x_4261_ = v___x_4258_;
v_isShared_4262_ = v_isSharedCheck_4267_;
goto v_resetjp_4260_;
}
else
{
lean_inc(v_fst_4259_);
lean_dec(v___x_4258_);
v___x_4261_ = lean_box(0);
v_isShared_4262_ = v_isSharedCheck_4267_;
goto v_resetjp_4260_;
}
v_resetjp_4260_:
{
lean_object* v___x_4263_; lean_object* v___x_4265_; 
v___x_4263_ = l___private_Lean_ConstTrie_0__Lean_buildChildIndex___at___00Lean_ImportedConsts_mkMerged_spec__0___redArg(v_fst_4259_);
if (v_isShared_4262_ == 0)
{
lean_ctor_set(v___x_4261_, 1, v___x_4263_);
v___x_4265_ = v___x_4261_;
goto v_reusejp_4264_;
}
else
{
lean_object* v_reuseFailAlloc_4266_; 
v_reuseFailAlloc_4266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4266_, 0, v_fst_4259_);
lean_ctor_set(v_reuseFailAlloc_4266_, 1, v___x_4263_);
v___x_4265_ = v_reuseFailAlloc_4266_;
goto v_reusejp_4264_;
}
v_reusejp_4264_:
{
return v___x_4265_;
}
}
}
v___jp_4275_:
{
lean_object* v___x_4278_; 
v___x_4278_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__7___redArg(v___x_4274_, v___x_4273_, v___y_4276_, v___y_4277_);
lean_dec(v___y_4277_);
v___y_4256_ = v___x_4278_;
goto v___jp_4255_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(lean_object* v_resolve_4286_, lean_object* v_cands_4287_, lean_object* v_x_4288_){
_start:
{
lean_object* v___x_4289_; 
v___x_4289_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_4286_, v_cands_4287_);
return v___x_4289_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg___boxed(lean_object* v_resolve_4290_, lean_object* v_as_4291_, lean_object* v_sz_4292_, lean_object* v_i_4293_, lean_object* v_b_4294_){
_start:
{
size_t v_sz_boxed_4295_; size_t v_i_boxed_4296_; lean_object* v_res_4297_; 
v_sz_boxed_4295_ = lean_unbox_usize(v_sz_4292_);
lean_dec(v_sz_4292_);
v_i_boxed_4296_ = lean_unbox_usize(v_i_4293_);
lean_dec(v_i_4293_);
v_res_4297_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_4290_, v_as_4291_, v_sz_boxed_4295_, v_i_boxed_4296_, v_b_4294_);
lean_dec_ref(v_as_4291_);
return v_res_4297_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___boxed(lean_object* v_resolve_4298_, lean_object* v_as_4299_, lean_object* v_sz_4300_, lean_object* v_i_4301_, lean_object* v_b_4302_){
_start:
{
size_t v_sz_boxed_4303_; size_t v_i_boxed_4304_; lean_object* v_res_4305_; 
v_sz_boxed_4303_ = lean_unbox_usize(v_sz_4300_);
lean_dec(v_sz_4300_);
v_i_boxed_4304_ = lean_unbox_usize(v_i_4301_);
lean_dec(v_i_4301_);
v_res_4305_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_4298_, v_as_4299_, v_sz_boxed_4303_, v_i_boxed_4304_, v_b_4302_);
lean_dec_ref(v_as_4299_);
return v_res_4305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___boxed(lean_object* v_resolve_4306_, lean_object* v_cands_4307_){
_start:
{
lean_object* v_res_4308_; 
v_res_4308_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_4306_, v_cands_4307_);
lean_dec_ref(v_cands_4307_);
return v_res_4308_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg___boxed(lean_object* v___y_4309_, lean_object* v_resolve_4310_, lean_object* v_a_4311_){
_start:
{
lean_object* v_res_4312_; 
v_res_4312_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(v___y_4309_, v_resolve_4310_, v_a_4311_);
lean_dec_ref(v___y_4309_);
return v_res_4312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg___boxed(lean_object* v___y_4313_, lean_object* v_resolve_4314_, lean_object* v_a_4315_){
_start:
{
lean_object* v_res_4316_; 
v_res_4316_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(v___y_4313_, v_resolve_4314_, v_a_4315_);
lean_dec_ref(v___y_4313_);
return v_res_4316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(lean_object* v_00_u03b1_4317_, lean_object* v_resolve_4318_, lean_object* v_cands_4319_){
_start:
{
lean_object* v___x_4320_; 
v___x_4320_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_4318_, v_cands_4319_);
return v___x_4320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___boxed(lean_object* v_00_u03b1_4321_, lean_object* v_resolve_4322_, lean_object* v_cands_4323_){
_start:
{
lean_object* v_res_4324_; 
v_res_4324_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(v_00_u03b1_4321_, v_resolve_4322_, v_cands_4323_);
lean_dec_ref(v_cands_4323_);
return v_res_4324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy(lean_object* v_00_u03b1_4325_, lean_object* v_resolve_4326_, lean_object* v_key_4327_, lean_object* v_cands_4328_){
_start:
{
lean_object* v___x_4329_; 
v___x_4329_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4326_, v_key_4327_, v_cands_4328_);
return v___x_4329_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(lean_object* v_00_u03b1_4330_, lean_object* v_resolve_4331_, lean_object* v_as_4332_, size_t v_sz_4333_, size_t v_i_4334_, lean_object* v_b_4335_){
_start:
{
lean_object* v___x_4336_; 
v___x_4336_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_4331_, v_as_4332_, v_sz_4333_, v_i_4334_, v_b_4335_);
return v___x_4336_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___boxed(lean_object* v_00_u03b1_4337_, lean_object* v_resolve_4338_, lean_object* v_as_4339_, lean_object* v_sz_4340_, lean_object* v_i_4341_, lean_object* v_b_4342_){
_start:
{
size_t v_sz_boxed_4343_; size_t v_i_boxed_4344_; lean_object* v_res_4345_; 
v_sz_boxed_4343_ = lean_unbox_usize(v_sz_4340_);
lean_dec(v_sz_4340_);
v_i_boxed_4344_ = lean_unbox_usize(v_i_4341_);
lean_dec(v_i_4341_);
v_res_4345_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(v_00_u03b1_4337_, v_resolve_4338_, v_as_4339_, v_sz_boxed_4343_, v_i_boxed_4344_, v_b_4342_);
lean_dec_ref(v_as_4339_);
return v_res_4345_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1(lean_object* v_00_u03b1_4346_, lean_object* v___y_4347_, lean_object* v_resolve_4348_, lean_object* v_inst_4349_, lean_object* v_a_4350_){
_start:
{
lean_object* v___x_4351_; 
v___x_4351_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___redArg(v___y_4347_, v_resolve_4348_, v_a_4350_);
return v___x_4351_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1___boxed(lean_object* v_00_u03b1_4352_, lean_object* v___y_4353_, lean_object* v_resolve_4354_, lean_object* v_inst_4355_, lean_object* v_a_4356_){
_start:
{
lean_object* v_res_4357_; 
v_res_4357_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1(v_00_u03b1_4352_, v___y_4353_, v_resolve_4354_, v_inst_4355_, v_a_4356_);
lean_dec_ref(v___y_4353_);
return v_res_4357_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0(lean_object* v_00_u03b1_4358_, lean_object* v_resolve_4359_, lean_object* v_as_4360_, size_t v_sz_4361_, size_t v_i_4362_, lean_object* v_b_4363_){
_start:
{
lean_object* v___x_4364_; 
v___x_4364_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_4359_, v_as_4360_, v_sz_4361_, v_i_4362_, v_b_4363_);
return v___x_4364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___boxed(lean_object* v_00_u03b1_4365_, lean_object* v_resolve_4366_, lean_object* v_as_4367_, lean_object* v_sz_4368_, lean_object* v_i_4369_, lean_object* v_b_4370_){
_start:
{
size_t v_sz_boxed_4371_; size_t v_i_boxed_4372_; lean_object* v_res_4373_; 
v_sz_boxed_4371_ = lean_unbox_usize(v_sz_4368_);
lean_dec(v_sz_4368_);
v_i_boxed_4372_ = lean_unbox_usize(v_i_4369_);
lean_dec(v_i_4369_);
v_res_4373_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0(v_00_u03b1_4365_, v_resolve_4366_, v_as_4367_, v_sz_boxed_4371_, v_i_boxed_4372_, v_b_4370_);
lean_dec_ref(v_as_4367_);
return v_res_4373_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2(lean_object* v_00_u03b1_4374_, lean_object* v___y_4375_, lean_object* v_resolve_4376_, lean_object* v_inst_4377_, lean_object* v_a_4378_){
_start:
{
lean_object* v___x_4379_; 
v___x_4379_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___redArg(v___y_4375_, v_resolve_4376_, v_a_4378_);
return v___x_4379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2___boxed(lean_object* v_00_u03b1_4380_, lean_object* v___y_4381_, lean_object* v_resolve_4382_, lean_object* v_inst_4383_, lean_object* v_a_4384_){
_start:
{
lean_object* v_res_4385_; 
v_res_4385_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__1_spec__2(v_00_u03b1_4380_, v___y_4381_, v_resolve_4382_, v_inst_4383_, v_a_4384_);
lean_dec_ref(v___y_4381_);
return v_res_4385_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(lean_object* v_trees_4386_, lean_object* v_resolve_4387_){
_start:
{
lean_object* v___x_4388_; lean_object* v___x_4389_; 
v___x_4388_ = lean_box(0);
v___x_4389_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_4387_, v___x_4388_, v_trees_4386_);
return v___x_4389_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy(lean_object* v_00_u03b1_4390_, lean_object* v_trees_4391_, lean_object* v_resolve_4392_){
_start:
{
lean_object* v___x_4393_; 
v___x_4393_ = l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(v_trees_4391_, v_resolve_4392_);
return v___x_4393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg(lean_object* v_n_4395_, lean_object* v_f_4396_, lean_object* v_a_4397_){
_start:
{
switch(lean_obj_tag(v_a_4397_))
{
case 0:
{
lean_dec_ref(v_f_4396_);
return v_a_4397_;
}
case 1:
{
lean_object* v_key_4398_; lean_object* v_entry_x3f_4399_; lean_object* v_children_4400_; lean_object* v_childIndex_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; 
v_key_4398_ = lean_ctor_get(v_a_4397_, 0);
v_entry_x3f_4399_ = lean_ctor_get(v_a_4397_, 1);
v_children_4400_ = lean_ctor_get(v_a_4397_, 2);
v_childIndex_4401_ = lean_ctor_get(v_a_4397_, 3);
v___x_4402_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
v___x_4403_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg___closed__0));
v___x_4404_ = l___private_Lean_ConstTrie_0__Lean_findHashIdx_x3f___redArg(v___x_4402_, v_childIndex_4401_, v_children_4400_, v___x_4403_, v_n_4395_);
if (lean_obj_tag(v___x_4404_) == 0)
{
lean_dec_ref(v_f_4396_);
return v_a_4397_;
}
else
{
lean_object* v_val_4405_; lean_object* v___x_4406_; uint8_t v___x_4407_; 
v_val_4405_ = lean_ctor_get(v___x_4404_, 0);
lean_inc(v_val_4405_);
lean_dec_ref_known(v___x_4404_, 1);
v___x_4406_ = lean_array_get_size(v_children_4400_);
v___x_4407_ = lean_nat_dec_lt(v_val_4405_, v___x_4406_);
if (v___x_4407_ == 0)
{
lean_dec(v_val_4405_);
lean_dec_ref(v_f_4396_);
return v_a_4397_;
}
else
{
lean_object* v___x_4409_; uint8_t v_isShared_4410_; uint8_t v_isSharedCheck_4419_; 
lean_inc_ref(v_childIndex_4401_);
lean_inc_ref(v_children_4400_);
lean_inc(v_entry_x3f_4399_);
lean_inc(v_key_4398_);
v_isSharedCheck_4419_ = !lean_is_exclusive(v_a_4397_);
if (v_isSharedCheck_4419_ == 0)
{
lean_object* v_unused_4420_; lean_object* v_unused_4421_; lean_object* v_unused_4422_; lean_object* v_unused_4423_; 
v_unused_4420_ = lean_ctor_get(v_a_4397_, 3);
lean_dec(v_unused_4420_);
v_unused_4421_ = lean_ctor_get(v_a_4397_, 2);
lean_dec(v_unused_4421_);
v_unused_4422_ = lean_ctor_get(v_a_4397_, 1);
lean_dec(v_unused_4422_);
v_unused_4423_ = lean_ctor_get(v_a_4397_, 0);
lean_dec(v_unused_4423_);
v___x_4409_ = v_a_4397_;
v_isShared_4410_ = v_isSharedCheck_4419_;
goto v_resetjp_4408_;
}
else
{
lean_dec(v_a_4397_);
v___x_4409_ = lean_box(0);
v_isShared_4410_ = v_isSharedCheck_4419_;
goto v_resetjp_4408_;
}
v_resetjp_4408_:
{
lean_object* v_v_4411_; lean_object* v___x_4412_; lean_object* v_xs_x27_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4417_; 
v_v_4411_ = lean_array_fget(v_children_4400_, v_val_4405_);
v___x_4412_ = lean_box(0);
v_xs_x27_4413_ = lean_array_fset(v_children_4400_, v_val_4405_, v___x_4412_);
v___x_4414_ = lean_apply_1(v_f_4396_, v_v_4411_);
v___x_4415_ = lean_array_fset(v_xs_x27_4413_, v_val_4405_, v___x_4414_);
lean_dec(v_val_4405_);
if (v_isShared_4410_ == 0)
{
lean_ctor_set(v___x_4409_, 2, v___x_4415_);
v___x_4417_ = v___x_4409_;
goto v_reusejp_4416_;
}
else
{
lean_object* v_reuseFailAlloc_4418_; 
v_reuseFailAlloc_4418_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4418_, 0, v_key_4398_);
lean_ctor_set(v_reuseFailAlloc_4418_, 1, v_entry_x3f_4399_);
lean_ctor_set(v_reuseFailAlloc_4418_, 2, v___x_4415_);
lean_ctor_set(v_reuseFailAlloc_4418_, 3, v_childIndex_4401_);
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
case 2:
{
lean_object* v_key_4424_; lean_object* v_entry_4425_; lean_object* v_expanded_4426_; lean_object* v___x_4427_; lean_object* v_fst_4428_; lean_object* v_snd_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; 
v_key_4424_ = lean_ctor_get(v_a_4397_, 0);
lean_inc(v_key_4424_);
v_entry_4425_ = lean_ctor_get(v_a_4397_, 1);
lean_inc_ref(v_entry_4425_);
v_expanded_4426_ = lean_ctor_get(v_a_4397_, 2);
lean_inc_ref(v_expanded_4426_);
lean_dec_ref_known(v_a_4397_, 3);
v___x_4427_ = lean_imported_consts_force_shared(v_expanded_4426_);
lean_dec_ref(v_expanded_4426_);
v_fst_4428_ = lean_ctor_get(v___x_4427_, 0);
lean_inc(v_fst_4428_);
v_snd_4429_ = lean_ctor_get(v___x_4427_, 1);
lean_inc(v_snd_4429_);
lean_dec(v___x_4427_);
v___x_4430_ = lean_imported_consts_force_shared(v_entry_4425_);
lean_dec_ref(v_entry_4425_);
v___x_4431_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_4431_, 0, v_key_4424_);
lean_ctor_set(v___x_4431_, 1, v___x_4430_);
lean_ctor_set(v___x_4431_, 2, v_fst_4428_);
lean_ctor_set(v___x_4431_, 3, v_snd_4429_);
v_a_4397_ = v___x_4431_;
goto _start;
}
default: 
{
lean_object* v_tree_4433_; 
v_tree_4433_ = lean_ctor_get(v_a_4397_, 1);
lean_inc_ref(v_tree_4433_);
lean_dec_ref_known(v_a_4397_, 2);
v_a_4397_ = v_tree_4433_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg___boxed(lean_object* v_n_4435_, lean_object* v_f_4436_, lean_object* v_a_4437_){
_start:
{
lean_object* v_res_4438_; 
v_res_4438_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg(v_n_4435_, v_f_4436_, v_a_4437_);
lean_dec(v_n_4435_);
return v_res_4438_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild(lean_object* v_00_u03b1_4439_, lean_object* v_n_4440_, lean_object* v_f_4441_, lean_object* v_a_4442_){
_start:
{
lean_object* v___x_4443_; 
v___x_4443_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___redArg(v_n_4440_, v_f_4441_, v_a_4442_);
return v___x_4443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___boxed(lean_object* v_00_u03b1_4444_, lean_object* v_n_4445_, lean_object* v_f_4446_, lean_object* v_a_4447_){
_start:
{
lean_object* v_res_4448_; 
v_res_4448_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild(v_00_u03b1_4444_, v_n_4445_, v_f_4446_, v_a_4447_);
lean_dec(v_n_4445_);
return v_res_4448_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt___redArg(lean_object* v_t_4449_, lean_object* v_n_4450_, lean_object* v_f_4451_){
_start:
{
if (lean_obj_tag(v_n_4450_) == 0)
{
lean_object* v___x_4452_; 
v___x_4452_ = lean_apply_1(v_f_4451_, v_t_4449_);
return v___x_4452_;
}
else
{
lean_object* v_pre_4453_; lean_object* v___x_4454_; 
v_pre_4453_ = lean_ctor_get(v_n_4450_, 0);
lean_inc(v_pre_4453_);
v___x_4454_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_modifyAt_modifyChild___boxed), 4, 3);
lean_closure_set(v___x_4454_, 0, lean_box(0));
lean_closure_set(v___x_4454_, 1, v_n_4450_);
lean_closure_set(v___x_4454_, 2, v_f_4451_);
v_n_4450_ = v_pre_4453_;
v_f_4451_ = v___x_4454_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt(lean_object* v_00_u03b1_4456_, lean_object* v_t_4457_, lean_object* v_n_4458_, lean_object* v_f_4459_){
_start:
{
lean_object* v___x_4460_; 
v___x_4460_ = l_Lean_ImportedConsts_modifyAt___redArg(v_t_4457_, v_n_4458_, v_f_4459_);
return v___x_4460_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceExpanded___redArg(lean_object* v_x_4461_){
_start:
{
switch(lean_obj_tag(v_x_4461_))
{
case 2:
{
lean_object* v_key_4462_; lean_object* v_entry_4463_; lean_object* v_expanded_4464_; lean_object* v___x_4465_; lean_object* v_fst_4466_; lean_object* v_snd_4467_; lean_object* v___x_4468_; size_t v_sz_4469_; size_t v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; 
v_key_4462_ = lean_ctor_get(v_x_4461_, 0);
lean_inc(v_key_4462_);
v_entry_4463_ = lean_ctor_get(v_x_4461_, 1);
lean_inc_ref(v_entry_4463_);
v_expanded_4464_ = lean_ctor_get(v_x_4461_, 2);
lean_inc_ref(v_expanded_4464_);
lean_dec_ref_known(v_x_4461_, 3);
v___x_4465_ = lean_imported_consts_force_shared(v_expanded_4464_);
lean_dec_ref(v_expanded_4464_);
v_fst_4466_ = lean_ctor_get(v___x_4465_, 0);
lean_inc(v_fst_4466_);
v_snd_4467_ = lean_ctor_get(v___x_4465_, 1);
lean_inc(v_snd_4467_);
lean_dec(v___x_4465_);
v___x_4468_ = lean_imported_consts_force_shared(v_entry_4463_);
lean_dec_ref(v_entry_4463_);
v_sz_4469_ = lean_array_size(v_fst_4466_);
v___x_4470_ = ((size_t)0ULL);
v___x_4471_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(v_sz_4469_, v___x_4470_, v_fst_4466_);
v___x_4472_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_4472_, 0, v_key_4462_);
lean_ctor_set(v___x_4472_, 1, v___x_4468_);
lean_ctor_set(v___x_4472_, 2, v___x_4471_);
lean_ctor_set(v___x_4472_, 3, v_snd_4467_);
return v___x_4472_;
}
case 1:
{
lean_object* v_key_4473_; lean_object* v_entry_x3f_4474_; lean_object* v_children_4475_; lean_object* v_childIndex_4476_; lean_object* v___x_4478_; uint8_t v_isShared_4479_; uint8_t v_isSharedCheck_4486_; 
v_key_4473_ = lean_ctor_get(v_x_4461_, 0);
v_entry_x3f_4474_ = lean_ctor_get(v_x_4461_, 1);
v_children_4475_ = lean_ctor_get(v_x_4461_, 2);
v_childIndex_4476_ = lean_ctor_get(v_x_4461_, 3);
v_isSharedCheck_4486_ = !lean_is_exclusive(v_x_4461_);
if (v_isSharedCheck_4486_ == 0)
{
v___x_4478_ = v_x_4461_;
v_isShared_4479_ = v_isSharedCheck_4486_;
goto v_resetjp_4477_;
}
else
{
lean_inc(v_childIndex_4476_);
lean_inc(v_children_4475_);
lean_inc(v_entry_x3f_4474_);
lean_inc(v_key_4473_);
lean_dec(v_x_4461_);
v___x_4478_ = lean_box(0);
v_isShared_4479_ = v_isSharedCheck_4486_;
goto v_resetjp_4477_;
}
v_resetjp_4477_:
{
size_t v_sz_4480_; size_t v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4484_; 
v_sz_4480_ = lean_array_size(v_children_4475_);
v___x_4481_ = ((size_t)0ULL);
v___x_4482_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(v_sz_4480_, v___x_4481_, v_children_4475_);
if (v_isShared_4479_ == 0)
{
lean_ctor_set(v___x_4478_, 2, v___x_4482_);
v___x_4484_ = v___x_4478_;
goto v_reusejp_4483_;
}
else
{
lean_object* v_reuseFailAlloc_4485_; 
v_reuseFailAlloc_4485_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4485_, 0, v_key_4473_);
lean_ctor_set(v_reuseFailAlloc_4485_, 1, v_entry_x3f_4474_);
lean_ctor_set(v_reuseFailAlloc_4485_, 2, v___x_4482_);
lean_ctor_set(v_reuseFailAlloc_4485_, 3, v_childIndex_4476_);
v___x_4484_ = v_reuseFailAlloc_4485_;
goto v_reusejp_4483_;
}
v_reusejp_4483_:
{
return v___x_4484_;
}
}
}
case 3:
{
lean_object* v_tree_4487_; 
v_tree_4487_ = lean_ctor_get(v_x_4461_, 1);
lean_inc_ref(v_tree_4487_);
lean_dec_ref_known(v_x_4461_, 2);
v_x_4461_ = v_tree_4487_;
goto _start;
}
default: 
{
return v_x_4461_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(size_t v_sz_4489_, size_t v_i_4490_, lean_object* v_bs_4491_){
_start:
{
uint8_t v___x_4492_; 
v___x_4492_ = lean_usize_dec_lt(v_i_4490_, v_sz_4489_);
if (v___x_4492_ == 0)
{
return v_bs_4491_;
}
else
{
lean_object* v_v_4493_; lean_object* v___x_4494_; lean_object* v_bs_x27_4495_; lean_object* v___x_4496_; size_t v___x_4497_; size_t v___x_4498_; lean_object* v___x_4499_; 
v_v_4493_ = lean_array_uget(v_bs_4491_, v_i_4490_);
v___x_4494_ = lean_unsigned_to_nat(0u);
v_bs_x27_4495_ = lean_array_uset(v_bs_4491_, v_i_4490_, v___x_4494_);
v___x_4496_ = l_Lean_ImportedConsts_forceExpanded___redArg(v_v_4493_);
v___x_4497_ = ((size_t)1ULL);
v___x_4498_ = lean_usize_add(v_i_4490_, v___x_4497_);
v___x_4499_ = lean_array_uset(v_bs_x27_4495_, v_i_4490_, v___x_4496_);
v_i_4490_ = v___x_4498_;
v_bs_4491_ = v___x_4499_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg___boxed(lean_object* v_sz_4501_, lean_object* v_i_4502_, lean_object* v_bs_4503_){
_start:
{
size_t v_sz_boxed_4504_; size_t v_i_boxed_4505_; lean_object* v_res_4506_; 
v_sz_boxed_4504_ = lean_unbox_usize(v_sz_4501_);
lean_dec(v_sz_4501_);
v_i_boxed_4505_ = lean_unbox_usize(v_i_4502_);
lean_dec(v_i_4502_);
v_res_4506_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(v_sz_boxed_4504_, v_i_boxed_4505_, v_bs_4503_);
return v_res_4506_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forceExpanded(lean_object* v_00_u03b1_4507_, lean_object* v_x_4508_){
_start:
{
lean_object* v___x_4509_; 
v___x_4509_ = l_Lean_ImportedConsts_forceExpanded___redArg(v_x_4508_);
return v___x_4509_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0(lean_object* v_00_u03b1_4510_, size_t v_sz_4511_, size_t v_i_4512_, lean_object* v_bs_4513_){
_start:
{
lean_object* v___x_4514_; 
v___x_4514_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___redArg(v_sz_4511_, v_i_4512_, v_bs_4513_);
return v___x_4514_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0___boxed(lean_object* v_00_u03b1_4515_, lean_object* v_sz_4516_, lean_object* v_i_4517_, lean_object* v_bs_4518_){
_start:
{
size_t v_sz_boxed_4519_; size_t v_i_boxed_4520_; lean_object* v_res_4521_; 
v_sz_boxed_4519_ = lean_unbox_usize(v_sz_4516_);
lean_dec(v_sz_4516_);
v_i_boxed_4520_ = lean_unbox_usize(v_i_4517_);
lean_dec(v_i_4517_);
v_res_4521_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_ImportedConsts_forceExpanded_spec__0(v_00_u03b1_4515_, v_sz_boxed_4519_, v_i_boxed_4520_, v_bs_4518_);
return v_res_4521_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__1(lean_object* v_toApplicative_4522_, lean_object* v_children_4523_, lean_object* v_inst_4524_, lean_object* v___f_4525_, lean_object* v_____r_4526_, lean_object* v_s_4527_){
_start:
{
lean_object* v_toPure_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; uint8_t v___x_4531_; 
v_toPure_4528_ = lean_ctor_get(v_toApplicative_4522_, 1);
lean_inc(v_toPure_4528_);
lean_dec_ref(v_toApplicative_4522_);
v___x_4529_ = lean_unsigned_to_nat(0u);
v___x_4530_ = lean_array_get_size(v_children_4523_);
v___x_4531_ = lean_nat_dec_lt(v___x_4529_, v___x_4530_);
if (v___x_4531_ == 0)
{
lean_object* v___x_4532_; 
lean_dec(v___f_4525_);
lean_dec_ref(v_inst_4524_);
lean_dec_ref(v_children_4523_);
v___x_4532_ = lean_apply_2(v_toPure_4528_, lean_box(0), v_s_4527_);
return v___x_4532_;
}
else
{
size_t v___x_4533_; size_t v___x_4534_; lean_object* v___x_4535_; 
lean_dec(v_toPure_4528_);
v___x_4533_ = ((size_t)0ULL);
v___x_4534_ = lean_usize_of_nat(v___x_4530_);
v___x_4535_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_4524_, v___f_4525_, v_children_4523_, v___x_4533_, v___x_4534_, v_s_4527_);
return v___x_4535_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__4(lean_object* v_expanded_4536_, lean_object* v_toApplicative_4537_, lean_object* v_inst_4538_, lean_object* v___f_4539_, lean_object* v_____r_4540_, lean_object* v_s_4541_){
_start:
{
lean_object* v___x_4542_; lean_object* v_fst_4543_; lean_object* v_toPure_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; uint8_t v___x_4547_; 
v___x_4542_ = lean_imported_consts_force_shared(v_expanded_4536_);
v_fst_4543_ = lean_ctor_get(v___x_4542_, 0);
lean_inc(v_fst_4543_);
lean_dec(v___x_4542_);
v_toPure_4544_ = lean_ctor_get(v_toApplicative_4537_, 1);
lean_inc(v_toPure_4544_);
lean_dec_ref(v_toApplicative_4537_);
v___x_4545_ = lean_unsigned_to_nat(0u);
v___x_4546_ = lean_array_get_size(v_fst_4543_);
v___x_4547_ = lean_nat_dec_lt(v___x_4545_, v___x_4546_);
if (v___x_4547_ == 0)
{
lean_object* v___x_4548_; 
lean_dec(v_fst_4543_);
lean_dec(v___f_4539_);
lean_dec_ref(v_inst_4538_);
v___x_4548_ = lean_apply_2(v_toPure_4544_, lean_box(0), v_s_4541_);
return v___x_4548_;
}
else
{
size_t v___x_4549_; size_t v___x_4550_; lean_object* v___x_4551_; 
lean_dec(v_toPure_4544_);
v___x_4549_ = ((size_t)0ULL);
v___x_4550_ = lean_usize_of_nat(v___x_4546_);
v___x_4551_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_4538_, v___f_4539_, v_fst_4543_, v___x_4549_, v___x_4550_, v_s_4541_);
return v___x_4551_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__4___boxed(lean_object* v_expanded_4552_, lean_object* v_toApplicative_4553_, lean_object* v_inst_4554_, lean_object* v___f_4555_, lean_object* v_____r_4556_, lean_object* v_s_4557_){
_start:
{
lean_object* v_res_4558_; 
v_res_4558_ = l_Lean_ImportedConsts_foldlM___redArg___lam__4(v_expanded_4552_, v_toApplicative_4553_, v_inst_4554_, v___f_4555_, v_____r_4556_, v_s_4557_);
lean_dec_ref(v_expanded_4552_);
return v_res_4558_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg(lean_object* v_inst_4559_, lean_object* v_t_4560_, lean_object* v_f_4561_, lean_object* v_init_4562_){
_start:
{
switch(lean_obj_tag(v_t_4560_))
{
case 0:
{
lean_object* v_tree_4563_; lean_object* v___x_4564_; 
v_tree_4563_ = lean_ctor_get(v_t_4560_, 1);
lean_inc_ref(v_tree_4563_);
lean_dec_ref_known(v_t_4560_, 2);
v___x_4564_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_4559_, v_tree_4563_, v_f_4561_, v_init_4562_);
return v___x_4564_;
}
case 1:
{
lean_object* v_toApplicative_4565_; lean_object* v_toBind_4566_; lean_object* v_key_4567_; lean_object* v_entry_x3f_4568_; lean_object* v_children_4569_; lean_object* v___f_4570_; lean_object* v___f_4571_; 
v_toApplicative_4565_ = lean_ctor_get(v_inst_4559_, 0);
lean_inc_ref_n(v_toApplicative_4565_, 2);
v_toBind_4566_ = lean_ctor_get(v_inst_4559_, 1);
v_key_4567_ = lean_ctor_get(v_t_4560_, 0);
lean_inc(v_key_4567_);
v_entry_x3f_4568_ = lean_ctor_get(v_t_4560_, 1);
lean_inc(v_entry_x3f_4568_);
v_children_4569_ = lean_ctor_get(v_t_4560_, 2);
lean_inc_ref_n(v_children_4569_, 2);
lean_dec_ref_known(v_t_4560_, 4);
lean_inc(v_f_4561_);
lean_inc_ref_n(v_inst_4559_, 2);
v___f_4570_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_4570_, 0, v_inst_4559_);
lean_closure_set(v___f_4570_, 1, v_f_4561_);
lean_inc_ref(v___f_4570_);
v___f_4571_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__1), 6, 4);
lean_closure_set(v___f_4571_, 0, v_toApplicative_4565_);
lean_closure_set(v___f_4571_, 1, v_children_4569_);
lean_closure_set(v___f_4571_, 2, v_inst_4559_);
lean_closure_set(v___f_4571_, 3, v___f_4570_);
if (lean_obj_tag(v_entry_x3f_4568_) == 1)
{
lean_object* v_val_4572_; lean_object* v_fst_4573_; lean_object* v___f_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; 
lean_inc(v_toBind_4566_);
lean_dec_ref(v___f_4570_);
lean_dec_ref(v_children_4569_);
lean_dec_ref(v_toApplicative_4565_);
lean_dec_ref(v_inst_4559_);
v_val_4572_ = lean_ctor_get(v_entry_x3f_4568_, 0);
lean_inc(v_val_4572_);
lean_dec_ref_known(v_entry_x3f_4568_, 1);
v_fst_4573_ = lean_ctor_get(v_val_4572_, 0);
lean_inc(v_fst_4573_);
lean_dec(v_val_4572_);
v___f_4574_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4574_, 0, v___f_4571_);
v___x_4575_ = lean_apply_3(v_f_4561_, v_init_4562_, v_key_4567_, v_fst_4573_);
v___x_4576_ = lean_apply_4(v_toBind_4566_, lean_box(0), lean_box(0), v___x_4575_, v___f_4574_);
return v___x_4576_;
}
else
{
lean_object* v___x_4577_; lean_object* v___x_4578_; 
lean_dec_ref(v___f_4571_);
lean_dec(v_entry_x3f_4568_);
lean_dec(v_key_4567_);
lean_dec(v_f_4561_);
v___x_4577_ = lean_box(0);
v___x_4578_ = l_Lean_ImportedConsts_foldlM___redArg___lam__1(v_toApplicative_4565_, v_children_4569_, v_inst_4559_, v___f_4570_, v___x_4577_, v_init_4562_);
return v___x_4578_;
}
}
case 2:
{
lean_object* v_toApplicative_4579_; lean_object* v_toBind_4580_; lean_object* v_key_4581_; lean_object* v_entry_4582_; lean_object* v_expanded_4583_; lean_object* v___f_4584_; lean_object* v___f_4585_; lean_object* v___x_4586_; 
v_toApplicative_4579_ = lean_ctor_get(v_inst_4559_, 0);
lean_inc_ref_n(v_toApplicative_4579_, 2);
v_toBind_4580_ = lean_ctor_get(v_inst_4559_, 1);
v_key_4581_ = lean_ctor_get(v_t_4560_, 0);
lean_inc(v_key_4581_);
v_entry_4582_ = lean_ctor_get(v_t_4560_, 1);
lean_inc_ref(v_entry_4582_);
v_expanded_4583_ = lean_ctor_get(v_t_4560_, 2);
lean_inc_ref_n(v_expanded_4583_, 2);
lean_dec_ref_known(v_t_4560_, 3);
lean_inc(v_f_4561_);
lean_inc_ref_n(v_inst_4559_, 2);
v___f_4584_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_4584_, 0, v_inst_4559_);
lean_closure_set(v___f_4584_, 1, v_f_4561_);
lean_inc_ref(v___f_4584_);
v___f_4585_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_4585_, 0, v_expanded_4583_);
lean_closure_set(v___f_4585_, 1, v_toApplicative_4579_);
lean_closure_set(v___f_4585_, 2, v_inst_4559_);
lean_closure_set(v___f_4585_, 3, v___f_4584_);
v___x_4586_ = lean_imported_consts_force_shared(v_entry_4582_);
lean_dec_ref(v_entry_4582_);
if (lean_obj_tag(v___x_4586_) == 1)
{
lean_object* v_val_4587_; lean_object* v_fst_4588_; lean_object* v___f_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; 
lean_inc(v_toBind_4580_);
lean_dec_ref(v___f_4584_);
lean_dec_ref(v_expanded_4583_);
lean_dec_ref(v_toApplicative_4579_);
lean_dec_ref(v_inst_4559_);
v_val_4587_ = lean_ctor_get(v___x_4586_, 0);
lean_inc(v_val_4587_);
lean_dec_ref_known(v___x_4586_, 1);
v_fst_4588_ = lean_ctor_get(v_val_4587_, 0);
lean_inc(v_fst_4588_);
lean_dec(v_val_4587_);
v___f_4589_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4589_, 0, v___f_4585_);
v___x_4590_ = lean_apply_3(v_f_4561_, v_init_4562_, v_key_4581_, v_fst_4588_);
v___x_4591_ = lean_apply_4(v_toBind_4580_, lean_box(0), lean_box(0), v___x_4590_, v___f_4589_);
return v___x_4591_;
}
else
{
lean_object* v___x_4592_; lean_object* v___x_4593_; 
lean_dec(v___x_4586_);
lean_dec_ref(v___f_4585_);
lean_dec(v_key_4581_);
lean_dec(v_f_4561_);
v___x_4592_ = lean_box(0);
v___x_4593_ = l_Lean_ImportedConsts_foldlM___redArg___lam__4(v_expanded_4583_, v_toApplicative_4579_, v_inst_4559_, v___f_4584_, v___x_4592_, v_init_4562_);
lean_dec_ref(v_expanded_4583_);
return v___x_4593_;
}
}
default: 
{
lean_object* v_tree_4594_; 
v_tree_4594_ = lean_ctor_get(v_t_4560_, 1);
lean_inc_ref(v_tree_4594_);
lean_dec_ref_known(v_t_4560_, 2);
v_t_4560_ = v_tree_4594_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg___lam__0(lean_object* v_inst_4596_, lean_object* v_f_4597_, lean_object* v_s_4598_, lean_object* v_c_4599_){
_start:
{
lean_object* v___x_4600_; 
v___x_4600_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4596_, v_c_4599_, v_f_4597_, v_s_4598_);
return v___x_4600_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM(lean_object* v_m_4601_, lean_object* v_00_u03b1_4602_, lean_object* v_00_u03c3_4603_, lean_object* v_inst_4604_, lean_object* v_t_4605_, lean_object* v_f_4606_, lean_object* v_init_4607_){
_start:
{
lean_object* v___x_4608_; 
v___x_4608_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4604_, v_t_4605_, v_f_4606_, v_init_4607_);
return v___x_4608_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(lean_object* v_t_4609_, lean_object* v_f_4610_, lean_object* v_init_4611_){
_start:
{
lean_object* v_key_4612_; lean_object* v_val_x3f_4613_; lean_object* v_children_4614_; lean_object* v_s_4616_; 
v_key_4612_ = lean_ctor_get(v_t_4609_, 0);
lean_inc(v_key_4612_);
v_val_x3f_4613_ = lean_ctor_get(v_t_4609_, 1);
lean_inc(v_val_x3f_4613_);
v_children_4614_ = lean_ctor_get(v_t_4609_, 2);
lean_inc_ref(v_children_4614_);
lean_dec_ref(v_t_4609_);
if (lean_obj_tag(v_val_x3f_4613_) == 1)
{
lean_object* v_val_4623_; lean_object* v___x_4624_; 
v_val_4623_ = lean_ctor_get(v_val_x3f_4613_, 0);
lean_inc(v_val_4623_);
lean_dec_ref_known(v_val_x3f_4613_, 1);
lean_inc(v_f_4610_);
v___x_4624_ = lean_apply_3(v_f_4610_, v_init_4611_, v_key_4612_, v_val_4623_);
v_s_4616_ = v___x_4624_;
goto v___jp_4615_;
}
else
{
lean_dec(v_val_x3f_4613_);
lean_dec(v_key_4612_);
v_s_4616_ = v_init_4611_;
goto v___jp_4615_;
}
v___jp_4615_:
{
lean_object* v___x_4617_; lean_object* v___x_4618_; uint8_t v___x_4619_; 
v___x_4617_ = lean_unsigned_to_nat(0u);
v___x_4618_ = lean_array_get_size(v_children_4614_);
v___x_4619_ = lean_nat_dec_lt(v___x_4617_, v___x_4618_);
if (v___x_4619_ == 0)
{
lean_dec_ref(v_children_4614_);
lean_dec(v_f_4610_);
return v_s_4616_;
}
else
{
size_t v___x_4620_; size_t v___x_4621_; lean_object* v___x_4622_; 
v___x_4620_ = ((size_t)0ULL);
v___x_4621_ = lean_usize_of_nat(v___x_4618_);
v___x_4622_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_f_4610_, v_children_4614_, v___x_4620_, v___x_4621_, v_s_4616_);
lean_dec_ref(v_children_4614_);
return v___x_4622_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(lean_object* v_f_4625_, lean_object* v_as_4626_, size_t v_i_4627_, size_t v_stop_4628_, lean_object* v_b_4629_){
_start:
{
uint8_t v___x_4630_; 
v___x_4630_ = lean_usize_dec_eq(v_i_4627_, v_stop_4628_);
if (v___x_4630_ == 0)
{
lean_object* v___x_4631_; lean_object* v___x_4632_; size_t v___x_4633_; size_t v___x_4634_; 
v___x_4631_ = lean_array_uget_borrowed(v_as_4626_, v_i_4627_);
lean_inc(v_f_4625_);
lean_inc(v___x_4631_);
v___x_4632_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v___x_4631_, v_f_4625_, v_b_4629_);
v___x_4633_ = ((size_t)1ULL);
v___x_4634_ = lean_usize_add(v_i_4627_, v___x_4633_);
v_i_4627_ = v___x_4634_;
v_b_4629_ = v___x_4632_;
goto _start;
}
else
{
lean_dec(v_f_4625_);
return v_b_4629_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_4636_, lean_object* v_as_4637_, lean_object* v_i_4638_, lean_object* v_stop_4639_, lean_object* v_b_4640_){
_start:
{
size_t v_i_boxed_4641_; size_t v_stop_boxed_4642_; lean_object* v_res_4643_; 
v_i_boxed_4641_ = lean_unbox_usize(v_i_4638_);
lean_dec(v_i_4638_);
v_stop_boxed_4642_ = lean_unbox_usize(v_stop_4639_);
lean_dec(v_stop_4639_);
v_res_4643_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_f_4636_, v_as_4637_, v_i_boxed_4641_, v_stop_boxed_4642_, v_b_4640_);
lean_dec_ref(v_as_4637_);
return v_res_4643_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(lean_object* v_t_4644_, lean_object* v_f_4645_, lean_object* v_init_4646_){
_start:
{
switch(lean_obj_tag(v_t_4644_))
{
case 0:
{
lean_object* v_tree_4647_; lean_object* v___x_4648_; 
v_tree_4647_ = lean_ctor_get(v_t_4644_, 1);
lean_inc_ref(v_tree_4647_);
lean_dec_ref_known(v_t_4644_, 2);
v___x_4648_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_tree_4647_, v_f_4645_, v_init_4646_);
return v___x_4648_;
}
case 1:
{
lean_object* v_key_4649_; lean_object* v_entry_x3f_4650_; lean_object* v_children_4651_; lean_object* v_s_4653_; 
v_key_4649_ = lean_ctor_get(v_t_4644_, 0);
lean_inc(v_key_4649_);
v_entry_x3f_4650_ = lean_ctor_get(v_t_4644_, 1);
lean_inc(v_entry_x3f_4650_);
v_children_4651_ = lean_ctor_get(v_t_4644_, 2);
lean_inc_ref(v_children_4651_);
lean_dec_ref_known(v_t_4644_, 4);
if (lean_obj_tag(v_entry_x3f_4650_) == 1)
{
lean_object* v_val_4660_; lean_object* v_fst_4661_; lean_object* v___x_4662_; 
v_val_4660_ = lean_ctor_get(v_entry_x3f_4650_, 0);
lean_inc(v_val_4660_);
lean_dec_ref_known(v_entry_x3f_4650_, 1);
v_fst_4661_ = lean_ctor_get(v_val_4660_, 0);
lean_inc(v_fst_4661_);
lean_dec(v_val_4660_);
lean_inc(v_f_4645_);
v___x_4662_ = lean_apply_3(v_f_4645_, v_init_4646_, v_key_4649_, v_fst_4661_);
v_s_4653_ = v___x_4662_;
goto v___jp_4652_;
}
else
{
lean_dec(v_entry_x3f_4650_);
lean_dec(v_key_4649_);
v_s_4653_ = v_init_4646_;
goto v___jp_4652_;
}
v___jp_4652_:
{
lean_object* v___x_4654_; lean_object* v___x_4655_; uint8_t v___x_4656_; 
v___x_4654_ = lean_unsigned_to_nat(0u);
v___x_4655_ = lean_array_get_size(v_children_4651_);
v___x_4656_ = lean_nat_dec_lt(v___x_4654_, v___x_4655_);
if (v___x_4656_ == 0)
{
lean_dec_ref(v_children_4651_);
lean_dec(v_f_4645_);
return v_s_4653_;
}
else
{
size_t v___x_4657_; size_t v___x_4658_; lean_object* v___x_4659_; 
v___x_4657_ = ((size_t)0ULL);
v___x_4658_ = lean_usize_of_nat(v___x_4655_);
v___x_4659_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4645_, v_children_4651_, v___x_4657_, v___x_4658_, v_s_4653_);
lean_dec_ref(v_children_4651_);
return v___x_4659_;
}
}
}
case 2:
{
lean_object* v_key_4663_; lean_object* v_entry_4664_; lean_object* v_expanded_4665_; lean_object* v_s_4667_; lean_object* v___x_4676_; 
v_key_4663_ = lean_ctor_get(v_t_4644_, 0);
lean_inc(v_key_4663_);
v_entry_4664_ = lean_ctor_get(v_t_4644_, 1);
lean_inc_ref(v_entry_4664_);
v_expanded_4665_ = lean_ctor_get(v_t_4644_, 2);
lean_inc_ref(v_expanded_4665_);
lean_dec_ref_known(v_t_4644_, 3);
v___x_4676_ = lean_imported_consts_force_shared(v_entry_4664_);
lean_dec_ref(v_entry_4664_);
if (lean_obj_tag(v___x_4676_) == 1)
{
lean_object* v_val_4677_; lean_object* v_fst_4678_; lean_object* v___x_4679_; 
v_val_4677_ = lean_ctor_get(v___x_4676_, 0);
lean_inc(v_val_4677_);
lean_dec_ref_known(v___x_4676_, 1);
v_fst_4678_ = lean_ctor_get(v_val_4677_, 0);
lean_inc(v_fst_4678_);
lean_dec(v_val_4677_);
lean_inc(v_f_4645_);
v___x_4679_ = lean_apply_3(v_f_4645_, v_init_4646_, v_key_4663_, v_fst_4678_);
v_s_4667_ = v___x_4679_;
goto v___jp_4666_;
}
else
{
lean_dec(v___x_4676_);
lean_dec(v_key_4663_);
v_s_4667_ = v_init_4646_;
goto v___jp_4666_;
}
v___jp_4666_:
{
lean_object* v___x_4668_; lean_object* v_fst_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; uint8_t v___x_4672_; 
v___x_4668_ = lean_imported_consts_force_shared(v_expanded_4665_);
lean_dec_ref(v_expanded_4665_);
v_fst_4669_ = lean_ctor_get(v___x_4668_, 0);
lean_inc(v_fst_4669_);
lean_dec(v___x_4668_);
v___x_4670_ = lean_unsigned_to_nat(0u);
v___x_4671_ = lean_array_get_size(v_fst_4669_);
v___x_4672_ = lean_nat_dec_lt(v___x_4670_, v___x_4671_);
if (v___x_4672_ == 0)
{
lean_dec(v_fst_4669_);
lean_dec(v_f_4645_);
return v_s_4667_;
}
else
{
size_t v___x_4673_; size_t v___x_4674_; lean_object* v___x_4675_; 
v___x_4673_ = ((size_t)0ULL);
v___x_4674_ = lean_usize_of_nat(v___x_4671_);
v___x_4675_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4645_, v_fst_4669_, v___x_4673_, v___x_4674_, v_s_4667_);
lean_dec(v_fst_4669_);
return v___x_4675_;
}
}
}
default: 
{
lean_object* v_tree_4680_; 
v_tree_4680_ = lean_ctor_get(v_t_4644_, 1);
lean_inc_ref(v_tree_4680_);
lean_dec_ref_known(v_t_4644_, 2);
v_t_4644_ = v_tree_4680_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(lean_object* v_f_4682_, lean_object* v_as_4683_, size_t v_i_4684_, size_t v_stop_4685_, lean_object* v_b_4686_){
_start:
{
uint8_t v___x_4687_; 
v___x_4687_ = lean_usize_dec_eq(v_i_4684_, v_stop_4685_);
if (v___x_4687_ == 0)
{
lean_object* v___x_4688_; lean_object* v___x_4689_; size_t v___x_4690_; size_t v___x_4691_; 
v___x_4688_ = lean_array_uget_borrowed(v_as_4683_, v_i_4684_);
lean_inc(v_f_4682_);
lean_inc(v___x_4688_);
v___x_4689_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v___x_4688_, v_f_4682_, v_b_4686_);
v___x_4690_ = ((size_t)1ULL);
v___x_4691_ = lean_usize_add(v_i_4684_, v___x_4690_);
v_i_4684_ = v___x_4691_;
v_b_4686_ = v___x_4689_;
goto _start;
}
else
{
lean_dec(v_f_4682_);
return v_b_4686_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg___boxed(lean_object* v_f_4693_, lean_object* v_as_4694_, lean_object* v_i_4695_, lean_object* v_stop_4696_, lean_object* v_b_4697_){
_start:
{
size_t v_i_boxed_4698_; size_t v_stop_boxed_4699_; lean_object* v_res_4700_; 
v_i_boxed_4698_ = lean_unbox_usize(v_i_4695_);
lean_dec(v_i_4695_);
v_stop_boxed_4699_ = lean_unbox_usize(v_stop_4696_);
lean_dec(v_stop_4696_);
v_res_4700_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4693_, v_as_4694_, v_i_boxed_4698_, v_stop_boxed_4699_, v_b_4697_);
lean_dec_ref(v_as_4694_);
return v_res_4700_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl___redArg(lean_object* v_t_4701_, lean_object* v_f_4702_, lean_object* v_init_4703_){
_start:
{
lean_object* v___x_4704_; 
v___x_4704_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4701_, v_f_4702_, v_init_4703_);
return v___x_4704_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl(lean_object* v_00_u03b1_4705_, lean_object* v_00_u03c3_4706_, lean_object* v_t_4707_, lean_object* v_f_4708_, lean_object* v_init_4709_){
_start:
{
lean_object* v___x_4710_; 
v___x_4710_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4707_, v_f_4708_, v_init_4709_);
return v___x_4710_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0(lean_object* v_00_u03b1_4711_, lean_object* v_00_u03c3_4712_, lean_object* v_t_4713_, lean_object* v_f_4714_, lean_object* v_init_4715_){
_start:
{
lean_object* v___x_4716_; 
v___x_4716_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4713_, v_f_4714_, v_init_4715_);
return v___x_4716_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0(lean_object* v_00_u03b1_4717_, lean_object* v_00_u03c3_4718_, lean_object* v_t_4719_, lean_object* v_f_4720_, lean_object* v_init_4721_){
_start:
{
lean_object* v___x_4722_; 
v___x_4722_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_t_4719_, v_f_4720_, v_init_4721_);
return v___x_4722_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1(lean_object* v_00_u03b1_4723_, lean_object* v_00_u03c3_4724_, lean_object* v_f_4725_, lean_object* v_as_4726_, size_t v_i_4727_, size_t v_stop_4728_, lean_object* v_b_4729_){
_start:
{
lean_object* v___x_4730_; 
v___x_4730_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___redArg(v_f_4725_, v_as_4726_, v_i_4727_, v_stop_4728_, v_b_4729_);
return v___x_4730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4731_, lean_object* v_00_u03c3_4732_, lean_object* v_f_4733_, lean_object* v_as_4734_, lean_object* v_i_4735_, lean_object* v_stop_4736_, lean_object* v_b_4737_){
_start:
{
size_t v_i_boxed_4738_; size_t v_stop_boxed_4739_; lean_object* v_res_4740_; 
v_i_boxed_4738_ = lean_unbox_usize(v_i_4735_);
lean_dec(v_i_4735_);
v_stop_boxed_4739_ = lean_unbox_usize(v_stop_4736_);
lean_dec(v_stop_4736_);
v_res_4740_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1(v_00_u03b1_4731_, v_00_u03c3_4732_, v_f_4733_, v_as_4734_, v_i_boxed_4738_, v_stop_boxed_4739_, v_b_4737_);
lean_dec_ref(v_as_4734_);
return v_res_4740_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_4741_, lean_object* v_00_u03c3_4742_, lean_object* v_f_4743_, lean_object* v_as_4744_, size_t v_i_4745_, size_t v_stop_4746_, lean_object* v_b_4747_){
_start:
{
lean_object* v___x_4748_; 
v___x_4748_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_f_4743_, v_as_4744_, v_i_4745_, v_stop_4746_, v_b_4747_);
return v___x_4748_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4749_, lean_object* v_00_u03c3_4750_, lean_object* v_f_4751_, lean_object* v_as_4752_, lean_object* v_i_4753_, lean_object* v_stop_4754_, lean_object* v_b_4755_){
_start:
{
size_t v_i_boxed_4756_; size_t v_stop_boxed_4757_; lean_object* v_res_4758_; 
v_i_boxed_4756_ = lean_unbox_usize(v_i_4753_);
lean_dec(v_i_4753_);
v_stop_boxed_4757_ = lean_unbox_usize(v_stop_4754_);
lean_dec(v_stop_4754_);
v_res_4758_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1(v_00_u03b1_4749_, v_00_u03c3_4750_, v_f_4751_, v_as_4752_, v_i_boxed_4756_, v_stop_boxed_4757_, v_b_4755_);
lean_dec_ref(v_as_4752_);
return v_res_4758_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__0(lean_object* v_modIdx_4759_, lean_object* v_f_4760_, lean_object* v_s_4761_, lean_object* v_n_4762_, lean_object* v_v_4763_){
_start:
{
lean_object* v___x_4764_; lean_object* v___x_4765_; 
v___x_4764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4764_, 0, v_v_4763_);
lean_ctor_set(v___x_4764_, 1, v_modIdx_4759_);
v___x_4765_ = lean_apply_3(v_f_4760_, v_s_4761_, v_n_4762_, v___x_4764_);
return v___x_4765_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg(lean_object* v_inst_4766_, lean_object* v_t_4767_, lean_object* v_f_4768_, lean_object* v_init_4769_){
_start:
{
switch(lean_obj_tag(v_t_4767_))
{
case 0:
{
lean_object* v_modIdx_4770_; lean_object* v_tree_4771_; lean_object* v___f_4772_; lean_object* v___x_4773_; 
v_modIdx_4770_ = lean_ctor_get(v_t_4767_, 0);
lean_inc(v_modIdx_4770_);
v_tree_4771_ = lean_ctor_get(v_t_4767_, 1);
lean_inc_ref(v_tree_4771_);
lean_dec_ref_known(v_t_4767_, 2);
v___f_4772_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__0), 5, 2);
lean_closure_set(v___f_4772_, 0, v_modIdx_4770_);
lean_closure_set(v___f_4772_, 1, v_f_4768_);
v___x_4773_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_4766_, v_tree_4771_, v___f_4772_, v_init_4769_);
return v___x_4773_;
}
case 1:
{
lean_object* v_toApplicative_4774_; lean_object* v_toBind_4775_; lean_object* v_key_4776_; lean_object* v_entry_x3f_4777_; lean_object* v_children_4778_; lean_object* v___f_4779_; lean_object* v___f_4780_; 
v_toApplicative_4774_ = lean_ctor_get(v_inst_4766_, 0);
lean_inc_ref_n(v_toApplicative_4774_, 2);
v_toBind_4775_ = lean_ctor_get(v_inst_4766_, 1);
v_key_4776_ = lean_ctor_get(v_t_4767_, 0);
lean_inc(v_key_4776_);
v_entry_x3f_4777_ = lean_ctor_get(v_t_4767_, 1);
lean_inc(v_entry_x3f_4777_);
v_children_4778_ = lean_ctor_get(v_t_4767_, 2);
lean_inc_ref_n(v_children_4778_, 2);
lean_dec_ref_known(v_t_4767_, 4);
lean_inc(v_f_4768_);
lean_inc_ref_n(v_inst_4766_, 2);
v___f_4779_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__1), 4, 2);
lean_closure_set(v___f_4779_, 0, v_inst_4766_);
lean_closure_set(v___f_4779_, 1, v_f_4768_);
lean_inc_ref(v___f_4779_);
v___f_4780_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__1), 6, 4);
lean_closure_set(v___f_4780_, 0, v_toApplicative_4774_);
lean_closure_set(v___f_4780_, 1, v_children_4778_);
lean_closure_set(v___f_4780_, 2, v_inst_4766_);
lean_closure_set(v___f_4780_, 3, v___f_4779_);
if (lean_obj_tag(v_entry_x3f_4777_) == 1)
{
lean_object* v_val_4781_; lean_object* v___f_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; 
lean_inc(v_toBind_4775_);
lean_dec_ref(v___f_4779_);
lean_dec_ref(v_children_4778_);
lean_dec_ref(v_toApplicative_4774_);
lean_dec_ref(v_inst_4766_);
v_val_4781_ = lean_ctor_get(v_entry_x3f_4777_, 0);
lean_inc(v_val_4781_);
lean_dec_ref_known(v_entry_x3f_4777_, 1);
v___f_4782_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4782_, 0, v___f_4780_);
v___x_4783_ = lean_apply_3(v_f_4768_, v_init_4769_, v_key_4776_, v_val_4781_);
v___x_4784_ = lean_apply_4(v_toBind_4775_, lean_box(0), lean_box(0), v___x_4783_, v___f_4782_);
return v___x_4784_;
}
else
{
lean_object* v___x_4785_; lean_object* v___x_4786_; 
lean_dec_ref(v___f_4780_);
lean_dec(v_entry_x3f_4777_);
lean_dec(v_key_4776_);
lean_dec(v_f_4768_);
v___x_4785_ = lean_box(0);
v___x_4786_ = l_Lean_ImportedConsts_foldlM___redArg___lam__1(v_toApplicative_4774_, v_children_4778_, v_inst_4766_, v___f_4779_, v___x_4785_, v_init_4769_);
return v___x_4786_;
}
}
case 2:
{
lean_object* v_toApplicative_4787_; lean_object* v_toBind_4788_; lean_object* v_key_4789_; lean_object* v_entry_4790_; lean_object* v_expanded_4791_; lean_object* v___f_4792_; lean_object* v___f_4793_; lean_object* v___x_4794_; 
v_toApplicative_4787_ = lean_ctor_get(v_inst_4766_, 0);
lean_inc_ref_n(v_toApplicative_4787_, 2);
v_toBind_4788_ = lean_ctor_get(v_inst_4766_, 1);
v_key_4789_ = lean_ctor_get(v_t_4767_, 0);
lean_inc(v_key_4789_);
v_entry_4790_ = lean_ctor_get(v_t_4767_, 1);
lean_inc_ref(v_entry_4790_);
v_expanded_4791_ = lean_ctor_get(v_t_4767_, 2);
lean_inc_ref_n(v_expanded_4791_, 2);
lean_dec_ref_known(v_t_4767_, 3);
lean_inc(v_f_4768_);
lean_inc_ref_n(v_inst_4766_, 2);
v___f_4792_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__1), 4, 2);
lean_closure_set(v___f_4792_, 0, v_inst_4766_);
lean_closure_set(v___f_4792_, 1, v_f_4768_);
lean_inc_ref(v___f_4792_);
v___f_4793_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_foldlM___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_4793_, 0, v_expanded_4791_);
lean_closure_set(v___f_4793_, 1, v_toApplicative_4787_);
lean_closure_set(v___f_4793_, 2, v_inst_4766_);
lean_closure_set(v___f_4793_, 3, v___f_4792_);
v___x_4794_ = lean_imported_consts_force_shared(v_entry_4790_);
lean_dec_ref(v_entry_4790_);
if (lean_obj_tag(v___x_4794_) == 1)
{
lean_object* v_val_4795_; lean_object* v___f_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; 
lean_inc(v_toBind_4788_);
lean_dec_ref(v___f_4792_);
lean_dec_ref(v_expanded_4791_);
lean_dec_ref(v_toApplicative_4787_);
lean_dec_ref(v_inst_4766_);
v_val_4795_ = lean_ctor_get(v___x_4794_, 0);
lean_inc(v_val_4795_);
lean_dec_ref_known(v___x_4794_, 1);
v___f_4796_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_4796_, 0, v___f_4793_);
v___x_4797_ = lean_apply_3(v_f_4768_, v_init_4769_, v_key_4789_, v_val_4795_);
v___x_4798_ = lean_apply_4(v_toBind_4788_, lean_box(0), lean_box(0), v___x_4797_, v___f_4796_);
return v___x_4798_;
}
else
{
lean_object* v___x_4799_; lean_object* v___x_4800_; 
lean_dec(v___x_4794_);
lean_dec_ref(v___f_4793_);
lean_dec(v_key_4789_);
lean_dec(v_f_4768_);
v___x_4799_ = lean_box(0);
v___x_4800_ = l_Lean_ImportedConsts_foldlM___redArg___lam__4(v_expanded_4791_, v_toApplicative_4787_, v_inst_4766_, v___f_4792_, v___x_4799_, v_init_4769_);
lean_dec_ref(v_expanded_4791_);
return v___x_4800_;
}
}
default: 
{
lean_object* v_tree_4801_; 
v_tree_4801_ = lean_ctor_get(v_t_4767_, 1);
lean_inc_ref(v_tree_4801_);
lean_dec_ref_known(v_t_4767_, 2);
v_t_4767_ = v_tree_4801_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg___lam__1(lean_object* v_inst_4803_, lean_object* v_f_4804_, lean_object* v_s_4805_, lean_object* v_c_4806_){
_start:
{
lean_object* v___x_4807_; 
v___x_4807_ = l_Lean_ImportedConsts_foldlEntriesM___redArg(v_inst_4803_, v_c_4806_, v_f_4804_, v_s_4805_);
return v___x_4807_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM(lean_object* v_m_4808_, lean_object* v_00_u03b1_4809_, lean_object* v_00_u03c3_4810_, lean_object* v_inst_4811_, lean_object* v_t_4812_, lean_object* v_f_4813_, lean_object* v_init_4814_){
_start:
{
lean_object* v___x_4815_; 
v___x_4815_ = l_Lean_ImportedConsts_foldlEntriesM___redArg(v_inst_4811_, v_t_4812_, v_f_4813_, v_init_4814_);
return v___x_4815_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg___lam__0(lean_object* v_f_4816_, lean_object* v_x_4817_, lean_object* v_n_4818_, lean_object* v_v_4819_){
_start:
{
lean_object* v___x_4820_; 
v___x_4820_ = lean_apply_2(v_f_4816_, v_n_4818_, v_v_4819_);
return v___x_4820_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg(lean_object* v_inst_4821_, lean_object* v_t_4822_, lean_object* v_f_4823_){
_start:
{
lean_object* v___f_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; 
v___f_4824_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_forM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_4824_, 0, v_f_4823_);
v___x_4825_ = lean_box(0);
v___x_4826_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4821_, v_t_4822_, v___f_4824_, v___x_4825_);
return v___x_4826_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM(lean_object* v_m_4827_, lean_object* v_00_u03b1_4828_, lean_object* v_inst_4829_, lean_object* v_t_4830_, lean_object* v_f_4831_){
_start:
{
lean_object* v___x_4832_; 
v___x_4832_ = l_Lean_ImportedConsts_forM___redArg(v_inst_4829_, v_t_4830_, v_f_4831_);
return v___x_4832_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(lean_object* v_n_4833_, lean_object* v_x_4834_, lean_object* v_x_4835_){
_start:
{
lean_object* v___x_4836_; lean_object* v___x_4837_; 
v___x_4836_ = lean_unsigned_to_nat(1u);
v___x_4837_ = lean_nat_add(v_n_4833_, v___x_4836_);
return v___x_4837_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0___boxed(lean_object* v_n_4838_, lean_object* v_x_4839_, lean_object* v_x_4840_){
_start:
{
lean_object* v_res_4841_; 
v_res_4841_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(v_n_4838_, v_x_4839_, v_x_4840_);
lean_dec(v_x_4840_);
lean_dec(v_x_4839_);
lean_dec(v_n_4838_);
return v_res_4841_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(lean_object* v_t_4842_, lean_object* v_init_4843_){
_start:
{
lean_object* v_val_x3f_4844_; lean_object* v_children_4845_; lean_object* v_s_4847_; 
v_val_x3f_4844_ = lean_ctor_get(v_t_4842_, 1);
v_children_4845_ = lean_ctor_get(v_t_4842_, 2);
if (lean_obj_tag(v_val_x3f_4844_) == 1)
{
lean_object* v___x_4854_; lean_object* v___x_4855_; 
v___x_4854_ = lean_unsigned_to_nat(1u);
v___x_4855_ = lean_nat_add(v_init_4843_, v___x_4854_);
lean_dec(v_init_4843_);
v_s_4847_ = v___x_4855_;
goto v___jp_4846_;
}
else
{
v_s_4847_ = v_init_4843_;
goto v___jp_4846_;
}
v___jp_4846_:
{
lean_object* v___x_4848_; lean_object* v___x_4849_; uint8_t v___x_4850_; 
v___x_4848_ = lean_unsigned_to_nat(0u);
v___x_4849_ = lean_array_get_size(v_children_4845_);
v___x_4850_ = lean_nat_dec_lt(v___x_4848_, v___x_4849_);
if (v___x_4850_ == 0)
{
return v_s_4847_;
}
else
{
size_t v___x_4851_; size_t v___x_4852_; lean_object* v___x_4853_; 
v___x_4851_ = ((size_t)0ULL);
v___x_4852_ = lean_usize_of_nat(v___x_4849_);
v___x_4853_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_children_4845_, v___x_4851_, v___x_4852_, v_s_4847_);
return v___x_4853_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(lean_object* v_as_4856_, size_t v_i_4857_, size_t v_stop_4858_, lean_object* v_b_4859_){
_start:
{
uint8_t v___x_4860_; 
v___x_4860_ = lean_usize_dec_eq(v_i_4857_, v_stop_4858_);
if (v___x_4860_ == 0)
{
lean_object* v___x_4861_; lean_object* v___x_4862_; size_t v___x_4863_; size_t v___x_4864_; 
v___x_4861_ = lean_array_uget_borrowed(v_as_4856_, v_i_4857_);
v___x_4862_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v___x_4861_, v_b_4859_);
v___x_4863_ = ((size_t)1ULL);
v___x_4864_ = lean_usize_add(v_i_4857_, v___x_4863_);
v_i_4857_ = v___x_4864_;
v_b_4859_ = v___x_4862_;
goto _start;
}
else
{
return v_b_4859_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_4866_, lean_object* v_i_4867_, lean_object* v_stop_4868_, lean_object* v_b_4869_){
_start:
{
size_t v_i_boxed_4870_; size_t v_stop_boxed_4871_; lean_object* v_res_4872_; 
v_i_boxed_4870_ = lean_unbox_usize(v_i_4867_);
lean_dec(v_i_4867_);
v_stop_boxed_4871_ = lean_unbox_usize(v_stop_4868_);
lean_dec(v_stop_4868_);
v_res_4872_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_as_4866_, v_i_boxed_4870_, v_stop_boxed_4871_, v_b_4869_);
lean_dec_ref(v_as_4866_);
return v_res_4872_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___boxed(lean_object* v_t_4873_, lean_object* v_init_4874_){
_start:
{
lean_object* v_res_4875_; 
v_res_4875_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_4873_, v_init_4874_);
lean_dec_ref(v_t_4873_);
return v_res_4875_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(lean_object* v_t_4876_, lean_object* v_init_4877_){
_start:
{
switch(lean_obj_tag(v_t_4876_))
{
case 0:
{
lean_object* v_tree_4878_; lean_object* v___x_4879_; 
v_tree_4878_ = lean_ctor_get(v_t_4876_, 1);
v___x_4879_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_tree_4878_, v_init_4877_);
return v___x_4879_;
}
case 1:
{
lean_object* v_key_4880_; lean_object* v_entry_x3f_4881_; lean_object* v_children_4882_; lean_object* v_s_4884_; 
v_key_4880_ = lean_ctor_get(v_t_4876_, 0);
v_entry_x3f_4881_ = lean_ctor_get(v_t_4876_, 1);
v_children_4882_ = lean_ctor_get(v_t_4876_, 2);
if (lean_obj_tag(v_entry_x3f_4881_) == 1)
{
lean_object* v_val_4891_; lean_object* v_fst_4892_; lean_object* v___x_4893_; 
v_val_4891_ = lean_ctor_get(v_entry_x3f_4881_, 0);
v_fst_4892_ = lean_ctor_get(v_val_4891_, 0);
v___x_4893_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(v_init_4877_, v_key_4880_, v_fst_4892_);
lean_dec(v_init_4877_);
v_s_4884_ = v___x_4893_;
goto v___jp_4883_;
}
else
{
v_s_4884_ = v_init_4877_;
goto v___jp_4883_;
}
v___jp_4883_:
{
lean_object* v___x_4885_; lean_object* v___x_4886_; uint8_t v___x_4887_; 
v___x_4885_ = lean_unsigned_to_nat(0u);
v___x_4886_ = lean_array_get_size(v_children_4882_);
v___x_4887_ = lean_nat_dec_lt(v___x_4885_, v___x_4886_);
if (v___x_4887_ == 0)
{
return v_s_4884_;
}
else
{
size_t v___x_4888_; size_t v___x_4889_; lean_object* v___x_4890_; 
v___x_4888_ = ((size_t)0ULL);
v___x_4889_ = lean_usize_of_nat(v___x_4886_);
v___x_4890_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_children_4882_, v___x_4888_, v___x_4889_, v_s_4884_);
return v___x_4890_;
}
}
}
case 2:
{
lean_object* v_key_4894_; lean_object* v_entry_4895_; lean_object* v_expanded_4896_; lean_object* v_s_4898_; lean_object* v___x_4907_; 
v_key_4894_ = lean_ctor_get(v_t_4876_, 0);
v_entry_4895_ = lean_ctor_get(v_t_4876_, 1);
v_expanded_4896_ = lean_ctor_get(v_t_4876_, 2);
v___x_4907_ = lean_imported_consts_force_shared(v_entry_4895_);
if (lean_obj_tag(v___x_4907_) == 1)
{
lean_object* v_val_4908_; lean_object* v_fst_4909_; lean_object* v___x_4910_; 
v_val_4908_ = lean_ctor_get(v___x_4907_, 0);
lean_inc(v_val_4908_);
lean_dec_ref_known(v___x_4907_, 1);
v_fst_4909_ = lean_ctor_get(v_val_4908_, 0);
lean_inc(v_fst_4909_);
lean_dec(v_val_4908_);
v___x_4910_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___lam__0(v_init_4877_, v_key_4894_, v_fst_4909_);
lean_dec(v_fst_4909_);
lean_dec(v_init_4877_);
v_s_4898_ = v___x_4910_;
goto v___jp_4897_;
}
else
{
lean_dec(v___x_4907_);
v_s_4898_ = v_init_4877_;
goto v___jp_4897_;
}
v___jp_4897_:
{
lean_object* v___x_4899_; lean_object* v_fst_4900_; lean_object* v___x_4901_; lean_object* v___x_4902_; uint8_t v___x_4903_; 
v___x_4899_ = lean_imported_consts_force_shared(v_expanded_4896_);
v_fst_4900_ = lean_ctor_get(v___x_4899_, 0);
lean_inc(v_fst_4900_);
lean_dec(v___x_4899_);
v___x_4901_ = lean_unsigned_to_nat(0u);
v___x_4902_ = lean_array_get_size(v_fst_4900_);
v___x_4903_ = lean_nat_dec_lt(v___x_4901_, v___x_4902_);
if (v___x_4903_ == 0)
{
lean_dec(v_fst_4900_);
return v_s_4898_;
}
else
{
size_t v___x_4904_; size_t v___x_4905_; lean_object* v___x_4906_; 
v___x_4904_ = ((size_t)0ULL);
v___x_4905_ = lean_usize_of_nat(v___x_4902_);
v___x_4906_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_fst_4900_, v___x_4904_, v___x_4905_, v_s_4898_);
lean_dec(v_fst_4900_);
return v___x_4906_;
}
}
}
default: 
{
lean_object* v_tree_4911_; 
v_tree_4911_ = lean_ctor_get(v_t_4876_, 1);
v_t_4876_ = v_tree_4911_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(lean_object* v_as_4913_, size_t v_i_4914_, size_t v_stop_4915_, lean_object* v_b_4916_){
_start:
{
uint8_t v___x_4917_; 
v___x_4917_ = lean_usize_dec_eq(v_i_4914_, v_stop_4915_);
if (v___x_4917_ == 0)
{
lean_object* v___x_4918_; lean_object* v___x_4919_; size_t v___x_4920_; size_t v___x_4921_; 
v___x_4918_ = lean_array_uget_borrowed(v_as_4913_, v_i_4914_);
v___x_4919_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v___x_4918_, v_b_4916_);
v___x_4920_ = ((size_t)1ULL);
v___x_4921_ = lean_usize_add(v_i_4914_, v___x_4920_);
v_i_4914_ = v___x_4921_;
v_b_4916_ = v___x_4919_;
goto _start;
}
else
{
return v_b_4916_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg___boxed(lean_object* v_as_4923_, lean_object* v_i_4924_, lean_object* v_stop_4925_, lean_object* v_b_4926_){
_start:
{
size_t v_i_boxed_4927_; size_t v_stop_boxed_4928_; lean_object* v_res_4929_; 
v_i_boxed_4927_ = lean_unbox_usize(v_i_4924_);
lean_dec(v_i_4924_);
v_stop_boxed_4928_ = lean_unbox_usize(v_stop_4925_);
lean_dec(v_stop_4925_);
v_res_4929_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_as_4923_, v_i_boxed_4927_, v_stop_boxed_4928_, v_b_4926_);
lean_dec_ref(v_as_4923_);
return v_res_4929_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___boxed(lean_object* v_t_4930_, lean_object* v_init_4931_){
_start:
{
lean_object* v_res_4932_; 
v_res_4932_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_4930_, v_init_4931_);
lean_dec_ref(v_t_4930_);
return v_res_4932_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg(lean_object* v_t_4933_){
_start:
{
lean_object* v___x_4934_; lean_object* v___x_4935_; 
v___x_4934_ = lean_unsigned_to_nat(0u);
v___x_4935_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_4933_, v___x_4934_);
return v___x_4935_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg___boxed(lean_object* v_t_4936_){
_start:
{
lean_object* v_res_4937_; 
v_res_4937_ = l_Lean_ImportedConsts_size___redArg(v_t_4936_);
lean_dec_ref(v_t_4936_);
return v_res_4937_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size(lean_object* v_00_u03b1_4938_, lean_object* v_t_4939_){
_start:
{
lean_object* v___x_4940_; 
v___x_4940_ = l_Lean_ImportedConsts_size___redArg(v_t_4939_);
return v___x_4940_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___boxed(lean_object* v_00_u03b1_4941_, lean_object* v_t_4942_){
_start:
{
lean_object* v_res_4943_; 
v_res_4943_ = l_Lean_ImportedConsts_size(v_00_u03b1_4941_, v_t_4942_);
lean_dec_ref(v_t_4942_);
return v_res_4943_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(lean_object* v_00_u03b1_4944_, lean_object* v_t_4945_, lean_object* v_init_4946_){
_start:
{
lean_object* v___x_4947_; 
v___x_4947_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_4945_, v_init_4946_);
return v___x_4947_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___boxed(lean_object* v_00_u03b1_4948_, lean_object* v_t_4949_, lean_object* v_init_4950_){
_start:
{
lean_object* v_res_4951_; 
v_res_4951_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(v_00_u03b1_4948_, v_t_4949_, v_init_4950_);
lean_dec_ref(v_t_4949_);
return v_res_4951_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(lean_object* v_00_u03b1_4952_, lean_object* v_t_4953_, lean_object* v_init_4954_){
_start:
{
lean_object* v___x_4955_; 
v___x_4955_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_4953_, v_init_4954_);
return v___x_4955_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___boxed(lean_object* v_00_u03b1_4956_, lean_object* v_t_4957_, lean_object* v_init_4958_){
_start:
{
lean_object* v_res_4959_; 
v_res_4959_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(v_00_u03b1_4956_, v_t_4957_, v_init_4958_);
lean_dec_ref(v_t_4957_);
return v_res_4959_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1(lean_object* v_00_u03b1_4960_, lean_object* v_as_4961_, size_t v_i_4962_, size_t v_stop_4963_, lean_object* v_b_4964_){
_start:
{
lean_object* v___x_4965_; 
v___x_4965_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___redArg(v_as_4961_, v_i_4962_, v_stop_4963_, v_b_4964_);
return v___x_4965_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4966_, lean_object* v_as_4967_, lean_object* v_i_4968_, lean_object* v_stop_4969_, lean_object* v_b_4970_){
_start:
{
size_t v_i_boxed_4971_; size_t v_stop_boxed_4972_; lean_object* v_res_4973_; 
v_i_boxed_4971_ = lean_unbox_usize(v_i_4968_);
lean_dec(v_i_4968_);
v_stop_boxed_4972_ = lean_unbox_usize(v_stop_4969_);
lean_dec(v_stop_4969_);
v_res_4973_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__1(v_00_u03b1_4966_, v_as_4967_, v_i_boxed_4971_, v_stop_boxed_4972_, v_b_4970_);
lean_dec_ref(v_as_4967_);
return v_res_4973_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_4974_, lean_object* v_as_4975_, size_t v_i_4976_, size_t v_stop_4977_, lean_object* v_b_4978_){
_start:
{
lean_object* v___x_4979_; 
v___x_4979_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_as_4975_, v_i_4976_, v_stop_4977_, v_b_4978_);
return v___x_4979_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_4980_, lean_object* v_as_4981_, lean_object* v_i_4982_, lean_object* v_stop_4983_, lean_object* v_b_4984_){
_start:
{
size_t v_i_boxed_4985_; size_t v_stop_boxed_4986_; lean_object* v_res_4987_; 
v_i_boxed_4985_ = lean_unbox_usize(v_i_4982_);
lean_dec(v_i_4982_);
v_stop_boxed_4986_ = lean_unbox_usize(v_stop_4983_);
lean_dec(v_stop_4983_);
v_res_4987_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(v_00_u03b1_4980_, v_as_4981_, v_i_boxed_4985_, v_stop_boxed_4986_, v_b_4984_);
lean_dec_ref(v_as_4981_);
return v_res_4987_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold___redArg(lean_object* v_t_4988_, lean_object* v_f_4989_, lean_object* v_init_4990_){
_start:
{
lean_object* v___x_4991_; 
v___x_4991_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4988_, v_f_4989_, v_init_4990_);
return v___x_4991_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold(lean_object* v_00_u03b1_4992_, lean_object* v_00_u03c3_4993_, lean_object* v_t_4994_, lean_object* v_f_4995_, lean_object* v_init_4996_){
_start:
{
lean_object* v___x_4997_; 
v___x_4997_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_4994_, v_f_4995_, v_init_4996_);
return v___x_4997_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM___redArg(lean_object* v_inst_4998_, lean_object* v_t_4999_, lean_object* v_f_5000_, lean_object* v_init_5001_){
_start:
{
lean_object* v___x_5002_; 
v___x_5002_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_4998_, v_t_4999_, v_f_5000_, v_init_5001_);
return v___x_5002_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM(lean_object* v_m_5003_, lean_object* v_00_u03b1_5004_, lean_object* v_00_u03c3_5005_, lean_object* v_inst_5006_, lean_object* v_t_5007_, lean_object* v_f_5008_, lean_object* v_init_5009_){
_start:
{
lean_object* v___x_5010_; 
v___x_5010_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_5006_, v_t_5007_, v_f_5008_, v_init_5009_);
return v___x_5010_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(lean_object* v_t_5011_, lean_object* v_init_5012_){
_start:
{
lean_object* v_key_5013_; lean_object* v_val_x3f_5014_; lean_object* v_children_5015_; lean_object* v_s_5017_; 
v_key_5013_ = lean_ctor_get(v_t_5011_, 0);
v_val_x3f_5014_ = lean_ctor_get(v_t_5011_, 1);
v_children_5015_ = lean_ctor_get(v_t_5011_, 2);
if (lean_obj_tag(v_val_x3f_5014_) == 1)
{
lean_object* v_val_5024_; lean_object* v___x_5025_; lean_object* v___x_5026_; 
v_val_5024_ = lean_ctor_get(v_val_x3f_5014_, 0);
lean_inc(v_val_5024_);
lean_inc(v_key_5013_);
v___x_5025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5025_, 0, v_key_5013_);
lean_ctor_set(v___x_5025_, 1, v_val_5024_);
v___x_5026_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5026_, 0, v___x_5025_);
lean_ctor_set(v___x_5026_, 1, v_init_5012_);
v_s_5017_ = v___x_5026_;
goto v___jp_5016_;
}
else
{
v_s_5017_ = v_init_5012_;
goto v___jp_5016_;
}
v___jp_5016_:
{
lean_object* v___x_5018_; lean_object* v___x_5019_; uint8_t v___x_5020_; 
v___x_5018_ = lean_unsigned_to_nat(0u);
v___x_5019_ = lean_array_get_size(v_children_5015_);
v___x_5020_ = lean_nat_dec_lt(v___x_5018_, v___x_5019_);
if (v___x_5020_ == 0)
{
return v_s_5017_;
}
else
{
size_t v___x_5021_; size_t v___x_5022_; lean_object* v___x_5023_; 
v___x_5021_ = ((size_t)0ULL);
v___x_5022_ = lean_usize_of_nat(v___x_5019_);
v___x_5023_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v_children_5015_, v___x_5021_, v___x_5022_, v_s_5017_);
return v___x_5023_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(lean_object* v_as_5027_, size_t v_i_5028_, size_t v_stop_5029_, lean_object* v_b_5030_){
_start:
{
uint8_t v___x_5031_; 
v___x_5031_ = lean_usize_dec_eq(v_i_5028_, v_stop_5029_);
if (v___x_5031_ == 0)
{
lean_object* v___x_5032_; lean_object* v___x_5033_; size_t v___x_5034_; size_t v___x_5035_; 
v___x_5032_ = lean_array_uget_borrowed(v_as_5027_, v_i_5028_);
v___x_5033_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v___x_5032_, v_b_5030_);
v___x_5034_ = ((size_t)1ULL);
v___x_5035_ = lean_usize_add(v_i_5028_, v___x_5034_);
v_i_5028_ = v___x_5035_;
v_b_5030_ = v___x_5033_;
goto _start;
}
else
{
return v_b_5030_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_5037_, lean_object* v_i_5038_, lean_object* v_stop_5039_, lean_object* v_b_5040_){
_start:
{
size_t v_i_boxed_5041_; size_t v_stop_boxed_5042_; lean_object* v_res_5043_; 
v_i_boxed_5041_ = lean_unbox_usize(v_i_5038_);
lean_dec(v_i_5038_);
v_stop_boxed_5042_ = lean_unbox_usize(v_stop_5039_);
lean_dec(v_stop_5039_);
v_res_5043_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v_as_5037_, v_i_boxed_5041_, v_stop_boxed_5042_, v_b_5040_);
lean_dec_ref(v_as_5037_);
return v_res_5043_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg___boxed(lean_object* v_t_5044_, lean_object* v_init_5045_){
_start:
{
lean_object* v_res_5046_; 
v_res_5046_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v_t_5044_, v_init_5045_);
lean_dec_ref(v_t_5044_);
return v_res_5046_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg___lam__0(lean_object* v_l_5047_, lean_object* v_n_5048_, lean_object* v_v_5049_){
_start:
{
lean_object* v___x_5050_; lean_object* v___x_5051_; 
v___x_5050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5050_, 0, v_n_5048_);
lean_ctor_set(v___x_5050_, 1, v_v_5049_);
v___x_5051_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5051_, 0, v___x_5050_);
lean_ctor_set(v___x_5051_, 1, v_l_5047_);
return v___x_5051_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(lean_object* v_t_5052_, lean_object* v_init_5053_){
_start:
{
switch(lean_obj_tag(v_t_5052_))
{
case 0:
{
lean_object* v_tree_5054_; lean_object* v___x_5055_; 
v_tree_5054_ = lean_ctor_get(v_t_5052_, 1);
lean_inc_ref(v_tree_5054_);
lean_dec_ref_known(v_t_5052_, 2);
v___x_5055_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v_tree_5054_, v_init_5053_);
lean_dec_ref(v_tree_5054_);
return v___x_5055_;
}
case 1:
{
lean_object* v_key_5056_; lean_object* v_entry_x3f_5057_; lean_object* v_children_5058_; lean_object* v_s_5060_; 
v_key_5056_ = lean_ctor_get(v_t_5052_, 0);
lean_inc(v_key_5056_);
v_entry_x3f_5057_ = lean_ctor_get(v_t_5052_, 1);
lean_inc(v_entry_x3f_5057_);
v_children_5058_ = lean_ctor_get(v_t_5052_, 2);
lean_inc_ref(v_children_5058_);
lean_dec_ref_known(v_t_5052_, 4);
if (lean_obj_tag(v_entry_x3f_5057_) == 1)
{
lean_object* v_val_5067_; lean_object* v_fst_5068_; lean_object* v___x_5069_; 
v_val_5067_ = lean_ctor_get(v_entry_x3f_5057_, 0);
lean_inc(v_val_5067_);
lean_dec_ref_known(v_entry_x3f_5057_, 1);
v_fst_5068_ = lean_ctor_get(v_val_5067_, 0);
lean_inc(v_fst_5068_);
lean_dec(v_val_5067_);
v___x_5069_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg___lam__0(v_init_5053_, v_key_5056_, v_fst_5068_);
v_s_5060_ = v___x_5069_;
goto v___jp_5059_;
}
else
{
lean_dec(v_entry_x3f_5057_);
lean_dec(v_key_5056_);
v_s_5060_ = v_init_5053_;
goto v___jp_5059_;
}
v___jp_5059_:
{
lean_object* v___x_5061_; lean_object* v___x_5062_; uint8_t v___x_5063_; 
v___x_5061_ = lean_unsigned_to_nat(0u);
v___x_5062_ = lean_array_get_size(v_children_5058_);
v___x_5063_ = lean_nat_dec_lt(v___x_5061_, v___x_5062_);
if (v___x_5063_ == 0)
{
lean_dec_ref(v_children_5058_);
return v_s_5060_;
}
else
{
size_t v___x_5064_; size_t v___x_5065_; lean_object* v___x_5066_; 
v___x_5064_ = ((size_t)0ULL);
v___x_5065_ = lean_usize_of_nat(v___x_5062_);
v___x_5066_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_children_5058_, v___x_5064_, v___x_5065_, v_s_5060_);
lean_dec_ref(v_children_5058_);
return v___x_5066_;
}
}
}
case 2:
{
lean_object* v_key_5070_; lean_object* v_entry_5071_; lean_object* v_expanded_5072_; lean_object* v_s_5074_; lean_object* v___x_5083_; 
v_key_5070_ = lean_ctor_get(v_t_5052_, 0);
lean_inc(v_key_5070_);
v_entry_5071_ = lean_ctor_get(v_t_5052_, 1);
lean_inc_ref(v_entry_5071_);
v_expanded_5072_ = lean_ctor_get(v_t_5052_, 2);
lean_inc_ref(v_expanded_5072_);
lean_dec_ref_known(v_t_5052_, 3);
v___x_5083_ = lean_imported_consts_force_shared(v_entry_5071_);
lean_dec_ref(v_entry_5071_);
if (lean_obj_tag(v___x_5083_) == 1)
{
lean_object* v_val_5084_; lean_object* v_fst_5085_; lean_object* v___x_5086_; 
v_val_5084_ = lean_ctor_get(v___x_5083_, 0);
lean_inc(v_val_5084_);
lean_dec_ref_known(v___x_5083_, 1);
v_fst_5085_ = lean_ctor_get(v_val_5084_, 0);
lean_inc(v_fst_5085_);
lean_dec(v_val_5084_);
v___x_5086_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg___lam__0(v_init_5053_, v_key_5070_, v_fst_5085_);
v_s_5074_ = v___x_5086_;
goto v___jp_5073_;
}
else
{
lean_dec(v___x_5083_);
lean_dec(v_key_5070_);
v_s_5074_ = v_init_5053_;
goto v___jp_5073_;
}
v___jp_5073_:
{
lean_object* v___x_5075_; lean_object* v_fst_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; uint8_t v___x_5079_; 
v___x_5075_ = lean_imported_consts_force_shared(v_expanded_5072_);
lean_dec_ref(v_expanded_5072_);
v_fst_5076_ = lean_ctor_get(v___x_5075_, 0);
lean_inc(v_fst_5076_);
lean_dec(v___x_5075_);
v___x_5077_ = lean_unsigned_to_nat(0u);
v___x_5078_ = lean_array_get_size(v_fst_5076_);
v___x_5079_ = lean_nat_dec_lt(v___x_5077_, v___x_5078_);
if (v___x_5079_ == 0)
{
lean_dec(v_fst_5076_);
return v_s_5074_;
}
else
{
size_t v___x_5080_; size_t v___x_5081_; lean_object* v___x_5082_; 
v___x_5080_ = ((size_t)0ULL);
v___x_5081_ = lean_usize_of_nat(v___x_5078_);
v___x_5082_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_fst_5076_, v___x_5080_, v___x_5081_, v_s_5074_);
lean_dec(v_fst_5076_);
return v___x_5082_;
}
}
}
default: 
{
lean_object* v_tree_5087_; 
v_tree_5087_ = lean_ctor_get(v_t_5052_, 1);
lean_inc_ref(v_tree_5087_);
lean_dec_ref_known(v_t_5052_, 2);
v_t_5052_ = v_tree_5087_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(lean_object* v_as_5089_, size_t v_i_5090_, size_t v_stop_5091_, lean_object* v_b_5092_){
_start:
{
uint8_t v___x_5093_; 
v___x_5093_ = lean_usize_dec_eq(v_i_5090_, v_stop_5091_);
if (v___x_5093_ == 0)
{
lean_object* v___x_5094_; lean_object* v___x_5095_; size_t v___x_5096_; size_t v___x_5097_; 
v___x_5094_ = lean_array_uget_borrowed(v_as_5089_, v_i_5090_);
lean_inc(v___x_5094_);
v___x_5095_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(v___x_5094_, v_b_5092_);
v___x_5096_ = ((size_t)1ULL);
v___x_5097_ = lean_usize_add(v_i_5090_, v___x_5096_);
v_i_5090_ = v___x_5097_;
v_b_5092_ = v___x_5095_;
goto _start;
}
else
{
return v_b_5092_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg___boxed(lean_object* v_as_5099_, lean_object* v_i_5100_, lean_object* v_stop_5101_, lean_object* v_b_5102_){
_start:
{
size_t v_i_boxed_5103_; size_t v_stop_boxed_5104_; lean_object* v_res_5105_; 
v_i_boxed_5103_ = lean_unbox_usize(v_i_5100_);
lean_dec(v_i_5100_);
v_stop_boxed_5104_ = lean_unbox_usize(v_stop_5101_);
lean_dec(v_stop_5101_);
v_res_5105_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_as_5099_, v_i_boxed_5103_, v_stop_boxed_5104_, v_b_5102_);
lean_dec_ref(v_as_5099_);
return v_res_5105_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toList___redArg(lean_object* v_t_5106_){
_start:
{
lean_object* v___x_5107_; lean_object* v___x_5108_; 
v___x_5107_ = lean_box(0);
v___x_5108_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(v_t_5106_, v___x_5107_);
return v___x_5108_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toList(lean_object* v_00_u03b1_5109_, lean_object* v_t_5110_){
_start:
{
lean_object* v___x_5111_; 
v___x_5111_ = l_Lean_ImportedConsts_toList___redArg(v_t_5110_);
return v___x_5111_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0(lean_object* v_00_u03b1_5112_, lean_object* v_t_5113_, lean_object* v_init_5114_){
_start:
{
lean_object* v___x_5115_; 
v___x_5115_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0___redArg(v_t_5113_, v_init_5114_);
return v___x_5115_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0(lean_object* v_00_u03b1_5116_, lean_object* v_t_5117_, lean_object* v_init_5118_){
_start:
{
lean_object* v___x_5119_; 
v___x_5119_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___redArg(v_t_5117_, v_init_5118_);
return v___x_5119_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5120_, lean_object* v_t_5121_, lean_object* v_init_5122_){
_start:
{
lean_object* v_res_5123_; 
v_res_5123_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0(v_00_u03b1_5120_, v_t_5121_, v_init_5122_);
lean_dec_ref(v_t_5121_);
return v_res_5123_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1(lean_object* v_00_u03b1_5124_, lean_object* v_as_5125_, size_t v_i_5126_, size_t v_stop_5127_, lean_object* v_b_5128_){
_start:
{
lean_object* v___x_5129_; 
v___x_5129_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___redArg(v_as_5125_, v_i_5126_, v_stop_5127_, v_b_5128_);
return v___x_5129_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5130_, lean_object* v_as_5131_, lean_object* v_i_5132_, lean_object* v_stop_5133_, lean_object* v_b_5134_){
_start:
{
size_t v_i_boxed_5135_; size_t v_stop_boxed_5136_; lean_object* v_res_5137_; 
v_i_boxed_5135_ = lean_unbox_usize(v_i_5132_);
lean_dec(v_i_5132_);
v_stop_boxed_5136_ = lean_unbox_usize(v_stop_5133_);
lean_dec(v_stop_5133_);
v_res_5137_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__1(v_00_u03b1_5130_, v_as_5131_, v_i_boxed_5135_, v_stop_boxed_5136_, v_b_5134_);
lean_dec_ref(v_as_5131_);
return v_res_5137_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5138_, lean_object* v_as_5139_, size_t v_i_5140_, size_t v_stop_5141_, lean_object* v_b_5142_){
_start:
{
lean_object* v___x_5143_; 
v___x_5143_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___redArg(v_as_5139_, v_i_5140_, v_stop_5141_, v_b_5142_);
return v___x_5143_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5144_, lean_object* v_as_5145_, lean_object* v_i_5146_, lean_object* v_stop_5147_, lean_object* v_b_5148_){
_start:
{
size_t v_i_boxed_5149_; size_t v_stop_boxed_5150_; lean_object* v_res_5151_; 
v_i_boxed_5149_ = lean_unbox_usize(v_i_5146_);
lean_dec(v_i_5146_);
v_stop_boxed_5150_ = lean_unbox_usize(v_stop_5147_);
lean_dec(v_stop_5147_);
v_res_5151_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toList_spec__0_spec__0_spec__1(v_00_u03b1_5144_, v_as_5145_, v_i_boxed_5149_, v_stop_boxed_5150_, v_b_5148_);
lean_dec_ref(v_as_5145_);
return v_res_5151_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg___lam__0(lean_object* v_l_5152_, lean_object* v_n_5153_, lean_object* v_v_5154_){
_start:
{
lean_object* v___x_5155_; lean_object* v___x_5156_; 
v___x_5155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5155_, 0, v_n_5153_);
lean_ctor_set(v___x_5155_, 1, v_v_5154_);
v___x_5156_ = lean_array_push(v_l_5152_, v___x_5155_);
return v___x_5156_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(lean_object* v_t_5157_, lean_object* v_init_5158_){
_start:
{
lean_object* v_key_5159_; lean_object* v_val_x3f_5160_; lean_object* v_children_5161_; lean_object* v_s_5163_; 
v_key_5159_ = lean_ctor_get(v_t_5157_, 0);
v_val_x3f_5160_ = lean_ctor_get(v_t_5157_, 1);
v_children_5161_ = lean_ctor_get(v_t_5157_, 2);
if (lean_obj_tag(v_val_x3f_5160_) == 1)
{
lean_object* v_val_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; 
v_val_5170_ = lean_ctor_get(v_val_x3f_5160_, 0);
lean_inc(v_val_5170_);
lean_inc(v_key_5159_);
v___x_5171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5171_, 0, v_key_5159_);
lean_ctor_set(v___x_5171_, 1, v_val_5170_);
v___x_5172_ = lean_array_push(v_init_5158_, v___x_5171_);
v_s_5163_ = v___x_5172_;
goto v___jp_5162_;
}
else
{
v_s_5163_ = v_init_5158_;
goto v___jp_5162_;
}
v___jp_5162_:
{
lean_object* v___x_5164_; lean_object* v___x_5165_; uint8_t v___x_5166_; 
v___x_5164_ = lean_unsigned_to_nat(0u);
v___x_5165_ = lean_array_get_size(v_children_5161_);
v___x_5166_ = lean_nat_dec_lt(v___x_5164_, v___x_5165_);
if (v___x_5166_ == 0)
{
return v_s_5163_;
}
else
{
size_t v___x_5167_; size_t v___x_5168_; lean_object* v___x_5169_; 
v___x_5167_ = ((size_t)0ULL);
v___x_5168_ = lean_usize_of_nat(v___x_5165_);
v___x_5169_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_children_5161_, v___x_5167_, v___x_5168_, v_s_5163_);
return v___x_5169_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(lean_object* v_as_5173_, size_t v_i_5174_, size_t v_stop_5175_, lean_object* v_b_5176_){
_start:
{
uint8_t v___x_5177_; 
v___x_5177_ = lean_usize_dec_eq(v_i_5174_, v_stop_5175_);
if (v___x_5177_ == 0)
{
lean_object* v___x_5178_; lean_object* v___x_5179_; size_t v___x_5180_; size_t v___x_5181_; 
v___x_5178_ = lean_array_uget_borrowed(v_as_5173_, v_i_5174_);
v___x_5179_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v___x_5178_, v_b_5176_);
v___x_5180_ = ((size_t)1ULL);
v___x_5181_ = lean_usize_add(v_i_5174_, v___x_5180_);
v_i_5174_ = v___x_5181_;
v_b_5176_ = v___x_5179_;
goto _start;
}
else
{
return v_b_5176_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_5183_, lean_object* v_i_5184_, lean_object* v_stop_5185_, lean_object* v_b_5186_){
_start:
{
size_t v_i_boxed_5187_; size_t v_stop_boxed_5188_; lean_object* v_res_5189_; 
v_i_boxed_5187_ = lean_unbox_usize(v_i_5184_);
lean_dec(v_i_5184_);
v_stop_boxed_5188_ = lean_unbox_usize(v_stop_5185_);
lean_dec(v_stop_5185_);
v_res_5189_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_as_5183_, v_i_boxed_5187_, v_stop_boxed_5188_, v_b_5186_);
lean_dec_ref(v_as_5183_);
return v_res_5189_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___boxed(lean_object* v_t_5190_, lean_object* v_init_5191_){
_start:
{
lean_object* v_res_5192_; 
v_res_5192_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_t_5190_, v_init_5191_);
lean_dec_ref(v_t_5190_);
return v_res_5192_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(lean_object* v_t_5193_, lean_object* v_init_5194_){
_start:
{
switch(lean_obj_tag(v_t_5193_))
{
case 0:
{
lean_object* v_tree_5195_; lean_object* v___x_5196_; 
v_tree_5195_ = lean_ctor_get(v_t_5193_, 1);
lean_inc_ref(v_tree_5195_);
lean_dec_ref_known(v_t_5193_, 2);
v___x_5196_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_tree_5195_, v_init_5194_);
lean_dec_ref(v_tree_5195_);
return v___x_5196_;
}
case 1:
{
lean_object* v_key_5197_; lean_object* v_entry_x3f_5198_; lean_object* v_children_5199_; lean_object* v_s_5201_; 
v_key_5197_ = lean_ctor_get(v_t_5193_, 0);
lean_inc(v_key_5197_);
v_entry_x3f_5198_ = lean_ctor_get(v_t_5193_, 1);
lean_inc(v_entry_x3f_5198_);
v_children_5199_ = lean_ctor_get(v_t_5193_, 2);
lean_inc_ref(v_children_5199_);
lean_dec_ref_known(v_t_5193_, 4);
if (lean_obj_tag(v_entry_x3f_5198_) == 1)
{
lean_object* v_val_5208_; lean_object* v_fst_5209_; lean_object* v___x_5210_; 
v_val_5208_ = lean_ctor_get(v_entry_x3f_5198_, 0);
lean_inc(v_val_5208_);
lean_dec_ref_known(v_entry_x3f_5198_, 1);
v_fst_5209_ = lean_ctor_get(v_val_5208_, 0);
lean_inc(v_fst_5209_);
lean_dec(v_val_5208_);
v___x_5210_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg___lam__0(v_init_5194_, v_key_5197_, v_fst_5209_);
v_s_5201_ = v___x_5210_;
goto v___jp_5200_;
}
else
{
lean_dec(v_entry_x3f_5198_);
lean_dec(v_key_5197_);
v_s_5201_ = v_init_5194_;
goto v___jp_5200_;
}
v___jp_5200_:
{
lean_object* v___x_5202_; lean_object* v___x_5203_; uint8_t v___x_5204_; 
v___x_5202_ = lean_unsigned_to_nat(0u);
v___x_5203_ = lean_array_get_size(v_children_5199_);
v___x_5204_ = lean_nat_dec_lt(v___x_5202_, v___x_5203_);
if (v___x_5204_ == 0)
{
lean_dec_ref(v_children_5199_);
return v_s_5201_;
}
else
{
size_t v___x_5205_; size_t v___x_5206_; lean_object* v___x_5207_; 
v___x_5205_ = ((size_t)0ULL);
v___x_5206_ = lean_usize_of_nat(v___x_5203_);
v___x_5207_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_children_5199_, v___x_5205_, v___x_5206_, v_s_5201_);
lean_dec_ref(v_children_5199_);
return v___x_5207_;
}
}
}
case 2:
{
lean_object* v_key_5211_; lean_object* v_entry_5212_; lean_object* v_expanded_5213_; lean_object* v_s_5215_; lean_object* v___x_5224_; 
v_key_5211_ = lean_ctor_get(v_t_5193_, 0);
lean_inc(v_key_5211_);
v_entry_5212_ = lean_ctor_get(v_t_5193_, 1);
lean_inc_ref(v_entry_5212_);
v_expanded_5213_ = lean_ctor_get(v_t_5193_, 2);
lean_inc_ref(v_expanded_5213_);
lean_dec_ref_known(v_t_5193_, 3);
v___x_5224_ = lean_imported_consts_force_shared(v_entry_5212_);
lean_dec_ref(v_entry_5212_);
if (lean_obj_tag(v___x_5224_) == 1)
{
lean_object* v_val_5225_; lean_object* v_fst_5226_; lean_object* v___x_5227_; 
v_val_5225_ = lean_ctor_get(v___x_5224_, 0);
lean_inc(v_val_5225_);
lean_dec_ref_known(v___x_5224_, 1);
v_fst_5226_ = lean_ctor_get(v_val_5225_, 0);
lean_inc(v_fst_5226_);
lean_dec(v_val_5225_);
v___x_5227_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg___lam__0(v_init_5194_, v_key_5211_, v_fst_5226_);
v_s_5215_ = v___x_5227_;
goto v___jp_5214_;
}
else
{
lean_dec(v___x_5224_);
lean_dec(v_key_5211_);
v_s_5215_ = v_init_5194_;
goto v___jp_5214_;
}
v___jp_5214_:
{
lean_object* v___x_5216_; lean_object* v_fst_5217_; lean_object* v___x_5218_; lean_object* v___x_5219_; uint8_t v___x_5220_; 
v___x_5216_ = lean_imported_consts_force_shared(v_expanded_5213_);
lean_dec_ref(v_expanded_5213_);
v_fst_5217_ = lean_ctor_get(v___x_5216_, 0);
lean_inc(v_fst_5217_);
lean_dec(v___x_5216_);
v___x_5218_ = lean_unsigned_to_nat(0u);
v___x_5219_ = lean_array_get_size(v_fst_5217_);
v___x_5220_ = lean_nat_dec_lt(v___x_5218_, v___x_5219_);
if (v___x_5220_ == 0)
{
lean_dec(v_fst_5217_);
return v_s_5215_;
}
else
{
size_t v___x_5221_; size_t v___x_5222_; lean_object* v___x_5223_; 
v___x_5221_ = ((size_t)0ULL);
v___x_5222_ = lean_usize_of_nat(v___x_5219_);
v___x_5223_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_fst_5217_, v___x_5221_, v___x_5222_, v_s_5215_);
lean_dec(v_fst_5217_);
return v___x_5223_;
}
}
}
default: 
{
lean_object* v_tree_5228_; 
v_tree_5228_ = lean_ctor_get(v_t_5193_, 1);
lean_inc_ref(v_tree_5228_);
lean_dec_ref_known(v_t_5193_, 2);
v_t_5193_ = v_tree_5228_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(lean_object* v_as_5230_, size_t v_i_5231_, size_t v_stop_5232_, lean_object* v_b_5233_){
_start:
{
uint8_t v___x_5234_; 
v___x_5234_ = lean_usize_dec_eq(v_i_5231_, v_stop_5232_);
if (v___x_5234_ == 0)
{
lean_object* v___x_5235_; lean_object* v___x_5236_; size_t v___x_5237_; size_t v___x_5238_; 
v___x_5235_ = lean_array_uget_borrowed(v_as_5230_, v_i_5231_);
lean_inc(v___x_5235_);
v___x_5236_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(v___x_5235_, v_b_5233_);
v___x_5237_ = ((size_t)1ULL);
v___x_5238_ = lean_usize_add(v_i_5231_, v___x_5237_);
v_i_5231_ = v___x_5238_;
v_b_5233_ = v___x_5236_;
goto _start;
}
else
{
return v_b_5233_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg___boxed(lean_object* v_as_5240_, lean_object* v_i_5241_, lean_object* v_stop_5242_, lean_object* v_b_5243_){
_start:
{
size_t v_i_boxed_5244_; size_t v_stop_boxed_5245_; lean_object* v_res_5246_; 
v_i_boxed_5244_ = lean_unbox_usize(v_i_5241_);
lean_dec(v_i_5241_);
v_stop_boxed_5245_ = lean_unbox_usize(v_stop_5242_);
lean_dec(v_stop_5242_);
v_res_5246_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_as_5240_, v_i_boxed_5244_, v_stop_boxed_5245_, v_b_5243_);
lean_dec_ref(v_as_5240_);
return v_res_5246_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray___redArg(lean_object* v_t_5249_){
_start:
{
lean_object* v___x_5250_; lean_object* v___x_5251_; 
v___x_5250_ = ((lean_object*)(l_Lean_ImportedConsts_toArray___redArg___closed__0));
v___x_5251_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(v_t_5249_, v___x_5250_);
return v___x_5251_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray(lean_object* v_00_u03b1_5252_, lean_object* v_t_5253_){
_start:
{
lean_object* v___x_5254_; 
v___x_5254_ = l_Lean_ImportedConsts_toArray___redArg(v_t_5253_);
return v___x_5254_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0(lean_object* v_00_u03b1_5255_, lean_object* v_t_5256_, lean_object* v_init_5257_){
_start:
{
lean_object* v___x_5258_; 
v___x_5258_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(v_t_5256_, v_init_5257_);
return v___x_5258_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0(lean_object* v_00_u03b1_5259_, lean_object* v_t_5260_, lean_object* v_init_5261_){
_start:
{
lean_object* v___x_5262_; 
v___x_5262_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_t_5260_, v_init_5261_);
return v___x_5262_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5263_, lean_object* v_t_5264_, lean_object* v_init_5265_){
_start:
{
lean_object* v_res_5266_; 
v_res_5266_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0(v_00_u03b1_5263_, v_t_5264_, v_init_5265_);
lean_dec_ref(v_t_5264_);
return v_res_5266_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1(lean_object* v_00_u03b1_5267_, lean_object* v_as_5268_, size_t v_i_5269_, size_t v_stop_5270_, lean_object* v_b_5271_){
_start:
{
lean_object* v___x_5272_; 
v___x_5272_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___redArg(v_as_5268_, v_i_5269_, v_stop_5270_, v_b_5271_);
return v___x_5272_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5273_, lean_object* v_as_5274_, lean_object* v_i_5275_, lean_object* v_stop_5276_, lean_object* v_b_5277_){
_start:
{
size_t v_i_boxed_5278_; size_t v_stop_boxed_5279_; lean_object* v_res_5280_; 
v_i_boxed_5278_ = lean_unbox_usize(v_i_5275_);
lean_dec(v_i_5275_);
v_stop_boxed_5279_ = lean_unbox_usize(v_stop_5276_);
lean_dec(v_stop_5276_);
v_res_5280_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__1(v_00_u03b1_5273_, v_as_5274_, v_i_boxed_5278_, v_stop_boxed_5279_, v_b_5277_);
lean_dec_ref(v_as_5274_);
return v_res_5280_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5281_, lean_object* v_as_5282_, size_t v_i_5283_, size_t v_stop_5284_, lean_object* v_b_5285_){
_start:
{
lean_object* v___x_5286_; 
v___x_5286_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_as_5282_, v_i_5283_, v_stop_5284_, v_b_5285_);
return v___x_5286_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5287_, lean_object* v_as_5288_, lean_object* v_i_5289_, lean_object* v_stop_5290_, lean_object* v_b_5291_){
_start:
{
size_t v_i_boxed_5292_; size_t v_stop_boxed_5293_; lean_object* v_res_5294_; 
v_i_boxed_5292_ = lean_unbox_usize(v_i_5289_);
lean_dec(v_i_5289_);
v_stop_boxed_5293_ = lean_unbox_usize(v_stop_5290_);
lean_dec(v_stop_5290_);
v_res_5294_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1(v_00_u03b1_5287_, v_as_5288_, v_i_boxed_5292_, v_stop_boxed_5293_, v_b_5291_);
lean_dec_ref(v_as_5288_);
return v_res_5294_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(lean_object* v_t_5295_, lean_object* v_init_5296_){
_start:
{
lean_object* v_key_5297_; lean_object* v_val_x3f_5298_; lean_object* v_children_5299_; lean_object* v_s_5301_; 
v_key_5297_ = lean_ctor_get(v_t_5295_, 0);
v_val_x3f_5298_ = lean_ctor_get(v_t_5295_, 1);
v_children_5299_ = lean_ctor_get(v_t_5295_, 2);
if (lean_obj_tag(v_val_x3f_5298_) == 1)
{
lean_object* v___x_5308_; 
lean_inc(v_key_5297_);
v___x_5308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5308_, 0, v_key_5297_);
lean_ctor_set(v___x_5308_, 1, v_init_5296_);
v_s_5301_ = v___x_5308_;
goto v___jp_5300_;
}
else
{
v_s_5301_ = v_init_5296_;
goto v___jp_5300_;
}
v___jp_5300_:
{
lean_object* v___x_5302_; lean_object* v___x_5303_; uint8_t v___x_5304_; 
v___x_5302_ = lean_unsigned_to_nat(0u);
v___x_5303_ = lean_array_get_size(v_children_5299_);
v___x_5304_ = lean_nat_dec_lt(v___x_5302_, v___x_5303_);
if (v___x_5304_ == 0)
{
return v_s_5301_;
}
else
{
size_t v___x_5305_; size_t v___x_5306_; lean_object* v___x_5307_; 
v___x_5305_ = ((size_t)0ULL);
v___x_5306_ = lean_usize_of_nat(v___x_5303_);
v___x_5307_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v_children_5299_, v___x_5305_, v___x_5306_, v_s_5301_);
return v___x_5307_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(lean_object* v_as_5309_, size_t v_i_5310_, size_t v_stop_5311_, lean_object* v_b_5312_){
_start:
{
uint8_t v___x_5313_; 
v___x_5313_ = lean_usize_dec_eq(v_i_5310_, v_stop_5311_);
if (v___x_5313_ == 0)
{
lean_object* v___x_5314_; lean_object* v___x_5315_; size_t v___x_5316_; size_t v___x_5317_; 
v___x_5314_ = lean_array_uget_borrowed(v_as_5309_, v_i_5310_);
v___x_5315_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v___x_5314_, v_b_5312_);
v___x_5316_ = ((size_t)1ULL);
v___x_5317_ = lean_usize_add(v_i_5310_, v___x_5316_);
v_i_5310_ = v___x_5317_;
v_b_5312_ = v___x_5315_;
goto _start;
}
else
{
return v_b_5312_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_5319_, lean_object* v_i_5320_, lean_object* v_stop_5321_, lean_object* v_b_5322_){
_start:
{
size_t v_i_boxed_5323_; size_t v_stop_boxed_5324_; lean_object* v_res_5325_; 
v_i_boxed_5323_ = lean_unbox_usize(v_i_5320_);
lean_dec(v_i_5320_);
v_stop_boxed_5324_ = lean_unbox_usize(v_stop_5321_);
lean_dec(v_stop_5321_);
v_res_5325_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v_as_5319_, v_i_boxed_5323_, v_stop_boxed_5324_, v_b_5322_);
lean_dec_ref(v_as_5319_);
return v_res_5325_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg___boxed(lean_object* v_t_5326_, lean_object* v_init_5327_){
_start:
{
lean_object* v_res_5328_; 
v_res_5328_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_t_5326_, v_init_5327_);
lean_dec_ref(v_t_5326_);
return v_res_5328_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(lean_object* v_t_5329_, lean_object* v_init_5330_){
_start:
{
switch(lean_obj_tag(v_t_5329_))
{
case 0:
{
lean_object* v_tree_5331_; lean_object* v___x_5332_; 
v_tree_5331_ = lean_ctor_get(v_t_5329_, 1);
v___x_5332_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_tree_5331_, v_init_5330_);
return v___x_5332_;
}
case 1:
{
lean_object* v_key_5333_; lean_object* v_entry_x3f_5334_; lean_object* v_children_5335_; lean_object* v_s_5337_; 
v_key_5333_ = lean_ctor_get(v_t_5329_, 0);
v_entry_x3f_5334_ = lean_ctor_get(v_t_5329_, 1);
v_children_5335_ = lean_ctor_get(v_t_5329_, 2);
if (lean_obj_tag(v_entry_x3f_5334_) == 1)
{
lean_object* v___x_5344_; 
lean_inc(v_key_5333_);
v___x_5344_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5344_, 0, v_key_5333_);
lean_ctor_set(v___x_5344_, 1, v_init_5330_);
v_s_5337_ = v___x_5344_;
goto v___jp_5336_;
}
else
{
v_s_5337_ = v_init_5330_;
goto v___jp_5336_;
}
v___jp_5336_:
{
lean_object* v___x_5338_; lean_object* v___x_5339_; uint8_t v___x_5340_; 
v___x_5338_ = lean_unsigned_to_nat(0u);
v___x_5339_ = lean_array_get_size(v_children_5335_);
v___x_5340_ = lean_nat_dec_lt(v___x_5338_, v___x_5339_);
if (v___x_5340_ == 0)
{
return v_s_5337_;
}
else
{
size_t v___x_5341_; size_t v___x_5342_; lean_object* v___x_5343_; 
v___x_5341_ = ((size_t)0ULL);
v___x_5342_ = lean_usize_of_nat(v___x_5339_);
v___x_5343_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_children_5335_, v___x_5341_, v___x_5342_, v_s_5337_);
return v___x_5343_;
}
}
}
case 2:
{
lean_object* v_key_5345_; lean_object* v_entry_5346_; lean_object* v_expanded_5347_; lean_object* v_s_5349_; lean_object* v___x_5358_; 
v_key_5345_ = lean_ctor_get(v_t_5329_, 0);
v_entry_5346_ = lean_ctor_get(v_t_5329_, 1);
v_expanded_5347_ = lean_ctor_get(v_t_5329_, 2);
v___x_5358_ = lean_imported_consts_force_shared(v_entry_5346_);
if (lean_obj_tag(v___x_5358_) == 1)
{
lean_object* v___x_5359_; 
lean_dec_ref_known(v___x_5358_, 1);
lean_inc(v_key_5345_);
v___x_5359_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5359_, 0, v_key_5345_);
lean_ctor_set(v___x_5359_, 1, v_init_5330_);
v_s_5349_ = v___x_5359_;
goto v___jp_5348_;
}
else
{
lean_dec(v___x_5358_);
v_s_5349_ = v_init_5330_;
goto v___jp_5348_;
}
v___jp_5348_:
{
lean_object* v___x_5350_; lean_object* v_fst_5351_; lean_object* v___x_5352_; lean_object* v___x_5353_; uint8_t v___x_5354_; 
v___x_5350_ = lean_imported_consts_force_shared(v_expanded_5347_);
v_fst_5351_ = lean_ctor_get(v___x_5350_, 0);
lean_inc(v_fst_5351_);
lean_dec(v___x_5350_);
v___x_5352_ = lean_unsigned_to_nat(0u);
v___x_5353_ = lean_array_get_size(v_fst_5351_);
v___x_5354_ = lean_nat_dec_lt(v___x_5352_, v___x_5353_);
if (v___x_5354_ == 0)
{
lean_dec(v_fst_5351_);
return v_s_5349_;
}
else
{
size_t v___x_5355_; size_t v___x_5356_; lean_object* v___x_5357_; 
v___x_5355_ = ((size_t)0ULL);
v___x_5356_ = lean_usize_of_nat(v___x_5353_);
v___x_5357_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_fst_5351_, v___x_5355_, v___x_5356_, v_s_5349_);
lean_dec(v_fst_5351_);
return v___x_5357_;
}
}
}
default: 
{
lean_object* v_tree_5360_; 
v_tree_5360_ = lean_ctor_get(v_t_5329_, 1);
v_t_5329_ = v_tree_5360_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(lean_object* v_as_5362_, size_t v_i_5363_, size_t v_stop_5364_, lean_object* v_b_5365_){
_start:
{
uint8_t v___x_5366_; 
v___x_5366_ = lean_usize_dec_eq(v_i_5363_, v_stop_5364_);
if (v___x_5366_ == 0)
{
lean_object* v___x_5367_; lean_object* v___x_5368_; size_t v___x_5369_; size_t v___x_5370_; 
v___x_5367_ = lean_array_uget_borrowed(v_as_5362_, v_i_5363_);
v___x_5368_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v___x_5367_, v_b_5365_);
v___x_5369_ = ((size_t)1ULL);
v___x_5370_ = lean_usize_add(v_i_5363_, v___x_5369_);
v_i_5363_ = v___x_5370_;
v_b_5365_ = v___x_5368_;
goto _start;
}
else
{
return v_b_5365_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg___boxed(lean_object* v_as_5372_, lean_object* v_i_5373_, lean_object* v_stop_5374_, lean_object* v_b_5375_){
_start:
{
size_t v_i_boxed_5376_; size_t v_stop_boxed_5377_; lean_object* v_res_5378_; 
v_i_boxed_5376_ = lean_unbox_usize(v_i_5373_);
lean_dec(v_i_5373_);
v_stop_boxed_5377_ = lean_unbox_usize(v_stop_5374_);
lean_dec(v_stop_5374_);
v_res_5378_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_as_5372_, v_i_boxed_5376_, v_stop_boxed_5377_, v_b_5375_);
lean_dec_ref(v_as_5372_);
return v_res_5378_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg___boxed(lean_object* v_t_5379_, lean_object* v_init_5380_){
_start:
{
lean_object* v_res_5381_; 
v_res_5381_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v_t_5379_, v_init_5380_);
lean_dec_ref(v_t_5379_);
return v_res_5381_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___redArg(lean_object* v_t_5382_){
_start:
{
lean_object* v___x_5383_; lean_object* v___x_5384_; 
v___x_5383_ = lean_box(0);
v___x_5384_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v_t_5382_, v___x_5383_);
return v___x_5384_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___redArg___boxed(lean_object* v_t_5385_){
_start:
{
lean_object* v_res_5386_; 
v_res_5386_ = l_Lean_ImportedConsts_keys___redArg(v_t_5385_);
lean_dec_ref(v_t_5385_);
return v_res_5386_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys(lean_object* v_00_u03b1_5387_, lean_object* v_t_5388_){
_start:
{
lean_object* v___x_5389_; 
v___x_5389_ = l_Lean_ImportedConsts_keys___redArg(v_t_5388_);
return v___x_5389_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_keys___boxed(lean_object* v_00_u03b1_5390_, lean_object* v_t_5391_){
_start:
{
lean_object* v_res_5392_; 
v_res_5392_ = l_Lean_ImportedConsts_keys(v_00_u03b1_5390_, v_t_5391_);
lean_dec_ref(v_t_5391_);
return v_res_5392_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0(lean_object* v_00_u03b1_5393_, lean_object* v_t_5394_, lean_object* v_init_5395_){
_start:
{
lean_object* v___x_5396_; 
v___x_5396_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___redArg(v_t_5394_, v_init_5395_);
return v___x_5396_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0___boxed(lean_object* v_00_u03b1_5397_, lean_object* v_t_5398_, lean_object* v_init_5399_){
_start:
{
lean_object* v_res_5400_; 
v_res_5400_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0(v_00_u03b1_5397_, v_t_5398_, v_init_5399_);
lean_dec_ref(v_t_5398_);
return v_res_5400_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0(lean_object* v_00_u03b1_5401_, lean_object* v_t_5402_, lean_object* v_init_5403_){
_start:
{
lean_object* v___x_5404_; 
v___x_5404_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___redArg(v_t_5402_, v_init_5403_);
return v___x_5404_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0___boxed(lean_object* v_00_u03b1_5405_, lean_object* v_t_5406_, lean_object* v_init_5407_){
_start:
{
lean_object* v_res_5408_; 
v_res_5408_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0(v_00_u03b1_5405_, v_t_5406_, v_init_5407_);
lean_dec_ref(v_t_5406_);
return v_res_5408_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1(lean_object* v_00_u03b1_5409_, lean_object* v_as_5410_, size_t v_i_5411_, size_t v_stop_5412_, lean_object* v_b_5413_){
_start:
{
lean_object* v___x_5414_; 
v___x_5414_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___redArg(v_as_5410_, v_i_5411_, v_stop_5412_, v_b_5413_);
return v___x_5414_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5415_, lean_object* v_as_5416_, lean_object* v_i_5417_, lean_object* v_stop_5418_, lean_object* v_b_5419_){
_start:
{
size_t v_i_boxed_5420_; size_t v_stop_boxed_5421_; lean_object* v_res_5422_; 
v_i_boxed_5420_ = lean_unbox_usize(v_i_5417_);
lean_dec(v_i_5417_);
v_stop_boxed_5421_ = lean_unbox_usize(v_stop_5418_);
lean_dec(v_stop_5418_);
v_res_5422_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__1(v_00_u03b1_5415_, v_as_5416_, v_i_boxed_5420_, v_stop_boxed_5421_, v_b_5419_);
lean_dec_ref(v_as_5416_);
return v_res_5422_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5423_, lean_object* v_as_5424_, size_t v_i_5425_, size_t v_stop_5426_, lean_object* v_b_5427_){
_start:
{
lean_object* v___x_5428_; 
v___x_5428_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___redArg(v_as_5424_, v_i_5425_, v_stop_5426_, v_b_5427_);
return v___x_5428_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5429_, lean_object* v_as_5430_, lean_object* v_i_5431_, lean_object* v_stop_5432_, lean_object* v_b_5433_){
_start:
{
size_t v_i_boxed_5434_; size_t v_stop_boxed_5435_; lean_object* v_res_5436_; 
v_i_boxed_5434_ = lean_unbox_usize(v_i_5431_);
lean_dec(v_i_5431_);
v_stop_boxed_5435_ = lean_unbox_usize(v_stop_5432_);
lean_dec(v_stop_5432_);
v_res_5436_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_keys_spec__0_spec__0_spec__1(v_00_u03b1_5429_, v_as_5430_, v_i_boxed_5434_, v_stop_boxed_5435_, v_b_5433_);
lean_dec_ref(v_as_5430_);
return v_res_5436_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(lean_object* v_t_5437_, lean_object* v_init_5438_){
_start:
{
lean_object* v_val_x3f_5439_; lean_object* v_children_5440_; lean_object* v_s_5442_; 
v_val_x3f_5439_ = lean_ctor_get(v_t_5437_, 1);
v_children_5440_ = lean_ctor_get(v_t_5437_, 2);
if (lean_obj_tag(v_val_x3f_5439_) == 1)
{
lean_object* v_val_5449_; lean_object* v___x_5450_; 
v_val_5449_ = lean_ctor_get(v_val_x3f_5439_, 0);
lean_inc(v_val_5449_);
v___x_5450_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5450_, 0, v_val_5449_);
lean_ctor_set(v___x_5450_, 1, v_init_5438_);
v_s_5442_ = v___x_5450_;
goto v___jp_5441_;
}
else
{
v_s_5442_ = v_init_5438_;
goto v___jp_5441_;
}
v___jp_5441_:
{
lean_object* v___x_5443_; lean_object* v___x_5444_; uint8_t v___x_5445_; 
v___x_5443_ = lean_unsigned_to_nat(0u);
v___x_5444_ = lean_array_get_size(v_children_5440_);
v___x_5445_ = lean_nat_dec_lt(v___x_5443_, v___x_5444_);
if (v___x_5445_ == 0)
{
return v_s_5442_;
}
else
{
size_t v___x_5446_; size_t v___x_5447_; lean_object* v___x_5448_; 
v___x_5446_ = ((size_t)0ULL);
v___x_5447_ = lean_usize_of_nat(v___x_5444_);
v___x_5448_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_children_5440_, v___x_5446_, v___x_5447_, v_s_5442_);
return v___x_5448_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(lean_object* v_as_5451_, size_t v_i_5452_, size_t v_stop_5453_, lean_object* v_b_5454_){
_start:
{
uint8_t v___x_5455_; 
v___x_5455_ = lean_usize_dec_eq(v_i_5452_, v_stop_5453_);
if (v___x_5455_ == 0)
{
lean_object* v___x_5456_; lean_object* v___x_5457_; size_t v___x_5458_; size_t v___x_5459_; 
v___x_5456_ = lean_array_uget_borrowed(v_as_5451_, v_i_5452_);
v___x_5457_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v___x_5456_, v_b_5454_);
v___x_5458_ = ((size_t)1ULL);
v___x_5459_ = lean_usize_add(v_i_5452_, v___x_5458_);
v_i_5452_ = v___x_5459_;
v_b_5454_ = v___x_5457_;
goto _start;
}
else
{
return v_b_5454_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_5461_, lean_object* v_i_5462_, lean_object* v_stop_5463_, lean_object* v_b_5464_){
_start:
{
size_t v_i_boxed_5465_; size_t v_stop_boxed_5466_; lean_object* v_res_5467_; 
v_i_boxed_5465_ = lean_unbox_usize(v_i_5462_);
lean_dec(v_i_5462_);
v_stop_boxed_5466_ = lean_unbox_usize(v_stop_5463_);
lean_dec(v_stop_5463_);
v_res_5467_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_as_5461_, v_i_boxed_5465_, v_stop_boxed_5466_, v_b_5464_);
lean_dec_ref(v_as_5461_);
return v_res_5467_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg___boxed(lean_object* v_t_5468_, lean_object* v_init_5469_){
_start:
{
lean_object* v_res_5470_; 
v_res_5470_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_t_5468_, v_init_5469_);
lean_dec_ref(v_t_5468_);
return v_res_5470_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(lean_object* v_t_5471_, lean_object* v_init_5472_){
_start:
{
switch(lean_obj_tag(v_t_5471_))
{
case 0:
{
lean_object* v_tree_5473_; lean_object* v___x_5474_; 
v_tree_5473_ = lean_ctor_get(v_t_5471_, 1);
lean_inc_ref(v_tree_5473_);
lean_dec_ref_known(v_t_5471_, 2);
v___x_5474_ = l_Lean_ConstTrie_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_tree_5473_, v_init_5472_);
lean_dec_ref(v_tree_5473_);
return v___x_5474_;
}
case 1:
{
lean_object* v_entry_x3f_5475_; lean_object* v_children_5476_; lean_object* v_s_5478_; 
v_entry_x3f_5475_ = lean_ctor_get(v_t_5471_, 1);
lean_inc(v_entry_x3f_5475_);
v_children_5476_ = lean_ctor_get(v_t_5471_, 2);
lean_inc_ref(v_children_5476_);
lean_dec_ref_known(v_t_5471_, 4);
if (lean_obj_tag(v_entry_x3f_5475_) == 1)
{
lean_object* v_val_5485_; lean_object* v_fst_5486_; lean_object* v___x_5488_; uint8_t v_isShared_5489_; uint8_t v_isSharedCheck_5493_; 
v_val_5485_ = lean_ctor_get(v_entry_x3f_5475_, 0);
lean_inc(v_val_5485_);
lean_dec_ref_known(v_entry_x3f_5475_, 1);
v_fst_5486_ = lean_ctor_get(v_val_5485_, 0);
v_isSharedCheck_5493_ = !lean_is_exclusive(v_val_5485_);
if (v_isSharedCheck_5493_ == 0)
{
lean_object* v_unused_5494_; 
v_unused_5494_ = lean_ctor_get(v_val_5485_, 1);
lean_dec(v_unused_5494_);
v___x_5488_ = v_val_5485_;
v_isShared_5489_ = v_isSharedCheck_5493_;
goto v_resetjp_5487_;
}
else
{
lean_inc(v_fst_5486_);
lean_dec(v_val_5485_);
v___x_5488_ = lean_box(0);
v_isShared_5489_ = v_isSharedCheck_5493_;
goto v_resetjp_5487_;
}
v_resetjp_5487_:
{
lean_object* v___x_5491_; 
if (v_isShared_5489_ == 0)
{
lean_ctor_set_tag(v___x_5488_, 1);
lean_ctor_set(v___x_5488_, 1, v_init_5472_);
v___x_5491_ = v___x_5488_;
goto v_reusejp_5490_;
}
else
{
lean_object* v_reuseFailAlloc_5492_; 
v_reuseFailAlloc_5492_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5492_, 0, v_fst_5486_);
lean_ctor_set(v_reuseFailAlloc_5492_, 1, v_init_5472_);
v___x_5491_ = v_reuseFailAlloc_5492_;
goto v_reusejp_5490_;
}
v_reusejp_5490_:
{
v_s_5478_ = v___x_5491_;
goto v___jp_5477_;
}
}
}
else
{
lean_dec(v_entry_x3f_5475_);
v_s_5478_ = v_init_5472_;
goto v___jp_5477_;
}
v___jp_5477_:
{
lean_object* v___x_5479_; lean_object* v___x_5480_; uint8_t v___x_5481_; 
v___x_5479_ = lean_unsigned_to_nat(0u);
v___x_5480_ = lean_array_get_size(v_children_5476_);
v___x_5481_ = lean_nat_dec_lt(v___x_5479_, v___x_5480_);
if (v___x_5481_ == 0)
{
lean_dec_ref(v_children_5476_);
return v_s_5478_;
}
else
{
size_t v___x_5482_; size_t v___x_5483_; lean_object* v___x_5484_; 
v___x_5482_ = ((size_t)0ULL);
v___x_5483_ = lean_usize_of_nat(v___x_5480_);
v___x_5484_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(v_children_5476_, v___x_5482_, v___x_5483_, v_s_5478_);
lean_dec_ref(v_children_5476_);
return v___x_5484_;
}
}
}
case 2:
{
lean_object* v_entry_5495_; lean_object* v_expanded_5496_; lean_object* v_s_5498_; lean_object* v___x_5507_; 
v_entry_5495_ = lean_ctor_get(v_t_5471_, 1);
lean_inc_ref(v_entry_5495_);
v_expanded_5496_ = lean_ctor_get(v_t_5471_, 2);
lean_inc_ref(v_expanded_5496_);
lean_dec_ref_known(v_t_5471_, 3);
v___x_5507_ = lean_imported_consts_force_shared(v_entry_5495_);
lean_dec_ref(v_entry_5495_);
if (lean_obj_tag(v___x_5507_) == 1)
{
lean_object* v_val_5508_; lean_object* v_fst_5509_; lean_object* v___x_5511_; uint8_t v_isShared_5512_; uint8_t v_isSharedCheck_5516_; 
v_val_5508_ = lean_ctor_get(v___x_5507_, 0);
lean_inc(v_val_5508_);
lean_dec_ref_known(v___x_5507_, 1);
v_fst_5509_ = lean_ctor_get(v_val_5508_, 0);
v_isSharedCheck_5516_ = !lean_is_exclusive(v_val_5508_);
if (v_isSharedCheck_5516_ == 0)
{
lean_object* v_unused_5517_; 
v_unused_5517_ = lean_ctor_get(v_val_5508_, 1);
lean_dec(v_unused_5517_);
v___x_5511_ = v_val_5508_;
v_isShared_5512_ = v_isSharedCheck_5516_;
goto v_resetjp_5510_;
}
else
{
lean_inc(v_fst_5509_);
lean_dec(v_val_5508_);
v___x_5511_ = lean_box(0);
v_isShared_5512_ = v_isSharedCheck_5516_;
goto v_resetjp_5510_;
}
v_resetjp_5510_:
{
lean_object* v___x_5514_; 
if (v_isShared_5512_ == 0)
{
lean_ctor_set_tag(v___x_5511_, 1);
lean_ctor_set(v___x_5511_, 1, v_init_5472_);
v___x_5514_ = v___x_5511_;
goto v_reusejp_5513_;
}
else
{
lean_object* v_reuseFailAlloc_5515_; 
v_reuseFailAlloc_5515_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5515_, 0, v_fst_5509_);
lean_ctor_set(v_reuseFailAlloc_5515_, 1, v_init_5472_);
v___x_5514_ = v_reuseFailAlloc_5515_;
goto v_reusejp_5513_;
}
v_reusejp_5513_:
{
v_s_5498_ = v___x_5514_;
goto v___jp_5497_;
}
}
}
else
{
lean_dec(v___x_5507_);
v_s_5498_ = v_init_5472_;
goto v___jp_5497_;
}
v___jp_5497_:
{
lean_object* v___x_5499_; lean_object* v_fst_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; uint8_t v___x_5503_; 
v___x_5499_ = lean_imported_consts_force_shared(v_expanded_5496_);
lean_dec_ref(v_expanded_5496_);
v_fst_5500_ = lean_ctor_get(v___x_5499_, 0);
lean_inc(v_fst_5500_);
lean_dec(v___x_5499_);
v___x_5501_ = lean_unsigned_to_nat(0u);
v___x_5502_ = lean_array_get_size(v_fst_5500_);
v___x_5503_ = lean_nat_dec_lt(v___x_5501_, v___x_5502_);
if (v___x_5503_ == 0)
{
lean_dec(v_fst_5500_);
return v_s_5498_;
}
else
{
size_t v___x_5504_; size_t v___x_5505_; lean_object* v___x_5506_; 
v___x_5504_ = ((size_t)0ULL);
v___x_5505_ = lean_usize_of_nat(v___x_5502_);
v___x_5506_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__1___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__1___redArg(v_fst_5500_, v___x_5504_, v___x_5505_, v_s_5498_);
lean_dec(v_fst_5500_);
return v___x_5506_;
}
}
}
default: 
{
lean_object* v_tree_5518_; 
v_tree_5518_ = lean_ctor_get(v_t_5471_, 1);
lean_inc_ref(v_tree_5518_);
lean_dec_ref_known(v_t_5471_, 2);
v_t_5471_ = v_tree_5518_;
goto _start;
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
lean_object* v___f_5684_; lean_object* v___f_5685_; lean_object* v___f_5686_; lean_object* v___f_5687_; lean_object* v___x_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___x_5691_; lean_object* v___x_5692_; lean_object* v___x_5693_; lean_object* v___f_5694_; lean_object* v___f_5695_; lean_object* v___f_5696_; lean_object* v___f_5697_; lean_object* v___x_5698_; lean_object* v___x_5699_; lean_object* v___x_5700_; lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; lean_object* v_toApplicative_5704_; lean_object* v_toBind_5705_; lean_object* v_toPure_5706_; lean_object* v___f_5707_; lean_object* v___f_5708_; lean_object* v___f_5709_; lean_object* v___x_138__overap_5710_; lean_object* v___x_5711_; lean_object* v___x_5712_; 
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
v___x_138__overap_5710_ = l_Lean_ImportedConsts_forM___redArg(v___x_5703_, v___y_5681_, v___f_5709_);
v___x_5711_ = lean_apply_1(v___x_138__overap_5710_, v___y_5682_);
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
v___x_5719_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_5719_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap___closed__1(void){
_start:
{
lean_object* v___x_5720_; lean_object* v___x_5721_; 
v___x_5720_ = lean_obj_once(&l_Lean_instInhabitedConstMap___closed__0, &l_Lean_instInhabitedConstMap___closed__0_once, _init_l_Lean_instInhabitedConstMap___closed__0);
v___x_5721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5721_, 0, v___x_5720_);
return v___x_5721_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap___closed__2(void){
_start:
{
lean_object* v___x_5722_; lean_object* v___x_5723_; lean_object* v___x_5724_; 
v___x_5722_ = lean_obj_once(&l_Lean_instInhabitedConstMap___closed__1, &l_Lean_instInhabitedConstMap___closed__1_once, _init_l_Lean_instInhabitedConstMap___closed__1);
v___x_5723_ = lean_obj_once(&l_Lean_ImportedConsts_empty___closed__0, &l_Lean_ImportedConsts_empty___closed__0_once, _init_l_Lean_ImportedConsts_empty___closed__0);
v___x_5724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5724_, 0, v___x_5723_);
lean_ctor_set(v___x_5724_, 1, v___x_5722_);
return v___x_5724_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstMap(void){
_start:
{
lean_object* v___x_5725_; 
v___x_5725_ = lean_obj_once(&l_Lean_instInhabitedConstMap___closed__2, &l_Lean_instInhabitedConstMap___closed__2_once, _init_l_Lean_instInhabitedConstMap___closed__2);
return v___x_5725_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_5726_, lean_object* v_vals_5727_, lean_object* v_i_5728_, lean_object* v_k_5729_){
_start:
{
lean_object* v___x_5730_; uint8_t v___x_5731_; 
v___x_5730_ = lean_array_get_size(v_keys_5726_);
v___x_5731_ = lean_nat_dec_lt(v_i_5728_, v___x_5730_);
if (v___x_5731_ == 0)
{
lean_object* v___x_5732_; 
lean_dec(v_i_5728_);
v___x_5732_ = lean_box(0);
return v___x_5732_;
}
else
{
lean_object* v_k_x27_5733_; uint8_t v___x_5734_; 
v_k_x27_5733_ = lean_array_fget_borrowed(v_keys_5726_, v_i_5728_);
v___x_5734_ = lean_name_eq(v_k_5729_, v_k_x27_5733_);
if (v___x_5734_ == 0)
{
lean_object* v___x_5735_; lean_object* v___x_5736_; 
v___x_5735_ = lean_unsigned_to_nat(1u);
v___x_5736_ = lean_nat_add(v_i_5728_, v___x_5735_);
lean_dec(v_i_5728_);
v_i_5728_ = v___x_5736_;
goto _start;
}
else
{
lean_object* v___x_5738_; lean_object* v___x_5739_; 
v___x_5738_ = lean_array_fget_borrowed(v_vals_5727_, v_i_5728_);
lean_dec(v_i_5728_);
lean_inc(v___x_5738_);
v___x_5739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5739_, 0, v___x_5738_);
return v___x_5739_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_5740_, lean_object* v_vals_5741_, lean_object* v_i_5742_, lean_object* v_k_5743_){
_start:
{
lean_object* v_res_5744_; 
v_res_5744_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_5740_, v_vals_5741_, v_i_5742_, v_k_5743_);
lean_dec(v_k_5743_);
lean_dec_ref(v_vals_5741_);
lean_dec_ref(v_keys_5740_);
return v_res_5744_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(lean_object* v_x_5745_, size_t v_x_5746_, lean_object* v_x_5747_){
_start:
{
if (lean_obj_tag(v_x_5745_) == 0)
{
lean_object* v_es_5748_; lean_object* v___x_5749_; size_t v___x_5750_; size_t v___x_5751_; lean_object* v_j_5752_; lean_object* v___x_5753_; 
v_es_5748_ = lean_ctor_get(v_x_5745_, 0);
v___x_5749_ = lean_box(2);
v___x_5750_ = ((size_t)31ULL);
v___x_5751_ = lean_usize_land(v_x_5746_, v___x_5750_);
v_j_5752_ = lean_usize_to_nat(v___x_5751_);
v___x_5753_ = lean_array_get_borrowed(v___x_5749_, v_es_5748_, v_j_5752_);
lean_dec(v_j_5752_);
switch(lean_obj_tag(v___x_5753_))
{
case 0:
{
lean_object* v_key_5754_; lean_object* v_val_5755_; uint8_t v___x_5756_; 
v_key_5754_ = lean_ctor_get(v___x_5753_, 0);
v_val_5755_ = lean_ctor_get(v___x_5753_, 1);
v___x_5756_ = lean_name_eq(v_x_5747_, v_key_5754_);
if (v___x_5756_ == 0)
{
lean_object* v___x_5757_; 
v___x_5757_ = lean_box(0);
return v___x_5757_;
}
else
{
lean_object* v___x_5758_; 
lean_inc(v_val_5755_);
v___x_5758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5758_, 0, v_val_5755_);
return v___x_5758_;
}
}
case 1:
{
lean_object* v_node_5759_; size_t v___x_5760_; size_t v___x_5761_; 
v_node_5759_ = lean_ctor_get(v___x_5753_, 0);
v___x_5760_ = ((size_t)5ULL);
v___x_5761_ = lean_usize_shift_right(v_x_5746_, v___x_5760_);
v_x_5745_ = v_node_5759_;
v_x_5746_ = v___x_5761_;
goto _start;
}
default: 
{
lean_object* v___x_5763_; 
v___x_5763_ = lean_box(0);
return v___x_5763_;
}
}
}
else
{
lean_object* v_ks_5764_; lean_object* v_vs_5765_; lean_object* v___x_5766_; lean_object* v___x_5767_; 
v_ks_5764_ = lean_ctor_get(v_x_5745_, 0);
v_vs_5765_ = lean_ctor_get(v_x_5745_, 1);
v___x_5766_ = lean_unsigned_to_nat(0u);
v___x_5767_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_ks_5764_, v_vs_5765_, v___x_5766_, v_x_5747_);
return v___x_5767_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_5768_, lean_object* v_x_5769_, lean_object* v_x_5770_){
_start:
{
size_t v_x_166__boxed_5771_; lean_object* v_res_5772_; 
v_x_166__boxed_5771_ = lean_unbox_usize(v_x_5769_);
lean_dec(v_x_5769_);
v_res_5772_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(v_x_5768_, v_x_166__boxed_5771_, v_x_5770_);
lean_dec(v_x_5770_);
lean_dec_ref(v_x_5768_);
return v_res_5772_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(lean_object* v_x_5773_, lean_object* v_x_5774_){
_start:
{
uint64_t v___y_5776_; 
if (lean_obj_tag(v_x_5774_) == 0)
{
uint64_t v___x_5779_; 
v___x_5779_ = 1723ULL;
v___y_5776_ = v___x_5779_;
goto v___jp_5775_;
}
else
{
uint64_t v_hash_5780_; 
v_hash_5780_ = lean_ctor_get_uint64(v_x_5774_, sizeof(void*)*2);
v___y_5776_ = v_hash_5780_;
goto v___jp_5775_;
}
v___jp_5775_:
{
size_t v___x_5777_; lean_object* v___x_5778_; 
v___x_5777_ = lean_uint64_to_usize(v___y_5776_);
v___x_5778_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(v_x_5773_, v___x_5777_, v_x_5774_);
return v___x_5778_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg___boxed(lean_object* v_x_5781_, lean_object* v_x_5782_){
_start:
{
lean_object* v_res_5783_; 
v_res_5783_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_x_5781_, v_x_5782_);
lean_dec(v_x_5782_);
lean_dec_ref(v_x_5781_);
return v_res_5783_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f(lean_object* v_m_5784_, lean_object* v_n_5785_){
_start:
{
lean_object* v_map_u2081_5786_; lean_object* v_map_u2082_5787_; lean_object* v___x_5788_; 
v_map_u2081_5786_ = lean_ctor_get(v_m_5784_, 0);
v_map_u2082_5787_ = lean_ctor_get(v_m_5784_, 1);
v___x_5788_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_map_u2082_5787_, v_n_5785_);
if (lean_obj_tag(v___x_5788_) == 0)
{
lean_object* v___x_5789_; 
v___x_5789_ = lean_imported_consts_find_entry_cached(v_map_u2081_5786_, v_n_5785_);
if (lean_obj_tag(v___x_5789_) == 0)
{
return v___x_5788_;
}
else
{
lean_object* v_val_5790_; lean_object* v___x_5792_; uint8_t v_isShared_5793_; uint8_t v_isSharedCheck_5798_; 
v_val_5790_ = lean_ctor_get(v___x_5789_, 0);
v_isSharedCheck_5798_ = !lean_is_exclusive(v___x_5789_);
if (v_isSharedCheck_5798_ == 0)
{
v___x_5792_ = v___x_5789_;
v_isShared_5793_ = v_isSharedCheck_5798_;
goto v_resetjp_5791_;
}
else
{
lean_inc(v_val_5790_);
lean_dec(v___x_5789_);
v___x_5792_ = lean_box(0);
v_isShared_5793_ = v_isSharedCheck_5798_;
goto v_resetjp_5791_;
}
v_resetjp_5791_:
{
lean_object* v_fst_5794_; lean_object* v___x_5796_; 
v_fst_5794_ = lean_ctor_get(v_val_5790_, 0);
lean_inc(v_fst_5794_);
lean_dec(v_val_5790_);
if (v_isShared_5793_ == 0)
{
lean_ctor_set(v___x_5792_, 0, v_fst_5794_);
v___x_5796_ = v___x_5792_;
goto v_reusejp_5795_;
}
else
{
lean_object* v_reuseFailAlloc_5797_; 
v_reuseFailAlloc_5797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5797_, 0, v_fst_5794_);
v___x_5796_ = v_reuseFailAlloc_5797_;
goto v_reusejp_5795_;
}
v_reusejp_5795_:
{
return v___x_5796_;
}
}
}
}
else
{
return v___x_5788_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f___boxed(lean_object* v_m_5799_, lean_object* v_n_5800_){
_start:
{
lean_object* v_res_5801_; 
v_res_5801_ = l_Lean_ConstMap_find_x3f(v_m_5799_, v_n_5800_);
lean_dec(v_n_5800_);
lean_dec_ref(v_m_5799_);
return v_res_5801_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0(lean_object* v_00_u03b2_5802_, lean_object* v_x_5803_, lean_object* v_x_5804_){
_start:
{
lean_object* v___x_5805_; 
v___x_5805_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_x_5803_, v_x_5804_);
return v___x_5805_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___boxed(lean_object* v_00_u03b2_5806_, lean_object* v_x_5807_, lean_object* v_x_5808_){
_start:
{
lean_object* v_res_5809_; 
v_res_5809_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0(v_00_u03b2_5806_, v_x_5807_, v_x_5808_);
lean_dec(v_x_5808_);
lean_dec_ref(v_x_5807_);
return v_res_5809_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0(lean_object* v_00_u03b2_5810_, lean_object* v_x_5811_, size_t v_x_5812_, lean_object* v_x_5813_){
_start:
{
lean_object* v___x_5814_; 
v___x_5814_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___redArg(v_x_5811_, v_x_5812_, v_x_5813_);
return v___x_5814_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5815_, lean_object* v_x_5816_, lean_object* v_x_5817_, lean_object* v_x_5818_){
_start:
{
size_t v_x_261__boxed_5819_; lean_object* v_res_5820_; 
v_x_261__boxed_5819_ = lean_unbox_usize(v_x_5817_);
lean_dec(v_x_5817_);
v_res_5820_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0(v_00_u03b2_5815_, v_x_5816_, v_x_261__boxed_5819_, v_x_5818_);
lean_dec(v_x_5818_);
lean_dec_ref(v_x_5816_);
return v_res_5820_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5821_, lean_object* v_keys_5822_, lean_object* v_vals_5823_, lean_object* v_heq_5824_, lean_object* v_i_5825_, lean_object* v_k_5826_){
_start:
{
lean_object* v___x_5827_; 
v___x_5827_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___redArg(v_keys_5822_, v_vals_5823_, v_i_5825_, v_k_5826_);
return v___x_5827_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5828_, lean_object* v_keys_5829_, lean_object* v_vals_5830_, lean_object* v_heq_5831_, lean_object* v_i_5832_, lean_object* v_k_5833_){
_start:
{
lean_object* v_res_5834_; 
v_res_5834_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0_spec__0_spec__1(v_00_u03b2_5828_, v_keys_5829_, v_vals_5830_, v_heq_5831_, v_i_5832_, v_k_5833_);
lean_dec(v_k_5833_);
lean_dec_ref(v_vals_5830_);
lean_dec_ref(v_keys_5829_);
return v_res_5834_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f_x27(lean_object* v_m_5835_, lean_object* v_n_5836_){
_start:
{
lean_object* v_map_u2081_5837_; lean_object* v_map_u2082_5838_; lean_object* v___x_5839_; 
v_map_u2081_5837_ = lean_ctor_get(v_m_5835_, 0);
v_map_u2082_5838_ = lean_ctor_get(v_m_5835_, 1);
v___x_5839_ = lean_imported_consts_find_entry_cached(v_map_u2081_5837_, v_n_5836_);
if (lean_obj_tag(v___x_5839_) == 0)
{
lean_object* v___x_5840_; 
v___x_5840_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_ConstMap_find_x3f_spec__0___redArg(v_map_u2082_5838_, v_n_5836_);
return v___x_5840_;
}
else
{
lean_object* v_val_5841_; lean_object* v___x_5843_; uint8_t v_isShared_5844_; uint8_t v_isSharedCheck_5849_; 
v_val_5841_ = lean_ctor_get(v___x_5839_, 0);
v_isSharedCheck_5849_ = !lean_is_exclusive(v___x_5839_);
if (v_isSharedCheck_5849_ == 0)
{
v___x_5843_ = v___x_5839_;
v_isShared_5844_ = v_isSharedCheck_5849_;
goto v_resetjp_5842_;
}
else
{
lean_inc(v_val_5841_);
lean_dec(v___x_5839_);
v___x_5843_ = lean_box(0);
v_isShared_5844_ = v_isSharedCheck_5849_;
goto v_resetjp_5842_;
}
v_resetjp_5842_:
{
lean_object* v_fst_5845_; lean_object* v___x_5847_; 
v_fst_5845_ = lean_ctor_get(v_val_5841_, 0);
lean_inc(v_fst_5845_);
lean_dec(v_val_5841_);
if (v_isShared_5844_ == 0)
{
lean_ctor_set(v___x_5843_, 0, v_fst_5845_);
v___x_5847_ = v___x_5843_;
goto v_reusejp_5846_;
}
else
{
lean_object* v_reuseFailAlloc_5848_; 
v_reuseFailAlloc_5848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5848_, 0, v_fst_5845_);
v___x_5847_ = v_reuseFailAlloc_5848_;
goto v_reusejp_5846_;
}
v_reusejp_5846_:
{
return v___x_5847_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_find_x3f_x27___boxed(lean_object* v_m_5850_, lean_object* v_n_5851_){
_start:
{
lean_object* v_res_5852_; 
v_res_5852_ = l_Lean_ConstMap_find_x3f_x27(v_m_5850_, v_n_5851_);
lean_dec(v_n_5851_);
lean_dec_ref(v_m_5850_);
return v_res_5852_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_5853_, lean_object* v_i_5854_, lean_object* v_k_5855_){
_start:
{
lean_object* v___x_5856_; uint8_t v___x_5857_; 
v___x_5856_ = lean_array_get_size(v_keys_5853_);
v___x_5857_ = lean_nat_dec_lt(v_i_5854_, v___x_5856_);
if (v___x_5857_ == 0)
{
lean_dec(v_i_5854_);
return v___x_5857_;
}
else
{
lean_object* v_k_x27_5858_; uint8_t v___x_5859_; 
v_k_x27_5858_ = lean_array_fget_borrowed(v_keys_5853_, v_i_5854_);
v___x_5859_ = lean_name_eq(v_k_5855_, v_k_x27_5858_);
if (v___x_5859_ == 0)
{
lean_object* v___x_5860_; lean_object* v___x_5861_; 
v___x_5860_ = lean_unsigned_to_nat(1u);
v___x_5861_ = lean_nat_add(v_i_5854_, v___x_5860_);
lean_dec(v_i_5854_);
v_i_5854_ = v___x_5861_;
goto _start;
}
else
{
lean_dec(v_i_5854_);
return v___x_5857_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_5863_, lean_object* v_i_5864_, lean_object* v_k_5865_){
_start:
{
uint8_t v_res_5866_; lean_object* v_r_5867_; 
v_res_5866_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(v_keys_5863_, v_i_5864_, v_k_5865_);
lean_dec(v_k_5865_);
lean_dec_ref(v_keys_5863_);
v_r_5867_ = lean_box(v_res_5866_);
return v_r_5867_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(lean_object* v_x_5868_, size_t v_x_5869_, lean_object* v_x_5870_){
_start:
{
if (lean_obj_tag(v_x_5868_) == 0)
{
lean_object* v_es_5871_; lean_object* v___x_5872_; size_t v___x_5873_; size_t v___x_5874_; lean_object* v_j_5875_; lean_object* v___x_5876_; 
v_es_5871_ = lean_ctor_get(v_x_5868_, 0);
v___x_5872_ = lean_box(2);
v___x_5873_ = ((size_t)31ULL);
v___x_5874_ = lean_usize_land(v_x_5869_, v___x_5873_);
v_j_5875_ = lean_usize_to_nat(v___x_5874_);
v___x_5876_ = lean_array_get_borrowed(v___x_5872_, v_es_5871_, v_j_5875_);
lean_dec(v_j_5875_);
switch(lean_obj_tag(v___x_5876_))
{
case 0:
{
lean_object* v_key_5877_; uint8_t v___x_5878_; 
v_key_5877_ = lean_ctor_get(v___x_5876_, 0);
v___x_5878_ = lean_name_eq(v_x_5870_, v_key_5877_);
return v___x_5878_;
}
case 1:
{
lean_object* v_node_5879_; size_t v___x_5880_; size_t v___x_5881_; 
v_node_5879_ = lean_ctor_get(v___x_5876_, 0);
v___x_5880_ = ((size_t)5ULL);
v___x_5881_ = lean_usize_shift_right(v_x_5869_, v___x_5880_);
v_x_5868_ = v_node_5879_;
v_x_5869_ = v___x_5881_;
goto _start;
}
default: 
{
uint8_t v___x_5883_; 
v___x_5883_ = 0;
return v___x_5883_;
}
}
}
else
{
lean_object* v_ks_5884_; lean_object* v___x_5885_; uint8_t v___x_5886_; 
v_ks_5884_ = lean_ctor_get(v_x_5868_, 0);
v___x_5885_ = lean_unsigned_to_nat(0u);
v___x_5886_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(v_ks_5884_, v___x_5885_, v_x_5870_);
return v___x_5886_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg___boxed(lean_object* v_x_5887_, lean_object* v_x_5888_, lean_object* v_x_5889_){
_start:
{
size_t v_x_170__boxed_5890_; uint8_t v_res_5891_; lean_object* v_r_5892_; 
v_x_170__boxed_5890_ = lean_unbox_usize(v_x_5888_);
lean_dec(v_x_5888_);
v_res_5891_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(v_x_5887_, v_x_170__boxed_5890_, v_x_5889_);
lean_dec(v_x_5889_);
lean_dec_ref(v_x_5887_);
v_r_5892_ = lean_box(v_res_5891_);
return v_r_5892_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(lean_object* v_x_5893_, lean_object* v_x_5894_){
_start:
{
uint64_t v___y_5896_; 
if (lean_obj_tag(v_x_5894_) == 0)
{
uint64_t v___x_5899_; 
v___x_5899_ = 1723ULL;
v___y_5896_ = v___x_5899_;
goto v___jp_5895_;
}
else
{
uint64_t v_hash_5900_; 
v_hash_5900_ = lean_ctor_get_uint64(v_x_5894_, sizeof(void*)*2);
v___y_5896_ = v_hash_5900_;
goto v___jp_5895_;
}
v___jp_5895_:
{
size_t v___x_5897_; uint8_t v___x_5898_; 
v___x_5897_ = lean_uint64_to_usize(v___y_5896_);
v___x_5898_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(v_x_5893_, v___x_5897_, v_x_5894_);
return v___x_5898_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg___boxed(lean_object* v_x_5901_, lean_object* v_x_5902_){
_start:
{
uint8_t v_res_5903_; lean_object* v_r_5904_; 
v_res_5903_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(v_x_5901_, v_x_5902_);
lean_dec(v_x_5902_);
lean_dec_ref(v_x_5901_);
v_r_5904_ = lean_box(v_res_5903_);
return v_r_5904_;
}
}
LEAN_EXPORT uint8_t l_Lean_ConstMap_contains(lean_object* v_m_5905_, lean_object* v_n_5906_){
_start:
{
lean_object* v_map_u2081_5907_; lean_object* v_map_u2082_5908_; uint8_t v___x_5909_; 
v_map_u2081_5907_ = lean_ctor_get(v_m_5905_, 0);
v_map_u2082_5908_ = lean_ctor_get(v_m_5905_, 1);
v___x_5909_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(v_map_u2082_5908_, v_n_5906_);
if (v___x_5909_ == 0)
{
lean_object* v___x_5910_; 
v___x_5910_ = lean_imported_consts_find_entry_cached(v_map_u2081_5907_, v_n_5906_);
if (lean_obj_tag(v___x_5910_) == 0)
{
return v___x_5909_;
}
else
{
uint8_t v___x_5911_; 
lean_dec_ref_known(v___x_5910_, 1);
v___x_5911_ = 1;
return v___x_5911_;
}
}
else
{
return v___x_5909_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_contains___boxed(lean_object* v_m_5912_, lean_object* v_n_5913_){
_start:
{
uint8_t v_res_5914_; lean_object* v_r_5915_; 
v_res_5914_ = l_Lean_ConstMap_contains(v_m_5912_, v_n_5913_);
lean_dec(v_n_5913_);
lean_dec_ref(v_m_5912_);
v_r_5915_ = lean_box(v_res_5914_);
return v_r_5915_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0(lean_object* v_00_u03b2_5916_, lean_object* v_x_5917_, lean_object* v_x_5918_){
_start:
{
uint8_t v___x_5919_; 
v___x_5919_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___redArg(v_x_5917_, v_x_5918_);
return v___x_5919_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0___boxed(lean_object* v_00_u03b2_5920_, lean_object* v_x_5921_, lean_object* v_x_5922_){
_start:
{
uint8_t v_res_5923_; lean_object* v_r_5924_; 
v_res_5923_ = l_Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0(v_00_u03b2_5920_, v_x_5921_, v_x_5922_);
lean_dec(v_x_5922_);
lean_dec_ref(v_x_5921_);
v_r_5924_ = lean_box(v_res_5923_);
return v_r_5924_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0(lean_object* v_00_u03b2_5925_, lean_object* v_x_5926_, size_t v_x_5927_, lean_object* v_x_5928_){
_start:
{
uint8_t v___x_5929_; 
v___x_5929_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___redArg(v_x_5926_, v_x_5927_, v_x_5928_);
return v___x_5929_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5930_, lean_object* v_x_5931_, lean_object* v_x_5932_, lean_object* v_x_5933_){
_start:
{
size_t v_x_242__boxed_5934_; uint8_t v_res_5935_; lean_object* v_r_5936_; 
v_x_242__boxed_5934_ = lean_unbox_usize(v_x_5932_);
lean_dec(v_x_5932_);
v_res_5935_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0(v_00_u03b2_5930_, v_x_5931_, v_x_242__boxed_5934_, v_x_5933_);
lean_dec(v_x_5933_);
lean_dec_ref(v_x_5931_);
v_r_5936_ = lean_box(v_res_5935_);
return v_r_5936_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5937_, lean_object* v_keys_5938_, lean_object* v_vals_5939_, lean_object* v_heq_5940_, lean_object* v_i_5941_, lean_object* v_k_5942_){
_start:
{
uint8_t v___x_5943_; 
v___x_5943_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___redArg(v_keys_5938_, v_i_5941_, v_k_5942_);
return v___x_5943_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5944_, lean_object* v_keys_5945_, lean_object* v_vals_5946_, lean_object* v_heq_5947_, lean_object* v_i_5948_, lean_object* v_k_5949_){
_start:
{
uint8_t v_res_5950_; lean_object* v_r_5951_; 
v_res_5950_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_ConstMap_contains_spec__0_spec__0_spec__1(v_00_u03b2_5944_, v_keys_5945_, v_vals_5946_, v_heq_5947_, v_i_5948_, v_k_5949_);
lean_dec(v_k_5949_);
lean_dec_ref(v_vals_5946_);
lean_dec_ref(v_keys_5945_);
v_r_5951_ = lean_box(v_res_5950_);
return v_r_5951_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_5952_, lean_object* v_x_5953_, lean_object* v_x_5954_, lean_object* v_x_5955_){
_start:
{
lean_object* v_ks_5956_; lean_object* v_vs_5957_; lean_object* v___x_5959_; uint8_t v_isShared_5960_; uint8_t v_isSharedCheck_5981_; 
v_ks_5956_ = lean_ctor_get(v_x_5952_, 0);
v_vs_5957_ = lean_ctor_get(v_x_5952_, 1);
v_isSharedCheck_5981_ = !lean_is_exclusive(v_x_5952_);
if (v_isSharedCheck_5981_ == 0)
{
v___x_5959_ = v_x_5952_;
v_isShared_5960_ = v_isSharedCheck_5981_;
goto v_resetjp_5958_;
}
else
{
lean_inc(v_vs_5957_);
lean_inc(v_ks_5956_);
lean_dec(v_x_5952_);
v___x_5959_ = lean_box(0);
v_isShared_5960_ = v_isSharedCheck_5981_;
goto v_resetjp_5958_;
}
v_resetjp_5958_:
{
lean_object* v___x_5961_; uint8_t v___x_5962_; 
v___x_5961_ = lean_array_get_size(v_ks_5956_);
v___x_5962_ = lean_nat_dec_lt(v_x_5953_, v___x_5961_);
if (v___x_5962_ == 0)
{
lean_object* v___x_5963_; lean_object* v___x_5964_; lean_object* v___x_5966_; 
lean_dec(v_x_5953_);
v___x_5963_ = lean_array_push(v_ks_5956_, v_x_5954_);
v___x_5964_ = lean_array_push(v_vs_5957_, v_x_5955_);
if (v_isShared_5960_ == 0)
{
lean_ctor_set(v___x_5959_, 1, v___x_5964_);
lean_ctor_set(v___x_5959_, 0, v___x_5963_);
v___x_5966_ = v___x_5959_;
goto v_reusejp_5965_;
}
else
{
lean_object* v_reuseFailAlloc_5967_; 
v_reuseFailAlloc_5967_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5967_, 0, v___x_5963_);
lean_ctor_set(v_reuseFailAlloc_5967_, 1, v___x_5964_);
v___x_5966_ = v_reuseFailAlloc_5967_;
goto v_reusejp_5965_;
}
v_reusejp_5965_:
{
return v___x_5966_;
}
}
else
{
lean_object* v_k_x27_5968_; uint8_t v___x_5969_; 
v_k_x27_5968_ = lean_array_fget_borrowed(v_ks_5956_, v_x_5953_);
v___x_5969_ = lean_name_eq(v_x_5954_, v_k_x27_5968_);
if (v___x_5969_ == 0)
{
lean_object* v___x_5971_; 
if (v_isShared_5960_ == 0)
{
v___x_5971_ = v___x_5959_;
goto v_reusejp_5970_;
}
else
{
lean_object* v_reuseFailAlloc_5975_; 
v_reuseFailAlloc_5975_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5975_, 0, v_ks_5956_);
lean_ctor_set(v_reuseFailAlloc_5975_, 1, v_vs_5957_);
v___x_5971_ = v_reuseFailAlloc_5975_;
goto v_reusejp_5970_;
}
v_reusejp_5970_:
{
lean_object* v___x_5972_; lean_object* v___x_5973_; 
v___x_5972_ = lean_unsigned_to_nat(1u);
v___x_5973_ = lean_nat_add(v_x_5953_, v___x_5972_);
lean_dec(v_x_5953_);
v_x_5952_ = v___x_5971_;
v_x_5953_ = v___x_5973_;
goto _start;
}
}
else
{
lean_object* v___x_5976_; lean_object* v___x_5977_; lean_object* v___x_5979_; 
v___x_5976_ = lean_array_fset(v_ks_5956_, v_x_5953_, v_x_5954_);
v___x_5977_ = lean_array_fset(v_vs_5957_, v_x_5953_, v_x_5955_);
lean_dec(v_x_5953_);
if (v_isShared_5960_ == 0)
{
lean_ctor_set(v___x_5959_, 1, v___x_5977_);
lean_ctor_set(v___x_5959_, 0, v___x_5976_);
v___x_5979_ = v___x_5959_;
goto v_reusejp_5978_;
}
else
{
lean_object* v_reuseFailAlloc_5980_; 
v_reuseFailAlloc_5980_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5980_, 0, v___x_5976_);
lean_ctor_set(v_reuseFailAlloc_5980_, 1, v___x_5977_);
v___x_5979_ = v_reuseFailAlloc_5980_;
goto v_reusejp_5978_;
}
v_reusejp_5978_:
{
return v___x_5979_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1___redArg(lean_object* v_n_5982_, lean_object* v_k_5983_, lean_object* v_v_5984_){
_start:
{
lean_object* v___x_5985_; lean_object* v___x_5986_; 
v___x_5985_ = lean_unsigned_to_nat(0u);
v___x_5986_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_n_5982_, v___x_5985_, v_k_5983_, v_v_5984_);
return v___x_5986_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_5987_; 
v___x_5987_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_5987_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(lean_object* v_x_5988_, size_t v_x_5989_, size_t v_x_5990_, lean_object* v_x_5991_, lean_object* v_x_5992_){
_start:
{
if (lean_obj_tag(v_x_5988_) == 0)
{
lean_object* v_es_5993_; size_t v___x_5994_; size_t v___x_5995_; lean_object* v_j_5996_; lean_object* v___x_5997_; uint8_t v___x_5998_; 
v_es_5993_ = lean_ctor_get(v_x_5988_, 0);
v___x_5994_ = ((size_t)31ULL);
v___x_5995_ = lean_usize_land(v_x_5989_, v___x_5994_);
v_j_5996_ = lean_usize_to_nat(v___x_5995_);
v___x_5997_ = lean_array_get_size(v_es_5993_);
v___x_5998_ = lean_nat_dec_lt(v_j_5996_, v___x_5997_);
if (v___x_5998_ == 0)
{
lean_dec(v_j_5996_);
lean_dec(v_x_5992_);
lean_dec(v_x_5991_);
return v_x_5988_;
}
else
{
lean_object* v___x_6000_; uint8_t v_isShared_6001_; uint8_t v_isSharedCheck_6037_; 
lean_inc_ref(v_es_5993_);
v_isSharedCheck_6037_ = !lean_is_exclusive(v_x_5988_);
if (v_isSharedCheck_6037_ == 0)
{
lean_object* v_unused_6038_; 
v_unused_6038_ = lean_ctor_get(v_x_5988_, 0);
lean_dec(v_unused_6038_);
v___x_6000_ = v_x_5988_;
v_isShared_6001_ = v_isSharedCheck_6037_;
goto v_resetjp_5999_;
}
else
{
lean_dec(v_x_5988_);
v___x_6000_ = lean_box(0);
v_isShared_6001_ = v_isSharedCheck_6037_;
goto v_resetjp_5999_;
}
v_resetjp_5999_:
{
lean_object* v_v_6002_; lean_object* v___x_6003_; lean_object* v_xs_x27_6004_; lean_object* v___y_6006_; 
v_v_6002_ = lean_array_fget(v_es_5993_, v_j_5996_);
v___x_6003_ = lean_box(0);
v_xs_x27_6004_ = lean_array_fset(v_es_5993_, v_j_5996_, v___x_6003_);
switch(lean_obj_tag(v_v_6002_))
{
case 0:
{
lean_object* v_key_6011_; lean_object* v_val_6012_; lean_object* v___x_6014_; uint8_t v_isShared_6015_; uint8_t v_isSharedCheck_6022_; 
v_key_6011_ = lean_ctor_get(v_v_6002_, 0);
v_val_6012_ = lean_ctor_get(v_v_6002_, 1);
v_isSharedCheck_6022_ = !lean_is_exclusive(v_v_6002_);
if (v_isSharedCheck_6022_ == 0)
{
v___x_6014_ = v_v_6002_;
v_isShared_6015_ = v_isSharedCheck_6022_;
goto v_resetjp_6013_;
}
else
{
lean_inc(v_val_6012_);
lean_inc(v_key_6011_);
lean_dec(v_v_6002_);
v___x_6014_ = lean_box(0);
v_isShared_6015_ = v_isSharedCheck_6022_;
goto v_resetjp_6013_;
}
v_resetjp_6013_:
{
uint8_t v___x_6016_; 
v___x_6016_ = lean_name_eq(v_x_5991_, v_key_6011_);
if (v___x_6016_ == 0)
{
lean_object* v___x_6017_; lean_object* v___x_6018_; 
lean_del_object(v___x_6014_);
v___x_6017_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_6011_, v_val_6012_, v_x_5991_, v_x_5992_);
v___x_6018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6018_, 0, v___x_6017_);
v___y_6006_ = v___x_6018_;
goto v___jp_6005_;
}
else
{
lean_object* v___x_6020_; 
lean_dec(v_val_6012_);
lean_dec(v_key_6011_);
if (v_isShared_6015_ == 0)
{
lean_ctor_set(v___x_6014_, 1, v_x_5992_);
lean_ctor_set(v___x_6014_, 0, v_x_5991_);
v___x_6020_ = v___x_6014_;
goto v_reusejp_6019_;
}
else
{
lean_object* v_reuseFailAlloc_6021_; 
v_reuseFailAlloc_6021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6021_, 0, v_x_5991_);
lean_ctor_set(v_reuseFailAlloc_6021_, 1, v_x_5992_);
v___x_6020_ = v_reuseFailAlloc_6021_;
goto v_reusejp_6019_;
}
v_reusejp_6019_:
{
v___y_6006_ = v___x_6020_;
goto v___jp_6005_;
}
}
}
}
case 1:
{
lean_object* v_node_6023_; lean_object* v___x_6025_; uint8_t v_isShared_6026_; uint8_t v_isSharedCheck_6035_; 
v_node_6023_ = lean_ctor_get(v_v_6002_, 0);
v_isSharedCheck_6035_ = !lean_is_exclusive(v_v_6002_);
if (v_isSharedCheck_6035_ == 0)
{
v___x_6025_ = v_v_6002_;
v_isShared_6026_ = v_isSharedCheck_6035_;
goto v_resetjp_6024_;
}
else
{
lean_inc(v_node_6023_);
lean_dec(v_v_6002_);
v___x_6025_ = lean_box(0);
v_isShared_6026_ = v_isSharedCheck_6035_;
goto v_resetjp_6024_;
}
v_resetjp_6024_:
{
size_t v___x_6027_; size_t v___x_6028_; size_t v___x_6029_; size_t v___x_6030_; lean_object* v___x_6031_; lean_object* v___x_6033_; 
v___x_6027_ = ((size_t)5ULL);
v___x_6028_ = lean_usize_shift_right(v_x_5989_, v___x_6027_);
v___x_6029_ = ((size_t)1ULL);
v___x_6030_ = lean_usize_add(v_x_5990_, v___x_6029_);
v___x_6031_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_node_6023_, v___x_6028_, v___x_6030_, v_x_5991_, v_x_5992_);
if (v_isShared_6026_ == 0)
{
lean_ctor_set(v___x_6025_, 0, v___x_6031_);
v___x_6033_ = v___x_6025_;
goto v_reusejp_6032_;
}
else
{
lean_object* v_reuseFailAlloc_6034_; 
v_reuseFailAlloc_6034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6034_, 0, v___x_6031_);
v___x_6033_ = v_reuseFailAlloc_6034_;
goto v_reusejp_6032_;
}
v_reusejp_6032_:
{
v___y_6006_ = v___x_6033_;
goto v___jp_6005_;
}
}
}
default: 
{
lean_object* v___x_6036_; 
v___x_6036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6036_, 0, v_x_5991_);
lean_ctor_set(v___x_6036_, 1, v_x_5992_);
v___y_6006_ = v___x_6036_;
goto v___jp_6005_;
}
}
v___jp_6005_:
{
lean_object* v___x_6007_; lean_object* v___x_6009_; 
v___x_6007_ = lean_array_fset(v_xs_x27_6004_, v_j_5996_, v___y_6006_);
lean_dec(v_j_5996_);
if (v_isShared_6001_ == 0)
{
lean_ctor_set(v___x_6000_, 0, v___x_6007_);
v___x_6009_ = v___x_6000_;
goto v_reusejp_6008_;
}
else
{
lean_object* v_reuseFailAlloc_6010_; 
v_reuseFailAlloc_6010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6010_, 0, v___x_6007_);
v___x_6009_ = v_reuseFailAlloc_6010_;
goto v_reusejp_6008_;
}
v_reusejp_6008_:
{
return v___x_6009_;
}
}
}
}
}
else
{
lean_object* v_ks_6039_; lean_object* v_vs_6040_; lean_object* v___x_6042_; uint8_t v_isShared_6043_; uint8_t v_isSharedCheck_6058_; 
v_ks_6039_ = lean_ctor_get(v_x_5988_, 0);
v_vs_6040_ = lean_ctor_get(v_x_5988_, 1);
v_isSharedCheck_6058_ = !lean_is_exclusive(v_x_5988_);
if (v_isSharedCheck_6058_ == 0)
{
v___x_6042_ = v_x_5988_;
v_isShared_6043_ = v_isSharedCheck_6058_;
goto v_resetjp_6041_;
}
else
{
lean_inc(v_vs_6040_);
lean_inc(v_ks_6039_);
lean_dec(v_x_5988_);
v___x_6042_ = lean_box(0);
v_isShared_6043_ = v_isSharedCheck_6058_;
goto v_resetjp_6041_;
}
v_resetjp_6041_:
{
lean_object* v___x_6045_; 
if (v_isShared_6043_ == 0)
{
v___x_6045_ = v___x_6042_;
goto v_reusejp_6044_;
}
else
{
lean_object* v_reuseFailAlloc_6057_; 
v_reuseFailAlloc_6057_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6057_, 0, v_ks_6039_);
lean_ctor_set(v_reuseFailAlloc_6057_, 1, v_vs_6040_);
v___x_6045_ = v_reuseFailAlloc_6057_;
goto v_reusejp_6044_;
}
v_reusejp_6044_:
{
lean_object* v_newNode_6046_; size_t v___x_6047_; uint8_t v___x_6048_; 
v_newNode_6046_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1___redArg(v___x_6045_, v_x_5991_, v_x_5992_);
v___x_6047_ = ((size_t)7ULL);
v___x_6048_ = lean_usize_dec_le(v___x_6047_, v_x_5990_);
if (v___x_6048_ == 0)
{
lean_object* v___x_6049_; lean_object* v___x_6050_; uint8_t v___x_6051_; 
v___x_6049_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_6046_);
v___x_6050_ = lean_unsigned_to_nat(4u);
v___x_6051_ = lean_nat_dec_lt(v___x_6049_, v___x_6050_);
lean_dec(v___x_6049_);
if (v___x_6051_ == 0)
{
lean_object* v_ks_6052_; lean_object* v_vs_6053_; lean_object* v___x_6054_; lean_object* v___x_6055_; lean_object* v___x_6056_; 
v_ks_6052_ = lean_ctor_get(v_newNode_6046_, 0);
lean_inc_ref(v_ks_6052_);
v_vs_6053_ = lean_ctor_get(v_newNode_6046_, 1);
lean_inc_ref(v_vs_6053_);
lean_dec_ref(v_newNode_6046_);
v___x_6054_ = lean_unsigned_to_nat(0u);
v___x_6055_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___closed__0);
v___x_6056_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(v_x_5990_, v_ks_6052_, v_vs_6053_, v___x_6054_, v___x_6055_);
lean_dec_ref(v_vs_6053_);
lean_dec_ref(v_ks_6052_);
return v___x_6056_;
}
else
{
return v_newNode_6046_;
}
}
else
{
return v_newNode_6046_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(size_t v_depth_6059_, lean_object* v_keys_6060_, lean_object* v_vals_6061_, lean_object* v_i_6062_, lean_object* v_entries_6063_){
_start:
{
lean_object* v___x_6064_; uint8_t v___x_6065_; 
v___x_6064_ = lean_array_get_size(v_keys_6060_);
v___x_6065_ = lean_nat_dec_lt(v_i_6062_, v___x_6064_);
if (v___x_6065_ == 0)
{
lean_dec(v_i_6062_);
return v_entries_6063_;
}
else
{
lean_object* v_k_6066_; lean_object* v_v_6067_; uint64_t v___y_6069_; 
v_k_6066_ = lean_array_fget_borrowed(v_keys_6060_, v_i_6062_);
v_v_6067_ = lean_array_fget_borrowed(v_vals_6061_, v_i_6062_);
if (lean_obj_tag(v_k_6066_) == 0)
{
uint64_t v___x_6080_; 
v___x_6080_ = 1723ULL;
v___y_6069_ = v___x_6080_;
goto v___jp_6068_;
}
else
{
uint64_t v_hash_6081_; 
v_hash_6081_ = lean_ctor_get_uint64(v_k_6066_, sizeof(void*)*2);
v___y_6069_ = v_hash_6081_;
goto v___jp_6068_;
}
v___jp_6068_:
{
size_t v_h_6070_; size_t v___x_6071_; lean_object* v___x_6072_; size_t v___x_6073_; size_t v___x_6074_; size_t v___x_6075_; size_t v_h_6076_; lean_object* v___x_6077_; lean_object* v___x_6078_; 
v_h_6070_ = lean_uint64_to_usize(v___y_6069_);
v___x_6071_ = ((size_t)5ULL);
v___x_6072_ = lean_unsigned_to_nat(1u);
v___x_6073_ = ((size_t)1ULL);
v___x_6074_ = lean_usize_sub(v_depth_6059_, v___x_6073_);
v___x_6075_ = lean_usize_mul(v___x_6071_, v___x_6074_);
v_h_6076_ = lean_usize_shift_right(v_h_6070_, v___x_6075_);
v___x_6077_ = lean_nat_add(v_i_6062_, v___x_6072_);
lean_dec(v_i_6062_);
lean_inc(v_v_6067_);
lean_inc(v_k_6066_);
v___x_6078_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_entries_6063_, v_h_6076_, v_depth_6059_, v_k_6066_, v_v_6067_);
v_i_6062_ = v___x_6077_;
v_entries_6063_ = v___x_6078_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_6082_, lean_object* v_keys_6083_, lean_object* v_vals_6084_, lean_object* v_i_6085_, lean_object* v_entries_6086_){
_start:
{
size_t v_depth_boxed_6087_; lean_object* v_res_6088_; 
v_depth_boxed_6087_ = lean_unbox_usize(v_depth_6082_);
lean_dec(v_depth_6082_);
v_res_6088_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(v_depth_boxed_6087_, v_keys_6083_, v_vals_6084_, v_i_6085_, v_entries_6086_);
lean_dec_ref(v_vals_6084_);
lean_dec_ref(v_keys_6083_);
return v_res_6088_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg___boxed(lean_object* v_x_6089_, lean_object* v_x_6090_, lean_object* v_x_6091_, lean_object* v_x_6092_, lean_object* v_x_6093_){
_start:
{
size_t v_x_359__boxed_6094_; size_t v_x_360__boxed_6095_; lean_object* v_res_6096_; 
v_x_359__boxed_6094_ = lean_unbox_usize(v_x_6090_);
lean_dec(v_x_6090_);
v_x_360__boxed_6095_ = lean_unbox_usize(v_x_6091_);
lean_dec(v_x_6091_);
v_res_6096_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_x_6089_, v_x_359__boxed_6094_, v_x_360__boxed_6095_, v_x_6092_, v_x_6093_);
return v_res_6096_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0___redArg(lean_object* v_x_6097_, lean_object* v_x_6098_, lean_object* v_x_6099_){
_start:
{
uint64_t v___y_6101_; 
if (lean_obj_tag(v_x_6098_) == 0)
{
uint64_t v___x_6105_; 
v___x_6105_ = 1723ULL;
v___y_6101_ = v___x_6105_;
goto v___jp_6100_;
}
else
{
uint64_t v_hash_6106_; 
v_hash_6106_ = lean_ctor_get_uint64(v_x_6098_, sizeof(void*)*2);
v___y_6101_ = v_hash_6106_;
goto v___jp_6100_;
}
v___jp_6100_:
{
size_t v___x_6102_; size_t v___x_6103_; lean_object* v___x_6104_; 
v___x_6102_ = lean_uint64_to_usize(v___y_6101_);
v___x_6103_ = ((size_t)1ULL);
v___x_6104_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_x_6097_, v___x_6102_, v___x_6103_, v_x_6098_, v_x_6099_);
return v___x_6104_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_insert(lean_object* v_m_6107_, lean_object* v_n_6108_, lean_object* v_v_6109_){
_start:
{
lean_object* v_map_u2081_6110_; lean_object* v_map_u2082_6111_; lean_object* v___x_6113_; uint8_t v_isShared_6114_; uint8_t v_isSharedCheck_6119_; 
v_map_u2081_6110_ = lean_ctor_get(v_m_6107_, 0);
v_map_u2082_6111_ = lean_ctor_get(v_m_6107_, 1);
v_isSharedCheck_6119_ = !lean_is_exclusive(v_m_6107_);
if (v_isSharedCheck_6119_ == 0)
{
v___x_6113_ = v_m_6107_;
v_isShared_6114_ = v_isSharedCheck_6119_;
goto v_resetjp_6112_;
}
else
{
lean_inc(v_map_u2082_6111_);
lean_inc(v_map_u2081_6110_);
lean_dec(v_m_6107_);
v___x_6113_ = lean_box(0);
v_isShared_6114_ = v_isSharedCheck_6119_;
goto v_resetjp_6112_;
}
v_resetjp_6112_:
{
lean_object* v___x_6115_; lean_object* v___x_6117_; 
v___x_6115_ = l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0___redArg(v_map_u2082_6111_, v_n_6108_, v_v_6109_);
if (v_isShared_6114_ == 0)
{
lean_ctor_set(v___x_6113_, 1, v___x_6115_);
v___x_6117_ = v___x_6113_;
goto v_reusejp_6116_;
}
else
{
lean_object* v_reuseFailAlloc_6118_; 
v_reuseFailAlloc_6118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6118_, 0, v_map_u2081_6110_);
lean_ctor_set(v_reuseFailAlloc_6118_, 1, v___x_6115_);
v___x_6117_ = v_reuseFailAlloc_6118_;
goto v_reusejp_6116_;
}
v_reusejp_6116_:
{
return v___x_6117_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0(lean_object* v_00_u03b2_6120_, lean_object* v_x_6121_, lean_object* v_x_6122_, lean_object* v_x_6123_){
_start:
{
lean_object* v___x_6124_; 
v___x_6124_ = l_Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0___redArg(v_x_6121_, v_x_6122_, v_x_6123_);
return v___x_6124_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0(lean_object* v_00_u03b2_6125_, lean_object* v_x_6126_, size_t v_x_6127_, size_t v_x_6128_, lean_object* v_x_6129_, lean_object* v_x_6130_){
_start:
{
lean_object* v___x_6131_; 
v___x_6131_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___redArg(v_x_6126_, v_x_6127_, v_x_6128_, v_x_6129_, v_x_6130_);
return v___x_6131_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0___boxed(lean_object* v_00_u03b2_6132_, lean_object* v_x_6133_, lean_object* v_x_6134_, lean_object* v_x_6135_, lean_object* v_x_6136_, lean_object* v_x_6137_){
_start:
{
size_t v_x_555__boxed_6138_; size_t v_x_556__boxed_6139_; lean_object* v_res_6140_; 
v_x_555__boxed_6138_ = lean_unbox_usize(v_x_6134_);
lean_dec(v_x_6134_);
v_x_556__boxed_6139_ = lean_unbox_usize(v_x_6135_);
lean_dec(v_x_6135_);
v_res_6140_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0(v_00_u03b2_6132_, v_x_6133_, v_x_555__boxed_6138_, v_x_556__boxed_6139_, v_x_6136_, v_x_6137_);
return v_res_6140_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_6141_, lean_object* v_n_6142_, lean_object* v_k_6143_, lean_object* v_v_6144_){
_start:
{
lean_object* v___x_6145_; 
v___x_6145_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1___redArg(v_n_6142_, v_k_6143_, v_v_6144_);
return v___x_6145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_6146_, size_t v_depth_6147_, lean_object* v_keys_6148_, lean_object* v_vals_6149_, lean_object* v_heq_6150_, lean_object* v_i_6151_, lean_object* v_entries_6152_){
_start:
{
lean_object* v___x_6153_; 
v___x_6153_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___redArg(v_depth_6147_, v_keys_6148_, v_vals_6149_, v_i_6151_, v_entries_6152_);
return v___x_6153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_6154_, lean_object* v_depth_6155_, lean_object* v_keys_6156_, lean_object* v_vals_6157_, lean_object* v_heq_6158_, lean_object* v_i_6159_, lean_object* v_entries_6160_){
_start:
{
size_t v_depth_boxed_6161_; lean_object* v_res_6162_; 
v_depth_boxed_6161_ = lean_unbox_usize(v_depth_6155_);
lean_dec(v_depth_6155_);
v_res_6162_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__2(v_00_u03b2_6154_, v_depth_boxed_6161_, v_keys_6156_, v_vals_6157_, v_heq_6158_, v_i_6159_, v_entries_6160_);
lean_dec_ref(v_vals_6157_);
lean_dec_ref(v_keys_6156_);
return v_res_6162_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_6163_, lean_object* v_x_6164_, lean_object* v_x_6165_, lean_object* v_x_6166_, lean_object* v_x_6167_){
_start:
{
lean_object* v___x_6168_; 
v___x_6168_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_ConstMap_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_x_6164_, v_x_6165_, v_x_6166_, v_x_6167_);
return v___x_6168_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldStage2___redArg(lean_object* v_f_6169_, lean_object* v_s_6170_, lean_object* v_m_6171_){
_start:
{
lean_object* v_map_u2082_6172_; lean_object* v___x_6173_; 
v_map_u2082_6172_ = lean_ctor_get(v_m_6171_, 1);
lean_inc_ref(v_map_u2082_6172_);
lean_dec_ref(v_m_6171_);
v___x_6173_ = l_Lean_PersistentHashMap_foldl___redArg(v_map_u2082_6172_, v_f_6169_, v_s_6170_);
return v___x_6173_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldStage2(lean_object* v_00_u03c3_6174_, lean_object* v_f_6175_, lean_object* v_s_6176_, lean_object* v_m_6177_){
_start:
{
lean_object* v_map_u2082_6178_; lean_object* v___x_6179_; 
v_map_u2082_6178_ = lean_ctor_get(v_m_6177_, 1);
lean_inc_ref(v_map_u2082_6178_);
lean_dec_ref(v_m_6177_);
v___x_6179_ = l_Lean_PersistentHashMap_foldl___redArg(v_map_u2082_6178_, v_f_6175_, v_s_6176_);
return v___x_6179_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM___redArg___lam__0(lean_object* v_inst_6180_, lean_object* v_f_6181_, lean_object* v_map_u2082_6182_, lean_object* v_____do__lift_6183_){
_start:
{
lean_object* v___x_6184_; 
v___x_6184_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v_inst_6180_, v_f_6181_, v_map_u2082_6182_, v_____do__lift_6183_);
return v___x_6184_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM___redArg(lean_object* v_inst_6185_, lean_object* v_f_6186_, lean_object* v_init_6187_, lean_object* v_map_6188_){
_start:
{
lean_object* v_toBind_6189_; lean_object* v_map_u2081_6190_; lean_object* v_map_u2082_6191_; lean_object* v___f_6192_; lean_object* v___x_6193_; lean_object* v___x_6194_; 
v_toBind_6189_ = lean_ctor_get(v_inst_6185_, 1);
lean_inc(v_toBind_6189_);
v_map_u2081_6190_ = lean_ctor_get(v_map_6188_, 0);
lean_inc_ref(v_map_u2081_6190_);
v_map_u2082_6191_ = lean_ctor_get(v_map_6188_, 1);
lean_inc_ref(v_map_u2082_6191_);
lean_dec_ref(v_map_6188_);
lean_inc(v_f_6186_);
lean_inc_ref(v_inst_6185_);
v___f_6192_ = lean_alloc_closure((void*)(l_Lean_ConstMap_foldM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_6192_, 0, v_inst_6185_);
lean_closure_set(v___f_6192_, 1, v_f_6186_);
lean_closure_set(v___f_6192_, 2, v_map_u2082_6191_);
v___x_6193_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_6185_, v_map_u2081_6190_, v_f_6186_, v_init_6187_);
v___x_6194_ = lean_apply_4(v_toBind_6189_, lean_box(0), lean_box(0), v___x_6193_, v___f_6192_);
return v___x_6194_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_foldM(lean_object* v_00_u03c3_6195_, lean_object* v_m_6196_, lean_object* v_inst_6197_, lean_object* v_f_6198_, lean_object* v_init_6199_, lean_object* v_map_6200_){
_start:
{
lean_object* v___x_6201_; 
v___x_6201_ = l_Lean_ConstMap_foldM___redArg(v_inst_6197_, v_f_6198_, v_init_6199_, v_map_6200_);
return v___x_6201_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___lam__0(lean_object* v_f_6202_, lean_object* v_x1_6203_, lean_object* v_x2_6204_, lean_object* v_x3_6205_){
_start:
{
lean_object* v___x_6206_; 
v___x_6206_ = lean_apply_3(v_f_6202_, v_x1_6203_, v_x2_6204_, v_x3_6205_);
return v___x_6206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_f_6207_, lean_object* v_keys_6208_, lean_object* v_vals_6209_, lean_object* v_i_6210_, lean_object* v_acc_6211_){
_start:
{
lean_object* v___x_6212_; uint8_t v___x_6213_; 
v___x_6212_ = lean_array_get_size(v_keys_6208_);
v___x_6213_ = lean_nat_dec_lt(v_i_6210_, v___x_6212_);
if (v___x_6213_ == 0)
{
lean_dec(v_i_6210_);
lean_dec(v_f_6207_);
return v_acc_6211_;
}
else
{
lean_object* v_k_6214_; lean_object* v_v_6215_; lean_object* v___x_6216_; lean_object* v___x_6217_; lean_object* v___x_6218_; 
v_k_6214_ = lean_array_fget_borrowed(v_keys_6208_, v_i_6210_);
v_v_6215_ = lean_array_fget_borrowed(v_vals_6209_, v_i_6210_);
lean_inc(v_f_6207_);
lean_inc(v_v_6215_);
lean_inc(v_k_6214_);
v___x_6216_ = lean_apply_3(v_f_6207_, v_acc_6211_, v_k_6214_, v_v_6215_);
v___x_6217_ = lean_unsigned_to_nat(1u);
v___x_6218_ = lean_nat_add(v_i_6210_, v___x_6217_);
lean_dec(v_i_6210_);
v_i_6210_ = v___x_6218_;
v_acc_6211_ = v___x_6216_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_f_6220_, lean_object* v_keys_6221_, lean_object* v_vals_6222_, lean_object* v_i_6223_, lean_object* v_acc_6224_){
_start:
{
lean_object* v_res_6225_; 
v_res_6225_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(v_f_6220_, v_keys_6221_, v_vals_6222_, v_i_6223_, v_acc_6224_);
lean_dec_ref(v_vals_6222_);
lean_dec_ref(v_keys_6221_);
return v_res_6225_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_f_6226_, lean_object* v_as_6227_, size_t v_i_6228_, size_t v_stop_6229_, lean_object* v_b_6230_){
_start:
{
lean_object* v___y_6232_; uint8_t v___x_6236_; 
v___x_6236_ = lean_usize_dec_eq(v_i_6228_, v_stop_6229_);
if (v___x_6236_ == 0)
{
lean_object* v___x_6237_; 
v___x_6237_ = lean_array_uget_borrowed(v_as_6227_, v_i_6228_);
switch(lean_obj_tag(v___x_6237_))
{
case 0:
{
lean_object* v_key_6238_; lean_object* v_val_6239_; lean_object* v___x_6240_; 
v_key_6238_ = lean_ctor_get(v___x_6237_, 0);
v_val_6239_ = lean_ctor_get(v___x_6237_, 1);
lean_inc(v_f_6226_);
lean_inc(v_val_6239_);
lean_inc(v_key_6238_);
v___x_6240_ = lean_apply_3(v_f_6226_, v_b_6230_, v_key_6238_, v_val_6239_);
v___y_6232_ = v___x_6240_;
goto v___jp_6231_;
}
case 1:
{
lean_object* v_node_6241_; lean_object* v___x_6242_; 
v_node_6241_ = lean_ctor_get(v___x_6237_, 0);
lean_inc(v_f_6226_);
v___x_6242_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6226_, v_node_6241_, v_b_6230_);
v___y_6232_ = v___x_6242_;
goto v___jp_6231_;
}
default: 
{
v___y_6232_ = v_b_6230_;
goto v___jp_6231_;
}
}
}
else
{
lean_dec(v_f_6226_);
return v_b_6230_;
}
v___jp_6231_:
{
size_t v___x_6233_; size_t v___x_6234_; 
v___x_6233_ = ((size_t)1ULL);
v___x_6234_ = lean_usize_add(v_i_6228_, v___x_6233_);
v_i_6228_ = v___x_6234_;
v_b_6230_ = v___y_6232_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(lean_object* v_f_6243_, lean_object* v_x_6244_, lean_object* v_x_6245_){
_start:
{
if (lean_obj_tag(v_x_6244_) == 0)
{
lean_object* v_es_6246_; lean_object* v___x_6247_; lean_object* v___x_6248_; uint8_t v___x_6249_; 
v_es_6246_ = lean_ctor_get(v_x_6244_, 0);
v___x_6247_ = lean_unsigned_to_nat(0u);
v___x_6248_ = lean_array_get_size(v_es_6246_);
v___x_6249_ = lean_nat_dec_lt(v___x_6247_, v___x_6248_);
if (v___x_6249_ == 0)
{
lean_dec(v_f_6243_);
return v_x_6245_;
}
else
{
size_t v___x_6250_; size_t v___x_6251_; lean_object* v___x_6252_; 
v___x_6250_ = ((size_t)0ULL);
v___x_6251_ = lean_usize_of_nat(v___x_6248_);
v___x_6252_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(v_f_6243_, v_es_6246_, v___x_6250_, v___x_6251_, v_x_6245_);
return v___x_6252_;
}
}
else
{
lean_object* v_ks_6253_; lean_object* v_vs_6254_; lean_object* v___x_6255_; lean_object* v___x_6256_; 
v_ks_6253_ = lean_ctor_get(v_x_6244_, 0);
v_vs_6254_ = lean_ctor_get(v_x_6244_, 1);
v___x_6255_ = lean_unsigned_to_nat(0u);
v___x_6256_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(v_f_6243_, v_ks_6253_, v_vs_6254_, v___x_6255_, v_x_6245_);
return v___x_6256_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_6257_, lean_object* v_x_6258_, lean_object* v_x_6259_){
_start:
{
lean_object* v_res_6260_; 
v_res_6260_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6257_, v_x_6258_, v_x_6259_);
lean_dec_ref(v_x_6258_);
return v_res_6260_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_f_6261_, lean_object* v_as_6262_, lean_object* v_i_6263_, lean_object* v_stop_6264_, lean_object* v_b_6265_){
_start:
{
size_t v_i_boxed_6266_; size_t v_stop_boxed_6267_; lean_object* v_res_6268_; 
v_i_boxed_6266_ = lean_unbox_usize(v_i_6263_);
lean_dec(v_i_6263_);
v_stop_boxed_6267_ = lean_unbox_usize(v_stop_6264_);
lean_dec(v_stop_6264_);
v_res_6268_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(v_f_6261_, v_as_6262_, v_i_boxed_6266_, v_stop_boxed_6267_, v_b_6265_);
lean_dec_ref(v_as_6262_);
return v_res_6268_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(lean_object* v_map_6269_, lean_object* v_f_6270_, lean_object* v_init_6271_){
_start:
{
lean_object* v___f_6272_; lean_object* v___x_6273_; 
v___f_6272_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___lam__0), 4, 1);
lean_closure_set(v___f_6272_, 0, v_f_6270_);
v___x_6273_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v___f_6272_, v_map_6269_, v_init_6271_);
return v___x_6273_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg___boxed(lean_object* v_map_6274_, lean_object* v_f_6275_, lean_object* v_init_6276_){
_start:
{
lean_object* v_res_6277_; 
v_res_6277_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(v_map_6274_, v_f_6275_, v_init_6276_);
lean_dec_ref(v_map_6274_);
return v_res_6277_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_fold___redArg(lean_object* v_f_6278_, lean_object* v_init_6279_, lean_object* v_m_6280_){
_start:
{
lean_object* v_map_u2081_6281_; lean_object* v_map_u2082_6282_; lean_object* v___x_6283_; lean_object* v___x_6284_; 
v_map_u2081_6281_ = lean_ctor_get(v_m_6280_, 0);
lean_inc_ref(v_map_u2081_6281_);
v_map_u2082_6282_ = lean_ctor_get(v_m_6280_, 1);
lean_inc_ref(v_map_u2082_6282_);
lean_dec_ref(v_m_6280_);
lean_inc(v_f_6278_);
v___x_6283_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_map_u2081_6281_, v_f_6278_, v_init_6279_);
v___x_6284_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(v_map_u2082_6282_, v_f_6278_, v___x_6283_);
lean_dec_ref(v_map_u2082_6282_);
return v___x_6284_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_fold(lean_object* v_00_u03c3_6285_, lean_object* v_f_6286_, lean_object* v_init_6287_, lean_object* v_m_6288_){
_start:
{
lean_object* v___x_6289_; 
v___x_6289_ = l_Lean_ConstMap_fold___redArg(v_f_6286_, v_init_6287_, v_m_6288_);
return v___x_6289_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0(lean_object* v_00_u03c3_6290_, lean_object* v_00_u03b2_6291_, lean_object* v_map_6292_, lean_object* v_f_6293_, lean_object* v_init_6294_){
_start:
{
lean_object* v___x_6295_; 
v___x_6295_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___redArg(v_map_6292_, v_f_6293_, v_init_6294_);
return v___x_6295_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0___boxed(lean_object* v_00_u03c3_6296_, lean_object* v_00_u03b2_6297_, lean_object* v_map_6298_, lean_object* v_f_6299_, lean_object* v_init_6300_){
_start:
{
lean_object* v_res_6301_; 
v_res_6301_ = l_Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0(v_00_u03c3_6296_, v_00_u03b2_6297_, v_map_6298_, v_f_6299_, v_init_6300_);
lean_dec_ref(v_map_6298_);
return v_res_6301_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg(lean_object* v_map_6302_, lean_object* v_f_6303_, lean_object* v_init_6304_){
_start:
{
lean_object* v___x_6305_; 
v___x_6305_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6303_, v_map_6302_, v_init_6304_);
return v___x_6305_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg___boxed(lean_object* v_map_6306_, lean_object* v_f_6307_, lean_object* v_init_6308_){
_start:
{
lean_object* v_res_6309_; 
v_res_6309_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___redArg(v_map_6306_, v_f_6307_, v_init_6308_);
lean_dec_ref(v_map_6306_);
return v_res_6309_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0(lean_object* v_00_u03c3_6310_, lean_object* v_00_u03b2_6311_, lean_object* v_map_6312_, lean_object* v_f_6313_, lean_object* v_init_6314_){
_start:
{
lean_object* v___x_6315_; 
v___x_6315_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6313_, v_map_6312_, v_init_6314_);
return v___x_6315_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0___boxed(lean_object* v_00_u03c3_6316_, lean_object* v_00_u03b2_6317_, lean_object* v_map_6318_, lean_object* v_f_6319_, lean_object* v_init_6320_){
_start:
{
lean_object* v_res_6321_; 
v_res_6321_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0(v_00_u03c3_6316_, v_00_u03b2_6317_, v_map_6318_, v_f_6319_, v_init_6320_);
lean_dec_ref(v_map_6318_);
return v_res_6321_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1(lean_object* v_00_u03c3_6322_, lean_object* v_00_u03b1_6323_, lean_object* v_00_u03b2_6324_, lean_object* v_f_6325_, lean_object* v_x_6326_, lean_object* v_x_6327_){
_start:
{
lean_object* v___x_6328_; 
v___x_6328_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___redArg(v_f_6325_, v_x_6326_, v_x_6327_);
return v___x_6328_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_6329_, lean_object* v_00_u03b1_6330_, lean_object* v_00_u03b2_6331_, lean_object* v_f_6332_, lean_object* v_x_6333_, lean_object* v_x_6334_){
_start:
{
lean_object* v_res_6335_; 
v_res_6335_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1(v_00_u03c3_6329_, v_00_u03b1_6330_, v_00_u03b2_6331_, v_f_6332_, v_x_6333_, v_x_6334_);
lean_dec_ref(v_x_6333_);
return v_res_6335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_6336_, lean_object* v_00_u03b2_6337_, lean_object* v_00_u03c3_6338_, lean_object* v_f_6339_, lean_object* v_as_6340_, size_t v_i_6341_, size_t v_stop_6342_, lean_object* v_b_6343_){
_start:
{
lean_object* v___x_6344_; 
v___x_6344_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___redArg(v_f_6339_, v_as_6340_, v_i_6341_, v_stop_6342_, v_b_6343_);
return v___x_6344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_6345_, lean_object* v_00_u03b2_6346_, lean_object* v_00_u03c3_6347_, lean_object* v_f_6348_, lean_object* v_as_6349_, lean_object* v_i_6350_, lean_object* v_stop_6351_, lean_object* v_b_6352_){
_start:
{
size_t v_i_boxed_6353_; size_t v_stop_boxed_6354_; lean_object* v_res_6355_; 
v_i_boxed_6353_ = lean_unbox_usize(v_i_6350_);
lean_dec(v_i_6350_);
v_stop_boxed_6354_ = lean_unbox_usize(v_stop_6351_);
lean_dec(v_stop_6351_);
v_res_6355_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_6345_, v_00_u03b2_6346_, v_00_u03c3_6347_, v_f_6348_, v_as_6349_, v_i_boxed_6353_, v_stop_boxed_6354_, v_b_6352_);
lean_dec_ref(v_as_6349_);
return v_res_6355_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03c3_6356_, lean_object* v_00_u03b1_6357_, lean_object* v_00_u03b2_6358_, lean_object* v_f_6359_, lean_object* v_keys_6360_, lean_object* v_vals_6361_, lean_object* v_heq_6362_, lean_object* v_i_6363_, lean_object* v_acc_6364_){
_start:
{
lean_object* v___x_6365_; 
v___x_6365_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___redArg(v_f_6359_, v_keys_6360_, v_vals_6361_, v_i_6363_, v_acc_6364_);
return v___x_6365_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03c3_6366_, lean_object* v_00_u03b1_6367_, lean_object* v_00_u03b2_6368_, lean_object* v_f_6369_, lean_object* v_keys_6370_, lean_object* v_vals_6371_, lean_object* v_heq_6372_, lean_object* v_i_6373_, lean_object* v_acc_6374_){
_start:
{
lean_object* v_res_6375_; 
v_res_6375_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_ConstMap_fold_spec__0_spec__0_spec__1_spec__3(v_00_u03c3_6366_, v_00_u03b1_6367_, v_00_u03b2_6368_, v_f_6369_, v_keys_6370_, v_vals_6371_, v_heq_6372_, v_i_6373_, v_acc_6374_);
lean_dec_ref(v_vals_6371_);
lean_dec_ref(v_keys_6370_);
return v_res_6375_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM___redArg___lam__0(lean_object* v_inst_6376_, lean_object* v_map_u2082_6377_, lean_object* v_f_6378_, lean_object* v_____r_6379_){
_start:
{
lean_object* v___x_6380_; 
v___x_6380_ = l_Lean_PersistentHashMap_forM___redArg(v_inst_6376_, v_map_u2082_6377_, v_f_6378_);
return v___x_6380_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM___redArg(lean_object* v_inst_6381_, lean_object* v_map_6382_, lean_object* v_f_6383_){
_start:
{
lean_object* v_toBind_6384_; lean_object* v_map_u2081_6385_; lean_object* v_map_u2082_6386_; lean_object* v___f_6387_; lean_object* v___x_6388_; lean_object* v___x_6389_; 
v_toBind_6384_ = lean_ctor_get(v_inst_6381_, 1);
lean_inc(v_toBind_6384_);
v_map_u2081_6385_ = lean_ctor_get(v_map_6382_, 0);
lean_inc_ref(v_map_u2081_6385_);
v_map_u2082_6386_ = lean_ctor_get(v_map_6382_, 1);
lean_inc_ref(v_map_u2082_6386_);
lean_dec_ref(v_map_6382_);
lean_inc(v_f_6383_);
lean_inc_ref(v_inst_6381_);
v___f_6387_ = lean_alloc_closure((void*)(l_Lean_ConstMap_forM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_6387_, 0, v_inst_6381_);
lean_closure_set(v___f_6387_, 1, v_map_u2082_6386_);
lean_closure_set(v___f_6387_, 2, v_f_6383_);
v___x_6388_ = l_Lean_ImportedConsts_forM___redArg(v_inst_6381_, v_map_u2081_6385_, v_f_6383_);
v___x_6389_ = lean_apply_4(v_toBind_6384_, lean_box(0), lean_box(0), v___x_6388_, v___f_6387_);
return v___x_6389_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_forM(lean_object* v_m_6390_, lean_object* v_inst_6391_, lean_object* v_map_6392_, lean_object* v_f_6393_){
_start:
{
lean_object* v___x_6394_; 
v___x_6394_ = l_Lean_ConstMap_forM___redArg(v_inst_6391_, v_map_6392_, v_f_6393_);
return v___x_6394_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__0(lean_object* v_f_6395_, lean_object* v_n_6396_, lean_object* v_v_6397_){
_start:
{
lean_object* v___x_6398_; lean_object* v___x_6399_; 
v___x_6398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6398_, 0, v_n_6396_);
lean_ctor_set(v___x_6398_, 1, v_v_6397_);
v___x_6399_ = lean_apply_1(v_f_6395_, v___x_6398_);
return v___x_6399_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__1(lean_object* v_inst_6400_, lean_object* v_map_6401_, lean_object* v_f_6402_){
_start:
{
lean_object* v___f_6403_; lean_object* v___x_6404_; 
v___f_6403_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__0), 3, 1);
lean_closure_set(v___f_6403_, 0, v_f_6402_);
v___x_6404_ = l_Lean_ConstMap_forM___redArg(v_inst_6400_, v_map_6401_, v___f_6403_);
return v___x_6404_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg(lean_object* v_inst_6405_){
_start:
{
lean_object* v___f_6406_; 
v___f_6406_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_6406_, 0, v_inst_6405_);
return v___f_6406_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad(lean_object* v_m_6407_, lean_object* v_inst_6408_){
_start:
{
lean_object* v___f_6409_; 
v___f_6409_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForMProdNameConstantInfoOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_6409_, 0, v_inst_6408_);
return v___f_6409_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__2(lean_object* v___y_6410_, lean_object* v_toBind_6411_, lean_object* v___f_6412_, lean_object* v_n_6413_, lean_object* v_v_6414_, lean_object* v___y_6415_){
_start:
{
lean_object* v___x_6416_; lean_object* v___x_6417_; lean_object* v___x_6418_; 
v___x_6416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6416_, 0, v_n_6413_);
lean_ctor_set(v___x_6416_, 1, v_v_6414_);
v___x_6417_ = lean_apply_2(v___y_6410_, v___x_6416_, v___y_6415_);
v___x_6418_ = lean_apply_4(v_toBind_6411_, lean_box(0), lean_box(0), v___x_6417_, v___f_6412_);
return v___x_6418_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__0(lean_object* v_inst_6419_, lean_object* v_00_u03b2_6420_, lean_object* v___y_6421_, lean_object* v___y_6422_, lean_object* v___y_6423_){
_start:
{
lean_object* v___f_6424_; lean_object* v___f_6425_; lean_object* v___f_6426_; lean_object* v___f_6427_; lean_object* v___x_6428_; lean_object* v___x_6429_; lean_object* v___x_6430_; lean_object* v___x_6431_; lean_object* v___x_6432_; lean_object* v___x_6433_; lean_object* v___f_6434_; lean_object* v___f_6435_; lean_object* v___f_6436_; lean_object* v___f_6437_; lean_object* v___x_6438_; lean_object* v___x_6439_; lean_object* v___x_6440_; lean_object* v___x_6441_; lean_object* v___x_6442_; lean_object* v___x_6443_; lean_object* v_toApplicative_6444_; lean_object* v_toBind_6445_; lean_object* v_toPure_6446_; lean_object* v___f_6447_; lean_object* v___f_6448_; lean_object* v___f_6449_; lean_object* v___x_138__overap_6450_; lean_object* v___x_6451_; lean_object* v___x_6452_; 
lean_inc_ref_n(v_inst_6419_, 7);
v___f_6424_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_6424_, 0, v_inst_6419_);
v___f_6425_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_6425_, 0, v_inst_6419_);
v___f_6426_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_6426_, 0, v_inst_6419_);
v___f_6427_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_6427_, 0, v_inst_6419_);
v___x_6428_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_6428_, 0, lean_box(0));
lean_closure_set(v___x_6428_, 1, lean_box(0));
lean_closure_set(v___x_6428_, 2, v_inst_6419_);
v___x_6429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6429_, 0, v___x_6428_);
lean_ctor_set(v___x_6429_, 1, v___f_6424_);
v___x_6430_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_6430_, 0, lean_box(0));
lean_closure_set(v___x_6430_, 1, lean_box(0));
lean_closure_set(v___x_6430_, 2, v_inst_6419_);
v___x_6431_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6431_, 0, v___x_6429_);
lean_ctor_set(v___x_6431_, 1, v___x_6430_);
lean_ctor_set(v___x_6431_, 2, v___f_6425_);
lean_ctor_set(v___x_6431_, 3, v___f_6426_);
lean_ctor_set(v___x_6431_, 4, v___f_6427_);
v___x_6432_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_6432_, 0, lean_box(0));
lean_closure_set(v___x_6432_, 1, lean_box(0));
lean_closure_set(v___x_6432_, 2, v_inst_6419_);
v___x_6433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6433_, 0, v___x_6431_);
lean_ctor_set(v___x_6433_, 1, v___x_6432_);
lean_inc_ref_n(v___x_6433_, 6);
v___f_6434_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_6434_, 0, v___x_6433_);
v___f_6435_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_6435_, 0, v___x_6433_);
v___f_6436_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_6436_, 0, v___x_6433_);
v___f_6437_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_6437_, 0, v___x_6433_);
v___x_6438_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_6438_, 0, lean_box(0));
lean_closure_set(v___x_6438_, 1, lean_box(0));
lean_closure_set(v___x_6438_, 2, v___x_6433_);
v___x_6439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6439_, 0, v___x_6438_);
lean_ctor_set(v___x_6439_, 1, v___f_6434_);
v___x_6440_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_6440_, 0, lean_box(0));
lean_closure_set(v___x_6440_, 1, lean_box(0));
lean_closure_set(v___x_6440_, 2, v___x_6433_);
v___x_6441_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6441_, 0, v___x_6439_);
lean_ctor_set(v___x_6441_, 1, v___x_6440_);
lean_ctor_set(v___x_6441_, 2, v___f_6435_);
lean_ctor_set(v___x_6441_, 3, v___f_6436_);
lean_ctor_set(v___x_6441_, 4, v___f_6437_);
v___x_6442_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_6442_, 0, lean_box(0));
lean_closure_set(v___x_6442_, 1, lean_box(0));
lean_closure_set(v___x_6442_, 2, v___x_6433_);
v___x_6443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6443_, 0, v___x_6441_);
lean_ctor_set(v___x_6443_, 1, v___x_6442_);
v_toApplicative_6444_ = lean_ctor_get(v_inst_6419_, 0);
lean_inc_ref(v_toApplicative_6444_);
v_toBind_6445_ = lean_ctor_get(v_inst_6419_, 1);
lean_inc_n(v_toBind_6445_, 2);
lean_dec_ref(v_inst_6419_);
v_toPure_6446_ = lean_ctor_get(v_toApplicative_6444_, 1);
lean_inc_n(v_toPure_6446_, 2);
lean_dec_ref(v_toApplicative_6444_);
v___f_6447_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0), 2, 1);
lean_closure_set(v___f_6447_, 0, v_toPure_6446_);
v___f_6448_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_6448_, 0, v_toPure_6446_);
v___f_6449_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__2), 6, 3);
lean_closure_set(v___f_6449_, 0, v___y_6423_);
lean_closure_set(v___f_6449_, 1, v_toBind_6445_);
lean_closure_set(v___f_6449_, 2, v___f_6448_);
v___x_138__overap_6450_ = l_Lean_ConstMap_forM___redArg(v___x_6443_, v___y_6421_, v___f_6449_);
v___x_6451_ = lean_apply_1(v___x_138__overap_6450_, v___y_6422_);
v___x_6452_ = lean_apply_4(v_toBind_6445_, lean_box(0), lean_box(0), v___x_6451_, v___f_6447_);
return v___x_6452_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg(lean_object* v_inst_6453_){
_start:
{
lean_object* v___f_6454_; 
v___f_6454_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__0), 5, 1);
lean_closure_set(v___f_6454_, 0, v_inst_6453_);
return v___f_6454_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad(lean_object* v_m_6455_, lean_object* v_inst_6456_){
_start:
{
lean_object* v___f_6457_; 
v___f_6457_ = lean_alloc_closure((void*)(l_Lean_ConstMap_instForInProdNameConstantInfoOfMonad___redArg___lam__0), 5, 1);
lean_closure_set(v___f_6457_, 0, v_inst_6456_);
return v___f_6457_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_toList___lam__0(lean_object* v_es_6458_, lean_object* v_n_6459_, lean_object* v_v_6460_){
_start:
{
lean_object* v___x_6461_; lean_object* v___x_6462_; 
v___x_6461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6461_, 0, v_n_6459_);
lean_ctor_set(v___x_6461_, 1, v_v_6460_);
v___x_6462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6462_, 0, v___x_6461_);
lean_ctor_set(v___x_6462_, 1, v_es_6458_);
return v___x_6462_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstMap_toList(lean_object* v_m_6464_){
_start:
{
lean_object* v___f_6465_; lean_object* v___x_6466_; lean_object* v___x_6467_; 
v___f_6465_ = ((lean_object*)(l_Lean_ConstMap_toList___closed__0));
v___x_6466_ = lean_box(0);
v___x_6467_ = l_Lean_ConstMap_fold___redArg(v___f_6465_, v___x_6466_, v_m_6464_);
return v___x_6467_;
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
