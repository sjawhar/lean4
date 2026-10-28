#!/usr/bin/env bash
source ../common.sh

./clean.sh

# A build with the usage cutoff on (`LAKE_USAGE_CUTOFF=1`) and the shared remote cache. A writer publishes its fresh
# compiles as `in/` mappings, each naming one `.ltar` archive that holds the module's usage sidecars (`.usage`,
# `.resolved`, `.usekey`) beside its outputs, and, with
# `LAKE_REMOTE_CACHE_ALIASES`, a `kept/<inputHash>.json` alias for each module its cutoff kept under a new input
# hash, naming the compile it kept (`compiledFor`). A reader that misses by input hash reads the alias, restores the
# named compile and runs the cutoff's same-tree check on it: a pass keeps the module, a fail compiles it.
#
# Every build also has a module that must hit or must compile, so that neither compiling everything nor restoring
# everything passes. The mock server and the setup are in `../remoteCache/lib.sh`.

source ../remoteCache/lib.sh

STORE_PY="$TEST_DIR/store.py"
store() { "$PYTHON" "$STORE_PY" "$@"; }
SCOPE_DIR="$STORE_DIR/a0/$(remote_scope)"
OUT=.lake/build/lib/lean/Test
MODS="Test.A Test.X Test.B Test.C Test.D"
TREES="$WORK_DIR/trees"
mkdir -p "$TREES"
# ninputs MOD -- the number of MOD's `in/` mappings in the scope
ninputs() { store inputs "$SCOPE_DIR" "$1" | grep -c . || true; }
# ninputs_for MOD INPUT -- whether MOD has an `in/` mapping for INPUT (1) or not (0)
ninputs_for() { store inputs "$SCOPE_DIR" "$1" | grep -cx "$2" || true; }
# mark -- records the length of the mock server's log; since_mark prints what it logged after that
mark() { MARK="$(wc -c < "$SERVER_LOG")"; }
since_mark() { tail -c +"$((MARK + 1))" "$SERVER_LOG"; }
# kept_reqs -- the number of requests for `kept/` objects since `mark`
kept_reqs() { since_mark > run-server.log; count_path /kept/ run-server.log; }

export LAKE_USAGE_CUTOFF=1 LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true LAKE_REMOTE_CACHE_CLAIMS=false
unset LAKE_REMOTE_CACHE_QUEUE LAKE_REMOTE_CACHE_ALIASES LAKE_KEPT_CHECKER LAKE_KEPT_EXCLUDE

# mkpkg DIR [A] [NAME] -- `A` defines `a := A` (default 1); `B` and `C` import `A` and `X`, and only `B` uses `a`;
# `D` imports `B`. NAME is the package's name (default `test`), which names its remote scope.
mkpkg() {
  mkdir -p "$1/Test"
  printf 'name = "%s"\n[[lean_lib]]\nname = "Test"\nroots = ["Test.A", "Test.X", "Test.B", "Test.C", "Test.D"]\n' \
    "${3:-test}" > "$1/lakefile.toml"
  printf 'def a := %s\n' "${2:-1}" > "$1/Test/A.lean"
  printf 'def x := 0\n' > "$1/Test/X.lean"
  printf 'import Test.A\nimport Test.X\ndef b := a + 1\n' > "$1/Test/B.lean"
  printf 'import Test.A\nimport Test.X\ndef c := 7\n' > "$1/Test/C.lean"
  printf 'import Test.B\ndef d := b\n' > "$1/Test/D.lean"
}
# edx DIR [N] -- "the unused edit": `X` gains `def x2 := 1` (and, with N = 3, `def x3 := 2`), which no module uses
edx() {
  if [ "${2:-2}" = 3 ]; then
    printf 'def x := 0\ndef x2 := 1\ndef x3 := 2\n' > "$1/Test/X.lean"
  else
    printf 'def x := 0\ndef x2 := 1\n' > "$1/Test/X.lean"
  fi
}
# inhash DIR MOD -- MOD's input hash in DIR's build (Test.B -> B.trace)
inhash() { sed -n 's/.*"depHash": *"\([0-9a-f]*\)".*/\1/p' "$1/$OUT/${2#Test.}.trace"; }
# joblog MOD -- the caption line of MOD's job in `produced.out` and the log after it, up to the next caption
joblog() {
  awk -v m=" $1" '/^[^ ]+ \[[0-9]+\/[0-9]+\]/ {
    s = $0; sub(/ \([0-9.]+m?s\)$/, "", s); show = substr(s, length(s) - length(m) + 1) == m }
    show' produced.out
}
jobhas() { joblog "$1" > job.out; match_text "$2" job.out; }

