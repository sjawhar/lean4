# The pieces that the tests of the input lock share (`../inputLock`, `../inputLockClaims`). A test
# sources this file after `../common.sh` and `./clean.sh`.
#
# When two Lake processes share one artifact cache (`LAKE_CACHE_DIR`) and both must compile the
# same module with the same input hash, one compiles it while the other waits on an exclusive
# `flock` of `$LAKE_CACHE_DIR/locks/<scope>/<inputHash>`, and then restores the outputs from the
# cache. Each build runs in a workspace root of its own (`t1`, `t2`, ...), because two Lake
# processes in one root serialize on the root's workspace lock where Lake has one.
#
# The tests see the locks in `/proc/locks`, whose lines name the process that took a lock and the
# file by `MAJ:MIN:INODE`:
#   1: FLOCK  ADVISORY  WRITE 1234 08:01:5678 0 EOF       (held by process 1234)
#   1: -> FLOCK  ADVISORY  WRITE 1235 08:01:5678 0 EOF    (process 1235 is blocked on it)
# A test without a readable `/proc/locks` prints `SKIP: no /proc/locks` and exits before it
# sources this file.
#
# Each case is a function `case_<name>` that `run_case` runs in a subshell of its own, in a fresh
# directory (`case_dir`), and that ends with its background processes killed (by exact process
# ID) whether it passed or not. `INPUT_LOCK_CASES` can name the cases to run, e.g.
# `INPUT_LOCK_CASES="1 7c" ./test.sh`.

# This file's directory, and that of the test that sources it
IL_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &> /dev/null && pwd)"
IL_TEST_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[1]}")" &> /dev/null && pwd)"
IL_WORK="$IL_TEST_DIR/work"
mkdir -p "$IL_WORK"

# Background processes of the running case (unreaped children), and other processes that it must
# end (orphans), killed by `teardown`
BG_PIDS=()
EXTRA_PIDS=()

## Packages

# gate_eval COUNTER GATE SECS -- Lean code that appends the process ID of `lean` to COUNTER (so
# that the file has one line per compile), then waits until GATE exists (at most SECS seconds)
gate_eval() {
  cat << EOF
#eval show IO Unit from do
  let h ← IO.FS.Handle.mk "$1" .append
  h.putStrLn (toString (← IO.Process.getPID))
  h.flush
  for _ in [0:$(($3 * 20))] do
    if ← System.FilePath.pathExists "$2" then return
    IO.sleep 50
EOF
}

# mkp ROOT -- package `p` in ROOT, with library `P`: `P.X` records its compile in `$COUNTER`, waits
# for `$GO` and then fails if `$X_FAILS` exists; `P.Hold` records its compile in `$HOLD_COUNTER` and
# waits for `$HOLD`; `P.Y1` to `P.Y4` import nothing. Every root of a case gets the same bytes, so
# the roots share each module's input hash.
mkp() {
  mkdir -p "$1/P"
  printf 'name = "p"\n\n[[lean_lib]]\nname = "P"\n' > "$1/lakefile.toml"
  {
    gate_eval "$COUNTER" "$GO" 60
    cat << EOF
#eval show IO Unit from do
  if ← System.FilePath.pathExists "$X_FAILS" then
    throw (IO.userError "P.X fails on purpose")
def X.v : Nat := 1
EOF
  } > "$1/P/X.lean"
  { gate_eval "$HOLD_COUNTER" "$HOLD" 120; echo 'def Hold.v : Nat := 0'; } > "$1/P/Hold.lean"
  local i
  for i in 1 2 3 4; do echo "def Y$i.v : Nat := $i" > "$1/P/Y$i.lean"; done
}

