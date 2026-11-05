#!/usr/bin/env bash
source ../common.sh
./clean.sh
HERE=$(pwd)
W="$HERE/work"
mkdir -p "$W/seed/T" "$W/readonly/T"
printf 'name = "sidecars"\n[[lean_lib]]\nname = "T"\n' > "$W/seed/lakefile.toml"
printf '/-! A dependency for service-cache sidecar tests. -/\ndef m : Nat := 1\n' > "$W/seed/T/M.lean"
printf 'import T.M\n/-! A cached user of the dependency. -/\ndef d : Nat := m + 1\n' > "$W/seed/T/D.lean"
cp "$W/seed/lakefile.toml" "$W/readonly/"
cp "$W/seed/T/"*.lean "$W/readonly/T/"
export LAKE_CACHE_DIR="$W/cache" LAKE_USAGE_CUTOFF=1
LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true test_run -d "$W/seed" build T.D
B="$W/seed/.lake/build/lib/lean/T"
cp "$B/D.olean" "$W/D.olean"
MAP=$(python3 - "$B/D.trace" "$LAKE_CACHE_DIR" <<'PY'
import json, pathlib, sys
trace = json.loads(pathlib.Path(sys.argv[1]).read_text())
print(pathlib.Path(sys.argv[2])/'outputs/sidecars'/f"{trace['depHash']}.json")
PY
)
test_exp -f "$MAP"
cp "$MAP" "$W/mapping-before.json"
python3 - "$MAP" <<'PY'
import json, sys
mapping = json.load(open(sys.argv[1]))['data']
assert all(mapping.get(key) for key in ('u', 'v', 'k')), mapping
PY
export LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_REMOTE_EXEC_FALLBACK=fail
export LAKE_REMOTE_EXEC_CLIENT="$HERE/../remoteExec/fake_lean_remote.py"
export LAKE_REMOTE_EXEC_TOOLCHAIN=sha256:0000000000000000000000000000000000000000000000000000000000000001
export LAKE_REMOTE_EXEC_SYSROOT="$(lean --print-prefix)" FAKE_CAS="$W/cas"

# Force the trace-based cache path, whose trace omits the usage sidecar descriptors.
rm "$B/D.olean"
LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=false FAKE_LOG="$W/writable.log" \
  test_out '0 cached (0 from manifest), 0 executed, 0 local;' -d "$W/seed" build T.D
python3 - "$W/mapping-before.json" "$MAP" <<'PY'
import json, sys
before, after = [json.load(open(path))['data'] for path in sys.argv[1:]]
assert {key: after.get(key) for key in ('u', 'v', 'k')} == {key: before[key] for key in ('u', 'v', 'k')}, (before, after)
PY

# A read-only cache restores all artifacts to the tree even when restoreAllArtifacts is false.
env -u LAKE_ARTIFACT_CACHE LAKE_RESTORE_ARTIFACTS=false FAKE_LOG="$W/readonly.log" \
  "$LAKE" -d "$W/readonly" build T.D > "$W/readonly.out" 2>&1
cat "$W/readonly.out"
match_text '0 cached (0 from manifest), 0 executed, 0 local;' "$W/readonly.out"
for f in M.olean D.olean D.ilean; do
  test_exp -f "$W/readonly/.lake/build/lib/lean/T/$f"
done
test_cmd cmp "$W/D.olean" "$W/readonly/.lake/build/lib/lean/T/D.olean"
python3 - "$W/writable.log" "$W/readonly.log" <<'PY'
import json, sys
for path in sys.argv[1:]:
    rows = [json.loads(line) for line in open(path) if line.strip()]
    assert [row['method'] for row in rows if 'method' in row] == ['hello'], (path, rows)
PY

# The preserved mapping must still recover missing sidecars for the usage-cutoff decision.
rm -f "$B/D.usage" "$B/D.resolved" "$B/D.usekey"
printf '/-! A dependency for service-cache sidecar tests. -/\ndef m : Nat := 1\ndef unused : Nat := 2\n' > "$W/seed/T/M.lean"
unset LAKE_REMOTE_EXEC
LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true lake_out -d "$W/seed" build -v T.D
match_text 'Built T.M' produced.out
match_text 'Replayed T.D' produced.out
no_match_text 'Built T.D' produced.out
for ext in usage resolved usekey; do test_exp -f "$B/D.$ext"; done
