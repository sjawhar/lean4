#!/usr/bin/env bash
source ../common.sh
./clean.sh
mkdir -p Test
printf 'def a := 1\ntheorem ta : a = 1 := sorry\n' > Test/A.lean
printf 'import Test.A\ndef b := a + 1\n' > Test/B.lean
printf 'import Test.A\nexample : a = 1 := rfl\n' > Test/C.lean
printf 'import Test.A\n#print axioms ta\n' > Test/D.lean
printf 'macro "mk" : command => `(def hyg := 5)\nmk\ndef h := 1\n' > Test/H.lean
printf 'import Test.H\ndef hu := h\n' > Test/HU.lean
printf 'syntax "mk2" : term\n' > Test/Syn.lean
printf 'import Test.Syn\nmacro_rules | `(mk2) => `(2)\n' > Test/Rules.lean
printf 'import Test.Rules\nexample : (mk2 : Nat) = 2 := rfl\n' > Test/Ex.lean
test_run build Test.B Test.C Test.D Test.HU Test.Ex
test_exp -f .lake/build/lib/lean/Test/B.usage
test_cmd_out '[["Test","A"],[[["a"],"' cat .lake/build/lib/lean/Test/B.usage
# `example` (C) reaches `used` through `usedByChecksRef`, `#print axioms` (D) through its `TermInfo`.
test_cmd_out '[["Test","A"],[[["a"],"' cat .lake/build/lib/lean/Test/C.usage
test_cmd_out '[["Test","A"],[[["ta"],"' cat .lake/build/lib/lean/Test/D.usage
# Names are component arrays: a macro-scoped name keeps its components instead of an unparsable string.
test_cmd_out '["hyg","_@","Test","H",' cat .lake/build/lib/lean/Test/H.usage
test_cmd_out '[["Test","H"],[[["h"],"' cat .lake/build/lib/lean/Test/HU.usage
# An `example`'s environment is discarded; the macro it expanded still reaches `extra`.
test_cmd_out '[["Test","Rules"],' cat .lake/build/lib/lean/Test/Ex.usage
# the reader rebuilds component-array names: an unrelated edit to H replays HU with no warning
printf 'macro "mk" : command => `(def hyg := 5)\nmk\ndef h := 1\ndef unrelatedH := 0\n' > Test/H.lean
test_not_out "warning" build -v Test.HU
match_text "Replayed Test.HU" produced.out
# a name component that is neither a string nor a number is corrupt input: warned, then built
# (sidecars are removed before being rewritten: under an artifact cache they are read-only links)
printf 'macro "mk" : command => `(def hyg := 5)\nmk\ndef h := 1\ndef unrelatedH := 1\n' > Test/H.lean
rm -f .lake/build/lib/lean/Test/HU.usage
printf '{"version":2,"noskip":false,"moduleDigest":"0000000000000000","closure":"0000000000000000","own":[],"used":[[[true],[]]],"extra":[]}' > .lake/build/lib/lean/Test/HU.usage
test_out "expected a name component" build Test.HU
match_text "Built Test.HU" produced.out
# unrelated addition: A recompiles, nothing below it does
printf 'def a := 1\ntheorem ta : a = 1 := sorry\ndef unrelated := 2\n' > Test/A.lean
lake_out build -v Test.B Test.C Test.D
match_text "Built Test.A" produced.out
match_text "Replayed Test.B" produced.out
match_text "Replayed Test.C" produced.out
match_text "Replayed Test.D" produced.out
# ta's proof changes: D's #print axioms output changes; B and C do not use ta
printf 'def a := 1\ntheorem ta : a = 1 := rfl\ndef unrelated := 2\n' > Test/A.lean
lake_out build -v Test.B Test.C Test.D
match_text "Built Test.D" produced.out
match_text "Replayed Test.B" produced.out
match_text "Replayed Test.C" produced.out
# a's value changes: B recompiles; C's example recompiles and now fails
printf 'def a := 2\ntheorem ta : a = 2 := rfl\ndef unrelated := 2\n' > Test/A.lean
test_out "Built Test.B" build Test.B
test_err "Test.C" build Test.C
printf 'import Test.A\nexample : a = 2 := rfl\n' > Test/C.lean
test_run build Test.C
# an option change: local trace differs
cp lakefile.toml lakefile.toml.bak
printf '[leanOptions]\nmaxRecDepth = 1000\n' >> lakefile.toml
test_out "Built Test.B" build Test.B
cp lakefile.toml.bak lakefile.toml
test_run build Test.B
# missing key: stock path
rm .lake/build/lib/lean/Test/B.usekey
printf 'def a := 2\ntheorem ta : a = 2 := rfl\ndef unrelated := 3\n' > Test/A.lean
test_out "Built Test.B" build Test.B
# disabled
printf 'def a := 2\ntheorem ta : a = 2 := rfl\ndef unrelated := 4\n' > Test/A.lean
LAKE_USAGE_CUTOFF=0 test_out "Built Test.B" build Test.B
# a corrupt key is reported and the module builds normally
printf 'def a := 2\ntheorem ta : a = 2 := rfl\ndef unrelated := 5\n' > Test/A.lean
rm -f .lake/build/lib/lean/Test/B.usekey
printf '{' > .lake/build/lib/lean/Test/B.usekey
test_out "Test/B.usekey" build Test.B
# a key is bound to its module's .olean: an .olean rewritten behind Lake's back (e.g. by another
# toolchain, which keeps the old sidecars) makes the module build normally
printf 'def a := 2\ntheorem ta : a = 2 := rfl\ndef unrelated := 6\n' > Test/A.lean
{ cat .lake/build/lib/lean/Test/B.olean; printf 'x'; } > B.tmp
mv -f B.tmp .lake/build/lib/lean/Test/B.olean
rm .lake/build/lib/lean/Test/B.olean.hash
test_out "Built Test.B" build Test.B
# a failed rebuild leaves no sidecars behind
printf 'import Test.A\ndef b : Bool := a\n' > Test/B.lean
test_err "Test.B" build Test.B
test_exp ! -f .lake/build/lib/lean/Test/B.usekey
test_exp ! -f .lake/build/lib/lean/Test/B.usage
# a module-system file in a non-module file's closure carries no digests: an edit to its
# private body must still rebuild the non-module importer (here N's proof becomes false)
printf 'module\npublic def d : Nat := 1\n' > Test/U.lean
printf 'module\npublic import Test.U\npublic def c : Nat := d\n' > Test/K.lean
printf 'import Test.K\ntheorem t : c = 1 := rfl\n' > Test/N.lean
test_run build Test.N
printf 'module\npublic def d : Nat := 2\n' > Test/U.lean
test_err "Building Test.N" build -v Test.N
# toolchain modules in the closure: KS drops `import Std.Data.HashMap`, which MS reaches only through KS.
# MS must rebuild and fail as it does from scratch, not replay and leave the error to a new importer PS.
printf 'import Std.Data.HashMap\ndef k := 1\n' > Test/KS.lean
printf 'import Test.KS\ndef m : Std.HashMap Nat Nat := {}\n' > Test/MS.lean
printf 'import Test.MS\ndef n := m\n' > Test/NS.lean
test_run build Test.NS
printf 'def k := 2\n' > Test/KS.lean
test_err "error: Test/MS.lean" build -v Test.NS
printf 'import Test.MS\ntheorem t : m.size = 0 := rfl\n' > Test/PS.lean
test_err "error: Test/MS.lean" build Test.PS
# two levels: KK -> J -> MM, MM uses Std.HashMap, which only KK imports
printf 'import Std.Data.HashMap\ndef kk := 1\n' > Test/KK.lean
printf 'import Test.KK\ndef j := 1\n' > Test/J.lean
printf 'import Test.J\ndef mm : Std.HashMap Nat Nat := {}\n' > Test/MM.lean
test_run build Test.MM
# an edit that keeps KK's imports: KK rebuilds, J and MM replay, the latter reading J's recorded closure
printf 'import Std.Data.HashMap\ndef kk := 1\ndef kk2 := 2\n' > Test/KK.lean
lake_out build -v Test.MM
match_text "Built Test.KK" produced.out
match_text "Replayed Test.J" produced.out
match_text "Replayed Test.MM" produced.out
# J also imports the HashMap directly: KK drops it, J's closure does not change, and MM replays correctly
printf 'import Test.KK\nimport Std.Data.HashMap\ndef j := 1\n' > Test/J.lean
test_run build Test.MM
printf 'def kk := 1\n' > Test/KK.lean
lake_out build -v Test.MM
match_text "Built Test.KK" produced.out
match_text "Replayed Test.MM" produced.out
# J drops it too: MM must rebuild and fail as from scratch
printf 'import Test.KK\ndef j := 2\n' > Test/J.lean
test_err "error: Test/MM.lean" build -v Test.MM
# J's source unchanged and KK drops the import: J's closure changed, so J rebuilds in the same run, and MM,
# checked after J, reads J's new closure and rebuilds
printf 'import Std.Data.HashMap\ndef kk := 1\n' > Test/KK.lean
printf 'import Test.KK\ndef j := 1\n' > Test/J.lean
test_run build Test.MM
printf 'def kk := 1\n' > Test/KK.lean
test_err "error: Test/MM.lean" build -v Test.MM
match_text "Built Test.J" produced.out
no_match_text "Replayed Test.MM" produced.out
# `used` and `extra` modules outside the workspace are toolchain modules, pinned by the Lean githash in the
# local trace: the check does not look them up (a stage1-built stdlib has no entries, so they are added here)
printf 'def ta1 := 1\n' > Test/TA.lean
printf 'import Test.TA\ndef tb := ta1\n' > Test/TB.lean
test_run build Test.TB
test_cmd_out '"extra":[]' cat .lake/build/lib/lean/Test/TB.usage
sed -e 's/"used":\[/"used":[[["Init","Prelude"],[[["Nat","add"],"0000000000000000"]]],/' \
  -e 's/"extra":\[\]/"extra":[[["Init","Prelude"],false]]/' \
  .lake/build/lib/lean/Test/TB.usage > TB.usage.tmp
