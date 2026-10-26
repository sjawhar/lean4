#!/usr/bin/env bash
source ../common.sh
./clean.sh
# Work on a copy: the test edits `lakefile.toml`, and CI makes tracked files read-only
copy_to_work lakefile.toml
# Store the Lake cache in the package, never the system cache (cache-env runs set their own directory below)
export LAKE_CACHE_DIR=
# The cutoff is off by default: every arm that expects it turns it on (or off) explicitly
export LAKE_USAGE_CUTOFF=1
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
test_exp -f .lake/build/lib/lean/Test/B.resolved
test_cmd_out '[["Test","A"],[[["a"],"' cat .lake/build/lib/lean/Test/B.usage
# `lean -o` records usage only when asked (`--usage`)
"$LAKE" env lean Test/A.lean -o Test/Direct.olean
test_exp ! -e Test/Direct.usage
# `example` (C) reaches `used` through the recorded used names, `#print axioms` (D) through its `TermInfo`.
test_cmd_out '[["Test","A"],[[["a"],"' cat .lake/build/lib/lean/Test/C.usage
test_cmd_out '[["Test","A"],[[["ta"],"' cat .lake/build/lib/lean/Test/D.usage
# Names are component arrays: a macro-scoped name keeps its components instead of an unparsable string.
test_cmd_out '["hyg","_@","Test","H",' cat .lake/build/lib/lean/Test/H.usage
test_cmd_out '[["Test","H"],[[["h"],"' cat .lake/build/lib/lean/Test/HU.usage
# An `example`'s environment is discarded; the macro it expanded still reaches `extra`.
test_cmd_out '[["Test","Rules"],' cat .lake/build/lib/lean/Test/Ex.usage
# `.usekey` names its `extra` modules the same way
test_cmd_out '"extra":[[["Test","Rules"],"' cat .lake/build/lib/lean/Test/Ex.usekey
# One `.usekey` format per `usekeyVersion`, as `tests/elab/moduleUsageFormat.lean` pins the `.usage`'s: Lake reads a
# key of another version as absent, so two toolchains that write different fields under one number would read each
# other's keys as their own, and a kept module's digests would be trusted. Each row is a version with the top-level
# fields a key of that version carries. A field change that keeps the version fails the comparison below, and two
# branches that each take the next number give the table two rows with that number.
usekey_formats='16 closure,extra,importer,local,modsys,olean,usage,version
17 closure,extra,importer,kept,local,modsys,olean,usage,version'
# the fields of a `.usekey`: its top-level names, with the `importer` object (whose own fields `UsageImport` reads)
# replaced first, sorted and comma-separated
usekey_fields() {
  sed 's/"importer":{[^}]*}/"importer":0/' "$1" | grep -o '"[A-Za-z0-9_]*":' | tr -d '":' | sort | tr '\n' ',' |
    sed 's/,$//'
}
usekey_version=$(sed 's/.*"version":\([0-9]*\).*/\1/' .lake/build/lib/lean/Test/Ex.usekey)
usekey_row=$(printf '%s\n' "$usekey_formats" | grep -E "^$usekey_version " || true)
test_exp -n "$usekey_row"
test_exp "${usekey_row#* }" = "$(usekey_fields .lake/build/lib/lean/Test/Ex.usekey)"
test_exp "$(printf '%s\n' "$usekey_formats" | wc -l)" \
  = "$(printf '%s\n' "$usekey_formats" | cut -d' ' -f1 | sort -u | wc -l)"
test_exp "$(printf '%s\n' "$usekey_formats" | wc -l)" \
  = "$(printf '%s\n' "$usekey_formats" | cut -d' ' -f2- | sort -u | wc -l)"
