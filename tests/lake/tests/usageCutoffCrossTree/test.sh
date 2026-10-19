#!/usr/bin/env bash
source ../common.sh
# A build that misses the artifact cache by input hash looks up the cache's earlier compiles of the same module
# with the same local inputs (source, options, toolchain, ...: the usage index), checks each with the usage
# cutoff's check against the current imports, and on a pass restores its outputs instead of compiling.
#
# Each case runs in its own directory under `work/`, with a Lake cache of its own that one or more fresh package
# directories share. Restored and cached outputs are read-only hard links into the cache, so a case edits one by
# replacing it, never by writing through it. `./test.sh CASE...` runs only the cases listed (e.g. `./test.sh 4 6a`).
./clean.sh
LAKEFILE="$PWD/lakefile.toml"
STUB="$PWD/stub.sh"
mkdir -p work && cd work
unset LAKE_KEPT_CHECKER LAKE_KEPT_EXCLUDE LAKE_USAGE_CUTOFF
export LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true

OUT=.lake/build/lib/lean/Test
ALL="Test.B Test.C Test.D Test.E Test.G"

# mkpkg DIR [A] -- the filling sources in package dir DIR, with `def a := A` (default 1): `A` defines `a`, `ta`
# and `a3`; `B`, `C` and `D` import `A` and `X` and use `a`, `a3`, and `ta` (and `a`); `E` imports `B`; `MS` is
# a module-system file whose macro `mkms` `G` (importing `MS` and `X`) uses, so `MS` is one of `G`'s `extra` modules
mkpkg() {
  mkdir -p "$1/Test"
  cp "$LAKEFILE" "$1/lakefile.toml"
  seta "$1" "${2:-1}"
  printf 'def x := 0\n' > "$1/Test/X.lean"
  printf 'import Test.A\nimport Test.X\ndef b := a + 1\n' > "$1/Test/B.lean"
  printf 'import Test.A\nimport Test.X\ndef c := a3\n' > "$1/Test/C.lean"
  printf 'import Test.A\nimport Test.X\ntheorem td : a = 1 := ta\n' > "$1/Test/D.lean"
  printf 'import Test.B\ndef e := b + 1\n' > "$1/Test/E.lean"
  printf 'module\npublic section\nmacro "mkms" : term => `(1)\n' > "$1/Test/MS.lean"
  printf 'import Test.MS\nimport Test.X\ndef g : Nat := mkms\n' > "$1/Test/G.lean"
}
# seta DIR V [PROOF] -- `A` with `def a := V`, and `ta` proved by PROOF (default `sorry`)
seta() { printf 'def a := %s\ntheorem ta : a = 1 := %s\ndef a3 := 7\n' "$2" "${3:-sorry}" > "$1/Test/A.lean"; }
# edx DIR [V] -- "the unused edit": `X` gains `def x2 := V` (default 1), which no module uses, and which gives every
# module above `X` a new input hash
edx() { printf 'def x := 0\ndef x2 := %s\n' "${2:-1}" > "$1/Test/X.lean"; }

