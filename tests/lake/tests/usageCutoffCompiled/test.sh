#!/usr/bin/env bash
source ../common.sh

./clean.sh
mkdir -p work/cut work/fresh
cd work

# Each case is a package in two states. It is built in state 0, edited to state 1 and built again with the
# usage cutoff on (`work/cut/CASE`); the state-1 sources are also built from scratch with the cutoff off
# (`work/fresh/CASE`). Everything observable must agree: whether the build succeeds, the messages it logs,
# what the executable `app` prints, what `lake env lean` prints for each `Check*.lean`, and the C file of
# every module, which for a module the cutoff skipped must be what compiling its sources now produces (no case
# here makes a module's specialization-cache miss a hit, the one difference the cutoff accepts). A case writes
# its state-0 files with `CASE_s0` and the files state 1 changes with `CASE_s1`, both in the package directory.

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

# Builds case `$1` both ways and compares. With `$2 = cache`, both cutoff-on builds use an artifact cache
# shared with a second state-1 tree (`work/cut/CASE_cache.shared`), which is built from it and compared too,
# and the state-1 tree is built a second time before it is observed.
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
  if [ "$mode" = cache ]; then
    rc=0
    (cd "$cut" && env "${env[@]}" "$LAKE" build -v > ../$n.2.log 2>&1) || rc=$?
    (cd "$cut" && observe $rc ../$n.2.log) > cut/$n.obs
    mkdir -p "cut/$n.shared"
    (cd "cut/$n.shared" && "${c}_s0" && "${c}_s1")
    local rcs=0
    (cd "cut/$n.shared" && env "${env[@]}" "$LAKE" build -v > ../$n.shared.log 2>&1) || rcs=$?
    (cd "cut/$n.shared" && observe $rcs ../$n.shared.log) > cut/$n.shared.obs
  else
    (cd "$cut" && observe $rc ../$n.1.log) > cut/$n.obs
  fi
  rc=0
  (cd "$fresh" && "${c}_s0" && "${c}_s1" && LAKE_USAGE_CUTOFF=0 "$LAKE" build -v > ../$n.log 2>&1) || rc=$?
  (cd "$fresh" && observe $rc ../$n.log) > fresh/$n.obs
  local ok=1 o t f
  for o in cut/$n.obs ${mode:+cut/$n.shared.obs}; do
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

failed=()
for c in spec_transitive spec_link spec_type spec_precomp csimp_transitive csimp_late specialize_attr \
         ir_eval init_eval \
         inl_small inl_inline inl_instance spec_nested spec_derived spec_local spec_renumber \
         implemented_by csimp extern export noncomputable partial_body unsafe_body boxed_version structure_eta \
         instance_reducible reducible macro_inline_instance inline_instance specialize_args closed_extraction \
         decl_map enum_repr noinline_attr aux_local struct_repr; do
  run_case $c || failed+=($c)
done
# The state the cutoff build of `spec_transitive` leaves behind, after another build and in a fresh tree that
# shares its artifact cache.
run_case spec_transitive cache || failed+=("spec_transitive (artifact cache)")
if [ ${#failed[@]} -gt 0 ]; then
  echo "FAILURE: cases differing from a fresh build: ${failed[*]}"
  exit 1
fi
