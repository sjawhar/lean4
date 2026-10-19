#!/usr/bin/env bash
# measure-lend.sh [N] [SLEEP_MS] [WORKERS]: how many service requests a build keeps in flight.
#
# Builds N independent modules in service mode against the fake daemon, answering requests
# concurrently with SLEEP_MS of latency per action, with WORKERS Lake workers (LEAN_NUM_THREADS).
# A client that lends its build worker while it waits keeps about N requests in flight and takes
# about one latency; one that does not keeps WORKERS in flight and takes N / WORKERS latencies.
# Not part of the suite. Run it as the suite runs tests, from tests/lake:
#   LAKE=$PWD/.lake/build/bin/lake ./run_test.sh tests/remoteExec   # once, to check the build
#   "$LAKE" env bash tests/remoteExec/measure-lend.sh 32 500 2
set -euo pipefail
N="${1:-32}"; SLEEP_MS="${2:-500}"; WORKERS="${3:-2}"
LAKE="${LAKE:-lake}"
HERE="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &>/dev/null && pwd)"
WORK="$HERE/work/measure"
rm -rf "$WORK"; mkdir -p "$WORK/proj/Mx"
cd "$WORK/proj"
printf 'name = "mx"\n\n[[lean_lib]]\nname = "Mx"\n' > lakefile.toml
: > Mx.lean
for i in $(seq 0 $((N - 1))); do
  printf 'def m%s := %s\n' "$i" "$i" > "Mx/M$i.lean"
  printf 'import Mx.M%s\n' "$i" >> Mx.lean
done
export LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_REMOTE_EXEC_CLIENT="$HERE/fake_lean_remote.py"
export LAKE_REMOTE_EXEC_TOOLCHAIN=sha256:0000000000000000000000000000000000000000000000000000000000000001
export LAKE_REMOTE_EXEC_SYSROOT="$(lean --print-prefix)" LAKE_CACHE_DIR="$WORK/lake-cache"
export FAKE_CAS="$WORK/cas" FAKE_CONCURRENT=1 FAKE_SLEEP_MS="$SLEEP_MS" FAKE_INFLIGHT="$WORK/inflight"
export LEAN_NUM_THREADS="$WORKERS"
start=$(date +%s.%N)
"$LAKE" build Mx > "$WORK/build.log" 2>&1 || { echo "build failed:"; tail -20 "$WORK/build.log"; exit 1; }
end=$(date +%s.%N)
echo "modules=$N sleep_ms=$SLEEP_MS workers=$WORKERS wall_s=$(awk "BEGIN{printf \"%.2f\", $end - $start}") max_in_flight=$(cat "$WORK/inflight")"