# The writer W: its own cache, the queue and the aliases on, read-through and push through `bearer`
W="$TREES/w"
W_CACHE="$WORK_DIR/w-cache"
on_w() {
  LAKE_CACHE_DIR="$W_CACHE" LAKE_REMOTE_CACHE=bearer LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" \
    LAKE_REMOTE_CACHE_QUEUE=true LAKE_REMOTE_CACHE_ALIASES=true "$@"
}
# on_r CACHE CMD... -- a reader: its own cache, read-through only
on_r() {
  local cache="$1"; shift
  LAKE_CACHE_DIR="$cache" LAKE_REMOTE_CACHE=bearer LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" "$@"
}
# fresh_tree DIR -- a copy of W's sources with no build directory
fresh_tree() {
  test_cmd rm -rf "$1"
  mkdir -p "$1"
  cp -r "$W/lakefile.toml" "$W/Test" "$1/"
  chmod -R u+w "$1"
}

# unpack ART INPUT DIR -- unpacks the archive ART, packed without its input hash, into DIR/lib and DIR/ir as
# `Module.unpackLtar` does, with the trace's input hash INPUT
unpack() {
  mkdir -p "$3/lib" "$3/ir"
  echo "[{\"file\":\"$1\",\"hash\":\"$2\"}]" | "$SYSROOT/bin/leantar" -C "$3/lib" -C "$3/ir" -x -j -
}

case_publish() {
  # 1. A cutoff-on writer publishes each fresh compile: one `in/` mapping whose data is an archive, with a SHA-256
  # entry for it alone, and the archive in the store. The archive holds every sidecar the build wrote, with the
  # build's bytes; B's `.usekey` records the input hash of the compile that wrote it.
  mkpkg "$W"
  on_w test_run -d "$W" build $MODS
  on_w test_run -d "$W" cache push --wait
  for m in $MODS; do test_cmd store archive "$SCOPE_DIR" "$m"; done
  SYSROOT="$(norm_path "$("$LAKE" -d "$W" env printenv LEAN_SYSROOT)")"
  test_exp -x "$SYSROOT/bin/leantar"
  local m f ext n dir
  for m in $MODS; do
    f="${m#Test.}"
    eval "H1_$f=$(inhash "$W" "$m")"
    test_cmd_eq 1 ninputs "$m"
    dir="$WORK_DIR/unpacked/$f"
    test_cmd rm -rf "$dir"
    eval "test_cmd unpack \"\$(store art \"\$SCOPE_DIR\" \"\$m\" \"\$H1_$f\")\" \"\$H1_$f\" \"\$dir\""
    for ext in usage resolved usekey; do
      [ -f "$W/$OUT/$f.$ext" ] || continue
      n="$(find "$dir" -name "$f.$ext" | grep -c . || true)"
      test_cmd_eq 1 echo "$n"
      test_cmd cmp "$W/$OUT/$f.$ext" "$(find "$dir" -name "$f.$ext")"
    done
  done
  # (premise) B's compile wrote the sidecars that the checks above compare
  test_exp -f "$W/$OUT/B.usage"
  test_exp -f "$W/$OUT/B.usekey"
  test_cmd_out "\"input\":\"$H1_B\"" cat "$W/$OUT/B.usekey"
  # The first compile's outputs, which later cases compare against
  test_cmd rm -rf "$WORK_DIR/w1" && cp -r "$W/$OUT" "$WORK_DIR/w1"
}

case_aliases() {
  # 2. After the unused edit, W's cutoff keeps B, C and D and compiles X; the push adds an alias for each kept module
  # that names the first compile's input hash.
  edx "$W"
  mark
  on_w lake_out -d "$W" build -v $MODS
  match_text "Built Test.X" produced.out
  for m in Test.B Test.C Test.D; do no_match_text "Built $m" produced.out; done
  # (c) W has a previous build of each module, so its own same-tree cutoff decides: it reads no alias
  test_cmd_eq 0 kept_reqs
  on_w test_run -d "$W" cache push --wait
  for m in B C D; do
    eval "H2_$m=$(inhash "$W" "Test.$m")"
    eval "test_cmd store kept \"\$SCOPE_DIR\" Test.$m \"\$H2_$m\" \"\$H1_$m\""
  done
  H2_X="$(inhash "$W" Test.X)"
}

