#!/usr/bin/env bash
source ../common.sh

# Builds one package in two directories at different absolute paths and checks
# that the two builds agree: every `.olean` part is byte-identical and every
# input hash (`depHash` in each `.trace`) is equal. An artifact cache shared
# between checkouts depends on this.
#
# `Test.Lint` is a classic module with a linter warning, which Lean persists in
# its `.olean` for `lake lint`; `Test` is a classic importer of it, so its input
# hash mixes in `Test.Lint`'s `.olean`. A source path stored with the warning
# makes `Test.Lint.olean` and the input hash of `Test` differ between the trees.
#
# Last, a third tree fills an artifact cache and a fourth, at another path,
# restores from it without copying the `.olean` files into its build directory
# (`LAKE_RESTORE_ARTIFACTS=false`); `lake lint` there must load the restored
# modules from the cache.

./clean.sh

# Each tree must compile its own modules, not restore them from a shared cache.
export LAKE_ARTIFACT_CACHE=false

# Lake works with the real path of the package directory (`resolvePath?`).
P1=$(pwd -P)/work/p1/tree
P2=$(pwd -P)/work/deeper/p2/tree
for tree in "$P1" "$P2"; do
  mkdir -p "$tree"
  cp -r lakefile.toml Test.lean Test "$tree/"
  pushd "$tree"
  lake_out build
  # The warning is reported, so the build recorded it in `Test.Lint`'s lint log.
  match_pat 'Variable name `unusedLocal` is not explicitly referenced' produced.out
  popd
done

# Both trees produced the same files.
test_exp -f "$P1/.lake/build/lib/lean/Test/Lint.olean"
test_exp -f "$P1/.lake/build/lib/lean/Test.trace"
files() { (cd "$1" && find .lake/build -type f | sort); }
test_cmd diff -u <(files "$P1") <(files "$P2")

failed=0
for f in $(cd "$P1" && find .lake/build -name '*.olean' -o -name '*.olean.server' -o -name '*.olean.private' | sort); do
  echo "? cmp $f"
  if ! cmp -s "$P1/$f" "$P2/$f"; then
    echo "FAILURE: $f differs between the two trees"
    failed=1
  fi
done
depHash() { sed -n 's/.*"depHash": *"\([0-9a-f]*\)".*/\1/p' "$1"; }
for f in $(cd "$P1" && find .lake/build -name '*.trace' | sort); do
  h1=$(depHash "$P1/$f")
  h2=$(depHash "$P2/$f")
  echo "? depHash $f: $h1 $h2"
  test_exp -n "$h1"
  if [ "$h1" != "$h2" ]; then
    echo "FAILURE: the input hash of $f differs between the two trees"
    failed=1
  fi
done
test_exp "$failed" = 0

# `lake lint` names the source file of the tree it runs in.
for tree in "$P1" "$P2"; do
  pushd "$tree"
  test_status_out 1 'Variable name `unusedLocal` is not explicitly referenced' lint --builtin-only Test
  match_text "$tree/" produced.out
  match_pat 'Test/Lint\.lean:4:6: warning:' produced.out
  popd
done
pushd "$P2"
no_match_text "$P1/" produced.out
popd

# --- A tree restored from an artifact cache shared with another checkout. ---
export LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=false
export LAKE_CACHE_DIR=$(pwd -P)/work/cache
P3=$(pwd -P)/work/p3/tree
P4=$(pwd -P)/work/p4/other/tree
for tree in "$P3" "$P4"; do
  mkdir -p "$tree"
  cp -r lakefile.toml Test.lean Test "$tree/"
done
pushd "$P3"
test_run build
popd
pushd "$P4"
test_status_out 1 'Variable name `unusedLocal` is not explicitly referenced' lint --builtin-only Test
match_text "$P4/" produced.out
match_pat 'Test/Lint\.lean:4:6: warning:' produced.out
no_match_pat 'failed to open|does not exist' produced.out
# Both modules were cache hits: their `.olean` files exist only in the cache.
test_exp ! -e .lake/build/lib/lean/Test.olean
test_exp ! -e .lake/build/lib/lean/Test/Lint.olean
test_exp -f .lake/build/lib/lean/Test/Lint.ilean
popd
