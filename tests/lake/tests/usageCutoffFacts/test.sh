#!/usr/bin/env bash
source ../common.sh

./clean.sh
mkdir work
cd work

# The kept/plain projection is pure, so this direct check isolates it from later closure checks that also reject kept
# modules.
test_out "ok" env lean ../project.lean
# The reader of `.resolved` sidecars agrees with the reference reader on tables, truncations, changed and appended bytes.
test_out "ok" env lean ../resolved.lean

# Store the Lake cache in the test directory, never the system cache
export LAKE_CACHE_DIR=
export LAKE_ARTIFACT_CACHE=false LAKE_USAGE_CUTOFF=1

# A check takes a closure module's records from an earlier read of the same build (`Lake.readImports`) only if each file
# they were read from has the recorded stamp after the check started. Workspaces `a` and `b` require the same path
# dependency `dep`; each build holds only its own workspace's lock, so `b` can rewrite `dep` during a build of `a`.
mkdir -p dep a/T b
printf 'name = "shared"\n[[lean_lib]]\nname = "D"\n' > dep/lakefile.toml
printf 'def sharedValue : Nat := 1\n' > dep/D.lean
for ws in a b; do
  printf 'name = "%s"\n[[require]]\nname = "shared"\npath = "../dep"\n' $ws > $ws/lakefile.toml
done
printf '[[lean_lib]]\nname = "T"\n' >> a/lakefile.toml

# Lines of a command that holds the build of the module it is in until the test creates `release`.
waiter() {
  printf '%s\n' '#eval do' \
    "  IO.FS.writeFile \"$PWD/ready\" \"\"" \
    '  for _ in [:600] do' \
    "    if ← System.FilePath.pathExists \"$PWD/release\" then return" \
    '    IO.sleep 100' \
    '  throw <| IO.userError "the test did not release the build"'
}

# `T.E` and `T.X` read `D` early in a build of `a`, and publish its records. `T.Slow` holds the build and does not import
# `D`, so that no read of `D` comes between a rewrite of `D` during the hold and the check of `T.M`, which waits for
# `T.Slow` and uses `sharedValue`. The edits of a round change only values, so `T.M`'s closure stays and it is checked.
write_a() {
  printf 'import D\ndef early : Nat := sharedValue + %s\n' $1 > a/T/E.lean
  printf 'import T.E\nimport D\ndef xs : Nat := %s\n' $1 > a/T/X.lean
  { waiter; printf 'def slow : Nat := %s\n' $1; } > a/T/Slow.lean
}
printf 'import T.Slow\nimport T.X\nimport D\ntheorem kept : sharedValue = 1 := rfl\n' > a/T/M.lean
write_a 0
touch release
(cd a && test_run build T.M)
(cd b && test_run build D)

# Builds `T.M` in `a` after an edit of `T.E`, `T.X` and `T.Slow`. Once `T.Slow` holds and `T.X` is done (its trace is
# written; every read of `D` before the hold is then over), runs `$1` and releases the build. Sets `rc` to its status;
# its output is `race.log`.
round=0
race() {
  rm -f ready release
  round=$((round + 1))
  write_a $round
  # stamps older than two seconds stand for their bytes on every file system, so `D`'s reads give records
  sleep 3
  touch started
  (cd a && "$LAKE" build -v T.M) > race.log 2>&1 &
  pid=$!
  for _ in $(seq 600); do
    test -f ready && test a/.lake/build/lib/lean/T/X.trace -nt started && break
    sleep 0.1
  done
  test_exp -f ready
  test_exp a/.lake/build/lib/lean/T/X.trace -nt started
  eval "$1"
  touch release
  wait $pid && rc=0 || rc=$?
  cat race.log
}

# Rebuilds `dep` from its source in `b`, after a test left other `.olean` bytes or no outputs.
reset_d() {
  printf 'def sharedValue : Nat := 1\n' > dep/D.lean
  rm -f dep/.lake/build/lib/lean/D.*
  (cd b && test_run build D)
}

