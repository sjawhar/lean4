#!/usr/bin/env bash
source ../common.sh
./clean.sh
PYTHON="${PYTHON:-python3}"
HERE=$(pwd)
W="$HERE/work"
mkdir -p "$W"
export LAKE_REMOTE_EXEC_CLIENT="$HERE/../remoteExec/fake_lean_remote.py"
export LAKE_REMOTE_EXEC_TOOLCHAIN=sha256:0000000000000000000000000000000000000000000000000000000000000001
export LAKE_REMOTE_EXEC_SYSROOT="$(lean --print-prefix)"
export LAKE_CACHE_DIR="$W/cache" LAKE_ARTIFACT_CACHE=false
LOCAL_GITHASH=$(lean --githash)
REMOTE_GITHASH=0000000000000000000000000000000000000000

make_case() {
  mkdir -p "$W/$1"
  printf 'name = "mismatch"\n[[lean_lib]]\nname = "P"\n[[lean_lib]]\nname = "A"\n' > "$W/$1/lakefile.toml"
  printf 'module\n/-! A dependency for toolchain mismatch tests. -/\npublic def a : Nat := 1\n' > "$W/$1/A.lean"
  printf 'module\nimport A\n/-! A root built only by the selected fallback. -/\npublic def p := a + 1\n' > "$W/$1/P.lean"
}

# The baseline proves that the same inputs compile without any service.
make_case baseline
(cd "$W/baseline" && test_run build P)

for when in initial later; do
  for mode in local wait fail; do
    name="$when-$mode"
    make_case "$name"
    (
      cd "$W/$name"
      export LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_REMOTE_EXEC_FALLBACK="$mode"
      export LAKE_REMOTE_EXEC_LOG="$W/$name.jsonl" FAKE_LOG="$W/$name.fake.log" FAKE_CAS="$W/$name.cas"
      if [ "$when" = initial ]; then
        export FAKE_GITHASH="$REMOTE_GITHASH"
      else
        # The build-start hello succeeds; the bridge used for actions sees the mismatch.
        export FAKE_UNVERIFIED_LATER="$W/$name.state"
      fi
      if [ "$mode" = local ]; then
        test_status_out 0 "2 local;" build P
        match_text "warning:" produced.out
        match_text "runs Lean $REMOTE_GITHASH, but this Lake uses Lean $LOCAL_GITHASH" produced.out
        cmp .lake/build/lib/lean/P.olean "$W/baseline/.lake/build/lib/lean/P.olean"
        "$PYTHON" - "$LAKE_REMOTE_EXEC_LOG" <<'PY'
import json, sys
rows = [json.loads(line) for line in open(sys.argv[1]) if line.strip()]
assert sorted(row['target'] for row in rows) == ['A', 'P'], rows
assert all(row['kind'] == 'lean' and row['result'] == 'toolchain-mismatch'
           and row['action'] == '' and row['outputs'] == {} and row['exitCode'] == 0
           and row['wallMs'] > 0 for row in rows), rows
PY
        # A replay does not compile, so it adds no mismatch result to the per-target log.
        if [ "$when" = initial ]; then
          test_status_out 0 "0 local;" build P
          test_cmd_eq 2 wc -l < "$LAKE_REMOTE_EXEC_LOG"
        fi
      else
        test_status_out 75 "runs Lean $REMOTE_GITHASH, but this Lake uses Lean $LOCAL_GITHASH" build P
        test_exp ! -e .lake/build/lib/lean/A.olean
        test_exp ! -e .lake/build/lib/lean/P.trace
        test_exp ! -s "$LAKE_REMOTE_EXEC_LOG"
      fi
      "$PYTHON" - "$FAKE_LOG" <<'PY'
import json, sys
requests = [json.loads(line) for line in open(sys.argv[1]) if line.strip()]
assert not any(row.get('method') in ('digest', 'run', 'materialize') for row in requests), requests
PY
    )
  done
done

for mode in local wait fail; do
  name="later-same-$mode"
  make_case "$name"
  (
    cd "$W/$name"
    export LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_REMOTE_EXEC_FALLBACK="$mode"
    export FAKE_LOG="$W/$name.fake.log" FAKE_CAS="$W/$name.cas"
    export FAKE_HELLO_SEQUENCE=refused-later FAKE_HELLO_STATE="$W/$name.state"
    test_status_out 1 'did not verify its toolchain' build P
    test_exp ! -e .lake/build/lib/lean/A.olean
    "$PYTHON" - "$FAKE_LOG" <<'PY'
import json, sys
rows = [json.loads(line) for line in open(sys.argv[1]) if line.strip()]
assert [row['method'] for row in rows if 'method' in row] == ['hello', 'hello'], rows
PY
  )
