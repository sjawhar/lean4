#!/usr/bin/env bash
source ../common.sh
./clean.sh
HERE=$(pwd)
W="$HERE/work"
for t in seed writable readonly; do
  mkdir -p "$W/$t"
  printf 'name = "archive"\n[[lean_lib]]\nname = "P"\n' > "$W/$t/lakefile.toml"
  printf 'def p : Nat := 7\n' > "$W/$t/P.lean"
done
export LAKE_CACHE_DIR="$W/cache" LAKE_RESTORE_ARTIFACTS=true
LAKE_ARTIFACT_CACHE=true test_run -d "$W/seed" build P -o "$W/outputs.jsonl"
test_run -d "$W/seed" cache add "$W/outputs.jsonl"
find "$W/cache/artifacts" -type f ! -name '*.ltar' -delete
test_exp "$(find "$W/cache/artifacts" -type f -name '*.ltar' | wc -l)" -gt 0
export LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_REMOTE_EXEC_FALLBACK=fail
export LAKE_REMOTE_EXEC_CLIENT="$HERE/../remoteExec/fake_lean_remote.py"
export LAKE_REMOTE_EXEC_TOOLCHAIN=sha256:0000000000000000000000000000000000000000000000000000000000000001
export LAKE_REMOTE_EXEC_SYSROOT="$(lean --print-prefix)" FAKE_UNREACHABLE=1
export FAKE_CAS="$W/cas"
for t in readonly writable; do
  # Both readers start with archive-only mappings and no separate output entries.
  find "$W/cache/artifacts" -type f ! -name '*.ltar' -delete
  if [ "$t" = writable ]; then export LAKE_ARTIFACT_CACHE=true; else unset LAKE_ARTIFACT_CACHE; fi
  FAKE_LOG="$W/$t.log" test_run -d "$W/$t" build P
  for f in lib/lean/P.olean lib/lean/P.ilean ir/P.c; do
    test_cmd cmp "$W/seed/.lake/build/$f" "$W/$t/.lake/build/$f"
  done
  python3 - "$W/$t.log" <<'PY'
import json, sys
rows = [json.loads(x) for x in open(sys.argv[1]) if x.strip()]
methods = [x['method'] for x in rows if 'method' in x]
assert methods == ['hello'], methods
print('archive-only restore: hello=1, build-action requests=0')
PY
done
