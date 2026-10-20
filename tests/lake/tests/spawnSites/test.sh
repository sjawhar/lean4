#!/usr/bin/env bash
source ../common.sh

./clean.sh

# Every process Lake starts is spawned by `Lake.spawnProc` (`Lake/Util/Proc.lean`), one spawn at a
# time: the kept-module checker's spawn turns off the inheritance of the workspace build lock, and no
# other spawn may run meanwhile, or a compiler it starts would not hold the lock. The test reads the C
# that Lean generated for the Lake under test (`Lake/`, `Lake.c`, `LakeMain.c`) and for the library
# Lake links (`Init`, `Std`, `Lean`, `LeanExport`). The spawners are the runtime's spawn
# (`lean_io_process_spawn`) and every library function or constant whose code reaches it through
# other library code. Of Lake's files, only `Lake/Util/Proc.c` refers to a spawner, and it refers to
# the runtime's spawn alone.

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
# static datum is one `static const ITEM = ...;` line. String literals are not references. A module's
# initializer is not an item (it runs the initializers of the module's imports and constants), and a
# constant's initializer `_init_X` stands for the constant `X`.
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
    FNR == 1 { cur = "" }
    /^static const .* = .*;$/ {
      name = $0; sub(/ = .*/, "", name); sub(/.*[^A-Za-z0-9_]/, "", name)
      body = $0; sub(/^[^=]* = /, "", body)
      hit(name, body)
      next
    }
    /^(LEAN_EXPORT|static) / {
      if (!/;$/ && /\(/) {
        cur = $0; sub(/\(.*/, "", cur); sub(/.*[^A-Za-z0-9_]/, "", cur)
        if (cur ~ /^(runtime_)?initialize_/) cur = ""
      }
      next
    }
    cur != "" && !(cur in done) { if (hit(cur, $0)) done[cur] = 1 }'
}
# library_refs NAMES -- the library's C files that mention a name listed in NAMES, one per line
library_refs() {
  (cd "$LIB_C" && grep -rlwF -f "$1" --include='*.c' Init Std Lean Init.c Std.c Lean.c | sed "s|^|$LIB_C/|") || true
  (cd "$LAKE_C" && grep -rlwF -f "$1" --include='*.c' LeanExport | sed "s|^|$LAKE_C/|") || true
}
# The spawners: from the runtime's spawn, every item that refers to a spawner, to a fixed point
echo lean_io_process_spawn > "$W/new"
cp "$W/new" "$SPAWNERS"
while [ -s "$W/new" ]; do
  library_refs "$W/new" > "$W/files"
  [ -s "$W/files" ] || break
  items "$W/new" "$W/files" | cut -d' ' -f1 | sort -u | comm -23 - "$SPAWNERS" > "$W/found"
  mv "$W/found" "$W/new"
  sort -u "$SPAWNERS" "$W/new" -o "$SPAWNERS"
done
echo "spawners: $(wc -l < "$SPAWNERS")"

# refs DIR PATH... -- the C files among DIR's PATH... that refer to a spawner, one per line
refs() { (cd "$1" && shift && grep -rlwF -f "$SPAWNERS" --include='*.c' "$@" | sort); }
test_exp "$(refs "$LAKE_C" Lake Lake.c LakeMain.c)" = Lake/Util/Proc.c
test_exp "$(grep -owF -f "$SPAWNERS" "$LAKE_C/Lake/Util/Proc.c" | sort -u)" = lean_io_process_spawn

# The spawners include `Lean.findSysroot`, which runs `lean` through `IO.Process.run` and
# `IO.Process.output`, and a call to it from Lake's root file is found
for f in l_IO_Process_output l_IO_Process_run l_Lean_findSysroot; do test_cmd grep -qx "$f" "$SPAWNERS"; done
mkdir -p work/c
awk '{ print } /^_start:$/ && !done { print "l_Lean_findSysroot(lean_box(0));"; done = 1 }' \
  "$LAKE_C/LakeMain.c" > work/c/LakeMain.c
test_exp "$(refs work/c LakeMain.c)" = LakeMain.c
