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
# Creates a claim as another machine does, which nothing refreshes:
# `put_claim <inputHash> <state> [<at>]` (`at` is the holder's clock, by default now)
put_claim() {
  printf '{"holder":"other:1","state":"%s","at":%s}' "$2" "${3:-$(date +%s)}" > "$WORK_DIR/claim.json"
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
  START=$(date +%s)
  run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" Claim.Flaky
  match_text 'Built Claim.Flaky' "$LOG_B"
  test_exp $(( $(date +%s) - START )) -lt 60
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
  # holder is killed, the waiting machine takes the claim over and compiles.
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
  START=$(date +%s)
  BUILD_TIMEOUT=60 run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" Claim.Slow
  match_text 'Built Claim.Slow' "$LOG_B"
  match_text 'holder gone' "$LOG_B"
  test_exp $(( $(date +%s) - START )) -lt 30
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
  LAKE_CLAIM_TAKEOVER_SECS=5 BUILD_TIMEOUT=60 run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" Claim.Slow
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
  START=$(date +%s)
  BUILD_TIMEOUT=60 run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" Claim.Slow
  match_text 'Built Claim.Slow' "$LOG_B"
  test_exp $(( $(date +%s) - START )) -lt 30
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

case_claim_fail_fast() {
  # With `--fail-fast`, a target other than a module that waits for another machine's claim stops
  # waiting once the build is canceled: `Claim.Flaky` fails, and the build ends long before the
  # default takeover time (600 s) of `claim/copied`'s claim.
  claim_fresh
  LAKE_REMOTE_CACHE_CLAIMS=false run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" copied
  put_claim "$(inputs "$CACHE_A" claim/copied)" building
  START=$(date +%s)
  LAKE_TEST_CLAIM_FAIL=1 BUILD_TIMEOUT=60 \
    run_build 1 "$TREE_B" "$CACHE_B" "$LOG_B" --fail-fast copied Claim.Flaky
  match_text 'LAKE_TEST_CLAIM_FAIL is set' "$LOG_B"
  no_match_text 'Built claim/copied' "$LOG_B"
  test_exp $(( $(date +%s) - START )) -lt 30
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
  # second build does not wait for the first.
  claim_fresh
  test_cmd cc -shared -fPIC -o "$WORK_DIR/same-pid.so" "$TEST_DIR/SamePidLake.c" -ldl
  LAKE_PRELOAD="$WORK_DIR/same-pid.so" LAKE_TEST_CLAIM_SLEEP=120000 \
    start_build "$TREE_A" "$CACHE_A" "$LOG_A" Claim.A Claim.Slow
  PID_A=$!
  # A's first queued output (`Claim.A`'s) started its push
  test_cmd claim_check wait-text "$CACHE_A/push.log" 'lake cache push: started' --timeout 60
  START=$(date +%s)
  LAKE_PRELOAD="$WORK_DIR/same-pid.so" BUILD_TIMEOUT=60 \
    run_build 0 "$TREE_B" "$CACHE_A" "$LOG_B" Claim.B
  match_text 'Built Claim.B' "$LOG_B"
  test_exp $(( $(date +%s) - START )) -lt 30
  test_exp -d /proc/$PID_A
  # Two follow files, one per build (A still builds; B's push waits for A's)
  test_cmd claim_check wait-entries "$CACHE_A/push-follow" 2 --timeout 10
}

case_claim_queued() {
  # A build that queued a compile's outputs marks the claim `queued` and ends while its push
  # still uploads (each upload takes 4 seconds here). A build of another cache on the same host
  # that comes next finds the holder's process gone, but a `queued` claim waits for its push:
  # it restores every target from the remote cache and compiles none.
  claim_fresh
  CLAIM_SERVICE=slowobj run_build 0 "$TREE_A" "$CACHE_A" "$LOG_A" Claim claimexe
  test_cmd_eq $CLAIM_COMPILES claim_check built-by "$LOG_A"
  test_exp ! -e "$CACHE_A/remote-status-push.json"
  # The claims' states as A left them (`done` for one whose mapping the push already uploaded)
  for claim in "$CLAIMS"/*; do cp "$claim" "$WORK_DIR/state-$(basename "$claim")"; done
  CLAIM_SERVICE=slowobj BUILD_TIMEOUT=120 run_build 0 "$TREE_B" "$CACHE_B" "$LOG_B" Claim claimexe
  test_cmd_eq 0 claim_check built-by "$LOG_B"
  test_cmd_eq $CLAIM_COMPILES machine_targets "$LOG_B"
  for claim in "$WORK_DIR"/state-*; do test_cmd claim_check state "$claim" queued,done; done
  test_cmd rm -f "$WORK_DIR"/state-*
  wait_push "$CACHE_A"
  claims_done $CLAIM_COMPILES
}

case_claim_exe_push() {
  # `lake exe` keeps its Lake process while the program runs. The push that its build started
  # follows the build, not the process: it ends once the build has, while the program still runs.
  claim_fresh
  LAKE_CMD=exe LAKE_TEST_CLAIM_EXE_SLEEP=60000 start_build "$TREE_A" "$CACHE_A" "$LOG_A" claimexe
  PID_A=$!
  test_cmd claim_check wait-text "$LOG_A" 'claimexe started' --timeout 60
  test_cmd claim_check wait-file "$CACHE_A/remote-status-push.json" --timeout 20
  test_exp -d /proc/$PID_A
  no_match_text 'Hello, claim' "$LOG_A"
  test_cmd push_check status "$CACHE_A/remote-status-push.json" 3 0 0 0
}

case_claim_push_retry() {
  # A push that follows a build tries an upload that failed again (after 30 seconds) while the
  # build still runs: the first upload of each artifact is refused here, and `Claim.A`'s mapping
  # is in the remote cache before the build (which then compiles `Claim.Slow` for 50 seconds)
  # ends.
  claim_fresh
  CLAIM_SERVICE=denyartonce LAKE_TEST_CLAIM_SLEEP=50000 \
    start_build "$TREE_A" "$CACHE_A" "$LOG_A" Claim.A Claim.Slow
  PID_A=$!
  test_cmd claim_check wait-text "$CACHE_A/push.jsonl" '"target":"Claim.A"' --timeout 60
  A_INPUT="$(inputs "$CACHE_A" Claim.A)"
  test_cmd claim_check wait-file "$OBJECTS/in/$A_INPUT.json" --timeout 45
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

run_cases case_claim_two_builds case_claim_one_push case_claim_order case_claim_failed \
  case_claim_takeover case_claim_dead_holder case_claim_stale case_claim_detached_push \
  case_claim_pool_slot case_claim_fail_fast case_claim_same_pid case_claim_queued \
  case_claim_exe_push case_claim_push_retry case_claim_push_spawn_fails \
  case_claim_follow_reap case_claim_off case_claim_fail_open
