#!/usr/bin/env bash
# Copyright (c) 2026 Lean FRO. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.
source ../common.sh

./clean.sh

# Test claims in the shared remote cache: before a build with the write-back queue compiles a target
# that the remote cache lacks, it claims the target, so that two machines that build the same
# targets at once compile each one once. The setup and the shared helpers are in
# `../remoteCache/lib.sh`.

source ../remoteCache/lib.sh

# Machines A and B build the package in `claim/`, each in a tree at its own path with a cache of
# its own, against the same remote cache (by default the `bearer` service, with a token).
TREE_A="$WORK_DIR/claim-a"
TREE_B="$WORK_DIR/claim-b"
CACHE_A="$WORK_DIR/claim-cache-a"
CACHE_B="$WORK_DIR/claim-cache-b"
LOG_A="$WORK_DIR/build-a.log"
LOG_B="$WORK_DIR/build-b.log"
CLAIM_SCOPE="$(remote_scope claim)"
# The objects of the package in the remote cache, and its claims
OBJECTS="$STORE_DIR/a0/$CLAIM_SCOPE"
CLAIMS="$STORE_DIR/a0/claim/$CLAIM_SCOPE"
# The modules of `Claim` (`Claim`, `Claim.A`, `Claim.B` and `Claim.C`)
CLAIM_MODULES=4
# What a fresh build of `Claim claimexe` compiles: those modules, `Main`, its object file and the
# executable
CLAIM_COMPILES=7

claim_check() { "$PYTHON" "$TEST_DIR/claim_check.py" "$@"; }
push_check() { "$PYTHON" "$TEST_DIR/../remoteCachePush/push_check.py" "$@"; }

# One machine's build, in a session of its own (so that a case can kill all of it):
# `build.sh <tree> <cache> <log> <target>...`. The other settings come from the environment.
# It records its process ID in `<log>.pid`.
cat > "$WORK_DIR/build.sh" << 'EOF'
tree=$1; cache=$2; log=$3; shift 3
echo $$ > "$log.pid"
LAKE_CACHE_DIR="$cache" exec "$LAKE" -v --dir "$tree" build "$@" > "$log" 2>&1
EOF
# As `tools/lbq.sh` does: holds a lock on descriptor 9 for the command it runs, and also keeps a
# descriptor above 9 open, which a shell can only close by number
cat > "$WORK_DIR/lbq.sh" << 'EOF'
lock=$1; shift
exec 9> "$lock"
flock 9
exec 12> "$lock.extra"
"$@"
EOF
export LAKE