mv -f TB.usage.tmp .lake/build/lib/lean/Test/TB.usage
test_cmd_out '"used":[[["Init","Prelude"],' cat .lake/build/lib/lean/Test/TB.usage
test_cmd_out '"extra":[[["Init","Prelude"],false]' cat .lake/build/lib/lean/Test/TB.usage
printf 'def ta1 := 1\ndef ta2 := 2\n' > Test/TA.lean
lake_out build -v Test.TB
match_text "Built Test.TA" produced.out
match_text "Replayed Test.TB" produced.out
# a recursive `partial def` runs its compiled body `f._unsafe_rec`, which `native_decide` trusts: a change to
# that body alone must rebuild M, which then fails as it does with cutoff off
printf 'partial def f (n : Nat) : Nat := if n = 0 then 2 else f (n - 1)\n' > Test/PX.lean
printf 'import Test.PX\ntheorem t : f 1 = 2 := by native_decide\n' > Test/PM.lean
test_run build Test.PM
printf 'partial def f (n : Nat) : Nat := if n = 0 then 3 else f (n - 1)\n' > Test/PX.lean
test_err "error: Test/PM.lean" build -v Test.PM
printf 'partial def f (n : Nat) : Nat := if n = 0 then 2 else f (n - 1)\n' > Test/PX.lean
test_run build Test.PM
printf 'partial def f (n : Nat) : Nat := if n = 0 then 3 else f (n - 1)\n' > Test/PX.lean
LAKE_USAGE_CUTOFF=0 test_err "error: Test/PM.lean" build -v Test.PM
# the same through `Lean.ofReduceBool` (adversarial case a05b): the proof term never names `reduceBool`, and the
# decided `c` runs `f`'s compiled body; M must rebuild and fail
printf 'partial def f (n : Nat) : Nat := if n = 0 then 2 else f (n - 1)\ndef c : Bool := f 1 == 2\n' > Test/RX.lean
printf 'import Test.RX\nset_option linter.deprecated false\ntheorem t : c = true := Lean.ofReduceBool c true (@rfl Bool true)\n' \
  > Test/RM.lean
