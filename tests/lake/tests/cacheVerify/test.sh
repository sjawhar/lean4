#!/usr/bin/env bash
source ../common.sh

./clean.sh

# Test that Lake checks each artifact it restores from its local artifact cache against the
# content hash the artifact was resolved by. A mismatched cache entry fails the build loudly, is
# moved into the cache's `quarantine` directory, and a retry rebuilds. A tree whose own
# build-directory file shares the inode of such an entry (the tree that filled the cache) does not
# republish the corrupt bytes under a fresh hash.

TEST_DIR="$(norm_path "$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &> /dev/null && pwd)")"
WORK_DIR="$TEST_DIR/work"
CACHE_DIR="$WORK_DIR/cache"
ARTS_DIR="$CACHE_DIR/artifacts"
QUARANTINE_DIR="$CACHE_DIR/quarantine"

# Share one local cache between several copies ("trees") of the test package, configured through
# the environment alone, and restore every artifact into each tree's build directory
export LAKE_CACHE_DIR="$CACHE_DIR"
export LAKE_ARTIFACT_CACHE=true
export LAKE_RESTORE_ARTIFACTS=true

MISMATCH_MSG='does not match its content hash'
RECACHE_MSG='does not match its trace'

OLEAN=.lake/build/lib/lean/Test/Basic.olean
BASIC_TRACE=.lake/build/lib/lean/Test/Basic.trace
GENUINE="$WORK_DIR/genuine.olean"

# Empties the shared cache and removes every tree
reset_work() { rm -rf "$WORK_DIR"; mkdir -p "$WORK_DIR"; }

# Creates a fresh tree named `$1`
new_tree() {
  rm -rf "$WORK_DIR/$1"
  mkdir -p "$WORK_DIR/$1"
  cp -r lakefile.toml Test.lean Test "$WORK_DIR/$1/"
}

# Prints the path of tree `$1`'s build-directory file `$2`
in_tree() { echo "$WORK_DIR/$1/$2"; }

# Prints the cache entry that build-directory file `$1` (with cache extension `$2`) was cached
# under, according to the file's `.hash`
entry_of() { echo "$ARTS_DIR/$(cat "$1.hash").$2"; }

# Flips every bit of the first byte of file `$1`, in place
flip_byte() {
  local b
  b=$(od -An -tu1 -N1 "$1" | tr -d ' ')
  printf "$(printf '\\%03o' $((b ^ 255)))" | dd of="$1" bs=1 count=1 conv=notrunc 2> /dev/null
}

# Corrupts cache entry `$1` in place (as a disk error would). Any tree whose build-directory file
# is a hard link to the entry sees the corruption too.
corrupt_in_place() {
  echo "# corrupt $1 in place"
  chmod u+w "$1"
  flip_byte "$1"
  chmod a-w "$1"
}

# Replaces cache entry `$1` with a copy of itself with one byte flipped (as a non-atomic writer
# or a copy of an already-bad entry would), leaving any hard-linked tree file intact
corrupt_copy() {
  echo "# replace $1 with a corrupted copy"
  cp "$1" "$1.tmp"
  chmod u+w "$1.tmp"
  flip_byte "$1.tmp"
  mv -f "$1.tmp" "$1"
}

# Replaces cache entry `$1` with a truncated copy of itself
truncate_copy() {
  echo "# replace $1 with a truncated copy"
  head -c "$(( $(wc -c < "$1") / 2 ))" "$1" > "$1.tmp"
  mv -f "$1.tmp" "$1"
}

# Checks that `$1` copies of cache entry `$2` (by file name) are in quarantine
test_quarantined() {
  expected="$1"; name="$(basename "$2")"
  actual="$({ ls -1 "$QUARANTINE_DIR" 2> /dev/null || true; } | { grep -cF "$name." || true; })"
  echo "? quarantined copies of $name ($actual) = $expected"
  test "$actual" = "$expected"
}

# Records the cache's mappings and artifact names
snapshot_cache() {
  rm -rf "$WORK_DIR/outputs.orig"
  cp -r "$CACHE_DIR/outputs" "$WORK_DIR/outputs.orig"
  ls -1 "$ARTS_DIR" > "$WORK_DIR/artifacts.orig"
}

