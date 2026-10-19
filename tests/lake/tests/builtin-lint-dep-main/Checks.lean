import Lean.Linter.CodeQuality

open Lean Linter CodeQuality

-- Reports which `Main.lean` the context's source search path resolves `Main` to:
-- the root package's (the one that defines `rootUnusedVar`) or another one.
@[package_code_quality_check]
public meta def mainSourceMetric : PackageCheck where
  run ctx := do
    let mut contents := ""
    if let some file ← Lean.SearchPath.findModuleWithExt ctx.srcSearchPath "lean" `Main then
      contents ← IO.FS.readFile file
    let name :=
      if (contents.splitOn "rootUnusedVar").length > 1 then "mainSourceIsRoot"
      else "mainSourceIsNotRoot"
    return #[{ name, source := .module ctx.topLevelModule, value := .scalar 1.0 }]
