#!/usr/bin/env bash
source ../common.sh

./clean.sh
mkdir work
cd work

# Store the Lake cache in the test directory, never the system cache
export LAKE_CACHE_DIR=
export LAKE_ARTIFACT_CACHE=false

# Workspaces `a` and `b` require the same path dependency `dep`. Each build holds only its own
# workspace's lock, so `b` can rebuild `dep` while a build of `a` is running.
mkdir -p dep a/T b
printf 'name = "shared"\n[[lean_lib]]\nname = "D"\n' > dep/lakefile.toml
printf 'def sharedValue : Nat := 1\n' > dep/D.lean
for ws in a b; do
  printf 'name = "%s"\n[[require]]\nname = "shared"\npath = "../dep"\n' $ws > $ws/lakefile.toml
done
printf '[[lean_lib]]\nname = "T"\n' >> a/lakefile.toml
printf 'import T.Slow\nimport D\ntheorem kept : sharedValue = 1 := rfl\n' > a/T/M.lean
printf 'import T.E\nimport D\ndef xs : Nat := 5\n' > a/T/X.lean

# `T.E` reads `D.usage` when it writes its `.usekey`. `T.Slow` imports `T.X`, which imports `T.E`,
# and holds the build until the test creates `release`; `M` is built after it.
write_a() {
  printf 'import D\ndef early : Nat := sharedValue + %s\n' $1 > a/T/E.lean
  printf '%s\n' 'import T.X' '#eval do' \
    "  IO.FS.writeFile \"$PWD/ready\" \"\"" \
    '  for _ in [:600] do' \
    "    if ← System.FilePath.pathExists \"$PWD/release\" then return" \
    '    IO.sleep 100' \
    '  throw <| IO.userError "the test did not release the build"' \
    "def slow : Nat := $1" > a/T/Slow.lean
}

write_a 0
touch release
(cd a && test_run build T.M)
(cd b && test_run build D)

# Builds `T.M` in `a` after an edit to `T.E` and `T.Slow`. While `T.Slow` holds that build, writes
# `$1` to `dep/D.lean` and rebuilds `D` from `b`. Sets `rc` to the status of the build of `a`,
# whose output is `race.log`.
race() {
  rm -f ready release
  round=$((round + 1))
  write_a $round
  (cd a && "$LAKE" build -v T.M) > race.log 2>&1 &
  pid=$!
  for _ in $(seq 600); do
    test -f ready && break
    sleep 0.1
  done
  test_exp -f ready
  test_exp -f a/.lake/build/lib/lean/T/E.usekey
  printf "$1" > dep/D.lean
  (cd b && test_run build D)
  touch release
  wait $pid && rc=0 || rc=$?
  cat race.log
}
round=0

# `D` changes, but not `sharedValue`: `M` still uses only what it used before, and is replayed.
race 'def sharedValue : Nat := 1\ndef other : Nat := 0\n'
test_exp $rc = 0
match_text "Replayed T.M" race.log

# `sharedValue` changes after `a`'s build first read `D.usage`: `M` is checked against the
# rewritten `D.usage`, so it is compiled against the new `D`, and its proof fails.
race 'def sharedValue : Nat := 2\n'
test_exp $rc != 0
no_match_text "Replayed T.M" race.log
match_text "T/M.lean" race.log
test_exp ! -f a/.lake/build/lib/lean/T/M.olean

# `T.X`, checked before `D` is rewritten, looks up the specialization key of `myMap k2` in `D`. `D` then
# gains a specialization of `myMap k`, the key `M` looked up: `M`'s check reads the rewritten `D.usage`,
# so `M` is compiled against the new `D` rather than replayed with its own specialization.
spec_d='@[noinline] def k (n : Nat) : Nat := n + 1\n@[noinline] def k2 (n : Nat) : Nat := n + 2\n@[specialize] def myMap (f : Nat → Nat) : List Nat → List Nat\n  | [] => []\n  | x :: xs => f x :: myMap f xs\ndef sharedValue : Nat := 1\n'
printf "$spec_d" > dep/D.lean
printf 'import T.E\nimport D\ndef xs : List Nat := myMap k2 [5]\n' > a/T/X.lean
printf 'import T.Slow\nimport D\ndef h : List Nat := myMap k [1, 2, 3]\n' > a/T/M.lean
touch release
(cd a && test_run build T.M)
(cd b && test_run build D)
race "${spec_d}def y : List Nat := myMap k [0]\n"
test_exp $rc = 0
no_match_text "Replayed T.M" race.log
match_text "Built T.M" race.log
