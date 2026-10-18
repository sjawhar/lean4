import Lean
/-! Every field of the states a declaration command can change is classified by the recorder, and adding a field
without classifying it fails here: `Elab.Command.State` (`ModuleUsage.commandStateFields`), the command scope
`Elab.Command.Scope` (encoded by `ModuleUsage.scopesEnc`, `ModuleUsage.scopeFields`), and a scoped extension's
`ScopedEnvExtension.State` and `StateStack` (`ScopedEnvExtension.stateFields`, `stackFields`). Each field is then
changed on its own: the command-state classifier (`ModuleUsage.commandStateChanges`) marks exactly the `stateOnly`
fields, and the scoped delta (`ScopedEnvExtension.stateDelta`, with `localEntriesAccountedFor` for the local-entry
count) refuses every stack change except new entries. -/
open Lean

def classified (label : String) (actual expected : Array Name) : IO Unit := do
  let unclassified := actual.filter (!expected.contains ·)
  let stale := expected.filter (!actual.contains ·)
  IO.println s!"{label}: {actual.size} fields, unclassified {unclassified}, not a field {stale}"

def deltaStr : StateDelta α → String
  | .entries es => s!"entries {es.size}"
  | .stateOnly => "stateOnly"

open Elab Command in
#eval show CommandElabM Unit from do
  let env ← getEnv
  classified "Elab.Command.State" (getStructureFields env ``Command.State)
    (ModuleUsage.commandStateFields.map (·.1))
  classified "Elab.Command.Scope" (getStructureFields env ``Command.Scope) ModuleUsage.scopeFields
  classified "ScopedEnvExtension.State" (getStructureFields env ``ScopedEnvExtension.State)
    ScopedEnvExtension.stateFields
  classified "ScopedEnvExtension.StateStack" (getStructureFields env ``ScopedEnvExtension.StateStack)
    ScopedEnvExtension.stackFields
  -- each `Command.State` field changed alone
  let st ← get
  let scope := st.scopes.head!
  let changed : List (Name × Command.State) := [
    (`env, { st with env := st.env.setMainModule `Other }),
    (`messages, { st with messages := st.messages.add { fileName := "F", pos := ⟨1, 0⟩, data := "m" } }),
    (`scopes, { st with scopes := { scope with opts := autoImplicit.set scope.opts (!autoImplicit.get scope.opts) } ::
      st.scopes.tail }),
    (`scopes, { st with scopes := st.scopes.foldr (fun s l => { s with header := s.header } :: l) [] }),
    (`usedQuotCtxts, { st with usedQuotCtxts := st.usedQuotCtxts.insert `q }),
    (`nextMacroScope, { st with nextMacroScope := st.nextMacroScope + 1 }),
    (`maxRecDepth, { st with maxRecDepth := st.maxRecDepth + 1 }),
    (`ngen, { st with ngen := st.ngen.next }),
    (`auxDeclNGen, { st with auxDeclNGen := st.auxDeclNGen.mkChild.2 }),
    (`infoState, { st with infoState := { st.infoState with enabled := !st.infoState.enabled } }),
    (`infoState, { st with infoState := { st.infoState with trees := st.infoState.trees.push default } }),
    (`traceState, { st with traceState := { st.traceState with tid := st.traceState.tid + 1 } }),
    (`snapshotTasks, { st with
      snapshotTasks := st.snapshotTasks.push ({ stx? := none, task := .pure default, cancelTk? := none }) }),
    (`prevLinterStates, { st with prevLinterStates := some (.pure #[]) })]
  for (field, st') in changed do
    let cls := (ModuleUsage.commandStateFields.find? (·.1 == field)).map (·.2)
    IO.println s!"{field} ({repr cls}) changed: markers {ModuleUsage.commandStateChanges st st'}"
  -- each scoped stack field changed alone (two levels; `n` local entries recorded for the extension)
  let lvl : ScopedEnvExtension.State Nat := { state := 0 }
  let s₀ : ScopedEnvExtension.StateStack Name Name Nat := { stateStack := [lvl, lvl] }
  let top (f : ScopedEnvExtension.State Nat → ScopedEnvExtension.State Nat) : ScopedEnvExtension.StateStack Name Name Nat :=
    { s₀ with stateStack := [f lvl, lvl] }
  let cases : List (String × ScopedEnvExtension.StateStack Name Name Nat × ScopedEnvExtension.StateStack Name Name Nat
      × Nat) := [
    ("nothing", s₀, s₀, 0),
    ("state alone, without an entry or a local entry", s₀, top ({ · with state := 1 }), 0),
    ("activeScopes", s₀, top ({ · with activeScopes := ({} : NameSet).insert `Foo }), 0),
    ("delimitsLocal", s₀, top ({ · with delimitsLocal := false }), 0),
    ("modCount", s₀, top ({ · with modCount := 1 }), 0),
    ("generation", s₀, top ({ · with generation := 1 }), 0),
    ("localCount without a recorded local entry", s₀, top ({ · with localCount := 1 }), 0),
    ("localCount with a recorded local entry", s₀, top ({ · with localCount := 1 }), 1),
    ("stack length", s₀, { s₀ with stateStack := [lvl] }, 0),
    ("scopedEntries", s₀, { s₀ with scopedEntries := { map := ({} : SMap Name (PArray Name)).insert `Foo {} } }, 0),
    ("newEntries, new prefix", s₀, { s₀ with newEntries := [.global `e] }, 0),
    ("newEntries, not a tail", { s₀ with newEntries := [.global `old] }, { s₀ with newEntries := [.global `e] }, 0),
    ("pushCount", s₀, { s₀ with pushCount := 1 }, 0)]
  for (label, b, a, n) in cases do
    IO.println s!"scoped {label}: {deltaStr (ScopedEnvExtension.stateDelta b a)}, \
      local entries accounted for: {ScopedEnvExtension.localEntriesAccountedFor b a n}"
