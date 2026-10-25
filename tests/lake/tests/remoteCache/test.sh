#!/usr/bin/env bash
# Copyright (c) 2026 Lean FRO. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.
source ../common.sh

./clean.sh

# Test transfers with a remote cache service that accepts only OAuth bearer
# tokens, as a Cloud Storage bucket without HMAC keys does: the token that
# `LAKE_CACHE_TOKEN_CMD` prints, sent to the service that `LAKE_REMOTE_CACHE`
# names; uploads that only create objects; and downloads that never leave a
# partial artifact. The setup and the shared helpers are in `lib.sh`, which the
# tests of read-through (`../remoteCacheRead`) and write-back (`../remoteCachePush`)
# share.

source ../remoteCache/lib.sh

# The `Test` library transfers one bundle per module, each of which a
# build unpacks into an olean, an ilean, and a C file
NUM_ARTS=2
NUM_REPLAY_ARTS=8

# Build the package once, into the cache of the machine that uploads
LAKE_CACHE_DIR="$BUILD_CACHE_DIR" test_run build Test -o outputs.jsonl
# Keep the `curl` wrapper out of the build directory, which the cases delete
LAKE_CACHE_DIR="$BUILD_CACHE_DIR" test_run build curl
LAKE_CACHE_DIR="$BUILD_CACHE_DIR" test_run build Two -o two.jsonl
test_cmd cp "$(LAKE_CACHE_DIR="$BUILD_CACHE_DIR" "$LAKE" query curl:exe)" "$WORK_DIR/bad-curl"
CURL_MOCK="$WORK_DIR/bad-curl"
CURL_REAL="$(type -P curl)"

# Counts artifacts, ignoring temporary files
test_artifacts() {
  expected="$1"; dir="${2:-$CACHE_DIR/artifacts}"
  actual="$({ ls -1 "$dir" 2> /dev/null || true; } | { grep -cv '\.tmp$' || true; })"
  echo "? artifacts in $dir ($actual) = $expected"
  test "$actual" = "$expected"
}

# Lists each file under the given directories with its modification time
mtimes() {
  "$PYTHON" -c '
import os, sys
for top in sys.argv[1:]:
    for root, _, files in sorted(os.walk(top)):
        for name in sorted(files):
            path = os.path.join(root, name)
            print(path, os.stat(path).st_mtime_ns)
' "$@"
}

