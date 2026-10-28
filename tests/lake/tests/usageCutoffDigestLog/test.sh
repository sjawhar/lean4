#!/usr/bin/env bash
source ../common.sh
# The usage cutoff's cheap paths, each against the answer of the expensive one:
# - the stamped digest log `.lake/usage-digests` (`DigestLog`), which gives a later Lake process the hash of an
#   `.olean` that an earlier one read, only while the file's stamp (device, inode, size, modification and
#   status-change times) is the recorded one;
# - the early exit of `Module.usageVerdict` for a module whose direct import has a changed closure
#   (`changedDirectImport?`), before the module's `.usage` is read;
# - the usage index's pre-filter, which reuses that decision's closure and changed import.
# `./test.sh CASE...` runs only the cases listed (e.g. `./test.sh 1 3`).
./clean.sh
STUB="$PWD/stub.sh"
mkdir -p work && cd work
unset LAKE_KEPT_CHECKER LAKE_KEPT_EXCLUDE LAKE_USAGE_CUTOFF LAKE_ARTIFACT_CACHE LAKE_RESTORE_ARTIFACTS
export LAKE_USAGE_CUTOFF=1

OUT=.lake/build/lib/lean/P
LOG=.lake/usage-digests
# Lake logs a hash only on a file system that sets status-change times itself (`Lean.ModuleUsage.stampsFine`): there
# the cases check that the log is used; elsewhere, that it is never written, and the decisions still come out right.
case "$(stat -f -c %T .)" in
  ext2/ext3|xfs|btrfs|tmpfs) FINE=1;;
  *) FINE=0; echo "NOTE: $(stat -f -c %T .) is not a file system the log uses: checking that no log is written";;
esac
# log_has DIR FILE -- DIR's log records FILE (a path suffix) on a file system the log uses; none is written elsewhere
log_has() {
  if [ $FINE = 1 ]; then test_cmd grep -qaF "$2" "$1/$LOG"; else test_exp ! -e "$1/$LOG"; fi
}
# Lines that give `P.M` a `@[csimp]` entry: a cross-module compiler table entry, which changes `P.M`'s closure digest
# (`Lean.ModuleUsage.tableDigest`; a `@[simp]` lemma would not)
CSIMP='def mSlow (n : Nat) : Nat := n + 0\ndef mFast (n : Nat) : Nat := n\n@[csimp] theorem mSlow_eq : @mSlow = @mFast := by funext n; rfl\n'

# mkpkg DIR [V] -- package `p` in DIR: `P.D` defines `sharedValue := V` (default 2); `P.M` imports `P.D` and `P.E`
# and proves `sharedValue = 2`; `P.R`, the aggregator, imports `P.M`, `P.D` and the leaves `P.L1`..`P.L3`
mkpkg() {
  mkdir -p "$1/P"
  printf 'name = "p"\n[[lean_lib]]\nname = "P"\n' > "$1/lakefile.toml"
  printf 'def sharedValue : Nat := %s\n' "${2:-2}" > "$1/P/D.lean"
  printf 'def e0 : Nat := 0\n' > "$1/P/E.lean"
  printf 'import P.D\nimport P.E\ntheorem kept : sharedValue = 2 := rfl\n' > "$1/P/M.lean"
  for l in 1 2 3; do printf 'def l%s : Nat := %s\n' $l $l > "$1/P/L$l.lean"; done
  printf 'import P.M\nimport P.D\nimport P.L1\nimport P.L2\nimport P.L3\ndef r : Nat := sharedValue + l1 + l2 + l3\n' \
    > "$1/P/R.lean"
}
# ede DIR N -- `P.E` gains a definition no module uses: `P.M` and `P.R` get new input hashes, and their checks read
# `P.D` and replay them
ede() { printf 'def e%s : Nat := %s\n' "$2" "$2" >> "$1/P/E.lean"; }
# stampof FILE -- the parts of FILE's stamp that a copy in place keeps: inode, size and modification time
stampof() { stat -c '%d %i %s %.9Y' "$1"; }
# rewrite_d DIR -- replace the bytes of DIR's `P/D.olean` in place with those of `alt`'s (`sharedValue := 3`, an
# `.olean` of the same size), keeping its inode, size and modification time: only the status-change time shows the write
rewrite_d() {
  local before
  before=$(stampof "$1/$OUT/D.olean")
  test_exp "$(stat -c %s "$1/$OUT/D.olean")" = "$(stat -c %s alt/$OUT/D.olean)"
  test_cmd_fails cmp -s "$1/$OUT/D.olean" alt/$OUT/D.olean
  cp -p "$1/$OUT/D.olean" d-old.olean
  cat alt/$OUT/D.olean > "$1/$OUT/D.olean"
  touch -r d-old.olean "$1/$OUT/D.olean"
  test_exp "$(stampof "$1/$OUT/D.olean")" = "$before"
  test_cmd cmp alt/$OUT/D.olean "$1/$OUT/D.olean"
}
# mkalt -- `alt`, the package with `sharedValue := 3`, built: its `P/D.olean` is what `rewrite_d` writes
mkalt() { mkpkg alt 3; test_run -d alt build P.D; }
# replays_m DIR -- an unused edit to `P.E`; the build of `P.R` replays `P.M`
replays_m() {
  ede "$1" "$2"
  test_out "Replayed P.M" -d "$1" build -v P.R
}
# opened TRACE FILE -- the lines of an `strace` log TRACE that open FILE (a path suffix) for reading
opened() { grep -E "open(at)?\(.*[\"/]$2\", O_RDONLY" "$1" || true; }
# before_exec TRACE SRC -- the lines of TRACE before the first `execve` whose arguments name SRC
before_exec() { awk -v s="$2" '/execve\(/ && index($0, s) { exit } { print }' "$1"; }

