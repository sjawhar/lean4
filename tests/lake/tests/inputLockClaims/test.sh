#!/usr/bin/env bash
# The tests see the locks in `/proc/locks`, which Windows, macOS and gVisor sandboxes lack
if ! { cat /proc/locks > /dev/null; } 2> /dev/null; then
  echo 'SKIP: no /proc/locks'
  exit 0
fi
source ../common.sh

./clean.sh

# Test the input lock of `../inputLock` with claims in the shared remote cache (case 9 of the
# input-lock tests): a build takes the input lock before it claims the input, holds both while it
# compiles, and lets go of the lock while it waits for another machine's claim, so that the
# waits for the two never nest. The fake remote cache and its helpers are in
# `../remoteCache/lib.sh`, which a Lake without claims does not have.

if [ ! -f ../remoteCache/lib.sh ]; then
  echo 'SKIP: no remote cache claims in this Lake'
  exit 0
fi

source ../inputLock/lib.sh
source ../remoteCache/lib.sh

# The remote scope of package `p`, and its claims in the remote cache
CLAIM_SCOPE="$(remote_scope p)"
CLAIMS="$STORE_DIR/a0/claim/$CLAIM_SCOPE"

# claims_on CMD... -- runs CMD as a machine whose builds claim every input that they compile
# (`LAKE_CLAIM_SLOTS=0`), with the queue on, against the `bearer` service with a token
claims_on() {
  LAKE_CLAIM_SLOTS=0 LAKE_REMOTE_CACHE=bearer LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" \
    LAKE_REMOTE_CACHE_QUEUE=true "$@"
}

# put_claim HASH STATE -- creates the claim of HASH as another machine does, which nothing
# refreshes (its holder is another host's, so it is never taken for a gone process of this one)
put_claim() {
  printf '{"holder":"other:1","state":"%s","at":%s}' "$2" "$(date +%s)" > "$CASE_DIR/claim.json"
  test_cmd_eq 200 curl -s -o /dev/null -w '%{http_code}' -X PUT -T "$CASE_DIR/claim.json" \
    -H 'x-goog-if-generation-match: 0' -H 'Authorization: Bearer test-token-1' \
    "$URL/bearer/a0/claim/$CLAIM_SCOPE/$1"
}

# claim_held_by HASH PID -- the claim of HASH says `building`, held by process PID of this host
claim_held_by() {
  local claim="$CLAIMS/$1"
  [ -f "$claim" ] &&
    [ "$(jq -r .state "$claim" 2> /dev/null)" = building ] &&
    [ "$(jq -r .holder "$claim" 2> /dev/null)" = "$(hostname):$2" ]
}

# held_together HASH FILE PID -- process PID holds the claim of HASH and the lock of FILE
held_together() { claim_held_by "$1" "$3" && is_held_by "$2" "$3"; }

# push_done CACHE -- the queue of CACHE is empty and no push runs on it
push_done() {
  local queued=0
  if [ -f "$1/push.jsonl" ]; then queued="$(grep -c . "$1/push.jsonl" || true)"; fi
  [ "$queued" = 0 ] && flock -n "$1/push.lock" true
}

# The detached pushes that the case's builds started, for `teardown`
extra_pids() {
  sed -n 's/^lake cache push: started, pid \([0-9]*\).*/\1/p' \
    "$LAKE_CACHE_DIR/push.log" "$CASE_DIR/m2-cache/push.log" 2> /dev/null || true
}

case_9a() {
  # The claim of `P.X` is another machine's: t1 takes the input lock, finds the claim taken, and
  # holds no lock while it waits for the claim. Once the other machine publishes `P.X`, t1
  # restores it from the remote cache.
  case_dir 9a
  probe mkp P.X
  local lock
  lock="$(lock_path "$HASH_P_X")"
  mkp m2
  mkp t1
  # The other machine compiles `P.X` without claims: its build queues the outputs and does not
  # push them
  test_cmd touch "$GO"
  LAKE_REMOTE_CACHE_CLAIMS=false LAKE_CACHE_DIR="$CASE_DIR/m2-cache" \
    claims_on run_lake m2 120 m2 build P.X
  expect_eq "compiles of P.X" 1 "$(lines "$COUNTER")"
  test_exp ! -e "$CASE_DIR/m2-cache/push.log"
  put_claim "$HASH_P_X" building
  : > "$SERVER_LOG"
  claims_on start_lake t1 t1 build P.X
  wait_until 120 "t1 has read the claim of P.X" \
    grep -qF "/$HASH_P_X -> 200 auth=bearer gen=-" "$SERVER_LOG"
  # t1 took the input lock before it claimed the input
  test_exp -f "$lock"
  wait_until 10 "no process holds $lock while t1 waits for the claim" no_holder "$lock"
  show_locks "$lock"
  expect_running "the Lake of t1" "$PID_t1"
  # The other machine publishes `P.X`
  LAKE_CACHE_DIR="$CASE_DIR/m2-cache" claims_on test_cmd timeout 120 "$LAKE" cache push
  wait_lake t1 60
  expect_rc t1 0
  no_match_pat 'Built P\.X( |$)' t1.log
  expect_eq "compiles of P.X" 1 "$(lines "$COUNTER")"
  test_cmd cmp "$(lib_file m2 P.X olean)" "$(lib_file t1 P.X olean)"
  test_exp -f "$lock"
}

case_9b() {
  # The claim of `P.X` is free: t1 holds the input lock and the claim at once while it compiles
  case_dir 9b
  probe mkp P.X
  local lock
  lock="$(lock_path "$HASH_P_X")"
  mkp t1
  claims_on start_lake t1 t1 build P.X
  wait_until 60 "t1 compiles P.X" counter_is 1 "$COUNTER"
  wait_until 60 "t1 (pid $PID_t1) holds the claim of P.X and $lock" \
    held_together "$HASH_P_X" "$lock" "$PID_t1"
  test_cmd jq . "$CLAIMS/$HASH_P_X"
  show_locks "$lock"
  test_cmd touch "$GO"
  wait_lake t1 120
  expect_rc t1 0
  match_pat 'Built P\.X( |$)' t1.log
  wait_until 120 "the push of t1's cache has ended" push_done "$LAKE_CACHE_DIR"
  test_exp -f "$lock"
}

run_input_lock_cases 9a 9b
