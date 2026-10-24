#!/usr/bin/env bash
source ../common.sh

./clean.sh

# Lake's build monitor takes the jobs that the build registers from a queue. Tests that it reports
# every registered job once, in the order of registration, also when it takes them in more than
# one batch.

echo '$ lake build jobs'
if ! "$LAKE" build jobs > produced.out 2>&1; then
  cat produced.out
  exit 1
fi
sed -n 's/.* Ran job \([0-9]*\).*/\1/p' produced.out > jobs.produced.out
seq 0 39999 > jobs.expected.produced.out
test_cmd cmp jobs.expected.produced.out jobs.produced.out

# Cleanup
rm -f produced.out jobs.produced.out jobs.expected.produced.out