# mkab ROOT -- package `p` in ROOT, with libraries `LA` (module `A`) and `LB` (module `B`). `A` and
# `B` record their compiles in `$COUNTER_A` and `$COUNTER_B` and wait for `$GO` (at most 120 s).
# The targets `r1` and `r2` reach the modules in opposite orders: `r1` starts the build of `A`,
# then, while that build runs, waits while the environment variable `CROSS_GATE` names a file that
# does not exist (at most 120 s; no environment variable is part of a trace), and only then starts
# the build of `B`; `r2` does the same with `B` first. So a process that builds `r1` requests `B`
# while its compile of `A` still runs. The order comes from the targets: Lake awaits a library's
# `extraDepTargets` while it computes the library's jobs, so a gate there would stop the other
# module too. Every root has the same input hashes.
mkab() {
  mkdir -p "$1"
  cat > "$1/lakefile.lean" << 'EOF'
import Lake
open Lake DSL

package p

/-- Waits while `CROSS_GATE` names a file that does not exist (at most 120 s). -/
def crossGate : FetchM (Job Unit) := Job.async (prio := .dedicated) do
  if let some file := ← IO.getEnv "CROSS_GATE" then
    for _ in [0:2400] do
      if ← System.FilePath.pathExists file then break
      IO.sleep 50

/-- Starts the build of `first`, waits for the gate, then starts the build of `second`. -/
def crossed (first second : Lean.Name) : FetchM (Job Unit) := do
  let some m1 ← findModule? first | error s!"no module {first}"
  let some m2 ← findModule? second | error s!"no module {second}"
  let job1 ← m1.olean.fetch
  discard <| (← crossGate).await
  let job2 ← m2.olean.fetch
  return job1.mix job2

target r1 : Unit := crossed `A `B
target r2 : Unit := crossed `B `A

lean_lib LA where
  roots := #[`A]

lean_lib LB where
  roots := #[`B]
EOF
  { gate_eval "$COUNTER_A" "$GO" 120; echo 'def A.v : Nat := 1'; } > "$1/A.lean"
  { gate_eval "$COUNTER_B" "$GO" 120; echo 'def B.v : Nat := 2'; } > "$1/B.lean"
}

# case_dir NAME -- makes a fresh directory for the case NAME, `cd`s into it, and sets its cache,
# gates and counters
case_dir() {
  CASE_DIR="$IL_WORK/case$1"
  rm -rf "$CASE_DIR"
  mkdir -p "$CASE_DIR"
  cd "$CASE_DIR"
  export LAKE_CACHE_DIR="$CASE_DIR/cache" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
  unset LAKE_NO_BUILD_LOCK CROSS_GATE
  GO="$CASE_DIR/go"
  HOLD="$CASE_DIR/hold"
  X_FAILS="$CASE_DIR/x-fails"
  COUNTER="$CASE_DIR/counter"
  HOLD_COUNTER="$CASE_DIR/counter-hold"
  COUNTER_A="$CASE_DIR/counter-a"
  COUNTER_B="$CASE_DIR/counter-b"
  : > "$CASE_DIR/locks.seen"
}

# probe MAKER MODULE... -- builds each MODULE of the package that MAKER writes, in the scratch
# root `probe` with a cache of its own and every gate open. Sets `SCOPE`, the cache scope of `p`
# (the one directory in the cache's `outputs`), and `HASH_<module>` (`.` replaced by `_`), the
# module's input hash (the `depHash` of its trace, which names its mapping). The probe's compiles
# are then removed from the counters.
probe() {
  local maker=$1 mod hash var
  shift
  "$maker" "$CASE_DIR/probe"
  touch "$GO"
  local targets=()
  for mod in "$@"; do targets+=("+$mod"); done
  LAKE_CACHE_DIR="$CASE_DIR/probe-cache" LAKE_ARTIFACT_CACHE=true \
    run_lake probe 120 "$CASE_DIR/probe" build "${targets[@]}"
  rm -f "$GO" "$COUNTER" "$HOLD_COUNTER" "$COUNTER_A" "$COUNTER_B"
  SCOPE="$(ls "$CASE_DIR/probe-cache/outputs")"
  expect_eq "number of cache scopes of the probe" 1 "$(echo "$SCOPE" | wc -w | tr -d ' ')"
  for mod in "$@"; do
    hash="$(jq -r .depHash "$(lib_file "$CASE_DIR/probe" "$mod" trace)")"
    test_exp -f "$CASE_DIR/probe-cache/outputs/$SCOPE/$hash.json"
    var="HASH_${mod//./_}"
    printf -v "$var" %s "$hash"
    echo "input hash of $mod: $hash (scope $SCOPE)"
  done
}

# lib_file ROOT MODULE EXT -- the path of MODULE's EXT file in ROOT's build directory
lib_file() { echo "$1/.lake/build/lib/lean/${2//.//}.$3"; }
# lock_path HASH -- the input lock file of HASH in the case's cache
lock_path() { echo "$LAKE_CACHE_DIR/locks/$SCOPE/$1"; }
# mapping_path HASH -- the input-to-output mapping of HASH in the case's cache
mapping_path() { echo "$LAKE_CACHE_DIR/outputs/$SCOPE/$1.json"; }

