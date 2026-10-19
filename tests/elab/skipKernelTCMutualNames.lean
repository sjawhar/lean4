import Lean

/-!
With `debug.skipKernelTC`, a mutual block of unsafe definitions gets the same name errors as with
kernel checking: for a name that the block repeats, and for a name that an import declares.
-/

open Lean

def mkBlock (names : List Name) : Declaration :=
  .mutualDefnDecl <| names.map fun name =>
    { name, levelParams := [], type := mkConst ``Nat, value := mkNatLit 0, hints := .opaque,
      safety := .unsafe }

/-- error: (kernel) invalid mutual definition, duplicate declaration name 'x₁' -/
#guard_msgs in
run_meta addDecl (mkBlock [`x₁, `x₁])

/-- error: (kernel) invalid mutual definition, duplicate declaration name 'x₂' -/
#guard_msgs in
set_option debug.skipKernelTC true in
run_meta addDecl (mkBlock [`x₂, `x₂])

/-- error: (kernel) constant has already been declared 'Nat.add' -/
#guard_msgs in
run_meta addDecl (mkBlock [`y₁, `Nat.add])

/-- error: (kernel) constant has already been declared 'Nat.add' -/
#guard_msgs in
set_option debug.skipKernelTC true in
run_meta addDecl (mkBlock [`y₂, `Nat.add])
