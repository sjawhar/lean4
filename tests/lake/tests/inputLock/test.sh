#!/usr/bin/env bash
# The tests see the locks in `/proc/locks`, which Windows, macOS and gVisor sandboxes lack
if ! { cat /proc/locks > /dev/null; } 2> /dev/null; then
  echo 'SKIP: no /proc/locks'
  exit 0
fi
source ../common.sh
NO_BUILD_CODE=3

./clean.sh

# Test the input lock: two Lake processes on one machine that share an artifact cache and must
# compile the same module with the same input hash compile it once. One compiles it, and the
# other waits on the exclusive `flock` of `$LAKE_CACHE_DIR/locks/<scope>/<inputHash>`, then
# restores the outputs from the cache. The lock is off where it cannot help, and a failure to
# take it never fails a build. The pieces that this test shares with `../inputLockClaims` are in
# `lib.sh`; case 9 (claims) is in `../inputLockClaims`.

source ./lib.sh

case_1() {
  # Two processes, one module: t2 waits on the lock while t1 compiles `P.X`, then restores the
  # outputs that t1 put in the cache (hard links of the cache's entries, as t1's are)
  case_dir 1
  probe mkp P.X
  local lock
  lock="$(lock_path "$HASH_P_X")"
  mkp t1
  mkp t2
  start_lake t1 t1 build P.X
  wait_until 60 "t1 compiles P.X" counter_is 1 "$COUNTER"
  start_lake t2 t2 build P.X
  wait_until 60 "t2 is blocked on $lock" is_blocked "$lock"
  show_locks "$lock"
  test_cmd touch "$GO"
  wait_lake t1 60
  expect_rc t1 0
  wait_lake t2 60
  expect_rc t2 0
  expect_eq "compiles of P.X" 1 "$(lines "$COUNTER")"
  match_pat 'Built P\.X( |$)' t1.log
  no_match_pat 'Built P\.X( |$)' t2.log
  same_inode "$(lib_file t1 P.X olean)" "$(lib_file t2 P.X olean)"
  test_exp -f "$lock"
}

case_2() {
  # Holder killed during its compile, with a live child: t1's `lean` does not inherit the lock,
  # so once t1's Lake is killed, t2 takes the lock and compiles `P.X` while that `lean` still runs
  case_dir 2
  probe mkp P.X
  local lock map orphans p
  lock="$(lock_path "$HASH_P_X")"
  map="$(mapping_path "$HASH_P_X")"
  mkp t1
  mkp t2
  mkp ref
  start_lake t1 t1 build P.X
  wait_until 60 "t1 compiles P.X" counter_is 1 "$COUNTER"
  start_lake t2 t2 build P.X
  wait_until 60 "t2 is blocked on $lock" is_blocked "$lock"
  show_locks "$lock"
  orphans="$(pgrep -P "$PID_t1" -x lean || true)"
  echo "the lean of t1: ${orphans:-none}"
  test_exp -n "$orphans"
  EXTRA_PIDS+=($orphans)
  test_cmd kill -9 "$PID_t1"
  wait_lake t1 10
  wait_until 30 "t2 (pid $PID_t2) holds $lock" is_held_by "$lock" "$PID_t2"
  wait_until 60 "t2 compiles P.X (the second compile)" counter_is 2 "$COUNTER"
  show_locks "$lock"
  for p in $orphans; do expect_running "the orphaned lean of t1" "$p"; done
  test_exp ! -e "$map"
  test_cmd touch "$GO"
  wait_lake t2 60
  expect_rc t2 0
  match_pat 'Built P\.X( |$)' t2.log
  for p in $orphans; do wait_until 60 "the orphaned lean $p has exited" not_running "$p"; done
  # t2's outputs are those of a build without the cache
  LAKE_ARTIFACT_CACHE=false LAKE_CACHE_DIR="$CASE_DIR/ref-cache" run_lake ref 120 ref build P.X
  test_cmd cmp "$(lib_file ref P.X olean)" "$(lib_file t2 P.X olean)"
  test_exp -f "$map"
  test_exp -f "$lock"
}

