#!/usr/bin/env bash
source ../common.sh

./clean.sh

# With the artifact cache on and every artifact restored, a build that finds a module's outputs to be
# the cache's entries records their identities (device, inode, size, modification time) in the
# module's record of its package's `.lake/build/outputs.stamps`. While each build-directory output
# keeps that identity and a second link, and the module's cache mapping exists, a later build does
# not look at the cache for the module. Where the record does not match, a build-directory output
# that is the cache's entry itself (the same device and inode) is taken too, and recorded again;
# any other file takes the full path.

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
# strip_times FILE -- `produced.out` without job times and job numbers, which depend on the order in
# which parallel jobs finish
strip_times() { sed -E 's/ \([0-9.]+m?s\)//; s/\[[0-9]+\//[_\//' produced.out > "$1"; }
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

# A local archive that is not the one packed for the module (its bytes no longer match the `.hash`
# recorded when it was packed) is treated alike by a build that skips the cache and by one that
# checks it: the same output, and the same archive (or none) left in the build directory
LTAR=.lake/build/ir/T/A.ltar
test_exp -f $LTAR.hash
test_cmd cp $LTAR orig.ltar
test_cmd cp $LTAR.hash orig.ltar.hash
stale() {
  test_cmd rm -f $LTAR $LTAR.hash
  { cat orig.ltar; echo x; } > $LTAR
  test_cmd cp orig.ltar.hash $LTAR.hash
}
ltar_state() { if [ -e $LTAR ]; then cksum < $LTAR; else echo none; fi; }
test_cmd stamp del
stale
lake_out build T
strip_times full.out
ltar_state > full.ltar
has_stamp
stale
away fast
test_exp "$(ltar_state)" = "$(cat full.ltar)"

# A record is reused only for the identities it records. Without one that matches, a build file is
# reused only if it is the cache entry its trace names itself (the same device and inode), which is
# what a record vouches for; any other file takes the full path, which checks it against the cache.
# record_inode -- the inode that T.A's record holds for its `.olean` (its first line)
record_inode() { stamp get | head -n 1 | cut -d ' ' -f 3; }

# A copy of the tree and its cache (new inodes, the same modification times and the same links, as
# `cp -a` makes) matches no record. Its build files are the copied cache's entries: they are reused,
# and recorded again under their new identities, so the copy's next build skips the cache
# (without the stale local archive of the case above)
test_cmd rm -f $LTAR $LTAR.hash
test_run build T
test_run build T
test_cmd rm -rf ../copy
test_cmd cp -a . ../copy
(
  cd ../copy
  export LAKE_CACHE_DIR="$PWD/cache"
  ARTS=$LAKE_CACHE_DIR/artifacts
  test_cmd test "$(record_inode)" != "$(inode $OLEAN)"
  test_cmd test "$(inode $OLEAN)" = "$(inode "$(entry)")"
  test_not_out 'Built' build T
  test_cmd test "$(record_inode)" = "$(inode $OLEAN)"
  test_cmd mv "$ARTS" "$ARTS.away"
  test_run build T
  test_exp ! -d "$ARTS"
  test_cmd mv "$ARTS.away" "$ARTS"
)

# A build file hard-linked to a stale entry of the cache (the `.olean` of an earlier source of the
# module, not the entry its trace names) is not reused, with or without a record: the full path puts
# the named entry back, and only that entry is recorded
test_cmd cp T/A.lean A.orig
stale_link() {
  test_cmd ln -f "$old" $OLEAN
  test_run build T
  test_cmd test "$(inode $OLEAN)" = "$(inode "$(entry)")"
  test_cmd cmp $OLEAN "$(entry)"
  test_cmd test "$(record_inode)" = "$(inode "$(entry)")"
}
test_run build T
old=$(entry)
printf 'def a : Nat := 3\ntheorem w : True := by sorry\n' > T/A.lean
test_run build T
test_cmd test "$(entry)" != "$old"
test_exp -f "$old"
stale_link
test_cmd stamp del
stale_link

