#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A module whose source and options are unchanged but whose imports changed is a kept candidate
# when the usage cutoff (on by default) does not skip it and its records show the machinery it used
# while elaborating unchanged (`Module.usageVerdict`): with `LAKE_KEPT_CHECKER` set, Lake asks that
# checker (here `stub.sh`) whether the module's existing `.olean` holds against its current
# imports, and on a yes records the module as up to date without compiling it. `LAKE_KEPT_EXCLUDE`
# makes Lake decide the modules it lists as if nothing had been kept for them.

# The stub checker is a bash script, and the cases rely on POSIX process groups and signals
# (`setsid`, killing a checker's group, `kill -INT` to a group)
if [ "$OS" = Windows_NT ]; then
  echo "SKIPPED: not supported on Windows"
  exit 0
fi

STUB="$PWD/stub.sh"
mkdir -p work && cd work
export LAKE_ARTIFACT_CACHE=false
unset LAKE_KEPT_CHECKER LAKE_KEPT_EXCLUDE LAKE_KEPT_CHECKER_TIMEOUT STUB_MODE STUB_VERDICTS LAKE_USAGE_CUTOFF

OUT=.lake/build/lib/lean/P
# mkp DIR [LIB_CONFIG] -- package `p`: `P.A` defines `A.v` and `A.w`, which `seta` changes; `P.B`
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
# seta DIR V -- replace `P/A.lean` (a new file, as a checkout writes it) with `A.v := V` and
# `A.w := V - V`: `A.w` changes meaning but stays `0`, so its users re-check, and their proofs hold
seta() { rm -f "$1/P/A.lean"; printf 'def A.v : Nat := %s\ndef A.w : Nat := %s - %s\n' "$2" "$2" "$2" > "$1/P/A.lean"; }
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

# Every input of a module except its imports is part of its local inputs (`localTrace`): when one
# changes, no module is a candidate. The library's `needs` (an input file `P.B` reads with
# `include_str`): the module compiles (here red, as a fresh build is) and the checker is not asked.
# (The library's `extraDepTargets` build the same term: see the lakefile.lean target below. A TOML
# `[[input_file]]` named there makes no module stale, under any Lake.)
mkn() { # mkn DIR LIB_CONFIG -- package `p` with input file `foo` (data/foo.txt = one), `P.B` reading it
  mkdir -p "$1/P" "$1/data"
  printf 'name = "p"\n\n[[input_file]]\nname = "foo"\npath = "data/foo.txt"\ntext = true\n\n[[lean_lib]]\nname = "P"\n%s\n' \
    "$2" > "$1/lakefile.toml"
  printf 'def A.w : Nat := 0\n' > "$1/P/A.lean"
  printf 'import P.A\ndef B.s : String := include_str "../data/foo.txt"\ntheorem B.ok : B.s = "one" := rfl\n' > "$1/P/B.lean"
  printf 'import P.B\n' > "$1/P.lean"
  printf 'one' > "$1/data/foo.txt"
}
mkn t18 'needs = ["foo"]'
test_run -d t18 build P
printf 'two' > t18/data/foo.txt
export STUB_LOG="$PWD/t18.log"
LAKE_KEPT_CHECKER="$STUB" test_status_out 1 'Building P.B' -d t18 build P
test_exp ! -e t18.log
# ... its `extraDepTargets`, here a lakefile.lean `target` that returns that file
mkdir -p t18x/P t18x/data
printf 'import Lake\nopen System Lake DSL\n\npackage p\n\ntarget gen pkg : FilePath := do\n  inputTextFile (pkg.dir / "data" / "foo.txt")\n\nlean_lib P where\n  extraDepTargets := #[`gen]\n' \
  > t18x/lakefile.lean
