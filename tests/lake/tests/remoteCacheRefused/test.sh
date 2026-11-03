#!/usr/bin/env bash
# Copyright (c) 2026 Lean FRO. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.
source ../common.sh

./clean.sh

# Test that a build stops reading the shared remote cache that `LAKE_REMOTE_CACHE` names when it
# cannot reach the remote (a refused connection, `curl` exit code 7, or a host name that does not
# resolve, exit code 6) for 3 reads in a row and for the stall time (3 s) of a read, as it does after
# 3 reads that waited for a remote that did not answer (`../remoteCacheRead`, `case_read_silent`);
# that a shorter refusal does not stop the reads; and that a stop ends once a probe read (at most
# one every 2 s while the reads are stopped) gets an answer. Every read here gets a 404 from the
# `miss` service when it is not refused, but in the `seeded_build` cases, whose `ok` service holds
# the outputs of `Long`. `refuse_curl.py` refuses the reads of the `curl` runs that `REFUSE` names.
# The setup and the shared helpers are in `../remoteCache/lib.sh`.

source ../remoteCache/lib.sh

# A chain of 12 modules, each of which imports the one before it and takes half a second to
# compile, so that the build reads their mappings one after another (one read in each `curl` run)
mkdir -p Chain
chain_roots=()
for i in $(seq 1 12); do
  {
    if [ "$i" -gt 1 ]; then echo "import Chain.C$((i - 1))"; fi
    echo '#eval show IO Unit from IO.sleep 500'
    echo "def c$i := $i"
  } > "Chain/C$i.lean"
  chain_roots+=("\"Chain.C$i\"")
done
cat >> lakefile.toml << EOF

[[lean_lib]]
name = "Chain"
roots = [$(IFS=,; echo "${chain_roots[*]}")]
EOF
# A library of 16 modules, none of which imports another, so that a build reads their mappings at
# once; each compile appends a line to `$LAKE_TEST_MARKS`. `Late` imports all of them, so the build
# reads its mapping after they have all compiled.
mkdir -p Many
many_roots=()
late_imports=()
for i in $(seq 1 16); do
  cat > "Many/M$i.lean" << 'EOF'
#eval show IO Unit from do
  if let some marks ← IO.getEnv "LAKE_TEST_MARKS" then
    IO.FS.withFile marks .append fun h => h.putStrLn "+"
EOF
  echo "def m$i := $i" >> "Many/M$i.lean"
  many_roots+=("\"Many.M$i\"")
  late_imports+=("import Many.M$i")
done
printf '%s\n' "${late_imports[@]}" > Late.lean
echo 'def late := 0' >> Late.lean
cat >> lakefile.toml << EOF

[[lean_lib]]
name = "Many"
roots = [$(IFS=,; echo "${many_roots[*]}")]

[[lean_lib]]
name = "Late"
EOF
# A chain of 40 modules, each of which imports the one before it, sleeps half a second while it
# compiles (a compile took about 0.75 s in the build pool), and appends its name to
# `$LAKE_TEST_COMPILES` when it compiles
mkdir -p Long
long_roots=()
for i in $(seq 1 40); do
  {
    if [ "$i" -gt 1 ]; then echo "import Long.L$((i - 1))"; fi
    echo '#eval show IO Unit from do'
    echo '  if let some f ← IO.getEnv "LAKE_TEST_COMPILES" then'
    echo "    IO.FS.withFile f .append (·.putStrLn \"Long.L$i\")"
    echo '  IO.sleep 500'
    echo "def l$i := $i"
  } > "Long/L$i.lean"
  long_roots+=("\"Long.L$i\"")
done
cat >> lakefile.toml << EOF

[[lean_lib]]
name = "Long"
roots = [$(IFS=,; echo "${long_roots[*]}")]
EOF

