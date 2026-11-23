#!/usr/bin/env bash
source ../common.sh

# Tests `Lake.DPHashMap` against `Std.DTreeMap` with random operations (see `Test.lean`).
test_run env lean --run Test.lean