# A build file with other bytes and a second link (it is no cache entry; its modification time is
# the entry's) is not reused either: the full path puts the entry back
test_cmd rm -f x.olean x2.olean
{ cat $OLEAN; echo x; } > x.olean
test_cmd touch -r $OLEAN x.olean
test_cmd ln x.olean x2.olean
test_cmd mv -f x.olean $OLEAN
test_run build T
test_cmd test "$(inode $OLEAN)" = "$(inode "$(entry)")"
test_cmd cmp $OLEAN "$(entry)"
test_cmd cp A.orig T/A.lean
test_run build T

# The cases below need the usage cutoff and kept-module checks. A Lake that has the usage cutoff
# records it among a module's inputs in its trace when `LAKE_USAGE_CUTOFF` is set; with one that does
# not, they are skipped.
export LAKE_USAGE_CUTOFF=1
# mstamp get|del MOD -- print or remove MOD's record in the package's outputs stamp
mstamp() { lean --run "$HELPER" "$1" .lake/build/outputs.stamps "$2"; }
mkdir -p v && cp -r lakefile.toml T.lean T v/
cd v
export LAKE_CACHE_DIR="$PWD/cache"
test_run build T
if ! grep -qF '"usage cutoff: true"' .lake/build/lib/lean/T/A.trace; then
  echo "SKIPPED: this Lake has no usage cutoff (kept outputs, .usage/.resolved/.usekey)"
  exit 0
fi
test_exp -f .lake/build/lib/lean/T/A.usage

# With the usage cutoff, a module's outputs also have a `.usage`, a `.resolved` and a `.usekey`, which
# the cache's mapping describes (the trace does not). When one of them is removed from the build
# directory, a build gives the output and leaves the build directory that a build that checks the
# cache gives
test_run build T
has_stamp
for ext in usage resolved usekey; do
  f=.lake/build/lib/lean/T/A.$ext
  entry="$LAKE_CACHE_DIR/artifacts/$(cat $f.hash).$ext"
  test_exp -f "$entry"
  sidecar_state() { if [ -e $f ]; then cksum < $f; else echo none; fi; }
  # the build that checks the cache: without the module's stamp record
  test_cmd rm -f $f
  test_cmd stamp del
  lake_out build T
  strip_times full.out
  sidecar_state > full.state
  has_stamp
  # the same removal, now with the module's stamp record
  test_cmd rm -f $f
  lake_out build T
  strip_times now.out
  check_diff full.out now.out
  test_exp "$(sidecar_state)" = "$(cat full.state)"
  test_cmd ln -f "$entry" $f
done
cd ..

# Outputs that a kept-module check accepted (their trace marks them `"kf"`) are never recorded in the
# stamp, so every build takes them on the full path, which applies the supersede rule to them, and
# keeps their lineage. `checker.sh` accepts every module.
mkdir -p k/K
(
  cd k
  export LAKE_CACHE_DIR="$PWD/cache"
  printf 'name = "k"\n\n[[lean_lib]]\nname = "K"\n' > lakefile.toml
  printf 'import K.B\n' > K.lean
  printf 'import K.A\ntheorem B.ok : A.w = 0 := rfl\n' > K/B.lean
  # seta V -- `K/A.lean` (a new file) with `A.v := V` and `A.w := V - V`: `A.w` changes meaning
  # but stays `0`, so `K.B` is a kept candidate and its proof holds
  seta() { rm -f K/A.lean; printf 'def A.v : Nat := %s\ndef A.w : Nat := %s - %s\n' "$1" "$1" "$1" > K/A.lean; }
  cat > checker.sh << 'EOF'
#!/usr/bin/env bash
while IFS= read -r line; do
  [[ $line =~ \"id\":([0-9]+) ]] && id=${BASH_REMATCH[1]}
  [[ $line =~ \"olean\":\"([^\"]*)\" ]] && olean=${BASH_REMATCH[1]}
  printf '{"id":%s,"ok":true,"oleanHash":"%s"}\n' "$id" "$(cat "$olean.hash")"
done
EOF
  chmod +x checker.sh
  seta 1
  test_run build K
  seta 2
  LAKE_KEPT_CHECKER="$PWD/checker.sh" test_out 'Checked K.B' build K
  test_cmd grep -q '"kf"' .lake/build/lib/lean/K/B.trace
  test_run build K
  test_run build K
  test_cmd mstamp get K.A
  test_cmd_fails mstamp get K.B
  test_cmd grep -q '"kf"' .lake/build/lib/lean/K/B.trace
)