printf 'def A.w : Nat := 0\n' > t18x/P/A.lean
printf 'import P.A\ndef B.s : String := include_str "../data/foo.txt"\ntheorem B.ok : B.s = "one" := rfl\n' > t18x/P/B.lean
printf 'import P.B\n' > t18x/P.lean
printf 'one' > t18x/data/foo.txt
test_run -d t18x build P
printf 'two' > t18x/data/foo.txt
export STUB_LOG="$PWD/t18x.log"
LAKE_KEPT_CHECKER="$STUB" test_status_out 1 'Building P.B' -d t18x build P
test_exp ! -e t18x.log
# ... and the package's `extern_lib`, which a library with `precompileImports` loads (its C source
# changes)
mkdir -p t18e/P
printf 'import Lake\nopen System Lake DSL\n\npackage p\n\nlean_lib P where\n  precompileImports := true\n\ntarget ffi.o pkg : FilePath := do\n  let oFile := pkg.buildDir / "c" / "ffi.o"\n  let srcJob ← inputTextFile <| pkg.dir / "ffi.c"\n  buildO oFile srcJob #["-I", (← getLeanIncludeDir).toString] #["-fPIC"] "cc" getLeanTrace\n\nextern_lib libleanffi pkg := do\n  let ffiO ← ffi.o.fetch\n  buildStaticLib (pkg.staticLibDir / nameToStaticLib "leanffi") #[ffiO]\n' \
  > t18e/lakefile.lean
printf 'def A.w : Nat := 0\n' > t18e/P/A.lean
printf 'import P.A\ntheorem B.ok : A.w = 0 := rfl\n' > t18e/P/B.lean
printf 'import P.B\n' > t18e/P.lean
printf '#include <stdint.h>\nuint32_t my_val(uint32_t x) { return x + 2; }\n' > t18e/ffi.c
test_run -d t18e build P
rm -f t18e/ffi.c; printf '#include <stdint.h>\nuint32_t my_val(uint32_t x) { return x + 3; }\n' > t18e/ffi.c
export STUB_LOG="$PWD/t18e.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Built P.B' -d t18e build P
test_exp ! -e t18e.log
# ... the module's `dynlibs` and `plugins` (the shared library of library `Q`, which changes; it is
# built first, so that the modules only load it)
for kind in dynlibs plugins; do
  mkp "t19$kind" "$kind = [\"Q:shared\"]"$'\n\n[[lean_lib]]\nname = "Q"\n'
  printf 'def Q.q : Nat := 1\n' > "t19$kind/Q.lean"
  test_run -d "t19$kind" build Q:shared
  test_run -d "t19$kind" build P
  rm -f "t19$kind/Q.lean"; printf 'def Q.q : Nat := 2\n' > "t19$kind/Q.lean"
  test_run -d "t19$kind" build Q:shared
  export STUB_LOG="$PWD/t19$kind.log"
  LAKE_KEPT_CHECKER="$STUB" test_out 'Built P.B' -d "t19$kind" build P
  test_exp ! -e "t19$kind.log"
done
# ... the module's `moreLeanArgs`
mkp t20 $'moreLeanArgs = ["-DmaxRecDepth=700"]\n'
test_run -d t20 build P
seta t20 2
sed_i 's/-DmaxRecDepth=700/-DmaxRecDepth=701/' t20/lakefile.toml
export STUB_LOG="$PWD/t20.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Built P.B' -d t20 build P
test_exp ! -e t20.log
# ... the package
mkp t21
test_run -d t21 build P
seta t21 2
sed_i 's/^name = "p"$/name = "q"/' t21/lakefile.toml
export STUB_LOG="$PWD/t21.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Built P.B' -d t21 build P
test_exp ! -e t21.log
# ... and the toolchain (as Lake identifies it: `LEAN_GITHASH`). The platform is the last part; it
# cannot change on one machine.
mkp t22
test_run -d t22 build P
seta t22 2
export STUB_LOG="$PWD/t22.log"
LEAN_GITHASH=0000000000000000000000000000000000000000 LAKE_KEPT_CHECKER="$STUB" test_out 'Built P.B' -d t22 build P
test_exp ! -e t22.log

# A `module` file is never a candidate
mkp t23
printf 'module\npublic def A.w : Nat := 0\n' > t23/P/A.lean
printf 'module\npublic import P.A\npublic theorem B.ok : A.w = A.w := rfl\n' > t23/P/B.lean
printf 'module\npublic import P.B\n' > t23/P.lean
test_run -d t23 build P
# (a new public declaration of `P.A`: a `module`'s importers see only its interface)
rm -f t23/P/A.lean
printf 'module\npublic def A.w : Nat := 0\npublic def A.x : Nat := 2\n' > t23/P/A.lean
export STUB_LOG="$PWD/t23.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Built P.B' -d t23 build P
test_exp ! -e t23.log

