module
import Lake

/-! # A `needs` target that writes a source of its library

The library `Gen` needs `genOut`, which writes its module `Gen.Out` after a delay. `Main` imports `Gen.Out`, so Lake
must read `Gen/Out.lean` only after `genOut` has finished (#13598, #13601).
-/
open Lake DSL

package test

target genOut pkg : Unit := Job.async (prio := .dedicated) do
  IO.sleep 1000
  IO.FS.writeFile (pkg.dir / "Gen" / "Out.lean") "def genValue : Nat := 2\n"

lean_lib Gen where
  globs := #[.submodules `Gen]
  needs := #[`@/genOut]

lean_lib Main
