#!/usr/bin/env bash
source ../common.sh
./clean.sh
mkdir -p Test
printf 'def a := 1\ntheorem ta : a = 1 := sorry\n' > Test/A.lean
printf 'import Test.A\ndef b := a + 1\n' > Test/B.lean
printf 'import Test.A\nexample : a = 1 := rfl\n' > Test/C.lean
printf 'import Test.A\n#print axioms ta\n' > Test/D.lean
test_run build Test.B Test.C Test.D
test_exp -f .lake/build/lib/lean/Test/B.usage
test_cmd_out '"Test.A"' cat .lake/build/lib/lean/Test/B.usage
rm -f produced.out