# Lake hashes every output it would keep: an `.ilean` or `.c` changed after its build, or an output
# that is missing, makes the module no candidate
for broken in 'printf x >> t24/$OUT/B.ilean' 'printf x >> t24/.lake/build/ir/P/B.c' 'rm t24/$OUT/B.ilean'; do
  rm -rf t24 t24.log; mkp t24
  test_run -d t24 build P
  seta t24 2
  eval "$broken"
  export STUB_LOG="$PWD/t24.log"
  LAKE_KEPT_CHECKER="$STUB" test_out 'Built P.B' -d t24 build P
  test_cmd_fails grep -qx P.B t24.log
done

# An accept goes through the same check of the module's outputs as a usage skip
# (`Module.keepOutputs?`): an output that changed while the checker checked the module (here its
# `.ilean`) makes it compile
mkp t54
test_run -d t54 build P
seta t54 2
export STUB_LOG="$PWD/t54.log"
LAKE_KEPT_CHECKER="$STUB" STUB_MODE=alter-ilean test_out 'Built P.B' -d t54 build P
match_text 'changed while the checker checked them' produced.out
test_cmd grep -qx P.B t54.log

# An accepted module replays its saved log (here a `sorry` warning), on the accept and after it
mkp t25
printf 'import P.A\ntheorem B.ok : A.w = 0 := rfl\ndef B.u : Nat := A.w\ntheorem B.s : True := sorry\n' > t25/P/B.lean
test_run -d t25 build P
seta t25 2
export STUB_LOG="$PWD/t25.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d t25 build P
match_text 'declaration uses `sorry`' produced.out
test_out 'declaration uses `sorry`' -d t25 build P

# An accept removes the module's `.ltar` (packed for the old trace) and rewrites its `.setup.json`
mkp t26
test_run -d t26 build P +P.B:ltar
test_exp -f t26/.lake/build/ir/P/B.ltar
test_cmd touch t26.mark
sleep 1
seta t26 2
export STUB_LOG="$PWD/t26.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d t26 build P
test_exp ! -e t26/.lake/build/ir/P/B.ltar
test_exp t26/.lake/build/ir/P/B.setup.json -nt t26.mark

# Without `LAKE_KEPT_CHECKER`, a stale module is compiled as it always was, and nothing is marked kept
mkp t27
test_run -d t27 build P
seta t27 2
test_out 'Built P.B' -d t27 build P
no_match_text 'Checked' produced.out
test_cmd_fails grep -rq '"kf"' "t27/$OUT"

# A checker that answers with malformed lines is killed each time: every candidate is compiled
mkp t28
test_run -d t28 build P
seta t28 2
export STUB_LOG="$PWD/t28.log"
LAKE_KEPT_CHECKER="$STUB" STUB_MODE=garbage test_out 'Built P.B' -d t28 build P
no_match_text 'Checked' produced.out
match_text 'malformed reply' produced.out
test_exp "$(spawns t28.log)" -le 4

# A checker that cannot be started rejects every candidate, saying why
mkp t29
test_run -d t29 build P
seta t29 2
LAKE_KEPT_CHECKER="$PWD/no-such-checker" test_out 'Built P.B' -d t29 build P
match_text 'could not start the checker' produced.out
match_text 'no checker left in this build after 4 start attempts' produced.out

# A reply to an id that was never asked, or answered already, breaks the protocol: the checker is
# killed, as for a malformed reply, and its candidates compile
mkp t30
test_run -d t30 build P
seta t30 2
export STUB_LOG="$PWD/t30.log"
LAKE_KEPT_CHECKER="$STUB" STUB_MODE=bogus-id test_out 'Built P.B' -d t30 build P
match_text 'which it was not asked or had already answered' produced.out
no_match_text 'Checked P.B' produced.out
# ... so a checker that stops reading and keeps sending such replies is not taken for a working one:
# the build finishes (the watchdog counts only replies to requests in flight as progress)
mkp t30c
test_run -d t30c build P
seta t30c 2
export STUB_LOG="$PWD/t30c.log"
LAKE_KEPT_CHECKER="$STUB" LAKE_KEPT_CHECKER_TIMEOUT=3 STUB_MODE=chatter-once \
  test_cmd_out 'Built P.B' timeout 60 "$LAKE" -d t30c build P

# `LAKE_KEPT_CHECKER_TIMEOUT` must be at least one second
mkp t31
LAKE_KEPT_CHECKER="$STUB" LAKE_KEPT_CHECKER_TIMEOUT=0 test_err 'at least 1 second' -d t31 build P

