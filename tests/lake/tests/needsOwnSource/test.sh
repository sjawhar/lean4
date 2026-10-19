#!/usr/bin/env bash
source ../common.sh
./clean.sh

# This test covers issue 13598 for a library's own sources
# https://github.com/leanprover/lean4/issues/13598

# A build of a library collects its modules from their imports. It reads the
# library's sources only after the `needs` and `extraDepTargets` of the library
# have finished. Here `genOwn`, which `Own` needs, writes `Own/Gen.lean` one
# second after it starts, and the root `Own` imports `Own.Gen`.

# With no `Own/Gen.lean` before the build
mkdir -p Own
test_run build Own
./clean.sh

# With an old `Own/Gen.lean` that `genOwn` rewrites
mkdir -p Own
echo "def genValue : Nat := 1" > Own/Gen.lean
test_run build Own

# Cleanup
./clean.sh