# A control: `D` is rewritten with the same `sharedValue`, and `T.M` is replayed.
race 'printf "def sharedValue : Nat := 1\ndef other : Nat := 0\n" > dep/D.lean; (cd b && test_run build D)'
test_exp $rc = 0
match_text "Replayed T.M" race.log
match_pat 'closure records taken from earlier reads [1-9]' race.log
reset_d

# `D` is rewritten in another workspace after this build read it, and before `T.M` is checked: the records of `D` read
# before the rewrite are not taken, so `T.M` is compiled against the new `D` and its proof fails, as from scratch.
race 'printf "def sharedValue : Nat := 2\n" > dep/D.lean; (cd b && test_run build D)'
no_match_pat 'usage cutoff: decision T\.M fact imports .*D' race.log
test_exp $rc != 0
no_match_text "Replayed T.M" race.log
match_text "T/M.lean" race.log
reset_d

# The same with only `D.olean` rewritten behind Lake's back (`lean -o`), its `.usekey` unchanged: a record of `D` binds its
# `.olean`'s stamp too, so `T.M` does not take it; `D`'s key does not describe the new `.olean`, so `T.M` compiles.
race 'printf "def sharedValue : Nat := 2\n" > dep/D.lean
  (cd dep && "$LAKE" env lean D.lean -o .lake/build/lib/lean/D.olean)
  printf "def sharedValue : Nat := 1\n" > dep/D.lean'
test_exp $rc != 0
no_match_text "Replayed T.M" race.log
match_text "T/M.lean" race.log
reset_d

# A module that fails: `b`'s rebuild of `D` fails during the hold, and removes `D`'s outputs first. `T.M` does not take the
# records of `D` read before, so it is not replayed over a `D` that no longer has outputs; its compile fails, as today.
race 'printf "def sharedValue : Nat := true\n" > dep/D.lean; (cd b && "$LAKE" build D || true)'
test_exp $rc != 0
no_match_text "Replayed T.M" race.log
reset_d

# A kept key's record still reaches a later check without `kept`. `T.Late` waits until `T.J` compiles, which is after
# `T.J`'s check published `D`'s record, so `T.K`'s check takes that record (its decision line names `D`). `T.K` is
# compiled, not replayed, as a check of a closure with a kept module always is; `project.lean` checks the projection
# that keeps the record's plain binding empty.
facts_ready="$PWD/facts-ready"
wait_for_facts() {
  printf '%s\n' '#eval do' \
    "  IO.FS.writeFile \"$facts_ready.waiting\" \"\"" \
    '  for _ in [:600] do' \
    "    if ← System.FilePath.pathExists \"$facts_ready\" then return" \
    '    IO.sleep 100' \
    '  throw <| IO.userError "the test did not publish facts"'
}
write_j() {
  printf 'import D\n#eval IO.FS.writeFile "%s" ""\ndef j : Nat := sharedValue + %s\n' "$facts_ready" "$1" > a/T/J.lean
}
write_late() {
  { wait_for_facts; printf 'def late : Nat := %s\n' "$1"; } > a/T/Late.lean
}
write_j 0
write_late 0
printf 'import T.Late\nimport D\ntheorem k : sharedValue = 1 := rfl\n' > a/T/K.lean
touch "$facts_ready"
(cd a && test_run build T.J T.K)
sed -i 's/"local":/"kept":true,"local":/' dep/.lake/build/lib/lean/D.usekey
test_cmd grep -q '"kept":true' dep/.lake/build/lib/lean/D.usekey
rm -f "$facts_ready"
write_j 1
write_late 1
sleep 3
(cd a && "$LAKE" build -v T.J T.K) > kept.log 2>&1 && rc=0 || rc=$?
cat kept.log
test_exp $rc = 0
match_text "usage cutoff: decision T.K fact imports D" kept.log
no_match_text "Replayed T.K" kept.log
match_text "Built T.K" kept.log
reset_d

