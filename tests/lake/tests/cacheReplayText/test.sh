#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A text output (hashed as text) changed in the build directory after it was built, then replayed
# by a cache-on build with nothing cached for it: the build must compare it with the hash its trace
# records, move it into quarantine and rebuild it, including when it is not valid UTF-8.

copy_to_work lakefile.lean
export LAKE_ARTIFACT_CACHE=true
OUT=.lake/build/out.txt

echo hello > input.txt
LAKE_CACHE_DIR="$PWD/cache1" test_run build
test_cmd cmp input.txt "$OUT"

# Other valid text
test_cmd rm -f "$OUT"
echo other > "$OUT"
LAKE_CACHE_DIR="$PWD/cache2" test_out 'does not match its trace' build
test_cmd cmp input.txt "$OUT"

# Bytes that are not UTF-8
test_cmd rm -f "$OUT"
printf '\377bad' > "$OUT"
LAKE_CACHE_DIR="$PWD/cache3" test_out 'does not match its trace' build
match_text 'not UTF-8 text' produced.out
test_cmd cmp input.txt "$OUT"