# (sed, not jq: entries and traces are pretty-printed, one key per line)
depHash() { sed -n 's/.*"depHash": *"\([0-9a-f]*\)".*/\1/p' "$1"; }
entryArt() { sed -n "s/.*\"$2\": *\"\\([^\"]*\\)\".*/\\1/p" "$1"; }
# entry DIR MOD [OUTDIR] -- the cache's outputs entry for MOD's current input hash in package dir DIR
entry() { echo "$LAKE_CACHE_DIR/outputs/${PKG:-test}/$(depHash "$1/${3:-$OUT}/$2.trace").json"; }
# idxdir DIR MOD -- MOD's usage-index directory: its package's, under the local hash its `.usekey` in DIR records
idxdir() {
  echo "$LAKE_CACHE_DIR/usage-index/${PKG:-test}/$(sed -n 's/.*"local":"\([0-9a-f]*\)".*/\1/p' "$1/${3:-$OUT}/$2.usekey")"
}
# idxname DIR MOD -- the name of the usage-index file of the compile whose outputs DIR's entry for MOD names: the
# hash of its `.usekey`
idxname() { local k; k=$(entryArt "$(entry "$1" "$2" "${3:-}")" k); echo "${k%.usekey}.json"; }
# idxfiles -- every file under the cache's usage index, one per line
idxfiles() { if [ -d "$LAKE_CACHE_DIR/usage-index" ]; then (cd "$LAKE_CACHE_DIR" && find usage-index -type f | sort); fi; }
# joblog MOD [FILE] -- what a build's output (FILE, default `produced.out`) prints for MOD's job: its caption line
# and the log after it, up to the next job's caption
joblog() {
  awk -v m=" $1" '/^[^ ]+ \[[0-9]+\/[0-9]+\]/ {
    s = $0; sub(/ \([0-9.]+m?s\)$/, "", s); show = substr(s, length(s) - length(m) + 1) == m }
    show' "${2:-produced.out}"
}
# jobhas MOD TEXT [FILE] / jobnot MOD TEXT [FILE] -- MOD's job prints TEXT / does not
jobhas() { joblog "$1" "${3:-produced.out}" > job.out; match_text "$2" job.out; }
jobnot() { joblog "$1" "${3:-produced.out}" > job.out; no_match_text "$2" job.out; }

# 1. A hit when only an unused import changed: no tree built B and G against the edited `X`, and the cache's
# compiles of them pass the cutoff's check. G's `extra` module `MS` is a module-system file, whose `.usekey` the
# check does not read.
case1() {
  mkpkg f
  test_run -d f build $ALL
  # (premise) the macro's module reaches G's `extra`, as `usageCutoff` shows for a non-module file
  test_cmd_out '"extra":[[["Test","MS"],"' cat f/$OUT/G.usekey
  mkpkg t
  edx t
  lake_out -d t build -v Test.B Test.G
  no_match_text "Built Test.B" produced.out
  jobhas Test.B "Reused Test.B"
  jobhas Test.B "usage index: restored"
  jobhas Test.B "1 candidates, 1 parsed, 1 fully checked"
  test_cmd cmp f/$OUT/B.olean t/$OUT/B.olean
  jobhas Test.G "usage index: restored"
  no_match_text "Built Test.G" produced.out
}

# 2. A miss when a used constant changed meaning, found by the pre-filter: a theorem's proof (part of its
# meaning), then a definition's value. C, which uses neither, hits in the same build.
case2() {
  mkpkg f
  test_run -d f build $ALL
  mkpkg t
  edx t
  seta t 1 rfl
  lake_out -d t build -v Test.C Test.D
  jobhas Test.C "usage index: restored"
  jobhas Test.D "usage index: no match (1 candidates, 1 parsed, 0 fully checked"
  jobhas Test.D "0 importees bound"
  jobhas Test.D "Built Test.D"
  mkpkg t2 2
  edx t2
  lake_out -d t2 build -v Test.B Test.C
  jobhas Test.C "usage index: restored"
  jobhas Test.B "usage index: no match ("
  jobhas Test.B "0 fully checked"
  jobhas Test.B "Built Test.B"
}

# 3. Other local inputs give another index directory: another source of B (C hits in the same build), other
# options, and the cutoff off, which also writes nothing to the index
case3() {
  mkpkg f
  test_run -d f build $ALL
  mkpkg t
  edx t
  printf 'import Test.A\nimport Test.X\ndef b := a + 2\n' > t/Test/B.lean
  lake_out -d t build -v Test.B Test.C
  jobhas Test.C "usage index: restored"
  jobhas Test.B "Built Test.B"
  jobnot Test.B "usage index"
  mkpkg t2
  edx t2
  printf '[leanOptions]\nmaxRecDepth = 1000\n' >> t2/lakefile.toml
  lake_out -d t2 build -v Test.B
  match_text "Built Test.B" produced.out
  no_match_text "usage index" produced.out
  idxfiles > idx-before.txt
  mkpkg t3
  edx t3
  LAKE_USAGE_CUTOFF=0 lake_out -d t3 build -v Test.B
  match_text "Built Test.B" produced.out
  no_match_text "usage index" produced.out
  idxfiles > idx-after.txt
  test_cmd cmp idx-before.txt idx-after.txt
}

