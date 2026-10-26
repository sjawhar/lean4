#!/usr/bin/env bash
# Copyright (c) 2026 Lean FRO. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.
source ../common.sh

./clean.sh

# Test the write-back of the shared remote cache: builds queue the outputs that they compile,
# and `lake cache push` uploads them. The setup and the shared helpers are in
# `../remoteCache/lib.sh`.

source ../remoteCache/lib.sh

# `lake cache push` cases. Machine A builds the package in `push/` with the
# write-back queue on (`LAKE_REMOTE_CACHE_QUEUE`), and machine B restores it at
# another path, each with a cache of its own.
PUSH_A="$WORK_DIR/push-a"
PUSH_B="$WORK_DIR/push-b"
PUSH_CACHE="$WORK_DIR/push-cache"
PUSH_CACHE_B="$WORK_DIR/push-cache-b"
PUSH_QUEUE="$PUSH_CACHE/push.jsonl"
PUSH_STATUS="$PUSH_CACHE/remote-status-push.json"
PUSH_DROPPED="$PUSH_CACHE/push-dropped.jsonl"
PUSH_SCOPE="$(remote_scope push)"
PUSH_TARGETS="Push Pre pushexe pair"
# What a fresh build of those targets compiles: six modules (`Push`, `Push.Basic`,
# `Push.Admit`, `Pre`, `Pre.Hello` and `Main`), the object file and the
# executable of `pushexe`, the object file and the shared library of the
# precompiled `Pre.Hello`, and the two files of `pair`
PUSH_COMPILES=12

push_check() { "$PYTHON" "$TEST_DIR/push_check.py" "$@"; }
# Starts both machines afresh, and removes what earlier cases uploaded for the package
push_fresh() {
  test_cmd rm -rf "$PUSH_A" "$PUSH_B" "$PUSH_CACHE" "$PUSH_CACHE_B" "$STORE_DIR/a0/$PUSH_SCOPE"
  test_cmd cp -r "$TEST_DIR/push" "$PUSH_A"
  test_cmd chmod -R u+w "$PUSH_A"
}
# Runs a command as machine A: its cache, read-through from `$PUSH_SERVICE`
# (by default `bearer`) with a token, and the queue on. Claims are off
# (`../remoteCacheClaim` tests them): with them, a build would start a push that
# empties the queue these cases count.
on_a() {
  LAKE_CACHE_DIR="$PUSH_CACHE" LAKE_REMOTE_CACHE="${PUSH_SERVICE:-bearer}" \
    LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" LAKE_REMOTE_CACHE_QUEUE=true LAKE_REMOTE_CACHE_CLAIMS=false "$@"
}
# As `on_a`, but it exports the settings and then replaces this shell with the command, so that a
# caller that starts it in the background gets the command's own process ID (a prefix assignment
# before `exec`, a special builtin, is not exported)
on_a_exec() {
  export LAKE_CACHE_DIR="$PUSH_CACHE" LAKE_REMOTE_CACHE="${PUSH_SERVICE:-bearer}" \
    LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" LAKE_REMOTE_CACHE_QUEUE=true LAKE_REMOTE_CACHE_CLAIMS=false
  exec "$@"
}
# Builds the package on machine A
build_a() { on_a test_run --dir "$PUSH_A" build $PUSH_TARGETS; }
# Counts the lines in a queue (by default, machine A's)
queued() {
  local queue="${1:-$PUSH_QUEUE}"
  if [ -f "$queue" ]; then grep -c . "$queue" || true; else echo 0; fi
}
# Restores the package as machine B, at another path with an empty cache: nothing compiles
restore_b() {
  test_cmd rm -rf "$PUSH_B" "$PUSH_CACHE_B"
  test_cmd cp -r "$TEST_DIR/push" "$PUSH_B"
  test_cmd chmod -R u+w "$PUSH_B"
  LAKE_CACHE_DIR="$PUSH_CACHE_B" LAKE_REMOTE_CACHE=ok LAKE_REMOTE_CACHE_QUEUE=true \
    test_not_out 'Built ' -v --dir "$PUSH_B" build "$@"
}

case_push_queue() {
  # A fresh build queues one line for each output it compiled, and a build
  # that replays, packs an archive, restores from the cache or unpacks an
  # archive queues none. Without the queue, or without a remote cache, a build
  # queues nothing.
  push_fresh
  build_a
  test_cmd_eq $PUSH_COMPILES queued
  test_cmd push_check same-inputs "$PUSH_QUEUE" "$PUSH_CACHE/outputs/push"
  match_text "\"remoteScope\":\"$PUSH_SCOPE\"" "$PUSH_QUEUE"
  test_cmd_eq $PUSH_COMPILES count '"service":"bearer"' "$PUSH_QUEUE"
  # Replayed
  build_a
  test_cmd_eq $PUSH_COMPILES queued
  # Packed into an archive (which sets the job's action to a build, with no compile)
  on_a test_out 'Built Push.Basic:ltar' --dir "$PUSH_A" build +Push.Basic:ltar
  test_cmd_eq $PUSH_COMPILES queued
  # Unpacked from the tree's archive, with a cache that has none of the outputs:
  # the trace matches, and the module's other outputs are gone from the tree
  test_cmd rm "$PUSH_A/.lake/build/lib/lean/Push/Basic.olean"
  LAKE_CACHE_DIR="$WORK_DIR/push-cache-unpack" LAKE_REMOTE_CACHE=bearer \
    LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" LAKE_REMOTE_CACHE_QUEUE=true \
    test_out 'leantar' -v --dir "$PUSH_A" build $PUSH_TARGETS
  no_match_text 'Built ' produced.out
  test_exp -f "$PUSH_A/.lake/build/lib/lean/Push/Basic.olean"
  test_cmd_eq 0 queued "$WORK_DIR/push-cache-unpack/push.jsonl"
  test_cmd rm -rf "$WORK_DIR/push-cache-unpack"
  # Restored from the local cache
  test_cmd rm -rf "$PUSH_A/.lake/build"
  build_a
  test_cmd_eq $PUSH_COMPILES queued
  # Replayed while an import compiled in the same build: after a fresh build
  # (which leaves the outputs in the tree), `Push` lost its cache artifacts (as
  # a cache cleaner leaves it), and a comment added to its import `Push.Basic`
  # recompiles that import to the same outputs, so `Push` keeps its input and
  # replays from the tree. Only `Push.Basic` is queued. (`Push`'s job gets the
  # import's job renewed, without its build flag, so this holds without the
  # clear in `trackBuilds` too; `case_push_custom_target` tests the clear.)
  push_fresh
  build_a
  for art in $(push_check artifacts "$PUSH_QUEUE" Push); do
    test_cmd rm "$PUSH_CACHE/artifacts/$art"
  done
  echo '-- a comment' >> "$PUSH_A/Push/Basic.lean"
  on_a test_out 'Built Push.Basic' -v --dir "$PUSH_A" build $PUSH_TARGETS
  match_pat 'Replayed Push( |$)' produced.out
  no_match_pat 'Built Push( |$)' produced.out
  test_cmd_eq $((PUSH_COMPILES + 1)) queued
  test_cmd_eq 2 count '"target":"Push.Basic"' "$PUSH_QUEUE"
  test_cmd_eq 1 count '"target":"Push"' "$PUSH_QUEUE"
  # The queue is off
  push_fresh
  LAKE_CACHE_DIR="$PUSH_CACHE" LAKE_REMOTE_CACHE=bearer LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" \
    test_run --dir "$PUSH_A" build $PUSH_TARGETS
  test_cmd_eq 0 queued
  # No remote cache is named
  push_fresh
  LAKE_CACHE_DIR="$PUSH_CACHE" LAKE_REMOTE_CACHE_QUEUE=true \
    test_run --dir "$PUSH_A" build $PUSH_TARGETS
  test_cmd_eq 0 queued
}