# the reader rebuilds component-array names: an unrelated edit to H replays HU with no warning
printf 'macro "mk" : command => `(def hyg := 5)\nmk\ndef h := 1\ndef unrelatedH := 0\n' > Test/H.lean
test_not_out "warning" build -v Test.HU
match_text "Replayed Test.HU" produced.out
# the `.usekey` is read first, and only the `.usage` it was written from is accepted: any other `.usage` (here one
# that would not even parse) leaves HU stale: built, no warning
# (sidecars are removed before being rewritten: under an artifact cache they are read-only links)
printf 'macro "mk" : command => `(def hyg := 5)\nmk\ndef h := 1\ndef unrelatedH := 1\n' > Test/H.lean
rm -f .lake/build/lib/lean/Test/HU.usage
printf '{"version":14,"noskip":false,"moduleDigest":"00000000000000000000000000000000","closure":"00000000000000000000000000000000","providesDigest":"00000000000000000000000000000000","provides":[[],[]],"indirect":[],"digested":[],"importedClosures":[],"importedDigests":[],"own":[],"used":[[[true],[]]],"resolvedAll":false,"resolvedDigest":"00000000000000000000000000000000","extra":[],"specKeys":[],"specLookups":[]}' > .lake/build/lib/lean/Test/HU.usage
test_not_out "warning" build -v Test.HU
match_text "Built Test.HU" produced.out
# a name component that is neither a string nor a number is corrupt input: warned, then built
printf 'macro "mk" : command => `(def hyg := 5)\nmk\ndef h := 1\ndef unrelatedH := 3\n' > Test/H.lean
rm -f .lake/build/lib/lean/Test/HU.usekey
printf '{"version":17,"usage":"00000000000000000000000000000000","local":"0000000000000000","olean":"00000000000000000000000000000000","modsys":"00000000000000000000000000000000","closure":"00000000000000000000000000000000","extra":[[[true],"00000000000000000000000000000000","00000000000000000000000000000000"]]}' > .lake/build/lib/lean/Test/HU.usekey
test_out "expected a name component" build Test.HU
match_text "Built Test.HU" produced.out
# so is a sidecar that is not UTF-8
printf 'macro "mk" : command => `(def hyg := 5)\nmk\ndef h := 1\ndef unrelatedH := 4\n' > Test/H.lean
rm -f .lake/build/lib/lean/Test/HU.usekey
printf '\377' > .lake/build/lib/lean/Test/HU.usekey
test_out "Test/HU.usekey" build Test.HU
match_text "Built Test.HU" produced.out
# a sidecar of another format version (another toolchain wrote it) reads as absent: built, no warning
rm -f .lake/build/lib/lean/Test/HU.usekey
printf '{"version":3,"local":"0000000000000000","olean":"00000000000000000000000000000000","modsys":"00000000000000000000000000000000","closure":"00000000000000000000000000000000","extra":[]}' > .lake/build/lib/lean/Test/HU.usekey
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
# missing key: the module builds
rm .lake/build/lib/lean/Test/B.usekey
printf 'def a := 2\ntheorem ta : a = 2 := rfl\ndef unrelated := 3\n' > Test/A.lean
test_out "Built Test.B" build Test.B
# an importer reads only its imports' `.usekey` files, each only for the import's current `.olean`: A's key from
# before A's rebuild, put back next to the new A.olean, still records the old `a`, so B, which uses `a`, builds
# instead of replaying against it
cp .lake/build/lib/lean/Test/A.usekey old-A.usekey
printf 'def a := 7\ntheorem ta : a = 7 := rfl\ndef unrelated := 3\n' > Test/A.lean
test_run build Test.A
rm -f .lake/build/lib/lean/Test/A.usekey
cp old-A.usekey .lake/build/lib/lean/Test/A.usekey
test_out "Built Test.B" build -v Test.B
# a missing import key: B builds. B got no key above (A's key did not bind A's `.olean`), so it builds once more and
# then replays an unrelated edit to A through A's key alone
printf 'def a := 7\ntheorem ta : a = 7 := rfl\ndef unrelated := 4\n' > Test/A.lean
test_run build Test.B
test_exp -f .lake/build/lib/lean/Test/B.usekey
printf 'def a := 7\ntheorem ta : a = 7 := rfl\ndef unrelated := 5\n' > Test/A.lean
lake_out build -v Test.B
match_text "Replayed Test.B" produced.out
printf 'def a := 7\ntheorem ta : a = 7 := rfl\ndef unrelated := 6\n' > Test/A.lean
test_run build Test.A
rm .lake/build/lib/lean/Test/A.usekey
test_out "Built Test.B" build -v Test.B
# disabled: Lake asks Lean for no usage data, so B has no sidecars and its `.olean` no digests
printf 'def a := 2\ntheorem ta : a = 2 := rfl\ndef unrelated := 4\n' > Test/A.lean
LAKE_USAGE_CUTOFF=0 test_out "Built Test.B" build Test.B
test_exp ! -f .lake/build/lib/lean/Test/B.usage
test_exp ! -f .lake/build/lib/lean/Test/B.resolved
test_exp ! -f .lake/build/lib/lean/Test/B.usekey
printf '%s\n' 'import Lean' 'import Test.B' 'open Lean Elab Command' '#eval show CommandElabM Unit from do' \
  '  logInfo m!"{((← getEnv).getModuleIdx? `Test.B).map (ModuleUsage.state (← getEnv)).hasEntries}"' \
  > Test/Inspect.lean
