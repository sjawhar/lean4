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
# ends in `$LAKE_TEST_BUSY_LOG`: a `+ <ns>` line, a second of work, and a `- <ns>` line, with times
# from `IO.monoNanosNow`, a clock that all processes share
mkdir -p Busy
busy_roots=()
for i in $(seq 1 8); do
  cat > "Busy/B$i.lean" << 'EOF'
#eval show IO Unit from do
  if let some log ← IO.getEnv "LAKE_TEST_BUSY_LOG" then
    let t0 ← IO.monoNanosNow
    IO.FS.withFile log .append fun h => h.putStrLn s!"+ {t0}"
    IO.sleep 1000
    let t1 ← IO.monoNanosNow
    IO.FS.withFile log .append fun h => h.putStrLn s!"- {t1}"
EOF
  echo "def b$i := $i" >> "Busy/B$i.lean"
  busy_roots+=("\"Busy.B$i\"")
done
cat >> lakefile.toml << EOF

[[lean_lib]]
name = "Busy"
roots = [$(IFS=,; echo "${busy_roots[*]}")]
EOF
# A library of 4 modules, each of which imports the one before it, so that a build reads the
# mapping of each module only after the reads of the modules before it have ended
mkdir -p Chain
echo 'def c1 := 1' > Chain/C1.lean
for i in 2 3 4; do
  printf 'import Chain.C%s\ndef c%s := %s\n' $((i - 1)) "$i" "$i" > "Chain/C$i.lean"
done
cat >> lakefile.toml << 'EOF'

[[lean_lib]]
name = "Chain"
roots = ["Chain.C1", "Chain.C2", "Chain.C3", "Chain.C4"]
EOF
# A \`curl\` that records how many transfers each of its runs carries (the \`url =\` lines of the
# configuration file it is given), one line per run, and the arguments of each run after that
# number, one line per run that one write appends, so that runs at the same time keep their
# lines whole
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
argv="\$*"
printf '%s %s \n' "\$urls" "\${argv//\$'\n'/ }" >> '$WORK_DIR/curl-argv'
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
  # such reads in a row the build stops reading the remote cache (but for a probe read at most
  # every 2 s, in the background, which is tried once). The build also reads `Chain`, whose last
  # module reads only after the three it imports have, so by then the build has stopped reading:
  # the stop always skips that read. This checks what the build did, which no load on the
  # machine changes: every target compiles; the verbose log says once why the build stopped
  # reading, and so does the read status, which counts one stop, after 3 reads; fewer reads went
  # than there are targets (each that went says so at verbose level); and in the server's log,
  # each mapping of such a read was asked for at most twice, and any other (a probe's) once. The
  # one time checked is Lake's own, of the transfers of the read that stopped the reads: two
  # tries that each waited the stall time, so at least 6 s, and at most 18 s, with 6 s a try for
  # starting `curl`, its once-a-second speed check and Lake's reading of its report.
  fresh
  : > "$SERVER_LOG"
  LAKE_REMOTE_CACHE=silent test_out 'Built Test' -v build Test native Chain
  match_text 'Built native' produced.out
  match_text 'Built Chain.C4' produced.out
  test_cmd cp produced.out silent.out
  test_cmd_eq 1 count 'stopped reading the remote cache' silent.out
  "$PYTHON" -c '
import json, sys
status = json.load(open(sys.argv[1]))
assert "stopped reading the remote cache" in status["stopped"], status
assert status["failures"] >= 3, status
' "$CACHE_DIR/remote-status-read.json"
  # The targets are those of `remote_targets` and the 4 modules of `Chain`
  "$PYTHON" -c '
import collections, json, re, sys
log, out = open(sys.argv[1]).read(), open(sys.argv[2]).read()
status = json.load(open(sys.argv[3]))
targets = int(sys.argv[4])
assert status["stops"] == 1 and status["resumes"] == 0, status
m = re.search(r"(\d+) reads in a row waited for it and failed "
              r"\(the transfers of the last one took (\d+) ms\)", status["stopped"])
assert m, status
print("stopped after %s reads; the transfers of the last one took %s ms" % m.groups())
assert int(m.group(1)) == 3, status
assert 2 * 3000 <= int(m.group(2)) <= 2 * (3000 + 6000), status
# The reads that went, by input hash, and the requests for each mapping that reached the server
went = set(re.findall(r"remote cache read for input `([0-9a-f]+)` failed", out))
asked = collections.Counter()
for method, path, answer in re.findall(r"([A-Z]+) (\S*/silent/\S*) -> (\S+) ", log):
    m = re.fullmatch(r"\S*/in/([0-9a-f]+)\.json", path)
    assert method == "GET" and m and answer == "silent", (method, path, answer)
    asked[m.group(1)] += 1