case_push_upload() {
  # A push uploads each entry's artifacts, then its mapping, each only if it is
  # absent and with the token, and empties the queue. A second push has nothing
  # to send. Machine B then restores everything with no compile: the modules,
  # the object files, the executable, the shared library of the precompiled
  # module, and the files of `pair`, with the logs of their builds, at two
  # requests per target, and it queues nothing.
  push_fresh
  build_a
  test_cmd_eq 1 count '"data":"[0-9a-f]*\.so"' "$PUSH_QUEUE"
  : > "$SERVER_LOG"
  on_a test_run cache push
  test_cmd_eq 0 queued
  test_cmd push_check status "$PUSH_STATUS" $PUSH_COMPILES 0 0 0
  test_cmd_eq $PUSH_COMPILES push_check order "$SERVER_LOG" "$STORE_DIR"
  test_cmd_eq 0 count_other ' auth=bearer gen=0$' "$SERVER_LOG"
  test_cmd_eq 0 count_files "$PUSH_CACHE/push-staging"
  : > "$SERVER_LOG"
  on_a test_run cache push
  test_cmd_eq 0 count ' -> ' "$SERVER_LOG"
  test_cmd push_check status "$PUSH_STATUS" 0 0 0 0
  : > "$SERVER_LOG"
  restore_b $PUSH_TARGETS
  match_text 'Push/Admit.lean:1:8: declaration uses' produced.out
  match_text 'Hello, precompiled world' produced.out
  test_exp -x "$PUSH_B/.lake/build/bin/pushexe"
  test_cmd ls "$PUSH_CACHE_B"/artifacts/*.so
  test_cmd_eq $PUSH_COMPILES count_path /in/ "$SERVER_LOG"
  test_cmd_eq $PUSH_COMPILES count_path /a/ "$SERVER_LOG"
  test_cmd_eq 0 queued "$PUSH_CACHE_B/push.jsonl"
}

case_push_tree_changed() {
  # The archive pushed for a module is packed from the cache's artifacts, not
  # from the tree: after the tree is rebuilt for an edit, the archive for the
  # first input still holds the first build's `.olean`.
  push_fresh
  on_a test_run --dir "$PUSH_A" build Push
  test_cmd cp "$PUSH_A/.lake/build/lib/lean/Push/Basic.olean" "$WORK_DIR/first.olean"
  echo 'def basic := 2' > "$PUSH_A/Push/Basic.lean"
  on_a test_out 'Built Push.Basic' --dir "$PUSH_A" build Push
  # The tree's files now belong to the second input of `Push.Basic` (and of `Push`)
  test_cmd_eq 2 count '"target":"Push.Basic"' "$PUSH_QUEUE"
  QUEUED="$(queued)"
  on_a test_run cache push
  test_cmd push_check status "$PUSH_STATUS" "$QUEUED" 0 0 0
  restore_b Push
  test_cmd cmp "$WORK_DIR/first.olean" "$PUSH_B/.lake/build/lib/lean/Push/Basic.olean"
}

case_push_mismatch() {
  # An artifact changed through its hard link after the build is not uploaded:
  # its entry is dropped and recorded, the artifact is quarantined, and the push
  # succeeds. A local build then compiles the target again.
  push_fresh
  build_a
  BASIC_INPUT="$(push_check inputs "$PUSH_QUEUE" Push.Basic)"
  test_cmd push_check flip "$PUSH_A/.lake/build/lib/lean/Push/Basic.olean"
  on_a test_out 'changed after the build' cache push
  test_cmd_eq 0 queued
  test_cmd push_check status "$PUSH_STATUS" $((PUSH_COMPILES - 1)) 0 1 0
  test_cmd_eq 1 push_check dropped "$PUSH_DROPPED" mismatch
  match_text "\"inputHash\":\"$BASIC_INPUT\"" "$PUSH_DROPPED"
  test_exp ! -e "$STORE_DIR/a0/$PUSH_SCOPE/in/$BASIC_INPUT.json"
  test_cmd_eq 1 count_files "$PUSH_CACHE/quarantine"
  test_cmd rm -rf "$PUSH_A/.lake/build"
  LAKE_CACHE_DIR="$PUSH_CACHE" test_out 'Built Push.Basic' --dir "$PUSH_A" build $PUSH_TARGETS
}

case_push_missing() {
  # An artifact deleted from the cache (as a cache cleaner does) drops its
  # entry, and the push succeeds.
  push_fresh
  build_a
  test_cmd rm "$PUSH_CACHE/artifacts/$(push_check data "$PUSH_QUEUE" push/pushexe:exe)"
  on_a test_out 'no longer in the cache' cache push
  test_cmd_eq 0 queued
  test_cmd push_check status "$PUSH_STATUS" $((PUSH_COMPILES - 1)) 0 1 0
  test_cmd_eq 1 push_check dropped "$PUSH_DROPPED" missing
  test_exp ! -e "$PUSH_CACHE/quarantine"
}

# Counts the files in a directory with the same bytes as a file
count_files_equal() {
  local n=0 f
  for f in "$1"/*; do
    if cmp -s "$f" "$2"; then n=$((n + 1)); fi
  done
  echo "$n"
}

case_push_custom_target() {
  # A job that compiles one file and replays another queues only the one it
  # compiled. `b.out`'s cache artifact is gone, so its call replays the tree's
  # file and writes its mapping again, after `a.out`'s call compiled in the same
  # job (whose state then says a build action completed).
  push_fresh
  LAKE_CACHE_DIR="$PUSH_CACHE" test_run --dir "$PUSH_A" build pair
  for art in "$PUSH_CACHE"/artifacts/*.art; do
    if cmp -s "$art" "$PUSH_A/b.in"; then test_cmd rm "$art"; fi
  done
  echo changed > "$PUSH_A/a.in"
  on_a test_out 'Built push/pair' --dir "$PUSH_A" build pair
  test_cmd_eq 1 queued
  test_cmd cmp "$PUSH_CACHE/artifacts/$(push_check entry "$PUSH_QUEUE" data)" "$PUSH_A/a.in"
  # `b.out` was cached again, from the tree
  test_cmd_eq 1 count_files_equal "$PUSH_CACHE/artifacts" "$PUSH_A/b.in"
}

case_push_githash() {
  # Nothing is queued while `LEAN_GITHASH` names another Lean or usage cutoff is
  # on. Under `lake env`, which sets `LEAN_GITHASH` to this Lean's, a build queues.
  push_fresh
  LEAN_GITHASH=0123456789abcdef0123456789abcdef01234567 build_a
  test_cmd_eq 0 queued
  push_fresh
  LAKE_USAGE_CUTOFF=true build_a
  test_cmd_eq 0 queued
  push_fresh
  on_a test_run --dir "$PUSH_A" env "$LAKE" --dir "$PUSH_A" build $PUSH_TARGETS
  test_cmd_eq $PUSH_COMPILES queued
}

case_push_deny() {
  # A push that the service refuses fails and keeps the queue, and it sends no
  # mapping whose artifacts it could not upload. A later push that the service
  # accepts empties the queue.
  push_fresh
  PUSH_SERVICE=flaky build_a
  : > "$SERVER_LOG"
  PUSH_SERVICE=flaky on_a test_status 1 cache push
  test_cmd_eq $PUSH_COMPILES count '^PUT .*/a/.* -> 403 ' "$SERVER_LOG"
  test_cmd_eq 0 count '^PUT .*/in/' "$SERVER_LOG"
  test_cmd_eq $PUSH_COMPILES queued
  test_cmd push_check status "$PUSH_STATUS" 0 $PUSH_COMPILES 0 $PUSH_COMPILES
  LAKE_CONFIG="$WORK_DIR/services-ok.toml" PUSH_SERVICE=flaky on_a test_run cache push
  test_cmd_eq 0 queued
  test_cmd push_check status "$PUSH_STATUS" $PUSH_COMPILES 0 0 0
}