case_reader() {
  # 3. A fresh reader at W's state compiles nothing: X and A hit by input hash, and B, C and D through their
  # aliases, with the first compile's outputs and the sidecars its archives hold.
  R="$TREES/r"
  R_CACHE="$WORK_DIR/r-cache"
  test_cmd rm -rf "$R_CACHE"
  fresh_tree "$R"
  mark
  on_r "$R_CACHE" test_not_out "Built " -d "$R" build -v $MODS
  for m in Test.B Test.C Test.D; do jobhas "$m" "remote cache alias: restored"; done
  # One alias read for each of B, C and D, which miss by input hash (this also shows `kept_reqs` counts them)
  test_cmd_eq 3 kept_reqs
  for f in A X B C D; do test_cmd cmp "$W/$OUT/$f.olean" "$R/$OUT/$f.olean"; done
  for ext in usage resolved usekey; do
    [ -f "$WORK_DIR/w1/B.$ext" ] || continue
    test_cmd cmp "$WORK_DIR/w1/B.$ext" "$R/$OUT/B.$ext"
  done
  test_exp -f "$R/$OUT/B.usage"
  test_exp -f "$R/$OUT/B.usekey"
  # 4. The restored sidecars serve R's own cutoff: after another unused edit, R keeps B and compiles X.
  edx "$R" 3
  on_r "$R_CACHE" lake_out -d "$R" build -v $MODS
  match_text "Built Test.X" produced.out
  no_match_text "Built Test.B" produced.out
}

# fresh_alias_reader NAME CMD... -- a fresh tree at W's state, with a cache of its own, built by `on_r` with the
# arguments CMD..., whose `produced.out` is checked: it reads no alias and prints no alias line, so B, C and D,
# which it cannot get by input hash, compile, while A and X hit by input hash
fresh_alias_reader() {
  local r="$TREES/$1"; shift
  fresh_tree "$r"
  mark
  on_r "$WORK_DIR/$(basename "$r")-cache" lake_out -d "$r" "$@" $MODS
  no_match_text "remote cache alias" produced.out
  for m in Test.B Test.C Test.D; do match_text "Built $m" produced.out; done
  for m in Test.A Test.X; do no_match_text "Built $m" produced.out; done
  test_cmd_eq 0 kept_reqs
}

case_old() {
  # (a) Under `--old`, which would take restored files as up to date by their modification times, a reader with
  # restored artifacts reads no alias.
  fresh_alias_reader r-old build -v --old
}

case_restore_off() {
  # (b) Without restored artifacts, which the cutoff's check needs in the build directory, a reader reads no alias.
  ( unset LAKE_RESTORE_ARTIFACTS; fresh_alias_reader r-norestore build -v )
}

case_forged() {
  # 5. A forged alias: R2 has `a := 2` (which B uses) and the unused edit, and the store has aliases for R2's input
  # hashes of B and C that name their first compiles (`a := 1`). The reader checks before it keeps: B's check fails
  # and B compiles, while C (which uses nothing from `A`) is kept; X hits by input hash.
  R2="$TREES/r2"
  fresh_tree "$R2"
  printf 'def a := 2\n' > "$R2/Test/A.lean"
  # R2's input hashes, from a build without the remote cache
  LAKE_CACHE_DIR="$WORK_DIR/r2-probe" test_run -d "$R2" build $MODS
  local hb hc
  hb="$(inhash "$R2" Test.B)"
  hc="$(inhash "$R2" Test.C)"
  test_cmd rm -rf "$R2/.lake" "$WORK_DIR/r2-probe"
  test_cmd store forge "$SCOPE_DIR" Test.B "$hb" "$H1_B" "$(store src "$SCOPE_DIR" Test.B "$H1_B")"
  test_cmd store forge "$SCOPE_DIR" Test.C "$hc" "$H1_C" "$(store src "$SCOPE_DIR" Test.C "$H1_C")"
  on_r "$WORK_DIR/r2-cache" lake_out -d "$R2" build -v $MODS
  match_text "Built Test.B" produced.out
  jobhas Test.B "remote cache alias: the compile of input $H1_B does not pass for input $hb"
  no_match_text "Built Test.C" produced.out
  jobhas Test.C "remote cache alias: restored the compile of input $H1_C for input $hc"
  no_match_text "Built Test.X" produced.out
  # B's `.usage` is R2's own compile's, not the forged one's (the `.olean`s can have the same bytes)
  test_cmd_fails cmp -s "$WORK_DIR/w1/B.usage" "$R2/$OUT/B.usage"
}