# Many importers of one module checked at once take its records concurrently: every run gives every importer the same
# verdict, replayed after an edit they do not use, compiled (and failing) after one they do.
mkdir -p a/F
printf '[[lean_lib]]\nname = "F"\n' >> a/lakefile.toml
printf 'def fv : Nat := 1\n' > a/F/Base.lean
for i in $(seq 48); do
  printf 'import F.Base\nimport D\ntheorem f%s : fv + sharedValue = 2 := rfl\n' $i > a/F/I$i.lean
done
printf 'import F.Base\n' > a/F.lean
for i in $(seq 48); do printf 'import F.I%s\n' $i >> a/F.lean; done
(cd a && test_run build F)
for r in $(seq 5); do
  printf 'def fv : Nat := 1\ndef unused%s : Nat := 0\n' $r > a/F/Base.lean
  sleep 3
  (cd a && "$LAKE" build -v F) > fan.log 2>&1 || { cat fan.log; test_exp false; }
  test_exp "$(grep -c 'Replayed F.I' fan.log)" = 48
  printf 'def fv : Nat := 2\n' > a/F/Base.lean
  (cd a && "$LAKE" build -v F) > fan.log 2>&1 && rc=0 || rc=$?
  test_exp $rc != 0
  no_match_text "Replayed F.I" fan.log
  test_exp "$(grep -o 'error: F/I[0-9]*.lean' fan.log | sort -u | wc -l)" = 48
  printf 'def fv : Nat := 1\n' > a/F/Base.lean
  (cd a && test_run build F)
done

# A module that fails in this build: its importers are not checked (they fail as its dependents, as today), and a module
# that does not import it is still replayed. Once it is fixed, its importer is checked against its new outputs.
mkdir -p a/G
printf '[[lean_lib]]\nname = "G"\n' >> a/lakefile.toml
printf 'def ga : Nat := 1\n' > a/G/A.lean
printf 'import G.A\ndef gf : Nat := ga\n' > a/G/F.lean
printf 'import G.F\ntheorem gg : gf = 1 := rfl\n' > a/G/G.lean
printf 'import G.A\ntheorem gh : ga = 1 := rfl\n' > a/G/H.lean
printf 'import G.G\nimport G.H\n' > a/G.lean
(cd a && test_run build G)
printf 'def ga : Nat := 1\ndef gb : Nat := 0\n' > a/G/A.lean
printf 'import G.A\ndef gf : Nat := true\n' > a/G/F.lean
sleep 3
(cd a && "$LAKE" build -v G) > fail.log 2>&1 && rc=0 || rc=$?
cat fail.log
test_exp $rc != 0
match_text "G/F.lean" fail.log
no_match_text "Replayed G.G" fail.log
no_match_text "Built G.G" fail.log
match_text "Replayed G.H" fail.log
printf 'import G.A\ndef gf : Nat := ga\n' > a/G/F.lean
(cd a && "$LAKE" build -v G) > fixed.log 2>&1 || { cat fixed.log; test_exp false; }
cat fixed.log
match_text "Built G.F" fixed.log
match_text "Replayed G.G" fixed.log
printf 'import G.A\ndef gf : Nat := ga + 1\n' > a/G/F.lean
(cd a && "$LAKE" build -v G) > fixed.log 2>&1 && rc=0 || rc=$?
cat fixed.log
test_exp $rc != 0
no_match_text "Replayed G.G" fixed.log
match_text "G/G.lean" fixed.log

# One package, `c`, for the cases below.
mkdir -p c/C
printf 'name = "c"\n[[lean_lib]]\nname = "C"\n' > c/lakefile.toml

# The setup of a non-`module` importer comes from the build's cells of its closure (`fetchNonModuleImportArts`): the same
# modules as the walk of `fetchTransImportArts` gives, each at the private level, also those a `module` file imports
# privately or with `meta`, and those only one of two imports reaches.
printf 'module\npublic def qv : Nat := 1\n' > c/C/Q.lean
printf 'module\npublic def rv : Nat := 1\n' > c/C/R.lean
printf 'module\npublic def sv : Nat := 1\n' > c/C/S.lean
printf 'module\npublic import C.Q\nimport C.R\nmeta import C.S\npublic def pv : Nat := qv\n' > c/C/P.lean
printf 'def ov : Nat := 1\n' > c/C/O.lean
printf 'import C.P\nimport C.O\ndef nv : Nat := qv + ov\n' > c/C/N.lean
printf 'import C.P\nimport C.N\ndef mv : Nat := pv + nv\n' > c/C/M.lean
(cd c && test_run build C.M)
python3 - c/.lake/build/ir/C/M.setup.json > setup.out <<'EOF'
import json, sys
arts = json.load(open(sys.argv[1]))["importArts"]
for m in sorted(arts):
    print(m, sum(len(part) for part in arts[m]))
