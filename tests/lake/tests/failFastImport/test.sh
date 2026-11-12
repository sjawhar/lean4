#!/usr/bin/env bash
source ../common.sh

./clean.sh

echo "# TEST: without --fail-fast, the importer of the gated library builds"
test_err "Some required targets logged failures" build
test_exp -f .lake/build/lib/lean/Slow.olean
test_exp -f .lake/build/lib/lean/Importer.olean

./clean.sh

echo "# TEST: under --fail-fast, the importer of a canceled module is canceled, not a bad import"
test_err "Some required targets logged failures" build --fail-fast
test_exp ! -f .lake/build/lib/lean/Slow.olean
test_exp ! -f .lake/build/lib/lean/Importer.olean
if grep -E 'bad import' produced.out; then
  echo "FAILURE: cancellation misreported as a bad import"
  exit 1
fi
if grep -E '^- (Slow|Importer)$' produced.out; then
  echo "FAILURE: canceled job listed as a failure"
  exit 1
fi
# The importer is reported as canceled: neither a failure nor a success.
test_exp -n "$(grep -E '^⊘ .*Canceled Importer$' produced.out)"
if grep -E '(✔|✖) .*Importer$' produced.out; then
  echo "FAILURE: canceled importer reported as built or failed"
  exit 1
fi

./clean.sh
