#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A module whose source and options are unchanged but whose imports changed is a kept candidate:
# with `LAKE_KEPT_CHECKER` set, Lake asks that checker (here `stub.sh`) whether the module's existing
# `.olean` holds against its current imports, and on a yes records the module as up to date
# without compiling it. `LAKE_KEPT_EXCLUDE` makes Lake decide the modules it lists as if nothing
# had been kept for them.

STUB="$PWD/stub.sh"
mkdir -p work && cd work
export LAKE_ARTIFACT_CACHE=false
# Without the usage cutoff: with it on, the cutoff skips a module whose imports changed only in what
# it never used before any kept-module check is asked
export LAKE_USAGE_CUTOFF=false
unset LAKE_KEPT_CHECKER LAKE_KEPT_EXCLUDE LAKE_KEPT_CHECKER_TIMEOUT STUB_MODE STUB_VERDICTS

OUT=.lake/build/lib/lean/P
# mkp DIR [LIB_CONFIG] -- package `p`: `P.A` defines `A.v` (see `seta`) and `A.w := 0`; `P.B`
# imports `P.A` and uses only `A.w`; `P.C` imports `P.B`; `P.D`, `P.E` and `P.F` import `P.A`
mkp() {
  mkdir -p "$1/P"
  printf 'name = "p"\n\n[leanOptions]\nmaxRecDepth = 700\nmaxHeartbeats = 300000\n\n[[lean_lib]]\nname = "P"\n%s' \
    "${2:-}" > "$1/lakefile.toml"
  printf 'import P.C\nimport P.D\nimport P.E\nimport P.F\n' > "$1/P.lean"
  printf 'import P.A\ntheorem B.ok : A.w = 0 := rfl\ndef B.u : Nat := A.w\n' > "$1/P/B.lean"
  printf 'import P.B\ntheorem C.ok : B.u = 0 := rfl\n' > "$1/P/C.lean"
  for m in D E F; do printf 'import P.A\ntheorem %s.ok : A.w = 0 := rfl\n' "$m" > "$1/P/$m.lean"; done
  seta "$1" 1
}
# seta DIR V -- replace `P/A.lean` (a new file, as a checkout writes it) with `A.v := V`
seta() { rm -f "$1/P/A.lean"; printf 'def A.v : Nat := %s\ndef A.w : Nat := 0\n' "$2" > "$1/P/A.lean"; }
# dephash TRACE -- the input hash recorded in a trace file
dephash() { grep -oE '"depHash": *"[0-9a-f]{16}"' "$1" | grep -oE '[0-9a-f]{16}'; }
# mapping DIR MOD -- the cache's input-to-output mapping for `P.MOD`'s current input in tree DIR
mapping() { find "$LAKE_CACHE_DIR/outputs" -name "$(dephash "$1/$OUT/$2.trace").json"; }
# spawns LOG -- how many times the stub started
spawns() { wc -l < "$1.spawns" | tr -d ' '; }

# Accepted: the candidates are not compiled, the `.olean` stays, the trace marks it kept, and a
# `--no-build` build then has nothing to do
mkp t1
test_run -d t1 build P
seta t1 2
test_cmd cp "t1/$OUT/B.olean" b1.olean
export STUB_LOG="$PWD/t1.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d t1 build P
match_text 'Checked P.C' produced.out
match_text 'Built P.A' produced.out
no_match_text 'Built P.B' produced.out
no_match_text 'Built P.C' produced.out
test_cmd cmp b1.olean "t1/$OUT/B.olean"
test_cmd grep -qx P.B t1.log
test_cmd_fails grep -qx P.A t1.log
test_cmd grep -q '"kf"' "t1/$OUT/B.trace"
test_run -d t1 build P --no-build

# The request names the module, its `.olean` and source by absolute path, and its setup: the
# non-toolchain import closure and the module's options
grep -F '"module":"P.B"' t1.log.json > b1.req
test_cmd grep -qE '"olean":"/[^"]*/t1/\.lake/build/lib/lean/P/B\.olean"' b1.req
test_cmd grep -qE '"src":"/[^"]*/t1/P/B\.lean"' b1.req
test_cmd grep -qF '"P.A"' b1.req
test_cmd_fails grep -qF '"P.C"' b1.req
test_cmd_fails grep -qF '"Init"' b1.req
test_cmd grep -qF '"maxRecDepth":700' b1.req
test_cmd grep -qF '"maxHeartbeats":300000' b1.req