# A checker that stops reading while Lake writes requests larger than a pipe's buffer (here setups of
# over 64 KiB) is still killed after `LAKE_KEPT_CHECKER_TIMEOUT`: writes never block the watchdog
mkp t32
pad=$(head -c 70000 /dev/zero | tr '\0' x)
sed_i "s/^maxHeartbeats = 300000\$/maxHeartbeats = 300000\nweak.keptCheckPad = \"$pad\"/" t32/lakefile.toml
test_run -d t32 build P
seta t32 2
export STUB_LOG="$PWD/t32.log"
start=$(date +%s)
LAKE_KEPT_CHECKER="$STUB" LAKE_KEPT_CHECKER_TIMEOUT=3 STUB_MODE=hang-once \
  test_cmd_out 'Checked P.C' timeout 100 "$LAKE" -d t32 build P
test_exp $(( $(date +%s) - start )) -lt 60
test_cmd test "$(head -1 t32.log.json | wc -c)" -gt 65536
test_exp "$(spawns t32.log)" = 2

# A killed checker's own children are killed with it (they would hold its pipes open and keep Lake
# from finishing until they exit)
mkp t33
test_run -d t33 build P
seta t33 2
export STUB_LOG="$PWD/t33.log"
start=$(date +%s)
LAKE_KEPT_CHECKER="$STUB" LAKE_KEPT_CHECKER_TIMEOUT=3 STUB_MODE=fork-hang-once test_out 'Checked P.C' -d t33 build P
test_exp $(( $(date +%s) - start )) -lt 40

# `LAKE_KEPT_EXCLUDE` applies to every build mode: with `--old`, an excluded kept module is
# compiled (its kept outputs are removed with its trace) ...
mkp t34
test_run -d t34 build P
seta t34 2
export STUB_LOG="$PWD/t34.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d t34 build P
printf 'P.B\n' > exclude34
LAKE_KEPT_EXCLUDE="$PWD/exclude34" test_out 'Built P.B' -d t34 build P --old
test_cmd_fails grep -q '"kf"' "t34/$OUT/B.trace"
# ... with `--old --no-build`, an excluded kept module needs a build and nothing changes ...
mkp t34n
test_run -d t34n build P
seta t34n 2
export STUB_LOG="$PWD/t34n.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d t34n build P
test_cmd cp "t34n/$OUT/B.olean" b34n.olean
printf 'P.B\n' > exclude34n
LAKE_KEPT_EXCLUDE="$PWD/exclude34n" test_status 3 -d t34n build P --old --no-build
test_cmd cmp b34n.olean "t34n/$OUT/B.olean"
test_cmd grep -q '"kf"' "t34n/$OUT/B.trace"
# ... a `--no-build` build needs a build for it (and changes no output) ...
mkp t35
test_run -d t35 build P
seta t35 2
export STUB_LOG="$PWD/t35.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d t35 build P
printf 'P.B\n' > exclude35
LAKE_KEPT_EXCLUDE="$PWD/exclude35" test_status 3 -d t35 build P --no-build
test_cmd grep -q '"kf"' "t35/$OUT/B.trace"
# ... and so does `lake shake`'s check that the oleans are current
sed_i 's/^name = "p"$/name = "p"\ndefaultTargets = ["P"]/' t35/lakefile.toml
LAKE_KEPT_EXCLUDE="$PWD/exclude35" test_err 'out of date oleans' -d t35 shake
# Invalid kept-module settings fail `lake shake` with their own error, as they fail the build
LAKE_KEPT_CHECKER="$STUB" LAKE_KEPT_CHECKER_TIMEOUT=0 test_err 'at least 1 second' -d t35 shake
LAKE_KEPT_EXCLUDE="$PWD/no-such-exclude" test_err 'no-such-exclude' -d t35 shake

# The rule for kept modules on top of the usage cutoff (`Module.usageVerdict`). `P.B` also uses the
# tactic macro of `P.M` (machinery its elaboration used, which its usage record lists as `extra`)
mkp t40
printf 'macro "triv!" : tactic => `(tactic| trivial)\n' > t40/P/M.lean
printf 'import P.A\nimport P.M\ntheorem B.ok : A.w = 0 := rfl\ndef B.u : Nat := A.w\ntheorem B.t : True := by triv!\n' \
  > t40/P/B.lean
