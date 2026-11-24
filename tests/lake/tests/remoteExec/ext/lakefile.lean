import Lake

/-!
A package with an `extern_lib`, `libleanext`, which implements the function that `Ext0` declares. `UseExt`
precompiles its imports, so its compile loads the external library and `Ext0`'s library shared library, which does
not link the external library on Linux. `Ext0` precompiles nothing, so its compile loads no library.
-/

open System Lake DSL

package ext

lean_lib Ext0

lean_lib UseExt where
  precompileImports := true

target ext.o pkg : FilePath := do
  let srcJob ← inputTextFile <| pkg.dir / "ext.c"
  buildO (pkg.buildDir / "c" / "ext.o") srcJob #["-I", (← getLeanIncludeDir).toString] #["-fPIC"] "cc" getLeanTrace

extern_lib libleanext pkg := do
  buildStaticLib (pkg.staticLibDir / nameToStaticLib "leanext") #[← ext.o.fetch]
