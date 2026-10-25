#!/usr/bin/env bash
# Copyright (c) 2026 Lean FRO. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.
source ../common.sh

./clean.sh

# Test transfers with a remote cache service that accepts only OAuth bearer
# tokens, as a Cloud Storage bucket without HMAC keys does: the token that
# `LAKE_CACHE_TOKEN_CMD` prints, sent to the service that `LAKE_REMOTE_CACHE`
# names; uploads that only create objects; and downloads that never leave a
# partial artifact. The mock server, the `curl` wrapper and the package come
# from `../cacheTransfer`.
#
# Each case is a function with a remote scope of its own, so that a case can
# also run alone, e.g. `REMOTE_CACHE_CASES=case_rotation ./test.sh`.

PYTHON="${PYTHON:-python3}"

# The mock server, and the uploads that fill it, have requirements CI may not satisfy
if ! "$PYTHON" -c 'import sys; sys.exit(sys.version_info < (3, 11))' 2> /dev/null; then
  echo "SKIPPED: $PYTHON 3.11 or later not found"
  exit 0
fi
if ! curl --help all 2> /dev/null | grep -q -- '--aws-sigv4'; then
  echo "SKIPPED: curl does not support '--aws-sigv4'"
  exit 0
fi

TEST_DIR="$(norm_path "$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &> /dev/null && pwd)")"
FIXTURE_DIR="$(norm_path "$(cd -- "$TEST_DIR/../cacheTransfer" &> /dev/null && pwd)")"
WORK_DIR="$TEST_DIR/work"
STORE_DIR="$WORK_DIR/store"
STORE2_DIR="$WORK_DIR/store2"
# The Lake cache of the machine that builds and uploads
BUILD_CACHE_DIR="$WORK_DIR/build-cache"
# The Lake cache of the machine that downloads
CACHE_DIR="$WORK_DIR/cache"
SERVER_LOG="$WORK_DIR/server.log"
SERVER2_LOG="$WORK_DIR/server2.log"
TOKENS="$WORK_DIR/tokens"
TOKEN_RUNS="$WORK_DIR/token-runs"
ARGV_LOG="$WORK_DIR/argv.log"

# Copy the package to a working directory to avoid initializing a Git
# repository inside the checked-in source tree
mkdir -p "$WORK_DIR"
cp -r "$FIXTURE_DIR/lakefile.toml" "$FIXTURE_DIR/BadCurl.lean" \
  "$FIXTURE_DIR/Test.lean" "$FIXTURE_DIR/Test" "$WORK_DIR/"
chmod -R u+w "$WORK_DIR"
cd "$WORK_DIR"
# A second library: two modules that do not import each other, so that a build fetches
# their artifacts independently, and a third that waits for `Test.Basic`, which it imports
mkdir -p Two
echo 'def a := 1' > Two/A.lean
echo 'def b := 2' > Two/B.lean
printf 'import Test.Basic\ndef c := 3\n' > Two/C.lean
cat > Native.lean << 'EOF'
def main : IO Unit := pure ()
EOF
cat >> lakefile.toml << 'EOF'

[[lean_lib]]
name = "Two"
roots = ["Two.A", "Two.B", "Two.C"]

[[lean_exe]]
name = "native"
root = "Native"
EOF

echo "# SETUP"

init_git
REV="$(git rev-parse HEAD)"

# Two mock servers, each on a free port, which accept the tokens in `$TOKENS`.
# The first one's `redirect` mode sends requests to the second one's `ok` store.
echo test-token-1 > "$TOKENS"
"$PYTHON" "$FIXTURE_DIR/server.py" --store "$STORE2_DIR" --port-file port2 \
  --tokens "$TOKENS" >> "$SERVER2_LOG" 2>&1 &
