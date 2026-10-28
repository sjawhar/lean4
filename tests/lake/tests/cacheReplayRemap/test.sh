#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A tree whose outputs were overwritten with those of other contents (as `lake env lean -o` does)
# keeps a trace that matches its source. A cache-on build that replays that trace must not publish
# the tree's files under the module's input hash, where every tree with that source restores them.

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

mkp t; setx t 2
LAKE_ARTIFACT_CACHE=false test_run -d t build P.X
setx t 1
(cd t && test_cmd "$LAKE" env lean -o .lake/build/lib/lean/P/X.olean \
  -i .lake/build/lib/lean/P/X.ilean P/X.lean)
setx t 2
test_truth t
# A fresh tree with the same source restores what the cache holds for it
mkp v; setx v 2
test_truth v

# The same with the cache on another file system than the tree, where the tree's file cannot be
# moved into the cache's quarantine directory by a hard link
SHM_DIR=/dev/shm
if [ -d "$SHM_DIR" ] && [ -w "$SHM_DIR" ] && [ "$(stat -c %d "$SHM_DIR")" != "$(stat -c %d .)" ]; then
  SHM_CACHE="$(mktemp -d "$SHM_DIR/lake-cacheReplayRemap.XXXXXX")"
  mkp t2; setx t2 2
  LAKE_ARTIFACT_CACHE=false test_run -d t2 build P.X
  setx t2 1
  (cd t2 && test_cmd "$LAKE" env lean -o .lake/build/lib/lean/P/X.olean \
    -i .lake/build/lib/lean/P/X.ilean P/X.lean)
  setx t2 2
  test_cmd cp t2/.lake/build/lib/lean/P/X.olean t2.substitute
  LAKE_CACHE_DIR="$SHM_CACHE" test_out 'does not match its trace' -d t2 build P.E
  # The substituted bytes are kept in the quarantine directory, on the cache's file system
  test_cmd sh -c 'for f in "$1"/quarantine/*; do cmp -s "$f" "$2" && exit 0; done; exit 1' \
    _ "$SHM_CACHE" t2.substitute
  LAKE_CACHE_DIR="$SHM_CACHE" test_truth t2
  rm -rf "$SHM_CACHE"
else
  echo "SKIPPED: no writable $SHM_DIR on another file system"
fi

# A replayed trace that records no outputs (as one written by an older Lake) gives nothing to
# check the tree's files against: they are rebuilt, not published
if command -v python3 > /dev/null; then
  mkp t3; setx t3 2
  LAKE_ARTIFACT_CACHE=false test_run -d t3 build P.X
  test_cmd python3 -c 'import json, sys
p = sys.argv[1]; d = json.load(open(p)); d.pop("outputs", None); json.dump(d, open(p, "w"))' \
    t3/.lake/build/lib/lean/P/X.trace
  LAKE_CACHE_DIR="$PWD/cache-t3" test_out 'Built P.X' -d t3 build P.X
else
  echo "SKIPPED: python3 not found"
fi
