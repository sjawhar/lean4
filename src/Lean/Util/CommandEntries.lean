/-
Copyright (c) 2026 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Sami Jawhar
-/
module

prelude
public import Lean.ScopedEnvExtension

public section
namespace Lean

/-- The entries a command added to each non-persistent cache, keyed by the cache's registered name
(`registerCommandCacheExtension`), each erased from the cache's own entry type. -/
structure CommandCaches where
  deltas : Array (Name × Array EnvExtensionEntry) := #[]
  deriving Nonempty
private unsafe def scopedEntryOfEntryImpl (entry : EnvExtensionEntry) :
    ScopedEnvExtension.Entry EnvExtensionEntry :=
  unsafeCast entry

@[implemented_by scopedEntryOfEntryImpl]
private opaque scopedEntryOfEntry (entry : EnvExtensionEntry) :
    ScopedEnvExtension.Entry EnvExtensionEntry


/-- Environment-extension and local scoped-extension payload of one top-level command. -/
structure CommandEntries where
  idx : Nat
  /-- Per persistent extension, the entries whose replay onto the command's before-state yields its after-state
  (`PersistentEnvExtension.stateDelta?`), oldest first. -/
  entries : Array (Name × Array EnvExtensionEntry)
  locals : Array (Nat × Name × EnvExtensionEntry)
  caches : CommandCaches := {}
  /-- Persistent extensions this command changed that have no conversion from their `.olean` entries back to
  the entries `addEntryFn` accepts (`PersistentEnvExtension.ofOLeanEntry?`). -/
  unreplayable : Array Name := #[]
  /-- Extensions whose state this command changed in a way no entry expresses (`StateDelta.stateOnly`, a change
  to an extension without `stateDelta?`, or `Lean.scopeDepthExt` for a change of scope depth). Such a payload is
  not replayed: the command must be elaborated. -/
  stateOnly : Array Name := #[]
  deriving Nonempty