probed = {h: n for h, n in asked.items() if h not in went}
print(len(went), "of", targets, "targets read; requests by mapping:", dict(asked))
assert len(went) == status["failures"], (went, status)
assert 3 <= len(went) < targets, (went, targets)
assert all(asked[h] <= 2 for h in went), asked
assert all(n == 1 for n in probed.values()), asked
assert len(probed) <= status["probes"] <= targets - len(went), (probed, status)
' "$SERVER_LOG" silent.out "$CACHE_DIR/remote-status-read.json" "$(($(remote_targets) + 4))"
}

case_read_shared_runs() {
  # The reads of the jobs that run at the same time go in shared `curl` runs: the 16 modules of
  # `Many`, which import nothing, restore with their 32 reads (a mapping and an artifact each) in
  # fewer `curl` runs than reads, and at least one run carries several of them. One `curl`
  # process per read would be 32 runs of one transfer, each with a connection of its own. The
  # remote answers each read after 2 s, so the first runs still go when the later reads come,
  # and those share runs. A run's transfers go at once, not one after another: the arguments of
  # every run let `curl` run all of its transfers together (`-Z` with a `--parallel-max` of at
  # least their number) and, since the remote is plain HTTP, connect each of them at once
  # (`--parallel-immediate`; see `Lake.parallelConnectArgs`). No load on the machine changes
  # those arguments.
  local runs most
  LAKE_CACHE_DIR="$BUILD_CACHE_DIR" test_run build Many -o many-outputs.jsonl
  test_cmd rm -rf many-build
  test_cmd cp -r .lake/build many-build
  "$PYTHON" "$TEST_DIR/seed_remote.py" --store "$STORE_DIR/a0" --scope "$(remote_scope)" \
    --outputs many-outputs.jsonl --cache "$BUILD_CACHE_DIR" --build many-build
  fresh
  : > "$SERVER_LOG"
  rm -f "$WORK_DIR/curl-runs" "$WORK_DIR/curl-argv"
  LEAN_NUM_THREADS=16 CURL="$WORK_DIR/count-curl.sh" LAKE_REMOTE_CACHE=slow \
    test_not_out 'Built ' build Many
  runs="$(grep -c . "$WORK_DIR/curl-runs")"
  most="$(sort -n "$WORK_DIR/curl-runs" | tail -1)"
  echo "the restore took $runs curl runs for 32 reads; the largest run carried $most"
  test_cmd_eq 16 count_path /in/ "$SERVER_LOG"
  test_cmd_eq 16 count_path /a/ "$SERVER_LOG"
  test_exp "$most" -ge 2
  test_exp "$runs" -lt 32
  "$PYTHON" -c '
import re, sys
runs = [line.split(" ", 1) for line in open(sys.argv[1]) if line.strip()]
assert len(runs) == int(sys.argv[2]), (len(runs), sys.argv[2])
for urls, argv in runs:
    m = re.search(r"(?:^| )-Z --parallel-max ([0-9]+) --parallel-immediate ", argv)
    assert m and int(m.group(1)) >= int(urls), (urls, argv)
print("each of the", len(runs), "runs lets curl run all of its transfers at once")
' "$WORK_DIR/curl-argv" "$runs"
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
  test_cmd_eq 8 count '^+ ' "$busy"
  "$PYTHON" -c '
import sys
now = most = 0
for line in open(sys.argv[1]):
    now += 1 if line.startswith("+ ") else -1
    most = max(most, now)
print("at most", most, "compiles ran at once")
assert most <= int(sys.argv[2]), most
' "$busy" 2
}

