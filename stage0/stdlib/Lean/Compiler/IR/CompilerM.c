// Lean compiler output
// Module: Lean.Compiler.IR.CompilerM
// Imports: public import Lean.Compiler.IR.Format public import Lean.Compiler.ExportAttr public import Lean.Compiler.LCNF.PublicDeclsExt import Lean.Compiler.InitAttr import all Lean.Compiler.ModPkgExt import Init.Data.Format.Macro import Lean.Compiler.LCNF.Basic
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
lean_object* l_Lean_PersistentHashMap_instInhabited___redArg();
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_IR_Decl_name(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_get_export_name_for(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_isDeclMeta(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_isDeclPublic(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_isBoxedName(lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
uint8_t l_Lean_isExtern(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_IR_formatDecl(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_mkBoxedName(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_usage_note_resolved(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_regularInitAttr;
extern lean_object* l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_step_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_step_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_message_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_message_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_IR_LogEntry_fmt_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LogEntry_fmt_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LogEntry_fmt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_IR_LogEntry_fmt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_IR_LogEntry_fmt___closed__0 = (const lean_object*)&l_Lean_IR_LogEntry_fmt___closed__0_value;
static const lean_string_object l_Lean_IR_LogEntry_fmt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_IR_LogEntry_fmt___closed__1 = (const lean_object*)&l_Lean_IR_LogEntry_fmt___closed__1_value;
static lean_once_cell_t l_Lean_IR_LogEntry_fmt___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_LogEntry_fmt___closed__2;
static lean_once_cell_t l_Lean_IR_LogEntry_fmt___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_LogEntry_fmt___closed__3;
static const lean_ctor_object l_Lean_IR_LogEntry_fmt___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_LogEntry_fmt___closed__0_value)}};
static const lean_object* l_Lean_IR_LogEntry_fmt___closed__4 = (const lean_object*)&l_Lean_IR_LogEntry_fmt___closed__4_value;
static const lean_ctor_object l_Lean_IR_LogEntry_fmt___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_IR_LogEntry_fmt___closed__1_value)}};
static const lean_object* l_Lean_IR_LogEntry_fmt___closed__5 = (const lean_object*)&l_Lean_IR_LogEntry_fmt___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_fmt(lean_object*);
static const lean_closure_object l_Lean_IR_LogEntry_instToFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_LogEntry_fmt, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_LogEntry_instToFormat___closed__0 = (const lean_object*)&l_Lean_IR_LogEntry_instToFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_IR_LogEntry_instToFormat = (const lean_object*)&l_Lean_IR_LogEntry_instToFormat___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Log_format_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Log_format_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Log_format(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Log_format___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Log_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_Log_toString___boxed(lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_IR_log_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_IR_log_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_IR_log___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l_Lean_IR_log___closed__0 = (const lean_object*)&l_Lean_IR_log___closed__0_value;
static const lean_string_object l_Lean_IR_log___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "IR"};
static const lean_object* l_Lean_IR_log___closed__1 = (const lean_object*)&l_Lean_IR_log___closed__1_value;
static const lean_ctor_object l_Lean_IR_log___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_log___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l_Lean_IR_log___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_IR_log___closed__2_value_aux_0),((lean_object*)&l_Lean_IR_log___closed__1_value),LEAN_SCALAR_PTR_LITERAL(158, 183, 71, 31, 86, 224, 207, 192)}};
static const lean_object* l_Lean_IR_log___closed__2 = (const lean_object*)&l_Lean_IR_log___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_IR_log(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_log___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_IR_tracePrefixOptionName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_IR_tracePrefixOptionName___closed__0 = (const lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__0_value;
static const lean_string_object l_Lean_IR_tracePrefixOptionName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "compiler"};
static const lean_object* l_Lean_IR_tracePrefixOptionName___closed__1 = (const lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__1_value;
static const lean_string_object l_Lean_IR_tracePrefixOptionName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ir"};
static const lean_object* l_Lean_IR_tracePrefixOptionName___closed__2 = (const lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__2_value;
static const lean_ctor_object l_Lean_IR_tracePrefixOptionName___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l_Lean_IR_tracePrefixOptionName___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__3_value_aux_0),((lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__1_value),LEAN_SCALAR_PTR_LITERAL(34, 121, 176, 5, 201, 231, 94, 72)}};
static const lean_ctor_object l_Lean_IR_tracePrefixOptionName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__3_value_aux_1),((lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 180, 88, 7, 84, 16, 192, 27)}};
static const lean_object* l_Lean_IR_tracePrefixOptionName___closed__3 = (const lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_IR_tracePrefixOptionName = (const lean_object*)&l_Lean_IR_tracePrefixOptionName___closed__3_value;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_isLogEnabledFor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_isLogEnabledFor___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logDecls(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logMessageIf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logMessageIf___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logMessageIf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logMessageIf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logMessage___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logMessage___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logMessage(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_logMessage___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_declLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_declLt___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_sortDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_declLt___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_sortDecls___closed__0 = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_sortDecls___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_sortDecls(lean_object*);
static const lean_array_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0 = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0_value;
static const lean_closure_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__1 = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(135, 186, 94, 176, 136, 38, 52, 11)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__1_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__4_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__1_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__1_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__1_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__1_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__4_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__4_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__4_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__4_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__5_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__5_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__5_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__6_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "declMapExt"};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__6_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__6_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__7_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__5_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__7_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__7_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_IR_log___closed__1_value),LEAN_SCALAR_PTR_LITERAL(225, 220, 115, 150, 240, 139, 111, 12)}};
static const lean_ctor_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__7_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__7_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__6_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(176, 236, 150, 45, 29, 146, 124, 106)}};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__7_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__7_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__8_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__8_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__8_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__9_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed, .m_arity = 7, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__4_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__9_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__9_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__10_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__9_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__10_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__10_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__11_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__7_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__4_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__1_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__8_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__10_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__11_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__11_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_declMapExt;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__7(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__7___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0;
static const lean_ctor_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__1 = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__1_value;
LEAN_EXPORT lean_object* lean_ir_export_entries(lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_findEnvDecl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_findEnvDecl___closed__0;
LEAN_EXPORT lean_object* l_Lean_IR_findEnvDecl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_ir_find_env_decl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_ir_find_env_decl_boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_has_compile_error(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_hasCompileError___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findDecl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findDecl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_IR_getDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unknown declaration `"};
static const lean_object* l_Lean_IR_getDecl___closed__0 = (const lean_object*)&l_Lean_IR_getDecl___closed__0_value;
static const lean_string_object l_Lean_IR_getDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_IR_getDecl___closed__1 = (const lean_object*)&l_Lean_IR_getDecl___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_IR_getDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_getDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_getDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findLocalDecl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findLocalDecl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findLocalDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_getDecls(lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_addDecl___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_addDecl___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_addDecl___redArg___closed__0;
static lean_once_cell_t l_Lean_IR_addDecl___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_addDecl___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_IR_addDecl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_addDecl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_addDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_addDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_addDecls(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_addDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findEnvDecl_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findEnvDecl_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findDecl_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findDecl_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findDecl_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_findDecl_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_containsDecl_x27_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_containsDecl_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_getDecl_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_getDecl_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_decl_get_sorry_dep(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1(uint8_t, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___closed__0 = (const lean_object*)&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___closed__0_value;
LEAN_EXPORT lean_object* lean_get_ir_extra_const_names(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_IR_LogEntry_ctorIdx___impl(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 0)
{
lean_object* v_cls_7_; lean_object* v_decls_8_; lean_object* v___x_9_; 
v_cls_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_cls_7_);
v_decls_8_ = lean_ctor_get(v_t_5_, 1);
lean_inc_ref(v_decls_8_);
lean_dec_ref_known(v_t_5_, 2);
v___x_9_ = lean_apply_2(v_k_6_, v_cls_7_, v_decls_8_);
return v___x_9_;
}
else
{
lean_object* v_msg_10_; lean_object* v___x_11_; 
v_msg_10_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_msg_10_);
lean_dec_ref_known(v_t_5_, 1);
v___x_11_ = lean_apply_1(v_k_6_, v_msg_10_);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorElim(lean_object* v_motive_12_, lean_object* v_ctorIdx_13_, lean_object* v_t_14_, lean_object* v_h_15_, lean_object* v_k_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_IR_LogEntry_ctorElim___redArg(v_t_14_, v_k_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_ctorElim___boxed(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_IR_LogEntry_ctorElim(v_motive_18_, v_ctorIdx_19_, v_t_20_, v_h_21_, v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_step_elim___redArg(lean_object* v_t_24_, lean_object* v_step_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Lean_IR_LogEntry_ctorElim___redArg(v_t_24_, v_step_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_step_elim(lean_object* v_motive_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_step_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_IR_LogEntry_ctorElim___redArg(v_t_28_, v_step_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_message_elim___redArg(lean_object* v_t_32_, lean_object* v_message_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lean_IR_LogEntry_ctorElim___redArg(v_t_32_, v_message_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_message_elim(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_message_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_IR_LogEntry_ctorElim___redArg(v_t_36_, v_message_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_IR_LogEntry_fmt_spec__0(lean_object* v_a_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = lean_nat_to_int(v_a_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LogEntry_fmt_spec__1(lean_object* v_as_42_, size_t v_i_43_, size_t v_stop_44_, lean_object* v_b_45_){
_start:
{
uint8_t v___x_46_; 
v___x_46_ = lean_usize_dec_eq(v_i_43_, v_stop_44_);
if (v___x_46_ == 0)
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; size_t v___x_53_; size_t v___x_54_; 
v___x_47_ = lean_array_uget_borrowed(v_as_42_, v_i_43_);
v___x_48_ = lean_box(1);
v___x_49_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_49_, 0, v_b_45_);
lean_ctor_set(v___x_49_, 1, v___x_48_);
v___x_50_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_47_);
v___x_51_ = l_Lean_IR_formatDecl(v___x_47_, v___x_50_);
v___x_52_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_52_, 0, v___x_49_);
lean_ctor_set(v___x_52_, 1, v___x_51_);
v___x_53_ = ((size_t)1ULL);
v___x_54_ = lean_usize_add(v_i_43_, v___x_53_);
v_i_43_ = v___x_54_;
v_b_45_ = v___x_52_;
goto _start;
}
else
{
return v_b_45_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LogEntry_fmt_spec__1___boxed(lean_object* v_as_56_, lean_object* v_i_57_, lean_object* v_stop_58_, lean_object* v_b_59_){
_start:
{
size_t v_i_boxed_60_; size_t v_stop_boxed_61_; lean_object* v_res_62_; 
v_i_boxed_60_ = lean_unbox_usize(v_i_57_);
lean_dec(v_i_57_);
v_stop_boxed_61_ = lean_unbox_usize(v_stop_58_);
lean_dec(v_stop_58_);
v_res_62_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LogEntry_fmt_spec__1(v_as_56_, v_i_boxed_60_, v_stop_boxed_61_, v_b_59_);
lean_dec_ref(v_as_56_);
return v_res_62_;
}
}
static lean_object* _init_l_Lean_IR_LogEntry_fmt___closed__2(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = ((lean_object*)(l_Lean_IR_LogEntry_fmt___closed__0));
v___x_66_ = lean_string_length(v___x_65_);
return v___x_66_;
}
}
static lean_object* _init_l_Lean_IR_LogEntry_fmt___closed__3(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_obj_once(&l_Lean_IR_LogEntry_fmt___closed__2, &l_Lean_IR_LogEntry_fmt___closed__2_once, _init_l_Lean_IR_LogEntry_fmt___closed__2);
v___x_68_ = lean_nat_to_int(v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_LogEntry_fmt(lean_object* v_x_73_){
_start:
{
if (lean_obj_tag(v_x_73_) == 0)
{
lean_object* v_cls_74_; lean_object* v_decls_75_; lean_object* v___x_77_; uint8_t v_isShared_78_; uint8_t v_isSharedCheck_101_; 
v_cls_74_ = lean_ctor_get(v_x_73_, 0);
v_decls_75_ = lean_ctor_get(v_x_73_, 1);
v_isSharedCheck_101_ = !lean_is_exclusive(v_x_73_);
if (v_isSharedCheck_101_ == 0)
{
v___x_77_ = v_x_73_;
v_isShared_78_ = v_isSharedCheck_101_;
goto v_resetjp_76_;
}
else
{
lean_inc(v_decls_75_);
lean_inc(v_cls_74_);
lean_dec(v_x_73_);
v___x_77_ = lean_box(0);
v_isShared_78_ = v_isSharedCheck_101_;
goto v_resetjp_76_;
}
v_resetjp_76_:
{
uint8_t v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_85_; 
v___x_79_ = 1;
v___x_80_ = l_Lean_Name_toString(v_cls_74_, v___x_79_);
v___x_81_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
v___x_82_ = lean_obj_once(&l_Lean_IR_LogEntry_fmt___closed__3, &l_Lean_IR_LogEntry_fmt___closed__3_once, _init_l_Lean_IR_LogEntry_fmt___closed__3);
v___x_83_ = ((lean_object*)(l_Lean_IR_LogEntry_fmt___closed__4));
if (v_isShared_78_ == 0)
{
lean_ctor_set_tag(v___x_77_, 5);
lean_ctor_set(v___x_77_, 1, v___x_81_);
lean_ctor_set(v___x_77_, 0, v___x_83_);
v___x_85_ = v___x_77_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v___x_83_);
lean_ctor_set(v_reuseFailAlloc_100_, 1, v___x_81_);
v___x_85_ = v_reuseFailAlloc_100_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; uint8_t v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_86_ = ((lean_object*)(l_Lean_IR_LogEntry_fmt___closed__5));
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_85_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_82_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
v___x_89_ = 0;
v___x_90_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_90_, 0, v___x_88_);
lean_ctor_set_uint8(v___x_90_, sizeof(void*)*1, v___x_89_);
v___x_91_ = lean_box(0);
v___x_92_ = lean_unsigned_to_nat(0u);
v___x_93_ = lean_array_get_size(v_decls_75_);
v___x_94_ = lean_nat_dec_lt(v___x_92_, v___x_93_);
if (v___x_94_ == 0)
{
lean_object* v___x_95_; 
lean_dec_ref(v_decls_75_);
v___x_95_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_90_);
lean_ctor_set(v___x_95_, 1, v___x_91_);
return v___x_95_;
}
else
{
size_t v___x_96_; size_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_96_ = ((size_t)0ULL);
v___x_97_ = lean_usize_of_nat(v___x_93_);
v___x_98_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_LogEntry_fmt_spec__1(v_decls_75_, v___x_96_, v___x_97_, v___x_91_);
lean_dec_ref(v_decls_75_);
v___x_99_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_99_, 0, v___x_90_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
return v___x_99_;
}
}
}
}
else
{
lean_object* v_msg_102_; 
v_msg_102_ = lean_ctor_get(v_x_73_, 0);
lean_inc(v_msg_102_);
lean_dec_ref_known(v_x_73_, 1);
return v_msg_102_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Log_format_spec__0(lean_object* v_as_105_, size_t v_i_106_, size_t v_stop_107_, lean_object* v_b_108_){
_start:
{
uint8_t v___x_109_; 
v___x_109_ = lean_usize_dec_eq(v_i_106_, v_stop_107_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; size_t v___x_115_; size_t v___x_116_; 
v___x_110_ = lean_array_uget_borrowed(v_as_105_, v_i_106_);
v___x_111_ = lean_box(1);
v___x_112_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_112_, 0, v_b_108_);
lean_ctor_set(v___x_112_, 1, v___x_111_);
lean_inc(v___x_110_);
v___x_113_ = l_Lean_IR_LogEntry_fmt(v___x_110_);
v___x_114_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_114_, 0, v___x_112_);
lean_ctor_set(v___x_114_, 1, v___x_113_);
v___x_115_ = ((size_t)1ULL);
v___x_116_ = lean_usize_add(v_i_106_, v___x_115_);
v_i_106_ = v___x_116_;
v_b_108_ = v___x_114_;
goto _start;
}
else
{
return v_b_108_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Log_format_spec__0___boxed(lean_object* v_as_118_, lean_object* v_i_119_, lean_object* v_stop_120_, lean_object* v_b_121_){
_start:
{
size_t v_i_boxed_122_; size_t v_stop_boxed_123_; lean_object* v_res_124_; 
v_i_boxed_122_ = lean_unbox_usize(v_i_119_);
lean_dec(v_i_119_);
v_stop_boxed_123_ = lean_unbox_usize(v_stop_120_);
lean_dec(v_stop_120_);
v_res_124_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Log_format_spec__0(v_as_118_, v_i_boxed_122_, v_stop_boxed_123_, v_b_121_);
lean_dec_ref(v_as_118_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Log_format(lean_object* v_log_125_){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_126_ = lean_box(0);
v___x_127_ = lean_unsigned_to_nat(0u);
v___x_128_ = lean_array_get_size(v_log_125_);
v___x_129_ = lean_nat_dec_lt(v___x_127_, v___x_128_);
if (v___x_129_ == 0)
{
return v___x_126_;
}
else
{
size_t v___x_130_; size_t v___x_131_; lean_object* v___x_132_; 
v___x_130_ = ((size_t)0ULL);
v___x_131_ = lean_usize_of_nat(v___x_128_);
v___x_132_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_Log_format_spec__0(v_log_125_, v___x_130_, v___x_131_, v___x_126_);
return v___x_132_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Log_format___boxed(lean_object* v_log_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Lean_IR_Log_format(v_log_133_);
lean_dec_ref(v_log_133_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Log_toString(lean_object* v_log_135_){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_136_ = l_Lean_IR_Log_format(v_log_135_);
v___x_137_ = l_Std_Format_defWidth;
v___x_138_ = lean_unsigned_to_nat(0u);
v___x_139_ = l_Std_Format_pretty(v___x_136_, v___x_137_, v___x_138_, v___x_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_Log_toString___boxed(lean_object* v_log_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_Lean_IR_Log_toString(v_log_140_);
lean_dec_ref(v_log_140_);
return v_res_141_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_142_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_143_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0);
v___x_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
return v___x_144_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_145_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_146_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1);
v___x_147_ = lean_unsigned_to_nat(0u);
v___x_148_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_148_, 0, v___x_147_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
lean_ctor_set(v___x_148_, 2, v___x_147_);
lean_ctor_set(v___x_148_, 3, v___x_147_);
lean_ctor_set(v___x_148_, 4, v___x_146_);
lean_ctor_set(v___x_148_, 5, v___x_146_);
lean_ctor_set(v___x_148_, 6, v___x_146_);
lean_ctor_set(v___x_148_, 7, v___x_146_);
lean_ctor_set(v___x_148_, 8, v___x_146_);
lean_ctor_set(v___x_148_, 9, v___x_146_);
lean_ctor_set(v___x_148_, 10, v___x_146_);
lean_ctor_set(v___x_148_, 11, v___x_145_);
return v___x_148_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_149_ = lean_unsigned_to_nat(32u);
v___x_150_ = lean_mk_empty_array_with_capacity(v___x_149_);
v___x_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
return v___x_151_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_152_ = ((size_t)5ULL);
v___x_153_ = lean_unsigned_to_nat(0u);
v___x_154_ = lean_unsigned_to_nat(32u);
v___x_155_ = lean_mk_empty_array_with_capacity(v___x_154_);
v___x_156_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__3);
v___x_157_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v___x_155_);
lean_ctor_set(v___x_157_, 2, v___x_153_);
lean_ctor_set(v___x_157_, 3, v___x_153_);
lean_ctor_set_usize(v___x_157_, 4, v___x_152_);
return v___x_157_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_158_ = lean_box(1);
v___x_159_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__4);
v___x_160_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__1);
v___x_161_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set(v___x_161_, 1, v___x_159_);
lean_ctor_set(v___x_161_, 2, v___x_158_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0(lean_object* v_msgData_162_, lean_object* v___y_163_, lean_object* v___y_164_){
_start:
{
lean_object* v___x_166_; lean_object* v_toCold_167_; lean_object* v_env_168_; lean_object* v_options_169_; uint8_t v___x_170_; lean_object* v_env_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_166_ = lean_st_ref_get(v___y_164_);
v_toCold_167_ = lean_ctor_get(v___y_163_, 0);
v_env_168_ = lean_ctor_get(v___x_166_, 0);
lean_inc_ref(v_env_168_);
lean_dec(v___x_166_);
v_options_169_ = lean_ctor_get(v_toCold_167_, 2);
v___x_170_ = 0;
v_env_171_ = l_Lean_Environment_setRecordingDeps(v_env_168_, v___x_170_);
v___x_172_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__2);
v___x_173_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_169_);
v___x_174_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_174_, 0, v_env_171_);
lean_ctor_set(v___x_174_, 1, v___x_172_);
lean_ctor_set(v___x_174_, 2, v___x_173_);
lean_ctor_set(v___x_174_, 3, v_options_169_);
v___x_175_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
lean_ctor_set(v___x_175_, 1, v_msgData_162_);
v___x_176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___boxed(lean_object* v_msgData_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0(v_msgData_177_, v___y_178_, v___y_179_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
return v_res_181_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__0(void){
_start:
{
lean_object* v___x_182_; double v___x_183_; 
v___x_182_ = lean_unsigned_to_nat(0u);
v___x_183_ = lean_float_of_nat(v___x_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_IR_log_spec__0(lean_object* v_cls_187_, lean_object* v_msg_188_, lean_object* v___y_189_, lean_object* v___y_190_){
_start:
{
lean_object* v_ref_192_; lean_object* v___x_193_; lean_object* v_a_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_239_; 
v_ref_192_ = lean_ctor_get(v___y_189_, 2);
v___x_193_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0(v_msg_188_, v___y_189_, v___y_190_);
v_a_194_ = lean_ctor_get(v___x_193_, 0);
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_193_);
if (v_isSharedCheck_239_ == 0)
{
v___x_196_ = v___x_193_;
v_isShared_197_ = v_isSharedCheck_239_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_a_194_);
lean_dec(v___x_193_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_239_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_198_; lean_object* v_traceState_199_; lean_object* v_env_200_; lean_object* v_nextMacroScope_201_; lean_object* v_ngen_202_; lean_object* v_auxDeclNGen_203_; lean_object* v_cache_204_; lean_object* v_recordedDeps_205_; lean_object* v_messages_206_; lean_object* v_infoState_207_; lean_object* v_snapshotTasks_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_238_; 
v___x_198_ = lean_st_ref_take(v___y_190_);
v_traceState_199_ = lean_ctor_get(v___x_198_, 4);
v_env_200_ = lean_ctor_get(v___x_198_, 0);
v_nextMacroScope_201_ = lean_ctor_get(v___x_198_, 1);
v_ngen_202_ = lean_ctor_get(v___x_198_, 2);
v_auxDeclNGen_203_ = lean_ctor_get(v___x_198_, 3);
v_cache_204_ = lean_ctor_get(v___x_198_, 5);
v_recordedDeps_205_ = lean_ctor_get(v___x_198_, 6);
v_messages_206_ = lean_ctor_get(v___x_198_, 7);
v_infoState_207_ = lean_ctor_get(v___x_198_, 8);
v_snapshotTasks_208_ = lean_ctor_get(v___x_198_, 9);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_238_ == 0)
{
v___x_210_ = v___x_198_;
v_isShared_211_ = v_isSharedCheck_238_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_snapshotTasks_208_);
lean_inc(v_infoState_207_);
lean_inc(v_messages_206_);
lean_inc(v_recordedDeps_205_);
lean_inc(v_cache_204_);
lean_inc(v_traceState_199_);
lean_inc(v_auxDeclNGen_203_);
lean_inc(v_ngen_202_);
lean_inc(v_nextMacroScope_201_);
lean_inc(v_env_200_);
lean_dec(v___x_198_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_238_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
uint64_t v_tid_212_; lean_object* v_traces_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_237_; 
v_tid_212_ = lean_ctor_get_uint64(v_traceState_199_, sizeof(void*)*1);
v_traces_213_ = lean_ctor_get(v_traceState_199_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v_traceState_199_);
if (v_isSharedCheck_237_ == 0)
{
v___x_215_ = v_traceState_199_;
v_isShared_216_ = v_isSharedCheck_237_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_traces_213_);
lean_dec(v_traceState_199_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_237_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_217_; lean_object* v___x_218_; double v___x_219_; uint8_t v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_228_; 
v___x_217_ = lean_box(0);
v___x_218_ = lean_box(0);
v___x_219_ = lean_float_once(&l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__0);
v___x_220_ = 0;
v___x_221_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__1));
v___x_222_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_222_, 0, v_cls_187_);
lean_ctor_set(v___x_222_, 1, v___x_218_);
lean_ctor_set(v___x_222_, 2, v___x_221_);
lean_ctor_set_float(v___x_222_, sizeof(void*)*3, v___x_219_);
lean_ctor_set_float(v___x_222_, sizeof(void*)*3 + 8, v___x_219_);
lean_ctor_set_uint8(v___x_222_, sizeof(void*)*3 + 16, v___x_220_);
v___x_223_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_IR_log_spec__0___closed__2));
v___x_224_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_224_, 0, v___x_222_);
lean_ctor_set(v___x_224_, 1, v_a_194_);
lean_ctor_set(v___x_224_, 2, v___x_223_);
lean_inc(v_ref_192_);
v___x_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_225_, 0, v_ref_192_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
v___x_226_ = l_Lean_PersistentArray_push___redArg(v_traces_213_, v___x_225_);
if (v_isShared_216_ == 0)
{
lean_ctor_set(v___x_215_, 0, v___x_226_);
v___x_228_ = v___x_215_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_226_);
lean_ctor_set_uint64(v_reuseFailAlloc_236_, sizeof(void*)*1, v_tid_212_);
v___x_228_ = v_reuseFailAlloc_236_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
lean_object* v___x_230_; 
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 4, v___x_228_);
v___x_230_ = v___x_210_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_env_200_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v_nextMacroScope_201_);
lean_ctor_set(v_reuseFailAlloc_235_, 2, v_ngen_202_);
lean_ctor_set(v_reuseFailAlloc_235_, 3, v_auxDeclNGen_203_);
lean_ctor_set(v_reuseFailAlloc_235_, 4, v___x_228_);
lean_ctor_set(v_reuseFailAlloc_235_, 5, v_cache_204_);
lean_ctor_set(v_reuseFailAlloc_235_, 6, v_recordedDeps_205_);
lean_ctor_set(v_reuseFailAlloc_235_, 7, v_messages_206_);
lean_ctor_set(v_reuseFailAlloc_235_, 8, v_infoState_207_);
lean_ctor_set(v_reuseFailAlloc_235_, 9, v_snapshotTasks_208_);
v___x_230_ = v_reuseFailAlloc_235_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_231_ = lean_st_ref_put(v___y_190_, v___x_230_);
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 0, v___x_217_);
v___x_233_ = v___x_196_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_217_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_IR_log_spec__0___boxed(lean_object* v_cls_240_, lean_object* v_msg_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lean_addTrace___at___00Lean_IR_log_spec__0(v_cls_240_, v_msg_241_, v___y_242_, v___y_243_);
lean_dec(v___y_243_);
lean_dec_ref(v___y_242_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_log(lean_object* v_entry_251_, lean_object* v_a_252_, lean_object* v_a_253_){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_255_ = ((lean_object*)(l_Lean_IR_log___closed__2));
v___x_256_ = l_Lean_IR_LogEntry_fmt(v_entry_251_);
v___x_257_ = l_Lean_MessageData_ofFormat(v___x_256_);
v___x_258_ = l_Lean_addTrace___at___00Lean_IR_log_spec__0(v___x_255_, v___x_257_, v_a_252_, v_a_253_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_log___boxed(lean_object* v_entry_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Lean_IR_log(v_entry_259_, v_a_260_, v_a_261_);
lean_dec(v_a_261_);
lean_dec_ref(v_a_260_);
return v_res_263_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_isLogEnabledFor(lean_object* v_opts_272_, lean_object* v_optName_273_){
_start:
{
lean_object* v_map_274_; lean_object* v___x_281_; 
v_map_274_ = lean_ctor_get(v_opts_272_, 0);
v___x_281_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_274_, v_optName_273_);
if (lean_obj_tag(v___x_281_) == 1)
{
lean_object* v_val_282_; 
v_val_282_ = lean_ctor_get(v___x_281_, 0);
lean_inc(v_val_282_);
lean_dec_ref_known(v___x_281_, 1);
if (lean_obj_tag(v_val_282_) == 1)
{
uint8_t v_v_283_; 
v_v_283_ = lean_ctor_get_uint8(v_val_282_, 0);
lean_dec_ref_known(v_val_282_, 0);
return v_v_283_;
}
else
{
lean_dec(v_val_282_);
goto v___jp_275_;
}
}
else
{
lean_dec(v___x_281_);
goto v___jp_275_;
}
v___jp_275_:
{
lean_object* v___x_276_; uint8_t v___x_277_; lean_object* v___x_278_; 
v___x_276_ = ((lean_object*)(l_Lean_IR_tracePrefixOptionName));
v___x_277_ = 0;
v___x_278_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_274_, v___x_276_);
if (lean_obj_tag(v___x_278_) == 0)
{
return v___x_277_;
}
else
{
lean_object* v_val_279_; 
v_val_279_ = lean_ctor_get(v___x_278_, 0);
lean_inc(v_val_279_);
lean_dec_ref_known(v___x_278_, 1);
if (lean_obj_tag(v_val_279_) == 1)
{
uint8_t v_v_280_; 
v_v_280_ = lean_ctor_get_uint8(v_val_279_, 0);
lean_dec_ref_known(v_val_279_, 0);
return v_v_280_;
}
else
{
lean_dec(v_val_279_);
return v___x_277_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_isLogEnabledFor___boxed(lean_object* v_opts_284_, lean_object* v_optName_285_){
_start:
{
uint8_t v_res_286_; lean_object* v_r_287_; 
v_res_286_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_isLogEnabledFor(v_opts_284_, v_optName_285_);
lean_dec(v_optName_285_);
lean_dec_ref(v_opts_284_);
v_r_287_ = lean_box(v_res_286_);
return v_r_287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(lean_object* v_optName_288_, lean_object* v_cls_289_, lean_object* v_decls_290_, lean_object* v_a_291_, lean_object* v_a_292_){
_start:
{
lean_object* v___x_294_; uint8_t v___x_295_; 
v___x_294_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_291_);
v___x_295_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_isLogEnabledFor(v___x_294_, v_optName_288_);
lean_dec_ref(v___x_294_);
if (v___x_295_ == 0)
{
lean_object* v___x_296_; lean_object* v___x_297_; 
lean_dec_ref(v_decls_290_);
lean_dec(v_cls_289_);
v___x_296_ = lean_box(0);
v___x_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
return v___x_297_;
}
else
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_298_, 0, v_cls_289_);
lean_ctor_set(v___x_298_, 1, v_decls_290_);
v___x_299_ = l_Lean_IR_log(v___x_298_, v_a_291_, v_a_292_);
return v___x_299_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux___boxed(lean_object* v_optName_300_, lean_object* v_cls_301_, lean_object* v_decls_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(v_optName_300_, v_cls_301_, v_decls_302_, v_a_303_, v_a_304_);
lean_dec(v_a_304_);
lean_dec_ref(v_a_303_);
lean_dec(v_optName_300_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logDecls(lean_object* v_cls_307_, lean_object* v_decl_308_, lean_object* v_a_309_, lean_object* v_a_310_){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_312_ = ((lean_object*)(l_Lean_IR_tracePrefixOptionName));
lean_inc(v_cls_307_);
v___x_313_ = l_Lean_Name_append(v___x_312_, v_cls_307_);
v___x_314_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(v___x_313_, v_cls_307_, v_decl_308_, v_a_309_, v_a_310_);
lean_dec(v___x_313_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logDecls___boxed(lean_object* v_cls_315_, lean_object* v_decl_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lean_IR_logDecls(v_cls_315_, v_decl_316_, v_a_317_, v_a_318_);
lean_dec(v_a_318_);
lean_dec_ref(v_a_317_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg(lean_object* v_inst_321_, lean_object* v_optName_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_){
_start:
{
lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_327_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_324_);
v___x_328_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_isLogEnabledFor(v___x_327_, v_optName_322_);
lean_dec_ref(v___x_327_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; lean_object* v___x_330_; 
lean_dec(v_a_323_);
lean_dec_ref(v_inst_321_);
v___x_329_ = lean_box(0);
v___x_330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
return v___x_330_;
}
else
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_331_ = lean_apply_1(v_inst_321_, v_a_323_);
v___x_332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_332_, 0, v___x_331_);
v___x_333_ = l_Lean_IR_log(v___x_332_, v_a_324_, v_a_325_);
return v___x_333_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg___boxed(lean_object* v_inst_334_, lean_object* v_optName_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg(v_inst_334_, v_optName_335_, v_a_336_, v_a_337_, v_a_338_);
lean_dec(v_a_338_);
lean_dec_ref(v_a_337_);
lean_dec(v_optName_335_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux(lean_object* v_00_u03b1_341_, lean_object* v_inst_342_, lean_object* v_optName_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg(v_inst_342_, v_optName_343_, v_a_344_, v_a_345_, v_a_346_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___boxed(lean_object* v_00_u03b1_349_, lean_object* v_inst_350_, lean_object* v_optName_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux(v_00_u03b1_349_, v_inst_350_, v_optName_351_, v_a_352_, v_a_353_, v_a_354_);
lean_dec(v_a_354_);
lean_dec_ref(v_a_353_);
lean_dec(v_optName_351_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logMessageIf___redArg(lean_object* v_inst_357_, lean_object* v_cls_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_363_ = ((lean_object*)(l_Lean_IR_tracePrefixOptionName));
v___x_364_ = l_Lean_Name_append(v___x_363_, v_cls_358_);
v___x_365_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg(v_inst_357_, v___x_364_, v_a_359_, v_a_360_, v_a_361_);
lean_dec(v___x_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logMessageIf___redArg___boxed(lean_object* v_inst_366_, lean_object* v_cls_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lean_IR_logMessageIf___redArg(v_inst_366_, v_cls_367_, v_a_368_, v_a_369_, v_a_370_);
lean_dec(v_a_370_);
lean_dec_ref(v_a_369_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logMessageIf(lean_object* v_00_u03b1_373_, lean_object* v_inst_374_, lean_object* v_cls_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_380_ = ((lean_object*)(l_Lean_IR_tracePrefixOptionName));
v___x_381_ = l_Lean_Name_append(v___x_380_, v_cls_375_);
v___x_382_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg(v_inst_374_, v___x_381_, v_a_376_, v_a_377_, v_a_378_);
lean_dec(v___x_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logMessageIf___boxed(lean_object* v_00_u03b1_383_, lean_object* v_inst_384_, lean_object* v_cls_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l_Lean_IR_logMessageIf(v_00_u03b1_383_, v_inst_384_, v_cls_385_, v_a_386_, v_a_387_, v_a_388_);
lean_dec(v_a_388_);
lean_dec_ref(v_a_387_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logMessage___redArg(lean_object* v_inst_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = ((lean_object*)(l_Lean_IR_tracePrefixOptionName));
v___x_397_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg(v_inst_391_, v___x_396_, v_a_392_, v_a_393_, v_a_394_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logMessage___redArg___boxed(lean_object* v_inst_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Lean_IR_logMessage___redArg(v_inst_398_, v_a_399_, v_a_400_, v_a_401_);
lean_dec(v_a_401_);
lean_dec_ref(v_a_400_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logMessage(lean_object* v_00_u03b1_404_, lean_object* v_inst_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = ((lean_object*)(l_Lean_IR_tracePrefixOptionName));
v___x_411_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logMessageIfAux___redArg(v_inst_405_, v___x_410_, v_a_406_, v_a_407_, v_a_408_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_logMessage___boxed(lean_object* v_00_u03b1_412_, lean_object* v_inst_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Lean_IR_logMessage(v_00_u03b1_412_, v_inst_413_, v_a_414_, v_a_415_, v_a_416_);
lean_dec(v_a_416_);
lean_dec_ref(v_a_415_);
return v_res_418_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_declLt(lean_object* v_a_419_, lean_object* v_b_420_){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_421_ = l_Lean_IR_Decl_name(v_a_419_);
v___x_422_ = l_Lean_IR_Decl_name(v_b_420_);
v___x_423_ = l_Lean_Name_quickLt(v___x_421_, v___x_422_);
lean_dec(v___x_422_);
lean_dec(v___x_421_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_declLt___boxed(lean_object* v_a_424_, lean_object* v_b_425_){
_start:
{
uint8_t v_res_426_; lean_object* v_r_427_; 
v_res_426_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_declLt(v_a_424_, v_b_425_);
lean_dec_ref(v_b_425_);
lean_dec_ref(v_a_424_);
v_r_427_ = lean_box(v_res_426_);
return v_r_427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_sortDecls(lean_object* v_decls_429_){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; uint8_t v___x_432_; 
v___x_430_ = lean_array_get_size(v_decls_429_);
v___x_431_ = lean_unsigned_to_nat(0u);
v___x_432_ = lean_nat_dec_eq(v___x_430_, v___x_431_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___y_437_; uint8_t v___x_441_; 
v___x_433_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_sortDecls___closed__0));
v___x_434_ = lean_unsigned_to_nat(1u);
v___x_435_ = lean_nat_sub(v___x_430_, v___x_434_);
v___x_441_ = lean_nat_dec_le(v___x_431_, v___x_435_);
if (v___x_441_ == 0)
{
lean_inc(v___x_435_);
v___y_437_ = v___x_435_;
goto v___jp_436_;
}
else
{
v___y_437_ = v___x_431_;
goto v___jp_436_;
}
v___jp_436_:
{
uint8_t v___x_438_; 
v___x_438_ = lean_nat_dec_le(v___y_437_, v___x_435_);
if (v___x_438_ == 0)
{
lean_object* v___x_439_; 
lean_dec(v___x_435_);
lean_inc(v___y_437_);
v___x_439_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___x_433_, v___x_430_, v_decls_429_, v___y_437_, v___y_437_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_437_);
return v___x_439_;
}
else
{
lean_object* v___x_440_; 
v___x_440_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___x_433_, v___x_430_, v_decls_429_, v___y_437_, v___x_435_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___x_435_);
return v___x_440_;
}
}
}
else
{
return v_decls_429_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f(lean_object* v_decls_445_, lean_object* v_declName_446_){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; uint8_t v___x_449_; 
v___x_447_ = lean_unsigned_to_nat(0u);
v___x_448_ = lean_array_get_size(v_decls_445_);
v___x_449_ = lean_nat_dec_lt(v___x_447_, v___x_448_);
if (v___x_449_ == 0)
{
lean_object* v___x_450_; 
lean_dec(v_declName_446_);
v___x_450_ = lean_box(0);
return v___x_450_;
}
else
{
lean_object* v___x_451_; lean_object* v___x_452_; uint8_t v___x_453_; 
v___x_451_ = lean_unsigned_to_nat(1u);
v___x_452_ = lean_nat_sub(v___x_448_, v___x_451_);
v___x_453_ = lean_nat_dec_le(v___x_447_, v___x_452_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; 
lean_dec(v___x_452_);
lean_dec(v_declName_446_);
v___x_454_ = lean_box(0);
return v___x_454_;
}
else
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v_tmpDecl_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_455_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0));
v___x_456_ = lean_box(0);
v___x_457_ = lean_box(0);
v_tmpDecl_458_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_tmpDecl_458_, 0, v_declName_446_);
lean_ctor_set(v_tmpDecl_458_, 1, v___x_455_);
lean_ctor_set(v_tmpDecl_458_, 2, v___x_456_);
lean_ctor_set(v_tmpDecl_458_, 3, v___x_457_);
v___x_459_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_sortDecls___closed__0));
v___x_460_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__1));
v___x_461_ = l_Array_binSearchAux___redArg(v___x_459_, v___x_460_, v_decls_445_, v_tmpDecl_458_, v___x_447_, v___x_452_);
return v___x_461_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___boxed(lean_object* v_decls_462_, lean_object* v_declName_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f(v_decls_462_, v_declName_463_);
lean_dec_ref(v_decls_462_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object* v_hi_465_, lean_object* v_pivot_466_, lean_object* v_as_467_, lean_object* v_i_468_, lean_object* v_k_469_){
_start:
{
uint8_t v___x_470_; 
v___x_470_ = lean_nat_dec_lt(v_k_469_, v_hi_465_);
if (v___x_470_ == 0)
{
lean_object* v___x_471_; lean_object* v___x_472_; 
lean_dec(v_k_469_);
v___x_471_ = lean_array_fswap(v_as_467_, v_i_468_, v_hi_465_);
v___x_472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_472_, 0, v_i_468_);
lean_ctor_set(v___x_472_, 1, v___x_471_);
return v___x_472_;
}
else
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; uint8_t v___x_476_; 
v___x_473_ = lean_array_fget_borrowed(v_as_467_, v_k_469_);
v___x_474_ = l_Lean_IR_Decl_name(v___x_473_);
v___x_475_ = l_Lean_IR_Decl_name(v_pivot_466_);
v___x_476_ = l_Lean_Name_quickLt(v___x_474_, v___x_475_);
lean_dec(v___x_475_);
lean_dec(v___x_474_);
if (v___x_476_ == 0)
{
lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_477_ = lean_unsigned_to_nat(1u);
v___x_478_ = lean_nat_add(v_k_469_, v___x_477_);
lean_dec(v_k_469_);
v_k_469_ = v___x_478_;
goto _start;
}
else
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_480_ = lean_array_fswap(v_as_467_, v_i_468_, v_k_469_);
v___x_481_ = lean_unsigned_to_nat(1u);
v___x_482_ = lean_nat_add(v_i_468_, v___x_481_);
lean_dec(v_i_468_);
v___x_483_ = lean_nat_add(v_k_469_, v___x_481_);
lean_dec(v_k_469_);
v_as_467_ = v___x_480_;
v_i_468_ = v___x_482_;
v_k_469_ = v___x_483_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object* v_hi_485_, lean_object* v_pivot_486_, lean_object* v_as_487_, lean_object* v_i_488_, lean_object* v_k_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___redArg(v_hi_485_, v_pivot_486_, v_as_487_, v_i_488_, v_k_489_);
lean_dec_ref(v_pivot_486_);
lean_dec(v_hi_485_);
return v_res_490_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0(lean_object* v___y_491_, lean_object* v___y_492_){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; uint8_t v___x_495_; 
v___x_493_ = l_Lean_IR_Decl_name(v___y_491_);
v___x_494_ = l_Lean_IR_Decl_name(v___y_492_);
v___x_495_ = l_Lean_Name_quickLt(v___x_493_, v___x_494_);
lean_dec(v___x_494_);
lean_dec(v___x_493_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0___boxed(lean_object* v___y_496_, lean_object* v___y_497_){
_start:
{
uint8_t v_res_498_; lean_object* v_r_499_; 
v_res_498_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0(v___y_496_, v___y_497_);
lean_dec_ref(v___y_497_);
lean_dec_ref(v___y_496_);
v_r_499_ = lean_box(v_res_498_);
return v_r_499_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg(lean_object* v_n_500_, lean_object* v_as_501_, lean_object* v_lo_502_, lean_object* v_hi_503_){
_start:
{
lean_object* v___y_505_; uint8_t v___x_515_; 
v___x_515_ = lean_nat_dec_lt(v_lo_502_, v_hi_503_);
if (v___x_515_ == 0)
{
lean_dec(v_lo_502_);
return v_as_501_;
}
else
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v_mid_518_; lean_object* v___y_520_; lean_object* v___y_526_; lean_object* v___x_531_; lean_object* v___x_532_; uint8_t v___x_533_; 
v___x_516_ = lean_nat_add(v_lo_502_, v_hi_503_);
v___x_517_ = lean_unsigned_to_nat(1u);
v_mid_518_ = lean_nat_shiftr(v___x_516_, v___x_517_);
lean_dec(v___x_516_);
v___x_531_ = lean_array_fget_borrowed(v_as_501_, v_mid_518_);
v___x_532_ = lean_array_fget_borrowed(v_as_501_, v_lo_502_);
v___x_533_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0(v___x_531_, v___x_532_);
if (v___x_533_ == 0)
{
v___y_526_ = v_as_501_;
goto v___jp_525_;
}
else
{
lean_object* v___x_534_; 
v___x_534_ = lean_array_fswap(v_as_501_, v_lo_502_, v_mid_518_);
v___y_526_ = v___x_534_;
goto v___jp_525_;
}
v___jp_519_:
{
lean_object* v___x_521_; lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_521_ = lean_array_fget_borrowed(v___y_520_, v_mid_518_);
v___x_522_ = lean_array_fget_borrowed(v___y_520_, v_hi_503_);
v___x_523_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0(v___x_521_, v___x_522_);
if (v___x_523_ == 0)
{
lean_dec(v_mid_518_);
v___y_505_ = v___y_520_;
goto v___jp_504_;
}
else
{
lean_object* v___x_524_; 
v___x_524_ = lean_array_fswap(v___y_520_, v_mid_518_, v_hi_503_);
lean_dec(v_mid_518_);
v___y_505_ = v___x_524_;
goto v___jp_504_;
}
}
v___jp_525_:
{
lean_object* v___x_527_; lean_object* v___x_528_; uint8_t v___x_529_; 
v___x_527_ = lean_array_fget_borrowed(v___y_526_, v_hi_503_);
v___x_528_ = lean_array_fget_borrowed(v___y_526_, v_lo_502_);
v___x_529_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0(v___x_527_, v___x_528_);
if (v___x_529_ == 0)
{
v___y_520_ = v___y_526_;
goto v___jp_519_;
}
else
{
lean_object* v___x_530_; 
v___x_530_ = lean_array_fswap(v___y_526_, v_lo_502_, v_hi_503_);
v___y_520_ = v___x_530_;
goto v___jp_519_;
}
}
}
v___jp_504_:
{
lean_object* v_pivot_506_; lean_object* v___x_507_; lean_object* v_fst_508_; lean_object* v_snd_509_; uint8_t v___x_510_; 
v_pivot_506_ = lean_array_fget(v___y_505_, v_hi_503_);
lean_inc_n(v_lo_502_, 2);
v___x_507_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___redArg(v_hi_503_, v_pivot_506_, v___y_505_, v_lo_502_, v_lo_502_);
lean_dec(v_pivot_506_);
v_fst_508_ = lean_ctor_get(v___x_507_, 0);
lean_inc(v_fst_508_);
v_snd_509_ = lean_ctor_get(v___x_507_, 1);
lean_inc(v_snd_509_);
lean_dec_ref(v___x_507_);
v___x_510_ = lean_nat_dec_le(v_hi_503_, v_fst_508_);
if (v___x_510_ == 0)
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_511_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg(v_n_500_, v_snd_509_, v_lo_502_, v_fst_508_);
v___x_512_ = lean_unsigned_to_nat(1u);
v___x_513_ = lean_nat_add(v_fst_508_, v___x_512_);
lean_dec(v_fst_508_);
v_as_501_ = v___x_511_;
v_lo_502_ = v___x_513_;
goto _start;
}
else
{
lean_dec(v_fst_508_);
lean_dec(v_lo_502_);
return v_snd_509_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object* v_n_535_, lean_object* v_as_536_, lean_object* v_lo_537_, lean_object* v_hi_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg(v_n_535_, v_as_536_, v_lo_537_, v_hi_538_);
lean_dec(v_hi_538_);
lean_dec(v_n_535_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_env_546_, lean_object* v_as_547_, size_t v_i_548_, size_t v_stop_549_, lean_object* v_b_550_){
_start:
{
lean_object* v___y_552_; lean_object* v___y_557_; lean_object* v___y_558_; lean_object* v___y_559_; uint8_t v___x_563_; 
v___x_563_ = lean_usize_dec_eq(v_i_548_, v_stop_549_);
if (v___x_563_ == 0)
{
lean_object* v___x_564_; lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_564_ = lean_array_uget_borrowed(v_as_547_, v_i_548_);
v___x_579_ = l_Lean_IR_Decl_name(v___x_564_);
lean_inc_ref(v_env_546_);
v___x_580_ = l_Lean_isDeclMeta(v_env_546_, v___x_579_);
if (v___x_580_ == 0)
{
uint8_t v___x_581_; 
lean_inc_ref(v_env_546_);
v___x_581_ = l_Lean_Compiler_LCNF_isDeclPublic(v_env_546_, v___x_579_);
if (v___x_581_ == 0)
{
lean_dec(v___x_579_);
v___y_552_ = v_b_550_;
goto v___jp_551_;
}
else
{
uint8_t v___x_582_; 
v___x_582_ = l_Lean_Compiler_LCNF_isBoxedName(v___x_579_);
if (v___x_582_ == 0)
{
lean_dec(v___x_579_);
goto v___jp_565_;
}
else
{
lean_object* v___x_583_; uint8_t v___x_584_; 
v___x_583_ = l_Lean_Name_getPrefix(v___x_579_);
lean_dec(v___x_579_);
lean_inc_ref(v_env_546_);
v___x_584_ = l_Lean_isExtern(v_env_546_, v___x_583_);
if (v___x_584_ == 0)
{
goto v___jp_565_;
}
else
{
lean_object* v___x_585_; 
lean_inc(v___x_564_);
v___x_585_ = lean_array_push(v_b_550_, v___x_564_);
v___y_552_ = v___x_585_;
goto v___jp_551_;
}
}
}
}
else
{
lean_object* v___x_586_; 
lean_dec(v___x_579_);
lean_inc(v___x_564_);
v___x_586_ = lean_array_push(v_b_550_, v___x_564_);
v___y_552_ = v___x_586_;
goto v___jp_551_;
}
v___jp_565_:
{
if (lean_obj_tag(v___x_564_) == 0)
{
lean_object* v_f_566_; lean_object* v_xs_567_; lean_object* v_type_568_; lean_object* v___x_569_; 
v_f_566_ = lean_ctor_get(v___x_564_, 0);
v_xs_567_ = lean_ctor_get(v___x_564_, 1);
v_type_568_ = lean_ctor_get(v___x_564_, 2);
lean_inc(v_f_566_);
lean_inc_ref(v_env_546_);
v___x_569_ = lean_get_export_name_for(v_env_546_, v_f_566_);
if (lean_obj_tag(v___x_569_) == 1)
{
lean_object* v_val_570_; 
v_val_570_ = lean_ctor_get(v___x_569_, 0);
lean_inc(v_val_570_);
lean_dec_ref_known(v___x_569_, 1);
if (lean_obj_tag(v_val_570_) == 1)
{
lean_object* v_str_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v_str_571_ = lean_ctor_get(v_val_570_, 1);
lean_inc_ref(v_str_571_);
lean_dec_ref_known(v_val_570_, 2);
v___x_572_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__2));
v___x_573_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
lean_ctor_set(v___x_573_, 1, v_str_571_);
v___x_574_ = lean_box(0);
v___x_575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_573_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
lean_inc(v_type_568_);
lean_inc_ref(v_xs_567_);
lean_inc(v_f_566_);
v___x_576_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_576_, 0, v_f_566_);
lean_ctor_set(v___x_576_, 1, v_xs_567_);
lean_ctor_set(v___x_576_, 2, v_type_568_);
lean_ctor_set(v___x_576_, 3, v___x_575_);
v___x_577_ = lean_array_push(v_b_550_, v___x_576_);
v___y_552_ = v___x_577_;
goto v___jp_551_;
}
else
{
lean_dec(v_val_570_);
lean_inc_ref(v_xs_567_);
lean_inc(v_type_568_);
lean_inc(v_f_566_);
v___y_557_ = v_f_566_;
v___y_558_ = v_type_568_;
v___y_559_ = v_xs_567_;
goto v___jp_556_;
}
}
else
{
lean_dec(v___x_569_);
lean_inc_ref(v_xs_567_);
lean_inc(v_type_568_);
lean_inc(v_f_566_);
v___y_557_ = v_f_566_;
v___y_558_ = v_type_568_;
v___y_559_ = v_xs_567_;
goto v___jp_556_;
}
}
else
{
lean_object* v___x_578_; 
lean_inc(v___x_564_);
v___x_578_ = lean_array_push(v_b_550_, v___x_564_);
v___y_552_ = v___x_578_;
goto v___jp_551_;
}
}
}
else
{
lean_dec_ref(v_env_546_);
return v_b_550_;
}
v___jp_551_:
{
size_t v___x_553_; size_t v___x_554_; 
v___x_553_ = ((size_t)1ULL);
v___x_554_ = lean_usize_add(v_i_548_, v___x_553_);
v_i_548_ = v___x_554_;
v_b_550_ = v___y_552_;
goto _start;
}
v___jp_556_:
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_560_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___closed__0));
v___x_561_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_561_, 0, v___y_557_);
lean_ctor_set(v___x_561_, 1, v___y_559_);
lean_ctor_set(v___x_561_, 2, v___y_558_);
lean_ctor_set(v___x_561_, 3, v___x_560_);
v___x_562_ = lean_array_push(v_b_550_, v___x_561_);
v___y_552_ = v___x_562_;
goto v___jp_551_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_env_587_, lean_object* v_as_588_, lean_object* v_i_589_, lean_object* v_stop_590_, lean_object* v_b_591_){
_start:
{
size_t v_i_boxed_592_; size_t v_stop_boxed_593_; lean_object* v_res_594_; 
v_i_boxed_592_ = lean_unbox_usize(v_i_589_);
lean_dec(v_i_589_);
v_stop_boxed_593_ = lean_unbox_usize(v_stop_590_);
lean_dec(v_stop_590_);
v_res_594_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0(v_env_587_, v_as_588_, v_i_boxed_592_, v_stop_boxed_593_, v_b_591_);
lean_dec_ref(v_as_588_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0(lean_object* v_env_597_, lean_object* v_as_598_, lean_object* v_start_599_, lean_object* v_stop_600_){
_start:
{
lean_object* v___x_601_; uint8_t v___x_602_; 
v___x_601_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0___closed__0));
v___x_602_ = lean_nat_dec_lt(v_start_599_, v_stop_600_);
if (v___x_602_ == 0)
{
lean_dec_ref(v_env_597_);
return v___x_601_;
}
else
{
lean_object* v___x_603_; uint8_t v___x_604_; 
v___x_603_ = lean_array_get_size(v_as_598_);
v___x_604_ = lean_nat_dec_le(v_stop_600_, v___x_603_);
if (v___x_604_ == 0)
{
uint8_t v___x_605_; 
v___x_605_ = lean_nat_dec_lt(v_start_599_, v___x_603_);
if (v___x_605_ == 0)
{
lean_dec_ref(v_env_597_);
return v___x_601_;
}
else
{
size_t v___x_606_; size_t v___x_607_; lean_object* v___x_608_; 
v___x_606_ = lean_usize_of_nat(v_start_599_);
v___x_607_ = lean_usize_of_nat(v___x_603_);
v___x_608_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0(v_env_597_, v_as_598_, v___x_606_, v___x_607_, v___x_601_);
return v___x_608_;
}
}
else
{
size_t v___x_609_; size_t v___x_610_; lean_object* v___x_611_; 
v___x_609_ = lean_usize_of_nat(v_start_599_);
v___x_610_ = lean_usize_of_nat(v_stop_600_);
v___x_611_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0_spec__0(v_env_597_, v_as_598_, v___x_609_, v___x_610_, v___x_601_);
return v___x_611_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0___boxed(lean_object* v_env_612_, lean_object* v_as_613_, lean_object* v_start_614_, lean_object* v_stop_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0(v_env_612_, v_as_613_, v_start_614_, v_stop_615_);
lean_dec(v_stop_615_);
lean_dec(v_start_614_);
lean_dec_ref(v_as_613_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__1(lean_object* v_x_617_, lean_object* v_x_618_){
_start:
{
if (lean_obj_tag(v_x_618_) == 0)
{
return v_x_617_;
}
else
{
lean_object* v_head_619_; lean_object* v_tail_620_; lean_object* v___x_621_; 
v_head_619_ = lean_ctor_get(v_x_618_, 0);
lean_inc(v_head_619_);
v_tail_620_ = lean_ctor_get(v_x_618_, 1);
lean_inc(v_tail_620_);
lean_dec_ref_known(v_x_618_, 2);
v___x_621_ = lean_array_push(v_x_617_, v_head_619_);
v_x_617_ = v___x_621_;
v_x_618_ = v_tail_620_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object* v_env_623_, lean_object* v_s_624_, lean_object* v_entries_625_){
_start:
{
lean_object* v___y_627_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v_decls_637_; lean_object* v___x_638_; lean_object* v___y_640_; lean_object* v___y_641_; uint8_t v___x_643_; 
v___x_635_ = lean_unsigned_to_nat(0u);
v___x_636_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0___closed__0));
v_decls_637_ = l_List_foldl___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__1(v___x_636_, v_entries_625_);
v___x_638_ = lean_array_get_size(v_decls_637_);
v___x_643_ = lean_nat_dec_eq(v___x_638_, v___x_635_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___y_647_; uint8_t v___x_649_; 
v___x_644_ = lean_unsigned_to_nat(1u);
v___x_645_ = lean_nat_sub(v___x_638_, v___x_644_);
v___x_649_ = lean_nat_dec_le(v___x_635_, v___x_645_);
if (v___x_649_ == 0)
{
lean_inc(v___x_645_);
v___y_647_ = v___x_645_;
goto v___jp_646_;
}
else
{
v___y_647_ = v___x_635_;
goto v___jp_646_;
}
v___jp_646_:
{
uint8_t v___x_648_; 
v___x_648_ = lean_nat_dec_le(v___y_647_, v___x_645_);
if (v___x_648_ == 0)
{
lean_dec(v___x_645_);
lean_inc(v___y_647_);
v___y_640_ = v___y_647_;
v___y_641_ = v___y_647_;
goto v___jp_639_;
}
else
{
v___y_640_ = v___y_647_;
v___y_641_ = v___x_645_;
goto v___jp_639_;
}
}
}
else
{
v___y_627_ = v_decls_637_;
goto v___jp_626_;
}
v___jp_626_:
{
lean_object* v___x_628_; uint8_t v_isModule_629_; 
v___x_628_ = l_Lean_Environment_header(v_env_623_);
v_isModule_629_ = lean_ctor_get_uint8(v___x_628_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_628_);
if (v_isModule_629_ == 0)
{
lean_object* v___x_630_; 
lean_dec_ref(v_env_623_);
lean_inc_ref_n(v___y_627_, 2);
v___x_630_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_630_, 0, v___y_627_);
lean_ctor_set(v___x_630_, 1, v___y_627_);
lean_ctor_set(v___x_630_, 2, v___y_627_);
return v___x_630_;
}
else
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_631_ = lean_unsigned_to_nat(0u);
v___x_632_ = lean_array_get_size(v___y_627_);
v___x_633_ = l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0(v_env_623_, v___y_627_, v___x_631_, v___x_632_);
lean_dec_ref(v___y_627_);
lean_inc_ref_n(v___x_633_, 2);
v___x_634_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
lean_ctor_set(v___x_634_, 2, v___x_633_);
return v___x_634_;
}
}
v___jp_639_:
{
lean_object* v___x_642_; 
v___x_642_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg(v___x_638_, v_decls_637_, v___y_640_, v___y_641_);
lean_dec(v___y_641_);
v___y_627_ = v___x_642_;
goto v___jp_626_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed(lean_object* v_env_650_, lean_object* v_s_651_, lean_object* v_entries_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(v_env_650_, v_s_651_, v_entries_652_);
lean_dec_ref(v_s_651_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__1_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object* v_es_654_){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = lean_array_mk(v_es_654_);
return v___x_655_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___redArg(lean_object* v_keys_656_, lean_object* v_i_657_, lean_object* v_k_658_){
_start:
{
lean_object* v___x_659_; uint8_t v___x_660_; 
v___x_659_ = lean_array_get_size(v_keys_656_);
v___x_660_ = lean_nat_dec_lt(v_i_657_, v___x_659_);
if (v___x_660_ == 0)
{
lean_dec(v_i_657_);
return v___x_660_;
}
else
{
lean_object* v_k_x27_661_; uint8_t v___x_662_; 
v_k_x27_661_ = lean_array_fget_borrowed(v_keys_656_, v_i_657_);
v___x_662_ = lean_name_eq(v_k_658_, v_k_x27_661_);
if (v___x_662_ == 0)
{
lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_663_ = lean_unsigned_to_nat(1u);
v___x_664_ = lean_nat_add(v_i_657_, v___x_663_);
lean_dec(v_i_657_);
v_i_657_ = v___x_664_;
goto _start;
}
else
{
lean_dec(v_i_657_);
return v___x_660_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___redArg___boxed(lean_object* v_keys_666_, lean_object* v_i_667_, lean_object* v_k_668_){
_start:
{
uint8_t v_res_669_; lean_object* v_r_670_; 
v_res_669_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___redArg(v_keys_666_, v_i_667_, v_k_668_);
lean_dec(v_k_668_);
lean_dec_ref(v_keys_666_);
v_r_670_ = lean_box(v_res_669_);
return v_r_670_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___redArg(lean_object* v_x_671_, size_t v_x_672_, lean_object* v_x_673_){
_start:
{
if (lean_obj_tag(v_x_671_) == 0)
{
lean_object* v_es_674_; lean_object* v___x_675_; size_t v___x_676_; size_t v___x_677_; lean_object* v_j_678_; lean_object* v___x_679_; 
v_es_674_ = lean_ctor_get(v_x_671_, 0);
v___x_675_ = lean_box(2);
v___x_676_ = ((size_t)31ULL);
v___x_677_ = lean_usize_land(v_x_672_, v___x_676_);
v_j_678_ = lean_usize_to_nat(v___x_677_);
v___x_679_ = lean_array_get_borrowed(v___x_675_, v_es_674_, v_j_678_);
lean_dec(v_j_678_);
switch(lean_obj_tag(v___x_679_))
{
case 0:
{
lean_object* v_key_680_; uint8_t v___x_681_; 
v_key_680_ = lean_ctor_get(v___x_679_, 0);
v___x_681_ = lean_name_eq(v_x_673_, v_key_680_);
return v___x_681_;
}
case 1:
{
lean_object* v_node_682_; size_t v___x_683_; size_t v___x_684_; 
v_node_682_ = lean_ctor_get(v___x_679_, 0);
v___x_683_ = ((size_t)5ULL);
v___x_684_ = lean_usize_shift_right(v_x_672_, v___x_683_);
v_x_671_ = v_node_682_;
v_x_672_ = v___x_684_;
goto _start;
}
default: 
{
uint8_t v___x_686_; 
v___x_686_ = 0;
return v___x_686_;
}
}
}
else
{
lean_object* v_ks_687_; lean_object* v___x_688_; uint8_t v___x_689_; 
v_ks_687_ = lean_ctor_get(v_x_671_, 0);
v___x_688_ = lean_unsigned_to_nat(0u);
v___x_689_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___redArg(v_ks_687_, v___x_688_, v_x_673_);
return v___x_689_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___redArg___boxed(lean_object* v_x_690_, lean_object* v_x_691_, lean_object* v_x_692_){
_start:
{
size_t v_x_2190__boxed_693_; uint8_t v_res_694_; lean_object* v_r_695_; 
v_x_2190__boxed_693_ = lean_unbox_usize(v_x_691_);
lean_dec(v_x_691_);
v_res_694_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___redArg(v_x_690_, v_x_2190__boxed_693_, v_x_692_);
lean_dec(v_x_692_);
lean_dec_ref(v_x_690_);
v_r_695_ = lean_box(v_res_694_);
return v_r_695_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___redArg(lean_object* v_x_696_, lean_object* v_x_697_){
_start:
{
uint64_t v___y_699_; 
if (lean_obj_tag(v_x_697_) == 0)
{
uint64_t v___x_702_; 
v___x_702_ = 1723ULL;
v___y_699_ = v___x_702_;
goto v___jp_698_;
}
else
{
uint64_t v_hash_703_; 
v_hash_703_ = lean_ctor_get_uint64(v_x_697_, sizeof(void*)*2);
v___y_699_ = v_hash_703_;
goto v___jp_698_;
}
v___jp_698_:
{
size_t v___x_700_; uint8_t v___x_701_; 
v___x_700_ = lean_uint64_to_usize(v___y_699_);
v___x_701_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___redArg(v_x_696_, v___x_700_, v_x_697_);
return v___x_701_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___redArg___boxed(lean_object* v_x_704_, lean_object* v_x_705_){
_start:
{
uint8_t v_res_706_; lean_object* v_r_707_; 
v_res_706_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___redArg(v_x_704_, v_x_705_);
lean_dec(v_x_705_);
lean_dec_ref(v_x_704_);
v_r_707_ = lean_box(v_res_706_);
return v_r_707_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object* v_x1_708_, lean_object* v_x2_709_){
_start:
{
lean_object* v___x_710_; uint8_t v___x_711_; 
v___x_710_ = l_Lean_IR_Decl_name(v_x2_709_);
v___x_711_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___redArg(v_x1_708_, v___x_710_);
lean_dec(v___x_710_);
if (v___x_711_ == 0)
{
uint8_t v___x_712_; 
v___x_712_ = 1;
return v___x_712_;
}
else
{
uint8_t v___x_713_; 
v___x_713_ = 0;
return v___x_713_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed(lean_object* v_x1_714_, lean_object* v_x2_715_){
_start:
{
uint8_t v_res_716_; lean_object* v_r_717_; 
v_res_716_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__2_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(v_x1_714_, v_x2_715_);
lean_dec_ref(v_x2_715_);
lean_dec_ref(v_x1_714_);
v_r_717_ = lean_box(v_res_716_);
return v_r_717_;
}
}
static lean_object* _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_718_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0);
v___x_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_719_, 0, v___x_718_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object* v_x_720_){
_start:
{
lean_object* v___x_721_; 
v___x_721_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3___closed__0_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed(lean_object* v_x_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__3_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(v_x_722_);
lean_dec_ref(v_x_722_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9_spec__10___redArg(lean_object* v_x_724_, lean_object* v_x_725_, lean_object* v_x_726_, lean_object* v_x_727_){
_start:
{
lean_object* v_ks_728_; lean_object* v_vs_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_753_; 
v_ks_728_ = lean_ctor_get(v_x_724_, 0);
v_vs_729_ = lean_ctor_get(v_x_724_, 1);
v_isSharedCheck_753_ = !lean_is_exclusive(v_x_724_);
if (v_isSharedCheck_753_ == 0)
{
v___x_731_ = v_x_724_;
v_isShared_732_ = v_isSharedCheck_753_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_vs_729_);
lean_inc(v_ks_728_);
lean_dec(v_x_724_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_753_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_733_; uint8_t v___x_734_; 
v___x_733_ = lean_array_get_size(v_ks_728_);
v___x_734_ = lean_nat_dec_lt(v_x_725_, v___x_733_);
if (v___x_734_ == 0)
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_738_; 
lean_dec(v_x_725_);
v___x_735_ = lean_array_push(v_ks_728_, v_x_726_);
v___x_736_ = lean_array_push(v_vs_729_, v_x_727_);
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 1, v___x_736_);
lean_ctor_set(v___x_731_, 0, v___x_735_);
v___x_738_ = v___x_731_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v___x_735_);
lean_ctor_set(v_reuseFailAlloc_739_, 1, v___x_736_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
else
{
lean_object* v_k_x27_740_; uint8_t v___x_741_; 
v_k_x27_740_ = lean_array_fget_borrowed(v_ks_728_, v_x_725_);
v___x_741_ = lean_name_eq(v_x_726_, v_k_x27_740_);
if (v___x_741_ == 0)
{
lean_object* v___x_743_; 
if (v_isShared_732_ == 0)
{
v___x_743_ = v___x_731_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_ks_728_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v_vs_729_);
v___x_743_ = v_reuseFailAlloc_747_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = lean_unsigned_to_nat(1u);
v___x_745_ = lean_nat_add(v_x_725_, v___x_744_);
lean_dec(v_x_725_);
v_x_724_ = v___x_743_;
v_x_725_ = v___x_745_;
goto _start;
}
}
else
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_751_; 
v___x_748_ = lean_array_fset(v_ks_728_, v_x_725_, v_x_726_);
v___x_749_ = lean_array_fset(v_vs_729_, v_x_725_, v_x_727_);
lean_dec(v_x_725_);
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 1, v___x_749_);
lean_ctor_set(v___x_731_, 0, v___x_748_);
v___x_751_ = v___x_731_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v___x_748_);
lean_ctor_set(v_reuseFailAlloc_752_, 1, v___x_749_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9___redArg(lean_object* v_n_754_, lean_object* v_k_755_, lean_object* v_v_756_){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = lean_unsigned_to_nat(0u);
v___x_758_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9_spec__10___redArg(v_n_754_, v___x_757_, v_k_755_, v_v_756_);
return v___x_758_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_759_; 
v___x_759_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg(lean_object* v_x_760_, size_t v_x_761_, size_t v_x_762_, lean_object* v_x_763_, lean_object* v_x_764_){
_start:
{
if (lean_obj_tag(v_x_760_) == 0)
{
lean_object* v_es_765_; size_t v___x_766_; size_t v___x_767_; lean_object* v_j_768_; lean_object* v___x_769_; uint8_t v___x_770_; 
v_es_765_ = lean_ctor_get(v_x_760_, 0);
v___x_766_ = ((size_t)31ULL);
v___x_767_ = lean_usize_land(v_x_761_, v___x_766_);
v_j_768_ = lean_usize_to_nat(v___x_767_);
v___x_769_ = lean_array_get_size(v_es_765_);
v___x_770_ = lean_nat_dec_lt(v_j_768_, v___x_769_);
if (v___x_770_ == 0)
{
lean_dec(v_j_768_);
lean_dec(v_x_764_);
lean_dec(v_x_763_);
return v_x_760_;
}
else
{
lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_809_; 
lean_inc_ref(v_es_765_);
v_isSharedCheck_809_ = !lean_is_exclusive(v_x_760_);
if (v_isSharedCheck_809_ == 0)
{
lean_object* v_unused_810_; 
v_unused_810_ = lean_ctor_get(v_x_760_, 0);
lean_dec(v_unused_810_);
v___x_772_ = v_x_760_;
v_isShared_773_ = v_isSharedCheck_809_;
goto v_resetjp_771_;
}
else
{
lean_dec(v_x_760_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_809_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v_v_774_; lean_object* v___x_775_; lean_object* v_xs_x27_776_; lean_object* v___y_778_; 
v_v_774_ = lean_array_fget(v_es_765_, v_j_768_);
v___x_775_ = lean_box(0);
v_xs_x27_776_ = lean_array_fset(v_es_765_, v_j_768_, v___x_775_);
switch(lean_obj_tag(v_v_774_))
{
case 0:
{
lean_object* v_key_783_; lean_object* v_val_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_794_; 
v_key_783_ = lean_ctor_get(v_v_774_, 0);
v_val_784_ = lean_ctor_get(v_v_774_, 1);
v_isSharedCheck_794_ = !lean_is_exclusive(v_v_774_);
if (v_isSharedCheck_794_ == 0)
{
v___x_786_ = v_v_774_;
v_isShared_787_ = v_isSharedCheck_794_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_val_784_);
lean_inc(v_key_783_);
lean_dec(v_v_774_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_794_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
uint8_t v___x_788_; 
v___x_788_ = lean_name_eq(v_x_763_, v_key_783_);
if (v___x_788_ == 0)
{
lean_object* v___x_789_; lean_object* v___x_790_; 
lean_del_object(v___x_786_);
v___x_789_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_783_, v_val_784_, v_x_763_, v_x_764_);
v___x_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
v___y_778_ = v___x_790_;
goto v___jp_777_;
}
else
{
lean_object* v___x_792_; 
lean_dec(v_val_784_);
lean_dec(v_key_783_);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 1, v_x_764_);
lean_ctor_set(v___x_786_, 0, v_x_763_);
v___x_792_ = v___x_786_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_x_763_);
lean_ctor_set(v_reuseFailAlloc_793_, 1, v_x_764_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
v___y_778_ = v___x_792_;
goto v___jp_777_;
}
}
}
}
case 1:
{
lean_object* v_node_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_807_; 
v_node_795_ = lean_ctor_get(v_v_774_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v_v_774_);
if (v_isSharedCheck_807_ == 0)
{
v___x_797_ = v_v_774_;
v_isShared_798_ = v_isSharedCheck_807_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_node_795_);
lean_dec(v_v_774_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_807_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
size_t v___x_799_; size_t v___x_800_; size_t v___x_801_; size_t v___x_802_; lean_object* v___x_803_; lean_object* v___x_805_; 
v___x_799_ = ((size_t)5ULL);
v___x_800_ = lean_usize_shift_right(v_x_761_, v___x_799_);
v___x_801_ = ((size_t)1ULL);
v___x_802_ = lean_usize_add(v_x_762_, v___x_801_);
v___x_803_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg(v_node_795_, v___x_800_, v___x_802_, v_x_763_, v_x_764_);
if (v_isShared_798_ == 0)
{
lean_ctor_set(v___x_797_, 0, v___x_803_);
v___x_805_ = v___x_797_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v___x_803_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
v___y_778_ = v___x_805_;
goto v___jp_777_;
}
}
}
default: 
{
lean_object* v___x_808_; 
v___x_808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_808_, 0, v_x_763_);
lean_ctor_set(v___x_808_, 1, v_x_764_);
v___y_778_ = v___x_808_;
goto v___jp_777_;
}
}
v___jp_777_:
{
lean_object* v___x_779_; lean_object* v___x_781_; 
v___x_779_ = lean_array_fset(v_xs_x27_776_, v_j_768_, v___y_778_);
lean_dec(v_j_768_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 0, v___x_779_);
v___x_781_ = v___x_772_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
}
}
else
{
lean_object* v_ks_811_; lean_object* v_vs_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_830_; 
v_ks_811_ = lean_ctor_get(v_x_760_, 0);
v_vs_812_ = lean_ctor_get(v_x_760_, 1);
v_isSharedCheck_830_ = !lean_is_exclusive(v_x_760_);
if (v_isSharedCheck_830_ == 0)
{
v___x_814_ = v_x_760_;
v_isShared_815_ = v_isSharedCheck_830_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_vs_812_);
lean_inc(v_ks_811_);
lean_dec(v_x_760_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_830_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_817_; 
if (v_isShared_815_ == 0)
{
v___x_817_ = v___x_814_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_ks_811_);
lean_ctor_set(v_reuseFailAlloc_829_, 1, v_vs_812_);
v___x_817_ = v_reuseFailAlloc_829_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
lean_object* v_newNode_818_; size_t v___x_819_; uint8_t v___x_820_; 
v_newNode_818_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9___redArg(v___x_817_, v_x_763_, v_x_764_);
v___x_819_ = ((size_t)7ULL);
v___x_820_ = lean_usize_dec_le(v___x_819_, v_x_762_);
if (v___x_820_ == 0)
{
lean_object* v___x_821_; lean_object* v___x_822_; uint8_t v___x_823_; 
v___x_821_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_818_);
v___x_822_ = lean_unsigned_to_nat(4u);
v___x_823_ = lean_nat_dec_lt(v___x_821_, v___x_822_);
lean_dec(v___x_821_);
if (v___x_823_ == 0)
{
lean_object* v_ks_824_; lean_object* v_vs_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v_ks_824_ = lean_ctor_get(v_newNode_818_, 0);
lean_inc_ref(v_ks_824_);
v_vs_825_ = lean_ctor_get(v_newNode_818_, 1);
lean_inc_ref(v_vs_825_);
lean_dec_ref(v_newNode_818_);
v___x_826_ = lean_unsigned_to_nat(0u);
v___x_827_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___closed__0);
v___x_828_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___redArg(v_x_762_, v_ks_824_, v_vs_825_, v___x_826_, v___x_827_);
lean_dec_ref(v_vs_825_);
lean_dec_ref(v_ks_824_);
return v___x_828_;
}
else
{
return v_newNode_818_;
}
}
else
{
return v_newNode_818_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___redArg(size_t v_depth_831_, lean_object* v_keys_832_, lean_object* v_vals_833_, lean_object* v_i_834_, lean_object* v_entries_835_){
_start:
{
lean_object* v___x_836_; uint8_t v___x_837_; 
v___x_836_ = lean_array_get_size(v_keys_832_);
v___x_837_ = lean_nat_dec_lt(v_i_834_, v___x_836_);
if (v___x_837_ == 0)
{
lean_dec(v_i_834_);
return v_entries_835_;
}
else
{
lean_object* v_k_838_; lean_object* v_v_839_; uint64_t v___y_841_; 
v_k_838_ = lean_array_fget_borrowed(v_keys_832_, v_i_834_);
v_v_839_ = lean_array_fget_borrowed(v_vals_833_, v_i_834_);
if (lean_obj_tag(v_k_838_) == 0)
{
uint64_t v___x_852_; 
v___x_852_ = 1723ULL;
v___y_841_ = v___x_852_;
goto v___jp_840_;
}
else
{
uint64_t v_hash_853_; 
v_hash_853_ = lean_ctor_get_uint64(v_k_838_, sizeof(void*)*2);
v___y_841_ = v_hash_853_;
goto v___jp_840_;
}
v___jp_840_:
{
size_t v_h_842_; size_t v___x_843_; lean_object* v___x_844_; size_t v___x_845_; size_t v___x_846_; size_t v___x_847_; size_t v_h_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v_h_842_ = lean_uint64_to_usize(v___y_841_);
v___x_843_ = ((size_t)5ULL);
v___x_844_ = lean_unsigned_to_nat(1u);
v___x_845_ = ((size_t)1ULL);
v___x_846_ = lean_usize_sub(v_depth_831_, v___x_845_);
v___x_847_ = lean_usize_mul(v___x_843_, v___x_846_);
v_h_848_ = lean_usize_shift_right(v_h_842_, v___x_847_);
v___x_849_ = lean_nat_add(v_i_834_, v___x_844_);
lean_dec(v_i_834_);
lean_inc(v_v_839_);
lean_inc(v_k_838_);
v___x_850_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg(v_entries_835_, v_h_848_, v_depth_831_, v_k_838_, v_v_839_);
v_i_834_ = v___x_849_;
v_entries_835_ = v___x_850_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___redArg___boxed(lean_object* v_depth_854_, lean_object* v_keys_855_, lean_object* v_vals_856_, lean_object* v_i_857_, lean_object* v_entries_858_){
_start:
{
size_t v_depth_boxed_859_; lean_object* v_res_860_; 
v_depth_boxed_859_ = lean_unbox_usize(v_depth_854_);
lean_dec(v_depth_854_);
v_res_860_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___redArg(v_depth_boxed_859_, v_keys_855_, v_vals_856_, v_i_857_, v_entries_858_);
lean_dec_ref(v_vals_856_);
lean_dec_ref(v_keys_855_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg___boxed(lean_object* v_x_861_, lean_object* v_x_862_, lean_object* v_x_863_, lean_object* v_x_864_, lean_object* v_x_865_){
_start:
{
size_t v_x_2351__boxed_866_; size_t v_x_2352__boxed_867_; lean_object* v_res_868_; 
v_x_2351__boxed_866_ = lean_unbox_usize(v_x_862_);
lean_dec(v_x_862_);
v_x_2352__boxed_867_ = lean_unbox_usize(v_x_863_);
lean_dec(v_x_863_);
v_res_868_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg(v_x_861_, v_x_2351__boxed_866_, v_x_2352__boxed_867_, v_x_864_, v_x_865_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4___redArg(lean_object* v_x_869_, lean_object* v_x_870_, lean_object* v_x_871_){
_start:
{
uint64_t v___y_873_; 
if (lean_obj_tag(v_x_870_) == 0)
{
uint64_t v___x_877_; 
v___x_877_ = 1723ULL;
v___y_873_ = v___x_877_;
goto v___jp_872_;
}
else
{
uint64_t v_hash_878_; 
v_hash_878_ = lean_ctor_get_uint64(v_x_870_, sizeof(void*)*2);
v___y_873_ = v_hash_878_;
goto v___jp_872_;
}
v___jp_872_:
{
size_t v___x_874_; size_t v___x_875_; lean_object* v___x_876_; 
v___x_874_ = lean_uint64_to_usize(v___y_873_);
v___x_875_ = ((size_t)1ULL);
v___x_876_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg(v_x_869_, v___x_874_, v___x_875_, v_x_870_, v_x_871_);
return v___x_876_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___lam__4_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(lean_object* v_s_879_, lean_object* v_d_880_){
_start:
{
lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_881_ = l_Lean_IR_Decl_name(v_d_880_);
v___x_882_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4___redArg(v_s_879_, v___x_881_, v_d_880_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_911_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn___closed__11_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_));
v___x_912_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_911_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2____boxed(lean_object* v_a_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_();
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2(lean_object* v_n_915_, lean_object* v_as_916_, lean_object* v_lo_917_, lean_object* v_hi_918_, lean_object* v_w_919_, lean_object* v_hlo_920_, lean_object* v_hhi_921_){
_start:
{
lean_object* v___x_922_; 
v___x_922_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg(v_n_915_, v_as_916_, v_lo_917_, v_hi_918_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___boxed(lean_object* v_n_923_, lean_object* v_as_924_, lean_object* v_lo_925_, lean_object* v_hi_926_, lean_object* v_w_927_, lean_object* v_hlo_928_, lean_object* v_hhi_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2(v_n_923_, v_as_924_, v_lo_925_, v_hi_926_, v_w_927_, v_hlo_928_, v_hhi_929_);
lean_dec(v_hi_926_);
lean_dec(v_n_923_);
return v_res_930_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3(lean_object* v_00_u03b2_931_, lean_object* v_x_932_, lean_object* v_x_933_){
_start:
{
uint8_t v___x_934_; 
v___x_934_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___redArg(v_x_932_, v_x_933_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___boxed(lean_object* v_00_u03b2_935_, lean_object* v_x_936_, lean_object* v_x_937_){
_start:
{
uint8_t v_res_938_; lean_object* v_r_939_; 
v_res_938_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3(v_00_u03b2_935_, v_x_936_, v_x_937_);
lean_dec(v_x_937_);
lean_dec_ref(v_x_936_);
v_r_939_ = lean_box(v_res_938_);
return v_r_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4(lean_object* v_00_u03b2_940_, lean_object* v_x_941_, lean_object* v_x_942_, lean_object* v_x_943_){
_start:
{
lean_object* v___x_944_; 
v___x_944_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4___redArg(v_x_941_, v_x_942_, v_x_943_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3(lean_object* v_n_945_, lean_object* v_lo_946_, lean_object* v_hi_947_, lean_object* v_hhi_948_, lean_object* v_pivot_949_, lean_object* v_as_950_, lean_object* v_i_951_, lean_object* v_k_952_, lean_object* v_ilo_953_, lean_object* v_ik_954_, lean_object* v_w_955_){
_start:
{
lean_object* v___x_956_; 
v___x_956_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___redArg(v_hi_947_, v_pivot_949_, v_as_950_, v_i_951_, v_k_952_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object* v_n_957_, lean_object* v_lo_958_, lean_object* v_hi_959_, lean_object* v_hhi_960_, lean_object* v_pivot_961_, lean_object* v_as_962_, lean_object* v_i_963_, lean_object* v_k_964_, lean_object* v_ilo_965_, lean_object* v_ik_966_, lean_object* v_w_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2_spec__3(v_n_957_, v_lo_958_, v_hi_959_, v_hhi_960_, v_pivot_961_, v_as_962_, v_i_963_, v_k_964_, v_ilo_965_, v_ik_966_, v_w_967_);
lean_dec_ref(v_pivot_961_);
lean_dec(v_hi_959_);
lean_dec(v_lo_958_);
lean_dec(v_n_957_);
return v_res_968_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5(lean_object* v_00_u03b2_969_, lean_object* v_x_970_, size_t v_x_971_, lean_object* v_x_972_){
_start:
{
uint8_t v___x_973_; 
v___x_973_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___redArg(v_x_970_, v_x_971_, v_x_972_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5___boxed(lean_object* v_00_u03b2_974_, lean_object* v_x_975_, lean_object* v_x_976_, lean_object* v_x_977_){
_start:
{
size_t v_x_2636__boxed_978_; uint8_t v_res_979_; lean_object* v_r_980_; 
v_x_2636__boxed_978_ = lean_unbox_usize(v_x_976_);
lean_dec(v_x_976_);
v_res_979_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5(v_00_u03b2_974_, v_x_975_, v_x_2636__boxed_978_, v_x_977_);
lean_dec(v_x_977_);
lean_dec_ref(v_x_975_);
v_r_980_ = lean_box(v_res_979_);
return v_r_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7(lean_object* v_00_u03b2_981_, lean_object* v_x_982_, size_t v_x_983_, size_t v_x_984_, lean_object* v_x_985_, lean_object* v_x_986_){
_start:
{
lean_object* v___x_987_; 
v___x_987_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___redArg(v_x_982_, v_x_983_, v_x_984_, v_x_985_, v_x_986_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7___boxed(lean_object* v_00_u03b2_988_, lean_object* v_x_989_, lean_object* v_x_990_, lean_object* v_x_991_, lean_object* v_x_992_, lean_object* v_x_993_){
_start:
{
size_t v_x_2647__boxed_994_; size_t v_x_2648__boxed_995_; lean_object* v_res_996_; 
v_x_2647__boxed_994_ = lean_unbox_usize(v_x_990_);
lean_dec(v_x_990_);
v_x_2648__boxed_995_ = lean_unbox_usize(v_x_991_);
lean_dec(v_x_991_);
v_res_996_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7(v_00_u03b2_988_, v_x_989_, v_x_2647__boxed_994_, v_x_2648__boxed_995_, v_x_992_, v_x_993_);
return v_res_996_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6(lean_object* v_00_u03b2_997_, lean_object* v_keys_998_, lean_object* v_vals_999_, lean_object* v_heq_1000_, lean_object* v_i_1001_, lean_object* v_k_1002_){
_start:
{
uint8_t v___x_1003_; 
v___x_1003_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___redArg(v_keys_998_, v_i_1001_, v_k_1002_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6___boxed(lean_object* v_00_u03b2_1004_, lean_object* v_keys_1005_, lean_object* v_vals_1006_, lean_object* v_heq_1007_, lean_object* v_i_1008_, lean_object* v_k_1009_){
_start:
{
uint8_t v_res_1010_; lean_object* v_r_1011_; 
v_res_1010_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3_spec__5_spec__6(v_00_u03b2_1004_, v_keys_1005_, v_vals_1006_, v_heq_1007_, v_i_1008_, v_k_1009_);
lean_dec(v_k_1009_);
lean_dec_ref(v_vals_1006_);
lean_dec_ref(v_keys_1005_);
v_r_1011_ = lean_box(v_res_1010_);
return v_r_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9(lean_object* v_00_u03b2_1012_, lean_object* v_n_1013_, lean_object* v_k_1014_, lean_object* v_v_1015_){
_start:
{
lean_object* v___x_1016_; 
v___x_1016_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9___redArg(v_n_1013_, v_k_1014_, v_v_1015_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10(lean_object* v_00_u03b2_1017_, size_t v_depth_1018_, lean_object* v_keys_1019_, lean_object* v_vals_1020_, lean_object* v_heq_1021_, lean_object* v_i_1022_, lean_object* v_entries_1023_){
_start:
{
lean_object* v___x_1024_; 
v___x_1024_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___redArg(v_depth_1018_, v_keys_1019_, v_vals_1020_, v_i_1022_, v_entries_1023_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10___boxed(lean_object* v_00_u03b2_1025_, lean_object* v_depth_1026_, lean_object* v_keys_1027_, lean_object* v_vals_1028_, lean_object* v_heq_1029_, lean_object* v_i_1030_, lean_object* v_entries_1031_){
_start:
{
size_t v_depth_boxed_1032_; lean_object* v_res_1033_; 
v_depth_boxed_1032_ = lean_unbox_usize(v_depth_1026_);
lean_dec(v_depth_1026_);
v_res_1033_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__10(v_00_u03b2_1025_, v_depth_boxed_1032_, v_keys_1027_, v_vals_1028_, v_heq_1029_, v_i_1030_, v_entries_1031_);
lean_dec_ref(v_vals_1028_);
lean_dec_ref(v_keys_1027_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9_spec__10(lean_object* v_00_u03b2_1034_, lean_object* v_x_1035_, lean_object* v_x_1036_, lean_object* v_x_1037_, lean_object* v_x_1038_){
_start:
{
lean_object* v___x_1039_; 
v___x_1039_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__4_spec__7_spec__9_spec__10___redArg(v_x_1035_, v_x_1036_, v_x_1037_, v_x_1038_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__1(lean_object* v_irDecls_1040_){
_start:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; uint8_t v___x_1043_; 
v___x_1041_ = lean_array_get_size(v_irDecls_1040_);
v___x_1042_ = lean_unsigned_to_nat(0u);
v___x_1043_ = lean_nat_dec_eq(v___x_1041_, v___x_1042_);
if (v___x_1043_ == 0)
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___y_1048_; uint8_t v___x_1052_; 
v___x_1044_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_sortDecls___closed__0));
v___x_1045_ = lean_unsigned_to_nat(1u);
v___x_1046_ = lean_nat_sub(v___x_1041_, v___x_1045_);
v___x_1052_ = lean_nat_dec_le(v___x_1042_, v___x_1046_);
if (v___x_1052_ == 0)
{
lean_inc(v___x_1046_);
v___y_1048_ = v___x_1046_;
goto v___jp_1047_;
}
else
{
v___y_1048_ = v___x_1042_;
goto v___jp_1047_;
}
v___jp_1047_:
{
uint8_t v___x_1049_; 
v___x_1049_ = lean_nat_dec_le(v___y_1048_, v___x_1046_);
if (v___x_1049_ == 0)
{
lean_object* v___x_1050_; 
lean_dec(v___x_1046_);
lean_inc(v___y_1048_);
v___x_1050_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___x_1044_, v___x_1041_, v_irDecls_1040_, v___y_1048_, v___y_1048_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_1048_);
return v___x_1050_;
}
else
{
lean_object* v___x_1051_; 
v___x_1051_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___x_1044_, v___x_1041_, v_irDecls_1040_, v___y_1048_, v___x_1046_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___x_1046_);
return v___x_1051_;
}
}
}
else
{
return v_irDecls_1040_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__4(lean_object* v_initDecls_1053_){
_start:
{
lean_inc_ref(v_initDecls_1053_);
return v_initDecls_1053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__4___boxed(lean_object* v_initDecls_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__4(v_initDecls_1054_);
lean_dec_ref(v_initDecls_1054_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__7(lean_object* v_modPkg_1056_){
_start:
{
lean_inc_ref(v_modPkg_1056_);
return v_modPkg_1056_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__7___boxed(lean_object* v_modPkg_1057_){
_start:
{
lean_object* v_res_1058_; 
v_res_1058_ = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries_unsafe__7(v_modPkg_1057_);
lean_dec_ref(v_modPkg_1057_);
return v_res_1058_;
}
}
static lean_object* _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0(void){
_start:
{
lean_object* v___x_1059_; 
v___x_1059_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v___x_1059_;
}
}
LEAN_EXPORT lean_object* lean_ir_export_entries(lean_object* v_env_1063_){
_start:
{
lean_object* v___x_1064_; lean_object* v_toEnvExtension_1065_; lean_object* v_name_1066_; lean_object* v_asyncMode_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___y_1072_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v_irDecls_1103_; lean_object* v___x_1104_; lean_object* v___y_1106_; lean_object* v___y_1107_; uint8_t v___x_1109_; 
v___x_1064_ = l_Lean_IR_declMapExt;
v_toEnvExtension_1065_ = lean_ctor_get(v___x_1064_, 0);
v_name_1066_ = lean_ctor_get(v___x_1064_, 1);
v_asyncMode_1067_ = lean_ctor_get(v_toEnvExtension_1065_, 2);
v___x_1068_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0);
v___x_1069_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__1));
v___x_1070_ = lean_box(0);
v___x_1100_ = lean_unsigned_to_nat(0u);
v___x_1101_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__0___closed__0));
lean_inc_ref(v_env_1063_);
v___x_1102_ = l_Lean_SimplePersistentEnvExtension_getEntries___redArg(v___x_1068_, v___x_1064_, v_env_1063_, v_asyncMode_1067_);
v_irDecls_1103_ = l_List_foldl___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__1(v___x_1101_, v___x_1102_);
v___x_1104_ = lean_array_get_size(v_irDecls_1103_);
v___x_1109_ = lean_nat_dec_eq(v___x_1104_, v___x_1100_);
if (v___x_1109_ == 0)
{
lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___y_1113_; uint8_t v___x_1115_; 
v___x_1110_ = lean_unsigned_to_nat(1u);
v___x_1111_ = lean_nat_sub(v___x_1104_, v___x_1110_);
v___x_1115_ = lean_nat_dec_le(v___x_1100_, v___x_1111_);
if (v___x_1115_ == 0)
{
lean_inc(v___x_1111_);
v___y_1113_ = v___x_1111_;
goto v___jp_1112_;
}
else
{
v___y_1113_ = v___x_1100_;
goto v___jp_1112_;
}
v___jp_1112_:
{
uint8_t v___x_1114_; 
v___x_1114_ = lean_nat_dec_le(v___y_1113_, v___x_1111_);
if (v___x_1114_ == 0)
{
lean_dec(v___x_1111_);
lean_inc(v___y_1113_);
v___y_1106_ = v___y_1113_;
v___y_1107_ = v___y_1113_;
goto v___jp_1105_;
}
else
{
v___y_1106_ = v___y_1113_;
v___y_1107_ = v___x_1111_;
goto v___jp_1105_;
}
}
}
else
{
v___y_1072_ = v_irDecls_1103_;
goto v___jp_1071_;
}
v___jp_1071_:
{
lean_object* v___x_1073_; lean_object* v_ext_1074_; lean_object* v_toEnvExtension_1075_; lean_object* v_name_1076_; lean_object* v_exportEntriesFn_1077_; lean_object* v_asyncMode_1078_; lean_object* v___x_1079_; uint8_t v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v_private_1083_; lean_object* v___x_1084_; lean_object* v_toEnvExtension_1085_; lean_object* v_name_1086_; lean_object* v_exportEntriesFn_1087_; lean_object* v_asyncMode_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v_private_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1073_ = l_Lean_regularInitAttr;
v_ext_1074_ = lean_ctor_get(v___x_1073_, 1);
v_toEnvExtension_1075_ = lean_ctor_get(v_ext_1074_, 0);
v_name_1076_ = lean_ctor_get(v_ext_1074_, 1);
v_exportEntriesFn_1077_ = lean_ctor_get(v_ext_1074_, 4);
v_asyncMode_1078_ = lean_ctor_get(v_toEnvExtension_1075_, 2);
v___x_1079_ = lean_box(0);
v___x_1080_ = 0;
lean_inc_ref_n(v_env_1063_, 3);
v___x_1081_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1069_, v_ext_1074_, v_env_1063_, v_asyncMode_1078_, v___x_1079_, v___x_1080_);
lean_inc_ref(v_exportEntriesFn_1077_);
v___x_1082_ = lean_apply_2(v_exportEntriesFn_1077_, v_env_1063_, v___x_1081_);
v_private_1083_ = lean_ctor_get(v___x_1082_, 2);
lean_inc(v_private_1083_);
lean_dec_ref(v___x_1082_);
v___x_1084_ = l___private_Lean_Compiler_ModPkgExt_0__Lean_modPkgExt;
v_toEnvExtension_1085_ = lean_ctor_get(v___x_1084_, 0);
v_name_1086_ = lean_ctor_get(v___x_1084_, 1);
v_exportEntriesFn_1087_ = lean_ctor_get(v___x_1084_, 4);
v_asyncMode_1088_ = lean_ctor_get(v_toEnvExtension_1085_, 2);
v___x_1089_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1070_, v___x_1084_, v_env_1063_, v_asyncMode_1088_, v___x_1079_, v___x_1080_);
lean_inc_ref(v_exportEntriesFn_1087_);
v___x_1090_ = lean_apply_2(v_exportEntriesFn_1087_, v_env_1063_, v___x_1089_);
v_private_1091_ = lean_ctor_get(v___x_1090_, 2);
lean_inc(v_private_1091_);
lean_dec_ref(v___x_1090_);
lean_inc(v_name_1066_);
v___x_1092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1092_, 0, v_name_1066_);
lean_ctor_set(v___x_1092_, 1, v___y_1072_);
lean_inc(v_name_1076_);
v___x_1093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1093_, 0, v_name_1076_);
lean_ctor_set(v___x_1093_, 1, v_private_1083_);
lean_inc(v_name_1086_);
v___x_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1094_, 0, v_name_1086_);
lean_ctor_set(v___x_1094_, 1, v_private_1091_);
v___x_1095_ = lean_unsigned_to_nat(3u);
v___x_1096_ = lean_mk_empty_array_with_capacity(v___x_1095_);
v___x_1097_ = lean_array_push(v___x_1096_, v___x_1092_);
v___x_1098_ = lean_array_push(v___x_1097_, v___x_1093_);
v___x_1099_ = lean_array_push(v___x_1098_, v___x_1094_);
return v___x_1099_;
}
v___jp_1105_:
{
lean_object* v___x_1108_; 
v___x_1108_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg(v___x_1104_, v_irDecls_1103_, v___y_1106_, v___y_1107_);
lean_dec(v___y_1107_);
v___y_1072_ = v___x_1108_;
goto v___jp_1071_;
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(lean_object* v_as_1116_, lean_object* v_k_1117_, lean_object* v_x_1118_, lean_object* v_x_1119_){
_start:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v_m_1122_; lean_object* v_a_1123_; uint8_t v___x_1124_; 
v___x_1120_ = lean_nat_add(v_x_1118_, v_x_1119_);
v___x_1121_ = lean_unsigned_to_nat(1u);
v_m_1122_ = lean_nat_shiftr(v___x_1120_, v___x_1121_);
lean_dec(v___x_1120_);
v_a_1123_ = lean_array_fget_borrowed(v_as_1116_, v_m_1122_);
v___x_1124_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0(v_a_1123_, v_k_1117_);
if (v___x_1124_ == 0)
{
uint8_t v___x_1125_; 
lean_dec(v_x_1119_);
v___x_1125_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__2___redArg___lam__0(v_k_1117_, v_a_1123_);
if (v___x_1125_ == 0)
{
lean_object* v___x_1126_; 
lean_dec(v_m_1122_);
lean_dec(v_x_1118_);
lean_inc(v_a_1123_);
v___x_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1126_, 0, v_a_1123_);
return v___x_1126_;
}
else
{
lean_object* v___x_1127_; uint8_t v___x_1128_; 
v___x_1127_ = lean_unsigned_to_nat(0u);
v___x_1128_ = lean_nat_dec_eq(v_m_1122_, v___x_1127_);
if (v___x_1128_ == 0)
{
lean_object* v___x_1129_; uint8_t v___x_1130_; 
v___x_1129_ = lean_nat_sub(v_m_1122_, v___x_1121_);
lean_dec(v_m_1122_);
v___x_1130_ = lean_nat_dec_lt(v___x_1129_, v_x_1118_);
if (v___x_1130_ == 0)
{
v_x_1119_ = v___x_1129_;
goto _start;
}
else
{
lean_object* v___x_1132_; 
lean_dec(v___x_1129_);
lean_dec(v_x_1118_);
v___x_1132_ = lean_box(0);
return v___x_1132_;
}
}
else
{
lean_object* v___x_1133_; 
lean_dec(v_m_1122_);
lean_dec(v_x_1118_);
v___x_1133_ = lean_box(0);
return v___x_1133_;
}
}
}
else
{
lean_object* v___x_1134_; uint8_t v___x_1135_; 
lean_dec(v_x_1118_);
v___x_1134_ = lean_nat_add(v_m_1122_, v___x_1121_);
lean_dec(v_m_1122_);
v___x_1135_ = lean_nat_dec_le(v___x_1134_, v_x_1119_);
if (v___x_1135_ == 0)
{
lean_object* v___x_1136_; 
lean_dec(v___x_1134_);
lean_dec(v_x_1119_);
v___x_1136_ = lean_box(0);
return v___x_1136_;
}
else
{
v_x_1118_ = v___x_1134_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg___boxed(lean_object* v_as_1138_, lean_object* v_k_1139_, lean_object* v_x_1140_, lean_object* v_x_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(v_as_1138_, v_k_1139_, v_x_1140_, v_x_1141_);
lean_dec_ref(v_k_1139_);
lean_dec_ref(v_as_1138_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1143_, lean_object* v_vals_1144_, lean_object* v_i_1145_, lean_object* v_k_1146_){
_start:
{
lean_object* v___x_1147_; uint8_t v___x_1148_; 
v___x_1147_ = lean_array_get_size(v_keys_1143_);
v___x_1148_ = lean_nat_dec_lt(v_i_1145_, v___x_1147_);
if (v___x_1148_ == 0)
{
lean_object* v___x_1149_; 
lean_dec(v_i_1145_);
v___x_1149_ = lean_box(0);
return v___x_1149_;
}
else
{
lean_object* v_k_x27_1150_; uint8_t v___x_1151_; 
v_k_x27_1150_ = lean_array_fget_borrowed(v_keys_1143_, v_i_1145_);
v___x_1151_ = lean_name_eq(v_k_1146_, v_k_x27_1150_);
if (v___x_1151_ == 0)
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1152_ = lean_unsigned_to_nat(1u);
v___x_1153_ = lean_nat_add(v_i_1145_, v___x_1152_);
lean_dec(v_i_1145_);
v_i_1145_ = v___x_1153_;
goto _start;
}
else
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1155_ = lean_array_fget_borrowed(v_vals_1144_, v_i_1145_);
lean_dec(v_i_1145_);
lean_inc(v___x_1155_);
v___x_1156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
return v___x_1156_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1157_, lean_object* v_vals_1158_, lean_object* v_i_1159_, lean_object* v_k_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___redArg(v_keys_1157_, v_vals_1158_, v_i_1159_, v_k_1160_);
lean_dec(v_k_1160_);
lean_dec_ref(v_vals_1158_);
lean_dec_ref(v_keys_1157_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___redArg(lean_object* v_x_1162_, size_t v_x_1163_, lean_object* v_x_1164_){
_start:
{
if (lean_obj_tag(v_x_1162_) == 0)
{
lean_object* v_es_1165_; lean_object* v___x_1166_; size_t v___x_1167_; size_t v___x_1168_; lean_object* v_j_1169_; lean_object* v___x_1170_; 
v_es_1165_ = lean_ctor_get(v_x_1162_, 0);
v___x_1166_ = lean_box(2);
v___x_1167_ = ((size_t)31ULL);
v___x_1168_ = lean_usize_land(v_x_1163_, v___x_1167_);
v_j_1169_ = lean_usize_to_nat(v___x_1168_);
v___x_1170_ = lean_array_get_borrowed(v___x_1166_, v_es_1165_, v_j_1169_);
lean_dec(v_j_1169_);
switch(lean_obj_tag(v___x_1170_))
{
case 0:
{
lean_object* v_key_1171_; lean_object* v_val_1172_; uint8_t v___x_1173_; 
v_key_1171_ = lean_ctor_get(v___x_1170_, 0);
v_val_1172_ = lean_ctor_get(v___x_1170_, 1);
v___x_1173_ = lean_name_eq(v_x_1164_, v_key_1171_);
if (v___x_1173_ == 0)
{
lean_object* v___x_1174_; 
v___x_1174_ = lean_box(0);
return v___x_1174_;
}
else
{
lean_object* v___x_1175_; 
lean_inc(v_val_1172_);
v___x_1175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1175_, 0, v_val_1172_);
return v___x_1175_;
}
}
case 1:
{
lean_object* v_node_1176_; size_t v___x_1177_; size_t v___x_1178_; 
v_node_1176_ = lean_ctor_get(v___x_1170_, 0);
v___x_1177_ = ((size_t)5ULL);
v___x_1178_ = lean_usize_shift_right(v_x_1163_, v___x_1177_);
v_x_1162_ = v_node_1176_;
v_x_1163_ = v___x_1178_;
goto _start;
}
default: 
{
lean_object* v___x_1180_; 
v___x_1180_ = lean_box(0);
return v___x_1180_;
}
}
}
else
{
lean_object* v_ks_1181_; lean_object* v_vs_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v_ks_1181_ = lean_ctor_get(v_x_1162_, 0);
v_vs_1182_ = lean_ctor_get(v_x_1162_, 1);
v___x_1183_ = lean_unsigned_to_nat(0u);
v___x_1184_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___redArg(v_ks_1181_, v_vs_1182_, v___x_1183_, v_x_1164_);
return v___x_1184_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___redArg___boxed(lean_object* v_x_1185_, lean_object* v_x_1186_, lean_object* v_x_1187_){
_start:
{
size_t v_x_428__boxed_1188_; lean_object* v_res_1189_; 
v_x_428__boxed_1188_ = lean_unbox_usize(v_x_1186_);
lean_dec(v_x_1186_);
v_res_1189_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___redArg(v_x_1185_, v_x_428__boxed_1188_, v_x_1187_);
lean_dec(v_x_1187_);
lean_dec_ref(v_x_1185_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg(lean_object* v_x_1190_, lean_object* v_x_1191_){
_start:
{
uint64_t v___y_1193_; 
if (lean_obj_tag(v_x_1191_) == 0)
{
uint64_t v___x_1196_; 
v___x_1196_ = 1723ULL;
v___y_1193_ = v___x_1196_;
goto v___jp_1192_;
}
else
{
uint64_t v_hash_1197_; 
v_hash_1197_ = lean_ctor_get_uint64(v_x_1191_, sizeof(void*)*2);
v___y_1193_ = v_hash_1197_;
goto v___jp_1192_;
}
v___jp_1192_:
{
size_t v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = lean_uint64_to_usize(v___y_1193_);
v___x_1195_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___redArg(v_x_1190_, v___x_1194_, v_x_1191_);
return v___x_1195_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg___boxed(lean_object* v_x_1198_, lean_object* v_x_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg(v_x_1198_, v_x_1199_);
lean_dec(v_x_1199_);
lean_dec_ref(v_x_1198_);
return v_res_1200_;
}
}
static lean_object* _init_l_Lean_IR_findEnvDecl___closed__0(void){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1201_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0);
v___x_1202_ = lean_box(0);
v___x_1203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1203_, 0, v___x_1202_);
lean_ctor_set(v___x_1203_, 1, v___x_1201_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findEnvDecl(lean_object* v_env_1204_, lean_object* v_declName_1205_){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1218_; 
v___x_1206_ = lean_box(0);
v___x_1207_ = lean_obj_once(&l_Lean_IR_findEnvDecl___closed__0, &l_Lean_IR_findEnvDecl___closed__0_once, _init_l_Lean_IR_findEnvDecl___closed__0);
v___x_1208_ = l_Lean_IR_declMapExt;
v___x_1218_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1204_, v_declName_1205_);
if (lean_obj_tag(v___x_1218_) == 0)
{
goto v___jp_1209_;
}
else
{
lean_object* v_val_1219_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; uint8_t v___x_1237_; 
v_val_1219_ = lean_ctor_get(v___x_1218_, 0);
lean_inc(v_val_1219_);
lean_dec_ref_known(v___x_1218_, 1);
v___x_1234_ = l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(v___x_1207_, v___x_1208_, v_env_1204_, v_val_1219_);
v___x_1235_ = lean_unsigned_to_nat(0u);
v___x_1236_ = lean_array_get_size(v___x_1234_);
v___x_1237_ = lean_nat_dec_lt(v___x_1235_, v___x_1236_);
if (v___x_1237_ == 0)
{
lean_dec_ref(v___x_1234_);
goto v___jp_1220_;
}
else
{
lean_object* v___x_1238_; lean_object* v___x_1239_; uint8_t v___x_1240_; 
v___x_1238_ = lean_unsigned_to_nat(1u);
v___x_1239_ = lean_nat_sub(v___x_1236_, v___x_1238_);
v___x_1240_ = lean_nat_dec_le(v___x_1235_, v___x_1239_);
if (v___x_1240_ == 0)
{
lean_dec(v___x_1239_);
lean_dec_ref(v___x_1234_);
goto v___jp_1220_;
}
else
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v_tmpDecl_1243_; lean_object* v___x_1244_; 
v___x_1241_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0));
v___x_1242_ = lean_box(0);
lean_inc(v_declName_1205_);
v_tmpDecl_1243_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_tmpDecl_1243_, 0, v_declName_1205_);
lean_ctor_set(v_tmpDecl_1243_, 1, v___x_1241_);
lean_ctor_set(v_tmpDecl_1243_, 2, v___x_1242_);
lean_ctor_set(v_tmpDecl_1243_, 3, v___x_1206_);
v___x_1244_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(v___x_1234_, v_tmpDecl_1243_, v___x_1235_, v___x_1239_);
lean_dec_ref_known(v_tmpDecl_1243_, 4);
lean_dec_ref(v___x_1234_);
if (lean_obj_tag(v___x_1244_) == 0)
{
goto v___jp_1220_;
}
else
{
lean_object* v___x_1245_; 
lean_dec(v_val_1219_);
lean_dec_ref(v_env_1204_);
v___x_1245_ = lean_usage_note_resolved(v_declName_1205_, v___x_1244_);
lean_dec(v_declName_1205_);
return v___x_1245_;
}
}
}
v___jp_1220_:
{
uint8_t v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; uint8_t v___x_1225_; 
v___x_1221_ = 0;
v___x_1222_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1207_, v___x_1208_, v_env_1204_, v_val_1219_, v___x_1221_);
lean_dec(v_val_1219_);
v___x_1223_ = lean_unsigned_to_nat(0u);
v___x_1224_ = lean_array_get_size(v___x_1222_);
v___x_1225_ = lean_nat_dec_lt(v___x_1223_, v___x_1224_);
if (v___x_1225_ == 0)
{
lean_dec_ref(v___x_1222_);
goto v___jp_1209_;
}
else
{
lean_object* v___x_1226_; lean_object* v___x_1227_; uint8_t v___x_1228_; 
v___x_1226_ = lean_unsigned_to_nat(1u);
v___x_1227_ = lean_nat_sub(v___x_1224_, v___x_1226_);
v___x_1228_ = lean_nat_dec_le(v___x_1223_, v___x_1227_);
if (v___x_1228_ == 0)
{
lean_dec(v___x_1227_);
lean_dec_ref(v___x_1222_);
goto v___jp_1209_;
}
else
{
lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v_tmpDecl_1231_; lean_object* v___x_1232_; 
v___x_1229_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0));
v___x_1230_ = lean_box(0);
lean_inc(v_declName_1205_);
v_tmpDecl_1231_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_tmpDecl_1231_, 0, v_declName_1205_);
lean_ctor_set(v_tmpDecl_1231_, 1, v___x_1229_);
lean_ctor_set(v_tmpDecl_1231_, 2, v___x_1230_);
lean_ctor_set(v_tmpDecl_1231_, 3, v___x_1206_);
v___x_1232_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(v___x_1222_, v_tmpDecl_1231_, v___x_1223_, v___x_1227_);
lean_dec_ref_known(v_tmpDecl_1231_, 4);
lean_dec_ref(v___x_1222_);
if (lean_obj_tag(v___x_1232_) == 0)
{
goto v___jp_1209_;
}
else
{
lean_object* v___x_1233_; 
lean_dec_ref(v_env_1204_);
v___x_1233_ = lean_usage_note_resolved(v_declName_1205_, v___x_1232_);
lean_dec(v_declName_1205_);
return v___x_1233_;
}
}
}
}
}
v___jp_1209_:
{
lean_object* v_toEnvExtension_1210_; lean_object* v_asyncMode_1211_; lean_object* v___x_1212_; uint8_t v___x_1213_; lean_object* v___x_1214_; lean_object* v_snd_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v_toEnvExtension_1210_ = lean_ctor_get(v___x_1208_, 0);
v_asyncMode_1211_ = lean_ctor_get(v_toEnvExtension_1210_, 2);
v___x_1212_ = lean_box(0);
v___x_1213_ = 0;
v___x_1214_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1207_, v___x_1208_, v_env_1204_, v_asyncMode_1211_, v___x_1212_, v___x_1213_);
v_snd_1215_ = lean_ctor_get(v___x_1214_, 1);
lean_inc(v_snd_1215_);
lean_dec(v___x_1214_);
v___x_1216_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg(v_snd_1215_, v_declName_1205_);
lean_dec(v_snd_1215_);
v___x_1217_ = lean_usage_note_resolved(v_declName_1205_, v___x_1216_);
lean_dec(v_declName_1205_);
return v___x_1217_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0(lean_object* v_00_u03b2_1246_, lean_object* v_x_1247_, lean_object* v_x_1248_){
_start:
{
lean_object* v___x_1249_; 
v___x_1249_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg(v_x_1247_, v_x_1248_);
return v___x_1249_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___boxed(lean_object* v_00_u03b2_1250_, lean_object* v_x_1251_, lean_object* v_x_1252_){
_start:
{
lean_object* v_res_1253_; 
v_res_1253_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0(v_00_u03b2_1250_, v_x_1251_, v_x_1252_);
lean_dec(v_x_1252_);
lean_dec_ref(v_x_1251_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1(lean_object* v_as_1254_, lean_object* v_k_1255_, lean_object* v_x_1256_, lean_object* v_x_1257_, lean_object* v_x_1258_){
_start:
{
lean_object* v___x_1259_; 
v___x_1259_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(v_as_1254_, v_k_1255_, v_x_1256_, v_x_1257_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___boxed(lean_object* v_as_1260_, lean_object* v_k_1261_, lean_object* v_x_1262_, lean_object* v_x_1263_, lean_object* v_x_1264_){
_start:
{
lean_object* v_res_1265_; 
v_res_1265_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1(v_as_1260_, v_k_1261_, v_x_1262_, v_x_1263_, v_x_1264_);
lean_dec_ref(v_k_1261_);
lean_dec_ref(v_as_1260_);
return v_res_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0(lean_object* v_00_u03b2_1266_, lean_object* v_x_1267_, size_t v_x_1268_, lean_object* v_x_1269_){
_start:
{
lean_object* v___x_1270_; 
v___x_1270_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___redArg(v_x_1267_, v_x_1268_, v_x_1269_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1271_, lean_object* v_x_1272_, lean_object* v_x_1273_, lean_object* v_x_1274_){
_start:
{
size_t v_x_596__boxed_1275_; lean_object* v_res_1276_; 
v_x_596__boxed_1275_ = lean_unbox_usize(v_x_1273_);
lean_dec(v_x_1273_);
v_res_1276_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0(v_00_u03b2_1271_, v_x_1272_, v_x_596__boxed_1275_, v_x_1274_);
lean_dec(v_x_1274_);
lean_dec_ref(v_x_1272_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1277_, lean_object* v_keys_1278_, lean_object* v_vals_1279_, lean_object* v_heq_1280_, lean_object* v_i_1281_, lean_object* v_k_1282_){
_start:
{
lean_object* v___x_1283_; 
v___x_1283_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___redArg(v_keys_1278_, v_vals_1279_, v_i_1281_, v_k_1282_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1284_, lean_object* v_keys_1285_, lean_object* v_vals_1286_, lean_object* v_heq_1287_, lean_object* v_i_1288_, lean_object* v_k_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0_spec__0_spec__1(v_00_u03b2_1284_, v_keys_1285_, v_vals_1286_, v_heq_1287_, v_i_1288_, v_k_1289_);
lean_dec(v_k_1289_);
lean_dec_ref(v_vals_1286_);
lean_dec_ref(v_keys_1285_);
return v_res_1290_;
}
}
LEAN_EXPORT lean_object* lean_ir_find_env_decl(lean_object* v_env_1291_, lean_object* v_declName_1292_){
_start:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1293_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0);
v___x_1294_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1291_, v_declName_1292_);
if (lean_obj_tag(v___x_1294_) == 0)
{
lean_object* v___x_1295_; lean_object* v_toEnvExtension_1296_; lean_object* v_asyncMode_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1295_ = l_Lean_IR_declMapExt;
v_toEnvExtension_1296_ = lean_ctor_get(v___x_1295_, 0);
v_asyncMode_1297_ = lean_ctor_get(v_toEnvExtension_1296_, 2);
v___x_1298_ = lean_box(0);
v___x_1299_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1293_, v___x_1295_, v_env_1291_, v_asyncMode_1297_, v___x_1298_);
v___x_1300_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg(v___x_1299_, v_declName_1292_);
lean_dec(v___x_1299_);
v___x_1301_ = lean_usage_note_resolved(v_declName_1292_, v___x_1300_);
lean_dec(v_declName_1292_);
return v___x_1301_;
}
else
{
lean_object* v_val_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___y_1307_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; uint8_t v___x_1326_; 
v_val_1302_ = lean_ctor_get(v___x_1294_, 0);
lean_inc(v_val_1302_);
lean_dec_ref_known(v___x_1294_, 1);
v___x_1303_ = lean_box(0);
v___x_1304_ = lean_obj_once(&l_Lean_IR_findEnvDecl___closed__0, &l_Lean_IR_findEnvDecl___closed__0_once, _init_l_Lean_IR_findEnvDecl___closed__0);
v___x_1305_ = l_Lean_IR_declMapExt;
v___x_1323_ = l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(v___x_1304_, v___x_1305_, v_env_1291_, v_val_1302_);
v___x_1324_ = lean_unsigned_to_nat(0u);
v___x_1325_ = lean_array_get_size(v___x_1323_);
v___x_1326_ = lean_nat_dec_lt(v___x_1324_, v___x_1325_);
if (v___x_1326_ == 0)
{
lean_object* v___x_1327_; 
lean_dec_ref(v___x_1323_);
v___x_1327_ = lean_box(0);
v___y_1307_ = v___x_1327_;
goto v___jp_1306_;
}
else
{
lean_object* v___x_1328_; lean_object* v___x_1329_; uint8_t v___x_1330_; 
v___x_1328_ = lean_unsigned_to_nat(1u);
v___x_1329_ = lean_nat_sub(v___x_1325_, v___x_1328_);
v___x_1330_ = lean_nat_dec_le(v___x_1324_, v___x_1329_);
if (v___x_1330_ == 0)
{
lean_object* v___x_1331_; 
lean_dec(v___x_1329_);
lean_dec_ref(v___x_1323_);
v___x_1331_ = lean_box(0);
v___y_1307_ = v___x_1331_;
goto v___jp_1306_;
}
else
{
lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v_tmpDecl_1334_; lean_object* v___x_1335_; 
v___x_1332_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0));
v___x_1333_ = lean_box(0);
lean_inc(v_declName_1292_);
v_tmpDecl_1334_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_tmpDecl_1334_, 0, v_declName_1292_);
lean_ctor_set(v_tmpDecl_1334_, 1, v___x_1332_);
lean_ctor_set(v_tmpDecl_1334_, 2, v___x_1333_);
lean_ctor_set(v_tmpDecl_1334_, 3, v___x_1303_);
v___x_1335_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(v___x_1323_, v_tmpDecl_1334_, v___x_1324_, v___x_1329_);
lean_dec_ref_known(v_tmpDecl_1334_, 4);
lean_dec_ref(v___x_1323_);
if (lean_obj_tag(v___x_1335_) == 0)
{
v___y_1307_ = v___x_1335_;
goto v___jp_1306_;
}
else
{
lean_object* v___x_1336_; 
lean_dec(v_val_1302_);
lean_dec_ref(v_env_1291_);
v___x_1336_ = lean_usage_note_resolved(v_declName_1292_, v___x_1335_);
lean_dec(v_declName_1292_);
return v___x_1336_;
}
}
}
v___jp_1306_:
{
uint8_t v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; uint8_t v___x_1312_; 
v___x_1308_ = 0;
v___x_1309_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1304_, v___x_1305_, v_env_1291_, v_val_1302_, v___x_1308_);
lean_dec(v_val_1302_);
lean_dec_ref(v_env_1291_);
v___x_1310_ = lean_unsigned_to_nat(0u);
v___x_1311_ = lean_array_get_size(v___x_1309_);
v___x_1312_ = lean_nat_dec_lt(v___x_1310_, v___x_1311_);
if (v___x_1312_ == 0)
{
lean_object* v___x_1313_; 
lean_dec_ref(v___x_1309_);
v___x_1313_ = lean_usage_note_resolved(v_declName_1292_, v___y_1307_);
lean_dec(v_declName_1292_);
return v___x_1313_;
}
else
{
lean_object* v___x_1314_; lean_object* v___x_1315_; uint8_t v___x_1316_; 
v___x_1314_ = lean_unsigned_to_nat(1u);
v___x_1315_ = lean_nat_sub(v___x_1311_, v___x_1314_);
v___x_1316_ = lean_nat_dec_le(v___x_1310_, v___x_1315_);
if (v___x_1316_ == 0)
{
lean_object* v___x_1317_; 
lean_dec(v___x_1315_);
lean_dec_ref(v___x_1309_);
v___x_1317_ = lean_usage_note_resolved(v_declName_1292_, v___y_1307_);
lean_dec(v_declName_1292_);
return v___x_1317_;
}
else
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v_tmpDecl_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
lean_dec(v___y_1307_);
v___x_1318_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0));
v___x_1319_ = lean_box(0);
lean_inc(v_declName_1292_);
v_tmpDecl_1320_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_tmpDecl_1320_, 0, v_declName_1292_);
lean_ctor_set(v_tmpDecl_1320_, 1, v___x_1318_);
lean_ctor_set(v_tmpDecl_1320_, 2, v___x_1319_);
lean_ctor_set(v_tmpDecl_1320_, 3, v___x_1303_);
v___x_1321_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(v___x_1309_, v_tmpDecl_1320_, v___x_1310_, v___x_1315_);
lean_dec_ref_known(v_tmpDecl_1320_, 4);
lean_dec_ref(v___x_1309_);
v___x_1322_ = lean_usage_note_resolved(v_declName_1292_, v___x_1321_);
lean_dec(v_declName_1292_);
return v___x_1322_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lean_ir_find_env_decl_boxed(lean_object* v_env_1337_, lean_object* v_declName_1338_){
_start:
{
lean_object* v___x_1339_; lean_object* v_boxed_1340_; lean_object* v___x_1341_; 
v___x_1339_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0);
lean_inc(v_declName_1338_);
v_boxed_1340_ = l_Lean_Compiler_LCNF_mkBoxedName(v_declName_1338_);
v___x_1341_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1337_, v_declName_1338_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v___x_1342_; lean_object* v_toEnvExtension_1343_; lean_object* v_asyncMode_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1342_ = l_Lean_IR_declMapExt;
v_toEnvExtension_1343_ = lean_ctor_get(v___x_1342_, 0);
v_asyncMode_1344_ = lean_ctor_get(v_toEnvExtension_1343_, 2);
v___x_1345_ = lean_box(0);
v___x_1346_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1339_, v___x_1342_, v_env_1337_, v_asyncMode_1344_, v___x_1345_);
v___x_1347_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg(v___x_1346_, v_boxed_1340_);
lean_dec(v_boxed_1340_);
lean_dec(v___x_1346_);
v___x_1348_ = lean_usage_note_resolved(v_declName_1338_, v___x_1347_);
lean_dec(v_declName_1338_);
return v___x_1348_;
}
else
{
lean_object* v_val_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___y_1354_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; uint8_t v___x_1373_; 
v_val_1349_ = lean_ctor_get(v___x_1341_, 0);
lean_inc(v_val_1349_);
lean_dec_ref_known(v___x_1341_, 1);
v___x_1350_ = lean_box(0);
v___x_1351_ = lean_obj_once(&l_Lean_IR_findEnvDecl___closed__0, &l_Lean_IR_findEnvDecl___closed__0_once, _init_l_Lean_IR_findEnvDecl___closed__0);
v___x_1352_ = l_Lean_IR_declMapExt;
v___x_1370_ = l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(v___x_1351_, v___x_1352_, v_env_1337_, v_val_1349_);
v___x_1371_ = lean_unsigned_to_nat(0u);
v___x_1372_ = lean_array_get_size(v___x_1370_);
v___x_1373_ = lean_nat_dec_lt(v___x_1371_, v___x_1372_);
if (v___x_1373_ == 0)
{
lean_object* v___x_1374_; 
lean_dec_ref(v___x_1370_);
v___x_1374_ = lean_box(0);
v___y_1354_ = v___x_1374_;
goto v___jp_1353_;
}
else
{
lean_object* v___x_1375_; lean_object* v___x_1376_; uint8_t v___x_1377_; 
v___x_1375_ = lean_unsigned_to_nat(1u);
v___x_1376_ = lean_nat_sub(v___x_1372_, v___x_1375_);
v___x_1377_ = lean_nat_dec_le(v___x_1371_, v___x_1376_);
if (v___x_1377_ == 0)
{
lean_object* v___x_1378_; 
lean_dec(v___x_1376_);
lean_dec_ref(v___x_1370_);
v___x_1378_ = lean_box(0);
v___y_1354_ = v___x_1378_;
goto v___jp_1353_;
}
else
{
lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v_tmpDecl_1381_; lean_object* v___x_1382_; 
v___x_1379_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0));
v___x_1380_ = lean_box(0);
lean_inc(v_boxed_1340_);
v_tmpDecl_1381_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_tmpDecl_1381_, 0, v_boxed_1340_);
lean_ctor_set(v_tmpDecl_1381_, 1, v___x_1379_);
lean_ctor_set(v_tmpDecl_1381_, 2, v___x_1380_);
lean_ctor_set(v_tmpDecl_1381_, 3, v___x_1350_);
v___x_1382_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(v___x_1370_, v_tmpDecl_1381_, v___x_1371_, v___x_1376_);
lean_dec_ref_known(v_tmpDecl_1381_, 4);
lean_dec_ref(v___x_1370_);
if (lean_obj_tag(v___x_1382_) == 0)
{
v___y_1354_ = v___x_1382_;
goto v___jp_1353_;
}
else
{
lean_object* v___x_1383_; 
lean_dec(v_val_1349_);
lean_dec(v_boxed_1340_);
lean_dec_ref(v_env_1337_);
v___x_1383_ = lean_usage_note_resolved(v_declName_1338_, v___x_1382_);
lean_dec(v_declName_1338_);
return v___x_1383_;
}
}
}
v___jp_1353_:
{
uint8_t v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; uint8_t v___x_1359_; 
v___x_1355_ = 0;
v___x_1356_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1351_, v___x_1352_, v_env_1337_, v_val_1349_, v___x_1355_);
lean_dec(v_val_1349_);
lean_dec_ref(v_env_1337_);
v___x_1357_ = lean_unsigned_to_nat(0u);
v___x_1358_ = lean_array_get_size(v___x_1356_);
v___x_1359_ = lean_nat_dec_lt(v___x_1357_, v___x_1358_);
if (v___x_1359_ == 0)
{
lean_object* v___x_1360_; 
lean_dec_ref(v___x_1356_);
lean_dec(v_boxed_1340_);
v___x_1360_ = lean_usage_note_resolved(v_declName_1338_, v___y_1354_);
lean_dec(v_declName_1338_);
return v___x_1360_;
}
else
{
lean_object* v___x_1361_; lean_object* v___x_1362_; uint8_t v___x_1363_; 
v___x_1361_ = lean_unsigned_to_nat(1u);
v___x_1362_ = lean_nat_sub(v___x_1358_, v___x_1361_);
v___x_1363_ = lean_nat_dec_le(v___x_1357_, v___x_1362_);
if (v___x_1363_ == 0)
{
lean_object* v___x_1364_; 
lean_dec(v___x_1362_);
lean_dec_ref(v___x_1356_);
lean_dec(v_boxed_1340_);
v___x_1364_ = lean_usage_note_resolved(v_declName_1338_, v___y_1354_);
lean_dec(v_declName_1338_);
return v___x_1364_;
}
else
{
lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v_tmpDecl_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
lean_dec(v___y_1354_);
v___x_1365_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_findAtSorted_x3f___closed__0));
v___x_1366_ = lean_box(0);
v_tmpDecl_1367_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_tmpDecl_1367_, 0, v_boxed_1340_);
lean_ctor_set(v_tmpDecl_1367_, 1, v___x_1365_);
lean_ctor_set(v_tmpDecl_1367_, 2, v___x_1366_);
lean_ctor_set(v_tmpDecl_1367_, 3, v___x_1350_);
v___x_1368_ = l_Array_binSearchAux___at___00Lean_IR_findEnvDecl_spec__1___redArg(v___x_1356_, v_tmpDecl_1367_, v___x_1357_, v___x_1362_);
lean_dec_ref_known(v_tmpDecl_1367_, 4);
lean_dec_ref(v___x_1356_);
v___x_1369_ = lean_usage_note_resolved(v_declName_1338_, v___x_1368_);
lean_dec(v_declName_1338_);
return v___x_1369_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t lean_has_compile_error(lean_object* v_env_1384_, lean_object* v_constName_1385_){
_start:
{
lean_object* v___x_1386_; 
v___x_1386_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1384_, v_constName_1385_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v___x_1387_; lean_object* v_toEnvExtension_1388_; lean_object* v_asyncMode_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; uint8_t v___x_1393_; 
v___x_1387_ = l_Lean_IR_declMapExt;
v_toEnvExtension_1388_ = lean_ctor_get(v___x_1387_, 0);
v_asyncMode_1389_ = lean_ctor_get(v_toEnvExtension_1388_, 2);
v___x_1390_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0);
v___x_1391_ = lean_box(0);
v___x_1392_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1390_, v___x_1387_, v_env_1384_, v_asyncMode_1389_, v___x_1391_);
v___x_1393_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2__spec__3___redArg(v___x_1392_, v_constName_1385_);
lean_dec(v___x_1392_);
if (v___x_1393_ == 0)
{
uint8_t v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; uint8_t v___x_1397_; 
v___x_1394_ = 1;
v___x_1395_ = lean_box(v___x_1394_);
v___x_1396_ = lean_usage_note_resolved(v_constName_1385_, v___x_1395_);
lean_dec(v_constName_1385_);
v___x_1397_ = lean_unbox(v___x_1396_);
lean_dec(v___x_1396_);
return v___x_1397_;
}
else
{
uint8_t v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; uint8_t v___x_1401_; 
v___x_1398_ = 0;
v___x_1399_ = lean_box(v___x_1398_);
v___x_1400_ = lean_usage_note_resolved(v_constName_1385_, v___x_1399_);
lean_dec(v_constName_1385_);
v___x_1401_ = lean_unbox(v___x_1400_);
lean_dec(v___x_1400_);
return v___x_1401_;
}
}
else
{
uint8_t v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; uint8_t v___x_1405_; 
lean_dec_ref_known(v___x_1386_, 1);
lean_dec_ref(v_env_1384_);
v___x_1402_ = 0;
v___x_1403_ = lean_box(v___x_1402_);
v___x_1404_ = lean_usage_note_resolved(v_constName_1385_, v___x_1403_);
lean_dec(v_constName_1385_);
v___x_1405_ = lean_unbox(v___x_1404_);
lean_dec(v___x_1404_);
return v___x_1405_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_hasCompileError___boxed(lean_object* v_env_1406_, lean_object* v_constName_1407_){
_start:
{
uint8_t v_res_1408_; lean_object* v_r_1409_; 
v_res_1408_ = lean_has_compile_error(v_env_1406_, v_constName_1407_);
v_r_1409_ = lean_box(v_res_1408_);
return v_r_1409_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findDecl___redArg(lean_object* v_n_1410_, lean_object* v_a_1411_){
_start:
{
lean_object* v___x_1413_; lean_object* v_env_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1413_ = lean_st_ref_get(v_a_1411_);
v_env_1414_ = lean_ctor_get(v___x_1413_, 0);
lean_inc_ref(v_env_1414_);
lean_dec(v___x_1413_);
v___x_1415_ = l_Lean_IR_findEnvDecl(v_env_1414_, v_n_1410_);
v___x_1416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1415_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findDecl___redArg___boxed(lean_object* v_n_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_){
_start:
{
lean_object* v_res_1420_; 
v_res_1420_ = l_Lean_IR_findDecl___redArg(v_n_1417_, v_a_1418_);
lean_dec(v_a_1418_);
return v_res_1420_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findDecl(lean_object* v_n_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_){
_start:
{
lean_object* v___x_1425_; 
v___x_1425_ = l_Lean_IR_findDecl___redArg(v_n_1421_, v_a_1423_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findDecl___boxed(lean_object* v_n_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_){
_start:
{
lean_object* v_res_1430_; 
v_res_1430_ = l_Lean_IR_findDecl(v_n_1426_, v_a_1427_, v_a_1428_);
lean_dec(v_a_1428_);
lean_dec_ref(v_a_1427_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl___redArg(lean_object* v_n_1431_, lean_object* v_a_1432_){
_start:
{
lean_object* v___x_1434_; lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1449_; 
v___x_1434_ = l_Lean_IR_findDecl___redArg(v_n_1431_, v_a_1432_);
v_a_1435_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1437_ = v___x_1434_;
v_isShared_1438_ = v_isSharedCheck_1449_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1434_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1449_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
if (lean_obj_tag(v_a_1435_) == 0)
{
uint8_t v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1442_; 
v___x_1439_ = 0;
v___x_1440_ = lean_box(v___x_1439_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 0, v___x_1440_);
v___x_1442_ = v___x_1437_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1443_; 
v_reuseFailAlloc_1443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1443_, 0, v___x_1440_);
v___x_1442_ = v_reuseFailAlloc_1443_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
return v___x_1442_;
}
}
else
{
uint8_t v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1447_; 
lean_dec_ref_known(v_a_1435_, 1);
v___x_1444_ = 1;
v___x_1445_ = lean_box(v___x_1444_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 0, v___x_1445_);
v___x_1447_ = v___x_1437_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1445_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl___redArg___boxed(lean_object* v_n_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_){
_start:
{
lean_object* v_res_1453_; 
v_res_1453_ = l_Lean_IR_containsDecl___redArg(v_n_1450_, v_a_1451_);
lean_dec(v_a_1451_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl(lean_object* v_n_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_){
_start:
{
lean_object* v___x_1458_; 
v___x_1458_ = l_Lean_IR_containsDecl___redArg(v_n_1454_, v_a_1456_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl___boxed(lean_object* v_n_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l_Lean_IR_containsDecl(v_n_1459_, v_a_1460_, v_a_1461_);
lean_dec(v_a_1461_);
lean_dec_ref(v_a_1460_);
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___redArg(lean_object* v_msg_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_){
_start:
{
lean_object* v_ref_1468_; lean_object* v___x_1469_; lean_object* v_a_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1478_; 
v_ref_1468_ = lean_ctor_get(v___y_1465_, 2);
v___x_1469_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0(v_msg_1464_, v___y_1465_, v___y_1466_);
v_a_1470_ = lean_ctor_get(v___x_1469_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1472_ = v___x_1469_;
v_isShared_1473_ = v_isSharedCheck_1478_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_a_1470_);
lean_dec(v___x_1469_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1478_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1474_; lean_object* v___x_1476_; 
lean_inc(v_ref_1468_);
v___x_1474_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1474_, 0, v_ref_1468_);
lean_ctor_set(v___x_1474_, 1, v_a_1470_);
if (v_isShared_1473_ == 0)
{
lean_ctor_set_tag(v___x_1472_, 1);
lean_ctor_set(v___x_1472_, 0, v___x_1474_);
v___x_1476_ = v___x_1472_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v___x_1474_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___redArg___boxed(lean_object* v_msg_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_){
_start:
{
lean_object* v_res_1483_; 
v_res_1483_ = l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___redArg(v_msg_1479_, v___y_1480_, v___y_1481_);
lean_dec(v___y_1481_);
lean_dec_ref(v___y_1480_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_getDecl(lean_object* v_n_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_){
_start:
{
lean_object* v___x_1490_; lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1508_; 
lean_inc(v_n_1486_);
v___x_1490_ = l_Lean_IR_findDecl___redArg(v_n_1486_, v_a_1488_);
v_a_1491_ = lean_ctor_get(v___x_1490_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v___x_1490_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1493_ = v___x_1490_;
v_isShared_1494_ = v_isSharedCheck_1508_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1490_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1508_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
if (lean_obj_tag(v_a_1491_) == 1)
{
lean_object* v_val_1495_; lean_object* v___x_1497_; 
lean_dec(v_n_1486_);
v_val_1495_ = lean_ctor_get(v_a_1491_, 0);
lean_inc(v_val_1495_);
lean_dec_ref_known(v_a_1491_, 1);
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 0, v_val_1495_);
v___x_1497_ = v___x_1493_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v_val_1495_);
v___x_1497_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
return v___x_1497_;
}
}
else
{
lean_object* v___x_1499_; uint8_t v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
lean_del_object(v___x_1493_);
lean_dec(v_a_1491_);
v___x_1499_ = ((lean_object*)(l_Lean_IR_getDecl___closed__0));
v___x_1500_ = 1;
v___x_1501_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_n_1486_, v___x_1500_);
v___x_1502_ = lean_string_append(v___x_1499_, v___x_1501_);
lean_dec_ref(v___x_1501_);
v___x_1503_ = ((lean_object*)(l_Lean_IR_getDecl___closed__1));
v___x_1504_ = lean_string_append(v___x_1502_, v___x_1503_);
v___x_1505_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1505_, 0, v___x_1504_);
v___x_1506_ = l_Lean_MessageData_ofFormat(v___x_1505_);
v___x_1507_ = l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___redArg(v___x_1506_, v_a_1487_, v_a_1488_);
return v___x_1507_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_getDecl___boxed(lean_object* v_n_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l_Lean_IR_getDecl(v_n_1509_, v_a_1510_, v_a_1511_);
lean_dec(v_a_1511_);
lean_dec_ref(v_a_1510_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_getDecl_spec__0(lean_object* v_00_u03b1_1514_, lean_object* v_msg_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_){
_start:
{
lean_object* v___x_1519_; 
v___x_1519_ = l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___redArg(v_msg_1515_, v___y_1516_, v___y_1517_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___boxed(lean_object* v_00_u03b1_1520_, lean_object* v_msg_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_){
_start:
{
lean_object* v_res_1525_; 
v_res_1525_ = l_Lean_throwError___at___00Lean_IR_getDecl_spec__0(v_00_u03b1_1520_, v_msg_1521_, v___y_1522_, v___y_1523_);
lean_dec(v___y_1523_);
lean_dec_ref(v___y_1522_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findLocalDecl___redArg(lean_object* v_n_1526_, lean_object* v_a_1527_){
_start:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v_env_1531_; lean_object* v___x_1532_; lean_object* v_toEnvExtension_1533_; lean_object* v_asyncMode_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1529_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0);
v___x_1530_ = lean_st_ref_get(v_a_1527_);
v_env_1531_ = lean_ctor_get(v___x_1530_, 0);
lean_inc_ref(v_env_1531_);
lean_dec(v___x_1530_);
v___x_1532_ = l_Lean_IR_declMapExt;
v_toEnvExtension_1533_ = lean_ctor_get(v___x_1532_, 0);
v_asyncMode_1534_ = lean_ctor_get(v_toEnvExtension_1533_, 2);
v___x_1535_ = lean_box(0);
v___x_1536_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1529_, v___x_1532_, v_env_1531_, v_asyncMode_1534_, v___x_1535_);
v___x_1537_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_IR_findEnvDecl_spec__0___redArg(v___x_1536_, v_n_1526_);
lean_dec(v___x_1536_);
v___x_1538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1538_, 0, v___x_1537_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findLocalDecl___redArg___boxed(lean_object* v_n_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_){
_start:
{
lean_object* v_res_1542_; 
v_res_1542_ = l_Lean_IR_findLocalDecl___redArg(v_n_1539_, v_a_1540_);
lean_dec(v_a_1540_);
lean_dec(v_n_1539_);
return v_res_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findLocalDecl(lean_object* v_n_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v___x_1547_; 
v___x_1547_ = l_Lean_IR_findLocalDecl___redArg(v_n_1543_, v_a_1545_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findLocalDecl___boxed(lean_object* v_n_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l_Lean_IR_findLocalDecl(v_n_1548_, v_a_1549_, v_a_1550_);
lean_dec(v_a_1550_);
lean_dec_ref(v_a_1549_);
lean_dec(v_n_1548_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_getDecls(lean_object* v_env_1553_){
_start:
{
lean_object* v___x_1554_; lean_object* v_toEnvExtension_1555_; lean_object* v_asyncMode_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1554_ = l_Lean_IR_declMapExt;
v_toEnvExtension_1555_ = lean_ctor_get(v___x_1554_, 0);
v_asyncMode_1556_ = lean_ctor_get(v_toEnvExtension_1555_, 2);
v___x_1557_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0);
v___x_1558_ = l_Lean_SimplePersistentEnvExtension_getEntries___redArg(v___x_1557_, v___x_1554_, v_env_1553_, v_asyncMode_1556_);
return v___x_1558_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addDecl___redArg___lam__0(lean_object* v_addEntryFn_1559_, lean_object* v_decl_1560_, lean_object* v_s_1561_){
_start:
{
lean_object* v_importedEntries_1562_; lean_object* v_state_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1571_; 
v_importedEntries_1562_ = lean_ctor_get(v_s_1561_, 0);
v_state_1563_ = lean_ctor_get(v_s_1561_, 1);
v_isSharedCheck_1571_ = !lean_is_exclusive(v_s_1561_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1565_ = v_s_1561_;
v_isShared_1566_ = v_isSharedCheck_1571_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_state_1563_);
lean_inc(v_importedEntries_1562_);
lean_dec(v_s_1561_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1571_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v_state_1567_; lean_object* v___x_1569_; 
v_state_1567_ = lean_apply_2(v_addEntryFn_1559_, v_state_1563_, v_decl_1560_);
if (v_isShared_1566_ == 0)
{
lean_ctor_set(v___x_1565_, 1, v_state_1567_);
v___x_1569_ = v___x_1565_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_importedEntries_1562_);
lean_ctor_set(v_reuseFailAlloc_1570_, 1, v_state_1567_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
}
}
static lean_object* _init_l_Lean_IR_addDecl___redArg___closed__0(void){
_start:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1572_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00Lean_IR_log_spec__0_spec__0___closed__0);
v___x_1573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1572_);
return v___x_1573_;
}
}
static lean_object* _init_l_Lean_IR_addDecl___redArg___closed__1(void){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = lean_obj_once(&l_Lean_IR_addDecl___redArg___closed__0, &l_Lean_IR_addDecl___redArg___closed__0_once, _init_l_Lean_IR_addDecl___redArg___closed__0);
v___x_1575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1574_);
lean_ctor_set(v___x_1575_, 1, v___x_1574_);
return v___x_1575_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addDecl___redArg(lean_object* v_decl_1576_, lean_object* v_a_1577_){
_start:
{
lean_object* v___x_1579_; lean_object* v_env_1580_; lean_object* v_nextMacroScope_1581_; lean_object* v_ngen_1582_; lean_object* v_auxDeclNGen_1583_; lean_object* v_traceState_1584_; lean_object* v_recordedDeps_1585_; lean_object* v_messages_1586_; lean_object* v_infoState_1587_; lean_object* v_snapshotTasks_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1612_; 
v___x_1579_ = lean_st_ref_take(v_a_1577_);
v_env_1580_ = lean_ctor_get(v___x_1579_, 0);
v_nextMacroScope_1581_ = lean_ctor_get(v___x_1579_, 1);
v_ngen_1582_ = lean_ctor_get(v___x_1579_, 2);
v_auxDeclNGen_1583_ = lean_ctor_get(v___x_1579_, 3);
v_traceState_1584_ = lean_ctor_get(v___x_1579_, 4);
v_recordedDeps_1585_ = lean_ctor_get(v___x_1579_, 6);
v_messages_1586_ = lean_ctor_get(v___x_1579_, 7);
v_infoState_1587_ = lean_ctor_get(v___x_1579_, 8);
v_snapshotTasks_1588_ = lean_ctor_get(v___x_1579_, 9);
v_isSharedCheck_1612_ = !lean_is_exclusive(v___x_1579_);
if (v_isSharedCheck_1612_ == 0)
{
lean_object* v_unused_1613_; 
v_unused_1613_ = lean_ctor_get(v___x_1579_, 5);
lean_dec(v_unused_1613_);
v___x_1590_ = v___x_1579_;
v_isShared_1591_ = v_isSharedCheck_1612_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_snapshotTasks_1588_);
lean_inc(v_infoState_1587_);
lean_inc(v_messages_1586_);
lean_inc(v_recordedDeps_1585_);
lean_inc(v_traceState_1584_);
lean_inc(v_auxDeclNGen_1583_);
lean_inc(v_ngen_1582_);
lean_inc(v_nextMacroScope_1581_);
lean_inc(v_env_1580_);
lean_dec(v___x_1579_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1612_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v___x_1592_; lean_object* v_toEnvExtension_1593_; lean_object* v_addEntryFn_1594_; lean_object* v_asyncMode_1595_; uint8_t v_logWrites_1596_; lean_object* v___x_1597_; lean_object* v___y_1599_; lean_object* v___f_1606_; lean_object* v___x_1607_; uint8_t v___x_1608_; 
v___x_1592_ = l_Lean_IR_declMapExt;
v_toEnvExtension_1593_ = lean_ctor_get(v___x_1592_, 0);
v_addEntryFn_1594_ = lean_ctor_get(v___x_1592_, 3);
v_asyncMode_1595_ = lean_ctor_get(v_toEnvExtension_1593_, 2);
v_logWrites_1596_ = lean_ctor_get_uint8(v_toEnvExtension_1593_, sizeof(void*)*6);
v___x_1597_ = lean_box(0);
lean_inc(v_addEntryFn_1594_);
v___f_1606_ = lean_alloc_closure((void*)(l_Lean_IR_addDecl___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1606_, 0, v_addEntryFn_1594_);
lean_closure_set(v___f_1606_, 1, v_decl_1576_);
v___x_1607_ = lean_box(0);
v___x_1608_ = 1;
if (v_logWrites_1596_ == 0)
{
lean_object* v___x_1609_; 
lean_inc_ref(v_toEnvExtension_1593_);
v___x_1609_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1593_, v_env_1580_, v___f_1606_, v_asyncMode_1595_, v___x_1607_, v___x_1608_);
v___y_1599_ = v___x_1609_;
goto v___jp_1598_;
}
else
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
lean_inc_ref_n(v_toEnvExtension_1593_, 2);
v___x_1610_ = l___private_Lean_Environment_0__Lean_EnvExtension_panicUnloggedWrite(lean_box(0), v_toEnvExtension_1593_, v_env_1580_);
lean_dec_ref(v_env_1580_);
v___x_1611_ = l___private_Lean_Environment_0__Lean_EnvExtension_modifyStateCore(lean_box(0), v_toEnvExtension_1593_, v___x_1610_, v___f_1606_, v_asyncMode_1595_, v___x_1607_, v___x_1608_);
v___y_1599_ = v___x_1611_;
goto v___jp_1598_;
}
v___jp_1598_:
{
lean_object* v___x_1600_; lean_object* v___x_1602_; 
v___x_1600_ = lean_obj_once(&l_Lean_IR_addDecl___redArg___closed__1, &l_Lean_IR_addDecl___redArg___closed__1_once, _init_l_Lean_IR_addDecl___redArg___closed__1);
if (v_isShared_1591_ == 0)
{
lean_ctor_set(v___x_1590_, 5, v___x_1600_);
lean_ctor_set(v___x_1590_, 0, v___y_1599_);
v___x_1602_ = v___x_1590_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v___y_1599_);
lean_ctor_set(v_reuseFailAlloc_1605_, 1, v_nextMacroScope_1581_);
lean_ctor_set(v_reuseFailAlloc_1605_, 2, v_ngen_1582_);
lean_ctor_set(v_reuseFailAlloc_1605_, 3, v_auxDeclNGen_1583_);
lean_ctor_set(v_reuseFailAlloc_1605_, 4, v_traceState_1584_);
lean_ctor_set(v_reuseFailAlloc_1605_, 5, v___x_1600_);
lean_ctor_set(v_reuseFailAlloc_1605_, 6, v_recordedDeps_1585_);
lean_ctor_set(v_reuseFailAlloc_1605_, 7, v_messages_1586_);
lean_ctor_set(v_reuseFailAlloc_1605_, 8, v_infoState_1587_);
lean_ctor_set(v_reuseFailAlloc_1605_, 9, v_snapshotTasks_1588_);
v___x_1602_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1603_ = lean_st_ref_put(v_a_1577_, v___x_1602_);
v___x_1604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1597_);
return v___x_1604_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addDecl___redArg___boxed(lean_object* v_decl_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l_Lean_IR_addDecl___redArg(v_decl_1614_, v_a_1615_);
lean_dec(v_a_1615_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addDecl(lean_object* v_decl_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_){
_start:
{
lean_object* v___x_1622_; 
v___x_1622_ = l_Lean_IR_addDecl___redArg(v_decl_1618_, v_a_1620_);
return v___x_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addDecl___boxed(lean_object* v_decl_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Lean_IR_addDecl(v_decl_1623_, v_a_1624_, v_a_1625_);
lean_dec(v_a_1625_);
lean_dec_ref(v_a_1624_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___redArg(lean_object* v_as_1628_, size_t v_i_1629_, size_t v_stop_1630_, lean_object* v_b_1631_, lean_object* v___y_1632_){
_start:
{
uint8_t v___x_1634_; 
v___x_1634_ = lean_usize_dec_eq(v_i_1629_, v_stop_1630_);
if (v___x_1634_ == 0)
{
lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1635_ = lean_array_uget_borrowed(v_as_1628_, v_i_1629_);
lean_inc(v___x_1635_);
v___x_1636_ = l_Lean_IR_addDecl___redArg(v___x_1635_, v___y_1632_);
if (lean_obj_tag(v___x_1636_) == 0)
{
lean_object* v_a_1637_; size_t v___x_1638_; size_t v___x_1639_; 
v_a_1637_ = lean_ctor_get(v___x_1636_, 0);
lean_inc(v_a_1637_);
lean_dec_ref_known(v___x_1636_, 1);
v___x_1638_ = ((size_t)1ULL);
v___x_1639_ = lean_usize_add(v_i_1629_, v___x_1638_);
v_i_1629_ = v___x_1639_;
v_b_1631_ = v_a_1637_;
goto _start;
}
else
{
return v___x_1636_;
}
}
else
{
lean_object* v___x_1641_; 
v___x_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1641_, 0, v_b_1631_);
return v___x_1641_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___redArg___boxed(lean_object* v_as_1642_, lean_object* v_i_1643_, lean_object* v_stop_1644_, lean_object* v_b_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_){
_start:
{
size_t v_i_boxed_1648_; size_t v_stop_boxed_1649_; lean_object* v_res_1650_; 
v_i_boxed_1648_ = lean_unbox_usize(v_i_1643_);
lean_dec(v_i_1643_);
v_stop_boxed_1649_ = lean_unbox_usize(v_stop_1644_);
lean_dec(v_stop_1644_);
v_res_1650_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___redArg(v_as_1642_, v_i_boxed_1648_, v_stop_boxed_1649_, v_b_1645_, v___y_1646_);
lean_dec(v___y_1646_);
lean_dec_ref(v_as_1642_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addDecls(lean_object* v_decls_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_){
_start:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; uint8_t v___x_1658_; 
v___x_1655_ = lean_unsigned_to_nat(0u);
v___x_1656_ = lean_array_get_size(v_decls_1651_);
v___x_1657_ = lean_box(0);
v___x_1658_ = lean_nat_dec_lt(v___x_1655_, v___x_1656_);
if (v___x_1658_ == 0)
{
lean_object* v___x_1659_; 
v___x_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1657_);
return v___x_1659_;
}
else
{
size_t v___x_1660_; size_t v___x_1661_; lean_object* v___x_1662_; 
v___x_1660_ = ((size_t)0ULL);
v___x_1661_ = lean_usize_of_nat(v___x_1656_);
v___x_1662_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___redArg(v_decls_1651_, v___x_1660_, v___x_1661_, v___x_1657_, v_a_1653_);
return v___x_1662_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_addDecls___boxed(lean_object* v_decls_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_){
_start:
{
lean_object* v_res_1667_; 
v_res_1667_ = l_Lean_IR_addDecls(v_decls_1663_, v_a_1664_, v_a_1665_);
lean_dec(v_a_1665_);
lean_dec_ref(v_a_1664_);
lean_dec_ref(v_decls_1663_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0(lean_object* v_as_1668_, size_t v_i_1669_, size_t v_stop_1670_, lean_object* v_b_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_){
_start:
{
lean_object* v___x_1675_; 
v___x_1675_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___redArg(v_as_1668_, v_i_1669_, v_stop_1670_, v_b_1671_, v___y_1673_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0___boxed(lean_object* v_as_1676_, lean_object* v_i_1677_, lean_object* v_stop_1678_, lean_object* v_b_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
size_t v_i_boxed_1683_; size_t v_stop_boxed_1684_; lean_object* v_res_1685_; 
v_i_boxed_1683_ = lean_unbox_usize(v_i_1677_);
lean_dec(v_i_1677_);
v_stop_boxed_1684_ = lean_unbox_usize(v_stop_1678_);
lean_dec(v_stop_1678_);
v_res_1685_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_addDecls_spec__0(v_as_1676_, v_i_boxed_1683_, v_stop_boxed_1684_, v_b_1679_, v___y_1680_, v___y_1681_);
lean_dec(v___y_1681_);
lean_dec_ref(v___y_1680_);
lean_dec_ref(v_as_1676_);
return v_res_1685_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0(lean_object* v_n_1689_, lean_object* v_as_1690_, size_t v_sz_1691_, size_t v_i_1692_, lean_object* v_b_1693_){
_start:
{
uint8_t v___x_1694_; 
v___x_1694_ = lean_usize_dec_lt(v_i_1692_, v_sz_1691_);
if (v___x_1694_ == 0)
{
lean_inc_ref(v_b_1693_);
return v_b_1693_;
}
else
{
lean_object* v___x_1695_; lean_object* v_a_1696_; lean_object* v___x_1697_; uint8_t v___x_1698_; 
v___x_1695_ = lean_box(0);
v_a_1696_ = lean_array_uget_borrowed(v_as_1690_, v_i_1692_);
v___x_1697_ = l_Lean_IR_Decl_name(v_a_1696_);
v___x_1698_ = lean_name_eq(v___x_1697_, v_n_1689_);
lean_dec(v___x_1697_);
if (v___x_1698_ == 0)
{
lean_object* v___x_1699_; size_t v___x_1700_; size_t v___x_1701_; 
v___x_1699_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0___closed__0));
v___x_1700_ = ((size_t)1ULL);
v___x_1701_ = lean_usize_add(v_i_1692_, v___x_1700_);
v_i_1692_ = v___x_1701_;
v_b_1693_ = v___x_1699_;
goto _start;
}
else
{
lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
lean_inc(v_a_1696_);
v___x_1703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1703_, 0, v_a_1696_);
v___x_1704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1703_);
v___x_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1704_);
lean_ctor_set(v___x_1705_, 1, v___x_1695_);
return v___x_1705_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0___boxed(lean_object* v_n_1706_, lean_object* v_as_1707_, lean_object* v_sz_1708_, lean_object* v_i_1709_, lean_object* v_b_1710_){
_start:
{
size_t v_sz_boxed_1711_; size_t v_i_boxed_1712_; lean_object* v_res_1713_; 
v_sz_boxed_1711_ = lean_unbox_usize(v_sz_1708_);
lean_dec(v_sz_1708_);
v_i_boxed_1712_ = lean_unbox_usize(v_i_1709_);
lean_dec(v_i_1709_);
v_res_1713_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0(v_n_1706_, v_as_1707_, v_sz_boxed_1711_, v_i_boxed_1712_, v_b_1710_);
lean_dec_ref(v_b_1710_);
lean_dec_ref(v_as_1707_);
lean_dec(v_n_1706_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findEnvDecl_x27(lean_object* v_env_1714_, lean_object* v_n_1715_, lean_object* v_decls_1716_){
_start:
{
lean_object* v___x_1717_; size_t v_sz_1718_; size_t v___x_1719_; lean_object* v___x_1720_; lean_object* v_fst_1721_; 
v___x_1717_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0___closed__0));
v_sz_1718_ = lean_array_size(v_decls_1716_);
v___x_1719_ = ((size_t)0ULL);
v___x_1720_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_IR_findEnvDecl_x27_spec__0(v_n_1715_, v_decls_1716_, v_sz_1718_, v___x_1719_, v___x_1717_);
v_fst_1721_ = lean_ctor_get(v___x_1720_, 0);
lean_inc(v_fst_1721_);
lean_dec_ref(v___x_1720_);
if (lean_obj_tag(v_fst_1721_) == 0)
{
lean_object* v___x_1722_; 
v___x_1722_ = l_Lean_IR_findEnvDecl(v_env_1714_, v_n_1715_);
return v___x_1722_;
}
else
{
lean_object* v_val_1723_; 
v_val_1723_ = lean_ctor_get(v_fst_1721_, 0);
lean_inc(v_val_1723_);
lean_dec_ref_known(v_fst_1721_, 1);
if (lean_obj_tag(v_val_1723_) == 0)
{
lean_object* v___x_1724_; 
v___x_1724_ = l_Lean_IR_findEnvDecl(v_env_1714_, v_n_1715_);
return v___x_1724_;
}
else
{
lean_dec(v_n_1715_);
lean_dec_ref(v_env_1714_);
return v_val_1723_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findEnvDecl_x27___boxed(lean_object* v_env_1725_, lean_object* v_n_1726_, lean_object* v_decls_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l_Lean_IR_findEnvDecl_x27(v_env_1725_, v_n_1726_, v_decls_1727_);
lean_dec_ref(v_decls_1727_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findDecl_x27___redArg(lean_object* v_n_1729_, lean_object* v_decls_1730_, lean_object* v_a_1731_){
_start:
{
lean_object* v___x_1733_; lean_object* v_env_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1733_ = lean_st_ref_get(v_a_1731_);
v_env_1734_ = lean_ctor_get(v___x_1733_, 0);
lean_inc_ref(v_env_1734_);
lean_dec(v___x_1733_);
v___x_1735_ = l_Lean_IR_findEnvDecl_x27(v_env_1734_, v_n_1729_, v_decls_1730_);
v___x_1736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findDecl_x27___redArg___boxed(lean_object* v_n_1737_, lean_object* v_decls_1738_, lean_object* v_a_1739_, lean_object* v_a_1740_){
_start:
{
lean_object* v_res_1741_; 
v_res_1741_ = l_Lean_IR_findDecl_x27___redArg(v_n_1737_, v_decls_1738_, v_a_1739_);
lean_dec(v_a_1739_);
lean_dec_ref(v_decls_1738_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findDecl_x27(lean_object* v_n_1742_, lean_object* v_decls_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_){
_start:
{
lean_object* v___x_1747_; 
v___x_1747_ = l_Lean_IR_findDecl_x27___redArg(v_n_1742_, v_decls_1743_, v_a_1745_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_findDecl_x27___boxed(lean_object* v_n_1748_, lean_object* v_decls_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_){
_start:
{
lean_object* v_res_1753_; 
v_res_1753_ = l_Lean_IR_findDecl_x27(v_n_1748_, v_decls_1749_, v_a_1750_, v_a_1751_);
lean_dec(v_a_1751_);
lean_dec_ref(v_a_1750_);
lean_dec_ref(v_decls_1749_);
return v_res_1753_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_containsDecl_x27_spec__0(lean_object* v_n_1754_, lean_object* v_as_1755_, size_t v_i_1756_, size_t v_stop_1757_){
_start:
{
uint8_t v___x_1758_; 
v___x_1758_ = lean_usize_dec_eq(v_i_1756_, v_stop_1757_);
if (v___x_1758_ == 0)
{
lean_object* v___x_1759_; lean_object* v___x_1760_; uint8_t v___x_1761_; 
v___x_1759_ = lean_array_uget_borrowed(v_as_1755_, v_i_1756_);
v___x_1760_ = l_Lean_IR_Decl_name(v___x_1759_);
v___x_1761_ = lean_name_eq(v___x_1760_, v_n_1754_);
lean_dec(v___x_1760_);
if (v___x_1761_ == 0)
{
size_t v___x_1762_; size_t v___x_1763_; 
v___x_1762_ = ((size_t)1ULL);
v___x_1763_ = lean_usize_add(v_i_1756_, v___x_1762_);
v_i_1756_ = v___x_1763_;
goto _start;
}
else
{
return v___x_1761_;
}
}
else
{
uint8_t v___x_1765_; 
v___x_1765_ = 0;
return v___x_1765_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_containsDecl_x27_spec__0___boxed(lean_object* v_n_1766_, lean_object* v_as_1767_, lean_object* v_i_1768_, lean_object* v_stop_1769_){
_start:
{
size_t v_i_boxed_1770_; size_t v_stop_boxed_1771_; uint8_t v_res_1772_; lean_object* v_r_1773_; 
v_i_boxed_1770_ = lean_unbox_usize(v_i_1768_);
lean_dec(v_i_1768_);
v_stop_boxed_1771_ = lean_unbox_usize(v_stop_1769_);
lean_dec(v_stop_1769_);
v_res_1772_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_containsDecl_x27_spec__0(v_n_1766_, v_as_1767_, v_i_boxed_1770_, v_stop_boxed_1771_);
lean_dec_ref(v_as_1767_);
lean_dec(v_n_1766_);
v_r_1773_ = lean_box(v_res_1772_);
return v_r_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl_x27___redArg(lean_object* v_n_1774_, lean_object* v_decls_1775_, lean_object* v_a_1776_){
_start:
{
lean_object* v___x_1778_; lean_object* v___x_1779_; uint8_t v___x_1780_; 
v___x_1778_ = lean_unsigned_to_nat(0u);
v___x_1779_ = lean_array_get_size(v_decls_1775_);
v___x_1780_ = lean_nat_dec_lt(v___x_1778_, v___x_1779_);
if (v___x_1780_ == 0)
{
lean_object* v___x_1781_; 
v___x_1781_ = l_Lean_IR_containsDecl___redArg(v_n_1774_, v_a_1776_);
return v___x_1781_;
}
else
{
if (v___x_1780_ == 0)
{
lean_object* v___x_1782_; 
v___x_1782_ = l_Lean_IR_containsDecl___redArg(v_n_1774_, v_a_1776_);
return v___x_1782_;
}
else
{
size_t v___x_1783_; size_t v___x_1784_; uint8_t v___x_1785_; 
v___x_1783_ = ((size_t)0ULL);
v___x_1784_ = lean_usize_of_nat(v___x_1779_);
v___x_1785_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_containsDecl_x27_spec__0(v_n_1774_, v_decls_1775_, v___x_1783_, v___x_1784_);
if (v___x_1785_ == 0)
{
lean_object* v___x_1786_; 
v___x_1786_ = l_Lean_IR_containsDecl___redArg(v_n_1774_, v_a_1776_);
return v___x_1786_;
}
else
{
lean_object* v___x_1787_; lean_object* v___x_1788_; 
lean_dec(v_n_1774_);
v___x_1787_ = lean_box(v___x_1780_);
v___x_1788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1788_, 0, v___x_1787_);
return v___x_1788_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl_x27___redArg___boxed(lean_object* v_n_1789_, lean_object* v_decls_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_){
_start:
{
lean_object* v_res_1793_; 
v_res_1793_ = l_Lean_IR_containsDecl_x27___redArg(v_n_1789_, v_decls_1790_, v_a_1791_);
lean_dec(v_a_1791_);
lean_dec_ref(v_decls_1790_);
return v_res_1793_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl_x27(lean_object* v_n_1794_, lean_object* v_decls_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_){
_start:
{
lean_object* v___x_1799_; 
v___x_1799_ = l_Lean_IR_containsDecl_x27___redArg(v_n_1794_, v_decls_1795_, v_a_1797_);
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_containsDecl_x27___boxed(lean_object* v_n_1800_, lean_object* v_decls_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l_Lean_IR_containsDecl_x27(v_n_1800_, v_decls_1801_, v_a_1802_, v_a_1803_);
lean_dec(v_a_1803_);
lean_dec_ref(v_a_1802_);
lean_dec_ref(v_decls_1801_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_getDecl_x27(lean_object* v_n_1806_, lean_object* v_decls_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_){
_start:
{
lean_object* v___x_1811_; lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1829_; 
lean_inc(v_n_1806_);
v___x_1811_ = l_Lean_IR_findDecl_x27___redArg(v_n_1806_, v_decls_1807_, v_a_1809_);
v_a_1812_ = lean_ctor_get(v___x_1811_, 0);
v_isSharedCheck_1829_ = !lean_is_exclusive(v___x_1811_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1814_ = v___x_1811_;
v_isShared_1815_ = v_isSharedCheck_1829_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___x_1811_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1829_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
if (lean_obj_tag(v_a_1812_) == 1)
{
lean_object* v_val_1816_; lean_object* v___x_1818_; 
lean_dec(v_n_1806_);
v_val_1816_ = lean_ctor_get(v_a_1812_, 0);
lean_inc(v_val_1816_);
lean_dec_ref_known(v_a_1812_, 1);
if (v_isShared_1815_ == 0)
{
lean_ctor_set(v___x_1814_, 0, v_val_1816_);
v___x_1818_ = v___x_1814_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_val_1816_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
else
{
lean_object* v___x_1820_; uint8_t v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; 
lean_del_object(v___x_1814_);
lean_dec(v_a_1812_);
v___x_1820_ = ((lean_object*)(l_Lean_IR_getDecl___closed__0));
v___x_1821_ = 1;
v___x_1822_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_n_1806_, v___x_1821_);
v___x_1823_ = lean_string_append(v___x_1820_, v___x_1822_);
lean_dec_ref(v___x_1822_);
v___x_1824_ = ((lean_object*)(l_Lean_IR_getDecl___closed__1));
v___x_1825_ = lean_string_append(v___x_1823_, v___x_1824_);
v___x_1826_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1825_);
v___x_1827_ = l_Lean_MessageData_ofFormat(v___x_1826_);
v___x_1828_ = l_Lean_throwError___at___00Lean_IR_getDecl_spec__0___redArg(v___x_1827_, v_a_1808_, v_a_1809_);
return v___x_1828_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_getDecl_x27___boxed(lean_object* v_n_1830_, lean_object* v_decls_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_){
_start:
{
lean_object* v_res_1835_; 
v_res_1835_ = l_Lean_IR_getDecl_x27(v_n_1830_, v_decls_1831_, v_a_1832_, v_a_1833_);
lean_dec(v_a_1833_);
lean_dec_ref(v_a_1832_);
lean_dec_ref(v_decls_1831_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* lean_decl_get_sorry_dep(lean_object* v_env_1836_, lean_object* v_declName_1837_){
_start:
{
lean_object* v___x_1838_; 
v___x_1838_ = l_Lean_IR_findEnvDecl(v_env_1836_, v_declName_1837_);
if (lean_obj_tag(v___x_1838_) == 1)
{
lean_object* v_val_1839_; 
v_val_1839_ = lean_ctor_get(v___x_1838_, 0);
lean_inc(v_val_1839_);
lean_dec_ref_known(v___x_1838_, 1);
if (lean_obj_tag(v_val_1839_) == 0)
{
lean_object* v_info_1840_; lean_object* v_sorryDep_x3f_1841_; 
v_info_1840_ = lean_ctor_get(v_val_1839_, 4);
lean_inc_ref(v_info_1840_);
lean_dec_ref_known(v_val_1839_, 5);
v_sorryDep_x3f_1841_ = lean_ctor_get(v_info_1840_, 0);
lean_inc(v_sorryDep_x3f_1841_);
lean_dec_ref(v_info_1840_);
return v_sorryDep_x3f_1841_;
}
else
{
lean_object* v___x_1842_; 
lean_dec(v_val_1839_);
v___x_1842_ = lean_box(0);
return v___x_1842_;
}
}
else
{
lean_object* v___x_1843_; 
lean_dec(v___x_1838_);
v___x_1843_ = lean_box(0);
return v___x_1843_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1(uint8_t v_level_1844_, lean_object* v_env_1845_, uint8_t v_includeDecls_1846_, lean_object* v_as_1847_, size_t v_i_1848_, size_t v_stop_1849_, lean_object* v_b_1850_){
_start:
{
lean_object* v___y_1852_; uint8_t v___x_1856_; 
v___x_1856_ = lean_usize_dec_eq(v_i_1848_, v_stop_1849_);
if (v___x_1856_ == 0)
{
lean_object* v___x_1857_; 
v___x_1857_ = lean_array_uget_borrowed(v_as_1847_, v_i_1848_);
if (v_includeDecls_1846_ == 0)
{
uint8_t v___x_1868_; uint8_t v___x_1869_; 
v___x_1868_ = 1;
lean_inc(v___x_1857_);
lean_inc_ref(v_env_1845_);
v___x_1869_ = l_Lean_Environment_contains(v_env_1845_, v___x_1857_, v___x_1868_);
if (v___x_1869_ == 0)
{
goto v___jp_1858_;
}
else
{
v___y_1852_ = v_b_1850_;
goto v___jp_1851_;
}
}
else
{
goto v___jp_1858_;
}
v___jp_1858_:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; uint8_t v___x_1862_; 
v___x_1859_ = lean_box(v_level_1844_);
v___x_1860_ = lean_obj_tag_nat(v___x_1859_);
lean_dec(v___x_1859_);
v___x_1861_ = lean_unsigned_to_nat(2u);
v___x_1862_ = lean_nat_dec_eq(v___x_1860_, v___x_1861_);
if (v___x_1862_ == 0)
{
uint8_t v___x_1863_; 
lean_inc_ref(v_env_1845_);
v___x_1863_ = l_Lean_Compiler_LCNF_isDeclPublic(v_env_1845_, v___x_1857_);
if (v___x_1863_ == 0)
{
uint8_t v___x_1864_; 
lean_inc_ref(v_env_1845_);
v___x_1864_ = l_Lean_isDeclMeta(v_env_1845_, v___x_1857_);
if (v___x_1864_ == 0)
{
v___y_1852_ = v_b_1850_;
goto v___jp_1851_;
}
else
{
lean_object* v___x_1865_; 
lean_inc(v___x_1857_);
v___x_1865_ = lean_array_push(v_b_1850_, v___x_1857_);
v___y_1852_ = v___x_1865_;
goto v___jp_1851_;
}
}
else
{
lean_object* v___x_1866_; 
lean_inc(v___x_1857_);
v___x_1866_ = lean_array_push(v_b_1850_, v___x_1857_);
v___y_1852_ = v___x_1866_;
goto v___jp_1851_;
}
}
else
{
lean_object* v___x_1867_; 
lean_inc(v___x_1857_);
v___x_1867_ = lean_array_push(v_b_1850_, v___x_1857_);
v___y_1852_ = v___x_1867_;
goto v___jp_1851_;
}
}
}
else
{
lean_dec_ref(v_env_1845_);
return v_b_1850_;
}
v___jp_1851_:
{
size_t v___x_1853_; size_t v___x_1854_; 
v___x_1853_ = ((size_t)1ULL);
v___x_1854_ = lean_usize_add(v_i_1848_, v___x_1853_);
v_i_1848_ = v___x_1854_;
v_b_1850_ = v___y_1852_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1___boxed(lean_object* v_level_1870_, lean_object* v_env_1871_, lean_object* v_includeDecls_1872_, lean_object* v_as_1873_, lean_object* v_i_1874_, lean_object* v_stop_1875_, lean_object* v_b_1876_){
_start:
{
uint8_t v_level_boxed_1877_; uint8_t v_includeDecls_boxed_1878_; size_t v_i_boxed_1879_; size_t v_stop_boxed_1880_; lean_object* v_res_1881_; 
v_level_boxed_1877_ = lean_unbox(v_level_1870_);
v_includeDecls_boxed_1878_ = lean_unbox(v_includeDecls_1872_);
v_i_boxed_1879_ = lean_unbox_usize(v_i_1874_);
lean_dec(v_i_1874_);
v_stop_boxed_1880_ = lean_unbox_usize(v_stop_1875_);
lean_dec(v_stop_1875_);
v_res_1881_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1(v_level_boxed_1877_, v_env_1871_, v_includeDecls_boxed_1878_, v_as_1873_, v_i_boxed_1879_, v_stop_boxed_1880_, v_b_1876_);
lean_dec_ref(v_as_1873_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__0(size_t v_sz_1882_, size_t v_i_1883_, lean_object* v_bs_1884_){
_start:
{
uint8_t v___x_1885_; 
v___x_1885_ = lean_usize_dec_lt(v_i_1883_, v_sz_1882_);
if (v___x_1885_ == 0)
{
return v_bs_1884_;
}
else
{
lean_object* v_v_1886_; lean_object* v___x_1887_; lean_object* v_bs_x27_1888_; lean_object* v___x_1889_; size_t v___x_1890_; size_t v___x_1891_; lean_object* v___x_1892_; 
v_v_1886_ = lean_array_uget(v_bs_1884_, v_i_1883_);
v___x_1887_ = lean_unsigned_to_nat(0u);
v_bs_x27_1888_ = lean_array_uset(v_bs_1884_, v_i_1883_, v___x_1887_);
v___x_1889_ = l_Lean_IR_Decl_name(v_v_1886_);
lean_dec(v_v_1886_);
v___x_1890_ = ((size_t)1ULL);
v___x_1891_ = lean_usize_add(v_i_1883_, v___x_1890_);
v___x_1892_ = lean_array_uset(v_bs_x27_1888_, v_i_1883_, v___x_1889_);
v_i_1883_ = v___x_1891_;
v_bs_1884_ = v___x_1892_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__0___boxed(lean_object* v_sz_1894_, lean_object* v_i_1895_, lean_object* v_bs_1896_){
_start:
{
size_t v_sz_boxed_1897_; size_t v_i_boxed_1898_; lean_object* v_res_1899_; 
v_sz_boxed_1897_ = lean_unbox_usize(v_sz_1894_);
lean_dec(v_sz_1894_);
v_i_boxed_1898_ = lean_unbox_usize(v_i_1895_);
lean_dec(v_i_1895_);
v_res_1899_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__0(v_sz_boxed_1897_, v_i_boxed_1898_, v_bs_1896_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* lean_get_ir_extra_const_names(lean_object* v_env_1902_, uint8_t v_level_1903_, uint8_t v_includeDecls_1904_){
_start:
{
lean_object* v___x_1905_; lean_object* v_toEnvExtension_1906_; lean_object* v_asyncMode_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; uint8_t v___x_1912_; lean_object* v_env_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; size_t v_sz_1916_; size_t v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; uint8_t v___x_1921_; 
v___x_1905_ = l_Lean_IR_declMapExt;
v_toEnvExtension_1906_ = lean_ctor_get(v___x_1905_, 0);
v_asyncMode_1907_ = lean_ctor_get(v_toEnvExtension_1906_, 2);
v___x_1908_ = lean_obj_once(&l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0, &l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0_once, _init_l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_exportIREntries___closed__0);
v___x_1909_ = lean_box(v_level_1903_);
v___x_1910_ = lean_obj_tag_nat(v___x_1909_);
lean_dec(v___x_1909_);
v___x_1911_ = lean_unsigned_to_nat(0u);
v___x_1912_ = lean_nat_dec_eq(v___x_1910_, v___x_1911_);
v_env_1913_ = l_Lean_Environment_setExporting(v_env_1902_, v___x_1912_);
lean_inc_ref(v_env_1913_);
v___x_1914_ = l_Lean_SimplePersistentEnvExtension_getEntries___redArg(v___x_1908_, v___x_1905_, v_env_1913_, v_asyncMode_1907_);
v___x_1915_ = lean_array_mk(v___x_1914_);
v_sz_1916_ = lean_array_size(v___x_1915_);
v___x_1917_ = ((size_t)0ULL);
v___x_1918_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__0(v_sz_1916_, v___x_1917_, v___x_1915_);
v___x_1919_ = lean_array_get_size(v___x_1918_);
v___x_1920_ = ((lean_object*)(l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___closed__0));
v___x_1921_ = lean_nat_dec_lt(v___x_1911_, v___x_1919_);
if (v___x_1921_ == 0)
{
lean_dec_ref(v___x_1918_);
lean_dec_ref(v_env_1913_);
return v___x_1920_;
}
else
{
size_t v___x_1922_; lean_object* v___x_1923_; 
v___x_1922_ = lean_usize_of_nat(v___x_1919_);
v___x_1923_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames_spec__1(v_level_1903_, v_env_1913_, v_includeDecls_1904_, v___x_1918_, v___x_1917_, v___x_1922_, v___x_1920_);
lean_dec_ref(v___x_1918_);
return v___x_1923_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_getIRExtraConstNames___boxed(lean_object* v_env_1924_, lean_object* v_level_1925_, lean_object* v_includeDecls_1926_){
_start:
{
uint8_t v_level_boxed_1927_; uint8_t v_includeDecls_boxed_1928_; lean_object* v_res_1929_; 
v_level_boxed_1927_ = lean_unbox(v_level_1925_);
v_includeDecls_boxed_1928_ = lean_unbox(v_includeDecls_1926_);
v_res_1929_ = lean_get_ir_extra_const_names(v_env_1924_, v_level_boxed_1927_, v_includeDecls_boxed_1928_);
return v_res_1929_;
}
}
lean_object* runtime_initialize_Lean_Compiler_IR_Format(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ExportAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PublicDeclsExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ModPkgExt(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Format_Macro(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_IR_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ExportAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PublicDeclsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ModPkgExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_initFn_00___x40_Lean_Compiler_IR_CompilerM_3612076334____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_IR_declMapExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_IR_declMapExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_IR_Format(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ExportAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PublicDeclsExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ModPkgExt(uint8_t builtin);
lean_object* initialize_Init_Data_Format_Macro(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_IR_Format(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ExportAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PublicDeclsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ModPkgExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_IR_CompilerM(builtin);
}
#ifdef __cplusplus
}
#endif