builtin_initialize commandEntriesExt :
    PersistentEnvExtension CommandEntries CommandEntries (Array CommandEntries) ←
  registerPersistentEnvExtension {
    mkInitial := pure #[]
    addImportedFn := fun _ => pure #[]
    addEntryFn := Array.push
    exportEntriesFnEx := fun _ entries =>
      { exported := #[], server := #[], «private» := entries }
    asyncMode := .mainOnly
  }

private def excludedExtension (n : Name) : Bool :=
  let s := n.toString
  n == commandEntriesExt.name || n == `Lean.ModuleUsage.ext || n == `Lean.ModuleUsage.stmtExt ||
    s.endsWith ".exportedAxiomsExt" || s.endsWith ".modPkgExt" ||
    s.endsWith ".deprecatedModuleExt" || s.endsWith "symbolFrequency" || s.endsWith "sineQueNon"

/-- Records one command's payload: for every persistent extension whose state changed, its typed state delta
(`PersistentEnvExtension.stateDelta?`); the scoped local entries it added; and its cache deltas. States are read
in the mode `computeExtEntries` exports them. Takes time proportional to what the command changed, apart from
the per-extension state reads. -/
def recordCommandDelta (before after : Environment) (idx : Nat) : IO Environment := do
  let scopedNames := (← scopedEnvExtensionsRef.get).foldl (fun s ext => s.insert ext.ext.name) ({} : NameSet)
  let mut entries := #[]
  let mut unreplayable := #[]
  let mut stateOnly := #[]
  for ext in ← persistentEnvExtensionsRef.get do
    if excludedExtension ext.name then continue
    let mode := match ext.toEnvExtension.asyncMode with
      | .async _ => .sync
      | mode => mode
    let s₀ := ext.getState before (asyncMode := mode)
    let s₁ := ext.getState after (asyncMode := mode)
    if SharedDiff.sameObject s₀ s₁ then continue
    let mut changed := true
    match (ext.stateDelta?.map (· s₀ s₁) : Option (StateDelta EnvExtensionEntry)) with
    | some (.entries es) =>
      if es.isEmpty then changed := false else entries := entries.push (ext.name, es)
    | some .stateOnly | none => stateOnly := stateOnly.push ext.name
    if changed && !(scopedNames.contains ext.name || ext.ofOLeanEntry?.isSome) then
      unreplayable := unreplayable.push ext.name
  if scopeDepth before != scopeDepth after then
    stateOnly := stateOnly.push `Lean.scopeDepthExt
  let beforeLocals := localEntriesExt.getState (asyncMode := .local) before |>.size
  let afterLocals := localEntriesExt.getState (asyncMode := .local) after
  let locals := afterLocals.extract beforeLocals afterLocals.size
  let caches := (← commandCacheExtensionsRef.get).filterMap fun ext =>
    let delta := ext.delta before after
    if delta.isEmpty then none else some (ext.name, delta)
  return commandEntriesExt.addEntry after
    { idx, entries, locals, caches := { deltas := caches }, unreplayable, stateOnly }

/-- Replaces the current module's command payload with `entries` before writing its `.olean`. -/
def setCommandEntries (env : Environment) (entries : Array CommandEntries) : Environment :=
  commandEntriesExt.modifyState env fun _ => entries

/-- Why the module's command payloads cannot be replayed: a command changed an unreplayable extension, or a
declaration command (`isDecl` of its index) changed extension state that no entry expresses. A non-declaration
command with such a change is elaborated again rather than replayed, so it does not prevent reuse. -/
def commandEntriesNoskipReason? (entries : Array CommandEntries) (isDecl : Nat → Bool) : Option String :=
  if let some name := entries.findSome? (·.unreplayable[0]?) then
    some s!"unreplayable extension {name}"
  else
    entries.findSome? fun ce =>
      if isDecl ce.idx then ce.stateOnly[0]?.map (s!"state-only change to {·} in declaration command {ce.idx}")
      else none

private def isIR (n : Name) : Bool := n == `Lean.IR.declMapExt
private def isLCNF (n : Name) : Bool := (`Lean.Compiler.LCNF).isPrefixOf n

/-- Replays a command payload into `env`. Entries reached only inside a deeper transient scope remain in the
local-entry log but are not installed in the current scoped state. Throws on a payload with `stateOnly`
changes. -/
def replayCommandEntries (env : Environment) (ce : CommandEntries) (dStart : Nat) (opts : Options) :
    IO Environment := do
  unless ce.stateOnly.isEmpty do
    throw <| IO.userError
      s!"command {ce.idx} changed {ce.stateOnly} without entries; it must be elaborated again"
  let pExts ← persistentEnvExtensionsRef.get
  let byName ← mkExtNameMap 0
  let scopedExts ← scopedEnvExtensionsRef.get
  let scopedByName : Std.HashMap Name
      (ScopedEnvExtension EnvExtensionEntry EnvExtensionEntry EnvExtensionState) :=
    scopedExts.foldl (fun m ext => m.insert ext.ext.name ext) {}
  let ordered := ce.entries.filter (isIR ·.1) ++ ce.entries.filter (isLCNF ·.1) ++
    ce.entries.filter (fun e => !isIR e.1 && !isLCNF e.1)
  let mut env := env
  for (name, entries) in ordered do
    if let some scopedExt := scopedByName[name]? then
      for entry in entries do
        let entry := scopedEntryOfEntry entry
        let state := scopedExt.getState (asyncMode := .local) env
        match entry with
        | .global a =>
          let b ← scopedExt.descr.ofOLeanEntry state a |>.run { env, opts }
          env := scopedExt.ext.addEntry env (.global b)
        | .scoped ns a =>
          let b ← scopedExt.descr.ofOLeanEntry state a |>.run { env, opts }
          env := scopedExt.ext.addEntry env (.scoped ns b)
    else
      let some i := byName[name]? | throw <| IO.userError s!"unknown environment extension {name}"
      let ext := pExts[i]!
      let some ofOLeanEntry := ext.ofOLeanEntry? |
        throw <| IO.userError s!"unreplayable extension {name}"
      let mode := match ext.toEnvExtension.asyncMode with
        | .async _ => .sync
        | mode => mode
      for entry in entries do
        let b ← ofOLeanEntry (ext.getState env (asyncMode := mode)) entry |>.run { env, opts }
        env := ext.addEntry env b (asyncMode := mode)
  for (depth, name, entry) in ce.locals do
    if depth ≤ dStart then
      let some ext := scopedByName[name]? |
        throw <| IO.userError s!"unknown scoped environment extension {name}"
      let state := ext.getState (asyncMode := .local) env
      let b ← ext.descr.ofOLeanEntry state entry |>.run { env, opts }
      env := ext.addLocalEntry env b
    else
      env := appendLocalEntries env #[(depth, name, entry)]
  let cacheByName : Std.HashMap Name CommandCacheExtension :=
    (← commandCacheExtensionsRef.get).foldl (fun m ext => m.insert ext.name ext) {}
  for (name, delta) in ce.caches.deltas do
    let some ext := cacheByName[name]? |
      throw <| IO.userError s!"unknown command cache extension {name}"
    env := ext.replay env delta
  return env

end Lean
