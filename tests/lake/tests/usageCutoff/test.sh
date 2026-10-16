#!/usr/bin/env bash
source ../common.sh
./clean.sh
# Store the Lake cache in the package, never the system cache (cache-env runs set their own directory below)
export LAKE_CACHE_DIR=
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
cat > Test/Inspect.lean <<'EOF'
import Test.A
import Lean.Util.ModuleUsage
import Lean.Elab.Command
open Lean Elab Command
#eval show CommandElabM Unit from do
  let env ← getEnv
  let some i := env.getModuleIdx? `Test.A | throwError "imported module not found"
  logInfo m!"{(ModuleUsage.ext.getModuleEntries env i).isEmpty}"
EOF
# Per-constant usage digests live in `.usage`, not in ordinary imported `.olean` pages.
test_cmd_out "true" "$LAKE" env lean Test/Inspect.lean
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
# `.usekey` names its `extra` modules the same way
test_cmd_out '"extra":[[["Test","Rules"],"' cat .lake/build/lib/lean/Test/Ex.usekey
# the reader rebuilds component-array names: an unrelated edit to H replays HU with no warning
printf 'macro "mk" : command => `(def hyg := 5)\nmk\ndef h := 1\ndef unrelatedH := 0\n' > Test/H.lean
test_not_out "warning" build -v Test.HU
match_text "Replayed Test.HU" produced.out
# a name component that is neither a string nor a number is corrupt input: warned, then built
# (sidecars are removed before being rewritten: under an artifact cache they are read-only links)
printf 'macro "mk" : command => `(def hyg := 5)\nmk\ndef h := 1\ndef unrelatedH := 1\n' > Test/H.lean
rm -f .lake/build/lib/lean/Test/HU.usage
printf '{"version":3,"noskip":false,"moduleDigest":"00000000000000000000000000000000","closure":"00000000000000000000000000000000","own":[],"used":[[[true],[]]],"extra":[]}' > .lake/build/lib/lean/Test/HU.usage
test_out "expected a name component" build Test.HU
match_text "Built Test.HU" produced.out
# a sidecar of another format version (an older toolchain wrote it) reads as absent: built, no warning
rm -f .lake/build/lib/lean/Test/HU.usage
printf '{"version":2,"noskip":false,"moduleDigest":"0000000000000000","closure":"0000000000000000","own":[],"used":[],"extra":[]}' > .lake/build/lib/lean/Test/HU.usage
printf 'macro "mk" : command => `(def hyg := 5)\nmk\ndef h := 1\ndef unrelatedH := 2\n' > Test/H.lean
test_not_out "warning" build -v Test.HU
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
sed -e 's/"used":\[/"used":[[["Init","Prelude"],[[["Nat","add"],"00000000000000000000000000000000"]]],/' \
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
test_cmd_out '"noskip":true' cat .lake/build/lib/lean/Test/PM.usage
printf 'partial def f (n : Nat) : Nat := if n = 0 then 3 else f (n - 1)\n' > Test/PX.lean
test_err "error: Test/PM.lean" build -v Test.PM
printf 'partial def f (n : Nat) : Nat := if n = 0 then 2 else f (n - 1)\n' > Test/PX.lean
test_run build Test.PM
printf 'partial def f (n : Nat) : Nat := if n = 0 then 3 else f (n - 1)\n' > Test/PX.lean
LAKE_USAGE_CUTOFF=0 test_err "error: Test/PM.lean" build -v Test.PM
# a user constant with the name the extension once used for its marker entry (`_moduleUsage`) has its
# own digest: a change to its value rebuilds a module that proved it through an intermediate `def`. The same
# for a name declared by `addDecl` from `run_cmd`, which can declare any name (no compiled code, so the
# intermediate is `noncomputable`)
printf 'def _moduleUsage : Nat := 1\n' > Test/MX.lean
printf 'import Test.MX\ndef md : Nat := _moduleUsage\n' > Test/MA.lean
printf 'import Test.MA\ntheorem mb : md = 1 := rfl\n' > Test/MB.lean
test_run build Test.MB
printf 'def _moduleUsage : Nat := 2\n' > Test/MX.lean
test_err "error: Test/MB.lean" build -v Test.MB
mkDecl() {
  printf 'import Lean\nopen Lean Elab Command in\nrun_cmd liftCoreM <| addDecl <| .defnDecl { name := `_moduleUsage, levelParams := [], type := mkConst ``Nat, value := mkNatLit %s, hints := .abbrev, safety := .safe }\n' "$1"
}
mkDecl 1 > Test/MY.lean
printf 'import Test.MY\nnoncomputable def me : Nat := _moduleUsage\n' > Test/MC.lean
printf 'import Test.MC\ntheorem mf : me = 1 := rfl\n' > Test/MD.lean
test_run build Test.MD
mkDecl 2 > Test/MY.lean
test_err "error: Test/MD.lean" build -v Test.MD
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
# Under a writable artifact cache with restored artifacts (`LAKE_ARTIFACT_CACHE` and
# `LAKE_RESTORE_ARTIFACTS`), in fresh package dirs sharing a cache of their own. Restored and cached
# outputs are read-only hard links into the cache, so a test edits one by replacing it, never by
# writing through it.
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
# a `.usekey` missing from the cache (e.g. pruned) does not turn the entry into a miss: the module
# restores without it, and its dependents build normally once
rm "$LAKE_CACHE_DIR"/artifacts/*.usekey
(cd cache7 && test_out "Reused Test.E" build -v Test.E)
test_exp -f cache7/.lake/build/lib/lean/Test/E.usage
test_exp ! -f cache7/.lake/build/lib/lean/Test/E.usekey
# (sed, not jq: entries and traces are pretty-printed, one key per line)
depHash() { sed -n 's/.*"depHash": *"\([0-9a-f]*\)".*/\1/p' "$1"; }
entryArt() { sed -n "s/.*\"$2\": *\"\\([^\"]*\\)\".*/\\1/p" "$1"; }
# a restored entry whose `.usage` was pruned from the cache is a miss: the module rebuilds and its rewritten
# entry names a `.usage` again, so its dependents keep skipping (C imports B and X; B does not import X)
mkdir -p cache8/Test cache9/Test
for d in cache8 cache9; do cp lakefile.toml $d/; done
printf 'def x := 1\n' > cache8/Test/X.lean
printf 'def pb := 1\n' > cache8/Test/B.lean
printf 'import Test.B\nimport Test.X\ndef pc := pb + x\n' > cache8/Test/C.lean
(cd cache8 && test_run build Test.C)
entry="$LAKE_CACHE_DIR/outputs/test/$(depHash cache8/.lake/build/lib/lean/Test/B.trace).json"
usage=$(entryArt "$entry" u)
test_exp -n "$usage"
rm "$LAKE_CACHE_DIR/artifacts/$usage"
cp cache8/Test/*.lean cache9/Test/
(cd cache9 && test_run build Test.C)
printf 'def x := 1\ndef x2 := 2\n' > cache9/Test/X.lean
(cd cache9 && test_run build Test.C)
printf 'def x := 1\ndef x2 := 3\n' > cache9/Test/X.lean
(cd cache9 && test_out "Replayed Test.C" build -v Test.C)
test_exp -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" u)"
# B's entry from a `-o` build in a fresh dir $1 (B and X valued $2), naming an archive (`l`): `-o` packs the
# archive after the build writes the entry, so the entry gets its `l` by hand, from the `-o` map. Sets `entry`,
# and copies the sources to a second fresh dir $1b.
ltarEntry() {
  mkdir -p "$1/Test" "$1b/Test"
  cp lakefile.toml "$1/"; cp lakefile.toml "$1b/"
  printf 'def x := %s\n' "$2" > "$1/Test/X.lean"
  printf 'def pb := %s\n' "$2" > "$1/Test/B.lean"
  printf 'import Test.B\nimport Test.X\ndef pc := pb + x\n' > "$1/Test/C.lean"
  cp "$1"/Test/*.lean "$1b/Test/"
  (cd "$1" && test_run build Test.C -o "../$1.jsonl")
  local hashB ltar
  hashB=$(depHash "$1/.lake/build/lib/lean/Test/B.trace")
  entry="$LAKE_CACHE_DIR/outputs/test/$hashB.json"
  ltar=$(sed -n "s/^\[\"$hashB\", *\"\\([0-9a-f]*\\.ltar\\)\"\]$/\\1/p" "$1.jsonl")
  test_exp -f "$LAKE_CACHE_DIR/artifacts/$ltar"
  grep -q '"l":' "$entry" || sed_i "s/\"o\":/\"l\": \"$ltar\", \"o\":/" "$entry"
  match_text "\"l\": \"$ltar\"" "$entry"
}
# the same miss for an entry that names an archive: it must not fall back to the archive, which ships no
# sidecars. B rebuilds, and its rewritten entry names both sidecars
ltarEntry cache10 10
rm "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" u)"
(cd cache10b && test_out "Built Test.B" build -v Test.C)
test_exp -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" u)"
test_exp -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" k)"
# with its `.c` pruned too, so that only the archive resolves: still a miss
ltarEntry cache11 11
rm "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" u)" "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" c)"
(cd cache11b && test_out "Built Test.B" build -v Test.C)
test_exp -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" u)"
test_exp -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" k)"
# with only its `.c` pruned, B unpacks the archive and keeps the entry's sidecars, in the tree and in the
# rewritten entry
ltarEntry cache17 17
rm "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" c)"
(cd cache17b && test_out "Unpacked Test.B" build -v Test.C)
test_exp -f cache17b/.lake/build/lib/lean/Test/B.usage
test_exp -f cache17b/.lake/build/lib/lean/Test/B.usekey
test_exp -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" u)"
test_exp -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" k)"
# a skip's cache entry is marked `s`, and a build with the cutoff off never restores it: it treats the entry
# as a miss and builds, and its build replaces the entry unmarked
mkdir -p cache12/Test cache13/Test cache14/Test cache15/Test cache16/Test
for d in cache12 cache13 cache14 cache15 cache16; do cp lakefile.toml $d/; done
printf 'def sa := 1\n' > cache12/Test/SA.lean
printf 'import Test.SA\ndef sb := sa + 1\n' > cache12/Test/SB.lean
# `-o` packs SB's archive, which stays in the build dir, so the skip's entry names it (`l`)
(cd cache12 && test_run build Test.SB -o ../cache12.jsonl)
printf 'def sa := 1\ndef unrelated := 2\n' > cache12/Test/SA.lean
(cd cache12 && test_out "Replayed Test.SB" build -v Test.SB -o ../cache12b.jsonl)
hashSB=$(depHash cache12/.lake/build/lib/lean/Test/SB.trace)
entry="$LAKE_CACHE_DIR/outputs/test/$hashSB.json"
match_text '"s": true' "$entry"
match_text '"l":' "$entry"
# the skip puts no entry in the `-o` map, which records a bare archive that cannot carry the mark
no_match_text "$hashSB" cache12b.jsonl
cp "$entry" skipentry.json
# a fresh tree with the cutoff off builds SB instead of restoring the skip's outputs
cp cache12/Test/*.lean cache13/Test/
(cd cache13 && LAKE_USAGE_CUTOFF=0 test_out "Built Test.SB" build -v Test.SB)
no_match_text '"s": true' "$entry"
# control: that built (unmarked) entry is restored with the cutoff off
cp cache12/Test/*.lean cache14/Test/
(cd cache14 && LAKE_USAGE_CUTOFF=0 test_out "Reused Test.SB" build -v Test.SB)
# the marked entry with an artifact pruned, so it resolves only through its archive: a cutoff-on restore
# unpacks the archive and the rewritten entry keeps the mark; with the cutoff off, SB builds instead
cp -f skipentry.json "$entry"
rm -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" c)"
cp cache12/Test/*.lean cache15/Test/
(cd cache15 && test_out "Unpacked Test.SB" build -v Test.SB)
match_text '"s": true' "$entry"
rm -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" c)"
cp cache12/Test/*.lean cache16/Test/
(cd cache16 && LAKE_USAGE_CUTOFF=0 test_out "Built Test.SB" build -v Test.SB)
no_match_text '"s": true' "$entry"
# the tree that skipped, with the cutoff off and its sources unchanged since the skip, builds SB rather
# than keep the skip's outputs, as a stock build of those sources would
printf 'def sa := 1\ndef unrelated := 3\n' > cache12/Test/SA.lean
(cd cache12 && test_out "Replayed Test.SB" build -v Test.SB)
(cd cache12 && LAKE_USAGE_CUTOFF=0 test_out "Built Test.SB" build -v Test.SB)

rm -f produced.out
