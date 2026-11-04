#!/usr/bin/env bash
source ../common.sh
./clean.sh
mkdir -p work/race
HERE=$(pwd)
W="$HERE/work"
printf 'name = "race"\n[[lean_lib]]\nname = "P"\n' > "$W/race/lakefile.toml"
printf 'def p : Nat := 1\n' > "$W/race/P.lean"
export LAKE_REMOTE_EXEC=grpc://fake:1
export LAKE_REMOTE_EXEC_CLIENT="$HERE/../remoteExec/fake_lean_remote.py"
export LAKE_REMOTE_EXEC_TOOLCHAIN=sha256:0000000000000000000000000000000000000000000000000000000000000001
export LAKE_REMOTE_EXEC_SYSROOT="$(lean --print-prefix)"
export LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true LAKE_CACHE_DIR="$W/cache"
export FAKE_CAS="$W/cas" FAKE_LOG="$W/fake.log" FAKE_INPUT_BARRIER="$W/input"
# The service reads B after Lake hashed A. Neither the trace, the cache mapping nor -o may
# record B as A's output. The barrier orders the edit before the fake reads any input.
"$LAKE" -d "$W/race" build P -o "$W/outputs.jsonl" > "$W/build.log" 2>&1 &
pid=$!
for _ in $(seq 1 300); do [ -e "$W/input.ready" ] && break; kill -0 "$pid"; sleep 0.1; done
test_exp -e "$W/input.ready"
printf 'def p : Nat := 2\n' > "$W/race/P.lean"
touch "$W/input.go"
if wait "$pid"; then rc=0; else rc=$?; fi
cat "$W/build.log"
test_exp "$rc" = 1
match_text 'source file was modified during the build' "$W/build.log"
test_exp ! -e "$W/race/.lake/build/lib/lean/P.olean"
test_exp ! -e "$W/race/.lake/build/lib/lean/P.trace"
python3 - "$W" <<'PY'
import json, pathlib, sys
w = pathlib.Path(sys.argv[1])
assert not list((w / 'cache' / 'outputs').rglob('*.json')), 'stale cache mapping survived'
out = w / 'outputs.jsonl'
if out.exists():
    rows = [json.loads(x) for x in out.read_text().splitlines() if x.strip()]
    assert not rows or isinstance(rows[0], str), f'missing export schema header: {rows}'
    entries = rows[1:] if rows else []
    assert len(entries) == 0, f'stale -o export entries survived: {entries}'
print('source race: no stale trace, local mapping or -o export')
PY
