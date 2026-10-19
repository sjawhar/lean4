module

import Lean
import all Lean.Compiler.LCNF.Specialize

/-!
The specializer's cache of imported specializations is built on its first lookup, not at import,
and the declaration that makes that lookup is not charged heartbeats for building it. Building the
cache allocates at least once per distinct imported key, so importing must allocate fewer times than
that, and so must the first lookup. Lookups answer as before: an entry of the current module shadows
an imported one, an imported key specialized by several modules resolves to the last module's entry,
and other keys miss.
-/

open Lean Compiler.LCNF Specialize

/--
info: Init specializes a key in several modules: true
importing does not build the imported cache: true
the first lookup is not charged for building it: true
a missing key misses: true
an imported key hits the last module's entry: true
a local entry shadows an imported one: true
-/
#guard_msgs in
#eval show IO Unit from do
  unsafe enableInitializersExecution
  let env ← importModules #[{ module := `Init }] {} (loadExts := true)
  let perModule := (Array.range env.header.moduleNames.size).map (specCacheExt.getModuleEntries env ·)
  let entries := perModule.flatten
  let distinctKeys := (entries.foldl (init := (∅ : Std.HashSet Expr)) (·.insert ·.key)).size
  let lastFor (key : Expr) := (entries.filter (·.key == key)).back?.map (·.declName)
  let overridden? := entries.find? fun e => lastFor e.key != some e.declName
  IO.println s!"Init specializes a key in several modules: {overridden?.isSome}"
  let some overridden := overridden? | return
  let beforeImport ← IO.getNumHeartbeats
  discard <| (specCacheExt.addImportedFn perModule).run { env, opts := {} }
  let afterImport ← IO.getNumHeartbeats
  IO.println s!"importing does not build the imported cache: {decide (afterImport - beforeImport < distinctKeys)}"
  let expected := lastFor overridden.key
  let missingKey := mkConst `specializeCacheLazyNoSuchKey
  let check : CoreM (Array String) := do
    let before ← IO.getNumHeartbeats
    let miss ← findSpecCache? missingKey
    let afterFirst ← IO.getNumHeartbeats
    let miss' ← findSpecCache? missingKey
    let hit ← findSpecCache? overridden.key
    cacheSpec overridden.key `localShadow
    let shadowed ← findSpecCache? overridden.key
    return #[
      s!"the first lookup is not charged for building it: {decide (afterFirst - before < distinctKeys)}",
      s!"a missing key misses: {miss.isNone && miss'.isNone}",
      s!"an imported key hits the last module's entry: {expected != some overridden.declName && hit == expected}",
      s!"a local entry shadows an imported one: {shadowed == some `localShadow}"]
  let (lines, _) ← check.toIO { fileName := "<test>", fileMap := default } { env }
  lines.forM IO.println
