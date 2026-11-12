#!/usr/bin/env bash
source ../common.sh
./clean.sh

# This test covers issue 13598 and its fix, PR 13601
# https://github.com/leanprover/lean4/issues/13598

# Lake reads a module's source only after the `needs` and `extraDepTargets` of
# its library have finished, also when an importer from another library asks
# for the module's header first. Here `genOut`, which `Gen` needs, writes
# `Gen/Out.lean` one second after it starts, and `Main` imports `Gen.Out`.

mkdir -p Gen

# A build of the importing library
test_run build Main
./clean.sh
mkdir -p Gen

# A build of the importing module
test_run build +Main
./clean.sh
mkdir -p Gen

# The header query of an edited file that imports the module (`lake setup-file`)
test_run setup-file Main.lean

# Cleanup
./clean.sh
