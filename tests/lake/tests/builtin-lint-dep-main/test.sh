#!/usr/bin/env bash
source ../common.sh

# `lake lint` must name and edit the source file Lake compiles for the linted
# module, not a file of the same module name in another package. The root
# package and its path dependency `dep` both have a `Main.lean` (the root of an
# executable) in a source directory of a library (`.`); the root's `Main` has a
# text-linter warning (`linter.unusedVariables`) and an env-linter finding
# (`linter.dummyMarker`, from `Linters.lean`).

./clean.sh

# `--record-exceptions` edits the sources in place, so work on a copy
copy_to_work lakefile.toml Linters.lean Main.lean dep
root=$(pwd -P)
cp dep/Main.lean dep-Main.lean.orig

# Report mode has findings, so it exits 1, and names the root's `Main.lean`.
test_status_out 1 "rootDummyMarker declaration name ends with 'DummyMarker'" lint --builtin-lint Main
match_pat "^$root/(\./)?Main\.lean:6:6: warning: Variable name \`unusedInRoot\` is not explicitly referenced" produced.out
match_pat "^$root/(\./)?Main\.lean:3:1: error: rootDummyMarker declaration name ends with 'DummyMarker'" produced.out
no_match_pat 'dep/Main\.lean' produced.out

# Asserts that the recorded `set_option` for $1 in `Main.lean` is immediately
# followed by a line mentioning $2.
assert_precedes() {
  echo "? '$1' precedes '$2'"
  if grep -A1 -E "set_option $1 false in" Main.lean | grep -qF -- "$2"; then
    return 0
  else
    echo "FAILURE: '$1' exception was not inserted before '$2'"
    cat Main.lean
    return 1
  fi
}

# Record mode edits only the root's `Main.lean`.
lake_out lint --record-exceptions Main
match_pat "^recording 2 exceptions in $root/(\./)?Main\.lean" produced.out
test_exp "$(grep -c 'recording' produced.out)" = 1
no_match_pat 'dep/Main\.lean' produced.out
test_cmd cmp dep/Main.lean dep-Main.lean.orig
test_exp "$(grep -c -- 'recorded by' Main.lean)" = 2
assert_precedes linter.dummyMarker 'def rootDummyMarker'
assert_precedes linter.unusedVariables 'def rootUnusedVar'

# Re-linting now passes.
lake_out lint --builtin-lint Main
match_pat 'Environment linting passed for Main' produced.out
