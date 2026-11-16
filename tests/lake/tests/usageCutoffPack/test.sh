#!/usr/bin/env bash
source ../common.sh

# A module's usage-cutoff records (`.usekey`, `.usage`, `.resolved`) are one file beside its `.olean`, its pack
# `X.usepack` (`Lake.UsagePack`): a build with the cutoff on writes, caches and restores one file per module more than
# a build with it off, and no `.hash` file for it. A tree in the layout before packs (three files per module) is still
# read, and a pack that this Lake cannot read is read as no records, with a warning that names it.
#
# The package `p`: `P.B` imports `P.A`, and `P.C` imports `P.B` and uses `b`, a definition of `P.B`, and nothing else
# of it. The proof edit gives `tb`, a theorem of `P.B` that `P.C` does not use, another proof: `P.B` compiles, and the
# cutoff skips `P.C` (it is replayed), unless it cannot read `P.C`'s records.
./clean.sh
mkdir -p work && cd work
unset LAKE_KEPT_CHECKER LAKE_KEPT_EXCLUDE LAKE_ARTIFACT_CACHE LAKE_RESTORE_ARTIFACTS
# The cases that use the artifact cache set a cache of their own; the others store none outside their package
export LAKE_USAGE_CUTOFF=1 LAKE_CACHE_DIR=
OUT=.lake/build/lib/lean/P
MODS="A B C"