case_push_invalid() {
  # Part of a line that a killed writer left does not take the next line with
  # it. Each kind of invalid line is dropped and recorded, and the push still
  # uploads the good entries and succeeds.
  push_fresh
  test_cmd mkdir -p "$PUSH_CACHE"
  printf '{"service":"bearer","remoteScope":"' > "$WORK_DIR/bad.line"
  test_cmd push_check append "$PUSH_CACHE" "$WORK_DIR/bad.line"
  build_a
  # Not UTF-8; not JSON; not an entry; an unsupported extension; not a module name
  printf '\xff\xfe\n' > "$WORK_DIR/bad.line"
  test_cmd push_check append "$PUSH_CACHE" "$WORK_DIR/bad.line"
  printf 'not json\n' > "$WORK_DIR/bad.line"
  test_cmd push_check append "$PUSH_CACHE" "$WORK_DIR/bad.line"
  printf '{"service":"bearer"}\n' > "$WORK_DIR/bad.line"
  test_cmd push_check append "$PUSH_CACHE" "$WORK_DIR/bad.line"
  printf '{"service":"bearer","remoteScope":"%s","inputHash":"0123456789abcdef","target":"x","srcHash":null,"data":"0123456789abcdef.exe/x","log":[]}\n' \
    "$PUSH_SCOPE" > "$WORK_DIR/bad.line"
  test_cmd push_check append "$PUSH_CACHE" "$WORK_DIR/bad.line"
  printf '{"service":"bearer","remoteScope":"%s","inputHash":"0123456789abcdef","target":"x/y","srcHash":"0123456789abcdef","data":{},"log":[]}\n' \
    "$PUSH_SCOPE" > "$WORK_DIR/bad.line"
  test_cmd push_check append "$PUSH_CACHE" "$WORK_DIR/bad.line"
  on_a test_out 'dropped' cache push
  test_cmd_eq 0 queued
  test_cmd push_check status "$PUSH_STATUS" $PUSH_COMPILES 0 6 0
  test_cmd_eq 6 push_check dropped "$PUSH_DROPPED" invalid
  test_exp ! -e "$STORE_DIR/a0/$PUSH_SCOPE/in/0123456789abcdef.json"
}

case_push_many() {
  # A queue longer than one upload chunk is pushed whole, and each of its
  # lines, duplicates included, leaves the queue once. Without a token, the
  # uploads are signed with the key, and they still only create their objects.
  push_fresh
  PUSH_SERVICE=ok build_a
  test_cmd push_check repeat "$PUSH_CACHE" 6
  test_cmd_eq $((6 * PUSH_COMPILES)) queued
  : > "$SERVER_LOG"
  LAKE_CACHE_DIR="$PUSH_CACHE" LAKE_REMOTE_CACHE=ok LAKE_CACHE_KEY=mock:key \
    test_run cache push
  test_cmd_eq 0 queued
  test_cmd push_check status "$PUSH_STATUS" $((6 * PUSH_COMPILES)) 0 0 0
  test_cmd_eq "$(count '^PUT ' "$SERVER_LOG")" count '^PUT .* auth=other gen=0$' "$SERVER_LOG"
  test_cmd push_check order "$SERVER_LOG" "$STORE_DIR"
}