## Locks

# lock_lines FILE -- the lines of `/proc/locks` whose inode is FILE's (none if FILE is missing)
lock_lines() {
  [ -e "$1" ] || return 0
  local ino
  ino="$(stat -c %i -- "$1")" || return 0
  awk -v ino="$ino" '{
    t = ($2 == "->") ? 3 : 2
    if (split($(t + 4), d, ":") == 3 && d[3] == ino) print
  }' /proc/locks
}
# is_blocked FILE -- a process is blocked on the lock of FILE
is_blocked() { lock_lines "$1" | awk '$2 == "->" { f = 1 } END { exit !f }'; }
# is_blocked_by FILE PID -- process PID is blocked on the lock of FILE
is_blocked_by() { lock_lines "$1" | awk -v pid="$2" '$2 == "->" && $6 == pid { f = 1 } END { exit !f }'; }
# is_held_by FILE PID -- process PID holds the lock of FILE
is_held_by() { lock_lines "$1" | awk -v pid="$2" '$2 != "->" && $5 == pid { f = 1 } END { exit !f }'; }
# has_holder FILE -- some process holds the lock of FILE
has_holder() { lock_lines "$1" | awk '$2 != "->" { f = 1 } END { exit !f }'; }
# no_holder FILE -- FILE exists and no process holds its lock
no_holder() { [ -e "$1" ] && ! has_holder "$1"; }

# show_locks FILE -- logs FILE's device and inode, and its lines of `/proc/locks`
show_locks() {
  note_locks
  if [ -e "$1" ]; then
    echo "lock file $1: device $(stat -c %D -- "$1") (hex), inode $(stat -c %i -- "$1")"
    lock_lines "$1" | sed 's/^/  \/proc\/locks: /'
  else
    echo "lock file $1: missing"
  fi
}

# note_locks -- records the lock files (the files in a `locks` directory) that the caches of the
# case have now (see `check_locks_kept`)
note_locks() {
  find "$CASE_DIR" -type f -path '*/locks/*' >> "$CASE_DIR/locks.seen" 2> /dev/null || true
}
# check_locks_kept -- every lock file that `note_locks` recorded still exists: no lock file was
# deleted
check_locks_kept() {
  note_locks
  local file n=0
  while read -r file; do
    if [ ! -e "$file" ]; then
      echo "FAILURE: the lock file $file was deleted"
      return 1
    fi
    n=$((n + 1))
  done < <(sort -u "$CASE_DIR/locks.seen")
  echo "no lock file was deleted ($n seen)"
}

# hold_lock FILE -- holds the lock of FILE with `flock(1)` in the background until the case ends
# (or `stop_tree $FLOCK_PID`); sets `FLOCK_PID`, the process that holds it
hold_lock() {
  local ready="$CASE_DIR/flock.ready"
  rm -f "$ready"
  mkdir -p "$(dirname -- "$1")"
  echo "\$ flock -o $1 sleep 600 &"
  flock -o "$1" sh -c ': > "$1"; exec sleep 600' sh "$ready" &
  FLOCK_PID=$!
  BG_PIDS+=("$FLOCK_PID")
  wait_until 10 "flock(1) (pid $FLOCK_PID) holds $1" test -e "$ready"
  note_locks
}

## Processes

# is_running PID -- PID is a process that has not exited (a zombie has)
is_running() {
  local s
  s="$(ps -o stat= -p "$1" 2> /dev/null)" || return 1
  [ -n "$s" ] && [ "${s:0:1}" != Z ]
}
not_running() { ! is_running "$1"; }

# descendants PID -- the processes below PID
descendants() {
  local c
  for c in $(pgrep -P "$1" 2> /dev/null || true); do
    echo "$c"
    descendants "$c"
  done
}

# start_lake NAME ROOT ARG... -- runs `lake -v -d ROOT ARG...` in the background, with the
# caller's environment (and `LD_PRELOAD=$LAKE_PRELOAD` if that is set), its standard output in
# `NAME.out` and its standard error in `NAME.err`. Sets `PID_NAME`, the process ID of `lake`.
start_lake() {
  local name=$1 root=$2 pid
  shift 2
  grep -qxF -- "$name" "$CASE_DIR/lakes.started" 2> /dev/null || echo "$name" >> "$CASE_DIR/lakes.started"
  echo "\$ lake -v -d $root $* &   # $name"
  env ${LAKE_PRELOAD:+"LD_PRELOAD=$LAKE_PRELOAD"} "$LAKE" -v -d "$root" "$@" \
    > "$CASE_DIR/$name.out" 2> "$CASE_DIR/$name.err" &
  pid=$!
  BG_PIDS+=("$pid")
  printf -v "PID_$name" %s "$pid"
  echo "  $name is process $pid"
}

