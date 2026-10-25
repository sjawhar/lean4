#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A write of an artifact cache entry that fails part way must leave nothing under the entry's
# name. Here a file size limit (`ulimit -f`) makes the write fail with EFBIG, as a full disk makes
# it fail with ENOSPC. A partial file under the name would be kept by the next build that caches
# the same output, which maps the output's input to it, and every later restore would serve it.

if [ "$OS" = Windows_NT ]; then
  echo "SKIPPED: no file size limit (ulimit -f) on Windows"
  exit 0
fi

copy_to_work lakefile.lean
export LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
LIMIT_KB=16
# Larger than the limit: 128 KiB of text, and a module whose `.olean` holds a string of 64 KiB of
# random hexadecimal digits (so that its archive, which `lake build -o` packs, stays large)
awk 'BEGIN { for (i = 0; i < 4096; i++) printf "line %010d of the text output\n", i }' > input.txt
printf 'def big : String := "%s"\n' "$(od -An -tx1 -N 32768 /dev/urandom | tr -d ' \n')" > Big.lean

# limited_lake ARGS... -- Lake with file writes limited to $LIMIT_KB KiB, which must make it fail
limited_lake() {
  echo "\$ (ulimit -S -f $LIMIT_KB; lake $*)"
  local rc=0
  (ulimit -S -f $LIMIT_KB; exec "$LAKE" "$@") > limited.out 2>&1 || rc=$?
  cat limited.out
  if [ $rc = 0 ]; then
    echo "FAILURE: Lake did not fail at the file size limit"
    return 1
  fi
  echo "Lake failed (exit code $rc)"
}
# whole_entries CACHE -- each entry in CACHE (temporary files aside) has the bytes of the entry
# of the same name in cache0, which was filled without a limit
whole_entries() {
  for f in "$1"/artifacts/*; do
    [ -e "$f" ] || continue
    case "$f" in *.tmp) continue ;; esac
    test_cmd cmp "$f" "cache0/artifacts/$(basename "$f")"
  done
}

# A text output: its entry is always written. It is built and cached once without a limit, then
# replayed into a new cache with the limit, which stops Lake while it writes the entry.
OUT=.lake/build/out.txt
LAKE_CACHE_DIR="$PWD/cache0" test_run build out
test_cmd cmp input.txt "$OUT"
LAKE_CACHE_DIR="$PWD/cache1" limited_lake build out
whole_entries cache1
# The next build writes the whole entry, and a fresh tree restores it
LAKE_CACHE_DIR="$PWD/cache1" test_run build out
test_cmd cmp input.txt "cache1/artifacts/$(ls cache0/artifacts)"
mkdir t2 && cp lakefile.lean input.txt t2/
LAKE_CACHE_DIR="$PWD/cache1" test_run -d t2 build out
test_cmd cmp input.txt "t2/$OUT"
# Caching the output again where its entry is intact keeps the entry
test_cmd rm -rf cache1/outputs
mkdir t3 && cp lakefile.lean input.txt t3/
LAKE_CACHE_DIR="$PWD/cache1" test_not_out 'does not match its content hash' -d t3 build out
test_exp ! -d cache1/quarantine

# `lake cache unstage` writes each entry from the staging directory (here the module's archive),
# also when the limit stops it
BIG=.lake/build/lib/lean/Big.olean
LAKE_CACHE_DIR="$PWD/cache0" test_run build Big -o outputs.jsonl
LAKE_CACHE_DIR="$PWD/cache0" test_run cache stage outputs.jsonl staging
LAKE_CACHE_DIR="$PWD/cache2" limited_lake cache unstage staging
whole_entries cache2
LAKE_CACHE_DIR="$PWD/cache2" test_run cache unstage staging
for f in staging/*; do
  [ "$(basename "$f")" = outputs.jsonl ] && continue
  test_cmd cmp "$f" "cache2/artifacts/$(basename "$f")"
done

# A module output with the cache on another file system, where the output cannot be hard-linked
# into the cache and its entry is written
OTHER=${LAKE_TEST_OTHER_FS:-/dev/shm}
dev() { stat -c %d "$1" 2> /dev/null || stat -f %d "$1"; }
if [ -d "$OTHER" ] && [ -w "$OTHER" ] && [ "$(dev "$OTHER")" != "$(dev .)" ]; then
  XCACHE="$(mktemp -d "$OTHER/lake-cacheInsertPartial.XXXXXX")"
  trap 'rm -rf "$XCACHE"' EXIT
  LAKE_CACHE_DIR="$XCACHE" limited_lake build Big
  whole_entries "$XCACHE"
  LAKE_CACHE_DIR="$XCACHE" test_run build Big
  test_cmd cmp "$BIG" "$XCACHE/artifacts/$(cat "$BIG.hash").olean"
else
  echo "SKIPPED: the module case needs a writable directory on another file system than the test" \
    "(LAKE_TEST_OTHER_FS, default /dev/shm)"
fi
rm -rf work produced.*