# The checker gets the toolchain's sysroot as `LEAN_SYSROOT`, also when Lake runs without one in its environment
# (the test itself runs under `lake env`, which sets it) and without `lean` on PATH
mkp t1s
test_run -d t1s build P
seta t1s 2
SYSROOT=$("$LAKE" -d t1s env printenv LEAN_SYSROOT)
test_exp -n "$SYSROOT"
export STUB_LOG="$PWD/t1s.log"
env -u LEAN_SYSROOT PATH=/usr/bin:/bin LAKE_KEPT_CHECKER="$STUB" "$(command -v "$LAKE")" -d t1s build P > t1s.out 2>&1
test_cmd grep -q 'Checked P.B' t1s.out
test_exp "$(sort -u t1s.log.sysroot)" = "$SYSROOT"

# Rejected: compiled, and not marked kept
mkp t2
test_run -d t2 build P
seta t2 2
printf 'P.B fail\n' > t2.verdicts
export STUB_LOG="$PWD/t2.log"
LAKE_KEPT_CHECKER="$STUB" STUB_VERDICTS="$PWD/t2.verdicts" test_out 'Built P.B' -d t2 build P
test_cmd grep -qx P.B t2.log
test_cmd_fails grep -q '"kf"' "t2/$OUT/B.trace"

# An edited source is never a candidate
mkp t3
test_run -d t3 build P
seta t3 2
rm -f t3/P/B.lean
printf 'import P.A\ntheorem B.ok : A.w = 0 := rfl\ndef B.u : Nat := A.w\ndef B.x : Nat := 1\n' > t3/P/B.lean
export STUB_LOG="$PWD/t3.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Built P.B' -d t3 build P
test_cmd_fails grep -qx P.B t3.log

# Changed options make no module a candidate
mkp t4
test_run -d t4 build P
sed_i 's/maxRecDepth = 700/maxRecDepth = 701/' t4/lakefile.toml
export STUB_LOG="$PWD/t4.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Built P.B' -d t4 build P
test_exp ! -e t4.log

# The checker exits on its first request: the requests it had are compiled, and a new checker
# answers the next ones (`P.C` is asked only once `P.B` is done)
mkp t9
test_run -d t9 build P
seta t9 2
export STUB_LOG="$PWD/t9.log"
LAKE_KEPT_CHECKER="$STUB" STUB_MODE=die-once test_out 'Checked P.C' -d t9 build P
match_pat 'Built P\.[BDEF]' produced.out
test_exp "$(spawns t9.log)" = 2

# A checker that always exits is started at most four times, and every candidate is compiled
mkp t9b
test_run -d t9b build P
seta t9b 2
export STUB_LOG="$PWD/t9b.log"
LAKE_KEPT_CHECKER="$STUB" STUB_MODE=die test_out 'Built P.C' -d t9b build P
for m in B D E F; do match_text "Built P.$m" produced.out; done
no_match_text 'Checked' produced.out
test_exp "$(spawns t9b.log)" -le 4

# A checker that stops answering is killed after `LAKE_KEPT_CHECKER_TIMEOUT` seconds without a
# reply: its requests are compiled and a new checker answers the next ones
mkp t10
test_run -d t10 build P
seta t10 2
export STUB_LOG="$PWD/t10.log"
start=$(date +%s)
LAKE_KEPT_CHECKER="$STUB" LAKE_KEPT_CHECKER_TIMEOUT=3 STUB_MODE=hang-once \
  test_out 'Checked P.C' -d t10 build P
match_pat 'Built P\.[BDEF]' produced.out
test_exp $(( $(date +%s) - start )) -lt 120
test_exp "$(spawns t10.log)" = 2

# The `.olean` the checker read must be the one the trace describes: a reply with another hash is
# a reject
mkp t11
test_run -d t11 build P
seta t11 2
export STUB_LOG="$PWD/t11.log"
LAKE_KEPT_CHECKER="$STUB" STUB_MODE=wronghash test_out 'Built P.B' -d t11 build P
test_cmd grep -qx P.B t11.log

# ... and Lake hashes the outputs itself: an `.olean` changed after its build, whose `.hash` file
# still names the old contents, is not a candidate
mkp t11b
test_run -d t11b build P
seta t11b 2
printf 'x' >> "t11b/$OUT/B.olean"
export STUB_LOG="$PWD/t11b.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Built P.B' -d t11b build P
test_cmd_fails grep -qx P.B t11b.log

# Modules of a `precompileModules` library are linked into a shared library and never sent
mkp t13 $'precompileModules = true\n'
test_run -d t13 build P
seta t13 2
export STUB_LOG="$PWD/t13.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Built P.B' -d t13 build P
test_exp ! -e t13.log