# A port of 127.0.0.1 on which nothing listens: a connection to it is refused
REFUSED_PORT="$("$PYTHON" -c '
import socket
s = socket.socket()
s.bind(("127.0.0.1", 0))
print(s.getsockname()[1])
')"
export REAL_CURL="$(type -P curl)" REFUSED_PORT REFUSE_LOG="$WORK_DIR/refuse-log"
# A proxy would answer the reads that go to a host name that does not resolve
unset http_proxy https_proxy all_proxy HTTP_PROXY HTTPS_PROXY ALL_PROXY
# The `curl` that `refuse_curl.py` makes of the real one, run with the `$PYTHON` that `lib.sh` checked
cat > refuse-curl.sh << EOF
#!/usr/bin/env bash
exec '$PYTHON' '$TEST_DIR/refuse_curl.py' "\$@"
EOF
chmod +x refuse-curl.sh
REFUSE_CURL="$WORK_DIR/refuse-curl.sh"

# Counts the `curl` runs that `refuse_curl.py` refused or sent
runs() { count " $1\$" "$REFUSE_LOG"; }

# Builds `$1` with the `miss` service and the reads `$REFUSE` names refused, at verbose level
build_refusing() {
  fresh
  : > "$SERVER_LOG"
  rm -f "$REFUSE_LOG"
  CURL="$REFUSE_CURL" LAKE_REMOTE_CACHE=miss test_out "Built $1" -v build "$1"
  test_cmd cp produced.out "$WORK_DIR/build.out"
  echo "curl runs:"
  cat "$REFUSE_LOG"
}

# Checks the read status: `stopped` (yes or no, whether the build ended with its reads stopped),
# and, if given, how many times the build stopped and resumed its reads
stopped_status() {
  "$PYTHON" -c '
import json, sys
status = json.load(open(sys.argv[1]))
assert ("stopped" in status) == (sys.argv[2] == "yes"), status
if sys.argv[2] == "yes":
    assert "stopped reading the remote cache" in status["stopped"], status
if len(sys.argv) > 3:
    assert status.get("stops", 0) == int(sys.argv[3]), status
    assert status.get("resumes", 0) == int(sys.argv[4]), status
' "$CACHE_DIR/remote-status-read.json" "$@"
}

# How many reads in a row failed when the build stopped reading, from the line that says so
stop_reads() {
  sed -n 's/.*stopped reading the remote cache[^:]*: \([0-9]*\) reads in a row.*/\1/p' \
    "$WORK_DIR/build.out"
}

# The remote of the `ok` service holds the outputs of `Long`, as `lake cache push` would store them:
# they are built once into the cache of the machine that uploads, and
# `../remoteCacheRead/seed_remote.py` stores them
LAKE_CACHE_DIR="$BUILD_CACHE_DIR" test_run build Long -o seed-outputs.jsonl
test_cmd cp -r .lake/build seed-build
"$PYTHON" "$TEST_DIR/../remoteCacheRead/seed_remote.py" --store "$STORE_DIR/a0" \
  --scope "$(remote_scope)" --outputs seed-outputs.jsonl --cache "$BUILD_CACHE_DIR" \
  --build seed-build

# Builds `$1` with the seeded `ok` service and the reads `$REFUSE` names refused, at verbose level;
# each module of `Long` that compiles appends its name to `$WORK_DIR/compiles`
seeded_build() {
  fresh
  : > "$SERVER_LOG"
  rm -f "$REFUSE_LOG" "$WORK_DIR/compiles"
  touch "$WORK_DIR/compiles"
  CURL="$REFUSE_CURL" LAKE_REMOTE_CACHE=ok LAKE_TEST_COMPILES="$WORK_DIR/compiles" \
    lake_out -v build "$1"
  test_cmd cp produced.out "$WORK_DIR/build.out"
  echo "curl runs:"
  cat "$REFUSE_LOG"
}

case_read_stop() {
  # The record of the reads that stops and resumes them (`Lake.RemoteReadStatus.noteRead`), read by
  # read: only a probe resumes the reads, and a read sent before the reads stopped or resumed
  # counts for nothing (`ReadStop.lean`)
  test_run env lean "$TEST_DIR/ReadStop.lean"
}