# show_lake NAME -- prints what the build NAME wrote, and puts both streams in `NAME.log`
show_lake() {
  cat "$CASE_DIR/$1.out" "$CASE_DIR/$1.err" > "$CASE_DIR/$1.log"
  sed "s/^/  $1| /" "$CASE_DIR/$1.log"
}

# forget_pid PID -- PID was reaped, so `teardown` must not kill it (its ID may be reused)
forget_pid() {
  local p kept=()
  for p in "${BG_PIDS[@]}"; do [ "$p" = "$1" ] || kept+=("$p"); done
  BG_PIDS=("${kept[@]}")
}

# wait_lake NAME SECS -- waits (at most SECS seconds) until the build NAME has exited, prints its
# output and sets `RC_NAME`, its exit code
wait_lake() {
  local name=$1 secs=$2 var="PID_$1" rc=0
  local pid=${!var}
  note_locks
  if ! wait_until "$secs" "$name (pid $pid) has exited" not_running "$pid"; then
    show_lake "$name"
    return 1
  fi
  wait "$pid" || rc=$?
  forget_pid "$pid"
  printf -v "RC_$name" %s "$rc"
  show_lake "$name"
  echo "  $name exited with code $rc"
}

# expect_rc NAME CODE -- the build NAME exited with CODE (`!0` for any other code than 0)
expect_rc() {
  local var="RC_$1"
  local rc=${!var}
  if [ "$2" = '!0' ]; then
    [ "$rc" != 0 ] && return 0
    echo "FAILURE: $1 succeeded, expected it to fail"
  else
    [ "$rc" = "$2" ] && return 0
    echo "FAILURE: $1 exited with code $rc, expected $2"
  fi
  return 1
}

# run_lake NAME SECS ROOT ARG... -- runs `lake -v -d ROOT ARG...` as `start_lake` does, waits
# (at most SECS seconds) until it has exited, and checks that it exited with code 0
run_lake() {
  local name=$1 secs=$2
  shift 2
  start_lake "$name" "$@"
  wait_lake "$name" "$secs"
  expect_rc "$name" 0
}

# stop_tree PID -- kills (`-9`) PID and every process below it, and reaps PID if it is a child
stop_tree() {
  local p all
  all="$(descendants "$1") $1"
  for p in $all; do kill -9 "$p" 2> /dev/null || true; done
  wait "$1" 2> /dev/null || true
  forget_pid "$1"
}

# extra_pids -- more processes for `teardown` to kill; a test can redefine it
extra_pids() { :; }