# Kills what earlier cases left running: each machine's build session, and the detached pushes
# that its builds started (which run in sessions of their own). A process ID is killed only while
# it still names this test's work directory, so that a reused ID is left alone.
kill_machines() {
  local f pid
  for f in "$LOG_A.pid" "$LOG_B.pid"; do
    if [ -f "$f" ]; then
      pid="$(cat "$f")"
      if grep -qaF "$WORK_DIR" "/proc/$pid/cmdline" 2> /dev/null; then
        kill -KILL -- -"$pid" 2> /dev/null || true
      fi
    fi
  done
  for f in "$CACHE_A/push.log" "$CACHE_B/push.log"; do
    if [ -f "$f" ]; then
      for pid in $(sed -n 's/^lake cache push: started, pid \([0-9]*\).*/\1/p' "$f"); do
        if grep -qaF "$WORK_DIR" "/proc/$pid/environ" 2> /dev/null; then
          kill -KILL "$pid" 2> /dev/null || true
        fi
      done
    fi
  done
}
trap 'kill_machines; kill $SERVER_PID $SERVER2_PID 2> /dev/null' EXIT
# Starts both machines afresh, and removes what earlier cases put in the remote cache
claim_fresh() {
  kill_machines
  test_cmd rm -rf "$TREE_A" "$TREE_B" "$CACHE_A" "$CACHE_B" "$OBJECTS" "$CLAIMS" \
    "$LOG_A" "$LOG_B" "$LOG_A.pid" "$LOG_B.pid"
  test_cmd cp -r "$TEST_DIR/claim" "$TREE_A"
  test_cmd cp -r "$TEST_DIR/claim" "$TREE_B"
  test_cmd chmod -R u+w "$TREE_A" "$TREE_B"
}
# Runs a command as a machine with the queue on (and so, by default, claims): the remote cache
# `$CLAIM_SERVICE` (by default `bearer`), with a token
on_m() {
  LAKE_REMOTE_CACHE="${CLAIM_SERVICE:-bearer}" LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" \
    LAKE_REMOTE_CACHE_QUEUE=true "$@"
}
# Starts a machine's build in the background: `start_build <tree> <cache> <log> <target>...`
start_build() { on_m setsid bash "$WORK_DIR/build.sh" "$@" & }
# Runs a machine's build to its end and checks its exit code: `run_build <rc> <tree> <cache> <log> <target>...`
run_build() {
  local rc=$1 got=0
  shift
  echo "\$ build $*"
  on_m bash "$WORK_DIR/build.sh" "$@" || got=$?
  cat "$3"
  if [ "$got" != "$rc" ]; then
    echo "FAILURE: the build exited with $got, expected $rc"
    return 1
  fi
}
# Waits for a machine's background build and checks that it succeeded
wait_build() {
  local got=0
  wait "$1" || got=$?
  cat "$2"
  if [ "$got" != 0 ]; then
    echo "FAILURE: the build in $2 exited with $got"
    return 1
  fi
}
# Waits until the queue of a machine's cache is empty and no push runs on it: the detached
# `lake cache push` that its build started (if it queued anything) is done
wait_push() {
  local i
  echo "\$ wait_push $1"
  for i in $(seq 1 1200); do
    if [ "$(queued_lines "$1")" = 0 ] && flock -n "$1/push.lock" true 2> /dev/null; then
      return 0
    fi
    sleep 0.1
  done
  echo "FAILURE: the queue of $1 was not pushed after 120 s"
  return 1
}
# The input hashes that a machine's queue holds for a target
inputs() { push_check inputs "$1/push.jsonl" "$2"; }
# The number of lines in a machine's queue
queued_lines() {
  if [ -f "$1/push.jsonl" ]; then grep -c . "$1/push.jsonl" || true; else echo 0; fi
}
# Creates a claim as another machine does, which nothing refreshes: `put_claim <inputHash> <state>`
put_claim() {
  printf '{"holder":"other:1","state":"%s","at":%s}' "$2" "$(date +%s)" > "$WORK_DIR/claim.json"
  test_cmd_eq 200 curl -s -o /dev/null -w '%{http_code}' -X PUT -T "$WORK_DIR/claim.json" \
    -H 'x-goog-if-generation-match: 0' -H 'Authorization: Bearer test-token-1' \
    "$URL/bearer/a0/claim/$CLAIM_SCOPE/$1"
}
# Checks that each mapping in the remote cache has a claim in state `done`
claims_done() {
  local mapping n=0
  for mapping in "$OBJECTS"/in/*.json; do
    test_cmd claim_check state "$CLAIMS/$(basename "$mapping" .json)" done
    n=$((n + 1))
  done
  test_cmd_eq "$1" echo "$n"
}
# The number of targets that a machine's build compiled or restored from the remote cache
machine_targets() {
  echo $(( $(claim_check built-by "$1") + $(count ' Fetched \| Unpacked ' "$1") ))
}

case_claim_two_builds() {
  # Two machines that start the same cold build at once compile each target once: for each, one
  # wins its claim and compiles it, and the other waits for its mapping and restores it.
  claim_fresh
  : > "$SERVER_LOG"
  start_build "$TREE_A" "$CACHE_A" "$LOG_A" Claim claimexe
  PID_A=$!
  start_build "$TREE_B" "$CACHE_B" "$LOG_B" Claim claimexe
  PID_B=$!
  wait_build $PID_A "$LOG_A"
  wait_build $PID_B "$LOG_B"
  test_cmd claim_check once --expect $CLAIM_COMPILES "$LOG_A" "$LOG_B"
  # Every claim was created once, with the token, and each machine restored from the remote
  # cache each target that it did not compile
  test_cmd_eq $CLAIM_COMPILES count "^PUT /bearer/a0/claim/.* -> 200 auth=bearer gen=0$" "$SERVER_LOG"
  test_cmd_eq $CLAIM_COMPILES machine_targets "$LOG_A"
  test_cmd_eq $CLAIM_COMPILES machine_targets "$LOG_B"
  test_cmd_out 'Hello, claim' "$TREE_A/.lake/build/bin/claimexe"
  test_cmd_out 'Hello, claim' "$TREE_B/.lake/build/bin/claimexe"
  wait_push "$CACHE_A"
  wait_push "$CACHE_B"
  claims_done $CLAIM_COMPILES
}

case_claim_order() {
  # Two builds that reach shared modules in different orders do not deadlock: a machine holds a
  # claim only while it compiles, so each compiles what it claimed and restores the rest.
  claim_fresh
  start_build "$TREE_A" "$CACHE_A" "$LOG_A" Claim.A Claim.B Claim.C
  PID_A=$!
  start_build "$TREE_B" "$CACHE_B" "$LOG_B" Claim.B Claim.A Claim.C
  PID_B=$!
  wait_build $PID_A "$LOG_A"
  wait_build $PID_B "$LOG_B"
  test_cmd claim_check once --expect 3 "$LOG_A" "$LOG_B"
}

case_claim_failed() {
  # A machine whose compile fails marks its claim `failed`, so the machine that waits for it
  # compiles the target at once instead of after the takeover time.
  claim_fresh
  LAKE_TEST_CLAIM_FAIL=1 run_build 1 "$TREE_A" "$CACHE_A" "$LOG_A" Claim.Flaky
  match_text 'LAKE_TEST_CLAIM_FAIL is set' "$LOG_A"
  FLAKY="$(ls "$CLAIMS")"
  test_cmd claim_check state "$CLAIMS/$FLAKY" failed
  : > "$SERVER_LOG"
  START=$(date +%s)
  run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" Claim.Flaky
  match_text 'Built Claim.Flaky' "$LOG_B"
  test_exp $(( $(date +%s) - START )) -lt 60
  # B took the claim over from the generation that held `failed`
  test_cmd_eq 1 count "^PUT /bearer/a0/claim/.*/$FLAKY -> 200 auth=bearer gen=[1-9]" "$SERVER_LOG"
  wait_push "$CACHE_B"
  claims_done 1
}

