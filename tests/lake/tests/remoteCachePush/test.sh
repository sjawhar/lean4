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
  # and records the failure. Each upload gives up after 30 s without progress, and `curl`
  # tries it 4 times; the two small files of `pair` keep that near the minimum.
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
  match_text 'Operation too slow' push.out
  test_cmd_eq 2 queued
  test_cmd push_check status "$PUSH_STATUS" 0 2 0 2
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

run_cases case_push_queue case_push_upload case_push_tree_changed case_push_mismatch \
  case_push_missing case_push_custom_target case_push_githash case_push_deny case_push_invalid \
  case_push_many case_push_staging case_push_concurrent case_push_stall case_push_pack_failure