test_run build Test.RM
printf 'partial def f (n : Nat) : Nat := if n = 0 then 3 else f (n - 1)\ndef c : Bool := f 1 == 2\n' > Test/RX.lean
test_err "error: Test/RM.lean" build -v Test.RM
# `reduceBool` one module up (adversarial case a05c): RY's `rbc` is `noskip` and always rebuilds, and RN's
# `rfl` proof of `rbc = true` names no `reduceBool`; `rbc`'s digest folds in `f`'s compiled body, so RN must
# rebuild and fail
printf 'partial def f (n : Nat) : Nat := if n = 0 then 2 else f (n - 1)\ndef c : Bool := f 1 == 2\n' > Test/RX.lean
printf 'import Test.RX\ndef rbc : Bool := Lean.reduceBool c\n' > Test/RY.lean
printf 'import Test.RY\ntheorem t : rbc = true := rfl\n' > Test/RN.lean
test_run build Test.RN
printf 'partial def f (n : Nat) : Nat := if n = 0 then 3 else f (n - 1)\ndef c : Bool := f 1 == 2\n' > Test/RX.lean
test_err "error: Test/RN.lean" build -v Test.RN
# `bv_decide` checks its certificate with compiled toolchain code only: its module stays skippable
printf 'def y := 1\n' > Test/BY.lean
printf 'import Test.BY\nimport Std.Tactic.BVDecide\ntheorem tb (x : BitVec 8) : x + 0#8 = x := by bv_decide\n' \
  > Test/BV.lean