EOF
cat setup.out
test_cmd_eq "C.N 1
C.O 1
C.P 5
C.Q 5
C.R 5
C.S 5" cat setup.out

# Records of module-system artifacts are kept per module and artifact level. `C.Q9` reads `C.P9`'s public artifacts and
# `C.N9` its private ones, each publishing a record; `C.R9` reads the public ones again. `C.T9`, a non-`module`
# importer, reads the private ones and takes `C.N9`'s record. With records keyed by module alone, the public read
# replaces the private record, and `C.T9` reads `C.P9` again.
printf 'module\npublic def p9 : Nat := 1\n' > c/C/P9.lean
printf 'module\npublic import C.P9\npublic def q9 : Nat := p9\n' > c/C/Q9.lean
printf 'module\nimport C.Q9\nimport all C.P9\npublic def n9 : Nat := p9\n' > c/C/N9.lean
printf 'module\npublic import C.P9\nimport C.N9\npublic def r9 : Nat := p9\n' > c/C/R9.lean
printf 'import C.R9\ntheorem t9 : p9 = 1 := rfl\n' > c/C/T9.lean
(cd c && test_run build C.T9)
printf 'module\npublic import C.P9\npublic def q9 : Nat := p9\npublic def q9unused : Nat := 0\n' > c/C/Q9.lean
printf 'module\npublic import C.P9\nimport C.N9\npublic def r9 : Nat := p9\npublic def r9unused : Nat := 0\n' > c/C/R9.lean
sleep 3
(cd c && "$LAKE" build -v C.T9) > t9.log 2>&1 || { cat t9.log; test_exp false; }
cat t9.log
match_text "usage cutoff: decision C.T9 fact arts C.P9" t9.log

