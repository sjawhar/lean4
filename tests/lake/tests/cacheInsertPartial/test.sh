#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A write of an artifact cache entry that fails or stops part way must leave nothing under the
# entry's name. A partial file under the name would be kept by the next build that caches the
# same output, which maps the output's input to it, and every later restore would serve it.
#
# A file size limit (`ulimit -f`) stops the writes here. With SIGXFSZ ignored, a write past the
# limit fails with EFBIG, as a write to a full disk fails with ENOSPC: Lake reports the error,
# and must leave no temporary file either. With the signal's default action, the signal kills
# Lake during the write.

if [ "$OS" = Windows_NT ]; then
  echo "SKIPPED: no file size limit (ulimit -f) on Windows"
  exit 0
fi

copy_to_work lakefile.lean Fallback.lean NoHardLink.c
export LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
LIMIT_KB=16
# Larger than the limit: 128 KiB of text, and a module whose `.olean` holds a string of 64 KiB of
# random hexadecimal digits (so that its archive, which `lake build -o` packs, stays large)
awk 'BEGIN { for (i = 0; i < 4096; i++) printf "line %010d of the text output\n", i }' > input.txt
printf 'def big : String := "%s"\n' "$(od -An -tx1 -N 32768 /dev/urandom | tr -d ' \n')" > Big.lean