SERVER2_PID=$!
trap 'kill $SERVER2_PID 2> /dev/null' EXIT
# Since each server is a separate process, the port it binds has to be waited on
wait_port() {
  while [ ! -s "$1" ]; do
    if ! kill -0 "$2" 2> /dev/null; then
      echo "FAILURE: the mock server exited"
      cat "$3"
      exit 1
    fi
    sleep 0.1
  done
}
wait_port port2 $SERVER2_PID "$SERVER2_LOG"
URL2="http://127.0.0.1:$(cat port2)"
"$PYTHON" "$FIXTURE_DIR/server.py" --store "$STORE_DIR" --port-file port \
  --tokens "$TOKENS" --redirect "$URL2/ok" >> "$SERVER_LOG" 2>&1 &
SERVER_PID=$!
trap 'kill $SERVER_PID $SERVER2_PID 2> /dev/null' EXIT
wait_port port $SERVER_PID "$SERVER_LOG"
URL="http://127.0.0.1:$(cat port)"
echo "URL=$URL URL2=$URL2"

# Copied after the commit above so that it does not dirty the work tree
cp "$TEST_DIR/services.toml" .
sed_i -e "s|%URL%|$URL|g" -e "s|%URL2%|$URL2|g" services.toml
# In this copy, the `flaky` service accepts uploads; in the original, it refuses them
sed -e "s|%FLAKY%|ok|g" services.toml > services-ok.toml
sed_i -e "s|%FLAKY%|deny|g" services.toml

export LAKE_CONFIG="$WORK_DIR/services.toml"
export LAKE_CACHE_DIR="$CACHE_DIR"
# Point the default (Reservoir) service at the mock server as well,
# so that no part of this test can reach the network
export RESERVOIR_API_URL="$URL/ok/api/v1"
# Ensure Lake is run without a toolchain name
# (so the toolchain does not end up in cache paths)
export ELAN_TOOLCHAIN=
unset LAKE_CACHE_KEY LAKE_CACHE_TOKEN_CMD LAKE_REMOTE_CACHE

# The `Test` library transfers one bundle per module, each of which a
# build unpacks into an olean, an ilean, and a C file
NUM_ARTS=2
NUM_REPLAY_ARTS=8

# Build the package once, into the cache of the machine that uploads
LAKE_CACHE_DIR="$BUILD_CACHE_DIR" test_run build Test -o outputs.jsonl
LAKE_CACHE_DIR="$BUILD_CACHE_DIR" test_run build Test native -o remote-outputs.jsonl
# A remote restore replaces its trace with a synthetic one, so the seeder keeps
# the source traces of the fresh producer build separately.
test_cmd cp -r .lake/build seed-build
# Keep the `curl` wrapper out of the build directory, which the cases delete
LAKE_CACHE_DIR="$BUILD_CACHE_DIR" test_run build curl
LAKE_CACHE_DIR="$BUILD_CACHE_DIR" test_run build Two -o two.jsonl
test_cmd cp "$(LAKE_CACHE_DIR="$BUILD_CACHE_DIR" "$LAKE" query curl:exe)" "$WORK_DIR/bad-curl"
CURL_MOCK="$WORK_DIR/bad-curl"
CURL_REAL="$(type -P curl)"

# The read-through mapping lives under the toolchain, platform and package scope
# that Lake derives for every build (for the package `test`, unless another is named).
remote_scope() {
  cat > RemoteScope.lean << 'EOF'
#eval System.Platform.target
EOF
  local platform
  platform="$("$LAKE" env lean RemoteScope.lean)"
  platform="${platform#\"}"
  platform="${platform%\"}"
  printf 'v1/%s/%s/%s' "$("$LAKE" env lean --githash)" "$platform" "${1:-test}"
}

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

# The threaded mock server can write two request records together, so count the
# path component rather than physical log lines.
count_path() {
  "$PYTHON" -c 'import sys; print(open(sys.argv[2]).read().count(sys.argv[1]))' "$1" "$2"
}

# Counts the lines of a file that match a basic regular expression
count() { grep -c -- "$1" "$2" || true; }
# Counts the lines of a file that do not match a basic regular expression
count_other() { grep -c -v -- "$1" "$2" || true; }
# Counts the files in a directory, temporary files included
count_files() { { ls -1A "$1" 2> /dev/null || true; } | wc -l | tr -d ' '; }

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