test_run build Test.BV
printf 'def y := 1\ndef y2 := 2\n' > Test/BY.lean
lake_out build -v Test.BV
match_text "Built Test.BY" produced.out
match_text "Replayed Test.BV" produced.out
# control: a C body change behind a precompiled module's `@[extern]` reaches M only through `libext_X.so`, which
# links `libleanext.so` dynamically, so its bytes and M's trace do not change. Stock Lake replays M too; cutoff
# must match stock here, not do worse
mkdir -p ext/X ext/M
cat > ext/lakefile.lean <<'EOF'
import Lake
open System Lake DSL
package ext
lean_lib X where
  precompileModules := true
lean_lib M
target ext.o pkg : FilePath := do
  let srcJob ← inputTextFile <| pkg.dir / "ext.c"
  buildO (pkg.buildDir / "c" / "ext.o") srcJob #["-I", (← getLeanIncludeDir).toString] #["-fPIC"] "cc" getLeanTrace
extern_lib libleanext pkg := do
  buildStaticLib (pkg.staticLibDir / nameToStaticLib "leanext") #[← ext.o.fetch]
EOF
printf '@[extern "ext_val"] opaque extVal : Unit → UInt32\n' > ext/X.lean
printf 'import X\ntheorem t : extVal () = 1 := by native_decide\n' > ext/M.lean
printf '#include <stdint.h>\nuint32_t ext_val(void *u) { return 1; }\n' > ext/ext.c
test_run -d ext build M
printf '#include <stdint.h>\nuint32_t ext_val(void *u) { return 2; }\n' > ext/ext.c
lake_out -d ext build -v M
match_text "Replayed M" produced.out
printf '#include <stdint.h>\nuint32_t ext_val(void *u) { return 1; }\n' > ext/ext.c
test_run -d ext build M
printf '#include <stdint.h>\nuint32_t ext_val(void *u) { return 2; }\n' > ext/ext.c
LAKE_USAGE_CUTOFF=0 lake_out -d ext build -v M
match_text "Replayed M" produced.out
# `lake unpack` of an archive that ships no sidecars (e.g. built by another toolchain) drops the
# old ones, without following a symlink out of the build directory
test_exp -f .lake/build/lib/lean/Test/A.usage
mkdir -p outside stock
printf '{' > outside/keep.usage
ln -s "$PWD/outside" .lake/build/link
tar -czf stock.tgz -C stock .
test_run unpack stock.tgz
test_exp ! -f .lake/build/lib/lean/Test/A.usage
test_exp ! -f .lake/build/lib/lean/Test/A.usekey
test_exp -f outside/keep.usage
# Under a writable artifact cache with restored artifacts (machcsl's `tools/lakecache.sh`), in fresh
# package dirs sharing a cache of their own. Restored and cached outputs are read-only hard links
# into the cache, so a test edits one by replacing it, never by writing through it.
export LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true LAKE_CACHE_DIR="$PWD/lakecache"
mkdir -p cache1/Test cache2/Test
cp lakefile.toml cache1/
cp lakefile.toml cache2/
cd cache1
printf 'def a := 1\ntheorem ta : a = 1 := sorry\n' > Test/A.lean
printf 'import Test.A\ndef b := a + 1\n' > Test/B.lean
printf 'import Test.A\nexample : a = 1 := rfl\n' > Test/C.lean
printf 'import Test.A\n#print axioms ta\n' > Test/D.lean
test_run build Test.B Test.C Test.D
# unrelated addition: A recompiles, nothing below it does
printf 'def a := 1\ntheorem ta : a = 1 := sorry\ndef unrelated := 2\n' > Test/A.lean
lake_out build -v Test.B Test.C Test.D
match_text "Built Test.A" produced.out
match_text "Replayed Test.B" produced.out
match_text "Replayed Test.C" produced.out
match_text "Replayed Test.D" produced.out
# a second tree with the same sources restores every module, sidecars included, from the cache
# (B's entry exists only because the skip above stored it)
cd ../cache2
cp ../cache1/Test/*.lean Test/
test_not_out "Built" build -v Test.B Test.C Test.D
test_exp -f .lake/build/lib/lean/Test/B.usage
test_exp -f .lake/build/lib/lean/Test/B.usekey
# an unrelated edit no tree has seen: B misses the cache by input hash and is skipped
printf 'def a := 1\ntheorem ta : a = 1 := sorry\ndef unrelated := 3\n' > Test/A.lean
lake_out build -v Test.B Test.C Test.D
match_text "Built Test.A" produced.out
match_text "Replayed Test.B" produced.out
match_text "Replayed Test.C" produced.out
match_text "Replayed Test.D" produced.out
# a restored key is bound to its module's .olean: B.olean replaced behind Lake's back builds B
printf 'def a := 1\ntheorem ta : a = 1 := sorry\ndef unrelated := 4\n' > Test/A.lean
{ cat .lake/build/lib/lean/Test/B.olean; printf 'x'; } > B.tmp
mv -f B.tmp .lake/build/lib/lean/Test/B.olean
rm .lake/build/lib/lean/Test/B.olean.hash
test_out "Built Test.B" build Test.B
# a module-system file in the closure still forces the rebuild (N's proof becomes false)
printf 'module\npublic def d : Nat := 1\n' > Test/U.lean
printf 'module\npublic import Test.U\npublic def c : Nat := d\n' > Test/K.lean
printf 'import Test.K\ntheorem t : c = 1 := rfl\n' > Test/N.lean
test_run build Test.N
printf 'module\npublic def d : Nat := 2\n' > Test/U.lean
test_err "Building Test.N" build -v Test.N
cd ..
# the archive of a module restored from the cache depends only on its outputs: two trees whose E
# differs by a comment restore E and pack the same `.ltar` (the archive includes the fetch trace,
# which therefore lists no sidecar: a `.usekey` records an input hash)
mkdir -p cache3/Test cache4/Test cache5/Test cache6/Test cache7/Test
for d in cache3 cache4 cache5 cache6 cache7; do cp lakefile.toml $d/; done
printf 'def e := 1\n' > cache3/Test/E.lean
printf 'def e := 1\n-- a comment\n' > cache4/Test/E.lean
cp cache3/Test/E.lean cache5/Test/
cp cache4/Test/E.lean cache6/Test/
cp cache3/Test/E.lean cache7/Test/
(cd cache3 && test_run build Test.E)
(cd cache4 && test_run build Test.E)
(cd cache5 && test_out "Reused Test.E" build -v Test.E -o ../cache5.jsonl)
(cd cache6 && test_out "Reused Test.E" build -v Test.E -o ../cache6.jsonl)
test_exp -f cache5/.lake/build/lib/lean/Test/E.usekey
test_cmd cmp cache5/.lake/build/ir/Test/E.ltar cache6/.lake/build/ir/Test/E.ltar
# a sidecar missing from the cache (e.g. pruned) does not turn the entry into a miss: the module
# restores without it, and its dependents build normally once
rm "$LAKE_CACHE_DIR"/artifacts/*.usekey
(cd cache7 && test_out "Reused Test.E" build -v Test.E)
test_exp -f cache7/.lake/build/lib/lean/Test/E.usage
test_exp ! -f cache7/.lake/build/lib/lean/Test/E.usekey

rm -f produced.out