case_3() {
  # Holder killed while it publishes: t1 has put the artifacts in the cache and stalls before the
  # mapping exists (`StallPublish.c`), and is killed there. t2 then compiles `P.X` itself.
  case_dir 3
  probe mkp P.X
  local lock map marker
  lock="$(lock_path "$HASH_P_X")"
  map="$(mapping_path "$HASH_P_X")"
  marker="$CASE_DIR/publish.marker"
  test_cmd cc -shared -fPIC -o "$CASE_DIR/stall-publish.so" "$IL_DIR/StallPublish.c" -ldl
  mkp t1
  mkp t2
  mkp ref
  LAKE_PRELOAD="$CASE_DIR/stall-publish.so" STALL_PUBLISH_MARKER="$marker" \
    start_lake t1 t1 build P.X
  wait_until 60 "t1 compiles P.X" counter_is 1 "$COUNTER"
  start_lake t2 t2 build P.X
  wait_until 60 "t2 is blocked on $lock" is_blocked "$lock"
  show_locks "$lock"
  test_cmd touch "$GO"
  wait_until 60 "t1 stalls as it publishes the mapping" test -e "$marker"
  echo "t1 stalls on the creation of $(cat "$marker")"
  test_exp ! -e "$map"
  expect_cached "$(lib_file t1 P.X olean)"
  expect_held "$lock" "$PID_t1"
  expect_blocked "$lock"
  test_cmd stop_tree "$PID_t1"
  wait_lake t2 60
  expect_rc t2 0
  match_pat 'Built P\.X( |$)' t2.log
  expect_eq "compiles of P.X" 2 "$(lines "$COUNTER")"
  # t2's outputs are those of a build without the cache, and its mapping is whole
  LAKE_ARTIFACT_CACHE=false LAKE_CACHE_DIR="$CASE_DIR/ref-cache" run_lake ref 120 ref build P.X
  test_cmd cmp "$(lib_file ref P.X olean)" "$(lib_file t2 P.X olean)"
  test_cmd cmp "$(lib_file ref P.X ilean)" "$(lib_file t2 P.X ilean)"
  test_cmd jq -e 'type == "object"' "$map"
  # A fresh root restores `P.X` through that mapping, with no compile (`ref`'s compile counted too)
  local compiles
  compiles="$(lines "$COUNTER")"
  mkp t3
  run_lake t3 120 t3 build P.X
  expect_eq "compiles of P.X" "$compiles" "$(lines "$COUNTER")"
  no_match_pat 'Built P\.X( |$)' t3.log
  test_cmd cmp "$(lib_file t2 P.X olean)" "$(lib_file t3 P.X olean)"
  test_exp -f "$lock"
}

case_4() {
  # Holder whose compile fails: t1 releases the lock when `P.X` fails, while its process lives on
  # (it still compiles `P.Hold`), so t2 compiles `P.X` itself and reports the error
  case_dir 4
  probe mkp P.X
  local lock
  lock="$(lock_path "$HASH_P_X")"
  mkp t1
  mkp t2
  test_cmd touch "$X_FAILS"
  start_lake t1 t1 build P.X P.Hold
  wait_until 60 "t1 compiles P.X" counter_is 1 "$COUNTER"
  wait_until 60 "t1 compiles P.Hold" counter_is 1 "$HOLD_COUNTER"
  start_lake t2 t2 build P.X
  wait_until 60 "t2 is blocked on $lock" is_blocked "$lock"
  show_locks "$lock"
  test_cmd touch "$GO"
  wait_lake t2 60
  expect_running "the Lake of t1" "$PID_t1"
  expect_rc t2 '!0'
  match_text 'P.X fails on purpose' t2.log
  expect_eq "compiles of P.X" 2 "$(lines "$COUNTER")"
  test_cmd touch "$HOLD"
  wait_lake t1 60
  expect_rc t1 '!0'
  match_text 'P.X fails on purpose' t1.log
  test_exp -f "$lock"
}

# compiled_by COUNTER PID -- the compile that COUNTER records first is a `lean` that Lake process
# PID runs
compiled_by() {
  local lean
  lean="$(head -n 1 "$1" 2> /dev/null)"
  [ -n "$lean" ] && [ "$(ps -o ppid= -p "$lean" 2> /dev/null | tr -d ' ')" = "$2" ]
}