case_claim_takeover() {
  # A machine that is killed while it compiles stops refreshing its claim. Another machine waits
  # for it until the claim has not changed for the takeover time, then takes it over and compiles.
  # A live holder refreshes its claim within that time, so a machine that only waits a little
  # longer than the takeover time does not take over while the holder still compiles.
  claim_fresh
  LAKE_CLAIM_TAKEOVER_SECS=5 LAKE_TEST_CLAIM_SLEEP=600000 \
    start_build "$TREE_A" "$CACHE_A" "$LOG_A" Claim.Slow
  PID_A=$!
  # A claims `Claim.Slow`, its only target
  test_cmd claim_check wait-entries "$CLAIMS" 1 --timeout 60
  SLOW="$(ls "$CLAIMS")"
  # Alive: A refreshes its claim (each refresh is a new generation) while B waits
  : > "$SERVER_LOG"
  LAKE_CLAIM_TAKEOVER_SECS=5 start_build "$TREE_B" "$CACHE_B" "$LOG_B" Claim.Slow
  PID_B=$!
  sleep 12
  test_exp -d /proc/$PID_B
  no_match_text 'Built Claim.Slow' "$LOG_B"
  test_exp "$(count "^PUT /bearer/a0/claim/.*/$SLOW -> 200 auth=bearer gen=[1-9]" "$SERVER_LOG")" -ge 3
  # Killed: A's claim goes stale, and B takes it over
  test_cmd kill -KILL -- -"$(cat "$LOG_A.pid")"
  wait $PID_A || true
  KILLED=$(date +%s)
  wait_build $PID_B "$LOG_B"
  match_text 'Built Claim.Slow' "$LOG_B"
  # A refreshed at most a second before it was killed; the claim's times have whole seconds
  test_exp $(( $(date +%s) - KILLED )) -ge 3
  test_cmd_eq 1 claim_check built-by "$LOG_B"
  wait_push "$CACHE_B"
  claims_done 1
}