done

make_case probe-wait
(
  cd "$W/probe-wait"
  export LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_REMOTE_EXEC_FALLBACK=wait
  export LAKE_REMOTE_EXEC_LOG="$W/probe-wait.jsonl" FAKE_LOG="$W/probe-wait.fake.log" FAKE_CAS="$W/probe-wait.cas"
  export FAKE_HELLO_SEQUENCE=mismatch-after-outage FAKE_HELLO_STATE="$W/probe-wait.state"
  rc=0
  timeout 60 "$LAKE" build P > "$W/probe-wait.out" 2>&1 || rc=$?
  cat "$W/probe-wait.out"
  test_exp "$rc" = 75
  match_text "runs Lean $REMOTE_GITHASH, but this Lake uses Lean $LOCAL_GITHASH" "$W/probe-wait.out"
  test_exp ! -e .lake/build/lib/lean/A.olean
  test_exp ! -s "$LAKE_REMOTE_EXEC_LOG"
  "$PYTHON" - "$FAKE_LOG" <<'PY'
import json, sys
rows = [json.loads(line) for line in open(sys.argv[1]) if line.strip()]
assert [row['method'] for row in rows if 'method' in row] == ['hello', 'hello'], rows
PY
)

# Missing verification, or an explicit failed verification with the SAME hash, is not a
# confirmed mismatch. Even `local` must fail closed, not silently downgrade such a refusal.
for refusal in missing same; do
  for mode in local wait fail; do
    name="unverified-$refusal-$mode"
    make_case "$name"
    (
      cd "$W/$name"
      export LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_REMOTE_EXEC_FALLBACK="$mode"
      export FAKE_LOG="$W/$name.fake.log" FAKE_CAS="$W/$name.cas"
      if [ "$refusal" = missing ]; then export FAKE_OMIT_VERIFIED=1; else export FAKE_UNVERIFIED=1; fi
      test_status_out 1 'did not verify its toolchain' build P
      test_exp ! -e .lake/build/lib/lean/A.olean
    )
  done
done

# A failed local githash probe leaves no known hash to compare with the service's.
export TEST_REAL_LEAN="$(command -v lean)"
UNKNOWN_SYSROOT="$W/unknown-sysroot"
mkdir -p "$UNKNOWN_SYSROOT/bin"
ln -s "$LAKE_REMOTE_EXEC_SYSROOT/lib" "$UNKNOWN_SYSROOT/lib"
cat > "$UNKNOWN_SYSROOT/bin/lean" <<'EOF'
#!/usr/bin/env bash
if [ "$#" = 1 ] && [ "$1" = --githash ]; then
  printf '%s\n' --githash >> "$TEST_GITHASH_PROBE_LOG"
  exit 1
fi
exec "$TEST_REAL_LEAN" "$@"
EOF
chmod +x "$UNKNOWN_SYSROOT/bin/lean"
for mode in fail wait local; do
  name="unknown-local-$mode"
  make_case "$name"
  (
    cd "$W/$name"
    export LAKE_OVERRIDE_LEAN=1 LEAN_SYSROOT="$UNKNOWN_SYSROOT"
    export TEST_GITHASH_PROBE_LOG="$W/$name.probe.log"
    export LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_REMOTE_EXEC_FALLBACK="$mode"
    export LAKE_REMOTE_EXEC_LOG="$W/$name.jsonl" FAKE_GITHASH="$REMOTE_GITHASH"
    export FAKE_LOG="$W/$name.fake.log" FAKE_CAS="$W/$name.cas"
    test_status_out 1 'did not verify its toolchain' build P
    no_match_text 'falling back to local compilation' produced.out
    test_exp -s "$TEST_GITHASH_PROBE_LOG"
    test_exp ! -e .lake/build/lib/lean/A.olean
    test_exp ! -e .lake/build/lib/lean/P.trace
    test_exp ! -s "$LAKE_REMOTE_EXEC_LOG"
    "$PYTHON" - "$FAKE_LOG" <<'PY'
import json, sys
rows = [json.loads(line) for line in open(sys.argv[1]) if line.strip()]
assert [row['method'] for row in rows if 'method' in row] == ['hello'], rows
assert rows[0]['params']['leanGithash'] == '', rows
PY
  )
done