# `--no-build` never asks the checker
mkp t14
test_run -d t14 build P
seta t14 2
test_run -d t14 build P.A
export STUB_LOG="$PWD/t14.log"
LAKE_KEPT_CHECKER="$STUB" test_status 3 -d t14 build P --no-build
test_exp ! -e t14.log

# The trace written for an accepted module is for the source as Lake read it: a source rewritten
# (under its old modification time) while the check is outstanding is compiled by the next build
mkp t15
test_run -d t15 build P
seta t15 2
export STUB_LOG="$PWD/t15.log" STUB_GO="$PWD/t15.go"
( if LAKE_KEPT_CHECKER="$STUB" STUB_MODE=wait-go "$LAKE" -d t15 build P > t15.out 2>&1
  then echo 0; else echo $?; fi > t15.rc ) &
for _ in $(seq 300); do grep -qx P.B t15.log 2>/dev/null && break; sleep 0.1; done
test_cmd grep -qx P.B t15.log
test_cmd touch -r t15/P/B.lean t15.mtime
rm -f t15/P/B.lean
printf 'import P.A\ntheorem B.ok : A.w = 0 := rfl\ndef B.u : Nat := A.w\ndef B.y : Nat := 2\n' > t15/P/B.lean
test_cmd touch -r t15.mtime t15/P/B.lean
test_cmd touch "$STUB_GO"
wait
test_cmd cat t15.out
test_exp "$(cat t15.rc)" = 0
test_out 'Built P.B' -d t15 build P

# With the artifact cache
export LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true

# An accepted module's outputs are published for its new input, marked kept, and a second
# checkout restores them with the marks
export LAKE_CACHE_DIR="$PWD/cache6"
mkp t6
test_run -d t6 build P
seta t6 2
export STUB_LOG="$PWD/t6.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d t6 build P
MAP=$(mapping t6 B)
test_exp -n "$MAP"
test_cmd grep -qF "$(cat "t6/$OUT/B.olean.hash")" "$MAP"
test_cmd grep -q '"kf"' "$MAP"
mkp t6b
seta t6b 2
test_not_out 'Built P.B' -d t6b build P
test_cmd cmp "t6/$OUT/B.olean" "t6b/$OUT/B.olean"
test_cmd grep -q '"kf"' "t6b/$OUT/B.trace"
test_cmd grep -q '"localHash"' "t6b/$OUT/B.trace"

# `LAKE_KEPT_EXCLUDE` (no checker needed): a kept module it lists is compiled although its trace
# is current, and its compiled outputs replace the published ones
printf 'P.B\n' > exclude7
LAKE_KEPT_EXCLUDE="$PWD/exclude7" test_out 'Built P.B' -d t6 build P
test_cmd_fails grep -q '"kf"' "t6/$OUT/B.trace"
test_cmd_fails grep -q '"kf"' "$(mapping t6 B)"
mkp t7
seta t7 2
test_not_out 'Built P.B' -d t7 build P
test_cmd_fails grep -q '"kf"' "t7/$OUT/B.trace"

# A tree that restored kept outputs takes the compiled ones once they are published for the same
# input (`t6b` restored the kept `P.B` above)
test_run -d t6b build P
test_cmd_fails grep -q '"kf"' "t6b/$OUT/B.trace"

# The archive (`.ltar`) of an accepted module carries its marks: a tree that can restore the module
# only from the archive publishes it again as kept
export LAKE_CACHE_DIR="$PWD/cache12"
mkp t12
test_run -d t12 build P
seta t12 2
export STUB_LOG="$PWD/t12.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d t12 build P
test_run -d t12 build P.B -o "$PWD/o12.jsonl"
test_cmd grep -qF "$(dephash "t12/$OUT/B.trace")" o12.jsonl
MAP=$(mapping t12 B)
sed_i "s/\"o\":/\"l\": \"$(cat t12/.lake/build/ir/P/B.ltar.hash).ltar\", \"o\":/" "$MAP"
test_cmd cat "$MAP"
test_cmd rm -f "$LAKE_CACHE_DIR/artifacts/$(cat "t12/$OUT/B.olean.hash").olean"
mkp t12b
seta t12b 2
test_out 'Unpacked P.B' -d t12b build P.B
test_cmd grep -q '"kf"' "t12b/$OUT/B.trace"
test_cmd grep -q '"kf"' "$(mapping t12b B)"

# A module restored from the cache is a candidate the next time its imports change
export LAKE_CACHE_DIR="$PWD/cache17"
mkp t17a
test_run -d t17a build P
mkp t17
test_not_out 'Built P.B' -d t17 build P
seta t17 2
export STUB_LOG="$PWD/t17.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d t17 build P
