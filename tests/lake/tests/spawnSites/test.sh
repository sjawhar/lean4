#!/usr/bin/env bash
source ../common.sh

./clean.sh

# Every process Lake's own code starts is spawned by `Lake.spawnProc` (`Lake/Util/Proc.lean`), one
# spawn at a time: the kept-module checker's spawn turns off the inheritance of the workspace build
# lock, and no other spawn may run meanwhile, or a compiler it starts would not hold the lock. The test
# reads the C that Lean generated for the Lake under test (`Lake/`, `Lake.c`, `LakeMain.c`) and for
# the library Lake links (`Init`, `Std`, `Lean`, `LeanExport`). The spawners are the runtime's spawn
# (`lean_io_process_spawn`) and every library function, constant or initialized global whose code or
# value reaches it through other library code. Code reached only through a table that an initializer
# fills and a dispatcher reads (a builtin registry, such as the tactics a lakefile's elaboration runs)
# is not followed: that is code a package's configuration runs, which `Lake.spawnProc`'s
# documentation leaves out. Of Lake's files, only `Lake/Util/Proc.c` refers to a spawner, and in it
# only `Lake.spawnProc` does, to the runtime's spawn alone.

# The C of the Lake under test: the `ir` directory of a `tests/lake` build (`run_test.sh`), or the
# `lib/temp` directory of a stage
LAKE_BIN=$(norm_dirname "$(command -v "$LAKE")")
if [ -f "$LAKE_BIN/../ir/Lake/Util/Proc.c" ]; then LAKE_C=$LAKE_BIN/../ir; else LAKE_C=$LAKE_BIN/../lib/temp; fi
test_exp -f "$LAKE_C/Lake/Util/Proc.c"
test_exp -d "$LAKE_C/LeanExport"
# The C of the library Lake links: the toolchain's
LIB_C=$(norm_path "$(lean --print-prefix)")/lib/temp
test_exp -f "$LIB_C/Init/System/IO.c"

mkdir -p work
W=$PWD/work
SPAWNERS=$W/spawners

