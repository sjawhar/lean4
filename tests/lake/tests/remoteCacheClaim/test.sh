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
# The time limit, in seconds, of a build that must end long before a fault would let it (one
# that waits out the default takeover time, 600 s, or another build): far above what such a build
# takes on a loaded host, and far below what the fault takes
SOON_SECS=120

claim_check() { "$PYTHON" "$TEST_DIR/claim_check.py" "$@"; }
push_check() { "$PYTHON" "$TEST_DIR/../remoteCachePush/push_check.py" "$@"; }

# One machine's build, in a session of its own (so that a case can kill all of it):
# `build.sh <tree> <cache> <log> <target>...`. The other settings come from the environment.
# It records its process ID in `<log>.pid`, and stops the build after `$BUILD_TIMEOUT` seconds
# (by default 600), so that a build that waits for a claim too long fails instead of hanging.
# `$LAKE_CMD` is the Lake command (by default `build`), and `$LAKE_PRELOAD` a library that Lake
# (not this script) runs with as `LD_PRELOAD`.
cat > "$WORK_DIR/build.sh" << 'EOF'
tree=$1; cache=$2; log=$3; shift 3
echo $$ > "$log.pid"
LAKE_CACHE_DIR="$cache" exec timeout "${BUILD_TIMEOUT:-600}" env LD_PRELOAD="${LAKE_PRELOAD:-}" \
  "$LAKE" -v --dir "$tree" "${LAKE_CMD:-build}" "$@" > "$log" 2>&1
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
# that its builds started (each in a process group of its own, with the `curl` runs of its
# requests), and waits until they are gone, so that they send no more requests to the remote
# cache. A process ID is killed only while it still names this test's work directory, so that a
# reused ID is left alone.
kill_machines() {
  local f pid group own groups=()
  own="$(ps -o pgid= -p $$ | tr -d ' ')"
  for f in "$LOG_A.pid" "$LOG_B.pid"; do
    if [ -f "$f" ]; then
      pid="$(cat "$f")"
      if grep -qaF "$WORK_DIR" "/proc/$pid/cmdline" 2> /dev/null; then
        kill -KILL -- -"$pid" 2> /dev/null || true
        groups+=("$pid")
      fi
    fi
  done
  for f in "$CACHE_A/push.log" "$CACHE_B/push.log"; do
    if [ -f "$f" ]; then
      for pid in $(sed -n 's/^lake cache push: started, pid \([0-9]*\).*/\1/p' "$f"); do
        if grep -qaF "$WORK_DIR" "/proc/$pid/environ" 2> /dev/null; then
          # Empty if the push ended since the `grep`
          group="$(ps -o pgid= -p "$pid" 2> /dev/null | tr -d ' ' || true)"
          if [ -n "$group" ] && [ "$group" != "$own" ]; then
            kill -KILL -- -"$group" 2> /dev/null || true
            groups+=("$group")
          else
            kill -KILL "$pid" 2> /dev/null || true
          fi
        fi
      done
    fi
  done
  for group in "${groups[@]}"; do
    for _ in $(seq 1 100); do
      kill -0 -- -"$group" 2> /dev/null || break
      sleep 0.1
    done
  done
}
trap 'kill_machines; kill $SERVER_PID $SERVER2_PID 2> /dev/null' EXIT
# Starts both machines afresh, and removes what earlier cases put in the remote cache. A request
# that the remote cache received just before the kill may still be writing a claim, so a removal
# that finds a new entry is tried again.
claim_fresh() {
  kill_machines
  rm -rf "$TREE_A" "$TREE_B" "$CACHE_A" "$CACHE_B" "$OBJECTS" "$CLAIMS" 2> /dev/null || sleep 1
  test_cmd rm -rf "$TREE_A" "$TREE_B" "$CACHE_A" "$CACHE_B" "$OBJECTS" "$CLAIMS" \
    "$LOG_A" "$LOG_B" "$LOG_A.pid" "$LOG_B.pid"
  test_cmd cp -r "$TEST_DIR/claim" "$TREE_A"
  test_cmd cp -r "$TEST_DIR/claim" "$TREE_B"
  test_cmd chmod -R u+w "$TREE_A" "$TREE_B"
}
# Runs a command as a machine with the queue on (and so, by default here, claims): the remote
# cache `$CLAIM_SERVICE` (by default `bearer`), with a token. Its builds claim every input
# (`LAKE_CLAIM_SLOTS=0`, as a build whose compile slots are full does), unless `$CLAIM_SLOTS`
# names other slots, or is `unset` for a build that sets none (which claims nothing, the
# default of Lake).
on_m() {
  local slots=(LAKE_CLAIM_SLOTS="${CLAIM_SLOTS:-0}")
  # An empty value is unset to Lake and blocks any value the test runner inherited
  if [ "${CLAIM_SLOTS:-}" = unset ]; then slots=(LAKE_CLAIM_SLOTS=); fi
  env "${slots[@]}" LAKE_REMOTE_CACHE="${CLAIM_SERVICE:-bearer}" LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" \
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
  # This build has ended, so no later case kills its process ID, which another build may reuse
  rm -f "$3.pid"
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
# Creates a claim as another machine does, which nothing refreshes:
# `put_claim <inputHash> <state> [<at>] [<holder>]` (`at` is the holder's clock, by default now)
put_claim() {
  printf '{"holder":"%s","state":"%s","at":%s}' "${4:-other:1}" "$2" "${3:-$(date +%s)}" \
    > "$WORK_DIR/claim.json"
  test_cmd_eq 200 curl -s -o /dev/null -w '%{http_code}' -X PUT -T "$WORK_DIR/claim.json" \
    -H 'x-goog-if-generation-match: 0' -H 'Authorization: Bearer test-token-1' \
    "$URL/bearer/a0/claim/$CLAIM_SCOPE/$1"
}
# The number of pushes that a machine's builds started
pushes_started() {
  if [ -f "$1/push.log" ]; then count '^lake cache push: started' "$1/push.log"; else echo 0; fi
}
# The number of pushes that a machine's build should have started: one if it compiled (and so
# queued) anything, none if it restored every target: `expected_pushes <log>`
expected_pushes() {
  if [ "$(claim_check built-by "$1")" -gt 0 ]; then echo 1; else echo 0; fi
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
  # wins its claim and compiles it, and the other waits for its mapping and restores it. A
  # machine's build that compiled anything starts one push, which follows the build, also when
  # uploads are fast (one machine may win every claim, and then the other pushes nothing).
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
  test_cmd_eq "$(expected_pushes "$LOG_A")" pushes_started "$CACHE_A"
  test_cmd_eq "$(expected_pushes "$LOG_B")" pushes_started "$CACHE_B"
}

case_claim_one_push() {
  # One build that compiles 7 targets, with the fast service, starts one push, not one per
  # compile, and the push uploads all 7 and ends after the build.
  claim_fresh
  run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" Claim claimexe
  test_cmd_eq $CLAIM_COMPILES claim_check built-by "$LOG_A"
  wait_push "$CACHE_A"
  test_cmd_eq 1 pushes_started "$CACHE_A"
  test_cmd push_check status "$CACHE_A/remote-status-push.json" $CLAIM_COMPILES 0 0 0
  claims_done $CLAIM_COMPILES
}

case_claim_order() {
  # Two builds that reach shared modules in opposite orders, with one worker each, do not
  # deadlock: `Order.AB` imports `Claim.A` and then `Claim.B`, and `Order.BA` the other way. A
  # machine holds a claim only while it compiles, so each compiles what it claimed and restores
  # the rest.
  claim_fresh
  LEAN_NUM_THREADS=1 BUILD_TIMEOUT=120 start_build "$TREE_A" "$CACHE_A" "$LOG_A" Order.AB
  PID_A=$!
  LEAN_NUM_THREADS=1 BUILD_TIMEOUT=120 start_build "$TREE_B" "$CACHE_B" "$LOG_B" Order.BA
  PID_B=$!
  wait_build $PID_A "$LOG_A"
  wait_build $PID_B "$LOG_B"
  test_cmd claim_check once --expect 4 "$LOG_A" "$LOG_B"
  match_text 'Built Order.AB' "$LOG_A"
  match_text 'Built Order.BA' "$LOG_B"
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
  BUILD_TIMEOUT=$SOON_SECS run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" Claim.Flaky
  match_text 'Built Claim.Flaky' "$LOG_B"
  # B took the claim over from the generation that held `failed`: after its create was refused
  # (412), its first successful write of the claim names that generation (later writes mark the
  # claim `queued`, then `done`)
  test_cmd grep -m 1 -E "^PUT /bearer/a0/claim/.*/$FLAKY -> 200 auth=bearer gen=[1-9]" \
    <(grep -m 1 "^PUT /bearer/a0/claim/.*/$FLAKY -> 200 " "$SERVER_LOG")
  wait_push "$CACHE_B"
  claims_done 1
}

case_claim_takeover() {
  # A live holder refreshes its claim within the takeover time, so a machine that waits much
  # longer than the takeover time does not take over while the holder still compiles. Once the
  # holder is killed, the waiting machine takes the claim over and compiles. A rewrites its claim
  # about every second (a quarter of its own takeover time, 5 s), and B's takeover time, 15 s,
  # leaves room for rewrites that a loaded host delays.
  claim_fresh
  LAKE_CLAIM_TAKEOVER_SECS=5 LAKE_TEST_CLAIM_SLEEP=600000 \
    start_build "$TREE_A" "$CACHE_A" "$LOG_A" Claim.Slow
  PID_A=$!
  # A claims `Claim.Slow`, its only target
  test_cmd claim_check wait-entries "$CLAIMS" 1 --timeout 60
  SLOW="$(ls "$CLAIMS")"
  # Alive: A refreshes its claim (each refresh is a new generation) while B waits
  : > "$SERVER_LOG"
  LAKE_CLAIM_TAKEOVER_SECS=15 start_build "$TREE_B" "$CACHE_B" "$LOG_B" Claim.Slow
  PID_B=$!
  sleep 35
  test_exp -d /proc/$PID_B
  no_match_text 'Built Claim.Slow' "$LOG_B"
  test_exp "$(count "^PUT /bearer/a0/claim/.*/$SLOW -> 200 auth=bearer gen=[1-9]" "$SERVER_LOG")" -ge 3
  # Killed: B takes the claim over
  test_cmd kill -KILL -- -"$(cat "$LOG_A.pid")"
  wait $PID_A || true
  wait_build $PID_B "$LOG_B"
  match_text 'Built Claim.Slow' "$LOG_B"
  test_cmd_eq 1 claim_check built-by "$LOG_B"
  wait_push "$CACHE_B"
  claims_done 1
}

case_claim_dead_holder() {
  # A build that is killed on this machine leaves its claims `building`, with nothing that
  # refreshes them. The next build on the same machine sees that the holder (this host, a process
  # that no longer runs) is gone, and takes the claim over at once, with the default takeover
  # time (600 s) still far off.
  claim_fresh
  LAKE_TEST_CLAIM_SLEEP=600000 start_build "$TREE_A" "$CACHE_A" "$LOG_A" Claim.Slow
  PID_A=$!
  test_cmd claim_check wait-entries "$CLAIMS" 1 --timeout 60
  test_cmd claim_check state "$CLAIMS/$(ls "$CLAIMS")" building
  test_cmd kill -KILL -- -"$(cat "$LOG_A.pid")"
  wait $PID_A || true
  BUILD_TIMEOUT=$SOON_SECS run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" Claim.Slow
  match_text 'Built Claim.Slow' "$LOG_B"
  match_text 'holder gone' "$LOG_B"
}

case_claim_stale() {
  # A claim is stale by the remote cache's clock (`Date` minus `Last-Modified` of its answer),
  # never by the `at` that its holder, on another machine, wrote. The claims here are another
  # host's, so the rule for a gone holder of this host does not apply.
  claim_fresh
  LAKE_REMOTE_CACHE_CLAIMS=false run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" Claim.Slow
  SLOW="$(inputs "$CACHE_A" Claim.Slow)"
  # A fresh object whose `at` is an hour old: not stale; it goes stale after the takeover time
  put_claim "$SLOW" building $(( $(date +%s) - 3600 ))
  START=$(date +%s)
  LAKE_CLAIM_TAKEOVER_SECS=5 BUILD_TIMEOUT=$SOON_SECS \
    run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" Claim.Slow
  match_text 'Built Claim.Slow' "$LOG_B"
  test_exp $(( $(date +%s) - START )) -ge 5
  # An object that the remote cache last replaced an hour ago, whose `at` is now: stale at once,
  # with the default takeover time. B starts afresh, without what its push uploaded.
  wait_push "$CACHE_B"
  test_cmd rm -rf "$TREE_B" "$CACHE_B" "$CLAIMS" "$OBJECTS"
  test_cmd cp -r "$TEST_DIR/claim" "$TREE_B"
  test_cmd chmod -R u+w "$TREE_B"
  put_claim "$SLOW" building
  test_cmd touch -d '1 hour ago' "$CLAIMS/$SLOW"
  BUILD_TIMEOUT=$SOON_SECS run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" Claim.Slow
  match_text 'Built Claim.Slow' "$LOG_B"
}

case_claim_detached_push() {
  # After a machine compiles, it queues the outputs with the claim's generation and starts one
  # detached `lake cache push` (not one per compiled target), when no push runs. The build does
  # not wait for the push: it exits while the push still runs (here each upload of an artifact or
  # a mapping takes 4 seconds, and the last output is queued at the build's end). The push holds
  # none of the build's descriptors (as an `lbq.sh` lock), only its log, and it marks each
  # claim `done` after the mapping is in the remote cache.
  claim_fresh
  : > "$SERVER_LOG"
  CLAIM_SERVICE=slowobj on_m bash "$WORK_DIR/lbq.sh" "$WORK_DIR/tree.lock" \
    bash "$WORK_DIR/build.sh" "$TREE_A" "$CACHE_A" "$LOG_A" Claim claimexe
  cat "$LOG_A"
  # The push still runs, in a session of its own, and has not finished
  test_exp ! -e "$CACHE_A/remote-status-push.json"
  test_cmd_eq 1 count '^lake cache push: started' "$CACHE_A/push.log"
  PUSH_PID="$(sed -n 's/^lake cache push: started, pid \([0-9]*\).*/\1/p' "$CACHE_A/push.log")"
  test_exp -d /proc/$PUSH_PID
  # The queue lines carry the claims' generations. A line leaves the queue once the push has
  # pushed its output, so a slow build leaves fewer lines than it queued, but the last output's
  # line is there. The push replaces the queue file whole, so its copy is one state of it.
  test_cmd cp "$CACHE_A/push.jsonl" "$WORK_DIR/queue.jsonl"
  test_exp "$(count . "$WORK_DIR/queue.jsonl")" -ge 1
  test_cmd_eq "$(count . "$WORK_DIR/queue.jsonl")" \
    count '"claimGeneration":"[1-9][0-9]*"' "$WORK_DIR/queue.jsonl"
  # No descriptor of the build's, such as the lock that `lbq.sh` holds: only the push's own
  # files (its locks and `curl`'s configuration). Its output is the log.
  test_cmd_eq "" claim_check fds "$PUSH_PID" --allow "$CACHE_A/"
  test_cmd_eq "$CACHE_A/push.log" readlink /proc/$PUSH_PID/fd/1
  test_cmd flock -n "$WORK_DIR/tree.lock" true
  test_cmd_eq $CLAIM_COMPILES claim_check built-by "$LOG_A"
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
  # one worker (`LEAN_NUM_THREADS=1`), the build's other jobs run while the target waits. The
  # claim of `claim/copied` is another machine's, and stays live (the takeover time, 600 s, is far
  # off) until the build has read it and finished `Extra` (its modules' compiles and the jobs
  # after them), which needs a worker while the target waits. The case then makes the claim stale
  # (an hour old by the remote cache's clock), and the build takes it over. The inputs are not
  # shared out (`LAKE_CLAIM_DEFER_SECS=0`): this build has read the other machine's live claim, so
  # it would leave that machine `Claim.Slow` if the hash gave it to it.
  claim_fresh
  LAKE_REMOTE_CACHE_CLAIMS=false run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" copied
  COPIED="$(inputs "$CACHE_A" claim/copied)"
  put_claim "$COPIED" building
  : > "$SERVER_LOG"
  LEAN_NUM_THREADS=1 LAKE_CLAIM_DEFER_SECS=0 start_build "$TREE_B" "$CACHE_B" "$LOG_B" copied Extra
  PID_B=$!
  # The build reads the live claim (a `GET` of it), and so waits for it
  test_cmd claim_check wait-text "$SERVER_LOG" "/$COPIED -> 200 auth=bearer gen=-" --timeout 120
  test_cmd claim_check wait-text "$LOG_B" 'Ran claim/Extra:default' --timeout 120
  no_match_text 'Built claim/copied' "$LOG_B"
  test_cmd touch -d '1 hour ago' "$CLAIMS/$COPIED"
  wait_build $PID_B "$LOG_B"
  match_text 'waiting for the claim' "$LOG_B"
  match_text 'taking over the claim' "$LOG_B"
  match_text 'Built claim/copied' "$LOG_B"
}

case_claim_fail_fast() {
  # With `--fail-fast`, a target other than a module that waits for another machine's claim stops
  # waiting once the build is canceled: `Claim.Flaky` fails, and the build ends long before the
  # default takeover time (600 s) of `claim/copied`'s claim.
  claim_fresh
  LAKE_REMOTE_CACHE_CLAIMS=false run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" copied
  put_claim "$(inputs "$CACHE_A" claim/copied)" building
  LAKE_TEST_CLAIM_FAIL=1 BUILD_TIMEOUT=$SOON_SECS \
    run_build 1 "$TREE_B" "$CACHE_B" "$LOG_B" --fail-fast copied Claim.Flaky
  match_text 'LAKE_TEST_CLAIM_FAIL is set' "$LOG_B"
  no_match_text 'Built claim/copied' "$LOG_B"
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

case_claim_same_pid() {
  # Two builds whose Lake processes have one process ID (as in two containers that share the
  # cache; here an `LD_PRELOAD` `getpid` gives both 4242) share one cache. The first build queues
  # `Claim.A` and starts its push, then keeps compiling `Claim.Slow`; the second build queues
  # `Claim.B` while the first still runs. Each build's push follows a file of its own, so the
  # second build does not wait for the first, which compiles `Claim.Slow` for 300 seconds.
  claim_fresh
  test_cmd cc -shared -fPIC -o "$WORK_DIR/same-pid.so" "$TEST_DIR/SamePidLake.c" -ldl
  LAKE_PRELOAD="$WORK_DIR/same-pid.so" LAKE_TEST_CLAIM_SLEEP=300000 \
    start_build "$TREE_A" "$CACHE_A" "$LOG_A" Claim.A Claim.Slow
  PID_A=$!
  # A's first queued output (`Claim.A`'s) started its push
  test_cmd claim_check wait-text "$CACHE_A/push.log" 'lake cache push: started' --timeout 60
  LAKE_PRELOAD="$WORK_DIR/same-pid.so" BUILD_TIMEOUT=$SOON_SECS \
    run_build 0 "$TREE_B" "$CACHE_A" "$LOG_B" Claim.B
  match_text 'Built Claim.B' "$LOG_B"
  test_exp -d /proc/$PID_A
  # Two follow files, one per build (A still builds; B's push waits for A's)
  test_cmd claim_check wait-entries "$CACHE_A/push-follow" 2 --timeout 10
}

case_claim_queued() {
  # A build that compiled outputs ends while its push still uploads them (each upload takes 4
  # seconds here). The push takes each claim as `queued`, naming itself, within about a second of
  # its queue line, and a build of another cache on the same host that starts at once leaves a
  # claim whose holder has gone for 5 seconds before it takes it over: so that build restores
  # every target from the remote cache and compiles none.
  claim_fresh
  CLAIM_SERVICE=slowobj run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" Claim claimexe
  test_cmd_eq $CLAIM_COMPILES claim_check built-by "$LOG_A"
  test_exp ! -e "$CACHE_A/remote-status-push.json"
  CLAIM_SERVICE=slowobj BUILD_TIMEOUT=120 run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" Claim claimexe
  test_cmd_eq 0 claim_check built-by "$LOG_B"
  test_cmd_eq $CLAIM_COMPILES machine_targets "$LOG_B"
  wait_push "$CACHE_A"
  claims_done $CLAIM_COMPILES
}

case_claim_queued_late_line() {
  # The line of an output that a build queues while its push uploads an earlier one waits for the
  # push's next pass, but its claim does not: the push takes it within about a second. Here the
  # push uploads `Claim.A` (each upload takes 4 seconds), `Claim.Slow` ends 3 seconds in, and the
  # build ends; a build of another cache on the same host starts at once and finds `Claim.Slow`'s
  # claim already the push's, so it waits for the mapping and compiles nothing.
  claim_fresh
  CLAIM_SERVICE=slowobj LAKE_TEST_CLAIM_SLEEP=3000 \
    run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" Claim.A Claim.Slow
  test_cmd_eq 2 claim_check built-by "$LOG_A"
  CLAIM_SERVICE=slowobj BUILD_TIMEOUT=120 run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" Claim.A Claim.Slow
  test_cmd_eq 0 claim_check built-by "$LOG_B"
  no_match_text 'holder gone' "$LOG_B"
  wait_push "$CACHE_A"
  claims_done 2
}

case_claim_taker_retry() {
  # The first conditional write that transfers Claim.A's claim to the push resets. The push can
  # still upload its mapping, but it must not let its background taker replace the claim after
  # staging captured the old generation. The mapping's claim must end `done`.
  claim_fresh
  CLAIM_SERVICE=resetclaimslowobj run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" Claim.A
  test_cmd_eq 1 claim_check built-by "$LOG_A"
  wait_push "$CACHE_A"
  claims_done 1
}

case_claim_queued_killed() {
  # A build killed with its push, after the claim of a compiled input says `queued`, leaves no
  # mapping and nothing that will upload one. The next build takes that claim over at once (its
  # holder's process is gone), instead of waiting out the takeover time.
  claim_fresh
  CLAIM_SERVICE=slowobj start_build "$TREE_A" "$CACHE_A" "$LOG_A" Claim claimexe
  PID_A=$!
  # Wait until a claim of A's is `queued`, which only a compiled input gets
  test_cmd claim_check wait-state "$CLAIMS" queued --timeout 120
  QUEUED="$(claim_check first-state "$CLAIMS" queued)"
  test_cmd kill -KILL -- -"$(cat "$LOG_A.pid")"
  wait $PID_A || true
  kill_machines
  test_exp ! -e "$OBJECTS/in/$QUEUED.json"
  CLAIM_SERVICE=slowobj BUILD_TIMEOUT=$SOON_SECS \
    run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" Claim claimexe
  match_text 'holder gone' "$LOG_B"
  wait_push "$CACHE_B"
}

case_claim_exe_push() {
  # `lake exe` keeps its Lake process while the program runs. The push that its build started
  # follows the build, not the process: it ends once the build has, while the program still runs.
  claim_fresh
  LAKE_CMD=exe LAKE_TEST_CLAIM_EXE_SLEEP=120000 start_build "$TREE_A" "$CACHE_A" "$LOG_A" claimexe
  PID_A=$!
  test_cmd claim_check wait-text "$LOG_A" 'claimexe started' --timeout 60
  test_cmd claim_check wait-file "$CACHE_A/remote-status-push.json" --timeout 100
  test_exp -d /proc/$PID_A
  no_match_text 'Hello, claim' "$LOG_A"
  test_cmd push_check status "$CACHE_A/remote-status-push.json" 3 0 0 0
}

case_claim_push_retry() {
  # A push that follows a build tries an upload that failed again (after 30 seconds) while the
  # build still runs: the first upload of each artifact is refused here, and `Claim.A`'s mapping
  # is in the remote cache before the build (which then compiles `Claim.Slow` for 120 seconds)
  # ends.
  claim_fresh
  CLAIM_SERVICE=denyartonce LAKE_TEST_CLAIM_SLEEP=120000 \
    start_build "$TREE_A" "$CACHE_A" "$LOG_A" Claim.A Claim.Slow
  PID_A=$!
  test_cmd claim_check wait-text "$CACHE_A/push.jsonl" '"target":"Claim.A"' --timeout 60
  A_INPUT="$(inputs "$CACHE_A" Claim.A)"
  test_cmd claim_check wait-file "$OBJECTS/in/$A_INPUT.json" --timeout 100
  test_exp -d /proc/$PID_A
  match_text 'trying 1 failed queue entries again' "$CACHE_A/push.log"
}

case_claim_push_spawn_fails() {
  # A push that cannot be started leaves the build free to start one again: the system refuses
  # the `fork` of the first start (a preload fails the first spawn of the push's shell,
  # `/bin/bash`), and the build's next queued output starts the push, which uploads both
  # outputs. The follow file of the failed start is not left behind.
  claim_fresh
  test_cmd cc -shared -fPIC -o "$WORK_DIR/fail-spawn.so" "$TEST_DIR/FailSpawn.c" -ldl
  PROBE_FAIL_SPAWN=/bin/bash LAKE_PRELOAD="$WORK_DIR/fail-spawn.so" \
    run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" Claim.A Claim.B
  match_text 'could not start `lake cache push`' "$LOG_A"
  wait_push "$CACHE_A"
  test_cmd_eq 1 pushes_started "$CACHE_A"
  test_cmd push_check status "$CACHE_A/remote-status-push.json" 2 0 0 0
  test_cmd_eq 0 claim_check count-files "$CACHE_A/push-follow"
}

case_claim_push_start_wfail() {
  # A push that can never start (every spawn of its shell refused) is a cache failure, not a
  # build failure: a `--wfail` build still succeeds, reports it once (at verbose level, not
  # once per compile), and records it in its read status.
  claim_fresh
  test_cmd cc -shared -fPIC -o "$WORK_DIR/fail-spawn.so" "$TEST_DIR/FailSpawn.c" -ldl
  PROBE_FAIL_SPAWN=/bin/bash PROBE_FAIL_SPAWN_ALWAYS=1 LAKE_PRELOAD="$WORK_DIR/fail-spawn.so" \
    run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" --wfail Claim.A Claim.B
  test_cmd_eq 2 claim_check built-by "$LOG_A"
  test_cmd_eq 1 count 'could not start `lake cache push`' "$LOG_A"
  no_match_text 'warning: could not start' "$LOG_A"
  match_text 'could not start `lake cache push`' "$CACHE_A/remote-status-read.json"
  test_exp ! -e "$CACHE_A/push.log"
}

case_claim_foreground_push() {
  # Where the push's shell is missing (`LAKE_PUSH_SHELL` names no file), no push is detached:
  # the build warns, and runs the push in the foreground at its end, so the queue is pushed,
  # its status written and every claim `done` when the build exits.
  claim_fresh
  LAKE_PUSH_SHELL=/nonexistent/bash run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" Claim claimexe
  match_text '`/nonexistent/bash` is missing (see `LAKE_PUSH_SHELL`)' "$LOG_A"
  no_match_text 'lake cache push: started' "$CACHE_A/push.log"
  match_text 'lake cache push: ran in the foreground' "$CACHE_A/push.log"
  test_cmd_eq 0 queued_lines "$CACHE_A"
  test_cmd push_check status "$CACHE_A/remote-status-push.json" $CLAIM_COMPILES 0 0 0
  claims_done $CLAIM_COMPILES
}

case_claim_follow_reap() {
  # A build removes the follow files that no build holds and that are a day old (what a killed
  # push leaves), and keeps a fresh one and one that a build still holds.
  claim_fresh
  test_cmd mkdir -p "$CACHE_A/push-follow"
  test_cmd touch "$CACHE_A/push-follow/build.1.0.dead.tmp"
  test_cmd touch -d '2 days ago' "$CACHE_A/push-follow/build.1.0.dead.tmp"
  test_cmd touch "$CACHE_A/push-follow/build.2.0.fresh.tmp"
  LAKE_TEST_CLAIM_SLEEP=60000 start_build "$TREE_A" "$CACHE_A" "$LOG_A" Claim.A Claim.Slow
  PID_A=$!
  test_cmd claim_check wait-text "$CACHE_A/push.log" 'lake cache push: started' --timeout 60
  test_exp ! -e "$CACHE_A/push-follow/build.1.0.dead.tmp"
  test_exp -e "$CACHE_A/push-follow/build.2.0.fresh.tmp"
  # The running build's own file is there
  test_cmd_eq 2 claim_check count-files "$CACHE_A/push-follow"
  test_cmd kill -KILL -- -"$(cat "$LOG_A.pid")"
  wait $PID_A || true
}

case_claim_unreadable() {
  # A claim that cannot be read (an invalid body, no times), which nothing rewrites, is a claim
  # failure: the build compiles at once without a claim and records the failure.
  claim_fresh
  CLAIM_SERVICE=badclaim LAKE_CLAIM_TAKEOVER_SECS=3 BUILD_TIMEOUT=$SOON_SECS \
    run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" Claim.A
  match_text 'Built Claim.A' "$LOG_A"
  match_text 'is unreadable' "$CACHE_A/remote-status-read.json"
}

case_claim_local_clock() {
  # A claim goes stale by the waiting build's own clock as well: answers without times, and a
  # holder's time a day ahead, never keep a build waiting longer than the takeover time after it
  # first saw the claim unchanged. The claim is another host's, so its holder is not seen as gone.
  claim_fresh
  LAKE_REMOTE_CACHE_CLAIMS=false run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" Claim.A
  put_claim "$(inputs "$CACHE_A" Claim.A)" building $(( $(date +%s) + 86400 ))
  START=$(date +%s)
  CLAIM_SERVICE=notimes LAKE_CLAIM_TAKEOVER_SECS=5 BUILD_TIMEOUT=$SOON_SECS \
    run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" Claim.A
  match_text 'Built Claim.A' "$LOG_B"
  test_exp $(( $(date +%s) - START )) -ge 5
  match_text 'unchanged for' "$LOG_B"
}

case_claim_stream() {
  # An answer to a claim request that does not end, sent faster than any speed limit, is cut
  # off by the request's limits (64 KiB, or 20 s), long before it ends (after 2 minutes): the
  # build compiles without a claim and records the failure.
  claim_fresh
  CLAIM_SERVICE=streamclaim BUILD_TIMEOUT=100 run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" Claim.A
  match_text 'Built Claim.A' "$LOG_A"
  match_text 'did not finish' "$CACHE_A/remote-status-read.json"
}

# Writes the module `Claim.Share.Y<i>`, which imports `Claim.Slow`, into both machines' trees
share_module() {
  local tree
  for tree in "$TREE_A" "$TREE_B"; do
    mkdir -p "$tree/Claim/Share"
    printf 'import Claim.Slow\n\nnamespace Claim\n\ndef y%s := slow + %s\n' "$1" "$1" \
      > "$tree/Claim/Share/Y$1.lean"
  done
}
# The holder of the claims of a machine's build that `start_build` started (see `claimHolder`):
# the host and the process ID of its `lake`, the child of the `timeout` that `build.sh` became
build_holder() {
  local pid=
  claim_check wait-file "$1.pid" --timeout 30 > /dev/null
  for _ in $(seq 1 100); do
    pid="$(pgrep -P "$(cat "$1.pid")" || true)"
    [ -n "$pid" ] && break
    sleep 0.1
  done
  [ -n "$pid" ] || { echo "FAILURE: no lake process under $(cat "$1.pid")" >&2; return 1; }
  echo "$(hostname):$pid"
}

# Two builds of the shared input pair: A compiles `Claim.Slow` until B has read A's claim of it (a
# `GET`, after which the case opens the gate of A's compile), holding a live claim of it that it
# rewrites every second (`LAKE_CLAIM_TAKEOVER_SECS=4`, which A only uses to time its rewrites), so
# that the claim never looks gone while A's push takes it over, and B builds
# `Claim.Share.Y$SHARE_EVEN` and `Claim.Share.Y$SHARE_ODD`, which import it, with the settings
# `<var>=<value>...` that follow. So B waits for A's claim, and has read it, before it reaches
# either: the two builds are its party by then, whatever the order in which its reads come back.
# Sets `HOLDER_A` and `HOLDER_B`.
share_builds() {
  claim_fresh
  share_module "$SHARE_EVEN"
  share_module "$SHARE_ODD"
  test_cmd rm -f "$WORK_DIR/slow.gate"
  LAKE_TEST_CLAIM_GATE="$WORK_DIR/slow.gate" LAKE_CLAIM_TAKEOVER_SECS=4 BUILD_TIMEOUT=240 \
    start_build "$TREE_A" "$CACHE_A" "$LOG_A" Claim.Slow
  PID_A=$!
  test_cmd claim_check wait-file "$CLAIMS/$SHARE_SLOW" --timeout 60
  HOLDER_A="$(build_holder "$LOG_A")"
  test_exp -n "$HOLDER_A"
  : > "$SERVER_LOG"
  (
    export "$@" LAKE_CLAIM_TAKEOVER_SECS=20 BUILD_TIMEOUT=120
    start_build "$TREE_B" "$CACHE_B" "$LOG_B" \
      "Claim.Share.Y$SHARE_EVEN" "Claim.Share.Y$SHARE_ODD"
    wait $!
  ) &
  PID_B=$!
  HOLDER_B="$(build_holder "$LOG_B")"
  test_exp -n "$HOLDER_B"
  echo "the builds are $HOLDER_A (A) and $HOLDER_B (B)"
  test_cmd claim_check wait-text "$SERVER_LOG" "/$SHARE_SLOW -> 200 auth=bearer gen=-" --timeout 120
  test_cmd touch "$WORK_DIR/slow.gate"
  wait_build $PID_A "$LOG_A"
  wait_build $PID_B "$LOG_B"
  match_text 'waiting for the claim' "$LOG_B"
  test_cmd_eq 1 claim_check built-by "$LOG_A"
  test_cmd_eq 2 claim_check built-by "$LOG_B"
  wait_push "$CACHE_A"
  wait_push "$CACHE_B"
}

case_claim_share() {
  # Builds that have read each other's claims share the inputs out: each gives every input it is
  # about to compile to one of them, by the input's hash, claims its own, and leaves the others
  # until `LAKE_CLAIM_DEFER_SECS` have passed with no claim. Here two real builds run: A compiles
  # `Claim.Slow`, and B builds two modules that import it, whose input hashes differ in parity, so
  # that one of them is A's and the other B's, in whichever order their holders sort. A never
  # claims its module (it does not build it), so B leaves it to A, takes it after the deferral,
  # and then leaves A no more inputs. B reaches the two modules only after it has waited for A's
  # claim of `Claim.Slow`, so the party is known by then, by construction and not by how fast its
  # reads come back.
  claim_fresh
  # The input hashes of the modules, from a build that claims nothing: 8 candidates of the pair,
  # of which (but with a chance of 1 in 128 for each 8) some are even and some odd
  local i round targets pair even odd y_even y_odd mine theirs peer
  SHARE_EVEN='' SHARE_ODD=''
  for round in 0 1 2 3; do
    targets=()
    for i in $(seq $((round * 8)) $((round * 8 + 7))); do
      share_module "$i"
      targets+=("Claim.Share.Y$i")
    done
    LAKE_REMOTE_CACHE_CLAIMS=false run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" "${targets[@]}"
    if pair="$(claim_check parity-pair "$CACHE_A/push.jsonl" "${targets[@]}")"; then
      read -r even odd <<< "$pair"
      SHARE_EVEN="${even#Claim.Share.Y}"
      SHARE_ODD="${odd#Claim.Share.Y}"
      break
    fi
  done
  test_exp -n "$SHARE_EVEN"
  y_even="$(inputs "$CACHE_A" "Claim.Share.Y$SHARE_EVEN")"
  y_odd="$(inputs "$CACHE_A" "Claim.Share.Y$SHARE_ODD")"
  SHARE_SLOW="$(inputs "$CACHE_A" Claim.Slow)"
  share_builds LAKE_CLAIM_DEFER_SECS=2
  if [ "$(claim_check owner "$y_even" "$HOLDER_A" "$HOLDER_B")" = "$HOLDER_A" ]; then
    theirs=$y_even mine=$y_odd
  else
    theirs=$y_odd mine=$y_even
  fi
  # A's module: B leaves it, then takes it since A never claims it, and then leaves A no more
  # inputs, since it has stopped; B's own module it claims at once
  match_text "leaving the input $theirs to the build $HOLDER_A" "$LOG_B"
  match_text "taking the input $theirs, which the build $HOLDER_A left unclaimed" "$LOG_B"
  match_text "leaving no more inputs to the build $HOLDER_A until it is seen building" "$LOG_B"
  no_match_text "leaving the input $mine " "$LOG_B"
  # `Claim.Slow`, which A claimed and compiled, B never takes (it waits for A's claim), so it
  # never says that it took it
  no_match_text "taking the input $SHARE_SLOW," "$LOG_B"
  # With the sharing off, B claims every input it reaches, as one build alone does
  share_builds LAKE_CLAIM_DEFER_SECS=0
  no_match_text 'leaving the input ' "$LOG_B"
  # A claim that says `queued` names a push, which compiles nothing (a push writes its own
  # process ID into the claims it holds): it takes no share. B waits for such a claim of
  # `Claim.Slow` (of another host, so never a gone holder) until it is stale (20 s, so it looks
  # at it again several times), and then takes it over. The holder is named so that it would own
  # `Claim.Slow`'s input if it took a share (a holder that starts with `!` sorts before this
  # host's, one that starts with `~` after it), so B would leave that input to it while it waits.
  claim_fresh
  share_module "$SHARE_EVEN"
  share_module "$SHARE_ODD"
  if [ "$(claim_check owner "$SHARE_SLOW" '!other:1' "$(hostname):1")" = '!other:1' ]; then
    peer='!other:1'
  else
    peer='~other:2'
  fi
  put_claim "$SHARE_SLOW" queued '' "$peer"
  LAKE_CLAIM_DEFER_SECS=2 LAKE_CLAIM_TAKEOVER_SECS=20 BUILD_TIMEOUT=120 \
    run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" "Claim.Share.Y$SHARE_EVEN" "Claim.Share.Y$SHARE_ODD"
  match_text 'taking over the claim' "$LOG_B"
  no_match_text 'leaving the input ' "$LOG_B"
  test_cmd_eq 3 claim_check built-by "$LOG_B"
  wait_push "$CACHE_B"
}

case_claim_free_slots() {
  # A build with a free compile slot compiles at once, and neither claims nor waits: waiting for
  # another build saves it time only when it cannot compile more at once. This package runs at
  # most two compiles at once, so a build with more slots takes no claim, and another build's live
  # claim of an input (here `Claim.A`'s, which that build never finishes) does not hold it up:
  # with full slots it would wait out the takeover time (600 s). A build that sets no slots at
  # all (`unset`, the default) claims nothing either.
  claim_fresh
  # The input hash of `Claim.A`, from a build that claims nothing
  LAKE_REMOTE_CACHE_CLAIMS=false run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" Claim.A
  local a slots
  a="$(inputs "$CACHE_A" Claim.A)"
  for slots in 4 unset; do
    test_cmd rm -rf "$TREE_B" "$CACHE_B" "$OBJECTS" "$CLAIMS"
    test_cmd cp -r "$TEST_DIR/claim" "$TREE_B"
    test_cmd chmod -R u+w "$TREE_B"
    put_claim "$a" building
    CLAIM_SLOTS=$slots LEAN_NUM_THREADS=4 BUILD_TIMEOUT=$SOON_SECS \
      run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" Claim
    test_cmd_eq 4 claim_check built-by "$LOG_B"
    # The only claim is the other build's, as it wrote it
    test_cmd_eq 1 claim_check count-files "$CLAIMS"
    match_text '"holder":"other:1"' "$CLAIMS/$a"
    no_match_text 'waiting for the claim' "$LOG_B"
    wait_push "$CACHE_B"
  done
}

case_claim_saturated() {
  # A build claims an input once `LAKE_CLAIM_SLOTS` of its compiles run, and not before.
  # `Wide`'s three modules import nothing and compile for 2, 4 and 6 seconds. With one slot and
  # two workers, the third module starts when one of the first two ends and the other still
  # compiles, so the build claims it (the first two may start before either compile counts, so
  # they need not claim). With eight workers and three slots, no three compiles ever run, so the
  # build claims nothing.
  claim_fresh
  CLAIM_SLOTS=1 LEAN_NUM_THREADS=2 LAKE_TEST_CLAIM_SLEEP=2000 BUILD_TIMEOUT=120 \
    run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" Wide
  test_cmd_eq 3 claim_check built-by "$LOG_A"
  test_exp "$(claim_check count-files "$CLAIMS")" -ge 1
  wait_push "$CACHE_A"
  claim_fresh
  CLAIM_SLOTS=3 LEAN_NUM_THREADS=8 LAKE_TEST_CLAIM_SLEEP=2000 BUILD_TIMEOUT=120 \
    run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" Wide
  test_cmd_eq 3 claim_check built-by "$LOG_A"
  test_cmd_eq 0 claim_check count-files "$CLAIMS"
  wait_push "$CACHE_A"
}

case_claim_free_slot_wake() {
  # A compile that leaves fewer running inputs than `LAKE_CLAIM_SLOTS` wakes a pending 5 s claim
  # wait. `freeSlotWake` registers a wait on the seeded claim, completes `withClaim none` with
  # one configured slot, and fails unless the wait's promise is resolved when `withClaim` returns.
  claim_fresh
  put_claim 0000000000000001 building
  CLAIM_SLOTS=1 run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" freeSlotWake
}

run_cases case_claim_two_builds case_claim_one_push case_claim_order case_claim_failed \
  case_claim_takeover case_claim_dead_holder case_claim_stale case_claim_detached_push \
  case_claim_pool_slot case_claim_fail_fast case_claim_same_pid case_claim_queued \
  case_claim_queued_late_line case_claim_queued_killed \
  case_claim_taker_retry \
  case_claim_exe_push case_claim_push_retry case_claim_push_spawn_fails \
  case_claim_push_start_wfail case_claim_foreground_push case_claim_follow_reap \
  case_claim_unreadable case_claim_local_clock case_claim_stream case_claim_off \
  case_claim_fail_open case_claim_share case_claim_free_slots case_claim_saturated \
  case_claim_free_slot_wake
