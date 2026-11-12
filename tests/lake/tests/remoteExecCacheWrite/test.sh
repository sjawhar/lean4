#!/usr/bin/env bash
source ../common.sh
./clean.sh
HERE=$(pwd)
W="$HERE/work"
mkdir -p "$W/tree"
printf 'name = "cachewrite"\n[[lean_lib]]\nname = "P"\n' > "$W/tree/lakefile.toml"
printf 'def p : Nat := 7\n' > "$W/tree/P.lean"
# A non-directory cache path fails deterministically even when the test runs as root. It must
# not turn a successfully materialized service result into a failed module.
printf 'not a directory\n' > "$W/cache"
export LAKE_CACHE_DIR="$W/cache" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
export LAKE_REMOTE_EXEC=grpc://fake:1
export LAKE_REMOTE_EXEC_CLIENT="$HERE/../remoteExec/fake_lean_remote.py"
export LAKE_REMOTE_EXEC_TOOLCHAIN=sha256:0000000000000000000000000000000000000000000000000000000000000001
export LAKE_REMOTE_EXEC_SYSROOT="$(lean --print-prefix)"
export FAKE_CAS="$W/cas" FAKE_LOG="$W/fake.log"
test_run -d "$W/tree" build P
test_exp -s "$W/tree/.lake/build/lib/lean/P.olean"
test_exp -s "$W/tree/.lake/build/lib/lean/P.trace"
test_cmd grep -Fx 'not a directory' "$W/cache"
python3 - "$W/fake.log" <<'PY'
import json, sys
rows = [json.loads(x) for x in open(sys.argv[1]) if x.strip()]
assert sum(x.get('method') == 'run' for x in rows) == 1, rows
assert sum(x.get('method') == 'materialize' for x in rows) == 1, rows
print('cache write error: successful service outputs retained')
PY
