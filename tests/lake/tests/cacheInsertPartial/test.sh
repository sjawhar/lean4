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

# On Linux, force the hard-link fallback with a preload that returns EPERM from `uv_fs_link`.
# Both writers load their bytes and wait before calling `writeBinFileIfNew`; the preload holds their
# initial `pathExists` calls, so both take the fallback. It releases writer A first, holds writer B
# until A creates the final path, and checks that A's bytes stay.
if [ "$UNAME" = Linux ]; then
  test_cmd cc -shared -fPIC -o no-hard-link.so NoHardLink.c
  test_cmd env LEAN_PATH="$BUILD_DIR/lib/lean" "$BUILD_DIR/bin/lean" Fallback.lean -c Fallback.c
  test_cmd "$BUILD_DIR/bin/leanc" -o fallback Fallback.c -L"$BUILD_DIR/lib/lean" -lLake_shared
  FALLBACK=./fallback
  head -c 65536 /dev/zero | tr '\0' A > first.bin

  # After a forced hard-link failure, the temporary copy is gone before the fallback opens the
  # final path. The preload records whether that temporary file still exists at that open.
  rm -f space-ifnew space-ready space-start tmp-state.log
  touch space-start
  test_cmd env LD_LIBRARY_PATH="$BUILD_DIR/lib/lean" LD_PRELOAD="$PWD/no-hard-link.so" \
    LAKE_TEST_TMP_STATE_LOG="$PWD/tmp-state.log" LAKE_TEST_STAT_PATH=space-ifnew \
    "$FALLBACK" space-ifnew first.bin space-ready space-start
  test_cmd grep -qx removed tmp-state.log
  head -c 8388608 /dev/zero | tr '\0' B > second.bin
  rm -f ifnew ready-a ready-b start link.log first.out second.out
  mkdir stat-barrier
  env LD_LIBRARY_PATH="$BUILD_DIR/lib/lean" LD_PRELOAD="$PWD/no-hard-link.so" \
    LAKE_TEST_LINK_LOG="$PWD/link.log" \
    LAKE_TEST_STAT_PATH=ifnew LAKE_TEST_STAT_BARRIER="$PWD/stat-barrier" \
    "$FALLBACK" ifnew first.bin ready-a start > first.out 2>&1 &
  a=$!
  env LD_LIBRARY_PATH="$BUILD_DIR/lib/lean" LD_PRELOAD="$PWD/no-hard-link.so" \
    LAKE_TEST_LINK_LOG="$PWD/link.log" \
    LAKE_TEST_STAT_PATH=ifnew LAKE_TEST_STAT_BARRIER="$PWD/stat-barrier" \
    "$FALLBACK" ifnew second.bin ready-b start > second.out 2>&1 &
  b=$!
  until [ -e ready-a ] && [ -e ready-b ]; do
    if ! kill -0 $a 2> /dev/null || ! kill -0 $b 2> /dev/null; then
      cat first.out second.out
      echo "FAILURE: a fallback writer stopped before the start barrier"
      exit 1
    fi
    sleep 1
  done
  touch start
  while :; do
    n=0
    for f in stat-barrier/*; do
      [ -e "$f" ] || continue
      n=$((n + 1))
    done
    [ $n = 2 ] && break
    if ! kill -0 $a 2> /dev/null || ! kill -0 $b 2> /dev/null; then
      cat first.out second.out
      echo "FAILURE: a fallback writer stopped before the stat barrier"
      exit 1
    fi
    sleep 1
  done
  test_exp -e "stat-barrier/$a"
  test_exp -e "stat-barrier/$b"
  echo $a > stat-barrier/first
  touch stat-barrier/release
  rc=0
  wait $a || rc=$?
  wait $b || rc=$?
  cat first.out second.out
  test_exp $rc = 0
  test_cmd cmp first.bin ifnew
  test_exp "$(wc -l < link.log)" = 2
else
  echo "SKIPPED: the forced hard-link fallback uses Linux LD_PRELOAD"
fi

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