case_claim_detached_push() {
  # After a machine compiles, it queues the outputs with the claim's generation and starts one
  # detached `lake cache push` (not one per compiled target), when no push runs. The build does
  # not wait for the push: it exits within a few seconds of its last compile while the push
  # still runs (here each upload of an artifact or a mapping takes 4 seconds). The push holds
  # none of the build's descriptors (as an `lbq.sh` lock), only its log, and it marks each
  # claim `done` after the mapping is in the remote cache.
  claim_fresh
  : > "$SERVER_LOG"
  START=$(date +%s)
  CLAIM_SERVICE=slowobj on_m bash "$WORK_DIR/lbq.sh" "$WORK_DIR/tree.lock" \
    bash "$WORK_DIR/build.sh" "$TREE_A" "$CACHE_A" "$LOG_A" Claim claimexe
  cat "$LOG_A"
  test_exp $(( $(date +%s) - START )) -lt 20
  test_cmd_eq $CLAIM_COMPILES claim_check built-by "$LOG_A"
  # The push still runs, in a session of its own, and has not uploaded a mapping yet. The queue
  # lines carry the claims' generations.
  test_exp ! -e "$CACHE_A/remote-status-push.json"
  test_cmd_eq $CLAIM_COMPILES count '"claimGeneration":"[1-9][0-9]*"' "$CACHE_A/push.jsonl"
  test_cmd_eq 1 count '^lake cache push: started' "$CACHE_A/push.log"
  PUSH_PID="$(sed -n 's/^lake cache push: started, pid \([0-9]*\).*/\1/p' "$CACHE_A/push.log")"
  test_exp -d /proc/$PUSH_PID
  # No descriptor of the build's, such as the lock that `lbq.sh` holds: only the push's own
  # files (its locks and `curl`'s configuration). Its output is the log.
  test_cmd_eq "" claim_check fds "$PUSH_PID" --allow "$CACHE_A/"
  test_cmd_eq "$CACHE_A/push.log" readlink /proc/$PUSH_PID/fd/1
  test_cmd flock -n "$WORK_DIR/tree.lock" true
  wait_push "$CACHE_A"
  test_cmd push_check status "$CACHE_A/remote-status-push.json" $CLAIM_COMPILES 0 0 0
  claims_done $CLAIM_COMPILES
  # Each claim became `done` after its mapping was uploaded
  for mapping in "$OBJECTS"/in/*.json; do
    HASH=$(basename "$mapping" .json)
    test_exp "$(grep -n "^PUT .*/in/$HASH.json -> 200" "$SERVER_LOG" | cut -d: -f1)" \
      -lt "$(grep -n "^PUT /slowobj/a0/claim/.*/$HASH -> 200 .* gen=[1-9]" "$SERVER_LOG" | tail -n 1 | cut -d: -f1)"
  done
  # Only one push ran
  test_cmd_eq 1 count '^lake cache push: started' "$CACHE_A/push.log"
}

case_claim_pool_slot() {
  # A target other than a module that waits for a claim does not hold the slot of a job: with
  # one worker (`LEAN_NUM_THREADS=1`), a module compiles while the target waits. The claim of
  # `claim/copied` is another machine's, which nothing refreshes, so the build takes it over after
  # the takeover time (10 s). `Claim.Slow` takes 8 s to compile, during that wait.
  claim_fresh
  LAKE_REMOTE_CACHE_CLAIMS=false run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" copied
  COPIED="$(inputs "$CACHE_A" claim/copied)"
  put_claim "$COPIED" building
  START=$(date +%s)
  LEAN_NUM_THREADS=1 LAKE_CLAIM_TAKEOVER_SECS=10 LAKE_TEST_CLAIM_SLEEP=8000 \
    run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" copied Extra
  ELAPSED=$(( $(date +%s) - START ))
  match_text 'Built claim/copied' "$LOG_B"
  match_text 'Built Claim.Slow' "$LOG_B"
  test_exp $ELAPSED -ge 10
  test_exp $ELAPSED -lt 17
}

case_claim_off() {
  # Without the queue (a reader), or with `LAKE_REMOTE_CACHE_CLAIMS=false`, a build neither claims
  # nor waits for a claim, and starts no push: a reader compiles a target that another machine
  # holds the claim of, and the queue alone is as before claims.
  claim_fresh
  : > "$SERVER_LOG"
  LAKE_REMOTE_CACHE_CLAIMS=false run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" Claim claimexe
  test_cmd_eq $CLAIM_COMPILES claim_check built-by "$LOG_A"
  test_cmd_eq $CLAIM_COMPILES queued_lines "$CACHE_A"
  test_cmd_eq 0 count ' /bearer/a0/claim/' "$SERVER_LOG"
  test_exp ! -e "$CACHE_A/push.log"
  for input in $(inputs "$CACHE_A" Claim.A); do put_claim "$input" building; done
  : > "$SERVER_LOG"
  LAKE_CACHE_DIR="$CACHE_B" LAKE_REMOTE_CACHE=bearer LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" \
    test_out 'Built Claim.A' -v --dir "$TREE_B" build Claim claimexe
  test_cmd_eq 0 count ' /bearer/a0/claim/' "$SERVER_LOG"
  test_exp ! -e "$CACHE_B/push.log"
  test_exp ! -e "$CACHE_B/push.jsonl"
}

case_claim_fail_open() {
  # A claim that cannot be written (here, the remote cache refuses every request) is a miss: the
  # build compiles as it would without claims.
  claim_fresh
  CLAIM_SERVICE=deny run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" Claim claimexe
  test_cmd_eq $CLAIM_COMPILES claim_check built-by "$LOG_A"
  test_cmd_eq $CLAIM_COMPILES queued_lines "$CACHE_A"
}

run_cases case_claim_two_builds case_claim_order case_claim_failed case_claim_takeover \
  case_claim_detached_push case_claim_pool_slot case_claim_off case_claim_fail_open