case_push_staging() {
  # A push first removes the staging directories that dead pushes left, even
  # with nothing to push, and each push stages in a directory of its own, so a
  # dead push's `curl` cannot upload another push's files.
  push_fresh
  test_cmd mkdir -p "$PUSH_CACHE/push-staging/999999999-dead/0"
  echo stale > "$PUSH_CACHE/push-staging/999999999-dead/0/mapping.json"
  on_a test_run cache push
  test_exp ! -e "$PUSH_CACHE/push-staging/999999999-dead"
  build_a
  on_a test_out 'staging uploads in' cache push -v
  FIRST="$(sed -n 's/.*staging uploads in //p' produced.out)"
  echo changed > "$PUSH_A/a.in"
  on_a test_run --dir "$PUSH_A" build pair
  on_a test_out 'staging uploads in' cache push -v
  SECOND="$(sed -n 's/.*staging uploads in //p' produced.out)"
  test_exp "${FIRST%/*}" = "$PUSH_CACHE/push-staging"
  test_exp "${SECOND%/*}" = "$PUSH_CACHE/push-staging"
  test_exp "$FIRST" != "$SECOND"
  test_cmd_eq 0 queued
  test_cmd push_check status "$PUSH_STATUS" 1 0 0 0
  test_cmd_eq 0 count_files "$PUSH_CACHE/push-staging"
}

case_push_concurrent() {
  # Of two pushes started together, one uploads and the other exits at once,
  # writing nothing. A line appended while the first one runs is pushed by it.
  # A push with `--wait` started while another runs returns after that one.
  push_fresh
  PUSH_SERVICE=slowput build_a
  echo changed > "$PUSH_A/a.in"
  PUSH_SERVICE=slowput on_a test_run --dir "$PUSH_A" build pair
  # Held back from the queue until a push runs
  test_cmd push_check take-last "$PUSH_CACHE" "$WORK_DIR/late.jsonl"
  LATE_INPUT="$("$PYTHON" -c 'import json, sys; print(json.load(open(sys.argv[1]))["inputHash"])' \
    "$WORK_DIR/late.jsonl")"
  : > "$SERVER_LOG"
  rm -f push1.out push2.out
  PUSH_SERVICE=slowput on_a "$LAKE" cache push > push1.out 2>&1 &
  PUSH1=$!
  PUSH_SERVICE=slowput on_a "$LAKE" cache push > push2.out 2>&1 &
  PUSH2=$!
  WINNER="$(push_check wait-text 60 'pushing' push1.out push2.out)"
  if [ "$WINNER" = push1.out ]; then
    RUNNING=$PUSH1 OTHER=$PUSH2 OTHER_OUT=push2.out
  else
    RUNNING=$PUSH2 OTHER=$PUSH1 OTHER_OUT=push1.out
  fi
  if wait $OTHER; then rc=0; else rc=$?; fi
  test_exp $rc = 0
  match_text 'another `lake cache push` uploads the queue' "$OTHER_OUT"
  test_cmd kill -0 $RUNNING
  test_exp ! -e "$PUSH_STATUS"
  test_cmd push_check append "$PUSH_CACHE" "$WORK_DIR/late.jsonl"
  if wait $RUNNING; then rc=0; else rc=$?; fi
  test_exp $rc = 0
  test_cmd_eq 0 queued
  test_cmd push_check status "$PUSH_STATUS" $((PUSH_COMPILES + 1)) 0 0 0
  test_exp -f "$STORE_DIR/a0/$PUSH_SCOPE/in/$LATE_INPUT.json"
  # Each object was uploaded once, by one push
  test_cmd_eq 0 push_check duplicates "$SERVER_LOG"
  # `--wait`
  echo 'changed again' > "$PUSH_A/b.in"
  PUSH_SERVICE=slowput on_a test_run --dir "$PUSH_A" build pair
  WAIT_INPUT="$(push_check entry "$PUSH_QUEUE" inputHash)"
  rm -f push3.out
  PUSH_SERVICE=slowput on_a "$LAKE" cache push > push3.out 2>&1 &
  PUSH3=$!
  test_cmd push_check wait-text 60 'pushing' push3.out
  PUSH_SERVICE=slowput on_a test_not_out 'pushing' cache push --wait
  test_exp -f "$STORE_DIR/a0/$PUSH_SCOPE/in/$WAIT_INPUT.json"
  test_cmd_eq 0 queued
  if wait $PUSH3; then rc=0; else rc=$?; fi
  test_exp $rc = 0
}

case_push_stall() {
  # An upload whose server reads it and then does not answer gives up, as a download does:
  # the push fails long before the server would answer (after 15 minutes), keeps the queue,
  # and records the failure. Each try of an upload gives up after 30 s without progress, and
  # Lake tries it 4 times (after 1, 2 and 4 s). The two small files of `pair` go to one HTTP/1.1
  # server, where `curl` 8.5 starts the second upload only once the first has given up, so each
  # try of the pair can take 60 s and the push about 250 s.
  push_fresh
  PUSH_SERVICE=stallput on_a test_run --dir "$PUSH_A" build pair
  test_cmd_eq 2 queued
  local start elapsed rc
  start="$(date +%s)"
  if PUSH_SERVICE=stallput on_a timeout 400 "$LAKE" cache push > push.out 2>&1; then
    rc=0
  else
    rc=$?
  fi
  elapsed=$(($(date +%s) - start))
  cat push.out
  echo "lake exited with code $rc after $elapsed seconds"
  test_exp "$rc" = 1
  test_exp "$elapsed" -lt 300
  match_text 'Operation too slow' push.out
  test_cmd_eq 2 queued
  test_cmd push_check status "$PUSH_STATUS" 0 2 0 2
}

