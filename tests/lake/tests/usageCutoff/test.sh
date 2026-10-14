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
printf 'macro "mk" : command => `(def hyg := 5)\nmk\ndef h := 1\ndef unrelatedH := 1\n' > Test/H.lean
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
printf '{' > .lake/build/lib/lean/Test/B.usekey
test_out "Test/B.usekey" build Test.B
# a key is bound to its module's .olean: an .olean rewritten behind Lake's back (e.g. by another
# toolchain, which keeps the old sidecars) makes the module build normally
printf 'def a := 2\ntheorem ta : a = 2 := rfl\ndef unrelated := 6\n' > Test/A.lean
printf 'x' >> .lake/build/lib/lean/Test/B.olean
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
rm -f produced.out
