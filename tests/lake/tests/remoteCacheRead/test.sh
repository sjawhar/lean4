#!/usr/bin/env bash
# Copyright (c) 2026 Lean FRO. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.
source ../common.sh

./clean.sh

# Test read-through from the shared remote cache that `LAKE_REMOTE_CACHE` names: after a miss
# in the local cache, a build reads the input-hash mapping and the SHA-256-addressed artifacts
# that `seed_remote.py` stores as `lake cache push` would, and each failure is a cache miss.
# The setup and the shared helpers are in `../remoteCache/lib.sh`.

source ../remoteCache/lib.sh

# Build the package once, into the cache of the machine that uploads
LAKE_CACHE_DIR="$BUILD_CACHE_DIR" test_run build Test native -o remote-outputs.jsonl
# A remote restore replaces its trace with a synthetic one, so the seeder keeps
# the source traces of the fresh producer build separately.
test_cmd cp -r .lake/build seed-build

seed_remote() {
  "$PYTHON" "$TEST_DIR/seed_remote.py" \
    --store "$STORE_DIR/a0" \
    --scope "$(remote_scope)" \
    --outputs remote-outputs.jsonl \
    --cache "$BUILD_CACHE_DIR" \
    --build seed-build \
    "$@"
}

remote_targets() {
  "$PYTHON" -c 'import json, sys; print(sum(bool(line.strip()) for line in open(sys.argv[1])) - 1)' \
    remote-outputs.jsonl
}

case_read_through() {
  # A missing local mapping reads every module and native target mapping and
  # its SHA-256-addressed artifact. The next build is entirely local, so it
  # neither sends a request nor starts the token command.
  seed_remote
  fresh
  : > "$SERVER_LOG"
  LAKE_REMOTE_CACHE=ok test_not_out 'Built ' -v build Test native
  test_cmd_eq "$(remote_targets)" count_path /in/ "$SERVER_LOG"
  test_cmd_eq "$(remote_targets)" count_path /a/ "$SERVER_LOG"
  : > "$SERVER_LOG"
  rm -f "$TOKEN_RUNS"
  LAKE_REMOTE_CACHE=ok LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" test_run build Test native
  test_cmd_eq 0 token_runs
  test_cmd_eq 0 count ' -> ' "$SERVER_LOG"
  # Read-through is opt-in: without it a fresh cache compiles and makes no request.
  fresh
  : > "$SERVER_LOG"
  test_out 'Built Test' build Test native
  test_cmd_eq 0 count ' -> ' "$SERVER_LOG"
}

case_read_404() {
  # A missing remote mapping is a normal cache miss: each target compiles after
  # exactly one mapping request, without an artifact request, and the miss is
  # visible at verbose level.
  fresh
  : > "$SERVER_LOG"
  LAKE_REMOTE_CACHE=miss test_out 'Built Test' build Test native
  match_text 'Built Test' produced.out
  match_text 'Built native' produced.out
  test_cmd_eq "$(remote_targets)" count_path /in/ "$SERVER_LOG"
  test_cmd_eq 0 count_path /a/ "$SERVER_LOG"
  fresh
  LAKE_REMOTE_CACHE=miss test_out 'remote cache mapping miss' -v build Test native
}

case_read_invalid_mapping() {
  # A map must name this build's input, target and source hashes. Each mismatch
  # falls back to a local compile and reports the rejected field at verbose level.
  for field in srcHash target inputHash; do
    seed_remote --bad "$field" --bad-target Test.Basic
    fresh
    : > "$SERVER_LOG"
    LAKE_REMOTE_CACHE=ok test_out "$field" -v build Test native
    match_text 'Built Test.Basic' produced.out
  done
}

case_read_bad_artifact() {
  # The artifact's SHA-256 is checked before its Lake hash and a bad remote
  # ltar never becomes a cache file.
  BAD_ART="$(seed_remote --bad sha256 --bad-target Test.Basic)"
  fresh
  LAKE_REMOTE_CACHE=ok test_out 'SHA-256' -v build Test native
  test_exp -n "$BAD_ART"
  test_exp ! -e "$CACHE_DIR/artifacts/$BAD_ART"
  match_text 'Built Test.Basic' produced.out
}