case_push_busy() {
  # A server that answers the first upload of each object with 503 (it is busy) gets the upload
  # again, in a `curl` run of its own, and the push uploads everything. `curl` itself never tries
  # an upload again: from 8.17.0 to 8.19.0 (curl issue 20669), a parallel `curl` run that waits to
  # try a transfer again after its other transfers have ended never ends.
  push_fresh
  PUSH_SERVICE=busyonce on_a test_run --dir "$PUSH_A" build pair
  test_cmd_eq 2 queued
  : > "$SERVER_LOG"
  local start elapsed rc
  start="$(date +%s)"
  if PUSH_SERVICE=busyonce on_a timeout 120 "$LAKE" cache push > push.out 2>&1; then
    rc=0
  else
    rc=$?
  fi
  elapsed=$(($(date +%s) - start))
  cat push.out
  echo "lake exited with code $rc after $elapsed seconds"
  test_exp "$rc" = 0
  test_cmd_eq 0 queued
  test_cmd push_check status "$PUSH_STATUS" 2 0 0 0
  # Each artifact and mapping was refused once and then created
  test_cmd_eq 4 count ' -> 503 ' "$SERVER_LOG"
  test_cmd_eq 4 count ' -> 200 ' "$SERVER_LOG"
}

case_push_curl_hang() {
  # A `curl` run that never ends (here, one that sleeps after its transfers) is stopped once it
  # has run as long as its transfers may take: the push goes on, and the uploads that `curl`
  # reported before count.
  push_fresh
  build_a
  cat > "$WORK_DIR/hang-curl.sh" << EOF
#!/bin/sh
"$(type -P curl)" "\$@"
exec sleep 900
EOF
  test_cmd chmod +x "$WORK_DIR/hang-curl.sh"
  local start elapsed rc
  start="$(date +%s)"
  if CURL="$WORK_DIR/hang-curl.sh" on_a timeout 400 "$LAKE" cache push > push.out 2>&1; then
    rc=0
  else
    rc=$?
  fi
  elapsed=$(($(date +%s) - start))
  cat push.out
  echo "lake exited with code $rc after $elapsed seconds"
  test_exp "$rc" = 0
  test_exp "$elapsed" -lt 250
  match_text 'Lake stopped it' push.out
  test_cmd_eq 0 queued
  test_cmd push_check status "$PUSH_STATUS" $PUSH_COMPILES 0 0 0
}

case_push_resume() {
  # A push that is stopped keeps what it pushed: it removes the lines of the chunks it pushed
  # from the queue as it goes, at most a tenth of the time (`pushFlushFactor`). Here 240 lines
  # (each of the 12 entries for 20 inputs) go up in chunks of 64, each upload taking 4 s. The
  # push is killed once it has uploaded the mappings of two chunks, so a push that rewrites the
  # queue only at the end of a pass leaves all 240 lines. The next push then sends the mappings
  # that are left, and redoes at most the one chunk whose lines the first push had not removed.
  push_fresh
  PUSH_SERVICE=slowobj build_a
  test_cmd push_check spread "$PUSH_CACHE" 20
  local total left pid sent
  total="$(queued)"
  test_exp "$total" = $((PUSH_COMPILES * 20))
  : > "$SERVER_LOG"
  # In a subshell that exports the settings and then becomes Lake, so that `$!` is Lake itself
  PUSH_SERVICE=slowobj on_a_exec "$LAKE" cache push > push1.out 2>&1 &
  pid=$!
  sent="$(push_check wait-puts 180 "$SERVER_LOG" /in/ 128)"
  kill -9 "$pid" 2> /dev/null || true
  wait "$pid" || true
  left="$(queued)"
  cat push1.out
  echo "the first push sent $sent mappings and left $left of $total lines"
  test_exp "$sent" -ge 128
  test_exp "$left" -le $((total - 64))
  test_exp "$left" -gt 0
  PUSH_SERVICE=slowobj on_a test_run cache push
  test_cmd_eq 0 queued
  # Every mapping went up, and at most one chunk's mappings went up twice
  test_cmd_eq "$total" count '^PUT .*/in/.* -> 200 ' "$SERVER_LOG"
  test_exp "$(count '^PUT .*/in/' "$SERVER_LOG")" -le $((total + 64))
}

