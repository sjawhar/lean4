#!/usr/bin/env bash
source ../common.sh

# `lake lint` must name the source file that exists, also when the first source
# directory that holds a module's root does not hold the module:
#   * `Foo.Test`, of library `FooTest` (srcDir `test`), shares the root `Foo`
#     with library `Foo` (srcDir `.`), which comes first in the search path;
#   * `Tool`, the root of executable `tool`, is in `exe`, which no library uses.
# Report mode must print `test/Foo/Test.lean` and `exe/Tool.lean` for both kinds
# of warning (text linter `linter.unusedVariables`, env linter
# `linter.dummyMarker` from `Linters.lean`), and record mode must edit them.

./clean.sh

# `--record-exceptions` edits the sources in place, so work on a copy
copy_to_work lakefile.toml Linters.lean Foo.lean test exe
root=$(pwd -P)

# check_report MODULE FILE UNUSED DECL: the report of MODULE names FILE (an
# existing file under the package) for the unused variable UNUSED and for the
# env-linter finding on DECL.
check_report() {
  lake_out lint --builtin-lint "$1" || true
  match_pat "^$root/(\./)?$2:6:6: warning: Variable name \`$3\` is not explicitly referenced" produced.out
  match_pat "^$root/(\./)?$2:3:1: error: $4 declaration name ends with 'DummyMarker'" produced.out
  no_match_pat 'could not' produced.out
}
check_report Foo.Test test/Foo/Test.lean unusedInTest testDummyMarker
check_report Tool exe/Tool.lean unusedInTool toolDummyMarker

# Asserts that FILE ($1) has the recorded `set_option` for $2 immediately
# before a line mentioning $3.
assert_precedes() {
  echo "? '$2' precedes '$3' in $1"
  if grep -A1 -E "set_option $2 false in" "$1" | grep -qF -- "$3"; then
    return 0
  else
    echo "FAILURE: '$2' exception was not inserted before '$3'"
    cat "$1"
    return 1
  fi
}

# Record mode locates both files, records every warning and succeeds.
lake_out lint --record-exceptions Foo.Test Tool
match_pat 'recording 2 exceptions in .*test/Foo/Test\.lean' produced.out
match_pat 'recording 2 exceptions in .*exe/Tool\.lean' produced.out
no_match_pat 'could not' produced.out
for f in test/Foo/Test.lean exe/Tool.lean; do
  test_exp "$(grep -c -- 'recorded by' "$f")" = 2
done
test_exp ! -e Foo/Test.lean
assert_precedes test/Foo/Test.lean linter.dummyMarker 'def testDummyMarker'
assert_precedes test/Foo/Test.lean linter.unusedVariables 'def testUnusedVar'
assert_precedes exe/Tool.lean linter.dummyMarker 'def toolDummyMarker'
assert_precedes exe/Tool.lean linter.unusedVariables 'def toolUnusedVar'

# Re-linting now passes for both modules.
for m in Foo.Test Tool; do
  lake_out lint --builtin-lint "$m"
  match_pat "Environment linting passed for $m" produced.out
done