test_cmd_out "some (false)" "$LAKE" env lean Test/Inspect.lean
# the next cutoff-on build compiles B instead of replaying it, and B has digests again
printf 'def a := 2\ntheorem ta : a = 2 := rfl\ndef unrelated := 4\ndef unrelated4 := 0\n' > Test/A.lean
test_out "Built Test.B" build -v Test.B
test_cmd_out "some (true)" "$LAKE" env lean Test/Inspect.lean
# the cutoff setting is part of the trace: a cutoff-on build compiles again an import last built with the
# cutoff off, so B is checked against its new digests (here `a` changed, so B builds)
printf 'def a := 3\ntheorem ta : a = 3 := rfl\ndef unrelated := 4\n' > Test/A.lean
LAKE_USAGE_CUTOFF=0 test_run build Test.A
test_exp ! -f .lake/build/lib/lean/Test/A.usage
lake_out build -v Test.B
match_text "Built Test.A" produced.out
match_text "Built Test.B" produced.out
# the same through an intermediate import: WC uses `wa` through WB while WA has no digests, so WC's `.usage`
# cannot record it, and once WA changes WC compiles (and fails) instead of replaying
printf 'def wa := 1\n' > Test/WA.lean
printf 'import Test.WA\ndef wb := 0\n' > Test/WB.lean
printf 'import Test.WB\ntheorem wc : wa = 1 := rfl\n' > Test/WC.lean
LAKE_USAGE_CUTOFF=0 test_run build Test.WA
test_run build Test.WC
printf 'def wa := 2\n' > Test/WA.lean
test_run build Test.WA
test_err "Test/WC.lean" build -v Test.WC
no_match_text "Replayed Test.WC" produced.out
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
# `lean -o` without `--usage` rewrites an .olean without digests and keeps its old sidecars (and, without
# `--rehash`, its old `.hash`): a module compiled against it records nothing it uses from it, so it gets no
# key and compiles again (and fails) once that import changes. With the artifact cache on, Lake restores the
# rewritten .olean from the cache entry its trace names before the importer compiles, so the importer sees
# digests: this block and the next two run with the cache off
printf 'def ow := 1\n' > Test/OW.lean
LAKE_ARTIFACT_CACHE=false test_run build Test.OW
"$LAKE" env lean Test/OW.lean -o .lake/build/lib/lean/Test/OW.olean
printf 'import Test.OW\ntheorem om : ow = 1 := rfl\n' > Test/OM.lean
LAKE_ARTIFACT_CACHE=false test_run build Test.OM
test_exp ! -f .lake/build/lib/lean/Test/OM.usekey
printf 'def ow := 2\n' > Test/OW.lean
LAKE_ARTIFACT_CACHE=false test_err "error: Test/OM.lean" build -v Test.OM
no_match_text "Replayed Test.OM" produced.out
# the same with `--rehash`
printf 'def rw1 := 1\n' > Test/RW.lean
LAKE_ARTIFACT_CACHE=false test_run build Test.RW
"$LAKE" env lean Test/RW.lean -o .lake/build/lib/lean/Test/RW.olean
printf 'import Test.RW\ntheorem rm : rw1 = 1 := rfl\n' > Test/RM.lean
LAKE_ARTIFACT_CACHE=false test_run --rehash build Test.RM
test_exp ! -f .lake/build/lib/lean/Test/RM.usekey
printf 'def rw1 := 2\n' > Test/RW.lean
LAKE_ARTIFACT_CACHE=false test_err "error: Test/RM.lean" --rehash build -v Test.RM
no_match_text "Replayed Test.RM" produced.out
# the same through an intermediate import, compiled while OT still had digests
printf 'def ot := 1\n' > Test/OT.lean
printf 'import Test.OT\ndef oi := 0\n' > Test/OI.lean
LAKE_ARTIFACT_CACHE=false test_run build Test.OI
"$LAKE" env lean Test/OT.lean -o .lake/build/lib/lean/Test/OT.olean
printf 'import Test.OI\ntheorem oj : ot = 1 := rfl\n' > Test/OJ.lean
LAKE_ARTIFACT_CACHE=false test_run build Test.OJ
test_exp ! -f .lake/build/lib/lean/Test/OJ.usekey
printf 'def ot := 2\n' > Test/OT.lean
LAKE_ARTIFACT_CACHE=false test_err "error: Test/OJ.lean" build -v Test.OJ
no_match_text "Replayed Test.OJ" produced.out
# an import's .olean compiled from other contents behind Lake's back, with its source and sidecars as
# they were: under `--rehash` its importer, compiled against the old .olean, is checked against the new
# one, not against the old `.usage` (which its key binds to the old .olean), so it compiles again and fails.
# With the artifact cache on, Lake takes VA's hash from its cache entry, not the rewritten file, so VM's
# trace stays up to date and VM replays with the cutoff off too: this block runs with the cache off
printf 'def va := 1\n' > Test/VA.lean
printf 'import Test.VA\ntheorem vm : va = 1 := rfl\n' > Test/VM.lean
LAKE_ARTIFACT_CACHE=false test_run build Test.VM
printf 'def va := 2\n' > Test/VA.lean
"$LAKE" env lean Test/VA.lean -o .lake/build/lib/lean/Test/VA.olean
printf 'def va := 1\n' > Test/VA.lean
LAKE_ARTIFACT_CACHE=false test_err "error: Test/VM.lean" --rehash build -v Test.VM
no_match_text "Replayed Test.VM" produced.out
# without `--rehash`, such an .olean keeps its old `.hash`, which the check never reads: it hashes the
# bytes. HM's trace goes stale through an unrelated edit to HX, so a build without the cutoff compiles HM
# again against the real HA.olean (and fails); with the cutoff HM must do the same, not replay. With the
# artifact cache on, Lake restores the rewritten .olean from its cache entry, so a build without the cutoff
# does not compile against it either: this block and the next two run with the cache off
printf 'def ha := 1\n' > Test/HA.lean
printf 'def hx := 0\n' > Test/HX.lean
printf 'import Test.HA\nimport Test.HX\ntheorem hm : ha = 1 := rfl\n' > Test/HM.lean
LAKE_ARTIFACT_CACHE=false test_run build Test.HM
printf 'def ha := 2\n' > Test/HA.lean
"$LAKE" env lean Test/HA.lean -o .lake/build/lib/lean/Test/HA.olean
printf 'def ha := 1\n' > Test/HA.lean
printf 'def hx := 0\ndef hx2 := 0\n' > Test/HX.lean
LAKE_ARTIFACT_CACHE=false test_err "error: Test/HM.lean" build -v Test.HM
no_match_text "Replayed Test.HM" produced.out
# the same for the module's own .olean: GM compiles again instead of keeping the rewritten one
printf 'def gx := 0\n' > Test/GX.lean
printf 'import Test.GX\ndef gm := 1\n' > Test/GM.lean
LAKE_ARTIFACT_CACHE=false test_run build Test.GM
printf 'import Test.GX\ndef gm := 2\n' > Test/GM.lean
"$LAKE" env lean Test/GM.lean -o .lake/build/lib/lean/Test/GM.olean
printf 'import Test.GX\ndef gm := 1\n' > Test/GM.lean
printf 'def gx := 0\ndef gx2 := 0\n' > Test/GX.lean
LAKE_ARTIFACT_CACHE=false lake_out build -v Test.GM
match_text "Built Test.GM" produced.out
# and for a module-system import, whose bytes the check compares instead of digests (`modsysHash`)
printf 'module\npublic def du : Nat := 1\n' > Test/UH.lean
printf 'def ux := 0\n' > Test/UX.lean
printf 'import Test.UH\nimport Test.UX\ntheorem un : du = 1 := rfl\n' > Test/UN.lean
LAKE_ARTIFACT_CACHE=false test_run build Test.UN
printf 'module\npublic def du : Nat := 2\n' > Test/UH.lean
"$LAKE" env lean Test/UH.lean -o .lake/build/lib/lean/Test/UH.olean
printf 'module\npublic def du : Nat := 1\n' > Test/UH.lean
printf 'def ux := 0\ndef ux2 := 0\n' > Test/UX.lean
LAKE_ARTIFACT_CACHE=false test_err "error: Test/UN.lean" build -v Test.UN
no_match_text "Replayed Test.UN" produced.out
# a failed rebuild leaves no sidecars behind
printf 'import Test.A\ndef b : Bool := a\n' > Test/B.lean
test_err "Test.B" build Test.B
test_exp ! -f .lake/build/lib/lean/Test/B.usekey
test_exp ! -f .lake/build/lib/lean/Test/B.usage
test_exp ! -f .lake/build/lib/lean/Test/B.resolved
# module-system files in a non-module file's closure: K imports U's exported level, which carries no
# digests, so an edit to U's private body must still rebuild the non-module importer (here N's proof
# becomes false). N still has a key: it loads its whole closure at the private level, with digests
printf 'module\npublic def d : Nat := 1\n' > Test/U.lean
printf 'module\npublic import Test.U\npublic def c : Nat := d\n' > Test/K.lean
printf 'import Test.K\ntheorem t : c = 1 := rfl\n' > Test/N.lean
test_run build Test.N
test_exp -f .lake/build/lib/lean/Test/N.usekey
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
# J also imports the HashMap directly, before KK: KK drops it, J's closure (its modules in import order) does not
# change, and MM replays correctly
printf 'import Std.Data.HashMap\nimport Test.KK\ndef j := 1\n' > Test/J.lean
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
# the key accepts only the `.usage` it was written from (`usage`: the first 128 bits of its SHA-256), so point it at
# the edited one
d=$(sha256sum .lake/build/lib/lean/Test/TB.usage | cut -c1-32)
sed -e "s/\"usage\":\"[0-9a-f]*\"/\"usage\":\"$d\"/" .lake/build/lib/lean/Test/TB.usekey > TB.usekey.tmp
mv -f TB.usekey.tmp .lake/build/lib/lean/Test/TB.usekey
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
# a user constant named `_moduleUsage` has its own digest, like any other constant: a change to its value
# rebuilds a module that proved it through an intermediate `def`. The same for a name declared by `addDecl` from
# `run_cmd`, which can declare any name (no compiled code, so the intermediate is `noncomputable`)
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
# a theorem two closure modules declare: the import keeps one copy, and the importer depends on both. A change to the
# provides of the declarer the resolver does not answer, which keeps its copy, replays the importer
printf 'theorem qt : True := trivial\n' > Test/QR.lean
printf 'def qk := 0\ntheorem qt : True := trivial\n' > Test/QK.lean
printf 'import Test.QR\nimport Test.QK\ndef qd := 0\n' > Test/QD.lean
test_run build Test.QD
printf 'def qk := 0\ntheorem qt : True := trivial\ndef qk2 := 1\n' > Test/QK.lean
lake_out build -v Test.QD
match_text "Built Test.QK" produced.out
match_text "Replayed Test.QD" produced.out
# compiled code can call a specialization another module created (the specialization cache), a name no kernel
# term mentions: when that module drops it, the importer compiles again, as from scratch
printf '@[specialize] def specMap (f : Nat → Nat) : List Nat → List Nat\n  | [] => []\n  | x :: xs => f x :: specMap f xs\n' > Test/SpB.lean
printf 'import Test.SpB\ndef sh (xs : List Nat) : List Nat := specMap Nat.succ xs\n' > Test/SpA.lean
printf 'import Test.SpA\ndef sk (xs : List Nat) : List Nat := specMap Nat.succ xs\n' > Test/SpM.lean
test_run build Test.SpM
printf 'import Test.SpB\ndef sh (xs : List Nat) : List Nat := xs\n' > Test/SpA.lean
lake_out build -v Test.SpM
match_text "Built Test.SpM" produced.out
printf 'import Test.SpM\n#eval sk [1, 2, 3]\n' > Test/SpCheck.lean
test_cmd_out "[2, 3, 4]" "$LAKE" env lean Test/SpCheck.lean
# ... when its specializations are renumbered (here of core `List.map`)
printf 'def ch (xs : List Nat) : List Nat × List Nat :=\n  (xs.map (· + 1), xs.map (· * 10))\n' > Test/CoA.lean
printf 'import Test.CoA\ndef ck (xs : List Nat) : List Nat := xs.map (· * 10)\n' > Test/CoM.lean
test_run build Test.CoM
printf 'def ch (xs : List Nat) : List Nat × List Nat :=\n  (xs.map (· * 10), xs.map (· + 1))\n' > Test/CoA.lean
lake_out build -v Test.CoM
match_text "Built Test.CoM" produced.out
printf 'import Test.CoM\n#eval ck [1, 2, 3]\n' > Test/CoCheck.lean
test_cmd_out "[10, 20, 30]" "$LAKE" env lean Test/CoCheck.lean
# ... and when the name now denotes another function: a `native_decide` over the importer's code must fail
# as it does from scratch, not prove a false equation
printf '@[specialize] def wrMap (f : Nat → Nat) : List Nat → List Nat\n  | [] => []\n  | x :: xs => f x :: wrMap f xs\n' > Test/WrB.lean
printf 'import Test.WrB\ndef wh (xs : List Nat) : List Nat := wrMap Nat.succ xs\n' > Test/WrA.lean
printf 'import Test.WrA\ndef wk (xs : List Nat) : List Nat := wrMap Nat.succ xs\n' > Test/WrM.lean
test_run build Test.WrM
printf 'import Test.WrB\ndef wh (xs : List Nat) : List Nat := wrMap (· * 10) xs\n' > Test/WrA.lean
printf 'import Test.WrM\ntheorem bad : wk [1, 2, 3] = [10, 20, 30] := by native_decide\n' > Test/WrN.lean
test_err "error: Test/WrN.lean" build -v Test.WrN
match_text "Built Test.WrM" produced.out
# an importee's calling convention: dropping `@&` makes `bf` consume its argument, so the importer's compiled
# code, which still releases it after the call, must be compiled again
printf '@[noinline] def bf (a : @& Array Nat) : Array Nat := a.set! 0 99\n' > Test/BoB.lean
printf 'import Test.BoB\n@[noinline] def bk (n : Nat) : Nat :=\n  let a := Array.replicate 3 n\n  let b := bf a\n  a[0]! * 1000 + b[0]!\n' > Test/BoM.lean
test_run build Test.BoM
printf '@[noinline] def bf (a : Array Nat) : Array Nat := a.set! 0 99\n' > Test/BoB.lean
lake_out build -v Test.BoM
match_text "Built Test.BoM" produced.out
printf 'import Test.BoM\n#eval bk 2\n' > Test/BoCheck.lean
test_cmd_out "2099" "$LAKE" env lean Test/BoCheck.lean
# an importee's own `@[macro_inline]`: the callee is inlined into its callers and no longer compiled on its
# own, so its callers compile again, and no longer evaluate the argument it ignores
printf 'def mi (x y : Nat) : Nat := if x = 42 then x else y\n' > Test/MiB.lean
printf 'import Test.MiB\ndef mk : Nat := mi 42 (dbg_trace "eager"; 0)\n' > Test/MiM.lean
test_run build Test.MiM
printf '@[macro_inline] def mi (x y : Nat) : Nat := if x = 42 then x else y\n' > Test/MiB.lean
lake_out build -v Test.MiM
match_text "Built Test.MiM" produced.out
printf 'import Test.MiM\n#eval mk\n' > Test/MiCheck.lean
test_out "42" env lean Test/MiCheck.lean
no_match_text "eager" produced.out
# an importee's own `@[never_extract]`: its callers must stop sharing one evaluation of a closed application
printf 'def ne (n : Nat) : Nat := dbg_trace s!"ran {n}"; n + 1\n' > Test/NeB.lean
printf 'import Test.NeB\ndef nk : Nat := ne 1 + ne 1\n' > Test/NeM.lean
test_run build Test.NeM
printf '@[never_extract] def ne (n : Nat) : Nat := dbg_trace s!"ran {n}"; n + 1\n' > Test/NeB.lean
lake_out build -v Test.NeM
match_text "Built Test.NeM" produced.out
printf 'import Test.NeM\n#eval nk\n' > Test/NeCheck.lean
test_out "4" env lean Test/NeCheck.lean
test_exp "$(grep -c "ran 1" produced.out)" = 2
# `LAKE_USAGE_CUTOFF` takes Lake's boolean spellings: each of these turns the cutoff off (no `.usage`)
for v in false off no; do
  printf 'def ev := "%s"\n' "$v" > Test/EV.lean
  LAKE_USAGE_CUTOFF=$v test_run build Test.EV
  test_exp ! -f .lake/build/lib/lean/Test/EV.usage