case_push_pack_failure() {
  # The entries of a chunk are staged and packed at once, and a pack that fails
  # fails only its own entry: the others are uploaded, and the failed one stays
  # queued (with no mapping) until a later push packs it. A Lean installation
  # whose `leantar` refuses `Push.Admit`'s archive (through `LEAN_SYSROOT`)
  # injects the failure.
  push_fresh
  build_a
  local real fake
  real="$(cd "$PUSH_A" && "$LAKE" env printenv LEAN_SYSROOT)"
  fake="$WORK_DIR/fake-sysroot"
  test_cmd rm -rf "$fake"
  test_cmd mkdir -p "$fake/bin"
  for entry in "$real"/*; do
    [ "$(basename "$entry")" = bin ] || ln -s "$entry" "$fake/"
  done
  for entry in "$real"/bin/*; do
    [ "$(basename "$entry")" = leantar ] || ln -s "$entry" "$fake/bin/"
  done
  cat > "$fake/bin/leantar" << EOF
#!/bin/sh
case " \$* " in
  *" Admit.trace "*) echo "leantar: injected failure" >&2; exit 1 ;;
esac
exec "$real/bin/leantar" "\$@"
EOF
  chmod +x "$fake/bin/leantar"
  BASIC_INPUT="$(push_check inputs "$PUSH_QUEUE" Push.Basic)"
  ADMIT_INPUT="$(push_check inputs "$PUSH_QUEUE" Push.Admit)"
  : > "$SERVER_LOG"
  LAKE_OVERRIDE_LEAN=true LEAN_SYSROOT="$fake" on_a \
    test_status_out 1 'injected failure' -v cache push
  match_text 'staging with ' produced.out
  test_cmd_eq 1 queued
  match_text '"target":"Push.Admit"' "$PUSH_QUEUE"
  test_cmd push_check status "$PUSH_STATUS" $((PUSH_COMPILES - 1)) 1 0 1
  test_cmd push_check order "$SERVER_LOG" "$STORE_DIR"
  test_exp -f "$STORE_DIR/a0/$PUSH_SCOPE/in/$BASIC_INPUT.json"
  test_exp ! -e "$STORE_DIR/a0/$PUSH_SCOPE/in/$ADMIT_INPUT.json"
  on_a test_run cache push
  test_cmd_eq 0 queued
  test_cmd push_check status "$PUSH_STATUS" 1 0 0 0
  test_exp -f "$STORE_DIR/a0/$PUSH_SCOPE/in/$ADMIT_INPUT.json"
}

# The interposer that pauses a Lake process at a race of the shared cache (see `Interpose.c`)
INTERPOSE="$WORK_DIR/interpose.so"
build_interpose() {
  if [ ! -f "$INTERPOSE" ]; then
    test_cmd cc -shared -fPIC -o "$INTERPOSE" "$TEST_DIR/Interpose.c" -ldl
  fi
}
# Waits for a file that a paused process creates
wait_probe() {
  local i
  for i in $(seq 1 600); do
    if [ -e "$1" ]; then return 0; fi
    sleep 0.1
  done
  echo "FAILURE: $1 did not appear"
  return 1
}

# Waits for one of two files that a process creates, and prints which one appeared first
wait_probe_any() {
  local i
  for i in $(seq 1 600); do
    if [ -e "$1" ]; then echo "$1"; return 0; fi
    if [ -e "$2" ]; then echo "$2"; return 0; fi
    sleep 0.1
  done
  echo "FAILURE: neither $1 nor $2 appeared" >&2
  return 1
}
# The cache artifact of the `.olean` of a module that machine A's queue names
olean_artifact() {
  echo "$1/artifacts/$(push_check artifacts "$PUSH_QUEUE" "$2" | grep '\.olean$')"
}

case_push_repair_race() {
  # A build that repairs a cache entry while the push has found its bytes wrong keeps its
  # repair: the push takes the entry away from its name only by renaming it, so it only ever
  # removes bytes that it hashed itself, and it pushes the right bytes that it then finds.
  # The push is paused where it takes the entry away from its name, the entry is repaired, and
  # the push goes on.
  push_fresh
  build_a
  local entry good
  entry="$(olean_artifact "$PUSH_CACHE" Push.Basic)"
  good="$WORK_DIR/good-entry"
  test_cmd cp "$entry" "$good"
  # The entry no longer has the hash in its name, as a write through its hard link leaves it
  test_cmd push_check flip "$PUSH_A/.lake/build/lib/lean/Push/Basic.olean"
  test_cmd rm -f "$WORK_DIR/entry-ready" "$WORK_DIR/entry-release"
  build_interpose
  PROBE_ENTRY_READY="$WORK_DIR/entry-ready" PROBE_ENTRY_RELEASE="$WORK_DIR/entry-release" \
    LD_PRELOAD="$INTERPOSE" on_a "$LAKE" cache push > "$WORK_DIR/push-race.log" 2>&1 &
  local push=$!
  wait_probe "$WORK_DIR/entry-ready"
  # Another build repairs the entry, as `Cache.saveArtifact` does: the wrong bytes go, the
  # right ones take their name
  test_cmd rm -f "$entry"
  test_cmd cp "$good" "$entry"
  test_cmd touch "$WORK_DIR/entry-release"
  wait $push
  cat "$WORK_DIR/push-race.log"
  # The repair is still there, and the push sent it
  test_cmd cmp "$entry" "$good"
  test_cmd_eq 0 queued
  test_cmd push_check status "$PUSH_STATUS" $PUSH_COMPILES 0 0 0
  test_exp ! -e "$PUSH_DROPPED"
}

case_push_mapping_overwrite() {
  # A mapping that a build writes over an existing one is published through a temporary file
  # that is renamed into place, so another process reads the old mapping or the new one, never
  # a file that one writer has truncated. With the cache's artifacts gone and its mappings
  # kept, a build compiles each target again and writes each mapping over the old one.
  push_fresh
  build_a
  test_cmd rm -rf "$PUSH_A/.lake/build" "$PUSH_CACHE/artifacts" "$WORK_DIR/mapping-ready" \
    "$WORK_DIR/mapping-release" "$WORK_DIR/mapping-rename"
  build_interpose
  PROBE_MAPPING_READY="$WORK_DIR/mapping-ready" PROBE_MAPPING_RELEASE="$WORK_DIR/mapping-release" \
    PROBE_MAPPING_RENAME="$WORK_DIR/mapping-rename" LD_PRELOAD="$INTERPOSE" \
    on_a "$LAKE" --dir "$PUSH_A" build $PUSH_TARGETS > "$WORK_DIR/mapping-build.log" 2>&1 &
  local build=$!
  wait_probe_any "$WORK_DIR/mapping-ready" "$WORK_DIR/mapping-rename"
  test_cmd touch "$WORK_DIR/mapping-release"
  wait $build
  cat "$WORK_DIR/mapping-build.log"
  # No writer truncated a mapping in place, and the mappings were replaced by a rename
  test_exp ! -e "$WORK_DIR/mapping-ready"
  test_exp -e "$WORK_DIR/mapping-rename"
  # Every mapping of the cache is whole JSON
  test_cmd push_check mappings "$PUSH_CACHE"
}

case_push_unset() {
  # After `LAKE_REMOTE_CACHE` is unset, the mappings that an earlier build downloaded no longer
  # read the shared bucket: with their artifacts pruned from the cache, the build makes `pair`'s
  # two files again and sends no request. (`pair` is a target other than a module, whose mapping
  # names each artifact by its SHA-256 in the bucket.)
  push_fresh
  build_a
  on_a test_run cache push
  restore_b $PUSH_TARGETS
  test_exp -d "$PUSH_CACHE_B/outputs"
  test_cmd rm -rf "$PUSH_CACHE_B/artifacts" "$PUSH_B/.lake/build"
  : > "$SERVER_LOG"
  LAKE_CACHE_DIR="$PUSH_CACHE_B" test_out 'Built push/pair' -v --dir "$PUSH_B" build $PUSH_TARGETS
  # `test_cmd_eq` writes the output of its own command to `produced.out`, so a count of the
  # build's output reads a copy of it
  test_cmd cp produced.out "$WORK_DIR/unset.out"
  test_cmd_eq 0 count ' -> ' "$SERVER_LOG"
  test_cmd_eq 0 count ' Fetched ' "$WORK_DIR/unset.out"
  test_cmd cmp "$PUSH_B/.lake/build/b.out" "$PUSH_B/b.in"
  # Every target of the library, with its artifacts pruned from the cache and the remote cache
  # unset: the build sends no request, so no target is `Fetched`. A job that kept its outputs
  # replays them, and one that lost them compiles again; the caption says which.
  : > "$SERVER_LOG"
  test_cmd rm -rf "$PUSH_CACHE_B/artifacts"
  LAKE_CACHE_DIR="$PUSH_CACHE_B" test_out 'Replayed push/pair' -v --dir "$PUSH_B" build Push pair
  test_cmd cp produced.out "$WORK_DIR/unset.out"
  test_cmd_eq 0 count ' -> ' "$SERVER_LOG"
  test_cmd_eq 0 count ' Fetched ' "$WORK_DIR/unset.out"
}

case_push_unset_caption() {
  # A target whose mapping names a cache service, whose cache artifact was pruned, and whose
  # outputs are still in the build directory: with `LAKE_REMOTE_CACHE` unset the build sends no
  # request and puts the outputs back in the cache from the build directory. It is not a fetch,
  # so no target is captioned `Fetched`. (The r7 acceptance's first C7 attempt captioned 422
  # `c.o` targets and 3 links that way.)
  push_fresh
  build_a
  on_a test_run cache push
  # The mappings of the restore name the service, and the build directories stay
  restore_b $PUSH_TARGETS
  test_cmd rm -rf "$PUSH_CACHE_B/artifacts"
  : > "$SERVER_LOG"
  LAKE_CACHE_DIR="$PUSH_CACHE_B" test_out 'Pre.Hello:dynlib' -v --dir "$PUSH_B" build $PUSH_TARGETS
  test_cmd cp produced.out "$WORK_DIR/unset.out"
  test_cmd_eq 0 count ' -> ' "$SERVER_LOG"
  test_cmd_eq 0 count ' Fetched ' "$WORK_DIR/unset.out"
}

case_push_local_pruned() {
  # A local mapping that cannot be used does not hide the remote cache: the build reads the
  # remote mapping, replaces the local one with it, and restores the modules instead of
  # compiling them. Two ways a local mapping becomes unusable: its artifacts are pruned, and
  # its file does not parse.
  push_fresh
  build_a
  local basic mapping
  basic="$(push_check inputs "$PUSH_QUEUE" Push.Basic)"
  on_a test_run cache push
  test_exp -d "$PUSH_CACHE/outputs"
  test_cmd rm -rf "$PUSH_CACHE/artifacts" "$PUSH_A/.lake/build"
  : > "$SERVER_LOG"
  on_a test_not_out 'Built Push.Basic' -v --dir "$PUSH_A" build Push
  test_exp "$(count '^GET .*/in/.* -> 200' "$SERVER_LOG")" -ge 1
  # The remote mapping replaced the local one, so the next build needs no request
  : > "$SERVER_LOG"
  test_cmd rm -rf "$PUSH_A/.lake/build"
  on_a test_not_out 'Built Push.Basic' -v --dir "$PUSH_A" build Push
  test_cmd_eq 0 count ' -> ' "$SERVER_LOG"
  # A mapping file of nonsense: the build reads the remote one over it
  mapping="$(find "$PUSH_CACHE/outputs" -name "$basic.json" -print -quit)"
  test_exp -f "$mapping"
  echo 'not json' > "$mapping"
  test_cmd rm -rf "$PUSH_A/.lake/build" "$PUSH_CACHE/artifacts"
  : > "$SERVER_LOG"
  on_a test_not_out 'Built Push.Basic' -v --dir "$PUSH_A" build Push
  test_cmd "$PYTHON" -c 'import json,sys; json.load(open(sys.argv[1]))' "$mapping"
}