# A fast plain binding freezes the view that a later usage-index pre-filter reads. J's check reads A only with `kept`
# (its own `.usage` no longer matches its key, so the check stops before any plain binding) and publishes A's record.
# J's closure read before its compile then binds A without `kept` from that record: the first plain binding of A in the
# build is a fast one, and it freezes A's view. Once J's job is done, the test rewrites A's `.olean` and gives A's key
# another digest of `a`. N's cached candidate passes the pre-filter only on the frozen view, so it reaches the full
# check, which rejects the rewritten A. A fast binding that skips the freeze leaves the pre-filter A's new key, which
# rejects the candidate before the full check.
t12_ready="$PWD/t12-ready"
t12_release="$PWD/t12-release"
make_t12() {
  mkdir -p "$1/C"
  printf 'name = "t12"\n[[lean_lib]]\nname = "C"\n' > "$1/lakefile.toml"
  printf 'def a : Nat := 1\n' > "$1/C/A.lean"
  printf 'def tick : Nat := 0\n' > "$1/C/Tick.lean"
  printf 'def gate : Nat := 0\n' > "$1/C/Gate.lean"
  if [ "$2" = marker ]; then
    printf 'import C.A\nimport C.Tick\n#eval IO.FS.writeFile "%s" ""\ndef j : Nat := tick\n' "$t12_ready" > "$1/C/J.lean"
  else
    printf 'import C.A\nimport C.Tick\ndef j : Nat := tick\n' > "$1/C/J.lean"
  fi
  printf 'import C.A\nimport C.J\nimport C.Gate\ntheorem n : a = 1 := rfl\n' > "$1/C/N.lean"
}
# the log of MOD's job in FILE: its caption line and what follows, up to the next job's caption
joblog() {
  awk -v m=" $1" '/^[^ ]+ \[[0-9]+\/[0-9]+\]/ {
    s = $0; sub(/ \([0-9.]+m?s\)$/, "", s); show = substr(s, length(s) - length(m) + 1) == m }
    show' "$2"
}
make_t12 t12-fill plain
make_t12 t12-view marker
(
  export LAKE_CACHE_DIR="$PWD/t12-cache" LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true
  (cd t12-fill && test_run build C.N)
  (cd t12-view && LAKE_ARTIFACT_CACHE=false test_run build C.J)
  rm -f "$t12_ready" "$t12_release"
  printf 'def tick : Nat := 0\ndef unused : Nat := 0\n' > t12-view/C/Tick.lean
  printf '%s\n' '#eval show IO Unit from do' \
    '  for _ in [:600] do' \
    "    if ← System.FilePath.pathExists \"$t12_release\" then return" \
    '    IO.sleep 100' \
    '  throw <| IO.userError "the test did not release the index pre-filter"' \
    'def gate : Nat := 0' > t12-view/C/Gate.lean
  { cat t12-view/.lake/build/lib/lean/C/J.usage; printf ' '; } > t12-view/J.usage.tmp
  mv -f t12-view/J.usage.tmp t12-view/.lake/build/lib/lean/C/J.usage
  sleep 3
  touch t12-started
  (cd t12-view && "$LAKE" build -v C.J C.N) > t12.log 2>&1 &
  t12_pid=$!
  for _ in $(seq 600); do
    test -f "$t12_ready" && test t12-view/.lake/build/lib/lean/C/J.trace -nt t12-started && break
    sleep 0.1
  done
  test_exp -f "$t12_ready"
  test_exp t12-view/.lake/build/lib/lean/C/J.trace -nt t12-started
  printf 'def a : Nat := 2\n' > t12-view/C/A.lean
  (cd t12-view && "$LAKE" env lean C/A.lean -o ../A.rewrite.olean)
  mv -f A.rewrite.olean t12-view/.lake/build/lib/lean/C/A.olean
  sed -E 's/("own":\[\[\["a"\],")[0-9a-f]+/\1deadbeefdeadbeefdeadbeefdeadbeef/' \
    t12-view/.lake/build/lib/lean/C/A.usekey > A.usekey.tmp
  mv -f A.usekey.tmp t12-view/.lake/build/lib/lean/C/A.usekey
  test_cmd grep -q deadbeef t12-view/.lake/build/lib/lean/C/A.usekey
  printf 'def a : Nat := 1\n' > t12-view/C/A.lean
  touch "$t12_release"
  wait $t12_pid && rc=0 || rc=$?
  cat t12.log
  test_exp $rc != 0
  joblog C.J t12.log > t12-j.log
  match_text "usage cutoff: decision C.J" t12-j.log
  no_match_pat 'usage cutoff: decision C\.J fact imports' t12-j.log
  match_text "usage cutoff: fact import taken C.A" t12-j.log
  match_text "Built C.J" t12-j.log
  joblog C.N t12.log > t12-n.log
  match_text 'usage index: no match (1 candidates, 1 parsed, 1 fully checked' t12-n.log
)

# Toolchain modules whose `.olean` cannot be read fail the duplicate-constant check at the first one, with one warning,
# as before the checks shared closure records: `C.TCEarly`'s check walks the toolchain modules `Tool` and `Tool2` that
# `C.TCA` imports, warns about the first it reads, stops, and compiles `C.TCEarly`, whose import of them then fails;
# `C.TCB` is not built. A walk that went on past the first unreadable module would warn twice.
# From here on workspace `c` requires the package `toolchain`, whose library directory Lake adds to `LEAN_PATH`; a later
# block that rewrites `c/lakefile.toml` must keep the `[[require]]`, or run `lake update` again, since the manifest
# lists the package.
mkdir -p c/toolchain/.lake/build/lib/lean
printf 'name = "toolchain"\n' > c/toolchain/lakefile.toml
printf '\n[[require]]\nname = "toolchain"\npath = "toolchain"\n' >> c/lakefile.toml
printf 'def toolValue : Nat := 1\n' > c/toolchain/Tool.lean
printf 'def toolValue2 : Nat := 2\n' > c/toolchain/Tool2.lean
(cd c && test_run update)
for t in Tool Tool2; do
  (cd c/toolchain && "$LAKE" env lean $t.lean -o .lake/build/lib/lean/$t.olean)
  test_cmd cp c/toolchain/.lake/build/lib/lean/$t.olean c/toolchain/$t.good
