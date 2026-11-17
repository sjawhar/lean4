#!/usr/bin/env bash
source ../common.sh

./clean.sh

# Tests that the build store memoizes the same jobs, and that a `for` loop over the store
# visits its entries in the order of `BuildKey.quickCmp`. The workspace is `deps`
# (`bar` -> `foo` -> `a`, `b` -> `root`) below a root package whose target `storeKeys` builds
# `bar` and writes the store's keys. `expected.txt` holds the normalized report of a fresh
# build and of a no-op rebuild, and the keys each build wrote.

copy_to_work deps lakefile.lean

# The job lines of a build log without their counters and times, sorted, then the summary.
report() {
  { grep -E '^[^ ]+ \[[0-9]+/[0-9]+\] ' "$1" || true; } \
    | sed -E 's/^([^ ]+) \[[0-9]+\/[0-9]+\] /\1 /; s/ \([0-9][0-9.hms ]*\)$//' | LC_ALL=C sort
  grep -E '^Build completed' "$1"
}

lake_out build -v
report produced.out > report-build.produced.out
test_cmd mv keys.produced.out keys-build.produced.out

lake_out build -v
report produced.out > report-noop.produced.out
test_cmd mv keys.produced.out keys-noop.produced.out

{
  echo "# lake build"
  cat report-build.produced.out
  echo "# store keys after lake build"
  cat keys-build.produced.out
  echo "# lake build (no-op)"
  cat report-noop.produced.out
  echo "# store keys after lake build (no-op)"
  cat keys-noop.produced.out
} > golden.produced.out

test_cmd diff -u --strip-trailing-cr ../expected.txt golden.produced.out
