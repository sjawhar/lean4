import Lean
import Redecl.Base

/-!
Under `debug.skipKernelTC`, a mutual block of unsafe definitions with fresh names is still added.
-/

open Lean

set_option debug.skipKernelTC true in
run_cmd Elab.Command.liftCoreM <| addDecl <| .mutualDefnDecl [
  { name := `baz, levelParams := [], type := mkConst ``Nat, value := mkNatLit 2, hints := .opaque,
    safety := .unsafe },
  { name := `qux, levelParams := [], type := mkConst ``Nat, value := mkNatLit 3, hints := .opaque,
    safety := .unsafe }]

#eval show Lean.MetaM Unit from do
  unless (← Lean.getEnv).contains `baz && (← Lean.getEnv).contains `qux do
    throwError "`baz` and `qux` were not added"