case_refused() {
  # A remote that refuses every connection: the build reads on until its refused reads in a row
  # have gone on for 3 s, logs why it stopped once (the line that a remote that does not answer
  # gets), and the rest of the chain compiles without a read but the probes (at most one in place
  # of each read the build skips).
  REFUSE=all build_refusing Chain.C12
  match_text 'Built Chain.C12' "$WORK_DIR/build.out"
  test_cmd_eq 1 count 'stopped reading the remote cache: [0-9]* reads in a row waited for it and failed (the transfers of the last one took [0-9]* ms); a probe read goes at most every 2 s, and the reads resume once one gets an answer$' "$WORK_DIR/build.out"
  test_cmd_eq 0 count 'resumed reading the remote cache' "$WORK_DIR/build.out"
  test_exp "$(stop_reads)" -ge 3
  test_exp "$(stop_reads)" -lt 12
  test_cmd_eq 0 runs sent
  stopped_status yes
}

case_refused_after_answers() {
  # A remote that answers the first 4 reads (404, a miss) and then refuses its connections: the
  # answered reads do not count, and the build stops reading once the refusals have gone on for 3 s.
  REFUSE=from:5 build_refusing Chain.C12
  test_cmd_eq 4 count_path /in/ "$SERVER_LOG"
  test_cmd_eq 4 runs sent
  test_cmd_eq 1 count 'stopped reading the remote cache' "$WORK_DIR/build.out"
  test_exp "$(stop_reads)" -ge 3
  test_exp "$(stop_reads)" -lt 8
  stopped_status yes
}

case_unresolvable() {
  # A remote whose host name does not resolve (`.invalid` never does): each read is tried once more
  # after 1 s and fails again, and the build stops reading once such reads have gone on for 3 s.
  # Each read is two `curl` runs (a probe is one), so a build that read every module of the chain
  # would make 24.
  REFUSE=all REFUSE_HOST=lake-test.invalid build_refusing Chain.C12
  test_cmd_eq 1 count 'stopped reading the remote cache' "$WORK_DIR/build.out"
  test_exp "$(runs refused)" -ge 6
  test_exp "$(runs refused)" -lt 24
  stopped_status yes
}

case_refused_briefly() {
  # The 16 reads of `Many`, which go at once, are all refused, and then the remote answers again:
  # 16 refused reads in a row that did not go on for 3 s do not stop the reads, so the build still
  # reads the mapping of `Late`, which it reads after them.
  local marks="$WORK_DIR/marks"
  rm -f "$marks"
  LEAN_NUM_THREADS=16 LAKE_TEST_MARKS="$marks" REFUSE="until:$marks:16" build_refusing Late
  test_cmd_eq 0 count 'stopped reading the remote cache' "$WORK_DIR/build.out"
  test_cmd_eq 16 count '^+$' "$marks"
  test_cmd_eq 1 count_path /in/ "$SERVER_LOG"
  stopped_status no
}

case_one_refused() {
  # One refused read between reads that the remote answers does not stop the reads: every module of
  # the chain reads its mapping.
  REFUSE=only:3 build_refusing Chain.C12
  test_cmd_eq 0 count 'stopped reading the remote cache' "$WORK_DIR/build.out"
  test_cmd_eq 1 runs refused
  test_cmd_eq 11 runs sent
  test_cmd_eq 11 count_path /in/ "$SERVER_LOG"
  stopped_status no
}

case_outage_recovers() {
  # A remote that refuses every connection for the first 5 s of a build and then answers: the build
  # stops reading it once its refused reads have gone on for 3 s, and compiles; a probe read after
  # the outage gets an answer, so the build reads the remote again and restores the rest of the
  # chain. The outage costs the modules compiled during it and until the probe, not the rest of the
  # build.
  local compiled
  REFUSE=for:5 seeded_build Long.L40
  compiled="$(count '^Long\.' "$WORK_DIR/compiles")"
  echo "$compiled of the 40 modules of Long compiled"
  # The 5 s of the outage and two probe intervals after it (the first probe can still be refused),
  # at most two modules a second, and two more for the edges
  test_exp "$compiled" -le 20
  # Every module that did not compile read its mapping, and so did the probe that got an answer
  test_cmd_eq $((40 - compiled + 1)) count_path /in/ "$SERVER_LOG"
  stopped_status no 1 1
  test_cmd_eq 1 count 'stopped reading the remote cache: .*a probe read goes at most every 2 s' "$WORK_DIR/build.out"
  test_cmd_eq 1 count 'resumed reading the remote cache: a probe read got an answer' "$WORK_DIR/build.out"
}