test_run -d t40 build P
test_cmd_out '[["P","M"],' cat "t40/$OUT/B.usage"
export STUB_LOG="$PWD/t40.log"
# The machinery `P.B` used changed: it compiles, and the checker is not asked
rm -f t40/P/M.lean; printf 'macro "triv!" : tactic => `(tactic| exact True.intro)\n' > t40/P/M.lean
LAKE_KEPT_CHECKER="$STUB" test_out 'Built P.B' -d t40 build P
match_text 'not asked: P.M, whose machinery it used, changed' produced.out
test_cmd_fails grep -qx P.B t40.log
# Nothing `P.B` used changed meaning: the cutoff skips it before any check (`-v` shows replays)
rm -f t40/P/A.lean; printf 'def A.v : Nat := 7\ndef A.w : Nat := 1 - 1\n' > t40/P/A.lean
LAKE_KEPT_CHECKER="$STUB" test_out 'Replayed P.B' -d t40 build -v P
test_cmd_fails grep -qx P.B t40.log
# A constant `P.B` used changed meaning, and its machinery did not: the checker re-checks it
seta t40 2
LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d t40 build P
test_cmd grep -qx P.B t40.log
test_cmd grep -q '"kept":true' "t40/$OUT/B.usekey"
# ... and `P.C`, which uses `B.u`, is not skipped on `P.B`'s old digests: after the accept they may
# be stale (here `B.u` now unfolds to another term), so it is re-checked too
no_match_text 'Replayed P.C' produced.out
test_cmd grep -qx P.C t40.log
# ... while `P.B`'s own next check still reads its marked key (bound to its `.usage` and `.olean`): a
# further meaning change re-checks it again, rather than compiling it for want of a key
seta t40 3
LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d t40 build P
no_match_text 'not asked' produced.out
# A checker without the usage cutoff is refused: its records decide which modules may be re-checked.
# `lake setup-file`, which the language server runs, says why too
LAKE_USAGE_CUTOFF=false LAKE_KEPT_CHECKER="$STUB" test_err 'needs the usage cutoff' -d t40 build P
LAKE_USAGE_CUTOFF=false LAKE_KEPT_CHECKER="$STUB" test_err 'needs the usage cutoff' -d t40 setup-file t40/P/C.lean

# Interrupting Lake (`SIGINT` to its process group, as a terminal's Ctrl-C does) while the checker is
# busy: the checker, in a session of its own, does not get the signal, but its standard input reaches
# its end when Lake dies, and it stops (as the stub does in `mute-once`); it never held the workspace
# build lock, so the next build does not wait
mkp t50
test_run -d t50 build P
seta t50 2
export STUB_LOG="$PWD/t50.log"
# Lake runs under a script (`bash -c`), as a caller's would: Lake dies by the signal, and so the
# script stops too rather than running on after it (`t50.after`)
set -m
LAKE_KEPT_CHECKER="$STUB" STUB_MODE=mute-once \
  bash -c '"$1" -d t50 build P > t50.out 2>&1; echo "Lake exited $?" > t50.after' t50 "$LAKE" &
script_pid=$!
set +m
# (the stub stops answering at its first request, whichever candidate that is)
for _ in $(seq 300); do [ -s t50.log ] && break; sleep 0.1; done
test_exp -s t50.log
test_cmd kill -INT -- "-$script_pid"
if wait "$script_pid"; then rc=0; else rc=$?; fi
test_exp "$rc" = 130
test_exp ! -e t50.after
stub_pid=$(head -1 t50.log.pids)
for _ in $(seq 50); do kill -0 "$stub_pid" 2>/dev/null || break; sleep 0.1; done
test_cmd_fails kill -0 "$stub_pid"
if timeout 30 "$LAKE" -d t50 build P --no-build > t50nb.out 2>&1; then rc=0; else rc=$?; fi
test_cmd cat t50nb.out
test_exp "$rc" = 3
test_cmd_fails grep -q 'waiting for another Lake process' t50nb.out
# ... and so with `timeout`, which sends `SIGTERM` to its own process group (Lake's, not the checker's)
mkp t51
test_run -d t51 build P
seta t51 2
export STUB_LOG="$PWD/t51.log"
if LAKE_KEPT_CHECKER="$STUB" STUB_MODE=mute-once timeout 5 "$LAKE" -d t51 build P > t51.out 2>&1; then
  rc=0; else rc=$?; fi