case_5() {
  # Four processes, two root targets, opposite orders: t1 and t2 build `r1` (which starts `A`,
  # then, past a gate, `B`), t3 and t4 build `r2` (`B`, then `A`), with 2 threads each. t1 holds
  # `A`'s lock and waits for `B`'s while t3 holds `B`'s and waits for `A`'s. A process releases an
  # input's lock once its outputs are in the cache, not at its exit, so the two waits end.
  case_dir 5
  probe mkab A B
  local lock_a lock_b start t left
  lock_a="$(lock_path "$HASH_A")"
  lock_b="$(lock_path "$HASH_B")"
  for t in t1 t2 t3 t4; do mkab "$t"; done
  export CROSS_GATE="$CASE_DIR/cross-gate"
  start=$SECONDS
  LEAN_NUM_THREADS=2 start_lake t1 t1 build r1
  LEAN_NUM_THREADS=2 start_lake t3 t3 build r2
  wait_until 60 "t1 compiles A" compiled_by "$COUNTER_A" "$PID_t1"
  wait_until 60 "t3 compiles B" compiled_by "$COUNTER_B" "$PID_t3"
  wait_until 60 "t1 (pid $PID_t1) holds A's lock" is_held_by "$lock_a" "$PID_t1"
  wait_until 60 "t3 (pid $PID_t3) holds B's lock" is_held_by "$lock_b" "$PID_t3"
  # Past the gate, t1 requests `B` and t3 requests `A`, while their first compiles still run
  test_cmd touch "$CROSS_GATE"
  wait_until 60 "t1 (pid $PID_t1) is blocked on B's lock" is_blocked_by "$lock_b" "$PID_t1"
  wait_until 60 "t3 (pid $PID_t3) is blocked on A's lock" is_blocked_by "$lock_a" "$PID_t3"
  LEAN_NUM_THREADS=2 start_lake t2 t2 build r1
  LEAN_NUM_THREADS=2 start_lake t4 t4 build r2
  wait_until 60 "t2 (pid $PID_t2) is blocked on A's lock" is_blocked_by "$lock_a" "$PID_t2"
  wait_until 60 "t4 (pid $PID_t4) is blocked on B's lock" is_blocked_by "$lock_b" "$PID_t4"
  show_locks "$lock_a"
  show_locks "$lock_b"
  expect_held "$lock_a" "$PID_t1"
  expect_held "$lock_b" "$PID_t3"
  # Only t1 and t3 compile
  expect_eq "compiles of A before \$GO" 1 "$(lines "$COUNTER_A")"
  expect_eq "compiles of B before \$GO" 1 "$(lines "$COUNTER_B")"
  test_cmd touch "$GO"
  for t in t1 t2 t3 t4; do
    left=$((120 - (SECONDS - start)))
    wait_lake "$t" $((left > 1 ? left : 1))
    expect_rc "$t" 0
  done
  expect_eq "compiles of A" 1 "$(lines "$COUNTER_A")"
  expect_eq "compiles of B" 1 "$(lines "$COUNTER_B")"
  # t1 waited for `B` and t3 for `A`, and each restored it
  match_text 'for another Lake process to build this input' t1.log
  match_text 'for another Lake process to build this input' t3.log
  match_pat 'Built A( |$)' t1.log
  match_pat 'Built B( |$)' t3.log
  no_match_pat 'Built B( |$)' t1.log
  no_match_pat 'Built A( |$)' t3.log
  test_exp -f "$lock_a"
  test_exp -f "$lock_b"
}

# ys_built ROOT -- ROOT has the `.olean` of each of `P.Y1` to `P.Y4`
ys_built() {
  local i
  for i in 1 2 3 4; do [ -f "$(lib_file "$1" "P.Y$i" olean)" ] || return 1; done
}

case_6() {
  # `LEAN_NUM_THREADS=1`, independent modules: while t2 waits on the lock of `P.X`, it builds
  # `P.Y1` to `P.Y4` (the wait does not hold its one worker)
  case_dir 6
  probe mkp P.X
  local lock
  lock="$(lock_path "$HASH_P_X")"
  mkp t1
  mkp t2
  start_lake t1 t1 build P.X
  wait_until 60 "t1 compiles P.X" counter_is 1 "$COUNTER"
  LEAN_NUM_THREADS=1 start_lake t2 t2 build P.X P.Y1 P.Y2 P.Y3 P.Y4
  wait_until 60 "t2 is blocked on $lock" is_blocked "$lock"
  wait_until 60 "t2 has built P.Y1 to P.Y4" ys_built t2
  expect_blocked "$lock"
  show_locks "$lock"
  test_cmd touch "$GO"
  wait_lake t1 60
  expect_rc t1 0
  wait_lake t2 60
  expect_rc t2 0
  expect_eq "compiles of P.X" 1 "$(lines "$COUNTER")"
  test_exp -f "$lock"
}

# two_compiles ARG... -- t1 and t2 run `lake build ARG... P.X` at once, and each compiles `P.X`
# (the counter reaches 2 before the gate opens); both exit 0
two_compiles() {
  mkp t1
  mkp t2
  start_lake t1 t1 build "$@" P.X
  wait_until 60 "t1 compiles P.X" counter_is 1 "$COUNTER"
  start_lake t2 t2 build "$@" P.X
  wait_until 60 "t2 compiles P.X as well (the second compile)" counter_is 2 "$COUNTER"
  test_cmd touch "$GO"
  wait_lake t1 60
  expect_rc t1 0
  wait_lake t2 60
  expect_rc t2 0
}