# 1. A record of the log is taken only for the bytes it was made from. A second process's check of `P.M` hashes
# `P/D.olean` and records it. Then `P/D.olean` gets other bytes of the same size in place, with its modification time
# set back: inode, size and modification time are those of the record, only the status-change time differs. A new
# process that checks `P.M` must see `sharedValue := 3`: `P.M` is compiled, and its proof fails, as it does from
# scratch.
case1() {
  mkalt
  mkpkg t
  test_run -d t build P.R
  # a hash is recorded only for a file whose status-change time lies in the past
  sleep 3
  replays_m t 1
  log_has t "P/D.olean"
  rewrite_d t
  ede t 2
  test_status_out 1 "P/M.lean" -d t build -v P.R
  no_match_text "Replayed P.M" produced.out
  # from scratch: the same failure
  mkpkg fresh
  cp alt/P/D.lean fresh/P/D.lean
  test_status_out 1 "P/M.lean" -d fresh build P.R
}

# 1b. A log cut in the middle of a record, or with bytes appended that are no record, breaks no build, and the
# decisions it serves stay right: an unchanged `P.D` replays `P.M`, and a `P.D` rewritten in place compiles it.
# A record whose digest is damaged is not taken either: `P.M` is replayed, not compiled against the damaged hash.
case1b() {
  local size
  mkalt
  for damage in cut garbage flip; do
    mkpkg $damage
    test_run -d $damage build P.R
    sleep 3
    replays_m $damage 1
    log_has $damage "P/D.olean"
    if [ $FINE = 0 ]; then continue; fi
    size=$(stat -c %s $damage/$LOG)
    case $damage in
      cut) test_cmd truncate -s $((size - 13)) $damage/$LOG;;
      garbage) printf 'this is not a record of the log\0\1\2\3\4\5\6\7' >> $damage/$LOG;;
      flip)
        # a byte of the digest of `P/D.olean`'s last record: the record's path, then seven stamp fields, then the digest
        local at
        at=$(grep -aboF "P/D.olean" $damage/$LOG | tail -n 1 | cut -d: -f1)
        printf '\377' | dd of=$damage/$LOG bs=1 seek=$((at + 9 + 7 * 8 + 3)) conv=notrunc status=none
        ;;
    esac
    replays_m $damage 2
    rewrite_d $damage
    ede $damage 3
    test_status_out 1 "P/M.lean" -d $damage build -v P.R
    no_match_text "Replayed P.M" produced.out
  done
}

# 2. The log is used: a new process whose checks read `P.D`, unchanged since an earlier process hashed it, takes its
# hash from the log and does not open `P/D.olean`.
case2() {
  if ! command -v strace > /dev/null || [ $FINE = 0 ]; then
    echo "SKIPPED: case 2 needs strace and a file system the log uses"
    return 0
  fi
  mkpkg t
  test_run -d t build P.R
  sleep 3
  replays_m t 1
  ede t 2
  echo '$' strace lake build -v P.R
  strace -f -e trace=open,openat -o open.trace "$LAKE" -d t build -v P.R > produced.out 2>&1
  cat produced.out
  match_text "Replayed P.M" produced.out
  match_text "Replayed P.R" produced.out
  # (premise) the trace sees the files the build opens
  test_exp -n "$(opened open.trace "$OUT/E.olean")"
  test_exp -z "$(opened open.trace "$OUT/D.olean")"
}

CLOSURE_REASON="its import closure changed, so a name it looked up, used or referred to may resolve elsewhere"