# Runs a command with the token command `TOKEN_CMD` for the `bearer` service
with_token() { LAKE_REMOTE_CACHE=bearer LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" "$@"; }
# Uploads the outputs of the build
put() { LAKE_CACHE_DIR="$BUILD_CACHE_DIR" test_run cache put outputs.jsonl "$@"; }
# Stores the outputs of the build under a scope, through AWS Signature Version 4
seed() { LAKE_CACHE_KEY=mock:key put --scope="$1" --service=ok; }
# Runs a command with the `curl` wrapper that records its arguments
record_argv() {
  CURL="$CURL_MOCK" BAD_CURL=record REAL_CURL="$CURL_REAL" BAD_CURL_ARGV_LOG="$ARGV_LOG" "$@"
}

case_roundtrip() {
  # With a token command and no `LAKE_CACHE_KEY`, outputs are uploaded,
  # downloaded and fetched on demand, every request carries the token,
  # and every upload only creates its object
  : > "$SERVER_LOG"
  rm -f "$TOKEN_RUNS"
  with_token put --scope=roundtrip --service=bearer
  # One token serves every request of a Lake process
  test_cmd_eq 1 token_runs
  test_cmd cmp -s outputs.jsonl "$STORE_DIR/r0/roundtrip/$REV.jsonl"
  test_artifacts "$NUM_ARTS" "$STORE_DIR/a0/roundtrip"
  test_cmd_eq "$NUM_ARTS" count "^PUT /bearer/a0/roundtrip/.* -> 200 auth=bearer gen=0$" "$SERVER_LOG"
  match_text "PUT /bearer/r0/roundtrip/$REV.jsonl -> 200 auth=bearer gen=0" "$SERVER_LOG"
  fresh
  with_token test_out 'downloaded artifact' cache get --scope=roundtrip --service=bearer
  test_artifacts "$NUM_ARTS"
  test_run build Test --no-build
  fresh
  with_token test_run cache get --scope=roundtrip --service=bearer --mappings-only
  test_artifacts 0
  with_token test_out 'downloaded artifact' -v build Test --no-build
  test_artifacts "$NUM_REPLAY_ARTS"
  # The put, the two gets, and the build each ran the command once
  test_cmd_eq 4 token_runs
  test_cmd_eq 2 count "^GET /bearer/r0/roundtrip/$REV.jsonl -> 200 auth=bearer gen=-$" "$SERVER_LOG"
  test_cmd_eq $((2 * NUM_ARTS)) count "^GET /bearer/a0/roundtrip/.* -> 200 auth=bearer gen=-$" "$SERVER_LOG"
  test_cmd_eq 0 count ' auth=none ' "$SERVER_LOG"
  test_cmd_eq 0 count ' auth=other ' "$SERVER_LOG"
}

case_no_token() {
  # Without a token command, the service refuses every request,
  # and Lake reports the refusal
  seed no-token
  : > "$SERVER_LOG"
  fresh
  LAKE_REMOTE_CACHE=bearer test_err '401' cache get --scope=no-token --service=bearer
  LAKE_REMOTE_CACHE=bearer test_err 'status code: 401' \
    cache get outputs.jsonl --scope=no-token --service=bearer
  test_artifacts 0
  match_text "GET /bearer/r0/no-token/$REV.jsonl -> 401 auth=none" "$SERVER_LOG"
  test_cmd_eq 0 count ' auth=bearer ' "$SERVER_LOG"
}

case_second_put() {
  # A second upload of the same outputs finds each object present, which is not
  # an error, and leaves the stored objects untouched
  with_token put --scope=second --service=bearer
  mtimes "$STORE_DIR/a0/second" "$STORE_DIR/r0/second" > before.mtimes
  test_cmd_eq "$((NUM_ARTS + 1))" count . before.mtimes
  : > "$SERVER_LOG"
  LAKE_CACHE_DIR="$BUILD_CACHE_DIR" with_token test_out 'already present' \
    cache put outputs.jsonl --scope=second --service=bearer
  test_cmd_eq "$NUM_ARTS" count "^PUT /bearer/a0/second/" "$SERVER_LOG"
  test_cmd_eq "$NUM_ARTS" count "^PUT /bearer/a0/second/.* -> 412 auth=bearer gen=0$" "$SERVER_LOG"
  match_text "PUT /bearer/r0/second/$REV.jsonl -> 412 auth=bearer gen=0" "$SERVER_LOG"
  mtimes "$STORE_DIR/a0/second" "$STORE_DIR/r0/second" > after.mtimes
  test_cmd diff -u before.mtimes after.mtimes
  # A refused upload is still an error
  LAKE_CACHE_DIR="$BUILD_CACHE_DIR" LAKE_REMOTE_CACHE=deny LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" \
    test_err 'status code: 403' cache put outputs.jsonl --scope=second --service=deny
}

case_no_leak() {
  # The token is on no command line, in no output of Lake, and in no environment
  # that Lake passes on; it is written only to files that only the user can
  # read, which are removed after use
  echo test-token-1 > token.txt
  LEAK_CMD="cat '$WORK_DIR/token.txt'"
  leak() { LAKE_REMOTE_CACHE=bearer LAKE_CACHE_TOKEN_CMD="$LEAK_CMD" "$@"; }
  : > "$ARGV_LOG"
  : > "$SERVER_LOG"
  LAKE_CACHE_DIR="$BUILD_CACHE_DIR" record_argv leak test_not_out test-token-1 \
    -v cache put outputs.jsonl --scope=leak --service=bearer
  fresh
  record_argv leak test_not_out test-token-1 -v cache get --scope=leak --service=bearer
  fresh
  record_argv leak test_not_out test-token-1 \
    -v cache get --scope=leak --service=bearer --mappings-only
  record_argv leak test_not_out test-token-1 -v build Test --no-build
  test_artifacts "$NUM_REPLAY_ARTS"
  # Uploads, bulk downloads, and downloads on demand all went through the wrapper
  match_text ' -X PUT ' "$ARGV_LOG"
  match_text ' -X GET ' "$ARGV_LOG"
  match_text ' -o ' "$ARGV_LOG"
  match_text '--config ' "$ARGV_LOG"
  test_cmd_eq 0 count ' auth=none ' "$SERVER_LOG"
  no_match_text test-token-1 "$ARGV_LOG"
  no_match_text Bearer "$ARGV_LOG"
  no_match_text Authorization "$ARGV_LOG"
  for config in $(grep -o -- '--config [^ ]*' "$ARGV_LOG" | cut -d ' ' -f 2); do
    test_exp ! -e "$config"
  done
  leak test_not_out test-token-1 env printenv
  match_text LAKE_CONFIG= produced.out
  if [ "$OS" = Windows_NT ]; then return; fi
  # The files that carry the token to `curl` are readable by their owner only
  cat > mode-curl.sh << 'EOF'
#!/usr/bin/env bash
prev=
for arg in "$@"; do
  if [ "$prev" = --config ]; then ls -l "$arg" | cut -c 1-10 >> "$CONFIG_MODES"; fi
  prev="$arg"
done
exec "$REAL_CURL" "$@"
EOF
  chmod +x mode-curl.sh
  : > modes
  fresh
  CURL="$WORK_DIR/mode-curl.sh" REAL_CURL="$CURL_REAL" CONFIG_MODES="$WORK_DIR/modes" \
    leak test_run cache get --scope=leak --service=bearer --mappings-only
  CURL="$WORK_DIR/mode-curl.sh" REAL_CURL="$CURL_REAL" CONFIG_MODES="$WORK_DIR/modes" \
    leak test_run build Test --no-build
  match_text '-rw-------' modes
  test_cmd_eq 0 count_other '^-rw-------$' modes
}

case_rotation() {
  # A token that the service refuses is replaced: Lake runs the token command
  # again and retries the request once
  seed rotation
  COUNTER="$WORK_DIR/counter"
  ROTATE_CMD="n=\$((\$(cat '$COUNTER' 2> /dev/null || echo 0) + 1)); echo \$n > '$COUNTER'; echo test-token-\$n"
  rotate() { LAKE_REMOTE_CACHE=bearer LAKE_CACHE_TOKEN_CMD="$ROTATE_CMD" "$@"; }
  echo test-token-2 > "$TOKENS"
  # A revision lookup, and the downloads that follow it
  fresh
  rm -f "$COUNTER"
  : > "$SERVER_LOG"
  rotate test_run cache get --scope=rotation --service=bearer
  test_cmd_eq 2 cat "$COUNTER"
  test_artifacts "$NUM_ARTS"
  test_cmd_eq "GET /bearer/r0/rotation/$REV.jsonl -> 401 auth=bearer gen=-" sed -n 1p "$SERVER_LOG"
  test_cmd_eq "GET /bearer/r0/rotation/$REV.jsonl -> 200 auth=bearer gen=-" sed -n 2p "$SERVER_LOG"
  test_cmd_eq 1 count ' -> 401 ' "$SERVER_LOG"
  # An upload of several artifacts at once
  rm -f "$COUNTER"
  : > "$SERVER_LOG"
  rotate put --scope=rotation-put --service=bearer
  test_cmd_eq 2 cat "$COUNTER"
  test_cmd_eq "$NUM_ARTS" count "^PUT /bearer/a0/rotation-put/.* -> 401 " "$SERVER_LOG"
  test_cmd_eq "$NUM_ARTS" count "^PUT /bearer/a0/rotation-put/.* -> 200 " "$SERVER_LOG"
  match_text "PUT /bearer/r0/rotation-put/$REV.jsonl -> 200 auth=bearer gen=0" "$SERVER_LOG"
  # A download on demand during a build
  fresh
  rm -f "$COUNTER"
  rotate test_run cache get --scope=rotation --service=bearer --mappings-only
  rm -f "$COUNTER"
  : > "$SERVER_LOG"
  rotate test_out 'downloaded artifact' -v build Test --no-build
  test_cmd_eq 2 cat "$COUNTER"
  match_text ' -> 401 ' "$SERVER_LOG"
  test_artifacts "$NUM_REPLAY_ARTS"
  # A new token that is refused as well is not replaced again
  echo test-token-0 > "$TOKENS"
  fresh
  rm -f "$COUNTER"
  : > "$SERVER_LOG"
  rotate test_err '401' cache get --scope=rotation --service=bearer
  test_cmd_eq 2 cat "$COUNTER"
  test_cmd_eq 2 count ' -> 401 ' "$SERVER_LOG"
  echo test-token-1 > "$TOKENS"
}

case_token_cmd_fails() {
  # A token command that fails, or prints no usable token, fails the transfer
  # with an error that names the variable but not what the command printed
  seed token-fails
  fresh
  LAKE_REMOTE_CACHE=bearer LAKE_CACHE_TOKEN_CMD='echo printed-by-the-command; exit 1' \
    test_err 'LAKE_CACHE_TOKEN_CMD' cache get --scope=token-fails --service=bearer
  no_match_text printed-by-the-command produced.out
  LAKE_REMOTE_CACHE=bearer LAKE_CACHE_TOKEN_CMD='true' \
    test_err 'LAKE_CACHE_TOKEN_CMD' cache get --scope=token-fails --service=bearer
  LAKE_REMOTE_CACHE=bearer LAKE_CACHE_TOKEN_CMD='echo "printed by the command"' \
    test_err 'LAKE_CACHE_TOKEN_CMD' cache get --scope=token-fails --service=bearer
  no_match_text 'printed by the command' produced.out
  test_artifacts 0
}

case_token_cmd_time_limit() {
  # A token command that has not ended after 60 seconds is stopped, with the processes that
  # it started, and fails as a command that exits with an error does: the error names the
  # variable and the limit but not what the command printed, the other lookups of the build
  # report it without running the command again, and the build compiles locally as soon as
  # the command is stopped
  fresh
  rm -f "$TOKEN_RUNS" token-sid
  : > "$SERVER_LOG"
  local start elapsed rc
  start="$(date +%s)"
  # The command records its session (Lake starts it in a session of its own), so that the check
  # below sees only this test's processes, not those of another copy of the suite on the machine
  if LAKE_REMOTE_CACHE=bearer \
      LAKE_CACHE_TOKEN_CMD="echo \$\$ > '$WORK_DIR/token-sid'; echo run >> '$TOKEN_RUNS'; echo printed-by-the-command; sleep 7531" \
      timeout 300 "$LAKE" -v build Test native > produced.out 2>&1; then rc=0; else rc=$?; fi
  elapsed=$(($(date +%s) - start))
  cat produced.out
  echo "lake exited with code $rc after $elapsed seconds"
  test_exp "$rc" = 0
  match_text '`LAKE_CACHE_TOKEN_CMD` printed no token within 60 seconds' produced.out
  no_match_text printed-by-the-command produced.out
  match_text 'Built Test' produced.out
  test_cmd_eq 1 token_runs
  test_cmd_eq 0 count ' -> ' "$SERVER_LOG"
  test_exp "$elapsed" -lt 90
  # No process of the command's session is left
  test_exp -s token-sid
  ps -o pid=,args= -s "$(cat token-sid)" > processes || true
  cat processes
  test_cmd_eq 0 count . processes
}

case_token_cmd_time_limit_cache() {
  # After the token command was stopped at the time limit, Lake reports that failure for
  # 5 minutes without running the command again, not only for 60 seconds, so a command that
  # hangs every time stalls the build's requests once. Here the first lookup starts the
  # command, which hangs (and is stopped after 60 s), and the second lookup comes after
  # `Slow.A` compiled for 75 s: a run would print a token and send a request.
  local pkg="$WORK_DIR/slowpkg"
  test_cmd rm -rf "$pkg"
  test_cmd mkdir -p "$pkg/Slow"
  printf 'name = "slow"\n\n[[lean_lib]]\nname = "Slow"\nroots = ["Slow.A", "Slow.B"]\n' \
    > "$pkg/lakefile.toml"
  printf '#eval IO.sleep 75000\ndef a := 1\n' > "$pkg/Slow/A.lean"
  printf 'import Slow.A\ndef b := a\n' > "$pkg/Slow/B.lean"
  cat > "$WORK_DIR/hang-once.sh" << EOF
echo run >> '$TOKEN_RUNS'
[ "\$(grep -c run '$TOKEN_RUNS')" -gt 1 ] || sleep 7532
echo test-token-1
EOF
  fresh
  rm -f "$TOKEN_RUNS"
  : > "$SERVER_LOG"
  local start elapsed rc
  start="$(date +%s)"
  if LAKE_REMOTE_CACHE=bearer LAKE_CACHE_TOKEN_CMD="sh '$WORK_DIR/hang-once.sh'" \
      timeout 400 "$LAKE" -v --dir "$pkg" build Slow > produced.out 2>&1; then rc=0; else rc=$?; fi
  elapsed=$(($(date +%s) - start))
  cat produced.out
  echo "lake exited with code $rc after $elapsed seconds"
  test_exp "$rc" = 0
  match_text 'Built Slow.B' produced.out
  test_exp "$elapsed" -ge 135
  test_cmd_eq 1 token_runs
  test_cmd_eq 0 count ' -> ' "$SERVER_LOG"
}

case_other_host() {
  # The token goes only to the host of the artifact endpoint of the service
  # that `LAKE_REMOTE_CACHE` names: not to a second service on another port,
  # and not to revisions that its service keeps on another host
  seed other-host
  test_cmd mkdir -p "$STORE2_DIR/a0" "$STORE2_DIR/r0"
  test_cmd cp -r "$STORE_DIR/a0/other-host" "$STORE2_DIR/a0/"
  test_cmd cp -r "$STORE_DIR/r0/other-host" "$STORE2_DIR/r0/"
  : > "$SERVER_LOG"
  : > "$SERVER2_LOG"
  fresh
  with_token test_out 'downloaded artifact' cache get --scope=other-host --service=bearer
  fresh
  with_token test_out 'downloaded artifact' cache get --scope=other-host --service=other
  test_artifacts "$NUM_ARTS"
  match_text "GET /bearer/r0/other-host/$REV.jsonl -> 200 auth=bearer" "$SERVER_LOG"
  test_cmd_eq 0 count ' auth=none ' "$SERVER_LOG"
  match_text "GET /ok/r0/other-host/$REV.jsonl -> 200 auth=none" "$SERVER2_LOG"
  test_cmd_eq "$NUM_ARTS" count "^GET /ok/a0/other-host/.* -> 200 auth=none" "$SERVER2_LOG"
  test_cmd_eq 0 count ' auth=bearer ' "$SERVER2_LOG"
  # Uploads to the other service still need a key
  LAKE_CACHE_DIR="$BUILD_CACHE_DIR" with_token test_err 'LAKE_CACHE_KEY' \
    cache put outputs.jsonl --scope=other-host --service=other
  # The revisions of the `split` service are on the second server
  : > "$SERVER_LOG"
  : > "$SERVER2_LOG"
  fresh
  LAKE_REMOTE_CACHE=split LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" \
    test_out 'downloaded artifact' cache get --scope=other-host --service=split
  match_text "GET /ok/r0/other-host/$REV.jsonl -> 200 auth=none" "$SERVER2_LOG"
  test_cmd_eq 0 count ' auth=bearer ' "$SERVER2_LOG"
  test_cmd_eq "$NUM_ARTS" count "^GET /bearer/a0/other-host/.* -> 200 auth=bearer" "$SERVER_LOG"
}

case_no_request() {
  # A `lake cache get` or a build that needs no request runs no token command
  seed no-request
  fresh
  rm -f "$TOKEN_RUNS"
  with_token test_run cache get --scope=no-request --service=bearer
  test_cmd_eq 1 token_runs
  rm -f "$TOKEN_RUNS"
  : > "$SERVER_LOG"
  with_token test_run cache get --scope=no-request --service=bearer
  with_token test_run build Test --no-build
  test_cmd_eq 0 token_runs
  test_cmd_eq 0 count ' -> ' "$SERVER_LOG"
}

case_download() {
  # A download cut short leaves nothing in the cache,
  # so that no later build adopts a partial artifact
  seed download
  fresh
  test_run cache add outputs.jsonl --scope=download --service=truncate
  test_fails build Test --no-build
  test_cmd_eq 0 count_files "$CACHE_DIR/artifacts"
  test_run cache add outputs.jsonl --scope=download --service=ok
  test_run build Test --no-build
  test_artifacts "$NUM_REPLAY_ARTS"
  # Every download, in bulk or on demand, gives up on a stalled connection
  : > "$ARGV_LOG"
  fresh
  record_argv test_run cache get --scope=download --service=ok --mappings-only
  record_argv test_run build Test --no-build
  fresh
  record_argv test_run cache get --scope=download --service=ok
  test_cmd_eq 5 count '--connect-timeout 10 --speed-limit 1024 --speed-time 30' "$ARGV_LOG"
  test_cmd_eq 0 count_other '--connect-timeout 10 --speed-limit 1024 --speed-time 30' "$ARGV_LOG"
}

case_put_timeouts() {
  # Every upload gives up on a stalled transfer, as a download does: the upload of the
  # artifacts, in one `curl` run, and the upload of the revision's outputs
  : > "$ARGV_LOG"
  LAKE_CACHE_DIR="$BUILD_CACHE_DIR" record_argv with_token \
    test_run cache put outputs.jsonl --scope=put-timeouts --service=bearer
  test_cmd_eq 2 count ' -X PUT ' "$ARGV_LOG"
  test_cmd_eq 2 count '--connect-timeout 10 --speed-limit 1024 --speed-time 30' "$ARGV_LOG"
}

case_failing_cmd() {
  # A token command that fails is not run again for each download that needs the token:
  # the two modules of `Two` are fetched independently, and the command runs once
  LAKE_CACHE_DIR="$BUILD_CACHE_DIR" LAKE_CACHE_KEY=mock:key \
    test_run cache put two.jsonl --scope=failing --service=ok
  fresh
  test_run cache add two.jsonl --scope=failing --service=bearer
  rm -f "$TOKEN_RUNS"
  : > "$SERVER_LOG"
  LAKE_REMOTE_CACHE=bearer LAKE_CACHE_TOKEN_CMD="echo run >> '$TOKEN_RUNS'; exit 1" \
    test_err '`LAKE_CACHE_TOKEN_CMD` exited with code 1' -v build Two --no-build
  test_cmd_eq 1 token_runs
  test_cmd_eq 0 count ' -> ' "$SERVER_LOG"
  test_artifacts 0
}

case_refused_token() {
  # A service that refuses every token the command prints: once the new token is refused
  # as well, the refusal is reported for a while instead of running the command again for
  # each download. `Two.A` and `Two.B` are fetched at once; `Two.C` is fetched only after
  # `Test.Basic`, which it imports, comes from a slow service that needs no token, so it
  # starts after the others were refused twice.
  LAKE_CACHE_DIR="$BUILD_CACHE_DIR" LAKE_CACHE_KEY=mock:key \
    test_run cache put two.jsonl --scope=refused --service=ok
  seed refused
  fresh
  test_run cache add two.jsonl --scope=refused --service=bearer
  test_run cache add outputs.jsonl --scope=refused --service=slow
  COUNTER="$WORK_DIR/counter"
  ROTATE_CMD="n=\$((\$(cat '$COUNTER' 2> /dev/null || echo 0) + 1)); echo \$n > '$COUNTER'; echo test-token-\$n"
  rm -f "$COUNTER"
  echo test-token-0 > "$TOKENS"
  : > "$SERVER_LOG"
  LAKE_REMOTE_CACHE=bearer LAKE_CACHE_TOKEN_CMD="$ROTATE_CMD" \
    test_err 'the service refused a new token from `LAKE_CACHE_TOKEN_CMD` (HTTP 401)' \
    -v build Two --no-build
  test_cmd_eq 2 cat "$COUNTER"
  # `Two.C` sent no request: none reached the service after `Test.Basic`'s slow download
  match_text 'GET /slow/' "$SERVER_LOG"
  test_cmd_eq 0 awk '/GET \/slow\// {s = 1; next} s && /\/bearer\// {n++} END {print n + 0}' \
    "$SERVER_LOG"
  echo test-token-1 > "$TOKENS"
}

case_redirect() {
  # A request that carries the token follows no redirect, even when the user's `.curlrc`
  # asks `curl` to: the redirect is an error that names it, and the other host sees nothing
  seed redirect
  test_cmd mkdir -p "$STORE2_DIR/a0" "$STORE2_DIR/r0"
  test_cmd cp -r "$STORE_DIR/a0/redirect" "$STORE2_DIR/a0/"
  test_cmd cp -r "$STORE_DIR/r0/redirect" "$STORE2_DIR/r0/"
  test_cmd mkdir -p curlhome
  echo location > curlhome/.curlrc
  # Without `-q`, that `.curlrc` makes `curl` follow the redirect
  ART="$(ls -1 "$STORE_DIR/a0/redirect" | head -1)"
  test_cmd_eq 200 env CURL_HOME="$WORK_DIR/curlhome" \
    curl -s -o /dev/null -w '%{http_code}' "$URL/redirect/a0/redirect/$ART"
  redir() {
    CURL_HOME="$WORK_DIR/curlhome" LAKE_REMOTE_CACHE=redirect \
      LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" "$@"
  }
  : > "$SERVER2_LOG"
  fresh
  redir test_err 'error 302' cache get --scope=redirect --service=redirect
  redir test_err 'status code: 302' cache get outputs.jsonl --scope=redirect --service=redirect
  test_run cache add outputs.jsonl --scope=redirect --service=redirect
  redir test_err 'the server redirected the download (status 302)' -v build Test --no-build
  no_match_text 'hash mismatch' produced.out
  test_artifacts 0
  test_cmd_eq 0 count ' -> ' "$SERVER2_LOG"
}

case_cleartext() {
  # The token is not sent over unencrypted HTTP to a host that is not a loopback one,
  # and the token command does not run
  fresh
  rm -f "$TOKEN_RUNS"
  LAKE_REMOTE_CACHE=cleartext LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" \
    test_err 'over unencrypted HTTP' cache get --scope=cleartext --service=cleartext
  test_cmd_eq 0 token_runs
}

run_cases case_roundtrip case_no_token case_second_put case_no_leak case_rotation \
  case_token_cmd_fails case_token_cmd_time_limit case_token_cmd_time_limit_cache case_other_host \
  case_no_request case_download \
  case_put_timeouts case_failing_cmd case_refused_token case_redirect case_cleartext