case_read_slot_wait_time() {
  # A job's build time (the time its `Built` line shows) does not count the time its compile waited
  # for a build slot. With one worker and the eight modules of `Busy`, whose mappings are all
  # missing (each miss waits 2 s for the remote) and each of whose compiles takes a second, the
  # compiles run one at a time after their reads. The last one waits for its slot about as long as
  # the seven compiles before it, so a line that counted the wait shows about the span from the
  # first compile's start to the last one's end (eight compiles); each line must show less than
  # three quarters of that span. A correct line, about an eighth of the span, reaches three
  # quarters only if one compile takes about three times as long as all the others together, and a
  # load that slows the compiles lengthens the span with them.
  local busy
  busy="$WORK_DIR/busy-log"
  fresh
  : > "$busy"
  LEAN_NUM_THREADS=1 LAKE_TEST_BUSY_LOG="$busy" LAKE_REMOTE_CACHE=slow \
    test_out 'Built Busy' build Busy
  test_cmd cp produced.out slotwait.out
  test_cmd_eq 8 count '^+ ' "$busy"
  "$PYTHON" -c '
import re, sys
now = most = 0
starts, ends = [], []
for line in open(sys.argv[1]):
    sign, ns = line.split()
    now += 1 if sign == "+" else -1
    most = max(most, now)
    (starts if sign == "+" else ends).append(int(ns))
assert most == 1, most
times = {}
for line in open(sys.argv[2]):
    m = re.search(r"Built (Busy\.B\d+) \(([0-9.]+)(ms|s)\)", line)
    if m:
        times[m.group(1)] = float(m.group(2)) * (1 if m.group(3) == "ms" else 1000)
print("build times (ms):", sorted(times.values()))
assert len(times) == 8, times
assert len(ends) == 8, ends
span = max(ends) - min(starts)
assert span > 0, (starts, ends)
ratio = max(times.values()) * 10**6 / span
print("span of the compiles, first start to last end: %d ms" % (span // 10**6))
print("largest build time / span: %.3f" % ratio)
assert ratio < 0.75, (ratio, span, times)
' "$busy" slotwait.out
}

case_read_fast_refusals() {
  # A read that the remote cache answers at once with an error (here 403) does not count as one that
  # waited for the remote, however long the read waited before its transfer started. Here every read
  # of the build waits 4 s for the token command, which the first read runs, and then the remote
  # answers each read with 403 at once: the build reads on, and does not stop reading the remote
  # cache after 3 of them, as it does after 3 reads that waited for a remote that did not answer
  # (`case_read_silent`). A read that waits for a run of the read broker (every run busy) waits
  # outside its transfer in the same way.
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

case_service_cached_mapping() {
  # A writable restore rewrites the remote metadata; a read-only restore retains it.
  # Both keep the mapping while pruning its blobs, and neither may fetch them in service mode.
  local mode
  for mode in writable readonly; do
    if [ "$mode" = readonly ]; then sed_i '/^enableArtifactCache = true$/d' lakefile.toml; fi
    seed_remote
    fresh
    : > "$SERVER_LOG"
    LAKE_REMOTE_CACHE=ok test_not_out 'Built ' build Test
    test_exp "$(count 'GET ' "$SERVER_LOG")" -gt 0
    "$PYTHON" - "$CACHE_DIR/outputs" "$mode" <<'PY'
import json, pathlib, sys
maps = [json.loads(p.read_text()) for p in pathlib.Path(sys.argv[1]).rglob('*.json')]
assert maps, 'no mappings from the prior remote read'
if sys.argv[2] == 'readonly':
    assert all(m.get('service') == 'ok' and m.get('sha256') for m in maps), maps
else:
    assert all(not m.get('service') and not m.get('sha256') for m in maps), maps
PY
    test_cmd rm -rf .lake/build
    find "$CACHE_DIR/artifacts" -type f -delete
    : > "$SERVER_LOG"
    LAKE_REMOTE_CACHE=ok LAKE_REMOTE_EXEC=grpc://fake:1 \
      LAKE_REMOTE_EXEC_CLIENT="$LIB_DIR/../remoteExec/fake_lean_remote.py" \
      LAKE_REMOTE_EXEC_TOOLCHAIN=sha256:0000000000000000000000000000000000000000000000000000000000000001 \
      LAKE_REMOTE_EXEC_SYSROOT="$(lean --print-prefix)" \
      FAKE_CAS="$WORK_DIR/service-$mode-cas" FAKE_LOG="$WORK_DIR/service-$mode.log" \
      test_run build Test
    test_cmd_eq 0 count 'GET ' "$SERVER_LOG"
    test_exp -s "$WORK_DIR/service-$mode.log"
  done
}

run_cases case_read_through case_read_404 case_read_invalid_mapping case_read_bad_artifact \
  case_read_bad_descriptor case_read_transport case_read_status case_read_artifact_status \
  case_read_status_persistence case_read_silent case_read_shared_runs case_read_compile_slots \
  case_read_slot_wait_time case_read_fast_refusals case_service_cached_mapping