done
printf 'import Tool\nimport Tool2\ndef tca : Nat := toolValue + toolValue2\n' > c/C/TCA.lean
printf 'def tick : Nat := 0\n' > c/C/TCTrigger.lean
printf 'import C.TCA\nimport C.TCTrigger\ndef early : Nat := tca + tick\n' > c/C/TCEarly.lean
printf 'import C.TCEarly\nimport C.TCTrigger\ndef target : Nat := early + tick\n' > c/C/TCB.lean
(cd c && test_run build C.TCB)
printf 'def tick : Nat := 0\ndef unused : Nat := 0\n' > c/C/TCTrigger.lean
sleep 3
: > c/toolchain/.lake/build/lib/lean/Tool.olean
: > c/toolchain/.lake/build/lib/lean/Tool2.olean
(cd c && "$LAKE" build -v C.TCB) > t10.log 2>&1 && rc=0 || rc=$?
for t in Tool Tool2; do test_cmd cp c/toolchain/$t.good c/toolchain/.lake/build/lib/lean/$t.olean; done
cat t10.log
test_exp $rc != 0
test_exp "$(grep -c '^warning: usage cutoff: .*Tool2\?\.olean' t10.log)" = 1
match_text "usage cutoff: decision C.TCEarly" t10.log
match_text "Building C.TCEarly" t10.log
no_match_text "Built C.TCB" t10.log
no_match_text "Replayed C.TCEarly" t10.log
no_match_text "Replayed C.TCB" t10.log

# A toolchain module's walk is skipped when all it starts from were walked in full (`KernelProviders.complete`): `C.DP`
# gains a constant that `Std.Data.HashMap` declares too. `C.DN` reaches `Std.Data.HashMap` through `C.DA` and fails at
# the import, as from scratch; `C.DO` does not reach it, is checked after `C.DA` and `C.DN` walked the toolchain (it
# waits for `C.Late`, which sleeps) and is replayed.
printf 'def dq : Nat := 0\n' > c/C/DQ.lean
printf 'def dp : Nat := 0\n' > c/C/DP.lean
printf 'def late : Nat := 0\n' > c/C/Late.lean
printf 'import C.DQ\nimport Std.Data.HashMap\ndef da := dq\n' > c/C/DA.lean
printf 'import C.DA\nimport C.DP\ndef dn := dp + da\n' > c/C/DN.lean
printf 'import C.DP\nimport C.Late\ndef dz := dp\n' > c/C/DO.lean
(cd c && test_run build C.DN C.DO)
printf 'def dq : Nat := 0\ndef u0 := 1\n' > c/C/DQ.lean
printf 'def dp : Nat := 0\ndef Std.HashMap.insertMany : Nat := 0\n' > c/C/DP.lean
printf '#eval IO.sleep 3000\ndef late : Nat := 1\n' > c/C/Late.lean
(cd c && "$LAKE" build -v C.DN C.DO) > tc.log 2>&1 && rc=0 || rc=$?
cat tc.log
test_exp $rc != 0
match_text "environment already contains 'Std.HashMap.insertMany'" tc.log
no_match_text "Replayed C.DN" tc.log
match_text "Replayed C.DO" tc.log

