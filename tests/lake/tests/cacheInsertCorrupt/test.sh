#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A build that caches an output whose name a file with other bytes already has in the artifact
# cache (here: the first part of the output, as a write that stopped part way leaves it) must not
# keep that file and map the output's input to it: it moves the file into quarantine, with a
# warning, and caches the output in its place. Files that do have the output's bytes are kept.

mkdir -p work && cd work
export LAKE_CACHE_DIR="$PWD/cache" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true

# mkp DIR -- package `p`: `P.Y` imports `P.X`
mkp() {
  mkdir -p "$1/P"
  printf 'name = "p"\ndefaultTargets = ["P"]\n\n[[lean_lib]]\nname = "P"\n' > "$1/lakefile.toml"
  printf 'import P.Y\n' > "$1/P.lean"
  printf 'def X.v : Nat := 1\n' > "$1/P/X.lean"
  printf 'import P.X\ntheorem Y.ok : X.v = 1 := rfl\n' > "$1/P/Y.lean"
}
X_OLEAN=.lake/build/lib/lean/P/X.olean

# A tree fills the cache
mkp t1
test_run -d t1 build
test_cmd cp "t1/$X_OLEAN" x.genuine
ENTRY="$LAKE_CACHE_DIR/artifacts/$(cat "t1/$X_OLEAN.hash").olean"
# The entry is replaced by a new file with its first 100 bytes, and the mappings are removed, so
# that the next tree compiles `P.X` again and caches its output
test_cmd rm -f "$ENTRY"
head -c 100 x.genuine > "$ENTRY"
test_cmd chmod 444 "$ENTRY"
test_cmd rm -rf "$LAKE_CACHE_DIR/outputs"
mkp t2
test_out 'cached artifact does not match its content hash' -d t2 build
test_cmd cmp x.genuine "$ENTRY"
test_exp -f "$LAKE_CACHE_DIR/quarantine/$(basename "$ENTRY").0"
# A fresh tree restores the output's bytes
mkp t3
test_run -d t3 build
test_cmd cmp x.genuine "t3/$X_OLEAN"

# Caching outputs whose entries are intact (none of them is the tree's own file) keeps the entries
test_cmd rm -rf "$LAKE_CACHE_DIR/outputs"
mkp t4
test_not_out 'does not match its content hash' -d t4 build
test_cmd cmp x.genuine "$ENTRY"
test_exp ! -e "$LAKE_CACHE_DIR/quarantine/$(basename "$ENTRY").1"
rm -rf work produced.*
