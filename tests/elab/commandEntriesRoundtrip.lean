import Lean
/-! Per-command `.olean` payloads include all persistent extension additions and scoped local entries,
including dynamically registered extensions and parser/macro state. -/
open Lean

unsafe def commandEntriesOf (e : EnvExtensionEntry) : CommandEntries := unsafeCast e

def runLean (dir : System.FilePath) (args : Array String) : IO Unit := do
  let out ← IO.Process.output { cmd := "lean", args, cwd := dir, env := #[("LEAN_PATH", some dir.toString)] }
  unless out.exitCode = 0 do
    throw <| IO.userError s!"lean {args} failed ({out.exitCode}):\n{out.stdout}\n{out.stderr}"
unsafe def compactBytes (dir : System.FilePath) (tag : String) (a : α)
    (allowClosures := false) : IO ByteArray := do
  let path := dir / s!"{tag}.bin"
  let _ ← CompactedRegion.save path `compare a #[] none (allowClosures := allowClosures)
  IO.FS.readBinFile path

def excludedExtension (n : Name) : Bool :=
  let s := n.toString
  n == commandEntriesExt.name || n == `Lean.ModuleUsage.ext || n == `Lean.ModuleUsage.stmtExt ||
    s.endsWith ".exportedAxiomsExt" || s.endsWith ".modPkgExt" ||
    s.endsWith ".deprecatedModuleExt" || s.endsWith "symbolFrequency" || s.endsWith "sineQueNon"

def sameParse (expected actual : Environment) (input : String) : Bool :=
  match Parser.runParserCategory expected `term input, Parser.runParserCategory actual `term input with
  | .ok a, .ok b => a == b
  | .error a, .error b => a == b
  | _, _ => false

unsafe def main : IO Unit := IO.FS.withTempDir fun dir => do
  IO.FS.writeFile (dir / "X.lean") "import Lean\nopen Lean\ndef v := 5\nregister_simp_attr my_set\ninitialize myExt : SimplePersistentEnvExtension Name (Array Name) ← registerSimplePersistentEnvExtension { addEntryFn := Array.push, addImportedFn := fun as => as.foldl (· ++ ·) #[] }\ninitialize registerBuiltinAttribute { name := `my_tag, descr := \"test\", add := fun decl _ _ => modifyEnv (myExt.addEntry · decl) }\n"
  IO.FS.writeFile (dir / "M.lean") "import X\n\ntheorem a : True := trivial\n\ndef h : Nat → Nat | 0 => 1 | n + 1 => n\n\n@[simp] theorem s : v = 5 := rfl\nattribute [local simp] s\n@[local simp] theorem ls : 2 = 2 := rfl\nattribute [local simp] s in theorem tin : 3 = 3 := by simp\nnamespace Foo\nend Foo\nattribute [local simp] a in open Foo in @[local simp] theorem t2 : True := trivial\nnamespace A.B\ntheorem tn : True := trivial\nend A.B\n\ntheorem d : 2 + 2 = 4 := by decide +kernel\ndef e1 : Fin 5 := ⟨3, by decide +kernel⟩\ninstance : Inhabited Nat := ⟨v⟩\n\n/-- A reducible definition with a docstring. -/\n@[reducible] def r : Nat := v + 1\n\nstructure P where\n  x : Nat\n  y : Nat\n\ninductive T where\n  | leaf\n  | node (l : T) (n : Nat) (r : T)\n\ndef T.size : T → Nat\n  | .leaf => 0\n  | .node l _ r => l.size + 1 + r.size\n\ndef k : Nat → Nat | 0 => 2 | n + 1 => n + 3\ndef e2 : Fin 5 := ⟨3, by decide +kernel⟩\ntheorem d2 : 2 + 2 = 4 := by decide +kernel\n\nnoncomputable def cl : Decidable (∀ n : Nat, n = n) := by classical exact inferInstance\nnamespace Prot\nprotected def p := 1\nend Prot\n@[my_set] theorem ms : 5 = 5 := rfl\n@[my_tag] def myTagged := 1\nsyntax \"⊕⊕\" term : term\nmacro_rules | `(⊕⊕ $x) => `($x + 1)\nnotation \"⊗⊗\" => Nat.add\n"
  runLean dir #["-o", "X.olean", "X.lean"]
  initSearchPath (← getBuildDir) [dir]
  enableInitializersExecution
  let input ← IO.FS.readFile (dir / "M.lean")
  let some expectedEnv ← Elab.runFrontend input {} (dir / "M.lean").toString `M
      (oleanFileName? := some (dir / "M.olean")) |
    throw <| IO.userError "normal elaboration failed"
  let observations ← ModuleUsage.commandObservationsRef.get
  let some first := observations[0]? | throw <| IO.userError "missing first command observation"
  let baseEnv := first.before.env
  let (md, region) ← readModuleData (dir / "M.olean")
  let some raw := (md.entries.find? (·.1 == commandEntriesExt.name)).map (·.2) |
    throw <| IO.userError "missing commandEntriesExt payload"
  let entries := raw.map commandEntriesOf
  let names : Array Name := entries.flatMap fun entry => entry.entries.map fun p => p.1
  let locals : Array (Nat × Name × EnvExtensionEntry) := entries.flatMap fun entry => entry.locals
  IO.println s!"commands: {entries.size}"
  IO.println s!"payload extensions: {names.size}"
  IO.println s!"user extension: {names.contains `myExt}"
  IO.println s!"custom simp set: {names.any fun name => name.toString.startsWith "ext._@.X."}"
  IO.println s!"parser extension: {names.contains `Lean.Parser.parserExtension}"
  IO.println s!"macro attribute: {names.contains `Lean.Elab.macroAttribute}"
  IO.println s!"local entries: {locals.size}"
  IO.println s!"local simp: {locals.any (fun (_, n, _) => n == `Lean.Meta.simpExtension)}"
  let localDepths : Array Nat := locals.map fun entry => entry.1
  IO.println s!"transient local depth: {localDepths.any fun depth => depth > 0}"
  IO.println s!"cache payloads: {entries.any fun entry => !entry.caches.states.isEmpty}"
  for entry in entries do
    IO.println s!"{entry.idx} extensions={entry.entries.map (·.1)} \
      locals={entry.locals.map fun (depth, name, _) => (depth, name)} \
      caches={entry.caches.states.map (·.1)}"
  let mut replayed := expectedEnv
  let baseStates ← EnvExtension.snapshotStates baseEnv
  for h : i in [:baseStates.size] do
    replayed ← EnvExtension.restoreStateAt replayed i baseStates[i]
  replayed := replayed.setMainModule `M
  for entry in entries do
    replayed ← replayCommandEntries replayed entry (scopeDepth replayed) {}
  let replayedEntries := (← replayed.computeExtEntries).private
  let expected : Std.HashMap Name (Array EnvExtensionEntry) :=
    md.entries.foldl (fun m (n, es) => m.insert n es) {}
  let actual : Std.HashMap Name (Array EnvExtensionEntry) :=
    replayedEntries.foldl (fun m (n, es) => m.insert n es) {}
  let mut mismatches := #[]
  for (name, es) in md.entries do
    unless excludedExtension name do
      let got := actual.getD name #[]
      unless es.size == got.size &&
          (← compactBytes dir s!"expected-{name.hash}" es) ==
            (← compactBytes dir s!"actual-{name.hash}" got) do
        mismatches := mismatches.push name
  for (name, _) in replayedEntries do
    unless excludedExtension name || expected.contains name do
      mismatches := mismatches.push name
  -- Closure-bearing state has no canonical byte encoding; compare its serialized descriptors and behavior.
  let closureScoped := #[
    `Lean.Meta.instanceExtension,
    `Lean.Parser.parserExtension,
    `Lean.PrettyPrinter.Delaborator.appUnexpanderAttribute,
    `Lean.Elab.macroAttribute
  ]
  let scopedExts ← scopedEnvExtensionsRef.get
  let mut scopedMismatches := #[]
  for ext in scopedExts do
    unless closureScoped.contains ext.ext.name do
      let expectedState := ext.getState (asyncMode := .local) expectedEnv
      let actualState := ext.getState (asyncMode := .local) replayed
      unless (← compactBytes dir s!"scoped-expected-{ext.ext.name.hash}" expectedState
          (allowClosures := true)) ==
          (← compactBytes dir s!"scoped-actual-{ext.ext.name.hash}" actualState
            (allowClosures := true)) do
        scopedMismatches := scopedMismatches.push ext.ext.name
  let expectedMacro := Elab.macroAttribute.ext.getState expectedEnv
  let actualMacro := Elab.macroAttribute.ext.getState replayed
  unless (← compactBytes dir "expected-macro" expectedMacro.newEntries) ==
      (← compactBytes dir "actual-macro" actualMacro.newEntries) do
    scopedMismatches := scopedMismatches.push `Lean.Elab.macroAttribute
  let expectedUnexpanders := PrettyPrinter.Delaborator.appUnexpanderAttribute.ext.getState expectedEnv
  let actualUnexpanders := PrettyPrinter.Delaborator.appUnexpanderAttribute.ext.getState replayed
  unless (← compactBytes dir "expected-unexpanders" expectedUnexpanders.newEntries) ==
      (← compactBytes dir "actual-unexpanders" actualUnexpanders.newEntries) do
    scopedMismatches :=
      scopedMismatches.push `Lean.PrettyPrinter.Delaborator.appUnexpanderAttribute
  unless sameParse expectedEnv replayed "⊕⊕ 1" && sameParse expectedEnv replayed "⊗⊗" do
    scopedMismatches := scopedMismatches.push `Lean.Parser.parserExtension
  let expectedInstances := Meta.instanceExtension.getState expectedEnv
  let actualInstances := Meta.instanceExtension.getState replayed
  let expectedInstanceNames := expectedInstances.instanceNames.toArray.qsort (Name.quickLt ·.1 ·.1)
  let actualInstanceNames := actualInstances.instanceNames.toArray.qsort (Name.quickLt ·.1 ·.1)
  let sameInstanceNames :=
    (← compactBytes dir "expected-instances" expectedInstanceNames) ==
      (← compactBytes dir "actual-instances" actualInstanceNames)
  let expectedClassical := expectedInstances.instanceNames.contains `Classical.propDecidable
  let actualClassical := actualInstances.instanceNames.contains `Classical.propDecidable
  unless sameInstanceNames && !expectedClassical && !actualClassical do
    scopedMismatches := scopedMismatches.push `Lean.Meta.instanceExtension
  IO.println s!"scoped identical: {scopedMismatches.isEmpty}"
  IO.println s!"identical: {mismatches.isEmpty && scopedMismatches.isEmpty}"
  unless mismatches.isEmpty && scopedMismatches.isEmpty do
    throw <| IO.userError s!"extension mismatches: {mismatches}; scoped: {scopedMismatches}"
  Runtime.forget region

#eval main