# A module-system module whose machinery a module used (an `extra` module of its `.usage`) has its `.olean` hash taken
# by `modsysHash`. X1 reads PM first. X2 waits until X1 completed, then the test rewrites PM.olean with `lean -o`;
# X2 must see the changed artifact and compile against its macro, which makes its theorem fail.
pm_ready="$PWD/pm-ready"
pm_release="$PWD/pm-release"
pm_waiter() {
  printf '%s\n' '#eval do' \
    "  IO.FS.writeFile \"$pm_ready\" \"\"" \
    '  for _ in [:600] do' \
    "    if ← System.FilePath.pathExists \"$pm_release\" then return" \
    '    IO.sleep 100' \
    '  throw <| IO.userError "the test did not release PM"'
}
printf 'module\npublic section\nsyntax "mkv" : term\nmacro_rules | `(mkv) => `(1)\nend\n' > c/C/PM.lean
printf 'def ou : Nat := 0\n' > c/C/OU.lean
printf 'def slow2 : Nat := 0\n' > c/C/Slow2.lean
printf 'import C.PM\nimport C.OU\ntheorem t : (mkv : Nat) = 1 := rfl\n' > c/C/X1.lean
printf 'import C.PM\nimport C.OU\nimport C.Slow2\ntheorem t : (mkv : Nat) = 1 := rfl\n' > c/C/X2.lean
(cd c && test_run build C.X1 C.X2)
test_cmd grep -q '"extra":\[\[\["C","PM"\]' c/.lake/build/lib/lean/C/X1.usage
printf 'def ou : Nat := 0\ndef ou2 : Nat := 0\n' > c/C/OU.lean
{ pm_waiter; printf 'def slow2 : Nat := 1\n'; } > c/C/Slow2.lean
rm -f "$pm_ready" "$pm_release"
sleep 3
touch pm-started
(cd c && "$LAKE" build -v C.X1 C.X2) > extra.log 2>&1 &
pm_pid=$!
for _ in $(seq 600); do
  test -f "$pm_ready" && test c/.lake/build/lib/lean/C/X1.trace -nt pm-started && break
  sleep 0.1
done
test_exp -f "$pm_ready"
test_exp c/.lake/build/lib/lean/C/X1.trace -nt pm-started
printf 'module\npublic section\nsyntax "mkv" : term\nmacro_rules | `(mkv) => `(2)\nend\n' > c/C/PM.lean
(cd c && "$LAKE" env lean C/PM.lean -o .lake/build/lib/lean/C/PM.olean)
touch "$pm_release"
wait $pm_pid && rc=0 || rc=$?
cat extra.log
test_exp $rc != 0
match_text "Replayed C.X1" extra.log
no_match_text "Replayed C.X2" extra.log
match_text "C/X2.lean" extra.log
printf 'module\npublic section\nsyntax "mkv" : term\nmacro_rules | `(mkv) => `(1)\nend\n' > c/C/PM.lean
(cd c && test_run build C.PM)

# The walk is skipped only when every toolchain module it starts from was walked in full, also those that closure
# modules import: `C.Z`'s check walks only `Init` (its closure gains a constant); `C.DN2`, checked after it (it waits
# for `C.Slow3`), reaches `Std.Data.HashMap` only through `C.DA2`, which is not checked, and `C.DP2` gains a constant
# `Std.Data.HashMap` declares too: `C.DN2` fails at the import, as from scratch.
printf 'def zq : Nat := 0\n' > c/C/ZQ.lean
printf 'import C.ZQ\ndef z : Nat := zq\n' > c/C/Z.lean
printf 'import Std.Data.HashMap\ndef da2 : Nat := 0\n' > c/C/DA2.lean
printf 'def dp2 : Nat := 0\n' > c/C/DP2.lean
printf 'def slow3 : Nat := 0\n' > c/C/Slow3.lean
printf 'import C.DA2\nimport C.DP2\nimport C.Slow3\ndef dn2 : Nat := dp2 + da2\n' > c/C/DN2.lean
(cd c && test_run build C.Z C.DN2)
printf 'def zq : Nat := 0\ndef zu : Nat := 1\n' > c/C/ZQ.lean
printf 'def dp2 : Nat := 0\ndef Std.HashMap.insertMany : Nat := 0\n' > c/C/DP2.lean
printf '#eval IO.sleep 3000\ndef slow3 : Nat := 1\n' > c/C/Slow3.lean
(cd c && "$LAKE" build -v C.Z C.DN2) > seeds.log 2>&1 && rc=0 || rc=$?
cat seeds.log
test_exp $rc != 0
match_text "Replayed C.Z" seeds.log
match_text "environment already contains 'Std.HashMap.insertMany'" seeds.log
no_match_text "Replayed C.DN2" seeds.log