done
# control: a C body change behind a precompiled module's `@[extern]` reaches M only through `libext_X.so`, which
# links `libleanext.so` dynamically, so its bytes and M's trace do not change. Lake with the cutoff off replays M
# too; the cutoff must do the same here, not worse
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
LAKE_USAGE_CUTOFF=0 test_run -d ext build M
printf '#include <stdint.h>\nuint32_t ext_val(void *u) { return 2; }\n' > ext/ext.c
LAKE_USAGE_CUTOFF=0 lake_out -d ext build -v M
match_text "Replayed M" produced.out
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
# a `.usekey` binds the `.olean` bytes Lake recorded, hashed in the read that hashed the artifact, and those are the
# bytes the file has after Lake made it read-only and linked it into the cache
test_exp "$(stat -c %h .lake/build/lib/lean/Test/B.olean)" -ge 2
test_exp ! -w .lake/build/lib/lean/Test/B.olean
printf '%s\n' 'import Lean' 'def main (args : List String) : IO Unit := do' \
  '  IO.println (← Lean.ModuleUsage.fileDigest args[0]!).hex' > ../oleanDigest.lean
d=$("$LAKE" env lean --run ../oleanDigest.lean .lake/build/lib/lean/Test/B.olean)
test_cmd_out "\"olean\":\"$d\"" cat .lake/build/lib/lean/Test/B.usekey
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
test_exp -f .lake/build/lib/lean/Test/B.resolved
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
# as is the rest of what its trace describes: B.ilean or B.c replaced behind Lake's back builds B again, and
# no cache entry takes the replaced bytes
u=4
for f in lib/lean/Test/B.ilean ir/Test/B.c; do
  u=$((u + 1))
  printf 'def a := 1\ntheorem ta : a = 1 := sorry\ndef unrelated := %s\n' $u > Test/A.lean
  # `cat`, not `cp`: the output is a read-only link into the cache, whose mode `cp` would copy
  cat .lake/build/$f > good$u.tmp
  { cat good$u.tmp; printf '\n/* replaced */\n'; } > B.tmp
  mv -f B.tmp .lake/build/$f
  test_out "Built Test.B" build -v Test.B
  test_cmd cmp good$u.tmp .lake/build/$f
  test_cmd_fails grep -rqF -- '/* replaced */' "$LAKE_CACHE_DIR/artifacts"