# A token command that prints a token the servers accept and counts its runs
TOKEN_CMD="echo run >> '$TOKEN_RUNS'; echo test-token-1"
token_runs() {
  if [ -f "$TOKEN_RUNS" ]; then count run "$TOKEN_RUNS"; else echo 0; fi
}
# Runs a command with that token command for the `bearer` service
with_token() { LAKE_REMOTE_CACHE=bearer LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" "$@"; }
# Uploads the outputs of the build
put() { LAKE_CACHE_DIR="$BUILD_CACHE_DIR" test_run cache put outputs.jsonl "$@"; }
# Stores the outputs of the build under a scope, through AWS Signature Version 4
seed() { LAKE_CACHE_KEY=mock:key put --scope="$1" --service=ok; }
# Forgets everything the downloading machine has
fresh() { test_cmd rm -rf .lake/build "$CACHE_DIR"; }
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
    seed_remote --bad "$field"
    fresh
    : > "$SERVER_LOG"
    LAKE_REMOTE_CACHE=ok test_out "$field" -v build Test native
    match_text 'Built Test' produced.out
  done
}

case_read_bad_artifact() {
  # The artifact's SHA-256 is checked before its Lake hash and a bad remote
  # ltar never becomes a cache file.
  seed_remote --bad sha256
  BAD_ART="$("$PYTHON" -c 'import json; print(json.loads(open("remote-outputs.jsonl").readlines()[1])[1])')"
  fresh
  LAKE_REMOTE_CACHE=ok test_out 'SHA-256' -v build Test native
  test_exp ! -e "$CACHE_DIR/artifacts/$BAD_ART"
  match_text 'Built Test' produced.out
}

case_read_bad_descriptor() {
  # Data from the bucket cannot turn an extension into a local path.
  seed_remote --bad ext
  fresh
  LAKE_REMOTE_CACHE=ok test_out 'extension' -v build Test native
  test_exp ! -e "$CACHE_DIR/x"
  match_text 'Built Test' produced.out
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

case_read_status_persistence() {
  # A read-status write failure is diagnostic only: the remote denial is still
  # a cache miss and Lake must keep the successful local build result. A
  # directory at the status-file path makes the final atomic rename fail while
  # the normal cache artifact paths remain writable.
  fresh
  test_cmd mkdir -p "$CACHE_DIR/remote-status-read.json"
  LAKE_REMOTE_CACHE=deny test_out 'Built Test' build Test native
}

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
# (by default `bearer`) with a token, and the queue on
on_a() {
  LAKE_CACHE_DIR="$PUSH_CACHE" LAKE_REMOTE_CACHE="${PUSH_SERVICE:-bearer}" \
    LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" LAKE_REMOTE_CACHE_QUEUE=true "$@"
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

case_push_custom_target() {
  # A job that compiles one file and replays another queues only the one it compiled.
  push_fresh
  LAKE_CACHE_DIR="$PUSH_CACHE" test_run --dir "$PUSH_A" build pair
  echo changed > "$PUSH_A/a.in"
  on_a test_out 'Built push/pair' --dir "$PUSH_A" build pair
  test_cmd_eq 1 queued
  test_cmd cmp "$PUSH_CACHE/artifacts/$(push_check entry "$PUSH_QUEUE" data)" "$PUSH_A/a.in"
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

CASES="${REMOTE_CACHE_CASES:-case_roundtrip case_no_token case_second_put case_no_leak
  case_rotation case_token_cmd_fails case_other_host case_no_request case_download
  case_failing_cmd case_refused_token case_redirect case_cleartext case_read_through
  case_read_404 case_read_invalid_mapping case_read_bad_artifact case_read_bad_descriptor
  case_read_transport case_read_status case_read_status_persistence case_push_queue
  case_push_upload case_push_tree_changed case_push_mismatch case_push_missing
  case_push_custom_target case_push_githash case_push_deny case_push_invalid case_push_many
  case_push_staging case_push_concurrent}"
for c in $CASES; do
  echo "# ${c#case_}"
  "$c"
done
