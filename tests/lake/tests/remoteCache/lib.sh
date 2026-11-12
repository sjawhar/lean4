# Copyright (c) 2026 Lean FRO. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.

# The setup and helpers that the tests of the shared remote cache share: transfers with the
# cache token (`../remoteCache`), read-through (`../remoteCacheRead`) and write-back
# (`../remoteCachePush`). A test sources this file after `../common.sh` and `./clean.sh`.
#
# Each test has a work directory of its own and its own two mock servers, each on a free port,
# so the tests can run at the same time. The mock server, the `curl` wrapper and the package
# come from `../cacheTransfer`.
#
# Each case is a function with a remote scope of its own, so that a case can also run alone,
# e.g. `REMOTE_CACHE_CASES=case_rotation ./test.sh` (see `run_cases`).

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

# This file's directory, and that of the test that sources it
LIB_DIR="$(norm_path "$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &> /dev/null && pwd)")"
TEST_DIR="$(norm_path "$(cd -- "$(dirname -- "${BASH_SOURCE[1]}")" &> /dev/null && pwd)")"
FIXTURE_DIR="$(norm_path "$(cd -- "$LIB_DIR/../cacheTransfer" &> /dev/null && pwd)")"
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
cp "$LIB_DIR/services.toml" .
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

# A token command that prints a token the servers accept and counts its runs
TOKEN_CMD="echo run >> '$TOKEN_RUNS'; echo test-token-1"
token_runs() {
  if [ -f "$TOKEN_RUNS" ]; then count run "$TOKEN_RUNS"; else echo 0; fi
}
# Forgets everything the downloading machine has
fresh() { test_cmd rm -rf .lake/build "$CACHE_DIR"; }

# Runs the cases named by `REMOTE_CACHE_CASES`, or else the cases given, in order
run_cases() {
  local c
  for c in ${REMOTE_CACHE_CASES:-$*}; do
    echo "# ${c#case_}"
    "$c"
  done
}
