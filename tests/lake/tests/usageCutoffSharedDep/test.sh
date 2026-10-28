#!/usr/bin/env bash
source ../common.sh

./clean.sh
mkdir work
cd work

# Store the Lake cache in the test directory, never the system cache
export LAKE_CACHE_DIR=
export LAKE_ARTIFACT_CACHE=false LAKE_USAGE_CUTOFF=1

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

# Lines of a command that holds the build of the module it is in until the test creates `release`.
waiter() {
  printf '%s\n' '#eval do' \
    "  IO.FS.writeFile \"$PWD/ready\" \"\"" \
    '  for _ in [:600] do' \
    "    if ← System.FilePath.pathExists \"$PWD/release\" then return" \
    '    IO.sleep 100' \
    '  throw <| IO.userError "the test did not release the build"'
}

# `T.E` reads `D.usekey` when it writes its own `.usekey`. `T.Slow` imports `T.X`, which imports `T.E`,
# and holds the build until the test creates `release`; `M` is built after it.
write_a() {
  printf 'import D\ndef early : Nat := sharedValue + %s\n' $1 > a/T/E.lean
  { printf 'import T.X\n'; waiter; printf 'def slow : Nat := %s\n' $1; } > a/T/Slow.lean
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

# Waits until the build running in the background holds (it creates `ready`), or fails.
await_ready() {
  for _ in $(seq 600); do
    test -f ready && break
    sleep 0.1
  done
  test_exp -f ready
}

# Builds `T.M` in `a` while `M` itself holds its compile; meanwhile writes `$2` to `dep/$1.lean` and rebuilds
# `$1` from `b`. `M` is compiled against the old `$1`. Then builds `T.M` in `a` again, setting `rc` to its status,
# with output `after.log`.
race_in_compile() {
  rm -f ready release
  (cd a && "$LAKE" build -v T.M) > race.log 2>&1 &
  pid=$!
  await_ready
  printf "$2" > dep/$1.lean
  (cd b && test_run build $1)
  touch release
  wait $pid
  cat race.log
  (cd a && "$LAKE" build -v T.M) > after.log 2>&1 && rc=0 || rc=$?
  cat after.log
}

# `D` gains a `@[csimp]` lemma while `M`, which calls `slowFn`, is compiled: only `D`'s closure digest changes.
# `M`'s key must record the closure `M` was compiled against, so the next build compiles `M` again.
csimp_d='def sharedValue : Nat := 1\n@[noinline] def slowFn (n : Nat) : Nat := n + 0\n@[noinline] def fastFn (n : Nat) : Nat := n\ntheorem slow_eq'"'"' : slowFn = fastFn := by funext n; simp [slowFn, fastFn]\n'
printf "$csimp_d" > dep/D.lean
{ printf 'import D\n@[noinline] def m (n : Nat) : Nat := slowFn n + 1\n'; waiter; } > a/T/M.lean
touch release
(cd a && test_run build T.M)
(cd b && test_run build D)
printf 'def mEdit : Nat := 1\n' >> a/T/M.lean
race_in_compile D "${csimp_d}@[csimp] theorem slow_eq : @slowFn = @fastFn := slow_eq'\n"
test_exp $rc = 0
match_text "Built T.M" race.log
no_match_text "Replayed T.M" after.log
match_text "Built T.M" after.log

# The same for a module `M` uses as a whole: `E` gains a second `macro_rules` alternative, which changes what
# `mkv` expands to, while `M` is compiled. The next build compiles `M` again, and its proof fails as it does from
# scratch.
printf '[[lean_lib]]\nname = "E"\n' >> dep/lakefile.toml
e_rules='syntax "mkv" : term\nmacro_rules | `(mkv) => `(1)\n'
printf "$e_rules" > dep/E.lean
{ printf 'import E\ntheorem t : (mkv : Nat) = 1 := rfl\n'; waiter; } > a/T/M.lean
touch release
(cd a && test_run build T.M)
(cd b && test_run build E)
printf 'def mEdit : Nat := 1\n' >> a/T/M.lean
race_in_compile E "${e_rules}macro_rules | \`(mkv) => \`(2)\n"
match_text "Built T.M" race.log
test_exp $rc != 0
no_match_text "Replayed T.M" after.log
match_text "T/M.lean" after.log

# An importer reads a dependency's `.usekey`, never its `.usage`. `b` rebuilds `D`, and `D.usage` from before the
# rebuild is put back next to the new `D.usekey` and `D.olean`: `M` is not replayed against the old `sharedValue`.
printf 'def sharedValue : Nat := 1\n' > dep/D.lean
printf 'import D\ntheorem kept : sharedValue = 1 := rfl\n' > a/T/M.lean
(cd a && test_run build T.M)
(cd b && test_run build D)
cp dep/.lake/build/lib/lean/D.usage old-D.usage
printf 'def sharedValue : Nat := 2\n' > dep/D.lean
(cd b && test_run build D)
rm -f dep/.lake/build/lib/lean/D.usage
cp old-D.usage dep/.lake/build/lib/lean/D.usage
(cd a && "$LAKE" build -v T.M) > after.log 2>&1 && rc=0 || rc=$?
cat after.log
test_exp $rc != 0
no_match_text "Replayed T.M" after.log
match_text "T/M.lean" after.log

# A module checked after another workspace rewrites a shared dependency is compiled again in that build, not replayed.
# `D` <- `M` <- `S` <- `N`, with `M` calling `slowFn` from `F`. `a`'s build keeps `D` and `M`, then compiles `S`, which
# holds. Meanwhile `b` rebuilds `D` with a `@[csimp]` lemma that redirects `slowFn`. `M` still records `D`'s old closure,
# so the edge `M` -> `D` of `N`'s closure is stale when `N` is checked, and `N` is compiled again: its C file is the one
# a fresh build of the same sources produces.
printf '[[lean_lib]]\nname = "F"\n' >> dep/lakefile.toml
f_src='@[noinline] def slowFn (n : Nat) : Nat := n + 0\n@[noinline] def fastFn (n : Nat) : Nat := n\ntheorem slow_eq'"'"' : slowFn = fastFn := by funext n; simp [slowFn, fastFn]\n'
imp_d='import F\ndef d0 : Nat := 0\n'
write_s() { { printf 'import T.M\n'; waiter; printf 'def slowv : Nat := %s\n' $1; } > a/T/S.lean; }
# Builds `T.N` in `a` after an edit to `T.S`. While `T.S` holds that build, writes `$1` to `dep/D.lean` and rebuilds
# `D` from `b`. The build of `a` must succeed; its output is `race.log`.
race_n() {
  rm -f ready release
  write_s $2
  (cd a && "$LAKE" build -v T.N) > race.log 2>&1 &
  pid=$!
  await_ready
  printf "$1" > dep/D.lean
  (cd b && test_run build D)
  touch release
  wait $pid
  cat race.log
}
printf "$f_src" > dep/F.lean
printf "$imp_d" > dep/D.lean
printf 'import F\nimport D\n@[noinline] def m (n : Nat) : Nat := slowFn n + 1\n' > a/T/M.lean
printf 'import T.S\n@[noinline] def nn (k : Nat) : Nat := slowFn k + 2\n' > a/T/N.lean
write_s 0
touch release
(cd a && test_run build T.N)
printf "${imp_d}def d1 : Nat := 1\n" > dep/D.lean
(cd b && test_run build D)
race_n "${imp_d}def d1 : Nat := 1\n@[csimp] theorem slow_eq : @slowFn = @fastFn := slow_eq'\n" 1
no_match_text "Replayed T.N" race.log
match_text "Built T.N" race.log
mkdir fresh
cp -r dep a fresh/
rm -rf fresh/dep/.lake fresh/a/.lake
(cd fresh/a && test_run build T.N)
test_cmd cmp fresh/a/.lake/build/ir/T/N.c a/.lake/build/ir/T/N.c

# The same race through an instance: `D` gains an instance of higher priority, which `N`'s proof then uses instead of
# the axiom `axC`. `N` uses only `C.ok` and `axC`, which did not change, so only `D`'s closure shows the change.
# `N` is compiled again in that build, and `saved` depends on the axioms a fresh build gives it: none.
printf '[[lean_lib]]\nname = "K"\n' >> dep/lakefile.toml
printf 'class C : Prop where\n  ok : True\naxiom axC : C\ndef cleanC : C := ⟨trivial⟩\nattribute [instance 100] axC\n' \
  > dep/K.lean
printf 'import K\ndef d0 : Nat := 0\n' > dep/D.lean
printf 'import D\ndef m : Nat := 0\n' > a/T/M.lean
printf 'import T.S\ntheorem saved : True := C.ok\n' > a/T/N.lean
printf 'import T.N\n#check saved\n#print axioms saved\n' > a/Check.lean
write_s 0
touch release
(cd a && test_run build T.N)
(cd b && test_run build D)
(cd a && test_cmd_out "depends on axioms: [axC]" "$LAKE" env lean Check.lean)
race_n 'import K\nattribute [instance 200] cleanC\ndef d0 : Nat := 0\n' 1
no_match_text "Replayed T.N" race.log
match_text "Built T.N" race.log
(cd a && "$LAKE" env lean Check.lean) > kept.out 2>&1
cat kept.out
mkdir fresh2
cp -r dep a fresh2/
rm -rf fresh2/dep/.lake fresh2/a/.lake
(cd fresh2/a && LAKE_USAGE_CUTOFF=0 test_run build T.N)
(cd fresh2/a && LAKE_USAGE_CUTOFF=0 "$LAKE" env lean Check.lean) > fresh.out 2>&1
cat fresh.out
match_text "does not depend on any axioms" fresh.out
test_cmd cmp fresh.out kept.out

# A build hashes a module-system file once and reuses the hash in its later checks only while the file's stamp is
# unchanged. `U` is a module-system file of `dep` that `D` imports; `a`'s build hashes it in the checks of `T.E`,
# `T.X` and `T.Slow`, then `b` rebuilds `U` with another value while `T.Slow` holds the build. `M`, checked after
# that, must see `U`'s new bytes: it is compiled again, and its proof fails as it does from scratch.
printf '[[lean_lib]]\nname = "U"\n' >> dep/lakefile.toml
printf 'module\npublic def uValue : Nat := 1\n' > dep/U.lean
printf 'import U\ndef sharedValue : Nat := 1\n' > dep/D.lean
printf 'import T.Slow\nimport U\ntheorem keptU : uValue = 1 := rfl\n' > a/T/M.lean
printf 'import T.E\nimport D\ndef xs : Nat := 5\n' > a/T/X.lean
write_a 0
touch release
(cd a && test_run build T.M)
(cd b && test_run build U)
# A hash is kept only for a file whose status-change time lies more than two seconds in the past.
sleep 3
rm -f ready release
write_a 1
(cd a && "$LAKE" build -v T.M) > race.log 2>&1 &
pid=$!
await_ready
printf 'module\npublic def uValue : Nat := 2\n' > dep/U.lean
(cd b && test_run build U)
touch release
wait $pid && rc=0 || rc=$?
cat race.log
test_exp $rc != 0
no_match_text "Replayed T.M" race.log
match_text "T/M.lean" race.log
