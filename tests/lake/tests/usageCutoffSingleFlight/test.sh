#!/usr/bin/env bash
source ../common.sh

./clean.sh
copy_to_work lakefile.lean

# Two readers of the same valid sidecar must both receive its parsed value.
test_run build matchingReaders ownUsageReleasesPending racyStampReloads

# Two readers begin together. The long valid-UTF-8 prefix keeps the first parser in flight
# long enough for the second reader to attach to its pending entry. The malformed JSON emits one
# warning only when parsing is single-flight; both jobs must finish instead of hanging on failure.
dd if=/dev/zero bs=1048576 count=16 2>/dev/null | LC_ALL=C tr '\000' ' ' > invalid.usage
printf '{' >> invalid.usage
rc=0
timeout 60 "$LAKE" build -v failedReaders > failure.log 2>&1 || rc=$?
cat failure.log
test_exp "$rc" = 0
test_exp "$(grep -Ec 'invalid\.usage: .*unexpected end of input' failure.log)" = 1