# Checks that the cache's mappings are those recorded by `snapshot_cache`, and that every artifact
# name in the cache was recorded then
test_cache_unchanged() {
  test_cmd diff -r "$WORK_DIR/outputs.orig" "$CACHE_DIR/outputs"
  ls -1 "$ARTS_DIR" > "$WORK_DIR/artifacts.now"
  test_cmd_eq '' comm -13 "$WORK_DIR/artifacts.orig" "$WORK_DIR/artifacts.now"
}

echo "# INTACT RESTORE"

# (f) An intact restore still succeeds without rebuilding anything (`--no-build`), restores
# genuine bytes, and quarantines nothing
reset_work
new_tree A
test_run -d "$WORK_DIR/A" build
new_tree B
test_run -d "$WORK_DIR/B" build --no-build
test_cmd cmp "$(in_tree A $OLEAN)" "$(in_tree B $OLEAN)"
test_exp ! -e "$QUARANTINE_DIR"

echo "# CORRUPTED OLEAN (FLIPPED BYTE)"

# (a) A restore of an `.olean` whose cache entry has a flipped byte fails loudly, naming the
# module and the artifact, instead of restoring the corrupted bytes
reset_work
new_tree A
test_run -d "$WORK_DIR/A" build
test_cmd cp "$(in_tree A $OLEAN)" "$GENUINE"
ENTRY="$(entry_of "$(in_tree A $OLEAN)" olean)"
corrupt_copy "$ENTRY"
new_tree B
test_err "$MISMATCH_MSG" -d "$WORK_DIR/B" build
match_text 'Test.Basic' produced.out
match_text "$ENTRY" produced.out
no_match_text 'Built Test' produced.out
# (d) The bad entry is moved into quarantine (with its bytes kept), and the failing tree keeps
# neither the artifact nor a trace that a retry could replay
test_exp ! -e "$ENTRY"
test_quarantined 1 "$ENTRY"
test_exp ! -e "$(in_tree B $OLEAN)"
test_exp ! -e "$(in_tree B $OLEAN).hash"
test_exp ! -e "$(in_tree B $BASIC_TRACE)"

# (e) Another tree sharing the cache does not restore the bad entry: it rebuilds the module
new_tree C
test_out 'Built Test.Basic' -d "$WORK_DIR/C" build
test_cmd cmp "$GENUINE" "$(in_tree C $OLEAN)"

# (k) Quarantining the same entry name a second time keeps both copies
test_cmd rm -f "$ENTRY"
test_cmd cp "$QUARANTINE_DIR/$(ls -1 "$QUARANTINE_DIR")" "$ENTRY"
new_tree D
test_err "$MISMATCH_MSG" -d "$WORK_DIR/D" build
test_exp ! -e "$ENTRY"
test_quarantined 2 "$ENTRY"

# (d) A plain retry in the failed tree then rebuilds the module, and caches the genuine bytes
# under their real hash
test_out 'Built Test.Basic' -d "$WORK_DIR/B" build
test_cmd cmp "$GENUINE" "$(in_tree B $OLEAN)"
test_cmd cmp "$GENUINE" "$ENTRY"
test_exp "$(entry_of "$(in_tree B $OLEAN)" olean)" = "$ENTRY"
test_run -d "$WORK_DIR/B" build --no-build

echo "# CORRUPTED OLEAN (TRUNCATED)"

# (b) The same for a truncated cache entry
reset_work
new_tree A
test_run -d "$WORK_DIR/A" build
test_cmd cp "$(in_tree A $OLEAN)" "$GENUINE"
ENTRY="$(entry_of "$(in_tree A $OLEAN)" olean)"
truncate_copy "$ENTRY"
new_tree B
test_err "$MISMATCH_MSG" -d "$WORK_DIR/B" build
match_text 'Test.Basic' produced.out
match_text "$ENTRY" produced.out
# (d)
test_exp ! -e "$ENTRY"
test_quarantined 1 "$ENTRY"
test_exp ! -e "$(in_tree B $BASIC_TRACE)"
test_out 'Built Test.Basic' -d "$WORK_DIR/B" build
test_cmd cmp "$GENUINE" "$(in_tree B $OLEAN)"
test_cmd cmp "$GENUINE" "$ENTRY"

