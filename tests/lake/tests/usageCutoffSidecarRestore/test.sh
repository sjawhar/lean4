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
round=0
# edit_m -- `M` gains a declaration that `D` does not use; `D`'s input changes, and its usage-cutoff decision runs
edit_m() { round=$((round + 1)); printf 'def m : Nat := 1\ndef other%s : Nat := %s\n' $round $round > T/M.lean; }
# mapping -- the cache's mapping of the input that `D`'s trace records
mapping() { echo "$LAKE_CACHE_DIR/outputs/t/$(sed -nE 's/.*"depHash": *"([0-9a-f]+)".*/\1/p' $B/D.trace).json"; }
# set_mapping KEY VALUE -- set the field KEY of `D`'s mapping to the JSON value VALUE
set_mapping() {
  local map; map=$(mapping)
  test_exp -f "$map"
  sed -E "s/\"$1\": *(\"[^\"]*\"|\[[^]]*\])/\"$1\": $2/" "$map" > map.json
  test_cmd mv -f map.json "$map"
  test_cmd grep -qF "\"$1\": $2" "$map"
}

# A module's trace usually does not describe its usage sidecars (`.usage`, `.resolved`, `.usekey`); the cache's mapping
# of the input the trace records does. When the module's input changes, a sidecar that the build directory lost is
# restored from the cache before the usage cutoff decides, so the module keeps its records: an edit of its import that
# it does not use replays it, and the usage index is not asked.
for ext in usage resolved usekey; do
  f=$B/D.$ext
  test_run build T.D
  test_exp -f "$f"
  entry="$LAKE_CACHE_DIR/artifacts/$(cat "$f.hash").$ext"
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
done

# A sidecar that the mapping names but that is not the one of the build the trace records (here `M`'s, put in the
# mapping in place of `D`'s) is restored and then rejected by the check that reads it: `D` is not replayed.
for spec in usage:u resolved:v usekey:k; do
  ext=${spec%%:*} key=${spec#*:}
  test_run build T.D
  test_exp -f "$LAKE_CACHE_DIR/artifacts/$(cat $B/M.$ext.hash).$ext"
  set_mapping $key "\"$(cat $B/M.$ext.hash).$ext\""
  test_cmd rm -f $B/D.$ext
  edit_m
  lake_out build -v T.D
  match_text "Built T.M" produced.out
  no_match_text "Replayed T.D" produced.out
done

# A mapping that describes another `.olean` (here `M`'s) gives no sidecar, although it names `D`'s own
test_run build T.D
set_mapping o "[\"$(cat $B/M.olean.hash).olean\"]"
test_cmd rm -f $B/D.usage
edit_m
lake_out build -v T.D
no_match_text "Replayed T.D" produced.out

# A sidecar that the build directory holds is never replaced, also when another one is restored: here `D`'s `.usage` is
# a copy of `M`'s and its `.resolved` is missing, so `D` is not replayed
test_run build T.D
test_cmd rm -f $B/D.usage $B/D.resolved
test_cmd cp $B/M.usage $B/D.usage
edit_m
lake_out build -v T.D
no_match_text "Replayed T.D" produced.out

# A cache entry that cannot be read is not restored, and the build does not fail (as root, every entry is readable)
test_run build T.D
f=$B/D.usage
entry="$LAKE_CACHE_DIR/artifacts/$(cat "$f.hash").usage"
test_cmd rm -f "$f"
test_cmd chmod 000 "$entry"
edit_m
lake_out build -v T.D
no_match_text "Replayed T.D" produced.out
test_cmd chmod 444 "$entry"

# A sidecar that the cache no longer holds stays missing, and the build does not fail: the cutoff does not skip a
# module without its records (it compiles, or the usage index restores an earlier compile).
test_run build T.D
f=$B/D.usage
entry="$LAKE_CACHE_DIR/artifacts/$(cat "$f.hash").usage"
test_cmd rm -f "$f" "$entry"
test_run build T.D
edit_m
lake_out build -v T.D
no_match_text "Replayed T.D" produced.out
test_exp -f "$f"
