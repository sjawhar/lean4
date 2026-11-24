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
export LAKE_REMOTE_EXEC_LOG="$W/race.jsonl"
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
# Row L29: the raced module's one line is `error` with code `source-changed`
test_cmd python3 "$HERE/../remoteExec/lines_check.py" "$W/race.jsonl" --modules P \
  --expect 'P:result=error,code=source-changed'

# Row L29b: the run of a promotion reads the source after Lake hashed it. X, compiled here with service mode off, has
# no service record, so Y's request promotes it (X's own run on the service); the barrier holds that run, the only one
# before Y's, while the test rewrites X.lean. The promotion writes nothing: Y fails with the message, its line `error`
# with the code of a failed promotion (`request`); X's files, its trace and the Lake cache are those of X's first
# build, and so is the -o mapping (X's input hash to the archive of its old outputs); the next build compiles the new
# source.
P="$W/promo"
mkdir -p "$P"
printf 'name = "promo"\n[[lean_lib]]\nname = "X"\n[[lean_lib]]\nname = "Y"\n' > "$P/lakefile.toml"
printf 'def x : Nat := 1\n' > "$P/X.lean"
printf 'import X\n\ndef y : Nat := x\n' > "$P/Y.lean"
printf 'import X\n\n#eval IO.println s!"x is {x}"\n' > "$P/T.lean"
export LAKE_CACHE_DIR="$W/promo-cache" FAKE_CAS="$W/promo-cas" FAKE_LOG="$W/promo-fake.log"
export FAKE_INPUT_BARRIER="$W/promo-input"
(unset LAKE_REMOTE_EXEC; test_run -d "$P" build X -o "$W/promo-local.jsonl")
# snap FILE: the SHA-256 of each of X's files and of each file of the Lake cache
snap() {
  { (cd "$P/.lake/build" && find . -type f -name 'X.*' | sort | xargs sha256sum)
    (cd "$LAKE_CACHE_DIR" && find outputs artifacts -type f | sort | xargs sha256sum); } > "$1"
}
snap "$W/promo-before.sums"
LAKE_REMOTE_EXEC_LOG="$W/promo.jsonl" "$LAKE" -d "$P" build Y -o "$W/promo-raced.jsonl" > "$W/promo.log" 2>&1 &
pid=$!
for _ in $(seq 1 300); do [ -e "$W/promo-input.ready" ] && break; kill -0 "$pid"; sleep 0.1; done
test_exp -e "$W/promo-input.ready"
printf 'def x : Nat := 2\n' > "$P/X.lean"
touch "$W/promo-input.go"
if wait "$pid"; then rc=0; else rc=$?; fi
cat "$W/promo.log"
test_exp "$rc" = 1
match_text 'promoting X: X.lean: source file was modified during the build' "$W/promo.log"
test_cmd python3 "$HERE/../remoteExec/lines_check.py" "$W/promo.jsonl" --modules X,Y \
  --expect 'X:result=local-cache' --expect 'Y:result=error,code=request'
snap "$W/promo-after.sums"
test_cmd diff "$W/promo-before.sums" "$W/promo-after.sums"
test_cmd cmp "$W/promo-local.jsonl" "$W/promo-raced.jsonl"
unset FAKE_INPUT_BARRIER
LAKE_REMOTE_EXEC_LOG="$W/promo-next.jsonl" test_run -d "$P" build Y
test_cmd python3 "$HERE/../remoteExec/lines_check.py" "$W/promo-next.jsonl" --modules X,Y \
  --expect 'X|Y:result=executed|cached'
(unset LAKE_REMOTE_EXEC; test_cmd_out 'x is 2' "$LAKE" -d "$P" env lean "$P/T.lean")
