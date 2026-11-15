#!/usr/bin/env bash
source ../common.sh

./clean.sh
mkdir -p work/T
cd work

# The Lake cache in the test directory, written and restored into the build directory, and the usage cutoff
export LAKE_CACHE_DIR="$PWD/cache" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true LAKE_USAGE_CUTOFF=1
printf 'name = "t"\n\n[[lean_lib]]\nname = "T"\n' > lakefile.toml
printf 'def m : Nat := 1\n' > T/M.lean
printf 'import T.M\ndef d : Nat := m + 1\n' > T/D.lean
test_run build T.D
B=.lake/build/lib/lean/T
# A module keeps its usage-cutoff records (`.usekey`, `.usage`, `.resolved`) in one file, its pack, with no `.hash` file
usepack_alone $B/M $B/D
for part in k u v; do test_cmd usepack_has $B/D.usepack $part; done
round=0
# edit_m -- `M` gains a declaration that `D` does not use; `D`'s input changes, and its usage-cutoff decision runs
edit_m() { round=$((round + 1)); printf 'def m : Nat := 1\ndef other%s : Nat := %s\n' $round $round > T/M.lean; }
# mapping [MOD] -- the cache's mapping of the input that MOD's (default `D`'s) trace records
mapping() { echo "$LAKE_CACHE_DIR/outputs/t/$(sed -nE 's/.*"depHash": *"([0-9a-f]+)".*/\1/p' $B/${1:-D}.trace).json"; }
# packart MOD -- the name of MOD's pack in the cache, as MOD's mapping records it (a pack has no `.hash` file)
packart() { sed -nE 's/.*"p": *"([^"]+)".*/\1/p' "$(mapping $1)"; }
# set_mapping KEY VALUE -- set the field KEY of `D`'s mapping to the JSON value VALUE
set_mapping() {
  local map; map=$(mapping)
  test_exp -f "$map"
  sed -E "s/\"$1\": *(\"[^\"]*\"|\[[^]]*\])/\"$1\": $2/" "$map" > map.json
  test_cmd mv -f map.json "$map"
  test_cmd grep -qF "\"$1\": $2" "$map"
}

# A module's trace usually does not describe its usage-cutoff pack (`.usepack`, which holds its `.usekey`, `.usage` and
# `.resolved`); the cache's mapping of the input the trace records does. When the module's input changes, a pack that
# the build directory lost is restored from the cache before the usage cutoff decides, so the module keeps its records:
# an edit of its import that it does not use replays it, and the usage index is not asked.
f=$B/D.usepack
test_run build T.D
test_exp -f "$f"
entry="$LAKE_CACHE_DIR/artifacts/$(packart D)"
test_exp -f "$entry"
test_cmd rm -f "$f"
test_run build T.D
edit_m
lake_out build -v T.D
match_text "Built T.M" produced.out
match_text "Replayed T.D" produced.out
no_match_text "Built T.D" produced.out
no_match_text "usage index: restored" produced.out
test_exp -f "$f"
test_cmd cmp "$f" "$entry"
# the restored pack is a hard link to the cache entry, with no `.hash` file
test_exp "$(stat_ch "$f")" -gt 1
usepack_alone $B/D

# A pack that the mapping names but that is not the one of the build the trace records (here `M`'s, put in the mapping
# in place of `D`'s) is restored and then rejected by the check that reads it: `D` is not replayed.
test_run build T.D
test_exp -f "$LAKE_CACHE_DIR/artifacts/$(packart M)"
set_mapping p "\"$(packart M)\""
test_cmd rm -f $B/D.usepack
edit_m
lake_out build -v T.D
match_text "Built T.M" produced.out
no_match_text "Replayed T.D" produced.out

# A mapping that describes another `.olean` (here `M`'s) gives no pack, although it names `D`'s own
test_run build T.D
set_mapping o "[\"$(cat $B/M.olean.hash).olean\"]"
test_cmd rm -f $B/D.usepack
edit_m
lake_out build -v T.D
no_match_text "Replayed T.D" produced.out

# A pack that the build directory holds is never replaced by the cache's: here `D`'s pack holds `M`'s `.usage` and no
# `.resolved`, so `D` is not replayed
test_run build T.D
usepack_part $B/M.usepack u > m.usage
test_cmd usepack_set $B/D.usepack u m.usage
test_cmd usepack_set $B/D.usepack v -
edit_m
lake_out build -v T.D
no_match_text "Replayed T.D" produced.out

# A cache entry that cannot be read is not restored, and the build does not fail (as root, every entry is readable).
# The usage index is removed first: its lookup would read the same entry as a candidate's `.usekey`, and a record that
# exists but cannot be read fails the check that reads it (as `usageCutoffFacts` shows for a `.usekey`).
test_run build T.D
f=$B/D.usepack
entry="$LAKE_CACHE_DIR/artifacts/$(packart D)"
test_cmd rm -f "$f"
test_cmd chmod 000 "$entry"
test_cmd rm -rf "$LAKE_CACHE_DIR/usage-index"
edit_m
lake_out build -v T.D
no_match_text "Replayed T.D" produced.out
test_cmd chmod 444 "$entry"

# A pack that the cache no longer holds stays missing, and the build does not fail: the cutoff does not skip a module
# without its records (it compiles, or the usage index restores an earlier compile).
test_run build T.D
f=$B/D.usepack
entry="$LAKE_CACHE_DIR/artifacts/$(packart D)"
test_cmd rm -f "$f" "$entry"
test_run build T.D
edit_m
lake_out build -v T.D
no_match_text "Replayed T.D" produced.out
test_exp -f "$f"