case_dangling() {
  # (e) A dangling alias: the store has an alias for R4's input hash of B (R4 has another value of the unused edit)
  # that names an input with no `in/` mapping. The reader logs that the compile could not be restored and compiles
  # B, and the build succeeds; A hits by input hash in the same build.
  local r4="$TREES/r4" hb
  fresh_tree "$r4"
  printf 'def x := 0\ndef x2 := 5\n' > "$r4/Test/X.lean"
  LAKE_CACHE_DIR="$WORK_DIR/r4-probe" test_run -d "$r4" build $MODS
  hb="$(inhash "$r4" Test.B)"
  test_cmd rm -rf "$r4/.lake" "$WORK_DIR/r4-probe"
  test_cmd_eq 0 ninputs_for Test.B 0123456789abcdef
  test_cmd store forge "$SCOPE_DIR" Test.B "$hb" 0123456789abcdef "$(store src "$SCOPE_DIR" Test.B "$H1_B")"
  on_r "$WORK_DIR/r4-cache" lake_out -d "$r4" build -v $MODS
  jobhas Test.B "remote cache alias: input $hb names input 0123456789abcdef, which could not be restored"
  match_text "Built Test.B" produced.out
  no_match_text "Built Test.A" produced.out
}

case_cutoff_off() {
  # 6. A cutoff-off reader at W's state has other input hashes: it compiles every module, downloads no artifact
  # and, since the cutoff does not apply, reads no alias (d).
  local r="$TREES/r-off"
  fresh_tree "$r"
  mark
  ( unset LAKE_USAGE_CUTOFF; on_r "$WORK_DIR/r-off-cache" lake_out -d "$r" build -v $MODS )
  for m in $MODS; do match_text "Built $m" produced.out; done
  since_mark > run-server.log
  test_cmd_eq 0 count_path /a/ run-server.log
  test_cmd_eq 0 kept_reqs
}

case_aliases_off() {
  # 7. Without `LAKE_REMOTE_CACHE_ALIASES`, a writer (package `test2`, a scope of its own) publishes its compiles
  # but no alias for the modules its cutoff keeps.
  local w2="$TREES/w2" scope2
  scope2="$STORE_DIR/a0/$(remote_scope test2)"
  mkpkg "$w2" 1 test2
  on_w2() {
    LAKE_CACHE_DIR="$WORK_DIR/w2-cache" LAKE_REMOTE_CACHE=bearer LAKE_CACHE_TOKEN_CMD="$TOKEN_CMD" \
      LAKE_REMOTE_CACHE_QUEUE=true "$@"
  }
  on_w2 test_run -d "$w2" build $MODS
  edx "$w2"
  on_w2 lake_out -d "$w2" build -v $MODS
  no_match_text "Built Test.B" produced.out
  on_w2 test_run -d "$w2" cache push --wait
  for m in $MODS; do test_cmd store archive "$scope2" "$m"; done
  test_cmd_eq 0 store kepts "$scope2"
}

case_bad_archive() {
  # 8. A damaged archive: the bytes of B's `.ltar` in the store are replaced by others, which do not match its
  # SHA-256 entry. A fresh reader at W's first state does not restore B from that mapping: it logs the mismatch and
  # compiles B. C hits by input hash in the same build.
  local r3="$TREES/r3" art
  fresh_tree "$r3"
  printf 'def x := 0\n' > "$r3/Test/X.lean"
  art="$(store art "$SCOPE_DIR" Test.B "$H1_B")"
  test_cmd rm -f "$art"
  echo 'not the archive' > "$art"
  on_r "$WORK_DIR/r3-cache" lake_out -d "$r3" build -v $MODS
  match_text "Built Test.B" produced.out
  jobhas Test.B "SHA-256"
  no_match_text "Built Test.C" produced.out
  test_cmd cmp "$WORK_DIR/w1/C.olean" "$r3/$OUT/C.olean"
}

# The cases depend on each other in this order (W's state, the hashes they record, the store)
run_cases case_publish case_aliases case_reader case_old case_restore_off case_forged case_dangling \
  case_cutoff_off case_aliases_off case_bad_archive

rm -f produced.out job.out