case_read_bad_descriptor() {
  # Data from the bucket cannot turn an extension into a local path.
  seed_remote --bad ext --bad-target Test.Basic
  fresh
  LAKE_REMOTE_CACHE=ok test_out 'extension' -v build Test native
  test_exp ! -e "$CACHE_DIR/x"
  match_text 'Built Test.Basic' produced.out
}

case_read_transport() {
  # Connection resets, permission failures and an oversized artifact all turn
  # into cache misses and leave the build successful.
  seed_remote
  for service in reset deny oversize; do
    fresh
    : > "$SERVER_LOG"
    LAKE_REMOTE_CACHE="$service" test_out 'Built Test' build Test native
    test_cmd_eq "$(remote_targets)" count_path /in/ "$SERVER_LOG"
  done
}

case_read_status() {
  # Non-404 failures are carried to the build-level status file. An unknown
  # service sends no request but still records the configuration error.
  seed_remote
  fresh
  : > "$SERVER_LOG"
  LAKE_REMOTE_CACHE=deny test_run build Test native
  "$PYTHON" -c '
import json, sys, time
status = json.load(open(sys.argv[1]))
assert status["failures"] == int(sys.argv[2]), status
assert "403" in status["lastError"], status
# The wall-clock time of the build, in seconds since the Unix epoch
assert isinstance(status["at"], int) and abs(status["at"] - time.time()) < 600, status
' "$CACHE_DIR/remote-status-read.json" "$(remote_targets)"
  fresh
  : > "$SERVER_LOG"
  LAKE_REMOTE_CACHE=unknown test_run build Test
  test_cmd_eq 0 count ' -> ' "$SERVER_LOG"
  "$PYTHON" -c '
import json, sys
status = json.load(open(sys.argv[1]))
assert status["failures"] > 0, status
assert "unknown" in status["lastError"], status
' "$CACHE_DIR/remote-status-read.json"
}

case_read_artifact_status() {
  # A mapping that reads fine but whose artifact download is refused is a miss, and
  # the status file keeps the HTTP status of the refusal.
  seed_remote
  fresh
  : > "$SERVER_LOG"
  LAKE_REMOTE_CACHE=denyart test_out 'Built Test' build Test native
  test_cmd_eq "$(remote_targets)" count "^GET .*/in/.* -> 200 " "$SERVER_LOG"
  match_pat "^GET .*/a/.* -> 403 " "$SERVER_LOG"
  "$PYTHON" -c '
import json, sys
status = json.load(open(sys.argv[1]))
assert status["failures"] > 0, status
assert "403" in status["lastError"], status
' "$CACHE_DIR/remote-status-read.json"
}

case_read_status_persistence() {
  # A read-status write failure is diagnostic only: the remote denial is still
  # a cache miss and Lake must keep the successful local build result. A
  # directory at the status-file path makes the final atomic rename fail while
  # the normal cache artifact paths remain writable.
  fresh
  test_cmd mkdir -p "$CACHE_DIR/remote-status-read.json"
  LAKE_REMOTE_CACHE=deny test_out 'Built Test' build Test native
}

case_read_silent() {
  # A remote cache that accepts each request and never answers costs a build seconds, not
  # minutes: a read gives up after 3 s without progress and is tried once more, and after 3
  # such reads in a row the build reads the remote cache no more. Every target compiles, the
  # verbose log says once why the build stopped reading, and so does the read status.
  local start local_secs elapsed
  fresh
  start="$(date +%s)"
  test_run build Test native
  local_secs=$(($(date +%s) - start))
  fresh
  : > "$SERVER_LOG"
  start="$(date +%s)"
  LAKE_REMOTE_CACHE=silent test_out 'Built Test' -v build Test native
  elapsed=$(($(date +%s) - start))
  echo "the build took $elapsed seconds; without the remote cache, $local_secs seconds"
  test_exp "$elapsed" -le $((local_secs + 30))
  match_text 'Built native' produced.out
  test_cmd cp produced.out silent.out
  test_cmd_eq 1 count 'stopped reading the remote cache' silent.out
  "$PYTHON" -c '
import json, sys
status = json.load(open(sys.argv[1]))
assert "stopped reading the remote cache" in status["stopped"], status
assert status["failures"] >= 3, status
' "$CACHE_DIR/remote-status-read.json"
}

run_cases case_read_through case_read_404 case_read_invalid_mapping case_read_bad_artifact \
  case_read_bad_descriptor case_read_transport case_read_status case_read_artifact_status \
  case_read_status_persistence case_read_silent
