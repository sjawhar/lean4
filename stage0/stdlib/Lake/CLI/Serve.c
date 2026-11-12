// Lean compiler output
// Module: Lake.CLI.Serve
// Imports: public import Lake.Load.Config public import Lake.Build.Context public import Lake.Util.Exit import Lake.Build.Run import Lake.Build.Module import Lake.Load.Package import Lake.Load.Lean.Elab import Lake.Load.Workspace import Lake.Util.IO
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
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* lean_get_stderr();
lean_object* l_Lake_logToStream(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lake_OutStream_logEntry(lean_object*, lean_object*, uint8_t, uint8_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lake_resolvePath(lean_object*);
lean_object* l_Lake_realConfigFile(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_io_getenv(lean_object*);
lean_object* l_Lake_OutStream_get(lean_object*);
uint8_t l_Lake_AnsiMode_isEnabled(lean_object*, uint8_t);
lean_object* l_Lake_loadWorkspace(lean_object*, lean_object*);
lean_object* l_Lake_setupServerModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Workspace_runBuild___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instToJsonModuleSetup_toJson(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
extern lean_object* l_Lake_configModuleName;
lean_object* l_Lean_Plugin_ofFilePath(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_io_process_spawn(lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
lean_object* l_Lake_loadWorkspace___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_LoggerIO_captureLog___redArg(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lake_Workspace_augmentedEnvVars(lean_object*);
lean_object* l_Lake_Env_baseVars(lean_object*);
lean_object* l_Lake_Log_toString(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT uint32_t l_Lake_noConfigFileCode;
static const lean_string_object l_Lake_invalidConfigEnvVar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LAKE_INVALID_CONFIG"};
static const lean_object* l_Lake_invalidConfigEnvVar___closed__0 = (const lean_object*)&l_Lake_invalidConfigEnvVar___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_invalidConfigEnvVar = (const lean_object*)&l_Lake_invalidConfigEnvVar___closed__0_value;
static lean_once_cell_t l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lake.CLI.Serve"};
static const lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__0 = (const lean_object*)&l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "_private.Lake.CLI.Serve.0.Lake.setupFile.print!"};
static const lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__1 = (const lean_object*)&l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__1_value;
static const lean_string_object l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Failed to print `setup-file` result: "};
static const lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__2 = (const lean_object*)&l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__2_value;
LEAN_EXPORT uint32_t l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "_private.Lake.CLI.Serve.0.Lake.setupFile.eprint!"};
static const lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__0 = (const lean_object*)&l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Failed to print `setup-file` error: "};
static const lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__1 = (const lean_object*)&l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__1_value;
static const lean_string_object l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "\nOriginal error:\n"};
static const lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__2 = (const lean_object*)&l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_setupFile___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_setupFile___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_setupFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "Failed to configure the Lake workspace. Please restart the server after fixing the error above.\n"};
static const lean_object* l_Lake_setupFile___closed__0 = (const lean_object*)&l_Lake_setupFile___closed__0_value;
static const lean_string_object l_Lake_setupFile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "error: "};
static const lean_object* l_Lake_setupFile___closed__1 = (const lean_object*)&l_Lake_setupFile___closed__1_value;
static const lean_string_object l_Lake_setupFile___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "\nFailed to build module dependencies.\n"};
static const lean_object* l_Lake_setupFile___closed__2 = (const lean_object*)&l_Lake_setupFile___closed__2_value;
static const lean_string_object l_Lake_setupFile___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Failed to load the Lake workspace.\n"};
static const lean_object* l_Lake_setupFile___closed__3 = (const lean_object*)&l_Lake_setupFile___closed__3_value;
static const lean_array_object l_Lake_setupFile___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_setupFile___closed__4 = (const lean_object*)&l_Lake_setupFile___closed__4_value;
LEAN_EXPORT uint32_t l_Lake_setupFile(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_setupFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_serve_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_serve_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00Lake_serve_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00Lake_serve_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lake_serve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_serve___closed__0 = (const lean_object*)&l_Lake_serve___closed__0_value;
static const lean_string_object l_Lake_serve___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "--server"};
static const lean_object* l_Lake_serve___closed__1 = (const lean_object*)&l_Lake_serve___closed__1_value;
static const lean_array_object l_Lake_serve___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lake_serve___closed__1_value)}};
static const lean_object* l_Lake_serve___closed__2 = (const lean_object*)&l_Lake_serve___closed__2_value;
static const lean_string_object l_Lake_serve___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "warning: package configuration has errors, falling back to plain `lean --server`"};
static const lean_object* l_Lake_serve___closed__3 = (const lean_object*)&l_Lake_serve___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_serve(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_serve___boxed(lean_object*, lean_object*, lean_object*);
static uint32_t _init_l_Lake_noConfigFileCode(void){
_start:
{
uint32_t v___x_1_; 
v___x_1_ = 2;
return v___x_1_;
}
}
static lean_object* _init_l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__0(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = l_instMonadBaseIO;
v___x_6_ = l_instInhabitedOfMonad___redArg(v___x_5_, v___x_4_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1(lean_object* v_msg_7_){
_start:
{
lean_object* v___x_9_; lean_object* v___x_286__overap_10_; lean_object* v___x_11_; 
v___x_9_ = lean_obj_once(&l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__0, &l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__0_once, _init_l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___closed__0);
v___x_286__overap_10_ = lean_panic_fn_borrowed(v___x_9_, v_msg_7_);
v___x_11_ = lean_apply_1(v___x_286__overap_10_, lean_box(0));
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1___boxed(lean_object* v_msg_12_, lean_object* v___y_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1(v_msg_12_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0_spec__0(lean_object* v_s_15_){
_start:
{
lean_object* v___x_17_; lean_object* v_putStr_18_; lean_object* v___x_19_; 
v___x_17_ = lean_get_stdout();
v_putStr_18_ = lean_ctor_get(v___x_17_, 4);
lean_inc_ref(v_putStr_18_);
lean_dec_ref(v___x_17_);
v___x_19_ = lean_apply_2(v_putStr_18_, v_s_15_, lean_box(0));
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0_spec__0___boxed(lean_object* v_s_20_, lean_object* v_a_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0_spec__0(v_s_20_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0(lean_object* v_s_23_){
_start:
{
uint32_t v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_25_ = 10;
v___x_26_ = lean_string_push(v_s_23_, v___x_25_);
v___x_27_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0_spec__0(v___x_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0___boxed(lean_object* v_s_28_, lean_object* v_a_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0(v_s_28_);
return v_res_30_;
}
}
LEAN_EXPORT uint32_t l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21(lean_object* v_msg_34_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_IO_println___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__0(v_msg_34_);
if (lean_obj_tag(v___x_36_) == 0)
{
uint32_t v___x_37_; 
lean_dec_ref_known(v___x_36_, 1);
v___x_37_ = 0;
return v___x_37_;
}
else
{
lean_object* v_a_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; uint32_t v___x_48_; 
v_a_38_ = lean_ctor_get(v___x_36_, 0);
lean_inc(v_a_38_);
lean_dec_ref_known(v___x_36_, 1);
v___x_39_ = ((lean_object*)(l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__0));
v___x_40_ = ((lean_object*)(l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__1));
v___x_41_ = lean_unsigned_to_nat(80u);
v___x_42_ = lean_unsigned_to_nat(6u);
v___x_43_ = ((lean_object*)(l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__2));
v___x_44_ = lean_io_error_to_string(v_a_38_);
v___x_45_ = lean_string_append(v___x_43_, v___x_44_);
lean_dec_ref(v___x_44_);
v___x_46_ = l_mkPanicMessageWithDecl(v___x_39_, v___x_40_, v___x_41_, v___x_42_, v___x_45_);
lean_dec_ref(v___x_45_);
v___x_47_ = l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1(v___x_46_);
v___x_48_ = 1;
return v___x_48_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___boxed(lean_object* v_msg_49_, lean_object* v_a_50_){
_start:
{
uint32_t v_res_51_; lean_object* v_r_52_; 
v_res_51_ = l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21(v_msg_49_);
v_r_52_ = lean_box_uint32(v_res_51_);
return v_r_52_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21_spec__0(lean_object* v_s_53_){
_start:
{
lean_object* v___x_55_; lean_object* v_putStr_56_; lean_object* v___x_57_; 
v___x_55_ = lean_get_stderr();
v_putStr_56_ = lean_ctor_get(v___x_55_, 4);
lean_inc_ref(v_putStr_56_);
lean_dec_ref(v___x_55_);
v___x_57_ = lean_apply_2(v_putStr_56_, v_s_53_, lean_box(0));
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21_spec__0___boxed(lean_object* v_s_58_, lean_object* v_a_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_IO_eprint___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21_spec__0(v_s_58_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21(lean_object* v_msg_64_){
_start:
{
lean_object* v___x_66_; 
lean_inc_ref(v_msg_64_);
v___x_66_ = l_IO_eprint___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21_spec__0(v_msg_64_);
if (lean_obj_tag(v___x_66_) == 0)
{
lean_object* v_a_67_; 
lean_dec_ref(v_msg_64_);
v_a_67_ = lean_ctor_get(v___x_66_, 0);
lean_inc(v_a_67_);
lean_dec_ref_known(v___x_66_, 1);
return v_a_67_;
}
else
{
lean_object* v_a_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v_a_68_ = lean_ctor_get(v___x_66_, 0);
lean_inc(v_a_68_);
lean_dec_ref_known(v___x_66_, 1);
v___x_69_ = ((lean_object*)(l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21___closed__0));
v___x_70_ = ((lean_object*)(l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__0));
v___x_71_ = lean_unsigned_to_nat(84u);
v___x_72_ = lean_unsigned_to_nat(6u);
v___x_73_ = ((lean_object*)(l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__1));
v___x_74_ = lean_io_error_to_string(v_a_68_);
v___x_75_ = lean_string_append(v___x_73_, v___x_74_);
lean_dec_ref(v___x_74_);
v___x_76_ = ((lean_object*)(l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___closed__2));
v___x_77_ = lean_string_append(v___x_75_, v___x_76_);
v___x_78_ = lean_string_append(v___x_77_, v_msg_64_);
lean_dec_ref(v_msg_64_);
v___x_79_ = l_mkPanicMessageWithDecl(v___x_69_, v___x_70_, v___x_71_, v___x_72_, v___x_78_);
lean_dec_ref(v___x_78_);
v___x_80_ = l_panic___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_print_x21_spec__1(v___x_79_);
return v___x_80_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21___boxed(lean_object* v_msg_81_, lean_object* v_a_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21(v_msg_81_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lake_setupFile___lam__0(lean_object* v_val_84_, uint8_t v_outLv_85_, uint8_t v_val_86_, lean_object* v_e_87_){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = l_Lake_logToStream(v_e_87_, v_val_84_, v_outLv_85_, v_val_86_);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Lake_setupFile___lam__0___boxed(lean_object* v_val_90_, lean_object* v_outLv_91_, lean_object* v_val_92_, lean_object* v_e_93_, lean_object* v___y_94_){
_start:
{
uint8_t v_outLv_boxed_95_; uint8_t v_val_1122__boxed_96_; lean_object* v_res_97_; 
v_outLv_boxed_95_ = lean_unbox(v_outLv_91_);
v_val_1122__boxed_96_ = lean_unbox(v_val_92_);
v_res_97_ = l_Lake_setupFile___lam__0(v_val_90_, v_outLv_boxed_95_, v_val_1122__boxed_96_, v_e_93_);
lean_dec_ref(v_e_93_);
return v_res_97_;
}
}
LEAN_EXPORT uint32_t l_Lake_setupFile(lean_object* v_loadConfig_104_, lean_object* v_leanFile_105_, lean_object* v_header_x3f_106_, lean_object* v_buildConfig_107_){
_start:
{
lean_object* v___x_109_; lean_object* v_lakeEnv_110_; lean_object* v_configFile_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; uint8_t v___x_115_; 
lean_inc_ref(v_leanFile_105_);
v___x_109_ = l_Lake_resolvePath(v_leanFile_105_);
v_lakeEnv_110_ = lean_ctor_get(v_loadConfig_104_, 0);
v_configFile_111_ = lean_ctor_get(v_loadConfig_104_, 8);
lean_inc_ref(v_configFile_111_);
v___x_112_ = l_Lake_realConfigFile(v_configFile_111_);
v___x_113_ = lean_string_utf8_byte_size(v___x_112_);
v___x_114_ = lean_unsigned_to_nat(0u);
v___x_115_ = lean_nat_dec_eq(v___x_113_, v___x_114_);
if (v___x_115_ == 0)
{
uint8_t v___x_116_; 
v___x_116_ = lean_string_dec_eq(v___x_112_, v___x_109_);
lean_dec_ref(v___x_112_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = ((lean_object*)(l_Lake_invalidConfigEnvVar___closed__0));
v___x_118_ = lean_io_getenv(v___x_117_);
if (lean_obj_tag(v___x_118_) == 1)
{
lean_object* v_val_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; uint32_t v___x_123_; 
lean_dec_ref(v___x_109_);
lean_dec_ref(v_buildConfig_107_);
lean_dec(v_header_x3f_106_);
lean_dec_ref(v_leanFile_105_);
lean_dec_ref(v_loadConfig_104_);
v_val_119_ = lean_ctor_get(v___x_118_, 0);
lean_inc(v_val_119_);
lean_dec_ref_known(v___x_118_, 1);
v___x_120_ = l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21(v_val_119_);
v___x_121_ = ((lean_object*)(l_Lake_setupFile___closed__0));
v___x_122_ = l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21(v___x_121_);
v___x_123_ = 1;
return v___x_123_;
}
else
{
lean_object* v_toLogConfig_124_; uint8_t v_outLv_125_; uint8_t v_ansiMode_126_; lean_object* v_out_127_; lean_object* v___x_128_; uint8_t v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___f_132_; lean_object* v___x_133_; 
lean_dec(v___x_118_);
v_toLogConfig_124_ = lean_ctor_get(v_buildConfig_107_, 0);
v_outLv_125_ = lean_ctor_get_uint8(v_toLogConfig_124_, sizeof(void*)*1 + 1);
v_ansiMode_126_ = lean_ctor_get_uint8(v_toLogConfig_124_, sizeof(void*)*1 + 2);
v_out_127_ = lean_ctor_get(v_toLogConfig_124_, 0);
v___x_128_ = l_Lake_OutStream_get(v_out_127_);
lean_inc_ref(v___x_128_);
v___x_129_ = l_Lake_AnsiMode_isEnabled(v___x_128_, v_ansiMode_126_);
v___x_130_ = lean_box(v_outLv_125_);
v___x_131_ = lean_box(v___x_129_);
v___f_132_ = lean_alloc_closure((void*)(l_Lake_setupFile___lam__0___boxed), 5, 3);
lean_closure_set(v___f_132_, 0, v___x_128_);
lean_closure_set(v___f_132_, 1, v___x_130_);
lean_closure_set(v___f_132_, 2, v___x_131_);
v___x_133_ = l_Lake_loadWorkspace(v_loadConfig_104_, v___f_132_);
lean_dec_ref(v___f_132_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v_a_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v_a_134_ = lean_ctor_get(v___x_133_, 0);
lean_inc(v_a_134_);
lean_dec_ref_known(v___x_133_, 1);
v___x_135_ = lean_alloc_closure((void*)(l_Lake_setupServerModule___boxed), 10, 3);
lean_closure_set(v___x_135_, 0, v_leanFile_105_);
lean_closure_set(v___x_135_, 1, v___x_109_);
lean_closure_set(v___x_135_, 2, v_header_x3f_106_);
v___x_136_ = l_Lake_Workspace_runBuild___redArg(v_a_134_, v___x_135_, v_buildConfig_107_);
if (lean_obj_tag(v___x_136_) == 0)
{
lean_object* v_a_137_; lean_object* v___x_138_; lean_object* v___x_139_; uint32_t v___x_140_; 
v_a_137_ = lean_ctor_get(v___x_136_, 0);
lean_inc(v_a_137_);
lean_dec_ref_known(v___x_136_, 1);
v___x_138_ = l_Lean_instToJsonModuleSetup_toJson(v_a_137_);
v___x_139_ = l_Lean_Json_compress(v___x_138_);
v___x_140_ = l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21(v___x_139_);
return v___x_140_;
}
else
{
lean_object* v_a_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; uint32_t v___x_148_; 
v_a_141_ = lean_ctor_get(v___x_136_, 0);
lean_inc(v_a_141_);
lean_dec_ref_known(v___x_136_, 1);
v___x_142_ = ((lean_object*)(l_Lake_setupFile___closed__1));
v___x_143_ = lean_io_error_to_string(v_a_141_);
v___x_144_ = lean_string_append(v___x_142_, v___x_143_);
lean_dec_ref(v___x_143_);
v___x_145_ = ((lean_object*)(l_Lake_setupFile___closed__2));
v___x_146_ = lean_string_append(v___x_144_, v___x_145_);
v___x_147_ = l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21(v___x_146_);
v___x_148_ = 1;
return v___x_148_;
}
}
else
{
lean_object* v___x_149_; lean_object* v___x_150_; uint32_t v___x_151_; 
lean_dec_ref_known(v___x_133_, 1);
lean_dec_ref(v___x_109_);
lean_dec_ref(v_buildConfig_107_);
lean_dec(v_header_x3f_106_);
lean_dec_ref(v_leanFile_105_);
v___x_149_ = ((lean_object*)(l_Lake_setupFile___closed__3));
v___x_150_ = l___private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21(v___x_149_);
v___x_151_ = 1;
return v___x_151_;
}
}
}
else
{
lean_object* v_lake_152_; lean_object* v_sharedDynlib_153_; lean_object* v_path_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; uint32_t v___x_166_; 
lean_inc_ref(v_lakeEnv_110_);
lean_dec_ref(v___x_109_);
lean_dec_ref(v_buildConfig_107_);
lean_dec(v_header_x3f_106_);
lean_dec_ref(v_leanFile_105_);
lean_dec_ref(v_loadConfig_104_);
v_lake_152_ = lean_ctor_get(v_lakeEnv_110_, 0);
lean_inc_ref(v_lake_152_);
lean_dec_ref(v_lakeEnv_110_);
v_sharedDynlib_153_ = lean_ctor_get(v_lake_152_, 4);
lean_inc_ref(v_sharedDynlib_153_);
lean_dec_ref(v_lake_152_);
v_path_154_ = lean_ctor_get(v_sharedDynlib_153_, 0);
lean_inc_ref(v_path_154_);
lean_dec_ref(v_sharedDynlib_153_);
v___x_155_ = l_Lake_configModuleName;
v___x_156_ = lean_box(0);
v___x_157_ = lean_box(1);
v___x_158_ = ((lean_object*)(l_Lake_setupFile___closed__4));
v___x_159_ = l_Lean_Plugin_ofFilePath(v_path_154_);
v___x_160_ = lean_unsigned_to_nat(1u);
v___x_161_ = lean_mk_empty_array_with_capacity(v___x_160_);
v___x_162_ = lean_array_push(v___x_161_, v___x_159_);
v___x_163_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v___x_163_, 0, v___x_155_);
lean_ctor_set(v___x_163_, 1, v___x_156_);
lean_ctor_set(v___x_163_, 2, v___x_156_);
lean_ctor_set(v___x_163_, 3, v___x_157_);
lean_ctor_set(v___x_163_, 4, v___x_158_);
lean_ctor_set(v___x_163_, 5, v___x_162_);
lean_ctor_set(v___x_163_, 6, v___x_157_);
lean_ctor_set_uint8(v___x_163_, sizeof(void*)*7, v___x_115_);
v___x_164_ = l_Lean_instToJsonModuleSetup_toJson(v___x_163_);
v___x_165_ = l_Lean_Json_compress(v___x_164_);
v___x_166_ = l___private_Lake_CLI_Serve_0__Lake_setupFile_print_x21(v___x_165_);
return v___x_166_;
}
}
else
{
uint32_t v___x_167_; 
lean_dec_ref(v___x_112_);
lean_dec_ref(v___x_109_);
lean_dec_ref(v_buildConfig_107_);
lean_dec(v_header_x3f_106_);
lean_dec_ref(v_leanFile_105_);
lean_dec_ref(v_loadConfig_104_);
v___x_167_ = 2;
return v___x_167_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_setupFile___boxed(lean_object* v_loadConfig_168_, lean_object* v_leanFile_169_, lean_object* v_header_x3f_170_, lean_object* v_buildConfig_171_, lean_object* v_a_172_){
_start:
{
uint32_t v_res_173_; lean_object* v_r_174_; 
v_res_173_ = l_Lake_setupFile(v_loadConfig_168_, v_leanFile_169_, v_header_x3f_170_, v_buildConfig_171_);
v_r_174_ = lean_box_uint32(v_res_173_);
return v_r_174_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_serve_spec__1(lean_object* v_as_175_, size_t v_i_176_, size_t v_stop_177_, lean_object* v_b_178_){
_start:
{
uint8_t v___x_180_; 
v___x_180_ = lean_usize_dec_eq(v_i_176_, v_stop_177_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; uint8_t v___x_182_; uint8_t v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; size_t v___x_186_; size_t v___x_187_; 
v___x_181_ = lean_box(1);
v___x_182_ = 1;
v___x_183_ = 0;
v___x_184_ = lean_array_uget_borrowed(v_as_175_, v_i_176_);
v___x_185_ = l_Lake_OutStream_logEntry(v___x_181_, v___x_184_, v___x_182_, v___x_183_);
v___x_186_ = ((size_t)1ULL);
v___x_187_ = lean_usize_add(v_i_176_, v___x_186_);
v_i_176_ = v___x_187_;
v_b_178_ = v___x_185_;
goto _start;
}
else
{
lean_object* v___x_189_; 
v___x_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_189_, 0, v_b_178_);
return v___x_189_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_serve_spec__1___boxed(lean_object* v_as_190_, lean_object* v_i_191_, lean_object* v_stop_192_, lean_object* v_b_193_, lean_object* v___y_194_){
_start:
{
size_t v_i_boxed_195_; size_t v_stop_boxed_196_; lean_object* v_res_197_; 
v_i_boxed_195_ = lean_unbox_usize(v_i_191_);
lean_dec(v_i_191_);
v_stop_boxed_196_ = lean_unbox_usize(v_stop_192_);
lean_dec(v_stop_192_);
v_res_197_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_serve_spec__1(v_as_190_, v_i_boxed_195_, v_stop_boxed_196_, v_b_193_);
lean_dec_ref(v_as_190_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00Lake_serve_spec__0(lean_object* v_s_198_){
_start:
{
uint32_t v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_200_ = 10;
v___x_201_ = lean_string_push(v_s_198_, v___x_200_);
v___x_202_ = l_IO_eprint___at___00__private_Lake_CLI_Serve_0__Lake_setupFile_eprint_x21_spec__0(v___x_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00Lake_serve_spec__0___boxed(lean_object* v_s_203_, lean_object* v_a_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l_IO_eprintln___at___00Lake_serve_spec__0(v_s_203_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l_Lake_serve(lean_object* v_config_214_, lean_object* v_args_215_){
_start:
{
lean_object* v_fst_218_; lean_object* v_snd_219_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v_fst_244_; lean_object* v_snd_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_292_; 
lean_inc_ref(v_config_214_);
v___x_242_ = lean_alloc_closure((void*)(l_Lake_loadWorkspace___boxed), 3, 1);
lean_closure_set(v___x_242_, 0, v_config_214_);
v___x_243_ = l_Lake_LoggerIO_captureLog___redArg(v___x_242_);
v_fst_244_ = lean_ctor_get(v___x_243_, 0);
v_snd_245_ = lean_ctor_get(v___x_243_, 1);
v_isSharedCheck_292_ = !lean_is_exclusive(v___x_243_);
if (v_isSharedCheck_292_ == 0)
{
v___x_247_ = v___x_243_;
v_isShared_248_ = v_isSharedCheck_292_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_snd_245_);
lean_inc(v_fst_244_);
lean_dec(v___x_243_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_292_;
goto v_resetjp_246_;
}
v___jp_217_:
{
lean_object* v___x_220_; lean_object* v_lakeEnv_221_; lean_object* v_lean_222_; lean_object* v_lean_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; uint8_t v___x_228_; uint8_t v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_220_ = ((lean_object*)(l_Lake_serve___closed__0));
v_lakeEnv_221_ = lean_ctor_get(v_config_214_, 0);
lean_inc_ref(v_lakeEnv_221_);
lean_dec_ref(v_config_214_);
v_lean_222_ = lean_ctor_get(v_lakeEnv_221_, 1);
lean_inc_ref(v_lean_222_);
lean_dec_ref(v_lakeEnv_221_);
v_lean_223_ = lean_ctor_get(v_lean_222_, 7);
lean_inc_ref(v_lean_223_);
lean_dec_ref(v_lean_222_);
v___x_224_ = ((lean_object*)(l_Lake_serve___closed__2));
v___x_225_ = l_Array_append___redArg(v___x_224_, v_snd_219_);
lean_dec_ref(v_snd_219_);
v___x_226_ = l_Array_append___redArg(v___x_225_, v_args_215_);
v___x_227_ = lean_box(0);
v___x_228_ = 1;
v___x_229_ = 0;
v___x_230_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_230_, 0, v___x_220_);
lean_ctor_set(v___x_230_, 1, v_lean_223_);
lean_ctor_set(v___x_230_, 2, v___x_226_);
lean_ctor_set(v___x_230_, 3, v___x_227_);
lean_ctor_set(v___x_230_, 4, v_fst_218_);
lean_ctor_set_uint8(v___x_230_, sizeof(void*)*5, v___x_228_);
lean_ctor_set_uint8(v___x_230_, sizeof(void*)*5 + 1, v___x_229_);
v___x_231_ = lean_io_process_spawn(v___x_230_);
if (lean_obj_tag(v___x_231_) == 0)
{
lean_object* v_a_232_; lean_object* v___x_233_; 
v_a_232_ = lean_ctor_get(v___x_231_, 0);
lean_inc(v_a_232_);
lean_dec_ref_known(v___x_231_, 1);
v___x_233_ = lean_io_process_child_wait(v___x_220_, v_a_232_);
lean_dec(v_a_232_);
return v___x_233_;
}
else
{
lean_object* v_a_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_241_; 
v_a_234_ = lean_ctor_get(v___x_231_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_241_ == 0)
{
v___x_236_ = v___x_231_;
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_a_234_);
lean_dec(v___x_231_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___x_239_; 
if (v_isShared_237_ == 0)
{
v___x_239_ = v___x_236_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_a_234_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
}
}
v_resetjp_246_:
{
lean_object* v___x_277_; lean_object* v___x_278_; uint8_t v___x_279_; 
v___x_277_ = lean_unsigned_to_nat(0u);
v___x_278_ = lean_array_get_size(v_snd_245_);
v___x_279_ = lean_nat_dec_lt(v___x_277_, v___x_278_);
if (v___x_279_ == 0)
{
goto v___jp_249_;
}
else
{
lean_object* v___x_280_; size_t v___x_281_; size_t v___x_282_; lean_object* v___x_283_; 
v___x_280_ = lean_box(0);
v___x_281_ = ((size_t)0ULL);
v___x_282_ = lean_usize_of_nat(v___x_278_);
v___x_283_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_serve_spec__1(v_snd_245_, v___x_281_, v___x_282_, v___x_280_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_dec_ref_known(v___x_283_, 1);
goto v___jp_249_;
}
else
{
lean_object* v_a_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_291_; 
lean_del_object(v___x_247_);
lean_dec(v_snd_245_);
lean_dec(v_fst_244_);
lean_dec_ref(v_config_214_);
v_a_284_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_291_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_291_ == 0)
{
v___x_286_ = v___x_283_;
v_isShared_287_ = v_isSharedCheck_291_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_a_284_);
lean_dec(v___x_283_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_291_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v___x_289_; 
if (v_isShared_287_ == 0)
{
v___x_289_ = v___x_286_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v_a_284_);
v___x_289_ = v_reuseFailAlloc_290_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
return v___x_289_;
}
}
}
}
v___jp_249_:
{
if (lean_obj_tag(v_fst_244_) == 1)
{
lean_object* v_val_250_; lean_object* v_packages_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v_config_254_; lean_object* v_moreGlobalServerArgs_255_; lean_object* v___x_256_; 
lean_del_object(v___x_247_);
lean_dec(v_snd_245_);
v_val_250_ = lean_ctor_get(v_fst_244_, 0);
lean_inc(v_val_250_);
lean_dec_ref_known(v_fst_244_, 1);
v_packages_251_ = lean_ctor_get(v_val_250_, 4);
v___x_252_ = lean_unsigned_to_nat(0u);
v___x_253_ = lean_array_fget_borrowed(v_packages_251_, v___x_252_);
v_config_254_ = lean_ctor_get(v___x_253_, 6);
v_moreGlobalServerArgs_255_ = lean_ctor_get(v_config_254_, 3);
lean_inc_ref(v_moreGlobalServerArgs_255_);
v___x_256_ = l_Lake_Workspace_augmentedEnvVars(v_val_250_);
v_fst_218_ = v___x_256_;
v_snd_219_ = v_moreGlobalServerArgs_255_;
goto v___jp_217_;
}
else
{
lean_object* v___x_257_; lean_object* v___x_258_; 
lean_dec(v_fst_244_);
v___x_257_ = ((lean_object*)(l_Lake_serve___closed__3));
v___x_258_ = l_IO_eprintln___at___00Lake_serve_spec__0(v___x_257_);
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v_lakeEnv_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_265_; 
lean_dec_ref_known(v___x_258_, 1);
v_lakeEnv_259_ = lean_ctor_get(v_config_214_, 0);
lean_inc_ref(v_lakeEnv_259_);
v___x_260_ = l_Lake_Env_baseVars(v_lakeEnv_259_);
v___x_261_ = ((lean_object*)(l_Lake_invalidConfigEnvVar___closed__0));
v___x_262_ = l_Lake_Log_toString(v_snd_245_);
lean_dec(v_snd_245_);
v___x_263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
if (v_isShared_248_ == 0)
{
lean_ctor_set(v___x_247_, 1, v___x_263_);
lean_ctor_set(v___x_247_, 0, v___x_261_);
v___x_265_ = v___x_247_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_261_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v___x_263_);
v___x_265_ = v_reuseFailAlloc_268_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = lean_array_push(v___x_260_, v___x_265_);
v___x_267_ = ((lean_object*)(l_Lake_setupFile___closed__4));
v_fst_218_ = v___x_266_;
v_snd_219_ = v___x_267_;
goto v___jp_217_;
}
}
else
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
lean_del_object(v___x_247_);
lean_dec(v_snd_245_);
lean_dec_ref(v_config_214_);
v_a_269_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_276_ == 0)
{
v___x_271_ = v___x_258_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_258_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_a_269_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_serve___boxed(lean_object* v_config_293_, lean_object* v_args_294_, lean_object* v_a_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l_Lake_serve(v_config_293_, v_args_294_);
lean_dec_ref(v_args_294_);
return v_res_296_;
}
}
lean_object* runtime_initialize_Lake_Load_Config(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Context(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Exit(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Run(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Module(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Package(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Lean_Elab(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Workspace(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_CLI_Serve(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Load_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Exit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Run(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Lean_Elab(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_noConfigFileCode = _init_l_Lake_noConfigFileCode();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_CLI_Serve(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Load_Config(uint8_t builtin);
lean_object* initialize_Lake_Build_Context(uint8_t builtin);
lean_object* initialize_Lake_Util_Exit(uint8_t builtin);
lean_object* initialize_Lake_Build_Run(uint8_t builtin);
lean_object* initialize_Lake_Build_Module(uint8_t builtin);
lean_object* initialize_Lake_Load_Package(uint8_t builtin);
lean_object* initialize_Lake_Load_Lean_Elab(uint8_t builtin);
lean_object* initialize_Lake_Load_Workspace(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_CLI_Serve(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Load_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Exit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Run(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Lean_Elab(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_CLI_Serve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_CLI_Serve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_CLI_Serve(builtin);
}
#ifdef __cplusplus
}
#endif
