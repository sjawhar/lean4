#!/usr/bin/env bash
# The usage-cutoff compiled-code cases and their harness. Each `sN/test.sh` runs slice N of `all_cases` (every
# `SLICES`-th case from the Nth) in its own `work` directory, so that ctest runs the slices as separate tests;
# `CASES` runs a chosen subset instead.
source "$(dirname "${BASH_SOURCE[0]}")/../common.sh"

rm -rf work
mkdir -p work/cut work/fresh
cd work

# Each case is a package in two states. It is built in state 0, edited to state 1 and built again with the
# usage cutoff on (`work/cut/CASE`); the state-1 sources are also built from scratch with the cutoff off
# (`work/fresh/CASE`). Everything observable must agree: whether the build succeeds, the messages it logs,
# what the executable `app` prints, what `lake env lean` prints for each `Check*.lean`, and the C file of
# every module, which for a module the cutoff skipped must be what compiling its sources now produces. The
# `.olean`, `.ilean` and `.ir` files the cutoff kept must also be byte for byte those of a clean build of
# state 1 with the cutoff on, made in the same directory. A module that specialized a function itself where a
# fresh build would reuse another module's specialization of the same function at the same arguments is built
# again (`perkey_provider`), and one whose imports gain a specialization it never looked up is replayed
# (`perkey_unrelated_spec`). A case may also check the build itself with `CASE_c_check`, run in the cutoff tree.
# A case writes its state-0 files with `CASE_s0` and the files state 1 changes with `CASE_s1`, both in the
# package directory.

# Store the Lake cache in the test directory, never the system cache. The cutoff tree turns the cutoff on;
# fresh controls set it off explicitly.
export LAKE_CACHE_DIR=
export LAKE_ARTIFACT_CACHE=false
# The cutoff is off by default; the cutoff tree turns it on, the fresh tree off (each explicitly)
export LAKE_USAGE_CUTOFF=1

# Observations of a package directory after a build: its exit code (first argument) and log (second). The
# messages are those of Lean modules (`info: FILE:LINE:COL: …`), which a replayed module logs again.
observe() {
  if [ "$1" = 0 ]; then echo "build: ok"; else echo "build: failed"; fi
  echo "messages:"
  grep -E '^info: [^ ]+\.lean:[0-9]+:[0-9]+: ' "$2" | LC_ALL=C sort || true
  if [ -f Main.lean ] && [ -x .lake/build/bin/app ] && [ "$1" = 0 ]; then
    local out rc=0
    out=$(./.lake/build/bin/app 2>&1) || rc=$?
    printf 'app (exit %s):\n%s\n' "$rc" "$out"
  fi
  local f
  for f in Check*.lean; do
    [ -e "$f" ] || continue
    local out rc=0
    out=$("$LAKE" env lean "$f" 2>&1) || rc=$?
    printf '%s (exit %s):\n%s\n' "$f" "$rc" "$out"
  done
}

# The `.olean`, `.ilean` and `.ir` files below build directory `$1`.
build_outputs() { (cd "$1" && find . \( -name '*.olean*' -o -name '*.ilean' -o -name '*.ir' \)); }

