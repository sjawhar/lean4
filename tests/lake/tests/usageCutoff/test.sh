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
rm -f produced.out
