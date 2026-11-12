#!/usr/bin/env bash
# The tests see the locks in `/proc/locks`, which Windows, macOS and gVisor sandboxes lack
if ! { cat /proc/locks > /dev/null; } 2> /dev/null; then
  echo 'SKIP: no /proc/locks'
  exit 0
fi
source ../common.sh

./clean.sh

# Test that a build which waits on the input lock (`../inputLock`) keeps what it logged before the
# wait. Outputs of a tree that no longer match its trace are quarantined with a warning, and the
# build then waits for another Lake process that compiles the same input. When it restores that
# process's outputs, the warning stays in its log, where `--wfail` sees it. Not every Lake checks
# the outputs against the trace: where a changed output is cached without a warning, the test is
# skipped.

source ../inputLock/lib.sh

# tamper ROOT -- replaces ROOT's `.olean` of `P.X` with a copy that has one more byte
tamper() {
  local f
  f="$(lib_file "$1" P.X olean)"
  cp "$f" "$f.new"
  chmod u+w "$f.new"
  printf 'x' >> "$f.new"
  mv "$f.new" "$f"
}

# A Lake that checks the outputs warns when a tree's changed `.olean` is cached again
case_dir check
mkp t3
touch "$GO"
LAKE_CACHE_DIR="$CASE_DIR/cache3" "$LAKE" -d t3 build P.X > /dev/null 2>&1
tamper t3
if ! LAKE_CACHE_DIR="$CASE_DIR/cache4" "$LAKE" -d t3 build P.X 2>&1 | grep -qF 'does not match its trace'; then
  echo 'SKIP: no check of the outputs against the trace in this Lake'
  exit 0
fi
cd "$IL_TEST_DIR"

case_keep() {
  # t2's `.olean` of `P.X` no longer matches its trace. t2 quarantines it with a warning, waits on
  # the lock while t1 compiles `P.X`, then restores t1's outputs and keeps the warning
  case_dir keep
  probe mkp P.X
  local lock
  lock="$(lock_path "$HASH_P_X")"
  mkp t1
  mkp t2
  test_cmd touch "$GO"
  LAKE_CACHE_DIR="$CASE_DIR/cache2" run_lake t2a 120 t2 build P.X
  rm -f "$GO"
  expect_eq "compiles of P.X after t2's first build" 1 "$(lines "$COUNTER")"
  tamper t2
  start_lake t1 t1 build P.X
  wait_until 60 "t1 compiles P.X" counter_is 2 "$COUNTER"
  start_lake t2 t2 build P.X
  wait_until 60 "t2 is blocked on $lock" is_blocked "$lock"
  test_cmd touch "$GO"
  wait_lake t1 60
  expect_rc t1 0
  wait_lake t2 60
  expect_rc t2 0
  expect_eq "compiles of P.X" 2 "$(lines "$COUNTER")"
  no_match_pat 'Built P\.X( |$)' t2.log
  match_text 'for another Lake process to build this input' t2.log
  match_text 'does not match its trace' t2.log
  same_inode "$(lib_file t1 P.X olean)" "$(lib_file t2 P.X olean)"
}

run_input_lock_cases keep