# mkpkg DIR -- the package in DIR, before the proof edit
mkpkg() {
  mkdir -p "$1/P"
  printf 'name = "p"\n[[lean_lib]]\nname = "P"\n' > "$1/lakefile.toml"
  printf 'def a : Nat := 1\n' > "$1/P/A.lean"
  printf 'import P.A\ndef b : Nat := a + 1\ntheorem tb : b = 2 := by decide\n' > "$1/P/B.lean"
  printf 'import P.B\ndef c : Nat := b + 1\n' > "$1/P/C.lean"
}
# edit_b DIR -- the proof edit
edit_b() { printf 'import P.A\ndef b : Nat := a + 1\ntheorem tb : b = 2 := rfl\n' > "$1/P/B.lean"; }
# skips_c DIR -- after the proof edit, a build of DIR compiles `P.B` and replays `P.C`
skips_c() {
  edit_b "$1"
  lake_out -d "$1" build -v P.C
  match_text "Built P.B" produced.out
  match_text "Replayed P.C" produced.out
  no_match_text "Built P.C" produced.out
}
# rebuilds_c DIR -- after the proof edit, a build of DIR compiles `P.B` and `P.C` (and succeeds)
rebuilds_c() {
  edit_b "$1"
  lake_out -d "$1" build -v P.C
  match_text "Built P.B" produced.out
  match_text "Built P.C" produced.out
  no_match_text "Replayed P.C" produced.out
}
# packs DIR -- each module of DIR has one usage-cutoff record file, its pack, which holds a `.usekey`, a `.usage` and
# a `.resolved`, with no loose record and no `.hash` file beside it
packs() {
  local m part
  for m in $MODS; do
    usepack_alone "$1/$OUT/$m"
    for part in k u v; do test_cmd usepack_has "$1/$OUT/$m.usepack" $part; done
  done
}
# nfiles DIR MOD -- the number of files of MOD in DIR's `.lake/build/lib/lean/P`
nfiles() { find "$1/$OUT" -maxdepth 1 -name "$2.*" | wc -l; }
# packart DIR MOD -- the cache entry of MOD's pack that the cache's mapping of MOD's input in DIR names (a pack has no
# `.hash` file)
packart() {
  local map
  map="$LAKE_CACHE_DIR/outputs/p/$(sed -nE 's/.*"depHash": *"([0-9a-f]+)".*/\1/p' "$1/$OUT/$2.trace").json"
  echo "$LAKE_CACHE_DIR/artifacts/$(sed -nE 's/.*"p": *"([^"]+)".*/\1/p' "$map")"
}

# (a) The layout of packs, with the artifact cache. After a build with the cutoff on, each module has its pack alone,
# and the cache holds one pack per module and no loose record. A fresh tree restored from the cache has the same, each
# pack a hard link to its cache entry, and exactly one file per module more than a fresh tree that a build with the
# cutoff off restored (the setting is in the trace, so that build has cache entries of its own). The proof edit then
# compiles `P.B` and skips `P.C`.
(
  export LAKE_CACHE_DIR="$PWD/cache-a" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
  mkpkg on
  test_run -d on build P.C
  packs on
  test_exp -z "$(find "$LAKE_CACHE_DIR/artifacts" -name '*.usage' -o -name '*.resolved' -o -name '*.usekey')"
  test_exp "$(find "$LAKE_CACHE_DIR/artifacts" -name '*.usepack' | wc -l)" = 3
  mkpkg on2
  test_not_out "Built" -d on2 build -v P.C
  packs on2
  for m in $MODS; do
    entry=$(packart on2 $m)
    test_exp -f "$entry"
    test_exp "$(stat_ch "on2/$OUT/$m.usepack")" -gt 1
    test_exp "on2/$OUT/$m.usepack" -ef "$entry"
  done
  mkpkg off
  LAKE_USAGE_CUTOFF=0 test_run -d off build P.C
  mkpkg off2
  LAKE_USAGE_CUTOFF=0 test_not_out "Built" -d off2 build -v P.C
  for m in $MODS; do
    test_exp ! -e "off2/$OUT/$m.usepack"
    test_exp "$(nfiles on2 $m)" = "$(( $(nfiles off2 $m) + 1 ))"
  done
  skips_c on2
  usepack_alone "on2/$OUT/B"
)

# (b) The layout before packs is still read: a tree built with the cutoff on whose packs are each turned back into the
# three files (`.usekey`, `.usage`, `.resolved`). After the proof edit, `P.C` is still skipped, on its files, and
# `P.B`, which compiled, now has a pack; `P.C`, which did not compile, keeps its files.
(
  export LAKE_CACHE_DIR="$PWD/cache-b" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
  mkpkg old
  test_run -d old build P.C
  packs old
  for m in $MODS; do
    p="old/$OUT/$m.usepack"
    usepack_part "$p" k > "old/$OUT/$m.usekey"
    usepack_part "$p" u > "old/$OUT/$m.usage"
    usepack_part "$p" v > "old/$OUT/$m.resolved"
    test_cmd rm -f "$p"
  done
  skips_c old
  usepack_alone "old/$OUT/B"
  test_exp ! -e "old/$OUT/C.usepack"
  for ext in usekey usage resolved; do test_exp -f "old/$OUT/C.$ext"; done
)

# (c) A pack this Lake cannot read: in a fresh tree built with the cutoff on, one byte of `P.C`'s `.usage` part
# flipped (the part then does not have the digest the header records), then the pack cut short by one byte (it then
# does not have the size the header records), then a header whose `.usekey` length is 2^63 - 1 (a reader that took
# that length before the file's size would allocate it and fail the build: Lake reads such a pack as invalid without
# reading past its header), then a pack one byte larger than the 256 MiB that Lake reads of a record file, with its
# `.usekey` intact and a header whose lengths add up to its size (Lake reads a pack of that size as invalid, whichever
# record is asked for, rather than failing the build or reading it). Each time, after the proof edit, `P.C` compiles
# rather than being skipped, the build warns that it cannot read `P.C`'s pack, and the build succeeds. (The artifact
# cache is off: its usage index would restore the earlier compile of `P.C`, whose cache entries are intact.)
for damage in flip cut huge big; do
  t=bad-$damage
  mkpkg $t
  test_run -d $t build P.C
  p="$t/$OUT/C.usepack"
  test_cmd usepack_has "$p" u
  cp "$p" good.tmp
  header=$(head -n 1 "$p")
  k=$(usepack_part "$p" k | wc -c)
  size=$(wc -c < "$p")
  case $damage in
    flip)
      # the first byte of the `.usage` part: after the header line and its newline, and the `.usekey` part
      cat "$p" > bad.tmp
      printf '\377' | dd of=bad.tmp bs=1 seek=$(( ${#header} + k + 1 )) conv=notrunc status=none
      test_exp "$(wc -c < bad.tmp)" = "$size"
      ;;
    cut) head -c $((size - 1)) "$p" > bad.tmp;;
    huge) sed '1s/ k=[0-9]*:/ k=9223372036854775807:/' "$p" > bad.tmp
      test_cmd_out ' k=9223372036854775807:' head -n 1 bad.tmp;;
    big)
      # the header line and the `.usekey` part, then a hole up to the size, under a header whose `.usage` length (9
      # digits) makes its lengths add up to that size
      u=${header#* u=} u=${u%%:*}
      v=$(usepack_part "$p" v | wc -c)
      bigsize=$((256 * 1024 * 1024 + 1))
      bigu=$((bigsize - (${#header} - ${#u} + 9 + 1) - k - v))
      test_exp ${#bigu} = 9
      { printf '%s\n' "${header/ u=$u:/ u=$bigu:}"; usepack_part "$p" k; } > bad.tmp
      dd if=/dev/null of=bad.tmp bs=1 seek=$bigsize status=none
      test_exp "$(wc -c < bad.tmp)" = "$bigsize"
      ;;
  esac
  test_cmd mv -f bad.tmp "$p"
  test_cmd_fails cmp -s good.tmp "$p"
  rebuilds_c $t
  match_text "P/C.usepack: not a usage-cutoff pack this Lake can read" produced.out
  usepack_alone "$t/$OUT/C"
done

# (d) A pack whose `.usekey` is valid and whose `.usage` is not the one the key records (another JSON text, under a
# header that records its digest): the pack reads as a pack, and the cutoff does not take that `.usage`, as it did not
# take a `.usage` file the key did not record. After the proof edit, `P.C` compiles, with no warning.
mkpkg stale
test_run -d stale build P.C
printf '{"version":14,"noskip":false,"moduleDigest":"00000000000000000000000000000000","closure":"00000000000000000000000000000000","providesDigest":"00000000000000000000000000000000","provides":[[],[]],"indirect":[],"digested":[],"importedClosures":[],"importedDigests":[],"own":[],"used":[[[true],[]]],"resolvedAll":false,"resolvedDigest":"00000000000000000000000000000000","extra":[],"specKeys":[],"specLookups":[]}' > stale.usage
test_cmd usepack_set "stale/$OUT/C.usepack" u stale.usage
test_cmd_out '"version":14' usepack_part "stale/$OUT/C.usepack" u
rebuilds_c stale
no_match_text "warning" produced.out
usepack_alone "stale/$OUT/C"

rm -f produced.out
