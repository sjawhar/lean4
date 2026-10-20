# The modules `First`, `Rev`, `After` and `Ir` of `Collide` each import a kernel constant and a compiler-generated
# name (`extraConstNames`) that are equal, from two different modules. `Check.lean` checks that every name of the
# package's modules resolves to the module stock Lean resolves it to.
rm -rf .lake
lake build
lake env lean Check.lean

# Conflicting imported declarations are reported with stock Lean's message: the conflict met first when visiting
# the modules in order, attributed to the first module that declares the name or generates it in its IR. `Gen`
# generates `qux` in its IR, `M1` and `M3` declare `qux` differently, and `M1` and `M2` declare `alpha` differently.
capture_fail lake lean Collide/ConflictGen.lean
check_out_contains "import Collide.M3 failed, environment already contains 'qux' from Collide.Gen"
capture_fail lake lean Collide/ConflictOrder.lean
check_out_contains "import Collide.M2 failed, environment already contains 'alpha' from Collide.M1"
