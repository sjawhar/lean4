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

# A library of 16 modules, none of which imports another, so that a build of it reads all their
# mappings (and then their artifacts) at once
mkdir -p Many
many_roots=()
for i in $(seq 1 16); do
  echo "def m$i := $i" > "Many/M$i.lean"
  many_roots+=("\"Many.M$i\"")
done
cat >> lakefile.toml << EOF

[[lean_lib]]
name = "Many"
roots = [$(IFS=,; echo "${many_roots[*]}")]
EOF
# A library of 8 modules, none of which imports another, whose compile records when it starts and
# ends in `$LAKE_TEST_BUSY_LOG`: a `+` line, a second of work, and a `-` line
mkdir -p Busy
busy_roots=()
for i in $(seq 1 8); do
  cat > "Busy/B$i.lean" << 'EOF'
#eval show IO Unit from do
  if let some log ← IO.getEnv "LAKE_TEST_BUSY_LOG" then
    IO.FS.withFile log .append fun h => h.putStrLn "+"
    IO.sleep 1000
    IO.FS.withFile log .append fun h => h.putStrLn "-"
EOF
  echo "def b$i := $i" >> "Busy/B$i.lean"
  busy_roots+=("\"Busy.B$i\"")
done
cat >> lakefile.toml << EOF

[[lean_lib]]
name = "Busy"
roots = [$(IFS=,; echo "${busy_roots[*]}")]
EOF
# A \`curl\` that records how many transfers each of its runs carries (the \`url =\` lines of the
# configuration file it is given), one line per run
cat > count-curl.sh << EOF
#!/usr/bin/env bash
urls=0
prev=
for arg in "\$@"; do
  if [ "\$prev" = --config ] && [ -f "\$arg" ]; then
    urls=\$(grep -c '^url = ' "\$arg")
  fi
  prev=\$arg
done
echo "\$urls" >> '$WORK_DIR/curl-runs'
exec '$(type -P curl)' "\$@"
EOF
chmod +x count-curl.sh

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

case_read_shared_runs() {
  # The reads of the jobs that run at the same time go in shared `curl` runs: the 16 modules of
  # `Many`, which import nothing, restore with their 32 reads (a mapping and an artifact each) in
  # fewer `curl` runs than reads, and at least one run carries several of them. One `curl`
  # process per read would be 32 runs of one transfer, each with a connection of its own. The
  # remote answers each read after 2 s, so the build also shows that a run's transfers go at once
  # and not one after another.
  local start elapsed runs most
  LAKE_CACHE_DIR="$BUILD_CACHE_DIR" test_run build Many -o many-outputs.jsonl
  test_cmd rm -rf many-build
  test_cmd cp -r .lake/build many-build
  "$PYTHON" "$TEST_DIR/seed_remote.py" --store "$STORE_DIR/a0" --scope "$(remote_scope)" \
    --outputs many-outputs.jsonl --cache "$BUILD_CACHE_DIR" --build many-build
  fresh
  : > "$SERVER_LOG"
  rm -f "$WORK_DIR/curl-runs"
  start="$(date +%s)"
  LEAN_NUM_THREADS=16 CURL="$WORK_DIR/count-curl.sh" LAKE_REMOTE_CACHE=slow \
    test_not_out 'Built ' build Many
  elapsed=$(($(date +%s) - start))
  runs="$(grep -c . "$WORK_DIR/curl-runs")"
  most="$(sort -n "$WORK_DIR/curl-runs" | tail -1)"
  echo "the restore took $elapsed seconds in $runs curl runs for 32 reads;" \
    "the largest run carried $most"
  test_cmd_eq 16 count_path /in/ "$SERVER_LOG"
  test_cmd_eq 16 count_path /a/ "$SERVER_LOG"
  test_exp "$most" -ge 2
  test_exp "$runs" -lt 32
  test_exp "$elapsed" -lt 60
}