case_push_bad_archive() {
  # A downloaded archive whose digests match but which does not unpack is a cache miss: the
  # build compiles the module, moves the archive into the cache's quarantine and records the
  # failure. Here `Push.Basic`'s archive in the bucket is replaced by bytes that are not an
  # archive, and both of its hashes in the remote mapping name those bytes.
  push_fresh
  build_a
  seed_bad_archive
  test_cmd rm -rf "$PUSH_B" "$PUSH_CACHE_B"
  test_cmd cp -r "$TEST_DIR/push" "$PUSH_B"
  test_cmd chmod -R u+w "$PUSH_B"
  LAKE_CACHE_DIR="$PUSH_CACHE_B" LAKE_REMOTE_CACHE=ok \
    test_out 'Built Push.Basic' -v --dir "$PUSH_B" build Push
  match_text 'did not unpack' produced.out
  test_cmd_eq 1 count_files "$PUSH_CACHE_B/quarantine"
  match_text 'did not unpack' "$PUSH_CACHE_B/remote-status-read.json"
}

# Replaces `Push.Basic`'s archive in the bucket by bytes that are not an archive, and names
# those bytes in both of the hashes of its remote mapping. Keeps the archive that the push
# uploaded in `$WORK_DIR/good-archive`, and the bad archive's cache name in
# `$WORK_DIR/bad-archive-name`.
seed_bad_archive() {
  local input bad lakehash sha mapping
  input="$(push_check inputs "$PUSH_QUEUE" Push.Basic)"
  on_a test_run cache push
  mapping="$STORE_DIR/a0/$PUSH_SCOPE/in/$input.json"
  test_exp -f "$mapping"
  test_cmd cp "$STORE_DIR/a0/$PUSH_SCOPE/a/$("$PYTHON" -c 'import json,sys
m = json.load(open(sys.argv[1]))
print(m["sha256"][m["data"]])' "$mapping").art" "$WORK_DIR/good-archive"
  bad="$WORK_DIR/not-an-archive"
  echo 'this is not a Lean archive' > "$bad"
  lakehash="$(LEAN_PATH="$BUILD_DIR/lib/lean" "$BUILD_DIR/bin/lean" --run "$TEST_DIR/HashFile.lean" "$bad")"
  sha="$(sha256sum "$bad" | cut -d' ' -f1)"
  test_cmd cp "$bad" "$STORE_DIR/a0/$PUSH_SCOPE/a/$sha.art"
  "$PYTHON" -c 'import json,sys
m = json.load(open(sys.argv[1]))
m["data"] = sys.argv[2] + ".ltar"
m["sha256"] = {sys.argv[2] + ".ltar": sys.argv[3]}
json.dump(m, open(sys.argv[1], "w"))' "$mapping" "$lakehash" "$sha"
  echo "$lakehash.ltar" > "$WORK_DIR/bad-archive-name"
}

