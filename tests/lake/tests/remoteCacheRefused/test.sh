#!/usr/bin/env bash
# Copyright (c) 2026 Lean FRO. All rights reserved.
# Released under Apache 2.0 license as described in the file LICENSE.
source ../common.sh

./clean.sh

# Test that a build stops reading the shared remote cache that `LAKE_REMOTE_CACHE` names when it
# cannot reach the remote (a refused connection, `curl` exit code 7, or a host name that does not
# resolve, exit code 6) for 3 reads in a row and for the stall time (3 s) of a read, as it does after
# 3 reads that waited for a remote that did not answer (`../remoteCacheRead`, `case_read_silent`);
# and that a shorter refusal does not stop the reads. Every read here gets a 404 from the `miss`
# service when it is not refused. `refuse_curl.py` refuses the reads of the `curl` runs that
# `REFUSE` names. The setup and the shared helpers are in `../remoteCache/lib.sh`.

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

stopped_status() {
  "$PYTHON" -c '
import json, sys
status = json.load(open(sys.argv[1]))
assert ("stopped" in status) == (sys.argv[2] == "yes"), status
if sys.argv[2] == "yes":
    assert "stopped reading the remote cache" in status["stopped"], status
' "$CACHE_DIR/remote-status-read.json" "$1"
}

case_refused() {
  # A remote that refuses every connection: the build reads on until its refused reads in a row
  # have gone on for 3 s, logs why it stopped once (the line that a remote that does not answer
  # gets), and the rest of the chain compiles without a read.
  REFUSE=all build_refusing Chain.C12
  match_text 'Built Chain.C12' "$WORK_DIR/build.out"
  test_cmd_eq 1 count 'stopped reading the remote cache for the rest of this build: [0-9]* reads in a row waited for it and failed' "$WORK_DIR/build.out"
  test_exp "$(runs refused)" -ge 3
  test_exp "$(runs refused)" -lt 12
  test_cmd_eq 0 runs sent
  stopped_status yes
}

case_refused_after_answers() {
  # A remote that answers the first 4 reads (404, a miss) and then refuses its connections: the
  # answered reads do not count, and the build stops reading once the refusals have gone on for 3 s.
  REFUSE=from:5 build_refusing Chain.C12
  test_cmd_eq 4 count_path /in/ "$SERVER_LOG"
  test_cmd_eq 4 runs sent
  test_cmd_eq 1 count 'stopped reading the remote cache for the rest of this build' "$WORK_DIR/build.out"
  test_exp "$(runs refused)" -ge 3
  test_exp "$(runs refused)" -lt 8
  stopped_status yes
}

case_unresolvable() {
  # A remote whose host name does not resolve (`.invalid` never does): each read is tried once more
  # after 1 s and fails again, and the build stops reading once such reads have gone on for 3 s.
  # Each read is two `curl` runs, so a build that read every module of the chain would make 24.
  REFUSE=all REFUSE_HOST=lake-test.invalid build_refusing Chain.C12
  test_cmd_eq 1 count 'stopped reading the remote cache for the rest of this build' "$WORK_DIR/build.out"
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

run_cases case_refused case_refused_after_answers case_unresolvable case_refused_briefly case_one_refused
