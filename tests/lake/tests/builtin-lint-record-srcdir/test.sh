#!/usr/bin/env bash
source ../common.sh

# Exercises `lake lint --record-exceptions` on a library with `srcDir = "./src"`
# whose module has both text-linter (`linter.unusedVariables`) and env-linter
# (`linter.dummyMarker`, defined in `Linters.lean`) warnings. Text and env
# records must name the same file, so that one pass writes all of them with
# line numbers taken from the unedited file. Two names for one file would make
# two passes, and the second pass would use line numbers that the first pass
# made stale (`src/Violations.lean` puts an env-linter declaration after the
# text-linter one so that either order shows it).

./clean.sh

# `--record-exceptions` edits the source in place, so work on a copy
copy_to_work lakefile.toml Linters.lean src

marker='recorded by'

# Asserts the recorded `set_option` for $1 is immediately followed by a line
# mentioning $2 (i.e. it was inserted directly before that declaration).
assert_precedes() {
  echo "? '$1' precedes '$2'"
  if grep -A1 -E "set_option $1 false in" src/Violations.lean | grep -qF -- "$2"; then
    return 0
  else
    echo "FAILURE: '$1' exception was not inserted before '$2'"
    cat src/Violations.lean
    return 1
  fi
}

# --- Baseline: the violations are present before recording. ---
lake_out lint --builtin-lint Violations || true
match_pat 'Variable name `unusedLocal` is not explicitly referenced' produced.out
match_pat 'firstDummyMarker' produced.out
match_pat 'secondDummyMarker' produced.out

# --- Record exceptions: one pass over one file records all three. ---
lake_out lint --record-exceptions Violations
match_pat 'recording 3 exceptions in .*src/Violations\.lean' produced.out
test_exp "$(grep -c 'recording' produced.out)" = 1
test_exp "$(grep -c -- "$marker" src/Violations.lean)" = 3
assert_precedes 'linter.dummyMarker' 'def firstDummyMarker'
assert_precedes 'linter.unusedVariables' 'def unusedVarHere'
assert_precedes 'linter.dummyMarker' 'def secondDummyMarker'

# --- Re-linting now passes: every warning is silenced. ---
lake_out lint --builtin-lint Violations || true
match_pat 'Environment linting passed for Violations' produced.out
no_match_pat 'is not explicitly referenced' produced.out
no_match_pat "declaration name ends with 'DummyMarker'" produced.out
