#!/usr/bin/env bash
source ../common.sh

./clean.sh
mkdir work
cd work

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

# A key a kept-module check kept (`"kept": true`) is not trusted by importers: its record serves a read with `kept`, and
# a read without it binds nothing (`ImportFact.project`). `T.J` reads `D` first; `T.K` is checked after `T.Late`, which
# sleeps, and takes `D`'s record: its plain binding is none, so `T.K` is not replayed, and compiles.
printf 'import D\ndef j : Nat := sharedValue + 0\n' > a/T/J.lean
printf 'def late : Nat := 0\n' > a/T/Late.lean
printf 'import T.Late\nimport D\ntheorem k : sharedValue = 1 := rfl\n' > a/T/K.lean
(cd a && test_run build T.J T.K)
sed -i 's/"local":/"kept":true,"local":/' dep/.lake/build/lib/lean/D.usekey
test_cmd grep -q '"kept":true' dep/.lake/build/lib/lean/D.usekey
printf 'import D\ndef j : Nat := sharedValue + 1\n' > a/T/J.lean
printf '#eval IO.sleep 3000\ndef late : Nat := 1\n' > a/T/Late.lean
sleep 3
(cd a && "$LAKE" build -v T.J T.K) > kept.log 2>&1 && rc=0 || rc=$?
cat kept.log
test_exp $rc = 0
no_match_text "Replayed T.K" kept.log
match_text "Built T.K" kept.log
match_pat 'closure records taken from earlier reads [1-9]' kept.log
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

# A module-system module whose machinery a module used (an `extra` module of its `.usage`): the check compares its
# `.olean`'s hash with the one the key records, taken as `modsysHash` took it. An edit the module does not use
# replays it. `C.X2` waits for `C.Slow2`, which sleeps, and takes the module-system file's artifact hashes that
# `C.X1`'s check read.
printf 'module\npublic section\nsyntax "mkv" : term\nmacro_rules | `(mkv) => `(1)\nend\n' > c/C/PM.lean
printf 'def ou : Nat := 0\n' > c/C/OU.lean
printf 'def slow2 : Nat := 0\n' > c/C/Slow2.lean
printf 'import C.PM\nimport C.OU\ntheorem t : (mkv : Nat) = 1 := rfl\n' > c/C/X1.lean
printf 'import C.PM\nimport C.OU\nimport C.Slow2\ntheorem t : (mkv : Nat) = 1 := rfl\n' > c/C/X2.lean
(cd c && test_run build C.X1 C.X2)
test_cmd grep -q '"extra":\[\[\["C","PM"\]' c/.lake/build/lib/lean/C/X1.usage
printf 'def ou : Nat := 0\ndef ou2 : Nat := 0\n' > c/C/OU.lean
printf '#eval IO.sleep 3000\ndef slow2 : Nat := 1\n' > c/C/Slow2.lean
sleep 3
(cd c && "$LAKE" build -v C.X1 C.X2) > extra.log 2>&1 || { cat extra.log; test_exp false; }
cat extra.log
match_text "Replayed C.X1" extra.log
match_text "Replayed C.X2" extra.log
match_pat 'module-system artifact hashes taken [1-9]' extra.log

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
# once, as today: no record of it is made or taken.
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
