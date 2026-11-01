#!/usr/bin/env bash
source ../common.sh

./clean.sh

# With the artifact cache on and every artifact restored, a build that finds a module's outputs to be
# the cache's entries records their identities (device, inode, size, modification time) in the
# module's record of its package's `.lake/build/outputs.stamps`. While each build-directory output
# keeps that identity and a second link, and the module's cache mapping exists, a later build does
# not look at the cache for the module.

HELPER="$(cd .. && pwd)/stamps.lean"
mkdir -p work/T && cd work
export LAKE_CACHE_DIR="$PWD/cache" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
printf 'name = "t"\n\n[[lean_lib]]\nname = "T"\n' > lakefile.toml
printf 'import T.B\n' > T.lean
printf 'import T.A\ndef b : Nat := a\n' > T/B.lean
printf 'def a : Nat := 1\ntheorem w : True := by sorry\n' > T/A.lean
OLEAN=.lake/build/lib/lean/T/A.olean
ARTS=$LAKE_CACHE_DIR/artifacts
entry() { echo "$ARTS/$(cat $OLEAN.hash).olean"; }
# stamp get|del -- print or remove T.A's record (`get` fails if there is none)
stamp() { lean --run "$HELPER" "$1" .lake/build/outputs.stamps T.A; }
has_stamp() { test_cmd stamp get > /dev/null; }
no_stamp() { test_cmd_fails stamp get > /dev/null; }
# away CMD... -- run CMD with the cache's artifacts moved away; then delete what CMD put into the
# cache and put the old artifacts back
away() {
  test_cmd mv "$ARTS" "$ARTS.away"
  "$@"
  rm -rf "$ARTS"
  test_cmd mv "$ARTS.away" "$ARTS"
}
strip_times() { sed -E 's/ \([0-9.]+m?s\)//' produced.out > "$1"; }
# fast -- a build that does not look at the cache's entries: with them gone, it prints what the
# build that recorded the outputs printed (`full.out`), and puts none of them back
fast() {
  lake_out build T
  strip_times fast.out
  check_diff full.out fast.out
  test_exp ! -d "$ARTS"
}
# recached -- a build that checks the module against the cache, and caches its outputs again
recached() { test_run build T; test_exp -d "$ARTS"; }

# The build after the compile finds the outputs in the cache and records them
test_run build T
no_stamp
lake_out build T
strip_times full.out
has_stamp
away fast

# A `--no-build` build records nothing
test_cmd stamp del
test_run build T --no-build
no_stamp

# Without the stamp, the build checks the cache and records the outputs again
away recached
test_run build T
has_stamp

# A missing mapping is written again
test_cmd rm -rf "$LAKE_CACHE_DIR/outputs"
test_run build T
test_exp -n "$(ls "$LAKE_CACHE_DIR"/outputs/*)"

# An entry that no other file links any more is cached again
test_run build T
test_cmd rm -f "$(entry)"
test_run build T
test_exp -f "$(entry)"

# `--rehash` checks every output against the cache
test_run build T
rehash() { test_run build T --rehash; test_exp -d "$ARTS"; }
away rehash

# An output whose size changed (in place, so that it keeps its inode, with its modification time
# set back; the cache's entries are read-only) is checked against the cache again, which records it
# again
test_run build T
test_cmd cp -p $OLEAN orig.olean
stamp get > before.stamp
test_cmd chmod u+w $OLEAN
{ cat orig.olean; echo x; } > $OLEAN
test_cmd touch -r orig.olean $OLEAN
test_run build T
test_cmd test "$(stamp get | cksum)" != "$(cksum < before.stamp)"
cat orig.olean > $OLEAN
test_cmd touch -r orig.olean $OLEAN
test_cmd chmod u-w $OLEAN

# A build-directory output that is another file now (a copy with the same bytes, size and
# modification time, as `cp -p` makes, and a second link) is checked against the cache again
impostor() {
  test_cmd cp -p $OLEAN x.olean
  test_cmd rm -f x2.olean
  test_cmd ln x.olean x2.olean
  test_cmd rm -f $OLEAN
  test_cmd mv x.olean $OLEAN
}
test_run build T
impostor
away recached
test_cmd ln -f "$(entry)" $OLEAN
# and it is recorded only as the file that is the cache's entry
test_run build T
test_cmd stamp del
impostor
test_run build T
inode() { ls -i "$1" | awk '{ print $1 }'; }
if stamp get > /dev/null; then test_cmd test "$(inode "$OLEAN")" = "$(inode "$(entry)")"; fi
test_cmd ln -f "$(entry)" $OLEAN

# A tree restored from the cache records its outputs and skips the cache from its next build on
mkdir -p u && cp -r lakefile.toml T.lean T u/
cd u
test_run build T
has_stamp
lake_out build T
strip_times full.out
away fast
cd ..

# A build that records its outputs for the cache (`-o`) takes the whole path, so the entries it
# lists exist, also after the cache lost them while the build directory kept its links; the
# archives it packs into the build directory do not stop the next build from skipping the cache
outputs() {
  rm -rf staging
  test_run build T -o outputs.jsonl
  test_cmd test "$(wc -l < outputs.jsonl)" -eq 4
  test_run cache stage outputs.jsonl staging
}
outputs
test_exp -f .lake/build/ir/T/A.ltar
test_run build T
test_run build T
away outputs
test_run build T
lake_out build T
strip_times full.out
away fast
