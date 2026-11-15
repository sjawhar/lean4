#!/usr/bin/env bash
source ../common.sh
./clean.sh
HERE=$(pwd)
W="$HERE/work"
mkdir -p "$W/seed/P"
printf 'name = "kept"\n[[lean_lib]]\nname = "P"\n' > "$W/seed/lakefile.toml"
printf 'def A.w : Nat := 1 - 1\n' > "$W/seed/P/A.lean"
printf 'import P.A\ntheorem B.ok : A.w = 0 := rfl\n' > "$W/seed/P/B.lean"
export LAKE_USAGE_CUTOFF=1 LAKE_ARTIFACT_CACHE=false
export LAKE_CACHE_DIR="$W/cache"
test_run -d "$W/seed" build P.B
rm "$W/seed/P/A.lean"
printf 'def A.w : Nat := 2 - 2\n' > "$W/seed/P/A.lean"
LAKE_KEPT_CHECKER="$HERE/../keptCheck/stub.sh" STUB_LOG="$W/checker.log" \
  test_out 'Checked P.B' -d "$W/seed" build P.B
test_cmd grep -q '"kf"' "$W/seed/.lake/build/lib/lean/P/B.trace"
cp -r "$W/seed" "$W/replay"
cp -r "$W/seed" "$W/excluded"
cp -r "$W/seed" "$W/replaced"
cp -r "$W/seed" "$W/replacement-no-build"
cp -r "$W/seed" "$W/excluded-no-build"
mkdir -p "$W/compiled"
cp "$W/seed/lakefile.toml" "$W/compiled/"
cp -r "$W/seed/P" "$W/compiled/"
LAKE_ARTIFACT_CACHE=true test_run -d "$W/compiled" build P.B
export LAKE_REMOTE_EXEC=grpc://fake:1 LAKE_REMOTE_EXEC_FALLBACK=fail
export LAKE_REMOTE_EXEC_CLIENT="$HERE/../remoteExec/fake_lean_remote.py"
export LAKE_REMOTE_EXEC_TOOLCHAIN=sha256:0000000000000000000000000000000000000000000000000000000000000001
export LAKE_REMOTE_EXEC_SYSROOT="$(lean --print-prefix)" FAKE_CAS="$W/cas"
failures=0
# A service-mode replay must export the same kept lineage as the accepted trace, with no run.
FAKE_LOG="$W/replay.log" test_run -d "$W/replay" build P.B -o "$W/replay.jsonl"
python3 - "$W" <<'PY' || failures=$((failures+1))
import json, pathlib, sys
w = pathlib.Path(sys.argv[1])
t = json.loads((w/'replay/.lake/build/lib/lean/P/B.trace').read_text())
rows = [json.loads(x) for x in (w/'replay.jsonl').read_text().splitlines() if x.strip()]
entry = next(v for h,v in rows[1:] if h == t['depHash'])
assert isinstance(entry, dict) and entry.get('kf') == t['outputs']['kf'], entry
requests = [json.loads(x) for x in (w/'replay.log').read_text().splitlines() if x.strip()]
assert not any(x.get('method') in ('run','materialize') for x in requests)
print('kept replay: export lineage preserved, build-action requests=0')
PY
# Exclusion under --no-build must report that B needs a build, without changing kept outputs.
printf 'P.B\n' > "$W/exclude"
cp "$W/excluded/.lake/build/lib/lean/P/B.olean" "$W/kept.olean"
cp "$W/seed/.lake/build/lib/lean/P/B.trace" "$W/kept.trace"
rc=0
LAKE_KEPT_EXCLUDE="$W/exclude" FAKE_UNREACHABLE=1 FAKE_LOG="$W/no-build.log" \
  "$LAKE" -d "$W/excluded" build P.B --no-build > "$W/no-build.out" 2>&1 || rc=$?
cat "$W/no-build.out"
if [ "$rc" != 3 ]; then echo "excluded kept module --no-build: expected 3, got $rc"; failures=$((failures+1)); fi
test_cmd cmp "$W/kept.olean" "$W/excluded/.lake/build/lib/lean/P/B.olean"
test_cmd grep -q '"kf"' "$W/excluded/.lake/build/lib/lean/P/B.trace"
# A readable compiled mapping must not replace set-aside outputs under --no-build either.
for policy in replacement excluded; do
  env_args=()
  if [ "$policy" = excluded ]; then env_args+=("LAKE_KEPT_EXCLUDE=$W/exclude"); fi
  rc=0
  env "${env_args[@]}" LAKE_ARTIFACT_CACHE=true FAKE_LOG="$W/$policy-no-build.log" \
    "$LAKE" -d "$W/$policy-no-build" build P.B --no-build > "$W/$policy-no-build.out" 2>&1 || rc=$?
  cat "$W/$policy-no-build.out"
  test_exp "$rc" = 3
  test_cmd cmp "$W/kept.olean" "$W/$policy-no-build/.lake/build/lib/lean/P/B.olean"
  test_cmd cmp "$W/kept.trace" "$W/$policy-no-build/.lake/build/lib/lean/P/B.trace"
  python3 - "$W/$policy-no-build.log" <<'PY'
import json, sys
rows = [json.loads(line) for line in open(sys.argv[1]) if line.strip()]
assert [row['method'] for row in rows if 'method' in row] == ['hello'], rows
PY
done
# A real excluded build must execute B and drop its kept marker.
LAKE_KEPT_EXCLUDE="$W/exclude" FAKE_LOG="$W/excluded.log" test_run -d "$W/excluded" build P.B
python3 - "$W" <<'PY' || failures=$((failures+1))
import json, pathlib, sys
w = pathlib.Path(sys.argv[1])
requests = [json.loads(x) for x in (w/'excluded.log').read_text().splitlines() if x.strip()]
assert [x['params']['target'] for x in requests if x.get('method') == 'run'] == ['P.B'], requests
t = json.loads((w/'excluded/.lake/build/lib/lean/P/B.trace').read_text())
assert 'kf' not in t['outputs'], t
print('excluded kept module: B executed once and no kept marker remains')
PY
# A newer compiled mapping replaces an existing kept trace before any service-mode replay.
LAKE_ARTIFACT_CACHE=true FAKE_LOG="$W/replaced.log" test_run -d "$W/replaced" build P.B
python3 - "$W" <<'PY' || failures=$((failures+1))
import json, pathlib, sys
w = pathlib.Path(sys.argv[1])
t = json.loads((w/'replaced/.lake/build/lib/lean/P/B.trace').read_text())
assert 'kf' not in t['outputs'], t
requests = [json.loads(x) for x in (w/'replaced.log').read_text().splitlines() if x.strip()]
assert not any(x.get('method') in ('run','materialize') for x in requests), requests
print('compiled replacement: kept trace replaced locally, build-action requests=0')
PY
test_exp "$failures" = 0