done
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
# (sed, not jq: entries and traces are pretty-printed, one key per line)
depHash() { sed -n 's/.*"depHash": *"\([0-9a-f]*\)".*/\1/p' "$1"; }
entryArt() { sed -n "s/.*\"$2\": *\"\\([^\"]*\\)\".*/\\1/p" "$1"; }
# a `.usekey` pruned from the cache makes the entry a miss, as a pruned `.usage` does (below): importers
# use a module's `.usage` only with its key, so the module rebuilds, and its rewritten entry names a key again
entry="$LAKE_CACHE_DIR/outputs/test/$(depHash cache3/.lake/build/lib/lean/Test/E.trace).json"
rm "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" k)"
(cd cache7 && test_out "Built Test.E" build -v Test.E)
test_exp -f cache7/.lake/build/lib/lean/Test/E.usekey
test_exp -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" k)"
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
# the same for a pruned `.resolved`: a miss, after which the rewritten entry names one again
mkdir -p cache21/Test cache22/Test
for d in cache21 cache22; do cp lakefile.toml $d/; done
printf 'def x := 21\n' > cache21/Test/X.lean
printf 'def pb := 21\n' > cache21/Test/B.lean
printf 'import Test.B\nimport Test.X\ndef pc := pb + x\n' > cache21/Test/C.lean
(cd cache21 && test_run build Test.C)
entry="$LAKE_CACHE_DIR/outputs/test/$(depHash cache21/.lake/build/lib/lean/Test/B.trace).json"
resolved=$(entryArt "$entry" v)
test_exp -n "$resolved"
rm "$LAKE_CACHE_DIR/artifacts/$resolved"
cp cache21/Test/*.lean cache22/Test/
(cd cache22 && test_out "Built Test.B" build -v Test.C)
test_exp -f cache22/.lake/build/lib/lean/Test/B.resolved
test_exp -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" v)"
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
test_exp -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" v)"
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
test_exp -f cache17b/.lake/build/lib/lean/Test/B.resolved
test_exp -f cache17b/.lake/build/lib/lean/Test/B.usekey
test_exp -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" u)"
test_exp -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" v)"
test_exp -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" k)"
# a pruned `.usekey` with an archive: also a miss
ltarEntry cache20 20
rm "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" k)"
(cd cache20b && test_out "Built Test.B" build -v Test.C)
test_exp -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" k)"
# a build with the cutoff off has other input hashes than one with it on (the setting is in the trace), so
# it never finds a skip's cache entry: it builds, and stores an entry of its own
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
match_text '"l":' "$entry"
cp "$entry" skipentry.json
# a fresh tree with the cutoff off builds SB instead of restoring the skip's outputs
cp cache12/Test/*.lean cache13/Test/
(cd cache13 && LAKE_USAGE_CUTOFF=0 test_out "Built Test.SB" build -v Test.SB)
entryOff="$LAKE_CACHE_DIR/outputs/test/$(depHash cache13/.lake/build/lib/lean/Test/SB.trace).json"
test_exp "$entryOff" != "$entry"
# control: that built entry is restored with the cutoff off
cp cache12/Test/*.lean cache14/Test/
(cd cache14 && LAKE_USAGE_CUTOFF=0 test_out "Reused Test.SB" build -v Test.SB)
# an entry stored with the cutoff off has no usage data, and a fresh tree with the cutoff on does not find it
mkdir -p cache18/Test cache19/Test
for d in cache18 cache19; do cp lakefile.toml $d/; done
printf 'def oa := 1\n' > cache18/Test/OA.lean
cp cache18/Test/OA.lean cache19/Test/
(cd cache18 && LAKE_USAGE_CUTOFF=0 test_run build Test.OA)
(cd cache19 && test_out "Built Test.OA" build -v Test.OA)
test_exp -f cache19/.lake/build/lib/lean/Test/OA.usage
# the skip's entry with an artifact pruned, so it resolves only through its archive: a cutoff-on restore
# unpacks the archive; with the cutoff off, SB looks up only its own entry, which lost the same
# (content-addressed) artifact, so it builds
cp -f skipentry.json "$entry"
rm -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" c)"
cp cache12/Test/*.lean cache15/Test/
(cd cache15 && test_out "Unpacked Test.SB" build -v Test.SB)
rm -f "$LAKE_CACHE_DIR/artifacts/$(entryArt "$entry" c)"
cp cache12/Test/*.lean cache16/Test/
(cd cache16 && LAKE_USAGE_CUTOFF=0 test_out "Built Test.SB" build -v Test.SB)
test_exp "$(depHash cache16/.lake/build/lib/lean/Test/SB.trace)" = "$(depHash cache13/.lake/build/lib/lean/Test/SB.trace)"
# the tree that skipped, with the cutoff off and its sources unchanged since the skip, builds SB rather
# than keep the skip's outputs, as a build of those sources without the cutoff does
printf 'def sa := 1\ndef unrelated := 3\n' > cache12/Test/SA.lean
(cd cache12 && test_out "Replayed Test.SB" build -v Test.SB)
(cd cache12 && LAKE_USAGE_CUTOFF=0 test_out "Built Test.SB" build -v Test.SB)
# with `LAKE_USAGE_CUTOFF` unset the cutoff is off: a stale module whose used constants are unchanged is built
printf 'def sa := 1\ndef unrelated := 4\n' > cache12/Test/SA.lean
(cd cache12 && test_run build -v Test.SB && printf 'def sa := 1\ndef unrelated := 5\n' > Test/SA.lean && \
  env -u LAKE_USAGE_CUTOFF "$LAKE" build -v Test.SB) > default.log 2>&1 || { cat default.log; exit 1; }
match_text "Built Test.SB" default.log
no_match_text "Replayed Test.SB" default.log
test_exp ! -f cache12/.lake/build/lib/lean/Test/SB.usage
test_exp ! -f cache12/.lake/build/lib/lean/Test/SB.resolved

rm -f produced.out
