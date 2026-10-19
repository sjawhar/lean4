module
import Lake

/-! # A `needs` target that writes a source of its own library

The library `Own` needs `genOwn`, which writes its module `Own.Gen` after a delay, and the library's root `Own`
imports `Own.Gen`. A build of the library must read `Own/Gen.lean` only after `genOwn` has finished (#13598).
-/
open Lake DSL

package test

target genOwn pkg : Unit := Job.async (prio := .dedicated) do
  IO.sleep 1000
  IO.FS.writeFile (pkg.dir / "Own" / "Gen.lean") "def genValue : Nat := 2\n"

lean_lib Own where
  needs := #[`@/genOwn]