test_exp "$rc" = 124
stub_pid=$(head -1 t51.log.pids)
for _ in $(seq 50); do kill -0 "$stub_pid" 2>/dev/null || break; sleep 0.1; done
test_cmd_fails kill -0 "$stub_pid"
if timeout 30 "$LAKE" -d t51 build P --no-build > t51nb.out 2>&1; then rc=0; else rc=$?; fi
test_exp "$rc" = 3
test_cmd_fails grep -q 'waiting for another Lake process' t51nb.out

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
# An excluded module is not restored from a kept archive either: it is compiled
test_cmd rm -f "$LAKE_CACHE_DIR/artifacts/$(cat "t12/$OUT/B.olean.hash").olean"
mkp t12c
seta t12c 2
printf 'P.B\n' > exclude12c
LAKE_KEPT_EXCLUDE="$PWD/exclude12c" test_out 'Built P.B' -d t12c build P.B
test_cmd_fails grep -q '"kf"' "t12c/$OUT/B.trace"

# A module restored from the cache is a candidate the next time its imports change
export LAKE_CACHE_DIR="$PWD/cache17"
mkp t17a
test_run -d t17a build P
mkp t17
test_not_out 'Built P.B' -d t17 build P
seta t17 2
export STUB_LOG="$PWD/t17.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d t17 build P

# The supersede rule, in every form Lake writes or installs a mapping: accepted outputs never
# replace a mapping, and compiled outputs always replace accepted ones. In each case `y` accepts
# `P.B` and `x` compiles the same input of `P.B` without a checker.
# A compile that lands while the check is outstanding keeps its mapping, and `y` then takes it
export LAKE_CACHE_DIR="$PWD/cache36"
mkp t36y
test_run -d t36y build P
seta t36y 2
mkp t36x
seta t36x 2
export STUB_LOG="$PWD/t36.log" STUB_GO="$PWD/t36.go"
( if LAKE_KEPT_CHECKER="$STUB" STUB_MODE=wait-go "$LAKE" -d t36y build P > t36y.out 2>&1
  then echo 0; else echo $?; fi > t36y.rc ) &
for _ in $(seq 300); do grep -qx P.B t36.log 2>/dev/null && break; sleep 0.1; done
test_cmd grep -qx P.B t36.log
test_out 'Built P.B' -d t36x build P
test_cmd touch "$STUB_GO"
wait
test_cmd cat t36y.out
test_exp "$(cat t36y.rc)" = 0
test_cmd grep -q 'Checked P.B' t36y.out
test_exp "$(dephash "t36x/$OUT/B.trace")" = "$(dephash "t36y/$OUT/B.trace")"
test_cmd_fails grep -q '"kf"' "$(mapping t36y B)"
test_run -d t36y build P
test_cmd_fails grep -q '"kf"' "t36y/$OUT/B.trace"
# A tree whose own compiled outputs for the input are current publishes them over accepted ones
# (`x` compiled them with another cache, whose artifacts this one then gets)
export LAKE_CACHE_DIR="$PWD/cache37"
mkp t37y
test_run -d t37y build P
seta t37y 2
export STUB_LOG="$PWD/t37.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d t37y build P
test_cmd grep -q '"kf"' "$(mapping t37y B)"
mkp t37x
seta t37x 2
LAKE_CACHE_DIR="$PWD/cache37x" test_out 'Built P.B' -d t37x build P
for f in "$PWD"/cache37x/artifacts/*; do
  [ -e "$LAKE_CACHE_DIR/artifacts/${f##*/}" ] || test_cmd cp "$f" "$LAKE_CACHE_DIR/artifacts/"