# A closure module's `.usekey` that exists but cannot be read fails the check that binds it, with the read's error,
# once, as before the checks shared closure records: no record of it is made or taken.
if [ "$(id -u)" != 0 ]; then
  printf 'def ou : Nat := 0\ndef ou3 : Nat := 0\n' > c/C/OU.lean
  (cd c && test_run build C.OU)
  chmod 000 c/.lake/build/lib/lean/C/OU.usekey
  (cd c && "$LAKE" build -v C.X1) > unread.log 2>&1 && rc=0 || rc=$?
  chmod 644 c/.lake/build/lib/lean/C/OU.usekey
  cat unread.log
  test_exp $rc != 0
  test_exp "$(grep -c 'OU.usekey: read failed' unread.log)" = 1
  no_match_text "Replayed C.X1" unread.log
fi

# A decision's checks take each closure module's own binding, of each kind, from the decision's view of its closure
# (`ClosureView`, `boundKeyed`). `C.VM` imports `C.VB`, `C.VC` and `C.VK`, which import `C.VA`, and uses no constant
# of `C.VK`. After an unused edit of `C.VA`, `C.VM` finds one closure module whose provides changed, checks it against
# its `.resolved` and the closure's kernel constants, and is replayed. Then `C.VK`'s key is marked kept: after another
# unused edit, `C.VM`'s kept bindings (closure edges, resolved names) take `C.VK`'s key and its plain ones (untrusted
# modules) do not, so `C.VM` is re-checked (the stub checker accepts it), neither replayed nor compiled. A binding of
# another module, or of the other kind, replays or compiles it.
STUB="$(cd ../../keptCheck && pwd)/stub.sh"
printf 'def va1 : Nat := 1\ndef va2 : Nat := 2\n' > c/C/VA.lean
printf 'import C.VA\ndef vb : Nat := va1\n' > c/C/VB.lean
printf 'import C.VA\ndef vc : Nat := va2 + 1\n' > c/C/VC.lean
printf 'import C.VA\ndef vk : Nat := va1 + 2\n' > c/C/VK.lean
printf 'import C.VB\nimport C.VC\nimport C.VK\ntheorem vm : vb + vc = 4 := rfl\n' > c/C/VM.lean
(cd c && test_run build C.VM)
printf 'def va1 : Nat := 1\ndef va2 : Nat := 2\ndef vaUnused : Nat := 0\n' > c/C/VA.lean
sleep 3
(cd c && STUB_LOG="$PWD/../view-stub.log" LAKE_KEPT_CHECKER="$STUB" "$LAKE" build -v C.VM) > view.log 2>&1 \
  || { cat view.log; test_exp false; }
cat view.log
match_text "Built C.VA" view.log
match_text "Replayed C.VM" view.log
sed -i 's/"local":/"kept":true,"local":/' c/.lake/build/lib/lean/C/VK.usekey
test_cmd grep -q '"kept":true' c/.lake/build/lib/lean/C/VK.usekey
printf 'def va1 : Nat := 1\ndef va2 : Nat := 2\ndef vaUnused2 : Nat := 0\n' > c/C/VA.lean
sleep 3
(cd c && STUB_LOG="$PWD/../view-stub.log" LAKE_KEPT_CHECKER="$STUB" "$LAKE" build -v C.VM) > view-kept.log 2>&1 \
  || { cat view-kept.log; test_exp false; }
cat view-kept.log
match_text "Built C.VA" view-kept.log
match_text "Checked C.VM" view-kept.log
no_match_text "Replayed C.VM" view-kept.log
no_match_text "Built C.VM" view-kept.log

# The reader of a `.usage` in the layout Lean writes agrees with `Json.parse` on every `.usage` this test's builds
# wrote, on generated texts in that layout, and on each of those changed.
test_out "ok" env lean --run ../usagelayout.lean c/.lake/build/lib/lean/C/*.usage
