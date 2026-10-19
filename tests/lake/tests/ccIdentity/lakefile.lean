import Lake
open System Lake DSL

package test where
  weakLeancArgs := (get_config? weakLeancArgs).toArray

lean_lib Foo

/-- A C object built by `buildO` with the compiler `LEAN_CC` names. -/
target ffi.o pkg : FilePath := do
  let srcJob ← inputTextFile <| pkg.dir / "ffi.c"
  let cc := (← IO.getEnv "LEAN_CC").getD "cc"
  buildO (pkg.buildDir / "c" / "ffi.o") srcJob #[] #["-O2"] cc