case_7a() {
  # No lock with the cache off
  case_dir 7a
  export LAKE_ARTIFACT_CACHE=false
  two_compiles
  test_exp ! -e "$LAKE_CACHE_DIR/locks"
}

case_7b() {
  # No lock with a read-only cache (`LAKE_ARTIFACT_CACHE` unset): a writer filled a cache with
  # `P.Y1` (so that the readers still compile `P.X`), and the readers restore `P.Y1` from it
  case_dir 7b
  mkp w
  LAKE_CACHE_DIR="$CASE_DIR/filled" run_lake w 120 w build P.Y1
  test_cmd mkdir -p "$LAKE_CACHE_DIR"
  test_cmd cp -r "$CASE_DIR/filled/outputs" "$CASE_DIR/filled/artifacts" "$LAKE_CACHE_DIR/"
  unset LAKE_ARTIFACT_CACHE
  two_compiles P.Y1
  no_match_pat 'Built P\.Y1( |$)' t1.log
  no_match_pat 'Built P\.Y1( |$)' t2.log
  test_exp ! -e "$LAKE_CACHE_DIR/locks"
}

case_7c() {
  # A lock that cannot be taken (`locks` is a regular file, which stops root as well) does not
  # fail the build, also with `--wfail`: each process warns once on its standard error
  case_dir 7c
  local t
  test_cmd mkdir -p "$LAKE_CACHE_DIR"
  test_cmd touch "$LAKE_CACHE_DIR/locks"
  two_compiles --wfail
  for t in t1 t2; do
    expect_eq "lines of $t's standard error that say 'could not lock'" 1 \
      "$(grep -c 'could not lock' "$t.err" || true)"
    match_pat "^warning: could not lock '[^']*/locks/[^']*': .*; building without the input lock\$" \
      "$t.err"
  done
  test_exp -f "$LAKE_CACHE_DIR/locks"
}

case_7d() {
  # No lock with `LAKE_NO_BUILD_LOCK=1`
  case_dir 7d
  export LAKE_NO_BUILD_LOCK=1
  two_compiles
  test_exp ! -e "$LAKE_CACHE_DIR/locks"
}

case_8() {
  # `--no-build` takes no lock: while `flock(1)` holds the lock of `P.X`, a fresh root's
  # `lake build --no-build P.X` exits at once with the code for "needs a build"
  case_dir 8
  probe mkp P.X
  local lock
  lock="$(lock_path "$HASH_P_X")"
  hold_lock "$lock"
  mkp t1
  start_lake t1 t1 build --no-build P.X
  wait_lake t1 10
  expect_rc t1 $NO_BUILD_CODE
  expect_held "$lock" "$FLOCK_PID"
  expect_eq "compiles of P.X" 0 "$(lines "$COUNTER")"
}

case_10() {
  # The hit path and the replay take no lock: while `flock(1)` holds the lock of `P.X`, a fresh
  # root restores `P.X` from the cache, and a root whose outputs are up to date by hash, in a
  # cache without them, puts them in the cache; neither compiles
  case_dir 10
  probe mkp P.X
  local lock map
  lock="$(lock_path "$HASH_P_X")"
  map="$(mapping_path "$HASH_P_X")"
  mkp t1
  mkp t2
  mkp t3
  test_cmd touch "$GO"
  run_lake t1 120 t1 build P.X
  test_exp -f "$map"
  hold_lock "$lock"
  start_lake t2 t2 build P.X
  wait_lake t2 30
  expect_rc t2 0
  no_match_pat 'Built P\.X( |$)' t2.log
  same_inode "$(lib_file t1 P.X olean)" "$(lib_file t2 P.X olean)"
  expect_held "$lock" "$FLOCK_PID"
  # t3 compiles `P.X` into a cache of its own, then builds it again with a cache that lacks it
  LAKE_CACHE_DIR="$CASE_DIR/cache3" run_lake t3a 120 t3 build P.X
  expect_eq "compiles of P.X" 2 "$(lines "$COUNTER")"
  export LAKE_CACHE_DIR="$CASE_DIR/cache2"
  lock="$(lock_path "$HASH_P_X")"
  map="$(mapping_path "$HASH_P_X")"
  hold_lock "$lock"
  start_lake t3 t3 build P.X
  wait_lake t3 30
  expect_rc t3 0
  no_match_pat 'Built P\.X( |$)' t3.log
  test_exp -f "$map"
  expect_cached "$(lib_file t3 P.X olean)"
  expect_held "$lock" "$FLOCK_PID"
  expect_eq "compiles of P.X" 2 "$(lines "$COUNTER")"
}

run_input_lock_cases 1 2 3 4 5 6 7a 7b 7c 7d 8 10