# 4. A damaged candidate: its `.c` (checked after the restore), then, with a cache of its own, its `.olean` (bound
# by the check), each replaced in the cache by other bytes. The entry is quarantined, and B builds; C, which does not
# import B, hits in the same build.
case4() {
  local round file art
  for round in c olean; do
    export LAKE_CACHE_DIR="$PWD/cache-$round"
    mkpkg f-$round
    test_run -d f-$round build $ALL
    if [ $round = c ]; then file=f-$round/.lake/build/ir/Test/B.c; else file=f-$round/$OUT/B.olean; fi
    art="$(cat "$file.hash").$round"
    # `cat`, not `cp`: the output is a read-only link into the cache, whose mode `cp` would copy
    cat "$LAKE_CACHE_DIR/artifacts/$art" > good.tmp
    { cat good.tmp; printf '\n/* replaced */\n'; } > bad.tmp
    mv -f bad.tmp "$LAKE_CACHE_DIR/artifacts/$art"
    mkpkg t-$round
    edx t-$round
    lake_out -d t-$round build -v Test.B Test.C
    jobhas Test.C "usage index: restored"
    jobhas Test.B "warning: usage index: $LAKE_CACHE_DIR/artifacts/$art"
    test_exp -f "$LAKE_CACHE_DIR/quarantine/$art.0"
    jobhas Test.B "usage index: no match (1 candidates, 1 parsed, 1 fully checked"
    jobhas Test.B "Built Test.B"
    if [ $round = olean ]; then
      # the compile's `.olean` takes the quarantined entry's place, with the bytes it had
      test_cmd cmp "$file" "$LAKE_CACHE_DIR/artifacts/$art"
    fi
  done
}

# 5. A hit records the restored outputs under the module's input hash (an alias), which the next lookup by input
# hash finds, in the same tree and in a fresh one
case5() {
  mkpkg f
  test_run -d f build $ALL
  mkpkg t
  edx t
  lake_out -d t build -v Test.B
  no_match_text "Built Test.B" produced.out
  jobhas Test.B "usage index: restored"
  test_exp -f "$(entry t B)"
  test_exp "$(entryArt "$(entry t B)" k)" = "$(entryArt "$(entry f B)" k)"
  lake_out -d t build -v Test.B
  no_match_text "Built" produced.out
  no_match_text "usage index" produced.out
  mkpkg t2
  edx t2
  lake_out -d t2 build -v Test.B
  jobhas Test.B "Reused Test.B"
  no_match_text "usage index" produced.out
}