# limited_lake ARGS... -- Lake with file writes limited to $LIMIT_KB KiB and SIGXFSZ ignored (an
# ignored signal stays ignored across `exec`), so a write past the limit fails; Lake must fail
limited_lake() {
  echo "\$ (trap '' XFSZ; ulimit -S -f $LIMIT_KB; lake $*)"
  local rc=0
  (trap '' XFSZ; ulimit -S -f $LIMIT_KB; exec "$LAKE" "$@") > limited.out 2>&1 || rc=$?
  cat limited.out
  if [ $rc = 0 ]; then
    echo "FAILURE: Lake did not fail at the file size limit"
    return 1
  fi
  echo "Lake failed (exit code $rc)"
}
# killed_lake ARGS... -- Lake with the same limit, where SIGXFSZ kills it during the write. The
# signal's action is set to the default, which the caller of the test can have changed.
killed_lake() {
  echo "\$ (ulimit -S -f $LIMIT_KB; env --default-signal=XFSZ lake $*)"
  local rc=0
  (ulimit -S -f $LIMIT_KB; exec env --default-signal=XFSZ "$LAKE" "$@") > limited.out 2>&1 || rc=$?
  cat limited.out
  if [ $rc != $((128 + $(kill -l XFSZ))) ]; then
    echo "FAILURE: SIGXFSZ did not stop Lake (exit code $rc)"
    return 1
  fi
  echo "Lake stopped (exit code $rc)"
}
# whole_entries CACHE [KILLED] -- each entry in CACHE has the bytes of the entry of the same name
# in cache0, which was filled without a limit. A temporary file may stay only if KILLED is set:
# a killed Lake cannot remove it.
whole_entries() {
  for f in "$1"/artifacts/*; do
    [ -e "$f" ] || continue
    case "$f" in
      *.tmp)
        if [ -z "${2:-}" ]; then
          echo "FAILURE: a temporary file stayed after a failed write: $f"
          return 1
        fi
        continue ;;
    esac
    test_cmd cmp "$f" "cache0/artifacts/$(basename "$f")"
  done
}

# A text output: its entry is always written. It is built and cached once without a limit, then
# cached into new caches with the limit, which stops Lake while it writes the entry.
OUT=.lake/build/out.txt
LAKE_CACHE_DIR="$PWD/cache0" test_run build out
test_cmd cmp input.txt "$OUT"
TEXT_ENTRY="$(ls cache0/artifacts)"
if env --default-signal=XFSZ true 2> /dev/null; then
  LAKE_CACHE_DIR="$PWD/cache1k" killed_lake build out
  whole_entries cache1k killed
else
  echo "SKIPPED: the kill case needs \`env --default-signal\` (GNU coreutils 8.31 or later)"
fi
LAKE_CACHE_DIR="$PWD/cache1" limited_lake build out
whole_entries cache1
# The next build writes the whole entry, and a fresh tree restores it
LAKE_CACHE_DIR="$PWD/cache1" test_run build out
test_cmd cmp input.txt "cache1/artifacts/$TEXT_ENTRY"
mkdir t2 && cp lakefile.lean input.txt t2/
LAKE_CACHE_DIR="$PWD/cache1" test_run -d t2 build out
test_cmd cmp input.txt "t2/$OUT"
# Caching the output again where its entry is intact keeps the entry
test_cmd rm -rf cache1/outputs
mkdir t3 && cp lakefile.lean input.txt t3/
LAKE_CACHE_DIR="$PWD/cache1" test_not_out 'does not match its content hash' -d t3 build out
test_exp ! -d cache1/quarantine
# An entry with other bytes (here its first 100 bytes) is moved into quarantine, with a warning,
# before its replacement is written; the warning stays when that write fails. Here the output
# `linked`, which has the bytes of `out`, is built: its build writes no bytes (see the lakefile).
test_cmd rm -rf cache1/outputs
test_cmd rm -f "cache1/artifacts/$TEXT_ENTRY"
head -c 100 input.txt > "cache1/artifacts/$TEXT_ENTRY"
LAKE_CACHE_DIR="$PWD/cache1" limited_lake build linked
match_pat "$TEXT_ENTRY: cached artifact does not match its content hash; moved it to: .*/quarantine/$TEXT_ENTRY\.0; caching .*linked\.txt in its place" limited.out
whole_entries cache1
test_cmd cmp -n 100 input.txt "cache1/quarantine/$TEXT_ENTRY.0"
LAKE_CACHE_DIR="$PWD/cache1" test_run build linked
test_cmd cmp input.txt "cache1/artifacts/$TEXT_ENTRY"

# A file at a temporary name that another Lake process could also use is not this process's: Lake
# neither removes it nor fails. Here the file has the name that the run's first temporary file
# would have if such names held only the process ID and a counter, `<entry>.<pid>.0.tmp`, as two
# Lake processes with the same ID (e.g., in two containers that share the cache) would.
mkdir -p cache4/artifacts
(sleep 2; LAKE_CACHE_DIR="$PWD/cache4" exec "$LAKE" build out) > planted.out 2>&1 &
pid=$!
PLANTED="cache4/artifacts/$TEXT_ENTRY.$pid.0.tmp"
echo planted > "$PLANTED"
echo "\$ (sleep 2; lake build out) & # pid $pid, with $PLANTED"
rc=0
wait $pid || rc=$?
cat planted.out
test_exp $rc = 0
test_cmd grep -qx planted "$PLANTED"
test_cmd cmp input.txt "cache4/artifacts/$TEXT_ENTRY"

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
# A staged file without the bytes that its name's hash says (here its first 100 bytes, as a `stage`
# that stopped part way leaves it, which a later `stage` keeps) is not cached, and unstage fails
cp -r staging staging-bad
for f in staging/*; do
  [ "$(basename "$f")" = outputs.jsonl ] && continue
  BAD="$(basename "$f")"
  break
done
head -c 100 "staging/$BAD" > "staging-bad/$BAD"
LAKE_CACHE_DIR="$PWD/cache3" test_err "staging-bad/$BAD: staged artifact does not match its content hash" \
  cache unstage staging-bad
test_exp ! -e "cache3/artifacts/$BAD"

# Where a hard link fails (e.g., the file system cannot hard-link), Lake caches no artifact under the
# name, because no other way publishes a whole file without replacing one: a file created and
# written under the name holds part of it until the write ends, and keeps that part if the write
# fails or stops. On Linux, a preload (NoHardLink.c) makes chosen hard links fail, logs them, and
# makes a write into a chosen name that a process creates fail after 13 bytes. (Lake's output goes
# through a pipe, which that file size limit does not cover.)
if [ "$UNAME" = Linux ]; then
  test_cmd cc -shared -fPIC -o no-hard-link.so NoHardLink.c
  PRELOAD="$PWD/no-hard-link.so"
  # A build caches its output again where the entry is gone but the mapping that names it stays.
  # With the hard link failing, the build succeeds without the entry, and leaves nothing under its
  # name; a fresh tree then builds the output, and caches it.
  mkdir t5 t6 && cp lakefile.lean input.txt t5/ && cp lakefile.lean input.txt t6/
  ENTRY5="$PWD/cache5/artifacts/$TEXT_ENTRY"
  LAKE_CACHE_DIR="$PWD/cache5" test_run -d t5 build out
  test_cmd rm -f "$ENTRY5"
  echo "\$ (preload: links to and writes into $ENTRY5 fail; lake -v -d t5 build out)"
  rc=0
  out=$(env LD_PRELOAD="$PRELOAD" LAKE_TEST_FAIL_LINK="$ENTRY5" LAKE_TEST_FINAL_PATH="$ENTRY5" \
    LAKE_TEST_OPEN_LOG="$PWD/final-open.log" LAKE_CACHE_DIR="$PWD/cache5" \
    "$LAKE" -v -d t5 build out 2>&1) || rc=$?
  printf '%s\n' "$out" > forced.out
  cat forced.out
  test_exp $rc = 0
  match_text "$TEXT_ENTRY: not cached" forced.out
  test_exp ! -e "$ENTRY5"
  test_exp ! -e final-open.log
  whole_entries cache5
  LAKE_CACHE_DIR="$PWD/cache5" test_run -d t6 build out
  test_cmd cmp input.txt "t6/$OUT"
  test_cmd cmp input.txt "$ENTRY5"
  # `lake cache unstage` fails for an artifact whose hard link fails, and leaves nothing under its name
  ENTRY7="$PWD/cache7/artifacts/$BAD"
  echo "\$ (preload: links to and writes into $ENTRY7 fail; lake cache unstage staging)"
  rc=0
  out=$(env LD_PRELOAD="$PRELOAD" LAKE_TEST_FAIL_LINK="$ENTRY7" LAKE_TEST_FINAL_PATH="$ENTRY7" \
    LAKE_TEST_OPEN_LOG="$PWD/final-open.log" LAKE_CACHE_DIR="$PWD/cache7" \
    "$LAKE" cache unstage staging 2>&1) || rc=$?
  printf '%s\n' "$out" > forced.out
  cat forced.out
  test_exp $rc != 0
  match_text "$BAD: not cached" forced.out
  test_exp ! -e "$ENTRY7"
  test_exp ! -e final-open.log
  whole_entries cache7
  # `writeBinFileIfNew` never replaces a file. Here another writer creates the name while the helper
  # is between its check that the name is free and its hard link (the preload holds that check).
  # It keeps the other file, and reports success if its hard link works, or the link's error if the
  # link fails.
  test_cmd env LEAN_PATH="$BUILD_DIR/lib/lean" "$BUILD_DIR/bin/lean" Fallback.lean -c Fallback.c
  test_cmd "$BUILD_DIR/bin/leanc" -o fallback Fallback.c -L"$BUILD_DIR/lib/lean" -lLake_shared
  printf 'mine\n' > mine.bin
  for fail in "" taken; do
    rm -rf stat-barrier taken && mkdir stat-barrier
    echo "\$ (preload: links to '$fail' fail; fallback bin taken mine.bin) &"
    env LD_LIBRARY_PATH="$BUILD_DIR/lib/lean" LD_PRELOAD="$PRELOAD" LAKE_TEST_FAIL_LINK="$fail" \
      LAKE_TEST_STAT_PATH=taken LAKE_TEST_STAT_BARRIER="$PWD/stat-barrier" \
      ./fallback bin taken mine.bin > fallback.out 2>&1 &
    pid=$!
    until [ -e "stat-barrier/$pid" ]; do
      if ! kill -0 $pid 2> /dev/null; then
        cat fallback.out
        echo "FAILURE: the helper stopped before its check that the name is free"
        exit 1
      fi
      sleep 1
    done
    printf 'theirs\n' > taken
    touch stat-barrier/release
    rc=0
    wait $pid || rc=$?
    cat fallback.out
    test_exp $rc = 0
    test_cmd grep -qx theirs taken
    if [ -z "$fail" ]; then
      test_cmd grep -qx ok fallback.out
    else
      test_cmd grep -q '^link failed: ' fallback.out
    fi
    for f in taken.*.tmp; do
      if [ -e "$f" ]; then
        echo "FAILURE: a temporary file stayed: $f"
        exit 1
      fi
    done
  done
  # `writeFileIfNew` writes whole text files (e.g., input-to-output mappings). Where its hard link
  # fails, it renames its temporary file to the name instead, so the file is still written whole.
  printf 'a whole text file\n' > text.in
  rm -f textout
  test_cmd env LD_LIBRARY_PATH="$BUILD_DIR/lib/lean" LD_PRELOAD="$PRELOAD" \
    LAKE_TEST_FAIL_LINK=textout ./fallback text textout text.in
  test_cmd cmp text.in textout
  for f in textout.*.tmp; do
    if [ -e "$f" ]; then
      echo "FAILURE: a temporary file stayed: $f"
      exit 1
    fi
  done
  # A build that restores an output with its saved trace writes the output's mapping where the cache
  # has none (`writeOutputs` with `overwrite := false`), also where hard links into the cache's
  # mapping directory fail, and a fresh tree then restores the output with it
  mkdir t8 t9 && cp lakefile.lean input.txt t8/ && cp lakefile.lean input.txt t9/
  LAKE_CACHE_DIR="$PWD/cache8" test_run -d t8 build out
  test_cmd rm -rf cache8/outputs
  echo "\$ (preload: links into $PWD/cache8/outputs/ fail; lake -d t8 build out)"
  rc=0
  out=$(env LD_PRELOAD="$PRELOAD" LAKE_TEST_FAIL_LINK="$PWD/cache8/outputs/" \
    LAKE_TEST_LINK_LOG="$PWD/link8.log" LAKE_CACHE_DIR="$PWD/cache8" \
    "$LAKE" -d t8 build out 2>&1) || rc=$?
  printf '%s\n' "$out"
  test_exp $rc = 0
  test_exp -s link8.log
  test_exp "$(find cache8/outputs -name '*.json' | wc -l)" = 1
  LAKE_CACHE_DIR="$PWD/cache8" test_not_out 'Built p/out' -d t9 build out
  test_cmd cmp input.txt "t9/$OUT"
  # Where the cache's hard links fail, a build writes no mapping for an output that it did not cache
  # (it would name an artifact that is not in the cache). After the first such failure, the process
  # tries no more hard links into that cache, and writes no temporary copies there.
  mkdir t10 t11 && cp lakefile.lean input.txt Big.lean t10/ && cp lakefile.lean input.txt Big.lean t11/
  ARTS9="$PWD/cache9/artifacts/"
  echo "\$ (preload: links into $ARTS9 fail; lake -v -d t10 build Big)"
  rc=0
  out=$(env LD_PRELOAD="$PRELOAD" LAKE_TEST_FAIL_LINK="$ARTS9" LAKE_TEST_LINK_LOG="$PWD/link9.log" \
    LAKE_TEST_CREATE_PREFIX="$ARTS9" LAKE_TEST_CREATE_LOG="$PWD/create9.log" \
    LAKE_CACHE_DIR="$PWD/cache9" "$LAKE" -v -d t10 build Big 2>&1) || rc=$?
  printf '%s\n' "$out" > forced.out
  cat forced.out
  test_exp $rc = 0
  match_text ": not cached" forced.out
  test_exp "$(find cache9 -name '*.json' | wc -l)" = 0
  test_exp "$(wc -l < link9.log)" = 1
  test_exp ! -e create9.log
  echo "\$ (preload: links into $ARTS9 fail; lake -d t10 build out)"
  rc=0
  env LD_PRELOAD="$PRELOAD" LAKE_TEST_FAIL_LINK="$ARTS9" LAKE_CACHE_DIR="$PWD/cache9" \
    "$LAKE" -d t10 build out || rc=$?
  test_exp $rc = 0
  test_exp "$(find cache9 -name '*.json' | wc -l)" = 0
  test_exp "$(find cache9 -type f | wc -l)" = 0
  # Without failing links, a fresh tree builds the outputs, and caches them
  LAKE_CACHE_DIR="$PWD/cache9" test_out 'Built Big' -d t11 build Big
  test_cmd cmp "t11/$BIG" "cache9/artifacts/$(cat "t11/$BIG.hash").olean"
  # `lake cache unstage --force-overwrite` replaces an artifact by renaming its staged copy to the
  # artifact's name, so it needs no hard link, and the name never lacks a whole file
  LAKE_CACHE_DIR="$PWD/cache10" test_run cache unstage staging
  echo "\$ (preload: links into $PWD/cache10/artifacts/ fail; lake cache unstage staging --force-overwrite)"
  rc=0
  env LD_PRELOAD="$PRELOAD" LAKE_TEST_FAIL_LINK="$PWD/cache10/artifacts/" \
    LAKE_CACHE_DIR="$PWD/cache10" "$LAKE" cache unstage staging --force-overwrite || rc=$?
  test_exp $rc = 0
  for f in staging/*; do
    [ "$(basename "$f")" = outputs.jsonl ] && continue
    test_cmd cmp "$f" "cache10/artifacts/$(basename "$f")"
  done
else
  echo "SKIPPED: the cases with failing hard links need a Linux preload"
fi

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
