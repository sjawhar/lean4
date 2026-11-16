#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A restored output that a tree replaced afterwards (as `lake env lean -o` does: a new file, while
# the trace and `.hash` still name the cached one) must not be kept by the next cache-on build,
# where its importers compile against it and are published under the cached output's hash.

mkdir -p work && cd work
export LAKE_CACHE_DIR="$PWD/cache" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true

# mkp DIR -- package `p`: `P.X` defines `X.v` (see `setx`), `P.D` proves `X.v = 1`, `P.E` `X.v = 2`
mkp() {
  mkdir -p "$1/P"
  printf 'name = "p"\n\n[[lean_lib]]\nname = "P"\n' > "$1/lakefile.toml"
  printf 'import P.D\nimport P.E\n' > "$1/P.lean"
  printf 'import P.X\ntheorem D.ok : X.v = 1 := rfl\n' > "$1/P/D.lean"
  printf 'import P.X\ntheorem E.ok : X.v = 2 := rfl\n' > "$1/P/E.lean"
}
# setx DIR V -- replace `P/X.lean` (a new file, as a checkout writes it) with `X.v := V`
setx() { rm -f "$1/P/X.lean"; printf 'def X.v : Nat := %s\n' "$2" > "$1/P/X.lean"; }
# test_truth DIR -- DIR builds as its source says (`X.v = 2`): `P.D` fails, `P.E` builds
test_truth() { test_err 'P/D.lean' -d "$1" build P.D; test_run -d "$1" build P.E; }

# `X.olean` compiled from `X.v := 1`, without the cache
mkp u; setx u 1
LAKE_ARTIFACT_CACHE=false test_run -d u build P.X
# A tree built from `X.v := 2` through the cache, whose `X.olean` is then replaced by that one
mkp t; setx t 2
test_run -d t build P.X
test_cmd rm -f t/.lake/build/lib/lean/P/X.olean
test_cmd cp u/.lake/build/lib/lean/P/X.olean t/.lake/build/lib/lean/P/X.olean
test_truth t
# A fresh tree with the same source restores what the cache holds for it
mkp v; setx v 2
test_truth v

X_OLEAN=.lake/build/lib/lean/P/X.olean
entry() { echo "$LAKE_CACHE_DIR/artifacts/$(cat "$1/$X_OLEAN.hash").olean"; }

# The same, with the replacement given the cache entry's modification time (as `cp -p`,
# `rsync -a` or `tar -x` can): a timestamp is not the identity of the file
mkp t2; setx t2 2
test_run -d t2 build P.X
test_cmd rm -f "t2/$X_OLEAN"
test_cmd cp u/$X_OLEAN "t2/$X_OLEAN"
test_cmd touch -r "$(entry t2)" "t2/$X_OLEAN"
test_truth t2

# A tree whose own `X.olean` is intact but no longer the cache entry, while the entry itself was
# replaced by other contents under its name: the tree must keep its file, not link it to the entry
mkp t3; setx t3 2
test_run -d t3 build P.X
test_cmd cp "t3/$X_OLEAN" x.genuine
test_cmd cp "t3/$X_OLEAN" x.copy
test_cmd rm -f "t3/$X_OLEAN"
test_cmd mv x.copy "t3/$X_OLEAN"
ENTRY="$(entry t3)"
test_cmd cp u/$X_OLEAN "$ENTRY.new"
test_cmd mv -f "$ENTRY.new" "$ENTRY"
test_truth t3
test_cmd cmp x.genuine "t3/$X_OLEAN"
# The bad entry is in quarantine, and the tree's next re-cache put its genuine file back under the
# entry's name, so a fresh tree restores genuine bytes
test_exp -f "$LAKE_CACHE_DIR/quarantine/$(basename "$ENTRY").0"
test_cmd cmp x.genuine "$ENTRY"
mkp v3; setx v3 2
test_truth v3

# A tree whose intact `X.olean` is not the cache entry, while the entry cannot be read: the tree
# keeps its file and the build says why it did not link it to the entry
mkp t4; setx t4 2
test_run -d t4 build P.X
test_cmd cp "t4/$X_OLEAN" x.copy
test_cmd rm -f "t4/$X_OLEAN"
test_cmd mv x.copy "t4/$X_OLEAN"
ENTRY="$(entry t4)"
test_cmd chmod 000 "$ENTRY"
if cat "$ENTRY" > /dev/null 2>&1; then
  echo "SKIPPED: the entry is still readable (running as root?)"
else
  test_err 'could not read the cache entry' -d t4 build P.D
  test_run -d t4 build P.E
  test_cmd cmp x.genuine "t4/$X_OLEAN"
fi
test_cmd chmod 444 "$ENTRY"