# 6a. Another workspace rewrites a dependency the build has read: workspaces `a` and `b` require the same path
# dependency `D`, and each build holds only its own workspace's lock, so `b` rebuilds `D` while a build of `a` holds.
# `M0`'s lookup reads `D`'s sidecars before the rewrite; then `D`'s `shared_eq` gets another proof (which leaves its
# closure as it was). `M`, which uses `shared_eq`, passes the pre-filter against what this build first read of `D`,
# and its full check, which reads `D` again, rejects it. `M2`, which uses only `otherValue`, is restored against the
# rewritten `D`. (Theorems keep `D` out of a module's `extra` modules.)
case6a() {
  waiter() {
    printf '%s\n' '#eval do' \
      "  IO.FS.writeFile \"$PWD/ready\" \"\"" \
      '  for _ in [:600] do' \
      "    if ← System.FilePath.pathExists \"$PWD/release\" then return" \
      '    IO.sleep 100' \
      '  throw <| IO.userError "the test did not release the build"'
  }
  mka() {
    mkdir -p "$1/T"
    printf 'name = "a"\n[[require]]\nname = "shared"\npath = "../dep"\n[[lean_lib]]\nname = "T"\n' > "$1/lakefile.toml"
    printf 'def u := 0\n' > "$1/T/U.lean"
    printf 'import D\nimport T.U\ntheorem m0t : otherValue = 3 := rfl\n' > "$1/T/M0.lean"
    { printf 'import T.M0\nimport T.U\n'; waiter; } > "$1/T/Slow.lean"
    printf 'import T.Slow\nimport D\ntheorem kept : sharedValue = 1 := shared_eq\n' > "$1/T/M.lean"
    printf 'import T.Slow\nimport D\ntheorem m2t : otherValue = 3 := rfl\n' > "$1/T/M2.lean"
  }
  local d_src='def sharedValue : Nat := 1\ntheorem shared_eq : sharedValue = 1 := %s\ndef otherValue : Nat := 3\n'
  mkdir -p dep b
  printf 'name = "shared"\n[[lean_lib]]\nname = "D"\n' > dep/lakefile.toml
  printf "$d_src" sorry > dep/D.lean
  printf 'name = "b"\n[[require]]\nname = "shared"\npath = "../dep"\n' > b/lakefile.toml
  # a copy of `a` fills the cache
  mka fill
  touch release
  test_run -d fill build T.M T.M2
  test_run -d b build D
  # the tree under test: `U` and `Slow` gain a definition
  mka a
  printf 'def u2 := 0\n' >> a/T/U.lean
  printf 'def slow2 := 0\n' >> a/T/Slow.lean
  rm -f ready release
  "$LAKE" -d a build -v T.M T.M2 > race.log 2>&1 &
  local pid=$!
  for _ in $(seq 600); do
    test -f ready && break
    sleep 0.1
  done
  test_exp -f ready
  printf "$d_src" rfl > dep/D.lean
  test_run -d b build D
  touch release
  local rc=0
  wait $pid || rc=$?
  cat race.log
  test_exp $rc = 0
  jobhas T.M0 "usage index: restored" race.log
  jobhas T.M "usage index: no match (1 candidates, 1 parsed, 1 fully checked" race.log
  jobhas T.M "Built T.M" race.log
  jobhas T.M2 "usage index: restored" race.log
  no_match_text "Built T.M2" race.log
}

# 6b. Concurrent writers of one module's index: 20 trees, two of them with the same sources, build B at once
case6b() {
  local i n f k v=
  for i in $(seq 20); do
    mkpkg t$i $((i < 20 ? i : 1))
    test_run -d t$i build Test.A Test.X
  done
  local pids=() rc=0
  for i in $(seq 20); do
    "$LAKE" -d t$i build Test.B > t$i.log 2>&1 &
    pids+=($!)
  done
  for i in $(seq 20); do
    wait ${pids[$((i - 1))]} || { rc=$?; cat t$i.log; }
  done
  test_exp $rc = 0
  local d
  d=$(idxdir t1 B)
  test_exp -d "$d"
  n=$(find "$d" -maxdepth 1 -name '*.json' | wc -l)
  test_exp "$n" -ge 1
  test_exp "$n" -le 8
  test_exp -z "$(find "$d" -name '*.tmp-*')"
  # every file is complete (when python3 can parse it) and names only artifacts in the cache
  for f in "$d"/*.json; do
    if command -v python3 > /dev/null; then
      test_cmd python3 -c 'import json, sys; json.load(open(sys.argv[1]))' "$f"
    fi
    test_cmd grep -qE '"k": *"[0-9a-f]{16}\.usekey"' "$f"
    for k in $(grep -oE '"[0-9a-f]{16}\.[a-z.]+"' "$f" | tr -d '"'); do
      test_exp -f "$LAKE_CACHE_DIR/artifacts/$k"
    done
  done
  # a fresh tree with the sources of a surviving file's compile, and the unused edit, which no tree built
  f=$(basename "$(ls -t "$d"/*.json | tail -n 1)")
  for i in $(seq 20); do
    if [ "$(idxname t$i B)" = "$f" ]; then v=$((i < 20 ? i : 1)); fi
  done
  test_exp -n "$v"
  mkpkg tf $v
  edx tf
  lake_out -d tf build -v Test.B
  jobhas Test.B "usage index: restored"
  no_match_text "Built Test.B" produced.out
}

# 7. A tree with a stale previous build of its own: T builds the filling sources with `a := 1`, then another tree
# builds them with `a := 2`. In T, the lookup runs after the cutoff's same-tree check fails: on `a` (7a), on outputs
# that are not what the trace describes (7b), and without outputs (7c). The lookup binds only the importees the
# same-tree check did not: it stops at `A`'s `a`, before it binds `X`. 7d: B's own outputs pass the same-tree check.
case7() {
  mkpkg T
  test_run -d T build Test.B
  mkpkg f 2
  test_run -d f build Test.B
  # 7a
  seta T 2
  edx T 1
  lake_out -d T build -v Test.B
  jobhas Test.B "usage index: restored"
  jobhas Test.B "1 importees bound"
  no_match_text "Built Test.B" produced.out
  # 7b
  edx T 2
  cat T/$OUT/B.ilean > good.tmp
  { cat good.tmp; printf '\n/* replaced */\n'; } > bad.tmp
  mv -f bad.tmp T/$OUT/B.ilean
  lake_out -d T build -v Test.B
  jobhas Test.B "usage index: restored"
  no_match_text "Built Test.B" produced.out
  test_cmd cmp good.tmp T/$OUT/B.ilean
  # 7c
  edx T 3
  rm -f T/$OUT/B.olean
  lake_out -d T build -v Test.B
  jobhas Test.B "usage index: restored"
  no_match_text "Built Test.B" produced.out
  # 7d
  edx T 4
  lake_out -d T build -v Test.B
  jobhas Test.B "Replayed Test.B"
  jobnot Test.B "usage index"
}