done
test_run -d t37x build P
test_cmd_fails grep -q '"kf"' "$(mapping t37y B)"
test_run -d t37y build P
test_cmd_fails grep -q '"kf"' "t37y/$OUT/B.trace"
# An archive-only mapping (the `-o` form) installed by `lake cache add`, or by `lake cache get`
# with the scope it came from: `y` sets its kept outputs aside and unpacks the archive
for install in add get; do
  export LAKE_CACHE_DIR="$PWD/cache38$install"
  mkp "t38$install"
  test_run -d "t38$install" build P
  seta "t38$install" 2
  export STUB_LOG="$PWD/t38$install.log"
  LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d "t38$install" build P
  mkp "t38${install}x"
  seta "t38${install}x" 2
  LAKE_CACHE_DIR="$PWD/cache38${install}x" test_run -d "t38${install}x" build P -o "$PWD/o38$install.jsonl"
  for a in "t38${install}x"/.lake/build/ir/*.ltar "t38${install}x"/.lake/build/ir/P/*.ltar; do
    test_cmd cp "$a" "$LAKE_CACHE_DIR/artifacts/$(cat "$a.hash").ltar"
  done
  if [ $install = add ]; then
    test_run -d "t38${install}x" cache add "$PWD/o38$install.jsonl"
  else
    test_run -d "t38${install}x" cache get "$PWD/o38$install.jsonl" --scope=p
  fi
  test_cmd grep -q '\.ltar"' "$(mapping "t38$install" B)"
  test_run -d "t38$install" build P
  test_cmd_fails grep -q '"kf"' "t38$install/$OUT/B.trace"
done

# The reverse: a kept module's `-o` entry carries its lineage (`{"l": …, "kf": …}`), so installed over
# a compiled mapping of the same input (`lake cache add`, which overwrites, or `lake cache get`) it
# leaves the mapping compiled
for install in add get; do
  export LAKE_CACHE_DIR="$PWD/cache41$install"
  mkp "t41${install}x"
  LAKE_CACHE_DIR="$PWD/cache41${install}x" test_run -d "t41${install}x" build P
  seta "t41${install}x" 2
  export STUB_LOG="$PWD/t41$install.log"
  LAKE_CACHE_DIR="$PWD/cache41${install}x" LAKE_KEPT_CHECKER="$STUB" \
    test_out 'Checked P.B' -d "t41${install}x" build P
  LAKE_CACHE_DIR="$PWD/cache41${install}x" test_run -d "t41${install}x" build P -o "$PWD/o41$install.jsonl"
  test_cmd grep -q '"kf"' "$PWD/o41$install.jsonl"
  mkp "t41$install"
  seta "t41$install" 2
  test_out 'Built P.B' -d "t41$install" build P
  test_exp "$(dephash "t41$install/$OUT/B.trace")" = "$(dephash "t41${install}x/$OUT/B.trace")"
  for a in "t41${install}x"/.lake/build/ir/*.ltar "t41${install}x"/.lake/build/ir/P/*.ltar; do
    test_cmd cp "$a" "$LAKE_CACHE_DIR/artifacts/$(cat "$a.hash").ltar"
  done
  if [ $install = add ]; then
    test_run -d "t41$install" cache add "$PWD/o41$install.jsonl"
  else
    test_run -d "t41$install" cache get "$PWD/o41$install.jsonl" --scope=p
  fi
  test_cmd grep -q '"o"' "$(mapping "t41$install" B)"
  test_cmd_fails grep -q '"kf"' "$(mapping "t41$install" B)"
  # ... and a fresh tree gets the compiled outputs
  mkp "t41${install}z"
  seta "t41${install}z" 2
  test_not_out 'Built P.B' -d "t41${install}z" build P
  test_cmd_fails grep -q '"kf"' "t41${install}z/$OUT/B.trace"
done

# Kept outputs keep their lineage on every path that returns them. After an accept, a change that
# `P.B` did not use (`A.w` back to its first definition) is a usage-cutoff skip of the kept outputs;
# with the artifact cache read but not written (Lake's default, `ro`) or off, `-o` still records
# them as kept, so `lake cache add` of that file leaves another tree's compiled mapping of the same
# input compiled
yenv() { # yenv ro|off -- the kept tree's cache settings, in a subshell
  if [ "$1" = ro ]; then unset LAKE_ARTIFACT_CACHE LAKE_RESTORE_ARTIFACTS; else export LAKE_ARTIFACT_CACHE=false; fi
  export LAKE_CACHE_DIR="$PWD/cache42y$1"
}
# setw1 DIR -- `A.w` as `mkp` defined it (`1 - 1`), and another `A.v`, so that `P.A` changes
setw1() { rm -f "$1/P/A.lean"; printf 'def A.v : Nat := 9\ndef A.w : Nat := 1 - 1\n' > "$1/P/A.lean"; }
for cm in ro off; do
  kt=t42$cm; ct=t42${cm}x
  mkp $kt
  (yenv $cm; test_run -d $kt build P)
  seta $kt 2
  export STUB_LOG="$PWD/$kt.log"
  (yenv $cm; LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d $kt build P)
  setw1 $kt
  (yenv $cm; test_out 'Replayed P.B' -d $kt build -v P -o "$PWD/o42$cm.jsonl")
  test_cmd grep -q '"kf"' "$kt/$OUT/B.trace"
  bh=$(dephash "$kt/$OUT/B.trace")
  test_cmd_out '"kf"' grep -F "\"$bh\"" "o42$cm.jsonl"
  export LAKE_CACHE_DIR="$PWD/cache42$cm"
  mkp $ct
  setw1 $ct
  test_out 'Built P.B' -d $ct build P
  test_exp "$(dephash "$ct/$OUT/B.trace")" = "$bh"
  for a in $kt/.lake/build/ir/*.ltar $kt/.lake/build/ir/P/*.ltar; do
    if [ -e "$a.hash" ]; then test_cmd cp "$a" "$LAKE_CACHE_DIR/artifacts/$(cat "$a.hash").ltar"; fi
  done
  test_run -d $ct cache add "$PWD/o42$cm.jsonl"
  test_cmd grep -q '"o"' "$(mapping $ct B)"
  test_cmd_fails grep -q '"kf"' "$(mapping $ct B)"
done

# When a kept module is set aside for an archive (here `lake cache get` of another tree's `-o` file)
# and the archive is unpacked, the `.hash` files of the kept outputs go too: with the cache read but
# not written (`LAKE_ARTIFACT_CACHE` unset), the module's importers see the archive's outputs, which
# differ from the kept ones, and take their own outputs for that input
export LAKE_CACHE_DIR="$PWD/cache39"
mkp t39
test_run -d t39 build P
seta t39 2
export STUB_LOG="$PWD/t39.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d t39 build P
mkp t39x
seta t39x 2
LAKE_CACHE_DIR="$PWD/cache39x" test_run -d t39x build P -o "$PWD/o39.jsonl"
test_cmd_fails cmp "t39/$OUT/B.olean" "t39x/$OUT/B.olean"
for a in t39x/.lake/build/ir/*.ltar t39x/.lake/build/ir/P/*.ltar; do
  test_cmd cp "$a" "$LAKE_CACHE_DIR/artifacts/$(cat "$a.hash").ltar"
done
test_run -d t39 cache get "$PWD/o39.jsonl" --scope=p
# `--no-build` only reports that `P.B` needs a build: it unpacks nothing and changes no output
test_cmd cp "t39/$OUT/B.olean" b39kept.olean
(unset LAKE_ARTIFACT_CACHE LAKE_RESTORE_ARTIFACTS; test_status 3 -d t39 build P --no-build)
test_cmd cmp b39kept.olean "t39/$OUT/B.olean"
test_cmd grep -q '"kf"' "t39/$OUT/B.trace"
(unset LAKE_ARTIFACT_CACHE LAKE_RESTORE_ARTIFACTS; test_out 'Unpacked P.B' -d t39 build P)
test_cmd cmp "t39/$OUT/B.olean" "t39x/$OUT/B.olean"
test_exp "$(cat "t39/$OUT/B.olean.hash")" = "$(cat "t39x/$OUT/B.olean.hash")"
test_exp "$(dephash "t39/$OUT/C.trace")" = "$(dephash "t39x/$OUT/C.trace")"

# An excluded module whose input the cache maps to a kept archive (as `lake build -o` records it):
# `--no-build` and `lake shake` only report that it needs a build, and change no file
export LAKE_CACHE_DIR="$PWD/cache53"
mkp t53
test_run -d t53 build P
seta t53 2
export STUB_LOG="$PWD/t53.log"
LAKE_KEPT_CHECKER="$STUB" test_out 'Checked P.B' -d t53 build P
test_run -d t53 build P -o "$PWD/o53.jsonl"
export LAKE_CACHE_DIR="$PWD/cache53b"
mkdir -p "$LAKE_CACHE_DIR/artifacts"
for a in t53/.lake/build/ir/*.ltar t53/.lake/build/ir/P/*.ltar; do
  test_cmd cp "$a" "$LAKE_CACHE_DIR/artifacts/$(cat "$a.hash").ltar"
done
test_run -d t53 cache add "$PWD/o53.jsonl"
test_cmd cp "t53/$OUT/B.olean" b53.olean
sed_i 's/^name = "p"$/name = "p"\ndefaultTargets = ["P"]/' t53/lakefile.toml
printf 'P.B\n' > exclude53
(unset LAKE_ARTIFACT_CACHE LAKE_RESTORE_ARTIFACTS
 LAKE_KEPT_EXCLUDE="$PWD/exclude53" test_status 3 -d t53 build P --no-build
 LAKE_KEPT_EXCLUDE="$PWD/exclude53" test_err 'out of date oleans' -d t53 shake)
test_cmd cmp b53.olean "t53/$OUT/B.olean"
test_cmd grep -q '"kf"' "t53/$OUT/B.trace"
