#!/usr/bin/env bash
source ../common.sh

./clean.sh
mkdir -p work/cut work/fresh
cd work

# Each case is a package in two states. It is built in state 0, edited to state 1 and built again with the
# usage cutoff on (`work/cut/CASE`); the state-1 sources are also built from scratch with the cutoff off
# (`work/fresh/CASE`). Everything observable must agree: whether the build succeeds, the messages it logs,
# what the executable `app` prints, what `lake env lean` prints for each `Check*.lean`, and the C file of
# every module, which for a module the cutoff skipped must be what compiling its sources now produces. The
# `.olean`, `.ilean` and `.ir` files the cutoff kept must also be byte for byte those of a clean build of
# state 1 with the cutoff on, made in the same directory. The one difference the cutoff accepts is a
# specialization a module created itself where a fresh build would reuse another module's, of the same
# function at the same arguments: a case that makes one names the C files it allows to differ
# (`CASE_c_exempt`; those modules' other outputs are exempt too, and `CASE_olean_exempt` adds the modules
# importing them) and checks them itself (`CASE_c_check`, run in the cutoff tree). A case writes its state-0
# files with `CASE_s0` and the files state 1 changes with `CASE_s1`, both in the package directory.

# Store the Lake cache in the test directory, never the system cache
export LAKE_CACHE_DIR=
export LAKE_ARTIFACT_CACHE=false

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
    return 1
  fi
  (cd "$cut" && "${c}_s1")
  rc=0
  (cd "$cut" && env "${env[@]}" "$LAKE" build -v > ../$n.1.log 2>&1) || rc=$?
  (cd "$cut" && observe $rc ../$n.1.log) > cut/$n.obs
  local cutrc=$rc
  if [ "$mode" = cache ]; then
    rc=0
    (cd "$cut" && env "${env[@]}" "$LAKE" build -v > ../$n.2.log 2>&1) || rc=$?
    cutrc=$((cutrc + rc))
    (cd "$cut" && observe $rc ../$n.2.log) > cut/$n.obs2
    mkdir -p "cut/$n.shared"
    (cd "cut/$n.shared" && "${c}_s0" && "${c}_s1")
    local rcs=0
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
  local exempt=""
  if declare -F "${c}_c_exempt" > /dev/null; then exempt=$("${c}_c_exempt"); fi
  for t in "$cut" ${mode:+"cut/$n.shared"}; do
    for f in $(cd "$fresh/.lake/build/ir" && find . -name '*.c' | LC_ALL=C sort); do
      case " $exempt " in *" ${f#./} "*) continue;; esac
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
  # The cutoff's promise is that what it keeps is what a clean build produces. The clean build has the cutoff
  # on (a build without it writes `.olean` files without digests) and is made at the cutoff tree's path, which a
  # module that logs a message embeds in its `.olean`. A module whose C file the case exempts is exempt here
  # too, as are the modules `CASE_olean_exempt` lists (those importing it, whose `.olean` embeds its digests).
  local kept="$cut.kept" k skip e oexempt=$exempt
  if declare -F "${c}_olean_exempt" > /dev/null; then oexempt="$oexempt $("${c}_olean_exempt")"; fi
  rm -rf "$kept"
  cp -a "$cut/.lake/build" "$kept"
  rm -rf "$cut/.lake/build"
  rc=0
  (cd "$cut" && "$LAKE" build -v > ../$n.clean.log 2>&1) || rc=$?
  if [ $cutrc = 0 ] && [ $rc != 0 ]; then
    ok=0
    echo "FAILURE: $n: the clean cutoff-on build of state 1 (cut/$n.clean.log) fails"
  elif [ $cutrc != 0 ] && [ $rc = 0 ]; then
    ok=0
    echo "FAILURE: $n: the cutoff build of state 1 fails but the clean cutoff-on build (cut/$n.clean.log) succeeds"
  fi
  # A failing build leaves no outputs to compare.
  for f in $( [ $cutrc = 0 ] && (build_outputs "$cut/.lake/build"; build_outputs "$kept") | LC_ALL=C sort -u); do
    k=${f#./}; k=${k%%.*}
    skip=0
    for e in $oexempt; do
      case "$k" in *"/${e%.c}") skip=1;; esac
    done
    if [ $skip = 1 ]; then continue; fi
    if [ ! -e "$kept/$f" ] || [ ! -e "$cut/.lake/build/$f" ]; then
      ok=0
      echo "FAILURE: $n: ${f#./} exists in only one of the cutoff build and the clean cutoff-on build"
    elif ! cmp -s "$cut/.lake/build/$f" "$kept/$f"; then
      ok=0
      echo "FAILURE: $n: ${f#./} kept by the cutoff differs from the clean cutoff-on build's:"
      cmp "$cut/.lake/build/$f" "$kept/$f" || true
    fi
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
# Without code running inside the compiler both compute the same function (`d2_tolerated`): `M` may keep its
# own, and only its C file differs. With a constant folder for `k` registered in `Z` (`d2_folder`), which is
# not meaning-preserving (it returns 42) and which `Y` does not import, they differ, and `M` must compile again.
d2_files() {
  lakefile_app; mkdir_t
  printf 'namespace T\n@[noinline] def k (n : Nat) : Nat := n + 1\n' > T/B.lean
  printf '@[specialize] def myMap (f : Nat → Nat) : List Nat → List Nat\n  | [] => []\n' >> T/B.lean
  printf '  | x :: xs => f x :: myMap f xs\nend T\n' >> T/B.lean
  d2_y ''
  printf 'import T.B\n%simport T.Y\nnamespace T\ndef h : List Nat := myMap k [1, 2, 3]\nend T\n' "$1" > T/M.lean
  printf 'import T.M\ndef main : IO Unit := IO.println T.h\n' > Main.lean
}
d2_y() { printf 'import T.B\nnamespace T\ndef y0 : Nat := 0\n%send T\n' "$1" > T/Y.lean; }
d2_folder_s0() {
  d2_files $'import T.Z\n'
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
d2_folder_s1() { d2_y $'def y : List Nat := myMap k [0]\n'; }
d2_tolerated_s0() { d2_files ''; }
d2_tolerated_s1() { d2_folder_s1; }
d2_tolerated_c_exempt() { echo T/M.c; }
# `Main` imports `M`, so its `.olean` embeds the digests of the `M` that differs.
d2_tolerated_olean_exempt() { echo Main; }
# The kept `M` still calls the specialization it created.
d2_tolerated_c_check() { grep -q 'myMap___at___00T_h_spec__0' .lake/build/ir/T/M.c; }
# The same with a compiler pass (a no-op) registered in `Z`: code that runs inside the compiler is not known to
# preserve meaning, so `M` must compile again and match the fresh build byte for byte.
d2_cpass_s0() {
  d2_files $'import T.Z\n'
  cat > T/Z.lean <<'EOF'
import Lean
import T.B
open Lean.Compiler.LCNF
@[cpass] def myInstaller : PassInstaller :=
  PassInstaller.installAtEnd .base (Pass.mkPerDeclaration `myNoop .base fun d => pure d)
EOF
}
d2_cpass_s1() { d2_folder_s1; }

# Toolchain modules alone leave the compiler's passes and folders built-in: `M` importing `Lean`, and also a
# module that only reads the folder table, keeps the tolerance of `d2_tolerated`.
d2_tolerated_lean_s0() { d2_files $'import Lean\n'; }
d2_tolerated_lean_s1() { d2_folder_s1; }
d2_tolerated_lean_c_exempt() { d2_tolerated_c_exempt; }
d2_tolerated_lean_olean_exempt() { d2_tolerated_olean_exempt; }
d2_tolerated_lean_c_check() { d2_tolerated_c_check; }
d2_tolerated_reader_s0() {
  d2_files $'import Lean\nimport T.R\n'
  printf 'import Lean\nopen Lean Lean.Compiler.LCNF.Simp.ConstantFold\nrun_meta do\n  let _ ← getFolders\n  pure ()\n' \
    > T/R.lean
}
d2_tolerated_reader_s1() { d2_folder_s1; }
d2_tolerated_reader_c_exempt() { d2_tolerated_c_exempt; }
d2_tolerated_reader_olean_exempt() { d2_tolerated_olean_exempt; }
d2_tolerated_reader_c_check() { d2_tolerated_c_check; }

# Code inside the compiler from other sources than an imported module's entries: `M` registers a folder
# itself (`f3_own_folder`) or declares a `@[cpass]` itself (`f3_own_cpass`), or `Y`, imported but unused,
# installs a folder (`f3_runtime_folder`) or a pass (`f3_runtime_cpass`) by writing the extension state
# directly, with no entry, before it specializes the same call. Each time a fresh `M` differs from the kept
# one, by behaviour or by which specialization it calls.
f3_files() {
  lakefile_app; mkdir_t
  printf 'namespace T\n@[noinline] def k (n : Nat) : Nat := n + 1\n' > T/B.lean
  printf '@[specialize] def myMap (f : Nat → Nat) : List Nat → List Nat\n  | [] => []\n' >> T/B.lean
  printf '  | x :: xs => f x :: myMap f xs\nend T\n' >> T/B.lean
  printf 'import T.B\nnamespace T\ndef y0 : Nat := 0\nend T\n' > T/Y.lean
  printf 'import T.M\ndef main : IO Unit := IO.println T.h\n' > Main.lean
}
f3_own_folder_s0() {
  f3_files
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
f3_own_folder_s1() { d2_folder_s1; }
f3_own_cpass_s0() {
  f3_files
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
f3_own_cpass_s1() { d2_folder_s1; }
f3_y() {
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
f3_runtime_m() {
  f3_files; f3_y '' ''
  printf 'import T.B\nimport T.Y\nnamespace T\ndef h : List Nat := myMap k [1, 2, 3]\nend T\n' > T/M.lean
}
f3_runtime_folder_s0() { f3_runtime_m; }
f3_runtime_folder_s1() {
  f3_y 'run_meta modifyEnv fun env => folderExt.modifyState env fun (es, m) => (es, m.insert ``T.k myFolder)' \
    'def y : List Nat := myMap k [0]'
}
f3_runtime_cpass_s0() { f3_runtime_m; }
f3_runtime_cpass_s1() {
  f3_y $'run_meta do\n  let m ← PassInstaller.run (← getPassManager) myInstaller\n  modifyEnv fun env => passManagerExt.modifyState env fun (ns, _) => (ns, m)' \
    'def y : List Nat := myMap k [0]'
}

# A specialization-cache entry written through the public `cacheSpec`, not by the specializer: `Y`, which `M`
# uses nothing of, maps the key of `M`'s own specialization of `myMap k` to `evil`, which adds 100
# (`f1_cachespec`). With the entry there from state 0, `M` hits it, so the hit is recorded and an edit to `evil`
# rebuilds `M` (`f1_cachespec_hit`).
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
f1_cachespec_s0() { cs_files; cs_y 100 ''; }
f1_cachespec_s1() { cs_y 100 "$cs_entry"$'\n'; }
f1_cachespec_hit_s0() { cs_files; cs_y 100 "$cs_entry"$'\n'; }
f1_cachespec_hit_s1() { cs_y 200 "$cs_entry"$'\n'; }

# `A.f` keeps its LCNF body `g n + 1` but registers IR that adds 50. `Y`'s specialization of `run k` inlines
# `f`'s body; `M`, where a local attribute stops specializing `f`, calls `f`'s IR. Once `Y` adds the same key, a
# fresh `M` reuses `Y`'s specialization, so the two must not count as interchangeable.
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

## Guards: changes the cutoff catches today, some by mechanisms a redesign may replace.

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
# be elaborated again. `r4_main` adds the executable that prints `b`, or one that prints nothing.
r4_main() {
  lakefile_app; mkdir_t
  printf 'import T.B\ndef main : IO Unit := %s\n' "${1:-pure ()}" > Main.lean
}

# A simproc, tried first on `foo _` by `B`'s `simp`, logs a number and rewrites `foo n` to `n`.
r4_simproc_a() {
  printf 'import Lean\nopen Lean Meta Simp\ndef foo (n : Nat) : Nat := n\nsimproc ↓ reduceFoo (foo _) := fun e => do\n  logInfo "simproc %s"\n  return .done { expr := e.appArg! }\n' "$1" > T/A.lean
}
r4_simproc_s0() {
  r4_main; r4_simproc_a 10
  printf 'import T.A\ntheorem t : foo 3 = 3 := by simp only [reduceFoo]\n' > T/B.lean
}
r4_simproc_s1() { r4_simproc_a 20; }

# A parser: `A` declares `##` left-associative and then right-associative, which parses `B`'s
# `100 ## 20 ## 3` into another term.
r4_parser_a() { printf 'infix%s:65 " ## " => Nat.sub\n' "$1" > T/A.lean; }
r4_parser_s0() {
  r4_main 'IO.println b'; r4_parser_a l
  printf 'import T.A\n@[noinline] def b : Nat := 100 ## 20 ## 3\n' > T/B.lean
}
r4_parser_s1() { r4_parser_a r; }

# A tactic that closes a goal with a number.
r4_tactic_a() {
  printf 'import Lean\nopen Lean Elab Tactic\nelab "mynum" : tactic => do\n  let g ← getMainGoal\n  g.assign (mkNatLit %s)\n  replaceMainGoal []\n' "$1" > T/A.lean
}
r4_tactic_s0() {
  r4_main 'IO.println b'; r4_tactic_a 10
  printf 'import T.A\n@[noinline] def b : Nat := by mynum\n' > T/B.lean
}
r4_tactic_s1() { r4_tactic_a 20; }

# A term elaborator that returns a number.
r4_elab_a() { printf 'import Lean\nopen Lean Elab Term\nelab "mynum" : term => return mkNatLit %s\n' "$1" > T/A.lean; }
r4_elab_s0() {
  r4_main 'IO.println b'; r4_elab_a 10
  printf 'import T.A\n@[noinline] def b : Nat := mynum\n' > T/B.lean
}
r4_elab_s1() { r4_elab_a 20; }

# A delaborator for `foo` prints it as another name. A delaborator affects neither a kernel term nor compiled
# code, so the only result of `B` to follow it is the message `#check` logs.
r4_delab_a() {
  printf 'import Lean\nopen Lean PrettyPrinter Delaborator SubExpr\ndef foo (n : Nat) : Nat := n\n@[delab app.foo] def delabFoo : Delab := do\n  guard <| (← getExpr).getAppNumArgs == 1\n  let x ← withAppArg delab\n  `(foo%s $x)\n' "$1" > T/A.lean
}
r4_delab_s0() {
  r4_main; r4_delab_a 10
  printf 'import T.A\n#check foo 3\n' > T/B.lean
}
r4_delab_s1() { r4_delab_a 20; }

# `B` runs `#eval` on a function of `A`, which changes what it computes; `B`'s message is the result.
r4_eval_a() { printf 'def val (n : Nat) : Nat := n + %s\n' "$1" > T/A.lean; }
r4_eval_s0() {
  r4_main; r4_eval_a 10
  printf 'import T.A\n#eval val 1\n' > T/B.lean
}
r4_eval_s1() { r4_eval_a 20; }

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

all_cases="spec_transitive spec_link spec_type spec_precomp csimp_transitive csimp_late specialize_attr
  class_same class_cross nospec_type folder_cross reducible_cross binder_inline d2_folder d2_tolerated d2_cpass
  local_inst_own erase_inst_own scoped_inst local_red_own2 local_red_own3 scoped_red_own
  table_order folder_order red_order
  d2_tolerated_lean d2_tolerated_reader f3_own_folder f3_own_cpass f3_runtime_folder f3_runtime_cpass
  f1_cachespec f1_cachespec_hit premise_ir
  ir_eval macro_eval init_eval
  inl_small inl_inline inl_instance spec_nested spec_derived spec_local spec_renumber
  implemented_by csimp extern export noncomputable partial_body unsafe_body boxed_version structure_eta
  instance_reducible reducible macro_inline_instance inline_instance specialize_args closed_extraction
  decl_map enum_repr noinline_attr aux_local struct_repr
  outparam_pos folder_removal r4_simproc r4_parser r4_tactic r4_elab r4_delab r4_eval
  binder_fun binder_jp binder_param owner_macro owner_boxed owner_move binder_info_param binder_info_type"
failed=()
# `CASES` runs a subset; `NAME:cache` runs a case with the artifact cache (see `run_case`).
for c in ${CASES:-$all_cases}; do
  case $c in
    *:cache) run_case "${c%:cache}" cache || failed+=("$c") ;;
    *) run_case $c || failed+=($c) ;;
  esac
done
# The state the cutoff build of `spec_transitive` leaves behind, after another build and in a fresh tree that
# shares its artifact cache.
if [ -z "${CASES:-}" ]; then
  run_case spec_transitive cache || failed+=("spec_transitive (artifact cache)")
fi
if [ ${#failed[@]} -gt 0 ]; then
  echo "FAILURE: cases differing from a fresh build: ${failed[*]}"
  exit 1
fi