case_read_compile_slots() {
  # A read lets its job give up a worker, so many more jobs run at once than the pool has
  # workers. What the build runs at once stays bounded all the same: with two workers and eight
  # modules whose mappings are all missing (each miss waits 2 s for the remote), no more than two
  # compiles run at the same time.
  local busy
  busy="$WORK_DIR/busy-log"
  fresh
  : > "$busy"
  LEAN_NUM_THREADS=2 LAKE_TEST_BUSY_LOG="$busy" LAKE_REMOTE_CACHE=slow \
    test_out 'Built Busy' build Busy
  test_cmd_eq 8 count '^+$' "$busy"
  "$PYTHON" -c '
import sys
now = most = 0
for line in open(sys.argv[1]):
    now += 1 if line.strip() == "+" else -1
    most = max(most, now)
print("at most", most, "compiles ran at once")
assert most <= int(sys.argv[2]), most
' "$busy" 2
}

case_read_slot_wait_time() {
  # A job's build time (the time its `Built` line shows) does not count the time its compile waited
  # for a build slot. With one worker and the eight modules of `Busy`, whose mappings are all
  # missing (each miss waits 2 s for the remote) and each of whose compiles takes a second, the
  # compiles run one at a time after their reads, so the last one waits about 7 s for its slot; each
  # line still shows about the second of its own compile.
  local busy
  busy="$WORK_DIR/busy-log"
  fresh
  : > "$busy"
  LEAN_NUM_THREADS=1 LAKE_TEST_BUSY_LOG="$busy" LAKE_REMOTE_CACHE=slow \
    test_out 'Built Busy' build Busy
  test_cmd cp produced.out slotwait.out
  test_cmd_eq 8 count '^+$' "$busy"
  "$PYTHON" -c '
import re, sys
now = most = 0
for line in open(sys.argv[1]):
    now += 1 if line.strip() == "+" else -1
    most = max(most, now)
assert most == 1, most
times = {}
for line in open(sys.argv[2]):
    m = re.search(r"Built (Busy\.B\d+) \(([0-9.]+)(ms|s)\)", line)
    if m:
        times[m.group(1)] = float(m.group(2)) * (1 if m.group(3) == "ms" else 1000)
print("build times (ms):", sorted(times.values()))
assert len(times) == 8, times
assert max(times.values()) < 3000, times
' "$busy" slotwait.out
}

case_read_fast_refusals() {
  # A read that the remote cache refuses at once does not count as one that waited for the remote,
  # however long the read waited before its transfer started. Here every read of the build waits
  # 4 s for the token command, which the first read runs, and then the remote refuses each read
  # (403) at once: the build reads on, and does not stop reading the remote cache after 3 of them,
  # as it does after 3 reads that waited for a remote that did not answer (`case_read_silent`).
  # A read that waits for a run of the read broker (every run busy) waits outside its transfer in
  # the same way.
  fresh
  : > "$SERVER_LOG"
  LEAN_NUM_THREADS=16 LAKE_REMOTE_CACHE=deny LAKE_CACHE_TOKEN_CMD="sleep 4; $TOKEN_CMD" \
    test_out 'Built Many' -v build Many
  test_cmd cp produced.out refusals.out
  test_cmd_eq 0 count 'stopped reading the remote cache' refusals.out
  # Every module's mapping was read, and refused
  test_cmd_eq 16 count '^GET .*/in/.* -> 403 ' "$SERVER_LOG"
  "$PYTHON" -c '
import json, sys
status = json.load(open(sys.argv[1]))
assert "stopped" not in status, status
assert status["failures"] >= 16, status
' "$CACHE_DIR/remote-status-read.json"
}

run_cases case_read_through case_read_404 case_read_invalid_mapping case_read_bad_artifact \
  case_read_bad_descriptor case_read_transport case_read_status case_read_artifact_status \
  case_read_status_persistence case_read_silent case_read_shared_runs case_read_compile_slots \
  case_read_slot_wait_time case_read_fast_refusals