# 8. A chain of hits: E's check reads the `.usage` and `.usekey` that B's hit restored
case8() {
  mkpkg f
  test_run -d f build $ALL
  mkpkg t
  edx t
  lake_out -d t build -v Test.E
  jobhas Test.B "usage index: restored"
  jobhas Test.E "usage index: restored"
  jobhas Test.E "1 parsed, 1 fully checked"
  no_match_text "Built Test.E" produced.out
}

# 9. A module's index keeps the 8 most recently written compiles, and a hit rewrites the file of the compile it
# restores, which makes it recent again
case9() {
  local v names=()
  mkpkg t
  for v in $(seq 9); do
    seta t $v
    test_run -d t build Test.B
    names[$v]=$(idxname t B)
  done
  local d
  d=$(idxdir t B)
  test_exp -d "$d"
  test_exp "$(find "$d" -maxdepth 1 -name '*.json' | wc -l)" = 8
  test_exp ! -e "$d/${names[1]}"
  test_exp -f "$d/${names[9]}"
  mkpkg t2 2
  edx t2
  lake_out -d t2 build -v Test.B
  jobhas Test.B "usage index: restored"
  mkpkg t3 1
  edx t3
  lake_out -d t3 build -v Test.B
  jobhas Test.B "usage index: no match (8 candidates"
  jobhas Test.B "Built Test.B"
  test_exp -f "$d/${names[2]}"
  test_exp ! -e "$d/${names[3]}"
  test_exp -f "$d/${names[1]}"
}

# 10. No lookup and no index write without a writable cache and restored artifacts (each tree has its own value of
# the unused edit, so each misses by input hash)
case10() {
  mkpkg f
  test_run -d f build $ALL
  idxfiles > idx-fill.txt
  mkpkg ta
  edx ta 1
  LAKE_RESTORE_ARTIFACTS=false lake_out -d ta build -v Test.B
  match_text "Built Test.B" produced.out
  no_match_text "usage index" produced.out
  idxfiles > idx.txt
  test_cmd cmp idx-fill.txt idx.txt
  mkpkg tb
  edx tb 2
  # without `LAKE_ARTIFACT_CACHE`, the cache is read but not written
  (unset LAKE_ARTIFACT_CACHE; lake_out -d tb build -v Test.B)
  match_text "Built Test.B" produced.out
  no_match_text "usage index" produced.out
  idxfiles > idx.txt
  test_cmd cmp idx-fill.txt idx.txt
  mkpkg tc
  edx tc 3
  lake_out -d tc build -v Test.B
  jobhas Test.B "usage index: restored"
}

