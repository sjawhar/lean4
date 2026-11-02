import Lean

/-!
A name that both an import and the current module declare resolves in the kernel to the imported
declaration, as in stock Lean, whose `Kernel.Environment.find?` searches the imported constants
first. Only an unchecked addition can declare an imported name again.
-/

open Lean

#eval show CoreM Unit from do
  let kenv := (← getEnv).toKernelEnv
  let some imported := kenv.find? ``Nat.add | throwError "`Nat.add` is not imported"
  let kenv ← ofExceptKernelException <| kenv.addDeclWithoutChecking <|
    .axiomDecl { name := ``Nat.add, levelParams := [], type := mkConst ``Nat, isUnsafe := false }
  let some found := kenv.find? ``Nat.add | throwError "`Nat.add` is missing"
  unless found.type == imported.type do
    throwError "`Nat.add` resolves to the local declaration of type {found.type}, not the imported one"
