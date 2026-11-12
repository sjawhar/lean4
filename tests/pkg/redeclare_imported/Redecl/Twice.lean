import Lean
import Redecl.Base

/-!
Under `debug.skipKernelTC`, a mutual block of unsafe definitions that declares the imported name
`foo` again must be rejected, as it is with kernel checking.
-/

open Lean

set_option debug.skipKernelTC true in
run_cmd Elab.Command.liftCoreM <| addDecl <| .mutualDefnDecl [
  { name := `foo, levelParams := [], type := mkConst ``Nat, value := mkNatLit 2, hints := .opaque,
    safety := .unsafe },
  { name := `bar, levelParams := [], type := mkConst ``Nat, value := mkNatLit 3, hints := .opaque,
    safety := .unsafe }]