case_dead_remote_probes() {
  # A remote that refuses every connection for the whole build: after the stop, the build starts
  # one probe read at most every 2 s, none gets an answer, and the reads stay stopped. So the build
  # costs one refused read for every 2 s or so of the build after the stop, not one per module.
  local end
  REFUSE=all build_refusing Long.L40
  end="$("$PYTHON" -c 'import time; print(time.monotonic())')"
  test_cmd_eq 1 count 'stopped reading the remote cache' "$WORK_DIR/build.out"
  test_cmd_eq 0 count 'resumed reading the remote cache' "$WORK_DIR/build.out"
  test_cmd_eq 0 runs sent
  "$PYTHON" -c '
import json, sys
starts = [float(line.split()[2]) for line in open(sys.argv[1]) if line.strip()]
end, reads, probe_secs = float(sys.argv[2]), int(sys.argv[3]), 2.0
# Each read of the chain before the stop is one `curl` run, and so is each probe after it
before, probes = starts[:reads], starts[reads:]
module_secs = (before[-1] - before[0]) / (len(before) - 1)
after = end - before[-1]
print(f"{reads} reads before the stop, a module every {module_secs:.2f} s; "
      f"{len(probes)} probes in the {after:.1f} s after it")
gaps = [b - a for a, b in zip(starts[reads - 1:], probes)]
# The time `refuse_curl.py` takes to start is in each gap: allow 0.3 s of it
assert all(gap >= probe_secs - 0.3 for gap in gaps), gaps
# A probe starts in place of the first read the build skips (one per module) once 2 s have passed
assert int(after / (probe_secs + module_secs)) - 1 <= len(probes) <= int(after / probe_secs) + 1, (
    len(probes), after)
status = json.load(open(sys.argv[4]))
assert status["probes"] == len(probes), (status, len(probes))
' "$REFUSE_LOG" "$end" "$(stop_reads)" "$CACHE_DIR/remote-status-read.json"
  stopped_status yes 1 0
}

case_silent_outage_recovers() {
  # A remote that reads each request and does not answer until the first probe: each of the first 3
  # reads of the chain (the first 6 `curl` runs) gives up after 3 s without an answer, is tried
  # once more after 1 s, and gives up again, which stops the reads; the first probe read, 2 s
  # later, gets an answer, and the rest of the chain restores.
  local compiled
  REFUSE="until:$REFUSE_LOG:6" REFUSE_SILENT=1 seeded_build Long.L40
  compiled="$(count '^Long\.' "$WORK_DIR/compiles")"
  echo "$compiled of the 40 modules of Long compiled"
  # The 3 that waited, one probe interval, at most two modules a second, and two more for the edges
  test_exp "$compiled" -le 9
  # Every module that did not compile read its mapping, and so did the probe that got an answer
  # (the reads that got none were logged with the status `silent`)
  test_cmd_eq $((40 - compiled + 1)) count '^GET .*/in/.* -> 200 ' "$SERVER_LOG"
  stopped_status no 1 1
  test_cmd_eq 1 count 'stopped reading the remote cache: 3 reads in a row.*a probe read goes at most every 2 s' "$WORK_DIR/build.out"
  test_cmd_eq 1 count 'resumed reading the remote cache: a probe read got an answer' "$WORK_DIR/build.out"
}

run_cases case_read_stop case_refused case_refused_after_answers case_unresolvable \
  case_refused_briefly case_one_refused case_outage_recovers case_dead_remote_probes \
  case_silent_outage_recovers
