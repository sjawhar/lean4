#!/usr/bin/env bash
source ../common.sh

# Every process Lake's own code starts is spawned by `Lake.spawnProc` (`Lake/Util/Proc.lean`), one
# spawn at a time: the kept-module checker's spawn turns off the inheritance of the workspace build
# lock, and no other spawn may run meanwhile, or a compiler it starts would not hold the lock. So in
# the C that Lean generates for Lake, only `Lake/Util/Proc.c` refers to the runtime's spawn
# (`lean_io_process_spawn`), and no file refers to `IO.Process.output`, `run` or `spawn`, however
# the source names them.
C=$(norm_path "$(lean --print-prefix)")/lib/temp
test_exp -f "$C/Lake/Util/Proc.c"
# refs DIR -- the generated C files under DIR that refer to the process API, one per line
refs() {
  (cd "$C" && grep -rlE --include='*.c' \
    '\b(lean_io_process_spawn|l_IO_Process_(output|run|spawn)(___boxed)?)\b' "$1" | sort)
}
test_exp "$(refs Lake)" = Lake/Util/Proc.c
test_cmd_fails grep -qE '\bl_IO_Process_(output|run|spawn)(___boxed)?\b' "$C/Lake/Util/Proc.c"
# The same search finds a call where the source has one: `Lean.findSysroot` runs `lean` with
# `IO.Process.run`
test_cmd_out Lean/Util/Path.c refs Lean/Util
test_cmd grep -qE '\bl_IO_Process_run\b' "$C/Lean/Util/Path.c"
