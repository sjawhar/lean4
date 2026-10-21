// Lean compiler output
// Module: Init.Data.String.Slice
// Imports: public import Init.Data.String.Pattern public import Init.Data.Ord.Basic public import Init.Data.Iterators.Combinators.FilterMap public import Init.Data.String.ToSlice public import Init.Data.String.Subslice public import Init.Data.String.Iter.Basic public import Init.Data.String.Iterate public import Init.Data.String.Compare import Init.Data.Iterators.Consumers.Collect import Init.Data.Iterators.Consumers.Loop import Init.Data.Option.Lemmas import Init.Data.String.Termination import Init.Omega
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
lean_object* l_String_Slice_slice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_obj_tag_nat(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
lean_object* l_Char_isWhitespace___boxed(lean_object*);
lean_object* l_String_Slice_Pattern_CharPred_instForwardPatternForallCharBool(lean_object*);
lean_object* l_String_Slice_Pos_prev_x3f(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_sub(uint8_t, uint8_t);
uint8_t lean_uint8_dec_lt(uint8_t, uint8_t);
uint8_t lean_bool_to_uint8(uint8_t);
uint8_t lean_uint8_shift_left(uint8_t, uint8_t);
uint8_t lean_uint8_add(uint8_t, uint8_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Int_negOfNat(lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
lean_object* l_String_Slice_Pattern_CharPred_instBackwardPatternForallCharBool(lean_object*);
extern lean_object* l_Int_instInhabited;
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_String_toName(lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instHAppend___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instHAppend___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_String_Slice_instHAppend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_Slice_instHAppend___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_String_Slice_instHAppend___closed__0 = (const lean_object*)&l_String_Slice_instHAppend___closed__0_value;
LEAN_EXPORT const lean_object* l_String_Slice_instHAppend = (const lean_object*)&l_String_Slice_instHAppend___closed__0_value;
LEAN_EXPORT uint8_t l_String_Slice_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_String_Slice_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_Slice_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_String_Slice_instBEq___closed__0 = (const lean_object*)&l_String_Slice_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_String_Slice_instBEq = (const lean_object*)&l_String_Slice_instBEq___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_toString(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_toString___boxed(lean_object*);
static const lean_closure_object l_String_Slice_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_Slice_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_String_Slice_instToString___closed__0 = (const lean_object*)&l_String_Slice_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_String_Slice_instToString = (const lean_object*)&l_String_Slice_instToString___closed__0_value;
uint64_t lean_slice_hash(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_hash___boxed(lean_object*);
static const lean_closure_object l_String_Slice_instHashable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_Slice_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_String_Slice_instHashable___closed__0 = (const lean_object*)&l_String_Slice_instHashable___closed__0_value;
LEAN_EXPORT const lean_object* l_String_Slice_instHashable = (const lean_object*)&l_String_Slice_instHashable___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_instLT;
uint8_t lean_slice_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instDecidableLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_instOrd___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instOrd___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_String_Slice_instOrd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_Slice_instOrd___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_String_Slice_instOrd___closed__0 = (const lean_object*)&l_String_Slice_instOrd___closed__0_value;
LEAN_EXPORT const lean_object* l_String_Slice_instOrd = (const lean_object*)&l_String_Slice_instOrd___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_instLE;
LEAN_EXPORT uint8_t l_String_Slice_instDecidableLE(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instDecidableLE___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_startsWith___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_startsWith___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_startsWith(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_startsWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_ctorIdx___impl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_ctorIdx___impl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_operating_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_operating_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_operating_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_atEnd_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_atEnd_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_atEnd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitIterator_default___redArg();
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitIterator_default___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitIterator_default(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitIterator_default___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitIterator___redArg();
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitIterator___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitIterator(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitIterator___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_PlausibleStep_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_PlausibleStep_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorIdSubslice___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorIdSubslice___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorIdSubslice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorIdSubslice___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_toOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_toOption___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_toOption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_toOption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__5_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__5_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__5_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_finitenessRelation___redArg();
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_finitenessRelation___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_finitenessRelation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_finitenessRelation___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_split___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_split(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_split___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_ctorIdx___impl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_ctorIdx___impl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_operating_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_operating_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_operating_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_atEnd_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_atEnd_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_atEnd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitInclusiveIterator_default___redArg();
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitInclusiveIterator_default___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitInclusiveIterator_default(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitInclusiveIterator_default___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitInclusiveIterator___redArg();
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitInclusiveIterator___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitInclusiveIterator(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitInclusiveIterator___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorId___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorId___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_toOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_toOption___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_toOption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_toOption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_instIteratorId_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_instIteratorId_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_instIteratorId_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_instIteratorId_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_instIteratorId_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_instIteratorId_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_finitenessRelation___redArg();
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_finitenessRelation___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_finitenessRelation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_finitenessRelation___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitInclusive___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitInclusive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitInclusive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_skipPrefix_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_skipPrefix_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_skipPrefix_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skip_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skip_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skip_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skip_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropPrefix_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropPrefix_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropPrefix_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropPrefix___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropPrefix(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropPrefix___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_String_Slice_replace___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_Slice_replace___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_String_Slice_replace___redArg___closed__0 = (const lean_object*)&l_String_Slice_replace___redArg___closed__0_value;
static const lean_string_object l_String_Slice_replace___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_String_Slice_replace___redArg___closed__1 = (const lean_object*)&l_String_Slice_replace___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_String_Slice_replace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_replace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_drop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_Pos_skipWhile_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_Pos_skipWhile_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_Pos_skipWhile_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_skipPrefixWhile___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_skipPrefixWhile___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_skipPrefixWhile(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_skipPrefixWhile___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropWhile___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropWhile(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropWhile___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_String_Slice_trimAsciiStart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Char_isWhitespace___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_String_Slice_trimAsciiStart___closed__0 = (const lean_object*)&l_String_Slice_trimAsciiStart___closed__0_value;
static lean_once_cell_t l_String_Slice_trimAsciiStart___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_trimAsciiStart___closed__1;
LEAN_EXPORT lean_object* l_String_Slice_trimAsciiStart(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_takeWhile___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_takeWhile(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_takeWhile___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_find_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_find_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_String_Slice_find_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_Slice_find_x3f___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_String_Slice_find_x3f___redArg___closed__0 = (const lean_object*)&l_String_Slice_find_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_find_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_find_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_find_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_find___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_find(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_find___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_contains___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_String_Slice_contains___redArg___lam__1___closed__0 = (const lean_object*)&l_String_Slice_contains___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_contains___redArg___lam__1(uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_String_Slice_contains___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_String_Slice_contains___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_Slice_contains___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_String_Slice_contains___redArg___closed__0 = (const lean_object*)&l_String_Slice_contains___redArg___closed__0_value;
LEAN_EXPORT uint8_t l_String_Slice_contains___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_any___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_any___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_any___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_all___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_all___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_all(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_all___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_endsWith___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_endsWith___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_endsWith(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_endsWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_ctorIdx___impl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_ctorIdx___impl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_operating_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_operating_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_operating_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_atEnd_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_atEnd_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_atEnd_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedRevSplitIterator_default___redArg();
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedRevSplitIterator_default___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedRevSplitIterator_default(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedRevSplitIterator_default___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedRevSplitIterator___redArg();
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedRevSplitIterator___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedRevSplitIterator(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedRevSplitIterator___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorOfPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorOfPure___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorOfPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorOfPure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_toOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_toOption___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_toOption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_toOption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_instIteratorOfPure_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_instIteratorOfPure_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_instIteratorOfPure_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_instIteratorOfPure_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_instIteratorOfPure_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_instIteratorOfPure_match__1_splitter___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_finitenessRelation___redArg();
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_finitenessRelation___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_finitenessRelation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_finitenessRelation___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_revSplit___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_revSplit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_revSplit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_skipSuffix_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_skipSuffix_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_skipSuffix_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkip_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkip_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkip_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkip_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropEnd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_skipSuffixWhile___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_skipSuffixWhile___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_skipSuffixWhile(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_skipSuffixWhile___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_revAll___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_revAll___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_revAll(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_revAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropEndWhile___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropEndWhile(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_dropEndWhile___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_String_Slice_trimAsciiEnd___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_trimAsciiEnd___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_trimAsciiEnd(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_takeEnd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_takeEndWhile___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_takeEndWhile(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_takeEndWhile___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_revFind_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_revFind_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_revFind_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00String_Slice_trimAscii_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00String_Slice_trimAscii_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00String_Slice_trimAscii_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00String_Slice_trimAscii_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_trimAscii(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_String_Slice_0__String_Slice_eqIgnoreAsciiCase_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_eqIgnoreAsciiCase_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_eqIgnoreAsciiCase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_eqIgnoreAsciiCase___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_lines_lineMap(lean_object*);
static const lean_ctor_object l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_lines(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_lines___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_isNat_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_isNat_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_isNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_isNat___closed__0 = (const lean_object*)&l_String_Slice_isNat___closed__0_value;
LEAN_EXPORT uint8_t l_String_Slice_isNat(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_isNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_isNat_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_isNat_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_toNat_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_toNat_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_toNat_x3f(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_toNat_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_toNat_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_toNat_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_toNat_x21_spec__0(lean_object*);
static const lean_string_object l_String_Slice_toNat_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Slice"};
static const lean_object* l_String_Slice_toNat_x21___closed__0 = (const lean_object*)&l_String_Slice_toNat_x21___closed__0_value;
static const lean_string_object l_String_Slice_toNat_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "String.Slice.toNat!"};
static const lean_object* l_String_Slice_toNat_x21___closed__1 = (const lean_object*)&l_String_Slice_toNat_x21___closed__1_value;
static const lean_string_object l_String_Slice_toNat_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Nat expected"};
static const lean_object* l_String_Slice_toNat_x21___closed__2 = (const lean_object*)&l_String_Slice_toNat_x21___closed__2_value;
static lean_once_cell_t l_String_Slice_toNat_x21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_toNat_x21___closed__3;
LEAN_EXPORT lean_object* l_String_Slice_toNat_x21(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_toNat_x21___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_front_x3f(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_front_x3f___boxed(lean_object*);
LEAN_EXPORT uint32_t l_String_Slice_front(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_front___boxed(lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_isInt(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_isInt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_toInt_x3f(lean_object*);
static const lean_string_object l_String_Slice_toInt_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Int expected"};
static const lean_object* l_String_Slice_toInt_x21___closed__0 = (const lean_object*)&l_String_Slice_toInt_x21___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_toInt_x21(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_back_x3f(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_back_x3f___boxed(lean_object*);
LEAN_EXPORT uint32_t l_String_Slice_back(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_back___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_intercalate_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_intercalate_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_intercalate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_intercalate___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00String_Slice_join_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00String_Slice_join_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_join(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_join___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_toName(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_toName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instToFormat___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_instToFormat___lam__0___boxed(lean_object*);
static const lean_closure_object l_String_Slice_instToFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_Slice_instToFormat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_String_Slice_instToFormat___closed__0 = (const lean_object*)&l_String_Slice_instToFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_String_Slice_instToFormat = (const lean_object*)&l_String_Slice_instToFormat___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_instHAppend___lam__0(lean_object* v_s_1_, lean_object* v_t_2_){
_start:
{
lean_object* v_str_3_; lean_object* v_startInclusive_4_; lean_object* v_endExclusive_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v_str_3_ = lean_ctor_get(v_t_2_, 0);
v_startInclusive_4_ = lean_ctor_get(v_t_2_, 1);
v_endExclusive_5_ = lean_ctor_get(v_t_2_, 2);
v___x_6_ = lean_string_utf8_extract_fast(v_str_3_, v_startInclusive_4_, v_endExclusive_5_);
v___x_7_ = lean_string_append(v_s_1_, v___x_6_);
lean_dec_ref(v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instHAppend___lam__0___boxed(lean_object* v_s_8_, lean_object* v_t_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_String_Slice_instHAppend___lam__0(v_s_8_, v_t_9_);
lean_dec_ref(v_t_9_);
return v_res_10_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_beq(lean_object* v_s1_13_, lean_object* v_s2_14_){
_start:
{
lean_object* v_str_15_; lean_object* v_startInclusive_16_; lean_object* v_endExclusive_17_; lean_object* v_str_18_; lean_object* v_startInclusive_19_; lean_object* v_endExclusive_20_; lean_object* v___x_21_; lean_object* v___x_22_; uint8_t v___x_23_; 
v_str_15_ = lean_ctor_get(v_s1_13_, 0);
v_startInclusive_16_ = lean_ctor_get(v_s1_13_, 1);
v_endExclusive_17_ = lean_ctor_get(v_s1_13_, 2);
v_str_18_ = lean_ctor_get(v_s2_14_, 0);
v_startInclusive_19_ = lean_ctor_get(v_s2_14_, 1);
v_endExclusive_20_ = lean_ctor_get(v_s2_14_, 2);
v___x_21_ = lean_nat_sub(v_endExclusive_17_, v_startInclusive_16_);
v___x_22_ = lean_nat_sub(v_endExclusive_20_, v_startInclusive_19_);
v___x_23_ = lean_nat_dec_eq(v___x_21_, v___x_22_);
lean_dec(v___x_22_);
if (v___x_23_ == 0)
{
lean_dec(v___x_21_);
return v___x_23_;
}
else
{
uint8_t v___x_24_; 
v___x_24_ = lean_string_memcmp(v_str_15_, v_str_18_, v_startInclusive_16_, v_startInclusive_19_, v___x_21_);
lean_dec(v___x_21_);
return v___x_24_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_beq___boxed(lean_object* v_s1_25_, lean_object* v_s2_26_){
_start:
{
uint8_t v_res_27_; lean_object* v_r_28_; 
v_res_27_ = l_String_Slice_beq(v_s1_25_, v_s2_26_);
lean_dec_ref(v_s2_26_);
lean_dec_ref(v_s1_25_);
v_r_28_ = lean_box(v_res_27_);
return v_r_28_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_toString(lean_object* v_s_31_){
_start:
{
lean_object* v_str_32_; lean_object* v_startInclusive_33_; lean_object* v_endExclusive_34_; lean_object* v___x_35_; 
v_str_32_ = lean_ctor_get(v_s_31_, 0);
v_startInclusive_33_ = lean_ctor_get(v_s_31_, 1);
v_endExclusive_34_ = lean_ctor_get(v_s_31_, 2);
v___x_35_ = lean_string_utf8_extract_fast(v_str_32_, v_startInclusive_33_, v_endExclusive_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_toString___boxed(lean_object* v_s_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_String_Slice_toString(v_s_36_);
lean_dec_ref(v_s_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_hash___boxed(lean_object* v_s_41_){
_start:
{
uint64_t v_res_42_; lean_object* v_r_43_; 
v_res_42_ = lean_slice_hash(v_s_41_);
lean_dec_ref(v_s_41_);
v_r_43_ = lean_box_uint64(v_res_42_);
return v_r_43_;
}
}
static lean_object* _init_l_String_Slice_instLT(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_box(0);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instDecidableLt___boxed(lean_object* v_x_49_, lean_object* v_y_50_){
_start:
{
uint8_t v_res_51_; lean_object* v_r_52_; 
v_res_51_ = lean_slice_dec_lt(v_x_49_, v_y_50_);
lean_dec_ref(v_y_50_);
lean_dec_ref(v_x_49_);
v_r_52_ = lean_box(v_res_51_);
return v_r_52_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_instOrd___lam__0(lean_object* v_x_53_, lean_object* v_y_54_){
_start:
{
uint8_t v___x_55_; 
v___x_55_ = lean_slice_dec_lt(v_x_53_, v_y_54_);
if (v___x_55_ == 0)
{
uint8_t v___x_56_; 
v___x_56_ = l_String_Slice_beq(v_x_53_, v_y_54_);
if (v___x_56_ == 0)
{
uint8_t v___x_57_; 
v___x_57_ = 2;
return v___x_57_;
}
else
{
uint8_t v___x_58_; 
v___x_58_ = 1;
return v___x_58_;
}
}
else
{
uint8_t v___x_59_; 
v___x_59_ = 0;
return v___x_59_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_instOrd___lam__0___boxed(lean_object* v_x_60_, lean_object* v_y_61_){
_start:
{
uint8_t v_res_62_; lean_object* v_r_63_; 
v_res_62_ = l_String_Slice_instOrd___lam__0(v_x_60_, v_y_61_);
lean_dec_ref(v_y_61_);
lean_dec_ref(v_x_60_);
v_r_63_ = lean_box(v_res_62_);
return v_r_63_;
}
}
static lean_object* _init_l_String_Slice_instLE(void){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lean_box(0);
return v___x_66_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_instDecidableLE(lean_object* v_x_67_, lean_object* v_y_68_){
_start:
{
uint8_t v___x_69_; 
v___x_69_ = lean_slice_dec_lt(v_x_67_, v_y_68_);
if (v___x_69_ == 0)
{
uint8_t v___x_70_; 
v___x_70_ = 1;
return v___x_70_;
}
else
{
uint8_t v___x_71_; 
v___x_71_ = 0;
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_instDecidableLE___boxed(lean_object* v_x_72_, lean_object* v_y_73_){
_start:
{
uint8_t v_res_74_; lean_object* v_r_75_; 
v_res_74_ = l_String_Slice_instDecidableLE(v_x_72_, v_y_73_);
lean_dec_ref(v_y_73_);
lean_dec_ref(v_x_72_);
v_r_75_ = lean_box(v_res_74_);
return v_r_75_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_startsWith___redArg(lean_object* v_s_76_, lean_object* v_inst_77_){
_start:
{
lean_object* v_startsWith_78_; lean_object* v___x_79_; uint8_t v___x_80_; 
v_startsWith_78_ = lean_ctor_get(v_inst_77_, 2);
lean_inc_ref(v_startsWith_78_);
lean_dec_ref(v_inst_77_);
v___x_79_ = lean_apply_1(v_startsWith_78_, v_s_76_);
v___x_80_ = lean_unbox(v___x_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_startsWith___redArg___boxed(lean_object* v_s_81_, lean_object* v_inst_82_){
_start:
{
uint8_t v_res_83_; lean_object* v_r_84_; 
v_res_83_ = l_String_Slice_startsWith___redArg(v_s_81_, v_inst_82_);
v_r_84_ = lean_box(v_res_83_);
return v_r_84_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_startsWith(lean_object* v_00_u03c1_85_, lean_object* v_s_86_, lean_object* v_pat_87_, lean_object* v_inst_88_){
_start:
{
lean_object* v_startsWith_89_; lean_object* v___x_90_; uint8_t v___x_91_; 
v_startsWith_89_ = lean_ctor_get(v_inst_88_, 2);
lean_inc_ref(v_startsWith_89_);
lean_dec_ref(v_inst_88_);
v___x_90_ = lean_apply_1(v_startsWith_89_, v_s_86_);
v___x_91_ = lean_unbox(v___x_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_startsWith___boxed(lean_object* v_00_u03c1_92_, lean_object* v_s_93_, lean_object* v_pat_94_, lean_object* v_inst_95_){
_start:
{
uint8_t v_res_96_; lean_object* v_r_97_; 
v_res_96_ = l_String_Slice_startsWith(v_00_u03c1_92_, v_s_93_, v_pat_94_, v_inst_95_);
lean_dec(v_pat_94_);
v_r_97_ = lean_box(v_res_96_);
return v_r_97_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_ctorIdx___impl___redArg(lean_object* v_x_98_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = lean_obj_tag_nat(v_x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_ctorIdx___impl___redArg___boxed(lean_object* v_x_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_String_Slice_SplitIterator_ctorIdx___impl___redArg(v_x_100_);
lean_dec(v_x_100_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_ctorIdx___impl(lean_object* v_00_u03c3_102_, lean_object* v_00_u03c1_103_, lean_object* v_pat_104_, lean_object* v_s_105_, lean_object* v_inst_106_, lean_object* v_x_107_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = lean_obj_tag_nat(v_x_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_ctorIdx___impl___boxed(lean_object* v_00_u03c3_109_, lean_object* v_00_u03c1_110_, lean_object* v_pat_111_, lean_object* v_s_112_, lean_object* v_inst_113_, lean_object* v_x_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_String_Slice_SplitIterator_ctorIdx___impl(v_00_u03c3_109_, v_00_u03c1_110_, v_pat_111_, v_s_112_, v_inst_113_, v_x_114_);
lean_dec(v_x_114_);
lean_dec(v_inst_113_);
lean_dec_ref(v_s_112_);
lean_dec(v_pat_111_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_ctorElim___redArg(lean_object* v_t_116_, lean_object* v_k_117_){
_start:
{
if (lean_obj_tag(v_t_116_) == 0)
{
lean_object* v_currPos_118_; lean_object* v_searcher_119_; lean_object* v___x_120_; 
v_currPos_118_ = lean_ctor_get(v_t_116_, 0);
lean_inc(v_currPos_118_);
v_searcher_119_ = lean_ctor_get(v_t_116_, 1);
lean_inc(v_searcher_119_);
lean_dec_ref_known(v_t_116_, 2);
v___x_120_ = lean_apply_2(v_k_117_, v_currPos_118_, v_searcher_119_);
return v___x_120_;
}
else
{
return v_k_117_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_ctorElim(lean_object* v_00_u03c3_121_, lean_object* v_00_u03c1_122_, lean_object* v_pat_123_, lean_object* v_s_124_, lean_object* v_inst_125_, lean_object* v_motive_126_, lean_object* v_ctorIdx_127_, lean_object* v_t_128_, lean_object* v_h_129_, lean_object* v_k_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l_String_Slice_SplitIterator_ctorElim___redArg(v_t_128_, v_k_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_ctorElim___boxed(lean_object* v_00_u03c3_132_, lean_object* v_00_u03c1_133_, lean_object* v_pat_134_, lean_object* v_s_135_, lean_object* v_inst_136_, lean_object* v_motive_137_, lean_object* v_ctorIdx_138_, lean_object* v_t_139_, lean_object* v_h_140_, lean_object* v_k_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_String_Slice_SplitIterator_ctorElim(v_00_u03c3_132_, v_00_u03c1_133_, v_pat_134_, v_s_135_, v_inst_136_, v_motive_137_, v_ctorIdx_138_, v_t_139_, v_h_140_, v_k_141_);
lean_dec(v_ctorIdx_138_);
lean_dec(v_inst_136_);
lean_dec_ref(v_s_135_);
lean_dec(v_pat_134_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_operating_elim___redArg(lean_object* v_t_143_, lean_object* v_operating_144_){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = l_String_Slice_SplitIterator_ctorElim___redArg(v_t_143_, v_operating_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_operating_elim(lean_object* v_00_u03c3_146_, lean_object* v_00_u03c1_147_, lean_object* v_pat_148_, lean_object* v_s_149_, lean_object* v_inst_150_, lean_object* v_motive_151_, lean_object* v_t_152_, lean_object* v_h_153_, lean_object* v_operating_154_){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = l_String_Slice_SplitIterator_ctorElim___redArg(v_t_152_, v_operating_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_operating_elim___boxed(lean_object* v_00_u03c3_156_, lean_object* v_00_u03c1_157_, lean_object* v_pat_158_, lean_object* v_s_159_, lean_object* v_inst_160_, lean_object* v_motive_161_, lean_object* v_t_162_, lean_object* v_h_163_, lean_object* v_operating_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_String_Slice_SplitIterator_operating_elim(v_00_u03c3_156_, v_00_u03c1_157_, v_pat_158_, v_s_159_, v_inst_160_, v_motive_161_, v_t_162_, v_h_163_, v_operating_164_);
lean_dec(v_inst_160_);
lean_dec_ref(v_s_159_);
lean_dec(v_pat_158_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_atEnd_elim___redArg(lean_object* v_t_166_, lean_object* v_atEnd_167_){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = l_String_Slice_SplitIterator_ctorElim___redArg(v_t_166_, v_atEnd_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_atEnd_elim(lean_object* v_00_u03c3_169_, lean_object* v_00_u03c1_170_, lean_object* v_pat_171_, lean_object* v_s_172_, lean_object* v_inst_173_, lean_object* v_motive_174_, lean_object* v_t_175_, lean_object* v_h_176_, lean_object* v_atEnd_177_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = l_String_Slice_SplitIterator_ctorElim___redArg(v_t_175_, v_atEnd_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_atEnd_elim___boxed(lean_object* v_00_u03c3_179_, lean_object* v_00_u03c1_180_, lean_object* v_pat_181_, lean_object* v_s_182_, lean_object* v_inst_183_, lean_object* v_motive_184_, lean_object* v_t_185_, lean_object* v_h_186_, lean_object* v_atEnd_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_String_Slice_SplitIterator_atEnd_elim(v_00_u03c3_179_, v_00_u03c1_180_, v_pat_181_, v_s_182_, v_inst_183_, v_motive_184_, v_t_185_, v_h_186_, v_atEnd_187_);
lean_dec(v_inst_183_);
lean_dec_ref(v_s_182_);
lean_dec(v_pat_181_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitIterator_default___redArg(){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = lean_box(1);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitIterator_default___redArg___boxed(lean_object* v___dummy_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_String_Slice_instInhabitedSplitIterator_default___redArg();
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitIterator_default(lean_object* v_00_u03c3_193_, lean_object* v_00_u03c1_194_, lean_object* v_pat_195_, lean_object* v_s_196_, lean_object* v_inst_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = lean_box(1);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitIterator_default___boxed(lean_object* v_00_u03c3_199_, lean_object* v_00_u03c1_200_, lean_object* v_pat_201_, lean_object* v_s_202_, lean_object* v_inst_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_String_Slice_instInhabitedSplitIterator_default(v_00_u03c3_199_, v_00_u03c1_200_, v_pat_201_, v_s_202_, v_inst_203_);
lean_dec(v_inst_203_);
lean_dec_ref(v_s_202_);
lean_dec(v_pat_201_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitIterator___redArg(){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lean_box(1);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitIterator___redArg___boxed(lean_object* v___dummy_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_String_Slice_instInhabitedSplitIterator___redArg();
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitIterator(lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_box(1);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitIterator___boxed(lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l_String_Slice_instInhabitedSplitIterator(v_a_215_, v_a_216_, v_a_217_, v_a_218_, v_a_219_);
lean_dec(v_a_219_);
lean_dec_ref(v_a_218_);
lean_dec(v_a_217_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_PlausibleStep_ctorIdx___impl(uint8_t v_x_221_){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_222_ = lean_box(v_x_221_);
v___x_223_ = lean_obj_tag_nat(v___x_222_);
lean_dec(v___x_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_PlausibleStep_ctorIdx___impl___boxed(lean_object* v_x_224_){
_start:
{
uint8_t v_x_4__boxed_225_; lean_object* v_res_226_; 
v_x_4__boxed_225_ = lean_unbox(v_x_224_);
v_res_226_ = l_String_Slice_SplitIterator_PlausibleStep_ctorIdx___impl(v_x_4__boxed_225_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorIdSubslice___redArg___lam__0(lean_object* v_inst_227_, lean_object* v_s_228_, lean_object* v_x_229_){
_start:
{
if (lean_obj_tag(v_x_229_) == 0)
{
lean_object* v_currPos_230_; lean_object* v_searcher_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_274_; 
v_currPos_230_ = lean_ctor_get(v_x_229_, 0);
v_searcher_231_ = lean_ctor_get(v_x_229_, 1);
v_isSharedCheck_274_ = !lean_is_exclusive(v_x_229_);
if (v_isSharedCheck_274_ == 0)
{
v___x_233_ = v_x_229_;
v_isShared_234_ = v_isSharedCheck_274_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_searcher_231_);
lean_inc(v_currPos_230_);
lean_dec(v_x_229_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_274_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_235_; 
lean_inc_ref(v_s_228_);
v___x_235_ = lean_apply_2(v_inst_227_, v_s_228_, v_searcher_231_);
switch(lean_obj_tag(v___x_235_))
{
case 0:
{
lean_object* v_out_236_; 
v_out_236_ = lean_ctor_get(v___x_235_, 1);
lean_inc(v_out_236_);
if (lean_obj_tag(v_out_236_) == 0)
{
lean_object* v_it_237_; lean_object* v___x_239_; 
lean_dec_ref_known(v_out_236_, 2);
lean_dec_ref(v_s_228_);
v_it_237_ = lean_ctor_get(v___x_235_, 0);
lean_inc(v_it_237_);
lean_dec_ref_known(v___x_235_, 2);
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 1, v_it_237_);
v___x_239_ = v___x_233_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_currPos_230_);
lean_ctor_set(v_reuseFailAlloc_241_, 1, v_it_237_);
v___x_239_ = v_reuseFailAlloc_241_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
lean_object* v___x_240_; 
v___x_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
return v___x_240_;
}
}
else
{
lean_object* v_it_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_255_; 
v_it_242_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_255_ == 0)
{
lean_object* v_unused_256_; 
v_unused_256_ = lean_ctor_get(v___x_235_, 1);
lean_dec(v_unused_256_);
v___x_244_ = v___x_235_;
v_isShared_245_ = v_isSharedCheck_255_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_it_242_);
lean_dec(v___x_235_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_255_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v_startPos_246_; lean_object* v_endPos_247_; lean_object* v_slice_248_; lean_object* v_nextIt_250_; 
v_startPos_246_ = lean_ctor_get(v_out_236_, 0);
lean_inc(v_startPos_246_);
v_endPos_247_ = lean_ctor_get(v_out_236_, 1);
lean_inc(v_endPos_247_);
lean_dec_ref_known(v_out_236_, 2);
v_slice_248_ = l_String_Slice_subslice_x21(v_s_228_, v_currPos_230_, v_startPos_246_);
lean_dec_ref(v_s_228_);
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 1, v_it_242_);
lean_ctor_set(v___x_233_, 0, v_endPos_247_);
v_nextIt_250_ = v___x_233_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_endPos_247_);
lean_ctor_set(v_reuseFailAlloc_254_, 1, v_it_242_);
v_nextIt_250_ = v_reuseFailAlloc_254_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
lean_object* v___x_252_; 
if (v_isShared_245_ == 0)
{
lean_ctor_set(v___x_244_, 1, v_slice_248_);
lean_ctor_set(v___x_244_, 0, v_nextIt_250_);
v___x_252_ = v___x_244_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_nextIt_250_);
lean_ctor_set(v_reuseFailAlloc_253_, 1, v_slice_248_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
}
}
case 1:
{
lean_object* v_it_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_267_; 
lean_dec_ref(v_s_228_);
v_it_257_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_267_ == 0)
{
v___x_259_ = v___x_235_;
v_isShared_260_ = v_isSharedCheck_267_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_it_257_);
lean_dec(v___x_235_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_267_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_262_; 
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 1, v_it_257_);
v___x_262_ = v___x_233_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v_currPos_230_);
lean_ctor_set(v_reuseFailAlloc_266_, 1, v_it_257_);
v___x_262_ = v_reuseFailAlloc_266_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
lean_object* v___x_264_; 
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 0, v___x_262_);
v___x_264_ = v___x_259_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_262_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
}
default: 
{
lean_object* v_startInclusive_268_; lean_object* v_endExclusive_269_; lean_object* v___x_270_; lean_object* v_slice_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
lean_del_object(v___x_233_);
v_startInclusive_268_ = lean_ctor_get(v_s_228_, 1);
lean_inc(v_startInclusive_268_);
v_endExclusive_269_ = lean_ctor_get(v_s_228_, 2);
lean_inc(v_endExclusive_269_);
lean_dec_ref(v_s_228_);
v___x_270_ = lean_nat_sub(v_endExclusive_269_, v_startInclusive_268_);
lean_dec(v_startInclusive_268_);
lean_dec(v_endExclusive_269_);
v_slice_271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_slice_271_, 0, v_currPos_230_);
lean_ctor_set(v_slice_271_, 1, v___x_270_);
v___x_272_ = lean_box(1);
v___x_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_273_, 0, v___x_272_);
lean_ctor_set(v___x_273_, 1, v_slice_271_);
return v___x_273_;
}
}
}
}
else
{
lean_object* v___x_275_; 
lean_dec_ref(v_s_228_);
lean_dec(v_inst_227_);
v___x_275_ = lean_box(2);
return v___x_275_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorIdSubslice___redArg(lean_object* v_inst_276_, lean_object* v_s_277_){
_start:
{
lean_object* v___f_278_; 
v___f_278_ = lean_alloc_closure((void*)(l_String_Slice_SplitIterator_instIteratorIdSubslice___redArg___lam__0), 3, 2);
lean_closure_set(v___f_278_, 0, v_inst_276_);
lean_closure_set(v___f_278_, 1, v_s_277_);
return v___f_278_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorIdSubslice(lean_object* v_00_u03c1_279_, lean_object* v_00_u03c3_280_, lean_object* v_inst_281_, lean_object* v_pat_282_, lean_object* v_inst_283_, lean_object* v_s_284_){
_start:
{
lean_object* v___f_285_; 
v___f_285_ = lean_alloc_closure((void*)(l_String_Slice_SplitIterator_instIteratorIdSubslice___redArg___lam__0), 3, 2);
lean_closure_set(v___f_285_, 0, v_inst_281_);
lean_closure_set(v___f_285_, 1, v_s_284_);
return v___f_285_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorIdSubslice___boxed(lean_object* v_00_u03c1_286_, lean_object* v_00_u03c3_287_, lean_object* v_inst_288_, lean_object* v_pat_289_, lean_object* v_inst_290_, lean_object* v_s_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_String_Slice_SplitIterator_instIteratorIdSubslice(v_00_u03c1_286_, v_00_u03c3_287_, v_inst_288_, v_pat_289_, v_inst_290_, v_s_291_);
lean_dec(v_inst_290_);
lean_dec(v_pat_289_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_toOption___redArg(lean_object* v_x_293_){
_start:
{
if (lean_obj_tag(v_x_293_) == 0)
{
lean_object* v_searcher_294_; lean_object* v___x_295_; 
v_searcher_294_ = lean_ctor_get(v_x_293_, 1);
lean_inc(v_searcher_294_);
v___x_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_295_, 0, v_searcher_294_);
return v___x_295_;
}
else
{
lean_object* v___x_296_; 
v___x_296_ = lean_box(0);
return v___x_296_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_toOption___redArg___boxed(lean_object* v_x_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_toOption___redArg(v_x_297_);
lean_dec(v_x_297_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_toOption(lean_object* v_00_u03c1_299_, lean_object* v_00_u03c3_300_, lean_object* v_pat_301_, lean_object* v_inst_302_, lean_object* v_s_303_, lean_object* v_x_304_){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_toOption___redArg(v_x_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_toOption___boxed(lean_object* v_00_u03c1_306_, lean_object* v_00_u03c3_307_, lean_object* v_pat_308_, lean_object* v_inst_309_, lean_object* v_s_310_, lean_object* v_x_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_toOption(v_00_u03c1_306_, v_00_u03c3_307_, v_pat_308_, v_inst_309_, v_s_310_, v_x_311_);
lean_dec(v_x_311_);
lean_dec_ref(v_s_310_);
lean_dec(v_inst_309_);
lean_dec(v_pat_308_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__5_splitter___redArg(lean_object* v_x_313_, lean_object* v_h__1_314_, lean_object* v_h__2_315_){
_start:
{
if (lean_obj_tag(v_x_313_) == 0)
{
lean_object* v_currPos_316_; lean_object* v_searcher_317_; lean_object* v___x_318_; 
lean_dec(v_h__2_315_);
v_currPos_316_ = lean_ctor_get(v_x_313_, 0);
lean_inc(v_currPos_316_);
v_searcher_317_ = lean_ctor_get(v_x_313_, 1);
lean_inc(v_searcher_317_);
lean_dec_ref_known(v_x_313_, 2);
v___x_318_ = lean_apply_2(v_h__1_314_, v_currPos_316_, v_searcher_317_);
return v___x_318_;
}
else
{
lean_object* v___x_319_; lean_object* v___x_320_; 
lean_dec(v_h__1_314_);
v___x_319_ = lean_box(0);
v___x_320_ = lean_apply_1(v_h__2_315_, v___x_319_);
return v___x_320_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__5_splitter(lean_object* v_00_u03c1_321_, lean_object* v_00_u03c3_322_, lean_object* v_pat_323_, lean_object* v_inst_324_, lean_object* v_s_325_, lean_object* v_motive_326_, lean_object* v_x_327_, lean_object* v_h__1_328_, lean_object* v_h__2_329_){
_start:
{
if (lean_obj_tag(v_x_327_) == 0)
{
lean_object* v_currPos_330_; lean_object* v_searcher_331_; lean_object* v___x_332_; 
lean_dec(v_h__2_329_);
v_currPos_330_ = lean_ctor_get(v_x_327_, 0);
lean_inc(v_currPos_330_);
v_searcher_331_ = lean_ctor_get(v_x_327_, 1);
lean_inc(v_searcher_331_);
lean_dec_ref_known(v_x_327_, 2);
v___x_332_ = lean_apply_2(v_h__1_328_, v_currPos_330_, v_searcher_331_);
return v___x_332_;
}
else
{
lean_object* v___x_333_; lean_object* v___x_334_; 
lean_dec(v_h__1_328_);
v___x_333_ = lean_box(0);
v___x_334_ = lean_apply_1(v_h__2_329_, v___x_333_);
return v___x_334_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__5_splitter___boxed(lean_object* v_00_u03c1_335_, lean_object* v_00_u03c3_336_, lean_object* v_pat_337_, lean_object* v_inst_338_, lean_object* v_s_339_, lean_object* v_motive_340_, lean_object* v_x_341_, lean_object* v_h__1_342_, lean_object* v_h__2_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__5_splitter(v_00_u03c1_335_, v_00_u03c3_336_, v_pat_337_, v_inst_338_, v_s_339_, v_motive_340_, v_x_341_, v_h__1_342_, v_h__2_343_);
lean_dec_ref(v_s_339_);
lean_dec(v_inst_338_);
lean_dec(v_pat_337_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__3_splitter___redArg(lean_object* v_x_345_, lean_object* v_h__1_346_, lean_object* v_h__2_347_, lean_object* v_h__3_348_, lean_object* v_h__4_349_){
_start:
{
switch(lean_obj_tag(v_x_345_))
{
case 0:
{
lean_object* v_out_350_; 
lean_dec(v_h__4_349_);
lean_dec(v_h__3_348_);
v_out_350_ = lean_ctor_get(v_x_345_, 1);
lean_inc(v_out_350_);
if (lean_obj_tag(v_out_350_) == 0)
{
lean_object* v_it_351_; lean_object* v_startPos_352_; lean_object* v_endPos_353_; lean_object* v___x_354_; 
lean_dec(v_h__1_346_);
v_it_351_ = lean_ctor_get(v_x_345_, 0);
lean_inc(v_it_351_);
lean_dec_ref_known(v_x_345_, 2);
v_startPos_352_ = lean_ctor_get(v_out_350_, 0);
lean_inc(v_startPos_352_);
v_endPos_353_ = lean_ctor_get(v_out_350_, 1);
lean_inc(v_endPos_353_);
lean_dec_ref_known(v_out_350_, 2);
v___x_354_ = lean_apply_5(v_h__2_347_, v_it_351_, v_startPos_352_, v_endPos_353_, lean_box(0), lean_box(0));
return v___x_354_;
}
else
{
lean_object* v_it_355_; lean_object* v_startPos_356_; lean_object* v_endPos_357_; lean_object* v___x_358_; 
lean_dec(v_h__2_347_);
v_it_355_ = lean_ctor_get(v_x_345_, 0);
lean_inc(v_it_355_);
lean_dec_ref_known(v_x_345_, 2);
v_startPos_356_ = lean_ctor_get(v_out_350_, 0);
lean_inc(v_startPos_356_);
v_endPos_357_ = lean_ctor_get(v_out_350_, 1);
lean_inc(v_endPos_357_);
lean_dec_ref_known(v_out_350_, 2);
v___x_358_ = lean_apply_5(v_h__1_346_, v_it_355_, v_startPos_356_, v_endPos_357_, lean_box(0), lean_box(0));
return v___x_358_;
}
}
case 1:
{
lean_object* v_it_359_; lean_object* v___x_360_; 
lean_dec(v_h__4_349_);
lean_dec(v_h__2_347_);
lean_dec(v_h__1_346_);
v_it_359_ = lean_ctor_get(v_x_345_, 0);
lean_inc(v_it_359_);
lean_dec_ref_known(v_x_345_, 1);
v___x_360_ = lean_apply_3(v_h__3_348_, v_it_359_, lean_box(0), lean_box(0));
return v___x_360_;
}
default: 
{
lean_object* v___x_361_; 
lean_dec(v_h__3_348_);
lean_dec(v_h__2_347_);
lean_dec(v_h__1_346_);
v___x_361_ = lean_apply_2(v_h__4_349_, lean_box(0), lean_box(0));
return v___x_361_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__3_splitter(lean_object* v_00_u03c3_362_, lean_object* v_inst_363_, lean_object* v_s_364_, lean_object* v_searcher_365_, lean_object* v_motive_366_, lean_object* v_x_367_, lean_object* v_h__1_368_, lean_object* v_h__2_369_, lean_object* v_h__3_370_, lean_object* v_h__4_371_){
_start:
{
switch(lean_obj_tag(v_x_367_))
{
case 0:
{
lean_object* v_out_372_; 
lean_dec(v_h__4_371_);
lean_dec(v_h__3_370_);
v_out_372_ = lean_ctor_get(v_x_367_, 1);
lean_inc(v_out_372_);
if (lean_obj_tag(v_out_372_) == 0)
{
lean_object* v_it_373_; lean_object* v_startPos_374_; lean_object* v_endPos_375_; lean_object* v___x_376_; 
lean_dec(v_h__1_368_);
v_it_373_ = lean_ctor_get(v_x_367_, 0);
lean_inc(v_it_373_);
lean_dec_ref_known(v_x_367_, 2);
v_startPos_374_ = lean_ctor_get(v_out_372_, 0);
lean_inc(v_startPos_374_);
v_endPos_375_ = lean_ctor_get(v_out_372_, 1);
lean_inc(v_endPos_375_);
lean_dec_ref_known(v_out_372_, 2);
v___x_376_ = lean_apply_5(v_h__2_369_, v_it_373_, v_startPos_374_, v_endPos_375_, lean_box(0), lean_box(0));
return v___x_376_;
}
else
{
lean_object* v_it_377_; lean_object* v_startPos_378_; lean_object* v_endPos_379_; lean_object* v___x_380_; 
lean_dec(v_h__2_369_);
v_it_377_ = lean_ctor_get(v_x_367_, 0);
lean_inc(v_it_377_);
lean_dec_ref_known(v_x_367_, 2);
v_startPos_378_ = lean_ctor_get(v_out_372_, 0);
lean_inc(v_startPos_378_);
v_endPos_379_ = lean_ctor_get(v_out_372_, 1);
lean_inc(v_endPos_379_);
lean_dec_ref_known(v_out_372_, 2);
v___x_380_ = lean_apply_5(v_h__1_368_, v_it_377_, v_startPos_378_, v_endPos_379_, lean_box(0), lean_box(0));
return v___x_380_;
}
}
case 1:
{
lean_object* v_it_381_; lean_object* v___x_382_; 
lean_dec(v_h__4_371_);
lean_dec(v_h__2_369_);
lean_dec(v_h__1_368_);
v_it_381_ = lean_ctor_get(v_x_367_, 0);
lean_inc(v_it_381_);
lean_dec_ref_known(v_x_367_, 1);
v___x_382_ = lean_apply_3(v_h__3_370_, v_it_381_, lean_box(0), lean_box(0));
return v___x_382_;
}
default: 
{
lean_object* v___x_383_; 
lean_dec(v_h__3_370_);
lean_dec(v_h__2_369_);
lean_dec(v_h__1_368_);
v___x_383_ = lean_apply_2(v_h__4_371_, lean_box(0), lean_box(0));
return v___x_383_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__3_splitter___boxed(lean_object* v_00_u03c3_384_, lean_object* v_inst_385_, lean_object* v_s_386_, lean_object* v_searcher_387_, lean_object* v_motive_388_, lean_object* v_x_389_, lean_object* v_h__1_390_, lean_object* v_h__2_391_, lean_object* v_h__3_392_, lean_object* v_h__4_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__3_splitter(v_00_u03c3_384_, v_inst_385_, v_s_386_, v_searcher_387_, v_motive_388_, v_x_389_, v_h__1_390_, v_h__2_391_, v_h__3_392_, v_h__4_393_);
lean_dec(v_searcher_387_);
lean_dec_ref(v_s_386_);
lean_dec(v_inst_385_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__1_splitter___redArg(lean_object* v_x_395_, lean_object* v_x_396_, lean_object* v_h__1_397_, lean_object* v_h__2_398_, lean_object* v_h__3_399_, lean_object* v_h__4_400_, lean_object* v_h__5_401_, lean_object* v_h__6_402_, lean_object* v_h__7_403_, lean_object* v_h__8_404_){
_start:
{
if (lean_obj_tag(v_x_395_) == 0)
{
lean_dec(v_h__8_404_);
lean_dec(v_h__7_403_);
lean_dec(v_h__6_402_);
switch(lean_obj_tag(v_x_396_))
{
case 0:
{
lean_object* v_it_405_; 
lean_dec(v_h__5_401_);
lean_dec(v_h__4_400_);
lean_dec(v_h__3_399_);
v_it_405_ = lean_ctor_get(v_x_396_, 0);
if (lean_obj_tag(v_it_405_) == 0)
{
lean_object* v_currPos_406_; lean_object* v_searcher_407_; lean_object* v_out_408_; lean_object* v_currPos_409_; lean_object* v_searcher_410_; lean_object* v___x_411_; 
lean_inc_ref(v_it_405_);
lean_dec(v_h__2_398_);
v_currPos_406_ = lean_ctor_get(v_x_395_, 0);
lean_inc(v_currPos_406_);
v_searcher_407_ = lean_ctor_get(v_x_395_, 1);
lean_inc(v_searcher_407_);
lean_dec_ref_known(v_x_395_, 2);
v_out_408_ = lean_ctor_get(v_x_396_, 1);
lean_inc(v_out_408_);
lean_dec_ref_known(v_x_396_, 2);
v_currPos_409_ = lean_ctor_get(v_it_405_, 0);
lean_inc(v_currPos_409_);
v_searcher_410_ = lean_ctor_get(v_it_405_, 1);
lean_inc(v_searcher_410_);
lean_dec_ref_known(v_it_405_, 2);
v___x_411_ = lean_apply_5(v_h__1_397_, v_currPos_406_, v_searcher_407_, v_currPos_409_, v_searcher_410_, v_out_408_);
return v___x_411_;
}
else
{
lean_object* v_currPos_412_; lean_object* v_searcher_413_; lean_object* v_out_414_; lean_object* v___x_415_; 
lean_dec(v_h__1_397_);
v_currPos_412_ = lean_ctor_get(v_x_395_, 0);
lean_inc(v_currPos_412_);
v_searcher_413_ = lean_ctor_get(v_x_395_, 1);
lean_inc(v_searcher_413_);
lean_dec_ref_known(v_x_395_, 2);
v_out_414_ = lean_ctor_get(v_x_396_, 1);
lean_inc(v_out_414_);
lean_dec_ref_known(v_x_396_, 2);
v___x_415_ = lean_apply_3(v_h__2_398_, v_currPos_412_, v_searcher_413_, v_out_414_);
return v___x_415_;
}
}
case 1:
{
lean_object* v_it_416_; 
lean_dec(v_h__5_401_);
lean_dec(v_h__2_398_);
lean_dec(v_h__1_397_);
v_it_416_ = lean_ctor_get(v_x_396_, 0);
lean_inc(v_it_416_);
lean_dec_ref_known(v_x_396_, 1);
if (lean_obj_tag(v_it_416_) == 0)
{
lean_object* v_currPos_417_; lean_object* v_searcher_418_; lean_object* v_currPos_419_; lean_object* v_searcher_420_; lean_object* v___x_421_; 
lean_dec(v_h__4_400_);
v_currPos_417_ = lean_ctor_get(v_x_395_, 0);
lean_inc(v_currPos_417_);
v_searcher_418_ = lean_ctor_get(v_x_395_, 1);
lean_inc(v_searcher_418_);
lean_dec_ref_known(v_x_395_, 2);
v_currPos_419_ = lean_ctor_get(v_it_416_, 0);
lean_inc(v_currPos_419_);
v_searcher_420_ = lean_ctor_get(v_it_416_, 1);
lean_inc(v_searcher_420_);
lean_dec_ref_known(v_it_416_, 2);
v___x_421_ = lean_apply_4(v_h__3_399_, v_currPos_417_, v_searcher_418_, v_currPos_419_, v_searcher_420_);
return v___x_421_;
}
else
{
lean_object* v_currPos_422_; lean_object* v_searcher_423_; lean_object* v___x_424_; 
lean_dec(v_h__3_399_);
v_currPos_422_ = lean_ctor_get(v_x_395_, 0);
lean_inc(v_currPos_422_);
v_searcher_423_ = lean_ctor_get(v_x_395_, 1);
lean_inc(v_searcher_423_);
lean_dec_ref_known(v_x_395_, 2);
v___x_424_ = lean_apply_2(v_h__4_400_, v_currPos_422_, v_searcher_423_);
return v___x_424_;
}
}
default: 
{
lean_object* v_currPos_425_; lean_object* v_searcher_426_; lean_object* v___x_427_; 
lean_dec(v_h__4_400_);
lean_dec(v_h__3_399_);
lean_dec(v_h__2_398_);
lean_dec(v_h__1_397_);
v_currPos_425_ = lean_ctor_get(v_x_395_, 0);
lean_inc(v_currPos_425_);
v_searcher_426_ = lean_ctor_get(v_x_395_, 1);
lean_inc(v_searcher_426_);
lean_dec_ref_known(v_x_395_, 2);
v___x_427_ = lean_apply_2(v_h__5_401_, v_currPos_425_, v_searcher_426_);
return v___x_427_;
}
}
}
else
{
lean_dec(v_h__5_401_);
lean_dec(v_h__4_400_);
lean_dec(v_h__3_399_);
lean_dec(v_h__2_398_);
lean_dec(v_h__1_397_);
switch(lean_obj_tag(v_x_396_))
{
case 0:
{
lean_object* v_it_428_; lean_object* v_out_429_; lean_object* v___x_430_; 
lean_dec(v_h__8_404_);
lean_dec(v_h__7_403_);
v_it_428_ = lean_ctor_get(v_x_396_, 0);
lean_inc(v_it_428_);
v_out_429_ = lean_ctor_get(v_x_396_, 1);
lean_inc(v_out_429_);
lean_dec_ref_known(v_x_396_, 2);
v___x_430_ = lean_apply_2(v_h__6_402_, v_it_428_, v_out_429_);
return v___x_430_;
}
case 1:
{
lean_object* v_it_431_; lean_object* v___x_432_; 
lean_dec(v_h__8_404_);
lean_dec(v_h__6_402_);
v_it_431_ = lean_ctor_get(v_x_396_, 0);
lean_inc(v_it_431_);
lean_dec_ref_known(v_x_396_, 1);
v___x_432_ = lean_apply_1(v_h__7_403_, v_it_431_);
return v___x_432_;
}
default: 
{
lean_object* v___x_433_; lean_object* v___x_434_; 
lean_dec(v_h__7_403_);
lean_dec(v_h__6_402_);
v___x_433_ = lean_box(0);
v___x_434_ = lean_apply_1(v_h__8_404_, v___x_433_);
return v___x_434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__1_splitter(lean_object* v_00_u03c1_435_, lean_object* v_00_u03c3_436_, lean_object* v_pat_437_, lean_object* v_inst_438_, lean_object* v_s_439_, lean_object* v_motive_440_, lean_object* v_x_441_, lean_object* v_x_442_, lean_object* v_h__1_443_, lean_object* v_h__2_444_, lean_object* v_h__3_445_, lean_object* v_h__4_446_, lean_object* v_h__5_447_, lean_object* v_h__6_448_, lean_object* v_h__7_449_, lean_object* v_h__8_450_){
_start:
{
if (lean_obj_tag(v_x_441_) == 0)
{
lean_dec(v_h__8_450_);
lean_dec(v_h__7_449_);
lean_dec(v_h__6_448_);
switch(lean_obj_tag(v_x_442_))
{
case 0:
{
lean_object* v_it_451_; 
lean_dec(v_h__5_447_);
lean_dec(v_h__4_446_);
lean_dec(v_h__3_445_);
v_it_451_ = lean_ctor_get(v_x_442_, 0);
if (lean_obj_tag(v_it_451_) == 0)
{
lean_object* v_currPos_452_; lean_object* v_searcher_453_; lean_object* v_out_454_; lean_object* v_currPos_455_; lean_object* v_searcher_456_; lean_object* v___x_457_; 
lean_inc_ref(v_it_451_);
lean_dec(v_h__2_444_);
v_currPos_452_ = lean_ctor_get(v_x_441_, 0);
lean_inc(v_currPos_452_);
v_searcher_453_ = lean_ctor_get(v_x_441_, 1);
lean_inc(v_searcher_453_);
lean_dec_ref_known(v_x_441_, 2);
v_out_454_ = lean_ctor_get(v_x_442_, 1);
lean_inc(v_out_454_);
lean_dec_ref_known(v_x_442_, 2);
v_currPos_455_ = lean_ctor_get(v_it_451_, 0);
lean_inc(v_currPos_455_);
v_searcher_456_ = lean_ctor_get(v_it_451_, 1);
lean_inc(v_searcher_456_);
lean_dec_ref_known(v_it_451_, 2);
v___x_457_ = lean_apply_5(v_h__1_443_, v_currPos_452_, v_searcher_453_, v_currPos_455_, v_searcher_456_, v_out_454_);
return v___x_457_;
}
else
{
lean_object* v_currPos_458_; lean_object* v_searcher_459_; lean_object* v_out_460_; lean_object* v___x_461_; 
lean_dec(v_h__1_443_);
v_currPos_458_ = lean_ctor_get(v_x_441_, 0);
lean_inc(v_currPos_458_);
v_searcher_459_ = lean_ctor_get(v_x_441_, 1);
lean_inc(v_searcher_459_);
lean_dec_ref_known(v_x_441_, 2);
v_out_460_ = lean_ctor_get(v_x_442_, 1);
lean_inc(v_out_460_);
lean_dec_ref_known(v_x_442_, 2);
v___x_461_ = lean_apply_3(v_h__2_444_, v_currPos_458_, v_searcher_459_, v_out_460_);
return v___x_461_;
}
}
case 1:
{
lean_object* v_it_462_; 
lean_dec(v_h__5_447_);
lean_dec(v_h__2_444_);
lean_dec(v_h__1_443_);
v_it_462_ = lean_ctor_get(v_x_442_, 0);
lean_inc(v_it_462_);
lean_dec_ref_known(v_x_442_, 1);
if (lean_obj_tag(v_it_462_) == 0)
{
lean_object* v_currPos_463_; lean_object* v_searcher_464_; lean_object* v_currPos_465_; lean_object* v_searcher_466_; lean_object* v___x_467_; 
lean_dec(v_h__4_446_);
v_currPos_463_ = lean_ctor_get(v_x_441_, 0);
lean_inc(v_currPos_463_);
v_searcher_464_ = lean_ctor_get(v_x_441_, 1);
lean_inc(v_searcher_464_);
lean_dec_ref_known(v_x_441_, 2);
v_currPos_465_ = lean_ctor_get(v_it_462_, 0);
lean_inc(v_currPos_465_);
v_searcher_466_ = lean_ctor_get(v_it_462_, 1);
lean_inc(v_searcher_466_);
lean_dec_ref_known(v_it_462_, 2);
v___x_467_ = lean_apply_4(v_h__3_445_, v_currPos_463_, v_searcher_464_, v_currPos_465_, v_searcher_466_);
return v___x_467_;
}
else
{
lean_object* v_currPos_468_; lean_object* v_searcher_469_; lean_object* v___x_470_; 
lean_dec(v_h__3_445_);
v_currPos_468_ = lean_ctor_get(v_x_441_, 0);
lean_inc(v_currPos_468_);
v_searcher_469_ = lean_ctor_get(v_x_441_, 1);
lean_inc(v_searcher_469_);
lean_dec_ref_known(v_x_441_, 2);
v___x_470_ = lean_apply_2(v_h__4_446_, v_currPos_468_, v_searcher_469_);
return v___x_470_;
}
}
default: 
{
lean_object* v_currPos_471_; lean_object* v_searcher_472_; lean_object* v___x_473_; 
lean_dec(v_h__4_446_);
lean_dec(v_h__3_445_);
lean_dec(v_h__2_444_);
lean_dec(v_h__1_443_);
v_currPos_471_ = lean_ctor_get(v_x_441_, 0);
lean_inc(v_currPos_471_);
v_searcher_472_ = lean_ctor_get(v_x_441_, 1);
lean_inc(v_searcher_472_);
lean_dec_ref_known(v_x_441_, 2);
v___x_473_ = lean_apply_2(v_h__5_447_, v_currPos_471_, v_searcher_472_);
return v___x_473_;
}
}
}
else
{
lean_dec(v_h__5_447_);
lean_dec(v_h__4_446_);
lean_dec(v_h__3_445_);
lean_dec(v_h__2_444_);
lean_dec(v_h__1_443_);
switch(lean_obj_tag(v_x_442_))
{
case 0:
{
lean_object* v_it_474_; lean_object* v_out_475_; lean_object* v___x_476_; 
lean_dec(v_h__8_450_);
lean_dec(v_h__7_449_);
v_it_474_ = lean_ctor_get(v_x_442_, 0);
lean_inc(v_it_474_);
v_out_475_ = lean_ctor_get(v_x_442_, 1);
lean_inc(v_out_475_);
lean_dec_ref_known(v_x_442_, 2);
v___x_476_ = lean_apply_2(v_h__6_448_, v_it_474_, v_out_475_);
return v___x_476_;
}
case 1:
{
lean_object* v_it_477_; lean_object* v___x_478_; 
lean_dec(v_h__8_450_);
lean_dec(v_h__6_448_);
v_it_477_ = lean_ctor_get(v_x_442_, 0);
lean_inc(v_it_477_);
lean_dec_ref_known(v_x_442_, 1);
v___x_478_ = lean_apply_1(v_h__7_449_, v_it_477_);
return v___x_478_;
}
default: 
{
lean_object* v___x_479_; lean_object* v___x_480_; 
lean_dec(v_h__7_449_);
lean_dec(v_h__6_448_);
v___x_479_ = lean_box(0);
v___x_480_ = lean_apply_1(v_h__8_450_, v___x_479_);
return v___x_480_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__1_splitter___boxed(lean_object* v_00_u03c1_481_, lean_object* v_00_u03c3_482_, lean_object* v_pat_483_, lean_object* v_inst_484_, lean_object* v_s_485_, lean_object* v_motive_486_, lean_object* v_x_487_, lean_object* v_x_488_, lean_object* v_h__1_489_, lean_object* v_h__2_490_, lean_object* v_h__3_491_, lean_object* v_h__4_492_, lean_object* v_h__5_493_, lean_object* v_h__6_494_, lean_object* v_h__7_495_, lean_object* v_h__8_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_instIteratorIdSubslice_match__1_splitter(v_00_u03c1_481_, v_00_u03c3_482_, v_pat_483_, v_inst_484_, v_s_485_, v_motive_486_, v_x_487_, v_x_488_, v_h__1_489_, v_h__2_490_, v_h__3_491_, v_h__4_492_, v_h__5_493_, v_h__6_494_, v_h__7_495_, v_h__8_496_);
lean_dec_ref(v_s_485_);
lean_dec(v_inst_484_);
lean_dec(v_pat_483_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_finitenessRelation___redArg(){
_start:
{
lean_object* v___x_499_; 
v___x_499_ = lean_box(0);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_finitenessRelation___redArg___boxed(lean_object* v___dummy_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_finitenessRelation___redArg();
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_finitenessRelation(lean_object* v_00_u03c1_502_, lean_object* v_00_u03c3_503_, lean_object* v_inst_504_, lean_object* v_pat_505_, lean_object* v_inst_506_, lean_object* v_s_507_, lean_object* v_inst_508_){
_start:
{
lean_object* v___x_509_; 
v___x_509_ = lean_box(0);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_finitenessRelation___boxed(lean_object* v_00_u03c1_510_, lean_object* v_00_u03c3_511_, lean_object* v_inst_512_, lean_object* v_pat_513_, lean_object* v_inst_514_, lean_object* v_s_515_, lean_object* v_inst_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l___private_Init_Data_String_Slice_0__String_Slice_SplitIterator_finitenessRelation(v_00_u03c1_510_, v_00_u03c3_511_, v_inst_512_, v_pat_513_, v_inst_514_, v_s_515_, v_inst_516_);
lean_dec_ref(v_s_515_);
lean_dec(v_inst_514_);
lean_dec(v_pat_513_);
lean_dec(v_inst_512_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___redArg___lam__0(lean_object* v_toPure_518_, lean_object* v_recur_519_, lean_object* v_it_520_, lean_object* v_____do__lift_521_){
_start:
{
if (lean_obj_tag(v_____do__lift_521_) == 0)
{
lean_object* v_a_522_; lean_object* v___x_523_; 
lean_dec(v_it_520_);
lean_dec(v_recur_519_);
v_a_522_ = lean_ctor_get(v_____do__lift_521_, 0);
lean_inc(v_a_522_);
lean_dec_ref_known(v_____do__lift_521_, 1);
v___x_523_ = lean_apply_2(v_toPure_518_, lean_box(0), v_a_522_);
return v___x_523_;
}
else
{
lean_object* v_a_524_; lean_object* v___x_525_; 
lean_dec(v_toPure_518_);
v_a_524_ = lean_ctor_get(v_____do__lift_521_, 0);
lean_inc(v_a_524_);
lean_dec_ref_known(v_____do__lift_521_, 1);
v___x_525_ = lean_apply_4(v_recur_519_, v_it_520_, v_a_524_, lean_box(0), lean_box(0));
return v___x_525_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___redArg___lam__1(lean_object* v_toPure_526_, lean_object* v_recur_527_, lean_object* v___y_528_, lean_object* v_acc_529_, lean_object* v_toBind_530_, lean_object* v_s_531_){
_start:
{
switch(lean_obj_tag(v_s_531_))
{
case 0:
{
lean_object* v_it_532_; lean_object* v_out_533_; lean_object* v___f_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v_it_532_ = lean_ctor_get(v_s_531_, 0);
lean_inc(v_it_532_);
v_out_533_ = lean_ctor_get(v_s_531_, 1);
lean_inc(v_out_533_);
lean_dec_ref_known(v_s_531_, 2);
v___f_534_ = lean_alloc_closure((void*)(l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___redArg___lam__0), 4, 3);
lean_closure_set(v___f_534_, 0, v_toPure_526_);
lean_closure_set(v___f_534_, 1, v_recur_527_);
lean_closure_set(v___f_534_, 2, v_it_532_);
v___x_535_ = lean_apply_3(v___y_528_, v_out_533_, lean_box(0), v_acc_529_);
v___x_536_ = lean_apply_4(v_toBind_530_, lean_box(0), lean_box(0), v___x_535_, v___f_534_);
return v___x_536_;
}
case 1:
{
lean_object* v_it_537_; lean_object* v___x_538_; 
lean_dec(v_toBind_530_);
lean_dec(v___y_528_);
lean_dec(v_toPure_526_);
v_it_537_ = lean_ctor_get(v_s_531_, 0);
lean_inc(v_it_537_);
lean_dec_ref_known(v_s_531_, 1);
v___x_538_ = lean_apply_4(v_recur_527_, v_it_537_, v_acc_529_, lean_box(0), lean_box(0));
return v___x_538_;
}
default: 
{
lean_object* v___x_539_; 
lean_dec(v_toBind_530_);
lean_dec(v___y_528_);
lean_dec(v_recur_527_);
v___x_539_ = lean_apply_2(v_toPure_526_, lean_box(0), v_acc_529_);
return v___x_539_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___redArg___lam__2(lean_object* v_toPure_540_, lean_object* v___y_541_, lean_object* v_toBind_542_, lean_object* v_inst_543_, lean_object* v_s_544_, lean_object* v_lift_545_, lean_object* v_it_546_, lean_object* v_acc_547_, lean_object* v_hP_548_, lean_object* v_recur_549_){
_start:
{
lean_object* v___f_550_; 
v___f_550_ = lean_alloc_closure((void*)(l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___redArg___lam__1), 6, 5);
lean_closure_set(v___f_550_, 0, v_toPure_540_);
lean_closure_set(v___f_550_, 1, v_recur_549_);
lean_closure_set(v___f_550_, 2, v___y_541_);
lean_closure_set(v___f_550_, 3, v_acc_547_);
lean_closure_set(v___f_550_, 4, v_toBind_542_);
if (lean_obj_tag(v_it_546_) == 0)
{
lean_object* v_currPos_551_; lean_object* v_searcher_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_599_; 
v_currPos_551_ = lean_ctor_get(v_it_546_, 0);
v_searcher_552_ = lean_ctor_get(v_it_546_, 1);
v_isSharedCheck_599_ = !lean_is_exclusive(v_it_546_);
if (v_isSharedCheck_599_ == 0)
{
v___x_554_ = v_it_546_;
v_isShared_555_ = v_isSharedCheck_599_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_searcher_552_);
lean_inc(v_currPos_551_);
lean_dec(v_it_546_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_599_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_556_; 
lean_inc_ref(v_s_544_);
v___x_556_ = lean_apply_2(v_inst_543_, v_s_544_, v_searcher_552_);
switch(lean_obj_tag(v___x_556_))
{
case 0:
{
lean_object* v_out_557_; 
v_out_557_ = lean_ctor_get(v___x_556_, 1);
lean_inc(v_out_557_);
if (lean_obj_tag(v_out_557_) == 0)
{
lean_object* v_it_558_; lean_object* v___x_560_; 
lean_dec_ref_known(v_out_557_, 2);
lean_dec_ref(v_s_544_);
v_it_558_ = lean_ctor_get(v___x_556_, 0);
lean_inc(v_it_558_);
lean_dec_ref_known(v___x_556_, 2);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 1, v_it_558_);
v___x_560_ = v___x_554_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_currPos_551_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_it_558_);
v___x_560_ = v_reuseFailAlloc_563_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
v___x_562_ = lean_apply_4(v_lift_545_, lean_box(0), lean_box(0), v___f_550_, v___x_561_);
return v___x_562_;
}
}
else
{
lean_object* v_it_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_578_; 
v_it_564_ = lean_ctor_get(v___x_556_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_578_ == 0)
{
lean_object* v_unused_579_; 
v_unused_579_ = lean_ctor_get(v___x_556_, 1);
lean_dec(v_unused_579_);
v___x_566_ = v___x_556_;
v_isShared_567_ = v_isSharedCheck_578_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_it_564_);
lean_dec(v___x_556_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_578_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v_startPos_568_; lean_object* v_endPos_569_; lean_object* v_slice_570_; lean_object* v_nextIt_572_; 
v_startPos_568_ = lean_ctor_get(v_out_557_, 0);
lean_inc(v_startPos_568_);
v_endPos_569_ = lean_ctor_get(v_out_557_, 1);
lean_inc(v_endPos_569_);
lean_dec_ref_known(v_out_557_, 2);
v_slice_570_ = l_String_Slice_subslice_x21(v_s_544_, v_currPos_551_, v_startPos_568_);
lean_dec_ref(v_s_544_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 1, v_it_564_);
lean_ctor_set(v___x_554_, 0, v_endPos_569_);
v_nextIt_572_ = v___x_554_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_endPos_569_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v_it_564_);
v_nextIt_572_ = v_reuseFailAlloc_577_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
lean_object* v___x_574_; 
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 1, v_slice_570_);
lean_ctor_set(v___x_566_, 0, v_nextIt_572_);
v___x_574_ = v___x_566_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_nextIt_572_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v_slice_570_);
v___x_574_ = v_reuseFailAlloc_576_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_575_; 
v___x_575_ = lean_apply_4(v_lift_545_, lean_box(0), lean_box(0), v___f_550_, v___x_574_);
return v___x_575_;
}
}
}
}
}
case 1:
{
lean_object* v_it_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_591_; 
lean_dec_ref(v_s_544_);
v_it_580_ = lean_ctor_get(v___x_556_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_591_ == 0)
{
v___x_582_ = v___x_556_;
v_isShared_583_ = v_isSharedCheck_591_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_it_580_);
lean_dec(v___x_556_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_591_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_585_; 
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 1, v_it_580_);
v___x_585_ = v___x_554_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_currPos_551_);
lean_ctor_set(v_reuseFailAlloc_590_, 1, v_it_580_);
v___x_585_ = v_reuseFailAlloc_590_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
lean_object* v___x_587_; 
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 0, v___x_585_);
v___x_587_ = v___x_582_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v___x_585_);
v___x_587_ = v_reuseFailAlloc_589_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_588_; 
v___x_588_ = lean_apply_4(v_lift_545_, lean_box(0), lean_box(0), v___f_550_, v___x_587_);
return v___x_588_;
}
}
}
}
default: 
{
lean_object* v_startInclusive_592_; lean_object* v_endExclusive_593_; lean_object* v___x_594_; lean_object* v_slice_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
lean_del_object(v___x_554_);
v_startInclusive_592_ = lean_ctor_get(v_s_544_, 1);
lean_inc(v_startInclusive_592_);
v_endExclusive_593_ = lean_ctor_get(v_s_544_, 2);
lean_inc(v_endExclusive_593_);
lean_dec_ref(v_s_544_);
v___x_594_ = lean_nat_sub(v_endExclusive_593_, v_startInclusive_592_);
lean_dec(v_startInclusive_592_);
lean_dec(v_endExclusive_593_);
v_slice_595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_slice_595_, 0, v_currPos_551_);
lean_ctor_set(v_slice_595_, 1, v___x_594_);
v___x_596_ = lean_box(1);
v___x_597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_596_);
lean_ctor_set(v___x_597_, 1, v_slice_595_);
v___x_598_ = lean_apply_4(v_lift_545_, lean_box(0), lean_box(0), v___f_550_, v___x_597_);
return v___x_598_;
}
}
}
}
else
{
lean_object* v___x_600_; lean_object* v___x_601_; 
lean_dec_ref(v_s_544_);
lean_dec(v_inst_543_);
v___x_600_ = lean_box(2);
v___x_601_ = lean_apply_4(v_lift_545_, lean_box(0), lean_box(0), v___f_550_, v___x_600_);
return v___x_601_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___redArg___lam__3(lean_object* v_inst_602_, lean_object* v_inst_603_, lean_object* v_s_604_, lean_object* v_lift_605_, lean_object* v_00_u03b3_606_, lean_object* v_Pl_607_, lean_object* v_it_608_, lean_object* v_init_609_, lean_object* v___y_610_){
_start:
{
lean_object* v_toApplicative_611_; lean_object* v_toBind_612_; lean_object* v_toPure_613_; lean_object* v___f_614_; lean_object* v___x_615_; 
v_toApplicative_611_ = lean_ctor_get(v_inst_602_, 0);
lean_inc_ref(v_toApplicative_611_);
v_toBind_612_ = lean_ctor_get(v_inst_602_, 1);
lean_inc(v_toBind_612_);
lean_dec_ref(v_inst_602_);
v_toPure_613_ = lean_ctor_get(v_toApplicative_611_, 1);
lean_inc(v_toPure_613_);
lean_dec_ref(v_toApplicative_611_);
v___f_614_ = lean_alloc_closure((void*)(l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___redArg___lam__2), 10, 6);
lean_closure_set(v___f_614_, 0, v_toPure_613_);
lean_closure_set(v___f_614_, 1, v___y_610_);
lean_closure_set(v___f_614_, 2, v_toBind_612_);
lean_closure_set(v___f_614_, 3, v_inst_603_);
lean_closure_set(v___f_614_, 4, v_s_604_);
lean_closure_set(v___f_614_, 5, v_lift_605_);
v___x_615_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_614_, v_it_608_, v_init_609_, lean_box(0));
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___redArg(lean_object* v_inst_616_, lean_object* v_s_617_, lean_object* v_inst_618_){
_start:
{
lean_object* v___f_619_; 
v___f_619_ = lean_alloc_closure((void*)(l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___redArg___lam__3), 9, 3);
lean_closure_set(v___f_619_, 0, v_inst_618_);
lean_closure_set(v___f_619_, 1, v_inst_616_);
lean_closure_set(v___f_619_, 2, v_s_617_);
return v___f_619_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad(lean_object* v_00_u03c1_620_, lean_object* v_00_u03c3_621_, lean_object* v_inst_622_, lean_object* v_pat_623_, lean_object* v_inst_624_, lean_object* v_n_625_, lean_object* v_s_626_, lean_object* v_inst_627_){
_start:
{
lean_object* v___f_628_; 
v___f_628_ = lean_alloc_closure((void*)(l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___redArg___lam__3), 9, 3);
lean_closure_set(v___f_628_, 0, v_inst_627_);
lean_closure_set(v___f_628_, 1, v_inst_622_);
lean_closure_set(v___f_628_, 2, v_s_626_);
return v___f_628_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad___boxed(lean_object* v_00_u03c1_629_, lean_object* v_00_u03c3_630_, lean_object* v_inst_631_, lean_object* v_pat_632_, lean_object* v_inst_633_, lean_object* v_n_634_, lean_object* v_s_635_, lean_object* v_inst_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l_String_Slice_SplitIterator_instIteratorLoopIdSubsliceOfMonad(v_00_u03c1_629_, v_00_u03c3_630_, v_inst_631_, v_pat_632_, v_inst_633_, v_n_634_, v_s_635_, v_inst_636_);
lean_dec(v_inst_633_);
lean_dec(v_pat_632_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___redArg(lean_object* v_s_638_, lean_object* v_inst_639_){
_start:
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_640_ = lean_unsigned_to_nat(0u);
v___x_641_ = lean_apply_1(v_inst_639_, v_s_638_);
v___x_642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_640_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice(lean_object* v_00_u03c1_643_, lean_object* v_00_u03c3_644_, lean_object* v_s_645_, lean_object* v_pat_646_, lean_object* v_inst_647_){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = l_String_Slice_splitToSubslice___redArg(v_s_645_, v_inst_647_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___boxed(lean_object* v_00_u03c1_649_, lean_object* v_00_u03c3_650_, lean_object* v_s_651_, lean_object* v_pat_652_, lean_object* v_inst_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_String_Slice_splitToSubslice(v_00_u03c1_649_, v_00_u03c3_650_, v_s_651_, v_pat_652_, v_inst_653_);
lean_dec(v_pat_652_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_split___redArg(lean_object* v_s_655_, lean_object* v_inst_656_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = l_String_Slice_splitToSubslice___redArg(v_s_655_, v_inst_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_split(lean_object* v_00_u03c1_658_, lean_object* v_00_u03c3_659_, lean_object* v_inst_660_, lean_object* v_s_661_, lean_object* v_pat_662_, lean_object* v_inst_663_){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = l_String_Slice_splitToSubslice___redArg(v_s_661_, v_inst_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_split___boxed(lean_object* v_00_u03c1_665_, lean_object* v_00_u03c3_666_, lean_object* v_inst_667_, lean_object* v_s_668_, lean_object* v_pat_669_, lean_object* v_inst_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l_String_Slice_split(v_00_u03c1_665_, v_00_u03c3_666_, v_inst_667_, v_s_668_, v_pat_669_, v_inst_670_);
lean_dec(v_pat_669_);
lean_dec(v_inst_667_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_ctorIdx___impl___redArg(lean_object* v_x_672_){
_start:
{
lean_object* v___x_673_; 
v___x_673_ = lean_obj_tag_nat(v_x_672_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_ctorIdx___impl___redArg___boxed(lean_object* v_x_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l_String_Slice_SplitInclusiveIterator_ctorIdx___impl___redArg(v_x_674_);
lean_dec(v_x_674_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_ctorIdx___impl(lean_object* v_00_u03c3_676_, lean_object* v_00_u03c1_677_, lean_object* v_pat_678_, lean_object* v_s_679_, lean_object* v_inst_680_, lean_object* v_x_681_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = lean_obj_tag_nat(v_x_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_ctorIdx___impl___boxed(lean_object* v_00_u03c3_683_, lean_object* v_00_u03c1_684_, lean_object* v_pat_685_, lean_object* v_s_686_, lean_object* v_inst_687_, lean_object* v_x_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_String_Slice_SplitInclusiveIterator_ctorIdx___impl(v_00_u03c3_683_, v_00_u03c1_684_, v_pat_685_, v_s_686_, v_inst_687_, v_x_688_);
lean_dec(v_x_688_);
lean_dec(v_inst_687_);
lean_dec_ref(v_s_686_);
lean_dec(v_pat_685_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_ctorElim___redArg(lean_object* v_t_690_, lean_object* v_k_691_){
_start:
{
if (lean_obj_tag(v_t_690_) == 0)
{
lean_object* v_currPos_692_; lean_object* v_searcher_693_; lean_object* v___x_694_; 
v_currPos_692_ = lean_ctor_get(v_t_690_, 0);
lean_inc(v_currPos_692_);
v_searcher_693_ = lean_ctor_get(v_t_690_, 1);
lean_inc(v_searcher_693_);
lean_dec_ref_known(v_t_690_, 2);
v___x_694_ = lean_apply_2(v_k_691_, v_currPos_692_, v_searcher_693_);
return v___x_694_;
}
else
{
return v_k_691_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_ctorElim(lean_object* v_00_u03c3_695_, lean_object* v_00_u03c1_696_, lean_object* v_pat_697_, lean_object* v_s_698_, lean_object* v_inst_699_, lean_object* v_motive_700_, lean_object* v_ctorIdx_701_, lean_object* v_t_702_, lean_object* v_h_703_, lean_object* v_k_704_){
_start:
{
lean_object* v___x_705_; 
v___x_705_ = l_String_Slice_SplitInclusiveIterator_ctorElim___redArg(v_t_702_, v_k_704_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_ctorElim___boxed(lean_object* v_00_u03c3_706_, lean_object* v_00_u03c1_707_, lean_object* v_pat_708_, lean_object* v_s_709_, lean_object* v_inst_710_, lean_object* v_motive_711_, lean_object* v_ctorIdx_712_, lean_object* v_t_713_, lean_object* v_h_714_, lean_object* v_k_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_String_Slice_SplitInclusiveIterator_ctorElim(v_00_u03c3_706_, v_00_u03c1_707_, v_pat_708_, v_s_709_, v_inst_710_, v_motive_711_, v_ctorIdx_712_, v_t_713_, v_h_714_, v_k_715_);
lean_dec(v_ctorIdx_712_);
lean_dec(v_inst_710_);
lean_dec_ref(v_s_709_);
lean_dec(v_pat_708_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_operating_elim___redArg(lean_object* v_t_717_, lean_object* v_operating_718_){
_start:
{
lean_object* v___x_719_; 
v___x_719_ = l_String_Slice_SplitInclusiveIterator_ctorElim___redArg(v_t_717_, v_operating_718_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_operating_elim(lean_object* v_00_u03c3_720_, lean_object* v_00_u03c1_721_, lean_object* v_pat_722_, lean_object* v_s_723_, lean_object* v_inst_724_, lean_object* v_motive_725_, lean_object* v_t_726_, lean_object* v_h_727_, lean_object* v_operating_728_){
_start:
{
lean_object* v___x_729_; 
v___x_729_ = l_String_Slice_SplitInclusiveIterator_ctorElim___redArg(v_t_726_, v_operating_728_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_operating_elim___boxed(lean_object* v_00_u03c3_730_, lean_object* v_00_u03c1_731_, lean_object* v_pat_732_, lean_object* v_s_733_, lean_object* v_inst_734_, lean_object* v_motive_735_, lean_object* v_t_736_, lean_object* v_h_737_, lean_object* v_operating_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_String_Slice_SplitInclusiveIterator_operating_elim(v_00_u03c3_730_, v_00_u03c1_731_, v_pat_732_, v_s_733_, v_inst_734_, v_motive_735_, v_t_736_, v_h_737_, v_operating_738_);
lean_dec(v_inst_734_);
lean_dec_ref(v_s_733_);
lean_dec(v_pat_732_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_atEnd_elim___redArg(lean_object* v_t_740_, lean_object* v_atEnd_741_){
_start:
{
lean_object* v___x_742_; 
v___x_742_ = l_String_Slice_SplitInclusiveIterator_ctorElim___redArg(v_t_740_, v_atEnd_741_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_atEnd_elim(lean_object* v_00_u03c3_743_, lean_object* v_00_u03c1_744_, lean_object* v_pat_745_, lean_object* v_s_746_, lean_object* v_inst_747_, lean_object* v_motive_748_, lean_object* v_t_749_, lean_object* v_h_750_, lean_object* v_atEnd_751_){
_start:
{
lean_object* v___x_752_; 
v___x_752_ = l_String_Slice_SplitInclusiveIterator_ctorElim___redArg(v_t_749_, v_atEnd_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_atEnd_elim___boxed(lean_object* v_00_u03c3_753_, lean_object* v_00_u03c1_754_, lean_object* v_pat_755_, lean_object* v_s_756_, lean_object* v_inst_757_, lean_object* v_motive_758_, lean_object* v_t_759_, lean_object* v_h_760_, lean_object* v_atEnd_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l_String_Slice_SplitInclusiveIterator_atEnd_elim(v_00_u03c3_753_, v_00_u03c1_754_, v_pat_755_, v_s_756_, v_inst_757_, v_motive_758_, v_t_759_, v_h_760_, v_atEnd_761_);
lean_dec(v_inst_757_);
lean_dec_ref(v_s_756_);
lean_dec(v_pat_755_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitInclusiveIterator_default___redArg(){
_start:
{
lean_object* v___x_764_; 
v___x_764_ = lean_box(1);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitInclusiveIterator_default___redArg___boxed(lean_object* v___dummy_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_String_Slice_instInhabitedSplitInclusiveIterator_default___redArg();
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitInclusiveIterator_default(lean_object* v_00_u03c3_767_, lean_object* v_00_u03c1_768_, lean_object* v_pat_769_, lean_object* v_s_770_, lean_object* v_inst_771_){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = lean_box(1);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitInclusiveIterator_default___boxed(lean_object* v_00_u03c3_773_, lean_object* v_00_u03c1_774_, lean_object* v_pat_775_, lean_object* v_s_776_, lean_object* v_inst_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l_String_Slice_instInhabitedSplitInclusiveIterator_default(v_00_u03c3_773_, v_00_u03c1_774_, v_pat_775_, v_s_776_, v_inst_777_);
lean_dec(v_inst_777_);
lean_dec_ref(v_s_776_);
lean_dec(v_pat_775_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitInclusiveIterator___redArg(){
_start:
{
lean_object* v___x_780_; 
v___x_780_ = lean_box(1);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitInclusiveIterator___redArg___boxed(lean_object* v___dummy_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_String_Slice_instInhabitedSplitInclusiveIterator___redArg();
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitInclusiveIterator(lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_){
_start:
{
lean_object* v___x_788_; 
v___x_788_ = lean_box(1);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedSplitInclusiveIterator___boxed(lean_object* v_a_789_, lean_object* v_a_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = l_String_Slice_instInhabitedSplitInclusiveIterator(v_a_789_, v_a_790_, v_a_791_, v_a_792_, v_a_793_);
lean_dec(v_a_793_);
lean_dec_ref(v_a_792_);
lean_dec(v_a_791_);
return v_res_794_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorId___redArg___lam__0(lean_object* v_inst_795_, lean_object* v_s_796_, lean_object* v_x_797_){
_start:
{
if (lean_obj_tag(v_x_797_) == 0)
{
lean_object* v_currPos_798_; lean_object* v_searcher_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_851_; 
v_currPos_798_ = lean_ctor_get(v_x_797_, 0);
v_searcher_799_ = lean_ctor_get(v_x_797_, 1);
v_isSharedCheck_851_ = !lean_is_exclusive(v_x_797_);
if (v_isSharedCheck_851_ == 0)
{
v___x_801_ = v_x_797_;
v_isShared_802_ = v_isSharedCheck_851_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_searcher_799_);
lean_inc(v_currPos_798_);
lean_dec(v_x_797_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_851_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_803_; 
lean_inc_ref(v_s_796_);
v___x_803_ = lean_apply_2(v_inst_795_, v_s_796_, v_searcher_799_);
switch(lean_obj_tag(v___x_803_))
{
case 0:
{
lean_object* v_out_804_; 
v_out_804_ = lean_ctor_get(v___x_803_, 1);
lean_inc(v_out_804_);
if (lean_obj_tag(v_out_804_) == 0)
{
lean_object* v_it_805_; lean_object* v___x_807_; 
lean_dec_ref_known(v_out_804_, 2);
lean_dec_ref(v_s_796_);
v_it_805_ = lean_ctor_get(v___x_803_, 0);
lean_inc(v_it_805_);
lean_dec_ref_known(v___x_803_, 2);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 1, v_it_805_);
v___x_807_ = v___x_801_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_currPos_798_);
lean_ctor_set(v_reuseFailAlloc_809_, 1, v_it_805_);
v___x_807_ = v_reuseFailAlloc_809_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
lean_object* v___x_808_; 
v___x_808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
return v___x_808_;
}
}
else
{
lean_object* v_it_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_822_; 
v_it_810_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_822_ == 0)
{
lean_object* v_unused_823_; 
v_unused_823_ = lean_ctor_get(v___x_803_, 1);
lean_dec(v_unused_823_);
v___x_812_ = v___x_803_;
v_isShared_813_ = v_isSharedCheck_822_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_it_810_);
lean_dec(v___x_803_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_822_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v_endPos_814_; lean_object* v_slice_815_; lean_object* v_nextIt_817_; 
v_endPos_814_ = lean_ctor_get(v_out_804_, 1);
lean_inc(v_endPos_814_);
lean_dec_ref_known(v_out_804_, 2);
v_slice_815_ = l_String_Slice_slice_x21(v_s_796_, v_currPos_798_, v_endPos_814_);
lean_dec(v_currPos_798_);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 1, v_it_810_);
lean_ctor_set(v___x_801_, 0, v_endPos_814_);
v_nextIt_817_ = v___x_801_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_endPos_814_);
lean_ctor_set(v_reuseFailAlloc_821_, 1, v_it_810_);
v_nextIt_817_ = v_reuseFailAlloc_821_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
lean_object* v___x_819_; 
if (v_isShared_813_ == 0)
{
lean_ctor_set(v___x_812_, 1, v_slice_815_);
lean_ctor_set(v___x_812_, 0, v_nextIt_817_);
v___x_819_ = v___x_812_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_nextIt_817_);
lean_ctor_set(v_reuseFailAlloc_820_, 1, v_slice_815_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
}
case 1:
{
lean_object* v_it_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_834_; 
lean_dec_ref(v_s_796_);
v_it_824_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_834_ == 0)
{
v___x_826_ = v___x_803_;
v_isShared_827_ = v_isSharedCheck_834_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_it_824_);
lean_dec(v___x_803_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_834_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 1, v_it_824_);
v___x_829_ = v___x_801_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_currPos_798_);
lean_ctor_set(v_reuseFailAlloc_833_, 1, v_it_824_);
v___x_829_ = v_reuseFailAlloc_833_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
lean_object* v___x_831_; 
if (v_isShared_827_ == 0)
{
lean_ctor_set(v___x_826_, 0, v___x_829_);
v___x_831_ = v___x_826_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_829_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
}
default: 
{
lean_object* v_str_835_; lean_object* v_startInclusive_836_; lean_object* v_endExclusive_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_850_; 
lean_del_object(v___x_801_);
v_str_835_ = lean_ctor_get(v_s_796_, 0);
v_startInclusive_836_ = lean_ctor_get(v_s_796_, 1);
v_endExclusive_837_ = lean_ctor_get(v_s_796_, 2);
v_isSharedCheck_850_ = !lean_is_exclusive(v_s_796_);
if (v_isSharedCheck_850_ == 0)
{
v___x_839_ = v_s_796_;
v_isShared_840_ = v_isSharedCheck_850_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_endExclusive_837_);
lean_inc(v_startInclusive_836_);
lean_inc(v_str_835_);
lean_dec(v_s_796_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_850_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_841_; uint8_t v_decide_842_; 
v___x_841_ = lean_nat_sub(v_endExclusive_837_, v_startInclusive_836_);
v_decide_842_ = lean_nat_dec_eq(v_currPos_798_, v___x_841_);
lean_dec(v___x_841_);
if (v_decide_842_ == 0)
{
lean_object* v___x_843_; lean_object* v_slice_845_; 
v___x_843_ = lean_nat_add(v_startInclusive_836_, v_currPos_798_);
lean_dec(v_currPos_798_);
lean_dec(v_startInclusive_836_);
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 1, v___x_843_);
v_slice_845_ = v___x_839_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_str_835_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v___x_843_);
lean_ctor_set(v_reuseFailAlloc_848_, 2, v_endExclusive_837_);
v_slice_845_ = v_reuseFailAlloc_848_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_846_ = lean_box(1);
v___x_847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_847_, 0, v___x_846_);
lean_ctor_set(v___x_847_, 1, v_slice_845_);
return v___x_847_;
}
}
else
{
lean_object* v___x_849_; 
lean_del_object(v___x_839_);
lean_dec(v_endExclusive_837_);
lean_dec(v_startInclusive_836_);
lean_dec_ref(v_str_835_);
lean_dec(v_currPos_798_);
v___x_849_ = lean_box(2);
return v___x_849_;
}
}
}
}
}
}
else
{
lean_object* v___x_852_; 
lean_dec_ref(v_s_796_);
lean_dec(v_inst_795_);
v___x_852_ = lean_box(2);
return v___x_852_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorId___redArg(lean_object* v_inst_853_, lean_object* v_s_854_){
_start:
{
lean_object* v___f_855_; 
v___f_855_ = lean_alloc_closure((void*)(l_String_Slice_SplitInclusiveIterator_instIteratorId___redArg___lam__0), 3, 2);
lean_closure_set(v___f_855_, 0, v_inst_853_);
lean_closure_set(v___f_855_, 1, v_s_854_);
return v___f_855_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorId(lean_object* v_00_u03c1_856_, lean_object* v_00_u03c3_857_, lean_object* v_inst_858_, lean_object* v_pat_859_, lean_object* v_inst_860_, lean_object* v_s_861_){
_start:
{
lean_object* v___f_862_; 
v___f_862_ = lean_alloc_closure((void*)(l_String_Slice_SplitInclusiveIterator_instIteratorId___redArg___lam__0), 3, 2);
lean_closure_set(v___f_862_, 0, v_inst_858_);
lean_closure_set(v___f_862_, 1, v_s_861_);
return v___f_862_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorId___boxed(lean_object* v_00_u03c1_863_, lean_object* v_00_u03c3_864_, lean_object* v_inst_865_, lean_object* v_pat_866_, lean_object* v_inst_867_, lean_object* v_s_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_String_Slice_SplitInclusiveIterator_instIteratorId(v_00_u03c1_863_, v_00_u03c3_864_, v_inst_865_, v_pat_866_, v_inst_867_, v_s_868_);
lean_dec(v_inst_867_);
lean_dec(v_pat_866_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_toOption___redArg(lean_object* v_x_870_){
_start:
{
if (lean_obj_tag(v_x_870_) == 0)
{
lean_object* v_searcher_871_; lean_object* v___x_872_; 
v_searcher_871_ = lean_ctor_get(v_x_870_, 1);
lean_inc(v_searcher_871_);
v___x_872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_872_, 0, v_searcher_871_);
return v___x_872_;
}
else
{
lean_object* v___x_873_; 
v___x_873_ = lean_box(0);
return v___x_873_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_toOption___redArg___boxed(lean_object* v_x_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_toOption___redArg(v_x_874_);
lean_dec(v_x_874_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_toOption(lean_object* v_00_u03c1_876_, lean_object* v_00_u03c3_877_, lean_object* v_pat_878_, lean_object* v_inst_879_, lean_object* v_s_880_, lean_object* v_x_881_){
_start:
{
lean_object* v___x_882_; 
v___x_882_ = l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_toOption___redArg(v_x_881_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_toOption___boxed(lean_object* v_00_u03c1_883_, lean_object* v_00_u03c3_884_, lean_object* v_pat_885_, lean_object* v_inst_886_, lean_object* v_s_887_, lean_object* v_x_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_toOption(v_00_u03c1_883_, v_00_u03c3_884_, v_pat_885_, v_inst_886_, v_s_887_, v_x_888_);
lean_dec(v_x_888_);
lean_dec_ref(v_s_887_);
lean_dec(v_inst_886_);
lean_dec(v_pat_885_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_instIteratorId_match__3_splitter___redArg(lean_object* v_x_890_, lean_object* v_h__1_891_, lean_object* v_h__2_892_){
_start:
{
if (lean_obj_tag(v_x_890_) == 0)
{
lean_object* v_currPos_893_; lean_object* v_searcher_894_; lean_object* v___x_895_; 
lean_dec(v_h__2_892_);
v_currPos_893_ = lean_ctor_get(v_x_890_, 0);
lean_inc(v_currPos_893_);
v_searcher_894_ = lean_ctor_get(v_x_890_, 1);
lean_inc(v_searcher_894_);
lean_dec_ref_known(v_x_890_, 2);
v___x_895_ = lean_apply_2(v_h__1_891_, v_currPos_893_, v_searcher_894_);
return v___x_895_;
}
else
{
lean_object* v___x_896_; lean_object* v___x_897_; 
lean_dec(v_h__1_891_);
v___x_896_ = lean_box(0);
v___x_897_ = lean_apply_1(v_h__2_892_, v___x_896_);
return v___x_897_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_instIteratorId_match__3_splitter(lean_object* v_00_u03c1_898_, lean_object* v_00_u03c3_899_, lean_object* v_pat_900_, lean_object* v_inst_901_, lean_object* v_s_902_, lean_object* v_motive_903_, lean_object* v_x_904_, lean_object* v_h__1_905_, lean_object* v_h__2_906_){
_start:
{
if (lean_obj_tag(v_x_904_) == 0)
{
lean_object* v_currPos_907_; lean_object* v_searcher_908_; lean_object* v___x_909_; 
lean_dec(v_h__2_906_);
v_currPos_907_ = lean_ctor_get(v_x_904_, 0);
lean_inc(v_currPos_907_);
v_searcher_908_ = lean_ctor_get(v_x_904_, 1);
lean_inc(v_searcher_908_);
lean_dec_ref_known(v_x_904_, 2);
v___x_909_ = lean_apply_2(v_h__1_905_, v_currPos_907_, v_searcher_908_);
return v___x_909_;
}
else
{
lean_object* v___x_910_; lean_object* v___x_911_; 
lean_dec(v_h__1_905_);
v___x_910_ = lean_box(0);
v___x_911_ = lean_apply_1(v_h__2_906_, v___x_910_);
return v___x_911_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_instIteratorId_match__3_splitter___boxed(lean_object* v_00_u03c1_912_, lean_object* v_00_u03c3_913_, lean_object* v_pat_914_, lean_object* v_inst_915_, lean_object* v_s_916_, lean_object* v_motive_917_, lean_object* v_x_918_, lean_object* v_h__1_919_, lean_object* v_h__2_920_){
_start:
{
lean_object* v_res_921_; 
v_res_921_ = l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_instIteratorId_match__3_splitter(v_00_u03c1_912_, v_00_u03c3_913_, v_pat_914_, v_inst_915_, v_s_916_, v_motive_917_, v_x_918_, v_h__1_919_, v_h__2_920_);
lean_dec_ref(v_s_916_);
lean_dec(v_inst_915_);
lean_dec(v_pat_914_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_instIteratorId_match__1_splitter___redArg(lean_object* v_x_922_, lean_object* v_x_923_, lean_object* v_h__1_924_, lean_object* v_h__2_925_, lean_object* v_h__3_926_, lean_object* v_h__4_927_, lean_object* v_h__5_928_, lean_object* v_h__6_929_, lean_object* v_h__7_930_, lean_object* v_h__8_931_){
_start:
{
if (lean_obj_tag(v_x_922_) == 0)
{
lean_dec(v_h__8_931_);
lean_dec(v_h__7_930_);
lean_dec(v_h__6_929_);
switch(lean_obj_tag(v_x_923_))
{
case 0:
{
lean_object* v_it_932_; 
lean_dec(v_h__5_928_);
lean_dec(v_h__4_927_);
lean_dec(v_h__3_926_);
v_it_932_ = lean_ctor_get(v_x_923_, 0);
if (lean_obj_tag(v_it_932_) == 0)
{
lean_object* v_currPos_933_; lean_object* v_searcher_934_; lean_object* v_out_935_; lean_object* v_currPos_936_; lean_object* v_searcher_937_; lean_object* v___x_938_; 
lean_inc_ref(v_it_932_);
lean_dec(v_h__2_925_);
v_currPos_933_ = lean_ctor_get(v_x_922_, 0);
lean_inc(v_currPos_933_);
v_searcher_934_ = lean_ctor_get(v_x_922_, 1);
lean_inc(v_searcher_934_);
lean_dec_ref_known(v_x_922_, 2);
v_out_935_ = lean_ctor_get(v_x_923_, 1);
lean_inc(v_out_935_);
lean_dec_ref_known(v_x_923_, 2);
v_currPos_936_ = lean_ctor_get(v_it_932_, 0);
lean_inc(v_currPos_936_);
v_searcher_937_ = lean_ctor_get(v_it_932_, 1);
lean_inc(v_searcher_937_);
lean_dec_ref_known(v_it_932_, 2);
v___x_938_ = lean_apply_5(v_h__1_924_, v_currPos_933_, v_searcher_934_, v_currPos_936_, v_searcher_937_, v_out_935_);
return v___x_938_;
}
else
{
lean_object* v_currPos_939_; lean_object* v_searcher_940_; lean_object* v_out_941_; lean_object* v___x_942_; 
lean_dec(v_h__1_924_);
v_currPos_939_ = lean_ctor_get(v_x_922_, 0);
lean_inc(v_currPos_939_);
v_searcher_940_ = lean_ctor_get(v_x_922_, 1);
lean_inc(v_searcher_940_);
lean_dec_ref_known(v_x_922_, 2);
v_out_941_ = lean_ctor_get(v_x_923_, 1);
lean_inc(v_out_941_);
lean_dec_ref_known(v_x_923_, 2);
v___x_942_ = lean_apply_3(v_h__2_925_, v_currPos_939_, v_searcher_940_, v_out_941_);
return v___x_942_;
}
}
case 1:
{
lean_object* v_it_943_; 
lean_dec(v_h__5_928_);
lean_dec(v_h__2_925_);
lean_dec(v_h__1_924_);
v_it_943_ = lean_ctor_get(v_x_923_, 0);
lean_inc(v_it_943_);
lean_dec_ref_known(v_x_923_, 1);
if (lean_obj_tag(v_it_943_) == 0)
{
lean_object* v_currPos_944_; lean_object* v_searcher_945_; lean_object* v_currPos_946_; lean_object* v_searcher_947_; lean_object* v___x_948_; 
lean_dec(v_h__4_927_);
v_currPos_944_ = lean_ctor_get(v_x_922_, 0);
lean_inc(v_currPos_944_);
v_searcher_945_ = lean_ctor_get(v_x_922_, 1);
lean_inc(v_searcher_945_);
lean_dec_ref_known(v_x_922_, 2);
v_currPos_946_ = lean_ctor_get(v_it_943_, 0);
lean_inc(v_currPos_946_);
v_searcher_947_ = lean_ctor_get(v_it_943_, 1);
lean_inc(v_searcher_947_);
lean_dec_ref_known(v_it_943_, 2);
v___x_948_ = lean_apply_4(v_h__3_926_, v_currPos_944_, v_searcher_945_, v_currPos_946_, v_searcher_947_);
return v___x_948_;
}
else
{
lean_object* v_currPos_949_; lean_object* v_searcher_950_; lean_object* v___x_951_; 
lean_dec(v_h__3_926_);
v_currPos_949_ = lean_ctor_get(v_x_922_, 0);
lean_inc(v_currPos_949_);
v_searcher_950_ = lean_ctor_get(v_x_922_, 1);
lean_inc(v_searcher_950_);
lean_dec_ref_known(v_x_922_, 2);
v___x_951_ = lean_apply_2(v_h__4_927_, v_currPos_949_, v_searcher_950_);
return v___x_951_;
}
}
default: 
{
lean_object* v_currPos_952_; lean_object* v_searcher_953_; lean_object* v___x_954_; 
lean_dec(v_h__4_927_);
lean_dec(v_h__3_926_);
lean_dec(v_h__2_925_);
lean_dec(v_h__1_924_);
v_currPos_952_ = lean_ctor_get(v_x_922_, 0);
lean_inc(v_currPos_952_);
v_searcher_953_ = lean_ctor_get(v_x_922_, 1);
lean_inc(v_searcher_953_);
lean_dec_ref_known(v_x_922_, 2);
v___x_954_ = lean_apply_2(v_h__5_928_, v_currPos_952_, v_searcher_953_);
return v___x_954_;
}
}
}
else
{
lean_dec(v_h__5_928_);
lean_dec(v_h__4_927_);
lean_dec(v_h__3_926_);
lean_dec(v_h__2_925_);
lean_dec(v_h__1_924_);
switch(lean_obj_tag(v_x_923_))
{
case 0:
{
lean_object* v_it_955_; lean_object* v_out_956_; lean_object* v___x_957_; 
lean_dec(v_h__8_931_);
lean_dec(v_h__7_930_);
v_it_955_ = lean_ctor_get(v_x_923_, 0);
lean_inc(v_it_955_);
v_out_956_ = lean_ctor_get(v_x_923_, 1);
lean_inc(v_out_956_);
lean_dec_ref_known(v_x_923_, 2);
v___x_957_ = lean_apply_2(v_h__6_929_, v_it_955_, v_out_956_);
return v___x_957_;
}
case 1:
{
lean_object* v_it_958_; lean_object* v___x_959_; 
lean_dec(v_h__8_931_);
lean_dec(v_h__6_929_);
v_it_958_ = lean_ctor_get(v_x_923_, 0);
lean_inc(v_it_958_);
lean_dec_ref_known(v_x_923_, 1);
v___x_959_ = lean_apply_1(v_h__7_930_, v_it_958_);
return v___x_959_;
}
default: 
{
lean_object* v___x_960_; lean_object* v___x_961_; 
lean_dec(v_h__7_930_);
lean_dec(v_h__6_929_);
v___x_960_ = lean_box(0);
v___x_961_ = lean_apply_1(v_h__8_931_, v___x_960_);
return v___x_961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_instIteratorId_match__1_splitter(lean_object* v_00_u03c1_962_, lean_object* v_00_u03c3_963_, lean_object* v_pat_964_, lean_object* v_inst_965_, lean_object* v_s_966_, lean_object* v_motive_967_, lean_object* v_x_968_, lean_object* v_x_969_, lean_object* v_h__1_970_, lean_object* v_h__2_971_, lean_object* v_h__3_972_, lean_object* v_h__4_973_, lean_object* v_h__5_974_, lean_object* v_h__6_975_, lean_object* v_h__7_976_, lean_object* v_h__8_977_){
_start:
{
if (lean_obj_tag(v_x_968_) == 0)
{
lean_dec(v_h__8_977_);
lean_dec(v_h__7_976_);
lean_dec(v_h__6_975_);
switch(lean_obj_tag(v_x_969_))
{
case 0:
{
lean_object* v_it_978_; 
lean_dec(v_h__5_974_);
lean_dec(v_h__4_973_);
lean_dec(v_h__3_972_);
v_it_978_ = lean_ctor_get(v_x_969_, 0);
if (lean_obj_tag(v_it_978_) == 0)
{
lean_object* v_currPos_979_; lean_object* v_searcher_980_; lean_object* v_out_981_; lean_object* v_currPos_982_; lean_object* v_searcher_983_; lean_object* v___x_984_; 
lean_inc_ref(v_it_978_);
lean_dec(v_h__2_971_);
v_currPos_979_ = lean_ctor_get(v_x_968_, 0);
lean_inc(v_currPos_979_);
v_searcher_980_ = lean_ctor_get(v_x_968_, 1);
lean_inc(v_searcher_980_);
lean_dec_ref_known(v_x_968_, 2);
v_out_981_ = lean_ctor_get(v_x_969_, 1);
lean_inc(v_out_981_);
lean_dec_ref_known(v_x_969_, 2);
v_currPos_982_ = lean_ctor_get(v_it_978_, 0);
lean_inc(v_currPos_982_);
v_searcher_983_ = lean_ctor_get(v_it_978_, 1);
lean_inc(v_searcher_983_);
lean_dec_ref_known(v_it_978_, 2);
v___x_984_ = lean_apply_5(v_h__1_970_, v_currPos_979_, v_searcher_980_, v_currPos_982_, v_searcher_983_, v_out_981_);
return v___x_984_;
}
else
{
lean_object* v_currPos_985_; lean_object* v_searcher_986_; lean_object* v_out_987_; lean_object* v___x_988_; 
lean_dec(v_h__1_970_);
v_currPos_985_ = lean_ctor_get(v_x_968_, 0);
lean_inc(v_currPos_985_);
v_searcher_986_ = lean_ctor_get(v_x_968_, 1);
lean_inc(v_searcher_986_);
lean_dec_ref_known(v_x_968_, 2);
v_out_987_ = lean_ctor_get(v_x_969_, 1);
lean_inc(v_out_987_);
lean_dec_ref_known(v_x_969_, 2);
v___x_988_ = lean_apply_3(v_h__2_971_, v_currPos_985_, v_searcher_986_, v_out_987_);
return v___x_988_;
}
}
case 1:
{
lean_object* v_it_989_; 
lean_dec(v_h__5_974_);
lean_dec(v_h__2_971_);
lean_dec(v_h__1_970_);
v_it_989_ = lean_ctor_get(v_x_969_, 0);
lean_inc(v_it_989_);
lean_dec_ref_known(v_x_969_, 1);
if (lean_obj_tag(v_it_989_) == 0)
{
lean_object* v_currPos_990_; lean_object* v_searcher_991_; lean_object* v_currPos_992_; lean_object* v_searcher_993_; lean_object* v___x_994_; 
lean_dec(v_h__4_973_);
v_currPos_990_ = lean_ctor_get(v_x_968_, 0);
lean_inc(v_currPos_990_);
v_searcher_991_ = lean_ctor_get(v_x_968_, 1);
lean_inc(v_searcher_991_);
lean_dec_ref_known(v_x_968_, 2);
v_currPos_992_ = lean_ctor_get(v_it_989_, 0);
lean_inc(v_currPos_992_);
v_searcher_993_ = lean_ctor_get(v_it_989_, 1);
lean_inc(v_searcher_993_);
lean_dec_ref_known(v_it_989_, 2);
v___x_994_ = lean_apply_4(v_h__3_972_, v_currPos_990_, v_searcher_991_, v_currPos_992_, v_searcher_993_);
return v___x_994_;
}
else
{
lean_object* v_currPos_995_; lean_object* v_searcher_996_; lean_object* v___x_997_; 
lean_dec(v_h__3_972_);
v_currPos_995_ = lean_ctor_get(v_x_968_, 0);
lean_inc(v_currPos_995_);
v_searcher_996_ = lean_ctor_get(v_x_968_, 1);
lean_inc(v_searcher_996_);
lean_dec_ref_known(v_x_968_, 2);
v___x_997_ = lean_apply_2(v_h__4_973_, v_currPos_995_, v_searcher_996_);
return v___x_997_;
}
}
default: 
{
lean_object* v_currPos_998_; lean_object* v_searcher_999_; lean_object* v___x_1000_; 
lean_dec(v_h__4_973_);
lean_dec(v_h__3_972_);
lean_dec(v_h__2_971_);
lean_dec(v_h__1_970_);
v_currPos_998_ = lean_ctor_get(v_x_968_, 0);
lean_inc(v_currPos_998_);
v_searcher_999_ = lean_ctor_get(v_x_968_, 1);
lean_inc(v_searcher_999_);
lean_dec_ref_known(v_x_968_, 2);
v___x_1000_ = lean_apply_2(v_h__5_974_, v_currPos_998_, v_searcher_999_);
return v___x_1000_;
}
}
}
else
{
lean_dec(v_h__5_974_);
lean_dec(v_h__4_973_);
lean_dec(v_h__3_972_);
lean_dec(v_h__2_971_);
lean_dec(v_h__1_970_);
switch(lean_obj_tag(v_x_969_))
{
case 0:
{
lean_object* v_it_1001_; lean_object* v_out_1002_; lean_object* v___x_1003_; 
lean_dec(v_h__8_977_);
lean_dec(v_h__7_976_);
v_it_1001_ = lean_ctor_get(v_x_969_, 0);
lean_inc(v_it_1001_);
v_out_1002_ = lean_ctor_get(v_x_969_, 1);
lean_inc(v_out_1002_);
lean_dec_ref_known(v_x_969_, 2);
v___x_1003_ = lean_apply_2(v_h__6_975_, v_it_1001_, v_out_1002_);
return v___x_1003_;
}
case 1:
{
lean_object* v_it_1004_; lean_object* v___x_1005_; 
lean_dec(v_h__8_977_);
lean_dec(v_h__6_975_);
v_it_1004_ = lean_ctor_get(v_x_969_, 0);
lean_inc(v_it_1004_);
lean_dec_ref_known(v_x_969_, 1);
v___x_1005_ = lean_apply_1(v_h__7_976_, v_it_1004_);
return v___x_1005_;
}
default: 
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
lean_dec(v_h__7_976_);
lean_dec(v_h__6_975_);
v___x_1006_ = lean_box(0);
v___x_1007_ = lean_apply_1(v_h__8_977_, v___x_1006_);
return v___x_1007_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_instIteratorId_match__1_splitter___boxed(lean_object* v_00_u03c1_1008_, lean_object* v_00_u03c3_1009_, lean_object* v_pat_1010_, lean_object* v_inst_1011_, lean_object* v_s_1012_, lean_object* v_motive_1013_, lean_object* v_x_1014_, lean_object* v_x_1015_, lean_object* v_h__1_1016_, lean_object* v_h__2_1017_, lean_object* v_h__3_1018_, lean_object* v_h__4_1019_, lean_object* v_h__5_1020_, lean_object* v_h__6_1021_, lean_object* v_h__7_1022_, lean_object* v_h__8_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_instIteratorId_match__1_splitter(v_00_u03c1_1008_, v_00_u03c3_1009_, v_pat_1010_, v_inst_1011_, v_s_1012_, v_motive_1013_, v_x_1014_, v_x_1015_, v_h__1_1016_, v_h__2_1017_, v_h__3_1018_, v_h__4_1019_, v_h__5_1020_, v_h__6_1021_, v_h__7_1022_, v_h__8_1023_);
lean_dec_ref(v_s_1012_);
lean_dec(v_inst_1011_);
lean_dec(v_pat_1010_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_finitenessRelation___redArg(){
_start:
{
lean_object* v___x_1026_; 
v___x_1026_ = lean_box(0);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_finitenessRelation___redArg___boxed(lean_object* v___dummy_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_finitenessRelation___redArg();
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_finitenessRelation(lean_object* v_00_u03c1_1029_, lean_object* v_00_u03c3_1030_, lean_object* v_inst_1031_, lean_object* v_pat_1032_, lean_object* v_inst_1033_, lean_object* v_s_1034_, lean_object* v_inst_1035_){
_start:
{
lean_object* v___x_1036_; 
v___x_1036_ = lean_box(0);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_finitenessRelation___boxed(lean_object* v_00_u03c1_1037_, lean_object* v_00_u03c3_1038_, lean_object* v_inst_1039_, lean_object* v_pat_1040_, lean_object* v_inst_1041_, lean_object* v_s_1042_, lean_object* v_inst_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l___private_Init_Data_String_Slice_0__String_Slice_SplitInclusiveIterator_finitenessRelation(v_00_u03c1_1037_, v_00_u03c3_1038_, v_inst_1039_, v_pat_1040_, v_inst_1041_, v_s_1042_, v_inst_1043_);
lean_dec_ref(v_s_1042_);
lean_dec(v_inst_1041_);
lean_dec(v_pat_1040_);
lean_dec(v_inst_1039_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___redArg___lam__0(lean_object* v_toPure_1045_, lean_object* v_recur_1046_, lean_object* v_it_1047_, lean_object* v_____do__lift_1048_){
_start:
{
if (lean_obj_tag(v_____do__lift_1048_) == 0)
{
lean_object* v_a_1049_; lean_object* v___x_1050_; 
lean_dec(v_it_1047_);
lean_dec(v_recur_1046_);
v_a_1049_ = lean_ctor_get(v_____do__lift_1048_, 0);
lean_inc(v_a_1049_);
lean_dec_ref_known(v_____do__lift_1048_, 1);
v___x_1050_ = lean_apply_2(v_toPure_1045_, lean_box(0), v_a_1049_);
return v___x_1050_;
}
else
{
lean_object* v_a_1051_; lean_object* v___x_1052_; 
lean_dec(v_toPure_1045_);
v_a_1051_ = lean_ctor_get(v_____do__lift_1048_, 0);
lean_inc(v_a_1051_);
lean_dec_ref_known(v_____do__lift_1048_, 1);
v___x_1052_ = lean_apply_4(v_recur_1046_, v_it_1047_, v_a_1051_, lean_box(0), lean_box(0));
return v___x_1052_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___redArg___lam__1(lean_object* v_toPure_1053_, lean_object* v_recur_1054_, lean_object* v___y_1055_, lean_object* v_acc_1056_, lean_object* v_toBind_1057_, lean_object* v_s_1058_){
_start:
{
switch(lean_obj_tag(v_s_1058_))
{
case 0:
{
lean_object* v_it_1059_; lean_object* v_out_1060_; lean_object* v___f_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v_it_1059_ = lean_ctor_get(v_s_1058_, 0);
lean_inc(v_it_1059_);
v_out_1060_ = lean_ctor_get(v_s_1058_, 1);
lean_inc(v_out_1060_);
lean_dec_ref_known(v_s_1058_, 2);
v___f_1061_ = lean_alloc_closure((void*)(l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1061_, 0, v_toPure_1053_);
lean_closure_set(v___f_1061_, 1, v_recur_1054_);
lean_closure_set(v___f_1061_, 2, v_it_1059_);
v___x_1062_ = lean_apply_3(v___y_1055_, v_out_1060_, lean_box(0), v_acc_1056_);
v___x_1063_ = lean_apply_4(v_toBind_1057_, lean_box(0), lean_box(0), v___x_1062_, v___f_1061_);
return v___x_1063_;
}
case 1:
{
lean_object* v_it_1064_; lean_object* v___x_1065_; 
lean_dec(v_toBind_1057_);
lean_dec(v___y_1055_);
lean_dec(v_toPure_1053_);
v_it_1064_ = lean_ctor_get(v_s_1058_, 0);
lean_inc(v_it_1064_);
lean_dec_ref_known(v_s_1058_, 1);
v___x_1065_ = lean_apply_4(v_recur_1054_, v_it_1064_, v_acc_1056_, lean_box(0), lean_box(0));
return v___x_1065_;
}
default: 
{
lean_object* v___x_1066_; 
lean_dec(v_toBind_1057_);
lean_dec(v___y_1055_);
lean_dec(v_recur_1054_);
v___x_1066_ = lean_apply_2(v_toPure_1053_, lean_box(0), v_acc_1056_);
return v___x_1066_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___redArg___lam__2(lean_object* v_toPure_1067_, lean_object* v___y_1068_, lean_object* v_toBind_1069_, lean_object* v_inst_1070_, lean_object* v_s_1071_, lean_object* v_lift_1072_, lean_object* v_it_1073_, lean_object* v_acc_1074_, lean_object* v_hP_1075_, lean_object* v_recur_1076_){
_start:
{
lean_object* v___f_1077_; 
v___f_1077_ = lean_alloc_closure((void*)(l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___redArg___lam__1), 6, 5);
lean_closure_set(v___f_1077_, 0, v_toPure_1067_);
lean_closure_set(v___f_1077_, 1, v_recur_1076_);
lean_closure_set(v___f_1077_, 2, v___y_1068_);
lean_closure_set(v___f_1077_, 3, v_acc_1074_);
lean_closure_set(v___f_1077_, 4, v_toBind_1069_);
if (lean_obj_tag(v_it_1073_) == 0)
{
lean_object* v_currPos_1078_; lean_object* v_searcher_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1136_; 
v_currPos_1078_ = lean_ctor_get(v_it_1073_, 0);
v_searcher_1079_ = lean_ctor_get(v_it_1073_, 1);
v_isSharedCheck_1136_ = !lean_is_exclusive(v_it_1073_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1081_ = v_it_1073_;
v_isShared_1082_ = v_isSharedCheck_1136_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_searcher_1079_);
lean_inc(v_currPos_1078_);
lean_dec(v_it_1073_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1136_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1083_; 
lean_inc_ref(v_s_1071_);
v___x_1083_ = lean_apply_2(v_inst_1070_, v_s_1071_, v_searcher_1079_);
switch(lean_obj_tag(v___x_1083_))
{
case 0:
{
lean_object* v_out_1084_; 
v_out_1084_ = lean_ctor_get(v___x_1083_, 1);
lean_inc(v_out_1084_);
if (lean_obj_tag(v_out_1084_) == 0)
{
lean_object* v_it_1085_; lean_object* v___x_1087_; 
lean_dec_ref_known(v_out_1084_, 2);
lean_dec_ref(v_s_1071_);
v_it_1085_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_it_1085_);
lean_dec_ref_known(v___x_1083_, 2);
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 1, v_it_1085_);
v___x_1087_ = v___x_1081_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_currPos_1078_);
lean_ctor_set(v_reuseFailAlloc_1090_, 1, v_it_1085_);
v___x_1087_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1087_);
v___x_1089_ = lean_apply_4(v_lift_1072_, lean_box(0), lean_box(0), v___f_1077_, v___x_1088_);
return v___x_1089_;
}
}
else
{
lean_object* v_it_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1104_; 
v_it_1091_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1104_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1104_ == 0)
{
lean_object* v_unused_1105_; 
v_unused_1105_ = lean_ctor_get(v___x_1083_, 1);
lean_dec(v_unused_1105_);
v___x_1093_ = v___x_1083_;
v_isShared_1094_ = v_isSharedCheck_1104_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_it_1091_);
lean_dec(v___x_1083_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1104_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v_endPos_1095_; lean_object* v_slice_1096_; lean_object* v_nextIt_1098_; 
v_endPos_1095_ = lean_ctor_get(v_out_1084_, 1);
lean_inc(v_endPos_1095_);
lean_dec_ref_known(v_out_1084_, 2);
v_slice_1096_ = l_String_Slice_slice_x21(v_s_1071_, v_currPos_1078_, v_endPos_1095_);
lean_dec(v_currPos_1078_);
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 1, v_it_1091_);
lean_ctor_set(v___x_1081_, 0, v_endPos_1095_);
v_nextIt_1098_ = v___x_1081_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v_endPos_1095_);
lean_ctor_set(v_reuseFailAlloc_1103_, 1, v_it_1091_);
v_nextIt_1098_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
lean_object* v___x_1100_; 
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 1, v_slice_1096_);
lean_ctor_set(v___x_1093_, 0, v_nextIt_1098_);
v___x_1100_ = v___x_1093_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_nextIt_1098_);
lean_ctor_set(v_reuseFailAlloc_1102_, 1, v_slice_1096_);
v___x_1100_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
lean_object* v___x_1101_; 
v___x_1101_ = lean_apply_4(v_lift_1072_, lean_box(0), lean_box(0), v___f_1077_, v___x_1100_);
return v___x_1101_;
}
}
}
}
}
case 1:
{
lean_object* v_it_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1117_; 
lean_dec_ref(v_s_1071_);
v_it_1106_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1108_ = v___x_1083_;
v_isShared_1109_ = v_isSharedCheck_1117_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_it_1106_);
lean_dec(v___x_1083_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1117_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1111_; 
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 1, v_it_1106_);
v___x_1111_ = v___x_1081_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_currPos_1078_);
lean_ctor_set(v_reuseFailAlloc_1116_, 1, v_it_1106_);
v___x_1111_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
lean_object* v___x_1113_; 
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 0, v___x_1111_);
v___x_1113_ = v___x_1108_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v___x_1111_);
v___x_1113_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
lean_object* v___x_1114_; 
v___x_1114_ = lean_apply_4(v_lift_1072_, lean_box(0), lean_box(0), v___f_1077_, v___x_1113_);
return v___x_1114_;
}
}
}
}
default: 
{
lean_object* v_str_1118_; lean_object* v_startInclusive_1119_; lean_object* v_endExclusive_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1135_; 
lean_del_object(v___x_1081_);
v_str_1118_ = lean_ctor_get(v_s_1071_, 0);
v_startInclusive_1119_ = lean_ctor_get(v_s_1071_, 1);
v_endExclusive_1120_ = lean_ctor_get(v_s_1071_, 2);
v_isSharedCheck_1135_ = !lean_is_exclusive(v_s_1071_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1122_ = v_s_1071_;
v_isShared_1123_ = v_isSharedCheck_1135_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_endExclusive_1120_);
lean_inc(v_startInclusive_1119_);
lean_inc(v_str_1118_);
lean_dec(v_s_1071_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1135_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1124_; uint8_t v_decide_1125_; 
v___x_1124_ = lean_nat_sub(v_endExclusive_1120_, v_startInclusive_1119_);
v_decide_1125_ = lean_nat_dec_eq(v_currPos_1078_, v___x_1124_);
lean_dec(v___x_1124_);
if (v_decide_1125_ == 0)
{
lean_object* v___x_1126_; lean_object* v_slice_1128_; 
v___x_1126_ = lean_nat_add(v_startInclusive_1119_, v_currPos_1078_);
lean_dec(v_currPos_1078_);
lean_dec(v_startInclusive_1119_);
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 1, v___x_1126_);
v_slice_1128_ = v___x_1122_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_str_1118_);
lean_ctor_set(v_reuseFailAlloc_1132_, 1, v___x_1126_);
lean_ctor_set(v_reuseFailAlloc_1132_, 2, v_endExclusive_1120_);
v_slice_1128_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1129_ = lean_box(1);
v___x_1130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
lean_ctor_set(v___x_1130_, 1, v_slice_1128_);
v___x_1131_ = lean_apply_4(v_lift_1072_, lean_box(0), lean_box(0), v___f_1077_, v___x_1130_);
return v___x_1131_;
}
}
else
{
lean_object* v___x_1133_; lean_object* v___x_1134_; 
lean_del_object(v___x_1122_);
lean_dec(v_endExclusive_1120_);
lean_dec(v_startInclusive_1119_);
lean_dec_ref(v_str_1118_);
lean_dec(v_currPos_1078_);
v___x_1133_ = lean_box(2);
v___x_1134_ = lean_apply_4(v_lift_1072_, lean_box(0), lean_box(0), v___f_1077_, v___x_1133_);
return v___x_1134_;
}
}
}
}
}
}
else
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
lean_dec_ref(v_s_1071_);
lean_dec(v_inst_1070_);
v___x_1137_ = lean_box(2);
v___x_1138_ = lean_apply_4(v_lift_1072_, lean_box(0), lean_box(0), v___f_1077_, v___x_1137_);
return v___x_1138_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___redArg___lam__3(lean_object* v_inst_1139_, lean_object* v_inst_1140_, lean_object* v_s_1141_, lean_object* v_lift_1142_, lean_object* v_00_u03b3_1143_, lean_object* v_Pl_1144_, lean_object* v_it_1145_, lean_object* v_init_1146_, lean_object* v___y_1147_){
_start:
{
lean_object* v_toApplicative_1148_; lean_object* v_toBind_1149_; lean_object* v_toPure_1150_; lean_object* v___f_1151_; lean_object* v___x_1152_; 
v_toApplicative_1148_ = lean_ctor_get(v_inst_1139_, 0);
lean_inc_ref(v_toApplicative_1148_);
v_toBind_1149_ = lean_ctor_get(v_inst_1139_, 1);
lean_inc(v_toBind_1149_);
lean_dec_ref(v_inst_1139_);
v_toPure_1150_ = lean_ctor_get(v_toApplicative_1148_, 1);
lean_inc(v_toPure_1150_);
lean_dec_ref(v_toApplicative_1148_);
v___f_1151_ = lean_alloc_closure((void*)(l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___redArg___lam__2), 10, 6);
lean_closure_set(v___f_1151_, 0, v_toPure_1150_);
lean_closure_set(v___f_1151_, 1, v___y_1147_);
lean_closure_set(v___f_1151_, 2, v_toBind_1149_);
lean_closure_set(v___f_1151_, 3, v_inst_1140_);
lean_closure_set(v___f_1151_, 4, v_s_1141_);
lean_closure_set(v___f_1151_, 5, v_lift_1142_);
v___x_1152_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_1151_, v_it_1145_, v_init_1146_, lean_box(0));
return v___x_1152_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___redArg(lean_object* v_inst_1153_, lean_object* v_inst_1154_, lean_object* v_s_1155_){
_start:
{
lean_object* v___f_1156_; 
v___f_1156_ = lean_alloc_closure((void*)(l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___redArg___lam__3), 9, 3);
lean_closure_set(v___f_1156_, 0, v_inst_1154_);
lean_closure_set(v___f_1156_, 1, v_inst_1153_);
lean_closure_set(v___f_1156_, 2, v_s_1155_);
return v___f_1156_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad(lean_object* v_00_u03c1_1157_, lean_object* v_00_u03c3_1158_, lean_object* v_inst_1159_, lean_object* v_pat_1160_, lean_object* v_inst_1161_, lean_object* v_n_1162_, lean_object* v_inst_1163_, lean_object* v_s_1164_){
_start:
{
lean_object* v___f_1165_; 
v___f_1165_ = lean_alloc_closure((void*)(l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___redArg___lam__3), 9, 3);
lean_closure_set(v___f_1165_, 0, v_inst_1163_);
lean_closure_set(v___f_1165_, 1, v_inst_1159_);
lean_closure_set(v___f_1165_, 2, v_s_1164_);
return v___f_1165_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad___boxed(lean_object* v_00_u03c1_1166_, lean_object* v_00_u03c3_1167_, lean_object* v_inst_1168_, lean_object* v_pat_1169_, lean_object* v_inst_1170_, lean_object* v_n_1171_, lean_object* v_inst_1172_, lean_object* v_s_1173_){
_start:
{
lean_object* v_res_1174_; 
v_res_1174_ = l_String_Slice_SplitInclusiveIterator_instIteratorLoopIdOfMonad(v_00_u03c1_1166_, v_00_u03c3_1167_, v_inst_1168_, v_pat_1169_, v_inst_1170_, v_n_1171_, v_inst_1172_, v_s_1173_);
lean_dec(v_inst_1170_);
lean_dec(v_pat_1169_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitInclusive___redArg(lean_object* v_s_1175_, lean_object* v_inst_1176_){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1177_ = lean_unsigned_to_nat(0u);
v___x_1178_ = lean_apply_1(v_inst_1176_, v_s_1175_);
v___x_1179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1177_);
lean_ctor_set(v___x_1179_, 1, v___x_1178_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitInclusive(lean_object* v_00_u03c1_1180_, lean_object* v_00_u03c3_1181_, lean_object* v_s_1182_, lean_object* v_pat_1183_, lean_object* v_inst_1184_){
_start:
{
lean_object* v___x_1185_; 
v___x_1185_ = l_String_Slice_splitInclusive___redArg(v_s_1182_, v_inst_1184_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitInclusive___boxed(lean_object* v_00_u03c1_1186_, lean_object* v_00_u03c3_1187_, lean_object* v_s_1188_, lean_object* v_pat_1189_, lean_object* v_inst_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_String_Slice_splitInclusive(v_00_u03c1_1186_, v_00_u03c3_1187_, v_s_1188_, v_pat_1189_, v_inst_1190_);
lean_dec(v_pat_1189_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_skipPrefix_x3f___redArg(lean_object* v_s_1192_, lean_object* v_inst_1193_){
_start:
{
lean_object* v_skipPrefix_x3f_1194_; lean_object* v___x_1195_; 
v_skipPrefix_x3f_1194_ = lean_ctor_get(v_inst_1193_, 0);
lean_inc_ref(v_skipPrefix_x3f_1194_);
lean_dec_ref(v_inst_1193_);
v___x_1195_ = lean_apply_1(v_skipPrefix_x3f_1194_, v_s_1192_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_skipPrefix_x3f(lean_object* v_00_u03c1_1196_, lean_object* v_s_1197_, lean_object* v_pat_1198_, lean_object* v_inst_1199_){
_start:
{
lean_object* v_skipPrefix_x3f_1200_; lean_object* v___x_1201_; 
v_skipPrefix_x3f_1200_ = lean_ctor_get(v_inst_1199_, 0);
lean_inc_ref(v_skipPrefix_x3f_1200_);
lean_dec_ref(v_inst_1199_);
v___x_1201_ = lean_apply_1(v_skipPrefix_x3f_1200_, v_s_1197_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_skipPrefix_x3f___boxed(lean_object* v_00_u03c1_1202_, lean_object* v_s_1203_, lean_object* v_pat_1204_, lean_object* v_inst_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l_String_Slice_skipPrefix_x3f(v_00_u03c1_1202_, v_s_1203_, v_pat_1204_, v_inst_1205_);
lean_dec(v_pat_1204_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skip_x3f___redArg(lean_object* v_s_1207_, lean_object* v_pos_1208_, lean_object* v_inst_1209_){
_start:
{
lean_object* v_str_1210_; lean_object* v_startInclusive_1211_; lean_object* v_endExclusive_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1231_; 
v_str_1210_ = lean_ctor_get(v_s_1207_, 0);
v_startInclusive_1211_ = lean_ctor_get(v_s_1207_, 1);
v_endExclusive_1212_ = lean_ctor_get(v_s_1207_, 2);
v_isSharedCheck_1231_ = !lean_is_exclusive(v_s_1207_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1214_ = v_s_1207_;
v_isShared_1215_ = v_isSharedCheck_1231_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_endExclusive_1212_);
lean_inc(v_startInclusive_1211_);
lean_inc(v_str_1210_);
lean_dec(v_s_1207_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1231_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v_skipPrefix_x3f_1216_; lean_object* v___x_1217_; lean_object* v___x_1219_; 
v_skipPrefix_x3f_1216_ = lean_ctor_get(v_inst_1209_, 0);
lean_inc_ref(v_skipPrefix_x3f_1216_);
lean_dec_ref(v_inst_1209_);
v___x_1217_ = lean_nat_add(v_startInclusive_1211_, v_pos_1208_);
lean_dec(v_startInclusive_1211_);
if (v_isShared_1215_ == 0)
{
lean_ctor_set(v___x_1214_, 1, v___x_1217_);
v___x_1219_ = v___x_1214_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v_str_1210_);
lean_ctor_set(v_reuseFailAlloc_1230_, 1, v___x_1217_);
lean_ctor_set(v_reuseFailAlloc_1230_, 2, v_endExclusive_1212_);
v___x_1219_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
lean_object* v___x_1220_; 
v___x_1220_ = lean_apply_1(v_skipPrefix_x3f_1216_, v___x_1219_);
if (lean_obj_tag(v___x_1220_) == 0)
{
return v___x_1220_;
}
else
{
lean_object* v_val_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1229_; 
v_val_1221_ = lean_ctor_get(v___x_1220_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1223_ = v___x_1220_;
v_isShared_1224_ = v_isSharedCheck_1229_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_val_1221_);
lean_dec(v___x_1220_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1229_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1225_; lean_object* v___x_1227_; 
v___x_1225_ = lean_nat_add(v_pos_1208_, v_val_1221_);
lean_dec(v_val_1221_);
if (v_isShared_1224_ == 0)
{
lean_ctor_set(v___x_1223_, 0, v___x_1225_);
v___x_1227_ = v___x_1223_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v___x_1225_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skip_x3f___redArg___boxed(lean_object* v_s_1232_, lean_object* v_pos_1233_, lean_object* v_inst_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l_String_Slice_Pos_skip_x3f___redArg(v_s_1232_, v_pos_1233_, v_inst_1234_);
lean_dec(v_pos_1233_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skip_x3f(lean_object* v_00_u03c1_1236_, lean_object* v_s_1237_, lean_object* v_pos_1238_, lean_object* v_pat_1239_, lean_object* v_inst_1240_){
_start:
{
lean_object* v_str_1241_; lean_object* v_startInclusive_1242_; lean_object* v_endExclusive_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1262_; 
v_str_1241_ = lean_ctor_get(v_s_1237_, 0);
v_startInclusive_1242_ = lean_ctor_get(v_s_1237_, 1);
v_endExclusive_1243_ = lean_ctor_get(v_s_1237_, 2);
v_isSharedCheck_1262_ = !lean_is_exclusive(v_s_1237_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1245_ = v_s_1237_;
v_isShared_1246_ = v_isSharedCheck_1262_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_endExclusive_1243_);
lean_inc(v_startInclusive_1242_);
lean_inc(v_str_1241_);
lean_dec(v_s_1237_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1262_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v_skipPrefix_x3f_1247_; lean_object* v___x_1248_; lean_object* v___x_1250_; 
v_skipPrefix_x3f_1247_ = lean_ctor_get(v_inst_1240_, 0);
lean_inc_ref(v_skipPrefix_x3f_1247_);
lean_dec_ref(v_inst_1240_);
v___x_1248_ = lean_nat_add(v_startInclusive_1242_, v_pos_1238_);
lean_dec(v_startInclusive_1242_);
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 1, v___x_1248_);
v___x_1250_ = v___x_1245_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_str_1241_);
lean_ctor_set(v_reuseFailAlloc_1261_, 1, v___x_1248_);
lean_ctor_set(v_reuseFailAlloc_1261_, 2, v_endExclusive_1243_);
v___x_1250_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
lean_object* v___x_1251_; 
v___x_1251_ = lean_apply_1(v_skipPrefix_x3f_1247_, v___x_1250_);
if (lean_obj_tag(v___x_1251_) == 0)
{
return v___x_1251_;
}
else
{
lean_object* v_val_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1260_; 
v_val_1252_ = lean_ctor_get(v___x_1251_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1254_ = v___x_1251_;
v_isShared_1255_ = v_isSharedCheck_1260_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_val_1252_);
lean_dec(v___x_1251_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1260_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1256_; lean_object* v___x_1258_; 
v___x_1256_ = lean_nat_add(v_pos_1238_, v_val_1252_);
lean_dec(v_val_1252_);
if (v_isShared_1255_ == 0)
{
lean_ctor_set(v___x_1254_, 0, v___x_1256_);
v___x_1258_ = v___x_1254_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v___x_1256_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skip_x3f___boxed(lean_object* v_00_u03c1_1263_, lean_object* v_s_1264_, lean_object* v_pos_1265_, lean_object* v_pat_1266_, lean_object* v_inst_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_String_Slice_Pos_skip_x3f(v_00_u03c1_1263_, v_s_1264_, v_pos_1265_, v_pat_1266_, v_inst_1267_);
lean_dec(v_pat_1266_);
lean_dec(v_pos_1265_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropPrefix_x3f___redArg(lean_object* v_s_1269_, lean_object* v_inst_1270_){
_start:
{
lean_object* v_skipPrefix_x3f_1271_; lean_object* v___x_1272_; 
v_skipPrefix_x3f_1271_ = lean_ctor_get(v_inst_1270_, 0);
lean_inc_ref(v_skipPrefix_x3f_1271_);
lean_dec_ref(v_inst_1270_);
lean_inc_ref(v_s_1269_);
v___x_1272_ = lean_apply_1(v_skipPrefix_x3f_1271_, v_s_1269_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v___x_1273_; 
lean_dec_ref(v_s_1269_);
v___x_1273_ = lean_box(0);
return v___x_1273_;
}
else
{
lean_object* v_val_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1292_; 
v_val_1274_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1276_ = v___x_1272_;
v_isShared_1277_ = v_isSharedCheck_1292_;
goto v_resetjp_1275_;
}
else
{
lean_inc(v_val_1274_);
lean_dec(v___x_1272_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1292_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v_str_1278_; lean_object* v_startInclusive_1279_; lean_object* v_endExclusive_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1291_; 
v_str_1278_ = lean_ctor_get(v_s_1269_, 0);
v_startInclusive_1279_ = lean_ctor_get(v_s_1269_, 1);
v_endExclusive_1280_ = lean_ctor_get(v_s_1269_, 2);
v_isSharedCheck_1291_ = !lean_is_exclusive(v_s_1269_);
if (v_isSharedCheck_1291_ == 0)
{
v___x_1282_ = v_s_1269_;
v_isShared_1283_ = v_isSharedCheck_1291_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_endExclusive_1280_);
lean_inc(v_startInclusive_1279_);
lean_inc(v_str_1278_);
lean_dec(v_s_1269_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1291_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1284_; lean_object* v___x_1286_; 
v___x_1284_ = lean_nat_add(v_startInclusive_1279_, v_val_1274_);
lean_dec(v_val_1274_);
lean_dec(v_startInclusive_1279_);
if (v_isShared_1283_ == 0)
{
lean_ctor_set(v___x_1282_, 1, v___x_1284_);
v___x_1286_ = v___x_1282_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v_str_1278_);
lean_ctor_set(v_reuseFailAlloc_1290_, 1, v___x_1284_);
lean_ctor_set(v_reuseFailAlloc_1290_, 2, v_endExclusive_1280_);
v___x_1286_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
lean_object* v___x_1288_; 
if (v_isShared_1277_ == 0)
{
lean_ctor_set(v___x_1276_, 0, v___x_1286_);
v___x_1288_ = v___x_1276_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1286_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropPrefix_x3f(lean_object* v_00_u03c1_1293_, lean_object* v_s_1294_, lean_object* v_pat_1295_, lean_object* v_inst_1296_){
_start:
{
lean_object* v_skipPrefix_x3f_1297_; lean_object* v___x_1298_; 
v_skipPrefix_x3f_1297_ = lean_ctor_get(v_inst_1296_, 0);
lean_inc_ref(v_skipPrefix_x3f_1297_);
lean_dec_ref(v_inst_1296_);
lean_inc_ref(v_s_1294_);
v___x_1298_ = lean_apply_1(v_skipPrefix_x3f_1297_, v_s_1294_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v___x_1299_; 
lean_dec_ref(v_s_1294_);
v___x_1299_ = lean_box(0);
return v___x_1299_;
}
else
{
lean_object* v_val_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1318_; 
v_val_1300_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1302_ = v___x_1298_;
v_isShared_1303_ = v_isSharedCheck_1318_;
goto v_resetjp_1301_;
}
else
{
lean_inc(v_val_1300_);
lean_dec(v___x_1298_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1318_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
lean_object* v_str_1304_; lean_object* v_startInclusive_1305_; lean_object* v_endExclusive_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1317_; 
v_str_1304_ = lean_ctor_get(v_s_1294_, 0);
v_startInclusive_1305_ = lean_ctor_get(v_s_1294_, 1);
v_endExclusive_1306_ = lean_ctor_get(v_s_1294_, 2);
v_isSharedCheck_1317_ = !lean_is_exclusive(v_s_1294_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1308_ = v_s_1294_;
v_isShared_1309_ = v_isSharedCheck_1317_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_endExclusive_1306_);
lean_inc(v_startInclusive_1305_);
lean_inc(v_str_1304_);
lean_dec(v_s_1294_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1317_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1310_; lean_object* v___x_1312_; 
v___x_1310_ = lean_nat_add(v_startInclusive_1305_, v_val_1300_);
lean_dec(v_val_1300_);
lean_dec(v_startInclusive_1305_);
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 1, v___x_1310_);
v___x_1312_ = v___x_1308_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_str_1304_);
lean_ctor_set(v_reuseFailAlloc_1316_, 1, v___x_1310_);
lean_ctor_set(v_reuseFailAlloc_1316_, 2, v_endExclusive_1306_);
v___x_1312_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
lean_object* v___x_1314_; 
if (v_isShared_1303_ == 0)
{
lean_ctor_set(v___x_1302_, 0, v___x_1312_);
v___x_1314_ = v___x_1302_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v___x_1312_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropPrefix_x3f___boxed(lean_object* v_00_u03c1_1319_, lean_object* v_s_1320_, lean_object* v_pat_1321_, lean_object* v_inst_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l_String_Slice_dropPrefix_x3f(v_00_u03c1_1319_, v_s_1320_, v_pat_1321_, v_inst_1322_);
lean_dec(v_pat_1321_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropPrefix___redArg(lean_object* v_s_1324_, lean_object* v_inst_1325_){
_start:
{
lean_object* v_skipPrefix_x3f_1326_; lean_object* v___x_1327_; 
v_skipPrefix_x3f_1326_ = lean_ctor_get(v_inst_1325_, 0);
lean_inc_ref(v_skipPrefix_x3f_1326_);
lean_dec_ref(v_inst_1325_);
lean_inc_ref(v_s_1324_);
v___x_1327_ = lean_apply_1(v_skipPrefix_x3f_1326_, v_s_1324_);
if (lean_obj_tag(v___x_1327_) == 0)
{
return v_s_1324_;
}
else
{
lean_object* v_val_1328_; lean_object* v_str_1329_; lean_object* v_startInclusive_1330_; lean_object* v_endExclusive_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1339_; 
v_val_1328_ = lean_ctor_get(v___x_1327_, 0);
lean_inc(v_val_1328_);
lean_dec_ref_known(v___x_1327_, 1);
v_str_1329_ = lean_ctor_get(v_s_1324_, 0);
v_startInclusive_1330_ = lean_ctor_get(v_s_1324_, 1);
v_endExclusive_1331_ = lean_ctor_get(v_s_1324_, 2);
v_isSharedCheck_1339_ = !lean_is_exclusive(v_s_1324_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1333_ = v_s_1324_;
v_isShared_1334_ = v_isSharedCheck_1339_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_endExclusive_1331_);
lean_inc(v_startInclusive_1330_);
lean_inc(v_str_1329_);
lean_dec(v_s_1324_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1339_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v___x_1335_; lean_object* v___x_1337_; 
v___x_1335_ = lean_nat_add(v_startInclusive_1330_, v_val_1328_);
lean_dec(v_val_1328_);
lean_dec(v_startInclusive_1330_);
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 1, v___x_1335_);
v___x_1337_ = v___x_1333_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_str_1329_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v___x_1335_);
lean_ctor_set(v_reuseFailAlloc_1338_, 2, v_endExclusive_1331_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropPrefix(lean_object* v_00_u03c1_1340_, lean_object* v_s_1341_, lean_object* v_pat_1342_, lean_object* v_inst_1343_){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = l_String_Slice_dropPrefix___redArg(v_s_1341_, v_inst_1343_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropPrefix___boxed(lean_object* v_00_u03c1_1345_, lean_object* v_s_1346_, lean_object* v_pat_1347_, lean_object* v_inst_1348_){
_start:
{
lean_object* v_res_1349_; 
v_res_1349_ = l_String_Slice_dropPrefix(v_00_u03c1_1345_, v_s_1346_, v_pat_1347_, v_inst_1348_);
lean_dec(v_pat_1347_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___redArg___lam__0(lean_object* v_x_1350_, lean_object* v_x_1351_, lean_object* v_f_1352_, lean_object* v_c_1353_){
_start:
{
lean_object* v___x_1354_; 
v___x_1354_ = lean_apply_1(v_f_1352_, v_c_1353_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___redArg___lam__1(lean_object* v_s_1355_, lean_object* v_inst_1356_, lean_object* v_replacement_1357_, lean_object* v_x1_1358_, lean_object* v_x2_1359_, lean_object* v_x3_1360_){
_start:
{
if (lean_obj_tag(v_x1_1358_) == 0)
{
lean_object* v_startPos_1361_; lean_object* v_endPos_1362_; lean_object* v___x_1363_; lean_object* v_str_1364_; lean_object* v_startInclusive_1365_; lean_object* v_endExclusive_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
lean_dec(v_replacement_1357_);
lean_dec_ref(v_inst_1356_);
v_startPos_1361_ = lean_ctor_get(v_x1_1358_, 0);
v_endPos_1362_ = lean_ctor_get(v_x1_1358_, 1);
v___x_1363_ = l_String_Slice_slice_x21(v_s_1355_, v_startPos_1361_, v_endPos_1362_);
v_str_1364_ = lean_ctor_get(v___x_1363_, 0);
lean_inc_ref(v_str_1364_);
v_startInclusive_1365_ = lean_ctor_get(v___x_1363_, 1);
lean_inc(v_startInclusive_1365_);
v_endExclusive_1366_ = lean_ctor_get(v___x_1363_, 2);
lean_inc(v_endExclusive_1366_);
lean_dec_ref(v___x_1363_);
v___x_1367_ = lean_string_utf8_extract_fast(v_str_1364_, v_startInclusive_1365_, v_endExclusive_1366_);
lean_dec(v_endExclusive_1366_);
lean_dec(v_startInclusive_1365_);
lean_dec_ref(v_str_1364_);
v___x_1368_ = lean_string_append(v_x3_1360_, v___x_1367_);
lean_dec_ref(v___x_1367_);
v___x_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1368_);
return v___x_1369_;
}
else
{
lean_object* v___x_1370_; lean_object* v_str_1371_; lean_object* v_startInclusive_1372_; lean_object* v_endExclusive_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; 
lean_dec_ref(v_s_1355_);
v___x_1370_ = lean_apply_1(v_inst_1356_, v_replacement_1357_);
v_str_1371_ = lean_ctor_get(v___x_1370_, 0);
lean_inc_ref(v_str_1371_);
v_startInclusive_1372_ = lean_ctor_get(v___x_1370_, 1);
lean_inc(v_startInclusive_1372_);
v_endExclusive_1373_ = lean_ctor_get(v___x_1370_, 2);
lean_inc(v_endExclusive_1373_);
lean_dec_ref(v___x_1370_);
v___x_1374_ = lean_string_utf8_extract_fast(v_str_1371_, v_startInclusive_1372_, v_endExclusive_1373_);
lean_dec(v_endExclusive_1373_);
lean_dec(v_startInclusive_1372_);
lean_dec_ref(v_str_1371_);
v___x_1375_ = lean_string_append(v_x3_1360_, v___x_1374_);
lean_dec_ref(v___x_1374_);
v___x_1376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1376_, 0, v___x_1375_);
return v___x_1376_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___redArg___lam__1___boxed(lean_object* v_s_1377_, lean_object* v_inst_1378_, lean_object* v_replacement_1379_, lean_object* v_x1_1380_, lean_object* v_x2_1381_, lean_object* v_x3_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = l_String_Slice_replace___redArg___lam__1(v_s_1377_, v_inst_1378_, v_replacement_1379_, v_x1_1380_, v_x2_1381_, v_x3_1382_);
lean_dec_ref(v_x1_1380_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___redArg(lean_object* v_inst_1386_, lean_object* v_inst_1387_, lean_object* v_s_1388_, lean_object* v_inst_1389_, lean_object* v_replacement_1390_){
_start:
{
lean_object* v___f_1391_; lean_object* v___f_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___f_1391_ = ((lean_object*)(l_String_Slice_replace___redArg___closed__0));
lean_inc_ref_n(v_s_1388_, 2);
v___f_1392_ = lean_alloc_closure((void*)(l_String_Slice_replace___redArg___lam__1___boxed), 6, 3);
lean_closure_set(v___f_1392_, 0, v_s_1388_);
lean_closure_set(v___f_1392_, 1, v_inst_1387_);
lean_closure_set(v___f_1392_, 2, v_replacement_1390_);
v___x_1393_ = ((lean_object*)(l_String_Slice_replace___redArg___closed__1));
v___x_1394_ = lean_apply_1(v_inst_1389_, v_s_1388_);
v___x_1395_ = lean_apply_7(v_inst_1386_, v_s_1388_, v___f_1391_, lean_box(0), lean_box(0), v___x_1394_, v___x_1393_, v___f_1392_);
return v___x_1395_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace(lean_object* v_00_u03c1_1396_, lean_object* v_00_u03c3_1397_, lean_object* v_inst_1398_, lean_object* v_inst_1399_, lean_object* v_00_u03b1_1400_, lean_object* v_inst_1401_, lean_object* v_s_1402_, lean_object* v_pattern_1403_, lean_object* v_inst_1404_, lean_object* v_replacement_1405_){
_start:
{
lean_object* v___x_1406_; 
v___x_1406_ = l_String_Slice_replace___redArg(v_inst_1399_, v_inst_1401_, v_s_1402_, v_inst_1404_, v_replacement_1405_);
return v___x_1406_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_replace___boxed(lean_object* v_00_u03c1_1407_, lean_object* v_00_u03c3_1408_, lean_object* v_inst_1409_, lean_object* v_inst_1410_, lean_object* v_00_u03b1_1411_, lean_object* v_inst_1412_, lean_object* v_s_1413_, lean_object* v_pattern_1414_, lean_object* v_inst_1415_, lean_object* v_replacement_1416_){
_start:
{
lean_object* v_res_1417_; 
v_res_1417_ = l_String_Slice_replace(v_00_u03c1_1407_, v_00_u03c3_1408_, v_inst_1409_, v_inst_1410_, v_00_u03b1_1411_, v_inst_1412_, v_s_1413_, v_pattern_1414_, v_inst_1415_, v_replacement_1416_);
lean_dec(v_pattern_1414_);
lean_dec(v_inst_1409_);
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_drop(lean_object* v_s_1418_, lean_object* v_n_1419_){
_start:
{
lean_object* v_str_1420_; lean_object* v_startInclusive_1421_; lean_object* v_endExclusive_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1432_; 
v_str_1420_ = lean_ctor_get(v_s_1418_, 0);
lean_inc_ref(v_str_1420_);
v_startInclusive_1421_ = lean_ctor_get(v_s_1418_, 1);
lean_inc(v_startInclusive_1421_);
v_endExclusive_1422_ = lean_ctor_get(v_s_1418_, 2);
lean_inc(v_endExclusive_1422_);
v___x_1423_ = lean_unsigned_to_nat(0u);
v___x_1424_ = l_String_Slice_Pos_nextn(v_s_1418_, v___x_1423_, v_n_1419_);
v_isSharedCheck_1432_ = !lean_is_exclusive(v_s_1418_);
if (v_isSharedCheck_1432_ == 0)
{
lean_object* v_unused_1433_; lean_object* v_unused_1434_; lean_object* v_unused_1435_; 
v_unused_1433_ = lean_ctor_get(v_s_1418_, 2);
lean_dec(v_unused_1433_);
v_unused_1434_ = lean_ctor_get(v_s_1418_, 1);
lean_dec(v_unused_1434_);
v_unused_1435_ = lean_ctor_get(v_s_1418_, 0);
lean_dec(v_unused_1435_);
v___x_1426_ = v_s_1418_;
v_isShared_1427_ = v_isSharedCheck_1432_;
goto v_resetjp_1425_;
}
else
{
lean_dec(v_s_1418_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1432_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1428_; lean_object* v___x_1430_; 
v___x_1428_ = lean_nat_add(v_startInclusive_1421_, v___x_1424_);
lean_dec(v___x_1424_);
lean_dec(v_startInclusive_1421_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 1, v___x_1428_);
v___x_1430_ = v___x_1426_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v_str_1420_);
lean_ctor_set(v_reuseFailAlloc_1431_, 1, v___x_1428_);
lean_ctor_set(v_reuseFailAlloc_1431_, 2, v_endExclusive_1422_);
v___x_1430_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
return v___x_1430_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___redArg(lean_object* v_s_1436_, lean_object* v_pos_1437_, lean_object* v_inst_1438_){
_start:
{
lean_object* v_str_1439_; lean_object* v_startInclusive_1440_; lean_object* v_endExclusive_1441_; lean_object* v_skipPrefix_x3f_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
v_str_1439_ = lean_ctor_get(v_s_1436_, 0);
v_startInclusive_1440_ = lean_ctor_get(v_s_1436_, 1);
v_endExclusive_1441_ = lean_ctor_get(v_s_1436_, 2);
v_skipPrefix_x3f_1442_ = lean_ctor_get(v_inst_1438_, 0);
v___x_1443_ = lean_nat_add(v_startInclusive_1440_, v_pos_1437_);
lean_inc(v_endExclusive_1441_);
lean_inc_ref(v_str_1439_);
v___x_1444_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1444_, 0, v_str_1439_);
lean_ctor_set(v___x_1444_, 1, v___x_1443_);
lean_ctor_set(v___x_1444_, 2, v_endExclusive_1441_);
lean_inc_ref(v_skipPrefix_x3f_1442_);
v___x_1445_ = lean_apply_1(v_skipPrefix_x3f_1442_, v___x_1444_);
if (lean_obj_tag(v___x_1445_) == 0)
{
lean_dec_ref(v_inst_1438_);
return v_pos_1437_;
}
else
{
lean_object* v_val_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; uint8_t v___x_1450_; 
v_val_1446_ = lean_ctor_get(v___x_1445_, 0);
lean_inc(v_val_1446_);
lean_dec_ref_known(v___x_1445_, 1);
v___x_1447_ = lean_nat_add(v_pos_1437_, v_val_1446_);
lean_dec(v_val_1446_);
v___x_1448_ = lean_unsigned_to_nat(1u);
v___x_1449_ = lean_nat_add(v_pos_1437_, v___x_1448_);
v___x_1450_ = lean_nat_dec_le(v___x_1449_, v___x_1447_);
lean_dec(v___x_1449_);
if (v___x_1450_ == 0)
{
lean_dec(v___x_1447_);
lean_dec_ref(v_inst_1438_);
return v_pos_1437_;
}
else
{
lean_dec(v_pos_1437_);
v_pos_1437_ = v___x_1447_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___redArg___boxed(lean_object* v_s_1452_, lean_object* v_pos_1453_, lean_object* v_inst_1454_){
_start:
{
lean_object* v_res_1455_; 
v_res_1455_ = l_String_Slice_Pos_skipWhile___redArg(v_s_1452_, v_pos_1453_, v_inst_1454_);
lean_dec_ref(v_s_1452_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile(lean_object* v_00_u03c1_1456_, lean_object* v_s_1457_, lean_object* v_pos_1458_, lean_object* v_pat_1459_, lean_object* v_inst_1460_){
_start:
{
lean_object* v___x_1461_; 
v___x_1461_ = l_String_Slice_Pos_skipWhile___redArg(v_s_1457_, v_pos_1458_, v_inst_1460_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___boxed(lean_object* v_00_u03c1_1462_, lean_object* v_s_1463_, lean_object* v_pos_1464_, lean_object* v_pat_1465_, lean_object* v_inst_1466_){
_start:
{
lean_object* v_res_1467_; 
v_res_1467_ = l_String_Slice_Pos_skipWhile(v_00_u03c1_1462_, v_s_1463_, v_pos_1464_, v_pat_1465_, v_inst_1466_);
lean_dec(v_pat_1465_);
lean_dec_ref(v_s_1463_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_Pos_skipWhile_match__1_splitter___redArg(lean_object* v_x_1468_, lean_object* v_h__1_1469_, lean_object* v_h__2_1470_){
_start:
{
if (lean_obj_tag(v_x_1468_) == 0)
{
lean_object* v___x_1471_; lean_object* v___x_1472_; 
lean_dec(v_h__1_1469_);
v___x_1471_ = lean_box(0);
v___x_1472_ = lean_apply_1(v_h__2_1470_, v___x_1471_);
return v___x_1472_;
}
else
{
lean_object* v_val_1473_; lean_object* v___x_1474_; 
lean_dec(v_h__2_1470_);
v_val_1473_ = lean_ctor_get(v_x_1468_, 0);
lean_inc(v_val_1473_);
lean_dec_ref_known(v_x_1468_, 1);
v___x_1474_ = lean_apply_1(v_h__1_1469_, v_val_1473_);
return v___x_1474_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_Pos_skipWhile_match__1_splitter(lean_object* v_s_1475_, lean_object* v_motive_1476_, lean_object* v_x_1477_, lean_object* v_h__1_1478_, lean_object* v_h__2_1479_){
_start:
{
if (lean_obj_tag(v_x_1477_) == 0)
{
lean_object* v___x_1480_; lean_object* v___x_1481_; 
lean_dec(v_h__1_1478_);
v___x_1480_ = lean_box(0);
v___x_1481_ = lean_apply_1(v_h__2_1479_, v___x_1480_);
return v___x_1481_;
}
else
{
lean_object* v_val_1482_; lean_object* v___x_1483_; 
lean_dec(v_h__2_1479_);
v_val_1482_ = lean_ctor_get(v_x_1477_, 0);
lean_inc(v_val_1482_);
lean_dec_ref_known(v_x_1477_, 1);
v___x_1483_ = lean_apply_1(v_h__1_1478_, v_val_1482_);
return v___x_1483_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_Pos_skipWhile_match__1_splitter___boxed(lean_object* v_s_1484_, lean_object* v_motive_1485_, lean_object* v_x_1486_, lean_object* v_h__1_1487_, lean_object* v_h__2_1488_){
_start:
{
lean_object* v_res_1489_; 
v_res_1489_ = l___private_Init_Data_String_Slice_0__String_Slice_Pos_skipWhile_match__1_splitter(v_s_1484_, v_motive_1485_, v_x_1486_, v_h__1_1487_, v_h__2_1488_);
lean_dec_ref(v_s_1484_);
return v_res_1489_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_skipPrefixWhile___redArg(lean_object* v_s_1490_, lean_object* v_inst_1491_){
_start:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1492_ = lean_unsigned_to_nat(0u);
v___x_1493_ = l_String_Slice_Pos_skipWhile___redArg(v_s_1490_, v___x_1492_, v_inst_1491_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_skipPrefixWhile___redArg___boxed(lean_object* v_s_1494_, lean_object* v_inst_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_String_Slice_skipPrefixWhile___redArg(v_s_1494_, v_inst_1495_);
lean_dec_ref(v_s_1494_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_skipPrefixWhile(lean_object* v_00_u03c1_1497_, lean_object* v_s_1498_, lean_object* v_pat_1499_, lean_object* v_inst_1500_){
_start:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1501_ = lean_unsigned_to_nat(0u);
v___x_1502_ = l_String_Slice_Pos_skipWhile___redArg(v_s_1498_, v___x_1501_, v_inst_1500_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_skipPrefixWhile___boxed(lean_object* v_00_u03c1_1503_, lean_object* v_s_1504_, lean_object* v_pat_1505_, lean_object* v_inst_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_String_Slice_skipPrefixWhile(v_00_u03c1_1503_, v_s_1504_, v_pat_1505_, v_inst_1506_);
lean_dec(v_pat_1505_);
lean_dec_ref(v_s_1504_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropWhile___redArg(lean_object* v_s_1508_, lean_object* v_inst_1509_){
_start:
{
lean_object* v_str_1510_; lean_object* v_startInclusive_1511_; lean_object* v_endExclusive_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1522_; 
v_str_1510_ = lean_ctor_get(v_s_1508_, 0);
lean_inc_ref(v_str_1510_);
v_startInclusive_1511_ = lean_ctor_get(v_s_1508_, 1);
lean_inc(v_startInclusive_1511_);
v_endExclusive_1512_ = lean_ctor_get(v_s_1508_, 2);
lean_inc(v_endExclusive_1512_);
v___x_1513_ = lean_unsigned_to_nat(0u);
v___x_1514_ = l_String_Slice_Pos_skipWhile___redArg(v_s_1508_, v___x_1513_, v_inst_1509_);
v_isSharedCheck_1522_ = !lean_is_exclusive(v_s_1508_);
if (v_isSharedCheck_1522_ == 0)
{
lean_object* v_unused_1523_; lean_object* v_unused_1524_; lean_object* v_unused_1525_; 
v_unused_1523_ = lean_ctor_get(v_s_1508_, 2);
lean_dec(v_unused_1523_);
v_unused_1524_ = lean_ctor_get(v_s_1508_, 1);
lean_dec(v_unused_1524_);
v_unused_1525_ = lean_ctor_get(v_s_1508_, 0);
lean_dec(v_unused_1525_);
v___x_1516_ = v_s_1508_;
v_isShared_1517_ = v_isSharedCheck_1522_;
goto v_resetjp_1515_;
}
else
{
lean_dec(v_s_1508_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1522_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1518_; lean_object* v___x_1520_; 
v___x_1518_ = lean_nat_add(v_startInclusive_1511_, v___x_1514_);
lean_dec(v___x_1514_);
lean_dec(v_startInclusive_1511_);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 1, v___x_1518_);
v___x_1520_ = v___x_1516_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v_str_1510_);
lean_ctor_set(v_reuseFailAlloc_1521_, 1, v___x_1518_);
lean_ctor_set(v_reuseFailAlloc_1521_, 2, v_endExclusive_1512_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropWhile(lean_object* v_00_u03c1_1526_, lean_object* v_s_1527_, lean_object* v_pat_1528_, lean_object* v_inst_1529_){
_start:
{
lean_object* v_str_1530_; lean_object* v_startInclusive_1531_; lean_object* v_endExclusive_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1542_; 
v_str_1530_ = lean_ctor_get(v_s_1527_, 0);
lean_inc_ref(v_str_1530_);
v_startInclusive_1531_ = lean_ctor_get(v_s_1527_, 1);
lean_inc(v_startInclusive_1531_);
v_endExclusive_1532_ = lean_ctor_get(v_s_1527_, 2);
lean_inc(v_endExclusive_1532_);
v___x_1533_ = lean_unsigned_to_nat(0u);
v___x_1534_ = l_String_Slice_Pos_skipWhile___redArg(v_s_1527_, v___x_1533_, v_inst_1529_);
v_isSharedCheck_1542_ = !lean_is_exclusive(v_s_1527_);
if (v_isSharedCheck_1542_ == 0)
{
lean_object* v_unused_1543_; lean_object* v_unused_1544_; lean_object* v_unused_1545_; 
v_unused_1543_ = lean_ctor_get(v_s_1527_, 2);
lean_dec(v_unused_1543_);
v_unused_1544_ = lean_ctor_get(v_s_1527_, 1);
lean_dec(v_unused_1544_);
v_unused_1545_ = lean_ctor_get(v_s_1527_, 0);
lean_dec(v_unused_1545_);
v___x_1536_ = v_s_1527_;
v_isShared_1537_ = v_isSharedCheck_1542_;
goto v_resetjp_1535_;
}
else
{
lean_dec(v_s_1527_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1542_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1538_; lean_object* v___x_1540_; 
v___x_1538_ = lean_nat_add(v_startInclusive_1531_, v___x_1534_);
lean_dec(v___x_1534_);
lean_dec(v_startInclusive_1531_);
if (v_isShared_1537_ == 0)
{
lean_ctor_set(v___x_1536_, 1, v___x_1538_);
v___x_1540_ = v___x_1536_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_str_1530_);
lean_ctor_set(v_reuseFailAlloc_1541_, 1, v___x_1538_);
lean_ctor_set(v_reuseFailAlloc_1541_, 2, v_endExclusive_1532_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropWhile___boxed(lean_object* v_00_u03c1_1546_, lean_object* v_s_1547_, lean_object* v_pat_1548_, lean_object* v_inst_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l_String_Slice_dropWhile(v_00_u03c1_1546_, v_s_1547_, v_pat_1548_, v_inst_1549_);
lean_dec(v_pat_1548_);
return v_res_1550_;
}
}
static lean_object* _init_l_String_Slice_trimAsciiStart___closed__1(void){
_start:
{
lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1552_ = ((lean_object*)(l_String_Slice_trimAsciiStart___closed__0));
v___x_1553_ = l_String_Slice_Pattern_CharPred_instForwardPatternForallCharBool(v___x_1552_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_trimAsciiStart(lean_object* v_s_1554_){
_start:
{
lean_object* v___x_1555_; lean_object* v_str_1556_; lean_object* v_startInclusive_1557_; lean_object* v_endExclusive_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1568_; 
v___x_1555_ = lean_obj_once(&l_String_Slice_trimAsciiStart___closed__1, &l_String_Slice_trimAsciiStart___closed__1_once, _init_l_String_Slice_trimAsciiStart___closed__1);
v_str_1556_ = lean_ctor_get(v_s_1554_, 0);
lean_inc_ref(v_str_1556_);
v_startInclusive_1557_ = lean_ctor_get(v_s_1554_, 1);
lean_inc(v_startInclusive_1557_);
v_endExclusive_1558_ = lean_ctor_get(v_s_1554_, 2);
lean_inc(v_endExclusive_1558_);
v___x_1559_ = lean_unsigned_to_nat(0u);
v___x_1560_ = l_String_Slice_Pos_skipWhile___redArg(v_s_1554_, v___x_1559_, v___x_1555_);
v_isSharedCheck_1568_ = !lean_is_exclusive(v_s_1554_);
if (v_isSharedCheck_1568_ == 0)
{
lean_object* v_unused_1569_; lean_object* v_unused_1570_; lean_object* v_unused_1571_; 
v_unused_1569_ = lean_ctor_get(v_s_1554_, 2);
lean_dec(v_unused_1569_);
v_unused_1570_ = lean_ctor_get(v_s_1554_, 1);
lean_dec(v_unused_1570_);
v_unused_1571_ = lean_ctor_get(v_s_1554_, 0);
lean_dec(v_unused_1571_);
v___x_1562_ = v_s_1554_;
v_isShared_1563_ = v_isSharedCheck_1568_;
goto v_resetjp_1561_;
}
else
{
lean_dec(v_s_1554_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1568_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___x_1564_; lean_object* v___x_1566_; 
v___x_1564_ = lean_nat_add(v_startInclusive_1557_, v___x_1560_);
lean_dec(v___x_1560_);
lean_dec(v_startInclusive_1557_);
if (v_isShared_1563_ == 0)
{
lean_ctor_set(v___x_1562_, 1, v___x_1564_);
v___x_1566_ = v___x_1562_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v_str_1556_);
lean_ctor_set(v_reuseFailAlloc_1567_, 1, v___x_1564_);
lean_ctor_set(v_reuseFailAlloc_1567_, 2, v_endExclusive_1558_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
return v___x_1566_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_take(lean_object* v_s_1572_, lean_object* v_n_1573_){
_start:
{
lean_object* v_str_1574_; lean_object* v_startInclusive_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1585_; 
v_str_1574_ = lean_ctor_get(v_s_1572_, 0);
lean_inc_ref(v_str_1574_);
v_startInclusive_1575_ = lean_ctor_get(v_s_1572_, 1);
lean_inc(v_startInclusive_1575_);
v___x_1576_ = lean_unsigned_to_nat(0u);
v___x_1577_ = l_String_Slice_Pos_nextn(v_s_1572_, v___x_1576_, v_n_1573_);
v_isSharedCheck_1585_ = !lean_is_exclusive(v_s_1572_);
if (v_isSharedCheck_1585_ == 0)
{
lean_object* v_unused_1586_; lean_object* v_unused_1587_; lean_object* v_unused_1588_; 
v_unused_1586_ = lean_ctor_get(v_s_1572_, 2);
lean_dec(v_unused_1586_);
v_unused_1587_ = lean_ctor_get(v_s_1572_, 1);
lean_dec(v_unused_1587_);
v_unused_1588_ = lean_ctor_get(v_s_1572_, 0);
lean_dec(v_unused_1588_);
v___x_1579_ = v_s_1572_;
v_isShared_1580_ = v_isSharedCheck_1585_;
goto v_resetjp_1578_;
}
else
{
lean_dec(v_s_1572_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1585_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1581_; lean_object* v___x_1583_; 
v___x_1581_ = lean_nat_add(v_startInclusive_1575_, v___x_1577_);
lean_dec(v___x_1577_);
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 2, v___x_1581_);
v___x_1583_ = v___x_1579_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_str_1574_);
lean_ctor_set(v_reuseFailAlloc_1584_, 1, v_startInclusive_1575_);
lean_ctor_set(v_reuseFailAlloc_1584_, 2, v___x_1581_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_takeWhile___redArg(lean_object* v_s_1589_, lean_object* v_inst_1590_){
_start:
{
lean_object* v_str_1591_; lean_object* v_startInclusive_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1602_; 
v_str_1591_ = lean_ctor_get(v_s_1589_, 0);
lean_inc_ref(v_str_1591_);
v_startInclusive_1592_ = lean_ctor_get(v_s_1589_, 1);
lean_inc(v_startInclusive_1592_);
v___x_1593_ = lean_unsigned_to_nat(0u);
v___x_1594_ = l_String_Slice_Pos_skipWhile___redArg(v_s_1589_, v___x_1593_, v_inst_1590_);
v_isSharedCheck_1602_ = !lean_is_exclusive(v_s_1589_);
if (v_isSharedCheck_1602_ == 0)
{
lean_object* v_unused_1603_; lean_object* v_unused_1604_; lean_object* v_unused_1605_; 
v_unused_1603_ = lean_ctor_get(v_s_1589_, 2);
lean_dec(v_unused_1603_);
v_unused_1604_ = lean_ctor_get(v_s_1589_, 1);
lean_dec(v_unused_1604_);
v_unused_1605_ = lean_ctor_get(v_s_1589_, 0);
lean_dec(v_unused_1605_);
v___x_1596_ = v_s_1589_;
v_isShared_1597_ = v_isSharedCheck_1602_;
goto v_resetjp_1595_;
}
else
{
lean_dec(v_s_1589_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1602_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v___x_1598_; lean_object* v___x_1600_; 
v___x_1598_ = lean_nat_add(v_startInclusive_1592_, v___x_1594_);
lean_dec(v___x_1594_);
if (v_isShared_1597_ == 0)
{
lean_ctor_set(v___x_1596_, 2, v___x_1598_);
v___x_1600_ = v___x_1596_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v_str_1591_);
lean_ctor_set(v_reuseFailAlloc_1601_, 1, v_startInclusive_1592_);
lean_ctor_set(v_reuseFailAlloc_1601_, 2, v___x_1598_);
v___x_1600_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
return v___x_1600_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_takeWhile(lean_object* v_00_u03c1_1606_, lean_object* v_s_1607_, lean_object* v_pat_1608_, lean_object* v_inst_1609_){
_start:
{
lean_object* v_str_1610_; lean_object* v_startInclusive_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1621_; 
v_str_1610_ = lean_ctor_get(v_s_1607_, 0);
lean_inc_ref(v_str_1610_);
v_startInclusive_1611_ = lean_ctor_get(v_s_1607_, 1);
lean_inc(v_startInclusive_1611_);
v___x_1612_ = lean_unsigned_to_nat(0u);
v___x_1613_ = l_String_Slice_Pos_skipWhile___redArg(v_s_1607_, v___x_1612_, v_inst_1609_);
v_isSharedCheck_1621_ = !lean_is_exclusive(v_s_1607_);
if (v_isSharedCheck_1621_ == 0)
{
lean_object* v_unused_1622_; lean_object* v_unused_1623_; lean_object* v_unused_1624_; 
v_unused_1622_ = lean_ctor_get(v_s_1607_, 2);
lean_dec(v_unused_1622_);
v_unused_1623_ = lean_ctor_get(v_s_1607_, 1);
lean_dec(v_unused_1623_);
v_unused_1624_ = lean_ctor_get(v_s_1607_, 0);
lean_dec(v_unused_1624_);
v___x_1615_ = v_s_1607_;
v_isShared_1616_ = v_isSharedCheck_1621_;
goto v_resetjp_1614_;
}
else
{
lean_dec(v_s_1607_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1621_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1617_; lean_object* v___x_1619_; 
v___x_1617_ = lean_nat_add(v_startInclusive_1611_, v___x_1613_);
lean_dec(v___x_1613_);
if (v_isShared_1616_ == 0)
{
lean_ctor_set(v___x_1615_, 2, v___x_1617_);
v___x_1619_ = v___x_1615_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_str_1610_);
lean_ctor_set(v_reuseFailAlloc_1620_, 1, v_startInclusive_1611_);
lean_ctor_set(v_reuseFailAlloc_1620_, 2, v___x_1617_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_takeWhile___boxed(lean_object* v_00_u03c1_1625_, lean_object* v_s_1626_, lean_object* v_pat_1627_, lean_object* v_inst_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l_String_Slice_takeWhile(v_00_u03c1_1625_, v_s_1626_, v_pat_1627_, v_inst_1628_);
lean_dec(v_pat_1627_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_find_x3f___redArg___lam__1(lean_object* v___x_1630_, lean_object* v_x1_1631_, lean_object* v_x2_1632_, lean_object* v_x3_1633_){
_start:
{
if (lean_obj_tag(v_x1_1631_) == 0)
{
lean_object* v___x_1634_; 
v___x_1634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1630_);
return v___x_1634_;
}
else
{
lean_object* v_startPos_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; 
lean_dec(v___x_1630_);
v_startPos_1635_ = lean_ctor_get(v_x1_1631_, 0);
lean_inc(v_startPos_1635_);
v___x_1636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1636_, 0, v_startPos_1635_);
v___x_1637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1636_);
return v___x_1637_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_find_x3f___redArg___lam__1___boxed(lean_object* v___x_1638_, lean_object* v_x1_1639_, lean_object* v_x2_1640_, lean_object* v_x3_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l_String_Slice_find_x3f___redArg___lam__1(v___x_1638_, v_x1_1639_, v_x2_1640_, v_x3_1641_);
lean_dec(v_x3_1641_);
lean_dec_ref(v_x1_1639_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_find_x3f___redArg(lean_object* v_inst_1645_, lean_object* v_s_1646_, lean_object* v_inst_1647_){
_start:
{
lean_object* v___f_1648_; lean_object* v_searcher_1649_; lean_object* v___x_1650_; lean_object* v___f_1651_; lean_object* v___x_1652_; 
v___f_1648_ = ((lean_object*)(l_String_Slice_replace___redArg___closed__0));
lean_inc_ref(v_s_1646_);
v_searcher_1649_ = lean_apply_1(v_inst_1647_, v_s_1646_);
v___x_1650_ = lean_box(0);
v___f_1651_ = ((lean_object*)(l_String_Slice_find_x3f___redArg___closed__0));
v___x_1652_ = lean_apply_7(v_inst_1645_, v_s_1646_, v___f_1648_, lean_box(0), lean_box(0), v_searcher_1649_, v___x_1650_, v___f_1651_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_find_x3f(lean_object* v_00_u03c1_1653_, lean_object* v_00_u03c3_1654_, lean_object* v_inst_1655_, lean_object* v_inst_1656_, lean_object* v_s_1657_, lean_object* v_pat_1658_, lean_object* v_inst_1659_){
_start:
{
lean_object* v___f_1660_; lean_object* v_searcher_1661_; lean_object* v___x_1662_; lean_object* v___f_1663_; lean_object* v___x_1664_; 
v___f_1660_ = ((lean_object*)(l_String_Slice_replace___redArg___closed__0));
lean_inc_ref(v_s_1657_);
v_searcher_1661_ = lean_apply_1(v_inst_1659_, v_s_1657_);
v___x_1662_ = lean_box(0);
v___f_1663_ = ((lean_object*)(l_String_Slice_find_x3f___redArg___closed__0));
v___x_1664_ = lean_apply_7(v_inst_1656_, v_s_1657_, v___f_1660_, lean_box(0), lean_box(0), v_searcher_1661_, v___x_1662_, v___f_1663_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_find_x3f___boxed(lean_object* v_00_u03c1_1665_, lean_object* v_00_u03c3_1666_, lean_object* v_inst_1667_, lean_object* v_inst_1668_, lean_object* v_s_1669_, lean_object* v_pat_1670_, lean_object* v_inst_1671_){
_start:
{
lean_object* v_res_1672_; 
v_res_1672_ = l_String_Slice_find_x3f(v_00_u03c1_1665_, v_00_u03c3_1666_, v_inst_1667_, v_inst_1668_, v_s_1669_, v_pat_1670_, v_inst_1671_);
lean_dec(v_pat_1670_);
lean_dec(v_inst_1667_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_find___redArg(lean_object* v_inst_1673_, lean_object* v_s_1674_, lean_object* v_inst_1675_){
_start:
{
lean_object* v___f_1676_; lean_object* v_searcher_1677_; lean_object* v___x_1678_; lean_object* v___f_1679_; lean_object* v___x_1680_; 
v___f_1676_ = ((lean_object*)(l_String_Slice_replace___redArg___closed__0));
lean_inc_ref_n(v_s_1674_, 2);
v_searcher_1677_ = lean_apply_1(v_inst_1675_, v_s_1674_);
v___x_1678_ = lean_box(0);
v___f_1679_ = ((lean_object*)(l_String_Slice_find_x3f___redArg___closed__0));
v___x_1680_ = lean_apply_7(v_inst_1673_, v_s_1674_, v___f_1676_, lean_box(0), lean_box(0), v_searcher_1677_, v___x_1678_, v___f_1679_);
if (lean_obj_tag(v___x_1680_) == 0)
{
lean_object* v_startInclusive_1681_; lean_object* v_endExclusive_1682_; lean_object* v___x_1683_; 
v_startInclusive_1681_ = lean_ctor_get(v_s_1674_, 1);
lean_inc(v_startInclusive_1681_);
v_endExclusive_1682_ = lean_ctor_get(v_s_1674_, 2);
lean_inc(v_endExclusive_1682_);
lean_dec_ref(v_s_1674_);
v___x_1683_ = lean_nat_sub(v_endExclusive_1682_, v_startInclusive_1681_);
lean_dec(v_startInclusive_1681_);
lean_dec(v_endExclusive_1682_);
return v___x_1683_;
}
else
{
lean_object* v_val_1684_; 
lean_dec_ref(v_s_1674_);
v_val_1684_ = lean_ctor_get(v___x_1680_, 0);
lean_inc(v_val_1684_);
lean_dec_ref_known(v___x_1680_, 1);
return v_val_1684_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_find(lean_object* v_00_u03c1_1685_, lean_object* v_00_u03c3_1686_, lean_object* v_inst_1687_, lean_object* v_inst_1688_, lean_object* v_s_1689_, lean_object* v_pat_1690_, lean_object* v_inst_1691_){
_start:
{
lean_object* v___f_1692_; lean_object* v_searcher_1693_; lean_object* v___x_1694_; lean_object* v___f_1695_; lean_object* v___x_1696_; 
v___f_1692_ = ((lean_object*)(l_String_Slice_replace___redArg___closed__0));
lean_inc_ref_n(v_s_1689_, 2);
v_searcher_1693_ = lean_apply_1(v_inst_1691_, v_s_1689_);
v___x_1694_ = lean_box(0);
v___f_1695_ = ((lean_object*)(l_String_Slice_find_x3f___redArg___closed__0));
v___x_1696_ = lean_apply_7(v_inst_1688_, v_s_1689_, v___f_1692_, lean_box(0), lean_box(0), v_searcher_1693_, v___x_1694_, v___f_1695_);
if (lean_obj_tag(v___x_1696_) == 0)
{
lean_object* v_startInclusive_1697_; lean_object* v_endExclusive_1698_; lean_object* v___x_1699_; 
v_startInclusive_1697_ = lean_ctor_get(v_s_1689_, 1);
lean_inc(v_startInclusive_1697_);
v_endExclusive_1698_ = lean_ctor_get(v_s_1689_, 2);
lean_inc(v_endExclusive_1698_);
lean_dec_ref(v_s_1689_);
v___x_1699_ = lean_nat_sub(v_endExclusive_1698_, v_startInclusive_1697_);
lean_dec(v_startInclusive_1697_);
lean_dec(v_endExclusive_1698_);
return v___x_1699_;
}
else
{
lean_object* v_val_1700_; 
lean_dec_ref(v_s_1689_);
v_val_1700_ = lean_ctor_get(v___x_1696_, 0);
lean_inc(v_val_1700_);
lean_dec_ref_known(v___x_1696_, 1);
return v_val_1700_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_find___boxed(lean_object* v_00_u03c1_1701_, lean_object* v_00_u03c3_1702_, lean_object* v_inst_1703_, lean_object* v_inst_1704_, lean_object* v_s_1705_, lean_object* v_pat_1706_, lean_object* v_inst_1707_){
_start:
{
lean_object* v_res_1708_; 
v_res_1708_ = l_String_Slice_find(v_00_u03c1_1701_, v_00_u03c3_1702_, v_inst_1703_, v_inst_1704_, v_s_1705_, v_pat_1706_, v_inst_1707_);
lean_dec(v_pat_1706_);
lean_dec(v_inst_1703_);
return v_res_1708_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___redArg___lam__1(uint8_t v___x_1712_, lean_object* v_x1_1713_, lean_object* v_x2_1714_, uint8_t v_x3_1715_){
_start:
{
if (lean_obj_tag(v_x1_1713_) == 1)
{
lean_object* v___x_1716_; 
v___x_1716_ = ((lean_object*)(l_String_Slice_contains___redArg___lam__1___closed__0));
return v___x_1716_;
}
else
{
lean_object* v___x_1717_; lean_object* v___x_1718_; 
v___x_1717_ = lean_box(v___x_1712_);
v___x_1718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1718_, 0, v___x_1717_);
return v___x_1718_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___redArg___lam__1___boxed(lean_object* v___x_1719_, lean_object* v_x1_1720_, lean_object* v_x2_1721_, lean_object* v_x3_1722_){
_start:
{
uint8_t v___x_82__boxed_1723_; uint8_t v_x3_85__boxed_1724_; lean_object* v_res_1725_; 
v___x_82__boxed_1723_ = lean_unbox(v___x_1719_);
v_x3_85__boxed_1724_ = lean_unbox(v_x3_1722_);
v_res_1725_ = l_String_Slice_contains___redArg___lam__1(v___x_82__boxed_1723_, v_x1_1720_, v_x2_1721_, v_x3_85__boxed_1724_);
lean_dec_ref(v_x1_1720_);
return v_res_1725_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___redArg(lean_object* v_inst_1729_, lean_object* v_s_1730_, lean_object* v_inst_1731_){
_start:
{
lean_object* v___f_1732_; lean_object* v_searcher_1733_; uint8_t v___x_1734_; lean_object* v___f_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; uint8_t v___x_1738_; 
v___f_1732_ = ((lean_object*)(l_String_Slice_replace___redArg___closed__0));
lean_inc_ref(v_s_1730_);
v_searcher_1733_ = lean_apply_1(v_inst_1731_, v_s_1730_);
v___x_1734_ = 0;
v___f_1735_ = ((lean_object*)(l_String_Slice_contains___redArg___closed__0));
v___x_1736_ = lean_box(v___x_1734_);
v___x_1737_ = lean_apply_7(v_inst_1729_, v_s_1730_, v___f_1732_, lean_box(0), lean_box(0), v_searcher_1733_, v___x_1736_, v___f_1735_);
v___x_1738_ = lean_unbox(v___x_1737_);
return v___x_1738_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___redArg___boxed(lean_object* v_inst_1739_, lean_object* v_s_1740_, lean_object* v_inst_1741_){
_start:
{
uint8_t v_res_1742_; lean_object* v_r_1743_; 
v_res_1742_ = l_String_Slice_contains___redArg(v_inst_1739_, v_s_1740_, v_inst_1741_);
v_r_1743_ = lean_box(v_res_1742_);
return v_r_1743_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains(lean_object* v_00_u03c1_1744_, lean_object* v_00_u03c3_1745_, lean_object* v_inst_1746_, lean_object* v_inst_1747_, lean_object* v_s_1748_, lean_object* v_pat_1749_, lean_object* v_inst_1750_){
_start:
{
uint8_t v___x_1751_; 
v___x_1751_ = l_String_Slice_contains___redArg(v_inst_1747_, v_s_1748_, v_inst_1750_);
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___boxed(lean_object* v_00_u03c1_1752_, lean_object* v_00_u03c3_1753_, lean_object* v_inst_1754_, lean_object* v_inst_1755_, lean_object* v_s_1756_, lean_object* v_pat_1757_, lean_object* v_inst_1758_){
_start:
{
uint8_t v_res_1759_; lean_object* v_r_1760_; 
v_res_1759_ = l_String_Slice_contains(v_00_u03c1_1752_, v_00_u03c3_1753_, v_inst_1754_, v_inst_1755_, v_s_1756_, v_pat_1757_, v_inst_1758_);
lean_dec(v_pat_1757_);
lean_dec(v_inst_1754_);
v_r_1760_ = lean_box(v_res_1759_);
return v_r_1760_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_any___redArg(lean_object* v_inst_1761_, lean_object* v_s_1762_, lean_object* v_inst_1763_){
_start:
{
uint8_t v___x_1764_; 
v___x_1764_ = l_String_Slice_contains___redArg(v_inst_1761_, v_s_1762_, v_inst_1763_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_any___redArg___boxed(lean_object* v_inst_1765_, lean_object* v_s_1766_, lean_object* v_inst_1767_){
_start:
{
uint8_t v_res_1768_; lean_object* v_r_1769_; 
v_res_1768_ = l_String_Slice_any___redArg(v_inst_1765_, v_s_1766_, v_inst_1767_);
v_r_1769_ = lean_box(v_res_1768_);
return v_r_1769_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_any(lean_object* v_00_u03c1_1770_, lean_object* v_00_u03c3_1771_, lean_object* v_inst_1772_, lean_object* v_inst_1773_, lean_object* v_s_1774_, lean_object* v_pat_1775_, lean_object* v_inst_1776_){
_start:
{
uint8_t v___x_1777_; 
v___x_1777_ = l_String_Slice_contains___redArg(v_inst_1773_, v_s_1774_, v_inst_1776_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_any___boxed(lean_object* v_00_u03c1_1778_, lean_object* v_00_u03c3_1779_, lean_object* v_inst_1780_, lean_object* v_inst_1781_, lean_object* v_s_1782_, lean_object* v_pat_1783_, lean_object* v_inst_1784_){
_start:
{
uint8_t v_res_1785_; lean_object* v_r_1786_; 
v_res_1785_ = l_String_Slice_any(v_00_u03c1_1778_, v_00_u03c3_1779_, v_inst_1780_, v_inst_1781_, v_s_1782_, v_pat_1783_, v_inst_1784_);
lean_dec(v_pat_1783_);
lean_dec(v_inst_1780_);
v_r_1786_ = lean_box(v_res_1785_);
return v_r_1786_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_all___redArg(lean_object* v_s_1787_, lean_object* v_inst_1788_){
_start:
{
lean_object* v_startInclusive_1789_; lean_object* v_endExclusive_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; uint8_t v_decide_1794_; 
v_startInclusive_1789_ = lean_ctor_get(v_s_1787_, 1);
v_endExclusive_1790_ = lean_ctor_get(v_s_1787_, 2);
v___x_1791_ = lean_unsigned_to_nat(0u);
v___x_1792_ = l_String_Slice_Pos_skipWhile___redArg(v_s_1787_, v___x_1791_, v_inst_1788_);
v___x_1793_ = lean_nat_sub(v_endExclusive_1790_, v_startInclusive_1789_);
v_decide_1794_ = lean_nat_dec_eq(v___x_1792_, v___x_1793_);
lean_dec(v___x_1793_);
lean_dec(v___x_1792_);
return v_decide_1794_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_all___redArg___boxed(lean_object* v_s_1795_, lean_object* v_inst_1796_){
_start:
{
uint8_t v_res_1797_; lean_object* v_r_1798_; 
v_res_1797_ = l_String_Slice_all___redArg(v_s_1795_, v_inst_1796_);
lean_dec_ref(v_s_1795_);
v_r_1798_ = lean_box(v_res_1797_);
return v_r_1798_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_all(lean_object* v_00_u03c1_1799_, lean_object* v_s_1800_, lean_object* v_pat_1801_, lean_object* v_inst_1802_){
_start:
{
lean_object* v_startInclusive_1803_; lean_object* v_endExclusive_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; uint8_t v_decide_1808_; 
v_startInclusive_1803_ = lean_ctor_get(v_s_1800_, 1);
v_endExclusive_1804_ = lean_ctor_get(v_s_1800_, 2);
v___x_1805_ = lean_unsigned_to_nat(0u);
v___x_1806_ = l_String_Slice_Pos_skipWhile___redArg(v_s_1800_, v___x_1805_, v_inst_1802_);
v___x_1807_ = lean_nat_sub(v_endExclusive_1804_, v_startInclusive_1803_);
v_decide_1808_ = lean_nat_dec_eq(v___x_1806_, v___x_1807_);
lean_dec(v___x_1807_);
lean_dec(v___x_1806_);
return v_decide_1808_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_all___boxed(lean_object* v_00_u03c1_1809_, lean_object* v_s_1810_, lean_object* v_pat_1811_, lean_object* v_inst_1812_){
_start:
{
uint8_t v_res_1813_; lean_object* v_r_1814_; 
v_res_1813_ = l_String_Slice_all(v_00_u03c1_1809_, v_s_1810_, v_pat_1811_, v_inst_1812_);
lean_dec(v_pat_1811_);
lean_dec_ref(v_s_1810_);
v_r_1814_ = lean_box(v_res_1813_);
return v_r_1814_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_endsWith___redArg(lean_object* v_s_1815_, lean_object* v_inst_1816_){
_start:
{
lean_object* v_endsWith_1817_; lean_object* v___x_1818_; uint8_t v___x_1819_; 
v_endsWith_1817_ = lean_ctor_get(v_inst_1816_, 2);
lean_inc_ref(v_endsWith_1817_);
lean_dec_ref(v_inst_1816_);
v___x_1818_ = lean_apply_1(v_endsWith_1817_, v_s_1815_);
v___x_1819_ = lean_unbox(v___x_1818_);
return v___x_1819_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_endsWith___redArg___boxed(lean_object* v_s_1820_, lean_object* v_inst_1821_){
_start:
{
uint8_t v_res_1822_; lean_object* v_r_1823_; 
v_res_1822_ = l_String_Slice_endsWith___redArg(v_s_1820_, v_inst_1821_);
v_r_1823_ = lean_box(v_res_1822_);
return v_r_1823_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_endsWith(lean_object* v_00_u03c1_1824_, lean_object* v_s_1825_, lean_object* v_pat_1826_, lean_object* v_inst_1827_){
_start:
{
lean_object* v_endsWith_1828_; lean_object* v___x_1829_; uint8_t v___x_1830_; 
v_endsWith_1828_ = lean_ctor_get(v_inst_1827_, 2);
lean_inc_ref(v_endsWith_1828_);
lean_dec_ref(v_inst_1827_);
v___x_1829_ = lean_apply_1(v_endsWith_1828_, v_s_1825_);
v___x_1830_ = lean_unbox(v___x_1829_);
return v___x_1830_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_endsWith___boxed(lean_object* v_00_u03c1_1831_, lean_object* v_s_1832_, lean_object* v_pat_1833_, lean_object* v_inst_1834_){
_start:
{
uint8_t v_res_1835_; lean_object* v_r_1836_; 
v_res_1835_ = l_String_Slice_endsWith(v_00_u03c1_1831_, v_s_1832_, v_pat_1833_, v_inst_1834_);
lean_dec(v_pat_1833_);
v_r_1836_ = lean_box(v_res_1835_);
return v_r_1836_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_ctorIdx___impl___redArg(lean_object* v_x_1837_){
_start:
{
lean_object* v___x_1838_; 
v___x_1838_ = lean_obj_tag_nat(v_x_1837_);
return v___x_1838_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_ctorIdx___impl___redArg___boxed(lean_object* v_x_1839_){
_start:
{
lean_object* v_res_1840_; 
v_res_1840_ = l_String_Slice_RevSplitIterator_ctorIdx___impl___redArg(v_x_1839_);
lean_dec(v_x_1839_);
return v_res_1840_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_ctorIdx___impl(lean_object* v_00_u03c3_1841_, lean_object* v_00_u03c1_1842_, lean_object* v_pat_1843_, lean_object* v_s_1844_, lean_object* v_inst_1845_, lean_object* v_x_1846_){
_start:
{
lean_object* v___x_1847_; 
v___x_1847_ = lean_obj_tag_nat(v_x_1846_);
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_ctorIdx___impl___boxed(lean_object* v_00_u03c3_1848_, lean_object* v_00_u03c1_1849_, lean_object* v_pat_1850_, lean_object* v_s_1851_, lean_object* v_inst_1852_, lean_object* v_x_1853_){
_start:
{
lean_object* v_res_1854_; 
v_res_1854_ = l_String_Slice_RevSplitIterator_ctorIdx___impl(v_00_u03c3_1848_, v_00_u03c1_1849_, v_pat_1850_, v_s_1851_, v_inst_1852_, v_x_1853_);
lean_dec(v_x_1853_);
lean_dec(v_inst_1852_);
lean_dec_ref(v_s_1851_);
lean_dec(v_pat_1850_);
return v_res_1854_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_ctorElim___redArg(lean_object* v_t_1855_, lean_object* v_k_1856_){
_start:
{
if (lean_obj_tag(v_t_1855_) == 0)
{
lean_object* v_currPos_1857_; lean_object* v_searcher_1858_; lean_object* v___x_1859_; 
v_currPos_1857_ = lean_ctor_get(v_t_1855_, 0);
lean_inc(v_currPos_1857_);
v_searcher_1858_ = lean_ctor_get(v_t_1855_, 1);
lean_inc(v_searcher_1858_);
lean_dec_ref_known(v_t_1855_, 2);
v___x_1859_ = lean_apply_2(v_k_1856_, v_currPos_1857_, v_searcher_1858_);
return v___x_1859_;
}
else
{
return v_k_1856_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_ctorElim(lean_object* v_00_u03c3_1860_, lean_object* v_00_u03c1_1861_, lean_object* v_pat_1862_, lean_object* v_s_1863_, lean_object* v_inst_1864_, lean_object* v_motive_1865_, lean_object* v_ctorIdx_1866_, lean_object* v_t_1867_, lean_object* v_h_1868_, lean_object* v_k_1869_){
_start:
{
lean_object* v___x_1870_; 
v___x_1870_ = l_String_Slice_RevSplitIterator_ctorElim___redArg(v_t_1867_, v_k_1869_);
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_ctorElim___boxed(lean_object* v_00_u03c3_1871_, lean_object* v_00_u03c1_1872_, lean_object* v_pat_1873_, lean_object* v_s_1874_, lean_object* v_inst_1875_, lean_object* v_motive_1876_, lean_object* v_ctorIdx_1877_, lean_object* v_t_1878_, lean_object* v_h_1879_, lean_object* v_k_1880_){
_start:
{
lean_object* v_res_1881_; 
v_res_1881_ = l_String_Slice_RevSplitIterator_ctorElim(v_00_u03c3_1871_, v_00_u03c1_1872_, v_pat_1873_, v_s_1874_, v_inst_1875_, v_motive_1876_, v_ctorIdx_1877_, v_t_1878_, v_h_1879_, v_k_1880_);
lean_dec(v_ctorIdx_1877_);
lean_dec(v_inst_1875_);
lean_dec_ref(v_s_1874_);
lean_dec(v_pat_1873_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_operating_elim___redArg(lean_object* v_t_1882_, lean_object* v_operating_1883_){
_start:
{
lean_object* v___x_1884_; 
v___x_1884_ = l_String_Slice_RevSplitIterator_ctorElim___redArg(v_t_1882_, v_operating_1883_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_operating_elim(lean_object* v_00_u03c3_1885_, lean_object* v_00_u03c1_1886_, lean_object* v_pat_1887_, lean_object* v_s_1888_, lean_object* v_inst_1889_, lean_object* v_motive_1890_, lean_object* v_t_1891_, lean_object* v_h_1892_, lean_object* v_operating_1893_){
_start:
{
lean_object* v___x_1894_; 
v___x_1894_ = l_String_Slice_RevSplitIterator_ctorElim___redArg(v_t_1891_, v_operating_1893_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_operating_elim___boxed(lean_object* v_00_u03c3_1895_, lean_object* v_00_u03c1_1896_, lean_object* v_pat_1897_, lean_object* v_s_1898_, lean_object* v_inst_1899_, lean_object* v_motive_1900_, lean_object* v_t_1901_, lean_object* v_h_1902_, lean_object* v_operating_1903_){
_start:
{
lean_object* v_res_1904_; 
v_res_1904_ = l_String_Slice_RevSplitIterator_operating_elim(v_00_u03c3_1895_, v_00_u03c1_1896_, v_pat_1897_, v_s_1898_, v_inst_1899_, v_motive_1900_, v_t_1901_, v_h_1902_, v_operating_1903_);
lean_dec(v_inst_1899_);
lean_dec_ref(v_s_1898_);
lean_dec(v_pat_1897_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_atEnd_elim___redArg(lean_object* v_t_1905_, lean_object* v_atEnd_1906_){
_start:
{
lean_object* v___x_1907_; 
v___x_1907_ = l_String_Slice_RevSplitIterator_ctorElim___redArg(v_t_1905_, v_atEnd_1906_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_atEnd_elim(lean_object* v_00_u03c3_1908_, lean_object* v_00_u03c1_1909_, lean_object* v_pat_1910_, lean_object* v_s_1911_, lean_object* v_inst_1912_, lean_object* v_motive_1913_, lean_object* v_t_1914_, lean_object* v_h_1915_, lean_object* v_atEnd_1916_){
_start:
{
lean_object* v___x_1917_; 
v___x_1917_ = l_String_Slice_RevSplitIterator_ctorElim___redArg(v_t_1914_, v_atEnd_1916_);
return v___x_1917_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_atEnd_elim___boxed(lean_object* v_00_u03c3_1918_, lean_object* v_00_u03c1_1919_, lean_object* v_pat_1920_, lean_object* v_s_1921_, lean_object* v_inst_1922_, lean_object* v_motive_1923_, lean_object* v_t_1924_, lean_object* v_h_1925_, lean_object* v_atEnd_1926_){
_start:
{
lean_object* v_res_1927_; 
v_res_1927_ = l_String_Slice_RevSplitIterator_atEnd_elim(v_00_u03c3_1918_, v_00_u03c1_1919_, v_pat_1920_, v_s_1921_, v_inst_1922_, v_motive_1923_, v_t_1924_, v_h_1925_, v_atEnd_1926_);
lean_dec(v_inst_1922_);
lean_dec_ref(v_s_1921_);
lean_dec(v_pat_1920_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedRevSplitIterator_default___redArg(){
_start:
{
lean_object* v___x_1929_; 
v___x_1929_ = lean_box(1);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedRevSplitIterator_default___redArg___boxed(lean_object* v___dummy_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = l_String_Slice_instInhabitedRevSplitIterator_default___redArg();
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedRevSplitIterator_default(lean_object* v_00_u03c3_1932_, lean_object* v_00_u03c1_1933_, lean_object* v_pat_1934_, lean_object* v_s_1935_, lean_object* v_inst_1936_){
_start:
{
lean_object* v___x_1937_; 
v___x_1937_ = lean_box(1);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedRevSplitIterator_default___boxed(lean_object* v_00_u03c3_1938_, lean_object* v_00_u03c1_1939_, lean_object* v_pat_1940_, lean_object* v_s_1941_, lean_object* v_inst_1942_){
_start:
{
lean_object* v_res_1943_; 
v_res_1943_ = l_String_Slice_instInhabitedRevSplitIterator_default(v_00_u03c3_1938_, v_00_u03c1_1939_, v_pat_1940_, v_s_1941_, v_inst_1942_);
lean_dec(v_inst_1942_);
lean_dec_ref(v_s_1941_);
lean_dec(v_pat_1940_);
return v_res_1943_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedRevSplitIterator___redArg(){
_start:
{
lean_object* v___x_1945_; 
v___x_1945_ = lean_box(1);
return v___x_1945_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedRevSplitIterator___redArg___boxed(lean_object* v___dummy_1946_){
_start:
{
lean_object* v_res_1947_; 
v_res_1947_ = l_String_Slice_instInhabitedRevSplitIterator___redArg();
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedRevSplitIterator(lean_object* v_a_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_){
_start:
{
lean_object* v___x_1953_; 
v___x_1953_ = lean_box(1);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instInhabitedRevSplitIterator___boxed(lean_object* v_a_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_){
_start:
{
lean_object* v_res_1959_; 
v_res_1959_ = l_String_Slice_instInhabitedRevSplitIterator(v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_, v_a_1958_);
lean_dec(v_a_1958_);
lean_dec_ref(v_a_1957_);
lean_dec(v_a_1956_);
return v_res_1959_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorOfPure___redArg___lam__0(lean_object* v_inst_1960_, lean_object* v_s_1961_, lean_object* v_inst_1962_, lean_object* v_x_1963_){
_start:
{
if (lean_obj_tag(v_x_1963_) == 0)
{
lean_object* v_currPos_1964_; lean_object* v_searcher_1965_; lean_object* v___x_1967_; uint8_t v_isShared_1968_; uint8_t v_isSharedCheck_2023_; 
v_currPos_1964_ = lean_ctor_get(v_x_1963_, 0);
v_searcher_1965_ = lean_ctor_get(v_x_1963_, 1);
v_isSharedCheck_2023_ = !lean_is_exclusive(v_x_1963_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_1967_ = v_x_1963_;
v_isShared_1968_ = v_isSharedCheck_2023_;
goto v_resetjp_1966_;
}
else
{
lean_inc(v_searcher_1965_);
lean_inc(v_currPos_1964_);
lean_dec(v_x_1963_);
v___x_1967_ = lean_box(0);
v_isShared_1968_ = v_isSharedCheck_2023_;
goto v_resetjp_1966_;
}
v_resetjp_1966_:
{
lean_object* v___x_1969_; 
lean_inc_ref(v_s_1961_);
v___x_1969_ = lean_apply_2(v_inst_1960_, v_s_1961_, v_searcher_1965_);
switch(lean_obj_tag(v___x_1969_))
{
case 0:
{
lean_object* v_out_1970_; 
v_out_1970_ = lean_ctor_get(v___x_1969_, 1);
lean_inc(v_out_1970_);
if (lean_obj_tag(v_out_1970_) == 0)
{
lean_object* v_it_1971_; lean_object* v___x_1973_; 
lean_dec_ref_known(v_out_1970_, 2);
lean_dec_ref(v_s_1961_);
v_it_1971_ = lean_ctor_get(v___x_1969_, 0);
lean_inc(v_it_1971_);
lean_dec_ref_known(v___x_1969_, 2);
if (v_isShared_1968_ == 0)
{
lean_ctor_set(v___x_1967_, 1, v_it_1971_);
v___x_1973_ = v___x_1967_;
goto v_reusejp_1972_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_currPos_1964_);
lean_ctor_set(v_reuseFailAlloc_1976_, 1, v_it_1971_);
v___x_1973_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1972_;
}
v_reusejp_1972_:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1973_);
v___x_1975_ = lean_apply_2(v_inst_1962_, lean_box(0), v___x_1974_);
return v___x_1975_;
}
}
else
{
lean_object* v_it_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1991_; 
v_it_1977_ = lean_ctor_get(v___x_1969_, 0);
v_isSharedCheck_1991_ = !lean_is_exclusive(v___x_1969_);
if (v_isSharedCheck_1991_ == 0)
{
lean_object* v_unused_1992_; 
v_unused_1992_ = lean_ctor_get(v___x_1969_, 1);
lean_dec(v_unused_1992_);
v___x_1979_ = v___x_1969_;
v_isShared_1980_ = v_isSharedCheck_1991_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_it_1977_);
lean_dec(v___x_1969_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1991_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v_startPos_1981_; lean_object* v_endPos_1982_; lean_object* v_slice_1983_; lean_object* v_nextIt_1985_; 
v_startPos_1981_ = lean_ctor_get(v_out_1970_, 0);
lean_inc(v_startPos_1981_);
v_endPos_1982_ = lean_ctor_get(v_out_1970_, 1);
lean_inc(v_endPos_1982_);
lean_dec_ref_known(v_out_1970_, 2);
v_slice_1983_ = l_String_Slice_slice_x21(v_s_1961_, v_endPos_1982_, v_currPos_1964_);
lean_dec(v_currPos_1964_);
lean_dec(v_endPos_1982_);
if (v_isShared_1968_ == 0)
{
lean_ctor_set(v___x_1967_, 1, v_it_1977_);
lean_ctor_set(v___x_1967_, 0, v_startPos_1981_);
v_nextIt_1985_ = v___x_1967_;
goto v_reusejp_1984_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v_startPos_1981_);
lean_ctor_set(v_reuseFailAlloc_1990_, 1, v_it_1977_);
v_nextIt_1985_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1984_;
}
v_reusejp_1984_:
{
lean_object* v___x_1987_; 
if (v_isShared_1980_ == 0)
{
lean_ctor_set(v___x_1979_, 1, v_slice_1983_);
lean_ctor_set(v___x_1979_, 0, v_nextIt_1985_);
v___x_1987_ = v___x_1979_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v_nextIt_1985_);
lean_ctor_set(v_reuseFailAlloc_1989_, 1, v_slice_1983_);
v___x_1987_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
lean_object* v___x_1988_; 
v___x_1988_ = lean_apply_2(v_inst_1962_, lean_box(0), v___x_1987_);
return v___x_1988_;
}
}
}
}
}
case 1:
{
lean_object* v_it_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2004_; 
lean_dec_ref(v_s_1961_);
v_it_1993_ = lean_ctor_get(v___x_1969_, 0);
v_isSharedCheck_2004_ = !lean_is_exclusive(v___x_1969_);
if (v_isSharedCheck_2004_ == 0)
{
v___x_1995_ = v___x_1969_;
v_isShared_1996_ = v_isSharedCheck_2004_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_it_1993_);
lean_dec(v___x_1969_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2004_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1998_; 
if (v_isShared_1968_ == 0)
{
lean_ctor_set(v___x_1967_, 1, v_it_1993_);
v___x_1998_ = v___x_1967_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v_currPos_1964_);
lean_ctor_set(v_reuseFailAlloc_2003_, 1, v_it_1993_);
v___x_1998_ = v_reuseFailAlloc_2003_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
lean_object* v___x_2000_; 
if (v_isShared_1996_ == 0)
{
lean_ctor_set(v___x_1995_, 0, v___x_1998_);
v___x_2000_ = v___x_1995_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v___x_1998_);
v___x_2000_ = v_reuseFailAlloc_2002_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
lean_object* v___x_2001_; 
v___x_2001_ = lean_apply_2(v_inst_1962_, lean_box(0), v___x_2000_);
return v___x_2001_;
}
}
}
}
default: 
{
lean_object* v___x_2005_; uint8_t v_decide_2006_; 
lean_del_object(v___x_1967_);
v___x_2005_ = lean_unsigned_to_nat(0u);
v_decide_2006_ = lean_nat_dec_eq(v_currPos_1964_, v___x_2005_);
if (v_decide_2006_ == 0)
{
lean_object* v_str_2007_; lean_object* v_startInclusive_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2019_; 
v_str_2007_ = lean_ctor_get(v_s_1961_, 0);
v_startInclusive_2008_ = lean_ctor_get(v_s_1961_, 1);
v_isSharedCheck_2019_ = !lean_is_exclusive(v_s_1961_);
if (v_isSharedCheck_2019_ == 0)
{
lean_object* v_unused_2020_; 
v_unused_2020_ = lean_ctor_get(v_s_1961_, 2);
lean_dec(v_unused_2020_);
v___x_2010_ = v_s_1961_;
v_isShared_2011_ = v_isSharedCheck_2019_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_startInclusive_2008_);
lean_inc(v_str_2007_);
lean_dec(v_s_1961_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2019_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2012_; lean_object* v_slice_2014_; 
v___x_2012_ = lean_nat_add(v_startInclusive_2008_, v_currPos_1964_);
lean_dec(v_currPos_1964_);
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 2, v___x_2012_);
v_slice_2014_ = v___x_2010_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_str_2007_);
lean_ctor_set(v_reuseFailAlloc_2018_, 1, v_startInclusive_2008_);
lean_ctor_set(v_reuseFailAlloc_2018_, 2, v___x_2012_);
v_slice_2014_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2015_ = lean_box(1);
v___x_2016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2016_, 0, v___x_2015_);
lean_ctor_set(v___x_2016_, 1, v_slice_2014_);
v___x_2017_ = lean_apply_2(v_inst_1962_, lean_box(0), v___x_2016_);
return v___x_2017_;
}
}
}
else
{
lean_object* v___x_2021_; lean_object* v___x_2022_; 
lean_dec(v_currPos_1964_);
lean_dec_ref(v_s_1961_);
v___x_2021_ = lean_box(2);
v___x_2022_ = lean_apply_2(v_inst_1962_, lean_box(0), v___x_2021_);
return v___x_2022_;
}
}
}
}
}
else
{
lean_object* v___x_2024_; lean_object* v___x_2025_; 
lean_dec_ref(v_s_1961_);
lean_dec(v_inst_1960_);
v___x_2024_ = lean_box(2);
v___x_2025_ = lean_apply_2(v_inst_1962_, lean_box(0), v___x_2024_);
return v___x_2025_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorOfPure___redArg(lean_object* v_inst_2026_, lean_object* v_s_2027_, lean_object* v_inst_2028_){
_start:
{
lean_object* v___f_2029_; 
v___f_2029_ = lean_alloc_closure((void*)(l_String_Slice_RevSplitIterator_instIteratorOfPure___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2029_, 0, v_inst_2026_);
lean_closure_set(v___f_2029_, 1, v_s_2027_);
lean_closure_set(v___f_2029_, 2, v_inst_2028_);
return v___f_2029_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorOfPure(lean_object* v_00_u03c1_2030_, lean_object* v_00_u03c1_2031_, lean_object* v_00_u03c3_2032_, lean_object* v_inst_2033_, lean_object* v_inst_2034_, lean_object* v_m_2035_, lean_object* v_s_2036_, lean_object* v_inst_2037_){
_start:
{
lean_object* v___f_2038_; 
v___f_2038_ = lean_alloc_closure((void*)(l_String_Slice_RevSplitIterator_instIteratorOfPure___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2038_, 0, v_inst_2033_);
lean_closure_set(v___f_2038_, 1, v_s_2036_);
lean_closure_set(v___f_2038_, 2, v_inst_2037_);
return v___f_2038_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorOfPure___boxed(lean_object* v_00_u03c1_2039_, lean_object* v_00_u03c1_2040_, lean_object* v_00_u03c3_2041_, lean_object* v_inst_2042_, lean_object* v_inst_2043_, lean_object* v_m_2044_, lean_object* v_s_2045_, lean_object* v_inst_2046_){
_start:
{
lean_object* v_res_2047_; 
v_res_2047_ = l_String_Slice_RevSplitIterator_instIteratorOfPure(v_00_u03c1_2039_, v_00_u03c1_2040_, v_00_u03c3_2041_, v_inst_2042_, v_inst_2043_, v_m_2044_, v_s_2045_, v_inst_2046_);
lean_dec(v_inst_2043_);
lean_dec(v_00_u03c1_2040_);
return v_res_2047_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_toOption___redArg(lean_object* v_x_2048_){
_start:
{
if (lean_obj_tag(v_x_2048_) == 0)
{
lean_object* v_searcher_2049_; lean_object* v___x_2050_; 
v_searcher_2049_ = lean_ctor_get(v_x_2048_, 1);
lean_inc(v_searcher_2049_);
v___x_2050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2050_, 0, v_searcher_2049_);
return v___x_2050_;
}
else
{
lean_object* v___x_2051_; 
v___x_2051_ = lean_box(0);
return v___x_2051_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_toOption___redArg___boxed(lean_object* v_x_2052_){
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_toOption___redArg(v_x_2052_);
lean_dec(v_x_2052_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_toOption(lean_object* v_00_u03c1_2054_, lean_object* v_00_u03c1_2055_, lean_object* v_00_u03c3_2056_, lean_object* v_inst_2057_, lean_object* v_s_2058_, lean_object* v_x_2059_){
_start:
{
lean_object* v___x_2060_; 
v___x_2060_ = l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_toOption___redArg(v_x_2059_);
return v___x_2060_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_toOption___boxed(lean_object* v_00_u03c1_2061_, lean_object* v_00_u03c1_2062_, lean_object* v_00_u03c3_2063_, lean_object* v_inst_2064_, lean_object* v_s_2065_, lean_object* v_x_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_toOption(v_00_u03c1_2061_, v_00_u03c1_2062_, v_00_u03c3_2063_, v_inst_2064_, v_s_2065_, v_x_2066_);
lean_dec(v_x_2066_);
lean_dec_ref(v_s_2065_);
lean_dec(v_inst_2064_);
lean_dec(v_00_u03c1_2062_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_instIteratorOfPure_match__3_splitter___redArg(lean_object* v_x_2068_, lean_object* v_h__1_2069_, lean_object* v_h__2_2070_){
_start:
{
if (lean_obj_tag(v_x_2068_) == 0)
{
lean_object* v_currPos_2071_; lean_object* v_searcher_2072_; lean_object* v___x_2073_; 
lean_dec(v_h__2_2070_);
v_currPos_2071_ = lean_ctor_get(v_x_2068_, 0);
lean_inc(v_currPos_2071_);
v_searcher_2072_ = lean_ctor_get(v_x_2068_, 1);
lean_inc(v_searcher_2072_);
lean_dec_ref_known(v_x_2068_, 2);
v___x_2073_ = lean_apply_2(v_h__1_2069_, v_currPos_2071_, v_searcher_2072_);
return v___x_2073_;
}
else
{
lean_object* v___x_2074_; lean_object* v___x_2075_; 
lean_dec(v_h__1_2069_);
v___x_2074_ = lean_box(0);
v___x_2075_ = lean_apply_1(v_h__2_2070_, v___x_2074_);
return v___x_2075_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_instIteratorOfPure_match__3_splitter(lean_object* v_00_u03c1_2076_, lean_object* v_00_u03c1_2077_, lean_object* v_00_u03c3_2078_, lean_object* v_inst_2079_, lean_object* v_m_2080_, lean_object* v_s_2081_, lean_object* v_motive_2082_, lean_object* v_x_2083_, lean_object* v_h__1_2084_, lean_object* v_h__2_2085_){
_start:
{
if (lean_obj_tag(v_x_2083_) == 0)
{
lean_object* v_currPos_2086_; lean_object* v_searcher_2087_; lean_object* v___x_2088_; 
lean_dec(v_h__2_2085_);
v_currPos_2086_ = lean_ctor_get(v_x_2083_, 0);
lean_inc(v_currPos_2086_);
v_searcher_2087_ = lean_ctor_get(v_x_2083_, 1);
lean_inc(v_searcher_2087_);
lean_dec_ref_known(v_x_2083_, 2);
v___x_2088_ = lean_apply_2(v_h__1_2084_, v_currPos_2086_, v_searcher_2087_);
return v___x_2088_;
}
else
{
lean_object* v___x_2089_; lean_object* v___x_2090_; 
lean_dec(v_h__1_2084_);
v___x_2089_ = lean_box(0);
v___x_2090_ = lean_apply_1(v_h__2_2085_, v___x_2089_);
return v___x_2090_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_instIteratorOfPure_match__3_splitter___boxed(lean_object* v_00_u03c1_2091_, lean_object* v_00_u03c1_2092_, lean_object* v_00_u03c3_2093_, lean_object* v_inst_2094_, lean_object* v_m_2095_, lean_object* v_s_2096_, lean_object* v_motive_2097_, lean_object* v_x_2098_, lean_object* v_h__1_2099_, lean_object* v_h__2_2100_){
_start:
{
lean_object* v_res_2101_; 
v_res_2101_ = l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_instIteratorOfPure_match__3_splitter(v_00_u03c1_2091_, v_00_u03c1_2092_, v_00_u03c3_2093_, v_inst_2094_, v_m_2095_, v_s_2096_, v_motive_2097_, v_x_2098_, v_h__1_2099_, v_h__2_2100_);
lean_dec_ref(v_s_2096_);
lean_dec(v_inst_2094_);
lean_dec(v_00_u03c1_2092_);
return v_res_2101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_instIteratorOfPure_match__1_splitter___redArg(lean_object* v_x_2102_, lean_object* v_x_2103_, lean_object* v_h__1_2104_, lean_object* v_h__2_2105_, lean_object* v_h__3_2106_, lean_object* v_h__4_2107_, lean_object* v_h__5_2108_, lean_object* v_h__6_2109_, lean_object* v_h__7_2110_, lean_object* v_h__8_2111_){
_start:
{
if (lean_obj_tag(v_x_2102_) == 0)
{
lean_dec(v_h__8_2111_);
lean_dec(v_h__7_2110_);
lean_dec(v_h__6_2109_);
switch(lean_obj_tag(v_x_2103_))
{
case 0:
{
lean_object* v_it_2112_; 
lean_dec(v_h__5_2108_);
lean_dec(v_h__4_2107_);
lean_dec(v_h__3_2106_);
v_it_2112_ = lean_ctor_get(v_x_2103_, 0);
if (lean_obj_tag(v_it_2112_) == 0)
{
lean_object* v_currPos_2113_; lean_object* v_searcher_2114_; lean_object* v_out_2115_; lean_object* v_currPos_2116_; lean_object* v_searcher_2117_; lean_object* v___x_2118_; 
lean_inc_ref(v_it_2112_);
lean_dec(v_h__2_2105_);
v_currPos_2113_ = lean_ctor_get(v_x_2102_, 0);
lean_inc(v_currPos_2113_);
v_searcher_2114_ = lean_ctor_get(v_x_2102_, 1);
lean_inc(v_searcher_2114_);
lean_dec_ref_known(v_x_2102_, 2);
v_out_2115_ = lean_ctor_get(v_x_2103_, 1);
lean_inc(v_out_2115_);
lean_dec_ref_known(v_x_2103_, 2);
v_currPos_2116_ = lean_ctor_get(v_it_2112_, 0);
lean_inc(v_currPos_2116_);
v_searcher_2117_ = lean_ctor_get(v_it_2112_, 1);
lean_inc(v_searcher_2117_);
lean_dec_ref_known(v_it_2112_, 2);
v___x_2118_ = lean_apply_5(v_h__1_2104_, v_currPos_2113_, v_searcher_2114_, v_currPos_2116_, v_searcher_2117_, v_out_2115_);
return v___x_2118_;
}
else
{
lean_object* v_currPos_2119_; lean_object* v_searcher_2120_; lean_object* v_out_2121_; lean_object* v___x_2122_; 
lean_dec(v_h__1_2104_);
v_currPos_2119_ = lean_ctor_get(v_x_2102_, 0);
lean_inc(v_currPos_2119_);
v_searcher_2120_ = lean_ctor_get(v_x_2102_, 1);
lean_inc(v_searcher_2120_);
lean_dec_ref_known(v_x_2102_, 2);
v_out_2121_ = lean_ctor_get(v_x_2103_, 1);
lean_inc(v_out_2121_);
lean_dec_ref_known(v_x_2103_, 2);
v___x_2122_ = lean_apply_3(v_h__2_2105_, v_currPos_2119_, v_searcher_2120_, v_out_2121_);
return v___x_2122_;
}
}
case 1:
{
lean_object* v_it_2123_; 
lean_dec(v_h__5_2108_);
lean_dec(v_h__2_2105_);
lean_dec(v_h__1_2104_);
v_it_2123_ = lean_ctor_get(v_x_2103_, 0);
lean_inc(v_it_2123_);
lean_dec_ref_known(v_x_2103_, 1);
if (lean_obj_tag(v_it_2123_) == 0)
{
lean_object* v_currPos_2124_; lean_object* v_searcher_2125_; lean_object* v_currPos_2126_; lean_object* v_searcher_2127_; lean_object* v___x_2128_; 
lean_dec(v_h__4_2107_);
v_currPos_2124_ = lean_ctor_get(v_x_2102_, 0);
lean_inc(v_currPos_2124_);
v_searcher_2125_ = lean_ctor_get(v_x_2102_, 1);
lean_inc(v_searcher_2125_);
lean_dec_ref_known(v_x_2102_, 2);
v_currPos_2126_ = lean_ctor_get(v_it_2123_, 0);
lean_inc(v_currPos_2126_);
v_searcher_2127_ = lean_ctor_get(v_it_2123_, 1);
lean_inc(v_searcher_2127_);
lean_dec_ref_known(v_it_2123_, 2);
v___x_2128_ = lean_apply_4(v_h__3_2106_, v_currPos_2124_, v_searcher_2125_, v_currPos_2126_, v_searcher_2127_);
return v___x_2128_;
}
else
{
lean_object* v_currPos_2129_; lean_object* v_searcher_2130_; lean_object* v___x_2131_; 
lean_dec(v_h__3_2106_);
v_currPos_2129_ = lean_ctor_get(v_x_2102_, 0);
lean_inc(v_currPos_2129_);
v_searcher_2130_ = lean_ctor_get(v_x_2102_, 1);
lean_inc(v_searcher_2130_);
lean_dec_ref_known(v_x_2102_, 2);
v___x_2131_ = lean_apply_2(v_h__4_2107_, v_currPos_2129_, v_searcher_2130_);
return v___x_2131_;
}
}
default: 
{
lean_object* v_currPos_2132_; lean_object* v_searcher_2133_; lean_object* v___x_2134_; 
lean_dec(v_h__4_2107_);
lean_dec(v_h__3_2106_);
lean_dec(v_h__2_2105_);
lean_dec(v_h__1_2104_);
v_currPos_2132_ = lean_ctor_get(v_x_2102_, 0);
lean_inc(v_currPos_2132_);
v_searcher_2133_ = lean_ctor_get(v_x_2102_, 1);
lean_inc(v_searcher_2133_);
lean_dec_ref_known(v_x_2102_, 2);
v___x_2134_ = lean_apply_2(v_h__5_2108_, v_currPos_2132_, v_searcher_2133_);
return v___x_2134_;
}
}
}
else
{
lean_dec(v_h__5_2108_);
lean_dec(v_h__4_2107_);
lean_dec(v_h__3_2106_);
lean_dec(v_h__2_2105_);
lean_dec(v_h__1_2104_);
switch(lean_obj_tag(v_x_2103_))
{
case 0:
{
lean_object* v_it_2135_; lean_object* v_out_2136_; lean_object* v___x_2137_; 
lean_dec(v_h__8_2111_);
lean_dec(v_h__7_2110_);
v_it_2135_ = lean_ctor_get(v_x_2103_, 0);
lean_inc(v_it_2135_);
v_out_2136_ = lean_ctor_get(v_x_2103_, 1);
lean_inc(v_out_2136_);
lean_dec_ref_known(v_x_2103_, 2);
v___x_2137_ = lean_apply_2(v_h__6_2109_, v_it_2135_, v_out_2136_);
return v___x_2137_;
}
case 1:
{
lean_object* v_it_2138_; lean_object* v___x_2139_; 
lean_dec(v_h__8_2111_);
lean_dec(v_h__6_2109_);
v_it_2138_ = lean_ctor_get(v_x_2103_, 0);
lean_inc(v_it_2138_);
lean_dec_ref_known(v_x_2103_, 1);
v___x_2139_ = lean_apply_1(v_h__7_2110_, v_it_2138_);
return v___x_2139_;
}
default: 
{
lean_object* v___x_2140_; lean_object* v___x_2141_; 
lean_dec(v_h__7_2110_);
lean_dec(v_h__6_2109_);
v___x_2140_ = lean_box(0);
v___x_2141_ = lean_apply_1(v_h__8_2111_, v___x_2140_);
return v___x_2141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_instIteratorOfPure_match__1_splitter(lean_object* v_00_u03c1_2142_, lean_object* v_00_u03c1_2143_, lean_object* v_00_u03c3_2144_, lean_object* v_inst_2145_, lean_object* v_m_2146_, lean_object* v_s_2147_, lean_object* v_motive_2148_, lean_object* v_x_2149_, lean_object* v_x_2150_, lean_object* v_h__1_2151_, lean_object* v_h__2_2152_, lean_object* v_h__3_2153_, lean_object* v_h__4_2154_, lean_object* v_h__5_2155_, lean_object* v_h__6_2156_, lean_object* v_h__7_2157_, lean_object* v_h__8_2158_){
_start:
{
if (lean_obj_tag(v_x_2149_) == 0)
{
lean_dec(v_h__8_2158_);
lean_dec(v_h__7_2157_);
lean_dec(v_h__6_2156_);
switch(lean_obj_tag(v_x_2150_))
{
case 0:
{
lean_object* v_it_2159_; 
lean_dec(v_h__5_2155_);
lean_dec(v_h__4_2154_);
lean_dec(v_h__3_2153_);
v_it_2159_ = lean_ctor_get(v_x_2150_, 0);
if (lean_obj_tag(v_it_2159_) == 0)
{
lean_object* v_currPos_2160_; lean_object* v_searcher_2161_; lean_object* v_out_2162_; lean_object* v_currPos_2163_; lean_object* v_searcher_2164_; lean_object* v___x_2165_; 
lean_inc_ref(v_it_2159_);
lean_dec(v_h__2_2152_);
v_currPos_2160_ = lean_ctor_get(v_x_2149_, 0);
lean_inc(v_currPos_2160_);
v_searcher_2161_ = lean_ctor_get(v_x_2149_, 1);
lean_inc(v_searcher_2161_);
lean_dec_ref_known(v_x_2149_, 2);
v_out_2162_ = lean_ctor_get(v_x_2150_, 1);
lean_inc(v_out_2162_);
lean_dec_ref_known(v_x_2150_, 2);
v_currPos_2163_ = lean_ctor_get(v_it_2159_, 0);
lean_inc(v_currPos_2163_);
v_searcher_2164_ = lean_ctor_get(v_it_2159_, 1);
lean_inc(v_searcher_2164_);
lean_dec_ref_known(v_it_2159_, 2);
v___x_2165_ = lean_apply_5(v_h__1_2151_, v_currPos_2160_, v_searcher_2161_, v_currPos_2163_, v_searcher_2164_, v_out_2162_);
return v___x_2165_;
}
else
{
lean_object* v_currPos_2166_; lean_object* v_searcher_2167_; lean_object* v_out_2168_; lean_object* v___x_2169_; 
lean_dec(v_h__1_2151_);
v_currPos_2166_ = lean_ctor_get(v_x_2149_, 0);
lean_inc(v_currPos_2166_);
v_searcher_2167_ = lean_ctor_get(v_x_2149_, 1);
lean_inc(v_searcher_2167_);
lean_dec_ref_known(v_x_2149_, 2);
v_out_2168_ = lean_ctor_get(v_x_2150_, 1);
lean_inc(v_out_2168_);
lean_dec_ref_known(v_x_2150_, 2);
v___x_2169_ = lean_apply_3(v_h__2_2152_, v_currPos_2166_, v_searcher_2167_, v_out_2168_);
return v___x_2169_;
}
}
case 1:
{
lean_object* v_it_2170_; 
lean_dec(v_h__5_2155_);
lean_dec(v_h__2_2152_);
lean_dec(v_h__1_2151_);
v_it_2170_ = lean_ctor_get(v_x_2150_, 0);
lean_inc(v_it_2170_);
lean_dec_ref_known(v_x_2150_, 1);
if (lean_obj_tag(v_it_2170_) == 0)
{
lean_object* v_currPos_2171_; lean_object* v_searcher_2172_; lean_object* v_currPos_2173_; lean_object* v_searcher_2174_; lean_object* v___x_2175_; 
lean_dec(v_h__4_2154_);
v_currPos_2171_ = lean_ctor_get(v_x_2149_, 0);
lean_inc(v_currPos_2171_);
v_searcher_2172_ = lean_ctor_get(v_x_2149_, 1);
lean_inc(v_searcher_2172_);
lean_dec_ref_known(v_x_2149_, 2);
v_currPos_2173_ = lean_ctor_get(v_it_2170_, 0);
lean_inc(v_currPos_2173_);
v_searcher_2174_ = lean_ctor_get(v_it_2170_, 1);
lean_inc(v_searcher_2174_);
lean_dec_ref_known(v_it_2170_, 2);
v___x_2175_ = lean_apply_4(v_h__3_2153_, v_currPos_2171_, v_searcher_2172_, v_currPos_2173_, v_searcher_2174_);
return v___x_2175_;
}
else
{
lean_object* v_currPos_2176_; lean_object* v_searcher_2177_; lean_object* v___x_2178_; 
lean_dec(v_h__3_2153_);
v_currPos_2176_ = lean_ctor_get(v_x_2149_, 0);
lean_inc(v_currPos_2176_);
v_searcher_2177_ = lean_ctor_get(v_x_2149_, 1);
lean_inc(v_searcher_2177_);
lean_dec_ref_known(v_x_2149_, 2);
v___x_2178_ = lean_apply_2(v_h__4_2154_, v_currPos_2176_, v_searcher_2177_);
return v___x_2178_;
}
}
default: 
{
lean_object* v_currPos_2179_; lean_object* v_searcher_2180_; lean_object* v___x_2181_; 
lean_dec(v_h__4_2154_);
lean_dec(v_h__3_2153_);
lean_dec(v_h__2_2152_);
lean_dec(v_h__1_2151_);
v_currPos_2179_ = lean_ctor_get(v_x_2149_, 0);
lean_inc(v_currPos_2179_);
v_searcher_2180_ = lean_ctor_get(v_x_2149_, 1);
lean_inc(v_searcher_2180_);
lean_dec_ref_known(v_x_2149_, 2);
v___x_2181_ = lean_apply_2(v_h__5_2155_, v_currPos_2179_, v_searcher_2180_);
return v___x_2181_;
}
}
}
else
{
lean_dec(v_h__5_2155_);
lean_dec(v_h__4_2154_);
lean_dec(v_h__3_2153_);
lean_dec(v_h__2_2152_);
lean_dec(v_h__1_2151_);
switch(lean_obj_tag(v_x_2150_))
{
case 0:
{
lean_object* v_it_2182_; lean_object* v_out_2183_; lean_object* v___x_2184_; 
lean_dec(v_h__8_2158_);
lean_dec(v_h__7_2157_);
v_it_2182_ = lean_ctor_get(v_x_2150_, 0);
lean_inc(v_it_2182_);
v_out_2183_ = lean_ctor_get(v_x_2150_, 1);
lean_inc(v_out_2183_);
lean_dec_ref_known(v_x_2150_, 2);
v___x_2184_ = lean_apply_2(v_h__6_2156_, v_it_2182_, v_out_2183_);
return v___x_2184_;
}
case 1:
{
lean_object* v_it_2185_; lean_object* v___x_2186_; 
lean_dec(v_h__8_2158_);
lean_dec(v_h__6_2156_);
v_it_2185_ = lean_ctor_get(v_x_2150_, 0);
lean_inc(v_it_2185_);
lean_dec_ref_known(v_x_2150_, 1);
v___x_2186_ = lean_apply_1(v_h__7_2157_, v_it_2185_);
return v___x_2186_;
}
default: 
{
lean_object* v___x_2187_; lean_object* v___x_2188_; 
lean_dec(v_h__7_2157_);
lean_dec(v_h__6_2156_);
v___x_2187_ = lean_box(0);
v___x_2188_ = lean_apply_1(v_h__8_2158_, v___x_2187_);
return v___x_2188_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_instIteratorOfPure_match__1_splitter___boxed(lean_object** _args){
lean_object* v_00_u03c1_2189_ = _args[0];
lean_object* v_00_u03c1_2190_ = _args[1];
lean_object* v_00_u03c3_2191_ = _args[2];
lean_object* v_inst_2192_ = _args[3];
lean_object* v_m_2193_ = _args[4];
lean_object* v_s_2194_ = _args[5];
lean_object* v_motive_2195_ = _args[6];
lean_object* v_x_2196_ = _args[7];
lean_object* v_x_2197_ = _args[8];
lean_object* v_h__1_2198_ = _args[9];
lean_object* v_h__2_2199_ = _args[10];
lean_object* v_h__3_2200_ = _args[11];
lean_object* v_h__4_2201_ = _args[12];
lean_object* v_h__5_2202_ = _args[13];
lean_object* v_h__6_2203_ = _args[14];
lean_object* v_h__7_2204_ = _args[15];
lean_object* v_h__8_2205_ = _args[16];
_start:
{
lean_object* v_res_2206_; 
v_res_2206_ = l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_instIteratorOfPure_match__1_splitter(v_00_u03c1_2189_, v_00_u03c1_2190_, v_00_u03c3_2191_, v_inst_2192_, v_m_2193_, v_s_2194_, v_motive_2195_, v_x_2196_, v_x_2197_, v_h__1_2198_, v_h__2_2199_, v_h__3_2200_, v_h__4_2201_, v_h__5_2202_, v_h__6_2203_, v_h__7_2204_, v_h__8_2205_);
lean_dec_ref(v_s_2194_);
lean_dec(v_inst_2192_);
lean_dec(v_00_u03c1_2190_);
return v_res_2206_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_finitenessRelation___redArg(){
_start:
{
lean_object* v___x_2208_; 
v___x_2208_ = lean_box(0);
return v___x_2208_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_finitenessRelation___redArg___boxed(lean_object* v___dummy_2209_){
_start:
{
lean_object* v_res_2210_; 
v_res_2210_ = l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_finitenessRelation___redArg();
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_finitenessRelation(lean_object* v_00_u03c1_2211_, lean_object* v_00_u03c1_2212_, lean_object* v_00_u03c3_2213_, lean_object* v_inst_2214_, lean_object* v_inst_2215_, lean_object* v_s_2216_, lean_object* v_inst_2217_){
_start:
{
lean_object* v___x_2218_; 
v___x_2218_ = lean_box(0);
return v___x_2218_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_finitenessRelation___boxed(lean_object* v_00_u03c1_2219_, lean_object* v_00_u03c1_2220_, lean_object* v_00_u03c3_2221_, lean_object* v_inst_2222_, lean_object* v_inst_2223_, lean_object* v_s_2224_, lean_object* v_inst_2225_){
_start:
{
lean_object* v_res_2226_; 
v_res_2226_ = l___private_Init_Data_String_Slice_0__String_Slice_RevSplitIterator_finitenessRelation(v_00_u03c1_2219_, v_00_u03c1_2220_, v_00_u03c3_2221_, v_inst_2222_, v_inst_2223_, v_s_2224_, v_inst_2225_);
lean_dec_ref(v_s_2224_);
lean_dec(v_inst_2223_);
lean_dec(v_inst_2222_);
lean_dec(v_00_u03c1_2220_);
return v_res_2226_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___redArg___lam__0(lean_object* v_toPure_2227_, lean_object* v_recur_2228_, lean_object* v_it_2229_, lean_object* v_____do__lift_2230_){
_start:
{
if (lean_obj_tag(v_____do__lift_2230_) == 0)
{
lean_object* v_a_2231_; lean_object* v___x_2232_; 
lean_dec(v_it_2229_);
lean_dec(v_recur_2228_);
v_a_2231_ = lean_ctor_get(v_____do__lift_2230_, 0);
lean_inc(v_a_2231_);
lean_dec_ref_known(v_____do__lift_2230_, 1);
v___x_2232_ = lean_apply_2(v_toPure_2227_, lean_box(0), v_a_2231_);
return v___x_2232_;
}
else
{
lean_object* v_a_2233_; lean_object* v___x_2234_; 
lean_dec(v_toPure_2227_);
v_a_2233_ = lean_ctor_get(v_____do__lift_2230_, 0);
lean_inc(v_a_2233_);
lean_dec_ref_known(v_____do__lift_2230_, 1);
v___x_2234_ = lean_apply_4(v_recur_2228_, v_it_2229_, v_a_2233_, lean_box(0), lean_box(0));
return v___x_2234_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___redArg___lam__1(lean_object* v_toPure_2235_, lean_object* v_recur_2236_, lean_object* v___y_2237_, lean_object* v_acc_2238_, lean_object* v_toBind_2239_, lean_object* v_s_2240_){
_start:
{
switch(lean_obj_tag(v_s_2240_))
{
case 0:
{
lean_object* v_it_2241_; lean_object* v_out_2242_; lean_object* v___f_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
v_it_2241_ = lean_ctor_get(v_s_2240_, 0);
lean_inc(v_it_2241_);
v_out_2242_ = lean_ctor_get(v_s_2240_, 1);
lean_inc(v_out_2242_);
lean_dec_ref_known(v_s_2240_, 2);
v___f_2243_ = lean_alloc_closure((void*)(l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2243_, 0, v_toPure_2235_);
lean_closure_set(v___f_2243_, 1, v_recur_2236_);
lean_closure_set(v___f_2243_, 2, v_it_2241_);
v___x_2244_ = lean_apply_3(v___y_2237_, v_out_2242_, lean_box(0), v_acc_2238_);
v___x_2245_ = lean_apply_4(v_toBind_2239_, lean_box(0), lean_box(0), v___x_2244_, v___f_2243_);
return v___x_2245_;
}
case 1:
{
lean_object* v_it_2246_; lean_object* v___x_2247_; 
lean_dec(v_toBind_2239_);
lean_dec(v___y_2237_);
lean_dec(v_toPure_2235_);
v_it_2246_ = lean_ctor_get(v_s_2240_, 0);
lean_inc(v_it_2246_);
lean_dec_ref_known(v_s_2240_, 1);
v___x_2247_ = lean_apply_4(v_recur_2236_, v_it_2246_, v_acc_2238_, lean_box(0), lean_box(0));
return v___x_2247_;
}
default: 
{
lean_object* v___x_2248_; 
lean_dec(v_toBind_2239_);
lean_dec(v___y_2237_);
lean_dec(v_recur_2236_);
v___x_2248_ = lean_apply_2(v_toPure_2235_, lean_box(0), v_acc_2238_);
return v___x_2248_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___redArg___lam__2(lean_object* v_toPure_2249_, lean_object* v___y_2250_, lean_object* v_toBind_2251_, lean_object* v_inst_2252_, lean_object* v_s_2253_, lean_object* v_toPure_2254_, lean_object* v_lift_2255_, lean_object* v_it_2256_, lean_object* v_acc_2257_, lean_object* v_hP_2258_, lean_object* v_recur_2259_){
_start:
{
lean_object* v___f_2260_; 
v___f_2260_ = lean_alloc_closure((void*)(l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___redArg___lam__1), 6, 5);
lean_closure_set(v___f_2260_, 0, v_toPure_2249_);
lean_closure_set(v___f_2260_, 1, v_recur_2259_);
lean_closure_set(v___f_2260_, 2, v___y_2250_);
lean_closure_set(v___f_2260_, 3, v_acc_2257_);
lean_closure_set(v___f_2260_, 4, v_toBind_2251_);
if (lean_obj_tag(v_it_2256_) == 0)
{
lean_object* v_currPos_2261_; lean_object* v_searcher_2262_; lean_object* v___x_2264_; uint8_t v_isShared_2265_; uint8_t v_isSharedCheck_2325_; 
v_currPos_2261_ = lean_ctor_get(v_it_2256_, 0);
v_searcher_2262_ = lean_ctor_get(v_it_2256_, 1);
v_isSharedCheck_2325_ = !lean_is_exclusive(v_it_2256_);
if (v_isSharedCheck_2325_ == 0)
{
v___x_2264_ = v_it_2256_;
v_isShared_2265_ = v_isSharedCheck_2325_;
goto v_resetjp_2263_;
}
else
{
lean_inc(v_searcher_2262_);
lean_inc(v_currPos_2261_);
lean_dec(v_it_2256_);
v___x_2264_ = lean_box(0);
v_isShared_2265_ = v_isSharedCheck_2325_;
goto v_resetjp_2263_;
}
v_resetjp_2263_:
{
lean_object* v___x_2266_; 
lean_inc_ref(v_s_2253_);
v___x_2266_ = lean_apply_2(v_inst_2252_, v_s_2253_, v_searcher_2262_);
switch(lean_obj_tag(v___x_2266_))
{
case 0:
{
lean_object* v_out_2267_; 
v_out_2267_ = lean_ctor_get(v___x_2266_, 1);
lean_inc(v_out_2267_);
if (lean_obj_tag(v_out_2267_) == 0)
{
lean_object* v_it_2268_; lean_object* v___x_2270_; 
lean_dec_ref_known(v_out_2267_, 2);
lean_dec_ref(v_s_2253_);
v_it_2268_ = lean_ctor_get(v___x_2266_, 0);
lean_inc(v_it_2268_);
lean_dec_ref_known(v___x_2266_, 2);
if (v_isShared_2265_ == 0)
{
lean_ctor_set(v___x_2264_, 1, v_it_2268_);
v___x_2270_ = v___x_2264_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_currPos_2261_);
lean_ctor_set(v_reuseFailAlloc_2274_, 1, v_it_2268_);
v___x_2270_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2270_);
v___x_2272_ = lean_apply_2(v_toPure_2254_, lean_box(0), v___x_2271_);
v___x_2273_ = lean_apply_4(v_lift_2255_, lean_box(0), lean_box(0), v___f_2260_, v___x_2272_);
return v___x_2273_;
}
}
else
{
lean_object* v_it_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2290_; 
v_it_2275_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2290_ == 0)
{
lean_object* v_unused_2291_; 
v_unused_2291_ = lean_ctor_get(v___x_2266_, 1);
lean_dec(v_unused_2291_);
v___x_2277_ = v___x_2266_;
v_isShared_2278_ = v_isSharedCheck_2290_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_it_2275_);
lean_dec(v___x_2266_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2290_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v_startPos_2279_; lean_object* v_endPos_2280_; lean_object* v_slice_2281_; lean_object* v_nextIt_2283_; 
v_startPos_2279_ = lean_ctor_get(v_out_2267_, 0);
lean_inc(v_startPos_2279_);
v_endPos_2280_ = lean_ctor_get(v_out_2267_, 1);
lean_inc(v_endPos_2280_);
lean_dec_ref_known(v_out_2267_, 2);
v_slice_2281_ = l_String_Slice_slice_x21(v_s_2253_, v_endPos_2280_, v_currPos_2261_);
lean_dec(v_currPos_2261_);
lean_dec(v_endPos_2280_);
if (v_isShared_2265_ == 0)
{
lean_ctor_set(v___x_2264_, 1, v_it_2275_);
lean_ctor_set(v___x_2264_, 0, v_startPos_2279_);
v_nextIt_2283_ = v___x_2264_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_startPos_2279_);
lean_ctor_set(v_reuseFailAlloc_2289_, 1, v_it_2275_);
v_nextIt_2283_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
lean_object* v___x_2285_; 
if (v_isShared_2278_ == 0)
{
lean_ctor_set(v___x_2277_, 1, v_slice_2281_);
lean_ctor_set(v___x_2277_, 0, v_nextIt_2283_);
v___x_2285_ = v___x_2277_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_nextIt_2283_);
lean_ctor_set(v_reuseFailAlloc_2288_, 1, v_slice_2281_);
v___x_2285_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2286_ = lean_apply_2(v_toPure_2254_, lean_box(0), v___x_2285_);
v___x_2287_ = lean_apply_4(v_lift_2255_, lean_box(0), lean_box(0), v___f_2260_, v___x_2286_);
return v___x_2287_;
}
}
}
}
}
case 1:
{
lean_object* v_it_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2304_; 
lean_dec_ref(v_s_2253_);
v_it_2292_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2294_ = v___x_2266_;
v_isShared_2295_ = v_isSharedCheck_2304_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_it_2292_);
lean_dec(v___x_2266_);
v___x_2294_ = lean_box(0);
v_isShared_2295_ = v_isSharedCheck_2304_;
goto v_resetjp_2293_;
}
v_resetjp_2293_:
{
lean_object* v___x_2297_; 
if (v_isShared_2265_ == 0)
{
lean_ctor_set(v___x_2264_, 1, v_it_2292_);
v___x_2297_ = v___x_2264_;
goto v_reusejp_2296_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v_currPos_2261_);
lean_ctor_set(v_reuseFailAlloc_2303_, 1, v_it_2292_);
v___x_2297_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2296_;
}
v_reusejp_2296_:
{
lean_object* v___x_2299_; 
if (v_isShared_2295_ == 0)
{
lean_ctor_set(v___x_2294_, 0, v___x_2297_);
v___x_2299_ = v___x_2294_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v___x_2297_);
v___x_2299_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2300_ = lean_apply_2(v_toPure_2254_, lean_box(0), v___x_2299_);
v___x_2301_ = lean_apply_4(v_lift_2255_, lean_box(0), lean_box(0), v___f_2260_, v___x_2300_);
return v___x_2301_;
}
}
}
}
default: 
{
lean_object* v___x_2305_; uint8_t v_decide_2306_; 
lean_del_object(v___x_2264_);
v___x_2305_ = lean_unsigned_to_nat(0u);
v_decide_2306_ = lean_nat_dec_eq(v_currPos_2261_, v___x_2305_);
if (v_decide_2306_ == 0)
{
lean_object* v_str_2307_; lean_object* v_startInclusive_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2320_; 
v_str_2307_ = lean_ctor_get(v_s_2253_, 0);
v_startInclusive_2308_ = lean_ctor_get(v_s_2253_, 1);
v_isSharedCheck_2320_ = !lean_is_exclusive(v_s_2253_);
if (v_isSharedCheck_2320_ == 0)
{
lean_object* v_unused_2321_; 
v_unused_2321_ = lean_ctor_get(v_s_2253_, 2);
lean_dec(v_unused_2321_);
v___x_2310_ = v_s_2253_;
v_isShared_2311_ = v_isSharedCheck_2320_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_startInclusive_2308_);
lean_inc(v_str_2307_);
lean_dec(v_s_2253_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2320_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v___x_2312_; lean_object* v_slice_2314_; 
v___x_2312_ = lean_nat_add(v_startInclusive_2308_, v_currPos_2261_);
lean_dec(v_currPos_2261_);
if (v_isShared_2311_ == 0)
{
lean_ctor_set(v___x_2310_, 2, v___x_2312_);
v_slice_2314_ = v___x_2310_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_str_2307_);
lean_ctor_set(v_reuseFailAlloc_2319_, 1, v_startInclusive_2308_);
lean_ctor_set(v_reuseFailAlloc_2319_, 2, v___x_2312_);
v_slice_2314_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2315_ = lean_box(1);
v___x_2316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2316_, 0, v___x_2315_);
lean_ctor_set(v___x_2316_, 1, v_slice_2314_);
v___x_2317_ = lean_apply_2(v_toPure_2254_, lean_box(0), v___x_2316_);
v___x_2318_ = lean_apply_4(v_lift_2255_, lean_box(0), lean_box(0), v___f_2260_, v___x_2317_);
return v___x_2318_;
}
}
}
else
{
lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
lean_dec(v_currPos_2261_);
lean_dec_ref(v_s_2253_);
v___x_2322_ = lean_box(2);
v___x_2323_ = lean_apply_2(v_toPure_2254_, lean_box(0), v___x_2322_);
v___x_2324_ = lean_apply_4(v_lift_2255_, lean_box(0), lean_box(0), v___f_2260_, v___x_2323_);
return v___x_2324_;
}
}
}
}
}
else
{
lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; 
lean_dec_ref(v_s_2253_);
lean_dec(v_inst_2252_);
v___x_2326_ = lean_box(2);
v___x_2327_ = lean_apply_2(v_toPure_2254_, lean_box(0), v___x_2326_);
v___x_2328_ = lean_apply_4(v_lift_2255_, lean_box(0), lean_box(0), v___f_2260_, v___x_2327_);
return v___x_2328_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___redArg___lam__3(lean_object* v_inst_2329_, lean_object* v_inst_2330_, lean_object* v_s_2331_, lean_object* v_toPure_2332_, lean_object* v_lift_2333_, lean_object* v_00_u03b3_2334_, lean_object* v_Pl_2335_, lean_object* v_it_2336_, lean_object* v_init_2337_, lean_object* v___y_2338_){
_start:
{
lean_object* v_toApplicative_2339_; lean_object* v_toBind_2340_; lean_object* v_toPure_2341_; lean_object* v___f_2342_; lean_object* v___x_2343_; 
v_toApplicative_2339_ = lean_ctor_get(v_inst_2329_, 0);
lean_inc_ref(v_toApplicative_2339_);
v_toBind_2340_ = lean_ctor_get(v_inst_2329_, 1);
lean_inc(v_toBind_2340_);
lean_dec_ref(v_inst_2329_);
v_toPure_2341_ = lean_ctor_get(v_toApplicative_2339_, 1);
lean_inc(v_toPure_2341_);
lean_dec_ref(v_toApplicative_2339_);
v___f_2342_ = lean_alloc_closure((void*)(l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___redArg___lam__2), 11, 7);
lean_closure_set(v___f_2342_, 0, v_toPure_2341_);
lean_closure_set(v___f_2342_, 1, v___y_2338_);
lean_closure_set(v___f_2342_, 2, v_toBind_2340_);
lean_closure_set(v___f_2342_, 3, v_inst_2330_);
lean_closure_set(v___f_2342_, 4, v_s_2331_);
lean_closure_set(v___f_2342_, 5, v_toPure_2332_);
lean_closure_set(v___f_2342_, 6, v_lift_2333_);
v___x_2343_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_2342_, v_it_2336_, v_init_2337_, lean_box(0));
return v___x_2343_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___redArg(lean_object* v_inst_2344_, lean_object* v_s_2345_, lean_object* v_inst_2346_, lean_object* v_inst_2347_){
_start:
{
lean_object* v_toApplicative_2348_; lean_object* v_toPure_2349_; lean_object* v___f_2350_; 
v_toApplicative_2348_ = lean_ctor_get(v_inst_2346_, 0);
lean_inc_ref(v_toApplicative_2348_);
lean_dec_ref(v_inst_2346_);
v_toPure_2349_ = lean_ctor_get(v_toApplicative_2348_, 1);
lean_inc(v_toPure_2349_);
lean_dec_ref(v_toApplicative_2348_);
v___f_2350_ = lean_alloc_closure((void*)(l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___redArg___lam__3), 10, 4);
lean_closure_set(v___f_2350_, 0, v_inst_2347_);
lean_closure_set(v___f_2350_, 1, v_inst_2344_);
lean_closure_set(v___f_2350_, 2, v_s_2345_);
lean_closure_set(v___f_2350_, 3, v_toPure_2349_);
return v___f_2350_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad(lean_object* v_00_u03c1_2351_, lean_object* v_00_u03c1_2352_, lean_object* v_00_u03c3_2353_, lean_object* v_inst_2354_, lean_object* v_inst_2355_, lean_object* v_m_2356_, lean_object* v_n_2357_, lean_object* v_s_2358_, lean_object* v_inst_2359_, lean_object* v_inst_2360_){
_start:
{
lean_object* v___x_2361_; 
v___x_2361_ = l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___redArg(v_inst_2354_, v_s_2358_, v_inst_2359_, v_inst_2360_);
return v___x_2361_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad___boxed(lean_object* v_00_u03c1_2362_, lean_object* v_00_u03c1_2363_, lean_object* v_00_u03c3_2364_, lean_object* v_inst_2365_, lean_object* v_inst_2366_, lean_object* v_m_2367_, lean_object* v_n_2368_, lean_object* v_s_2369_, lean_object* v_inst_2370_, lean_object* v_inst_2371_){
_start:
{
lean_object* v_res_2372_; 
v_res_2372_ = l_String_Slice_RevSplitIterator_instIteratorLoopOfMonad(v_00_u03c1_2362_, v_00_u03c1_2363_, v_00_u03c3_2364_, v_inst_2365_, v_inst_2366_, v_m_2367_, v_n_2368_, v_s_2369_, v_inst_2370_, v_inst_2371_);
lean_dec(v_inst_2366_);
lean_dec(v_00_u03c1_2363_);
return v_res_2372_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_revSplit___redArg(lean_object* v_s_2373_, lean_object* v_inst_2374_){
_start:
{
lean_object* v_startInclusive_2375_; lean_object* v_endExclusive_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v_startInclusive_2375_ = lean_ctor_get(v_s_2373_, 1);
v_endExclusive_2376_ = lean_ctor_get(v_s_2373_, 2);
v___x_2377_ = lean_nat_sub(v_endExclusive_2376_, v_startInclusive_2375_);
v___x_2378_ = lean_apply_1(v_inst_2374_, v_s_2373_);
v___x_2379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2379_, 0, v___x_2377_);
lean_ctor_set(v___x_2379_, 1, v___x_2378_);
return v___x_2379_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_revSplit(lean_object* v_00_u03c3_2380_, lean_object* v_00_u03c1_2381_, lean_object* v_s_2382_, lean_object* v_pat_2383_, lean_object* v_inst_2384_){
_start:
{
lean_object* v___x_2385_; 
v___x_2385_ = l_String_Slice_revSplit___redArg(v_s_2382_, v_inst_2384_);
return v___x_2385_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_revSplit___boxed(lean_object* v_00_u03c3_2386_, lean_object* v_00_u03c1_2387_, lean_object* v_s_2388_, lean_object* v_pat_2389_, lean_object* v_inst_2390_){
_start:
{
lean_object* v_res_2391_; 
v_res_2391_ = l_String_Slice_revSplit(v_00_u03c3_2386_, v_00_u03c1_2387_, v_s_2388_, v_pat_2389_, v_inst_2390_);
lean_dec(v_pat_2389_);
return v_res_2391_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_skipSuffix_x3f___redArg(lean_object* v_s_2392_, lean_object* v_inst_2393_){
_start:
{
lean_object* v_skipSuffix_x3f_2394_; lean_object* v___x_2395_; 
v_skipSuffix_x3f_2394_ = lean_ctor_get(v_inst_2393_, 0);
lean_inc_ref(v_skipSuffix_x3f_2394_);
lean_dec_ref(v_inst_2393_);
v___x_2395_ = lean_apply_1(v_skipSuffix_x3f_2394_, v_s_2392_);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_skipSuffix_x3f(lean_object* v_00_u03c1_2396_, lean_object* v_s_2397_, lean_object* v_pat_2398_, lean_object* v_inst_2399_){
_start:
{
lean_object* v_skipSuffix_x3f_2400_; lean_object* v___x_2401_; 
v_skipSuffix_x3f_2400_ = lean_ctor_get(v_inst_2399_, 0);
lean_inc_ref(v_skipSuffix_x3f_2400_);
lean_dec_ref(v_inst_2399_);
v___x_2401_ = lean_apply_1(v_skipSuffix_x3f_2400_, v_s_2397_);
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_skipSuffix_x3f___boxed(lean_object* v_00_u03c1_2402_, lean_object* v_s_2403_, lean_object* v_pat_2404_, lean_object* v_inst_2405_){
_start:
{
lean_object* v_res_2406_; 
v_res_2406_ = l_String_Slice_skipSuffix_x3f(v_00_u03c1_2402_, v_s_2403_, v_pat_2404_, v_inst_2405_);
lean_dec(v_pat_2404_);
return v_res_2406_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkip_x3f___redArg(lean_object* v_s_2407_, lean_object* v_pos_2408_, lean_object* v_inst_2409_){
_start:
{
lean_object* v_str_2410_; lean_object* v_startInclusive_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2429_; 
v_str_2410_ = lean_ctor_get(v_s_2407_, 0);
v_startInclusive_2411_ = lean_ctor_get(v_s_2407_, 1);
v_isSharedCheck_2429_ = !lean_is_exclusive(v_s_2407_);
if (v_isSharedCheck_2429_ == 0)
{
lean_object* v_unused_2430_; 
v_unused_2430_ = lean_ctor_get(v_s_2407_, 2);
lean_dec(v_unused_2430_);
v___x_2413_ = v_s_2407_;
v_isShared_2414_ = v_isSharedCheck_2429_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_startInclusive_2411_);
lean_inc(v_str_2410_);
lean_dec(v_s_2407_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2429_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v_skipSuffix_x3f_2415_; lean_object* v___x_2416_; lean_object* v___x_2418_; 
v_skipSuffix_x3f_2415_ = lean_ctor_get(v_inst_2409_, 0);
lean_inc_ref(v_skipSuffix_x3f_2415_);
lean_dec_ref(v_inst_2409_);
v___x_2416_ = lean_nat_add(v_startInclusive_2411_, v_pos_2408_);
if (v_isShared_2414_ == 0)
{
lean_ctor_set(v___x_2413_, 2, v___x_2416_);
v___x_2418_ = v___x_2413_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_str_2410_);
lean_ctor_set(v_reuseFailAlloc_2428_, 1, v_startInclusive_2411_);
lean_ctor_set(v_reuseFailAlloc_2428_, 2, v___x_2416_);
v___x_2418_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
lean_object* v___x_2419_; 
v___x_2419_ = lean_apply_1(v_skipSuffix_x3f_2415_, v___x_2418_);
if (lean_obj_tag(v___x_2419_) == 0)
{
return v___x_2419_;
}
else
{
lean_object* v_val_2420_; lean_object* v___x_2422_; uint8_t v_isShared_2423_; uint8_t v_isSharedCheck_2427_; 
v_val_2420_ = lean_ctor_get(v___x_2419_, 0);
v_isSharedCheck_2427_ = !lean_is_exclusive(v___x_2419_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2422_ = v___x_2419_;
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
else
{
lean_inc(v_val_2420_);
lean_dec(v___x_2419_);
v___x_2422_ = lean_box(0);
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
v_resetjp_2421_:
{
lean_object* v___x_2425_; 
if (v_isShared_2423_ == 0)
{
v___x_2425_ = v___x_2422_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v_val_2420_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
return v___x_2425_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkip_x3f___redArg___boxed(lean_object* v_s_2431_, lean_object* v_pos_2432_, lean_object* v_inst_2433_){
_start:
{
lean_object* v_res_2434_; 
v_res_2434_ = l_String_Slice_Pos_revSkip_x3f___redArg(v_s_2431_, v_pos_2432_, v_inst_2433_);
lean_dec(v_pos_2432_);
return v_res_2434_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkip_x3f(lean_object* v_00_u03c1_2435_, lean_object* v_s_2436_, lean_object* v_pos_2437_, lean_object* v_pat_2438_, lean_object* v_inst_2439_){
_start:
{
lean_object* v_str_2440_; lean_object* v_startInclusive_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2459_; 
v_str_2440_ = lean_ctor_get(v_s_2436_, 0);
v_startInclusive_2441_ = lean_ctor_get(v_s_2436_, 1);
v_isSharedCheck_2459_ = !lean_is_exclusive(v_s_2436_);
if (v_isSharedCheck_2459_ == 0)
{
lean_object* v_unused_2460_; 
v_unused_2460_ = lean_ctor_get(v_s_2436_, 2);
lean_dec(v_unused_2460_);
v___x_2443_ = v_s_2436_;
v_isShared_2444_ = v_isSharedCheck_2459_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_startInclusive_2441_);
lean_inc(v_str_2440_);
lean_dec(v_s_2436_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2459_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v_skipSuffix_x3f_2445_; lean_object* v___x_2446_; lean_object* v___x_2448_; 
v_skipSuffix_x3f_2445_ = lean_ctor_get(v_inst_2439_, 0);
lean_inc_ref(v_skipSuffix_x3f_2445_);
lean_dec_ref(v_inst_2439_);
v___x_2446_ = lean_nat_add(v_startInclusive_2441_, v_pos_2437_);
if (v_isShared_2444_ == 0)
{
lean_ctor_set(v___x_2443_, 2, v___x_2446_);
v___x_2448_ = v___x_2443_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_str_2440_);
lean_ctor_set(v_reuseFailAlloc_2458_, 1, v_startInclusive_2441_);
lean_ctor_set(v_reuseFailAlloc_2458_, 2, v___x_2446_);
v___x_2448_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
lean_object* v___x_2449_; 
v___x_2449_ = lean_apply_1(v_skipSuffix_x3f_2445_, v___x_2448_);
if (lean_obj_tag(v___x_2449_) == 0)
{
return v___x_2449_;
}
else
{
lean_object* v_val_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2457_; 
v_val_2450_ = lean_ctor_get(v___x_2449_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2449_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2452_ = v___x_2449_;
v_isShared_2453_ = v_isSharedCheck_2457_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_val_2450_);
lean_dec(v___x_2449_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2457_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
lean_object* v___x_2455_; 
if (v_isShared_2453_ == 0)
{
v___x_2455_ = v___x_2452_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v_val_2450_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
return v___x_2455_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkip_x3f___boxed(lean_object* v_00_u03c1_2461_, lean_object* v_s_2462_, lean_object* v_pos_2463_, lean_object* v_pat_2464_, lean_object* v_inst_2465_){
_start:
{
lean_object* v_res_2466_; 
v_res_2466_ = l_String_Slice_Pos_revSkip_x3f(v_00_u03c1_2461_, v_s_2462_, v_pos_2463_, v_pat_2464_, v_inst_2465_);
lean_dec(v_pat_2464_);
lean_dec(v_pos_2463_);
return v_res_2466_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix_x3f___redArg(lean_object* v_s_2467_, lean_object* v_inst_2468_){
_start:
{
lean_object* v_skipSuffix_x3f_2469_; lean_object* v___x_2470_; 
v_skipSuffix_x3f_2469_ = lean_ctor_get(v_inst_2468_, 0);
lean_inc_ref(v_skipSuffix_x3f_2469_);
lean_dec_ref(v_inst_2468_);
lean_inc_ref(v_s_2467_);
v___x_2470_ = lean_apply_1(v_skipSuffix_x3f_2469_, v_s_2467_);
if (lean_obj_tag(v___x_2470_) == 0)
{
lean_object* v___x_2471_; 
lean_dec_ref(v_s_2467_);
v___x_2471_ = lean_box(0);
return v___x_2471_;
}
else
{
lean_object* v_val_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2490_; 
v_val_2472_ = lean_ctor_get(v___x_2470_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2470_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2474_ = v___x_2470_;
v_isShared_2475_ = v_isSharedCheck_2490_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_val_2472_);
lean_dec(v___x_2470_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2490_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v_str_2476_; lean_object* v_startInclusive_2477_; lean_object* v___x_2479_; uint8_t v_isShared_2480_; uint8_t v_isSharedCheck_2488_; 
v_str_2476_ = lean_ctor_get(v_s_2467_, 0);
v_startInclusive_2477_ = lean_ctor_get(v_s_2467_, 1);
v_isSharedCheck_2488_ = !lean_is_exclusive(v_s_2467_);
if (v_isSharedCheck_2488_ == 0)
{
lean_object* v_unused_2489_; 
v_unused_2489_ = lean_ctor_get(v_s_2467_, 2);
lean_dec(v_unused_2489_);
v___x_2479_ = v_s_2467_;
v_isShared_2480_ = v_isSharedCheck_2488_;
goto v_resetjp_2478_;
}
else
{
lean_inc(v_startInclusive_2477_);
lean_inc(v_str_2476_);
lean_dec(v_s_2467_);
v___x_2479_ = lean_box(0);
v_isShared_2480_ = v_isSharedCheck_2488_;
goto v_resetjp_2478_;
}
v_resetjp_2478_:
{
lean_object* v___x_2481_; lean_object* v___x_2483_; 
v___x_2481_ = lean_nat_add(v_startInclusive_2477_, v_val_2472_);
lean_dec(v_val_2472_);
if (v_isShared_2480_ == 0)
{
lean_ctor_set(v___x_2479_, 2, v___x_2481_);
v___x_2483_ = v___x_2479_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v_str_2476_);
lean_ctor_set(v_reuseFailAlloc_2487_, 1, v_startInclusive_2477_);
lean_ctor_set(v_reuseFailAlloc_2487_, 2, v___x_2481_);
v___x_2483_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
lean_object* v___x_2485_; 
if (v_isShared_2475_ == 0)
{
lean_ctor_set(v___x_2474_, 0, v___x_2483_);
v___x_2485_ = v___x_2474_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v___x_2483_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix_x3f(lean_object* v_00_u03c1_2491_, lean_object* v_s_2492_, lean_object* v_pat_2493_, lean_object* v_inst_2494_){
_start:
{
lean_object* v_skipSuffix_x3f_2495_; lean_object* v___x_2496_; 
v_skipSuffix_x3f_2495_ = lean_ctor_get(v_inst_2494_, 0);
lean_inc_ref(v_skipSuffix_x3f_2495_);
lean_dec_ref(v_inst_2494_);
lean_inc_ref(v_s_2492_);
v___x_2496_ = lean_apply_1(v_skipSuffix_x3f_2495_, v_s_2492_);
if (lean_obj_tag(v___x_2496_) == 0)
{
lean_object* v___x_2497_; 
lean_dec_ref(v_s_2492_);
v___x_2497_ = lean_box(0);
return v___x_2497_;
}
else
{
lean_object* v_val_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2516_; 
v_val_2498_ = lean_ctor_get(v___x_2496_, 0);
v_isSharedCheck_2516_ = !lean_is_exclusive(v___x_2496_);
if (v_isSharedCheck_2516_ == 0)
{
v___x_2500_ = v___x_2496_;
v_isShared_2501_ = v_isSharedCheck_2516_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_val_2498_);
lean_dec(v___x_2496_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2516_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v_str_2502_; lean_object* v_startInclusive_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2514_; 
v_str_2502_ = lean_ctor_get(v_s_2492_, 0);
v_startInclusive_2503_ = lean_ctor_get(v_s_2492_, 1);
v_isSharedCheck_2514_ = !lean_is_exclusive(v_s_2492_);
if (v_isSharedCheck_2514_ == 0)
{
lean_object* v_unused_2515_; 
v_unused_2515_ = lean_ctor_get(v_s_2492_, 2);
lean_dec(v_unused_2515_);
v___x_2505_ = v_s_2492_;
v_isShared_2506_ = v_isSharedCheck_2514_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_startInclusive_2503_);
lean_inc(v_str_2502_);
lean_dec(v_s_2492_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2514_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2507_; lean_object* v___x_2509_; 
v___x_2507_ = lean_nat_add(v_startInclusive_2503_, v_val_2498_);
lean_dec(v_val_2498_);
if (v_isShared_2506_ == 0)
{
lean_ctor_set(v___x_2505_, 2, v___x_2507_);
v___x_2509_ = v___x_2505_;
goto v_reusejp_2508_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v_str_2502_);
lean_ctor_set(v_reuseFailAlloc_2513_, 1, v_startInclusive_2503_);
lean_ctor_set(v_reuseFailAlloc_2513_, 2, v___x_2507_);
v___x_2509_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2508_;
}
v_reusejp_2508_:
{
lean_object* v___x_2511_; 
if (v_isShared_2501_ == 0)
{
lean_ctor_set(v___x_2500_, 0, v___x_2509_);
v___x_2511_ = v___x_2500_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v___x_2509_);
v___x_2511_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
return v___x_2511_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix_x3f___boxed(lean_object* v_00_u03c1_2517_, lean_object* v_s_2518_, lean_object* v_pat_2519_, lean_object* v_inst_2520_){
_start:
{
lean_object* v_res_2521_; 
v_res_2521_ = l_String_Slice_dropSuffix_x3f(v_00_u03c1_2517_, v_s_2518_, v_pat_2519_, v_inst_2520_);
lean_dec(v_pat_2519_);
return v_res_2521_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___redArg(lean_object* v_s_2522_, lean_object* v_inst_2523_){
_start:
{
lean_object* v_skipSuffix_x3f_2524_; lean_object* v___x_2525_; 
v_skipSuffix_x3f_2524_ = lean_ctor_get(v_inst_2523_, 0);
lean_inc_ref(v_skipSuffix_x3f_2524_);
lean_dec_ref(v_inst_2523_);
lean_inc_ref(v_s_2522_);
v___x_2525_ = lean_apply_1(v_skipSuffix_x3f_2524_, v_s_2522_);
if (lean_obj_tag(v___x_2525_) == 0)
{
return v_s_2522_;
}
else
{
lean_object* v_val_2526_; lean_object* v_str_2527_; lean_object* v_startInclusive_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2536_; 
v_val_2526_ = lean_ctor_get(v___x_2525_, 0);
lean_inc(v_val_2526_);
lean_dec_ref_known(v___x_2525_, 1);
v_str_2527_ = lean_ctor_get(v_s_2522_, 0);
v_startInclusive_2528_ = lean_ctor_get(v_s_2522_, 1);
v_isSharedCheck_2536_ = !lean_is_exclusive(v_s_2522_);
if (v_isSharedCheck_2536_ == 0)
{
lean_object* v_unused_2537_; 
v_unused_2537_ = lean_ctor_get(v_s_2522_, 2);
lean_dec(v_unused_2537_);
v___x_2530_ = v_s_2522_;
v_isShared_2531_ = v_isSharedCheck_2536_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_startInclusive_2528_);
lean_inc(v_str_2527_);
lean_dec(v_s_2522_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2536_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2532_; lean_object* v___x_2534_; 
v___x_2532_ = lean_nat_add(v_startInclusive_2528_, v_val_2526_);
lean_dec(v_val_2526_);
if (v_isShared_2531_ == 0)
{
lean_ctor_set(v___x_2530_, 2, v___x_2532_);
v___x_2534_ = v___x_2530_;
goto v_reusejp_2533_;
}
else
{
lean_object* v_reuseFailAlloc_2535_; 
v_reuseFailAlloc_2535_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2535_, 0, v_str_2527_);
lean_ctor_set(v_reuseFailAlloc_2535_, 1, v_startInclusive_2528_);
lean_ctor_set(v_reuseFailAlloc_2535_, 2, v___x_2532_);
v___x_2534_ = v_reuseFailAlloc_2535_;
goto v_reusejp_2533_;
}
v_reusejp_2533_:
{
return v___x_2534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix(lean_object* v_00_u03c1_2538_, lean_object* v_s_2539_, lean_object* v_pat_2540_, lean_object* v_inst_2541_){
_start:
{
lean_object* v___x_2542_; 
v___x_2542_ = l_String_Slice_dropSuffix___redArg(v_s_2539_, v_inst_2541_);
return v___x_2542_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropSuffix___boxed(lean_object* v_00_u03c1_2543_, lean_object* v_s_2544_, lean_object* v_pat_2545_, lean_object* v_inst_2546_){
_start:
{
lean_object* v_res_2547_; 
v_res_2547_ = l_String_Slice_dropSuffix(v_00_u03c1_2543_, v_s_2544_, v_pat_2545_, v_inst_2546_);
lean_dec(v_pat_2545_);
return v_res_2547_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropEnd(lean_object* v_s_2548_, lean_object* v_n_2549_){
_start:
{
lean_object* v_str_2550_; lean_object* v_startInclusive_2551_; lean_object* v_endExclusive_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2556_; uint8_t v_isShared_2557_; uint8_t v_isSharedCheck_2562_; 
v_str_2550_ = lean_ctor_get(v_s_2548_, 0);
lean_inc_ref(v_str_2550_);
v_startInclusive_2551_ = lean_ctor_get(v_s_2548_, 1);
lean_inc(v_startInclusive_2551_);
v_endExclusive_2552_ = lean_ctor_get(v_s_2548_, 2);
v___x_2553_ = lean_nat_sub(v_endExclusive_2552_, v_startInclusive_2551_);
v___x_2554_ = l_String_Slice_Pos_prevn(v_s_2548_, v___x_2553_, v_n_2549_);
v_isSharedCheck_2562_ = !lean_is_exclusive(v_s_2548_);
if (v_isSharedCheck_2562_ == 0)
{
lean_object* v_unused_2563_; lean_object* v_unused_2564_; lean_object* v_unused_2565_; 
v_unused_2563_ = lean_ctor_get(v_s_2548_, 2);
lean_dec(v_unused_2563_);
v_unused_2564_ = lean_ctor_get(v_s_2548_, 1);
lean_dec(v_unused_2564_);
v_unused_2565_ = lean_ctor_get(v_s_2548_, 0);
lean_dec(v_unused_2565_);
v___x_2556_ = v_s_2548_;
v_isShared_2557_ = v_isSharedCheck_2562_;
goto v_resetjp_2555_;
}
else
{
lean_dec(v_s_2548_);
v___x_2556_ = lean_box(0);
v_isShared_2557_ = v_isSharedCheck_2562_;
goto v_resetjp_2555_;
}
v_resetjp_2555_:
{
lean_object* v___x_2558_; lean_object* v___x_2560_; 
v___x_2558_ = lean_nat_add(v_startInclusive_2551_, v___x_2554_);
lean_dec(v___x_2554_);
if (v_isShared_2557_ == 0)
{
lean_ctor_set(v___x_2556_, 2, v___x_2558_);
v___x_2560_ = v___x_2556_;
goto v_reusejp_2559_;
}
else
{
lean_object* v_reuseFailAlloc_2561_; 
v_reuseFailAlloc_2561_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2561_, 0, v_str_2550_);
lean_ctor_set(v_reuseFailAlloc_2561_, 1, v_startInclusive_2551_);
lean_ctor_set(v_reuseFailAlloc_2561_, 2, v___x_2558_);
v___x_2560_ = v_reuseFailAlloc_2561_;
goto v_reusejp_2559_;
}
v_reusejp_2559_:
{
return v___x_2560_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___redArg(lean_object* v_s_2566_, lean_object* v_pos_2567_, lean_object* v_inst_2568_){
_start:
{
lean_object* v_str_2569_; lean_object* v_startInclusive_2570_; lean_object* v_skipSuffix_x3f_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; 
v_str_2569_ = lean_ctor_get(v_s_2566_, 0);
v_startInclusive_2570_ = lean_ctor_get(v_s_2566_, 1);
v_skipSuffix_x3f_2571_ = lean_ctor_get(v_inst_2568_, 0);
v___x_2572_ = lean_nat_add(v_startInclusive_2570_, v_pos_2567_);
lean_inc(v_startInclusive_2570_);
lean_inc_ref(v_str_2569_);
v___x_2573_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2573_, 0, v_str_2569_);
lean_ctor_set(v___x_2573_, 1, v_startInclusive_2570_);
lean_ctor_set(v___x_2573_, 2, v___x_2572_);
lean_inc_ref(v_skipSuffix_x3f_2571_);
v___x_2574_ = lean_apply_1(v_skipSuffix_x3f_2571_, v___x_2573_);
if (lean_obj_tag(v___x_2574_) == 0)
{
lean_dec_ref(v_inst_2568_);
return v_pos_2567_;
}
else
{
lean_object* v_val_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; uint8_t v___x_2578_; 
v_val_2575_ = lean_ctor_get(v___x_2574_, 0);
lean_inc(v_val_2575_);
lean_dec_ref_known(v___x_2574_, 1);
v___x_2576_ = lean_unsigned_to_nat(1u);
v___x_2577_ = lean_nat_add(v_val_2575_, v___x_2576_);
v___x_2578_ = lean_nat_dec_le(v___x_2577_, v_pos_2567_);
lean_dec(v___x_2577_);
if (v___x_2578_ == 0)
{
lean_dec(v_val_2575_);
lean_dec_ref(v_inst_2568_);
return v_pos_2567_;
}
else
{
lean_dec(v_pos_2567_);
v_pos_2567_ = v_val_2575_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___redArg___boxed(lean_object* v_s_2580_, lean_object* v_pos_2581_, lean_object* v_inst_2582_){
_start:
{
lean_object* v_res_2583_; 
v_res_2583_ = l_String_Slice_Pos_revSkipWhile___redArg(v_s_2580_, v_pos_2581_, v_inst_2582_);
lean_dec_ref(v_s_2580_);
return v_res_2583_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile(lean_object* v_00_u03c1_2584_, lean_object* v_s_2585_, lean_object* v_pos_2586_, lean_object* v_pat_2587_, lean_object* v_inst_2588_){
_start:
{
lean_object* v___x_2589_; 
v___x_2589_ = l_String_Slice_Pos_revSkipWhile___redArg(v_s_2585_, v_pos_2586_, v_inst_2588_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___boxed(lean_object* v_00_u03c1_2590_, lean_object* v_s_2591_, lean_object* v_pos_2592_, lean_object* v_pat_2593_, lean_object* v_inst_2594_){
_start:
{
lean_object* v_res_2595_; 
v_res_2595_ = l_String_Slice_Pos_revSkipWhile(v_00_u03c1_2590_, v_s_2591_, v_pos_2592_, v_pat_2593_, v_inst_2594_);
lean_dec(v_pat_2593_);
lean_dec_ref(v_s_2591_);
return v_res_2595_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_skipSuffixWhile___redArg(lean_object* v_s_2596_, lean_object* v_inst_2597_){
_start:
{
lean_object* v_startInclusive_2598_; lean_object* v_endExclusive_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; 
v_startInclusive_2598_ = lean_ctor_get(v_s_2596_, 1);
v_endExclusive_2599_ = lean_ctor_get(v_s_2596_, 2);
v___x_2600_ = lean_nat_sub(v_endExclusive_2599_, v_startInclusive_2598_);
v___x_2601_ = l_String_Slice_Pos_revSkipWhile___redArg(v_s_2596_, v___x_2600_, v_inst_2597_);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_skipSuffixWhile___redArg___boxed(lean_object* v_s_2602_, lean_object* v_inst_2603_){
_start:
{
lean_object* v_res_2604_; 
v_res_2604_ = l_String_Slice_skipSuffixWhile___redArg(v_s_2602_, v_inst_2603_);
lean_dec_ref(v_s_2602_);
return v_res_2604_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_skipSuffixWhile(lean_object* v_00_u03c1_2605_, lean_object* v_s_2606_, lean_object* v_pat_2607_, lean_object* v_inst_2608_){
_start:
{
lean_object* v_startInclusive_2609_; lean_object* v_endExclusive_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
v_startInclusive_2609_ = lean_ctor_get(v_s_2606_, 1);
v_endExclusive_2610_ = lean_ctor_get(v_s_2606_, 2);
v___x_2611_ = lean_nat_sub(v_endExclusive_2610_, v_startInclusive_2609_);
v___x_2612_ = l_String_Slice_Pos_revSkipWhile___redArg(v_s_2606_, v___x_2611_, v_inst_2608_);
return v___x_2612_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_skipSuffixWhile___boxed(lean_object* v_00_u03c1_2613_, lean_object* v_s_2614_, lean_object* v_pat_2615_, lean_object* v_inst_2616_){
_start:
{
lean_object* v_res_2617_; 
v_res_2617_ = l_String_Slice_skipSuffixWhile(v_00_u03c1_2613_, v_s_2614_, v_pat_2615_, v_inst_2616_);
lean_dec(v_pat_2615_);
lean_dec_ref(v_s_2614_);
return v_res_2617_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_revAll___redArg(lean_object* v_s_2618_, lean_object* v_inst_2619_){
_start:
{
lean_object* v_startInclusive_2620_; lean_object* v_endExclusive_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; uint8_t v_decide_2625_; 
v_startInclusive_2620_ = lean_ctor_get(v_s_2618_, 1);
v_endExclusive_2621_ = lean_ctor_get(v_s_2618_, 2);
v___x_2622_ = lean_nat_sub(v_endExclusive_2621_, v_startInclusive_2620_);
v___x_2623_ = l_String_Slice_Pos_revSkipWhile___redArg(v_s_2618_, v___x_2622_, v_inst_2619_);
v___x_2624_ = lean_unsigned_to_nat(0u);
v_decide_2625_ = lean_nat_dec_eq(v___x_2623_, v___x_2624_);
lean_dec(v___x_2623_);
return v_decide_2625_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_revAll___redArg___boxed(lean_object* v_s_2626_, lean_object* v_inst_2627_){
_start:
{
uint8_t v_res_2628_; lean_object* v_r_2629_; 
v_res_2628_ = l_String_Slice_revAll___redArg(v_s_2626_, v_inst_2627_);
lean_dec_ref(v_s_2626_);
v_r_2629_ = lean_box(v_res_2628_);
return v_r_2629_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_revAll(lean_object* v_00_u03c1_2630_, lean_object* v_s_2631_, lean_object* v_pat_2632_, lean_object* v_inst_2633_){
_start:
{
lean_object* v_startInclusive_2634_; lean_object* v_endExclusive_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; uint8_t v_decide_2639_; 
v_startInclusive_2634_ = lean_ctor_get(v_s_2631_, 1);
v_endExclusive_2635_ = lean_ctor_get(v_s_2631_, 2);
v___x_2636_ = lean_nat_sub(v_endExclusive_2635_, v_startInclusive_2634_);
v___x_2637_ = l_String_Slice_Pos_revSkipWhile___redArg(v_s_2631_, v___x_2636_, v_inst_2633_);
v___x_2638_ = lean_unsigned_to_nat(0u);
v_decide_2639_ = lean_nat_dec_eq(v___x_2637_, v___x_2638_);
lean_dec(v___x_2637_);
return v_decide_2639_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_revAll___boxed(lean_object* v_00_u03c1_2640_, lean_object* v_s_2641_, lean_object* v_pat_2642_, lean_object* v_inst_2643_){
_start:
{
uint8_t v_res_2644_; lean_object* v_r_2645_; 
v_res_2644_ = l_String_Slice_revAll(v_00_u03c1_2640_, v_s_2641_, v_pat_2642_, v_inst_2643_);
lean_dec(v_pat_2642_);
lean_dec_ref(v_s_2641_);
v_r_2645_ = lean_box(v_res_2644_);
return v_r_2645_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropEndWhile___redArg(lean_object* v_s_2646_, lean_object* v_inst_2647_){
_start:
{
lean_object* v_str_2648_; lean_object* v_startInclusive_2649_; lean_object* v_endExclusive_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2654_; uint8_t v_isShared_2655_; uint8_t v_isSharedCheck_2660_; 
v_str_2648_ = lean_ctor_get(v_s_2646_, 0);
lean_inc_ref(v_str_2648_);
v_startInclusive_2649_ = lean_ctor_get(v_s_2646_, 1);
lean_inc(v_startInclusive_2649_);
v_endExclusive_2650_ = lean_ctor_get(v_s_2646_, 2);
v___x_2651_ = lean_nat_sub(v_endExclusive_2650_, v_startInclusive_2649_);
v___x_2652_ = l_String_Slice_Pos_revSkipWhile___redArg(v_s_2646_, v___x_2651_, v_inst_2647_);
v_isSharedCheck_2660_ = !lean_is_exclusive(v_s_2646_);
if (v_isSharedCheck_2660_ == 0)
{
lean_object* v_unused_2661_; lean_object* v_unused_2662_; lean_object* v_unused_2663_; 
v_unused_2661_ = lean_ctor_get(v_s_2646_, 2);
lean_dec(v_unused_2661_);
v_unused_2662_ = lean_ctor_get(v_s_2646_, 1);
lean_dec(v_unused_2662_);
v_unused_2663_ = lean_ctor_get(v_s_2646_, 0);
lean_dec(v_unused_2663_);
v___x_2654_ = v_s_2646_;
v_isShared_2655_ = v_isSharedCheck_2660_;
goto v_resetjp_2653_;
}
else
{
lean_dec(v_s_2646_);
v___x_2654_ = lean_box(0);
v_isShared_2655_ = v_isSharedCheck_2660_;
goto v_resetjp_2653_;
}
v_resetjp_2653_:
{
lean_object* v___x_2656_; lean_object* v___x_2658_; 
v___x_2656_ = lean_nat_add(v_startInclusive_2649_, v___x_2652_);
lean_dec(v___x_2652_);
if (v_isShared_2655_ == 0)
{
lean_ctor_set(v___x_2654_, 2, v___x_2656_);
v___x_2658_ = v___x_2654_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_str_2648_);
lean_ctor_set(v_reuseFailAlloc_2659_, 1, v_startInclusive_2649_);
lean_ctor_set(v_reuseFailAlloc_2659_, 2, v___x_2656_);
v___x_2658_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
return v___x_2658_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropEndWhile(lean_object* v_00_u03c1_2664_, lean_object* v_s_2665_, lean_object* v_pat_2666_, lean_object* v_inst_2667_){
_start:
{
lean_object* v_str_2668_; lean_object* v_startInclusive_2669_; lean_object* v_endExclusive_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2680_; 
v_str_2668_ = lean_ctor_get(v_s_2665_, 0);
lean_inc_ref(v_str_2668_);
v_startInclusive_2669_ = lean_ctor_get(v_s_2665_, 1);
lean_inc(v_startInclusive_2669_);
v_endExclusive_2670_ = lean_ctor_get(v_s_2665_, 2);
v___x_2671_ = lean_nat_sub(v_endExclusive_2670_, v_startInclusive_2669_);
v___x_2672_ = l_String_Slice_Pos_revSkipWhile___redArg(v_s_2665_, v___x_2671_, v_inst_2667_);
v_isSharedCheck_2680_ = !lean_is_exclusive(v_s_2665_);
if (v_isSharedCheck_2680_ == 0)
{
lean_object* v_unused_2681_; lean_object* v_unused_2682_; lean_object* v_unused_2683_; 
v_unused_2681_ = lean_ctor_get(v_s_2665_, 2);
lean_dec(v_unused_2681_);
v_unused_2682_ = lean_ctor_get(v_s_2665_, 1);
lean_dec(v_unused_2682_);
v_unused_2683_ = lean_ctor_get(v_s_2665_, 0);
lean_dec(v_unused_2683_);
v___x_2674_ = v_s_2665_;
v_isShared_2675_ = v_isSharedCheck_2680_;
goto v_resetjp_2673_;
}
else
{
lean_dec(v_s_2665_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2680_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2676_; lean_object* v___x_2678_; 
v___x_2676_ = lean_nat_add(v_startInclusive_2669_, v___x_2672_);
lean_dec(v___x_2672_);
if (v_isShared_2675_ == 0)
{
lean_ctor_set(v___x_2674_, 2, v___x_2676_);
v___x_2678_ = v___x_2674_;
goto v_reusejp_2677_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v_str_2668_);
lean_ctor_set(v_reuseFailAlloc_2679_, 1, v_startInclusive_2669_);
lean_ctor_set(v_reuseFailAlloc_2679_, 2, v___x_2676_);
v___x_2678_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2677_;
}
v_reusejp_2677_:
{
return v___x_2678_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_dropEndWhile___boxed(lean_object* v_00_u03c1_2684_, lean_object* v_s_2685_, lean_object* v_pat_2686_, lean_object* v_inst_2687_){
_start:
{
lean_object* v_res_2688_; 
v_res_2688_ = l_String_Slice_dropEndWhile(v_00_u03c1_2684_, v_s_2685_, v_pat_2686_, v_inst_2687_);
lean_dec(v_pat_2686_);
return v_res_2688_;
}
}
static lean_object* _init_l_String_Slice_trimAsciiEnd___closed__0(void){
_start:
{
lean_object* v___x_2689_; lean_object* v___x_2690_; 
v___x_2689_ = ((lean_object*)(l_String_Slice_trimAsciiStart___closed__0));
v___x_2690_ = l_String_Slice_Pattern_CharPred_instBackwardPatternForallCharBool(v___x_2689_);
return v___x_2690_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_trimAsciiEnd(lean_object* v_s_2691_){
_start:
{
lean_object* v___x_2692_; lean_object* v_str_2693_; lean_object* v_startInclusive_2694_; lean_object* v_endExclusive_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2705_; 
v___x_2692_ = lean_obj_once(&l_String_Slice_trimAsciiEnd___closed__0, &l_String_Slice_trimAsciiEnd___closed__0_once, _init_l_String_Slice_trimAsciiEnd___closed__0);
v_str_2693_ = lean_ctor_get(v_s_2691_, 0);
lean_inc_ref(v_str_2693_);
v_startInclusive_2694_ = lean_ctor_get(v_s_2691_, 1);
lean_inc(v_startInclusive_2694_);
v_endExclusive_2695_ = lean_ctor_get(v_s_2691_, 2);
v___x_2696_ = lean_nat_sub(v_endExclusive_2695_, v_startInclusive_2694_);
v___x_2697_ = l_String_Slice_Pos_revSkipWhile___redArg(v_s_2691_, v___x_2696_, v___x_2692_);
v_isSharedCheck_2705_ = !lean_is_exclusive(v_s_2691_);
if (v_isSharedCheck_2705_ == 0)
{
lean_object* v_unused_2706_; lean_object* v_unused_2707_; lean_object* v_unused_2708_; 
v_unused_2706_ = lean_ctor_get(v_s_2691_, 2);
lean_dec(v_unused_2706_);
v_unused_2707_ = lean_ctor_get(v_s_2691_, 1);
lean_dec(v_unused_2707_);
v_unused_2708_ = lean_ctor_get(v_s_2691_, 0);
lean_dec(v_unused_2708_);
v___x_2699_ = v_s_2691_;
v_isShared_2700_ = v_isSharedCheck_2705_;
goto v_resetjp_2698_;
}
else
{
lean_dec(v_s_2691_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2705_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v___x_2701_; lean_object* v___x_2703_; 
v___x_2701_ = lean_nat_add(v_startInclusive_2694_, v___x_2697_);
lean_dec(v___x_2697_);
if (v_isShared_2700_ == 0)
{
lean_ctor_set(v___x_2699_, 2, v___x_2701_);
v___x_2703_ = v___x_2699_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v_str_2693_);
lean_ctor_set(v_reuseFailAlloc_2704_, 1, v_startInclusive_2694_);
lean_ctor_set(v_reuseFailAlloc_2704_, 2, v___x_2701_);
v___x_2703_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
return v___x_2703_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_takeEnd(lean_object* v_s_2709_, lean_object* v_n_2710_){
_start:
{
lean_object* v_str_2711_; lean_object* v_startInclusive_2712_; lean_object* v_endExclusive_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2717_; uint8_t v_isShared_2718_; uint8_t v_isSharedCheck_2723_; 
v_str_2711_ = lean_ctor_get(v_s_2709_, 0);
lean_inc_ref(v_str_2711_);
v_startInclusive_2712_ = lean_ctor_get(v_s_2709_, 1);
lean_inc(v_startInclusive_2712_);
v_endExclusive_2713_ = lean_ctor_get(v_s_2709_, 2);
lean_inc(v_endExclusive_2713_);
v___x_2714_ = lean_nat_sub(v_endExclusive_2713_, v_startInclusive_2712_);
v___x_2715_ = l_String_Slice_Pos_prevn(v_s_2709_, v___x_2714_, v_n_2710_);
v_isSharedCheck_2723_ = !lean_is_exclusive(v_s_2709_);
if (v_isSharedCheck_2723_ == 0)
{
lean_object* v_unused_2724_; lean_object* v_unused_2725_; lean_object* v_unused_2726_; 
v_unused_2724_ = lean_ctor_get(v_s_2709_, 2);
lean_dec(v_unused_2724_);
v_unused_2725_ = lean_ctor_get(v_s_2709_, 1);
lean_dec(v_unused_2725_);
v_unused_2726_ = lean_ctor_get(v_s_2709_, 0);
lean_dec(v_unused_2726_);
v___x_2717_ = v_s_2709_;
v_isShared_2718_ = v_isSharedCheck_2723_;
goto v_resetjp_2716_;
}
else
{
lean_dec(v_s_2709_);
v___x_2717_ = lean_box(0);
v_isShared_2718_ = v_isSharedCheck_2723_;
goto v_resetjp_2716_;
}
v_resetjp_2716_:
{
lean_object* v___x_2719_; lean_object* v___x_2721_; 
v___x_2719_ = lean_nat_add(v_startInclusive_2712_, v___x_2715_);
lean_dec(v___x_2715_);
lean_dec(v_startInclusive_2712_);
if (v_isShared_2718_ == 0)
{
lean_ctor_set(v___x_2717_, 1, v___x_2719_);
v___x_2721_ = v___x_2717_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_str_2711_);
lean_ctor_set(v_reuseFailAlloc_2722_, 1, v___x_2719_);
lean_ctor_set(v_reuseFailAlloc_2722_, 2, v_endExclusive_2713_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_takeEndWhile___redArg(lean_object* v_s_2727_, lean_object* v_inst_2728_){
_start:
{
lean_object* v_str_2729_; lean_object* v_startInclusive_2730_; lean_object* v_endExclusive_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2741_; 
v_str_2729_ = lean_ctor_get(v_s_2727_, 0);
lean_inc_ref(v_str_2729_);
v_startInclusive_2730_ = lean_ctor_get(v_s_2727_, 1);
lean_inc(v_startInclusive_2730_);
v_endExclusive_2731_ = lean_ctor_get(v_s_2727_, 2);
lean_inc(v_endExclusive_2731_);
v___x_2732_ = lean_nat_sub(v_endExclusive_2731_, v_startInclusive_2730_);
v___x_2733_ = l_String_Slice_Pos_revSkipWhile___redArg(v_s_2727_, v___x_2732_, v_inst_2728_);
v_isSharedCheck_2741_ = !lean_is_exclusive(v_s_2727_);
if (v_isSharedCheck_2741_ == 0)
{
lean_object* v_unused_2742_; lean_object* v_unused_2743_; lean_object* v_unused_2744_; 
v_unused_2742_ = lean_ctor_get(v_s_2727_, 2);
lean_dec(v_unused_2742_);
v_unused_2743_ = lean_ctor_get(v_s_2727_, 1);
lean_dec(v_unused_2743_);
v_unused_2744_ = lean_ctor_get(v_s_2727_, 0);
lean_dec(v_unused_2744_);
v___x_2735_ = v_s_2727_;
v_isShared_2736_ = v_isSharedCheck_2741_;
goto v_resetjp_2734_;
}
else
{
lean_dec(v_s_2727_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2741_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___x_2737_; lean_object* v___x_2739_; 
v___x_2737_ = lean_nat_add(v_startInclusive_2730_, v___x_2733_);
lean_dec(v___x_2733_);
lean_dec(v_startInclusive_2730_);
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 1, v___x_2737_);
v___x_2739_ = v___x_2735_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_str_2729_);
lean_ctor_set(v_reuseFailAlloc_2740_, 1, v___x_2737_);
lean_ctor_set(v_reuseFailAlloc_2740_, 2, v_endExclusive_2731_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_takeEndWhile(lean_object* v_00_u03c1_2745_, lean_object* v_s_2746_, lean_object* v_pat_2747_, lean_object* v_inst_2748_){
_start:
{
lean_object* v_str_2749_; lean_object* v_startInclusive_2750_; lean_object* v_endExclusive_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2761_; 
v_str_2749_ = lean_ctor_get(v_s_2746_, 0);
lean_inc_ref(v_str_2749_);
v_startInclusive_2750_ = lean_ctor_get(v_s_2746_, 1);
lean_inc(v_startInclusive_2750_);
v_endExclusive_2751_ = lean_ctor_get(v_s_2746_, 2);
lean_inc(v_endExclusive_2751_);
v___x_2752_ = lean_nat_sub(v_endExclusive_2751_, v_startInclusive_2750_);
v___x_2753_ = l_String_Slice_Pos_revSkipWhile___redArg(v_s_2746_, v___x_2752_, v_inst_2748_);
v_isSharedCheck_2761_ = !lean_is_exclusive(v_s_2746_);
if (v_isSharedCheck_2761_ == 0)
{
lean_object* v_unused_2762_; lean_object* v_unused_2763_; lean_object* v_unused_2764_; 
v_unused_2762_ = lean_ctor_get(v_s_2746_, 2);
lean_dec(v_unused_2762_);
v_unused_2763_ = lean_ctor_get(v_s_2746_, 1);
lean_dec(v_unused_2763_);
v_unused_2764_ = lean_ctor_get(v_s_2746_, 0);
lean_dec(v_unused_2764_);
v___x_2755_ = v_s_2746_;
v_isShared_2756_ = v_isSharedCheck_2761_;
goto v_resetjp_2754_;
}
else
{
lean_dec(v_s_2746_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2761_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2757_; lean_object* v___x_2759_; 
v___x_2757_ = lean_nat_add(v_startInclusive_2750_, v___x_2753_);
lean_dec(v___x_2753_);
lean_dec(v_startInclusive_2750_);
if (v_isShared_2756_ == 0)
{
lean_ctor_set(v___x_2755_, 1, v___x_2757_);
v___x_2759_ = v___x_2755_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v_str_2749_);
lean_ctor_set(v_reuseFailAlloc_2760_, 1, v___x_2757_);
lean_ctor_set(v_reuseFailAlloc_2760_, 2, v_endExclusive_2751_);
v___x_2759_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
return v___x_2759_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_takeEndWhile___boxed(lean_object* v_00_u03c1_2765_, lean_object* v_s_2766_, lean_object* v_pat_2767_, lean_object* v_inst_2768_){
_start:
{
lean_object* v_res_2769_; 
v_res_2769_ = l_String_Slice_takeEndWhile(v_00_u03c1_2765_, v_s_2766_, v_pat_2767_, v_inst_2768_);
lean_dec(v_pat_2767_);
return v_res_2769_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_revFind_x3f___redArg(lean_object* v_inst_2770_, lean_object* v_s_2771_, lean_object* v_inst_2772_){
_start:
{
lean_object* v___f_2773_; lean_object* v_searcher_2774_; lean_object* v___x_2775_; lean_object* v___f_2776_; lean_object* v___x_2777_; 
v___f_2773_ = ((lean_object*)(l_String_Slice_replace___redArg___closed__0));
lean_inc_ref(v_s_2771_);
v_searcher_2774_ = lean_apply_1(v_inst_2772_, v_s_2771_);
v___x_2775_ = lean_box(0);
v___f_2776_ = ((lean_object*)(l_String_Slice_find_x3f___redArg___closed__0));
v___x_2777_ = lean_apply_7(v_inst_2770_, v_s_2771_, v___f_2773_, lean_box(0), lean_box(0), v_searcher_2774_, v___x_2775_, v___f_2776_);
return v___x_2777_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_revFind_x3f(lean_object* v_00_u03c3_2778_, lean_object* v_inst_2779_, lean_object* v_inst_2780_, lean_object* v_00_u03c1_2781_, lean_object* v_s_2782_, lean_object* v_pat_2783_, lean_object* v_inst_2784_){
_start:
{
lean_object* v___x_2785_; 
v___x_2785_ = l_String_Slice_revFind_x3f___redArg(v_inst_2780_, v_s_2782_, v_inst_2784_);
return v___x_2785_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_revFind_x3f___boxed(lean_object* v_00_u03c3_2786_, lean_object* v_inst_2787_, lean_object* v_inst_2788_, lean_object* v_00_u03c1_2789_, lean_object* v_s_2790_, lean_object* v_pat_2791_, lean_object* v_inst_2792_){
_start:
{
lean_object* v_res_2793_; 
v_res_2793_ = l_String_Slice_revFind_x3f(v_00_u03c3_2786_, v_inst_2787_, v_inst_2788_, v_00_u03c1_2789_, v_s_2790_, v_pat_2791_, v_inst_2792_);
lean_dec(v_pat_2791_);
lean_dec(v_inst_2787_);
return v_res_2793_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00String_Slice_trimAscii_spec__0(lean_object* v_s_2794_, lean_object* v_pos_2795_){
_start:
{
lean_object* v_str_2796_; lean_object* v_startInclusive_2797_; lean_object* v_endExclusive_2798_; lean_object* v___x_2799_; lean_object* v___x_2808_; lean_object* v___x_2809_; uint8_t v_decide_2810_; 
v_str_2796_ = lean_ctor_get(v_s_2794_, 0);
v_startInclusive_2797_ = lean_ctor_get(v_s_2794_, 1);
v_endExclusive_2798_ = lean_ctor_get(v_s_2794_, 2);
v___x_2799_ = lean_nat_add(v_startInclusive_2797_, v_pos_2795_);
v___x_2808_ = lean_unsigned_to_nat(0u);
v___x_2809_ = lean_nat_sub(v_endExclusive_2798_, v___x_2799_);
v_decide_2810_ = lean_nat_dec_eq(v___x_2808_, v___x_2809_);
lean_dec(v___x_2809_);
if (v_decide_2810_ == 0)
{
uint32_t v___x_2811_; uint32_t v___x_2812_; uint8_t v___x_2813_; 
v___x_2811_ = lean_string_utf8_get_fast(v_str_2796_, v___x_2799_);
v___x_2812_ = 32;
v___x_2813_ = lean_uint32_dec_eq(v___x_2811_, v___x_2812_);
if (v___x_2813_ == 0)
{
uint32_t v___x_2814_; uint8_t v___x_2815_; 
v___x_2814_ = 9;
v___x_2815_ = lean_uint32_dec_eq(v___x_2811_, v___x_2814_);
if (v___x_2815_ == 0)
{
uint32_t v___x_2816_; uint8_t v___x_2817_; 
v___x_2816_ = 13;
v___x_2817_ = lean_uint32_dec_eq(v___x_2811_, v___x_2816_);
if (v___x_2817_ == 0)
{
uint32_t v___x_2818_; uint8_t v___x_2819_; 
v___x_2818_ = 10;
v___x_2819_ = lean_uint32_dec_eq(v___x_2811_, v___x_2818_);
if (v___x_2819_ == 0)
{
lean_dec(v___x_2799_);
return v_pos_2795_;
}
else
{
goto v___jp_2800_;
}
}
else
{
goto v___jp_2800_;
}
}
else
{
goto v___jp_2800_;
}
}
else
{
goto v___jp_2800_;
}
}
else
{
lean_dec(v___x_2799_);
return v_pos_2795_;
}
v___jp_2800_:
{
lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; uint8_t v___x_2806_; 
v___x_2801_ = lean_string_utf8_next_fast(v_str_2796_, v___x_2799_);
v___x_2802_ = lean_nat_sub(v___x_2801_, v___x_2799_);
lean_dec(v___x_2799_);
v___x_2803_ = lean_nat_add(v_pos_2795_, v___x_2802_);
lean_dec(v___x_2802_);
v___x_2804_ = lean_unsigned_to_nat(1u);
v___x_2805_ = lean_nat_add(v_pos_2795_, v___x_2804_);
v___x_2806_ = lean_nat_dec_le(v___x_2805_, v___x_2803_);
lean_dec(v___x_2805_);
if (v___x_2806_ == 0)
{
lean_dec(v___x_2803_);
return v_pos_2795_;
}
else
{
lean_dec(v_pos_2795_);
v_pos_2795_ = v___x_2803_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00String_Slice_trimAscii_spec__0___boxed(lean_object* v_s_2820_, lean_object* v_pos_2821_){
_start:
{
lean_object* v_res_2822_; 
v_res_2822_ = l_String_Slice_Pos_skipWhile___at___00String_Slice_trimAscii_spec__0(v_s_2820_, v_pos_2821_);
lean_dec_ref(v_s_2820_);
return v_res_2822_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00String_Slice_trimAscii_spec__1(lean_object* v_s_2823_, lean_object* v_pos_2824_){
_start:
{
lean_object* v_str_2825_; lean_object* v_startInclusive_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; uint8_t v_decide_2830_; 
v_str_2825_ = lean_ctor_get(v_s_2823_, 0);
v_startInclusive_2826_ = lean_ctor_get(v_s_2823_, 1);
v___x_2827_ = lean_nat_add(v_startInclusive_2826_, v_pos_2824_);
v___x_2828_ = lean_nat_sub(v___x_2827_, v_startInclusive_2826_);
v___x_2829_ = lean_unsigned_to_nat(0u);
v_decide_2830_ = lean_nat_dec_eq(v___x_2828_, v___x_2829_);
if (v_decide_2830_ == 0)
{
lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2839_; uint32_t v___x_2840_; uint32_t v___x_2841_; uint8_t v___x_2842_; 
lean_inc(v_startInclusive_2826_);
lean_inc_ref(v_str_2825_);
v___x_2831_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2831_, 0, v_str_2825_);
lean_ctor_set(v___x_2831_, 1, v_startInclusive_2826_);
lean_ctor_set(v___x_2831_, 2, v___x_2827_);
v___x_2832_ = lean_unsigned_to_nat(1u);
v___x_2833_ = lean_nat_sub(v___x_2828_, v___x_2832_);
lean_dec(v___x_2828_);
v___x_2834_ = l_String_Slice_posLE(v___x_2831_, v___x_2833_);
lean_dec_ref_known(v___x_2831_, 3);
v___x_2839_ = lean_nat_add(v_startInclusive_2826_, v___x_2834_);
v___x_2840_ = lean_string_utf8_get_fast(v_str_2825_, v___x_2839_);
lean_dec(v___x_2839_);
v___x_2841_ = 32;
v___x_2842_ = lean_uint32_dec_eq(v___x_2840_, v___x_2841_);
if (v___x_2842_ == 0)
{
uint32_t v___x_2843_; uint8_t v___x_2844_; 
v___x_2843_ = 9;
v___x_2844_ = lean_uint32_dec_eq(v___x_2840_, v___x_2843_);
if (v___x_2844_ == 0)
{
uint32_t v___x_2845_; uint8_t v___x_2846_; 
v___x_2845_ = 13;
v___x_2846_ = lean_uint32_dec_eq(v___x_2840_, v___x_2845_);
if (v___x_2846_ == 0)
{
uint32_t v___x_2847_; uint8_t v___x_2848_; 
v___x_2847_ = 10;
v___x_2848_ = lean_uint32_dec_eq(v___x_2840_, v___x_2847_);
if (v___x_2848_ == 0)
{
lean_dec(v___x_2834_);
return v_pos_2824_;
}
else
{
goto v___jp_2835_;
}
}
else
{
goto v___jp_2835_;
}
}
else
{
goto v___jp_2835_;
}
}
else
{
goto v___jp_2835_;
}
v___jp_2835_:
{
lean_object* v___x_2836_; uint8_t v___x_2837_; 
v___x_2836_ = lean_nat_add(v___x_2834_, v___x_2832_);
v___x_2837_ = lean_nat_dec_le(v___x_2836_, v_pos_2824_);
lean_dec(v___x_2836_);
if (v___x_2837_ == 0)
{
lean_dec(v___x_2834_);
return v_pos_2824_;
}
else
{
lean_dec(v_pos_2824_);
v_pos_2824_ = v___x_2834_;
goto _start;
}
}
}
else
{
lean_dec(v___x_2828_);
lean_dec(v___x_2827_);
return v_pos_2824_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00String_Slice_trimAscii_spec__1___boxed(lean_object* v_s_2849_, lean_object* v_pos_2850_){
_start:
{
lean_object* v_res_2851_; 
v_res_2851_ = l_String_Slice_Pos_revSkipWhile___at___00String_Slice_trimAscii_spec__1(v_s_2849_, v_pos_2850_);
lean_dec_ref(v_s_2849_);
return v_res_2851_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_trimAscii(lean_object* v_s_2852_){
_start:
{
lean_object* v_str_2853_; lean_object* v_startInclusive_2854_; lean_object* v_endExclusive_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2869_; 
v_str_2853_ = lean_ctor_get(v_s_2852_, 0);
lean_inc_ref(v_str_2853_);
v_startInclusive_2854_ = lean_ctor_get(v_s_2852_, 1);
lean_inc(v_startInclusive_2854_);
v_endExclusive_2855_ = lean_ctor_get(v_s_2852_, 2);
lean_inc(v_endExclusive_2855_);
v___x_2856_ = lean_unsigned_to_nat(0u);
v___x_2857_ = l_String_Slice_Pos_skipWhile___at___00String_Slice_trimAscii_spec__0(v_s_2852_, v___x_2856_);
v_isSharedCheck_2869_ = !lean_is_exclusive(v_s_2852_);
if (v_isSharedCheck_2869_ == 0)
{
lean_object* v_unused_2870_; lean_object* v_unused_2871_; lean_object* v_unused_2872_; 
v_unused_2870_ = lean_ctor_get(v_s_2852_, 2);
lean_dec(v_unused_2870_);
v_unused_2871_ = lean_ctor_get(v_s_2852_, 1);
lean_dec(v_unused_2871_);
v_unused_2872_ = lean_ctor_get(v_s_2852_, 0);
lean_dec(v_unused_2872_);
v___x_2859_ = v_s_2852_;
v_isShared_2860_ = v_isSharedCheck_2869_;
goto v_resetjp_2858_;
}
else
{
lean_dec(v_s_2852_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2869_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
lean_object* v___x_2861_; lean_object* v___x_2863_; 
v___x_2861_ = lean_nat_add(v_startInclusive_2854_, v___x_2857_);
lean_dec(v___x_2857_);
lean_dec(v_startInclusive_2854_);
lean_inc(v_endExclusive_2855_);
lean_inc(v___x_2861_);
lean_inc_ref(v_str_2853_);
if (v_isShared_2860_ == 0)
{
lean_ctor_set(v___x_2859_, 1, v___x_2861_);
v___x_2863_ = v___x_2859_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v_str_2853_);
lean_ctor_set(v_reuseFailAlloc_2868_, 1, v___x_2861_);
lean_ctor_set(v_reuseFailAlloc_2868_, 2, v_endExclusive_2855_);
v___x_2863_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; 
v___x_2864_ = lean_nat_sub(v_endExclusive_2855_, v___x_2861_);
lean_dec(v_endExclusive_2855_);
v___x_2865_ = l_String_Slice_Pos_revSkipWhile___at___00String_Slice_trimAscii_spec__1(v___x_2863_, v___x_2864_);
lean_dec_ref(v___x_2863_);
v___x_2866_ = lean_nat_add(v___x_2861_, v___x_2865_);
lean_dec(v___x_2865_);
v___x_2867_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2867_, 0, v_str_2853_);
lean_ctor_set(v___x_2867_, 1, v___x_2861_);
lean_ctor_set(v___x_2867_, 2, v___x_2866_);
return v___x_2867_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_String_Slice_0__String_Slice_eqIgnoreAsciiCase_go(lean_object* v_s1_2873_, lean_object* v_s1Curr_2874_, lean_object* v_s2_2875_, lean_object* v_s2Curr_2876_){
_start:
{
lean_object* v_str_2877_; lean_object* v_startInclusive_2878_; lean_object* v_endExclusive_2879_; lean_object* v___x_2880_; lean_object* v___x_2887_; lean_object* v___x_2888_; uint8_t v___x_2889_; 
v_str_2877_ = lean_ctor_get(v_s1_2873_, 0);
v_startInclusive_2878_ = lean_ctor_get(v_s1_2873_, 1);
v_endExclusive_2879_ = lean_ctor_get(v_s1_2873_, 2);
v___x_2880_ = lean_nat_sub(v_endExclusive_2879_, v_startInclusive_2878_);
v___x_2887_ = lean_unsigned_to_nat(1u);
v___x_2888_ = lean_nat_add(v_s1Curr_2874_, v___x_2887_);
v___x_2889_ = lean_nat_dec_le(v___x_2888_, v___x_2880_);
if (v___x_2889_ == 0)
{
lean_dec(v___x_2888_);
goto v___jp_2881_;
}
else
{
lean_object* v_str_2890_; lean_object* v_startInclusive_2891_; lean_object* v_endExclusive_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; uint8_t v___x_2895_; 
v_str_2890_ = lean_ctor_get(v_s2_2875_, 0);
v_startInclusive_2891_ = lean_ctor_get(v_s2_2875_, 1);
v_endExclusive_2892_ = lean_ctor_get(v_s2_2875_, 2);
v___x_2893_ = lean_nat_sub(v_endExclusive_2892_, v_startInclusive_2891_);
v___x_2894_ = lean_nat_add(v_s2Curr_2876_, v___x_2887_);
v___x_2895_ = lean_nat_dec_le(v___x_2894_, v___x_2893_);
lean_dec(v___x_2893_);
if (v___x_2895_ == 0)
{
lean_dec(v___x_2894_);
lean_dec(v___x_2888_);
goto v___jp_2881_;
}
else
{
lean_object* v___x_2896_; uint8_t v___x_2897_; uint8_t v___x_2898_; uint8_t v___x_2899_; uint8_t v___x_2900_; uint8_t v___x_2901_; uint8_t v___x_2902_; uint8_t v___x_2903_; uint8_t v___x_2904_; uint8_t v_c1_2905_; lean_object* v___x_2906_; uint8_t v___x_2907_; uint8_t v___x_2908_; uint8_t v___x_2909_; uint8_t v___x_2910_; uint8_t v___x_2911_; uint8_t v_c2_2912_; uint8_t v___x_2913_; 
lean_dec(v___x_2880_);
v___x_2896_ = lean_nat_add(v_startInclusive_2878_, v_s1Curr_2874_);
lean_dec(v_s1Curr_2874_);
v___x_2897_ = lean_string_get_byte_fast(v_str_2877_, v___x_2896_);
v___x_2898_ = 65;
v___x_2899_ = lean_uint8_sub(v___x_2897_, v___x_2898_);
v___x_2900_ = 26;
v___x_2901_ = lean_uint8_dec_lt(v___x_2899_, v___x_2900_);
v___x_2902_ = lean_bool_to_uint8(v___x_2901_);
v___x_2903_ = 5;
v___x_2904_ = lean_uint8_shift_left(v___x_2902_, v___x_2903_);
v_c1_2905_ = lean_uint8_add(v___x_2897_, v___x_2904_);
v___x_2906_ = lean_nat_add(v_startInclusive_2891_, v_s2Curr_2876_);
lean_dec(v_s2Curr_2876_);
v___x_2907_ = lean_string_get_byte_fast(v_str_2890_, v___x_2906_);
v___x_2908_ = lean_uint8_sub(v___x_2907_, v___x_2898_);
v___x_2909_ = lean_uint8_dec_lt(v___x_2908_, v___x_2900_);
v___x_2910_ = lean_bool_to_uint8(v___x_2909_);
v___x_2911_ = lean_uint8_shift_left(v___x_2910_, v___x_2903_);
v_c2_2912_ = lean_uint8_add(v___x_2907_, v___x_2911_);
v___x_2913_ = lean_uint8_dec_eq(v_c1_2905_, v_c2_2912_);
if (v___x_2913_ == 0)
{
lean_dec(v___x_2894_);
lean_dec(v___x_2888_);
return v___x_2913_;
}
else
{
v_s1Curr_2874_ = v___x_2888_;
v_s2Curr_2876_ = v___x_2894_;
goto _start;
}
}
}
v___jp_2881_:
{
uint8_t v_decide_2882_; 
v_decide_2882_ = lean_nat_dec_eq(v_s1Curr_2874_, v___x_2880_);
lean_dec(v___x_2880_);
lean_dec(v_s1Curr_2874_);
if (v_decide_2882_ == 0)
{
lean_dec(v_s2Curr_2876_);
return v_decide_2882_;
}
else
{
lean_object* v_startInclusive_2883_; lean_object* v_endExclusive_2884_; lean_object* v___x_2885_; uint8_t v_decide_2886_; 
v_startInclusive_2883_ = lean_ctor_get(v_s2_2875_, 1);
v_endExclusive_2884_ = lean_ctor_get(v_s2_2875_, 2);
v___x_2885_ = lean_nat_sub(v_endExclusive_2884_, v_startInclusive_2883_);
v_decide_2886_ = lean_nat_dec_eq(v_s2Curr_2876_, v___x_2885_);
lean_dec(v___x_2885_);
lean_dec(v_s2Curr_2876_);
return v_decide_2886_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_eqIgnoreAsciiCase_go___boxed(lean_object* v_s1_2915_, lean_object* v_s1Curr_2916_, lean_object* v_s2_2917_, lean_object* v_s2Curr_2918_){
_start:
{
uint8_t v_res_2919_; lean_object* v_r_2920_; 
v_res_2919_ = l___private_Init_Data_String_Slice_0__String_Slice_eqIgnoreAsciiCase_go(v_s1_2915_, v_s1Curr_2916_, v_s2_2917_, v_s2Curr_2918_);
lean_dec_ref(v_s2_2917_);
lean_dec_ref(v_s1_2915_);
v_r_2920_ = lean_box(v_res_2919_);
return v_r_2920_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_eqIgnoreAsciiCase(lean_object* v_s1_2921_, lean_object* v_s2_2922_){
_start:
{
lean_object* v_startInclusive_2923_; lean_object* v_endExclusive_2924_; lean_object* v_startInclusive_2925_; lean_object* v_endExclusive_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; uint8_t v___x_2929_; 
v_startInclusive_2923_ = lean_ctor_get(v_s1_2921_, 1);
v_endExclusive_2924_ = lean_ctor_get(v_s1_2921_, 2);
v_startInclusive_2925_ = lean_ctor_get(v_s2_2922_, 1);
v_endExclusive_2926_ = lean_ctor_get(v_s2_2922_, 2);
v___x_2927_ = lean_nat_sub(v_endExclusive_2924_, v_startInclusive_2923_);
v___x_2928_ = lean_nat_sub(v_endExclusive_2926_, v_startInclusive_2925_);
v___x_2929_ = lean_nat_dec_eq(v___x_2927_, v___x_2928_);
lean_dec(v___x_2928_);
lean_dec(v___x_2927_);
if (v___x_2929_ == 0)
{
return v___x_2929_;
}
else
{
lean_object* v___x_2930_; uint8_t v___x_2931_; 
v___x_2930_ = lean_unsigned_to_nat(0u);
v___x_2931_ = l___private_Init_Data_String_Slice_0__String_Slice_eqIgnoreAsciiCase_go(v_s1_2921_, v___x_2930_, v_s2_2922_, v___x_2930_);
return v___x_2931_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_eqIgnoreAsciiCase___boxed(lean_object* v_s1_2932_, lean_object* v_s2_2933_){
_start:
{
uint8_t v_res_2934_; lean_object* v_r_2935_; 
v_res_2934_ = l_String_Slice_eqIgnoreAsciiCase(v_s1_2932_, v_s2_2933_);
lean_dec_ref(v_s2_2933_);
lean_dec_ref(v_s1_2932_);
v_r_2935_ = lean_box(v_res_2934_);
return v_r_2935_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_lines_lineMap(lean_object* v_s_2936_){
_start:
{
lean_object* v_str_2937_; lean_object* v_startInclusive_2938_; lean_object* v_endExclusive_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; uint8_t v_decide_2942_; 
v_str_2937_ = lean_ctor_get(v_s_2936_, 0);
v_startInclusive_2938_ = lean_ctor_get(v_s_2936_, 1);
v_endExclusive_2939_ = lean_ctor_get(v_s_2936_, 2);
v___x_2940_ = lean_nat_sub(v_endExclusive_2939_, v_startInclusive_2938_);
v___x_2941_ = lean_unsigned_to_nat(0u);
v_decide_2942_ = lean_nat_dec_eq(v___x_2940_, v___x_2941_);
if (v_decide_2942_ == 0)
{
uint32_t v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; uint32_t v___x_2948_; uint8_t v___x_2949_; 
v___x_2943_ = 10;
v___x_2944_ = lean_unsigned_to_nat(1u);
v___x_2945_ = lean_nat_sub(v___x_2940_, v___x_2944_);
lean_dec(v___x_2940_);
v___x_2946_ = l_String_Slice_posLE(v_s_2936_, v___x_2945_);
v___x_2947_ = lean_nat_add(v_startInclusive_2938_, v___x_2946_);
lean_dec(v___x_2946_);
v___x_2948_ = lean_string_utf8_get_fast(v_str_2937_, v___x_2947_);
v___x_2949_ = lean_uint32_dec_eq(v___x_2948_, v___x_2943_);
if (v___x_2949_ == 0)
{
lean_dec(v___x_2947_);
return v_s_2936_;
}
else
{
lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_2965_; 
lean_inc(v_startInclusive_2938_);
lean_inc_ref(v_str_2937_);
v_isSharedCheck_2965_ = !lean_is_exclusive(v_s_2936_);
if (v_isSharedCheck_2965_ == 0)
{
lean_object* v_unused_2966_; lean_object* v_unused_2967_; lean_object* v_unused_2968_; 
v_unused_2966_ = lean_ctor_get(v_s_2936_, 2);
lean_dec(v_unused_2966_);
v_unused_2967_ = lean_ctor_get(v_s_2936_, 1);
lean_dec(v_unused_2967_);
v_unused_2968_ = lean_ctor_get(v_s_2936_, 0);
lean_dec(v_unused_2968_);
v___x_2951_ = v_s_2936_;
v_isShared_2952_ = v_isSharedCheck_2965_;
goto v_resetjp_2950_;
}
else
{
lean_dec(v_s_2936_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_2965_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v___x_2954_; 
lean_inc(v___x_2947_);
lean_inc(v_startInclusive_2938_);
lean_inc_ref(v_str_2937_);
if (v_isShared_2952_ == 0)
{
lean_ctor_set(v___x_2951_, 2, v___x_2947_);
v___x_2954_ = v___x_2951_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2964_; 
v_reuseFailAlloc_2964_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2964_, 0, v_str_2937_);
lean_ctor_set(v_reuseFailAlloc_2964_, 1, v_startInclusive_2938_);
lean_ctor_set(v_reuseFailAlloc_2964_, 2, v___x_2947_);
v___x_2954_ = v_reuseFailAlloc_2964_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
lean_object* v___x_2955_; uint8_t v_decide_2956_; 
v___x_2955_ = lean_nat_sub(v___x_2947_, v_startInclusive_2938_);
lean_dec(v___x_2947_);
v_decide_2956_ = lean_nat_dec_eq(v___x_2955_, v___x_2941_);
if (v_decide_2956_ == 0)
{
uint32_t v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; uint32_t v___x_2961_; uint8_t v___x_2962_; 
v___x_2957_ = 13;
v___x_2958_ = lean_nat_sub(v___x_2955_, v___x_2944_);
lean_dec(v___x_2955_);
v___x_2959_ = l_String_Slice_posLE(v___x_2954_, v___x_2958_);
v___x_2960_ = lean_nat_add(v_startInclusive_2938_, v___x_2959_);
lean_dec(v___x_2959_);
v___x_2961_ = lean_string_utf8_get_fast(v_str_2937_, v___x_2960_);
v___x_2962_ = lean_uint32_dec_eq(v___x_2961_, v___x_2957_);
if (v___x_2962_ == 0)
{
lean_dec(v___x_2960_);
lean_dec(v_startInclusive_2938_);
lean_dec_ref(v_str_2937_);
return v___x_2954_;
}
else
{
lean_object* v___x_2963_; 
lean_dec_ref(v___x_2954_);
v___x_2963_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2963_, 0, v_str_2937_);
lean_ctor_set(v___x_2963_, 1, v_startInclusive_2938_);
lean_ctor_set(v___x_2963_, 2, v___x_2960_);
return v___x_2963_;
}
}
else
{
lean_dec(v___x_2955_);
lean_dec(v_startInclusive_2938_);
lean_dec_ref(v_str_2937_);
return v___x_2954_;
}
}
}
}
}
else
{
lean_dec(v___x_2940_);
return v_s_2936_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___redArg(){
_start:
{
lean_object* v___x_2972_; 
v___x_2972_ = ((lean_object*)(l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___redArg___closed__0));
return v___x_2972_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___redArg___boxed(lean_object* v___dummy_2973_){
_start:
{
lean_object* v_res_2974_; 
v_res_2974_ = l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___redArg();
return v_res_2974_;
}
}
static lean_object* _init_l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2975_; 
v___x_2975_ = l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___redArg();
return v___x_2975_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0(lean_object* v_s_2976_){
_start:
{
lean_object* v___x_2977_; 
v___x_2977_ = lean_obj_once(&l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___closed__0, &l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___closed__0_once, _init_l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___closed__0);
return v___x_2977_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___boxed(lean_object* v_s_2978_){
_start:
{
lean_object* v_res_2979_; 
v_res_2979_ = l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0(v_s_2978_);
lean_dec_ref(v_s_2978_);
return v_res_2979_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_lines(lean_object* v_s_2980_){
_start:
{
lean_object* v___x_2981_; 
v___x_2981_ = lean_obj_once(&l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___closed__0, &l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___closed__0_once, _init_l_String_Slice_splitInclusive___at___00String_Slice_lines_spec__0___closed__0);
return v___x_2981_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_lines___boxed(lean_object* v_s_2982_){
_start:
{
lean_object* v_res_2983_; 
v_res_2983_ = l_String_Slice_lines(v_s_2982_);
lean_dec_ref(v_s_2982_);
return v_res_2983_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_isNat_spec__0___redArg(lean_object* v_s_2984_, lean_object* v_a_2985_, lean_object* v_b_2986_){
_start:
{
lean_object* v_str_2987_; lean_object* v_startInclusive_2988_; lean_object* v_endExclusive_2989_; lean_object* v___x_2990_; uint8_t v_decide_2991_; 
v_str_2987_ = lean_ctor_get(v_s_2984_, 0);
v_startInclusive_2988_ = lean_ctor_get(v_s_2984_, 1);
v_endExclusive_2989_ = lean_ctor_get(v_s_2984_, 2);
v___x_2990_ = lean_nat_sub(v_endExclusive_2989_, v_startInclusive_2988_);
v_decide_2991_ = lean_nat_dec_eq(v_a_2985_, v___x_2990_);
lean_dec(v___x_2990_);
if (v_decide_2991_ == 0)
{
lean_object* v_snd_2992_; lean_object* v___x_2994_; uint8_t v_isShared_2995_; uint8_t v_isSharedCheck_3023_; 
v_snd_2992_ = lean_ctor_get(v_b_2986_, 1);
v_isSharedCheck_3023_ = !lean_is_exclusive(v_b_2986_);
if (v_isSharedCheck_3023_ == 0)
{
lean_object* v_unused_3024_; 
v_unused_3024_ = lean_ctor_get(v_b_2986_, 0);
lean_dec(v_unused_3024_);
v___x_2994_ = v_b_2986_;
v_isShared_2995_ = v_isSharedCheck_3023_;
goto v_resetjp_2993_;
}
else
{
lean_inc(v_snd_2992_);
lean_dec(v_b_2986_);
v___x_2994_ = lean_box(0);
v_isShared_2995_ = v_isSharedCheck_3023_;
goto v_resetjp_2993_;
}
v_resetjp_2993_:
{
lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; uint32_t v___x_3006_; uint32_t v___x_3007_; uint8_t v___x_3008_; 
v___x_3002_ = lean_box(0);
v___x_3003_ = lean_nat_add(v_startInclusive_2988_, v_a_2985_);
lean_dec(v_a_2985_);
v___x_3004_ = lean_string_utf8_next_fast(v_str_2987_, v___x_3003_);
v___x_3005_ = lean_nat_sub(v___x_3004_, v_startInclusive_2988_);
v___x_3006_ = lean_string_utf8_get_fast(v_str_2987_, v___x_3003_);
lean_dec(v___x_3003_);
v___x_3007_ = 95;
v___x_3008_ = lean_uint32_dec_eq(v___x_3006_, v___x_3007_);
if (v___x_3008_ == 0)
{
uint32_t v___x_3009_; uint8_t v___x_3010_; 
v___x_3009_ = 48;
v___x_3010_ = lean_uint32_dec_le(v___x_3009_, v___x_3006_);
if (v___x_3010_ == 0)
{
lean_dec(v___x_3005_);
goto v___jp_2996_;
}
else
{
uint32_t v___x_3011_; uint8_t v___x_3012_; 
v___x_3011_ = 57;
v___x_3012_ = lean_uint32_dec_le(v___x_3006_, v___x_3011_);
if (v___x_3012_ == 0)
{
lean_dec(v___x_3005_);
goto v___jp_2996_;
}
else
{
lean_object* v___x_3013_; lean_object* v___x_3014_; 
lean_del_object(v___x_2994_);
lean_dec(v_snd_2992_);
v___x_3013_ = lean_box(v___x_3010_);
v___x_3014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3014_, 0, v___x_3002_);
lean_ctor_set(v___x_3014_, 1, v___x_3013_);
v_a_2985_ = v___x_3005_;
v_b_2986_ = v___x_3014_;
goto _start;
}
}
}
else
{
uint8_t v___x_3016_; 
lean_del_object(v___x_2994_);
v___x_3016_ = lean_unbox(v_snd_2992_);
if (v___x_3016_ == 0)
{
lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; 
lean_dec(v___x_3005_);
v___x_3017_ = lean_box(v_decide_2991_);
v___x_3018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3018_, 0, v___x_3017_);
v___x_3019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3019_, 0, v___x_3018_);
lean_ctor_set(v___x_3019_, 1, v_snd_2992_);
return v___x_3019_;
}
else
{
lean_object* v___x_3020_; lean_object* v___x_3021_; 
lean_dec(v_snd_2992_);
v___x_3020_ = lean_box(v_decide_2991_);
v___x_3021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3002_);
lean_ctor_set(v___x_3021_, 1, v___x_3020_);
v_a_2985_ = v___x_3005_;
v_b_2986_ = v___x_3021_;
goto _start;
}
}
v___jp_2996_:
{
lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_3000_; 
v___x_2997_ = lean_box(v_decide_2991_);
v___x_2998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2998_, 0, v___x_2997_);
if (v_isShared_2995_ == 0)
{
lean_ctor_set(v___x_2994_, 0, v___x_2998_);
v___x_3000_ = v___x_2994_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3001_; 
v_reuseFailAlloc_3001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3001_, 0, v___x_2998_);
lean_ctor_set(v_reuseFailAlloc_3001_, 1, v_snd_2992_);
v___x_3000_ = v_reuseFailAlloc_3001_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
return v___x_3000_;
}
}
}
}
else
{
lean_dec(v_a_2985_);
return v_b_2986_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_isNat_spec__0___redArg___boxed(lean_object* v_s_3025_, lean_object* v_a_3026_, lean_object* v_b_3027_){
_start:
{
lean_object* v_res_3028_; 
v_res_3028_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_isNat_spec__0___redArg(v_s_3025_, v_a_3026_, v_b_3027_);
lean_dec_ref(v_s_3025_);
return v_res_3028_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_isNat(lean_object* v_s_3033_){
_start:
{
lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v_fst_3037_; 
v___x_3034_ = ((lean_object*)(l_String_Slice_isNat___closed__0));
v___x_3035_ = lean_unsigned_to_nat(0u);
v___x_3036_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_isNat_spec__0___redArg(v_s_3033_, v___x_3035_, v___x_3034_);
v_fst_3037_ = lean_ctor_get(v___x_3036_, 0);
if (lean_obj_tag(v_fst_3037_) == 0)
{
lean_object* v_snd_3038_; uint8_t v___x_3039_; 
v_snd_3038_ = lean_ctor_get(v___x_3036_, 1);
lean_inc(v_snd_3038_);
lean_dec_ref(v___x_3036_);
v___x_3039_ = lean_unbox(v_snd_3038_);
lean_dec(v_snd_3038_);
return v___x_3039_;
}
else
{
lean_object* v_val_3040_; uint8_t v___x_3041_; 
lean_inc_ref(v_fst_3037_);
lean_dec_ref(v___x_3036_);
v_val_3040_ = lean_ctor_get(v_fst_3037_, 0);
lean_inc(v_val_3040_);
lean_dec_ref_known(v_fst_3037_, 1);
v___x_3041_ = lean_unbox(v_val_3040_);
lean_dec(v_val_3040_);
return v___x_3041_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_isNat___boxed(lean_object* v_s_3042_){
_start:
{
uint8_t v_res_3043_; lean_object* v_r_3044_; 
v_res_3043_ = l_String_Slice_isNat(v_s_3042_);
lean_dec_ref(v_s_3042_);
v_r_3044_ = lean_box(v_res_3043_);
return v_r_3044_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_isNat_spec__0(lean_object* v_s_3045_, lean_object* v_inst_3046_, lean_object* v_R_3047_, lean_object* v_a_3048_, lean_object* v_b_3049_, lean_object* v_c_3050_){
_start:
{
lean_object* v___x_3051_; 
v___x_3051_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_isNat_spec__0___redArg(v_s_3045_, v_a_3048_, v_b_3049_);
return v___x_3051_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_isNat_spec__0___boxed(lean_object* v_s_3052_, lean_object* v_inst_3053_, lean_object* v_R_3054_, lean_object* v_a_3055_, lean_object* v_b_3056_, lean_object* v_c_3057_){
_start:
{
lean_object* v_res_3058_; 
v_res_3058_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_isNat_spec__0(v_s_3052_, v_inst_3053_, v_R_3054_, v_a_3055_, v_b_3056_, v_c_3057_);
lean_dec_ref(v_s_3052_);
return v_res_3058_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_toNat_x3f_spec__0___redArg(lean_object* v_s_3059_, lean_object* v_a_3060_, lean_object* v_b_3061_){
_start:
{
lean_object* v_str_3062_; lean_object* v_startInclusive_3063_; lean_object* v_endExclusive_3064_; lean_object* v___x_3065_; uint8_t v_decide_3066_; 
v_str_3062_ = lean_ctor_get(v_s_3059_, 0);
v_startInclusive_3063_ = lean_ctor_get(v_s_3059_, 1);
v_endExclusive_3064_ = lean_ctor_get(v_s_3059_, 2);
v___x_3065_ = lean_nat_sub(v_endExclusive_3064_, v_startInclusive_3063_);
v_decide_3066_ = lean_nat_dec_eq(v_a_3060_, v___x_3065_);
lean_dec(v___x_3065_);
if (v_decide_3066_ == 0)
{
lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; uint32_t v___x_3070_; uint32_t v___x_3071_; uint8_t v___x_3072_; 
v___x_3067_ = lean_nat_add(v_startInclusive_3063_, v_a_3060_);
lean_dec(v_a_3060_);
v___x_3068_ = lean_string_utf8_next_fast(v_str_3062_, v___x_3067_);
v___x_3069_ = lean_nat_sub(v___x_3068_, v_startInclusive_3063_);
v___x_3070_ = lean_string_utf8_get_fast(v_str_3062_, v___x_3067_);
lean_dec(v___x_3067_);
v___x_3071_ = 95;
v___x_3072_ = lean_uint32_dec_eq(v___x_3070_, v___x_3071_);
if (v___x_3072_ == 0)
{
lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; 
v___x_3073_ = lean_unsigned_to_nat(10u);
v___x_3074_ = lean_nat_mul(v_b_3061_, v___x_3073_);
lean_dec(v_b_3061_);
v___x_3075_ = lean_uint32_to_nat(v___x_3070_);
v___x_3076_ = lean_unsigned_to_nat(48u);
v___x_3077_ = lean_nat_sub(v___x_3075_, v___x_3076_);
lean_dec(v___x_3075_);
v___x_3078_ = lean_nat_add(v___x_3074_, v___x_3077_);
lean_dec(v___x_3077_);
lean_dec(v___x_3074_);
v_a_3060_ = v___x_3069_;
v_b_3061_ = v___x_3078_;
goto _start;
}
else
{
v_a_3060_ = v___x_3069_;
goto _start;
}
}
else
{
lean_dec(v_a_3060_);
return v_b_3061_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_toNat_x3f_spec__0___redArg___boxed(lean_object* v_s_3081_, lean_object* v_a_3082_, lean_object* v_b_3083_){
_start:
{
lean_object* v_res_3084_; 
v_res_3084_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_toNat_x3f_spec__0___redArg(v_s_3081_, v_a_3082_, v_b_3083_);
lean_dec_ref(v_s_3081_);
return v_res_3084_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_toNat_x3f(lean_object* v_s_3085_){
_start:
{
uint8_t v___x_3086_; 
v___x_3086_ = l_String_Slice_isNat(v_s_3085_);
if (v___x_3086_ == 0)
{
lean_object* v___x_3087_; 
v___x_3087_ = lean_box(0);
return v___x_3087_;
}
else
{
lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; 
v___x_3088_ = lean_unsigned_to_nat(0u);
v___x_3089_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_toNat_x3f_spec__0___redArg(v_s_3085_, v___x_3088_, v___x_3088_);
v___x_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3089_);
return v___x_3090_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_toNat_x3f___boxed(lean_object* v_s_3091_){
_start:
{
lean_object* v_res_3092_; 
v_res_3092_ = l_String_Slice_toNat_x3f(v_s_3091_);
lean_dec_ref(v_s_3091_);
return v_res_3092_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_toNat_x3f_spec__0(lean_object* v_s_3093_, lean_object* v_inst_3094_, lean_object* v_R_3095_, lean_object* v_a_3096_, lean_object* v_b_3097_, lean_object* v_c_3098_){
_start:
{
lean_object* v___x_3099_; 
v___x_3099_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_toNat_x3f_spec__0___redArg(v_s_3093_, v_a_3096_, v_b_3097_);
return v___x_3099_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_toNat_x3f_spec__0___boxed(lean_object* v_s_3100_, lean_object* v_inst_3101_, lean_object* v_R_3102_, lean_object* v_a_3103_, lean_object* v_b_3104_, lean_object* v_c_3105_){
_start:
{
lean_object* v_res_3106_; 
v_res_3106_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_toNat_x3f_spec__0(v_s_3100_, v_inst_3101_, v_R_3102_, v_a_3103_, v_b_3104_, v_c_3105_);
lean_dec_ref(v_s_3100_);
return v_res_3106_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00String_Slice_toNat_x21_spec__0(lean_object* v_msg_3107_){
_start:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; 
v___x_3108_ = lean_unsigned_to_nat(0u);
v___x_3109_ = lean_panic_fn_borrowed(v___x_3108_, v_msg_3107_);
return v___x_3109_;
}
}
static lean_object* _init_l_String_Slice_toNat_x21___closed__3(void){
_start:
{
lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
v___x_3113_ = ((lean_object*)(l_String_Slice_toNat_x21___closed__2));
v___x_3114_ = lean_unsigned_to_nat(4u);
v___x_3115_ = lean_unsigned_to_nat(1041u);
v___x_3116_ = ((lean_object*)(l_String_Slice_toNat_x21___closed__1));
v___x_3117_ = ((lean_object*)(l_String_Slice_toNat_x21___closed__0));
v___x_3118_ = l_mkPanicMessageWithDecl(v___x_3117_, v___x_3116_, v___x_3115_, v___x_3114_, v___x_3113_);
return v___x_3118_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_toNat_x21(lean_object* v_s_3119_){
_start:
{
uint8_t v___x_3120_; 
v___x_3120_ = l_String_Slice_isNat(v_s_3119_);
if (v___x_3120_ == 0)
{
lean_object* v___x_3121_; lean_object* v___x_3122_; 
v___x_3121_ = lean_obj_once(&l_String_Slice_toNat_x21___closed__3, &l_String_Slice_toNat_x21___closed__3_once, _init_l_String_Slice_toNat_x21___closed__3);
v___x_3122_ = l_panic___at___00String_Slice_toNat_x21_spec__0(v___x_3121_);
return v___x_3122_;
}
else
{
lean_object* v___x_3123_; lean_object* v___x_3124_; 
v___x_3123_ = lean_unsigned_to_nat(0u);
v___x_3124_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_toNat_x3f_spec__0___redArg(v_s_3119_, v___x_3123_, v___x_3123_);
return v___x_3124_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_toNat_x21___boxed(lean_object* v_s_3125_){
_start:
{
lean_object* v_res_3126_; 
v_res_3126_ = l_String_Slice_toNat_x21(v_s_3125_);
lean_dec_ref(v_s_3125_);
return v_res_3126_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_front_x3f(lean_object* v_s_3127_){
_start:
{
lean_object* v___x_3128_; lean_object* v___x_3129_; 
v___x_3128_ = lean_unsigned_to_nat(0u);
v___x_3129_ = l_String_Slice_Pos_get_x3f(v_s_3127_, v___x_3128_);
return v___x_3129_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_front_x3f___boxed(lean_object* v_s_3130_){
_start:
{
lean_object* v_res_3131_; 
v_res_3131_ = l_String_Slice_front_x3f(v_s_3130_);
lean_dec_ref(v_s_3130_);
return v_res_3131_;
}
}
LEAN_EXPORT uint32_t l_String_Slice_front(lean_object* v_s_3132_){
_start:
{
lean_object* v___x_3133_; lean_object* v___x_3134_; 
v___x_3133_ = lean_unsigned_to_nat(0u);
v___x_3134_ = l_String_Slice_Pos_get_x3f(v_s_3132_, v___x_3133_);
if (lean_obj_tag(v___x_3134_) == 0)
{
uint32_t v___x_3135_; 
v___x_3135_ = 65;
return v___x_3135_;
}
else
{
lean_object* v_val_3136_; uint32_t v___x_3137_; 
v_val_3136_ = lean_ctor_get(v___x_3134_, 0);
lean_inc(v_val_3136_);
lean_dec_ref_known(v___x_3134_, 1);
v___x_3137_ = lean_unbox_uint32(v_val_3136_);
lean_dec(v_val_3136_);
return v___x_3137_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_front___boxed(lean_object* v_s_3138_){
_start:
{
uint32_t v_res_3139_; lean_object* v_r_3140_; 
v_res_3139_ = l_String_Slice_front(v_s_3138_);
lean_dec_ref(v_s_3138_);
v_r_3140_ = lean_box_uint32(v_res_3139_);
return v_r_3140_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_isInt(lean_object* v_s_3141_){
_start:
{
lean_object* v_str_3142_; lean_object* v_startInclusive_3143_; lean_object* v_endExclusive_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; uint8_t v_decide_3147_; 
v_str_3142_ = lean_ctor_get(v_s_3141_, 0);
v_startInclusive_3143_ = lean_ctor_get(v_s_3141_, 1);
v_endExclusive_3144_ = lean_ctor_get(v_s_3141_, 2);
v___x_3145_ = lean_unsigned_to_nat(0u);
v___x_3146_ = lean_nat_sub(v_endExclusive_3144_, v_startInclusive_3143_);
v_decide_3147_ = lean_nat_dec_eq(v___x_3145_, v___x_3146_);
lean_dec(v___x_3146_);
if (v_decide_3147_ == 0)
{
uint32_t v___x_3148_; uint32_t v___x_3149_; uint8_t v___x_3150_; 
v___x_3148_ = 45;
v___x_3149_ = lean_string_utf8_get_fast(v_str_3142_, v_startInclusive_3143_);
v___x_3150_ = lean_uint32_dec_eq(v___x_3149_, v___x_3148_);
if (v___x_3150_ == 0)
{
uint8_t v___x_3151_; 
v___x_3151_ = l_String_Slice_isNat(v_s_3141_);
lean_dec_ref(v_s_3141_);
return v___x_3151_;
}
else
{
lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3162_; 
lean_inc(v_endExclusive_3144_);
lean_inc(v_startInclusive_3143_);
lean_inc_ref(v_str_3142_);
v_isSharedCheck_3162_ = !lean_is_exclusive(v_s_3141_);
if (v_isSharedCheck_3162_ == 0)
{
lean_object* v_unused_3163_; lean_object* v_unused_3164_; lean_object* v_unused_3165_; 
v_unused_3163_ = lean_ctor_get(v_s_3141_, 2);
lean_dec(v_unused_3163_);
v_unused_3164_ = lean_ctor_get(v_s_3141_, 1);
lean_dec(v_unused_3164_);
v_unused_3165_ = lean_ctor_get(v_s_3141_, 0);
lean_dec(v_unused_3165_);
v___x_3153_ = v_s_3141_;
v_isShared_3154_ = v_isSharedCheck_3162_;
goto v_resetjp_3152_;
}
else
{
lean_dec(v_s_3141_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3162_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3159_; 
v___x_3155_ = lean_string_utf8_next_fast(v_str_3142_, v_startInclusive_3143_);
v___x_3156_ = lean_nat_sub(v___x_3155_, v_startInclusive_3143_);
v___x_3157_ = lean_nat_add(v_startInclusive_3143_, v___x_3156_);
lean_dec(v___x_3156_);
lean_dec(v_startInclusive_3143_);
if (v_isShared_3154_ == 0)
{
lean_ctor_set(v___x_3153_, 1, v___x_3157_);
v___x_3159_ = v___x_3153_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3161_; 
v_reuseFailAlloc_3161_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3161_, 0, v_str_3142_);
lean_ctor_set(v_reuseFailAlloc_3161_, 1, v___x_3157_);
lean_ctor_set(v_reuseFailAlloc_3161_, 2, v_endExclusive_3144_);
v___x_3159_ = v_reuseFailAlloc_3161_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
uint8_t v___x_3160_; 
v___x_3160_ = l_String_Slice_isNat(v___x_3159_);
lean_dec_ref(v___x_3159_);
return v___x_3160_;
}
}
}
}
else
{
uint8_t v___x_3166_; 
v___x_3166_ = l_String_Slice_isNat(v_s_3141_);
lean_dec_ref(v_s_3141_);
return v___x_3166_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_isInt___boxed(lean_object* v_s_3167_){
_start:
{
uint8_t v_res_3168_; lean_object* v_r_3169_; 
v_res_3168_ = l_String_Slice_isInt(v_s_3167_);
v_r_3169_ = lean_box(v_res_3168_);
return v_r_3169_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_toInt_x3f(lean_object* v_s_3170_){
_start:
{
lean_object* v_str_3183_; lean_object* v_startInclusive_3184_; lean_object* v_endExclusive_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; uint8_t v_decide_3188_; 
v_str_3183_ = lean_ctor_get(v_s_3170_, 0);
v_startInclusive_3184_ = lean_ctor_get(v_s_3170_, 1);
v_endExclusive_3185_ = lean_ctor_get(v_s_3170_, 2);
v___x_3186_ = lean_unsigned_to_nat(0u);
v___x_3187_ = lean_nat_sub(v_endExclusive_3185_, v_startInclusive_3184_);
v_decide_3188_ = lean_nat_dec_eq(v___x_3186_, v___x_3187_);
lean_dec(v___x_3187_);
if (v_decide_3188_ == 0)
{
uint32_t v___x_3189_; uint32_t v___x_3190_; uint8_t v___x_3191_; 
v___x_3189_ = 45;
v___x_3190_ = lean_string_utf8_get_fast(v_str_3183_, v_startInclusive_3184_);
v___x_3191_ = lean_uint32_dec_eq(v___x_3190_, v___x_3189_);
if (v___x_3191_ == 0)
{
goto v___jp_3171_;
}
else
{
lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3212_; 
lean_inc(v_endExclusive_3185_);
lean_inc(v_startInclusive_3184_);
lean_inc_ref(v_str_3183_);
v_isSharedCheck_3212_ = !lean_is_exclusive(v_s_3170_);
if (v_isSharedCheck_3212_ == 0)
{
lean_object* v_unused_3213_; lean_object* v_unused_3214_; lean_object* v_unused_3215_; 
v_unused_3213_ = lean_ctor_get(v_s_3170_, 2);
lean_dec(v_unused_3213_);
v_unused_3214_ = lean_ctor_get(v_s_3170_, 1);
lean_dec(v_unused_3214_);
v_unused_3215_ = lean_ctor_get(v_s_3170_, 0);
lean_dec(v_unused_3215_);
v___x_3193_ = v_s_3170_;
v_isShared_3194_ = v_isSharedCheck_3212_;
goto v_resetjp_3192_;
}
else
{
lean_dec(v_s_3170_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3212_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3199_; 
v___x_3195_ = lean_string_utf8_next_fast(v_str_3183_, v_startInclusive_3184_);
v___x_3196_ = lean_nat_sub(v___x_3195_, v_startInclusive_3184_);
v___x_3197_ = lean_nat_add(v_startInclusive_3184_, v___x_3196_);
lean_dec(v___x_3196_);
lean_dec(v_startInclusive_3184_);
if (v_isShared_3194_ == 0)
{
lean_ctor_set(v___x_3193_, 1, v___x_3197_);
v___x_3199_ = v___x_3193_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v_str_3183_);
lean_ctor_set(v_reuseFailAlloc_3211_, 1, v___x_3197_);
lean_ctor_set(v_reuseFailAlloc_3211_, 2, v_endExclusive_3185_);
v___x_3199_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
lean_object* v___x_3200_; 
v___x_3200_ = l_String_Slice_toNat_x3f(v___x_3199_);
lean_dec_ref(v___x_3199_);
if (lean_obj_tag(v___x_3200_) == 0)
{
lean_object* v___x_3201_; 
v___x_3201_ = lean_box(0);
return v___x_3201_;
}
else
{
lean_object* v_val_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3210_; 
v_val_3202_ = lean_ctor_get(v___x_3200_, 0);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3200_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3204_ = v___x_3200_;
v_isShared_3205_ = v_isSharedCheck_3210_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_val_3202_);
lean_dec(v___x_3200_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3210_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v___x_3206_; lean_object* v___x_3208_; 
v___x_3206_ = l_Int_negOfNat(v_val_3202_);
lean_dec(v_val_3202_);
if (v_isShared_3205_ == 0)
{
lean_ctor_set(v___x_3204_, 0, v___x_3206_);
v___x_3208_ = v___x_3204_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v___x_3206_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
return v___x_3208_;
}
}
}
}
}
}
}
else
{
goto v___jp_3171_;
}
v___jp_3171_:
{
lean_object* v___x_3172_; 
v___x_3172_ = l_String_Slice_toNat_x3f(v_s_3170_);
lean_dec_ref(v_s_3170_);
if (lean_obj_tag(v___x_3172_) == 0)
{
lean_object* v___x_3173_; 
v___x_3173_ = lean_box(0);
return v___x_3173_;
}
else
{
lean_object* v_val_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3182_; 
v_val_3174_ = lean_ctor_get(v___x_3172_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3172_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3176_ = v___x_3172_;
v_isShared_3177_ = v_isSharedCheck_3182_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_val_3174_);
lean_dec(v___x_3172_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3182_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v___x_3178_; lean_object* v___x_3180_; 
v___x_3178_ = lean_nat_to_int(v_val_3174_);
if (v_isShared_3177_ == 0)
{
lean_ctor_set(v___x_3176_, 0, v___x_3178_);
v___x_3180_ = v___x_3176_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v___x_3178_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
return v___x_3180_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_toInt_x21(lean_object* v_s_3217_){
_start:
{
lean_object* v___x_3218_; 
v___x_3218_ = l_String_Slice_toInt_x3f(v_s_3217_);
if (lean_obj_tag(v___x_3218_) == 0)
{
lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; 
v___x_3219_ = l_Int_instInhabited;
v___x_3220_ = ((lean_object*)(l_String_Slice_toInt_x21___closed__0));
v___x_3221_ = l_panic___redArg(v___x_3219_, v___x_3220_);
return v___x_3221_;
}
else
{
lean_object* v_val_3222_; 
v_val_3222_ = lean_ctor_get(v___x_3218_, 0);
lean_inc(v_val_3222_);
lean_dec_ref_known(v___x_3218_, 1);
return v_val_3222_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_back_x3f(lean_object* v_s_3223_){
_start:
{
lean_object* v_startInclusive_3224_; lean_object* v_endExclusive_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; 
v_startInclusive_3224_ = lean_ctor_get(v_s_3223_, 1);
v_endExclusive_3225_ = lean_ctor_get(v_s_3223_, 2);
v___x_3226_ = lean_nat_sub(v_endExclusive_3225_, v_startInclusive_3224_);
v___x_3227_ = l_String_Slice_Pos_prev_x3f(v_s_3223_, v___x_3226_);
lean_dec(v___x_3226_);
if (lean_obj_tag(v___x_3227_) == 0)
{
lean_object* v___x_3228_; 
v___x_3228_ = lean_box(0);
return v___x_3228_;
}
else
{
lean_object* v_val_3229_; lean_object* v___x_3230_; 
v_val_3229_ = lean_ctor_get(v___x_3227_, 0);
lean_inc(v_val_3229_);
lean_dec_ref_known(v___x_3227_, 1);
v___x_3230_ = l_String_Slice_Pos_get_x3f(v_s_3223_, v_val_3229_);
lean_dec(v_val_3229_);
return v___x_3230_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_back_x3f___boxed(lean_object* v_s_3231_){
_start:
{
lean_object* v_res_3232_; 
v_res_3232_ = l_String_Slice_back_x3f(v_s_3231_);
lean_dec_ref(v_s_3231_);
return v_res_3232_;
}
}
LEAN_EXPORT uint32_t l_String_Slice_back(lean_object* v_s_3233_){
_start:
{
lean_object* v_startInclusive_3234_; lean_object* v_endExclusive_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; 
v_startInclusive_3234_ = lean_ctor_get(v_s_3233_, 1);
v_endExclusive_3235_ = lean_ctor_get(v_s_3233_, 2);
v___x_3236_ = lean_nat_sub(v_endExclusive_3235_, v_startInclusive_3234_);
v___x_3237_ = l_String_Slice_Pos_prev_x3f(v_s_3233_, v___x_3236_);
lean_dec(v___x_3236_);
if (lean_obj_tag(v___x_3237_) == 0)
{
uint32_t v___x_3238_; 
v___x_3238_ = 65;
return v___x_3238_;
}
else
{
lean_object* v_val_3239_; lean_object* v___x_3240_; 
v_val_3239_ = lean_ctor_get(v___x_3237_, 0);
lean_inc(v_val_3239_);
lean_dec_ref_known(v___x_3237_, 1);
v___x_3240_ = l_String_Slice_Pos_get_x3f(v_s_3233_, v_val_3239_);
lean_dec(v_val_3239_);
if (lean_obj_tag(v___x_3240_) == 0)
{
uint32_t v___x_3241_; 
v___x_3241_ = 65;
return v___x_3241_;
}
else
{
lean_object* v_val_3242_; uint32_t v___x_3243_; 
v_val_3242_ = lean_ctor_get(v___x_3240_, 0);
lean_inc(v_val_3242_);
lean_dec_ref_known(v___x_3240_, 1);
v___x_3243_ = lean_unbox_uint32(v_val_3242_);
lean_dec(v_val_3242_);
return v___x_3243_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_back___boxed(lean_object* v_s_3244_){
_start:
{
uint32_t v_res_3245_; lean_object* v_r_3246_; 
v_res_3245_ = l_String_Slice_back(v_s_3244_);
lean_dec_ref(v_s_3244_);
v_r_3246_ = lean_box_uint32(v_res_3245_);
return v_r_3246_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_intercalate_go(lean_object* v_acc_3247_, lean_object* v_s_3248_, lean_object* v_a_3249_){
_start:
{
if (lean_obj_tag(v_a_3249_) == 0)
{
return v_acc_3247_;
}
else
{
lean_object* v_head_3250_; lean_object* v_tail_3251_; lean_object* v_str_3252_; lean_object* v_startInclusive_3253_; lean_object* v_endExclusive_3254_; lean_object* v_str_3255_; lean_object* v_startInclusive_3256_; lean_object* v_endExclusive_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; 
v_head_3250_ = lean_ctor_get(v_a_3249_, 0);
v_tail_3251_ = lean_ctor_get(v_a_3249_, 1);
v_str_3252_ = lean_ctor_get(v_s_3248_, 0);
v_startInclusive_3253_ = lean_ctor_get(v_s_3248_, 1);
v_endExclusive_3254_ = lean_ctor_get(v_s_3248_, 2);
v_str_3255_ = lean_ctor_get(v_head_3250_, 0);
v_startInclusive_3256_ = lean_ctor_get(v_head_3250_, 1);
v_endExclusive_3257_ = lean_ctor_get(v_head_3250_, 2);
v___x_3258_ = lean_string_utf8_extract_fast(v_str_3252_, v_startInclusive_3253_, v_endExclusive_3254_);
v___x_3259_ = lean_string_append(v_acc_3247_, v___x_3258_);
lean_dec_ref(v___x_3258_);
v___x_3260_ = lean_string_utf8_extract_fast(v_str_3255_, v_startInclusive_3256_, v_endExclusive_3257_);
v___x_3261_ = lean_string_append(v___x_3259_, v___x_3260_);
lean_dec_ref(v___x_3260_);
v_acc_3247_ = v___x_3261_;
v_a_3249_ = v_tail_3251_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_String_Slice_0__String_Slice_intercalate_go___boxed(lean_object* v_acc_3263_, lean_object* v_s_3264_, lean_object* v_a_3265_){
_start:
{
lean_object* v_res_3266_; 
v_res_3266_ = l___private_Init_Data_String_Slice_0__String_Slice_intercalate_go(v_acc_3263_, v_s_3264_, v_a_3265_);
lean_dec(v_a_3265_);
lean_dec_ref(v_s_3264_);
return v_res_3266_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_intercalate(lean_object* v_s_3267_, lean_object* v_x_3268_){
_start:
{
if (lean_obj_tag(v_x_3268_) == 0)
{
lean_object* v___x_3269_; 
v___x_3269_ = ((lean_object*)(l_String_Slice_replace___redArg___closed__1));
return v___x_3269_;
}
else
{
lean_object* v_head_3270_; lean_object* v_tail_3271_; lean_object* v_str_3272_; lean_object* v_startInclusive_3273_; lean_object* v_endExclusive_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
v_head_3270_ = lean_ctor_get(v_x_3268_, 0);
v_tail_3271_ = lean_ctor_get(v_x_3268_, 1);
v_str_3272_ = lean_ctor_get(v_head_3270_, 0);
v_startInclusive_3273_ = lean_ctor_get(v_head_3270_, 1);
v_endExclusive_3274_ = lean_ctor_get(v_head_3270_, 2);
v___x_3275_ = lean_string_utf8_extract_fast(v_str_3272_, v_startInclusive_3273_, v_endExclusive_3274_);
v___x_3276_ = l___private_Init_Data_String_Slice_0__String_Slice_intercalate_go(v___x_3275_, v_s_3267_, v_tail_3271_);
return v___x_3276_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_intercalate___boxed(lean_object* v_s_3277_, lean_object* v_x_3278_){
_start:
{
lean_object* v_res_3279_; 
v_res_3279_ = l_String_Slice_intercalate(v_s_3277_, v_x_3278_);
lean_dec(v_x_3278_);
lean_dec_ref(v_s_3277_);
return v_res_3279_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00String_Slice_join_spec__0(lean_object* v_x_3280_, lean_object* v_x_3281_){
_start:
{
if (lean_obj_tag(v_x_3281_) == 0)
{
return v_x_3280_;
}
else
{
lean_object* v_head_3282_; lean_object* v_tail_3283_; lean_object* v_str_3284_; lean_object* v_startInclusive_3285_; lean_object* v_endExclusive_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; 
v_head_3282_ = lean_ctor_get(v_x_3281_, 0);
v_tail_3283_ = lean_ctor_get(v_x_3281_, 1);
v_str_3284_ = lean_ctor_get(v_head_3282_, 0);
v_startInclusive_3285_ = lean_ctor_get(v_head_3282_, 1);
v_endExclusive_3286_ = lean_ctor_get(v_head_3282_, 2);
v___x_3287_ = lean_string_utf8_extract_fast(v_str_3284_, v_startInclusive_3285_, v_endExclusive_3286_);
v___x_3288_ = lean_string_append(v_x_3280_, v___x_3287_);
lean_dec_ref(v___x_3287_);
v_x_3280_ = v___x_3288_;
v_x_3281_ = v_tail_3283_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00String_Slice_join_spec__0___boxed(lean_object* v_x_3290_, lean_object* v_x_3291_){
_start:
{
lean_object* v_res_3292_; 
v_res_3292_ = l_List_foldl___at___00String_Slice_join_spec__0(v_x_3290_, v_x_3291_);
lean_dec(v_x_3291_);
return v_res_3292_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_join(lean_object* v_l_3293_){
_start:
{
lean_object* v___x_3294_; lean_object* v___x_3295_; 
v___x_3294_ = ((lean_object*)(l_String_Slice_replace___redArg___closed__1));
v___x_3295_ = l_List_foldl___at___00String_Slice_join_spec__0(v___x_3294_, v_l_3293_);
return v___x_3295_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_join___boxed(lean_object* v_l_3296_){
_start:
{
lean_object* v_res_3297_; 
v_res_3297_ = l_String_Slice_join(v_l_3296_);
lean_dec(v_l_3296_);
return v_res_3297_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_toName(lean_object* v_s_3298_){
_start:
{
lean_object* v___x_3299_; lean_object* v___x_3300_; 
v___x_3299_ = l_String_Slice_toString(v_s_3298_);
v___x_3300_ = l_String_toName(v___x_3299_);
return v___x_3300_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_toName___boxed(lean_object* v_s_3301_){
_start:
{
lean_object* v_res_3302_; 
v_res_3302_ = l_String_Slice_toName(v_s_3301_);
lean_dec_ref(v_s_3301_);
return v_res_3302_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instToFormat___lam__0(lean_object* v_s_3303_){
_start:
{
lean_object* v_str_3304_; lean_object* v_startInclusive_3305_; lean_object* v_endExclusive_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; 
v_str_3304_ = lean_ctor_get(v_s_3303_, 0);
v_startInclusive_3305_ = lean_ctor_get(v_s_3303_, 1);
v_endExclusive_3306_ = lean_ctor_get(v_s_3303_, 2);
v___x_3307_ = lean_string_utf8_extract_fast(v_str_3304_, v_startInclusive_3305_, v_endExclusive_3306_);
v___x_3308_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3308_, 0, v___x_3307_);
return v___x_3308_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_instToFormat___lam__0___boxed(lean_object* v_s_3309_){
_start:
{
lean_object* v_res_3310_; 
v_res_3310_ = l_String_Slice_instToFormat___lam__0(v_s_3309_);
lean_dec_ref(v_s_3309_);
return v_res_3310_;
}
}
lean_object* runtime_initialize_Init_Data_String_Pattern(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Iterators_Combinators_FilterMap(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_ToSlice(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Subslice(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Iter_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Iterate(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Compare(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Iterators_Consumers_Collect(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Iterators_Consumers_Loop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Termination(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_String_Slice(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_String_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Ord_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Combinators_FilterMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_ToSlice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Subslice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Iter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Iterate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Compare(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Consumers_Collect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Consumers_Loop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Termination(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_String_Slice_instLT = _init_l_String_Slice_instLT();
lean_mark_persistent(l_String_Slice_instLT);
l_String_Slice_instLE = _init_l_String_Slice_instLE();
lean_mark_persistent(l_String_Slice_instLE);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_String_Slice(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_String_Pattern(uint8_t builtin);
lean_object* initialize_Init_Data_Ord_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Iterators_Combinators_FilterMap(uint8_t builtin);
lean_object* initialize_Init_Data_String_ToSlice(uint8_t builtin);
lean_object* initialize_Init_Data_String_Subslice(uint8_t builtin);
lean_object* initialize_Init_Data_String_Iter_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Iterate(uint8_t builtin);
lean_object* initialize_Init_Data_String_Compare(uint8_t builtin);
lean_object* initialize_Init_Data_Iterators_Consumers_Collect(uint8_t builtin);
lean_object* initialize_Init_Data_Iterators_Consumers_Loop(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_String_Termination(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_String_Slice(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_String_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Iterators_Combinators_FilterMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_ToSlice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Subslice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Iter_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Iterate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Compare(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Iterators_Consumers_Collect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Iterators_Consumers_Loop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Termination(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Slice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_String_Slice(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_String_Slice(builtin);
}
#ifdef __cplusplus
}
#endif