case_push_bad_archive_race() {
  # A build that installs a good archive while another build quarantines the bad one keeps its
  # archive: the quarantine takes the entry away from its name by renaming it, so only the bytes
  # it took can go. The build is paused where it takes the entry away, the entry is replaced by
  # an archive that unpacks, and the build goes on.
  push_fresh
  build_a
  local name entry good
  seed_bad_archive
  name="$(cat "$WORK_DIR/bad-archive-name")"
  good="$WORK_DIR/good-archive"
  test_cmd rm -rf "$PUSH_B" "$PUSH_CACHE_B" "$WORK_DIR/entry-ready" "$WORK_DIR/entry-release"
  test_cmd cp -r "$TEST_DIR/push" "$PUSH_B"
  test_cmd chmod -R u+w "$PUSH_B"
  entry="$PUSH_CACHE_B/artifacts/$name"
  build_interpose
  PROBE_ENTRY_READY="$WORK_DIR/entry-ready" PROBE_ENTRY_RELEASE="$WORK_DIR/entry-release" \
    LD_PRELOAD="$INTERPOSE" LAKE_CACHE_DIR="$PUSH_CACHE_B" LAKE_REMOTE_CACHE=ok \
    "$LAKE" -v --dir "$PUSH_B" build Push > "$WORK_DIR/race-build.log" 2>&1 &
  local build=$!
  wait_probe "$WORK_DIR/entry-ready"
  # Another build repairs the entry with an archive that unpacks
  test_cmd rm -f "$entry"
  test_cmd cp "$good" "$entry"
  test_cmd touch "$WORK_DIR/entry-release"
  wait $build
  cat "$WORK_DIR/race-build.log"
  # The repair is still at the entry's name, and no copy of it was quarantined: the build
  # removes only the bytes it tested
  test_cmd cmp "$entry" "$good"
  test_cmd_eq 0 count_files_equal "$PUSH_CACHE_B/quarantine" "$good"
  match_text 'another process replaced it, which this build kept' "$WORK_DIR/race-build.log"
  match_text 'Built Push.Basic' "$WORK_DIR/race-build.log"
}

case_push_bad_archive_tick() {
  # The build tells its own archive from a replacement by the file, not by its size and its
  # modification time: a Linux modification time advances on a tick of about a millisecond, so
  # a replacement of the same size written within one tick carries the same size and the same
  # time as the file the build tested. Here the replacement is given both, and the build must
  # still keep it.
  push_fresh
  build_a
  local name entry other
  seed_bad_archive
  name="$(cat "$WORK_DIR/bad-archive-name")"
  other="$WORK_DIR/other-archive"
  test_cmd rm -rf "$PUSH_B" "$PUSH_CACHE_B" "$WORK_DIR/entry-ready" "$WORK_DIR/entry-release"
  test_cmd cp -r "$TEST_DIR/push" "$PUSH_B"
  test_cmd chmod -R u+w "$PUSH_B"
  entry="$PUSH_CACHE_B/artifacts/$name"
  build_interpose
  PROBE_ENTRY_READY="$WORK_DIR/entry-ready" PROBE_ENTRY_RELEASE="$WORK_DIR/entry-release" \
    LD_PRELOAD="$INTERPOSE" LAKE_CACHE_DIR="$PUSH_CACHE_B" LAKE_REMOTE_CACHE=ok \
    "$LAKE" -v --dir "$PUSH_B" build Push > "$WORK_DIR/race-build.log" 2>&1 &
  local build=$!
  wait_probe "$WORK_DIR/entry-ready"
  # Another build writes another archive of the same size, in the same tick of the clock
  sed 's/Lean/lean/' "$WORK_DIR/not-an-archive" > "$other"
  test_cmd_eq "$(stat -c %s "$WORK_DIR/not-an-archive")" stat -c %s "$other"
  test_cmd touch -r "$entry" "$other"
  test_cmd rm -f "$entry"
  test_cmd cp -p "$other" "$entry"
  test_cmd touch "$WORK_DIR/entry-release"
  wait $build
  cat "$WORK_DIR/race-build.log"
  # The other archive is still at the entry's name and no copy of it was quarantined
  test_cmd cmp "$entry" "$other"
  test_cmd_eq 0 count_files_equal "$PUSH_CACHE_B/quarantine" "$other"
  match_text 'another process replaced it, which this build kept' "$WORK_DIR/race-build.log"
  match_text 'Built Push.Basic' "$WORK_DIR/race-build.log"
}

case_push_unpack_readonly() {
  # A package that reads the artifact cache and does not write it (the default) writes nothing
  # into the cache when it unpacks an archive from it: the build makes no link to the archive.
  # So its restores leave no quarantine directory, and a cache directory that it cannot write
  # does not fail them.
  push_fresh
  build_a
  on_a test_run cache push
  test_cmd rm -rf "$PUSH_B" "$PUSH_CACHE_B"
  test_cmd cp -r "$TEST_DIR/push" "$PUSH_B"
  test_cmd chmod -R u+w "$PUSH_B"
  test_cmd sed -i '/enableArtifactCache/d' "$PUSH_B/lakefile.lean"
  # The modules' archives come from the remote cache and are unpacked
  LAKE_CACHE_DIR="$PUSH_CACHE_B" LAKE_REMOTE_CACHE=ok \
    test_not_out 'Built ' -v --dir "$PUSH_B" build Push
  match_text 'leantar' produced.out
  test_exp ! -e "$PUSH_CACHE_B/quarantine"
  # Again from the local cache, which the build now cannot write
  test_cmd rm -rf "$PUSH_B/.lake/build"
  test_cmd chmod -R a-w "$PUSH_CACHE_B"
  local rc=0
  LAKE_CACHE_DIR="$PUSH_CACHE_B" test_out 'Push.Basic' -v --dir "$PUSH_B" build Push || rc=$?
  test_cmd chmod -R u+w "$PUSH_CACHE_B"
  test_exp "$rc" = 0
  match_text 'leantar' produced.out
  no_match_pat 'Built Push(\.Basic)?( |$)' produced.out
}

run_cases case_push_queue case_push_upload case_push_tree_changed case_push_mismatch \
  case_push_missing case_push_custom_target case_push_githash case_push_deny case_push_invalid \
  case_push_many case_push_staging case_push_concurrent case_push_stall case_push_busy \
  case_push_curl_hang case_push_resume case_push_pack_failure \
  case_push_repair_race case_push_mapping_overwrite case_push_unset case_push_unset_caption \
  case_push_local_pruned case_push_bad_archive case_push_bad_archive_race \
  case_push_bad_archive_tick case_push_unpack_readonly
