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

/-- Changed non-persistent extension states made by a command, keyed by their stable extension index. Whole
states are required because environment extensions have no common entry API; D-ctx guarantees the pre-state is
identical before a payload can be replayed. -/
structure CommandCaches where
  states : Array (Nat × EnvExtensionEntry) := #[]
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
  entries : Array (Name × Array EnvExtensionEntry)
  locals : Array (Nat × Name × EnvExtensionEntry)
  caches : CommandCaches := {}
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

private def compactEntryBytes (path : System.FilePath) (entry : EnvExtensionEntry)
    (allowClosures := false) : IO ByteArray := do
  let _ ← unsafe CompactedRegion.save path `commandEntry entry #[] none (allowClosures := allowClosures)
  IO.FS.readBinFile path

private unsafe def envStatePtrEqImpl (a b : EnvExtensionState) : Bool :=
  ptrEq a b

@[implemented_by envStatePtrEqImpl]
private opaque envStatePtrEq (a b : EnvExtensionState) : Bool

private def entryDelta (dir : System.FilePath) (extName : Name)
    (before after : Array EnvExtensionEntry) : IO (Array EnvExtensionEntry) := do
  let mut counts : Std.HashMap ByteArray Nat := {}
  for h : i in [:before.size] do
    let key ← compactEntryBytes (dir / s!"b-{extName.hash}-{i}") before[i]
    counts := counts.alter key fun n => some (n.getD 0 + 1)
  let mut delta := #[]
  for h : i in [:after.size] do
    let entry := after[i]
    let key ← compactEntryBytes (dir / s!"a-{extName.hash}-{i}") entry
    match counts[key]? with
    | some (n + 1) => counts := if n == 0 then counts.erase key else counts.insert key n
    | _ => delta := delta.push entry
  return delta

/-- Captures one command's exported-entry multiset delta. Comparing compacted bytes works for arbitrary
type-erased extension entries and does not rely on sorted exporters preserving an array prefix. -/
def recordCommandDelta (before after : Environment) (idx : Nat) : IO Environment :=
  IO.FS.withTempDir fun dir => do
    let beforeEntries := (← before.computeExtEntries).private
    let afterEntries := (← after.computeExtEntries).private
    let beforeByName : Std.HashMap Name (Array EnvExtensionEntry) :=
      beforeEntries.foldl (fun m (n, es) => m.insert n es) {}
    let mut entries := #[]
    for (name, es) in afterEntries do
      unless excludedExtension name do
        let delta ← entryDelta dir name (beforeByName.getD name #[]) es
        unless delta.isEmpty do entries := entries.push (name, delta)
    let beforeLocals := localEntriesExt.getState (asyncMode := .local) before |>.size
    let afterLocals := localEntriesExt.getState (asyncMode := .local) after
    let locals := afterLocals.extract beforeLocals afterLocals.size
    let pExts ← persistentEnvExtensionsRef.get
    let persistentIdxs := pExts.foldl
      (fun s ext => s.insert ext.toEnvExtension.index) ({} : Std.HashSet Nat)
    let beforeStates ← EnvExtension.snapshotStates before
    let afterStates ← EnvExtension.snapshotStates after
    let mut states := #[]
    for i in [:afterStates.size] do
      if i < beforeStates.size && !persistentIdxs.contains i &&
          i != localEntriesExt.index && i != scopeDepthExt.index &&
          !envStatePtrEq beforeStates[i]! afterStates[i]! then
        let b := eraseEnvExtensionEntry beforeStates[i]!
        let a := eraseEnvExtensionEntry afterStates[i]!
        let bb ← compactEntryBytes (dir / s!"cache-before-{i}") b (allowClosures := true)
        let ab ← compactEntryBytes (dir / s!"cache-after-{i}") a (allowClosures := true)
        unless bb == ab do states := states.push (i, a)
    return commandEntriesExt.addEntry after { idx, entries, locals, caches := { states } }

/-- Replaces the current module's command payload with `entries` before writing its `.olean`. -/
def setCommandEntries (env : Environment) (entries : Array CommandEntries) : Environment :=
  commandEntriesExt.modifyState env fun _ => entries

private def isIR (n : Name) : Bool := n == `Lean.IR.declMapExt
private def isLCNF (n : Name) : Bool := (`Lean.Compiler.LCNF).isPrefixOf n

/-- Replays a command payload into `env`. Entries reached only inside a deeper transient scope remain in the
local-entry log but are not installed in the current scoped state. -/
def replayCommandEntries (env : Environment) (ce : CommandEntries) (dStart : Nat) (opts : Options) :
    IO Environment := do
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
      let mode := match ext.toEnvExtension.asyncMode with
        | .async _ => .sync
        | mode => mode
      for entry in entries do env := ext.addEntry env entry (asyncMode := mode)
  for (depth, name, entry) in ce.locals do
    if depth ≤ dStart then
      let some ext := scopedByName[name]? |
        throw <| IO.userError s!"unknown scoped environment extension {name}"
      let state := ext.getState (asyncMode := .local) env
      let b ← ext.descr.ofOLeanEntry state entry |>.run { env, opts }
      env := ext.addLocalEntry env b
    else
      env := appendLocalEntries env #[(depth, name, entry)]
  for (idx, state) in ce.caches.states do
    env ← EnvExtension.restoreStateAt env idx (envExtensionStateOfEntry state)
  return env

end Lean