echo "# CORRUPTED SHARED LIBRARY (NON-MODULE ARTIFACT)"

# (c) The same for a non-module artifact: a precompiled module's shared library
reset_work
new_tree A
test_run -d "$WORK_DIR/A" build
SO="$(cd "$WORK_DIR/A" && find .lake/build -name "*Basic*.$SHARED_LIB_EXT")"
test_exp -n "$SO"
ENTRY="$(entry_of "$(in_tree A "$SO")" "$SHARED_LIB_EXT")"
corrupt_copy "$ENTRY"
new_tree B
test_err "$MISMATCH_MSG" -d "$WORK_DIR/B" build
match_text "$ENTRY" produced.out
match_text "$(basename "$SO")" produced.out
# (d) The entry is quarantined, and the tree keeps neither the file, its hash, nor its trace
test_exp ! -e "$ENTRY"
test_quarantined 1 "$ENTRY"
test_exp ! -e "$(in_tree B "$SO")"
test_exp ! -e "$(in_tree B "$SO").hash"
test_exp ! -e "$(in_tree B "$SO").trace"
test_run -d "$WORK_DIR/B" build
test_cmd cmp "$(in_tree B "$SO")" "$(entry_of "$(in_tree B "$SO")" "$SHARED_LIB_EXT")"
test_run -d "$WORK_DIR/B" build --no-build

# The tree that filled the cache shares the inode of the shared library's entry, so corrupting the
# entry in place corrupts its file too. Once another tree's restore has quarantined the entry, the
# filling tree's next build must not re-cache that file under a fresh hash: it warns, moves its
# copy into quarantine, and rebuilds.
reset_work
new_tree A
test_run -d "$WORK_DIR/A" build
ENTRY="$(entry_of "$(in_tree A "$SO")" "$SHARED_LIB_EXT")"
corrupt_in_place "$ENTRY"
test_cmd cp "$ENTRY" "$WORK_DIR/corrupt.$SHARED_LIB_EXT"
new_tree B
test_err "$MISMATCH_MSG" -d "$WORK_DIR/B" build
test_quarantined 1 "$ENTRY"
test_out "$RECACHE_MSG" -d "$WORK_DIR/A" build
match_text "$(in_tree A "$SO")" produced.out
test_quarantined 2 "$ENTRY"
test_cmd_fails cmp -s "$WORK_DIR/corrupt.$SHARED_LIB_EXT" "$(in_tree A "$SO")"
test_cmd cmp "$(in_tree A "$SO")" "$(entry_of "$(in_tree A "$SO")" "$SHARED_LIB_EXT")"
test_run -d "$WORK_DIR/B" build
test_cmd cmp "$(in_tree A "$SO")" "$(in_tree B "$SO")"

echo "# REPUBLISH, FILLING TREE FIRST"

# (j) Fill the cache from tree A, corrupt the `.olean` entry in place (so A's hard-linked file is
# corrupt too), and fail tree B's restore. A's next build must warn, quarantine its own copy and
# rebuild rather than re-cache its corrupt file under a fresh hash; B's next build then restores
# A's rebuilt (genuine) bytes. No mapping ever names another hash, and no new artifact appears.
reset_work
new_tree A
test_run -d "$WORK_DIR/A" build
test_cmd cp "$(in_tree A $OLEAN)" "$GENUINE"
ENTRY="$(entry_of "$(in_tree A $OLEAN)" olean)"
snapshot_cache
corrupt_in_place "$ENTRY"
new_tree B
test_err "$MISMATCH_MSG" -d "$WORK_DIR/B" build
test_quarantined 1 "$ENTRY"
test_cache_unchanged
test_out "$RECACHE_MSG" -d "$WORK_DIR/A" build
match_text 'Test.Basic:' produced.out
match_text "$(in_tree A $OLEAN)" produced.out
test_quarantined 2 "$ENTRY"
test_cache_unchanged
test_run -d "$WORK_DIR/B" build
test_cache_unchanged
test_cmd cmp "$GENUINE" "$(in_tree A $OLEAN)"
test_cmd cmp "$GENUINE" "$(in_tree B $OLEAN)"
test_cmd cmp "$GENUINE" "$ENTRY"