# items NAMES FILES -- "ITEM NAME" for each top-level item of the C files listed in FILES whose
# definition refers to a NAME listed in NAMES. Generated C is not indented: a function's definition
# starts at a `LEAN_EXPORT` or `static` line that does not end in `;` and runs to the next one, and a
# datum is one `LEAN_EXPORT const ITEM = ...;` or `static const ITEM = ...;` line. String literals
# are not references. A module's initializer is not an item (it runs the initializers of the
# module's imports and constants), but a global it sets from an initializing function
# (`res = F(...);`, then `ITEM = lean_io_result_get_value(res);`) is an item that refers to `F`, and a
# constant's initializer `_init_X` stands for the constant `X`. A definition header the test cannot
# read fails it, and so does a file whose function headers and `_start:` labels (one per body) differ
# in number.
items() {
  awk -v names="$1" -v files="$2" '
    BEGIN {
      while ((getline n < names) > 0) T[n] = 1
      while ((getline f < files) > 0) ARGV[ARGC++] = f
    }
    function hit(item, line,   k, i, t) {
      gsub(/"([^"\\]|\\.)*"/, "", line)
      k = split(line, t, /[^A-Za-z0-9_]+/)
      for (i = 1; i <= k; i++) if (t[i] in T) {
        print item, t[i]
        if (item ~ /^_init_/) print substr(item, 7), t[i]
        return 1
      }
      return 0
    }
    function fail(msg) { print "items: " msg > "/dev/stderr"; failed = 1; exit 2 }
    function check() {
      if (file != "" && fns != starts) fail(file ": " fns " definition headers, " starts " _start labels")
      fns = 0; starts = 0; file = FILENAME
    }
    FNR == 1 { check(); cur = ""; ini = 0 }
    /^(LEAN_EXPORT|static) const .* = .*;$/ {
      name = $0; sub(/ = .*/, "", name); sub(/.*[^A-Za-z0-9_]/, "", name)
      body = $0; sub(/^[^=]* = /, "", body)
      hit(name, body)
      next
    }
    /^(LEAN_EXPORT|static) / {
      if (!/;$/) {
        if (!/\(/) fail(FILENAME ":" FNR ": not a definition header: " $0)
        cur = $0; sub(/\(.*/, "", cur); sub(/.*[^A-Za-z0-9_]/, "", cur)
        ini = cur ~ /^((runtime|meta)_)?initialize_/; res = ""
        if (ini) cur = ""; else fns++
      }
      next
    }
    /^_start:$/ { starts++ }
    ini && /^res = [A-Za-z0-9_]+\(/ { res = $0; sub(/^res = /, "", res); sub(/\(.*/, "", res); next }
    ini && /^[A-Za-z0-9_]+ = lean_io_result_get_value\(res\);$/ {
      if (res in T) { g = $0; sub(/ = .*/, "", g); print g, res }
      next
    }
    cur != "" && !(cur in done) { if (hit(cur, $0)) done[cur] = 1 }
    END { if (!failed) check() }'
}
# library_refs LIB LAKE NAMES -- the C files of the library (`Init`, `Std`, `Lean` under LIB,
# `LeanExport` under LAKE) that mention a name listed in NAMES, one per line
library_refs() {
  (cd "$1" && { grep -rlwF -f "$3" --include='*.c' Init Std Lean Init.c Std.c Lean.c || [ $? = 1 ]; }) | sed "s|^|$1/|"
  (cd "$2" && { grep -rlwF -f "$3" --include='*.c' LeanExport || [ $? = 1 ]; }) | sed "s|^|$2/|"
}
# spawners LIB LAKE OUT -- the spawners of the library under LIB and LAKE, in OUT: from the runtime's
# spawn, every item that refers to a spawner, to a fixed point
spawners() {
  echo lean_io_process_spawn > "$3.new"
  cp "$3.new" "$3"
  while [ -s "$3.new" ]; do
    library_refs "$1" "$2" "$3.new" > "$3.files"
    [ -s "$3.files" ] || break
    items "$3.new" "$3.files" | cut -d' ' -f1 | sort -u | comm -23 - "$3" > "$3.found"
    mv "$3.found" "$3.new"
    sort -u "$3" "$3.new" -o "$3"
  done
}
spawners "$LIB_C" "$LAKE_C" "$SPAWNERS"
echo "spawners: $(wc -l < "$SPAWNERS")"

# refs DIR PATH... -- the C files among DIR's PATH... that refer to a spawner, one per line
refs() { (cd "$1" && shift && grep -rlwF -f "$SPAWNERS" --include='*.c' "$@" | sort); }
test_exp "$(refs "$LAKE_C" Lake Lake.c LakeMain.c)" = Lake/Util/Proc.c
test_exp "$(grep -owF -f "$SPAWNERS" "$LAKE_C/Lake/Util/Proc.c" | sort -u)" = lean_io_process_spawn
# ... and in it, one item refers to a spawner: `Lake.spawnProc` or a part the compiler split from it,
# to the runtime's spawn (a `tests/lake` build names Lake's items with its package's prefix,
# `lp_lake_`; a stage, with `l_`)
echo "$LAKE_C/Lake/Util/Proc.c" > "$W/proc"
items "$SPAWNERS" "$W/proc" > "$W/proc-items"
cat "$W/proc-items"
test_exp "$(wc -l < "$W/proc-items")" -eq 1
test_cmd grep -qE '^(l|lp_lake)_Lake_spawnProc(___lam__[0-9]+|___redArg|___boxed)* lean_io_process_spawn$' \
  "$W/proc-items"

# The spawners include `Lean.findSysroot`, which runs `lean` through `IO.Process.run` and
# `IO.Process.output`, and a call to it from Lake's root file is found
for f in l_IO_Process_output l_IO_Process_run l_Lean_findSysroot; do test_cmd grep -qx "$f" "$SPAWNERS"; done
mkdir -p work/c
awk '{ print } /^_start:$/ && !done { print "l_Lean_findSysroot(lean_box(0));"; done = 1 }' \
  "$LAKE_C/LakeMain.c" > work/c/LakeMain.c
test_exp "$(refs work/c LakeMain.c)" = LakeMain.c

# A library in the shapes Lean emits, every item of which reaches the runtime's spawn: a function, a
# static closure datum over it and a constant that names the datum, an exported constant, an
# initializing function and the global a module initializer sets from it, a constant whose
# initializer `_init_X` calls the function, and a `LeanExport` function that reads that global and
# that constant. A function that names the runtime's spawn only in a string literal is no spawner.
F=$W/fixture
mkdir -p "$F/lib/Init" "$F/lib/Std" "$F/lib/Lean" "$F/lake/LeanExport"
touch "$F/lib/Init.c" "$F/lib/Std.c" "$F/lib/Lean.c"
cat > "$F/lib/Lean/Probe.c" <<'EOF'
LEAN_EXPORT lean_object* l_Lean_probeRun(lean_object* v_a_1_){
_start:
{
return lean_io_process_spawn(v_a_1_);
}
}
static const lean_closure_object l_Lean_probeInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_probeRun, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_probeInst___closed__0 = (const lean_object*)&l_Lean_probeInst___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_probeInst = (const lean_object*)&l_Lean_probeInst___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_probeInitFn(){
_start:
{
return lean_io_result_mk_ok(((lean_object*)(l_Lean_probeInst___closed__0)));
}
}
static lean_object* _init_l_Lean_probeConst(void){
_start:
{
return l_Lean_probeRun(lean_box(0));
}
}
LEAN_EXPORT lean_object* l_Lean_probeName(lean_object* v_a_1_){
_start:
{
return lean_mk_string("lean_io_process_spawn");
}
}
LEAN_EXPORT lean_object* runtime_initialize_Lean_Probe(uint8_t builtin) {
lean_object * res;
res = l_Lean_probeInitFn();
if (lean_io_result_is_error(res)) return res;
l_Lean_probeRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_probeRef);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
EOF
cat > "$F/lake/LeanExport/Probe.c" <<'EOF'
LEAN_EXPORT lean_object* l_LeanExport_probeUse(lean_object* v_a_1_){
_start:
{
return lean_apply_2(l_Lean_probeRef, l_Lean_probeConst, v_a_1_);
}
}
EOF
spawners "$F/lib" "$F/lake" "$W/fixture-spawners"
for f in l_Lean_probeRun l_Lean_probeInst___closed__0_value l_Lean_probeInst___closed__0 l_Lean_probeInst \
    l_Lean_probeInitFn l_Lean_probeRef l_Lean_probeConst l_LeanExport_probeUse; do
  test_cmd grep -qx "$f" "$W/fixture-spawners"
done
test_cmd_fails grep -qx l_Lean_probeName "$W/fixture-spawners"