# 3. A wide module whose direct import's closure changed is compiled without its own `.usage` being read: `P.M` gains a
# `@[csimp]` lemma (`CSIMP`), which changes its closure digest but nothing `P.R` uses. `P.R` compiles for that reason
# (the kept-module check says why it does not ask), before it reads its `.usage`, and its `.usage` and `.usekey` are
# the ones a build from scratch writes. An edit to `P.M` that keeps its closure, though `P/M.usekey` is then newer than
# `P/R.usekey`, still replays `P.R`.
case3() {
  mkpkg t
  test_run -d t build P.R
  printf 'def mPlain : Nat := 0\n' >> t/P/M.lean
  test_out "Replayed P.R" -d t build -v P.R
  match_text "Built P.M" produced.out
  printf "$CSIMP" >> t/P/M.lean
  if command -v strace > /dev/null; then
    echo '$' strace lake build -v P.R
    LAKE_KEPT_CHECKER="$STUB" strace -f -s 4096 -e trace=open,openat,execve -o open.trace "$LAKE" -d t build -v P.R \
      > produced.out 2>&1
    cat produced.out
    before_exec open.trace "P/R.lean" > before.trace
    # (premise) the trace holds the compile of `P.R`, and the decision's read of the key of `P.M`
    test_exp "$(wc -l < before.trace)" -lt "$(wc -l < open.trace)"
    test_exp -n "$(opened before.trace "$OUT/M.usekey")"
    test_exp -z "$(opened before.trace "$OUT/R.usage")"
  else
    LAKE_KEPT_CHECKER="$STUB" lake_out -d t build -v P.R
  fi
  match_text "Built P.M" produced.out
  match_text "Built P.R" produced.out
  match_text "kept-module check: not asked: $CLOSURE_REASON" produced.out
  mkpkg fresh
  cp t/P/M.lean fresh/P/M.lean
  test_run -d fresh build P.R
  test_cmd cmp fresh/$OUT/R.usage t/$OUT/R.usage
  test_cmd cmp fresh/$OUT/R.usekey t/$OUT/R.usekey
}

# 3b. The early exit looks only at the direct imports whose key is newer than the module's: `P/L1.olean` gets other bytes
# behind Lake's back (its key no longer describes it), and `P.M` gains the `@[csimp]` lemma. Folding every direct
# import's closure would find no record for `P.L1` ("a direct import has no usage record that shows its closure");
# the decision finds `P.M`'s changed closure first, and says so.
case3b() {
  mkpkg altl
  printf 'def l1 : Nat := 5\n' > altl/P/L1.lean
  test_run -d altl build P.L1
  mkpkg t
  test_run -d t build P.R
  test_cmd_fails cmp -s t/$OUT/L1.olean altl/$OUT/L1.olean
  cp -p t/$OUT/L1.olean l1-old.olean
  cat altl/$OUT/L1.olean > t/$OUT/L1.olean
  touch -r l1-old.olean t/$OUT/L1.olean
  printf "$CSIMP" >> t/P/M.lean
  LAKE_KEPT_CHECKER="$STUB" lake_out -d t build -v P.R
  match_text "Built P.M" produced.out
  match_text "Built P.R" produced.out
  match_text "kept-module check: not asked: $CLOSURE_REASON" produced.out
  no_match_text "a direct import has no usage record" produced.out
}

# 4. The usage index's pre-filter rejects a candidate of `P.R` whose key records another closure of `P.M`, the import
# whose closure the decision found changed, before it reads the candidate's usage record, and still restores the
# candidate with the current closures. `t` builds the state before `P.M`'s `@[csimp]` lemma (one candidate), `f` the
# state after (the other); then `t` moves to the state after, with an unused definition in `P.L1`, so that `P.R`'s
# input hash is none the cache has seen.
case4() {
  export LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
  mkpkg t
  test_run -d t build P.R
  mkpkg f
  printf "$CSIMP" >> f/P/M.lean
  test_run -d f build P.R
  printf "$CSIMP" >> t/P/M.lean
  printf 'def l1b : Nat := 0\n' >> t/P/L1.lean
  lake_out -d t build -v P.R
  jobhas P.R "usage index: restored"
  jobhas P.R "(2 candidates, 1 parsed, 1 fully checked"
  no_match_text "Built P.R" produced.out
  test_cmd cmp f/$OUT/R.olean t/$OUT/R.olean
  # with only the old candidate, in a cache of its own: rejected on its key, and compiled
  export LAKE_CACHE_DIR="$PWD/cache2"
  mkpkg t2
  test_run -d t2 build P.R
  printf "$CSIMP" >> t2/P/M.lean
  printf 'def l1b : Nat := 0\n' >> t2/P/L1.lean
  lake_out -d t2 build -v P.R
  jobhas P.R "usage index: no match (1 candidates, 0 parsed, 0 fully checked"
  jobhas P.R "Built P.R"
}

# joblog MOD [FILE] -- what a build's output (FILE, default `produced.out`) prints for MOD's job
joblog() {
  awk -v m=" $1" '/^[^ ]+ \[[0-9]+\/[0-9]+\]/ {
    s = $0; sub(/ \([0-9.]+m?s\)$/, "", s); show = substr(s, length(s) - length(m) + 1) == m }
    show' "${2:-produced.out}"
}
jobhas() { joblog "$1" "${3:-produced.out}" > job.out; match_text "$2" job.out; }

runcase() {
  echo "=== case $1"
  mkdir -p "c$1"
  (
    cd "c$1"
    export LAKE_CACHE_DIR="$PWD/cache"
    "case$1"
  )
}

if [ $# = 0 ]; then set -- 1 1b 2 3 3b 4; fi
for c in "$@"; do runcase "$c"; done

rm -f produced.out
