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
printf '{"version":1,"noskip":false,"moduleDigest":"0000000000000000","own":[],"used":[[[true],[]]],"extra":[]}' > .lake/build/lib/lean/Test/HU.usage
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

rm -f produced.out