# teardown -- kills (`-9`, by exact process ID) the case's background processes, every process
# below them, and its other processes that still name the case's directory
teardown() {
  local p all=()
  for p in "${BG_PIDS[@]}"; do
    all+=($(descendants "$p") "$p")
  done
  for p in "${EXTRA_PIDS[@]}" $(extra_pids); do
    if grep -qaF "$CASE_DIR" "/proc/$p/cmdline" "/proc/$p/environ" 2> /dev/null; then
      all+=($(descendants "$p") "$p")
    fi
  done
  if [ ${#all[@]} -gt 0 ]; then
    echo "teardown: killing ${all[*]}"
    for p in "${all[@]}"; do kill -9 "$p" 2> /dev/null || true; done
  fi
  for p in "${BG_PIDS[@]}"; do wait "$p" 2> /dev/null || true; done
  BG_PIDS=()
}

## Checks

# wait_until SECS WHAT CMD... -- runs CMD every 0.1 s until it succeeds; fails if SECS seconds
# pass first
wait_until() {
  local secs=$1 what=$2 start=$SECONDS
  shift 2
  echo "? wait (at most $secs s) until $what"
  while true; do
    if "$@"; then
      echo "  after $((SECONDS - start)) s: $what"
      return 0
    fi
    if [ $((SECONDS - start)) -ge "$secs" ]; then
      echo "FAILURE: not $what after $secs s"
      return 1
    fi
    sleep 0.1
  done
}

# expect_eq WHAT EXPECTED ACTUAL
expect_eq() {
  echo "? $1: expected $2, got $3"
  [ "$2" = "$3" ] && return 0
  echo "FAILURE: $1 is $3, expected $2"
  return 1
}

# lines FILE -- the number of lines in FILE (0 if it is missing)
lines() {
  if [ -f "$1" ]; then wc -l < "$1" | tr -d ' '; else echo 0; fi
}
# counter_is N FILE -- FILE has N lines
counter_is() { [ "$(lines "$2")" = "$1" ]; }

# expect_running WHAT PID
expect_running() {
  echo "? $1 (pid $2) is running"
  is_running "$2" && return 0
  echo "FAILURE: $1 (pid $2) is not running"
  return 1
}

# same_inode A B -- A and B are one file (hard links of one inode)
same_inode() {
  echo "? $1 and $2 are one file"
  test_exp "$1" -ef "$2" && return 0
  echo "FAILURE: $1 and $2 are different files"
  return 1
}

# expect_blocked FILE -- a process is blocked on the lock of FILE now
expect_blocked() {
  echo "? a process is blocked on $1"
  is_blocked "$1" && return 0
  show_locks "$1"
  echo "FAILURE: no process is blocked on $1"
  return 1
}

# expect_held FILE PID -- process PID holds the lock of FILE now
expect_held() {
  echo "? process $2 holds the lock of $1"
  is_held_by "$1" "$2" && return 0
  show_locks "$1"
  echo "FAILURE: process $2 does not hold the lock of $1"
  return 1
}

# expect_cached FILE -- the cache's `artifacts` holds a file with the bytes of FILE
expect_cached() {
  local art
  echo "? the cache holds an artifact with the bytes of $1"
  while read -r art; do
    if cmp -s -- "$art" "$1"; then
      echo "  $art"
      return 0
    fi
  done < <(find "$LAKE_CACHE_DIR/artifacts" -type f 2> /dev/null)
  echo "FAILURE: no artifact in $LAKE_CACHE_DIR/artifacts has the bytes of $1"
  return 1
}

## Cases

FAILED_CASES=()

# il_err LINE COMMAND -- reports where a case stopped
il_err() {
  local i
  echo "FAILURE: stopped at line $1 of ${BASH_SOURCE[1]##*/} (the last command: \`$2\`)"
  for ((i = 1; i < ${#FUNCNAME[@]} - 1; i++)); do
    echo "  in ${FUNCNAME[i]}, called at ${BASH_SOURCE[i + 1]##*/}:${BASH_LINENO[i]}"
  done
}

# dump_lakes DIR -- prints the last 40 lines of the standard output and the standard error of
# each build that `start_lake` started in the case directory DIR, in the order they started
dump_lakes() {
  local name stream
  [ -f "$1/lakes.started" ] || return 0
  while read -r name; do
    for stream in out err; do
      echo "--- last 40 lines of $name.$stream ($(lines "$1/$name.$stream") lines)"
      tail -n 40 "$1/$name.$stream" 2> /dev/null | sed "s/^/  $name.$stream| /" || true
    done
  done < "$1/lakes.started"
}

# run_case NAME -- runs `case_NAME` in a subshell, which stops at the first failing command and
# tears its processes down on exit, then checks that no lock file was deleted. Prints
# `CASE NAME: PASS`, or the tail of each build's log and `CASE NAME: FAIL`.
run_case() {
  local name=$1 rc=0
  echo
  echo "# CASE $name"
  set +e
  (
    set -eE
    trap 'il_err $LINENO "$BASH_COMMAND"' ERR
    trap teardown EXIT
    "case_$name"
    check_locks_kept
  )
  rc=$?
  set -e
  if [ $rc = 0 ]; then
    echo "CASE $name: PASS"
  else
    dump_lakes "$IL_WORK/case$name"
    echo "CASE $name: FAIL"
    FAILED_CASES+=("$name")
  fi
}

# run_input_lock_cases NAME... -- runs the cases named by `INPUT_LOCK_CASES`, or else NAME...,
# and exits with code 1 if any failed
run_input_lock_cases() {
  local c
  for c in ${INPUT_LOCK_CASES:-$*}; do run_case "$c"; done
  echo
  if [ ${#FAILED_CASES[@]} -gt 0 ]; then
    echo "FAILED CASES: ${FAILED_CASES[*]}"
    exit 1
  fi
  echo "ALL CASES PASSED: ${INPUT_LOCK_CASES:-$*}"
}