echo "# REPUBLISH, RESTORING TREE FIRST"

# (j') The same, but tree B retries (and rebuilds, re-caching genuine bytes under the original
# hash) before tree A builds again. The mappings still name only the original hashes and no new
# artifact appears. Tree A's trace then resolves to the new entry, which its corrupt file (the
# old, quarantined inode) no longer shares a modification time with: A restores the entry over it.
reset_work
new_tree A
test_run -d "$WORK_DIR/A" build
test_cmd cp "$(in_tree A $OLEAN)" "$GENUINE"
ENTRY="$(entry_of "$(in_tree A $OLEAN)" olean)"
snapshot_cache
corrupt_in_place "$ENTRY"
new_tree B
test_err "$MISMATCH_MSG" -d "$WORK_DIR/B" build
test_quarantined 1 "$ENTRY"
test_out 'Built Test.Basic' -d "$WORK_DIR/B" build
test_cache_unchanged
test_cmd cmp "$GENUINE" "$(in_tree B $OLEAN)"
test_out 'does not match the cache entry its trace names' -d "$WORK_DIR/A" build
no_match_text "$RECACHE_MSG" produced.out
test_cache_unchanged
test_cmd cmp "$GENUINE" "$(in_tree A $OLEAN)"
test_cmd cmp "$GENUINE" "$ENTRY"

echo "# REPUBLISH OF AN ARCHIVE"

# A tree that packed a `.ltar` (here through `-o`) shares its inode with the archive's cache
# entry too, and a build trace records no archive descriptor. Corrupt that entry in place and
# remove the module's `.olean` entry, so that tree's next build re-caches its outputs: it must
# compare its `.ltar` with the hash recorded when it was packed, warn, move its copy into
# quarantine and rebuild, rather than cache the corrupt archive under a fresh hash and map it.
LTAR=.lake/build/ir/Test/Basic.ltar
reset_work
new_tree A
test_run -d "$WORK_DIR/A" build -o "$WORK_DIR/outputs.jsonl"
test_exp -f "$(in_tree A $LTAR)"
ENTRY="$(entry_of "$(in_tree A $LTAR)" ltar)"
snapshot_cache
corrupt_in_place "$ENTRY"
test_cmd rm -f "$(entry_of "$(in_tree A $OLEAN)" olean)"
test_out "$RECACHE_MSG" -d "$WORK_DIR/A" build
match_text "$(in_tree A $LTAR)" produced.out
test_cache_unchanged

echo "# CONCURRENT QUARANTINE"

# (k) If another process moves the bad entry into quarantine after this one hashed it but before
# this one could move it, this one still fails with the mismatch error. A named pipe stands in for
# the entry so that the race is deterministic: the writer serves corrupted bytes and removes the
# entry before closing, so the reader sees end-of-file only once the entry is gone.
if command -v mkfifo > /dev/null; then
  reset_work
  new_tree A
  test_run -d "$WORK_DIR/A" build
  ENTRY="$(entry_of "$(in_tree A $OLEAN)" olean)"
  test_cmd rm -f "$ENTRY"
  test_cmd mkfifo "$ENTRY"
  timeout 60 bash -c 'exec 3> "$1"; printf corrupted >&3; rm -f "$1"; exec 3>&-' _ "$ENTRY" &
  WRITER_PID=$!
  new_tree B
  test_err "$MISMATCH_MSG" -d "$WORK_DIR/B" build
  match_text "$ENTRY" produced.out
  test_cmd wait "$WRITER_PID"
  test_exp ! -e "$ENTRY"
  test_quarantined 0 "$ENTRY"
  test_out 'Built Test.Basic' -d "$WORK_DIR/B" build
  test_exp -f "$(in_tree B $OLEAN)"
  test_cmd cmp "$(in_tree A $OLEAN)" "$(in_tree B $OLEAN)"
fi

# Cleanup
rm -rf "$WORK_DIR"