# Builds case `$1` both ways and compares. With `$2 = cache`, both cutoff-on builds use an artifact cache
# shared with a second state-1 tree (`work/cut/CASE_cache.shared`), which is built from it and compared too;
# the state-1 tree is built a second time, and both builds are observed (`cut/CASE_cache.obs`, `.obs2`).
# After the other comparisons the cutoff tree's outputs are compared with a clean cutoff-on build of the same
# sources at the same path (see the end of `run_case`).
run_case() {
  local c=$1 mode=${2:-}
  local n=$c${mode:+_$mode}
  local cut=cut/$n fresh=fresh/$n rc
  echo "=== $n"
  mkdir -p "$cut" "$fresh"
  local -a env=()
  if [ "$mode" = cache ]; then
    env=(LAKE_ARTIFACT_CACHE=true LAKE_RESTORE_ARTIFACTS=true "LAKE_CACHE_DIR=$PWD/cut/$n.cache")
  fi
  if ! (cd "$cut" && "${c}_s0" && env "${env[@]}" "$LAKE" build -v > ../$n.0.log 2>&1); then
    cat "cut/$n.0.log"
    echo "FAILURE: $n: state 0 does not build"
    return 2
  fi
  (cd "$cut" && "${c}_s1")
  rc=0
  (cd "$cut" && env "${env[@]}" "$LAKE" build -v > ../$n.1.log 2>&1) || rc=$?
  (cd "$cut" && observe $rc ../$n.1.log) > cut/$n.obs
  local cutrc=$rc rcs=0
  if [ "$mode" = cache ]; then
    rc=0
    (cd "$cut" && env "${env[@]}" "$LAKE" build -v > ../$n.2.log 2>&1) || rc=$?
    cutrc=$((cutrc + rc))
    (cd "$cut" && observe $rc ../$n.2.log) > cut/$n.obs2
    mkdir -p "cut/$n.shared"
    (cd "cut/$n.shared" && "${c}_s0" && "${c}_s1")
    rcs=0
    (cd "cut/$n.shared" && env "${env[@]}" "$LAKE" build -v > ../$n.shared.log 2>&1) || rcs=$?
    (cd "cut/$n.shared" && observe $rcs ../$n.shared.log) > cut/$n.shared.obs
  fi
  rc=0
  (cd "$fresh" && "${c}_s0" && "${c}_s1" && LAKE_USAGE_CUTOFF=0 "$LAKE" build -v > ../$n.log 2>&1) || rc=$?
  (cd "$fresh" && observe $rc ../$n.log) > fresh/$n.obs
  local ok=1 o t f
  for o in cut/$n.obs ${mode:+cut/$n.obs2 cut/$n.shared.obs}; do
    if ! diff -u fresh/$n.obs "$o"; then
      ok=0
      echo "FAILURE: $n: $o (cutoff on) differs from a fresh build (fresh/$n.obs, above as ---)"
    fi
  done
  for t in "$cut" ${mode:+"cut/$n.shared"}; do
    for f in $(cd "$fresh/.lake/build/ir" && find . -name '*.c' | LC_ALL=C sort); do
      if ! cmp -s "$fresh/.lake/build/ir/$f" "$t/.lake/build/ir/$f"; then
        ok=0
        echo "FAILURE: $n: $t/.lake/build/ir/${f#./} differs from the fresh build's:"
        diff "$fresh/.lake/build/ir/$f" "$t/.lake/build/ir/$f" | head -n 8 || true
      fi
    done
  done
  if declare -F "${c}_c_check" > /dev/null && ! (cd "$cut" && "${c}_c_check"); then
    ok=0
    echo "FAILURE: $n: ${c}_c_check failed in $cut"
  fi
  # The cutoff's promise is that what it keeps is what a clean build produces. For the cutoff tree, and in cache
  # mode for the tree restored from the shared cache, the clean build has the cutoff on (a build without it
  # writes `.olean` files without digests) and is made at the same path, which a module that logs a message
  # embeds in its `.olean`. When a build fails, the outputs both builds produced are compared.
  local kept trc name
  for t in "$cut" ${mode:+"cut/$n.shared"}; do
    kept="$t.kept"
    name=${t##*/}
    trc=$cutrc
    if [ "$t" != "$cut" ]; then trc=$rcs; fi
    rm -rf "$kept"
    cp -a "$t/.lake/build" "$kept"
    rm -rf "$t/.lake/build"
    rc=0
    (cd "$t" && "$LAKE" build -v > ../$name.clean.log 2>&1) || rc=$?
    if [ $trc = 0 ] && [ $rc != 0 ]; then
      ok=0
      echo "FAILURE: $n: the clean cutoff-on build of state 1 (cut/$name.clean.log) fails"
    elif [ $trc != 0 ] && [ $rc = 0 ]; then
      ok=0
      echo "FAILURE: $n: the build of $t fails but the clean cutoff-on build (cut/$name.clean.log) succeeds"
    fi
    for f in $( (build_outputs "$t/.lake/build"; build_outputs "$kept") | LC_ALL=C sort -u); do
      if [ ! -e "$kept/$f" ] || [ ! -e "$t/.lake/build/$f" ]; then
        if [ $trc = 0 ] && [ $rc = 0 ]; then
          ok=0
          echo "FAILURE: $n: ${f#./} exists in only one of the build of $t and the clean cutoff-on build"
        fi
      elif ! cmp -s "$t/.lake/build/$f" "$kept/$f"; then
        ok=0
        echo "FAILURE: $n: ${f#./} of $t differs from the clean cutoff-on build's:"
        cmp "$t/.lake/build/$f" "$kept/$f" || true
      fi
    done
    rm -rf "$kept"
  done
  if [ $ok = 0 ]; then
    echo "-- the cutoff build of state 1 (cut/$n.1.log):"
    grep -E 'Built|Replayed|Restored|Unpacked|Reused|error|undefined' "cut/$n.1.log" | grep -v 'c\.o' || true
    return 1
  fi
}

lakefile_app() {
  printf 'name = "test"\ndefaultTargets = ["app"]\n[[lean_lib]]\nname = "T"\n[[lean_exe]]\nname = "app"\nroot = "Main"\n' \
    > lakefile.toml
}
mkdir_t() { mkdir -p T; }

my_map() {
  cat > T/Base.lean <<'EOF'
@[specialize] def myMap (f : Nat → Nat) : List Nat → List Nat
  | [] => []
  | x :: xs => f x :: myMap f xs
EOF
}

## Compiled code reaching another module's compiled code through an intermediate module's compiled body.

# `B.k` reuses the specialization `A.h` created; `M.g` inlines `k`, so M's compiled code calls A's
# specialization too. When `h` changes, that specialization computes something else: M must compile again,
# and `native_decide` over `g` must not prove an equation that is false.
spec_transitive_s0() {
  lakefile_app; mkdir_t; my_map
  printf 'import T.Base\ndef h (xs : List Nat) := myMap Nat.succ xs\n' > T/A.lean
  printf 'import T.A\ndef k (xs : List Nat) := myMap Nat.succ xs\n' > T/B.lean
  printf 'import T.B\ndef g (xs : List Nat) := k xs\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (g [1, 2, 3])\n' > Main.lean
  cat > CheckFalse.lean <<'EOF'
import T.M
theorem bad : False := by
  have h : g [1] = [10] := by native_decide
  have hn : g [1] ≠ [10] := by decide
  exact hn h
#print axioms bad
EOF
}
spec_transitive_s1() { printf 'import T.Base\ndef h (xs : List Nat) := myMap (· * 10) xs\n' > T/A.lean; }

# `M.k` reuses A's specialization; the executable's root module inlines `k`. When `h` stops using `myMap`,
# A no longer defines that specialization, and the executable must still link.
spec_link_s0() {
  lakefile_app; mkdir_t; my_map
  printf 'import T.Base\ndef h (xs : List Nat) := myMap Nat.succ xs\n' > T/A.lean
  printf 'import T.A\ndef k (xs : List Nat) := myMap Nat.succ xs\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (k [1, 2, 3])\n' > Main.lean
}
spec_link_s1() { printf 'import T.Base\ndef h (xs : List Nat) := xs\n' > T/A.lean; }

# As `spec_link`, with the reused specialization kept but specialized at another type.
spec_type_s0() {
  lakefile_app; mkdir_t
  cat > T/Base.lean <<'EOF'
@[specialize] def gmap {α β : Type} (f : α → β) : List α → List β
  | [] => []
  | x :: xs => f x :: gmap f xs
EOF
  printf 'import T.Base\ndef h (xs : List Nat) : List Nat := gmap Nat.succ xs\n' > T/A.lean
  printf 'import T.A\ndef k (xs : List Nat) : List Nat := gmap Nat.succ xs\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (k [1, 2, 3])\n' > Main.lean
}
spec_type_s1() {
  printf 'import T.Base\ndef h (xs : List String) : List Nat := gmap String.length xs\n' > T/A.lean
}

# As `spec_transitive`, with the executable replaced by a `precompileModules` library whose elaborator runs
# `g`, the way a project's tactic library runs its project's code.
spec_precomp_s0() {
  mkdir -p T P Q; my_map
  printf 'name = "test"\ndefaultTargets = ["Q"]\n[[lean_lib]]\nname = "T"\n' > lakefile.toml
  printf '[[lean_lib]]\nname = "P"\nprecompileModules = true\n[[lean_lib]]\nname = "Q"\n' >> lakefile.toml
  printf 'import T.Base\ndef h (xs : List Nat) := myMap Nat.succ xs\n' > T/A.lean
  printf 'import T.A\ndef k (xs : List Nat) := myMap Nat.succ xs\n' > T/B.lean
  printf 'import T.B\ndef g (xs : List Nat) := k xs\n' > T/M.lean
  printf 'import T.M\n' > T.lean
  printf 'import P.Tac\n' > P.lean
  printf 'import Q.Use\n' > Q.lean
  cat > P/Tac.lean <<'EOF'
import T.M
import Lean
open Lean Elab Command in
elab "#gcheck" : command => logInfo m!"g = {g [1, 2, 3]}"
EOF
  printf 'import P.Tac\n#gcheck\n' > Q/Use.lean
}
spec_precomp_s1() {
  printf 'import T.Base\ndef h (xs : List Nat) := myMap (· * 10) xs\n' > T/A.lean
  printf 'import P.Tac\n-- edited\n#gcheck\n' > Q/Use.lean
}

# A module compiled with plugins (the shared library of a `precompileModules` library it imports, and Lake's own)
# keeps its usual dependencies: plugins that register no reserved-name predicate record nothing, so a change to
# `T.F`, an import of `Q.Use` that `Q.Use` uses nothing of, replays `Q.Use` (`plugin_replay`).
plugin_replay_s0() {
  mkdir -p T P Q
  printf 'name = "test"\ndefaultTargets = ["Q"]\n[[lean_lib]]\nname = "T"\n' > lakefile.toml
  printf '[[lean_lib]]\nname = "P"\nprecompileModules = true\n[[lean_lib]]\nname = "Q"\n' >> lakefile.toml
  printf 'def f0 : Nat := 0\n' > T/F.lean
  printf 'import T.F\n' > T.lean
  printf 'import P.Tac\n' > P.lean
  printf 'import Q.Use\n' > Q.lean
  printf '%s\n' 'import Lean' 'open Lean Elab Command in' 'elab "#hello" : command => logInfo m!"hello"' > P/Tac.lean
  printf 'import P.Tac\nimport T.F\n#hello\ndef u : Nat := 1\n' > Q/Use.lean
}
plugin_replay_s1() { printf 'def f0 : Nat := 0\ndef f1 : Nat := 1\n' > T/F.lean; }
plugin_replay_c_check() { grep -qE 'Replayed Q\.Use( |$)' ../plugin_replay.1.log; }

# `A` replaces `f` with `g1` in compiled code (`@[csimp]`); `B.b` is inlined into `M.m`. When the replacement
# becomes `g2`, M's compiled code must call `g2`.
csimp_transitive_s0() {
  lakefile_app; mkdir_t
  cat > T/A.lean <<'EOF'
def f (n : Nat) : Nat := n
@[noinline] def g1 (n : Nat) : Nat := n + 10
@[noinline] def g2 (n : Nat) : Nat := n + 20
axiom f_eq : @f = @g1
attribute [csimp] f_eq
EOF
  printf 'import T.A\n@[inline] def b (n : Nat) : Nat := f n\n' > T/B.lean
  printf 'import T.B\n@[noinline] def m (n : Nat) : Nat := b n\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (m 1)\n' > Main.lean
}
csimp_transitive_s1() {
  cat > T/A.lean <<'EOF'
def f (n : Nat) : Nat := n
@[noinline] def g1 (n : Nat) : Nat := n + 10
@[noinline] def g2 (n : Nat) : Nat := n + 20
axiom f_eq : @f = @g2
attribute [csimp] f_eq
EOF
}

# The `@[csimp]` theorem lives in `Base`; module `Z` attaches the attribute. When `Z` stops attaching it, the
# compiled code of every module that reached `f` through `Z` (here inlined from `B` into `M`) calls `f` again.
csimp_late_s0() {
  lakefile_app; mkdir_t
  cat > T/Base.lean <<'EOF'
def f (n : Nat) : Nat := n + 1
def g (n : Nat) : Nat := n + 2
theorem thm : @f = @g := sorry
EOF
  printf 'import T.Base\nattribute [csimp] thm\n' > T/Z.lean
  printf 'import T.Z\n@[inline] def b (n : Nat) : Nat := f n\n' > T/B.lean
  printf 'import T.B\n@[noinline] def m (n : Nat) : Nat := b n\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (m 1)\n' > Main.lean
}
csimp_late_s1() { printf 'import T.Base\n' > T/Z.lean; }

## A compiled interface that changes while every kernel term stays the same.

# `@[specialize]` added to `e` in its own module: compiling `D` now specializes `e` for the argument it
# passes, so a `D` the cutoff kept still has the unspecialized code (it prints the same, so only its C file
# shows it).
e_d_s0() {
  lakefile_app; mkdir_t
  printf '%s\n' "$1" > T/E.lean
  printf 'import T.E\ndef d : Nat := %s\n' "$2" > T/D.lean
  printf 'import T.D\ndef main : IO Unit := IO.println d\n' > Main.lean
}
specialize_attr_s0() { e_d_s0 'def e (f : Nat → Nat) (n : Nat) : Nat := f n + f n' 'e (· + 1) 10'; }
specialize_attr_s1() { printf '@[specialize]\ndef e (f : Nat → Nat) (n : Nat) : Nat := f n + f n\n' > T/E.lean; }

# A parameter type's class status decides whether the compiler specializes a function for that argument.
# `Foo` becomes a class in its own module (`class_same`), or another module imported by `M` declares it one
# (`class_cross`), or its own module marks the class `@[nospecialize]` (`nospec_type`); `M`'s source does not
# change, and its output does not either, so only its C file shows the difference.
class_m() {
  lakefile_app; mkdir_t
  printf 'import T.A\nimport T.Z\n%s\n' "$1" > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println h\n' > Main.lean
}
class_same_s0() {
  class_m $'@[noinline] def g (f : Foo) (n : Nat) : Nat := n + 1\ndef h : Nat := g ⟨5⟩ 3'
  printf 'structure Foo where\n  x : Nat\n' > T/A.lean
  printf 'def zdummy : Nat := 1\n' > T/Z.lean
}
class_same_s1() { printf 'class Foo where\n  x : Nat\n' > T/A.lean; }
class_cross_s0() {
  class_m $'@[noinline] def g (f : Foo) (n : Nat) : Nat := n + 1\ndef h : Nat := g ⟨5⟩ 3'
  printf 'structure Foo where\n  x : Nat\n' > T/A.lean
  printf 'import T.A\ndef zdummy : Nat := 1\n' > T/Z.lean
}
class_cross_s1() { printf 'import T.A\ndef zdummy : Nat := 1\nattribute [class] Foo\n' > T/Z.lean; }
nospec_type_s0() {
  class_m $'@[noinline] def g [Foo] (n : Nat) : Nat := n + 1\ndef h : Nat := @g ⟨5⟩ 3'
  printf 'class Foo where\n  x : Nat\n' > T/A.lean
  printf 'def zdummy : Nat := 1\n' > T/Z.lean
}
nospec_type_s1() { printf 'class Foo where\n  x : Nat\nattribute [nospecialize] Foo\n' > T/A.lean; }

# Instance and reducibility attributes can be local, scoped or erased, so the declaring module's own state at
# its end can differ from what importers see. `foo` is `@[inline]`: the base phase inlines it unless importers
# see it as an instance (`Simp/InlineCandidate.lean:83`). Global then local instance (`local_inst_own`), a
# global instance erased at the end of its module (`erase_inst_own`), a scoped instance that `M` opens
# (`scoped_inst`); global then local `@[instance_reducible]` (`local_red_own2`) and the reverse
# (`local_red_own3`), and a scoped one (`scoped_red_own`).
inst_own_z() { printf '@[inline, instance_reducible] def foo : Inhabited Nat := ⟨7⟩\n%s\n' "$1" > T/Z.lean; }
inst_own_m() {
  lakefile_app; mkdir_t
  printf 'import T.Z\n%s@[noinline] def g : Inhabited Nat := %s\n' "$1" "$2" > T/M.lean
  printf 'import T.M\n@[noinline] def w : Nat := g.default + 1\n' > T/W.lean
  printf 'import T.W\ndef main : IO Unit := IO.println w\n' > Main.lean
}
local_inst_own_s0() { inst_own_m '' foo; inst_own_z 'attribute [instance] foo'; }
local_inst_own_s1() { inst_own_z 'attribute [local instance] foo'; }
erase_inst_own_s0() { inst_own_m '' foo; inst_own_z $'attribute [instance] foo\nattribute [-instance] foo'; }
erase_inst_own_s1() { inst_own_z ''; }
scoped_inst_z() {
  printf 'namespace N\n@[inline, instance_reducible] def foo : Inhabited Nat := ⟨7⟩\nend N\n%s' "$1" > T/Z.lean
}
scoped_inst_s0() {
  inst_own_m $'open N\n' N.foo
  scoped_inst_z $'namespace N\nattribute [scoped instance] foo\nend N\n'
}
scoped_inst_s1() { scoped_inst_z ''; }
local_red_a() {
  printf 'namespace Chan\nclass C where get : Nat\ninstance inst : C := ⟨10⟩\ndef f [C] (n : Nat) : Nat := C.get + n\nend Chan\n%s\n' \
    "$1" > T/A.lean
}
local_red_s0() {
  chan_s0 'def placeholder : Nat := 0' $'@[noinline] def b : Nat :=\n  let g : Nat → Nat := f\n  g 1'
  local_red_a "$1"
}
local_red_own2_s0() { local_red_s0 'attribute [instance_reducible] Chan.f'; }
local_red_own2_s1() { local_red_a 'attribute [local instance_reducible] Chan.f'; }
local_red_own3_s0() { local_red_s0 'attribute [local instance_reducible] Chan.f'; }
local_red_own3_s1() { local_red_a 'attribute [instance_reducible] Chan.f'; }
scoped_red_own_s0() { local_red_s0 ''; }
scoped_red_own_s1() {
  local_red_a $'set_option allowUnsafeReducibility true\nnamespace Chan\nattribute [scoped instance_reducible] f\nend Chan'
}

# A constant folder another module registers for `A.k`: `M`'s compiled `h := k 3` folds to the folder's
# result once `Z`, which `M` imports but uses nothing of, registers it.
folder_z() {
  printf 'import Lean\nimport T.A\nopen Lean.Compiler.LCNF.Simp.ConstantFold\n' > T/Z.lean
  printf 'def myFolder : Folder := fun _ => return some (.lit (.nat 42))\n%s' "$1" >> T/Z.lean
}
folder_cross_s0() {
  lakefile_app; mkdir_t
  printf '@[noinline] def k (n : Nat) : Nat := n + 1\n' > T/A.lean
  folder_z ''
  printf 'import T.A\nimport T.Z\ndef h : Nat := k 3\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println h\n' > Main.lean
}
folder_cross_s1() { folder_z $'run_meta registerFolder ``k ``myFolder\n'; }

# `Z`, which `B` imports but uses nothing of, marks `A`'s `f` `@[instance_reducible]`, which changes how `B`
# compiles its use of `f` (as in `instance_reducible`, where `A` drops the attribute itself); only `B.c` shows it.
reducible_cross_z() { printf 'import T.A\ndef zdummy : Nat := 1\n%s' "$1" > T/Z.lean; }
reducible_cross_s0() {
  chan_s0 "$(inst_red_a '')"
  printf 'import T.A\nimport T.Z\nopen Chan\n@[noinline] def b : Nat :=\n  let g : Nat → Nat := f\n  g 1\n' > T/B.lean
  reducible_cross_z ''
}
reducible_cross_s1() {
  reducible_cross_z $'set_option allowUnsafeReducibility true in\nattribute [instance_reducible] Chan.f\n'
}

# Two modules give the same declaration conflicting table entries, and the last import wins: swapping `X`'s two
# imports changes how `M`, which imports only `X`, compiles. `@[csimp]` (`table_order`), constant folders
# (`folder_order`), reducibility (`red_order`).
order_x() { printf 'import T.%s\nimport T.%s\n' "$1" "$2" > T/X.lean; }
table_order_s0() {
  lakefile_app; mkdir_t
  cat > T/A.lean <<'EOF'
def f (n : Nat) : Nat := n
@[noinline] def g1 (n : Nat) : Nat := n + 10
@[noinline] def g2 (n : Nat) : Nat := n + 20
axiom eq1 : @f = @g1
axiom eq2 : @f = @g2
EOF
  printf 'import T.A\nattribute [csimp] eq1\n' > T/Z1.lean
  printf 'import T.A\nattribute [csimp] eq2\n' > T/Z2.lean
  order_x Z1 Z2
  printf 'import T.X\n@[noinline] def h (n : Nat) : Nat := f n\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (h 1)\n' > Main.lean
}
table_order_s1() { order_x Z2 Z1; }
folder_order_z() {
  printf 'import Lean\nimport T.A\nopen Lean.Compiler.LCNF.Simp.ConstantFold\n' > "T/Z$1.lean"
  printf 'def folder%s : Folder := fun _ => return some (.lit (.nat %s))\n' "$1" "$2" >> "T/Z$1.lean"
  printf 'run_meta registerFolder ``f ``folder%s\n' "$1" >> "T/Z$1.lean"
}
folder_order_s0() {
  lakefile_app; mkdir_t
  printf '@[noinline] def f (n : Nat) : Nat := n + 1\n' > T/A.lean
  folder_order_z 1 10; folder_order_z 2 20
  order_x Z1 Z2
  printf 'import T.X\n@[noinline] def h : Nat := f 1\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println h\n' > Main.lean
}
folder_order_s1() { order_x Z2 Z1; }
red_order_s0() {
  chan_s0 "$(inst_red_a '')"
  printf 'import T.X\nopen Chan\n@[noinline] def b : Nat :=\n  let g : Nat → Nat := f\n  g 1\n' > T/B.lean
  printf 'import T.A\nset_option allowUnsafeReducibility true in\nattribute [instance_reducible] Chan.f\n' > T/Z1.lean
  printf 'import T.A\nset_option allowUnsafeReducibility true in\nattribute [irreducible] Chan.f\n' > T/Z2.lean
  order_x Z1 Z2
}
red_order_s1() { order_x Z2 Z1; }

# A specialization-cache miss that becomes a hit. `M` specializes `myMap k` itself; then `Y`, which `M` imports
# but uses nothing of, starts specializing the same call, so a fresh `M` reuses `Y`'s specialization instead.
# `M` is built again (`perkey_provider`). With a constant folder for `k` registered in `Z` (`perkey_provider_folder`), which
# `Y` does not import and which is not meaning-preserving (it returns 42), the two specializations compute
# different things as well.
perkey_files() {
  lakefile_app; mkdir_t
  printf 'namespace T\n@[noinline] def k (n : Nat) : Nat := n + 1\n' > T/B.lean
  printf '@[specialize] def myMap (f : Nat → Nat) : List Nat → List Nat\n  | [] => []\n' >> T/B.lean
  printf '  | x :: xs => f x :: myMap f xs\nend T\n' >> T/B.lean
  perkey_y ''
  printf 'import T.B\n%simport T.Y\nnamespace T\ndef h : List Nat := myMap k [1, 2, 3]\nend T\n' "$1" > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println T.h\n' > Main.lean
}
perkey_y() { printf 'import T.B\nnamespace T\ndef y0 : Nat := 0\n%send T\n' "$1" > T/Y.lean; }
perkey_provider_folder_s0() {
  perkey_files $'import T.Z\n'
  cat > T/Z.lean <<'EOF'
import Lean
import T.B
open Lean.Compiler.LCNF.Simp.ConstantFold
def myFolder : Folder := fun args => do
  let #[_] := args | return none
  return some (.lit (.nat 42))
run_meta registerFolder ``T.k ``myFolder
EOF
}
perkey_provider_folder_s1() { perkey_y $'def y : List Nat := myMap k [0]\n'; }

# The compiler's passes and folders stay the built-in ones when `M` imports `Lean` (`flag_off_lean`) or a module
# that only reads the folder table (`flag_off_reader`). State 1 adds a definition to the imported `Y` that `M`
# does not use and that provides no key `M` looked up, so `M` is replayed.
flag_off_lean_s0() { perkey_files $'import Lean\n'; }
flag_off_lean_s1() { perkey_y $'def yUnused : Nat := 1\n'; }
flag_off_lean_c_check() { grep -qE 'Replayed T\.M( |$)' ../flag_off_lean.1.log; }
flag_off_reader_s0() {
  perkey_files $'import Lean\nimport T.R\n'
  printf 'import Lean\nopen Lean Lean.Compiler.LCNF.Simp.ConstantFold\nrun_meta do\n  let _ ← getFolders\n  pure ()\n' \
    > T/R.lean
}
flag_off_reader_s1() { perkey_y $'def yUnused : Nat := 1\n'; }
flag_off_reader_c_check() { grep -qE 'Replayed T\.M( |$)' ../flag_off_reader.1.log; }

# `Main` inlines `M.g`, whose body calls the specialization `M` creates: `M` is built again, so `Main` is too and
# calls `Y`'s, as a fresh build does.
perkey_provider_inl_s0() {
  perkey_files ''
  printf 'import T.B\nimport T.Y\nnamespace T\ndef g (xs : List Nat) : List Nat := myMap k xs\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (T.g [1, 2, 3])\n' > Main.lean
}
perkey_provider_inl_s1() { perkey_provider_folder_s1; }

# The same when `Main`'s source also changes in state 1.
perkey_provider_inl_edit_s0() { perkey_provider_inl_s0; }
perkey_provider_inl_edit_s1() {
  perkey_provider_inl_s1
  printf 'import T.M\ndef unused : Nat := 1\ndef main : IO Unit := IO.println (T.g [1, 2, 3])\n' > Main.lean
}

# Compiler passes and folders from other sources than an imported module's entries: `M` registers a folder
# itself (`nonbuiltin_own_folder`) or declares a `@[cpass]` itself (`nonbuiltin_own_cpass`), or `Y`, imported but unused,
# installs a folder (`nonbuiltin_ext_folder`) or a pass (`nonbuiltin_ext_cpass`) by writing the extension state
# directly, with no entry, before it specializes the same call. Each time a fresh `M` differs from the kept
# one, by behaviour or by which specialization it calls.
nonbuiltin_files() {
  lakefile_app; mkdir_t
  printf 'namespace T\n@[noinline] def k (n : Nat) : Nat := n + 1\n' > T/B.lean
  printf '@[specialize] def myMap (f : Nat → Nat) : List Nat → List Nat\n  | [] => []\n' >> T/B.lean
  printf '  | x :: xs => f x :: myMap f xs\nend T\n' >> T/B.lean
  printf 'import T.B\nnamespace T\ndef y0 : Nat := 0\nend T\n' > T/Y.lean
  printf 'import T.M\ndef main : IO Unit := IO.println T.h\n' > Main.lean
}
nonbuiltin_own_folder_s0() {
  nonbuiltin_files
  cat > T/Z.lean <<'EOF'
import Lean
open Lean.Compiler.LCNF.Simp.ConstantFold
def myFolder : Folder := fun args => do
  let #[_] := args | return none
  return some (.lit (.nat 42))
EOF
  cat > T/M.lean <<'EOF'
import Lean
import T.B
import T.Z
import T.Y
open Lean.Compiler.LCNF.Simp.ConstantFold
run_meta registerFolder ``T.k ``myFolder
namespace T
def h : List Nat := myMap k [1, 2, 3]
end T
EOF
}
nonbuiltin_own_folder_s1() { perkey_provider_folder_s1; }
nonbuiltin_own_cpass_s0() {
  nonbuiltin_files
  cat > T/M.lean <<'EOF'
import Lean
import T.B
import T.Y
open Lean.Compiler.LCNF
@[cpass] def myInstaller : PassInstaller :=
  PassInstaller.installAtEnd .base (Pass.mkPerDeclaration `myNoop .base fun d => pure d)
namespace T
def h : List Nat := myMap k [1, 2, 3]
end T
EOF
}
nonbuiltin_own_cpass_s1() { perkey_provider_folder_s1; }
nonbuiltin_y() {
  cat > T/Y.lean <<EOF
import Lean
import T.B
open Lean Lean.Compiler.LCNF Lean.Compiler.LCNF.Simp.ConstantFold
def myFolder : Folder := fun args => do
  let #[_] := args | return none
  return some (.lit (.nat 42))
def myInstaller : PassInstaller :=
  PassInstaller.installAtEnd .base (Pass.mkPerDeclaration \`myNoop .base fun d => pure d)
$1
namespace T
def y0 : Nat := 0
$2
end T
EOF
}
nonbuiltin_ext_m() {
  nonbuiltin_files; nonbuiltin_y '' ''
  printf 'import T.B\nimport T.Y\nnamespace T\ndef h : List Nat := myMap k [1, 2, 3]\nend T\n' > T/M.lean
}
nonbuiltin_ext_folder_s0() { nonbuiltin_ext_m; }
nonbuiltin_ext_folder_s1() {
  nonbuiltin_y 'run_meta modifyEnv fun env => folderExt.modifyState env fun (es, m) => (es, m.insert ``T.k myFolder)' \
    'def y : List Nat := myMap k [0]'
}
nonbuiltin_ext_cpass_s0() { nonbuiltin_ext_m; }
nonbuiltin_ext_cpass_s1() {
  nonbuiltin_y $'run_meta do\n  let m ← PassInstaller.run (← getPassManager) myInstaller\n  modifyEnv fun env => passManagerExt.modifyState env fun (ns, _) => (ns, m)' \
    'def y : List Nat := myMap k [0]'
}

# Compiler code that reads imported environment state no used name records: `Z`'s folder folds `k 5` to 42 only
# if `T.flagOn` exists (`fold_env`), and `Z`'s pass fails the compile then (`cpass_env`). `F`, which `M` imports
# but uses nothing of, gains `T.flagOn` in state 1.
env_files() {
  lakefile_app; mkdir_t
  printf 'namespace T\n@[noinline] def k (n : Nat) : Nat := n + 1\nend T\n' > T/B.lean
  printf 'import Lean\nimport T.B\n%s\n' "$1" > T/Z.lean
  printf 'namespace T\ndef f0 : Nat := 0\nend T\n' > T/F.lean
  printf 'import T.Z\nimport T.F\nnamespace T\n@[noinline] def h (u : Unit) : Nat := k 5\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (T.h ())\n' > Main.lean
}
env_flag() { printf 'namespace T\ndef f0 : Nat := 0\ndef flagOn : Nat := 0\nend T\n' > T/F.lean; }
fold_env_s0() {
  env_files 'open Lean Lean.Compiler.LCNF.Simp.ConstantFold
def envFolder : Folder := fun args => do
  let #[_] := args | return none
  if (← getEnv).contains `T.flagOn then return some (.lit (.nat 42)) else return none
run_meta registerFolder ``T.k ``envFolder'
}
fold_env_s1() { env_flag; }
cpass_env_s0() {
  env_files 'open Lean Lean.Compiler.LCNF
@[cpass] def envInstaller : PassInstaller :=
  PassInstaller.installAtEnd .base (Pass.mkPerDeclaration `envPass .base fun d => do
    if (← getEnv).contains `T.flagOn then throwError "flagOn is set" else pure d)'
}
cpass_env_s1() { env_flag; }

# The same read by a wrapper an imported module installs around every compile (`compileDeclsRef`), with the
# built-in passes and folders: it fails the compile (`hk_fail`) or switches off closed-term extraction (`hk_opt`)
# once `F` defines `T.flagOn`. `hk_ctl` (control) changes `F` in a way the wrapper does not read.
hk_wrap() {
  env_files 'open Lean
initialize compileDeclsRef.modify fun f names opts => do
  if (← getEnv).contains `T.flagOn then '"$1"' else f names opts'
}
hk_fail_s0() { hk_wrap 'throwError "flagOn is set"'; }
hk_fail_s1() { env_flag; }
hk_opt_s0() { hk_wrap 'withOptions (fun o => o.setBool `compiler.extract_closed false) (f names opts)'; }
hk_opt_s1() { env_flag; }
hk_ctl_s0() { hk_wrap 'throwError "flagOn is set"'; }
hk_ctl_s1() { printf 'namespace T\ndef f0 : Nat := 0\ndef other : Nat := 0\nend T\n' > T/F.lean; }

# A specialization-cache entry written through the public `cacheSpec`, not by the specializer: `Y`, which `M`
# uses nothing of, maps the key of `M`'s own specialization of `myMap k` to `evil`, which adds 100
# (`cachespec_added`). With the entry there from state 0, `M` hits it, so the hit is recorded and an edit to `evil`
# rebuilds `M` (`cachespec_hit_edit`).
cs_files() {
  lakefile_app; mkdir_t
  printf 'namespace T\n@[noinline] def k (n : Nat) : Nat := n + 1\n' > T/B.lean
  printf '@[specialize] def myMap (f : Nat → Nat) : List Nat → List Nat\n  | [] => []\n' >> T/B.lean
  printf '  | x :: xs => f x :: myMap f xs\nend T\n' >> T/B.lean
  printf 'import T.B\nimport T.Y\nnamespace T\ndef h : List Nat := myMap k [1, 2, 3]\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println T.h\n' > Main.lean
}
cs_y() {
  printf 'import Lean\nimport T.B\nopen Lean\nnamespace T\ndef y0 : Nat := 0\n' > T/Y.lean
  printf '@[noinline] def evil (xs : List Nat) : List Nat := xs.map (· + %s)\nend T\n%s' "$1" "$2" >> T/Y.lean
}
cs_entry='run_meta Lean.Compiler.LCNF.Specialize.cacheSpec (mkApp (mkConst ``T.myMap) (mkConst ``T.k)) ``T.evil'
cachespec_added_s0() { cs_files; cs_y 100 ''; }
cachespec_added_s1() { cs_y 100 "$cs_entry"$'\n'; }
cachespec_hit_edit_s0() { cs_files; cs_y 100 "$cs_entry"$'\n'; }
cachespec_hit_edit_s1() { cs_y 200 "$cs_entry"$'\n'; }

# `A.f` keeps its LCNF body `g n + 1` but registers IR that adds 50. `Y`'s specialization of `run k` inlines
# `f`'s body; `M`, where a local attribute stops specializing `f`, calls `f`'s IR. Once `Y` adds the same key, a
# fresh `M` reuses `Y`'s specialization, which inlines `f`'s LCNF body, so a kept `M` must match that.
premise_ir_s0() {
  lakefile_app; mkdir_t
  cat > T/A.lean <<'EOF'
import Lean
namespace T
@[specialize, noinline] def f (g : Nat → Nat) (n : Nat) : Nat := g n + 1
end T
open Lean IR in
run_cmd Lean.Elab.Command.liftCoreM <| IR.addDecl <| (.fdecl `T.f
  #[{ x := ⟨1⟩, borrow := false, ty := .object }, { x := ⟨2⟩, borrow := false, ty := .object }] .object
  (.vdecl ⟨3⟩ .object (.ap ⟨1⟩ #[.var ⟨2⟩])
    (.vdecl ⟨4⟩ .object (.lit (.num 50))
      (.vdecl ⟨5⟩ .object (.fap ``Nat.add #[.var ⟨3⟩, .var ⟨4⟩]) (.ret (.var ⟨5⟩)))))
  { maxJp := 0, maxVar := 5 })
EOF
  printf 'import T.A\nnamespace T\n@[noinline] def k (n : Nat) : Nat := n + 1\n' > T/B.lean
  printf '@[specialize, noinline] def run (g : Nat → Nat) (n : Nat) : Nat := f g n\nend T\n' >> T/B.lean
  printf 'import T.B\nimport T.Y\nnamespace T\nset_option allowUnsafeReducibility true\n' > T/M.lean
  printf 'attribute [local instance_reducible] f\ndef h : Nat := run k 1\nend T\n' >> T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println T.h\n' > Main.lean
  printf 'import T.B\nnamespace T\ndef y0 : Nat := 0\nend T\n' > T/Y.lean
}
premise_ir_s1() { printf 'import T.B\nnamespace T\ndef y0 : Nat := 0\ndef y : Nat := run k 7\nend T\n' > T/Y.lean; }

# `premise_ir`'s `A` also compiles `T.f` once more in a discarded environment. `CheckEval` runs `T.h` in the
# interpreter, which reads IR; `ir_count_nd` proves `T.h = 52` by `native_decide` although `T.h`'s kernel
# value is 3, so a kept `M` must not turn the build's failure into a success.
ir_count_s0() {
  premise_ir_s0
  printf 'open Lean in\nrun_meta withoutModifyingEnv (Lean.compileDecls #[``T.f])\n' >> T/A.lean
  printf 'import T.M\n#eval T.h\n' > CheckEval.lean
}
ir_count_s1() { premise_ir_s1; }
ir_count_nd_s0() {
  ir_count_s0
  printf 'import T.M\ntheorem bad : T.h = 52 := by native_decide\n#print axioms bad\n' > CheckBad.lean
}
ir_count_nd_s1() { ir_count_s1; }

# LCNF written outside the compiler: `Y`, which `M` uses nothing of, specializes the key of `M`'s own
# specialization (`y := app k 7`) and then saves another declaration's LCNF under its specialization's name
# through the public `Decl.saveBase`/`Decl.saveMono`. A fresh `M` reuses `Y`'s entry and inlines that body.
lo_files() {
  lakefile_app; mkdir_t
  printf 'namespace T\n@[noinline] def k (n : Nat) : Nat := n + 1\n' > T/B.lean
  printf '@[specialize, noinline] def app (f : Nat → Nat) (n : Nat) : Nat := f n + 1\nend T\n' >> T/B.lean
  printf 'import T.B\nimport T.Y\nnamespace T\ndef h : Nat := app k 1\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println T.h\n' > Main.lean
}
lo_y() { printf 'import Lean\nimport T.B\nnamespace T\ndef y0 : Nat := 0\n%s\nend T\n%s\n' "$1" "$2" > T/Y.lean; }
lo_override='open Lean Compiler LCNF in
run_meta do
  let env ← getEnv
  let specName := `T.app._at_.T.y.spec_0
  let some _ := getDeclCore? env baseExt specName | throwError "no base declaration {specName}"
  let some b := getDeclCore? env baseExt ``T.evil | throwError "no base declaration for evil"
  Decl.saveBase { b with name := specName }
  if let some m := getDeclCore? env monoExt ``T.evil then
    Decl.saveMono { m with name := specName }'
lcnf_override_s0() { lo_files; lo_y '' ''; }
lcnf_override_s1() { lo_y $'def y : Nat := app k 7\ndef evil (n : Nat) : Nat := n + 100' "$lo_override"; }

# A type's module computes and persists its representation (trivial-structure info, constructor layout, IR type,
# mono types) with `Meta` at default transparency, so a `local` reducibility attribute in that module changes it
# with no exported attribute or kernel term changing. `abi_mix`: `S`'s field `p : Pred` is irrelevant while `Pred`
# unfolds to a type former, so `S` is a trivial structure around `n` (trivial-structure info, constructor layout);
# `M` reads `S` in the kept layout while `Main`, rebuilt because `mkS` changes, builds it in the new one.
# `abi_void`: the same for the impure trivial-structure info, with a field whose type unfolds to `Void`.
# `abi_enum` guards the IR type of `E`: it is computed through `toLCNFType`, which unfolds at `.all`
# transparency, so the local attribute leaves it, and `Y`'s code, unchanged. `abi_monotype`: `Y` overwrites the
# mono type of its own constructor through the public `monoTypeExt.insert`.
abi_files() {
  lakefile_app; mkdir_t
  printf 'def Pred : Type := Nat → Prop\ninstance : Inhabited Pred := ⟨fun _ => True⟩\n' > T/A.lean
  printf 'def V : Type := Void Unit\ninstance : Inhabited V := ⟨Void.mk ()⟩\n' >> T/A.lean
  printf 'import T.Y\n@[noinline] def f (s : S) : Nat := s.n + 1\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (f (mkS 5))\n' > Main.lean
}
abi_y() {
  printf 'import T.A\nsection\n%s\nstructure S where\n  p : %s\n  n : Nat\nend\n' "$1" "$2" > T/Y.lean
  printf '@[noinline] def mkS (n : Nat) : S := ⟨default, n⟩\n' >> T/Y.lean
}
abi_mix_s0() { abi_files; abi_y '' Pred; }
abi_mix_s1() { abi_y 'attribute [local irreducible] Pred' Pred; }
abi_void_s0() { abi_files; abi_y '' V; }
abi_void_s1() { abi_y 'attribute [local irreducible] V' V; }
abi_enum_y() {
  printf 'import T.A\nsection\n%s\ninductive E where\n  | a (p : Pred)\n  | b\nend\n' "$1" > T/Y.lean
  printf '@[noinline] def mkE : Nat → E\n  | 0 => .a default\n  | _ => .b\n' >> T/Y.lean
}
abi_enum_s0() {
  abi_files; abi_enum_y ''
  printf 'import T.Y\n@[noinline] def f (e : E) : Nat := match e with\n  | .a _ => 1\n  | .b => 2\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (f (mkE 0) + 10 * f (mkE 1))\n' > Main.lean
}
abi_enum_s1() { abi_enum_y 'attribute [local irreducible] Pred'; }
abi_monotype_s0() {
  lakefile_app; mkdir_t
  printf 'import Lean\nnamespace T\nstructure P where\n  a : Nat\n  b : Nat\nend T\n' > T/Y.lean
  printf 'import T.Y\nnamespace T\n@[noinline] def f (n : Nat) : Nat := (P.mk n 5).b + (P.mk n 5).a\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (T.f 2)\n' > Main.lean
}
abi_monotype_s1() {
  cat >> T/Y.lean <<'EOF'
open Lean Compiler LCNF in
run_meta do
  let some _ := monoTypeExt.find? (← getEnv) ``T.P.mk | throwError "no mono type for P.mk"
  modifyEnv fun env => monoTypeExt.insert env ``T.P.mk
    (mkArrow (mkConst ``Nat) (mkArrow (mkConst ``Nat) (mkConst ``UInt8))) (allowOverwrite := true)
EOF
}

# Writes, through public functions and outside the compiler, to the compiled entries of `Y`'s own
# specialization of a key `M` also specializes: its dead-branch summary (`wh_summary`), an `@[extern]`
# (`wh_extern`) or `implemented_by` (`wh_implby`) attribute on it, its impure signature (`wh_sig`). A fresh `M`
# reuses `Y`'s specialization; the kept one must not. `wh_ctrl` writes nothing.
wh_b() {
  cat > T/B.lean <<'EOF'
namespace T
@[noinline] def k (n : Nat) : Nat := n + 1
@[noinline] def k2 (n : Nat) : Bool := n == 99
@[specialize] def iter (f : Nat → Nat) : Nat → Nat
  | 0 => 0
  | n+1 => f (iter f n)
@[specialize] def anyP (f : Nat → Bool) : List Nat → Bool
  | [] => false
  | x :: xs => f x || anyP f xs
end T
EOF
}
wh_y() { printf 'import Lean\nimport T.B\nnamespace T\ndef y0 : Nat := 0\n%s\nend T\n%s\n' "$1" "$2" > T/Y.lean; }
wh_files() {
  lakefile_app; mkdir_t; wh_b; wh_y '' ''
  cat > T/M.lean <<'EOF'
import T.B
import T.Y
namespace T
def h : Nat := iter k 3
def hs : String := match anyP k2 [1,2,3] with | true => "T" | false => "F"
end T
EOF
  printf 'import T.M\ndef main : IO Unit := do\n  IO.println T.h\n  IO.println T.hs\n' > Main.lean
}
wh_decls=$'def y : Nat := iter k 7\ndef yb : Bool := anyP k2 [7]\ndef evilI (n : Nat) : Nat := n + 100'
wh_ctrl_s0() { wh_files; }
wh_ctrl_s1() { wh_y "$wh_decls" ''; }
wh_summary_s0() { wh_files; }
wh_summary_s1() {
  wh_y "$wh_decls" 'open Lean Compiler LCNF UnreachableBranches in
run_meta do
  let spec := `T.anyP._at_.T.yb.spec_0
  let some _ := getDeclCore? (← getEnv) monoExt spec | throwError "no mono declaration {spec}"
  modifyEnv fun env => addFunctionSummary env spec (.ctor ``Bool.true #[])'
}
wh_extern_s0() { wh_files; }
wh_extern_s1() {
  wh_y "$wh_decls" 'open Lean Compiler LCNF in
run_meta do
  let spec := `T.iter._at_.T.y.spec_0
  let some _ := getDeclCore? (← getEnv) monoExt spec | throwError "no mono declaration {spec}"
  match externAttr.setParam (← getEnv) spec { entries := [.standard `all "lean_nat_succ"] } with
  | .ok env => setEnv env
  | .error e => throwError e'
}
wh_implby_s0() { wh_files; }
wh_implby_s1() {
  wh_y "$wh_decls" 'open Lean Compiler LCNF in
run_meta do
  let spec := `T.iter._at_.T.y.spec_0
  let some _ := getDeclCore? (← getEnv) monoExt spec | throwError "no mono declaration {spec}"
  match setImplementedBy (← getEnv) spec ``T.evilI with
  | .ok env => setEnv env
  | .error e => throwError e'
}
wh_sig_s0() { wh_files; }
wh_sig_s1() {
  wh_y "$wh_decls" 'open Lean Compiler LCNF in
run_meta do
  let env ← getEnv
  let spec := `T.iter._at_.T.y.spec_0
  let some sig := getSigCore? env impureSigExt spec | throwError "no impure signature {spec}"
  modifyEnv fun env => impureSigExt.addEntry env { sig with type := ImpureType.uint8 }'
}

# Outside writes to the entries of `Y`'s specialization, which a fresh `M` reads when it reuses it: an
# `@[extern]` attribute set on the specialization's name before it exists (`pre_extern`, `pre_extern_app` with
# the key `lcnf_override` uses). A kept `M` must match a fresh `M`, which reuses `Y`'s specialization and so reads
# the written value.
pre_extern_y() { cat > T/Y.lean; }
pre_extern_s0() { wh_files; }
pre_extern_s1() {
  pre_extern_y <<'EOF'
import Lean
import T.B
namespace T
def y0 : Nat := 0
end T
open Lean Compiler LCNF in
run_meta do
  let spec := `T.iter._at_.T.y.spec_0
  match externAttr.setParam (← getEnv) spec { entries := [.standard `all "lean_nat_succ"] } with
  | .ok env => setEnv env
  | .error e => throwError e
namespace T
def y : Nat := iter k 7
def yb : Bool := anyP k2 [7]
end T
EOF
}
pre_extern_app_s0() { lo_files; lo_y '' ''; }
pre_extern_app_s1() {
  pre_extern_y <<'EOF'
import Lean
import T.B
namespace T
def y0 : Nat := 0
end T
open Lean Compiler LCNF in
run_meta do
  let spec := `T.app._at_.T.y.spec_0
  match externAttr.setParam (← getEnv) spec { entries := [.standard `all "lean_nat_succ"] } with
  | .ok env => setEnv env
  | .error e => throwError e
namespace T
def y : Nat := app k 7
end T
EOF
}

# Binder names of an inlined body become C variable names in the importer's C file.
binder_inline_s0() {
  lakefile_app; mkdir_t
  printf '@[inline] def e (n : Nat) : Nat := let fooname := n * 7; fooname + fooname\n' > T/E.lean
  printf 'import T.E\n@[noinline] def d (m : Nat) : Nat := e m\n' > T/D.lean
  printf 'import T.D\ndef main : IO Unit := IO.println (d 5)\n' > Main.lean
}
binder_inline_s1() { printf '@[inline] def e (n : Nat) : Nat := let barname := n * 7; barname + barname\n' > T/E.lean; }

## Code evaluated while elaborating.

# `A` keeps the kernel definition `Chan.f := 0` and registers its compiled body directly, returning 10 and
# then 20. `B` evaluates `Chan.f` at elaboration time and bakes the result into `b`.
ir_eval_a() {
  cat > T/A.lean <<EOF
import Lean
namespace Chan
def f : Nat := 0
end Chan
open Lean Elab Command Term IR
run_cmd liftCoreM <| IR.addDecl <| (.fdecl \`Chan.f #[] .tagged
  (.vdecl { idx := 1 } .tagged (.lit (.num $1)) (.ret (.var { idx := 1 }))) { maxJp := 0, maxVar := 1 })
EOF
}
ir_eval_s0() {
  lakefile_app; mkdir_t
  ir_eval_a 10
  cat > T/B.lean <<'EOF'
import T.A
import Lean
open Lean Meta
run_meta do
  let n ← evalConst Nat `Chan.f (checkMeta := false)
  let d := .defnDecl {
    name := `b
    levelParams := []
    type := mkConst ``Nat
    value := mkNatLit n
    hints := .abbrev
    safety := .safe
  }
  addDecl d
  compileDecl d
EOF
  printf 'import T.B\n@[noinline] def m : Nat := b\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println m\n' > Main.lean
}
ir_eval_s1() { ir_eval_a 20; }

# `A`'s macro expands to 10, then 20; `B`'s kernel term is what the expansion produced.
macro_eval_a() { printf 'macro "mkval" : term => `(%s)\n' "$1" > T/A.lean; }
macro_eval_s0() {
  lakefile_app; mkdir_t
  macro_eval_a 10
  printf 'import T.A\n@[noinline] def b : Nat := mkval\n' > T/B.lean
  printf 'import T.B\n@[noinline] def m : Nat := b\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println m\n' > Main.lean
}
macro_eval_s1() { macro_eval_a 20; }

# `A` initializes `counter` to 10, then 20; `B` reads it at elaboration time and bakes the value into `b`.
init_eval_a() { printf 'initialize counter : IO.Ref Nat ← IO.mkRef %s\n' "$1" > T/A.lean; }
init_eval_s0() {
  lakefile_app; mkdir_t
  init_eval_a 10
  cat > T/B.lean <<'EOF'
import T.A
import Lean
open Lean Meta
run_meta do
  let n ← (counter.get : IO Nat)
  let d := .defnDecl {
    name := `b
    levelParams := []
    type := mkConst ``Nat
    value := mkNatLit n
    hints := .abbrev
    safety := .safe
  }
  addDecl d
  compileDecl d
EOF
  printf 'import T.B\n@[noinline] def m : Nat := b\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println m\n' > Main.lean
}
init_eval_s1() { init_eval_a 20; }

# `IC.ic0` creates a specialization of `ism`; `ic` calls `ism` the same way and `IM` inlines `ic`. Only `ic0`
# changes. A small definition's saved body already calls `ic0`'s specialization, so `IM`'s compiled code does
# too; an `@[inline]` definition or instance is specialized by `IM` itself.
inl_files() {
  printf 'name = "test"\ndefaultTargets = ["T"]\n[[lean_lib]]\nname = "T"\n' > lakefile.toml
  mkdir_t
  printf 'import T.IM\n' > T.lean
  cat > T/IB.lean <<'EOF'
@[specialize] def ism (f : Nat → Nat) : List Nat → List Nat
  | [] => []
  | x :: xs => f x :: ism f xs
class Foo (α : Type) where
  foo : List α → List α
EOF
  printf 'import T.IM\n#eval im [1, 2, 3]\n' > Check.lean
}
inl_ic() {
  printf 'import T.IB\ndef ic0 (xs : List Nat) : List Nat := ism %s xs\n%s\n' "$1" "$2" > T/IC.lean
}
inl_inline_s0() {
  inl_files; inl_ic Nat.succ '@[inline] def ic (xs : List Nat) : List Nat := ism Nat.succ xs'
  printf 'import T.IC\ndef im (xs : List Nat) : List Nat := ic xs\n' > T/IM.lean
}
inl_inline_s1() { inl_ic '(· * 10)' '@[inline] def ic (xs : List Nat) : List Nat := ism Nat.succ xs'; }
inl_small_s0() {
  inl_files; inl_ic Nat.succ 'def ic (xs : List Nat) : List Nat := ism Nat.succ xs'
  printf 'import T.IC\ndef im (xs : List Nat) : List Nat := ic xs\n' > T/IM.lean
}
inl_small_s1() { inl_ic '(· * 10)' 'def ic (xs : List Nat) : List Nat := ism Nat.succ xs'; }
inl_instance_s0() {
  inl_files
  inl_ic Nat.succ $'@[inline] instance instFooNat : Foo Nat where\n  foo xs := ism Nat.succ xs'
  printf 'import T.IC\ndef im (xs : List Nat) : List Nat := Foo.foo xs\n' > T/IM.lean
}
inl_instance_s1() { inl_ic '(· * 10)' $'@[inline] instance instFooNat : Foo Nat where\n  foo xs := ism Nat.succ xs'; }

## Guards: further changes to compiled code that the cutoff must catch.

# Further shapes of a reused specialization reaching the executable's root module.
spec_shape_s0() {
  lakefile_app; mkdir_t; my_map
  printf 'import T.Base\ndef h (xs : List Nat) := myMap Nat.succ xs\n' > T/A.lean
  printf 'import T.A\n%s\n' "$1" > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (k [1, 2, 3])\n' > Main.lean
}
spec_nested_s0() {
  spec_shape_s0 $'@[noinline] def wrap (xs : List Nat) := myMap Nat.succ xs\ndef k (xs : List Nat) := (myMap (fun x => x + 2) xs, wrap xs)'
}
spec_derived_s0() {
  spec_shape_s0 $'@[specialize] def outer (f : Nat → Nat) (xs : List Nat) := myMap Nat.succ (myMap f xs)\ndef k (xs : List Nat) := outer (fun x => x + 2) xs'
}
spec_local_s0() {
  spec_shape_s0 $'@[noinline] def localOne (xs : List Nat) := myMap (fun x => x + 2) xs\n@[noinline] def localTwo (xs : List Nat) := myMap (fun x => x + 2) xs\ndef k (xs : List Nat) := (localOne xs, localTwo xs)'
}
spec_nested_s1() { spec_link_s1; }
spec_derived_s1() { spec_link_s1; }
spec_local_s1() { spec_link_s1; }

# `A` specializes core `List.map` twice; swapping the two renumbers its specializations, one of which `B.k`
# reuses and `M.g` inlines.
spec_renumber_a() { printf 'def h (xs : List Nat) : List Nat × List Nat :=\n  (xs.map (%s), xs.map (%s))\n' "$1" "$2" > T/A.lean; }
spec_renumber_s0() {
  lakefile_app; mkdir_t
  spec_renumber_a '· * 10' '· + 1'
  printf 'import T.A\ndef k (xs : List Nat) : List Nat := xs.map (· * 10)\n' > T/B.lean
  printf 'import T.B\n@[noinline] def g (xs : List Nat) : List Nat := k xs\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (g [1, 2, 3])\n' > Main.lean
}
spec_renumber_s1() { spec_renumber_a '· + 1' '· * 10'; }

# One change in `A` to a function `B.b` calls; `M` and the executable see `B` only.
chan_s0() {
  lakefile_app; mkdir_t
  printf 'namespace Chan\n%s\nend Chan\n' "$1" > T/A.lean
  printf 'import T.A\nopen Chan\n%s\n' "${2:-@[noinline] def b : Nat := f 1}" > T/B.lean
  printf 'import T.B\n@[noinline] def m : Nat := b\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println m\n' > Main.lean
}
chan_a() { printf 'namespace Chan\n%s\nend Chan\n' "$1" > T/A.lean; }
impl_a() {
  printf 'unsafe def impl1 (n : Nat) : Nat := n + 10\nunsafe def impl2 (n : Nat) : Nat := n + 20\n@[implemented_by %s] opaque f : Nat → Nat' "$1"
}
implemented_by_s0() { chan_s0 "$(impl_a impl1)"; }
implemented_by_s1() { chan_a "$(impl_a impl2)"; }
csimp_a() {
  printf 'def f (n : Nat) : Nat := n\n@[noinline] def g1 (n : Nat) : Nat := n + 10\n@[noinline] def g2 (n : Nat) : Nat := n + 20\naxiom f_eq : f = %s\nattribute [csimp] f_eq' "$1"
}
csimp_s0() { chan_s0 "$(csimp_a g1)"; }
csimp_s1() { chan_a "$(csimp_a g2)"; }
extern_s0() { chan_s0 '@[extern "lean_nat_add"] opaque f : Nat → Nat → Nat' '@[noinline] def b : Nat := f 2 3'; }
extern_s1() { chan_a '@[extern "lean_nat_mul"] opaque f : Nat → Nat → Nat'; }
export_s0() { chan_s0 '@[export chan_export_one] def f (n : Nat) : Nat := n + 10'; }
export_s1() { chan_a '@[export chan_export_two] def f (n : Nat) : Nat := n + 10'; }
noncomputable_s0() { chan_s0 'def f (n : Nat) : Nat := n + 10'; }
noncomputable_s1() { chan_a 'noncomputable def f (n : Nat) : Nat := n + 10'; }
partial_body_s0() { chan_s0 'partial def f (n : Nat) : Nat := if n = 0 then 10 else f (n - 1)'; }
partial_body_s1() { chan_a 'partial def f (n : Nat) : Nat := if n = 0 then 20 else f (n - 1)'; }
unsafe_body_s0() {
  chan_s0 'unsafe def f (n : Nat) : Nat := n + 10' '@[noinline] unsafe def b : Nat := f 1'
  printf 'import T.B\nunsafe def m : Nat := b\n' > T/M.lean
  printf 'import T.M\nunsafe def main : IO Unit := IO.println m\n' > Main.lean
}
unsafe_body_s1() { chan_a 'unsafe def f (n : Nat) : Nat := n + 20'; }
boxed_version_s0() {
  chan_s0 '@[noinline] def f (n : UInt64) : UInt64 := n + 10' \
    $'@[noinline] def apply (g : UInt64 → UInt64) : UInt64 := g 1\n@[noinline] def b : Nat := (apply f).toNat'
}
boxed_version_s1() { chan_a '@[noinline] def f (n : UInt64) : UInt64 := n + 20'; }
struct_a() { printf 'structure S where\n  %s : Nat\n  %s : Nat\ndef make : S := ⟨10, 20⟩' "$1" "$2"; }
structure_eta_s0() {
  chan_s0 "$(struct_a x y)" \
    $'@[noinline] def b : Nat :=\n  let s := make\n  let t : S := { x := s.x, y := s.y }\n  t.x * 100 + t.y'
}
structure_eta_s1() { chan_a "$(struct_a y x)"; }

inst_red_a() {
  printf 'class C where get : Nat\ninstance inst : C := ⟨10⟩\n%sdef f [C] (n : Nat) : Nat := C.get + n' "$1"
}
instance_reducible_s0() {
  chan_s0 "$(inst_red_a '@[instance_reducible] ')" $'@[noinline] def b : Nat :=\n  let g : Nat → Nat := f\n  g 1'
}
instance_reducible_s1() { chan_a "$(inst_red_a '')"; }
reducible_s0() { chan_s0 '@[reducible] def f (n : Nat) : Nat := n + 10'; }
reducible_s1() { chan_a 'def f (n : Nat) : Nat := n + 10'; }
macro_inline_instance_s0() {
  chan_s0 $'class C where get : Nat\n@[macro_inline] def inst : C := ⟨10⟩\nattribute [instance] inst' \
    '@[noinline] def b : Nat := C.get'
}
macro_inline_instance_s1() { chan_a $'class C where get : Nat\ndef inst : C := ⟨10⟩\nattribute [instance] inst'; }
inline_instance_s0() {
  chan_s0 $'class C where get : Nat\n@[inline] instance inst : C := ⟨10⟩' '@[noinline] def b : Nat := C.get'
}
inline_instance_s1() { chan_a $'class C where get : Nat\ninstance inst : C := ⟨10⟩'; }
specialize_args_s0() {
  chan_s0 '@[noinline, specialize 2] def f (x n : Nat) : Nat := x * 100 + n' '@[noinline] def b : Nat := f 2 3'
}
specialize_args_s1() { chan_a '@[noinline, specialize 1] def f (x n : Nat) : Nat := x * 100 + n'; }
closed_extraction_s0() { chan_s0 '@[noinline] def f (n : Nat) : Nat := n + 10'; }
closed_extraction_s1() { chan_a '@[noinline, never_extract] def f (n : Nat) : Nat := n + 10'; }
# `A` replaces `f`'s compiled code with an `@[extern]` IR declaration of its own (`lean_nat_add`, then
# `lean_nat_mul`); its kernel definition stays.
decl_map_a() {
  cat > T/A.lean <<EOF
import Lean
namespace Chan
@[noinline] def f (x y : Nat) : Nat := x + y
end Chan
open Lean Elab Command IR
run_cmd liftCoreM <| IR.addDecl <| (.extern \`\`Chan.f #[
  { x := { idx := 1 }, borrow := false, ty := .tobject },
  { x := { idx := 2 }, borrow := false, ty := .tobject }
] .tobject { entries := [.standard \`all "$1"] })
EOF
}
decl_map_s0() { chan_s0 '' '@[noinline] def b : Nat := f 2 3'; decl_map_a lean_nat_add; }
decl_map_s1() { decl_map_a lean_nat_mul; }

# An inductive whose constructor field stops being erased changes its runtime representation, and with it
# the calling convention of `A.f`, whose source does not change.
enum_repr_c() {
  printf 'inductive SomeProp%s where\n  | intro\ninductive E where\n  | a (h : SomeProp)\n  | b\n' "$1" > T/C.lean
}
enum_repr_s0() {
  lakefile_app; mkdir_t
  enum_repr_c ' : Prop'
  printf 'import T.C\n@[noinline] def A.f (_e : E) (y : Nat) : Nat := y\n' > T/A.lean
  printf 'import T.A\nimport T.C\ndef main : IO Unit := IO.println s!"{A.f E.b 42}"\n' > Main.lean
}
enum_repr_s1() { enum_repr_c ''; }

# `@[noinline]` added to `e` in its own module: `D` must stop inlining it.
noinline_attr_s0() { e_d_s0 'def e (n : Nat) : Nat := n + 1' 'e 5'; }
noinline_attr_s1() { printf '@[noinline]\ndef e (n : Nat) : Nat := n + 1\n' > T/E.lean; }

# Lambda-lifted and extracted closed terms are module-local: `A` and `B` each lift an identical closure and
# extract an identical string literal; only `A`'s change.
aux_local_a() {
  printf '@[noinline] def useFn (f : Nat → Nat) (x : Nat) : Nat := f (f x)\n' > T/A.lean
  printf 'def A.f (x : Nat) : Nat := useFn (fun y => y * %s + 1) x\n' "$1" >> T/A.lean
  printf 'def A.s (_x : Nat) : String := "%s"\n' "$2" >> T/A.lean
}
aux_local_s0() {
  lakefile_app; mkdir_t
  aux_local_a 3 'a reasonably long constant string literal used to trigger closed term extraction'
  printf 'import T.A\ndef B.f (x : Nat) : Nat := useFn (fun y => y * 3 + 1) x\n' > T/B.lean
  printf 'def B.s (_x : Nat) : String := "a reasonably long constant string literal used to trigger closed term extraction"\n' \
    >> T/B.lean
  printf 'import T.B\ndef main : IO Unit := IO.println s!"{A.f 2} {B.f 2} {A.s 0} {B.s 0}"\n' > Main.lean
}
aux_local_s1() { aux_local_a 5 'another reasonably long constant string literal for closed term extraction'; }

# A structure gaining its first field: `A.f` takes one and does not mention its fields.
struct_repr_c() { printf 'structure Pair where\n%s\ndef mkPair : Pair := %s\n' "$1" "$2" > T/C.lean; }
struct_repr_s0() {
  lakefile_app; mkdir_t
  struct_repr_c '' '{}'
  printf 'import T.C\n@[noinline] def A.f (_p : Pair) (y : Nat) : Nat := y\n' > T/A.lean
  printf 'import T.A\ndef main : IO Unit := IO.println s!"{A.f mkPair 42}"\n' > Main.lean
}
struct_repr_s1() { struct_repr_c '  x : Nat' '⟨1⟩'; }

## Further inputs of compiled code and of elaboration.

# A class's `outParam` moves from its second parameter to its first in its own module. `M` has a function over an
# instance of the class, which it specializes at its use; its source does not change.
outparam_pos_a() {
  printf 'class Cl (%s) (%s) where\n  f : Nat → Nat\ninstance : Cl Nat Nat := ⟨id⟩\n' "$1" "$2" > T/A.lean
}
outparam_pos_s0() {
  lakefile_app; mkdir_t
  outparam_pos_a 'α : Type' 'β : outParam Type'
  printf 'import T.A\n@[noinline] def g [inst : Cl Nat Nat] (n : Nat) : Nat := @Cl.f Nat Nat inst n\ndef h : Nat := g 3\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println h\n' > Main.lean
}
outparam_pos_s1() { outparam_pos_a 'α : outParam Type' 'β : Type'; }

# `Z` registers a constant folder for `A.k` that `M`'s `h := k 3` folds with, and then stops registering it.
folder_removal_s0() { folder_cross_s0; folder_z $'run_meta registerFolder ``k ``myFolder\n'; }
folder_removal_s1() { folder_z ''; }

# Code the interpreter runs while `B` elaborates, defined in `A` and reached from `B` only through the
# extension that registers it. State 1 changes the behaviour of `A`'s code, not what `B` names, so `B` has to
# be elaborated again. `interp_main` adds the executable that prints `b`, or one that prints nothing.
interp_main() {
  lakefile_app; mkdir_t
  printf 'import T.B\ndef main : IO Unit := %s\n' "${1:-pure ()}" > Main.lean
}

# A simproc, tried first on `foo _` by `B`'s `simp`, logs a number and rewrites `foo n` to `n`.
interp_simproc_a() {
  printf 'import Lean\nopen Lean Meta Simp\ndef foo (n : Nat) : Nat := n\nsimproc ↓ reduceFoo (foo _) := fun e => do\n  logInfo "simproc %s"\n  return .done { expr := e.appArg! }\n' "$1" > T/A.lean
}
interp_simproc_s0() {
  interp_main; interp_simproc_a 10
  printf 'import T.A\ntheorem t : foo 3 = 3 := by simp only [reduceFoo]\n' > T/B.lean
}
interp_simproc_s1() { interp_simproc_a 20; }

# A parser: `A` declares `##` left-associative and then right-associative, which parses `B`'s
# `100 ## 20 ## 3` into another term.
interp_parser_a() { printf 'infix%s:65 " ## " => Nat.sub\n' "$1" > T/A.lean; }
interp_parser_s0() {
  interp_main 'IO.println b'; interp_parser_a l
  printf 'import T.A\n@[noinline] def b : Nat := 100 ## 20 ## 3\n' > T/B.lean
}
interp_parser_s1() { interp_parser_a r; }

# A tactic that closes a goal with a number.
interp_tactic_a() {
  printf 'import Lean\nopen Lean Elab Tactic\nelab "mynum" : tactic => do\n  let g ← getMainGoal\n  g.assign (mkNatLit %s)\n  replaceMainGoal []\n' "$1" > T/A.lean
}
interp_tactic_s0() {
  interp_main 'IO.println b'; interp_tactic_a 10
  printf 'import T.A\n@[noinline] def b : Nat := by mynum\n' > T/B.lean
}
interp_tactic_s1() { interp_tactic_a 20; }

# A term elaborator that returns a number.
interp_term_elab_a() { printf 'import Lean\nopen Lean Elab Term\nelab "mynum" : term => return mkNatLit %s\n' "$1" > T/A.lean; }
interp_term_elab_s0() {
  interp_main 'IO.println b'; interp_term_elab_a 10
  printf 'import T.A\n@[noinline] def b : Nat := mynum\n' > T/B.lean
}
interp_term_elab_s1() { interp_term_elab_a 20; }

# A delaborator for `foo` prints it as another name. A delaborator affects neither a kernel term nor compiled
# code, so the only result of `B` to follow it is the message `#check` logs.
interp_delab_a() {
  printf 'import Lean\nopen Lean PrettyPrinter Delaborator SubExpr\ndef foo (n : Nat) : Nat := n\n@[delab app.foo] def delabFoo : Delab := do\n  guard <| (← getExpr).getAppNumArgs == 1\n  let x ← withAppArg delab\n  `(foo%s $x)\n' "$1" > T/A.lean
}
interp_delab_s0() {
  interp_main; interp_delab_a 10
  printf 'import T.A\n#check foo 3\n' > T/B.lean
}
interp_delab_s1() { interp_delab_a 20; }

# `B` runs `#eval` on a function of `A`, which changes what it computes; `B`'s message is the result.
interp_eval_cmd_a() { printf 'def val (n : Nat) : Nat := n + %s\n' "$1" > T/A.lean; }
interp_eval_cmd_s0() {
  interp_main; interp_eval_cmd_a 10
  printf 'import T.A\n#eval val 1\n' > T/B.lean
}
interp_eval_cmd_s1() { interp_eval_cmd_a 20; }

# Binder names of an inlined or specialized body reach the importer's C file: a `fun` binder lifted to its own
# function (`binder_fun`), the parameter of a join point that a local function used twice in tail position
# becomes (`binder_jp`), and a parameter of a specialized function (`binder_param`).
binder_d() {
  lakefile_app; mkdir_t
  printf '%s\n' "$1" > T/E.lean
  printf 'import T.E\n%s\n' "$2" > T/D.lean
  printf 'import T.D\ndef main : IO Unit := IO.println (d 5)\n' > Main.lean
}
binder_fun_e() {
  printf '@[noinline] def ap (f : Nat → Nat) (n : Nat) : Nat := f n\n@[inline] def e (n : Nat) : Nat := ap (fun %s => %s * 7 + n) n' "$1" "$1" > T/E.lean
}
binder_fun_s0() { binder_d '' '@[noinline] def d (m : Nat) : Nat := e m'; binder_fun_e fooname; }
binder_fun_s1() { binder_fun_e barname; }
binder_jp_e() {
  printf '@[inline] def e (n : Nat) : Nat :=\n  let jpfun := fun (%s : Nat) => %s * 7 + n * %s\n  if n > 3 then jpfun n else jpfun (n + 1)\n' "$1" "$1" "$1" > T/E.lean
}
binder_jp_s0() { binder_d '' '@[noinline] def d (m : Nat) : Nat := e m'; binder_jp_e fooname; }
binder_jp_s1() { binder_jp_e barname; }
binder_param_e() {
  printf '@[specialize] def e (f : Nat → Nat) (%s : Nat) : Nat := f %s + %s\n' "$1" "$1" "$1" > T/E.lean
}
binder_param_s0() { binder_d '' '@[noinline] def d (m : Nat) : Nat := e (· + 1) m'; binder_param_e fooname; }
binder_param_s1() { binder_param_e barname; }

# Names of compiler-only declarations are folded into the kernel constant that owns them. A specialization
# `A` creates inside a declaration whose name has macro scopes (`owner_macro`, which `B` reuses and `M` inlines
# from `B`) and a `_boxed` version of such a declaration, which `M` reaches through an inlined definition
# (`owner_boxed`). `owner_move`: the nested specialization `twice._at_.applyTwice._at_.outerF.spec_0.spec_0`
# belongs to `outerF` until state 1 declares a constant `outerF.spec_0`, which then owns it.
owner_macro_a() {
  printf 'import Lean\nimport T.Base\nopen Lean Elab Command\nrun_cmd do\n  let n := addMacroScope `T.A `h 1\n  elabCommand (← `(def $(mkIdent n) (xs : List Nat) := myMap %s xs))\n' "$1" > T/A.lean
}
owner_macro_s0() {
  lakefile_app; mkdir_t; my_map
  owner_macro_a Nat.succ
  printf 'import T.A\ndef k (xs : List Nat) := myMap Nat.succ xs\n' > T/B.lean
  printf 'import T.B\ndef g (xs : List Nat) := k xs\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (g [1, 2, 3])\n' > Main.lean
}
owner_macro_s1() { owner_macro_a '(· * 10)'; }
owner_boxed_a() {
  printf 'import Lean\nopen Lean Elab Command\nrun_cmd do\n  let n := addMacroScope `T.A `h 1\n  elabCommand (← `(def $(mkIdent n) (x : UInt64) : UInt64 := x + %s))\n  elabCommand (← `(@[inline] def $(mkIdent `hmap) (xs : List UInt64) : List UInt64 := xs.map $(mkIdent n)))\n' "$1" > T/A.lean
}
owner_boxed_s0() {
  lakefile_app; mkdir_t
  owner_boxed_a 20
  printf 'import T.A\ndef g (xs : List UInt64) : List UInt64 := hmap xs\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (g [1, 2, 3])\n' > Main.lean
}
owner_boxed_s1() { owner_boxed_a 30; }
owner_move_a() {
  printf '@[specialize] def twice (f : Nat → Nat) (n : Nat) : Nat := f (f n)\n@[specialize, noinline] def applyTwice (g : Nat → Nat) (n : Nat) : Nat := twice g n\ndef outerF (n : Nat) : Nat := applyTwice (fun x => x + 1) n\n%s' "$1" > T/A.lean
}
owner_move_s0() {
  lakefile_app; mkdir_t
  owner_move_a ''
  printf 'import T.A\ndef m (n : Nat) : Nat := outerF n\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (m 3)\n' > Main.lean
}
owner_move_s1() { owner_move_a $'namespace outerF\ndef spec_0 : Nat := 99\nend outerF\n'; }

# The binder info of a parameter, or of a binder inside a parameter's type, decides whether the compiler treats
# it as an instance, and so whether `M`'s call is specialized. `Foo` is not a class, so the binder is the only
# difference.
binder_info_m() {
  lakefile_app; mkdir_t
  printf 'set_option checkBinderAnnotations false\nstructure Foo where\n  x : Nat\n%s\n' "$1" > T/A.lean
  printf 'import T.A\n%s\n' "$2" > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println h\n' > Main.lean
}
binder_info_param_s0() {
  binder_info_m '@[noinline] def g (inst : Foo) (n : Nat) : Nat := inst.x + n' 'def h : Nat := @g ⟨5⟩ 3'
}
binder_info_param_s1() { printf 'set_option checkBinderAnnotations false\nstructure Foo where\n  x : Nat\n@[noinline] def g [inst : Foo] (n : Nat) : Nat := inst.x + n\n' > T/A.lean; }
binder_info_type_s0() {
  binder_info_m '@[noinline] def g (f : Foo → Nat) (n : Nat) : Nat := f ⟨1⟩ + n' 'def h : Nat := @g (no_implicit_lambda% (fun _ => 5)) 3'
}
binder_info_type_s1() { printf 'set_option checkBinderAnnotations false\nstructure Foo where\n  x : Nat\n@[noinline] def g (f : [Foo] → Nat) (n : Nat) : Nat := @f ⟨1⟩ + n\n' > T/A.lean; }

## Compiler-generated names, and state that a module's code must not reach.

# `A.foo`'s `_redArg` is a compiler-only name that `A` owns. `B` gains a kernel constant of the same name, and
# `C`, which imports `B` before `A`, resolves the name to `B`'s constant in a fresh build (`collide_first`) but
# to `A`'s when `A` comes first (`collide_after`). A module that introduces such a constant changes what its
# importers compile, so `C` must be compiled again.
collide_files() {
  printf 'name = "test"\ndefaultTargets = ["T"]\n[[lean_lib]]\nname = "T"\n' > lakefile.toml
  mkdir_t
  printf 'def foo (n : Nat) (_h : Nat) : Nat := n + 1\n' > T/A.lean
  printf 'def unrelated : Nat := 0\n' > T/B.lean
  printf 'import T.%s\nimport T.%s\ndef useFoo (n : Nat) : Nat × Nat := (foo n 0, n)\n' "$1" "$2" > T/C.lean
  printf 'import T.C\n' > T.lean
}
collide_b() { printf 'def unrelated : Nat := 0\n@[noinline] def foo._redArg (_n : Nat) : UInt32 := 7\n' > T/B.lean; }
collide_first_s0() { collide_files B A; }
collide_first_s1() { collide_b; }
collide_after_s0() { collide_files A B; }
collide_after_s1() { collide_b; }

# The reverse: `K` defines the kernel constant `foo._redArg`, which `C` calls, and `A` gains `foo`, whose compile
# creates the compiler-only name `foo._redArg`. A resolver that ranks a module's compiled names first for such a name
# gives `C` `A`'s declaration whatever the import order; one that ranks by import order gives it `K`'s when `K` comes
# first (`collide_rev`) and `A`'s when `A` does (`collide_rev_first`). `C` must be compiled again whenever a fresh
# build resolves the name to another declaration.
collide_rev_files() {
  printf 'name = "test"\ndefaultTargets = ["T"]\n[[lean_lib]]\nname = "T"\n' > lakefile.toml
  mkdir_t
  printf 'def unrelated : Nat := 0\n@[noinline] def foo._redArg (_n : Nat) : UInt32 := 7\n' > T/K.lean
  printf 'def other : Nat := 0\n' > T/A.lean
  printf 'import T.%s\nimport T.%s\n@[noinline] def useIt (n : Nat) : UInt32 := foo._redArg n\n' "$1" "$2" > T/C.lean
  printf 'import T.C\n' > T.lean
}
collide_rev_a() { printf 'def other : Nat := 0\ndef foo (n : Nat) (_h : Nat) : Nat := n + 1\n' > T/A.lean; }
collide_rev_s0() { collide_rev_files K A; }
collide_rev_s1() { collide_rev_a; }
collide_rev_first_s0() { collide_rev_files A K; }
collide_rev_first_s1() { collide_rev_a; }

# A provider of a name that does not win stops providing it: `C` imports `A`, whose compile creates `foo._redArg`,
# before `Z`, which also registers an IR declaration of that name and drops it in state 1. `A`'s declaration wins
# either way, so `C` compiles to the same code and is replayed.
collide_drop_loser_s0() {
  irdup_files A Z
  claim_z '' foo._redArg lean_nat_succ
}
collide_drop_loser_s1() { printf 'import Lean\ndef zdummy : Nat := 1\n' > T/Z.lean; }
collide_drop_loser_c_check() { grep -qE 'Replayed T\.C( |$)' ../collide_drop_loser.1.log; }

# `K` defines the kernel constant `foo.$1`, which `C` calls, and `Z` registers an IR declaration of that name in
# state 1. `collide_shape`: `K` before `Z`, with `_cstage2`, a shape for which a resolver may rank compiled names first
# and give `C` `Z`'s declaration where import order keeps `K`'s. `collide_shape_rev`: `Z` before `K`, with `_elam_1`,
# a shape for which no resolver ranks compiled names first, so import order gives `C` `Z`'s declaration and ranking
# kernel constants first keeps `K`'s.
collide_shape_files() {
  printf 'name = "test"\ndefaultTargets = ["T"]\n[[lean_lib]]\nname = "T"\n' > lakefile.toml
  mkdir_t
  printf 'def unrelated : Nat := 0\n@[noinline] def foo.%s (_n : Nat) : Nat := 7\n' "$1" > T/K.lean
  printf 'import Lean\ndef zdummy : Nat := 1\n' > T/Z.lean
  printf 'import T.%s\nimport T.%s\n@[noinline] def useIt (n : Nat) : Nat := foo.%s n\n' "$2" "$3" "$1" > T/C.lean
  printf 'import T.C\n' > T.lean
}
collide_shape_s0() { collide_shape_files _cstage2 K Z; }
collide_shape_s1() { claim_z '' foo._cstage2 lean_nat_succ; }
collide_shape_rev_s0() { collide_shape_files _elam_1 Z K; }
collide_shape_rev_s1() { claim_z '' foo._elam_1 lean_nat_succ; }

# The same with a `_boxed` name, reached through an intermediate module: `C` imports `X`, which imports `B`
# before `A`; `C` passes `foo` (unboxed parameters) as a closure, so its code names `foo._boxed`, and `B` gains
# a kernel constant of that name.
cb_files() {
  printf 'name = "test"\ndefaultTargets = ["T"]\n[[lean_lib]]\nname = "T"\n' > lakefile.toml
  mkdir_t
  printf '@[noinline] def foo (n : UInt64) : UInt64 := n + 1\n' > T/A.lean
  printf 'def unrelated : Nat := 0\n' > T/B.lean
  printf 'import T.B\nimport T.A\n' > T/X.lean
  printf 'import T.X\n@[noinline] def apply (g : UInt64 → UInt64) (x : UInt64) : UInt64 := g x\n' > T/C.lean
  printf 'def useFoo (x : UInt64) : UInt64 := apply foo x\n' >> T/C.lean
  printf 'import T.C\n' > T.lean
}
collide_boxed_trans_s0() { cb_files; }
collide_boxed_trans_s1() {
  printf 'def unrelated : Nat := 0\n@[noinline] def foo._boxed (n : Nat) : Nat := n + 7\n' > T/B.lean
}

# An IR-only compiler-shaped name a module registers for a declaration it does not define: `Z` adds an
# `@[extern]` IR declaration `foo._redArg` for `A`'s `foo`. Importers resolve the name to the first module in
# import order that claims it, so with `Z` imported before `A` (`irdup_first`) `C`'s code reaches `Z`'s
# declaration; with `A` first (`irdup_after`, control) it keeps reaching `A`'s.
irdup_files() {
  lakefile_app; mkdir_t
  printf '@[noinline] def foo (n _h : Nat) : Nat := n + 5\n' > T/A.lean
  printf 'import Lean\ndef zdummy : Nat := 1\n' > T/Z.lean
  printf 'import T.%s\nimport T.%s\n@[noinline] def useFoo (n : Nat) : Nat := foo n 0\n' "$1" "$2" > T/C.lean
  printf 'import T.C\ndef main : IO Unit := IO.println (useFoo 1)\n' > Main.lean
}
irdup_z() {
  cat > T/Z.lean <<'EOF'
import Lean
def zdummy : Nat := 1
open Lean IR in
run_cmd Lean.Elab.Command.liftCoreM <| IR.addDecl <| (.extern `foo._redArg
  #[{ x := ⟨1⟩, borrow := false, ty := .object }] .object
  { entries := [.standard `all "lean_nat_succ"] })
EOF
}
irdup_first_s0() { irdup_files Z A; }
irdup_first_s1() { irdup_z; }
irdup_after_s0() { irdup_files A Z; }
irdup_after_s1() { irdup_z; }

# The same claim when `Z` also defines a namespace prefix of the claimed name: `A` defines `NS.foo` and `Z` defines
# `NS`. `NS.foo` has no compiler shape, so `Z` does not own `NS.foo._redArg` (`claim_ns`) or `NS.foo._boxed`
# (`claim_nsb`, where `C` passes `NS.foo : UInt8 → UInt8` as a closure, so its code names the boxed version);
# `claim_nsb_priv` (control) defines the private `NS.foo` instead, a different kernel name.
claim_files() {
  lakefile_app; mkdir_t
  printf 'namespace NS\n@[noinline] def foo (n _h : Nat) : Nat := n + 5\nend NS\n' > T/A.lean
  printf 'import Lean\ndef zdummy : Nat := 1\n' > T/Z.lean
  printf 'import T.Z\nimport T.A\n@[noinline] def useFoo (n : Nat) : Nat := NS.foo n 0\n' > T/C.lean
  printf 'import T.C\ndef main : IO Unit := IO.println (useFoo 1)\n' > Main.lean
}
claim_boxed_files() {
  lakefile_app; mkdir_t
  printf 'namespace NS\n@[noinline] def foo (n : UInt8) : UInt8 := n + 1\nend NS\n' > T/A.lean
  printf 'import Lean\ndef zdummy : Nat := 1\n' > T/Z.lean
  printf 'import T.Z\nimport T.A\n@[noinline] def apply (g : UInt8 → UInt8) (x : UInt8) : UInt8 := g x\n' > T/C.lean
  printf '@[noinline] def useFoo (x : UInt8) : UInt8 := apply NS.foo x\n' >> T/C.lean
  printf 'import T.C\ndef main : IO Unit := IO.println (useFoo 1)\n' > Main.lean
}
# `Z` with the definitions `$1` and an `@[extern "$3"]` IR declaration for the name `$2`
claim_z() {
  printf '%s\n' 'import Lean' 'def zdummy : Nat := 1' "$1" 'open Lean IR in' \
    "run_cmd Lean.Elab.Command.liftCoreM <| IR.addDecl <| (.extern \`$2" \
    '  #[{ x := ⟨1⟩, borrow := false, ty := .object }] .object' \
    "  { entries := [.standard \`all \"$3\"] })" > T/Z.lean
}
claim_ns_s0() { claim_files; }
claim_ns_s1() { claim_z 'def NS : Nat := 0' NS.foo._redArg lean_nat_succ; }
claim_nsb_s0() { claim_boxed_files; }
claim_nsb_s1() { claim_z 'def NS : Nat := 0' NS.foo._boxed lean_nat_pred; }
claim_nsb_priv_s0() { claim_boxed_files; }
claim_nsb_priv_s1() { claim_z 'private def NS.foo : Nat := 0' NS.foo._boxed lean_nat_pred; }

# A name the elaborator resolves to its defining module without it occurring in any term: reducibility
# (`getReducibilityStatusCore`). `U` defines the reducible `ru := 7`, `W` the reducible `wv := ru`, and `C` proves
# `wv = 7` by `with_reducible rfl`, which unfolds `ru` only while `ru` reads as reducible. No term of `C` mentions
# `ru`. In state 1 `Z` claims the name `ru` with an IR declaration. `elab_claim`: `C` imports `Z` then `W`, so `ru`
# resolves to `Z`, reads as semireducible, and `C` fails; `elab_claim_after`: `W` then `Z`, `C` still holds.
elab_claim_files() {
  lakefile_app; mkdir_t
  printf '@[reducible] def ru : Nat := 7\n' > T/U.lean
  printf 'import T.U\n@[reducible] def wv : Nat := ru\n' > T/W.lean
  printf 'import Lean\ndef zdummy : Nat := 1\n' > T/Z.lean
  printf 'import T.%s\nimport T.%s\ntheorem t : wv = 7 := by with_reducible rfl\ndef c : Nat := 0\n' "$1" "$2" > T/C.lean
  printf 'import T.C\ndef main : IO Unit := IO.println c\n' > Main.lean
}
elab_claim_s0() { elab_claim_files Z W; }
elab_claim_s1() { claim_z '' ru lean_nat_succ; }
elab_claim_after_s0() { elab_claim_files W Z; }
elab_claim_after_s1() { claim_z '' ru lean_nat_succ; }

# `elab_claim` with `U` and `W` `module` files: `Z`, which is not one, still claims `ru` for `C`.
elab_claim_ms_s0() {
  elab_claim_files Z W
  printf 'module\n\n@[expose] public section\n@[reducible] def ru : Nat := 7\n' > T/U.lean
  printf 'module\n\npublic import T.U\n@[expose] public section\n@[reducible] def wv : Nat := ru\n' > T/W.lean
}
elab_claim_ms_s1() { claim_z '' ru lean_nat_succ; }

# An instance another module declares for a declaration it does not define, whose name a sibling module then claims.
# `W` defines `foo : Inhabited Nat`, `X` makes it an instance, and `M` takes `default : Nat` through it; `foo` is
# `@[inline]`, so `M`'s code inlines `W`'s `foo` while `foo` resolves to `W`. In state 1 `Z` claims `foo` with an IR
# declaration: `inst_claim` imports `Z` before `X`, so `foo` resolves to `Z` for the stock and lowest-index resolvers;
# `inst_claim_after` imports it after.
inst_claim_files() {
  lakefile_app; mkdir_t
  printf '@[inline, instance_reducible] def foo : Inhabited Nat := ⟨7⟩\n' > T/W.lean
  printf 'import T.W\nattribute [instance] foo\ndef xdummy : Nat := 1\n' > T/X.lean
  printf 'import Lean\ndef zdummy : Nat := 1\n' > T/Z.lean
  printf 'import T.%s\nimport T.%s\n@[noinline] def g : Nat := default\n' "$1" "$2" > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println g\n' > Main.lean
}
inst_claim_s0() { inst_claim_files Z X; }
inst_claim_s1() { claim_z '' foo lean_nat_succ; }
inst_claim_after_s0() { inst_claim_files X Z; }
inst_claim_after_s1() { claim_z '' foo lean_nat_succ; }

# A module's cross-module table digest when modules it does not import claim names of its own declarations. `A`
# defines `X._sunfold` for a base `X` that no module defines, so its `tableDigest` lists the constant with its digest
# (`foreignDerivedConsts`); in state 1 `Y` and `Z` claim `X._sunfold` with different IR declarations (`td_claim`).
# In `td_inst`, `Z` claims the name of `A`'s instance `instA`, which `A`'s `tableDigest` leaves out as one of its own
# declarations. `P` imports `Y`, `Z`, `A`, `R` imports `Z`, `Y`, `A` and `Q` imports `A`, `Y`, `Z`, so in `P`, `R` and
# `Q` the claimed name resolves to `Y`, `Z` and `A` in `td_claim` and to `Z`, `Z` and `A` in `td_inst`; `A`'s table
# digest must be the same in all three, and `P`, `Q` and `R` what a clean build makes.
td_files() {
  lakefile_app; mkdir_t
  printf '%s\n' "$1" 'def adummy : Nat := 1' > T/A.lean
  printf 'import Lean\ndef ydummy : Nat := 1\n' > T/Y.lean
  printf 'import Lean\ndef zdummy : Nat := 1\n' > T/Z.lean
  printf 'import T.Y\nimport T.Z\nimport T.A\ndef p : Nat := 0\n' > T/P.lean
  printf 'import T.Z\nimport T.Y\nimport T.A\ndef r : Nat := 0\n' > T/R.lean
  printf 'import T.A\nimport T.Y\nimport T.Z\ndef q : Nat := 0\n' > T/Q.lean
  printf 'import T.P\nimport T.Q\nimport T.R\ndef main : IO Unit := IO.println (p + q + r)\n' > Main.lean
}
# `$1` claims `$2` with an `@[extern "$3"]` IR declaration.
td_claim_mod() {
  printf '%s\n' 'import Lean' "def ${1,,}dummy : Nat := 1" 'open Lean IR in' \
    "run_cmd Lean.Elab.Command.liftCoreM <| IR.addDecl <| (.extern \`$2" \
    '  #[{ x := ⟨1⟩, borrow := false, ty := .object }] .object' \
    "  { entries := [.standard \`all \"$3\"] })" > T/$1.lean
}
td_claim_s0() { td_files 'def X._sunfold : Nat := 3'; }
td_claim_s1() { td_claim_mod Y X._sunfold lean_nat_succ; td_claim_mod Z X._sunfold lean_nat_pred; }
td_inst_s0() { td_files 'instance instA : Inhabited Nat := ⟨5⟩'; }
td_inst_s1() { td_claim_mod Z instA lean_nat_succ; }

# Used kernel constants whose `ConstantInfo` the import takes from a module other than the one the resolver answers.
# `kern_body`: `Z` claims `foo` with an IR-only declaration and `D` imports `Z` then `A`, so `foo` resolves to `Z`
# while the kernel's `foo` is `A`'s; `E` proves `foo 1 = 2` by `rfl` and state 1 changes `A`'s body, so a fresh `E`
# fails. `kern_body_after` is the control: `D` imports `A` then `Z`, and `foo` resolves to `A`. `kern_codegen`: `K`
# defines the code-generator-shaped name `foo._redArg` and `Z`, imported after `K`, claims it; a resolver that looks
# such names up among compiled names first answers `Z`. State 1 changes `K`'s body.
kern_body_a() { printf 'def foo (n : Nat) : Nat := n + %s\n' "$1" > T/A.lean; }
kern_body_files() {
  lakefile_app; mkdir_t
  kern_body_a 1
  claim_z '' foo lean_nat_succ
  printf 'import T.%s\nimport T.%s\ndef dd : Nat := 0\n' "$1" "$2" > T/D.lean
  printf 'import T.D\ntheorem t : foo 1 = 2 := rfl\ndef e : Nat := 0\n' > T/E.lean
  printf 'import T.E\ndef main : IO Unit := IO.println e\n' > Main.lean
}
kern_body_s0() { kern_body_files Z A; }
kern_body_s1() { kern_body_a 2; }
kern_body_after_s0() { kern_body_files A Z; }
kern_body_after_s1() { kern_body_a 2; }
kern_codegen_k() { printf 'def foo._redArg (n : Nat) : Nat := n + %s\n' "$1" > T/K.lean; }
kern_codegen_s0() {
  lakefile_app; mkdir_t
  kern_codegen_k 1
  claim_z '' foo._redArg lean_nat_succ
  printf 'import T.K\nimport T.Z\ndef dd : Nat := 0\n' > T/D.lean
  printf 'import T.D\ntheorem t : foo._redArg 1 = 2 := rfl\ndef e : Nat := 0\n' > T/E.lean
  printf 'import T.E\ndef main : IO Unit := IO.println e\n' > Main.lean
}
kern_codegen_s1() { kern_codegen_k 2; }

# A theorem `tA` two modules declare with the same statement. `E` reduces `Acc.rec` on `tA` in the kernel, which
# unfolds the copy the import keeps: a proof by `Acc.intro` reduces, one from the axiom `wfR` is stuck. A later copy
# replaces the kept one when it subsumes it (`subsumesInfo`): a theorem replaces a theorem or an axiom, an axiom never
# replaces a theorem. The resolver answers the first declarer. `kern_thm_dup`: `D` imports `P` (from `wfR`) then `Q`
# (by `Acc.intro`), the import keeps `Q`'s copy, and state 1 gives `Q` the proof from `wfR`, so a fresh `E` fails.
# `kern_thm_dup_after`: `D` imports `Q` (from `wfR`) then `P` (by `Acc.intro`), the import keeps `P`'s copy, and state
# 1 changes `Q`'s. `kern_thm_flip`: `P`'s `tA` is the proof by `Acc.intro` and `Q`'s, imported after it, an axiom, so
# the import keeps `P`'s copy; state 1 makes `Q`'s `tA` the proof from `wfR`, which the import then keeps, and `Q`'s
# names do not change.
kern_thm_intro='theorem tA : Acc R 0 := Acc.intro 0 (fun _ h => h.elim)'
kern_thm_axiom='theorem tA : Acc R 0 := wfR.apply 0'
kern_thm_mod() { printf 'import T.B\n%s\ndef %sdummy : Nat := 0\n' "$2" "${1,,}" > T/$1.lean; }
# `D` imports `$1` with `tA` declared by `$3`, then `$2` with `$4`.
kern_thm_files() {
  lakefile_app; mkdir_t
  printf 'def R : Nat → Nat → Prop := fun _ _ => False\naxiom wfR : WellFounded R\n' > T/B.lean
  kern_thm_mod $1 "$3"
  kern_thm_mod $2 "$4"
  printf 'import T.%s\nimport T.%s\ndef dd : Nat := 0\n' "$1" "$2" > T/D.lean
  printf '%s\n' 'import T.D' \
    'theorem a : (Acc.rec (motive := fun _ _ => Nat) (fun _ _ _ => 5) tA : Nat) = 5 := by decide +kernel' \
    'def e : Nat := 0' > T/E.lean
  printf 'import T.E\ndef main : IO Unit := IO.println e\n' > Main.lean
}
kern_thm_dup_s0() { kern_thm_files P Q "$kern_thm_axiom" "$kern_thm_intro"; }
kern_thm_dup_s1() { kern_thm_mod Q "$kern_thm_axiom"; }
kern_thm_dup_after_s0() { kern_thm_files Q P "$kern_thm_axiom" "$kern_thm_intro"; }
kern_thm_dup_after_s1() { kern_thm_mod Q "$kern_thm_intro"; }
kern_thm_flip_s0() { kern_thm_files P Q "$kern_thm_intro" 'axiom tA : Acc R 0'; }
kern_thm_flip_s1() { kern_thm_mod Q "$kern_thm_axiom"; }
# `kern_thm_trans`: `E` reaches `tA` only through `F`'s `g`. `F` imports `P` alone, so `F`'s digest of `g` covers
# `P`'s copy; `D` imports `F` then `Q`, so in `E`'s import `Q`'s copy replaces `P`'s. State 1 gives `Q` the proof
# from `wfR`, so a fresh `E` fails, and `Q`'s names do not change.
kern_thm_trans_s0() {
  kern_thm_files F Q "$kern_thm_intro" "$kern_thm_intro"
  kern_thm_mod P "$kern_thm_intro"
  printf 'import T.P\nnoncomputable def g : Nat := Acc.rec (motive := fun _ _ => Nat) (fun _ _ _ => 5) tA\n' > T/F.lean
  printf 'import T.D\ntheorem a : g = 5 := by decide +kernel\ndef e : Nat := 0\n' > T/E.lean
}
kern_thm_trans_s1() { kern_thm_mod Q "$kern_thm_axiom"; }
# `kern_thm_third`: as `kern_thm_trans`, but `Q`'s copy stays and `W`, which `D` imports last and which declared no
# `tA`, gains the proof from `wfR`, so the import keeps `W`'s copy.
kern_thm_third_s0() {
  kern_thm_trans_s0
  printf 'import T.B\ndef wdummy : Nat := 0\n' > T/W.lean
  printf 'import T.F\nimport T.Q\nimport T.W\ndef dd : Nat := 0\n' > T/D.lean
}
kern_thm_third_s1() { kern_thm_mod W "$kern_thm_axiom"; }
# `dup_new_trans`: as `kern_thm_trans`, but `Q` declares no `tA` in state 0 and gains the proof from `wfR` in state 1,
# so a fresh `E` fails.
dup_new_trans_s0() {
  kern_thm_trans_s0
  printf 'import T.B\ndef qdummy : Nat := 0\n' > T/Q.lean
}
dup_new_trans_s1() { kern_thm_mod Q "$kern_thm_axiom"; }

# A name a second closure module starts to declare: `D` imports `R` and `K` and uses nothing of either; in state 1 `K`
# adds `t`, which `R` defines, so a fresh `D` fails at import (`dup_new`; `dup_new_trans` is the same where the new
# copy replaces the kept one; `dup_new_ms` where `R` is a `module` file). With a theorem of the same statement the
# import merges the copies and a fresh `D` builds (`dup_new_thm`). `dup_new_tc`: the other declarer is a toolchain
# module. `dup_new_own`: it is `D` itself, so a fresh `D` fails at its declaration. `dup_new_third`: `R` and `K` declare
# one theorem `t`, which `D`'s compile depended on in both, and a third import `W` starts to declare `t` as a
# definition. `dup_new_tc_outside`: `K` adds a name of a toolchain module that no module of `D`'s closure imports, so a
# fresh `D` builds and `D` is replayed. `dup_new_deep`: as `dup_new`, but the new declarer is `K2`, which `K` imports, two
# imports below `D`; `T`, which imports `D`, must fail with it. The package is a library only.
dup_files() {
  printf 'name = "test"\ndefaultTargets = ["T"]\n[[lean_lib]]\nname = "T"\n' > lakefile.toml
  mkdir_t
  printf '%s\n' "$1" > T/R.lean
  printf 'def other : Nat := 0\n' > T/K.lean
  printf 'import T.R\nimport T.K\ndef d : Nat := 0\n' > T/D.lean
  printf 'import T.D\ndef e : Nat := d\n' > T.lean
}
dup_new_s0() { dup_files 'def t : Nat := 1'; }
dup_new_s1() { printf 'def other : Nat := 0\ndef t : Nat := 2\n' > T/K.lean; }
dup_new_thm_s0() { dup_files 'theorem t : True := trivial'; }
dup_new_thm_s1() { printf 'def other : Nat := 0\ntheorem t : True := trivial\n' > T/K.lean; }
dup_new_tc_s0() {
  dup_files 'def r : Nat := 0'
  printf 'import Std.Data.HashMap\nimport T.K\ndef d : Nat := 0\n' > T/D.lean
}
dup_new_tc_s1() { printf 'def other : Nat := 0\ndef Std.HashMap.emptyWithCapacity : Nat := 0\n' > T/K.lean; }
dup_new_own_s0() {
  dup_files 'def r : Nat := 0'
  printf 'import T.K\ndef t : Nat := 1\ndef d : Nat := 0\n' > T/D.lean
}
dup_new_own_s1() { printf 'def other : Nat := 0\ndef t : Nat := 2\n' > T/K.lean; }
dup_new_ms_s0() { dup_files $'module\npublic def t : Nat := 1'; }
dup_new_ms_s1() { printf 'def other : Nat := 0\ndef t : Nat := 2\n' > T/K.lean; }
dup_new_third_s0() {
  dup_files 'theorem t : True := trivial'
  printf 'def other : Nat := 0\ntheorem t : True := trivial\n' > T/K.lean
  printf 'def w : Nat := 0\n' > T/W.lean
  printf 'import T.R\nimport T.K\nimport T.W\ndef d : Nat := 0\n' > T/D.lean
}
dup_new_third_s1() { printf 'def w : Nat := 0\ndef t : Nat := 0\n' > T/W.lean; }
dup_new_tc_outside_s0() { dup_files 'def r : Nat := 0'; }
dup_new_tc_outside_s1() { dup_new_tc_s1; }
dup_new_tc_outside_c_check() { grep -qE 'Replayed T\.D( |$)' ../dup_new_tc_outside.1.log; }
dup_new_deep_s0() {
  dup_files 'def t : Nat := 1'
  printf 'def deep : Nat := 0\n' > T/K2.lean
  printf 'import T.K2\ndef other : Nat := 0\n' > T/K.lean
}
dup_new_deep_s1() { printf 'def deep : Nat := 0\ndef t : Nat := 2\n' > T/K2.lean; }

# The axioms an importer's `#print axioms` reports come from the axioms each import's `.olean` exports for its
# declarations (`exportedAxiomsExt`). `A`'s list for `S9` follows the order in which the export visits `A`'s constants,
# so state 1's `r7 (s : S9)` changes it although `S9` is unchanged; `B` uses only `S9`, and `Check.lean` asks for the
# axioms of `B.t` (`axiom_summary`) or of `C.u`, which uses `t` (`axiom_summary_trans`).
axiom_summary_a() { printf 'axiom ax : Nat\nstructure S9 where\n  x : Fin ax\ndef r7 (s : %s) : Nat := 0\n' "$1" > T/A.lean; }
axiom_summary_s0() {
  printf 'name = "test"\ndefaultTargets = ["T"]\n[[lean_lib]]\nname = "T"\n' > lakefile.toml
  mkdir_t
  axiom_summary_a Nat
  printf 'import T.A\ntheorem t (s : S9) : s = s := rfl\n' > T/B.lean
  printf 'import T.B\n' > T.lean
  printf 'import T\n#print axioms t\n' > Check.lean
}
axiom_summary_s1() { axiom_summary_a S9; }
axiom_summary_trans_s0() {
  axiom_summary_s0
  printf 'import T.B\ntheorem u (s : S9) : s = s := t s\n' > T/C.lean
  printf 'import T.C\n' > T.lean
  printf 'import T\n#print axioms u\n' > Check.lean
}
axiom_summary_trans_s1() { axiom_summary_s1; }
# `kern_thm_conflict`: `R` and `K` declare the theorem `t` with one statement, and `D` imports both and uses nothing of
# either. State 1 changes the statement of `K`'s `t` and keeps its names, so a fresh `D` fails at import.
kern_thm_conflict_s0() {
  dup_files 'theorem t : True := trivial'
  printf 'def other : Nat := 0\ntheorem t : True := trivial\n' > T/K.lean
}
kern_thm_conflict_s1() { printf 'def other : Nat := 0\ntheorem t : True ∧ True := ⟨trivial, trivial⟩\n' > T/K.lean; }
# `kern_thm_all`: as `kern_thm_conflict`, but `K`'s `t` changes only its `all`, which the import compares
# (`subsumesInfo`), and `K`'s names do not change.
kern_thm_all_k() {
  printf '%s\n' 'import Lean' 'def other : Nat := 0' 'open Lean in' \
    "run_meta addDecl (.thmDecl { name := \`t, levelParams := [], type := mkConst \`\`True, value := mkConst \`\`True.intro, all := [\`$1] })" \
    > T/K.lean
}
kern_thm_all_s0() { dup_files 'theorem t : True := trivial'; kern_thm_all_k t; }
kern_thm_all_s1() { kern_thm_all_k u; }

# A claim of a name `A`'s compile created inside another specialization: `A`'s specialization of `h` created inside
# its specialization of `g` is `h._at_.g._at_.useIt.spec_0.spec_0`; `Z` defines `useIt.spec_0`, a reading of that
# name's creator, and claims the name (`cs_nested`; `cs_nested_ctl` without the definition). `C` specializes `h` at
# the same key, so the cache gives it `A`'s name, which resolves to `Z`'s claim. A module owns a claimed name only
# if its own compile created it.
cs_nested_files() {
  lakefile_app; mkdir_t
  cat > T/A.lean <<'EOF'
@[specialize] def h (f : Nat → Nat) : List Nat → List Nat
  | [] => []
  | x :: xs => f x :: h f xs
@[specialize] def g (f : Nat → Nat) (xs : List Nat) : List Nat := h f xs ++ [0]
def useIt (xs : List Nat) : List Nat := g (· + 1) xs
EOF
  printf 'import Lean\ndef zdummy : Nat := 1\n' > T/Z.lean
  printf 'import T.Z\nimport T.A\n@[noinline] def useC (xs : List Nat) : List Nat := h (· + 1) xs\n' > T/C.lean
  printf 'import T.C\ndef main : IO Unit := IO.println (useC [1, 2])\n' > Main.lean
}
cs_nested_s0() { cs_nested_files; }
cs_nested_s1() { claim_z 'def useIt.spec_0 : Nat := 0' h._at_.g._at_.useIt.spec_0.spec_0 lean_nat_succ; }
cs_nested_ctl_s0() { cs_nested_files; }
cs_nested_ctl_s1() { claim_z '' h._at_.g._at_.useIt.spec_0.spec_0 lean_nat_succ; }
# The same name created by `Z`'s own compile from ordinary code: `Z` defines `@[specialize] h._at_.g` and the creator
# `useIt.spec_0`, so its compile generates `h._at_.g._at_.useIt.spec_0.spec_0` (`cs_collide`; the creator `useIt2`
# in `cs_collide_ctl`). A kept `C` must match a fresh one.
cs_collide_z() {
  cat > T/Z.lean <<EOF
def zdummy : Nat := 1
@[specialize] def h._at_.g (f : Nat → Nat) : List Nat → List Nat
  | [] => []
  | x :: xs => f x :: h._at_.g f xs
def $1 (xs : List Nat) : List Nat := h._at_.g (· + 2) xs
EOF
}
cs_collide_s0() { cs_nested_files; }
cs_collide_s1() { cs_collide_z useIt.spec_0; }
cs_collide_ctl_s0() { cs_nested_files; }
cs_collide_ctl_s1() { cs_collide_z useIt2; }
# A claim of `A`'s kernel constant `foo` by `Z`, which `D` imports before `A`; `E` imports only `D` and calls `foo`.
cs_kern_s0() {
  lakefile_app; mkdir_t
  printf '@[noinline] def foo (n : Nat) : Nat := n + 5\n' > T/A.lean
  printf 'import Lean\ndef zdummy : Nat := 1\n' > T/Z.lean
  printf 'import T.Z\nimport T.A\ndef dd : Nat := 0\n' > T/D.lean
  printf 'import T.D\n@[noinline] def useFoo (n : Nat) : Nat := foo n\n' > T/E.lean
  printf 'import T.E\ndef main : IO Unit := IO.println (useFoo 1)\n' > Main.lean
}
cs_kern_s1() { claim_z '' foo lean_nat_succ; }

# A control for the comparison of failing builds: `scoped_inst` with a module `N` that fails in state 1, so the
# build fails while `M` and `W` are kept; the outputs both builds produced must still agree.
negfail_scoped_s0() {
  scoped_inst_s0
  printf 'def nok : Nat := 1\n' > T/N.lean
  printf 'import T.W\nimport T.N\ndef main : IO Unit := IO.println w\n' > Main.lean
}
negfail_scoped_s1() { scoped_inst_s1; printf 'def nok : Nat := "x"\n' > T/N.lean; }

# A module's code must not be able to clear, forge or bypass what the build records about it. Each case runs
# the attempt (`hard_try`) inside the module that would profit from it; the state it targets is private, so the
# attempt is rejected, logs `attempt rejected: …` and leaves the module compiling as it would without it
# (`hard_rejected`, in each case's `_c_check`). `hard_recording` clears the flag that switches usage recording
# on, `hard_speclookups` the specialization-cache keys recorded as looked up, and `hard_moduleext` the digests
# recorded for `M`'s imports: `Y` then starts providing the key `M` looked up, so `M` must build again.
# `hard_compilercode` clears the flag that records that a compile ran passes or folders beyond the built-in
# ones (`fold_env`'s folder reads state that `F` changes), so `M` must build again and print 42.
# `hard_usedbychecks` clears the names recorded as used while `B` evaluates `A`'s function;
# `hard_declconsts` empties the constants recorded for `M`'s declarations; `hard_extramod` clears the module
# uses recorded for a macro that a discarded command expands.
hard_try() {
  printf 'open Lean Elab Command in\nrun_cmd do\n  let stx ← match Parser.runParserCategory (← getEnv) `command "%s" with\n    | .ok stx => pure stx\n    | .error e => throwError e\n  let saved := (← get).messages\n  elabCommand stx\n  let errs := (← get).messages.toList.filter (·.severity == .error)\n  modify fun s => { s with messages := saved }\n  if let some e := errs.head? then logInfo m!"attempt rejected: {← e.data.toString}"\n' "$1"
}
hard_rejected() { grep -q 'attempt rejected' "../$1.1.log"; }
hard_m() {
  printf 'import T.B\nimport T.Y\n%snamespace T\ndef h : List Nat := myMap k [1, 2, 3]\nend T\n%s' "${1:-}" "${2:-}" > T/M.lean
}
hard_recording_s0() { nonbuiltin_files; nonbuiltin_y "$(hard_try 'run_meta Lean.usageRecordingRef.set false')" ''; hard_m; }
hard_recording_s1() {
  nonbuiltin_y "$(hard_try 'run_meta Lean.usageRecordingRef.set false')" 'def y : List Nat := myMap k [0]'
}
hard_recording_c_check() { hard_rejected hard_recording && grep -qE 'Built T\.M( |$)' ../hard_recording.1.log; }

hard_usedbychecks_a() { printf 'def hardval : Nat := %s\n' "$1" > T/A.lean; }
hard_usedbychecks_s0() {
  lakefile_app; mkdir_t
  hard_usedbychecks_a 10
  {
    cat <<'EOF'
import T.A
import Lean
open Lean Meta
run_meta do
  let n ← evalConst Nat `hardval (checkMeta := false)
  let d := .defnDecl {
    name := `b
    levelParams := []
    type := mkConst ``Nat
    value := mkNatLit n
    hints := .abbrev
    safety := .safe
  }
  addDecl d
  compileDecl d
EOF
    hard_try 'run_meta Lean.usedByChecksRef.set {}'
  } > T/B.lean
  printf 'import T.B\n@[noinline] def m : Nat := b\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println m\n' > Main.lean
}
hard_usedbychecks_s1() { hard_usedbychecks_a 20; }
hard_usedbychecks_c_check() { hard_rejected hard_usedbychecks; }

hard_declconsts_a() { printf '@[inline] def hx : Nat := %s\n' "$1" > T/A.lean; }
hard_declconsts_s0() {
  lakefile_app; mkdir_t
  hard_declconsts_a 10
  {
    printf 'import T.A\nimport Lean\n@[noinline] def m : Nat := hx + 1\n'
    hard_try 'run_meta Lean.declConstsRef.modify fun r => r.map fun _ d => { d with consts := {} }'
  } > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println m\n' > Main.lean
}
hard_declconsts_s1() { hard_declconsts_a 20; }
hard_declconsts_c_check() { hard_rejected hard_declconsts; }

hard_extramod_a() { printf 'macro "hardmac" : term => `(%s)\n' "$1" > T/A.lean; }
hard_extramod_s0() {
  lakefile_app; mkdir_t
  hard_extramod_a 10
  {
    printf 'import T.A\nimport Lean\n#eval (hardmac : Nat)\n'
    hard_try 'run_meta Lean.extraModUsesByChecksRef.set {}'
  } > T/M.lean
  printf 'import T.M\ndef main : IO Unit := pure ()\n' > Main.lean
}
hard_extramod_s1() { hard_extramod_a 20; }
hard_extramod_c_check() { hard_rejected hard_extramod; }

# `emu_indirect`: `M` quotes ``foo, which records `foo`'s module and every module that gives the imported `foo` a
# non-local attribute as extra module uses (`recordExtraModUseFromDecl`). State 1 gives it `[simp]` in `X`, which `M`
# imports and uses nothing of, so a fresh `M` records `X` too. `emu_indirect_rev` drops the attribute.
emu_indirect_s0() {
  lakefile_app; mkdir_t
  printf 'theorem foo : 1 = 1 := rfl\n' > T/A.lean
  printf 'import T.A\ndef other : Nat := 0\n' > T/X.lean
  printf 'import T.A\nimport T.X\ndef m : Lean.Name := ``foo\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println m\n' > Main.lean
}
emu_indirect_s1() { printf 'import T.A\nattribute [simp] foo\ndef other : Nat := 0\n' > T/X.lean; }
emu_indirect_rev_s0() { emu_indirect_s0; emu_indirect_s1; }
emu_indirect_rev_s1() { printf 'import T.A\ndef other : Nat := 0\n' > T/X.lean; }

hard_moduleext_s0() {
  nonbuiltin_files; nonbuiltin_y '' ''
  hard_m $'import Lean\n' "$(hard_try 'run_meta modifyEnv fun env => Lean.ModuleUsage.ext.modifyState (asyncMode := .mainOnly) env fun s => { s with importedModuleEntries := #[] }')"
}
hard_moduleext_s1() { nonbuiltin_y '' 'def y : List Nat := myMap k [0]'; }
hard_moduleext_c_check() { hard_rejected hard_moduleext && grep -qE 'Built T\.M( |$)' ../hard_moduleext.1.log; }

hard_speclookups_s0() {
  nonbuiltin_files; nonbuiltin_y '' ''; hard_m $'import Lean\n' "$(hard_try 'run_meta Lean.specLookupsRef.set #[]')"
}
hard_speclookups_s1() { nonbuiltin_y '' 'def y : List Nat := myMap k [0]'; }
hard_speclookups_c_check() { hard_rejected hard_speclookups && grep -qE 'Built T\.M( |$)' ../hard_speclookups.1.log; }

hard_compilercode_s0() { fold_env_s0; hard_try 'run_meta Lean.compilerCodeRef.set false' >> T/M.lean; }
hard_compilercode_s1() { env_flag; }
hard_compilercode_c_check() { hard_rejected hard_compilercode && grep -qE 'Built T\.M( |$)' ../hard_compilercode.1.log; }

# `M` adds a reserved-name predicate to its own environment before `h` is compiled, so the predicate runs inside
# every lookup of that compile: `M`'s usage data then depends on every import, and a change to `Y` that `M` does not
# use and that provides no key `M` looked up builds `M` again.
rp_own_s0() {
  nonbuiltin_files; nonbuiltin_y '' ''
  hard_m $'import Lean\nrun_meta Lean.modifyEnv fun env => Lean.reservedNamePredicatesExt.modifyState (log := .unlogged) env (·.push fun _ _ => false)\n'
}
rp_own_s1() { nonbuiltin_y '' 'def yOther : Nat := 1'; }
rp_own_c_check() { grep -qE 'Built T\.M( |$)' ../rp_own.1.log; }

## Tables a module writes through public functions.

# Tables the compiler reads for an imported declaration, which the declaring module can write for its own
# declaration with a public function: `Z` defines `myFst` (or a `casesOn`-shaped definition), and tags it
# in state 0; state 1 removes the tag (`_rev`: adds it). `M` calls it, so its compiled code inlines the body or
# calls the function (`addProjectionFnInfo`, `Meta.markMatcherLike`), or turns the call into a `cases`
# (`markSparseCasesOn`, `markAuxRecursor`).
cov_m() {
  lakefile_app; mkdir_t
  printf 'import T.Z\n@[noinline] def g (p : Nat × Nat) : Nat := %s + 1\n' "$1" > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (g (3, 4))\n' > Main.lean
}
cov_z() {
  printf 'import Lean\nopen Lean\n@[noinline] def myFst (p : Nat × Nat) : Nat := p.1 + 7\n%s\n' "$1" > T/Z.lean
}
cov_projfn_tag='run_cmd modifyEnv fun env => addProjectionFnInfo env ``myFst ``Prod.mk 2 0 false'
cov_projfn_s0() { cov_m 'myFst p'; cov_z "$cov_projfn_tag"; }
cov_projfn_s1() { cov_z ''; }
cov_projfn_rev_s0() { cov_m 'myFst p'; cov_z ''; }
cov_projfn_rev_s1() { cov_z "$cov_projfn_tag"; }
cov_mlike_s0() { cov_m 'myFst p'; cov_z 'run_cmd modifyEnv fun env => Meta.markMatcherLike env ``myFst'; }
cov_mlike_s1() { cov_z ''; }
cov_cases_m() {
  lakefile_app; mkdir_t
  printf 'import T.Z\n@[noinline] def g (c : Color) : Nat := %s (motive := fun _ => Nat) c 1 2\n' "$1" > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (g .green)\n' > Main.lean
}
cov_cases_z() {
  printf 'import Lean\nopen Lean\ninductive Color | red | green\n' > T/Z.lean
  printf '@[noinline] def myCases {motive : Color → Sort u} (c : Color) (red : motive .red) (green : motive .green) : motive c := Color.casesOn c red green\n' >> T/Z.lean
  printf '@[noinline] def Color.casesOn_my {motive : Color → Sort u} (c : Color) (red : motive .red) (green : motive .green) : motive c := Color.casesOn c red green\n' >> T/Z.lean
  printf '%s\n' "$1" >> T/Z.lean
}
cov_sparse_s0() { cov_cases_m myCases; cov_cases_z 'run_cmd modifyEnv fun env => markSparseCasesOn env ``myCases'; }
cov_sparse_s1() { cov_cases_z ''; }
cov_auxrec_s0() { cov_cases_m Color.casesOn_my; cov_cases_z 'run_cmd modifyEnv fun env => markAuxRecursor env ``Color.casesOn_my'; }
cov_auxrec_s1() { cov_cases_z ''; }

# An entry a module writes for the declaration of a sibling module that it does not import: `Z` writes it for
# `W`'s declaration, and `M` imports both. It is in no digest of `W`, and `Z` does not know the name.
# `cov_sibmatch`: matcher info for `foo.match_7`, which `M` inlines with the entry (`_rev`: the entry appears in
# state 1; `cov_ctlmatch`: `Z` imports `W`). `cov_sibinst`: an instance entry for `foo`, which the base phase
# does not inline. `cov_sibclass`: a class entry for `Foo`, which makes `g` specialized for `M`'s argument.
# `cov_sibmeta`: the IR meta mark of a module's declaration, which no importer reads.
sib_info='{ numParams := 0, numDiscrs := 1, altInfos := #[], uElimPos? := none, discrInfos := #[{}], overlaps := {} }'
sib_z() { printf 'import Lean\nopen Lean\n%s\n' "$1" > T/Z.lean; }
sib_files() {
  lakefile_app; mkdir_t
  printf '@[noinline] def foo.match_7 (motive : Nat → Nat) (x : Nat) : Nat := motive x\n' > T/W.lean
  printf 'import T.W\nimport T.Z\n@[noinline] def g (x : Nat) : Nat := foo.match_7 (fun y => y + 1) x\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (g 4)\n' > Main.lean
}
sib_entry='run_cmd modifyEnv fun env => Meta.Match.Extension.addMatcherInfo env `foo.match_7 '"$sib_info"
cov_sibmatch_s0() { sib_files; sib_z "$sib_entry"; }
cov_sibmatch_s1() { sib_z ''; }
cov_sibmatch_rev_s0() { sib_files; sib_z ''; }
cov_sibmatch_rev_s1() { sib_z "$sib_entry"; }
ctl_entry='run_cmd modifyEnv fun env => Meta.Match.Extension.addMatcherInfo env ``foo.match_7 '"$sib_info"
ctl_z() { printf 'import Lean\nimport T.W\nopen Lean\n%s\n' "$1" > T/Z.lean; }
cov_ctlmatch_s0() { sib_files; ctl_z "$ctl_entry"; }
cov_ctlmatch_s1() { ctl_z ''; }

sibinst_entry='run_cmd modifyEnv fun env => Meta.instanceExtension.addEntry env { keys := #[.const ``Inhabited 1, .const ``Nat 0], val := mkConst `foo, priority := 1000, globalName? := some `foo, synthOrder := #[], attrKind := .global }'
cov_sibinst_s0() {
  lakefile_app; mkdir_t
  printf '@[inline, instance_reducible] def foo : Inhabited Nat := ⟨7⟩\n' > T/W.lean
  printf 'import T.W\nimport T.Z\n@[noinline] def g : Inhabited Nat := foo\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println g.default\n' > Main.lean
  sib_z "$sibinst_entry"
}
cov_sibinst_s1() { sib_z ''; }

cov_sibclass_s0() {
  lakefile_app; mkdir_t
  printf 'structure Foo where\n  x : Nat\n' > T/W.lean
  printf 'import T.W\nimport T.Z\n@[noinline] def g (f : Foo) (n : Nat) : Nat := n + 1\ndef h : Nat := g ⟨5⟩ 3\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println h\n' > Main.lean
  sib_z 'run_cmd modifyEnv fun env => classExtension.addEntry env { name := `Foo, outParams := #[], outLevelParams := #[] }'
}
cov_sibclass_s1() { sib_z ''; }

cov_sibmeta_s0() {
  lakefile_app; mkdir_t
  printf 'module\npublic def foo : Nat := 1\n' > T/W.lean
  printf 'module\npublic import T.W\npublic import T.Z\n@[noinline] public def g : Nat := foo + 1\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println g\n' > Main.lean
  printf 'module\nimport Lean\nopen Lean\nrun_cmd modifyEnv fun env => setDeclMeta env `foo\n' > T/Z.lean
}
cov_sibmeta_s1() { printf 'module\nimport Lean\nopen Lean\n' > T/Z.lean; }

# The original kind of `myFst` recorded as a theorem in state 1: a reference to it is then rejected by the code
# generator, so a kept `M` would succeed where a fresh one fails.
cov_ckind_rev_s0() { cov_m 'myFst p'; cov_z ''; }
cov_ckind_rev_s1() { cov_z 'run_cmd modifyEnv fun env => recordOriginalConstKind env ``myFst .thm'; }

# The structural recursion argument position recorded for `myRec` is overwritten in state 1: `M`'s `rfl` proof of
# the unfolding equation relies on smart unfolding, which the position steers, so a fresh `M` fails to build
# where a kept one would not.
cov_recarg_m() {
  lakefile_app; mkdir_t
  printf 'import T.Z\ntheorem t (n : Nat) : myRec (n + 1) = myRec n + 2 := by rfl\ndef g : Nat := myRec 3\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println g\n' > Main.lean
}
cov_recarg_z() {
  printf 'import Lean\nopen Lean Elab Structural\ndef myRec : Nat → Nat\n  | 0 => 0\n  | n + 1 => myRec n + 2\n%s\n' "$1" > T/Z.lean
}
cov_recarg_rev_s0() { cov_recarg_m; cov_recarg_z ''; }
cov_recarg_rev_s1() {
  cov_recarg_z $'run_cmd modifyEnv fun env =>\n  match eqnInfoExt.find? env ``myRec with\n  | some i => eqnInfoExt.insert (allowOverwrite := true) env ``myRec { i with recArgPos := 5 }\n  | none => env'
}
## Outside writes before the compile, compiler-only names that shadow constants, and the keys a module looked up.

# A dead-branch summary written before the compile that produces `Y`'s specialization of `anyP k2`, which the
# compile does not overwrite (`pre_summary`; `pre_extern` does the same with an `@[extern]` attribute). A
# fresh `M` reuses `Y`'s specialization and reads it.
pre_y() {
  cat > T/Y.lean <<EOF
import Lean
import T.B
namespace T
def y0 : Nat := 0
end T
$1
namespace T
def y : Nat := iter k 7
def yb : Bool := anyP k2 [7]
end T
EOF
}
pre_set_summary='open Lean Compiler LCNF UnreachableBranches in
run_meta modifyEnv fun env => addFunctionSummary env `T.anyP._at_.T.yb.spec_0 (.ctor ``Bool.true #[])'
pre_summary_s0() { wh_files; }
pre_summary_s1() { pre_y "$pre_set_summary"; }

# `@[never_extract]` is read live, by common-subexpression elimination, so a specialization `Y` compiled before
# `attribute [never_extract] g` (one call of `g`, one tick) differs from one `M` compiles itself with the final
# attribute (two ticks): `ng` sets the attribute after `Y`'s specialization, `ng_ctrl` before it.
ng_b() {
  cat > T/B.lean <<'EOF'
namespace T
@[specialize] def two (p q : Nat → Nat) (n : Nat) : Nat := p n + q n
end T
EOF
}
ng_y() { printf 'import T.B\nnamespace T\n@[noinline] def f (n : Nat) : Nat := dbgTrace "tick" fun _ => n + 1\n@[noinline] def g (n : Nat) : Nat := f n\n%s\nend T\n' "$1" > T/Y.lean; }
ng_files() {
  lakefile_app; mkdir_t; ng_b; ng_y 'attribute [never_extract] g'
  cat > T/M.lean <<'EOF'
import T.B
import T.Y
namespace T
def h : Nat := two g g 3
end T
EOF
  printf 'import T.M\ndef main : IO Unit := IO.println T.h\n' > Main.lean
}
ng_s0() { ng_files; }
ng_s1() { ng_y $'def y : Nat := two g g 5\nattribute [never_extract] g'; }
ng_ctrl_s0() { ng_files; }
ng_ctrl_s1() { ng_y $'attribute [never_extract] g\ndef y : Nat := two g g 5'; }

# `Y` compiles an evil `T.f` in a discarded environment, then copies that environment's compiler entries into its
# real environment, which has no constant `T.f`. The compiler-only name `T.f` then shadows `M`'s own constant
# `T.f` in `M`'s compiler lookups, which read the owning module's entries first. `shadow2`: `M` defines `T.f`
# with `addDecl`, so it has no declaration range.
sh_files() {
  lakefile_app; mkdir_t
  printf 'import T.Y\nnamespace T\n@[inline] def f (n : Nat) : Nat := n + 1\n@[noinline] def g (n : Nat) : Nat := f n\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (T.g 1)\n' > Main.lean
}
sh_y() { printf 'import Lean\nnamespace T\ndef y0 : Nat := 0\nend T\n%s\n' "$1" > T/Y.lean; }
sh_copy='open Lean Compiler LCNF in
run_meta do
  let envB ← withoutModifyingEnv do
    addDecl <| .defnDecl { name := `T.f, levelParams := [], type := .forallE `n (mkConst ``Nat) (mkConst ``Nat) .default, value := mkLambda `n .default (mkConst ``Nat) (mkApp2 (mkConst ``Nat.add) (.bvar 0) (mkNatLit 100)), hints := .abbrev, safety := .safe }
    compileDecls #[`T.f]
    getEnv
  modifyEnv fun env =>
    let irNew := (IR.getDecls envB).take ((IR.getDecls envB).length - (IR.getDecls env).length)
    let env := irNew.reverse.foldl (fun env d => IR.declMapExt.addEntry env d) env
    let env := baseExt.setState env (baseExt.getState envB)
    let env := monoExt.setState env (monoExt.getState envB)
    let env := impureSigExt.setState env (impureSigExt.getState envB)
    let env := specExtension.setState env (specExtension.getState envB)
    UnreachableBranches.functionSummariesExt.setState env (UnreachableBranches.functionSummariesExt.getState envB)'
shadow_s0() { sh_files; sh_y ''; }
shadow_s1() { sh_y "$sh_copy"; }
sh2_files() {
  lakefile_app; mkdir_t
  cat > T/M.lean <<'EOF'
import T.Y
open Lean in
run_meta do
  addDecl <| .defnDecl { name := `T.f, levelParams := [], type := .forallE `n (mkConst ``Nat) (mkConst ``Nat) .default, value := mkLambda `n .default (mkConst ``Nat) (mkApp2 (mkConst ``Nat.add) (.bvar 0) (mkNatLit 1)), hints := .abbrev, safety := .safe }
  compileDecls #[`T.f]
@[noinline] def g (n : Nat) : Nat := T.f n
EOF
  printf 'import T.M\ndef main : IO Unit := IO.println (g 1)\n' > Main.lean
}
shadow2_s0() { sh2_files; sh_y ''; }
shadow2_s1() { sh_y "$sh_copy"; }

# A module is built again only when the providers of a specialization key it looked up change. `Y` gains a
# specialization of `myMap` at a lambda that `M` never specializes it at (`perkey_unrelated_spec`): `M` is
# replayed. `Y` gains one at `k`, exactly the key `M` looked up and specialized itself (`perkey_provider`): `M`
# is built, and, like everything else, matches the fresh build.
perkey_unrelated_spec_s0() { perkey_files ''; }
perkey_unrelated_spec_s1() { perkey_y $'def y : List Nat := myMap (· + 1) [0]\n'; }
perkey_unrelated_spec_c_check() { grep -qE 'Replayed T\.M( |$)' ../perkey_unrelated_spec.1.log; }
perkey_provider_s0() { perkey_files ''; }
perkey_provider_s1() { perkey_provider_folder_s1; }
perkey_provider_c_check() { grep -qE 'Built T\.M( |$)' ../perkey_provider.1.log; }

# Two entries of one provider, or two spellings of one key, decide which specialization a fresh `M` reuses; a
# kept `M` must match the fresh build. `Y` provides entries for the key `M` looks up (`myMap k`): two for the same
# key, whose order swaps in state 1 (`cachespec_order`: the last one wins), or one that is `mdata`-wrapped
# (`cachespec_mdata_miss`: the entry is a different key from `M`'s, so state 1 stops `M` hitting it).
cachespec_key='(mkApp (mkConst ``T.myMap) (mkConst ``T.k))'
# `T.NAME (xs : List Nat) := xs.map (· + N)`
cachespec_target() { printf '@[noinline] def %s (xs : List Nat) : List Nat := xs.map (· + %s)\n' "$1" "$2"; }
# `cacheSpec KEY T.NAME`
cachespec_cmd() { printf 'run_meta Lean.Compiler.LCNF.Specialize.cacheSpec %s ``T.%s\n' "$1" "$2"; }
# `Y`: `$1` inside `namespace T`, `$2` at top level
cachespec_entries_y() {
  { printf 'import Lean\nimport T.B\nopen Lean\nnamespace T\ndef y0 : Nat := 0\n'
    printf '%s\n' "$1"
    printf 'end T\n'
    printf '%s\n' "$2"; } > T/Y.lean
}
cachespec_two_targets() { cachespec_target evA 100; cachespec_target evB 200; }
cachespec_order_s0() { cs_files; cachespec_entries_y "$(cachespec_two_targets)" "$(cachespec_cmd "$cachespec_key" evA; cachespec_cmd "$cachespec_key" evB)"; }
cachespec_order_s1() { cachespec_entries_y "$(cachespec_two_targets)" "$(cachespec_cmd "$cachespec_key" evB; cachespec_cmd "$cachespec_key" evA)"; }
cachespec_mdata_miss_s0() { cs_files; cachespec_entries_y "$(cachespec_target evil 100)" "$(cachespec_cmd "$cachespec_key" evil)"; }
cachespec_mdata_miss_s1() { cachespec_entries_y "$(cachespec_target evil 100)" "$(cachespec_cmd "(mkMData {} $cachespec_key)" evil)"; }

# Specialization keys that differ only in `mdata`, with no abuse of the public API: a borrowed-annotated function
# type is `mdata` in an LCNF type, so the defeq aliases `F1` and `F2` give such keys. `Y` specializes `app1` at
# `F2` (`@& Nat → Nat`) and `M` at `F1` (`Nat → Nat`), so `M` specializes itself. In state 1 `Y` specializes at
# `F1`, so a fresh `M` reuses `Y`'s specialization, and a kept `M` must match it.
mdata_key_borrow_s0() {
  lakefile_app; mkdir_t
  printf 'namespace T\n@[noinline] def k (n : Nat) : Nat := n + 1\nabbrev F1 := Nat → Nat\nabbrev F2 := (@& Nat) → Nat\n' > T/B.lean
  printf '@[specialize, noinline] def app1 {α : Type} (f : α → Nat) (a : α) : Nat := f a + 1\nend T\n' >> T/B.lean
  printf 'import T.B\nnamespace T\ndef y : Nat := app1 (α := F2) (fun g => g 1) k\nend T\n' > T/Y.lean
  printf 'import T.B\nimport T.Y\nnamespace T\ndef m : Nat := app1 (α := F1) (fun g => g 1) k\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (T.m + T.y)\n' > Main.lean
}
mdata_key_borrow_s1() { printf 'import T.B\nnamespace T\ndef y : Nat := app1 (α := F1) (fun g => g 1) k\nend T\n' > T/Y.lean; }

# As `mdata_key_borrow`, made observable: the key is `app3 (fun g => g 1) k` with `F1` or `F2` as the type of `g`, and `Z`
# (imported by `M` only) registers a folder that rewrites `k _` to 42 inside the specialized body, so `M`'s own
# specialization computes 44 where `Y`'s computes 8.
mdata_key_borrow_folder_s0() {
  lakefile_app; mkdir_t
  printf 'namespace T\n@[noinline] def k (n : Nat) : Nat := n + 1\nabbrev F1 := Nat → Nat\nabbrev F2 := (@& Nat) → Nat\n' > T/B.lean
  printf '@[specialize, noinline] def app3 (h : F1 → Nat) (f : Nat → Nat) (n : Nat) : Nat := f n + h (fun x => x + 1)\nend T\n' >> T/B.lean
  printf 'import T.B\nnamespace T\ndef y : Nat := app3 (fun (g : F2) => g 1) k 5\nend T\n' > T/Y.lean
  printf 'import T.B\nimport T.Z\nimport T.Y\nnamespace T\ndef m : Nat := app3 (fun (g : F1) => g 1) k 5\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (T.m)\n' > Main.lean
  printf 'import Lean\nimport T.B\nopen Lean.Compiler.LCNF.Simp.ConstantFold\ndef myFolder : Folder := fun args => do\n  let #[_] := args | return none\n  return some (.lit (.nat 42))\nrun_meta registerFolder ``T.k ``myFolder\n' > T/Z.lean
}
mdata_key_borrow_folder_s1() { printf 'import T.B\nnamespace T\ndef y : Nat := app3 (fun (g : F1) => g 1) k 5\nend T\n' > T/Y.lean; }

# A `@&` annotation the compiler reads from a declaration that has no compiled code of its own, so that only the
# declaration's type or value changes in state 1: the compiler eta-expands a projection (`borrow_proj`) or a
# constructor passed unapplied (`borrow_ctor`) with the binder types of its kernel type, and unfolds a type alias
# (`borrow_alias`); the parameter it builds is borrowed exactly when the annotation is there. `M` is unchanged.
borrow_files() {
  lakefile_app; mkdir_t
  printf '%s\n' "$1" > T/B.lean
  printf 'import T.B\n%s\n' "$2" > T/M.lean
  printf 'import T.M\n%s\n' "$3" > Main.lean
}
borrow_proj_s0() {
  borrow_files $'structure Hs where\n  f : List Nat → List Nat' \
    $'def g (h : Hs) : List Nat → List Nat := h.f\ndef h0 : Hs := ⟨List.reverse⟩' \
    'def main : IO Unit := IO.println (g h0 [1, 2, 3])'
}
borrow_proj_s1() { printf '%s\n' $'structure Hs where\n  f : (@& List Nat) → List Nat' > T/B.lean; }
borrow_ctor_s0() {
  borrow_files $'structure W where\n  x : List Nat\n  y : Nat' \
    'def k (xs : List (List Nat)) (ys : List Nat) : List W := @List.zipWith (List Nat) Nat W W.mk xs ys' \
    'def main : IO Unit := IO.println (k [[1], [2, 3]] [4, 5]).length'
}
borrow_ctor_s1() { printf '%s\n' $'structure W where\n  x : @& List Nat\n  y : Nat' > T/B.lean; }
borrow_alias_s0() {
  borrow_files 'def Fn : Type := List Nat → List Nat' 'def g : Fn := fun (l : List Nat) => l.reverse' \
    'def main : IO Unit := IO.println (g [1, 2, 3])'
}
borrow_alias_s1() { printf '%s\n' 'def Fn : Type := (@& List Nat) → List Nat' > T/B.lean; }

# Instance resolution inside a compile: computing the code type of `f`'s parameter reduces an `Eq.rec` over
# `P 0 = Q 0`, which reaches `K`'s unification hint, whose instance argument is resolved from the instances in
# scope. `I`'s instance makes the type `UInt8`; state 1 makes it a plain definition, so a fresh `M` takes
# `lean_object*`. `M` uses nothing of `I`.
tc_hint_s0() {
  lakefile_app; mkdir_t
  printf 'namespace T\nclass C (α : Type) : Type where\n  mk ::\naxiom P : Nat → Type\naxiom Q : Nat → Type\nend T\n' > T/A.lean
  printf 'import T.A\nnamespace T\n@[unification_hint] def hQ (n : Nat) (X : Type) [_inst : C X] : Prop := Q n = X\nend T\n' > T/K.lean
  printf 'import T.A\nnamespace T\ninstance instCP : C (P 0) := {}\nend T\n' > T/I.lean
  printf 'import T.A\nimport T.K\nimport T.I\nnamespace T\n@[noinline] def f (h : P 0 = Q 0) (_x : @Eq.rec Type (P 0) (fun _ _ => Type) UInt8 (Q 0) h) : Nat := 0\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println "ok"\n' > Main.lean
}
tc_hint_s1() { printf 'import T.A\nnamespace T\ndef instCP : C (P 0) := {}\nend T\n' > T/I.lean; }

# Binder names and infos the compiler reads from an imported value: a `@[macro_inline]` body `M` inlines (its
# lambda's binder becomes an LCNF parameter, and an implicit one is eta-reduced, `ba_implicit`, `bi_inl` and the
# reverse `bi_inl_rev`, `bn_mi` for a name only), the same body reaching `N` through `M` (`bi_down2`), and a type
# alias the compiler unfolds into `M`'s code type (`bn_alias`). State 1 changes only that name or binder info.
mi_a() {
  printf 'namespace T\n@[%s] def g (n k : Nat) : Nat := %s\n@[macro_inline] def mi (n : Nat) : Nat → Nat := %s\nend T\n' \
    "$1" "$2" "$3" > T/A.lean
}
mi_files() {
  lakefile_app; mkdir_t
  mi_a "$@"
  printf 'import T.A\nnamespace T\ndef h (n : Nat) (xs : List Nat) : List Nat := List.map (mi n) xs\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (T.h 5 [1, 5, 9])\n' > Main.lean
}
mi_g='if n == k then n * 7 else k + n * 3'
ba_implicit_s0() { mi_files noinline 'n + k' '@fun {k : Nat} => g n k'; }
ba_implicit_s1() { mi_a noinline 'n + k' '@fun (k : Nat) => g n k'; }
bi_inl_s0() { mi_files inline "$mi_g" '@fun {k : Nat} => g n k'; }
bi_inl_s1() { mi_a inline "$mi_g" '@fun (k : Nat) => g n k'; }
bi_inl_rev_s0() { mi_files inline "$mi_g" '@fun (k : Nat) => g n k'; }
bi_inl_rev_s1() { mi_a inline "$mi_g" '@fun {k : Nat} => g n k'; }
bn_mi_s0() { mi_files noinline 'n + k' 'fun k => g n k'; }
bn_mi_s1() { mi_a noinline 'n + k' 'fun jjj => g n jjj'; }
bi_down2_s0() {
  lakefile_app; mkdir_t
  mi_a inline "$mi_g" '@fun {k : Nat} => g n k'
  printf 'import T.A\nnamespace T\n@[noinline] def h (n : Nat) : Nat → Nat := mi n\n@[noinline] def hl (n : Nat) (xs : List Nat) : List Nat := List.map (mi n) xs\nend T\n' > T/M.lean
  printf 'import T.M\nnamespace T\n@[inline] def k (n : Nat) : List Nat := hl n [1, 5, 9]\ndef j (n : Nat) : Nat := h n 4 + h n 5\nend T\n' > T/N.lean
  printf 'import T.N\ndef main : IO Unit := IO.println (T.k 5, T.j 5)\n' > Main.lean
}
bi_down2_s1() { mi_a inline "$mi_g" '@fun (k : Nat) => g n k'; }
bn_alias_s0() {
  lakefile_app; mkdir_t
  printf 'namespace T\n@[reducible] def F : Type := (x : Nat) → Nat\nend T\n' > T/A.lean
  printf 'import T.A\nnamespace T\n@[noinline] def h (f : F) : Nat := f 1\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (T.h (fun n => n + 1))\n' > Main.lean
}
bn_alias_s1() { printf 'namespace T\n@[reducible] def F : Type := (y : Nat) → Nat\nend T\n' > T/A.lean; }

# `mdata` an importer copies: a custom annotation (term elaborator `mark%` in `P`) whose payload changes 1 -> 2 in a
# `@[macro_inline]` body, a reducible type alias, a type alias with the annotation at the head and an `@[inline]` body
# (`vd_mdata`), and in the type of a definition `M`'s elaboration copies into its own terms (`vd_mdata_type`). A
# kept `M`'s `.olean` must match a fresh one.
vd_mdata_p() {
  cat > T/P.lean <<'EOF'
import Lean
open Lean Elab Term
namespace T
syntax (name := markStx) "mark% " num term:max : term
@[term_elab markStx] def elabMark : TermElab := fun stx ety? => do
  let n := stx[1].isNatLit?.getD 0
  let e ← elabTerm stx[2] ety?
  return .mdata (KVMap.empty.insert `vdmark (.ofNat n)) e
end T
EOF
}
vd_mdata_a() {
  cat > T/A.lean <<EOF
import T.P
namespace T
@[macro_inline] def mi (n : Nat) : Nat := mark% $1 (n + 1)
@[reducible] def F : Type := (x : mark% $1 Nat) → mark% $1 Nat
def G : Type := mark% $1 ((y : Nat) → Nat)
@[inline] def il (n : Nat) : Nat := mark% $1 (n * 2)
end T
EOF
}
vd_mdata_s0() {
  lakefile_app; mkdir_t; vd_mdata_p; vd_mdata_a 1
  cat > T/M.lean <<'EOF'
import T.A
namespace T
@[noinline] def h (f : F) (g : G) (n : Nat) : Nat := f (mi n) + g (il n)
end T
EOF
  printf 'import T.M\ndef main : IO Unit := IO.println (T.h (fun x => x + 1) (fun y => y * 3) 5)\n' > Main.lean
}
vd_mdata_s1() { vd_mdata_a 2; }
vd_mdata_type_a() { printf 'import T.P\nnamespace T\ndef x : mark%% %s Nat := 5\nend T\n' "$1" > T/A.lean; }
vd_mdata_type_s0() {
  lakefile_app; mkdir_t; vd_mdata_p; vd_mdata_type_a 1
  printf 'import T.A\nnamespace T\ndef y := x\n@[noinline] def k (n : Nat) : Nat := n + y\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (T.k 5)\n' > Main.lean
}
vd_mdata_type_s1() { vd_mdata_type_a 2; }

# Smart unfolding: computing the code type of `h`'s parameter reduces `F 0` through `F._sunfold` when that constant
# exists (`Meta.unfoldDefinition?`), a constant no term of `M` or `F` mentions. `F._sunfold`'s value changes
# (`vd_sunfold`), only a binder name of the type it unfolds to (`vd_sunfold_bn`), or it appears in another import
# `B` that `M` uses nothing of (`vd_sunfold_new`).
vd_sunfold_a() { printf 'namespace T\ndef F (_ : Nat) : Type := Nat\ndef F._sunfold (_ : Nat) : Type := %s\nend T\n' "$1" > T/A.lean; }
vd_sunfold_m() {
  printf 'import T.A\nnamespace T\n@[noinline] def h (_f : F 0) (n : Nat) : Nat := n + 1\n@[noinline] def k (n : Nat) : Nat := n * 2\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (T.k 5)\n' > Main.lean
}
vd_sunfold_s0() { lakefile_app; mkdir_t; vd_sunfold_a Nat; vd_sunfold_m; }
vd_sunfold_s1() { vd_sunfold_a UInt8; }
vd_sunfold_bn_a() {
  printf 'namespace T\ndef F (_ : Nat) : Type := (x : Nat) → Nat\ndef F._sunfold (_ : Nat) : Type := (%s : Nat) → Nat\nend T\n' "$1" > T/A.lean
}
vd_sunfold_bn_s0() { lakefile_app; mkdir_t; vd_sunfold_bn_a y; vd_sunfold_m; }
vd_sunfold_bn_s1() { vd_sunfold_bn_a z; }
vd_sunfold_new_s0() {
  lakefile_app; mkdir_t
  printf 'namespace T\ndef F (_ : Nat) : Type := Nat\nend T\n' > T/A.lean
  printf 'namespace T\ndef b : Nat := 0\nend T\n' > T/B.lean
  vd_sunfold_m
  printf 'import T.A\nimport T.B\nnamespace T\n@[noinline] def h (_f : F 0) (n : Nat) : Nat := n + 1\n@[noinline] def k (n : Nat) : Nat := n * 2\nend T\n' > T/M.lean
}
vd_sunfold_new_s1() { printf 'namespace T\ndef b : Nat := 0\ndef F._sunfold (_ : Nat) : Type := UInt8\nend T\n' > T/B.lean; }
# The bare-constant path: a nullary alias `F` is not unfolded when `F._sunfold` exists (`vd_sunfold_bare`: `A`
# gains it).
vd_sunfold_bare_s0() {
  lakefile_app; mkdir_t
  printf 'namespace T\ndef F : Type := UInt8\nend T\n' > T/A.lean
  printf 'import T.A\nnamespace T\n@[noinline] def h (_f : F) (n : Nat) : Nat := n + 1\n@[noinline] def k (n : Nat) : Nat := n * 2\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (T.k 5)\n' > Main.lean
}
vd_sunfold_bare_s1() { printf 'namespace T\ndef F : Type := UInt8\ndef F._sunfold : Type := UInt8\nend T\n' > T/A.lean; }

# Other derived constants the compiler reads by name for a base of another module: `B` gains a `noncomputable`
# (so not compiled) `T.f._unsafe_rec`, whose value compiling `M`'s own `T.f` uses as its code (`dn_unsafe_rec`), or
# whose `noncomputable` mark fails the compile of every use of `A`'s `T.f` (`dn_noncomp`). `M` uses nothing of `B`.
dn_unsafe_rec_s0() {
  lakefile_app; mkdir_t
  printf 'namespace T\ndef b : Nat := 0\nend T\n' > T/B.lean
  printf 'import T.B\nnamespace T\ndef f (n : Nat) : Nat := n + 1\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (T.f 1)\n' > Main.lean
}
dn_unsafe_rec_s1() {
  printf 'namespace T\ndef b : Nat := 0\nnoncomputable def f._unsafe_rec (n : Nat) : Nat := n + 100\nend T\n' > T/B.lean
}
dn_noncomp_s0() {
  lakefile_app; mkdir_t
  printf 'namespace T\n@[noinline] def f (n : Nat) : Nat := n + 1\nend T\n' > T/A.lean
  printf 'import T.A\nnamespace T\ndef b : Nat := 0\nend T\n' > T/B.lean
  printf 'import T.A\nimport T.B\nnamespace T\n@[noinline] def g (n : Nat) : Nat := f n + 2\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (T.g 1)\n' > Main.lean
}
dn_noncomp_s1() {
  printf 'import T.A\nnamespace T\ndef b : Nat := 0\nnoncomputable def f._unsafe_rec (n : Nat) : Nat := Classical.choice ⟨n⟩\nend T\n' > T/B.lean
}
# The `never_extract` mark of a prefix the compiler reads with an internal name: `B` defines `T.g._x`, whose prefix
# is `A`'s `T.g` (`B` does not import `A`); `A` marks `T.g` in state 1, so a fresh `M` no longer extracts the closed
# term `T.g._x 3`.
dn_never_extract_a() { printf 'namespace T\n%sdef g (n : Nat) : Nat := n\nend T\n' "$1" > T/A.lean; }
dn_never_extract_s0() {
  lakefile_app; mkdir_t; dn_never_extract_a ''
  printf 'namespace T\ndef g._x (n : Nat) : Nat := n + 5\nend T\n' > T/B.lean
  printf 'import T.A\nimport T.B\nnamespace T\n@[noinline] def m (n : Nat) : Nat := g._x 3 + n\nend T\n' > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println (T.m 1)\n' > Main.lean
}
dn_never_extract_s1() { dn_never_extract_a '@[never_extract] '; }

all_cases="spec_transitive spec_link spec_type spec_precomp plugin_replay csimp_transitive csimp_late specialize_attr
  cov_projfn cov_projfn_rev cov_mlike cov_sparse cov_auxrec cov_sibmatch cov_sibmatch_rev cov_ctlmatch
  cov_sibinst cov_sibclass cov_sibmeta cov_ckind_rev cov_recarg_rev
  collide_first collide_after collide_rev collide_rev_first collide_drop_loser collide_shape collide_shape_rev
  elab_claim elab_claim_after elab_claim_ms inst_claim inst_claim_after td_claim td_inst
  kern_body kern_body_after kern_codegen kern_thm_dup kern_thm_dup_after kern_thm_flip kern_thm_trans
  kern_thm_conflict kern_thm_all kern_thm_third dup_new dup_new_trans dup_new_thm dup_new_tc dup_new_own dup_new_ms
  dup_new_third dup_new_tc_outside dup_new_deep axiom_summary axiom_summary_trans
  hard_recording hard_moduleext hard_speclookups hard_compilercode rp_own
  hard_usedbychecks hard_declconsts
  hard_extramod emu_indirect emu_indirect_rev perkey_provider_inl
  class_same class_cross nospec_type folder_cross reducible_cross binder_inline perkey_provider_folder
  local_inst_own erase_inst_own scoped_inst local_red_own2 local_red_own3 scoped_red_own
  table_order folder_order red_order
  flag_off_lean flag_off_reader nonbuiltin_own_folder nonbuiltin_own_cpass nonbuiltin_ext_folder nonbuiltin_ext_cpass fold_env cpass_env
  hk_fail hk_opt hk_ctl
  cachespec_added cachespec_hit_edit premise_ir ir_count ir_count_nd lcnf_override perkey_provider_inl_edit
  collide_boxed_trans irdup_first irdup_after claim_ns claim_nsb claim_nsb_priv negfail_scoped abi_mix abi_void
  abi_enum abi_monotype
  wh_ctrl wh_summary wh_extern wh_implby wh_sig pre_extern pre_extern_app
  ir_eval macro_eval init_eval
  inl_small inl_inline inl_instance spec_nested spec_derived spec_local spec_renumber
  implemented_by csimp extern export noncomputable partial_body unsafe_body boxed_version structure_eta
  instance_reducible reducible macro_inline_instance inline_instance specialize_args closed_extraction
  decl_map enum_repr noinline_attr aux_local struct_repr
  outparam_pos folder_removal interp_simproc interp_parser interp_tactic interp_term_elab interp_delab interp_eval_cmd
  binder_fun binder_jp binder_param owner_macro owner_boxed owner_move binder_info_param binder_info_type
  pre_summary ng ng_ctrl shadow shadow2 perkey_unrelated_spec perkey_provider cachespec_order cachespec_mdata_miss mdata_key_borrow mdata_key_borrow_folder
  borrow_proj borrow_ctor borrow_alias tc_hint ba_implicit bi_inl bi_inl_rev bn_mi bi_down2 bn_alias
  cs_nested cs_nested_ctl cs_collide cs_collide_ctl cs_kern vd_mdata vd_mdata_type vd_sunfold vd_sunfold_bn
  vd_sunfold_new vd_sunfold_bare dn_unsafe_rec dn_noncomp dn_never_extract
  spec_transitive:cache"
# `spec_transitive:cache`: the state the cutoff build of `spec_transitive` leaves behind, after another build and
# in a fresh tree that shares its artifact cache.
cases=${CASES:-}
if [ -z "$cases" ]; then
  i=0
  for c in $all_cases; do
    if [ -z "${SLICE:-}" ] || [ $((i % SLICES)) = $((SLICE - 1)) ]; then cases+=" $c"; fi
    i=$((i + 1))
  done
fi
failed=()
# `NAME:cache` runs a case with the artifact cache (see `run_case`).
for c in $cases; do
  case $c in
    *:cache) run_case "${c%:cache}" cache || failed+=("$c") ;;
    *) run_case $c || failed+=($c) ;;
  esac
done
if [ ${#failed[@]} -gt 0 ]; then
  echo "FAILURE: cases differing from a fresh build: ${failed[*]}"
  exit 1
fi