# 11. Outputs a kept-module check accepted. `P.B` uses `A.w`: compiled while `A.w := 1 - 1`, then kept while
# `A.w := 2 - 2`, which indexes the same `.olean` again, with a kept key and lineage (`kf`). Once `A.w` is `1 - 1`
# again, both pass the check: the compile is restored, not the kept outputs, whose key makes importers distrust the
# module's `.usage`, and so is it for a module `LAKE_KEPT_EXCLUDE` lists. With the compile's index file gone (as the
# trim to 8 removes it), only the kept outputs pass: they are restored and keep their lineage, in the trace, the
# alias and `-o`.
case11() {
  mkp() {
    mkdir -p "$1/P"
    printf 'name = "p"\n[[lean_lib]]\nname = "P"\n' > "$1/lakefile.toml"
    printf 'import P.A\ntheorem B.ok : A.w = 0 := rfl\ndef B.u : Nat := A.w\n' > "$1/P/B.lean"
    setw "$1" "$2" "$3"
  }
  setw() { rm -f "$1/P/A.lean"; printf 'def A.v : Nat := %s\ndef A.w : Nat := %s - %s\n' "$2" "$3" "$3" > "$1/P/A.lean"; }
  local POUT=.lake/build/lib/lean/P c0
  PKG=p
  mkp k 1 1
  test_run -d k build P.B
  c0=$(idxname k B $POUT)
  test_exp -f "$(idxdir k B $POUT)/$c0"
  setw k 2 2
  LAKE_KEPT_CHECKER="$STUB" test_out "Checked P.B" -d k build P.B
  test_cmd grep -q '"kf"' k/$POUT/B.trace
  test_exp "$(find "$(idxdir k B $POUT)" -name '*.json' | wc -l)" = 2
  mkp t 3 1
  lake_out -d t build -v P.B
  jobhas P.B "usage index: restored ${c0%.json} ("
  test_cmd_fails grep -q '"kf"' t/$POUT/B.trace
  printf 'P.B\n' > exclude
  mkp t2 4 1
  LAKE_KEPT_EXCLUDE="$PWD/exclude" lake_out -d t2 build -v P.B
  jobhas P.B "usage index: restored ${c0%.json} ("
  test_cmd_fails grep -q '"kf"' t2/$POUT/B.trace
  test_cmd rm "$(idxdir k B $POUT)/$c0"
  mkp t3 5 1
  lake_out -d t3 build -v P.B
  jobhas P.B "usage index: restored"
  test_cmd grep -q '"kf"' t3/$POUT/B.trace
  test_cmd grep -q '"kf"' "$(entry t3 B $POUT)"
  test_run -d t3 build P.B -o "$PWD/o.jsonl"
  test_cmd_out '"kf"' grep -F "\"$(depHash t3/$POUT/B.trace)\"" o.jsonl
  # an excluded module takes no kept outputs: with only those indexed, it is compiled
  mkp t4 6 1
  LAKE_KEPT_EXCLUDE="$PWD/exclude" lake_out -d t4 build -v P.B
  jobhas P.B "Built P.B"
  jobnot P.B "usage index: restored"
}

# 12. A candidate whose cached `.olean` cannot be read when the check hashes it (here it has no read permission: the
# file is there for the resolve, but its open fails, as it does for an entry another process deletes in between) is
# a miss: B is compiled, and the build succeeds. C, in the same build, is restored.
case12() {
  local art
  mkpkg f
  test_run -d f build $ALL
  art="$LAKE_CACHE_DIR/artifacts/$(cat f/$OUT/B.olean.hash).olean"
  test_cmd chmod 000 "$art"
  mkpkg t
  edx t
  lake_out -d t build -v Test.B Test.C
  jobhas Test.C "usage index: restored"
  jobhas Test.B "usage index: no match (1 candidates, 1 parsed, 1 fully checked"
  jobhas Test.B "Built Test.B"
}

runcase() {
  echo "=== case $1"
  mkdir -p "c$1"
  (
    cd "c$1"
    export LAKE_CACHE_DIR="$PWD/cache"
    "case$1"
  )
}

if [ $# = 0 ]; then set -- 1 2 3 4 5 6a 6b 7 8 9 10 11 12; fi
for c in "$@"; do runcase "$c"; done

rm -f produced.out
